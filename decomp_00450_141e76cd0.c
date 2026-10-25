// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141e76cd0 FUN_141e76cd0 body=476 status=ok
// SIG undefined FUN_141e76cd0(void)

undefined8 *
FUN_141e76cd0(undefined8 param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             undefined4 param_5)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 local_res8;
  undefined8 local_res20;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined1 *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  
  local_res20 = param_4;
  if ((DAT_146ab6383 != '\0') && (cVar1 = FUN_1415e13e0(), cVar1 == '\0')) {
    puVar3 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 0xfU & 0xfffffffffffffff0);
    local_res8 = 0;
    puVar2 = puVar3 + 0xc;
    if (*(undefined8 **)(param_3 + 0x38) < puVar2) {
      FMemStackBase::AllocateNewChunk(param_3 + 0x30,0x70);
      puVar3 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 0xfU & 0xfffffffffffffff0);
      puVar2 = puVar3 + 0xc;
    }
    *(undefined8 **)(param_3 + 0x30) = puVar2;
    *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
    local_b8 = (undefined4)param_1;
    uStack_b4 = (undefined4)((ulonglong)param_1 >> 0x20);
    **(undefined8 **)(param_3 + 8) = puVar3;
    *(undefined8 **)(param_3 + 8) = puVar3 + 1;
    local_48 = (longlong *)0x0;
    local_38 = 0;
    puVar2 = (undefined8 *)FUN_140438ef0(0x28,local_68);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &PTR_FUN_144eb6740;
      puVar2[1] = &local_res8;
      *(undefined4 *)(puVar2 + 2) = local_b8;
      *(undefined4 *)((longlong)puVar2 + 0x14) = uStack_b4;
      puVar2[3] = &local_res20;
      puVar2[4] = &param_5;
    }
    local_78[0] = &LAB_141e6e000;
    puVar3[1] = 0;
    *puVar3 = &PTR_ExecuteAndDestruct_144eb5ab0;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar3 + 2,local_78);
    if (local_38 != 0) {
      plVar4 = local_68;
      if (local_48 != (longlong *)0x0) {
        plVar4 = local_48;
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4,0);
      }
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (*(int *)(param_3 + 0x14) != 0) {
      FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,param_3);
    }
    FUN_141ed93a0(param_3);
    if (DAT_146ab6383 != '\0') {
      FRHICommandListBase::WaitForRHIThreadTasks(param_3);
    }
    FRHICommandListBase::WaitForTasks(param_3,1);
    *param_2 = local_res8;
    return param_2;
  }
  FOpenGLDynamicRHI::RHICreateUnorderedAccessView(param_1,param_2,local_res20,param_5);
  return param_2;
}



// FUNCTION 141e76eb0 FUN_141e76eb0 body=477 status=ok
// SIG undefined FUN_141e76eb0(void)

undefined8 *
FUN_141e76eb0(undefined8 param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             undefined1 param_5)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 local_res8;
  undefined8 local_res20;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined1 *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  
  local_res20 = param_4;
  if ((DAT_146ab6383 != '\0') && (cVar1 = FUN_1415e13e0(), cVar1 == '\0')) {
    puVar3 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 0xfU & 0xfffffffffffffff0);
    local_res8 = 0;
    puVar2 = puVar3 + 0xc;
    if (*(undefined8 **)(param_3 + 0x38) < puVar2) {
      FMemStackBase::AllocateNewChunk(param_3 + 0x30,0x70);
      puVar3 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 0xfU & 0xfffffffffffffff0);
      puVar2 = puVar3 + 0xc;
    }
    *(undefined8 **)(param_3 + 0x30) = puVar2;
    *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
    local_b8 = (undefined4)param_1;
    uStack_b4 = (undefined4)((ulonglong)param_1 >> 0x20);
    **(undefined8 **)(param_3 + 8) = puVar3;
    *(undefined8 **)(param_3 + 8) = puVar3 + 1;
    local_48 = (longlong *)0x0;
    local_38 = 0;
    puVar2 = (undefined8 *)FUN_140438ef0(0x28,local_68);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &PTR_FUN_144eb6740;
      puVar2[1] = &local_res8;
      *(undefined4 *)(puVar2 + 2) = local_b8;
      *(undefined4 *)((longlong)puVar2 + 0x14) = uStack_b4;
      puVar2[3] = &local_res20;
      puVar2[4] = &param_5;
    }
    local_78[0] = &LAB_141e6df10;
    puVar3[1] = 0;
    *puVar3 = &PTR_ExecuteAndDestruct_144eb5ab0;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar3 + 2,local_78);
    if (local_38 != 0) {
      plVar4 = local_68;
      if (local_48 != (longlong *)0x0) {
        plVar4 = local_48;
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4,0);
      }
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (*(int *)(param_3 + 0x14) != 0) {
      FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,param_3);
    }
    FUN_141ed93a0(param_3);
    if (DAT_146ab6383 != '\0') {
      FRHICommandListBase::WaitForRHIThreadTasks(param_3);
    }
    FRHICommandListBase::WaitForTasks(param_3,1);
    *param_2 = local_res8;
    return param_2;
  }
  FOpenGLDynamicRHI::RHICreateUnorderedAccessView(param_1,param_2,local_res20,param_5);
  return param_2;
}



// FUNCTION 141e77090 FUN_141e77090 body=546 status=ok
// SIG undefined FUN_141e77090(void)

void FUN_141e77090(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  bool bVar8;
  undefined8 *local_40;
  undefined8 *local_38 [2];
  
  if (DAT_146ab0530 == 0) {
    if (DAT_1464c97cc != '\0') {
      puVar2 = *(undefined8 **)(param_1 + 0x5a8);
      local_40 = puVar2;
      if (*(int *)(param_1 + 0x15ba0) == 1) {
        lVar7 = param_1 + 0x15308;
      }
      else {
        iVar5 = PlatformOpenGLCurrentContext(*(undefined8 *)(param_1 + 0x15bf8));
        lVar7 = param_1 + 0x15308;
        if (iVar5 != 1) {
          lVar7 = param_1 + 0x14a70;
        }
      }
      if ((*(char *)(param_1 + 0x15c40) != '\0') && (*(longlong *)(param_1 + 0x15c70) != 0)) {
        piVar1 = (int *)(*(longlong *)(param_1 + 0x15c70) + 0x10);
        *piVar1 = *piVar1 + 1;
        piVar1 = (int *)(*(longlong *)(param_1 + 0x15c70) + 0x14);
        *piVar1 = *piVar1 + 1;
      }
      FUN_141e92aa0(param_1 + -0x30,lVar7,puVar2);
      FUN_141e6e4d0(param_1 + -0x30,puVar2);
      FUN_141e68af0(param_1 + -0x30,lVar7,&local_40,DAT_1464c97c4);
      puVar6 = puVar2;
      if (puVar2 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
        UNLOCK();
        puVar6 = local_40;
      }
      local_38[0] = puVar2;
      FUN_141e7b2d0(param_1 + -0x30,lVar7,local_38,8);
      puVar3 = local_40;
      if (puVar2 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar2 + 1);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        puVar6 = puVar3;
        if (iVar5 == 1) {
          if ((*(char *)(local_40 + 2) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')))) {
            puVar6 = local_40;
            LOCK();
            bVar8 = *(int *)((longlong)puVar2 + 0xc) == 0;
            if (bVar8) {
              *(int *)((longlong)puVar2 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar8) {
              TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,local_40);
            }
          }
          else {
            (**(code **)*puVar3)(puVar3,1);
          }
        }
      }
      FUN_141e94d50(*(longlong *)(param_1 + 0x598) + 0x280,puVar6[0x20],5);
      *(undefined8 *)(param_1 + 0x590) = 0;
      (*DAT_146ab48a0)(0xffffffff);
      (*DAT_146ab4888)(param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x000141e77267. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_146ab48a0)(0xffffffff);
      return;
    }
    LowLevelFatalErrorHandler
              ("Unknown",0xdf3,
               L"Platform doesn\'t support SM5 for OpenGL but set feature level to SM5");
    FDebug::AssertFailed
              (&DAT_144eb2e62,"Unknown",0xdf3,
               L"Platform doesn\'t support SM5 for OpenGL but set feature level to SM5");
  }
  return;
}



// FUNCTION 141e772c0 FUN_141e772c0 body=533 status=ok
// SIG undefined FUN_141e772c0(void)

void FUN_141e772c0(longlong param_1,longlong param_2,undefined4 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  bool bVar8;
  undefined8 *local_38;
  undefined8 *local_30;
  
  if (DAT_1464c97cc != '\0') {
    puVar2 = *(undefined8 **)(param_1 + 0x5a8);
    local_38 = puVar2;
    if (*(int *)(param_1 + 0x15ba0) == 1) {
      lVar7 = param_1 + 0x15308;
    }
    else {
      iVar5 = PlatformOpenGLCurrentContext(*(undefined8 *)(param_1 + 0x15bf8));
      lVar7 = param_1 + 0x15308;
      if (iVar5 != 1) {
        lVar7 = param_1 + 0x14a70;
      }
    }
    if ((*(char *)(param_1 + 0x15c40) != '\0') && (*(longlong *)(param_1 + 0x15c70) != 0)) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x15c70) + 0x10);
      *piVar1 = *piVar1 + 1;
      piVar1 = (int *)(*(longlong *)(param_1 + 0x15c70) + 0x14);
      *piVar1 = *piVar1 + 1;
    }
    FUN_141e92aa0(param_1 + -0x30,lVar7,puVar2);
    FUN_141e68af0(param_1 + -0x30,lVar7,&local_38,DAT_1464c97c4);
    puVar6 = puVar2;
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
      UNLOCK();
      puVar6 = local_38;
    }
    local_30 = puVar2;
    FUN_141e7b2d0(param_1 + -0x30,lVar7,&local_30,8);
    puVar3 = local_38;
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      puVar6 = puVar3;
      if (iVar5 == 1) {
        if ((*(char *)(local_38 + 2) == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')
            ))) {
          puVar6 = local_38;
          LOCK();
          bVar8 = *(int *)((longlong)puVar2 + 0xc) == 0;
          if (bVar8) {
            *(int *)((longlong)puVar2 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar8) {
            TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,local_38);
          }
        }
        else {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
    }
    FUN_141e94d50(*(longlong *)(param_1 + 0x598) + 0x280,puVar6[0x20],5);
    *(undefined8 *)(param_1 + 0x590) = 0;
    (*DAT_146ab48a0)(0xffffffff);
    (*DAT_146ab42e8)(0x90ee,*(undefined4 *)(param_2 + 0x28));
    (*DAT_146ab4890)(param_3);
    (*DAT_146ab42e8)(0x90ee,0);
                    /* WARNING: Could not recover jumptable at 0x000141e7748d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_146ab48a0)(0xffffffff);
    return;
  }
  LowLevelFatalErrorHandler
            ("Unknown",0xe1d,
             L"Platform doesn\'t support SM5 for OpenGL but set feature level to SM5");
  FDebug::AssertFailed
            (&DAT_144eb2e63,"Unknown",0xe1d,
             L"Platform doesn\'t support SM5 for OpenGL but set feature level to SM5");
  return;
}



// FUNCTION 141e774e0 FUN_141e774e0 body=599 status=ok
// SIG undefined FUN_141e774e0(void)

void FUN_141e774e0(longlong param_1,longlong param_2,undefined4 param_3,longlong param_4,int param_5
                  )

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar7;
  undefined8 in_stack_ffffffffffffffd0;
  undefined4 uVar8;
  int local_28;
  undefined4 local_24;
  undefined1 local_20 [8];
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffd0 >> 0x20);
  if ((*(char *)(param_1 + 0x15c40) != '\0') && (*(longlong *)(param_1 + 0x15c70) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x15c70) + 0x10);
    *piVar1 = *piVar1 + 1;
    piVar1 = (int *)(*(longlong *)(param_1 + 0x15c70) + 0x14);
    *piVar1 = *piVar1 + 1;
  }
  if (*(int *)(param_1 + 0x15ba0) == 1) {
    lVar6 = param_1 + 0x15308;
  }
  else {
    iVar4 = PlatformOpenGLCurrentContext(*(undefined8 *)(param_1 + 0x15bf8));
    lVar6 = param_1 + 0x15308;
    if (iVar4 != 1) {
      lVar6 = param_1 + 0x14a70;
    }
  }
  FUN_141e92c40(param_1 + -0x30,lVar6);
  FUN_141e7aaa0(param_1 + -0x30,lVar6);
  FUN_141e7c690(param_1 + -0x30,lVar6);
  FUN_141e7c370(param_1 + -0x30,lVar6);
  FUN_141e7bed0(param_1 + -0x30,lVar6);
  FUN_141e7bbb0(param_1 + -0x30,lVar6);
  FUN_141e92d60(param_1 + -0x30,lVar6);
  FUN_141e68d60(param_1 + -0x30,lVar6,param_1 + 0x5a0,DAT_1464c97fc);
  if (DAT_146ab3552 == '\0') {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x5a0) + 0x98);
    if (lVar3 != *(longlong *)(param_1 + 0x590)) {
      FUN_141e6fd70(param_1 + -0x30,lVar3);
      *(longlong *)(param_1 + 0x590) = lVar3;
    }
  }
  else {
    FUN_141e6fe10(param_1 + -0x30);
  }
  iVar4 = *(int *)(param_2 + 0x28);
  if (*(int *)(lVar6 + 0x424) != iVar4) {
    (*DAT_146ab42e8)(0x8893,iVar4);
    *(int *)(lVar6 + 0x424) = iVar4;
  }
  FUN_141e7b400(param_1 + -0x30,lVar6,0,param_1 + 0x410,CONCAT44(uVar7,0x10),CONCAT44(uVar8,1));
  local_28 = 4;
  local_24 = 0;
  FUN_141e71060(param_3,*(undefined1 *)(lVar6 + 0x19c),0,&local_28,local_20,&local_24);
  iVar4 = local_28;
  if ((DAT_146ab053b != '\0') && (local_28 == 0xe)) {
    (*DAT_146ab4918)(0x8e72,local_24);
  }
  iVar2 = *(int *)(param_2 + 0x18);
  (*DAT_146ab42e8)(0x8f3f,*(undefined4 *)(param_4 + 0x28));
  uVar5 = 0x1403;
  if (iVar2 == 4) {
    uVar5 = 0x1405;
  }
  (*DAT_146ab4980)(iVar4,uVar5,(longlong)(param_5 * 5) << 2);
  (*DAT_146ab42e8)(0x8f3f,0);
  if ((DAT_1469f59d8 != 0) && (*(longlong *)(DAT_1469f59d8 + 0xcc0) != 0)) {
    FUN_1419f4400(DAT_1469f59d8,*(longlong *)(DAT_1469f59d8 + 0xcc0),param_3,
                  *(undefined1 *)(param_2 + 0x18));
  }
  return;
}



// FUNCTION 141e77740 FUN_141e77740 body=702 status=ok
// SIG undefined FUN_141e77740(void)

void FUN_141e77740(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,int param_6,int param_7,int param_8,uint param_9)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  int local_res8 [2];
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar10;
  int *piVar9;
  undefined8 in_stack_ffffffffffffffc0;
  undefined4 uVar11;
  
  uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffffc0 >> 0x20);
  if (*(int *)(param_1 + 0x15ba0) == 1) {
    lVar6 = param_1 + 0x15308;
  }
  else {
    iVar5 = PlatformOpenGLCurrentContext(*(undefined8 *)(param_1 + 0x15bf8));
    lVar6 = param_1 + 0x15308;
    if (iVar5 != 1) {
      lVar6 = param_1 + 0x14a70;
    }
  }
  FUN_141e92c40(param_1 + -0x30,lVar6);
  FUN_141e7aaa0(param_1 + -0x30,lVar6);
  FUN_141e7c690(param_1 + -0x30,lVar6);
  FUN_141e7c370(param_1 + -0x30,lVar6);
  FUN_141e7bed0(param_1 + -0x30,lVar6);
  FUN_141e7bbb0(param_1 + -0x30,lVar6);
  FUN_141e92d60(param_1 + -0x30,lVar6);
  if (*(char *)(param_1 + 0x850) != '\0') {
    FUN_141e6e8f0(param_1 + -0x30);
  }
  FUN_141e68d60(param_1 + -0x30,lVar6,param_1 + 0x5a0,DAT_1464c97fc);
  if (DAT_146ab3552 == '\0') {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x5a0) + 0x98);
    if (lVar1 != *(longlong *)(param_1 + 0x590)) {
      FUN_141e6fd70(param_1 + -0x30,lVar1);
      *(longlong *)(param_1 + 0x590) = lVar1;
    }
  }
  else {
    FUN_141e6fe10(param_1 + -0x30);
  }
  iVar5 = *(int *)(param_2 + 0x28);
  if (*(int *)(lVar6 + 0x424) != iVar5) {
    (*DAT_146ab42e8)(0x8893,iVar5);
    *(int *)(lVar6 + 0x424) = iVar5;
  }
  iVar3 = param_7;
  iVar5 = param_6;
  FUN_141e7b400(param_1 + -0x30,lVar6,param_4,param_1 + 0x410,CONCAT44(uVar10,0x10),
                CONCAT44(uVar11,param_6 + param_7));
  iVar4 = param_8;
  param_6 = 4;
  local_res8[0] = 0;
  param_7 = 0;
  piVar9 = local_res8;
  FUN_141e71060(param_3,*(undefined1 *)(lVar6 + 0x19c),param_8,&param_6,piVar9,&param_7);
  iVar2 = param_6;
  uVar10 = (undefined4)((ulonglong)piVar9 >> 0x20);
  if ((DAT_146ab053b != '\0') && (param_6 == 0xe)) {
    (*DAT_146ab4918)(0x8e72,param_7);
  }
  bVar8 = *(int *)(param_2 + 0x18) == 4;
  uVar11 = 0x1403;
  if (bVar8) {
    uVar11 = 0x1405;
  }
  iVar7 = 2;
  if (bVar8) {
    iVar7 = 4;
  }
  if ((*(char *)(param_1 + 0x15c40) != '\0') && (*(longlong *)(param_1 + 0x15c70) != 0)) {
    piVar9 = (int *)(*(longlong *)(param_1 + 0x15c70) + 0x10);
    *piVar9 = *piVar9 + 1;
    piVar9 = (int *)(*(longlong *)(param_1 + 0x15c70) + 0x14);
    *piVar9 = *piVar9 + iVar4 * param_9;
    piVar9 = (int *)(*(longlong *)(param_1 + 0x15c70) + 0x18);
    *piVar9 = *piVar9 + local_res8[0] * param_9;
  }
  if (param_9 < 2) {
    (*DAT_146ab4208)(iVar2,0,iVar5,local_res8[0],CONCAT44(uVar10,uVar11),iVar7 * iVar3);
  }
  else {
    (*DAT_146ab4798)(iVar2,local_res8[0],uVar11,iVar7 * iVar3,CONCAT44(uVar10,param_9));
  }
  if ((DAT_1469f59d8 != 0) && (*(longlong *)(DAT_1469f59d8 + 0xcc0) != 0)) {
    FUN_1419f4400(DAT_1469f59d8,*(longlong *)(DAT_1469f59d8 + 0xcc0),param_3,
                  *(undefined1 *)(param_2 + 0x18));
  }
  return;
}



// FUNCTION 141e77a00 FUN_141e77a00 body=590 status=ok
// SIG undefined FUN_141e77a00(void)

void FUN_141e77a00(longlong param_1,undefined4 param_2,longlong param_3,longlong param_4,
                  undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar7;
  undefined8 in_stack_ffffffffffffffd0;
  undefined4 uVar8;
  int local_28;
  undefined4 local_24;
  undefined1 local_20 [8];
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffd0 >> 0x20);
  if ((*(char *)(param_1 + 0x15c40) != '\0') && (*(longlong *)(param_1 + 0x15c70) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x15c70) + 0x10);
    *piVar1 = *piVar1 + 1;
    piVar1 = (int *)(*(longlong *)(param_1 + 0x15c70) + 0x14);
    *piVar1 = *piVar1 + 1;
  }
  if (*(int *)(param_1 + 0x15ba0) == 1) {
    lVar6 = param_1 + 0x15308;
  }
  else {
    iVar4 = PlatformOpenGLCurrentContext(*(undefined8 *)(param_1 + 0x15bf8));
    lVar6 = param_1 + 0x15308;
    if (iVar4 != 1) {
      lVar6 = param_1 + 0x14a70;
    }
  }
  FUN_141e92c40(param_1 + -0x30,lVar6);
  FUN_141e7aaa0(param_1 + -0x30,lVar6);
  FUN_141e7c690(param_1 + -0x30,lVar6);
  FUN_141e7c370(param_1 + -0x30,lVar6);
  FUN_141e7bed0(param_1 + -0x30,lVar6);
  FUN_141e7bbb0(param_1 + -0x30,lVar6);
  FUN_141e92d60(param_1 + -0x30,lVar6);
  FUN_141e68d60(param_1 + -0x30,lVar6,param_1 + 0x5a0,DAT_1464c97fc);
  if (DAT_146ab3552 == '\0') {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x5a0) + 0x98);
    if (lVar3 != *(longlong *)(param_1 + 0x590)) {
      FUN_141e6fd70(param_1 + -0x30,lVar3);
      *(longlong *)(param_1 + 0x590) = lVar3;
    }
  }
  else {
    FUN_141e6fe10(param_1 + -0x30);
  }
  iVar4 = *(int *)(param_3 + 0x28);
  if (*(int *)(lVar6 + 0x424) != iVar4) {
    (*DAT_146ab42e8)(0x8893,iVar4);
    *(int *)(lVar6 + 0x424) = iVar4;
  }
  FUN_141e7b400(param_1 + -0x30,lVar6,0,param_1 + 0x410,CONCAT44(uVar7,0x10),CONCAT44(uVar8,1));
  local_28 = 4;
  local_24 = 0;
  FUN_141e71060(param_2,*(undefined1 *)(lVar6 + 0x19c),0,&local_28,local_20,&local_24);
  iVar4 = local_28;
  if ((DAT_146ab053b != '\0') && (local_28 == 0xe)) {
    (*DAT_146ab4918)(0x8e72,local_24);
  }
  iVar2 = *(int *)(param_3 + 0x18);
  (*DAT_146ab42e8)(0x8f3f,*(undefined4 *)(param_4 + 0x28));
  uVar5 = 0x1403;
  if (iVar2 == 4) {
    uVar5 = 0x1405;
  }
  (*DAT_146ab4980)(iVar4,uVar5,param_5);
  (*DAT_146ab42e8)(0x8f3f,0);
  if ((DAT_1469f59d8 != 0) && (*(longlong *)(DAT_1469f59d8 + 0xcc0) != 0)) {
    FUN_1419f4400(DAT_1469f59d8,*(longlong *)(DAT_1469f59d8 + 0xcc0),param_2,
                  *(undefined1 *)(param_3 + 0x18));
  }
  return;
}



// FUNCTION 141e77c50 FUN_141e77c50 body=722 status=ok
// SIG undefined FUN_141e77c50(void)

void FUN_141e77c50(longlong param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int local_res8 [2];
  undefined4 local_res10 [2];
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar7;
  undefined8 uVar6;
  undefined8 in_stack_ffffffffffffffc0;
  undefined4 uVar8;
  undefined4 local_38 [4];
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffc0 >> 0x20);
  if (*(int *)(param_1 + 0x15ba0) == 1) {
    lVar5 = param_1 + 0x15308;
  }
  else {
    iVar4 = PlatformOpenGLCurrentContext(*(undefined8 *)(param_1 + 0x15bf8));
    lVar5 = param_1 + 0x15308;
    if (iVar4 != 1) {
      lVar5 = param_1 + 0x14a70;
    }
  }
  FUN_141e92c40(param_1 + -0x30,lVar5);
  FUN_141e7aaa0(param_1 + -0x30,lVar5);
  FUN_141e7c690(param_1 + -0x30,lVar5);
  FUN_141e7c370(param_1 + -0x30,lVar5);
  FUN_141e7bed0(param_1 + -0x30,lVar5);
  FUN_141e7bbb0(param_1 + -0x30,lVar5);
  FUN_141e92d60(param_1 + -0x30,lVar5);
  if (*(char *)(param_1 + 0x850) != '\0') {
    FUN_141e6e8f0(param_1 + -0x30);
  }
  FUN_141e68d60(param_1 + -0x30,lVar5,param_1 + 0x5a0,DAT_1464c97fc);
  if (DAT_146ab3552 == '\0') {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x5a0) + 0x98);
    if (lVar2 != *(longlong *)(param_1 + 0x590)) {
      FUN_141e6fd70(param_1 + -0x30,lVar2);
      *(longlong *)(param_1 + 0x590) = lVar2;
    }
  }
  else {
    FUN_141e6fe10(param_1 + -0x30);
  }
  if (*(int *)(lVar5 + 0x424) != 0) {
    (*DAT_146ab42e8)(0x8893,0);
    *(undefined4 *)(lVar5 + 0x424) = 0;
  }
  switch(param_2) {
  case 0:
    iVar4 = param_4 * 3;
    break;
  case 1:
    iVar4 = param_4 + 2;
    break;
  case 2:
    iVar4 = param_4 * 2;
    break;
  default:
    LowLevelFatalErrorHandler("Unknown",0x3a6,L"Unknown primitive type: %u",param_2);
    uVar6 = CONCAT44(uVar7,param_2);
    FDebug::AssertFailed(&DAT_143f3f584,"Unknown",0x3a6,L"Unknown primitive type: %u",uVar6);
    uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
    iVar4 = 0;
    break;
  case 4:
    iVar4 = param_4;
    break;
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
    iVar4 = (param_2 + -5) * param_4;
  }
  FUN_141e7b400(param_1 + -0x30,lVar5,param_3,param_1 + 0x410,CONCAT44(uVar7,0x10),
                CONCAT44(uVar8,iVar4));
  local_res8[0] = 4;
  local_res10[0] = 0;
  local_38[0] = 0;
  FUN_141e71060(param_2,*(undefined1 *)(lVar5 + 0x19c),param_4,local_res8,local_res10,local_38);
  iVar3 = local_res8[0];
  if ((DAT_146ab053b != '\0') && (local_res8[0] == 0xe)) {
    (*DAT_146ab4918)(0x8e72,local_38[0]);
  }
  if ((*(char *)(param_1 + 0x15c40) != '\0') && (*(longlong *)(param_1 + 0x15c70) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x15c70) + 0x10);
    *piVar1 = *piVar1 + 1;
    piVar1 = (int *)(*(longlong *)(param_1 + 0x15c70) + 0x14);
    *piVar1 = *piVar1 + param_4 * param_5;
    piVar1 = (int *)(*(longlong *)(param_1 + 0x15c70) + 0x18);
    *piVar1 = *piVar1 + iVar4 * param_5;
  }
  if (param_5 == 1) {
    (*DAT_146ab4000)();
  }
  else {
    (*DAT_146ab4790)(iVar3,0,local_res10[0]);
  }
  if ((DAT_1469f59d8 != 0) && (*(longlong *)(DAT_1469f59d8 + 0xcc0) != 0)) {
    FUN_1419f4400(DAT_1469f59d8,*(longlong *)(DAT_1469f59d8 + 0xcc0),param_2,0);
  }
  return;
}



// FUNCTION 141e77f70 FUN_141e77f70 body=547 status=ok
// SIG undefined FUN_141e77f70(void)

void FUN_141e77f70(longlong param_1,undefined4 param_2,longlong param_3,undefined4 param_4)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar5;
  undefined8 in_stack_ffffffffffffffd0;
  undefined4 uVar6;
  int local_28;
  undefined4 local_24;
  undefined1 local_20 [8];
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffd0 >> 0x20);
  if ((*(char *)(param_1 + 0x15c40) != '\0') && (*(longlong *)(param_1 + 0x15c70) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x15c70) + 0x10);
    *piVar1 = *piVar1 + 1;
  }
  if (*(int *)(param_1 + 0x15ba0) == 1) {
    lVar4 = param_1 + 0x15308;
  }
  else {
    iVar3 = PlatformOpenGLCurrentContext(*(undefined8 *)(param_1 + 0x15bf8));
    lVar4 = param_1 + 0x15308;
    if (iVar3 != 1) {
      lVar4 = param_1 + 0x14a70;
    }
  }
  FUN_141e92c40(param_1 + -0x30,lVar4);
  FUN_141e7aaa0(param_1 + -0x30,lVar4);
  FUN_141e7c690(param_1 + -0x30,lVar4);
  FUN_141e7c370(param_1 + -0x30,lVar4);
  FUN_141e7bed0(param_1 + -0x30,lVar4);
  FUN_141e7bbb0(param_1 + -0x30,lVar4);
  FUN_141e92d60(param_1 + -0x30,lVar4);
  FUN_141e68d60(param_1 + -0x30,lVar4,param_1 + 0x5a0,DAT_1464c97fc);
  if (DAT_146ab3552 == '\0') {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x5a0) + 0x98);
    if (lVar2 != *(longlong *)(param_1 + 0x590)) {
      FUN_141e6fd70(param_1 + -0x30,lVar2);
      *(longlong *)(param_1 + 0x590) = lVar2;
    }
  }
  else {
    FUN_141e6fe10(param_1 + -0x30);
  }
  if (*(int *)(lVar4 + 0x424) != 0) {
    (*DAT_146ab42e8)(0x8893,0);
    *(undefined4 *)(lVar4 + 0x424) = 0;
  }
  FUN_141e7b400(param_1 + -0x30,lVar4,0,param_1 + 0x410,CONCAT44(uVar5,0x10),CONCAT44(uVar6,1));
  local_28 = 4;
  local_24 = 0;
  FUN_141e71060(param_2,*(undefined1 *)(lVar4 + 0x19c),0,&local_28,local_20,&local_24);
  iVar3 = local_28;
  if ((DAT_146ab053b != '\0') && (local_28 == 0xe)) {
    (*DAT_146ab4918)(0x8e72,local_24);
  }
  (*DAT_146ab42e8)(0x8f3f,*(undefined4 *)(param_3 + 0x28));
  (*DAT_146ab4988)(iVar3,param_4);
  (*DAT_146ab42e8)(0x8f3f,0);
  if ((DAT_1469f59d8 != 0) && (*(longlong *)(DAT_1469f59d8 + 0xcc0) != 0)) {
    FUN_1419f4400(DAT_1469f59d8,*(longlong *)(DAT_1469f59d8 + 0xcc0),param_2,0);
  }
  return;
}



// FUNCTION 141e781d0 FUN_141e781d0 body=760 status=ok
// SIG undefined FUN_141e781d0(void)

void FUN_141e781d0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  int local_res8 [2];
  undefined4 local_res10 [2];
  undefined4 local_res18 [4];
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 *puVar8;
  undefined8 in_stack_ffffffffffffffd0;
  undefined4 uVar9;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffd0 >> 0x20);
  TOpenGLBuffer<FOpenGLBaseVertexBuffer,34962,&CachedBindArrayBuffer>::Unlock
            (*(undefined8 *)(param_1 + 0x888 + (ulonglong)*(uint *)(param_1 + 0x898) * 8));
  lVar7 = *(longlong *)(param_1 + 0x8b0 + (ulonglong)*(uint *)(param_1 + 0x8c0) * 8);
  if ((*(byte *)(lVar7 + 0x38) & 1) != 0) {
    FUN_141e6d8b0(lVar7);
    if ((DAT_146ab053c == 0) && ((*(byte *)(lVar7 + 0x38) & 2) == 0)) {
      TOpenGLBuffer<FOpenGLBaseIndexBuffer,34963,&CachedBindElementArrayBuffer>::LoadData
                (lVar7,*(undefined4 *)(lVar7 + 0x40),*(undefined4 *)(lVar7 + 0x3c),
                 *(undefined8 *)(lVar7 + 0x48));
      FMemory::Free(*(undefined8 *)(lVar7 + 0x48));
      *(uint *)(lVar7 + 0x38) = *(uint *)(lVar7 + 0x38) & 0xfffffff7;
    }
    else {
      (*DAT_146ab4330)(0x8893);
    }
    *(undefined8 *)(lVar7 + 0x48) = 0;
    *(longlong *)(lVar7 + 0x30) =
         *(longlong *)(lVar7 + 0x30) + (ulonglong)(~(*(uint *)(lVar7 + 0x38) >> 1) & 1);
    *(uint *)(lVar7 + 0x38) = *(uint *)(lVar7 + 0x38) & 0xfffffffe;
  }
  if (*(int *)(param_1 + 0x15ba0) == 1) {
    lVar7 = param_1 + 0x15308;
  }
  else {
    iVar4 = PlatformOpenGLCurrentContext(*(undefined8 *)(param_1 + 0x15bf8));
    lVar7 = param_1 + 0x15308;
    if (iVar4 != 1) {
      lVar7 = param_1 + 0x14a70;
    }
  }
  FUN_141e92c40(param_1 + -0x30,lVar7);
  FUN_141e7aaa0(param_1 + -0x30,lVar7);
  FUN_141e7c690(param_1 + -0x30,lVar7);
  FUN_141e7c370(param_1 + -0x30,lVar7);
  FUN_141e7bed0(param_1 + -0x30,lVar7);
  FUN_141e7bbb0(param_1 + -0x30,lVar7);
  FUN_141e92d60(param_1 + -0x30,lVar7);
  if (*(char *)(param_1 + 0x850) != '\0') {
    FUN_141e6e8f0(param_1 + -0x30);
  }
  FUN_141e68d60(param_1 + -0x30,lVar7,param_1 + 0x5a0,DAT_1464c97fc);
  if (DAT_146ab3552 == '\0') {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x5a0) + 0x98);
    if (lVar3 != *(longlong *)(param_1 + 0x590)) {
      FUN_141e6fd70(param_1 + -0x30,lVar3);
      *(longlong *)(param_1 + 0x590) = lVar3;
    }
  }
  else {
    FUN_141e6fe10(param_1 + -0x30);
  }
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x8b0 + (ulonglong)*(uint *)(param_1 + 0x8c0) * 8) + 0x28
                  );
  if (*(int *)(lVar7 + 0x424) != iVar4) {
    (*DAT_146ab42e8)(0x8893,iVar4);
    *(int *)(lVar7 + 0x424) = iVar4;
  }
  FUN_141e7b400(param_1 + -0x30,lVar7,0,param_1 + 0x3e0,CONCAT44(uVar6,1),
                CONCAT44(uVar9,*(undefined4 *)(param_1 + 0x3f8)));
  puVar8 = local_res18;
  local_res8[0] = 4;
  local_res18[0] = 0;
  local_res10[0] = 0;
  FUN_141e71060(*(undefined4 *)(param_1 + 0x3fc),*(undefined1 *)(lVar7 + 0x19c),
                *(undefined4 *)(param_1 + 0x400),local_res8,puVar8,local_res10);
  iVar4 = local_res8[0];
  uVar9 = (undefined4)((ulonglong)puVar8 >> 0x20);
  uVar6 = 0x1403;
  if (*(int *)(param_1 + 0x408) == 4) {
    uVar6 = 0x1405;
  }
  if ((DAT_146ab053b != '\0') && (local_res8[0] == 0xe)) {
    (*DAT_146ab4918)(0x8e72,local_res10[0]);
  }
  iVar5 = *(int *)(param_1 + 0x3f8);
  iVar2 = *(int *)(param_1 + 0x400);
  if ((*(char *)(param_1 + 0x15c40) != '\0') && (*(longlong *)(param_1 + 0x15c70) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x15c70) + 0x10);
    *piVar1 = *piVar1 + 1;
    piVar1 = (int *)(*(longlong *)(param_1 + 0x15c70) + 0x14);
    *piVar1 = *piVar1 + iVar2;
    piVar1 = (int *)(*(longlong *)(param_1 + 0x15c70) + 0x18);
    *piVar1 = *piVar1 + iVar5;
    iVar5 = *(int *)(param_1 + 0x3f8);
  }
  (*DAT_146ab4208)(iVar4,*(int *)(param_1 + 0x404),*(int *)(param_1 + 0x404) + iVar5,local_res18[0],
                   CONCAT44(uVar9,uVar6),*(undefined4 *)(param_1 + 0x8c8));
  *(undefined4 *)(param_1 + 0x400) = 0;
  if ((DAT_1469f59d8 != 0) && (*(longlong *)(DAT_1469f59d8 + 0xcc0) != 0)) {
    FUN_1419f4400(DAT_1469f59d8,*(longlong *)(DAT_1469f59d8 + 0xcc0),
                  *(undefined4 *)(param_1 + 0x3fc),*(undefined1 *)(param_1 + 0x408));
  }
  return;
}



// FUNCTION 141e784d0 FUN_141e784d0 body=573 status=ok
// SIG undefined FUN_141e784d0(void)

void FUN_141e784d0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int local_res8 [2];
  undefined4 local_res10 [2];
  undefined4 local_res18 [4];
  undefined4 *puVar7;
  undefined4 *puVar9;
  undefined4 uVar8;
  undefined4 uVar10;
  
  TOpenGLBuffer<FOpenGLBaseVertexBuffer,34962,&CachedBindArrayBuffer>::Unlock
            (*(undefined8 *)(param_1 + 0x888 + (ulonglong)*(uint *)(param_1 + 0x898) * 8));
  if (*(int *)(param_1 + 0x15ba0) == 1) {
    lVar6 = param_1 + 0x15308;
  }
  else {
    iVar5 = PlatformOpenGLCurrentContext(*(undefined8 *)(param_1 + 0x15bf8));
    lVar6 = param_1 + 0x15308;
    if (iVar5 != 1) {
      lVar6 = param_1 + 0x14a70;
    }
  }
  FUN_141e92c40(param_1 + -0x30,lVar6);
  FUN_141e7aaa0(param_1 + -0x30,lVar6);
  FUN_141e7c690(param_1 + -0x30,lVar6);
  FUN_141e7c370(param_1 + -0x30,lVar6);
  FUN_141e7bed0(param_1 + -0x30,lVar6);
  FUN_141e7bbb0(param_1 + -0x30,lVar6);
  FUN_141e92d60(param_1 + -0x30,lVar6);
  if (*(char *)(param_1 + 0x850) != '\0') {
    FUN_141e6e8f0(param_1 + -0x30);
  }
  FUN_141e68d60(param_1 + -0x30,lVar6,param_1 + 0x5a0,DAT_1464c97fc);
  if (DAT_146ab3552 == '\0') {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x5a0) + 0x98);
    if (lVar4 != *(longlong *)(param_1 + 0x590)) {
      FUN_141e6fd70(param_1 + -0x30,lVar4);
      *(longlong *)(param_1 + 0x590) = lVar4;
    }
  }
  else {
    FUN_141e6fe10(param_1 + -0x30);
  }
  if (*(int *)(lVar6 + 0x424) != 0) {
    (*DAT_146ab42e8)(0x8893,0);
    *(undefined4 *)(lVar6 + 0x424) = 0;
  }
  puVar9 = local_res10;
  puVar7 = local_res18;
  local_res8[0] = 4;
  local_res18[0] = 0;
  local_res10[0] = 0;
  FUN_141e71060(*(undefined4 *)(param_1 + 0x3fc),*(undefined1 *)(lVar6 + 0x19c),
                *(undefined4 *)(param_1 + 0x400),local_res8,puVar7,puVar9);
  iVar5 = local_res8[0];
  uVar8 = (undefined4)((ulonglong)puVar7 >> 0x20);
  uVar10 = (undefined4)((ulonglong)puVar9 >> 0x20);
  if ((DAT_146ab053b != '\0') && (local_res8[0] == 0xe)) {
    (*DAT_146ab4918)(0x8e72,local_res10[0]);
  }
  FUN_141e7b400(param_1 + -0x30,lVar6,0,param_1 + 0x3e0,CONCAT44(uVar8,1),
                CONCAT44(uVar10,*(undefined4 *)(param_1 + 0x3f8)));
  iVar2 = *(int *)(param_1 + 0x3f8);
  iVar3 = *(int *)(param_1 + 0x400);
  if ((*(char *)(param_1 + 0x15c40) != '\0') && (*(longlong *)(param_1 + 0x15c70) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x15c70) + 0x10);
    *piVar1 = *piVar1 + 1;
    piVar1 = (int *)(*(longlong *)(param_1 + 0x15c70) + 0x14);
    *piVar1 = *piVar1 + iVar3;
    piVar1 = (int *)(*(longlong *)(param_1 + 0x15c70) + 0x18);
    *piVar1 = *piVar1 + iVar2;
  }
  (*DAT_146ab4000)(iVar5,0,local_res18[0]);
  *(undefined4 *)(param_1 + 0x400) = 0;
  if ((DAT_1469f59d8 != 0) && (*(longlong *)(DAT_1469f59d8 + 0xcc0) != 0)) {
    FUN_1419f4400(DAT_1469f59d8,*(longlong *)(DAT_1469f59d8 + 0xcc0),
                  *(undefined4 *)(param_1 + 0x3fc),0);
  }
  return;
}



// FUNCTION 141e78760 RHIInvalidateCachedState body=297 status=ok
// SIG undefined RHIInvalidateCachedState(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FOpenGLDynamicRHI::RHIInvalidateCachedState(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_8d8 [32];
  undefined **local_8b8;
  undefined8 local_8b0;
  undefined8 local_8a8;
  undefined8 local_8a0;
  longlong local_4d8;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_8d8;
  uVar1 = FOpenGLContextState::FOpenGLContextState(&local_8b8);
  FOpenGLContextState::operator=(param_1 + 0x15308,uVar1);
  if (local_4d8 != 0) {
    FMemory::Free();
  }
  local_8b8 = &PTR__scalar_deleting_destructor__144eb5b08;
  FMemory::operator_delete(local_8a0);
  FMemory::operator_delete(local_8a8);
  FMemory::operator_delete(local_8b0);
  uVar1 = FOpenGLContextState::FOpenGLContextState(&local_8b8);
  FOpenGLContextState::operator=(param_1 + 0x14a70,uVar1);
  if (local_4d8 != 0) {
    FMemory::Free();
  }
  local_8b8 = &PTR__scalar_deleting_destructor__144eb5b08;
  FMemory::operator_delete(local_8a0);
  FMemory::operator_delete(local_8a8);
  FMemory::operator_delete(local_8b0);
  (**(code **)(*(longlong *)(param_1 + 0x15308) + 8))(param_1 + 0x15308,DAT_1464c97fc,8);
  (**(code **)(*(longlong *)(param_1 + 0x14a70) + 8))(param_1 + 0x14a70,DAT_1464c97fc,8);
  return;
}



// FUNCTION 141e78890 RHIPerFrameRHIFlushComplete body=23 status=ok
// SIG undefined RHIPerFrameRHIFlushComplete(void)

void FOpenGLDynamicRHI::RHIPerFrameRHIFlushComplete(void)

{
  FUN_141eade10();
  BeginFrame_VertexBufferCleanup();
  BeginFrame_QueryBatchCleanup();
  return;
}



// FUNCTION 141e788b0 FUN_141e788b0 body=484 status=ok
// SIG undefined FUN_141e788b0(void)

void FUN_141e788b0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 local_res18 [2];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  code *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  
  local_res18[0] = param_3;
  if ((DAT_146ab6383 == '\0') || (cVar1 = FUN_1415e13e0(), cVar1 != '\0')) {
    local_78 = *param_4;
    uStack_74 = param_4[1];
    uStack_70 = param_4[2];
    uStack_6c = param_4[3];
    FUN_141ea5da0(param_1,local_res18[0],&local_78,param_5,param_6,param_7,param_8);
  }
  else {
    puVar3 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
    puVar2 = puVar3 + 0xc;
    if (*(undefined8 **)(param_2 + 0x38) < puVar2) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x70);
      puVar3 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      puVar2 = puVar3 + 0xc;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar2;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar3;
    *(undefined8 **)(param_2 + 8) = puVar3 + 1;
    local_38 = (longlong *)0x0;
    local_28 = 0;
    puVar2 = (undefined8 *)FUN_140438ef0(0x40,local_58);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &PTR_FUN_143fcfea8;
      puVar2[1] = param_1;
      puVar2[2] = local_res18;
      puVar2[3] = param_4;
      puVar2[4] = param_5;
      puVar2[5] = &param_6;
      puVar2[6] = &param_7;
      puVar2[7] = &param_8;
    }
    local_68[0] = UE4Function_Private::
                  TFunctionRefCaller<<lambda_52d3ed2122ba9f81cea7719db6a84508>,void___cdecl(void)>::
                  Call;
    puVar3[1] = 0;
    *puVar3 = &PTR_ExecuteAndDestruct_144eb5ab0;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar3 + 2,local_68);
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
    if (*(int *)(param_2 + 0x14) != 0) {
      FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,param_2);
    }
    FUN_141ed93a0(param_2);
    if (DAT_146ab6383 != '\0') {
      FRHICommandListBase::WaitForRHIThreadTasks(param_2);
    }
    FRHICommandListBase::WaitForTasks(param_2,1);
  }
  return;
}



// FUNCTION 141e78aa0 FUN_141e78aa0 body=96 status=ok
// SIG undefined FUN_141e78aa0(void)

void FUN_141e78aa0(longlong param_1)

{
  BOOL BVar1;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x15e08));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x15e08));
  }
  if (*(longlong **)(param_1 + 0x15e30) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x15e30) + 0x30))();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x15e08));
  *(undefined1 *)(param_1 + 0x921) = 0;
  PlatformNULLContextSetup();
  return;
}



// FUNCTION 141e78ba0 FUN_141e78ba0 body=204 status=ok
// SIG undefined FUN_141e78ba0(void)

void FUN_141e78ba0(longlong param_1,undefined8 param_2)

{
  BOOL BVar1;
  
  TRefCountPtr<FRHITexture>::operator=(param_1 + 0x598);
  if ((DAT_146ab6328 != '\0') &&
     (BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x141a8)), BVar1 == 0)) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x141a8));
  }
  TRefCountPtr<FRHIIndexBuffer>::operator=
            (param_1 + ((ulonglong)*(uint *)(param_1 + 0x141a0) + 0x124) * 8,param_2);
  *(uint *)(param_1 + 0x141a0) = (*(int *)(param_1 + 0x141a0) + 1U) % 10000;
  if (DAT_146ab6328 != '\0') {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x141a8));
  }
  if ((DAT_1469f59d8 != 0) && (*(longlong *)(DAT_1469f59d8 + 0xcc0) != 0)) {
    FUN_1419fcec0(DAT_1469f59d8,*(longlong *)(DAT_1469f59d8 + 0xcc0),param_2);
    return;
  }
  return;
}



// FUNCTION 141e78c70 RHISetComputeShader body=233 status=ok
// SIG undefined RHISetComputeShader(void)

void FOpenGLDynamicRHI::RHISetComputeShader(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  
  if (DAT_146ab0530 == 0) {
    if (DAT_1464c97cc == '\0') {
      LowLevelFatalErrorHandler
                ("Unknown",0xdcd,
                 L"Platform doesn\'t support SM5 for OpenGL but set feature level to SM5");
      FDebug::AssertFailed
                (&DAT_144eb2d37,"Unknown",0xdcd,
                 L"Platform doesn\'t support SM5 for OpenGL but set feature level to SM5");
      return;
    }
    puVar3 = *(undefined8 **)(param_1 + 0x5a8);
    *(longlong *)(param_1 + 0x5a8) = param_2;
    if (param_2 != 0) {
      LOCK();
      *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
      UNLOCK();
    }
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        if ((*(char *)(puVar3 + 2) != '\0') ||
           ((DAT_146ab62f5 == '\0' && (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 != '\0')
            ))) {
                    /* WARNING: Could not recover jumptable at 0x000141e78d1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)*puVar3)(puVar3,1);
          return;
        }
        LOCK();
        bVar5 = *(int *)((longlong)puVar3 + 0xc) == 0;
        if (bVar5) {
          *(int *)((longlong)puVar3 + 0xc) = 1;
        }
        UNLOCK();
        if (bVar5) {
          TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 141e78de0 RHISetMultipleViewports body=64 status=ok
// SIG undefined RHISetMultipleViewports(void)

void FOpenGLDynamicRHI::RHISetMultipleViewports(void)

{
  LowLevelFatalErrorHandler
            ("Unknown",0xe23,L"OpenGL Render path does not support multiple Viewports!");
  FDebug::AssertFailed
            (&DAT_144eb2e64,"Unknown",0xe23,
             L"OpenGL Render path does not support multiple Viewports!");
  return;
}



// FUNCTION 141e78e50 FUN_141e78e50 body=1040 status=ok
// SIG undefined FUN_141e78e50(void)

void FUN_141e78e50(longlong param_1,int param_2,longlong param_3,longlong *param_4)

{
  longlong *plVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  byte bVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  longlong *plVar20;
  
  *(undefined8 *)(param_1 + 0x348) = 0;
  *(undefined8 *)(param_1 + 0x350) = 0;
  *(undefined8 *)(param_1 + 0x358) = 0;
  *(undefined8 *)(param_1 + 0x360) = 0;
  *(undefined8 *)(param_1 + 0x368) = 0;
  *(undefined8 *)(param_1 + 0x370) = 0;
  *(undefined8 *)(param_1 + 0x378) = 0;
  *(undefined8 *)(param_1 + 0x380) = 0;
  *(undefined8 *)(param_1 + 0x388) = 0;
  *(undefined8 *)(param_1 + 0x390) = 0;
  *(undefined8 *)(param_1 + 0x398) = 0;
  *(undefined8 *)(param_1 + 0x3a0) = 0;
  *(undefined8 *)(param_1 + 0x3a8) = 0;
  *(undefined8 *)(param_1 + 0x3b0) = 0;
  *(undefined8 *)(param_1 + 0x3b8) = 0;
  *(undefined8 *)(param_1 + 0x3c0) = 0;
  *(undefined4 *)(param_1 + 0x340) = 0xffffffff;
  if ((DAT_1469f59d8 != 0) && (*(longlong *)(DAT_1469f59d8 + 0xcc0) != 0)) {
    FUN_1419fd2b0(DAT_1469f59d8,*(longlong *)(DAT_1469f59d8 + 0xcc0),param_2,param_3,param_4);
  }
  iVar11 = param_2 + -1;
  lVar7 = 0;
  uVar12 = 0;
  if (-1 < iVar11) {
    lVar6 = (longlong)iVar11;
    plVar20 = (longlong *)(param_1 + 0x348 + lVar6 * 8);
    puVar18 = (undefined4 *)(param_1 + 0x3a8 + lVar6 * 4);
    puVar19 = (undefined4 *)(param_3 + lVar6 * 0x18 + 0xc);
    do {
      plVar1 = *(longlong **)(puVar19 + -3);
      lVar6 = lVar7;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x48))(plVar1);
        if (DAT_146ab6383 != '\0') {
          IsInRenderingThread();
        }
        lVar6 = (**(code **)(*plVar1 + 0x48))(plVar1);
      }
      *plVar20 = lVar6;
      puVar18[-8] = puVar19[-1];
      *puVar18 = *puVar19;
      if (*plVar20 != 0) {
        *(int *)(param_1 + 0x340) = iVar11;
      }
      puVar18 = puVar18 + -1;
      plVar20 = plVar20 + -1;
      puVar19 = puVar19 + -6;
      iVar11 = iVar11 + -1;
    } while (-1 < iVar11);
  }
  if ((param_4 != (longlong *)0x0) && (plVar20 = (longlong *)*param_4, plVar20 != (longlong *)0x0))
  {
    (**(code **)(*plVar20 + 0x48))(plVar20);
    if (DAT_146ab6383 != '\0') {
      IsInRenderingThread();
    }
    lVar7 = (**(code **)(*plVar20 + 0x48))(plVar20);
  }
  uVar13 = 0;
  if (DAT_146ab62cc - 8U < 3) {
    if ((*(int *)(param_1 + 0x15ba0) == 1) ||
       (iVar11 = PlatformOpenGLCurrentContext(*(undefined8 *)(param_1 + 0x15bf8)), iVar11 == 1)) {
      puVar10 = (uint *)(param_1 + 0x15774);
      puVar15 = (uint *)(param_1 + 0x15778);
      puVar17 = (uint *)(param_1 + 0x15778);
      puVar16 = (uint *)(param_1 + 0x15778);
      puVar14 = (uint *)(param_1 + 0x15774);
    }
    else {
      puVar10 = (uint *)(param_1 + 0x14edc);
      puVar15 = (uint *)(param_1 + 0x14ee0);
      puVar17 = (uint *)(param_1 + 0x14ee0);
      puVar16 = (uint *)(param_1 + 0x14ee0);
      puVar14 = (uint *)(param_1 + 0x14edc);
    }
    lVar6 = *(longlong *)(param_1 + 0x348);
    uVar4 = uVar13;
    uVar9 = uVar13;
    if (lVar6 != 0) {
      uVar4 = *(uint *)(lVar6 + 0x10);
      uVar9 = *(uint *)(lVar6 + 0x14);
    }
    if ((lVar7 == 0) && (*(longlong *)(param_1 + 0x3c8) != 0)) {
      if ((*puVar14 == uVar4) && (*puVar16 == uVar9)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (uVar4 == 0) {
        return;
      }
      if (bVar2) {
        return;
      }
      *puVar14 = uVar4;
      *puVar17 = uVar9;
    }
    else {
      *puVar10 = uVar4;
      *puVar15 = uVar9;
    }
  }
  *(longlong *)(param_1 + 0x3c8) = lVar7;
  if (param_4 == (longlong *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined1 *)((longlong)param_4 + 0xb);
  }
  *(undefined1 *)(param_1 + 0x3d0) = uVar3;
  uVar4 = uVar13;
  if (param_4 != (longlong *)0x0) {
    uVar4 = FUN_141e712b0(*param_4);
  }
  *(uint *)(param_1 + 0x3d4) = uVar4;
  uVar4 = uVar13;
  if (param_4 != (longlong *)0x0) {
    uVar4 = FUN_141e71360(*param_4);
  }
  *(uint *)(param_1 + 0x3d8) = uVar4;
  if ((*(int *)(param_1 + 0x340) == -1) && (*(longlong *)(param_1 + 0x3c8) == 0)) {
    *(undefined4 *)(param_1 + 0x300) = 0;
    *(undefined1 *)(param_1 + 0x3dc) = 1;
    return;
  }
  uVar5 = FUN_141e9b3b0(param_1 + -0x30,param_2,(longlong *)(param_1 + 0x348),param_1 + 0x3a8,
                        param_1 + 0x388,*(undefined8 *)(param_1 + 0x3c8));
  *(undefined4 *)(param_1 + 0x300) = uVar5;
  *(undefined1 *)(param_1 + 0x3dc) = 0;
  if (*(int *)(param_1 + 0x340) == -1) {
    if (param_4 == (longlong *)0x0) {
      return;
    }
    *(undefined8 *)(param_1 + 0x318) = 0;
    uVar5 = FUN_141e712b0(*param_4);
    *(undefined4 *)(param_1 + 800) = uVar5;
    uVar5 = FUN_141e71360(*param_4);
    *(undefined4 *)(param_1 + 0x324) = uVar5;
    return;
  }
  *(undefined8 *)(param_1 + 0x318) = 0;
  lVar7 = (**(code **)(**(longlong **)(param_3 + (longlong)*(int *)(param_1 + 0x340) * 0x18) + 8))()
  ;
  if (lVar7 == 0) {
    lVar7 = (**(code **)(**(longlong **)(param_3 + (longlong)*(int *)(param_1 + 0x340) * 0x18) +
                        0x20))();
    if (lVar7 != 0) {
      uVar13 = *(uint *)(lVar7 + 0x60);
      uVar12 = uVar13;
      goto LAB_141e791e5;
    }
    lVar7 = (**(code **)(**(longlong **)(param_3 + (longlong)*(int *)(param_1 + 0x340) * 0x18) +
                        0x18))();
    if ((lVar7 == 0) &&
       (lVar7 = (**(code **)(**(longlong **)(param_3 + (longlong)*(int *)(param_1 + 0x340) * 0x18) +
                            0x10))(), lVar7 == 0)) goto LAB_141e791e5;
  }
  uVar12 = *(uint *)(lVar7 + 0x60);
  uVar13 = *(uint *)(lVar7 + 100);
LAB_141e791e5:
  bVar8 = (byte)*(undefined4 *)(param_3 + 8 + (longlong)*(int *)(param_1 + 0x340) * 0x18);
  uVar12 = uVar12 >> (bVar8 & 0x1f);
  if (uVar12 < 2) {
    uVar12 = 1;
  }
  uVar13 = uVar13 >> (bVar8 & 0x1f);
  *(uint *)(param_1 + 0x334) = uVar12;
  *(uint *)(param_1 + 800) = uVar12;
  if (uVar13 < 2) {
    uVar13 = 1;
  }
  *(uint *)(param_1 + 0x338) = uVar13;
  *(uint *)(param_1 + 0x324) = uVar13;
  return;
}



// FUNCTION 141e79260 FUN_141e79260 body=740 status=ok
// SIG undefined FUN_141e79260(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141e79260(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  uint uVar9;
  longlong *plVar10;
  undefined1 (*pauVar11) [16];
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  undefined4 uVar15;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined8 local_f0;
  char local_e8;
  int local_e0;
  undefined4 local_b8;
  undefined1 local_a8 [16];
  undefined1 local_98 [112];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  local_f0 = 0;
  iVar12 = 0;
  local_f8 = 0;
  FUN_141e78e50(param_1,*(undefined4 *)(param_2 + 0xc0),param_2,param_2 + 400);
  cVar1 = *(char *)(param_2 + 0xc4);
  if (((cVar1 != '\0') || (*(char *)(param_2 + 0x1a1) != '\0')) ||
     (*(char *)(param_2 + 0x1a0) != '\0')) {
    uVar15 = 0;
    if (cVar1 != '\0') {
      iVar2 = *(int *)(param_2 + 0xc0);
      iVar14 = iVar12;
      if (3 < iVar2) {
        pauVar11 = (undefined1 (*) [16])local_98;
        uVar9 = (iVar2 - 4U >> 2) + 1;
        plVar10 = (longlong *)(param_2 + 0x30);
        uVar13 = (ulonglong)uVar9;
        iVar14 = uVar9 * 4;
        do {
          lVar3 = plVar10[-6];
          if (lVar3 != 0) {
            local_b8 = *(undefined4 *)(lVar3 + 0x30);
            auVar4._12_4_ = local_b8;
            auVar4._0_12_ = SUB1612(*(undefined1 (*) [16])(lVar3 + 0x20),4);
            pauVar11[-1] = auVar4;
          }
          lVar3 = plVar10[-3];
          if (lVar3 != 0) {
            local_b8 = *(undefined4 *)(lVar3 + 0x30);
            auVar5._12_4_ = local_b8;
            auVar5._0_12_ = SUB1612(*(undefined1 (*) [16])(lVar3 + 0x20),4);
            *pauVar11 = auVar5;
          }
          lVar3 = *plVar10;
          if (lVar3 != 0) {
            local_b8 = *(undefined4 *)(lVar3 + 0x30);
            auVar6._12_4_ = local_b8;
            auVar6._0_12_ = SUB1612(*(undefined1 (*) [16])(lVar3 + 0x20),4);
            pauVar11[1] = auVar6;
          }
          lVar3 = plVar10[3];
          if (lVar3 != 0) {
            local_b8 = *(undefined4 *)(lVar3 + 0x30);
            auVar7._12_4_ = local_b8;
            auVar7._0_12_ = SUB1612(*(undefined1 (*) [16])(lVar3 + 0x20),4);
            pauVar11[2] = auVar7;
          }
          plVar10 = plVar10 + 0xc;
          pauVar11 = pauVar11 + 4;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      if (iVar14 < iVar2) {
        pauVar11 = (undefined1 (*) [16])(local_a8 + (longlong)iVar14 * 0x10);
        uVar13 = (ulonglong)(uint)(iVar2 - iVar14);
        plVar10 = (longlong *)(param_2 + (longlong)iVar14 * 0x18);
        do {
          lVar3 = *plVar10;
          if (lVar3 != 0) {
            local_b8 = *(undefined4 *)(lVar3 + 0x30);
            auVar8._12_4_ = local_b8;
            auVar8._0_12_ = SUB1612(*(undefined1 (*) [16])(lVar3 + 0x20),4);
            *pauVar11 = auVar8;
          }
          plVar10 = plVar10 + 3;
          pauVar11 = pauVar11 + 1;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
    }
    local_e8 = *(char *)(param_2 + 0x1a1);
    if ((*(char *)(param_2 + 0x1a0) != '\0') || (local_e8 != '\0')) {
      uVar15 = *(undefined4 *)(*(longlong *)(param_2 + 400) + 0x24);
      iVar12 = *(int *)(*(longlong *)(param_2 + 400) + 0x28);
    }
    local_f0 = CONCAT44(local_f0._4_4_,uVar15);
    local_f8 = CONCAT31(local_f8._1_3_,*(char *)(param_2 + 0x1a0));
    local_e0 = iVar12;
    FUN_141e757d0(param_1 + -0x30,cVar1,*(undefined4 *)(param_2 + 0xc0),local_a8);
  }
  return;
}



// FUNCTION 141e79580 RHISetShaderParameter body=69 status=ok
// SIG undefined RHISetShaderParameter(void)

void FOpenGLDynamicRHI::RHISetShaderParameter
               (longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined8 param_6)

{
  FOpenGLShaderParameterCache::Set
            (*(longlong *)(param_1 + 0x598) + 0x280,param_3,param_4,param_5,param_6);
  *(undefined8 *)(param_1 + 0x590) = 0;
  return;
}



// FUNCTION 141e795d0 RHISetShaderParameter body=69 status=ok
// SIG undefined RHISetShaderParameter(void)

void FOpenGLDynamicRHI::RHISetShaderParameter
               (longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined8 param_6)

{
  FOpenGLShaderParameterCache::Set
            (*(longlong *)(param_1 + 0x598) + 0x200,param_3,param_4,param_5,param_6);
  *(undefined8 *)(param_1 + 0x590) = 0;
  return;
}



// FUNCTION 141e79620 RHISetShaderParameter body=69 status=ok
// SIG undefined RHISetShaderParameter(void)

void FOpenGLDynamicRHI::RHISetShaderParameter
               (longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined8 param_6)

{
  FOpenGLShaderParameterCache::Set
            (*(longlong *)(param_1 + 0x598) + 0x100,param_3,param_4,param_5,param_6);
  *(undefined8 *)(param_1 + 0x590) = 0;
  return;
}



// FUNCTION 141e79670 RHISetShaderParameter body=69 status=ok
// SIG undefined RHISetShaderParameter(void)

void FOpenGLDynamicRHI::RHISetShaderParameter
               (longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined8 param_6)

{
  FOpenGLShaderParameterCache::Set
            (*(longlong *)(param_1 + 0x598) + 0x180,param_3,param_4,param_5,param_6);
  *(undefined8 *)(param_1 + 0x590) = 0;
  return;
}



// FUNCTION 141e796c0 RHISetShaderParameter body=66 status=ok
// SIG undefined RHISetShaderParameter(void)

void FOpenGLDynamicRHI::RHISetShaderParameter
               (longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined8 param_6)

{
  FOpenGLShaderParameterCache::Set
            (*(longlong *)(param_1 + 0x598) + 0x80,param_3,param_4,param_5,param_6);
  *(undefined8 *)(param_1 + 0x590) = 0;
  return;
}



// FUNCTION 141e79710 RHISetShaderParameter body=62 status=ok
// SIG undefined RHISetShaderParameter(void)

void FOpenGLDynamicRHI::RHISetShaderParameter
               (longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined8 param_6)

{
  FOpenGLShaderParameterCache::Set(*(undefined8 *)(param_1 + 0x598),param_3,param_4,param_5,param_6)
  ;
  *(undefined8 *)(param_1 + 0x590) = 0;
  return;
}



// FUNCTION 141e79750 FUN_141e79750 body=287 status=ok
// SIG undefined FUN_141e79750(void)

void FUN_141e79750(longlong param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (param_4 == 0) {
    lVar3 = 0;
  }
  else {
    if (DAT_146ab6383 != '\0') {
      IsInRenderingThread();
    }
    lVar3 = *(longlong *)(param_4 + 0x20);
  }
  uVar5 = 0;
  uVar6 = 0x8c2a;
  uVar4 = 0xffffffff;
  if (lVar3 != 0) {
    uVar5 = *(undefined4 *)(lVar3 + 0x10);
    uVar6 = *(undefined4 *)(lVar3 + 0x14);
    uVar4 = *(undefined4 *)(lVar3 + 0x20);
    FUN_141e7c020(param_1 + -0x30,lVar3);
  }
  lVar2 = (longlong)(int)param_3;
  lVar1 = *(longlong *)(param_1 + 0x180);
  *(undefined8 *)(lVar1 + lVar2 * 0x28) = 0;
  *(longlong *)(lVar1 + 8 + lVar2 * 0x28) = lVar3;
  *(undefined4 *)(lVar1 + 0x10 + lVar2 * 0x28) = uVar6;
  *(undefined4 *)(lVar1 + 0x14 + lVar2 * 0x28) = uVar5;
  *(undefined4 *)(lVar1 + 0x18 + lVar2 * 0x28) = uVar4;
  *(undefined1 *)(lVar1 + 0x1c + lVar2 * 0x28) = 1;
  *(undefined4 *)(lVar1 + 0x20 + lVar2 * 0x28) = 0;
  if ((DAT_146ab0540 == 0) || (DAT_146ab49a0 == 0)) {
    (*DAT_146ab4188)(param_3,*(undefined4 *)(*(longlong *)(param_1 + 0x8d0) + 0x18));
  }
  else {
    *(longlong *)(*(longlong *)(param_1 + 0x188) + (ulonglong)param_3 * 8) =
         *(longlong *)(param_1 + 0x8d0);
  }
  if ((DAT_1469f59d8 != 0) && (*(longlong *)(DAT_1469f59d8 + 0xcc0) != 0)) {
    FShaderCache::InternalSetSRV
              (DAT_1469f59d8,*(longlong *)(DAT_1469f59d8 + 0xcc0),5,param_3,param_4);
  }
  return;
}



// FUNCTION 141e79870 FUN_141e79870 body=257 status=ok
// SIG undefined FUN_141e79870(void)

void FUN_141e79870(longlong param_1,undefined8 param_2,int param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (param_4 == 0) {
    lVar3 = 0;
  }
  else {
    if (DAT_146ab6383 != '\0') {
      IsInRenderingThread();
    }
    lVar3 = *(longlong *)(param_4 + 0x20);
  }
  uVar5 = 0;
  uVar4 = 0x8c2a;
  uVar6 = 0xffffffff;
  if (lVar3 != 0) {
    uVar5 = *(undefined4 *)(lVar3 + 0x10);
    uVar4 = *(undefined4 *)(lVar3 + 0x14);
    uVar6 = *(undefined4 *)(lVar3 + 0x20);
    FUN_141e7c020(param_1 + -0x30,lVar3);
  }
  lVar2 = (longlong)(DAT_1464c9808 + DAT_1464c9804 + DAT_1464c9800 + DAT_1464c97f8 + param_3);
  lVar1 = *(longlong *)(param_1 + 0x180);
  *(undefined8 *)(lVar1 + lVar2 * 0x28) = 0;
  *(longlong *)(lVar1 + 8 + lVar2 * 0x28) = lVar3;
  *(undefined4 *)(lVar1 + 0x10 + lVar2 * 0x28) = uVar4;
  *(undefined4 *)(lVar1 + 0x14 + lVar2 * 0x28) = uVar5;
  *(undefined4 *)(lVar1 + 0x18 + lVar2 * 0x28) = uVar6;
  *(undefined1 *)(lVar1 + 0x1c + lVar2 * 0x28) = 1;
  *(undefined4 *)(lVar1 + 0x20 + lVar2 * 0x28) = 0;
  if ((DAT_1469f59d8 != 0) && (*(longlong *)(DAT_1469f59d8 + 0xcc0) != 0)) {
    FShaderCache::InternalSetSRV
              (DAT_1469f59d8,*(longlong *)(DAT_1469f59d8 + 0xcc0),2,param_3,param_4);
  }
  return;
}



// FUNCTION 141e79980 FUN_141e79980 body=324 status=ok
// SIG undefined FUN_141e79980(void)

void FUN_141e79980(longlong param_1,undefined8 param_2,int param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  lVar4 = 0;
  if (param_4 != 0) {
    if (DAT_146ab6383 != '\0') {
      IsInRenderingThread();
    }
    lVar4 = *(longlong *)(param_4 + 0x20);
  }
  uVar5 = 0;
  uVar6 = 0x8c2a;
  uVar7 = 0xffffffff;
  if (lVar4 != 0) {
    uVar5 = *(undefined4 *)(lVar4 + 0x10);
    uVar6 = *(undefined4 *)(lVar4 + 0x14);
    uVar7 = *(undefined4 *)(lVar4 + 0x20);
    FUN_141e7c020(param_1 + -0x30,lVar4);
  }
  lVar3 = (longlong)(DAT_1464c9800 + DAT_1464c97f8 + param_3);
  lVar1 = *(longlong *)(param_1 + 0x180);
  *(undefined8 *)(lVar1 + lVar3 * 0x28) = 0;
  *(longlong *)(lVar1 + 8 + lVar3 * 0x28) = lVar4;
  *(undefined4 *)(lVar1 + 0x10 + lVar3 * 0x28) = uVar6;
  *(undefined4 *)(lVar1 + 0x14 + lVar3 * 0x28) = uVar5;
  *(undefined4 *)(lVar1 + 0x18 + lVar3 * 0x28) = uVar7;
  *(undefined1 *)(lVar1 + 0x1c + lVar3 * 0x28) = 1;
  *(undefined4 *)(lVar1 + 0x20 + lVar3 * 0x28) = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x8d0);
  *(undefined8 *)
   (*(longlong *)(param_1 + 0x188) + (longlong)(DAT_1464c9800 + DAT_1464c97f8 + param_3) * 8) =
       uVar2;
  if (DAT_1469f59d8 != 0) {
    if (*(longlong *)(DAT_1469f59d8 + 0xcc0) != 0) {
      FShaderCache::InternalSetSamplerState
                (DAT_1469f59d8,*(longlong *)(DAT_1469f59d8 + 0xcc0),4,param_3,uVar2);
    }
    if ((DAT_1469f59d8 != 0) && (*(longlong *)(DAT_1469f59d8 + 0xcc0) != 0)) {
      FShaderCache::InternalSetSRV
                (DAT_1469f59d8,*(longlong *)(DAT_1469f59d8 + 0xcc0),4,param_3,param_4);
    }
  }
  return;
}



// FUNCTION 141e79ad0 FUN_141e79ad0 body=251 status=ok
// SIG undefined FUN_141e79ad0(void)

void FUN_141e79ad0(longlong param_1,undefined8 param_2,int param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (param_4 == 0) {
    lVar3 = 0;
  }
  else {
    if (DAT_146ab6383 != '\0') {
      IsInRenderingThread();
    }
    lVar3 = *(longlong *)(param_4 + 0x20);
  }
  uVar5 = 0;
  uVar4 = 0x8c2a;
  uVar6 = 0xffffffff;
  if (lVar3 != 0) {
    uVar5 = *(undefined4 *)(lVar3 + 0x10);
    uVar4 = *(undefined4 *)(lVar3 + 0x14);
    uVar6 = *(undefined4 *)(lVar3 + 0x20);
    FUN_141e7c020(param_1 + -0x30,lVar3);
  }
  lVar2 = (longlong)(DAT_1464c9804 + DAT_1464c9800 + DAT_1464c97f8 + param_3);
  lVar1 = *(longlong *)(param_1 + 0x180);
  *(undefined8 *)(lVar1 + lVar2 * 0x28) = 0;
  *(longlong *)(lVar1 + 8 + lVar2 * 0x28) = lVar3;
  *(undefined4 *)(lVar1 + 0x10 + lVar2 * 0x28) = uVar4;
  *(undefined4 *)(lVar1 + 0x14 + lVar2 * 0x28) = uVar5;
  *(undefined4 *)(lVar1 + 0x18 + lVar2 * 0x28) = uVar6;
  *(undefined1 *)(lVar1 + 0x1c + lVar2 * 0x28) = 1;
  *(undefined4 *)(lVar1 + 0x20 + lVar2 * 0x28) = 0;
  if ((DAT_1469f59d8 != 0) && (*(longlong *)(DAT_1469f59d8 + 0xcc0) != 0)) {
    FShaderCache::InternalSetSRV
              (DAT_1469f59d8,*(longlong *)(DAT_1469f59d8 + 0xcc0),1,param_3,param_4);
  }
  return;
}



// FUNCTION 141e79bd0 FUN_141e79bd0 body=291 status=ok
// SIG undefined FUN_141e79bd0(void)

void FUN_141e79bd0(longlong param_1,undefined8 param_2,int param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  
  lVar3 = 0;
  lVar7 = (longlong)param_3;
  if (param_4 != 0) {
    if (DAT_146ab6383 != '\0') {
      IsInRenderingThread();
    }
    lVar3 = *(longlong *)(param_4 + 0x20);
  }
  uVar4 = 0;
  uVar5 = 0x8c2a;
  uVar6 = 0xffffffff;
  if (lVar3 != 0) {
    uVar4 = *(undefined4 *)(lVar3 + 0x10);
    uVar5 = *(undefined4 *)(lVar3 + 0x14);
    uVar6 = *(undefined4 *)(lVar3 + 0x20);
    FUN_141e7c020(param_1 + -0x30,lVar3);
  }
  lVar1 = *(longlong *)(param_1 + 0x180);
  *(undefined8 *)(lVar1 + lVar7 * 0x28) = 0;
  *(longlong *)(lVar1 + 8 + lVar7 * 0x28) = lVar3;
  *(undefined4 *)(lVar1 + 0x10 + lVar7 * 0x28) = uVar5;
  *(undefined4 *)(lVar1 + 0x14 + lVar7 * 0x28) = uVar4;
  *(undefined4 *)(lVar1 + 0x18 + lVar7 * 0x28) = uVar6;
  *(undefined1 *)(lVar1 + 0x1c + lVar7 * 0x28) = 1;
  *(undefined4 *)(lVar1 + 0x20 + lVar7 * 0x28) = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x8d0);
  *(undefined8 *)(*(longlong *)(param_1 + 0x188) + lVar7 * 8) = uVar2;
  if (DAT_1469f59d8 != 0) {
    if (*(longlong *)(DAT_1469f59d8 + 0xcc0) != 0) {
      FShaderCache::InternalSetSamplerState
                (DAT_1469f59d8,*(longlong *)(DAT_1469f59d8 + 0xcc0),3,param_3,uVar2);
    }
    if ((DAT_1469f59d8 != 0) && (*(longlong *)(DAT_1469f59d8 + 0xcc0) != 0)) {
      FShaderCache::InternalSetSRV
                (DAT_1469f59d8,*(longlong *)(DAT_1469f59d8 + 0xcc0),3,param_3,param_4);
    }
  }
  return;
}



// FUNCTION 141e79d00 FUN_141e79d00 body=306 status=ok
// SIG undefined FUN_141e79d00(void)

void FUN_141e79d00(longlong param_1,undefined8 param_2,int param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  lVar4 = 0;
  if (param_4 != 0) {
    if (DAT_146ab6383 != '\0') {
      IsInRenderingThread();
    }
    lVar4 = *(longlong *)(param_4 + 0x20);
  }
  uVar5 = 0;
  uVar6 = 0x8c2a;
  uVar7 = 0xffffffff;
  if (lVar4 != 0) {
    uVar5 = *(undefined4 *)(lVar4 + 0x10);
    uVar6 = *(undefined4 *)(lVar4 + 0x14);
    uVar7 = *(undefined4 *)(lVar4 + 0x20);
    FUN_141e7c020(param_1 + -0x30,lVar4);
  }
  lVar3 = (longlong)(DAT_1464c97f8 + param_3);
  lVar1 = *(longlong *)(param_1 + 0x180);
  *(undefined8 *)(lVar1 + lVar3 * 0x28) = 0;
  *(longlong *)(lVar1 + 8 + lVar3 * 0x28) = lVar4;
  *(undefined4 *)(lVar1 + 0x10 + lVar3 * 0x28) = uVar6;
  *(undefined4 *)(lVar1 + 0x14 + lVar3 * 0x28) = uVar5;
  *(undefined4 *)(lVar1 + 0x18 + lVar3 * 0x28) = uVar7;
  *(undefined1 *)(lVar1 + 0x1c + lVar3 * 0x28) = 1;
  *(undefined4 *)(lVar1 + 0x20 + lVar3 * 0x28) = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x8d0);
  *(undefined8 *)(*(longlong *)(param_1 + 0x188) + (longlong)(DAT_1464c97f8 + param_3) * 8) = uVar2;
  if (DAT_1469f59d8 != 0) {
    if (*(longlong *)(DAT_1469f59d8 + 0xcc0) != 0) {
      FShaderCache::InternalSetSamplerState
                (DAT_1469f59d8,*(longlong *)(DAT_1469f59d8 + 0xcc0),0,param_3,uVar2);
    }
    if ((DAT_1469f59d8 != 0) && (*(longlong *)(DAT_1469f59d8 + 0xcc0) != 0)) {
      FShaderCache::InternalSetSRV
                (DAT_1469f59d8,*(longlong *)(DAT_1469f59d8 + 0xcc0),0,param_3,param_4);
    }
  }
  return;
}



// FUNCTION 141e79e70 RHISetShaderSampler body=97 status=ok
// SIG undefined RHISetShaderSampler(void)

void FOpenGLDynamicRHI::RHISetShaderSampler
               (longlong param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  *(undefined8 *)
   (*(longlong *)(param_1 + 0x188) +
   (longlong)(DAT_1464c9808 + DAT_1464c9804 + DAT_1464c9800 + DAT_1464c97f8 + param_3) * 8) =
       param_4;
  if ((DAT_1469f59d8 != 0) && (*(longlong *)(DAT_1469f59d8 + 0xcc0) != 0)) {
    FShaderCache::InternalSetSamplerState
              (DAT_1469f59d8,*(longlong *)(DAT_1469f59d8 + 0xcc0),2,param_3,param_4);
  }
  return;
}



// FUNCTION 141e79ee0 RHISetShaderSampler body=83 status=ok
// SIG undefined RHISetShaderSampler(void)

void FOpenGLDynamicRHI::RHISetShaderSampler
               (longlong param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  *(undefined8 *)
   (*(longlong *)(param_1 + 0x188) + (longlong)(DAT_1464c9800 + DAT_1464c97f8 + param_3) * 8) =
       param_4;
  if ((DAT_1469f59d8 != 0) && (*(longlong *)(DAT_1469f59d8 + 0xcc0) != 0)) {
    FShaderCache::InternalSetSamplerState
              (DAT_1469f59d8,*(longlong *)(DAT_1469f59d8 + 0xcc0),4,param_3,param_4);
  }
  return;
}



// FUNCTION 141e79f40 RHISetShaderSampler body=90 status=ok
// SIG undefined RHISetShaderSampler(void)

void FOpenGLDynamicRHI::RHISetShaderSampler
               (longlong param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  *(undefined8 *)
   (*(longlong *)(param_1 + 0x188) +
   (longlong)(DAT_1464c9804 + DAT_1464c9800 + DAT_1464c97f8 + param_3) * 8) = param_4;
  if ((DAT_1469f59d8 != 0) && (*(longlong *)(DAT_1469f59d8 + 0xcc0) != 0)) {
    FShaderCache::InternalSetSamplerState
              (DAT_1469f59d8,*(longlong *)(DAT_1469f59d8 + 0xcc0),1,param_3,param_4);
  }
  return;
}



// FUNCTION 141e79fa0 RHISetShaderSampler body=66 status=ok
// SIG undefined RHISetShaderSampler(void)

void FOpenGLDynamicRHI::RHISetShaderSampler
               (longlong param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  *(undefined8 *)(*(longlong *)(param_1 + 0x188) + (longlong)param_3 * 8) = param_4;
  if ((DAT_1469f59d8 != 0) && (*(longlong *)(DAT_1469f59d8 + 0xcc0) != 0)) {
    FShaderCache::InternalSetSamplerState
              (DAT_1469f59d8,*(longlong *)(DAT_1469f59d8 + 0xcc0),3,param_3,param_4);
  }
  return;
}



// FUNCTION 141e79ff0 RHISetShaderSampler body=72 status=ok
// SIG undefined RHISetShaderSampler(void)

void FOpenGLDynamicRHI::RHISetShaderSampler
               (longlong param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  *(undefined8 *)(*(longlong *)(param_1 + 0x188) + (longlong)(DAT_1464c97f8 + param_3) * 8) =
       param_4;
  if ((DAT_1469f59d8 != 0) && (*(longlong *)(DAT_1469f59d8 + 0xcc0) != 0)) {
    FShaderCache::InternalSetSamplerState
              (DAT_1469f59d8,*(longlong *)(DAT_1469f59d8 + 0xcc0),0,param_3,param_4);
  }
  return;
}



// FUNCTION 141e7a040 FUN_141e7a040 body=279 status=ok
// SIG undefined FUN_141e7a040(void)

void FUN_141e7a040(longlong param_1,undefined8 param_2,int param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = 0;
  if (param_4 != (longlong *)0x0) {
    (**(code **)(*param_4 + 0x48))(param_4);
    if (DAT_146ab6383 != '\0') {
      IsInRenderingThread();
    }
    lVar6 = (**(code **)(*param_4 + 0x48))(param_4);
  }
  lVar1 = (longlong)param_3 * 0x28;
  if (lVar6 == 0) {
    lVar6 = *(longlong *)(param_1 + 0x180);
    *(undefined8 *)(lVar1 + lVar6) = 0;
    *(undefined8 *)(lVar1 + 8 + lVar6) = 0;
    *(undefined8 *)(lVar1 + 0x10 + lVar6) = 0;
    *(undefined4 *)(lVar1 + 0x18 + lVar6) = 0xffffffff;
    *(undefined1 *)(lVar1 + 0x1c + lVar6) = 1;
    *(undefined4 *)(lVar1 + 0x20 + lVar6) = 0;
  }
  else {
    iVar2 = *(int *)((longlong)param_4 + 0x34);
    lVar5 = *(longlong *)(param_1 + 0x180);
    uVar3 = *(undefined4 *)(lVar6 + 0x10);
    uVar4 = *(undefined4 *)(lVar6 + 0x14);
    *(longlong *)(lVar1 + lVar5) = lVar6;
    *(undefined8 *)(lVar1 + 8 + lVar5) = 0;
    *(undefined4 *)(lVar1 + 0x10 + lVar5) = uVar4;
    *(undefined4 *)(lVar1 + 0x14 + lVar5) = uVar3;
    *(undefined4 *)(lVar1 + 0x18 + lVar5) = 0xffffffff;
    if ((iVar2 < 0) || (iVar2 == 1)) {
      *(int *)(lVar1 + 0x20 + lVar5) = iVar2;
      *(undefined1 *)(lVar1 + 0x1c + lVar5) = 0;
    }
    else {
      *(int *)(lVar1 + 0x20 + lVar5) = iVar2;
      *(undefined1 *)(lVar1 + 0x1c + lVar5) = 1;
    }
  }
  if ((DAT_1469f59d8 != 0) && (*(longlong *)(DAT_1469f59d8 + 0xcc0) != 0)) {
    FShaderCache::InternalSetTexture
              (DAT_1469f59d8,*(longlong *)(DAT_1469f59d8 + 0xcc0),5,param_3,param_4);
  }
  return;
}



// FUNCTION 141e7a160 RHISetShaderTexture body=318 status=ok
// SIG undefined RHISetShaderTexture(void)

void FOpenGLDynamicRHI::RHISetShaderTexture
               (longlong param_1,undefined8 param_2,int param_3,longlong *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 uVar7;
  
  if (param_4 != (longlong *)0x0) {
    (**(code **)(*param_4 + 0x48))(param_4);
    if (DAT_146ab6383 != '\0') {
      IsInRenderingThread();
    }
    lVar4 = (**(code **)(*param_4 + 0x48))(param_4);
    if (lVar4 != 0) {
      uVar1 = *(undefined4 *)(lVar4 + 0x10);
      uVar7 = 0;
      uVar2 = *(undefined4 *)(lVar4 + 0x14);
      iVar3 = *(int *)((longlong)param_4 + 0x34);
      lVar5 = (longlong)(DAT_1464c9808 + DAT_1464c9804 + DAT_1464c9800 + DAT_1464c97f8 + param_3);
      lVar6 = *(longlong *)(param_1 + 0x180);
      *(longlong *)(lVar6 + lVar5 * 0x28) = lVar4;
      *(undefined8 *)(lVar6 + 8 + lVar5 * 0x28) = 0;
      *(undefined4 *)(lVar6 + 0x10 + lVar5 * 0x28) = uVar2;
      *(undefined4 *)(lVar6 + 0x14 + lVar5 * 0x28) = uVar1;
      *(undefined4 *)(lVar6 + 0x18 + lVar5 * 0x28) = 0xffffffff;
      if ((-1 < iVar3) && (iVar3 != 1)) {
        uVar7 = 1;
      }
      *(undefined1 *)(lVar6 + 0x1c + lVar5 * 0x28) = uVar7;
      *(int *)(lVar6 + 0x20 + lVar5 * 0x28) = iVar3;
      goto LAB_141e7a25e;
    }
  }
  lVar6 = (longlong)(DAT_1464c9808 + DAT_1464c9804 + DAT_1464c9800 + DAT_1464c97f8 + param_3);
  lVar4 = *(longlong *)(param_1 + 0x180);
  *(undefined8 *)(lVar4 + lVar6 * 0x28) = 0;
  *(undefined8 *)(lVar4 + 8 + lVar6 * 0x28) = 0;
  *(undefined8 *)(lVar4 + 0x10 + lVar6 * 0x28) = 0;
  *(undefined4 *)(lVar4 + 0x18 + lVar6 * 0x28) = 0xffffffff;
  *(undefined1 *)(lVar4 + 0x1c + lVar6 * 0x28) = 1;
  *(undefined4 *)(lVar4 + 0x20 + lVar6 * 0x28) = 0;
LAB_141e7a25e:
  if ((DAT_1469f59d8 != 0) && (*(longlong *)(DAT_1469f59d8 + 0xcc0) != 0)) {
    FShaderCache::InternalSetTexture
              (DAT_1469f59d8,*(longlong *)(DAT_1469f59d8 + 0xcc0),2,param_3,param_4);
  }
  return;
}



// FUNCTION 141e7a2a0 RHISetShaderTexture body=309 status=ok
// SIG undefined RHISetShaderTexture(void)

void FOpenGLDynamicRHI::RHISetShaderTexture
               (longlong param_1,undefined8 param_2,int param_3,longlong *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (param_4 != (longlong *)0x0) {
    (**(code **)(*param_4 + 0x48))(param_4);
    if (DAT_146ab6383 != '\0') {
      IsInRenderingThread();
    }
    lVar4 = (**(code **)(*param_4 + 0x48))(param_4);
    if (lVar4 != 0) {
      uVar1 = *(undefined4 *)(lVar4 + 0x10);
      uVar2 = *(undefined4 *)(lVar4 + 0x14);
      iVar3 = *(int *)((longlong)param_4 + 0x34);
      lVar6 = (longlong)(DAT_1464c9800 + DAT_1464c97f8 + param_3);
      lVar5 = *(longlong *)(param_1 + 0x180);
      *(longlong *)(lVar5 + lVar6 * 0x28) = lVar4;
      *(undefined4 *)(lVar5 + 0x10 + lVar6 * 0x28) = uVar2;
      *(undefined4 *)(lVar5 + 0x14 + lVar6 * 0x28) = uVar1;
      lVar5 = lVar5 + lVar6 * 0x28;
      *(undefined4 *)(lVar5 + 0x18) = 0xffffffff;
      *(undefined8 *)(lVar5 + 8) = 0;
      if ((iVar3 < 0) || (iVar3 == 1)) {
        *(int *)(lVar5 + 0x20) = iVar3;
        *(undefined1 *)(lVar5 + 0x1c) = 0;
      }
      else {
        *(int *)(lVar5 + 0x20) = iVar3;
        *(undefined1 *)(lVar5 + 0x1c) = 1;
      }
      goto LAB_141e7a395;
    }
  }
  lVar5 = (longlong)(DAT_1464c9800 + DAT_1464c97f8 + param_3);
  lVar4 = *(longlong *)(param_1 + 0x180);
  *(undefined8 *)(lVar4 + lVar5 * 0x28) = 0;
  *(undefined8 *)(lVar4 + 8 + lVar5 * 0x28) = 0;
  *(undefined8 *)(lVar4 + 0x10 + lVar5 * 0x28) = 0;
  *(undefined4 *)(lVar4 + 0x18 + lVar5 * 0x28) = 0xffffffff;
  *(undefined1 *)(lVar4 + 0x1c + lVar5 * 0x28) = 1;
  *(undefined4 *)(lVar4 + 0x20 + lVar5 * 0x28) = 0;
LAB_141e7a395:
  if ((DAT_1469f59d8 != 0) && (*(longlong *)(DAT_1469f59d8 + 0xcc0) != 0)) {
    FShaderCache::InternalSetTexture
              (DAT_1469f59d8,*(longlong *)(DAT_1469f59d8 + 0xcc0),4,param_3,param_4);
  }
  return;
}



// FUNCTION 141e7a3e0 RHISetShaderTexture body=319 status=ok
// SIG undefined RHISetShaderTexture(void)

void FOpenGLDynamicRHI::RHISetShaderTexture
               (longlong param_1,undefined8 param_2,int param_3,longlong *param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (param_4 != (longlong *)0x0) {
    (**(code **)(*param_4 + 0x48))(param_4);
    if (DAT_146ab6383 != '\0') {
      IsInRenderingThread();
    }
    lVar5 = (**(code **)(*param_4 + 0x48))(param_4);
    if (lVar5 != 0) {
      uVar2 = *(undefined4 *)(lVar5 + 0x10);
      uVar3 = *(undefined4 *)(lVar5 + 0x14);
      iVar4 = *(int *)((longlong)param_4 + 0x34);
      plVar1 = (longlong *)
               (*(longlong *)(param_1 + 0x180) +
               (longlong)(DAT_1464c9804 + DAT_1464c9800 + DAT_1464c97f8 + param_3) * 0x28);
      *plVar1 = lVar5;
      plVar1[1] = 0;
      *(undefined4 *)(plVar1 + 2) = uVar3;
      *(undefined4 *)((longlong)plVar1 + 0x14) = uVar2;
      *(undefined4 *)(plVar1 + 3) = 0xffffffff;
      if ((iVar4 < 0) || (iVar4 == 1)) {
        *(int *)(plVar1 + 4) = iVar4;
        *(undefined1 *)((longlong)plVar1 + 0x1c) = 0;
      }
      else {
        *(int *)(plVar1 + 4) = iVar4;
        *(undefined1 *)((longlong)plVar1 + 0x1c) = 1;
      }
      goto LAB_141e7a4df;
    }
  }
  lVar6 = (longlong)(DAT_1464c9804 + DAT_1464c9800 + DAT_1464c97f8 + param_3);
  lVar5 = *(longlong *)(param_1 + 0x180);
  *(undefined8 *)(lVar5 + lVar6 * 0x28) = 0;
  *(undefined8 *)(lVar5 + 8 + lVar6 * 0x28) = 0;
  *(undefined8 *)(lVar5 + 0x10 + lVar6 * 0x28) = 0;
  *(undefined4 *)(lVar5 + 0x18 + lVar6 * 0x28) = 0xffffffff;
  *(undefined1 *)(lVar5 + 0x1c + lVar6 * 0x28) = 1;
  *(undefined4 *)(lVar5 + 0x20 + lVar6 * 0x28) = 0;
LAB_141e7a4df:
  if ((DAT_1469f59d8 != 0) && (*(longlong *)(DAT_1469f59d8 + 0xcc0) != 0)) {
    FShaderCache::InternalSetTexture
              (DAT_1469f59d8,*(longlong *)(DAT_1469f59d8 + 0xcc0),1,param_3,param_4);
  }
  return;
}



// FUNCTION 141e7a520 FUN_141e7a520 body=279 status=ok
// SIG undefined FUN_141e7a520(void)

void FUN_141e7a520(longlong param_1,undefined8 param_2,int param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = 0;
  if (param_4 != (longlong *)0x0) {
    (**(code **)(*param_4 + 0x48))(param_4);
    if (DAT_146ab6383 != '\0') {
      IsInRenderingThread();
    }
    lVar6 = (**(code **)(*param_4 + 0x48))(param_4);
  }
  lVar1 = (longlong)param_3 * 0x28;
  if (lVar6 == 0) {
    lVar6 = *(longlong *)(param_1 + 0x180);
    *(undefined8 *)(lVar1 + lVar6) = 0;
    *(undefined8 *)(lVar1 + 8 + lVar6) = 0;
    *(undefined8 *)(lVar1 + 0x10 + lVar6) = 0;
    *(undefined4 *)(lVar1 + 0x18 + lVar6) = 0xffffffff;
    *(undefined1 *)(lVar1 + 0x1c + lVar6) = 1;
    *(undefined4 *)(lVar1 + 0x20 + lVar6) = 0;
  }
  else {
    iVar2 = *(int *)((longlong)param_4 + 0x34);
    lVar5 = *(longlong *)(param_1 + 0x180);
    uVar3 = *(undefined4 *)(lVar6 + 0x10);
    uVar4 = *(undefined4 *)(lVar6 + 0x14);
    *(longlong *)(lVar1 + lVar5) = lVar6;
    *(undefined8 *)(lVar1 + 8 + lVar5) = 0;
    *(undefined4 *)(lVar1 + 0x10 + lVar5) = uVar4;
    *(undefined4 *)(lVar1 + 0x14 + lVar5) = uVar3;
    *(undefined4 *)(lVar1 + 0x18 + lVar5) = 0xffffffff;
    if ((iVar2 < 0) || (iVar2 == 1)) {
      *(int *)(lVar1 + 0x20 + lVar5) = iVar2;
      *(undefined1 *)(lVar1 + 0x1c + lVar5) = 0;
    }
    else {
      *(int *)(lVar1 + 0x20 + lVar5) = iVar2;
      *(undefined1 *)(lVar1 + 0x1c + lVar5) = 1;
    }
  }
  if ((DAT_1469f59d8 != 0) && (*(longlong *)(DAT_1469f59d8 + 0xcc0) != 0)) {
    FShaderCache::InternalSetTexture
              (DAT_1469f59d8,*(longlong *)(DAT_1469f59d8 + 0xcc0),3,param_3,param_4);
  }
  return;
}



// FUNCTION 141e7a640 RHISetShaderTexture body=281 status=ok
// SIG undefined RHISetShaderTexture(void)

void FOpenGLDynamicRHI::RHISetShaderTexture
               (longlong param_1,undefined8 param_2,int param_3,longlong *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (param_4 != (longlong *)0x0) {
    (**(code **)(*param_4 + 0x48))(param_4);
    if (DAT_146ab6383 != '\0') {
      IsInRenderingThread();
    }
    lVar4 = (**(code **)(*param_4 + 0x48))(param_4);
    if (lVar4 != 0) {
      iVar1 = *(int *)((longlong)param_4 + 0x34);
      uVar2 = *(undefined4 *)(lVar4 + 0x10);
      uVar3 = *(undefined4 *)(lVar4 + 0x14);
      lVar6 = (longlong)(DAT_1464c97f8 + param_3);
      lVar5 = *(longlong *)(param_1 + 0x180);
      *(longlong *)(lVar5 + lVar6 * 0x28) = lVar4;
      *(undefined4 *)(lVar5 + 0x10 + lVar6 * 0x28) = uVar3;
      *(undefined4 *)(lVar5 + 0x14 + lVar6 * 0x28) = uVar2;
      lVar5 = lVar5 + lVar6 * 0x28;
      *(undefined4 *)(lVar5 + 0x18) = 0xffffffff;
      *(undefined8 *)(lVar5 + 8) = 0;
      if ((iVar1 < 0) || (iVar1 == 1)) {
        *(int *)(lVar5 + 0x20) = iVar1;
        *(undefined1 *)(lVar5 + 0x1c) = 0;
      }
      else {
        *(int *)(lVar5 + 0x20) = iVar1;
        *(undefined1 *)(lVar5 + 0x1c) = 1;
      }
      goto LAB_141e7a721;
    }
  }
  lVar5 = (longlong)(DAT_1464c97f8 + param_3);
  lVar4 = *(longlong *)(param_1 + 0x180);
  *(undefined8 *)(lVar4 + lVar5 * 0x28) = 0;
  *(undefined8 *)(lVar4 + 8 + lVar5 * 0x28) = 0;
  *(undefined8 *)(lVar4 + 0x10 + lVar5 * 0x28) = 0;
  *(undefined4 *)(lVar4 + 0x18 + lVar5 * 0x28) = 0xffffffff;
  *(undefined1 *)(lVar4 + 0x1c + lVar5 * 0x28) = 1;
  *(undefined4 *)(lVar4 + 0x20 + lVar5 * 0x28) = 0;
LAB_141e7a721:
  if ((DAT_1469f59d8 != 0) && (*(longlong *)(DAT_1469f59d8 + 0xcc0) != 0)) {
    FShaderCache::InternalSetTexture
              (DAT_1469f59d8,*(longlong *)(DAT_1469f59d8 + 0xcc0),0,param_3,param_4);
  }
  return;
}



// FUNCTION 141e7a760 RHISetShaderUniformBuffer body=65 status=ok
// SIG undefined RHISetShaderUniformBuffer(void)

void FOpenGLDynamicRHI::RHISetShaderUniformBuffer
               (longlong param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + ((ulonglong)param_3 + 0xfc) * 8,param_4);
  *(ushort *)(param_1 + 0x85c) = *(ushort *)(param_1 + 0x85c) | (ushort)(1 << (param_3 & 0x1f));
  return;
}



// FUNCTION 141e7a7b0 RHISetShaderUniformBuffer body=72 status=ok
// SIG undefined RHISetShaderUniformBuffer(void)

void FOpenGLDynamicRHI::RHISetShaderUniformBuffer
               (longlong param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + ((ulonglong)param_3 + 0xd2) * 8,param_4);
  *(undefined1 *)(param_1 + 0x850) = 1;
  *(ushort *)(param_1 + 0x856) = *(ushort *)(param_1 + 0x856) | (ushort)(1 << (param_3 & 0x1f));
  return;
}



// FUNCTION 141e7a800 RHISetShaderUniformBuffer body=72 status=ok
// SIG undefined RHISetShaderUniformBuffer(void)

void FOpenGLDynamicRHI::RHISetShaderUniformBuffer
               (longlong param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + ((ulonglong)param_3 + 0xee) * 8,param_4);
  *(undefined1 *)(param_1 + 0x850) = 1;
  *(ushort *)(param_1 + 0x85a) = *(ushort *)(param_1 + 0x85a) | (ushort)(1 << (param_3 & 0x1f));
  return;
}



// FUNCTION 141e7a850 RHISetShaderUniformBuffer body=72 status=ok
// SIG undefined RHISetShaderUniformBuffer(void)

void FOpenGLDynamicRHI::RHISetShaderUniformBuffer
               (longlong param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + ((ulonglong)param_3 + 0xc4) * 8,param_4);
  *(undefined1 *)(param_1 + 0x850) = 1;
  *(ushort *)(param_1 + 0x854) = *(ushort *)(param_1 + 0x854) | (ushort)(1 << (param_3 & 0x1f));
  return;
}



// FUNCTION 141e7a8a0 RHISetShaderUniformBuffer body=72 status=ok
// SIG undefined RHISetShaderUniformBuffer(void)

void FOpenGLDynamicRHI::RHISetShaderUniformBuffer
               (longlong param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + ((ulonglong)param_3 + 0xe0) * 8,param_4);
  *(undefined1 *)(param_1 + 0x850) = 1;
  *(ushort *)(param_1 + 0x858) = *(ushort *)(param_1 + 0x858) | (ushort)(1 << (param_3 & 0x1f));
  return;
}



// FUNCTION 141e7a8f0 RHISetShaderUniformBuffer body=72 status=ok
// SIG undefined RHISetShaderUniformBuffer(void)

void FOpenGLDynamicRHI::RHISetShaderUniformBuffer
               (longlong param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + ((ulonglong)param_3 + 0xb6) * 8,param_4);
  *(undefined1 *)(param_1 + 0x850) = 1;
  *(ushort *)(param_1 + 0x852) = *(ushort *)(param_1 + 0x852) | (ushort)(1 << (param_3 & 0x1f));
  return;
}



// FUNCTION 141e7a9f0 FUN_141e7a9f0 body=153 status=ok
// SIG undefined FUN_141e7a9f0(void)

void FUN_141e7a9f0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  *(undefined4 *)(param_1 + 0x318) = param_2;
  *(undefined4 *)(param_1 + 0x32c) = param_7;
  *(undefined4 *)(param_1 + 0x328) = param_4;
  *(undefined4 *)(param_1 + 0x31c) = param_3;
  *(undefined4 *)(param_1 + 800) = param_5;
  *(undefined4 *)(param_1 + 0x324) = param_6;
  *(undefined1 *)(param_1 + 0x304) = 0;
  *(undefined8 *)(param_1 + 0x308) = 0;
  *(undefined8 *)(param_1 + 0x310) = 0;
  if ((DAT_1469f59d8 != 0) && (*(longlong *)(DAT_1469f59d8 + 0xcc0) != 0)) {
    FShaderCache::InternalSetViewport
              (DAT_1469f59d8,*(longlong *)(DAT_1469f59d8 + 0xcc0),param_2,param_3,param_4,param_5,
               param_6,param_7);
  }
  return;
}



// FUNCTION 141e7aaa0 FUN_141e7aaa0 body=2085 status=ok
// SIG undefined FUN_141e7aaa0(void)

void FUN_141e7aaa0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  char cVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined4 *puVar16;
  int *piVar17;
  undefined4 *puVar18;
  uint uVar19;
  longlong *plVar20;
  undefined4 *puVar21;
  uint in_stack_ffffffffffffff88;
  
  plVar20 = (longlong *)(param_1 + 0x378);
  bVar11 = false;
  param_1 = param_1 - param_2;
  bVar12 = false;
  uVar19 = 0;
  piVar17 = (int *)(param_2 + 0x74);
  lVar1 = param_1 + 0x1a4;
  lVar2 = param_1 + 0x1a8;
  lVar3 = param_1 + 0x1a0;
  lVar4 = param_1 + 0x1ac;
  lVar5 = param_1 + 0x1bc;
  lVar6 = param_1 + 0x1b4;
  lVar7 = param_1 + 0x1b8;
  lVar8 = param_1 + 0x1b0;
  param_1 = param_1 + 0x19c;
  do {
    if (*plVar20 != 0) {
      cVar13 = *(char *)(param_1 + (longlong)piVar17);
      if ((char)piVar17[-3] != cVar13) {
        if (cVar13 == '\0') {
          (*DAT_146ab41d0)(0xbe2,uVar19);
        }
        else {
          (*DAT_146ab41d8)();
        }
        *(undefined1 *)(piVar17 + -3) = *(undefined1 *)(param_1 + (longlong)piVar17);
        cVar13 = *(char *)(param_1 + (longlong)piVar17);
        bVar11 = bVar12;
      }
      if (cVar13 != '\0') {
        if (DAT_146ab3df2 == '\0') {
          if (bVar11) {
            if ((((((char)piVar17[1] != *(char *)(lVar4 + (longlong)piVar17)) ||
                  (piVar17[-2] != *(int *)(lVar3 + (longlong)piVar17))) ||
                 (piVar17[-1] != *(int *)(lVar1 + (longlong)piVar17))) ||
                (*piVar17 != *(int *)(lVar2 + (longlong)piVar17))) ||
               ((*(char *)(lVar4 + (longlong)piVar17) != '\0' &&
                ((piVar17[3] != *(int *)(lVar6 + (longlong)piVar17) ||
                 (piVar17[4] != *(int *)(lVar7 + (longlong)piVar17))))))) {
              LowLevelFatalErrorHandler
                        ("Unknown",0x61d,
                         L"OpenGL state on draw requires setting different blend operation or factors to different render targets. This is not supported on Mac OS X!"
                        );
              FDebug::AssertFailed
                        (&DAT_144eb2c8e,"Unknown",0x61d,
                         L"OpenGL state on draw requires setting different blend operation or factors to different render targets. This is not supported on Mac OS X!"
                        );
              bVar11 = bVar12;
            }
          }
          else {
            iVar9 = *(int *)(lVar1 + (longlong)piVar17);
            if (*(char *)(lVar4 + (longlong)piVar17) == '\0') {
              if (((piVar17[-1] != iVar9) || (*piVar17 != *(int *)(lVar2 + (longlong)piVar17))) ||
                 ((piVar17[3] != iVar9 || (piVar17[4] != *(int *)(lVar2 + (longlong)piVar17))))) {
                (*DAT_146ab3fa0)(iVar9,*(undefined4 *)(lVar2 + (longlong)piVar17));
              }
              if ((piVar17[-2] != *(int *)(lVar3 + (longlong)piVar17)) ||
                 (piVar17[2] != *(int *)(lVar3 + (longlong)piVar17))) {
                (*DAT_146ab4200)();
              }
            }
            else {
              if ((((piVar17[-1] != iVar9) || (*piVar17 != *(int *)(lVar2 + (longlong)piVar17))) ||
                  (piVar17[3] != *(int *)(lVar6 + (longlong)piVar17))) ||
                 (piVar17[4] != *(int *)(lVar7 + (longlong)piVar17))) {
                (*DAT_146ab4270)(iVar9,*(undefined4 *)(lVar2 + (longlong)piVar17),
                                 *(undefined4 *)(lVar6 + (longlong)piVar17),
                                 *(undefined4 *)(lVar7 + (longlong)piVar17));
              }
              if ((piVar17[-2] != *(int *)(lVar3 + (longlong)piVar17)) ||
                 (piVar17[2] != *(int *)((longlong)piVar17 + lVar8))) {
                (*DAT_146ab4348)(*(int *)(lVar3 + (longlong)piVar17),
                                 *(undefined4 *)((longlong)piVar17 + lVar8));
              }
            }
            puVar21 = (undefined4 *)(lVar2 + (longlong)piVar17);
            puVar18 = (undefined4 *)(lVar3 + (longlong)piVar17);
            *(undefined1 *)(param_2 + 0x78) = *(undefined1 *)(lVar4 + (longlong)piVar17);
            *(undefined4 *)(param_2 + 0x6c) = *puVar18;
            *(undefined4 *)(param_2 + 0x70) = *(undefined4 *)(lVar1 + (longlong)piVar17);
            *(undefined4 *)(param_2 + 0x74) = *puVar21;
            if (*(char *)(lVar4 + (longlong)piVar17) == '\0') {
              *(undefined4 *)(param_2 + 0x7c) = *puVar18;
              *(undefined4 *)(param_2 + 0x80) = *(undefined4 *)(lVar1 + (longlong)piVar17);
              uVar14 = *puVar21;
              puVar16 = puVar18;
            }
            else {
              *(undefined4 *)(param_2 + 0x7c) = *(undefined4 *)((longlong)piVar17 + lVar8);
              *(undefined4 *)(param_2 + 0x80) = *(undefined4 *)(lVar6 + (longlong)piVar17);
              uVar14 = *(undefined4 *)(lVar7 + (longlong)piVar17);
              puVar16 = (undefined4 *)((longlong)piVar17 + lVar8);
            }
            *(undefined4 *)(param_2 + 0x84) = uVar14;
            *(undefined4 *)(param_2 + 0x7c) = *puVar16;
            *(undefined1 *)(param_2 + 0x9c) = *(undefined1 *)(lVar4 + (longlong)piVar17);
            *(undefined4 *)(param_2 + 0x90) = *puVar18;
            *(undefined4 *)(param_2 + 0x94) = *(undefined4 *)(lVar1 + (longlong)piVar17);
            *(undefined4 *)(param_2 + 0x98) = *puVar21;
            if (*(char *)(lVar4 + (longlong)piVar17) == '\0') {
              *(undefined4 *)(param_2 + 0xa0) = *puVar18;
              *(undefined4 *)(param_2 + 0xa4) = *(undefined4 *)(lVar1 + (longlong)piVar17);
              uVar14 = *puVar21;
              puVar16 = puVar18;
            }
            else {
              *(undefined4 *)(param_2 + 0xa0) = *(undefined4 *)((longlong)piVar17 + lVar8);
              *(undefined4 *)(param_2 + 0xa4) = *(undefined4 *)(lVar6 + (longlong)piVar17);
              uVar14 = *(undefined4 *)(lVar7 + (longlong)piVar17);
              puVar16 = (undefined4 *)((longlong)piVar17 + lVar8);
            }
            *(undefined4 *)(param_2 + 0xa8) = uVar14;
            *(undefined4 *)(param_2 + 0xa0) = *puVar16;
            *(undefined1 *)(param_2 + 0xc0) = *(undefined1 *)(lVar4 + (longlong)piVar17);
            *(undefined4 *)(param_2 + 0xb4) = *puVar18;
            *(undefined4 *)(param_2 + 0xb8) = *(undefined4 *)(lVar1 + (longlong)piVar17);
            *(undefined4 *)(param_2 + 0xbc) = *puVar21;
            if (*(char *)(lVar4 + (longlong)piVar17) == '\0') {
              *(undefined4 *)(param_2 + 0xc4) = *puVar18;
              *(undefined4 *)(param_2 + 200) = *(undefined4 *)(lVar1 + (longlong)piVar17);
              uVar14 = *puVar21;
              puVar16 = puVar18;
            }
            else {
              *(undefined4 *)(param_2 + 0xc4) = *(undefined4 *)((longlong)piVar17 + lVar8);
              *(undefined4 *)(param_2 + 200) = *(undefined4 *)(lVar6 + (longlong)piVar17);
              uVar14 = *(undefined4 *)(lVar7 + (longlong)piVar17);
              puVar16 = (undefined4 *)((longlong)piVar17 + lVar8);
            }
            *(undefined4 *)(param_2 + 0xcc) = uVar14;
            *(undefined4 *)(param_2 + 0xc4) = *puVar16;
            *(undefined1 *)(param_2 + 0xe4) = *(undefined1 *)(lVar4 + (longlong)piVar17);
            *(undefined4 *)(param_2 + 0xd8) = *puVar18;
            *(undefined4 *)(param_2 + 0xdc) = *(undefined4 *)(lVar1 + (longlong)piVar17);
            *(undefined4 *)(param_2 + 0xe0) = *puVar21;
            if (*(char *)(lVar4 + (longlong)piVar17) == '\0') {
              *(undefined4 *)(param_2 + 0xe8) = *puVar18;
              *(undefined4 *)(param_2 + 0xec) = *(undefined4 *)(lVar1 + (longlong)piVar17);
              uVar14 = *puVar21;
              puVar16 = puVar18;
            }
            else {
              *(undefined4 *)(param_2 + 0xe8) = *(undefined4 *)((longlong)piVar17 + lVar8);
              *(undefined4 *)(param_2 + 0xec) = *(undefined4 *)(lVar6 + (longlong)piVar17);
              uVar14 = *(undefined4 *)(lVar7 + (longlong)piVar17);
              puVar16 = (undefined4 *)((longlong)piVar17 + lVar8);
            }
            *(undefined4 *)(param_2 + 0xf0) = uVar14;
            *(undefined4 *)(param_2 + 0xe8) = *puVar16;
            *(undefined1 *)(param_2 + 0x108) = *(undefined1 *)(lVar4 + (longlong)piVar17);
            *(undefined4 *)(param_2 + 0xfc) = *puVar18;
            *(undefined4 *)(param_2 + 0x100) = *(undefined4 *)(lVar1 + (longlong)piVar17);
            *(undefined4 *)(param_2 + 0x104) = *puVar21;
            if (*(char *)(lVar4 + (longlong)piVar17) == '\0') {
              *(undefined4 *)(param_2 + 0x10c) = *puVar18;
              *(undefined4 *)(param_2 + 0x110) = *(undefined4 *)(lVar1 + (longlong)piVar17);
              uVar14 = *puVar21;
              puVar16 = puVar18;
            }
            else {
              *(undefined4 *)(param_2 + 0x10c) = *(undefined4 *)((longlong)piVar17 + lVar8);
              *(undefined4 *)(param_2 + 0x110) = *(undefined4 *)(lVar6 + (longlong)piVar17);
              uVar14 = *(undefined4 *)(lVar7 + (longlong)piVar17);
              puVar16 = (undefined4 *)((longlong)piVar17 + lVar8);
            }
            *(undefined4 *)(param_2 + 0x114) = uVar14;
            *(undefined4 *)(param_2 + 0x10c) = *puVar16;
            *(undefined1 *)(param_2 + 300) = *(undefined1 *)(lVar4 + (longlong)piVar17);
            *(undefined4 *)(param_2 + 0x120) = *puVar18;
            *(undefined4 *)(param_2 + 0x124) = *(undefined4 *)(lVar1 + (longlong)piVar17);
            *(undefined4 *)(param_2 + 0x128) = *puVar21;
            if (*(char *)(lVar4 + (longlong)piVar17) == '\0') {
              *(undefined4 *)(param_2 + 0x130) = *puVar18;
              *(undefined4 *)(param_2 + 0x134) = *(undefined4 *)(lVar1 + (longlong)piVar17);
              uVar14 = *puVar21;
              puVar16 = puVar18;
            }
            else {
              *(undefined4 *)(param_2 + 0x130) = *(undefined4 *)((longlong)piVar17 + lVar8);
              *(undefined4 *)(param_2 + 0x134) = *(undefined4 *)(lVar6 + (longlong)piVar17);
              uVar14 = *(undefined4 *)(lVar7 + (longlong)piVar17);
              puVar16 = (undefined4 *)((longlong)piVar17 + lVar8);
            }
            *(undefined4 *)(param_2 + 0x138) = uVar14;
            *(undefined4 *)(param_2 + 0x130) = *puVar16;
            *(undefined1 *)(param_2 + 0x150) = *(undefined1 *)(lVar4 + (longlong)piVar17);
            *(undefined4 *)(param_2 + 0x144) = *puVar18;
            *(undefined4 *)(param_2 + 0x148) = *(undefined4 *)(lVar1 + (longlong)piVar17);
            *(undefined4 *)(param_2 + 0x14c) = *puVar21;
            if (*(char *)(lVar4 + (longlong)piVar17) == '\0') {
              *(undefined4 *)(param_2 + 0x154) = *puVar18;
              *(undefined4 *)(param_2 + 0x158) = *(undefined4 *)(lVar1 + (longlong)piVar17);
              uVar14 = *puVar21;
              puVar16 = puVar18;
            }
            else {
              *(undefined4 *)(param_2 + 0x154) = *(undefined4 *)((longlong)piVar17 + lVar8);
              *(undefined4 *)(param_2 + 0x158) = *(undefined4 *)(lVar6 + (longlong)piVar17);
              uVar14 = *(undefined4 *)(lVar7 + (longlong)piVar17);
              puVar16 = (undefined4 *)((longlong)piVar17 + lVar8);
            }
            *(undefined4 *)(param_2 + 0x15c) = uVar14;
            *(undefined4 *)(param_2 + 0x154) = *puVar16;
            *(undefined1 *)(param_2 + 0x174) = *(undefined1 *)(lVar4 + (longlong)piVar17);
            *(undefined4 *)(param_2 + 0x168) = *puVar18;
            *(undefined4 *)(param_2 + 0x16c) = *(undefined4 *)(lVar1 + (longlong)piVar17);
            *(undefined4 *)(param_2 + 0x170) = *puVar21;
            if (*(char *)(lVar4 + (longlong)piVar17) == '\0') {
              *(undefined4 *)(param_2 + 0x178) = *puVar18;
              *(undefined4 *)(param_2 + 0x17c) = *(undefined4 *)(lVar1 + (longlong)piVar17);
              uVar14 = *puVar21;
            }
            else {
              puVar18 = (undefined4 *)((longlong)piVar17 + lVar8);
              *(undefined4 *)(param_2 + 0x178) = *(undefined4 *)((longlong)piVar17 + lVar8);
              *(undefined4 *)(param_2 + 0x17c) = *(undefined4 *)(lVar6 + (longlong)piVar17);
              uVar14 = *(undefined4 *)(lVar7 + (longlong)piVar17);
            }
            *(undefined4 *)(param_2 + 0x180) = uVar14;
            *(undefined4 *)(param_2 + 0x178) = *puVar18;
            bVar11 = true;
            bVar12 = bVar11;
          }
        }
        else {
          iVar9 = *(int *)(lVar1 + (longlong)piVar17);
          if (*(char *)(lVar4 + (longlong)piVar17) == '\0') {
            if (((piVar17[-1] != iVar9) || (*piVar17 != *(int *)(lVar2 + (longlong)piVar17))) ||
               ((piVar17[3] != iVar9 || (piVar17[4] != *(int *)(lVar2 + (longlong)piVar17))))) {
              (*DAT_146ab48b8)(uVar19,iVar9,*(undefined4 *)(lVar2 + (longlong)piVar17));
            }
            if (piVar17[-2] != *(int *)(lVar3 + (longlong)piVar17)) {
              (*DAT_146ab48a8)(uVar19);
            }
          }
          else {
            if ((((piVar17[-1] != iVar9) || (*piVar17 != *(int *)(lVar2 + (longlong)piVar17))) ||
                (piVar17[3] != *(int *)(lVar6 + (longlong)piVar17))) ||
               (piVar17[4] != *(int *)(lVar7 + (longlong)piVar17))) {
              in_stack_ffffffffffffff88 = *(uint *)(lVar7 + (longlong)piVar17);
              (*DAT_146ab48c0)(uVar19,iVar9,*(undefined4 *)(lVar2 + (longlong)piVar17),
                               *(undefined4 *)(lVar6 + (longlong)piVar17),in_stack_ffffffffffffff88)
              ;
            }
            if ((piVar17[-2] != *(int *)(lVar3 + (longlong)piVar17)) ||
               (piVar17[2] != *(int *)((longlong)piVar17 + lVar8))) {
              (*DAT_146ab48b0)(uVar19,*(int *)(lVar3 + (longlong)piVar17),
                               *(undefined4 *)((longlong)piVar17 + lVar8));
            }
          }
          *(undefined1 *)(piVar17 + 1) = *(undefined1 *)(lVar4 + (longlong)piVar17);
          piVar17[-2] = *(int *)(lVar3 + (longlong)piVar17);
          piVar17[-1] = *(int *)(lVar1 + (longlong)piVar17);
          *piVar17 = *(int *)(lVar2 + (longlong)piVar17);
          if (*(char *)(lVar4 + (longlong)piVar17) == '\0') {
            piVar17[3] = *(int *)(lVar1 + (longlong)piVar17);
            piVar17[4] = *(int *)(lVar2 + (longlong)piVar17);
            bVar11 = bVar12;
          }
          else {
            piVar17[3] = *(int *)(lVar6 + (longlong)piVar17);
            piVar17[4] = *(int *)(lVar7 + (longlong)piVar17);
            bVar11 = bVar12;
          }
        }
      }
      uVar15 = piVar17[5];
      *(undefined1 *)(piVar17 + 1) = *(undefined1 *)(lVar4 + (longlong)piVar17);
      uVar10 = *(uint *)(lVar5 + (longlong)piVar17);
      if (((((uVar10 ^ uVar15) & 1) != 0) || (((uVar10 ^ uVar15) & 2) != 0)) ||
         ((((uVar10 ^ uVar15) & 4) != 0 || (((uVar10 ^ uVar15) & 8) != 0)))) {
        in_stack_ffffffffffffff88 =
             CONCAT31((int3)(in_stack_ffffffffffffff88 >> 8),(char)(uVar10 >> 3)) & 0xffffff01;
        (*DAT_146ab41c8)(uVar19,uVar10 & 0xffffff01,(byte)(uVar10 >> 1) & 1,uVar10 >> 2 & 0x3fffff01
                         ,in_stack_ffffffffffffff88);
        piVar17[5] = piVar17[5] ^ (*(uint *)(lVar5 + (longlong)piVar17) ^ piVar17[5]) & 1;
        uVar15 = (*(uint *)(lVar5 + (longlong)piVar17) ^ piVar17[5]) & 2 ^ piVar17[5];
        piVar17[5] = uVar15;
        uVar15 = (uVar15 ^ *(uint *)(lVar5 + (longlong)piVar17)) & 4 ^ uVar15;
        piVar17[5] = uVar15;
        piVar17[5] = (uVar15 ^ *(uint *)(lVar5 + (longlong)piVar17)) & 8 ^ uVar15;
        bVar11 = bVar12;
      }
    }
    plVar20 = plVar20 + 1;
    uVar19 = uVar19 + 1;
    piVar17 = piVar17 + 9;
  } while (uVar19 < 8);
  return;
}



// FUNCTION 141e7b2d0 FUN_141e7b2d0 body=298 status=ok
// SIG undefined FUN_141e7b2d0(void)

void FUN_141e7b2d0(longlong param_1,longlong param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  int iVar5;
  
  if (0 < param_4) {
    iVar5 = 0;
    lVar4 = 0;
    do {
      cVar3 = FOpenGLComputeShader::NeedsUAVStage(*param_3,iVar5);
      if (cVar3 == '\0') {
        if ((*(int *)(*(longlong *)(param_2 + 0x18) + lVar4) != 0x822e) ||
           (*(int *)(*(longlong *)(param_2 + 0x18) + 4 + lVar4) != 0)) {
          (*DAT_146ab4898)(iVar5,0,0,0,0,0x88ba,0x822e);
          *(undefined4 *)(lVar4 + *(longlong *)(param_2 + 0x18)) = 0x822e;
          *(undefined4 *)(*(longlong *)(param_2 + 0x18) + 4 + lVar4) = 0;
        }
      }
      else {
        iVar1 = *(int *)(*(longlong *)(param_1 + 0x1c0) + lVar4);
        iVar2 = *(int *)(*(longlong *)(param_1 + 0x1c0) + 4 + lVar4);
        if ((*(int *)(*(longlong *)(param_2 + 0x18) + lVar4) != iVar1) ||
           (*(int *)(*(longlong *)(param_2 + 0x18) + 4 + lVar4) != iVar2)) {
          (*DAT_146ab4898)(iVar5,iVar2,0,0,0,0x88ba,iVar1);
          *(int *)(lVar4 + *(longlong *)(param_2 + 0x18)) = iVar1;
          *(int *)(*(longlong *)(param_2 + 0x18) + 4 + lVar4) = iVar2;
        }
      }
      iVar5 = iVar5 + 1;
      lVar4 = lVar4 + 8;
    } while (iVar5 < param_4);
  }
  return;
}



// FUNCTION 141e7b400 FUN_141e7b400 body=653 status=ok
// SIG undefined FUN_141e7b400(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141e7b400(longlong param_1,longlong param_2,int param_3,longlong param_4,uint param_5,
                  undefined4 param_6)

{
  byte bVar1;
  longlong lVar2;
  uint *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 auStack_c8 [32];
  uint local_a8;
  ulonglong local_a0;
  undefined4 local_98;
  uint local_88;
  int local_84;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  uint *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  local_84 = param_3;
  local_78 = param_4;
  local_70 = param_1;
  if ((DAT_1464c97cd == '\0') || (DAT_1464c97d0 == 0)) {
    lVar5 = *(longlong *)(param_1 + 0x5d0);
    uVar7 = 0;
    lVar2 = *(longlong *)(lVar5 + 0xa8);
    local_88 = 0;
    if (DAT_146ab6383 != '\0') {
      IsInRenderingThread();
      lVar5 = *(longlong *)(param_1 + 0x5d0);
    }
    puVar3 = *(uint **)(lVar5 + 0xa0);
    lVar5 = *(longlong *)(lVar2 + 0x38);
    uVar8 = 1;
    uVar11 = uVar7;
    uVar6 = 0;
    local_80 = lVar5;
    local_68 = puVar3;
    if (0 < (int)puVar3[0xe6]) {
      do {
        bVar1 = *(byte *)((longlong)puVar3 + 0x31);
        uVar6 = 1 << (bVar1 & 0x1f);
        if ((uVar6 & *(ushort *)(lVar5 + 0xb0)) != 0) {
          uVar10 = puVar3[7];
          uVar4 = (ulonglong)uVar10;
          if (uVar10 < param_5) {
            lVar5 = *(longlong *)(local_78 + uVar4 * 0x18);
            iVar9 = *(int *)(local_78 + 8 + uVar4 * 0x18);
            if ((*(uint *)(lVar5 + 0x1c) & 0x800) == 0) {
              local_98 = *(undefined4 *)(lVar5 + 0x28);
              local_a0 = (ulonglong)
                         (local_84 * iVar9 + puVar3[8] + *(int *)(local_78 + 0xc + uVar4 * 0x18));
            }
            else {
              iVar9 = *(int *)(lVar5 + 0x18);
              lVar5 = FUN_141e70d30(lVar5,iVar9,param_6,puVar3 + 6);
              local_98 = *(undefined4 *)(lVar5 + 0x28);
              local_a0 = uVar7;
            }
            local_a8 = iVar9;
            FOpenGLDynamicRHI::EnableVertexElementCached(local_70,param_2,bVar1,puVar3 + 6);
            local_88 = local_88 | uVar6;
            lVar5 = local_80;
          }
          else {
            if ((uVar6 & *(uint *)(param_2 + 0x878)) != 0) {
              *(uint *)(param_2 + 0x878) = ~uVar6 & *(uint *)(param_2 + 0x878);
              (*DAT_146ab43b8)();
            }
            local_60 = 0;
            uStack_58 = 0;
            (*DAT_146ab4628)(bVar1,&local_60);
            lVar5 = local_80;
          }
        }
        uVar10 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar10;
        uVar6 = local_88;
        puVar3 = puVar3 + 7;
      } while ((int)uVar10 < (int)local_68[0xe6]);
    }
    uVar6 = *(uint *)(param_2 + 0x878) & ~uVar6;
    do {
      if (uVar6 == 0) {
        return;
      }
      if ((uVar6 & 1) != 0) {
        (*DAT_146ab43b8)(uVar7);
        *(uint *)(param_2 + 0x878) = *(uint *)(param_2 + 0x878) & ~uVar8;
      }
      uVar6 = uVar6 >> 1;
      uVar10 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar10;
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
    } while (uVar10 < 0x10);
  }
  else {
    local_a0 = CONCAT44(local_a0._4_4_,param_6);
    local_a8 = param_5;
    FUN_141e7b690();
  }
  return;
}



// FUNCTION 141e7b690 FUN_141e7b690 body=1121 status=ok
// SIG undefined FUN_141e7b690(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141e7b690(longlong param_1,longlong param_2,int param_3,longlong param_4,uint param_5)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auStack_118 [32];
  int local_f8;
  char local_e8;
  uint local_e4;
  int local_e0;
  uint local_dc;
  int local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  int local_a8 [16];
  undefined1 auStack_68 [16];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_a8[2] = 0;
  local_a8[3] = 0;
  local_a8[4] = 0;
  local_a8[5] = 0;
  local_a8[6] = 0;
  local_a8[7] = 0;
  local_a8[8] = 0;
  local_a8[9] = 0;
  local_a8[10] = 0;
  local_a8[0xb] = 0;
  local_a8[0xc] = 0;
  local_a8[0xd] = 0;
  local_a8[0xe] = 0;
  local_a8[0xf] = 0;
  local_e4 = *(uint *)(param_2 + 0x890);
  uVar13 = *(uint *)(param_2 + 0x88c);
  lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x5d0) + 0xa0);
  lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x5d0) + 0xa8);
  local_e8 = '\0';
  local_d8 = param_3;
  local_d0 = param_4;
  local_c8 = param_2;
  local_c0 = param_1;
  local_b8 = lVar10;
  if (DAT_146ab6383 != '\0') {
    IsInRenderingThread();
  }
  uVar2 = *(ushort *)(*(longlong *)(lVar12 + 0x38) + 0xb0);
  uVar11 = (uint)uVar2;
  local_dc = (uint)uVar2;
  lVar12 = param_2;
  if ((*(longlong *)(param_2 + 0x880) != lVar10) || (local_dc != *(uint *)(param_2 + 0x888))) {
    uVar13 = 0;
    *(undefined4 *)(param_2 + 0x890) = 0;
    local_e8 = '\x01';
    local_e0 = 0;
    uVar8 = local_dc;
    if (0 < *(int *)(lVar10 + 0x398)) {
      piVar6 = (int *)(lVar10 + 0x28);
      do {
        bVar1 = *(byte *)((longlong)piVar6 + 9);
        lVar10 = *(longlong *)(*(longlong *)(local_c0 + 0x5d0) + 0xa8);
        if (DAT_146ab6383 != '\0') {
          IsInRenderingThread();
        }
        uVar8 = piVar6[-3];
        uVar14 = 1 << (bVar1 & 0x1f);
        uVar2 = *(ushort *)(*(longlong *)(lVar10 + 0x38) + 0xb0);
        uVar5 = (uint)bVar1;
        if ((uint)bVar1 <= *(uint *)(param_2 + 0x890)) {
          uVar5 = *(uint *)(param_2 + 0x890);
        }
        *(uint *)(param_2 + 0x890) = uVar5;
        lVar10 = param_2 + (ulonglong)bVar1 * 0x28;
        if ((uVar14 & uVar2) == 0) {
LAB_141e7b8be:
          if (*(uint *)(lVar10 + 0x498) != uVar8) {
            (*DAT_146ab4938)(bVar1,piVar6[-3]);
            *(uint *)(lVar10 + 0x498) = uVar8;
          }
        }
        else {
          uVar5 = piVar6[-3];
          if (uVar5 < param_5) {
            auStack_68[uVar8] = 1;
            iVar3 = piVar6[-2];
            uVar13 = uVar13 | 1 << ((byte)uVar5 & 0x1f);
            local_a8[uVar8] = *piVar6;
            if ((((*(int *)(lVar10 + 0x494) != iVar3) || (*(int *)(lVar10 + 0x488) != piVar6[-1]))
                || (*(int *)(lVar10 + 0x490) != piVar6[-4])) ||
               (*(char *)(lVar10 + 0x49c) != (char)piVar6[2])) {
              if (*(char *)((longlong)piVar6 + 10) == '\0') {
                (*DAT_146ab4930)(bVar1,piVar6[-1],piVar6[-4],iVar3);
              }
              else {
                local_f8 = iVar3;
                (*DAT_146ab4928)(bVar1,piVar6[-1],piVar6[-4],(char)piVar6[2]);
              }
              *(int *)(lVar10 + 0x494) = piVar6[-2];
              *(int *)(lVar10 + 0x488) = piVar6[-1];
              *(int *)(lVar10 + 0x490) = piVar6[-4];
              *(char *)(lVar10 + 0x49c) = (char)piVar6[2];
            }
            goto LAB_141e7b8be;
          }
          (*DAT_146ab4628)(bVar1,&DAT_146ab3d98);
          uVar11 = uVar11 & ~uVar14;
        }
        piVar6 = piVar6 + 7;
        local_e0 = local_e0 + 1;
        lVar10 = local_b8;
        lVar12 = local_c8;
        uVar8 = uVar11;
      } while (local_e0 < *(int *)(local_b8 + 0x398));
    }
    local_dc = uVar8;
    *(longlong *)(lVar12 + 0x880) = lVar10;
    *(uint *)(lVar12 + 0x88c) = uVar13;
  }
  cVar4 = local_e8;
  uVar11 = 0;
  if (param_5 != 0) {
    lVar10 = local_d0 - lVar12;
    piVar7 = (int *)(lVar12 + 0x704);
    piVar6 = local_a8;
    local_d0 = lVar10;
    uVar8 = uVar11;
    do {
      iVar3 = *(int *)(lVar10 + -0x6fc + (longlong)piVar7);
      iVar9 = iVar3 * local_d8 + *(int *)(lVar10 + -0x6f8 + (longlong)piVar7);
      if (((uVar13 & 1) == 0) ||
         (lVar12 = *(longlong *)(lVar10 + -0x704 + (longlong)piVar7), lVar12 == 0)) {
        if ((*(longlong *)(piVar7 + -3) != *(longlong *)(lVar10 + -0x704 + (longlong)piVar7)) ||
           ((*piVar7 != iVar9 || (piVar7[-1] != iVar3)))) {
          (*DAT_146ab4920)(uVar8,0,0,0);
          piVar7[-3] = 0;
          piVar7[-2] = 0;
          piVar7[-1] = 0;
          piVar7[0] = 0;
        }
      }
      else {
        if (((*(longlong *)(piVar7 + -3) != lVar12) || (*piVar7 != iVar9)) || (piVar7[-1] != iVar3))
        {
          (*DAT_146ab4920)(uVar8,*(undefined4 *)(lVar12 + 0x28),iVar9);
          *(undefined8 *)(piVar7 + -3) = *(undefined8 *)(lVar10 + -0x704 + (longlong)piVar7);
          *piVar7 = iVar9;
          piVar7[-1] = *(int *)(lVar10 + -0x6fc + (longlong)piVar7);
        }
        if ((cVar4 != '\0') && (iVar3 = *piVar6, piVar7[1] != iVar3)) {
          (*DAT_146ab4940)(uVar8);
          piVar7[1] = iVar3;
        }
      }
      uVar8 = uVar8 + 1;
      uVar13 = uVar13 >> 1;
      piVar7 = piVar7 + 6;
      piVar6 = piVar6 + 1;
      lVar12 = local_c8;
    } while (uVar8 < param_5);
  }
  uVar13 = local_dc ^ *(uint *)(lVar12 + 0x888);
  if (uVar13 != 0) {
    uVar8 = *(uint *)(lVar12 + 0x890);
    *(uint *)(lVar12 + 0x888) = local_dc;
    uVar5 = local_dc;
    uVar14 = local_e4;
    if (local_e4 <= uVar8) {
      local_e4 = uVar8;
      uVar14 = uVar8;
    }
    do {
      if (uVar14 < uVar11) {
        return;
      }
      if (uVar13 == 0) {
        return;
      }
      if ((uVar13 & 1) != 0) {
        if ((uVar5 & 1) == 0) {
          (*DAT_146ab43b8)(uVar11);
          uVar14 = local_e4;
        }
        else {
          (*DAT_146ab43c0)();
          uVar14 = local_e4;
        }
      }
      uVar11 = uVar11 + 1;
      uVar13 = uVar13 >> 1;
      uVar5 = uVar5 >> 1;
    } while (uVar11 < 0x10);
  }
  return;
}



// FUNCTION 141e7bb00 FUN_141e7bb00 body=48 status=ok
// SIG undefined FUN_141e7bb00(void)

void FUN_141e7bb00(longlong param_1)

{
  FUN_141e6e020();
  FUN_141e96e70();
  PlatformDestroyOpenGLDevice(*(undefined8 *)(param_1 + 0x15c28));
  DAT_146ab3d80 = 0;
  return;
}



// FUNCTION 141e7bb30 Unlock body=116 status=ok
// SIG undefined Unlock(void)

void TOpenGLBuffer<FOpenGLBaseVertexBuffer,34962,&CachedBindArrayBuffer>::Unlock(longlong param_1)

{
  if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
    FUN_141e6d990();
    if ((DAT_146ab053c == 0) && ((*(byte *)(param_1 + 0x38) & 2) == 0)) {
      LoadData(param_1,*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x3c),
               *(undefined8 *)(param_1 + 0x48));
      FMemory::Free(*(undefined8 *)(param_1 + 0x48));
      *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xfffffff7;
    }
    else {
      (*DAT_146ab4330)(0x8892);
    }
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(longlong *)(param_1 + 0x30) =
         *(longlong *)(param_1 + 0x30) + (ulonglong)(~(*(uint *)(param_1 + 0x38) >> 1) & 1);
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xfffffffe;
  }
  return;
}



// FUNCTION 141e7bbb0 FUN_141e7bbb0 body=799 status=ok
// SIG undefined FUN_141e7bbb0(void)

void FUN_141e7bbb0(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if (*(char *)(param_2 + 0x30) != *(char *)(param_1 + 0x1d8)) {
    if (*(char *)(param_1 + 0x1d8) == '\0') {
      (*DAT_146ab3ff8)(0xb71);
    }
    else {
      (*DAT_146ab4018)();
    }
    *(undefined1 *)(param_2 + 0x30) = *(undefined1 *)(param_1 + 0x1d8);
  }
  if (*(char *)(param_2 + 0x31) != *(char *)(param_1 + 0x1d9)) {
    (*DAT_146ab3fe8)();
    *(undefined1 *)(param_2 + 0x31) = *(undefined1 *)(param_1 + 0x1d9);
  }
  if ((*(char *)(param_1 + 0x1d8) != '\0') &&
     (*(int *)(param_2 + 0x34) != *(int *)(param_1 + 0x1dc))) {
    (*DAT_146ab3fe0)();
    *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)(param_1 + 0x1dc);
  }
  if (*(char *)(param_2 + 0x38) != *(char *)(param_1 + 0x1e0)) {
    if (*(char *)(param_1 + 0x1e0) == '\0') {
      (*DAT_146ab3ff8)(0xb90);
    }
    else {
      (*DAT_146ab4018)();
    }
    *(undefined1 *)(param_2 + 0x38) = *(undefined1 *)(param_1 + 0x1e0);
  }
  if (*(char *)(param_2 + 0x39) != *(char *)(param_1 + 0x1e1)) {
    *(undefined4 *)(param_2 + 0x3c) = 0xffff;
    *(undefined4 *)(param_2 + 0x40) = 0xffff;
    *(undefined4 *)(param_2 + 0x44) = 0xffff;
    *(undefined4 *)(param_2 + 0x48) = 0xffff;
    *(undefined4 *)(param_2 + 0x4c) = 0xffff;
    *(undefined4 *)(param_2 + 0x50) = 0xffff;
    *(undefined4 *)(param_2 + 0x54) = 0xffff;
    *(undefined4 *)(param_2 + 0x58) = 0xffff;
    *(undefined4 *)(param_2 + 0x5c) = 0xffff;
    *(undefined1 *)(param_2 + 0x39) = *(undefined1 *)(param_1 + 0x1e1);
  }
  if (*(char *)(param_1 + 0x1e0) != '\0') {
    iVar1 = *(int *)(param_1 + 0x1e4);
    if (*(char *)(param_1 + 0x1e1) == '\0') {
      if (((*(int *)(param_2 + 0x3c) != iVar1) ||
          (*(int *)(param_2 + 100) != *(int *)(param_1 + 0x20c))) ||
         (*(int *)(param_2 + 0x5c) != *(int *)(param_1 + 0x204))) {
        (*DAT_146ab4128)(iVar1,*(undefined4 *)(param_1 + 0x20c),*(undefined4 *)(param_1 + 0x204));
        *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)(param_1 + 0x1e4);
        *(undefined4 *)(param_2 + 0x5c) = *(undefined4 *)(param_1 + 0x204);
        *(undefined4 *)(param_2 + 100) = *(undefined4 *)(param_1 + 0x20c);
      }
      if (((*(int *)(param_2 + 0x40) != *(int *)(param_1 + 0x1e8)) ||
          (*(int *)(param_2 + 0x44) != *(int *)(param_1 + 0x1ec))) ||
         (*(int *)(param_2 + 0x48) != *(int *)(param_1 + 0x1f0))) {
        (*DAT_146ab4138)(*(int *)(param_1 + 0x1e8),*(undefined4 *)(param_1 + 0x1ec),
                         *(undefined4 *)(param_1 + 0x1f0));
        *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_1 + 0x1e8);
        *(undefined4 *)(param_2 + 0x44) = *(undefined4 *)(param_1 + 0x1ec);
        *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(param_1 + 0x1f0);
      }
    }
    else {
      if (((*(int *)(param_2 + 0x3c) != iVar1) ||
          (*(int *)(param_2 + 100) != *(int *)(param_1 + 0x20c))) ||
         (*(int *)(param_2 + 0x5c) != *(int *)(param_1 + 0x204))) {
        (*DAT_146ab4360)(0x405,iVar1,*(undefined4 *)(param_1 + 0x20c),
                         *(undefined4 *)(param_1 + 0x204));
        *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)(param_1 + 0x1e4);
      }
      if (((*(int *)(param_2 + 0x40) != *(int *)(param_1 + 0x1e8)) ||
          (*(int *)(param_2 + 0x44) != *(int *)(param_1 + 0x1ec))) ||
         (*(int *)(param_2 + 0x48) != *(int *)(param_1 + 0x1f0))) {
        (*DAT_146ab4358)(0x405,*(int *)(param_1 + 0x1e8),*(undefined4 *)(param_1 + 0x1ec),
                         *(undefined4 *)(param_1 + 0x1f0));
        *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_1 + 0x1e8);
        *(undefined4 *)(param_2 + 0x44) = *(undefined4 *)(param_1 + 0x1ec);
        *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(param_1 + 0x1f0);
      }
      if (((*(int *)(param_2 + 0x4c) != *(int *)(param_1 + 500)) ||
          (*(int *)(param_2 + 100) != *(int *)(param_1 + 0x20c))) ||
         (*(int *)(param_2 + 0x5c) != *(int *)(param_1 + 0x204))) {
        (*DAT_146ab4360)(0x404,*(int *)(param_1 + 500),*(undefined4 *)(param_1 + 0x20c),
                         *(undefined4 *)(param_1 + 0x204));
        *(undefined4 *)(param_2 + 0x4c) = *(undefined4 *)(param_1 + 500);
      }
      if (((*(int *)(param_2 + 0x50) != *(int *)(param_1 + 0x1f8)) ||
          (*(int *)(param_2 + 0x54) != *(int *)(param_1 + 0x1fc))) ||
         (*(int *)(param_2 + 0x58) != *(int *)(param_1 + 0x200))) {
        (*DAT_146ab4358)(0x404,*(int *)(param_1 + 0x1f8),*(undefined4 *)(param_1 + 0x1fc),
                         *(undefined4 *)(param_1 + 0x200));
        *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)(param_1 + 0x1f8);
        *(undefined4 *)(param_2 + 0x54) = *(undefined4 *)(param_1 + 0x1fc);
        *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(param_1 + 0x200);
      }
      *(undefined4 *)(param_2 + 0x5c) = *(undefined4 *)(param_1 + 0x204);
      *(undefined4 *)(param_2 + 100) = *(undefined4 *)(param_1 + 0x20c);
    }
    if (*(int *)(param_2 + 0x60) != *(int *)(param_1 + 0x208)) {
      (*DAT_146ab4130)();
      *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(param_1 + 0x208);
    }
  }
  return;
}



// FUNCTION 141e7bed0 FUN_141e7bed0 body=322 status=ok
// SIG undefined FUN_141e7bed0(void)

void FUN_141e7bed0(longlong param_1,longlong param_2)

{
  int iVar1;
  float fVar2;
  
  if (*(int *)(param_2 + 0x20) != *(int *)(param_1 + 0x1c8)) {
    (*DAT_146ab40e0)(0x408);
    *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_1 + 0x1c8);
  }
  iVar1 = *(int *)(param_1 + 0x1cc);
  if (*(int *)(param_2 + 0x24) != iVar1) {
    if (iVar1 == 0) {
      (*DAT_146ab3ff8)(0xb44);
    }
    else {
      if (*(int *)(param_2 + 0x24) == 0) {
        (*DAT_146ab4018)(0xb44);
        iVar1 = *(int *)(param_1 + 0x1cc);
      }
      (*DAT_146ab3fd0)(iVar1);
    }
    *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(param_1 + 0x1cc);
  }
  fVar2 = *(float *)(param_1 + 0x1d0) * 16777215.0;
  if ((*(float *)(param_2 + 0x28) != *(float *)(param_1 + 0x1d0)) ||
     (*(float *)(param_1 + 0x1d4) != *(float *)(param_2 + 0x2c))) {
    if ((fVar2 == 0.0) && (*(float *)(param_1 + 0x1d4) == 0.0)) {
      (*DAT_146ab3ff8)(0x8037);
      (*DAT_146ab3ff8)(0x2a02);
      (*DAT_146ab3ff8)(0x2a01);
    }
    else {
      if ((*(float *)(param_2 + 0x28) == 0.0) && (*(float *)(param_2 + 0x2c) == 0.0)) {
        (*DAT_146ab4018)(0x8037);
        (*DAT_146ab4018)(0x2a02);
        (*DAT_146ab4018)(0x2a01);
      }
      (*DAT_146ab40e8)(*(undefined4 *)(param_1 + 0x1d4),fVar2);
    }
    *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_1 + 0x1d0);
    *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(param_1 + 0x1d4);
  }
  return;
}



// FUNCTION 141e7c020 FUN_141e7c020 body=847 status=ok
// SIG undefined FUN_141e7c020(void)

void FUN_141e7c020(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  int local_res18 [2];
  uint local_res20 [2];
  int *piVar11;
  undefined4 uVar13;
  undefined8 uVar12;
  undefined8 uVar14;
  ulonglong in_stack_ffffffffffffff98;
  undefined8 uVar15;
  undefined4 uVar16;
  int local_48 [4];
  
  cVar3 = FUN_141ed07f0(local_48);
  if (cVar3 == '\0') {
    local_res18[0] = 0;
    (*DAT_146ab4060)(0x821b,local_res18);
    if (local_res18[0] == 2) {
      return;
    }
    if ((local_res18[0] == 3) || (local_res18[0] != 4)) goto LAB_141e7c0b3;
    local_res20[0] = 0;
    (*DAT_146ab4060)(0x821c,local_res20);
    local_48[0] = (2 < local_res20[0]) + 2;
  }
  if (local_48[0] < 2) {
    return;
  }
LAB_141e7c0b3:
  lVar6 = *(longlong *)(param_2 + 0x18);
  if (lVar6 != 0) {
    if (DAT_146ab6383 != '\0') {
      IsInRenderingThread();
    }
    local_res20[0] = 0;
    local_res18[0] = 0;
    uVar9 = lVar6 + 0x70;
    if (lVar6 == 0) {
      uVar9 = 0;
    }
    piVar11 = local_res18;
    uVar4 = FUN_141e9b3b0(param_1,0,0,local_res20,piVar11,uVar9);
    uVar13 = (undefined4)((ulonglong)piVar11 >> 0x20);
    (*DAT_146ab4708)(0x8d40,uVar4);
    iVar1 = *(int *)(lVar6 + 0x60);
    iVar2 = *(int *)(lVar6 + 100);
    lVar6 = operator_new(0x48);
    if (lVar6 == 0) {
      puVar7 = (undefined8 *)0x0;
    }
    else {
      uVar9 = uVar9 & 0xffffffffffffff00;
      uVar13 = 0;
      puVar7 = (undefined8 *)
               FUN_141e69270(lVar6,0,iVar2 * iVar1,2,0,uVar9,
                             in_stack_ffffffffffffff98 & 0xffffffff00000000,0);
      if (puVar7 != (undefined8 *)0x0) {
        *(int *)(puVar7 + 1) = *(int *)(puVar7 + 1) + 1;
      }
    }
    uVar4 = (undefined4)(uVar9 >> 0x20);
    (*DAT_146ab42e8)(0x88eb,0);
    (*DAT_146ab42e8)(0x88eb,*(undefined4 *)(puVar7 + 3));
    (*DAT_146ab40d0)(0xd05,1);
    uVar16 = 0;
    uVar14 = CONCAT44(uVar4,0x1401);
    uVar12 = CONCAT44(uVar13,0x1901);
    (*DAT_146ab40f8)(0,0,iVar1,iVar2,uVar12,uVar14,0);
    uVar4 = (undefined4)((ulonglong)uVar12 >> 0x20);
    uVar13 = (undefined4)((ulonglong)uVar14 >> 0x20);
    (*DAT_146ab40d0)(0xd05,4);
    (*DAT_146ab42e8)(0x88eb,0);
    if (*(int *)(param_1 + 0x15bd0) == 1) {
      uVar9 = 0x15338;
    }
    else {
      iVar5 = PlatformOpenGLCurrentContext(*(undefined8 *)(param_1 + 0x15c28));
      uVar8 = 0x14aa0;
      if (iVar5 == 1) {
        uVar8 = 0x15338;
      }
      uVar9 = (ulonglong)uVar8;
    }
    lVar6 = uVar9 + param_1;
    iVar5 = *(int *)(param_2 + 0x14);
    iVar10 = DAT_1464c97fc + -1;
    if ((*(int *)(*(longlong *)(lVar6 + 8) + 0x10 + (longlong)iVar10 * 0x28) != iVar5) ||
       (*(int *)(*(longlong *)(lVar6 + 8) + 0x14 + (longlong)iVar10 * 0x28) !=
        *(int *)(param_2 + 0x10))) {
      uVar15 = CONCAT44(uVar16,1);
      uVar14 = CONCAT44(uVar13,0xffffffff);
      uVar12 = CONCAT44(uVar4,*(int *)(param_2 + 0x10));
      FUN_141e6dbc0(param_1,lVar6,iVar10,iVar5,uVar12,uVar14,uVar15);
      uVar4 = (undefined4)((ulonglong)uVar12 >> 0x20);
      uVar13 = (undefined4)((ulonglong)uVar14 >> 0x20);
      uVar16 = (undefined4)((ulonglong)uVar15 >> 0x20);
    }
    iVar10 = *(int *)(puVar7 + 3);
    if (*(int *)(lVar6 + 0x428) != iVar10) {
      (*DAT_146ab42e8)(0x88ec,iVar10);
      *(int *)(lVar6 + 0x428) = iVar10;
    }
    (*DAT_146ab40d0)(0xcf2,iVar1);
    (*DAT_146ab40d0)(0xcf5,1);
    (*DAT_146ab4178)(iVar5,0,0,0,CONCAT44(uVar4,iVar1),CONCAT44(uVar13,iVar2),
                     CONCAT44(uVar16,0x8d94),0x1401,0);
    (*DAT_146ab40d0)(0xcf5,4);
    (*DAT_146ab40d0)(0xcf2,0);
    if (*(int *)(lVar6 + 0x428) != 0) {
      (*DAT_146ab42e8)(0x88ec,0);
      *(undefined4 *)(lVar6 + 0x428) = 0;
    }
    (*DAT_146ab4708)(0x8d40,*(undefined4 *)(lVar6 + 0x188));
    *(undefined4 *)(lVar6 + 0x188) = 0xffffffff;
    piVar11 = (int *)(puVar7 + 1);
    *piVar11 = *piVar11 + -1;
    if (*piVar11 == 0) {
      (**(code **)*puVar7)(puVar7,1);
    }
  }
  return;
}



// FUNCTION 141e7c370 FUN_141e7c370 body=229 status=ok
// SIG undefined FUN_141e7c370(void)

void FUN_141e7c370(longlong param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  
  cVar2 = *(char *)(param_1 + 0x334);
  if (*(char *)(param_2 + 0x3f4) != cVar2) {
    if (cVar2 == '\0') {
      (*DAT_146ab3ff8)(0xc11);
    }
    else {
      (*DAT_146ab4018)();
    }
    *(undefined1 *)(param_2 + 0x3f4) = *(undefined1 *)(param_1 + 0x334);
    cVar2 = *(char *)(param_1 + 0x334);
  }
  if (cVar2 != '\0') {
    iVar1 = *(int *)(param_1 + 0x338);
    if ((((*(int *)(param_2 + 0x3f8) != iVar1) ||
         (*(int *)(param_2 + 0x3fc) != *(int *)(param_1 + 0x33c))) ||
        (*(int *)(param_2 + 0x400) != *(int *)(param_1 + 0x340))) ||
       (*(int *)(param_2 + 0x404) != *(int *)(param_1 + 0x344))) {
      (*DAT_146ab4100)(iVar1,*(int *)(param_1 + 0x33c),*(int *)(param_1 + 0x340) - iVar1,
                       *(int *)(param_1 + 0x344) - *(int *)(param_1 + 0x33c));
      *(undefined4 *)(param_2 + 0x3f8) = *(undefined4 *)(param_1 + 0x338);
      *(undefined4 *)(param_2 + 0x3fc) = *(undefined4 *)(param_1 + 0x33c);
      *(undefined4 *)(param_2 + 0x400) = *(undefined4 *)(param_1 + 0x340);
      *(undefined4 *)(param_2 + 0x404) = *(undefined4 *)(param_1 + 0x344);
    }
  }
  return;
}



// FUNCTION 141e7c460 FUN_141e7c460 body=61 status=ok
// SIG undefined FUN_141e7c460(void)

void FUN_141e7c460(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  (**(code **)(*DAT_146ab6358 + 0x2c8))(DAT_146ab6358,param_3,param_4,param_5,param_6,param_7);
  return;
}



// FUNCTION 141e7c4a0 FUN_141e7c4a0 body=488 status=ok
// SIG undefined FUN_141e7c4a0(void)

void FUN_141e7c4a0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 local_res18;
  undefined4 local_res20 [2];
  code *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  
  local_res18 = param_3;
  local_res20[0] = param_4;
  if ((DAT_146ab6383 == '\0') || (cVar1 = FUN_1415e13e0(), cVar1 != '\0')) {
    (**(code **)(*DAT_146ab6358 + 0x2d0))
              (DAT_146ab6358,local_res18,local_res20[0],param_5,param_6,param_7,param_8);
  }
  else {
    puVar3 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
    puVar2 = puVar3 + 0xc;
    if (*(undefined8 **)(param_2 + 0x38) < puVar2) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x70);
      puVar3 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      puVar2 = puVar3 + 0xc;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar2;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar3;
    *(undefined8 **)(param_2 + 8) = puVar3 + 1;
    local_38 = (longlong *)0x0;
    local_28 = 0;
    puVar2 = (undefined8 *)FUN_140438ef0(0x38,local_58);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &PTR_FUN_144eb66e0;
      puVar2[1] = &local_res18;
      puVar2[2] = local_res20;
      puVar2[3] = param_5;
      puVar2[4] = &param_6;
      puVar2[5] = &param_7;
      puVar2[6] = &param_8;
    }
    local_68[0] = UE4Function_Private::
                  TFunctionRefCaller<<lambda_844f086f9532b8ee47a3a15493260669>,void___cdecl(void)>::
                  Call;
    puVar3[1] = 0;
    *puVar3 = &PTR_ExecuteAndDestruct_144eb5ab0;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar3 + 2,local_68);
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
    if (*(int *)(param_2 + 0x14) != 0) {
      FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,param_2);
    }
    FUN_141ed93a0(param_2);
    if (DAT_146ab6383 != '\0') {
      FRHICommandListBase::WaitForRHIThreadTasks(param_2);
    }
    FRHICommandListBase::WaitForTasks(param_2,1);
  }
  return;
}



// FUNCTION 141e7c690 FUN_141e7c690 body=241 status=ok
// SIG undefined FUN_141e7c690(void)

void FUN_141e7c690(longlong param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x348);
  if ((((*(int *)(param_2 + 0x408) != iVar1) ||
       (*(int *)(param_2 + 0x40c) != *(int *)(param_1 + 0x34c))) ||
      (*(int *)(param_2 + 0x410) != *(int *)(param_1 + 0x350))) ||
     (*(int *)(param_2 + 0x414) != *(int *)(param_1 + 0x354))) {
    (*DAT_146ab4180)(iVar1,*(int *)(param_1 + 0x34c),*(int *)(param_1 + 0x350) - iVar1,
                     *(int *)(param_1 + 0x354) - *(int *)(param_1 + 0x34c));
    *(undefined4 *)(param_2 + 0x408) = *(undefined4 *)(param_1 + 0x348);
    *(undefined4 *)(param_2 + 0x40c) = *(undefined4 *)(param_1 + 0x34c);
    *(undefined4 *)(param_2 + 0x410) = *(undefined4 *)(param_1 + 0x350);
    *(undefined4 *)(param_2 + 0x414) = *(undefined4 *)(param_1 + 0x354);
  }
  if ((*(float *)(param_1 + 0x358) != *(float *)(param_2 + 0x418)) ||
     (*(float *)(param_1 + 0x35c) != *(float *)(param_2 + 0x41c))) {
    (*DAT_146ab3ff0)((double)*(float *)(param_1 + 0x358),(double)*(float *)(param_1 + 0x35c));
    *(undefined4 *)(param_2 + 0x418) = *(undefined4 *)(param_1 + 0x358);
    *(undefined4 *)(param_2 + 0x41c) = *(undefined4 *)(param_1 + 0x35c);
  }
  return;
}



// FUNCTION 141e7c790 operator<unsigned_int,TMap<__int64,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,__int64,0>_>_>_TTuple<unsigned_int,TMap<__int64,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,__int64,0>_>_> body=260 status=ok
// SIG undefined operator<unsigned_int,TMap<__int64,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,__int64,0>_>_>_TTuple<unsigned_int,TMap<__int64,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,__int64,0>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 *
TKeyInitializer<unsigned_int_const_&>::
operator<unsigned_int,TMap<__int64,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,__int64,0>_>_>_TTuple<unsigned_int,TMap<__int64,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,__int64,0>_>_>
          (undefined8 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_68 = 0;
  uStack_60 = 0;
  local_40 = 0;
  *param_2 = *(undefined4 *)*param_1;
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 10) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  param_2[0xe] = 0xffffffff;
  param_2[0xf] = 0;
  *(undefined8 *)(param_2 + 0x12) = 0;
  param_2[0x14] = 0;
  local_30 = 0;
  local_78 = 0;
  local_70 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = 0;
  TSparseArray<TSetElement<FShaderPipelineKey>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::operator=(param_2 + 2,&local_78);
  lVar1 = local_38;
  if (local_38 == 0) {
    ::_guard_xfg_dispatch_icall_nop(param_2 + 0x10,&local_40,4);
  }
  if (*(longlong *)(param_2 + 0x12) != 0) {
    FMemory::Free();
  }
  *(longlong *)(param_2 + 0x12) = lVar1;
  param_2[0x14] = (undefined4)local_30;
  local_38 = 0;
  local_30 = local_30 & 0xffffffff00000000;
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_78);
  return param_2;
}



// FUNCTION 141e7c8a0 operator<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>_TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_> body=110 status=ok
// SIG undefined operator<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>_TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>(void)

undefined8 *
TPairInitializer<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_&>
::
operator<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>_TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
          (longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  void *_Src;
  
  puVar2 = (undefined8 *)*param_1;
  puVar3 = (undefined4 *)param_1[1];
  *param_2 = 0;
  iVar1 = *(int *)(puVar2 + 1);
  _Src = (void *)*puVar2;
  *(int *)(param_2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(param_2,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar1);
  }
  *(undefined4 *)(param_2 + 2) = *puVar3;
  return param_2;
}



// FUNCTION 141e7c910 operator<FOpenGLLinkedProgramConfiguration,FOpenGLLinkedProgramConfiguration::ShaderInfo>_TTuple<FOpenGLLinkedProgramConfiguration,FOpenGLLinkedProgramConfiguration::ShaderInfo> body=105 status=ok
// SIG undefined operator<FOpenGLLinkedProgramConfiguration,FOpenGLLinkedProgramConfiguration::ShaderInfo>_TTuple<FOpenGLLinkedProgramConfiguration,FOpenGLLinkedProgramConfiguration::ShaderInfo>(void)

longlong TPairInitializer<FOpenGLLinkedProgramConfiguration_const_&,FOpenGLLinkedProgramConfiguration::ShaderInfo_const_&>
         ::
         operator<FOpenGLLinkedProgramConfiguration,FOpenGLLinkedProgramConfiguration::ShaderInfo>_TTuple<FOpenGLLinkedProgramConfiguration,FOpenGLLinkedProgramConfiguration::ShaderInfo>
                   (undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1[1];
  FOpenGLLinkedProgramConfiguration::FOpenGLLinkedProgramConfiguration(param_2,*param_1);
  FOpenGLShaderBindings::FOpenGLShaderBindings(param_2 + 0x4b0,lVar1);
  uVar2 = *(undefined8 *)(lVar1 + 0xb8);
  *(undefined8 *)(param_2 + 0x560) = *(undefined8 *)(lVar1 + 0xb0);
  *(undefined8 *)(param_2 + 0x568) = uVar2;
  *(undefined4 *)(param_2 + 0x570) = *(undefined4 *)(lVar1 + 0xc0);
  *(undefined4 *)(param_2 + 0x574) = *(undefined4 *)(lVar1 + 0xc4);
  return param_2;
}



// FUNCTION 141e7c980 FUN_141e7c980 body=5171 status=ok
// SIG undefined FUN_141e7c980(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000141e7d1fa) */
/* WARNING: Removing unreachable block (ram,0x000141e7cf7f) */

void FUN_141e7c980(longlong param_1,longlong param_2,undefined4 *param_3,ulonglong param_4,
                  longlong param_5)

{
  undefined2 *puVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined1 *puVar16;
  char *pcVar17;
  int *piVar18;
  undefined2 *puVar19;
  size_t _Size;
  longlong ***ppplVar20;
  longlong *plVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong **pplVar24;
  uint uVar25;
  longlong lVar26;
  longlong **_Buf1;
  ulonglong *puVar28;
  longlong *plVar29;
  int *piVar30;
  undefined2 *puVar31;
  longlong **pplVar32;
  bool bVar33;
  undefined1 auStack_9e8 [32];
  int local_9c8;
  undefined4 local_9c0;
  char local_9b8;
  int local_9b4;
  longlong *local_9b0;
  undefined8 local_9a8;
  longlong *local_9a0;
  int local_998;
  int local_994;
  longlong *local_990;
  undefined8 local_988;
  ulonglong local_980;
  int local_978;
  int local_974;
  longlong *local_970;
  undefined8 local_968;
  undefined2 *local_960;
  undefined8 local_958;
  longlong *local_950;
  undefined8 local_948;
  longlong local_940;
  longlong **local_938;
  int *local_930;
  int *local_920;
  int local_918;
  undefined4 local_914;
  ulonglong local_910;
  undefined1 *local_908;
  ulonglong local_900;
  undefined4 local_8f0;
  longlong *local_8e8;
  int local_8e0;
  int local_8dc;
  longlong local_8d8;
  longlong local_8d0;
  undefined4 *local_8c8;
  undefined **local_8b8 [18];
  undefined8 local_828;
  longlong ***local_820;
  longlong *local_818;
  longlong local_808;
  undefined8 local_800;
  undefined8 local_7e8;
  undefined8 local_7e0;
  undefined4 local_7d8;
  int local_7d4;
  undefined1 local_7d0 [8];
  undefined1 *local_7c8;
  int local_7c0;
  longlong local_7b8;
  undefined8 local_7b0;
  undefined8 local_798;
  undefined8 local_790;
  undefined4 local_788;
  int local_784;
  undefined1 local_780 [8];
  undefined1 *local_778;
  int local_770;
  undefined4 local_768;
  undefined2 local_764;
  undefined1 local_760 [48];
  longlong ***local_730;
  int local_728;
  longlong local_6b0;
  longlong local_6a0 [7];
  longlong local_668;
  undefined1 local_648 [128];
  longlong local_5c8;
  void *local_5c0;
  undefined1 local_5a8 [32];
  longlong local_588;
  uint local_580;
  undefined1 local_4f8 [176];
  undefined4 local_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined4 local_438;
  undefined4 local_434;
  undefined1 local_430 [176];
  undefined4 local_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 local_370;
  undefined4 local_36c;
  ulonglong local_48 [2];
  ulonglong uVar27;
  
  local_48[0] = DAT_1468387a8 ^ (ulonglong)auStack_9e8;
  local_8f0 = *(undefined4 *)(param_2 + 0x10);
  local_940 = param_5;
  local_910 = param_4;
  local_8d8 = param_2;
  local_8d0 = param_1;
  local_8c8 = param_3;
  FOpenGLShaderBindings::FOpenGLShaderBindings(local_5a8,param_2 + 0x18);
  if (DAT_146ab3550 == '\0') goto LAB_141e7dd55;
  FUN_141e8d1f0(local_4f8);
  FOpenGLShaderBindings::operator=(local_4f8,param_4);
  local_438 = *(undefined4 *)(param_4 + 0xc0);
  local_448 = *(undefined4 *)(param_4 + 0xb0);
  uStack_444 = *(undefined4 *)(param_4 + 0xb4);
  uStack_440 = *(undefined4 *)(param_4 + 0xb8);
  uStack_43c = *(undefined4 *)(param_4 + 0xbc);
  local_434 = *(undefined4 *)(param_4 + 0xc4);
  FOpenGLShaderBindings::operator=(local_430,param_1);
  local_370 = *(undefined4 *)(param_1 + 0xc0);
  local_380 = *(undefined4 *)(param_1 + 0xb0);
  uStack_37c = *(undefined4 *)(param_1 + 0xb4);
  uStack_378 = *(undefined4 *)(param_1 + 0xb8);
  uStack_374 = *(undefined4 *)(param_1 + 0xbc);
  local_36c = *(undefined4 *)(param_1 + 0xc4);
  plVar12 = (longlong *)FUN_141e9bc10();
  if ((int)plVar12[1] != *(int *)((longlong)plVar12 + 0x34)) {
    iVar7 = GetTypeHash(local_4f8);
    plVar13 = (longlong *)plVar12[8];
    if ((longlong *)plVar12[8] == (longlong *)0x0) {
      plVar13 = plVar12 + 7;
    }
    iVar7 = *(int *)((longlong)plVar13 + ((longlong)(int)plVar12[9] - 1U & (longlong)iVar7) * 4);
    if (iVar7 != -1) {
      lVar22 = *plVar12;
      do {
        lVar26 = (longlong)iVar7 * 0x580 + lVar22;
        cVar6 = FUN_141e8eeb0(lVar26,local_4f8);
        if (cVar6 != '\0') {
          if (iVar7 != -1) goto LAB_141e7cb00;
          break;
        }
        iVar7 = *(int *)(lVar26 + 0x578);
      } while (iVar7 != -1);
    }
  }
  lVar26 = 0;
LAB_141e7cb00:
  lVar22 = lVar26 + 0x4b0;
  if (lVar26 == 0) {
    lVar22 = 0;
  }
  if (lVar22 == 0) {
    iVar7 = *(int *)(param_5 + 0x50);
    uVar23 = 0;
    local_808 = 0;
    local_800 = 0;
    local_7e8 = 0;
    local_7e0 = 0;
    local_7d8 = 0xffffffff;
    local_7d4 = 0;
    local_7c8 = (undefined1 *)0x0;
    local_7c0 = 0;
    if (0 < iVar7) {
      local_938 = &local_9a0;
      uVar27 = uVar23;
      do {
        local_9a0 = (longlong *)0x0;
        local_998 = *(int *)(uVar23 + 8 + *(longlong *)(param_5 + 0x48));
        _Size = (size_t)local_998;
        pvVar2 = *(void **)(uVar23 + *(longlong *)(param_5 + 0x48));
        if (local_998 == 0) {
          local_994 = 0;
        }
        else {
          TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_9a0,local_998,0);
          _guard_xfg_dispatch_icall_nop(local_9a0,pvVar2,_Size);
        }
        if ((3 < local_998) &&
           ((iVar7 = strncmp((char *)local_9a0,"out_",4), iVar7 == 0 ||
            (iVar7 = strncmp((char *)local_9a0,"var_",4), iVar7 == 0)))) {
          if (local_998 + -4 != 0) {
            _guard_xfg_dispatch_icall_nop
                      (local_9a0,(char *)((longlong)local_9a0 + 4),(longlong)(local_998 + -4));
          }
          local_998 = local_998 + -4;
          TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(&local_9a0);
        }
        local_930 = (int *)(*(longlong *)(param_5 + 0x48) + ((longlong)(int)uVar27 * 3 + 2) * 8);
        FUN_141e8a390(&local_808,&local_974,&local_938,0);
        if (local_9a0 != (longlong *)0x0) {
          FMemory::Free();
        }
        iVar7 = *(int *)(param_5 + 0x50);
        uVar25 = (int)uVar27 + 1;
        uVar27 = (ulonglong)uVar25;
        uVar23 = uVar23 + 0x18;
      } while ((int)uVar25 < iVar7);
    }
    local_9b8 = '\x01';
    local_7b8 = 0;
    local_7b0 = 0;
    local_798 = 0;
    local_790 = 0;
    local_788 = 0xffffffff;
    local_784 = 0;
    local_778 = (undefined1 *)0x0;
    local_770 = 0;
    local_9a0 = (longlong *)0x0;
    local_9b4 = 0;
    local_994 = 0;
    local_8e8 = (longlong *)0x0;
    local_978 = 0;
    local_8dc = 0;
    if (0 < (int)local_580) {
      local_938 = &local_9b0;
      piVar30 = (int *)(local_588 + 0x10);
      piVar18 = piVar30;
      local_980 = (ulonglong)local_580;
LAB_141e7cd40:
      iVar10 = local_994;
      local_9b0 = (longlong *)0x0;
      iVar7 = piVar18[-2];
      pvVar2 = *(void **)(piVar18 + -4);
      local_9a8 = CONCAT44(local_9a8._4_4_,iVar7);
      local_920 = piVar30;
      if (iVar7 == 0) {
        local_9a8 = 0;
      }
      else {
        TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_9b0,iVar7,0);
        _guard_xfg_dispatch_icall_nop(local_9b0,pvVar2,(longlong)iVar7);
      }
      if ((2 < (int)(uint)local_9a8) && (iVar7 = strncmp((char *)local_9b0,"in_",3), iVar7 == 0)) {
        if ((uint)local_9a8 + -3 != 0) {
          _guard_xfg_dispatch_icall_nop
                    (local_9b0,(void *)((longlong)local_9b0 + 3),
                     (longlong)(int)((uint)local_9a8 + -3));
        }
        local_9a8 = CONCAT44(local_9a8._4_4_,(uint)local_9a8 + -3);
        TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(&local_9b0);
      }
      if ((3 < (int)(uint)local_9a8) && (iVar7 = strncmp((char *)local_9b0,"var_",4), iVar7 == 0)) {
        if ((uint)local_9a8 + -4 != 0) {
          _guard_xfg_dispatch_icall_nop
                    (local_9b0,(void *)((longlong)local_9b0 + 4),
                     (longlong)(int)((uint)local_9a8 + -4));
        }
        local_9a8 = CONCAT44(local_9a8._4_4_,(uint)local_9a8 + -4);
        TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(&local_9b0);
      }
      local_930 = piVar30;
      FUN_141e8a390(&local_7b8,&local_974,&local_938,0);
      if ((int)local_800 != local_7d4) {
        uVar25 = FCrc::MemCrc32(local_9b0,local_9a8 & 0xffffffff,0);
        lVar22 = local_808;
        uVar23 = local_9a8;
        plVar12 = local_9b0;
        puVar16 = local_7d0;
        if (local_7c8 != (undefined1 *)0x0) {
          puVar16 = local_7c8;
        }
        iVar7 = *(int *)(puVar16 + (longlong)(int)(local_7c0 - 1U & uVar25) * 4);
        if (iVar7 != -1) {
          uVar25 = (uint)local_9a8;
          do {
            lVar26 = (longlong)iVar7 * 0x20;
            uVar9 = *(uint *)(lVar26 + 8 + lVar22);
            if ((uVar9 == uVar25) &&
               (iVar8 = _guard_xfg_dispatch_icall_nop
                                  (*(void **)(lVar26 + lVar22),plVar12,(longlong)(int)uVar9),
               iVar8 == 0)) {
              if (iVar7 != -1) {
                if ((int)local_800 == local_7d4) goto LAB_141e7d051;
                uVar9 = FCrc::MemCrc32(plVar12,uVar23 & 0xffffffff,0);
                lVar22 = local_808;
                plVar12 = local_9b0;
                uVar25 = (uint)local_9a8;
                puVar16 = local_7d0;
                if (local_7c8 != (undefined1 *)0x0) {
                  puVar16 = local_7c8;
                }
                iVar7 = *(int *)(puVar16 + (longlong)(int)(local_7c0 - 1U & uVar9) * 4);
                goto joined_r0x000141e7d00f;
              }
              break;
            }
            iVar7 = *(int *)(lVar26 + 0x18 + lVar22);
          } while (iVar7 != -1);
        }
      }
      TStringConversion<TStringConvert<char,wchar_t>,128>::
      TStringConversion<TStringConvert<char,wchar_t>,128>(&local_768,*(undefined8 *)(piVar18 + -4));
      local_9c0 = 0x8b31;
      local_9c8 = 0x8b30;
      FString::PrintfImpl(&local_950,
                          L"Separate Shader Object Binding Error: Input %s @ %d of stage 0x%x not written by stage 0x%x"
                         );
      iVar7 = local_9b4;
      lVar22 = (longlong)local_9b4;
      local_9b4 = local_9b4 + 1;
      local_998 = local_9b4;
      if (iVar10 < local_9b4) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_9a0,iVar7);
      }
      plVar12 = local_9a0 + lVar22 * 2;
      *plVar12 = 0;
      *plVar12 = (longlong)local_950;
      *(undefined4 *)(plVar12 + 1) = (undefined4)local_948;
      *(undefined4 *)((longlong)plVar12 + 0xc) = local_948._4_4_;
      local_948 = 0;
      local_950 = (longlong *)0x0;
      local_9b4 = local_998;
      if (local_668 == 0) goto LAB_141e7d13f;
      FMemory::Free();
      local_9b8 = '\0';
      plVar12 = local_9b0;
      goto LAB_141e7d2ba;
    }
    goto LAB_141e7d2fa;
  }
  FOpenGLShaderBindings::operator=(param_4,lVar22);
  *(undefined4 *)(param_4 + 0xc4) = *(undefined4 *)(lVar22 + 0xc4);
  goto LAB_141e7dd13;
joined_r0x000141e7d00f:
  if (iVar7 == -1) goto LAB_141e7d051;
  puVar14 = (undefined8 *)((longlong)iVar7 * 0x20 + lVar22);
  if ((*(uint *)(puVar14 + 1) == uVar25) &&
     (iVar10 = _guard_xfg_dispatch_icall_nop
                         ((void *)*puVar14,plVar12,(longlong)(int)*(uint *)(puVar14 + 1)),
     iVar10 == 0)) {
    if (iVar7 != -1) goto LAB_141e7d055;
    goto LAB_141e7d051;
  }
  iVar7 = *(int *)(puVar14 + 3);
  goto joined_r0x000141e7d00f;
LAB_141e7d051:
  puVar14 = (undefined8 *)0x0;
LAB_141e7d055:
  puVar16 = (undefined1 *)0x0;
  iVar7 = *piVar18;
  iVar10 = *(int *)(puVar14 + 2);
  if (iVar10 != iVar7) {
    if ((iVar10 < 0) || (iVar7 < 0)) {
      if (iVar7 == -1) {
        TStringConversion<TStringConvert<char,wchar_t>,128>::
        TStringConversion<TStringConvert<char,wchar_t>,128>
                  (&local_768,*(undefined8 *)(piVar18 + -4));
        local_9c0 = *(undefined4 *)(puVar14 + 2);
        local_9c8 = 0x8b31;
        FString::PrintfImpl(&local_990,
                            L"Separate Shader Object Binding Error: Input %s of stage 0x%x written by stage 0x%x at location %d, can\'t be rewritten."
                           );
        iVar7 = local_9b4;
        lVar22 = (longlong)local_9b4;
        local_9b4 = local_9b4 + 1;
        local_998 = local_9b4;
        if (local_994 < local_9b4) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_9a0,iVar7);
        }
        plVar12 = local_9a0 + lVar22 * 2;
        *plVar12 = 0;
        *plVar12 = (longlong)local_990;
        local_990 = (longlong *)0x0;
        *(int *)(plVar12 + 1) = (int)local_988;
        *(undefined4 *)((longlong)plVar12 + 0xc) = local_988._4_4_;
        local_988 = 0;
      }
      else {
        TStringConversion<TStringConvert<char,wchar_t>,128>::
        TStringConversion<TStringConvert<char,wchar_t>,128>
                  (&local_768,*(undefined8 *)(piVar18 + -4));
        local_9c0 = 0x8b31;
        local_9c8 = 0x8b30;
        FString::PrintfImpl(&local_970,
                            L"Separate Shader Object Binding Error: Input %s @ %d of stage 0x%x written by stage 0x%x without location, can\'t be rewritten."
                           );
        iVar7 = local_9b4;
        lVar22 = (longlong)local_9b4;
        local_9b4 = local_9b4 + 1;
        local_998 = local_9b4;
        if (local_994 < local_9b4) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_9a0,iVar7);
        }
        plVar12 = local_9a0 + lVar22 * 2;
        *plVar12 = 0;
        *plVar12 = (longlong)local_970;
        local_970 = (longlong *)0x0;
        *(int *)(plVar12 + 1) = (int)local_968;
        *(int *)((longlong)plVar12 + 0xc) = local_968._4_4_;
        local_968 = 0;
      }
      local_9b4 = local_998;
      if (local_668 != 0) {
        FMemory::Free();
        local_9b8 = '\0';
        plVar12 = local_9b0;
        goto LAB_141e7d2ba;
      }
    }
    else {
      local_908 = (undefined1 *)0x0;
      local_900 = (ulonglong)uVar25;
      iVar7 = 0;
      if (uVar25 != 0) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_908,uVar25,0);
        puVar16 = local_908;
        _guard_xfg_dispatch_icall_nop(local_908,plVar12,(longlong)(int)uVar25);
        iVar10 = *(int *)(puVar14 + 2);
        iVar7 = (int)local_900;
      }
      iVar11 = local_978;
      lVar22 = (longlong)local_978;
      iVar8 = *piVar18;
      local_978 = local_978 + 1;
      local_8e0 = local_978;
      if (local_8dc < local_978) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(&local_8e8,iVar11);
      }
      plVar12 = local_8e8 + lVar22 * 3;
      *plVar12 = 0;
      *(int *)(plVar12 + 1) = iVar7;
      local_978 = local_8e0;
      if (iVar7 == 0) {
        *(undefined4 *)((longlong)plVar12 + 0xc) = 0;
      }
      else {
        TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(plVar12,iVar7,0);
        _guard_xfg_dispatch_icall_nop((void *)*plVar12,puVar16,(longlong)iVar7);
      }
      *(int *)(plVar12 + 2) = iVar10;
      *(int *)((longlong)plVar12 + 0x14) = iVar8;
      if (puVar16 != (undefined1 *)0x0) {
        FMemory::Free(puVar16);
      }
    }
LAB_141e7d13f:
    local_9b8 = '\0';
    plVar12 = local_9b0;
  }
LAB_141e7d2ba:
  if (plVar12 != (longlong *)0x0) {
    FMemory::Free(plVar12);
  }
  piVar18 = piVar18 + 6;
  piVar30 = local_920 + 6;
  local_980 = local_980 - 1;
  if (local_980 == 0) goto code_r0x000141e7d2e8;
  goto LAB_141e7cd40;
code_r0x000141e7d2e8:
  iVar7 = *(int *)(local_940 + 0x50);
  local_980 = 0;
  param_5 = local_940;
  local_920 = piVar30;
LAB_141e7d2fa:
  plVar13 = (longlong *)0x0;
  local_980 = local_980 & 0xffffffff00000000;
  local_970 = (longlong *)0x0;
  local_968 = local_968 & 0xffffffff;
  plVar12 = plVar13;
  plVar29 = plVar13;
  if (0 < iVar7) {
    do {
      plVar21 = (longlong *)0x0;
      lVar22 = *(longlong *)(param_5 + 0x48);
      if (*(int *)(lVar22 + 0x10 + (longlong)plVar29) == -1) {
        pvVar2 = *(void **)(lVar22 + (longlong)plVar29);
        local_990 = (longlong *)0x0;
        iVar7 = *(int *)(lVar22 + 8 + (longlong)plVar29);
        local_988 = CONCAT44(local_988._4_4_,iVar7);
        if (iVar7 == 0) {
          local_988 = 0;
          uVar23 = 0;
        }
        else {
          TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_990,iVar7,0);
          plVar21 = local_990;
          _guard_xfg_dispatch_icall_nop(local_990,pvVar2,(longlong)iVar7);
          uVar23 = local_988 & 0xffffffff;
        }
        if ((3 < (int)uVar23) &&
           ((iVar7 = strncmp((char *)plVar21,"out_",4), iVar7 == 0 ||
            (iVar7 = strncmp((char *)plVar21,"var_",4), iVar7 == 0)))) {
          iVar7 = (int)uVar23 + -4;
          if (iVar7 != 0) {
            _guard_xfg_dispatch_icall_nop(plVar21,(void *)((longlong)plVar21 + 4),(longlong)iVar7);
          }
          local_988 = CONCAT44(local_988._4_4_,iVar7);
          TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(&local_990);
          uVar23 = local_988 & 0xffffffff;
          plVar21 = local_990;
        }
        if ((int)local_7b0 != local_784) {
          uVar25 = FCrc::MemCrc32(plVar21,uVar23);
          lVar22 = local_7b8;
          puVar16 = local_780;
          if (local_778 != (undefined1 *)0x0) {
            puVar16 = local_778;
          }
          iVar7 = *(int *)(puVar16 + (longlong)(int)(local_770 - 1U & uVar25) * 4);
          while (iVar7 != -1) {
            lVar26 = (longlong)iVar7 * 0x20;
            iVar10 = *(int *)(lVar26 + 8 + lVar22);
            if ((iVar10 == (int)uVar23) &&
               (iVar10 = _guard_xfg_dispatch_icall_nop
                                   (*(void **)(lVar26 + lVar22),plVar21,(longlong)iVar10),
               iVar10 == 0)) {
              plVar13 = local_970;
              param_5 = local_940;
              if (iVar7 != -1) goto LAB_141e7d4d8;
              break;
            }
            param_5 = local_940;
            iVar7 = *(int *)(lVar26 + 0x18 + lVar22);
          }
        }
        uVar23 = local_980;
        lVar26 = (longlong)(int)local_980;
        lVar22 = *(longlong *)(param_5 + 0x48);
        iVar7 = (int)local_980 + 1;
        local_980 = CONCAT44(local_980._4_4_,iVar7);
        local_968 = CONCAT44(local_968._4_4_,iVar7);
        if (local_968._4_4_ < iVar7) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(&local_970,uVar23 & 0xffffffff);
          local_980 = CONCAT44(local_980._4_4_,(int)local_968);
        }
        plVar13 = local_970;
        FOpenGLShaderVarying::FOpenGLShaderVarying
                  (local_970 + lVar26 * 3,lVar22 + (longlong)(int)plVar12 * 0x18);
        local_9b8 = '\0';
LAB_141e7d4d8:
        if (plVar21 != (longlong *)0x0) {
          FMemory::Free(plVar21);
        }
      }
      uVar25 = (int)plVar12 + 1;
      plVar12 = (longlong *)(ulonglong)uVar25;
      plVar29 = plVar29 + 3;
    } while ((int)uVar25 < *(int *)(param_5 + 0x50));
    plVar12 = (longlong *)(local_980 & 0xffffffff);
  }
  uVar23 = local_910;
  if (local_9b8 == '\0') {
    if (local_9b4 == 0) {
      FOpenGLCodeHeader::FOpenGLCodeHeader(&local_768);
      local_768 = 0x474c534c;
      local_764 = 0x5653;
      FOpenGLShaderBindings::operator=(local_760,param_5 + 0x18);
      FUN_141e8de90(local_6a0,param_5 + 200);
      local_990 = (longlong *)0x0;
      local_988 = 0;
      GetShaderStageSource<TOpenGLShader<FRefCountedObject,35632,3>_>(&local_908,param_5);
      FString::ParseIntoArrayLines(&local_908,&local_990,1);
      local_9b8 = 0 < (int)plVar12;
      plVar29 = plVar13 + (longlong)(int)plVar12 * 3;
      plVar21 = plVar13;
      local_9b0 = plVar29;
      local_950 = plVar13;
      if (plVar13 != plVar29) {
        do {
          iVar7 = (int)plVar13[1];
          pplVar24 = (longlong **)0x0;
          pvVar2 = (void *)*plVar13;
          local_938 = (longlong **)0x0;
          local_920 = (int *)CONCAT44(local_920._4_4_,iVar7);
          local_930 = (int *)CONCAT44(local_930._4_4_,iVar7);
          _Buf1 = pplVar24;
          iVar10 = 0;
          local_950 = plVar13;
          if (iVar7 != 0) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_938,iVar7,0);
            _Buf1 = local_938;
            _guard_xfg_dispatch_icall_nop(local_938,pvVar2,(longlong)iVar7);
            local_920 = (int *)CONCAT44(local_920._4_4_,(int)local_930);
            iVar10 = (int)local_930;
          }
          local_974 = (int)plVar13[2];
          pplVar32 = pplVar24;
          if (0 < (int)local_988) {
            do {
              puVar19 = (undefined2 *)0x0;
              local_958 = 0;
              local_960 = (undefined2 *)0x0;
              if ((_Buf1 != (longlong **)0x0) && (*(char *)_Buf1 != '\0')) {
                lVar22 = -1;
                do {
                  lVar26 = lVar22 + 1;
                  lVar22 = lVar22 + 1;
                } while (*(char *)((longlong)_Buf1 + lVar26) != '\0');
                uVar25 = (int)lVar22 + 1;
                local_958 = (ulonglong)uVar25;
                if (0 < (int)uVar25) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_960,0);
                }
                puVar19 = local_960;
                local_9c8 = CONCAT22(local_9c8._2_2_,0x3f);
                FGenericPlatformString::Convert<char,wchar_t>(local_960,uVar25,_Buf1);
              }
              local_9c8 = -1;
              iVar7 = FUN_141592950();
              if (puVar19 != (undefined2 *)0x0) {
                FMemory::Free();
              }
              if ((iVar7 != -1) &&
                 (pcVar17 = (char *)((longlong)local_990 + (longlong)pplVar24), pcVar17[8] = '\0',
                 pcVar17[9] = '\0', pcVar17[10] = '\0', pcVar17[0xb] = '\0',
                 *(int *)(pcVar17 + 0xc) != 0)) {
                TArray<wchar_t,FDefaultAllocator>::ResizeTo();
              }
              uVar25 = (int)pplVar32 + 1;
              pplVar24 = pplVar24 + 2;
              pplVar32 = (longlong **)(ulonglong)uVar25;
            } while ((int)uVar25 < (int)local_988);
            plVar29 = local_9b0;
            plVar13 = local_950;
            iVar10 = (int)local_920;
          }
          iVar8 = 0;
          ppplVar20 = local_730;
          iVar7 = local_974;
          if (0 < local_728) {
            do {
              if ((&local_938 == ppplVar20) ||
                 (((iVar7 == *(int *)(ppplVar20 + 2) && (iVar10 == *(int *)(ppplVar20 + 1))) &&
                  (iVar11 = _guard_xfg_dispatch_icall_nop(_Buf1,*ppplVar20,(longlong)iVar10),
                  iVar7 = local_974, iVar11 == 0)))) {
                TArray<FVulkanDescriptorSetsLayoutInfo::FSetLayout,FDefaultAllocator>::RemoveAtImpl
                          ();
                break;
              }
              iVar8 = iVar8 + 1;
              ppplVar20 = ppplVar20 + 3;
            } while (iVar8 < local_728);
          }
          if (_Buf1 != (longlong **)0x0) {
            FMemory::Free();
          }
          plVar13 = plVar13 + 3;
        } while (plVar13 != plVar29);
        plVar12 = (longlong *)(local_980 & 0xffffffff);
        plVar21 = local_970;
        local_950 = plVar13;
      }
      cVar6 = local_9b8;
      uVar25 = (uint)plVar12;
      while (uVar25 != 0) {
        if (*plVar21 != 0) {
          FMemory::Free();
        }
        plVar21 = plVar21 + 3;
        uVar25 = (int)plVar12 - 1;
        plVar12 = (longlong *)(ulonglong)uVar25;
      }
      local_980 = local_980 & 0xffffffff00000000;
      uVar23 = local_968 >> 0x20;
      local_968 = local_968 & 0xffffffff00000000;
      if ((int)uVar23 == 0) {
LAB_141e7d7e0:
        puVar19 = (undefined2 *)0x0;
        if (local_978 != 0) goto LAB_141e7db3c;
        uVar23 = local_910;
        if (cVar6 == '\0') {
LAB_141e7db37:
          bVar33 = true;
        }
        else {
          iVar7 = 0;
          plVar12 = local_990 + (longlong)(int)local_988 * 2;
          local_960 = (undefined2 *)0x0;
          local_958 = local_958 & 0xffffffff;
          puVar31 = puVar19;
          plVar13 = local_990;
          local_950 = plVar12;
          if (local_990 != plVar12) {
            do {
              piVar18 = (int *)0x0;
              local_918 = (int)plVar13[1];
              lVar22 = (longlong)local_918;
              pvVar2 = (void *)*plVar13;
              local_920 = (int *)0x0;
              if (local_918 == 0) {
                local_914 = 0;
                iVar7 = 0;
              }
              else {
                TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_920,local_918,0);
                piVar18 = local_920;
                _guard_xfg_dispatch_icall_nop(local_920,pvVar2,lVar22 * 2);
                iVar7 = local_918;
              }
              if (1 < iVar7) {
                local_9b0 = (longlong *)0x0;
                local_9c8 = 2 - (uint)(iVar7 != 0);
                TArray<wchar_t,FDefaultAllocator>::CopyToEmpty<wchar_t>(&local_9b0,piVar18,iVar7,0);
                iVar10 = (uint)local_9a8;
                lVar22 = (longlong)(int)(uint)local_9a8;
                iVar7 = (2 - (uint)((uint)local_9a8 != 0)) + (uint)local_9a8;
                local_9a8 = CONCAT44(local_9a8._4_4_,iVar7);
                if (local_9a8._4_4_ < iVar7) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_9b0);
                  iVar7 = (uint)local_9a8;
                }
                plVar29 = local_9b0;
                local_9b0 = (longlong *)0x0;
                local_9a8 = 0;
                puVar1 = (undefined2 *)((longlong)plVar29 + (lVar22 - (ulonglong)(iVar10 != 0)) * 2)
                ;
                *puVar1 = 10;
                puVar1[1] = 0;
                if ((iVar7 != 0) && (iVar7 + -1 != 0)) {
                  iVar10 = (int)puVar19;
                  uVar25 = (uint)(iVar10 == 0) + iVar10 + iVar7 + -1;
                  local_958 = CONCAT44(local_958._4_4_,uVar25);
                  if (local_958._4_4_ < (int)uVar25) {
                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_960,puVar19);
                    puVar31 = local_960;
                    uVar25 = (uint)local_958;
                  }
                  puVar19 = (undefined2 *)(ulonglong)uVar25;
                  _guard_xfg_dispatch_icall_nop
                            (puVar31 + ((longlong)iVar10 - (ulonglong)(iVar10 != 0)),plVar29,
                             (longlong)iVar7 * 2 - 2);
                  (puVar31 + ((longlong)iVar10 - (ulonglong)(iVar10 != 0)))[(longlong)iVar7 + -1] =
                       0;
                }
                plVar12 = local_950;
                if (plVar29 != (longlong *)0x0) {
                  FMemory::Free();
                  plVar12 = local_950;
                }
              }
              iVar7 = (int)puVar19;
              if (piVar18 != (int *)0x0) {
                FMemory::Free();
              }
              plVar13 = plVar13 + 2;
            } while (plVar13 != plVar12);
          }
          local_938 = (longlong **)0x0;
          local_930 = (int *)0x0;
          local_950 = (longlong *)0x0;
          FArchive::FArchive(local_8b8);
          local_8b8[0] = &PTR_FUN_143f4a100;
          local_820 = &local_938;
          local_828 = 0;
          local_818 = local_950;
          FArchive::SetIsSaving(local_8b8,1);
          FArchive::SetIsPersistent(local_8b8,0);
          FUN_141e8e180(local_8b8,&local_768);
          local_960 = (undefined2 *)0x0;
          local_958 = local_958 & 0xffffffff;
          puVar19 = &DAT_143f3eda8;
          if (iVar7 != 0) {
            puVar19 = puVar31;
          }
          TStringConversion<TStringConvert<wchar_t,char>,128>::
          TStringConversion<TStringConvert<wchar_t,char>,128>(local_648,puVar19);
          lVar22 = -1;
          do {
            lVar26 = lVar22 + 1;
            lVar22 = lVar22 + 1;
          } while (*(char *)((longlong)local_5c0 + lVar26) != '\0');
          iVar10 = (int)lVar22 + 1;
          if (local_5c8 != 0) {
            FMemory::Free();
          }
          puVar19 = &DAT_143f3eda8;
          if (iVar7 != 0) {
            puVar19 = puVar31;
          }
          TStringConversion<TStringConvert<wchar_t,char>,128>::
          TStringConversion<TStringConvert<wchar_t,char>,128>(local_648,puVar19);
          local_958 = CONCAT44(local_958._4_4_,iVar10);
          puVar19 = (undefined2 *)0x0;
          iVar7 = iVar10;
          if (0 < iVar10) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_960,0);
            puVar19 = local_960;
            iVar7 = (uint)local_958;
          }
          _guard_xfg_dispatch_icall_nop(puVar19,local_5c0,(longlong)iVar10);
          if (local_5c8 != 0) {
            FMemory::Free();
          }
          FMemoryWriter::Serialize(local_8b8,puVar19,(longlong)iVar7);
          puVar14 = (undefined8 *)FUN_141e86010(&local_938,0);
          uVar23 = local_910;
          if (puVar14 != (undefined8 *)0x0) {
            *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
          }
          FOpenGLShaderBindings::operator=(local_910,local_760);
          *(undefined4 *)(uVar23 + 0xc4) = *(undefined4 *)(puVar14 + 2);
          piVar18 = (int *)(puVar14 + 1);
          *piVar18 = *piVar18 + -1;
          if (*piVar18 == 0) {
            (**(code **)*puVar14)(puVar14,1);
          }
          if (puVar19 != (undefined2 *)0x0) {
            FMemory::Free(puVar19);
          }
          FArchive::~FArchive(local_8b8);
          if (local_938 != (longlong **)0x0) {
            FMemory::Free();
          }
          if (puVar31 == (undefined2 *)0x0) goto LAB_141e7db37;
          FMemory::Free(puVar31);
          bVar33 = true;
        }
      }
      else {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                  ();
        local_980 = CONCAT44(local_980._4_4_,(int)local_968);
        if ((int)local_968 == 0) goto LAB_141e7d7e0;
LAB_141e7db3c:
        bVar33 = false;
        uVar23 = local_910;
      }
      if (local_908 != (undefined1 *)0x0) {
        FMemory::Free();
      }
      plVar12 = local_990;
      for (iVar7 = (int)local_988; iVar7 != 0; iVar7 = iVar7 + -1) {
        if (*plVar12 != 0) {
          FMemory::Free();
        }
        plVar12 = plVar12 + 2;
      }
      if (local_990 != (longlong *)0x0) {
        FMemory::Free(local_990);
      }
      if (local_6a0[0] != 0) {
        FMemory::Free();
      }
      if (local_6b0 != 0) {
        FMemory::Free();
      }
      FOpenGLShaderBindings::~FOpenGLShaderBindings(local_760);
      if (bVar33) goto LAB_141e7dbfd;
    }
    GetShaderStageSource<TOpenGLShader<FRefCountedObject,35632,3>_>(&local_938,local_940);
    GetShaderStageSource<TOpenGLShader<FRefCountedObject,35632,3>_>(&local_908,local_8d8);
    if (local_908 != (undefined1 *)0x0) {
      FMemory::Free();
    }
    if (local_938 != (longlong **)0x0) {
      FMemory::Free();
    }
  }
LAB_141e7dbfd:
  uVar15 = FUN_141e9bc10();
  local_908 = local_4f8;
  local_900 = uVar23;
  FUN_141e8ac70(uVar15,&local_974,&local_908,0);
  plVar13 = local_970;
  plVar12 = local_970;
  for (iVar7 = (int)local_980; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    plVar12 = plVar12 + 3;
  }
  iVar7 = local_978;
  plVar12 = local_8e8;
  plVar29 = local_8e8;
  if (plVar13 != (longlong *)0x0) {
    FMemory::Free(plVar13);
    iVar7 = local_978;
    plVar12 = local_8e8;
    plVar29 = local_8e8;
  }
  for (; plVar13 = local_8e8, iVar7 != 0; iVar7 = iVar7 + -1) {
    local_8e8 = plVar29;
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    plVar12 = plVar12 + 3;
    plVar29 = local_8e8;
    local_8e8 = plVar13;
  }
  bVar33 = local_8e8 != (longlong *)0x0;
  iVar7 = local_9b4;
  plVar12 = local_9a0;
  plVar21 = local_9a0;
  local_8e8 = plVar29;
  if (bVar33) {
    FMemory::Free(plVar13);
    iVar7 = local_9b4;
    plVar12 = local_9a0;
    plVar21 = local_9a0;
  }
  for (; plVar13 = local_9a0, iVar7 != 0; iVar7 = iVar7 + -1) {
    local_9a0 = plVar21;
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    plVar12 = plVar12 + 2;
    plVar21 = local_9a0;
    local_9a0 = plVar13;
  }
  bVar33 = local_9a0 != (longlong *)0x0;
  local_9a0 = plVar21;
  if (bVar33) {
    FMemory::Free(plVar13);
  }
  local_770 = 0;
  if (local_778 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_7b8);
  local_7c0 = 0;
  if (local_7c8 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_808);
  param_3 = local_8c8;
  param_1 = local_8d0;
LAB_141e7dd13:
  puVar28 = local_48;
  lVar22 = 6;
  do {
    puVar28 = puVar28 + -0x19;
    FOpenGLShaderBindings::~FOpenGLShaderBindings(puVar28);
    lVar22 = lVar22 + -1;
  } while (lVar22 != 0);
LAB_141e7dd55:
  FOpenGLShaderBindings::operator=(param_1,local_5a8);
  *(undefined4 *)(param_1 + 0xc4) = local_8f0;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *(undefined4 *)(param_1 + 0xb0) = *param_3;
  *(undefined4 *)(param_1 + 0xb4) = uVar3;
  *(undefined4 *)(param_1 + 0xb8) = uVar4;
  *(undefined4 *)(param_1 + 0xbc) = uVar5;
  *(undefined4 *)(param_1 + 0xc0) = param_3[4];
  FOpenGLShaderBindings::~FOpenGLShaderBindings(local_5a8);
  return;
}



// FUNCTION 141e7ddc0 FUN_141e7ddc0 body=5171 status=ok
// SIG undefined FUN_141e7ddc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000141e7e63a) */
/* WARNING: Removing unreachable block (ram,0x000141e7e3bf) */

void FUN_141e7ddc0(longlong param_1,longlong param_2,undefined4 *param_3,ulonglong param_4,
                  longlong param_5)

{
  undefined2 *puVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined1 *puVar16;
  char *pcVar17;
  int *piVar18;
  undefined2 *puVar19;
  size_t _Size;
  longlong ***ppplVar20;
  longlong *plVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong **pplVar24;
  uint uVar25;
  longlong lVar26;
  longlong **_Buf1;
  ulonglong *puVar28;
  longlong *plVar29;
  int *piVar30;
  undefined2 *puVar31;
  longlong **pplVar32;
  bool bVar33;
  undefined1 auStack_9e8 [32];
  int local_9c8;
  undefined4 local_9c0;
  char local_9b8;
  int local_9b4;
  longlong *local_9b0;
  undefined8 local_9a8;
  longlong *local_9a0;
  int local_998;
  int local_994;
  longlong *local_990;
  undefined8 local_988;
  ulonglong local_980;
  int local_978;
  int local_974;
  longlong *local_970;
  undefined8 local_968;
  undefined2 *local_960;
  undefined8 local_958;
  longlong *local_950;
  undefined8 local_948;
  longlong local_940;
  longlong **local_938;
  int *local_930;
  int *local_920;
  int local_918;
  undefined4 local_914;
  ulonglong local_910;
  undefined1 *local_908;
  ulonglong local_900;
  undefined4 local_8f0;
  longlong *local_8e8;
  int local_8e0;
  int local_8dc;
  longlong local_8d8;
  longlong local_8d0;
  undefined4 *local_8c8;
  undefined **local_8b8 [18];
  undefined8 local_828;
  longlong ***local_820;
  longlong *local_818;
  longlong local_808;
  undefined8 local_800;
  undefined8 local_7e8;
  undefined8 local_7e0;
  undefined4 local_7d8;
  int local_7d4;
  undefined1 local_7d0 [8];
  undefined1 *local_7c8;
  int local_7c0;
  longlong local_7b8;
  undefined8 local_7b0;
  undefined8 local_798;
  undefined8 local_790;
  undefined4 local_788;
  int local_784;
  undefined1 local_780 [8];
  undefined1 *local_778;
  int local_770;
  undefined4 local_768;
  undefined2 local_764;
  undefined1 local_760 [48];
  longlong ***local_730;
  int local_728;
  longlong local_6b0;
  longlong local_6a0 [7];
  longlong local_668;
  undefined1 local_648 [128];
  longlong local_5c8;
  void *local_5c0;
  undefined1 local_5a8 [32];
  longlong local_588;
  uint local_580;
  undefined1 local_4f8 [176];
  undefined4 local_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined4 local_438;
  undefined4 local_434;
  undefined1 local_430 [176];
  undefined4 local_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 local_370;
  undefined4 local_36c;
  ulonglong local_48 [2];
  ulonglong uVar27;
  
  local_48[0] = DAT_1468387a8 ^ (ulonglong)auStack_9e8;
  local_8f0 = *(undefined4 *)(param_2 + 0x10);
  local_940 = param_5;
  local_910 = param_4;
  local_8d8 = param_2;
  local_8d0 = param_1;
  local_8c8 = param_3;
  FOpenGLShaderBindings::FOpenGLShaderBindings(local_5a8,param_2 + 0x18);
  if (DAT_146ab3550 == '\0') goto LAB_141e7f195;
  FUN_141e8d1f0(local_4f8);
  FOpenGLShaderBindings::operator=(local_4f8,param_4);
  local_438 = *(undefined4 *)(param_4 + 0xc0);
  local_448 = *(undefined4 *)(param_4 + 0xb0);
  uStack_444 = *(undefined4 *)(param_4 + 0xb4);
  uStack_440 = *(undefined4 *)(param_4 + 0xb8);
  uStack_43c = *(undefined4 *)(param_4 + 0xbc);
  local_434 = *(undefined4 *)(param_4 + 0xc4);
  FOpenGLShaderBindings::operator=(local_430,param_1);
  local_370 = *(undefined4 *)(param_1 + 0xc0);
  local_380 = *(undefined4 *)(param_1 + 0xb0);
  uStack_37c = *(undefined4 *)(param_1 + 0xb4);
  uStack_378 = *(undefined4 *)(param_1 + 0xb8);
  uStack_374 = *(undefined4 *)(param_1 + 0xbc);
  local_36c = *(undefined4 *)(param_1 + 0xc4);
  plVar12 = (longlong *)FUN_141e9bc10();
  if ((int)plVar12[1] != *(int *)((longlong)plVar12 + 0x34)) {
    iVar7 = GetTypeHash(local_4f8);
    plVar13 = (longlong *)plVar12[8];
    if ((longlong *)plVar12[8] == (longlong *)0x0) {
      plVar13 = plVar12 + 7;
    }
    iVar7 = *(int *)((longlong)plVar13 + ((longlong)(int)plVar12[9] - 1U & (longlong)iVar7) * 4);
    if (iVar7 != -1) {
      lVar22 = *plVar12;
      do {
        lVar26 = (longlong)iVar7 * 0x580 + lVar22;
        cVar6 = FUN_141e8eeb0(lVar26,local_4f8);
        if (cVar6 != '\0') {
          if (iVar7 != -1) goto LAB_141e7df40;
          break;
        }
        iVar7 = *(int *)(lVar26 + 0x578);
      } while (iVar7 != -1);
    }
  }
  lVar26 = 0;
LAB_141e7df40:
  lVar22 = lVar26 + 0x4b0;
  if (lVar26 == 0) {
    lVar22 = 0;
  }
  if (lVar22 == 0) {
    iVar7 = *(int *)(param_5 + 0x50);
    uVar23 = 0;
    local_808 = 0;
    local_800 = 0;
    local_7e8 = 0;
    local_7e0 = 0;
    local_7d8 = 0xffffffff;
    local_7d4 = 0;
    local_7c8 = (undefined1 *)0x0;
    local_7c0 = 0;
    if (0 < iVar7) {
      local_938 = &local_9a0;
      uVar27 = uVar23;
      do {
        local_9a0 = (longlong *)0x0;
        local_998 = *(int *)(uVar23 + 8 + *(longlong *)(param_5 + 0x48));
        _Size = (size_t)local_998;
        pvVar2 = *(void **)(uVar23 + *(longlong *)(param_5 + 0x48));
        if (local_998 == 0) {
          local_994 = 0;
        }
        else {
          TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_9a0,local_998,0);
          _guard_xfg_dispatch_icall_nop(local_9a0,pvVar2,_Size);
        }
        if ((3 < local_998) &&
           ((iVar7 = strncmp((char *)local_9a0,"out_",4), iVar7 == 0 ||
            (iVar7 = strncmp((char *)local_9a0,"var_",4), iVar7 == 0)))) {
          if (local_998 + -4 != 0) {
            _guard_xfg_dispatch_icall_nop
                      (local_9a0,(char *)((longlong)local_9a0 + 4),(longlong)(local_998 + -4));
          }
          local_998 = local_998 + -4;
          TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(&local_9a0);
        }
        local_930 = (int *)(*(longlong *)(param_5 + 0x48) + ((longlong)(int)uVar27 * 3 + 2) * 8);
        FUN_141e8a390(&local_808,&local_974,&local_938,0);
        if (local_9a0 != (longlong *)0x0) {
          FMemory::Free();
        }
        iVar7 = *(int *)(param_5 + 0x50);
        uVar25 = (int)uVar27 + 1;
        uVar27 = (ulonglong)uVar25;
        uVar23 = uVar23 + 0x18;
      } while ((int)uVar25 < iVar7);
    }
    local_9b8 = '\x01';
    local_7b8 = 0;
    local_7b0 = 0;
    local_798 = 0;
    local_790 = 0;
    local_788 = 0xffffffff;
    local_784 = 0;
    local_778 = (undefined1 *)0x0;
    local_770 = 0;
    local_9a0 = (longlong *)0x0;
    local_9b4 = 0;
    local_994 = 0;
    local_8e8 = (longlong *)0x0;
    local_978 = 0;
    local_8dc = 0;
    if (0 < (int)local_580) {
      local_938 = &local_9b0;
      piVar30 = (int *)(local_588 + 0x10);
      piVar18 = piVar30;
      local_980 = (ulonglong)local_580;
LAB_141e7e180:
      iVar10 = local_994;
      local_9b0 = (longlong *)0x0;
      iVar7 = piVar18[-2];
      pvVar2 = *(void **)(piVar18 + -4);
      local_9a8 = CONCAT44(local_9a8._4_4_,iVar7);
      local_920 = piVar30;
      if (iVar7 == 0) {
        local_9a8 = 0;
      }
      else {
        TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_9b0,iVar7,0);
        _guard_xfg_dispatch_icall_nop(local_9b0,pvVar2,(longlong)iVar7);
      }
      if ((2 < (int)(uint)local_9a8) && (iVar7 = strncmp((char *)local_9b0,"in_",3), iVar7 == 0)) {
        if ((uint)local_9a8 + -3 != 0) {
          _guard_xfg_dispatch_icall_nop
                    (local_9b0,(void *)((longlong)local_9b0 + 3),
                     (longlong)(int)((uint)local_9a8 + -3));
        }
        local_9a8 = CONCAT44(local_9a8._4_4_,(uint)local_9a8 + -3);
        TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(&local_9b0);
      }
      if ((3 < (int)(uint)local_9a8) && (iVar7 = strncmp((char *)local_9b0,"var_",4), iVar7 == 0)) {
        if ((uint)local_9a8 + -4 != 0) {
          _guard_xfg_dispatch_icall_nop
                    (local_9b0,(void *)((longlong)local_9b0 + 4),
                     (longlong)(int)((uint)local_9a8 + -4));
        }
        local_9a8 = CONCAT44(local_9a8._4_4_,(uint)local_9a8 + -4);
        TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(&local_9b0);
      }
      local_930 = piVar30;
      FUN_141e8a390(&local_7b8,&local_974,&local_938,0);
      if ((int)local_800 != local_7d4) {
        uVar25 = FCrc::MemCrc32(local_9b0,local_9a8 & 0xffffffff,0);
        lVar22 = local_808;
        uVar23 = local_9a8;
        plVar12 = local_9b0;
        puVar16 = local_7d0;
        if (local_7c8 != (undefined1 *)0x0) {
          puVar16 = local_7c8;
        }
        iVar7 = *(int *)(puVar16 + (longlong)(int)(local_7c0 - 1U & uVar25) * 4);
        if (iVar7 != -1) {
          uVar25 = (uint)local_9a8;
          do {
            lVar26 = (longlong)iVar7 * 0x20;
            uVar9 = *(uint *)(lVar26 + 8 + lVar22);
            if ((uVar9 == uVar25) &&
               (iVar8 = _guard_xfg_dispatch_icall_nop
                                  (*(void **)(lVar26 + lVar22),plVar12,(longlong)(int)uVar9),
               iVar8 == 0)) {
              if (iVar7 != -1) {
                if ((int)local_800 == local_7d4) goto LAB_141e7e491;
                uVar9 = FCrc::MemCrc32(plVar12,uVar23 & 0xffffffff,0);
                lVar22 = local_808;
                plVar12 = local_9b0;
                uVar25 = (uint)local_9a8;
                puVar16 = local_7d0;
                if (local_7c8 != (undefined1 *)0x0) {
                  puVar16 = local_7c8;
                }
                iVar7 = *(int *)(puVar16 + (longlong)(int)(local_7c0 - 1U & uVar9) * 4);
                goto joined_r0x000141e7e44f;
              }
              break;
            }
            iVar7 = *(int *)(lVar26 + 0x18 + lVar22);
          } while (iVar7 != -1);
        }
      }
      TStringConversion<TStringConvert<char,wchar_t>,128>::
      TStringConversion<TStringConvert<char,wchar_t>,128>(&local_768,*(undefined8 *)(piVar18 + -4));
      local_9c0 = 0x8dd9;
      local_9c8 = 0x8b30;
      FString::PrintfImpl(&local_950,
                          L"Separate Shader Object Binding Error: Input %s @ %d of stage 0x%x not written by stage 0x%x"
                         );
      iVar7 = local_9b4;
      lVar22 = (longlong)local_9b4;
      local_9b4 = local_9b4 + 1;
      local_998 = local_9b4;
      if (iVar10 < local_9b4) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_9a0,iVar7);
      }
      plVar12 = local_9a0 + lVar22 * 2;
      *plVar12 = 0;
      *plVar12 = (longlong)local_950;
      *(undefined4 *)(plVar12 + 1) = (undefined4)local_948;
      *(undefined4 *)((longlong)plVar12 + 0xc) = local_948._4_4_;
      local_948 = 0;
      local_950 = (longlong *)0x0;
      local_9b4 = local_998;
      if (local_668 == 0) goto LAB_141e7e57f;
      FMemory::Free();
      local_9b8 = '\0';
      plVar12 = local_9b0;
      goto LAB_141e7e6fa;
    }
    goto LAB_141e7e73a;
  }
  FOpenGLShaderBindings::operator=(param_4,lVar22);
  *(undefined4 *)(param_4 + 0xc4) = *(undefined4 *)(lVar22 + 0xc4);
  goto LAB_141e7f153;
joined_r0x000141e7e44f:
  if (iVar7 == -1) goto LAB_141e7e491;
  puVar14 = (undefined8 *)((longlong)iVar7 * 0x20 + lVar22);
  if ((*(uint *)(puVar14 + 1) == uVar25) &&
     (iVar10 = _guard_xfg_dispatch_icall_nop
                         ((void *)*puVar14,plVar12,(longlong)(int)*(uint *)(puVar14 + 1)),
     iVar10 == 0)) {
    if (iVar7 != -1) goto LAB_141e7e495;
    goto LAB_141e7e491;
  }
  iVar7 = *(int *)(puVar14 + 3);
  goto joined_r0x000141e7e44f;
LAB_141e7e491:
  puVar14 = (undefined8 *)0x0;
LAB_141e7e495:
  puVar16 = (undefined1 *)0x0;
  iVar7 = *piVar18;
  iVar10 = *(int *)(puVar14 + 2);
  if (iVar10 != iVar7) {
    if ((iVar10 < 0) || (iVar7 < 0)) {
      if (iVar7 == -1) {
        TStringConversion<TStringConvert<char,wchar_t>,128>::
        TStringConversion<TStringConvert<char,wchar_t>,128>
                  (&local_768,*(undefined8 *)(piVar18 + -4));
        local_9c0 = *(undefined4 *)(puVar14 + 2);
        local_9c8 = 0x8dd9;
        FString::PrintfImpl(&local_990,
                            L"Separate Shader Object Binding Error: Input %s of stage 0x%x written by stage 0x%x at location %d, can\'t be rewritten."
                           );
        iVar7 = local_9b4;
        lVar22 = (longlong)local_9b4;
        local_9b4 = local_9b4 + 1;
        local_998 = local_9b4;
        if (local_994 < local_9b4) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_9a0,iVar7);
        }
        plVar12 = local_9a0 + lVar22 * 2;
        *plVar12 = 0;
        *plVar12 = (longlong)local_990;
        local_990 = (longlong *)0x0;
        *(int *)(plVar12 + 1) = (int)local_988;
        *(undefined4 *)((longlong)plVar12 + 0xc) = local_988._4_4_;
        local_988 = 0;
      }
      else {
        TStringConversion<TStringConvert<char,wchar_t>,128>::
        TStringConversion<TStringConvert<char,wchar_t>,128>
                  (&local_768,*(undefined8 *)(piVar18 + -4));
        local_9c0 = 0x8dd9;
        local_9c8 = 0x8b30;
        FString::PrintfImpl(&local_970,
                            L"Separate Shader Object Binding Error: Input %s @ %d of stage 0x%x written by stage 0x%x without location, can\'t be rewritten."
                           );
        iVar7 = local_9b4;
        lVar22 = (longlong)local_9b4;
        local_9b4 = local_9b4 + 1;
        local_998 = local_9b4;
        if (local_994 < local_9b4) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_9a0,iVar7);
        }
        plVar12 = local_9a0 + lVar22 * 2;
        *plVar12 = 0;
        *plVar12 = (longlong)local_970;
        local_970 = (longlong *)0x0;
        *(int *)(plVar12 + 1) = (int)local_968;
        *(int *)((longlong)plVar12 + 0xc) = local_968._4_4_;
        local_968 = 0;
      }
      local_9b4 = local_998;
      if (local_668 != 0) {
        FMemory::Free();
        local_9b8 = '\0';
        plVar12 = local_9b0;
        goto LAB_141e7e6fa;
      }
    }
    else {
      local_908 = (undefined1 *)0x0;
      local_900 = (ulonglong)uVar25;
      iVar7 = 0;
      if (uVar25 != 0) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_908,uVar25,0);
        puVar16 = local_908;
        _guard_xfg_dispatch_icall_nop(local_908,plVar12,(longlong)(int)uVar25);
        iVar10 = *(int *)(puVar14 + 2);
        iVar7 = (int)local_900;
      }
      iVar11 = local_978;
      lVar22 = (longlong)local_978;
      iVar8 = *piVar18;
      local_978 = local_978 + 1;
      local_8e0 = local_978;
      if (local_8dc < local_978) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(&local_8e8,iVar11);
      }
      plVar12 = local_8e8 + lVar22 * 3;
      *plVar12 = 0;
      *(int *)(plVar12 + 1) = iVar7;
      local_978 = local_8e0;
      if (iVar7 == 0) {
        *(undefined4 *)((longlong)plVar12 + 0xc) = 0;
      }
      else {
        TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(plVar12,iVar7,0);
        _guard_xfg_dispatch_icall_nop((void *)*plVar12,puVar16,(longlong)iVar7);
      }
      *(int *)(plVar12 + 2) = iVar10;
      *(int *)((longlong)plVar12 + 0x14) = iVar8;
      if (puVar16 != (undefined1 *)0x0) {
        FMemory::Free(puVar16);
      }
    }
LAB_141e7e57f:
    local_9b8 = '\0';
    plVar12 = local_9b0;
  }
LAB_141e7e6fa:
  if (plVar12 != (longlong *)0x0) {
    FMemory::Free(plVar12);
  }
  piVar18 = piVar18 + 6;
  piVar30 = local_920 + 6;
  local_980 = local_980 - 1;
  if (local_980 == 0) goto code_r0x000141e7e728;
  goto LAB_141e7e180;
code_r0x000141e7e728:
  iVar7 = *(int *)(local_940 + 0x50);
  local_980 = 0;
  param_5 = local_940;
  local_920 = piVar30;
LAB_141e7e73a:
  plVar13 = (longlong *)0x0;
  local_980 = local_980 & 0xffffffff00000000;
  local_970 = (longlong *)0x0;
  local_968 = local_968 & 0xffffffff;
  plVar12 = plVar13;
  plVar29 = plVar13;
  if (0 < iVar7) {
    do {
      plVar21 = (longlong *)0x0;
      lVar22 = *(longlong *)(param_5 + 0x48);
      if (*(int *)(lVar22 + 0x10 + (longlong)plVar29) == -1) {
        pvVar2 = *(void **)(lVar22 + (longlong)plVar29);
        local_990 = (longlong *)0x0;
        iVar7 = *(int *)(lVar22 + 8 + (longlong)plVar29);
        local_988 = CONCAT44(local_988._4_4_,iVar7);
        if (iVar7 == 0) {
          local_988 = 0;
          uVar23 = 0;
        }
        else {
          TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_990,iVar7,0);
          plVar21 = local_990;
          _guard_xfg_dispatch_icall_nop(local_990,pvVar2,(longlong)iVar7);
          uVar23 = local_988 & 0xffffffff;
        }
        if ((3 < (int)uVar23) &&
           ((iVar7 = strncmp((char *)plVar21,"out_",4), iVar7 == 0 ||
            (iVar7 = strncmp((char *)plVar21,"var_",4), iVar7 == 0)))) {
          iVar7 = (int)uVar23 + -4;
          if (iVar7 != 0) {
            _guard_xfg_dispatch_icall_nop(plVar21,(void *)((longlong)plVar21 + 4),(longlong)iVar7);
          }
          local_988 = CONCAT44(local_988._4_4_,iVar7);
          TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(&local_990);
          uVar23 = local_988 & 0xffffffff;
          plVar21 = local_990;
        }
        if ((int)local_7b0 != local_784) {
          uVar25 = FCrc::MemCrc32(plVar21,uVar23);
          lVar22 = local_7b8;
          puVar16 = local_780;
          if (local_778 != (undefined1 *)0x0) {
            puVar16 = local_778;
          }
          iVar7 = *(int *)(puVar16 + (longlong)(int)(local_770 - 1U & uVar25) * 4);
          while (iVar7 != -1) {
            lVar26 = (longlong)iVar7 * 0x20;
            iVar10 = *(int *)(lVar26 + 8 + lVar22);
            if ((iVar10 == (int)uVar23) &&
               (iVar10 = _guard_xfg_dispatch_icall_nop
                                   (*(void **)(lVar26 + lVar22),plVar21,(longlong)iVar10),
               iVar10 == 0)) {
              plVar13 = local_970;
              param_5 = local_940;
              if (iVar7 != -1) goto LAB_141e7e918;
              break;
            }
            param_5 = local_940;
            iVar7 = *(int *)(lVar26 + 0x18 + lVar22);
          }
        }
        uVar23 = local_980;
        lVar26 = (longlong)(int)local_980;
        lVar22 = *(longlong *)(param_5 + 0x48);
        iVar7 = (int)local_980 + 1;
        local_980 = CONCAT44(local_980._4_4_,iVar7);
        local_968 = CONCAT44(local_968._4_4_,iVar7);
        if (local_968._4_4_ < iVar7) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(&local_970,uVar23 & 0xffffffff);
          local_980 = CONCAT44(local_980._4_4_,(int)local_968);
        }
        plVar13 = local_970;
        FOpenGLShaderVarying::FOpenGLShaderVarying
                  (local_970 + lVar26 * 3,lVar22 + (longlong)(int)plVar12 * 0x18);
        local_9b8 = '\0';
LAB_141e7e918:
        if (plVar21 != (longlong *)0x0) {
          FMemory::Free(plVar21);
        }
      }
      uVar25 = (int)plVar12 + 1;
      plVar12 = (longlong *)(ulonglong)uVar25;
      plVar29 = plVar29 + 3;
    } while ((int)uVar25 < *(int *)(param_5 + 0x50));
    plVar12 = (longlong *)(local_980 & 0xffffffff);
  }
  uVar23 = local_910;
  if (local_9b8 == '\0') {
    if (local_9b4 == 0) {
      FOpenGLCodeHeader::FOpenGLCodeHeader(&local_768);
      local_768 = 0x474c534c;
      local_764 = 0x4753;
      FOpenGLShaderBindings::operator=(local_760,param_5 + 0x18);
      FUN_141e8de90(local_6a0,param_5 + 200);
      local_990 = (longlong *)0x0;
      local_988 = 0;
      GetShaderStageSource<TOpenGLShader<FRefCountedObject,35632,3>_>(&local_908,param_5);
      FString::ParseIntoArrayLines(&local_908,&local_990,1);
      local_9b8 = 0 < (int)plVar12;
      plVar29 = plVar13 + (longlong)(int)plVar12 * 3;
      plVar21 = plVar13;
      local_9b0 = plVar29;
      local_950 = plVar13;
      if (plVar13 != plVar29) {
        do {
          iVar7 = (int)plVar13[1];
          pplVar24 = (longlong **)0x0;
          pvVar2 = (void *)*plVar13;
          local_938 = (longlong **)0x0;
          local_920 = (int *)CONCAT44(local_920._4_4_,iVar7);
          local_930 = (int *)CONCAT44(local_930._4_4_,iVar7);
          _Buf1 = pplVar24;
          iVar10 = 0;
          local_950 = plVar13;
          if (iVar7 != 0) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_938,iVar7,0);
            _Buf1 = local_938;
            _guard_xfg_dispatch_icall_nop(local_938,pvVar2,(longlong)iVar7);
            local_920 = (int *)CONCAT44(local_920._4_4_,(int)local_930);
            iVar10 = (int)local_930;
          }
          local_974 = (int)plVar13[2];
          pplVar32 = pplVar24;
          if (0 < (int)local_988) {
            do {
              puVar19 = (undefined2 *)0x0;
              local_958 = 0;
              local_960 = (undefined2 *)0x0;
              if ((_Buf1 != (longlong **)0x0) && (*(char *)_Buf1 != '\0')) {
                lVar22 = -1;
                do {
                  lVar26 = lVar22 + 1;
                  lVar22 = lVar22 + 1;
                } while (*(char *)((longlong)_Buf1 + lVar26) != '\0');
                uVar25 = (int)lVar22 + 1;
                local_958 = (ulonglong)uVar25;
                if (0 < (int)uVar25) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_960,0);
                }
                puVar19 = local_960;
                local_9c8 = CONCAT22(local_9c8._2_2_,0x3f);
                FGenericPlatformString::Convert<char,wchar_t>(local_960,uVar25,_Buf1);
              }
              local_9c8 = -1;
              iVar7 = FUN_141592950();
              if (puVar19 != (undefined2 *)0x0) {
                FMemory::Free();
              }
              if ((iVar7 != -1) &&
                 (pcVar17 = (char *)((longlong)local_990 + (longlong)pplVar24), pcVar17[8] = '\0',
                 pcVar17[9] = '\0', pcVar17[10] = '\0', pcVar17[0xb] = '\0',
                 *(int *)(pcVar17 + 0xc) != 0)) {
                TArray<wchar_t,FDefaultAllocator>::ResizeTo();
              }
              uVar25 = (int)pplVar32 + 1;
              pplVar24 = pplVar24 + 2;
              pplVar32 = (longlong **)(ulonglong)uVar25;
            } while ((int)uVar25 < (int)local_988);
            plVar29 = local_9b0;
            plVar13 = local_950;
            iVar10 = (int)local_920;
          }
          iVar8 = 0;
          ppplVar20 = local_730;
          iVar7 = local_974;
          if (0 < local_728) {
            do {
              if ((&local_938 == ppplVar20) ||
                 (((iVar7 == *(int *)(ppplVar20 + 2) && (iVar10 == *(int *)(ppplVar20 + 1))) &&
                  (iVar11 = _guard_xfg_dispatch_icall_nop(_Buf1,*ppplVar20,(longlong)iVar10),
                  iVar7 = local_974, iVar11 == 0)))) {
                TArray<FVulkanDescriptorSetsLayoutInfo::FSetLayout,FDefaultAllocator>::RemoveAtImpl
                          ();
                break;
              }
              iVar8 = iVar8 + 1;
              ppplVar20 = ppplVar20 + 3;
            } while (iVar8 < local_728);
          }
          if (_Buf1 != (longlong **)0x0) {
            FMemory::Free();
          }
          plVar13 = plVar13 + 3;
        } while (plVar13 != plVar29);
        plVar12 = (longlong *)(local_980 & 0xffffffff);
        plVar21 = local_970;
        local_950 = plVar13;
      }
      cVar6 = local_9b8;
      uVar25 = (uint)plVar12;
      while (uVar25 != 0) {
        if (*plVar21 != 0) {
          FMemory::Free();
        }
        plVar21 = plVar21 + 3;
        uVar25 = (int)plVar12 - 1;
        plVar12 = (longlong *)(ulonglong)uVar25;
      }
      local_980 = local_980 & 0xffffffff00000000;
      uVar23 = local_968 >> 0x20;
      local_968 = local_968 & 0xffffffff00000000;
      if ((int)uVar23 == 0) {
LAB_141e7ec20:
        puVar19 = (undefined2 *)0x0;
        if (local_978 != 0) goto LAB_141e7ef7c;
        uVar23 = local_910;
        if (cVar6 == '\0') {
LAB_141e7ef77:
          bVar33 = true;
        }
        else {
          iVar7 = 0;
          plVar12 = local_990 + (longlong)(int)local_988 * 2;
          local_960 = (undefined2 *)0x0;
          local_958 = local_958 & 0xffffffff;
          puVar31 = puVar19;
          plVar13 = local_990;
          local_950 = plVar12;
          if (local_990 != plVar12) {
            do {
              piVar18 = (int *)0x0;
              local_918 = (int)plVar13[1];
              lVar22 = (longlong)local_918;
              pvVar2 = (void *)*plVar13;
              local_920 = (int *)0x0;
              if (local_918 == 0) {
                local_914 = 0;
                iVar7 = 0;
              }
              else {
                TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_920,local_918,0);
                piVar18 = local_920;
                _guard_xfg_dispatch_icall_nop(local_920,pvVar2,lVar22 * 2);
                iVar7 = local_918;
              }
              if (1 < iVar7) {
                local_9b0 = (longlong *)0x0;
                local_9c8 = 2 - (uint)(iVar7 != 0);
                TArray<wchar_t,FDefaultAllocator>::CopyToEmpty<wchar_t>(&local_9b0,piVar18,iVar7,0);
                iVar10 = (uint)local_9a8;
                lVar22 = (longlong)(int)(uint)local_9a8;
                iVar7 = (2 - (uint)((uint)local_9a8 != 0)) + (uint)local_9a8;
                local_9a8 = CONCAT44(local_9a8._4_4_,iVar7);
                if (local_9a8._4_4_ < iVar7) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_9b0);
                  iVar7 = (uint)local_9a8;
                }
                plVar29 = local_9b0;
                local_9b0 = (longlong *)0x0;
                local_9a8 = 0;
                puVar1 = (undefined2 *)((longlong)plVar29 + (lVar22 - (ulonglong)(iVar10 != 0)) * 2)
                ;
                *puVar1 = 10;
                puVar1[1] = 0;
                if ((iVar7 != 0) && (iVar7 + -1 != 0)) {
                  iVar10 = (int)puVar19;
                  uVar25 = (uint)(iVar10 == 0) + iVar10 + iVar7 + -1;
                  local_958 = CONCAT44(local_958._4_4_,uVar25);
                  if (local_958._4_4_ < (int)uVar25) {
                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_960,puVar19);
                    puVar31 = local_960;
                    uVar25 = (uint)local_958;
                  }
                  puVar19 = (undefined2 *)(ulonglong)uVar25;
                  _guard_xfg_dispatch_icall_nop
                            (puVar31 + ((longlong)iVar10 - (ulonglong)(iVar10 != 0)),plVar29,
                             (longlong)iVar7 * 2 - 2);
                  (puVar31 + ((longlong)iVar10 - (ulonglong)(iVar10 != 0)))[(longlong)iVar7 + -1] =
                       0;
                }
                plVar12 = local_950;
                if (plVar29 != (longlong *)0x0) {
                  FMemory::Free();
                  plVar12 = local_950;
                }
              }
              iVar7 = (int)puVar19;
              if (piVar18 != (int *)0x0) {
                FMemory::Free();
              }
              plVar13 = plVar13 + 2;
            } while (plVar13 != plVar12);
          }
          local_938 = (longlong **)0x0;
          local_930 = (int *)0x0;
          local_950 = (longlong *)0x0;
          FArchive::FArchive(local_8b8);
          local_8b8[0] = &PTR_FUN_143f4a100;
          local_820 = &local_938;
          local_828 = 0;
          local_818 = local_950;
          FArchive::SetIsSaving(local_8b8,1);
          FArchive::SetIsPersistent(local_8b8,0);
          FUN_141e8e180(local_8b8,&local_768);
          local_960 = (undefined2 *)0x0;
          local_958 = local_958 & 0xffffffff;
          puVar19 = &DAT_143f3eda8;
          if (iVar7 != 0) {
            puVar19 = puVar31;
          }
          TStringConversion<TStringConvert<wchar_t,char>,128>::
          TStringConversion<TStringConvert<wchar_t,char>,128>(local_648,puVar19);
          lVar22 = -1;
          do {
            lVar26 = lVar22 + 1;
            lVar22 = lVar22 + 1;
          } while (*(char *)((longlong)local_5c0 + lVar26) != '\0');
          iVar10 = (int)lVar22 + 1;
          if (local_5c8 != 0) {
            FMemory::Free();
          }
          puVar19 = &DAT_143f3eda8;
          if (iVar7 != 0) {
            puVar19 = puVar31;
          }
          TStringConversion<TStringConvert<wchar_t,char>,128>::
          TStringConversion<TStringConvert<wchar_t,char>,128>(local_648,puVar19);
          local_958 = CONCAT44(local_958._4_4_,iVar10);
          puVar19 = (undefined2 *)0x0;
          iVar7 = iVar10;
          if (0 < iVar10) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_960,0);
            puVar19 = local_960;
            iVar7 = (uint)local_958;
          }
          _guard_xfg_dispatch_icall_nop(puVar19,local_5c0,(longlong)iVar10);
          if (local_5c8 != 0) {
            FMemory::Free();
          }
          FMemoryWriter::Serialize(local_8b8,puVar19,(longlong)iVar7);
          puVar14 = (undefined8 *)FUN_141e868e0(&local_938,0);
          uVar23 = local_910;
          if (puVar14 != (undefined8 *)0x0) {
            *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
          }
          FOpenGLShaderBindings::operator=(local_910,local_760);
          *(undefined4 *)(uVar23 + 0xc4) = *(undefined4 *)(puVar14 + 2);
          piVar18 = (int *)(puVar14 + 1);
          *piVar18 = *piVar18 + -1;
          if (*piVar18 == 0) {
            (**(code **)*puVar14)(puVar14,1);
          }
          if (puVar19 != (undefined2 *)0x0) {
            FMemory::Free(puVar19);
          }
          FArchive::~FArchive(local_8b8);
          if (local_938 != (longlong **)0x0) {
            FMemory::Free();
          }
          if (puVar31 == (undefined2 *)0x0) goto LAB_141e7ef77;
          FMemory::Free(puVar31);
          bVar33 = true;
        }
      }
      else {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                  ();
        local_980 = CONCAT44(local_980._4_4_,(int)local_968);
        if ((int)local_968 == 0) goto LAB_141e7ec20;
LAB_141e7ef7c:
        bVar33 = false;
        uVar23 = local_910;
      }
      if (local_908 != (undefined1 *)0x0) {
        FMemory::Free();
      }
      plVar12 = local_990;
      for (iVar7 = (int)local_988; iVar7 != 0; iVar7 = iVar7 + -1) {
        if (*plVar12 != 0) {
          FMemory::Free();
        }
        plVar12 = plVar12 + 2;
      }
      if (local_990 != (longlong *)0x0) {
        FMemory::Free(local_990);
      }
      if (local_6a0[0] != 0) {
        FMemory::Free();
      }
      if (local_6b0 != 0) {
        FMemory::Free();
      }
      FOpenGLShaderBindings::~FOpenGLShaderBindings(local_760);
      if (bVar33) goto LAB_141e7f03d;
    }
    GetShaderStageSource<TOpenGLShader<FRefCountedObject,35632,3>_>(&local_938,local_940);
    GetShaderStageSource<TOpenGLShader<FRefCountedObject,35632,3>_>(&local_908,local_8d8);
    if (local_908 != (undefined1 *)0x0) {
      FMemory::Free();
    }
    if (local_938 != (longlong **)0x0) {
      FMemory::Free();
    }
  }
LAB_141e7f03d:
  uVar15 = FUN_141e9bc10();
  local_908 = local_4f8;
  local_900 = uVar23;
  FUN_141e8ac70(uVar15,&local_974,&local_908,0);
  plVar13 = local_970;
  plVar12 = local_970;
  for (iVar7 = (int)local_980; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    plVar12 = plVar12 + 3;
  }
  iVar7 = local_978;
  plVar12 = local_8e8;
  plVar29 = local_8e8;
  if (plVar13 != (longlong *)0x0) {
    FMemory::Free(plVar13);
    iVar7 = local_978;
    plVar12 = local_8e8;
    plVar29 = local_8e8;
  }
  for (; plVar13 = local_8e8, iVar7 != 0; iVar7 = iVar7 + -1) {
    local_8e8 = plVar29;
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    plVar12 = plVar12 + 3;
    plVar29 = local_8e8;
    local_8e8 = plVar13;
  }
  bVar33 = local_8e8 != (longlong *)0x0;
  iVar7 = local_9b4;
  plVar12 = local_9a0;
  plVar21 = local_9a0;
  local_8e8 = plVar29;
  if (bVar33) {
    FMemory::Free(plVar13);
    iVar7 = local_9b4;
    plVar12 = local_9a0;
    plVar21 = local_9a0;
  }
  for (; plVar13 = local_9a0, iVar7 != 0; iVar7 = iVar7 + -1) {
    local_9a0 = plVar21;
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    plVar12 = plVar12 + 2;
    plVar21 = local_9a0;
    local_9a0 = plVar13;
  }
  bVar33 = local_9a0 != (longlong *)0x0;
  local_9a0 = plVar21;
  if (bVar33) {
    FMemory::Free(plVar13);
  }
  local_770 = 0;
  if (local_778 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_7b8);
  local_7c0 = 0;
  if (local_7c8 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_808);
  param_3 = local_8c8;
  param_1 = local_8d0;
LAB_141e7f153:
  puVar28 = local_48;
  lVar22 = 6;
  do {
    puVar28 = puVar28 + -0x19;
    FOpenGLShaderBindings::~FOpenGLShaderBindings(puVar28);
    lVar22 = lVar22 + -1;
  } while (lVar22 != 0);
LAB_141e7f195:
  FOpenGLShaderBindings::operator=(param_1,local_5a8);
  *(undefined4 *)(param_1 + 0xc4) = local_8f0;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *(undefined4 *)(param_1 + 0xb0) = *param_3;
  *(undefined4 *)(param_1 + 0xb4) = uVar3;
  *(undefined4 *)(param_1 + 0xb8) = uVar4;
  *(undefined4 *)(param_1 + 0xbc) = uVar5;
  *(undefined4 *)(param_1 + 0xc0) = param_3[4];
  FOpenGLShaderBindings::~FOpenGLShaderBindings(local_5a8);
  return;
}



// FUNCTION 141e7f200 FUN_141e7f200 body=5171 status=ok
// SIG undefined FUN_141e7f200(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000141e7fa7a) */
/* WARNING: Removing unreachable block (ram,0x000141e7f7ff) */

void FUN_141e7f200(longlong param_1,longlong param_2,undefined4 *param_3,ulonglong param_4,
                  longlong param_5)

{
  undefined2 *puVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined1 *puVar16;
  char *pcVar17;
  int *piVar18;
  undefined2 *puVar19;
  size_t _Size;
  longlong ***ppplVar20;
  longlong *plVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong **pplVar24;
  uint uVar25;
  longlong lVar26;
  longlong **_Buf1;
  ulonglong *puVar28;
  longlong *plVar29;
  int *piVar30;
  undefined2 *puVar31;
  longlong **pplVar32;
  bool bVar33;
  undefined1 auStack_9e8 [32];
  int local_9c8;
  undefined4 local_9c0;
  char local_9b8;
  int local_9b4;
  longlong *local_9b0;
  undefined8 local_9a8;
  longlong *local_9a0;
  int local_998;
  int local_994;
  longlong *local_990;
  undefined8 local_988;
  ulonglong local_980;
  int local_978;
  int local_974;
  longlong *local_970;
  undefined8 local_968;
  undefined2 *local_960;
  undefined8 local_958;
  longlong *local_950;
  undefined8 local_948;
  longlong local_940;
  longlong **local_938;
  int *local_930;
  int *local_920;
  int local_918;
  undefined4 local_914;
  ulonglong local_910;
  undefined1 *local_908;
  ulonglong local_900;
  undefined4 local_8f0;
  longlong *local_8e8;
  int local_8e0;
  int local_8dc;
  longlong local_8d8;
  longlong local_8d0;
  undefined4 *local_8c8;
  undefined **local_8b8 [18];
  undefined8 local_828;
  longlong ***local_820;
  longlong *local_818;
  longlong local_808;
  undefined8 local_800;
  undefined8 local_7e8;
  undefined8 local_7e0;
  undefined4 local_7d8;
  int local_7d4;
  undefined1 local_7d0 [8];
  undefined1 *local_7c8;
  int local_7c0;
  longlong local_7b8;
  undefined8 local_7b0;
  undefined8 local_798;
  undefined8 local_790;
  undefined4 local_788;
  int local_784;
  undefined1 local_780 [8];
  undefined1 *local_778;
  int local_770;
  undefined4 local_768;
  undefined2 local_764;
  undefined1 local_760 [48];
  longlong ***local_730;
  int local_728;
  longlong local_6b0;
  longlong local_6a0 [7];
  longlong local_668;
  undefined1 local_648 [128];
  longlong local_5c8;
  void *local_5c0;
  undefined1 local_5a8 [32];
  longlong local_588;
  uint local_580;
  undefined1 local_4f8 [176];
  undefined4 local_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined4 local_438;
  undefined4 local_434;
  undefined1 local_430 [176];
  undefined4 local_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 local_370;
  undefined4 local_36c;
  ulonglong local_48 [2];
  ulonglong uVar27;
  
  local_48[0] = DAT_1468387a8 ^ (ulonglong)auStack_9e8;
  local_8f0 = *(undefined4 *)(param_2 + 0x10);
  local_940 = param_5;
  local_910 = param_4;
  local_8d8 = param_2;
  local_8d0 = param_1;
  local_8c8 = param_3;
  FOpenGLShaderBindings::FOpenGLShaderBindings(local_5a8,param_2 + 0x18);
  if (DAT_146ab3550 == '\0') goto LAB_141e805d5;
  FUN_141e8d1f0(local_4f8);
  FOpenGLShaderBindings::operator=(local_4f8,param_4);
  local_438 = *(undefined4 *)(param_4 + 0xc0);
  local_448 = *(undefined4 *)(param_4 + 0xb0);
  uStack_444 = *(undefined4 *)(param_4 + 0xb4);
  uStack_440 = *(undefined4 *)(param_4 + 0xb8);
  uStack_43c = *(undefined4 *)(param_4 + 0xbc);
  local_434 = *(undefined4 *)(param_4 + 0xc4);
  FOpenGLShaderBindings::operator=(local_430,param_1);
  local_370 = *(undefined4 *)(param_1 + 0xc0);
  local_380 = *(undefined4 *)(param_1 + 0xb0);
  uStack_37c = *(undefined4 *)(param_1 + 0xb4);
  uStack_378 = *(undefined4 *)(param_1 + 0xb8);
  uStack_374 = *(undefined4 *)(param_1 + 0xbc);
  local_36c = *(undefined4 *)(param_1 + 0xc4);
  plVar12 = (longlong *)FUN_141e9bc10();
  if ((int)plVar12[1] != *(int *)((longlong)plVar12 + 0x34)) {
    iVar7 = GetTypeHash(local_4f8);
    plVar13 = (longlong *)plVar12[8];
    if ((longlong *)plVar12[8] == (longlong *)0x0) {
      plVar13 = plVar12 + 7;
    }
    iVar7 = *(int *)((longlong)plVar13 + ((longlong)(int)plVar12[9] - 1U & (longlong)iVar7) * 4);
    if (iVar7 != -1) {
      lVar22 = *plVar12;
      do {
        lVar26 = (longlong)iVar7 * 0x580 + lVar22;
        cVar6 = FUN_141e8eeb0(lVar26,local_4f8);
        if (cVar6 != '\0') {
          if (iVar7 != -1) goto LAB_141e7f380;
          break;
        }
        iVar7 = *(int *)(lVar26 + 0x578);
      } while (iVar7 != -1);
    }
  }
  lVar26 = 0;
LAB_141e7f380:
  lVar22 = lVar26 + 0x4b0;
  if (lVar26 == 0) {
    lVar22 = 0;
  }
  if (lVar22 == 0) {
    iVar7 = *(int *)(param_5 + 0x50);
    uVar23 = 0;
    local_808 = 0;
    local_800 = 0;
    local_7e8 = 0;
    local_7e0 = 0;
    local_7d8 = 0xffffffff;
    local_7d4 = 0;
    local_7c8 = (undefined1 *)0x0;
    local_7c0 = 0;
    if (0 < iVar7) {
      local_938 = &local_9a0;
      uVar27 = uVar23;
      do {
        local_9a0 = (longlong *)0x0;
        local_998 = *(int *)(uVar23 + 8 + *(longlong *)(param_5 + 0x48));
        _Size = (size_t)local_998;
        pvVar2 = *(void **)(uVar23 + *(longlong *)(param_5 + 0x48));
        if (local_998 == 0) {
          local_994 = 0;
        }
        else {
          TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_9a0,local_998,0);
          _guard_xfg_dispatch_icall_nop(local_9a0,pvVar2,_Size);
        }
        if ((3 < local_998) &&
           ((iVar7 = strncmp((char *)local_9a0,"out_",4), iVar7 == 0 ||
            (iVar7 = strncmp((char *)local_9a0,"var_",4), iVar7 == 0)))) {
          if (local_998 + -4 != 0) {
            _guard_xfg_dispatch_icall_nop
                      (local_9a0,(char *)((longlong)local_9a0 + 4),(longlong)(local_998 + -4));
          }
          local_998 = local_998 + -4;
          TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(&local_9a0);
        }
        local_930 = (int *)(*(longlong *)(param_5 + 0x48) + ((longlong)(int)uVar27 * 3 + 2) * 8);
        FUN_141e8a390(&local_808,&local_974,&local_938,0);
        if (local_9a0 != (longlong *)0x0) {
          FMemory::Free();
        }
        iVar7 = *(int *)(param_5 + 0x50);
        uVar25 = (int)uVar27 + 1;
        uVar27 = (ulonglong)uVar25;
        uVar23 = uVar23 + 0x18;
      } while ((int)uVar25 < iVar7);
    }
    local_9b8 = '\x01';
    local_7b8 = 0;
    local_7b0 = 0;
    local_798 = 0;
    local_790 = 0;
    local_788 = 0xffffffff;
    local_784 = 0;
    local_778 = (undefined1 *)0x0;
    local_770 = 0;
    local_9a0 = (longlong *)0x0;
    local_9b4 = 0;
    local_994 = 0;
    local_8e8 = (longlong *)0x0;
    local_978 = 0;
    local_8dc = 0;
    if (0 < (int)local_580) {
      local_938 = &local_9b0;
      piVar30 = (int *)(local_588 + 0x10);
      piVar18 = piVar30;
      local_980 = (ulonglong)local_580;
LAB_141e7f5c0:
      iVar10 = local_994;
      local_9b0 = (longlong *)0x0;
      iVar7 = piVar18[-2];
      pvVar2 = *(void **)(piVar18 + -4);
      local_9a8 = CONCAT44(local_9a8._4_4_,iVar7);
      local_920 = piVar30;
      if (iVar7 == 0) {
        local_9a8 = 0;
      }
      else {
        TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_9b0,iVar7,0);
        _guard_xfg_dispatch_icall_nop(local_9b0,pvVar2,(longlong)iVar7);
      }
      if ((2 < (int)(uint)local_9a8) && (iVar7 = strncmp((char *)local_9b0,"in_",3), iVar7 == 0)) {
        if ((uint)local_9a8 + -3 != 0) {
          _guard_xfg_dispatch_icall_nop
                    (local_9b0,(void *)((longlong)local_9b0 + 3),
                     (longlong)(int)((uint)local_9a8 + -3));
        }
        local_9a8 = CONCAT44(local_9a8._4_4_,(uint)local_9a8 + -3);
        TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(&local_9b0);
      }
      if ((3 < (int)(uint)local_9a8) && (iVar7 = strncmp((char *)local_9b0,"var_",4), iVar7 == 0)) {
        if ((uint)local_9a8 + -4 != 0) {
          _guard_xfg_dispatch_icall_nop
                    (local_9b0,(void *)((longlong)local_9b0 + 4),
                     (longlong)(int)((uint)local_9a8 + -4));
        }
        local_9a8 = CONCAT44(local_9a8._4_4_,(uint)local_9a8 + -4);
        TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(&local_9b0);
      }
      local_930 = piVar30;
      FUN_141e8a390(&local_7b8,&local_974,&local_938,0);
      if ((int)local_800 != local_7d4) {
        uVar25 = FCrc::MemCrc32(local_9b0,local_9a8 & 0xffffffff,0);
        lVar22 = local_808;
        uVar23 = local_9a8;
        plVar12 = local_9b0;
        puVar16 = local_7d0;
        if (local_7c8 != (undefined1 *)0x0) {
          puVar16 = local_7c8;
        }
        iVar7 = *(int *)(puVar16 + (longlong)(int)(local_7c0 - 1U & uVar25) * 4);
        if (iVar7 != -1) {
          uVar25 = (uint)local_9a8;
          do {
            lVar26 = (longlong)iVar7 * 0x20;
            uVar9 = *(uint *)(lVar26 + 8 + lVar22);
            if ((uVar9 == uVar25) &&
               (iVar8 = _guard_xfg_dispatch_icall_nop
                                  (*(void **)(lVar26 + lVar22),plVar12,(longlong)(int)uVar9),
               iVar8 == 0)) {
              if (iVar7 != -1) {
                if ((int)local_800 == local_7d4) goto LAB_141e7f8d1;
                uVar9 = FCrc::MemCrc32(plVar12,uVar23 & 0xffffffff,0);
                lVar22 = local_808;
                plVar12 = local_9b0;
                uVar25 = (uint)local_9a8;
                puVar16 = local_7d0;
                if (local_7c8 != (undefined1 *)0x0) {
                  puVar16 = local_7c8;
                }
                iVar7 = *(int *)(puVar16 + (longlong)(int)(local_7c0 - 1U & uVar9) * 4);
                goto joined_r0x000141e7f88f;
              }
              break;
            }
            iVar7 = *(int *)(lVar26 + 0x18 + lVar22);
          } while (iVar7 != -1);
        }
      }
      TStringConversion<TStringConvert<char,wchar_t>,128>::
      TStringConversion<TStringConvert<char,wchar_t>,128>(&local_768,*(undefined8 *)(piVar18 + -4));
      local_9c0 = 0x8e87;
      local_9c8 = 0x8b30;
      FString::PrintfImpl(&local_950,
                          L"Separate Shader Object Binding Error: Input %s @ %d of stage 0x%x not written by stage 0x%x"
                         );
      iVar7 = local_9b4;
      lVar22 = (longlong)local_9b4;
      local_9b4 = local_9b4 + 1;
      local_998 = local_9b4;
      if (iVar10 < local_9b4) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_9a0,iVar7);
      }
      plVar12 = local_9a0 + lVar22 * 2;
      *plVar12 = 0;
      *plVar12 = (longlong)local_950;
      *(undefined4 *)(plVar12 + 1) = (undefined4)local_948;
      *(undefined4 *)((longlong)plVar12 + 0xc) = local_948._4_4_;
      local_948 = 0;
      local_950 = (longlong *)0x0;
      local_9b4 = local_998;
      if (local_668 == 0) goto LAB_141e7f9bf;
      FMemory::Free();
      local_9b8 = '\0';
      plVar12 = local_9b0;
      goto LAB_141e7fb3a;
    }
    goto LAB_141e7fb7a;
  }
  FOpenGLShaderBindings::operator=(param_4,lVar22);
  *(undefined4 *)(param_4 + 0xc4) = *(undefined4 *)(lVar22 + 0xc4);
  goto LAB_141e80593;
joined_r0x000141e7f88f:
  if (iVar7 == -1) goto LAB_141e7f8d1;
  puVar14 = (undefined8 *)((longlong)iVar7 * 0x20 + lVar22);
  if ((*(uint *)(puVar14 + 1) == uVar25) &&
     (iVar10 = _guard_xfg_dispatch_icall_nop
                         ((void *)*puVar14,plVar12,(longlong)(int)*(uint *)(puVar14 + 1)),
     iVar10 == 0)) {
    if (iVar7 != -1) goto LAB_141e7f8d5;
    goto LAB_141e7f8d1;
  }
  iVar7 = *(int *)(puVar14 + 3);
  goto joined_r0x000141e7f88f;
LAB_141e7f8d1:
  puVar14 = (undefined8 *)0x0;
LAB_141e7f8d5:
  puVar16 = (undefined1 *)0x0;
  iVar7 = *piVar18;
  iVar10 = *(int *)(puVar14 + 2);
  if (iVar10 != iVar7) {
    if ((iVar10 < 0) || (iVar7 < 0)) {
      if (iVar7 == -1) {
        TStringConversion<TStringConvert<char,wchar_t>,128>::
        TStringConversion<TStringConvert<char,wchar_t>,128>
                  (&local_768,*(undefined8 *)(piVar18 + -4));
        local_9c0 = *(undefined4 *)(puVar14 + 2);
        local_9c8 = 0x8e87;
        FString::PrintfImpl(&local_990,
                            L"Separate Shader Object Binding Error: Input %s of stage 0x%x written by stage 0x%x at location %d, can\'t be rewritten."
                           );
        iVar7 = local_9b4;
        lVar22 = (longlong)local_9b4;
        local_9b4 = local_9b4 + 1;
        local_998 = local_9b4;
        if (local_994 < local_9b4) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_9a0,iVar7);
        }
        plVar12 = local_9a0 + lVar22 * 2;
        *plVar12 = 0;
        *plVar12 = (longlong)local_990;
        local_990 = (longlong *)0x0;
        *(int *)(plVar12 + 1) = (int)local_988;
        *(undefined4 *)((longlong)plVar12 + 0xc) = local_988._4_4_;
        local_988 = 0;
      }
      else {
        TStringConversion<TStringConvert<char,wchar_t>,128>::
        TStringConversion<TStringConvert<char,wchar_t>,128>
                  (&local_768,*(undefined8 *)(piVar18 + -4));
        local_9c0 = 0x8e87;
        local_9c8 = 0x8b30;
        FString::PrintfImpl(&local_970,
                            L"Separate Shader Object Binding Error: Input %s @ %d of stage 0x%x written by stage 0x%x without location, can\'t be rewritten."
                           );
        iVar7 = local_9b4;
        lVar22 = (longlong)local_9b4;
        local_9b4 = local_9b4 + 1;
        local_998 = local_9b4;
        if (local_994 < local_9b4) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_9a0,iVar7);
        }
        plVar12 = local_9a0 + lVar22 * 2;
        *plVar12 = 0;
        *plVar12 = (longlong)local_970;
        local_970 = (longlong *)0x0;
        *(int *)(plVar12 + 1) = (int)local_968;
        *(int *)((longlong)plVar12 + 0xc) = local_968._4_4_;
        local_968 = 0;
      }
      local_9b4 = local_998;
      if (local_668 != 0) {
        FMemory::Free();
        local_9b8 = '\0';
        plVar12 = local_9b0;
        goto LAB_141e7fb3a;
      }
    }
    else {
      local_908 = (undefined1 *)0x0;
      local_900 = (ulonglong)uVar25;
      iVar7 = 0;
      if (uVar25 != 0) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_908,uVar25,0);
        puVar16 = local_908;
        _guard_xfg_dispatch_icall_nop(local_908,plVar12,(longlong)(int)uVar25);
        iVar10 = *(int *)(puVar14 + 2);
        iVar7 = (int)local_900;
      }
      iVar11 = local_978;
      lVar22 = (longlong)local_978;
      iVar8 = *piVar18;
      local_978 = local_978 + 1;
      local_8e0 = local_978;
      if (local_8dc < local_978) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(&local_8e8,iVar11);
      }
      plVar12 = local_8e8 + lVar22 * 3;
      *plVar12 = 0;
      *(int *)(plVar12 + 1) = iVar7;
      local_978 = local_8e0;
      if (iVar7 == 0) {
        *(undefined4 *)((longlong)plVar12 + 0xc) = 0;
      }
      else {
        TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(plVar12,iVar7,0);
        _guard_xfg_dispatch_icall_nop((void *)*plVar12,puVar16,(longlong)iVar7);
      }
      *(int *)(plVar12 + 2) = iVar10;
      *(int *)((longlong)plVar12 + 0x14) = iVar8;
      if (puVar16 != (undefined1 *)0x0) {
        FMemory::Free(puVar16);
      }
    }
LAB_141e7f9bf:
    local_9b8 = '\0';
    plVar12 = local_9b0;
  }
LAB_141e7fb3a:
  if (plVar12 != (longlong *)0x0) {
    FMemory::Free(plVar12);
  }
  piVar18 = piVar18 + 6;
  piVar30 = local_920 + 6;
  local_980 = local_980 - 1;
  if (local_980 == 0) goto code_r0x000141e7fb68;
  goto LAB_141e7f5c0;
code_r0x000141e7fb68:
  iVar7 = *(int *)(local_940 + 0x50);
  local_980 = 0;
  param_5 = local_940;
  local_920 = piVar30;
LAB_141e7fb7a:
  plVar13 = (longlong *)0x0;
  local_980 = local_980 & 0xffffffff00000000;
  local_970 = (longlong *)0x0;
  local_968 = local_968 & 0xffffffff;
  plVar12 = plVar13;
  plVar29 = plVar13;
  if (0 < iVar7) {
    do {
      plVar21 = (longlong *)0x0;
      lVar22 = *(longlong *)(param_5 + 0x48);
      if (*(int *)(lVar22 + 0x10 + (longlong)plVar29) == -1) {
        pvVar2 = *(void **)(lVar22 + (longlong)plVar29);
        local_990 = (longlong *)0x0;
        iVar7 = *(int *)(lVar22 + 8 + (longlong)plVar29);
        local_988 = CONCAT44(local_988._4_4_,iVar7);
        if (iVar7 == 0) {
          local_988 = 0;
          uVar23 = 0;
        }
        else {
          TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_990,iVar7,0);
          plVar21 = local_990;
          _guard_xfg_dispatch_icall_nop(local_990,pvVar2,(longlong)iVar7);
          uVar23 = local_988 & 0xffffffff;
        }
        if ((3 < (int)uVar23) &&
           ((iVar7 = strncmp((char *)plVar21,"out_",4), iVar7 == 0 ||
            (iVar7 = strncmp((char *)plVar21,"var_",4), iVar7 == 0)))) {
          iVar7 = (int)uVar23 + -4;
          if (iVar7 != 0) {
            _guard_xfg_dispatch_icall_nop(plVar21,(void *)((longlong)plVar21 + 4),(longlong)iVar7);
          }
          local_988 = CONCAT44(local_988._4_4_,iVar7);
          TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(&local_990);
          uVar23 = local_988 & 0xffffffff;
          plVar21 = local_990;
        }
        if ((int)local_7b0 != local_784) {
          uVar25 = FCrc::MemCrc32(plVar21,uVar23);
          lVar22 = local_7b8;
          puVar16 = local_780;
          if (local_778 != (undefined1 *)0x0) {
            puVar16 = local_778;
          }
          iVar7 = *(int *)(puVar16 + (longlong)(int)(local_770 - 1U & uVar25) * 4);
          while (iVar7 != -1) {
            lVar26 = (longlong)iVar7 * 0x20;
            iVar10 = *(int *)(lVar26 + 8 + lVar22);
            if ((iVar10 == (int)uVar23) &&
               (iVar10 = _guard_xfg_dispatch_icall_nop
                                   (*(void **)(lVar26 + lVar22),plVar21,(longlong)iVar10),
               iVar10 == 0)) {
              plVar13 = local_970;
              param_5 = local_940;
              if (iVar7 != -1) goto LAB_141e7fd58;
              break;
            }
            param_5 = local_940;
            iVar7 = *(int *)(lVar26 + 0x18 + lVar22);
          }
        }
        uVar23 = local_980;
        lVar26 = (longlong)(int)local_980;
        lVar22 = *(longlong *)(param_5 + 0x48);
        iVar7 = (int)local_980 + 1;
        local_980 = CONCAT44(local_980._4_4_,iVar7);
        local_968 = CONCAT44(local_968._4_4_,iVar7);
        if (local_968._4_4_ < iVar7) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(&local_970,uVar23 & 0xffffffff);
          local_980 = CONCAT44(local_980._4_4_,(int)local_968);
        }
        plVar13 = local_970;
        FOpenGLShaderVarying::FOpenGLShaderVarying
                  (local_970 + lVar26 * 3,lVar22 + (longlong)(int)plVar12 * 0x18);
        local_9b8 = '\0';
LAB_141e7fd58:
        if (plVar21 != (longlong *)0x0) {
          FMemory::Free(plVar21);
        }
      }
      uVar25 = (int)plVar12 + 1;
      plVar12 = (longlong *)(ulonglong)uVar25;
      plVar29 = plVar29 + 3;
    } while ((int)uVar25 < *(int *)(param_5 + 0x50));
    plVar12 = (longlong *)(local_980 & 0xffffffff);
  }
  uVar23 = local_910;
  if (local_9b8 == '\0') {
    if (local_9b4 == 0) {
      FOpenGLCodeHeader::FOpenGLCodeHeader(&local_768);
      local_768 = 0x474c534c;
      local_764 = 0x4453;
      FOpenGLShaderBindings::operator=(local_760,param_5 + 0x18);
      FUN_141e8de90(local_6a0,param_5 + 200);
      local_990 = (longlong *)0x0;
      local_988 = 0;
      GetShaderStageSource<TOpenGLShader<FRefCountedObject,35632,3>_>(&local_908,param_5);
      FString::ParseIntoArrayLines(&local_908,&local_990,1);
      local_9b8 = 0 < (int)plVar12;
      plVar29 = plVar13 + (longlong)(int)plVar12 * 3;
      plVar21 = plVar13;
      local_9b0 = plVar29;
      local_950 = plVar13;
      if (plVar13 != plVar29) {
        do {
          iVar7 = (int)plVar13[1];
          pplVar24 = (longlong **)0x0;
          pvVar2 = (void *)*plVar13;
          local_938 = (longlong **)0x0;
          local_920 = (int *)CONCAT44(local_920._4_4_,iVar7);
          local_930 = (int *)CONCAT44(local_930._4_4_,iVar7);
          _Buf1 = pplVar24;
          iVar10 = 0;
          local_950 = plVar13;
          if (iVar7 != 0) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_938,iVar7,0);
            _Buf1 = local_938;
            _guard_xfg_dispatch_icall_nop(local_938,pvVar2,(longlong)iVar7);
            local_920 = (int *)CONCAT44(local_920._4_4_,(int)local_930);
            iVar10 = (int)local_930;
          }
          local_974 = (int)plVar13[2];
          pplVar32 = pplVar24;
          if (0 < (int)local_988) {
            do {
              puVar19 = (undefined2 *)0x0;
              local_958 = 0;
              local_960 = (undefined2 *)0x0;
              if ((_Buf1 != (longlong **)0x0) && (*(char *)_Buf1 != '\0')) {
                lVar22 = -1;
                do {
                  lVar26 = lVar22 + 1;
                  lVar22 = lVar22 + 1;
                } while (*(char *)((longlong)_Buf1 + lVar26) != '\0');
                uVar25 = (int)lVar22 + 1;
                local_958 = (ulonglong)uVar25;
                if (0 < (int)uVar25) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_960,0);
                }
                puVar19 = local_960;
                local_9c8 = CONCAT22(local_9c8._2_2_,0x3f);
                FGenericPlatformString::Convert<char,wchar_t>(local_960,uVar25,_Buf1);
              }
              local_9c8 = -1;
              iVar7 = FUN_141592950();
              if (puVar19 != (undefined2 *)0x0) {
                FMemory::Free();
              }
              if ((iVar7 != -1) &&
                 (pcVar17 = (char *)((longlong)local_990 + (longlong)pplVar24), pcVar17[8] = '\0',
                 pcVar17[9] = '\0', pcVar17[10] = '\0', pcVar17[0xb] = '\0',
                 *(int *)(pcVar17 + 0xc) != 0)) {
                TArray<wchar_t,FDefaultAllocator>::ResizeTo();
              }
              uVar25 = (int)pplVar32 + 1;
              pplVar24 = pplVar24 + 2;
              pplVar32 = (longlong **)(ulonglong)uVar25;
            } while ((int)uVar25 < (int)local_988);
            plVar29 = local_9b0;
            plVar13 = local_950;
            iVar10 = (int)local_920;
          }
          iVar8 = 0;
          ppplVar20 = local_730;
          iVar7 = local_974;
          if (0 < local_728) {
            do {
              if ((&local_938 == ppplVar20) ||
                 (((iVar7 == *(int *)(ppplVar20 + 2) && (iVar10 == *(int *)(ppplVar20 + 1))) &&
                  (iVar11 = _guard_xfg_dispatch_icall_nop(_Buf1,*ppplVar20,(longlong)iVar10),
                  iVar7 = local_974, iVar11 == 0)))) {
                TArray<FVulkanDescriptorSetsLayoutInfo::FSetLayout,FDefaultAllocator>::RemoveAtImpl
                          ();
                break;
              }
              iVar8 = iVar8 + 1;
              ppplVar20 = ppplVar20 + 3;
            } while (iVar8 < local_728);
          }
          if (_Buf1 != (longlong **)0x0) {
            FMemory::Free();
          }
          plVar13 = plVar13 + 3;
        } while (plVar13 != plVar29);
        plVar12 = (longlong *)(local_980 & 0xffffffff);
        plVar21 = local_970;
        local_950 = plVar13;
      }
      cVar6 = local_9b8;
      uVar25 = (uint)plVar12;
      while (uVar25 != 0) {
        if (*plVar21 != 0) {
          FMemory::Free();
        }
        plVar21 = plVar21 + 3;
        uVar25 = (int)plVar12 - 1;
        plVar12 = (longlong *)(ulonglong)uVar25;
      }
      local_980 = local_980 & 0xffffffff00000000;
      uVar23 = local_968 >> 0x20;
      local_968 = local_968 & 0xffffffff00000000;
      if ((int)uVar23 == 0) {
LAB_141e80060:
        puVar19 = (undefined2 *)0x0;
        if (local_978 != 0) goto LAB_141e803bc;
        uVar23 = local_910;
        if (cVar6 == '\0') {
LAB_141e803b7:
          bVar33 = true;
        }
        else {
          iVar7 = 0;
          plVar12 = local_990 + (longlong)(int)local_988 * 2;
          local_960 = (undefined2 *)0x0;
          local_958 = local_958 & 0xffffffff;
          puVar31 = puVar19;
          plVar13 = local_990;
          local_950 = plVar12;
          if (local_990 != plVar12) {
            do {
              piVar18 = (int *)0x0;
              local_918 = (int)plVar13[1];
              lVar22 = (longlong)local_918;
              pvVar2 = (void *)*plVar13;
              local_920 = (int *)0x0;
              if (local_918 == 0) {
                local_914 = 0;
                iVar7 = 0;
              }
              else {
                TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_920,local_918,0);
                piVar18 = local_920;
                _guard_xfg_dispatch_icall_nop(local_920,pvVar2,lVar22 * 2);
                iVar7 = local_918;
              }
              if (1 < iVar7) {
                local_9b0 = (longlong *)0x0;
                local_9c8 = 2 - (uint)(iVar7 != 0);
                TArray<wchar_t,FDefaultAllocator>::CopyToEmpty<wchar_t>(&local_9b0,piVar18,iVar7,0);
                iVar10 = (uint)local_9a8;
                lVar22 = (longlong)(int)(uint)local_9a8;
                iVar7 = (2 - (uint)((uint)local_9a8 != 0)) + (uint)local_9a8;
                local_9a8 = CONCAT44(local_9a8._4_4_,iVar7);
                if (local_9a8._4_4_ < iVar7) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_9b0);
                  iVar7 = (uint)local_9a8;
                }
                plVar29 = local_9b0;
                local_9b0 = (longlong *)0x0;
                local_9a8 = 0;
                puVar1 = (undefined2 *)((longlong)plVar29 + (lVar22 - (ulonglong)(iVar10 != 0)) * 2)
                ;
                *puVar1 = 10;
                puVar1[1] = 0;
                if ((iVar7 != 0) && (iVar7 + -1 != 0)) {
                  iVar10 = (int)puVar19;
                  uVar25 = (uint)(iVar10 == 0) + iVar10 + iVar7 + -1;
                  local_958 = CONCAT44(local_958._4_4_,uVar25);
                  if (local_958._4_4_ < (int)uVar25) {
                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_960,puVar19);
                    puVar31 = local_960;
                    uVar25 = (uint)local_958;
                  }
                  puVar19 = (undefined2 *)(ulonglong)uVar25;
                  _guard_xfg_dispatch_icall_nop
                            (puVar31 + ((longlong)iVar10 - (ulonglong)(iVar10 != 0)),plVar29,
                             (longlong)iVar7 * 2 - 2);
                  (puVar31 + ((longlong)iVar10 - (ulonglong)(iVar10 != 0)))[(longlong)iVar7 + -1] =
                       0;
                }
                plVar12 = local_950;
                if (plVar29 != (longlong *)0x0) {
                  FMemory::Free();
                  plVar12 = local_950;
                }
              }
              iVar7 = (int)puVar19;
              if (piVar18 != (int *)0x0) {
                FMemory::Free();
              }
              plVar13 = plVar13 + 2;
            } while (plVar13 != plVar12);
          }
          local_938 = (longlong **)0x0;
          local_930 = (int *)0x0;
          local_950 = (longlong *)0x0;
          FArchive::FArchive(local_8b8);
          local_8b8[0] = &PTR_FUN_143f4a100;
          local_820 = &local_938;
          local_828 = 0;
          local_818 = local_950;
          FArchive::SetIsSaving(local_8b8,1);
          FArchive::SetIsPersistent(local_8b8,0);
          FUN_141e8e180(local_8b8,&local_768);
          local_960 = (undefined2 *)0x0;
          local_958 = local_958 & 0xffffffff;
          puVar19 = &DAT_143f3eda8;
          if (iVar7 != 0) {
            puVar19 = puVar31;
          }
          TStringConversion<TStringConvert<wchar_t,char>,128>::
          TStringConversion<TStringConvert<wchar_t,char>,128>(local_648,puVar19);
          lVar22 = -1;
          do {
            lVar26 = lVar22 + 1;
            lVar22 = lVar22 + 1;
          } while (*(char *)((longlong)local_5c0 + lVar26) != '\0');
          iVar10 = (int)lVar22 + 1;
          if (local_5c8 != 0) {
            FMemory::Free();
          }
          puVar19 = &DAT_143f3eda8;
          if (iVar7 != 0) {
            puVar19 = puVar31;
          }
          TStringConversion<TStringConvert<wchar_t,char>,128>::
          TStringConversion<TStringConvert<wchar_t,char>,128>(local_648,puVar19);
          local_958 = CONCAT44(local_958._4_4_,iVar10);
          puVar19 = (undefined2 *)0x0;
          iVar7 = iVar10;
          if (0 < iVar10) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_960,0);
            puVar19 = local_960;
            iVar7 = (uint)local_958;
          }
          _guard_xfg_dispatch_icall_nop(puVar19,local_5c0,(longlong)iVar10);
          if (local_5c8 != 0) {
            FMemory::Free();
          }
          FMemoryWriter::Serialize(local_8b8,puVar19,(longlong)iVar7);
          puVar14 = (undefined8 *)FUN_141e871b0(&local_938,0);
          uVar23 = local_910;
          if (puVar14 != (undefined8 *)0x0) {
            *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
          }
          FOpenGLShaderBindings::operator=(local_910,local_760);
          *(undefined4 *)(uVar23 + 0xc4) = *(undefined4 *)(puVar14 + 2);
          piVar18 = (int *)(puVar14 + 1);
          *piVar18 = *piVar18 + -1;
          if (*piVar18 == 0) {
            (**(code **)*puVar14)(puVar14,1);
          }
          if (puVar19 != (undefined2 *)0x0) {
            FMemory::Free(puVar19);
          }
          FArchive::~FArchive(local_8b8);
          if (local_938 != (longlong **)0x0) {
            FMemory::Free();
          }
          if (puVar31 == (undefined2 *)0x0) goto LAB_141e803b7;
          FMemory::Free(puVar31);
          bVar33 = true;
        }
      }
      else {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                  ();
        local_980 = CONCAT44(local_980._4_4_,(int)local_968);
        if ((int)local_968 == 0) goto LAB_141e80060;
LAB_141e803bc:
        bVar33 = false;
        uVar23 = local_910;
      }
      if (local_908 != (undefined1 *)0x0) {
        FMemory::Free();
      }
      plVar12 = local_990;
      for (iVar7 = (int)local_988; iVar7 != 0; iVar7 = iVar7 + -1) {
        if (*plVar12 != 0) {
          FMemory::Free();
        }
        plVar12 = plVar12 + 2;
      }
      if (local_990 != (longlong *)0x0) {
        FMemory::Free(local_990);
      }
      if (local_6a0[0] != 0) {
        FMemory::Free();
      }
      if (local_6b0 != 0) {
        FMemory::Free();
      }
      FOpenGLShaderBindings::~FOpenGLShaderBindings(local_760);
      if (bVar33) goto LAB_141e8047d;
    }
    GetShaderStageSource<TOpenGLShader<FRefCountedObject,35632,3>_>(&local_938,local_940);
    GetShaderStageSource<TOpenGLShader<FRefCountedObject,35632,3>_>(&local_908,local_8d8);
    if (local_908 != (undefined1 *)0x0) {
      FMemory::Free();
    }
    if (local_938 != (longlong **)0x0) {
      FMemory::Free();
    }
  }
LAB_141e8047d:
  uVar15 = FUN_141e9bc10();
  local_908 = local_4f8;
  local_900 = uVar23;
  FUN_141e8ac70(uVar15,&local_974,&local_908,0);
  plVar13 = local_970;
  plVar12 = local_970;
  for (iVar7 = (int)local_980; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    plVar12 = plVar12 + 3;
  }
  iVar7 = local_978;
  plVar12 = local_8e8;
  plVar29 = local_8e8;
  if (plVar13 != (longlong *)0x0) {
    FMemory::Free(plVar13);
    iVar7 = local_978;
    plVar12 = local_8e8;
    plVar29 = local_8e8;
  }
  for (; plVar13 = local_8e8, iVar7 != 0; iVar7 = iVar7 + -1) {
    local_8e8 = plVar29;
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    plVar12 = plVar12 + 3;
    plVar29 = local_8e8;
    local_8e8 = plVar13;
  }
  bVar33 = local_8e8 != (longlong *)0x0;
  iVar7 = local_9b4;
  plVar12 = local_9a0;
  plVar21 = local_9a0;
  local_8e8 = plVar29;
  if (bVar33) {
    FMemory::Free(plVar13);
    iVar7 = local_9b4;
    plVar12 = local_9a0;
    plVar21 = local_9a0;
  }
  for (; plVar13 = local_9a0, iVar7 != 0; iVar7 = iVar7 + -1) {
    local_9a0 = plVar21;
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    plVar12 = plVar12 + 2;
    plVar21 = local_9a0;
    local_9a0 = plVar13;
  }
  bVar33 = local_9a0 != (longlong *)0x0;
  local_9a0 = plVar21;
  if (bVar33) {
    FMemory::Free(plVar13);
  }
  local_770 = 0;
  if (local_778 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_7b8);
  local_7c0 = 0;
  if (local_7c8 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_808);
  param_3 = local_8c8;
  param_1 = local_8d0;
LAB_141e80593:
  puVar28 = local_48;
  lVar22 = 6;
  do {
    puVar28 = puVar28 + -0x19;
    FOpenGLShaderBindings::~FOpenGLShaderBindings(puVar28);
    lVar22 = lVar22 + -1;
  } while (lVar22 != 0);
LAB_141e805d5:
  FOpenGLShaderBindings::operator=(param_1,local_5a8);
  *(undefined4 *)(param_1 + 0xc4) = local_8f0;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *(undefined4 *)(param_1 + 0xb0) = *param_3;
  *(undefined4 *)(param_1 + 0xb4) = uVar3;
  *(undefined4 *)(param_1 + 0xb8) = uVar4;
  *(undefined4 *)(param_1 + 0xbc) = uVar5;
  *(undefined4 *)(param_1 + 0xc0) = param_3[4];
  FOpenGLShaderBindings::~FOpenGLShaderBindings(local_5a8);
  return;
}



// FUNCTION 141e80640 FUN_141e80640 body=5171 status=ok
// SIG undefined FUN_141e80640(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000141e80eba) */
/* WARNING: Removing unreachable block (ram,0x000141e80c3f) */

void FUN_141e80640(longlong param_1,longlong param_2,undefined4 *param_3,ulonglong param_4,
                  longlong param_5)

{
  undefined2 *puVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined1 *puVar16;
  char *pcVar17;
  int *piVar18;
  undefined2 *puVar19;
  size_t _Size;
  longlong ***ppplVar20;
  longlong *plVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong **pplVar24;
  uint uVar25;
  longlong lVar26;
  longlong **_Buf1;
  ulonglong *puVar28;
  longlong *plVar29;
  int *piVar30;
  undefined2 *puVar31;
  longlong **pplVar32;
  bool bVar33;
  undefined1 auStack_9e8 [32];
  int local_9c8;
  undefined4 local_9c0;
  char local_9b8;
  int local_9b4;
  longlong *local_9b0;
  undefined8 local_9a8;
  longlong *local_9a0;
  int local_998;
  int local_994;
  longlong *local_990;
  undefined8 local_988;
  ulonglong local_980;
  int local_978;
  int local_974;
  longlong *local_970;
  undefined8 local_968;
  undefined2 *local_960;
  undefined8 local_958;
  longlong *local_950;
  undefined8 local_948;
  longlong local_940;
  longlong **local_938;
  int *local_930;
  int *local_920;
  int local_918;
  undefined4 local_914;
  ulonglong local_910;
  undefined1 *local_908;
  ulonglong local_900;
  undefined4 local_8f0;
  longlong *local_8e8;
  int local_8e0;
  int local_8dc;
  longlong local_8d8;
  longlong local_8d0;
  undefined4 *local_8c8;
  undefined **local_8b8 [18];
  undefined8 local_828;
  longlong ***local_820;
  longlong *local_818;
  longlong local_808;
  undefined8 local_800;
  undefined8 local_7e8;
  undefined8 local_7e0;
  undefined4 local_7d8;
  int local_7d4;
  undefined1 local_7d0 [8];
  undefined1 *local_7c8;
  int local_7c0;
  longlong local_7b8;
  undefined8 local_7b0;
  undefined8 local_798;
  undefined8 local_790;
  undefined4 local_788;
  int local_784;
  undefined1 local_780 [8];
  undefined1 *local_778;
  int local_770;
  undefined4 local_768;
  undefined2 local_764;
  undefined1 local_760 [48];
  longlong ***local_730;
  int local_728;
  longlong local_6b0;
  longlong local_6a0 [7];
  longlong local_668;
  undefined1 local_648 [128];
  longlong local_5c8;
  void *local_5c0;
  undefined1 local_5a8 [32];
  longlong local_588;
  uint local_580;
  undefined1 local_4f8 [176];
  undefined4 local_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined4 local_438;
  undefined4 local_434;
  undefined1 local_430 [176];
  undefined4 local_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 local_370;
  undefined4 local_36c;
  ulonglong local_48 [2];
  ulonglong uVar27;
  
  local_48[0] = DAT_1468387a8 ^ (ulonglong)auStack_9e8;
  local_8f0 = *(undefined4 *)(param_2 + 0x10);
  local_940 = param_5;
  local_910 = param_4;
  local_8d8 = param_2;
  local_8d0 = param_1;
  local_8c8 = param_3;
  FOpenGLShaderBindings::FOpenGLShaderBindings(local_5a8,param_2 + 0x18);
  if (DAT_146ab3550 == '\0') goto LAB_141e81a15;
  FUN_141e8d1f0(local_4f8);
  FOpenGLShaderBindings::operator=(local_4f8,param_4);
  local_438 = *(undefined4 *)(param_4 + 0xc0);
  local_448 = *(undefined4 *)(param_4 + 0xb0);
  uStack_444 = *(undefined4 *)(param_4 + 0xb4);
  uStack_440 = *(undefined4 *)(param_4 + 0xb8);
  uStack_43c = *(undefined4 *)(param_4 + 0xbc);
  local_434 = *(undefined4 *)(param_4 + 0xc4);
  FOpenGLShaderBindings::operator=(local_430,param_1);
  local_370 = *(undefined4 *)(param_1 + 0xc0);
  local_380 = *(undefined4 *)(param_1 + 0xb0);
  uStack_37c = *(undefined4 *)(param_1 + 0xb4);
  uStack_378 = *(undefined4 *)(param_1 + 0xb8);
  uStack_374 = *(undefined4 *)(param_1 + 0xbc);
  local_36c = *(undefined4 *)(param_1 + 0xc4);
  plVar12 = (longlong *)FUN_141e9bc10();
  if ((int)plVar12[1] != *(int *)((longlong)plVar12 + 0x34)) {
    iVar7 = GetTypeHash(local_4f8);
    plVar13 = (longlong *)plVar12[8];
    if ((longlong *)plVar12[8] == (longlong *)0x0) {
      plVar13 = plVar12 + 7;
    }
    iVar7 = *(int *)((longlong)plVar13 + ((longlong)(int)plVar12[9] - 1U & (longlong)iVar7) * 4);
    if (iVar7 != -1) {
      lVar22 = *plVar12;
      do {
        lVar26 = (longlong)iVar7 * 0x580 + lVar22;
        cVar6 = FUN_141e8eeb0(lVar26,local_4f8);
        if (cVar6 != '\0') {
          if (iVar7 != -1) goto LAB_141e807c0;
          break;
        }
        iVar7 = *(int *)(lVar26 + 0x578);
      } while (iVar7 != -1);
    }
  }
  lVar26 = 0;
LAB_141e807c0:
  lVar22 = lVar26 + 0x4b0;
  if (lVar26 == 0) {
    lVar22 = 0;
  }
  if (lVar22 == 0) {
    iVar7 = *(int *)(param_5 + 0x50);
    uVar23 = 0;
    local_808 = 0;
    local_800 = 0;
    local_7e8 = 0;
    local_7e0 = 0;
    local_7d8 = 0xffffffff;
    local_7d4 = 0;
    local_7c8 = (undefined1 *)0x0;
    local_7c0 = 0;
    if (0 < iVar7) {
      local_938 = &local_9a0;
      uVar27 = uVar23;
      do {
        local_9a0 = (longlong *)0x0;
        local_998 = *(int *)(uVar23 + 8 + *(longlong *)(param_5 + 0x48));
        _Size = (size_t)local_998;
        pvVar2 = *(void **)(uVar23 + *(longlong *)(param_5 + 0x48));
        if (local_998 == 0) {
          local_994 = 0;
        }
        else {
          TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_9a0,local_998,0);
          _guard_xfg_dispatch_icall_nop(local_9a0,pvVar2,_Size);
        }
        if ((3 < local_998) &&
           ((iVar7 = strncmp((char *)local_9a0,"out_",4), iVar7 == 0 ||
            (iVar7 = strncmp((char *)local_9a0,"var_",4), iVar7 == 0)))) {
          if (local_998 + -4 != 0) {
            _guard_xfg_dispatch_icall_nop
                      (local_9a0,(char *)((longlong)local_9a0 + 4),(longlong)(local_998 + -4));
          }
          local_998 = local_998 + -4;
          TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(&local_9a0);
        }
        local_930 = (int *)(*(longlong *)(param_5 + 0x48) + ((longlong)(int)uVar27 * 3 + 2) * 8);
        FUN_141e8a390(&local_808,&local_974,&local_938,0);
        if (local_9a0 != (longlong *)0x0) {
          FMemory::Free();
        }
        iVar7 = *(int *)(param_5 + 0x50);
        uVar25 = (int)uVar27 + 1;
        uVar27 = (ulonglong)uVar25;
        uVar23 = uVar23 + 0x18;
      } while ((int)uVar25 < iVar7);
    }
    local_9b8 = '\x01';
    local_7b8 = 0;
    local_7b0 = 0;
    local_798 = 0;
    local_790 = 0;
    local_788 = 0xffffffff;
    local_784 = 0;
    local_778 = (undefined1 *)0x0;
    local_770 = 0;
    local_9a0 = (longlong *)0x0;
    local_9b4 = 0;
    local_994 = 0;
    local_8e8 = (longlong *)0x0;
    local_978 = 0;
    local_8dc = 0;
    if (0 < (int)local_580) {
      local_938 = &local_9b0;
      piVar30 = (int *)(local_588 + 0x10);
      piVar18 = piVar30;
      local_980 = (ulonglong)local_580;
LAB_141e80a00:
      iVar10 = local_994;
      local_9b0 = (longlong *)0x0;
      iVar7 = piVar18[-2];
      pvVar2 = *(void **)(piVar18 + -4);
      local_9a8 = CONCAT44(local_9a8._4_4_,iVar7);
      local_920 = piVar30;
      if (iVar7 == 0) {
        local_9a8 = 0;
      }
      else {
        TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_9b0,iVar7,0);
        _guard_xfg_dispatch_icall_nop(local_9b0,pvVar2,(longlong)iVar7);
      }
      if ((2 < (int)(uint)local_9a8) && (iVar7 = strncmp((char *)local_9b0,"in_",3), iVar7 == 0)) {
        if ((uint)local_9a8 + -3 != 0) {
          _guard_xfg_dispatch_icall_nop
                    (local_9b0,(void *)((longlong)local_9b0 + 3),
                     (longlong)(int)((uint)local_9a8 + -3));
        }
        local_9a8 = CONCAT44(local_9a8._4_4_,(uint)local_9a8 + -3);
        TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(&local_9b0);
      }
      if ((3 < (int)(uint)local_9a8) && (iVar7 = strncmp((char *)local_9b0,"var_",4), iVar7 == 0)) {
        if ((uint)local_9a8 + -4 != 0) {
          _guard_xfg_dispatch_icall_nop
                    (local_9b0,(void *)((longlong)local_9b0 + 4),
                     (longlong)(int)((uint)local_9a8 + -4));
        }
        local_9a8 = CONCAT44(local_9a8._4_4_,(uint)local_9a8 + -4);
        TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(&local_9b0);
      }
      local_930 = piVar30;
      FUN_141e8a390(&local_7b8,&local_974,&local_938,0);
      if ((int)local_800 != local_7d4) {
        uVar25 = FCrc::MemCrc32(local_9b0,local_9a8 & 0xffffffff,0);
        lVar22 = local_808;
        uVar23 = local_9a8;
        plVar12 = local_9b0;
        puVar16 = local_7d0;
        if (local_7c8 != (undefined1 *)0x0) {
          puVar16 = local_7c8;
        }
        iVar7 = *(int *)(puVar16 + (longlong)(int)(local_7c0 - 1U & uVar25) * 4);
        if (iVar7 != -1) {
          uVar25 = (uint)local_9a8;
          do {
            lVar26 = (longlong)iVar7 * 0x20;
            uVar9 = *(uint *)(lVar26 + 8 + lVar22);
            if ((uVar9 == uVar25) &&
               (iVar8 = _guard_xfg_dispatch_icall_nop
                                  (*(void **)(lVar26 + lVar22),plVar12,(longlong)(int)uVar9),
               iVar8 == 0)) {
              if (iVar7 != -1) {
                if ((int)local_800 == local_7d4) goto LAB_141e80d11;
                uVar9 = FCrc::MemCrc32(plVar12,uVar23 & 0xffffffff,0);
                lVar22 = local_808;
                plVar12 = local_9b0;
                uVar25 = (uint)local_9a8;
                puVar16 = local_7d0;
                if (local_7c8 != (undefined1 *)0x0) {
                  puVar16 = local_7c8;
                }
                iVar7 = *(int *)(puVar16 + (longlong)(int)(local_7c0 - 1U & uVar9) * 4);
                goto joined_r0x000141e80ccf;
              }
              break;
            }
            iVar7 = *(int *)(lVar26 + 0x18 + lVar22);
          } while (iVar7 != -1);
        }
      }
      TStringConversion<TStringConvert<char,wchar_t>,128>::
      TStringConversion<TStringConvert<char,wchar_t>,128>(&local_768,*(undefined8 *)(piVar18 + -4));
      local_9c0 = 0x8b31;
      local_9c8 = 0x8dd9;
      FString::PrintfImpl(&local_950,
                          L"Separate Shader Object Binding Error: Input %s @ %d of stage 0x%x not written by stage 0x%x"
                         );
      iVar7 = local_9b4;
      lVar22 = (longlong)local_9b4;
      local_9b4 = local_9b4 + 1;
      local_998 = local_9b4;
      if (iVar10 < local_9b4) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_9a0,iVar7);
      }
      plVar12 = local_9a0 + lVar22 * 2;
      *plVar12 = 0;
      *plVar12 = (longlong)local_950;
      *(undefined4 *)(plVar12 + 1) = (undefined4)local_948;
      *(undefined4 *)((longlong)plVar12 + 0xc) = local_948._4_4_;
      local_948 = 0;
      local_950 = (longlong *)0x0;
      local_9b4 = local_998;
      if (local_668 == 0) goto LAB_141e80dff;
      FMemory::Free();
      local_9b8 = '\0';
      plVar12 = local_9b0;
      goto LAB_141e80f7a;
    }
    goto LAB_141e80fba;
  }
  FOpenGLShaderBindings::operator=(param_4,lVar22);
  *(undefined4 *)(param_4 + 0xc4) = *(undefined4 *)(lVar22 + 0xc4);
  goto LAB_141e819d3;
joined_r0x000141e80ccf:
  if (iVar7 == -1) goto LAB_141e80d11;
  puVar14 = (undefined8 *)((longlong)iVar7 * 0x20 + lVar22);
  if ((*(uint *)(puVar14 + 1) == uVar25) &&
     (iVar10 = _guard_xfg_dispatch_icall_nop
                         ((void *)*puVar14,plVar12,(longlong)(int)*(uint *)(puVar14 + 1)),
     iVar10 == 0)) {
    if (iVar7 != -1) goto LAB_141e80d15;
    goto LAB_141e80d11;
  }
  iVar7 = *(int *)(puVar14 + 3);
  goto joined_r0x000141e80ccf;
LAB_141e80d11:
  puVar14 = (undefined8 *)0x0;
LAB_141e80d15:
  puVar16 = (undefined1 *)0x0;
  iVar7 = *piVar18;
  iVar10 = *(int *)(puVar14 + 2);
  if (iVar10 != iVar7) {
    if ((iVar10 < 0) || (iVar7 < 0)) {
      if (iVar7 == -1) {
        TStringConversion<TStringConvert<char,wchar_t>,128>::
        TStringConversion<TStringConvert<char,wchar_t>,128>
                  (&local_768,*(undefined8 *)(piVar18 + -4));
        local_9c0 = *(undefined4 *)(puVar14 + 2);
        local_9c8 = 0x8b31;
        FString::PrintfImpl(&local_990,
                            L"Separate Shader Object Binding Error: Input %s of stage 0x%x written by stage 0x%x at location %d, can\'t be rewritten."
                           );
        iVar7 = local_9b4;
        lVar22 = (longlong)local_9b4;
        local_9b4 = local_9b4 + 1;
        local_998 = local_9b4;
        if (local_994 < local_9b4) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_9a0,iVar7);
        }
        plVar12 = local_9a0 + lVar22 * 2;
        *plVar12 = 0;
        *plVar12 = (longlong)local_990;
        local_990 = (longlong *)0x0;
        *(int *)(plVar12 + 1) = (int)local_988;
        *(undefined4 *)((longlong)plVar12 + 0xc) = local_988._4_4_;
        local_988 = 0;
      }
      else {
        TStringConversion<TStringConvert<char,wchar_t>,128>::
        TStringConversion<TStringConvert<char,wchar_t>,128>
                  (&local_768,*(undefined8 *)(piVar18 + -4));
        local_9c0 = 0x8b31;
        local_9c8 = 0x8dd9;
        FString::PrintfImpl(&local_970,
                            L"Separate Shader Object Binding Error: Input %s @ %d of stage 0x%x written by stage 0x%x without location, can\'t be rewritten."
                           );
        iVar7 = local_9b4;
        lVar22 = (longlong)local_9b4;
        local_9b4 = local_9b4 + 1;
        local_998 = local_9b4;
        if (local_994 < local_9b4) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_9a0,iVar7);
        }
        plVar12 = local_9a0 + lVar22 * 2;
        *plVar12 = 0;
        *plVar12 = (longlong)local_970;
        local_970 = (longlong *)0x0;
        *(int *)(plVar12 + 1) = (int)local_968;
        *(int *)((longlong)plVar12 + 0xc) = local_968._4_4_;
        local_968 = 0;
      }
      local_9b4 = local_998;
      if (local_668 != 0) {
        FMemory::Free();
        local_9b8 = '\0';
        plVar12 = local_9b0;
        goto LAB_141e80f7a;
      }
    }
    else {
      local_908 = (undefined1 *)0x0;
      local_900 = (ulonglong)uVar25;
      iVar7 = 0;
      if (uVar25 != 0) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_908,uVar25,0);
        puVar16 = local_908;
        _guard_xfg_dispatch_icall_nop(local_908,plVar12,(longlong)(int)uVar25);
        iVar10 = *(int *)(puVar14 + 2);
        iVar7 = (int)local_900;
      }
      iVar11 = local_978;
      lVar22 = (longlong)local_978;
      iVar8 = *piVar18;
      local_978 = local_978 + 1;
      local_8e0 = local_978;
      if (local_8dc < local_978) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(&local_8e8,iVar11);
      }
      plVar12 = local_8e8 + lVar22 * 3;
      *plVar12 = 0;
      *(int *)(plVar12 + 1) = iVar7;
      local_978 = local_8e0;
      if (iVar7 == 0) {
        *(undefined4 *)((longlong)plVar12 + 0xc) = 0;
      }
      else {
        TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(plVar12,iVar7,0);
        _guard_xfg_dispatch_icall_nop((void *)*plVar12,puVar16,(longlong)iVar7);
      }
      *(int *)(plVar12 + 2) = iVar10;
      *(int *)((longlong)plVar12 + 0x14) = iVar8;
      if (puVar16 != (undefined1 *)0x0) {
        FMemory::Free(puVar16);
      }
    }
LAB_141e80dff:
    local_9b8 = '\0';
    plVar12 = local_9b0;
  }
LAB_141e80f7a:
  if (plVar12 != (longlong *)0x0) {
    FMemory::Free(plVar12);
  }
  piVar18 = piVar18 + 6;
  piVar30 = local_920 + 6;
  local_980 = local_980 - 1;
  if (local_980 == 0) goto code_r0x000141e80fa8;
  goto LAB_141e80a00;
code_r0x000141e80fa8:
  iVar7 = *(int *)(local_940 + 0x50);
  local_980 = 0;
  param_5 = local_940;
  local_920 = piVar30;
LAB_141e80fba:
  plVar13 = (longlong *)0x0;
  local_980 = local_980 & 0xffffffff00000000;
  local_970 = (longlong *)0x0;
  local_968 = local_968 & 0xffffffff;
  plVar12 = plVar13;
  plVar29 = plVar13;
  if (0 < iVar7) {
    do {
      plVar21 = (longlong *)0x0;
      lVar22 = *(longlong *)(param_5 + 0x48);
      if (*(int *)(lVar22 + 0x10 + (longlong)plVar29) == -1) {
        pvVar2 = *(void **)(lVar22 + (longlong)plVar29);
        local_990 = (longlong *)0x0;
        iVar7 = *(int *)(lVar22 + 8 + (longlong)plVar29);
        local_988 = CONCAT44(local_988._4_4_,iVar7);
        if (iVar7 == 0) {
          local_988 = 0;
          uVar23 = 0;
        }
        else {
          TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_990,iVar7,0);
          plVar21 = local_990;
          _guard_xfg_dispatch_icall_nop(local_990,pvVar2,(longlong)iVar7);
          uVar23 = local_988 & 0xffffffff;
        }
        if ((3 < (int)uVar23) &&
           ((iVar7 = strncmp((char *)plVar21,"out_",4), iVar7 == 0 ||
            (iVar7 = strncmp((char *)plVar21,"var_",4), iVar7 == 0)))) {
          iVar7 = (int)uVar23 + -4;
          if (iVar7 != 0) {
            _guard_xfg_dispatch_icall_nop(plVar21,(void *)((longlong)plVar21 + 4),(longlong)iVar7);
          }
          local_988 = CONCAT44(local_988._4_4_,iVar7);
          TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(&local_990);
          uVar23 = local_988 & 0xffffffff;
          plVar21 = local_990;
        }
        if ((int)local_7b0 != local_784) {
          uVar25 = FCrc::MemCrc32(plVar21,uVar23);
          lVar22 = local_7b8;
          puVar16 = local_780;
          if (local_778 != (undefined1 *)0x0) {
            puVar16 = local_778;
          }
          iVar7 = *(int *)(puVar16 + (longlong)(int)(local_770 - 1U & uVar25) * 4);
          while (iVar7 != -1) {
            lVar26 = (longlong)iVar7 * 0x20;
            iVar10 = *(int *)(lVar26 + 8 + lVar22);
            if ((iVar10 == (int)uVar23) &&
               (iVar10 = _guard_xfg_dispatch_icall_nop
                                   (*(void **)(lVar26 + lVar22),plVar21,(longlong)iVar10),
               iVar10 == 0)) {
              plVar13 = local_970;
              param_5 = local_940;
              if (iVar7 != -1) goto LAB_141e81198;
              break;
            }
            param_5 = local_940;
            iVar7 = *(int *)(lVar26 + 0x18 + lVar22);
          }
        }
        uVar23 = local_980;
        lVar26 = (longlong)(int)local_980;
        lVar22 = *(longlong *)(param_5 + 0x48);
        iVar7 = (int)local_980 + 1;
        local_980 = CONCAT44(local_980._4_4_,iVar7);
        local_968 = CONCAT44(local_968._4_4_,iVar7);
        if (local_968._4_4_ < iVar7) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(&local_970,uVar23 & 0xffffffff);
          local_980 = CONCAT44(local_980._4_4_,(int)local_968);
        }
        plVar13 = local_970;
        FOpenGLShaderVarying::FOpenGLShaderVarying
                  (local_970 + lVar26 * 3,lVar22 + (longlong)(int)plVar12 * 0x18);
        local_9b8 = '\0';
LAB_141e81198:
        if (plVar21 != (longlong *)0x0) {
          FMemory::Free(plVar21);
        }
      }
      uVar25 = (int)plVar12 + 1;
      plVar12 = (longlong *)(ulonglong)uVar25;
      plVar29 = plVar29 + 3;
    } while ((int)uVar25 < *(int *)(param_5 + 0x50));
    plVar12 = (longlong *)(local_980 & 0xffffffff);
  }
  uVar23 = local_910;
  if (local_9b8 == '\0') {
    if (local_9b4 == 0) {
      FOpenGLCodeHeader::FOpenGLCodeHeader(&local_768);
      local_768 = 0x474c534c;
      local_764 = 0x5653;
      FOpenGLShaderBindings::operator=(local_760,param_5 + 0x18);
      FUN_141e8de90(local_6a0,param_5 + 200);
      local_990 = (longlong *)0x0;
      local_988 = 0;
      GetShaderStageSource<TOpenGLShader<FRefCountedObject,35632,3>_>(&local_908,param_5);
      FString::ParseIntoArrayLines(&local_908,&local_990,1);
      local_9b8 = 0 < (int)plVar12;
      plVar29 = plVar13 + (longlong)(int)plVar12 * 3;
      plVar21 = plVar13;
      local_9b0 = plVar29;
      local_950 = plVar13;
      if (plVar13 != plVar29) {
        do {
          iVar7 = (int)plVar13[1];
          pplVar24 = (longlong **)0x0;
          pvVar2 = (void *)*plVar13;
          local_938 = (longlong **)0x0;
          local_920 = (int *)CONCAT44(local_920._4_4_,iVar7);
          local_930 = (int *)CONCAT44(local_930._4_4_,iVar7);
          _Buf1 = pplVar24;
          iVar10 = 0;
          local_950 = plVar13;
          if (iVar7 != 0) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_938,iVar7,0);
            _Buf1 = local_938;
            _guard_xfg_dispatch_icall_nop(local_938,pvVar2,(longlong)iVar7);
            local_920 = (int *)CONCAT44(local_920._4_4_,(int)local_930);
            iVar10 = (int)local_930;
          }
          local_974 = (int)plVar13[2];
          pplVar32 = pplVar24;
          if (0 < (int)local_988) {
            do {
              puVar19 = (undefined2 *)0x0;
              local_958 = 0;
              local_960 = (undefined2 *)0x0;
              if ((_Buf1 != (longlong **)0x0) && (*(char *)_Buf1 != '\0')) {
                lVar22 = -1;
                do {
                  lVar26 = lVar22 + 1;
                  lVar22 = lVar22 + 1;
                } while (*(char *)((longlong)_Buf1 + lVar26) != '\0');
                uVar25 = (int)lVar22 + 1;
                local_958 = (ulonglong)uVar25;
                if (0 < (int)uVar25) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_960,0);
                }
                puVar19 = local_960;
                local_9c8 = CONCAT22(local_9c8._2_2_,0x3f);
                FGenericPlatformString::Convert<char,wchar_t>(local_960,uVar25,_Buf1);
              }
              local_9c8 = -1;
              iVar7 = FUN_141592950();
              if (puVar19 != (undefined2 *)0x0) {
                FMemory::Free();
              }
              if ((iVar7 != -1) &&
                 (pcVar17 = (char *)((longlong)local_990 + (longlong)pplVar24), pcVar17[8] = '\0',
                 pcVar17[9] = '\0', pcVar17[10] = '\0', pcVar17[0xb] = '\0',
                 *(int *)(pcVar17 + 0xc) != 0)) {
                TArray<wchar_t,FDefaultAllocator>::ResizeTo();
              }
              uVar25 = (int)pplVar32 + 1;
              pplVar24 = pplVar24 + 2;
              pplVar32 = (longlong **)(ulonglong)uVar25;
            } while ((int)uVar25 < (int)local_988);
            plVar29 = local_9b0;
            plVar13 = local_950;
            iVar10 = (int)local_920;
          }
          iVar8 = 0;
          ppplVar20 = local_730;
          iVar7 = local_974;
          if (0 < local_728) {
            do {
              if ((&local_938 == ppplVar20) ||
                 (((iVar7 == *(int *)(ppplVar20 + 2) && (iVar10 == *(int *)(ppplVar20 + 1))) &&
                  (iVar11 = _guard_xfg_dispatch_icall_nop(_Buf1,*ppplVar20,(longlong)iVar10),
                  iVar7 = local_974, iVar11 == 0)))) {
                TArray<FVulkanDescriptorSetsLayoutInfo::FSetLayout,FDefaultAllocator>::RemoveAtImpl
                          ();
                break;
              }
              iVar8 = iVar8 + 1;
              ppplVar20 = ppplVar20 + 3;
            } while (iVar8 < local_728);
          }
          if (_Buf1 != (longlong **)0x0) {
            FMemory::Free();
          }
          plVar13 = plVar13 + 3;
        } while (plVar13 != plVar29);
        plVar12 = (longlong *)(local_980 & 0xffffffff);
        plVar21 = local_970;
        local_950 = plVar13;
      }
      cVar6 = local_9b8;
      uVar25 = (uint)plVar12;
      while (uVar25 != 0) {
        if (*plVar21 != 0) {
          FMemory::Free();
        }
        plVar21 = plVar21 + 3;
        uVar25 = (int)plVar12 - 1;
        plVar12 = (longlong *)(ulonglong)uVar25;
      }
      local_980 = local_980 & 0xffffffff00000000;
      uVar23 = local_968 >> 0x20;
      local_968 = local_968 & 0xffffffff00000000;
      if ((int)uVar23 == 0) {
LAB_141e814a0:
        puVar19 = (undefined2 *)0x0;
        if (local_978 != 0) goto LAB_141e817fc;
        uVar23 = local_910;
        if (cVar6 == '\0') {
LAB_141e817f7:
          bVar33 = true;
        }
        else {
          iVar7 = 0;
          plVar12 = local_990 + (longlong)(int)local_988 * 2;
          local_960 = (undefined2 *)0x0;
          local_958 = local_958 & 0xffffffff;
          puVar31 = puVar19;
          plVar13 = local_990;
          local_950 = plVar12;
          if (local_990 != plVar12) {
            do {
              piVar18 = (int *)0x0;
              local_918 = (int)plVar13[1];
              lVar22 = (longlong)local_918;
              pvVar2 = (void *)*plVar13;
              local_920 = (int *)0x0;
              if (local_918 == 0) {
                local_914 = 0;
                iVar7 = 0;
              }
              else {
                TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_920,local_918,0);
                piVar18 = local_920;
                _guard_xfg_dispatch_icall_nop(local_920,pvVar2,lVar22 * 2);
                iVar7 = local_918;
              }
              if (1 < iVar7) {
                local_9b0 = (longlong *)0x0;
                local_9c8 = 2 - (uint)(iVar7 != 0);
                TArray<wchar_t,FDefaultAllocator>::CopyToEmpty<wchar_t>(&local_9b0,piVar18,iVar7,0);
                iVar10 = (uint)local_9a8;
                lVar22 = (longlong)(int)(uint)local_9a8;
                iVar7 = (2 - (uint)((uint)local_9a8 != 0)) + (uint)local_9a8;
                local_9a8 = CONCAT44(local_9a8._4_4_,iVar7);
                if (local_9a8._4_4_ < iVar7) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_9b0);
                  iVar7 = (uint)local_9a8;
                }
                plVar29 = local_9b0;
                local_9b0 = (longlong *)0x0;
                local_9a8 = 0;
                puVar1 = (undefined2 *)((longlong)plVar29 + (lVar22 - (ulonglong)(iVar10 != 0)) * 2)
                ;
                *puVar1 = 10;
                puVar1[1] = 0;
                if ((iVar7 != 0) && (iVar7 + -1 != 0)) {
                  iVar10 = (int)puVar19;
                  uVar25 = (uint)(iVar10 == 0) + iVar10 + iVar7 + -1;
                  local_958 = CONCAT44(local_958._4_4_,uVar25);
                  if (local_958._4_4_ < (int)uVar25) {
                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_960,puVar19);
                    puVar31 = local_960;
                    uVar25 = (uint)local_958;
                  }
                  puVar19 = (undefined2 *)(ulonglong)uVar25;
                  _guard_xfg_dispatch_icall_nop
                            (puVar31 + ((longlong)iVar10 - (ulonglong)(iVar10 != 0)),plVar29,
                             (longlong)iVar7 * 2 - 2);
                  (puVar31 + ((longlong)iVar10 - (ulonglong)(iVar10 != 0)))[(longlong)iVar7 + -1] =
                       0;
                }
                plVar12 = local_950;
                if (plVar29 != (longlong *)0x0) {
                  FMemory::Free();
                  plVar12 = local_950;
                }
              }
              iVar7 = (int)puVar19;
              if (piVar18 != (int *)0x0) {
                FMemory::Free();
              }
              plVar13 = plVar13 + 2;
            } while (plVar13 != plVar12);
          }
          local_938 = (longlong **)0x0;
          local_930 = (int *)0x0;
          local_950 = (longlong *)0x0;
          FArchive::FArchive(local_8b8);
          local_8b8[0] = &PTR_FUN_143f4a100;
          local_820 = &local_938;
          local_828 = 0;
          local_818 = local_950;
          FArchive::SetIsSaving(local_8b8,1);
          FArchive::SetIsPersistent(local_8b8,0);
          FUN_141e8e180(local_8b8,&local_768);
          local_960 = (undefined2 *)0x0;
          local_958 = local_958 & 0xffffffff;
          puVar19 = &DAT_143f3eda8;
          if (iVar7 != 0) {
            puVar19 = puVar31;
          }
          TStringConversion<TStringConvert<wchar_t,char>,128>::
          TStringConversion<TStringConvert<wchar_t,char>,128>(local_648,puVar19);
          lVar22 = -1;
          do {
            lVar26 = lVar22 + 1;
            lVar22 = lVar22 + 1;
          } while (*(char *)((longlong)local_5c0 + lVar26) != '\0');
          iVar10 = (int)lVar22 + 1;
          if (local_5c8 != 0) {
            FMemory::Free();
          }
          puVar19 = &DAT_143f3eda8;
          if (iVar7 != 0) {
            puVar19 = puVar31;
          }
          TStringConversion<TStringConvert<wchar_t,char>,128>::
          TStringConversion<TStringConvert<wchar_t,char>,128>(local_648,puVar19);
          local_958 = CONCAT44(local_958._4_4_,iVar10);
          puVar19 = (undefined2 *)0x0;
          iVar7 = iVar10;
          if (0 < iVar10) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_960,0);
            puVar19 = local_960;
            iVar7 = (uint)local_958;
          }
          _guard_xfg_dispatch_icall_nop(puVar19,local_5c0,(longlong)iVar10);
          if (local_5c8 != 0) {
            FMemory::Free();
          }
          FMemoryWriter::Serialize(local_8b8,puVar19,(longlong)iVar7);
          puVar14 = (undefined8 *)FUN_141e86010(&local_938,0);
          uVar23 = local_910;
          if (puVar14 != (undefined8 *)0x0) {
            *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
          }
          FOpenGLShaderBindings::operator=(local_910,local_760);
          *(undefined4 *)(uVar23 + 0xc4) = *(undefined4 *)(puVar14 + 2);
          piVar18 = (int *)(puVar14 + 1);
          *piVar18 = *piVar18 + -1;
          if (*piVar18 == 0) {
            (**(code **)*puVar14)(puVar14,1);
          }
          if (puVar19 != (undefined2 *)0x0) {
            FMemory::Free(puVar19);
          }
          FArchive::~FArchive(local_8b8);
          if (local_938 != (longlong **)0x0) {
            FMemory::Free();
          }
          if (puVar31 == (undefined2 *)0x0) goto LAB_141e817f7;
          FMemory::Free(puVar31);
          bVar33 = true;
        }
      }
      else {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                  ();
        local_980 = CONCAT44(local_980._4_4_,(int)local_968);
        if ((int)local_968 == 0) goto LAB_141e814a0;
LAB_141e817fc:
        bVar33 = false;
        uVar23 = local_910;
      }
      if (local_908 != (undefined1 *)0x0) {
        FMemory::Free();
      }
      plVar12 = local_990;
      for (iVar7 = (int)local_988; iVar7 != 0; iVar7 = iVar7 + -1) {
        if (*plVar12 != 0) {
          FMemory::Free();
        }
        plVar12 = plVar12 + 2;
      }
      if (local_990 != (longlong *)0x0) {
        FMemory::Free(local_990);
      }
      if (local_6a0[0] != 0) {
        FMemory::Free();
      }
      if (local_6b0 != 0) {
        FMemory::Free();
      }
      FOpenGLShaderBindings::~FOpenGLShaderBindings(local_760);
      if (bVar33) goto LAB_141e818bd;
    }
    GetShaderStageSource<TOpenGLShader<FRefCountedObject,35632,3>_>(&local_938,local_940);
    GetShaderStageSource<TOpenGLShader<FRefCountedObject,35632,3>_>(&local_908,local_8d8);
    if (local_908 != (undefined1 *)0x0) {
      FMemory::Free();
    }
    if (local_938 != (longlong **)0x0) {
      FMemory::Free();
    }
  }
LAB_141e818bd:
  uVar15 = FUN_141e9bc10();
  local_908 = local_4f8;
  local_900 = uVar23;
  FUN_141e8ac70(uVar15,&local_974,&local_908,0);
  plVar13 = local_970;
  plVar12 = local_970;
  for (iVar7 = (int)local_980; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    plVar12 = plVar12 + 3;
  }
  iVar7 = local_978;
  plVar12 = local_8e8;
  plVar29 = local_8e8;
  if (plVar13 != (longlong *)0x0) {
    FMemory::Free(plVar13);
    iVar7 = local_978;
    plVar12 = local_8e8;
    plVar29 = local_8e8;
  }
  for (; plVar13 = local_8e8, iVar7 != 0; iVar7 = iVar7 + -1) {
    local_8e8 = plVar29;
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    plVar12 = plVar12 + 3;
    plVar29 = local_8e8;
    local_8e8 = plVar13;
  }
  bVar33 = local_8e8 != (longlong *)0x0;
  iVar7 = local_9b4;
  plVar12 = local_9a0;
  plVar21 = local_9a0;
  local_8e8 = plVar29;
  if (bVar33) {
    FMemory::Free(plVar13);
    iVar7 = local_9b4;
    plVar12 = local_9a0;
    plVar21 = local_9a0;
  }
  for (; plVar13 = local_9a0, iVar7 != 0; iVar7 = iVar7 + -1) {
    local_9a0 = plVar21;
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    plVar12 = plVar12 + 2;
    plVar21 = local_9a0;
    local_9a0 = plVar13;
  }
  bVar33 = local_9a0 != (longlong *)0x0;
  local_9a0 = plVar21;
  if (bVar33) {
    FMemory::Free(plVar13);
  }
  local_770 = 0;
  if (local_778 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_7b8);
  local_7c0 = 0;
  if (local_7c8 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_808);
  param_3 = local_8c8;
  param_1 = local_8d0;
LAB_141e819d3:
  puVar28 = local_48;
  lVar22 = 6;
  do {
    puVar28 = puVar28 + -0x19;
    FOpenGLShaderBindings::~FOpenGLShaderBindings(puVar28);
    lVar22 = lVar22 + -1;
  } while (lVar22 != 0);
LAB_141e81a15:
  FOpenGLShaderBindings::operator=(param_1,local_5a8);
  *(undefined4 *)(param_1 + 0xc4) = local_8f0;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *(undefined4 *)(param_1 + 0xb0) = *param_3;
  *(undefined4 *)(param_1 + 0xb4) = uVar3;
  *(undefined4 *)(param_1 + 0xb8) = uVar4;
  *(undefined4 *)(param_1 + 0xbc) = uVar5;
  *(undefined4 *)(param_1 + 0xc0) = param_3[4];
  FOpenGLShaderBindings::~FOpenGLShaderBindings(local_5a8);
  return;
}



// FUNCTION 141e81a80 FUN_141e81a80 body=5171 status=ok
// SIG undefined FUN_141e81a80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000141e822fa) */
/* WARNING: Removing unreachable block (ram,0x000141e8207f) */

void FUN_141e81a80(longlong param_1,longlong param_2,undefined4 *param_3,ulonglong param_4,
                  longlong param_5)

{
  undefined2 *puVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined1 *puVar16;
  char *pcVar17;
  int *piVar18;
  undefined2 *puVar19;
  size_t _Size;
  longlong ***ppplVar20;
  longlong *plVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong **pplVar24;
  uint uVar25;
  longlong lVar26;
  longlong **_Buf1;
  ulonglong *puVar28;
  longlong *plVar29;
  int *piVar30;
  undefined2 *puVar31;
  longlong **pplVar32;
  bool bVar33;
  undefined1 auStack_9e8 [32];
  int local_9c8;
  undefined4 local_9c0;
  char local_9b8;
  int local_9b4;
  longlong *local_9b0;
  undefined8 local_9a8;
  longlong *local_9a0;
  int local_998;
  int local_994;
  longlong *local_990;
  undefined8 local_988;
  ulonglong local_980;
  int local_978;
  int local_974;
  longlong *local_970;
  undefined8 local_968;
  undefined2 *local_960;
  undefined8 local_958;
  longlong *local_950;
  undefined8 local_948;
  longlong local_940;
  longlong **local_938;
  int *local_930;
  int *local_920;
  int local_918;
  undefined4 local_914;
  ulonglong local_910;
  undefined1 *local_908;
  ulonglong local_900;
  undefined4 local_8f0;
  longlong *local_8e8;
  int local_8e0;
  int local_8dc;
  longlong local_8d8;
  longlong local_8d0;
  undefined4 *local_8c8;
  undefined **local_8b8 [18];
  undefined8 local_828;
  longlong ***local_820;
  longlong *local_818;
  longlong local_808;
  undefined8 local_800;
  undefined8 local_7e8;
  undefined8 local_7e0;
  undefined4 local_7d8;
  int local_7d4;
  undefined1 local_7d0 [8];
  undefined1 *local_7c8;
  int local_7c0;
  longlong local_7b8;
  undefined8 local_7b0;
  undefined8 local_798;
  undefined8 local_790;
  undefined4 local_788;
  int local_784;
  undefined1 local_780 [8];
  undefined1 *local_778;
  int local_770;
  undefined4 local_768;
  undefined2 local_764;
  undefined1 local_760 [48];
  longlong ***local_730;
  int local_728;
  longlong local_6b0;
  longlong local_6a0 [7];
  longlong local_668;
  undefined1 local_648 [128];
  longlong local_5c8;
  void *local_5c0;
  undefined1 local_5a8 [32];
  longlong local_588;
  uint local_580;
  undefined1 local_4f8 [176];
  undefined4 local_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined4 local_438;
  undefined4 local_434;
  undefined1 local_430 [176];
  undefined4 local_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 local_370;
  undefined4 local_36c;
  ulonglong local_48 [2];
  ulonglong uVar27;
  
  local_48[0] = DAT_1468387a8 ^ (ulonglong)auStack_9e8;
  local_8f0 = *(undefined4 *)(param_2 + 0x10);
  local_940 = param_5;
  local_910 = param_4;
  local_8d8 = param_2;
  local_8d0 = param_1;
  local_8c8 = param_3;
  FOpenGLShaderBindings::FOpenGLShaderBindings(local_5a8,param_2 + 0x18);
  if (DAT_146ab3550 == '\0') goto LAB_141e82e55;
  FUN_141e8d1f0(local_4f8);
  FOpenGLShaderBindings::operator=(local_4f8,param_4);
  local_438 = *(undefined4 *)(param_4 + 0xc0);
  local_448 = *(undefined4 *)(param_4 + 0xb0);
  uStack_444 = *(undefined4 *)(param_4 + 0xb4);
  uStack_440 = *(undefined4 *)(param_4 + 0xb8);
  uStack_43c = *(undefined4 *)(param_4 + 0xbc);
  local_434 = *(undefined4 *)(param_4 + 0xc4);
  FOpenGLShaderBindings::operator=(local_430,param_1);
  local_370 = *(undefined4 *)(param_1 + 0xc0);
  local_380 = *(undefined4 *)(param_1 + 0xb0);
  uStack_37c = *(undefined4 *)(param_1 + 0xb4);
  uStack_378 = *(undefined4 *)(param_1 + 0xb8);
  uStack_374 = *(undefined4 *)(param_1 + 0xbc);
  local_36c = *(undefined4 *)(param_1 + 0xc4);
  plVar12 = (longlong *)FUN_141e9bc10();
  if ((int)plVar12[1] != *(int *)((longlong)plVar12 + 0x34)) {
    iVar7 = GetTypeHash(local_4f8);
    plVar13 = (longlong *)plVar12[8];
    if ((longlong *)plVar12[8] == (longlong *)0x0) {
      plVar13 = plVar12 + 7;
    }
    iVar7 = *(int *)((longlong)plVar13 + ((longlong)(int)plVar12[9] - 1U & (longlong)iVar7) * 4);
    if (iVar7 != -1) {
      lVar22 = *plVar12;
      do {
        lVar26 = (longlong)iVar7 * 0x580 + lVar22;
        cVar6 = FUN_141e8eeb0(lVar26,local_4f8);
        if (cVar6 != '\0') {
          if (iVar7 != -1) goto LAB_141e81c00;
          break;
        }
        iVar7 = *(int *)(lVar26 + 0x578);
      } while (iVar7 != -1);
    }
  }
  lVar26 = 0;
LAB_141e81c00:
  lVar22 = lVar26 + 0x4b0;
  if (lVar26 == 0) {
    lVar22 = 0;
  }
  if (lVar22 == 0) {
    iVar7 = *(int *)(param_5 + 0x50);
    uVar23 = 0;
    local_808 = 0;
    local_800 = 0;
    local_7e8 = 0;
    local_7e0 = 0;
    local_7d8 = 0xffffffff;
    local_7d4 = 0;
    local_7c8 = (undefined1 *)0x0;
    local_7c0 = 0;
    if (0 < iVar7) {
      local_938 = &local_9a0;
      uVar27 = uVar23;
      do {
        local_9a0 = (longlong *)0x0;
        local_998 = *(int *)(uVar23 + 8 + *(longlong *)(param_5 + 0x48));
        _Size = (size_t)local_998;
        pvVar2 = *(void **)(uVar23 + *(longlong *)(param_5 + 0x48));
        if (local_998 == 0) {
          local_994 = 0;
        }
        else {
          TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_9a0,local_998,0);
          _guard_xfg_dispatch_icall_nop(local_9a0,pvVar2,_Size);
        }
        if ((3 < local_998) &&
           ((iVar7 = strncmp((char *)local_9a0,"out_",4), iVar7 == 0 ||
            (iVar7 = strncmp((char *)local_9a0,"var_",4), iVar7 == 0)))) {
          if (local_998 + -4 != 0) {
            _guard_xfg_dispatch_icall_nop
                      (local_9a0,(char *)((longlong)local_9a0 + 4),(longlong)(local_998 + -4));
          }
          local_998 = local_998 + -4;
          TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(&local_9a0);
        }
        local_930 = (int *)(*(longlong *)(param_5 + 0x48) + ((longlong)(int)uVar27 * 3 + 2) * 8);
        FUN_141e8a390(&local_808,&local_974,&local_938,0);
        if (local_9a0 != (longlong *)0x0) {
          FMemory::Free();
        }
        iVar7 = *(int *)(param_5 + 0x50);
        uVar25 = (int)uVar27 + 1;
        uVar27 = (ulonglong)uVar25;
        uVar23 = uVar23 + 0x18;
      } while ((int)uVar25 < iVar7);
    }
    local_9b8 = '\x01';
    local_7b8 = 0;
    local_7b0 = 0;
    local_798 = 0;
    local_790 = 0;
    local_788 = 0xffffffff;
    local_784 = 0;
    local_778 = (undefined1 *)0x0;
    local_770 = 0;
    local_9a0 = (longlong *)0x0;
    local_9b4 = 0;
    local_994 = 0;
    local_8e8 = (longlong *)0x0;
    local_978 = 0;
    local_8dc = 0;
    if (0 < (int)local_580) {
      local_938 = &local_9b0;
      piVar30 = (int *)(local_588 + 0x10);
      piVar18 = piVar30;
      local_980 = (ulonglong)local_580;
LAB_141e81e40:
      iVar10 = local_994;
      local_9b0 = (longlong *)0x0;
      iVar7 = piVar18[-2];
      pvVar2 = *(void **)(piVar18 + -4);
      local_9a8 = CONCAT44(local_9a8._4_4_,iVar7);
      local_920 = piVar30;
      if (iVar7 == 0) {
        local_9a8 = 0;
      }
      else {
        TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_9b0,iVar7,0);
        _guard_xfg_dispatch_icall_nop(local_9b0,pvVar2,(longlong)iVar7);
      }
      if ((2 < (int)(uint)local_9a8) && (iVar7 = strncmp((char *)local_9b0,"in_",3), iVar7 == 0)) {
        if ((uint)local_9a8 + -3 != 0) {
          _guard_xfg_dispatch_icall_nop
                    (local_9b0,(void *)((longlong)local_9b0 + 3),
                     (longlong)(int)((uint)local_9a8 + -3));
        }
        local_9a8 = CONCAT44(local_9a8._4_4_,(uint)local_9a8 + -3);
        TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(&local_9b0);
      }
      if ((3 < (int)(uint)local_9a8) && (iVar7 = strncmp((char *)local_9b0,"var_",4), iVar7 == 0)) {
        if ((uint)local_9a8 + -4 != 0) {
          _guard_xfg_dispatch_icall_nop
                    (local_9b0,(void *)((longlong)local_9b0 + 4),
                     (longlong)(int)((uint)local_9a8 + -4));
        }
        local_9a8 = CONCAT44(local_9a8._4_4_,(uint)local_9a8 + -4);
        TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(&local_9b0);
      }
      local_930 = piVar30;
      FUN_141e8a390(&local_7b8,&local_974,&local_938,0);
      if ((int)local_800 != local_7d4) {
        uVar25 = FCrc::MemCrc32(local_9b0,local_9a8 & 0xffffffff,0);
        lVar22 = local_808;
        uVar23 = local_9a8;
        plVar12 = local_9b0;
        puVar16 = local_7d0;
        if (local_7c8 != (undefined1 *)0x0) {
          puVar16 = local_7c8;
        }
        iVar7 = *(int *)(puVar16 + (longlong)(int)(local_7c0 - 1U & uVar25) * 4);
        if (iVar7 != -1) {
          uVar25 = (uint)local_9a8;
          do {
            lVar26 = (longlong)iVar7 * 0x20;
            uVar9 = *(uint *)(lVar26 + 8 + lVar22);
            if ((uVar9 == uVar25) &&
               (iVar8 = _guard_xfg_dispatch_icall_nop
                                  (*(void **)(lVar26 + lVar22),plVar12,(longlong)(int)uVar9),
               iVar8 == 0)) {
              if (iVar7 != -1) {
                if ((int)local_800 == local_7d4) goto LAB_141e82151;
                uVar9 = FCrc::MemCrc32(plVar12,uVar23 & 0xffffffff,0);
                lVar22 = local_808;
                plVar12 = local_9b0;
                uVar25 = (uint)local_9a8;
                puVar16 = local_7d0;
                if (local_7c8 != (undefined1 *)0x0) {
                  puVar16 = local_7c8;
                }
                iVar7 = *(int *)(puVar16 + (longlong)(int)(local_7c0 - 1U & uVar9) * 4);
                goto joined_r0x000141e8210f;
              }
              break;
            }
            iVar7 = *(int *)(lVar26 + 0x18 + lVar22);
          } while (iVar7 != -1);
        }
      }
      TStringConversion<TStringConvert<char,wchar_t>,128>::
      TStringConversion<TStringConvert<char,wchar_t>,128>(&local_768,*(undefined8 *)(piVar18 + -4));
      local_9c0 = 0x8e87;
      local_9c8 = 0x8dd9;
      FString::PrintfImpl(&local_950,
                          L"Separate Shader Object Binding Error: Input %s @ %d of stage 0x%x not written by stage 0x%x"
                         );
      iVar7 = local_9b4;
      lVar22 = (longlong)local_9b4;
      local_9b4 = local_9b4 + 1;
      local_998 = local_9b4;
      if (iVar10 < local_9b4) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_9a0,iVar7);
      }
      plVar12 = local_9a0 + lVar22 * 2;
      *plVar12 = 0;
      *plVar12 = (longlong)local_950;
      *(undefined4 *)(plVar12 + 1) = (undefined4)local_948;
      *(undefined4 *)((longlong)plVar12 + 0xc) = local_948._4_4_;
      local_948 = 0;
      local_950 = (longlong *)0x0;
      local_9b4 = local_998;
      if (local_668 == 0) goto LAB_141e8223f;
      FMemory::Free();
      local_9b8 = '\0';
      plVar12 = local_9b0;
      goto LAB_141e823ba;
    }
    goto LAB_141e823fa;
  }
  FOpenGLShaderBindings::operator=(param_4,lVar22);
  *(undefined4 *)(param_4 + 0xc4) = *(undefined4 *)(lVar22 + 0xc4);
  goto LAB_141e82e13;
joined_r0x000141e8210f:
  if (iVar7 == -1) goto LAB_141e82151;
  puVar14 = (undefined8 *)((longlong)iVar7 * 0x20 + lVar22);
  if ((*(uint *)(puVar14 + 1) == uVar25) &&
     (iVar10 = _guard_xfg_dispatch_icall_nop
                         ((void *)*puVar14,plVar12,(longlong)(int)*(uint *)(puVar14 + 1)),
     iVar10 == 0)) {
    if (iVar7 != -1) goto LAB_141e82155;
    goto LAB_141e82151;
  }
  iVar7 = *(int *)(puVar14 + 3);
  goto joined_r0x000141e8210f;
LAB_141e82151:
  puVar14 = (undefined8 *)0x0;
LAB_141e82155:
  puVar16 = (undefined1 *)0x0;
  iVar7 = *piVar18;
  iVar10 = *(int *)(puVar14 + 2);
  if (iVar10 != iVar7) {
    if ((iVar10 < 0) || (iVar7 < 0)) {
      if (iVar7 == -1) {
        TStringConversion<TStringConvert<char,wchar_t>,128>::
        TStringConversion<TStringConvert<char,wchar_t>,128>
                  (&local_768,*(undefined8 *)(piVar18 + -4));
        local_9c0 = *(undefined4 *)(puVar14 + 2);
        local_9c8 = 0x8e87;
        FString::PrintfImpl(&local_990,
                            L"Separate Shader Object Binding Error: Input %s of stage 0x%x written by stage 0x%x at location %d, can\'t be rewritten."
                           );
        iVar7 = local_9b4;
        lVar22 = (longlong)local_9b4;
        local_9b4 = local_9b4 + 1;
        local_998 = local_9b4;
        if (local_994 < local_9b4) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_9a0,iVar7);
        }
        plVar12 = local_9a0 + lVar22 * 2;
        *plVar12 = 0;
        *plVar12 = (longlong)local_990;
        local_990 = (longlong *)0x0;
        *(int *)(plVar12 + 1) = (int)local_988;
        *(undefined4 *)((longlong)plVar12 + 0xc) = local_988._4_4_;
        local_988 = 0;
      }
      else {
        TStringConversion<TStringConvert<char,wchar_t>,128>::
        TStringConversion<TStringConvert<char,wchar_t>,128>
                  (&local_768,*(undefined8 *)(piVar18 + -4));
        local_9c0 = 0x8e87;
        local_9c8 = 0x8dd9;
        FString::PrintfImpl(&local_970,
                            L"Separate Shader Object Binding Error: Input %s @ %d of stage 0x%x written by stage 0x%x without location, can\'t be rewritten."
                           );
        iVar7 = local_9b4;
        lVar22 = (longlong)local_9b4;
        local_9b4 = local_9b4 + 1;
        local_998 = local_9b4;
        if (local_994 < local_9b4) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_9a0,iVar7);
        }
        plVar12 = local_9a0 + lVar22 * 2;
        *plVar12 = 0;
        *plVar12 = (longlong)local_970;
        local_970 = (longlong *)0x0;
        *(int *)(plVar12 + 1) = (int)local_968;
        *(int *)((longlong)plVar12 + 0xc) = local_968._4_4_;
        local_968 = 0;
      }
      local_9b4 = local_998;
      if (local_668 != 0) {
        FMemory::Free();
        local_9b8 = '\0';
        plVar12 = local_9b0;
        goto LAB_141e823ba;
      }
    }
    else {
      local_908 = (undefined1 *)0x0;
      local_900 = (ulonglong)uVar25;
      iVar7 = 0;
      if (uVar25 != 0) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_908,uVar25,0);
        puVar16 = local_908;
        _guard_xfg_dispatch_icall_nop(local_908,plVar12,(longlong)(int)uVar25);
        iVar10 = *(int *)(puVar14 + 2);
        iVar7 = (int)local_900;
      }
      iVar11 = local_978;
      lVar22 = (longlong)local_978;
      iVar8 = *piVar18;
      local_978 = local_978 + 1;
      local_8e0 = local_978;
      if (local_8dc < local_978) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(&local_8e8,iVar11);
      }
      plVar12 = local_8e8 + lVar22 * 3;
      *plVar12 = 0;
      *(int *)(plVar12 + 1) = iVar7;
      local_978 = local_8e0;
      if (iVar7 == 0) {
        *(undefined4 *)((longlong)plVar12 + 0xc) = 0;
      }
      else {
        TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(plVar12,iVar7,0);
        _guard_xfg_dispatch_icall_nop((void *)*plVar12,puVar16,(longlong)iVar7);
      }
      *(int *)(plVar12 + 2) = iVar10;
      *(int *)((longlong)plVar12 + 0x14) = iVar8;
      if (puVar16 != (undefined1 *)0x0) {
        FMemory::Free(puVar16);
      }
    }
LAB_141e8223f:
    local_9b8 = '\0';
    plVar12 = local_9b0;
  }
LAB_141e823ba:
  if (plVar12 != (longlong *)0x0) {
    FMemory::Free(plVar12);
  }
  piVar18 = piVar18 + 6;
  piVar30 = local_920 + 6;
  local_980 = local_980 - 1;
  if (local_980 == 0) goto code_r0x000141e823e8;
  goto LAB_141e81e40;
code_r0x000141e823e8:
  iVar7 = *(int *)(local_940 + 0x50);
  local_980 = 0;
  param_5 = local_940;
  local_920 = piVar30;
LAB_141e823fa:
  plVar13 = (longlong *)0x0;
  local_980 = local_980 & 0xffffffff00000000;
  local_970 = (longlong *)0x0;
  local_968 = local_968 & 0xffffffff;
  plVar12 = plVar13;
  plVar29 = plVar13;
  if (0 < iVar7) {
    do {
      plVar21 = (longlong *)0x0;
      lVar22 = *(longlong *)(param_5 + 0x48);
      if (*(int *)(lVar22 + 0x10 + (longlong)plVar29) == -1) {
        pvVar2 = *(void **)(lVar22 + (longlong)plVar29);
        local_990 = (longlong *)0x0;
        iVar7 = *(int *)(lVar22 + 8 + (longlong)plVar29);
        local_988 = CONCAT44(local_988._4_4_,iVar7);
        if (iVar7 == 0) {
          local_988 = 0;
          uVar23 = 0;
        }
        else {
          TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_990,iVar7,0);
          plVar21 = local_990;
          _guard_xfg_dispatch_icall_nop(local_990,pvVar2,(longlong)iVar7);
          uVar23 = local_988 & 0xffffffff;
        }
        if ((3 < (int)uVar23) &&
           ((iVar7 = strncmp((char *)plVar21,"out_",4), iVar7 == 0 ||
            (iVar7 = strncmp((char *)plVar21,"var_",4), iVar7 == 0)))) {
          iVar7 = (int)uVar23 + -4;
          if (iVar7 != 0) {
            _guard_xfg_dispatch_icall_nop(plVar21,(void *)((longlong)plVar21 + 4),(longlong)iVar7);
          }
          local_988 = CONCAT44(local_988._4_4_,iVar7);
          TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(&local_990);
          uVar23 = local_988 & 0xffffffff;
          plVar21 = local_990;
        }
        if ((int)local_7b0 != local_784) {
          uVar25 = FCrc::MemCrc32(plVar21,uVar23);
          lVar22 = local_7b8;
          puVar16 = local_780;
          if (local_778 != (undefined1 *)0x0) {
            puVar16 = local_778;
          }
          iVar7 = *(int *)(puVar16 + (longlong)(int)(local_770 - 1U & uVar25) * 4);
          while (iVar7 != -1) {
            lVar26 = (longlong)iVar7 * 0x20;
            iVar10 = *(int *)(lVar26 + 8 + lVar22);
            if ((iVar10 == (int)uVar23) &&
               (iVar10 = _guard_xfg_dispatch_icall_nop
                                   (*(void **)(lVar26 + lVar22),plVar21,(longlong)iVar10),
               iVar10 == 0)) {
              plVar13 = local_970;
              param_5 = local_940;
              if (iVar7 != -1) goto LAB_141e825d8;
              break;
            }
            param_5 = local_940;
            iVar7 = *(int *)(lVar26 + 0x18 + lVar22);
          }
        }
        uVar23 = local_980;
        lVar26 = (longlong)(int)local_980;
        lVar22 = *(longlong *)(param_5 + 0x48);
        iVar7 = (int)local_980 + 1;
        local_980 = CONCAT44(local_980._4_4_,iVar7);
        local_968 = CONCAT44(local_968._4_4_,iVar7);
        if (local_968._4_4_ < iVar7) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(&local_970,uVar23 & 0xffffffff);
          local_980 = CONCAT44(local_980._4_4_,(int)local_968);
        }
        plVar13 = local_970;
        FOpenGLShaderVarying::FOpenGLShaderVarying
                  (local_970 + lVar26 * 3,lVar22 + (longlong)(int)plVar12 * 0x18);
        local_9b8 = '\0';
LAB_141e825d8:
        if (plVar21 != (longlong *)0x0) {
          FMemory::Free(plVar21);
        }
      }
      uVar25 = (int)plVar12 + 1;
      plVar12 = (longlong *)(ulonglong)uVar25;
      plVar29 = plVar29 + 3;
    } while ((int)uVar25 < *(int *)(param_5 + 0x50));
    plVar12 = (longlong *)(local_980 & 0xffffffff);
  }
  uVar23 = local_910;
  if (local_9b8 == '\0') {
    if (local_9b4 == 0) {
      FOpenGLCodeHeader::FOpenGLCodeHeader(&local_768);
      local_768 = 0x474c534c;
      local_764 = 0x4453;
      FOpenGLShaderBindings::operator=(local_760,param_5 + 0x18);
      FUN_141e8de90(local_6a0,param_5 + 200);
      local_990 = (longlong *)0x0;
      local_988 = 0;
      GetShaderStageSource<TOpenGLShader<FRefCountedObject,35632,3>_>(&local_908,param_5);
      FString::ParseIntoArrayLines(&local_908,&local_990,1);
      local_9b8 = 0 < (int)plVar12;
      plVar29 = plVar13 + (longlong)(int)plVar12 * 3;
      plVar21 = plVar13;
      local_9b0 = plVar29;
      local_950 = plVar13;
      if (plVar13 != plVar29) {
        do {
          iVar7 = (int)plVar13[1];
          pplVar24 = (longlong **)0x0;
          pvVar2 = (void *)*plVar13;
          local_938 = (longlong **)0x0;
          local_920 = (int *)CONCAT44(local_920._4_4_,iVar7);
          local_930 = (int *)CONCAT44(local_930._4_4_,iVar7);
          _Buf1 = pplVar24;
          iVar10 = 0;
          local_950 = plVar13;
          if (iVar7 != 0) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_938,iVar7,0);
            _Buf1 = local_938;
            _guard_xfg_dispatch_icall_nop(local_938,pvVar2,(longlong)iVar7);
            local_920 = (int *)CONCAT44(local_920._4_4_,(int)local_930);
            iVar10 = (int)local_930;
          }
          local_974 = (int)plVar13[2];
          pplVar32 = pplVar24;
          if (0 < (int)local_988) {
            do {
              puVar19 = (undefined2 *)0x0;
              local_958 = 0;
              local_960 = (undefined2 *)0x0;
              if ((_Buf1 != (longlong **)0x0) && (*(char *)_Buf1 != '\0')) {
                lVar22 = -1;
                do {
                  lVar26 = lVar22 + 1;
                  lVar22 = lVar22 + 1;
                } while (*(char *)((longlong)_Buf1 + lVar26) != '\0');
                uVar25 = (int)lVar22 + 1;
                local_958 = (ulonglong)uVar25;
                if (0 < (int)uVar25) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_960,0);
                }
                puVar19 = local_960;
                local_9c8 = CONCAT22(local_9c8._2_2_,0x3f);
                FGenericPlatformString::Convert<char,wchar_t>(local_960,uVar25,_Buf1);
              }
              local_9c8 = -1;
              iVar7 = FUN_141592950();
              if (puVar19 != (undefined2 *)0x0) {
                FMemory::Free();
              }
              if ((iVar7 != -1) &&
                 (pcVar17 = (char *)((longlong)local_990 + (longlong)pplVar24), pcVar17[8] = '\0',
                 pcVar17[9] = '\0', pcVar17[10] = '\0', pcVar17[0xb] = '\0',
                 *(int *)(pcVar17 + 0xc) != 0)) {
                TArray<wchar_t,FDefaultAllocator>::ResizeTo();
              }
              uVar25 = (int)pplVar32 + 1;
              pplVar24 = pplVar24 + 2;
              pplVar32 = (longlong **)(ulonglong)uVar25;
            } while ((int)uVar25 < (int)local_988);
            plVar29 = local_9b0;
            plVar13 = local_950;
            iVar10 = (int)local_920;
          }
          iVar8 = 0;
          ppplVar20 = local_730;
          iVar7 = local_974;
          if (0 < local_728) {
            do {
              if ((&local_938 == ppplVar20) ||
                 (((iVar7 == *(int *)(ppplVar20 + 2) && (iVar10 == *(int *)(ppplVar20 + 1))) &&
                  (iVar11 = _guard_xfg_dispatch_icall_nop(_Buf1,*ppplVar20,(longlong)iVar10),
                  iVar7 = local_974, iVar11 == 0)))) {
                TArray<FVulkanDescriptorSetsLayoutInfo::FSetLayout,FDefaultAllocator>::RemoveAtImpl
                          ();
                break;
              }
              iVar8 = iVar8 + 1;
              ppplVar20 = ppplVar20 + 3;
            } while (iVar8 < local_728);
          }
          if (_Buf1 != (longlong **)0x0) {
            FMemory::Free();
          }
          plVar13 = plVar13 + 3;
        } while (plVar13 != plVar29);
        plVar12 = (longlong *)(local_980 & 0xffffffff);
        plVar21 = local_970;
        local_950 = plVar13;
      }
      cVar6 = local_9b8;
      uVar25 = (uint)plVar12;
      while (uVar25 != 0) {
        if (*plVar21 != 0) {
          FMemory::Free();
        }
        plVar21 = plVar21 + 3;
        uVar25 = (int)plVar12 - 1;
        plVar12 = (longlong *)(ulonglong)uVar25;
      }
      local_980 = local_980 & 0xffffffff00000000;
      uVar23 = local_968 >> 0x20;
      local_968 = local_968 & 0xffffffff00000000;
      if ((int)uVar23 == 0) {
LAB_141e828e0:
        puVar19 = (undefined2 *)0x0;
        if (local_978 != 0) goto LAB_141e82c3c;
        uVar23 = local_910;
        if (cVar6 == '\0') {
LAB_141e82c37:
          bVar33 = true;
        }
        else {
          iVar7 = 0;
          plVar12 = local_990 + (longlong)(int)local_988 * 2;
          local_960 = (undefined2 *)0x0;
          local_958 = local_958 & 0xffffffff;
          puVar31 = puVar19;
          plVar13 = local_990;
          local_950 = plVar12;
          if (local_990 != plVar12) {
            do {
              piVar18 = (int *)0x0;
              local_918 = (int)plVar13[1];
              lVar22 = (longlong)local_918;
              pvVar2 = (void *)*plVar13;
              local_920 = (int *)0x0;
              if (local_918 == 0) {
                local_914 = 0;
                iVar7 = 0;
              }
              else {
                TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_920,local_918,0);
                piVar18 = local_920;
                _guard_xfg_dispatch_icall_nop(local_920,pvVar2,lVar22 * 2);
                iVar7 = local_918;
              }
              if (1 < iVar7) {
                local_9b0 = (longlong *)0x0;
                local_9c8 = 2 - (uint)(iVar7 != 0);
                TArray<wchar_t,FDefaultAllocator>::CopyToEmpty<wchar_t>(&local_9b0,piVar18,iVar7,0);
                iVar10 = (uint)local_9a8;
                lVar22 = (longlong)(int)(uint)local_9a8;
                iVar7 = (2 - (uint)((uint)local_9a8 != 0)) + (uint)local_9a8;
                local_9a8 = CONCAT44(local_9a8._4_4_,iVar7);
                if (local_9a8._4_4_ < iVar7) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_9b0);
                  iVar7 = (uint)local_9a8;
                }
                plVar29 = local_9b0;
                local_9b0 = (longlong *)0x0;
                local_9a8 = 0;
                puVar1 = (undefined2 *)((longlong)plVar29 + (lVar22 - (ulonglong)(iVar10 != 0)) * 2)
                ;
                *puVar1 = 10;
                puVar1[1] = 0;
                if ((iVar7 != 0) && (iVar7 + -1 != 0)) {
                  iVar10 = (int)puVar19;
                  uVar25 = (uint)(iVar10 == 0) + iVar10 + iVar7 + -1;
                  local_958 = CONCAT44(local_958._4_4_,uVar25);
                  if (local_958._4_4_ < (int)uVar25) {
                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_960,puVar19);
                    puVar31 = local_960;
                    uVar25 = (uint)local_958;
                  }
                  puVar19 = (undefined2 *)(ulonglong)uVar25;
                  _guard_xfg_dispatch_icall_nop
                            (puVar31 + ((longlong)iVar10 - (ulonglong)(iVar10 != 0)),plVar29,
                             (longlong)iVar7 * 2 - 2);
                  (puVar31 + ((longlong)iVar10 - (ulonglong)(iVar10 != 0)))[(longlong)iVar7 + -1] =
                       0;
                }
                plVar12 = local_950;
                if (plVar29 != (longlong *)0x0) {
                  FMemory::Free();
                  plVar12 = local_950;
                }
              }
              iVar7 = (int)puVar19;
              if (piVar18 != (int *)0x0) {
                FMemory::Free();
              }
              plVar13 = plVar13 + 2;
            } while (plVar13 != plVar12);
          }
          local_938 = (longlong **)0x0;
          local_930 = (int *)0x0;
          local_950 = (longlong *)0x0;
          FArchive::FArchive(local_8b8);
          local_8b8[0] = &PTR_FUN_143f4a100;
          local_820 = &local_938;
          local_828 = 0;
          local_818 = local_950;
          FArchive::SetIsSaving(local_8b8,1);
          FArchive::SetIsPersistent(local_8b8,0);
          FUN_141e8e180(local_8b8,&local_768);
          local_960 = (undefined2 *)0x0;
          local_958 = local_958 & 0xffffffff;
          puVar19 = &DAT_143f3eda8;
          if (iVar7 != 0) {
            puVar19 = puVar31;
          }
          TStringConversion<TStringConvert<wchar_t,char>,128>::
          TStringConversion<TStringConvert<wchar_t,char>,128>(local_648,puVar19);
          lVar22 = -1;
          do {
            lVar26 = lVar22 + 1;
            lVar22 = lVar22 + 1;
          } while (*(char *)((longlong)local_5c0 + lVar26) != '\0');
          iVar10 = (int)lVar22 + 1;
          if (local_5c8 != 0) {
            FMemory::Free();
          }
          puVar19 = &DAT_143f3eda8;
          if (iVar7 != 0) {
            puVar19 = puVar31;
          }
          TStringConversion<TStringConvert<wchar_t,char>,128>::
          TStringConversion<TStringConvert<wchar_t,char>,128>(local_648,puVar19);
          local_958 = CONCAT44(local_958._4_4_,iVar10);
          puVar19 = (undefined2 *)0x0;
          iVar7 = iVar10;
          if (0 < iVar10) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_960,0);
            puVar19 = local_960;
            iVar7 = (uint)local_958;
          }
          _guard_xfg_dispatch_icall_nop(puVar19,local_5c0,(longlong)iVar10);
          if (local_5c8 != 0) {
            FMemory::Free();
          }
          FMemoryWriter::Serialize(local_8b8,puVar19,(longlong)iVar7);
          puVar14 = (undefined8 *)FUN_141e871b0(&local_938,0);
          uVar23 = local_910;
          if (puVar14 != (undefined8 *)0x0) {
            *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
          }
          FOpenGLShaderBindings::operator=(local_910,local_760);
          *(undefined4 *)(uVar23 + 0xc4) = *(undefined4 *)(puVar14 + 2);
          piVar18 = (int *)(puVar14 + 1);
          *piVar18 = *piVar18 + -1;
          if (*piVar18 == 0) {
            (**(code **)*puVar14)(puVar14,1);
          }
          if (puVar19 != (undefined2 *)0x0) {
            FMemory::Free(puVar19);
          }
          FArchive::~FArchive(local_8b8);
          if (local_938 != (longlong **)0x0) {
            FMemory::Free();
          }
          if (puVar31 == (undefined2 *)0x0) goto LAB_141e82c37;
          FMemory::Free(puVar31);
          bVar33 = true;
        }
      }
      else {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                  ();
        local_980 = CONCAT44(local_980._4_4_,(int)local_968);
        if ((int)local_968 == 0) goto LAB_141e828e0;
LAB_141e82c3c:
        bVar33 = false;
        uVar23 = local_910;
      }
      if (local_908 != (undefined1 *)0x0) {
        FMemory::Free();
      }
      plVar12 = local_990;
      for (iVar7 = (int)local_988; iVar7 != 0; iVar7 = iVar7 + -1) {
        if (*plVar12 != 0) {
          FMemory::Free();
        }
        plVar12 = plVar12 + 2;
      }
      if (local_990 != (longlong *)0x0) {
        FMemory::Free(local_990);
      }
      if (local_6a0[0] != 0) {
        FMemory::Free();
      }
      if (local_6b0 != 0) {
        FMemory::Free();
      }
      FOpenGLShaderBindings::~FOpenGLShaderBindings(local_760);
      if (bVar33) goto LAB_141e82cfd;
    }
    GetShaderStageSource<TOpenGLShader<FRefCountedObject,35632,3>_>(&local_938,local_940);
    GetShaderStageSource<TOpenGLShader<FRefCountedObject,35632,3>_>(&local_908,local_8d8);
    if (local_908 != (undefined1 *)0x0) {
      FMemory::Free();
    }
    if (local_938 != (longlong **)0x0) {
      FMemory::Free();
    }
  }
LAB_141e82cfd:
  uVar15 = FUN_141e9bc10();
  local_908 = local_4f8;
  local_900 = uVar23;
  FUN_141e8ac70(uVar15,&local_974,&local_908,0);
  plVar13 = local_970;
  plVar12 = local_970;
  for (iVar7 = (int)local_980; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    plVar12 = plVar12 + 3;
  }
  iVar7 = local_978;
  plVar12 = local_8e8;
  plVar29 = local_8e8;
  if (plVar13 != (longlong *)0x0) {
    FMemory::Free(plVar13);
    iVar7 = local_978;
    plVar12 = local_8e8;
    plVar29 = local_8e8;
  }
  for (; plVar13 = local_8e8, iVar7 != 0; iVar7 = iVar7 + -1) {
    local_8e8 = plVar29;
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    plVar12 = plVar12 + 3;
    plVar29 = local_8e8;
    local_8e8 = plVar13;
  }
  bVar33 = local_8e8 != (longlong *)0x0;
  iVar7 = local_9b4;
  plVar12 = local_9a0;
  plVar21 = local_9a0;
  local_8e8 = plVar29;
  if (bVar33) {
    FMemory::Free(plVar13);
    iVar7 = local_9b4;
    plVar12 = local_9a0;
    plVar21 = local_9a0;
  }
  for (; plVar13 = local_9a0, iVar7 != 0; iVar7 = iVar7 + -1) {
    local_9a0 = plVar21;
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    plVar12 = plVar12 + 2;
    plVar21 = local_9a0;
    local_9a0 = plVar13;
  }
  bVar33 = local_9a0 != (longlong *)0x0;
  local_9a0 = plVar21;
  if (bVar33) {
    FMemory::Free(plVar13);
  }
  local_770 = 0;
  if (local_778 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_7b8);
  local_7c0 = 0;
  if (local_7c8 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_808);
  param_3 = local_8c8;
  param_1 = local_8d0;
LAB_141e82e13:
  puVar28 = local_48;
  lVar22 = 6;
  do {
    puVar28 = puVar28 + -0x19;
    FOpenGLShaderBindings::~FOpenGLShaderBindings(puVar28);
    lVar22 = lVar22 + -1;
  } while (lVar22 != 0);
LAB_141e82e55:
  FOpenGLShaderBindings::operator=(param_1,local_5a8);
  *(undefined4 *)(param_1 + 0xc4) = local_8f0;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *(undefined4 *)(param_1 + 0xb0) = *param_3;
  *(undefined4 *)(param_1 + 0xb4) = uVar3;
  *(undefined4 *)(param_1 + 0xb8) = uVar4;
  *(undefined4 *)(param_1 + 0xbc) = uVar5;
  *(undefined4 *)(param_1 + 0xc0) = param_3[4];
  FOpenGLShaderBindings::~FOpenGLShaderBindings(local_5a8);
  return;
}



// FUNCTION 141e82ec0 FUN_141e82ec0 body=5171 status=ok
// SIG undefined FUN_141e82ec0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000141e8373a) */
/* WARNING: Removing unreachable block (ram,0x000141e834bf) */

void FUN_141e82ec0(longlong param_1,longlong param_2,undefined4 *param_3,ulonglong param_4,
                  longlong param_5)

{
  undefined2 *puVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined1 *puVar16;
  char *pcVar17;
  int *piVar18;
  undefined2 *puVar19;
  size_t _Size;
  longlong ***ppplVar20;
  longlong *plVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong **pplVar24;
  uint uVar25;
  longlong lVar26;
  longlong **_Buf1;
  ulonglong *puVar28;
  longlong *plVar29;
  int *piVar30;
  undefined2 *puVar31;
  longlong **pplVar32;
  bool bVar33;
  undefined1 auStack_9e8 [32];
  int local_9c8;
  undefined4 local_9c0;
  char local_9b8;
  int local_9b4;
  longlong *local_9b0;
  undefined8 local_9a8;
  longlong *local_9a0;
  int local_998;
  int local_994;
  longlong *local_990;
  undefined8 local_988;
  ulonglong local_980;
  int local_978;
  int local_974;
  longlong *local_970;
  undefined8 local_968;
  undefined2 *local_960;
  undefined8 local_958;
  longlong *local_950;
  undefined8 local_948;
  longlong local_940;
  longlong **local_938;
  int *local_930;
  int *local_920;
  int local_918;
  undefined4 local_914;
  ulonglong local_910;
  undefined1 *local_908;
  ulonglong local_900;
  undefined4 local_8f0;
  longlong *local_8e8;
  int local_8e0;
  int local_8dc;
  longlong local_8d8;
  longlong local_8d0;
  undefined4 *local_8c8;
  undefined **local_8b8 [18];
  undefined8 local_828;
  longlong ***local_820;
  longlong *local_818;
  longlong local_808;
  undefined8 local_800;
  undefined8 local_7e8;
  undefined8 local_7e0;
  undefined4 local_7d8;
  int local_7d4;
  undefined1 local_7d0 [8];
  undefined1 *local_7c8;
  int local_7c0;
  longlong local_7b8;
  undefined8 local_7b0;
  undefined8 local_798;
  undefined8 local_790;
  undefined4 local_788;
  int local_784;
  undefined1 local_780 [8];
  undefined1 *local_778;
  int local_770;
  undefined4 local_768;
  undefined2 local_764;
  undefined1 local_760 [48];
  longlong ***local_730;
  int local_728;
  longlong local_6b0;
  longlong local_6a0 [7];
  longlong local_668;
  undefined1 local_648 [128];
  longlong local_5c8;
  void *local_5c0;
  undefined1 local_5a8 [32];
  longlong local_588;
  uint local_580;
  undefined1 local_4f8 [176];
  undefined4 local_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined4 local_438;
  undefined4 local_434;
  undefined1 local_430 [176];
  undefined4 local_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 local_370;
  undefined4 local_36c;
  ulonglong local_48 [2];
  ulonglong uVar27;
  
  local_48[0] = DAT_1468387a8 ^ (ulonglong)auStack_9e8;
  local_8f0 = *(undefined4 *)(param_2 + 0x10);
  local_940 = param_5;
  local_910 = param_4;
  local_8d8 = param_2;
  local_8d0 = param_1;
  local_8c8 = param_3;
  FOpenGLShaderBindings::FOpenGLShaderBindings(local_5a8,param_2 + 0x18);
  if (DAT_146ab3550 == '\0') goto LAB_141e84295;
  FUN_141e8d1f0(local_4f8);
  FOpenGLShaderBindings::operator=(local_4f8,param_4);
  local_438 = *(undefined4 *)(param_4 + 0xc0);
  local_448 = *(undefined4 *)(param_4 + 0xb0);
  uStack_444 = *(undefined4 *)(param_4 + 0xb4);
  uStack_440 = *(undefined4 *)(param_4 + 0xb8);
  uStack_43c = *(undefined4 *)(param_4 + 0xbc);
  local_434 = *(undefined4 *)(param_4 + 0xc4);
  FOpenGLShaderBindings::operator=(local_430,param_1);
  local_370 = *(undefined4 *)(param_1 + 0xc0);
  local_380 = *(undefined4 *)(param_1 + 0xb0);
  uStack_37c = *(undefined4 *)(param_1 + 0xb4);
  uStack_378 = *(undefined4 *)(param_1 + 0xb8);
  uStack_374 = *(undefined4 *)(param_1 + 0xbc);
  local_36c = *(undefined4 *)(param_1 + 0xc4);
  plVar12 = (longlong *)FUN_141e9bc10();
  if ((int)plVar12[1] != *(int *)((longlong)plVar12 + 0x34)) {
    iVar7 = GetTypeHash(local_4f8);
    plVar13 = (longlong *)plVar12[8];
    if ((longlong *)plVar12[8] == (longlong *)0x0) {
      plVar13 = plVar12 + 7;
    }
    iVar7 = *(int *)((longlong)plVar13 + ((longlong)(int)plVar12[9] - 1U & (longlong)iVar7) * 4);
    if (iVar7 != -1) {
      lVar22 = *plVar12;
      do {
        lVar26 = (longlong)iVar7 * 0x580 + lVar22;
        cVar6 = FUN_141e8eeb0(lVar26,local_4f8);
        if (cVar6 != '\0') {
          if (iVar7 != -1) goto LAB_141e83040;
          break;
        }
        iVar7 = *(int *)(lVar26 + 0x578);
      } while (iVar7 != -1);
    }
  }
  lVar26 = 0;
LAB_141e83040:
  lVar22 = lVar26 + 0x4b0;
  if (lVar26 == 0) {
    lVar22 = 0;
  }
  if (lVar22 == 0) {
    iVar7 = *(int *)(param_5 + 0x50);
    uVar23 = 0;
    local_808 = 0;
    local_800 = 0;
    local_7e8 = 0;
    local_7e0 = 0;
    local_7d8 = 0xffffffff;
    local_7d4 = 0;
    local_7c8 = (undefined1 *)0x0;
    local_7c0 = 0;
    if (0 < iVar7) {
      local_938 = &local_9a0;
      uVar27 = uVar23;
      do {
        local_9a0 = (longlong *)0x0;
        local_998 = *(int *)(uVar23 + 8 + *(longlong *)(param_5 + 0x48));
        _Size = (size_t)local_998;
        pvVar2 = *(void **)(uVar23 + *(longlong *)(param_5 + 0x48));
        if (local_998 == 0) {
          local_994 = 0;
        }
        else {
          TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_9a0,local_998,0);
          _guard_xfg_dispatch_icall_nop(local_9a0,pvVar2,_Size);
        }
        if ((3 < local_998) &&
           ((iVar7 = strncmp((char *)local_9a0,"out_",4), iVar7 == 0 ||
            (iVar7 = strncmp((char *)local_9a0,"var_",4), iVar7 == 0)))) {
          if (local_998 + -4 != 0) {
            _guard_xfg_dispatch_icall_nop
                      (local_9a0,(char *)((longlong)local_9a0 + 4),(longlong)(local_998 + -4));
          }
          local_998 = local_998 + -4;
          TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(&local_9a0);
        }
        local_930 = (int *)(*(longlong *)(param_5 + 0x48) + ((longlong)(int)uVar27 * 3 + 2) * 8);
        FUN_141e8a390(&local_808,&local_974,&local_938,0);
        if (local_9a0 != (longlong *)0x0) {
          FMemory::Free();
        }
        iVar7 = *(int *)(param_5 + 0x50);
        uVar25 = (int)uVar27 + 1;
        uVar27 = (ulonglong)uVar25;
        uVar23 = uVar23 + 0x18;
      } while ((int)uVar25 < iVar7);
    }
    local_9b8 = '\x01';
    local_7b8 = 0;
    local_7b0 = 0;
    local_798 = 0;
    local_790 = 0;
    local_788 = 0xffffffff;
    local_784 = 0;
    local_778 = (undefined1 *)0x0;
    local_770 = 0;
    local_9a0 = (longlong *)0x0;
    local_9b4 = 0;
    local_994 = 0;
    local_8e8 = (longlong *)0x0;
    local_978 = 0;
    local_8dc = 0;
    if (0 < (int)local_580) {
      local_938 = &local_9b0;
      piVar30 = (int *)(local_588 + 0x10);
      piVar18 = piVar30;
      local_980 = (ulonglong)local_580;
LAB_141e83280:
      iVar10 = local_994;
      local_9b0 = (longlong *)0x0;
      iVar7 = piVar18[-2];
      pvVar2 = *(void **)(piVar18 + -4);
      local_9a8 = CONCAT44(local_9a8._4_4_,iVar7);
      local_920 = piVar30;
      if (iVar7 == 0) {
        local_9a8 = 0;
      }
      else {
        TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_9b0,iVar7,0);
        _guard_xfg_dispatch_icall_nop(local_9b0,pvVar2,(longlong)iVar7);
      }
      if ((2 < (int)(uint)local_9a8) && (iVar7 = strncmp((char *)local_9b0,"in_",3), iVar7 == 0)) {
        if ((uint)local_9a8 + -3 != 0) {
          _guard_xfg_dispatch_icall_nop
                    (local_9b0,(void *)((longlong)local_9b0 + 3),
                     (longlong)(int)((uint)local_9a8 + -3));
        }
        local_9a8 = CONCAT44(local_9a8._4_4_,(uint)local_9a8 + -3);
        TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(&local_9b0);
      }
      if ((3 < (int)(uint)local_9a8) && (iVar7 = strncmp((char *)local_9b0,"var_",4), iVar7 == 0)) {
        if ((uint)local_9a8 + -4 != 0) {
          _guard_xfg_dispatch_icall_nop
                    (local_9b0,(void *)((longlong)local_9b0 + 4),
                     (longlong)(int)((uint)local_9a8 + -4));
        }
        local_9a8 = CONCAT44(local_9a8._4_4_,(uint)local_9a8 + -4);
        TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(&local_9b0);
      }
      local_930 = piVar30;
      FUN_141e8a390(&local_7b8,&local_974,&local_938,0);
      if ((int)local_800 != local_7d4) {
        uVar25 = FCrc::MemCrc32(local_9b0,local_9a8 & 0xffffffff,0);
        lVar22 = local_808;
        uVar23 = local_9a8;
        plVar12 = local_9b0;
        puVar16 = local_7d0;
        if (local_7c8 != (undefined1 *)0x0) {
          puVar16 = local_7c8;
        }
        iVar7 = *(int *)(puVar16 + (longlong)(int)(local_7c0 - 1U & uVar25) * 4);
        if (iVar7 != -1) {
          uVar25 = (uint)local_9a8;
          do {
            lVar26 = (longlong)iVar7 * 0x20;
            uVar9 = *(uint *)(lVar26 + 8 + lVar22);
            if ((uVar9 == uVar25) &&
               (iVar8 = _guard_xfg_dispatch_icall_nop
                                  (*(void **)(lVar26 + lVar22),plVar12,(longlong)(int)uVar9),
               iVar8 == 0)) {
              if (iVar7 != -1) {
                if ((int)local_800 == local_7d4) goto LAB_141e83591;
                uVar9 = FCrc::MemCrc32(plVar12,uVar23 & 0xffffffff,0);
                lVar22 = local_808;
                plVar12 = local_9b0;
                uVar25 = (uint)local_9a8;
                puVar16 = local_7d0;
                if (local_7c8 != (undefined1 *)0x0) {
                  puVar16 = local_7c8;
                }
                iVar7 = *(int *)(puVar16 + (longlong)(int)(local_7c0 - 1U & uVar9) * 4);
                goto joined_r0x000141e8354f;
              }
              break;
            }
            iVar7 = *(int *)(lVar26 + 0x18 + lVar22);
          } while (iVar7 != -1);
        }
      }
      TStringConversion<TStringConvert<char,wchar_t>,128>::
      TStringConversion<TStringConvert<char,wchar_t>,128>(&local_768,*(undefined8 *)(piVar18 + -4));
      local_9c0 = 0x8e88;
      local_9c8 = 0x8e87;
      FString::PrintfImpl(&local_950,
                          L"Separate Shader Object Binding Error: Input %s @ %d of stage 0x%x not written by stage 0x%x"
                         );
      iVar7 = local_9b4;
      lVar22 = (longlong)local_9b4;
      local_9b4 = local_9b4 + 1;
      local_998 = local_9b4;
      if (iVar10 < local_9b4) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_9a0,iVar7);
      }
      plVar12 = local_9a0 + lVar22 * 2;
      *plVar12 = 0;
      *plVar12 = (longlong)local_950;
      *(undefined4 *)(plVar12 + 1) = (undefined4)local_948;
      *(undefined4 *)((longlong)plVar12 + 0xc) = local_948._4_4_;
      local_948 = 0;
      local_950 = (longlong *)0x0;
      local_9b4 = local_998;
      if (local_668 == 0) goto LAB_141e8367f;
      FMemory::Free();
      local_9b8 = '\0';
      plVar12 = local_9b0;
      goto LAB_141e837fa;
    }
    goto LAB_141e8383a;
  }
  FOpenGLShaderBindings::operator=(param_4,lVar22);
  *(undefined4 *)(param_4 + 0xc4) = *(undefined4 *)(lVar22 + 0xc4);
  goto LAB_141e84253;
joined_r0x000141e8354f:
  if (iVar7 == -1) goto LAB_141e83591;
  puVar14 = (undefined8 *)((longlong)iVar7 * 0x20 + lVar22);
  if ((*(uint *)(puVar14 + 1) == uVar25) &&
     (iVar10 = _guard_xfg_dispatch_icall_nop
                         ((void *)*puVar14,plVar12,(longlong)(int)*(uint *)(puVar14 + 1)),
     iVar10 == 0)) {
    if (iVar7 != -1) goto LAB_141e83595;
    goto LAB_141e83591;
  }
  iVar7 = *(int *)(puVar14 + 3);
  goto joined_r0x000141e8354f;
LAB_141e83591:
  puVar14 = (undefined8 *)0x0;
LAB_141e83595:
  puVar16 = (undefined1 *)0x0;
  iVar7 = *piVar18;
  iVar10 = *(int *)(puVar14 + 2);
  if (iVar10 != iVar7) {
    if ((iVar10 < 0) || (iVar7 < 0)) {
      if (iVar7 == -1) {
        TStringConversion<TStringConvert<char,wchar_t>,128>::
        TStringConversion<TStringConvert<char,wchar_t>,128>
                  (&local_768,*(undefined8 *)(piVar18 + -4));
        local_9c0 = *(undefined4 *)(puVar14 + 2);
        local_9c8 = 0x8e88;
        FString::PrintfImpl(&local_990,
                            L"Separate Shader Object Binding Error: Input %s of stage 0x%x written by stage 0x%x at location %d, can\'t be rewritten."
                           );
        iVar7 = local_9b4;
        lVar22 = (longlong)local_9b4;
        local_9b4 = local_9b4 + 1;
        local_998 = local_9b4;
        if (local_994 < local_9b4) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_9a0,iVar7);
        }
        plVar12 = local_9a0 + lVar22 * 2;
        *plVar12 = 0;
        *plVar12 = (longlong)local_990;
        local_990 = (longlong *)0x0;
        *(int *)(plVar12 + 1) = (int)local_988;
        *(undefined4 *)((longlong)plVar12 + 0xc) = local_988._4_4_;
        local_988 = 0;
      }
      else {
        TStringConversion<TStringConvert<char,wchar_t>,128>::
        TStringConversion<TStringConvert<char,wchar_t>,128>
                  (&local_768,*(undefined8 *)(piVar18 + -4));
        local_9c0 = 0x8e88;
        local_9c8 = 0x8e87;
        FString::PrintfImpl(&local_970,
                            L"Separate Shader Object Binding Error: Input %s @ %d of stage 0x%x written by stage 0x%x without location, can\'t be rewritten."
                           );
        iVar7 = local_9b4;
        lVar22 = (longlong)local_9b4;
        local_9b4 = local_9b4 + 1;
        local_998 = local_9b4;
        if (local_994 < local_9b4) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_9a0,iVar7);
        }
        plVar12 = local_9a0 + lVar22 * 2;
        *plVar12 = 0;
        *plVar12 = (longlong)local_970;
        local_970 = (longlong *)0x0;
        *(int *)(plVar12 + 1) = (int)local_968;
        *(int *)((longlong)plVar12 + 0xc) = local_968._4_4_;
        local_968 = 0;
      }
      local_9b4 = local_998;
      if (local_668 != 0) {
        FMemory::Free();
        local_9b8 = '\0';
        plVar12 = local_9b0;
        goto LAB_141e837fa;
      }
    }
    else {
      local_908 = (undefined1 *)0x0;
      local_900 = (ulonglong)uVar25;
      iVar7 = 0;
      if (uVar25 != 0) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_908,uVar25,0);
        puVar16 = local_908;
        _guard_xfg_dispatch_icall_nop(local_908,plVar12,(longlong)(int)uVar25);
        iVar10 = *(int *)(puVar14 + 2);
        iVar7 = (int)local_900;
      }
      iVar11 = local_978;
      lVar22 = (longlong)local_978;
      iVar8 = *piVar18;
      local_978 = local_978 + 1;
      local_8e0 = local_978;
      if (local_8dc < local_978) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(&local_8e8,iVar11);
      }
      plVar12 = local_8e8 + lVar22 * 3;
      *plVar12 = 0;
      *(int *)(plVar12 + 1) = iVar7;
      local_978 = local_8e0;
      if (iVar7 == 0) {
        *(undefined4 *)((longlong)plVar12 + 0xc) = 0;
      }
      else {
        TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(plVar12,iVar7,0);
        _guard_xfg_dispatch_icall_nop((void *)*plVar12,puVar16,(longlong)iVar7);
      }
      *(int *)(plVar12 + 2) = iVar10;
      *(int *)((longlong)plVar12 + 0x14) = iVar8;
      if (puVar16 != (undefined1 *)0x0) {
        FMemory::Free(puVar16);
      }
    }
LAB_141e8367f:
    local_9b8 = '\0';
    plVar12 = local_9b0;
  }
LAB_141e837fa:
  if (plVar12 != (longlong *)0x0) {
    FMemory::Free(plVar12);
  }
  piVar18 = piVar18 + 6;
  piVar30 = local_920 + 6;
  local_980 = local_980 - 1;
  if (local_980 == 0) goto code_r0x000141e83828;
  goto LAB_141e83280;
code_r0x000141e83828:
  iVar7 = *(int *)(local_940 + 0x50);
  local_980 = 0;
  param_5 = local_940;
  local_920 = piVar30;
LAB_141e8383a:
  plVar13 = (longlong *)0x0;
  local_980 = local_980 & 0xffffffff00000000;
  local_970 = (longlong *)0x0;
  local_968 = local_968 & 0xffffffff;
  plVar12 = plVar13;
  plVar29 = plVar13;
  if (0 < iVar7) {
    do {
      plVar21 = (longlong *)0x0;
      lVar22 = *(longlong *)(param_5 + 0x48);
      if (*(int *)(lVar22 + 0x10 + (longlong)plVar29) == -1) {
        pvVar2 = *(void **)(lVar22 + (longlong)plVar29);
        local_990 = (longlong *)0x0;
        iVar7 = *(int *)(lVar22 + 8 + (longlong)plVar29);
        local_988 = CONCAT44(local_988._4_4_,iVar7);
        if (iVar7 == 0) {
          local_988 = 0;
          uVar23 = 0;
        }
        else {
          TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_990,iVar7,0);
          plVar21 = local_990;
          _guard_xfg_dispatch_icall_nop(local_990,pvVar2,(longlong)iVar7);
          uVar23 = local_988 & 0xffffffff;
        }
        if ((3 < (int)uVar23) &&
           ((iVar7 = strncmp((char *)plVar21,"out_",4), iVar7 == 0 ||
            (iVar7 = strncmp((char *)plVar21,"var_",4), iVar7 == 0)))) {
          iVar7 = (int)uVar23 + -4;
          if (iVar7 != 0) {
            _guard_xfg_dispatch_icall_nop(plVar21,(void *)((longlong)plVar21 + 4),(longlong)iVar7);
          }
          local_988 = CONCAT44(local_988._4_4_,iVar7);
          TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(&local_990);
          uVar23 = local_988 & 0xffffffff;
          plVar21 = local_990;
        }
        if ((int)local_7b0 != local_784) {
          uVar25 = FCrc::MemCrc32(plVar21,uVar23);
          lVar22 = local_7b8;
          puVar16 = local_780;
          if (local_778 != (undefined1 *)0x0) {
            puVar16 = local_778;
          }
          iVar7 = *(int *)(puVar16 + (longlong)(int)(local_770 - 1U & uVar25) * 4);
          while (iVar7 != -1) {
            lVar26 = (longlong)iVar7 * 0x20;
            iVar10 = *(int *)(lVar26 + 8 + lVar22);
            if ((iVar10 == (int)uVar23) &&
               (iVar10 = _guard_xfg_dispatch_icall_nop
                                   (*(void **)(lVar26 + lVar22),plVar21,(longlong)iVar10),
               iVar10 == 0)) {
              plVar13 = local_970;
              param_5 = local_940;
              if (iVar7 != -1) goto LAB_141e83a18;
              break;
            }
            param_5 = local_940;
            iVar7 = *(int *)(lVar26 + 0x18 + lVar22);
          }
        }
        uVar23 = local_980;
        lVar26 = (longlong)(int)local_980;
        lVar22 = *(longlong *)(param_5 + 0x48);
        iVar7 = (int)local_980 + 1;
        local_980 = CONCAT44(local_980._4_4_,iVar7);
        local_968 = CONCAT44(local_968._4_4_,iVar7);
        if (local_968._4_4_ < iVar7) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(&local_970,uVar23 & 0xffffffff);
          local_980 = CONCAT44(local_980._4_4_,(int)local_968);
        }
        plVar13 = local_970;
        FOpenGLShaderVarying::FOpenGLShaderVarying
                  (local_970 + lVar26 * 3,lVar22 + (longlong)(int)plVar12 * 0x18);
        local_9b8 = '\0';
LAB_141e83a18:
        if (plVar21 != (longlong *)0x0) {
          FMemory::Free(plVar21);
        }
      }
      uVar25 = (int)plVar12 + 1;
      plVar12 = (longlong *)(ulonglong)uVar25;
      plVar29 = plVar29 + 3;
    } while ((int)uVar25 < *(int *)(param_5 + 0x50));
    plVar12 = (longlong *)(local_980 & 0xffffffff);
  }
  uVar23 = local_910;
  if (local_9b8 == '\0') {
    if (local_9b4 == 0) {
      FOpenGLCodeHeader::FOpenGLCodeHeader(&local_768);
      local_768 = 0x474c534c;
      local_764 = 0x4853;
      FOpenGLShaderBindings::operator=(local_760,param_5 + 0x18);
      FUN_141e8de90(local_6a0,param_5 + 200);
      local_990 = (longlong *)0x0;
      local_988 = 0;
      GetShaderStageSource<TOpenGLShader<FRefCountedObject,35632,3>_>(&local_908,param_5);
      FString::ParseIntoArrayLines(&local_908,&local_990,1);
      local_9b8 = 0 < (int)plVar12;
      plVar29 = plVar13 + (longlong)(int)plVar12 * 3;
      plVar21 = plVar13;
      local_9b0 = plVar29;
      local_950 = plVar13;
      if (plVar13 != plVar29) {
        do {
          iVar7 = (int)plVar13[1];
          pplVar24 = (longlong **)0x0;
          pvVar2 = (void *)*plVar13;
          local_938 = (longlong **)0x0;
          local_920 = (int *)CONCAT44(local_920._4_4_,iVar7);
          local_930 = (int *)CONCAT44(local_930._4_4_,iVar7);
          _Buf1 = pplVar24;
          iVar10 = 0;
          local_950 = plVar13;
          if (iVar7 != 0) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_938,iVar7,0);
            _Buf1 = local_938;
            _guard_xfg_dispatch_icall_nop(local_938,pvVar2,(longlong)iVar7);
            local_920 = (int *)CONCAT44(local_920._4_4_,(int)local_930);
            iVar10 = (int)local_930;
          }
          local_974 = (int)plVar13[2];
          pplVar32 = pplVar24;
          if (0 < (int)local_988) {
            do {
              puVar19 = (undefined2 *)0x0;
              local_958 = 0;
              local_960 = (undefined2 *)0x0;
              if ((_Buf1 != (longlong **)0x0) && (*(char *)_Buf1 != '\0')) {
                lVar22 = -1;
                do {
                  lVar26 = lVar22 + 1;
                  lVar22 = lVar22 + 1;
                } while (*(char *)((longlong)_Buf1 + lVar26) != '\0');
                uVar25 = (int)lVar22 + 1;
                local_958 = (ulonglong)uVar25;
                if (0 < (int)uVar25) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_960,0);
                }
                puVar19 = local_960;
                local_9c8 = CONCAT22(local_9c8._2_2_,0x3f);
                FGenericPlatformString::Convert<char,wchar_t>(local_960,uVar25,_Buf1);
              }
              local_9c8 = -1;
              iVar7 = FUN_141592950();
              if (puVar19 != (undefined2 *)0x0) {
                FMemory::Free();
              }
              if ((iVar7 != -1) &&
                 (pcVar17 = (char *)((longlong)local_990 + (longlong)pplVar24), pcVar17[8] = '\0',
                 pcVar17[9] = '\0', pcVar17[10] = '\0', pcVar17[0xb] = '\0',
                 *(int *)(pcVar17 + 0xc) != 0)) {
                TArray<wchar_t,FDefaultAllocator>::ResizeTo();
              }
              uVar25 = (int)pplVar32 + 1;
              pplVar24 = pplVar24 + 2;
              pplVar32 = (longlong **)(ulonglong)uVar25;
            } while ((int)uVar25 < (int)local_988);
            plVar29 = local_9b0;
            plVar13 = local_950;
            iVar10 = (int)local_920;
          }
          iVar8 = 0;
          ppplVar20 = local_730;
          iVar7 = local_974;
          if (0 < local_728) {
            do {
              if ((&local_938 == ppplVar20) ||
                 (((iVar7 == *(int *)(ppplVar20 + 2) && (iVar10 == *(int *)(ppplVar20 + 1))) &&
                  (iVar11 = _guard_xfg_dispatch_icall_nop(_Buf1,*ppplVar20,(longlong)iVar10),
                  iVar7 = local_974, iVar11 == 0)))) {
                TArray<FVulkanDescriptorSetsLayoutInfo::FSetLayout,FDefaultAllocator>::RemoveAtImpl
                          ();
                break;
              }
              iVar8 = iVar8 + 1;
              ppplVar20 = ppplVar20 + 3;
            } while (iVar8 < local_728);
          }
          if (_Buf1 != (longlong **)0x0) {
            FMemory::Free();
          }
          plVar13 = plVar13 + 3;
        } while (plVar13 != plVar29);
        plVar12 = (longlong *)(local_980 & 0xffffffff);
        plVar21 = local_970;
        local_950 = plVar13;
      }
      cVar6 = local_9b8;
      uVar25 = (uint)plVar12;
      while (uVar25 != 0) {
        if (*plVar21 != 0) {
          FMemory::Free();
        }
        plVar21 = plVar21 + 3;
        uVar25 = (int)plVar12 - 1;
        plVar12 = (longlong *)(ulonglong)uVar25;
      }
      local_980 = local_980 & 0xffffffff00000000;
      uVar23 = local_968 >> 0x20;
      local_968 = local_968 & 0xffffffff00000000;
      if ((int)uVar23 == 0) {
LAB_141e83d20:
        puVar19 = (undefined2 *)0x0;
        if (local_978 != 0) goto LAB_141e8407c;
        uVar23 = local_910;
        if (cVar6 == '\0') {
LAB_141e84077:
          bVar33 = true;
        }
        else {
          iVar7 = 0;
          plVar12 = local_990 + (longlong)(int)local_988 * 2;
          local_960 = (undefined2 *)0x0;
          local_958 = local_958 & 0xffffffff;
          puVar31 = puVar19;
          plVar13 = local_990;
          local_950 = plVar12;
          if (local_990 != plVar12) {
            do {
              piVar18 = (int *)0x0;
              local_918 = (int)plVar13[1];
              lVar22 = (longlong)local_918;
              pvVar2 = (void *)*plVar13;
              local_920 = (int *)0x0;
              if (local_918 == 0) {
                local_914 = 0;
                iVar7 = 0;
              }
              else {
                TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_920,local_918,0);
                piVar18 = local_920;
                _guard_xfg_dispatch_icall_nop(local_920,pvVar2,lVar22 * 2);
                iVar7 = local_918;
              }
              if (1 < iVar7) {
                local_9b0 = (longlong *)0x0;
                local_9c8 = 2 - (uint)(iVar7 != 0);
                TArray<wchar_t,FDefaultAllocator>::CopyToEmpty<wchar_t>(&local_9b0,piVar18,iVar7,0);
                iVar10 = (uint)local_9a8;
                lVar22 = (longlong)(int)(uint)local_9a8;
                iVar7 = (2 - (uint)((uint)local_9a8 != 0)) + (uint)local_9a8;
                local_9a8 = CONCAT44(local_9a8._4_4_,iVar7);
                if (local_9a8._4_4_ < iVar7) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_9b0);
                  iVar7 = (uint)local_9a8;
                }
                plVar29 = local_9b0;
                local_9b0 = (longlong *)0x0;
                local_9a8 = 0;
                puVar1 = (undefined2 *)((longlong)plVar29 + (lVar22 - (ulonglong)(iVar10 != 0)) * 2)
                ;
                *puVar1 = 10;
                puVar1[1] = 0;
                if ((iVar7 != 0) && (iVar7 + -1 != 0)) {
                  iVar10 = (int)puVar19;
                  uVar25 = (uint)(iVar10 == 0) + iVar10 + iVar7 + -1;
                  local_958 = CONCAT44(local_958._4_4_,uVar25);
                  if (local_958._4_4_ < (int)uVar25) {
                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_960,puVar19);
                    puVar31 = local_960;
                    uVar25 = (uint)local_958;
                  }
                  puVar19 = (undefined2 *)(ulonglong)uVar25;
                  _guard_xfg_dispatch_icall_nop
                            (puVar31 + ((longlong)iVar10 - (ulonglong)(iVar10 != 0)),plVar29,
                             (longlong)iVar7 * 2 - 2);
                  (puVar31 + ((longlong)iVar10 - (ulonglong)(iVar10 != 0)))[(longlong)iVar7 + -1] =
                       0;
                }
                plVar12 = local_950;
                if (plVar29 != (longlong *)0x0) {
                  FMemory::Free();
                  plVar12 = local_950;
                }
              }
              iVar7 = (int)puVar19;
              if (piVar18 != (int *)0x0) {
                FMemory::Free();
              }
              plVar13 = plVar13 + 2;
            } while (plVar13 != plVar12);
          }
          local_938 = (longlong **)0x0;
          local_930 = (int *)0x0;
          local_950 = (longlong *)0x0;
          FArchive::FArchive(local_8b8);
          local_8b8[0] = &PTR_FUN_143f4a100;
          local_820 = &local_938;
          local_828 = 0;
          local_818 = local_950;
          FArchive::SetIsSaving(local_8b8,1);
          FArchive::SetIsPersistent(local_8b8,0);
          FUN_141e8e180(local_8b8,&local_768);
          local_960 = (undefined2 *)0x0;
          local_958 = local_958 & 0xffffffff;
          puVar19 = &DAT_143f3eda8;
          if (iVar7 != 0) {
            puVar19 = puVar31;
          }
          TStringConversion<TStringConvert<wchar_t,char>,128>::
          TStringConversion<TStringConvert<wchar_t,char>,128>(local_648,puVar19);
          lVar22 = -1;
          do {
            lVar26 = lVar22 + 1;
            lVar22 = lVar22 + 1;
          } while (*(char *)((longlong)local_5c0 + lVar26) != '\0');
          iVar10 = (int)lVar22 + 1;
          if (local_5c8 != 0) {
            FMemory::Free();
          }
          puVar19 = &DAT_143f3eda8;
          if (iVar7 != 0) {
            puVar19 = puVar31;
          }
          TStringConversion<TStringConvert<wchar_t,char>,128>::
          TStringConversion<TStringConvert<wchar_t,char>,128>(local_648,puVar19);
          local_958 = CONCAT44(local_958._4_4_,iVar10);
          puVar19 = (undefined2 *)0x0;
          iVar7 = iVar10;
          if (0 < iVar10) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_960,0);
            puVar19 = local_960;
            iVar7 = (uint)local_958;
          }
          _guard_xfg_dispatch_icall_nop(puVar19,local_5c0,(longlong)iVar10);
          if (local_5c8 != 0) {
            FMemory::Free();
          }
          FMemoryWriter::Serialize(local_8b8,puVar19,(longlong)iVar7);
          puVar14 = (undefined8 *)FUN_141e87a90(&local_938,0);
          uVar23 = local_910;
          if (puVar14 != (undefined8 *)0x0) {
            *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
          }
          FOpenGLShaderBindings::operator=(local_910,local_760);
          *(undefined4 *)(uVar23 + 0xc4) = *(undefined4 *)(puVar14 + 2);
          piVar18 = (int *)(puVar14 + 1);
          *piVar18 = *piVar18 + -1;
          if (*piVar18 == 0) {
            (**(code **)*puVar14)(puVar14,1);
          }
          if (puVar19 != (undefined2 *)0x0) {
            FMemory::Free(puVar19);
          }
          FArchive::~FArchive(local_8b8);
          if (local_938 != (longlong **)0x0) {
            FMemory::Free();
          }
          if (puVar31 == (undefined2 *)0x0) goto LAB_141e84077;
          FMemory::Free(puVar31);
          bVar33 = true;
        }
      }
      else {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                  ();
        local_980 = CONCAT44(local_980._4_4_,(int)local_968);
        if ((int)local_968 == 0) goto LAB_141e83d20;
LAB_141e8407c:
        bVar33 = false;
        uVar23 = local_910;
      }
      if (local_908 != (undefined1 *)0x0) {
        FMemory::Free();
      }
      plVar12 = local_990;
      for (iVar7 = (int)local_988; iVar7 != 0; iVar7 = iVar7 + -1) {
        if (*plVar12 != 0) {
          FMemory::Free();
        }
        plVar12 = plVar12 + 2;
      }
      if (local_990 != (longlong *)0x0) {
        FMemory::Free(local_990);
      }
      if (local_6a0[0] != 0) {
        FMemory::Free();
      }
      if (local_6b0 != 0) {
        FMemory::Free();
      }
      FOpenGLShaderBindings::~FOpenGLShaderBindings(local_760);
      if (bVar33) goto LAB_141e8413d;
    }
    GetShaderStageSource<TOpenGLShader<FRefCountedObject,35632,3>_>(&local_938,local_940);
    GetShaderStageSource<TOpenGLShader<FRefCountedObject,35632,3>_>(&local_908,local_8d8);
    if (local_908 != (undefined1 *)0x0) {
      FMemory::Free();
    }
    if (local_938 != (longlong **)0x0) {
      FMemory::Free();
    }
  }
LAB_141e8413d:
  uVar15 = FUN_141e9bc10();
  local_908 = local_4f8;
  local_900 = uVar23;
  FUN_141e8ac70(uVar15,&local_974,&local_908,0);
  plVar13 = local_970;
  plVar12 = local_970;
  for (iVar7 = (int)local_980; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    plVar12 = plVar12 + 3;
  }
  iVar7 = local_978;
  plVar12 = local_8e8;
  plVar29 = local_8e8;
  if (plVar13 != (longlong *)0x0) {
    FMemory::Free(plVar13);
    iVar7 = local_978;
    plVar12 = local_8e8;
    plVar29 = local_8e8;
  }
  for (; plVar13 = local_8e8, iVar7 != 0; iVar7 = iVar7 + -1) {
    local_8e8 = plVar29;
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    plVar12 = plVar12 + 3;
    plVar29 = local_8e8;
    local_8e8 = plVar13;
  }
  bVar33 = local_8e8 != (longlong *)0x0;
  iVar7 = local_9b4;
  plVar12 = local_9a0;
  plVar21 = local_9a0;
  local_8e8 = plVar29;
  if (bVar33) {
    FMemory::Free(plVar13);
    iVar7 = local_9b4;
    plVar12 = local_9a0;
    plVar21 = local_9a0;
  }
  for (; plVar13 = local_9a0, iVar7 != 0; iVar7 = iVar7 + -1) {
    local_9a0 = plVar21;
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    plVar12 = plVar12 + 2;
    plVar21 = local_9a0;
    local_9a0 = plVar13;
  }
  bVar33 = local_9a0 != (longlong *)0x0;
  local_9a0 = plVar21;
  if (bVar33) {
    FMemory::Free(plVar13);
  }
  local_770 = 0;
  if (local_778 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_7b8);
  local_7c0 = 0;
  if (local_7c8 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_808);
  param_3 = local_8c8;
  param_1 = local_8d0;
LAB_141e84253:
  puVar28 = local_48;
  lVar22 = 6;
  do {
    puVar28 = puVar28 + -0x19;
    FOpenGLShaderBindings::~FOpenGLShaderBindings(puVar28);
    lVar22 = lVar22 + -1;
  } while (lVar22 != 0);
LAB_141e84295:
  FOpenGLShaderBindings::operator=(param_1,local_5a8);
  *(undefined4 *)(param_1 + 0xc4) = local_8f0;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *(undefined4 *)(param_1 + 0xb0) = *param_3;
  *(undefined4 *)(param_1 + 0xb4) = uVar3;
  *(undefined4 *)(param_1 + 0xb8) = uVar4;
  *(undefined4 *)(param_1 + 0xbc) = uVar5;
  *(undefined4 *)(param_1 + 0xc0) = param_3[4];
  FOpenGLShaderBindings::~FOpenGLShaderBindings(local_5a8);
  return;
}



// FUNCTION 141e84300 FUN_141e84300 body=5171 status=ok
// SIG undefined FUN_141e84300(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000141e84b7a) */
/* WARNING: Removing unreachable block (ram,0x000141e848ff) */

void FUN_141e84300(longlong param_1,longlong param_2,undefined4 *param_3,ulonglong param_4,
                  longlong param_5)

{
  undefined2 *puVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined1 *puVar16;
  char *pcVar17;
  int *piVar18;
  undefined2 *puVar19;
  size_t _Size;
  longlong ***ppplVar20;
  longlong *plVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong **pplVar24;
  uint uVar25;
  longlong lVar26;
  longlong **_Buf1;
  ulonglong *puVar28;
  longlong *plVar29;
  int *piVar30;
  undefined2 *puVar31;
  longlong **pplVar32;
  bool bVar33;
  undefined1 auStack_9e8 [32];
  int local_9c8;
  undefined4 local_9c0;
  char local_9b8;
  int local_9b4;
  longlong *local_9b0;
  undefined8 local_9a8;
  longlong *local_9a0;
  int local_998;
  int local_994;
  longlong *local_990;
  undefined8 local_988;
  ulonglong local_980;
  int local_978;
  int local_974;
  longlong *local_970;
  undefined8 local_968;
  undefined2 *local_960;
  undefined8 local_958;
  longlong *local_950;
  undefined8 local_948;
  longlong local_940;
  longlong **local_938;
  int *local_930;
  int *local_920;
  int local_918;
  undefined4 local_914;
  ulonglong local_910;
  undefined1 *local_908;
  ulonglong local_900;
  undefined4 local_8f0;
  longlong *local_8e8;
  int local_8e0;
  int local_8dc;
  longlong local_8d8;
  longlong local_8d0;
  undefined4 *local_8c8;
  undefined **local_8b8 [18];
  undefined8 local_828;
  longlong ***local_820;
  longlong *local_818;
  longlong local_808;
  undefined8 local_800;
  undefined8 local_7e8;
  undefined8 local_7e0;
  undefined4 local_7d8;
  int local_7d4;
  undefined1 local_7d0 [8];
  undefined1 *local_7c8;
  int local_7c0;
  longlong local_7b8;
  undefined8 local_7b0;
  undefined8 local_798;
  undefined8 local_790;
  undefined4 local_788;
  int local_784;
  undefined1 local_780 [8];
  undefined1 *local_778;
  int local_770;
  undefined4 local_768;
  undefined2 local_764;
  undefined1 local_760 [48];
  longlong ***local_730;
  int local_728;
  longlong local_6b0;
  longlong local_6a0 [7];
  longlong local_668;
  undefined1 local_648 [128];
  longlong local_5c8;
  void *local_5c0;
  undefined1 local_5a8 [32];
  longlong local_588;
  uint local_580;
  undefined1 local_4f8 [176];
  undefined4 local_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined4 local_438;
  undefined4 local_434;
  undefined1 local_430 [176];
  undefined4 local_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 local_370;
  undefined4 local_36c;
  ulonglong local_48 [2];
  ulonglong uVar27;
  
  local_48[0] = DAT_1468387a8 ^ (ulonglong)auStack_9e8;
  local_8f0 = *(undefined4 *)(param_2 + 0x10);
  local_940 = param_5;
  local_910 = param_4;
  local_8d8 = param_2;
  local_8d0 = param_1;
  local_8c8 = param_3;
  FOpenGLShaderBindings::FOpenGLShaderBindings(local_5a8,param_2 + 0x18);
  if (DAT_146ab3550 == '\0') goto LAB_141e856d5;
  FUN_141e8d1f0(local_4f8);
  FOpenGLShaderBindings::operator=(local_4f8,param_4);
  local_438 = *(undefined4 *)(param_4 + 0xc0);
  local_448 = *(undefined4 *)(param_4 + 0xb0);
  uStack_444 = *(undefined4 *)(param_4 + 0xb4);
  uStack_440 = *(undefined4 *)(param_4 + 0xb8);
  uStack_43c = *(undefined4 *)(param_4 + 0xbc);
  local_434 = *(undefined4 *)(param_4 + 0xc4);
  FOpenGLShaderBindings::operator=(local_430,param_1);
  local_370 = *(undefined4 *)(param_1 + 0xc0);
  local_380 = *(undefined4 *)(param_1 + 0xb0);
  uStack_37c = *(undefined4 *)(param_1 + 0xb4);
  uStack_378 = *(undefined4 *)(param_1 + 0xb8);
  uStack_374 = *(undefined4 *)(param_1 + 0xbc);
  local_36c = *(undefined4 *)(param_1 + 0xc4);
  plVar12 = (longlong *)FUN_141e9bc10();
  if ((int)plVar12[1] != *(int *)((longlong)plVar12 + 0x34)) {
    iVar7 = GetTypeHash(local_4f8);
    plVar13 = (longlong *)plVar12[8];
    if ((longlong *)plVar12[8] == (longlong *)0x0) {
      plVar13 = plVar12 + 7;
    }
    iVar7 = *(int *)((longlong)plVar13 + ((longlong)(int)plVar12[9] - 1U & (longlong)iVar7) * 4);
    if (iVar7 != -1) {
      lVar22 = *plVar12;
      do {
        lVar26 = (longlong)iVar7 * 0x580 + lVar22;
        cVar6 = FUN_141e8eeb0(lVar26,local_4f8);
        if (cVar6 != '\0') {
          if (iVar7 != -1) goto LAB_141e84480;
          break;
        }
        iVar7 = *(int *)(lVar26 + 0x578);
      } while (iVar7 != -1);
    }
  }
  lVar26 = 0;
LAB_141e84480:
  lVar22 = lVar26 + 0x4b0;
  if (lVar26 == 0) {
    lVar22 = 0;
  }
  if (lVar22 == 0) {
    iVar7 = *(int *)(param_5 + 0x50);
    uVar23 = 0;
    local_808 = 0;
    local_800 = 0;
    local_7e8 = 0;
    local_7e0 = 0;
    local_7d8 = 0xffffffff;
    local_7d4 = 0;
    local_7c8 = (undefined1 *)0x0;
    local_7c0 = 0;
    if (0 < iVar7) {
      local_938 = &local_9a0;
      uVar27 = uVar23;
      do {
        local_9a0 = (longlong *)0x0;
        local_998 = *(int *)(uVar23 + 8 + *(longlong *)(param_5 + 0x48));
        _Size = (size_t)local_998;
        pvVar2 = *(void **)(uVar23 + *(longlong *)(param_5 + 0x48));
        if (local_998 == 0) {
          local_994 = 0;
        }
        else {
          TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_9a0,local_998,0);
          _guard_xfg_dispatch_icall_nop(local_9a0,pvVar2,_Size);
        }
        if ((3 < local_998) &&
           ((iVar7 = strncmp((char *)local_9a0,"out_",4), iVar7 == 0 ||
            (iVar7 = strncmp((char *)local_9a0,"var_",4), iVar7 == 0)))) {
          if (local_998 + -4 != 0) {
            _guard_xfg_dispatch_icall_nop
                      (local_9a0,(char *)((longlong)local_9a0 + 4),(longlong)(local_998 + -4));
          }
          local_998 = local_998 + -4;
          TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(&local_9a0);
        }
        local_930 = (int *)(*(longlong *)(param_5 + 0x48) + ((longlong)(int)uVar27 * 3 + 2) * 8);
        FUN_141e8a390(&local_808,&local_974,&local_938,0);
        if (local_9a0 != (longlong *)0x0) {
          FMemory::Free();
        }
        iVar7 = *(int *)(param_5 + 0x50);
        uVar25 = (int)uVar27 + 1;
        uVar27 = (ulonglong)uVar25;
        uVar23 = uVar23 + 0x18;
      } while ((int)uVar25 < iVar7);
    }
    local_9b8 = '\x01';
    local_7b8 = 0;
    local_7b0 = 0;
    local_798 = 0;
    local_790 = 0;
    local_788 = 0xffffffff;
    local_784 = 0;
    local_778 = (undefined1 *)0x0;
    local_770 = 0;
    local_9a0 = (longlong *)0x0;
    local_9b4 = 0;
    local_994 = 0;
    local_8e8 = (longlong *)0x0;
    local_978 = 0;
    local_8dc = 0;
    if (0 < (int)local_580) {
      local_938 = &local_9b0;
      piVar30 = (int *)(local_588 + 0x10);
      piVar18 = piVar30;
      local_980 = (ulonglong)local_580;
LAB_141e846c0:
      iVar10 = local_994;
      local_9b0 = (longlong *)0x0;
      iVar7 = piVar18[-2];
      pvVar2 = *(void **)(piVar18 + -4);
      local_9a8 = CONCAT44(local_9a8._4_4_,iVar7);
      local_920 = piVar30;
      if (iVar7 == 0) {
        local_9a8 = 0;
      }
      else {
        TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_9b0,iVar7,0);
        _guard_xfg_dispatch_icall_nop(local_9b0,pvVar2,(longlong)iVar7);
      }
      if ((2 < (int)(uint)local_9a8) && (iVar7 = strncmp((char *)local_9b0,"in_",3), iVar7 == 0)) {
        if ((uint)local_9a8 + -3 != 0) {
          _guard_xfg_dispatch_icall_nop
                    (local_9b0,(void *)((longlong)local_9b0 + 3),
                     (longlong)(int)((uint)local_9a8 + -3));
        }
        local_9a8 = CONCAT44(local_9a8._4_4_,(uint)local_9a8 + -3);
        TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(&local_9b0);
      }
      if ((3 < (int)(uint)local_9a8) && (iVar7 = strncmp((char *)local_9b0,"var_",4), iVar7 == 0)) {
        if ((uint)local_9a8 + -4 != 0) {
          _guard_xfg_dispatch_icall_nop
                    (local_9b0,(void *)((longlong)local_9b0 + 4),
                     (longlong)(int)((uint)local_9a8 + -4));
        }
        local_9a8 = CONCAT44(local_9a8._4_4_,(uint)local_9a8 + -4);
        TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(&local_9b0);
      }
      local_930 = piVar30;
      FUN_141e8a390(&local_7b8,&local_974,&local_938,0);
      if ((int)local_800 != local_7d4) {
        uVar25 = FCrc::MemCrc32(local_9b0,local_9a8 & 0xffffffff,0);
        lVar22 = local_808;
        uVar23 = local_9a8;
        plVar12 = local_9b0;
        puVar16 = local_7d0;
        if (local_7c8 != (undefined1 *)0x0) {
          puVar16 = local_7c8;
        }
        iVar7 = *(int *)(puVar16 + (longlong)(int)(local_7c0 - 1U & uVar25) * 4);
        if (iVar7 != -1) {
          uVar25 = (uint)local_9a8;
          do {
            lVar26 = (longlong)iVar7 * 0x20;
            uVar9 = *(uint *)(lVar26 + 8 + lVar22);
            if ((uVar9 == uVar25) &&
               (iVar8 = _guard_xfg_dispatch_icall_nop
                                  (*(void **)(lVar26 + lVar22),plVar12,(longlong)(int)uVar9),
               iVar8 == 0)) {
              if (iVar7 != -1) {
                if ((int)local_800 == local_7d4) goto LAB_141e849d1;
                uVar9 = FCrc::MemCrc32(plVar12,uVar23 & 0xffffffff,0);
                lVar22 = local_808;
                plVar12 = local_9b0;
                uVar25 = (uint)local_9a8;
                puVar16 = local_7d0;
                if (local_7c8 != (undefined1 *)0x0) {
                  puVar16 = local_7c8;
                }
                iVar7 = *(int *)(puVar16 + (longlong)(int)(local_7c0 - 1U & uVar9) * 4);
                goto joined_r0x000141e8498f;
              }
              break;
            }
            iVar7 = *(int *)(lVar26 + 0x18 + lVar22);
          } while (iVar7 != -1);
        }
      }
      TStringConversion<TStringConvert<char,wchar_t>,128>::
      TStringConversion<TStringConvert<char,wchar_t>,128>(&local_768,*(undefined8 *)(piVar18 + -4));
      local_9c0 = 0x8b31;
      local_9c8 = 0x8e88;
      FString::PrintfImpl(&local_950,
                          L"Separate Shader Object Binding Error: Input %s @ %d of stage 0x%x not written by stage 0x%x"
                         );
      iVar7 = local_9b4;
      lVar22 = (longlong)local_9b4;
      local_9b4 = local_9b4 + 1;
      local_998 = local_9b4;
      if (iVar10 < local_9b4) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_9a0,iVar7);
      }
      plVar12 = local_9a0 + lVar22 * 2;
      *plVar12 = 0;
      *plVar12 = (longlong)local_950;
      *(undefined4 *)(plVar12 + 1) = (undefined4)local_948;
      *(undefined4 *)((longlong)plVar12 + 0xc) = local_948._4_4_;
      local_948 = 0;
      local_950 = (longlong *)0x0;
      local_9b4 = local_998;
      if (local_668 == 0) goto LAB_141e84abf;
      FMemory::Free();
      local_9b8 = '\0';
      plVar12 = local_9b0;
      goto LAB_141e84c3a;
    }
    goto LAB_141e84c7a;
  }
  FOpenGLShaderBindings::operator=(param_4,lVar22);
  *(undefined4 *)(param_4 + 0xc4) = *(undefined4 *)(lVar22 + 0xc4);
  goto LAB_141e85693;
joined_r0x000141e8498f:
  if (iVar7 == -1) goto LAB_141e849d1;
  puVar14 = (undefined8 *)((longlong)iVar7 * 0x20 + lVar22);
  if ((*(uint *)(puVar14 + 1) == uVar25) &&
     (iVar10 = _guard_xfg_dispatch_icall_nop
                         ((void *)*puVar14,plVar12,(longlong)(int)*(uint *)(puVar14 + 1)),
     iVar10 == 0)) {
    if (iVar7 != -1) goto LAB_141e849d5;
    goto LAB_141e849d1;
  }
  iVar7 = *(int *)(puVar14 + 3);
  goto joined_r0x000141e8498f;
LAB_141e849d1:
  puVar14 = (undefined8 *)0x0;
LAB_141e849d5:
  puVar16 = (undefined1 *)0x0;
  iVar7 = *piVar18;
  iVar10 = *(int *)(puVar14 + 2);
  if (iVar10 != iVar7) {
    if ((iVar10 < 0) || (iVar7 < 0)) {
      if (iVar7 == -1) {
        TStringConversion<TStringConvert<char,wchar_t>,128>::
        TStringConversion<TStringConvert<char,wchar_t>,128>
                  (&local_768,*(undefined8 *)(piVar18 + -4));
        local_9c0 = *(undefined4 *)(puVar14 + 2);
        local_9c8 = 0x8b31;
        FString::PrintfImpl(&local_990,
                            L"Separate Shader Object Binding Error: Input %s of stage 0x%x written by stage 0x%x at location %d, can\'t be rewritten."
                           );
        iVar7 = local_9b4;
        lVar22 = (longlong)local_9b4;
        local_9b4 = local_9b4 + 1;
        local_998 = local_9b4;
        if (local_994 < local_9b4) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_9a0,iVar7);
        }
        plVar12 = local_9a0 + lVar22 * 2;
        *plVar12 = 0;
        *plVar12 = (longlong)local_990;
        local_990 = (longlong *)0x0;
        *(int *)(plVar12 + 1) = (int)local_988;
        *(undefined4 *)((longlong)plVar12 + 0xc) = local_988._4_4_;
        local_988 = 0;
      }
      else {
        TStringConversion<TStringConvert<char,wchar_t>,128>::
        TStringConversion<TStringConvert<char,wchar_t>,128>
                  (&local_768,*(undefined8 *)(piVar18 + -4));
        local_9c0 = 0x8b31;
        local_9c8 = 0x8e88;
        FString::PrintfImpl(&local_970,
                            L"Separate Shader Object Binding Error: Input %s @ %d of stage 0x%x written by stage 0x%x without location, can\'t be rewritten."
                           );
        iVar7 = local_9b4;
        lVar22 = (longlong)local_9b4;
        local_9b4 = local_9b4 + 1;
        local_998 = local_9b4;
        if (local_994 < local_9b4) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_9a0,iVar7);
        }
        plVar12 = local_9a0 + lVar22 * 2;
        *plVar12 = 0;
        *plVar12 = (longlong)local_970;
        local_970 = (longlong *)0x0;
        *(int *)(plVar12 + 1) = (int)local_968;
        *(int *)((longlong)plVar12 + 0xc) = local_968._4_4_;
        local_968 = 0;
      }
      local_9b4 = local_998;
      if (local_668 != 0) {
        FMemory::Free();
        local_9b8 = '\0';
        plVar12 = local_9b0;
        goto LAB_141e84c3a;
      }
    }
    else {
      local_908 = (undefined1 *)0x0;
      local_900 = (ulonglong)uVar25;
      iVar7 = 0;
      if (uVar25 != 0) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_908,uVar25,0);
        puVar16 = local_908;
        _guard_xfg_dispatch_icall_nop(local_908,plVar12,(longlong)(int)uVar25);
        iVar10 = *(int *)(puVar14 + 2);
        iVar7 = (int)local_900;
      }
      iVar11 = local_978;
      lVar22 = (longlong)local_978;
      iVar8 = *piVar18;
      local_978 = local_978 + 1;
      local_8e0 = local_978;
      if (local_8dc < local_978) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(&local_8e8,iVar11);
      }
      plVar12 = local_8e8 + lVar22 * 3;
      *plVar12 = 0;
      *(int *)(plVar12 + 1) = iVar7;
      local_978 = local_8e0;
      if (iVar7 == 0) {
        *(undefined4 *)((longlong)plVar12 + 0xc) = 0;
      }
      else {
        TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(plVar12,iVar7,0);
        _guard_xfg_dispatch_icall_nop((void *)*plVar12,puVar16,(longlong)iVar7);
      }
      *(int *)(plVar12 + 2) = iVar10;
      *(int *)((longlong)plVar12 + 0x14) = iVar8;
      if (puVar16 != (undefined1 *)0x0) {
        FMemory::Free(puVar16);
      }
    }
LAB_141e84abf:
    local_9b8 = '\0';
    plVar12 = local_9b0;
  }
LAB_141e84c3a:
  if (plVar12 != (longlong *)0x0) {
    FMemory::Free(plVar12);
  }
  piVar18 = piVar18 + 6;
  piVar30 = local_920 + 6;
  local_980 = local_980 - 1;
  if (local_980 == 0) goto code_r0x000141e84c68;
  goto LAB_141e846c0;
code_r0x000141e84c68:
  iVar7 = *(int *)(local_940 + 0x50);
  local_980 = 0;
  param_5 = local_940;
  local_920 = piVar30;
LAB_141e84c7a:
  plVar13 = (longlong *)0x0;
  local_980 = local_980 & 0xffffffff00000000;
  local_970 = (longlong *)0x0;
  local_968 = local_968 & 0xffffffff;
  plVar12 = plVar13;
  plVar29 = plVar13;
  if (0 < iVar7) {
    do {
      plVar21 = (longlong *)0x0;
      lVar22 = *(longlong *)(param_5 + 0x48);
      if (*(int *)(lVar22 + 0x10 + (longlong)plVar29) == -1) {
        pvVar2 = *(void **)(lVar22 + (longlong)plVar29);
        local_990 = (longlong *)0x0;
        iVar7 = *(int *)(lVar22 + 8 + (longlong)plVar29);
        local_988 = CONCAT44(local_988._4_4_,iVar7);
        if (iVar7 == 0) {
          local_988 = 0;
          uVar23 = 0;
        }
        else {
          TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_990,iVar7,0);
          plVar21 = local_990;
          _guard_xfg_dispatch_icall_nop(local_990,pvVar2,(longlong)iVar7);
          uVar23 = local_988 & 0xffffffff;
        }
        if ((3 < (int)uVar23) &&
           ((iVar7 = strncmp((char *)plVar21,"out_",4), iVar7 == 0 ||
            (iVar7 = strncmp((char *)plVar21,"var_",4), iVar7 == 0)))) {
          iVar7 = (int)uVar23 + -4;
          if (iVar7 != 0) {
            _guard_xfg_dispatch_icall_nop(plVar21,(void *)((longlong)plVar21 + 4),(longlong)iVar7);
          }
          local_988 = CONCAT44(local_988._4_4_,iVar7);
          TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(&local_990);
          uVar23 = local_988 & 0xffffffff;
          plVar21 = local_990;
        }
        if ((int)local_7b0 != local_784) {
          uVar25 = FCrc::MemCrc32(plVar21,uVar23);
          lVar22 = local_7b8;
          puVar16 = local_780;
          if (local_778 != (undefined1 *)0x0) {
            puVar16 = local_778;
          }
          iVar7 = *(int *)(puVar16 + (longlong)(int)(local_770 - 1U & uVar25) * 4);
          while (iVar7 != -1) {
            lVar26 = (longlong)iVar7 * 0x20;
            iVar10 = *(int *)(lVar26 + 8 + lVar22);
            if ((iVar10 == (int)uVar23) &&
               (iVar10 = _guard_xfg_dispatch_icall_nop
                                   (*(void **)(lVar26 + lVar22),plVar21,(longlong)iVar10),
               iVar10 == 0)) {
              plVar13 = local_970;
              param_5 = local_940;
              if (iVar7 != -1) goto LAB_141e84e58;
              break;
            }
            param_5 = local_940;
            iVar7 = *(int *)(lVar26 + 0x18 + lVar22);
          }
        }
        uVar23 = local_980;
        lVar26 = (longlong)(int)local_980;
        lVar22 = *(longlong *)(param_5 + 0x48);
        iVar7 = (int)local_980 + 1;
        local_980 = CONCAT44(local_980._4_4_,iVar7);
        local_968 = CONCAT44(local_968._4_4_,iVar7);
        if (local_968._4_4_ < iVar7) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(&local_970,uVar23 & 0xffffffff);
          local_980 = CONCAT44(local_980._4_4_,(int)local_968);
        }
        plVar13 = local_970;
        FOpenGLShaderVarying::FOpenGLShaderVarying
                  (local_970 + lVar26 * 3,lVar22 + (longlong)(int)plVar12 * 0x18);
        local_9b8 = '\0';
LAB_141e84e58:
        if (plVar21 != (longlong *)0x0) {
          FMemory::Free(plVar21);
        }
      }
      uVar25 = (int)plVar12 + 1;
      plVar12 = (longlong *)(ulonglong)uVar25;
      plVar29 = plVar29 + 3;
    } while ((int)uVar25 < *(int *)(param_5 + 0x50));
    plVar12 = (longlong *)(local_980 & 0xffffffff);
  }
  uVar23 = local_910;
  if (local_9b8 == '\0') {
    if (local_9b4 == 0) {
      FOpenGLCodeHeader::FOpenGLCodeHeader(&local_768);
      local_768 = 0x474c534c;
      local_764 = 0x5653;
      FOpenGLShaderBindings::operator=(local_760,param_5 + 0x18);
      FUN_141e8de90(local_6a0,param_5 + 200);
      local_990 = (longlong *)0x0;
      local_988 = 0;
      GetShaderStageSource<TOpenGLShader<FRefCountedObject,35632,3>_>(&local_908,param_5);
      FString::ParseIntoArrayLines(&local_908,&local_990,1);
      local_9b8 = 0 < (int)plVar12;
      plVar29 = plVar13 + (longlong)(int)plVar12 * 3;
      plVar21 = plVar13;
      local_9b0 = plVar29;
      local_950 = plVar13;
      if (plVar13 != plVar29) {
        do {
          iVar7 = (int)plVar13[1];
          pplVar24 = (longlong **)0x0;
          pvVar2 = (void *)*plVar13;
          local_938 = (longlong **)0x0;
          local_920 = (int *)CONCAT44(local_920._4_4_,iVar7);
          local_930 = (int *)CONCAT44(local_930._4_4_,iVar7);
          _Buf1 = pplVar24;
          iVar10 = 0;
          local_950 = plVar13;
          if (iVar7 != 0) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_938,iVar7,0);
            _Buf1 = local_938;
            _guard_xfg_dispatch_icall_nop(local_938,pvVar2,(longlong)iVar7);
            local_920 = (int *)CONCAT44(local_920._4_4_,(int)local_930);
            iVar10 = (int)local_930;
          }
          local_974 = (int)plVar13[2];
          pplVar32 = pplVar24;
          if (0 < (int)local_988) {
            do {
              puVar19 = (undefined2 *)0x0;
              local_958 = 0;
              local_960 = (undefined2 *)0x0;
              if ((_Buf1 != (longlong **)0x0) && (*(char *)_Buf1 != '\0')) {
                lVar22 = -1;
                do {
                  lVar26 = lVar22 + 1;
                  lVar22 = lVar22 + 1;
                } while (*(char *)((longlong)_Buf1 + lVar26) != '\0');
                uVar25 = (int)lVar22 + 1;
                local_958 = (ulonglong)uVar25;
                if (0 < (int)uVar25) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_960,0);
                }
                puVar19 = local_960;
                local_9c8 = CONCAT22(local_9c8._2_2_,0x3f);
                FGenericPlatformString::Convert<char,wchar_t>(local_960,uVar25,_Buf1);
              }
              local_9c8 = -1;
              iVar7 = FUN_141592950();
              if (puVar19 != (undefined2 *)0x0) {
                FMemory::Free();
              }
              if ((iVar7 != -1) &&
                 (pcVar17 = (char *)((longlong)local_990 + (longlong)pplVar24), pcVar17[8] = '\0',
                 pcVar17[9] = '\0', pcVar17[10] = '\0', pcVar17[0xb] = '\0',
                 *(int *)(pcVar17 + 0xc) != 0)) {
                TArray<wchar_t,FDefaultAllocator>::ResizeTo();
              }
              uVar25 = (int)pplVar32 + 1;
              pplVar24 = pplVar24 + 2;
              pplVar32 = (longlong **)(ulonglong)uVar25;
            } while ((int)uVar25 < (int)local_988);
            plVar29 = local_9b0;
            plVar13 = local_950;
            iVar10 = (int)local_920;
          }
          iVar8 = 0;
          ppplVar20 = local_730;
          iVar7 = local_974;
          if (0 < local_728) {
            do {
              if ((&local_938 == ppplVar20) ||
                 (((iVar7 == *(int *)(ppplVar20 + 2) && (iVar10 == *(int *)(ppplVar20 + 1))) &&
                  (iVar11 = _guard_xfg_dispatch_icall_nop(_Buf1,*ppplVar20,(longlong)iVar10),
                  iVar7 = local_974, iVar11 == 0)))) {
                TArray<FVulkanDescriptorSetsLayoutInfo::FSetLayout,FDefaultAllocator>::RemoveAtImpl
                          ();
                break;
              }
              iVar8 = iVar8 + 1;
              ppplVar20 = ppplVar20 + 3;
            } while (iVar8 < local_728);
          }
          if (_Buf1 != (longlong **)0x0) {
            FMemory::Free();
          }
          plVar13 = plVar13 + 3;
        } while (plVar13 != plVar29);
        plVar12 = (longlong *)(local_980 & 0xffffffff);
        plVar21 = local_970;
        local_950 = plVar13;
      }
      cVar6 = local_9b8;
      uVar25 = (uint)plVar12;
      while (uVar25 != 0) {
        if (*plVar21 != 0) {
          FMemory::Free();
        }
        plVar21 = plVar21 + 3;
        uVar25 = (int)plVar12 - 1;
        plVar12 = (longlong *)(ulonglong)uVar25;
      }
      local_980 = local_980 & 0xffffffff00000000;
      uVar23 = local_968 >> 0x20;
      local_968 = local_968 & 0xffffffff00000000;
      if ((int)uVar23 == 0) {
LAB_141e85160:
        puVar19 = (undefined2 *)0x0;
        if (local_978 != 0) goto LAB_141e854bc;
        uVar23 = local_910;
        if (cVar6 == '\0') {
LAB_141e854b7:
          bVar33 = true;
        }
        else {
          iVar7 = 0;
          plVar12 = local_990 + (longlong)(int)local_988 * 2;
          local_960 = (undefined2 *)0x0;
          local_958 = local_958 & 0xffffffff;
          puVar31 = puVar19;
          plVar13 = local_990;
          local_950 = plVar12;
          if (local_990 != plVar12) {
            do {
              piVar18 = (int *)0x0;
              local_918 = (int)plVar13[1];
              lVar22 = (longlong)local_918;
              pvVar2 = (void *)*plVar13;
              local_920 = (int *)0x0;
              if (local_918 == 0) {
                local_914 = 0;
                iVar7 = 0;
              }
              else {
                TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_920,local_918,0);
                piVar18 = local_920;
                _guard_xfg_dispatch_icall_nop(local_920,pvVar2,lVar22 * 2);
                iVar7 = local_918;
              }
              if (1 < iVar7) {
                local_9b0 = (longlong *)0x0;
                local_9c8 = 2 - (uint)(iVar7 != 0);
                TArray<wchar_t,FDefaultAllocator>::CopyToEmpty<wchar_t>(&local_9b0,piVar18,iVar7,0);
                iVar10 = (uint)local_9a8;
                lVar22 = (longlong)(int)(uint)local_9a8;
                iVar7 = (2 - (uint)((uint)local_9a8 != 0)) + (uint)local_9a8;
                local_9a8 = CONCAT44(local_9a8._4_4_,iVar7);
                if (local_9a8._4_4_ < iVar7) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_9b0);
                  iVar7 = (uint)local_9a8;
                }
                plVar29 = local_9b0;
                local_9b0 = (longlong *)0x0;
                local_9a8 = 0;
                puVar1 = (undefined2 *)((longlong)plVar29 + (lVar22 - (ulonglong)(iVar10 != 0)) * 2)
                ;
                *puVar1 = 10;
                puVar1[1] = 0;
                if ((iVar7 != 0) && (iVar7 + -1 != 0)) {
                  iVar10 = (int)puVar19;
                  uVar25 = (uint)(iVar10 == 0) + iVar10 + iVar7 + -1;
                  local_958 = CONCAT44(local_958._4_4_,uVar25);
                  if (local_958._4_4_ < (int)uVar25) {
                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_960,puVar19);
                    puVar31 = local_960;
                    uVar25 = (uint)local_958;
                  }
                  puVar19 = (undefined2 *)(ulonglong)uVar25;
                  _guard_xfg_dispatch_icall_nop
                            (puVar31 + ((longlong)iVar10 - (ulonglong)(iVar10 != 0)),plVar29,
                             (longlong)iVar7 * 2 - 2);
                  (puVar31 + ((longlong)iVar10 - (ulonglong)(iVar10 != 0)))[(longlong)iVar7 + -1] =
                       0;
                }
                plVar12 = local_950;
                if (plVar29 != (longlong *)0x0) {
                  FMemory::Free();
                  plVar12 = local_950;
                }
              }
              iVar7 = (int)puVar19;
              if (piVar18 != (int *)0x0) {
                FMemory::Free();
              }
              plVar13 = plVar13 + 2;
            } while (plVar13 != plVar12);
          }
          local_938 = (longlong **)0x0;
          local_930 = (int *)0x0;
          local_950 = (longlong *)0x0;
          FArchive::FArchive(local_8b8);
          local_8b8[0] = &PTR_FUN_143f4a100;
          local_820 = &local_938;
          local_828 = 0;
          local_818 = local_950;
          FArchive::SetIsSaving(local_8b8,1);
          FArchive::SetIsPersistent(local_8b8,0);
          FUN_141e8e180(local_8b8,&local_768);
          local_960 = (undefined2 *)0x0;
          local_958 = local_958 & 0xffffffff;
          puVar19 = &DAT_143f3eda8;
          if (iVar7 != 0) {
            puVar19 = puVar31;
          }
          TStringConversion<TStringConvert<wchar_t,char>,128>::
          TStringConversion<TStringConvert<wchar_t,char>,128>(local_648,puVar19);
          lVar22 = -1;
          do {
            lVar26 = lVar22 + 1;
            lVar22 = lVar22 + 1;
          } while (*(char *)((longlong)local_5c0 + lVar26) != '\0');
          iVar10 = (int)lVar22 + 1;
          if (local_5c8 != 0) {
            FMemory::Free();
          }
          puVar19 = &DAT_143f3eda8;
          if (iVar7 != 0) {
            puVar19 = puVar31;
          }
          TStringConversion<TStringConvert<wchar_t,char>,128>::
          TStringConversion<TStringConvert<wchar_t,char>,128>(local_648,puVar19);
          local_958 = CONCAT44(local_958._4_4_,iVar10);
          puVar19 = (undefined2 *)0x0;
          iVar7 = iVar10;
          if (0 < iVar10) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_960,0);
            puVar19 = local_960;
            iVar7 = (uint)local_958;
          }
          _guard_xfg_dispatch_icall_nop(puVar19,local_5c0,(longlong)iVar10);
          if (local_5c8 != 0) {
            FMemory::Free();
          }
          FMemoryWriter::Serialize(local_8b8,puVar19,(longlong)iVar7);
          puVar14 = (undefined8 *)FUN_141e86010(&local_938,0);
          uVar23 = local_910;
          if (puVar14 != (undefined8 *)0x0) {
            *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
          }
          FOpenGLShaderBindings::operator=(local_910,local_760);
          *(undefined4 *)(uVar23 + 0xc4) = *(undefined4 *)(puVar14 + 2);
          piVar18 = (int *)(puVar14 + 1);
          *piVar18 = *piVar18 + -1;
          if (*piVar18 == 0) {
            (**(code **)*puVar14)(puVar14,1);
          }
          if (puVar19 != (undefined2 *)0x0) {
            FMemory::Free(puVar19);
          }
          FArchive::~FArchive(local_8b8);
          if (local_938 != (longlong **)0x0) {
            FMemory::Free();
          }
          if (puVar31 == (undefined2 *)0x0) goto LAB_141e854b7;
          FMemory::Free(puVar31);
          bVar33 = true;
        }
      }
      else {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                  ();
        local_980 = CONCAT44(local_980._4_4_,(int)local_968);
        if ((int)local_968 == 0) goto LAB_141e85160;
LAB_141e854bc:
        bVar33 = false;
        uVar23 = local_910;
      }
      if (local_908 != (undefined1 *)0x0) {
        FMemory::Free();
      }
      plVar12 = local_990;
      for (iVar7 = (int)local_988; iVar7 != 0; iVar7 = iVar7 + -1) {
        if (*plVar12 != 0) {
          FMemory::Free();
        }
        plVar12 = plVar12 + 2;
      }
      if (local_990 != (longlong *)0x0) {
        FMemory::Free(local_990);
      }
      if (local_6a0[0] != 0) {
        FMemory::Free();
      }
      if (local_6b0 != 0) {
        FMemory::Free();
      }
      FOpenGLShaderBindings::~FOpenGLShaderBindings(local_760);
      if (bVar33) goto LAB_141e8557d;
    }
    GetShaderStageSource<TOpenGLShader<FRefCountedObject,35632,3>_>(&local_938,local_940);
    GetShaderStageSource<TOpenGLShader<FRefCountedObject,35632,3>_>(&local_908,local_8d8);
    if (local_908 != (undefined1 *)0x0) {
      FMemory::Free();
    }
    if (local_938 != (longlong **)0x0) {
      FMemory::Free();
    }
  }
LAB_141e8557d:
  uVar15 = FUN_141e9bc10();
  local_908 = local_4f8;
  local_900 = uVar23;
  FUN_141e8ac70(uVar15,&local_974,&local_908,0);
  plVar13 = local_970;
  plVar12 = local_970;
  for (iVar7 = (int)local_980; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    plVar12 = plVar12 + 3;
  }
  iVar7 = local_978;
  plVar12 = local_8e8;
  plVar29 = local_8e8;
  if (plVar13 != (longlong *)0x0) {
    FMemory::Free(plVar13);
    iVar7 = local_978;
    plVar12 = local_8e8;
    plVar29 = local_8e8;
  }
  for (; plVar13 = local_8e8, iVar7 != 0; iVar7 = iVar7 + -1) {
    local_8e8 = plVar29;
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    plVar12 = plVar12 + 3;
    plVar29 = local_8e8;
    local_8e8 = plVar13;
  }
  bVar33 = local_8e8 != (longlong *)0x0;
  iVar7 = local_9b4;
  plVar12 = local_9a0;
  plVar21 = local_9a0;
  local_8e8 = plVar29;
  if (bVar33) {
    FMemory::Free(plVar13);
    iVar7 = local_9b4;
    plVar12 = local_9a0;
    plVar21 = local_9a0;
  }
  for (; plVar13 = local_9a0, iVar7 != 0; iVar7 = iVar7 + -1) {
    local_9a0 = plVar21;
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    plVar12 = plVar12 + 2;
    plVar21 = local_9a0;
    local_9a0 = plVar13;
  }
  bVar33 = local_9a0 != (longlong *)0x0;
  local_9a0 = plVar21;
  if (bVar33) {
    FMemory::Free(plVar13);
  }
  local_770 = 0;
  if (local_778 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_7b8);
  local_7c0 = 0;
  if (local_7c8 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_808);
  param_3 = local_8c8;
  param_1 = local_8d0;
LAB_141e85693:
  puVar28 = local_48;
  lVar22 = 6;
  do {
    puVar28 = puVar28 + -0x19;
    FOpenGLShaderBindings::~FOpenGLShaderBindings(puVar28);
    lVar22 = lVar22 + -1;
  } while (lVar22 != 0);
LAB_141e856d5:
  FOpenGLShaderBindings::operator=(param_1,local_5a8);
  *(undefined4 *)(param_1 + 0xc4) = local_8f0;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *(undefined4 *)(param_1 + 0xb0) = *param_3;
  *(undefined4 *)(param_1 + 0xb4) = uVar3;
  *(undefined4 *)(param_1 + 0xb8) = uVar4;
  *(undefined4 *)(param_1 + 0xbc) = uVar5;
  *(undefined4 *)(param_1 + 0xc0) = param_3[4];
  FOpenGLShaderBindings::~FOpenGLShaderBindings(local_5a8);
  return;
}



// FUNCTION 141e85740 FUN_141e85740 body=2246 status=ok
// SIG undefined FUN_141e85740(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_141e85740(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  ulonglong uVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined *puVar13;
  undefined8 uVar14;
  int *piVar15;
  int iVar16;
  longlong lVar17;
  int *piVar18;
  int iVar19;
  int *piVar20;
  int *piVar21;
  undefined1 auStack_298 [32];
  undefined8 *local_278;
  uint local_270;
  int local_268 [2];
  int local_260 [2];
  int local_258 [2];
  uint local_250;
  uint local_24c;
  uint local_248;
  uint local_240;
  int *local_238;
  longlong local_230;
  ulonglong local_228;
  undefined **local_218 [18];
  undefined8 local_188;
  longlong *local_180;
  ulonglong local_178;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined1 local_160;
  char cStack_15f;
  undefined1 uStack_15e;
  undefined1 uStack_15d;
  undefined1 uStack_15c;
  undefined1 uStack_15b;
  undefined2 uStack_15a;
  undefined2 uStack_158;
  undefined2 uStack_156;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined2 local_84;
  undefined8 local_82;
  undefined8 local_7a;
  undefined1 local_72;
  longlong local_70 [5];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_298;
  FArchive::FArchive(local_218);
  local_218[0] = &PTR_FUN_143f4a3a0;
  piVar18 = (int *)0x0;
  local_178 = 0x7fffffffffffffff;
  local_188 = 0;
  local_180 = param_1;
  FArchive::SetIsLoading(local_218,1);
  FArchive::SetIsPersistent(local_218,1);
  uVar2 = *(uint *)(param_1 + 1);
  iVar16 = 0;
  iVar7 = iVar16;
  if (3 < uVar2) {
    iVar7 = *(int *)((longlong)(int)uVar2 + *param_1 + -4);
  }
  local_178 = (ulonglong)(uVar2 - iVar7);
  local_120 = 0;
  local_128 = 0;
  local_84 = 0;
  local_72 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_82 = 0xffffffffffffffff;
  local_7a = 0xffffffffffffffff;
  local_70[0] = 0;
  local_70[1] = 0;
  local_70[2] = 0;
  local_70[3] = 0;
  FUN_141e8e180(local_218,&local_128);
  if (((int)local_128 == 0x474c534c) && (local_128._4_2_ == 0x5053)) {
    local_230 = 0;
    local_228 = 0;
    `anonymous_namespace'::AppendCString(&local_230,(longlong)(int)local_188 + *param_1);
    lVar17 = local_230;
    uVar2 = (uint)local_228;
    uVar8 = FCrc::MemCrc_DEPRECATED(local_230,local_228 & 0xffffffff,0);
    local_148._0_4_ = 0;
    local_148._4_4_ = 0;
    uStack_140._0_4_ = 0;
    uStack_140._4_4_ = 0;
    local_250 = 0x8b30;
    local_24c = uVar2;
    local_248 = uVar8;
    local_240 = uVar8;
    plVar11 = (longlong *)FUN_141e9b340();
    if ((int)plVar11[1] != *(int *)((longlong)plVar11 + 0x34)) {
      plVar12 = (longlong *)plVar11[8];
      if ((longlong *)plVar11[8] == (longlong *)0x0) {
        plVar12 = plVar11 + 7;
      }
      iVar7 = *(int *)((longlong)plVar12 +
                      ((longlong)(int)(local_248 ^ local_24c ^ local_250) &
                      (longlong)(int)plVar11[9] - 1U) * 4);
      if (iVar7 != -1) {
        lVar3 = *plVar11;
        do {
          lVar1 = (longlong)iVar7 * 0x18;
          if (((*(uint *)(lVar3 + (longlong)iVar7 * 0x18) == local_250) &&
              (*(uint *)(lVar3 + 4 + lVar1) == local_24c)) &&
             (*(uint *)(lVar3 + 8 + lVar1) == local_248)) {
            if ((iVar7 != -1) && (lVar1 + lVar3 != 0)) {
              iVar16 = *(int *)(lVar1 + lVar3 + 0xc);
            }
            break;
          }
          iVar7 = *(int *)(lVar3 + 0x10 + lVar1);
        } while (iVar7 != -1);
      }
    }
    piVar21 = piVar18;
    local_268[0] = iVar16;
    if (iVar16 == 0) {
      local_260[0] = 0x8b30;
      piVar20 = (int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38);
      if ((*piVar20 < DAT_146ab3f00) && (_Init_thread_header(&DAT_146ab3f00), DAT_146ab3f00 == -1))
      {
        DAT_146ab3eb0 = 0;
        _DAT_146ab3eb8 = 0;
        _DAT_146ab3ed0 = 0;
        _DAT_146ab3ed8 = 0;
        _DAT_146ab3ee0 = 0xffffffff;
        DAT_146ab3ee4 = 0;
        DAT_146ab3ef0 = (undefined *)0x0;
        DAT_146ab3ef8 = 0;
        atexit(FUN_143e9e8f0);
        _Init_thread_footer(&DAT_146ab3f00);
      }
      if (DAT_146ab3eb8 != DAT_146ab3ee4) {
        puVar13 = DAT_146ab3ef0;
        if (DAT_146ab3ef0 == (undefined *)0x0) {
          puVar13 = &DAT_146ab3ee8;
        }
        iVar16 = *(int *)(puVar13 + ((longlong)DAT_146ab3ef8 - 1U & (longlong)local_260[0]) * 4);
        while (iVar16 != -1) {
          lVar17 = (longlong)iVar16 * 0x20;
          if (*(int *)(DAT_146ab3eb0 + lVar17) == local_260[0]) {
            if ((iVar16 != -1) && (lVar17 = DAT_146ab3eb0 + lVar17, lVar17 != 0))
            goto LAB_141e85adf;
            break;
          }
          iVar16 = *(int *)(DAT_146ab3eb0 + lVar17 + 0x18);
        }
      }
      local_238 = local_260;
      TSet<TTuple<enum_EFlareQuestCallback::Type,TArray<UFlareQuest_*,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<enum_EFlareQuestCallback::Type,TArray<UFlareQuest_*,FDefaultAllocator>,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<enum_EFlareQuestCallback::Type_const_&>_>
                (&DAT_146ab3eb0,local_258,&local_238,0);
      lVar17 = (longlong)local_258[0] * 0x20 + DAT_146ab3eb0;
LAB_141e85adf:
      iVar16 = *(int *)(lVar17 + 0x10);
      plVar11 = (longlong *)(lVar17 + 8);
      if (iVar16 == 0) {
        do {
          uVar9 = (*DAT_146ab4398)(local_260[0]);
          iVar16 = *(int *)(lVar17 + 0x10);
          *(int *)(lVar17 + 0x10) = iVar16 + 1;
          if (*(int *)(lVar17 + 0x14) < iVar16 + 1) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar11,iVar16);
          }
          *(undefined4 *)(*plVar11 + (longlong)iVar16 * 4) = uVar9;
          iVar16 = *(int *)(lVar17 + 0x10);
        } while (iVar16 < 0x400);
      }
      iVar7 = *(int *)(*plVar11 + -4 + (longlong)iVar16 * 4);
      *(int *)(lVar17 + 0x10) = iVar16 + -1;
      TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(plVar11);
      cVar4 = DAT_146ab3550;
      uStack_15e = DAT_146ab3551 != '\0';
      local_168 = 1;
      uStack_15d = 0;
      uStack_15b = 0;
      uStack_158 = 0;
      uStack_154 = 0;
      if ((bool)uStack_15e) {
        uStack_15d = DAT_1464c9c5a;
        uStack_154 = DAT_1464c9824;
        local_168 = 2;
        uStack_158 = 0x101;
      }
      local_150 = 0;
      uStack_156 = 0;
      uStack_15a = 0;
      uStack_15c = 0;
      local_160 = 0;
      cStack_15f = DAT_146ab3550;
      _local_168 = CONCAT44(DAT_146ab62cc,local_168);
      local_278 = &local_148;
      local_268[0] = iVar7;
      FUN_141e98dc0(&local_230,local_70,0x8b30,&local_168);
      cVar6 = FOpenGLProgramBinaryCache::DeferShaderCompilation(local_268[0],&local_148);
      iVar16 = local_268[0];
      piVar21 = (int *)CONCAT44(local_148._4_4_,(undefined4)local_148);
      if (cVar6 == '\0') {
        local_258[0] = (int)uStack_140 + -1;
        local_238 = piVar21;
        (*DAT_146ab4468)(local_268[0],1,&local_238,local_258);
        (*DAT_146ab4388)(iVar16);
      }
      if (cVar4 != '\0') {
        if ((*piVar20 < DAT_146ab3f18) && (_Init_thread_header(&DAT_146ab3f18), DAT_146ab3f18 == -1)
           ) {
          DAT_146ab3f08 = 0;
          _DAT_146ab3f10 = 0;
          atexit((_func_5014 *)&LAB_143e9e810);
          _Init_thread_footer(&DAT_146ab3f18);
        }
        if (DAT_146ab3f10 == 0) {
          do {
            uVar9 = (*DAT_146ab4390)();
            uVar5 = _DAT_146ab3f10;
            lVar17 = (longlong)DAT_146ab3f10;
            iVar16 = DAT_146ab3f10 + 1;
            _DAT_146ab3f10 = CONCAT44(DAT_146ab3f14,iVar16);
            if (DAT_146ab3f14 < iVar16) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&DAT_146ab3f08,uVar5 & 0xffffffff);
            }
            *(undefined4 *)(DAT_146ab3f08 + lVar17 * 4) = uVar9;
          } while (DAT_146ab3f10 < 0x400);
        }
        iVar19 = DAT_146ab3f10 + -1;
        iVar16 = *(int *)(DAT_146ab3f08 + (longlong)iVar19 * 4);
        iVar10 = (DAT_146ab3f10 - iVar19) + -1;
        iVar7 = DAT_146ab3f10;
        if (iVar10 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(DAT_146ab3f08 + (longlong)iVar19 * 4),
                     (void *)(DAT_146ab3f08 + (longlong)DAT_146ab3f10 * 4),(longlong)iVar10 << 2);
          iVar7 = DAT_146ab3f10;
        }
        _DAT_146ab3f10 = CONCAT44(DAT_146ab3f14,iVar7 + -1);
        TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(&DAT_146ab3f08);
        (*DAT_146ab4a68)(iVar16,0x8258,1);
        (*DAT_146ab4370)(iVar16,local_268[0]);
        (*DAT_146ab4460)(iVar16);
        local_268[0] = iVar16;
      }
      uVar14 = FUN_141e9b340();
      local_148 = &local_250;
      uStack_140 = local_268;
      FUN_141e8a6b0(uVar14,local_258,&local_148,0);
      lVar17 = local_230;
      uVar8 = local_240;
    }
    piVar15 = (int *)operator_new(0xd8);
    piVar20 = piVar18;
    if (piVar15 != (int *)0x0) {
      piVar15[2] = 0;
      piVar15[4] = 0;
      *(undefined ***)piVar15 = &PTR__scalar_deleting_destructor__144ebe628;
      *(undefined1 *)(piVar15 + 5) = 0;
      piVar15[8] = 0;
      piVar15[9] = 0;
      piVar15[10] = 0;
      piVar15[0xb] = 0;
      piVar15[0xc] = 0;
      piVar15[0xd] = 0;
      piVar15[0xe] = 0;
      piVar15[0xf] = 0;
      piVar15[0x10] = 0;
      piVar15[0x11] = 0;
      piVar15[0x12] = 0;
      piVar15[0x13] = 0;
      piVar15[0x14] = 0;
      piVar15[0x15] = 0;
      piVar15[0x16] = 0;
      piVar15[0x18] = 0;
      piVar15[0x19] = 0;
      piVar15[0x1a] = 0;
      piVar15[0x1b] = 0;
      piVar15[0x1c] = 0;
      piVar15[0x1d] = 0;
      piVar15[0x1e] = 0;
      piVar15[0x1f] = 0;
      piVar15[0x20] = 0;
      piVar15[0x21] = 0;
      piVar15[0x22] = 0;
      piVar15[0x23] = 0;
      piVar15[0x24] = 0;
      piVar15[0x25] = 0;
      piVar15[0x26] = 0;
      piVar15[0x27] = 0;
      piVar15[0x28] = 0;
      piVar15[0x29] = 0;
      piVar15[0x2a] = 0;
      piVar15[0x2b] = 0;
      piVar15[0x2c] = 0;
      *(undefined2 *)(piVar15 + 0x2d) = 0;
      *(undefined1 *)((longlong)piVar15 + 0xc6) = 0;
      *(undefined8 *)((longlong)piVar15 + 0xb6) = 0xffffffffffffffff;
      *(undefined8 *)((longlong)piVar15 + 0xbe) = 0xffffffffffffffff;
      piVar15[0x32] = 0;
      piVar15[0x33] = 0;
      piVar15[0x34] = 0;
      piVar15[0x35] = 0;
      _guard_xfg_dispatch_icall_nop(piVar15 + 6,0,0xb0);
      piVar20 = piVar15;
    }
    piVar20[4] = local_268[0];
    FOpenGLShaderBindings::operator=(piVar20 + 6,&local_120);
    FUN_141e8de90(piVar20 + 0x32,local_70 + 2);
    if (DAT_146ab3550 != '\0') {
      if (DAT_1469f59e0 != 0) {
        piVar18 = DAT_1469f59d8;
      }
      if (piVar18 == (int *)0x0) {
        uStack_138 = 0;
        local_148 = (uint *)(ulonglong)uVar8;
        uStack_140 = (int *)0x0;
        if (param_2 != 0) {
          *(uint *)(param_2 + 0x18) = uVar8;
          *(undefined4 *)(param_2 + 0x1c) = 0;
          *(undefined4 *)(param_2 + 0x20) = 0;
          *(undefined4 *)(param_2 + 0x24) = 0;
          *(undefined4 *)(param_2 + 0x28) = 0;
          local_148 = (uint *)(ulonglong)uVar8;
          uStack_140 = (int *)0x0;
        }
      }
    }
    if (piVar21 != (int *)0x0) {
      FMemory::Free(piVar21);
    }
    piVar18 = piVar20;
    if (lVar17 != 0) {
      FMemory::Free(lVar17);
    }
  }
  else {
    local_278._0_4_ = (uint)local_128._4_2_;
    LowLevelFatalErrorHandler
              ("Unknown",0x232,L"Corrupt shader bytecode. GlslMarker=0x%08x FrequencyMarker=0x%04x")
    ;
    local_270 = (uint)local_128._4_2_;
    local_278 = (undefined8 *)CONCAT44(local_278._4_4_,(int)local_128);
    FDebug::AssertFailed
              (&DAT_144eb6c36,"Unknown",0x232,
               L"Corrupt shader bytecode. GlslMarker=0x%08x FrequencyMarker=0x%04x");
  }
  if (local_70[2] != 0) {
    FMemory::Free();
  }
  if (local_70[0] != 0) {
    FMemory::Free();
  }
  FOpenGLShaderBindings::~FOpenGLShaderBindings(&local_120);
  FArchive::~FArchive(local_218);
  return piVar18;
}



// FUNCTION 141e86010 FUN_141e86010 body=2246 status=ok
// SIG undefined FUN_141e86010(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_141e86010(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  ulonglong uVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined *puVar13;
  undefined8 uVar14;
  int *piVar15;
  int iVar16;
  longlong lVar17;
  int *piVar18;
  int iVar19;
  int *piVar20;
  int *piVar21;
  undefined1 auStack_298 [32];
  undefined8 *local_278;
  uint local_270;
  int local_268 [2];
  int local_260 [2];
  int local_258 [2];
  uint local_250;
  uint local_24c;
  uint local_248;
  uint local_240;
  int *local_238;
  longlong local_230;
  ulonglong local_228;
  undefined **local_218 [18];
  undefined8 local_188;
  longlong *local_180;
  ulonglong local_178;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined1 local_160;
  char cStack_15f;
  undefined1 uStack_15e;
  undefined1 uStack_15d;
  undefined1 uStack_15c;
  undefined1 uStack_15b;
  undefined2 uStack_15a;
  undefined2 uStack_158;
  undefined2 uStack_156;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined2 local_84;
  undefined8 local_82;
  undefined8 local_7a;
  undefined1 local_72;
  longlong local_70 [5];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_298;
  FArchive::FArchive(local_218);
  local_218[0] = &PTR_FUN_143f4a3a0;
  piVar18 = (int *)0x0;
  local_178 = 0x7fffffffffffffff;
  local_188 = 0;
  local_180 = param_1;
  FArchive::SetIsLoading(local_218,1);
  FArchive::SetIsPersistent(local_218,1);
  uVar2 = *(uint *)(param_1 + 1);
  iVar16 = 0;
  iVar7 = iVar16;
  if (3 < uVar2) {
    iVar7 = *(int *)((longlong)(int)uVar2 + *param_1 + -4);
  }
  local_178 = (ulonglong)(uVar2 - iVar7);
  local_120 = 0;
  local_128 = 0;
  local_84 = 0;
  local_72 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_82 = 0xffffffffffffffff;
  local_7a = 0xffffffffffffffff;
  local_70[0] = 0;
  local_70[1] = 0;
  local_70[2] = 0;
  local_70[3] = 0;
  FUN_141e8e180(local_218,&local_128);
  if (((int)local_128 == 0x474c534c) && (local_128._4_2_ == 0x5653)) {
    local_230 = 0;
    local_228 = 0;
    `anonymous_namespace'::AppendCString(&local_230,(longlong)(int)local_188 + *param_1);
    lVar17 = local_230;
    uVar2 = (uint)local_228;
    uVar8 = FCrc::MemCrc_DEPRECATED(local_230,local_228 & 0xffffffff,0);
    local_148._0_4_ = 0;
    local_148._4_4_ = 0;
    uStack_140._0_4_ = 0;
    uStack_140._4_4_ = 0;
    local_250 = 0x8b31;
    local_24c = uVar2;
    local_248 = uVar8;
    local_240 = uVar8;
    plVar11 = (longlong *)FUN_141e9b340();
    if ((int)plVar11[1] != *(int *)((longlong)plVar11 + 0x34)) {
      plVar12 = (longlong *)plVar11[8];
      if ((longlong *)plVar11[8] == (longlong *)0x0) {
        plVar12 = plVar11 + 7;
      }
      iVar7 = *(int *)((longlong)plVar12 +
                      ((longlong)(int)(local_248 ^ local_24c ^ local_250) &
                      (longlong)(int)plVar11[9] - 1U) * 4);
      if (iVar7 != -1) {
        lVar3 = *plVar11;
        do {
          lVar1 = (longlong)iVar7 * 0x18;
          if (((*(uint *)(lVar3 + (longlong)iVar7 * 0x18) == local_250) &&
              (*(uint *)(lVar3 + 4 + lVar1) == local_24c)) &&
             (*(uint *)(lVar3 + 8 + lVar1) == local_248)) {
            if ((iVar7 != -1) && (lVar1 + lVar3 != 0)) {
              iVar16 = *(int *)(lVar1 + lVar3 + 0xc);
            }
            break;
          }
          iVar7 = *(int *)(lVar3 + 0x10 + lVar1);
        } while (iVar7 != -1);
      }
    }
    piVar21 = piVar18;
    local_268[0] = iVar16;
    if (iVar16 == 0) {
      local_260[0] = 0x8b31;
      piVar20 = (int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38);
      if ((*piVar20 < DAT_146ab3f00) && (_Init_thread_header(&DAT_146ab3f00), DAT_146ab3f00 == -1))
      {
        DAT_146ab3eb0 = 0;
        _DAT_146ab3eb8 = 0;
        _DAT_146ab3ed0 = 0;
        _DAT_146ab3ed8 = 0;
        _DAT_146ab3ee0 = 0xffffffff;
        DAT_146ab3ee4 = 0;
        DAT_146ab3ef0 = (undefined *)0x0;
        DAT_146ab3ef8 = 0;
        atexit(FUN_143e9e8f0);
        _Init_thread_footer(&DAT_146ab3f00);
      }
      if (DAT_146ab3eb8 != DAT_146ab3ee4) {
        puVar13 = DAT_146ab3ef0;
        if (DAT_146ab3ef0 == (undefined *)0x0) {
          puVar13 = &DAT_146ab3ee8;
        }
        iVar16 = *(int *)(puVar13 + ((longlong)DAT_146ab3ef8 - 1U & (longlong)local_260[0]) * 4);
        while (iVar16 != -1) {
          lVar17 = (longlong)iVar16 * 0x20;
          if (*(int *)(DAT_146ab3eb0 + lVar17) == local_260[0]) {
            if ((iVar16 != -1) && (lVar17 = DAT_146ab3eb0 + lVar17, lVar17 != 0))
            goto LAB_141e863af;
            break;
          }
          iVar16 = *(int *)(DAT_146ab3eb0 + lVar17 + 0x18);
        }
      }
      local_238 = local_260;
      TSet<TTuple<enum_EFlareQuestCallback::Type,TArray<UFlareQuest_*,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<enum_EFlareQuestCallback::Type,TArray<UFlareQuest_*,FDefaultAllocator>,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<enum_EFlareQuestCallback::Type_const_&>_>
                (&DAT_146ab3eb0,local_258,&local_238,0);
      lVar17 = (longlong)local_258[0] * 0x20 + DAT_146ab3eb0;
LAB_141e863af:
      iVar16 = *(int *)(lVar17 + 0x10);
      plVar11 = (longlong *)(lVar17 + 8);
      if (iVar16 == 0) {
        do {
          uVar9 = (*DAT_146ab4398)(local_260[0]);
          iVar16 = *(int *)(lVar17 + 0x10);
          *(int *)(lVar17 + 0x10) = iVar16 + 1;
          if (*(int *)(lVar17 + 0x14) < iVar16 + 1) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar11,iVar16);
          }
          *(undefined4 *)(*plVar11 + (longlong)iVar16 * 4) = uVar9;
          iVar16 = *(int *)(lVar17 + 0x10);
        } while (iVar16 < 0x400);
      }
      iVar7 = *(int *)(*plVar11 + -4 + (longlong)iVar16 * 4);
      *(int *)(lVar17 + 0x10) = iVar16 + -1;
      TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(plVar11);
      cVar4 = DAT_146ab3550;
      uStack_15e = DAT_146ab3551 != '\0';
      local_168 = 1;
      uStack_15d = 0;
      uStack_15b = 0;
      uStack_158 = 0;
      uStack_154 = 0;
      if ((bool)uStack_15e) {
        uStack_15d = DAT_1464c9c5a;
        uStack_154 = DAT_1464c9824;
        local_168 = 2;
        uStack_158 = 0x101;
      }
      local_150 = 0;
      uStack_156 = 0;
      uStack_15a = 0;
      uStack_15c = 0;
      local_160 = 0;
      cStack_15f = DAT_146ab3550;
      _local_168 = CONCAT44(DAT_146ab62cc,local_168);
      local_278 = &local_148;
      local_268[0] = iVar7;
      FUN_141e98dc0(&local_230,local_70,0x8b31,&local_168);
      cVar6 = FOpenGLProgramBinaryCache::DeferShaderCompilation(local_268[0],&local_148);
      iVar16 = local_268[0];
      piVar21 = (int *)CONCAT44(local_148._4_4_,(undefined4)local_148);
      if (cVar6 == '\0') {
        local_258[0] = (int)uStack_140 + -1;
        local_238 = piVar21;
        (*DAT_146ab4468)(local_268[0],1,&local_238,local_258);
        (*DAT_146ab4388)(iVar16);
      }
      if (cVar4 != '\0') {
        if ((*piVar20 < DAT_146ab3f18) && (_Init_thread_header(&DAT_146ab3f18), DAT_146ab3f18 == -1)
           ) {
          DAT_146ab3f08 = 0;
          _DAT_146ab3f10 = 0;
          atexit((_func_5014 *)&LAB_143e9e810);
          _Init_thread_footer(&DAT_146ab3f18);
        }
        if (DAT_146ab3f10 == 0) {
          do {
            uVar9 = (*DAT_146ab4390)();
            uVar5 = _DAT_146ab3f10;
            lVar17 = (longlong)DAT_146ab3f10;
            iVar16 = DAT_146ab3f10 + 1;
            _DAT_146ab3f10 = CONCAT44(DAT_146ab3f14,iVar16);
            if (DAT_146ab3f14 < iVar16) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&DAT_146ab3f08,uVar5 & 0xffffffff);
            }
            *(undefined4 *)(DAT_146ab3f08 + lVar17 * 4) = uVar9;
          } while (DAT_146ab3f10 < 0x400);
        }
        iVar19 = DAT_146ab3f10 + -1;
        iVar16 = *(int *)(DAT_146ab3f08 + (longlong)iVar19 * 4);
        iVar10 = (DAT_146ab3f10 - iVar19) + -1;
        iVar7 = DAT_146ab3f10;
        if (iVar10 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(DAT_146ab3f08 + (longlong)iVar19 * 4),
                     (void *)(DAT_146ab3f08 + (longlong)DAT_146ab3f10 * 4),(longlong)iVar10 << 2);
          iVar7 = DAT_146ab3f10;
        }
        _DAT_146ab3f10 = CONCAT44(DAT_146ab3f14,iVar7 + -1);
        TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(&DAT_146ab3f08);
        (*DAT_146ab4a68)(iVar16,0x8258,1);
        (*DAT_146ab4370)(iVar16,local_268[0]);
        (*DAT_146ab4460)(iVar16);
        local_268[0] = iVar16;
      }
      uVar14 = FUN_141e9b340();
      local_148 = &local_250;
      uStack_140 = local_268;
      FUN_141e8a6b0(uVar14,local_258,&local_148,0);
      lVar17 = local_230;
      uVar8 = local_240;
    }
    piVar15 = (int *)operator_new(0xd8);
    piVar20 = piVar18;
    if (piVar15 != (int *)0x0) {
      piVar15[2] = 0;
      piVar15[4] = 0;
      *(undefined ***)piVar15 = &PTR__scalar_deleting_destructor__144ebe628;
      *(undefined1 *)(piVar15 + 5) = 0;
      piVar15[8] = 0;
      piVar15[9] = 0;
      piVar15[10] = 0;
      piVar15[0xb] = 0;
      piVar15[0xc] = 0;
      piVar15[0xd] = 0;
      piVar15[0xe] = 0;
      piVar15[0xf] = 0;
      piVar15[0x10] = 0;
      piVar15[0x11] = 0;
      piVar15[0x12] = 0;
      piVar15[0x13] = 0;
      piVar15[0x14] = 0;
      piVar15[0x15] = 0;
      piVar15[0x16] = 0;
      piVar15[0x18] = 0;
      piVar15[0x19] = 0;
      piVar15[0x1a] = 0;
      piVar15[0x1b] = 0;
      piVar15[0x1c] = 0;
      piVar15[0x1d] = 0;
      piVar15[0x1e] = 0;
      piVar15[0x1f] = 0;
      piVar15[0x20] = 0;
      piVar15[0x21] = 0;
      piVar15[0x22] = 0;
      piVar15[0x23] = 0;
      piVar15[0x24] = 0;
      piVar15[0x25] = 0;
      piVar15[0x26] = 0;
      piVar15[0x27] = 0;
      piVar15[0x28] = 0;
      piVar15[0x29] = 0;
      piVar15[0x2a] = 0;
      piVar15[0x2b] = 0;
      piVar15[0x2c] = 0;
      *(undefined2 *)(piVar15 + 0x2d) = 0;
      *(undefined1 *)((longlong)piVar15 + 0xc6) = 0;
      *(undefined8 *)((longlong)piVar15 + 0xb6) = 0xffffffffffffffff;
      *(undefined8 *)((longlong)piVar15 + 0xbe) = 0xffffffffffffffff;
      piVar15[0x32] = 0;
      piVar15[0x33] = 0;
      piVar15[0x34] = 0;
      piVar15[0x35] = 0;
      _guard_xfg_dispatch_icall_nop(piVar15 + 6,0,0xb0);
      piVar20 = piVar15;
    }
    piVar20[4] = local_268[0];
    FOpenGLShaderBindings::operator=(piVar20 + 6,&local_120);
    FUN_141e8de90(piVar20 + 0x32,local_70 + 2);
    if (DAT_146ab3550 != '\0') {
      if (DAT_1469f59e0 != 0) {
        piVar18 = DAT_1469f59d8;
      }
      if (piVar18 == (int *)0x0) {
        uStack_138 = 0;
        local_148 = (uint *)(ulonglong)uVar8;
        uStack_140 = (int *)0x0;
        if (param_2 != 0) {
          *(uint *)(param_2 + 0x18) = uVar8;
          *(undefined4 *)(param_2 + 0x1c) = 0;
          *(undefined4 *)(param_2 + 0x20) = 0;
          *(undefined4 *)(param_2 + 0x24) = 0;
          *(undefined4 *)(param_2 + 0x28) = 0;
          local_148 = (uint *)(ulonglong)uVar8;
          uStack_140 = (int *)0x0;
        }
      }
    }
    if (piVar21 != (int *)0x0) {
      FMemory::Free(piVar21);
    }
    piVar18 = piVar20;
    if (lVar17 != 0) {
      FMemory::Free(lVar17);
    }
  }
  else {
    local_278._0_4_ = (uint)local_128._4_2_;
    LowLevelFatalErrorHandler
              ("Unknown",0x232,L"Corrupt shader bytecode. GlslMarker=0x%08x FrequencyMarker=0x%04x")
    ;
    local_270 = (uint)local_128._4_2_;
    local_278 = (undefined8 *)CONCAT44(local_278._4_4_,(int)local_128);
    FDebug::AssertFailed
              (&DAT_144eb6c33,"Unknown",0x232,
               L"Corrupt shader bytecode. GlslMarker=0x%08x FrequencyMarker=0x%04x");
  }
  if (local_70[2] != 0) {
    FMemory::Free();
  }
  if (local_70[0] != 0) {
    FMemory::Free();
  }
  FOpenGLShaderBindings::~FOpenGLShaderBindings(&local_120);
  FArchive::~FArchive(local_218);
  return piVar18;
}



// FUNCTION 141e868e0 FUN_141e868e0 body=2246 status=ok
// SIG undefined FUN_141e868e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_141e868e0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  ulonglong uVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined *puVar13;
  undefined8 uVar14;
  int *piVar15;
  int iVar16;
  longlong lVar17;
  int *piVar18;
  int iVar19;
  int *piVar20;
  int *piVar21;
  undefined1 auStack_298 [32];
  undefined8 *local_278;
  uint local_270;
  int local_268 [2];
  int local_260 [2];
  int local_258 [2];
  uint local_250;
  uint local_24c;
  uint local_248;
  uint local_240;
  int *local_238;
  longlong local_230;
  ulonglong local_228;
  undefined **local_218 [18];
  undefined8 local_188;
  longlong *local_180;
  ulonglong local_178;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined1 local_160;
  char cStack_15f;
  undefined1 uStack_15e;
  undefined1 uStack_15d;
  undefined1 uStack_15c;
  undefined1 uStack_15b;
  undefined2 uStack_15a;
  undefined2 uStack_158;
  undefined2 uStack_156;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined2 local_84;
  undefined8 local_82;
  undefined8 local_7a;
  undefined1 local_72;
  longlong local_70 [5];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_298;
  FArchive::FArchive(local_218);
  local_218[0] = &PTR_FUN_143f4a3a0;
  piVar18 = (int *)0x0;
  local_178 = 0x7fffffffffffffff;
  local_188 = 0;
  local_180 = param_1;
  FArchive::SetIsLoading(local_218,1);
  FArchive::SetIsPersistent(local_218,1);
  uVar2 = *(uint *)(param_1 + 1);
  iVar16 = 0;
  iVar7 = iVar16;
  if (3 < uVar2) {
    iVar7 = *(int *)((longlong)(int)uVar2 + *param_1 + -4);
  }
  local_178 = (ulonglong)(uVar2 - iVar7);
  local_120 = 0;
  local_128 = 0;
  local_84 = 0;
  local_72 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_82 = 0xffffffffffffffff;
  local_7a = 0xffffffffffffffff;
  local_70[0] = 0;
  local_70[1] = 0;
  local_70[2] = 0;
  local_70[3] = 0;
  FUN_141e8e180(local_218,&local_128);
  if (((int)local_128 == 0x474c534c) && (local_128._4_2_ == 0x4753)) {
    local_230 = 0;
    local_228 = 0;
    `anonymous_namespace'::AppendCString(&local_230,(longlong)(int)local_188 + *param_1);
    lVar17 = local_230;
    uVar2 = (uint)local_228;
    uVar8 = FCrc::MemCrc_DEPRECATED(local_230,local_228 & 0xffffffff,0);
    local_148._0_4_ = 0;
    local_148._4_4_ = 0;
    uStack_140._0_4_ = 0;
    uStack_140._4_4_ = 0;
    local_250 = 0x8dd9;
    local_24c = uVar2;
    local_248 = uVar8;
    local_240 = uVar8;
    plVar11 = (longlong *)FUN_141e9b340();
    if ((int)plVar11[1] != *(int *)((longlong)plVar11 + 0x34)) {
      plVar12 = (longlong *)plVar11[8];
      if ((longlong *)plVar11[8] == (longlong *)0x0) {
        plVar12 = plVar11 + 7;
      }
      iVar7 = *(int *)((longlong)plVar12 +
                      ((longlong)(int)(local_248 ^ local_24c ^ local_250) &
                      (longlong)(int)plVar11[9] - 1U) * 4);
      if (iVar7 != -1) {
        lVar3 = *plVar11;
        do {
          lVar1 = (longlong)iVar7 * 0x18;
          if (((*(uint *)(lVar3 + (longlong)iVar7 * 0x18) == local_250) &&
              (*(uint *)(lVar3 + 4 + lVar1) == local_24c)) &&
             (*(uint *)(lVar3 + 8 + lVar1) == local_248)) {
            if ((iVar7 != -1) && (lVar1 + lVar3 != 0)) {
              iVar16 = *(int *)(lVar1 + lVar3 + 0xc);
            }
            break;
          }
          iVar7 = *(int *)(lVar3 + 0x10 + lVar1);
        } while (iVar7 != -1);
      }
    }
    piVar21 = piVar18;
    local_268[0] = iVar16;
    if (iVar16 == 0) {
      local_260[0] = 0x8dd9;
      piVar20 = (int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38);
      if ((*piVar20 < DAT_146ab3f00) && (_Init_thread_header(&DAT_146ab3f00), DAT_146ab3f00 == -1))
      {
        DAT_146ab3eb0 = 0;
        _DAT_146ab3eb8 = 0;
        _DAT_146ab3ed0 = 0;
        _DAT_146ab3ed8 = 0;
        _DAT_146ab3ee0 = 0xffffffff;
        DAT_146ab3ee4 = 0;
        DAT_146ab3ef0 = (undefined *)0x0;
        DAT_146ab3ef8 = 0;
        atexit(FUN_143e9e8f0);
        _Init_thread_footer(&DAT_146ab3f00);
      }
      if (DAT_146ab3eb8 != DAT_146ab3ee4) {
        puVar13 = DAT_146ab3ef0;
        if (DAT_146ab3ef0 == (undefined *)0x0) {
          puVar13 = &DAT_146ab3ee8;
        }
        iVar16 = *(int *)(puVar13 + ((longlong)DAT_146ab3ef8 - 1U & (longlong)local_260[0]) * 4);
        while (iVar16 != -1) {
          lVar17 = (longlong)iVar16 * 0x20;
          if (*(int *)(DAT_146ab3eb0 + lVar17) == local_260[0]) {
            if ((iVar16 != -1) && (lVar17 = DAT_146ab3eb0 + lVar17, lVar17 != 0))
            goto LAB_141e86c7f;
            break;
          }
          iVar16 = *(int *)(DAT_146ab3eb0 + lVar17 + 0x18);
        }
      }
      local_238 = local_260;
      TSet<TTuple<enum_EFlareQuestCallback::Type,TArray<UFlareQuest_*,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<enum_EFlareQuestCallback::Type,TArray<UFlareQuest_*,FDefaultAllocator>,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<enum_EFlareQuestCallback::Type_const_&>_>
                (&DAT_146ab3eb0,local_258,&local_238,0);
      lVar17 = (longlong)local_258[0] * 0x20 + DAT_146ab3eb0;
LAB_141e86c7f:
      iVar16 = *(int *)(lVar17 + 0x10);
      plVar11 = (longlong *)(lVar17 + 8);
      if (iVar16 == 0) {
        do {
          uVar9 = (*DAT_146ab4398)(local_260[0]);
          iVar16 = *(int *)(lVar17 + 0x10);
          *(int *)(lVar17 + 0x10) = iVar16 + 1;
          if (*(int *)(lVar17 + 0x14) < iVar16 + 1) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar11,iVar16);
          }
          *(undefined4 *)(*plVar11 + (longlong)iVar16 * 4) = uVar9;
          iVar16 = *(int *)(lVar17 + 0x10);
        } while (iVar16 < 0x400);
      }
      iVar7 = *(int *)(*plVar11 + -4 + (longlong)iVar16 * 4);
      *(int *)(lVar17 + 0x10) = iVar16 + -1;
      TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(plVar11);
      cVar4 = DAT_146ab3550;
      uStack_15e = DAT_146ab3551 != '\0';
      local_168 = 1;
      uStack_15d = 0;
      uStack_15b = 0;
      uStack_158 = 0;
      uStack_154 = 0;
      if ((bool)uStack_15e) {
        uStack_15d = DAT_1464c9c5a;
        uStack_154 = DAT_1464c9824;
        local_168 = 2;
        uStack_158 = 0x101;
      }
      local_150 = 0;
      uStack_156 = 0;
      uStack_15a = 0;
      uStack_15c = 0;
      local_160 = 0;
      cStack_15f = DAT_146ab3550;
      _local_168 = CONCAT44(DAT_146ab62cc,local_168);
      local_278 = &local_148;
      local_268[0] = iVar7;
      FUN_141e98dc0(&local_230,local_70,0x8dd9,&local_168);
      cVar6 = FOpenGLProgramBinaryCache::DeferShaderCompilation(local_268[0],&local_148);
      iVar16 = local_268[0];
      piVar21 = (int *)CONCAT44(local_148._4_4_,(undefined4)local_148);
      if (cVar6 == '\0') {
        local_258[0] = (int)uStack_140 + -1;
        local_238 = piVar21;
        (*DAT_146ab4468)(local_268[0],1,&local_238,local_258);
        (*DAT_146ab4388)(iVar16);
      }
      if (cVar4 != '\0') {
        if ((*piVar20 < DAT_146ab3f18) && (_Init_thread_header(&DAT_146ab3f18), DAT_146ab3f18 == -1)
           ) {
          DAT_146ab3f08 = 0;
          _DAT_146ab3f10 = 0;
          atexit((_func_5014 *)&LAB_143e9e810);
          _Init_thread_footer(&DAT_146ab3f18);
        }
        if (DAT_146ab3f10 == 0) {
          do {
            uVar9 = (*DAT_146ab4390)();
            uVar5 = _DAT_146ab3f10;
            lVar17 = (longlong)DAT_146ab3f10;
            iVar16 = DAT_146ab3f10 + 1;
            _DAT_146ab3f10 = CONCAT44(DAT_146ab3f14,iVar16);
            if (DAT_146ab3f14 < iVar16) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&DAT_146ab3f08,uVar5 & 0xffffffff);
            }
            *(undefined4 *)(DAT_146ab3f08 + lVar17 * 4) = uVar9;
          } while (DAT_146ab3f10 < 0x400);
        }
        iVar19 = DAT_146ab3f10 + -1;
        iVar16 = *(int *)(DAT_146ab3f08 + (longlong)iVar19 * 4);
        iVar10 = (DAT_146ab3f10 - iVar19) + -1;
        iVar7 = DAT_146ab3f10;
        if (iVar10 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(DAT_146ab3f08 + (longlong)iVar19 * 4),
                     (void *)(DAT_146ab3f08 + (longlong)DAT_146ab3f10 * 4),(longlong)iVar10 << 2);
          iVar7 = DAT_146ab3f10;
        }
        _DAT_146ab3f10 = CONCAT44(DAT_146ab3f14,iVar7 + -1);
        TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(&DAT_146ab3f08);
        (*DAT_146ab4a68)(iVar16,0x8258,1);
        (*DAT_146ab4370)(iVar16,local_268[0]);
        (*DAT_146ab4460)(iVar16);
        local_268[0] = iVar16;
      }
      uVar14 = FUN_141e9b340();
      local_148 = &local_250;
      uStack_140 = local_268;
      FUN_141e8a6b0(uVar14,local_258,&local_148,0);
      lVar17 = local_230;
      uVar8 = local_240;
    }
    piVar15 = (int *)operator_new(0xd8);
    piVar20 = piVar18;
    if (piVar15 != (int *)0x0) {
      piVar15[2] = 0;
      piVar15[4] = 0;
      *(undefined ***)piVar15 = &PTR__scalar_deleting_destructor__144ebe628;
      *(undefined1 *)(piVar15 + 5) = 0;
      piVar15[8] = 0;
      piVar15[9] = 0;
      piVar15[10] = 0;
      piVar15[0xb] = 0;
      piVar15[0xc] = 0;
      piVar15[0xd] = 0;
      piVar15[0xe] = 0;
      piVar15[0xf] = 0;
      piVar15[0x10] = 0;
      piVar15[0x11] = 0;
      piVar15[0x12] = 0;
      piVar15[0x13] = 0;
      piVar15[0x14] = 0;
      piVar15[0x15] = 0;
      piVar15[0x16] = 0;
      piVar15[0x18] = 0;
      piVar15[0x19] = 0;
      piVar15[0x1a] = 0;
      piVar15[0x1b] = 0;
      piVar15[0x1c] = 0;
      piVar15[0x1d] = 0;
      piVar15[0x1e] = 0;
      piVar15[0x1f] = 0;
      piVar15[0x20] = 0;
      piVar15[0x21] = 0;
      piVar15[0x22] = 0;
      piVar15[0x23] = 0;
      piVar15[0x24] = 0;
      piVar15[0x25] = 0;
      piVar15[0x26] = 0;
      piVar15[0x27] = 0;
      piVar15[0x28] = 0;
      piVar15[0x29] = 0;
      piVar15[0x2a] = 0;
      piVar15[0x2b] = 0;
      piVar15[0x2c] = 0;
      *(undefined2 *)(piVar15 + 0x2d) = 0;
      *(undefined1 *)((longlong)piVar15 + 0xc6) = 0;
      *(undefined8 *)((longlong)piVar15 + 0xb6) = 0xffffffffffffffff;
      *(undefined8 *)((longlong)piVar15 + 0xbe) = 0xffffffffffffffff;
      piVar15[0x32] = 0;
      piVar15[0x33] = 0;
      piVar15[0x34] = 0;
      piVar15[0x35] = 0;
      _guard_xfg_dispatch_icall_nop(piVar15 + 6,0,0xb0);
      piVar20 = piVar15;
    }
    piVar20[4] = local_268[0];
    FOpenGLShaderBindings::operator=(piVar20 + 6,&local_120);
    FUN_141e8de90(piVar20 + 0x32,local_70 + 2);
    if (DAT_146ab3550 != '\0') {
      if (DAT_1469f59e0 != 0) {
        piVar18 = DAT_1469f59d8;
      }
      if (piVar18 == (int *)0x0) {
        uStack_138 = 0;
        local_148 = (uint *)(ulonglong)uVar8;
        uStack_140 = (int *)0x0;
        if (param_2 != 0) {
          *(uint *)(param_2 + 0x18) = uVar8;
          *(undefined4 *)(param_2 + 0x1c) = 0;
          *(undefined4 *)(param_2 + 0x20) = 0;
          *(undefined4 *)(param_2 + 0x24) = 0;
          *(undefined4 *)(param_2 + 0x28) = 0;
          local_148 = (uint *)(ulonglong)uVar8;
          uStack_140 = (int *)0x0;
        }
      }
    }
    if (piVar21 != (int *)0x0) {
      FMemory::Free(piVar21);
    }
    piVar18 = piVar20;
    if (lVar17 != 0) {
      FMemory::Free(lVar17);
    }
  }
  else {
    local_278._0_4_ = (uint)local_128._4_2_;
    LowLevelFatalErrorHandler
              ("Unknown",0x232,L"Corrupt shader bytecode. GlslMarker=0x%08x FrequencyMarker=0x%04x")
    ;
    local_270 = (uint)local_128._4_2_;
    local_278 = (undefined8 *)CONCAT44(local_278._4_4_,(int)local_128);
    FDebug::AssertFailed
              (&DAT_144eb6c37,"Unknown",0x232,
               L"Corrupt shader bytecode. GlslMarker=0x%08x FrequencyMarker=0x%04x");
  }
  if (local_70[2] != 0) {
    FMemory::Free();
  }
  if (local_70[0] != 0) {
    FMemory::Free();
  }
  FOpenGLShaderBindings::~FOpenGLShaderBindings(&local_120);
  FArchive::~FArchive(local_218);
  return piVar18;
}



// FUNCTION 141e871b0 FUN_141e871b0 body=2262 status=ok
// SIG undefined FUN_141e871b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_141e871b0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  ulonglong uVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined *puVar13;
  undefined8 uVar14;
  int *piVar15;
  int iVar16;
  longlong lVar17;
  int *piVar18;
  int iVar19;
  int *piVar20;
  int *piVar21;
  undefined1 auStack_298 [32];
  undefined8 *local_278;
  uint local_270;
  int local_268 [2];
  int local_260 [2];
  int local_258 [2];
  uint local_250;
  uint local_24c;
  uint local_248;
  uint local_240;
  int *local_238;
  longlong local_230;
  ulonglong local_228;
  undefined **local_218 [18];
  undefined8 local_188;
  longlong *local_180;
  ulonglong local_178;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined1 local_160;
  char cStack_15f;
  undefined1 uStack_15e;
  undefined1 uStack_15d;
  undefined1 uStack_15c;
  undefined1 uStack_15b;
  undefined2 uStack_15a;
  undefined2 uStack_158;
  undefined2 uStack_156;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined2 local_84;
  undefined8 local_82;
  undefined8 local_7a;
  undefined1 local_72;
  longlong local_70 [5];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_298;
  FArchive::FArchive(local_218);
  local_218[0] = &PTR_FUN_143f4a3a0;
  piVar18 = (int *)0x0;
  local_178 = 0x7fffffffffffffff;
  local_188 = 0;
  local_180 = param_1;
  FArchive::SetIsLoading(local_218,1);
  FArchive::SetIsPersistent(local_218,1);
  uVar2 = *(uint *)(param_1 + 1);
  iVar16 = 0;
  iVar7 = iVar16;
  if (3 < uVar2) {
    iVar7 = *(int *)((longlong)(int)uVar2 + *param_1 + -4);
  }
  local_178 = (ulonglong)(uVar2 - iVar7);
  local_120 = 0;
  local_128 = 0;
  local_84 = 0;
  local_72 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_82 = 0xffffffffffffffff;
  local_7a = 0xffffffffffffffff;
  local_70[0] = 0;
  local_70[1] = 0;
  local_70[2] = 0;
  local_70[3] = 0;
  FUN_141e8e180(local_218,&local_128);
  if (((int)local_128 == 0x474c534c) && ((local_128._4_2_ == 0x4453 || (DAT_146ab053b == '\0')))) {
    local_230 = 0;
    local_228 = 0;
    `anonymous_namespace'::AppendCString(&local_230,(longlong)(int)local_188 + *param_1);
    lVar17 = local_230;
    uVar2 = (uint)local_228;
    uVar8 = FCrc::MemCrc_DEPRECATED(local_230,local_228 & 0xffffffff,0);
    local_148._0_4_ = 0;
    local_148._4_4_ = 0;
    uStack_140._0_4_ = 0;
    uStack_140._4_4_ = 0;
    local_250 = 0x8e87;
    local_24c = uVar2;
    local_248 = uVar8;
    local_240 = uVar8;
    plVar11 = (longlong *)FUN_141e9b340();
    if ((int)plVar11[1] != *(int *)((longlong)plVar11 + 0x34)) {
      plVar12 = (longlong *)plVar11[8];
      if ((longlong *)plVar11[8] == (longlong *)0x0) {
        plVar12 = plVar11 + 7;
      }
      iVar7 = *(int *)((longlong)plVar12 +
                      ((longlong)(int)(local_248 ^ local_24c ^ local_250) &
                      (longlong)(int)plVar11[9] - 1U) * 4);
      if (iVar7 != -1) {
        lVar3 = *plVar11;
        do {
          lVar1 = (longlong)iVar7 * 0x18;
          if (((*(uint *)(lVar3 + (longlong)iVar7 * 0x18) == local_250) &&
              (*(uint *)(lVar3 + 4 + lVar1) == local_24c)) &&
             (*(uint *)(lVar3 + 8 + lVar1) == local_248)) {
            if ((iVar7 != -1) && (lVar1 + lVar3 != 0)) {
              iVar16 = *(int *)(lVar1 + lVar3 + 0xc);
            }
            break;
          }
          iVar7 = *(int *)(lVar3 + 0x10 + lVar1);
        } while (iVar7 != -1);
      }
    }
    piVar21 = piVar18;
    local_268[0] = iVar16;
    if (iVar16 == 0) {
      local_260[0] = 0x8e87;
      piVar20 = (int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38);
      if ((*piVar20 < DAT_146ab3f00) && (_Init_thread_header(&DAT_146ab3f00), DAT_146ab3f00 == -1))
      {
        DAT_146ab3eb0 = 0;
        _DAT_146ab3eb8 = 0;
        _DAT_146ab3ed0 = 0;
        _DAT_146ab3ed8 = 0;
        _DAT_146ab3ee0 = 0xffffffff;
        DAT_146ab3ee4 = 0;
        DAT_146ab3ef0 = (undefined *)0x0;
        DAT_146ab3ef8 = 0;
        atexit(FUN_143e9e8f0);
        _Init_thread_footer(&DAT_146ab3f00);
      }
      if (DAT_146ab3eb8 != DAT_146ab3ee4) {
        puVar13 = DAT_146ab3ef0;
        if (DAT_146ab3ef0 == (undefined *)0x0) {
          puVar13 = &DAT_146ab3ee8;
        }
        iVar16 = *(int *)(puVar13 + ((longlong)DAT_146ab3ef8 - 1U & (longlong)local_260[0]) * 4);
        while (iVar16 != -1) {
          lVar17 = (longlong)iVar16 * 0x20;
          if (*(int *)(DAT_146ab3eb0 + lVar17) == local_260[0]) {
            if ((iVar16 != -1) && (lVar17 = DAT_146ab3eb0 + lVar17, lVar17 != 0))
            goto LAB_141e8755f;
            break;
          }
          iVar16 = *(int *)(DAT_146ab3eb0 + lVar17 + 0x18);
        }
      }
      local_238 = local_260;
      TSet<TTuple<enum_EFlareQuestCallback::Type,TArray<UFlareQuest_*,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<enum_EFlareQuestCallback::Type,TArray<UFlareQuest_*,FDefaultAllocator>,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<enum_EFlareQuestCallback::Type_const_&>_>
                (&DAT_146ab3eb0,local_258,&local_238,0);
      lVar17 = (longlong)local_258[0] * 0x20 + DAT_146ab3eb0;
LAB_141e8755f:
      iVar16 = *(int *)(lVar17 + 0x10);
      plVar11 = (longlong *)(lVar17 + 8);
      if (iVar16 == 0) {
        do {
          uVar9 = (*DAT_146ab4398)(local_260[0]);
          iVar16 = *(int *)(lVar17 + 0x10);
          *(int *)(lVar17 + 0x10) = iVar16 + 1;
          if (*(int *)(lVar17 + 0x14) < iVar16 + 1) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar11,iVar16);
          }
          *(undefined4 *)(*plVar11 + (longlong)iVar16 * 4) = uVar9;
          iVar16 = *(int *)(lVar17 + 0x10);
        } while (iVar16 < 0x400);
      }
      iVar7 = *(int *)(*plVar11 + -4 + (longlong)iVar16 * 4);
      *(int *)(lVar17 + 0x10) = iVar16 + -1;
      TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(plVar11);
      cVar4 = DAT_146ab3550;
      uStack_15e = DAT_146ab3551 != '\0';
      local_168 = 1;
      uStack_15d = 0;
      uStack_15b = 0;
      uStack_158 = 0;
      uStack_154 = 0;
      if ((bool)uStack_15e) {
        uStack_15d = DAT_1464c9c5a;
        uStack_154 = DAT_1464c9824;
        local_168 = 2;
        uStack_158 = 0x101;
      }
      local_150 = 0;
      uStack_156 = 0;
      uStack_15a = 0;
      uStack_15c = 0;
      local_160 = 0;
      cStack_15f = DAT_146ab3550;
      _local_168 = CONCAT44(DAT_146ab62cc,local_168);
      local_278 = &local_148;
      local_268[0] = iVar7;
      FUN_141e98dc0(&local_230,local_70,0x8e87,&local_168);
      cVar6 = FOpenGLProgramBinaryCache::DeferShaderCompilation(local_268[0],&local_148);
      iVar16 = local_268[0];
      piVar21 = (int *)CONCAT44(local_148._4_4_,(undefined4)local_148);
      if (cVar6 == '\0') {
        local_258[0] = (int)uStack_140 + -1;
        local_238 = piVar21;
        (*DAT_146ab4468)(local_268[0],1,&local_238,local_258);
        (*DAT_146ab4388)(iVar16);
      }
      if (cVar4 != '\0') {
        if ((*piVar20 < DAT_146ab3f18) && (_Init_thread_header(&DAT_146ab3f18), DAT_146ab3f18 == -1)
           ) {
          DAT_146ab3f08 = 0;
          _DAT_146ab3f10 = 0;
          atexit((_func_5014 *)&LAB_143e9e810);
          _Init_thread_footer(&DAT_146ab3f18);
        }
        if (DAT_146ab3f10 == 0) {
          do {
            uVar9 = (*DAT_146ab4390)();
            uVar5 = _DAT_146ab3f10;
            lVar17 = (longlong)DAT_146ab3f10;
            iVar16 = DAT_146ab3f10 + 1;
            _DAT_146ab3f10 = CONCAT44(DAT_146ab3f14,iVar16);
            if (DAT_146ab3f14 < iVar16) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&DAT_146ab3f08,uVar5 & 0xffffffff);
            }
            *(undefined4 *)(DAT_146ab3f08 + lVar17 * 4) = uVar9;
          } while (DAT_146ab3f10 < 0x400);
        }
        iVar19 = DAT_146ab3f10 + -1;
        iVar16 = *(int *)(DAT_146ab3f08 + (longlong)iVar19 * 4);
        iVar10 = (DAT_146ab3f10 - iVar19) + -1;
        iVar7 = DAT_146ab3f10;
        if (iVar10 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(DAT_146ab3f08 + (longlong)iVar19 * 4),
                     (void *)(DAT_146ab3f08 + (longlong)DAT_146ab3f10 * 4),(longlong)iVar10 << 2);
          iVar7 = DAT_146ab3f10;
        }
        _DAT_146ab3f10 = CONCAT44(DAT_146ab3f14,iVar7 + -1);
        TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(&DAT_146ab3f08);
        (*DAT_146ab4a68)(iVar16,0x8258,1);
        (*DAT_146ab4370)(iVar16,local_268[0]);
        (*DAT_146ab4460)(iVar16);
        local_268[0] = iVar16;
      }
      uVar14 = FUN_141e9b340();
      local_148 = &local_250;
      uStack_140 = local_268;
      FUN_141e8a6b0(uVar14,local_258,&local_148,0);
      lVar17 = local_230;
      uVar8 = local_240;
    }
    piVar15 = (int *)operator_new(0xd8);
    piVar20 = piVar18;
    if (piVar15 != (int *)0x0) {
      piVar15[2] = 0;
      piVar15[4] = 0;
      *(undefined ***)piVar15 = &PTR__scalar_deleting_destructor__144ebe628;
      *(undefined1 *)(piVar15 + 5) = 0;
      piVar15[8] = 0;
      piVar15[9] = 0;
      piVar15[10] = 0;
      piVar15[0xb] = 0;
      piVar15[0xc] = 0;
      piVar15[0xd] = 0;
      piVar15[0xe] = 0;
      piVar15[0xf] = 0;
      piVar15[0x10] = 0;
      piVar15[0x11] = 0;
      piVar15[0x12] = 0;
      piVar15[0x13] = 0;
      piVar15[0x14] = 0;
      piVar15[0x15] = 0;
      piVar15[0x16] = 0;
      piVar15[0x18] = 0;
      piVar15[0x19] = 0;
      piVar15[0x1a] = 0;
      piVar15[0x1b] = 0;
      piVar15[0x1c] = 0;
      piVar15[0x1d] = 0;
      piVar15[0x1e] = 0;
      piVar15[0x1f] = 0;
      piVar15[0x20] = 0;
      piVar15[0x21] = 0;
      piVar15[0x22] = 0;
      piVar15[0x23] = 0;
      piVar15[0x24] = 0;
      piVar15[0x25] = 0;
      piVar15[0x26] = 0;
      piVar15[0x27] = 0;
      piVar15[0x28] = 0;
      piVar15[0x29] = 0;
      piVar15[0x2a] = 0;
      piVar15[0x2b] = 0;
      piVar15[0x2c] = 0;
      *(undefined2 *)(piVar15 + 0x2d) = 0;
      *(undefined1 *)((longlong)piVar15 + 0xc6) = 0;
      *(undefined8 *)((longlong)piVar15 + 0xb6) = 0xffffffffffffffff;
      *(undefined8 *)((longlong)piVar15 + 0xbe) = 0xffffffffffffffff;
      piVar15[0x32] = 0;
      piVar15[0x33] = 0;
      piVar15[0x34] = 0;
      piVar15[0x35] = 0;
      _guard_xfg_dispatch_icall_nop(piVar15 + 6,0,0xb0);
      piVar20 = piVar15;
    }
    piVar20[4] = local_268[0];
    FOpenGLShaderBindings::operator=(piVar20 + 6,&local_120);
    FUN_141e8de90(piVar20 + 0x32,local_70 + 2);
    if (DAT_146ab3550 != '\0') {
      if (DAT_1469f59e0 != 0) {
        piVar18 = DAT_1469f59d8;
      }
      if (piVar18 == (int *)0x0) {
        uStack_138 = 0;
        local_148 = (uint *)(ulonglong)uVar8;
        uStack_140 = (int *)0x0;
        if (param_2 != 0) {
          *(uint *)(param_2 + 0x18) = uVar8;
          *(undefined4 *)(param_2 + 0x1c) = 0;
          *(undefined4 *)(param_2 + 0x20) = 0;
          *(undefined4 *)(param_2 + 0x24) = 0;
          *(undefined4 *)(param_2 + 0x28) = 0;
          local_148 = (uint *)(ulonglong)uVar8;
          uStack_140 = (int *)0x0;
        }
      }
    }
    if (piVar21 != (int *)0x0) {
      FMemory::Free(piVar21);
    }
    piVar18 = piVar20;
    if (lVar17 != 0) {
      FMemory::Free(lVar17);
    }
  }
  else {
    local_278._0_4_ = (uint)local_128._4_2_;
    LowLevelFatalErrorHandler
              ("Unknown",0x232,L"Corrupt shader bytecode. GlslMarker=0x%08x FrequencyMarker=0x%04x")
    ;
    local_270 = (uint)local_128._4_2_;
    local_278 = (undefined8 *)CONCAT44(local_278._4_4_,(int)local_128);
    FDebug::AssertFailed
              (&DAT_144eb6c92,"Unknown",0x232,
               L"Corrupt shader bytecode. GlslMarker=0x%08x FrequencyMarker=0x%04x");
  }
  if (local_70[2] != 0) {
    FMemory::Free();
  }
  if (local_70[0] != 0) {
    FMemory::Free();
  }
  FOpenGLShaderBindings::~FOpenGLShaderBindings(&local_120);
  FArchive::~FArchive(local_218);
  return piVar18;
}



// FUNCTION 141e87a90 FUN_141e87a90 body=2262 status=ok
// SIG undefined FUN_141e87a90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_141e87a90(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  ulonglong uVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined *puVar13;
  undefined8 uVar14;
  int *piVar15;
  int iVar16;
  longlong lVar17;
  int *piVar18;
  int iVar19;
  int *piVar20;
  int *piVar21;
  undefined1 auStack_298 [32];
  undefined8 *local_278;
  uint local_270;
  int local_268 [2];
  int local_260 [2];
  int local_258 [2];
  uint local_250;
  uint local_24c;
  uint local_248;
  uint local_240;
  int *local_238;
  longlong local_230;
  ulonglong local_228;
  undefined **local_218 [18];
  undefined8 local_188;
  longlong *local_180;
  ulonglong local_178;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined1 local_160;
  char cStack_15f;
  undefined1 uStack_15e;
  undefined1 uStack_15d;
  undefined1 uStack_15c;
  undefined1 uStack_15b;
  undefined2 uStack_15a;
  undefined2 uStack_158;
  undefined2 uStack_156;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined2 local_84;
  undefined8 local_82;
  undefined8 local_7a;
  undefined1 local_72;
  longlong local_70 [5];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_298;
  FArchive::FArchive(local_218);
  local_218[0] = &PTR_FUN_143f4a3a0;
  piVar18 = (int *)0x0;
  local_178 = 0x7fffffffffffffff;
  local_188 = 0;
  local_180 = param_1;
  FArchive::SetIsLoading(local_218,1);
  FArchive::SetIsPersistent(local_218,1);
  uVar2 = *(uint *)(param_1 + 1);
  iVar16 = 0;
  iVar7 = iVar16;
  if (3 < uVar2) {
    iVar7 = *(int *)((longlong)(int)uVar2 + *param_1 + -4);
  }
  local_178 = (ulonglong)(uVar2 - iVar7);
  local_120 = 0;
  local_128 = 0;
  local_84 = 0;
  local_72 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_82 = 0xffffffffffffffff;
  local_7a = 0xffffffffffffffff;
  local_70[0] = 0;
  local_70[1] = 0;
  local_70[2] = 0;
  local_70[3] = 0;
  FUN_141e8e180(local_218,&local_128);
  if (((int)local_128 == 0x474c534c) && ((local_128._4_2_ == 0x4853 || (DAT_146ab053b == '\0')))) {
    local_230 = 0;
    local_228 = 0;
    `anonymous_namespace'::AppendCString(&local_230,(longlong)(int)local_188 + *param_1);
    lVar17 = local_230;
    uVar2 = (uint)local_228;
    uVar8 = FCrc::MemCrc_DEPRECATED(local_230,local_228 & 0xffffffff,0);
    local_148._0_4_ = 0;
    local_148._4_4_ = 0;
    uStack_140._0_4_ = 0;
    uStack_140._4_4_ = 0;
    local_250 = 0x8e88;
    local_24c = uVar2;
    local_248 = uVar8;
    local_240 = uVar8;
    plVar11 = (longlong *)FUN_141e9b340();
    if ((int)plVar11[1] != *(int *)((longlong)plVar11 + 0x34)) {
      plVar12 = (longlong *)plVar11[8];
      if ((longlong *)plVar11[8] == (longlong *)0x0) {
        plVar12 = plVar11 + 7;
      }
      iVar7 = *(int *)((longlong)plVar12 +
                      ((longlong)(int)(local_248 ^ local_24c ^ local_250) &
                      (longlong)(int)plVar11[9] - 1U) * 4);
      if (iVar7 != -1) {
        lVar3 = *plVar11;
        do {
          lVar1 = (longlong)iVar7 * 0x18;
          if (((*(uint *)(lVar3 + (longlong)iVar7 * 0x18) == local_250) &&
              (*(uint *)(lVar3 + 4 + lVar1) == local_24c)) &&
             (*(uint *)(lVar3 + 8 + lVar1) == local_248)) {
            if ((iVar7 != -1) && (lVar1 + lVar3 != 0)) {
              iVar16 = *(int *)(lVar1 + lVar3 + 0xc);
            }
            break;
          }
          iVar7 = *(int *)(lVar3 + 0x10 + lVar1);
        } while (iVar7 != -1);
      }
    }
    piVar21 = piVar18;
    local_268[0] = iVar16;
    if (iVar16 == 0) {
      local_260[0] = 0x8e88;
      piVar20 = (int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38);
      if ((*piVar20 < DAT_146ab3f00) && (_Init_thread_header(&DAT_146ab3f00), DAT_146ab3f00 == -1))
      {
        DAT_146ab3eb0 = 0;
        _DAT_146ab3eb8 = 0;
        _DAT_146ab3ed0 = 0;
        _DAT_146ab3ed8 = 0;
        _DAT_146ab3ee0 = 0xffffffff;
        DAT_146ab3ee4 = 0;
        DAT_146ab3ef0 = (undefined *)0x0;
        DAT_146ab3ef8 = 0;
        atexit(FUN_143e9e8f0);
        _Init_thread_footer(&DAT_146ab3f00);
      }
      if (DAT_146ab3eb8 != DAT_146ab3ee4) {
        puVar13 = DAT_146ab3ef0;
        if (DAT_146ab3ef0 == (undefined *)0x0) {
          puVar13 = &DAT_146ab3ee8;
        }
        iVar16 = *(int *)(puVar13 + ((longlong)DAT_146ab3ef8 - 1U & (longlong)local_260[0]) * 4);
        while (iVar16 != -1) {
          lVar17 = (longlong)iVar16 * 0x20;
          if (*(int *)(DAT_146ab3eb0 + lVar17) == local_260[0]) {
            if ((iVar16 != -1) && (lVar17 = DAT_146ab3eb0 + lVar17, lVar17 != 0))
            goto LAB_141e87e3f;
            break;
          }
          iVar16 = *(int *)(DAT_146ab3eb0 + lVar17 + 0x18);
        }
      }
      local_238 = local_260;
      TSet<TTuple<enum_EFlareQuestCallback::Type,TArray<UFlareQuest_*,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<enum_EFlareQuestCallback::Type,TArray<UFlareQuest_*,FDefaultAllocator>,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<enum_EFlareQuestCallback::Type_const_&>_>
                (&DAT_146ab3eb0,local_258,&local_238,0);
      lVar17 = (longlong)local_258[0] * 0x20 + DAT_146ab3eb0;
LAB_141e87e3f:
      iVar16 = *(int *)(lVar17 + 0x10);
      plVar11 = (longlong *)(lVar17 + 8);
      if (iVar16 == 0) {
        do {
          uVar9 = (*DAT_146ab4398)(local_260[0]);
          iVar16 = *(int *)(lVar17 + 0x10);
          *(int *)(lVar17 + 0x10) = iVar16 + 1;
          if (*(int *)(lVar17 + 0x14) < iVar16 + 1) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar11,iVar16);
          }
          *(undefined4 *)(*plVar11 + (longlong)iVar16 * 4) = uVar9;
          iVar16 = *(int *)(lVar17 + 0x10);
        } while (iVar16 < 0x400);
      }
      iVar7 = *(int *)(*plVar11 + -4 + (longlong)iVar16 * 4);
      *(int *)(lVar17 + 0x10) = iVar16 + -1;
      TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(plVar11);
      cVar4 = DAT_146ab3550;
      uStack_15e = DAT_146ab3551 != '\0';
      local_168 = 1;
      uStack_15d = 0;
      uStack_15b = 0;
      uStack_158 = 0;
      uStack_154 = 0;
      if ((bool)uStack_15e) {
        uStack_15d = DAT_1464c9c5a;
        uStack_154 = DAT_1464c9824;
        local_168 = 2;
        uStack_158 = 0x101;
      }
      local_150 = 0;
      uStack_156 = 0;
      uStack_15a = 0;
      uStack_15c = 0;
      local_160 = 0;
      cStack_15f = DAT_146ab3550;
      _local_168 = CONCAT44(DAT_146ab62cc,local_168);
      local_278 = &local_148;
      local_268[0] = iVar7;
      FUN_141e98dc0(&local_230,local_70,0x8e88,&local_168);
      cVar6 = FOpenGLProgramBinaryCache::DeferShaderCompilation(local_268[0],&local_148);
      iVar16 = local_268[0];
      piVar21 = (int *)CONCAT44(local_148._4_4_,(undefined4)local_148);
      if (cVar6 == '\0') {
        local_258[0] = (int)uStack_140 + -1;
        local_238 = piVar21;
        (*DAT_146ab4468)(local_268[0],1,&local_238,local_258);
        (*DAT_146ab4388)(iVar16);
      }
      if (cVar4 != '\0') {
        if ((*piVar20 < DAT_146ab3f18) && (_Init_thread_header(&DAT_146ab3f18), DAT_146ab3f18 == -1)
           ) {
          DAT_146ab3f08 = 0;
          _DAT_146ab3f10 = 0;
          atexit((_func_5014 *)&LAB_143e9e810);
          _Init_thread_footer(&DAT_146ab3f18);
        }
        if (DAT_146ab3f10 == 0) {
          do {
            uVar9 = (*DAT_146ab4390)();
            uVar5 = _DAT_146ab3f10;
            lVar17 = (longlong)DAT_146ab3f10;
            iVar16 = DAT_146ab3f10 + 1;
            _DAT_146ab3f10 = CONCAT44(DAT_146ab3f14,iVar16);
            if (DAT_146ab3f14 < iVar16) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&DAT_146ab3f08,uVar5 & 0xffffffff);
            }
            *(undefined4 *)(DAT_146ab3f08 + lVar17 * 4) = uVar9;
          } while (DAT_146ab3f10 < 0x400);
        }
        iVar19 = DAT_146ab3f10 + -1;
        iVar16 = *(int *)(DAT_146ab3f08 + (longlong)iVar19 * 4);
        iVar10 = (DAT_146ab3f10 - iVar19) + -1;
        iVar7 = DAT_146ab3f10;
        if (iVar10 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(DAT_146ab3f08 + (longlong)iVar19 * 4),
                     (void *)(DAT_146ab3f08 + (longlong)DAT_146ab3f10 * 4),(longlong)iVar10 << 2);
          iVar7 = DAT_146ab3f10;
        }
        _DAT_146ab3f10 = CONCAT44(DAT_146ab3f14,iVar7 + -1);
        TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(&DAT_146ab3f08);
        (*DAT_146ab4a68)(iVar16,0x8258,1);
        (*DAT_146ab4370)(iVar16,local_268[0]);
        (*DAT_146ab4460)(iVar16);
        local_268[0] = iVar16;
      }
      uVar14 = FUN_141e9b340();
      local_148 = &local_250;
      uStack_140 = local_268;
      FUN_141e8a6b0(uVar14,local_258,&local_148,0);
      lVar17 = local_230;
      uVar8 = local_240;
    }
    piVar15 = (int *)operator_new(0xd8);
    piVar20 = piVar18;
    if (piVar15 != (int *)0x0) {
      piVar15[2] = 0;
      piVar15[4] = 0;
      *(undefined ***)piVar15 = &PTR__scalar_deleting_destructor__144ebe628;
      *(undefined1 *)(piVar15 + 5) = 0;
      piVar15[8] = 0;
      piVar15[9] = 0;
      piVar15[10] = 0;
      piVar15[0xb] = 0;
      piVar15[0xc] = 0;
      piVar15[0xd] = 0;
      piVar15[0xe] = 0;
      piVar15[0xf] = 0;
      piVar15[0x10] = 0;
      piVar15[0x11] = 0;
      piVar15[0x12] = 0;
      piVar15[0x13] = 0;
      piVar15[0x14] = 0;
      piVar15[0x15] = 0;
      piVar15[0x16] = 0;
      piVar15[0x18] = 0;
      piVar15[0x19] = 0;
      piVar15[0x1a] = 0;
      piVar15[0x1b] = 0;
      piVar15[0x1c] = 0;
      piVar15[0x1d] = 0;
      piVar15[0x1e] = 0;
      piVar15[0x1f] = 0;
      piVar15[0x20] = 0;
      piVar15[0x21] = 0;
      piVar15[0x22] = 0;
      piVar15[0x23] = 0;
      piVar15[0x24] = 0;
      piVar15[0x25] = 0;
      piVar15[0x26] = 0;
      piVar15[0x27] = 0;
      piVar15[0x28] = 0;
      piVar15[0x29] = 0;
      piVar15[0x2a] = 0;
      piVar15[0x2b] = 0;
      piVar15[0x2c] = 0;
      *(undefined2 *)(piVar15 + 0x2d) = 0;
      *(undefined1 *)((longlong)piVar15 + 0xc6) = 0;
      *(undefined8 *)((longlong)piVar15 + 0xb6) = 0xffffffffffffffff;
      *(undefined8 *)((longlong)piVar15 + 0xbe) = 0xffffffffffffffff;
      piVar15[0x32] = 0;
      piVar15[0x33] = 0;
      piVar15[0x34] = 0;
      piVar15[0x35] = 0;
      _guard_xfg_dispatch_icall_nop(piVar15 + 6,0,0xb0);
      piVar20 = piVar15;
    }
    piVar20[4] = local_268[0];
    FOpenGLShaderBindings::operator=(piVar20 + 6,&local_120);
    FUN_141e8de90(piVar20 + 0x32,local_70 + 2);
    if (DAT_146ab3550 != '\0') {
      if (DAT_1469f59e0 != 0) {
        piVar18 = DAT_1469f59d8;
      }
      if (piVar18 == (int *)0x0) {
        uStack_138 = 0;
        local_148 = (uint *)(ulonglong)uVar8;
        uStack_140 = (int *)0x0;
        if (param_2 != 0) {
          *(uint *)(param_2 + 0x18) = uVar8;
          *(undefined4 *)(param_2 + 0x1c) = 0;
          *(undefined4 *)(param_2 + 0x20) = 0;
          *(undefined4 *)(param_2 + 0x24) = 0;
          *(undefined4 *)(param_2 + 0x28) = 0;
          local_148 = (uint *)(ulonglong)uVar8;
          uStack_140 = (int *)0x0;
        }
      }
    }
    if (piVar21 != (int *)0x0) {
      FMemory::Free(piVar21);
    }
    piVar18 = piVar20;
    if (lVar17 != 0) {
      FMemory::Free(lVar17);
    }
  }
  else {
    local_278._0_4_ = (uint)local_128._4_2_;
    LowLevelFatalErrorHandler
              ("Unknown",0x232,L"Corrupt shader bytecode. GlslMarker=0x%08x FrequencyMarker=0x%04x")
    ;
    local_270 = (uint)local_128._4_2_;
    local_278 = (undefined8 *)CONCAT44(local_278._4_4_,(int)local_128);
    FDebug::AssertFailed
              (&DAT_144eb6c67,"Unknown",0x232,
               L"Corrupt shader bytecode. GlslMarker=0x%08x FrequencyMarker=0x%04x");
  }
  if (local_70[2] != 0) {
    FMemory::Free();
  }
  if (local_70[0] != 0) {
    FMemory::Free();
  }
  FOpenGLShaderBindings::~FOpenGLShaderBindings(&local_120);
  FArchive::~FArchive(local_218);
  return piVar18;
}



// FUNCTION 141e88370 FUN_141e88370 body=2421 status=ok
// SIG undefined FUN_141e88370(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141e88370(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  ulonglong uVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  int iVar16;
  longlong lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  int iVar20;
  int *piVar21;
  undefined8 *puVar22;
  undefined1 auStack_2e8 [32];
  undefined8 **local_2c8;
  uint local_2c0;
  int local_2b8 [2];
  int local_2b0 [2];
  uint local_2a8;
  uint local_2a4;
  uint local_2a0;
  int local_298;
  int local_294;
  uint local_290;
  longlong local_288;
  ulonglong local_280;
  undefined8 *local_278;
  undefined8 local_270;
  uint local_268;
  undefined1 local_264 [4];
  int *local_260;
  undefined8 *local_258;
  uint *local_250;
  int *local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined **local_218 [18];
  undefined8 local_188;
  longlong *local_180;
  ulonglong local_178;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined1 local_160;
  char cStack_15f;
  undefined1 uStack_15e;
  undefined1 uStack_15d;
  undefined1 uStack_15c;
  undefined1 uStack_15b;
  undefined2 uStack_15a;
  undefined2 uStack_158;
  undefined2 uStack_156;
  undefined4 uStack_154;
  undefined4 local_150;
  uint local_148;
  undefined8 uStack_144;
  undefined8 uStack_13c;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined2 local_84;
  undefined8 local_82;
  undefined8 local_7a;
  undefined1 local_72;
  longlong local_70 [5];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_2e8;
  FArchive::FArchive(local_218);
  local_218[0] = &PTR_FUN_143f4a3a0;
  puVar19 = (undefined8 *)0x0;
  local_178 = 0x7fffffffffffffff;
  local_188 = 0;
  local_180 = param_1;
  FArchive::SetIsLoading(local_218,1);
  FArchive::SetIsPersistent(local_218,1);
  uVar2 = *(uint *)(param_1 + 1);
  iVar16 = 0;
  iVar7 = iVar16;
  if (3 < uVar2) {
    iVar7 = *(int *)((longlong)(int)uVar2 + *param_1 + -4);
  }
  local_178 = (ulonglong)(uVar2 - iVar7);
  local_120 = 0;
  local_128 = 0;
  local_84 = 0;
  local_72 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_82 = 0xffffffffffffffff;
  local_7a = 0xffffffffffffffff;
  local_70[0] = 0;
  local_70[1] = 0;
  local_70[2] = 0;
  local_70[3] = 0;
  FUN_141e8e180(local_218,&local_128);
  if (((int)local_128 == 0x474c534c) && ((local_128._4_2_ == 0x4353 || (DAT_1464c97cc == '\0')))) {
    local_288 = 0;
    local_280 = 0;
    `anonymous_namespace'::AppendCString(&local_288,(longlong)(int)local_188 + *param_1);
    lVar17 = local_288;
    uVar2 = (uint)local_280;
    uVar8 = FCrc::MemCrc_DEPRECATED(local_288,local_280 & 0xffffffff,0);
    local_278 = (undefined8 *)0x0;
    local_270 = 0;
    local_2a8 = 0x91b9;
    local_2a4 = uVar2;
    local_2a0 = uVar8;
    local_290 = uVar8;
    local_268 = uVar8;
    plVar11 = (longlong *)FUN_141e9b340();
    if ((int)plVar11[1] != *(int *)((longlong)plVar11 + 0x34)) {
      plVar12 = (longlong *)plVar11[8];
      if ((longlong *)plVar11[8] == (longlong *)0x0) {
        plVar12 = plVar11 + 7;
      }
      iVar7 = *(int *)((longlong)plVar12 +
                      ((longlong)(int)(local_2a0 ^ local_2a4 ^ local_2a8) &
                      (longlong)(int)plVar11[9] - 1U) * 4);
      if (iVar7 != -1) {
        lVar3 = *plVar11;
        do {
          lVar1 = (longlong)iVar7 * 0x18;
          if (((*(uint *)(lVar1 + lVar3) == local_2a8) &&
              (*(uint *)(lVar1 + 4 + lVar3) == local_2a4)) &&
             (*(uint *)(lVar1 + 8 + lVar3) == local_2a0)) {
            if ((iVar7 != -1) && (lVar1 + lVar3 != 0)) {
              iVar16 = *(int *)(lVar1 + lVar3 + 0xc);
            }
            break;
          }
          iVar7 = *(int *)(lVar1 + 0x10 + lVar3);
        } while (iVar7 != -1);
      }
    }
    puVar22 = puVar19;
    local_2b8[0] = iVar16;
    if (iVar16 == 0) {
      local_2b0[0] = 0x91b9;
      piVar21 = (int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38);
      if ((*piVar21 < DAT_146ab3f00) && (_Init_thread_header(&DAT_146ab3f00), DAT_146ab3f00 == -1))
      {
        DAT_146ab3eb0 = 0;
        _DAT_146ab3eb8 = 0;
        _DAT_146ab3ed0 = 0;
        _DAT_146ab3ed8 = 0;
        _DAT_146ab3ee0 = 0xffffffff;
        DAT_146ab3ee4 = 0;
        DAT_146ab3ef0 = (undefined *)0x0;
        DAT_146ab3ef8 = 0;
        atexit(FUN_143e9e8f0);
        _Init_thread_footer(&DAT_146ab3f00);
      }
      if (DAT_146ab3eb8 != DAT_146ab3ee4) {
        puVar13 = DAT_146ab3ef0;
        if (DAT_146ab3ef0 == (undefined *)0x0) {
          puVar13 = &DAT_146ab3ee8;
        }
        iVar16 = *(int *)(puVar13 + ((longlong)DAT_146ab3ef8 - 1U & (longlong)local_2b0[0]) * 4);
        while (iVar16 != -1) {
          lVar17 = (longlong)iVar16 * 0x20;
          if (*(int *)(DAT_146ab3eb0 + lVar17) == local_2b0[0]) {
            if ((iVar16 != -1) && (lVar17 = DAT_146ab3eb0 + lVar17, lVar17 != 0))
            goto LAB_141e8872d;
            break;
          }
          iVar16 = *(int *)(DAT_146ab3eb0 + lVar17 + 0x18);
        }
      }
      local_260 = local_2b0;
      TSet<TTuple<enum_EFlareQuestCallback::Type,TArray<UFlareQuest_*,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<enum_EFlareQuestCallback::Type,TArray<UFlareQuest_*,FDefaultAllocator>,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<enum_EFlareQuestCallback::Type_const_&>_>
                (&DAT_146ab3eb0,&local_298,&local_260,0);
      lVar17 = (longlong)local_298 * 0x20 + DAT_146ab3eb0;
LAB_141e8872d:
      iVar16 = *(int *)(lVar17 + 0x10);
      plVar11 = (longlong *)(lVar17 + 8);
      if (iVar16 == 0) {
        do {
          uVar9 = (*DAT_146ab4398)(local_2b0[0]);
          iVar16 = *(int *)(lVar17 + 0x10);
          *(int *)(lVar17 + 0x10) = iVar16 + 1;
          if (*(int *)(lVar17 + 0x14) < iVar16 + 1) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar11,iVar16);
          }
          *(undefined4 *)(*plVar11 + (longlong)iVar16 * 4) = uVar9;
          iVar16 = *(int *)(lVar17 + 0x10);
        } while (iVar16 < 0x400);
      }
      iVar7 = *(int *)(*plVar11 + -4 + (longlong)iVar16 * 4);
      *(int *)(lVar17 + 0x10) = iVar16 + -1;
      TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(plVar11);
      cVar4 = DAT_146ab3550;
      uStack_15e = DAT_146ab3551 != '\0';
      local_168 = 1;
      uStack_15d = 0;
      uStack_15b = 0;
      uStack_158 = 0;
      uStack_154 = 0;
      if ((bool)uStack_15e) {
        uStack_15d = DAT_1464c9c5a;
        uStack_154 = DAT_1464c9824;
        local_168 = 2;
        uStack_158 = 0x101;
      }
      local_150 = 0;
      uStack_156 = 0;
      uStack_15a = 0;
      uStack_15c = 0;
      local_160 = 0;
      cStack_15f = DAT_146ab3550;
      _local_168 = CONCAT44(DAT_146ab62cc,local_168);
      local_2c8 = &local_278;
      local_2b8[0] = iVar7;
      FUN_141e98dc0(&local_288,local_70,0x91b9,&local_168);
      cVar6 = FOpenGLProgramBinaryCache::DeferShaderCompilation(local_2b8[0],&local_278);
      puVar22 = local_278;
      iVar16 = local_2b8[0];
      if (cVar6 == '\0') {
        local_294 = (int)local_270 + -1;
        local_258 = local_278;
        (*DAT_146ab4468)(local_2b8[0],1,&local_258,&local_294);
        (*DAT_146ab4388)(iVar16);
      }
      if (cVar4 != '\0') {
        local_240 = 0;
        local_238 = 0;
        local_230 = 0;
        local_228 = 0;
        if ((*piVar21 < DAT_146ab3f18) && (_Init_thread_header(&DAT_146ab3f18), DAT_146ab3f18 == -1)
           ) {
          DAT_146ab3f08 = 0;
          _DAT_146ab3f10 = 0;
          atexit((_func_5014 *)&LAB_143e9e810);
          _Init_thread_footer(&DAT_146ab3f18);
        }
        if (DAT_146ab3f10 == 0) {
          do {
            uVar9 = (*DAT_146ab4390)();
            uVar5 = _DAT_146ab3f10;
            lVar17 = (longlong)DAT_146ab3f10;
            iVar16 = DAT_146ab3f10 + 1;
            _DAT_146ab3f10 = CONCAT44(DAT_146ab3f14,iVar16);
            if (DAT_146ab3f14 < iVar16) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&DAT_146ab3f08,uVar5 & 0xffffffff);
            }
            *(undefined4 *)(DAT_146ab3f08 + lVar17 * 4) = uVar9;
          } while (DAT_146ab3f10 < 0x400);
        }
        iVar20 = DAT_146ab3f10 + -1;
        iVar16 = *(int *)(DAT_146ab3f08 + (longlong)iVar20 * 4);
        iVar10 = (DAT_146ab3f10 - iVar20) + -1;
        iVar7 = DAT_146ab3f10;
        if (iVar10 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(DAT_146ab3f08 + (longlong)iVar20 * 4),
                     (void *)(DAT_146ab3f08 + (longlong)DAT_146ab3f10 * 4),(longlong)iVar10 << 2);
          iVar7 = DAT_146ab3f10;
        }
        _DAT_146ab3f10 = CONCAT44(DAT_146ab3f14,iVar7 + -1);
        TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(&DAT_146ab3f08);
        (*DAT_146ab4a68)(iVar16,0x8258,1);
        (*DAT_146ab4370)(iVar16,local_2b8[0]);
        (*DAT_146ab4460)(iVar16);
        local_2b8[0] = iVar16;
      }
      uVar14 = FUN_141e9b340();
      local_250 = &local_2a8;
      local_248 = local_2b8;
      FUN_141e8a6b0(uVar14,local_264,&local_250,0);
      lVar17 = local_288;
      uVar8 = local_290;
    }
    puVar15 = (undefined8 *)operator_new(0x108);
    puVar18 = puVar19;
    if (puVar15 != (undefined8 *)0x0) {
      *puVar15 = &PTR_FUN_143f3ece8;
      *(undefined4 *)(puVar15 + 1) = 0;
      *(undefined4 *)((longlong)puVar15 + 0xc) = 0;
      *(undefined2 *)(puVar15 + 2) = 0x100;
      puVar15[3] = 0;
      puVar15[4] = 0;
      *(undefined4 *)(puVar15 + 5) = 0;
      puVar15[6] = 0;
      *(undefined4 *)(puVar15 + 7) = 0;
      *(undefined1 *)((longlong)puVar15 + 0x3c) = 0;
      puVar15[9] = 0;
      puVar15[10] = 0;
      puVar15[0xb] = 0;
      puVar15[0xc] = 0;
      puVar15[0xd] = 0;
      puVar15[0xe] = 0;
      puVar15[0xf] = 0;
      *(undefined4 *)(puVar15 + 0x10) = 0;
      puVar15[0x11] = 0;
      puVar15[0x12] = 0;
      puVar15[0x13] = 0;
      puVar15[0x14] = 0;
      puVar15[0x15] = 0;
      puVar15[0x16] = 0;
      puVar15[0x17] = 0;
      puVar15[0x18] = 0;
      puVar15[0x19] = 0;
      puVar15[0x1a] = 0;
      *(undefined4 *)(puVar15 + 0x1b) = 0;
      *(undefined2 *)((longlong)puVar15 + 0xdc) = 0;
      *(undefined1 *)((longlong)puVar15 + 0xee) = 0;
      *(undefined8 *)((longlong)puVar15 + 0xde) = 0xffffffffffffffff;
      *(undefined8 *)((longlong)puVar15 + 0xe6) = 0xffffffffffffffff;
      puVar15[0x1e] = 0;
      puVar15[0x1f] = 0;
      _guard_xfg_dispatch_icall_nop(puVar15 + 8,0,0xb0);
      puVar15[0x20] = 0;
      *puVar15 = &PTR__scalar_deleting_destructor__144ebe320;
      puVar18 = puVar15;
    }
    *(int *)(puVar18 + 7) = local_2b8[0];
    FOpenGLShaderBindings::operator=(puVar18 + 8,&local_120);
    FUN_141e8de90(puVar18 + 0x1e,local_70 + 2);
    if (DAT_146ab3550 != '\0') {
      if (DAT_1469f59e0 != 0) {
        puVar19 = DAT_1469f59d8;
      }
      if (puVar19 == (undefined8 *)0x0) {
        uStack_144 = 0;
        uStack_13c = 0;
        local_148 = uVar8;
        if (param_2 == 0) {
          *(uint *)(puVar18 + 3) = uVar8;
          *(undefined4 *)((longlong)puVar18 + 0x1c) = 0;
          *(undefined4 *)(puVar18 + 4) = 0;
          *(undefined4 *)((longlong)puVar18 + 0x24) = 0;
          *(undefined4 *)(puVar18 + 5) = 0;
        }
        else {
          *(uint *)(param_2 + 0x18) = uVar8;
          *(undefined4 *)(param_2 + 0x1c) = 0;
          *(undefined4 *)(param_2 + 0x20) = 0;
          *(undefined4 *)(param_2 + 0x24) = 0;
          *(undefined4 *)(param_2 + 0x28) = 0;
        }
      }
    }
    if (puVar22 != (undefined8 *)0x0) {
      FMemory::Free(puVar22);
    }
    puVar19 = puVar18;
    if (lVar17 != 0) {
      FMemory::Free(lVar17);
    }
  }
  else {
    local_2c8._0_4_ = (uint)local_128._4_2_;
    LowLevelFatalErrorHandler
              ("Unknown",0x232,L"Corrupt shader bytecode. GlslMarker=0x%08x FrequencyMarker=0x%04x")
    ;
    local_2c0 = (uint)local_128._4_2_;
    local_2c8 = (undefined8 **)CONCAT44(local_2c8._4_4_,(int)local_128);
    FDebug::AssertFailed
              (&DAT_144eb6cc6,"Unknown",0x232,
               L"Corrupt shader bytecode. GlslMarker=0x%08x FrequencyMarker=0x%04x");
  }
  if (local_70[2] != 0) {
    FMemory::Free();
  }
  if (local_70[0] != 0) {
    FMemory::Free();
  }
  FOpenGLShaderBindings::~FOpenGLShaderBindings(&local_120);
  FArchive::~FArchive(local_218);
  return puVar19;
}



// FUNCTION 141e88cf0 CopyToEmpty<FOpenGLShaderVarying,int> body=205 status=ok
// SIG undefined CopyToEmpty<FOpenGLShaderVarying,int>(void)

void TArray<FOpenGLShaderVarying,TSizedDefaultAllocator<32>_>::CopyToEmpty<FOpenGLShaderVarying,int>
               (undefined8 *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  void *_Src;
  undefined4 *puVar3;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(param_1,param_3 + param_5,param_4);
  param_1 = (undefined8 *)*param_1;
  if (param_3 != 0) {
    puVar3 = (undefined4 *)(param_2 + 0x10);
    do {
      *param_1 = 0;
      iVar1 = puVar3[-2];
      _Src = *(void **)(puVar3 + -4);
      *(int *)(param_1 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(param_1,iVar1,0);
        ::_guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar1);
      }
      uVar2 = *puVar3;
      puVar3 = puVar3 + 6;
      *(undefined4 *)(param_1 + 2) = uVar2;
      param_1 = param_1 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 141e88dc0 FUN_141e88dc0 body=741 status=ok
// SIG undefined FUN_141e88dc0(void)

int * FUN_141e88dc0(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char cVar11;
  uint uVar12;
  ulonglong *_Src;
  uint *puVar13;
  int iVar14;
  bool local_res8;
  
  iVar7 = 1;
  iVar14 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar10 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar10 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar10 = (int)param_1[6];
    iVar9 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar8 = *(int *)(*param_1 + 4 + (longlong)iVar10 * 0x18);
    *(int *)(param_1 + 6) = iVar8;
    *(int *)((longlong)param_1 + 0x34) = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x18) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = iVar10;
  local_res8 = false;
  lVar5 = (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  puVar13 = (uint *)((longlong)plVar6 + lVar5);
  *puVar13 = *puVar13 | 1 << ((byte)iVar10 & 0x1f);
  lVar1 = (longlong)iVar10 * 0x18;
  _Src = (ulonglong *)(*param_1 + lVar1);
  uVar4 = *(uint *)*param_3;
  *_Src = (ulonglong)uVar4;
  _Src[1] = 0;
  *(undefined4 *)(_Src + 2) = 0xffffffff;
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar12 != 1) {
    iVar9 = iVar14;
    if (uVar12 != 0) {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar8 = *(int *)((longlong)plVar6 +
                      ((longlong)(int)uVar4 & (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar8 != -1) {
        do {
          iVar9 = iVar8;
          if (*(ulonglong *)(*param_1 + (longlong)iVar8 * 0x18) == (ulonglong)uVar4) break;
          iVar8 = *(int *)(*param_1 + 0x10 + (longlong)iVar8 * 0x18);
          iVar9 = iVar14;
        } while (iVar8 != -1);
      }
    }
    local_res8 = iVar9 != -1;
    if (local_res8) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar9 * 0x18),_Src,0x10);
      bVar3 = (byte)iVar10 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = iVar10;
      }
      lVar2 = *param_1;
      *(undefined4 *)(lVar1 + lVar2) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar14 = (int)param_1[6];
      }
      *(int *)(lVar1 + 4 + lVar2) = iVar14;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar10;
      plVar6 = (longlong *)param_1[4];
      *param_2 = iVar9;
      if (plVar6 == (longlong *)0x0) {
        plVar6 = param_1 + 2;
      }
      puVar13 = (uint *)((longlong)plVar6 + lVar5);
      *puVar13 = *puVar13 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_141e89076;
    }
  }
  if (3 < uVar12) {
    uVar4 = (uVar12 >> 1) + 8;
    iVar14 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    iVar7 = 0x20;
    if (uVar4 != 0) {
      iVar7 = 0x1f - iVar14;
    }
    uVar4 = (uVar12 >> 1) + 7;
    iVar14 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    if (uVar4 == 0) {
      cVar11 = '\0';
    }
    else {
      cVar11 = '\x1f' - (char)iVar14;
    }
    iVar7 = 1 << (~(byte)((iVar7 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
  }
  if (((int)uVar12 < 1) || (((int)param_1[9] != 0 && (iVar7 <= (int)param_1[9])))) {
    uVar4 = (int)(*_Src >> 0x20) * 0x17 + (int)*_Src & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x14) = uVar4;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 2) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4) =
         iVar10;
  }
  else {
    *(int *)(param_1 + 9) = iVar7;
    TSet<TTuple<__int64,__int64>,TDefaultMapHashableKeyFuncs<__int64,__int64,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_141e89076:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 141e890b0 FUN_141e890b0 body=595 status=ok
// SIG undefined FUN_141e890b0(void)

int * FUN_141e890b0(longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  void *_Dst;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  bool bVar8;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar6 + 1) {
      TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(param_1,iVar6);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar6 = (int)param_1[6];
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar4 = *(int *)((longlong)iVar6 * 0x60 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar4;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)((longlong)iVar4 * 0x60 + *param_1) = 0xffffffff;
    }
  }
  plVar3 = (longlong *)param_1[4];
  *param_2 = iVar6;
  if (plVar3 == (longlong *)0x0) {
    plVar3 = param_1 + 2;
  }
  puVar7 = (uint *)((longlong)plVar3 + (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar7 = *puVar7 | 1 << ((byte)iVar6 & 0x1f);
  puVar7 = (uint *)((longlong)iVar6 * 0x60 + *param_1);
  TKeyInitializer<int_&&>::operator<int,FUserNavigationState>_TTuple<int,FUserNavigationState>
            (param_3,puVar7);
  puVar7[0x16] = 0xffffffff;
  bVar8 = false;
  iVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar6 != 1) {
    if (iVar6 != 0) {
      plVar3 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar3 = param_1 + 7;
      }
      iVar4 = *(int *)((longlong)plVar3 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar7) * 4);
      if (iVar4 != -1) {
        do {
          if (*(uint *)((longlong)iVar4 * 0x60 + *param_1) == *puVar7) goto LAB_141e8920f;
          iVar4 = *(int *)((longlong)iVar4 * 0x60 + 0x58 + *param_1);
        } while (iVar4 != -1);
      }
    }
    iVar4 = -1;
LAB_141e8920f:
    bVar8 = iVar4 != -1;
    if (bVar8) {
      _Dst = (void *)((longlong)iVar4 * 0x60 + *param_1);
      *(undefined4 *)((longlong)_Dst + 0x50) = 0;
      if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                ((longlong)_Dst + 8);
      _guard_xfg_dispatch_icall_nop(_Dst,puVar7,0x58);
      TSparseArray<TSetElement<TTuple<unsigned___int64,TSet<IAkUserEventCallbackPackage_*,DefaultKeyFuncs<IAkUserEventCallbackPackage_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar4;
      goto LAB_141e892db;
    }
  }
  cVar1 = TSet<TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>,TDefaultMapHashableKeyFuncs<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar6,0);
  if (cVar1 == '\0') {
    uVar5 = (int)param_1[9] - 1U & *puVar7;
    puVar7[0x17] = uVar5;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    puVar7[0x16] = *(uint *)((longlong)plVar3 +
                            ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) =
         *param_2;
  }
LAB_141e892db:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar8;
  }
  return param_2;
}



// FUNCTION 141e89310 FUN_141e89310 body=595 status=ok
// SIG undefined FUN_141e89310(void)

int * FUN_141e89310(longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  void *_Dst;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  bool bVar8;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar6 + 1) {
      TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(param_1,iVar6);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar6 = (int)param_1[6];
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar4 = *(int *)((longlong)iVar6 * 0x60 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar4;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)((longlong)iVar4 * 0x60 + *param_1) = 0xffffffff;
    }
  }
  plVar3 = (longlong *)param_1[4];
  *param_2 = iVar6;
  if (plVar3 == (longlong *)0x0) {
    plVar3 = param_1 + 2;
  }
  puVar7 = (uint *)((longlong)plVar3 + (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar7 = *puVar7 | 1 << ((byte)iVar6 & 0x1f);
  puVar7 = (uint *)((longlong)iVar6 * 0x60 + *param_1);
  TKeyInitializer<unsigned_int_const_&>::
  operator<unsigned_int,TMap<__int64,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,__int64,0>_>_>_TTuple<unsigned_int,TMap<__int64,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,__int64,0>_>_>
            (param_3,puVar7);
  puVar7[0x16] = 0xffffffff;
  bVar8 = false;
  iVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar6 != 1) {
    if (iVar6 != 0) {
      plVar3 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar3 = param_1 + 7;
      }
      iVar4 = *(int *)((longlong)plVar3 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar7) * 4);
      if (iVar4 != -1) {
        do {
          if (*(uint *)((longlong)iVar4 * 0x60 + *param_1) == *puVar7) goto LAB_141e8946f;
          iVar4 = *(int *)((longlong)iVar4 * 0x60 + 0x58 + *param_1);
        } while (iVar4 != -1);
      }
    }
    iVar4 = -1;
LAB_141e8946f:
    bVar8 = iVar4 != -1;
    if (bVar8) {
      _Dst = (void *)((longlong)iVar4 * 0x60 + *param_1);
      *(undefined4 *)((longlong)_Dst + 0x50) = 0;
      if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                ((longlong)_Dst + 8);
      _guard_xfg_dispatch_icall_nop(_Dst,puVar7,0x58);
      TSparseArray<TSetElement<TTuple<unsigned___int64,TSet<IAkUserEventCallbackPackage_*,DefaultKeyFuncs<IAkUserEventCallbackPackage_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar4;
      goto LAB_141e8953b;
    }
  }
  cVar1 = TSet<TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>,TDefaultMapHashableKeyFuncs<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar6,0);
  if (cVar1 == '\0') {
    uVar5 = (int)param_1[9] - 1U & *puVar7;
    puVar7[0x17] = uVar5;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    puVar7[0x16] = *(uint *)((longlong)plVar3 +
                            ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) =
         *param_2;
  }
LAB_141e8953b:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar8;
  }
  return param_2;
}



// FUNCTION 141e89570 FUN_141e89570 body=758 status=ok
// SIG undefined FUN_141e89570(void)

int * FUN_141e89570(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  undefined4 *puVar10;
  int iVar11;
  longlong *_Src;
  uint uVar12;
  char cVar13;
  int iVar14;
  bool bVar15;
  
  iVar8 = 1;
  iVar14 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar11 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar11 = (int)param_1[6];
    iVar2 = *(int *)((longlong)iVar11 * 0x20 + 4 + *param_1);
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = iVar11;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar7 + (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  plVar7 = (longlong *)*param_3;
  bVar15 = false;
  _Src = (longlong *)((longlong)iVar11 * 0x20 + *param_1);
  *_Src = *plVar7;
  *(short *)(_Src + 1) = (short)plVar7[1];
  _Src[2] = 0;
  *(undefined4 *)(_Src + 3) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar11 = iVar14;
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      iVar5 = FCrc::MemCrc32(_Src,10,0);
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      iVar5 = *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar5) * 4);
      if (iVar5 != -1) {
        lVar3 = *param_1;
        do {
          lVar9 = (longlong)iVar5 * 0x20;
          if ((*(longlong *)(lVar9 + lVar3) == *_Src) &&
             (iVar11 = iVar5, *(short *)(lVar9 + 8 + lVar3) == (short)_Src[1])) break;
          iVar5 = *(int *)(lVar9 + 0x18 + lVar3);
          iVar11 = iVar14;
        } while (iVar5 != -1);
      }
    }
    bVar15 = iVar11 != -1;
    if (bVar15) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar11 * 0x20 + *param_1),_Src,0x18);
      iVar8 = *param_2;
      bVar4 = (byte)iVar8 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar8;
      }
      puVar10 = (undefined4 *)((longlong)iVar8 * 0x20 + *param_1);
      *puVar10 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar14 = (int)param_1[6];
      }
      puVar10[1] = iVar14;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar8;
      plVar7 = (longlong *)param_1[4];
      *param_2 = iVar11;
      if (plVar7 == (longlong *)0x0) {
        plVar7 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar7 +
                       (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      goto LAB_141e89839;
    }
  }
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar12) {
    uVar6 = (uVar12 >> 1) + 8;
    iVar14 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    iVar8 = 0x20;
    cVar13 = '\0';
    if (uVar6 != 0) {
      iVar8 = 0x1f - iVar14;
    }
    uVar6 = (uVar12 >> 1) + 7;
    iVar14 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    if (uVar6 != 0) {
      cVar13 = '\x1f' - (char)iVar14;
    }
    iVar8 = 1 << (~(byte)((iVar8 << 0x1a) >> 0x1f) & 0x20U - cVar13 & 0x1f);
  }
  if (((int)uVar12 < 1) || (((int)param_1[9] != 0 && (iVar8 <= (int)param_1[9])))) {
    iVar14 = *param_2;
    uVar12 = FCrc::MemCrc32(_Src,10);
    uVar12 = (int)param_1[9] - 1U & uVar12;
    *(uint *)((longlong)_Src + 0x1c) = uVar12;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 3) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         iVar14;
  }
  else {
    *(int *)(param_1 + 9) = iVar8;
    TSet<TTuple<FOpenGLUniformName,__int64>,TDefaultMapHashableKeyFuncs<FOpenGLUniformName,__int64,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_141e89839:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar15;
  }
  return param_2;
}



// FUNCTION 141e89870 FUN_141e89870 body=585 status=ok
// SIG undefined FUN_141e89870(void)

int * FUN_141e89870(longlong *param_1,int *param_2,longlong *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  int iVar13;
  undefined8 *_Src;
  bool bVar14;
  int local_res8 [2];
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar13 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar13 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar13 + 1) {
      FUN_140822570(param_1,iVar13);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar13 = (int)param_1[6];
    iVar10 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)((longlong)iVar13 * 0xe0 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0xe0 + *param_1) = 0xffffffff;
    }
  }
  plVar12 = (longlong *)param_1[4];
  *param_2 = iVar13;
  if (plVar12 == (longlong *)0x0) {
    plVar12 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar12 +
                   (longlong)((int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar13 & 0x1f);
  puVar3 = (undefined8 *)*param_3;
  _Src = (undefined8 *)((longlong)iVar13 * 0xe0 + *param_1);
  puVar4 = (undefined4 *)param_3[1];
  bVar14 = false;
  uVar8 = puVar3[1];
  *_Src = *puVar3;
  _Src[1] = uVar8;
  uVar8 = puVar3[3];
  _Src[2] = puVar3[2];
  _Src[3] = uVar8;
  uVar8 = puVar3[5];
  _Src[4] = puVar3[4];
  _Src[5] = uVar8;
  uVar8 = puVar3[7];
  _Src[6] = puVar3[6];
  _Src[7] = uVar8;
  uVar8 = puVar3[9];
  _Src[8] = puVar3[8];
  _Src[9] = uVar8;
  uVar8 = puVar3[0xb];
  _Src[10] = puVar3[10];
  _Src[0xb] = uVar8;
  uVar8 = puVar3[0xd];
  _Src[0xc] = puVar3[0xc];
  _Src[0xd] = uVar8;
  uVar8 = puVar3[0xf];
  _Src[0xe] = puVar3[0xe];
  _Src[0xf] = uVar8;
  uVar8 = puVar3[0x11];
  _Src[0x10] = puVar3[0x10];
  _Src[0x11] = uVar8;
  uVar8 = puVar3[0x13];
  _Src[0x12] = puVar3[0x12];
  _Src[0x13] = uVar8;
  uVar8 = puVar3[0x15];
  _Src[0x14] = puVar3[0x14];
  _Src[0x15] = uVar8;
  uVar5 = *(undefined4 *)((longlong)puVar3 + 0xb4);
  uVar6 = *(undefined4 *)(puVar3 + 0x17);
  uVar7 = *(undefined4 *)((longlong)puVar3 + 0xbc);
  *(undefined4 *)(_Src + 0x16) = *(undefined4 *)(puVar3 + 0x16);
  *(undefined4 *)((longlong)_Src + 0xb4) = uVar5;
  *(undefined4 *)(_Src + 0x17) = uVar6;
  *(undefined4 *)((longlong)_Src + 0xbc) = uVar7;
  uVar5 = *(undefined4 *)((longlong)puVar3 + 0xc4);
  uVar6 = *(undefined4 *)(puVar3 + 0x19);
  uVar7 = *(undefined4 *)((longlong)puVar3 + 0xcc);
  *(undefined4 *)(_Src + 0x18) = *(undefined4 *)(puVar3 + 0x18);
  *(undefined4 *)((longlong)_Src + 0xc4) = uVar5;
  *(undefined4 *)(_Src + 0x19) = uVar6;
  *(undefined4 *)((longlong)_Src + 0xcc) = uVar7;
  *(undefined4 *)(_Src + 0x1a) = *puVar4;
  *(undefined4 *)(_Src + 0x1b) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FOpenGLFramebufferKey,unsigned_int>,TDefaultMapHashableKeyFuncs<FOpenGLFramebufferKey,unsigned_int,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,_Src);
    bVar14 = local_res8[0] != -1;
    if (bVar14) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)local_res8[0] * 0xe0 + *param_1),_Src,0xd8);
      TSparseArray<TSetElement<TStaticMeshDrawList<TMobileBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FDrawingPolicyLink>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_141e89a97;
    }
  }
  cVar9 = TSet<TTuple<FOpenGLFramebufferKey,unsigned_int>,TDefaultMapHashableKeyFuncs<FOpenGLFramebufferKey,unsigned_int,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar9 == '\0') {
    iVar13 = *param_2;
    uVar11 = GetTypeHash(_Src);
    uVar11 = (int)param_1[9] - 1U & uVar11;
    *(uint *)((longlong)_Src + 0xdc) = uVar11;
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 0x1b) =
         *(undefined4 *)
          ((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(int *)((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         iVar13;
  }
LAB_141e89a97:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar14;
  }
  return param_2;
}



// FUNCTION 141e89ac0 FUN_141e89ac0 body=683 status=ok
// SIG undefined FUN_141e89ac0(void)

int * FUN_141e89ac0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  
  iVar9 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar8 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar8 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar8 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar8);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar8 = (int)param_1[6];
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar10 = *(int *)(*param_1 + 4 + (longlong)iVar8 * 0x28);
    *(int *)(param_1 + 6) = iVar10;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar10 * 0x28) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = iVar8;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  bVar12 = false;
  puVar1 = (uint *)((longlong)plVar6 + (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar8 & 0x1f);
  puVar1 = (uint *)(*param_1 + (longlong)iVar8 * 0x28);
  puVar2 = (undefined8 *)param_3[1];
  *puVar1 = *(uint *)*param_3;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined8 *)(puVar1 + 2) = *puVar2;
  *puVar2 = 0;
  puVar1[4] = *(uint *)(puVar2 + 1);
  puVar1[5] = *(uint *)((longlong)puVar2 + 0xc);
  puVar2[1] = 0;
  puVar1[6] = *(uint *)(puVar2 + 2);
  *(undefined1 *)(puVar1 + 7) = *(undefined1 *)((longlong)puVar2 + 0x14);
  puVar1[8] = 0xffffffff;
  uVar11 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar11 != 1) {
    if (uVar11 != 0) {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar10 = *(int *)((longlong)plVar6 +
                       ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar1) * 4);
      if (iVar10 != -1) {
        do {
          if (*(uint *)(*param_1 + (longlong)iVar10 * 0x28) == *puVar1) goto LAB_141e89c3b;
          iVar10 = *(int *)(*param_1 + 0x20 + (longlong)iVar10 * 0x28);
        } while (iVar10 != -1);
      }
    }
    iVar10 = -1;
LAB_141e89c3b:
    bVar12 = iVar10 != -1;
    if (bVar12) {
      lVar3 = *param_1;
      if (*(longlong *)(lVar3 + 8 + (longlong)iVar10 * 0x28) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop((void *)(lVar3 + (longlong)iVar10 * 0x28),puVar1,0x20);
      TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar10;
      goto LAB_141e89d42;
    }
  }
  if (3 < uVar11) {
    uVar5 = (uVar11 >> 1) + 8;
    iVar9 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    iVar10 = 0x20;
    cVar7 = '\0';
    if (uVar5 != 0) {
      iVar10 = 0x1f - iVar9;
    }
    uVar5 = (uVar11 >> 1) + 7;
    iVar9 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar5 != 0) {
      cVar7 = '\x1f' - (char)iVar9;
    }
    iVar9 = 1 << (~(byte)((iVar10 << 0x1a) >> 0x1f) & 0x20U - cVar7 & 0x1f);
  }
  if (((int)uVar11 < 1) || (((int)param_1[9] != 0 && (iVar9 <= (int)param_1[9])))) {
    uVar11 = (int)param_1[9] - 1U & *puVar1;
    puVar1[9] = uVar11;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    puVar1[8] = *(uint *)((longlong)plVar6 +
                         ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         iVar8;
  }
  else {
    *(int *)(param_1 + 9) = iVar9;
    TSet<TTuple<int,FResidentChunk>,TDefaultMapHashableKeyFuncs<int,FResidentChunk,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_141e89d42:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar12;
  }
  return param_2;
}



// FUNCTION 141e89d70 FUN_141e89d70 body=776 status=ok
// SIG undefined FUN_141e89d70(void)

int * FUN_141e89d70(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  byte bVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  char cVar14;
  int iVar15;
  undefined8 *_Src;
  uint uVar16;
  uint *puVar17;
  int iVar18;
  bool bVar19;
  
  iVar10 = 1;
  iVar18 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar13 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar13 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar13 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar13);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar13 = (int)param_1[6];
    iVar12 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar15 = *(int *)(*param_1 + 4 + (longlong)iVar13 * 0x18);
    *(int *)(param_1 + 6) = iVar15;
    *(int *)((longlong)param_1 + 0x34) = iVar12;
    if (iVar12 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar15 * 0x18) = 0xffffffff;
    }
  }
  plVar9 = (longlong *)param_1[4];
  *param_2 = iVar13;
  lVar8 = (longlong)((int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = param_1 + 2;
  }
  bVar19 = false;
  puVar17 = (uint *)((longlong)plVar9 + lVar8);
  *puVar17 = *puVar17 | 1 << ((byte)iVar13 & 0x1f);
  puVar2 = (undefined8 *)param_3[1];
  lVar1 = (longlong)iVar13 * 0x18;
  _Src = (undefined8 *)(*param_1 + lVar1);
  uVar3 = *(undefined8 *)*param_3;
  *_Src = uVar3;
  _Src[1] = *puVar2;
  *(undefined4 *)(_Src + 2) = 0xffffffff;
  uVar16 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar16 != 1) {
    iVar12 = iVar18;
    if (uVar16 != 0) {
      iVar15 = (int)((ulonglong)uVar3 >> 0x20);
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = param_1 + 7;
      }
      iVar11 = *(int *)((longlong)plVar9 +
                       ((longlong)(int)(iVar15 << 0x12 ^ (uint)uVar3) &
                       (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar11 != -1) {
        do {
          uVar4 = *(undefined8 *)(*param_1 + (longlong)iVar11 * 0x18);
          if (((uint)uVar4 == (uint)uVar3) && ((int)((ulonglong)uVar4 >> 0x20) == iVar15)) {
            bVar19 = true;
          }
          else {
            bVar19 = false;
          }
          iVar12 = iVar11;
        } while ((!bVar19) &&
                (iVar11 = *(int *)(*param_1 + 0x10 + (longlong)iVar11 * 0x18), iVar12 = iVar18,
                iVar11 != -1));
      }
    }
    bVar19 = iVar12 != -1;
    if (bVar19) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar12 * 0x18),_Src,0x10);
      bVar6 = (byte)iVar13 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = iVar13;
      }
      lVar5 = *param_1;
      *(undefined4 *)(lVar1 + lVar5) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar18 = (int)param_1[6];
      }
      *(int *)(lVar1 + 4 + lVar5) = iVar18;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar13;
      plVar9 = (longlong *)param_1[4];
      *param_2 = iVar12;
      if (plVar9 == (longlong *)0x0) {
        plVar9 = param_1 + 2;
      }
      puVar17 = (uint *)((longlong)plVar9 + lVar8);
      *puVar17 = *puVar17 & ~(1 << bVar6 | 1U >> 0x20 - bVar6);
      goto LAB_141e8a04d;
    }
  }
  if (3 < uVar16) {
    uVar7 = (uVar16 >> 1) + 8;
    iVar18 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar18 == 0; iVar18 = iVar18 + -1) {
      }
    }
    iVar10 = 0x20;
    if (uVar7 != 0) {
      iVar10 = 0x1f - iVar18;
    }
    uVar7 = (uVar16 >> 1) + 7;
    iVar18 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar18 == 0; iVar18 = iVar18 + -1) {
      }
    }
    if (uVar7 == 0) {
      cVar14 = '\0';
    }
    else {
      cVar14 = '\x1f' - (char)iVar18;
    }
    iVar10 = 1 << (~(byte)((iVar10 << 0x1a) >> 0x1f) & 0x20U - cVar14 & 0x1f);
  }
  if (((int)uVar16 < 1) || (((int)param_1[9] != 0 && (iVar10 <= (int)param_1[9])))) {
    uVar16 = ((int)((ulonglong)*_Src >> 0x20) << 0x12 ^ (uint)*_Src) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x14) = uVar16;
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 2) =
         *(undefined4 *)
          ((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar16) * 4);
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(int *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar16) * 4) =
         iVar13;
  }
  else {
    *(int *)(param_1 + 9) = iVar10;
    TSet<TTuple<FSamplerPair,unsigned___int64>,TDefaultMapHashableKeyFuncs<FSamplerPair,unsigned___int64,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_141e8a04d:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar19;
  }
  return param_2;
}



// FUNCTION 141e8a080 FUN_141e8a080 body=772 status=ok
// SIG undefined FUN_141e8a080(void)

int * FUN_141e8a080(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  void *_Buf1;
  undefined1 *_Buf2;
  bool bVar15;
  
  uVar14 = 0xffffffff;
  iVar13 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar12 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar12 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar12 + 1) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar12);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar12 = (int)param_1[6];
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar7 = *(int *)(*param_1 + 4 + (longlong)iVar12 * 0x30);
    *(int *)(param_1 + 6) = iVar7;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar7 * 0x30) = 0xffffffff;
    }
  }
  plVar10 = (longlong *)param_1[4];
  *param_2 = iVar12;
  if (plVar10 == (longlong *)0x0) {
    plVar10 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar10 +
                   (longlong)((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar12 & 0x1f);
  puVar2 = (undefined1 *)*param_3;
  puVar3 = (undefined8 *)param_3[1];
  bVar15 = false;
  _Buf2 = (undefined1 *)((longlong)iVar12 * 0x30 + *param_1);
  *_Buf2 = *puVar2;
  _Buf2[1] = puVar2[1];
  _Buf2[2] = puVar2[2];
  _Buf2[3] = puVar2[3];
  *(undefined4 *)(_Buf2 + 4) = *(undefined4 *)(puVar2 + 4);
  *(undefined4 *)(_Buf2 + 8) = *(undefined4 *)(puVar2 + 8);
  *(undefined4 *)(_Buf2 + 0xc) = *(undefined4 *)(puVar2 + 0xc);
  *(undefined4 *)(_Buf2 + 0x10) = *(undefined4 *)(puVar2 + 0x10);
  *(undefined4 *)(_Buf2 + 0x14) = *(undefined4 *)(puVar2 + 0x14);
  _Buf2[0x18] = puVar2[0x18];
  *(undefined8 *)(_Buf2 + 0x20) = *puVar3;
  *(undefined4 *)(_Buf2 + 0x28) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar12 = iVar13;
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      iVar7 = FCrc::MemCrc_DEPRECATED(_Buf2,DAT_146ab3ea4,0);
      plVar10 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar10 = param_1 + 7;
      }
      iVar7 = *(int *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar7) * 4);
      if (iVar7 != -1) {
        lVar11 = *param_1;
        do {
          _Buf1 = (void *)((longlong)iVar7 * 0x30 + lVar11);
          iVar6 = _guard_xfg_dispatch_icall_nop(_Buf1,_Buf2,(ulonglong)DAT_146ab3ea4);
          iVar12 = iVar7;
          if (iVar6 == 0) break;
          iVar7 = *(int *)((longlong)_Buf1 + 0x28);
          lVar11 = *param_1;
          iVar12 = iVar13;
        } while (iVar7 != -1);
      }
    }
    bVar15 = iVar12 != -1;
    if (bVar15) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar12 * 0x30 + *param_1),_Buf2,0x28);
      iVar13 = *param_2;
      bVar4 = (byte)iVar13 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x30) = iVar13;
      }
      puVar9 = (undefined4 *)((longlong)iVar13 * 0x30 + *param_1);
      *puVar9 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar14 = (undefined4)param_1[6];
      }
      puVar9[1] = uVar14;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar13;
      plVar10 = (longlong *)param_1[4];
      *param_2 = iVar12;
      if (plVar10 == (longlong *)0x0) {
        plVar10 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar10 +
                       (longlong)((int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      goto LAB_141e8a357;
    }
  }
  cVar5 = TSet<TTuple<FSamplerStateInitializerRHI,FOpenGLSamplerState_*>,TDefaultMapHashableKeyFuncs<FSamplerStateInitializerRHI,FOpenGLSamplerState_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar5 == '\0') {
    iVar13 = *param_2;
    uVar8 = FCrc::MemCrc_DEPRECATED(_Buf2,DAT_146ab3ea4,0);
    uVar8 = (int)param_1[9] - 1U & uVar8;
    *(uint *)(_Buf2 + 0x2c) = uVar8;
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(undefined4 *)(_Buf2 + 0x28) =
         *(undefined4 *)
          ((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4);
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(int *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4) =
         iVar13;
  }
LAB_141e8a357:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar15;
  }
  return param_2;
}



// FUNCTION 141e8a390 FUN_141e8a390 body=793 status=ok
// SIG undefined FUN_141e8a390(void)

int * FUN_141e8a390(longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  uint uVar12;
  char cVar13;
  undefined8 *_Src;
  int iVar14;
  bool bVar15;
  
  iVar8 = 1;
  iVar14 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar6 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar6);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar6 = (int)param_1[6];
    iVar2 = *(int *)((longlong)iVar6 * 0x20 + 4 + *param_1);
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar11 = (longlong *)param_1[4];
  *param_2 = iVar6;
  if (plVar11 == (longlong *)0x0) {
    plVar11 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar11 + (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) * 4)
  ;
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  _Src = (undefined8 *)((longlong)iVar6 * 0x20 + *param_1);
  TPairInitializer<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_&>
  ::
  operator<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>_TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            (param_3,_Src);
  *(undefined4 *)(_Src + 3) = 0xffffffff;
  bVar15 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar6 = iVar14;
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      iVar5 = FCrc::MemCrc32(*_Src,*(undefined4 *)(_Src + 1),0);
      plVar11 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar11 = param_1 + 7;
      }
      iVar5 = *(int *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar5) * 4);
      if (iVar5 != -1) {
        lVar3 = *param_1;
        iVar2 = *(int *)(_Src + 1);
        do {
          lVar10 = (longlong)iVar5 * 0x20;
          iVar6 = *(int *)(lVar10 + 8 + lVar3);
          if ((iVar6 == iVar2) &&
             (iVar6 = _guard_xfg_dispatch_icall_nop
                                (*(void **)(lVar10 + lVar3),(void *)*_Src,(longlong)iVar6),
             iVar6 == 0)) {
            bVar15 = true;
          }
          else {
            bVar15 = false;
          }
          iVar6 = iVar5;
        } while ((!bVar15) && (iVar5 = *(int *)(lVar10 + 0x18 + lVar3), iVar6 = iVar14, iVar5 != -1)
                );
      }
    }
    bVar15 = iVar6 != -1;
    if (bVar15) {
      plVar11 = (longlong *)((longlong)iVar6 * 0x20 + *param_1);
      if (*plVar11 != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(plVar11,_Src,0x18);
      iVar8 = *param_2;
      bVar4 = (byte)iVar8 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar8;
      }
      puVar9 = (undefined4 *)((longlong)iVar8 * 0x20 + *param_1);
      *puVar9 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar14 = (int)param_1[6];
      }
      puVar9[1] = iVar14;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar8;
      plVar11 = (longlong *)param_1[4];
      *param_2 = iVar6;
      if (plVar11 == (longlong *)0x0) {
        plVar11 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar11 +
                       (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      goto LAB_141e8a684;
    }
  }
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar12) {
    uVar7 = (uVar12 >> 1) + 8;
    iVar14 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    iVar8 = 0x20;
    cVar13 = '\0';
    if (uVar7 != 0) {
      iVar8 = 0x1f - iVar14;
    }
    uVar7 = (uVar12 >> 1) + 7;
    iVar14 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    if (uVar7 != 0) {
      cVar13 = '\x1f' - (char)iVar14;
    }
    iVar8 = 1 << (~(byte)((iVar8 << 0x1a) >> 0x1f) & 0x20U - cVar13 & 0x1f);
  }
  if (((int)uVar12 < 1) || (((int)param_1[9] != 0 && (iVar8 <= (int)param_1[9])))) {
    iVar14 = *param_2;
    uVar12 = FCrc::MemCrc32(*_Src,*(undefined4 *)(_Src + 1),0);
    uVar12 = (int)param_1[9] - 1U & uVar12;
    *(uint *)((longlong)_Src + 0x1c) = uVar12;
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 3) =
         *(undefined4 *)
          ((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(int *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         iVar14;
  }
  else {
    *(int *)(param_1 + 9) = iVar8;
    TSet<TTuple<TArray<char,FDefaultAllocator>,int>,TDefaultMapHashableKeyFuncs<TArray<char,FDefaultAllocator>,int,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_141e8a684:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar15;
  }
  return param_2;
}



// FUNCTION 141e8a6b0 FUN_141e8a6b0 body=708 status=ok
// SIG undefined FUN_141e8a6b0(void)

int * FUN_141e8a6b0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  uint *_Src;
  int iVar14;
  bool bVar15;
  
  iVar14 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar12 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar12 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar12 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar12);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar12 = (int)param_1[6];
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar11 = *(int *)(*param_1 + 4 + (longlong)iVar12 * 0x18);
    *(int *)(param_1 + 6) = iVar11;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar11 * 0x18) = 0xffffffff;
    }
  }
  plVar8 = (longlong *)param_1[4];
  *param_2 = iVar12;
  lVar6 = (longlong)((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  puVar13 = (uint *)((longlong)plVar8 + lVar6);
  *puVar13 = *puVar13 | 1 << ((byte)iVar12 & 0x1f);
  lVar1 = (longlong)iVar12 * 0x18;
  puVar13 = (uint *)param_3[1];
  _Src = (uint *)(*param_1 + lVar1);
  param_3 = (undefined8 *)*param_3;
  bVar15 = false;
  *(undefined8 *)_Src = *param_3;
  _Src[2] = *(uint *)(param_3 + 1);
  _Src[3] = *puVar13;
  _Src[4] = 0xffffffff;
  iVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar5 != 1) {
    iVar11 = iVar14;
    if (iVar5 != 0) {
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = param_1 + 7;
      }
      iVar10 = *(int *)((longlong)plVar8 +
                       ((longlong)(int)(*_Src ^ _Src[1] ^ _Src[2]) & (longlong)(int)param_1[9] - 1U)
                       * 4);
      if (iVar10 != -1) {
        lVar2 = *param_1;
        do {
          lVar7 = (longlong)iVar10;
          if (((*(uint *)(lVar2 + lVar7 * 0x18) == *_Src) &&
              (*(uint *)(lVar2 + 4 + lVar7 * 0x18) == _Src[1])) &&
             (*(uint *)(lVar2 + 8 + lVar7 * 0x18) == _Src[2])) {
            bVar15 = true;
          }
          else {
            bVar15 = false;
          }
          iVar11 = iVar10;
        } while ((!bVar15) &&
                (iVar10 = *(int *)(lVar2 + 0x10 + lVar7 * 0x18), iVar11 = iVar14, iVar10 != -1));
      }
    }
    bVar15 = iVar11 != -1;
    if (bVar15) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar11 * 0x18),_Src,0x10);
      bVar3 = (byte)iVar12 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = iVar12;
      }
      lVar2 = *param_1;
      *(undefined4 *)(lVar1 + lVar2) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar14 = (int)param_1[6];
      }
      *(int *)(lVar1 + 4 + lVar2) = iVar14;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar12;
      plVar8 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar8 = param_1 + 2;
      }
      puVar13 = (uint *)((longlong)plVar8 + lVar6);
      *param_2 = iVar11;
      *puVar13 = *puVar13 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_141e8a94c;
    }
  }
  cVar4 = TSet<TTuple<FOpenGLCompiledShaderKey,unsigned_int>,TDefaultMapHashableKeyFuncs<FOpenGLCompiledShaderKey,unsigned_int,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar5,0);
  if (cVar4 == '\0') {
    uVar9 = (_Src[2] ^ _Src[1] ^ *_Src) & (int)param_1[9] - 1U;
    _Src[5] = uVar9;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    _Src[4] = *(uint *)((longlong)plVar8 +
                       ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4) =
         *param_2;
  }
LAB_141e8a94c:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar15;
  }
  return param_2;
}



// FUNCTION 141e8a980 FUN_141e8a980 body=752 status=ok
// SIG undefined FUN_141e8a980(void)

int * FUN_141e8a980(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  uint *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  void *_Dst;
  void *_Src;
  bool local_res8;
  
  iVar13 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar10 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar10 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<1216,8>_>,FDefaultAllocator>::
      ResizeGrow(param_1,iVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar10 = (int)param_1[6];
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar6 = *(int *)((longlong)iVar10 * 0x4c0 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar6;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)((longlong)iVar6 * 0x4c0 + *param_1) = 0xffffffff;
    }
  }
  plVar9 = (longlong *)param_1[4];
  *param_2 = iVar10;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar1 = *puVar1 | 1 << ((byte)iVar10 & 0x1f);
  puVar2 = (undefined8 *)param_3[1];
  _Src = (void *)((longlong)iVar10 * 0x4c0 + *param_1);
  FOpenGLLinkedProgramConfiguration::FOpenGLLinkedProgramConfiguration(_Src,*param_3);
  *(undefined8 *)((longlong)_Src + 0x4b0) = *puVar2;
  *(undefined4 *)((longlong)_Src + 0x4b8) = 0xffffffff;
  local_res8 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar10 = iVar13;
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      iVar6 = GetTypeHash(_Src);
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = param_1 + 7;
      }
      iVar6 = *(int *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar6) * 4);
      if (iVar6 != -1) {
        lVar11 = *param_1;
        do {
          lVar12 = (longlong)iVar6 * 0x4c0 + lVar11;
          cVar4 = FUN_141e8eeb0(lVar12,_Src);
          iVar10 = iVar6;
          if (cVar4 != '\0') break;
          iVar6 = *(int *)(lVar12 + 0x4b8);
          iVar10 = iVar13;
        } while (iVar6 != -1);
      }
    }
    local_res8 = iVar10 != -1;
    if (local_res8) {
      lVar12 = 6;
      _Dst = (void *)((longlong)iVar10 * 0x4c0 + *param_1);
      lVar11 = (longlong)_Dst + 0x4b0;
      do {
        lVar11 = lVar11 + -200;
        FOpenGLShaderBindings::~FOpenGLShaderBindings(lVar11);
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x4b8);
      iVar6 = *param_2;
      bVar3 = (byte)iVar6 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x4c0 + *param_1) = iVar6;
      }
      puVar8 = (undefined4 *)((longlong)iVar6 * 0x4c0 + *param_1);
      *puVar8 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar13 = (int)param_1[6];
      }
      puVar8[1] = iVar13;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar6;
      plVar9 = (longlong *)param_1[4];
      *param_2 = iVar10;
      if (plVar9 == (longlong *)0x0) {
        plVar9 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar9 +
                       (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_141e8ac4e;
    }
  }
  cVar4 = FUN_141e95790(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar4 == '\0') {
    iVar13 = *param_2;
    uVar7 = GetTypeHash(_Src);
    uVar7 = (int)param_1[9] - 1U & uVar7;
    *(uint *)((longlong)_Src + 0x4bc) = uVar7;
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(undefined4 *)((longlong)_Src + 0x4b8) =
         *(undefined4 *)
          ((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4);
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(int *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4) =
         iVar13;
  }
LAB_141e8ac4e:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 141e8ac70 FUN_141e8ac70 body=824 status=ok
// SIG undefined FUN_141e8ac70(void)

int * FUN_141e8ac70(longlong *param_1,int *param_2,undefined8 param_3,longlong param_4)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  void *_Dst;
  void *_Src;
  bool local_res8;
  
  iVar9 = 1;
  iVar14 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar10 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar10 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<1408,8>_>,FDefaultAllocator>::
      ResizeGrow(param_1,iVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar10 = (int)param_1[6];
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)((longlong)iVar10 * 0x580 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x580 + *param_1) = 0xffffffff;
    }
  }
  plVar8 = (longlong *)param_1[4];
  *param_2 = iVar10;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar8 + (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar1 = *puVar1 | 1 << ((byte)iVar10 & 0x1f);
  _Src = (void *)((longlong)iVar10 * 0x580 + *param_1);
  TPairInitializer<FOpenGLLinkedProgramConfiguration_const_&,FOpenGLLinkedProgramConfiguration::ShaderInfo_const_&>
  ::
  operator<FOpenGLLinkedProgramConfiguration,FOpenGLLinkedProgramConfiguration::ShaderInfo>_TTuple<FOpenGLLinkedProgramConfiguration,FOpenGLLinkedProgramConfiguration::ShaderInfo>
            (param_3,_Src);
  *(undefined4 *)((longlong)_Src + 0x578) = 0xffffffff;
  local_res8 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar10 = iVar14;
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      iVar5 = GetTypeHash(_Src);
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = param_1 + 7;
      }
      iVar5 = *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar5) * 4);
      if (iVar5 != -1) {
        lVar12 = *param_1;
        do {
          lVar11 = (longlong)iVar5 * 0x580 + lVar12;
          cVar4 = FUN_141e8eeb0(lVar11,_Src);
          iVar10 = iVar5;
          if (cVar4 != '\0') break;
          iVar5 = *(int *)(lVar11 + 0x578);
          iVar10 = iVar14;
        } while (iVar5 != -1);
      }
    }
    local_res8 = iVar10 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar10 * 0x580 + *param_1);
      lVar12 = (longlong)_Dst + 0x4b0;
      FOpenGLShaderBindings::~FOpenGLShaderBindings(lVar12);
      lVar11 = 6;
      do {
        lVar12 = lVar12 + -200;
        FOpenGLShaderBindings::~FOpenGLShaderBindings(lVar12);
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x578);
      iVar9 = *param_2;
      bVar3 = (byte)iVar9 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x580 + *param_1) = iVar9;
      }
      puVar7 = (undefined4 *)((longlong)iVar9 * 0x580 + *param_1);
      *puVar7 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar14 = (int)param_1[6];
      }
      puVar7[1] = iVar14;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar9;
      plVar8 = (longlong *)param_1[4];
      *param_2 = iVar10;
      if (plVar8 == (longlong *)0x0) {
        plVar8 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar8 +
                       (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_141e8af7f;
    }
  }
  uVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar13) {
    uVar6 = (uVar13 >> 1) + 8;
    iVar14 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    iVar9 = 0x20;
    cVar4 = '\0';
    if (uVar6 != 0) {
      iVar9 = 0x1f - iVar14;
    }
    uVar6 = (uVar13 >> 1) + 7;
    iVar14 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    if (uVar6 != 0) {
      cVar4 = '\x1f' - (char)iVar14;
    }
    iVar9 = 1 << (~(byte)((iVar9 << 0x1a) >> 0x1f) & 0x20U - cVar4 & 0x1f);
  }
  if (((int)uVar13 < 1) || (((int)param_1[9] != 0 && (iVar9 <= (int)param_1[9])))) {
    iVar14 = *param_2;
    uVar13 = GetTypeHash(_Src);
    uVar13 = (int)param_1[9] - 1U & uVar13;
    *(uint *)((longlong)_Src + 0x57c) = uVar13;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(undefined4 *)((longlong)_Src + 0x578) =
         *(undefined4 *)
          ((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4) =
         iVar14;
  }
  else {
    *(int *)(param_1 + 9) = iVar9;
    FUN_141ea87b0(param_1);
  }
LAB_141e8af7f:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 141e8afb0 GetShaderStageSource<TOpenGLShader<FRefCountedObject,35632,3>_> body=541 status=ok
// SIG undefined GetShaderStageSource<TOpenGLShader<FRefCountedObject,35632,3>_>(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

longlong *
GetShaderStageSource<TOpenGLShader<FRefCountedObject,35632,3>_>(longlong *param_1,longlong param_2)

{
  void *_Dst;
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  char *pcVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  uint uVar13;
  void *_Src;
  undefined4 *puVar14;
  undefined8 uStack_90;
  undefined1 auStack_88 [32];
  undefined2 auStack_68 [8];
  int local_58 [4];
  void *local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)local_58;
  *param_1 = 0;
  param_1[1] = 0;
  local_58[0] = 0;
  uStack_90 = 0x141e8b001;
  (*DAT_146ab43e8)(*(undefined4 *)(param_2 + 0x10),0x8b85,local_58);
  lVar9 = (longlong)local_58[0];
  puVar12 = auStack_88;
  if (0 < local_58[0]) {
    uVar6 = lVar9 * 4;
    uVar8 = uVar6 + 0xf;
    if (uVar8 <= uVar6) {
      uVar8 = 0xffffffffffffff0;
    }
    uStack_90 = 0x141e8b033;
    lVar2 = -(uVar8 & 0xfffffffffffffff0);
    uVar1 = *(undefined4 *)(param_2 + 0x10);
    puVar14 = (undefined4 *)((longlong)local_58 + lVar2);
    *(undefined8 *)(auStack_88 + lVar2 + -8) = 0x141e8b04b;
    (*DAT_146ab43d8)(uVar1,lVar9,local_58,puVar14);
    local_58[2] = 0;
    puVar12 = auStack_88 + lVar2;
    if (0 < local_58[0]) {
      do {
        iVar11 = local_58[2];
        _Src = (void *)0x0;
        uVar1 = *puVar14;
        local_58[1] = 0;
        *(undefined8 *)(auStack_88 + lVar2 + -8) = 0x141e8b076;
        (*DAT_146ab43f8)(uVar1,0x8b88,local_58 + 1);
        if (0 < local_58[1]) {
          iVar4 = local_58[1] + 1;
          *(undefined8 *)(auStack_88 + lVar2 + -8) = 0x141e8b08b;
          pcVar7 = (char *)operator_new((longlong)iVar4);
          uVar1 = *puVar14;
          iVar4 = local_58[1] + 1;
          *(undefined8 *)(auStack_88 + lVar2 + -8) = 0x141e8b0a4;
          (*DAT_146ab4408)(uVar1,iVar4,local_58 + 1,pcVar7);
          local_48 = (void *)0x0;
          local_40 = 0;
          if ((pcVar7 != (char *)0x0) && (*pcVar7 != '\0')) {
            lVar9 = -1;
            do {
              lVar3 = lVar9 + 1;
              lVar9 = lVar9 + 1;
            } while (pcVar7[lVar3] != '\0');
            uVar13 = (int)lVar9 + 1;
            local_40 = (ulonglong)uVar13;
            uVar10 = uVar13;
            if (0 < (int)uVar13) {
              *(undefined8 *)(auStack_88 + lVar2 + -8) = 0x141e8b0f2;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
              uVar10 = (uint)local_40;
            }
            _Src = local_48;
            *(undefined2 *)((longlong)auStack_68 + lVar2) = 0x3f;
            *(undefined8 *)(auStack_88 + lVar2 + -8) = 0x141e8b10f;
            FGenericPlatformString::Convert<char,wchar_t>(_Src,uVar13,pcVar7,uVar13);
            iVar11 = local_58[2];
            if ((uVar10 != 0) && (iVar4 = uVar10 - 1, iVar4 != 0)) {
              iVar11 = (int)param_1[1];
              iVar5 = (uint)(iVar11 == 0) + iVar11 + iVar4;
              *(int *)(param_1 + 1) = iVar5;
              if (*(int *)((longlong)param_1 + 0xc) < iVar5) {
                *(undefined8 *)(auStack_88 + lVar2 + -8) = 0x141e8b142;
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar11);
              }
              _Dst = (void *)(*param_1 + ((longlong)iVar11 - (ulonglong)(iVar11 != 0)) * 2);
              *(undefined8 *)(auStack_88 + lVar2 + -8) = 0x141e8b16c;
              _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar4 * 2);
              *(undefined2 *)((longlong)iVar4 * 2 + (longlong)_Dst) = 0;
              iVar11 = local_58[2];
            }
          }
          if (_Src != (void *)0x0) {
            *(undefined8 *)(auStack_88 + lVar2 + -8) = 0x141e8b18a;
            FMemory::Free(_Src);
          }
          *(undefined8 *)(auStack_88 + lVar2 + -8) = 0x141e8b192;
          FMemory::operator_delete(pcVar7);
        }
        puVar14 = puVar14 + 1;
        local_58[2] = iVar11 + 1;
        puVar12 = auStack_88 + lVar2;
      } while (iVar11 + 1 < local_58[0]);
    }
  }
  *(undefined8 *)(puVar12 + -8) = 0x141e8b1b3;
  return param_1;
}



// FUNCTION 141e8b1d0 FUN_141e8b1d0 body=671 status=ok
// SIG undefined FUN_141e8b1d0(void)

undefined8 *
FUN_141e8b1d0(undefined8 *param_1,undefined4 param_2,int param_3,uint param_4,void *param_5,
             byte param_6,undefined4 param_7,int param_8)

{
  int iVar1;
  char cVar2;
  undefined8 *puVar3;
  void *_Dst;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  
  *param_1 = &PTR_FUN_143f3ece8;
  _Dst = (void *)0x0;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_144ebe630;
  *(int *)((longlong)param_1 + 0x1c) = param_3;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 2) = 0x100;
  *(undefined4 *)(param_1 + 3) = param_2;
  *(uint *)(param_1 + 4) = param_4;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(uint *)(param_1 + 7) = ((uint)param_6 << 2 | *(uint *)(param_1 + 7) & 0xfffffff8) & 0xfffffff7;
  if (param_8 != 0) {
    param_3 = param_8;
  }
  *(int *)(param_1 + 10) = param_3;
  if (((DAT_1464c97cd != '\0') && (DAT_1464c97d0 != 0)) || ((param_4 >> 0xb & 1) == 0)) {
    if ((DAT_146ab6383 != '\0') && (cVar2 = FUN_1415e13e0(), cVar2 == '\0')) {
      if (param_5 != (void *)0x0) {
        iVar1 = *(int *)(param_1 + 10);
        _Dst = (void *)((longlong)DAT_146ab6ea8 + 0xfU & 0xfffffffffffffff0);
        puVar3 = (undefined8 *)((longlong)iVar1 + (longlong)_Dst);
        if (DAT_146ab6eb0 < puVar3) {
          FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,iVar1 + 0x10);
          _Dst = (void *)((longlong)DAT_146ab6ea8 + 0xfU & 0xfffffffffffffff0);
          puVar3 = (undefined8 *)((longlong)iVar1 + (longlong)_Dst);
        }
        DAT_146ab6ea8 = puVar3;
        _guard_xfg_dispatch_icall_nop(_Dst,param_5,(ulonglong)*(uint *)(param_1 + 10));
      }
      puVar4 = (undefined8 *)((longlong)DAT_146ab6ea8 + 0xfU & 0xfffffffffffffff0);
      puVar3 = puVar4 + 0xc;
      if (DAT_146ab6eb0 < puVar3) {
        FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,0x70);
        puVar4 = (undefined8 *)((longlong)DAT_146ab6ea8 + 0xfU & 0xfffffffffffffff0);
        puVar3 = puVar4 + 0xc;
      }
      DAT_146ab6e8c = DAT_146ab6e8c + 1;
      DAT_146ab6ea8 = puVar3;
      *DAT_146ab6e80 = puVar4;
      local_38 = (longlong *)0x0;
      local_28 = 0;
      DAT_146ab6e80 = puVar4 + 1;
      puVar3 = (undefined8 *)FUN_140438ef0(0x20,local_58);
      if (puVar3 != (undefined8 *)0x0) {
        local_88 = SUB84(param_1,0);
        uStack_84 = (undefined4)((ulonglong)param_1 >> 0x20);
        uStack_80 = SUB84(_Dst,0);
        uStack_7c = (undefined4)((ulonglong)_Dst >> 0x20);
        *(undefined4 *)(puVar3 + 1) = local_88;
        *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_84;
        *(undefined4 *)(puVar3 + 2) = uStack_80;
        *(undefined4 *)((longlong)puVar3 + 0x14) = uStack_7c;
        *puVar3 = &PTR_FUN_144eb6788;
        puVar3[3] = CONCAT44(param_8,param_7);
      }
      local_68[0] = &LAB_141e939e0;
      puVar4[1] = 0;
      *puVar4 = &PTR_ExecuteAndDestruct_144eb5ab0;
      TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar4 + 2,local_68);
      if (local_28 != 0) {
        plVar5 = local_58;
        if (local_38 != (longlong *)0x0) {
          plVar5 = local_38;
        }
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x10))(plVar5,0);
        }
      }
      if (local_38 == (longlong *)0x0) {
        return param_1;
      }
      FMemory::Free();
      return param_1;
    }
    TOpenGLBuffer<FOpenGLBaseStructuredBuffer,34962,&CachedBindArrayBuffer>::CreateGLBuffer
              (param_1,param_5,param_7,param_8);
  }
  return param_1;
}



// FUNCTION 141e8b470 FUN_141e8b470 body=701 status=ok
// SIG undefined FUN_141e8b470(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_141e8b470(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined1 auStack_108 [32];
  undefined8 *local_e8 [2];
  undefined1 *local_d8 [2];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  undefined8 *local_88;
  undefined1 local_78 [16];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  *param_1 = &PTR_FUN_143f3ece8;
  uVar5 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 2) = 0x100;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_144ebe330;
  param_1[7] = 0;
  if ((DAT_146ab6383 == '\0') || (cVar2 = FUN_1415e13e0(), cVar2 != '\0')) {
    local_e8[0] = param_1;
    if (*(int *)(param_2 + 8) != 0) {
      plVar7 = (longlong *)param_2[6];
      if ((longlong *)param_2[6] == (longlong *)0x0) {
        plVar7 = param_2 + 2;
      }
      if (plVar7 != (longlong *)0x0) {
        uVar5 = (**(code **)(*plVar7 + 8))();
      }
    }
    lVar6 = (*(code *)*param_2)(uVar5,local_e8);
    puVar4 = (undefined8 *)param_1[7];
    param_1[7] = lVar6;
    if (lVar6 != 0) {
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    }
    if (puVar4 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar4 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar4)(puVar4,1);
      }
    }
    *(int *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + 1;
    uVar3 = 0;
  }
  else {
    puVar8 = (undefined8 *)((longlong)DAT_146ab6ea8 + 0xfU & 0xfffffffffffffff0);
    puVar4 = puVar8 + 0xc;
    if (DAT_146ab6eb0 < puVar4) {
      FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,0x70);
      puVar8 = (undefined8 *)((longlong)DAT_146ab6ea8 + 0xfU & 0xfffffffffffffff0);
      puVar4 = puVar8 + 0xc;
    }
    DAT_146ab6e8c = DAT_146ab6e8c + 1;
    DAT_146ab6ea8 = puVar4;
    *DAT_146ab6e80 = puVar8;
    DAT_146ab6e80 = puVar8 + 1;
    local_88 = param_1;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_78,param_2);
    local_a8 = (longlong *)0x0;
    local_98 = 0;
    puVar4 = (undefined8 *)FUN_140438ef0(0x70,local_c8);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &PTR_CopyToEmptyStorage_144ebe768;
      puVar4[2] = local_88;
      TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar4 + 4,local_78);
    }
    local_d8[0] = &LAB_141e938d0;
    puVar8[1] = 0;
    *puVar8 = &PTR_ExecuteAndDestruct_144eb5ab0;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar8 + 2,local_d8);
    if (local_98 != 0) {
      plVar7 = local_c8;
      if (local_a8 != (longlong *)0x0) {
        plVar7 = local_a8;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_a8 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_38 != 0) {
      plVar7 = local_68;
      if (local_48 != (longlong *)0x0) {
        plVar7 = local_48;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
    uVar3 = 1;
  }
  *(undefined1 *)(param_1 + 8) = uVar3;
  if (*(int *)(param_2 + 8) != 0) {
    plVar7 = (longlong *)param_2[6];
    if ((longlong *)param_2[6] == (longlong *)0x0) {
      plVar7 = param_2 + 2;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (param_2[6] != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 141e8b730 FUN_141e8b730 body=688 status=ok
// SIG undefined FUN_141e8b730(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_141e8b730(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined1 auStack_108 [32];
  undefined8 *local_e8 [2];
  undefined1 *local_d8 [2];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  undefined8 *local_88;
  undefined1 local_78 [16];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  *param_1 = &PTR_FUN_143f3ece8;
  uVar5 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_144ebe5b8;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 2) = 0x100;
  param_1[4] = 0;
  if ((DAT_146ab6383 == '\0') || (cVar2 = FUN_1415e13e0(), cVar2 != '\0')) {
    local_e8[0] = param_1;
    if (*(int *)(param_2 + 8) != 0) {
      plVar7 = (longlong *)param_2[6];
      if ((longlong *)param_2[6] == (longlong *)0x0) {
        plVar7 = param_2 + 2;
      }
      if (plVar7 != (longlong *)0x0) {
        uVar5 = (**(code **)(*plVar7 + 8))();
      }
    }
    lVar6 = (*(code *)*param_2)(uVar5,local_e8);
    puVar4 = (undefined8 *)param_1[4];
    param_1[4] = lVar6;
    if (lVar6 != 0) {
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    }
    if (puVar4 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar4 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar4)(puVar4,1);
      }
    }
    *(int *)(param_1[4] + 8) = *(int *)(param_1[4] + 8) + 1;
    uVar3 = 0;
  }
  else {
    puVar8 = (undefined8 *)((longlong)DAT_146ab6ea8 + 0xfU & 0xfffffffffffffff0);
    puVar4 = puVar8 + 0xc;
    if (DAT_146ab6eb0 < puVar4) {
      FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,0x70);
      puVar8 = (undefined8 *)((longlong)DAT_146ab6ea8 + 0xfU & 0xfffffffffffffff0);
      puVar4 = puVar8 + 0xc;
    }
    DAT_146ab6e8c = DAT_146ab6e8c + 1;
    DAT_146ab6ea8 = puVar4;
    *DAT_146ab6e80 = puVar8;
    DAT_146ab6e80 = puVar8 + 1;
    local_88 = param_1;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_78,param_2);
    local_a8 = (longlong *)0x0;
    local_98 = 0;
    puVar4 = (undefined8 *)FUN_140438ef0(0x70,local_c8);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &PTR_CopyToEmptyStorage_144ebe738;
      puVar4[2] = local_88;
      TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar4 + 4,local_78);
    }
    local_d8[0] = &LAB_141e93c80;
    puVar8[1] = 0;
    *puVar8 = &PTR_ExecuteAndDestruct_144eb5ab0;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar8 + 2,local_d8);
    if (local_98 != 0) {
      plVar7 = local_c8;
      if (local_a8 != (longlong *)0x0) {
        plVar7 = local_a8;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_a8 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_38 != 0) {
      plVar7 = local_68;
      if (local_48 != (longlong *)0x0) {
        plVar7 = local_48;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
    uVar3 = 1;
  }
  *(undefined1 *)(param_1 + 5) = uVar3;
  if (*(int *)(param_2 + 8) != 0) {
    plVar7 = (longlong *)param_2[6];
    if ((longlong *)param_2[6] == (longlong *)0x0) {
      plVar7 = param_2 + 2;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (param_2[6] != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 141e8b9e0 FUN_141e8b9e0 body=810 status=ok
// SIG undefined FUN_141e8b9e0(void)

undefined8 *
FUN_141e8b9e0(undefined8 *param_1,undefined8 param_2,undefined4 param_3,uint param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
             undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
             undefined4 param_13,byte param_14,undefined1 param_15,undefined4 param_16,
             undefined8 param_17,undefined4 *param_18)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  
  *param_1 = &PTR_FUN_143f3ece8;
  *(undefined4 *)(param_1 + 1) = 0;
  plVar1 = param_1 + 0x14;
  *param_1 = &PTR_FUN_144d838f0;
  plVar2 = param_1 + 0x17;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 2) = 0x100;
  param_1[3] = 0;
  uVar3 = param_18[1];
  uVar4 = param_18[2];
  uVar5 = param_18[3];
  *(undefined4 *)(param_1 + 4) = *param_18;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar3;
  *(undefined4 *)(param_1 + 5) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar5;
  *(undefined4 *)(param_1 + 6) = param_18[4];
  *(undefined4 *)((longlong)param_1 + 0x3c) = param_13;
  *(undefined4 *)(param_1 + 8) = param_16;
  param_1[9] = param_1 + 10;
  *(undefined4 *)((longlong)param_1 + 0x34) = param_9;
  *(undefined4 *)(param_1 + 7) = param_10;
  param_1[10] = 0xc7efffffe0000000;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = param_6;
  *(undefined4 *)((longlong)param_1 + 100) = param_7;
  *param_1 = &PTR_FUN_144ebe338;
  *(undefined4 *)((longlong)param_1 + 0x6c) = param_11;
  *(undefined4 *)(param_1 + 0xd) = param_10;
  *(uint *)((longlong)param_1 + 0x9c) = *(uint *)((longlong)param_1 + 0x9c) & 0xfffffffe;
  *(undefined4 *)((longlong)param_1 + 0x8c) = param_5;
  param_1[0xe] = param_2;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(uint *)((longlong)param_1 + 0x84) = param_4;
  *(undefined4 *)(param_1 + 0x11) = param_9;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *param_1 = &PTR_FUN_144ebe430;
  *plVar1 = 0;
  param_1[0x15] = 0;
  param_1[0x16] = param_17;
  *plVar2 = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(uint *)(param_1 + 0x1d) = *(uint *)(param_1 + 0x1d) & 0xfffffffe | (uint)param_14;
  iVar9 = *(int *)(param_1 + 0x15);
  iVar6 = 1;
  if ((param_14 & 1) != 0) {
    iVar6 = 6;
  }
  iVar6 = iVar6 * *(int *)((longlong)param_1 + 0x34);
  iVar7 = iVar6 + iVar9;
  *(int *)(param_1 + 0x15) = iVar7;
  if (*(int *)((longlong)param_1 + 0xac) < iVar7) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1);
  }
  _guard_xfg_dispatch_icall_nop((void *)(*plVar1 + (longlong)iVar9 * 8),0,(longlong)iVar6 << 3);
  iVar9 = 1;
  if ((*(byte *)(param_1 + 0x1d) & 1) != 0) {
    iVar9 = 6;
  }
  TBitArray<TInlineAllocator<1,FDefaultAllocator>_>::Init
            (param_1 + 0x1a,param_15,iVar9 * *(int *)((longlong)param_1 + 0x34));
  iVar9 = 1;
  if ((*(byte *)(param_1 + 0x1d) & 1) != 0) {
    iVar9 = 6;
  }
  iVar6 = *(int *)(param_1 + 0x18);
  iVar9 = iVar9 * *(int *)((longlong)param_1 + 0x34);
  iVar7 = iVar6 + iVar9;
  *(int *)(param_1 + 0x18) = iVar7;
  if (*(int *)((longlong)param_1 + 0xc4) < iVar7) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar2);
  }
  _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar6 * 0x10 + *plVar2),0,(longlong)iVar9 << 4);
  lVar8 = 0;
  if (DAT_1469f59e0 != 0) {
    lVar8 = DAT_1469f59d8;
  }
  if (lVar8 == 0) {
    return param_1;
  }
  local_2c = (undefined1)param_13;
  local_38 = param_16;
  local_44 = param_6;
  local_40 = param_7;
  local_3c = param_8;
  local_48 = 0;
  local_34 = param_9;
  local_30 = param_10;
  if (param_4 < 0x8c1b) {
    if (param_4 == 0x8c1a) {
      local_2b = 6;
      goto LAB_141e8bcd5;
    }
    if (param_4 != 0xde1) {
      if (param_4 == 0x806f) {
        local_2b = 3;
      }
      else {
        if (param_4 != 0x8513) {
          return param_1;
        }
        local_2b = 4;
      }
      goto LAB_141e8bcd5;
    }
  }
  else {
    if (param_4 == 0x9009) {
      local_3c = param_12;
      local_2b = 7;
      goto LAB_141e8bcd5;
    }
    if (param_4 != 0x9100) {
      return param_1;
    }
  }
  local_2b = 2;
LAB_141e8bcd5:
  if (DAT_1469f59d8 != 0) {
    FShaderCache::InternalLogTexture(DAT_1469f59d8,&local_48,param_1);
  }
  return param_1;
}



// FUNCTION 141e8bd10 FUN_141e8bd10 body=825 status=ok
// SIG undefined FUN_141e8bd10(void)

undefined8 *
FUN_141e8bd10(undefined8 *param_1,undefined8 param_2,undefined4 param_3,uint param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
             undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined4 param_12,
             undefined4 param_13,byte param_14,undefined1 param_15,undefined4 param_16,
             undefined8 param_17,undefined4 *param_18)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  
  *param_1 = &PTR_FUN_143f3ece8;
  *(undefined4 *)(param_1 + 1) = 0;
  plVar1 = param_1 + 0x14;
  *param_1 = &PTR_FUN_144d838f0;
  plVar2 = param_1 + 0x17;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 2) = 0x100;
  param_1[3] = 0;
  uVar3 = param_18[1];
  uVar4 = param_18[2];
  uVar5 = param_18[3];
  *(undefined4 *)(param_1 + 4) = *param_18;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar3;
  *(undefined4 *)(param_1 + 5) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar5;
  *(undefined4 *)(param_1 + 6) = param_18[4];
  *(undefined4 *)(param_1 + 8) = param_16;
  param_1[9] = param_1 + 10;
  *(undefined4 *)((longlong)param_1 + 0x34) = param_9;
  *(undefined4 *)(param_1 + 7) = 1;
  *(undefined4 *)((longlong)param_1 + 0x3c) = param_13;
  param_1[10] = 0xc7efffffe0000000;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = param_6;
  *(undefined4 *)((longlong)param_1 + 100) = param_7;
  *(undefined4 *)(param_1 + 0xd) = param_8;
  *param_1 = &PTR_FUN_144d83998;
  *(uint *)((longlong)param_1 + 0x9c) = *(uint *)((longlong)param_1 + 0x9c) & 0xfffffffe;
  *(undefined4 *)((longlong)param_1 + 0x8c) = param_5;
  param_1[0xe] = param_2;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(uint *)((longlong)param_1 + 0x84) = param_4;
  *(undefined4 *)(param_1 + 0x11) = param_9;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *param_1 = &PTR_FUN_144ebe488;
  *plVar1 = 0;
  param_1[0x15] = 0;
  param_1[0x16] = param_17;
  *plVar2 = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(uint *)(param_1 + 0x1d) = *(uint *)(param_1 + 0x1d) & 0xfffffffe | (uint)param_14;
  iVar8 = *(int *)(param_1 + 0x15);
  iVar6 = 1;
  if (*(int *)(param_1 + 0xd) != 0) {
    iVar6 = *(int *)(param_1 + 0xd);
  }
  iVar10 = 1;
  iVar7 = 1;
  if ((param_14 & 1) != 0) {
    iVar7 = 6;
  }
  iVar6 = iVar7 * iVar6 * *(int *)((longlong)param_1 + 0x34);
  iVar7 = iVar6 + iVar8;
  *(int *)(param_1 + 0x15) = iVar7;
  if (*(int *)((longlong)param_1 + 0xac) < iVar7) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1);
  }
  _guard_xfg_dispatch_icall_nop((void *)(*plVar1 + (longlong)iVar8 * 8),0,(longlong)iVar6 << 3);
  iVar8 = 1;
  if ((*(byte *)(param_1 + 0x1d) & 1) != 0) {
    iVar8 = 6;
  }
  TBitArray<TInlineAllocator<1,FDefaultAllocator>_>::Init
            (param_1 + 0x1a,param_15,iVar8 * *(int *)((longlong)param_1 + 0x34));
  iVar8 = iVar10;
  if (*(int *)(param_1 + 0xd) != 0) {
    iVar8 = *(int *)(param_1 + 0xd);
  }
  if ((*(byte *)(param_1 + 0x1d) & 1) != 0) {
    iVar10 = 6;
  }
  iVar6 = *(int *)(param_1 + 0x18);
  iVar7 = iVar10 * iVar8 * *(int *)((longlong)param_1 + 0x34);
  iVar8 = iVar6 + iVar7;
  *(int *)(param_1 + 0x18) = iVar8;
  if (*(int *)((longlong)param_1 + 0xc4) < iVar8) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar2);
  }
  _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar6 * 0x10 + *plVar2),0,(longlong)iVar7 << 4);
  lVar9 = 0;
  if (DAT_1469f59e0 != 0) {
    lVar9 = DAT_1469f59d8;
  }
  if (lVar9 == 0) {
    return param_1;
  }
  local_38 = param_16;
  local_30 = param_10;
  local_44 = param_6;
  local_40 = param_7;
  local_3c = param_8;
  local_48 = 0;
  local_2c = (undefined1)param_13;
  local_34 = param_9;
  if (param_4 < 0x8c1b) {
    if (param_4 == 0x8c1a) {
      local_2b = 6;
      goto LAB_141e8c014;
    }
    if (param_4 != 0xde1) {
      if (param_4 == 0x806f) {
        local_2b = 3;
      }
      else {
        if (param_4 != 0x8513) {
          return param_1;
        }
        local_2b = 4;
      }
      goto LAB_141e8c014;
    }
  }
  else {
    if (param_4 == 0x9009) {
      local_3c = param_12;
      local_2b = 7;
      goto LAB_141e8c014;
    }
    if (param_4 != 0x9100) {
      return param_1;
    }
  }
  local_2b = 2;
LAB_141e8c014:
  if (DAT_1469f59d8 != 0) {
    FShaderCache::InternalLogTexture(DAT_1469f59d8,&local_48,param_1);
  }
  return param_1;
}



// FUNCTION 141e8c050 FUN_141e8c050 body=825 status=ok
// SIG undefined FUN_141e8c050(void)

undefined8 *
FUN_141e8c050(undefined8 *param_1,undefined8 param_2,undefined4 param_3,uint param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
             undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined4 param_12,
             undefined4 param_13,byte param_14,undefined1 param_15,undefined4 param_16,
             undefined8 param_17,undefined4 *param_18)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  
  *param_1 = &PTR_FUN_143f3ece8;
  *(undefined4 *)(param_1 + 1) = 0;
  plVar1 = param_1 + 0x14;
  *param_1 = &PTR_FUN_144d838f0;
  plVar2 = param_1 + 0x17;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 2) = 0x100;
  param_1[3] = 0;
  uVar3 = param_18[1];
  uVar4 = param_18[2];
  uVar5 = param_18[3];
  *(undefined4 *)(param_1 + 4) = *param_18;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar3;
  *(undefined4 *)(param_1 + 5) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar5;
  *(undefined4 *)(param_1 + 6) = param_18[4];
  *(undefined4 *)(param_1 + 8) = param_16;
  param_1[9] = param_1 + 10;
  *(undefined4 *)((longlong)param_1 + 0x34) = param_9;
  *(undefined4 *)(param_1 + 7) = 1;
  *(undefined4 *)((longlong)param_1 + 0x3c) = param_13;
  param_1[10] = 0xc7efffffe0000000;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = param_6;
  *(undefined4 *)((longlong)param_1 + 100) = param_7;
  *(undefined4 *)(param_1 + 0xd) = param_8;
  *param_1 = &PTR_FUN_144d839e8;
  *(uint *)((longlong)param_1 + 0x9c) = *(uint *)((longlong)param_1 + 0x9c) & 0xfffffffe;
  *(undefined4 *)((longlong)param_1 + 0x8c) = param_5;
  param_1[0xe] = param_2;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(uint *)((longlong)param_1 + 0x84) = param_4;
  *(undefined4 *)(param_1 + 0x11) = param_9;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *param_1 = &PTR_FUN_144ebe4d8;
  *plVar1 = 0;
  param_1[0x15] = 0;
  param_1[0x16] = param_17;
  *plVar2 = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(uint *)(param_1 + 0x1d) = *(uint *)(param_1 + 0x1d) & 0xfffffffe | (uint)param_14;
  iVar8 = *(int *)(param_1 + 0x15);
  iVar6 = 1;
  if (*(int *)(param_1 + 0xd) != 0) {
    iVar6 = *(int *)(param_1 + 0xd);
  }
  iVar10 = 1;
  iVar7 = 1;
  if ((param_14 & 1) != 0) {
    iVar7 = 6;
  }
  iVar6 = iVar7 * iVar6 * *(int *)((longlong)param_1 + 0x34);
  iVar7 = iVar6 + iVar8;
  *(int *)(param_1 + 0x15) = iVar7;
  if (*(int *)((longlong)param_1 + 0xac) < iVar7) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1);
  }
  _guard_xfg_dispatch_icall_nop((void *)(*plVar1 + (longlong)iVar8 * 8),0,(longlong)iVar6 << 3);
  iVar8 = 1;
  if ((*(byte *)(param_1 + 0x1d) & 1) != 0) {
    iVar8 = 6;
  }
  TBitArray<TInlineAllocator<1,FDefaultAllocator>_>::Init
            (param_1 + 0x1a,param_15,iVar8 * *(int *)((longlong)param_1 + 0x34));
  iVar8 = iVar10;
  if (*(int *)(param_1 + 0xd) != 0) {
    iVar8 = *(int *)(param_1 + 0xd);
  }
  if ((*(byte *)(param_1 + 0x1d) & 1) != 0) {
    iVar10 = 6;
  }
  iVar6 = *(int *)(param_1 + 0x18);
  iVar7 = iVar10 * iVar8 * *(int *)((longlong)param_1 + 0x34);
  iVar8 = iVar6 + iVar7;
  *(int *)(param_1 + 0x18) = iVar8;
  if (*(int *)((longlong)param_1 + 0xc4) < iVar8) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar2);
  }
  _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar6 * 0x10 + *plVar2),0,(longlong)iVar7 << 4);
  lVar9 = 0;
  if (DAT_1469f59e0 != 0) {
    lVar9 = DAT_1469f59d8;
  }
  if (lVar9 == 0) {
    return param_1;
  }
  local_38 = param_16;
  local_30 = param_10;
  local_44 = param_6;
  local_40 = param_7;
  local_3c = param_8;
  local_48 = 0;
  local_2c = (undefined1)param_13;
  local_34 = param_9;
  if (param_4 < 0x8c1b) {
    if (param_4 == 0x8c1a) {
      local_2b = 6;
      goto LAB_141e8c354;
    }
    if (param_4 != 0xde1) {
      if (param_4 == 0x806f) {
        local_2b = 3;
      }
      else {
        if (param_4 != 0x8513) {
          return param_1;
        }
        local_2b = 4;
      }
      goto LAB_141e8c354;
    }
  }
  else {
    if (param_4 == 0x9009) {
      local_3c = param_12;
      local_2b = 7;
      goto LAB_141e8c354;
    }
    if (param_4 != 0x9100) {
      return param_1;
    }
  }
  local_2b = 2;
LAB_141e8c354:
  if (DAT_1469f59d8 != 0) {
    FShaderCache::InternalLogTexture(DAT_1469f59d8,&local_48,param_1);
  }
  return param_1;
}



// FUNCTION 141e8c390 FUN_141e8c390 body=833 status=ok
// SIG undefined FUN_141e8c390(void)

undefined8 *
FUN_141e8c390(undefined8 *param_1,undefined8 param_2,undefined4 param_3,uint param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
             undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined4 param_12,
             undefined4 param_13,byte param_14,undefined1 param_15,undefined4 param_16,
             undefined8 param_17,undefined4 *param_18)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  
  *param_1 = &PTR_FUN_143f3ece8;
  *(undefined4 *)(param_1 + 1) = 0;
  plVar1 = param_1 + 0x14;
  *param_1 = &PTR_FUN_144d838f0;
  plVar2 = param_1 + 0x17;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 2) = 0x100;
  param_1[3] = 0;
  uVar4 = param_18[1];
  uVar5 = param_18[2];
  uVar6 = param_18[3];
  *(undefined4 *)(param_1 + 4) = *param_18;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar4;
  *(undefined4 *)(param_1 + 5) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar6;
  *(undefined4 *)(param_1 + 6) = param_18[4];
  *(undefined4 *)((longlong)param_1 + 0x3c) = param_13;
  *(undefined4 *)(param_1 + 8) = param_16;
  param_1[9] = param_1 + 10;
  *(undefined4 *)((longlong)param_1 + 0x34) = param_9;
  *(undefined4 *)(param_1 + 7) = 1;
  param_1[10] = 0xc7efffffe0000000;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = param_6;
  *param_1 = &PTR_FUN_144ebe390;
  *(undefined4 *)(param_1 + 0xd) = param_12;
  *(uint *)((longlong)param_1 + 0x9c) = *(uint *)((longlong)param_1 + 0x9c) & 0xfffffffe;
  *(undefined4 *)((longlong)param_1 + 0x8c) = param_5;
  param_1[0xe] = param_2;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(uint *)((longlong)param_1 + 0x84) = param_4;
  *(undefined4 *)(param_1 + 0x11) = param_9;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *param_1 = &PTR_FUN_144ebe528;
  *plVar1 = 0;
  param_1[0x15] = 0;
  param_1[0x16] = param_17;
  *plVar2 = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  uVar7 = *(uint *)(param_1 + 0xd);
  *(uint *)(param_1 + 0x1d) = *(uint *)(param_1 + 0x1d) & 0xfffffffe | (uint)param_14;
  iVar10 = *(int *)(param_1 + 0x15);
  if (uVar7 < 2) {
    uVar7 = 0;
  }
  uVar3 = 1;
  if (uVar7 != 0) {
    uVar3 = uVar7;
  }
  iVar8 = 1;
  if ((param_14 & 1) != 0) {
    iVar8 = 6;
  }
  iVar8 = iVar8 * uVar3 * *(int *)((longlong)param_1 + 0x34);
  iVar9 = iVar8 + iVar10;
  *(int *)(param_1 + 0x15) = iVar9;
  if (*(int *)((longlong)param_1 + 0xac) < iVar9) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1);
  }
  _guard_xfg_dispatch_icall_nop((void *)(*plVar1 + (longlong)iVar10 * 8),0,(longlong)iVar8 << 3);
  iVar10 = 1;
  if ((*(byte *)(param_1 + 0x1d) & 1) != 0) {
    iVar10 = 6;
  }
  TBitArray<TInlineAllocator<1,FDefaultAllocator>_>::Init
            (param_1 + 0x1a,param_15,iVar10 * *(int *)((longlong)param_1 + 0x34));
  uVar7 = *(uint *)(param_1 + 0xd);
  iVar10 = 1;
  if (uVar7 < 2) {
    uVar7 = 0;
  }
  uVar3 = 1;
  if (uVar7 != 0) {
    uVar3 = uVar7;
  }
  if ((*(byte *)(param_1 + 0x1d) & 1) != 0) {
    iVar10 = 6;
  }
  iVar8 = *(int *)(param_1 + 0x18);
  iVar9 = iVar10 * uVar3 * *(int *)((longlong)param_1 + 0x34);
  iVar10 = iVar8 + iVar9;
  *(int *)(param_1 + 0x18) = iVar10;
  if (*(int *)((longlong)param_1 + 0xc4) < iVar10) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar2);
  }
  _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar8 * 0x10 + *plVar2),0,(longlong)iVar9 << 4);
  lVar11 = 0;
  if (DAT_1469f59e0 != 0) {
    lVar11 = DAT_1469f59d8;
  }
  if (lVar11 == 0) {
    return param_1;
  }
  local_2c = (undefined1)param_13;
  local_38 = param_16;
  local_30 = param_10;
  local_44 = param_6;
  local_40 = param_7;
  local_3c = param_8;
  local_48 = 0;
  local_34 = param_9;
  if (param_4 < 0x8c1b) {
    if (param_4 == 0x8c1a) {
      local_2b = 6;
      goto LAB_141e8c69c;
    }
    if (param_4 != 0xde1) {
      if (param_4 == 0x806f) {
        local_2b = 3;
      }
      else {
        if (param_4 != 0x8513) {
          return param_1;
        }
        local_2b = 4;
      }
      goto LAB_141e8c69c;
    }
  }
  else {
    if (param_4 == 0x9009) {
      local_2b = 7;
      local_3c = param_12;
      goto LAB_141e8c69c;
    }
    if (param_4 != 0x9100) {
      return param_1;
    }
  }
  local_2b = 2;
LAB_141e8c69c:
  if (DAT_1469f59d8 != 0) {
    FShaderCache::InternalLogTexture(DAT_1469f59d8,&local_48,param_1);
  }
  return param_1;
}



// FUNCTION 141e8c6e0 FBaseShaderResourceTable body=297 status=ok
// SIG undefined FBaseShaderResourceTable(void)

undefined4 *
FBaseShaderResourceTable::FBaseShaderResourceTable(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  iVar1 = param_2[4];
  pvVar2 = *(void **)(param_2 + 2);
  param_1[4] = iVar1;
  if (iVar1 == 0) {
    param_1[5] = 0;
  }
  else {
    TArray<int,FDefaultAllocator>::ResizeForCopy(param_1 + 2,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 2),pvVar2,(longlong)iVar1 << 2);
  }
  *(undefined8 *)(param_1 + 6) = 0;
  iVar1 = param_2[8];
  pvVar2 = *(void **)(param_2 + 6);
  param_1[8] = iVar1;
  if (iVar1 == 0) {
    param_1[9] = 0;
  }
  else {
    TArray<int,FDefaultAllocator>::ResizeForCopy(param_1 + 6,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 6),pvVar2,(longlong)iVar1 << 2);
  }
  *(undefined8 *)(param_1 + 10) = 0;
  iVar1 = param_2[0xc];
  pvVar2 = *(void **)(param_2 + 10);
  param_1[0xc] = iVar1;
  if (iVar1 == 0) {
    param_1[0xd] = 0;
  }
  else {
    TArray<int,FDefaultAllocator>::ResizeForCopy(param_1 + 10,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 10),pvVar2,(longlong)iVar1 << 2);
  }
  *(undefined8 *)(param_1 + 0xe) = 0;
  iVar1 = param_2[0x10];
  pvVar2 = *(void **)(param_2 + 0xe);
  param_1[0x10] = iVar1;
  if (iVar1 == 0) {
    param_1[0x11] = 0;
  }
  else {
    TArray<int,FDefaultAllocator>::ResizeForCopy(param_1 + 0xe,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0xe),pvVar2,(longlong)iVar1 << 2);
  }
  return param_1;
}



// FUNCTION 141e8c810 FOpenGLBlendState body=338 status=ok
// SIG undefined FOpenGLBlendState(void)

undefined8 * FOpenGLBlendState::FOpenGLBlendState(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_143f3ece8;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_144ebe5f8;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 2) = 0x100;
  *(uint *)(param_1 + 7) = *(uint *)(param_1 + 7) & 0xfffffff0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(uint *)((longlong)param_1 + 0x5c) = *(uint *)((longlong)param_1 + 0x5c) & 0xfffffff0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffffff0;
  *(undefined1 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined1 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(uint *)((longlong)param_1 + 0xa4) = *(uint *)((longlong)param_1 + 0xa4) & 0xfffffff0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  *(uint *)(param_1 + 0x19) = *(uint *)(param_1 + 0x19) & 0xfffffff0;
  *(undefined1 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined1 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(uint *)((longlong)param_1 + 0xec) = *(uint *)((longlong)param_1 + 0xec) & 0xfffffff0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  *(uint *)(param_1 + 0x22) = *(uint *)(param_1 + 0x22) & 0xfffffff0;
  *(undefined1 *)((longlong)param_1 + 0x114) = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined1 *)((longlong)param_1 + 0x124) = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  *(uint *)((longlong)param_1 + 0x134) = *(uint *)((longlong)param_1 + 0x134) & 0xfffffff0;
  return param_1;
}



// FUNCTION 141e8c970 FUN_141e8c970 body=987 status=ok
// SIG undefined FUN_141e8c970(void)

undefined8 *
FUN_141e8c970(undefined8 *param_1,undefined8 param_2,longlong param_3,longlong param_4,
             longlong param_5,longlong param_6,longlong param_7,longlong param_8)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  
  *param_1 = &PTR_FUN_143f3ece8;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_144ebe328;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 2) = 0x100;
  FCachedBoundShaderStateLink::FCachedBoundShaderStateLink
            (param_1 + 3,param_3,param_4,param_5,param_7,param_8,param_6,param_1,1);
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  puVar3 = (undefined8 *)param_1[0x14];
  param_1[0x14] = param_3;
  if (param_3 != 0) {
    LOCK();
    *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 1;
    UNLOCK();
  }
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      if ((*(char *)(puVar3 + 2) == '\0') &&
         ((DAT_146ab62f5 != '\0' || (cVar5 = FOutputDevice::CanBeUsedOnAnyThread(), cVar5 == '\0')))
         ) {
        LOCK();
        bVar6 = *(int *)((longlong)puVar3 + 0xc) == 0;
        if (bVar6) {
          *(int *)((longlong)puVar3 + 0xc) = 1;
        }
        UNLOCK();
        if (bVar6) {
          TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar3);
        }
      }
      else {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
  }
  puVar3 = (undefined8 *)param_1[0x15];
  param_1[0x15] = param_4;
  if (param_4 != 0) {
    LOCK();
    *(int *)(param_4 + 8) = *(int *)(param_4 + 8) + 1;
    UNLOCK();
  }
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      if ((*(char *)(puVar3 + 2) == '\0') &&
         ((DAT_146ab62f5 != '\0' || (cVar5 = FOutputDevice::CanBeUsedOnAnyThread(), cVar5 == '\0')))
         ) {
        LOCK();
        bVar6 = *(int *)((longlong)puVar3 + 0xc) == 0;
        if (bVar6) {
          *(int *)((longlong)puVar3 + 0xc) = 1;
        }
        UNLOCK();
        if (bVar6) {
          TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar3);
        }
      }
      else {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
  }
  puVar3 = (undefined8 *)param_1[0x16];
  param_1[0x16] = param_5;
  if (param_5 != 0) {
    LOCK();
    *(int *)(param_5 + 8) = *(int *)(param_5 + 8) + 1;
    UNLOCK();
  }
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      if ((*(char *)(puVar3 + 2) == '\0') &&
         ((DAT_146ab62f5 != '\0' || (cVar5 = FOutputDevice::CanBeUsedOnAnyThread(), cVar5 == '\0')))
         ) {
        LOCK();
        bVar6 = *(int *)((longlong)puVar3 + 0xc) == 0;
        if (bVar6) {
          *(int *)((longlong)puVar3 + 0xc) = 1;
        }
        UNLOCK();
        if (bVar6) {
          TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar3);
        }
      }
      else {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
  }
  puVar3 = (undefined8 *)param_1[0x17];
  param_1[0x17] = param_6;
  if (param_6 != 0) {
    LOCK();
    *(int *)(param_6 + 8) = *(int *)(param_6 + 8) + 1;
    UNLOCK();
  }
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      if ((*(char *)(puVar3 + 2) == '\0') &&
         ((DAT_146ab62f5 != '\0' || (cVar5 = FOutputDevice::CanBeUsedOnAnyThread(), cVar5 == '\0')))
         ) {
        LOCK();
        bVar6 = *(int *)((longlong)puVar3 + 0xc) == 0;
        if (bVar6) {
          *(int *)((longlong)puVar3 + 0xc) = 1;
        }
        UNLOCK();
        if (bVar6) {
          TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar3);
        }
      }
      else {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
  }
  puVar3 = (undefined8 *)param_1[0x18];
  param_1[0x18] = param_7;
  if (param_7 != 0) {
    LOCK();
    *(int *)(param_7 + 8) = *(int *)(param_7 + 8) + 1;
    UNLOCK();
  }
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      if ((*(char *)(puVar3 + 2) == '\0') &&
         ((DAT_146ab62f5 != '\0' || (cVar5 = FOutputDevice::CanBeUsedOnAnyThread(), cVar5 == '\0')))
         ) {
        LOCK();
        bVar6 = *(int *)((longlong)puVar3 + 0xc) == 0;
        if (bVar6) {
          *(int *)((longlong)puVar3 + 0xc) = 1;
        }
        UNLOCK();
        if (bVar6) {
          TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar3);
        }
      }
      else {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
  }
  puVar3 = (undefined8 *)param_1[0x19];
  param_1[0x19] = param_8;
  if (param_8 != 0) {
    LOCK();
    *(int *)(param_8 + 8) = *(int *)(param_8 + 8) + 1;
    UNLOCK();
  }
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      if ((*(char *)(puVar3 + 2) == '\0') &&
         ((DAT_146ab62f5 != '\0' || (cVar5 = FOutputDevice::CanBeUsedOnAnyThread(), cVar5 == '\0')))
         ) {
        LOCK();
        bVar6 = *(int *)((longlong)puVar3 + 0xc) == 0;
        if (bVar6) {
          *(int *)((longlong)puVar3 + 0xc) = 1;
        }
        UNLOCK();
        if (bVar6) {
          TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar3);
        }
      }
      else {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
  }
  param_1[0x13] = param_2;
  if (param_3 == 0) {
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_3 + 0x3a8);
    param_1[0xb] = *(undefined8 *)(param_3 + 0x3a0);
    param_1[0xc] = uVar4;
    uVar4 = *(undefined8 *)(param_3 + 0x3b8);
    param_1[0xd] = *(undefined8 *)(param_3 + 0x3b0);
    param_1[0xe] = uVar4;
    uVar4 = *(undefined8 *)(param_3 + 0x3c8);
    param_1[0xf] = *(undefined8 *)(param_3 + 0x3c0);
    param_1[0x10] = uVar4;
    uVar4 = *(undefined8 *)(param_3 + 0x3d8);
    param_1[0x11] = *(undefined8 *)(param_3 + 0x3d0);
    param_1[0x12] = uVar4;
  }
  return param_1;
}



// FUNCTION 141e8cd50 FUN_141e8cd50 body=53 status=ok
// SIG undefined FUN_141e8cd50(void)

undefined8 * FUN_141e8cd50(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  param_1[2] = param_2;
  *param_1 = &PTR__scalar_deleting_destructor__144ebe608;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 3) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0xffffffff;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  return param_1;
}



// FUNCTION 141e8cd90 FOpenGLCodeHeader body=162 status=ok
// SIG undefined FOpenGLCodeHeader(void)

longlong FOpenGLCodeHeader::FOpenGLCodeHeader(longlong param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined2 *)(param_1 + 0xa4) = 0;
  *(undefined1 *)(param_1 + 0xb6) = 0;
  *(undefined8 *)(param_1 + 0xa6) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xae) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  return param_1;
}



// FUNCTION 141e8ce40 FOpenGLDisjointTimeStampQuery body=20 status=ok
// SIG undefined FOpenGLDisjointTimeStampQuery(void)

undefined1 *
FOpenGLDisjointTimeStampQuery::FOpenGLDisjointTimeStampQuery(undefined1 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return param_1;
}



// FUNCTION 141e8ce60 FOpenGLFramebufferKey body=226 status=ok
// SIG undefined FOpenGLFramebufferKey(void)

undefined8 *
FOpenGLFramebufferKey::FOpenGLFramebufferKey
          (undefined8 *param_1,uint param_2,longlong *param_3,int *param_4,longlong param_5,
          undefined8 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  int *piVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar8 = 0;
  param_1[0x18] = param_6;
  *(undefined4 *)(param_1 + 0x19) = param_7;
  uVar5 = (ulonglong)param_2;
  if (param_2 != 0) {
    puVar4 = (undefined4 *)((longlong)param_1 + 0xc);
    uVar8 = (ulonglong)param_2;
    puVar3 = param_1;
    piVar6 = param_4;
    do {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      *(longlong *)(puVar4 + -3) = *param_3;
      uVar1 = 0;
      if (*param_3 != 0) {
        uVar1 = *(undefined4 *)(*param_3 + 0x10);
      }
      puVar4[-1] = uVar1;
      *puVar4 = *(undefined4 *)((param_5 - (longlong)param_4) + (longlong)piVar6);
      if ((param_4 == (int *)0x0) || (iVar2 = *piVar6, iVar2 == -1)) {
        iVar2 = -1;
      }
      puVar4[1] = iVar2;
      puVar3 = puVar3 + 3;
      puVar4 = puVar4 + 6;
      param_3 = param_3 + 1;
      piVar6 = piVar6 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
    if (7 < param_2) {
      return param_1;
    }
  }
  puVar3 = param_1 + uVar8 * 3 + 2;
  do {
    param_1[uVar8 * 3] = 0;
    param_1[uVar8 * 3 + 1] = 0;
    uVar7 = (int)uVar8 + 1;
    param_1[uVar8 * 3 + 2] = 0;
    *(undefined4 *)puVar3 = 0xffffffff;
    puVar3 = puVar3 + 3;
    uVar8 = (ulonglong)uVar7;
  } while (uVar7 < 8);
  return param_1;
}



// FUNCTION 141e8cf50 FOpenGLLinkedProgram body=534 status=ok
// SIG undefined FOpenGLLinkedProgram(void)

longlong FOpenGLLinkedProgram::FOpenGLLinkedProgram(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  undefined4 *puVar4;
  
  FUN_141e8d1f0();
  *(undefined8 *)(param_1 + 0x4b0) = 0;
  *(undefined8 *)(param_1 + 0x4b8) = 0;
  *(undefined8 *)(param_1 + 0x4c0) = 0;
  *(undefined8 *)(param_1 + 0x4c8) = 0;
  *(undefined8 *)(param_1 + 0x4d0) = 0;
  *(undefined8 *)(param_1 + 0x4d8) = 0;
  *(undefined8 *)(param_1 + 0x4e0) = 0;
  *(undefined8 *)(param_1 + 0x4e8) = 0;
  *(undefined8 *)(param_1 + 0x4f0) = 0;
  *(undefined8 *)(param_1 + 0x4f8) = 0;
  *(undefined8 *)(param_1 + 0x500) = 0;
  *(undefined8 *)(param_1 + 0x508) = 0;
  *(undefined8 *)(param_1 + 0x510) = 0;
  *(undefined8 *)(param_1 + 0x518) = 0;
  *(undefined8 *)(param_1 + 0x520) = 0;
  *(undefined8 *)(param_1 + 0x528) = 0;
  *(undefined8 *)(param_1 + 0x530) = 0;
  *(undefined8 *)(param_1 + 0x538) = 0;
  *(undefined8 *)(param_1 + 0x540) = 0;
  *(undefined8 *)(param_1 + 0x548) = 0;
  *(undefined8 *)(param_1 + 0x550) = 0;
  *(undefined8 *)(param_1 + 0x558) = 0;
  *(undefined8 *)(param_1 + 0x560) = 0;
  *(undefined8 *)(param_1 + 0x568) = 0;
  *(undefined8 *)(param_1 + 0x570) = 0;
  *(undefined8 *)(param_1 + 0x578) = 0;
  *(undefined8 *)(param_1 + 0x580) = 0;
  *(undefined8 *)(param_1 + 0x588) = 0;
  *(undefined8 *)(param_1 + 0x590) = 0;
  *(undefined8 *)(param_1 + 0x598) = 0;
  *(undefined8 *)(param_1 + 0x5a0) = 0;
  *(undefined8 *)(param_1 + 0x5a8) = 0;
  *(undefined8 *)(param_1 + 0x5b0) = 0;
  *(undefined8 *)(param_1 + 0x5b8) = 0;
  *(undefined8 *)(param_1 + 0x5c0) = 0;
  *(undefined8 *)(param_1 + 0x5c8) = 0;
  *(undefined4 *)(param_1 + 0x5d0) = 0;
  *(undefined2 *)(param_1 + 0x5d4) = 0;
  *(undefined4 *)(param_1 + 0x5d8) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x5f0) = 0;
  *(undefined8 *)(param_1 + 0x5f8) = 0;
  *(undefined8 *)(param_1 + 0x610) = 0;
  *(undefined8 *)(param_1 + 0x618) = 0;
  *(undefined8 *)(param_1 + 0x620) = 0;
  *(undefined8 *)(param_1 + 0x628) = 0;
  iVar1 = DAT_1464c97fc;
  *(undefined4 *)(param_1 + 0x5f8) = 0;
  iVar2 = (int)(iVar1 + 0x1f + (iVar1 + 0x1f >> 0x1f & 0x1fU)) >> 5;
  iVar3 = iVar2 << 5;
  if (*(int *)(param_1 + 0x5fc) != iVar3) {
    *(int *)(param_1 + 0x5fc) = iVar3;
    TBitArray<FDefaultBitArrayAllocator>::Realloc((void *)(param_1 + 0x5e0));
  }
  if (iVar1 != 0) {
    *(int *)(param_1 + 0x5f8) = iVar1;
    _Dst = *(void **)(param_1 + 0x5f0);
    if (*(void **)(param_1 + 0x5f0) == (void *)0x0) {
      _Dst = (void *)(param_1 + 0x5e0);
    }
    ::_guard_xfg_dispatch_icall_nop(_Dst,0,(longlong)iVar2 << 2);
  }
  *(undefined4 *)(param_1 + 0x618) = 0;
  if (*(int *)(param_1 + 0x61c) != 0x20) {
    *(undefined4 *)(param_1 + 0x61c) = 0x20;
    TBitArray<FDefaultBitArrayAllocator>::Realloc((undefined4 *)(param_1 + 0x600),0);
  }
  *(undefined4 *)(param_1 + 0x618) = 8;
  puVar4 = *(undefined4 **)(param_1 + 0x610);
  if (*(undefined4 **)(param_1 + 0x610) == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(param_1 + 0x600);
  }
  *puVar4 = 0;
  return param_1;
}



// FUNCTION 141e8d170 FOpenGLLinkedProgramConfiguration body=128 status=ok
// SIG undefined FOpenGLLinkedProgramConfiguration(void)

longlong FOpenGLLinkedProgramConfiguration::FOpenGLLinkedProgramConfiguration
                   (longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  
  puVar5 = (undefined4 *)(param_1 + 0xc4);
  param_2 = param_2 - param_1;
  lVar6 = 6;
  do {
    FOpenGLShaderBindings::FOpenGLShaderBindings(puVar5 + -0x31,param_2 + -0xc4 + (longlong)puVar5);
    puVar1 = (undefined4 *)(param_2 + -0x14 + (longlong)puVar5);
    uVar2 = puVar1[1];
    uVar3 = puVar1[2];
    uVar4 = puVar1[3];
    puVar5[-5] = *puVar1;
    puVar5[-4] = uVar2;
    puVar5[-3] = uVar3;
    puVar5[-2] = uVar4;
    puVar5[-1] = *(undefined4 *)(param_2 + -4 + (longlong)puVar5);
    *puVar5 = *(undefined4 *)(param_2 + (longlong)puVar5);
    puVar5 = puVar5 + 0x32;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  return param_1;
}



// FUNCTION 141e8d1f0 FUN_141e8d1f0 body=568 status=ok
// SIG undefined FUN_141e8d1f0(void)

longlong FUN_141e8d1f0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 6;
  lVar1 = param_1 + 0x11c;
  do {
    *(undefined8 *)(lVar1 + -0x11c) = 0;
    *(undefined8 *)(lVar1 + -0x114) = 0;
    *(undefined8 *)(lVar1 + -0x10c) = 0;
    *(undefined8 *)(lVar1 + -0x104) = 0;
    *(undefined8 *)(lVar1 + -0xfc) = 0;
    *(undefined8 *)(lVar1 + -0xf4) = 0;
    *(undefined8 *)(lVar1 + -0xec) = 0;
    *(undefined8 *)(lVar1 + -0xe4) = 0;
    *(undefined4 *)(lVar1 + -0xdc) = 0;
    *(undefined8 *)(lVar1 + -0xd4) = 0;
    *(undefined8 *)(lVar1 + -0xcc) = 0;
    *(undefined8 *)(lVar1 + -0xc4) = 0;
    *(undefined8 *)(lVar1 + -0xbc) = 0;
    *(undefined8 *)(lVar1 + -0xb4) = 0;
    *(undefined8 *)(lVar1 + -0xac) = 0;
    *(undefined8 *)(lVar1 + -0xa4) = 0;
    *(undefined8 *)(lVar1 + -0x9c) = 0;
    *(undefined8 *)(lVar1 + -0x94) = 0;
    *(undefined8 *)(lVar1 + -0x8c) = 0;
    *(undefined4 *)(lVar1 + -0x84) = 0;
    *(undefined2 *)(lVar1 + -0x80) = 0;
    *(undefined1 *)(lVar1 + -0x6e) = 0;
    *(undefined8 *)(lVar1 + -0x7e) = 0xffffffffffffffff;
    *(undefined8 *)(lVar1 + -0x76) = 0xffffffffffffffff;
    *(undefined8 *)(lVar1 + -0x6c) = 0;
    *(undefined8 *)(lVar1 + -100) = 0;
    *(undefined4 *)(lVar1 + -0x5c) = 0;
    *(undefined8 *)(lVar1 + -0x54) = 0;
    *(undefined8 *)(lVar1 + -0x4c) = 0;
    *(undefined8 *)(lVar1 + -0x44) = 0;
    *(undefined8 *)(lVar1 + -0x3c) = 0;
    *(undefined8 *)(lVar1 + -0x34) = 0;
    *(undefined8 *)(lVar1 + -0x2c) = 0;
    *(undefined8 *)(lVar1 + -0x24) = 0;
    *(undefined8 *)(lVar1 + -0x1c) = 0;
    *(undefined4 *)(lVar1 + -0x14) = 0;
    *(undefined8 *)(lVar1 + -0xc) = 0;
    *(undefined8 *)(lVar1 + -4) = 0;
    *(undefined8 *)(lVar1 + 4) = 0;
    *(undefined8 *)(lVar1 + 0xc) = 0;
    *(undefined8 *)(lVar1 + 0x14) = 0;
    *(undefined8 *)(lVar1 + 0x1c) = 0;
    *(undefined8 *)(lVar1 + 0x24) = 0;
    *(undefined8 *)(lVar1 + 0x2c) = 0;
    *(undefined8 *)(lVar1 + 0x34) = 0;
    *(undefined8 *)(lVar1 + 0x3c) = 0;
    *(undefined4 *)(lVar1 + 0x44) = 0;
    *(undefined2 *)(lVar1 + 0x48) = 0;
    *(undefined1 *)(lVar1 + 0x5a) = 0;
    *(undefined8 *)(lVar1 + 0x4a) = 0xffffffffffffffff;
    *(undefined8 *)(lVar1 + 0x52) = 0xffffffffffffffff;
    *(undefined8 *)(lVar1 + 0x5c) = 0;
    *(undefined8 *)(lVar1 + 100) = 0;
    *(undefined4 *)(lVar1 + 0x6c) = 0;
    *(undefined8 *)(lVar1 + 0x74) = 0;
    *(undefined8 *)(lVar1 + 0x7c) = 0;
    *(undefined8 *)(lVar1 + 0x84) = 0;
    *(undefined8 *)(lVar1 + 0x8c) = 0;
    *(undefined8 *)(lVar1 + 0x94) = 0;
    *(undefined8 *)(lVar1 + 0x9c) = 0;
    *(undefined8 *)(lVar1 + 0xa4) = 0;
    *(undefined8 *)(lVar1 + 0xac) = 0;
    *(undefined4 *)(lVar1 + 0xb4) = 0;
    *(undefined8 *)(lVar1 + 0xbc) = 0;
    *(undefined8 *)(lVar1 + 0xc4) = 0;
    *(undefined8 *)(lVar1 + 0xcc) = 0;
    *(undefined8 *)(lVar1 + 0xd4) = 0;
    *(undefined8 *)(lVar1 + 0xdc) = 0;
    *(undefined8 *)(lVar1 + 0xe4) = 0;
    *(undefined8 *)(lVar1 + 0xec) = 0;
    *(undefined8 *)(lVar1 + 0xf4) = 0;
    *(undefined8 *)(lVar1 + 0xfc) = 0;
    *(undefined8 *)(lVar1 + 0x104) = 0;
    *(undefined4 *)(lVar1 + 0x10c) = 0;
    *(undefined2 *)(lVar1 + 0x110) = 0;
    *(undefined1 *)(lVar1 + 0x122) = 0;
    *(undefined8 *)(lVar1 + 0x112) = 0xffffffffffffffff;
    *(undefined8 *)(lVar1 + 0x11a) = 0xffffffffffffffff;
    *(undefined8 *)(lVar1 + 0x124) = 0;
    *(undefined8 *)(lVar1 + 300) = 0;
    *(undefined4 *)(lVar1 + 0x134) = 0;
    lVar1 = lVar1 + 600;
    lVar2 = lVar2 + -3;
  } while (lVar2 != 0);
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0x18c) = 0;
  *(undefined4 *)(param_1 + 0x254) = 0;
  *(undefined4 *)(param_1 + 0x31c) = 0;
  *(undefined4 *)(param_1 + 0x3e4) = 0;
  *(undefined4 *)(param_1 + 0x4ac) = 0;
  return param_1;
}



// FUNCTION 141e8d430 FUN_141e8d430 body=416 status=ok
// SIG undefined FUN_141e8d430(void)

undefined8 * FUN_141e8d430(undefined8 *param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  code *local_58 [2];
  longlong local_48 [4];
  longlong *local_28;
  int local_18;
  
  *param_1 = &PTR_FUN_143f3ece8;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_144ebe578;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 2) = 0x100;
  param_1[5] = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3d) = 1;
  *(undefined4 *)(param_1 + 8) = param_2;
  if (DAT_146ab6383 == '\0') {
    cVar1 = IsInRenderingThread();
    if (cVar1 != '\0') goto LAB_141e8d48b;
  }
  cVar1 = FUN_1415e13e0();
  if (cVar1 == '\0') {
    puVar3 = (undefined8 *)((longlong)DAT_146ab6ea8 + 0xfU & 0xfffffffffffffff0);
    puVar2 = puVar3 + 0xc;
    if (DAT_146ab6eb0 < puVar2) {
      FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,0x70);
      puVar3 = (undefined8 *)((longlong)DAT_146ab6ea8 + 0xfU & 0xfffffffffffffff0);
      puVar2 = puVar3 + 0xc;
    }
    DAT_146ab6e8c = DAT_146ab6e8c + 1;
    DAT_146ab6ea8 = puVar2;
    *DAT_146ab6e80 = puVar3;
    local_28 = (longlong *)0x0;
    local_18 = 0;
    DAT_146ab6e80 = puVar3 + 1;
    puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_48);
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[1] = param_1;
      *puVar2 = &PTR_FUN_143f77b70;
    }
    local_58[0] = FUN_141e93ba0;
    puVar3[1] = 0;
    *puVar3 = &PTR_ExecuteAndDestruct_144eb5ab0;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar3 + 2,local_58);
    if (local_18 != 0) {
      plVar4 = local_48;
      if (local_28 != (longlong *)0x0) {
        plVar4 = local_28;
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4,0);
      }
    }
    if (local_28 != (longlong *)0x0) {
      FMemory::Free();
    }
    return param_1;
  }
LAB_141e8d48b:
  *(undefined1 *)((longlong)param_1 + 0x3d) = 0;
  PlatformGetNewRenderQuery(param_1 + 3,param_1 + 4);
  FUN_141e745c0(param_1);
  return param_1;
}



// FUNCTION 141e8d5d0 FOpenGLShaderBindings body=684 status=ok
// SIG undefined FOpenGLShaderBindings(void)

undefined8 * FOpenGLShaderBindings::FOpenGLShaderBindings(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  
  *param_1 = 0;
  iVar8 = *(int *)(param_2 + 1);
  puVar7 = (undefined8 *)*param_2;
  *(int *)(param_1 + 1) = iVar8;
  if (iVar8 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1,iVar8,0);
    puVar6 = (undefined8 *)*param_1;
    do {
      *puVar6 = 0;
      iVar1 = *(int *)(puVar7 + 1);
      pvVar3 = (void *)*puVar7;
      *(int *)(puVar6 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
      }
      else {
        TArray<int,FDefaultAllocator>::ResizeForCopy(puVar6,iVar1,0);
        ::_guard_xfg_dispatch_icall_nop((void *)*puVar6,pvVar3,(longlong)iVar1 << 2);
      }
      puVar6 = puVar6 + 2;
      puVar7 = puVar7 + 2;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  param_1[2] = 0;
  iVar8 = *(int *)(param_2 + 3);
  pvVar3 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar8;
  if (iVar8 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    TArray<int,FDefaultAllocator>::ResizeForCopy(param_1 + 2,iVar8,0);
    ::_guard_xfg_dispatch_icall_nop((void *)param_1[2],pvVar3,(longlong)iVar8 << 2);
  }
  param_1[4] = 0;
  iVar8 = *(int *)(param_2 + 5);
  lVar4 = param_2[4];
  *(int *)(param_1 + 5) = iVar8;
  if (iVar8 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(param_1 + 4,iVar8,0);
    puVar7 = (undefined8 *)param_1[4];
    puVar9 = (undefined4 *)(lVar4 + 0x10);
    do {
      *puVar7 = 0;
      iVar1 = puVar9[-2];
      pvVar3 = *(void **)(puVar9 + -4);
      *(int *)(puVar7 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
      }
      else {
        TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(puVar7,iVar1,0);
        ::_guard_xfg_dispatch_icall_nop((void *)*puVar7,pvVar3,(longlong)iVar1);
      }
      uVar2 = *puVar9;
      puVar9 = puVar9 + 6;
      *(undefined4 *)(puVar7 + 2) = uVar2;
      puVar7 = puVar7 + 3;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  param_1[6] = 0;
  iVar8 = *(int *)(param_2 + 7);
  lVar4 = param_2[6];
  *(int *)(param_1 + 7) = iVar8;
  if (iVar8 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(param_1 + 6,iVar8,0);
    puVar7 = (undefined8 *)param_1[6];
    puVar9 = (undefined4 *)(lVar4 + 0x10);
    do {
      *puVar7 = 0;
      iVar1 = puVar9[-2];
      pvVar3 = *(void **)(puVar9 + -4);
      *(int *)(puVar7 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
      }
      else {
        TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(puVar7,iVar1,0);
        ::_guard_xfg_dispatch_icall_nop((void *)*puVar7,pvVar3,(longlong)iVar1);
      }
      uVar2 = *puVar9;
      puVar9 = puVar9 + 6;
      *(undefined4 *)(puVar7 + 2) = uVar2;
      puVar7 = puVar7 + 3;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  FBaseShaderResourceTable::FBaseShaderResourceTable(param_1 + 8,param_2 + 8);
  param_1[0x11] = 0;
  iVar8 = *(int *)(param_2 + 0x12);
  pvVar3 = (void *)param_2[0x11];
  *(int *)(param_1 + 0x12) = iVar8;
  if (iVar8 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  }
  else {
    TArray<int,FDefaultAllocator>::ResizeForCopy(param_1 + 0x11,iVar8,0);
    ::_guard_xfg_dispatch_icall_nop((void *)param_1[0x11],pvVar3,(longlong)iVar8 << 2);
  }
  *(undefined2 *)(param_1 + 0x13) = *(undefined2 *)(param_2 + 0x13);
  *(undefined1 *)((longlong)param_1 + 0x9a) = *(undefined1 *)((longlong)param_2 + 0x9a);
  *(undefined1 *)((longlong)param_1 + 0x9b) = *(undefined1 *)((longlong)param_2 + 0x9b);
  *(undefined1 *)((longlong)param_1 + 0x9c) = *(undefined1 *)((longlong)param_2 + 0x9c);
  *(undefined1 *)((longlong)param_1 + 0x9d) = *(undefined1 *)((longlong)param_2 + 0x9d);
  uVar5 = *(undefined8 *)((longlong)param_2 + 0xa6);
  *(undefined8 *)((longlong)param_1 + 0x9e) = *(undefined8 *)((longlong)param_2 + 0x9e);
  *(undefined8 *)((longlong)param_1 + 0xa6) = uVar5;
  *(undefined1 *)((longlong)param_1 + 0xae) = *(undefined1 *)((longlong)param_2 + 0xae);
  return param_1;
}



// FUNCTION 141e8d880 FOpenGLShaderResourceViewProxy body=115 status=ok
// SIG undefined FOpenGLShaderResourceViewProxy(void)

undefined8 *
FOpenGLShaderResourceViewProxy::FOpenGLShaderResourceViewProxy(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 local_58 [80];
  
  uVar1 = ::TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_58);
  FUN_141e8b730(param_1,uVar1);
  *param_1 = &PTR__scalar_deleting_destructor__144ebe5c0;
  if (*(int *)(param_2 + 0x40) != 0) {
    plVar2 = *(longlong **)(param_2 + 0x30);
    if (*(longlong **)(param_2 + 0x30) == (longlong *)0x0) {
      plVar2 = (longlong *)(param_2 + 0x10);
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
  }
  if (*(longlong *)(param_2 + 0x30) != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 141e8d900 FOpenGLShaderVarying body=104 status=ok
// SIG undefined FOpenGLShaderVarying(void)

undefined8 * FOpenGLShaderVarying::FOpenGLShaderVarying(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(param_1,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar1);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  return param_1;
}



// FUNCTION 141e8d970 FOpenGLVertexBufferUnorderedAccessView body=407 status=ok
// SIG undefined FOpenGLVertexBufferUnorderedAccessView(void)

undefined8 *
FOpenGLVertexBufferUnorderedAccessView::FOpenGLVertexBufferUnorderedAccessView
          (undefined8 *param_1,undefined8 param_2,longlong param_3,byte param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int local_res20 [2];
  
  *param_1 = &PTR_FUN_143f3ece8;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 2) = 0x100;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144ebe5a0;
  param_1[5] = param_3;
  if (param_3 != 0) {
    LOCK();
    *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 1;
    UNLOCK();
  }
  param_1[6] = param_2;
  local_res20[0] = 0;
  puVar5 = (undefined4 *)((longlong)&DAT_146ab3630 + (ulonglong)param_4 * 0x1c);
  iVar2 = 0x400 - DAT_1464c97dc;
  if (iVar2 < 2) {
    ::_guard_xfg_dispatch_icall_nop
              (local_res20,&DAT_146ab0550 + (longlong)DAT_1464c97dc * 4,(longlong)iVar2 * 4);
    (*DAT_146ab4038)(0x400,&DAT_146ab0550);
    iVar4 = 1 - iVar2;
    ::_guard_xfg_dispatch_icall_nop(local_res20 + iVar2,&DAT_146ab0550,(longlong)iVar4 << 2);
  }
  else {
    local_res20[0] = *(int *)(&DAT_146ab0550 + (longlong)DAT_1464c97dc * 4);
    iVar4 = DAT_1464c97dc + 1;
  }
  iVar2 = local_res20[0];
  iVar3 = DAT_1464c97fc + -1;
  DAT_1464c97dc = iVar4;
  lVar1 = FUN_141e711c0(param_1[6],1);
  if ((*(int *)(*(longlong *)(lVar1 + 8) + 0x10 + (longlong)iVar3 * 0x28) != 0x8c2a) ||
     (*(int *)(*(longlong *)(lVar1 + 8) + 0x14 + (longlong)iVar3 * 0x28) != iVar2)) {
    FUN_141e6dbc0(param_1[6],lVar1,iVar3,0x8c2a,iVar2,0xffffffff,1);
  }
  (*DAT_146ab47c8)(0x8c2a,*puVar5,*(undefined4 *)(param_3 + 0x28));
  *(int *)(param_1 + 3) = local_res20[0];
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)(param_3 + 0x28);
  *(undefined4 *)(param_1 + 4) = *puVar5;
  return param_1;
}



// FUNCTION 141e8db10 FUN_141e8db10 body=275 status=ok
// SIG undefined FUN_141e8db10(void)

void FUN_141e8db10(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  *param_1 = &PTR_FUN_144ebe5b8;
  if ((DAT_146ab6383 == '\0') || (cVar2 = FUN_1415e13e0(), cVar2 != '\0')) {
    puVar4 = (undefined8 *)param_1[4];
  }
  else {
    puVar4 = (undefined8 *)param_1[4];
    if (puVar4 != (undefined8 *)0x0) {
      *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
    }
    local_28 = 0;
    local_18 = 0;
    puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_48);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &PTR_CopyToEmptyStorage_144ebe720;
      puVar3[1] = puVar4;
      puVar4 = (undefined8 *)0x0;
    }
    local_58[0] = &LAB_141e93860;
    FUN_141eb4140(local_58,0);
    if (puVar4 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar4 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar4)(puVar4,1);
      }
    }
    puVar4 = (undefined8 *)param_1[4];
    param_1[4] = 0;
    if (puVar4 == (undefined8 *)0x0) goto LAB_141e8dbfa;
  }
  piVar1 = (int *)(puVar4 + 1);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)*puVar4)(puVar4,1);
  }
LAB_141e8dbfa:
  puVar4 = (undefined8 *)param_1[4];
  if (puVar4 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar4 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  *param_1 = &PTR_FUN_143f3ece8;
  return;
}



// FUNCTION 141e8dc30 ~TSparseArray<TSetElement<TTuple<FOpenGLFramebufferKey,unsigned_int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=100 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<FOpenGLFramebufferKey,unsigned_int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<FOpenGLFramebufferKey,unsigned_int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<FOpenGLFramebufferKey,unsigned_int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<224,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141e8dca0 ~FOpenGLShaderBindings body=269 status=ok
// SIG undefined ~FOpenGLShaderBindings(void)

void FOpenGLShaderBindings::~FOpenGLShaderBindings(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  if (param_1[0x11] != 0) {
    FMemory::Free();
  }
  if (param_1[0xf] != 0) {
    FMemory::Free();
  }
  if (param_1[0xd] != 0) {
    FMemory::Free();
  }
  if (param_1[0xb] != 0) {
    FMemory::Free();
  }
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 7);
  plVar1 = (longlong *)param_1[6];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 3;
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
      plVar1 = plVar1 + 3;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_1[4];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  if (param_1[2] != 0) {
    FMemory::Free();
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



// FUNCTION 141e8ddb0 ~FOpenGLShaderParameterCache body=86 status=ok
// SIG undefined ~FOpenGLShaderParameterCache(void)

void FOpenGLShaderParameterCache::~FOpenGLShaderParameterCache(undefined8 *param_1)

{
  if (0 < *(int *)(param_1 + 0xf)) {
    FMemory::Free(param_1[10]);
    FMemory::Free(*param_1);
  }
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0xffffffff;
  return;
}



// FUNCTION 141e8de10 operator= body=122 status=ok
// SIG undefined operator=(void)

undefined8 *
TArray<FOpenGLShaderVarying,TSizedDefaultAllocator<32>_>::operator=
          (undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    plVar1 = (longlong *)*param_1;
    for (iVar2 = *(int *)(param_1 + 1); iVar2 != 0; iVar2 = iVar2 + -1) {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 3;
    }
    CopyToEmpty<FOpenGLShaderVarying,int>
              (param_1,*param_2,*(undefined4 *)(param_2 + 1),
               *(undefined4 *)((longlong)param_1 + 0xc),0);
  }
  return param_1;
}



// FUNCTION 141e8de90 FUN_141e8de90 body=113 status=ok
// SIG undefined FUN_141e8de90(void)

undefined8 * FUN_141e8de90(undefined8 *param_1,undefined8 *param_2)

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
    FUN_141e527b0(param_1,iVar1);
    _guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar1 * 10);
  }
  return param_1;
}



// FUNCTION 141e8df10 operator= body=614 status=ok
// SIG undefined operator=(void)

undefined8 * FOpenGLShaderBindings::operator=(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  void *_Src;
  longlong *plVar2;
  int iVar3;
  
  if (param_1 != param_2) {
    plVar2 = (longlong *)*param_1;
    for (iVar3 = *(int *)(param_1 + 1); iVar3 != 0; iVar3 = iVar3 + -1) {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 2;
    }
    TArray<TArray<CrossCompiler::FPackedArrayInfo,FDefaultAllocator>,FDefaultAllocator>::
    CopyToEmpty<TArray<CrossCompiler::FPackedArrayInfo,FDefaultAllocator>_>
              (param_1,*param_2,*(undefined4 *)(param_2 + 1),
               *(undefined4 *)((longlong)param_1 + 0xc),0);
  }
  puVar1 = param_1 + 2;
  if (puVar1 != param_2 + 2) {
    iVar3 = *(int *)(param_2 + 3);
    _Src = (void *)param_2[2];
    *(int *)(param_1 + 3) = iVar3;
    if ((iVar3 == 0) && (*(int *)((longlong)param_1 + 0x1c) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
    }
    else {
      TArray<int,FDefaultAllocator>::ResizeForCopy(puVar1,iVar3);
      ::_guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar3 << 2);
    }
  }
  TArray<FOpenGLShaderVarying,TSizedDefaultAllocator<32>_>::operator=(param_1 + 4,param_2 + 4);
  TArray<FOpenGLShaderVarying,TSizedDefaultAllocator<32>_>::operator=(param_1 + 6,param_2 + 6);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_1 + 9,param_2 + 9);
  TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_1 + 0xb,param_2 + 0xb);
  TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_1 + 0xd,param_2 + 0xd);
  TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_1 + 0xf,param_2 + 0xf);
  TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_1 + 0x11,param_2 + 0x11);
  *(undefined2 *)(param_1 + 0x13) = *(undefined2 *)(param_2 + 0x13);
  *(undefined1 *)((longlong)param_1 + 0x9a) = *(undefined1 *)((longlong)param_2 + 0x9a);
  *(undefined1 *)((longlong)param_1 + 0x9b) = *(undefined1 *)((longlong)param_2 + 0x9b);
  *(undefined1 *)((longlong)param_1 + 0x9c) = *(undefined1 *)((longlong)param_2 + 0x9c);
  *(undefined1 *)((longlong)param_1 + 0x9d) = *(undefined1 *)((longlong)param_2 + 0x9d);
  *(undefined1 *)((longlong)param_1 + 0x9e) = *(undefined1 *)((longlong)param_2 + 0x9e);
  *(undefined1 *)((longlong)param_1 + 0x9f) = *(undefined1 *)((longlong)param_2 + 0x9f);
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0x14);
  *(undefined1 *)((longlong)param_1 + 0xa1) = *(undefined1 *)((longlong)param_2 + 0xa1);
  *(undefined1 *)((longlong)param_1 + 0xa2) = *(undefined1 *)((longlong)param_2 + 0xa2);
  *(undefined1 *)((longlong)param_1 + 0xa3) = *(undefined1 *)((longlong)param_2 + 0xa3);
  *(undefined1 *)((longlong)param_1 + 0xa4) = *(undefined1 *)((longlong)param_2 + 0xa4);
  *(undefined1 *)((longlong)param_1 + 0xa5) = *(undefined1 *)((longlong)param_2 + 0xa5);
  *(undefined1 *)((longlong)param_1 + 0xa6) = *(undefined1 *)((longlong)param_2 + 0xa6);
  *(undefined1 *)((longlong)param_1 + 0xa7) = *(undefined1 *)((longlong)param_2 + 0xa7);
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_2 + 0x15);
  *(undefined1 *)((longlong)param_1 + 0xa9) = *(undefined1 *)((longlong)param_2 + 0xa9);
  *(undefined1 *)((longlong)param_1 + 0xaa) = *(undefined1 *)((longlong)param_2 + 0xaa);
  *(undefined1 *)((longlong)param_1 + 0xab) = *(undefined1 *)((longlong)param_2 + 0xab);
  *(undefined1 *)((longlong)param_1 + 0xac) = *(undefined1 *)((longlong)param_2 + 0xac);
  *(undefined1 *)((longlong)param_1 + 0xad) = *(undefined1 *)((longlong)param_2 + 0xad);
  *(undefined1 *)((longlong)param_1 + 0xae) = *(undefined1 *)((longlong)param_2 + 0xae);
  return param_1;
}



// FUNCTION 141e8e180 FUN_141e8e180 body=932 status=ok
// SIG undefined FUN_141e8e180(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_141e8e180(longlong *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_58 [32];
  int local_38 [2];
  undefined2 local_30;
  undefined1 uStack_2e;
  undefined1 uStack_2d;
  char cStack_2c;
  undefined1 uStack_2b;
  undefined2 uStack_2a;
  undefined2 local_28 [4];
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  puVar2 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2,4);
    }
  }
  else {
    *param_2 = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar3 = *(undefined2 **)param_1[1];
  if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 1,2);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 1,2);
    }
  }
  else {
    *(undefined2 *)(param_2 + 1) = *puVar3;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
  }
  FUN_141e8e530(param_1,param_2 + 2);
  FUN_14158ce90(param_1,param_2 + 0x2e);
  plVar4 = (longlong *)param_1[1];
  local_38[0] = param_2[0x34];
  if ((int *)plVar4[1] < (int *)*plVar4 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_38,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_38,4);
    }
  }
  else {
    local_38[0] = *(int *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  if ((*(byte *)(param_1 + 5) & 2) == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      iVar7 = 0;
      plVar4 = (longlong *)(param_2 + 0x32);
      param_2[0x34] = 0;
      if (param_2[0x35] != local_38[0]) {
        TArray<CrossCompiler::FUniformBufferCopyInfo,FDefaultAllocator>::ResizeTo
                  (plVar4,local_38[0]);
      }
      if (0 < local_38[0]) {
        do {
          plVar5 = (longlong *)param_1[1];
          if ((undefined2 *)plVar5[1] < (undefined2 *)*plVar5 + 1) {
            (**(code **)(*param_1 + 0x50))(param_1,&local_30,2);
            if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
              FArchive::ByteSwap(param_1,&local_30,2);
            }
          }
          else {
            local_30 = *(undefined2 *)*plVar5;
            *plVar5 = *plVar5 + 2;
          }
          plVar5 = (longlong *)param_1[1];
          if ((undefined1 *)plVar5[1] < (undefined1 *)*plVar5 + 1) {
            (**(code **)(*param_1 + 0x50))(param_1,&uStack_2e,1);
          }
          else {
            uStack_2e = *(undefined1 *)*plVar5;
            *plVar5 = *plVar5 + 1;
          }
          plVar5 = (longlong *)param_1[1];
          if ((undefined1 *)plVar5[1] < (undefined1 *)*plVar5 + 1) {
            (**(code **)(*param_1 + 0x50))(param_1,&uStack_2d,1);
          }
          else {
            uStack_2d = *(undefined1 *)*plVar5;
            *plVar5 = *plVar5 + 1;
          }
          plVar5 = (longlong *)param_1[1];
          if ((char *)plVar5[1] < (char *)*plVar5 + 1) {
            (**(code **)(*param_1 + 0x50))(param_1,&cStack_2c,1);
          }
          else {
            cStack_2c = *(char *)*plVar5;
            *plVar5 = *plVar5 + 1;
          }
          if ((*(byte *)(param_1 + 5) & 1) != 0) {
            if (cStack_2c == 'h') {
LAB_141e8e429:
              uStack_2b = 0;
            }
            else if (cStack_2c == 'i') {
              uStack_2b = 3;
            }
            else if (cStack_2c == 'l') {
              uStack_2b = 2;
            }
            else if (cStack_2c == 'm') {
              uStack_2b = 1;
            }
            else {
              if (cStack_2c != 'u') goto LAB_141e8e429;
              uStack_2b = 4;
            }
          }
          plVar5 = (longlong *)param_1[1];
          if ((undefined2 *)plVar5[1] < (undefined2 *)*plVar5 + 1) {
            (**(code **)(*param_1 + 0x50))(param_1,&uStack_2a,2);
            if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
              FArchive::ByteSwap(param_1,&uStack_2a,2);
            }
          }
          else {
            uStack_2a = *(undefined2 *)*plVar5;
            *plVar5 = *plVar5 + 2;
          }
          plVar5 = (longlong *)param_1[1];
          if ((undefined2 *)plVar5[1] < (undefined2 *)*plVar5 + 1) {
            (**(code **)(*param_1 + 0x50))(param_1,local_28,2);
            if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
              FArchive::ByteSwap(param_1,local_28,2);
            }
          }
          else {
            local_28[0] = *(undefined2 *)*plVar5;
            *plVar5 = *plVar5 + 2;
          }
          iVar1 = param_2[0x34];
          param_2[0x34] = iVar1 + 1;
          if ((int)param_2[0x35] < iVar1 + 1) {
            TArray<CrossCompiler::FUniformBufferCopyInfo,FDefaultAllocator>::ResizeGrow
                      (plVar4,iVar1);
          }
          lVar6 = *plVar4;
          iVar7 = iVar7 + 1;
          *(ulonglong *)(lVar6 + (longlong)iVar1 * 10) =
               CONCAT26(uStack_2a,
                        CONCAT15(uStack_2b,
                                 CONCAT14(cStack_2c,CONCAT13(uStack_2d,CONCAT12(uStack_2e,local_30))
                                         )));
          *(undefined2 *)(lVar6 + (longlong)iVar1 * 10 + 8) = local_28[0];
        } while (iVar7 < local_38[0]);
      }
    }
  }
  else {
    iVar7 = 0;
    if (0 < local_38[0]) {
      do {
        FUN_141e3e200(param_1,*(longlong *)(param_2 + 0x32) + (longlong)iVar7 * 10);
        iVar7 = iVar7 + 1;
      } while (iVar7 < local_38[0]);
    }
  }
  return param_1;
}



// FUNCTION 141e8e530 FUN_141e8e530 body=632 status=ok
// SIG undefined FUN_141e8e530(void)

longlong * FUN_141e8e530(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined1 *puVar5;
  
  FUN_141e8ec20();
  FUN_141e8eaa0(param_1,param_2 + 0x10);
  FUN_141e8e900(param_1,param_2 + 0x20);
  FUN_141e8e900(param_1,param_2 + 0x30);
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x40,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0x40,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x40) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FUN_1408bda20(param_1,param_2 + 0x48);
  FUN_1408bda20(param_1,param_2 + 0x58);
  FUN_1408bda20(param_1,param_2 + 0x68);
  FUN_1408bda20(param_1,param_2 + 0x78);
  FUN_1408bda20(param_1,param_2 + 0x88);
  puVar2 = *(undefined2 **)param_1[1];
  if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x98,2);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0x98,2);
    }
  }
  else {
    *(undefined2 *)(param_2 + 0x98) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
  }
  puVar5 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar5 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x9a,1);
  }
  else {
    *(undefined1 *)(param_2 + 0x9a) = *puVar5;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar5 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar5 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x9b,1);
  }
  else {
    *(undefined1 *)(param_2 + 0x9b) = *puVar5;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar5 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar5 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x9c,1);
  }
  else {
    *(undefined1 *)(param_2 + 0x9c) = *puVar5;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  (**(code **)(*param_1 + 8))(param_1,param_2 + 0x9d);
  puVar5 = (undefined1 *)(param_2 + 0x9e);
  lVar4 = 0x10;
  do {
    puVar3 = *(undefined1 **)param_1[1];
    if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,puVar5,1);
    }
    else {
      *puVar5 = *puVar3;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
    }
    puVar5 = puVar5 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  puVar5 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar5 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,(undefined1 *)(param_2 + 0xae),1);
  }
  else {
    *(undefined1 *)(param_2 + 0xae) = *puVar5;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  return param_1;
}



// FUNCTION 141e8e7b0 FUN_141e8e7b0 body=324 status=ok
// SIG undefined FUN_141e8e7b0(void)

longlong * FUN_141e8e7b0(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)*(int *)(param_2 + 1),(longlong)*(int *)((longlong)param_2 + 0xc));
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = *(int *)(param_2 + 1);
  }
  plVar1 = (longlong *)param_1[1];
  if ((int *)plVar1[1] < (int *)*plVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  if (-1 < (char)*(byte *)(param_1 + 5)) {
    if ((-1 < local_res8[0]) &&
       (((*(byte *)((longlong)param_1 + 0x2b) & 8) == 0 || (local_res8[0] < 0x1000001)))) {
      *(int *)(param_2 + 1) = local_res8[0];
      if (((local_res8[0] != 0) || (iVar3 = 0, *(int *)((longlong)param_2 + 0xc) != 0)) &&
         (iVar3 = local_res8[0], (*(byte *)(param_1 + 5) & 1) != 0)) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy
                  (param_2,local_res8[0],*(undefined4 *)((longlong)param_2 + 0xc));
        iVar3 = *(int *)(param_2 + 1);
      }
      (**(code **)(*param_1 + 0x50))(param_1,*param_2,(longlong)iVar3);
      goto LAB_141e8e885;
    }
  }
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 0x80;
LAB_141e8e885:
  puVar2 = *(undefined4 **)param_1[1];
  if (puVar2 + 1 <= (undefined4 *)((undefined8 *)param_1[1])[1]) {
    *(undefined4 *)(param_2 + 2) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    return param_1;
  }
  (**(code **)(*param_1 + 0x50))(param_1,param_2 + 2,4);
  if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_1,param_2 + 2,4);
  }
  return param_1;
}



// FUNCTION 141e8e900 FUN_141e8e900 body=408 status=ok
// SIG undefined FUN_141e8e900(void)

longlong * FUN_141e8e900(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0x18,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x18);
  puVar6 = (undefined8 *)0x0;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1];
  }
  plVar4 = (longlong *)param_1[1];
  if ((int *)plVar4[1] < (int *)*plVar4 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  bVar2 = *(byte *)(param_1 + 5);
  if ((((char)bVar2 < '\0') || (local_res8[0] < 0)) ||
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) != 0 && (0xaaaaa < local_res8[0])))) {
    *(byte *)(param_1 + 5) = bVar2 | 0x80;
    return param_1;
  }
  if ((bVar2 & 1) == 0) {
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        FUN_141e8e7b0(param_1,*param_2 + (longlong)(int)puVar6 * 0x18);
        uVar7 = (int)puVar6 + 1;
        puVar6 = (undefined8 *)(ulonglong)uVar7;
      } while ((int)uVar7 < (int)param_2[1]);
    }
    return param_1;
  }
  TArray<FOpenGLShaderVarying,FDefaultAllocator>::Empty(param_2,local_res8[0]);
  puVar8 = puVar6;
  if (local_res8[0] < 1) {
    return param_1;
  }
  do {
    iVar3 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar3 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_2,iVar3);
    }
    puVar1 = (undefined8 *)(*param_2 + (longlong)iVar3 * 0x18);
    puVar5 = puVar6;
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar5 = puVar1;
    }
    FUN_141e8e7b0(param_1,puVar5);
    uVar7 = (int)puVar8 + 1;
    puVar8 = (undefined8 *)(ulonglong)uVar7;
  } while ((int)uVar7 < local_res8[0]);
  return param_1;
}



// FUNCTION 141e8eaa0 FUN_141e8eaa0 body=373 status=ok
// SIG undefined FUN_141e8eaa0(void)

longlong * FUN_141e8eaa0(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] << 2,(longlong)*(int *)((longlong)param_2 + 0xc) << 2
            );
  iVar4 = 0;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1];
  }
  plVar3 = (longlong *)param_1[1];
  if ((int *)plVar3[1] < (int *)*plVar3 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  bVar1 = *(byte *)(param_1 + 5);
  if ((((char)bVar1 < '\0') || (local_res8[0] < 0)) ||
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) != 0 && (0x400000 < local_res8[0])))) {
    *(byte *)(param_1 + 5) = bVar1 | 0x80;
  }
  else if ((bVar1 & 1) == 0) {
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        FUN_141e8edd0(param_1,*param_2 + (longlong)iVar4 * 4);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)param_2[1]);
      return param_1;
    }
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
      TArray<float,FDefaultAllocator>::ResizeTo(param_2,local_res8[0]);
    }
    if (0 < local_res8[0]) {
      do {
        iVar2 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
        }
        FUN_141e8edd0(param_1,*param_2 + (longlong)iVar2 * 4);
        iVar4 = iVar4 + 1;
      } while (iVar4 < local_res8[0]);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 141e8ec20 FUN_141e8ec20 body=421 status=ok
// SIG undefined FUN_141e8ec20(void)

longlong * FUN_141e8ec20(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  int local_res8 [2];
  undefined8 *puVar9;
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
            );
  puVar5 = (undefined8 *)0x0;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1];
  }
  plVar8 = (longlong *)param_1[1];
  if ((int *)plVar8[1] < (int *)*plVar8 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar8;
    *plVar8 = *plVar8 + 4;
  }
  iVar2 = local_res8[0];
  bVar1 = *(byte *)(param_1 + 5);
  if (((-1 < (char)bVar1) && (-1 < local_res8[0])) &&
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) == 0 || (local_res8[0] < 0x100001)))) {
    if ((bVar1 & 1) != 0) {
      plVar8 = (longlong *)*param_2;
      for (iVar6 = (int)param_2[1]; iVar6 != 0; iVar6 = iVar6 + -1) {
        if (*plVar8 != 0) {
          FMemory::Free();
        }
        plVar8 = plVar8 + 2;
      }
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != iVar2) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2,iVar2);
      }
      puVar9 = puVar5;
      if (0 < local_res8[0]) {
        do {
          iVar2 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar2 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar2);
          }
          puVar3 = (undefined8 *)((longlong)iVar2 * 0x10 + *param_2);
          puVar4 = puVar5;
          if (puVar3 != (undefined8 *)0x0) {
            *puVar3 = 0;
            puVar3[1] = 0;
            puVar4 = puVar3;
          }
          FUN_141e8eaa0(param_1,puVar4);
          uVar7 = (int)puVar9 + 1;
          puVar9 = (undefined8 *)(ulonglong)uVar7;
        } while ((int)uVar7 < local_res8[0]);
      }
      return param_1;
    }
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        FUN_141e8eaa0(param_1,(longlong)(int)puVar5 * 0x10 + *param_2);
        uVar7 = (int)puVar5 + 1;
        puVar5 = (undefined8 *)(ulonglong)uVar7;
      } while ((int)uVar7 < (int)param_2[1]);
    }
    return param_1;
  }
  *(byte *)(param_1 + 5) = bVar1 | 0x80;
  return param_1;
}



// FUNCTION 141e8edd0 FUN_141e8edd0 body=215 status=ok
// SIG undefined FUN_141e8edd0(void)

longlong * FUN_141e8edd0(longlong *param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = *(undefined2 **)param_1[1];
  if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2,2);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2,2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
  }
  puVar2 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 1,1);
  }
  else {
    *(undefined1 *)(param_2 + 1) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar2 = *(undefined1 **)param_1[1];
  if (puVar2 + 1 <= (undefined1 *)((undefined8 *)param_1[1])[1]) {
    *(undefined1 *)((longlong)param_2 + 3) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
    return param_1;
  }
  (**(code **)(*param_1 + 0x50))(param_1,(undefined1 *)((longlong)param_2 + 3),1);
  return param_1;
}



// FUNCTION 141e8eeb0 FUN_141e8eeb0 body=840 status=ok
// SIG undefined FUN_141e8eeb0(void)

void FUN_141e8eeb0(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  int *piVar17;
  int *piVar18;
  longlong lVar19;
  longlong lVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  bool bVar30;
  longlong local_48;
  
  local_48 = 0;
  param_1 = param_1 - param_2;
  bVar21 = true;
  piVar17 = (int *)(param_2 + 0x80);
  do {
    if (!bVar21) {
      return;
    }
    iVar13 = *(int *)((longlong)piVar17 + param_1 + -0x68);
    iVar14 = *(int *)((longlong)piVar17 + param_1 + -0x78);
    lVar19 = (longlong)iVar14;
    iVar12 = *(int *)(param_1 + (longlong)piVar17);
    bVar6 = false;
    if (*(int *)(param_1 + 0x44 + (longlong)piVar17) == piVar17[0x11]) {
      bVar6 = bVar21;
    }
    bVar21 = *(char *)(param_1 + 0x1c + (longlong)piVar17) == (char)piVar17[7];
    bVar22 = *(char *)(param_1 + 0x1d + (longlong)piVar17) == *(char *)((longlong)piVar17 + 0x1d);
    bVar23 = *(char *)((longlong)piVar17 + param_1 + 0x1b) == *(char *)((longlong)piVar17 + 0x1b);
    bVar24 = *(char *)((longlong)piVar17 + param_1 + 0x1a) == *(char *)((longlong)piVar17 + 0x1a);
    bVar25 = *(short *)((longlong)piVar17 + param_1 + 0x18) == (short)piVar17[6];
    iVar5 = *(int *)(param_1 + -0x30 + (longlong)piVar17);
    bVar26 = *(int *)(param_1 + -0x48 + (longlong)piVar17) == piVar17[-0x12];
    bVar27 = *(int *)(param_1 + -0x58 + (longlong)piVar17) == piVar17[-0x16];
    iVar1 = piVar17[-0x1a];
    iVar2 = piVar17[-0x1e];
    bVar28 = *(int *)(param_1 + -0x10 + (longlong)piVar17) != piVar17[-4];
    iVar3 = *piVar17;
    bVar29 = *(int *)((longlong)piVar17 + param_1 + -0x20) != piVar17[-8];
    iVar4 = piVar17[-0xc];
    bVar30 = *(int *)((longlong)piVar17 + param_1 + -0x40) != piVar17[-0x10];
    if (bVar30 || ((bVar29 || (bVar28 || iVar12 != iVar3)) || iVar5 != iVar4)) {
LAB_141e8f1b0:
      bVar21 = false;
    }
    else {
      iVar8 = _guard_xfg_dispatch_icall_nop
                        (*(void **)(param_1 + -0x38 + (longlong)piVar17),*(void **)(piVar17 + -0xe),
                         (ulonglong)(uint)(iVar5 * 4));
      iVar9 = _guard_xfg_dispatch_icall_nop
                        (*(void **)(param_1 + -0x28 + (longlong)piVar17),*(void **)(piVar17 + -10),
                         (ulonglong)(uint)(*(int *)(param_1 + -0x20 + (longlong)piVar17) * 4));
      iVar10 = _guard_xfg_dispatch_icall_nop
                         (*(void **)(param_1 + -0x18 + (longlong)piVar17),*(void **)(piVar17 + -6),
                          (ulonglong)(uint)(*(int *)(param_1 + -0x10 + (longlong)piVar17) * 4));
      iVar11 = _guard_xfg_dispatch_icall_nop
                         (*(void **)(param_1 + -8 + (longlong)piVar17),*(void **)(piVar17 + -2),
                          (ulonglong)(uint)(iVar12 * 4));
      if (((((((iVar8 != 0 || iVar9 != 0) || iVar10 != 0) || iVar11 != 0) ||
             (bVar30 || ((bVar29 || (bVar28 || iVar12 != iVar3)) || iVar5 != iVar4))) ||
           (iVar12 = *(int *)(param_1 + 0x10 + (longlong)piVar17), iVar12 != piVar17[4])) ||
          (iVar12 = _guard_xfg_dispatch_icall_nop
                              (*(void **)(param_1 + 8 + (longlong)piVar17),*(void **)(piVar17 + 2),
                               (ulonglong)(uint)(iVar12 * 4)), iVar12 != 0)) ||
         (iVar14 != iVar2 ||
          ((!bVar27 || ((!bVar25 || ((!bVar23 || (!bVar21 || !bVar22)) || !bVar24)) || !bVar26)) ||
          iVar13 != iVar1))) goto LAB_141e8f1b0;
      iVar12 = _guard_xfg_dispatch_icall_nop
                         (*(void **)((longlong)piVar17 + param_1 + -0x70),
                          *(void **)(piVar17 + -0x1c),(ulonglong)(uint)(iVar13 * 4));
      bVar21 = iVar12 == 0 &&
               (iVar14 == iVar2 &&
               ((bVar27 && ((bVar25 && ((bVar23 && (bVar21 && bVar22)) && bVar24)) && bVar26)) &&
               iVar13 == iVar1));
      if (0 < iVar14) {
        lVar20 = *(longlong *)((longlong)piVar17 + param_1 + -0x80);
        puVar16 = *(undefined8 **)(piVar17 + -0x20);
        piVar18 = (int *)(lVar20 + 8);
        lVar20 = lVar20 - (longlong)puVar16;
        do {
          iVar13 = _guard_xfg_dispatch_icall_nop
                             (*(void **)((longlong)puVar16 + lVar20),(void *)*puVar16,
                              (ulonglong)(uint)(*piVar18 << 2));
          piVar18 = piVar18 + 4;
          puVar16 = puVar16 + 2;
          bVar21 = (bool)(bVar21 & iVar13 == 0);
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
      }
      lVar19 = 0;
      if (bVar21) {
        iVar13 = *(int *)(param_1 + -0x58 + (longlong)piVar17);
        lVar20 = 0;
        do {
          if (iVar13 <= lVar19) break;
          puVar15 = (undefined8 *)(*(longlong *)(piVar17 + -0x18) + lVar20);
          puVar16 = (undefined8 *)(lVar20 + *(longlong *)(param_1 + -0x60 + (longlong)piVar17));
          if ((puVar16 == puVar15) ||
             (((*(int *)(puVar16 + 2) == *(int *)(puVar15 + 2) &&
               (*(int *)(puVar16 + 1) == *(int *)(puVar15 + 1))) &&
              (iVar14 = _guard_xfg_dispatch_icall_nop
                                  ((void *)*puVar16,(void *)*puVar15,(longlong)*(int *)(puVar16 + 1)
                                  ), iVar14 == 0)))) {
            bVar7 = 1;
          }
          else {
            bVar7 = 0;
          }
          lVar19 = lVar19 + 1;
          lVar20 = lVar20 + 0x18;
          bVar21 = (bool)(bVar21 & bVar7);
        } while (bVar21);
      }
      lVar19 = 0;
      if (bVar21) {
        iVar13 = *(int *)(param_1 + -0x48 + (longlong)piVar17);
        lVar20 = 0;
        do {
          if (iVar13 <= lVar19) break;
          puVar15 = (undefined8 *)(*(longlong *)(piVar17 + -0x14) + lVar20);
          puVar16 = (undefined8 *)(lVar20 + *(longlong *)(param_1 + -0x50 + (longlong)piVar17));
          if ((puVar16 == puVar15) ||
             (((*(int *)(puVar16 + 2) == *(int *)(puVar15 + 2) &&
               (*(int *)(puVar16 + 1) == *(int *)(puVar15 + 1))) &&
              (iVar14 = _guard_xfg_dispatch_icall_nop
                                  ((void *)*puVar16,(void *)*puVar15,(longlong)*(int *)(puVar16 + 1)
                                  ), iVar14 == 0)))) {
            bVar7 = 1;
          }
          else {
            bVar7 = 0;
          }
          lVar19 = lVar19 + 1;
          lVar20 = lVar20 + 0x18;
          bVar21 = (bool)(bVar21 & bVar7);
        } while (bVar21);
      }
    }
    local_48 = local_48 + 1;
    bVar21 = (bool)(bVar6 & bVar21);
    piVar17 = piVar17 + 0x32;
    if (5 < local_48) {
      return;
    }
  } while( true );
}



// FUNCTION 141e8f200 operator() body=528 status=ok
// SIG undefined operator()(void)

undefined8 * <lambda_0811ab491ea42c6c6859240b67ef2db6>::operator()(longlong *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 local_res8 [2];
  
  lVar4 = *param_1;
  if (DAT_146ab6383 != '\0') {
    IsInRenderingThread();
  }
  if (DAT_1464c97ce == '\0') {
    puVar5 = (undefined8 *)operator_new(0x50);
    if (puVar5 != (undefined8 *)0x0) {
      bVar1 = *(byte *)(param_1 + 1);
      uVar2 = *(undefined4 *)(lVar4 + 0x84);
      uVar3 = *(undefined4 *)(lVar4 + 0x80);
      lVar4 = param_1[2];
      *puVar5 = &PTR__scalar_deleting_destructor__144ebe5b0;
      *(undefined4 *)(puVar5 + 1) = 0;
      *(undefined4 *)(puVar5 + 2) = uVar3;
      *(undefined4 *)((longlong)puVar5 + 0x14) = uVar2;
      puVar5[3] = 0;
      *(uint *)(puVar5 + 4) = (uint)bVar1;
      puVar5[5] = 0;
      puVar5[6] = 0;
      *(undefined1 *)(puVar5 + 7) = 0;
      puVar5[8] = lVar4;
      *(undefined1 *)(puVar5 + 9) = 0;
      return puVar5;
    }
  }
  else {
    iVar7 = 0x400 - DAT_1464c97dc;
    local_res8[0] = 0;
    if (iVar7 < 2) {
      ::_guard_xfg_dispatch_icall_nop
                (local_res8,&DAT_146ab0550 + (longlong)DAT_1464c97dc * 4,(longlong)iVar7 * 4);
      (*DAT_146ab4038)(0x400,&DAT_146ab0550);
      iVar6 = 1 - iVar7;
      ::_guard_xfg_dispatch_icall_nop(local_res8 + iVar7,&DAT_146ab0550,(longlong)iVar6 << 2);
    }
    else {
      local_res8[0] = *(undefined4 *)(&DAT_146ab0550 + (longlong)DAT_1464c97dc * 4);
      iVar6 = DAT_1464c97dc + 1;
    }
    DAT_1464c97dc = iVar6;
    (*DAT_146ab4970)(local_res8[0],*(undefined4 *)(lVar4 + 0x84),*(undefined4 *)(lVar4 + 0x80),
                     *(undefined4 *)
                      ((longlong)&DAT_146ab3630 +
                      ((ulonglong)(*(uint *)(lVar4 + 0x40) >> 4 & 1) +
                      (longlong)*(int *)(lVar4 + 0x3c) * 7) * 4),(char)param_1[1],1,0,1);
    puVar5 = (undefined8 *)operator_new(0x50);
    if (puVar5 != (undefined8 *)0x0) {
      bVar1 = *(byte *)(param_1 + 1);
      uVar2 = *(undefined4 *)(lVar4 + 0x84);
      lVar4 = param_1[2];
      *puVar5 = &PTR__scalar_deleting_destructor__144ebe5b0;
      *(undefined4 *)(puVar5 + 1) = 0;
      *(undefined4 *)(puVar5 + 2) = local_res8[0];
      *(undefined4 *)((longlong)puVar5 + 0x14) = uVar2;
      puVar5[3] = 0;
      *(uint *)(puVar5 + 4) = (uint)bVar1;
      puVar5[5] = 0;
      puVar5[6] = 0;
      *(undefined1 *)(puVar5 + 7) = 0;
      puVar5[8] = lVar4;
      *(undefined1 *)(puVar5 + 9) = 1;
      return puVar5;
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141e8f410 operator() body=528 status=ok
// SIG undefined operator()(void)

undefined8 * <lambda_11fb1cfedb6ada0c716bc051db8754ec>::operator()(longlong *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 local_res8 [2];
  
  lVar4 = *param_1;
  if (DAT_146ab6383 != '\0') {
    IsInRenderingThread();
  }
  if (DAT_1464c97ce == '\0') {
    puVar5 = (undefined8 *)operator_new(0x50);
    if (puVar5 != (undefined8 *)0x0) {
      bVar1 = *(byte *)(param_1 + 1);
      uVar2 = *(undefined4 *)(lVar4 + 0x84);
      uVar3 = *(undefined4 *)(lVar4 + 0x80);
      lVar4 = param_1[2];
      *puVar5 = &PTR__scalar_deleting_destructor__144ebe5b0;
      *(undefined4 *)(puVar5 + 1) = 0;
      *(undefined4 *)(puVar5 + 2) = uVar3;
      *(undefined4 *)((longlong)puVar5 + 0x14) = uVar2;
      puVar5[3] = 0;
      *(uint *)(puVar5 + 4) = (uint)bVar1;
      puVar5[5] = 0;
      puVar5[6] = 0;
      *(undefined1 *)(puVar5 + 7) = 0;
      puVar5[8] = lVar4;
      *(undefined1 *)(puVar5 + 9) = 0;
      return puVar5;
    }
  }
  else {
    iVar7 = 0x400 - DAT_1464c97dc;
    local_res8[0] = 0;
    if (iVar7 < 2) {
      ::_guard_xfg_dispatch_icall_nop
                (local_res8,&DAT_146ab0550 + (longlong)DAT_1464c97dc * 4,(longlong)iVar7 * 4);
      (*DAT_146ab4038)(0x400,&DAT_146ab0550);
      iVar6 = 1 - iVar7;
      ::_guard_xfg_dispatch_icall_nop(local_res8 + iVar7,&DAT_146ab0550,(longlong)iVar6 << 2);
    }
    else {
      local_res8[0] = *(undefined4 *)(&DAT_146ab0550 + (longlong)DAT_1464c97dc * 4);
      iVar6 = DAT_1464c97dc + 1;
    }
    DAT_1464c97dc = iVar6;
    (*DAT_146ab4970)(local_res8[0],*(undefined4 *)(lVar4 + 0x84),*(undefined4 *)(lVar4 + 0x80),
                     *(undefined4 *)
                      ((longlong)&DAT_146ab3630 +
                      ((ulonglong)(*(uint *)(lVar4 + 0x40) >> 4 & 1) +
                      (longlong)*(int *)(lVar4 + 0x3c) * 7) * 4),(char)param_1[1],1,0,6);
    puVar5 = (undefined8 *)operator_new(0x50);
    if (puVar5 != (undefined8 *)0x0) {
      bVar1 = *(byte *)(param_1 + 1);
      uVar2 = *(undefined4 *)(lVar4 + 0x84);
      lVar4 = param_1[2];
      *puVar5 = &PTR__scalar_deleting_destructor__144ebe5b0;
      *(undefined4 *)(puVar5 + 1) = 0;
      *(undefined4 *)(puVar5 + 2) = local_res8[0];
      *(undefined4 *)((longlong)puVar5 + 0x14) = uVar2;
      puVar5[3] = 0;
      *(uint *)(puVar5 + 4) = (uint)bVar1;
      puVar5[5] = 0;
      puVar5[6] = 0;
      *(undefined1 *)(puVar5 + 7) = 0;
      puVar5[8] = lVar4;
      *(undefined1 *)(puVar5 + 9) = 1;
      return puVar5;
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141e8f620 operator() body=129 status=ok
// SIG undefined operator()(void)

void <lambda_14e6f5c2fd87bb4b2fa9737f56c88017>::operator()(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_res8 [4];
  
  local_res8[0] = *param_1;
  uVar3 = 0;
  if ((int)param_1[10] != 0) {
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 4;
    }
    if (plVar5 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar5 + 8))();
    }
  }
  lVar4 = (*(code *)param_1[2])(uVar3,local_res8);
  puVar2 = *(undefined8 **)(*param_1 + 0x38);
  *(longlong *)(*param_1 + 0x38) = lVar4;
  if (lVar4 != 0) {
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
  }
  if (puVar2 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  piVar1 = (int *)(*(longlong *)(*param_1 + 0x38) + 8);
  *piVar1 = *piVar1 + 1;
  return;
}



// FUNCTION 141e8f6b0 FUN_141e8f6b0 body=138 status=ok
// SIG undefined FUN_141e8f6b0(void)

void FUN_141e8f6b0(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 local_res8 [8];
  
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = **(undefined4 **)(param_1 + 0x28);
  uVar2 = **(undefined4 **)(param_1 + 0x20);
  iVar3 = **(int **)(param_1 + 0x18);
  iVar4 = **(int **)(param_1 + 0x10);
  uVar6 = **(undefined8 **)(param_1 + 8);
  if (DAT_146ab6383 != '\0') {
    IsInRenderingThread();
  }
  FUN_141e9e940(uVar6,0,uVar2,iVar4 + iVar3 * 6,uVar1,uVar5,local_res8);
  return;
}



// FUNCTION 141e8f740 operator() body=210 status=ok
// SIG undefined operator()(void)

void <lambda_32935dc0dd12fadd3197ade8cbbeed37>::operator()(undefined8 *param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 1) == 0) {
    return;
  }
  uVar1 = *(uint *)(param_1 + 2);
  if (uVar1 < 0x8c1b) {
    if ((((uVar1 != 0x8c1a) && (uVar1 != 0xde1)) && (uVar1 != 0x806f)) && (uVar1 != 0x8513)) {
      return;
    }
  }
  else {
    if (uVar1 == 0x8d41) {
      if ((*(uint *)((longlong)param_1 + 0x14) & 0x20000) != 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x000141e8f80b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_146ab46e0)(1,param_1 + 1);
      return;
    }
    if ((uVar1 != 0x9009) && (uVar1 != 0x9100)) {
      return;
    }
  }
  FUN_141e9db10(*param_1);
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_141e9db10(*param_1);
  }
  if ((*(char *)(param_1 + 4) == '\0') &&
     ((*DAT_146ab3fd8)(1,param_1 + 1), *(int *)((longlong)param_1 + 0xc) != 0)) {
    (*DAT_146ab3fd8)(1,(longlong)param_1 + 0xc);
  }
  return;
}



// FUNCTION 141e8f820 operator() body=419 status=ok
// SIG undefined operator()(void)

undefined8 * <lambda_78a3ec500d6dcf4287cd4e3d1351f3d4>::operator()(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_res18 [4];
  
  lVar1 = *param_1;
  iVar6 = 0x400 - DAT_1464c97dc;
  local_res18[0] = 0;
  if (iVar6 < 2) {
    ::_guard_xfg_dispatch_icall_nop
              (local_res18,&DAT_146ab0550 + (longlong)DAT_1464c97dc * 4,(longlong)iVar6 * 4);
    (*DAT_146ab4038)(0x400,&DAT_146ab0550);
    iVar5 = 1 - iVar6;
    ::_guard_xfg_dispatch_icall_nop(local_res18 + iVar6,&DAT_146ab0550,(longlong)iVar5 << 2);
  }
  else {
    local_res18[0] = *(int *)(&DAT_146ab0550 + (longlong)DAT_1464c97dc * 4);
    iVar5 = DAT_1464c97dc + 1;
  }
  iVar6 = local_res18[0];
  iVar7 = DAT_1464c97fc + -1;
  DAT_1464c97dc = iVar5;
  lVar2 = FUN_141e711c0(param_1[1],1);
  if ((*(int *)(*(longlong *)(lVar2 + 8) + 0x10 + (longlong)iVar7 * 0x28) != 0x8c2a) ||
     (*(int *)(*(longlong *)(lVar2 + 8) + 0x14 + (longlong)iVar7 * 0x28) != iVar6)) {
    FUN_141e6dbc0(param_1[1],lVar2,iVar7,0x8c2a,iVar6,0xffffffff,1);
  }
  uVar4 = 0x8236;
  if (*(int *)(*param_1 + 0x18) == 2) {
    uVar4 = 0x8234;
  }
  (*DAT_146ab47c8)(0x8c2a,uVar4,*(undefined4 *)(lVar1 + 0x28));
  puVar3 = (undefined8 *)operator_new(0x50);
  if (puVar3 != (undefined8 *)0x0) {
    lVar1 = param_1[1];
    *puVar3 = &PTR__scalar_deleting_destructor__144ebe5b0;
    *(undefined4 *)(puVar3 + 1) = 0;
    *(int *)(puVar3 + 2) = local_res18[0];
    *(undefined4 *)((longlong)puVar3 + 0x14) = 0x8c2a;
    puVar3[3] = 0;
    *(undefined4 *)(puVar3 + 4) = 0xffffffff;
    puVar3[5] = 0;
    puVar3[6] = 0;
    *(undefined1 *)(puVar3 + 7) = 0;
    puVar3[8] = lVar1;
    *(undefined1 *)(puVar3 + 9) = 1;
    return puVar3;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141e8f9d0 FUN_141e8f9d0 body=352 status=ok
// SIG undefined FUN_141e8f9d0(void)

void FUN_141e8f9d0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  lVar1 = *param_1;
  if (DAT_146ab6383 != '\0') {
    IsInRenderingThread();
  }
  lVar2 = FUN_141e711c0(param_1[1],1);
  iVar3 = DAT_1464c97fc + -1;
  if ((*(int *)(*(longlong *)(lVar2 + 8) + 0x10 + (longlong)iVar3 * 0x28) != *(int *)(lVar1 + 0x84))
     || (*(int *)(*(longlong *)(lVar2 + 8) + 0x14 + (longlong)iVar3 * 0x28) !=
         *(int *)(lVar1 + 0x80))) {
    FUN_141e6dbc0(param_1[1],lVar2,iVar3,*(int *)(lVar1 + 0x84),*(int *)(lVar1 + 0x80),0,
                  *(undefined4 *)(lVar1 + 0x34));
  }
  if (*(int *)(lVar2 + 0x428) != 0) {
    (*DAT_146ab42e8)(0x88ec,0);
    *(undefined4 *)(lVar2 + 0x428) = 0;
  }
  lVar2 = (longlong)*(int *)(lVar1 + 0x3c) * 0x1c;
  (*DAT_146ab40d0)(0xcf2,(ulonglong)*(uint *)(param_1 + 2) /
                         (ulonglong)(uint)(&DAT_1464ca1c4)[(longlong)*(int *)(lVar1 + 0x3c) * 10]);
  (*DAT_146ab40d0)(0xcf5,1);
  (*DAT_146ab4178)(*(undefined4 *)(lVar1 + 0x84),*(undefined4 *)((longlong)param_1 + 0x14),
                   (int)param_1[3],*(undefined4 *)((longlong)param_1 + 0x1c),(int)param_1[5],
                   *(undefined4 *)((longlong)param_1 + 0x2c),
                   *(undefined4 *)((longlong)&DAT_146ab3640 + lVar2),
                   *(undefined4 *)((longlong)&DAT_146ab3640 + lVar2 + 4),param_1[6]);
  (*DAT_146ab40d0)(0xcf5,4);
  (*DAT_146ab40d0)(0xcf2,0);
  if (param_1[7] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141e8fb30 FUN_141e8fb30 body=113 status=ok
// SIG undefined FUN_141e8fb30(void)

void FUN_141e8fb30(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 local_res8 [8];
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = **(undefined4 **)(param_1 + 0x18);
  uVar2 = **(undefined4 **)(param_1 + 0x10);
  uVar4 = **(undefined8 **)(param_1 + 8);
  if (DAT_146ab6383 != '\0') {
    IsInRenderingThread();
  }
  FUN_141e9e560(uVar4,0,uVar2,0,uVar1,uVar3,local_res8);
  return;
}



// FUNCTION 141e8fbb0 FUN_141e8fbb0 body=531 status=ok
// SIG undefined FUN_141e8fbb0(void)

void FUN_141e8fbb0(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int *piVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int local_res8 [2];
  undefined4 local_res10 [2];
  int local_res18 [2];
  longlong local_res20;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar13;
  undefined8 uVar11;
  undefined4 *puVar12;
  undefined8 in_stack_ffffffffffffffb0;
  undefined4 uVar14;
  
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffffb0 >> 0x20);
  uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  plVar5 = *(longlong **)*param_1;
  if (plVar5 == (longlong *)0x0) {
    lVar7 = 0;
  }
  else {
    (**(code **)(*plVar5 + 0x48))(plVar5);
    if (DAT_146ab6383 != '\0') {
      IsInRenderingThread();
    }
    lVar7 = (**(code **)(*plVar5 + 0x48))(plVar5);
  }
  iVar1 = *(int *)(lVar7 + 0x14);
  iVar8 = 1;
  if (iVar1 == 0x9009) {
    iVar8 = 6;
  }
  uVar10 = *(undefined4 *)param_1[1];
  iVar8 = iVar8 * *(int *)param_1[3] + *(int *)param_1[2];
  local_res8[0] = 0;
  local_res10[0] = uVar10;
  local_res18[0] = iVar8;
  local_res20 = lVar7;
  if (iVar1 == 0x9009) {
    (*DAT_146ab4718)(1,local_res8);
    (*DAT_146ab4708)(0x8ca8,local_res8[0]);
    uVar11 = CONCAT44(uVar13,iVar8);
    (*DAT_146ab4770)(0x8ca8,0x8ce0,*(undefined4 *)(lVar7 + 0x10),uVar10,uVar11);
    uVar13 = (undefined4)((ulonglong)uVar11 >> 0x20);
  }
  else {
    puVar12 = local_res10;
    uVar14 = 0;
    local_res8[0] = FUN_141e9b3b0(param_1[4],1,&local_res20,local_res18,puVar12,0);
    uVar13 = (undefined4)((ulonglong)puVar12 >> 0x20);
  }
  piVar6 = (int *)param_1[5];
  lVar7 = param_1[6];
  iVar8 = piVar6[3];
  iVar2 = piVar6[1];
  iVar3 = piVar6[2];
  iVar4 = *piVar6;
  iVar9 = (iVar8 - iVar2) * (iVar3 - iVar4);
  *(undefined4 *)(lVar7 + 8) = 0;
  if (*(int *)(lVar7 + 0xc) != iVar9) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(lVar7,iVar9);
  }
  lVar7 = param_1[6];
  iVar9 = *(int *)(lVar7 + 8) + iVar9;
  *(int *)(lVar7 + 8) = iVar9;
  if (*(int *)(lVar7 + 0xc) < iVar9) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow();
  }
  (*DAT_146ab4708)(0x8ca8,local_res8[0]);
  uVar10 = 0x8ce0;
  if (local_res8[0] == 0) {
    uVar10 = 0x405;
  }
  (*DAT_146ab40f0)(uVar10);
  (*DAT_146ab40d0)(0xd05,1);
  (*DAT_146ab40f8)(*(undefined4 *)param_1[5],((undefined4 *)param_1[5])[1],iVar3 - iVar4,
                   iVar8 - iVar2,CONCAT44(uVar13,0x1908),CONCAT44(uVar14,0x140b),
                   *(undefined8 *)param_1[6]);
  (*DAT_146ab40d0)(0xd05,4);
  if (iVar1 == 0x9009) {
    (*DAT_146ab4710)(1,local_res8);
  }
  lVar7 = FUN_141e711c0(param_1[4],1);
  *(undefined4 *)(lVar7 + 0x188) = 0xffffffff;
  return;
}



// FUNCTION 141e8fdd0 operator() body=122 status=ok
// SIG undefined operator()(void)

void <lambda_845eaea3abca87b79fef4ef9f39cef15>::operator()(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)*param_1;
  if ((*(byte *)(lVar1 + 0x38) & 1) != 0) {
    FUN_141e6da70(*(undefined4 *)(lVar1 + 0x28));
    if ((DAT_146ab053c == 0) && ((*(byte *)(lVar1 + 0x38) & 2) == 0)) {
      TOpenGLBuffer<FOpenGLBaseIndexBuffer,34963,&CachedBindElementArrayBuffer>::LoadData
                (lVar1,*(undefined4 *)(lVar1 + 0x40),*(undefined4 *)(lVar1 + 0x3c),
                 *(undefined8 *)(lVar1 + 0x48));
      FMemory::Free(*(undefined8 *)(lVar1 + 0x48));
      *(uint *)(lVar1 + 0x38) = *(uint *)(lVar1 + 0x38) & 0xfffffff7;
    }
    else {
      (*DAT_146ab4330)(0x8893);
    }
    *(undefined8 *)(lVar1 + 0x48) = 0;
    *(longlong *)(lVar1 + 0x30) =
         *(longlong *)(lVar1 + 0x30) + (ulonglong)(~(*(uint *)(lVar1 + 0x38) >> 1) & 1);
    *(uint *)(lVar1 + 0x38) = *(uint *)(lVar1 + 0x38) & 0xfffffffe;
  }
  return;
}



// FUNCTION 141e8fe50 FUN_141e8fe50 body=96 status=ok
// SIG undefined FUN_141e8fe50(void)

void FUN_141e8fe50(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar1 = **(undefined4 **)(param_1 + 0x20);
  iVar2 = **(int **)(param_1 + 0x18);
  iVar3 = **(int **)(param_1 + 0x10);
  uVar4 = **(undefined8 **)(param_1 + 8);
  if (DAT_146ab6383 != '\0') {
    IsInRenderingThread();
  }
  TOpenGLTexture<FOpenGLBaseTextureCube>::Unlock(uVar4,uVar1,iVar3 + iVar2 * 6);
  return;
}



// FUNCTION 141e8feb0 operator() body=819 status=ok
// SIG undefined operator()(void)

void <lambda_d1d3e58297f02e7379cff1b521c6d1a4>::operator()(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int local_res8 [4];
  int local_res18;
  longlong local_res20;
  undefined8 in_stack_ffffffffffffff88;
  undefined4 uVar12;
  
  uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  (**(code **)(**(longlong **)*param_1 + 0x18))();
  uVar8 = 0;
  plVar1 = *(longlong **)*param_1;
  if (plVar1 == (longlong *)0x0) {
    local_res20 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x48))(plVar1);
    if (DAT_146ab6383 != '\0') {
      IsInRenderingThread();
    }
    local_res20 = (**(code **)(*plVar1 + 0x48))(plVar1);
  }
  piVar2 = (int *)param_1[1];
  iVar10 = piVar2[3] - piVar2[1];
  iVar9 = piVar2[2] - *piVar2;
  uVar11 = ((int *)param_1[2])[1] - *(int *)param_1[2];
  lVar4 = param_1[3];
  *(undefined4 *)(lVar4 + 8) = 0;
  iVar7 = uVar11 * iVar10 * iVar9;
  if (*(int *)(lVar4 + 0xc) != iVar7 * 8) {
    TArray<void_*,FDefaultAllocator>::ResizeTo();
  }
  plVar1 = (longlong *)param_1[3];
  lVar4 = plVar1[1];
  iVar3 = (int)lVar4 + iVar7;
  *(int *)(plVar1 + 1) = iVar3;
  if (*(int *)((longlong)plVar1 + 0xc) < iVar3) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1);
  }
  ::_guard_xfg_dispatch_icall_nop
            ((void *)(*plVar1 + (longlong)(int)lVar4 * 8),0,(longlong)iVar7 << 3);
  local_res8[2] = 0;
  (*DAT_146ab4718)(1,local_res8 + 2);
  (*DAT_146ab4708)(0x8ca8,local_res8[2]);
  local_res8[0] = 0;
  local_res18 = 0x400 - DAT_1464c97dc;
  if (local_res18 < 2) {
    lVar4 = (longlong)local_res18;
    ::_guard_xfg_dispatch_icall_nop
              (local_res8,&DAT_146ab0550 + (longlong)DAT_1464c97dc * 4,lVar4 * 4);
    (*DAT_146ab4038)(0x400,&DAT_146ab0550);
    iVar7 = 1 - local_res18;
    ::_guard_xfg_dispatch_icall_nop(local_res8 + lVar4,&DAT_146ab0550,(longlong)iVar7 << 2);
  }
  else {
    local_res8[0] = *(int *)(&DAT_146ab0550 + (longlong)DAT_1464c97dc * 4);
    iVar7 = DAT_1464c97dc + 1;
  }
  DAT_1464c97dc = iVar7;
  (*DAT_146ab4228)(0x84c0);
  (*DAT_146ab3f98)(0x806f,local_res8[0]);
  uVar5 = CONCAT44(uVar12,iVar10);
  (*DAT_146ab4210)(0x806f,0,0x881a,iVar9,uVar5,uVar11,0,0x1908,0x140b,0);
  lVar4 = local_res20;
  uVar6 = uVar8;
  if (uVar11 != 0) {
    do {
      uVar5 = CONCAT44((int)((ulonglong)uVar5 >> 0x20),*(int *)param_1[2] + uVar6);
      (*DAT_146ab4770)(0x8ca8,0x8ce0,*(undefined4 *)(lVar4 + 0x10),0,uVar5);
      uVar12 = (undefined4)((ulonglong)uVar5 >> 0x20);
      uVar5 = 0x8ce0;
      if (local_res8[2] == 0) {
        uVar5 = 0x405;
      }
      (*DAT_146ab40f0)(uVar5);
      uVar5 = CONCAT44(uVar12,uVar6);
      (*DAT_146ab4220)(0x806f,0,0,0,uVar5,*(undefined4 *)param_1[1],((undefined4 *)param_1[1])[1],
                       iVar9,iVar10);
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar11);
  }
  (*DAT_146ab40d0)(0xd05,1);
  (*DAT_146ab4078)(0x806f,0,0x1908,0x140b,*(undefined8 *)param_1[3]);
  (*DAT_146ab40d0)(0xd05,4);
  lVar4 = FUN_141e711c0(param_1[4],1);
  if (*(int *)(*(longlong *)(lVar4 + 8) + 0x10) == 0x806f) {
    uVar8 = *(uint *)(*(longlong *)(lVar4 + 8) + 0x14);
  }
  (*DAT_146ab3f98)(0x806f,uVar8);
  (*DAT_146ab4228)(*(int *)(lVar4 + 0x3f0) + 0x84c0);
  (*DAT_146ab4710)(1,local_res8 + 2);
  (*DAT_146ab3fd8)(1,local_res8);
  *(undefined4 *)(lVar4 + 0x188) = 0xffffffff;
  return;
}



// FUNCTION 141e901f0 FUN_141e901f0 body=146 status=ok
// SIG undefined FUN_141e901f0(void)

void FUN_141e901f0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  if (iVar1 == *(int *)(lVar2 + 0x330)) {
    *(undefined4 *)(lVar2 + 0x330) = 0;
    _guard_xfg_dispatch_icall_nop((void *)(lVar2 + 0x378),0,0x80);
    *(undefined8 *)(lVar2 + 0x3f8) = 0;
    *(undefined1 *)(lVar2 + 0x40c) = 1;
  }
  if (iVar1 == *(int *)(lVar2 + 0x14c28)) {
    *(undefined4 *)(lVar2 + 0x14c28) = 0xffffffff;
  }
  if (iVar1 == *(int *)(lVar2 + 0x154c0)) {
    *(undefined4 *)(lVar2 + 0x154c0) = 0xffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x000141e9027b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_146ab4710)(1,param_1 + 1);
  return;
}



// FUNCTION 141e90290 FUN_141e90290 body=254 status=ok
// SIG undefined FUN_141e90290(void)

void FUN_141e90290(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  void *pvVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  void *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  
  local_48 = (void *)0x0;
  local_40 = 0;
  lVar7 = FUN_141e711c0(*param_1,1);
  lVar1 = param_1[1];
  *(undefined4 *)(lVar1 + 8) = 0;
  if (*(int *)(lVar1 + 0xc) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(lVar1,0);
  }
  if (lVar7 != *param_1 + 0x14208) {
    puVar2 = (undefined8 *)param_1[4];
    local_28 = *puVar2;
    uStack_20 = puVar2[1];
    local_18 = *(undefined4 *)(puVar2 + 2);
    puVar3 = (undefined4 *)param_1[3];
    local_38 = *puVar3;
    uStack_34 = puVar3[1];
    uStack_30 = puVar3[2];
    uStack_2c = puVar3[3];
    FUN_141ea6e00(*param_1,lVar7,*(undefined8 *)param_1[2],&local_38,&local_48,&local_28);
    piVar4 = (int *)param_1[3];
    lVar1 = param_1[1];
    uVar8 = (piVar4[3] - piVar4[1]) * (piVar4[2] - *piVar4);
    iVar6 = *(int *)(lVar1 + 8) + uVar8;
    *(int *)(lVar1 + 8) = iVar6;
    if (*(int *)(lVar1 + 0xc) < iVar6) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow();
    }
    pvVar5 = local_48;
    _guard_xfg_dispatch_icall_nop(*(void **)param_1[1],local_48,(ulonglong)uVar8 << 2);
    if (pvVar5 != (void *)0x0) {
      FMemory::Free(pvVar5);
    }
  }
  return;
}



// FUNCTION 141e90390 FUN_141e90390 body=669 status=ok
// SIG undefined FUN_141e90390(void)

undefined8 * FUN_141e90390(undefined8 *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_res18 [2];
  
  lVar3 = param_1[2];
  bVar1 = *(byte *)(param_1 + 1);
  local_res18[0] = 0;
  if (((&DAT_1464ca1c4)[(ulonglong)bVar1 * 10] != *(int *)(param_1 + 3)) && (DAT_1464c9c14 == 2)) {
    LowLevelFatalErrorHandler
              ("Unknown",0x1a,L"OpenGL 3.2 RHI supports only tightly packed texture buffers!");
    FDebug::AssertFailed
              (&DAT_143f3f584,"Unknown",0x1a,
               L"OpenGL 3.2 RHI supports only tightly packed texture buffers!");
    puVar5 = (undefined8 *)operator_new(0x50);
    if (puVar5 != (undefined8 *)0x0) {
      uVar4 = *param_1;
      *puVar5 = &PTR__scalar_deleting_destructor__144ebe5b0;
      *(undefined4 *)(puVar5 + 1) = 0;
      *(undefined4 *)(puVar5 + 2) = 0;
      *(undefined4 *)((longlong)puVar5 + 0x14) = 0x8c2a;
      puVar5[3] = 0;
      *(undefined4 *)(puVar5 + 4) = 0xffffffff;
      puVar5[5] = 0;
      puVar5[6] = 0;
      *(undefined1 *)(puVar5 + 7) = 0;
      puVar5[8] = uVar4;
      *(undefined1 *)(puVar5 + 9) = 1;
      return puVar5;
    }
    return (undefined8 *)0x0;
  }
  iVar8 = 0x400 - DAT_1464c97dc;
  if (iVar8 < 2) {
    _guard_xfg_dispatch_icall_nop
              (local_res18,&DAT_146ab0550 + (longlong)DAT_1464c97dc * 4,(longlong)iVar8 * 4);
    (*DAT_146ab4038)(0x400,&DAT_146ab0550);
    iVar7 = 1 - iVar8;
    _guard_xfg_dispatch_icall_nop(local_res18 + iVar8,&DAT_146ab0550,(longlong)iVar7 << 2);
  }
  else {
    local_res18[0] = *(int *)(&DAT_146ab0550 + (longlong)DAT_1464c97dc * 4);
    iVar7 = DAT_1464c97dc + 1;
  }
  iVar8 = local_res18[0];
  iVar9 = DAT_1464c97fc + -1;
  DAT_1464c97dc = iVar7;
  lVar6 = FUN_141e711c0(*param_1,1);
  if ((*(int *)(*(longlong *)(lVar6 + 8) + 0x10 + (longlong)iVar9 * 0x28) != 0x8c2a) ||
     (*(int *)(*(longlong *)(lVar6 + 8) + 0x14 + (longlong)iVar9 * 0x28) != iVar8)) {
    FUN_141e6dbc0(*param_1,lVar6,iVar9,0x8c2a,iVar8,0xffffffff,1);
  }
  (*DAT_146ab47c8)(0x8c2a,*(undefined4 *)((longlong)&DAT_146ab3630 + (ulonglong)bVar1 * 0x1c),
                   *(undefined4 *)(lVar3 + 0x28));
  puVar5 = (undefined8 *)operator_new(0x50);
  if (puVar5 != (undefined8 *)0x0) {
    lVar3 = param_1[2];
    uVar2 = *(undefined1 *)(param_1 + 1);
    uVar4 = *param_1;
    *puVar5 = &PTR__scalar_deleting_destructor__144ebe5b0;
    *(undefined4 *)(puVar5 + 1) = 0;
    *(int *)(puVar5 + 2) = local_res18[0];
    *(undefined4 *)((longlong)puVar5 + 0x14) = 0x8c2a;
    puVar5[3] = 0;
    *(undefined4 *)(puVar5 + 4) = 0xffffffff;
    puVar5[5] = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    puVar5[6] = 0;
    *(undefined1 *)(puVar5 + 7) = uVar2;
    puVar5[8] = uVar4;
    *(undefined1 *)(puVar5 + 9) = 1;
    puVar5[6] = *(undefined8 *)(puVar5[5] + 0x30);
    return puVar5;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141e90630 FUN_141e90630 body=150 status=ok
// SIG undefined FUN_141e90630(void)

void FUN_141e90630(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  void *_Dst;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  if (DAT_146ab6383 != '\0') {
    IsInRenderingThread();
  }
  _Dst = (void *)FUN_141e9e560(uVar3,0,uVar2,0,uVar1,local_res10,local_res8);
  _guard_xfg_dispatch_icall_nop
            (_Dst,*(void **)(param_1 + 0x20),(ulonglong)*(uint *)(param_1 + 0x2c));
  FMemory::Free(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  if (DAT_146ab6383 != '\0') {
    IsInRenderingThread();
  }
  TOpenGLTexture<FOpenGLBaseTexture2D>::Unlock(uVar3,uVar1,0);
  return;
}



// FUNCTION 141e906d0 FUN_141e906d0 body=516 status=ok
// SIG undefined FUN_141e906d0(void)

void FUN_141e906d0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  byte bVar11;
  int iVar12;
  longlong lVar13;
  void *_Dst;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  
  iVar3 = *(int *)(param_1 + 0x18);
  iVar4 = *(int *)(param_1 + 0x14);
  iVar5 = *(int *)(param_1 + 0x10);
  lVar8 = *(longlong *)(param_1 + 8);
  if (DAT_146ab6383 != '\0') {
    IsInRenderingThread();
  }
  lVar19 = (longlong)*(int *)(lVar8 + 0x3c);
  uVar15 = (&DAT_1464ca1b8)[lVar19 * 10];
  uVar17 = (&DAT_1464ca1bc)[lVar19 * 10];
  iVar6 = (&DAT_1464ca1c4)[lVar19 * 10];
  bVar11 = (byte)iVar3 & 0x1f;
  uVar16 = *(uint *)(lVar8 + 0x60) >> bVar11;
  uVar18 = uVar15;
  if (uVar15 <= uVar16) {
    uVar18 = uVar16;
  }
  uVar14 = uVar17;
  if (uVar17 <= uVar16) {
    uVar14 = uVar16;
  }
  uVar16 = (uint)(CONCAT44(0 >> bVar11,(uVar18 - 1) + uVar15) / (ulonglong)uVar15);
  uVar17 = ((uVar17 - 1) + uVar14) / uVar17;
  uVar18 = uVar17;
  uVar15 = uVar16;
  if (*(int *)(lVar8 + 0x3c) - 0x1eU < 2) {
    uVar15 = 2;
    if (1 < uVar16) {
      uVar15 = uVar16;
    }
    uVar18 = 2;
    if (1 < uVar17) {
      uVar18 = uVar17;
    }
  }
  lVar19 = 0;
  uVar17 = *(uint *)(lVar8 + 0x68);
  if (*(uint *)(lVar8 + 0x68) < 2) {
    uVar17 = 0;
  }
  uVar16 = 1;
  if (uVar17 != 0) {
    uVar16 = uVar17;
  }
  iVar12 = 1;
  if ((*(byte *)(lVar8 + 0xe8) & 1) != 0) {
    iVar12 = 6;
  }
  lVar2 = (longlong)(int)(iVar12 * uVar16 * iVar3 + iVar5 + iVar4 * 6) * 8;
  if (*(longlong *)(lVar2 + *(longlong *)(lVar8 + 0xa0)) == 0) {
    lVar13 = operator_new(0x48);
    if (lVar13 != 0) {
      lVar19 = FUN_141e69270(lVar13,0,uVar18 * uVar15 * iVar6,2,0,0,0,0);
    }
    puVar9 = *(undefined8 **)(lVar2 + *(longlong *)(lVar8 + 0xa0));
    *(longlong *)(lVar2 + *(longlong *)(lVar8 + 0xa0)) = lVar19;
    if (lVar19 != 0) {
      *(int *)(lVar19 + 8) = *(int *)(lVar19 + 8) + 1;
    }
    if (puVar9 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar9 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar9)(puVar9,1);
      }
    }
  }
  puVar9 = *(undefined8 **)(lVar2 + *(longlong *)(lVar8 + 0xa0));
  if (puVar9 != (undefined8 *)0x0) {
    *(int *)(puVar9 + 1) = *(int *)(puVar9 + 1) + 1;
  }
  _Dst = (void *)TOpenGLBuffer<FOpenGLBasePixelBuffer,35052,&CachedBindPixelUnpackBuffer>::Lock
                           (puVar9,0,*(undefined4 *)(puVar9 + 2),0,1);
  piVar1 = (int *)(puVar9 + 1);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)*puVar9)(puVar9,1);
  }
  _guard_xfg_dispatch_icall_nop
            (_Dst,*(void **)(param_1 + 0x28),(ulonglong)*(uint *)(param_1 + 0x34));
  FMemory::Free(*(undefined8 *)(param_1 + 0x28));
  uVar7 = *(undefined4 *)(param_1 + 0x18);
  iVar3 = *(int *)(param_1 + 0x14);
  iVar4 = *(int *)(param_1 + 0x10);
  uVar10 = *(undefined8 *)(param_1 + 8);
  if (DAT_146ab6383 != '\0') {
    IsInRenderingThread();
  }
  TOpenGLTexture<FOpenGLBaseTextureCube>::Unlock(uVar10,uVar7,iVar4 + iVar3 * 6);
  return;
}



// FUNCTION 141e908e0 operator() body=350 status=ok
// SIG undefined operator()(void)

/* WARNING: Removing unreachable block (ram,0x000141e909d0) */
/* WARNING: Removing unreachable block (ram,0x000141e909d8) */

void <lambda_e846313f32584d9ff267a8bebf64506e>::operator()(undefined8 *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  undefined8 uVar10;
  
  lVar6 = *(longlong *)*param_1;
  uVar1 = *(uint *)(lVar6 + 0x20);
  iVar2 = *(int *)param_1[3];
  iVar3 = *(int *)param_1[2];
  uVar4 = *(undefined4 *)param_1[1];
  FUN_141e6da70(*(undefined4 *)(lVar6 + 0x28));
  uVar9 = 0;
  if (iVar2 == 0) {
    uVar9 = 2;
  }
  uVar5 = *(uint *)(lVar6 + 0x38);
  *(uint *)(lVar6 + 0x38) = uVar9 | uVar5 & 0xfffffffd | 1;
  if (((uVar1 & 6) == 0) && ((iVar2 == 0 || (iVar3 != *(int *)(lVar6 + 0x50))))) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  if ((iVar2 == 0) || (DAT_146ab053c != 0)) {
    bVar8 = true;
  }
  else {
    bVar8 = false;
  }
  if (((bVar7) && (DAT_146ab0540 == 0)) && (DAT_1464c97d8 != 0)) {
    if ((uVar5 & 4) == 0) {
      uVar10 = 0x88e4;
      if ((*(byte *)(lVar6 + 0x20) & 6) != 0) {
        uVar10 = 0x88e8;
      }
    }
    else {
      uVar10 = 0x88e0;
    }
    (*DAT_146ab4310)(0x8893,*(undefined4 *)(lVar6 + 0x50),0,uVar10);
  }
  if (bVar8) {
    if (iVar2 != 0) {
      if (iVar2 != 0) {
        uVar10 = 0x2a;
      }
      else {
        uVar10 = 3;
      }
    }
    else {
      uVar10 = 1;
    }
    uVar10 = (*DAT_146ab4778)(0x8893,uVar4,iVar3,uVar10);
    *(uint *)(lVar6 + 0x38) = *(uint *)(lVar6 + 0x38) & 0xfffffff7;
    *(undefined4 *)(lVar6 + 0x40) = uVar4;
    *(int *)(lVar6 + 0x3c) = iVar3;
  }
  else {
    *(undefined4 *)(lVar6 + 0x40) = uVar4;
    *(int *)(lVar6 + 0x3c) = iVar3;
    uVar10 = FMemory::Malloc(iVar3,0);
    *(uint *)(lVar6 + 0x38) = *(uint *)(lVar6 + 0x38) | 8;
  }
  *(undefined8 *)(lVar6 + 0x48) = uVar10;
  return;
}



// FUNCTION 141e90a40 FUN_141e90a40 body=1632 status=ok
// SIG undefined FUN_141e90a40(void)

undefined8 * FUN_141e90a40(longlong *param_1)

{
  int *piVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  void *pvVar5;
  char cVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  int iVar12;
  int iVar13;
  undefined8 *puVar14;
  int iVar15;
  bool bVar16;
  int local_res8 [2];
  int local_res18 [2];
  uint local_res20 [2];
  int local_58 [2];
  void *local_50;
  int local_48;
  undefined4 local_44;
  
  lVar10 = *param_1;
  if (DAT_146ab6383 != '\0') {
    IsInRenderingThread();
  }
  puVar8 = (undefined8 *)0x0;
  if (DAT_1464c97ce != '\0') {
    local_res8[0] = 0;
    iVar15 = 0x400 - DAT_1464c97dc;
    if (iVar15 < 2) {
      _guard_xfg_dispatch_icall_nop
                (local_res8,&DAT_146ab0550 + (longlong)DAT_1464c97dc * 4,(longlong)iVar15 * 4);
      (*DAT_146ab4038)(0x400,&DAT_146ab0550);
      iVar13 = 1 - iVar15;
      _guard_xfg_dispatch_icall_nop(local_res8 + iVar15,&DAT_146ab0550,(longlong)iVar13 << 2);
    }
    else {
      local_res8[0] = *(int *)(&DAT_146ab0550 + (longlong)DAT_1464c97dc * 4);
      iVar13 = DAT_1464c97dc + 1;
    }
    DAT_1464c97dc = iVar13;
    if (*(byte *)(param_1 + 1) == 0x2c) {
      (*DAT_146ab4970)(local_res8[0],*(undefined4 *)(lVar10 + 0x84),*(undefined4 *)(lVar10 + 0x80),
                       *(undefined4 *)
                        ((longlong)&DAT_146ab3630 + (longlong)*(int *)(lVar10 + 0x3c) * 0x1c),
                       *(undefined1 *)((longlong)param_1 + 9),
                       *(undefined1 *)((longlong)param_1 + 10),0,1);
      lVar7 = FUN_141e711c0(param_1[2],1);
      iVar15 = *(int *)(lVar10 + 0x84);
      lVar9 = *(longlong *)(lVar7 + 8) + (longlong)(DAT_1464c97fc + -1) * 0x28;
      if ((*(int *)(lVar9 + 0x10) != iVar15) || (*(int *)(lVar9 + 0x14) != local_res8[0])) {
        FUN_141e6dbc0(param_1[2],lVar7,DAT_1464c97fc + -1,iVar15,local_res8[0],0,
                      *(undefined1 *)((longlong)param_1 + 10));
        iVar15 = *(int *)(lVar10 + 0x84);
      }
      (*DAT_146ab4160)(iVar15,0x90ea,0x1901);
      (*DAT_146ab4160)(*(undefined4 *)(lVar10 + 0x84),0x8e42,0);
      (*DAT_146ab4160)(*(undefined4 *)(lVar10 + 0x84),0x8e43,0x1903);
      (*DAT_146ab4160)(*(undefined4 *)(lVar10 + 0x84),0x8e44,0);
      (*DAT_146ab4160)(*(undefined4 *)(lVar10 + 0x84),0x8e45,0);
    }
    else {
      (*DAT_146ab4970)(local_res8[0],*(undefined4 *)(lVar10 + 0x84),*(undefined4 *)(lVar10 + 0x80),
                       *(undefined4 *)
                        ((longlong)&DAT_146ab3630 +
                        ((ulonglong)(*(uint *)(lVar10 + 0x40) >> 4 & 1) +
                        (ulonglong)*(byte *)(param_1 + 1) * 7) * 4));
    }
    puVar8 = (undefined8 *)operator_new(0x50);
    if (puVar8 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    bVar2 = *(byte *)((longlong)param_1 + 9);
    uVar3 = *(undefined4 *)(lVar10 + 0x84);
    lVar10 = param_1[2];
    *puVar8 = &PTR__scalar_deleting_destructor__144ebe5b0;
    *(undefined4 *)(puVar8 + 1) = 0;
    *(int *)(puVar8 + 2) = local_res8[0];
    *(undefined4 *)((longlong)puVar8 + 0x14) = uVar3;
    puVar8[3] = 0;
    *(uint *)(puVar8 + 4) = (uint)bVar2;
    puVar8[5] = 0;
    puVar8[6] = 0;
    *(undefined1 *)(puVar8 + 7) = 0;
    puVar8[8] = lVar10;
    *(undefined1 *)(puVar8 + 9) = 1;
    return puVar8;
  }
  iVar15 = *(int *)(lVar10 + 0x84);
  iVar13 = *(int *)(lVar10 + 0x80);
  puVar14 = (undefined8 *)0x0;
  cVar6 = FUN_141ed07f0(local_58);
  if (cVar6 == '\0') {
    local_res18[0] = 0;
    (*DAT_146ab4060)(0x821b,local_res18);
    if (local_res18[0] == 2) goto LAB_141e90fb6;
    if ((local_res18[0] != 3) && (local_res18[0] == 4)) {
      local_res20[0] = 0;
      (*DAT_146ab4060)(0x821c,local_res20);
      local_58[0] = (2 < local_res20[0]) + 2;
      goto LAB_141e90d74;
    }
  }
  else {
LAB_141e90d74:
    puVar14 = puVar8;
    if (local_58[0] < 2) goto LAB_141e90fb6;
  }
  puVar14 = puVar8;
  if ((char)param_1[1] == ',') {
    piVar1 = (int *)(lVar10 + 0x90);
    if (*piVar1 == 0) {
      local_res8[0] = 0x400 - DAT_1464c97dc;
      if (local_res8[0] < 2) {
        lVar9 = (longlong)local_res8[0];
        _guard_xfg_dispatch_icall_nop(piVar1,&DAT_146ab0550 + (longlong)DAT_1464c97dc * 4,lVar9 * 4)
        ;
        (*DAT_146ab4038)(0x400,&DAT_146ab0550);
        local_res8[0] = 1 - local_res8[0];
        _guard_xfg_dispatch_icall_nop(piVar1 + lVar9,&DAT_146ab0550,(longlong)local_res8[0] << 2);
      }
      else {
        *piVar1 = *(int *)(&DAT_146ab0550 + (longlong)DAT_1464c97dc * 4);
        local_res8[0] = DAT_1464c97dc + 1;
      }
      iVar13 = *(int *)(lVar10 + 100);
      iVar4 = *(int *)(lVar10 + 0x60);
      DAT_1464c97dc = local_res8[0];
      local_res8[0] = iVar13;
      lVar10 = FUN_141e711c0(param_1[2],1);
      iVar12 = DAT_1464c97fc + -1;
      if ((*(int *)(*(longlong *)(lVar10 + 8) + 0x10 + (longlong)iVar12 * 0x28) != iVar15) ||
         (*(int *)(*(longlong *)(lVar10 + 8) + 0x14 + (longlong)iVar12 * 0x28) != *piVar1)) {
        FUN_141e6dbc0(param_1[2],lVar10,iVar12,iVar15,*piVar1,*(undefined1 *)((longlong)param_1 + 9)
                      ,*(undefined1 *)((longlong)param_1 + 10));
      }
      if (DAT_146ab4958 == (code *)0x0) {
        (*DAT_146ab4148)(iVar15,0,0x8232,iVar4,iVar13,0,0x8d94,0x1401,0);
      }
      else {
        (*DAT_146ab4958)();
      }
      iVar13 = iVar13 * iVar4;
      local_50 = (void *)0x0;
      local_44 = 0;
      local_48 = iVar13;
      if (0 < iVar13) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_50);
      }
      pvVar5 = local_50;
      _guard_xfg_dispatch_icall_nop(local_50,0,(longlong)iVar13);
      (*DAT_146ab40d0)(0xcf5,1);
      (*DAT_146ab4178)(iVar15,0,0,0,iVar4,local_res8[0],0x8d94,0x1401,pvVar5);
      (*DAT_146ab40d0)(0xcf5,4);
      (*DAT_146ab4160)(iVar15,0x8e42,0);
      (*DAT_146ab4160)(iVar15,0x8e43,0x1903);
      (*DAT_146ab4160)(iVar15,0x8e44,0);
      (*DAT_146ab4160)(iVar15,0x8e45,0);
      if (pvVar5 != (void *)0x0) {
        FMemory::Free(pvVar5);
      }
    }
    iVar13 = *piVar1;
    puVar14 = (undefined8 *)*param_1;
  }
LAB_141e90fb6:
  puVar11 = (undefined8 *)operator_new(0x50);
  if (puVar11 != (undefined8 *)0x0) {
    bVar2 = *(byte *)((longlong)param_1 + 9);
    lVar10 = param_1[2];
    *puVar11 = &PTR__scalar_deleting_destructor__144ebe5b0;
    *(undefined4 *)(puVar11 + 1) = 0;
    *(int *)(puVar11 + 2) = iVar13;
    *(int *)((longlong)puVar11 + 0x14) = iVar15;
    puVar11[3] = 0;
    *(uint *)(puVar11 + 4) = (uint)bVar2;
    puVar11[5] = 0;
    puVar11[6] = 0;
    *(undefined1 *)(puVar11 + 7) = 0;
    puVar11[8] = lVar10;
    *(undefined1 *)(puVar11 + 9) = 0;
    puVar8 = puVar11;
  }
  puVar11 = (undefined8 *)puVar8[3];
  puVar8[3] = puVar14;
  if (puVar14 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
    UNLOCK();
  }
  if (puVar11 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar11 + 1);
    iVar15 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar15 == 1) {
      if ((*(char *)(puVar11 + 2) == '\0') &&
         ((DAT_146ab62f5 != '\0' || (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(), cVar6 == '\0')))
         ) {
        LOCK();
        bVar16 = *(int *)((longlong)puVar11 + 0xc) == 0;
        if (bVar16) {
          *(int *)((longlong)puVar11 + 0xc) = 1;
        }
        UNLOCK();
        if (bVar16) {
          TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar11);
        }
      }
      else {
        (**(code **)*puVar11)(puVar11,1);
      }
    }
  }
  return puVar8;
}



// FUNCTION 141e910a0 operator() body=129 status=ok
// SIG undefined operator()(void)

void <lambda_f191fa227473d62ee3ab26737a808419>::operator()(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_res8 [4];
  
  local_res8[0] = *param_1;
  uVar3 = 0;
  if ((int)param_1[10] != 0) {
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 4;
    }
    if (plVar5 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar5 + 8))();
    }
  }
  lVar4 = (*(code *)param_1[2])(uVar3,local_res8);
  puVar2 = *(undefined8 **)(*param_1 + 0x20);
  *(longlong *)(*param_1 + 0x20) = lVar4;
  if (lVar4 != 0) {
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
  }
  if (puVar2 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  piVar1 = (int *)(*(longlong *)(*param_1 + 0x20) + 8);
  *piVar1 = *piVar1 + 1;
  return;
}



// FUNCTION 141e91130 FUN_141e91130 body=231 status=ok
// SIG undefined FUN_141e91130(void)

void FUN_141e91130(longlong *param_1)

{
  (*DAT_146ab4198)(1,*param_1 + 0x18);
  (*DAT_146ab41a0)(*(undefined4 *)(*param_1 + 0x18),0x2802,*(undefined4 *)(*param_1 + 0x1c));
  (*DAT_146ab41a0)(*(undefined4 *)(*param_1 + 0x18),0x2803,*(undefined4 *)(*param_1 + 0x20));
  (*DAT_146ab41a0)(*(undefined4 *)(*param_1 + 0x18),0x8072,*(undefined4 *)(*param_1 + 0x24));
  (*DAT_146ab41a0)(*(undefined4 *)(*param_1 + 0x18),0x8501,*(undefined4 *)(*param_1 + 0x28));
  (*DAT_146ab41a0)(*(undefined4 *)(*param_1 + 0x18),0x2801,*(undefined4 *)(*param_1 + 0x30));
  (*DAT_146ab41a0)(*(undefined4 *)(*param_1 + 0x18),0x2800,*(undefined4 *)(*param_1 + 0x2c));
  if (DAT_146ab3df1 != '\0') {
    (*DAT_146ab41a0)(*(undefined4 *)(*param_1 + 0x18),0x84fe,*(undefined4 *)(*param_1 + 0x34));
  }
  (*DAT_146ab41a0)(*(undefined4 *)(*param_1 + 0x18),0x884c,*(undefined4 *)(*param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x000141e91210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_146ab41a0)(*(undefined4 *)(*param_1 + 0x18),0x884d,*(undefined4 *)(*param_1 + 0x3c));
  return;
}



// FUNCTION 141e91220 operator() body=422 status=ok
// SIG undefined operator()(void)

void <lambda_fbf316f14d9b4900820deb5fa4a25e3b>::operator()(undefined8 *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong in_stack_ffffffffffffffd8;
  
  lVar6 = (**(code **)(**(longlong **)*param_1 + 8))();
  *(undefined4 *)param_1[1] = *(undefined4 *)(lVar6 + 0x60);
  *(undefined4 *)param_1[2] = *(undefined4 *)(lVar6 + 100);
  lVar12 = (longlong)*(int *)(lVar6 + 0x3c);
  uVar2 = (&DAT_1464ca1b8)[lVar12 * 10];
  uVar10 = (&DAT_1464ca1bc)[lVar12 * 10];
  iVar3 = (&DAT_1464ca1c4)[lVar12 * 10];
  uVar9 = uVar2;
  if (uVar2 <= *(uint *)(lVar6 + 0x60)) {
    uVar9 = *(uint *)(lVar6 + 0x60);
  }
  uVar2 = ((uVar9 - 1) + uVar2) / uVar2;
  uVar9 = uVar10;
  if (uVar10 <= *(uint *)(lVar6 + 100)) {
    uVar9 = *(uint *)(lVar6 + 100);
  }
  uVar10 = ((uVar9 - 1) + uVar10) / uVar10;
  uVar11 = uVar10;
  uVar9 = uVar2;
  if (*(int *)(lVar6 + 0x3c) - 0x1eU < 2) {
    uVar9 = 2;
    if (1 < uVar2) {
      uVar9 = uVar2;
    }
    uVar11 = 2;
    if (1 < uVar10) {
      uVar11 = uVar10;
    }
  }
  bVar5 = true;
  if (**(longlong **)(lVar6 + 0xa0) == 0) {
    bVar5 = false;
    lVar12 = operator_new();
    lVar7 = 0;
    if (lVar12 != 0) {
      in_stack_ffffffffffffffd8 = 0;
      lVar7 = FUN_141e69270(lVar12,0,uVar11 * uVar9 * iVar3,2,0,0,0,0);
    }
    puVar4 = (undefined8 *)**(longlong **)(lVar6 + 0xa0);
    **(longlong **)(lVar6 + 0xa0) = lVar7;
    if (lVar7 != 0) {
      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    }
    if (puVar4 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar4 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar4)(puVar4,1);
      }
    }
  }
  puVar4 = (undefined8 *)**(longlong **)(lVar6 + 0xa0);
  if (puVar4 != (undefined8 *)0x0) {
    *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
  }
  if ((!bVar5) || ((*(uint *)(lVar6 + 0x40) & 0x40005) != 0x40000)) {
    FUN_141ea9b30(lVar6,0,0);
  }
  uVar8 = TOpenGLBuffer<FOpenGLBasePixelBuffer,35052,&CachedBindPixelUnpackBuffer>::Lock
                    (puVar4,0,*(undefined4 *)(puVar4 + 2),1,
                     in_stack_ffffffffffffffd8 & 0xffffffffffffff00);
  piVar1 = (int *)(puVar4 + 1);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  *(undefined8 *)param_1[3] = uVar8;
  return;
}



// FUNCTION 141e913d0 FUN_141e913d0 body=83 status=ok
// SIG undefined FUN_141e913d0(void)

undefined8 * FUN_141e913d0(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 141e91430 `scalar_deleting_destructor' body=108 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
UE4Function_Private::TFunction_OwnedObject<<lambda_14e6f5c2fd87bb4b2fa9737f56c88017>_>::
_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    plVar1 = (longlong *)param_1[10];
    if ((longlong *)param_1[10] == (longlong *)0x0) {
      plVar1 = param_1 + 6;
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,0);
    }
  }
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 141e914a0 FUN_141e914a0 body=43 status=ok
// SIG undefined FUN_141e914a0(void)

undefined8 * FUN_141e914a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 141e914d0 FUN_141e914d0 body=43 status=ok
// SIG undefined FUN_141e914d0(void)

undefined8 * FUN_141e914d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 141e91500 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
UE4Function_Private::TFunction_CopyableOwnedObject<<lambda_86525f1a4ab890ef6a1fe61d5a6d62ae>_>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 2);
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141e91550 FUN_141e91550 body=262 status=ok
// SIG undefined FUN_141e91550(void)

undefined8 * FUN_141e91550(undefined8 *param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  uint uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_5c;
  code *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  *param_1 = &PTR_FUN_144ebe630;
  if (DAT_146ab6383 != '\0') {
    IsInRenderingThread();
  }
  iVar1 = *(int *)(param_1 + 5);
  if (iVar1 != 0) {
    uVar2 = *(uint *)(param_1 + 7);
    uVar3 = *(undefined4 *)(param_1 + 10);
    uStack_70 = CONCAT31(uStack_70._1_3_,(char)(uVar2 >> 2)) & 0xffffff01;
    uVar4 = param_1[9];
    local_28 = 0;
    local_18 = 0;
    puVar5 = (undefined8 *)FUN_140438ef0(0x28,local_48);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &PTR_FUN_144eb6740;
      *(int *)(puVar5 + 1) = iVar1;
      *(undefined4 *)((longlong)puVar5 + 0xc) = uVar3;
      *(uint *)(puVar5 + 2) = uStack_70;
      *(undefined4 *)((longlong)puVar5 + 0x14) = uStack_6c;
      puVar5[3] = uVar4;
      puVar5[4] = CONCAT44(uStack_5c,uVar2 >> 3) & 0xffffffff00000001;
    }
    local_58[0] = FUN_141e93a30;
    FUN_141eb4140(local_58,0);
    param_1[9] = 0;
    AK::MemoryMgr::StartProfileThreadUsage(0x8892);
  }
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 141e91660 FUN_141e91660 body=315 status=ok
// SIG undefined FUN_141e91660(void)

undefined8 * FUN_141e91660(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  *param_1 = &PTR_FUN_144ebe330;
  if ((DAT_146ab6383 == '\0') || (cVar2 = FUN_1415e13e0(), cVar2 != '\0')) {
    puVar4 = (undefined8 *)param_1[7];
  }
  else {
    puVar4 = (undefined8 *)param_1[7];
    if (puVar4 != (undefined8 *)0x0) {
      *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
    }
    local_28 = 0;
    local_18 = 0;
    puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_48);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &PTR_CopyToEmptyStorage_144ebe720;
      puVar3[1] = puVar4;
      puVar4 = (undefined8 *)0x0;
    }
    local_58[0] = &LAB_141e93860;
    FUN_141eb4140(local_58,0);
    if (puVar4 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar4 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar4)(puVar4,1);
      }
    }
    puVar4 = (undefined8 *)param_1[7];
    param_1[7] = 0;
    if (puVar4 == (undefined8 *)0x0) goto LAB_141e91754;
  }
  piVar1 = (int *)(puVar4 + 1);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)*puVar4)(puVar4,1);
  }
LAB_141e91754:
  puVar4 = (undefined8 *)param_1[7];
  if (puVar4 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar4 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 141e917a0 FUN_141e917a0 body=52 status=ok
// SIG undefined FUN_141e917a0(void)

undefined8 FUN_141e917a0(undefined8 param_1,ulonglong param_2)

{
  FUN_141e8db10();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 141e917e0 `scalar_deleting_destructor' body=94 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TOpenGLShader<FRHIComputeShader,37305,5>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144ebe318;
  if (param_1[0x1e] != 0) {
    FMemory::Free();
  }
  FOpenGLShaderBindings::~FOpenGLShaderBindings(param_1 + 8);
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x100);
  }
  return param_1;
}



// FUNCTION 141e91840 `scalar_deleting_destructor' body=94 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TOpenGLShader<FRefCountedObject,35632,3>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144ebe628;
  if (param_1[0x19] != 0) {
    FMemory::Free();
  }
  FOpenGLShaderBindings::~FOpenGLShaderBindings(param_1 + 3);
  *param_1 = &PTR_FUN_1440104c8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 141e918a0 FUN_141e918a0 body=366 status=ok
// SIG undefined FUN_141e918a0(void)

undefined8 * FUN_141e918a0(undefined8 *param_1,ulonglong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined7 uStack_67;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  *param_1 = &PTR_FUN_144ebe430;
  if (DAT_146ab62c8 != '\0') {
    IsInActualRenderingThread();
    OpenGLTextureDeleted(param_1);
    uVar6 = param_1[0xe];
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    uVar2 = *(undefined4 *)(param_1 + 0x12);
    uVar3 = *(undefined4 *)((longlong)param_1 + 0x84);
    uVar4 = *(undefined4 *)(param_1 + 8);
    uVar7 = param_1[0x16];
    uVar5 = *(undefined4 *)(param_1 + 0x13);
    local_28 = 0;
    local_18 = 0;
    puVar8 = (undefined8 *)FUN_140438ef0(0x30,local_48);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &PTR_FUN_144eb6728;
      puVar8[1] = uVar6;
      puVar8[2] = CONCAT44(uVar2,uVar1);
      puVar8[3] = CONCAT44(uVar4,uVar3);
      puVar8[4] = uVar7;
      puVar8[5] = CONCAT71(uStack_67,(byte)((uint)uVar5 >> 0x1f));
    }
    local_58[0] = &LAB_141e93930;
    FUN_141eb4140(local_58,0);
    if (param_1[0x16] != 0) {
      FMemory::operator_delete();
      param_1[0x16] = 0;
    }
    FUN_141ea8d90(param_1[0xe],param_1);
  }
  if (param_1[0x1b] != 0) {
    FMemory::Free();
  }
  if (param_1[0x17] != 0) {
    FMemory::Free();
  }
  TArray<TRefCountPtr<FGPUProfilerEventNode>,FDefaultAllocator>::
  ~TArray<TRefCountPtr<FGPUProfilerEventNode>,FDefaultAllocator>(param_1 + 0x14);
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf0);
  }
  return param_1;
}



// FUNCTION 141e91a10 FUN_141e91a10 body=366 status=ok
// SIG undefined FUN_141e91a10(void)

undefined8 * FUN_141e91a10(undefined8 *param_1,ulonglong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined7 uStack_67;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  *param_1 = &PTR_FUN_144ebe488;
  if (DAT_146ab62c8 != '\0') {
    IsInActualRenderingThread();
    OpenGLTextureDeleted(param_1);
    uVar6 = param_1[0xe];
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    uVar2 = *(undefined4 *)(param_1 + 0x12);
    uVar3 = *(undefined4 *)((longlong)param_1 + 0x84);
    uVar4 = *(undefined4 *)(param_1 + 8);
    uVar7 = param_1[0x16];
    uVar5 = *(undefined4 *)(param_1 + 0x13);
    local_28 = 0;
    local_18 = 0;
    puVar8 = (undefined8 *)FUN_140438ef0(0x30,local_48);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &PTR_FUN_144eb6728;
      puVar8[1] = uVar6;
      puVar8[2] = CONCAT44(uVar2,uVar1);
      puVar8[3] = CONCAT44(uVar4,uVar3);
      puVar8[4] = uVar7;
      puVar8[5] = CONCAT71(uStack_67,(byte)((uint)uVar5 >> 0x1f));
    }
    local_58[0] = &LAB_141e93930;
    FUN_141eb4140(local_58,0);
    if (param_1[0x16] != 0) {
      FMemory::operator_delete();
      param_1[0x16] = 0;
    }
    FUN_141ea8d90(param_1[0xe],param_1);
  }
  if (param_1[0x1b] != 0) {
    FMemory::Free();
  }
  if (param_1[0x17] != 0) {
    FMemory::Free();
  }
  TArray<TRefCountPtr<FGPUProfilerEventNode>,FDefaultAllocator>::
  ~TArray<TRefCountPtr<FGPUProfilerEventNode>,FDefaultAllocator>(param_1 + 0x14);
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf0);
  }
  return param_1;
}



// FUNCTION 141e91b80 FUN_141e91b80 body=366 status=ok
// SIG undefined FUN_141e91b80(void)

undefined8 * FUN_141e91b80(undefined8 *param_1,ulonglong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined7 uStack_67;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  *param_1 = &PTR_FUN_144ebe4d8;
  if (DAT_146ab62c8 != '\0') {
    IsInActualRenderingThread();
    OpenGLTextureDeleted(param_1);
    uVar6 = param_1[0xe];
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    uVar2 = *(undefined4 *)(param_1 + 0x12);
    uVar3 = *(undefined4 *)((longlong)param_1 + 0x84);
    uVar4 = *(undefined4 *)(param_1 + 8);
    uVar7 = param_1[0x16];
    uVar5 = *(undefined4 *)(param_1 + 0x13);
    local_28 = 0;
    local_18 = 0;
    puVar8 = (undefined8 *)FUN_140438ef0(0x30,local_48);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &PTR_FUN_144eb6728;
      puVar8[1] = uVar6;
      puVar8[2] = CONCAT44(uVar2,uVar1);
      puVar8[3] = CONCAT44(uVar4,uVar3);
      puVar8[4] = uVar7;
      puVar8[5] = CONCAT71(uStack_67,(byte)((uint)uVar5 >> 0x1f));
    }
    local_58[0] = &LAB_141e93930;
    FUN_141eb4140(local_58,0);
    if (param_1[0x16] != 0) {
      FMemory::operator_delete();
      param_1[0x16] = 0;
    }
    FUN_141ea8d90(param_1[0xe],param_1);
  }
  if (param_1[0x1b] != 0) {
    FMemory::Free();
  }
  if (param_1[0x17] != 0) {
    FMemory::Free();
  }
  TArray<TRefCountPtr<FGPUProfilerEventNode>,FDefaultAllocator>::
  ~TArray<TRefCountPtr<FGPUProfilerEventNode>,FDefaultAllocator>(param_1 + 0x14);
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf0);
  }
  return param_1;
}



// FUNCTION 141e91cf0 FUN_141e91cf0 body=366 status=ok
// SIG undefined FUN_141e91cf0(void)

undefined8 * FUN_141e91cf0(undefined8 *param_1,ulonglong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined7 uStack_67;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  *param_1 = &PTR_FUN_144ebe528;
  if (DAT_146ab62c8 != '\0') {
    IsInActualRenderingThread();
    OpenGLTextureDeleted(param_1);
    uVar6 = param_1[0xe];
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    uVar2 = *(undefined4 *)(param_1 + 0x12);
    uVar3 = *(undefined4 *)((longlong)param_1 + 0x84);
    uVar4 = *(undefined4 *)(param_1 + 8);
    uVar7 = param_1[0x16];
    uVar5 = *(undefined4 *)(param_1 + 0x13);
    local_28 = 0;
    local_18 = 0;
    puVar8 = (undefined8 *)FUN_140438ef0(0x30,local_48);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &PTR_FUN_144eb6728;
      puVar8[1] = uVar6;
      puVar8[2] = CONCAT44(uVar2,uVar1);
      puVar8[3] = CONCAT44(uVar4,uVar3);
      puVar8[4] = uVar7;
      puVar8[5] = CONCAT71(uStack_67,(byte)((uint)uVar5 >> 0x1f));
    }
    local_58[0] = &LAB_141e93930;
    FUN_141eb4140(local_58,0);
    if (param_1[0x16] != 0) {
      FMemory::operator_delete();
      param_1[0x16] = 0;
    }
    FUN_141ea8d90(param_1[0xe],param_1);
  }
  if (param_1[0x1b] != 0) {
    FMemory::Free();
  }
  if (param_1[0x17] != 0) {
    FMemory::Free();
  }
  TArray<TRefCountPtr<FGPUProfilerEventNode>,FDefaultAllocator>::
  ~TArray<TRefCountPtr<FGPUProfilerEventNode>,FDefaultAllocator>(param_1 + 0x14);
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf0);
  }
  return param_1;
}



// FUNCTION 141e91e60 FUN_141e91e60 body=43 status=ok
// SIG undefined FUN_141e91e60(void)

undefined8 * FUN_141e91e60(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x138);
  }
  return param_1;
}



// FUNCTION 141e91e90 FUN_141e91e90 body=235 status=ok
// SIG undefined FUN_141e91e90(void)

undefined8 * FUN_141e91e90(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  uVar1 = param_1[0x13];
  *param_1 = &PTR_FUN_144ebe328;
  local_28 = 0;
  local_18 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_48);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = uVar1;
    *puVar2 = &PTR_FUN_143f77b70;
  }
  local_58[0] = &LAB_141e93bd0;
  FUN_141eb4140(local_58,0);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_1 + 0x19);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_1 + 0x18);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_1 + 0x17);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_1 + 0x16);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_1 + 0x15);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_1 + 0x14);
  FCachedBoundShaderStateLink::~FCachedBoundShaderStateLink(param_1 + 3);
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 141e91f80 `scalar_deleting_destructor' body=86 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FRigUnit_CollectionChain::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[7] != 0) {
    FMemory::Free();
  }
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_144da0c80;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 141e91fe0 `scalar_deleting_destructor' body=94 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FOpenGLComputeShader::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144ebe318;
  if (param_1[0x1e] != 0) {
    FMemory::Free();
  }
  FOpenGLShaderBindings::~FOpenGLShaderBindings(param_1 + 8);
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x108);
  }
  return param_1;
}



// FUNCTION 141e92040 FUN_141e92040 body=43 status=ok
// SIG undefined FUN_141e92040(void)

undefined8 * FUN_141e92040(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 141e92070 FUN_141e92070 body=465 status=ok
// SIG undefined FUN_141e92070(void)

undefined8 * FUN_141e92070(undefined8 *param_1,ulonglong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  bool bVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 *local_58 [2];
  longlong local_48 [4];
  longlong *local_28;
  int local_18;
  
  *param_1 = &PTR_FUN_144ebe578;
  FUN_141e74650();
  if (DAT_146ab6383 == '\0') {
    cVar4 = IsInRenderingThread();
    if (cVar4 == '\0') goto LAB_141e920a7;
  }
  else {
LAB_141e920a7:
    cVar4 = FUN_1415e13e0();
    bVar3 = false;
    if (cVar4 == '\0') goto LAB_141e920b2;
  }
  bVar3 = true;
LAB_141e920b2:
  if ((*(int *)(param_1 + 3) != 0) && (*(char *)((longlong)param_1 + 0x3d) == '\0')) {
    *(undefined1 *)((longlong)param_1 + 0x3d) = 1;
    if (bVar3) {
      PlatformReleaseRenderQuery(*(int *)(param_1 + 3),param_1[4]);
    }
    else {
      puVar6 = (undefined8 *)((longlong)DAT_146ab6ea8 + 0xfU & 0xfffffffffffffff0);
      puVar5 = puVar6 + 0xc;
      if (DAT_146ab6eb0 < puVar5) {
        FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,0x70);
        puVar6 = (undefined8 *)((longlong)DAT_146ab6ea8 + 0xfU & 0xfffffffffffffff0);
        puVar5 = puVar6 + 0xc;
      }
      DAT_146ab6e8c = DAT_146ab6e8c + 1;
      DAT_146ab6ea8 = puVar5;
      *DAT_146ab6e80 = puVar6;
      uVar1 = *(undefined4 *)(param_1 + 3);
      uVar2 = param_1[4];
      local_28 = (longlong *)0x0;
      local_18 = 0;
      DAT_146ab6e80 = puVar6 + 1;
      puVar5 = (undefined8 *)FUN_140438ef0(0x18,local_48);
      if (puVar5 != (undefined8 *)0x0) {
        uStack_60 = (undefined4)uVar2;
        uStack_5c = (undefined4)((ulonglong)uVar2 >> 0x20);
        *puVar5 = &PTR_FUN_143f77c18;
        *(undefined4 *)(puVar5 + 1) = uVar1;
        *(undefined4 *)((longlong)puVar5 + 0xc) = uStack_64;
        *(undefined4 *)(puVar5 + 2) = uStack_60;
        *(undefined4 *)((longlong)puVar5 + 0x14) = uStack_5c;
      }
      local_58[0] = &LAB_141e93a80;
      puVar6[1] = 0;
      *puVar6 = &PTR_ExecuteAndDestruct_144eb5ab0;
      TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar6 + 2,local_58);
      if (local_18 != 0) {
        plVar7 = local_48;
        if (local_28 != (longlong *)0x0) {
          plVar7 = local_28;
        }
        if (plVar7 != (longlong *)0x0) {
          (**(code **)(*plVar7 + 0x10))(plVar7,0);
        }
      }
      if (local_28 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
  }
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 141e92250 `scalar_deleting_destructor' body=82 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FOpenGLSamplerState::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144ebe5c8;
  (*DAT_146ab4190)(1,param_1 + 3);
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 141e922b0 `scalar_deleting_destructor' body=133 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FOpenGLShaderResourceView::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144ebe5b0;
  if ((*(int *)(param_1 + 2) != 0) && (*(char *)(param_1 + 9) != '\0')) {
    FUN_141e9db10(param_1[8]);
    (*DAT_146ab3fd8)(1,param_1 + 2);
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 5);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 3);
  *param_1 = &PTR_FUN_1440104c8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 141e92340 `scalar_deleting_destructor' body=86 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FOpenGLShaderResourceViewProxy::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144ebe5c0;
  if (DAT_1469f59d8 != 0) {
    FShaderCache::InternalRemoveSRV(DAT_1469f59d8,param_1);
  }
  FUN_141e8db10(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 141e923a0 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FOpenGLTextureReference::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_1 + 0xc);
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 141e923f0 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FOpenGLTextureUnorderedAccessView::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_1 + 5);
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 141e92440 `scalar_deleting_destructor' body=118 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FOpenGLVertexBufferUnorderedAccessView::_scalar_deleting_destructor_
          (undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144ebe5a0;
  if (*(int *)(param_1 + 3) != 0) {
    FUN_141e9db10(param_1[6]);
    (*DAT_146ab3fd8)(1,param_1 + 3);
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 5);
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141e924c0 AppendCString body=135 status=ok
// SIG undefined AppendCString(void)

void `anonymous_namespace'::AppendCString(longlong *param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar5;
  ulonglong uVar4;
  
  iVar1 = (int)param_1[1];
  uVar3 = 0xffffffffffffffff;
  do {
    uVar4 = uVar3;
    uVar3 = uVar4 + 1;
  } while (*(char *)((longlong)param_2 + uVar3) != '\0');
  if (0 < iVar1) {
    FUN_141e9da90(param_1,param_2,uVar3 & 0xffffffff,iVar1 + -1);
    return;
  }
  iVar5 = (int)uVar4 + 2;
  iVar2 = iVar1 + iVar5;
  *(int *)(param_1 + 1) = iVar2;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
  }
  ::_guard_xfg_dispatch_icall_nop((void *)((longlong)iVar1 + *param_1),param_2,(longlong)iVar5);
  return;
}



// FUNCTION 141e92550 FUN_141e92550 body=603 status=ok
// SIG undefined FUN_141e92550(void)

longlong *
FUN_141e92550(undefined8 param_1,longlong *param_2,longlong param_3,undefined8 param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 local_88;
  longlong local_80;
  code *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  
  if (DAT_146ab6383 == '\0') {
    CreateAsyncReallocate2DTextureTarget(param_2,param_1,param_4,param_5,param_6,param_7);
    GLCopyAsyncTexture2D(param_1,*param_2,param_6,param_7,param_4,param_8);
  }
  else {
    CreateAsyncReallocate2DTextureTarget(&local_b8,param_1,param_4,param_5,param_6,param_7);
    if (DAT_146ab6383 != '\0') {
      IsInRenderingThread();
    }
    lVar1 = local_b8;
    local_b0 = local_b8;
    puVar4 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 0xfU & 0xfffffffffffffff0);
    puVar2 = puVar4 + 0xc;
    if (*(undefined8 **)(param_3 + 0x38) < puVar2) {
      FMemStackBase::AllocateNewChunk(param_3 + 0x30,0x70);
      puVar4 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 0xfU & 0xfffffffffffffff0);
      puVar2 = puVar4 + 0xc;
    }
    *(undefined8 **)(param_3 + 0x30) = puVar2;
    *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
    local_a0 = lVar1;
    **(undefined8 **)(param_3 + 8) = puVar4;
    *(undefined8 **)(param_3 + 8) = puVar4 + 1;
    lVar3 = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
      lVar3 = local_b8;
    }
    local_88 = param_8;
    local_80 = lVar1;
    local_98 = param_6;
    local_94 = param_7;
    local_48 = (longlong *)0x0;
    local_38 = 0;
    local_a8 = param_1;
    local_90 = param_4;
    puVar2 = (undefined8 *)FUN_140438ef0(0x38,local_68);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &PTR_CopyToEmptyStorage_144ebe6c0;
      puVar2[1] = param_1;
      puVar2[2] = lVar3;
      puVar2[5] = param_8;
      puVar2[6] = local_b0;
      local_a0 = 0;
      *(undefined4 *)(puVar2 + 3) = param_6;
      *(undefined4 *)((longlong)puVar2 + 0x1c) = param_7;
      puVar2[4] = param_4;
    }
    local_78[0] = FUN_141e93c10;
    puVar4[1] = 0;
    *puVar4 = &PTR_ExecuteAndDestruct_144eb5ab0;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar4 + 2,local_78);
    if (local_38 != 0) {
      plVar5 = local_68;
      if (local_48 != (longlong *)0x0) {
        plVar5 = local_48;
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))(plVar5,0);
      }
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_a0);
    *param_2 = lVar3;
  }
  return param_2;
}



// FUNCTION 141e927b0 FUN_141e927b0 body=492 status=ok
// SIG undefined FUN_141e927b0(void)

void FUN_141e927b0(longlong *param_1,longlong param_2)

{
  undefined1 uVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(char *)((longlong)param_1 + 0x18c) == '\0') {
    *(undefined1 *)((longlong)param_1 + 0x18c) = 1;
    FUN_141e9cd00(param_1 + 0x19);
    plVar4 = param_1 + 0x25;
    lVar5 = 4;
    do {
      *plVar4 = param_1[0x30];
      plVar4 = plVar4 + 3;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  lVar5 = param_1[0x31];
  *(int *)(param_1 + 0x31) = (int)lVar5 + 1;
  if (0 < (int)lVar5) {
    return;
  }
  plVar4 = (longlong *)0x0;
  param_1[7] = 0;
  *(undefined1 *)((longlong)param_1 + 10) = DAT_146ab62fc;
  cVar2 = DAT_146ab62fd;
  *(char *)((longlong)param_1 + 0xb) = DAT_146ab62fd;
  if (cVar2 == '\0') {
    if (*(char *)((longlong)param_1 + 10) == '\0') goto LAB_141e9284a;
LAB_141e92854:
    uVar1 = FUN_14164b510();
    *(undefined1 *)((longlong)param_1 + 0xd) = uVar1;
    cVar2 = *(char *)((longlong)param_1 + 0xb);
    if (*(char *)((longlong)param_1 + 10) == '\0') {
LAB_141e92866:
      if (cVar2 == '\0') goto LAB_141e9286a;
LAB_141e92894:
      if (*(int *)((longlong)param_1 + 0x1c) != 0) {
        *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + -1;
        goto LAB_141e9293b;
      }
    }
    else if (cVar2 != '\0') goto LAB_141e92894;
    SetEmitDrawEvents(1);
    *(undefined1 *)(param_1 + 1) = 1;
    plVar3 = (longlong *)operator_new(0x80);
    if (plVar3 != (longlong *)0x0) {
      plVar3[1] = 0;
      plVar3[2] = 0;
      *plVar3 = (longlong)&PTR_FUN_144eb5b78;
      plVar3[3] = (longlong)&PTR__scalar_deleting_destructor__144ebe608;
      plVar3[5] = param_2;
      *(undefined4 *)(plVar3 + 6) = 1;
      *(undefined4 *)((longlong)plVar3 + 0x34) = 0xffffffff;
      *(undefined4 *)(plVar3 + 7) = 0;
      plVar3[8] = 0;
      plVar3[9] = 0;
      plVar3[10] = 0;
      plVar3[0xb] = 0;
      *(undefined1 *)(plVar3 + 0xc) = 0;
      *(undefined1 *)(plVar3 + 0xd) = 0;
      *(undefined4 *)((longlong)plVar3 + 0x6c) = 0;
      plVar3[0xe] = 0;
      plVar3[0xf] = param_2;
      FUN_141e9cd00();
      plVar4 = plVar3;
    }
    param_1[6] = (longlong)plVar4;
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  else {
    *(undefined1 *)((longlong)param_1 + 10) = 0;
LAB_141e9284a:
    if (*(char *)((longlong)param_1 + 0xc) != '\0') goto LAB_141e92866;
    if (cVar2 != '\0') goto LAB_141e92854;
LAB_141e9286a:
    if (*(char *)((longlong)param_1 + 0xc) != '\0') {
      FUN_141e974d0(param_1 + 0x32,0);
      SetEmitDrawEvents(*(undefined1 *)((longlong)param_1 + 0xd));
    }
  }
LAB_141e9293b:
  *(undefined1 *)((longlong)param_1 + 0xc) = *(undefined1 *)((longlong)param_1 + 0xb);
  if (DAT_146ab6339 != '\0') {
    (**(code **)(param_1[0x19] + 8))(param_1 + 0x19,0,0);
  }
  cVar2 = FUN_14164b510();
  if (cVar2 != '\0') {
    (**(code **)(*param_1 + 0x18))(param_1,L"FRAME",0xff00ff00);
  }
  return;
}



// FUNCTION 141e929a0 BeginFrame_QueryBatchCleanup body=241 status=ok
// SIG undefined BeginFrame_QueryBatchCleanup(void)

void BeginFrame_QueryBatchCleanup(void)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  iVar4 = 0;
  iVar2 = DAT_1464c9848 + 1;
  DAT_1464c9848 = iVar2;
  if (0 < DAT_1464c9840) {
    iVar5 = 1;
    lVar6 = 0;
    iVar3 = DAT_1464c9840;
    do {
      plVar1 = *(longlong **)(lVar6 + DAT_1464c9838);
      if (*(uint *)(plVar1 + 2) <= iVar2 - 5U) {
        if (*plVar1 != 0) {
          FMemory::Free();
        }
        FMemory::operator_delete(plVar1,0x18);
        iVar2 = (DAT_1464c9840 - iVar4) + -1;
        if (iVar2 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(DAT_1464c9838 + (longlong)iVar4 * 8),
                     (void *)(DAT_1464c9838 + (longlong)iVar5 * 8),(longlong)iVar2 << 3);
        }
        DAT_1464c9840 = DAT_1464c9840 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(&DAT_1464c9838);
        iVar4 = iVar4 + -1;
        iVar5 = iVar5 + -1;
        lVar6 = lVar6 + -8;
        iVar2 = DAT_1464c9848;
        iVar3 = DAT_1464c9840;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 8;
    } while (iVar4 < iVar3);
  }
  return;
}



// FUNCTION 141e92aa0 FUN_141e92aa0 body=411 status=ok
// SIG undefined FUN_141e92aa0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141e92aa0(longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined1 uVar7;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined1 local_60;
  undefined2 local_58;
  char local_56 [14];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  uVar7 = 0;
  iVar6 = *(int *)(*(longlong *)(param_3 + 0x100) + 0x5d0);
  if (*(int *)(param_2 + 0x198) != iVar6) {
    if (DAT_146ab3550 == '\0') {
      (*DAT_146ab4470)(iVar6);
    }
    else {
      (*DAT_146ab4a78)();
    }
    *(int *)(param_2 + 0x198) = iVar6;
    MarkShaderParameterCachesDirty(*(undefined8 *)(param_1 + 0x5c8),1);
    *(undefined8 *)(param_1 + 0x5c0) = 0;
    uVar7 = 1;
  }
  if (DAT_146ab3552 == '\0') {
    lVar2 = *(longlong *)(param_3 + 0x100);
    if (DAT_146ab3550 != '\0') {
      iVar6 = 0;
      uVar1 = *(undefined4 *)(lVar2 + 0x4ac);
      local_56[0] = '\0';
      local_56[1] = '\0';
      local_56[2] = '\0';
      local_56[3] = '\0';
      local_56[4] = '\0';
      local_56[5] = '\0';
      local_56[6] = '\0';
      local_56[7] = '\0';
      local_58 = 0x6263;
      if (*(char *)(lVar2 + 0x483) != '\0') {
        do {
          pcVar5 = local_56;
          cVar3 = (char)(iVar6 / 10);
          if (9 < iVar6) {
            local_56[0] = cVar3 + '0';
            pcVar5 = local_56 + 1;
          }
          *pcVar5 = (char)iVar6 + cVar3 * -10 + '0';
          pcVar5[1] = '\0';
          iVar4 = GetOpenGLProgramUniformBlockIndex(uVar1,&local_58);
          if (-1 < iVar4) {
            GetOpenGLProgramUniformBlockBinding(uVar1,iVar4,iVar6);
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < (int)(uint)*(byte *)(lVar2 + 0x483));
      }
    }
    local_68 = 0;
    local_60 = uVar7;
    FUN_141e93560(param_1,param_2,*(undefined1 *)(param_3 + 0xdb),param_1 + 0x810);
    FUN_141eaa400(param_1,param_2,*(longlong *)(param_3 + 0x100) + 0x620);
  }
  return;
}



// FUNCTION 141e92c40 FUN_141e92c40 body=283 status=ok
// SIG undefined FUN_141e92c40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141e92c40(longlong param_1,longlong param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  int aiStack_494 [265];
  undefined8 uStack_70;
  undefined1 auStack_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  if (*(int *)(param_2 + 0x188) != *(int *)(param_1 + 0x330)) {
    if (*(int *)(param_1 + 0x330) == 0) {
      uStack_70 = 0x141e92d18;
      (*DAT_146ab4708)(0x8d40,0);
      uStack_70 = 0x141e92d23;
      (*DAT_146ab40f0)(0x405);
      uStack_70 = 0x141e92d2e;
      (*DAT_146ab4008)(0x405);
    }
    else {
      uStack_70 = 0x141e92c8e;
      (*DAT_146ab4708)();
      uStack_70 = 0x141e92ca7;
      (*DAT_146ab40f0)();
      iVar2 = DAT_146ab3de8;
      lVar5 = (longlong)DAT_146ab3de8;
      bVar1 = false;
      if (0 < DAT_146ab3de8) {
        iVar6 = 0x8ce0;
        piVar4 = (int *)(param_2 + 0x44c);
        plVar7 = (longlong *)(param_1 + 0x378);
        do {
          iVar3 = iVar6;
          if (*plVar7 == 0) {
            iVar3 = 0;
          }
          *(int *)(((longlong)aiStack_494 - param_2) + (longlong)piVar4) = iVar3;
          if (*piVar4 != iVar3) {
            bVar1 = true;
            *piVar4 = iVar3;
          }
          iVar6 = iVar6 + 1;
          plVar7 = plVar7 + 1;
          piVar4 = piVar4 + 1;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
        if (bVar1) {
          uStack_70 = 0x141e92d0e;
          (*DAT_146ab4350)(iVar2,local_48);
        }
      }
    }
    *(undefined4 *)(param_2 + 0x188) = *(undefined4 *)(param_1 + 0x330);
  }
  return;
}



// FUNCTION 141e92d60 FUN_141e92d60 body=1565 status=ok
// SIG undefined FUN_141e92d60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141e92d60(longlong param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  longlong lVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_98 [32];
  uint local_78;
  char local_70;
  char local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  longlong local_58;
  undefined2 local_50;
  char local_4e [14];
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  iVar11 = 0;
  local_68 = '\0';
  iVar9 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x5d0) + 0x98) + 0x5d0);
  local_58 = param_2;
  if (*(int *)(param_2 + 0x198) != iVar9) {
    if (DAT_146ab3550 == '\0') {
      (*DAT_146ab4470)(iVar9);
    }
    else {
      (*DAT_146ab4a78)();
    }
    *(int *)(param_2 + 0x198) = iVar9;
    *(undefined1 *)(param_2 + 0x19c) =
         *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x5d0) + 0x98) + 0x5d4);
    MarkShaderParameterCachesDirty(*(undefined8 *)(param_1 + 0x5c8),0);
    *(undefined8 *)(param_1 + 0x5c0) = 0;
    local_68 = DAT_146ab3550;
  }
  if (DAT_146ab3552 == '\0') {
    lVar12 = *(longlong *)(param_1 + 0x5d0);
    bVar1 = *(byte *)(*(longlong *)(*(longlong *)(lVar12 + 0xa8) + 0x38) + 0xb3);
    lVar4 = *(longlong *)(lVar12 + 0xb8);
    bVar2 = *(byte *)(*(longlong *)(*(longlong *)(lVar12 + 0xb0) + 0x38) + 0xb3);
    if (DAT_146ab6383 == '\0') {
      if (lVar4 == 0) {
        local_64 = 0xffffffff;
      }
      else {
        local_64 = (uint)*(byte *)(*(longlong *)(lVar4 + 0x38) + 0xb3);
      }
      if (*(longlong *)(lVar12 + 0xc0) == 0) {
        local_60 = 0xffffffff;
      }
      else {
        local_60 = (uint)*(byte *)(*(longlong *)(*(longlong *)(lVar12 + 0xc0) + 0x38) + 0xb3);
      }
      if (*(longlong *)(lVar12 + 200) == 0) {
        local_5c = 0xffffffff;
      }
      else {
        local_5c = (uint)*(byte *)(*(longlong *)(*(longlong *)(lVar12 + 200) + 0x38) + 0xb3);
      }
    }
    else {
      local_5c = 0xffffffff;
      if (lVar4 == 0) {
        local_64 = 0xffffffff;
      }
      else {
        local_64 = (uint)*(byte *)(*(longlong *)(lVar4 + 0x38) + 0xb3);
      }
      local_60 = 0xffffffff;
      if (*(longlong *)(lVar12 + 0xc0) != 0) {
        local_60 = (uint)*(byte *)(*(longlong *)(*(longlong *)(lVar12 + 0xc0) + 0x38) + 0xb3);
      }
      if (*(longlong *)(lVar12 + 200) != 0) {
        local_5c = (uint)*(byte *)(*(longlong *)(*(longlong *)(lVar12 + 200) + 0x38) + 0xb3);
      }
    }
    lVar12 = *(longlong *)(lVar12 + 0x98);
    if (DAT_146ab3550 != '\0') {
      uVar3 = *(undefined4 *)(lVar12 + 0xc4);
      local_4e[0] = '\0';
      local_4e[1] = '\0';
      local_4e[2] = '\0';
      local_4e[3] = '\0';
      local_4e[4] = '\0';
      local_4e[5] = '\0';
      local_4e[6] = '\0';
      local_4e[7] = '\0';
      local_50 = 0x6276;
      iVar9 = iVar11;
      if (*(char *)(lVar12 + 0x9b) != '\0') {
        do {
          pcVar8 = local_4e;
          cVar6 = (char)(iVar9 / 10);
          if (9 < iVar9) {
            local_4e[0] = cVar6 + '0';
            pcVar8 = local_4e + 1;
          }
          *pcVar8 = (char)iVar9 + cVar6 * -10 + '0';
          pcVar8[1] = '\0';
          iVar7 = GetOpenGLProgramUniformBlockIndex(uVar3,&local_50);
          if (-1 < iVar7) {
            GetOpenGLProgramUniformBlockBinding(uVar3,iVar7,iVar9);
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)(uint)*(byte *)(lVar12 + 0x9b));
      }
    }
    local_70 = local_68;
    local_78 = 0;
    FUN_141e93560(param_1,local_58,(uint)bVar1,param_1 + 0x5e0);
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x5d0) + 0x98);
    if (DAT_146ab3550 != '\0') {
      uVar3 = *(undefined4 *)(lVar12 + 0x18c);
      local_4e[0] = '\0';
      local_4e[1] = '\0';
      local_4e[2] = '\0';
      local_4e[3] = '\0';
      local_4e[4] = '\0';
      local_4e[5] = '\0';
      local_4e[6] = '\0';
      local_4e[7] = '\0';
      local_50 = 0x6270;
      iVar9 = iVar11;
      if (*(char *)(lVar12 + 0x163) != '\0') {
        do {
          pcVar8 = local_4e;
          cVar6 = (char)(iVar9 / 10);
          if (9 < iVar9) {
            local_4e[0] = cVar6 + '0';
            pcVar8 = local_4e + 1;
          }
          *pcVar8 = (char)iVar9 + cVar6 * -10 + '0';
          pcVar8[1] = '\0';
          iVar7 = GetOpenGLProgramUniformBlockIndex(uVar3,&local_50);
          if (-1 < iVar7) {
            GetOpenGLProgramUniformBlockBinding(uVar3,iVar7,iVar9 + (uint)bVar1);
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)(uint)*(byte *)(lVar12 + 0x163));
      }
    }
    local_70 = local_68;
    local_78 = (uint)bVar1;
    FUN_141e93560(param_1,local_58,bVar2,param_1 + 0x730);
    uVar5 = local_64;
    uVar10 = (uint)bVar1 + (uint)bVar2;
    if (-1 < (int)local_64) {
      lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x5d0) + 0x98);
      if (DAT_146ab3550 != '\0') {
        uVar3 = *(undefined4 *)(lVar12 + 0x254);
        local_4e[0] = '\0';
        local_4e[1] = '\0';
        local_4e[2] = '\0';
        local_4e[3] = '\0';
        local_4e[4] = '\0';
        local_4e[5] = '\0';
        local_4e[6] = '\0';
        local_4e[7] = '\0';
        local_50 = 0x6267;
        iVar9 = iVar11;
        if (*(char *)(lVar12 + 0x22b) != '\0') {
          do {
            pcVar8 = local_4e;
            cVar6 = (char)(iVar9 / 10);
            if (9 < iVar9) {
              local_4e[0] = cVar6 + '0';
              pcVar8 = local_4e + 1;
            }
            *pcVar8 = (char)iVar9 + cVar6 * -10 + '0';
            pcVar8[1] = '\0';
            iVar7 = GetOpenGLProgramUniformBlockIndex(uVar3,&local_50);
            if (-1 < iVar7) {
              GetOpenGLProgramUniformBlockBinding(uVar3,iVar7,iVar9 + uVar10);
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 < (int)(uint)*(byte *)(lVar12 + 0x22b));
        }
      }
      local_70 = local_68;
      local_78 = uVar10;
      FUN_141e93560(param_1,local_58,uVar5,param_1 + 0x7a0);
      uVar10 = uVar10 + uVar5;
    }
    uVar5 = local_60;
    if (-1 < (int)local_60) {
      lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x5d0) + 0x98);
      if (DAT_146ab3550 != '\0') {
        uVar3 = *(undefined4 *)(lVar12 + 0x31c);
        local_4e[0] = '\0';
        local_4e[1] = '\0';
        local_4e[2] = '\0';
        local_4e[3] = '\0';
        local_4e[4] = '\0';
        local_4e[5] = '\0';
        local_4e[6] = '\0';
        local_4e[7] = '\0';
        local_50 = 0x6268;
        iVar9 = iVar11;
        if (*(char *)(lVar12 + 0x2f3) != '\0') {
          do {
            pcVar8 = local_4e;
            cVar6 = (char)(iVar9 / 10);
            if (9 < iVar9) {
              local_4e[0] = cVar6 + '0';
              pcVar8 = local_4e + 1;
            }
            *pcVar8 = (char)iVar9 + cVar6 * -10 + '0';
            pcVar8[1] = '\0';
            iVar7 = GetOpenGLProgramUniformBlockIndex(uVar3,&local_50);
            if (-1 < iVar7) {
              GetOpenGLProgramUniformBlockBinding(uVar3,iVar7,iVar9 + uVar10);
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 < (int)(uint)*(byte *)(lVar12 + 0x2f3));
        }
      }
      local_70 = local_68;
      local_78 = uVar10;
      FUN_141e93560(param_1,local_58,uVar5,param_1 + 0x650);
      uVar10 = uVar10 + uVar5;
    }
    uVar5 = local_5c;
    lVar12 = local_58;
    if (-1 < (int)local_5c) {
      lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x5d0) + 0x98);
      if (DAT_146ab3550 != '\0') {
        uVar3 = *(undefined4 *)(lVar12 + 0x3e4);
        local_4e[0] = '\0';
        local_4e[1] = '\0';
        local_4e[2] = '\0';
        local_4e[3] = '\0';
        local_4e[4] = '\0';
        local_4e[5] = '\0';
        local_4e[6] = '\0';
        local_4e[7] = '\0';
        local_50 = 0x6264;
        if (*(char *)(lVar12 + 0x3bb) != '\0') {
          do {
            pcVar8 = local_4e;
            cVar6 = (char)(iVar11 / 10);
            if (9 < iVar11) {
              local_4e[0] = cVar6 + '0';
              pcVar8 = local_4e + 1;
            }
            *pcVar8 = (char)iVar11 + cVar6 * -10 + '0';
            pcVar8[1] = '\0';
            iVar9 = GetOpenGLProgramUniformBlockIndex(uVar3,&local_50);
            if (-1 < iVar9) {
              GetOpenGLProgramUniformBlockBinding(uVar3,iVar9,iVar11 + uVar10);
            }
            iVar11 = iVar11 + 1;
          } while (iVar11 < (int)(uint)*(byte *)(lVar12 + 0x3bb));
        }
      }
      lVar12 = local_58;
      local_70 = local_68;
      local_78 = uVar10;
      FUN_141e93560(param_1,local_58,uVar5,param_1 + 0x6c0);
    }
    if (DAT_146ab49a0 != 0) {
      FUN_141eaa400(param_1,lVar12,*(longlong *)(*(longlong *)(param_1 + 0x5d0) + 0x98) + 0x620);
    }
  }
  return;
}



// FUNCTION 141e93380 FUN_141e93380 body=438 status=ok
// SIG undefined FUN_141e93380(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141e93380(int param_1,undefined4 param_2,ushort param_3)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  bool bVar5;
  undefined1 auStack_58 [32];
  char local_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  switch(DAT_146ab62cc) {
  default:
    local_38[0] = '\0';
    local_38[1] = '\0';
    local_38[2] = '\0';
    local_38[3] = '\0';
    local_38[4] = '\0';
    local_38[5] = '\0';
    local_38[6] = '\0';
    local_38[7] = '\0';
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    if (param_1 == 0x8b30) {
      uVar3 = 0;
      uVar2 = uVar3;
      do {
        cVar1 = "out_Target"[uVar2];
        local_38[uVar2] = cVar1;
        uVar2 = uVar2 + 1;
      } while (cVar1 != '\0');
      uVar4 = param_3 & 0x7fff;
      if ((param_3 & 0x7fff) != 0) {
        do {
          uVar2 = local_30;
          if ((uVar4 & 1) != 0) {
            if ((uint)uVar3 < 10) {
              uVar2 = local_30 >> 0x18;
              local_30._0_3_ = CONCAT12((char)uVar3 + '0',(undefined2)local_30);
              local_30 = CONCAT53((int5)uVar2,(undefined3)local_30) & 0xffffffff00ffffff;
            }
            else {
              local_30._0_3_ = CONCAT12(0x31,(undefined2)local_30);
              local_30._0_4_ =
                   CONCAT13((char)uVar3 + (char)(uVar3 / 10) * -10 + '0',(undefined3)local_30);
              local_30 = CONCAT44((int)(uVar2 >> 0x20),(undefined4)local_30) & 0xffffff00ffffffff;
            }
            (*DAT_146ab4380)(param_2,uVar3,local_38);
          }
          uVar3 = (ulonglong)((uint)uVar3 + 1);
          bVar5 = 1 < uVar4;
          uVar4 = uVar4 >> 1;
        } while (bVar5);
      }
    }
    else if (param_1 == 0x8b31) {
      uVar3 = 0;
      uVar2 = uVar3;
      do {
        cVar1 = "in_ATTRIBUTE"[uVar2];
        local_38[uVar2] = cVar1;
        uVar2 = uVar2 + 1;
      } while (cVar1 != '\0');
      uVar4 = (uint)param_3;
      if (param_3 != 0) {
        do {
          uVar2 = local_30;
          if ((uVar4 & 1) != 0) {
            if ((uint)uVar3 < 10) {
              uVar2 = local_30 >> 0x28;
              local_30._0_5_ = CONCAT14((char)uVar3 + '0',(undefined4)local_30);
              local_30 = CONCAT35((int3)uVar2,(undefined5)local_30) & 0xffff00ffffffffff;
            }
            else {
              local_30._0_5_ = CONCAT14(0x31,(undefined4)local_30);
              local_30._0_6_ =
                   CONCAT15((char)uVar3 + (char)(uVar3 / 10) * -10 + '0',(undefined5)local_30);
              local_30 = CONCAT26((short)(uVar2 >> 0x30),(undefined6)local_30) & 0xff00ffffffffffff;
            }
            (*DAT_146ab4378)(param_2,uVar3,local_38);
          }
          uVar3 = (ulonglong)((uint)uVar3 + 1);
          bVar5 = 1 < uVar4;
          uVar4 = uVar4 >> 1;
        } while (bVar5);
      }
    }
    break;
  case 6:
  case 0xd:
  case 0xf:
  case 0x18:
    break;
  }
  return;
}



// FUNCTION 141e93560 FUN_141e93560 body=562 status=ok
// SIG undefined FUN_141e93560(void)

void FUN_141e93560(longlong param_1,longlong param_2,int param_3,longlong param_4,int param_5,
                  char param_6)

{
  int *_Dst;
  longlong lVar1;
  void *_Dst_00;
  undefined4 uVar2;
  longlong lVar3;
  int *piVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
  if (0 < param_3) {
    lVar3 = 0;
    uVar5 = (ulonglong)param_5;
    piVar4 = (int *)(param_2 + (uVar5 + 0xb0) * 4);
    do {
      lVar1 = *(longlong *)(param_4 + lVar3 * 8);
      if (lVar1 == 0) {
        _Dst = (int *)(param_1 + 0x360);
        if (*_Dst == 0) {
          _Dst_00 = (void *)FMemory::Malloc();
          _guard_xfg_dispatch_icall_nop(_Dst_00,0,0x10000);
          iVar6 = 0x400 - DAT_1464c97e0;
          if (iVar6 < 2) {
            _guard_xfg_dispatch_icall_nop(_Dst,&DAT_146ab1550 + DAT_1464c97e0,(longlong)iVar6 * 4);
            (*DAT_146ab4300)(0x400,&DAT_146ab1550);
            iVar7 = 1 - iVar6;
            _guard_xfg_dispatch_icall_nop(_Dst + iVar6,&DAT_146ab1550,(longlong)iVar7 << 2);
          }
          else {
            *_Dst = (&DAT_146ab1550)[DAT_1464c97e0];
            iVar7 = DAT_1464c97e0 + 1;
          }
          iVar6 = *_Dst;
          DAT_1464c97e0 = iVar7;
          if (*(int *)(param_2 + 0x42c) != iVar6) {
            (*DAT_146ab42e8)(0x8a11,iVar6);
            *(int *)(param_2 + 0x42c) = iVar6;
          }
          (*DAT_146ab4310)(0x8a11,0x10000,_Dst_00,0x88e4);
          FMemory::Free(_Dst_00);
          AK::MemoryMgr::StartProfileThreadUsage(0x8a11);
        }
        uVar2 = 0x10000;
        iVar6 = *_Dst;
      }
      else {
        iVar6 = *(int *)(lVar1 + 0x28);
        uVar2 = *(undefined4 *)(lVar1 + 0x20);
      }
      if ((param_6 != '\0') || (((iVar6 != 0 && (piVar4[-0x48] != iVar6)) || (*piVar4 != 0)))) {
        (*DAT_146ab4810)(0x8a11,uVar5 & 0xffffffff,iVar6,0,uVar2);
        piVar4[-0x48] = iVar6;
        *piVar4 = 0;
        *(int *)(param_2 + 0x42c) = iVar6;
      }
      uVar5 = (ulonglong)((int)uVar5 + 1);
      lVar3 = lVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (lVar3 < param_3);
  }
  return;
}



// FUNCTION 141e937a0 CStringCountOccurances body=116 status=ok
// SIG undefined CStringCountOccurances(void)

int `anonymous_namespace'::CStringCountOccurances(longlong *param_1,char *param_2)

{
  char *pcVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (param_2[lVar2] != '\0');
  iVar3 = 0;
  for (pcVar1 = ::_guard_xfg_dispatch_icall_nop((char *)*param_1,param_2); pcVar1 != (char *)0x0;
      pcVar1 = ::_guard_xfg_dispatch_icall_nop
                         ((char *)((longlong)(((int)pcVar1 - (int)*param_1) + (int)lVar2) + *param_1
                                  ),param_2)) {
    iVar3 = iVar3 + 1;
  }
  return iVar3;
}



// FUNCTION 141e93820 Call body=30 status=ok
// SIG undefined Call(void)

void UE4Function_Private::
     TFunctionRefCaller<<lambda_0596d280bceb28568d530a6b7b114bb1>,void___cdecl(void)>::Call
               (undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = <lambda_e846313f32584d9ff267a8bebf64506e>::operator()(param_1 + 1);
  *(undefined8 *)*param_1 = uVar1;
  return;
}



// FUNCTION 141e93880 Call body=61 status=ok
// SIG undefined Call(void)

void UE4Function_Private::
     TFunctionRefCaller<<lambda_605314e1c5d7e5c150287cedfbc14450>,void___cdecl(void)>::Call
               (longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + 0x38) != 0) {
    (*DAT_146ab47e8)();
    *(undefined8 *)(lVar1 + 0x38) = 0;
  }
  uVar2 = (*DAT_146ab47f8)(0x9117,0);
  *(undefined8 *)(lVar1 + 0x38) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000141e938b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_146ab4028)();
  return;
}



// FUNCTION 141e938e0 FUN_141e938e0 body=30 status=ok
// SIG undefined FUN_141e938e0(void)

void FUN_141e938e0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141e8fb30(param_1 + 1);
  *(undefined8 *)*param_1 = uVar1;
  return;
}



// FUNCTION 141e93980 FUN_141e93980 body=60 status=ok
// SIG undefined FUN_141e93980(void)

void FUN_141e93980(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = **(undefined4 **)(param_1 + 0x10);
  uVar2 = **(undefined8 **)(param_1 + 8);
  if (DAT_146ab6383 != '\0') {
    IsInRenderingThread();
  }
  TOpenGLTexture<FOpenGLBaseTexture2D>::Unlock(uVar2,uVar1,0);
  return;
}



// FUNCTION 141e939c0 FUN_141e939c0 body=30 status=ok
// SIG undefined FUN_141e939c0(void)

void FUN_141e939c0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141e8f6b0(param_1 + 1);
  *(undefined8 *)*param_1 = uVar1;
  return;
}



// FUNCTION 141e93a30 FUN_141e93a30 body=61 status=ok
// SIG undefined FUN_141e93a30(void)

void FUN_141e93a30(undefined4 *param_1)

{
  FUN_141e747d0(*param_1);
  (*DAT_146ab42f8)(1,param_1);
  if ((*(longlong *)(param_1 + 4) != 0) && (param_1[6] != 0)) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 141e93b10 FUN_141e93b10 body=110 status=ok
// SIG undefined FUN_141e93b10(void)

void FUN_141e93b10(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    lVar2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x48))(plVar1);
    if (DAT_146ab6383 != '\0') {
      IsInRenderingThread();
    }
    lVar2 = (**(code **)(*plVar1 + 0x48))(plVar1);
  }
  if ((DAT_146ab4908 != (code *)0x0) && (DAT_146ab053a != '\0')) {
    (*DAT_146ab4908)(0x1702,*(undefined4 *)(lVar2 + 0x10),0xffffffff,param_1[1]);
  }
  return;
}



// FUNCTION 141e93ba0 FUN_141e93ba0 body=39 status=ok
// SIG undefined FUN_141e93ba0(void)

void FUN_141e93ba0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  *(undefined1 *)(lVar1 + 0x3d) = 0;
  PlatformGetNewRenderQuery(lVar1 + 0x18,lVar1 + 0x20);
  FUN_141e745c0(lVar1);
  return;
}



// FUNCTION 141e93c10 FUN_141e93c10 body=47 status=ok
// SIG undefined FUN_141e93c10(void)

void FUN_141e93c10(undefined8 *param_1)

{
  GLCopyAsyncTexture2D
            (*param_1,param_1[1],*(undefined4 *)(param_1 + 2),
             *(undefined4 *)((longlong)param_1 + 0x14),param_1[3],param_1[4]);
  return;
}



// FUNCTION 141e93c90 Call body=48 status=ok
// SIG undefined Call(void)

void UE4Function_Private::
     TFunctionRefCaller<<lambda_8b91daca7f0e2bc64d19f1bc5a455890>,void___cdecl(void)>::Call
               (undefined8 *param_1)

{
  FOpenGLDynamicRHI::GetRenderQueryResult_OnThisThread(*param_1,param_1[1],0);
  FGLQueryBatcher::Flush(&DAT_1464c9830,*param_1,param_1[1]);
  return;
}



// FUNCTION 141e93ce0 FUN_141e93ce0 body=33 status=ok
// SIG undefined FUN_141e93ce0(void)

void FUN_141e93ce0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)*param_1 + 8))();
  TOpenGLTexture<FOpenGLBaseTexture2D>::Unlock(uVar1,0,0);
  return;
}



// FUNCTION 141e93d10 FUN_141e93d10 body=401 status=ok
// SIG undefined FUN_141e93d10(void)

void FUN_141e93d10(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  
  if (*(char *)(param_1 + 0x18c) != '\0') {
    uVar4 = 0;
    puVar5 = *(undefined8 **)(param_1 + 0xf0);
    uVar6 = (longlong)*(int *)(param_1 + 0xf8) & 0x1fffffffffffffff;
    if (puVar5 + *(int *)(param_1 + 0xf8) < puVar5) {
      uVar6 = uVar4;
    }
    if (uVar6 != 0) {
      do {
        iVar2 = DAT_146ab3e30;
        lVar3 = (longlong)DAT_146ab3e30;
        uVar1 = *puVar5;
        DAT_146ab3e30 = DAT_146ab3e30 + 1;
        if (DAT_146ab3e34 < DAT_146ab3e30) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146ab3e28,iVar2);
        }
        puVar5 = puVar5 + 1;
        uVar4 = uVar4 + 1;
        *(undefined8 *)(DAT_146ab3e28 + lVar3 * 8) = uVar1;
      } while (uVar4 != uVar6);
    }
    uVar4 = 0;
    puVar5 = *(undefined8 **)(param_1 + 0x100);
    uVar6 = (longlong)*(int *)(param_1 + 0x108) & 0x1fffffffffffffff;
    if (puVar5 + *(int *)(param_1 + 0x108) < puVar5) {
      uVar6 = uVar4;
    }
    if (uVar6 != 0) {
      do {
        iVar2 = DAT_146ab3e30;
        lVar3 = (longlong)DAT_146ab3e30;
        uVar1 = *puVar5;
        DAT_146ab3e30 = DAT_146ab3e30 + 1;
        if (DAT_146ab3e34 < DAT_146ab3e30) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146ab3e28,iVar2);
        }
        puVar5 = puVar5 + 1;
        uVar4 = uVar4 + 1;
        *(undefined8 *)(DAT_146ab3e28 + lVar3 * 8) = uVar1;
      } while (uVar4 != uVar6);
    }
    *(undefined4 *)(param_1 + 0xf8) = 0;
    if (0x7fffffff < *(uint *)(param_1 + 0xfc)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0xf0,0);
    }
    *(undefined4 *)(param_1 + 0x108) = 0;
    if ((*(int *)(param_1 + 0x10c) < 0) && (*(int *)(param_1 + 0x10c) != 0)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x100,0);
    }
    *(undefined4 *)(param_1 + 0x188) = 0;
    *(undefined1 *)(param_1 + 0x18c) = 0;
  }
  return;
}



// FUNCTION 141e93eb0 FUN_141e93eb0 body=1716 status=ok
// SIG undefined FUN_141e93eb0(void)

void FUN_141e93eb0(longlong param_1,longlong param_2,uint param_3,int param_4,int param_5)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  uint uVar15;
  undefined4 uVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  undefined8 *puVar21;
  uint uVar22;
  int iVar23;
  longlong *plVar24;
  longlong lVar25;
  longlong lVar26;
  undefined8 in_stack_ffffffffffffff08;
  undefined8 uVar27;
  undefined4 uVar28;
  undefined8 in_stack_ffffffffffffff20;
  undefined4 uVar29;
  byte local_c4;
  ulonglong local_b0;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined1 *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  
  iVar3 = *(int *)(param_1 + 0x3c);
  lVar11 = (longlong)iVar3;
  lVar25 = lVar11 * 0x1c;
  local_b0 = (ulonglong)param_3;
  local_c4 = (byte)(*(uint *)(param_1 + 0x40) >> 4) & 1;
  uVar4 = (&DAT_1464ca1b8)[lVar11 * 10];
  uVar5 = (&DAT_1464ca1bc)[lVar11 * 10];
  iVar6 = (&DAT_1464ca1c4)[lVar11 * 10];
  lVar12 = FUN_141e711c0(*(undefined8 *)(param_1 + 0x70));
  if (param_3 != 0) {
    param_4 = param_4 - param_5;
    do {
      uVar29 = (undefined4)((ulonglong)in_stack_ffffffffffffff20 >> 0x20);
      uVar28 = (undefined4)((ulonglong)in_stack_ffffffffffffff08 >> 0x20);
      uVar8 = *(uint *)(param_1 + 0x60) >> ((byte)param_5 & 0x1f);
      uVar18 = 1;
      if (uVar8 != 0) {
        uVar18 = uVar8;
      }
      uVar9 = *(uint *)(param_1 + 100) >> ((byte)param_5 & 0x1f);
      uVar8 = 1;
      if (uVar9 != 0) {
        uVar8 = uVar9;
      }
      uVar9 = uVar4;
      if (uVar4 <= uVar18) {
        uVar9 = uVar18;
      }
      uVar22 = ((uVar9 - 1) + uVar4) / uVar4;
      uVar9 = uVar5;
      if (uVar5 <= uVar8) {
        uVar9 = uVar8;
      }
      uVar9 = (uVar5 - 1) + uVar9;
      uVar10 = uVar9 / uVar5;
      uVar19 = uVar10;
      uVar15 = uVar22;
      if (iVar3 - 0x1eU < 2) {
        uVar15 = 2;
        if (1 < uVar22) {
          uVar15 = uVar22;
        }
        uVar19 = 2;
        if (1 < uVar10) {
          uVar19 = uVar10;
        }
      }
      iVar20 = uVar19 * uVar15 * iVar6;
      iVar23 = 1;
      if ((*(byte *)(param_1 + 0xe8) & 1) != 0) {
        iVar23 = 6;
      }
      lVar26 = (longlong)(iVar23 * param_5);
      if (*(longlong *)(*(longlong *)(param_1 + 0xa0) + lVar26 * 8) == 0) {
        puVar13 = (undefined8 *)operator_new(0x48,(ulonglong)uVar9 % (ulonglong)uVar5);
        if (puVar13 != (undefined8 *)0x0) {
          *(uint *)(puVar13 + 5) = *(uint *)(puVar13 + 5) & 0xfffffff0;
          *puVar13 = &PTR_FUN_144eb66d0;
          *(undefined4 *)(puVar13 + 1) = 0;
          puVar13[4] = 0;
          *(undefined8 *)((longlong)puVar13 + 0x2c) = 0;
          puVar13[7] = 0;
          *(int *)(puVar13 + 2) = iVar20;
          *(undefined8 *)((longlong)puVar13 + 0x14) = 2;
          *(int *)(puVar13 + 8) = iVar20;
          if ((DAT_146ab6383 == '\0') || (cVar7 = FUN_1415e13e0(), cVar7 != '\0')) {
            TOpenGLBuffer<FOpenGLBasePixelBuffer,35052,&CachedBindPixelUnpackBuffer>::CreateGLBuffer
                      (puVar13,0,0,0);
          }
          else {
            puVar21 = (undefined8 *)((longlong)DAT_146ab6ea8 + 0xfU & 0xfffffffffffffff0);
            puVar14 = puVar21 + 0xc;
            if (DAT_146ab6eb0 < puVar14) {
              FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,0x70);
              puVar21 = (undefined8 *)((longlong)DAT_146ab6ea8 + 0xfU & 0xfffffffffffffff0);
              puVar14 = puVar21 + 0xc;
            }
            DAT_146ab6e8c = DAT_146ab6e8c + 1;
            DAT_146ab6ea8 = puVar14;
            *DAT_146ab6e80 = puVar21;
            local_58 = (longlong *)0x0;
            local_48 = 0;
            DAT_146ab6e80 = puVar21 + 1;
            puVar14 = (undefined8 *)FUN_140438ef0(0x20,local_78);
            if (puVar14 != (undefined8 *)0x0) {
              local_a0 = SUB84(puVar13,0);
              uStack_9c = (undefined4)((ulonglong)puVar13 >> 0x20);
              *(undefined4 *)(puVar14 + 1) = local_a0;
              *(undefined4 *)((longlong)puVar14 + 0xc) = uStack_9c;
              *(undefined4 *)(puVar14 + 2) = 0;
              *(undefined4 *)((longlong)puVar14 + 0x14) = 0;
              *puVar14 = &PTR_FUN_144eb6788;
              puVar14[3] = 0;
            }
            local_88[0] = &LAB_141e6de70;
            puVar21[1] = 0;
            *puVar21 = &PTR_ExecuteAndDestruct_144eb5ab0;
            TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar21 + 2,local_88);
            if (local_48 != 0) {
              plVar24 = local_78;
              if (local_58 != (longlong *)0x0) {
                plVar24 = local_58;
              }
              if (plVar24 != (longlong *)0x0) {
                (**(code **)(*plVar24 + 0x10))(plVar24,0);
              }
            }
            if (local_58 != (longlong *)0x0) {
              FMemory::Free();
            }
          }
        }
        puVar14 = *(undefined8 **)(*(longlong *)(param_1 + 0xa0) + lVar26 * 8);
        *(undefined8 **)(*(longlong *)(param_1 + 0xa0) + lVar26 * 8) = puVar13;
        if (puVar13 != (undefined8 *)0x0) {
          *(int *)(puVar13 + 1) = *(int *)(puVar13 + 1) + 1;
        }
        if (puVar14 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar14 + 1);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            (**(code **)*puVar14)(puVar14,1);
          }
        }
      }
      puVar13 = *(undefined8 **)(*(longlong *)(param_1 + 0xa0) + lVar26 * 8);
      if (puVar13 != (undefined8 *)0x0) {
        *(int *)(puVar13 + 1) = *(int *)(puVar13 + 1) + 1;
      }
      iVar23 = DAT_1464c97fc + -1;
      if ((*(int *)(*(longlong *)(lVar12 + 8) + 0x10 + (longlong)iVar23 * 0x28) !=
           *(int *)(param_2 + 0x84)) ||
         (*(int *)(*(longlong *)(lVar12 + 8) + 0x14 + (longlong)iVar23 * 0x28) !=
          *(int *)(param_2 + 0x80))) {
        uVar27 = CONCAT44(uVar28,*(int *)(param_2 + 0x80));
        FUN_141e6dbc0(*(undefined8 *)(param_1 + 0x70),lVar12,iVar23,*(int *)(param_2 + 0x84),uVar27,
                      0xffffffff,*(undefined4 *)(param_1 + 0x34));
        uVar28 = (undefined4)((ulonglong)uVar27 >> 0x20);
      }
      (*DAT_146ab42e8)(0x88eb,*(undefined4 *)(puVar13 + 3));
      if (*(char *)(&DAT_146ab3648 + lVar11 * 0xe) == '\0') {
        (*DAT_146ab40d0)(0xd05,1);
        uVar16 = 0x8515;
        if ((*(byte *)(param_2 + 0xe8) & 1) == 0) {
          uVar16 = *(undefined4 *)(param_2 + 0x84);
        }
        uVar28 = 0;
        (*DAT_146ab4078)(uVar16,param_4 + param_5,*(undefined4 *)((longlong)&DAT_146ab3640 + lVar25)
                         ,*(undefined4 *)((longlong)&DAT_146ab3640 + lVar25 + 4),0);
        (*DAT_146ab40d0)(0xd05,4);
      }
      else {
        uVar16 = 0x8515;
        if ((*(byte *)(param_2 + 0xe8) & 1) == 0) {
          uVar16 = *(undefined4 *)(param_2 + 0x84);
        }
        (*DAT_146ab4268)(uVar16,param_4 + param_5,0);
      }
      FUN_141e6dae0(*(undefined4 *)(puVar13 + 3));
      iVar23 = DAT_1464c97fc + -1;
      if ((*(int *)(*(longlong *)(lVar12 + 8) + 0x10 + (longlong)iVar23 * 0x28) !=
           *(int *)(param_1 + 0x84)) ||
         (*(int *)(*(longlong *)(lVar12 + 8) + 0x14 + (longlong)iVar23 * 0x28) !=
          *(int *)(param_1 + 0x80))) {
        uVar27 = CONCAT44(uVar28,*(int *)(param_1 + 0x80));
        FUN_141e6dbc0(*(undefined8 *)(param_1 + 0x70),lVar12,iVar23,*(int *)(param_1 + 0x84),uVar27,
                      0xffffffff,*(undefined4 *)(param_1 + 0x34));
        uVar28 = (undefined4)((ulonglong)uVar27 >> 0x20);
      }
      if (*(char *)(&DAT_146ab3648 + lVar11 * 0xe) == '\0') {
        (*DAT_146ab40d0)(0xcf5,1);
        uVar16 = 0x8515;
        if ((*(byte *)(param_1 + 0xe8) & 1) == 0) {
          uVar16 = *(undefined4 *)(param_1 + 0x84);
        }
        in_stack_ffffffffffffff20 =
             CONCAT44(uVar29,*(undefined4 *)((longlong)&DAT_146ab3640 + lVar25 + 4));
        in_stack_ffffffffffffff08 = CONCAT44(uVar28,uVar18);
        (*DAT_146ab4178)(uVar16,param_5,0,0,in_stack_ffffffffffffff08,uVar8,
                         *(undefined4 *)((longlong)&DAT_146ab3640 + lVar25),
                         in_stack_ffffffffffffff20,0);
        (*DAT_146ab40d0)(0xcf5);
      }
      else {
        uVar9 = *(uint *)(param_1 + 0xe8) & 1;
        iVar23 = 1;
        if (uVar9 != 0) {
          iVar23 = 6;
        }
        uVar22 = iVar23 * param_5;
        lVar17 = *(longlong *)(param_1 + 0xd8);
        if (*(longlong *)(param_1 + 0xd8) == 0) {
          lVar17 = param_1 + 0xd0;
        }
        uVar15 = uVar22;
        if ((int)uVar22 < 0) {
          uVar15 = uVar22 + 0x1f;
        }
        uVar16 = 0x8515;
        if ((*(uint *)(lVar17 + (longlong)((int)uVar15 >> 5) * 4) >> (uVar22 & 0x1f) & 1) == 0) {
          if (uVar9 == 0) {
            uVar16 = *(undefined4 *)(param_1 + 0x84);
          }
          in_stack_ffffffffffffff20 = 0;
          in_stack_ffffffffffffff08 = CONCAT44(uVar28,uVar8);
          (*DAT_146ab4240)(uVar16,param_5,
                           *(undefined4 *)
                            ((longlong)&DAT_146ab3630 + (ulonglong)local_c4 * 4 + lVar25),uVar18,
                           in_stack_ffffffffffffff08,0,*(undefined4 *)(puVar13 + 2),0);
          iVar23 = 1;
          if ((*(byte *)(param_1 + 0xe8) & 1) != 0) {
            iVar23 = 6;
          }
          iVar23 = iVar23 * param_5;
          lVar17 = *(longlong *)(param_1 + 0xd8);
          if (*(longlong *)(param_1 + 0xd8) == 0) {
            lVar17 = param_1 + 0xd0;
          }
          iVar20 = iVar23;
          if (iVar23 < 0) {
            iVar20 = iVar23 + 0x1f;
          }
          puVar2 = (uint *)(lVar17 + (longlong)(iVar20 >> 5) * 4);
          *puVar2 = *puVar2 | 1 << ((byte)iVar23 & 0x1f);
        }
        else {
          if (uVar9 == 0) {
            uVar16 = *(undefined4 *)(param_1 + 0x84);
          }
          in_stack_ffffffffffffff20 = CONCAT44(uVar29,*(undefined4 *)(puVar13 + 2));
          in_stack_ffffffffffffff08 = CONCAT44(uVar28,uVar18);
          (*DAT_146ab4258)(uVar16,param_5,0,0,in_stack_ffffffffffffff08,uVar8,
                           *(undefined4 *)
                            ((longlong)&DAT_146ab3630 + (ulonglong)local_c4 * 4 + lVar25),
                           in_stack_ffffffffffffff20,0);
        }
      }
      puVar14 = *(undefined8 **)(*(longlong *)(param_1 + 0xa0) + lVar26 * 8);
      *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + lVar26 * 8) = 0;
      if (puVar14 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar14 + 1);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar14)();
        }
      }
      piVar1 = (int *)(puVar13 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar13)(puVar13);
      }
      param_5 = param_5 + 1;
      local_b0 = local_b0 - 1;
    } while (local_b0 != 0);
  }
  (*DAT_146ab42e8)(0x88eb,0);
  FUN_141e6dae0(0);
  return;
}



// FUNCTION 141e94570 FUN_141e94570 body=2011 status=ok
// SIG undefined FUN_141e94570(void)

void FUN_141e94570(longlong param_1,longlong param_2,uint param_3,int param_4,int param_5)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  uint uVar21;
  int iVar22;
  undefined8 *puVar23;
  int iVar24;
  longlong *plVar25;
  longlong lVar26;
  int iVar27;
  uint uVar28;
  byte local_res8;
  undefined8 in_stack_fffffffffffffed8;
  undefined8 uVar29;
  undefined4 uVar30;
  undefined8 in_stack_fffffffffffffef0;
  undefined4 uVar31;
  undefined8 in_stack_fffffffffffffef8;
  undefined4 uVar32;
  ulonglong local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined1 *local_98 [2];
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  
  iVar4 = *(int *)(param_1 + 0x3c);
  lVar14 = (longlong)iVar4;
  lVar26 = lVar14 * 0x1c;
  local_res8 = (byte)(*(uint *)(param_1 + 0x40) >> 4) & 1;
  uVar5 = (&DAT_1464ca1b8)[lVar14 * 10];
  uVar6 = (&DAT_1464ca1bc)[lVar14 * 10];
  iVar7 = (&DAT_1464ca1c4)[lVar14 * 10];
  lVar15 = FUN_141e711c0(*(undefined8 *)(param_1 + 0x70),1);
  uVar28 = 0;
  do {
    local_c0 = (ulonglong)param_3;
    uVar18 = 1;
    if (*(uint *)(param_1 + 0x68) != 0) {
      uVar18 = *(uint *)(param_1 + 0x68);
    }
    if (uVar18 <= uVar28) {
      (*DAT_146ab42e8)(0x88eb,0);
      FUN_141e6dae0(0);
      return;
    }
    if (param_3 != 0) {
      iVar27 = param_5;
      do {
        uVar31 = (undefined4)((ulonglong)in_stack_fffffffffffffef0 >> 0x20);
        uVar30 = (undefined4)((ulonglong)in_stack_fffffffffffffed8 >> 0x20);
        uVar9 = *(uint *)(param_1 + 0x60) >> ((byte)iVar27 & 0x1f);
        uVar18 = 1;
        if (uVar9 != 0) {
          uVar18 = uVar9;
        }
        uVar10 = *(uint *)(param_1 + 100) >> ((byte)iVar27 & 0x1f);
        uVar9 = 1;
        if (uVar10 != 0) {
          uVar9 = uVar10;
        }
        uVar10 = uVar5;
        if (uVar5 <= uVar18) {
          uVar10 = uVar18;
        }
        uVar10 = ((uVar10 - 1) + uVar5) / uVar5;
        uVar19 = uVar6;
        if (uVar6 <= uVar9) {
          uVar19 = uVar9;
        }
        uVar11 = (uVar19 - 1) + uVar6;
        uVar12 = uVar11 / uVar6;
        uVar21 = uVar12;
        uVar19 = uVar10;
        if (iVar4 - 0x1eU < 2) {
          uVar19 = 2;
          if (1 < uVar10) {
            uVar19 = uVar10;
          }
          uVar21 = 2;
          if (1 < uVar12) {
            uVar21 = uVar12;
          }
        }
        iVar22 = uVar21 * uVar19 * iVar7;
        iVar24 = 1;
        if (*(int *)(param_1 + 0x68) != 0) {
          iVar24 = *(int *)(param_1 + 0x68);
        }
        iVar13 = 1;
        if ((*(byte *)(param_1 + 0xe8) & 1) != 0) {
          iVar13 = 6;
        }
        lVar3 = (longlong)(int)(iVar13 * iVar24 * iVar27 + uVar28) * 8;
        if (*(longlong *)(lVar3 + *(longlong *)(param_1 + 0xa0)) == 0) {
          puVar16 = (undefined8 *)operator_new(0x48,(ulonglong)uVar11 % (ulonglong)uVar6);
          if (puVar16 != (undefined8 *)0x0) {
            *(uint *)(puVar16 + 5) = *(uint *)(puVar16 + 5) & 0xfffffff0;
            *puVar16 = &PTR_FUN_144eb66d0;
            *(undefined4 *)(puVar16 + 1) = 0;
            puVar16[4] = 0;
            *(undefined8 *)((longlong)puVar16 + 0x2c) = 0;
            puVar16[7] = 0;
            *(int *)(puVar16 + 2) = iVar22;
            *(undefined8 *)((longlong)puVar16 + 0x14) = 2;
            *(int *)(puVar16 + 8) = iVar22;
            if ((DAT_146ab6383 == '\0') || (cVar8 = FUN_1415e13e0(), cVar8 != '\0')) {
              TOpenGLBuffer<FOpenGLBasePixelBuffer,35052,&CachedBindPixelUnpackBuffer>::
              CreateGLBuffer(puVar16,0,0,0);
            }
            else {
              puVar23 = (undefined8 *)((longlong)DAT_146ab6ea8 + 0xfU & 0xfffffffffffffff0);
              puVar17 = puVar23 + 0xc;
              if (DAT_146ab6eb0 < puVar17) {
                FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,0x70);
                puVar23 = (undefined8 *)((longlong)DAT_146ab6ea8 + 0xfU & 0xfffffffffffffff0);
                puVar17 = puVar23 + 0xc;
              }
              DAT_146ab6e8c = DAT_146ab6e8c + 1;
              DAT_146ab6ea8 = puVar17;
              *DAT_146ab6e80 = puVar23;
              local_68 = (longlong *)0x0;
              local_58 = 0;
              DAT_146ab6e80 = puVar23 + 1;
              puVar17 = (undefined8 *)FUN_140438ef0(0x20);
              if (puVar17 != (undefined8 *)0x0) {
                local_b8 = SUB84(puVar16,0);
                uStack_b4 = (undefined4)((ulonglong)puVar16 >> 0x20);
                *(undefined4 *)(puVar17 + 1) = local_b8;
                *(undefined4 *)((longlong)puVar17 + 0xc) = uStack_b4;
                *(undefined4 *)(puVar17 + 2) = 0;
                *(undefined4 *)((longlong)puVar17 + 0x14) = 0;
                *puVar17 = &PTR_FUN_144eb6788;
                puVar17[3] = 0;
              }
              local_98[0] = &LAB_141e6de70;
              puVar23[1] = 0;
              *puVar23 = &PTR_ExecuteAndDestruct_144eb5ab0;
              TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar23 + 2,local_98);
              if (local_58 != 0) {
                plVar25 = local_88;
                if (local_68 != (longlong *)0x0) {
                  plVar25 = local_68;
                }
                if (plVar25 != (longlong *)0x0) {
                  (**(code **)(*plVar25 + 0x10))(plVar25,0);
                }
              }
              if (local_68 != (longlong *)0x0) {
                FMemory::Free();
              }
            }
          }
          puVar17 = *(undefined8 **)(lVar3 + *(longlong *)(param_1 + 0xa0));
          *(undefined8 **)(lVar3 + *(longlong *)(param_1 + 0xa0)) = puVar16;
          if (puVar16 != (undefined8 *)0x0) {
            *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
          }
          if (puVar17 != (undefined8 *)0x0) {
            piVar1 = (int *)(puVar17 + 1);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              (**(code **)*puVar17)(puVar17,1);
            }
          }
        }
        puVar16 = *(undefined8 **)(lVar3 + *(longlong *)(param_1 + 0xa0));
        if (puVar16 != (undefined8 *)0x0) {
          *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
        }
        iVar24 = DAT_1464c97fc + -1;
        if ((*(int *)(*(longlong *)(lVar15 + 8) + 0x10 + (longlong)iVar24 * 0x28) !=
             *(int *)(param_2 + 0x84)) ||
           (*(int *)(*(longlong *)(lVar15 + 8) + 0x14 + (longlong)iVar24 * 0x28) !=
            *(int *)(param_2 + 0x80))) {
          uVar29 = CONCAT44(uVar30,*(int *)(param_2 + 0x80));
          FUN_141e6dbc0(*(undefined8 *)(param_1 + 0x70),lVar15,iVar24,*(int *)(param_2 + 0x84),
                        uVar29,0xffffffff,*(undefined4 *)(param_1 + 0x34));
          uVar30 = (undefined4)((ulonglong)uVar29 >> 0x20);
        }
        (*DAT_146ab42e8)(0x88eb,*(undefined4 *)(puVar16 + 3));
        if (*(char *)(&DAT_146ab3648 + lVar14 * 0xe) == '\0') {
          (*DAT_146ab40d0)(0xd05,1);
          iVar24 = uVar28 + 0x8515;
          if ((*(byte *)(param_2 + 0xe8) & 1) == 0) {
            iVar24 = *(int *)(param_2 + 0x84);
          }
          uVar30 = 0;
          (*DAT_146ab4078)(iVar24,(param_4 - param_5) + iVar27,
                           *(undefined4 *)((longlong)&DAT_146ab3640 + lVar26),
                           *(undefined4 *)((longlong)&DAT_146ab3640 + lVar26 + 4),0);
          (*DAT_146ab40d0)(0xd05,4);
        }
        else {
          iVar24 = uVar28 + 0x8515;
          if ((*(byte *)(param_2 + 0xe8) & 1) == 0) {
            iVar24 = *(int *)(param_2 + 0x84);
          }
          (*DAT_146ab4268)(iVar24,(param_4 - param_5) + iVar27,0);
        }
        FUN_141e6dae0(*(undefined4 *)(puVar16 + 3));
        iVar24 = DAT_1464c97fc + -1;
        if ((*(int *)(*(longlong *)(lVar15 + 8) + 0x10 + (longlong)iVar24 * 0x28) !=
             *(int *)(param_1 + 0x84)) ||
           (*(int *)(*(longlong *)(lVar15 + 8) + 0x14 + (longlong)iVar24 * 0x28) !=
            *(int *)(param_1 + 0x80))) {
          uVar29 = CONCAT44(uVar30,*(int *)(param_1 + 0x80));
          FUN_141e6dbc0(*(undefined8 *)(param_1 + 0x70),lVar15,iVar24,*(int *)(param_1 + 0x84),
                        uVar29,0xffffffff,*(undefined4 *)(param_1 + 0x34));
          uVar30 = (undefined4)((ulonglong)uVar29 >> 0x20);
        }
        uVar32 = (undefined4)((ulonglong)in_stack_fffffffffffffef8 >> 0x20);
        if (*(int *)(param_1 + 0x68) == 0) {
          if (*(char *)(&DAT_146ab3648 + lVar14 * 0xe) == '\0') {
            (*DAT_146ab40d0)(0xcf5,1);
            iVar24 = uVar28 + 0x8515;
            if ((*(byte *)(param_1 + 0xe8) & 1) == 0) {
              iVar24 = *(int *)(param_1 + 0x84);
            }
            in_stack_fffffffffffffef8 = 0;
            in_stack_fffffffffffffef0 =
                 CONCAT44(uVar31,*(undefined4 *)((longlong)&DAT_146ab3640 + lVar26 + 4));
            in_stack_fffffffffffffed8 = CONCAT44(uVar30,uVar18);
            (*DAT_146ab4178)(iVar24,iVar27,0,0,in_stack_fffffffffffffed8,uVar9,
                             *(undefined4 *)((longlong)&DAT_146ab3640 + lVar26),
                             in_stack_fffffffffffffef0,0);
            goto LAB_141e94c92;
          }
          uVar10 = *(uint *)(param_1 + 0xe8) & 1;
          iVar24 = 1;
          if (uVar10 != 0) {
            iVar24 = 6;
          }
          uVar19 = iVar24 * iVar27 + uVar28;
          lVar20 = *(longlong *)(param_1 + 0xd8);
          if (*(longlong *)(param_1 + 0xd8) == 0) {
            lVar20 = param_1 + 0xd0;
          }
          uVar21 = uVar19;
          if ((int)uVar19 < 0) {
            uVar21 = uVar19 + 0x1f;
          }
          iVar24 = uVar28 + 0x8515;
          if ((*(uint *)(lVar20 + (longlong)((int)uVar21 >> 5) * 4) >> (uVar19 & 0x1f) & 1) == 0) {
            if (uVar10 == 0) {
              iVar24 = *(int *)(param_1 + 0x84);
            }
            in_stack_fffffffffffffef0 = 0;
            in_stack_fffffffffffffed8 = CONCAT44(uVar30,uVar9);
            (*DAT_146ab4240)(iVar24,iVar27,
                             *(undefined4 *)
                              ((longlong)&DAT_146ab3630 + (ulonglong)local_res8 * 4 + lVar26),uVar18
                             ,in_stack_fffffffffffffed8,0,*(undefined4 *)(puVar16 + 2),0);
            iVar24 = 1;
            if ((*(byte *)(param_1 + 0xe8) & 1) != 0) {
              iVar24 = 6;
            }
            iVar24 = iVar24 * iVar27 + uVar28;
            lVar20 = *(longlong *)(param_1 + 0xd8);
            if (*(longlong *)(param_1 + 0xd8) == 0) {
              lVar20 = param_1 + 0xd0;
            }
            iVar22 = iVar24;
            if (iVar24 < 0) {
              iVar22 = iVar24 + 0x1f;
            }
            puVar2 = (uint *)(lVar20 + (longlong)(iVar22 >> 5) * 4);
            *puVar2 = *puVar2 | 1 << ((byte)iVar24 & 0x1f);
          }
          else {
            if (uVar10 == 0) {
              iVar24 = *(int *)(param_1 + 0x84);
            }
            in_stack_fffffffffffffef8 = 0;
            in_stack_fffffffffffffef0 = CONCAT44(uVar31,*(undefined4 *)(puVar16 + 2));
            in_stack_fffffffffffffed8 = CONCAT44(uVar30,uVar18);
            (*DAT_146ab4258)(iVar24,iVar27,0,0,in_stack_fffffffffffffed8,uVar9,
                             *(undefined4 *)
                              ((longlong)&DAT_146ab3630 + (ulonglong)local_res8 * 4 + lVar26),
                             in_stack_fffffffffffffef0,0);
          }
        }
        else if (*(char *)(&DAT_146ab3648 + lVar14 * 0xe) == '\0') {
          (*DAT_146ab40d0)(0xcf5,1);
          in_stack_fffffffffffffef8 =
               CONCAT44(uVar32,*(undefined4 *)((longlong)&DAT_146ab3640 + lVar26));
          in_stack_fffffffffffffef0 = CONCAT44(uVar31,1);
          in_stack_fffffffffffffed8 = CONCAT44(uVar30,uVar28);
          (*DAT_146ab4218)(*(undefined4 *)(param_1 + 0x84),iVar27,0,0,in_stack_fffffffffffffed8,
                           uVar18,uVar9,in_stack_fffffffffffffef0,in_stack_fffffffffffffef8,
                           *(undefined4 *)((longlong)&DAT_146ab3640 + lVar26 + 4),0);
LAB_141e94c92:
          (*DAT_146ab40d0)(0xcf5,4);
        }
        else {
          in_stack_fffffffffffffef8 =
               CONCAT44(uVar32,*(undefined4 *)
                                ((longlong)&DAT_146ab3630 + (ulonglong)local_res8 * 4 + lVar26));
          in_stack_fffffffffffffef0 = CONCAT44(uVar31,1);
          in_stack_fffffffffffffed8 = CONCAT44(uVar30,uVar28);
          (*DAT_146ab4250)(*(undefined4 *)(param_1 + 0x84),iVar27,0,0,in_stack_fffffffffffffed8,
                           uVar18,uVar9,in_stack_fffffffffffffef0,in_stack_fffffffffffffef8,
                           *(undefined4 *)(puVar16 + 2),0);
        }
        puVar17 = *(undefined8 **)(lVar3 + *(longlong *)(param_1 + 0xa0));
        *(undefined8 *)(lVar3 + *(longlong *)(param_1 + 0xa0)) = 0;
        if (puVar17 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar17 + 1);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            (**(code **)*puVar17)();
          }
        }
        piVar1 = (int *)(puVar16 + 1);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar16)(puVar16);
        }
        iVar27 = iVar27 + 1;
        local_c0 = local_c0 - 1;
      } while (local_c0 != 0);
    }
    uVar28 = uVar28 + 1;
  } while( true );
}



// FUNCTION 141e94d50 FUN_141e94d50 body=408 status=ok
// SIG undefined FUN_141e94d50(void)

void FUN_141e94d50(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  
  lVar11 = (longlong)param_3 * 200;
  lVar1 = (longlong)param_3 + 0x19;
  iVar6 = 0;
  if (0 < *(int *)(param_2 + 8 + lVar1 * 0x30)) {
    lVar7 = 0;
    lVar12 = 0;
    do {
      lVar8 = *(longlong *)(param_2 + lVar1 * 0x30);
      iVar5 = *(int *)(lVar7 + lVar8);
      bVar2 = *(byte *)(lVar7 + 5 + lVar8);
      uVar9 = (ulonglong)bVar2;
      if (-1 < iVar5) {
        uVar3 = *(uint *)(param_1 + 0x2c + uVar9 * 8);
        if (uVar3 != 0) {
          uVar4 = *(uint *)(param_1 + 0x28 + uVar9 * 8);
          uVar10 = (*(ushort *)(*(longlong *)(lVar11 + 0x10 + param_2) + lVar12) >> 4) - uVar4;
          if (uVar3 <= uVar10) {
            uVar10 = uVar3;
          }
          iVar5 = iVar5 + uVar4;
          lVar8 = (ulonglong)uVar4 * 0x10 + *(longlong *)(param_1 + uVar9 * 8);
          if (bVar2 < 3) {
            if (DAT_146ab3550 == '\0') {
              (*DAT_146ab44d0)();
            }
            else {
              (*DAT_146ab4aa0)(*(undefined4 *)(lVar11 + 0xc4 + param_2),iVar5,uVar10,lVar8);
            }
          }
          else if (bVar2 == 3) {
            if (DAT_146ab3550 == '\0') {
              (*DAT_146ab44f0)();
            }
            else {
              (*DAT_146ab4a98)(*(undefined4 *)(lVar11 + 0xc4 + param_2),iVar5,uVar10,lVar8);
            }
          }
          else if (bVar2 == 4) {
            if (DAT_146ab3550 == '\0') {
              (*DAT_146ab4510)();
            }
            else {
              (*DAT_146ab4aa8)(*(undefined4 *)(lVar11 + 0xc4 + param_2),iVar5,uVar10,lVar8);
            }
          }
          *(undefined4 *)(param_1 + (uVar9 + 5) * 8) = 0;
          *(undefined4 *)(param_1 + 0x2c + uVar9 * 8) = 0;
        }
      }
      iVar6 = iVar6 + 1;
      lVar7 = lVar7 + 8;
      lVar12 = lVar12 + 4;
    } while (iVar6 < *(int *)(param_2 + 8 + lVar1 * 0x30));
  }
  return;
}



// FUNCTION 141e94ef0 FUN_141e94ef0 body=1030 status=ok
// SIG undefined FUN_141e94ef0(void)

void FUN_141e94ef0(longlong param_1,longlong param_2,int param_3,longlong *param_4,longlong *param_5
                  )

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  ushort uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar15;
  ushort *puVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined4 *puVar20;
  ulonglong uVar21;
  longlong *plVar22;
  longlong *plVar23;
  ulonglong local_res10;
  uint local_res18;
  longlong local_68;
  longlong local_58;
  ulonglong uVar14;
  
  plVar22 = (longlong *)((longlong)param_3 * 200 + param_2);
  if (*(char *)((longlong)plVar22 + 0x9d) == '\0') {
    param_2 = (longlong)param_3 * 0x30 + param_2;
    uVar18 = 0;
    local_res18 = 0;
    if (*(char *)((longlong)plVar22 + 0x9b) != '\0') {
      local_58 = 0;
      local_res10 = 0;
      local_68 = 0;
      uVar7 = uVar18;
      do {
        lVar3 = *param_4;
        lVar10 = *(longlong *)(param_2 + 0x4d0);
        iVar2 = *(int *)(lVar3 + 0x38);
        if (*(int *)(local_68 + lVar10) != iVar2) {
          *(int *)(local_68 + lVar10) = iVar2;
          uVar13 = local_res18;
          lVar10 = local_58;
          if ((int)uVar7 < (int)param_5[1]) {
            lVar11 = local_58 * 10;
            lVar15 = local_58;
            do {
              puVar16 = (ushort *)(*param_5 + lVar11);
              if ((byte)puVar16[1] == uVar18) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)(*(longlong *)
                                     (param_1 + 0x50 +
                                     (ulonglong)*(byte *)((longlong)puVar16 + 5) * 8) +
                                   (ulonglong)puVar16[3] * 4),
                           (void *)(*(longlong *)(*(longlong *)(lVar3 + 0x50) + 0x10) +
                                   (ulonglong)*puVar16 * 4),(ulonglong)puVar16[4] << 2);
              }
              else {
                uVar13 = uVar7;
                lVar10 = lVar15;
                if ((int)uVar18 < (int)(uint)(byte)puVar16[1]) break;
              }
              uVar7 = uVar7 + 1;
              lVar15 = lVar15 + 1;
              lVar11 = lVar11 + 10;
              uVar13 = local_res18;
              lVar10 = local_58;
            } while ((int)uVar7 < (int)param_5[1]);
          }
          local_58 = lVar10;
          local_res18 = uVar13;
          uVar9 = 0;
          plVar23 = (longlong *)(*(longlong *)(param_2 + 0x4c0) + local_res10);
          uVar14 = uVar9;
          uVar17 = uVar9;
          uVar7 = local_res18;
          if (0 < (int)plVar23[1]) {
            do {
              puVar20 = (undefined4 *)(*plVar23 + uVar14);
              bVar1 = *(byte *)((longlong)puVar20 + 5);
              uVar5 = *(ushort *)(*(longlong *)(*plVar22 + local_res10) + uVar17) >> 4;
              uVar4 = *(undefined8 *)(param_1 + 0x50 + (ulonglong)bVar1 * 8);
              if (bVar1 < 3) {
                if (DAT_146ab3550 == '\0') {
                  (*DAT_146ab44d0)();
                }
                else {
                  (*DAT_146ab4aa0)(*(undefined4 *)((longlong)plVar22 + 0xc4),*puVar20,uVar5,uVar4);
                }
              }
              else if (bVar1 == 3) {
                if (DAT_146ab3550 == '\0') {
                  (*DAT_146ab44f0)();
                }
                else {
                  (*DAT_146ab4a98)(*(undefined4 *)((longlong)plVar22 + 0xc4),*puVar20,uVar5,uVar4);
                }
              }
              else if (bVar1 == 4) {
                if (DAT_146ab3550 == '\0') {
                  (*DAT_146ab4510)();
                }
                else {
                  (*DAT_146ab4aa8)(*(undefined4 *)((longlong)plVar22 + 0xc4),*puVar20,uVar5,uVar4);
                }
              }
              uVar13 = (int)uVar9 + 1;
              uVar9 = (ulonglong)uVar13;
              uVar14 = uVar14 + 8;
              uVar17 = uVar17 + 4;
            } while ((int)uVar13 < (int)plVar23[1]);
          }
        }
        local_68 = local_68 + 4;
        param_4 = param_4 + 1;
        local_res10 = local_res10 + 0x10;
        uVar18 = uVar18 + 1;
      } while ((int)uVar18 < (int)(uint)*(byte *)((longlong)plVar22 + 0x9b));
    }
  }
  else {
    uVar14 = 0;
    local_res10 = 0;
    uVar17 = uVar14;
    uVar9 = uVar14;
    if (*(char *)((longlong)plVar22 + 0x9b) != '\0') {
      do {
        lVar3 = *(longlong *)(*(longlong *)(*param_4 + 0x50) + 0x10);
        uVar19 = uVar14;
        uVar21 = uVar17;
        uVar6 = local_res10;
        if ((int)uVar14 < (int)param_5[1]) {
          lVar10 = uVar17 * 10;
          uVar12 = uVar17;
          do {
            puVar16 = (ushort *)(*param_5 + lVar10);
            uVar19 = uVar14;
            uVar21 = uVar12;
            uVar6 = uVar14;
            if ((uint)(byte)puVar16[1] != (uint)uVar9) break;
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*(longlong *)
                                 (param_1 + (ulonglong)*(byte *)((longlong)puVar16 + 5) * 8) +
                               (ulonglong)puVar16[3] * 4),(void *)(lVar3 + (ulonglong)*puVar16 * 4),
                       (ulonglong)puVar16[4] << 2);
            uVar7 = puVar16[4] + 3 >> 2;
            lVar11 = param_1 + (ulonglong)*(byte *)((longlong)puVar16 + 5) * 8;
            uVar18 = (uint)(puVar16[3] >> 2);
            if (*(int *)(lVar11 + 0x2c) != 0) {
              uVar13 = *(uint *)(lVar11 + 0x28);
              uVar7 = uVar7 + uVar18;
              uVar8 = *(int *)(lVar11 + 0x2c) + uVar13;
              if (uVar13 <= uVar18) {
                uVar18 = uVar13;
              }
              if (uVar7 <= uVar8) {
                uVar7 = uVar8;
              }
              uVar7 = (uVar7 - uVar18) + 1;
            }
            uVar13 = (int)uVar14 + 1;
            uVar14 = (ulonglong)uVar13;
            uVar12 = uVar12 + 1;
            *(uint *)(lVar11 + 0x28) = uVar18;
            lVar10 = lVar10 + 10;
            *(uint *)(lVar11 + 0x2c) = uVar7;
            uVar19 = local_res10;
            uVar21 = uVar17;
            uVar6 = local_res10;
          } while ((int)uVar13 < (int)param_5[1]);
        }
        local_res10 = uVar6;
        uVar18 = (uint)uVar9 + 1;
        param_4 = param_4 + 1;
        uVar14 = uVar19;
        uVar17 = uVar21;
        uVar9 = (ulonglong)uVar18;
      } while ((int)uVar18 < (int)(uint)*(byte *)((longlong)plVar22 + 0x9b));
    }
  }
  return;
}



// FUNCTION 141e95300 FUN_141e95300 body=636 status=ok
// SIG undefined FUN_141e95300(void)

void FUN_141e95300(longlong param_1)

{
  int iVar1;
  undefined8 ****_Src;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *****pppppuVar6;
  uint uVar7;
  undefined8 *****pppppuVar8;
  size_t _Size;
  undefined8 *****pppppuVar9;
  undefined8 ****ppppuVar10;
  uint uVar11;
  uint local_res10 [2];
  undefined8 ****local_res18 [2];
  undefined8 ****local_48;
  uint local_40;
  int local_3c;
  
  if (DAT_146ab3de0 != 0) {
    ppppuVar10 = (undefined8 ****)(param_1 + 0xc4);
    local_res10[0] = 0;
    do {
      uVar11 = local_res10[0];
      pppppuVar8 = (undefined8 *****)0x0;
      iVar1 = *(int *)ppppuVar10;
      if (*(int *)(DAT_146ab3de0 + 0x18) != *(int *)(DAT_146ab3de0 + 0x44)) {
        lVar4 = *(longlong *)(DAT_146ab3de0 + 0x50);
        if (*(longlong *)(DAT_146ab3de0 + 0x50) == 0) {
          lVar4 = DAT_146ab3de0 + 0x48;
        }
        iVar2 = *(int *)(lVar4 + ((longlong)*(int *)(DAT_146ab3de0 + 0x58) - 1U & (longlong)iVar1) *
                                 4);
        if (iVar2 != -1) {
          do {
            pppppuVar6 = (undefined8 *****)
                         (*(longlong *)(DAT_146ab3de0 + 0x10) + (longlong)iVar2 * 0x28);
            if (*(int *)(*(longlong *)(DAT_146ab3de0 + 0x10) + (longlong)iVar2 * 0x28) == iVar1) {
              if (iVar2 != -1) goto LAB_141e953b4;
              break;
            }
            iVar2 = *(int *)(pppppuVar6 + 4);
          } while (iVar2 != -1);
        }
      }
      pppppuVar6 = pppppuVar8;
LAB_141e953b4:
      pppppuVar9 = pppppuVar6 + 1;
      if (pppppuVar6 == (undefined8 *****)0x0) {
        pppppuVar9 = pppppuVar8;
      }
      if (pppppuVar9 != (undefined8 *****)0x0) {
        local_40 = 0;
        local_3c = 0;
        local_48 = (undefined8 *****)0x0;
        local_res18[0] = ppppuVar10;
        if (*(char *)((longlong)pppppuVar9 + 0x14) == '\0') {
          uVar7 = 0;
          if (&local_48 != pppppuVar9) {
            local_40 = *(uint *)(pppppuVar9 + 1);
            _Size = (size_t)(int)local_40;
            _Src = *pppppuVar9;
            uVar7 = local_40;
            if (local_40 != 0) {
              TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_48,local_40,0);
              pppppuVar8 = (undefined8 *****)local_48;
              _guard_xfg_dispatch_icall_nop(local_48,_Src,_Size);
              uVar7 = local_40;
            }
          }
        }
        else {
          iVar2 = *(int *)(pppppuVar9 + 2);
          if (iVar2 != 0) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeTo(&local_48);
            pppppuVar8 = (undefined8 *****)(ulonglong)local_40;
          }
          uVar7 = (uint)pppppuVar8;
          if ((int)uVar7 < iVar2) {
            local_40 = (iVar2 - uVar7) + uVar7;
            if (local_3c < (int)local_40) {
              TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_48);
            }
            uVar11 = local_40;
            pppppuVar8 = (undefined8 *****)local_48;
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)local_48 + (longlong)(int)uVar7),0,
                       (longlong)(int)(iVar2 - uVar7));
            ppppuVar10 = local_res18[0];
            uVar7 = uVar11;
          }
          else {
            pppppuVar8 = (undefined8 *****)local_48;
            if ((iVar2 < (int)uVar7) && (iVar3 = uVar7 - iVar2, iVar3 != 0)) {
              iVar5 = (uVar7 - iVar3) - iVar2;
              if (iVar5 != 0) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)((longlong)local_48 + (longlong)iVar2),
                           (void *)((longlong)(iVar3 + iVar2) + (longlong)local_48),(longlong)iVar5)
                ;
              }
              local_40 = uVar7 - iVar3;
              TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(&local_48);
              pppppuVar8 = (undefined8 *****)local_48;
              uVar7 = local_40;
            }
          }
          FUN_14165b8a0(0x11,pppppuVar8,iVar2,*pppppuVar9,*(undefined4 *)(pppppuVar9 + 1),0,0xf);
          uVar11 = local_res10[0];
        }
        local_res10[0] = uVar7 - 1;
        local_res18[0] = pppppuVar8;
        (*DAT_146ab4468)(iVar1,1,local_res18,local_res10);
        (*DAT_146ab4388)(iVar1);
        TSet<TTuple<int,TTuple<FString,int>_>,TDefaultMapHashableKeyFuncs<int,TTuple<FString,int>,0>,FDefaultSetAllocator>
        ::Remove(DAT_146ab3de0 + 0x10);
        if (pppppuVar8 != (undefined8 *****)0x0) {
          FMemory::Free(pppppuVar8);
        }
      }
      local_res10[0] = uVar11 + 1;
      ppppuVar10 = ppppuVar10 + 0x19;
    } while (local_res10[0] < 6);
  }
  return;
}



// FUNCTION 141e95580 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FSamplerStateInitializerRHI,FOpenGLSamplerState_*>,TDefaultMapHashableKeyFuncs<FSamplerStateInitializerRHI,FOpenGLSamplerState_*,0>,FDefaultSetAllocator>
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



// FUNCTION 141e95630 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FOpenGLCompiledShaderKey,unsigned_int>,TDefaultMapHashableKeyFuncs<FOpenGLCompiledShaderKey,unsigned_int,0>,FDefaultSetAllocator>
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



// FUNCTION 141e956e0 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FOpenGLFramebufferKey,unsigned_int>,TDefaultMapHashableKeyFuncs<FOpenGLFramebufferKey,unsigned_int,0>,FDefaultSetAllocator>
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



// FUNCTION 141e95790 FUN_141e95790 body=161 status=ok
// SIG undefined FUN_141e95790(void)

undefined8 FUN_141e95790(longlong param_1,uint param_2,char param_3)

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
      FUN_141ea8590(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141e95840 FUN_141e95840 body=2433 status=ok
// SIG undefined FUN_141e95840(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141e95840(longlong param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  uint uVar10;
  longlong *plVar11;
  char *pcVar12;
  char cVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  byte bVar16;
  longlong lVar17;
  void *pvVar18;
  longlong *plVar19;
  int iVar20;
  longlong *plVar21;
  void *pvVar22;
  longlong *plVar23;
  int iVar24;
  longlong *plVar25;
  longlong *plVar26;
  longlong lVar27;
  void *_Src;
  undefined1 auStack_c8 [32];
  byte local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  longlong local_90;
  longlong local_88;
  undefined8 local_80;
  longlong *local_78;
  uint local_70;
  uint local_6c;
  int local_68;
  void *local_60;
  uint local_58;
  uint local_54;
  undefined8 local_50;
  undefined2 local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  local_88 = CONCAT44(local_88._4_4_,param_2);
  local_90 = param_1;
  local_68 = param_3;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146ab3f48) && (_Init_thread_header(&DAT_146ab3f48), DAT_146ab3f48 == -1))
  {
    _DAT_146ab3f30 = DAT_1464c97f8;
    _DAT_146ab3f38 = DAT_1464c9800 + DAT_1464c97f8;
    _DAT_146ab3f3c = DAT_1464c9804 + DAT_1464c9800 + DAT_1464c97f8;
    _DAT_146ab3f40 = DAT_1464c9804 + DAT_1464c9808 + DAT_1464c9800 + DAT_1464c97f8;
    _Init_thread_footer(&DAT_146ab3f48);
  }
  local_48 = 0;
  switch((longlong)param_2 & 0xff) {
  case 0:
    uVar4 = 0x76;
    break;
  case 1:
    uVar4 = 0x70;
    break;
  case 2:
    uVar4 = 0x67;
    break;
  case 3:
    uVar4 = 0x68;
    break;
  case 4:
    uVar4 = 100;
    break;
  case 5:
    uVar4 = 99;
    break;
  default:
    uVar4 = 0;
  }
  if (DAT_146ab3550 == '\0') {
    uVar5 = *(undefined4 *)(local_90 + 0x5d0);
  }
  else {
    uVar5 = *(undefined4 *)((longlong)param_2 * 200 + 0xc4 + local_90);
  }
  plVar25 = (longlong *)0x0;
  local_78 = (longlong *)0x0;
  local_6c = 0;
  local_50._0_3_ = CONCAT21(0x5f75,uVar4);
  bVar16 = 0;
  local_50 = (ulonglong)(uint3)local_50;
  plVar19 = plVar25;
  plVar21 = plVar25;
  plVar14 = plVar25;
  local_98 = uVar5;
  do {
    if (bVar16 == 0) {
      uVar4 = 0x68;
    }
    else if (bVar16 == 1) {
      uVar4 = 0x6d;
    }
    else if (bVar16 == 2) {
      uVar4 = 0x6c;
    }
    else if (bVar16 == 3) {
      uVar4 = 0x69;
    }
    else if (bVar16 == 4) {
      uVar4 = 0x75;
    }
    else {
      uVar4 = 0;
    }
    local_50._0_4_ = CONCAT13(uVar4,(uint3)local_50);
    iVar6 = (*DAT_146ab4410)(uVar5,&local_50);
    if (iVar6 != -1) {
      iVar24 = (int)plVar19;
      local_a0._0_6_ = CONCAT15(bVar16,CONCAT14(uVar4,iVar6));
      local_70 = iVar24 + 1;
      if ((int)plVar14 < (int)local_70) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_78,plVar19);
        plVar14 = (longlong *)(ulonglong)local_6c;
        plVar21 = local_78;
      }
      plVar19 = (longlong *)(ulonglong)local_70;
      plVar21[iVar24] = local_a0;
    }
    lVar27 = local_90;
    bVar16 = bVar16 + 1;
  } while (bVar16 < 5);
  local_88 = (longlong)(int)local_88;
  lVar17 = local_88 * 200 + local_90;
  plVar14 = (longlong *)((local_88 + 0x19) * 0x30 + local_90);
  iVar6 = *(int *)(lVar17 + 0x18);
  *(undefined4 *)(plVar14 + 1) = 0;
  local_80 = lVar17;
  if (*(int *)((longlong)plVar14 + 0xc) != iVar6) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar14);
  }
  plVar23 = plVar25;
  plVar26 = plVar25;
  if (0 < *(int *)(lVar17 + 0x18)) {
    do {
      local_a0 = CONCAT26(local_a0._6_2_,0x50000000000);
      cVar13 = *(char *)((longlong)plVar26 + *(longlong *)(lVar17 + 0x10) + 2);
      local_a0._0_5_ = CONCAT14(cVar13,0xffffffff);
      plVar9 = plVar21;
      plVar11 = plVar25;
      if (0 < (int)plVar19) {
        do {
          if (*(char *)((longlong)plVar9 + 4) == cVar13) {
            local_a0 = *plVar9;
            break;
          }
          uVar10 = (int)plVar11 + 1;
          plVar9 = plVar9 + 1;
          plVar11 = (longlong *)(ulonglong)uVar10;
        } while ((int)uVar10 < (int)plVar19);
      }
      iVar6 = (int)plVar14[1];
      *(int *)(plVar14 + 1) = iVar6 + 1;
      if (*(int *)((longlong)plVar14 + 0xc) < iVar6 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar14,iVar6);
      }
      uVar10 = (int)plVar23 + 1;
      *(longlong *)(*plVar14 + (longlong)iVar6 * 8) = local_a0;
      lVar17 = local_80;
      plVar23 = (longlong *)(ulonglong)uVar10;
      lVar27 = local_90;
      plVar26 = (longlong *)((longlong)plVar26 + 4);
    } while ((int)uVar10 < *(int *)(local_80 + 0x18));
  }
  if (plVar21 != (longlong *)0x0) {
    FMemory::Free(plVar21);
  }
  uVar3 = local_50;
  local_50._0_5_ = CONCAT41(99,(undefined1)local_50);
  local_50._7_1_ = SUB81(uVar3,7);
  local_50._0_7_ = (uint7)(uint5)local_50;
  local_a8 = 0;
  bVar16 = 0;
  if (*(char *)(local_80 + 0x9b) != '\0') {
    local_78 = (longlong *)(local_88 * 0x30 + 0x4c0 + lVar27);
    do {
      uVar5 = local_98;
      pvVar18 = (void *)0x0;
      pcVar12 = (char *)((longlong)&local_50 + 2);
      local_60 = (void *)0x0;
      local_54 = 0;
      if (9 < local_a8) {
        local_50._0_3_ = CONCAT12(local_a8 / 10 + 0x30,(undefined2)local_50);
        pcVar12 = (char *)((longlong)&local_50 + 3);
      }
      *pcVar12 = local_a8 % 10 + 0x30;
      bVar16 = 0;
      pcVar12[1] = '_';
      pcVar12[3] = '\0';
      pvVar22 = pvVar18;
      _Src = pvVar18;
      do {
        if (bVar16 == 0) {
          cVar13 = 'h';
        }
        else if (bVar16 == 1) {
          cVar13 = 'm';
        }
        else if (bVar16 == 2) {
          cVar13 = 'l';
        }
        else if (bVar16 == 3) {
          cVar13 = 'i';
        }
        else if (bVar16 == 4) {
          cVar13 = 'u';
        }
        else {
          cVar13 = '\0';
        }
        pcVar12[2] = cVar13;
        iVar6 = (*DAT_146ab4410)(uVar5,&local_50);
        if (iVar6 != -1) {
          iVar24 = (int)pvVar18;
          local_a0._0_6_ = CONCAT15(bVar16,CONCAT14(cVar13,iVar6));
          local_58 = iVar24 + 1;
          if ((int)pvVar22 < (int)local_58) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_60,pvVar18);
            pvVar22 = (void *)(ulonglong)local_54;
            _Src = local_60;
          }
          pvVar18 = (void *)(ulonglong)local_58;
          *(longlong *)((longlong)_Src + (longlong)iVar24 * 8) = local_a0;
        }
        plVar19 = local_78;
        bVar16 = bVar16 + 1;
      } while (bVar16 < 5);
      iVar6 = (int)local_78[1];
      *(int *)(local_78 + 1) = iVar6 + 1;
      if (*(int *)((longlong)local_78 + 0xc) < iVar6 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(local_78,iVar6);
      }
      puVar15 = (undefined8 *)((longlong)iVar6 * 0x10 + *plVar19);
      *puVar15 = 0;
      iVar6 = (int)pvVar18;
      *(int *)(puVar15 + 1) = iVar6;
      if (iVar6 == 0) {
        *(undefined4 *)((longlong)puVar15 + 0xc) = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar15,pvVar18,0);
        _guard_xfg_dispatch_icall_nop((void *)*puVar15,_Src,(longlong)iVar6 << 3);
      }
      if (_Src != (void *)0x0) {
        FMemory::Free(_Src);
      }
      local_a8 = local_a8 + 1;
      bVar16 = *(byte *)(local_80 + 0x9b);
    } while (local_a8 < bVar16);
  }
  lVar27 = local_80;
  iVar24 = 0;
  iVar6 = 0;
  lVar17 = local_88 * 0x30 + local_90;
  plVar19 = (longlong *)(lVar17 + 0x4d0);
  *(undefined4 *)(lVar17 + 0x4d8) = 0;
  if (*(uint *)(lVar17 + 0x4dc) != (uint)bVar16) {
    TArray<float,FDefaultAllocator>::ResizeTo(plVar19);
    iVar6 = *(int *)(lVar17 + 0x4d8);
  }
  bVar16 = *(byte *)(lVar27 + 0x9b);
  iVar7 = iVar6 + (uint)bVar16;
  *(int *)(lVar17 + 0x4d8) = iVar7;
  if (*(int *)(lVar17 + 0x4dc) < iVar7) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar19);
  }
  _guard_xfg_dispatch_icall_nop((void *)(*plVar19 + (longlong)iVar6 * 4),0,(ulonglong)bVar16 << 2);
  uVar5 = local_98;
  iVar6 = -1;
  local_50._0_5_ = CONCAT41(0x73,(undefined1)local_50);
  iVar7 = iVar24;
  if (*(char *)(lVar27 + 0x9a) != '\0') {
    do {
      pcVar12 = (char *)((longlong)&local_50 + 2);
      cVar13 = (char)(iVar7 / 10);
      if (9 < iVar7) {
        local_50._0_3_ = CONCAT12(cVar13 + '0',(undefined2)local_50);
        pcVar12 = (char *)((longlong)&local_50 + 3);
      }
      *pcVar12 = (char)iVar7 + cVar13 * -10 + '0';
      pcVar12[1] = '\0';
      iVar8 = (*DAT_146ab4410)(uVar5,&local_50);
      iVar20 = iVar7;
      if (iVar8 == -1) {
        if (iVar6 != -1) {
          pcVar12 = (char *)((longlong)&local_50 + 2);
          cVar13 = (char)(iVar6 / 10);
          if (9 < iVar6) {
            local_50._0_3_ = CONCAT12(cVar13 + '0',(undefined2)local_50);
            pcVar12 = (char *)((longlong)&local_50 + 3);
          }
          iVar20 = iVar7 - iVar6;
          *pcVar12 = (char)iVar6 + cVar13 * -10 + '0';
          pcVar12[1] = '\0';
          *(undefined1 *)((longlong)&local_50 + (ulonglong)(9 < iVar6) + 3) = 0x5b;
          pcVar12 = (char *)((longlong)&local_50 + (ulonglong)(9 < iVar6) + 4);
          cVar13 = (char)(iVar20 / 10);
          if (9 < iVar20) {
            *pcVar12 = cVar13 + '0';
            pcVar12 = (char *)((longlong)&local_50 + (ulonglong)(9 < iVar6) + 5);
          }
          *pcVar12 = (char)iVar20 + cVar13 * -10 + '0';
          pcVar12[1] = ']';
          pcVar12[2] = '\0';
          iVar8 = (*DAT_146ab4410)(uVar5,&local_50);
          iVar20 = iVar6;
          goto LAB_141e95dee;
        }
      }
      else {
LAB_141e95dee:
        lVar2 = local_88;
        lVar17 = local_90;
        iVar6 = iVar20;
        if (iVar8 != -1) {
          if ((DAT_146ab0540 == 0) || (DAT_146ab49a0 == 0)) {
            if (DAT_146ab3550 == '\0') {
              (*DAT_146ab4498)();
            }
            else {
              (*DAT_146ab4a90)(uVar5,iVar8,*(int *)(&DAT_146ab3f30 + local_88 * 4) + iVar7);
            }
            iVar20 = *(int *)(&DAT_146ab3f30 + lVar2 * 4) + iVar7;
            lVar17 = *(longlong *)(local_90 + 0x5f0);
            if (*(longlong *)(local_90 + 0x5f0) == 0) {
              lVar17 = local_90 + 0x5e0;
            }
            iVar8 = iVar20;
            if (iVar20 < 0) {
              iVar8 = iVar20 + 0x1f;
            }
            puVar1 = (uint *)(lVar17 + (longlong)(iVar8 >> 5) * 4);
            *puVar1 = *puVar1 | 1 << ((byte)iVar20 & 0x1f);
            if (iVar20 <= *(int *)(local_90 + 0x5d8)) {
              iVar20 = *(int *)(local_90 + 0x5d8);
            }
            *(int *)(local_90 + 0x5d8) = iVar20;
          }
          else {
            iVar20 = *(int *)(local_90 + 0x628);
            local_80 = CONCAT44(iVar8,*(int *)(&DAT_146ab3f30 + local_88 * 4) + iVar7);
            *(int *)(local_90 + 0x628) = iVar20 + 1;
            if (*(int *)(local_90 + 0x62c) < iVar20 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                        (local_90 + 0x620,iVar20);
            }
            *(longlong *)(*(longlong *)(lVar17 + 0x620) + (longlong)iVar20 * 8) = local_80;
          }
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)(uint)*(byte *)(lVar27 + 0x9a));
  }
  iVar6 = -1;
  local_50._0_5_ = CONCAT41(0x69,(undefined1)local_50);
  iVar7 = iVar24;
  if (*(char *)(lVar27 + 0x9c) != '\0') {
    do {
      pcVar12 = (char *)((longlong)&local_50 + 2);
      cVar13 = (char)(iVar7 / 10);
      if (9 < iVar7) {
        local_50._0_3_ = CONCAT12(cVar13 + '0',(undefined2)local_50);
        pcVar12 = (char *)((longlong)&local_50 + 3);
      }
      *pcVar12 = (char)iVar7 + cVar13 * -10 + '0';
      pcVar12[1] = '\0';
      iVar8 = (*DAT_146ab4410)(uVar5,&local_50);
      iVar20 = iVar7;
      if (iVar8 == -1) {
        if (iVar6 != -1) {
          pcVar12 = (char *)((longlong)&local_50 + 2);
          cVar13 = (char)(iVar6 / 10);
          if (9 < iVar6) {
            local_50._0_3_ = CONCAT12(cVar13 + '0',(undefined2)local_50);
            pcVar12 = (char *)((longlong)&local_50 + 3);
          }
          iVar20 = iVar7 - iVar6;
          *pcVar12 = (char)iVar6 + cVar13 * -10 + '0';
          pcVar12[1] = '\0';
          *(undefined1 *)((longlong)&local_50 + (ulonglong)(9 < iVar6) + 3) = 0x5b;
          pcVar12 = (char *)((longlong)&local_50 + (ulonglong)(9 < iVar6) + 4);
          cVar13 = (char)(iVar20 / 10);
          if (9 < iVar20) {
            *pcVar12 = cVar13 + '0';
            pcVar12 = (char *)((longlong)&local_50 + (ulonglong)(9 < iVar6) + 5);
          }
          *pcVar12 = (char)iVar20 + cVar13 * -10 + '0';
          pcVar12[1] = ']';
          pcVar12[2] = '\0';
          iVar8 = (*DAT_146ab4410)(uVar5,&local_50);
          iVar20 = iVar6;
          goto LAB_141e96035;
        }
      }
      else {
LAB_141e96035:
        iVar6 = iVar20;
        if (iVar8 != -1) {
          iVar20 = *(int *)(&DAT_1464c9a90 + local_88 * 4) + iVar7;
          lVar17 = *(longlong *)(local_90 + 0x610);
          if (*(longlong *)(local_90 + 0x610) == 0) {
            lVar17 = local_90 + 0x600;
          }
          iVar8 = iVar20;
          if (iVar20 < 0) {
            iVar8 = iVar20 + 0x1f;
          }
          puVar1 = (uint *)(lVar17 + (longlong)(iVar8 >> 5) * 4);
          *puVar1 = *puVar1 | 1 << ((byte)iVar20 & 0x1f);
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)(uint)*(byte *)(lVar27 + 0x9c));
  }
  iVar6 = local_68;
  local_50._0_5_ = CONCAT41(0x62,(undefined1)local_50);
  if (*(char *)(lVar27 + 0x9b) != '\0') {
    do {
      pcVar12 = (char *)((longlong)&local_50 + 2);
      cVar13 = (char)(iVar24 / 10);
      if (9 < iVar24) {
        local_50._0_3_ = CONCAT12(cVar13 + '0',(undefined2)local_50);
        pcVar12 = (char *)((longlong)&local_50 + 3);
      }
      *pcVar12 = (char)iVar24 + cVar13 * -10 + '0';
      pcVar12[1] = '\0';
      iVar7 = GetOpenGLProgramUniformBlockIndex(uVar5,&local_50);
      if (-1 < iVar7) {
        GetOpenGLProgramUniformBlockBinding(uVar5,iVar7,iVar6 + iVar24);
      }
      iVar24 = iVar24 + 1;
    } while (iVar24 < (int)(uint)*(byte *)(lVar27 + 0x9b));
  }
  return;
}



// FUNCTION 141e961e0 CopyToEmptyStorage body=62 status=ok
// SIG undefined CopyToEmptyStorage(void)

void UE4Function_Private::TFunction_OwnedObject<<lambda_0ff2c2dd7e101d3fd4fb4fc0c338d9f6>_>::
     CopyToEmptyStorage(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_CopyToEmptyStorage_144ebe720;
    lVar1 = *(longlong *)(param_1 + 8);
    puVar2[1] = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      return;
    }
  }
  return;
}



// FUNCTION 141e96220 CopyToEmptyStorage body=162 status=ok
// SIG undefined CopyToEmptyStorage(void)

undefined8 *
UE4Function_Private::TFunction_OwnedObject<<lambda_14e6f5c2fd87bb4b2fa9737f56c88017>_>::
CopyToEmptyStorage(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)FUN_140438ef0();
  if (puVar1 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *puVar1 = &PTR_CopyToEmptyStorage_144ebe768;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[10] = 0;
  *(undefined4 *)(puVar1 + 0xc) = 0;
  if (*(int *)(param_1 + 0x60) != 0) {
    puVar3 = *(undefined8 **)(param_1 + 0x50);
    if (*(undefined8 **)(param_1 + 0x50) == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)(param_1 + 0x30);
    }
    if (puVar3 != (undefined8 *)0x0) {
      plVar2 = (longlong *)(**(code **)*puVar3)();
      (**(code **)(*plVar2 + 8))(plVar2);
      puVar1[4] = *(undefined8 *)(param_1 + 0x20);
      return puVar1;
    }
  }
  puVar1[4] = FHardwareCursor::GetHandle;
  return puVar1;
}



// FUNCTION 141e962d0 FUN_141e962d0 body=165 status=ok
// SIG undefined FUN_141e962d0(void)

undefined8 * FUN_141e962d0(longlong param_1)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x18);
  if (puVar2 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *puVar2 = &PTR_FUN_144ebe750;
  puVar2[1] = 0;
  iVar1 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(puVar2 + 2) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x14) = 0;
    return puVar2;
  }
  TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(puVar2 + 1,iVar1,0);
  _guard_xfg_dispatch_icall_nop((void *)puVar2[1],_Src,(longlong)iVar1);
  return puVar2;
}



// FUNCTION 141e96380 FUN_141e96380 body=78 status=ok
// SIG undefined FUN_141e96380(void)

void FUN_141e96380(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x48);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144ebe6d8;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    puVar2[4] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    puVar2[6] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    puVar2[7] = *(undefined8 *)(param_1 + 0x38);
    puVar2[8] = uVar1;
    return;
  }
  return;
}



// FUNCTION 141e963d0 FUN_141e963d0 body=88 status=ok
// SIG undefined FUN_141e963d0(void)

void FUN_141e963d0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x50);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144ebe708;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    puVar2[4] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    puVar2[6] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    puVar2[7] = *(undefined8 *)(param_1 + 0x38);
    puVar2[8] = uVar1;
    puVar2[9] = *(undefined8 *)(param_1 + 0x48);
    return;
  }
  return;
}



// FUNCTION 141e96430 CopyToEmptyStorage body=177 status=ok
// SIG undefined CopyToEmptyStorage(void)

undefined8 *
UE4Function_Private::TFunction_OwnedObject<<lambda_8518ff91ba7599c42264d996cae3e678>_>::
CopyToEmptyStorage(longlong param_1)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x20);
  if (puVar2 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *puVar2 = &PTR_CopyToEmptyStorage_144ebe6f0;
  puVar2[1] = *(undefined8 *)(param_1 + 8);
  puVar2[2] = 0;
  iVar1 = *(int *)(param_1 + 0x18);
  _Src = *(void **)(param_1 + 0x10);
  *(int *)(puVar2 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x1c) = 0;
    return puVar2;
  }
  TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(puVar2 + 2,iVar1,0);
  ::_guard_xfg_dispatch_icall_nop((void *)puVar2[2],_Src,(longlong)iVar1);
  return puVar2;
}



// FUNCTION 141e964f0 CopyToEmptyStorage body=115 status=ok
// SIG undefined CopyToEmptyStorage(void)

undefined8 *
UE4Function_Private::TFunction_OwnedObject<<lambda_86525f1a4ab890ef6a1fe61d5a6d62ae>_>::
CopyToEmptyStorage(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x38);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_CopyToEmptyStorage_144ebe6c0;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    lVar1 = *(longlong *)(param_1 + 0x10);
    puVar2[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)((longlong)puVar2 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    puVar2[4] = *(undefined8 *)(param_1 + 0x20);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    puVar2[6] = *(undefined8 *)(param_1 + 0x30);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141e96570 CopyToEmptyStorage body=87 status=ok
// SIG undefined CopyToEmptyStorage(void)

undefined8 *
UE4Function_Private::TFunction_OwnedObject<<lambda_f191fa227473d62ee3ab26737a808419>_>::
CopyToEmptyStorage(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x70);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_CopyToEmptyStorage_144ebe738;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    ::TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar1 + 4,param_1 + 0x20);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141e965d0 CreateAsyncReallocate2DTextureTarget body=343 status=ok
// SIG undefined CreateAsyncReallocate2DTextureTarget(void)

longlong *
CreateAsyncReallocate2DTextureTarget
          (longlong *param_1,undefined8 param_2,longlong param_3,int param_4,uint param_5,
          uint param_6)

{
  undefined1 uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  
  if (DAT_146ab6383 != '\0') {
    IsInRenderingThread();
  }
  local_38 = *(undefined4 *)(param_3 + 0x30);
  uVar1 = *(undefined1 *)(param_3 + 0x3c);
  local_48 = *(undefined4 *)(param_3 + 0x20);
  uStack_44 = *(undefined4 *)(param_3 + 0x24);
  uStack_40 = *(undefined4 *)(param_3 + 0x28);
  uStack_3c = *(undefined4 *)(param_3 + 0x2c);
  if (param_4 == 0) {
    param_4 = 1;
    uVar2 = param_6;
    if (param_6 < param_5) {
      uVar2 = param_5;
    }
    while (uVar2 >> 1 != 0) {
      param_4 = param_4 + 1;
      uVar2 = uVar2 >> 1;
    }
  }
  uVar2 = *(uint *)(param_3 + 0x40) & 0xffffffef;
  if (DAT_1464c9c14 != 0) {
    uVar2 = *(uint *)(param_3 + 0x40);
  }
  lVar3 = operator_new(0xf0);
  lVar4 = 0;
  if (lVar3 != 0) {
    lVar4 = FUN_141e8b9e0(lVar3,param_2,0,0xde1,0xffffffff,param_5,param_6,0,param_4,1,1,1,uVar1,0,0
                          ,uVar2,0,&local_48);
  }
  OpenGLTextureAllocated(lVar4,uVar2);
  *param_1 = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 141e96730 CreateGLBuffer body=363 status=ok
// SIG undefined CreateGLBuffer(void)

void TOpenGLBuffer<FOpenGLBaseStructuredBuffer,34962,&CachedBindArrayBuffer>::CreateGLBuffer
               (longlong param_1,longlong param_2,int param_3,uint param_4)

{
  int *_Dst;
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x1c);
  _Dst = (int *)(param_1 + 0x28);
  uVar2 = uVar1;
  if (param_4 != 0) {
    uVar2 = param_4;
  }
  *(uint *)(param_1 + 0x50) = uVar2;
  if (param_3 != 0) {
    *_Dst = param_3;
    FUN_141e6da00(param_3);
                    /* WARNING: Could not recover jumptable at 0x000141e9677b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_146ab4318)(0x8892,0,uVar1,param_2);
    return;
  }
  iVar3 = 0x400 - DAT_1464c97e0;
  if (iVar3 < 2) {
    ::_guard_xfg_dispatch_icall_nop(_Dst,&DAT_146ab1550 + DAT_1464c97e0,(longlong)iVar3 * 4);
    (*DAT_146ab4300)(0x400,&DAT_146ab1550);
    iVar5 = 1 - iVar3;
    ::_guard_xfg_dispatch_icall_nop(_Dst + iVar3,&DAT_146ab1550,(longlong)iVar5 << 2);
  }
  else {
    *_Dst = (&DAT_146ab1550)[DAT_1464c97e0];
    iVar5 = DAT_1464c97e0 + 1;
  }
  DAT_1464c97e0 = iVar5;
  FUN_141e6da00(*_Dst);
  if ((*(byte *)(param_1 + 0x38) & 4) == 0) {
    uVar4 = 0x88e4;
    if ((*(byte *)(param_1 + 0x20) & 6) != 0) {
      uVar4 = 0x88e8;
    }
  }
  else {
    uVar4 = 0x88e0;
  }
  (*DAT_146ab4310)(0x8892,*(undefined4 *)(param_1 + 0x50),0,uVar4);
  if (param_2 != 0) {
    uVar2 = *(uint *)(param_1 + 0x50);
    if (uVar1 <= *(uint *)(param_1 + 0x50)) {
      uVar2 = uVar1;
    }
    TOpenGLBuffer<FOpenGLBaseVertexBuffer,34962,&CachedBindArrayBuffer>::LoadData
              (param_1,0,uVar2,param_2);
  }
  AK::MemoryMgr::StartProfileThreadUsage(0x8892);
  return;
}



// FUNCTION 141e968a0 CreateIndexBuffer_RenderThread body=266 status=ok
// SIG undefined CreateIndexBuffer_RenderThread(void)

undefined8 *
FOpenGLDynamicRHI::CreateIndexBuffer_RenderThread
          (undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,longlong param_7)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  bool bVar7;
  
  puVar6 = (undefined8 *)0x0;
  puVar4 = puVar6;
  if (*(undefined8 **)(param_7 + 8) != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)(**(code **)**(undefined8 **)(param_7 + 8))();
  }
  lVar5 = operator_new(0x58);
  if ((lVar5 != 0) &&
     (puVar6 = (undefined8 *)FUN_141e68fd0(lVar5,param_4,param_5,param_6,puVar4,0,0,0),
     puVar6 != (undefined8 *)0x0)) {
    LOCK();
    *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
    UNLOCK();
  }
  if (*(longlong **)(param_7 + 8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_7 + 8) + 0x10))();
  }
  *param_2 = puVar6;
  if (puVar6 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
    UNLOCK();
    LOCK();
    piVar1 = (int *)(puVar6 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      if ((*(char *)(puVar6 + 2) == '\0') &&
         ((DAT_146ab62f5 != '\0' || (cVar3 = FOutputDevice::CanBeUsedOnAnyThread(), cVar3 == '\0')))
         ) {
        LOCK();
        bVar7 = *(int *)((longlong)puVar6 + 0xc) == 0;
        if (bVar7) {
          *(int *)((longlong)puVar6 + 0xc) = 1;
        }
        UNLOCK();
        if (bVar7) {
          TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar6);
        }
      }
      else {
        (**(code **)*puVar6)(puVar6,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 141e969b0 CreateOpenGLRHITextureOnly body=526 status=ok
// SIG undefined CreateOpenGLRHITextureOnly(void)

undefined8
FOpenGLDynamicRHI::CreateOpenGLRHITextureOnly
          (undefined8 param_1,uint param_2,uint param_3,char param_4,char param_5,undefined8 param_6
          ,undefined1 *param_7,int *param_8,uint *param_9,undefined4 param_10,uint *param_11,
          undefined8 param_12)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (*param_8 == 0) {
    if (*param_9 < 2) {
      iVar5 = 1;
      uVar1 = param_3;
      if (param_3 < param_2) {
        uVar1 = param_2;
      }
      while (uVar1 >> 1 != 0) {
        iVar5 = iVar5 + 1;
        uVar1 = uVar1 >> 1;
      }
      *param_8 = iVar5;
    }
    else {
      *param_8 = 1;
    }
  }
  if (DAT_1464c9c14 == 0) {
    *param_11 = *param_11 & 0xffffffef;
  }
  if (param_4 == '\0') {
    uVar4 = 0xde1;
    if (1 < *param_9) {
      uVar4 = 0x9100;
    }
  }
  else {
    uVar4 = 0x8513;
    if (param_5 != '\0') {
      uVar4 = 0x9009;
    }
  }
  lVar2 = operator_new(0xf0);
  if (param_4 == '\0') {
    uVar3 = 0;
    if (lVar2 != 0) {
      uVar3 = FUN_141e8b9e0(lVar2,param_1,0,uVar4,0xffffffff,param_2,param_3,0,*param_8,*param_9,1,1
                            ,*param_7,0,0,*param_11,0,param_12);
    }
  }
  else {
    uVar3 = 0;
    if (lVar2 != 0) {
      uVar3 = FUN_141e8c390(lVar2,param_1,0,uVar4,0xffffffff,param_2,param_3,0,*param_8,1,1,param_10
                            ,*param_7,1,0,*param_11,0,param_12);
    }
  }
  OpenGLTextureAllocated(uVar3,*param_11);
  return uVar3;
}



// FUNCTION 141e96bc0 CreateOpenGLTexture body=268 status=ok
// SIG undefined CreateOpenGLTexture(void)

undefined8
FOpenGLDynamicRHI::CreateOpenGLTexture
          (undefined8 param_1,undefined4 param_2,ulonglong param_3,undefined8 param_4,
          undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined4 param_8,
          undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12,
          undefined8 param_13)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = param_13;
  uVar2 = param_12;
  uVar1 = param_10;
  uVar4 = CreateOpenGLRHITextureOnly
                    (param_1,param_2,param_3,param_4,param_5,param_6,&param_7,&param_8,&param_9,
                     param_10,&param_11,param_12,param_13);
  FUN_141e9ce10(param_1,uVar4,param_2,param_3 & 0xffffffff,(char)param_4,param_5,param_6,param_7,
                param_8,param_9,uVar1,param_11,uVar2,uVar3);
  return uVar4;
}



// FUNCTION 141e96cd0 DeferShaderCompilation body=411 status=ok
// SIG undefined DeferShaderCompilation(void)

undefined8 FOpenGLProgramBinaryCache::DeferShaderCompilation(undefined4 param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined4 local_res8 [2];
  int local_res18 [2];
  undefined4 *local_48;
  longlong *local_40;
  longlong local_38;
  undefined8 local_30;
  int local_28;
  char local_24;
  
  if (DAT_146ab3de0 != 0) {
    iVar1 = *(int *)(param_2 + 1);
    local_38 = 0;
    local_30 = 0;
    local_res18[0] = (int)((float)iVar1 * 1.3333334);
    iVar5 = 0;
    iVar2 = 0;
    local_res8[0] = param_1;
    if (local_res18[0] != 0) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeTo(&local_38);
      iVar5 = (int)local_30;
      iVar2 = local_30._4_4_;
    }
    if (iVar5 < local_res18[0]) {
      iVar4 = local_res18[0] - iVar5;
      local_30 = CONCAT44(local_30._4_4_,local_res18[0]);
      if (iVar2 < local_res18[0]) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_38);
      }
      ::_guard_xfg_dispatch_icall_nop((void *)(iVar5 + local_38),0,(longlong)iVar4);
    }
    else if ((local_res18[0] < iVar5) && (iVar5 - local_res18[0] != 0)) {
      local_30 = CONCAT44(local_30._4_4_,iVar5 - (iVar5 - local_res18[0]));
      TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(&local_38);
    }
    local_24 = FUN_141645020(0x11,local_38,local_res18,*param_2,iVar1,0xf);
    if (local_24 == '\0') {
      TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=(&local_38,param_2);
    }
    else {
      iVar5 = (int)local_30;
      lVar3 = (longlong)(int)local_30;
      if ((int)local_30 < local_res18[0]) {
        local_30 = CONCAT44(local_30._4_4_,local_res18[0]);
        iVar5 = local_res18[0] - iVar5;
        if (local_30._4_4_ < local_res18[0]) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_38);
        }
        ::_guard_xfg_dispatch_icall_nop((void *)(lVar3 + local_38),0,(longlong)iVar5);
      }
      else if ((local_res18[0] < (int)local_30) && ((int)local_30 - local_res18[0] != 0)) {
        local_30 = CONCAT44(local_30._4_4_,(int)local_30 - ((int)local_30 - local_res18[0]));
        TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(&local_38);
      }
    }
    local_48 = local_res8;
    local_40 = &local_38;
    local_28 = iVar1;
    FUN_141e89ac0(DAT_146ab3de0 + 0x10,local_res18,&local_48,0);
    if (local_38 != 0) {
      FMemory::Free();
    }
    return 1;
  }
  return 0;
}



// FUNCTION 141e96e70 FUN_141e96e70 body=1514 status=ok
// SIG undefined FUN_141e96e70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141e96e70(void)

{
  undefined4 uVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined4 *puVar8;
  uint uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined4 *puVar13;
  longlong *plVar14;
  int iVar15;
  uint *puVar16;
  longlong lVar17;
  int local_res8 [2];
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  undefined8 local_88;
  uint uStack_80;
  int iStack_7c;
  undefined1 local_78 [16];
  longlong *local_68;
  undefined2 local_60;
  longlong *local_58;
  uint uStack_50;
  uint uStack_4c;
  uint *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  uVar6 = FUN_141e9bcf0();
  TSet<TTuple<unsigned_int,TMap<FOpenGLUniformName,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOpenGLUniformName,__int64,0>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TMap<FOpenGLUniformName,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOpenGLUniformName,__int64,0>_>,0>,FDefaultSetAllocator>
  ::Empty(uVar6,0);
  uVar6 = FUN_141e9bc80();
  TSet<TTuple<unsigned_int,TMap<__int64,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,__int64,0>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TMap<__int64,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,__int64,0>_>,0>,FDefaultSetAllocator>
  ::Empty(uVar6,0);
  plVar7 = (longlong *)FUN_141e9bba0();
  iVar15 = (int)plVar7[5];
  local_98 = 0;
  uStack_94 = 1;
  puStack_48 = (uint *)(plVar7 + 2);
  local_88._4_4_ = 0;
  uStack_80 = 0;
  if (iVar15 != 0) {
    puVar16 = (uint *)plVar7[4];
    if ((uint *)plVar7[4] == (uint *)0x0) {
      puVar16 = puStack_48;
    }
    uVar9 = *puVar16;
    local_98 = 0;
    uStack_80 = 0;
    while (uVar9 == 0) {
      lVar10 = (longlong)(int)local_98;
      uStack_80 = uStack_80 + 0x20;
      uVar9 = local_98 + 1;
      bVar2 = (int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_98;
      local_98 = uVar9;
      if (bVar2) goto LAB_141e96f5e;
      uVar9 = puVar16[lVar10 + 1];
    }
    uStack_94 = uVar9 - 1 & uVar9 ^ uVar9;
    iVar5 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    local_88._4_4_ = (uStack_80 - iVar5) + 0x1f;
    if (iVar15 < local_88._4_4_) {
LAB_141e96f5e:
      local_88._4_4_ = iVar15;
    }
  }
  uStack_40 = CONCAT44(local_88._4_4_,0xffffffff);
  auVar3._8_4_ = uStack_80;
  auVar3._0_8_ = uStack_40;
  auVar3._12_4_ = iStack_7c;
  local_30 = SUB84(plVar7,0);
  uStack_2c = (undefined4)((ulonglong)plVar7 >> 0x20);
  uStack_50 = local_98;
  uStack_4c = uStack_94;
  local_60 = 0;
  uStack_80 = 0xffffffff;
  iStack_7c = local_88._4_4_;
  uStack_90 = local_98;
  uStack_8c = uStack_94;
  uStack_38 = auVar3._8_8_;
  local_78._8_4_ = local_30;
  local_78._0_8_ = uStack_38;
  local_78._12_4_ = uStack_2c;
  bVar2 = local_88._4_4_ < (int)plVar7[5];
  local_68 = plVar7;
  local_58 = plVar7;
  local_88 = puStack_48;
  if (bVar2) {
    do {
      lVar10 = *(longlong *)((longlong)iStack_7c * 0x4c0 + 0x4b0 + *plVar7);
      if (lVar10 != 0) {
        plVar14 = (longlong *)(lVar10 + 0x5d0);
        if (DAT_146ab3550 == '\0') {
          (*DAT_146ab43a0)(*(undefined4 *)plVar14);
        }
        else {
          (*DAT_146ab4a80)(1,plVar14);
        }
        if (DAT_146ab3550 == '\0') {
          uVar1 = *(undefined4 *)plVar14;
          uVar6 = FUN_141e9bcf0();
          TSet<TTuple<int,FUserNavigationState>,TDefaultMapHashableKeyFuncs<int,FUserNavigationState,0>,FDefaultSetAllocator>
          ::Remove(uVar6,uVar1);
          uVar1 = *(undefined4 *)plVar14;
          uVar6 = FUN_141e9bc80();
          TSet<TTuple<unsigned_int,TMap<__int64,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,__int64,0>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TMap<__int64,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,__int64,0>_>,0>,FDefaultSetAllocator>
          ::Remove(uVar6,uVar1);
        }
        if (*(longlong *)(lVar10 + 0x620) != 0) {
          FMemory::Free();
        }
        if (*(longlong *)(lVar10 + 0x610) != 0) {
          FMemory::Free();
        }
        if (*(longlong *)(lVar10 + 0x5f0) != 0) {
          FMemory::Free();
        }
        lVar17 = 6;
        do {
          lVar17 = lVar17 + -1;
          if (plVar14[-2] != 0) {
            FMemory::Free();
          }
          iVar15 = (int)plVar14[-3];
          plVar11 = (longlong *)plVar14[-4];
          if (iVar15 != 0) {
            do {
              if (*plVar11 != 0) {
                FMemory::Free();
              }
              plVar11 = plVar11 + 2;
              iVar15 = iVar15 + -1;
            } while (iVar15 != 0);
            plVar11 = (longlong *)plVar14[-4];
          }
          if (plVar11 != (longlong *)0x0) {
            FMemory::Free(plVar11);
          }
          if (plVar14[-6] != 0) {
            FMemory::Free();
          }
          plVar14 = plVar14 + -6;
        } while (lVar17 != 0);
        lVar12 = 6;
        lVar17 = lVar10 + 0x4b0;
        do {
          lVar17 = lVar17 + -200;
          FOpenGLShaderBindings::~FOpenGLShaderBindings(lVar17);
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
        FMemory::operator_delete(lVar10,0x630);
      }
      uStack_80 = uStack_80 & ~uStack_8c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_90);
    } while (iStack_7c < (int)local_88[6]);
    if (((char)local_60 != '\0') && (local_60._1_1_ != '\0')) {
      FUN_141e95790(local_68,(int)local_68[1] - *(int *)((longlong)local_68 + 0x34),1);
    }
  }
  FUN_141e97840(plVar7,0);
  DAT_146ab3ea0 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146ab3f20) {
    _Init_thread_header(&DAT_146ab3f20);
    if (DAT_146ab3f20 == -1) {
      _DAT_1464c9950 = 0;
      _DAT_1464c9958 = 0;
      DAT_1464c9970 = (uint *)0x0;
      _DAT_1464c9978 = 0;
      _DAT_1464c9980 = 0xffffffff;
      DAT_1464c9984 = 0;
      DAT_1464c9990 = 0;
      _DAT_1464c9998 = 0;
      atexit(FUN_143e9e760);
      _Init_thread_footer(&DAT_146ab3f20);
    }
  }
  local_98 = 0;
  uStack_94 = 1;
  local_88._4_4_ = 0;
  uStack_80 = 0;
  if (DAT_1464c9978 != 0) {
    puVar16 = DAT_1464c9970;
    if (DAT_1464c9970 == (uint *)0x0) {
      puVar16 = (uint *)&DAT_1464c9960;
    }
    uVar9 = *puVar16;
    local_98 = 0;
    uStack_80 = 0;
    while (uVar9 == 0) {
      uStack_80 = uStack_80 + 0x20;
      if ((int)(DAT_1464c9978 + -1 + (DAT_1464c9978 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_98) {
        local_88._4_4_ = DAT_1464c9978;
        local_98 = local_98 + 1;
        goto LAB_141e97264;
      }
      uVar9 = puVar16[(longlong)(int)local_98 + 1];
      local_98 = local_98 + 1;
    }
    uStack_94 = -uVar9 & uVar9;
    iVar15 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar15 = 0x20;
    }
    else {
      iVar15 = 0x1f - iVar15;
    }
    local_88._4_4_ = (uStack_80 - iVar15) + 0x1f;
    if (DAT_1464c9978 < local_88._4_4_) {
      local_88._4_4_ = DAT_1464c9978;
    }
  }
LAB_141e97264:
  iVar15 = local_88._4_4_;
  uStack_40 = CONCAT44(local_88._4_4_,0xffffffff);
  auVar4._8_4_ = uStack_80;
  auVar4._0_8_ = uStack_40;
  auVar4._12_4_ = iStack_7c;
  local_30 = 0x464c9950;
  uStack_2c = 1;
  uStack_38 = auVar4._8_8_;
  local_58 = (longlong *)&DAT_1464c9950;
  uStack_50 = local_98;
  uStack_4c = uStack_94;
  puStack_48 = (uint *)&DAT_1464c9960;
  local_68 = (longlong *)&DAT_1464c9950;
  local_60 = 0;
  local_88._0_4_ = 0x464c9960;
  local_88._4_4_ = 1;
  uStack_80 = 0xffffffff;
  iStack_7c = iVar15;
  uStack_90 = local_98;
  uStack_8c = uStack_94;
  local_78._8_4_ = 0x464c9950;
  local_78._0_8_ = uStack_38;
  local_78._12_4_ = 1;
  if (iVar15 < DAT_1464c9978) {
    do {
      iVar15 = 0;
      uVar1 = *(undefined4 *)(_DAT_1464c9950 + 0xc + (longlong)iStack_7c * 0x18);
      if (DAT_146ab3550 == '\0') {
        (*DAT_146ab43a8)(uVar1);
      }
      else {
        local_res8[0] = 0;
        (*DAT_146ab43e8)(uVar1,0x8b85,local_res8);
        if (0 < local_res8[0]) {
          puVar8 = (undefined4 *)FMemory::Malloc((longlong)local_res8[0] << 2,0);
          (*DAT_146ab43d8)(uVar1,local_res8[0],local_res8,puVar8);
          puVar13 = puVar8;
          if (0 < local_res8[0]) {
            do {
              (*DAT_146ab43b0)(uVar1,*puVar13);
              (*DAT_146ab43a8)(*puVar13);
              iVar15 = iVar15 + 1;
              puVar13 = puVar13 + 1;
            } while (iVar15 < local_res8[0]);
          }
          FMemory::Free(puVar8);
        }
        (*DAT_146ab43a0)(uVar1);
      }
      uStack_80 = uStack_80 & ~uStack_8c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_90);
    } while (iStack_7c < *(int *)(CONCAT44(local_88._4_4_,(undefined4)local_88) + 0x18));
    if (((char)local_60 != '\0') && (local_60._1_1_ != '\0')) {
      TSet<TTuple<FOpenGLCompiledShaderKey,unsigned_int>,TDefaultMapHashableKeyFuncs<FOpenGLCompiledShaderKey,unsigned_int,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_68,*(int *)((longlong)local_68 + 8) -
                                   *(int *)((longlong)local_68 + 0x34),1);
    }
  }
  TSet<TTuple<FOpenGLCompiledShaderKey,unsigned_int>,TDefaultMapHashableKeyFuncs<FOpenGLCompiledShaderKey,unsigned_int,0>,FDefaultSetAllocator>
  ::Empty(&DAT_1464c9950,0);
  return;
}



// FUNCTION 141e97460 Empty body=100 status=ok
// SIG undefined Empty(void)

void TArray<FOpenGLShaderVarying,FDefaultAllocator>::Empty(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  
  plVar1 = (longlong *)*param_1;
  for (iVar2 = *(int *)(param_1 + 1); iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    plVar1 = plVar1 + 3;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  return;
}



// FUNCTION 141e974d0 FUN_141e974d0 body=230 status=ok
// SIG undefined FUN_141e974d0(void)

void FUN_141e974d0(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  
  plVar2 = (longlong *)*param_1;
  for (iVar3 = *(int *)(param_1 + 1); iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar1 = (undefined8 *)*plVar2;
    *puVar1 = &PTR_FUN_144eb5b78;
    FUN_141ea9120(puVar1 + 3);
    if (puVar1[10] != 0) {
      FMemory::Free();
    }
    if (puVar1[8] != 0) {
      FMemory::Free();
    }
    puVar1[3] = &PTR_FUN_144da0c80;
    *puVar1 = &PTR_FUN_144da0c50;
    if (puVar1[1] != 0) {
      FMemory::Free();
    }
    FMemory::Free(*plVar2);
    plVar2 = plVar2 + 1;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,param_2);
  }
  return;
}



// FUNCTION 141e975c0 Empty body=117 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<unsigned_int,TMap<FOpenGLUniformName,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOpenGLUniformName,__int64,0>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TMap<FOpenGLUniformName,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOpenGLUniformName,__int64,0>_>,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  TSparseArray<TSetElement<TTuple<FName,FLoadTimeTracker::FAccumulatorTracker>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty();
  cVar1 = TSet<TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>,TDefaultMapHashableKeyFuncs<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,param_2);
  if ((cVar1 == '\0') && (0 < (int)*(uint *)(param_1 + 0x48))) {
    uVar4 = 0;
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      uVar3 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar4;
      lVar2 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar2 = param_1 + 0x38;
      }
      uVar4 = uVar4 + 1;
      *(undefined4 *)(lVar2 + uVar3 * 4) = 0xffffffff;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 141e97640 Empty body=117 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<unsigned_int,TMap<__int64,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,__int64,0>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TMap<__int64,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,__int64,0>_>,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  TSparseArray<TSetElement<TTuple<unsigned___int64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty();
  cVar1 = TSet<TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>,TDefaultMapHashableKeyFuncs<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,param_2);
  if ((cVar1 == '\0') && (0 < (int)*(uint *)(param_1 + 0x48))) {
    uVar4 = 0;
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      uVar3 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar4;
      lVar2 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar2 = param_1 + 0x38;
      }
      uVar4 = uVar4 + 1;
      *(undefined4 *)(lVar2 + uVar3 * 4) = 0xffffffff;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 141e976c0 Empty body=181 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<FSamplerStateInitializerRHI,FOpenGLSamplerState_*>,TDefaultMapHashableKeyFuncs<FSamplerStateInitializerRHI,FOpenGLSamplerState_*,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo();
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar2 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)(param_1 + 0x2c) != uVar2) {
    *(uint *)(param_1 + 0x2c) = uVar2;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 0x10,0);
  }
  cVar1 = ConditionalRehash(param_1,param_2,1);
  if ((cVar1 == '\0') && (0 < (int)*(uint *)(param_1 + 0x48))) {
    uVar5 = 0;
    uVar6 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      uVar3 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar5;
      uVar5 = uVar5 + 1;
      *(undefined4 *)(lVar4 + uVar3 * 4) = 0xffffffff;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}



// FUNCTION 141e97780 Empty body=181 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<FOpenGLCompiledShaderKey,unsigned_int>,TDefaultMapHashableKeyFuncs<FOpenGLCompiledShaderKey,unsigned_int,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo();
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar2 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)(param_1 + 0x2c) != uVar2) {
    *(uint *)(param_1 + 0x2c) = uVar2;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 0x10,0);
  }
  cVar1 = ConditionalRehash(param_1,param_2,1);
  if ((cVar1 == '\0') && (0 < (int)*(uint *)(param_1 + 0x48))) {
    uVar5 = 0;
    uVar6 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      uVar3 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar5;
      uVar5 = uVar5 + 1;
      *(undefined4 *)(lVar4 + uVar3 * 4) = 0xffffffff;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}



// FUNCTION 141e97840 FUN_141e97840 body=117 status=ok
// SIG undefined FUN_141e97840(void)

void FUN_141e97840(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  FUN_141e978c0();
  cVar1 = FUN_141e95790(param_1,param_2);
  if ((cVar1 == '\0') && (0 < (int)*(uint *)(param_1 + 0x48))) {
    uVar4 = 0;
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      uVar3 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar4;
      lVar2 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar2 = param_1 + 0x38;
      }
      uVar4 = uVar4 + 1;
      *(undefined4 *)(lVar2 + uVar3 * 4) = 0xffffffff;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 141e978c0 FUN_141e978c0 body=474 status=ok
// SIG undefined FUN_141e978c0(void)

void FUN_141e978c0(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  uint *puVar8;
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
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_68 = 0;
  uStack_64 = 1;
  iStack_54 = 0;
  iStack_50 = 0;
  if (iVar2 != 0) {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar4 = *puVar8;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar4 == 0) {
      lVar5 = (longlong)local_68;
      iStack_50 = iStack_50 + 0x20;
      iVar7 = local_68 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar7;
      if (bVar3) goto LAB_141e97991;
      uVar4 = puVar8[lVar5 + 1];
    }
    uStack_64 = -uVar4 & uVar4;
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
    if (iVar2 < iStack_54) {
LAB_141e97991:
      iStack_54 = iVar2;
    }
  }
  local_40 = local_68;
  uStack_3c = uStack_64;
  local_30 = 0xffffffff;
  iStack_2c = iStack_54;
  iStack_28 = iStack_50;
  puStack_38 = puVar1;
  if (iStack_54 < iVar2) {
    do {
      lVar6 = 6;
      lVar5 = (longlong)iStack_2c * 0x4c0 + 0x4b0 + *param_1;
      do {
        lVar5 = lVar5 + -200;
        FOpenGLShaderBindings::~FOpenGLShaderBindings(lVar5);
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<1216,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar4 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar4) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar4;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 141e97aa0 FUN_141e97aa0 body=475 status=ok
// SIG undefined FUN_141e97aa0(void)

void FUN_141e97aa0(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  uint *puVar8;
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
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_68 = 0;
  uStack_64 = 1;
  iStack_54 = 0;
  iStack_50 = 0;
  if (iVar2 != 0) {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar4 = *puVar8;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar4 == 0) {
      lVar5 = (longlong)local_68;
      iStack_50 = iStack_50 + 0x20;
      iVar7 = local_68 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar7;
      if (bVar3) goto LAB_141e97b71;
      uVar4 = puVar8[lVar5 + 1];
    }
    uStack_64 = -uVar4 & uVar4;
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
    if (iVar2 < iStack_54) {
LAB_141e97b71:
      iStack_54 = iVar2;
    }
  }
  local_40 = local_68;
  uStack_3c = uStack_64;
  local_30 = 0xffffffff;
  iStack_2c = iStack_54;
  iStack_28 = iStack_50;
  puStack_38 = puVar1;
  if (iStack_54 < iVar2) {
    do {
      lVar5 = (longlong)iStack_2c * 0x580 + 0x4b0 + *param_1;
      FOpenGLShaderBindings::~FOpenGLShaderBindings(lVar5);
      lVar6 = 6;
      do {
        lVar5 = lVar5 + -200;
        FOpenGLShaderBindings::~FOpenGLShaderBindings(lVar5);
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<1408,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar4 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar4) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar4;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 141e97c80 FUN_141e97c80 body=504 status=ok
// SIG undefined FUN_141e97c80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141e97c80(void)

{
  int *piVar1;
  uint uVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  uint *puVar7;
  int iVar8;
  bool bVar9;
  int local_a8;
  uint uStack_a4;
  int iStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_80;
  undefined *local_78;
  undefined8 uStack_70;
  undefined1 local_68 [16];
  undefined *local_58;
  undefined2 local_50;
  undefined *local_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [16];
  undefined *local_20;
  
  local_a8 = 0;
  uStack_a4 = 1;
  iStack_94 = 0;
  iStack_90 = 0;
  iVar8 = (int)DAT_1464c98c8;
  if (iVar8 != 0) {
    puVar7 = DAT_1464c98c0;
    if (DAT_1464c98c0 == (uint *)0x0) {
      puVar7 = (uint *)&DAT_1464c98b0;
    }
    uVar2 = *puVar7;
    iStack_90 = 0;
    local_a8 = 0;
    while (uVar2 == 0) {
      lVar6 = (longlong)local_a8;
      iStack_90 = iStack_90 + 0x20;
      iVar5 = local_a8 + 1;
      bVar9 = (int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_a8;
      local_a8 = iVar5;
      iStack_94 = iVar8;
      if (bVar9) goto LAB_141e97d4a;
      uVar2 = puVar7[lVar6 + 1];
    }
    uStack_a4 = -uVar2 & uVar2;
    iVar5 = 0x1f;
    if (uStack_a4 != 0) {
      for (; uStack_a4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_a4 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    iStack_94 = (iStack_90 - iVar5) + 0x1f;
    if (iVar8 < iStack_94) {
      iStack_94 = iVar8;
    }
  }
LAB_141e97d4a:
  uStack_70 = CONCAT44(iStack_94,0xffffffff);
  auStack_30._8_4_ = iStack_90;
  auStack_30._0_8_ = uStack_70;
  auStack_30._12_4_ = uStack_8c;
  local_50 = 0;
  uStack_80 = CONCAT44(uStack_a4,local_a8);
  local_20 = &DAT_1464c98a0;
  local_48 = &DAT_1464c98a0;
  puStack_38 = &DAT_1464c98b0;
  local_58 = &DAT_1464c98a0;
  local_78 = &DAT_1464c98b0;
  local_68._8_4_ = 0x464c98a0;
  local_68._0_8_ = auStack_30._8_8_;
  local_68._12_4_ = 1;
  uStack_40 = uStack_80;
  if (iStack_94 < iVar8) {
    do {
      puVar3 = *(undefined8 **)(_DAT_1464c98a0 + 0x20 + (longlong)iStack_94 * 0x30);
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        if ((*(char *)(puVar3 + 2) == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')
            ))) {
          LOCK();
          bVar9 = *(int *)((longlong)puVar3 + 0xc) == 0;
          if (bVar9) {
            *(int *)((longlong)puVar3 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar9) {
            TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar3);
          }
        }
        else {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
      uStack_70 = CONCAT44(uStack_70._4_4_,(uint)uStack_70 & ~uStack_80._4_4_);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_80);
      iStack_94 = uStack_70._4_4_;
    } while (uStack_70._4_4_ < *(int *)(local_78 + 0x18));
    if (((char)local_50 != '\0') && (local_50._1_1_ != '\0')) {
      TSet<TTuple<FSamplerStateInitializerRHI,FOpenGLSamplerState_*>,TDefaultMapHashableKeyFuncs<FSamplerStateInitializerRHI,FOpenGLSamplerState_*,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_58,*(int *)(local_58 + 8) - *(int *)(local_58 + 0x34),1);
    }
  }
  TSet<TTuple<FSamplerStateInitializerRHI,FOpenGLSamplerState_*>,TDefaultMapHashableKeyFuncs<FSamplerStateInitializerRHI,FOpenGLSamplerState_*,0>,FDefaultSetAllocator>
  ::Empty(&DAT_1464c98a0,0);
  return;
}



// FUNCTION 141e97e80 EndBatch body=418 status=ok
// SIG undefined EndBatch(void)

void FGLQueryBatcher::EndBatch(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  void *_Dst;
  int iVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  iVar4 = (int)param_1[2];
  while (0 < iVar4) {
    plVar1 = *(longlong **)param_1[1];
    iVar4 = (int)plVar1[1];
    *(undefined1 *)((longlong)plVar1 + 0x14) = 0;
    uVar7 = 0;
    uVar8 = 0;
    if (0 < iVar4) {
      do {
        iVar6 = (int)uVar7;
        lVar2 = *plVar1;
        lVar3 = *(longlong *)(lVar2 + uVar8);
        LOCK();
        if (*(int *)(lVar3 + 0x34) == 0) {
          *(int *)(lVar3 + 0x34) = 0;
        }
        UNLOCK();
        LOCK();
        iVar4 = *(int *)(lVar3 + 0x34);
        if (iVar4 == 0) {
          *(int *)(lVar3 + 0x34) = 0;
          iVar4 = 0;
        }
        UNLOCK();
        if (*(int *)(lVar2 + 8 + uVar8) < iVar4) {
LAB_141e97f22:
          iVar4 = (int)plVar1[1];
          iVar5 = (iVar4 - iVar6) + -1;
          if (0 < iVar5) {
            iVar5 = 1;
          }
          if (iVar5 != 0) {
            ::_guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)iVar6 * 0x10 + *plVar1),
                       (void *)((longlong)(iVar4 - iVar5) * 0x10 + *plVar1),(longlong)iVar5 << 4);
            iVar4 = (int)plVar1[1];
          }
          iVar6 = iVar6 + -1;
          uVar8 = uVar8 - 0x10;
          *(int *)(plVar1 + 1) = iVar4 + -1;
        }
        else {
          FOpenGLDynamicRHI::GetRenderQueryResult_OnThisThread(param_2,lVar3,0);
          LOCK();
          iVar4 = *(int *)(lVar3 + 0x38);
          if (iVar4 == 0) {
            *(int *)(lVar3 + 0x38) = 0;
            iVar4 = 0;
          }
          UNLOCK();
          LOCK();
          iVar5 = *(int *)(lVar3 + 0x34);
          if (iVar5 == 0) {
            *(int *)(lVar3 + 0x34) = 0;
            iVar5 = 0;
          }
          UNLOCK();
          if (iVar4 == iVar5) goto LAB_141e97f22;
        }
        iVar4 = (int)plVar1[1];
        uVar7 = (ulonglong)(iVar6 + 1U);
        uVar8 = uVar8 + 0x10;
      } while ((int)(iVar6 + 1U) < iVar4);
    }
    if (iVar4 != 0) break;
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(plVar1,0x18);
    iVar4 = (int)param_1[2];
    if (iVar4 + -1 != 0) {
      _Dst = (void *)param_1[1];
      ::_guard_xfg_dispatch_icall_nop(_Dst,(void *)((longlong)_Dst + 8),(longlong)(iVar4 + -1) << 3)
      ;
      iVar4 = (int)param_1[2];
    }
    *(int *)(param_1 + 2) = iVar4 + -1;
    TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 1);
    iVar4 = (int)param_1[2];
  }
  if (*param_1 != 0) {
    iVar4 = (int)param_1[2];
    *(int *)(param_1 + 2) = iVar4 + 1;
    if (*(int *)((longlong)param_1 + 0x14) < iVar4 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 1,iVar4);
    }
    *(longlong *)(param_1[1] + (longlong)iVar4 * 8) = *param_1;
    *param_1 = 0;
  }
  return;
}



// FUNCTION 141e98030 FUN_141e98030 body=976 status=ok
// SIG undefined FUN_141e98030(void)

void FUN_141e98030(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  LARGE_INTEGER local_res8;
  
  plVar1 = param_1 + 0x31;
  *(int *)plVar1 = (int)*plVar1 + -1;
  if ((int)*plVar1 == 0) {
    cVar4 = FUN_14164b510();
    if (cVar4 != '\0') {
      (**(code **)(*param_1 + 0x20))();
    }
    if ((DAT_146ab6339 == '\0') ||
       ((**(code **)(param_1[0x19] + 0x10))(param_1 + 0x19,0,0), DAT_146ab6339 == '\0')) {
      DAT_146b17160 = 0;
    }
    else {
      lVar5 = FUN_141e9c3d0(param_1 + 0x19,0);
      dVar8 = (double)lVar5;
      if (lVar5 < 0) {
        dVar8 = dVar8 + 1.8446744073709552e+19;
      }
      dVar9 = (double)DAT_146ab6340;
      if (DAT_146ab6340 < 0) {
        dVar9 = dVar9 + 1.8446744073709552e+19;
      }
      DAT_146b17160 = (int)((dVar8 / dVar9) / DAT_1468b02f8);
    }
    DAT_146b17164 = DAT_146b17160;
    FUN_1415b2020(DAT_146b17160,DAT_146b17160,0);
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[6] + 0x10))();
    }
    dVar8 = DAT_1464c98f0;
    if (*(char *)((longlong)param_1 + 10) == '\0') {
      if (*(char *)((longlong)param_1 + 0xb) != '\0') {
        QueryPerformanceCounter(&local_res8);
        dVar8 = (double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0;
        if ((char)param_1[1] != '\0') {
          if ((((float)(dVar8 - DAT_1464c98f0) <= 0.1) || (DAT_1464c98f0 <= 0.0)) ||
             (lVar5 = param_1[6], lVar5 == 0)) {
            lVar5 = param_1[6];
            if (lVar5 != 0) {
              if (3 < (int)param_1[0x33]) {
                plVar1 = param_1 + 0x32;
                plVar2 = (longlong *)*plVar1;
                puVar3 = (undefined8 *)*plVar2;
                *puVar3 = &PTR_FUN_144eb5b78;
                FUN_141ea9120(puVar3 + 3);
                if (puVar3[10] != 0) {
                  FMemory::Free();
                }
                if (puVar3[8] != 0) {
                  FMemory::Free();
                }
                puVar3[3] = &PTR_FUN_144da0c80;
                *puVar3 = &PTR_FUN_144da0c50;
                if (puVar3[1] != 0) {
                  FMemory::Free();
                }
                FMemory::Free(*plVar2);
                iVar7 = (int)param_1[0x33];
                if (iVar7 + -1 != 0) {
                  _guard_xfg_dispatch_icall_nop
                            ((void *)*plVar1,(void *)(*plVar1 + 8),(longlong)(iVar7 + -1) << 3);
                  iVar7 = (int)param_1[0x33];
                }
                *(int *)(param_1 + 0x33) = iVar7 + -1;
                TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
                lVar5 = param_1[6];
              }
              iVar7 = (int)param_1[0x33];
              *(int *)(param_1 + 0x33) = iVar7 + 1;
              if (*(int *)((longlong)param_1 + 0x19c) < iVar7 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                          (param_1 + 0x32,iVar7);
              }
              *(longlong *)(param_1[0x32] + (longlong)iVar7 * 8) = lVar5;
              param_1[6] = 0;
            }
          }
          else {
            iVar7 = 0;
            if (0 < (int)param_1[0x33]) {
              lVar5 = 0;
              do {
                FUN_141ec0990(*(undefined8 *)(param_1[0x32] + lVar5));
                iVar7 = iVar7 + 1;
                lVar5 = lVar5 + 8;
              } while (iVar7 < (int)param_1[0x33]);
              lVar5 = param_1[6];
            }
            FUN_141ec0990(lVar5);
            if (*(longlong *)(DAT_146b17150 + 0x7b0) != 0) {
              lVar5 = *(longlong *)(*(longlong *)(DAT_146b17150 + 0x7b0) + 0x48);
              uVar6 = FUN_141672640();
              (**(code **)(lVar5 + 8))
                        (*(longlong *)(DAT_146b17150 + 0x7b0) + 0x48,0,L"SCREENSHOT",uVar6);
            }
            *(undefined4 *)((longlong)param_1 + 0x1c) = 5;
            FUN_141e974d0(param_1 + 0x32,0);
          }
        }
      }
    }
    else if ((char)param_1[1] != '\0') {
      SetEmitDrawEvents(*(undefined1 *)((longlong)param_1 + 0xd));
      FUN_141ec0990(param_1[6]);
      (*DAT_146ab40a8)(0x92e0);
      DAT_146ab62fc = 0;
      *(undefined1 *)((longlong)param_1 + 10) = 0;
      cVar4 = FUN_141ed7b80();
      dVar8 = DAT_1464c98f0;
      if ((cVar4 != '\0') && (*(longlong *)(DAT_146b17150 + 0x7b0) != 0)) {
        lVar5 = *(longlong *)(*(longlong *)(DAT_146b17150 + 0x7b0) + 0x48);
        uVar6 = FUN_141672640();
        (**(code **)(lVar5 + 8))(*(longlong *)(DAT_146b17150 + 0x7b0) + 0x48,0,L"SCREENSHOT",uVar6);
        dVar8 = DAT_1464c98f0;
      }
    }
    DAT_1464c98f0 = dVar8;
    puVar3 = (undefined8 *)param_1[6];
    *(undefined1 *)(param_1 + 1) = 0;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
    param_1[6] = 0;
    FUN_1415b23e0(DAT_146ab632c,DAT_146ab632c,0);
    FUN_141ec2500(param_1);
    return;
  }
  return;
}



// FUNCTION 141e98400 FUN_141e98400 body=174 status=ok
// SIG undefined FUN_141e98400(void)

void FUN_141e98400(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  if (DAT_146ab6339 == '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x48) == '\0') {
    return;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x38) + (longlong)*(int *)(param_1 + 0x1c) * 8);
  if (*(char *)(lVar1 + 0x3d) == '\0') {
    cVar2 = PlatformContextIsCurrent(*(undefined8 *)(lVar1 + 0x20));
    if (cVar2 == '\0') {
      PlatformReleaseRenderQuery(*(undefined4 *)(lVar1 + 0x18),*(undefined8 *)(lVar1 + 0x20));
      *(undefined1 *)(lVar1 + 0x3d) = 1;
    }
    if (*(char *)(lVar1 + 0x3d) == '\0') goto LAB_141e98474;
  }
  cVar2 = PlatformOpenGLContextValid();
  if (cVar2 != '\0') {
    PlatformGetNewRenderQuery(lVar1 + 0x18,lVar1 + 0x20);
    *(undefined1 *)(lVar1 + 0x3d) = 0;
  }
LAB_141e98474:
  (*DAT_146ab47d8)(*(undefined4 *)
                    (*(longlong *)
                      (*(longlong *)(param_1 + 0x38) + (longlong)*(int *)(param_1 + 0x1c) * 8) +
                    0x18),0x8e28);
  iVar3 = *(int *)(param_1 + 0x20) + 1;
  *(undefined1 *)(param_1 + 0x48) = 0;
  iVar4 = *(int *)(param_1 + 0x18);
  if (iVar3 <= *(int *)(param_1 + 0x18)) {
    iVar4 = iVar3;
  }
  *(int *)(param_1 + 0x20) = iVar4;
  return;
}



// FUNCTION 141e984b0 FindId body=180 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FOpenGLUniformName,__int64>,TDefaultMapHashableKeyFuncs<FOpenGLUniformName,__int64,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = FCrc::MemCrc32(param_3,10);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar2) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar2 * 0x20;
        if ((*(longlong *)(lVar4 + lVar1) == *param_3) &&
           (*(short *)(lVar4 + 8 + lVar1) == (short)param_3[1])) {
          *param_2 = iVar2;
          return param_2;
        }
        iVar2 = *(int *)(lVar4 + 0x18 + lVar1);
      } while (iVar2 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 141e98570 FindId body=168 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FSamplerPair,unsigned___int64>,TDefaultMapHashableKeyFuncs<FSamplerPair,unsigned___int64,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)((ulonglong)param_3 >> 0x20);
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    iVar3 = *(int *)((longlong)plVar2 +
                    ((longlong)(int)(iVar4 << 0x12 ^ (uint)param_3) & (longlong)(int)param_1[9] - 1U
                    ) * 4);
    if (iVar3 != -1) {
      do {
        uVar1 = *(undefined8 *)(*param_1 + (longlong)iVar3 * 0x18);
        if (((uint)uVar1 == (uint)param_3) && ((int)((ulonglong)uVar1 >> 0x20) == iVar4)) {
          *param_2 = iVar3;
          return param_2;
        }
        iVar3 = *(int *)(*param_1 + 0x10 + (longlong)iVar3 * 0x18);
      } while (iVar3 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 141e98620 FindId body=190 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FSamplerStateInitializerRHI,FOpenGLSamplerState_*>,TDefaultMapHashableKeyFuncs<FSamplerStateInitializerRHI,FOpenGLSamplerState_*,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,void *param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  void *_Buf1;
  ulonglong _Size;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = FCrc::MemCrc_DEPRECATED(param_3,DAT_146ab3ea4,0);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    iVar2 = *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar2) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      _Size = (ulonglong)DAT_146ab3ea4;
      do {
        _Buf1 = (void *)((longlong)iVar2 * 0x30 + lVar1);
        iVar3 = ::_guard_xfg_dispatch_icall_nop(_Buf1,param_3,_Size);
        if (iVar3 == 0) {
          *param_2 = iVar2;
          return param_2;
        }
        iVar2 = *(int *)((longlong)_Buf1 + 0x28);
      } while (iVar2 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 141e986e0 FindId body=229 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FOpenGLFramebufferKey,unsigned_int>,TDefaultMapHashableKeyFuncs<FOpenGLFramebufferKey,unsigned_int,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,void *param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  void *_Buf1;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = ::GetTypeHash(param_3);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    iVar2 = *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar2) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        _Buf1 = (void *)((longlong)iVar2 * 0xe0 + lVar1);
        iVar3 = ::_guard_xfg_dispatch_icall_nop(_Buf1,param_3,0xc0);
        if (((iVar3 == 0) &&
            (*(longlong *)((longlong)_Buf1 + 0xc0) == *(longlong *)((longlong)param_3 + 0xc0))) &&
           (*(int *)((longlong)_Buf1 + 200) == *(int *)((longlong)param_3 + 200))) {
          *param_2 = iVar2;
          return param_2;
        }
        iVar2 = *(int *)((longlong)_Buf1 + 0xd8);
      } while (iVar2 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 141e987d0 Flush body=530 status=ok
// SIG undefined Flush(void)

void FGLQueryBatcher::Flush(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  void *_Dst;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  bVar4 = false;
  iVar9 = *(int *)(param_1 + 0x10);
  do {
    if (iVar9 < 1) {
      return;
    }
    uVar10 = 0;
    if (bVar4) {
      return;
    }
    plVar1 = (longlong *)**(longlong **)(param_1 + 8);
    if (*(char *)((longlong)plVar1 + 0x14) != '\0') {
      return;
    }
    bVar5 = false;
    bVar4 = false;
    uVar11 = uVar10;
    if (0 < (int)plVar1[1]) {
      do {
        iVar9 = (int)uVar10;
        lVar2 = *plVar1;
        lVar3 = *(longlong *)(lVar2 + uVar11);
        if (param_3 == lVar3) {
          bVar4 = true;
        }
        LOCK();
        iVar7 = *(int *)(lVar3 + 0x34);
        if (iVar7 == 0) {
          *(int *)(lVar3 + 0x34) = 0;
          iVar7 = 0;
        }
        UNLOCK();
        if (*(int *)(lVar2 + 8 + uVar11) < iVar7) {
          iVar8 = (int)plVar1[1];
          iVar7 = (iVar8 - iVar9) + -1;
          if (0 < iVar7) {
            iVar7 = 1;
          }
          if (iVar7 != 0) {
            ::_guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)iVar9 * 0x10 + *plVar1),
                       (void *)((longlong)(iVar8 - iVar7) * 0x10 + *plVar1),(longlong)iVar7 << 4);
            iVar8 = (int)plVar1[1];
          }
LAB_141e988b9:
          iVar8 = iVar8 + -1;
          iVar9 = iVar9 + -1;
          *(int *)(plVar1 + 1) = iVar8;
          uVar11 = uVar11 - 0x10;
        }
        else {
          FOpenGLDynamicRHI::GetRenderQueryResult_OnThisThread(param_2,lVar3,0);
          LOCK();
          iVar7 = *(int *)(lVar3 + 0x38);
          if (iVar7 == 0) {
            *(int *)(lVar3 + 0x38) = 0;
            iVar7 = 0;
          }
          UNLOCK();
          LOCK();
          iVar6 = *(int *)(lVar3 + 0x34);
          if (iVar6 == 0) {
            *(int *)(lVar3 + 0x34) = 0;
            iVar6 = 0;
          }
          UNLOCK();
          iVar8 = (int)plVar1[1];
          if (iVar7 == iVar6) {
            iVar7 = (iVar8 - iVar9) + -1;
            if (0 < iVar7) {
              iVar7 = 1;
            }
            if (iVar7 == 0) goto LAB_141e988b9;
            ::_guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)iVar9 * 0x10 + *plVar1),
                       (void *)((longlong)(iVar8 - iVar7) * 0x10 + *plVar1),(longlong)iVar7 << 4);
            iVar9 = iVar9 + -1;
            iVar8 = (int)plVar1[1] + -1;
            *(int *)(plVar1 + 1) = iVar8;
            uVar11 = uVar11 - 0x10;
          }
          else {
            bVar5 = true;
          }
        }
        uVar10 = (ulonglong)(iVar9 + 1U);
        uVar11 = uVar11 + 0x10;
      } while ((int)(iVar9 + 1U) < iVar8);
      if ((bVar5) && (iVar8 != 0)) {
        *(undefined1 *)((longlong)plVar1 + 0x14) = 1;
        return;
      }
    }
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(plVar1,0x18);
    iVar9 = *(int *)(param_1 + 0x10);
    if (iVar9 + -1 != 0) {
      _Dst = *(void **)(param_1 + 8);
      ::_guard_xfg_dispatch_icall_nop(_Dst,(void *)((longlong)_Dst + 8),(longlong)(iVar9 + -1) << 3)
      ;
      iVar9 = *(int *)(param_1 + 0x10);
    }
    *(int *)(param_1 + 0x10) = iVar9 + -1;
    TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink((undefined8 *)(param_1 + 8));
    iVar9 = *(int *)(param_1 + 0x10);
  } while( true );
}



// FUNCTION 141e989f0 GLCopyAsyncTexture2D body=460 status=ok
// SIG undefined GLCopyAsyncTexture2D(void)

void GLCopyAsyncTexture2D
               (undefined8 param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
               longlong param_5,int *param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint in_stack_ffffffffffffff58;
  uint in_stack_ffffffffffffff60;
  uint in_stack_ffffffffffffff68;
  undefined1 local_48 [32];
  
  if (DAT_146ab6383 != '\0') {
    IsInRenderingThread();
  }
  uVar4 = *(uint *)(param_2 + 0x34);
  uVar1 = *(uint *)(param_5 + 0x34);
  FUN_141e9ce10(param_1,param_2,param_3,param_4,in_stack_ffffffffffffff58 & 0xffffff00,
                in_stack_ffffffffffffff60 & 0xffffff00,in_stack_ffffffffffffff68 & 0xffffff00,
                *(undefined1 *)(param_2 + 0x3c),uVar4,1,1,*(undefined4 *)(param_2 + 0x40),local_48,0
               );
  if (DAT_146ab6383 != '\0') {
    IsInRenderingThread();
  }
  uVar6 = uVar4;
  if (uVar1 <= uVar4) {
    uVar6 = uVar1;
  }
  iVar7 = uVar4 - uVar6;
  if (DAT_146ab3dee == '\0') {
    FUN_141e93eb0(param_2,param_5,uVar6,uVar1 - uVar6,iVar7);
  }
  else if (uVar6 != 0) {
    iVar5 = iVar7;
    do {
      uVar2 = *(uint *)(param_2 + 0x60) >> ((byte)iVar5 & 0x1f);
      uVar4 = 1;
      if (uVar2 != 0) {
        uVar4 = uVar2;
      }
      uVar3 = *(uint *)(param_2 + 100) >> ((byte)iVar5 & 0x1f);
      uVar2 = 1;
      if (uVar3 != 0) {
        uVar2 = uVar3;
      }
      if ((DAT_146ab3df3 != '\0') && ((uVar4 < 4 || (uVar2 < 4)))) break;
      (*DAT_146ab4948)(*(undefined4 *)(param_5 + 0x80),*(undefined4 *)(param_5 + 0x84),
                       ((uVar1 - uVar6) - iVar7) + iVar5,0,0,0,*(undefined4 *)(param_2 + 0x80),
                       *(undefined4 *)(param_2 + 0x84),iVar5,0,0,0,uVar4,uVar2,1);
      iVar5 = iVar5 + 1;
    } while ((uint)(iVar5 - iVar7) < uVar6);
  }
  LOCK();
  *param_6 = *param_6 + -1;
  UNLOCK();
  return;
}



// FUNCTION 141e98bc0 FUN_141e98bc0 body=508 status=ok
// SIG undefined FUN_141e98bc0(void)

void FUN_141e98bc0(undefined8 param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,longlong param_6,int *param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint in_stack_ffffffffffffff58;
  uint in_stack_ffffffffffffff60;
  uint in_stack_ffffffffffffff68;
  undefined1 local_48 [32];
  
  if (DAT_146ab6383 != '\0') {
    IsInRenderingThread();
  }
  uVar7 = *(uint *)(param_2 + 0x34);
  uVar1 = *(uint *)(param_6 + 0x34);
  FUN_141e9ce10(param_1,param_2,param_3,param_4,in_stack_ffffffffffffff58 & 0xffffff00,
                in_stack_ffffffffffffff60 & 0xffffff00,in_stack_ffffffffffffff68 & 0xffffff00,
                *(undefined1 *)(param_2 + 0x3c),uVar7,1,1,*(undefined4 *)(param_2 + 0x40),local_48,0
               );
  if (DAT_146ab6383 != '\0') {
    IsInRenderingThread();
  }
  uVar8 = uVar7;
  if (uVar1 <= uVar7) {
    uVar8 = uVar1;
  }
  iVar6 = uVar7 - uVar8;
  if (DAT_146ab3dee == '\0') {
    FUN_141e94570(param_2,param_6,uVar8,uVar1 - uVar8,iVar6);
  }
  else {
    uVar7 = 0;
    while( true ) {
      uVar4 = 1;
      if (*(uint *)(param_2 + 0x68) != 0) {
        uVar4 = *(uint *)(param_2 + 0x68);
      }
      if (uVar4 <= uVar7) break;
      if (uVar8 != 0) {
        iVar5 = iVar6;
        do {
          uVar2 = *(uint *)(param_2 + 0x60) >> ((byte)iVar5 & 0x1f);
          uVar4 = 1;
          if (uVar2 != 0) {
            uVar4 = uVar2;
          }
          uVar3 = *(uint *)(param_2 + 100) >> ((byte)iVar5 & 0x1f);
          uVar2 = 1;
          if (uVar3 != 0) {
            uVar2 = uVar3;
          }
          if ((DAT_146ab3df3 != '\0') && ((uVar4 < 4 || (uVar2 < 4)))) break;
          (*DAT_146ab4948)(*(undefined4 *)(param_6 + 0x80),*(undefined4 *)(param_6 + 0x84),
                           ((uVar1 - uVar8) - iVar6) + iVar5,0,0,uVar7,
                           *(undefined4 *)(param_2 + 0x80),*(undefined4 *)(param_2 + 0x84),iVar5,0,0
                           ,uVar7,uVar4,uVar2,1);
          iVar5 = iVar5 + 1;
        } while ((uint)(iVar5 - iVar6) < uVar8);
      }
      uVar7 = uVar7 + 1;
    }
  }
  LOCK();
  *param_7 = *param_7 + -1;
  UNLOCK();
  return;
}



// FUNCTION 141e98dc0 FUN_141e98dc0 body=7881 status=ok
// SIG undefined FUN_141e98dc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141e98dc0(longlong *param_1,undefined8 *param_2,int param_3,int *param_4,longlong *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  undefined8 *puVar10;
  void *pvVar11;
  undefined2 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  bool bVar18;
  char cVar19;
  bool bVar20;
  undefined1 auStack_138 [32];
  char local_118;
  char local_117;
  char local_116;
  char local_115;
  undefined8 *local_110;
  int local_108;
  int local_104;
  int local_100;
  int local_fc;
  undefined8 *local_f8;
  undefined1 local_e8 [128];
  longlong local_68;
  undefined8 local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  local_fc = param_3;
  local_f8 = param_2;
  pcVar7 = _guard_xfg_dispatch_icall_nop((char *)*param_1,"#version 310 es");
  bVar20 = pcVar7 != (char *)0x0;
  local_117 = bVar20;
  pcVar7 = _guard_xfg_dispatch_icall_nop((char *)*param_1,"gl_ViewID_OVR");
  local_116 = pcVar7 != (char *)0x0;
  pcVar7 = _guard_xfg_dispatch_icall_nop((char *)*param_1,"samplerExternalOES");
  iVar9 = param_4[2];
  local_110 = (undefined8 *)0x0;
  local_100 = 0;
  local_104 = 0;
  local_115 = (char)iVar9;
  iVar6 = `anonymous_namespace'::CStringCountOccurances(param_1,"// end extensions");
  local_118 = iVar6 == 1;
  if (*param_4 - 2U < 2) {
    bVar18 = !bVar20;
    if (bVar20) {
      `anonymous_namespace'::AppendCString(param_5,"#version 310 es");
      iVar9 = (int)param_5[1];
      if (iVar9 < 1) {
        *(int *)(param_5 + 1) = iVar9 + 2;
        if (*(int *)((longlong)param_5 + 0xc) < iVar9 + 2) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_5,iVar9);
        }
        *(undefined2 *)((longlong)iVar9 + *param_5) = 10;
      }
      else {
        *(int *)(param_5 + 1) = iVar9 + 1;
        if (*(int *)((longlong)param_5 + 0xc) < iVar9 + 1) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_5,iVar9);
        }
        pvVar11 = (void *)(*param_5 + (longlong)(iVar9 + -1));
        _guard_xfg_dispatch_icall_nop((void *)((longlong)pvVar11 + 1),pvVar11,1);
        *(undefined1 *)(*param_5 + (longlong)(iVar9 + -1)) = 10;
      }
      `anonymous_namespace'::ReplaceCString(param_1,"#version 310 es",&DAT_144eb6e65);
    }
    else if (((uint)param_4[1] < 0x18) && ((0x800788U >> (param_4[1] & 0x1fU) & 1) != 0)) {
      iVar6 = (int)param_5[1];
      iVar14 = *(int *)((longlong)param_5 + 0xc);
      if ((char)iVar9 == '\0') {
        if (iVar6 < 1) {
          *(int *)(param_5 + 1) = iVar6 + 0xe;
          if (iVar14 < iVar6 + 0xe) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_5,iVar6);
          }
          puVar10 = (undefined8 *)((longlong)iVar6 + *param_5);
          *puVar10 = 0x6e6f697372657623;
          *(undefined4 *)(puVar10 + 1) = 0x30303120;
          *(undefined2 *)((longlong)puVar10 + 0xc) = 10;
        }
        else {
          *(int *)(param_5 + 1) = iVar6 + 0xd;
          if (iVar14 < iVar6 + 0xd) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_5,iVar6);
          }
          lVar16 = (longlong)(iVar6 + -1);
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*param_5 + lVar16 + 0xd),(void *)(*param_5 + lVar16),1);
          lVar17 = *param_5;
          *(undefined8 *)(lVar17 + lVar16) = 0x6e6f697372657623;
          *(undefined4 *)(lVar17 + 8 + lVar16) = 0x30303120;
          *(undefined1 *)(lVar17 + 0xc + lVar16) = 10;
        }
      }
      else {
        bVar18 = false;
        if (iVar6 < 1) {
          *(int *)(param_5 + 1) = iVar6 + 0x11;
          if (iVar14 < iVar6 + 0x11) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_5,iVar6);
          }
          builtin_strncpy((char *)((longlong)iVar6 + *param_5),"#version 300 es\n",0x11);
        }
        else {
          *(int *)(param_5 + 1) = iVar6 + 0x10;
          if (iVar14 < iVar6 + 0x10) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_5,iVar6);
          }
          pvVar11 = (void *)(*param_5 + (longlong)(iVar6 + -1));
          _guard_xfg_dispatch_icall_nop((void *)((longlong)pvVar11 + 0x10),pvVar11,1);
          builtin_strncpy((char *)((longlong)(iVar6 + -1) + *param_5),"#version 300 es\n",0x10);
        }
      }
      pcVar8 = _guard_xfg_dispatch_icall_nop((char *)*param_1,"#version 100");
      while (pcVar8 != (char *)0x0) {
        iVar14 = (int)pcVar8 - (int)*param_1;
        iVar9 = (int)param_1[1];
        iVar6 = (iVar9 - iVar14) + -0xc;
        if (iVar6 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar14 + *param_1),
                     (void *)((longlong)(iVar14 + 0xc) + *param_1),(longlong)iVar6);
          iVar9 = (int)param_1[1];
        }
        *(int *)(param_1 + 1) = iVar9 + -0xc;
        TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(param_1);
        iVar9 = (int)param_1[1];
        if (*(int *)((longlong)param_1 + 0xc) < iVar9) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1,iVar9);
        }
        pvVar11 = (void *)(*param_1 + (longlong)iVar14);
        _guard_xfg_dispatch_icall_nop(pvVar11,pvVar11,(longlong)(iVar9 - iVar14));
        pcVar8 = _guard_xfg_dispatch_icall_nop((char *)(*param_1 + (longlong)iVar14),"#version 100")
        ;
      }
    }
    if (bVar18) goto LAB_141e99248;
  }
  else if (*param_4 == 4) {
    iVar9 = (int)param_5[1];
    if (iVar9 < 1) {
      *(int *)(param_5 + 1) = iVar9 + 0xe;
      if (*(int *)((longlong)param_5 + 0xc) < iVar9 + 0xe) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_5,iVar9);
      }
      puVar10 = (undefined8 *)((longlong)iVar9 + *param_5);
      *puVar10 = 0x6e6f697372657623;
      *(undefined4 *)(puVar10 + 1) = 0x30303120;
      *(undefined2 *)((longlong)puVar10 + 0xc) = 10;
    }
    else {
      *(int *)(param_5 + 1) = iVar9 + 0xd;
      if (*(int *)((longlong)param_5 + 0xc) < iVar9 + 0xd) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_5,iVar9);
      }
      lVar16 = (longlong)(iVar9 + -1);
      _guard_xfg_dispatch_icall_nop((void *)(*param_5 + lVar16 + 0xd),(void *)(*param_5 + lVar16),1)
      ;
      lVar17 = *param_5;
      *(undefined8 *)(lVar17 + lVar16) = 0x6e6f697372657623;
      *(undefined4 *)(lVar17 + 8 + lVar16) = 0x30303120;
      *(undefined1 *)(lVar17 + 0xc + lVar16) = 10;
    }
    pcVar8 = _guard_xfg_dispatch_icall_nop((char *)*param_1,"#version 100");
    while (pcVar8 != (char *)0x0) {
      iVar14 = (int)pcVar8 - (int)*param_1;
      iVar9 = (int)param_1[1];
      iVar6 = (iVar9 - iVar14) + -0xc;
      if (iVar6 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar14 + *param_1),
                   (void *)((longlong)(iVar14 + 0xc) + *param_1),(longlong)iVar6);
        iVar9 = (int)param_1[1];
      }
      *(int *)(param_1 + 1) = iVar9 + -0xc;
      TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(param_1);
      iVar9 = (int)param_1[1];
      if (*(int *)((longlong)param_1 + 0xc) < iVar9) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1,iVar9);
      }
      pvVar11 = (void *)(*param_1 + (longlong)iVar14);
      _guard_xfg_dispatch_icall_nop(pvVar11,pvVar11,(longlong)(iVar9 - iVar14));
      pcVar8 = _guard_xfg_dispatch_icall_nop((char *)(*param_1 + (longlong)iVar14),"#version 100");
    }
LAB_141e99248:
    iVar9 = (int)param_5[1];
    if (iVar9 < 1) {
      *(int *)(param_5 + 1) = iVar9 + 0x1e;
      if (*(int *)((longlong)param_5 + 0xc) < iVar9 + 0x1e) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_5,iVar9);
      }
      builtin_strncpy((char *)((longlong)iVar9 + *param_5),"#ifdef GL_EXT_draw_instanced\n",0x1e);
    }
    else {
      *(int *)(param_5 + 1) = iVar9 + 0x1d;
      if (*(int *)((longlong)param_5 + 0xc) < iVar9 + 0x1d) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_5,iVar9);
      }
      pvVar11 = (void *)(*param_5 + (longlong)(iVar9 + -1));
      _guard_xfg_dispatch_icall_nop((void *)((longlong)pvVar11 + 0x1d),pvVar11,1);
      builtin_strncpy((char *)(*param_5 + (longlong)(iVar9 + -1)),"#ifdef GL_EXT_draw_instanced\n",
                      0x1d);
    }
    iVar9 = (int)param_5[1];
    if (iVar9 < 1) {
      *(int *)(param_5 + 1) = iVar9 + 0x21;
      if (*(int *)((longlong)param_5 + 0xc) < iVar9 + 0x21) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_5,iVar9);
      }
      builtin_strncpy((char *)((longlong)iVar9 + *param_5),"#define UE_EXT_draw_instanced 1\n",0x21)
      ;
    }
    else {
      *(int *)(param_5 + 1) = iVar9 + 0x20;
      if (*(int *)((longlong)param_5 + 0xc) < iVar9 + 0x20) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_5,iVar9);
      }
      lVar17 = (longlong)(iVar9 + -1);
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_5 + lVar17 + 0x20),(void *)(*param_5 + lVar17),1);
      builtin_strncpy((char *)(lVar17 + *param_5),"#define UE_EXT_d",0x10);
      builtin_strncpy((char *)(lVar17 + 0x10 + *param_5),"raw_instanced 1\n",0x10);
    }
    iVar9 = (int)param_5[1];
    if (iVar9 < 1) {
      *(int *)(param_5 + 1) = iVar9 + 8;
      if (*(int *)((longlong)param_5 + 0xc) < iVar9 + 8) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_5,iVar9);
      }
      *(undefined8 *)((longlong)iVar9 + *param_5) = 0xa6669646e6523;
    }
    else {
      *(int *)(param_5 + 1) = iVar9 + 7;
      if (*(int *)((longlong)param_5 + 0xc) < iVar9 + 7) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_5,iVar9);
      }
      lVar16 = (longlong)(iVar9 + -1);
      _guard_xfg_dispatch_icall_nop((void *)(*param_5 + lVar16 + 7),(void *)(*param_5 + lVar16),1);
      lVar17 = *param_5;
      *(undefined4 *)(lVar17 + lVar16) = 0x646e6523;
      *(undefined2 *)(lVar17 + 4 + lVar16) = 0x6669;
      *(undefined1 *)(lVar17 + 6 + lVar16) = 10;
    }
  }
  iVar9 = local_fc;
  if ((*(char *)((longlong)param_4 + 0xd) != '\0') && (local_fc == 0x8b30)) {
    iVar6 = (int)param_5[1];
    if (iVar6 < 1) {
      *(int *)(param_5 + 1) = iVar6 + 0x2b;
      if (*(int *)((longlong)param_5 + 0xc) < iVar6 + 0x2b) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_5,iVar6);
      }
      builtin_strncpy((char *)((longlong)iVar6 + *param_5),
                      "#define UE_EXT_shader_framebuffer_fetch 1\n",0x2b);
    }
    else {
      *(int *)(param_5 + 1) = iVar6 + 0x2a;
      if (*(int *)((longlong)param_5 + 0xc) < iVar6 + 0x2a) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_5,iVar6);
      }
      pvVar11 = (void *)(*param_5 + (longlong)(iVar6 + -1));
      _guard_xfg_dispatch_icall_nop((void *)((longlong)pvVar11 + 0x2a),pvVar11,1);
      builtin_strncpy((char *)(*param_5 + (longlong)(iVar6 + -1)),
                      "#define UE_EXT_shader_framebuffer_fetch 1\n",0x2a);
    }
  }
  if (pcVar7 != (char *)0x0) {
    pcVar7 = _guard_xfg_dispatch_icall_nop((char *)*param_1,"// Uses samplerExternalOES");
    while (pcVar7 != (char *)0x0) {
      iVar15 = (int)pcVar7 - (int)*param_1;
      iVar6 = (int)param_1[1];
      iVar14 = (iVar6 - iVar15) + -0x1a;
      if (iVar14 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar15 + *param_1),
                   (void *)((longlong)(iVar15 + 0x1a) + *param_1),(longlong)iVar14);
        iVar6 = (int)param_1[1];
      }
      *(int *)(param_1 + 1) = iVar6 + -0x1a;
      TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(param_1);
      iVar6 = (int)param_1[1];
      if (*(int *)((longlong)param_1 + 0xc) < iVar6) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1,iVar6);
      }
      pvVar11 = (void *)(*param_1 + (longlong)iVar15);
      _guard_xfg_dispatch_icall_nop(pvVar11,pvVar11,(longlong)(iVar6 - iVar15));
      pcVar7 = _guard_xfg_dispatch_icall_nop
                         ((char *)(*param_1 + (longlong)iVar15),"// Uses samplerExternalOES");
    }
    `anonymous_namespace'::MoveHashLines(param_5,param_1);
    iVar6 = (int)param_5[1];
    iVar14 = *(int *)((longlong)param_5 + 0xc);
    if (DAT_146ab62eb == '\0') {
      if (iVar6 < 1) {
        *(int *)(param_5 + 1) = iVar6 + 0x26;
        if (iVar14 < iVar6 + 0x26) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_5,iVar6);
        }
        builtin_strncpy((char *)((longlong)iVar6 + *param_5),
                        "#define samplerExternalOES sampler2D\n",0x26);
      }
      else {
        *(int *)(param_5 + 1) = iVar6 + 0x25;
        if (iVar14 < iVar6 + 0x25) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_5,iVar6);
        }
        pvVar11 = (void *)(*param_5 + (longlong)(iVar6 + -1));
        _guard_xfg_dispatch_icall_nop((void *)((longlong)pvVar11 + 0x25),pvVar11,1);
        builtin_strncpy((char *)(*param_5 + (longlong)(iVar6 + -1)),
                        "#define samplerExternalOES sampler2D\n",0x25);
      }
    }
    else {
      if (iVar6 < 1) {
        *(int *)(param_5 + 1) = iVar6 + 3;
        if (iVar14 < iVar6 + 3) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_5,iVar6);
        }
        puVar12 = (undefined2 *)((longlong)iVar6 + *param_5);
        *puVar12 = 0xa0a;
        *(undefined1 *)(puVar12 + 1) = 0;
      }
      else {
        *(int *)(param_5 + 1) = iVar6 + 2;
        if (iVar14 < iVar6 + 2) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_5,iVar6);
        }
        pvVar11 = (void *)(*param_5 + (longlong)(iVar6 + -1));
        _guard_xfg_dispatch_icall_nop((void *)((longlong)pvVar11 + 2),pvVar11,1);
        *(undefined2 *)(*param_5 + (longlong)(iVar6 + -1)) = 0xa0a;
      }
      iVar6 = (int)param_5[1];
      if (iVar6 < 1) {
        *(int *)(param_5 + 1) = iVar6 + 0x30;
        if (*(int *)((longlong)param_5 + 0xc) < iVar6 + 0x30) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_5,iVar6);
        }
        builtin_strncpy((char *)((longlong)iVar6 + *param_5),
                        "#extension GL_OES_EGL_image_external : require\n",0x30);
      }
      else {
        *(int *)(param_5 + 1) = iVar6 + 0x2f;
        if (*(int *)((longlong)param_5 + 0xc) < iVar6 + 0x2f) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_5,iVar6);
        }
        pvVar11 = (void *)(*param_5 + (longlong)(iVar6 + -1));
        _guard_xfg_dispatch_icall_nop((void *)((longlong)pvVar11 + 0x2f),pvVar11,1);
        builtin_strncpy((char *)(*param_5 + (longlong)(iVar6 + -1)),
                        "#extension GL_OES_EGL_image_external : require\n",0x2f);
      }
      iVar6 = (int)param_5[1];
      if (iVar6 < 1) {
        *(int *)(param_5 + 1) = iVar6 + 3;
        if (*(int *)((longlong)param_5 + 0xc) < iVar6 + 3) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_5,iVar6);
        }
        lVar17 = *param_5;
        *(undefined2 *)(iVar6 + lVar17) = 0xa0a;
        *(undefined1 *)((undefined2 *)(iVar6 + lVar17) + 1) = 0;
      }
      else {
        *(int *)(param_5 + 1) = iVar6 + 2;
        if (*(int *)((longlong)param_5 + 0xc) < iVar6 + 2) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_5,iVar6);
        }
        pvVar11 = (void *)(*param_5 + (longlong)(iVar6 + -1));
        _guard_xfg_dispatch_icall_nop((void *)((longlong)pvVar11 + 2),pvVar11,1);
        *(undefined2 *)(*param_5 + (longlong)(iVar6 + -1)) = 0xa0a;
      }
    }
  }
  if (local_116 != '\0') {
    `anonymous_namespace'::MoveHashLines(param_5,param_1);
    iVar6 = (int)param_5[1];
    iVar14 = *(int *)((longlong)param_5 + 0xc);
    if (DAT_146ab62ea == '\0') {
      if (iVar6 < 1) {
        *(int *)(param_5 + 1) = iVar6 + 0x19;
        if (iVar14 < iVar6 + 0x19) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_5,iVar6);
        }
        builtin_strncpy((char *)((longlong)iVar6 + *param_5),"#define gl_ViewID_OVR 0\n",0x19);
      }
      else {
        *(int *)(param_5 + 1) = iVar6 + 0x18;
        if (iVar14 < iVar6 + 0x18) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_5,iVar6);
        }
        lVar17 = (longlong)(iVar6 + -1);
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*param_5 + lVar17 + 0x18),(void *)(*param_5 + lVar17),1);
        builtin_strncpy((char *)(lVar17 + *param_5),"#define gl_ViewI",0x10);
        *(undefined8 *)(lVar17 + 0x10 + *param_5) = 0xa302052564f5f44;
      }
    }
    else {
      if (iVar6 < 1) {
        *(int *)(param_5 + 1) = iVar6 + 3;
        if (iVar14 < iVar6 + 3) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_5,iVar6);
        }
        puVar12 = (undefined2 *)((longlong)iVar6 + *param_5);
        *puVar12 = 0xa0a;
        *(undefined1 *)(puVar12 + 1) = 0;
      }
      else {
        *(int *)(param_5 + 1) = iVar6 + 2;
        if (iVar14 < iVar6 + 2) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_5,iVar6);
        }
        pvVar11 = (void *)(*param_5 + (longlong)(iVar6 + -1));
        _guard_xfg_dispatch_icall_nop((void *)((longlong)pvVar11 + 2),pvVar11,1);
        *(undefined2 *)(*param_5 + (longlong)(iVar6 + -1)) = 0xa0a;
      }
      iVar6 = (int)param_5[1];
      if (iVar6 < 1) {
        *(int *)(param_5 + 1) = iVar6 + 0x27;
        if (*(int *)((longlong)param_5 + 0xc) < iVar6 + 0x27) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_5,iVar6);
        }
        builtin_strncpy((char *)((longlong)iVar6 + *param_5),
                        "#extension GL_OVR_multiview2 : enable\n",0x27);
      }
      else {
        *(int *)(param_5 + 1) = iVar6 + 0x26;
        if (*(int *)((longlong)param_5 + 0xc) < iVar6 + 0x26) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_5,iVar6);
        }
        pvVar11 = (void *)(*param_5 + (longlong)(iVar6 + -1));
        _guard_xfg_dispatch_icall_nop((void *)((longlong)pvVar11 + 0x26),pvVar11,1);
        builtin_strncpy((char *)(*param_5 + (longlong)(iVar6 + -1)),
                        "#extension GL_OVR_multiview2 : enable\n",0x26);
      }
      iVar6 = (int)param_5[1];
      if (iVar6 < 1) {
        *(int *)(param_5 + 1) = iVar6 + 3;
        if (*(int *)((longlong)param_5 + 0xc) < iVar6 + 3) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_5,iVar6);
        }
        lVar17 = *param_5;
        *(undefined2 *)(iVar6 + lVar17) = 0xa0a;
        *(undefined1 *)((undefined2 *)(iVar6 + lVar17) + 1) = 0;
      }
      else {
        *(int *)(param_5 + 1) = iVar6 + 2;
        if (*(int *)((longlong)param_5 + 0xc) < iVar6 + 2) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_5,iVar6);
        }
        pvVar11 = (void *)(*param_5 + (longlong)(iVar6 + -1));
        _guard_xfg_dispatch_icall_nop((void *)((longlong)pvVar11 + 2),pvVar11,1);
        *(undefined2 *)(*param_5 + (longlong)(iVar6 + -1)) = 0xa0a;
      }
    }
  }
  cVar5 = local_117;
  switch(param_4[1] + -1) {
  default:
    if (local_117 != '\0') goto LAB_141e99a9f;
    bVar20 = true;
    break;
  case 5:
  case 0xc:
  case 0xe:
  case 0x17:
LAB_141e99a9f:
    bVar20 = false;
  }
  switch(param_4[1] + -1) {
  default:
switchD_141e99abe_caseD_0:
    `anonymous_namespace'::MoveHashLines(param_5,param_1);
    if ((*(char *)((longlong)param_4 + 9) == '\0') && (bVar20)) {
      iVar6 = (int)param_5[1];
      if (iVar6 < 1) {
        *(int *)(param_5 + 1) = iVar6 + 0x22;
        if (*(int *)((longlong)param_5 + 0xc) < iVar6 + 0x22) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_5,iVar6);
        }
        builtin_strncpy((char *)((longlong)iVar6 + *param_5),"#define INTERFACE_LOCATION(Pos) \n",
                        0x22);
      }
      else {
        FUN_141e9da90(param_5,"#define INTERFACE_LOCATION(Pos) \n",0x21,iVar6 + -1);
      }
      iVar6 = (int)param_5[1];
      if (iVar6 < 1) {
        *(int *)(param_5 + 1) = iVar6 + 0x7e;
        if (*(int *)((longlong)param_5 + 0xc) < iVar6 + 0x7e) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_5,iVar6);
        }
        builtin_strncpy((char *)((longlong)iVar6 + *param_5),
                        "#define INTERFACE_BLOCK(Pos, Interp, Modifiers, Semantic, PreType, PostType) Modifiers Semantic { Interp PreType PostType; }\n"
                        ,0x7e);
      }
      else {
        FUN_141e9da90(param_5,
                      "#define INTERFACE_BLOCK(Pos, Interp, Modifiers, Semantic, PreType, PostType) Modifiers Semantic { Interp PreType PostType; }\n"
                      ,0x7d,iVar6 + -1);
      }
    }
    else {
      iVar6 = (int)param_5[1];
      if (*param_4 == 1) {
        if (iVar6 < 1) {
          *(int *)(param_5 + 1) = iVar6 + 0x34;
          if (*(int *)((longlong)param_5 + 0xc) < iVar6 + 0x34) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_5,iVar6);
          }
          builtin_strncpy((char *)((longlong)iVar6 + *param_5),
                          "#extension GL_ARB_separate_shader_objects : enable\n",0x34);
        }
        else {
          *(int *)(param_5 + 1) = iVar6 + 0x33;
          if (*(int *)((longlong)param_5 + 0xc) < iVar6 + 0x33) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_5,iVar6);
          }
          pvVar11 = (void *)(*param_5 + (longlong)(iVar6 + -1));
          _guard_xfg_dispatch_icall_nop((void *)((longlong)pvVar11 + 0x33),pvVar11,1);
          builtin_strncpy((char *)(*param_5 + (longlong)(iVar6 + -1)),
                          "#extension GL_ARB_separate_shader_objects : enable\n",0x33);
        }
        iVar6 = (int)param_5[1];
        if (iVar6 < 1) {
          *(int *)(param_5 + 1) = iVar6 + 0x37;
          if (*(int *)((longlong)param_5 + 0xc) < iVar6 + 0x37) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_5,iVar6);
          }
          builtin_strncpy((char *)((longlong)iVar6 + *param_5),
                          "#define INTERFACE_LOCATION(Pos) layout(location=Pos) \n",0x37);
        }
        else {
          *(int *)(param_5 + 1) = iVar6 + 0x36;
          if (*(int *)((longlong)param_5 + 0xc) < iVar6 + 0x36) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_5,iVar6);
          }
          pvVar11 = (void *)(*param_5 + (longlong)(iVar6 + -1));
          _guard_xfg_dispatch_icall_nop((void *)((longlong)pvVar11 + 0x36),pvVar11,1);
          builtin_strncpy((char *)(*param_5 + (longlong)(iVar6 + -1)),
                          "#define INTERFACE_LOCATION(Pos) layout(location=Pos) \n",0x36);
        }
        iVar6 = (int)param_5[1];
        if (iVar6 < 1) {
          *(int *)(param_5 + 1) = iVar6 + 0x91;
          if (*(int *)((longlong)param_5 + 0xc) < iVar6 + 0x91) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_5,iVar6);
          }
          builtin_strncpy((char *)((longlong)iVar6 + *param_5),
                          "#define INTERFACE_BLOCK(Pos, Interp, Modifiers, Semantic, PreType, PostType) layout(location=Pos) Interp Modifiers struct { PreType PostType; }\n"
                          ,0x91);
        }
        else {
          *(int *)(param_5 + 1) = iVar6 + 0x90;
          if (*(int *)((longlong)param_5 + 0xc) < iVar6 + 0x90) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_5,iVar6);
          }
          lVar16 = (longlong)(iVar6 + -1);
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*param_5 + lVar16 + 0x90),(void *)(*param_5 + lVar16),1);
          lVar17 = *param_5;
          builtin_strncpy((char *)(lVar16 + lVar17),"#define INTERFAC",0x10);
          builtin_strncpy((char *)(lVar16 + 0x10 + lVar17),"E_BLOCK(Pos, Int",0x10);
          builtin_strncpy((char *)(lVar16 + 0x20 + lVar17),"erp, Modifiers, ",0x10);
          builtin_strncpy((char *)(lVar16 + 0x30 + lVar17),"Semantic, PreTyp",0x10);
          builtin_strncpy((char *)(lVar16 + 0x40 + lVar17),"e, PostType) lay",0x10);
          builtin_strncpy((char *)(lVar16 + 0x50 + lVar17),"out(location=Pos",0x10);
          builtin_strncpy((char *)(lVar16 + 0x60 + lVar17),") Interp Modifie",0x10);
          builtin_strncpy((char *)(lVar16 + 0x70 + lVar17),"rs struct { PreT",0x10);
          builtin_strncpy((char *)(lVar16 + 0x80 + lVar17),"ype PostType; }\n",0x10);
        }
      }
      else {
        if (iVar6 < 1) {
          *(int *)(param_5 + 1) = iVar6 + 0x37;
          if (*(int *)((longlong)param_5 + 0xc) < iVar6 + 0x37) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_5,iVar6);
          }
          builtin_strncpy((char *)((longlong)iVar6 + *param_5),
                          "#define INTERFACE_LOCATION(Pos) layout(location=Pos) \n",0x37);
        }
        else {
          FUN_141e9da90(param_5,"#define INTERFACE_LOCATION(Pos) layout(location=Pos) \n",0x36,
                        iVar6 + -1);
        }
        iVar6 = (int)param_5[1];
        if (iVar6 < 1) {
          *(int *)(param_5 + 1) = iVar6 + 0x8c;
          if (*(int *)((longlong)param_5 + 0xc) < iVar6 + 0x8c) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_5,iVar6);
          }
          builtin_strncpy((char *)((longlong)iVar6 + *param_5),
                          "#define INTERFACE_BLOCK(Pos, Interp, Modifiers, Semantic, PreType, PostType) layout(location=Pos) Modifiers Semantic { PreType PostType; }\n"
                          ,0x8c);
        }
        else {
          FUN_141e9da90(param_5,
                        "#define INTERFACE_BLOCK(Pos, Interp, Modifiers, Semantic, PreType, PostType) layout(location=Pos) Modifiers Semantic { PreType PostType; }\n"
                        ,0x8b,iVar6 + -1);
        }
      }
    }
    break;
  case 7:
  case 8:
  case 9:
  case 0xc:
  case 0x17:
    if (!bVar20) goto switchD_141e99abe_caseD_0;
  }
  if ((*param_4 == 1) &&
     (pcVar7 = _guard_xfg_dispatch_icall_nop((char *)*param_5,"#version 150"), pcVar7 != (char *)0x0
     )) {
    iVar6 = (int)param_5[1];
    if (iVar6 < 1) {
      *(int *)(param_5 + 1) = iVar6 + 3;
      if (*(int *)((longlong)param_5 + 0xc) < iVar6 + 3) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_5,iVar6);
      }
      lVar17 = *param_5;
      *(undefined2 *)(iVar6 + lVar17) = 0xa0a;
      *(undefined1 *)((undefined2 *)(iVar6 + lVar17) + 1) = 0;
    }
    else {
      FUN_141e9da90(param_5,&DAT_144eb6fa4,2,iVar6 + -1);
    }
    iVar6 = (int)param_5[1];
    if (iVar6 < 1) {
      *(int *)(param_5 + 1) = iVar6 + 0x28;
      if (*(int *)((longlong)param_5 + 0xc) < iVar6 + 0x28) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_5,iVar6);
      }
      builtin_strncpy((char *)((longlong)iVar6 + *param_5),
                      "#extension GL_ARB_gpu_shader5 : enable\n",0x28);
    }
    else {
      FUN_141e9da90(param_5,"#extension GL_ARB_gpu_shader5 : enable\n",0x27,iVar6 + -1);
    }
    iVar6 = (int)param_5[1];
    if (iVar6 < 1) {
      *(int *)(param_5 + 1) = iVar6 + 3;
      if (*(int *)((longlong)param_5 + 0xc) < iVar6 + 3) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_5,iVar6);
      }
      lVar17 = *param_5;
      *(undefined2 *)(iVar6 + lVar17) = 0xa0a;
      *(undefined1 *)((undefined2 *)(iVar6 + lVar17) + 1) = 0;
    }
    else {
      FUN_141e9da90(param_5,&DAT_144eb7014,2,iVar6 + -1);
    }
  }
  puVar10 = local_f8;
  if (1 < *(int *)(local_f8 + 1)) {
    iVar6 = (int)param_5[1];
    if (iVar6 < 1) {
      *(int *)(param_5 + 1) = iVar6 + 4;
      if (*(int *)((longlong)param_5 + 0xc) < iVar6 + 4) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_5,iVar6);
      }
      *(undefined4 *)((longlong)iVar6 + *param_5) = 0x202f2f;
    }
    else {
      FUN_141e9da90(param_5,&DAT_144eb7084,3,iVar6 + -1);
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_e8,*puVar10);
    `anonymous_namespace'::AppendCString(param_5,local_60);
    if (local_68 != 0) {
      FMemory::Free();
    }
    iVar6 = (int)param_5[1];
    if (iVar6 < 1) {
      *(int *)(param_5 + 1) = iVar6 + 2;
      if (*(int *)((longlong)param_5 + 0xc) < iVar6 + 2) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_5,iVar6);
      }
      *(undefined2 *)((longlong)iVar6 + *param_5) = 10;
    }
    else {
      FUN_141e9da90(param_5,&DAT_144eb70fc,1,iVar6 + -1);
    }
  }
  if (((local_116 != '\0') && (DAT_146ab62ea != '\0')) && (iVar9 == 0x8b31)) {
    iVar6 = (int)param_5[1];
    if (iVar6 < 1) {
      *(int *)(param_5 + 1) = iVar6 + 3;
      if (*(int *)((longlong)param_5 + 0xc) < iVar6 + 3) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_5,iVar6);
      }
      lVar17 = *param_5;
      *(undefined2 *)(iVar6 + lVar17) = 0xa0a;
      *(undefined1 *)((undefined2 *)(iVar6 + lVar17) + 1) = 0;
    }
    else {
      FUN_141e9da90(param_5,&DAT_144eb717c,2,iVar6 + -1);
    }
    iVar6 = (int)param_5[1];
    if (iVar6 < 1) {
      *(int *)(param_5 + 1) = iVar6 + 0x1b;
      if (*(int *)((longlong)param_5 + 0xc) < iVar6 + 0x1b) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_5,iVar6);
      }
      builtin_strncpy((char *)((longlong)iVar6 + *param_5),"layout(num_views = 2) in;\n",0x1b);
    }
    else {
      FUN_141e9da90(param_5,"layout(num_views = 2) in;\n",0x1a,iVar6 + -1);
    }
    iVar6 = (int)param_5[1];
    if (iVar6 < 1) {
      *(int *)(param_5 + 1) = iVar6 + 3;
      if (*(int *)((longlong)param_5 + 0xc) < iVar6 + 3) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_5,iVar6);
      }
      lVar17 = *param_5;
      *(undefined2 *)(iVar6 + lVar17) = 0xa0a;
      *(undefined1 *)((undefined2 *)(iVar6 + lVar17) + 1) = 0;
    }
    else {
      FUN_141e9da90(param_5,&DAT_144eb723c,2,iVar6 + -1);
    }
  }
  if (*param_4 == 2) {
    if ((*(char *)((longlong)param_4 + 10) == '\0') &&
       (pcVar7 = _guard_xfg_dispatch_icall_nop
                           ((char *)*param_1,"#extension GL_OES_standard_derivatives"),
       pcVar7 != (char *)0x0)) {
      `anonymous_namespace'::ReplaceCString
                (param_1,"#extension GL_OES_standard_derivatives : enable",
                 "#define dFdx(a) (0.001953125)\n#define dFdy(a) (0.001953125)\n#define fwidth(a) (0.00390625)\n"
                );
    }
    puVar10 = local_110;
    cVar19 = local_118;
    if ((((uint)param_4[1] < 0x18) && ((0x800788U >> (param_4[1] & 0x1fU) & 1) != 0)) &&
       (cVar5 == '\0')) {
      iVar6 = 0;
      pcVar7 = (char *)0x0;
      iVar14 = FUN_14274f1e0();
      if (0 < iVar14) {
        if (iVar14 < 3) {
          pcVar7 = "#define HDR_32BPP_ENCODE_MODE 0.0\n";
        }
        else if (iVar14 == 3) {
          pcVar7 = "#define HDR_32BPP_ENCODE_MODE 1.0\n";
        }
        else if (iVar14 == 4) {
          pcVar7 = "#define HDR_32BPP_ENCODE_MODE 2.0\n";
        }
        else if (iVar14 == 5) {
          pcVar7 = "#define HDR_32BPP_ENCODE_MODE 3.0\n";
        }
      }
      `anonymous_namespace'::AppendCString(param_5,pcVar7);
      if ((*(char *)((longlong)param_4 + 0xe) != '\0') && (iVar9 == 0x8b30)) {
        iVar14 = (int)param_5[1];
        if (iVar14 < 1) {
          *(int *)(param_5 + 1) = iVar14 + 0x36;
          if (*(int *)((longlong)param_5 + 0xc) < iVar14 + 0x36) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_5,iVar14);
          }
          builtin_strncpy((char *)((longlong)iVar14 + *param_5),
                          "#undef GL_ARM_shader_framebuffer_fetch_depth_stencil\n",0x36);
        }
        else {
          FUN_141e9da90(param_5,"#undef GL_ARM_shader_framebuffer_fetch_depth_stencil\n",0x35,
                        iVar14 + -1);
        }
      }
      cVar19 = local_118;
      puVar10 = local_110;
      if (local_115 == '\0') {
        if (iVar9 == 0x8b30) {
          if (*(char *)((longlong)param_4 + 0xf) != '\0') {
            iVar9 = (int)param_5[1];
            if (iVar9 < 1) {
              *(int *)(param_5 + 1) = iVar9 + 0x2a;
              if (*(int *)((longlong)param_5 + 0xc) < iVar9 + 0x2a) {
                TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_5,iVar9);
              }
              builtin_strncpy((char *)((longlong)iVar9 + *param_5),
                              "#define DONTEMITSAMPLERDEFAULTPRECISION \n",0x2a);
            }
            else {
              FUN_141e9da90(param_5,"#define DONTEMITSAMPLERDEFAULTPRECISION \n",0x29,iVar9 + -1);
            }
          }
          if (((char)param_4[4] == '\0') || (*(char *)((longlong)param_4 + 0x11) == '\0')) {
            pcVar7 = 
            "#define DONTEMITEXTENSIONSHADERTEXTURELODENABLE \n#define texture2DLodEXT(a, b, c) texture2D(a, b) \n#define textureCubeLodEXT(a, b, c) textureCube(a, b) \n"
            ;
LAB_141e9a7c6:
            `anonymous_namespace'::AppendCString(param_5,pcVar7);
          }
          else if (*(char *)((longlong)param_4 + 0x12) != '\0') {
            pcVar7 = "#define textureCubeLodEXT textureCubeLod \n";
            goto LAB_141e9a7c6;
          }
          puVar10 = local_110;
          cVar19 = local_118;
          if (*(char *)((longlong)param_4 + 0x19) != '\0') {
            pcVar7 = _guard_xfg_dispatch_icall_nop((char *)*param_1,"precision mediump float;");
            if (pcVar7 == (char *)0x0) {
              local_108 = 0x13f;
              TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_110,0);
              lVar17 = 2;
              puVar10 = local_110;
              pcVar7 = 
              "highp float round(highp float value)\n{\n\treturn floor(value + 0.5);\n}\nhighp vec2 round(highp vec2 value)\n{\n\treturn floor(value + vec2(0.5, 0.5));\n}\nhighp vec3 round(highp vec3 value)\n{\n\treturn floor(value + vec3(0.5, 0.5, 0.5));\n}\nhighp vec4 round(highp vec4 value)\n{\n\treturn floor(value + vec4(0.5, 0.5, 0.5, 0.5));\n}\n"
              ;
              do {
                pcVar8 = pcVar7;
                puVar13 = puVar10;
                uVar4 = *(undefined8 *)(pcVar8 + 8);
                *puVar13 = *(undefined8 *)pcVar8;
                puVar13[1] = uVar4;
                uVar4 = *(undefined8 *)(pcVar8 + 0x18);
                puVar13[2] = *(undefined8 *)(pcVar8 + 0x10);
                puVar13[3] = uVar4;
                uVar4 = *(undefined8 *)(pcVar8 + 0x28);
                puVar13[4] = *(undefined8 *)(pcVar8 + 0x20);
                puVar13[5] = uVar4;
                uVar4 = *(undefined8 *)(pcVar8 + 0x38);
                puVar13[6] = *(undefined8 *)(pcVar8 + 0x30);
                puVar13[7] = uVar4;
                uVar4 = *(undefined8 *)(pcVar8 + 0x48);
                puVar13[8] = *(undefined8 *)(pcVar8 + 0x40);
                puVar13[9] = uVar4;
                uVar4 = *(undefined8 *)(pcVar8 + 0x58);
                puVar13[10] = *(undefined8 *)(pcVar8 + 0x50);
                puVar13[0xb] = uVar4;
                uVar4 = *(undefined8 *)(pcVar8 + 0x68);
                puVar13[0xc] = *(undefined8 *)(pcVar8 + 0x60);
                puVar13[0xd] = uVar4;
                uVar4 = *(undefined8 *)(pcVar8 + 0x78);
                puVar13[0xe] = *(undefined8 *)(pcVar8 + 0x70);
                puVar13[0xf] = uVar4;
                lVar17 = lVar17 + -1;
                puVar10 = puVar13 + 0x10;
                pcVar7 = pcVar8 + 0x80;
              } while (lVar17 != 0);
              uVar4 = *(undefined8 *)(pcVar8 + 0x88);
              puVar13[0x10] = *(undefined8 *)(pcVar8 + 0x80);
              puVar13[0x11] = uVar4;
              uVar1 = *(undefined4 *)(pcVar8 + 0x94);
              uVar2 = *(undefined4 *)(pcVar8 + 0x98);
              uVar3 = *(undefined4 *)(pcVar8 + 0x9c);
              *(undefined4 *)(puVar13 + 0x12) = *(undefined4 *)(pcVar8 + 0x90);
              *(undefined4 *)((longlong)puVar13 + 0x94) = uVar1;
              *(undefined4 *)(puVar13 + 0x13) = uVar2;
              *(undefined4 *)((longlong)puVar13 + 0x9c) = uVar3;
              uVar1 = *(undefined4 *)(pcVar8 + 0xa4);
              uVar2 = *(undefined4 *)(pcVar8 + 0xa8);
              uVar3 = *(undefined4 *)(pcVar8 + 0xac);
              *(undefined4 *)(puVar13 + 0x14) = *(undefined4 *)(pcVar8 + 0xa0);
              *(undefined4 *)((longlong)puVar13 + 0xa4) = uVar1;
              *(undefined4 *)(puVar13 + 0x15) = uVar2;
              *(undefined4 *)((longlong)puVar13 + 0xac) = uVar3;
              puVar13[0x16] = *(undefined8 *)(pcVar8 + 0xb0);
              *(undefined4 *)(puVar13 + 0x17) = *(undefined4 *)(pcVar8 + 0xb8);
              *(undefined2 *)((longlong)puVar13 + 0xbc) = *(undefined2 *)(pcVar8 + 0xbc);
              *(char *)((longlong)puVar13 + 0xbe) = pcVar8[0xbe];
            }
            else {
              local_108 = 0x14f;
              TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_110,0);
              lVar17 = 2;
              puVar10 = local_110;
              pcVar7 = 
              "mediump float round(mediump float value)\n{\n\treturn floor(value + 0.5);\n}\nmediump vec2 round(mediump vec2 value)\n{\n\treturn floor(value + vec2(0.5, 0.5));\n}\nmediump vec3 round(mediump vec3 value)\n{\n\treturn floor(value + vec3(0.5, 0.5, 0.5));\n}\nmediump vec4 round(mediump vec4 value)\n{\n\treturn floor(value + vec4(0.5, 0.5, 0.5, 0.5));\n}\n"
              ;
              do {
                pcVar8 = pcVar7;
                puVar13 = puVar10;
                uVar4 = *(undefined8 *)(pcVar8 + 8);
                *puVar13 = *(undefined8 *)pcVar8;
                puVar13[1] = uVar4;
                uVar4 = *(undefined8 *)(pcVar8 + 0x18);
                puVar13[2] = *(undefined8 *)(pcVar8 + 0x10);
                puVar13[3] = uVar4;
                uVar4 = *(undefined8 *)(pcVar8 + 0x28);
                puVar13[4] = *(undefined8 *)(pcVar8 + 0x20);
                puVar13[5] = uVar4;
                uVar4 = *(undefined8 *)(pcVar8 + 0x38);
                puVar13[6] = *(undefined8 *)(pcVar8 + 0x30);
                puVar13[7] = uVar4;
                uVar4 = *(undefined8 *)(pcVar8 + 0x48);
                puVar13[8] = *(undefined8 *)(pcVar8 + 0x40);
                puVar13[9] = uVar4;
                uVar4 = *(undefined8 *)(pcVar8 + 0x58);
                puVar13[10] = *(undefined8 *)(pcVar8 + 0x50);
                puVar13[0xb] = uVar4;
                uVar4 = *(undefined8 *)(pcVar8 + 0x68);
                puVar13[0xc] = *(undefined8 *)(pcVar8 + 0x60);
                puVar13[0xd] = uVar4;
                uVar4 = *(undefined8 *)(pcVar8 + 0x78);
                puVar13[0xe] = *(undefined8 *)(pcVar8 + 0x70);
                puVar13[0xf] = uVar4;
                lVar17 = lVar17 + -1;
                puVar10 = puVar13 + 0x10;
                pcVar7 = pcVar8 + 0x80;
              } while (lVar17 != 0);
              uVar4 = *(undefined8 *)(pcVar8 + 0x88);
              puVar13[0x10] = *(undefined8 *)(pcVar8 + 0x80);
              puVar13[0x11] = uVar4;
              uVar4 = *(undefined8 *)(pcVar8 + 0x98);
              puVar13[0x12] = *(undefined8 *)(pcVar8 + 0x90);
              puVar13[0x13] = uVar4;
              uVar1 = *(undefined4 *)(pcVar8 + 0xa4);
              uVar2 = *(undefined4 *)(pcVar8 + 0xa8);
              uVar3 = *(undefined4 *)(pcVar8 + 0xac);
              *(undefined4 *)(puVar13 + 0x14) = *(undefined4 *)(pcVar8 + 0xa0);
              *(undefined4 *)((longlong)puVar13 + 0xa4) = uVar1;
              *(undefined4 *)(puVar13 + 0x15) = uVar2;
              *(undefined4 *)((longlong)puVar13 + 0xac) = uVar3;
              uVar1 = *(undefined4 *)(pcVar8 + 0xb4);
              uVar2 = *(undefined4 *)(pcVar8 + 0xb8);
              uVar3 = *(undefined4 *)(pcVar8 + 0xbc);
              *(undefined4 *)(puVar13 + 0x16) = *(undefined4 *)(pcVar8 + 0xb0);
              *(undefined4 *)((longlong)puVar13 + 0xb4) = uVar1;
              *(undefined4 *)(puVar13 + 0x17) = uVar2;
              *(undefined4 *)((longlong)puVar13 + 0xbc) = uVar3;
              puVar13[0x18] = *(undefined8 *)(pcVar8 + 0xc0);
              *(undefined4 *)(puVar13 + 0x19) = *(undefined4 *)(pcVar8 + 200);
              *(undefined2 *)((longlong)puVar13 + 0xcc) = *(undefined2 *)(pcVar8 + 0xcc);
              *(char *)((longlong)puVar13 + 0xce) = pcVar8[0xce];
            }
            puVar10 = local_110;
            cVar19 = local_118;
            if (local_118 == '\0') {
              `anonymous_namespace'::AppendCString(param_5,local_110);
              local_100 = 0;
              local_108 = 0;
              if (local_104 != 0) {
                TArray<unsigned_char,FDefaultAllocator>::ResizeTo(&local_110,0);
                local_100 = local_108;
                puVar10 = local_110;
              }
            }
            else {
              local_100 = local_108;
            }
          }
          if (*(char *)((longlong)param_4 + 0x13) != '\0') {
            for (pcVar7 = _guard_xfg_dispatch_icall_nop((char *)*param_1,"vec4 var_TEXCOORD");
                pcVar7 != (char *)0x0;
                pcVar7 = _guard_xfg_dispatch_icall_nop
                                   ((char *)((longlong)(((int)pcVar7 - (int)*param_1) + 0x11) +
                                            *param_1),"vec4 var_TEXCOORD")) {
              iVar6 = iVar6 + 1;
            }
            if (param_4[5] <= iVar6) {
              `anonymous_namespace'::ReplaceCString(param_1,"gl_FragCoord.xy","vec2(400.5,240.5)");
            }
          }
          if ((char)param_4[6] != '\0') {
            `anonymous_namespace'::AppendCString(param_5,"#define TEXCOORDPRECISIONWORKAROUND \n");
          }
        }
      }
      else if (iVar9 == 0x8b31) {
        iVar9 = (int)param_5[1];
        if (iVar9 < 1) {
          *(int *)(param_5 + 1) = iVar9 + 0x172;
          if (*(int *)((longlong)param_5 + 0xc) < iVar9 + 0x172) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_5,iVar9);
          }
          lVar17 = 2;
          pcVar7 = 
          "#define texture2D texture \n#define texture2DProj textureProj \n#define texture2DLod textureLod \n#define texture2DLodEXT textureLod \n#define texture2DProjLod textureProjLod \n#define textureCube texture \n#define textureCubeLod textureLod \n#define textureCubeLodEXT textureLod \n#define texture3D texture \n#define texture3DProj textureProj \n#define texture3DLod textureLod \n"
          ;
          puVar10 = (undefined8 *)((longlong)iVar9 + *param_5);
          do {
            puVar13 = puVar10;
            pcVar8 = pcVar7;
            uVar4 = *(undefined8 *)(pcVar8 + 8);
            *puVar13 = *(undefined8 *)pcVar8;
            puVar13[1] = uVar4;
            uVar4 = *(undefined8 *)(pcVar8 + 0x18);
            puVar13[2] = *(undefined8 *)(pcVar8 + 0x10);
            puVar13[3] = uVar4;
            uVar4 = *(undefined8 *)(pcVar8 + 0x28);
            puVar13[4] = *(undefined8 *)(pcVar8 + 0x20);
            puVar13[5] = uVar4;
            uVar4 = *(undefined8 *)(pcVar8 + 0x38);
            puVar13[6] = *(undefined8 *)(pcVar8 + 0x30);
            puVar13[7] = uVar4;
            uVar4 = *(undefined8 *)(pcVar8 + 0x48);
            puVar13[8] = *(undefined8 *)(pcVar8 + 0x40);
            puVar13[9] = uVar4;
            uVar4 = *(undefined8 *)(pcVar8 + 0x58);
            puVar13[10] = *(undefined8 *)(pcVar8 + 0x50);
            puVar13[0xb] = uVar4;
            uVar4 = *(undefined8 *)(pcVar8 + 0x68);
            puVar13[0xc] = *(undefined8 *)(pcVar8 + 0x60);
            puVar13[0xd] = uVar4;
            uVar4 = *(undefined8 *)(pcVar8 + 0x78);
            puVar13[0xe] = *(undefined8 *)(pcVar8 + 0x70);
            puVar13[0xf] = uVar4;
            lVar17 = lVar17 + -1;
            pcVar7 = pcVar8 + 0x80;
            puVar10 = puVar13 + 0x10;
          } while (lVar17 != 0);
          uVar4 = *(undefined8 *)(pcVar8 + 0x88);
          puVar13[0x10] = *(undefined8 *)(pcVar8 + 0x80);
          puVar13[0x11] = uVar4;
          uVar4 = *(undefined8 *)(pcVar8 + 0x98);
          puVar13[0x12] = *(undefined8 *)(pcVar8 + 0x90);
          puVar13[0x13] = uVar4;
          uVar4 = *(undefined8 *)(pcVar8 + 0xa8);
          puVar13[0x14] = *(undefined8 *)(pcVar8 + 0xa0);
          puVar13[0x15] = uVar4;
          uVar4 = *(undefined8 *)(pcVar8 + 0xb8);
          puVar13[0x16] = *(undefined8 *)(pcVar8 + 0xb0);
          puVar13[0x17] = uVar4;
          uVar4 = *(undefined8 *)(pcVar8 + 200);
          puVar13[0x18] = *(undefined8 *)(pcVar8 + 0xc0);
          puVar13[0x19] = uVar4;
          uVar4 = *(undefined8 *)(pcVar8 + 0xd8);
          puVar13[0x1a] = *(undefined8 *)(pcVar8 + 0xd0);
          puVar13[0x1b] = uVar4;
          uVar1 = *(undefined4 *)(pcVar8 + 0xe4);
          uVar2 = *(undefined4 *)(pcVar8 + 0xe8);
          uVar3 = *(undefined4 *)(pcVar8 + 0xec);
          *(undefined4 *)(puVar13 + 0x1c) = *(undefined4 *)(pcVar8 + 0xe0);
          *(undefined4 *)((longlong)puVar13 + 0xe4) = uVar1;
          *(undefined4 *)(puVar13 + 0x1d) = uVar2;
          *(undefined4 *)((longlong)puVar13 + 0xec) = uVar3;
          *(undefined2 *)(puVar13 + 0x1e) = *(undefined2 *)(pcVar8 + 0xf0);
        }
        else {
          FUN_141e9da90(param_5,
                        "#define texture2D texture \n#define texture2DProj textureProj \n#define texture2DLod textureLod \n#define texture2DLodEXT textureLod \n#define texture2DProjLod textureProjLod \n#define textureCube texture \n#define textureCubeLod textureLod \n#define textureCubeLodEXT textureLod \n#define texture3D texture \n#define texture3DProj textureProj \n#define texture3DLod textureLod \n"
                        ,0x171,iVar9 + -1);
        }
        `anonymous_namespace'::ReplaceCString(param_1,"attribute",&DAT_144eb730c);
        `anonymous_namespace'::ReplaceCString(param_1,"varying",&DAT_144eb750c);
        puVar10 = local_110;
        cVar19 = local_118;
      }
      else if (iVar9 == 0x8b30) {
        `anonymous_namespace'::MoveHashLines(param_5,param_1);
        iVar9 = (int)param_5[1];
        if (iVar9 < 1) {
          *(int *)(param_5 + 1) = iVar9 + 0x2f;
          if (*(int *)((longlong)param_5 + 0xc) < iVar9 + 0x2f) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_5,iVar9);
          }
          builtin_strncpy((char *)((longlong)iVar9 + *param_5),
                          "#extension GL_EXT_shader_texture_lod : enable\n",0x2f);
        }
        else {
          FUN_141e9da90(param_5,"#extension GL_EXT_shader_texture_lod : enable\n",0x2e,iVar9 + -1);
        }
        iVar9 = (int)param_5[1];
        if (iVar9 < 1) {
          *(int *)(param_5 + 1) = iVar9 + 0x240;
          if (*(int *)((longlong)param_5 + 0xc) < iVar9 + 0x240) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_5,iVar9);
          }
          lVar17 = 4;
          pcVar7 = 
          "#define texture2D texture \n#define texture2DProj textureProj \n#define texture2DLod textureLod \n#define texture2DLodEXT textureLod \n#define texture2DProjLod textureProjLod \n#define textureCube texture \n#define textureCubeLod textureLod \n#define textureCubeLodEXT textureLod \n#define texture3D texture \n#define texture3DProj textureProj \n#define texture3DLod textureLod \n#define texture3DProjLod textureProjLod \n\n#define gl_FragColor out_FragColor \n#ifdef EXT_shader_framebuffer_fetch_enabled \ninout mediump vec4 out_FragColor; \n#else \nout mediump vec4 out_FragColor; \n#endif \n"
          ;
          puVar10 = (undefined8 *)((longlong)iVar9 + *param_5);
          do {
            puVar13 = puVar10;
            pcVar8 = pcVar7;
            uVar4 = *(undefined8 *)(pcVar8 + 8);
            *puVar13 = *(undefined8 *)pcVar8;
            puVar13[1] = uVar4;
            uVar4 = *(undefined8 *)(pcVar8 + 0x18);
            puVar13[2] = *(undefined8 *)(pcVar8 + 0x10);
            puVar13[3] = uVar4;
            uVar4 = *(undefined8 *)(pcVar8 + 0x28);
            puVar13[4] = *(undefined8 *)(pcVar8 + 0x20);
            puVar13[5] = uVar4;
            uVar4 = *(undefined8 *)(pcVar8 + 0x38);
            puVar13[6] = *(undefined8 *)(pcVar8 + 0x30);
            puVar13[7] = uVar4;
            uVar4 = *(undefined8 *)(pcVar8 + 0x48);
            puVar13[8] = *(undefined8 *)(pcVar8 + 0x40);
            puVar13[9] = uVar4;
            uVar4 = *(undefined8 *)(pcVar8 + 0x58);
            puVar13[10] = *(undefined8 *)(pcVar8 + 0x50);
            puVar13[0xb] = uVar4;
            uVar4 = *(undefined8 *)(pcVar8 + 0x68);
            puVar13[0xc] = *(undefined8 *)(pcVar8 + 0x60);
            puVar13[0xd] = uVar4;
            uVar4 = *(undefined8 *)(pcVar8 + 0x78);
            puVar13[0xe] = *(undefined8 *)(pcVar8 + 0x70);
            puVar13[0xf] = uVar4;
            lVar17 = lVar17 + -1;
            pcVar7 = pcVar8 + 0x80;
            puVar10 = puVar13 + 0x10;
          } while (lVar17 != 0);
          uVar4 = *(undefined8 *)(pcVar8 + 0x88);
          puVar13[0x10] = *(undefined8 *)(pcVar8 + 0x80);
          puVar13[0x11] = uVar4;
          uVar4 = *(undefined8 *)(pcVar8 + 0x98);
          puVar13[0x12] = *(undefined8 *)(pcVar8 + 0x90);
          puVar13[0x13] = uVar4;
          uVar1 = *(undefined4 *)(pcVar8 + 0xa4);
          uVar2 = *(undefined4 *)(pcVar8 + 0xa8);
          uVar3 = *(undefined4 *)(pcVar8 + 0xac);
          *(undefined4 *)(puVar13 + 0x14) = *(undefined4 *)(pcVar8 + 0xa0);
          *(undefined4 *)((longlong)puVar13 + 0xa4) = uVar1;
          *(undefined4 *)(puVar13 + 0x15) = uVar2;
          *(undefined4 *)((longlong)puVar13 + 0xac) = uVar3;
          uVar4 = *(undefined8 *)(pcVar8 + 0xb8);
          puVar13[0x16] = *(undefined8 *)(pcVar8 + 0xb0);
          puVar13[0x17] = uVar4;
        }
        else {
          FUN_141e9da90(param_5,
                        "#define texture2D texture \n#define texture2DProj textureProj \n#define texture2DLod textureLod \n#define texture2DLodEXT textureLod \n#define texture2DProjLod textureProjLod \n#define textureCube texture \n#define textureCubeLod textureLod \n#define textureCubeLodEXT textureLod \n#define texture3D texture \n#define texture3DProj textureProj \n#define texture3DLod textureLod \n#define texture3DProjLod textureProjLod \n\n#define gl_FragColor out_FragColor \n#ifdef EXT_shader_framebuffer_fetch_enabled \ninout mediump vec4 out_FragColor; \n#else \nout mediump vec4 out_FragColor; \n#endif \n"
                        ,0x23f,iVar9 + -1);
        }
        `anonymous_namespace'::ReplaceCString(param_1,"varying",&DAT_144eb757c);
        `anonymous_namespace'::ReplaceCString
                  (param_1,"#extension GL_EXT_shader_texture_lod : enable",&DAT_144eb6eb7);
        puVar10 = local_110;
        cVar19 = local_118;
      }
    }
  }
  else {
    puVar10 = local_110;
    cVar19 = local_118;
    if ((*param_4 == 3) && ((char)param_4[4] == '\0')) {
      iVar9 = (int)param_5[1];
      if (iVar9 < 1) {
        *(int *)(param_5 + 1) = iVar9 + 0x9a;
        if (*(int *)((longlong)param_5 + 0xc) < iVar9 + 0x9a) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_5,iVar9);
        }
        builtin_strncpy((char *)((longlong)iVar9 + *param_5),
                        "#define DONTEMITEXTENSIONSHADERTEXTURELODENABLE \n#define texture2DLodEXT(a, b, c) texture2D(a, b) \n#define textureCubeLodEXT(a, b, c) textureCube(a, b) \n"
                        ,0x9a);
        puVar10 = local_110;
        cVar19 = local_118;
      }
      else {
        FUN_141e9da90(param_5,
                      "#define DONTEMITEXTENSIONSHADERTEXTURELODENABLE \n#define texture2DLodEXT(a, b, c) texture2D(a, b) \n#define textureCubeLodEXT(a, b, c) textureCube(a, b) \n"
                      ,0x99,iVar9 + -1);
        puVar10 = local_110;
        cVar19 = local_118;
      }
    }
  }
  iVar9 = (int)param_5[1];
  if (DAT_146ab3dec == '\0') {
    if (0 < iVar9) {
      FUN_141e9da90(param_5,"#define HLSLCC_DX11ClipSpace 1 \n",0x20,iVar9 + -1);
      goto LAB_141e9abd6;
    }
    *(int *)(param_5 + 1) = iVar9 + 0x21;
    if (*(int *)((longlong)param_5 + 0xc) < iVar9 + 0x21) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_5,iVar9);
    }
    pcVar7 = (char *)((longlong)iVar9 + *param_5);
    builtin_strncpy(pcVar7,"#define HLSLCC_DX11ClipSpace 1 \n",0x20);
  }
  else {
    if (0 < iVar9) {
      FUN_141e9da90(param_5,"#define HLSLCC_DX11ClipSpace 0 \n",0x20,iVar9 + -1);
      goto LAB_141e9abd6;
    }
    *(int *)(param_5 + 1) = iVar9 + 0x21;
    if (*(int *)((longlong)param_5 + 0xc) < iVar9 + 0x21) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_5,iVar9);
    }
    pcVar7 = (char *)((longlong)iVar9 + *param_5);
    builtin_strncpy(pcVar7,"#define HLSLCC_DX11ClipSpace 0 \n",0x20);
  }
  pcVar7[0x20] = '\0';
LAB_141e9abd6:
  iVar9 = (int)param_5[1];
  if (iVar9 < 1) {
    *(int *)(param_5 + 1) = iVar9 + 3;
    if (*(int *)((longlong)param_5 + 0xc) < iVar9 + 3) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_5,iVar9);
    }
    lVar17 = *param_5;
    *(undefined2 *)(iVar9 + lVar17) = 0xa0a;
    *(undefined1 *)((undefined2 *)(iVar9 + lVar17) + 1) = 0;
  }
  else {
    FUN_141e9da90(param_5,&DAT_144eb77f4,2,iVar9 + -1);
  }
  `anonymous_namespace'::AppendCString(param_5,*param_1);
  if ((cVar19 != '\0') && (0 < local_100)) {
    `anonymous_namespace'::ReplaceCString(param_5,"// end extensions",puVar10);
  }
  if (puVar10 != (undefined8 *)0x0) {
    FMemory::Free(puVar10);
  }
  return;
}



// FUNCTION 141e9acf0 GetExtensionsString body=439 status=ok
// SIG undefined GetExtensionsString(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void GetExtensionsString(longlong *param_1)

{
  undefined2 *puVar1;
  void *_Dst;
  void *_Src;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_178 [32];
  int local_158 [4];
  undefined1 local_148 [256];
  longlong local_48;
  void *local_40;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  iVar7 = 0;
  local_158[0] = 0;
  if ((undefined *)*param_1 != &DAT_144eb6d54) {
    *(undefined4 *)(param_1 + 1) = 0;
    iVar5 = iVar7;
    if (*(int *)((longlong)param_1 + 0xc) != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo();
      iVar5 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar5;
    if (*(int *)((longlong)param_1 + 0xc) < iVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
    }
  }
  (*DAT_146ab4060)(0x821d,local_158);
  if (0 < local_158[0]) {
    do {
      uVar3 = (*DAT_146ab47a0)(0x1f03);
      iVar5 = (int)param_1[1];
      iVar4 = (2 - (uint)(iVar5 != 0)) + iVar5;
      *(int *)(param_1 + 1) = iVar4;
      if (*(int *)((longlong)param_1 + 0xc) < iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar5);
      }
      puVar1 = (undefined2 *)(*param_1 + ((longlong)iVar5 - (ulonglong)(iVar5 != 0)) * 2);
      *puVar1 = 0x20;
      puVar1[1] = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::
      TStringConversion<TStringConvert<char,wchar_t>,128>(local_148,uVar3);
      _Src = local_40;
      lVar6 = -1;
      do {
        lVar6 = lVar6 + 1;
      } while (*(short *)((longlong)local_40 + lVar6 * 2) != 0);
      iVar5 = (int)lVar6;
      if (iVar5 != 0) {
        iVar4 = (int)param_1[1];
        iVar2 = (uint)(iVar4 == 0) + iVar4 + iVar5;
        *(int *)(param_1 + 1) = iVar2;
        if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
        }
        _Dst = (void *)(*param_1 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar5 * 2);
        *(undefined2 *)((longlong)iVar5 * 2 + (longlong)_Dst) = 0;
      }
      if (local_48 != 0) {
        FMemory::Free();
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < local_158[0]);
  }
  return;
}



// FUNCTION 141e9aeb0 GetInitializer body=339 status=ok
// SIG undefined GetInitializer(void)

undefined8 FOpenGLBlendState::GetInitializer(longlong param_1,char *param_2)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  longlong lVar4;
  undefined4 *puVar5;
  char *pcVar6;
  
  param_2[0x38] = '\x01';
  pcVar6 = param_2 + 2;
  lVar4 = 8;
  puVar5 = (undefined4 *)(param_1 + 0x20);
  do {
    iVar1 = puVar5[-1];
    if (iVar1 == 0x8007) {
      cVar2 = '\x02';
    }
    else if (iVar1 == 0x8008) {
      cVar2 = '\x03';
    }
    else if (iVar1 == 0x800a) {
      cVar2 = '\x01';
    }
    else if (iVar1 == 0x800b) {
      cVar2 = '\x04';
    }
    else {
      cVar2 = '\0';
    }
    pcVar6[-2] = cVar2;
    cVar2 = FUN_141eaa720(*puVar5);
    pcVar6[-1] = cVar2;
    cVar2 = FUN_141eaa720(puVar5[1]);
    *pcVar6 = cVar2;
    param_2[0x38] = param_2[0x38] & pcVar6[-2] == *param_2;
    bVar3 = 0;
    if (pcVar6[-1] == param_2[1]) {
      bVar3 = param_2[0x38];
    }
    param_2[0x38] = bVar3;
    param_2[0x38] = *pcVar6 == param_2[2] & bVar3;
    iVar1 = puVar5[3];
    if (iVar1 == 0x8007) {
      cVar2 = '\x02';
    }
    else if (iVar1 == 0x8008) {
      cVar2 = '\x03';
    }
    else if (iVar1 == 0x800a) {
      cVar2 = '\x01';
    }
    else if (iVar1 == 0x800b) {
      cVar2 = '\x04';
    }
    else {
      cVar2 = '\0';
    }
    pcVar6[1] = cVar2;
    cVar2 = FUN_141eaa720(puVar5[4]);
    pcVar6[2] = cVar2;
    cVar2 = FUN_141eaa720(puVar5[5]);
    pcVar6[3] = cVar2;
    param_2[0x38] = param_2[0x38] & pcVar6[1] == param_2[3];
    bVar3 = 0;
    if (pcVar6[2] == param_2[4]) {
      bVar3 = param_2[0x38];
    }
    param_2[0x38] = bVar3;
    param_2[0x38] = pcVar6[3] == param_2[5] & bVar3;
    bVar3 = *(byte *)(puVar5 + 6);
    pcVar6[4] = bVar3 & 0xf;
    puVar5 = puVar5 + 9;
    param_2[0x38] = param_2[0x38] & (bVar3 & 0xf) == param_2[6];
    pcVar6 = pcVar6 + 7;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  return 1;
}



// FUNCTION 141e9b010 GetInitializer body=167 status=ok
// SIG undefined GetInitializer(void)

undefined8 FOpenGLDepthStencilState::GetInitializer(longlong param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  
  param_2[7] = *(undefined1 *)(param_1 + 0x21);
  param_2[2] = *(undefined1 *)(param_1 + 0x20);
  *param_2 = *(undefined1 *)(param_1 + 0x19);
  param_2[0xc] = *(undefined1 *)(param_1 + 0x44);
  param_2[0xd] = *(undefined1 *)(param_1 + 0x48);
  uVar1 = FUN_141eaa850(*(undefined4 *)(param_1 + 0x1c));
  param_2[1] = uVar1;
  uVar1 = FUN_141eaa850(*(undefined4 *)(param_1 + 0x24));
  param_2[3] = uVar1;
  uVar1 = TranslateStencilOp(*(undefined4 *)(param_1 + 0x28));
  param_2[4] = uVar1;
  uVar1 = TranslateStencilOp(*(undefined4 *)(param_1 + 0x2c));
  param_2[5] = uVar1;
  uVar1 = TranslateStencilOp(*(undefined4 *)(param_1 + 0x30));
  param_2[6] = uVar1;
  uVar1 = FUN_141eaa850(*(undefined4 *)(param_1 + 0x34));
  param_2[8] = uVar1;
  uVar1 = TranslateStencilOp(*(undefined4 *)(param_1 + 0x38));
  param_2[9] = uVar1;
  uVar1 = TranslateStencilOp(*(undefined4 *)(param_1 + 0x3c));
  param_2[10] = uVar1;
  uVar1 = TranslateStencilOp(*(undefined4 *)(param_1 + 0x40));
  param_2[0xb] = uVar1;
  return 1;
}



// FUNCTION 141e9b150 FUN_141e9b150 body=221 status=ok
// SIG undefined FUN_141e9b150(void)

int FUN_141e9b150(longlong param_1,char param_2,byte param_3,undefined8 param_4,undefined8 param_5,
                 int *param_6,int *param_7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  
  lVar7 = (longlong)*(int *)(param_1 + 0x3c);
  uVar6 = *(uint *)(param_1 + 0x60) >> (param_3 & 0x1f);
  uVar4 = (&DAT_1464ca1bc)[lVar7 * 10];
  uVar5 = (&DAT_1464ca1b8)[lVar7 * 10];
  iVar1 = (&DAT_1464ca1c4)[lVar7 * 10];
  uVar3 = *(uint *)(param_1 + 100) >> (param_3 & 0x1f);
  uVar2 = uVar4;
  if (uVar4 <= uVar3) {
    uVar2 = uVar3;
  }
  uVar3 = uVar5;
  if (uVar5 <= uVar6) {
    uVar3 = uVar6;
  }
  uVar6 = (uint)(CONCAT44(0 >> (param_3 & 0x1f),(uVar3 - 1) + uVar5) / (ulonglong)uVar5);
  uVar4 = ((uVar4 - 1) + uVar2) / uVar4;
  uVar5 = uVar6;
  uVar3 = uVar4;
  if (*(int *)(param_1 + 0x3c) - 0x1eU < 2) {
    uVar5 = 2;
    if (1 < uVar6) {
      uVar5 = uVar6;
    }
    uVar3 = 2;
    if (1 < uVar4) {
      uVar3 = uVar4;
    }
  }
  iVar8 = uVar5 * iVar1;
  *param_6 = iVar8;
  if (param_2 == '\0') {
    *param_7 = 0;
  }
  else {
    *param_7 = iVar8 * uVar2;
  }
  return uVar3 * uVar5 * iVar1;
}


