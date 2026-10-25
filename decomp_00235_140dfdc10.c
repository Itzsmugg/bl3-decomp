// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140dfdc10 FUN_140dfdc10 body=1888 status=ok
// SIG undefined FUN_140dfdc10(void)

void FUN_140dfdc10(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong **pplVar2;
  int iVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  longlong *local_118;
  int local_110;
  longlong *local_108;
  int local_100;
  longlong *local_f8;
  int local_f0;
  longlong *local_e8;
  int local_e0;
  longlong *local_d8;
  int local_d0;
  longlong *local_c8;
  int local_c0;
  longlong *local_b8;
  int local_b0;
  longlong *local_a8;
  int local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88 [2];
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  undefined1 local_58 [24];
  
  *(undefined8 *)(param_1 + 0x28) = param_2;
  puVar5 = (undefined8 *)FName::FName(local_res8,L"SPARK",1);
  Online::GetSessionInterface(&local_98,*puVar5);
  if (local_98 == (longlong *)0x0) goto LAB_140dfe233;
  local_118 = (longlong *)0x0;
  plVar6 = (longlong *)FMemory::Realloc(0,0x30,0);
  local_110 = 3;
  local_118 = plVar6;
  if (plVar6 != (longlong *)0x0) {
    *plVar6 = (longlong)IDelegateInstance::vftable;
    *plVar6 = (longlong)&DAT_143f3ed00;
    plVar6[2] = (longlong)FUN_140df28f0;
    plVar6[1] = param_1;
    lVar7 = FDelegateHandle::GenerateNewID();
    plVar6[4] = lVar7;
    *plVar6 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  puVar5 = (undefined8 *)(**(code **)(*local_98 + 0x50))(local_98,local_res10,&local_118);
  *(undefined8 *)(param_1 + 0xc0) = *puVar5;
  if (local_110 == 0) {
LAB_140dfdd35:
    if (local_118 != (longlong *)0x0) {
      FMemory::Free(local_118);
    }
  }
  else if (local_118 != (longlong *)0x0) {
    (**(code **)(*local_118 + 0x28))(local_118,0);
    if (local_118 != (longlong *)0x0) {
      local_118 = (longlong *)FMemory::Realloc(local_118,0,0);
    }
    local_110 = 0;
    goto LAB_140dfdd35;
  }
  local_108 = (longlong *)0x0;
  plVar6 = (longlong *)FMemory::Realloc(0,0x30);
  local_100 = 3;
  local_108 = plVar6;
  if (plVar6 != (longlong *)0x0) {
    *plVar6 = (longlong)&DAT_143f3ed00;
    plVar6[1] = param_1;
    plVar6[2] = (longlong)FUN_140df02f0;
    lVar7 = FDelegateHandle::GenerateNewID();
    plVar6[4] = lVar7;
    *plVar6 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  puVar5 = (undefined8 *)(**(code **)(*local_98 + 0xd0))(local_98,local_res18,&local_108);
  *(undefined8 *)(param_1 + 200) = *puVar5;
  if (local_100 == 0) {
LAB_140dfddf6:
    if (local_108 != (longlong *)0x0) {
      FMemory::Free(local_108);
    }
  }
  else if (local_108 != (longlong *)0x0) {
    (**(code **)(*local_108 + 0x28))(local_108,0);
    if (local_108 != (longlong *)0x0) {
      local_108 = (longlong *)FMemory::Realloc(local_108,0,0);
    }
    local_100 = 0;
    goto LAB_140dfddf6;
  }
  local_f8 = (longlong *)0x0;
  plVar6 = (longlong *)FMemory::Realloc(0,0x30);
  local_f0 = 3;
  local_f8 = plVar6;
  if (plVar6 != (longlong *)0x0) {
    *plVar6 = (longlong)&DAT_143f3ed00;
    plVar6[1] = param_1;
    plVar6[2] = (longlong)FUN_140df0940;
    lVar7 = FDelegateHandle::GenerateNewID();
    plVar6[4] = lVar7;
    *plVar6 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  puVar5 = (undefined8 *)(**(code **)(*local_98 + 0xf0))(local_98,local_res20,&local_f8);
  *(undefined8 *)(param_1 + 0xd0) = *puVar5;
  if (local_f0 == 0) {
LAB_140dfdea9:
    if (local_f8 != (longlong *)0x0) {
      FMemory::Free(local_f8);
    }
  }
  else if (local_f8 != (longlong *)0x0) {
    (**(code **)(*local_f8 + 0x28))(local_f8,0);
    if (local_f8 != (longlong *)0x0) {
      local_f8 = (longlong *)FMemory::Realloc(local_f8,0,0);
    }
    local_f0 = 0;
    goto LAB_140dfdea9;
  }
  local_e8 = (longlong *)0x0;
  plVar6 = (longlong *)FMemory::Realloc(0,0x30);
  local_e0 = 3;
  local_e8 = plVar6;
  if (plVar6 != (longlong *)0x0) {
    *plVar6 = (longlong)&DAT_143f3ed00;
    plVar6[1] = param_1;
    plVar6[2] = (longlong)FUN_140df2e10;
    lVar7 = FDelegateHandle::GenerateNewID();
    plVar6[4] = lVar7;
    *plVar6 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  puVar5 = (undefined8 *)(**(code **)(*local_98 + 0x90))(local_98,local_78,&local_e8);
  *(undefined8 *)(param_1 + 0xd8) = *puVar5;
  if (local_e0 == 0) {
LAB_140dfdf5c:
    if (local_e8 != (longlong *)0x0) {
      FMemory::Free(local_e8);
    }
  }
  else if (local_e8 != (longlong *)0x0) {
    (**(code **)(*local_e8 + 0x28))(local_e8,0);
    if (local_e8 != (longlong *)0x0) {
      local_e8 = (longlong *)FMemory::Realloc(local_e8,0,0);
    }
    local_e0 = 0;
    goto LAB_140dfdf5c;
  }
  local_d8 = (longlong *)0x0;
  plVar6 = (longlong *)FMemory::Realloc(0,0x30);
  local_d0 = 3;
  local_d8 = plVar6;
  if (plVar6 != (longlong *)0x0) {
    *plVar6 = (longlong)&DAT_143f3ed00;
    plVar6[1] = param_1;
    plVar6[2] = (longlong)FUN_140df0600;
    lVar7 = FDelegateHandle::GenerateNewID();
    plVar6[4] = lVar7;
    *plVar6 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  puVar5 = (undefined8 *)(**(code **)(*local_98 + 0x30))(local_98,local_70,&local_d8);
  *(undefined8 *)(param_1 + 0xf8) = *puVar5;
  if (local_d0 == 0) {
LAB_140dfe00c:
    if (local_d8 != (longlong *)0x0) {
      FMemory::Free(local_d8);
    }
  }
  else if (local_d8 != (longlong *)0x0) {
    (**(code **)(*local_d8 + 0x28))(local_d8,0);
    if (local_d8 != (longlong *)0x0) {
      local_d8 = (longlong *)FMemory::Realloc(local_d8,0,0);
    }
    local_d0 = 0;
    goto LAB_140dfe00c;
  }
  local_c8 = (longlong *)0x0;
  plVar6 = (longlong *)FMemory::Realloc(0,0x30);
  local_c0 = 3;
  local_c8 = plVar6;
  if (plVar6 != (longlong *)0x0) {
    *plVar6 = (longlong)&DAT_143f3ed00;
    plVar6[1] = param_1;
    plVar6[2] = (longlong)FUN_140df2ad0;
    lVar7 = FDelegateHandle::GenerateNewID();
    plVar6[4] = lVar7;
    *plVar6 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  puVar5 = (undefined8 *)(**(code **)(*local_98 + 0x70))(local_98,local_68,&local_c8);
  *(undefined8 *)(param_1 + 0x100) = *puVar5;
  if (local_c0 == 0) {
LAB_140dfe0bc:
    if (local_c8 != (longlong *)0x0) {
      FMemory::Free(local_c8);
    }
  }
  else if (local_c8 != (longlong *)0x0) {
    (**(code **)(*local_c8 + 0x28))(local_c8,0);
    if (local_c8 != (longlong *)0x0) {
      local_c8 = (longlong *)FMemory::Realloc(local_c8,0,0);
    }
    local_c0 = 0;
    goto LAB_140dfe0bc;
  }
  local_b8 = (longlong *)0x0;
  plVar6 = (longlong *)FMemory::Realloc(0,0x30);
  local_b0 = 3;
  local_b8 = plVar6;
  if (plVar6 != (longlong *)0x0) {
    *plVar6 = (longlong)&DAT_143f3ed00;
    plVar6[1] = param_1;
    plVar6[2] = (longlong)FUN_140df07a0;
    lVar7 = FDelegateHandle::GenerateNewID();
    plVar6[4] = lVar7;
    *plVar6 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  puVar5 = (undefined8 *)(**(code **)(*local_98 + 0x90))(local_98,local_60,&local_b8);
  *(undefined8 *)(param_1 + 0x108) = *puVar5;
  if (local_b0 == 0) {
LAB_140dfe165:
    if (local_b8 != (longlong *)0x0) {
      FMemory::Free(local_b8);
    }
  }
  else if (local_b8 != (longlong *)0x0) {
    (**(code **)(*local_b8 + 0x28))(local_b8,0);
    if (local_b8 != (longlong *)0x0) {
      local_b8 = (longlong *)FMemory::Realloc(local_b8,0,0);
    }
    local_b0 = 0;
    goto LAB_140dfe165;
  }
  local_a8 = (longlong *)0x0;
  plVar6 = (longlong *)FMemory::Realloc(0,0x30);
  local_a0 = 3;
  local_a8 = plVar6;
  if (plVar6 != (longlong *)0x0) {
    *plVar6 = (longlong)&DAT_143f3ed00;
    plVar6[1] = param_1;
    plVar6[2] = (longlong)FUN_140df2c70;
    lVar7 = FDelegateHandle::GenerateNewID();
    plVar6[4] = lVar7;
    *plVar6 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  puVar5 = (undefined8 *)(**(code **)(*local_98 + 0xb0))(local_98,local_58,&local_a8);
  *(undefined8 *)(param_1 + 0x110) = *puVar5;
  if (local_a0 != 0) {
    if (local_a8 == (longlong *)0x0) goto LAB_140dfe233;
    (**(code **)(*local_a8 + 0x28))(local_a8,0);
    if (local_a8 != (longlong *)0x0) {
      local_a8 = (longlong *)FMemory::Realloc(local_a8,0,0);
    }
    local_a0 = 0;
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free(local_a8);
  }
LAB_140dfe233:
  cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x98);
  if (cVar4 != '\0') {
    lVar7 = FWeakObjectPtr::Get(param_1 + 0x98);
    pplVar2 = (longlong **)(lVar7 + 0xa98);
    plVar6 = (longlong *)FMemory::Realloc(0,0x30);
    local_88[0] = plVar6;
    if (plVar6 != (longlong *)0x0) {
      plVar6[1] = param_1;
      *plVar6 = (longlong)&DAT_143f3ed00;
      plVar6[2] = (longlong)FUN_140df2a10;
      lVar8 = FDelegateHandle::GenerateNewID();
      plVar6[4] = lVar8;
      *plVar6 = (longlong)&PTR_GetPoolName_143f3ed48;
    }
    if (local_88 != pplVar2) {
      if (plVar6 == (longlong *)0x0) {
        if ((*(int *)(lVar7 + 0xaa0) != 0) && (plVar9 = *pplVar2, plVar9 != (longlong *)0x0)) {
          (**(code **)(*plVar9 + 0x28))(plVar9,0);
          if (*pplVar2 != (longlong *)0x0) {
            plVar9 = (longlong *)FMemory::Realloc(*pplVar2,0,0);
            *pplVar2 = plVar9;
          }
          *(undefined4 *)(lVar7 + 0xaa0) = 0;
        }
      }
      else {
        (**(code **)(*plVar6 + 0x30))(plVar6,pplVar2);
      }
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x28))(plVar6,0);
      local_88[0] = (longlong *)FMemory::Realloc(plVar6,0,0);
      if (local_88[0] != (longlong *)0x0) {
        FMemory::Free(local_88[0]);
      }
    }
  }
  plVar6 = local_90;
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_90 + 1;
    lVar7 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_90 + 8))(local_90,1);
      }
    }
  }
  return;
}



// FUNCTION 140dfe370 FUN_140dfe370 body=338 status=ok
// SIG undefined FUN_140dfe370(void)

void FUN_140dfe370(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 local_48 [48];
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  if (*(longlong *)(DAT_146b33f38 + 0xe0) != 0) {
    uVar2 = TSoftObjectPtr<UTexture2D>::TSoftObjectPtr<UTexture2D>
                      (local_48,*(longlong *)(DAT_146b33f38 + 0xe0) + 0x50);
    FUN_1405e5cb0(param_1,uVar2,0);
  }
  FUN_140de5560(param_1);
  lVar1 = *(longlong *)(param_1 + 0xf8);
  *(undefined1 *)(param_1 + 0x90) = 1;
  if (lVar1 != 0) {
    uVar4 = 0;
    *(undefined8 *)(lVar1 + 0x30) = 0;
    *(undefined4 *)(lVar1 + 0x40) = 0;
    if (*(int *)(lVar1 + 0x44) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(lVar1 + 0x38,0);
    }
    *(undefined4 *)(lVar1 + 0x50) = 0;
    if (*(int *)(lVar1 + 0x54) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(lVar1 + 0x48,0);
    }
    *(undefined4 *)(lVar1 + 0x60) = 0;
    if (*(int *)(lVar1 + 100) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(lVar1 + 0x58,0);
    }
    plVar3 = *(longlong **)(lVar1 + 0x78);
    uVar5 = (longlong)*(int *)(lVar1 + 0x80) & 0x1fffffffffffffff;
    if (plVar3 + *(int *)(lVar1 + 0x80) < plVar3) {
      uVar5 = uVar4;
    }
    if (uVar5 != 0) {
      do {
        if ((longlong *)*plVar3 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar3 + 0x2e0))();
        }
        plVar3 = plVar3 + 1;
        uVar4 = uVar4 + 1;
      } while (uVar4 != uVar5);
    }
    *(undefined4 *)(lVar1 + 0x80) = 0;
    if (*(int *)(lVar1 + 0x84) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo((ulonglong *)(lVar1 + 0x78),0);
    }
    UObject::ConditionalBeginDestroy(*(undefined8 *)(param_1 + 0xf8));
    *(undefined8 *)(param_1 + 0xf8) = 0;
  }
  return;
}



// FUNCTION 140dfe500 FUN_140dfe500 body=7 status=ok
// SIG undefined FUN_140dfe500(void)

void FUN_140dfe500(longlong param_1)

{
  *(int *)(param_1 + 0x4f4) = *(int *)(param_1 + 0x4f4) + 1;
  return;
}



// FUNCTION 140dfe510 FUN_140dfe510 body=127 status=ok
// SIG undefined FUN_140dfe510(void)

void FUN_140dfe510(longlong param_1,char param_2)

{
  longlong local_28 [3];
  longlong local_10;
  
  if (param_2 == '\0') {
    local_28[0] = 0;
    local_28[1] = 0;
    local_28[2] = *(undefined8 *)(param_1 + 0x50);
    local_10 = *(longlong *)(param_1 + 0x58);
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
    }
    FUN_140de82c0(param_1 + 0x38,3,local_28 + 2,*(undefined1 *)(param_1 + 0x61),
                  *(undefined1 *)(param_1 + 0x60),local_28);
    if (local_28[0] != 0) {
      FMemory::Free();
    }
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0xf0))();
  }
  return;
}



// FUNCTION 140dfe590 FUN_140dfe590 body=918 status=ok
// SIG undefined FUN_140dfe590(void)

void FUN_140dfe590(longlong param_1,longlong *param_2,int param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int *piVar9;
  undefined8 *puVar10;
  int *piVar11;
  undefined8 *local_res8;
  undefined1 local_res10 [8];
  longlong *local_98;
  int local_90;
  undefined8 local_88;
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_48 [16];
  
  if (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x5c)) {
    lVar5 = *(longlong *)(param_1 + 0x68);
    if (*(longlong *)(param_1 + 0x68) == 0) {
      lVar5 = param_1 + 0x60;
    }
    iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x70) - 1U &
                             (longlong)*(int *)(*param_2 + 8)) * 4);
    if (iVar4 != -1) {
      do {
        piVar9 = (int *)((longlong)iVar4 * 0x38 + *(longlong *)(param_1 + 0x28));
        if (*piVar9 == *(int *)(*param_2 + 8)) {
          if (iVar4 != -1) goto LAB_140dfe611;
          break;
        }
        iVar4 = piVar9[0xc];
      } while (iVar4 != -1);
    }
  }
  piVar9 = (int *)0x0;
LAB_140dfe611:
  piVar11 = piVar9 + 2;
  if (piVar9 == (int *)0x0) {
    piVar11 = (int *)0x0;
  }
  if (piVar11 == (int *)0x0) {
    return;
  }
  if (*(longlong **)(piVar11 + 2) == (longlong *)0x0) {
    return;
  }
  cVar3 = (**(code **)(**(longlong **)(piVar11 + 2) + 0x20))();
  if (cVar3 == '\0') {
    return;
  }
  local_88 = *(undefined8 *)(piVar11 + 2);
  local_80 = *(longlong **)(piVar11 + 4);
  if (local_80 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_80 + 1) = (int)local_80[1] + 1;
    UNLOCK();
  }
  FUN_140e04ab0(param_1 + 0x28,*(undefined4 *)(*param_2 + 8));
  plVar2 = (longlong *)param_4[1];
  lVar5 = *param_4;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  if ((lVar5 == 0) || (param_3 != 200)) {
    TBaseMulticastDelegate<void,FPhysScene_*,enum_EPhysicsSceneType>::Broadcast
              (param_1 + 0x10,&local_88,0xe);
  }
  else {
    local_res8 = &local_88;
    FUN_140ddae60(param_1 + 0x78,&local_res8);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
    }
    local_78 = lVar5;
    local_70 = plVar2;
    puVar6 = (undefined8 *)FUN_140ddc4a0(local_68,&local_88,&local_78);
    iVar4 = *(int *)(param_1 + 0x80);
    *(int *)(param_1 + 0x80) = iVar4 + 1;
    if (*(int *)(param_1 + 0x84) < iVar4 + 1) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1 + 0x78,iVar4);
    }
    puVar10 = (undefined8 *)((longlong)iVar4 * 0x30 + *(longlong *)(param_1 + 0x78));
    *puVar10 = *puVar6;
    puVar10[1] = puVar6[1];
    puVar6[1] = 0;
    *puVar6 = 0;
    *(undefined4 *)(puVar10 + 2) = *(undefined4 *)(puVar6 + 2);
    *(undefined4 *)((longlong)puVar10 + 0x14) = *(undefined4 *)((longlong)puVar6 + 0x14);
    *(undefined4 *)(puVar10 + 3) = *(undefined4 *)(puVar6 + 3);
    *(undefined4 *)((longlong)puVar10 + 0x1c) = *(undefined4 *)((longlong)puVar6 + 0x1c);
    puVar10[4] = 0;
    puVar10[4] = puVar6[4];
    puVar6[4] = 0;
    *(undefined4 *)(puVar10 + 5) = *(undefined4 *)(puVar6 + 5);
    *(undefined4 *)((longlong)puVar10 + 0x2c) = *(undefined4 *)((longlong)puVar6 + 0x2c);
    puVar6[5] = 0;
    FUN_140b7a560(local_48);
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_60 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar9 = (int *)((longlong)local_60 + 0xc);
        iVar4 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_60 + 8))(local_60,1);
        }
      }
    }
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar9 = (int *)((longlong)plVar2 + 0xc);
        iVar4 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar2 + 8))(plVar2,1);
        }
      }
    }
    if (*(longlong *)(param_1 + 0x88) == 0) {
      uVar7 = FUN_140da6050(&local_98,param_1,FUN_140e0a6a0);
      uVar8 = FUN_14164ab60();
      puVar6 = (undefined8 *)FUN_14158f860(uVar8,local_res10,uVar7,L"FOakZeppelinService_TickQos",0)
      ;
      *(undefined8 *)(param_1 + 0x88) = *puVar6;
      if (local_90 != 0) {
        if (local_98 == (longlong *)0x0) goto LAB_140dfe8ae;
        (**(code **)(*local_98 + 0x28))(local_98,0);
        if (local_98 != (longlong *)0x0) {
          local_98 = (longlong *)FMemory::Realloc(local_98,0,0);
        }
        local_90 = 0;
      }
      if (local_98 != (longlong *)0x0) {
        FMemory::Free(local_98);
      }
    }
  }
LAB_140dfe8ae:
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar9 = (int *)((longlong)plVar2 + 0xc);
      iVar4 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
  }
  plVar2 = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_80 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar9 = (int *)((longlong)plVar2 + 0xc);
      iVar4 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
  }
  return;
}



// FUNCTION 140dfe930 FUN_140dfe930 body=156 status=ok
// SIG undefined FUN_140dfe930(void)

void FUN_140dfe930(longlong param_1,undefined8 *param_2,int param_3)

{
  char cVar1;
  longlong local_28 [3];
  longlong local_10;
  
  cVar1 = (*(code *)**(undefined8 **)*param_2)
                    ((undefined8 *)*param_2,*(undefined8 *)(param_1 + 0x50));
  if ((cVar1 != '\0') && (param_3 == 0)) {
    local_28[0] = 0;
    local_28[1] = 0;
    local_28[2] = *(undefined8 *)(param_1 + 0x50);
    local_10 = *(longlong *)(param_1 + 0x58);
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
    }
    FUN_140de82c0(param_1 + 0x38,4,local_28 + 2,*(undefined1 *)(param_1 + 0x61),
                  *(undefined1 *)(param_1 + 0x60),local_28);
    if (local_28[0] != 0) {
      FMemory::Free();
    }
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0xf0))();
  }
  return;
}



// FUNCTION 140dfe9d0 FUN_140dfe9d0 body=100 status=ok
// SIG undefined FUN_140dfe9d0(void)

void FUN_140dfe9d0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  
  if (param_3 == 2) {
    if (*(int *)(param_1 + 0xb8) == 0) {
      FUN_140e057f0();
      return;
    }
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0x88);
    if ((plVar1 != (longlong *)0x0) && (*(longlong *)(param_1 + 0xf8) != 0)) {
      (**(code **)(*plVar1 + 0x70))();
      plVar1 = *(longlong **)(param_1 + 0x88);
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))();
      *(undefined8 *)(param_1 + 0x88) = 0;
    }
  }
  return;
}



// FUNCTION 140dfea40 FUN_140dfea40 body=128 status=ok
// SIG undefined FUN_140dfea40(void)

void FUN_140dfea40(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = FUN_1413c3a10();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_1407665e0(param_3 + 0x7c0,param_1);
      if (*(longlong *)(param_3 + 0x740) != 0) {
        FUN_1407665e0(*(longlong *)(param_3 + 0x740) + 0x178,param_1);
      }
    }
  }
  return;
}



// FUNCTION 140dfeac0 FUN_140dfeac0 body=1965 status=ok
// SIG undefined FUN_140dfeac0(void)

void FUN_140dfeac0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  void *pvVar3;
  bool bVar4;
  char cVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined4 *puVar15;
  longlong lVar16;
  int local_res18;
  undefined4 local_228;
  undefined8 local_224;
  longlong local_218;
  longlong local_210;
  undefined8 local_208;
  void *local_200;
  ulonglong local_1f8;
  void *local_1f0;
  int local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1b8;
  undefined8 local_1b0;
  longlong local_1a8;
  undefined8 local_1a0;
  longlong local_198;
  undefined8 local_190;
  longlong local_188;
  undefined2 local_180;
  undefined1 local_17e;
  undefined8 local_17c;
  undefined8 local_174;
  longlong local_168;
  undefined8 local_160;
  undefined1 local_158;
  int local_148;
  byte local_144;
  longlong local_140;
  longlong local_138;
  void *local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  byte local_118;
  undefined1 local_110 [16];
  undefined8 local_100;
  undefined8 local_f8;
  longlong *local_f0;
  longlong local_e8;
  longlong local_e0 [3];
  undefined1 local_c8 [32];
  longlong local_a8;
  longlong local_98;
  longlong local_88;
  longlong local_78;
  undefined1 local_58 [32];
  
  lVar16 = 0;
  lVar7 = lVar16;
  if (*(longlong *)(param_1 + 0x188) != 0) {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x188) + 0xf8);
  }
  if (((lVar7 != 0) && (cVar5 = FUN_140de4fb0(lVar7,param_1), cVar5 != '\0')) &&
     (lVar7 = FUN_142dcfb00(param_1), lVar7 != 0)) {
    lVar8 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) && (lVar8 = *(longlong *)(param_2 + 0x740), lVar8 != 0)) {
      local_1e8 = *(int *)(lVar8 + 0x1f8);
      lVar14 = (longlong)local_1e8;
      pvVar3 = *(void **)(lVar8 + 0x1f0);
      local_1f0 = (void *)0x0;
      if (local_1e8 != 0) {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                  (&local_1f0,local_1e8,0);
        _guard_xfg_dispatch_icall_nop(local_1f0,pvVar3,lVar14 << 3);
      }
      iVar2 = local_1e8;
      plVar1 = (longlong *)(param_1 + 600);
      FUN_140de6e60(plVar1,0);
      FUN_140de6f40(param_1 + 0x278,0);
      local_e8 = (longlong)iVar2;
      local_res18 = 0;
      if (0 < iVar2) {
        do {
          lVar8 = *(longlong *)((longlong)local_1f0 + lVar16 * 8);
          if (lVar8 != 0) {
            lVar14 = AGExplodingRockProjectile::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar14 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar14 + 0x90) * 8) != lVar14 + 0x88)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if ((bVar4) &&
               (((cVar5 = FUN_140b31bb0(lVar8), cVar5 == '\0' ||
                 (lVar14 = FUN_140b2aac0(lVar8), lVar14 == lVar7)) &&
                (plVar9 = (longlong *)ATrap::GetActivationShapeComponent(),
                plVar9 != (longlong *)0x0)))) {
              lVar14 = plVar9[0x41];
              lVar11 = 0;
              if (lVar14 != 0) {
                lVar11 = *(longlong *)(lVar14 + 0x1d8);
              }
              local_1e0 = 0;
              local_218 = 0;
              local_210 = 0;
              local_208 = 0;
              local_228 = 0xffffffff;
              local_224 = 0;
              if (lVar11 == 0) {
                local_1d8 = 0;
                local_218 = 0;
              }
              else {
                uVar10 = FSoftObjectPath::FSoftObjectPath(local_58,lVar11);
                FSoftObjectPath::operator=(&local_218,uVar10);
                FWeakObjectPtr::operator=(&local_228,lVar11);
                LOCK();
                if (DAT_1464b56f4 == 0) {
                  DAT_1464b56f4 = 0;
                }
                UNLOCK();
                local_224 = CONCAT44(DAT_1464b56f4,(undefined4)local_224);
              }
              lVar11 = FWeakObjectPtr::Get();
              if (lVar11 == 0) {
                LOCK();
                if (DAT_1464b56f4 == 0) {
                  DAT_1464b56f4 = 0;
                }
                UNLOCK();
                if ((DAT_1464b56f4 != local_224._4_4_) && (local_1d0 = 0, local_218 != 0)) {
                  lVar11 = FUN_141796df0(&local_218);
                  FWeakObjectPtr::operator=(&local_228,lVar11);
                  if ((lVar11 != 0) || (DAT_1469e7e10 == '\0')) {
                    LOCK();
                    if (DAT_1464b56f4 == 0) {
                      DAT_1464b56f4 = 0;
                    }
                    UNLOCK();
                    local_224 = CONCAT44(DAT_1464b56f4,(undefined4)local_224);
                  }
                  lVar11 = FWeakObjectPtr::Get(&local_228);
                  if (lVar11 != 0) goto LAB_140dfedc1;
                }
              }
              else {
LAB_140dfedc1:
                lVar12 = FUN_1430228e0();
                if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar12 + 0x90) * 8) != lVar12 + 0x88)) {
                  bVar4 = false;
                }
                else {
                  bVar4 = true;
                }
                if (bVar4) {
                  lVar12 = *(longlong *)(param_1 + 0x1a0);
                  lVar11 = lVar12 + (longlong)*(int *)(param_1 + 0x1a8) * 0x28;
                  for (; lVar12 != lVar11; lVar12 = lVar12 + 0x28) {
                    cVar5 = FSoftObjectPath::operator==(lVar12 + 0x10,&local_218);
                    if (cVar5 != '\0') {
                      local_1b8 = 0;
                      local_1a8 = 0;
                      local_1a0 = 0;
                      local_198 = 0;
                      local_190 = 0;
                      local_180 = 0;
                      local_17e = 0;
                      local_17c = 0;
                      local_174 = 0;
                      local_168 = 0;
                      local_160 = 0;
                      local_158 = 0;
                      lVar11 = FWeakObjectPtr::Get(&local_228);
                      if (lVar11 == 0) {
                        LOCK();
                        if (DAT_1464b56f4 == 0) {
                          DAT_1464b56f4 = 0;
                        }
                        UNLOCK();
                        if ((DAT_1464b56f4 != local_224._4_4_) && (local_1c8 = 0, local_218 != 0)) {
                          lVar11 = FUN_141796df0(&local_218);
                          FWeakObjectPtr::operator=(&local_228,lVar11);
                          if ((lVar11 != 0) || (DAT_1469e7e10 == '\0')) {
                            LOCK();
                            if (DAT_1464b56f4 == 0) {
                              DAT_1464b56f4 = 0;
                            }
                            UNLOCK();
                            local_224 = CONCAT44(DAT_1464b56f4,(undefined4)local_224);
                          }
                          lVar11 = FWeakObjectPtr::Get(&local_228);
                          if (lVar11 != 0) goto LAB_140dfeeee;
                        }
LAB_140dfef28:
                        local_188 = 0;
                      }
                      else {
LAB_140dfeeee:
                        lVar12 = FUN_1430228e0();
                        if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)
                            ) || (*(longlong *)
                                   (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
                                   (longlong)*(int *)(lVar12 + 0x90) * 8) != lVar12 + 0x88)) {
                          bVar4 = false;
                        }
                        else {
                          bVar4 = true;
                        }
                        local_188 = lVar11;
                        if (!bVar4) goto LAB_140dfef28;
                      }
                      uVar10 = *(undefined8 *)(lVar8 + 0x568);
                      iVar2 = *(int *)(param_1 + 0x280);
                      *(int *)(param_1 + 0x280) = iVar2 + 1;
                      local_1b0 = uVar10;
                      if (*(int *)(param_1 + 0x284) < iVar2 + 1) {
                        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,FDefaultAllocator>
                        ::ResizeGrow(param_1 + 0x278,iVar2);
                      }
                      puVar15 = (undefined4 *)
                                ((longlong)iVar2 * 0x68 + *(longlong *)(param_1 + 0x278));
                      *puVar15 = 0;
                      *(undefined8 *)(puVar15 + 2) = uVar10;
                      FString::FString(puVar15 + 4,&local_1a8);
                      FString::FString(puVar15 + 8,&local_198);
                      *(longlong *)(puVar15 + 0xc) = local_188;
                      *(undefined1 *)(puVar15 + 0xe) = (undefined1)local_180;
                      *(undefined1 *)((longlong)puVar15 + 0x39) = local_180._1_1_;
                      *(undefined1 *)((longlong)puVar15 + 0x3a) = local_17e;
                      puVar15[0xf] = (undefined4)local_17c;
                      puVar15[0x10] = local_17c._4_4_;
                      puVar15[0x11] = (undefined4)local_174;
                      puVar15[0x12] = local_174._4_4_;
                      FString::FString(puVar15 + 0x14);
                      *(undefined1 *)(puVar15 + 0x18) = local_158;
                      local_200 = (void *)0x0;
                      local_1f8 = 0;
                      _guard_xfg_dispatch_icall_nop(local_c8,0,0x68);
                      FUN_142ff3000(plVar9,local_c8);
                      FUN_142ff5c90(local_c8,&local_200,1);
                      local_148 = -1;
                      local_128 = 0;
                      uStack_120 = 0;
                      local_144 = 0;
                      local_140 = 0;
                      local_138 = 0;
                      local_130 = (void *)0x0;
                      local_118 = 0;
                      UCheatManagerGunfire::GetAllCheats(local_110);
                      pvVar3 = local_200;
                      lVar8 = (longlong)(int)local_1f8;
                      local_100 = 0;
                      local_f8 = 0;
                      local_148 = local_res18;
                      local_128 = CONCAT44(local_128._4_4_,(int)local_1f8);
                      if (((int)local_1f8 == 0) && (local_128._4_4_ == 0)) {
                        local_128 = local_1f8 & 0xffffffff;
                      }
                      else {
                        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                                  (&local_130,local_1f8 & 0xffffffff);
                        _guard_xfg_dispatch_icall_nop(local_130,pvVar3,lVar8 * 2);
                      }
                      if (lVar14 == 0) {
                        local_144 = 0;
                      }
                      else {
                        local_144 = *(byte *)(lVar14 + 0x38) & 1;
                      }
                      plVar13 = (longlong *)FUN_140dedc60(plVar9,local_e0);
                      if (&local_140 != plVar13) {
                        if (local_140 != 0) {
                          FMemory::Free();
                        }
                        local_140 = *plVar13;
                        *plVar13 = 0;
                        local_138 = plVar13[1];
                        plVar13[1] = 0;
                      }
                      if (local_e0[0] != 0) {
                        FMemory::Free();
                      }
                      uStack_120 = CONCAT44(uStack_120._4_4_,
                                            *(undefined4 *)((longlong)plVar9 + 0x1fc));
                      uVar6 = FSceneViewport::GetMouseY(plVar9);
                      uStack_120 = CONCAT44(uVar6,(undefined4)uStack_120);
                      uVar10 = (**(code **)(*plVar9 + 0x530))(plVar9,0);
                      TArray<FAudioVolumeSubmixSendSettings,TSizedDefaultAllocator<32>_>::operator=
                                (local_110,uVar10);
                      iVar2 = *(int *)(param_1 + 0x260);
                      local_118 = *(byte *)(plVar9 + 99) >> 1 & 1;
                      *(int *)(param_1 + 0x260) = iVar2 + 1;
                      local_f0 = plVar9;
                      if (*(int *)(param_1 + 0x264) < iVar2 + 1) {
                        TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow
                                  (plVar1,iVar2);
                      }
                      FUN_140ddc040((longlong)iVar2 * 0x60 + *plVar1,&local_148);
                      FUN_140ddedd0(&local_148);
                      if (local_78 != 0) {
                        FMemory::Free();
                      }
                      if (local_88 != 0) {
                        FMemory::Free();
                      }
                      if (local_98 != 0) {
                        FMemory::Free();
                      }
                      if (local_a8 != 0) {
                        FMemory::Free();
                      }
                      if (local_200 != (void *)0x0) {
                        FMemory::Free();
                      }
                      if (local_168 != 0) {
                        FMemory::Free();
                      }
                      if (local_198 != 0) {
                        FMemory::Free();
                      }
                      if (local_1a8 != 0) {
                        FMemory::Free();
                      }
                      break;
                    }
                  }
                }
              }
              if (local_210 != 0) {
                FMemory::Free();
              }
            }
          }
          local_res18 = local_res18 + 1;
          lVar16 = lVar16 + 1;
        } while (lVar16 < local_e8);
      }
      if (0 < *(int *)(param_1 + 0x260)) {
        FUN_140e093f0(param_1);
      }
      if (local_1f0 != (void *)0x0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140dff270 FUN_140dff270 body=13 status=ok
// SIG undefined FUN_140dff270(void)

void FUN_140dff270(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000140dff276. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2f8))(param_1,param_3);
  return;
}



// FUNCTION 140dff280 FUN_140dff280 body=268 status=ok
// SIG undefined FUN_140dff280(void)

void FUN_140dff280(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong *local_18;
  longlong *local_10;
  
  plVar7 = (longlong *)0x0;
  FUN_1404d0c50(&local_18,0);
  if (local_18 != (longlong *)0x0) {
    (**(code **)(*local_18 + 0x360))(local_18,param_1 + 0x50);
  }
  if (param_2 == 0) {
    if ((((*(int *)(param_1 + 0x18) != 2) &&
         (*(undefined4 *)(param_1 + 0x18) = 2, *(int *)(param_1 + 0x10) != 0)) &&
        (*(longlong **)(param_1 + 8) != (longlong *)0x0)) &&
       (cVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(), cVar5 != '\0')) {
      if (*(int *)(param_1 + 0x10) != 0) {
        plVar7 = *(longlong **)(param_1 + 8);
      }
      (**(code **)(*plVar7 + 0x40))(plVar7,2);
    }
    goto LAB_140dff33d;
  }
  if (param_2 == 1) {
    uVar6 = 5;
  }
  else if (param_2 == 3) {
    if (*(char *)(param_1 + 0x48) == '\0') {
      FUN_140de6b80(param_1);
      goto LAB_140dff33d;
    }
    uVar6 = 7;
  }
  else {
    if ((param_2 - 2U & 0xfffffffd) != 0) goto LAB_140dff33d;
    uVar6 = 3;
  }
  FUN_140e06990(param_1,uVar6);
LAB_140dff33d:
  plVar7 = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return;
}



// FUNCTION 140dff390 FUN_140dff390 body=391 status=ok
// SIG undefined FUN_140dff390(void)

void FUN_140dff390(undefined8 param_1,longlong param_2,undefined8 param_3,int param_4,int param_5)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = param_2;
  if (param_4 < 2) {
    if (1 < param_5) {
      local_20 = 0;
      local_18 = *(undefined8 *)(param_2 + 0x10);
      lVar4 = *(longlong *)(param_2 + 0x20);
      if (lVar4 != 0) {
        lVar3 = FUN_1429a0270();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          cVar2 = ULevel::IsPersistentLevel(lVar4);
          if (cVar2 == '\0') {
            lVar4 = UObjectBaseUtility::GetOutermost(lVar4);
            local_20 = *(undefined8 *)(lVar4 + 0x18);
          }
        }
      }
      uVar5 = FUN_140ded880(param_1);
      FUN_14310a290(uVar5,&local_28,param_3);
      FUN_143103a10(param_1,&local_28);
      return;
    }
  }
  else if (param_5 < 2) {
    local_20 = 0;
    local_18 = *(undefined8 *)(param_2 + 0x10);
    lVar4 = *(longlong *)(param_2 + 0x20);
    if (lVar4 != 0) {
      lVar3 = FUN_1429a0270();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        cVar2 = ULevel::IsPersistentLevel(lVar4);
        if (cVar2 == '\0') {
          lVar4 = UObjectBaseUtility::GetOutermost(lVar4);
          local_20 = *(undefined8 *)(lVar4 + 0x18);
        }
      }
    }
    FUN_143103ec0(param_1,&local_28,1);
    uVar5 = FUN_140ded880(param_1);
    FUN_1430fc380(uVar5,&local_28,param_3,0);
  }
  return;
}



// FUNCTION 140dff520 FUN_140dff520 body=483 status=ok
// SIG undefined FUN_140dff520(void)

void FUN_140dff520(longlong param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined2 *puVar8;
  undefined2 *local_28;
  undefined8 local_20;
  longlong local_18;
  longlong *local_10;
  
  lVar4 = FUN_142b45e90();
  FUN_142b4a990(*(undefined8 *)(lVar4 + 0x18),&local_18,param_1 + 0x50);
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
    lVar4 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))();
    if ((lVar4 != 0) && (local_18 != 0)) {
      cVar3 = FUN_142b54800();
      if (cVar3 == '\0') {
        plVar5 = *(longlong **)(param_1 + 0x28);
        uVar6 = FUN_14057c410(local_18);
        uVar7 = (**(code **)(*plVar5 + 0xf8))(plVar5);
        FUN_140ddbb10(uVar7,"set_display_name",uVar6);
      }
      else {
        cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x48);
        if (cVar3 != '\0') {
          local_28 = (undefined2 *)0x0;
          local_20 = 0;
          lVar4 = FWeakObjectPtr::Get(param_1 + 0x48);
          FUN_140d79f00(*(undefined8 *)(lVar4 + 0x478),param_1 + 0x50,0,0,&local_28);
          plVar5 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))();
          plVar5 = (longlong *)(**(code **)(*plVar5 + 0x198))(plVar5);
          if (plVar5 != (longlong *)0x0) {
            (**(code **)(*plVar5 + 0x50))(plVar5,"set_display_name",1);
            puVar8 = &DAT_143f3eda8;
            if ((int)local_20 != 0) {
              puVar8 = local_28;
            }
            (**(code **)(*plVar5 + 0xb0))(plVar5,puVar8);
            (**(code **)(*plVar5 + 0x58))(plVar5);
          }
          if (local_28 != (undefined2 *)0x0) {
            FMemory::Free();
          }
        }
      }
      plVar5 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))();
      plVar5 = (longlong *)(**(code **)(*plVar5 + 0x198))(plVar5);
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x50))(plVar5,"set_is_primary_player",1);
        (**(code **)(*plVar5 + 0x120))(plVar5,*(undefined1 *)(param_1 + 0x61));
        (**(code **)(*plVar5 + 0x58))(plVar5);
      }
    }
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_10 + 1;
    lVar4 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar1 = (int *)((longlong)local_10 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return;
}



// FUNCTION 140dff710 FUN_140dff710 body=658 status=ok
// SIG undefined FUN_140dff710(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140dff710(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined4 local_e0;
  float local_d8;
  float local_d4;
  float local_d0;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  lVar3 = *param_2;
  if (((lVar3 == 0) || (*(int *)(lVar3 + 0x30) != *(int *)((longlong)param_1 + 0x354))) ||
     ((FUN_142be50e0(lVar3,&local_d8,0), local_d8 == DAT_1468b5d90 &&
      ((local_d4 == DAT_1468b5d94 && (local_d0 == DAT_1468b5d98)))))) {
    *(int *)(param_1 + 0x6a) = (int)param_1[0x6a] + 1;
    lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    if ((lVar3 == 0) || ((int)param_1[0x4e] < (int)param_1[0x6a])) {
      (**(code **)(*param_1 + 0x2e0))(param_1);
    }
    else {
      local_c8 = FUN_140e08a70;
      uStack_c0 = 0;
      if (*(longlong *)(lVar3 + 400) == 0) {
        uVar6 = *(undefined8 *)(lVar3 + 0x3f8);
      }
      else {
        uVar6 = *(undefined8 *)(*(longlong *)(lVar3 + 400) + 0x90);
      }
      plVar4 = (longlong *)FMemory::Realloc(0,0x30);
      local_b8 = plVar4;
      if (plVar4 != (longlong *)0x0) {
        *plVar4 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar4 + 1,param_1);
        *(undefined4 *)(plVar4 + 2) = (undefined4)local_c8;
        *(undefined4 *)((longlong)plVar4 + 0x14) = local_c8._4_4_;
        *(undefined4 *)(plVar4 + 3) = uStack_c0;
        *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_bc;
        lVar3 = FDelegateHandle::GenerateNewID();
        plVar4[5] = lVar3;
        *plVar4 = (longlong)&PTR_FUN_143f77bd0;
      }
      local_a8 = 0;
      local_a0 = 0;
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x30))(plVar4,&local_a8);
      }
      FWeakObjectPtr::operator=(local_98,0);
      local_e0 = 0xbf800000;
      local_e8 = 0;
      local_90 = 0;
      local_58 = (longlong *)0x0;
      local_48 = 0;
      local_88 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar6,param_1 + 0x69,&local_a8,0x40000000);
      if (local_48 != 0) {
        plVar5 = local_78;
        if (local_58 != (longlong *)0x0) {
          plVar5 = local_58;
        }
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x10))(plVar5,0);
        }
      }
      if (local_58 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x28))(plVar4,0);
        local_b8 = (longlong *)FMemory::Realloc(plVar4,0,0);
        if (local_b8 != (longlong *)0x0) {
          FMemory::Free(local_b8);
        }
      }
    }
    *(undefined4 *)((longlong)param_1 + 0x354) = 0xffffffff;
    plVar4 = (longlong *)param_2[1];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar3 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
  }
  else {
    FUN_140e07a10(param_1,&local_d8);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_2);
  }
  return;
}



// FUNCTION 140dff9b0 FUN_140dff9b0 body=85 status=ok
// SIG undefined FUN_140dff9b0(void)

void FUN_140dff9b0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  param_1[0x68] = param_2;
  lVar1 = 0;
  if (param_1[0x31] != 0) {
    lVar1 = *(longlong *)(param_1[0x31] + 0xf8);
  }
  if ((param_2 != 0) && (lVar1 != 0)) {
    (**(code **)(*param_1 + 0x2e8))(param_1,1);
    FUN_140de7bc0(lVar1,param_1,0);
  }
  return;
}



// FUNCTION 140dffa10 FUN_140dffa10 body=31 status=ok
// SIG undefined FUN_140dffa10(void)

void FUN_140dffa10(longlong param_1,undefined8 param_2,float param_3)

{
  longlong lVar1;
  longlong in_stack_00000038;
  
  *(longlong *)(param_1 + 0x4e0) = *(longlong *)(param_1 + 0x4e0) + (longlong)param_3;
  lVar1 = *(longlong *)(in_stack_00000038 + 0x38);
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
  }
  return;
}



// FUNCTION 140dffa30 FUN_140dffa30 body=7 status=ok
// SIG undefined FUN_140dffa30(void)

void FUN_140dffa30(longlong param_1)

{
  *(int *)(param_1 + 0x4e8) = *(int *)(param_1 + 0x4e8) + 1;
  return;
}



// FUNCTION 140dffa70 FUN_140dffa70 body=690 status=ok
// SIG undefined FUN_140dffa70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140dffa70(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_348 [32];
  undefined8 *local_328;
  undefined8 *local_320;
  code **local_318;
  undefined8 local_308;
  undefined8 local_300;
  undefined4 local_2f8;
  undefined8 local_2f0;
  undefined2 local_2e8;
  undefined1 local_2e0 [16];
  undefined1 local_2d0 [40];
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  longlong local_298;
  code *local_288 [2];
  longlong local_278 [4];
  longlong *local_258;
  int local_248;
  undefined1 local_238 [520];
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_348;
  if (param_1[0x8e] == 0) {
    return;
  }
  cVar2 = FText::IsEmpty(param_1 + 99);
  lVar6 = 0;
  if (cVar2 == '\0') {
    local_328 = (undefined8 *)0x0;
    FUN_140de6a50(param_1[0x31],param_1 + 10,param_1 + 99,0x40a00000);
  }
  plVar7 = param_1 + 0x10;
  lVar3 = FWeakObjectPtr::Get(plVar7);
  if (lVar3 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == (int)param_1[0x11]) || (local_308 = 0, param_1[0x12] == 0))
    goto LAB_140dffcc4;
    lVar3 = FUN_141796df0();
    FWeakObjectPtr::operator=(plVar7,lVar3);
    if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(param_1 + 0x11) = DAT_1464b56f4;
    }
    lVar3 = FWeakObjectPtr::Get(plVar7);
    if (lVar3 == 0) goto LAB_140dffcc4;
  }
  lVar4 = FUN_140600840();
  if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    local_308 = 0;
    if ((param_1[0x68] == 0) ||
       (((*(int *)((longlong)param_1 + 0x364) == 0 && (int)param_1[0x6c] == 0) &&
        *(int *)((longlong)param_1 + 0x35c) == 0) && (int)param_1[0x6b] == 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      local_258 = (longlong *)0x0;
      local_288[0] = AK::MemoryMgr::StartProfileThreadUsage;
      local_248 = 0;
      local_300 = 0xffffffff00000000;
      local_2f0 = 0;
      local_2e8 = 0;
      local_2f8 = 0;
      local_238[0] = 0;
      local_30 = 0;
      local_28 = 0;
      TSoftObjectPtr<UTexture2D>::TSoftObjectPtr<UTexture2D>(local_2d0,param_1 + 0x66);
      local_298 = param_1[0x6d];
      local_2a8 = (undefined4)param_1[0x6b];
      uStack_2a4 = *(undefined4 *)((longlong)param_1 + 0x35c);
      uStack_2a0 = (undefined4)param_1[0x6c];
      uStack_29c = *(undefined4 *)((longlong)param_1 + 0x364);
      uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
      local_318 = local_288;
      local_320 = &local_2f0;
      local_328 = &local_300;
      FUN_1405f2e30(local_2e0,uVar5,local_2d0,local_238);
      if (local_30 != 0) {
        FMemory::Free();
      }
      if (local_248 != 0) {
        plVar7 = local_278;
        if (local_258 != (longlong *)0x0) {
          plVar7 = local_258;
        }
        if (plVar7 != (longlong *)0x0) {
          (**(code **)(*plVar7 + 0x10))(plVar7,0);
        }
      }
      if (local_258 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
  }
LAB_140dffcc4:
  if (param_1[0x31] != 0) {
    lVar6 = *(longlong *)(param_1[0x31] + 0xf8);
  }
  if (lVar6 != 0) {
    *(undefined4 *)(param_1 + 0x30) = 7;
    FUN_140de7700(lVar6,param_1);
  }
  return;
}



// FUNCTION 140dffd40 FUN_140dffd40 body=732 status=ok
// SIG undefined FUN_140dffd40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140dffd40(longlong *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
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
  uVar2 = (**(code **)(*param_1 + 0x148))();
  plVar3 = (longlong *)FUN_142dcfb00(uVar2);
  if (plVar3 != (longlong *)0x0) {
    lVar4 = FUN_14145f370();
    if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar4 = FUN_140cfbfb0(plVar3);
      lVar5 = (**(code **)(*plVar3 + 0x678))(plVar3);
      if (lVar5 != 0) {
        lVar6 = FUN_1413f82e0();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          if (param_1[0x11] == 0) {
            return;
          }
          if (lVar4 == 0) {
            return;
          }
          if (*(int *)((longlong)param_1 + 0xd4) == *(int *)(lVar4 + 0x28)) {
            return;
          }
          lVar4 = FUN_140d3b6b0(lVar4 + 0x50);
          if (lVar4 == 0) {
            return;
          }
          if (param_1[0x1f] == 0) {
            FUN_140e09170();
            return;
          }
          FUN_140e09530(param_1);
          return;
        }
      }
    }
  }
  local_a8 = 0;
  lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar4 != 0) {
    uStack_98 = 0;
    local_a0 = FUN_140dffd40;
    if (*(longlong *)(lVar4 + 400) == 0) {
      uVar2 = *(undefined8 *)(lVar4 + 0x3f8);
    }
    else {
      uVar2 = *(undefined8 *)(*(longlong *)(lVar4 + 400) + 0x90);
    }
    plVar3 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar3 + 1,param_1);
      *(undefined4 *)(plVar3 + 2) = (undefined4)local_a0;
      *(undefined4 *)((longlong)plVar3 + 0x14) = local_a0._4_4_;
      *(undefined4 *)(plVar3 + 3) = uStack_98;
      *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_94;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[5] = lVar4;
      *plVar3 = (longlong)&PTR_FUN_143f77bd0;
    }
    local_88 = 0;
    local_80 = 0;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_88);
    }
    FWeakObjectPtr::operator=(local_78,0);
    local_b0 = 0xbf800000;
    local_b8 = 0;
    local_70 = 0;
    local_38 = (longlong *)0x0;
    local_28 = 0;
    local_68 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar2,&local_a8,&local_88,0x3f800000);
    if (local_28 != 0) {
      plVar7 = local_58;
      if (local_38 != (longlong *)0x0) {
        plVar7 = local_38;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_88);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3,0);
      lVar4 = FMemory::Realloc(plVar3,0,0);
      if (lVar4 != 0) {
        FMemory::Free(lVar4);
      }
    }
  }
  return;
}



// FUNCTION 140e00020 FUN_140e00020 body=52 status=ok
// SIG undefined FUN_140e00020(void)

void FUN_140e00020(longlong param_1)

{
  undefined8 local_18;
  longlong local_10;
  
  local_10 = *(longlong *)(param_1 + 0x480);
  if (local_10 != 0) {
    local_18 = 0;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x488,&local_18);
  }
  return;
}



// FUNCTION 140e00060 FUN_140e00060 body=390 status=ok
// SIG undefined FUN_140e00060(void)

void FUN_140e00060(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))();
    if (plVar1 != (longlong *)0x0) {
      puVar2 = cohtml::IEventHandler::operator_new(0x18);
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)0x0;
      }
      else {
        *puVar2 = &PTR_FUN_1445766b0;
        puVar2[2] = FUN_140de71f0;
      }
      puVar2[1] = param_1;
      (**(code **)(*plVar1 + 0x150))(plVar1,"Enable_Cross_Platform_Notify");
    }
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))();
    if (plVar1 != (longlong *)0x0) {
      puVar2 = cohtml::IEventHandler::operator_new(0x18);
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)0x0;
      }
      else {
        *puVar2 = &PTR_FUN_1445766d0;
        puVar2[2] = FUN_140e06a00;
      }
      puVar2[1] = param_1;
      (**(code **)(*plVar1 + 0x150))(plVar1,"Set_Display_Name_Notify");
    }
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))();
    if (plVar1 != (longlong *)0x0) {
      puVar2 = cohtml::IEventHandler::operator_new(0x18);
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)0x0;
      }
      else {
        *puVar2 = &PTR_FUN_143f4cf48;
        puVar2[2] = FUN_140e01fc0;
      }
      puVar2[1] = param_1;
      (**(code **)(*plVar1 + 0x150))(plVar1,"On_Back_Notify");
    }
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))();
    if (plVar1 != (longlong *)0x0) {
      puVar2 = cohtml::IEventHandler::operator_new(0x18);
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)0x0;
      }
      else {
        *puVar2 = &PTR_FUN_1445766f0;
        puVar2[2] = FUN_140df0100;
      }
      puVar2[1] = param_1;
      (**(code **)(*plVar1 + 0x150))(plVar1,"Get_Gamepad_Index");
    }
  }
  return;
}



// FUNCTION 140e001f0 FUN_140e001f0 body=1241 status=ok
// SIG undefined FUN_140e001f0(void)

void FUN_140e001f0(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))();
    if (plVar1 != (longlong *)0x0) {
      puVar2 = cohtml::IEventHandler::operator_new(0x18);
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)0x0;
      }
      else {
        *puVar2 = &PTR_FUN_1445766d0;
        puVar2[2] = FUN_140e061c0;
      }
      puVar2[1] = param_1;
      (**(code **)(*plVar1 + 0x150))(plVar1,"Search_SHiFT_Friends_Call");
    }
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))();
    if (plVar1 != (longlong *)0x0) {
      puVar2 = cohtml::IEventHandler::operator_new(0x18);
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)0x0;
      }
      else {
        *puVar2 = &PTR_FUN_144576710;
        puVar2[2] = FUN_140dfa140;
      }
      puVar2[1] = param_1;
      (**(code **)(*plVar1 + 0x150))(plVar1,"Load_Invitations_Notify");
    }
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))();
    if (plVar1 != (longlong *)0x0) {
      puVar2 = cohtml::IEventHandler::operator_new(0x18);
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)0x0;
      }
      else {
        *puVar2 = &PTR_FUN_144576730;
        puVar2[2] = FUN_140df89f0;
      }
      puVar2[1] = param_1;
      (**(code **)(*plVar1 + 0x150))(plVar1,"Invitation_Accept_Friend_Invite_Notify");
    }
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))();
    if (plVar1 != (longlong *)0x0) {
      puVar2 = cohtml::IEventHandler::operator_new(0x18);
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)0x0;
      }
      else {
        *puVar2 = &PTR_FUN_144576730;
        puVar2[2] = FUN_140df8e10;
      }
      puVar2[1] = param_1;
      (**(code **)(*plVar1 + 0x150))(plVar1,"Invitation_Decline_Friend_Invite_Notify");
    }
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))();
    if (plVar1 != (longlong *)0x0) {
      puVar2 = cohtml::IEventHandler::operator_new(0x18);
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)0x0;
      }
      else {
        *puVar2 = &PTR_FUN_144576730;
        puVar2[2] = FUN_140df8c00;
      }
      puVar2[1] = param_1;
      (**(code **)(*plVar1 + 0x150))(plVar1,"Invitation_Block_Friend_Invite_Notify");
    }
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))();
    if (plVar1 != (longlong *)0x0) {
      puVar2 = cohtml::IEventHandler::operator_new(0x18);
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)0x0;
      }
      else {
        *puVar2 = &PTR_FUN_144576730;
        puVar2[2] = FUN_140df92e0;
      }
      puVar2[1] = param_1;
      (**(code **)(*plVar1 + 0x150))(plVar1,"Invitation_Join_Game_Notify");
    }
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))();
    if (plVar1 != (longlong *)0x0) {
      puVar2 = cohtml::IEventHandler::operator_new(0x18);
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)0x0;
      }
      else {
        *puVar2 = &PTR_FUN_144576730;
        puVar2[2] = FUN_140df9020;
      }
      puVar2[1] = param_1;
      (**(code **)(*plVar1 + 0x150))(plVar1,"Invitation_Decline_Game_Notify");
    }
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))();
    if (plVar1 != (longlong *)0x0) {
      puVar2 = cohtml::IEventHandler::operator_new(0x18);
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)0x0;
      }
      else {
        *puVar2 = &PTR_FUN_144576750;
        puVar2[2] = FUN_140deaba0;
      }
      puVar2[1] = param_1;
      (**(code **)(*plVar1 + 0x150))(plVar1,"Friend_Add_Friend_Notify");
    }
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))();
    if (plVar1 != (longlong *)0x0) {
      puVar2 = cohtml::IEventHandler::operator_new(0x18);
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)0x0;
      }
      else {
        *puVar2 = &PTR_FUN_144576750;
        puVar2[2] = FUN_140deafc0;
      }
      puVar2[1] = param_1;
      (**(code **)(*plVar1 + 0x150))(plVar1,"Friend_Remove_Friend_Notify");
    }
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))();
    if (plVar1 != (longlong *)0x0) {
      puVar2 = cohtml::IEventHandler::operator_new(0x18);
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)0x0;
      }
      else {
        *puVar2 = &PTR_FUN_144576750;
        puVar2[2] = FUN_140deadb0;
      }
      puVar2[1] = param_1;
      (**(code **)(*plVar1 + 0x150))(plVar1,"Friend_Block_Friend_Notify");
    }
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))();
    if (plVar1 != (longlong *)0x0) {
      puVar2 = cohtml::IEventHandler::operator_new(0x18);
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)0x0;
      }
      else {
        *puVar2 = &PTR_FUN_144576750;
        puVar2[2] = FUN_140deb1d0;
      }
      puVar2[1] = param_1;
      (**(code **)(*plVar1 + 0x150))(plVar1,"Friend_Unblock_Friend_Notify");
    }
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))();
    if (plVar1 != (longlong *)0x0) {
      puVar2 = cohtml::IEventHandler::operator_new(0x18);
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)0x0;
      }
      else {
        *puVar2 = &PTR_FUN_1440f8ff0;
        puVar2[2] = FUN_140defff0;
      }
      puVar2[1] = param_1;
      (**(code **)(*plVar1 + 0x150))(plVar1,"Get_Display_Name_Notify");
    }
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))();
    if (plVar1 != (longlong *)0x0) {
      puVar2 = cohtml::IEventHandler::operator_new(0x18);
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)0x0;
      }
      else {
        *puVar2 = &PTR_FUN_143f4cf48;
        puVar2[2] = &LAB_140e02040;
      }
      puVar2[1] = param_1;
      (**(code **)(*plVar1 + 0x150))(plVar1,"On_Back_Notify");
    }
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))();
    if (plVar1 != (longlong *)0x0) {
      puVar2 = cohtml::IEventHandler::operator_new(0x18);
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)0x0;
      }
      else {
        *puVar2 = &PTR_FUN_1445766f0;
        puVar2[2] = FUN_140df01a0;
      }
      puVar2[1] = param_1;
      (**(code **)(*plVar1 + 0x150))(plVar1,"Get_Gamepad_Index");
    }
  }
  return;
}



// FUNCTION 140e006d0 FUN_140e006d0 body=339 status=ok
// SIG undefined FUN_140e006d0(void)

void FUN_140e006d0(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *local_18;
  longlong *local_10;
  
  FUN_1404cf2e0(&local_18,0);
  if (local_18 != (longlong *)0x0) {
    (**(code **)(*local_18 + 0x140))(local_18,param_1 + 0x88);
  }
  if ((param_2 == 1) || (param_5 == 3)) {
    uVar8 = 1;
    cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x48);
    if (cVar4 != '\0') {
      uVar5 = FWeakObjectPtr::Get(param_1 + 0x48);
      lVar6 = FUN_140bba5e0(uVar5);
      if (lVar6 != 0) {
        lVar6 = FUN_140d3a750(lVar6,param_1 + 0x50);
        if (lVar6 != 0) {
          *(undefined2 *)(lVar6 + 0x1e2) = 0x101;
          *(undefined1 *)(lVar6 + 0x28) = 1;
        }
      }
    }
    *(undefined1 *)(param_1 + 0x60) = 1;
  }
  else {
    uVar8 = 0;
  }
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
    lVar6 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))();
    if (lVar6 != 0) {
      plVar7 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))();
      plVar7 = (longlong *)(**(code **)(*plVar7 + 0x198))(plVar7);
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x50))(plVar7,"Enable_Cross_Platform_Notify_Response",1);
        (**(code **)(*plVar7 + 0x120))(plVar7,uVar8);
        (**(code **)(*plVar7 + 0x58))(plVar7);
      }
    }
  }
  plVar7 = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return;
}



// FUNCTION 140e00830 FUN_140e00830 body=128 status=ok
// SIG undefined FUN_140e00830(void)

void FUN_140e00830(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  *(undefined4 *)(param_1 + 0xb8) = param_3;
  *(undefined8 *)(param_1 + 0xc0) = *param_2;
  plVar3 = (longlong *)param_2[1];
  plVar4 = *(longlong **)(param_1 + 200);
  if (plVar3 != plVar4) {
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      plVar4 = *(longlong **)(param_1 + 200);
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
    *(longlong **)(param_1 + 200) = plVar3;
  }
  if (*(int *)(param_1 + 0xb8) == 0) {
    FUN_140e057f0(param_1);
  }
  return;
}



// FUNCTION 140e008b0 FUN_140e008b0 body=156 status=ok
// SIG undefined FUN_140e008b0(void)

void FUN_140e008b0(longlong param_1,undefined8 *param_2,int param_3)

{
  char cVar1;
  longlong local_28 [3];
  longlong local_10;
  
  cVar1 = (*(code *)**(undefined8 **)*param_2)
                    ((undefined8 *)*param_2,*(undefined8 *)(param_1 + 0x50));
  if ((cVar1 != '\0') && (param_3 == 0)) {
    local_28[0] = 0;
    local_28[1] = 0;
    local_28[2] = *(undefined8 *)(param_1 + 0x50);
    local_10 = *(longlong *)(param_1 + 0x58);
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
    }
    FUN_140de82c0(param_1 + 0x38,5,local_28 + 2,*(undefined1 *)(param_1 + 0x61),
                  *(undefined1 *)(param_1 + 0x60),local_28);
    if (local_28[0] != 0) {
      FMemory::Free();
    }
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0xf0))();
  }
  return;
}



// FUNCTION 140e00950 FUN_140e00950 body=526 status=ok
// SIG undefined FUN_140e00950(void)

void FUN_140e00950(longlong param_1,ulonglong param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *local_res8;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uVar6 = 0;
  if (param_2 == 0) {
LAB_140e009a6:
    param_2 = uVar6;
  }
  else {
    lVar3 = FUN_1414cf540();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140e009a6;
  }
  *(ulonglong *)(param_1 + 0x100) = param_2;
  if (param_2 != 0) {
    uStack_20 = 0;
    local_28 = FUN_140e00f60;
    plVar5 = (longlong *)(param_2 + 0x4b8);
    plVar4 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = (longlong)&PTR_FUN_143fcfec0;
      FWeakObjectPtr::operator=(plVar4 + 1,param_1);
      *(undefined4 *)(plVar4 + 2) = (undefined4)local_28;
      *(undefined4 *)((longlong)plVar4 + 0x14) = local_28._4_4_;
      *(undefined4 *)(plVar4 + 3) = uStack_20;
      *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_1c;
      lVar3 = FDelegateHandle::GenerateNewID();
      plVar4[5] = lVar3;
      *plVar4 = (longlong)&PTR_FUN_143fcff08;
    }
    if (&local_28 != plVar5) {
      if (plVar4 == (longlong *)0x0) {
        if ((*(int *)(param_2 + 0x4c0) != 0) &&
           (plVar4 = (longlong *)*plVar5, plVar4 != (longlong *)0x0)) {
          (**(code **)(*plVar4 + 0x28))(plVar4,0);
          if (*plVar5 != 0) {
            lVar3 = FMemory::Realloc(*plVar5,0,0);
            *plVar5 = lVar3;
          }
          *(undefined4 *)(param_2 + 0x4c0) = 0;
        }
        goto LAB_140e00a66;
      }
      (**(code **)(*plVar4 + 0x30))(plVar4,plVar5);
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x28))(plVar4,0);
      lVar3 = FMemory::Realloc(plVar4,0,0);
      if (lVar3 != 0) {
        FMemory::Free(lVar3);
      }
    }
  }
LAB_140e00a66:
  lVar3 = *(longlong *)(param_1 + 0xf8);
  plVar4 = *(longlong **)(lVar3 + 0x38);
  uVar7 = (longlong)*(int *)(lVar3 + 0x40) & 0x1fffffffffffffff;
  if (plVar4 + *(int *)(lVar3 + 0x40) < plVar4) {
    uVar7 = uVar6;
  }
  if (uVar7 == 0) {
    *(undefined1 *)(lVar3 + 0x88) = 0;
  }
  else {
    do {
      plVar5 = (longlong *)*plVar4;
      if (plVar5 != (longlong *)0x0) {
        local_res8 = plVar5;
        TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
        AddUniqueImpl<UGeometryCacheComponent_*_const_&>(lVar3 + 0x38,&local_res8);
        (**(code **)(*plVar5 + 0x2b0))(plVar5,*(undefined8 *)(lVar3 + 0x30));
        if (((char)plVar5[9] == '\0') &&
           (cVar2 = (**(code **)(*plVar5 + 0x288))(plVar5), cVar2 != '\0')) {
          TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
          AddUniqueImpl<UGeometryCacheComponent_*_const_&>(lVar3 + 0x68,&local_res8);
        }
      }
      plVar4 = plVar4 + 1;
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar7);
    *(undefined1 *)(lVar3 + 0x88) = 0;
  }
  return;
}



// FUNCTION 140e00b90 FUN_140e00b90 body=968 status=ok
// SIG undefined FUN_140e00b90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e00b90(longlong *param_1,char param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_158 [32];
  uint local_138;
  uint local_130;
  undefined4 local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  ulonglong local_108;
  undefined1 local_100 [8];
  longlong local_f8 [2];
  longlong local_e8;
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  local_108 = local_108 & 0xffffffff00000000;
  plVar3 = (longlong *)param_1[0x11];
  bVar8 = plVar3 == (longlong *)0x0;
  if (bVar8) {
    local_118 = (code *)0x0;
    uStack_110 = 0x15;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,0);
    FGenericPlatformString::Memcpy(local_118,L"NO STREAMING SERVICE",0x2a);
    plVar3 = &local_118;
  }
  else {
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3,local_f8);
  }
  lVar5 = *plVar3;
  *plVar3 = 0;
  local_e8 = lVar5;
  plVar3[1] = 0;
  if (bVar8) {
    if (local_118 != (code *)0x0) {
      FMemory::Free();
    }
  }
  if ((!bVar8) && (local_f8[0] != 0)) {
    FMemory::Free();
  }
  *(int *)(param_1 + 0x1a) = param_3;
  if (param_3 == 3) {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (local_c0,L"No Token Found",L"StreamingInteractionMgr",L"NoTokenTitle");
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (local_d8,
               L"Your Twitch account does not appear to be connected to your SHiFT account.",
               L"StreamingInteractionMgr",L"NoTokenDesc");
    uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar5 = UGameplayStatics::GetPlayerController(uVar4,0);
    if (lVar5 != 0) {
      lVar6 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if ((bVar8) && (*(longlong *)(lVar5 + 0x1428) != 0)) {
        local_128 = 2;
        local_130 = local_130 & 0xffffff00;
        local_138 = 0x40e00000;
        FUN_1411db4f0(*(longlong *)(lVar5 + 0x1428),local_100,local_c0,local_d8);
      }
    }
    (**(code **)(*(longlong *)param_1[0x11] + 0x10))();
    param_1[0x11] = 0;
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_d0 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_b8 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_b8)(local_b8);
        LOCK();
        piVar1 = (int *)((longlong)local_b8 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_b8 + 8))(local_b8,1);
        }
      }
    }
  }
  else if (param_2 == '\0') {
    local_108 = 0;
    lVar5 = (**(code **)(*param_1 + 0x148))(param_1);
    if (lVar5 != 0) {
      uStack_110 = uStack_110 & 0xffffffff00000000;
      local_118 = FUN_140e057f0;
      if (*(longlong *)(lVar5 + 400) == 0) {
        uVar4 = *(undefined8 *)(lVar5 + 0x3f8);
      }
      else {
        uVar4 = *(undefined8 *)(*(longlong *)(lVar5 + 400) + 0x90);
      }
      plVar3 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar3 != (longlong *)0x0) {
        *plVar3 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar3 + 1,param_1);
        *(undefined4 *)(plVar3 + 2) = (undefined4)local_118;
        *(undefined4 *)((longlong)plVar3 + 0x14) = local_118._4_4_;
        *(undefined4 *)(plVar3 + 3) = (undefined4)uStack_110;
        *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_110._4_4_;
        lVar5 = FDelegateHandle::GenerateNewID();
        plVar3[5] = lVar5;
        *plVar3 = (longlong)&PTR_FUN_143f77bd0;
      }
      local_a8 = 0;
      local_a0 = 0;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x30))(plVar3,&local_a8);
      }
      FWeakObjectPtr::operator=(local_98,0);
      local_130 = 0xbf800000;
      local_138 = local_138 & 0xffffff00;
      local_90 = 0;
      local_58 = (longlong *)0x0;
      local_48 = 0;
      local_88 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar4,&local_108,&local_a8,0x40a00000);
      if (local_48 != 0) {
        plVar7 = local_78;
        if (local_58 != (longlong *)0x0) {
          plVar7 = local_58;
        }
        if (plVar7 != (longlong *)0x0) {
          (**(code **)(*plVar7 + 0x10))(plVar7,0);
        }
      }
      if (local_58 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x28))(plVar3,0);
        lVar5 = FMemory::Realloc(plVar3,0,0);
        if (lVar5 != 0) {
          FMemory::Free(lVar5);
        }
      }
    }
  }
  if (local_e8 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140e00f60 FUN_140e00f60 body=47 status=ok
// SIG undefined FUN_140e00f60(void)

void FUN_140e00f60(longlong param_1,float *param_2)

{
  *(float *)(param_1 + 0x60) = *(float *)(param_1 + 0x60) + *param_2;
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + (int)param_2[4];
  *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + (int)param_2[5];
  *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + (int)param_2[6];
  *(longlong *)(param_1 + 0x68) = *(longlong *)(param_1 + 0x68) + *(longlong *)(param_2 + 2);
  *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + (int)param_2[7];
  return;
}



// FUNCTION 140e00fa0 FUN_140e00fa0 body=1209 status=ok
// SIG undefined FUN_140e00fa0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e00fa0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  void *pvVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  void *_Memory;
  uint uVar10;
  int *piVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  uint uVar15;
  uint *puVar16;
  undefined1 auStack_118 [32];
  longlong local_f8 [2];
  uint local_e8;
  longlong *local_e0;
  undefined4 uStack_d8;
  uint uStack_d4;
  uint *local_d0;
  uint uStack_c8;
  uint uStack_c4;
  undefined8 local_c0;
  longlong *local_b8;
  undefined8 uStack_b0;
  uint *puStack_a8;
  uint uStack_a0;
  uint uStack_9c;
  undefined8 uStack_98;
  undefined8 local_90;
  uint *puStack_88;
  uint local_80;
  uint uStack_7c;
  uint uStack_78;
  undefined2 uStack_74;
  undefined2 uStack_72;
  undefined8 *local_70;
  uint *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 *local_50;
  uint *local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  local_f8[0] = param_1;
  puVar8 = (uint *)operator_new(0x28);
  puVar14 = (uint *)0x0;
  puVar12 = puVar14;
  if (puVar8 != (uint *)0x0) {
    puVar8[0] = 0;
    puVar8[1] = 0;
    puVar8[2] = 0x10000;
    puVar8[3] = 0;
    puVar8[4] = 0;
    puVar8[5] = 0;
    puVar8[6] = 0;
    puVar8[7] = 0;
    puVar8[8] = 0;
    puVar8[9] = 0;
    puVar12 = puVar8;
  }
  local_50 = &local_40;
  local_40 = 0;
  local_38 = 0x3000000000000;
  local_70 = &local_60;
  local_60 = 0;
  local_58 = 0x4000000000000;
  local_68 = puVar12;
  local_48 = puVar12;
  if (0 < *(int *)(param_1 + 0x130) - *(int *)(param_1 + 0x15c)) {
    FUN_142ab5fa0(&local_70);
  }
  plVar1 = (longlong *)(param_1 + 0x128);
  uVar3 = *(uint *)(param_1 + 0x150);
  puVar8 = (uint *)(param_1 + 0x138);
  local_90 = (uint *)0x100000000;
  uStack_7c = 0;
  uStack_78 = 0;
  if (uVar3 != 0) {
    puVar16 = *(uint **)(param_1 + 0x148);
    if (*(uint **)(param_1 + 0x148) == (uint *)0x0) {
      puVar16 = puVar8;
    }
    uVar6 = *puVar16;
    puVar9 = puVar14;
    puVar13 = puVar14;
    while (uVar6 == 0) {
      iVar7 = (int)puVar9;
      uStack_78 = (int)puVar13 + 0x20;
      puVar13 = (uint *)(ulonglong)uStack_78;
      puVar9 = (uint *)(ulonglong)(iVar7 + 1U);
      uVar5 = (ulonglong)local_90 >> 0x20;
      local_90 = (uint *)CONCAT44((int)uVar5,iVar7 + 1U);
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_140e0111c;
      uVar6 = puVar16[(longlong)iVar7 + 1];
    }
    uVar6 = -uVar6 & uVar6;
    iVar7 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    local_90 = (uint *)CONCAT44(uVar6,SUB84(local_90,0));
    if (uVar6 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_7c = (uStack_78 - iVar7) + 0x1f;
    if ((int)uVar3 < (int)uStack_7c) {
LAB_140e0111c:
      uStack_7c = uVar3;
    }
  }
  uVar6 = *(uint *)(param_1 + 0x150);
  uStack_c8 = 0xffffffff;
  uStack_c4 = uStack_7c;
  local_c0 = CONCAT26(uStack_72,CONCAT24(uStack_74,uStack_78));
  local_e8 = -1 << ((byte)uVar6 & 0x1f);
  uStack_b0 = local_90;
  puVar16 = uStack_b0;
  uVar15 = uVar6 & 0xffffffe0;
  uStack_b0._0_4_ = SUB84(local_90,0);
  uStack_b0._4_4_ = (uint)((ulonglong)local_90 >> 0x20);
  uStack_d8 = (undefined4)uStack_b0;
  uStack_d4 = uStack_b0._4_4_;
  local_d0 = puVar8;
  local_b8 = plVar1;
  uStack_b0 = puVar16;
  puStack_a8 = puVar8;
  uStack_98 = local_c0;
  puStack_88 = puVar8;
  local_80 = local_e8;
  uStack_7c = uVar6;
  uStack_a0 = uStack_c8;
  uStack_9c = uStack_c4;
  local_e0 = plVar1;
  if (uVar6 != uVar3) {
    puVar16 = *(uint **)(param_1 + 0x148);
    if (*(uint **)(param_1 + 0x148) == (uint *)0x0) {
      puVar16 = puVar8;
    }
    uVar10 = puVar16[(int)uVar6 >> 5] & local_e8;
    iVar7 = (int)uVar6 >> 5;
    while (uVar10 == 0) {
      uVar15 = uVar15 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_140e011f1;
      uVar10 = puVar16[(longlong)iVar7 + 1];
      local_80 = 0xffffffff;
      iVar7 = iVar7 + 1;
    }
    uVar10 = -uVar10 & uVar10;
    iVar7 = 0x1f;
    if (uVar10 != 0) {
      for (; uVar10 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uVar10 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_7c = (uVar15 - iVar7) + 0x1f;
    uVar6 = uStack_7c;
    if ((int)uVar3 < (int)uStack_7c) {
LAB_140e011f1:
      uStack_7c = uVar3;
      uVar6 = uVar3;
    }
  }
  while (((uStack_c4 != uVar6 || (local_d0 != puVar8)) || (local_e0 != plVar1))) {
    lVar2 = *local_e0 + (longlong)(int)uStack_c4 * 0x28;
    local_90 = &local_80;
    uStack_78 = 0;
    uStack_74 = 0;
    uStack_72 = 3;
    local_80 = 0;
    uStack_7c = 0;
    puStack_88 = puVar12;
    FUN_142ab64b0(&local_90,"thumbnail_name",lVar2);
    FUN_142ab64b0(&local_90,"base64_thumbnail",lVar2 + 0x10);
    FUN_142ab4ae0(&local_70,&local_90);
    uStack_c8 = uStack_c8 & ~uStack_d4;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_d8);
  }
  UE4Function_Private::
  TFunctionRefCaller<<lambda_7ba9f5259ce314810519498fe7d9f36b>,void___cdecl(FRHICommandListImmediate_&,FViewportSurfaceReader_*)>
  ::Call(&local_50,"thumbnails",&local_70);
  lVar2 = local_f8[0];
  piVar11 = *(int **)(local_f8[0] + 0x110);
  puVar8 = (uint *)((longlong)*(int *)(local_f8[0] + 0x118) & 0x3fffffffffffffff);
  if (piVar11 + *(int *)(local_f8[0] + 0x118) < piVar11) {
    puVar8 = puVar14;
  }
  if (puVar8 != (uint *)0x0) {
    do {
      iVar7 = *piVar11;
      piVar11 = piVar11 + 1;
      puVar14 = (uint *)((longlong)puVar14 + 1);
      *(undefined1 *)((longlong)iVar7 * 0x68 + 0x60 + *(longlong *)(local_f8[0] + 0x1b0)) = 1;
    } while (puVar14 != puVar8);
  }
  if (*(longlong *)(local_f8[0] + 0x88) != 0) {
    local_f8[0] = 0;
    local_f8[1] = 0x1a;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_f8,0);
    FGenericPlatformString::Memcpy(local_f8[0],L"InventoryThumbnailsUpdate",0x34);
    (**(code **)(**(longlong **)(lVar2 + 0x88) + 0x98))
              (*(longlong **)(lVar2 + 0x88),local_f8,0,&local_50);
    if (local_f8[0] != 0) {
      FMemory::Free();
    }
  }
  if (*(longlong *)(lVar2 + 0x108) != 0) {
    FUN_1411f8450();
    FUN_1407665e0(*(longlong *)(lVar2 + 0x108) + 0xe8,lVar2);
    *(undefined8 *)(lVar2 + 0x108) = 0;
  }
  *(undefined4 *)(lVar2 + 0x118) = 0;
  if (*(int *)(lVar2 + 0x11c) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(lVar2 + 0x110,0);
  }
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Empty(plVar1,0);
  if (puVar12 != (uint *)0x0) {
    _Memory = *(void **)puVar12;
    if (*(void **)puVar12 != (void *)0x0) {
      do {
        if (_Memory == *(void **)(puVar12 + 4)) break;
        pvVar4 = *(void **)((longlong)_Memory + 0x10);
        free(_Memory);
        *(void **)puVar12 = pvVar4;
        _Memory = pvVar4;
      } while (pvVar4 != (void *)0x0);
      lVar2 = *(longlong *)puVar12;
      if ((lVar2 != 0) && (lVar2 == *(longlong *)(puVar12 + 4))) {
        *(undefined8 *)(lVar2 + 8) = 0;
      }
    }
    FMemory::operator_delete(*(longlong *)(puVar12 + 8),1);
    FMemory::operator_delete(puVar12,0x28);
  }
  free((void *)0x0);
  FMemory::operator_delete(0,1);
  return;
}



// FUNCTION 140e01460 FUN_140e01460 body=472 status=ok
// SIG undefined FUN_140e01460(void)

void FUN_140e01460(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  int local_res8 [2];
  undefined4 local_res10 [2];
  undefined1 local_res18 [16];
  longlong local_68 [2];
  undefined4 local_58;
  undefined4 local_54;
  longlong *local_48;
  longlong local_38;
  
  lVar8 = *(longlong *)(param_1 + 0x268);
  lVar7 = (longlong)*(int *)(param_1 + 0x288) * 0x68;
  uVar5 = *(undefined8 *)(lVar7 + 0x30 + *(longlong *)(param_1 + 0x278));
  uVar2 = *(undefined8 *)(lVar7 + 8 + *(longlong *)(param_1 + 0x278));
  piVar3 = (int *)FUN_140dea820(lVar8 + 0x4b0,local_res18,uVar5);
  if (*piVar3 == -1) {
    lVar8 = lVar8 + 0x500;
  }
  else {
    FUN_140dea820(lVar8 + 0x4b0,local_res8,uVar5);
    if (local_res8[0] == -1) {
      lVar8 = 0x10;
    }
    else {
      lVar8 = (longlong)local_res8[0] * 0x690 + *(longlong *)(lVar8 + 0x4b0) + 0x10;
    }
  }
  FUN_1411e2a40(*(undefined8 *)(param_1 + 0x270),&local_58,uVar2,lVar8);
  puVar4 = (undefined4 *)FUN_1411e6e10(&local_58,local_res10);
  uVar5 = FUN_1416f8720(*puVar4);
  FUN_1416f8340(local_res10[0]);
  lVar8 = (longlong)*(int *)(param_1 + 0x288) * 0x60 + *(longlong *)(param_1 + 600);
  plVar6 = (longlong *)FUN_142de9170(local_68,uVar5);
  plVar9 = (longlong *)(lVar8 + 0x48);
  if (plVar9 != plVar6) {
    if (*plVar9 != 0) {
      FMemory::Free();
    }
    *plVar9 = *plVar6;
    *plVar6 = 0;
    *(int *)(lVar8 + 0x50) = (int)plVar6[1];
    *(undefined4 *)(lVar8 + 0x54) = *(undefined4 *)((longlong)plVar6 + 0xc);
    plVar6[1] = 0;
  }
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  FUN_1411f57e0(*(undefined8 *)(param_1 + 0x270));
  FUN_1411dba20(*(undefined8 *)(param_1 + 0x270));
  FUN_1411f5630(*(undefined8 *)(param_1 + 0x270));
  FUN_140decba0(param_1);
  if (local_38 != 0) {
    LOCK();
    piVar3 = (int *)(local_38 + 0x48);
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      FGraphEvent::Recycle();
    }
  }
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_48 + 1;
    lVar8 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar3 = (int *)((longlong)local_48 + 0xc);
      iVar1 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        (**(code **)(*local_48 + 8))(local_48,1);
      }
    }
  }
  FUN_1416f8340(local_54);
  FUN_1416f8340(local_58);
  return;
}



// FUNCTION 140e01640 FUN_140e01640 body=487 status=ok
// SIG undefined FUN_140e01640(void)

void FUN_140e01640(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  int local_res8 [2];
  longlong local_68;
  undefined8 local_60;
  longlong local_58 [2];
  undefined1 local_48 [48];
  
  if ((*(longlong *)(param_1 + 0x108) != 0) && (lVar6 = *(longlong *)(param_1 + 0x178), lVar6 != 0))
  {
    if ((*(int *)(param_1 + 0x120) < *(int *)(param_1 + 0x118)) &&
       (iVar1 = *(int *)(*(longlong *)(param_1 + 0x110) + (longlong)*(int *)(param_1 + 0x120) * 4),
       iVar1 < *(int *)(param_1 + 0x1b8))) {
      lVar7 = (longlong)iVar1 * 0x68;
      uVar5 = *(undefined8 *)(lVar7 + 0x30 + *(longlong *)(param_1 + 0x1b0));
      uVar2 = *(undefined8 *)(lVar7 + 8 + *(longlong *)(param_1 + 0x1b0));
      piVar3 = (int *)FUN_140dea820(lVar6 + 0x4b0,local_res8,uVar5);
      if (*piVar3 == -1) {
        lVar6 = lVar6 + 0x500;
      }
      else {
        FUN_140dea820(lVar6 + 0x4b0,local_res8,uVar5);
        if (local_res8[0] == -1) {
          lVar6 = 0x10;
        }
        else {
          lVar6 = (longlong)local_res8[0] * 0x690 + *(longlong *)(lVar6 + 0x4b0) + 0x10;
        }
      }
      FUN_1411e2a40(*(undefined8 *)(param_1 + 0x108),local_48,uVar2,lVar6);
      puVar4 = (undefined4 *)FUN_1411e6e10(local_48,local_res8);
      uVar5 = FUN_1416f8720(*puVar4);
      FUN_1416f8340(local_res8[0]);
      local_68 = *(longlong *)(param_1 + 0x1b0) + 0x20 + lVar7;
      local_60 = FUN_142de9170(local_58,uVar5);
      TSet<TTuple<FString,TArray<physx::PxBase_*,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TArray<physx::PxBase_*,FDefaultAllocator>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_const_&,TArray<physx::PxBase_*,FDefaultAllocator>_&&>_>
                (param_1 + 0x128,local_res8,&local_68,0);
      if (local_58[0] != 0) {
        FMemory::Free();
      }
      FUN_1411f57e0(*(undefined8 *)(param_1 + 0x108));
      FUN_1411dba20(*(undefined8 *)(param_1 + 0x108));
      FUN_1411f5630(*(undefined8 *)(param_1 + 0x108));
      FUN_140decd50(param_1);
      FUN_140ddef50(local_48);
      return;
    }
    FUN_140e00fa0(param_1);
  }
  return;
}



// FUNCTION 140e01830 FUN_140e01830 body=335 status=ok
// SIG undefined FUN_140e01830(void)

void FUN_140e01830(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  undefined8 local_res8;
  undefined2 *local_18;
  int local_10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146852c70) {
    _Init_thread_header(&DAT_146852c70);
    if (DAT_146852c70 == -1) {
      FName::FName(&DAT_146852c68,L"OnlineSubsystem",1);
      _Init_thread_footer(&DAT_146852c70);
    }
  }
  uVar2 = FUN_14168dc80();
  cVar1 = FModuleManager::IsModuleLoaded(uVar2,DAT_146852c68);
  uVar2 = DAT_146852c68;
  if (cVar1 == '\0') {
    plVar4 = (longlong *)0x0;
  }
  else {
    uVar3 = FUN_14168dc80();
    plVar4 = (longlong *)FModuleManager::GetModule(uVar3,uVar2);
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x58))(plVar4,0);
  }
  (**(code **)(*plVar4 + 8))(plVar4,&local_res8);
  FUN_140de5eb0(&local_18,local_res8);
  plVar4 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))();
  plVar4 = (longlong *)(**(code **)(*plVar4 + 0x198))(plVar4);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x50))(plVar4,"set_platform_name",1);
    puVar5 = &DAT_143f3eda8;
    if (local_10 != 0) {
      puVar5 = local_18;
    }
    (**(code **)(*plVar4 + 0xb0))(plVar4,puVar5);
    (**(code **)(*plVar4 + 0x58))(plVar4);
  }
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140e01980 FUN_140e01980 body=98 status=ok
// SIG undefined FUN_140e01980(void)

void FUN_140e01980(longlong param_1)

{
  longlong *plVar1;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))();
                    /* WARNING: Could not recover jumptable at 0x000140e019d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x1c8))(plVar1,"SetTabInvitations");
    return;
  }
  if (*(int *)(param_1 + 0xe0) == 1) {
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))();
                    /* WARNING: Could not recover jumptable at 0x000140e019b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x1c8))(plVar1,"SetTabFindFriends");
    return;
  }
  return;
}



// FUNCTION 140e019f0 FUN_140e019f0 body=375 status=ok
// SIG undefined FUN_140e019f0(void)

void FUN_140e019f0(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  undefined8 local_res10;
  
  if (param_2 != 0) {
    lVar4 = FUN_1414e0f70();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((bVar1) && (*(longlong *)(param_2 + 0x6d8) != 0)) &&
       (lVar4 = (**(code **)(*(longlong *)(*(longlong *)(param_2 + 0x6d8) + 0x618) + 0x10))(),
       lVar4 != 0)) {
      pwVar5 = _guard_xfg_dispatch_icall_nop
                         (L"&AStreamingEventDispatcher::OnPlayerCausedDamage",L"::");
      pwVar3 = (wchar_t *)0x0;
      while (pwVar2 = pwVar5, pwVar2 != (wchar_t *)0x0) {
        pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar3 = pwVar2;
      }
      FName::FName(&local_res10,pwVar3 + 2,1);
      TBaseDynamicMulticastDelegate<FWeakObjectPtr,void>::__Internal_AddDynamic<UDSMController>
                (lVar4 + 0x1e8,param_1,FUN_140dffa10,local_res10);
      pwVar5 = _guard_xfg_dispatch_icall_nop
                         (L"&AStreamingEventDispatcher::OnPlayerCausedDeath",L"::");
      pwVar3 = (wchar_t *)0x0;
      while (pwVar2 = pwVar5, pwVar2 != (wchar_t *)0x0) {
        pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar3 = pwVar2;
      }
      FName::FName(&local_res10,pwVar3 + 2,1);
      TBaseDynamicMulticastDelegate<FWeakObjectPtr,void>::__Internal_AddDynamic<UDSMController>
                (lVar4 + 0x1f8,param_1,FUN_140dffa30,local_res10);
    }
  }
  return;
}



// FUNCTION 140e01b70 FUN_140e01b70 body=153 status=ok
// SIG undefined FUN_140e01b70(void)

void FUN_140e01b70(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = FUN_1414e0f70();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((bVar1) && (*(longlong *)(param_2 + 0x6d8) != 0)) &&
       (lVar2 = (**(code **)(*(longlong *)(*(longlong *)(param_2 + 0x6d8) + 0x618) + 0x10))(),
       lVar2 != 0)) {
      FUN_1407665e0(lVar2 + 0x1e8,param_1);
      FUN_1407665e0(lVar2 + 0x1f8,param_1);
    }
  }
  return;
}



// FUNCTION 140e01c10 FUN_140e01c10 body=417 status=ok
// SIG undefined FUN_140e01c10(void)

void FUN_140e01c10(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  
  if ((((param_2 != 0) && (*(longlong *)(param_2 + 0x30) != 0)) && (*(int *)(param_2 + 0x708) == 1))
     && (*(longlong *)(*(longlong *)(param_2 + 0x30) + 0xc0) == param_2)) {
    FUN_140de5560();
    uVar8 = 0;
    if ((*(longlong *)(param_1 + 0xf8) != 0) &&
       (cVar5 = FUN_140bca8a0(*(undefined8 *)(param_1 + 0xf0)), cVar5 == '\0')) {
      lVar3 = *(longlong *)(param_1 + 0xf8);
      *(undefined1 *)(param_1 + 0x90) = 3;
      *(undefined1 *)(lVar3 + 0x88) = 1;
      plVar10 = *(longlong **)(lVar3 + 0x78);
      plVar1 = (longlong *)(lVar3 + 0x78);
      iVar7 = *(int *)(lVar3 + 0x80);
      uVar11 = (longlong)iVar7 & 0x1fffffffffffffff;
      if (plVar10 + iVar7 < plVar10) {
        uVar11 = uVar8;
      }
      uVar9 = uVar8;
      if (uVar11 != 0) {
        do {
          plVar4 = (longlong *)*plVar10;
          if (plVar4 != (longlong *)0x0) {
            *(undefined4 *)(plVar4 + 0x30) = 8;
            cVar5 = (**(code **)(*plVar4 + 0x290))(plVar4);
            if (cVar5 != '\0') {
              (**(code **)(*plVar4 + 0x2e0))(plVar4);
            }
          }
          plVar10 = plVar10 + 1;
          uVar9 = uVar9 + 1;
        } while (uVar9 != uVar11);
        iVar7 = *(int *)(lVar3 + 0x80);
      }
      uVar11 = uVar8;
      if (0 < iVar7) {
        do {
          iVar7 = (int)uVar8;
          if ((*(longlong **)(uVar11 + *plVar1) == (longlong *)0x0) ||
             (cVar5 = (**(code **)(**(longlong **)(uVar11 + *plVar1) + 0x290))(), cVar5 == '\0')) {
            uVar8 = (ulonglong)(iVar7 + 1);
            uVar11 = uVar11 + 8;
          }
          else {
            iVar2 = *(int *)(lVar3 + 0x80);
            iVar6 = (iVar2 - iVar7) + -1;
            if (0 < iVar6) {
              iVar6 = 1;
            }
            if (iVar6 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(*plVar1 + (longlong)iVar7 * 8),
                         (void *)(*plVar1 + (longlong)(iVar2 - iVar6) * 8),(longlong)iVar6 << 3);
              iVar2 = *(int *)(lVar3 + 0x80);
            }
            *(int *)(lVar3 + 0x80) = iVar2 + -1;
            TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
          }
        } while ((int)uVar8 < *(int *)(lVar3 + 0x80));
      }
    }
    *(undefined8 *)(param_1 + 0x100) = 0;
  }
  return;
}



// FUNCTION 140e01dc0 FUN_140e01dc0 body=510 status=ok
// SIG undefined FUN_140e01dc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e01dc0(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88 [8];
  undefined8 local_80;
  code *local_78;
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  if (param_2 != 0) {
    local_28 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
    if (((*(longlong *)(param_2 + 0x30) != 0) && (*(int *)(param_2 + 0x708) == 1)) &&
       (*(longlong *)(*(longlong *)(param_2 + 0x30) + 0xc0) == param_2)) {
      uVar1 = FUN_140bca8a0(*(undefined8 *)(param_1 + 0xf0));
      *(undefined1 *)(param_1 + 0xd8) = uVar1;
      local_b8 = 0;
      local_b0 = FUN_140e08770;
      uStack_a8 = 0;
      if (*(longlong *)(param_2 + 400) == 0) {
        uVar4 = *(undefined8 *)(param_2 + 0x3f8);
      }
      else {
        uVar4 = *(undefined8 *)(*(longlong *)(param_2 + 400) + 0x90);
      }
      plVar2 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar2 != (longlong *)0x0) {
        *plVar2 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar2 + 1,param_1);
        *(undefined4 *)(plVar2 + 2) = (undefined4)local_b0;
        *(undefined4 *)((longlong)plVar2 + 0x14) = local_b0._4_4_;
        *(undefined4 *)(plVar2 + 3) = uStack_a8;
        *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_a4;
        lVar3 = FDelegateHandle::GenerateNewID();
        plVar2[5] = lVar3;
        *plVar2 = (longlong)&PTR_FUN_143f77bd0;
      }
      local_98 = 0;
      local_90 = 0;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x30))(plVar2,&local_98);
      }
      FWeakObjectPtr::operator=(local_88,0);
      local_c0 = 0xbf800000;
      local_c8 = 0;
      local_80 = 0;
      local_48 = (longlong *)0x0;
      local_38 = 0;
      local_78 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar4,&local_b8,&local_98,0x40400000);
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
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_98);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x28))(plVar2,0);
        lVar3 = FMemory::Realloc(plVar2,0,0);
        if (lVar3 != 0) {
          FMemory::Free(lVar3);
        }
      }
    }
  }
  return;
}



// FUNCTION 140e01fc0 FUN_140e01fc0 body=124 status=ok
// SIG undefined FUN_140e01fc0(void)

void FUN_140e01fc0(longlong param_1)

{
  longlong local_28 [3];
  longlong local_10;
  
  local_28[0] = 0;
  local_28[1] = 0;
  local_28[2] = *(undefined8 *)(param_1 + 0x50);
  local_10 = *(longlong *)(param_1 + 0x58);
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  FUN_140de82c0(param_1 + 0x38,2,local_28 + 2,*(undefined1 *)(param_1 + 0x61),
                *(undefined1 *)(param_1 + 0x60),local_28);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
                    /* WARNING: Could not recover jumptable at 0x000140e02035. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0xf0))();
  return;
}



// FUNCTION 140e02060 FUN_140e02060 body=88 status=ok
// SIG undefined FUN_140e02060(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e02060(longlong param_1)

{
  char cVar1;
  
  if ((*(int *)(param_1 + 0x4d0) != 0) && (*(longlong **)(param_1 + 0x4c8) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x4c8) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x4d0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000140e020a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(longlong **)(param_1 + 0x4c8) + 0x40))();
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x000140e020ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(_DAT_00000000 + 0x40))();
      return;
    }
  }
  return;
}



// FUNCTION 140e020c0 FUN_140e020c0 body=253 status=ok
// SIG undefined FUN_140e020c0(void)

void FUN_140e020c0(longlong param_1)

{
  wchar_t **ppwVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  wchar_t *pwVar5;
  wchar_t *_Source;
  int iVar6;
  wchar_t *local_28;
  int local_20;
  undefined4 local_1c;
  
  ppwVar1 = (wchar_t **)(param_1 + 0x10);
  iVar4 = *(int *)(param_1 + 0x18);
  pwVar5 = (wchar_t *)0x0;
  iVar6 = 0;
  iVar2 = *(int *)(param_1 + 0x28) + -1;
  if (*(int *)(param_1 + 0x28) == 0) {
    iVar2 = iVar6;
  }
  if (iVar4 == 0) {
    _Source = L"";
    iVar3 = -1;
  }
  else {
    _Source = *ppwVar1;
    iVar3 = iVar4 + -1;
  }
  if (iVar4 == 0) {
    iVar3 = 0;
  }
  iVar2 = iVar3 - iVar2;
  if ((-1 < iVar2) && (iVar6 = iVar3, iVar2 < iVar3)) {
    iVar6 = iVar2;
  }
  local_28 = (wchar_t *)0x0;
  local_1c = 0;
  iVar4 = iVar6 + 1;
  if (iVar6 == 0) {
    iVar4 = 0;
  }
  local_20 = iVar4;
  if ((0 < iVar4) &&
     (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0), iVar4 = local_20,
     pwVar5 = local_28, 0 < local_20)) {
    wcsncpy(local_28,_Source,(longlong)iVar6);
    pwVar5[iVar6] = L'\0';
  }
  if (ppwVar1 != &local_28) {
    if (*ppwVar1 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    *ppwVar1 = pwVar5;
    *(int *)(param_1 + 0x18) = iVar4;
    *(undefined4 *)(param_1 + 0x1c) = local_1c;
    return;
  }
  if (pwVar5 != (wchar_t *)0x0) {
    FMemory::Free(pwVar5);
  }
  return;
}



// FUNCTION 140e021c0 FUN_140e021c0 body=155 status=ok
// SIG undefined FUN_140e021c0(void)

void FUN_140e021c0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  if ((*(longlong **)(param_1 + 0x38) != (longlong *)0x0) &&
     (lVar1 = **(longlong **)(param_1 + 0x38), lVar1 != 0)) {
    FUN_140e0b5d0(param_1,param_1 + 0xa0,lVar1);
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x140)) {
      do {
        lVar2 = *(longlong *)(param_1 + 0x138);
        if (*(longlong *)(param_1 + 0x138) == 0) {
          lVar2 = param_1 + 0xb8;
        }
        FUN_140e0b5d0(param_1,(longlong)iVar3 * 0x20 + lVar2 + 8,lVar1);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 0x140));
    }
  }
  return;
}



// FUNCTION 140e02260 FUN_140e02260 body=1500 status=ok
// SIG undefined FUN_140e02260(void)

void FUN_140e02260(longlong param_1)

{
  byte bVar1;
  ulonglong uVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  undefined2 *puVar14;
  undefined2 *puVar15;
  wchar_t *pwVar16;
  uint *puVar17;
  int iVar18;
  ulonglong local_res10;
  undefined8 local_res18;
  undefined2 *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  uint uStack_d0;
  int iStack_cc;
  undefined1 local_c8 [16];
  longlong *local_b8;
  undefined2 local_b0;
  longlong local_a8 [2];
  longlong *local_98;
  undefined8 uStack_90;
  uint *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 uStack_60;
  uint *local_58;
  undefined8 uStack_50;
  undefined1 local_48 [16];
  longlong *local_38;
  undefined2 local_30;
  
  iVar18 = 0;
  local_res10 = local_res10 & 0xffffffff00000000;
  uVar8 = UEnum::GetPrivateStaticClass();
  lVar9 = FUN_141799410(uVar8,0xffffffffffffffff,L"EClassRepNodeMapping",0);
  if (lVar9 != 0) {
    uVar8 = FUN_141672640();
    FOutputDevice::LogfImpl(uVar8,L"====================================");
    uVar8 = FUN_141672640();
    FOutputDevice::LogfImpl(uVar8,L"Oak Replication Routing Policies");
    uVar8 = FUN_141672640();
    FOutputDevice::LogfImpl(uVar8,L"====================================");
    local_b8 = (longlong *)(param_1 + 0x218);
    iVar13 = *(int *)(param_1 + 0x240);
    puStack_88 = (uint *)(param_1 + 0x228);
    local_e8._0_4_ = 0;
    local_e8._4_4_ = 1;
    local_d8._4_4_ = 0;
    uStack_d0 = 0;
    if (iVar13 != 0) {
      puVar17 = *(uint **)(param_1 + 0x238);
      if (*(uint **)(param_1 + 0x238) == (uint *)0x0) {
        puVar17 = puStack_88;
      }
      uVar7 = *puVar17;
      local_e8._0_4_ = iVar18;
      while (uVar7 == 0) {
        lVar9 = (longlong)(int)local_e8;
        uStack_d0 = uStack_d0 + 0x20;
        iVar12 = (int)local_e8 + 1;
        bVar4 = (int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_e8;
        local_e8._0_4_ = iVar12;
        if (bVar4) goto LAB_140e023b1;
        uVar7 = puVar17[lVar9 + 1];
      }
      local_e8._4_4_ = -uVar7 & uVar7;
      iVar12 = 0x1f;
      if (local_e8._4_4_ != 0) {
        for (; local_e8._4_4_ >> iVar12 == 0; iVar12 = iVar12 + -1) {
        }
      }
      if (local_e8._4_4_ == 0) {
        iVar12 = 0x20;
      }
      else {
        iVar12 = 0x1f - iVar12;
      }
      local_d8._4_4_ = (uStack_d0 - iVar12) + 0x1f;
      if (iVar13 < local_d8._4_4_) {
LAB_140e023b1:
        local_d8._4_4_ = iVar13;
      }
    }
    uStack_80 = CONCAT44(local_d8._4_4_,0xffffffff);
    auVar5._8_4_ = uStack_d0;
    auVar5._0_8_ = uStack_80;
    auVar5._12_4_ = iStack_cc;
    local_70._0_4_ = SUB84(local_b8,0);
    local_70._4_4_ = (undefined4)((ulonglong)local_b8 >> 0x20);
    uStack_90._0_4_ = (int)local_e8;
    uStack_90._4_4_ = local_e8._4_4_;
    local_b0 = 0;
    uStack_d0 = 0xffffffff;
    iStack_cc = local_d8._4_4_;
    uStack_e0._0_4_ = (int)local_e8;
    uStack_e0._4_4_ = local_e8._4_4_;
    uStack_78 = auVar5._8_8_;
    local_c8._8_4_ = (undefined4)local_70;
    local_c8._0_8_ = uStack_78;
    local_c8._12_4_ = local_70._4_4_;
    bVar4 = local_d8._4_4_ < *(int *)(param_1 + 0x240);
    local_e8 = local_b8;
    local_98 = local_b8;
    local_d8 = puStack_88;
    local_70 = local_b8;
    if (bVar4) {
      do {
        uVar2 = *(ulonglong *)(*local_e8 + (longlong)iStack_cc * 0x18);
        puVar10 = (undefined8 *)FUN_140e0b500(*local_e8 + 8 + (longlong)iStack_cc * 0x18,local_a8);
        if (*(int *)(puVar10 + 1) == 0) {
          puVar15 = &DAT_143f3eda8;
        }
        else {
          puVar15 = (undefined2 *)*puVar10;
        }
        local_res10 = uVar2;
        lVar9 = FWeakObjectPtr::Get(&local_res10);
        if (lVar9 == 0) {
          local_f8 = (undefined2 *)0x0;
          local_f0 = 5;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
          FGenericPlatformString::Memcpy(local_f8,&DAT_143f3edc8,10);
        }
        else {
          local_res18 = *(undefined8 *)(lVar9 + 0x18);
          FName::ToString(&local_res18,&local_f8);
        }
        puVar14 = &DAT_143f3eda8;
        if ((int)local_f0 != 0) {
          puVar14 = local_f8;
        }
        uVar8 = FUN_141672640();
        FOutputDevice::LogfImpl(uVar8,L"%-40s --> %s",puVar14,puVar15);
        if (local_f8 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        if (local_a8[0] != 0) {
          FMemory::Free();
        }
        uStack_d0 = uStack_d0 & ~uStack_e0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_e0);
      } while (iStack_cc < (int)local_d8[6]);
      if (((char)local_b0 != '\0') && (local_b0._1_1_ != '\0')) {
        FUN_140de5d50(local_b8,(int)local_b8[1] - *(int *)((longlong)local_b8 + 0x34),1);
      }
    }
    local_98 = (longlong *)(param_1 + 0x268);
    iVar13 = *(int *)(param_1 + 0x290);
    uStack_e0 = (uint *)(param_1 + 0x278);
    local_e8 = (longlong *)0x100000000;
    local_d8._4_4_ = 0;
    uStack_d0 = 0;
    if (iVar13 != 0) {
      puVar17 = *(uint **)(param_1 + 0x288);
      if (*(uint **)(param_1 + 0x288) == (uint *)0x0) {
        puVar17 = uStack_e0;
      }
      uVar7 = *puVar17;
      iVar12 = iVar18;
      while (uVar7 == 0) {
        uStack_d0 = uStack_d0 + 0x20;
        local_e8._4_4_ = (uint)((ulonglong)local_e8 >> 0x20);
        local_e8 = (longlong *)CONCAT44(local_e8._4_4_,iVar12 + 1);
        if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar12) goto LAB_140e0260f;
        uVar7 = puVar17[(longlong)iVar12 + 1];
        iVar12 = iVar12 + 1;
      }
      uVar7 = -uVar7 & uVar7;
      iVar12 = 0x1f;
      if (uVar7 != 0) {
        for (; uVar7 >> iVar12 == 0; iVar12 = iVar12 + -1) {
        }
      }
      local_e8 = (longlong *)CONCAT44(uVar7,(int)local_e8);
      if (uVar7 == 0) {
        iVar12 = 0x20;
      }
      else {
        iVar12 = 0x1f - iVar12;
      }
      local_d8._4_4_ = (uStack_d0 - iVar12) + 0x1f;
      if (iVar13 < local_d8._4_4_) {
LAB_140e0260f:
        local_d8._4_4_ = iVar13;
      }
    }
    local_d8._0_4_ = 0xffffffff;
    uStack_80 = CONCAT44(local_d8._4_4_,0xffffffff);
    auVar6._8_4_ = uStack_d0;
    auVar6._0_8_ = uStack_80;
    auVar6._12_4_ = iStack_cc;
    local_70._0_4_ = SUB84(local_98,0);
    local_70._4_4_ = (undefined4)((ulonglong)local_98 >> 0x20);
    uStack_78 = auVar6._8_8_;
    uStack_90 = (longlong)local_e8;
    local_30 = 0;
    uStack_60 = (longlong)local_e8;
    local_48._8_4_ = (undefined4)local_70;
    local_48._0_8_ = uStack_78;
    local_48._12_4_ = local_70._4_4_;
    iVar13 = local_d8._4_4_;
    puStack_88 = uStack_e0;
    local_68 = local_98;
    local_58 = uStack_e0;
    uStack_50 = uStack_80;
    local_38 = local_98;
    local_70 = local_98;
    if (local_d8._4_4_ < *(int *)(param_1 + 0x290)) {
      do {
        lVar3 = *(longlong *)(*local_68 + (longlong)iVar13 * 0x18);
        lVar9 = *local_68 + (longlong)iVar13 * 0x18;
        uVar8 = UEnum::GetPrivateStaticClass();
        lVar11 = FUN_141799410(uVar8,0xffffffffffffffff,L"EClassRepNodeMapping");
        if (lVar11 == 0) {
          pwVar16 = L"Not Found!";
        }
        else {
          iVar18 = 1;
          puVar10 = (undefined8 *)
                    UEnum::GetNameStringByValue(lVar11,&local_e8,*(undefined4 *)(lVar9 + 8));
          if (*(int *)(puVar10 + 1) == 0) {
            pwVar16 = L"";
          }
          else {
            pwVar16 = (wchar_t *)*puVar10;
          }
        }
        bVar1 = *(byte *)(lVar9 + 0xc);
        FString::PrintfImpl(local_a8,
                            L"%s, bAlwaysReplicate %d, bOnlyReplicateToOwner %d, bNetUseOwnerRelevancy %d"
                            ,pwVar16,bVar1 & 1,bVar1 >> 1 & 1,bVar1 >> 2 & 1);
        if ((iVar18 != 0) && (iVar18 = 0, local_e8 != (longlong *)0x0)) {
          FMemory::Free();
        }
        if (lVar3 == 0) {
          local_f8 = (undefined2 *)0x0;
          local_f0 = 5;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
          FGenericPlatformString::Memcpy(local_f8,&DAT_143f3edc8,10);
        }
        else {
          local_res10 = *(ulonglong *)(lVar3 + 0x18);
          FName::ToString(&local_res10,&local_f8);
        }
        puVar15 = &DAT_143f3eda8;
        if ((int)local_f0 != 0) {
          puVar15 = local_f8;
        }
        uVar8 = FUN_141672640();
        FOutputDevice::LogfImpl(uVar8,L"%-40s --> %s",puVar15);
        if (local_f8 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        if (local_a8[0] != 0) {
          FMemory::Free();
        }
        uStack_50 = CONCAT44(uStack_50._4_4_,(uint)uStack_50 & ~uStack_60._4_4_);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_60);
        iVar13 = uStack_50._4_4_;
      } while (uStack_50._4_4_ < (int)local_58[6]);
      if (((char)local_30 != '\0') && (local_30._1_1_ != '\0')) {
        TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
        ::ConditionalRehash(local_38,(int)local_38[1] - *(int *)((longlong)local_38 + 0x34),1);
      }
    }
  }
  return;
}



// FUNCTION 140e02840 FUN_140e02840 body=161 status=ok
// SIG undefined FUN_140e02840(void)

void FUN_140e02840(longlong param_1)

{
  void *_Dst;
  int iVar1;
  void *_Src;
  int iVar2;
  int iVar3;
  
  _Src = *(void **)(param_1 + 0x20);
  iVar3 = *(int *)(param_1 + 0x28) + -1;
  if (*(int *)(param_1 + 0x28) == 0) {
    iVar3 = 0;
  }
  if (iVar3 != 0) {
    iVar1 = *(int *)(param_1 + 0x18);
    iVar2 = (uint)(iVar1 == 0) + iVar3 + iVar1;
    *(int *)(param_1 + 0x18) = iVar2;
    if (*(int *)(param_1 + 0x1c) < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow((longlong *)(param_1 + 0x10),iVar1);
    }
    _Dst = (void *)(*(longlong *)(param_1 + 0x10) + ((longlong)iVar1 - (ulonglong)(iVar1 != 0)) * 2)
    ;
    _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar3 * 2);
    *(undefined2 *)((longlong)iVar3 * 2 + (longlong)_Dst) = 0;
  }
  return;
}



// FUNCTION 140e028f0 FUN_140e028f0 body=78 status=ok
// SIG undefined FUN_140e028f0(void)

longlong FUN_140e028f0(longlong param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x218))(param_2,*(undefined8 *)(param_1 + 8));
  if (cVar1 != '\0') {
    FUN_140de5ab0(param_2,*(int *)(param_1 + 0x18) + param_3);
  }
  return param_3;
}



// FUNCTION 140e02940 FUN_140e02940 body=82 status=ok
// SIG undefined FUN_140e02940(void)

longlong FUN_140e02940(longlong param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x218))(param_2,*(undefined8 *)(param_1 + 8));
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x210))(param_2,*(int *)(param_1 + 0x18) + param_3);
  }
  return param_3;
}



// FUNCTION 140e029a0 FUN_140e029a0 body=102 status=ok
// SIG undefined FUN_140e029a0(void)

longlong FUN_140e029a0(longlong param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = (**(code **)(*param_2 + 0x218))(param_2,*(undefined8 *)(param_1 + 8));
  if (cVar1 != '\0') {
    lVar2 = *(int *)(param_1 + 0x18) + param_3;
    (**(code **)(*param_2 + 0x38))(param_2);
    FUN_140de5980(param_2,lVar2);
    (**(code **)(*param_2 + 0x48))(param_2,lVar2);
  }
  return param_3;
}



// FUNCTION 140e02a10 FUN_140e02a10 body=78 status=ok
// SIG undefined FUN_140e02a10(void)

longlong FUN_140e02a10(longlong param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x218))(param_2,*(undefined8 *)(param_1 + 8));
  if (cVar1 != '\0') {
    FUN_140dd81f0(param_2,*(int *)(param_1 + 0x18) + param_3);
  }
  return param_3;
}



// FUNCTION 140e02a60 FUN_140e02a60 body=78 status=ok
// SIG undefined FUN_140e02a60(void)

longlong FUN_140e02a60(longlong param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x218))(param_2,*(undefined8 *)(param_1 + 8));
  if (cVar1 != '\0') {
    FUN_140dd8310(param_2,*(int *)(param_1 + 0x18) + param_3);
  }
  return param_3;
}



// FUNCTION 140e02ab0 FUN_140e02ab0 body=456 status=ok
// SIG undefined FUN_140e02ab0(void)

void FUN_140e02ab0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  int local_res8 [2];
  undefined8 local_res10;
  longlong local_58;
  undefined8 *local_50;
  longlong local_48 [2];
  
  uVar3 = (**(code **)(*(longlong *)*param_2 + 0x28))((longlong *)*param_2,&local_58);
  plVar1 = (longlong *)(param_1 + 0x48);
  TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
  ::FindId(plVar1,local_res8,uVar3);
  lVar4 = 0;
  if (local_res8[0] != -1) {
    lVar4 = (longlong)local_res8[0] * 0x20 + *plVar1;
  }
  lVar6 = lVar4 + 0x10;
  if (lVar4 == 0) {
    lVar6 = 0;
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  if (lVar6 == 0) {
    lVar4 = FWeakObjectPtr::Get(param_1 + 0x98);
    lVar4 = *(longlong *)(lVar4 + 0x478);
    plVar8 = (longlong *)(lVar4 + 0x1e0);
    plVar5 = (longlong *)FMemory::Realloc(0,0x30,0);
    if (plVar5 != (longlong *)0x0) {
      plVar5[1] = param_1;
      *plVar5 = (longlong)&DAT_143f3ed00;
      plVar5[2] = (longlong)FUN_140dfbfe0;
      lVar6 = FDelegateHandle::GenerateNewID();
      plVar5[4] = lVar6;
      *plVar5 = (longlong)&PTR_GetPoolName_143f3ed48;
    }
    local_res10 = 0;
    if (plVar5 != (longlong *)0x0) {
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar8,1);
      puVar7 = (undefined8 *)(**(code **)(*plVar5 + 0x20))(plVar5,local_res8);
      iVar2 = *(int *)(lVar4 + 0x1e8);
      uVar3 = *puVar7;
      *(int *)(lVar4 + 0x1e8) = iVar2 + 1;
      if (*(int *)(lVar4 + 0x1ec) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8,iVar2);
      }
      puVar7 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar8);
      *puVar7 = plVar5;
      *(undefined4 *)(puVar7 + 1) = 3;
      local_res10 = uVar3;
    }
    lVar4 = FWeakObjectPtr::Get(param_1 + 0x98);
    FUN_140d938f0(*(undefined8 *)(lVar4 + 0x478),param_2);
    local_58 = (**(code **)(*(longlong *)*param_2 + 0x28))((longlong *)*param_2,local_48);
    local_50 = &local_res10;
    FUN_140dd96a0(plVar1,local_res8,&local_58,0);
    if (local_48[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140e02c80 FUN_140e02c80 body=723 status=ok
// SIG undefined FUN_140e02c80(void)

void FUN_140e02c80(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int local_res18 [2];
  undefined1 local_res20 [8];
  longlong local_e8 [4];
  undefined **local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  longlong local_b0;
  undefined8 local_a8;
  longlong local_a0;
  longlong *local_98;
  int *local_90;
  undefined ***local_88;
  undefined1 local_80 [8];
  longlong *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  longlong local_60 [2];
  undefined1 local_50 [24];
  
  lVar6 = FUN_142b45e90();
  FUN_142b4a990(*(undefined8 *)(lVar6 + 0x18),&local_a0,param_2);
  if (local_a0 == 0) {
    TBaseMulticastDelegate<void,FPhysScene_*,enum_EPhysicsSceneType>::Broadcast
              (param_1 + 0x10,param_2,5);
    goto LAB_140e02ef9;
  }
  plVar7 = (longlong *)FUN_142b49cd0(local_a0,local_80,&DAT_146b2ada8);
  plVar4 = (longlong *)plVar7[1];
  lVar6 = *plVar7;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (local_78 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_78 + 1;
    lVar5 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar1 = (int *)((longlong)local_78 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_78 + 8))(local_78,1);
      }
    }
  }
  if (lVar6 == 0) {
    uVar8 = 7;
LAB_140e02e9c:
    TBaseMulticastDelegate<void,FPhysScene_*,enum_EPhysicsSceneType>::Broadcast
              (param_1 + 0x10,param_2,uVar8);
  }
  else {
    local_e8[2] = 0;
    local_e8[3] = 0;
    local_e8[0] = 0;
    local_e8[1] = 0;
    local_70 = 0;
    uStack_68 = 0;
    uVar8 = FUN_140531690(local_50,param_1,FUN_140dfe590);
    uVar9 = FUN_142b46360(local_a0,local_60);
    local_res18[0] = FUN_142b05690(lVar6,uVar9,uVar8,local_e8,local_e8 + 2,&local_70);
    if (local_60[0] != 0) {
      FMemory::Free();
    }
    if (local_e8[0] != 0) {
      FMemory::Free();
    }
    if (local_e8[2] != 0) {
      FMemory::Free();
    }
    if (local_res18[0] < 1) {
      uVar8 = 9;
      goto LAB_140e02e9c;
    }
    local_c0 = *param_2;
    local_b8 = (longlong *)param_2[1];
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_b8 + 1) = (int)local_b8[1] + 1;
      UNLOCK();
    }
    local_b0 = 0;
    local_a8 = 0;
    local_90 = local_res18;
    local_c8 = &PTR_FUN_143f740c8;
    local_88 = &local_c8;
    FUN_140dd9910(param_1 + 0x28,local_res20,&local_90,0);
    local_c8 = &PTR_FUN_143f740c8;
    if (local_b0 != 0) {
      FMemory::Free();
    }
    plVar7 = local_b8;
    local_c8 = &PTR_FUN_143f73d18;
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_b8 + 1;
      lVar6 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_b8)(local_b8);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar4 + 1;
    lVar6 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
LAB_140e02ef9:
  if (local_98 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_98 + 1;
    lVar6 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_98)(local_98);
      LOCK();
      piVar1 = (int *)((longlong)local_98 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_98 + 8))(local_98,1);
      }
    }
  }
  return;
}



// FUNCTION 140e02f60 FUN_140e02f60 body=36 status=ok
// SIG undefined FUN_140e02f60(void)

longlong FUN_140e02f60(longlong param_1,undefined8 param_2,longlong param_3)

{
  FUN_140de5ab0(param_2,*(int *)(param_1 + 0x18) + param_3);
  return param_3;
}



// FUNCTION 140e02f90 FUN_140e02f90 body=40 status=ok
// SIG undefined FUN_140e02f90(void)

longlong FUN_140e02f90(longlong param_1,longlong *param_2,longlong param_3)

{
  (**(code **)(*param_2 + 0x210))(param_2,*(int *)(param_1 + 0x18) + param_3);
  return param_3;
}



// FUNCTION 140e02fc0 FUN_140e02fc0 body=79 status=ok
// SIG undefined FUN_140e02fc0(void)

longlong FUN_140e02fc0(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  
  lVar1 = *(int *)(param_1 + 0x18) + param_3;
  (**(code **)(*param_2 + 0x38))(param_2);
  FUN_140de5980(param_2,lVar1);
  (**(code **)(*param_2 + 0x48))(param_2,lVar1);
  return param_3;
}



// FUNCTION 140e03010 FUN_140e03010 body=36 status=ok
// SIG undefined FUN_140e03010(void)

longlong FUN_140e03010(longlong param_1,undefined8 param_2,longlong param_3)

{
  FUN_140dd81f0(param_2,*(int *)(param_1 + 0x18) + param_3);
  return param_3;
}



// FUNCTION 140e03040 FUN_140e03040 body=36 status=ok
// SIG undefined FUN_140e03040(void)

longlong FUN_140e03040(longlong param_1,undefined8 param_2,longlong param_3)

{
  FUN_140dd8310(param_2,*(int *)(param_1 + 0x18) + param_3);
  return param_3;
}



// FUNCTION 140e03070 FUN_140e03070 body=1222 status=ok
// SIG undefined FUN_140e03070(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e03070(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  void **ppvVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined1 auStack_1a8 [32];
  longlong local_188;
  longlong local_180;
  void *local_178;
  undefined8 local_170;
  void *local_168;
  undefined8 local_160;
  longlong local_158;
  undefined8 local_150;
  longlong local_148;
  undefined8 local_140;
  undefined4 *local_138;
  ulonglong *puStack_130;
  undefined8 local_128;
  longlong local_120;
  longlong local_118 [2];
  undefined1 local_108 [16];
  undefined1 local_f8 [8];
  longlong *local_f0;
  undefined1 local_e0 [8];
  longlong *local_d8;
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 local_b0 [8];
  longlong *local_a8;
  undefined1 local_98 [16];
  undefined1 local_88 [24];
  undefined4 local_70 [4];
  undefined1 local_60 [8];
  longlong *local_58;
  char local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  local_188 = 0;
  local_180 = 0;
  local_178 = (void *)0x0;
  local_170 = 0;
  local_168 = (void *)0x0;
  local_160 = 0;
  local_158 = 0;
  local_150 = 0;
  plVar6 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x28))((longlong *)*param_2,local_118);
  if (&local_188 != plVar6) {
    if (local_188 != 0) {
      FMemory::Free();
    }
    local_188 = *plVar6;
    *plVar6 = 0;
    local_180 = plVar6[1];
    plVar6[1] = 0;
  }
  if (local_118[0] != 0) {
    FMemory::Free();
  }
  uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_e0,L"Friend Invitation",L"Overlay",L"FriendInviteTitle");
  ppvVar8 = (void **)FText::ToString(uVar7);
  if (&local_178 != ppvVar8) {
    iVar3 = *(int *)(ppvVar8 + 1);
    pvVar4 = *ppvVar8;
    local_170 = CONCAT44(local_170._4_4_,iVar3);
    if ((iVar3 == 0) && (local_170._4_4_ == 0)) {
      local_170 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_178,iVar3);
      _guard_xfg_dispatch_icall_nop(local_178,pvVar4,(longlong)iVar3 * 2);
    }
  }
  if (local_d8 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_d8 + 1;
    lVar9 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_d8)(local_d8);
      LOCK();
      piVar1 = (int *)((longlong)local_d8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_d8 + 8))(local_d8,1);
      }
    }
  }
  lVar9 = FText::FromString(local_88,param_3);
  uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_b0,L"{0} has invited you to be a SHiFT friend.",L"Overlay",
                     L"FriendInviteDescription");
  puVar10 = (undefined8 *)FTextFormat::FTextFormat(local_98,uVar7);
  local_70[0] = 4;
  FText::FText(local_60,lVar9);
  local_128 = *puVar10;
  local_138 = local_70;
  puStack_130 = &local_40;
  local_120 = puVar10[1];
  local_48 = '\x01';
  if (local_120 != 0) {
    LOCK();
    *(int *)(local_120 + 8) = *(int *)(local_120 + 8) + 1;
    UNLOCK();
  }
  uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
          TArray<FFormatArgumentValue,FDefaultAllocator>(local_108,&local_138);
  uVar7 = FText::Format(local_c8,&local_128,uVar7);
  FText::FText(local_f8,uVar7);
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_c0 + 1;
    lVar5 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_c0)(local_c0);
      LOCK();
      piVar1 = (int *)((longlong)local_c0 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_c0 + 8))(local_c0,1);
      }
    }
  }
  TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
            (local_108);
  if (local_48 != '\0') {
    local_48 = '\0';
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_58 + 1;
      lVar5 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar1 = (int *)((longlong)local_58 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_58 + 8))(local_58,1);
        }
      }
    }
  }
  plVar6 = (longlong *)puVar10[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar6 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  plVar6 = *(longlong **)(lVar9 + 8);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar6 + 1;
    lVar9 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  ppvVar8 = (void **)FText::ToString(local_f8);
  if (&local_168 != ppvVar8) {
    iVar3 = *(int *)(ppvVar8 + 1);
    pvVar4 = *ppvVar8;
    local_160 = CONCAT44(local_160._4_4_,iVar3);
    if ((iVar3 == 0) && (local_160._4_4_ == 0)) {
      local_160 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_168,iVar3);
      _guard_xfg_dispatch_icall_nop(local_168,pvVar4,(longlong)iVar3 * 2);
    }
  }
  if (local_f0 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_f0 + 1;
    lVar9 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_f0)(local_f0);
      LOCK();
      piVar1 = (int *)((longlong)local_f0 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_f0 + 8))(local_f0,1);
      }
    }
  }
  if (local_a8 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_a8 + 1;
    lVar9 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_a8)(local_a8);
      LOCK();
      piVar1 = (int *)((longlong)local_a8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_a8 + 8))(local_a8,1);
      }
    }
  }
  local_148 = 0;
  local_140 = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,0);
  lVar9 = local_148;
  FGenericPlatformString::Memcpy(local_148,L"friend",0xe);
  if (local_158 != 0) {
    FMemory::Free();
  }
  local_158 = lVar9;
  local_150 = local_140;
  plVar6 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))();
  plVar6 = (longlong *)(**(code **)(*plVar6 + 0x198))(plVar6);
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x50))(plVar6,"Receive_Invitation",1);
    (**(code **)(*plVar6 + 0x28))(plVar6);
    FUN_140de5980(plVar6,&local_188);
    (**(code **)(*plVar6 + 0x48))(plVar6,&local_188);
    (**(code **)(*plVar6 + 0x58))(plVar6);
  }
  if (local_158 != 0) {
    FMemory::Free();
  }
  if (local_168 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_178 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_188 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140e03540 FUN_140e03540 body=2499 status=ok
// SIG undefined FUN_140e03540(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e03540(longlong *param_1,void **param_2,undefined8 *param_3,undefined8 param_4)

{
  float *pfVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  uint uVar5;
  void *pvVar6;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  short *psVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  void **ppvVar14;
  undefined8 uVar15;
  float *pfVar16;
  longlong *plVar17;
  int iVar18;
  longlong lVar19;
  longlong *plVar20;
  int *piVar21;
  undefined2 *puVar22;
  undefined4 uVar23;
  undefined1 auStack_718 [32];
  undefined8 *local_6f8;
  undefined8 *local_6f0;
  code **local_6e8;
  void *local_6d8;
  int local_6d0;
  undefined4 local_6cc;
  undefined8 local_6c8;
  undefined1 local_6c0;
  void *local_6b8;
  ulonglong local_6b0;
  undefined8 uStack_6a8;
  undefined2 *local_6a0;
  undefined8 local_698;
  undefined8 local_690;
  undefined4 local_688;
  undefined8 local_684;
  undefined4 local_67c;
  undefined8 local_678;
  undefined8 local_670;
  undefined2 local_668;
  undefined8 local_660;
  undefined2 local_658;
  undefined1 local_648 [8];
  longlong *local_640;
  longlong local_630 [2];
  longlong local_620 [2];
  int local_610;
  undefined1 local_608 [8];
  longlong local_600 [2];
  longlong local_5f0 [2];
  undefined1 local_5e0 [12];
  undefined1 local_5d4 [12];
  undefined1 local_5c8 [8];
  longlong *local_5c0;
  undefined1 local_5b0 [64];
  undefined1 local_570 [72];
  code *local_528 [2];
  longlong local_518 [4];
  longlong *local_4f8;
  int local_4e8;
  code *local_4d8 [2];
  longlong local_4c8 [4];
  longlong *local_4a8;
  int local_498;
  undefined1 local_488 [520];
  longlong local_280;
  undefined8 local_278;
  undefined1 local_270 [520];
  longlong local_68;
  undefined8 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_718;
  if (*(char *)((longlong)param_1 + 0x4ec) != '\0') {
    return;
  }
  iVar18 = 0;
  if ((int)param_1[0x8a] < 1) {
    return;
  }
  piVar21 = (int *)(param_1[0x89] + 0x30);
  do {
    if (*(int *)(param_3 + 1) == 0) {
      puVar22 = &DAT_143f3eda8;
    }
    else {
      puVar22 = (undefined2 *)*param_3;
    }
    if (piVar21[-4] == 0) {
      psVar10 = &DAT_143f3eda8;
    }
    else {
      psVar10 = *(short **)(piVar21 + -6);
    }
    lVar19 = (longlong)puVar22 - (longlong)psVar10;
    do {
      sVar3 = *psVar10;
      sVar4 = *(short *)((longlong)psVar10 + lVar19);
      if (sVar3 != sVar4) break;
      psVar10 = psVar10 + 1;
    } while (sVar4 != 0);
    if (sVar3 == sVar4) {
LAB_140e03637:
      if (iVar18 < 0) {
        return;
      }
      lVar19 = 0;
      if (param_1[0x31] != 0) {
        lVar19 = *(longlong *)(param_1[0x31] + 0xf8);
      }
      local_678 = param_4;
      if ((int)param_1[0x9a] < 1) {
        if ((lVar19 == 0) || (cVar9 = FUN_140de4fb0(lVar19,param_1), cVar9 == '\0')) {
          if ((int)param_1[0x9a] < 1) {
            return;
          }
        }
        else {
          (**(code **)(*param_1 + 0x2e8))(param_1,1);
          FUN_140de7bc0(lVar19,param_1,1);
          *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)((longlong)param_1 + 0x424);
        }
      }
      lVar19 = (longlong)iVar18 * 0x40 + param_1[0x89];
      FText::FText(local_648,lVar19);
      FString::FString(local_630,lVar19 + 0x18);
      FString::FString(local_620,lVar19 + 0x28);
      local_610 = *(int *)(lVar19 + 0x38);
      if (param_1[0x31] != 0) {
        piVar21 = (int *)(param_1[0x31] + 0x50);
        *piVar21 = *piVar21 + local_610;
      }
      FString::operator=(param_1 + 0xaa,param_2);
      plVar17 = param_1 + 0xa8;
      iVar18 = FUN_140dea730(plVar17,param_2);
      if (iVar18 < 0) {
        local_6c0 = (int)param_1[0x9a] == 0;
        local_6b8 = (void *)0x0;
        local_6b0 = 0;
        uStack_6a8 = 0;
        if (&local_6b8 != param_2) {
          uVar5 = *(uint *)(param_2 + 1);
          pvVar6 = *param_2;
          local_6b0 = (ulonglong)uVar5;
          if (uVar5 != 0) {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_6b8,uVar5,0);
            _guard_xfg_dispatch_icall_nop(local_6b8,pvVar6,(longlong)(int)uVar5 * 2);
          }
        }
        uVar8 = local_6c0;
        iVar18 = (int)param_1[0xa9];
        uStack_6a8 = CONCAT44(local_610,(int)uStack_6a8 + 1);
        *(int *)(param_1 + 0xa9) = iVar18 + 1;
        if (*(int *)((longlong)param_1 + 0x54c) < iVar18 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
          ::ResizeGrow(plVar17,iVar18);
        }
        lVar19 = *plVar17;
        lVar11 = (longlong)iVar18 * 0x20;
        *(undefined1 *)(lVar11 + lVar19) = uVar8;
        FString::FString(lVar19 + 8 + lVar11,&local_6b8);
        *(int *)(lVar11 + 0x18 + lVar19) = (int)uStack_6a8;
        *(undefined4 *)(lVar11 + 0x1c + lVar19) = uStack_6a8._4_4_;
        if (local_6b8 != (void *)0x0) {
          FMemory::Free();
        }
      }
      else {
        piVar21 = (int *)((longlong)iVar18 * 0x20 + 0x18 + *plVar17);
        *piVar21 = *piVar21 + 1;
        piVar21 = (int *)((longlong)iVar18 * 0x20 + 0x1c + *plVar17);
        *piVar21 = *piVar21 + local_610;
      }
      iVar18 = 0;
      *(int *)((longlong)param_1 + 0x4d4) = *(int *)((longlong)param_1 + 0x4d4) + local_610;
      if (0 < (int)param_1[0xa7]) {
        pfVar16 = (float *)param_1[0xa6];
        pfVar1 = pfVar16 + (int)param_1[0xa7];
        for (; (pfVar16 != pfVar1 && ((int)*pfVar16 <= *(int *)((longlong)param_1 + 0x4d4)));
            pfVar16 = pfVar16 + 1) {
          iVar18 = iVar18 + 1;
        }
        lVar19 = FUN_142dcfb00(param_1[0x31]);
        if (lVar19 != 0) {
          lVar11 = FUN_14145f370();
          if ((*(int *)(*(longlong *)(lVar19 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar19 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
            bVar7 = false;
          }
          else {
            bVar7 = true;
          }
          if ((bVar7) && (*(int *)(lVar19 + 0x19c0) != iVar18)) {
            FUN_141461010(lVar19,iVar18);
            uVar12 = FDateTime::UtcNow(local_608);
            lVar19 = FDateTime::ToUnixTimestamp(uVar12);
            param_1[0x9c] = lVar19;
            if ((iVar18 < 0) || ((int)param_1[0x88] <= iVar18)) {
              bVar7 = false;
            }
            else {
              bVar7 = true;
            }
            if (bVar7) {
              if ((int)param_1[0x88] < 1) {
                uVar23 = *(undefined4 *)((longlong)param_1 + 0x42c);
              }
              else {
                uVar23 = *(undefined4 *)((longlong)iVar18 * 0x40 + 0x38 + param_1[0x87]);
              }
              *(undefined4 *)((longlong)param_1 + 0x4dc) = uVar23;
            }
          }
        }
      }
      *(undefined4 *)(param_1 + 0x9b) = *(undefined4 *)((longlong)param_1 + 0x4dc);
      if ((((int)param_1[0x9a] < 1) || (param_1[0x31] == 0)) ||
         (cVar9 = FText::IsEmpty(param_1 + 0x32), cVar9 != '\0')) goto LAB_140e03e54;
      puVar13 = (undefined8 *)FText::ToString(param_1 + 0x32);
      local_6d8 = (void *)0x0;
      local_6d0 = *(int *)(puVar13 + 1);
      lVar19 = (longlong)local_6d0;
      pvVar6 = (void *)*puVar13;
      if (local_6d0 == 0) {
        local_6cc = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_6d8,local_6d0,0);
        _guard_xfg_dispatch_icall_nop(local_6d8,pvVar6,lVar19 * 2);
      }
      if ((int)param_1[0xab] == 0) {
        puVar22 = &DAT_143f3eda8;
      }
      else {
        puVar22 = (undefined2 *)param_1[0xaa];
      }
      local_6f8 = (undefined8 *)CONCAT44(local_6f8._4_4_,1);
      ppvVar14 = (void **)FString::Replace(&local_6d8,local_600,L"$NAME$",puVar22);
      if (&local_6d8 != ppvVar14) {
        if (local_6d8 != (void *)0x0) {
          FMemory::Free();
        }
        local_6d8 = *ppvVar14;
        *ppvVar14 = (void *)0x0;
        local_6d0 = *(int *)(ppvVar14 + 1);
        local_6cc = *(undefined4 *)((longlong)ppvVar14 + 0xc);
        ppvVar14[1] = (void *)0x0;
      }
      if (local_600[0] != 0) {
        FMemory::Free();
      }
      local_6a0 = (undefined2 *)0x0;
      local_698 = 0;
      FString::AppendInt(&local_6a0,local_610);
      local_6f8 = (undefined8 *)CONCAT44(local_6f8._4_4_,1);
      puVar22 = &DAT_143f3eda8;
      if ((int)local_698 != 0) {
        puVar22 = local_6a0;
      }
      ppvVar14 = (void **)FString::Replace(&local_6d8,local_5f0,L"$VALUE$",puVar22);
      if (&local_6d8 != ppvVar14) {
        if (local_6d8 != (void *)0x0) {
          FMemory::Free();
        }
        local_6d8 = *ppvVar14;
        *ppvVar14 = (void *)0x0;
        local_6d0 = *(int *)(ppvVar14 + 1);
        local_6cc = *(undefined4 *)((longlong)ppvVar14 + 0xc);
        ppvVar14[1] = (void *)0x0;
      }
      if (local_5f0[0] != 0) {
        FMemory::Free();
      }
      if (local_6a0 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      uVar12 = FText::FromString(local_5c8,&local_6d8);
      local_6f8 = (undefined8 *)0x0;
      FUN_140de6a50(param_1[0x31],param_1 + 10,uVar12,0x40a00000);
      if (local_5c0 != (longlong *)0x0) {
        LOCK();
        plVar17 = local_5c0 + 1;
        lVar19 = *plVar17;
        *(int *)plVar17 = (int)*plVar17 + -1;
        UNLOCK();
        if ((int)lVar19 == 1) {
          (**(code **)*local_5c0)(local_5c0);
          LOCK();
          piVar21 = (int *)((longlong)local_5c0 + 0xc);
          iVar2 = *piVar21;
          *piVar21 = *piVar21 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_5c0 + 8))(local_5c0,1);
          }
        }
      }
      plVar17 = param_1 + 0x10;
      lVar19 = FWeakObjectPtr::Get(plVar17);
      if (lVar19 == 0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        if ((DAT_1464b56f4 != (int)param_1[0x11]) && (local_6c8 = 0, param_1[0x12] != 0)) {
          lVar19 = FUN_141796df0();
          FWeakObjectPtr::operator=(plVar17,lVar19);
          if ((lVar19 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            *(int *)(param_1 + 0x11) = DAT_1464b56f4;
          }
          lVar19 = FWeakObjectPtr::Get(plVar17);
          if (lVar19 != 0) goto LAB_140e03ba8;
        }
      }
      else {
LAB_140e03ba8:
        lVar11 = FUN_140600840();
        if ((*(int *)(*(longlong *)(lVar19 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar19 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        if (bVar7) {
          local_6c8 = 0;
          if ((param_1[0x3a] == 0) ||
             (((*(int *)((longlong)param_1 + 500) == 0 && (int)param_1[0x3e] == 0) &&
              *(int *)((longlong)param_1 + 0x1ec) == 0) && (int)param_1[0x3d] == 0)) {
            bVar7 = false;
          }
          else {
            bVar7 = true;
          }
          if (bVar7) {
            if (iVar18 == 5) {
              local_6c8 = 0;
              if ((param_1[0x42] == 0) ||
                 (((*(int *)((longlong)param_1 + 0x234) == 0 && (int)param_1[0x46] == 0) &&
                  *(int *)((longlong)param_1 + 0x22c) == 0) && (int)param_1[0x45] == 0)) {
                bVar7 = false;
              }
              else {
                bVar7 = true;
              }
              if (!bVar7) goto LAB_140e03d57;
              local_4f8 = (longlong *)0x0;
              local_528[0] = AK::MemoryMgr::StartProfileThreadUsage;
              local_4e8 = 0;
              local_690 = 0xffffffff00000000;
              local_670 = 0;
              local_668 = 0;
              local_688 = 0;
              local_488[0] = 0;
              local_280 = 0;
              local_278 = 0;
              uVar12 = FUN_1405e1510(local_5b0,param_1 + 0x40);
              uVar15 = (**(code **)(*param_1 + 0x148))(param_1);
              local_6e8 = local_528;
              local_6f0 = &local_670;
              local_6f8 = &local_690;
              FUN_1405f2e30(local_5e0,uVar15,uVar12,local_488);
              if (local_280 != 0) {
                FMemory::Free();
              }
              plVar17 = local_4f8;
              if (local_4e8 != 0) {
                plVar20 = local_518;
                if (local_4f8 != (longlong *)0x0) {
                  plVar20 = local_4f8;
                }
                if (plVar20 != (longlong *)0x0) {
                  (**(code **)(*plVar20 + 0x10))(plVar20,0);
                  plVar17 = local_4f8;
                }
              }
            }
            else {
LAB_140e03d57:
              local_6c8 = 0;
              local_4a8 = (longlong *)0x0;
              local_4d8[0] = AK::MemoryMgr::StartProfileThreadUsage;
              local_498 = 0;
              local_684 = 0xffffffff00000000;
              local_660 = 0;
              local_658 = 0;
              local_67c = 0;
              local_270[0] = 0;
              local_68 = 0;
              local_60 = 0;
              uVar12 = FUN_1405e1510(local_570,param_1 + 0x38);
              uVar15 = (**(code **)(*param_1 + 0x148))(param_1);
              local_6e8 = local_4d8;
              local_6f0 = &local_660;
              local_6f8 = &local_684;
              FUN_1405f2e30(local_5d4,uVar15,uVar12,local_270);
              if (local_68 != 0) {
                FMemory::Free();
              }
              plVar17 = local_4a8;
              if (local_498 != 0) {
                plVar20 = local_4c8;
                if (local_4a8 != (longlong *)0x0) {
                  plVar20 = local_4a8;
                }
                if (plVar20 != (longlong *)0x0) {
                  (**(code **)(*plVar20 + 0x10))(plVar20,0);
                  plVar17 = local_4a8;
                }
              }
            }
            if (plVar17 != (longlong *)0x0) {
              FMemory::Free();
            }
          }
        }
      }
      if (local_6d8 != (void *)0x0) {
        FMemory::Free();
      }
LAB_140e03e54:
      *(int *)(param_1 + 0x9a) = (int)param_1[0x9a] + 1;
      FUN_140e062c0(param_1,(int)param_1[0x84],local_678);
      if (local_620[0] != 0) {
        FMemory::Free();
      }
      if (local_630[0] != 0) {
        FMemory::Free();
      }
      if (local_640 != (longlong *)0x0) {
        LOCK();
        plVar17 = local_640 + 1;
        lVar19 = *plVar17;
        *(int *)plVar17 = (int)*plVar17 + -1;
        UNLOCK();
        if ((int)lVar19 == 1) {
          (**(code **)*local_640)(local_640);
          LOCK();
          piVar21 = (int *)((longlong)local_640 + 0xc);
          iVar18 = *piVar21;
          *piVar21 = *piVar21 + -1;
          UNLOCK();
          if (iVar18 == 1) {
            (**(code **)(*local_640 + 8))(local_640,1);
          }
        }
      }
      return;
    }
    if (*(int *)(param_3 + 1) == 0) {
      puVar22 = &DAT_143f3eda8;
    }
    else {
      puVar22 = (undefined2 *)*param_3;
    }
    if (*piVar21 == 0) {
      psVar10 = &DAT_143f3eda8;
    }
    else {
      psVar10 = *(short **)(piVar21 + -2);
    }
    lVar19 = (longlong)puVar22 - (longlong)psVar10;
    do {
      sVar3 = *psVar10;
      sVar4 = *(short *)((longlong)psVar10 + lVar19);
      if (sVar3 != sVar4) break;
      psVar10 = psVar10 + 1;
    } while (sVar4 != 0);
    if (sVar3 == sVar4) goto LAB_140e03637;
    iVar18 = iVar18 + 1;
    piVar21 = piVar21 + 0x10;
    if ((int)param_1[0x8a] <= iVar18) {
      return;
    }
  } while( true );
}



// FUNCTION 140e03f10 FUN_140e03f10 body=103 status=ok
// SIG undefined FUN_140e03f10(void)

void FUN_140e03f10(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *local_res10 [3];
  
  if (param_2 != (longlong *)0x0) {
    local_res10[0] = param_2;
    TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
    AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 0x38,local_res10);
    (**(code **)(*param_2 + 0x2b0))(param_2,*(undefined8 *)(param_1 + 0x30));
    if (((char)param_2[9] == '\0') &&
       (cVar1 = (**(code **)(*param_2 + 0x288))(param_2), cVar1 != '\0')) {
      TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
      AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 0x68,local_res10);
    }
  }
  return;
}



// FUNCTION 140e03f80 FUN_140e03f80 body=27 status=ok
// SIG undefined FUN_140e03f80(void)

void FUN_140e03f80(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  longlong *aplStackX_10 [3];
  
  lVar1 = *(longlong *)(DAT_14686f688 + 0xf8);
  if (lVar1 != 0) {
    if (param_1 != (longlong *)0x0) {
      aplStackX_10[0] = param_1;
      TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
      AddUniqueImpl<UGeometryCacheComponent_*_const_&>(lVar1 + 0x38,aplStackX_10);
      (**(code **)(*param_1 + 0x2b0))(param_1,*(undefined8 *)(lVar1 + 0x30));
      if (((char)param_1[9] == '\0') &&
         (cVar2 = (**(code **)(*param_1 + 0x288))(param_1), cVar2 != '\0')) {
        TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
        AddUniqueImpl<UGeometryCacheComponent_*_const_&>(lVar1 + 0x68,aplStackX_10);
      }
    }
    return;
  }
  return;
}



// FUNCTION 140e03fa0 Rehash body=528 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

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
  uint *puVar11;
  ulonglong uVar12;
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
      uVar12 = (ulonglong)uVar5;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar9 * 4) = 0xffffffff;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar11 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar11 = puStack_28;
      }
      uVar5 = *puVar11;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar8 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar8;
        if (bVar4) goto LAB_140e040df;
        uVar5 = puVar11[lVar6 + 1];
      }
      uStack_54 = -uVar5 & uVar5;
      iVar8 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      iStack_44 = (iStack_40 - iVar8) + 0x1f;
      if (iVar3 < iStack_44) {
LAB_140e040df:
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
        puVar11 = (uint *)((longlong)iStack_1c * 0xb0 + *param_1);
        uVar5 = (int)*plVar2 - 1U & *puVar11;
        puVar11[0x2b] = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        puVar11[0x2a] =
             *(uint *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 140e041b0 FUN_140e041b0 body=648 status=ok
// SIG undefined FUN_140e041b0(void)

void FUN_140e041b0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint *puVar16;
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
    lVar6 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar6;
  }
  uVar11 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar11 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation();
    if (0 < (int)uVar11) {
      uVar7 = 0;
      uVar15 = (ulonglong)uVar11;
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        uVar12 = (longlong)(int)*plVar2 - 1U & uVar7;
        uVar7 = uVar7 + 1;
        *(undefined4 *)((longlong)plVar8 + uVar12 * 4) = 0xffffffff;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
    iVar4 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar4 != 0) {
      puVar16 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar16 = puStack_28;
      }
      uVar11 = *puVar16;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar11 == 0) {
        lVar6 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar9 = local_58 + 1;
        bVar5 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar9;
        if (bVar5) goto LAB_140e042ef;
        uVar11 = puVar16[lVar6 + 1];
      }
      uStack_54 = -uVar11 & uVar11;
      iVar9 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      iStack_44 = (iStack_40 - iVar9) + 0x1f;
      if (iVar4 < iStack_44) {
LAB_140e042ef:
        iStack_44 = iVar4;
      }
    }
    local_30 = local_58;
    uStack_2c = uStack_54;
    local_20 = 0xffffffff;
    iStack_1c = iStack_44;
    iStack_18 = iStack_40;
    if (iStack_44 < iVar4) {
      do {
        piVar3 = (int *)(*param_1 + (longlong)iStack_1c * 0x18);
        uVar11 = piVar3[1];
        uVar13 = *piVar3 - uVar11 ^ uVar11 >> 0xd;
        uVar10 = (-0x61c88647 - uVar13) - uVar11 ^ uVar13 << 8;
        uVar14 = (uVar11 - uVar10) - uVar13 ^ uVar10 >> 0xd;
        uVar13 = (uVar13 - uVar10) - uVar14 ^ uVar14 >> 0xc;
        uVar11 = (uVar10 - uVar13) - uVar14 ^ uVar13 << 0x10;
        uVar14 = (uVar14 - uVar11) - uVar13 ^ uVar11 >> 5;
        uVar10 = (uVar13 - uVar11) - uVar14 ^ uVar14 >> 3;
        uVar11 = (uVar11 - uVar10) - uVar14 ^ uVar10 << 10;
        uVar11 = ((uVar14 - uVar11) - uVar10 ^ uVar11 >> 0xf) & (int)*plVar2 - 1U;
        piVar3[5] = uVar11;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        piVar3[4] = *(int *)((longlong)plVar8 +
                            ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar11) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar11) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 140e04440 FUN_140e04440 body=644 status=ok
// SIG undefined FUN_140e04440(void)

void FUN_140e04440(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint *puVar15;
  int *piVar16;
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
  uVar10 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar10 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation();
    if (0 < (int)uVar10) {
      uVar6 = 0;
      uVar14 = (ulonglong)uVar10;
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar11 = (longlong)(int)*plVar2 - 1U & uVar6;
        uVar6 = uVar6 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar11 * 4) = 0xffffffff;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar15 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar15 = puStack_28;
      }
      uVar10 = *puVar15;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar10 == 0) {
        lVar5 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar8 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar8;
        if (bVar4) goto LAB_140e0457f;
        uVar10 = puVar15[lVar5 + 1];
      }
      uStack_54 = -uVar10 & uVar10;
      iVar8 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      iStack_44 = (iStack_40 - iVar8) + 0x1f;
      if (iVar3 < iStack_44) {
LAB_140e0457f:
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
        piVar16 = (int *)((longlong)iStack_1c * 0x2c + *param_1);
        uVar10 = piVar16[1];
        uVar12 = *piVar16 - uVar10 ^ uVar10 >> 0xd;
        uVar9 = (-0x61c88647 - uVar12) - uVar10 ^ uVar12 << 8;
        uVar13 = (uVar10 - uVar9) - uVar12 ^ uVar9 >> 0xd;
        uVar12 = (uVar12 - uVar9) - uVar13 ^ uVar13 >> 0xc;
        uVar10 = (uVar9 - uVar12) - uVar13 ^ uVar12 << 0x10;
        uVar13 = (uVar13 - uVar10) - uVar12 ^ uVar10 >> 5;
        uVar9 = (uVar12 - uVar10) - uVar13 ^ uVar13 >> 3;
        uVar10 = (uVar10 - uVar9) - uVar13 ^ uVar9 << 10;
        uVar10 = ((uVar13 - uVar10) - uVar9 ^ uVar10 >> 0xf) & (int)*plVar2 - 1U;
        piVar16[10] = uVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        piVar16[9] = *(int *)((longlong)plVar7 +
                             ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar10) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 140e046d0 Rehash body=648 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FObjectKey,int>,TDefaultMapHashableKeyFuncs<FObjectKey,int,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint *puVar16;
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
    lVar6 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar6;
  }
  uVar11 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar11 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation();
    if (0 < (int)uVar11) {
      uVar7 = 0;
      uVar15 = (ulonglong)uVar11;
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        uVar12 = (longlong)(int)*plVar2 - 1U & uVar7;
        uVar7 = uVar7 + 1;
        *(undefined4 *)((longlong)plVar8 + uVar12 * 4) = 0xffffffff;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
    iVar4 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar4 != 0) {
      puVar16 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar16 = puStack_28;
      }
      uVar11 = *puVar16;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar11 == 0) {
        lVar6 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar9 = local_58 + 1;
        bVar5 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar9;
        if (bVar5) goto LAB_140e0480f;
        uVar11 = puVar16[lVar6 + 1];
      }
      uStack_54 = -uVar11 & uVar11;
      iVar9 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      iStack_44 = (iStack_40 - iVar9) + 0x1f;
      if (iVar4 < iStack_44) {
LAB_140e0480f:
        iStack_44 = iVar4;
      }
    }
    local_30 = local_58;
    uStack_2c = uStack_54;
    local_20 = 0xffffffff;
    iStack_1c = iStack_44;
    iStack_18 = iStack_40;
    if (iStack_44 < iVar4) {
      do {
        piVar3 = (int *)(*param_1 + (longlong)iStack_1c * 0x14);
        uVar11 = piVar3[1];
        uVar13 = *piVar3 - uVar11 ^ uVar11 >> 0xd;
        uVar10 = (-0x61c88647 - uVar13) - uVar11 ^ uVar13 << 8;
        uVar14 = (uVar11 - uVar10) - uVar13 ^ uVar10 >> 0xd;
        uVar13 = (uVar13 - uVar10) - uVar14 ^ uVar14 >> 0xc;
        uVar11 = (uVar10 - uVar13) - uVar14 ^ uVar13 << 0x10;
        uVar14 = (uVar14 - uVar11) - uVar13 ^ uVar11 >> 5;
        uVar10 = (uVar13 - uVar11) - uVar14 ^ uVar14 >> 3;
        uVar11 = (uVar11 - uVar10) - uVar14 ^ uVar10 << 10;
        uVar11 = ((uVar14 - uVar11) - uVar10 ^ uVar11 >> 0xf) & (int)*plVar2 - 1U;
        piVar3[4] = uVar11;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        piVar3[3] = *(int *)((longlong)plVar8 +
                            ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar11) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar11) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 140e04960 FUN_140e04960 body=322 status=ok
// SIG undefined FUN_140e04960(void)

void FUN_140e04960(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  longlong *plVar7;
  longlong *local_28;
  longlong *local_20;
  undefined8 local_18;
  longlong *local_10;
  
  if (*(int *)(param_1 + 0x18) == 2) {
    plVar7 = (longlong *)0x0;
    if (*(longlong *)(param_1 + 0x30) != 0) {
      FUN_1404d0c50(&local_28,0);
      if (local_28 != (longlong *)0x0) {
        local_18 = *(undefined8 *)(param_1 + 0x30);
        local_10 = *(longlong **)(param_1 + 0x38);
        if (local_10 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_10 + 1) = (int)local_10[1] + 1;
          UNLOCK();
        }
        (**(code **)(*local_28 + 0x380))(local_28,&local_18);
        plVar5 = local_10;
        if (local_10 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_10 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_10)(local_10);
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
      }
      plVar5 = local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_20 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_20)(local_20);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_20 + 8))(local_20,1);
          }
        }
      }
    }
    if ((((*(int *)(param_1 + 0x18) != 5) &&
         (*(undefined4 *)(param_1 + 0x18) = 5, *(int *)(param_1 + 0x10) != 0)) &&
        (*(longlong **)(param_1 + 8) != (longlong *)0x0)) &&
       (cVar6 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(), cVar6 != '\0')) {
      if (*(int *)(param_1 + 0x10) != 0) {
        plVar7 = *(longlong **)(param_1 + 8);
      }
      (**(code **)(*plVar7 + 0x40))(plVar7,5);
    }
  }
  return;
}



// FUNCTION 140e04ab0 FUN_140e04ab0 body=231 status=ok
// SIG undefined FUN_140e04ab0(void)

undefined8 FUN_140e04ab0(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  plVar6 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar6 = param_1 + 7;
  }
  uVar7 = (longlong)(int)param_1[9] - 1;
  iVar5 = *(int *)((longlong)plVar6 + ((longlong)param_2 & uVar7) * 4);
  if (iVar5 != -1) {
    lVar2 = *param_1;
    do {
      lVar3 = (longlong)iVar5 * 0x38;
      if (*(int *)(lVar3 + lVar2) == param_2) {
        lVar3 = (longlong)iVar5 * 0x38;
        uVar7 = (longlong)*(int *)(lVar3 + 0x34 + lVar2) & uVar7;
        piVar4 = (int *)((longlong)plVar6 + uVar7 * 4);
        iVar1 = *(int *)((longlong)plVar6 + uVar7 * 4);
        goto joined_r0x000140e04b3f;
      }
      iVar5 = *(int *)(lVar3 + 0x30 + lVar2);
    } while (iVar5 != -1);
  }
  return 0;
joined_r0x000140e04b3f:
  if (iVar1 == -1) {
LAB_140e04b60:
    FUN_1404bf980(*param_1 + 8 + lVar3);
    TSparseArray<TSetElement<TTuple<FUniqueNetIdSteam,TSharedPtr<FOnlineAuthSteam::FSteamAuthUser,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar5,1);
    return 1;
  }
  if (iVar1 == iVar5) {
    *piVar4 = *(int *)(lVar3 + lVar2 + 0x30);
    goto LAB_140e04b60;
  }
  piVar4 = (int *)((longlong)iVar1 * 0x38 + 0x30 + lVar2);
  iVar1 = *piVar4;
  goto joined_r0x000140e04b3f;
}



// FUNCTION 140e04ba0 FUN_140e04ba0 body=138 status=ok
// SIG undefined FUN_140e04ba0(void)

ulonglong FUN_140e04ba0(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  ulonglong in_RAX;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    iVar4 = *(int *)(lVar2 + 8);
    uVar6 = 0;
    in_RAX = (longlong)iVar4;
    if (0 < iVar4) {
      in_RAX = uVar6;
      do {
        iVar5 = (int)uVar6;
        if (*(longlong *)(lVar2 + 0x20 + in_RAX * 8) == *param_2) {
          if (-1 < iVar5) {
            iVar4 = (int)param_1[2];
            iVar3 = (iVar4 - iVar5) + -1;
            if (iVar3 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(param_1[1] + (longlong)iVar5 * 8),
                         (void *)(param_1[1] + (longlong)(iVar5 + 1) * 8),(longlong)iVar3 << 3);
              iVar4 = (int)param_1[2];
            }
            *(int *)(param_1 + 2) = iVar4 + -1;
            lVar2 = *param_1;
            piVar1 = (int *)(lVar2 + 8);
            *piVar1 = *piVar1 + -1;
            return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
          }
          break;
        }
        uVar6 = (ulonglong)(iVar5 + 1);
        in_RAX = in_RAX + 1;
      } while ((longlong)in_RAX < (longlong)iVar4);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140e04c30 FUN_140e04c30 body=428 status=ok
// SIG undefined FUN_140e04c30(void)

ulonglong FUN_140e04c30(longlong param_1,longlong param_2,ulonglong *param_3,int *param_4)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  ulonglong *puVar11;
  longlong *plVar12;
  int local_res10 [2];
  
  puVar2 = *(ulonglong **)(param_2 + 0x1c8);
  uVar5 = (ulonglong)*(int *)(param_2 + 0x1d0);
  puVar1 = puVar2 + uVar5;
  if (puVar2 != puVar1) {
    uVar5 = *param_3;
    puVar11 = puVar2;
    do {
      if (*puVar11 == uVar5) {
        iVar10 = (int)((longlong)puVar11 - (longlong)puVar2 >> 3);
        if (iVar10 != -1) {
          if ((*(byte *)(param_4 + 1) & 1) != 0) {
            (**(code **)(**(longlong **)(param_2 + 0x1c0) + 0x280))
                      (*(longlong **)(param_2 + 0x1c0),param_3,
                       CONCAT71((int7)((ulonglong)puVar1 >> 8),1));
            goto LAB_140e04d89;
          }
          if ((*(byte *)(param_4 + 1) & 4) == 0) {
            if (*param_4 == 2) {
              FUN_143109f60();
            }
            else if (*param_4 == 3) {
              (**(code **)(**(longlong **)(param_2 + 0x1b8) + 0x2c8))();
            }
            else {
              FUN_143109ef0(*(longlong **)(param_2 + 0x1b8),param_3);
            }
            goto LAB_140e04d89;
          }
          if (*(longlong *)(uVar5 + 0x118) == 0) goto LAB_140e04d89;
          TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
          ::FindId(param_1 + 0xb0,local_res10);
          plVar12 = (longlong *)0x0;
          plVar7 = plVar12;
          if (local_res10[0] != -1) {
            plVar7 = (longlong *)(*(longlong *)(param_1 + 0xb0) + (longlong)local_res10[0] * 0x18);
          }
          plVar6 = plVar7 + 1;
          if (plVar7 == (longlong *)0x0) {
            plVar6 = plVar12;
          }
          if ((plVar6 == (longlong *)0x0) || (lVar3 = *plVar6, lVar3 == 0)) goto LAB_140e04d89;
          if (*(int **)(lVar3 + 0x18) == (int *)0x0) {
            uVar8 = 4;
LAB_140e04d46:
            FActorRepListRefView::RequestNewList(lVar3 + 0x18,uVar8,plVar12);
          }
          else if (1 < **(int **)(lVar3 + 0x18)) {
            uVar8 = *(undefined4 *)(lVar3 + 0x28);
            plVar12 = (longlong *)0x1;
            goto LAB_140e04d46;
          }
          FUN_140e04ba0(lVar3 + 0x18,param_3);
LAB_140e04d89:
          iVar9 = *(int *)(param_2 + 0x1d0);
          iVar4 = (iVar9 - iVar10) + -1;
          if (0 < iVar4) {
            iVar4 = 1;
          }
          if (iVar4 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*(longlong *)(param_2 + 0x1c8) + (longlong)iVar10 * 8),
                       (void *)(*(longlong *)(param_2 + 0x1c8) + (longlong)(iVar9 - iVar4) * 8),
                       (longlong)iVar4 << 3);
            iVar9 = *(int *)(param_2 + 0x1d0);
          }
          *(int *)(param_2 + 0x1d0) = iVar9 + -1;
          return CONCAT71((uint7)(uint3)((uint)(iVar9 + -1) >> 8),1);
        }
        break;
      }
      puVar11 = puVar11 + 1;
    } while (puVar11 != puVar1);
  }
  return uVar5 & 0xffffffffffffff00;
}



// FUNCTION 140e04de0 FUN_140e04de0 body=238 status=ok
// SIG undefined FUN_140e04de0(void)

void FUN_140e04de0(longlong *param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  if (param_3 != 0) {
    plVar2 = (longlong *)(*param_1 + (longlong)param_2 * 0x58);
    iVar3 = param_3;
    do {
      if (plVar2[8] != 0) {
        FMemory::Free();
      }
      if (plVar2[6] != 0) {
        FMemory::Free();
      }
      if (plVar2[4] != 0) {
        FMemory::Free();
      }
      if (plVar2[2] != 0) {
        FMemory::Free();
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0xb;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar3 = (int)param_1[1];
    iVar1 = (iVar3 - param_2) - param_3;
    if (iVar1 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x58),
                 (void *)((longlong)(param_2 + param_3) * 0x58 + *param_1),(longlong)iVar1 * 0x58);
      iVar3 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar3 - param_3;
    if (param_4 != '\0') {
      TArray<FCloudFileHeader,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 140e04ed0 RemoveAtImpl body=226 status=ok
// SIG undefined RemoveAtImpl(void)

void TArray<Chaos::FMaterialData,TSizedDefaultAllocator<32>_>::RemoveAtImpl
               (longlong *param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  if (param_3 != 0) {
    plVar2 = (longlong *)(*param_1 + (longlong)param_2 * 0x40);
    iVar3 = param_3;
    do {
      if (plVar2[6] != 0) {
        FMemory::Free();
      }
      if (plVar2[4] != 0) {
        FMemory::Free();
      }
      if (plVar2[2] != 0) {
        FMemory::Free();
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 8;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar3 = (int)param_1[1];
    iVar1 = (iVar3 - param_2) - param_3;
    if (iVar1 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x40),
                 (void *)((longlong)(param_2 + param_3) * 0x40 + *param_1),(longlong)iVar1 << 6);
      iVar3 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar3 - param_3;
    if (param_4 != '\0') {
      TArray<FPartyReservation,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 140e04fc0 RemoveAtUninitialized body=181 status=ok
// SIG undefined RemoveAtUninitialized(void)

void TSparseArray<TSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::RemoveAtUninitialized(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  
  uVar10 = (ulonglong)param_2;
  if (param_3 != 0) {
    bVar3 = (byte)param_2 & 0x1f;
    uVar11 = 1 << bVar3 | 1U >> 0x20 - bVar3;
    lVar8 = uVar10 * 0xb0;
    do {
      iVar9 = (int)uVar10;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0xb0 + *param_1) = iVar9;
      }
      lVar2 = *param_1;
      *(undefined4 *)(lVar2 + lVar8) = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar2 + 4 + lVar8) = uVar4;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar9;
      plVar7 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar7 = param_1 + 2;
      }
      iVar5 = iVar9;
      if (iVar9 < 0) {
        iVar5 = iVar9 + 0x1f;
      }
      uVar10 = (ulonglong)(iVar9 + 1);
      lVar8 = lVar8 + 0xb0;
      puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar5 >> 5) * 4);
      uVar6 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *puVar1 = *puVar1 & uVar6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140e05080 RemoveAtUninitialized body=175 status=ok
// SIG undefined RemoveAtUninitialized(void)

void TSparseArray<TSetElement<TTuple<FGuid,FSHAHash>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::RemoveAtUninitialized(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  
  uVar10 = (ulonglong)param_2;
  if (param_3 != 0) {
    bVar3 = (byte)param_2 & 0x1f;
    uVar11 = 1 << bVar3 | 1U >> 0x20 - bVar3;
    lVar8 = uVar10 * 0x2c;
    do {
      iVar9 = (int)uVar10;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x2c + *param_1) = iVar9;
      }
      lVar2 = *param_1;
      *(undefined4 *)(lVar2 + lVar8) = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar2 + 4 + lVar8) = uVar4;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar9;
      plVar7 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar7 = param_1 + 2;
      }
      iVar5 = iVar9;
      if (iVar9 < 0) {
        iVar5 = iVar9 + 0x1f;
      }
      uVar10 = (ulonglong)(iVar9 + 1);
      lVar8 = lVar8 + 0x2c;
      puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar5 >> 5) * 4);
      uVar6 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *puVar1 = *puVar1 & uVar6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140e05130 FUN_140e05130 body=1196 status=ok
// SIG undefined FUN_140e05130(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e05130(longlong param_1,int param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  void *_Src;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined1 auStack_1a8 [32];
  undefined1 local_188;
  undefined8 local_180;
  longlong *local_178;
  undefined8 local_170;
  longlong local_168 [4];
  char local_148 [8];
  void *local_140;
  int local_138;
  undefined4 local_134;
  longlong local_128;
  longlong *plStack_120;
  void *local_118;
  ulonglong local_110;
  longlong local_108;
  longlong *local_100;
  longlong local_f8;
  longlong *plStack_f0;
  undefined8 local_e8;
  longlong local_e0;
  undefined **local_d8;
  char *local_d0;
  undefined1 local_c8;
  undefined4 local_c0;
  undefined **local_b8;
  char *local_b0;
  undefined1 local_a8;
  undefined4 local_a0;
  code *local_98 [2];
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  lVar4 = FUN_142b45e90();
  FUN_142b4a990(*(undefined8 *)(lVar4 + 0x18),&local_108,param_1 + 0x50);
  if (((local_108 != 0) && (*(int *)(local_108 + 0x90) != 0)) &&
     (*(longlong **)(local_108 + 0x88) != (longlong *)0x0)) {
    cVar3 = (**(code **)(**(longlong **)(local_108 + 0x88) + 0x18))();
    if (((cVar3 != '\0') && (*(int *)(local_108 + 0x90) != 0)) &&
       (plVar6 = *(longlong **)(local_108 + 0x88), plVar6 != (longlong *)0x0)) {
      (**(code **)(*plVar6 + 0x28))(plVar6,0);
      if (*(longlong *)(local_108 + 0x88) != 0) {
        uVar5 = FMemory::Realloc(*(longlong *)(local_108 + 0x88),0,0);
        *(undefined8 *)(local_108 + 0x88) = uVar5;
      }
      *(undefined4 *)(local_108 + 0x90) = 0;
    }
  }
  FUN_140e232d0(&local_118,param_2);
  _Src = local_118;
  local_148[0] = param_2 == 0;
  local_140 = (void *)0x0;
  iVar8 = (int)local_110;
  local_138 = iVar8;
  if (iVar8 == 0) {
    local_134 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_140,local_110 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_140,_Src,(longlong)iVar8 * 2);
  }
  if (local_148[0] == '\0') {
    plVar6 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))();
    plVar6 = (longlong *)(**(code **)(*plVar6 + 0x198))(plVar6);
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x50))(plVar6,"Set_Display_Name_Notify_Response",1);
      (**(code **)(*plVar6 + 0x28))(plVar6);
      (**(code **)(*plVar6 + 0x10))(plVar6,&local_178,"response",local_148);
      if (local_178 != (longlong *)0x0) {
        local_d0 = "success";
        local_c8 = 1;
        local_d8 = &PTR_FUN_1445760c0;
        local_c0 = 0;
        (**(code **)(*local_178 + 0x18))(local_178,local_170,&local_d8);
        local_d8 = &PTR_FUN_143f47bd8;
        local_b0 = "errorMessage";
        local_b8 = &PTR_FUN_144576140;
        local_a8 = 1;
        local_a0 = 8;
        (**(code **)(*local_178 + 0x18))(local_178,local_170,&local_b8);
      }
      cohtml::TypeDescription::~TypeDescription((TypeDescription *)&local_178);
      (**(code **)(*plVar6 + 0x48))(plVar6,local_148);
      (**(code **)(*plVar6 + 0x58))(plVar6);
    }
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0xf0))();
  }
  if (param_2 == 0) {
    cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x48);
    if (cVar3 != '\0') {
      uVar5 = FWeakObjectPtr::Get(param_1 + 0x48);
      FUN_140bbc690(uVar5,&local_128,param_1 + 0x50);
      if (local_128 != 0) {
        local_f8 = local_128;
        plStack_f0 = plStack_120;
        if (plStack_120 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_120 + 1) = (int)plStack_120[1] + 1;
          UNLOCK();
        }
        lVar4 = FWeakObjectPtr::Get(param_1 + 0x48);
        FUN_140d8d820(*(undefined8 *)(lVar4 + 0x478),&local_f8,param_3);
        plVar6 = plStack_f0;
        if (plStack_f0 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_f0 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*plStack_f0)(plStack_f0);
            LOCK();
            piVar2 = (int *)((longlong)plVar6 + 0xc);
            iVar8 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*plVar6 + 8))(plVar6,1);
            }
          }
        }
      }
      if (plStack_120 != (longlong *)0x0) {
        LOCK();
        plVar6 = plStack_120 + 1;
        lVar4 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plStack_120)(plStack_120);
          LOCK();
          piVar2 = (int *)((longlong)plStack_120 + 0xc);
          iVar8 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plStack_120 + 8))(plStack_120,1);
          }
        }
      }
    }
    local_e8 = *(undefined8 *)(param_1 + 0x50);
    local_e0 = *(longlong *)(param_1 + 0x58);
    if (local_e0 != 0) {
      LOCK();
      *(int *)(local_e0 + 8) = *(int *)(local_e0 + 8) + 1;
      UNLOCK();
    }
    local_188 = *(undefined1 *)(param_1 + 0x60);
    local_180 = param_3;
    FUN_140de82c0(param_1 + 0x38,0,&local_e8,*(undefined1 *)(param_1 + 0x61));
    local_68 = (longlong *)0x0;
    local_58 = 0;
    puVar7 = (undefined8 *)FUN_140438ef0(0x10,local_88);
    if (puVar7 != (undefined8 *)0x0) {
      puVar7[1] = param_1;
      *puVar7 = &PTR_FUN_143f77b70;
    }
    local_168[2] = 0;
    local_98[0] = FUN_140de4cc0;
    local_168[3] = 0x1c;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_168 + 2,0);
    FGenericPlatformString::Memcpy(local_168[2],L"shift_first_boot_experience",0x38);
    local_168[0] = 0;
    local_168[1] = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_168,0);
    FGenericPlatformString::Memcpy(local_168[0],L"crossplay",0x14);
    FUN_142b62c30(param_1 + 0x50,local_168,local_168 + 2,local_98);
    if (local_168[0] != 0) {
      FMemory::Free();
    }
    if (local_168[2] != 0) {
      FMemory::Free();
    }
    if (local_58 != 0) {
      plVar6 = local_88;
      if (local_68 != (longlong *)0x0) {
        plVar6 = local_68;
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6,0);
      }
    }
    if (local_68 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  if (local_140 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_118 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_100 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_100 + 1;
    lVar4 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_100)(local_100);
      LOCK();
      piVar2 = (int *)((longlong)local_100 + 0xc);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_100 + 8))(local_100,1);
      }
    }
  }
  return;
}



// FUNCTION 140e05600 Reset body=272 status=ok
// SIG undefined Reset(void)

void TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
     Reset(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  void *_Dst;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *local_38;
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_38,param_1);
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      if (*(longlong *)((longlong)local_1c * 0x20 + *local_38) != 0) {
        FMemory::Free();
      }
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit();
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xc)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  iVar1 = *(int *)(param_1 + 0x28) + 0x1f;
  _Dst = *(void **)(param_1 + 0x20);
  if (*(void **)(param_1 + 0x20) == (void *)0x0) {
    _Dst = (void *)(param_1 + 0x10);
  }
  ::_guard_xfg_dispatch_icall_nop
            (_Dst,0,(longlong)((int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5) << 2);
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



// FUNCTION 140e05710 FUN_140e05710 body=210 status=ok
// SIG undefined FUN_140e05710(void)

void FUN_140e05710(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar4 = *(longlong **)(param_1 + 0x38);
  plVar1 = plVar4 + *(int *)(param_1 + 0x40);
  for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
    plVar3 = *(longlong **)(*plVar4 + 0x180);
    plVar2 = plVar3 + *(int *)(*plVar4 + 0x188);
    for (; plVar3 != plVar2; plVar3 = plVar3 + 1) {
      if (*plVar3 != 0) {
        UPlatformGameInstance::StaticClass();
      }
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x48);
  plVar1 = plVar4 + *(int *)(param_1 + 0x50);
  for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
    plVar3 = *(longlong **)(*plVar4 + 0x180);
    plVar2 = plVar3 + *(int *)(*plVar4 + 0x188);
    for (; plVar3 != plVar2; plVar3 = plVar3 + 1) {
      if (*plVar3 != 0) {
        UPlatformGameInstance::StaticClass();
      }
    }
  }
  return;
}



// FUNCTION 140e057f0 FUN_140e057f0 body=89 status=ok
// SIG undefined FUN_140e057f0(void)

void FUN_140e057f0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x88);
  if ((plVar1 != (longlong *)0x0) && (*(longlong *)(param_1 + 0xf8) != 0)) {
    (**(code **)(*plVar1 + 0x70))();
    plVar1 = *(longlong **)(param_1 + 0x88);
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  *(undefined1 *)(param_1 + 0x90) = 0;
  FUN_140df56a0(param_1);
  return;
}



// FUNCTION 140e05850 FUN_140e05850 body=1569 status=ok
// SIG undefined FUN_140e05850(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e05850(longlong param_1,longlong *param_2,longlong param_3)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  longlong *plVar15;
  byte bVar16;
  int local_res10 [4];
  int local_res20;
  int local_58;
  byte local_54;
  longlong *local_50;
  int *local_48;
  
  piVar4 = (int *)FUN_140ded520(param_1,param_2[2]);
  if (*piVar4 == 0) {
    return;
  }
  plVar10 = (longlong *)(param_1 + 0x208);
  plVar7 = (longlong *)*plVar10;
  iVar3 = *(int *)(param_1 + 0x210);
  if (plVar7 != plVar7 + iVar3) {
    plVar15 = plVar7;
    do {
      if (*plVar15 == *param_2) {
        iVar14 = (int)((longlong)plVar15 - (longlong)plVar7 >> 3);
        if (iVar14 != -1) {
          iVar12 = (iVar3 - iVar14) + -1;
          if (0 < iVar12) {
            iVar12 = 1;
          }
          if (iVar12 != 0) {
            _guard_xfg_dispatch_icall_nop
                      (plVar7 + iVar14,plVar7 + (iVar3 - iVar12),(longlong)iVar12 << 3);
          }
          *(int *)(param_1 + 0x210) = *(int *)(param_1 + 0x210) + -1;
        }
        break;
      }
      plVar15 = plVar15 + 1;
    } while (plVar15 != plVar7 + iVar3);
  }
  plVar7 = (longlong *)*param_2;
  if ((*(byte *)((longlong)plVar7 + 0x93) & 0x20) != 0) {
    iVar3 = *(int *)(param_1 + 0x210);
    *(int *)(param_1 + 0x210) = iVar3 + 1;
    if (*(int *)(param_1 + 0x214) < iVar3 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar10,iVar3);
    }
    *(longlong *)(*plVar10 + (longlong)iVar3 * 8) = *param_2;
    return;
  }
  plVar15 = (longlong *)param_2[2];
  lVar6 = plVar15[0x1f];
  if (lVar6 == 0) {
    (**(code **)(*plVar15 + 0x368))(plVar15);
    lVar6 = plVar15[0x1f];
    plVar7 = (longlong *)*param_2;
  }
  local_res20 = *piVar4;
  bVar1 = *(byte *)(lVar6 + 0x91);
  bVar16 = (*(byte *)(lVar6 + 0x90) >> 2 & 2 | *(byte *)(lVar6 + 0x90) & 4) >> 1;
  local_54 = local_54 ^ (*(byte *)(plVar7 + 0x12) >> 3 ^ local_54) & 1;
  local_54 = (*(byte *)(plVar7 + 0x12) >> 1 ^ local_54) & 2 ^ local_54;
  local_54 = (*(char *)((longlong)plVar7 + 0x91) << 2 ^ local_54) & 4 ^ local_54;
  local_58 = local_res20;
  if ((local_54 & 2) == 0) {
    if ((local_54 & 1) != 0) {
      lVar6 = plVar7[0x2d];
      uVar5 = *(undefined8 *)(param_1 + 0x200);
      if (lVar6 == 0) {
        local_50 = _DAT_1468b5d90;
        uVar13 = DAT_1468b5d98;
      }
      else {
        local_50 = *(longlong **)(lVar6 + 0x220);
        uVar13 = *(undefined4 *)(lVar6 + 0x228);
      }
      local_48 = (int *)CONCAT44(local_48._4_4_,uVar13);
      *(longlong **)(param_3 + 8) = local_50;
      *(undefined4 *)(param_3 + 0x10) = uVar13;
      if (*(char *)(param_3 + 0x14) == '\0') {
        FUN_143103a10(uVar5,param_2);
      }
      else {
        uVar9 = FUN_140ded880();
        FUN_1430fc380(uVar9,param_2,param_3,0);
      }
      if ((*(char *)(*param_2 + 0x129) != '\0') &&
         (plVar10 = (longlong *)FMemory::Realloc(0,0x30), plVar10 != (longlong *)0x0)) {
        *plVar10 = (longlong)&PTR_FUN_144576470;
        FWeakObjectPtr::operator=(plVar10 + 1,uVar5);
        plVar10[2] = (longlong)FUN_140dff390;
        lVar6 = FDelegateHandle::GenerateNewID();
        plVar10[4] = lVar6;
        *plVar10 = (longlong)&PTR_FUN_1445764b8;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_3 + 0x50,1);
        (**(code **)(*plVar10 + 0x20))(plVar10,local_res10);
        iVar3 = *(int *)(param_3 + 0x58);
        *(int *)(param_3 + 0x58) = iVar3 + 1;
        if (*(int *)(param_3 + 0x5c) < iVar3 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3 + 0x50,iVar3);
        }
        puVar11 = (undefined8 *)((longlong)iVar3 * 0x10 + *(longlong *)(param_3 + 0x50));
        *puVar11 = plVar10;
        *(undefined4 *)(puVar11 + 1) = 3;
      }
      goto LAB_140e05dfa;
    }
    if ((local_54 & 4) == 0) {
      plVar10 = *(longlong **)(param_1 + 0x1f8);
      if (local_res20 == 2) {
LAB_140e05dca:
        (**(code **)(*plVar10 + 0x2c0))(plVar10,param_2,param_3,0);
        goto LAB_140e05dfa;
      }
      if (local_res20 == 3) {
        (**(code **)(*plVar10 + 0x2b8))(plVar10,param_2);
        goto LAB_140e05dfa;
      }
LAB_140e05df2:
      FUN_1430fc140(plVar10,param_2,param_3);
      goto LAB_140e05dfa;
    }
    if (plVar7[0x23] == 0) goto LAB_140e05dfa;
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0xb0,local_res10);
    if ((((local_res10[0] == -1) ||
         (lVar6 = *(longlong *)(param_1 + 0xb0) + (longlong)local_res10[0] * 0x18, lVar6 == 0)) ||
        (plVar7 = (longlong *)(lVar6 + 8), plVar7 == (longlong *)0x0)) ||
       (lVar6 = *plVar7, lVar6 == 0)) goto LAB_140e05b95;
    plVar10 = (longlong *)(lVar6 + 0x18);
    if (*(int **)(lVar6 + 0x18) == (int *)0x0) {
      uVar5 = 0;
      uVar13 = 4;
LAB_140e05d7e:
      FActorRepListRefView::RequestNewList(plVar10,uVar13,uVar5);
    }
    else if (1 < **(int **)(lVar6 + 0x18)) {
      uVar13 = *(undefined4 *)(lVar6 + 0x28);
      uVar5 = 1;
      goto LAB_140e05d7e;
    }
    iVar3 = *(int *)(lVar6 + 0x28);
    if (iVar3 == *(int *)(lVar6 + 0x2c)) {
      FActorRepListRefView::RequestNewList(plVar10,*(int *)(lVar6 + 0x2c) + 1,1);
      *(longlong *)(*(longlong *)(lVar6 + 0x20) + (longlong)*(int *)(lVar6 + 0x28) * 8) = *param_2;
      *(int *)(lVar6 + 0x28) = *(int *)(lVar6 + 0x28) + 1;
      *(int *)(*plVar10 + 8) = *(int *)(*plVar10 + 8) + 1;
      goto LAB_140e05dfa;
    }
  }
  else {
    uVar5 = (**(code **)(*plVar7 + 0x4a8))(plVar7);
    lVar6 = FUN_140dedce0(param_1,uVar5);
    if (lVar6 == 0) {
      lVar6 = (**(code **)(*(longlong *)*param_2 + 0x4a0))();
      if (lVar6 != 0) {
        lVar8 = ULocalPlayer::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) goto LAB_140e05dfa;
      }
LAB_140e05b95:
      iVar3 = *(int *)(param_1 + 0x210);
      *(int *)(param_1 + 0x210) = iVar3 + 1;
      if (*(int *)(param_1 + 0x214) < iVar3 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar10,iVar3);
      }
      *(longlong *)(*plVar10 + (longlong)iVar3 * 8) = *param_2;
      goto LAB_140e05dfa;
    }
    local_res10[0] = *(int *)(lVar6 + 0x1d0);
    *(int *)(lVar6 + 0x1d0) = local_res10[0] + 1;
    if (*(int *)(lVar6 + 0x1d4) < local_res10[0] + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                (lVar6 + 0x1c8,local_res10[0]);
    }
    *(longlong *)(*(longlong *)(lVar6 + 0x1c8) + (longlong)local_res10[0] * 8) = *param_2;
    if ((local_54 & 1) != 0) {
      (**(code **)(**(longlong **)(lVar6 + 0x1c0) + 0x278))(*(longlong **)(lVar6 + 0x1c0),param_2);
      goto LAB_140e05dfa;
    }
    if ((local_54 & 4) == 0) {
      plVar10 = *(longlong **)(lVar6 + 0x1b8);
      if (local_58 == 2) goto LAB_140e05dca;
      if (local_58 == 3) {
        (**(code **)(*plVar10 + 0x2b8))();
        goto LAB_140e05dfa;
      }
      goto LAB_140e05df2;
    }
    if (*(longlong *)(*param_2 + 0x118) == 0) goto LAB_140e05dfa;
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0xb0,local_res10);
    if ((((local_res10[0] == -1) ||
         (lVar6 = *(longlong *)(param_1 + 0xb0) + (longlong)local_res10[0] * 0x18, lVar6 == 0)) ||
        (plVar7 = (longlong *)(lVar6 + 8), plVar7 == (longlong *)0x0)) ||
       (lVar6 = *plVar7, lVar6 == 0)) goto LAB_140e05b95;
    plVar10 = (longlong *)(lVar6 + 0x18);
    if (*(int **)(lVar6 + 0x18) == (int *)0x0) {
      uVar5 = 0;
      uVar13 = 4;
LAB_140e05adc:
      FActorRepListRefView::RequestNewList(plVar10,uVar13,uVar5);
    }
    else if (1 < **(int **)(lVar6 + 0x18)) {
      uVar13 = *(undefined4 *)(lVar6 + 0x28);
      uVar5 = 1;
      goto LAB_140e05adc;
    }
    iVar3 = *(int *)(lVar6 + 0x28);
    if (iVar3 == *(int *)(lVar6 + 0x2c)) {
      FActorRepListRefView::RequestNewList(plVar10,*(int *)(lVar6 + 0x2c) + 1,1);
      iVar3 = *(int *)(lVar6 + 0x28);
    }
  }
  *(longlong *)(plVar10[1] + (longlong)iVar3 * 8) = *param_2;
  *(int *)(plVar10 + 2) = (int)plVar10[2] + 1;
  *(int *)(*plVar10 + 8) = *(int *)(*plVar10 + 8) + 1;
LAB_140e05dfa:
  if (((local_58 == local_res20) && (((bVar16 ^ local_54) & 1) == 0)) &&
     ((((bVar16 ^ local_54) & 2) == 0 && ((byte)(local_54 & 4) == (byte)((bVar1 & 1) << 2))))) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (!bVar2) {
    local_48 = &local_58;
    local_50 = param_2;
    FUN_140a9d130(param_1 + 0x268,local_res10,&local_50,0);
  }
  return;
}



// FUNCTION 140e05e80 FUN_140e05e80 body=832 status=ok
// SIG undefined FUN_140e05e80(void)

void FUN_140e05e80(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  int iVar14;
  longlong *plVar15;
  int local_res10 [2];
  int local_res18;
  byte local_res1c;
  
  piVar4 = (int *)FUN_140ded520(param_1,param_2[2]);
  if (*piVar4 == 0) {
    return;
  }
  plVar9 = *(longlong **)(param_1 + 0x208);
  iVar10 = *(int *)(param_1 + 0x210);
  if (plVar9 != plVar9 + iVar10) {
    plVar8 = plVar9;
    do {
      if (*plVar8 == *param_2) {
        iVar14 = (int)((longlong)plVar8 - (longlong)plVar9 >> 3);
        if (iVar14 != -1) {
          iVar3 = (iVar10 - iVar14) + -1;
          if (0 < iVar3) {
            iVar3 = 1;
          }
          if (iVar3 != 0) {
            _guard_xfg_dispatch_icall_nop
                      (plVar9 + iVar14,plVar9 + (iVar10 - iVar3),(longlong)iVar3 << 3);
            iVar10 = *(int *)(param_1 + 0x210);
          }
          *(int *)(param_1 + 0x210) = iVar10 + -1;
          return;
        }
        break;
      }
      plVar8 = plVar8 + 1;
    } while (plVar8 != plVar9 + iVar10);
  }
  plVar9 = (longlong *)param_2[2];
  lVar6 = plVar9[0x1f];
  if (lVar6 == 0) {
    (**(code **)(*plVar9 + 0x368))(plVar9);
    lVar6 = plVar9[0x1f];
  }
  local_res18 = *piVar4;
  plVar9 = (longlong *)*param_2;
  local_res1c = (*(byte *)(lVar6 + 0x90) >> 2 & 2 | *(byte *)(lVar6 + 0x90) & 4) >> 1 |
                (*(byte *)(lVar6 + 0x91) & 1) << 2 | local_res1c & 0xf8;
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x268,local_res10,plVar9);
  plVar13 = (longlong *)0x0;
  plVar8 = plVar13;
  if (local_res10[0] != -1) {
    plVar8 = (longlong *)(*(longlong *)(param_1 + 0x268) + (longlong)local_res10[0] * 0x18);
  }
  plVar15 = plVar8 + 1;
  if (plVar8 == (longlong *)0x0) {
    plVar15 = plVar13;
  }
  plVar8 = (longlong *)&local_res18;
  if (plVar15 != (longlong *)0x0) {
    plVar8 = plVar15;
  }
  lVar6 = *plVar8;
  if ((lVar6 & 0x200000000) != 0) {
    uVar5 = (**(code **)(*plVar9 + 0x4a8))(plVar9);
    lVar6 = FUN_140dedce0(param_1,uVar5);
    if ((lVar6 == 0) || (cVar2 = FUN_140e04c30(param_1,lVar6,param_2,plVar8), cVar2 == '\0')) {
      puVar12 = *(undefined8 **)(param_1 + 0x38);
      puVar1 = puVar12 + *(int *)(param_1 + 0x40);
      while ((puVar12 != puVar1 &&
             (cVar2 = FUN_140e04c30(param_1,*puVar12,param_2,plVar8), cVar2 == '\0'))) {
        puVar12 = puVar12 + 1;
      }
    }
    goto LAB_140e0618f;
  }
  if ((lVar6 & 0x100000000) != 0) {
    lVar6 = FUN_140decfc0(param_1 + 0xa8,param_2);
    uVar5 = *(undefined8 *)(param_1 + 0x200);
    if (*(char *)(lVar6 + 0x14) == '\0') {
      FUN_143103ec0(uVar5,param_2,1);
      FUN_140483870(lVar6 + 0x50,uVar5);
    }
    else {
      uVar7 = FUN_140ded880();
      FUN_14310a290(uVar7,param_2,lVar6);
      FUN_140483870(lVar6 + 0x50,uVar5);
    }
    goto LAB_140e0618f;
  }
  if ((lVar6 & 0x400000000) == 0) {
    if ((int)*plVar8 == 2) {
      FUN_143109f60();
    }
    else if ((int)*plVar8 == 3) {
      (**(code **)(**(longlong **)(param_1 + 0x1f8) + 0x2c8))();
    }
    else {
      FUN_143109ef0(*(longlong **)(param_1 + 0x1f8),param_2);
    }
    goto LAB_140e0618f;
  }
  if (plVar9[0x23] == 0) goto LAB_140e0618f;
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0xb0,local_res10);
  plVar9 = plVar13;
  if (local_res10[0] != -1) {
    plVar9 = (longlong *)(*(longlong *)(param_1 + 0xb0) + (longlong)local_res10[0] * 0x18);
  }
  plVar8 = plVar9 + 1;
  if (plVar9 == (longlong *)0x0) {
    plVar8 = plVar13;
  }
  if ((plVar8 == (longlong *)0x0) || (lVar6 = *plVar8, lVar6 == 0)) goto LAB_140e0618f;
  if (*(int **)(lVar6 + 0x18) == (int *)0x0) {
    uVar5 = 0;
    uVar11 = 4;
LAB_140e0614c:
    FActorRepListRefView::RequestNewList(lVar6 + 0x18,uVar11,uVar5);
  }
  else if (1 < **(int **)(lVar6 + 0x18)) {
    uVar11 = *(undefined4 *)(lVar6 + 0x28);
    uVar5 = 1;
    goto LAB_140e0614c;
  }
  FUN_140e04ba0(lVar6 + 0x18,param_2);
LAB_140e0618f:
  if (plVar15 != (longlong *)0x0) {
    TSet<TTuple<IOnlineUserCloud_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<IOnlineUserCloud_*,FDelegateHandle,0>,FDefaultSetAllocator>
    ::Remove(param_1 + 0x268,*param_2);
  }
  return;
}



// FUNCTION 140e061c0 FUN_140e061c0 body=254 status=ok
// SIG undefined FUN_140e061c0(void)

void FUN_140e061c0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 local_res8 [8];
  undefined8 local_18;
  longlong *local_10;
  
  FString::operator=(param_1 + 0xb0);
  if (((*(longlong *)(param_1 + 0xa0) != 0) && (*(longlong *)(param_1 + 0x40) == 0)) &&
     (cVar6 = FWeakObjectPtr::IsValid(param_1 + 0x98), cVar6 != '\0')) {
    uVar7 = FWeakObjectPtr::Get(param_1 + 0x98);
    uVar7 = FUN_140bb74b0(uVar7);
    puVar8 = (undefined8 *)FUN_140634b70(uVar7,local_res8,param_1,FUN_140dfd3e0);
    *(undefined8 *)(param_1 + 0x40) = *puVar8;
    local_18 = *(undefined8 *)(param_1 + 0xa0);
    local_10 = *(longlong **)(param_1 + 0xa8);
    if (local_10 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_10 + 1) = (int)local_10[1] + 1;
      UNLOCK();
    }
    uVar7 = FWeakObjectPtr::Get(param_1 + 0x98);
    uVar7 = FUN_140bb74b0(uVar7);
    FUN_140d80f70(uVar7,&local_18);
    plVar5 = local_10;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_10 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_10)(local_10);
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
  }
  return;
}



// FUNCTION 140e062c0 FUN_140e062c0 body=451 status=ok
// SIG undefined FUN_140e062c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e062c0(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  void *pvVar1;
  longlong lVar2;
  longlong *plVar3;
  void *_Memory;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined8 *local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  plVar3 = (longlong *)operator_new(0x28);
  plVar4 = (longlong *)0x0;
  plVar5 = plVar4;
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = 0;
    plVar3[1] = 0x10000;
    plVar3[2] = 0;
    plVar3[3] = 0;
    plVar3[4] = 0;
    plVar5 = plVar3;
  }
  local_58 = &local_48;
  local_48 = 0;
  local_40 = 0x3000000000000;
  local_50 = plVar5;
  FUN_142ab61f0(&local_58,"event_id",*(undefined4 *)(param_1 + 0x17c));
  FUN_142ab6250(&local_58,"remaining_time",param_2);
  FUN_142ab64b0(&local_58,"transaction_id",param_3);
  if (*(longlong *)(param_1 + 0x188) != 0) {
    plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x188) + 0x88);
  }
  if (plVar4 != (longlong *)0x0) {
    local_68[0] = 0;
    local_68[1] = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68,0);
    FGenericPlatformString::Memcpy(local_68[0],L"DonationTimer",0x1c);
    (**(code **)(*plVar4 + 0x98))(plVar4,local_68,0,&local_58);
    if (local_68[0] != 0) {
      FMemory::Free();
    }
  }
  if (plVar5 != (longlong *)0x0) {
    _Memory = (void *)*plVar5;
    if ((void *)*plVar5 != (void *)0x0) {
      do {
        if (_Memory == (void *)plVar5[2]) break;
        pvVar1 = *(void **)((longlong)_Memory + 0x10);
        free(_Memory);
        *plVar5 = (longlong)pvVar1;
        _Memory = pvVar1;
      } while (pvVar1 != (void *)0x0);
      lVar2 = *plVar5;
      if ((lVar2 != 0) && (lVar2 == plVar5[2])) {
        *(undefined8 *)(lVar2 + 8) = 0;
      }
    }
    FMemory::operator_delete(plVar5[4],1);
    FMemory::operator_delete(plVar5,0x28);
  }
  free((void *)0x0);
  FMemory::operator_delete(0,1);
  return;
}



// FUNCTION 140e06490 FUN_140e06490 body=87 status=ok
// SIG undefined FUN_140e06490(void)

void FUN_140e06490(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  
  if ((*(int *)(param_1 + 0x4c0) != 0) && (*(longlong **)(param_1 + 0x4b8) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x4b8) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x4c0) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 0x4b8);
      }
      (**(code **)(*plVar2 + 0x40))(plVar2,param_2);
    }
  }
  return;
}



// FUNCTION 140e064f0 FUN_140e064f0 body=668 status=ok
// SIG undefined FUN_140e064f0(void)

void FUN_140e064f0(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  void *_Src;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  longlong *plVar6;
  int *piVar7;
  longlong lVar8;
  longlong *plVar9;
  int local_res8 [2];
  undefined1 local_res18 [16];
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  if (0 < (int)param_1[0x42]) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_14686fcb0) &&
       (_Init_thread_header(&DAT_14686fcb0), DAT_14686fcb0 == -1)) {
      atexit((_func_5014 *)&LAB_143e55700);
      _Init_thread_footer(&DAT_14686fcb0);
    }
    DAT_14686fca8 = 0;
    if ((DAT_14686fcac < 0) && (DAT_14686fcac != 0)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(&DAT_14686fca0,0);
    }
    plVar1 = param_1 + 0x41;
    if ((longlong **)plVar1 != &DAT_14686fca0) {
      DAT_14686fca8 = (int)param_1[0x42];
      lVar8 = (longlong)DAT_14686fca8;
      _Src = (void *)*plVar1;
      if ((DAT_14686fca8 == 0) && (DAT_14686fcac == 0)) {
        DAT_14686fcac = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                  (&DAT_14686fca0,DAT_14686fca8);
        _guard_xfg_dispatch_icall_nop(DAT_14686fca0,_Src,lVar8 << 3);
      }
    }
    *(undefined4 *)(param_1 + 0x42) = 0;
    if (0x7fffffff < *(uint *)((longlong)param_1 + 0x214)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1,0);
    }
    plVar1 = DAT_14686fca0 + DAT_14686fca8;
    for (plVar9 = DAT_14686fca0; plVar9 != plVar1; plVar9 = plVar9 + 1) {
      lVar8 = *plVar9;
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::FindId(param_1 + 0x16,local_res8,lVar8);
      if ((((local_res8[0] != -1) &&
           (lVar2 = param_1[0x16] + (longlong)local_res8[0] * 0x18, lVar2 != 0)) &&
          (plVar6 = (longlong *)(lVar2 + 8), plVar6 != (longlong *)0x0)) &&
         (lVar2 = *plVar6, lVar2 != 0)) {
        local_58 = *(undefined8 *)(lVar8 + 0x10);
        local_60 = 0;
        lVar3 = *(longlong *)(lVar8 + 0x20);
        local_68 = lVar8;
        if (lVar3 != 0) {
          lVar8 = FUN_1429a0270();
          if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if ((bVar4) && (cVar5 = ULevel::IsPersistentLevel(lVar3), cVar5 == '\0')) {
            lVar8 = UObjectBaseUtility::GetOutermost(lVar3);
            local_60 = *(undefined8 *)(lVar8 + 0x18);
          }
        }
        if (((*(byte *)(local_68 + 0x90) & 0x20) == 0) &&
           (piVar7 = (int *)TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::FindId
                                      (param_1 + 0x2a,local_res18,local_68), *piVar7 != -1)) {
          (**(code **)(*param_1 + 0x328))(param_1,&local_68,lVar2);
        }
      }
    }
  }
  FUN_14310bab0(param_1,param_2);
  return;
}



// FUNCTION 140e067b0 FUN_140e067b0 body=467 status=ok
// SIG undefined FUN_140e067b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e067b0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  undefined1 auStack_a8 [32];
  uint local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  if (param_2 != 0) {
    local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
    *(longlong *)(param_1 + 0x458) = param_2;
    uVar2 = FUN_142cc12b0(param_2);
    uVar4 = *(undefined8 *)(param_1 + 0x458);
    *(undefined8 *)(param_1 + 0x468) = uVar2;
    FUN_1417846f0(uVar4,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    uVar2 = 0;
    local_58 = 0;
    uVar3 = AArchVisCharacter::StaticClass();
    local_68 = 0;
    local_70 = 0;
    local_78 = 0;
    local_80 = 0;
    local_88 = 0;
    uVar4 = FUN_1417985e0(uVar3,uVar4,0,0);
    *(undefined8 *)(param_1 + 0x460) = uVar4;
    (**(code **)(**(longlong **)(param_1 + 0x458) + 0x630))(*(longlong **)(param_1 + 0x458),uVar4);
    local_58 = 0;
    FUN_142382f60(*(undefined8 *)(param_1 + 0x460),
                  *(undefined8 *)(*(longlong *)(param_1 + 0x458) + 0x168),&DAT_146532184,0);
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x458) + 0x4d0);
    if (lVar1 != 0) {
      local_48 = _DAT_1468b5b70;
      uStack_40 = uRam00000001468b5b78;
      local_28 = _DAT_1468b5b90;
      uStack_20 = uRam00000001468b5b98;
      fVar5 = *(float *)(lVar1 + 0x710) + 150.0;
      local_88 = local_88 & 0xffffff00;
      local_38 = _DAT_1468b5b80 + (float)DAT_1464aa798 * fVar5;
      fStack_34 = fRam00000001468b5b84 + DAT_1464aa798._4_4_ * fVar5;
      fStack_30 = fRam00000001468b5b88 + DAT_1464aa7a0 * fVar5;
      fStack_2c = fRam00000001468b5b8c + 0.0;
      FUN_142381650(*(undefined8 *)(param_1 + 0x460),&local_48,0,0);
    }
    if (*(longlong *)(param_1 + 0x478) != 0) {
      uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x478) + 0x1e0);
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0x460) + 0x7a8) = uVar2;
    FUN_142f6c130(*(undefined8 *)(param_1 + 0x460),2);
  }
  return;
}



// FUNCTION 140e06990 FUN_140e06990 body=98 status=ok
// SIG undefined FUN_140e06990(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e06990(longlong param_1,int param_2)

{
  char cVar1;
  
  if (((param_2 != *(int *)(param_1 + 0x18)) &&
      (*(int *)(param_1 + 0x18) = param_2, *(int *)(param_1 + 0x10) != 0)) &&
     (*(longlong **)(param_1 + 8) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000140e069d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(longlong **)(param_1 + 8) + 0x40))(*(longlong **)(param_1 + 8),param_2);
        return;
      }
      (**(code **)(_DAT_00000000 + 0x40))(0,param_2);
    }
  }
  return;
}



// FUNCTION 140e06a00 FUN_140e06a00 body=426 status=ok
// SIG undefined FUN_140e06a00(void)

void FUN_140e06a00(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong **pplVar7;
  longlong local_38;
  longlong *local_30;
  longlong *local_28 [2];
  undefined8 local_18;
  longlong local_10;
  
  lVar3 = FUN_142b45e90();
  FUN_142b4a990(*(undefined8 *)(lVar3 + 0x18),&local_38,param_1 + 0x50);
  lVar3 = local_38;
  if (local_38 == 0) {
    local_18 = *(undefined8 *)(param_1 + 0x50);
    local_10 = *(longlong *)(param_1 + 0x58);
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
    }
    FUN_140de82c0(param_1 + 0x38,1,&local_18,*(undefined1 *)(param_1 + 0x61),
                  *(undefined1 *)(param_1 + 0x60),param_2);
  }
  else {
    pplVar7 = (longlong **)(local_38 + 0x88);
    plVar4 = (longlong *)FMemory::Realloc(0,0x30);
    local_28[0] = plVar4;
    if (plVar4 != (longlong *)0x0) {
      plVar4[1] = param_1;
      *plVar4 = (longlong)&DAT_143f3ed00;
      plVar4[2] = (longlong)FUN_140e05130;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar4[4] = lVar5;
      *plVar4 = (longlong)&PTR_GetPoolName_143f3ed48;
    }
    if (local_28 != pplVar7) {
      if (plVar4 == (longlong *)0x0) {
        if ((*(int *)(lVar3 + 0x90) != 0) && (plVar6 = *pplVar7, plVar6 != (longlong *)0x0)) {
          (**(code **)(*plVar6 + 0x28))(plVar6,0);
          if (*pplVar7 != (longlong *)0x0) {
            plVar6 = (longlong *)FMemory::Realloc(*pplVar7,0,0);
            *pplVar7 = plVar6;
          }
          *(undefined4 *)(lVar3 + 0x90) = 0;
        }
      }
      else {
        (**(code **)(*plVar4 + 0x30))(plVar4,pplVar7);
      }
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x28))(plVar4,0);
      local_28[0] = (longlong *)FMemory::Realloc(plVar4,0,0);
      if (local_28[0] != (longlong *)0x0) {
        FMemory::Free(local_28[0]);
      }
    }
    FUN_142b66a80(local_38,param_2);
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_30 + 1;
    lVar3 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  return;
}



// FUNCTION 140e06bb0 FUN_140e06bb0 body=970 status=ok
// SIG undefined FUN_140e06bb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e06bb0(longlong param_1)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  longlong *local_48;
  longlong *local_40;
  
  uVar9 = 0;
  *(undefined1 *)(param_1 + 0x90) = 0;
  FUN_1404cf890(&local_48,0);
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x88))(local_48,param_1 + 0xa8);
  }
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    TBaseMulticastDelegate<void>::Remove
              (*(longlong *)(param_1 + 0xf0) + 0xa68,*(undefined8 *)(param_1 + 0xe0));
    TBaseMulticastDelegate<void>::Remove
              (*(longlong *)(param_1 + 0xf0) + 0x9c0,*(undefined8 *)(param_1 + 0xe8));
  }
  lVar3 = FUN_142b45e90();
  lVar5 = *(longlong *)(param_1 + 0xb0);
  lVar3 = *(longlong *)(lVar3 + 0x18);
  uVar8 = uVar9;
  uVar12 = uVar9;
  if (0 < *(int *)(lVar3 + 0x48)) {
    do {
      plVar11 = (longlong *)(*(longlong *)(lVar3 + 0x40) + uVar12);
      if ((((int)plVar11[1] != 0) && (plVar4 = (longlong *)*plVar11, plVar4 != (longlong *)0x0)) &&
         (plVar4 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4,local_res10), *plVar4 == lVar5))
      {
        if (((int)plVar11[1] != 0) && (plVar4 = (longlong *)*plVar11, plVar4 != (longlong *)0x0)) {
          (**(code **)(*plVar4 + 0x28))(plVar4,0);
          if (*plVar11 != 0) {
            lVar5 = FMemory::Realloc(*plVar11,0,0);
            *plVar11 = lVar5;
          }
          *(undefined4 *)(plVar11 + 1) = 0;
        }
        break;
      }
      uVar10 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar10;
      uVar12 = uVar12 + 0x10;
    } while ((int)uVar10 < *(int *)(lVar3 + 0x48));
  }
  FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar3 + 0x40,0);
  lVar5 = *(longlong *)(param_1 + 0x98);
  uVar8 = uVar9;
  uVar12 = uVar9;
  iVar6 = DAT_146535870;
  if (0 < DAT_146535870) {
    do {
      plVar11 = (longlong *)(DAT_146535868 + uVar12);
      if ((((int)plVar11[1] != 0) && (plVar4 = (longlong *)*plVar11, plVar4 != (longlong *)0x0)) &&
         (plVar4 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4,local_res18),
         iVar6 = DAT_146535870, *plVar4 == lVar5)) {
        if (((int)plVar11[1] != 0) && (plVar4 = (longlong *)*plVar11, plVar4 != (longlong *)0x0)) {
          (**(code **)(*plVar4 + 0x28))(plVar4,0);
          if (*plVar11 != 0) {
            lVar5 = FMemory::Realloc(*plVar11,0,0);
            *plVar11 = lVar5;
          }
          *(undefined4 *)(plVar11 + 1) = 0;
          iVar6 = DAT_146535870;
        }
        break;
      }
      uVar10 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar10;
      uVar12 = uVar12 + 0x10;
    } while ((int)uVar10 < iVar6);
  }
  if (DAT_14653587c < 1) {
    uVar8 = uVar9;
    uVar12 = uVar9;
    iVar7 = iVar6;
    if (0 < iVar6) {
      do {
        if (((*(int *)(uVar12 + 8 + DAT_146535868) == 0) ||
            (*(longlong **)(uVar12 + DAT_146535868) == (longlong *)0x0)) ||
           (cVar2 = (**(code **)(**(longlong **)(uVar12 + DAT_146535868) + 0x10))(), cVar2 != '\0'))
        {
          TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_146535868,uVar8,1,1);
        }
        else {
          uVar8 = (ulonglong)((int)uVar8 + 1);
          uVar12 = uVar12 + 0x10;
        }
        iVar7 = DAT_146535870;
      } while ((int)uVar8 < DAT_146535870);
    }
    _DAT_146535878 = iVar7 * 2;
    if (_DAT_146535878 < 3) {
      _DAT_146535878 = 2;
    }
    if ((_DAT_146535878 < iVar6) && (DAT_146535874 != iVar7)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_146535868);
    }
  }
  lVar5 = *(longlong *)(param_1 + 0xa0);
  uVar8 = uVar9;
  uVar12 = uVar9;
  iVar6 = DAT_1465357b0;
  if (0 < DAT_1465357b0) {
    do {
      plVar11 = (longlong *)(DAT_1465357a8 + uVar12);
      if ((((int)plVar11[1] != 0) && (plVar4 = (longlong *)*plVar11, plVar4 != (longlong *)0x0)) &&
         (plVar4 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4,local_res20),
         iVar6 = DAT_1465357b0, *plVar4 == lVar5)) {
        if (((int)plVar11[1] != 0) && (plVar4 = (longlong *)*plVar11, plVar4 != (longlong *)0x0)) {
          (**(code **)(*plVar4 + 0x28))(plVar4,0);
          if (*plVar11 != 0) {
            lVar5 = FMemory::Realloc(*plVar11,0,0);
            *plVar11 = lVar5;
          }
          *(undefined4 *)(plVar11 + 1) = 0;
          iVar6 = DAT_1465357b0;
        }
        break;
      }
      uVar10 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar10;
      uVar12 = uVar12 + 0x10;
    } while ((int)uVar10 < iVar6);
  }
  if (DAT_1465357bc < 1) {
    uVar8 = uVar9;
    iVar7 = iVar6;
    if (0 < iVar6) {
      do {
        if (((*(int *)(uVar9 + 8 + DAT_1465357a8) == 0) ||
            (*(longlong **)(uVar9 + DAT_1465357a8) == (longlong *)0x0)) ||
           (cVar2 = (**(code **)(**(longlong **)(uVar9 + DAT_1465357a8) + 0x10))(), cVar2 != '\0'))
        {
          TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_1465357a8,uVar8,1,1);
        }
        else {
          uVar8 = (ulonglong)((int)uVar8 + 1);
          uVar9 = uVar9 + 0x10;
        }
        iVar7 = DAT_1465357b0;
      } while ((int)uVar8 < DAT_1465357b0);
    }
    _DAT_1465357b8 = iVar7 * 2;
    if (_DAT_1465357b8 < 3) {
      _DAT_1465357b8 = 2;
    }
    if ((_DAT_1465357b8 < iVar6) && (DAT_1465357b4 != iVar7)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_1465357a8);
    }
  }
  *(undefined4 *)(param_1 + 0xd4) = 0xffffffff;
  if ((*(longlong **)(param_1 + 0x88) != (longlong *)0x0) && (*(longlong *)(param_1 + 0xf8) != 0)) {
    (**(code **)(**(longlong **)(param_1 + 0x88) + 0x70))();
  }
  plVar11 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_40 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  return;
}



// FUNCTION 140e06f80 FUN_140e06f80 body=435 status=ok
// SIG undefined FUN_140e06f80(void)

void FUN_140e06f80(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  bool bVar3;
  longlong local_38 [3];
  undefined4 local_20;
  undefined4 local_1c;
  longlong local_18 [2];
  
  (**(code **)(*param_1 + 0x2e8))(param_1,0);
  if ((*(int *)((longlong)param_1 + 0x17c) != 0) && (param_1[0x31] != 0)) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_14686fcc0) {
      _Init_thread_header(&DAT_14686fcc0);
      if (DAT_14686fcc0 == -1) {
        uVar2 = UEnum::GetPrivateStaticClass();
        DAT_14686fcb8 = FUN_141799410(uVar2,0xffffffffffffffff,L"EEndEventReasons",1);
        _Init_thread_footer(&DAT_14686fcc0);
      }
    }
    bVar3 = DAT_14686fcb8 == 0;
    if (bVar3) {
      local_38[0] = 0;
      local_38[1] = 6;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
      FGenericPlatformString::Memcpy(local_38[0],L"Error",0xc);
      plVar1 = local_38;
    }
    else {
      plVar1 = (longlong *)FUN_1417392b0(DAT_14686fcb8,local_18,(char)param_1[0x30]);
    }
    local_38[2] = *plVar1;
    *plVar1 = 0;
    local_20 = (int)plVar1[1];
    local_1c = *(undefined4 *)((longlong)plVar1 + 0xc);
    plVar1[1] = 0;
    if (bVar3) {
      if (local_38[0] != 0) {
        FMemory::Free();
      }
    }
    if ((!bVar3) && (local_18[0] != 0)) {
      FMemory::Free();
    }
    (**(code **)(**(longlong **)(param_1[0x31] + 0x88) + 0x80))
              (*(longlong **)(param_1[0x31] + 0x88),*(undefined4 *)((longlong)param_1 + 0x17c),
               local_38 + 2);
    if (local_38[2] != 0) {
      FMemory::Free();
    }
  }
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  return;
}



// FUNCTION 140e07140 FUN_140e07140 body=288 status=ok
// SIG undefined FUN_140e07140(void)

void FUN_140e07140(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  FUN_140e06f80();
  uVar5 = 0;
  uVar3 = uVar5;
  if (param_1[0x31] != 0) {
    uVar3 = *(ulonglong *)(param_1[0x31] + 0x100);
  }
  if (uVar3 != 0) {
    FUN_1414d0f10();
  }
  *(undefined4 *)(param_1 + 0x94) = 0;
  if (*(int *)((longlong)param_1 + 0x4a4) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x93,0);
  }
  plVar1 = param_1 + 0x8f;
  param_1[0x8e] = 0;
  if ((undefined *)*plVar1 != &DAT_1445558ec) {
    *(undefined4 *)(param_1 + 0x90) = 0;
    if (*(int *)((longlong)param_1 + 0x484) != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar1);
      uVar5 = (ulonglong)*(uint *)(param_1 + 0x90);
    }
    *(int *)(param_1 + 0x90) = (int)uVar5;
    if (*(int *)((longlong)param_1 + 0x484) < (int)uVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar1);
    }
  }
  *(undefined1 *)((longlong)param_1 + 0x4bd) = 0;
  lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 400) == 0) {
      uVar4 = *(undefined8 *)(lVar2 + 0x3f8);
    }
    else {
      uVar4 = *(undefined8 *)(*(longlong *)(lVar2 + 400) + 0x90);
    }
    FUN_142880530(uVar4,param_1 + 0x96);
    param_1[0x96] = 0;
  }
  lVar2 = param_1[0x70];
  lVar6 = (longlong)(int)param_1[0x71] * 0x60 + lVar2;
  for (; lVar2 != lVar6; lVar2 = lVar2 + 0x60) {
    *(undefined8 *)(lVar2 + 0x54) = 0;
    *(undefined4 *)(lVar2 + 0x5c) = 0;
  }
  return;
}



// FUNCTION 140e07260 FUN_140e07260 body=118 status=ok
// SIG undefined FUN_140e07260(void)

void FUN_140e07260(longlong param_1)

{
  FUN_140e06f80();
  FUN_140de6e60(param_1 + 600,0);
  *(undefined8 *)(param_1 + 0x290) = 0;
  if (*(longlong *)(param_1 + 0x270) != 0) {
    FUN_1411f8450();
    FUN_1407665e0(*(longlong *)(param_1 + 0x270) + 0xe8,param_1);
    *(undefined8 *)(param_1 + 0x270) = 0;
  }
  FUN_140de6f40(param_1 + 0x278,0);
  *(undefined4 *)(param_1 + 0x298) = 0;
  return;
}



// FUNCTION 140e072e0 FUN_140e072e0 body=108 status=ok
// SIG undefined FUN_140e072e0(void)

void FUN_140e072e0(longlong param_1)

{
  FUN_140e06f80();
  FUN_140de6e60(param_1 + 600,0);
  *(undefined8 *)(param_1 + 0x290) = 0;
  if (*(longlong *)(param_1 + 0x270) != 0) {
    FUN_1411f8450();
    FUN_1407665e0(*(longlong *)(param_1 + 0x270) + 0xe8,param_1);
    *(undefined8 *)(param_1 + 0x270) = 0;
  }
  FUN_140de6f40(param_1 + 0x278,0);
  return;
}



// FUNCTION 140e07350 FUN_140e07350 body=235 status=ok
// SIG undefined FUN_140e07350(void)

void FUN_140e07350(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int iVar4;
  
  FUN_140e06f80();
  *(undefined1 *)((longlong)param_1 + 0x4ec) = 0;
  param_1[0x9a] = 0;
  iVar4 = (int)param_1[0xa9];
  if (iVar4 != 0) {
    plVar3 = (longlong *)(param_1[0xa8] + 8);
    do {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *(undefined4 *)(param_1 + 0xa9) = 0;
  if (*(int *)((longlong)param_1 + 0x54c) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0xa8,0);
  }
  lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 400) == 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0x3f8);
    }
    else {
      uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
    }
    FUN_142880530(uVar2,param_1 + 0xad);
    param_1[0xad] = 0;
  }
  param_1[0x99] = 0;
  *(undefined4 *)(param_1 + 0xae) = 0;
  *(undefined4 *)((longlong)param_1 + 0x574) = 0xffffffff;
  return;
}



// FUNCTION 140e07440 FUN_140e07440 body=129 status=ok
// SIG undefined FUN_140e07440(void)

void FUN_140e07440(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_140e06f80();
  lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 400) == 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0x3f8);
    }
    else {
      uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
    }
    FUN_142880530(uVar2,param_1 + 0x69);
    param_1[0x69] = 0;
  }
  param_1[0x68] = 0;
  *(undefined4 *)(param_1 + 0x6a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x354) = 0xffffffff;
  return;
}



// FUNCTION 140e074f0 FUN_140e074f0 body=1300 status=ok
// SIG undefined FUN_140e074f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e074f0(longlong *param_1,float *param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_1a8 [32];
  undefined4 *local_188;
  undefined *local_180;
  undefined8 local_178;
  undefined8 local_170;
  float local_168;
  undefined8 local_160;
  float fStack_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined1 local_14c;
  longlong local_148 [2];
  undefined1 local_138 [16];
  longlong *local_128;
  undefined1 local_108 [12];
  undefined4 local_fc;
  undefined8 local_e8;
  float local_e0;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  plVar1 = param_1 + 0x66;
  lVar5 = FWeakObjectPtr::Get(plVar1);
  lVar12 = 0;
  if (lVar5 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if (DAT_1464b56f4 == (int)param_1[0x67]) {
      return;
    }
    local_178 = 0;
    if (param_1[0x68] == 0) {
      return;
    }
    lVar5 = FUN_141796df0();
    FWeakObjectPtr::operator=(plVar1,lVar5);
    if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(param_1 + 0x67) = DAT_1464b56f4;
    }
    lVar5 = FWeakObjectPtr::Get(plVar1);
    if (lVar5 == 0) {
      return;
    }
  }
  lVar6 = FUN_14171bfe0();
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    lVar6 = FUN_1428dfc70();
    do {
      if (lVar5 == lVar6) {
        if (param_1[0x31] == 0) {
          return;
        }
        plVar7 = (longlong *)FUN_142dcfb00();
        if (plVar7 == (longlong *)0x0) {
LAB_140e0769e:
          plVar7 = (longlong *)0x0;
LAB_140e076a1:
          lVar5 = lVar12;
        }
        else {
          lVar5 = FUN_14145f370();
          if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
              != lVar5 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) goto LAB_140e0769e;
          lVar5 = (**(code **)(*plVar7 + 0x678))(plVar7);
          if (lVar5 == 0) goto LAB_140e076a1;
          lVar6 = FUN_1413f82e0();
          if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) goto LAB_140e076a1;
        }
        lVar6 = (**(code **)(*param_1 + 0x148))(param_1);
        if (lVar5 == 0) {
          return;
        }
        if (lVar6 == 0) {
          return;
        }
        local_168 = param_2[2];
        local_170 = *(undefined8 *)param_2;
        _guard_xfg_dispatch_icall_nop(local_108,0,0x90);
        local_fc = 0x3f800000;
        local_180 = &DAT_146aefe90;
        local_188 = &local_150;
        local_14c = 0;
        fStack_158 = param_2[2] - DAT_1464aa7a0 * 500.0;
        local_150 = 1;
        local_160 = (code *)CONCAT44(param_2[1] - DAT_1464aa798._4_4_ * 500.0,
                                     *param_2 - (float)DAT_1464aa798 * 500.0);
        cVar3 = UWorld::LineTraceSingleByObjectType(lVar6,local_108,param_2,&local_160);
        if (cVar3 != '\0') {
          local_170 = local_e8;
          local_168 = local_e0;
        }
        local_58 = _DAT_1468b5b90;
        uStack_50 = uRam00000001468b5b98;
        local_78 = _DAT_1468b5b70;
        uStack_70 = uRam00000001468b5b78;
        local_68._8_4_ = local_168;
        local_68._0_8_ = local_170;
        local_68._12_4_ = 0;
        iVar4 = FUN_1428cf800(lVar6);
        if (iVar4 == 3) {
          fStack_158 = 0.0;
          local_160 = FUN_140dfc120;
          plVar1 = plVar7 + 0x339;
          plVar8 = (longlong *)FMemory::Realloc(0,0x30);
          if (plVar8 != (longlong *)0x0) {
            *plVar8 = (longlong)&PTR_FUN_143fcfec0;
            FWeakObjectPtr::operator=(plVar8 + 1,param_1);
            *(undefined4 *)(plVar8 + 2) = (undefined4)local_160;
            *(undefined4 *)((longlong)plVar8 + 0x14) = local_160._4_4_;
            *(float *)(plVar8 + 3) = fStack_158;
            *(undefined4 *)((longlong)plVar8 + 0x1c) = uStack_154;
            lVar5 = FDelegateHandle::GenerateNewID();
            plVar8[5] = lVar5;
            *plVar8 = (longlong)&PTR_FUN_143fcff08;
          }
          if (local_148 != plVar1) {
            if (plVar8 == (longlong *)0x0) {
              if (((int)plVar7[0x33a] != 0) &&
                 (plVar8 = (longlong *)*plVar1, plVar8 != (longlong *)0x0)) {
                (**(code **)(*plVar8 + 0x28))(plVar8,0);
                if (*plVar1 != 0) {
                  lVar5 = FMemory::Realloc(*plVar1,0,0);
                  *plVar1 = lVar5;
                }
                *(undefined4 *)(plVar7 + 0x33a) = 0;
              }
              goto LAB_140e0788e;
            }
            (**(code **)(*plVar8 + 0x30))(plVar8,plVar1);
          }
          if (plVar8 != (longlong *)0x0) {
            (**(code **)(*plVar8 + 0x28))(plVar8,0);
            lVar5 = FMemory::Realloc(plVar8,0,0);
            if (lVar5 != 0) {
              FMemory::Free(lVar5);
            }
          }
LAB_140e0788e:
          FUN_141461090(plVar7,plVar7,param_1[0x98],&local_78);
          return;
        }
        FActorSpawnParameters::FActorSpawnParameters(local_138);
        local_128 = plVar7;
        lVar9 = FWeakObjectPtr::Get(plVar1);
        lVar5 = lVar12;
        if (lVar9 == 0) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          if ((DAT_1464b56f4 == (int)param_1[0x67]) || (local_178 = 0, param_1[0x68] == 0))
          goto LAB_140e079b1;
          lVar9 = FUN_141796df0();
          FWeakObjectPtr::operator=(plVar1,lVar9);
          if ((lVar9 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            *(int *)(param_1 + 0x67) = DAT_1464b56f4;
          }
          lVar9 = FWeakObjectPtr::Get(plVar1);
          if (lVar9 == 0) goto LAB_140e079b1;
        }
        lVar10 = FUN_14171bfe0();
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) goto LAB_140e079b1;
        lVar11 = FUN_1428dfc70();
        lVar10 = lVar9;
        goto LAB_140e079a0;
      }
      lVar5 = *(longlong *)(lVar5 + 0x30);
    } while (lVar5 != 0);
  }
  return;
  while (lVar10 = *(longlong *)(lVar10 + 0x30), lVar5 = lVar12, lVar10 != 0) {
LAB_140e079a0:
    lVar5 = lVar9;
    if (lVar10 == lVar11) break;
  }
LAB_140e079b1:
  lVar5 = FUN_142550d00(lVar6,lVar5,&local_78,local_138);
  param_1[0x99] = lVar5;
  FUN_140dfc120(param_1,lVar5);
  return;
}



// FUNCTION 140e07a10 FUN_140e07a10 body=1650 status=ok
// SIG undefined FUN_140e07a10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e07a10(longlong *param_1,float *param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 uVar14;
  longlong lVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auStack_218 [32];
  undefined4 *local_1f8;
  undefined *local_1f0;
  undefined8 local_1e8;
  undefined8 local_1d8;
  float local_1d0;
  float local_1c8;
  float local_1c4;
  undefined4 local_1c0;
  undefined4 local_1b8;
  undefined1 local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined8 local_190;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined1 local_178 [16];
  longlong local_168 [2];
  undefined1 local_158 [12];
  undefined4 local_14c;
  undefined8 local_138;
  float local_130;
  undefined1 local_c8 [48];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  plVar1 = param_1 + 0x32;
  lVar5 = FWeakObjectPtr::Get(plVar1);
  lVar15 = 0;
  if (lVar5 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if (DAT_1464b56f4 == (int)param_1[0x33]) {
      return;
    }
    local_1e8 = 0;
    if (param_1[0x34] == 0) {
      return;
    }
    lVar5 = FUN_141796df0();
    FWeakObjectPtr::operator=(plVar1,lVar5);
    if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(param_1 + 0x33) = DAT_1464b56f4;
    }
    lVar5 = FWeakObjectPtr::Get(plVar1);
    if (lVar5 == 0) {
      return;
    }
  }
  lVar6 = FUN_14171bfe0();
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    lVar6 = FUN_1428dfc70();
    do {
      if (lVar5 == lVar6) {
        if (param_1[0x31] == 0) {
          return;
        }
        plVar7 = (longlong *)FUN_142dcfb00();
        if (plVar7 == (longlong *)0x0) {
LAB_140e07bbe:
          plVar7 = (longlong *)0x0;
LAB_140e07bc1:
          lVar5 = lVar15;
        }
        else {
          lVar5 = FUN_14145f370();
          if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
              != lVar5 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) goto LAB_140e07bbe;
          lVar5 = (**(code **)(*plVar7 + 0x678))(plVar7);
          if (lVar5 == 0) goto LAB_140e07bc1;
          lVar6 = FUN_1413f82e0();
          if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) goto LAB_140e07bc1;
        }
        lVar6 = (**(code **)(*param_1 + 0x148))(param_1);
        if (lVar5 == 0) {
          return;
        }
        if (lVar6 == 0) {
          return;
        }
        if (*(longlong *)(lVar5 + 0x168) == 0) {
          local_198 = DAT_1464aa7b0;
          puVar8 = &local_1a0;
          local_1a0 = DAT_1464aa7a8;
        }
        else {
          puVar8 = (undefined8 *)FUN_142369f10();
        }
        local_1e8 = *puVar8;
        local_1c8 = -(float)local_1e8;
        local_1c4 = -(float)((ulonglong)local_1e8 >> 0x20);
        fVar16 = local_1c4 * local_1c4 + local_1c8 * local_1c8;
        if (1e-08 < fVar16) {
          auVar17 = rsqrtss(ZEXT416((uint)fVar16),ZEXT416((uint)fVar16));
          local_1a4 = auVar17._0_4_;
          local_1a4 = local_1a4 + local_1a4 * (0.5 - fVar16 * 0.5 * local_1a4 * local_1a4);
          local_1a4 = local_1a4 + local_1a4 * (0.5 - fVar16 * 0.5 * local_1a4 * local_1a4);
          local_1c8 = local_1a4 * local_1c8;
          local_1c4 = local_1a4 * local_1c4;
        }
        local_1c0 = 0;
        local_1d8 = *(undefined8 *)param_2;
        local_1d0 = param_2[2];
        _guard_xfg_dispatch_icall_nop(local_158,0,0x90);
        local_14c = 0x3f800000;
        local_1f0 = &DAT_146aefe90;
        local_1f8 = &local_1b8;
        local_1b4 = 0;
        local_1a8 = param_2[2] - DAT_1464aa7a0 * 500.0;
        local_1b8 = 1;
        local_1ac = param_2[1] - DAT_1464aa798._4_4_ * 500.0;
        local_1b0 = *param_2 - (float)DAT_1464aa798 * 500.0;
        cVar3 = UWorld::LineTraceSingleByObjectType(lVar6,local_158,param_2,&local_1b0);
        if (cVar3 != '\0') {
          local_1d8 = local_138;
          local_1d0 = local_130;
        }
        local_78 = _DAT_1468b5b90;
        uStack_70 = uRam00000001468b5b98;
        local_88._8_4_ = local_1d0;
        local_88._0_8_ = local_1d8;
        local_88._12_4_ = 0;
        puVar9 = (undefined4 *)FVector4::ToOrientationQuat(&local_1c8,local_178);
        local_98 = *puVar9;
        uStack_94 = puVar9[1];
        uStack_90 = puVar9[2];
        uStack_8c = puVar9[3];
        iVar4 = FUN_1428cf800(lVar6);
        if (iVar4 == 3) {
          uStack_188 = 0;
          local_190 = FUN_140dff9b0;
          plVar1 = plVar7 + 0x339;
          plVar10 = (longlong *)FMemory::Realloc(0,0x30);
          if (plVar10 != (longlong *)0x0) {
            *plVar10 = (longlong)&PTR_FUN_143fcfec0;
            FWeakObjectPtr::operator=(plVar10 + 1,param_1);
            *(undefined4 *)(plVar10 + 2) = (undefined4)local_190;
            *(undefined4 *)((longlong)plVar10 + 0x14) = local_190._4_4_;
            *(undefined4 *)(plVar10 + 3) = uStack_188;
            *(undefined4 *)((longlong)plVar10 + 0x1c) = uStack_184;
            lVar5 = FDelegateHandle::GenerateNewID();
            plVar10[5] = lVar5;
            *plVar10 = (longlong)&PTR_FUN_143fcff08;
          }
          if (local_168 == plVar1) {
LAB_140e07ea7:
            if (plVar10 != (longlong *)0x0) {
              (**(code **)(*plVar10 + 0x28))(plVar10,0);
              lVar5 = FMemory::Realloc(plVar10,0,0);
              if (lVar5 != 0) {
                FMemory::Free(lVar5);
              }
            }
          }
          else {
            if (plVar10 != (longlong *)0x0) {
              (**(code **)(*plVar10 + 0x30))(plVar10,plVar1);
              goto LAB_140e07ea7;
            }
            if (((int)plVar7[0x33a] != 0) &&
               (plVar10 = (longlong *)*plVar1, plVar10 != (longlong *)0x0)) {
              (**(code **)(*plVar10 + 0x28))(plVar10,0);
              if (*plVar1 != 0) {
                lVar5 = FMemory::Realloc(*plVar1,0,0);
                *plVar1 = lVar5;
              }
              *(undefined4 *)(plVar7 + 0x33a) = 0;
            }
          }
          FUN_141461090(plVar7,plVar7,param_1[0x67],&local_98);
          goto LAB_140e08015;
        }
        lVar11 = FWeakObjectPtr::Get(plVar1);
        lVar5 = lVar15;
        if (lVar11 == 0) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          if ((DAT_1464b56f4 == (int)param_1[0x33]) || (local_1e8 = 0, param_1[0x34] == 0))
          goto LAB_140e07fe5;
          lVar11 = FUN_141796df0();
          FWeakObjectPtr::operator=(plVar1,lVar11);
          if ((lVar11 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            *(int *)(param_1 + 0x33) = DAT_1464b56f4;
          }
          lVar11 = FWeakObjectPtr::Get(plVar1);
          if (lVar11 == 0) goto LAB_140e07fe5;
        }
        lVar12 = FUN_14171bfe0();
        if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar12 + 0x90) * 8) != lVar12 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) goto LAB_140e07fe5;
        lVar13 = FUN_1428dfc70();
        lVar12 = lVar11;
        goto LAB_140e07fd4;
      }
      lVar5 = *(longlong *)(lVar5 + 0x30);
    } while (lVar5 != 0);
  }
  return;
  while (lVar12 = *(longlong *)(lVar12 + 0x30), lVar5 = lVar15, lVar12 != 0) {
LAB_140e07fd4:
    lVar5 = lVar11;
    if (lVar12 == lVar13) break;
  }
LAB_140e07fe5:
  uVar14 = FActorSpawnParameters::FActorSpawnParameters(local_c8);
  lVar5 = FUN_142550d00(lVar6,lVar5,&local_98,uVar14);
  param_1[0x68] = lVar5;
  FUN_140dff9b0(param_1,lVar5);
LAB_140e08015:
  if (param_1[0x31] != 0) {
    lVar15 = *(longlong *)(param_1[0x31] + 0xf8);
  }
  if (param_1[0x68] == 0) {
    return;
  }
  if (lVar15 == 0) {
    return;
  }
  (**(code **)(*param_1 + 0x2e8))(param_1,1);
  FUN_140de7bc0(lVar15,param_1,0);
  return;
}



// FUNCTION 140e08090 FUN_140e08090 body=564 status=ok
// SIG undefined FUN_140e08090(void)

void FUN_140e08090(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38 [16];
  longlong local_28;
  
  lVar4 = (**(code **)(*param_1 + 0x148))();
  lVar5 = FUN_142dcfb00(param_1);
  if (lVar5 == 0) {
    return;
  }
  lVar6 = FUN_14145f370();
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return;
  }
  if (((lVar4 != 0) && (iVar3 = FUN_1428cf800(lVar4), iVar3 == 3)) && (param_1[0x20] == 0)) {
    uStack_40 = 0;
    local_48 = FUN_140e00950;
    plVar1 = (longlong *)(lVar5 + 0x19c8);
    plVar7 = (longlong *)FMemory::Realloc(0,0x30,0);
    if (plVar7 != (longlong *)0x0) {
      *plVar7 = (longlong)&PTR_FUN_143fcfec0;
      FWeakObjectPtr::operator=(plVar7 + 1,param_1);
      *(undefined4 *)(plVar7 + 2) = (undefined4)local_48;
      *(undefined4 *)((longlong)plVar7 + 0x14) = local_48._4_4_;
      *(undefined4 *)(plVar7 + 3) = uStack_40;
      *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_3c;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar7[5] = lVar4;
      *plVar7 = (longlong)&PTR_FUN_143fcff08;
    }
    if (&local_48 != plVar1) {
      if (plVar7 == (longlong *)0x0) {
        if ((*(int *)(lVar5 + 0x19d0) != 0) &&
           (plVar7 = (longlong *)*plVar1, plVar7 != (longlong *)0x0)) {
          (**(code **)(*plVar7 + 0x28))(plVar7,0);
          if (*plVar1 != 0) {
            lVar4 = FMemory::Realloc(*plVar1,0,0);
            *plVar1 = lVar4;
          }
          *(undefined4 *)(lVar5 + 0x19d0) = 0;
        }
        goto LAB_140e081d0;
      }
      (**(code **)(*plVar7 + 0x30))(plVar7,plVar1);
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x28))(plVar7,0);
      lVar4 = FMemory::Realloc(plVar7,0,0);
      if (lVar4 != 0) {
        FMemory::Free(lVar4);
      }
    }
LAB_140e081d0:
    uVar8 = FUN_1414cf540();
    FUN_141461090(lVar5,lVar5,uVar8,&DAT_1468b5b70);
    return;
  }
  lVar6 = param_1[0x20];
  if (lVar6 != 0) goto LAB_140e082a1;
  FActorSpawnParameters::FActorSpawnParameters(local_38);
  local_28 = lVar5;
  uVar8 = FUN_1414cf540();
  lVar6 = FUN_142550d00(lVar4,uVar8,&DAT_1468b5b70,local_38);
  if (lVar6 == 0) {
LAB_140e08298:
    lVar6 = 0;
  }
  else {
    lVar4 = FUN_1414cf540();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_140e08298;
  }
  param_1[0x20] = lVar6;
LAB_140e082a1:
  FUN_140e00950(param_1,lVar6);
  return;
}



// FUNCTION 140e082d0 FUN_140e082d0 body=178 status=ok
// SIG undefined FUN_140e082d0(void)

void FUN_140e082d0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *local_10;
  
  local_10 = (longlong *)param_2[1];
  local_18 = *param_2;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_10 + 1) = (int)local_10[1] + 1;
    UNLOCK();
  }
  if ((undefined8 *)(param_1 + 0x30) != &local_18) {
    *(undefined8 *)(param_1 + 0x30) = local_18;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x38,&local_10);
  }
  plVar5 = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  FUN_140de6b80(param_1);
  return;
}



// FUNCTION 140e08390 FUN_140e08390 body=980 status=ok
// SIG undefined FUN_140e08390(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e08390(longlong *param_1)

{
  bool bVar1;
  ulonglong uVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  float fVar9;
  undefined1 auStack_198 [32];
  undefined4 *local_178;
  undefined *local_170;
  undefined8 local_168;
  float fStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined1 local_154;
  undefined8 local_150;
  float local_148;
  undefined1 local_138 [12];
  undefined4 local_12c;
  undefined1 local_118 [112];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  if ((*(int *)((longlong)param_1 + 0x574) == -1) &&
     (plVar4 = (longlong *)FUN_142dcfb00(param_1[0x31]), plVar4 != (longlong *)0x0)) {
    lVar5 = FUN_14145f370();
    if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (lVar5 = (**(code **)(*plVar4 + 0x678))(plVar4), lVar5 != 0)) {
      lVar6 = FUN_1413f82e0();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) && (lVar6 = (**(code **)(*param_1 + 0x148))(param_1), lVar6 != 0)) {
        lVar5 = *(longlong *)(lVar5 + 0x168);
        if (lVar5 == 0) {
          local_168 = (code *)_DAT_1468b5d90;
          fStack_160 = DAT_1468b5d98;
        }
        else {
          local_168 = *(code **)(lVar5 + 0x220);
          fStack_160 = *(float *)(lVar5 + 0x228);
        }
        uVar7 = local_168;
        fVar9 = SUB84(local_168,0);
        uVar2 = (ulonglong)local_168 >> 0x20;
        local_148 = fStack_160;
        _guard_xfg_dispatch_icall_nop(local_138,0,0x90);
        local_12c = 0x3f800000;
        local_170 = &DAT_146aefe90;
        local_178 = &local_158;
        local_154 = 0;
        local_158 = 1;
        local_150 = uVar7;
        fStack_160 = local_148 - DAT_1464aa7a0 * 500.0;
        local_168 = (code *)CONCAT44((float)uVar2 - DAT_1464aa798._4_4_ * 500.0,
                                     fVar9 - (float)DAT_1464aa798 * 500.0);
        cVar3 = UWorld::LineTraceSingleByObjectType(lVar6,local_138,&local_150,&local_168);
        if (cVar3 == '\0') {
          lVar5 = param_1[0xae];
          *(int *)(param_1 + 0xae) = (int)lVar5 + 1;
          if ((int)lVar5 < (int)param_1[0x82]) {
            local_168 = FUN_140e08390;
            fStack_160 = 0.0;
            if (*(longlong *)(lVar6 + 400) == 0) {
              uVar7 = *(undefined8 *)(lVar6 + 0x3f8);
            }
            else {
              uVar7 = *(undefined8 *)(*(longlong *)(lVar6 + 400) + 0x90);
            }
            plVar4 = (longlong *)FMemory::Realloc(0,0x30);
            if (plVar4 != (longlong *)0x0) {
              *plVar4 = (longlong)&PTR_FUN_143f77b88;
              FWeakObjectPtr::operator=(plVar4 + 1,param_1);
              *(undefined4 *)(plVar4 + 2) = (undefined4)local_168;
              *(undefined4 *)((longlong)plVar4 + 0x14) = local_168._4_4_;
              *(float *)(plVar4 + 3) = fStack_160;
              *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_15c;
              lVar5 = FDelegateHandle::GenerateNewID();
              plVar4[5] = lVar5;
              *plVar4 = (longlong)&PTR_FUN_143f77bd0;
            }
            local_a8 = 0;
            local_a0 = 0;
            if (plVar4 != (longlong *)0x0) {
              (**(code **)(*plVar4 + 0x30))(plVar4,&local_a8);
            }
            FWeakObjectPtr::operator=(local_98,0);
            local_170 = (undefined *)CONCAT44(local_170._4_4_,0xbf800000);
            local_178 = (undefined4 *)((ulonglong)local_178 & 0xffffffffffffff00);
            local_90 = 0;
            local_58 = (longlong *)0x0;
            local_48 = 0;
            local_88 = AK::MemoryMgr::StartProfileThreadUsage;
            FUN_142880850(uVar7,param_1 + 0xad,&local_a8,0x40000000);
            if (local_48 != 0) {
              plVar8 = local_78;
              if (local_58 != (longlong *)0x0) {
                plVar8 = local_58;
              }
              if (plVar8 != (longlong *)0x0) {
                (**(code **)(*plVar8 + 0x10))(plVar8,0);
              }
            }
            if (local_58 != (longlong *)0x0) {
              FMemory::Free();
            }
            TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
            if (plVar4 != (longlong *)0x0) {
              (**(code **)(*plVar4 + 0x28))(plVar4,0);
              lVar5 = FMemory::Realloc(plVar4,0,0);
              if (lVar5 != 0) {
                FMemory::Free(lVar5);
              }
            }
          }
          else {
            (**(code **)(*param_1 + 0x2e0))(param_1);
          }
        }
        else {
          FUN_140e074f0(param_1,local_118);
        }
      }
    }
  }
  return;
}



// FUNCTION 140e08770 FUN_140e08770 body=764 status=ok
// SIG undefined FUN_140e08770(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e08770(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined1 local_b0 [40];
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [8];
  undefined8 local_70;
  code *local_68;
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  lVar2 = (**(code **)(*param_1 + 0x148))();
  plVar3 = (longlong *)FUN_142dcfb00(param_1);
  if (plVar3 != (longlong *)0x0) {
    lVar4 = FUN_14145f370();
    if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (lVar4 = (**(code **)(*plVar3 + 0x678))(plVar3), lVar4 != 0)) {
      lVar5 = FUN_1413f82e0();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        if (param_1[0x1f] == 0) {
          return;
        }
        if ((char)param_1[0x1b] != '\0') {
          return;
        }
        *(undefined1 *)(param_1 + 0x12) = 2;
        if (DAT_146b33f38 == 0) {
          FUN_142d7ebe0();
        }
        if (*(longlong *)(DAT_146b33f38 + 0xe0) != 0) {
          uVar6 = TSoftObjectPtr<UTexture2D>::TSoftObjectPtr<UTexture2D>
                            (local_b0,*(longlong *)(DAT_146b33f38 + 0xe0) + 0x50);
          FUN_1405e3130(param_1,uVar6,0);
        }
        FUN_140e0db60(param_1);
        FUN_140e08090(param_1);
        return;
      }
    }
  }
  local_c8 = 0;
  if ((lVar2 != 0) && ((char)param_1[0x1b] == '\0')) {
    uStack_b8 = 0;
    local_c0 = FUN_140e08770;
    if (*(longlong *)(lVar2 + 400) == 0) {
      uVar6 = *(undefined8 *)(lVar2 + 0x3f8);
    }
    else {
      uVar6 = *(undefined8 *)(*(longlong *)(lVar2 + 400) + 0x90);
    }
    plVar3 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar3 + 1,param_1);
      *(undefined4 *)(plVar3 + 2) = (undefined4)local_c0;
      *(undefined4 *)((longlong)plVar3 + 0x14) = local_c0._4_4_;
      *(undefined4 *)(plVar3 + 3) = uStack_b8;
      *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_b4;
      lVar2 = FDelegateHandle::GenerateNewID();
      plVar3[5] = lVar2;
      *plVar3 = (longlong)&PTR_FUN_143f77bd0;
    }
    local_88 = 0;
    local_80 = 0;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_88);
    }
    FWeakObjectPtr::operator=(local_78,0);
    local_d0 = 0xbf800000;
    local_d8 = 0;
    local_70 = 0;
    local_38 = (longlong *)0x0;
    local_28 = 0;
    local_68 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar6,&local_c8,&local_88,0x3f800000);
    if (local_28 != 0) {
      plVar7 = local_58;
      if (local_38 != (longlong *)0x0) {
        plVar7 = local_38;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_88);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3,0);
      lVar2 = FMemory::Realloc(plVar3,0,0);
      if (lVar2 != 0) {
        FMemory::Free(lVar2);
      }
    }
  }
  return;
}



// FUNCTION 140e08a70 FUN_140e08a70 body=425 status=ok
// SIG undefined FUN_140e08a70(void)

void FUN_140e08a70(longlong param_1)

{
  bool bVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *local_28;
  int local_20;
  undefined8 local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if ((*(int *)(param_1 + 0x354) == -1) &&
     (plVar3 = (longlong *)FUN_142dcfb00(*(undefined8 *)(param_1 + 0x188)),
     plVar3 != (longlong *)0x0)) {
    lVar4 = FUN_14145f370();
    if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (lVar4 = (**(code **)(*plVar3 + 0x678))(plVar3), lVar4 != 0)) {
      lVar5 = FUN_1413f82e0();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        uStack_10 = 0;
        local_28 = (longlong *)0x0;
        local_18 = FUN_140dff710;
        plVar3 = (longlong *)FMemory::Realloc(0,0x30);
        local_20 = 3;
        local_28 = plVar3;
        if (plVar3 != (longlong *)0x0) {
          *plVar3 = (longlong)&PTR_FUN_144089920;
          FWeakObjectPtr::operator=(plVar3 + 1,param_1);
          *(undefined4 *)(plVar3 + 2) = (undefined4)local_18;
          *(undefined4 *)((longlong)plVar3 + 0x14) = local_18._4_4_;
          *(undefined4 *)(plVar3 + 3) = uStack_10;
          *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_c;
          lVar5 = FDelegateHandle::GenerateNewID();
          plVar3[5] = lVar5;
          *plVar3 = (longlong)&PTR_FUN_144089968;
        }
        uVar2 = FUN_142d369f0(param_1 + 0x1b8,lVar4,&local_28);
        *(undefined4 *)(param_1 + 0x354) = uVar2;
        if (local_20 != 0) {
          if (local_28 == (longlong *)0x0) {
            return;
          }
          (**(code **)(*local_28 + 0x28))(local_28,0);
          if (local_28 != (longlong *)0x0) {
            local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
          }
          local_20 = 0;
        }
        if (local_28 != (longlong *)0x0) {
          FMemory::Free(local_28);
        }
      }
    }
  }
  return;
}



// FUNCTION 140e08c20 FUN_140e08c20 body=1261 status=ok
// SIG undefined FUN_140e08c20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e08c20(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  int param_5,longlong *param_6)

{
  float fVar1;
  longlong *plVar2;
  longlong lVar3;
  void *pvVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 uVar7;
  float *pfVar8;
  char cVar9;
  float *pfVar10;
  void *_Memory;
  longlong *plVar11;
  longlong *plVar12;
  float *pfVar13;
  float fVar14;
  undefined1 auStack_1b8 [32];
  longlong *local_198;
  undefined8 local_190;
  int local_188 [2];
  float local_180 [2];
  undefined4 local_178;
  undefined1 local_174 [4];
  longlong **local_170;
  float *local_168;
  longlong *local_160;
  undefined8 local_158;
  undefined8 *local_150;
  float *local_148;
  undefined8 local_140;
  undefined8 local_138;
  float local_128;
  char local_124;
  float *local_120;
  undefined8 local_118;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  longlong local_e0;
  undefined4 local_d8;
  undefined8 *local_c8;
  float *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  ulonglong local_a8;
  
  local_a8 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  iVar6 = (int)param_6[1];
  if (0 < iVar6) {
    cVar9 = '\0';
    plVar11 = (longlong *)*param_6;
    pfVar13 = (float *)0x0;
    fVar14 = 0.0;
    plVar12 = plVar11 + (longlong)iVar6 * 0xc;
    local_128 = 0.0;
    local_124 = '\0';
    local_120 = (float *)0x0;
    local_118 = 0;
    local_100 = 0;
    local_f8 = 0;
    local_f0 = 0xffffffff;
    local_ec = 0;
    local_e0 = 0;
    local_d8 = 0;
    pfVar8 = pfVar13;
    local_178 = param_3;
    if (plVar11 != plVar12) {
      do {
        if ((((*plVar11 != 0) && (fVar1 = *(float *)(plVar11 + 9), 0.0 < fVar1)) &&
            ((*(int *)((longlong)plVar11 + 0x4c) < 0 ||
             (*(int *)((longlong)plVar11 + 0x54) < *(int *)((longlong)plVar11 + 0x4c))))) &&
           ((local_180[0] = fVar1, 1e-08 < fVar1 || (cVar9 != '\0')))) {
          local_198 = plVar11;
          TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
          ::FindId(&local_120,local_188,plVar11);
          pfVar10 = pfVar13;
          if (local_188[0] != -1) {
            pfVar10 = pfVar8 + (longlong)local_188[0] * 6;
          }
          pfVar8 = pfVar10 + 2;
          if (pfVar10 == (float *)0x0) {
            pfVar8 = pfVar13;
          }
          if (pfVar8 != (float *)0x0) {
            fVar14 = fVar14 - *pfVar8;
          }
          local_170 = &local_198;
          local_128 = fVar14 + fVar1;
          local_168 = local_180;
          TSet<TTuple<UFlareSimulatedSector_*,float>,TDefaultMapHashableKeyFuncs<UFlareSimulatedSector_*,float,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<UFlareSimulatedSector_*_const_&,float_const_&>_>
                    (&local_120,local_174,&local_170,0);
          pfVar8 = local_120;
          fVar14 = local_128;
          cVar9 = local_124;
        }
        plVar11 = plVar11 + 0xc;
      } while (plVar11 != plVar12);
      iVar6 = (int)param_6[1];
    }
    local_198 = (longlong *)0x0;
    local_190 = 0;
    if (iVar6 <= param_5) {
      param_5 = iVar6;
    }
    FUN_140ddb2a0(&local_128,param_5,0,&local_198);
    pfVar8 = (float *)operator_new(0x28);
    if (pfVar8 != (float *)0x0) {
      pfVar8[0] = 0.0;
      pfVar8[1] = 0.0;
      pfVar8[2] = 9.18355e-41;
      pfVar8[3] = 0.0;
      pfVar8[4] = 0.0;
      pfVar8[5] = 0.0;
      pfVar8[6] = 0.0;
      pfVar8[7] = 0.0;
      pfVar8[8] = 0.0;
      pfVar8[9] = 0.0;
      pfVar13 = pfVar8;
    }
    local_150 = &local_140;
    local_140 = 0;
    local_138 = 0x3000000000000;
    local_b8 = 0;
    local_b0 = 0x4000000000000;
    plVar11 = local_198 + (int)local_190;
    local_c8 = &local_b8;
    local_148 = pfVar13;
    local_c0 = pfVar13;
    plVar5 = local_198;
    for (plVar12 = local_198;
        (local_198 = plVar5, plVar12 != plVar11 &&
        (plVar2 = (longlong *)*plVar12, plVar2 != (longlong *)0x0)); plVar12 = plVar12 + 1) {
      lVar3 = *plVar2;
      if (lVar3 != 0) {
        fVar14 = *(float *)(lVar3 + 100);
        fVar1 = *(float *)(lVar3 + 0x60);
        iVar6 = rand();
        local_170 = &local_160;
        *(float *)(plVar2 + 0xb) = (float)iVar6 * 3.051851e-05 * (fVar14 - fVar1) + fVar1;
        local_168 = local_148;
        local_158 = 0x3000000000000;
        local_160 = (longlong *)0x0;
        FUN_142ab6190(&local_170,"action_id",(int)plVar2[10]);
        uVar7 = (**(code **)(*(longlong *)*plVar2 + 0x278))();
        FUN_142ab61f0(&local_170,"action_hash",uVar7);
        FUN_142ab6250(&local_170,"action_value",(int)plVar2[0xb]);
        FUN_142ab4ae0(&local_c8,&local_170);
      }
      plVar5 = local_198;
    }
    FUN_142ab61f0(&local_150,"event_id",param_2);
    FUN_142ab6190(&local_150,"poll_id",local_178);
    FUN_142ab6250(&local_150,"poll_timer_duration",param_4);
    UE4Function_Private::
    TFunctionRefCaller<<lambda_7ba9f5259ce314810519498fe7d9f36b>,void___cdecl(FRHICommandListImmediate_&,FViewportSurfaceReader_*)>
    ::Call(&local_150,"poll_options",&local_c8);
    if (*(longlong *)(param_1 + 0x88) != 0) {
      local_198 = (longlong *)0x0;
      local_190 = 10;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_198,0);
      FGenericPlatformString::Memcpy(local_198,L"PollEvent",0x14);
      (**(code **)(**(longlong **)(param_1 + 0x88) + 0x98))
                (*(longlong **)(param_1 + 0x88),&local_198,0,&local_150);
      if (local_198 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
    if (pfVar13 != (float *)0x0) {
      _Memory = *(void **)pfVar13;
      if (*(void **)pfVar13 != (void *)0x0) {
        do {
          if (_Memory == *(void **)(pfVar13 + 4)) break;
          pvVar4 = *(void **)((longlong)_Memory + 0x10);
          free(_Memory);
          *(void **)pfVar13 = pvVar4;
          _Memory = pvVar4;
        } while (pvVar4 != (void *)0x0);
        lVar3 = *(longlong *)pfVar13;
        if ((lVar3 != 0) && (lVar3 == *(longlong *)(pfVar13 + 4))) {
          *(undefined8 *)(lVar3 + 8) = 0;
        }
      }
      FMemory::operator_delete(*(undefined8 *)(pfVar13 + 8),1);
      FMemory::operator_delete(pfVar13,0x28);
    }
    free((void *)0x0);
    FMemory::operator_delete(0,1);
    if (plVar5 != (longlong *)0x0) {
      FMemory::Free(plVar5);
    }
    local_d8 = 0;
    if (local_e0 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_120);
  }
  return;
}



// FUNCTION 140e09110 FUN_140e09110 body=87 status=ok
// SIG undefined FUN_140e09110(void)

void FUN_140e09110(longlong param_1)

{
  if ((*(char *)(param_1 + 0x4bc) != '\0') && (*(longlong *)(param_1 + 0x188) != 0)) {
    *(int *)(param_1 + 0x4a8) = *(int *)(param_1 + 0x4a8) + 1;
    FUN_140e08c20(*(longlong *)(param_1 + 0x188),*(undefined4 *)(param_1 + 0x17c),
                  *(undefined4 *)(param_1 + 0x4a8),*(undefined4 *)(param_1 + 0x370),
                  *(undefined4 *)(param_1 + 0x378),param_1 + 0x380);
  }
  return;
}



// FUNCTION 140e09170 FUN_140e09170 body=632 status=ok
// SIG undefined FUN_140e09170(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140e09170(longlong *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_348 [32];
  undefined8 *local_328;
  undefined8 *local_320;
  code **local_318;
  undefined8 local_310;
  undefined1 local_308;
  undefined8 local_2f8;
  undefined4 local_2f0;
  undefined8 local_2e8;
  undefined2 local_2e0;
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [64];
  code *local_288 [2];
  longlong local_278 [4];
  longlong *local_258;
  int local_248;
  undefined1 local_238 [520];
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_348;
  if ((((longlong *)param_1[0x11] == (longlong *)0x0) ||
      (cVar3 = (**(code **)(*(longlong *)param_1[0x11] + 0x60))(), cVar3 == '\0')) ||
     (cVar3 = FUN_140e09530(param_1), cVar3 == '\0')) {
    uVar5 = 0;
  }
  else {
    FUN_140de5050(param_1);
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    lVar7 = *(longlong *)(DAT_146b33f38 + 0xe0);
    if ((lVar7 != 0) && (lVar4 = (**(code **)(*param_1 + 0x148))(param_1), lVar4 != 0)) {
      uVar5 = TSoftObjectPtr<UTexture2D>::TSoftObjectPtr<UTexture2D>(local_2c8,lVar7 + 0x50);
      FUN_1405e3130(param_1,uVar5,0);
      local_258 = (longlong *)0x0;
      local_288[0] = AK::MemoryMgr::StartProfileThreadUsage;
      local_248 = 0;
      local_2f8 = 0xffffffff00000000;
      local_2e8 = 0;
      local_2e0 = 0;
      local_2f0 = 0;
      local_238[0] = 0;
      local_30 = 0;
      local_28 = 0;
      uVar5 = FUN_1405e1510(local_2c8,lVar7 + 0x78);
      local_318 = local_288;
      local_320 = &local_2e8;
      local_328 = &local_2f8;
      FUN_1405f2e30(local_2d8,lVar4,uVar5,local_238);
      if (local_30 != 0) {
        FMemory::Free();
      }
      if (local_248 != 0) {
        plVar8 = local_278;
        if (local_258 != (longlong *)0x0) {
          plVar8 = local_258;
        }
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 0x10))(plVar8,0);
        }
      }
      if (local_258 != (longlong *)0x0) {
        FMemory::Free();
      }
      uVar1 = *(undefined4 *)(lVar7 + 0x40);
      *(undefined4 *)(param_1 + 0x31) = uVar1;
      *(undefined4 *)((longlong)param_1 + 0x18c) = *(undefined4 *)(lVar7 + 0x44);
      uVar2 = *(undefined4 *)(lVar7 + 0x48);
      *(undefined4 *)((longlong)param_1 + 0x194) = uVar1;
      *(undefined4 *)(param_1 + 0x32) = uVar2;
      FUN_140e0c280(param_1);
    }
    *(char *)(param_1 + 0x12) = ((char)param_1[0x1b] != '\0') + '\x02';
    uVar5 = GetTransientPackage();
    FUN_1417846f0(uVar5,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    local_2f8 = 0;
    uVar6 = FUN_141481f80();
    local_308 = 0;
    local_310 = 0;
    local_318 = (code **)((ulonglong)local_318 & 0xffffffffffffff00);
    local_320 = (undefined8 *)0x0;
    local_328 = (undefined8 *)((ulonglong)local_328 & 0xffffffff00000000);
    lVar7 = FUN_1417985e0(uVar6,uVar5,0,0);
    param_1[0x1f] = lVar7;
    FUN_140df4240(lVar7,DAT_14686f688);
    FUN_140e08090(param_1);
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 140e093f0 FUN_140e093f0 body=320 status=ok
// SIG undefined FUN_140e093f0(void)

void FUN_140e093f0(longlong param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  longlong local_res10;
  undefined1 local_28 [8];
  longlong local_20;
  
  if ((*(longlong *)(param_1 + 0x270) == 0) && (*(longlong *)(param_1 + 0x268) != 0)) {
    lVar3 = NewObject<UMaterialParameterCollectionInstance>();
    *(longlong *)(param_1 + 0x270) = lVar3;
    if (lVar3 != 0) {
      FUN_1411f9620(lVar3,param_1 + 0x240);
      pwVar4 = _guard_xfg_dispatch_icall_nop
                         (L"&UOakStreamingInteractionEvent_Lootable::OnThumbnailLoaded",L"::");
      pwVar2 = (wchar_t *)0x0;
      while (pwVar1 = pwVar4, pwVar1 != (wchar_t *)0x0) {
        pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
        pwVar2 = pwVar1;
      }
      FName::FName(&local_res10,pwVar2 + 2,1);
      lVar3 = *(longlong *)(param_1 + 0x270);
      FWeakObjectPtr::operator=(local_28,0);
      local_20 = 0;
      FWeakObjectPtr::operator=(local_28,param_1);
      local_20 = local_res10;
      if ((local_res10 != 0) && (lVar5 = FWeakObjectPtr::Get(local_28), lVar5 != 0)) {
        UObject::FindFunction(lVar5,local_20);
      }
      FUN_1406a5aa0(lVar3 + 0xe8,local_28);
    }
    *(undefined4 *)(param_1 + 0x288) = 0xffffffff;
    FUN_140decba0(param_1);
    return;
  }
  return;
}



// FUNCTION 140e09530 FUN_140e09530 body=501 status=ok
// SIG undefined FUN_140e09530(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140e09530(longlong *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_1a8 [32];
  code *local_188;
  undefined4 uStack_180;
  undefined1 local_178 [352];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  uVar2 = (**(code **)(*param_1 + 0x148))();
  lVar3 = FUN_142dcfb00(uVar2);
  if (lVar3 != 0) {
    lVar4 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((bVar1) && (lVar3 = FUN_140cfbfb0(lVar3), lVar3 != 0)) &&
        (lVar4 = FUN_140d3b6b0(lVar3 + 0x50), lVar4 != 0)) && (param_1[0x11] != 0)) {
      *(undefined4 *)((longlong)param_1 + 0xd4) = *(undefined4 *)(lVar3 + 0x28);
      uVar7 = 0;
      local_188 = FUN_140dfe370;
      uStack_180 = 0;
      FUN_1407ffe80(param_1[0x11] + 0x58,param_1,&local_188);
      local_188 = (code *)&LAB_140e00b60;
      uStack_180 = 0;
      FUN_1407ffe80(param_1[0x11] + 0x68,param_1,&local_188);
      (**(code **)(*(longlong *)param_1[0x11] + 0x68))();
      FUN_140e0db60(param_1);
      lVar3 = param_1[0x1f];
      if (lVar3 != 0) {
        puVar5 = *(undefined8 **)(lVar3 + 0x38);
        uVar6 = (longlong)*(int *)(lVar3 + 0x40) & 0x1fffffffffffffff;
        if (puVar5 + *(int *)(lVar3 + 0x40) < puVar5) {
          uVar6 = uVar7;
        }
        if (uVar6 != 0) {
          do {
            (**(code **)(*(longlong *)*puVar5 + 0x2a8))();
            uVar7 = uVar7 + 1;
            puVar5 = puVar5 + 1;
          } while (uVar7 != uVar6);
        }
      }
      _guard_xfg_dispatch_icall_nop(local_178,0,0x158);
      uVar2 = FUN_140ddc330(local_178);
      FUN_140de16d0(param_1 + 0x33,uVar2);
      FUN_140ddee60(local_178);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140e09730 FUN_140e09730 body=1753 status=ok
// SIG undefined FUN_140e09730(void)

void FUN_140e09730(longlong *param_1)

{
  longlong **pplVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  undefined2 *puVar16;
  double dVar17;
  undefined1 local_res8 [8];
  int local_res10 [2];
  longlong *local_res18;
  undefined8 local_res20;
  longlong *local_d8;
  longlong *local_d0;
  longlong local_c8;
  longlong *local_c0;
  double local_b8;
  LARGE_INTEGER local_b0;
  LARGE_INTEGER local_a8;
  double local_a0;
  LARGE_INTEGER local_98;
  undefined1 local_90 [8];
  undefined1 local_88 [8];
  longlong *local_80;
  longlong local_78 [7];
  
  cVar7 = (**(code **)(*param_1 + 0x10))();
  if (cVar7 != '\0') {
    return;
  }
  uVar10 = FName::FName(local_90,L"WINDOWS",1);
  local_res18 = (longlong *)FUN_1419c6b80(uVar10);
  plVar14 = (longlong *)0x0;
  pplVar1 = (longlong **)(param_1 + 7);
  if (*pplVar1 != (longlong *)0x0) goto LAB_140e09997;
  plVar11 = (longlong *)operator_new(0x30);
  plVar13 = plVar14;
  if (plVar11 != (longlong *)0x0) {
    plVar11[4] = 0;
    *(undefined2 *)((longlong)plVar11 + 0x2d) = 0;
    *(undefined1 *)((longlong)plVar11 + 0x2f) = 0;
    plVar11[1] = 0;
    plVar11[2] = 0;
    *plVar11 = (longlong)&PTR_FUN_144573580;
    plVar11[3] = 0;
    plVar11[4] = 0;
    *(undefined4 *)(plVar11 + 5) = 0;
    *(undefined1 *)((longlong)plVar11 + 0x2c) = 0;
    plVar13 = plVar11;
  }
  plVar12 = (longlong *)operator_new(0x18);
  plVar11 = plVar14;
  if (plVar12 != (longlong *)0x0) {
    *(undefined4 *)(plVar12 + 1) = 1;
    *(undefined4 *)((longlong)plVar12 + 0xc) = 1;
    *plVar12 = (longlong)&PTR_FUN_143f3f2e0;
    plVar12[2] = (longlong)plVar13;
    plVar11 = plVar12;
  }
  plVar12 = plVar13 + 1;
  if (plVar13 == (longlong *)0x0) {
    plVar12 = plVar14;
  }
  if (plVar12 != (longlong *)0x0) {
    if ((*plVar12 != 0) && (plVar12[1] != 0)) {
      piVar2 = (int *)(plVar12[1] + 8);
      LOCK();
      iVar8 = *piVar2;
      if (iVar8 == 0) {
        *piVar2 = 0;
        iVar8 = 0;
      }
      UNLOCK();
      if (0 < iVar8) goto LAB_140e098da;
    }
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
    *plVar12 = (longlong)plVar13;
    plVar14 = (longlong *)plVar12[1];
    if (plVar11 != plVar14) {
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
        UNLOCK();
        plVar14 = (longlong *)plVar12[1];
      }
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar14 + 0xc);
        iVar8 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plVar14 + 8))(plVar14,1);
        }
      }
      plVar12[1] = (longlong)plVar11;
    }
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar14 = plVar11 + 1;
      lVar5 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        iVar8 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
        }
      }
    }
  }
LAB_140e098da:
  FUN_140de67e0(plVar13,local_res18,param_1 + 1);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  local_d8 = plVar13;
  local_d0 = plVar11;
  if (pplVar1 != &local_d8) {
    *pplVar1 = plVar13;
    local_d8 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 8,&local_d0);
  }
  plVar14 = local_d0;
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_d0 + 1;
    lVar5 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_d0)(local_d0);
      LOCK();
      piVar2 = (int *)((longlong)plVar14 + 0xc);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_d0 + 8))(local_d0,1);
      }
    }
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar11 + 1;
    lVar5 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
LAB_140e09997:
  plVar14 = local_res18;
  cVar7 = (**(code **)(**pplVar1 + 8))();
  if (cVar7 != '\0') {
    iVar8 = (**(code **)(**pplVar1 + 0x10))();
    if (iVar8 == 0) {
      if (param_1[9] == 0) {
        local_res20 = 0x118;
        plVar13 = (longlong *)(**(code **)(*plVar14 + 0x18))(plVar14,&local_res20,param_1 + 3,0);
        param_1[9] = (longlong)plVar13;
        (**(code **)(*plVar13 + 0x88))(plVar13,1);
      }
      local_res10[0] = 0;
      plVar13 = param_1 + 10;
      if (param_1[10] == 0) {
        plVar14 = (longlong *)(**(code **)(*plVar14 + 0x70))(plVar14,local_88,0,0);
        local_c0 = (longlong *)plVar14[1];
        local_c8 = *plVar14;
        if (local_c0 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
          UNLOCK();
        }
        if (plVar13 != &local_c8) {
          *plVar13 = local_c8;
          local_c8 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xb,&local_c0);
        }
        plVar14 = local_c0;
        if (local_c0 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_c0 + 1;
          lVar5 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_c0)(local_c0);
            LOCK();
            piVar2 = (int *)((longlong)plVar14 + 0xc);
            iVar8 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*local_c0 + 8))(local_c0,1);
            }
          }
        }
        if (local_80 != (longlong *)0x0) {
          LOCK();
          plVar14 = local_80 + 1;
          lVar5 = *plVar14;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_80)(local_80);
            LOCK();
            piVar2 = (int *)((longlong)local_80 + 0xc);
            iVar8 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*local_80 + 8))(local_80,1);
            }
          }
        }
      }
      QueryPerformanceCounter(&local_b0);
      iVar8 = (int)param_1[6];
      if ((double)((float)iVar8 * 0.001) <
          ((double)local_b0.QuadPart * DAT_1468b02f8 + 16777216.0) - (double)param_1[0xc]) {
        if ((int)param_1[0xd] < *(int *)((longlong)param_1 + 0x2c)) {
          *(undefined1 *)param_1[0x11] = 0xff;
          *(undefined1 *)(param_1[0x11] + 1) = 0xff;
          *(char *)(param_1[0x11] + 2) = (char)param_1[0xd];
          QueryPerformanceCounter(&local_a8);
          dVar17 = (double)local_a8.QuadPart * DAT_1468b02f8 + 16777216.0;
          local_a0 = dVar17;
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)*(int *)((longlong)param_1 + 0x7c) + param_1[0x11]),
                     &local_a0,(longlong)(int)param_1[0x10]);
          local_res8[0] = 0;
          plVar11 = (longlong *)(**(code **)(**pplVar1 + 0x18))();
          plVar14 = (longlong *)*plVar13;
          puVar15 = (undefined8 *)(**(code **)(*plVar11 + 0x68))(plVar11,local_78,0);
          if (*(int *)(puVar15 + 1) == 0) {
            puVar16 = &DAT_143f3eda8;
          }
          else {
            puVar16 = (undefined2 *)*puVar15;
          }
          (**(code **)(*plVar14 + 8))(plVar14,puVar16,local_res8);
          if (local_78[0] != 0) {
            FMemory::Free();
          }
          (**(code **)(*(longlong *)*plVar13 + 0x30))((longlong *)*plVar13,(int)param_1[5]);
          (**(code **)(*(longlong *)param_1[9] + 0x48))
                    ((longlong *)param_1[9],param_1[0x11],*(undefined4 *)((longlong)param_1 + 0x84),
                     local_res10,*plVar13);
          *(int *)(param_1 + 0xd) = (int)param_1[0xd] + 1;
          param_1[0xc] = (longlong)dVar17;
        }
        else {
          iVar3 = (int)param_1[0xf];
          if (0 < iVar3) {
            iVar8 = (int)(((double)param_1[0xe] / (double)iVar3) * 1000.0);
          }
          *(int *)(param_1 + 0x15) = iVar8;
          *(int *)((longlong)param_1 + 0xac) =
               (int)((1.0 - (float)iVar3 / (float)(int)param_1[0xd]) * 100.0);
        }
      }
      cVar7 = (**(code **)(*(longlong *)param_1[9] + 0x58))
                        ((longlong *)param_1[9],param_1[0x13],
                         *(undefined4 *)((longlong)param_1 + 0x84),local_res10,*plVar13,0);
      while ((cVar7 != '\0' && (0 < local_res10[0]))) {
        iVar8 = *(int *)((longlong)param_1 + 0x84);
        if ((local_res10[0] == iVar8) &&
           (((pcVar4 = (char *)param_1[0x13], *pcVar4 == '\0' && (pcVar4[1] == '\0')) &&
            ((uint)(byte)pcVar4[2] == (int)param_1[0xd] - 1U)))) {
          lVar6 = param_1[0x10];
          iVar3 = *(int *)((longlong)param_1 + 0x7c);
          lVar5 = (longlong)iVar3 + (longlong)(int)lVar6;
          iVar9 = _guard_xfg_dispatch_icall_nop
                            (pcVar4 + lVar5,(void *)(param_1[0x11] + lVar5),
                             (longlong)*(int *)((longlong)param_1 + 0x34));
          if (iVar9 == 0) {
            local_b8 = 0.0;
            _guard_xfg_dispatch_icall_nop(&local_b8,pcVar4 + iVar3,(longlong)(int)lVar6);
            *(int *)(param_1 + 0xf) = (int)param_1[0xf] + 1;
            QueryPerformanceCounter(&local_98);
            dVar17 = (double)local_98.QuadPart * DAT_1468b02f8;
            param_1[0xc] = 0;
            param_1[0xe] = (longlong)(((dVar17 + 16777216.0) - local_b8) + (double)param_1[0xe]);
            iVar8 = *(int *)((longlong)param_1 + 0x84);
          }
        }
        cVar7 = (**(code **)(*(longlong *)param_1[9] + 0x58))
                          ((longlong *)param_1[9],param_1[0x13],iVar8,local_res10,*plVar13,0);
      }
    }
    else {
      *(int *)(param_1 + 0x15) = (int)param_1[6];
      *(undefined4 *)((longlong)param_1 + 0xac) = 100;
    }
  }
  return;
}



// FUNCTION 140e09e10 FUN_140e09e10 body=397 status=ok
// SIG undefined FUN_140e09e10(void)

void FUN_140e09e10(longlong param_1,float param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *local_res8;
  
  param_2 = *(float *)(param_1 + 100) - param_2;
  *(float *)(param_1 + 100) = param_2;
  if (param_2 <= 0.0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_14686fcd0) &&
       (_Init_thread_header(&DAT_14686fcd0), DAT_14686fcd0 == -1)) {
      if (DAT_146b33f38 == 0) {
        FUN_142d7ebe0();
      }
      DAT_14686fcc8 = *(longlong *)(DAT_146b33f38 + 0xe0);
      _Init_thread_footer(&DAT_14686fcd0);
    }
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(DAT_14686fcc8 + 0x118);
    puVar6 = *(undefined8 **)(param_1 + 0x40);
    puVar1 = puVar6 + *(int *)(param_1 + 0x48);
    for (; puVar6 != puVar1; puVar6 = puVar6 + 1) {
      plVar2 = (longlong *)*puVar6;
      cVar4 = (**(code **)(*plVar2 + 0x298))(plVar2);
      if (cVar4 != '\0') {
        (**(code **)(*plVar2 + 0x2a0))(plVar2);
        break;
      }
    }
  }
  if (0 < *(int *)(param_1 + 0x28)) {
    iVar5 = *(int *)(param_1 + 0x28);
    plVar2 = *(longlong **)(param_1 + 0x20);
    plVar3 = (longlong *)*plVar2;
    if (iVar5 + -1 != 0) {
      _guard_xfg_dispatch_icall_nop(plVar2,plVar2 + 1,(longlong)(iVar5 + -1) << 3);
      iVar5 = *(int *)(param_1 + 0x28);
    }
    *(int *)(param_1 + 0x28) = iVar5 + -1;
    TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0x20);
    if (plVar3 != (longlong *)0x0) {
      local_res8 = plVar3;
      (**(code **)(*plVar3 + 0x2d0))(plVar3);
      TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
      AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 0x50,&local_res8);
      iVar5 = *(int *)(param_1 + 0x38);
      *(int *)(param_1 + 0x38) = iVar5 + 1;
      if (*(int *)(param_1 + 0x3c) < iVar5 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x30,iVar5);
      }
      *(longlong **)(*(longlong *)(param_1 + 0x30) + (longlong)iVar5 * 8) = plVar3;
    }
  }
  return;
}



// FUNCTION 140e09ff0 FUN_140e09ff0 body=603 status=ok
// SIG undefined FUN_140e09ff0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e09ff0(longlong param_1,float param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  float fVar4;
  undefined1 auStack_118 [32];
  longlong local_f8 [4];
  longlong *local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 *local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 *local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  plVar3 = (longlong *)0x0;
  if ((0.0 < *(float *)(param_1 + 300)) &&
     (fVar4 = *(float *)(param_1 + 300) - param_2, *(float *)(param_1 + 300) = fVar4, fVar4 <= 0.0))
  {
    plVar2 = plVar3;
    if (*(longlong *)(param_1 + 0x158) != 0) {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x158) + 0xf8);
    }
    if (plVar2 != (longlong *)0x0) {
      *(undefined4 *)(param_1 + 0x150) = 3;
      FUN_140de7700();
    }
  }
  if (((*(longlong *)(param_1 + 0x440) != 0) && (*(char *)(param_1 + 0x48d) != '\0')) &&
     (param_2 = *(float *)(param_1 + 0x488) - param_2, *(float *)(param_1 + 0x488) = param_2,
     param_2 <= 0.0)) {
    plVar2 = plVar3;
    if (*(longlong *)(param_1 + 0x158) != 0) {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x158) + 0x88);
    }
    if (plVar2 != (longlong *)0x0) {
      local_f8[2] = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_f8[3] = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = 0;
      uStack_a0 = 0x400;
      local_98 = 0;
      local_90 = 0;
      plVar1 = (longlong *)operator_new(0x28);
      if (plVar1 != (longlong *)0x0) {
        *plVar1 = 0;
        plVar1[1] = 0x10000;
        plVar1[2] = 0;
        plVar1[3] = 0;
        plVar1[4] = 0;
        plVar3 = plVar1;
      }
      local_88 = &local_78;
      local_78 = 0;
      local_70 = 0x3000000000000;
      local_d8 = plVar3;
      local_d0 = plVar3;
      local_80 = plVar3;
      (**(code **)(*(longlong *)(param_1 + -0x30) + 0x2f0))((longlong *)(param_1 + -0x30),&local_88)
      ;
      local_68 = &local_58;
      local_50 = 0x3000000000000;
      local_58 = 0;
      local_60 = plVar3;
      FUN_142ab6bc0(&local_88,&DAT_144564b24,&local_68);
      local_f8[0] = 0;
      local_f8[1] = 0xc;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_f8,0);
      FGenericPlatformString::Memcpy(local_f8[0],L"UpdateEvent",0x18);
      (**(code **)(*plVar2 + 0x98))(plVar2,local_f8,1,&local_68);
      if (local_f8[0] != 0) {
        FMemory::Free();
      }
      rapidjson::
      GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
      ::
      ~GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
                (local_f8 + 2);
    }
    *(undefined4 *)(param_1 + 0x488) = *(undefined4 *)(param_1 + 0x1ac);
  }
  return;
}



// FUNCTION 140e0a250 FUN_140e0a250 body=133 status=ok
// SIG undefined FUN_140e0a250(void)

void FUN_140e0a250(longlong param_1,float param_2)

{
  longlong lVar1;
  float fVar2;
  
  if (0.0 < *(float *)(param_1 + 300)) {
    fVar2 = *(float *)(param_1 + 300) - param_2;
    *(float *)(param_1 + 300) = fVar2;
    if (fVar2 <= 0.0) {
      lVar1 = 0;
      if (*(longlong *)(param_1 + 0x158) != 0) {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x158) + 0xf8);
      }
      if (lVar1 != 0) {
        *(undefined4 *)(param_1 + 0x150) = 3;
        FUN_140de7700();
      }
    }
  }
  if ((*(longlong *)(param_1 + 0x240) != 0) && (0 < *(int *)(param_1 + 0x250))) {
    FUN_1411fd550(*(longlong *)(param_1 + 0x240),param_2);
  }
  return;
}



// FUNCTION 140e0a2e0 FUN_140e0a2e0 body=795 status=ok
// SIG undefined FUN_140e0a2e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e0a2e0(longlong param_1,float param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  float fVar6;
  undefined1 auStack_118 [32];
  longlong local_f8 [4];
  longlong *local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 *local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 *local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  plVar5 = (longlong *)0x0;
  if ((0.0 < *(float *)(param_1 + 300)) &&
     (fVar6 = *(float *)(param_1 + 300) - param_2, *(float *)(param_1 + 300) = fVar6, fVar6 <= 0.0))
  {
    plVar4 = plVar5;
    if (*(longlong *)(param_1 + 0x158) != 0) {
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x158) + 0xf8);
    }
    if (plVar4 != (longlong *)0x0) {
      *(undefined4 *)(param_1 + 0x150) = 3;
      FUN_140de7700();
    }
  }
  lVar1 = *(longlong *)(param_1 + 0x158);
  if ((lVar1 != 0) &&
     (cVar2 = (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x10))(lVar1 + 0x28), cVar2 != '\0')) {
    if ((*(float *)(param_1 + 0x4b8) <= 0.0) || (*(char *)(param_1 + 0x154) != '\0')) {
      if (*(char *)(param_1 + 0x4bc) == '\0') {
        fVar6 = *(float *)(param_1 + 0x4a8) - param_2;
        *(float *)(param_1 + 0x4a8) = fVar6;
        if ((fVar6 <= 0.0) || (*(float *)(param_1 + 300) <= *(float *)(param_1 + 0x430) + 5.0)) {
          *(undefined4 *)(param_1 + 0x4b8) = *(undefined4 *)(param_1 + 0x400);
          *(undefined1 *)(param_1 + 0x4bc) = 1;
          *(undefined1 *)(*(longlong *)(param_1 + 0x158) + 0x58) = 1;
          FUN_140e08390(param_1 + -0x30);
        }
      }
      if ((0 < *(int *)(param_1 + 0x4a0)) &&
         (param_2 = *(float *)(param_1 + 0x530) - param_2, *(float *)(param_1 + 0x530) = param_2,
         param_2 <= 0.0)) {
        plVar4 = plVar5;
        if (*(longlong *)(param_1 + 0x158) != 0) {
          plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x158) + 0x88);
        }
        if (plVar4 != (longlong *)0x0) {
          local_f8[2] = 0;
          local_c8 = 0;
          uStack_c0 = 0;
          local_f8[3] = 0;
          local_b8 = 0;
          uStack_b0 = 0;
          local_a8 = 0;
          uStack_a0 = 0x400;
          local_98 = 0;
          local_90 = 0;
          plVar3 = (longlong *)operator_new(0x28);
          if (plVar3 != (longlong *)0x0) {
            *plVar3 = 0;
            plVar3[1] = 0x10000;
            plVar3[2] = 0;
            plVar3[3] = 0;
            plVar3[4] = 0;
            plVar5 = plVar3;
          }
          local_88 = &local_78;
          local_78 = 0;
          local_70 = 0x3000000000000;
          local_d8 = plVar5;
          local_d0 = plVar5;
          local_80 = plVar5;
          (**(code **)(*(longlong *)(param_1 + -0x30) + 0x2f0))
                    ((longlong *)(param_1 + -0x30),&local_88);
          local_68 = &local_58;
          local_50 = 0x3000000000000;
          local_58 = 0;
          local_60 = plVar5;
          FUN_142ab6bc0(&local_88,&DAT_1445653e4,&local_68);
          local_f8[0] = 0;
          local_f8[1] = 0xc;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_f8,0);
          FGenericPlatformString::Memcpy(local_f8[0],L"UpdateEvent",0x18);
          (**(code **)(*plVar4 + 0x98))(plVar4,local_f8,1,&local_68);
          if (local_f8[0] != 0) {
            FMemory::Free();
          }
          rapidjson::
          GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
          ::
          ~GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
                    (local_f8 + 2);
        }
        *(undefined4 *)(param_1 + 0x530) = *(undefined4 *)(param_1 + 0x3f4);
      }
    }
    else {
      param_2 = *(float *)(param_1 + 0x4b8) - param_2;
      *(float *)(param_1 + 0x4b8) = param_2;
      if (param_2 <= 0.0) {
        *(undefined1 *)(*(longlong *)(param_1 + 0x158) + 0x58) = 0;
      }
    }
  }
  return;
}



// FUNCTION 140e0a600 FUN_140e0a600 body=154 status=ok
// SIG undefined FUN_140e0a600(void)

void FUN_140e0a600(longlong param_1,float param_2)

{
  float fVar1;
  
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1411fd550();
  }
  if (*(char *)(param_1 + 0x68) == '\x02') {
    fVar1 = *(float *)(param_1 + 0x16c) - param_2;
    *(float *)(param_1 + 0x38) = param_2 + *(float *)(param_1 + 0x38);
    *(float *)(param_1 + 0x16c) = fVar1;
    if (fVar1 <= 0.0) {
      fVar1 = fVar1 + *(float *)(param_1 + 0x160);
      *(float *)(param_1 + 0x16c) = fVar1;
      if ((*(longlong *)(param_1 + 0xd0) != 0) &&
         (0 < *(int *)(*(longlong *)(param_1 + 0xd0) + 0x80))) {
        *(float *)(param_1 + 0x16c) = fVar1 + *(float *)(param_1 + 0x164);
      }
      FUN_140e0c280(param_1 + -0x28);
    }
  }
  return;
}



// FUNCTION 140e0a6a0 FUN_140e0a6a0 body=2646 status=ok
// SIG undefined FUN_140e0a6a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140e0a6a0(longlong param_1)

{
  undefined8 **ppuVar1;
  longlong *plVar2;
  int *piVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 uVar12;
  int iVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined8 **ppuVar16;
  longlong lVar17;
  undefined1 auStack_208 [32];
  undefined1 local_1e8 [4];
  int local_1e4;
  int local_1e0;
  longlong local_1d8;
  int local_1d0;
  int local_1c8;
  undefined8 *local_1c0;
  longlong *local_1b8;
  undefined8 *local_1b0;
  longlong *local_1a8;
  longlong local_1a0 [6];
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  longlong *local_160;
  longlong local_158;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 *local_140;
  longlong *plStack_138;
  longlong *local_130;
  longlong *local_128;
  longlong local_120 [2];
  longlong *local_110;
  longlong local_108;
  longlong *local_100;
  longlong local_f8;
  longlong *local_f0;
  longlong local_e8;
  longlong *local_e0;
  longlong local_d8;
  longlong *local_d0;
  longlong local_c8;
  longlong *local_c0;
  longlong local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [16];
  undefined1 *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  plVar15 = *(longlong **)(param_1 + 0x78);
  local_1e0 = 0;
  local_110 = plVar15 + (longlong)*(int *)(param_1 + 0x80) * 6;
  local_158 = param_1;
  if (plVar15 != local_110) {
    do {
      iVar13 = 0;
      lVar11 = plVar15[4];
      lVar17 = lVar11 + (longlong)(int)plVar15[5] * 0x40;
      local_1d0 = 0;
      local_1e4 = 0;
      if (lVar11 != lVar17) {
        ppuVar16 = (undefined8 **)(lVar11 + 0x30);
        local_1d8 = lVar17;
        local_160 = plVar15;
        iVar8 = iVar13;
        do {
          ppuVar1 = ppuVar16 + 1;
          if ((*(int *)((longlong)ppuVar16 + -0xc) == -1) && (*(int *)(ppuVar16 + -1) == -1)) {
            if (*ppuVar16 == (undefined8 *)0x0) {
              local_150 = (undefined4)plVar15[3];
              uStack_14c = (undefined4)plVar15[2];
              uStack_148 = *(undefined4 *)((longlong)plVar15 + 0x14);
              uStack_144 = *(undefined4 *)((longlong)plVar15 + 0x1c);
              if (*(int *)(ppuVar16 + -2) == 1) {
                puVar9 = (undefined8 *)operator_new(0xb0);
                if (puVar9 == (undefined8 *)0x0) {
                  puVar9 = (undefined8 *)0x0;
                }
                else {
                  *puVar9 = &PTR_FUN_1445735a0;
                  FString::FString(puVar9 + 1,lVar11);
                  FString::FString(puVar9 + 3);
                  plVar15 = puVar9 + 0x11;
                  plVar10 = puVar9 + 0x13;
                  *(undefined4 *)(puVar9 + 5) = local_150;
                  *(undefined4 *)((longlong)puVar9 + 0x2c) = uStack_14c;
                  *(undefined4 *)(puVar9 + 6) = uStack_148;
                  *(undefined4 *)((longlong)puVar9 + 0x34) = uStack_144;
                  puVar9[7] = 0;
                  puVar9[8] = 0;
                  puVar9[9] = 0;
                  puVar9[10] = 0;
                  puVar9[0xb] = 0;
                  puVar9[0xc] = 0;
                  *(undefined4 *)(puVar9 + 0xd) = 0;
                  puVar9[0xe] = 0;
                  *(undefined4 *)(puVar9 + 0xf) = 0;
                  *plVar15 = 0;
                  puVar9[0x12] = 0;
                  *plVar10 = 0;
                  puVar9[0x14] = 0;
                  puVar9[0x15] = 0xffffffffffffffff;
                  local_1c8 = *(int *)((longlong)puVar9 + 0x34) + 0xb;
                  *(undefined4 *)((longlong)puVar9 + 0x7c) = 3;
                  *(int *)((longlong)puVar9 + 0x84) = local_1c8;
                  *(undefined4 *)(puVar9 + 0x10) = 8;
                  iVar13 = *(int *)(puVar9 + 0x12);
                  iVar8 = local_1c8 + iVar13;
                  *(int *)(puVar9 + 0x12) = iVar8;
                  if (*(int *)((longlong)puVar9 + 0x94) < iVar8) {
                    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar15);
                  }
                  _guard_xfg_dispatch_icall_nop
                            ((void *)((longlong)iVar13 + *plVar15),0,(longlong)local_1c8);
                  iVar13 = *(int *)((longlong)puVar9 + 0x84);
                  iVar8 = *(int *)(puVar9 + 0x14);
                  iVar7 = iVar8 + iVar13;
                  *(int *)(puVar9 + 0x14) = iVar7;
                  if (*(int *)((longlong)puVar9 + 0xa4) < iVar7) {
                    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar10);
                  }
                  _guard_xfg_dispatch_icall_nop
                            ((void *)((longlong)iVar8 + *plVar10),0,(longlong)iVar13);
                  plVar15 = local_160;
                  iVar13 = local_1d0;
                }
                plVar10 = (longlong *)operator_new(0x18);
                if (plVar10 == (longlong *)0x0) {
                  plVar10 = (longlong *)0x0;
                }
                else {
                  *(undefined4 *)(plVar10 + 1) = 1;
                  *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
                  *plVar10 = (longlong)&PTR_FUN_143f3f2e0;
                  plVar10[2] = (longlong)puVar9;
                }
                local_1b0 = puVar9;
                local_1a8 = plVar10;
                SharedPointerInternals::EnableSharedFromThis(&local_1b0,puVar9,puVar9);
                if (ppuVar16 != &local_1b0) {
                  *ppuVar16 = puVar9;
                  local_1b0 = (undefined8 *)0x0;
                  SharedPointerInternals::FSharedReferencer<1>::operator=(ppuVar1,&local_1a8);
                  plVar10 = local_1a8;
                }
              }
              else {
                if (*(int *)(ppuVar16 + -2) != 2) goto LAB_140e0aa64;
                puVar9 = (undefined8 *)operator_new(0x48);
                if (puVar9 == (undefined8 *)0x0) {
                  puVar9 = (undefined8 *)0x0;
                }
                else {
                  *puVar9 = &PTR_FUN_1445735c0;
                  *(undefined4 *)(puVar9 + 1) = local_150;
                  *(undefined4 *)((longlong)puVar9 + 0xc) = uStack_14c;
                  *(undefined4 *)(puVar9 + 2) = uStack_148;
                  *(undefined4 *)((longlong)puVar9 + 0x14) = uStack_144;
                  FString::FString(puVar9 + 3,lVar11);
                  *(undefined4 *)(puVar9 + 5) = 0;
                  puVar9[6] = 0;
                  *(undefined4 *)(puVar9 + 7) = 0;
                  *(undefined4 *)(puVar9 + 8) = 0xffffffff;
                  *(undefined4 *)((longlong)puVar9 + 0x3c) = *(undefined4 *)(puVar9 + 2);
                  *(undefined4 *)(puVar9 + 8) = 100;
                }
                plVar10 = (longlong *)operator_new(0x18);
                if (plVar10 == (longlong *)0x0) {
                  plVar10 = (longlong *)0x0;
                }
                else {
                  *(undefined4 *)(plVar10 + 1) = 1;
                  *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
                  *plVar10 = (longlong)&PTR_FUN_143f3f2e0;
                  plVar10[2] = (longlong)puVar9;
                }
                local_1c0 = puVar9;
                local_1b8 = plVar10;
                SharedPointerInternals::EnableSharedFromThis(&local_1c0,puVar9,puVar9);
                if (ppuVar16 != &local_1c0) {
                  *ppuVar16 = puVar9;
                  local_1c0 = (undefined8 *)0x0;
                  SharedPointerInternals::FSharedReferencer<1>::operator=(ppuVar1,&local_1b8);
                  plVar10 = local_1b8;
                }
              }
              lVar17 = local_1d8;
              iVar8 = local_1e4;
              if (plVar10 != (longlong *)0x0) {
                LOCK();
                plVar2 = plVar10 + 1;
                lVar14 = *plVar2;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)lVar14 == 1) {
                  (**(code **)*plVar10)(plVar10);
                  LOCK();
                  piVar3 = (int *)((longlong)plVar10 + 0xc);
                  iVar7 = *piVar3;
                  *piVar3 = *piVar3 + -1;
                  UNLOCK();
                  lVar17 = local_1d8;
                  iVar8 = local_1e4;
                  if (iVar7 == 1) {
                    (**(code **)(*plVar10 + 8))(plVar10,1);
                    lVar17 = local_1d8;
                    iVar8 = local_1e4;
                  }
                }
              }
            }
LAB_140e0aa64:
            cVar6 = (**(code **)(**ppuVar16 + 0x10))();
            lVar14 = **ppuVar16;
            if (cVar6 == '\0') {
              (**(code **)(lVar14 + 8))();
              local_1e0 = local_1e0 + 1;
            }
            else {
              (**(code **)(lVar14 + 0x18))(*ppuVar16,&local_170);
              local_1d0 = iVar13 + 1;
              *(undefined4 *)((longlong)ppuVar16 + -0xc) = local_170;
              *(undefined4 *)(ppuVar16 + -1) = local_16c;
              iVar13 = local_1d0;
            }
          }
          else {
            local_140 = (undefined8 *)0x0;
            plStack_138 = (longlong *)0x0;
            if (ppuVar16 != &local_140) {
              *ppuVar16 = (undefined8 *)0x0;
              SharedPointerInternals::FSharedReferencer<1>::operator=(ppuVar1,&plStack_138);
              plVar10 = plStack_138;
              if (plStack_138 != (longlong *)0x0) {
                LOCK();
                plVar2 = plStack_138 + 1;
                lVar14 = *plVar2;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)lVar14 == 1) {
                  (**(code **)*plStack_138)(plStack_138);
                  LOCK();
                  piVar3 = (int *)((longlong)plVar10 + 0xc);
                  iVar7 = *piVar3;
                  *piVar3 = *piVar3 + -1;
                  UNLOCK();
                  lVar17 = local_1d8;
                  if (iVar7 == 1) {
                    (**(code **)(*plStack_138 + 8))(plStack_138,1);
                    lVar17 = local_1d8;
                  }
                }
              }
            }
            local_1e4 = iVar8 + 1;
            iVar8 = local_1e4;
          }
          uVar5 = local_1e8[0];
          lVar11 = lVar11 + 0x40;
          ppuVar16 = ppuVar16 + 8;
        } while (lVar11 != lVar17);
        if ((0 < iVar13) && (iVar8 + iVar13 == (int)plVar15[5])) {
          local_1e8[0] = 0;
          FUN_140ddaa00(plVar15[4],(longlong)(int)plVar15[5],uVar5,local_1e8);
          lVar11 = *plVar15;
          if (lVar11 != 0) {
            if ((0 < (int)plVar15[5]) && (*(int *)(plVar15[4] + 0x28) < 100)) {
              local_100 = (longlong *)plVar15[1];
              if (local_100 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_100 + 1) = (int)local_100[1] + 1;
                UNLOCK();
              }
              local_108 = lVar11;
              lVar11 = FUN_142b45e90();
              FUN_142b4a990(*(undefined8 *)(lVar11 + 0x18),&local_e8);
              plVar10 = local_100;
              if (local_100 != (longlong *)0x0) {
                LOCK();
                plVar2 = local_100 + 1;
                lVar11 = *plVar2;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)lVar11 == 1) {
                  (**(code **)*local_100)(local_100);
                  LOCK();
                  piVar3 = (int *)((longlong)plVar10 + 0xc);
                  iVar13 = *piVar3;
                  *piVar3 = *piVar3 + -1;
                  UNLOCK();
                  if (iVar13 == 1) {
                    (**(code **)(*plVar10 + 8))(plVar10,1);
                  }
                }
              }
              lVar11 = local_e8;
              if (local_e8 != 0) {
                FName::FName(local_98,L"Crossroad",1);
                FUN_142b4a0e0(lVar11,&local_f8);
                if (local_f8 != 0) {
                  local_1a0[1] = 0x17;
                  local_1a0[0] = 0;
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1a0,0);
                  FGenericPlatformString::Memcpy(local_1a0[0],L"UseDataCenterQosRegion");
                  cVar6 = FUN_142afaf00(local_f8,local_1a0);
                  if (local_1a0[0] != 0) {
                    FMemory::Free();
                  }
                  if (cVar6 != '\0') {
                    FUN_142b6d7b0(local_e8,plVar15[4] + 0x10);
                  }
                }
                plVar10 = local_f0;
                if (local_f0 != (longlong *)0x0) {
                  LOCK();
                  plVar2 = local_f0 + 1;
                  lVar11 = *plVar2;
                  *(int *)plVar2 = (int)*plVar2 + -1;
                  UNLOCK();
                  if ((int)lVar11 == 1) {
                    (**(code **)*local_f0)(local_f0);
                    LOCK();
                    piVar3 = (int *)((longlong)plVar10 + 0xc);
                    iVar13 = *piVar3;
                    *piVar3 = *piVar3 + -1;
                    UNLOCK();
                    if (iVar13 == 1) {
                      (**(code **)(*plVar10 + 8))(plVar10,1);
                    }
                  }
                }
              }
              plVar10 = local_e0;
              if (local_e0 != (longlong *)0x0) {
                LOCK();
                plVar2 = local_e0 + 1;
                lVar11 = *plVar2;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)lVar11 == 1) {
                  (**(code **)*local_e0)(local_e0);
                  LOCK();
                  piVar3 = (int *)((longlong)plVar10 + 0xc);
                  iVar13 = *piVar3;
                  *piVar3 = *piVar3 + -1;
                  UNLOCK();
                  if (iVar13 == 1) {
                    (**(code **)(*plVar10 + 8))(plVar10,1);
                  }
                }
              }
            }
            local_120[0] = 0;
            local_120[1] = 0;
            local_168 = 0;
            FUN_1404cf890(&local_130,0);
            if (local_130 != (longlong *)0x0) {
              local_d8 = *plVar15;
              local_d0 = (longlong *)plVar15[1];
              if (local_d0 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
                UNLOCK();
              }
              (**(code **)(*local_130 + 0xb8))(local_130,&local_d8);
              plVar10 = local_d0;
              if (local_d0 != (longlong *)0x0) {
                LOCK();
                plVar2 = local_d0 + 1;
                lVar11 = *plVar2;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)lVar11 == 1) {
                  (**(code **)*local_d0)(local_d0);
                  LOCK();
                  piVar3 = (int *)((longlong)plVar10 + 0xc);
                  iVar13 = *piVar3;
                  *piVar3 = *piVar3 + -1;
                  UNLOCK();
                  if (iVar13 == 1) {
                    (**(code **)(*plVar10 + 8))(plVar10,1);
                  }
                }
              }
            }
            uVar12 = FUN_142b45ee0();
            cVar6 = FUN_142b54cf0(uVar12);
            if (cVar6 != '\0') {
              lVar11 = plVar15[4];
              lVar17 = (longlong)(int)plVar15[5] * 0x40 + lVar11;
              if (lVar11 != lVar17) {
                uStack_a0 = local_120;
                do {
                  local_58 = (longlong *)0x0;
                  local_48 = 0;
                  local_a8 = lVar11;
                  puVar9 = (undefined8 *)FUN_140438ef0(0x18,local_78);
                  if (puVar9 != (undefined8 *)0x0) {
                    *puVar9 = &PTR_FUN_143f77c18;
                    *(undefined4 *)(puVar9 + 1) = (undefined4)local_a8;
                    *(undefined4 *)((longlong)puVar9 + 0xc) = local_a8._4_4_;
                    *(undefined4 *)(puVar9 + 2) = (undefined4)uStack_a0;
                    *(undefined4 *)((longlong)puVar9 + 0x14) = uStack_a0._4_4_;
                  }
                  local_1a0[4] = 0;
                  local_88[0] = &LAB_140de4d50;
                  local_1a0[5] = 0xe;
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1a0 + 4,0);
                  FGenericPlatformString::Memcpy(local_1a0[4],L"DataCenterQoS",0x1c);
                  local_1a0[2] = 0;
                  local_1a0[3] = 3;
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1a0 + 2,0);
                  FGenericPlatformString::Memcpy(local_1a0[2],&DAT_144558124,6);
                  local_c8 = *plVar15;
                  local_c0 = (longlong *)plVar15[1];
                  if (local_c0 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
                    UNLOCK();
                  }
                  FUN_142b62c30(&local_c8,local_1a0 + 2,local_1a0 + 4,local_88);
                  plVar10 = local_c0;
                  if (local_c0 != (longlong *)0x0) {
                    LOCK();
                    plVar2 = local_c0 + 1;
                    lVar14 = *plVar2;
                    *(int *)plVar2 = (int)*plVar2 + -1;
                    UNLOCK();
                    if ((int)lVar14 == 1) {
                      (**(code **)*local_c0)(local_c0);
                      LOCK();
                      piVar3 = (int *)((longlong)plVar10 + 0xc);
                      iVar13 = *piVar3;
                      *piVar3 = *piVar3 + -1;
                      UNLOCK();
                      if (iVar13 == 1) {
                        (**(code **)(*plVar10 + 8))(plVar10,1);
                      }
                    }
                  }
                  if (local_1a0[2] != 0) {
                    FMemory::Free();
                  }
                  if (local_1a0[4] != 0) {
                    FMemory::Free();
                  }
                  if (local_48 != 0) {
                    plVar10 = local_78;
                    if (local_58 != (longlong *)0x0) {
                      plVar10 = local_58;
                    }
                    if (plVar10 != (longlong *)0x0) {
                      (**(code **)(*plVar10 + 0x10))(plVar10,0);
                    }
                  }
                  if (local_58 != (longlong *)0x0) {
                    FMemory::Free();
                  }
                  lVar11 = lVar11 + 0x40;
                } while (lVar11 != lVar17);
              }
            }
            plVar10 = local_128;
            if (local_128 != (longlong *)0x0) {
              LOCK();
              plVar2 = local_128 + 1;
              lVar11 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar11 == 1) {
                (**(code **)*local_128)(local_128);
                LOCK();
                piVar3 = (int *)((longlong)plVar10 + 0xc);
                iVar13 = *piVar3;
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                if (iVar13 == 1) {
                  (**(code **)(*local_128 + 8))(local_128,1);
                }
              }
            }
            if (local_120[0] != 0) {
              FMemory::Free();
            }
          }
          lVar11 = local_158;
          local_b8 = *plVar15;
          local_b0 = (longlong *)plVar15[1];
          if (local_b0 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_b0 + 1) = (int)local_b0[1] + 1;
            UNLOCK();
          }
          bVar4 = false;
          *(int *)(local_158 + 0x24) = *(int *)(local_158 + 0x24) + 1;
          iVar13 = *(int *)(local_158 + 0x24);
          iVar8 = *(int *)(local_158 + 0x18) + -1;
          lVar17 = (longlong)iVar8;
          if (-1 < iVar8) {
            lVar14 = lVar17 << 4;
            bVar4 = false;
            do {
              if (((*(int *)(lVar14 + 8 + *(longlong *)(lVar11 + 0x10)) == 0) ||
                  (plVar10 = *(longlong **)(lVar14 + *(longlong *)(lVar11 + 0x10)),
                  plVar10 == (longlong *)0x0)) ||
                 (cVar6 = (**(code **)(*plVar10 + 0x40))(plVar10,&local_b8), cVar6 == '\0')) {
                bVar4 = true;
              }
              lVar14 = lVar14 + -0x10;
              lVar17 = lVar17 + -1;
            } while (-1 < lVar17);
            iVar13 = *(int *)(lVar11 + 0x24);
          }
          *(int *)(lVar11 + 0x24) = iVar13 + -1;
          if (bVar4) {
            FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar11 + 0x10,0);
          }
          plVar10 = local_b0;
          if (local_b0 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_b0 + 1;
            lVar11 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)*local_b0)(local_b0);
              LOCK();
              piVar3 = (int *)((longlong)plVar10 + 0xc);
              iVar13 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar13 == 1) {
                (**(code **)(*plVar10 + 8))(plVar10,1);
              }
            }
          }
        }
      }
      plVar15 = plVar15 + 6;
    } while (plVar15 != local_110);
    param_1 = local_158;
    if (local_1e0 != 0) {
      return 1;
    }
  }
  *(undefined8 *)(param_1 + 0x88) = 0;
  return 0;
}



// FUNCTION 140e0b100 FUN_140e0b100 body=238 status=ok
// SIG undefined FUN_140e0b100(void)

undefined8 FUN_140e0b100(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uStack_44;
  undefined8 uStack_30;
  
  if (param_2 == (longlong *)0x0) {
    uStack_30 = 0;
  }
  else {
    uVar1 = (**(code **)(*param_2 + 0x78))(param_2);
    (**(code **)(*param_2 + 0x70))(param_2,2);
    (**(code **)(*param_2 + 0x28))(param_2);
    FUN_140de5760(param_2,0);
    (**(code **)(*param_2 + 0x48))(param_2,0);
    (**(code **)(*param_2 + 0x70))(param_2,uVar1);
    uStack_30 = (**(code **)(*param_2 + 0x40))(param_2);
  }
  uVar2 = (**(code **)(*param_1 + 0x78))(param_1,param_3);
  *param_4 = CONCAT44(uStack_44,0x10);
  param_4[1] = &LAB_140dd8550;
  param_4[2] = &LAB_140dd8560;
  param_4[3] = uStack_30;
  param_4[4] = uVar2;
  return 1;
}



// FUNCTION 140e0b1f0 FUN_140e0b1f0 body=132 status=ok
// SIG undefined FUN_140e0b1f0(void)

undefined8
FUN_140e0b1f0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uStack_34;
  
  uVar1 = FUN_140decea0(param_2);
  uVar2 = (**(code **)(*param_1 + 0x78))(param_1,param_3);
  *param_4 = CONCAT44(uStack_34,0x10);
  param_4[1] = &LAB_140dd8550;
  param_4[2] = &LAB_140dd8570;
  param_4[3] = uVar1;
  param_4[4] = uVar2;
  return 1;
}



// FUNCTION 140e0b280 FUN_140e0b280 body=17 status=ok
// SIG undefined FUN_140e0b280(void)

ulonglong FUN_140e0b280(longlong *param_1)

{
  ulonglong uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x78))();
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 140e0b2a0 FUN_140e0b2a0 body=28 status=ok
// SIG undefined FUN_140e0b2a0(void)

undefined8 FUN_140e0b2a0(longlong *param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(**(code **)(*param_1 + 0x78))();
  *param_3 = *puVar1;
  return 1;
}



// FUNCTION 140e0b2c0 FUN_140e0b2c0 body=99 status=ok
// SIG undefined FUN_140e0b2c0(void)

undefined8
FUN_140e0b2c0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uStack_24;
  
  uVar1 = FUN_140decea0(param_2);
  uVar2 = (**(code **)(*param_1 + 0x78))(param_1,param_3);
  *param_4 = CONCAT44(uStack_24,0x10);
  param_4[1] = uVar1;
  param_4[2] = uVar2;
  return 1;
}



// FUNCTION 140e0b330 FUN_140e0b330 body=410 status=ok
// SIG undefined FUN_140e0b330(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140e0b330(longlong *param_1,undefined8 param_2,void *param_3,ulonglong *param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  undefined2 *puVar6;
  undefined1 auStack_118 [32];
  undefined1 *local_f8 [2];
  undefined1 local_e8 [128];
  undefined1 *local_68;
  undefined1 *local_60;
  int local_58;
  ulonglong local_48;
  ulonglong uVar5;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x78))();
  if (*(int *)(puVar2 + 1) == 0) {
    puVar6 = &DAT_143f3eda8;
  }
  else {
    puVar6 = (undefined2 *)*puVar2;
  }
  local_68 = (undefined1 *)0x0;
  if (puVar6 == (undefined2 *)0x0) {
    local_58 = 0;
    local_60 = (undefined1 *)0x0;
  }
  else {
    uVar4 = 0xffffffffffffffff;
    do {
      uVar5 = uVar4;
      uVar4 = uVar5 + 1;
    } while (puVar6[uVar4] != 0);
    local_f8[0] = (undefined1 *)((ulonglong)local_f8[0] & 0xffffffff00000000);
    FTCHARToUTF8_Convert::Convert_Impl<UE4StringConv_Private::FCountingOutputIterator>
              (local_f8,(int)uVar4 * 4,puVar6,uVar4 & 0xffffffff);
    local_58 = (int)local_f8[0];
    uVar1 = (int)local_f8[0] + 1;
    puVar3 = (undefined1 *)0x0;
    if ((0x80 < uVar1) && (puVar3 = (undefined1 *)0x0, uVar1 != 0)) {
      puVar3 = (undefined1 *)FMemory::Realloc(0,(longlong)(int)uVar1,0);
      local_68 = puVar3;
    }
    local_f8[0] = local_e8;
    if (puVar3 != (undefined1 *)0x0) {
      local_f8[0] = puVar3;
    }
    local_60 = local_f8[0];
    FTCHARToUTF8_Convert::Convert_Impl<char_*>(local_f8,uVar1,puVar6,(int)uVar5 + 2);
  }
  puVar3 = local_68;
  uVar4 = (ulonglong)local_58;
  if ((param_3 != (void *)0x0) && (uVar4 <= *param_4)) {
    _guard_xfg_dispatch_icall_nop(param_3,local_60,uVar4);
  }
  *param_4 = uVar4;
  if (puVar3 != (undefined1 *)0x0) {
    FMemory::Free(puVar3);
  }
  return 1;
}



// FUNCTION 140e0b4d0 FUN_140e0b4d0 body=48 status=ok
// SIG undefined FUN_140e0b4d0(void)

void FUN_140e0b4d0(longlong *param_1,undefined8 param_2,char *param_3,__uint64 *param_4)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x78))();
                    /* WARNING: Could not recover jumptable at 0x000140e0b4f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  cohtml::CoherentToString<bool>::Invoke(*(bool *)uVar1,param_3,param_4);
  return;
}



// FUNCTION 140e0b500 FUN_140e0b500 body=200 status=ok
// SIG undefined FUN_140e0b500(void)

undefined8 FUN_140e0b500(undefined4 *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  bool bVar5;
  wchar_t *pwVar6;
  longlong local_18 [2];
  
  bVar5 = false;
  uVar2 = UEnum::GetPrivateStaticClass();
  lVar3 = FUN_141799410(uVar2,0xffffffffffffffff,L"EClassRepNodeMapping",0);
  if (lVar3 == 0) {
    pwVar6 = L"Not Found!";
  }
  else {
    puVar4 = (undefined8 *)UEnum::GetNameStringByValue(lVar3,local_18,*param_1);
    if (*(int *)(puVar4 + 1) == 0) {
      pwVar6 = L"";
      bVar5 = true;
    }
    else {
      pwVar6 = (wchar_t *)*puVar4;
      bVar5 = true;
    }
  }
  bVar1 = *(byte *)(param_1 + 1);
  FString::PrintfImpl(param_2,
                      L"%s, bAlwaysReplicate %d, bOnlyReplicateToOwner %d, bNetUseOwnerRelevancy %d"
                      ,pwVar6,bVar1 & 1,bVar1 >> 1 & 1,bVar1 >> 2 & 1);
  if ((bVar5) && (local_18[0] != 0)) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140e0b5d0 FUN_140e0b5d0 body=762 status=ok
// SIG undefined FUN_140e0b5d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e0b5d0(undefined8 param_1,longlong *param_2,char *param_3)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  int local_res10 [4];
  undefined1 local_res20 [8];
  longlong local_88;
  undefined8 *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong *local_60;
  undefined8 **local_58;
  
  lVar10 = (longlong)(int)param_2[2];
  if (0 < lVar10) {
    lVar11 = 0x20;
    do {
      lVar3 = *(longlong *)(lVar11 + *param_2);
      local_88 = lVar3;
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::FindId(param_3 + 8,local_res10,lVar3);
      puVar9 = (undefined8 *)0x0;
      if (local_res10[0] != -1) {
        puVar9 = (undefined8 *)(*(longlong *)(param_3 + 8) + (longlong)local_res10[0] * 0x18);
      }
      puVar8 = puVar9 + 1;
      if (puVar9 == (undefined8 *)0x0) {
        puVar8 = (undefined8 *)0x0;
      }
      if (puVar8 == (undefined8 *)0x0) {
        puVar7 = (undefined4 *)FUN_140ded2a0(param_3 + 0x58,*(undefined8 *)(lVar3 + 0x10));
        cVar1 = *param_3;
        puVar8 = (undefined8 *)operator_new();
        if (cVar1 == '\0') {
          if (puVar8 == (undefined8 *)0x0) goto LAB_140e0b7a0;
          *puVar8 = 0;
          puVar8[1] = 0;
          *(undefined4 *)(puVar8 + 2) = 0;
          *(undefined1 *)((longlong)puVar8 + 0x14) = 0;
          puVar8[3] = 0;
          puVar8[4] = 0;
          puVar8[5] = 0;
          uVar2 = puVar7[1];
          uVar4 = puVar7[2];
          uVar5 = puVar7[3];
          *(undefined4 *)(puVar8 + 6) = *puVar7;
          *(undefined4 *)((longlong)puVar8 + 0x34) = uVar2;
          *(undefined4 *)(puVar8 + 7) = uVar4;
          *(undefined4 *)((longlong)puVar8 + 0x3c) = uVar5;
          puVar8[8] = *(undefined8 *)(puVar7 + 4);
          *(undefined4 *)(puVar8 + 9) = puVar7[6];
          puVar8[10] = 0;
          puVar8[0xb] = 0;
          puVar8[0xc] = 2;
          puVar8[0xd] = 0;
          puVar8[0xe] = 0;
          puVar8[0xf] = 2;
          puVar8[0x10] = 0;
          puVar8[0x11] = 0;
          puVar8[0x12] = 2;
        }
        else if (puVar8 == (undefined8 *)0x0) {
LAB_140e0b7a0:
          puVar8 = (undefined8 *)0x0;
        }
        else {
          uVar2 = *(undefined4 *)(param_3 + 4);
          *puVar8 = 0;
          puVar8[1] = 0;
          *(undefined4 *)(puVar8 + 2) = 0;
          *(undefined1 *)((longlong)puVar8 + 0x14) = 0;
          puVar8[3] = 0;
          puVar8[4] = 0;
          puVar8[5] = 0;
          uVar4 = puVar7[1];
          uVar5 = puVar7[2];
          uVar6 = puVar7[3];
          *(undefined4 *)(puVar8 + 6) = *puVar7;
          *(undefined4 *)((longlong)puVar8 + 0x34) = uVar4;
          *(undefined4 *)(puVar8 + 7) = uVar5;
          *(undefined4 *)((longlong)puVar8 + 0x3c) = uVar6;
          puVar8[8] = *(undefined8 *)(puVar7 + 4);
          *(undefined4 *)(puVar8 + 9) = puVar7[6];
          puVar8[10] = 0;
          puVar8[0xb] = 0;
          puVar8[0xc] = 2;
          puVar8[0xd] = 0;
          puVar8[0xe] = 0;
          puVar8[0xf] = 2;
          puVar8[0x10] = 0;
          puVar8[0x11] = 0;
          puVar8[0x12] = 2;
          FUN_143100360(puVar8 + 6,&local_88,uVar2);
        }
        local_60 = &local_88;
        local_58 = &local_80;
        local_80 = puVar8;
        FUN_140dda160(param_3 + 8,local_res20,&local_60,0);
        puVar9 = local_80;
        if (local_80 != (undefined8 *)0x0) {
          TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>
                    (local_80 + 0x10);
          TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(puVar9 + 0xd);
          TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(puVar9 + 10);
          if (puVar9[3] != 0) {
            FActorRepList::Release();
          }
          FMemory::operator_delete(puVar9,0x98);
        }
      }
      else {
        puVar8 = (undefined8 *)*puVar8;
        local_88 = lVar3;
      }
      if (0.0 < *(float *)(puVar8 + 6)) {
        lVar3 = *(longlong *)(local_88 + 0x168);
        if (lVar3 == 0) {
          local_64 = DAT_1468b5d98;
          puVar9 = &local_6c;
          local_6c = _DAT_1468b5d90;
        }
        else {
          puVar9 = (undefined8 *)&local_78;
          local_78 = *(undefined4 *)(lVar3 + 0x220);
          local_70 = *(undefined4 *)(lVar3 + 0x228);
          uStack_74 = *(undefined4 *)(lVar3 + 0x224);
        }
        uVar2 = *(undefined4 *)(puVar9 + 1);
        puVar8[1] = *puVar9;
        *(undefined4 *)(puVar8 + 2) = uVar2;
      }
      lVar11 = lVar11 + 8;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}



// FUNCTION 140e0b8d0 FUN_140e0b8d0 body=2465 status=ok
// SIG undefined FUN_140e0b8d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e0b8d0(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStack_1f8 [32];
  longlong local_1d8;
  undefined4 local_1d0;
  longlong local_1c8;
  undefined8 local_1c0;
  longlong local_1b8;
  undefined4 local_1b0;
  longlong *local_1a8;
  undefined8 local_1a0;
  longlong *local_198;
  undefined8 local_190;
  longlong *local_188;
  undefined8 local_180;
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  longlong local_158;
  longlong lStack_150;
  longlong local_148 [2];
  undefined8 *local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  ulonglong local_58;
  
  if (param_2 != 0) {
    local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
    if (param_3 != 0) {
      lVar4 = UWorld::GetGameState<APVPGameState>(param_3);
      local_d0 = *(undefined8 *)(param_4 + 8);
      uVar10 = 0;
      local_d8 = &local_c8;
      local_1c8 = 0;
      local_c8 = 0;
      local_c0 = 0x3000000000000;
      local_158 = lVar4;
      if (lVar4 == 0) {
        local_1c0 = 7;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1c8,0);
        FGenericPlatformString::Memcpy(local_1c8,L"normal",0xe);
        FUN_142ab64b0(&local_d8,&DAT_1445571f4,&local_1c8);
        local_148[0] = local_1c8;
      }
      else {
        local_1c0 = 8;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1c8,0);
        FGenericPlatformString::Memcpy(local_1c8,L"gear_up",0x10);
        FUN_142ab64b0(&local_d8,&DAT_144557744,&local_1c8);
        if (local_1c8 != 0) {
          FMemory::Free();
        }
        plVar5 = (longlong *)FUN_140ad4e20(lVar4);
        if (plVar5 != (longlong *)0x0) {
          uVar3 = (**(code **)(*plVar5 + 0x278))(plVar5);
          FUN_142ab61f0(&local_d8,"gear_up_data_hash",uVar3);
        }
        lVar1 = *(longlong *)(param_2 + 0x168);
        if (lVar1 == 0) {
          local_1d8 = _DAT_1468b5d90;
          local_1d0 = DAT_1468b5d98;
        }
        else {
          local_1d8 = *(longlong *)(lVar1 + 0x220);
          local_1d0 = *(undefined4 *)(lVar1 + 0x228);
        }
        lVar1 = local_1d8;
        local_b8 = &local_a8;
        local_b0 = *(undefined8 *)(param_4 + 8);
        local_a8 = 0;
        local_a0 = 0x4000000000000;
        FUN_142ab4f80(&local_b8);
        local_1d8 = lVar1;
        FUN_142ab4f80(&local_b8);
        FUN_142ab4f80(&local_b8);
        UE4Function_Private::
        TFunctionRefCaller<<lambda_7ba9f5259ce314810519498fe7d9f36b>,void___cdecl(FRHICommandListImmediate_&,FViewportSurfaceReader_*)>
        ::Call(&local_d8,"player_loc",&local_b8);
        cVar2 = USkeletalMeshComponent::IsClothingSimulationSuspended(lVar4);
        FUN_142ab6190(&local_d8,"death_circle_stage",(int)cVar2);
        FUN_140ad4860(lVar4,local_148);
        FUN_142ab64b0(&local_d8,"death_circle_state",local_148);
        uVar6 = FUN_140ad4840(lVar4);
        FUN_142ab62a0(&local_d8,"death_circle_state_expires_timestamp",uVar6);
        FUN_140ad3fb0(lVar4,local_178);
        local_98 = &local_88;
        local_90 = *(undefined8 *)(param_4 + 8);
        local_88 = 0;
        local_80 = 0x4000000000000;
        FUN_142ab4f80(&local_98);
        FUN_142ab4f80(&local_98);
        FUN_142ab4f80(&local_98);
        UE4Function_Private::
        TFunctionRefCaller<<lambda_7ba9f5259ce314810519498fe7d9f36b>,void___cdecl(FRHICommandListImmediate_&,FViewportSurfaceReader_*)>
        ::Call(&local_d8,"death_circle_loc",&local_98);
        FUN_140ad5c90(lVar4,local_168);
        local_78 = &local_68;
        local_70 = *(undefined8 *)(param_4 + 8);
        local_68 = 0;
        local_60 = 0x4000000000000;
        FUN_142ab4f80(&local_78);
        FUN_142ab4f80(&local_78);
        FUN_142ab4f80(&local_78);
        UE4Function_Private::
        TFunctionRefCaller<<lambda_7ba9f5259ce314810519498fe7d9f36b>,void___cdecl(FRHICommandListImmediate_&,FViewportSurfaceReader_*)>
        ::Call(&local_d8,"death_circle_next_loc",&local_78);
        local_188 = (longlong *)0x0;
        local_180 = 0;
        FUN_140ad4c10(lVar4,&local_188);
        if (0 < (int)local_180) {
          local_f8 = &local_e8;
          local_f0 = *(undefined8 *)(param_4 + 8);
          local_e8 = 0;
          local_e0 = 0x4000000000000;
          uVar9 = (ulonglong)((longlong)(local_188 + (int)local_180) + (7 - (longlong)local_188)) >>
                  3;
          if (local_188 + (int)local_180 < local_188) {
            uVar9 = uVar10;
          }
          plVar5 = local_188;
          if (uVar9 != 0) {
            do {
              lVar4 = *plVar5;
              if (lVar4 != 0) {
                local_118 = &local_108;
                local_110 = *(undefined8 *)(param_4 + 8);
                local_100 = 0x3000000000000;
                local_108 = 0;
                FUN_142ab6190(&local_118,"num_offerings_left",*(undefined4 *)(lVar4 + 0x670));
                lVar4 = *(longlong *)(lVar4 + 0x168);
                if (lVar4 == 0) {
                  local_1b0 = DAT_1468b5d98;
                  plVar7 = &local_1b8;
                  local_1b8 = _DAT_1468b5d90;
                }
                else {
                  plVar7 = &local_1d8;
                  local_1d0 = *(undefined4 *)(lVar4 + 0x228);
                  local_1d8 = *(longlong *)(lVar4 + 0x220);
                }
                lVar4 = *plVar7;
                local_1c0 = CONCAT44(local_1c0._4_4_,(int)plVar7[1]);
                local_138 = &local_128;
                local_130 = *(undefined8 *)(param_4 + 8);
                local_128 = 0;
                local_120 = 0x4000000000000;
                FUN_142ab4f80(&local_138);
                local_1c8 = lVar4;
                FUN_142ab4f80(&local_138);
                FUN_142ab4f80(&local_138);
                UE4Function_Private::
                TFunctionRefCaller<<lambda_7ba9f5259ce314810519498fe7d9f36b>,void___cdecl(FRHICommandListImmediate_&,FViewportSurfaceReader_*)>
                ::Call(&local_118,&DAT_144554584,&local_138);
                FUN_142ab4ae0(&local_f8,&local_118);
              }
              uVar10 = uVar10 + 1;
              plVar5 = plVar5 + 1;
              lVar4 = local_158;
            } while (uVar10 != uVar9);
          }
          UE4Function_Private::
          TFunctionRefCaller<<lambda_7ba9f5259ce314810519498fe7d9f36b>,void___cdecl(FRHICommandListImmediate_&,FViewportSurfaceReader_*)>
          ::Call(&local_d8,"extractors",&local_f8);
        }
        uVar10 = 0;
        local_198 = (longlong *)0x0;
        local_190 = 0;
        FUN_140ad6140(lVar4,&local_198);
        if (0 < (int)local_190) {
          local_f8 = &local_e8;
          local_f0 = *(undefined8 *)(param_4 + 8);
          local_e8 = 0;
          local_e0 = 0x4000000000000;
          uVar9 = (ulonglong)((longlong)(local_198 + (int)local_190) + (7 - (longlong)local_198)) >>
                  3;
          if (local_198 + (int)local_190 < local_198) {
            uVar9 = uVar10;
          }
          plVar5 = local_198;
          if (uVar9 != 0) {
            do {
              lVar4 = *plVar5;
              if (lVar4 != 0) {
                local_118 = &local_108;
                local_110 = *(undefined8 *)(param_4 + 8);
                local_100 = 0x3000000000000;
                local_108 = 0;
                FUN_142ab6190(&local_118,"already_used",*(undefined1 *)(lVar4 + 0x5d0));
                lVar4 = *(longlong *)(lVar4 + 0x168);
                if (lVar4 == 0) {
                  local_1c0 = CONCAT44(local_1c0._4_4_,DAT_1468b5d98);
                  plVar7 = &local_1c8;
                  local_1c8 = _DAT_1468b5d90;
                }
                else {
                  plVar7 = &local_1d8;
                  local_1d0 = *(undefined4 *)(lVar4 + 0x228);
                  local_1d8 = *(longlong *)(lVar4 + 0x220);
                }
                local_1b0 = (undefined4)plVar7[1];
                local_138 = &local_128;
                local_130 = *(undefined8 *)(param_4 + 8);
                local_128 = 0;
                local_120 = 0x4000000000000;
                FUN_142ab4f80(&local_138);
                FUN_142ab4f80(&local_138);
                FUN_142ab4f80(&local_138);
                UE4Function_Private::
                TFunctionRefCaller<<lambda_7ba9f5259ce314810519498fe7d9f36b>,void___cdecl(FRHICommandListImmediate_&,FViewportSurfaceReader_*)>
                ::Call(&local_118,&DAT_144554664,&local_138);
                FUN_142ab4ae0(&local_f8,&local_118);
              }
              uVar10 = uVar10 + 1;
              plVar5 = plVar5 + 1;
              lVar4 = local_158;
            } while (uVar10 != uVar9);
          }
          UE4Function_Private::
          TFunctionRefCaller<<lambda_7ba9f5259ce314810519498fe7d9f36b>,void___cdecl(FRHICommandListImmediate_&,FViewportSurfaceReader_*)>
          ::Call(&local_d8,"respawners",&local_f8);
        }
        local_1a8 = (longlong *)0x0;
        local_1a0 = 0;
        FUN_140ad4070(lVar4,&local_1a8);
        if (0 < (int)local_1a0) {
          local_f8 = &local_e8;
          local_f0 = *(undefined8 *)(param_4 + 8);
          local_e0 = 0x4000000000000;
          plVar7 = local_1a8 + (longlong)(int)local_1a0 * 2;
          local_e8 = 0;
          for (plVar5 = local_1a8; plVar5 != plVar7; plVar5 = plVar5 + 2) {
            lVar4 = *plVar5;
            lStack_150 = plVar5[1];
            local_158 = lVar4;
            if (lVar4 != 0) {
              local_118 = &local_108;
              local_110 = *(undefined8 *)(param_4 + 8);
              local_108 = 0;
              local_100 = 0x3000000000000;
              FUN_142ab62a0(&local_118,"spawn_timestamp",lStack_150);
              lVar4 = *(longlong *)(lVar4 + 0x168);
              if (lVar4 == 0) {
                local_1c0 = CONCAT44(local_1c0._4_4_,DAT_1468b5d98);
                plVar8 = &local_1c8;
                local_1c8 = _DAT_1468b5d90;
              }
              else {
                plVar8 = &local_1d8;
                local_1d0 = *(undefined4 *)(lVar4 + 0x228);
                local_1d8 = *(longlong *)(lVar4 + 0x220);
              }
              local_1b0 = (undefined4)plVar8[1];
              local_138 = &local_128;
              local_130 = *(undefined8 *)(param_4 + 8);
              local_128 = 0;
              local_120 = 0x4000000000000;
              FUN_142ab4f80(&local_138);
              FUN_142ab4f80(&local_138);
              FUN_142ab4f80(&local_138);
              UE4Function_Private::
              TFunctionRefCaller<<lambda_7ba9f5259ce314810519498fe7d9f36b>,void___cdecl(FRHICommandListImmediate_&,FViewportSurfaceReader_*)>
              ::Call(&local_118,&DAT_1445546ac,&local_138);
              FUN_142ab4ae0(&local_f8,&local_118);
            }
          }
          UE4Function_Private::
          TFunctionRefCaller<<lambda_7ba9f5259ce314810519498fe7d9f36b>,void___cdecl(FRHICommandListImmediate_&,FViewportSurfaceReader_*)>
          ::Call(&local_d8,"airdrops",&local_f8);
        }
        if (local_1a8 != (longlong *)0x0) {
          FMemory::Free();
        }
        if (local_198 != (longlong *)0x0) {
          FMemory::Free();
        }
        if (local_188 != (longlong *)0x0) {
          FMemory::Free();
        }
      }
      if (local_148[0] != 0) {
        FMemory::Free();
      }
      UE4Function_Private::
      TFunctionRefCaller<<lambda_7ba9f5259ce314810519498fe7d9f36b>,void___cdecl(FRHICommandListImmediate_&,FViewportSurfaceReader_*)>
      ::Call(param_4,"game_mode",&local_d8);
    }
  }
  return;
}



// FUNCTION 140e0c280 FUN_140e0c280 body=6362 status=ok
// SIG undefined FUN_140e0c280(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e0c280(longlong *param_1)

{
  undefined4 *puVar1;
  float fVar2;
  char cVar3;
  int *piVar4;
  uint *puVar5;
  bool bVar6;
  char cVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  uint **ppuVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  uint *puVar18;
  byte bVar19;
  int iVar20;
  char *pcVar21;
  int *piVar22;
  char *pcVar23;
  uint *puVar24;
  undefined4 *puVar25;
  uint uVar26;
  ulonglong uVar27;
  uint uVar28;
  uint *puVar29;
  uint uVar30;
  wchar_t *pwVar31;
  float fVar32;
  undefined1 auStack_408 [32];
  longlong *local_3e8;
  uint *local_3e0;
  char local_3d8;
  uint *local_3d0 [2];
  uint **local_3c0;
  uint **local_3b8;
  undefined8 uStack_3b0;
  uint *local_3a8;
  uint uStack_3a0;
  uint uStack_39c;
  int local_398;
  undefined4 uStack_394;
  uint **local_390;
  undefined8 uStack_388;
  uint *puStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  ulonglong local_368;
  uint **local_360;
  uint *puStack_358;
  uint *puStack_350;
  uint uStack_348;
  uint uStack_344;
  int iStack_340;
  undefined8 local_338;
  uint *puStack_330;
  uint local_328;
  uint uStack_324;
  uint uStack_320;
  undefined2 uStack_31c;
  undefined2 uStack_31a;
  undefined8 local_318;
  uint *puStack_310;
  uint local_308;
  uint uStack_304;
  uint uStack_300;
  undefined2 uStack_2fc;
  undefined2 uStack_2fa;
  undefined8 *local_2f8;
  uint *local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 *local_2d8;
  uint *local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 *local_2b8;
  uint *local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 *local_298;
  uint *local_290;
  undefined8 local_288;
  undefined8 local_280;
  uint **local_278;
  undefined8 uStack_270;
  uint *local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 *local_250;
  uint *local_248;
  undefined8 local_240;
  undefined8 local_238;
  uint **local_230;
  undefined8 uStack_228;
  uint *local_220;
  undefined8 uStack_218;
  undefined4 local_210;
  longlong local_208;
  undefined8 local_200;
  uint *local_1f8;
  uint *local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b0;
  undefined1 local_1a8 [24];
  char *local_190;
  int local_188;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_408;
  if (param_1[0x21] != 0) {
    return;
  }
  local_3e8 = param_1;
  ppuVar11 = (uint **)(**(code **)(*param_1 + 0x148))();
  local_3c0 = ppuVar11;
  plVar12 = (longlong *)FUN_142dcfb00(ppuVar11);
  if (plVar12 == (longlong *)0x0) {
LAB_140e0c363:
    plVar12 = (longlong *)0x0;
LAB_140e0c366:
    puVar18 = (uint *)0x0;
    local_3d0[0] = (uint *)0x0;
  }
  else {
    lVar13 = FUN_14145f370();
    if ((*(int *)(plVar12[2] + 0x90) < *(int *)(lVar13 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar12[2] + 0x88) + (longlong)*(int *)(lVar13 + 0x90) * 8) !=
        lVar13 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_140e0c363;
    puVar18 = (uint *)plVar12[0x109];
    if (puVar18 == (uint *)0x0) goto LAB_140e0c366;
    local_3d0[0] = puVar18;
    lVar13 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(puVar18 + 4) + 0x90) < *(int *)(lVar13 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(puVar18 + 4) + 0x88) + (longlong)*(int *)(lVar13 + 0x90) * 8)
        != lVar13 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_140e0c366;
  }
  uVar14 = (**(code **)(*param_1 + 0x148))(param_1);
  cVar7 = FUN_140adac00(uVar14);
  if (cVar7 == '\0') {
    if (puVar18 != (uint *)0x0) {
      lVar13 = (**(code **)(*(longlong *)(puVar18 + 0x360) + 0x18))();
      goto LAB_140e0c3b2;
    }
  }
  else if (puVar18 != (uint *)0x0) {
    lVar13 = FUN_140c430a0(puVar18,3);
    goto LAB_140e0c3b2;
  }
  lVar13 = 0;
LAB_140e0c3b2:
  if (plVar12 == (longlong *)0x0) {
    lVar15 = 0;
    lVar16 = 0;
  }
  else {
    uVar14 = FUN_1414b0d60();
    (**(code **)(*plVar12 + 0x628))(plVar12,uVar14);
    lVar15 = FUN_140cfbfb0(plVar12);
    lVar16 = FUN_140cff230(plVar12);
  }
  if (ppuVar11 == (uint **)0x0) {
    lVar17 = 0;
  }
  else {
    lVar17 = UWorld::GetGameState<APVPGameState>(ppuVar11);
  }
  cVar7 = FUN_140adac00(ppuVar11);
  if ((((lVar13 != 0) && (lVar15 != 0)) && (lVar16 != 0)) && (lVar17 != 0)) {
    local_1c0 = 0x400;
    puVar24 = (uint *)0x0;
    local_208 = 0;
    local_200 = 0;
    local_1f8 = (uint *)0x0;
    local_1e8 = 0;
    uStack_1e0 = 0;
    local_1d8 = 0;
    uStack_1d0 = 0;
    local_1c8 = 0;
    uVar8 = 0;
    local_1b8 = 0;
    local_1b0 = 0;
    local_3d8 = cVar7;
    puVar18 = (uint *)operator_new(0x28);
    local_2f0 = puVar24;
    if (puVar18 != (uint *)0x0) {
      puVar18[0] = 0;
      puVar18[1] = 0;
      puVar18[2] = 0x10000;
      puVar18[3] = 0;
      puVar18[4] = 0;
      puVar18[5] = 0;
      puVar18[6] = 0;
      puVar18[7] = 0;
      puVar18[8] = 0;
      puVar18[9] = 0;
      local_2f0 = puVar18;
    }
    local_2f8 = &local_2e8;
    local_2e8 = 0;
    cVar3 = (char)param_1[0x10];
    local_2e0 = 0x3000000000000;
    local_1f8 = local_2f0;
    local_1f0 = local_2f0;
    if (cVar3 == '\0') {
      FUN_140ddc120(local_1a8,param_1 + 0x33);
      FUN_140de93e0(param_1,param_1 + 0x33);
      if (param_1[0x20] != 0) {
        FUN_1414d1160();
      }
      *(int *)((longlong)param_1 + 0x2f4) = *(int *)((longlong)param_1 + 0x2f4) + 1;
      if (local_188 == (int)param_1[0x37]) {
        if (0 < local_188) {
          pcVar23 = (char *)(param_1[0x36] + 0x39);
          pcVar21 = local_190 + 0x39;
          do {
            if ((((*(int *)(pcVar21 + (param_1[0x36] - (longlong)local_190) + -0x39) ==
                   *(int *)(pcVar21 + -0x39)) && (pcVar23[-1] == pcVar21[-1])) &&
                (*pcVar23 == *pcVar21)) &&
               (((*(int *)(pcVar23 + 3) == *(int *)(pcVar21 + 3) &&
                 (*(int *)(pcVar23 + 7) == *(int *)(pcVar21 + 7))) &&
                (*(int *)(pcVar23 + 0xb) == *(int *)(pcVar21 + 0xb))))) {
              bVar6 = true;
            }
            else {
              bVar6 = false;
            }
            if (!bVar6) goto LAB_140e0c5ce;
            uVar26 = (int)puVar24 + 1;
            puVar24 = (uint *)(ulonglong)uVar26;
            pcVar23 = pcVar23 + 0x68;
            pcVar21 = pcVar21 + 0x68;
          } while ((int)uVar26 < local_188);
        }
      }
      else {
LAB_140e0c5ce:
        *(undefined4 *)(param_1 + 0x5f) = *(undefined4 *)((longlong)param_1 + 0x2f4);
      }
      cVar7 = FUN_140df3120(param_1,local_1a8);
      if (cVar7 != '\0') {
        *(undefined4 *)((longlong)param_1 + 0x2fc) = *(undefined4 *)((longlong)param_1 + 0x2f4);
      }
      *(undefined4 *)((longlong)param_1 + 0x84) = 0;
      if (local_190 != local_190 + (longlong)local_188 * 0x68) {
        pcVar21 = local_190 + 0x39;
        do {
          piVar4 = (int *)param_1[0x36];
          if (piVar4 != piVar4 + (longlong)(int)param_1[0x37] * 0x1a) {
            piVar22 = piVar4;
            do {
              if (((*(int *)(pcVar21 + -0x39) == *piVar22) && (pcVar21[-1] == (char)piVar22[0xe]))
                 && ((*pcVar21 == *(char *)((longlong)piVar22 + 0x39) &&
                     (((*(int *)(pcVar21 + 3) == piVar22[0xf] &&
                       (*(int *)(pcVar21 + 7) == piVar22[0x10])) &&
                      (*(int *)(pcVar21 + 0xb) == piVar22[0x11])))))) {
                bVar6 = true;
              }
              else {
                bVar6 = false;
              }
              if (bVar6) {
                iVar10 = (int)(((longlong)piVar22 - (longlong)piVar4) / 0x68);
                if (iVar10 != -1) {
                  *(char *)((longlong)iVar10 * 0x68 + 0x60 + param_1[0x36]) = pcVar21[0x27];
                }
                break;
              }
              piVar22 = piVar22 + 0x1a;
            } while (piVar22 != piVar4 + (longlong)(int)param_1[0x37] * 0x1a);
          }
          pcVar23 = pcVar21 + 0x2f;
          pcVar21 = pcVar21 + 0x68;
        } while (pcVar23 != local_190 + (longlong)local_188 * 0x68);
      }
      local_3e8 = (longlong *)0x0;
      local_3e0 = (uint *)0xa;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3e8,0);
      FGenericPlatformString::Memcpy(local_3e8,L"PatchDLC2",0x14);
      FUN_142ab64b0(&local_2f8,"game_version",&local_3e8);
      if (local_3e8 != (longlong *)0x0) {
        FMemory::Free();
      }
      FUN_142ab6190(&local_2f8,"update_id",*(undefined4 *)((longlong)param_1 + 0x2f4));
      FUN_142ab6190(&local_2f8,"inventory_update_id",(int)param_1[0x5f]);
      FUN_142ab6190(&local_2f8,"skill_tree_update_id",*(undefined4 *)((longlong)param_1 + 0x2fc));
      lVar13 = FUN_140d3b6b0(lVar15 + 0x50);
      if (lVar13 != 0) {
        uVar8 = FUN_1409ac010(lVar13);
      }
      FUN_142ab61f0(&local_2f8,"player_class_hash",uVar8);
      uVar14 = FUN_140cffa80(plVar12,&local_338);
      FUN_142ab64b0(&local_2f8,"preferred_character_name",uVar14);
      if (local_338 != (uint *)0x0) {
        FMemory::Free();
      }
      lVar13 = -1;
      if (*(char *)(lVar16 + 0x205) == '\0') {
        uVar8 = 0xffffffff;
      }
      else {
        uVar8 = *(undefined4 *)(lVar16 + 0x208);
      }
      fVar32 = 0.0;
      if ((((char)param_1[0xb] != '\0') || (0.0 < *(float *)(lVar16 + 0x238))) ||
         (0.0 < *(float *)(lVar16 + 0x244))) {
        uVar8 = 0xffffffff;
      }
      if ((param_1[0x30] != 0) && (*(char *)(param_1[0x30] + 0x148) != '\0')) {
        uVar8 = 0xffffffff;
      }
      FUN_142ab6190(&local_2f8,"moxxis_event_min_product_idx",uVar8);
      FUN_142ab61f0(&local_2f8,"time_played_seconds",(int)param_1[0x33]);
      FUN_142ab6190(&local_2f8,"experience_points",*(undefined4 *)((longlong)param_1 + 0x19c));
      FUN_142ab6190(&local_2f8,"player_level",(int)param_1[0x34]);
      FUN_142ab6190(&local_2f8,"golden_keys",(int)param_1[0x35]);
      FUN_142ab6190(&local_2f8,"backpack_size",*(undefined4 *)((longlong)param_1 + 0x1a4));
      FUN_142ab6190(&local_2f8,"inventory_size",(int)param_1[0x37]);
      FUN_142ab6190(&local_2f8,"max_items_per_update",(int)param_1[0x32]);
      pwVar31 = L"StoryMode";
      if (*(char *)(lVar16 + 0x180) == '\0') {
        pwVar31 = L"Normal";
      }
      local_3e8 = (longlong *)0x0;
      local_3e0 = (uint *)0x0;
      if (*pwVar31 != L'\0') {
        lVar16 = -1;
        do {
          lVar16 = lVar16 + 1;
        } while (pwVar31[lVar16] != L'\0');
        uVar26 = (int)lVar16 + 1;
        local_3e0 = (uint *)(ulonglong)uVar26;
        if (0 < (int)uVar26) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3e8,0);
        }
        FGenericPlatformString::Memcpy(local_3e8,pwVar31,(longlong)(int)uVar26 * 2);
      }
      FUN_142ab64b0(&local_2f8,"player_difficulty_setting",&local_3e8);
      if (local_3e8 != (longlong *)0x0) {
        FMemory::Free();
      }
      pwVar31 = L"Coopetition";
      if (*(char *)(lVar15 + 0x310) == '\x01') {
        pwVar31 = L"Cooperation";
      }
      local_3e0 = (uint *)0x0;
      local_3e8 = (longlong *)0x0;
      if (*pwVar31 != L'\0') {
        do {
          lVar13 = lVar13 + 1;
        } while (pwVar31[lVar13] != L'\0');
        uVar26 = (int)lVar13 + 1;
        local_3e0 = (uint *)(ulonglong)uVar26;
        if (0 < (int)uVar26) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3e8,0);
        }
        FGenericPlatformString::Memcpy(local_3e8,pwVar31,(longlong)(int)uVar26 * 2);
      }
      FUN_142ab64b0(&local_2f8,"player_group_setting",&local_3e8);
      if (local_3e8 != (longlong *)0x0) {
        FMemory::Free();
      }
      uVar8 = FUN_140cb6340(lVar17);
      FUN_142ab6190(&local_2f8,"current_playthrough",uVar8);
      if (local_3d8 == '\0') {
        local_298 = &local_288;
        local_290 = local_1f8;
        local_280 = 0x3000000000000;
        local_288 = 0;
        FUN_140de8bd0(param_1,&local_298);
        UE4Function_Private::
        TFunctionRefCaller<<lambda_7ba9f5259ce314810519498fe7d9f36b>,void___cdecl(FRHICommandListImmediate_&,FViewportSurfaceReader_*)>
        ::Call(&local_2f8,"guardian_rank",&local_298);
      }
      puStack_310 = local_1f8;
      uStack_300 = 0;
      uStack_2fc = 0;
      uStack_2fa = 3;
      local_308 = 0;
      uStack_304 = 0;
      local_318 = &local_308;
      FUN_140de8ff0(param_1,&local_318,plVar12);
      UE4Function_Private::
      TFunctionRefCaller<<lambda_7ba9f5259ce314810519498fe7d9f36b>,void___cdecl(FRHICommandListImmediate_&,FViewportSurfaceReader_*)>
      ::Call(&local_2f8,"mayhem_mode",&local_318);
      puVar25 = (undefined4 *)param_1[0x38];
      local_230 = &local_220;
      local_220 = (uint *)0x0;
      uStack_218 = 0x3000000000000;
      puVar1 = puVar25 + (longlong)(int)param_1[0x39] * 3;
      uStack_228 = local_1f8;
      puVar18 = puStack_330;
      puStack_330 = local_1f8;
      for (; local_1f8 = puStack_330, puVar25 != puVar1; puVar25 = puVar25 + 3) {
        local_338 = &local_328;
        uStack_320 = 0;
        uStack_31c = 0;
        uStack_31a = 3;
        local_328 = 0;
        uStack_324 = 0;
        FUN_142ab6190(&local_338,"pickup_order_idx",puVar25[1]);
        FUN_142ab6050(&local_338,"slot_enabled",*(undefined1 *)(puVar25 + 2));
        FString::PrintfImpl(&local_3e8,&DAT_1445596f4,*puVar25);
        UE4Function_Private::
        TFunctionRefCaller<<lambda_7ba9f5259ce314810519498fe7d9f36b>,void___cdecl(FRHICommandListImmediate_&,FViewportSurfaceReader_*)>
        ::Call(&local_230,&local_3e8,&local_338);
        if (local_3e8 != (longlong *)0x0) {
          FMemory::Free();
        }
        puVar18 = puStack_330;
        puStack_330 = local_1f8;
      }
      puStack_330 = puVar18;
      UE4Function_Private::
      TFunctionRefCaller<<lambda_7ba9f5259ce314810519498fe7d9f36b>,void___cdecl(FRHICommandListImmediate_&,FViewportSurfaceReader_*)>
      ::Call(&local_2f8,"equipped_inventory",&local_230);
      local_250 = &local_240;
      ppuVar11 = (uint **)(param_1 + 0x3a);
      puVar18 = (uint *)(param_1 + 0x3c);
      local_248 = local_1f8;
      local_338 = (uint *)0x100000000;
      local_238 = 0x3000000000000;
      local_240 = 0;
      uVar26 = *(uint *)(param_1 + 0x3f);
      uStack_324 = 0;
      uStack_320 = 0;
      if (uVar26 != 0) {
        puVar24 = (uint *)param_1[0x3e];
        if ((uint *)param_1[0x3e] == (uint *)0x0) {
          puVar24 = puVar18;
        }
        uVar9 = *puVar24;
        iVar10 = 0;
        while (uVar9 == 0) {
          uStack_320 = uStack_320 + 0x20;
          local_338._4_4_ = (undefined4)((ulonglong)local_338 >> 0x20);
          local_338 = (uint *)CONCAT44(local_338._4_4_,iVar10 + 1);
          if ((int)((uVar26 - 1) + ((int)(uVar26 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar10)
          goto LAB_140e0cc8a;
          uVar9 = puVar24[(longlong)iVar10 + 1];
          iVar10 = iVar10 + 1;
        }
        uVar9 = -uVar9 & uVar9;
        iVar10 = 0x1f;
        if (uVar9 != 0) {
          for (; uVar9 >> iVar10 == 0; iVar10 = iVar10 + -1) {
          }
        }
        local_338 = (uint *)CONCAT44(uVar9,(undefined4)local_338);
        if (uVar9 == 0) {
          iVar10 = 0x20;
        }
        else {
          iVar10 = 0x1f - iVar10;
        }
        uStack_324 = (uStack_320 - iVar10) + 0x1f;
        if ((int)uVar26 < (int)uStack_324) {
LAB_140e0cc8a:
          uStack_324 = uVar26;
        }
      }
      local_328 = 0xffffffff;
      uVar9 = *(uint *)(param_1 + 0x3f);
      uStack_378 = CONCAT44(uStack_324,0xffffffff);
      uStack_370 = CONCAT26(uStack_31a,CONCAT24(uStack_31c,uStack_320));
      uStack_388 = local_338;
      uVar30 = -1 << ((byte)uVar9 & 0x1f);
      uVar28 = uVar9 & 0xffffffe0;
      local_2c8 = CONCAT44(uVar9,uVar30);
      uStack_270 = local_338;
      local_390 = ppuVar11;
      puStack_380 = puVar18;
      puStack_330 = puVar18;
      local_278 = ppuVar11;
      local_268 = puVar18;
      uStack_260 = uStack_378;
      local_258 = uStack_370;
      uVar14 = local_2c8;
      if (uVar9 != uVar26) {
        puVar24 = (uint *)param_1[0x3e];
        if ((uint *)param_1[0x3e] == (uint *)0x0) {
          puVar24 = puVar18;
        }
        uVar30 = puVar24[(int)uVar9 >> 5] & uVar30;
        iVar10 = (int)uVar9 >> 5;
        while (uVar30 == 0) {
          uVar28 = uVar28 + 0x20;
          if ((int)((uVar26 - 1) + ((int)(uVar26 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar10)
          goto LAB_140e0cd74;
          uVar30 = puVar24[(longlong)iVar10 + 1];
          local_2c8 = 0xffffffff;
          iVar10 = iVar10 + 1;
        }
        uVar30 = -uVar30 & uVar30;
        iVar10 = 0x1f;
        if (uVar30 != 0) {
          for (; uVar30 >> iVar10 == 0; iVar10 = iVar10 + -1) {
          }
        }
        if (uVar30 == 0) {
          iVar10 = 0x20;
        }
        else {
          iVar10 = 0x1f - iVar10;
        }
        iVar10 = (uVar28 - iVar10) + 0x1f;
        local_2c8 = CONCAT44(iVar10,(undefined4)local_2c8);
        uVar14 = local_2c8;
        if ((int)uVar26 < iVar10) {
LAB_140e0cd74:
          local_2c8 = CONCAT44(uVar26,(undefined4)local_2c8);
          uVar14 = local_2c8;
        }
      }
      while( true ) {
        lVar13 = (longlong)uStack_260._4_4_;
        if ((uStack_260._4_4_ == (int)((ulonglong)uVar14 >> 0x20)) && (local_268 == puVar18)) {
          bVar6 = true;
        }
        else {
          bVar6 = false;
        }
        if ((bVar6) && (local_278 == ppuVar11)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (!bVar6) break;
        puVar24 = *local_278;
        FString::PrintfImpl(&local_3e8,&DAT_14455ba64,puVar24[lVar13 * 4]);
        FUN_142ab6080(&local_250,&local_3e8,(puVar24 + lVar13 * 4)[1]);
        if (local_3e8 != (longlong *)0x0) {
          FMemory::Free();
        }
        uStack_260 = CONCAT44(uStack_260._4_4_,(uint)uStack_260 & ~uStack_270._4_4_);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_270);
      }
      UE4Function_Private::
      TFunctionRefCaller<<lambda_7ba9f5259ce314810519498fe7d9f36b>,void___cdecl(FRHICommandListImmediate_&,FViewportSurfaceReader_*)>
      ::Call(&local_2f8,"category_inventory",&local_250);
      if (local_3d8 == '\0') {
        FUN_142ab6190(&local_2f8,"ability_points");
        local_298 = &local_288;
        ppuVar11 = (uint **)(param_1 + 0x45);
        local_3a8 = (uint *)(param_1 + 0x47);
        local_290 = local_1f8;
        local_280 = 0x3000000000000;
        local_288 = 0;
        uVar26 = *(uint *)(param_1 + 0x4a);
        local_338 = (uint *)0x100000000;
        uStack_324 = 0;
        uStack_320 = 0;
        if (uVar26 != 0) {
          puVar18 = (uint *)param_1[0x49];
          if ((uint *)param_1[0x49] == (uint *)0x0) {
            puVar18 = local_3a8;
          }
          uVar9 = *puVar18;
          iVar10 = 0;
          while (uVar9 == 0) {
            uStack_320 = uStack_320 + 0x20;
            local_338._4_4_ = (undefined4)((ulonglong)local_338 >> 0x20);
            local_338 = (uint *)CONCAT44(local_338._4_4_,iVar10 + 1);
            if ((int)((uVar26 - 1) + ((int)(uVar26 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar10)
            goto LAB_140e0cf29;
            uVar9 = puVar18[(longlong)iVar10 + 1];
            iVar10 = iVar10 + 1;
          }
          uVar9 = -uVar9 & uVar9;
          iVar10 = 0x1f;
          if (uVar9 != 0) {
            for (; uVar9 >> iVar10 == 0; iVar10 = iVar10 + -1) {
            }
          }
          local_338 = (uint *)CONCAT44(uVar9,(undefined4)local_338);
          if (uVar9 == 0) {
            iVar10 = 0x20;
          }
          else {
            iVar10 = 0x1f - iVar10;
          }
          uStack_324 = (uStack_320 - iVar10) + 0x1f;
          if ((int)uVar26 < (int)uStack_324) {
LAB_140e0cf29:
            uStack_324 = uVar26;
          }
        }
        uStack_3b0 = local_338;
        uVar9 = *(uint *)(param_1 + 0x4a);
        uStack_394 = CONCAT22(uStack_31a,uStack_31c);
        bVar19 = (byte)uVar9 & 0x1f;
        uStack_388 = local_338;
        uStack_378 = CONCAT44(uStack_324,0xffffffff);
        uStack_370 = CONCAT44(uStack_394,uStack_320);
        local_328 = -1 << bVar19;
        local_398 = uStack_320;
        local_338 = (uint *)CONCAT44(1 << bVar19,(int)uVar9 >> 5);
        uStack_3a0 = 0xffffffff;
        uStack_39c = uStack_324;
        local_3b8 = ppuVar11;
        local_390 = ppuVar11;
        puStack_380 = local_3a8;
        puStack_330 = local_3a8;
        uStack_324 = uVar9;
        uStack_320 = uVar9 & 0xffffffe0;
        puVar18 = local_3a8;
        if (uVar9 != uVar26) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_338);
          uVar9 = uStack_324;
          puVar18 = puStack_330;
        }
        while( true ) {
          lVar13 = (longlong)(int)uStack_39c;
          if ((uStack_39c == uVar9) && (local_3a8 == puVar18)) {
            bVar6 = true;
          }
          else {
            bVar6 = false;
          }
          if ((bVar6) && (local_3b8 == ppuVar11)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if (!bVar6) break;
          puVar24 = *local_3b8;
          FString::PrintfImpl(&local_3e8,&DAT_14455bad8,puVar24[lVar13 * 4]);
          FUN_142ab6080(&local_298,&local_3e8,(puVar24 + lVar13 * 4)[1]);
          if (local_3e8 != (longlong *)0x0) {
            FMemory::Free();
          }
          uStack_3a0 = uStack_3a0 & ~uStack_3b0._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_3b0);
        }
        UE4Function_Private::
        TFunctionRefCaller<<lambda_7ba9f5259ce314810519498fe7d9f36b>,void___cdecl(FRHICommandListImmediate_&,FViewportSurfaceReader_*)>
        ::Call(&local_2f8,"tree_items",&local_298);
        puVar25 = (undefined4 *)param_1[0x4f];
        local_278 = &local_268;
        local_268 = (uint *)0x0;
        uStack_260 = 0x3000000000000;
        puVar1 = puVar25 + (longlong)(int)param_1[0x50] * 2;
        uStack_270 = local_1f8;
        for (; puVar25 != puVar1; puVar25 = puVar25 + 2) {
          FString::PrintfImpl(&local_3e8,&DAT_14455baec,*puVar25);
          FUN_142ab60e0(&local_278,&local_3e8,puVar25[1]);
          if (local_3e8 != (longlong *)0x0) {
            FMemory::Free();
          }
        }
        UE4Function_Private::
        TFunctionRefCaller<<lambda_7ba9f5259ce314810519498fe7d9f36b>,void___cdecl(FRHICommandListImmediate_&,FViewportSurfaceReader_*)>
        ::Call(&local_2f8,"ability_slots",&local_278);
        puVar25 = (undefined4 *)param_1[0x51];
        local_2d8 = &local_2c8;
        local_2c8 = 0;
        local_2c0 = 0x3000000000000;
        puVar1 = puVar25 + (longlong)(int)param_1[0x52] * 3;
        local_2d0 = local_1f8;
        puVar18 = puStack_330;
        puStack_330 = local_1f8;
        for (; local_1f8 = puStack_330, puVar25 != puVar1; puVar25 = puVar25 + 3) {
          local_338 = &local_328;
          uStack_320 = 0;
          uStack_31c = 0;
          uStack_31a = 3;
          local_328 = 0;
          uStack_324 = 0;
          FString::PrintfImpl(&local_3e8,&DAT_14455bb14,puVar25[1]);
          FUN_142ab61f0(&local_338,"action_ability_hash",*puVar25);
          FUN_142ab61f0(&local_338,"augment_hash",puVar25[2]);
          UE4Function_Private::
          TFunctionRefCaller<<lambda_7ba9f5259ce314810519498fe7d9f36b>,void___cdecl(FRHICommandListImmediate_&,FViewportSurfaceReader_*)>
          ::Call(&local_2d8,&local_3e8,&local_338);
          if (local_3e8 != (longlong *)0x0) {
            FMemory::Free();
          }
          puVar18 = puStack_330;
          puStack_330 = local_1f8;
        }
        puStack_330 = puVar18;
        UE4Function_Private::
        TFunctionRefCaller<<lambda_7ba9f5259ce314810519498fe7d9f36b>,void___cdecl(FRHICommandListImmediate_&,FViewportSurfaceReader_*)>
        ::Call(&local_2f8,"augment_slots",&local_2d8);
        FUN_142ab61f0(&local_2f8,"pet_augment_hash",(int)param_1[0x53]);
      }
      fVar2 = *(float *)(param_1 + 0xc);
      if (0.0 < fVar2) {
        fVar32 = (float)param_1[0xd] / fVar2;
      }
      local_2b8 = &local_2a8;
      local_2b0 = local_1f8;
      local_2a0 = 0x3000000000000;
      local_2a8 = 0;
      FUN_142ab62a0(&local_2b8,"session_lifetime",(longlong)fVar2);
      FUN_142ab62a0(&local_2b8,"damage_caused",param_1[0xd]);
      FUN_142ab6190(&local_2b8,"enemies_killed",(int)param_1[0xe]);
      FUN_142ab6190(&local_2b8,"time_injured",*(undefined4 *)((longlong)param_1 + 0x74));
      FUN_142ab6190(&local_2b8,"time_dead",(int)param_1[0xf]);
      FUN_142ab6190(&local_2b8,&DAT_144554c6c,(int)fVar32);
      FUN_142ab6190(&local_2b8,"legendaries_spawned",*(undefined4 *)((longlong)param_1 + 0x7c));
      FUN_142ab6190(&local_2b8,"rare_chest_events",(int)param_1[7]);
      FUN_142ab6190(&local_2b8,"rare_chest_winners",*(undefined4 *)((longlong)param_1 + 0x3c));
      FUN_142ab6190(&local_2b8,"badass_events",(int)param_1[8]);
      FUN_142ab6190(&local_2b8,"badass_killed",*(undefined4 *)((longlong)param_1 + 0x44));
      FUN_142ab6190(&local_2b8,"pinata_event",(int)param_1[9]);
      FUN_142ab6190(&local_2b8,"moxxis_event",*(undefined4 *)((longlong)param_1 + 0x4c));
      FUN_142ab6190(&local_2b8,"moxxis_bits_total",(int)param_1[10]);
      FUN_142ab6190(&local_2b8,"extraction_events",*(undefined4 *)((longlong)param_1 + 0x54));
      UE4Function_Private::
      TFunctionRefCaller<<lambda_7ba9f5259ce314810519498fe7d9f36b>,void___cdecl(FRHICommandListImmediate_&,FViewportSurfaceReader_*)>
      ::Call(&local_2f8,"session_stats",&local_2b8);
      FUN_140e0b8d0(param_1,local_3d0[0],local_3c0,&local_2f8);
      FUN_140de5050(param_1);
      FUN_140ddee60(local_1a8);
    }
    else if (cVar3 == '\x01') {
      if (cVar7 == '\0') {
        local_250 = &local_240;
        ppuVar11 = (uint **)(param_1 + 0x54);
        puVar18 = (uint *)(param_1 + 0x56);
        local_238 = 0x3000000000000;
        local_240 = 0;
        local_338 = (uint *)0x100000000;
        local_328 = 0xffffffff;
        uStack_324 = 0;
        uStack_320 = 0;
        uVar26 = 0;
        local_3d0[0] = puVar18;
        local_3c0 = ppuVar11;
        puStack_330 = puVar18;
        local_248 = local_2f0;
        if ((int)param_1[0x59] != 0) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_338);
          uVar26 = *(uint *)(param_1 + 0x59);
        }
        uStack_388 = local_338;
        uVar9 = *(uint *)(param_1 + 0x59);
        uStack_394 = CONCAT22(uStack_31a,uStack_31c);
        bVar19 = (byte)uVar9 & 0x1f;
        uStack_3b0 = local_338;
        local_3a8 = puStack_330;
        local_338 = (uint *)CONCAT44(1 << bVar19,(int)uVar9 >> 5);
        uVar30 = -1 << bVar19;
        uStack_3a0 = local_328;
        uStack_39c = uStack_324;
        local_398 = uStack_320;
        uStack_370 = CONCAT44(uStack_394,uStack_320);
        puStack_380 = puStack_330;
        uStack_378 = CONCAT44(uStack_324,local_328);
        local_3b8 = ppuVar11;
        local_390 = ppuVar11;
        puStack_330 = puVar18;
        local_328 = uVar30;
        uStack_324 = uVar9;
        uStack_320 = uVar9 & 0xffffffe0;
        if (uVar9 != uVar26) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_338);
          local_3d0[0] = puStack_330;
        }
        puVar18 = local_3d0[0];
        local_368 = (ulonglong)uStack_324;
        while( true ) {
          if ((uStack_378._4_4_ == (int)local_368) && (puStack_380 == puVar18)) {
            bVar6 = true;
          }
          else {
            bVar6 = false;
          }
          if ((bVar6) && (local_390 == ppuVar11)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if (!bVar6) break;
          puVar29 = *local_390 + (longlong)uStack_378._4_4_ * 0x2c;
          FString::PrintfImpl(&local_338,&DAT_14455bcc0,*puVar29);
          local_298 = &local_288;
          local_290 = local_1f8;
          local_2d0 = local_1f8;
          local_2c0 = 0x3000000000000;
          local_280 = 0x3000000000000;
          ppuVar11 = (uint **)(puVar29 + 2);
          local_288 = 0;
          puVar24 = puVar29 + 6;
          local_2d8 = &local_2c8;
          local_2c8 = 0;
          local_318 = (uint *)0x100000000;
          local_308 = 0xffffffff;
          uStack_304 = 0;
          uStack_300 = 0;
          uVar26 = 0;
          puStack_310 = puVar24;
          if (puVar29[0xc] != 0) {
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_318);
            uVar26 = puVar29[0xc];
          }
          uStack_3b0 = local_318;
          uVar9 = puVar29[0xc];
          uStack_394 = CONCAT22(uStack_2fa,uStack_2fc);
          bVar19 = (byte)uVar9 & 0x1f;
          puStack_358 = local_318;
          puStack_350 = puStack_310;
          local_318 = (uint *)CONCAT44(1 << bVar19,(int)uVar9 >> 5);
          uVar30 = -1 << bVar19;
          uStack_348 = local_308;
          uStack_344 = uStack_304;
          iStack_340 = uStack_300;
          local_398 = uStack_300;
          local_3a8 = puStack_310;
          uStack_3a0 = local_308;
          uStack_39c = uStack_304;
          local_3b8 = ppuVar11;
          local_360 = ppuVar11;
          puStack_310 = puVar24;
          local_308 = uVar30;
          uStack_304 = uVar9;
          uStack_300 = uVar9 & 0xffffffe0;
          if (uVar9 != uVar26) {
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_318);
            uVar9 = uStack_304;
            puVar24 = puStack_310;
          }
          while( true ) {
            lVar13 = (longlong)(int)uStack_39c;
            if ((uStack_39c == uVar9) && (local_3a8 == puVar24)) {
              bVar6 = true;
            }
            else {
              bVar6 = false;
            }
            if ((bVar6) && (local_3b8 == ppuVar11)) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            if (!bVar6) break;
            puVar5 = *local_3b8;
            FString::PrintfImpl(local_3d0,&DAT_14455bcc8,puVar5[lVar13 * 8]);
            FUN_140ddb5c0(local_3d0,&local_2d8,puVar5 + lVar13 * 8 + 2);
            if (local_3d0[0] != (uint *)0x0) {
              FMemory::Free();
            }
            uStack_3a0 = uStack_3a0 & ~uStack_3b0._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_3b0);
          }
          local_278 = &local_268;
          local_308 = 0xffffffff;
          ppuVar11 = (uint **)(puVar29 + 0x16);
          puVar24 = puVar29 + 0x1a;
          uStack_270 = local_1f8;
          uStack_260 = 0x3000000000000;
          local_268 = (uint *)0x0;
          local_318 = (uint *)0x100000000;
          uStack_304 = 0;
          uStack_300 = 0;
          uVar26 = 0;
          puStack_310 = puVar24;
          if (puVar29[0x20] != 0) {
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_318);
            uVar26 = puVar29[0x20];
          }
          uStack_228 = local_318;
          uVar9 = puVar29[0x20];
          bVar19 = (byte)uVar9 & 0x1f;
          puStack_358 = local_318;
          puStack_350 = puStack_310;
          local_318 = (uint *)CONCAT44(1 << bVar19,(int)uVar9 >> 5);
          uVar30 = -1 << bVar19;
          uStack_348 = local_308;
          uStack_344 = uStack_304;
          iStack_340 = uStack_300;
          local_210 = uStack_300;
          local_220 = puStack_310;
          uStack_218 = CONCAT44(uStack_304,local_308);
          local_360 = ppuVar11;
          puStack_310 = puVar24;
          local_308 = uVar30;
          uStack_304 = uVar9;
          uStack_300 = uVar9 & 0xffffffe0;
          local_230 = ppuVar11;
          if (uVar9 != uVar26) {
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_318);
            uVar9 = uStack_304;
            puVar24 = puStack_310;
          }
          while( true ) {
            lVar13 = (longlong)(int)uStack_218._4_4_;
            if ((uStack_218._4_4_ == uVar9) && (local_220 == puVar24)) {
              bVar6 = true;
            }
            else {
              bVar6 = false;
            }
            if ((bVar6) && (local_230 == ppuVar11)) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            if (!bVar6) break;
            puVar29 = *local_230;
            FString::PrintfImpl(&local_2b8,&DAT_14455bcd0,puVar29[lVar13 * 8]);
            FUN_140ddb5c0(&local_2b8,&local_278,puVar29 + lVar13 * 8 + 2);
            if (local_2b8 != (undefined8 *)0x0) {
              FMemory::Free();
            }
            uStack_218 = CONCAT44(uStack_218._4_4_,(uint)uStack_218 & ~uStack_228._4_4_);
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_228);
          }
          UE4Function_Private::
          TFunctionRefCaller<<lambda_7ba9f5259ce314810519498fe7d9f36b>,void___cdecl(FRHICommandListImmediate_&,FViewportSurfaceReader_*)>
          ::Call(&local_298,"current_stats_data",&local_2d8);
          UE4Function_Private::
          TFunctionRefCaller<<lambda_7ba9f5259ce314810519498fe7d9f36b>,void___cdecl(FRHICommandListImmediate_&,FViewportSurfaceReader_*)>
          ::Call(&local_298,"next_stats_data",&local_278);
          UE4Function_Private::
          TFunctionRefCaller<<lambda_7ba9f5259ce314810519498fe7d9f36b>,void___cdecl(FRHICommandListImmediate_&,FViewportSurfaceReader_*)>
          ::Call(&local_250,&local_338,&local_298);
          if (local_338 != (uint *)0x0) {
            FMemory::Free();
          }
          uStack_378 = CONCAT44(uStack_378._4_4_,(uint)uStack_378 & ~uStack_388._4_4_);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_388);
          ppuVar11 = local_3c0;
        }
        UE4Function_Private::
        TFunctionRefCaller<<lambda_7ba9f5259ce314810519498fe7d9f36b>,void___cdecl(FRHICommandListImmediate_&,FViewportSurfaceReader_*)>
        ::Call(&local_2f8,"skills_stats_data",&local_250);
        param_1 = local_3e8;
      }
    }
    else if (cVar3 == '\x02') {
      uVar27 = (ulonglong)*(int *)((longlong)param_1 + 0x84);
      local_2d8 = &local_2c8;
      iVar20 = (int)param_1[0x32] + *(int *)((longlong)param_1 + 0x84);
      iVar10 = (int)param_1[0x37];
      if (iVar20 <= (int)param_1[0x37]) {
        iVar10 = iVar20;
      }
      local_2c8 = 0;
      local_2c0 = 0x3000000000000;
      local_2d0 = local_2f0;
      if ((longlong)uVar27 < (longlong)iVar10) {
        lVar13 = uVar27 * 0x68;
        lVar15 = (longlong)iVar10 - uVar27;
        do {
          lVar16 = param_1[0x36];
          local_3e8 = &local_208;
          local_3e0 = local_1f8;
          FUN_142ab5a90(&local_3e8,&local_208,lVar16 + 0x50 + lVar13);
          FUN_142ab6050(&local_3e8,"IsFlaggedTrash",*(undefined1 *)(lVar13 + 0x38 + lVar16));
          FUN_142ab6050(&local_3e8,"IsFlaggedFavorite",*(undefined1 *)(lVar13 + 0x39 + lVar16));
          FUN_142ab6050(&local_3e8,"IsMissionItem",*(undefined1 *)(lVar13 + 0x3a + lVar16));
          FUN_142ab64b0(&local_3e8,"ThumbnailName",lVar16 + 0x20 + lVar13);
          FString::PrintfImpl(&local_338,&DAT_14455bd60,*(undefined4 *)(lVar13 + lVar16));
          thunk_FUN_142ab4c30(&local_2d8,&local_338,local_3e8);
          if (local_338 != (uint *)0x0) {
            FMemory::Free();
          }
          lVar13 = lVar13 + 0x68;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
        uVar27 = (ulonglong)*(uint *)((longlong)param_1 + 0x84);
      }
      FUN_142ab6190(&local_2f8,"current_extraction_idx",uVar27);
      UE4Function_Private::
      TFunctionRefCaller<<lambda_7ba9f5259ce314810519498fe7d9f36b>,void___cdecl(FRHICommandListImmediate_&,FViewportSurfaceReader_*)>
      ::Call(&local_2f8,"inventory_items",&local_2d8);
      *(int *)((longlong)param_1 + 0x84) = iVar10;
      FUN_140e0b8d0(param_1,local_3d0[0],local_3c0,&local_2f8);
    }
    if (param_1[0x11] != 0) {
      local_3e8 = (longlong *)0x0;
      if ((char)param_1[0x10] == '\0') {
        local_3e0 = (uint *)0x1b;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3e8,0);
        uVar14 = 0x36;
        pwVar31 = L"CharacterProfileUpdateMain";
      }
      else if ((char)param_1[0x10] == '\x01') {
        local_3e0 = (uint *)0x1c;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3e8,0);
        uVar14 = 0x38;
        pwVar31 = L"CharacterProfileUpdateMain2";
      }
      else {
        local_3e0 = (uint *)&DAT_00000020;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3e8,0);
        uVar14 = 0x40;
        pwVar31 = L"CharacterProfileUpdateInventory";
      }
      FGenericPlatformString::Memcpy(local_3e8,pwVar31,uVar14);
      (**(code **)(*(longlong *)param_1[0x11] + 0x98))
                ((longlong *)param_1[0x11],&local_3e8,1,&local_2f8);
      if (local_3e8 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
    if (((char)param_1[0x10] == '\x02') &&
       ((int)param_1[0x37] <= *(int *)((longlong)param_1 + 0x84))) {
      *(undefined1 *)(param_1 + 0x10) = 0;
    }
    else {
      *(char *)(param_1 + 0x10) = ((char)param_1[0x10] != '\0') + '\x01';
    }
    rapidjson::
    GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
    ::
    ~GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
              (&local_208);
  }
  return;
}



// FUNCTION 140e0db60 FUN_140e0db60 body=1171 status=ok
// SIG undefined FUN_140e0db60(void)

void FUN_140e0db60(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  undefined2 *puVar4;
  ulonglong uVar5;
  undefined2 *puVar6;
  ulonglong uVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined2 **ppuVar17;
  undefined2 *puVar18;
  uint local_res8 [2];
  undefined1 local_res10;
  undefined4 local_res18;
  longlong local_res20;
  undefined8 in_stack_ffffffffffffff38;
  undefined4 uVar19;
  void *local_b8;
  undefined8 local_b0;
  undefined2 *local_a8;
  ulonglong local_a0;
  undefined2 *local_98;
  ulonglong local_90;
  undefined2 *local_88;
  ulonglong local_80;
  undefined2 *local_78;
  ulonglong local_70;
  longlong local_68 [2];
  undefined2 *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  
  uVar19 = (undefined4)((ulonglong)in_stack_ffffffffffffff38 >> 0x20);
  lVar16 = 0;
  local_res8[0] = 0;
  lVar13 = (**(code **)(*param_1 + 0x148))();
  lVar14 = FUN_142dcfb00(lVar13);
  local_res20 = lVar16;
  if (lVar14 != 0) {
    lVar15 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x90) < *(int *)(lVar15 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x88) + (longlong)*(int *)(lVar15 + 0x90) * 8
         ) != lVar15 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      local_res20 = FUN_140cfbfb0(lVar14);
    }
  }
  if (lVar13 != 0) {
    lVar16 = UWorld::GetGameState<APVPGameState>(lVar13);
  }
  if (local_res20 == 0) {
    return;
  }
  local_res20 = local_res20 + 0x50;
  lVar14 = FUN_140d3b6b0(local_res20);
  if (lVar14 == 0) {
    return;
  }
  local_b8 = (void *)0x0;
  local_b0 = 0;
  if (lVar16 == 0) {
    local_res10 = 0;
LAB_140e0dc65:
    local_res18 = 0;
  }
  else {
    iVar11 = FUN_140cb6340(lVar16);
    local_res10 = 1 < iVar11;
    cVar10 = FUN_1407c3030(lVar16 + 0x670);
    if (cVar10 == '\0') goto LAB_140e0dc65;
    local_res18 = FCachedCompositeFontData::FCachedFontRange::BinarySearchKey(lVar16 + 0x670);
  }
  local_res8[0] = local_res8[0] & 0xffffff00;
  lVar14 = FMistWorldUtils::GetDebugEntityDrawSystem(lVar13);
  if (((lVar14 == 0) || (lVar13 = FUN_142f416d0(lVar14,lVar13,local_res8), lVar13 == 0)) ||
     ((char)local_res8[0] != '\0')) {
    local_a8 = (undefined2 *)0x0;
    local_a0 = 9;
    bVar3 = false;
    bVar2 = true;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
    FGenericPlatformString::Memcpy(local_a8,L"NotFound",0x12);
    ppuVar17 = &local_a8;
  }
  else {
    bVar3 = true;
    bVar2 = false;
    ppuVar17 = (undefined2 **)FName::ToString(lVar13 + 0x78,&local_78);
  }
  local_58 = *ppuVar17;
  *ppuVar17 = (undefined2 *)0x0;
  local_50 = *(undefined4 *)(ppuVar17 + 1);
  local_4c = *(undefined4 *)((longlong)ppuVar17 + 0xc);
  ppuVar17[1] = (undefined2 *)0x0;
  if ((bVar2) && (local_a8 != (undefined2 *)0x0)) {
    FMemory::Free();
  }
  if ((bVar3) && (local_78 != (undefined2 *)0x0)) {
    FMemory::Free();
  }
  local_a8 = (undefined2 *)0x0;
  local_a0 = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
  puVar4 = local_a8;
  FGenericPlatformString::Memcpy(local_a8,L"Siren",0xc);
  local_98 = (undefined2 *)0x0;
  local_90 = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
  puVar6 = local_98;
  FGenericPlatformString::Memcpy(local_98,L"Operative",0x14);
  local_88 = (undefined2 *)0x0;
  local_80 = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
  puVar8 = local_88;
  FGenericPlatformString::Memcpy(local_88,L"Beastmaster",0x18);
  local_78 = (undefined2 *)0x0;
  local_70 = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
  puVar9 = local_78;
  FGenericPlatformString::Memcpy(local_78,L"Gunner",0xe);
  lVar13 = FUN_140d3b6b0(local_res20);
  local_res20 = *(longlong *)(lVar13 + 0x18);
  FName::ToString(&local_res20,local_68);
  uVar5 = local_a0;
  iVar11 = (int)local_a0;
  lVar13 = (longlong)(int)local_a0;
  puVar18 = &DAT_143f3eda8;
  if ((int)local_a0 != 0) {
    puVar18 = puVar4;
  }
  iVar12 = FUN_141592950(local_68,puVar18,1,0,CONCAT44(uVar19,0xffffffff));
  uVar7 = local_90;
  if (iVar12 == -1) {
    iVar11 = (int)local_90;
    lVar13 = (longlong)(int)local_90;
    puVar18 = &DAT_143f3eda8;
    if ((int)local_90 != 0) {
      puVar18 = puVar6;
    }
    iVar12 = FUN_141592950(local_68,puVar18,1,0,0xffffffff);
    uVar5 = local_80;
    if (iVar12 == -1) {
      iVar11 = (int)local_80;
      lVar13 = (longlong)(int)local_80;
      puVar18 = &DAT_143f3eda8;
      if ((int)local_80 != 0) {
        puVar18 = puVar8;
      }
      iVar12 = FUN_141592950(local_68,puVar18,1,0,0xffffffff);
      uVar7 = local_70;
      if (iVar12 == -1) {
        iVar11 = (int)local_70;
        lVar13 = (longlong)(int)local_70;
        puVar18 = &DAT_143f3eda8;
        if ((int)local_70 != 0) {
          puVar18 = puVar9;
        }
        iVar12 = FUN_141592950(local_68,puVar18,1,0,0xffffffff);
        if (iVar12 == -1) goto LAB_140e0df4a;
        local_b0 = CONCAT44(local_b0._4_4_,iVar11);
        if ((iVar11 == 0) && (local_b0._4_4_ == 0)) goto LAB_140e0df4a;
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_b8,uVar7 & 0xffffffff);
        puVar18 = puVar9;
      }
      else {
        local_b0 = CONCAT44(local_b0._4_4_,iVar11);
        if ((iVar11 == 0) && (local_b0._4_4_ == 0)) goto LAB_140e0df4a;
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_b8,uVar5 & 0xffffffff);
        puVar18 = puVar8;
      }
    }
    else {
      local_b0 = CONCAT44(local_b0._4_4_,iVar11);
      if ((iVar11 == 0) && (local_b0._4_4_ == 0)) goto LAB_140e0df4a;
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_b8,uVar7 & 0xffffffff);
      puVar18 = puVar6;
    }
  }
  else {
    local_b0 = CONCAT44(local_b0._4_4_,iVar11);
    if ((iVar11 == 0) && (local_b0._4_4_ == 0)) goto LAB_140e0df4a;
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_b8,uVar5 & 0xffffffff);
    puVar18 = puVar4;
  }
  _guard_xfg_dispatch_icall_nop(local_b8,puVar18,lVar13 * 2);
LAB_140e0df4a:
  plVar1 = (longlong *)param_1[0x11];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x90))(plVar1,&local_b8,local_res10,local_res18,&local_58);
  }
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  if (puVar9 != (undefined2 *)0x0) {
    FMemory::Free(puVar9);
  }
  if (puVar8 != (undefined2 *)0x0) {
    FMemory::Free(puVar8);
  }
  if (puVar6 != (undefined2 *)0x0) {
    FMemory::Free(puVar6);
  }
  if (puVar4 != (undefined2 *)0x0) {
    FMemory::Free(puVar4);
  }
  if (local_58 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_b8 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140e0e000 FUN_140e0e000 body=2715 status=ok
// SIG undefined FUN_140e0e000(void)

void FUN_140e0e000(longlong param_1,undefined8 param_2,int param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  void *pvVar5;
  ulonglong uVar6;
  char cVar7;
  undefined1 uVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  void **ppvVar14;
  undefined2 *puVar15;
  undefined2 *puVar16;
  longlong lVar17;
  int iVar18;
  undefined1 uVar19;
  longlong lVar20;
  int *piVar21;
  undefined4 in_stack_fffffffffffffd78;
  undefined2 uVar22;
  longlong local_270;
  undefined8 local_268;
  longlong local_260;
  undefined8 local_258;
  char local_250 [8];
  void *local_248;
  undefined8 local_240;
  longlong local_238;
  undefined8 local_230;
  void *local_228;
  int local_220;
  undefined4 local_21c;
  longlong local_218;
  undefined4 local_210;
  undefined4 local_20c;
  void *local_208;
  int local_200;
  undefined4 local_1fc;
  void *local_1f8;
  undefined8 local_1f0;
  void *local_1e8;
  undefined8 local_1e0;
  longlong local_1d8;
  undefined8 local_1d0;
  undefined1 local_1c8;
  undefined1 local_1c7;
  undefined1 local_1c6;
  longlong local_1b8;
  void *local_1b0;
  ulonglong local_1a8;
  longlong local_1a0;
  longlong *local_198;
  longlong *local_188;
  longlong *plStack_180;
  longlong local_178;
  longlong *local_170;
  longlong *local_168;
  longlong local_158 [7];
  undefined8 local_120;
  longlong local_118;
  undefined8 local_110;
  longlong local_108;
  longlong *local_100;
  longlong *local_f8;
  longlong *plStack_f0;
  longlong *local_e8;
  longlong *plStack_e0;
  longlong *local_d8;
  longlong *plStack_d0;
  longlong local_c8;
  longlong *local_c0;
  longlong local_b8;
  longlong *local_b0;
  longlong local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  undefined1 local_88 [8];
  longlong local_80 [2];
  longlong local_70 [2];
  longlong local_60 [2];
  undefined1 local_50 [8];
  longlong *local_48;
  
  local_248 = (void *)0x0;
  local_240 = 0;
  local_238 = 0;
  local_230 = 0;
  local_250[0] = '\0';
  if ((param_3 == 200) && (*param_4 != 0)) {
    puVar10 = (undefined8 *)FName::FName(local_88,L"SPARK",1);
    FUN_1404cf890(&local_170,*puVar10);
    lVar13 = *(longlong *)(param_1 + 0xa0);
    if ((lVar13 != 0) && (local_170 != (longlong *)0x0)) {
      local_198 = *(longlong **)(param_1 + 0xa8);
      if (local_198 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_198 + 1) = (int)local_198[1] + 1;
        UNLOCK();
      }
      local_108 = param_1 + 0x98;
      local_1a0 = lVar13;
      uVar11 = FWeakObjectPtr::Get(local_108);
      FUN_140bbc690(uVar11,&local_98,&local_1a0);
      lVar13 = *param_4;
      local_100 = (longlong *)param_4[1];
      local_250[0] = '\x01';
      if (local_100 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_100 + 1) = (int)local_100[1] + 1;
        UNLOCK();
      }
      lVar20 = *(longlong *)(lVar13 + 0x10);
      lVar13 = lVar20 + (longlong)*(int *)(lVar13 + 0x18) * 0x28;
      local_1b8 = lVar20;
      local_178 = lVar13;
      if (lVar20 != lVar13) {
        piVar21 = (int *)(lVar20 + 0x20);
        do {
          local_220 = piVar21[-4];
          lVar17 = (longlong)local_220;
          local_228 = (void *)0x0;
          pvVar5 = *(void **)(piVar21 + -6);
          local_1b8 = lVar20;
          if (local_220 == 0) {
            local_21c = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_228,local_220,0);
            _guard_xfg_dispatch_icall_nop(local_228,pvVar5,lVar17 * 2);
          }
          (**(code **)(*local_170 + 0x60))(local_170,&local_188,&local_228);
          plVar3 = local_188;
          puVar10 = (undefined8 *)(**(code **)(*local_98 + 0x28))(local_98,local_70);
          puVar12 = (undefined8 *)(**(code **)(*plVar3 + 0x28))(plVar3,local_80);
          if (*(int *)(puVar10 + 1) == 0) {
            puVar16 = &DAT_143f3eda8;
          }
          else {
            puVar16 = (undefined2 *)*puVar10;
          }
          if (*(int *)(puVar12 + 1) == 0) {
            puVar15 = &DAT_143f3eda8;
          }
          else {
            puVar15 = (undefined2 *)*puVar12;
          }
          iVar9 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar15,puVar16);
          if (local_80[0] != 0) {
            FMemory::Free();
          }
          if (local_70[0] != 0) {
            FMemory::Free();
          }
          uVar22 = (undefined2)((uint)in_stack_fffffffffffffd78 >> 0x10);
          if (iVar9 != 0) {
            local_1a8 = 7;
            local_1b0 = (void *)0x0;
            uVar19 = 0;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b0,0);
            FGenericPlatformString::Convert<char,wchar_t>
                      (local_1b0,7,"Online",7,CONCAT22(uVar22,0x3f));
            lVar13 = FUN_142b45e90();
            FUN_142b4a990(*(undefined8 *)(lVar13 + 0x18),&local_a8,&local_1a0);
            lVar13 = local_a8;
            if (local_a8 != 0) {
              local_158[0] = 0;
              local_158[1] = 0;
              local_158[2] = 0;
              local_158[3] = 0;
              local_158[4] = 0;
              local_158[5] = 0;
              local_158[6] = 0;
              local_120 = 0;
              local_118 = 0;
              local_110 = 0;
              uVar11 = (**(code **)(*local_188 + 0x28))(local_188,local_60);
              cVar7 = FUN_142b4b7a0(lVar13,uVar11,local_158);
              if ((cVar7 == '\0') || ((int)local_120 < 2)) {
                uVar19 = 0;
              }
              else {
                uVar19 = 1;
              }
              if (local_60[0] != 0) {
                FMemory::Free();
              }
              if (local_118 != 0) {
                FMemory::Free();
              }
              if (local_158[6] != 0) {
                FMemory::Free();
              }
              if (local_158[4] != 0) {
                FMemory::Free();
              }
              if (local_158[2] != 0) {
                FMemory::Free();
              }
              if (local_158[0] != 0) {
                FMemory::Free();
              }
            }
            uVar11 = FWeakObjectPtr::Get(local_108);
            uVar11 = FUN_140bb74b0(uVar11);
            local_f8 = local_188;
            plStack_f0 = plStack_180;
            if (plStack_180 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_180 + 1) = (int)plStack_180[1] + 1;
              UNLOCK();
            }
            uVar8 = FUN_140d89890(uVar11,&local_1a0,&local_f8,0);
            plVar3 = plStack_f0;
            if (plStack_f0 != (longlong *)0x0) {
              LOCK();
              plVar1 = plStack_f0 + 1;
              lVar13 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar13 == 1) {
                (**(code **)*plStack_f0)(plStack_f0);
                LOCK();
                piVar2 = (int *)((longlong)plVar3 + 0xc);
                iVar9 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar9 == 1) {
                  (**(code **)(*plVar3 + 8))(plVar3,1);
                }
              }
            }
            local_e8 = local_188;
            plStack_e0 = plStack_180;
            if (plStack_180 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_180 + 1) = (int)plStack_180[1] + 1;
              UNLOCK();
            }
            FUN_140d7da70(uVar11,&local_b8,&local_1a0,&local_e8,3);
            plVar3 = plStack_e0;
            if (plStack_e0 != (longlong *)0x0) {
              LOCK();
              plVar1 = plStack_e0 + 1;
              lVar13 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar13 == 1) {
                (**(code **)*plStack_e0)(plStack_e0);
                LOCK();
                piVar2 = (int *)((longlong)plVar3 + 0xc);
                iVar9 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar9 == 1) {
                  (**(code **)(*plVar3 + 8))(plVar3,1);
                }
              }
            }
            local_d8 = local_188;
            plStack_d0 = plStack_180;
            if (plStack_180 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_180 + 1) = (int)plStack_180[1] + 1;
              UNLOCK();
            }
            in_stack_fffffffffffffd78 = 0;
            FUN_140d7da70(uVar11,&local_c8,&local_1a0,&local_d8,4);
            plVar3 = plStack_d0;
            if (plStack_d0 != (longlong *)0x0) {
              LOCK();
              plVar1 = plStack_d0 + 1;
              lVar13 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar13 == 1) {
                (**(code **)*plStack_d0)(plStack_d0);
                LOCK();
                piVar2 = (int *)((longlong)plVar3 + 0xc);
                iVar9 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar9 == 1) {
                  (**(code **)(*plVar3 + 8))(plVar3,1);
                }
              }
            }
            if (local_c8 == 0) {
              local_268 = 7;
              local_208 = (void *)0x0;
              local_1fc = 0;
              local_1f8 = (void *)0x0;
              local_1f0 = 0;
              local_1e8 = (void *)0x0;
              local_1e0 = 0;
              local_1d8 = 0;
              local_1d0 = 0;
              local_270 = 0;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_270,0);
              lVar13 = local_270;
              FGenericPlatformString::Memcpy(local_270,L"friend",0xe);
              pvVar5 = local_228;
              local_218 = lVar13;
              lVar13 = (longlong)local_220;
              local_210 = (undefined4)local_268;
              local_20c = local_268._4_4_;
              local_268 = 0;
              local_270 = 0;
              local_200 = local_220;
              iVar9 = 0;
              iVar18 = 0;
              if (local_220 != 0) {
                TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_208,local_220,0);
                _guard_xfg_dispatch_icall_nop(local_208,pvVar5,lVar13 * 2);
                iVar9 = local_1f0._4_4_;
                iVar18 = local_1e0._4_4_;
              }
              if (&local_1f8 != (void **)(piVar21 + -2)) {
                iVar4 = *piVar21;
                pvVar5 = *(void **)(piVar21 + -2);
                local_1f0 = CONCAT44(local_1f0._4_4_,iVar4);
                if ((iVar4 == 0) && (iVar9 == 0)) {
                  local_1f0 = 0;
                }
                else {
                  TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_1f8,iVar4,iVar9);
                  _guard_xfg_dispatch_icall_nop(local_1f8,pvVar5,(longlong)iVar4 * 2);
                  iVar18 = local_1e0._4_4_;
                }
              }
              lVar13 = (longlong)(int)local_1a8;
              local_1e0 = CONCAT44(local_1e0._4_4_,(int)local_1a8);
              if (((int)local_1a8 == 0) && (iVar18 == 0)) {
                local_1e0 = local_1a8 & 0xffffffff;
              }
              else {
                TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                          (&local_1e8,local_1a8 & 0xffffffff,iVar18);
                _guard_xfg_dispatch_icall_nop(local_1e8,local_1b0,lVar13 * 2);
              }
              local_260 = 0;
              local_258 = 6;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_260,0);
              lVar13 = local_260;
              FGenericPlatformString::Memcpy(local_260,L"shift");
              if (local_1d8 != 0) {
                FMemory::Free();
              }
              uVar6 = local_230;
              local_1c6 = local_b8 != 0;
              local_1d8 = lVar13;
              lVar13 = (longlong)(int)local_230;
              local_1d0 = local_258;
              local_260 = 0;
              local_258 = 0;
              iVar9 = (int)local_230 + 1;
              local_230 = CONCAT44(local_230._4_4_,iVar9);
              local_1c8 = uVar19;
              local_1c7 = uVar8;
              if (local_230._4_4_ < iVar9) {
                TArray<FCloudFileHeader,FDefaultAllocator>::ResizeGrow
                          (&local_238,uVar6 & 0xffffffff);
              }
              lVar13 = lVar13 * 0x58 + local_238;
              FString::FString(lVar13,&local_218);
              FString::FString(lVar13 + 0x10,&local_208);
              FString::FString(lVar13 + 0x20,&local_1f8);
              FString::FString(lVar13 + 0x30,&local_1e8);
              FString::FString(lVar13 + 0x40,&local_1d8);
              *(undefined1 *)(lVar13 + 0x50) = local_1c8;
              *(undefined1 *)(lVar13 + 0x51) = local_1c7;
              *(undefined1 *)(lVar13 + 0x52) = local_1c6;
              if (local_1d8 != 0) {
                FMemory::Free();
              }
              if (local_1e8 != (void *)0x0) {
                FMemory::Free();
              }
              if (local_1f8 != (void *)0x0) {
                FMemory::Free();
              }
              if (local_208 != (void *)0x0) {
                FMemory::Free();
              }
              lVar20 = local_1b8;
              if (local_218 != 0) {
                FMemory::Free();
                lVar20 = local_1b8;
              }
            }
            plVar3 = local_c0;
            if (local_c0 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_c0 + 1;
              lVar13 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar13 == 1) {
                (**(code **)*local_c0)(local_c0);
                LOCK();
                piVar2 = (int *)((longlong)plVar3 + 0xc);
                iVar9 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar9 == 1) {
                  (**(code **)(*plVar3 + 8))(plVar3,1);
                }
              }
            }
            plVar3 = local_b0;
            if (local_b0 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_b0 + 1;
              lVar13 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar13 == 1) {
                (**(code **)*local_b0)(local_b0);
                LOCK();
                piVar2 = (int *)((longlong)plVar3 + 0xc);
                iVar9 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar9 == 1) {
                  (**(code **)(*plVar3 + 8))(plVar3,1);
                }
              }
            }
            plVar3 = local_a0;
            if (local_a0 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_a0 + 1;
              lVar13 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar13 == 1) {
                (**(code **)*local_a0)(local_a0);
                LOCK();
                piVar2 = (int *)((longlong)plVar3 + 0xc);
                iVar9 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar9 == 1) {
                  (**(code **)(*plVar3 + 8))(plVar3,1);
                }
              }
            }
            lVar13 = local_178;
            if (local_1b0 != (void *)0x0) {
              FMemory::Free();
              lVar13 = local_178;
            }
          }
          plVar3 = plStack_180;
          if (plStack_180 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_180 + 1;
            lVar17 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar17 == 1) {
              (**(code **)*plStack_180)(plStack_180);
              LOCK();
              piVar2 = (int *)((longlong)plVar3 + 0xc);
              iVar9 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*plVar3 + 8))(plVar3,1);
              }
            }
          }
          if (local_228 != (void *)0x0) {
            FMemory::Free();
          }
          lVar20 = lVar20 + 0x28;
          piVar21 = piVar21 + 10;
          local_1b8 = lVar20;
        } while (lVar20 != lVar13);
      }
      plVar3 = local_100;
      if (local_100 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_100 + 1;
        lVar13 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*local_100)(local_100);
          LOCK();
          piVar21 = (int *)((longlong)plVar3 + 0xc);
          iVar9 = *piVar21;
          *piVar21 = *piVar21 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
      if (local_90 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_90 + 1;
        lVar13 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*local_90)(local_90);
          LOCK();
          piVar21 = (int *)((longlong)local_90 + 0xc);
          iVar9 = *piVar21;
          *piVar21 = *piVar21 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*local_90 + 8))(local_90,1);
          }
        }
      }
      plVar3 = local_198;
      if (local_198 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_198 + 1;
        lVar13 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*local_198)(local_198);
          LOCK();
          piVar21 = (int *)((longlong)plVar3 + 0xc);
          iVar9 = *piVar21;
          *piVar21 = *piVar21 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
    }
    plVar3 = local_168;
    if (local_168 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_168 + 1;
      lVar13 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_168)(local_168);
        LOCK();
        piVar21 = (int *)((longlong)plVar3 + 0xc);
        iVar9 = *piVar21;
        *piVar21 = *piVar21 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_168 + 8))(local_168,1);
        }
      }
    }
    if (local_250[0] != '\0') goto LAB_140e0ea3d;
  }
  uVar11 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                     (local_50,L"Failed to retrieve SHiFT user list.",L"Overlay",L"UsersSearchError"
                     );
  ppvVar14 = (void **)FText::ToString(uVar11);
  if (&local_248 != ppvVar14) {
    iVar9 = *(int *)(ppvVar14 + 1);
    pvVar5 = *ppvVar14;
    local_240 = CONCAT44(local_240._4_4_,iVar9);
    if ((iVar9 == 0) && (local_240._4_4_ == 0)) {
      local_240 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_248,iVar9);
      _guard_xfg_dispatch_icall_nop(local_248,pvVar5,(longlong)iVar9 * 2);
    }
  }
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_48 + 1;
    lVar13 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar21 = (int *)((longlong)local_48 + 0xc);
      iVar9 = *piVar21;
      *piVar21 = *piVar21 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_48 + 8))(local_48,1);
      }
    }
  }
LAB_140e0ea3d:
  uVar11 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))();
  FUN_140ddb840(uVar11,"Search_SHiFT_Friends_Call_RESPONSE",local_250);
  TArray<FShapeDataPaintSpline,TSizedDefaultAllocator<32>_>::
  ~TArray<FShapeDataPaintSpline,TSizedDefaultAllocator<32>_>(&local_238);
  if (local_248 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140e0eab0 FUN_140e0eab0 body=36 status=ok
// SIG undefined FUN_140e0eab0(void)

void FUN_140e0eab0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = param_2;
  local_10 = param_3;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x498,&local_18);
  return;
}



// FUNCTION 140e0eae0 FUN_140e0eae0 body=36 status=ok
// SIG undefined FUN_140e0eae0(void)

void FUN_140e0eae0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = param_2;
  local_10 = param_3;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x4a8,&local_18);
  return;
}



// FUNCTION 140e0eb10 FUN_140e0eb10 body=1464 status=ok
// SIG undefined FUN_140e0eb10(void)

void FUN_140e0eb10(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  void *_Src;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong **pplVar11;
  int iVar12;
  undefined8 *puVar13;
  longlong lVar14;
  longlong *plVar15;
  bool bVar16;
  longlong *local_e8;
  int local_e0;
  longlong *local_d8;
  longlong *plStack_d0;
  longlong *local_c8;
  longlong *local_c0;
  int local_b8;
  longlong local_b0;
  undefined8 local_a8;
  void *local_a0;
  longlong *local_98;
  longlong local_90;
  longlong *local_88;
  longlong local_80;
  longlong *local_78;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined **local_60 [2];
  longlong *local_50;
  longlong local_48;
  
  lVar14 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146852c60) && (_Init_thread_header(&DAT_146852c60), DAT_146852c60 == -1))
  {
    FName::FName(&DAT_146852c58,L"OnlineSubsystem",1);
    _Init_thread_footer(&DAT_146852c60);
  }
  uVar10 = DAT_146852c58;
  uVar7 = FUN_14168dc80();
  plVar8 = (longlong *)FModuleManager::GetModule(uVar7,uVar10);
  plVar8 = (longlong *)(**(code **)(*plVar8 + 0x50))(plVar8,0);
  if (plVar8 == (longlong *)0x0) {
    return;
  }
  local_d8 = (longlong *)0x0;
  plStack_d0 = (longlong *)0x0;
  lVar9 = (**(code **)(*param_1 + 0x148))(param_1);
  uVar10 = UGameInstance::GetFirstGamePlayer(*(undefined8 *)(lVar9 + 400));
  lVar9 = FUN_142547b50(uVar10,local_60);
  plVar3 = *(longlong **)(lVar9 + 0x10);
  lVar9 = *(longlong *)(lVar9 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  local_60[0] = &PTR_FUN_143f740c8;
  if (local_48 != 0) {
    FMemory::Free();
  }
  local_60[0] = &PTR_FUN_143f73d18;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_50 + 1;
    lVar4 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)local_50 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  if (lVar9 != 0) {
    local_b0 = 0;
    local_a8 = 0;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    local_90 = lVar9;
    local_88 = plVar3;
    pplVar11 = (longlong **)(**(code **)(*plVar8 + 0x28))(plVar8,local_70,&local_90,&local_b0);
    if (&local_d8 != pplVar11) {
      local_d8 = *pplVar11;
      *pplVar11 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_d0,pplVar11 + 1);
    }
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_68 + 1;
      lVar4 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar1 = (int *)((longlong)local_68 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_68 + 8))(local_68,1);
        }
      }
    }
    plVar8 = local_88;
    if (local_88 != (longlong *)0x0) {
      LOCK();
      plVar15 = local_88 + 1;
      lVar4 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_88)(local_88);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
    if (local_b0 != 0) {
      FMemory::Free();
    }
  }
  iVar12 = (int)param_2[1];
  if (local_d8 == (longlong *)0x0) {
    iVar5 = 0;
    if (0 < iVar12) {
      iVar5 = rand();
      iVar6 = (int)((float)iVar5 * 3.051851e-05 * (float)iVar12);
      iVar5 = iVar12 + -1;
      if (iVar6 <= iVar12 + -1) {
        iVar5 = iVar6;
      }
    }
    FString::operator=(param_1 + 0x8f,(longlong)iVar5 * 0x10 + *param_2);
    if (param_1[0x8e] != 0) {
      if (param_1[0x31] != 0) {
        lVar14 = *(longlong *)(param_1[0x31] + 0x100);
      }
      if (lVar14 != 0) {
        FUN_1414d1ba0(lVar14,param_1 + 0x8f);
      }
    }
    goto LAB_140e0eff3;
  }
  local_c0 = (longlong *)0x0;
  puVar13 = (undefined8 *)*param_2;
  local_c8 = param_1;
  local_b8 = iVar12;
  if (iVar12 != 0) {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_c0,iVar12,0);
    lVar14 = (longlong)local_c0 - (longlong)puVar13;
    do {
      *(undefined8 *)(lVar14 + (longlong)puVar13) = 0;
      iVar5 = *(int *)(puVar13 + 1);
      _Src = (void *)*puVar13;
      *(int *)(lVar14 + 8 + (longlong)puVar13) = iVar5;
      if (iVar5 == 0) {
        *(undefined4 *)(lVar14 + 0xc + (longlong)puVar13) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(lVar14 + (longlong)puVar13,iVar5,0);
        _guard_xfg_dispatch_icall_nop
                  (*(void **)(lVar14 + (longlong)puVar13),_Src,(longlong)iVar5 * 2);
      }
      puVar13 = puVar13 + 2;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  iVar12 = local_b8;
  plVar15 = local_c0;
  plVar8 = local_c8;
  local_e8 = (longlong *)0x0;
  local_e8 = (longlong *)FMemory::Realloc(0,0x30);
  local_e0 = 3;
  local_98 = local_e8;
  if (local_e8 != (longlong *)0x0) {
    plVar2 = local_e8 + 2;
    *local_e8 = (longlong)&PTR_GetPoolName_144575df0;
    local_e8[1] = (longlong)plVar8;
    *plVar2 = 0;
    *(int *)(local_e8 + 3) = iVar12;
    if (iVar12 == 0) {
      *(undefined4 *)((longlong)local_e8 + 0x1c) = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(plVar2,iVar12,0);
      puVar13 = (undefined8 *)*plVar2;
      iVar5 = iVar12;
      do {
        *puVar13 = 0;
        iVar6 = (int)plVar15[1];
        local_a0 = (void *)*plVar15;
        *(int *)(puVar13 + 1) = iVar6;
        if (iVar6 == 0) {
          *(undefined4 *)((longlong)puVar13 + 0xc) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar13,iVar6,0);
          _guard_xfg_dispatch_icall_nop((void *)*puVar13,local_a0,(longlong)iVar6 * 2);
        }
        puVar13 = puVar13 + 2;
        plVar15 = plVar15 + 2;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    lVar14 = FDelegateHandle::GenerateNewID();
    local_98[5] = lVar14;
    *local_98 = (longlong)&PTR_GetPoolName_144575e38;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    iVar12 = local_b8;
  }
  local_80 = lVar9;
  local_78 = plVar3;
  (**(code **)(*local_d8 + 0x18))(local_d8,&local_80,param_2,&local_e8);
  plVar8 = local_78;
  if (local_78 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_78 + 1;
    lVar14 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    iVar12 = local_b8;
    if ((int)lVar14 == 1) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      iVar12 = local_b8;
      if (iVar5 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
        iVar12 = local_b8;
      }
    }
  }
  if (local_e0 == 0) {
LAB_140e0ef31:
    plVar8 = local_c0;
    plVar15 = local_c0;
    if (local_e8 != (longlong *)0x0) {
      FMemory::Free(local_e8);
      plVar8 = local_c0;
      plVar15 = local_c0;
    }
  }
  else {
    plVar8 = local_c0;
    plVar15 = local_c0;
    if (local_e8 != (longlong *)0x0) {
      (**(code **)(*local_e8 + 0x28))(local_e8,0);
      if (local_e8 != (longlong *)0x0) {
        local_e8 = (longlong *)FMemory::Realloc(local_e8,0,0);
      }
      local_e0 = 0;
      goto LAB_140e0ef31;
    }
  }
  for (; plVar2 = local_c0, iVar12 != 0; iVar12 = iVar12 + -1) {
    local_c0 = plVar15;
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
    plVar15 = local_c0;
    local_c0 = plVar2;
  }
  bVar16 = local_c0 != (longlong *)0x0;
  local_c0 = plVar15;
  if (bVar16) {
    FMemory::Free(plVar2);
  }
LAB_140e0eff3:
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar3 + 1;
    lVar14 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  plVar8 = plStack_d0;
  if (plStack_d0 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_d0 + 1;
    lVar14 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*plStack_d0)(plStack_d0);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plStack_d0 + 8))(plStack_d0,1);
      }
    }
  }
  return;
}



// FUNCTION 140e0f0d0 AddUObject<UHelloNeighborGameInstance> body=224 status=ok
// SIG undefined AddUObject<UHelloNeighborGameInstance>(void)

undefined8
TBaseMulticastDelegate<void>::AddUObject<UHelloNeighborGameInstance>
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *local_28;
  int local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *param_4;
  uStack_14 = param_4[1];
  uStack_10 = param_4[2];
  uStack_c = param_4[3];
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_FUN_143fcff50;
    FWeakObjectPtr::operator=(plVar1 + 1,param_3);
    *(undefined4 *)(plVar1 + 2) = local_18;
    *(undefined4 *)((longlong)plVar1 + 0x14) = uStack_14;
    *(undefined4 *)(plVar1 + 3) = uStack_10;
    *(undefined4 *)((longlong)plVar1 + 0x1c) = uStack_c;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[5] = lVar2;
    *plVar1 = (longlong)&PTR_FUN_143fcff98;
  }
  Add(param_1,param_2,&local_28);
  plVar1 = local_28;
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return param_2;
    }
    (**(code **)(*local_28 + 0x28))(local_28,0);
    plVar1 = (longlong *)FMemory::Realloc(plVar1,0,0);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return param_2;
}



// FUNCTION 140e0f1b0 FUN_140e0f1b0 body=139 status=ok
// SIG undefined FUN_140e0f1b0(void)

ulonglong FUN_140e0f1b0(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  plVar2 = (longlong *)*param_1;
  uVar1 = *(uint *)(param_1 + 1);
  if (plVar2 != plVar2 + (longlong)(int)uVar1 * 2) {
    plVar4 = plVar2;
    do {
      if (*plVar4 == *param_2) {
        uVar5 = (longlong)plVar4 - (longlong)plVar2 >> 4;
        if ((int)uVar5 != -1) {
          return uVar5;
        }
        break;
      }
      plVar4 = plVar4 + 2;
    } while (plVar4 != plVar2 + (longlong)(int)uVar1 * 2);
  }
  *(uint *)(param_1 + 1) = uVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar1 + 1)) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,uVar1);
  }
  lVar3 = param_2[1];
  plVar2 = (longlong *)(*param_1 + (longlong)(int)uVar1 * 0x10);
  *plVar2 = *param_2;
  plVar2[1] = lVar3;
  return (ulonglong)uVar1;
}



// FUNCTION 140e0f240 FUN_140e0f240 body=314 status=ok
// SIG undefined FUN_140e0f240(void)

void FUN_140e0f240(longlong *param_1,undefined8 param_2)

{
  longlong *local_78;
  undefined8 local_70;
  undefined **local_68;
  char *local_60;
  undefined1 local_58;
  undefined4 local_50;
  undefined **local_48;
  char *local_40;
  undefined1 local_38;
  undefined4 local_30;
  undefined **local_28;
  char *local_20;
  undefined1 local_18;
  undefined4 local_10;
  
  (**(code **)(*param_1 + 0x28))();
  (**(code **)(*param_1 + 0x10))(param_1,&local_78,"response",param_2);
  if (local_78 == (longlong *)0x0) {
    cohtml::TypeDescription::~TypeDescription((TypeDescription *)&local_78);
  }
  else {
    local_60 = "success";
    local_58 = 1;
    local_68 = &PTR_FUN_1445760c0;
    local_50 = 0;
    (**(code **)(*local_78 + 0x18))(local_78,local_70,&local_68);
    local_68 = &PTR_FUN_143f47bd8;
    local_40 = "successMessage";
    local_38 = 1;
    local_48 = &PTR_FUN_144576140;
    local_30 = 0x18;
    (**(code **)(*local_78 + 0x18))(local_78,local_70,&local_48);
    local_48 = &PTR_FUN_143f47bd8;
    local_20 = "errorMessage";
    local_18 = 1;
    local_28 = &PTR_FUN_144576140;
    local_10 = 8;
    (**(code **)(*local_78 + 0x18))(local_78,local_70,&local_28);
    cohtml::TypeDescription::~TypeDescription((TypeDescription *)&local_78);
  }
                    /* WARNING: Could not recover jumptable at 0x000140e0f376. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))(param_1,param_2);
  return;
}



// FUNCTION 140e0f380 FUN_140e0f380 body=78 status=ok
// SIG undefined FUN_140e0f380(void)

void FUN_140e0f380(longlong *param_1,longlong param_2,longlong param_3)

{
  if (param_2 != 0) {
    param_2 = param_3 * 0x38 + param_2;
    (**(code **)(*param_1 + 0x28))();
    FUN_140e1b7f0(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000140e0f3be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x48))(param_1,param_2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140e0f3c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x98))();
  return;
}



// FUNCTION 140e0f3d0 FUN_140e0f3d0 body=63 status=ok
// SIG undefined FUN_140e0f3d0(void)

void FUN_140e0f3d0(longlong *param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_3 * 0x38 + *param_2;
  (**(code **)(*param_1 + 0x38))();
  FUN_140e1b7f0(param_1,lVar1);
                    /* WARNING: Could not recover jumptable at 0x000140e0f40b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))(param_1,lVar1);
  return;
}



// FUNCTION 140e0f410 FUN_140e0f410 body=78 status=ok
// SIG undefined FUN_140e0f410(void)

void FUN_140e0f410(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = AInteractiveFoliageActor::GetPrivateStaticClass();
  FUN_141752410(param_1,param_2,uVar1,uVar1,1,0,param_3);
  return;
}



// FUNCTION 140e0f460 FUN_140e0f460 body=255 status=ok
// SIG undefined FUN_140e0f460(void)

longlong FUN_140e0f460(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_58 [24];
  undefined4 local_40;
  undefined8 local_3c;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  
  lVar5 = *param_1;
  lVar4 = (longlong)(int)param_1[1] * 0x30 + lVar5;
  while( true ) {
    if (lVar5 == lVar4) {
      return 0;
    }
    lVar1 = *param_2;
    local_28 = 0;
    local_20 = 0;
    local_40 = 0xffffffff;
    local_3c = 0;
    local_30 = 0;
    if (lVar1 == 0) {
      local_30 = 0;
    }
    else {
      uVar3 = FSoftObjectPath::FSoftObjectPath(local_58,lVar1);
      FSoftObjectPath::operator=(&local_30,uVar3);
      FWeakObjectPtr::operator=(&local_40,lVar1);
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      local_3c = CONCAT44(DAT_1464b56f4,(undefined4)local_3c);
    }
    cVar2 = FSoftObjectPath::operator==(lVar5 + 0x10,&local_30);
    if (local_28 != 0) {
      FMemory::Free();
    }
    if (cVar2 != '\0') break;
    lVar5 = lVar5 + 0x30;
  }
  return lVar5;
}



// FUNCTION 140e0f560 FUN_140e0f560 body=670 status=ok
// SIG undefined FUN_140e0f560(void)

longlong FUN_140e0f560(longlong *param_1)

{
  void *_Dst;
  short *psVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  short *psVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  wchar_t *pwVar12;
  short *psVar13;
  undefined2 *puVar14;
  wchar_t *_Src;
  uint uVar15;
  int iVar16;
  wchar_t *local_38;
  int local_30;
  undefined4 local_2c;
  
  psVar1 = (short *)*param_1;
  pwVar12 = (wchar_t *)0x0;
  uVar3 = 0;
  iVar16 = (int)param_1[1];
  puVar14 = &DAT_143f3eda8;
  psVar13 = psVar1 + iVar16;
  psVar8 = psVar1;
  if (psVar13 != psVar1) {
    do {
      if (*psVar8 == 0x2e) {
        if ((int)((longlong)psVar8 - (longlong)psVar1 >> 1) != -1) goto LAB_140e0f761;
        break;
      }
      psVar8 = psVar8 + 1;
    } while (psVar8 != psVar13);
    do {
      if (psVar13 == psVar1) goto LAB_140e0f761;
      psVar13 = psVar13 + -1;
    } while (*psVar13 != 0x2f);
    iVar11 = (int)((longlong)psVar13 - (longlong)psVar1 >> 1);
    if (iVar11 != -1) {
      uVar7 = iVar11 + 0x80000000;
      uVar15 = iVar16 - 1;
      if (iVar16 == 0) {
        uVar15 = uVar3;
      }
      if (iVar11 + 1U < uVar15) {
        uVar15 = iVar11 + 1U;
      }
      uVar9 = iVar16 - 1;
      if (iVar16 == 0) {
        uVar9 = uVar3;
      }
      uVar10 = uVar15;
      if ((uVar15 <= uVar7) && (uVar10 = uVar9, uVar7 < uVar9)) {
        uVar10 = uVar7;
      }
      local_38 = (wchar_t *)0x0;
      local_2c = 0;
      psVar13 = &DAT_143f3eda8;
      if (iVar16 != 0) {
        psVar13 = psVar1;
      }
      iVar11 = uVar10 - uVar15;
      iVar16 = iVar11 + 1;
      if (iVar11 == 0) {
        iVar16 = 0;
      }
      _Src = pwVar12;
      local_30 = iVar16;
      if ((0 < iVar16) &&
         (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0), iVar16 = local_30,
         _Src = local_38, 0 < local_30)) {
        wcsncpy(local_38,psVar13 + (int)uVar15,(longlong)iVar11);
        _Src[iVar11] = L'\0';
      }
      iVar11 = (int)param_1[1];
      uVar7 = iVar11 - 1;
      if (iVar11 < 1) {
        uVar7 = uVar3;
      }
      iVar11 = (iVar11 < 1) + 1 + iVar11;
      *(int *)(param_1 + 1) = iVar11;
      if (*(int *)((longlong)param_1 + 0xc) < iVar11) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
      }
      *(undefined2 *)(*param_1 + (longlong)(int)uVar7 * 2) = 0x2e;
      *(undefined2 *)(*param_1 + 2 + (longlong)(int)uVar7 * 2) = 0;
      if ((iVar16 != 0) && (iVar16 = iVar16 + -1, iVar16 != 0)) {
        iVar11 = (int)param_1[1];
        iVar2 = (uint)(iVar11 == 0) + iVar11 + iVar16;
        *(int *)(param_1 + 1) = iVar2;
        if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar11);
        }
        _Dst = (void *)(*param_1 + ((longlong)iVar11 - (ulonglong)(iVar11 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar16 * 2);
        *(undefined2 *)((longlong)iVar16 * 2 + (longlong)_Dst) = 0;
      }
      if (_Src != (wchar_t *)0x0) {
        FMemory::Free(_Src);
      }
    }
  }
LAB_140e0f761:
  plVar4 = (longlong *)FUN_14130c510();
  if (plVar4[0x1f] == 0) {
    (**(code **)(*plVar4 + 0x368))(plVar4);
  }
  if ((int)param_1[1] != 0) {
    puVar14 = (undefined2 *)*param_1;
  }
  uVar5 = FUN_14130c510();
  lVar6 = FUN_141799c90(uVar5,0,puVar14,0,0,0,1);
  if (lVar6 != 0) {
    iVar16 = *(int *)(lVar6 + 0xc);
    if (iVar16 < (int)DAT_1469e91c4) {
      uVar7 = iVar16 >> 0x1f & 0xffff;
      uVar3 = iVar16 + uVar7;
      pwVar12 = (wchar_t *)
                (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                (longlong)(int)((uVar3 & 0xffff) - uVar7) * 0x18);
    }
    *(uint *)(pwVar12 + 4) = *(uint *)(pwVar12 + 4) | 0x40000000;
  }
  return lVar6;
}



// FUNCTION 140e0f800 FUN_140e0f800 body=670 status=ok
// SIG undefined FUN_140e0f800(void)

longlong FUN_140e0f800(longlong *param_1)

{
  void *_Dst;
  short *psVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  short *psVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  wchar_t *pwVar12;
  short *psVar13;
  undefined2 *puVar14;
  wchar_t *_Src;
  uint uVar15;
  int iVar16;
  wchar_t *local_38;
  int local_30;
  undefined4 local_2c;
  
  psVar1 = (short *)*param_1;
  pwVar12 = (wchar_t *)0x0;
  uVar3 = 0;
  iVar16 = (int)param_1[1];
  puVar14 = &DAT_143f3eda8;
  psVar13 = psVar1 + iVar16;
  psVar8 = psVar1;
  if (psVar13 != psVar1) {
    do {
      if (*psVar8 == 0x2e) {
        if ((int)((longlong)psVar8 - (longlong)psVar1 >> 1) != -1) goto LAB_140e0fa01;
        break;
      }
      psVar8 = psVar8 + 1;
    } while (psVar8 != psVar13);
    do {
      if (psVar13 == psVar1) goto LAB_140e0fa01;
      psVar13 = psVar13 + -1;
    } while (*psVar13 != 0x2f);
    iVar11 = (int)((longlong)psVar13 - (longlong)psVar1 >> 1);
    if (iVar11 != -1) {
      uVar7 = iVar11 + 0x80000000;
      uVar15 = iVar16 - 1;
      if (iVar16 == 0) {
        uVar15 = uVar3;
      }
      if (iVar11 + 1U < uVar15) {
        uVar15 = iVar11 + 1U;
      }
      uVar9 = iVar16 - 1;
      if (iVar16 == 0) {
        uVar9 = uVar3;
      }
      uVar10 = uVar15;
      if ((uVar15 <= uVar7) && (uVar10 = uVar9, uVar7 < uVar9)) {
        uVar10 = uVar7;
      }
      local_38 = (wchar_t *)0x0;
      local_2c = 0;
      psVar13 = &DAT_143f3eda8;
      if (iVar16 != 0) {
        psVar13 = psVar1;
      }
      iVar11 = uVar10 - uVar15;
      iVar16 = iVar11 + 1;
      if (iVar11 == 0) {
        iVar16 = 0;
      }
      _Src = pwVar12;
      local_30 = iVar16;
      if ((0 < iVar16) &&
         (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0), iVar16 = local_30,
         _Src = local_38, 0 < local_30)) {
        wcsncpy(local_38,psVar13 + (int)uVar15,(longlong)iVar11);
        _Src[iVar11] = L'\0';
      }
      iVar11 = (int)param_1[1];
      uVar7 = iVar11 - 1;
      if (iVar11 < 1) {
        uVar7 = uVar3;
      }
      iVar11 = (iVar11 < 1) + 1 + iVar11;
      *(int *)(param_1 + 1) = iVar11;
      if (*(int *)((longlong)param_1 + 0xc) < iVar11) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
      }
      *(undefined2 *)(*param_1 + (longlong)(int)uVar7 * 2) = 0x2e;
      *(undefined2 *)(*param_1 + 2 + (longlong)(int)uVar7 * 2) = 0;
      if ((iVar16 != 0) && (iVar16 = iVar16 + -1, iVar16 != 0)) {
        iVar11 = (int)param_1[1];
        iVar2 = (uint)(iVar11 == 0) + iVar11 + iVar16;
        *(int *)(param_1 + 1) = iVar2;
        if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar11);
        }
        _Dst = (void *)(*param_1 + ((longlong)iVar11 - (ulonglong)(iVar11 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar16 * 2);
        *(undefined2 *)((longlong)iVar16 * 2 + (longlong)_Dst) = 0;
      }
      if (_Src != (wchar_t *)0x0) {
        FMemory::Free(_Src);
      }
    }
  }
LAB_140e0fa01:
  plVar4 = (longlong *)UCameraShake::GetPrivateStaticClass();
  if (plVar4[0x1f] == 0) {
    (**(code **)(*plVar4 + 0x368))(plVar4);
  }
  if ((int)param_1[1] != 0) {
    puVar14 = (undefined2 *)*param_1;
  }
  uVar5 = UCameraShake::GetPrivateStaticClass();
  lVar6 = FUN_141799c90(uVar5,0,puVar14,0,0,0,1);
  if (lVar6 != 0) {
    iVar16 = *(int *)(lVar6 + 0xc);
    if (iVar16 < (int)DAT_1469e91c4) {
      uVar7 = iVar16 >> 0x1f & 0xffff;
      uVar3 = iVar16 + uVar7;
      pwVar12 = (wchar_t *)
                (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                (longlong)(int)((uVar3 & 0xffff) - uVar7) * 0x18);
    }
    *(uint *)(pwVar12 + 4) = *(uint *)(pwVar12 + 4) | 0x40000000;
  }
  return lVar6;
}



// FUNCTION 140e0faa0 FUN_140e0faa0 body=670 status=ok
// SIG undefined FUN_140e0faa0(void)

longlong FUN_140e0faa0(longlong *param_1)

{
  void *_Dst;
  short *psVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  short *psVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  wchar_t *pwVar12;
  short *psVar13;
  undefined2 *puVar14;
  wchar_t *_Src;
  uint uVar15;
  int iVar16;
  wchar_t *local_38;
  int local_30;
  undefined4 local_2c;
  
  psVar1 = (short *)*param_1;
  pwVar12 = (wchar_t *)0x0;
  uVar3 = 0;
  iVar16 = (int)param_1[1];
  puVar14 = &DAT_143f3eda8;
  psVar13 = psVar1 + iVar16;
  psVar8 = psVar1;
  if (psVar13 != psVar1) {
    do {
      if (*psVar8 == 0x2e) {
        if ((int)((longlong)psVar8 - (longlong)psVar1 >> 1) != -1) goto LAB_140e0fca1;
        break;
      }
      psVar8 = psVar8 + 1;
    } while (psVar8 != psVar13);
    do {
      if (psVar13 == psVar1) goto LAB_140e0fca1;
      psVar13 = psVar13 + -1;
    } while (*psVar13 != 0x2f);
    iVar11 = (int)((longlong)psVar13 - (longlong)psVar1 >> 1);
    if (iVar11 != -1) {
      uVar7 = iVar11 + 0x80000000;
      uVar15 = iVar16 - 1;
      if (iVar16 == 0) {
        uVar15 = uVar3;
      }
      if (iVar11 + 1U < uVar15) {
        uVar15 = iVar11 + 1U;
      }
      uVar9 = iVar16 - 1;
      if (iVar16 == 0) {
        uVar9 = uVar3;
      }
      uVar10 = uVar15;
      if ((uVar15 <= uVar7) && (uVar10 = uVar9, uVar7 < uVar9)) {
        uVar10 = uVar7;
      }
      local_38 = (wchar_t *)0x0;
      local_2c = 0;
      psVar13 = &DAT_143f3eda8;
      if (iVar16 != 0) {
        psVar13 = psVar1;
      }
      iVar11 = uVar10 - uVar15;
      iVar16 = iVar11 + 1;
      if (iVar11 == 0) {
        iVar16 = 0;
      }
      _Src = pwVar12;
      local_30 = iVar16;
      if ((0 < iVar16) &&
         (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0), iVar16 = local_30,
         _Src = local_38, 0 < local_30)) {
        wcsncpy(local_38,psVar13 + (int)uVar15,(longlong)iVar11);
        _Src[iVar11] = L'\0';
      }
      iVar11 = (int)param_1[1];
      uVar7 = iVar11 - 1;
      if (iVar11 < 1) {
        uVar7 = uVar3;
      }
      iVar11 = (iVar11 < 1) + 1 + iVar11;
      *(int *)(param_1 + 1) = iVar11;
      if (*(int *)((longlong)param_1 + 0xc) < iVar11) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
      }
      *(undefined2 *)(*param_1 + (longlong)(int)uVar7 * 2) = 0x2e;
      *(undefined2 *)(*param_1 + 2 + (longlong)(int)uVar7 * 2) = 0;
      if ((iVar16 != 0) && (iVar16 = iVar16 + -1, iVar16 != 0)) {
        iVar11 = (int)param_1[1];
        iVar2 = (uint)(iVar11 == 0) + iVar11 + iVar16;
        *(int *)(param_1 + 1) = iVar2;
        if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar11);
        }
        _Dst = (void *)(*param_1 + ((longlong)iVar11 - (ulonglong)(iVar11 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar16 * 2);
        *(undefined2 *)((longlong)iVar16 * 2 + (longlong)_Dst) = 0;
      }
      if (_Src != (wchar_t *)0x0) {
        FMemory::Free(_Src);
      }
    }
  }
LAB_140e0fca1:
  plVar4 = (longlong *)USkeleton::GetPrivateStaticClass();
  if (plVar4[0x1f] == 0) {
    (**(code **)(*plVar4 + 0x368))(plVar4);
  }
  if ((int)param_1[1] != 0) {
    puVar14 = (undefined2 *)*param_1;
  }
  uVar5 = USkeleton::GetPrivateStaticClass();
  lVar6 = FUN_141799c90(uVar5,0,puVar14,0,0,0,1);
  if (lVar6 != 0) {
    iVar16 = *(int *)(lVar6 + 0xc);
    if (iVar16 < (int)DAT_1469e91c4) {
      uVar7 = iVar16 >> 0x1f & 0xffff;
      uVar3 = iVar16 + uVar7;
      pwVar12 = (wchar_t *)
                (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                (longlong)(int)((uVar3 & 0xffff) - uVar7) * 0x18);
    }
    *(uint *)(pwVar12 + 4) = *(uint *)(pwVar12 + 4) | 0x40000000;
  }
  return lVar6;
}



// FUNCTION 140e0fd40 FUN_140e0fd40 body=1073 status=ok
// SIG undefined FUN_140e0fd40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e0fd40(longlong param_1,longlong param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong **_Src;
  ulonglong uVar8;
  uint uVar9;
  uint *puVar10;
  longlong *plVar11;
  uint uVar12;
  int iVar13;
  longlong *plVar14;
  ulonglong uVar15;
  undefined1 auStack_e8 [32];
  char local_c8;
  longlong *local_c0;
  int local_b8;
  uint uStack_b4;
  uint *puStack_b0;
  undefined4 local_a8;
  uint uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  int local_90;
  int local_8c;
  longlong *local_88;
  int iStack_80;
  uint uStack_7c;
  uint *local_78;
  uint uStack_70;
  uint uStack_6c;
  longlong **local_68;
  longlong *local_60;
  undefined8 uStack_58;
  uint *puStack_50;
  uint uStack_48;
  uint uStack_44;
  longlong **pplStack_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  *(undefined4 *)(param_2 + 0x28) = 0;
  local_c8 = param_3;
  if (0x7fffffff < *(uint *)(param_2 + 0x2c)) {
    TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeTo(param_2,0);
  }
  plVar11 = (longlong *)0x0;
  uStack_b4 = 1;
  local_c0 = (longlong *)(param_1 + 0x2b0);
  local_98 = (longlong *)0x0;
  uVar1 = *(uint *)(param_1 + 0x2d8);
  puStack_b0 = (uint *)(param_1 + 0x2c0);
  local_8c = 0;
  iVar13 = 0;
  local_b8 = 0;
  uStack_a4 = 0;
  iStack_a0 = 0;
  if (uVar1 != 0) {
    puVar10 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar10 = puStack_b0;
    }
    uVar12 = *puVar10;
    iStack_a0 = 0;
    local_b8 = 0;
    while (uVar12 == 0) {
      lVar7 = (longlong)local_b8;
      iStack_a0 = iStack_a0 + 0x20;
      iVar5 = local_b8 + 1;
      bVar3 = (int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_b8;
      local_b8 = iVar5;
      if (bVar3) goto LAB_140e0fe5a;
      uVar12 = puVar10[lVar7 + 1];
    }
    uStack_b4 = uVar12 - 1 & uVar12 ^ uVar12;
    iVar5 = 0x1f;
    if (uStack_b4 != 0) {
      for (; uStack_b4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_b4 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uStack_a4 = (iStack_a0 - iVar5) + 0x1f;
    if ((int)uVar1 < (int)uStack_a4) {
LAB_140e0fe5a:
      uStack_a4 = uVar1;
    }
  }
  local_a8 = 0xffffffff;
  uVar12 = *(uint *)(param_1 + 0x2d8);
  uStack_58 = CONCAT44(uStack_b4,local_b8);
  uStack_70 = 0xffffffff;
  uStack_6c = uStack_a4;
  local_68 = (longlong **)CONCAT44(uStack_9c,iStack_a0);
  uVar9 = uVar12 & 0xffffffe0;
  iStack_80 = local_b8;
  uStack_7c = uStack_b4;
  if (uVar12 != uVar1) {
    puVar10 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar10 = puStack_b0;
    }
    uVar6 = puVar10[(int)uVar12 >> 5] & -1 << ((byte)uVar12 & 0x1f);
    iVar5 = (int)uVar12 >> 5;
    while (uVar6 == 0) {
      uVar9 = uVar9 + 0x20;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_140e0ff1d;
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
LAB_140e0ff1d:
      uVar12 = uVar1;
    }
  }
  iVar5 = 0;
  local_78 = puStack_b0;
  local_60 = local_c0;
  puStack_50 = puStack_b0;
  pplStack_40 = local_68;
  local_88 = local_c0;
  uStack_48 = uStack_70;
  uStack_44 = uStack_6c;
  while( true ) {
    if ((uStack_6c == uVar12) && (local_78 == puStack_b0)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((bVar3) && (local_88 == local_c0)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) break;
    lVar7 = *(longlong *)(*local_88 + (longlong)(int)uStack_6c * 0x10);
    if (lVar7 != 0) {
      lVar4 = UCheckBox::GetPrivateStaticClass();
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
        iVar2 = *(int *)(param_2 + 0x28);
        *(int *)(param_2 + 0x28) = iVar2 + 1;
        if (*(int *)(param_2 + 0x2c) < iVar2 + 1) {
          TArray<FAnimNode_3DBlend::FActiveSample,TInlineAllocator<4,FDefaultAllocator>_>::
          ResizeGrow(param_2,iVar2);
        }
        lVar4 = *(longlong *)(param_2 + 0x20);
        if (*(longlong *)(param_2 + 0x20) == 0) {
          lVar4 = param_2;
        }
        *(longlong *)(lVar4 + (longlong)iVar2 * 8) = lVar7;
      }
    }
    if ((local_c8 != '\0') && (lVar7 != 0)) {
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
        local_90 = iVar13 + 1;
        if (iVar5 < local_90) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_98,iVar13);
          plVar11 = local_98;
          iVar5 = local_8c;
        }
        plVar11[iVar13] = lVar7;
        iVar13 = local_90;
      }
    }
    uStack_70 = uStack_70 & ~uStack_7c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_80);
  }
  if (local_c8 != '\0') {
    uVar8 = 0;
    pplStack_40 = (longlong **)0x0;
    local_38 = 0;
    uVar15 = (ulonglong)((longlong)(plVar11 + iVar13) + (7 - (longlong)plVar11)) >> 3;
    if (plVar11 + iVar13 < plVar11) {
      uVar15 = uVar8;
    }
    plVar14 = plVar11;
    if (uVar15 != 0) {
      do {
        if (*(longlong *)(*plVar14 + 0x2d8) != 0) {
          FUN_140e0fd40(*(longlong *)(*plVar14 + 0x2d8),&local_60,1);
          iVar13 = (int)local_38;
          lVar7 = (longlong)(int)local_38;
          if ((int)local_38 != 0) {
            iVar5 = *(int *)(param_2 + 0x28);
            if (*(int *)(param_2 + 0x2c) < (int)local_38 + iVar5) {
              TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeTo
                        (param_2);
              iVar5 = *(int *)(param_2 + 0x28);
            }
            _Src = &local_60;
            if (pplStack_40 != (longlong **)0x0) {
              _Src = pplStack_40;
            }
            lVar4 = *(longlong *)(param_2 + 0x20);
            if (*(longlong *)(param_2 + 0x20) == 0) {
              lVar4 = param_2;
            }
            _guard_xfg_dispatch_icall_nop((void *)(lVar4 + (longlong)iVar5 * 8),_Src,lVar7 << 3);
            *(int *)(param_2 + 0x28) = *(int *)(param_2 + 0x28) + iVar13;
            local_38 = local_38 & 0xffffffff00000000;
          }
        }
        plVar14 = plVar14 + 1;
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar15);
      if (pplStack_40 != (longlong **)0x0) {
        FMemory::Free();
      }
    }
  }
  if (plVar11 != (longlong *)0x0) {
    FMemory::Free(plVar11);
  }
  return;
}



// FUNCTION 140e10180 FUN_140e10180 body=1073 status=ok
// SIG undefined FUN_140e10180(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e10180(longlong param_1,longlong param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong **_Src;
  ulonglong uVar8;
  uint uVar9;
  uint *puVar10;
  longlong *plVar11;
  uint uVar12;
  int iVar13;
  longlong *plVar14;
  ulonglong uVar15;
  undefined1 auStack_e8 [32];
  char local_c8;
  longlong *local_c0;
  int local_b8;
  uint uStack_b4;
  uint *puStack_b0;
  undefined4 local_a8;
  uint uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  int local_90;
  int local_8c;
  longlong *local_88;
  int iStack_80;
  uint uStack_7c;
  uint *local_78;
  uint uStack_70;
  uint uStack_6c;
  longlong **local_68;
  longlong *local_60;
  undefined8 uStack_58;
  uint *puStack_50;
  uint uStack_48;
  uint uStack_44;
  longlong **pplStack_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  *(undefined4 *)(param_2 + 0x28) = 0;
  local_c8 = param_3;
  if (0x7fffffff < *(uint *)(param_2 + 0x2c)) {
    TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeTo(param_2,0);
  }
  plVar11 = (longlong *)0x0;
  uStack_b4 = 1;
  local_c0 = (longlong *)(param_1 + 0x2b0);
  local_98 = (longlong *)0x0;
  uVar1 = *(uint *)(param_1 + 0x2d8);
  puStack_b0 = (uint *)(param_1 + 0x2c0);
  local_8c = 0;
  iVar13 = 0;
  local_b8 = 0;
  uStack_a4 = 0;
  iStack_a0 = 0;
  if (uVar1 != 0) {
    puVar10 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar10 = puStack_b0;
    }
    uVar12 = *puVar10;
    iStack_a0 = 0;
    local_b8 = 0;
    while (uVar12 == 0) {
      lVar7 = (longlong)local_b8;
      iStack_a0 = iStack_a0 + 0x20;
      iVar5 = local_b8 + 1;
      bVar3 = (int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_b8;
      local_b8 = iVar5;
      if (bVar3) goto LAB_140e1029a;
      uVar12 = puVar10[lVar7 + 1];
    }
    uStack_b4 = uVar12 - 1 & uVar12 ^ uVar12;
    iVar5 = 0x1f;
    if (uStack_b4 != 0) {
      for (; uStack_b4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_b4 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uStack_a4 = (iStack_a0 - iVar5) + 0x1f;
    if ((int)uVar1 < (int)uStack_a4) {
LAB_140e1029a:
      uStack_a4 = uVar1;
    }
  }
  local_a8 = 0xffffffff;
  uVar12 = *(uint *)(param_1 + 0x2d8);
  uStack_58 = CONCAT44(uStack_b4,local_b8);
  uStack_70 = 0xffffffff;
  uStack_6c = uStack_a4;
  local_68 = (longlong **)CONCAT44(uStack_9c,iStack_a0);
  uVar9 = uVar12 & 0xffffffe0;
  iStack_80 = local_b8;
  uStack_7c = uStack_b4;
  if (uVar12 != uVar1) {
    puVar10 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar10 = puStack_b0;
    }
    uVar6 = puVar10[(int)uVar12 >> 5] & -1 << ((byte)uVar12 & 0x1f);
    iVar5 = (int)uVar12 >> 5;
    while (uVar6 == 0) {
      uVar9 = uVar9 + 0x20;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_140e1035d;
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
LAB_140e1035d:
      uVar12 = uVar1;
    }
  }
  iVar5 = 0;
  local_78 = puStack_b0;
  local_60 = local_c0;
  puStack_50 = puStack_b0;
  pplStack_40 = local_68;
  local_88 = local_c0;
  uStack_48 = uStack_70;
  uStack_44 = uStack_6c;
  while( true ) {
    if ((uStack_6c == uVar12) && (local_78 == puStack_b0)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((bVar3) && (local_88 == local_c0)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) break;
    lVar7 = *(longlong *)(*local_88 + (longlong)(int)uStack_6c * 0x10);
    if (lVar7 != 0) {
      lVar4 = AArchVisCharacter::StaticClass();
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
        iVar2 = *(int *)(param_2 + 0x28);
        *(int *)(param_2 + 0x28) = iVar2 + 1;
        if (*(int *)(param_2 + 0x2c) < iVar2 + 1) {
          TArray<FAnimNode_3DBlend::FActiveSample,TInlineAllocator<4,FDefaultAllocator>_>::
          ResizeGrow(param_2,iVar2);
        }
        lVar4 = *(longlong *)(param_2 + 0x20);
        if (*(longlong *)(param_2 + 0x20) == 0) {
          lVar4 = param_2;
        }
        *(longlong *)(lVar4 + (longlong)iVar2 * 8) = lVar7;
      }
    }
    if ((local_c8 != '\0') && (lVar7 != 0)) {
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
        local_90 = iVar13 + 1;
        if (iVar5 < local_90) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_98,iVar13);
          plVar11 = local_98;
          iVar5 = local_8c;
        }
        plVar11[iVar13] = lVar7;
        iVar13 = local_90;
      }
    }
    uStack_70 = uStack_70 & ~uStack_7c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_80);
  }
  if (local_c8 != '\0') {
    uVar8 = 0;
    pplStack_40 = (longlong **)0x0;
    local_38 = 0;
    uVar15 = (ulonglong)((longlong)(plVar11 + iVar13) + (7 - (longlong)plVar11)) >> 3;
    if (plVar11 + iVar13 < plVar11) {
      uVar15 = uVar8;
    }
    plVar14 = plVar11;
    if (uVar15 != 0) {
      do {
        if (*(longlong *)(*plVar14 + 0x2d8) != 0) {
          FUN_140e10180(*(longlong *)(*plVar14 + 0x2d8),&local_60,1);
          iVar13 = (int)local_38;
          lVar7 = (longlong)(int)local_38;
          if ((int)local_38 != 0) {
            iVar5 = *(int *)(param_2 + 0x28);
            if (*(int *)(param_2 + 0x2c) < (int)local_38 + iVar5) {
              TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeTo
                        (param_2);
              iVar5 = *(int *)(param_2 + 0x28);
            }
            _Src = &local_60;
            if (pplStack_40 != (longlong **)0x0) {
              _Src = pplStack_40;
            }
            lVar4 = *(longlong *)(param_2 + 0x20);
            if (*(longlong *)(param_2 + 0x20) == 0) {
              lVar4 = param_2;
            }
            _guard_xfg_dispatch_icall_nop((void *)(lVar4 + (longlong)iVar5 * 8),_Src,lVar7 << 3);
            *(int *)(param_2 + 0x28) = *(int *)(param_2 + 0x28) + iVar13;
            local_38 = local_38 & 0xffffffff00000000;
          }
        }
        plVar14 = plVar14 + 1;
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar15);
      if (pplStack_40 != (longlong **)0x0) {
        FMemory::Free();
      }
    }
  }
  if (plVar11 != (longlong *)0x0) {
    FMemory::Free(plVar11);
  }
  return;
}



// FUNCTION 140e105c0 GetDefault<UDamageType> body=51 status=ok
// SIG undefined GetDefault<UDamageType>(void)

longlong GetDefault<UDamageType>(void)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)UDamageType::GetPrivateStaticClass();
  lVar2 = plVar1[0x1f];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 0x368))(plVar1);
    lVar2 = plVar1[0x1f];
  }
  return lVar2;
}



// FUNCTION 140e10600 FUN_140e10600 body=93 status=ok
// SIG undefined FUN_140e10600(void)

longlong FUN_140e10600(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x5d8);
  if (lVar2 != 0) {
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
      return lVar2;
    }
  }
  return 0;
}



// FUNCTION 140e10660 FUN_140e10660 body=399 status=ok
// SIG undefined FUN_140e10660(void)

void FUN_140e10660(longlong param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 local_28 [16];
  
  iVar3 = *(int *)(param_2 + 0x108);
  if (0 < *(int *)(param_1 + 800)) {
    if (*(int *)(param_2 + 0x10c) < *(int *)(param_1 + 800) + iVar3) {
      TArray<FBlendedCurve,TInlineAllocator<8,FDefaultAllocator>_>::ResizeTo(param_2);
    }
    lVar6 = *(longlong *)(param_1 + 0x318);
    if (*(longlong *)(param_1 + 0x318) == 0) {
      lVar6 = param_1 + 0x2b8;
    }
    lVar7 = lVar6 + (longlong)*(int *)(param_1 + 800) * 0x18;
    for (; lVar6 != lVar7; lVar6 = lVar6 + 0x18) {
      cVar2 = FUN_142dcfb90(param_1,lVar6,local_28);
      if (cVar2 != '\0') {
        iVar1 = *(int *)(param_2 + 0x108);
        *(int *)(param_2 + 0x108) = iVar1 + 1;
        if (*(int *)(param_2 + 0x10c) < iVar1 + 1) {
          TArray<FBlendedCurve,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow(param_2,iVar1);
        }
        lVar4 = *(longlong *)(param_2 + 0x100);
        if (*(longlong *)(param_2 + 0x100) == 0) {
          lVar4 = param_2;
        }
        puVar5 = (undefined8 *)(lVar4 + (longlong)iVar1 * 0x20);
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
        puVar5[3] = 0;
        lVar4 = *(longlong *)(param_2 + 0x100);
        if (*(longlong *)(param_2 + 0x100) == 0) {
          lVar4 = param_2;
        }
        FUN_142dd2350(param_1,lVar4 + (longlong)iVar1 * 0x20,*(undefined4 *)(lVar6 + 0x10),local_28)
        ;
      }
    }
  }
  if ((*(int *)(param_2 + 0x108) <= iVar3) && (lVar6 = *(longlong *)(param_1 + 0x118), lVar6 != 0))
  {
    iVar3 = FUN_140e16440(param_2,1);
    lVar7 = *(longlong *)(param_2 + 0x100);
    if (*(longlong *)(param_2 + 0x100) == 0) {
      lVar7 = param_2;
    }
    FUN_142dd21d0(param_1,(longlong)iVar3 * 0x20 + lVar7,lVar6);
  }
  return;
}



// FUNCTION 140e107f0 FUN_140e107f0 body=176 status=ok
// SIG undefined FUN_140e107f0(void)

undefined8 * FUN_140e107f0(undefined4 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)operator_new();
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar4 + 1) = 1;
    *(undefined4 *)((longlong)puVar4 + 0xc) = 1;
    *puVar4 = &PTR_FUN_144599748;
    uVar1 = *param_1;
    uVar2 = param_1[1];
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    *(undefined4 *)(puVar4 + 6) = 0;
    puVar4[7] = 0;
    *(undefined2 *)(puVar4 + 8) = 0x100;
    puVar4[2] = &PTR_FUN_144590fc0;
    puVar4[9] = *param_2;
    lVar3 = param_2[1];
    puVar4[10] = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar4 + 0xb) = uVar1;
    *(undefined4 *)((longlong)puVar4 + 0x5c) = uVar2;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    *(undefined1 *)(puVar4 + 0xe) = 0;
    return puVar4;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140e108a0 FUN_140e108a0 body=388 status=ok
// SIG undefined FUN_140e108a0(void)

int FUN_140e108a0(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  byte bVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40;
  
  iVar1 = (int)param_1[1];
  lVar12 = (longlong)iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  puVar2 = (undefined4 *)*param_1;
  local_48 = *puVar2;
  local_44 = puVar2[1];
  local_40 = *(undefined1 *)(puVar2 + 2);
  uVar7 = 0;
  cVar3 = FWeakObjectPtr::IsValid(&local_48);
  uVar14 = uVar7;
  if ((cVar3 == '\0') || (lVar5 = FWeakObjectPtr::Get(&local_48), lVar5 == *(longlong *)*param_2)) {
    bVar8 = 0;
    uVar10 = uVar7;
  }
  else {
    bVar8 = 1;
    uVar10 = uVar7;
  }
  do {
    iVar9 = (int)uVar10;
    uVar10 = (ulonglong)(iVar9 + 1);
    uVar7 = uVar7 + 1;
    if ((longlong)uVar7 < lVar12) {
      lVar5 = uVar7 * 0xc;
      do {
        lVar6 = *param_1;
        local_48 = *(undefined4 *)(lVar6 + lVar5);
        local_44 = *(undefined4 *)(lVar6 + 4 + lVar5);
        local_40 = *(undefined1 *)(lVar6 + 8 + lVar5);
        cVar3 = FWeakObjectPtr::IsValid(&local_48);
        if ((cVar3 == '\0') ||
           (lVar6 = FWeakObjectPtr::Get(&local_48), lVar6 == *(longlong *)*param_2)) {
          bVar4 = 0;
        }
        else {
          bVar4 = 1;
        }
        if (bVar8 != bVar4) break;
        uVar10 = (ulonglong)((int)uVar10 + 1);
        uVar7 = uVar7 + 1;
        lVar5 = lVar5 + 0xc;
      } while ((longlong)uVar7 < lVar12);
    }
    iVar11 = (int)uVar10 - iVar9;
    if (bVar8 != 0) {
      iVar13 = (int)uVar14;
      if (iVar13 != iVar9) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*param_1 + (longlong)iVar13 * 0xc),
                   (void *)(*param_1 + (longlong)iVar9 * 0xc),(longlong)iVar11 * 0xc);
      }
      uVar14 = (ulonglong)(uint)(iVar13 + iVar11);
    }
    bVar8 = bVar8 ^ 1;
    if (lVar12 <= (longlong)uVar7) {
      *(int *)(param_1 + 1) = (int)uVar14;
      return iVar1 - (int)uVar14;
    }
  } while( true );
}



// FUNCTION 140e10a30 FUN_140e10a30 body=456 status=ok
// SIG undefined FUN_140e10a30(void)

void FUN_140e10a30(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *local_b8;
  undefined8 local_b0;
  undefined **local_a8;
  char *local_a0;
  undefined1 local_98;
  undefined4 local_90;
  undefined **local_88;
  char *local_80;
  undefined1 local_78;
  undefined4 local_70;
  undefined **local_68;
  char *local_60;
  undefined1 local_58;
  undefined4 local_50;
  undefined **local_48;
  char *local_40;
  undefined1 local_38;
  undefined4 local_30;
  undefined **local_28;
  char *local_20;
  undefined1 local_18;
  undefined4 local_10;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x198))();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x50))(plVar1,param_2,1);
    (**(code **)(*plVar1 + 0x28))(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1,&local_b8,"response",param_3);
    if (local_b8 == (longlong *)0x0) {
      cohtml::TypeDescription::~TypeDescription((TypeDescription *)&local_b8);
    }
    else {
      local_a0 = "success";
      local_98 = 1;
      local_a8 = &PTR_FUN_1445760c0;
      local_90 = 0;
      (**(code **)(*local_b8 + 0x18))(local_b8,local_b0,&local_a8);
      local_a8 = &PTR_FUN_143f47bd8;
      local_80 = "successMessage";
      local_78 = 1;
      local_88 = &PTR_FUN_144576140;
      local_70 = 8;
      (**(code **)(*local_b8 + 0x18))(local_b8,local_b0,&local_88);
      local_88 = &PTR_FUN_143f47bd8;
      local_60 = "errorMessage";
      local_58 = 1;
      local_68 = &PTR_FUN_144576140;
      local_50 = 0x18;
      (**(code **)(*local_b8 + 0x18))(local_b8,local_b0,&local_68);
      local_68 = &PTR_FUN_143f47bd8;
      local_40 = "displayName1";
      local_38 = 1;
      local_48 = &PTR_FUN_144576140;
      local_30 = 0x28;
      (**(code **)(*local_b8 + 0x18))(local_b8,local_b0,&local_48);
      local_48 = &PTR_FUN_143f47bd8;
      local_20 = "displayName2";
      local_18 = 1;
      local_28 = &PTR_FUN_144576140;
      local_10 = 0x38;
      (**(code **)(*local_b8 + 0x18))(local_b8,local_b0,&local_28);
      cohtml::TypeDescription::~TypeDescription((TypeDescription *)&local_b8);
    }
    (**(code **)(*plVar1 + 0x48))(plVar1,param_3);
    (**(code **)(*plVar1 + 0x58))(plVar1);
  }
  return;
}



// FUNCTION 140e10c00 FUN_140e10c00 body=1362 status=ok
// SIG undefined FUN_140e10c00(void)

undefined8 * FUN_140e10c00(undefined8 *param_1)

{
  undefined8 uVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  undefined8 local_res8;
  code *local_18;
  ulonglong uStack_10;
  
  FUN_14125b5d0();
  *param_1 = &PTR_FUN_144594bf0;
  param_1[0x8b] = &PTR_LAB_1445956d8;
  param_1[0x8c] = &PTR_LAB_144595748;
  param_1[0x8d] = &PTR_LAB_144595768;
  param_1[0x11b] = &PTR_LAB_144595780;
  param_1[0x11c] = &PTR_LAB_1445957a8;
  param_1[0x11d] = &PTR_LAB_1445957c0;
  param_1[0x11e] = &PTR_LAB_144595818;
  param_1[0x134] = 0;
  param_1[0x135] = 0;
  param_1[0x13c] = 0;
  param_1[0x13d] = 0;
  param_1[0x13f] = 0;
  param_1[0x144] = 0;
  param_1[0x14c] = 0;
  param_1[0x151] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa9c) = 0;
  *(undefined1 *)(param_1 + 0x14f) = 0;
  param_1[0x152] = 0;
  param_1[0x153] = 0;
  param_1[0x150] = 0;
  *(undefined1 *)((longlong)param_1 + 0xaa4) = 0;
  *(undefined4 *)(param_1 + 0x155) = 1;
  *(undefined1 *)((longlong)param_1 + 0xaac) = 0;
  param_1[0x156] = 10;
  param_1[0x157] = 0;
  param_1[0x158] = DAT_1468b5da0;
  *(undefined4 *)(param_1 + 0x159) = DAT_1468b5da8;
  *(undefined8 *)((longlong)param_1 + 0xacc) = 0x3f800000;
  *(byte *)((longlong)param_1 + 0xad4) = *(byte *)((longlong)param_1 + 0xad4) & 0xf9 | 9;
  param_1[0x15d] = 0;
  *(undefined8 *)((longlong)param_1 + 0xafc) = 0;
  *(undefined1 *)(param_1 + 0x15b) = 0;
  param_1[0x15e] = 0;
  param_1[0x15f] = 0;
  param_1[0x15c] = 0;
  *(undefined1 *)((longlong)param_1 + 0xb04) = 0;
  *(undefined4 *)(param_1 + 0x161) = 1;
  *(undefined1 *)((longlong)param_1 + 0xb0c) = 0;
  param_1[0x162] = 10;
  param_1[0x163] = 0;
  param_1[0x164] = DAT_1468b5da0;
  *(undefined4 *)(param_1 + 0x165) = DAT_1468b5da8;
  *(undefined8 *)((longlong)param_1 + 0xb2c) = 0x3f800000;
  *(byte *)((longlong)param_1 + 0xb34) = *(byte *)((longlong)param_1 + 0xb34) & 0xf9 | 9;
  param_1[0x169] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb5c) = 0;
  *(undefined1 *)(param_1 + 0x167) = 0;
  param_1[0x168] = 0;
  param_1[0x16a] = 0;
  param_1[0x16b] = 0;
  *(undefined1 *)((longlong)param_1 + 0xb64) = 0;
  *(undefined4 *)(param_1 + 0x16d) = 1;
  *(undefined1 *)((longlong)param_1 + 0xb6c) = 0;
  param_1[0x16e] = 10;
  param_1[0x16f] = 0;
  param_1[0x170] = DAT_1468b5da0;
  *(undefined4 *)(param_1 + 0x171) = DAT_1468b5da8;
  *(undefined8 *)((longlong)param_1 + 0xb8c) = 0x3f800000;
  *(byte *)((longlong)param_1 + 0xb94) = *(byte *)((longlong)param_1 + 0xb94) & 0xf9 | 9;
  param_1[0x175] = 0;
  *(undefined8 *)((longlong)param_1 + 0xbbc) = 0;
  *(undefined1 *)(param_1 + 0x173) = 0;
  param_1[0x176] = 0;
  param_1[0x177] = 0;
  param_1[0x174] = 0;
  *(undefined1 *)((longlong)param_1 + 0xbc4) = 0;
  *(undefined4 *)(param_1 + 0x179) = 1;
  *(undefined1 *)((longlong)param_1 + 0xbcc) = 0;
  param_1[0x17a] = 10;
  param_1[0x17b] = 0;
  param_1[0x17c] = DAT_1468b5da0;
  *(undefined4 *)(param_1 + 0x17d) = DAT_1468b5da8;
  *(undefined8 *)((longlong)param_1 + 0xbec) = 0x3f800000;
  local_res8 = 0;
  *(byte *)((longlong)param_1 + 0xbf4) = *(byte *)((longlong)param_1 + 0xbf4) & 0xf9 | 9;
  param_1[0x183] = 0x42700000;
  FName::FName(param_1 + 0x184,L"BeamTarget",1);
  *(byte *)((longlong)param_1 + 0x92) = *(byte *)((longlong)param_1 + 0x92) & 0xbf;
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) & 0xbf;
  *(undefined4 *)(param_1 + 0x185) = 0x41a00000;
  *(undefined4 *)(param_1 + 0x145) = 0x3ecccccd;
  *(undefined4 *)(param_1 + 0x149) = 0x3dcccccd;
  puVar4 = (undefined8 *)FName::FName(&local_res8,L"CustomizationComponent",1);
  uVar1 = *puVar4;
  uVar5 = AInteractiveFoliageActor::GetPrivateStaticClass();
  lVar6 = FUN_141752410(param_1,uVar1,uVar5,uVar5,1,0,0);
  param_1[0x14b] = lVar6;
  if (lVar6 != 0) {
    uStack_10 = uStack_10 & 0xffffffff00000000;
    local_18 = FUN_140e2b950;
    pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnCustomizationApplied",L"::");
    pwVar3 = (wchar_t *)0x0;
    while (pwVar2 = pwVar7, pwVar2 != (wchar_t *)0x0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar3 = pwVar2;
    }
    FName::FName(&local_res8,pwVar3 + 2,1);
    FUN_1407260e0(param_1[0x14b] + 800,param_1,&local_18,local_res8);
    uStack_10 = uStack_10 & 0xffffffff00000000;
    local_18 = FUN_140e2ba50;
    pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnCustomizationRemoved",L"::");
    pwVar3 = (wchar_t *)0x0;
    while (pwVar2 = pwVar7, pwVar2 != (wchar_t *)0x0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar3 = pwVar2;
    }
    FName::FName(&local_res8,pwVar3 + 2,1);
    FUN_1407260e0(param_1[0x14b] + 0x330,param_1,&local_18,local_res8);
  }
  FName::FName(&local_res8,L"MissionDelivery",1);
  param_1[0x13f] = local_res8;
  puVar4 = (undefined8 *)FName::FName(&local_res8,L"ProjectionOrigin",1);
  uVar1 = *puVar4;
  param_1[0x14c] = uVar1;
  *(undefined1 *)((longlong)param_1 + 0xaa4) = 1;
  *(undefined1 *)(param_1 + 0x14f) = 0;
  param_1[0x152] = uVar1;
  *(undefined1 *)((longlong)param_1 + 0xb04) = 2;
  *(undefined1 *)(param_1 + 0x15b) = 1;
  param_1[0x15e] = uVar1;
  *(undefined1 *)((longlong)param_1 + 0xb64) = 2;
  *(undefined1 *)(param_1 + 0x167) = 2;
  *(undefined1 *)((longlong)param_1 + 0xbc4) = 2;
  *(undefined1 *)(param_1 + 0x173) = 3;
  *(undefined4 *)(param_1 + 0x13e) = 0x3d23d70a;
  return param_1;
}



// FUNCTION 140e11160 FUN_140e11160 body=182 status=ok
// SIG undefined FUN_140e11160(void)

undefined8 * FUN_140e11160(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_144088fb8;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"RootComponent",1);
  uVar3 = *puVar1;
  uVar2 = FUN_1429ff160();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x2d] = uVar3;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GbxAction",1);
  uVar3 = *puVar1;
  uVar2 = FUN_142e27720();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8b] = uVar3;
  return param_1;
}



// FUNCTION 140e11220 FUN_140e11220 body=44 status=ok
// SIG undefined FUN_140e11220(void)

undefined8 * FUN_140e11220(undefined8 *param_1)

{
  FUN_1426f5470();
  *param_1 = &PTR__scalar_deleting_destructor__144597b98;
  param_1[0xa5] = 0;
  return param_1;
}



// FUNCTION 140e11250 FUN_140e11250 body=995 status=ok
// SIG undefined FUN_140e11250(void)

undefined8 * FUN_140e11250(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong local_res8;
  undefined2 *local_38;
  undefined8 local_30;
  
  local_res8 = DAT_146aefaf8;
  lVar3 = FName::GetComparisonNameEntry(&local_res8);
  uVar7 = 0;
  if (lVar3 == 0) {
    local_38 = (undefined2 *)0x0;
    local_30 = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    FGenericPlatformString::Memcpy(local_38,L"*INVALID*",0x14);
  }
  else {
    FNameEntry::GetPlainNameString(lVar3,&local_38);
  }
  puVar6 = &DAT_143f3eda8;
  if ((int)local_30 != 0) {
    puVar6 = local_38;
  }
  FUN_141784790(param_2,puVar6);
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  lVar4 = FUN_141403c70();
  lVar3 = local_res8;
  plVar1 = (longlong *)(param_2 + 0x20);
  iVar2 = *(int *)(param_2 + 0xa8);
  if (0 < iVar2) {
    plVar5 = *(longlong **)(param_2 + 0xa0);
    uVar9 = uVar7;
    plVar10 = plVar5;
    if (plVar5 == (longlong *)0x0) {
      plVar5 = plVar1;
      plVar10 = plVar1;
    }
    do {
      iVar8 = (int)uVar9;
      if (*plVar5 == local_res8) {
        if (iVar8 != -1) {
          if ((lVar4 != 0) && (plVar10[(longlong)iVar8 * 2 + 1] != 0)) {
            FUN_1417905a0(param_2,local_res8,plVar10[(longlong)iVar8 * 2 + 1],lVar4);
          }
          goto LAB_140e11387;
        }
        break;
      }
      uVar7 = uVar7 + 1;
      plVar5 = plVar5 + 2;
      uVar9 = (ulonglong)(iVar8 + 1);
    } while ((longlong)uVar7 < (longlong)iVar2);
  }
  *(int *)(param_2 + 0xa8) = iVar2 + 1;
  if (*(int *)(param_2 + 0xac) < iVar2 + 1) {
    TArray<FObjectInitializer::FOverrides::FOverride,TInlineAllocator<8,FDefaultAllocator>_>::
    ResizeGrow(plVar1,iVar2);
  }
  plVar5 = *(longlong **)(param_2 + 0xa0);
  if (*(longlong **)(param_2 + 0xa0) == (longlong *)0x0) {
    plVar5 = plVar1;
  }
  plVar5 = plVar5 + (longlong)iVar2 * 2;
  if (plVar5 != (longlong *)0x0) {
    *plVar5 = lVar3;
    plVar5[1] = lVar4;
  }
LAB_140e11387:
  FUN_140c2e240(param_1,param_2);
  *param_1 = &PTR__scalar_deleting_destructor__144598350;
  param_1[0x8b] = &PTR_LAB_144598ff0;
  param_1[0x116] = &PTR_LAB_144599048;
  param_1[0x117] = &PTR_LAB_144599070;
  param_1[0x118] = &PTR_LAB_1445990c8;
  param_1[0x119] = &PTR_LAB_144599100;
  param_1[0x11a] = &PTR_LAB_144599118;
  param_1[0x11b] = &PTR_LAB_144599160;
  param_1[0x11c] = &PTR_LAB_144599188;
  param_1[0x11d] = &PTR_LAB_1445991b0;
  param_1[0x11e] = &PTR_LAB_1445991f8;
  param_1[0x11f] = &PTR_LAB_144599210;
  param_1[0x1af] = &PTR_LAB_144599228;
  param_1[0x1b0] = &PTR_StartProfileThreadUsage_144599248;
  param_1[0x1b1] = &PTR_LAB_144599278;
  param_1[0x1b2] = &PTR_LAB_144599448;
  param_1[0x1b3] = &PTR_LAB_144599470;
  param_1[0x1b4] = &PTR_FUN_144599540;
  param_1[0x1b5] = &PTR_LAB_144599558;
  param_1[0x1b6] = &PTR_LAB_1445995a8;
  param_1[0x1b7] = &PTR_LAB_1445995c0;
  param_1[0x1b8] = &PTR_LAB_1445995d8;
  param_1[0x1b9] = &PTR_LAB_1445995f8;
  param_1[0x1c4] = &PTR_LAB_144599630;
  param_1[0x1c5] = &PTR_LAB_144599670;
  param_1[0x1c6] = &PTR_LAB_144599698;
  param_1[0x1c7] = &PTR_LAB_1445996b0;
  param_1[0x1c8] = &PTR_LAB_1445996d8;
  param_1[0x1c9] = &PTR_LAB_144599708;
  param_1[0x1ca] = &PTR_LAB_144599730;
  *(undefined1 *)((longlong)param_1 + 0x22b4) = 1;
  *(undefined4 *)((longlong)param_1 + 0x22dc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x45c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x22e4) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x45d) = 0x457a0000;
  *(undefined4 *)((longlong)param_1 + 0x22ec) = 0x3e800000;
  *(undefined4 *)(param_1 + 0x45e) = 0x42480000;
  *(undefined4 *)((longlong)param_1 + 0x22f4) = 0x41200000;
  *(undefined4 *)(param_1 + 0x45f) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x22fc) = 0x461c4000;
  *(undefined4 *)(param_1 + 0x460) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x2304) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x461) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 0x230c) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x462) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x2314) = 0x42c80000;
  return param_1;
}



// FUNCTION 140e11640 FUN_140e11640 body=2863 status=ok
// SIG undefined FUN_140e11640(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_140e11640(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  float fVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_168 [32];
  undefined1 local_148;
  undefined1 local_140;
  undefined1 local_138;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 *local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  puVar8 = &stack0xffffffffffffffd0;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  local_118 = param_1;
  FUN_140a4e5a0();
  *param_1 = &PTR_FUN_144592690;
  param_1[0x8b] = &PTR_LAB_144593448;
  param_1[0x116] = &PTR_LAB_1445934a0;
  param_1[0x117] = &PTR_LAB_1445934c8;
  param_1[0x118] = &PTR_LAB_144593520;
  param_1[0x119] = &PTR_LAB_144593558;
  param_1[0x11a] = &PTR_LAB_144593570;
  param_1[0x11b] = &PTR_LAB_1445935b8;
  param_1[0x11c] = &PTR_LAB_1445935e0;
  param_1[0x11d] = &PTR_LAB_144593608;
  param_1[0x11e] = &PTR_LAB_144593650;
  param_1[0x11f] = &PTR_LAB_144593668;
  param_1[0x1af] = &PTR_LAB_144593680;
  param_1[0x1b0] = &PTR_StartProfileThreadUsage_1445936a0;
  param_1[0x1b1] = &PTR_LAB_1445936d0;
  param_1[0x1b2] = &PTR_LAB_1445938a0;
  param_1[0x1b3] = &PTR_LAB_1445938c8;
  param_1[0x1b4] = &PTR_FUN_144593998;
  param_1[0x1b5] = &PTR_LAB_1445939b0;
  param_1[0x1b6] = &PTR_LAB_144593a00;
  param_1[0x1b7] = &PTR_LAB_144593a18;
  param_1[0x1b8] = &PTR_LAB_144593a30;
  param_1[0x1b9] = &PTR_LAB_144593a50;
  param_1[0x1c4] = &PTR_LAB_144593a88;
  param_1[0x1c5] = &PTR_LAB_144593ac8;
  param_1[0x1c6] = &PTR_LAB_144593af0;
  param_1[0x1c7] = &PTR_LAB_144593b08;
  param_1[0x1c8] = &PTR_LAB_144593b30;
  param_1[0x1c9] = &PTR_LAB_144593b60;
  param_1[0x1ca] = &PTR_LAB_144593b88;
  param_1[0x453] = &PTR_LAB_144593ba0;
  param_1[0x465] = 0;
  param_1[0x467] = 0;
  *(undefined1 *)(param_1 + 0x468) = 0;
  param_1[0x469] = 0;
  param_1[0x46a] = 0;
  param_1[0x46b] = 0;
  param_1[0x46c] = 0;
  param_1[0x46d] = 0;
  param_1[0x46e] = 0;
  param_1[0x46f] = 0;
  param_1[0x470] = 0;
  param_1[0x471] = 0;
  param_1[0x472] = 0;
  param_1[0x473] = 0;
  param_1[0x474] = 0;
  param_1[0x475] = 0;
  param_1[0x476] = 0;
  lVar11 = 4;
  param_1[0x477] = 0;
  param_1[0x478] = 0;
  param_1[0x479] = 0;
  param_1[0x47a] = 0;
  param_1[0x47b] = 0;
  param_1[0x47c] = 0;
  param_1[0x47d] = 0;
  param_1[0x47e] = 0;
  param_1[0x47f] = 0;
  param_1[0x480] = 0;
  param_1[0x481] = 0;
  param_1[0x482] = 0;
  *(undefined1 *)(param_1 + 0x485) = 0;
  param_1[0x496] = 0;
  param_1[0x497] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24cc) = 0;
  *(undefined1 *)(param_1 + 0x49a) = 0;
  param_1[0x49b] = 0;
  param_1[0x49c] = 0;
  *(undefined1 *)(param_1 + 0x49d) = 0;
  param_1[0x49e] = 0;
  param_1[0x49f] = 0;
  param_1[0x4a0] = 0;
  param_1[0x4a1] = 0;
  param_1[0x4a2] = 0;
  param_1[0x4a3] = 0;
  param_1[0x4a4] = 0;
  param_1[0x4a5] = 0;
  *(undefined1 *)(param_1 + 0x4a6) = 0;
  param_1[0x4b7] = 0;
  param_1[0x4b8] = 0;
  *(undefined1 *)(param_1 + 0x4b9) = 0;
  param_1[0x4ca] = 0;
  param_1[0x4cb] = 0;
  param_1[0x4cc] = 0;
  param_1[0x4cd] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2674) = 0x447a0000;
  *(undefined4 *)(param_1 + 0x4cf) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x267c) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x4d1) = 0xbf800000;
  param_1[0x4d2] = 0;
  param_1[0x4d7] = 0;
  param_1[0x4da] = 0;
  *(undefined4 *)(param_1 + 0x4db) = 4;
  local_110 = 0;
  uStack_108 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1 + 0x4da,4,0);
  puVar10 = (undefined4 *)param_1[0x4da];
  *puVar10 = (undefined4)local_110;
  puVar10[1] = local_110._4_4_;
  puVar10[2] = (undefined4)uStack_108;
  puVar10[3] = uStack_108._4_4_;
  local_d0 = 0;
  local_c8 = 0;
  local_e8 = 0xffffffff;
  puVar10[4] = (undefined4)local_100;
  puVar10[5] = local_100._4_4_;
  puVar10[6] = (undefined4)uStack_f8;
  puVar10[7] = uStack_f8._4_4_;
  local_e4 = 0;
  local_d8 = 0;
  local_b0 = 0;
  local_88 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_c0 = 0xffffffff;
  local_bc = 0;
  local_80 = 0;
  local_78 = 0;
  local_98 = 0xffffffff;
  local_94 = 0;
  local_58 = 0;
  local_50 = 0;
  puVar5 = param_1 + 0x4dc;
  local_70 = 0xffffffff;
  local_6c = 0;
  *puVar5 = 0;
  *(undefined4 *)(param_1 + 0x4dd) = 4;
  local_128 = 0;
  local_60 = 0;
  TArray<FActorSequenceObjectReference,FDefaultAllocator>::ResizeForCopy(puVar5,4,0);
  puVar10 = (undefined4 *)*puVar5;
  puVar5 = &local_e4;
  local_128 = CONCAT44(local_128._4_4_,4);
  local_120 = 0;
  puVar9 = (undefined8 *)(puVar10 + 8);
  do {
    puVar9[-1] = 0;
    *puVar9 = 0;
    *puVar10 = 0xffffffff;
    *(undefined4 *)((longlong)puVar9 + -0x1c) = 0;
    puVar9[-2] = 0;
    *(undefined4 *)puVar9 = 0;
    if (0x7fffffff < *(uint *)((longlong)puVar9 + 4)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar9 + -1,0);
    }
    if ((undefined2 *)puVar9[-1] != (undefined2 *)0x0) {
      *(undefined2 *)puVar9[-1] = 0;
    }
    *(undefined4 *)(puVar9 + -3) = 0;
    *puVar10 = *(undefined4 *)((longlong)puVar5 + -4);
    *(undefined4 *)((longlong)puVar9 + -0x1c) = *(undefined4 *)puVar5;
    *(undefined4 *)(puVar9 + -3) = *(undefined4 *)((longlong)puVar5 + 4);
    local_110 = *(undefined8 *)((longlong)puVar5 + 0xc);
    FString::FString(&uStack_108,(undefined4 *)((longlong)puVar5 + 0x14));
    FSoftObjectPath::operator=(puVar9 + -2);
    puVar4 = local_118;
    puVar10 = puVar10 + 10;
    puVar9 = puVar9 + 5;
    puVar5 = puVar5 + 5;
    iVar2 = (int)local_128 + -1;
    local_128 = CONCAT44(local_128._4_4_,iVar2);
  } while (iVar2 != 0);
  do {
    plVar1 = (longlong *)(puVar8 + -0x28);
    puVar8 = puVar8 + -0x28;
    lVar11 = lVar11 + -1;
    if (*plVar1 != 0) {
      FMemory::Free();
    }
  } while (lVar11 != 0);
  FUN_140e400d0(puVar4 + 0x4de);
  puVar4[0x52a] = 0;
  puVar4[0x52b] = 0;
  puVar4[0x52e] = 0;
  puVar4[0x52f] = 0;
  *(undefined4 *)(puVar4 + 0x530) = 0xffffffff;
  *(undefined4 *)((longlong)puVar4 + 0x2984) = 0;
  puVar4[0x532] = 0;
  *(undefined4 *)(puVar4 + 0x533) = 0;
  puVar4[0x534] = 0;
  puVar4[0x535] = 0;
  puVar4[0x536] = 0;
  puVar4[0x539] = 0;
  puVar4[0x53a] = 0;
  *(undefined4 *)(puVar4 + 0x53b) = 0xffffffff;
  *(undefined4 *)((longlong)puVar4 + 0x29dc) = 0;
  puVar4[0x53d] = 0;
  *(undefined4 *)(puVar4 + 0x53e) = 0;
  puVar4[0x53f] = 0xffffffffffffffff;
  puVar4[0x540] = 0;
  puVar4[0x541] = 0;
  puVar4[0x543] = 0;
  puVar4[0x544] = 0;
  puVar4[0x545] = 0;
  puVar4[0x546] = 0;
  puVar4[0x547] = 0;
  puVar4[0x548] = 0;
  puVar4[0x54d] = 0;
  puVar4[0x54e] = 0;
  puVar4[0x54f] = 0;
  puVar4[0x550] = 0;
  puVar4[0x553] = 0;
  puVar4[0x554] = 0;
  puVar4[0x555] = 0;
  *(undefined4 *)(puVar4 + 0x551) = 0xffffffff;
  *(undefined4 *)((longlong)puVar4 + 0x2a8c) = 0;
  FSoftObjectPath::Reset();
  *(undefined4 *)(puVar4 + 0x552) = 0;
  puVar4[0x557] = 0;
  puVar4[0x559] = 0;
  FDifficultyFloat::FDifficultyFloat(puVar4 + 0x55e);
  *(undefined4 *)((longlong)puVar4 + 0x2afc) = 0;
  *(undefined1 *)(puVar4 + 0x560) = 0;
  puVar4[0x571] = 0;
  puVar4[0x572] = 0;
  puVar4[0x574] = 0;
  puVar4[0x575] = 0;
  puVar4[0x577] = 0;
  puVar4[0x57b] = 0;
  puVar4[0x57c] = 0;
  puVar4[0x57d] = 0;
  *(undefined4 *)(puVar4 + 0x579) = 0xffffffff;
  *(undefined4 *)((longlong)puVar4 + 0x2bcc) = 0;
  FSoftObjectPath::Reset();
  *(undefined4 *)(puVar4 + 0x57a) = 0;
  puVar4[0x580] = 0;
  puVar4[0x581] = 0;
  puVar4[0x582] = 0;
  *(undefined4 *)(puVar4 + 0x57e) = 0xffffffff;
  *(undefined4 *)((longlong)puVar4 + 0x2bf4) = 0;
  FSoftObjectPath::Reset();
  *(undefined4 *)(puVar4 + 0x57f) = 0;
  puVar4[0x585] = 0;
  puVar4[0x586] = 0;
  puVar4[0x587] = 0;
  *(undefined4 *)(puVar4 + 0x583) = 0xffffffff;
  *(undefined4 *)((longlong)puVar4 + 0x2c1c) = 0;
  FSoftObjectPath::Reset();
  *(undefined4 *)(puVar4 + 0x584) = 0;
  puVar4[0x588] = 0;
  puVar4[0x589] = 0;
  puVar4[0x58a] = 0;
  puVar4[0x58b] = 0;
  puVar4[0x58c] = 2;
  FUN_140590080(puVar4 + 0x592);
  *(undefined1 *)(puVar4 + 0x595) = 0;
  puVar4[0x596] = 0;
  puVar4[0x597] = 0;
  puVar4[0x59b] = 0;
  puVar4[0x59c] = 0;
  *(undefined4 *)((longlong)puVar4 + 0x2cec) = 0x3ca3d70a;
  *(undefined4 *)(puVar4 + 0x59e) = 0x3f800000;
  *(undefined4 *)((longlong)puVar4 + 0x2cf4) = 0x1e;
  puVar4[0x59f] = 0;
  puVar4[0x5a0] = 0;
  FUN_14246da30(puVar4 + 0x5a1);
  FUN_14246da30((longlong)puVar4 + 0x2d1c);
  puVar4[0x5a6] = 0;
  puVar4[0x5a7] = 0;
  TBitArray<FDefaultBitArrayAllocator>::TBitArray<FDefaultBitArrayAllocator>(puVar4 + 0x5a8,0,0);
  *(undefined4 *)(puVar4 + 0x5ac) = 0xffffffff;
  *(undefined4 *)((longlong)puVar4 + 0x2d64) = 0;
  puVar4[0x5ae] = 0;
  *(undefined4 *)(puVar4 + 0x5af) = 0;
  puVar4[0x5b0] = 0;
  puVar4[0x5b1] = 0;
  puVar4[0x5b2] = 0;
  TBitArray<FDefaultBitArrayAllocator>::TBitArray<FDefaultBitArrayAllocator>(puVar4 + 0x5b3,0,0);
  *(undefined4 *)(puVar4 + 0x5b7) = 0xffffffff;
  *(undefined4 *)((longlong)puVar4 + 0x2dbc) = 0;
  puVar4[0x5b9] = 0;
  *(undefined4 *)(puVar4 + 0x5ba) = 0;
  puVar4[0x5bb] = 0xffffffffffffffff;
  puVar4[0x5bc] = 0;
  puVar4[0x5bd] = 0;
  puVar4[0x5c3] = 0;
  puVar4[0x5c4] = 0;
  puVar4[0x5c6] = 0;
  puVar4[0x5c7] = 0;
  puVar4[0x5c8] = 0;
  puVar4[0x5c9] = 0;
  puVar4[0x5ca] = 0;
  puVar4[0x5cb] = 0;
  puVar4[0x618] = 0;
  puVar4[0x619] = 0;
  *(undefined1 *)(puVar4 + 0x61a) = 0;
  puVar4[0x62b] = 0;
  puVar4[0x62c] = 0;
  *(undefined1 *)(puVar4 + 0x62d) = 0;
  puVar4[0x63e] = 0;
  puVar4[0x63f] = 0;
  *(undefined1 *)(puVar4 + 0x640) = 0;
  puVar4[0x651] = 0;
  puVar4[0x652] = 0;
  *(undefined1 *)(puVar4 + 0x653) = 0;
  puVar4[0x664] = 0;
  puVar4[0x665] = 0;
  *(undefined1 *)(puVar4 + 0x666) = 0;
  puVar4[0x677] = 0;
  puVar4[0x678] = 0;
  *(uint *)(puVar4 + 0x8c) = *(uint *)(puVar4 + 0x8c) & 0xffffffef;
  *(byte *)(puVar4 + 0x12) = *(byte *)(puVar4 + 0x12) | 8;
  *(undefined4 *)(puVar4 + 0x576) = 0x41100000;
  *(undefined4 *)((longlong)puVar4 + 0x2bb4) = 0x40e00000;
  *(undefined4 *)((longlong)puVar4 + 0x144) = 0x42480000;
  *(undefined1 *)((longlong)puVar4 + 0x13c1) = 1;
  FName::FName(&local_118,L"Ladder",1);
  puVar4[0x4d2] = local_118;
  *(undefined4 *)(puVar4 + 0x4d3) = 0x3e4ccccd;
  *(undefined4 *)(puVar4 + 0x4d8) = 0x3f800000;
  *(undefined4 *)((longlong)puVar4 + 0x2c84) = 0xc47a0000;
  if (puVar4[0x122] != 0) {
    *(undefined1 *)(puVar4[0x122] + 0x748) = 1;
  }
  puVar5 = (undefined8 *)FName::FName(&local_118,L"CustomizationComponent",1);
  uVar6 = FUN_140e0f410(puVar4,*puVar5,0);
  puVar4[0x54c] = uVar6;
  puVar5 = (undefined8 *)FName::FName(&local_118,L"FFYLCapsuleCollision",1);
  uVar6 = *puVar5;
  uVar7 = FUN_142912e90();
  local_138 = 0;
  local_140 = 0;
  local_148 = 1;
  lVar11 = FUN_141752410(puVar4,uVar6,uVar7,uVar7);
  puVar4[0x55d] = lVar11;
  fVar3 = *(float *)(puVar4[0x9a] + 0x714);
  fVar13 = *(float *)(puVar4[0x9a] + 0x710);
  if (fVar13 <= 0.0) {
    fVar13 = 0.0;
  }
  fVar12 = fVar3;
  if (fVar3 <= 0.0) {
    fVar12 = 0.0;
  }
  if (fVar13 <= fVar3) {
    fVar13 = fVar3;
  }
  *(float *)(lVar11 + 0x714) = fVar12;
  *(float *)(lVar11 + 0x710) = fVar13;
  (**(code **)(*(longlong *)puVar4[0x55d] + 0x838))((longlong *)puVar4[0x55d],0);
  (**(code **)(*(longlong *)puVar4[0x55d] + 0x830))((longlong *)puVar4[0x55d],0x13,1);
  *(byte *)(puVar4[0x55d] + 0x2ef) = *(byte *)(puVar4[0x55d] + 0x2ef) & 0xfb;
  FUN_14234fe40(puVar4[0x55d],0);
  local_120 = 0;
  *(undefined1 *)(puVar4[0x55d] + 0x303) = 0;
  FUN_142399e30(puVar4[0x55d],puVar4[0x9a],0);
  plVar1 = (longlong *)puVar4[0x55d];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x638))(plVar1,0);
  }
  *(byte *)((longlong)puVar4 + 0x13fc) = *(byte *)((longlong)puVar4 + 0x13fc) | 8;
  puVar4[0x484] = 0;
  *(undefined2 *)(puVar4 + 0x224) = 0x101;
  *(undefined1 *)(puVar4 + 0x3b0) = 1;
  *(undefined1 *)(puVar4 + 0x595) = 0;
  *(undefined1 *)(puVar4 + 0x59d) = 0;
  if (puVar4[0x1d5] != 0) {
    *(undefined1 *)(puVar4[0x1d5] + 500) = 1;
  }
  return puVar4;
}



// FUNCTION 140e12170 FUN_140e12170 body=832 status=ok
// SIG undefined FUN_140e12170(void)

undefined8 * FUN_140e12170(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_res8;
  
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_1445916e0;
  puVar1 = (undefined8 *)FName::FName(&local_res8,L"BalanceStateComponent",1);
  uVar3 = *puVar1;
  uVar2 = FUN_142dfdf30();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8b] = uVar3;
  puVar1 = (undefined8 *)FName::FName(&local_res8,L"DamageReceiverComponent",1);
  uVar3 = *puVar1;
  uVar2 = AGFreezeCharacterCue::GetPrivateStaticClass();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8c] = uVar3;
  puVar1 = (undefined8 *)FName::FName(&local_res8,L"ElementalInteractionComponent",1);
  uVar3 = *puVar1;
  uVar2 = UInputKeySelector::GetPrivateStaticClass();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8d] = uVar3;
  puVar1 = (undefined8 *)FName::FName(&local_res8,L"OakMissionIconComponent",1);
  uVar3 = *puVar1;
  uVar2 = AArchVisCharacter::StaticClass();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8e] = uVar3;
  puVar1 = (undefined8 *)FName::FName(&local_res8,L"ParticleSystemComponent",1);
  uVar3 = *puVar1;
  uVar2 = AGFreezeCharacterCue::GetPrivateStaticClass();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8f] = uVar3;
  puVar1 = (undefined8 *)FName::FName(&local_res8,L"RotatingMovementComponent",1);
  uVar3 = *puVar1;
  uVar2 = UEnvQueryTest_Cover::StaticClass();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x90] = uVar3;
  puVar1 = (undefined8 *)FName::FName(&local_res8,L"SkeletalMeshComponent",1);
  uVar3 = *puVar1;
  uVar2 = FUN_142a07000();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x91] = uVar3;
  puVar1 = (undefined8 *)FName::FName(&local_res8,L"StaticMeshComponent",1);
  uVar3 = *puVar1;
  uVar2 = FUN_142a232e0();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x92] = uVar3;
  puVar1 = (undefined8 *)FName::FName(&local_res8,L"UsableComponent",1);
  uVar3 = *puVar1;
  uVar2 = FUN_142e80f20();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x93] = uVar3;
  puVar1 = (undefined8 *)FName::FName(&local_res8,L"WwiseAudioComponent",1);
  uVar3 = *puVar1;
  uVar2 = AUGDoor::GetPrivateStaticClass();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x2d] = param_1[0x92];
  param_1[0x94] = uVar3;
  local_res8 = 0;
  FUN_142399e30(param_1[0x8e],param_1[0x92],0);
  local_res8 = 0;
  FUN_142399e30(param_1[0x8f],param_1[0x92],0);
  local_res8 = 0;
  FUN_142399e30(param_1[0x94],param_1[0x92],0);
  return param_1;
}



// FUNCTION 140e124b0 FUN_140e124b0 body=591 status=ok
// SIG undefined FUN_140e124b0(void)

undefined8 * FUN_140e124b0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong local_18;
  ulonglong local_10;
  
  FUN_140e12170();
  *param_1 = &PTR_FUN_1445916e0;
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    lVar3 = -1;
    if ((DAT_14629c500 == 0) &&
       (PTR_u_ElementalInteractionConfiguratio_14629c508 != (undefined *)0x0)) {
      FUN_141785db0();
      puVar1 = PTR_u_ElementalInteractionConfiguratio_14629c508;
      local_18 = 0;
      local_10 = 0;
      if ((PTR_u_ElementalInteractionConfiguratio_14629c508 != (undefined *)0x0) &&
         (lVar5 = lVar3, *(short *)PTR_u_ElementalInteractionConfiguratio_14629c508 != 0)) {
        do {
          lVar5 = lVar5 + 1;
        } while (*(short *)(PTR_u_ElementalInteractionConfiguratio_14629c508 + lVar5 * 2) != 0);
        uVar4 = (int)lVar5 + 1;
        local_10 = (ulonglong)uVar4;
        if (0 < (int)uVar4) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
        }
        FGenericPlatformString::Memcpy(local_18,puVar1,(longlong)(int)uVar4 * 2);
      }
      FUN_14179acf0(&local_18,1);
      DAT_14629c500 = FUN_140e0f560(&local_18);
      if (DAT_14629c500 == 0) {
        FUN_14178ab20(PTR_u_ElementalInteractionConfiguratio_14629c508);
      }
      PTR_u_ElementalInteractionConfiguratio_14629c508 = (undefined *)0x0;
      if (local_18 != 0) {
        FMemory::Free();
      }
    }
    FUN_140abb430(param_1[0x8d],DAT_14629c500);
    if ((DAT_14629c510 == 0) &&
       (PTR_u_ParticleSystem__Game_LevelArt_En_14629c518 != (undefined *)0x0)) {
      FUN_141785db0();
      puVar1 = PTR_u_ParticleSystem__Game_LevelArt_En_14629c518;
      local_18 = 0;
      local_10 = 0;
      if ((PTR_u_ParticleSystem__Game_LevelArt_En_14629c518 != (undefined *)0x0) &&
         (*(short *)PTR_u_ParticleSystem__Game_LevelArt_En_14629c518 != 0)) {
        do {
          lVar3 = lVar3 + 1;
        } while (*(short *)(PTR_u_ParticleSystem__Game_LevelArt_En_14629c518 + lVar3 * 2) != 0);
        uVar4 = (int)lVar3 + 1;
        local_10 = (ulonglong)uVar4;
        if (0 < (int)uVar4) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
        }
        FGenericPlatformString::Memcpy(local_18,puVar1,(longlong)(int)uVar4 * 2);
      }
      FUN_14179acf0(&local_18,1);
      DAT_14629c510 = FUN_140e0f800(&local_18);
      if (DAT_14629c510 == 0) {
        FUN_14178ab20(PTR_u_ParticleSystem__Game_LevelArt_En_14629c518);
      }
      PTR_u_ParticleSystem__Game_LevelArt_En_14629c518 = (undefined *)0x0;
      if (local_18 != 0) {
        FMemory::Free();
      }
    }
    *(longlong *)(param_1[0x8f] + 0x6f0) = DAT_14629c510;
    lVar3 = *(longlong *)param_1[0x92];
    uVar2 = ConstructorHelpers::FObjectFinderOptional<UStaticMesh>::Get(&DAT_14629c520);
    (**(code **)(lVar3 + 0x928))(param_1[0x92],uVar2);
    uVar2 = ConstructorHelpers::FObjectFinderOptional<UStaticMesh>::Get(&DAT_14629c530);
    *(undefined8 *)(param_1[0x91] + 0x718) = uVar2;
  }
  return param_1;
}



// FUNCTION 140e12700 FUN_140e12700 body=988 status=ok
// SIG undefined FUN_140e12700(void)

undefined8 * FUN_140e12700(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_res8;
  
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_1445916e0;
  puVar1 = (undefined8 *)FName::FName(&local_res8,L"StaticMeshComponent",1);
  uVar3 = *puVar1;
  uVar2 = FUN_142a232e0();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8b] = uVar3;
  puVar1 = (undefined8 *)FName::FName(&local_res8,L"StaticMeshComponent1",1);
  uVar3 = *puVar1;
  uVar2 = FUN_142a232e0();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8c] = uVar3;
  puVar1 = (undefined8 *)FName::FName(&local_res8,L"StaticMeshComponent2",1);
  uVar3 = *puVar1;
  uVar2 = FUN_142a232e0();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8d] = uVar3;
  puVar1 = (undefined8 *)FName::FName(&local_res8,L"StaticMeshComponent3",1);
  uVar3 = *puVar1;
  uVar2 = FUN_142a232e0();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8e] = uVar3;
  puVar1 = (undefined8 *)FName::FName(&local_res8,L"StaticMeshComponent4",1);
  uVar3 = *puVar1;
  uVar2 = FUN_142a232e0();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8f] = uVar3;
  puVar1 = (undefined8 *)FName::FName(&local_res8,L"StaticMeshComponent5",1);
  uVar3 = *puVar1;
  uVar2 = FUN_142a232e0();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x90] = uVar3;
  puVar1 = (undefined8 *)FName::FName(&local_res8,L"StaticMeshComponent6",1);
  uVar3 = *puVar1;
  uVar2 = FUN_142a232e0();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x91] = uVar3;
  puVar1 = (undefined8 *)FName::FName(&local_res8,L"StaticMeshComponent7",1);
  uVar3 = *puVar1;
  uVar2 = FUN_142a232e0();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x92] = uVar3;
  puVar1 = (undefined8 *)FName::FName(&local_res8,L"StaticMeshComponent8",1);
  uVar3 = *puVar1;
  uVar2 = FUN_142a232e0();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x93] = uVar3;
  puVar1 = (undefined8 *)FName::FName(&local_res8,L"StaticMeshComponent9",1);
  uVar3 = *puVar1;
  uVar2 = FUN_142a232e0();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x2d] = param_1[0x8b];
  param_1[0x94] = uVar3;
  local_res8 = 0;
  FUN_142399e30(param_1[0x8c],param_1[0x8b],0);
  local_res8 = 0;
  FUN_142399e30(param_1[0x8d],param_1[0x8b],0);
  local_res8 = 0;
  FUN_142399e30(param_1[0x8e],param_1[0x8b],0);
  local_res8 = 0;
  FUN_142399e30(param_1[0x8f],param_1[0x8b],0);
  local_res8 = 0;
  FUN_142399e30(param_1[0x90],param_1[0x8b],0);
  local_res8 = 0;
  FUN_142399e30(param_1[0x91],param_1[0x8b],0);
  local_res8 = 0;
  FUN_142399e30(param_1[0x92],param_1[0x8b],0);
  local_res8 = 0;
  FUN_142399e30(param_1[0x93],param_1[0x8b],0);
  local_res8 = 0;
  FUN_142399e30(param_1[0x94],param_1[0x8b],0);
  return param_1;
}



// FUNCTION 140e12ae0 FUN_140e12ae0 body=437 status=ok
// SIG undefined FUN_140e12ae0(void)

undefined8 * FUN_140e12ae0(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_140e12700();
  *param_1 = &PTR_FUN_1445916e0;
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    lVar1 = *(longlong *)param_1[0x8b];
    uVar2 = ConstructorHelpers::FObjectFinderOptional<UStaticMesh>::Get(&DAT_14629c4e0);
    (**(code **)(lVar1 + 0x928))(param_1[0x8b],uVar2);
    lVar1 = *(longlong *)param_1[0x8c];
    uVar2 = ConstructorHelpers::FObjectFinderOptional<UStaticMesh>::Get(&DAT_14629c4e0);
    (**(code **)(lVar1 + 0x928))(param_1[0x8c],uVar2);
    lVar1 = *(longlong *)param_1[0x8d];
    uVar2 = ConstructorHelpers::FObjectFinderOptional<UStaticMesh>::Get(&DAT_14629c4e0);
    (**(code **)(lVar1 + 0x928))(param_1[0x8d],uVar2);
    lVar1 = *(longlong *)param_1[0x8e];
    uVar2 = ConstructorHelpers::FObjectFinderOptional<UStaticMesh>::Get(&DAT_14629c4e0);
    (**(code **)(lVar1 + 0x928))(param_1[0x8e],uVar2);
    lVar1 = *(longlong *)param_1[0x8f];
    uVar2 = ConstructorHelpers::FObjectFinderOptional<UStaticMesh>::Get(&DAT_14629c4e0);
    (**(code **)(lVar1 + 0x928))(param_1[0x8f],uVar2);
    lVar1 = *(longlong *)param_1[0x90];
    uVar2 = ConstructorHelpers::FObjectFinderOptional<UStaticMesh>::Get(&DAT_14629c4e0);
    (**(code **)(lVar1 + 0x928))(param_1[0x90],uVar2);
    lVar1 = *(longlong *)param_1[0x91];
    uVar2 = ConstructorHelpers::FObjectFinderOptional<UStaticMesh>::Get(&DAT_14629c4e0);
    (**(code **)(lVar1 + 0x928))(param_1[0x91],uVar2);
    lVar1 = *(longlong *)param_1[0x92];
    uVar2 = ConstructorHelpers::FObjectFinderOptional<UStaticMesh>::Get(&DAT_14629c4e0);
    (**(code **)(lVar1 + 0x928))(param_1[0x92],uVar2);
    lVar1 = *(longlong *)param_1[0x93];
    uVar2 = ConstructorHelpers::FObjectFinderOptional<UStaticMesh>::Get(&DAT_14629c4e0);
    (**(code **)(lVar1 + 0x928))(param_1[0x93],uVar2);
    lVar1 = *(longlong *)param_1[0x94];
    uVar2 = ConstructorHelpers::FObjectFinderOptional<UStaticMesh>::Get(&DAT_14629c4e0);
    (**(code **)(lVar1 + 0x928))(param_1[0x94],uVar2);
  }
  return param_1;
}



// FUNCTION 140e12ca0 FUN_140e12ca0 body=119 status=ok
// SIG undefined FUN_140e12ca0(void)

undefined8 * FUN_140e12ca0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_144088fb8;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"SkeletalMeshComponent",1);
  uVar3 = *puVar1;
  uVar2 = FUN_142a07000();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8b] = uVar3;
  param_1[0x2d] = uVar3;
  return param_1;
}



// FUNCTION 140e12d20 FUN_140e12d20 body=165 status=ok
// SIG undefined FUN_140e12d20(void)

undefined8 * FUN_140e12d20(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_144088fb8;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"SkeletalMeshComponent",1);
  uVar3 = *puVar1;
  uVar2 = FUN_142a07000();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8b] = uVar3;
  param_1[0x2d] = uVar3;
  *param_1 = &PTR_FUN_144088fb8;
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    uVar3 = ConstructorHelpers::FObjectFinderOptional<UStaticMesh>::Get(&DAT_14629c4b0);
    *(undefined8 *)(param_1[0x8b] + 0x718) = uVar3;
  }
  return param_1;
}



// FUNCTION 140e12dd0 FUN_140e12dd0 body=1106 status=ok
// SIG undefined FUN_140e12dd0(void)

undefined8 * FUN_140e12dd0(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_res8;
  
  FUN_140e695c0();
  *param_1 = &PTR_FUN_144596a30;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  *(undefined4 *)(param_1 + 0xaf) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x57c) = 0;
  param_1[0xb1] = 0;
  local_res8 = 0;
  *(undefined4 *)(param_1 + 0xb3) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x59c)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xb2,0);
  }
  if ((undefined2 *)param_1[0xb2] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0xb2] = 0;
  }
  *(undefined4 *)(param_1 + 0xb0) = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x5a4) = 0;
  param_1[0xb6] = 0;
  local_res8 = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if ((*(int *)((longlong)param_1 + 0x5c4) < 0) && (*(int *)((longlong)param_1 + 0x5c4) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xb7,0);
  }
  if ((undefined2 *)param_1[0xb7] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0xb7] = 0;
  }
  *(undefined4 *)(param_1 + 0xb5) = 0;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  *(undefined4 *)(param_1 + 0xb9) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x5cc) = 0;
  param_1[0xbb] = 0;
  local_res8 = 0;
  *(undefined4 *)(param_1 + 0xbd) = 0;
  if ((*(int *)((longlong)param_1 + 0x5ec) < 0) && (*(int *)((longlong)param_1 + 0x5ec) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xbc,0);
  }
  if ((undefined2 *)param_1[0xbc] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0xbc] = 0;
  }
  *(undefined4 *)(param_1 + 0xba) = 0;
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  param_1[0xd0] = 0;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"MainMesh",1);
  uVar5 = *puVar3;
  uVar4 = FUN_142e5c1e0();
  uVar5 = FUN_141752410(param_1,uVar5,uVar4,uVar4,1,0,0);
  param_1[0xc0] = uVar5;
  local_res8 = 0;
  FUN_142399e30(uVar5,param_1[0x2d],0);
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"LeftHardPointMesh",1);
  uVar5 = *puVar3;
  uVar4 = FUN_142e5c1e0();
  uVar5 = FUN_141752410(param_1,uVar5,uVar4,uVar4,1,0,0);
  param_1[0xc1] = uVar5;
  FUN_142399e30(uVar5,param_1[0xc0],DAT_146870148);
  lVar2 = param_1[0xc1];
  iVar1 = *(int *)(lVar2 + 0x90);
  *(int *)(lVar2 + 0x90) = iVar1 + 1;
  if (*(int *)(lVar2 + 0x94) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar2 + 0x88,iVar1);
  }
  *(undefined8 *)(*(longlong *)(lVar2 + 0x88) + (longlong)iVar1 * 8) = DAT_146870160;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"RightHardPointMesh",1);
  uVar5 = *puVar3;
  uVar4 = FUN_142e5c1e0();
  uVar5 = FUN_141752410(param_1,uVar5,uVar4,uVar4,1,0,0);
  param_1[0xc2] = uVar5;
  FUN_142399e30(uVar5,param_1[0xc0],DAT_146870150);
  lVar2 = param_1[0xc2];
  iVar1 = *(int *)(lVar2 + 0x90);
  *(int *)(lVar2 + 0x90) = iVar1 + 1;
  if (*(int *)(lVar2 + 0x94) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar2 + 0x88,iVar1);
  }
  *(undefined8 *)(*(longlong *)(lVar2 + 0x88) + (longlong)iVar1 * 8) = DAT_146870168;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"GunnersNest",1);
  uVar5 = *puVar3;
  uVar4 = FUN_142e5c1e0();
  uVar5 = FUN_141752410(param_1,uVar5,uVar4,uVar4,1,0,0);
  param_1[0xc3] = uVar5;
  FUN_142399e30(uVar5,param_1[0xc0],DAT_146870158);
  lVar2 = param_1[0xc3];
  iVar1 = *(int *)(lVar2 + 0x90);
  *(int *)(lVar2 + 0x90) = iVar1 + 1;
  if (*(int *)(lVar2 + 0x94) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar2 + 0x88,iVar1);
  }
  *(undefined8 *)(*(longlong *)(lVar2 + 0x88) + (longlong)iVar1 * 8) = DAT_146870170;
  FUN_142397540(param_1[0xc3],1);
  FName::FName(&local_res8,L"LeftHardPointCE",1);
  param_1[0xca] = local_res8;
  FName::FName(&local_res8,L"RightHardPointCE",1);
  param_1[0xc5] = local_res8;
  *(undefined1 *)(param_1 + 0xcf) = 1;
  *(undefined4 *)((longlong)param_1 + 0x67c) = 0x3e99999a;
  return param_1;
}



// FUNCTION 140e13230 FUN_140e13230 body=40 status=ok
// SIG undefined FUN_140e13230(void)

undefined8 * FUN_140e13230(undefined8 *param_1)

{
  FUN_140e695c0();
  *(undefined1 *)(param_1 + 0xaa) = 0;
  *param_1 = &PTR_FUN_1445944e8;
  return param_1;
}



// FUNCTION 140e13260 FUN_140e13260 body=175 status=ok
// SIG undefined FUN_140e13260(void)

undefined4 * FUN_140e13260(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 local_38;
  undefined1 local_30 [24];
  
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[8] = 0;
  if (0x7fffffff < (uint)param_1[9]) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 6,0);
  }
  if (*(undefined2 **)(param_1 + 6) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 6) = 0;
  }
  param_1[2] = 0;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  local_38 = *(undefined8 *)(param_2 + 4);
  FString::FString(local_30,param_2 + 6);
  FSoftObjectPath::operator=(param_1 + 4,&local_38);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  return param_1;
}



// FUNCTION 140e13310 FUN_140e13310 body=257 status=ok
// SIG undefined FUN_140e13310(void)

undefined4 * FUN_140e13310(undefined4 *param_1,longlong param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 local_38 [32];
  
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[8] = 0;
  if (0x7fffffff < (uint)param_1[9]) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 6,0);
  }
  if (*(undefined2 **)(param_1 + 6) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 6) = 0;
  }
  param_1[2] = 0;
  if (param_2 == 0) {
    *param_1 = 0xffffffff;
    param_1[1] = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    param_1[8] = 0;
    if (((int)param_1[9] < 0) && (param_1[9] != 0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 6,0);
    }
    if (*(undefined2 **)(param_1 + 6) != (undefined2 *)0x0) {
      **(undefined2 **)(param_1 + 6) = 0;
    }
    param_1[2] = 0;
  }
  else {
    uVar1 = FSoftObjectPath::FSoftObjectPath(local_38,param_2);
    FSoftObjectPath::operator=(param_1 + 4,uVar1);
    FWeakObjectPtr::operator=(param_1,param_2);
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    param_1[2] = DAT_1464b56f4;
  }
  *(undefined1 *)(param_1 + 10) = param_3;
  return param_1;
}



// FUNCTION 140e13420 FUN_140e13420 body=44 status=ok
// SIG undefined FUN_140e13420(void)

undefined8 * FUN_140e13420(undefined8 *param_1)

{
  FUN_140e400a0();
  param_1[0xdb] = 0;
  *param_1 = &PTR_FUN_144597160;
  return param_1;
}



// FUNCTION 140e13450 FUN_140e13450 body=228 status=ok
// SIG undefined FUN_140e13450(void)

undefined8 * FUN_140e13450(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  *(undefined2 *)(param_1 + 6) = 0x100;
  *param_1 = &PTR_FUN_1445903b8;
  *(undefined4 *)(param_1 + 7) = *param_2;
  *(undefined4 *)((longlong)param_1 + 0x3c) = param_2[1];
  *(undefined1 *)(param_1 + 8) = 0;
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
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = *param_3;
  lVar1 = param_3[1];
  param_1[0x17] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  return param_1;
}



// FUNCTION 140e13540 FUN_140e13540 body=147 status=ok
// SIG undefined FUN_140e13540(void)

longlong FUN_140e13540(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x54)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x48,0);
  }
  if (*(undefined2 **)(param_1 + 0x48) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 0x48) = 0;
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  FUN_140e26580(param_1,param_2);
  return param_1;
}



// FUNCTION 140e135e0 FUN_140e135e0 body=175 status=ok
// SIG undefined FUN_140e135e0(void)

undefined4 * FUN_140e135e0(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 local_38;
  undefined1 local_30 [24];
  
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  param_1[2] = 0xffffffff;
  param_1[3] = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  param_1[10] = 0;
  if (0x7fffffff < (uint)param_1[0xb]) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 8,0);
  }
  if (*(undefined2 **)(param_1 + 8) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 8) = 0;
  }
  param_1[4] = 0;
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  local_38 = *(undefined8 *)(param_2 + 6);
  FString::FString(local_30,param_2 + 8);
  FSoftObjectPath::operator=(param_1 + 6,&local_38);
  *param_1 = *param_2;
  return param_1;
}



// FUNCTION 140e13690 FUN_140e13690 body=178 status=ok
// SIG undefined FUN_140e13690(void)

undefined4 * FUN_140e13690(undefined4 *param_1,longlong param_2)

{
  undefined8 local_38;
  undefined1 local_30 [24];
  
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  param_1[2] = 0xffffffff;
  param_1[3] = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  param_1[10] = 0;
  if (0x7fffffff < (uint)param_1[0xb]) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 8,0);
  }
  if (*(undefined2 **)(param_1 + 8) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 8) = 0;
  }
  param_1[4] = 0;
  param_1[2] = *(undefined4 *)(param_2 + 8);
  param_1[3] = *(undefined4 *)(param_2 + 0xc);
  param_1[4] = *(undefined4 *)(param_2 + 0x10);
  local_38 = *(undefined8 *)(param_2 + 0x18);
  FString::FString(local_30,param_2 + 0x20);
  FSoftObjectPath::operator=(param_1 + 6,&local_38);
  *param_1 = *(undefined4 *)(param_2 + 0x30);
  return param_1;
}



// FUNCTION 140e13750 FUN_140e13750 body=90 status=ok
// SIG undefined FUN_140e13750(void)

undefined8 * FUN_140e13750(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  *(undefined2 *)(param_1 + 6) = 0x100;
  *param_1 = &PTR_FUN_144590fc0;
  param_1[7] = *param_3;
  lVar1 = param_3[1];
  param_1[8] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 9) = *param_2;
  *(undefined4 *)((longlong)param_1 + 0x4c) = param_2[1];
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  return param_1;
}



// FUNCTION 140e137b0 FUN_140e137b0 body=236 status=ok
// SIG undefined FUN_140e137b0(void)

undefined8 * FUN_140e137b0(undefined8 *param_1)

{
  FUN_140e406e0();
  *param_1 = &PTR_FUN_144592210;
  param_1[5] = &PTR_LAB_144592660;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 2;
  FUN_142d2e580(param_1 + 0x55);
  *(undefined4 *)(param_1 + 0x6e) = 5;
  *(undefined4 *)((longlong)param_1 + 900) = 5;
  *(undefined1 *)(param_1 + 0x72) = 0xff;
  param_1[0x73] = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined1 *)(param_1 + 0x76) = 0xff;
  param_1[0x77] = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) | 8;
  *(byte *)((longlong)param_1 + 0xba) = *(byte *)((longlong)param_1 + 0xba) | 2;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 6;
  *(uint *)((longlong)param_1 + 0xc4) = *(uint *)((longlong)param_1 + 0xc4) | 1;
  *(undefined1 *)(param_1 + 0x7f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3fc) = 0xffffffff;
  param_1[0x80] = 0;
  *(undefined1 *)(param_1 + 0x81) = 0;
  return param_1;
}



// FUNCTION 140e138a0 FUN_140e138a0 body=166 status=ok
// SIG undefined FUN_140e138a0(void)

undefined8 * FUN_140e138a0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_140e13fa0(param_1,uVar1);
  *param_1 = &PTR_FUN_144594050;
  param_1[5] = &PTR_LAB_1445944b8;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x50) = 0x3fc00000;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2cc) = 0;
  *(undefined4 *)(param_1 + 0x59) = 0xffffffff;
  param_1[0x5a] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2dc) = 0;
  *(undefined4 *)(param_1 + 0x5b) = 0xffffffff;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 6;
  return param_1;
}



// FUNCTION 140e13950 FUN_140e13950 body=116 status=ok
// SIG undefined FUN_140e13950(void)

undefined8 * FUN_140e13950(undefined8 *param_1)

{
  FUN_142326e40();
  *param_1 = &PTR_FUN_144590448;
  param_1[5] = &PTR_LAB_144590860;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) | 8;
  return param_1;
}



// FUNCTION 140e139d0 FUN_140e139d0 body=206 status=ok
// SIG undefined FUN_140e139d0(void)

undefined8 * FUN_140e139d0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_142fdf220();
  *param_1 = &PTR_FUN_144595830;
  param_1[6] = &PTR_LAB_144595ab8;
  FUN_1405e1750(param_1 + 100);
  *(undefined2 *)(param_1 + 0x6c) = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  *(undefined4 *)(param_1 + 0x6d) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x36c) = 0;
  param_1[0x6f] = 0;
  *(undefined4 *)(param_1 + 0x71) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x38c)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x70,0);
  }
  if ((undefined2 *)param_1[0x70] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x70] = 0;
  }
  *(undefined4 *)(param_1 + 0x6e) = 0;
  param_1[0x72] = 0;
  *(undefined1 *)(param_1 + 0x73) = 1;
  uVar1 = FUN_14142bde0();
  param_1[0x60] = uVar1;
  return param_1;
}



// FUNCTION 140e13aa0 FUN_140e13aa0 body=33 status=ok
// SIG undefined FUN_140e13aa0(void)

undefined8 * FUN_140e13aa0(undefined8 *param_1)

{
  FUN_142d2f080();
  *param_1 = &PTR_FUN_144595ad0;
  return param_1;
}



// FUNCTION 140e13ad0 FUN_140e13ad0 body=60 status=ok
// SIG undefined FUN_140e13ad0(void)

undefined8 * FUN_140e13ad0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_142bd6400();
  *param_1 = &PTR_FUN_144596000;
  *(undefined1 *)(param_1 + 0x1e) = 2;
  *(undefined1 *)((longlong)param_1 + 0x5a) = 3;
  *(undefined1 *)((longlong)param_1 + 0x44) = 0;
  uVar1 = UEnvQueryItemType_Actor::GetPrivateStaticClass();
  param_1[0x38] = uVar1;
  return param_1;
}



// FUNCTION 140e13b10 FUN_140e13b10 body=68 status=ok
// SIG undefined FUN_140e13b10(void)

undefined8 * FUN_140e13b10(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_142bd6400();
  *param_1 = &PTR__scalar_deleting_destructor__144596298;
  param_1[0x3b] = 0;
  uVar1 = UEnvQueryContext_Querier::GetPrivateStaticClass();
  param_1[0x3b] = uVar1;
  uVar1 = FUN_142e107c0();
  param_1[0x38] = uVar1;
  return param_1;
}



// FUNCTION 140e13b60 FUN_140e13b60 body=157 status=ok
// SIG undefined FUN_140e13b60(void)

undefined8 * FUN_140e13b60(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR_FUN_144590d38;
  FText::FText(param_1 + 7);
  FText::FText(param_1 + 10);
  param_1[0xd] = 0;
  param_1[0xe] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0xd,0);
  FGenericPlatformString::Memcpy(param_1[0xd],L"placeholder1",0x1a);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0xffffffff;
  return param_1;
}



// FUNCTION 140e13c00 UVariant body=61 status=ok
// SIG undefined UVariant(void)

undefined8 * UVariant::UVariant(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR_FUN_1445967b0;
  FText::FText(param_1 + 6);
  FText::FText(param_1 + 9);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  return param_1;
}



// FUNCTION 140e13c40 FUN_140e13c40 body=71 status=ok
// SIG undefined FUN_140e13c40(void)

undefined8 * FUN_140e13c40(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR_FUN_144596530;
  param_1[7] = 0;
  param_1[8] = 0;
  FText::FText(param_1 + 9);
  FText::FText(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  return param_1;
}



// FUNCTION 140e13c90 FUN_140e13c90 body=88 status=ok
// SIG undefined FUN_140e13c90(void)

undefined8 * FUN_140e13c90(undefined8 *param_1)

{
  FUN_1422552b0();
  *param_1 = &PTR_FUN_1445971d8;
  *(undefined8 *)((longlong)param_1 + 0x454) = 0;
  *(undefined4 *)(param_1 + 0x8a) = 0xc2c80000;
  *(undefined1 *)(param_1 + 0x8e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x45c) = 0x3f59999a;
  *(undefined4 *)(param_1 + 0x8c) = 0x3fb33333;
  *(undefined4 *)((longlong)param_1 + 0x474) = 0x3f800000;
  return param_1;
}



// FUNCTION 140e13cf0 FUN_140e13cf0 body=40 status=ok
// SIG undefined FUN_140e13cf0(void)

undefined8 * FUN_140e13cf0(undefined8 *param_1)

{
  FUN_1422552b0();
  *(undefined1 *)(param_1 + 0x8b) = 0;
  *param_1 = &PTR_FUN_144597518;
  return param_1;
}



// FUNCTION 140e13d20 FUN_140e13d20 body=69 status=ok
// SIG undefined FUN_140e13d20(void)

undefined8 * FUN_140e13d20(undefined8 *param_1)

{
  FUN_1422552b0();
  *param_1 = &PTR_FUN_144597858;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  param_1[0x8b] = 0x44bb8000;
  *(undefined4 *)((longlong)param_1 + 0x46c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x464) = 0x43c80000;
  return param_1;
}



// FUNCTION 140e13d70 FUN_140e13d70 body=173 status=ok
// SIG undefined FUN_140e13d70(void)

undefined8 * FUN_140e13d70(undefined8 *param_1)

{
  UDynamicBlueprintBinding::UDynamicBlueprintBinding();
  *param_1 = &PTR_FUN_144595d70;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0x10000;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x19] = 0;
  *(undefined2 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined2 *)((longlong)param_1 + 0xec) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined1 *)((longlong)param_1 + 0xde) = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  return param_1;
}



// FUNCTION 140e13e20 FUN_140e13e20 body=234 status=ok
// SIG undefined FUN_140e13e20(void)

undefined8 * FUN_140e13e20(undefined8 *param_1)

{
  FUN_142dc1e20();
  *param_1 = &PTR_FUN_144590890;
  param_1[5] = &PTR_LAB_144590d08;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  *(undefined4 *)((longlong)param_1 + 0x23c) = 0;
  *(undefined4 *)(param_1 + 0x47) = 0xffffffff;
  param_1[0x49] = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  *(undefined4 *)(param_1 + 0x51) = 0xffffffff;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 2;
  *(undefined1 *)(param_1 + 0x5b) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x3f800000;
  return param_1;
}



// FUNCTION 140e13f10 FUN_140e13f10 body=43 status=ok
// SIG undefined FUN_140e13f10(void)

undefined8 * FUN_140e13f10(undefined8 *param_1)

{
  FUN_140455c90();
  *param_1 = &PTR_FUN_1440f3148;
  param_1[5] = 0;
  param_1[6] = 0;
  return param_1;
}



// FUNCTION 140e13f40 FUN_140e13f40 body=91 status=ok
// SIG undefined FUN_140e13f40(void)

undefined8 * FUN_140e13f40(undefined8 *param_1)

{
  undefined8 local_res8 [4];
  
  FUN_14263d890();
  *param_1 = &PTR_FUN_1445910d8;
  param_1[7] = 0;
  param_1[8] = 0;
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 1;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xffffffb3 | 3;
  FName::FName(local_res8,"ProcMeshActor",1);
  param_1[7] = local_res8[0];
  return param_1;
}



// FUNCTION 140e13fa0 FUN_140e13fa0 body=178 status=ok
// SIG undefined FUN_140e13fa0(void)

undefined8 * FUN_140e13fa0(undefined8 *param_1)

{
  FUN_142326e40();
  *param_1 = &PTR_FUN_144593bb8;
  param_1[5] = &PTR_LAB_144594020;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 2;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 2;
  param_1[0x35] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = 0x3ecccccd;
  param_1[0x38] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x40] = 0;
  param_1[0x42] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24c) = 0;
  *(undefined4 *)(param_1 + 0x49) = 0xffffffff;
  return param_1;
}



// FUNCTION 140e14060 UNavigationDataChunk body=39 status=ok
// SIG undefined UNavigationDataChunk(void)

undefined8 * UNavigationDataChunk::UNavigationDataChunk(undefined8 *param_1)

{
  FUN_1425d94e0();
  *param_1 = &PTR_FUN_144591458;
  param_1[5] = 0;
  return param_1;
}



// FUNCTION 140e14090 FUN_140e14090 body=107 status=ok
// SIG undefined FUN_140e14090(void)

void FUN_140e14090(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x18);
    do {
      FRichCurve::~FRichCurve(plVar2 + 9);
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0x1b;
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



// FUNCTION 140e14100 ~TArray<FNYLoadingScreenImageInfo,FDefaultAllocator> body=95 status=ok
// SIG undefined ~TArray<FNYLoadingScreenImageInfo,FDefaultAllocator>(void)

void TArray<FNYLoadingScreenImageInfo,FDefaultAllocator>::
     ~TArray<FNYLoadingScreenImageInfo,FDefaultAllocator>(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x18);
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0xb;
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



// FUNCTION 140e14160 ~TArray<FHeightFieldPrimitiveRemoveInfo,TSizedDefaultAllocator<32>_> body=95 status=ok
// SIG undefined ~TArray<FHeightFieldPrimitiveRemoveInfo,TSizedDefaultAllocator<32>_>(void)

void TArray<FHeightFieldPrimitiveRemoveInfo,TSizedDefaultAllocator<32>_>::
     ~TArray<FHeightFieldPrimitiveRemoveInfo,TSizedDefaultAllocator<32>_>(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x18);
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 8;
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



// FUNCTION 140e141c0 FUN_140e141c0 body=818 status=ok
// SIG undefined FUN_140e141c0(void)

void FUN_140e141c0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  FUN_140c30de0(param_1 + 0x2e18);
  FUN_140a513a0(param_1 + 0x2d30);
  if (*(longlong *)(param_1 + 0x2cf8) != 0) {
    FMemory::Free();
  }
  FUN_1408708d0(param_1 + 0x2cd8);
  FUN_140591060(param_1 + 0x2c90);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x2c50);
  if (*(longlong *)(param_1 + 0x2c40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2c30) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2c08) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2be0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2ba0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2b88) != 0) {
    FMemory::Free();
  }
  thunk_FUN_142478640(param_1 + 0x2af0);
  if (*(longlong *)(param_1 + 0x2aa0) != 0) {
    FMemory::Free();
  }
  plVar3 = *(longlong **)(param_1 + 0x2a80);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if (*(longlong *)(param_1 + 0x2a68) != 0) {
    FMemory::Free();
  }
  FUN_140e14a00(param_1 + 0x2950);
  if (*(longlong *)(param_1 + 0x2870) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2848) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x27b0) != 0) {
    FMemory::Free();
  }
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(param_1 + 0x26e0);
  if (*(longlong *)(param_1 + 0x26d0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2660) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2650) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x25b8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2520) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2510) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2500) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x24f0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x24d8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x24b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2408) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x23f8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x23e8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x23d8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x23c8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x23b8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x23a8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2398) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2388) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2378) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2368) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2358) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2348) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x2300) = 0;
  if (*(longlong *)(param_1 + 0x22f8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<int,FNavAvoidanceData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<int,FNavAvoidanceData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x22b8);
  *(undefined ***)(param_1 + 0x2298) = &PTR_FUN_143fe0658;
  FUN_1409c4bb0(param_1);
  return;
}



// FUNCTION 140e14500 FUN_140e14500 body=102 status=ok
// SIG undefined FUN_140e14500(void)

void FUN_140e14500(longlong param_1)

{
  thunk_FUN_142478640(param_1 + 0x950);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x938);
  *(undefined ***)(param_1 + 0x8f0) = &PTR_FUN_143fe0658;
  *(undefined ***)(param_1 + 0x8e8) = &PTR_FUN_1441b49f8;
  *(undefined ***)(param_1 + 0x8e0) = &PTR_FUN_143fe0658;
  *(undefined ***)(param_1 + 0x8d8) = &PTR_FUN_144191f28;
  FUN_140e14570(param_1);
  return;
}



// FUNCTION 140e14570 FUN_140e14570 body=680 status=ok
// SIG undefined FUN_140e14570(void)

void FUN_140e14570(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  
  iVar2 = *(int *)(param_1 + 0x8c0);
  plVar3 = *(longlong **)(param_1 + 0x8b8);
  if (iVar2 != 0) {
    do {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar3 = *(longlong **)(param_1 + 0x8b8);
  }
  if (plVar3 != (longlong *)0x0) {
    FMemory::Free(plVar3);
  }
  if (*(longlong *)(param_1 + 0x8a8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x898) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x888) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x7c8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x790) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x780) = 0;
  if (*(longlong *)(param_1 + 0x778) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x738);
  if (*(longlong *)(param_1 + 0x728) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x710) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x700) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x6b0) != 0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 0x6a0);
  lVar1 = *(longlong *)(param_1 + 0x698);
  if (iVar2 != 0) {
    plVar3 = (longlong *)(lVar1 + 0x38);
    do {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 9;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *(longlong *)(param_1 + 0x698);
  }
  if (lVar1 != 0) {
    FMemory::Free();
  }
  thunk_FUN_142478640(param_1 + 0x664);
  thunk_FUN_142478640(param_1 + 0x640);
  FUN_142d98960(param_1 + 0x5a0);
  if (*(longlong *)(param_1 + 0x590) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x570) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x560) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x550) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x540) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x530) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x520) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x510) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x500) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4f0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4e0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4d0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4c0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4b0) != 0) {
    FMemory::Free();
  }
  thunk_FUN_142478640(param_1 + 0x488);
  *(undefined ***)(param_1 + 0x468) = &PTR_FUN_143fe0658;
  *(undefined ***)(param_1 + 0x460) = &PTR_FUN_143fce298;
  *(undefined ***)(param_1 + 0x458) = &PTR_FUN_14416af28;
  FUN_1404571d0(param_1);
  return;
}



// FUNCTION 140e14820 FUN_140e14820 body=477 status=ok
// SIG undefined FUN_140e14820(void)

void FUN_140e14820(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong local_18;
  longlong *local_10;
  
  *param_1 = &PTR_FUN_1445903b8;
  FUN_140e25960(param_1,&local_18);
  if (local_18 != 0) {
    if (param_1[0xf] != 0) {
      TBaseMulticastDelegate<void>::Remove(local_18 + 0x108,param_1[0xf]);
      param_1[0xf] = 0;
    }
    if (param_1[0x1a] != 0) {
      TBaseMulticastDelegate<void>::Remove(local_18 + 0x120,param_1[0x1a]);
      param_1[0x1a] = 0;
    }
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_10 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar1 = (int *)((longlong)local_10 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
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
  plVar4 = (longlong *)param_1[0x17];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  plVar4 = (longlong *)param_1[0x15];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  if (param_1[0x12] != 0) {
    FMemory::Free();
  }
  if (param_1[0x10] != 0) {
    FMemory::Free();
  }
  plVar4 = (longlong *)param_1[0xe];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  if (param_1[0xb] != 0) {
    FMemory::Free();
  }
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  FUN_140bff520(param_1);
  return;
}



// FUNCTION 140e14a00 FUN_140e14a00 body=151 status=ok
// SIG undefined FUN_140e14a00(void)

void FUN_140e14a00(longlong param_1)

{
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0xe8);
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<int,FFastArraySerializerGuidReferences>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<int,FFastArraySerializerGuidReferences>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1);
  return;
}



// FUNCTION 140e14aa0 FUN_140e14aa0 body=106 status=ok
// SIG undefined FUN_140e14aa0(void)

void FUN_140e14aa0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_144590fc0;
  plVar4 = (longlong *)param_1[8];
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
  FUN_140bff520(param_1);
  return;
}



// FUNCTION 140e14b10 FUN_140e14b10 body=294 status=ok
// SIG undefined FUN_140e14b10(void)

void FUN_140e14b10(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  
  if (*(longlong *)(param_1 + 0x1e8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1d8) != 0) {
    FMemory::Free();
  }
  iVar5 = *(int *)(param_1 + 0x1d0);
  lVar1 = *(longlong *)(param_1 + 0x1c8);
  if (iVar5 != 0) {
    plVar3 = (longlong *)(lVar1 + 0x40);
    do {
      iVar4 = (int)plVar3[1];
      lVar1 = *plVar3;
      if (iVar4 != 0) {
        plVar2 = (longlong *)(lVar1 + 0x20);
        do {
          if (*plVar2 != 0) {
            FMemory::Free();
          }
          plVar2 = plVar2 + 7;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        lVar1 = *plVar3;
      }
      if (lVar1 != 0) {
        FMemory::Free();
      }
      if (plVar3[-3] != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 0x10;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    lVar1 = *(longlong *)(param_1 + 0x1c8);
  }
  if (lVar1 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  return;
}



// FUNCTION 140e14c40 FUN_140e14c40 body=199 status=ok
// SIG undefined FUN_140e14c40(void)

void FUN_140e14c40(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FMemory::Free();
  }
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(param_1 + 0xd0);
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(param_1 + 0xb8);
  iVar3 = *(int *)(param_1 + 0xb0);
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 8);
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 3;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar1 = *(longlong *)(param_1 + 0xa8);
  }
  if (lVar1 != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x60) = &PTR_ValueToString_14407aff8;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  return;
}



// FUNCTION 140e14d10 FUN_140e14d10 body=159 status=ok
// SIG undefined FUN_140e14d10(void)

void FUN_140e14d10(longlong param_1)

{
  if (*(longlong *)(param_1 + 600) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x240) = 0;
  if (*(longlong *)(param_1 + 0x238) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<int,FFastArraySerializerGuidReferences>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<int,FFastArraySerializerGuidReferences>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1 + 0x1f8);
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x1a0);
  if (*(longlong *)(param_1 + 400) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x178);
  FUN_140458c20(param_1);
  return;
}



// FUNCTION 140e14db0 FUN_140e14db0 body=16 status=ok
// SIG undefined FUN_140e14db0(void)

undefined8 * FUN_140e14db0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  return param_1;
}



// FUNCTION 140e14dc0 FUN_140e14dc0 body=129 status=ok
// SIG undefined FUN_140e14dc0(void)

undefined8 * FUN_140e14dc0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  iVar1 = *(int *)(param_2 + 2);
  *(undefined4 *)(param_1 + 2) = 0;
  if (*(int *)((longlong)param_1 + 0x14) != iVar1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 1);
  }
  lVar2 = param_2[1];
  lVar3 = (longlong)*(int *)(param_2 + 2) * 0x10 + lVar2;
  for (; lVar2 != lVar3; lVar2 = lVar2 + 0x10) {
    FUN_140e0f1b0(param_1 + 1,lVar2);
  }
  return param_1;
}



// FUNCTION 140e14e50 FUN_140e14e50 body=89 status=ok
// SIG undefined FUN_140e14e50(void)

undefined4 * FUN_140e14e50(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 local_28;
  undefined1 local_20 [24];
  
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  local_28 = *(undefined8 *)(param_2 + 6);
  FString::FString(local_20,param_2 + 8);
  FSoftObjectPath::operator=(param_1 + 6,&local_28);
  *param_1 = *param_2;
  return param_1;
}



// FUNCTION 140e14eb0 FUN_140e14eb0 body=118 status=ok
// SIG undefined FUN_140e14eb0(void)

bool FUN_140e14eb0(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *local_28;
  int local_20;
  undefined2 *local_18;
  int local_10;
  
  FSoftObjectPath::ToString(param_2 + 0x18,&local_18);
  FSoftObjectPath::ToString(param_1 + 0x40,&local_28);
  puVar3 = &DAT_143f3eda8;
  if (local_10 != 0) {
    puVar3 = local_18;
  }
  puVar2 = &DAT_143f3eda8;
  if (local_20 != 0) {
    puVar2 = local_28;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar2,puVar3);
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return iVar1 == 0;
}



// FUNCTION 140e14f30 FUN_140e14f30 body=247 status=ok
// SIG undefined FUN_140e14f30(void)

undefined8 FUN_140e14f30(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  lVar4 = *(longlong *)(param_2 + 0x28);
  lVar2 = FUN_14130a410();
  if (lVar4 != lVar2) {
    return 0;
  }
  lVar2 = *param_1;
  if (lVar4 == 0) {
    return 0;
  }
  lVar3 = FUN_14130a410();
  lVar4 = *(longlong *)(param_2 + 0x28);
  while( true ) {
    if (lVar4 == 0) {
      return 0;
    }
    if (lVar4 == lVar3) break;
    lVar4 = *(longlong *)(lVar4 + 0x30);
  }
  if (lVar2 == 0) {
    return 0;
  }
  if (*(int *)(param_2 + 0x38) != *(int *)(param_2 + 100)) {
    lVar4 = *(longlong *)(param_2 + 0x70);
    if (*(longlong *)(param_2 + 0x70) == 0) {
      lVar4 = param_2 + 0x68;
    }
    iVar1 = *(int *)(lVar4 + ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                             (longlong)*(int *)(param_2 + 0x78) - 1U) * 4);
    if (iVar1 != -1) {
      do {
        puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + (longlong)iVar1 * 0x18);
        if (*(longlong *)(*(longlong *)(param_2 + 0x30) + (longlong)iVar1 * 0x18) == lVar2) {
          if (iVar1 != -1) goto LAB_140e15003;
          break;
        }
        iVar1 = *(int *)(puVar6 + 2);
      } while (iVar1 != -1);
    }
  }
  puVar6 = (undefined8 *)0x0;
LAB_140e15003:
  puVar5 = puVar6 + 1;
  if (puVar6 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  if (puVar5 == (undefined8 *)0x0) {
    return 0;
  }
  return *puVar5;
}



// FUNCTION 140e15030 FUN_140e15030 body=120 status=ok
// SIG undefined FUN_140e15030(void)

void FUN_140e15030(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  *(undefined4 *)*param_1 = *(undefined4 *)(param_2 + 600);
  if (*(char *)param_1[1] != '\0') {
    cVar1 = *(char *)(param_1[2] + 0x360);
    if (cVar1 == '\x01') {
      uVar2 = FUN_1405f4330();
      *(undefined4 *)(param_2 + 0x27c) = uVar2;
      *(undefined1 *)(param_2 + 0x281) = 1;
      return;
    }
    if (cVar1 == '\x02') {
      *(undefined1 *)(param_2 + 0x270) = 1;
      *(undefined4 *)(param_2 + 0x274) = 0x41f00000;
      return;
    }
    if (cVar1 == '\x03') {
      uVar2 = FUN_1405f4330();
      *(undefined4 *)(param_2 + 0x27c) = uVar2;
    }
  }
  return;
}



// FUNCTION 140e150b0 FUN_140e150b0 body=594 status=ok
// SIG undefined FUN_140e150b0(void)

void FUN_140e150b0(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  undefined8 uVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong local_res18;
  undefined1 local_res20 [8];
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  undefined4 local_58;
  undefined4 local_54;
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  longlong local_40;
  undefined8 local_38;
  longlong local_30;
  
  FString::operator=(*param_1 + 0xe0,param_1[1]);
  FString::operator=(*param_1 + 0xf0,param_1[2]);
  FString::operator=(*param_1 + 0x100,param_1[3]);
  lVar6 = *param_1;
  local_38 = *(undefined8 *)(lVar6 + 0xb0);
  local_30 = *(longlong *)(lVar6 + 0xb8);
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
    lVar6 = *param_1;
  }
  uVar4 = FWeakObjectPtr::Get(lVar6 + 0x38);
  pwVar5 = (wchar_t *)FUN_14244c070(uVar4,&local_38);
  if (pwVar5 != (wchar_t *)0x0) {
    lVar6 = FUN_141432660();
    if ((*(int *)(*(longlong *)(pwVar5 + 8) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar5 + 8) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140e1517b;
  }
  pwVar5 = (wchar_t *)0x0;
LAB_140e1517b:
  FWeakObjectPtr::operator=(&local_58,0);
  local_50 = 0;
  pwVar7 = _guard_xfg_dispatch_icall_nop(L"&UOakLocalPlayer::OnConfirmSignIntoAccount",L"::");
  pwVar3 = (wchar_t *)0x0;
  while (pwVar2 = pwVar7, pwVar2 != (wchar_t *)0x0) {
    pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
    pwVar3 = pwVar2;
  }
  FName::FName(&local_res18,pwVar3 + 2,1);
  FWeakObjectPtr::operator=(&local_58,pwVar5);
  local_50 = local_res18;
  if ((local_res18 != 0) && (lVar6 = FWeakObjectPtr::Get(&local_58), lVar6 != 0)) {
    UObject::FindFunction(lVar6,local_50);
  }
  puVar8 = (undefined8 *)FName::FName(local_60,L"GbxShiftOverlay",1);
  plVar9 = (longlong *)FModuleManager::GetModulePtr_Internal(*puVar8);
  if (plVar9 != (longlong *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146870238) &&
       (_Init_thread_header(&DAT_146870238), DAT_146870238 == -1)) {
      FName::FName(&DAT_146870230,"UOakGameInstance:BlockReason:ModalDialog",1);
      _Init_thread_footer(&DAT_146870238);
    }
    (**(code **)(*plVar9 + 0xb0))(plVar9,DAT_146870230);
  }
  FWeakObjectPtr::operator=(local_res20,0);
  FWeakObjectPtr::operator=(local_68,0);
  local_48 = local_58;
  local_44 = local_54;
  local_40 = local_50;
  FUN_140c23780(3,param_2,&local_48,local_68,local_res20,2);
  return;
}



// FUNCTION 140e15680 FUN_140e15680 body=43 status=ok
// SIG undefined FUN_140e15680(void)

undefined8 * FUN_140e15680(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 140e156b0 FUN_140e156b0 body=99 status=ok
// SIG undefined FUN_140e156b0(void)

longlong FUN_140e156b0(longlong param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x9a8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  FUN_140e14500(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xc30);
  }
  return param_1;
}



// FUNCTION 140e15720 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
ULandscapeHeightfieldCollisionComponent::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  FUN_1426f61d0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x530);
  }
  return param_1;
}



// FUNCTION 140e15760 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 AUGAICharacter::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1409c4bb0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2320);
  }
  return param_1;
}



// FUNCTION 140e157a0 FUN_140e157a0 body=52 status=ok
// SIG undefined FUN_140e157a0(void)

undefined8 FUN_140e157a0(undefined8 param_1,ulonglong param_2)

{
  FUN_140e141c0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x33d0);
  }
  return param_1;
}



// FUNCTION 140e157e0 FUN_140e157e0 body=52 status=ok
// SIG undefined FUN_140e157e0(void)

undefined8 FUN_140e157e0(undefined8 param_1,ulonglong param_2)

{
  FUN_1404571d0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4a8);
  }
  return param_1;
}



// FUNCTION 140e15820 FUN_140e15820 body=136 status=ok
// SIG undefined FUN_140e15820(void)

longlong FUN_140e15820(longlong param_1,ulonglong param_2)

{
  TArray<FHeightFieldPrimitiveRemoveInfo,TSizedDefaultAllocator<32>_>::
  ~TArray<FHeightFieldPrimitiveRemoveInfo,TSizedDefaultAllocator<32>_>(param_1 + 0x5f0);
  if (*(longlong *)(param_1 + 0x5e0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x5b8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x590) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4f8) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x6a0);
  }
  return param_1;
}



// FUNCTION 140e158b0 FUN_140e158b0 body=73 status=ok
// SIG undefined FUN_140e158b0(void)

longlong FUN_140e158b0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x4f8) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x580);
  }
  return param_1;
}



// FUNCTION 140e15900 FUN_140e15900 body=52 status=ok
// SIG undefined FUN_140e15900(void)

undefined8 FUN_140e15900(undefined8 param_1,ulonglong param_2)

{
  FUN_140e14820();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x110);
  }
  return param_1;
}



// FUNCTION 140e15940 FUN_140e15940 body=52 status=ok
// SIG undefined FUN_140e15940(void)

undefined8 FUN_140e15940(undefined8 param_1,ulonglong param_2)

{
  FUN_140e14aa0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 140e15980 FUN_140e15980 body=114 status=ok
// SIG undefined FUN_140e15980(void)

longlong FUN_140e15980(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 1000) != 0) {
    FMemory::Free();
  }
  FUN_1406d8b70(param_1 + 0x2a8);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x288);
  if (*(longlong *)(param_1 + 0x278) != 0) {
    FMemory::Free();
  }
  FUN_140e14d10(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x410);
  }
  return param_1;
}



// FUNCTION 140e15a00 FUN_140e15a00 body=138 status=ok
// SIG undefined FUN_140e15a00(void)

longlong FUN_140e15a00(longlong param_1,ulonglong param_2)

{
  FUN_140e14090(param_1 + 0x2a8);
  TArray<FNYLoadingScreenImageInfo,FDefaultAllocator>::
  ~TArray<FNYLoadingScreenImageInfo,FDefaultAllocator>(param_1 + 0x298);
  if (*(longlong *)(param_1 + 0x228) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 400);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x178);
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x300);
  }
  return param_1;
}



// FUNCTION 140e15a90 FUN_140e15a90 body=114 status=ok
// SIG undefined FUN_140e15a90(void)

longlong FUN_140e15a90(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    FMemory::Free();
  }
  FUN_140b4e2b0(param_1 + 0x188);
  FUN_1408708d0(param_1 + 0x178);
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1c0);
  }
  return param_1;
}



// FUNCTION 140e15b10 FUN_140e15b10 body=90 status=ok
// SIG undefined FUN_140e15b10(void)

longlong FUN_140e15b10(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x380) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x338) != 0) {
    FMemory::Free();
  }
  FUN_140aee6d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x3a0);
  }
  return param_1;
}



// FUNCTION 140e15b70 FUN_140e15b70 body=52 status=ok
// SIG undefined FUN_140e15b70(void)

undefined8 FUN_140e15b70(undefined8 param_1,ulonglong param_2)

{
  FUN_140e14c40();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x110);
  }
  return param_1;
}



// FUNCTION 140e15bb0 FUN_140e15bb0 body=232 status=ok
// SIG undefined FUN_140e15bb0(void)

longlong FUN_140e15bb0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x58);
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
  plVar4 = *(longlong **)(param_1 + 0x40);
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
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 140e15ca0 FUN_140e15ca0 body=198 status=ok
// SIG undefined FUN_140e15ca0(void)

longlong FUN_140e15ca0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x50);
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
  plVar4 = *(longlong **)(param_1 + 0x38);
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
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 140e15d70 FUN_140e15d70 body=198 status=ok
// SIG undefined FUN_140e15d70(void)

longlong FUN_140e15d70(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x68);
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
  plVar4 = *(longlong **)(param_1 + 0x50);
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
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 140e15e40 FUN_140e15e40 body=52 status=ok
// SIG undefined FUN_140e15e40(void)

undefined8 FUN_140e15e40(undefined8 param_1,ulonglong param_2)

{
  FUN_14083eff0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x480);
  }
  return param_1;
}



// FUNCTION 140e15e80 FUN_140e15e80 body=52 status=ok
// SIG undefined FUN_140e15e80(void)

undefined8 FUN_140e15e80(undefined8 param_1,ulonglong param_2)

{
  FUN_14083eff0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x460);
  }
  return param_1;
}



// FUNCTION 140e15ec0 FUN_140e15ec0 body=107 status=ok
// SIG undefined FUN_140e15ec0(void)

longlong FUN_140e15ec0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x140) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x158);
  }
  return param_1;
}



// FUNCTION 140e15f30 FUN_140e15f30 body=219 status=ok
// SIG undefined FUN_140e15f30(void)

longlong FUN_140e15f30(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x2c8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2b8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2a8) != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x298);
  if (*(longlong *)(param_1 + 0x278) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x268) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 600) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x250) = 0;
  if (*(longlong *)(param_1 + 0x248) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x208);
  FUN_140e14b10(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2e0);
  }
  return param_1;
}



// FUNCTION 140e16010 FUN_140e16010 body=114 status=ok
// SIG undefined FUN_140e16010(void)

longlong FUN_140e16010(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x228) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 400);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x178);
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,600);
  }
  return param_1;
}



// FUNCTION 140e16090 FUN_140e16090 body=161 status=ok
// SIG undefined FUN_140e16090(void)

void FUN_140e16090(longlong param_1,longlong param_2,undefined1 param_3,undefined1 param_4)

{
  bool bVar1;
  longlong lVar2;
  
  *(undefined1 *)(param_1 + 0x62c) = param_3;
  *(undefined1 *)(param_1 + 0x638) = param_4;
  if (param_2 == 0) {
    param_2 = *(longlong *)(param_1 + 0x118);
    if (param_2 != 0) {
      lVar2 = FUN_1429d7ab0();
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar2 + 0x90) * 8) != lVar2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) goto LAB_140e160f7;
    }
    param_2 = 0;
  }
LAB_140e160f7:
  if ((*(longlong *)(param_1 + 0x7f8) == DAT_146b47938) ||
     (*(longlong *)(param_1 + 0x7f8) == DAT_146b479b0)) {
    *(longlong *)(param_1 + 0x150) = param_2;
    FUN_143071b60(param_1);
  }
  FUN_140e2c610(param_1);
  return;
}



// FUNCTION 140e16140 FUN_140e16140 body=68 status=ok
// SIG undefined FUN_140e16140(void)

void FUN_140e16140(longlong param_1,longlong param_2)

{
  FUN_140c32990();
  if ((param_2 != 0) && (*(char *)(param_1 + -0xc60) == '\x03')) {
    if (*(longlong *)(param_1 + 0x1d58) != 0) {
      FUN_1409a6d70();
    }
    FUN_142c9eb00();
  }
  return;
}



// FUNCTION 140e16190 FUN_140e16190 body=505 status=ok
// SIG undefined FUN_140e16190(void)

void FUN_140e16190(longlong param_1,longlong param_2,undefined1 param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  bool bVar11;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50;
  
  plVar1 = (longlong *)(param_1 + 0x2c40);
  lVar8 = (longlong)*(int *)(param_1 + 0x2c48);
  iVar10 = 0;
  if (*(int *)(param_1 + 0x2c48) != 0) {
    puVar2 = (undefined4 *)*plVar1;
    iVar10 = 0;
    local_58 = *puVar2;
    local_54 = puVar2[1];
    local_50 = *(undefined1 *)(puVar2 + 2);
    cVar4 = FWeakObjectPtr::IsValid(&local_58);
    bVar11 = cVar4 != '\0';
    lVar5 = 0;
    iVar6 = 0;
    do {
      iVar7 = iVar6 + 1;
      lVar5 = lVar5 + 1;
      if (lVar5 < lVar8) {
        lVar9 = lVar5 * 0xc;
        do {
          lVar3 = *plVar1;
          local_58 = *(undefined4 *)(lVar3 + lVar9);
          local_54 = *(undefined4 *)(lVar3 + 4 + lVar9);
          local_50 = *(undefined1 *)(lVar3 + 8 + lVar9);
          cVar4 = FWeakObjectPtr::IsValid(&local_58);
          if (bVar11 != (cVar4 != '\0')) break;
          iVar7 = iVar7 + 1;
          lVar5 = lVar5 + 1;
          lVar9 = lVar9 + 0xc;
        } while (lVar5 < lVar8);
      }
      if (bVar11 != false) {
        if (iVar10 != iVar6) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar1 + (longlong)iVar10 * 0xc),
                     (void *)(*plVar1 + (longlong)iVar6 * 0xc),(longlong)(iVar7 - iVar6) * 0xc);
        }
        iVar10 = iVar10 + (iVar7 - iVar6);
      }
      bVar11 = (bool)(bVar11 ^ 1);
      iVar6 = iVar7;
    } while (lVar5 < lVar8);
    *(int *)(param_1 + 0x2c48) = iVar10;
  }
  if (param_2 != 0) {
    lVar5 = *plVar1;
    lVar8 = lVar5 + (longlong)iVar10 * 0xc;
    for (; lVar5 != lVar8; lVar5 = lVar5 + 0xc) {
      lVar9 = FWeakObjectPtr::Get(lVar5);
      if (lVar9 == param_2) goto LAB_140e1632d;
    }
    lVar5 = 0;
LAB_140e1632d:
    if (lVar5 == 0) {
      iVar10 = *(int *)(param_1 + 0x2c48);
      *(int *)(param_1 + 0x2c48) = iVar10 + 1;
      if (*(int *)(param_1 + 0x2c4c) < iVar10 + 1) {
        TArray<FRotator,FDefaultAllocator>::ResizeGrow(plVar1,iVar10);
      }
      lVar8 = *plVar1 + (longlong)iVar10 * 0xc;
      FWeakObjectPtr::operator=(lVar8,param_2);
      *(undefined1 *)(lVar8 + 8) = param_3;
      FUN_140e32c40(param_1,*plVar1 + (longlong)iVar10 * 0xc);
    }
  }
  return;
}



// FUNCTION 140e16390 FUN_140e16390 body=150 status=ok
// SIG undefined FUN_140e16390(void)

void FUN_140e16390(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  iVar2 = FUN_14233f450();
  if (iVar2 == 3) {
    lVar3 = *(longlong *)(param_1 + 0x120);
    if ((lVar3 == 0) && (lVar3 = FUN_1423407b0(param_1), lVar3 == 0)) {
      return;
    }
    lVar3 = UWorld::GetGameState<APVPGameState>(lVar3);
    if ((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 0x5a0), lVar3 != 0)) {
      lVar4 = FUN_141484230();
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
        TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
        AddUniqueImpl<UGeometryCacheComponent_*_const_&>(lVar3 + 0x568,local_res10);
      }
    }
  }
  return;
}



// FUNCTION 140e16430 FUN_140e16430 body=12 status=ok
// SIG undefined FUN_140e16430(void)

void FUN_140e16430(longlong param_1)

{
  FUN_140e42980(param_1 + 0x2950);
  return;
}



// FUNCTION 140e16440 FUN_140e16440 body=113 status=ok
// SIG undefined FUN_140e16440(void)

int FUN_140e16440(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x108);
  *(int *)(param_1 + 0x108) = iVar1 + param_2;
  if (*(int *)(param_1 + 0x10c) < iVar1 + param_2) {
    TArray<FBlendedCurve,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x100);
  if (*(longlong *)(param_1 + 0x100) == 0) {
    lVar2 = param_1;
  }
  _guard_xfg_dispatch_icall_nop((void *)(lVar2 + (longlong)iVar1 * 0x20),0,(longlong)param_2 << 5);
  return iVar1;
}



// FUNCTION 140e164c0 FUN_140e164c0 body=1385 status=ok
// SIG undefined FUN_140e164c0(void)

void FUN_140e164c0(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                  undefined8 param_5,uint param_6)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  void *_Src;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 *puVar13;
  undefined1 local_c8 [8];
  void *local_c0;
  int local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined1 local_98 [32];
  longlong local_78;
  longlong local_68;
  longlong local_58;
  longlong local_48;
  
  FUN_140c336d0();
  if (param_4 == (longlong *)0x0) {
    return;
  }
  if ((char)param_1[0x25] != '\x03') {
    if (param_1[0x58e] == 0) {
      return;
    }
    FUN_140e75e20(param_1[0x58e] + 0x1b10,param_4);
    return;
  }
  local_a8 = FUN_14142bde0();
  lVar6 = (**(code **)(*param_4 + 0x628))(param_4);
  if (lVar6 == 0) {
    return;
  }
  _guard_xfg_dispatch_icall_nop(local_98,0,0x68);
  FUN_142ff3000(lVar6,local_98);
  FUN_142d979c0(local_c8);
  cVar5 = FUN_142ff5940(local_98,local_c8,0);
  if (cVar5 == '\0') goto LAB_140e16998;
  plVar1 = param_1 + 0x59b;
  lVar4 = param_1[0x59c];
  lVar11 = *plVar1;
  for (lVar12 = lVar11; lVar12 != (longlong)(int)lVar4 * 0x20 + lVar11; lVar12 = lVar12 + 0x20) {
    cVar5 = FUN_142fe0530(lVar12,local_c8);
    if (cVar5 != '\0') {
      if ((int)(lVar12 - lVar11 >> 5) != -1) goto LAB_140e16998;
      break;
    }
  }
  if ((int)param_1[0x59c] < 200) {
    iVar2 = (int)param_1[0x59c];
    *(int *)(param_1 + 0x59c) = iVar2 + 1;
    if (*(int *)((longlong)param_1 + 0x2ce4) < iVar2 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(plVar1,iVar2);
    }
    _Src = local_c0;
    puVar13 = (undefined1 *)((longlong)iVar2 * 0x20 + *plVar1);
    *puVar13 = local_c8[0];
    *(undefined8 *)(puVar13 + 8) = 0;
    *(int *)(puVar13 + 0x10) = local_b8;
    if (local_b8 == 0) {
      *(undefined4 *)(puVar13 + 0x14) = 0;
      *(undefined4 *)(puVar13 + 0x18) = local_b0;
    }
    else {
      TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(puVar13 + 8,local_b8,0);
      _guard_xfg_dispatch_icall_nop(*(void **)(puVar13 + 8),_Src,(longlong)local_b8);
      *(undefined4 *)(puVar13 + 0x18) = local_b0;
    }
  }
  else {
    puVar13 = (undefined1 *)((ulonglong)*(byte *)(param_1 + 0x59d) * 0x20 + *plVar1);
    *puVar13 = local_c8[0];
    TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=(puVar13 + 8,&local_c0);
    *(undefined4 *)(puVar13 + 0x18) = local_b0;
    *(char *)(param_1 + 0x59d) =
         (char)(*(byte *)(param_1 + 0x59d) + 1) +
         (char)((*(byte *)(param_1 + 0x59d) + 1) / 200) * '8';
  }
  lVar11 = 0;
  if (((param_6 >> 2 & 1) != 0) || (lVar12 = param_1[0x58e], lVar12 == 0)) goto LAB_140e16998;
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar4 = *(longlong *)(DAT_146b33f38 + 0x58);
  if (lVar4 == 0) goto LAB_140e16998;
  uVar7 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar8 = UWorld::GetAuthGameMode<ABaseGameMode>(uVar7);
  if ((lVar8 == 0) || (lVar8 = FUN_142d84360(lVar8), lVar8 == 0)) goto LAB_140e16998;
  lVar9 = FUN_1430b3b80();
  if ((*(int *)(param_4[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
     (*(longlong *)(*(longlong *)(param_4[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
      lVar9 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    lVar9 = lVar4 + 0xc68;
    lVar10 = FWeakObjectPtr::Get(lVar9);
    if (lVar10 == 0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 != *(int *)(lVar4 + 0xc70)) && (*(longlong *)(lVar4 + 0xc78) != 0)) {
        lVar10 = FUN_141796df0();
        FWeakObjectPtr::operator=(lVar9,lVar10);
        if ((lVar10 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(lVar4 + 0xc70) = DAT_1464b56f4;
        }
        lVar10 = FWeakObjectPtr::Get(lVar9);
        if (lVar10 != 0) goto LAB_140e16809;
      }
    }
    else {
LAB_140e16809:
      lVar9 = FUN_142e1f230();
      if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        FUN_142dd18b0(lVar8,lVar12,lVar10,1);
      }
    }
    if (*(longlong *)(lVar6 + 0x210) != 0) {
      lVar11 = *(longlong *)(*(longlong *)(lVar6 + 0x210) + 0xb8);
    }
    if ((lVar11 != 0) && (lVar11 = FUN_142ffcc20(), lVar11 != 0)) {
      FUN_142dd18b0(lVar8,lVar12,lVar11,1);
    }
  }
  cVar5 = FUN_140b31aa0(lVar6,1,1);
  if (cVar5 == '\0') goto LAB_140e16998;
  lVar6 = lVar4 + 0xe88;
  lVar11 = FWeakObjectPtr::Get(lVar6);
  if (lVar11 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == *(int *)(lVar4 + 0xe90)) || (*(longlong *)(lVar4 + 0xe98) == 0))
    goto LAB_140e16998;
    lVar11 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar6,lVar11);
    if ((lVar11 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar4 + 0xe90) = DAT_1464b56f4;
    }
    lVar11 = FWeakObjectPtr::Get(lVar6);
    if (lVar11 == 0) goto LAB_140e16998;
  }
  lVar6 = FUN_142e1f230();
  if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
      != lVar6 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    FUN_142dd18b0(lVar8,lVar12,lVar11,1);
  }
LAB_140e16998:
  if (local_c0 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_48 != 0) {
    FMemory::Free();
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  if (local_68 != 0) {
    FMemory::Free();
  }
  if (local_78 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140e16a30 FUN_140e16a30 body=1215 status=ok
// SIG undefined FUN_140e16a30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e16a30(longlong param_1,longlong param_2,undefined4 param_3,int param_4,int param_5,
                  int param_6,longlong param_7,ulonglong *param_8,ulonglong *param_9,
                  ulonglong *param_10)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  undefined8 *puVar10;
  int iVar11;
  bool bVar12;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined1 local_b0;
  ulonglong local_a8;
  undefined1 local_a0;
  undefined4 local_98;
  undefined1 local_90;
  longlong *local_88;
  undefined8 local_80;
  ulonglong *local_78;
  undefined8 *local_70;
  undefined8 local_68;
  longlong local_60;
  ulonglong *local_58;
  ulonglong *local_50;
  undefined4 local_48;
  char local_44;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_58 = param_8;
  local_50 = param_10;
  local_78 = param_9;
  if (param_2 != 0) {
    local_60 = param_1;
    local_48 = param_3;
    if ((0 < param_4) && (lVar2 = FUN_140cffa10(param_2), lVar2 != 0)) {
      FUN_140e421f0(lVar2,param_4,0,0);
    }
    uVar4 = 0;
    if ((((0 < param_5) || (0 < param_6)) || (param_7 != 0)) &&
       (lVar2 = *(longlong *)(param_2 + 0x848), lVar2 != 0)) {
      lVar3 = FUN_1413f82e0();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar12 = false;
      }
      else {
        bVar12 = true;
      }
      if ((bVar12) &&
         (lVar2 = (**(code **)(*(longlong *)(lVar2 + 0xd80) + 0x18))(), param_9 = local_78,
         lVar2 != 0)) {
        if (DAT_146b33f38 == 0) {
          FUN_142d7ebe0();
        }
        lVar3 = *(longlong *)(DAT_146b33f38 + 0x58);
        if (lVar3 != 0) {
          if (0 < param_5) {
            FUN_142fe44f0(lVar2,*(undefined8 *)(lVar3 + 0x2c0),param_5);
          }
          if (0 < param_6) {
            FUN_142fe44f0(lVar2,*(undefined8 *)(lVar3 + 0x2c8),param_6);
          }
        }
        uVar1 = local_48;
        param_9 = local_78;
        if (param_7 != 0) {
          local_a0 = 0;
          local_a8 = 0;
          local_b0 = 0;
          local_b8 = 0;
          local_88 = (longlong *)0x0;
          local_80 = 0;
          FUN_143013fe0(&local_88,param_7,local_48,param_2);
          bVar12 = false;
          iVar9 = (int)local_80;
          if ((int)local_80 == 0) {
            FUN_142ff7db0(&local_48,param_7,param_2,uVar1);
            if (local_44 != '\0') {
              local_a0 = 0;
              local_a8 = 0;
              local_b0 = 0;
              local_b8 = 0;
              FUN_143013fe0(&local_88,param_7,local_48,param_2);
            }
            bVar12 = (int)local_80 == 0;
            iVar9 = (int)local_80;
          }
          if ((!bVar12 && -1 < iVar9) && (*local_88 != 0)) {
            if (iVar9 < 1) {
              iVar11 = 1 - iVar9;
              local_80 = CONCAT44(local_80._4_4_,iVar9 + iVar11);
              if (local_80._4_4_ < iVar9 + iVar11) {
                TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(&local_88);
              }
              plVar6 = local_88 + (longlong)iVar9 * 0xc;
              if (iVar11 != 0) {
                lVar3 = (longlong)plVar6 + 0x44;
                do {
                  *(undefined8 *)(lVar3 + -0x24) = 0;
                  *(undefined8 *)(lVar3 + -0x1c) = 0;
                  *(undefined1 *)(lVar3 + -0x14) = 0;
                  *(undefined8 *)(lVar3 + -0xc) = 0;
                  *(undefined8 *)(lVar3 + -4) = 0;
                  *(undefined8 *)(lVar3 + 4) = 0;
                  *(undefined8 *)(lVar3 + 0xc) = 0;
                  _guard_xfg_dispatch_icall_nop(plVar6,0,0x60);
                  plVar6 = plVar6 + 0xc;
                  *(undefined2 *)(lVar3 + 0x14) = 1;
                  lVar3 = lVar3 + 0x60;
                  iVar11 = iVar11 + -1;
                } while (iVar11 != 0);
              }
            }
            else if ((1 < iVar9) && (iVar11 = iVar9 + -1, iVar11 != 0)) {
              plVar6 = local_88 + 0x13;
              iVar5 = iVar11;
              do {
                if (plVar6[2] != 0) {
                  FMemory::Free();
                }
                if (*plVar6 != 0) {
                  FMemory::Free();
                }
                TArray<FNamedInterfaceDef,FDefaultAllocator>::
                ~TArray<FNamedInterfaceDef,FDefaultAllocator>(plVar6 + -3);
                plVar6 = plVar6 + 0xc;
                iVar5 = iVar5 + -1;
              } while (iVar5 != 0);
              iVar5 = ((int)local_80 - iVar11) + -1;
              if (iVar5 != 0) {
                _guard_xfg_dispatch_icall_nop
                          (local_88 + 0xc,local_88 + (longlong)iVar9 * 0xc,(longlong)iVar5 * 0x60);
              }
              local_80 = CONCAT44(local_80._4_4_,(int)local_80 - iVar11);
              TArray<FInspectStat,FDefaultAllocator>::ResizeShrink(&local_88);
            }
            local_70 = (undefined8 *)0x0;
            local_68 = 0;
            lVar3 = *(longlong *)(local_60 + 0x120);
            if (lVar3 == 0) {
              lVar3 = FUN_1423407b0();
            }
            FUN_143018ff0(&local_88,lVar3,&local_70,0);
            uVar8 = (ulonglong)((longlong)(local_70 + (int)local_68) + (7 - (longlong)local_70)) >>
                    3;
            if (local_70 + (int)local_68 < local_70) {
              uVar8 = uVar4;
            }
            uVar7 = uVar4;
            puVar10 = local_70;
            if (uVar8 != 0) {
              do {
                local_90 = 0;
                local_98 = 0;
                local_a0 = 1;
                local_a8 = local_a8 & 0xffffffffffffff00;
                local_b0 = 0;
                local_b8 = CONCAT44(local_b8._4_4_,1);
                FUN_142fe3d60(lVar2,&local_48,*(undefined8 *)(*local_88 + 0x1d8),*puVar10);
                uVar7 = uVar7 + 1;
                puVar10 = puVar10 + 1;
              } while (uVar7 != uVar8);
            }
            if (local_70 != (undefined8 *)0x0) {
              FMemory::Free(local_70);
            }
          }
          FUN_1409f5880(&local_88);
          param_9 = local_78;
        }
      }
    }
    plVar6 = (longlong *)*local_58;
    uVar8 = (longlong)(int)local_58[1] & 0x1fffffffffffffff;
    if (plVar6 + (int)local_58[1] < plVar6) {
      uVar8 = uVar4;
    }
    uVar7 = uVar4;
    if (uVar8 != 0) {
      do {
        if (*plVar6 != 0) {
          FUN_14145e850(param_2);
        }
        plVar6 = plVar6 + 1;
        uVar7 = uVar7 + 1;
      } while (uVar7 != uVar8);
    }
    plVar6 = (longlong *)*param_9;
    uVar8 = (longlong)(int)param_9[1] & 0x1fffffffffffffff;
    if (plVar6 + (int)param_9[1] < plVar6) {
      uVar8 = uVar4;
    }
    uVar7 = uVar4;
    if (uVar8 != 0) {
      do {
        if (*plVar6 != 0) {
          FUN_14145e8d0(param_2);
        }
        plVar6 = plVar6 + 1;
        uVar7 = uVar7 + 1;
      } while (uVar7 != uVar8);
    }
    plVar6 = (longlong *)*local_50;
    uVar8 = (longlong)(int)local_50[1] & 0x1fffffffffffffff;
    if (plVar6 + (int)local_50[1] < plVar6) {
      uVar8 = uVar4;
    }
    if (uVar8 != 0) {
      do {
        if (*plVar6 != 0) {
          FUN_14145e8d0(param_2);
        }
        plVar6 = plVar6 + 1;
        uVar4 = uVar4 + 1;
      } while (uVar4 != uVar8);
    }
  }
  return;
}



// FUNCTION 140e16ef0 FUN_140e16ef0 body=305 status=ok
// SIG undefined FUN_140e16ef0(void)

void FUN_140e16ef0(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  float fVar8;
  undefined1 local_res8 [8];
  undefined1 local_38 [48];
  
  if (*(longlong *)(param_1 + 0x918) != 0) {
    lVar6 = *(longlong *)(param_1 + 0x918) + 0x280;
    if (*(int *)(param_1 + 0x2d00) < 1) {
      FUN_14248ba60(lVar6,param_1 + 0x2d08);
      if ((*(longlong *)(param_1 + 0x1d18) != 0) &&
         (lVar6 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x1d18) + 0x8e0) + 0x10))(),
         lVar6 != 0)) {
        FUN_14248ba60(lVar6 + 0x280,param_1 + 0x2d1c);
        return;
      }
    }
    else {
      fVar8 = (float)*(int *)(param_1 + 0x2d00) * *(float *)(param_1 + 0x2cec);
      puVar5 = (undefined4 *)FUN_14248a390(lVar6,local_38,param_1 + 0x2d08,2,fVar8,local_res8);
      uVar1 = puVar5[1];
      uVar2 = puVar5[2];
      uVar3 = puVar5[3];
      *(undefined4 *)(param_1 + 0x2d08) = *puVar5;
      *(undefined4 *)(param_1 + 0x2d0c) = uVar1;
      *(undefined4 *)(param_1 + 0x2d10) = uVar2;
      *(undefined4 *)(param_1 + 0x2d14) = uVar3;
      *(undefined4 *)(param_1 + 0x2d18) = puVar5[4];
      if ((*(longlong *)(param_1 + 0x1d18) != 0) &&
         (lVar6 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x1d18) + 0x8e0) + 0x10))(),
         lVar6 != 0)) {
        puVar7 = (undefined8 *)
                 FUN_14248a390(lVar6 + 0x280,local_38,param_1 + 0x2d1c,2,fVar8,local_res8);
        uVar4 = puVar7[1];
        *(undefined8 *)(param_1 + 0x2d1c) = *puVar7;
        *(undefined8 *)(param_1 + 0x2d24) = uVar4;
        *(undefined4 *)(param_1 + 0x2d2c) = *(undefined4 *)(puVar7 + 2);
      }
    }
  }
  return;
}



// FUNCTION 140e17030 FUN_140e17030 body=1370 status=ok
// SIG undefined FUN_140e17030(void)

void FUN_140e17030(longlong param_1,longlong *param_2)

{
  void *_Src;
  undefined8 uVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  byte *pbVar14;
  longlong *plVar15;
  int iVar16;
  int *piVar17;
  longlong lVar18;
  byte bVar19;
  undefined8 uVar20;
  undefined1 local_res8 [8];
  longlong *local_res10;
  int local_68;
  longlong local_58;
  void *local_48;
  ulonglong local_40;
  
  local_res10 = param_2;
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  local_58 = *(longlong *)(param_1 + 0x118);
  lVar18 = *(longlong *)(DAT_146b33f38 + 0x58);
  if (local_58 != 0) {
    lVar9 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(local_58 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(local_58 + 0x10) + 0x88) +
         (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_140e170c3;
  }
  local_58 = 0;
LAB_140e170c3:
  local_48 = (void *)0x0;
  local_40 = 0;
  if ((lVar18 != 0) && (&local_48 != (void **)(lVar18 + 0x1028))) {
    uVar6 = *(uint *)(lVar18 + 0x1030);
    _Src = *(void **)(lVar18 + 0x1028);
    local_40 = (ulonglong)uVar6;
    if (uVar6 != 0) {
      TArray<int,FDefaultAllocator>::ResizeForCopy(&local_48,uVar6,0);
      _guard_xfg_dispatch_icall_nop(local_48,_Src,(longlong)(int)uVar6 << 2);
    }
  }
  local_68 = 0;
  if ((int)param_2[1] < 1) {
LAB_140e174b4:
    lVar18 = *(longlong *)(param_1 + 0x1c8);
    lVar9 = (longlong)*(int *)(param_1 + 0x1d0) * 0x80 + lVar18;
    do {
      if (lVar18 == lVar9) {
        if (((local_58 != 0) && (*(int *)(local_58 + 0x1bd0) != 0)) &&
           (*(int *)(local_58 + 0x1c04) == 0)) {
          FUN_140e8d230(local_58 + 0x1b10);
        }
        if (local_48 != (void *)0x0) {
          FMemory::Free(local_48);
        }
        return;
      }
      plVar15 = (longlong *)FUN_140852e70(lVar18,&local_res10);
      if (*plVar15 != 0) {
        lVar12 = FUN_142dfdfe0();
        lVar10 = *plVar15;
        for (lVar11 = lVar10; lVar11 != 0; lVar11 = *(longlong *)(lVar11 + 0x30)) {
          if (lVar11 == lVar12) goto LAB_140e17520;
        }
      }
      lVar10 = 0;
LAB_140e17520:
      FUN_142de02d0(param_1,lVar10);
      lVar18 = lVar18 + 0x80;
    } while( true );
  }
LAB_140e17150:
  lVar9 = (longlong)local_68 * 0x60;
  lVar10 = FUN_1405ec200(*param_2 + lVar9 + 0x30);
  if (lVar10 != 0) {
    lVar11 = FUN_14171bfe0();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar12 = FUN_142dfdfe0();
      lVar11 = lVar10;
      do {
        if (lVar11 == lVar12) goto LAB_140e171c4;
        lVar11 = *(longlong *)(lVar11 + 0x30);
      } while (lVar11 != 0);
    }
  }
  lVar10 = 0;
LAB_140e171c4:
  lVar11 = *(longlong *)(param_1 + 0x120);
  if (lVar11 == 0) {
    lVar11 = FUN_1423407b0(param_1);
  }
  if (lVar10 != 0) {
    if (lVar18 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_140b81380(lVar18,lVar10);
    }
    lVar12 = FUN_142dcdc10(param_1,lVar10);
    if (lVar12 == 0) {
LAB_140e17241:
      lVar12 = 0;
    }
    else {
      lVar13 = FUN_1413f2350();
      if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar13 + 0x90) * 8) != lVar13 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140e17241;
    }
    bVar19 = 0;
    if (lVar12 != 0) {
      iVar7 = FUN_140c43380(lVar12);
      if (iVar7 != 0) {
        if (*(int *)(param_1 + 0x210) != *(int *)(param_1 + 0x23c)) {
          lVar13 = *(longlong *)(param_1 + 0x248);
          if (*(longlong *)(param_1 + 0x248) == 0) {
            lVar13 = param_1 + 0x240;
          }
          iVar8 = *(int *)(lVar13 + ((longlong)*(int *)(param_1 + 0x250) - 1U & (longlong)iVar7) * 4
                          );
          if (iVar8 != -1) {
            lVar13 = *(longlong *)(param_1 + 0x208);
            iVar16 = iVar8;
            do {
              if (*(int *)(lVar13 + (longlong)iVar16 * 0x10) == iVar7) {
                if (iVar16 != -1) {
                  if ((*(int *)(param_1 + 0x210) == *(int *)(param_1 + 0x23c)) || (iVar8 == -1))
                  goto LAB_140e172fe;
                  goto LAB_140e172e0;
                }
                break;
              }
              iVar16 = *(int *)(lVar13 + 8 + (longlong)iVar16 * 0x10);
            } while (iVar16 != -1);
          }
        }
      }
    }
    goto LAB_140e17304;
  }
  goto LAB_140e17480;
  while (iVar8 = piVar17[2], iVar8 != -1) {
LAB_140e172e0:
    piVar17 = (int *)((longlong)iVar8 * 0x10 + lVar13);
    if (*piVar17 == iVar7) {
      if (iVar8 != -1) goto LAB_140e17300;
      break;
    }
  }
LAB_140e172fe:
  piVar17 = (int *)0x0;
LAB_140e17300:
  bVar19 = *(byte *)(piVar17 + 1);
LAB_140e17304:
  if (((lVar11 == 0) || (uVar6 == 0)) || (bVar4 = FUN_140596bf0(lVar11), bVar4 <= bVar19)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  bVar3 = false;
  if (((local_58 != 0) && (lVar12 != 0)) &&
     ((cVar5 = FUN_140e855b0(local_58 + 0x1b10,lVar10), cVar5 != '\0' &&
      (*(int *)(local_58 + 0x1c04) != 0)))) {
    cVar5 = FUN_140e857c0(local_58 + 0x1b10,lVar10);
    bVar3 = false;
    if (cVar5 == '\0') {
      bVar3 = true;
    }
  }
  plVar15 = (longlong *)(param_1 + 0x1c8);
  lVar12 = *plVar15;
  lVar13 = (longlong)*(int *)(param_1 + 0x1d0) * 0x80 + lVar12;
  for (; lVar12 != lVar13; lVar12 = lVar12 + 0x80) {
    if (*(longlong *)(lVar12 + 8) == lVar10) {
      if (bVar2) {
        if (!bVar3) goto LAB_140e1740b;
      }
      else if (!bVar3) {
        FUN_140e17a80(param_1,lVar12,lVar9 + *local_res10);
        *(int *)(lVar12 + 0x60) = local_68;
        goto LAB_140e17480;
      }
      FUN_142ddfad0(param_1,lVar10);
      if (bVar3) goto LAB_140e17480;
      goto LAB_140e1740b;
    }
  }
  if (!bVar3) {
    if (((lVar11 == 0) || (uVar6 == 0)) ||
       (pbVar14 = (byte *)FUN_140cb6000(local_res8,lVar11), uVar6 == *pbVar14)) {
      uVar20 = 0;
    }
    else {
      uVar20 = 1;
    }
    iVar7 = *(int *)(param_1 + 0x1d0);
    uVar1 = *(undefined8 *)(param_1 + 0x118);
    *(int *)(param_1 + 0x1d0) = iVar7 + 1;
    if (*(int *)(param_1 + 0x1d4) < iVar7 + 1) {
      TArray<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,FDefaultAllocator>::ResizeGrow
                (plVar15,iVar7);
    }
    lVar12 = (longlong)iVar7 * 0x80 + *plVar15;
    FUN_142dc1570(lVar12,uVar1,lVar10,uVar20);
    if (bVar2) {
LAB_140e1740b:
      *(int *)(lVar12 + 0x60) = local_68;
    }
    else {
      FUN_140e17a80(param_1,lVar12,lVar9 + *local_res10);
      *(int *)(lVar12 + 0x60) = local_68;
    }
  }
LAB_140e17480:
  local_68 = local_68 + 1;
  param_2 = local_res10;
  if ((int)local_res10[1] <= local_68) goto LAB_140e174b4;
  goto LAB_140e17150;
}



// FUNCTION 140e17590 FUN_140e17590 body=639 status=ok
// SIG undefined FUN_140e17590(void)

undefined8 FUN_140e17590(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 local_38;
  undefined1 local_30;
  
  uVar4 = 0;
  if ((param_2 == (longlong *)0x0) || (iVar2 = FUN_142235230(param_2), iVar2 == 3)) {
    return 0;
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    lVar3 = FUN_1430f1090();
    lVar6 = *(longlong *)(param_1 + 0x78);
    for (lVar7 = lVar6; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x30)) {
      if (lVar7 == lVar3) {
        if ((lVar6 != 0) && (lVar6 != 0)) {
          lVar7 = FUN_1430f1090();
          lVar6 = *(longlong *)(param_1 + 0x78);
          goto joined_r0x000140e1760c;
        }
        break;
      }
    }
  }
LAB_140e17660:
  uVar10 = 0;
  if (0 < *(int *)(param_1 + 0x88)) {
    uVar5 = FUN_142e43690();
    lVar6 = (**(code **)(*param_2 + 0x628))(param_2,uVar5);
    if ((lVar6 != 0) && (lVar6 = (**(code **)(*param_2 + 0x670))(param_2), lVar6 != 0)) {
      lVar7 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        plVar8 = *(longlong **)(param_1 + 0x80);
        uVar11 = (longlong)*(int *)(param_1 + 0x88) & 0x1fffffffffffffff;
        if (plVar8 + *(int *)(param_1 + 0x88) < plVar8) {
          uVar11 = uVar10;
        }
        uVar9 = uVar10;
        if (uVar11 != 0) {
          do {
            if (*(longlong *)(*plVar8 + 0x130) == *(longlong *)(lVar6 + 0xa58)) {
              FUN_14145e850(lVar6);
              uVar4 = 1;
            }
            plVar8 = plVar8 + 1;
            uVar9 = uVar9 + 1;
          } while (uVar9 != uVar11);
        }
      }
    }
  }
  if ((0 < *(int *)(param_1 + 0x98)) &&
     (lVar6 = (**(code **)(*param_2 + 0x670))(param_2), lVar6 != 0)) {
    lVar7 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      plVar8 = *(longlong **)(param_1 + 0x90);
      uVar11 = (longlong)*(int *)(param_1 + 0x98) & 0x1fffffffffffffff;
      if (plVar8 + *(int *)(param_1 + 0x98) < plVar8) {
        uVar11 = uVar10;
      }
      if (uVar11 != 0) {
        do {
          if (*plVar8 != 0) {
            FUN_14145e8d0(lVar6);
            uVar4 = 1;
          }
          plVar8 = plVar8 + 1;
          uVar10 = uVar10 + 1;
        } while (uVar10 != uVar11);
      }
    }
  }
  return uVar4;
joined_r0x000140e1760c:
  if (lVar6 == 0) goto LAB_140e17660;
  if (lVar6 == lVar7) {
    if (*(longlong *)(param_1 + 0x78) != 0) {
      uVar5 = UTDMCommanderArtilleryWidget::GetPrivateStaticClass();
      lVar6 = (**(code **)(*param_2 + 0x628))(param_2,uVar5);
      if (lVar6 != 0) {
        local_38 = *(undefined8 *)(param_1 + 0x78);
        local_30 = 1;
        uVar4 = FUN_1430ea410(lVar6,&local_38);
        *param_3 = uVar4;
        uVar4 = 1;
      }
    }
    goto LAB_140e17660;
  }
  lVar6 = *(longlong *)(lVar6 + 0x30);
  goto joined_r0x000140e1760c;
}



// FUNCTION 140e17820 FUN_140e17820 body=606 status=ok
// SIG undefined FUN_140e17820(void)

void FUN_140e17820(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  void *_Src;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *_Src_00;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *local_50;
  int local_48;
  
  puVar4 = (undefined8 *)*param_2;
  lVar6 = param_2[1];
  if (puVar4 == puVar4 + (longlong)(int)lVar6 * 4) {
LAB_140e17a6e:
    FUN_140e1f6b0(param_1);
    return;
  }
  puVar12 = puVar4 + 1;
LAB_140e17881:
  local_48 = *(int *)(puVar12 + 1);
  lVar10 = (longlong)local_48;
  _Src_00 = (longlong *)0x0;
  lVar5 = puVar12[-1];
  _Src = (void *)*puVar12;
  local_50 = (longlong *)0x0;
  if (local_48 != 0) {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_50,local_48,0);
    _Src_00 = local_50;
    _guard_xfg_dispatch_icall_nop(local_50,_Src,lVar10 << 4);
  }
  iVar7 = local_48;
  uVar2 = *(undefined4 *)(puVar12 + 2);
  if (lVar5 != 0) {
    if (*(longlong *)(param_1 + 0x118) != 0) {
      FUN_14145f370();
    }
    plVar14 = (longlong *)(param_1 + 0x178);
    plVar13 = (longlong *)*plVar14;
    iVar3 = *(int *)(param_1 + 0x180);
    plVar9 = plVar13 + (longlong)iVar3 * 4;
    plVar11 = plVar13;
    plVar8 = plVar13;
    if (plVar13 != plVar9) {
LAB_140e17917:
      if (*plVar11 != lVar5) goto code_r0x000140e1791c;
      for (plVar13 = _Src_00; plVar13 != _Src_00 + (longlong)iVar7 * 2; plVar13 = plVar13 + 2) {
        plVar8 = (longlong *)plVar11[1];
        plVar9 = plVar8 + (longlong)(int)plVar11[2] * 2;
        if (plVar8 != plVar9) {
          do {
            if (*plVar8 == *plVar13) {
              *(int *)(plVar8 + 1) = (int)plVar13[1];
              goto LAB_140e17991;
            }
            plVar8 = plVar8 + 2;
          } while (plVar8 != plVar9);
        }
        FUN_140e0f1b0(plVar11 + 1,plVar13);
LAB_140e17991:
      }
      *(undefined4 *)(plVar11 + 3) = uVar2;
      goto LAB_140e17a2f;
    }
joined_r0x000140e1792b:
    do {
      if (plVar8 == plVar9) goto LAB_140e179ba;
      if (*plVar8 == lVar5) {
        if ((int)((longlong)plVar8 - (longlong)plVar13 >> 5) != -1) break;
        goto LAB_140e179ba;
      }
      plVar8 = plVar8 + 4;
    } while( true );
  }
  goto LAB_140e17a2f;
code_r0x000140e1791c:
  plVar11 = plVar11 + 4;
  if (plVar11 == plVar9) goto joined_r0x000140e1792b;
  goto LAB_140e17917;
LAB_140e179ba:
  *(int *)(param_1 + 0x180) = iVar3 + 1;
  if (*(int *)(param_1 + 0x184) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(plVar14,iVar3);
  }
  plVar13 = (longlong *)((longlong)iVar3 * 0x20 + *plVar14);
  *plVar13 = lVar5;
  plVar13[1] = 0;
  *(int *)(plVar13 + 2) = iVar7;
  if (iVar7 == 0) {
    *(undefined4 *)((longlong)plVar13 + 0x14) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(plVar13 + 1,iVar7,0);
    _guard_xfg_dispatch_icall_nop((void *)plVar13[1],_Src_00,(longlong)iVar7 << 4);
  }
  *(undefined4 *)(plVar13 + 3) = uVar2;
LAB_140e17a2f:
  if (_Src_00 != (longlong *)0x0) {
    FMemory::Free(_Src_00);
  }
  puVar1 = puVar12 + 3;
  puVar12 = puVar12 + 4;
  if (puVar1 == puVar4 + (longlong)(int)lVar6 * 4) goto LAB_140e17a6e;
  goto LAB_140e17881;
}



// FUNCTION 140e17a80 FUN_140e17a80 body=925 status=ok
// SIG undefined FUN_140e17a80(void)

void FUN_140e17a80(longlong *param_1,longlong *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  undefined1 uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined4 *puVar11;
  bool bVar12;
  longlong local_c8;
  undefined8 local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined4 local_98;
  undefined4 local_94;
  longlong local_88 [4];
  longlong local_68;
  
  lVar6 = FUN_140e20f30(param_3);
  param_2[1] = lVar6;
  FSoftObjectPath::ToString(param_3 + 0x10,&local_c8);
  local_a0 = local_c8;
  local_98 = (undefined4)local_c0;
  local_94 = local_c0._4_4_;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_c8 = 0;
  FUN_1417978e0(&local_b8,&local_a0);
  if (local_c8 != 0) {
    FMemory::Free();
  }
  local_a0 = local_b8;
  *(undefined4 *)(param_2 + 2) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x14) = 0;
  FString::FString(&local_98,&local_b0);
  FSoftObjectPath::operator=(param_2 + 4,&local_a0);
  *(undefined4 *)(param_2 + 3) = 0;
  if (local_b0 != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_2 + 7) = *param_3;
  *(undefined1 *)((longlong)param_2 + 0x51) = *(undefined1 *)((longlong)param_3 + 5);
  *(undefined4 *)((longlong)param_2 + 0x3c) = param_3[2];
  *(undefined4 *)((longlong)param_2 + 0x54) = param_3[3];
  param_2[0xd] = 0;
  *(undefined4 *)((longlong)param_2 + 0x74) = 0;
  *(undefined1 *)(param_2 + 0xf) = 0;
  if (((*param_2 != 0) && (param_2[1] != 0)) && (cVar4 = FUN_142dd3600(param_2), cVar4 != '\0')) {
    FUN_142dc85d0(param_2,*param_2,param_2[1],0);
  }
  if (((char)param_2[10] == '\0') && (*(char *)(param_3 + 1) == '\0')) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  *(undefined1 *)(param_2 + 10) = uVar5;
  puVar11 = *(undefined4 **)(param_3 + 4);
  puVar7 = puVar11 + (longlong)(int)param_3[6] * 0xc;
  if (puVar11 != puVar7) {
    plVar1 = param_2 + 8;
    do {
      lVar6 = FUN_1405ec200(puVar11 + 2);
      if (lVar6 == 0) {
LAB_140e17c34:
        lVar6 = 0;
      }
      else {
        lVar8 = FUN_142e1f230();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
          bVar12 = false;
        }
        else {
          bVar12 = true;
        }
        if (!bVar12) goto LAB_140e17c34;
      }
      plVar2 = (longlong *)*plVar1;
      lVar8 = param_2[9];
      for (plVar10 = plVar2; plVar10 != plVar2 + (longlong)(int)lVar8 * 7; plVar10 = plVar10 + 7) {
        FUN_142dc1770(local_88,lVar6,0);
        bVar12 = *plVar10 == local_88[0];
        if (local_68 != 0) {
          FMemory::Free();
        }
        if (bVar12) {
          iVar3 = (int)(((longlong)plVar10 - (longlong)plVar2) / 0x38);
          if (iVar3 != -1) {
            *(undefined4 *)((longlong)iVar3 * 0x38 + 0x30 + *plVar1) = *puVar11;
            goto LAB_140e17d49;
          }
          break;
        }
      }
      lVar6 = FUN_1405ec200(puVar11 + 2);
      if (lVar6 == 0) {
LAB_140e17d18:
        lVar6 = 0;
      }
      else {
        lVar8 = FUN_142e1f230();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
          bVar12 = false;
        }
        else {
          bVar12 = true;
        }
        if (!bVar12) goto LAB_140e17d18;
      }
      iVar3 = (int)param_2[9];
      *(int *)(param_2 + 9) = iVar3 + 1;
      if (*(int *)((longlong)param_2 + 0x4c) < iVar3 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
        ResizeGrow(plVar1,iVar3);
      }
      FUN_142dc1770((longlong)iVar3 * 0x38 + *plVar1,lVar6,*puVar11);
LAB_140e17d49:
      puVar11 = puVar11 + 0xc;
    } while (puVar11 != puVar7);
  }
  lVar6 = param_2[0xb];
  if (lVar6 == 0) {
    lVar6 = (**(code **)(*param_1 + 0x438))(param_1,param_2[1]);
    param_2[0xb] = lVar6;
    if (lVar6 == 0) goto LAB_140e17de7;
  }
  lVar8 = FUN_1413f1920();
  if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
      lVar8 + 0x88)) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  if (bVar12) {
    TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=(lVar6 + 0x28,param_3 + 8);
  }
LAB_140e17de7:
  if (*(char *)((longlong)param_2 + 0x51) != '\0') {
    uVar9 = FUN_142dcdb70(param_2);
    FUN_142dc6fc0(param_1,uVar9);
  }
  return;
}



// FUNCTION 140e17e20 FUN_140e17e20 body=961 status=ok
// SIG undefined FUN_140e17e20(void)

void FUN_140e17e20(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_30;
  
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar4 + 0x38) < DAT_1468703a8) &&
     (_Init_thread_header(&DAT_1468703a8), DAT_1468703a8 == -1)) {
    FName::FName(&DAT_1468703a0,L"SancMissionIsInZeroG",1);
    _Init_thread_footer(&DAT_1468703a8);
  }
  if ((*(int *)(lVar4 + 0x38) < DAT_1468703b8) &&
     (_Init_thread_header(&DAT_1468703b8), DAT_1468703b8 == -1)) {
    FName::FName(&DAT_1468703b0,L"IsInZeroG",1);
    _Init_thread_footer(&DAT_1468703b8);
  }
  plVar2 = (longlong *)(param_1 + 0x1a0);
  if (*(char *)(param_1 + 0x2318) == '\0') {
    lVar4 = (longlong)*(int *)(param_1 + 0x1a8);
    if (*(int *)(param_1 + 0x1a8) != 0) {
      iVar9 = 0;
      bVar10 = *(longlong *)*plVar2 != DAT_1468703b0;
      lVar6 = 0;
      lVar1 = DAT_1468703b0;
      iVar7 = 0;
      do {
        lVar6 = lVar6 + 1;
        iVar8 = iVar7 + 1;
        if (lVar6 < lVar4) {
          plVar5 = (longlong *)(*plVar2 + lVar6 * 8);
          do {
            if (bVar10 != (*plVar5 != lVar1)) break;
            iVar8 = iVar8 + 1;
            lVar6 = lVar6 + 1;
            plVar5 = plVar5 + 1;
          } while (lVar6 < lVar4);
        }
        if (bVar10 != false) {
          if (iVar9 != iVar7) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*plVar2 + (longlong)iVar9 * 8),
                       (void *)(*plVar2 + (longlong)iVar7 * 8),(longlong)(iVar8 - iVar7) << 3);
            lVar1 = DAT_1468703b0;
          }
          iVar9 = iVar9 + (iVar8 - iVar7);
        }
        bVar10 = (bool)(bVar10 ^ 1);
        iVar7 = iVar8;
      } while (lVar6 < lVar4);
      *(int *)(param_1 + 0x1a8) = iVar9;
    }
    plVar2 = *(longlong **)(param_1 + 0xe68);
    if (plVar2 != (longlong *)0x0) {
      if (*(char *)(param_1 + 0x128) == '\x03') {
        plVar5 = *(longlong **)(param_1 + 0x10);
        lVar4 = plVar5[0x1f];
        if (lVar4 == 0) {
          (**(code **)(*plVar5 + 0x368))(plVar5);
          plVar2 = *(longlong **)(param_1 + 0xe68);
          lVar4 = plVar5[0x1f];
        }
        if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x4c8) != 0)) {
          (**(code **)(*plVar2 + 0x260))();
          FUN_14246fd40(*(longlong *)(param_1 + 0xe68) + 0x274,*(longlong *)(lVar4 + 0x4c8) + 0x274)
          ;
          plVar2 = *(longlong **)(param_1 + 0xe68);
        }
      }
      *(undefined4 *)(plVar2 + 0x46) = 0x3f800000;
    }
    FUN_140b8c280(param_1,DAT_1468703a0);
    FUN_142d8f6b0(param_1,DAT_1468703a0);
    FUN_140b8c2e0(param_1,DAT_1468703a0);
    FUN_140b8c450(param_1,DAT_1468703a0);
    return;
  }
  plVar5 = (longlong *)*plVar2;
  iVar7 = *(int *)(param_1 + 0x1a8);
  plVar3 = plVar5;
  do {
    if (plVar3 == plVar5 + iVar7) {
LAB_140e17eb0:
      *(int *)(param_1 + 0x1a8) = iVar7 + 1;
      if (*(int *)(param_1 + 0x1ac) < iVar7 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar2,iVar7);
      }
      *(longlong *)(*plVar2 + (longlong)iVar7 * 8) = DAT_1468703b0;
LAB_140e17ed7:
      plVar2 = *(longlong **)(param_1 + 0xe68);
      if (plVar2 != (longlong *)0x0) {
        if (*(char *)(param_1 + 0x128) == '\x03') {
          (**(code **)(*plVar2 + 0x260))();
          FUN_14246fd50(*(longlong *)(param_1 + 0xe68) + 0x274);
          plVar2 = *(longlong **)(param_1 + 0xe68);
        }
        *(undefined4 *)(plVar2 + 0x46) = 0;
        plVar2 = *(longlong **)(param_1 + 0xe68);
        if (plVar2 != (longlong *)0x0) {
          local_30 = 0x44fa0000;
          local_40 = 0x44fa0000;
          local_48 = 0;
          (**(code **)(*plVar2 + 0x7c0))(plVar2,&local_48,0);
        }
      }
      FUN_140b8bf10(param_1,DAT_1468703a0);
      FUN_142d8edf0(param_1,DAT_1468703a0);
      FUN_140b8bf70(param_1,DAT_1468703a0);
      FUN_140b8c0e0(param_1,DAT_1468703a0);
      return;
    }
    if (*plVar3 == DAT_1468703b0) {
      if ((int)((longlong)plVar3 - (longlong)plVar5 >> 3) != -1) goto LAB_140e17ed7;
      goto LAB_140e17eb0;
    }
    plVar3 = plVar3 + 1;
  } while( true );
}



// FUNCTION 140e181f0 FUN_140e181f0 body=54 status=ok
// SIG undefined FUN_140e181f0(void)

undefined1 FUN_140e181f0(longlong param_1,int param_2)

{
  if (param_2 == 0) {
    if ((*(char *)(param_1 + 0x96c) != '\0') && (*(char *)(param_1 + 0x96d) != '\0')) {
      return 1;
    }
  }
  else {
    if (param_2 == 1) {
      return *(undefined1 *)(param_1 + 0x96c);
    }
    if (param_2 == 2) {
      return *(undefined1 *)(param_1 + 0x96d);
    }
  }
  return 0;
}



// FUNCTION 140e18230 FUN_140e18230 body=968 status=ok
// SIG undefined FUN_140e18230(void)

void FUN_140e18230(longlong param_1)

{
  int *piVar1;
  wchar_t *pwVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  int *piVar14;
  longlong *plVar15;
  wchar_t *pwVar16;
  bool bVar17;
  undefined8 local_res8;
  ulonglong local_res10;
  undefined8 local_38;
  undefined8 uStack_30;
  
  if (*(longlong *)(param_1 + 0x3d0) != 0) {
    iVar5 = FUN_14233f450();
    pwVar16 = (wchar_t *)0x0;
    if (iVar5 == 3) {
      pwVar6 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnPawnAttachSlotStarted",L"::");
      pwVar10 = pwVar16;
      while (pwVar2 = pwVar6, pwVar2 != (wchar_t *)0x0) {
        pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar10 = pwVar2;
      }
      FName::FName(&local_res10,pwVar10 + 2,1);
      uVar3 = local_res10;
      lVar9 = *(longlong *)(param_1 + 0x3d0);
      plVar15 = (longlong *)(lVar9 + 0x1d88);
      FWeakObjectPtr::operator=(&local_38,0);
      uStack_30 = 0;
      FWeakObjectPtr::operator=(&local_38,param_1);
      uStack_30 = uVar3;
      local_res8 = 0;
      if ((uVar3 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_38), lVar7 != 0)) {
        UObject::FindFunction(lVar7,uStack_30);
      }
      piVar1 = (int *)*plVar15;
      iVar5 = *(int *)(lVar9 + 0x1d90);
      uVar8 = local_38;
      for (piVar14 = piVar1; local_38 = (code *)uVar8, piVar14 != piVar1 + (longlong)iVar5 * 4;
          piVar14 = piVar14 + 4) {
        local_38._0_4_ = (int)uVar8;
        if ((((*piVar14 == (int)local_38) &&
             (local_38._4_4_ = (int)((ulonglong)uVar8 >> 0x20),
             bVar17 = piVar14[1] == local_38._4_4_, bVar17)) ||
            ((cVar4 = FWeakObjectPtr::IsValid(piVar14), cVar4 == '\0' &&
             (cVar4 = FWeakObjectPtr::IsValid(&local_38), cVar4 == '\0')))) &&
           (*(ulonglong *)(piVar14 + 2) == uStack_30)) {
          if ((int)((longlong)piVar14 - (longlong)piVar1 >> 4) != -1) goto LAB_140e183a5;
          break;
        }
        uVar8 = local_38;
      }
      iVar5 = *(int *)(lVar9 + 0x1d90);
      *(int *)(lVar9 + 0x1d90) = iVar5 + 1;
      if (*(int *)(lVar9 + 0x1d94) < iVar5 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar15,iVar5);
      }
      puVar13 = (undefined4 *)((longlong)iVar5 * 0x10 + *plVar15);
      *puVar13 = (int)local_38;
      puVar13[1] = local_38._4_4_;
      *(ulonglong *)(puVar13 + 2) = uStack_30;
LAB_140e183a5:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar15);
      uStack_30 = uStack_30 & 0xffffffff00000000;
      local_38 = (code *)&LAB_140e2d2e0;
      pwVar6 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnPlayerDied",L"::");
      pwVar10 = pwVar16;
      while (pwVar2 = pwVar6, pwVar2 != (wchar_t *)0x0) {
        pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar10 = pwVar2;
      }
      FName::FName(&local_res8,pwVar10 + 2,1);
      FUN_1407260e0(*(longlong *)(param_1 + 0x3d0) + 0xf18,param_1,&local_38,local_res8);
      plVar15 = *(longlong **)(param_1 + 0x3d0);
      uVar8 = FUN_1414aa4c0();
      lVar9 = (**(code **)(*plVar15 + 0x628))(plVar15,uVar8);
      if (lVar9 != 0) {
        pwVar10 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnPlayerLevelUp",L"::");
        while (pwVar6 = pwVar10, pwVar6 != (wchar_t *)0x0) {
          pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar6 + 1,L"::");
          pwVar16 = pwVar6;
        }
        FName::FName(&local_res10,pwVar16 + 2,1);
        plVar15 = (longlong *)(lVar9 + 0x208);
        FWeakObjectPtr::operator=(&local_38,0);
        uStack_30 = 0;
        FWeakObjectPtr::operator=(&local_38,param_1);
        uStack_30 = local_res10;
        local_res8 = 0;
        if ((local_res10 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_38), lVar7 != 0)) {
          UObject::FindFunction(lVar7,uStack_30);
        }
        TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar15);
        iVar5 = *(int *)(lVar9 + 0x210);
        *(int *)(lVar9 + 0x210) = iVar5 + 1;
        if (*(int *)(lVar9 + 0x214) < iVar5 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar15,iVar5);
        }
        puVar13 = (undefined4 *)((longlong)iVar5 * 0x10 + *plVar15);
        *puVar13 = (int)local_38;
        puVar13[1] = local_38._4_4_;
        *(ulonglong *)(puVar13 + 2) = uStack_30;
      }
    }
    uStack_30 = uStack_30 & 0xffffffff00000000;
    local_38 = FUN_140e2b0b0;
    plVar15 = (longlong *)(param_1 + 0x178);
    plVar11 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar11 != (longlong *)0x0) {
      *plVar11 = (longlong)&PTR_FUN_143fcfec0;
      FWeakObjectPtr::operator=(plVar11 + 1,param_1);
      *(int *)(plVar11 + 2) = (int)local_38;
      *(int *)((longlong)plVar11 + 0x14) = local_38._4_4_;
      *(undefined4 *)(plVar11 + 3) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)plVar11 + 0x1c) = uStack_30._4_4_;
      lVar9 = FDelegateHandle::GenerateNewID();
      plVar11[5] = lVar9;
      *plVar11 = (longlong)&PTR_FUN_143fcff08;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar15,1);
      (**(code **)(*plVar11 + 0x20))(plVar11,&local_res8);
      iVar5 = *(int *)(param_1 + 0x180);
      *(int *)(param_1 + 0x180) = iVar5 + 1;
      if (*(int *)(param_1 + 0x184) < iVar5 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar15,iVar5);
      }
      puVar12 = (undefined8 *)((longlong)iVar5 * 0x10 + *plVar15);
      *puVar12 = plVar11;
      *(undefined4 *)(puVar12 + 1) = 3;
    }
  }
  return;
}



// FUNCTION 140e18600 FUN_140e18600 body=177 status=ok
// SIG undefined FUN_140e18600(void)

void FUN_140e18600(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar1 = (longlong *)(param_2 + 0x720);
  plVar4 = (longlong *)*plVar1;
  lVar5 = (longlong)*(int *)(param_2 + 0x728);
  plVar2 = plVar4 + lVar5 * 0x12;
  if (plVar4 != plVar2) {
    do {
      if (*plVar4 == *(longlong *)(param_1 + 0x38)) {
        return;
      }
      plVar4 = plVar4 + 0x12;
    } while (plVar4 != plVar2);
  }
  iVar3 = *(int *)(param_2 + 0x728) + 1;
  *(int *)(param_2 + 0x728) = iVar3;
  if (*(int *)(param_2 + 0x72c) < iVar3) {
    TArray<FTTLMissionRankingEventAndReceiveData,FDefaultAllocator>::ResizeGrow(plVar1);
  }
  _guard_xfg_dispatch_icall_nop((void *)(lVar5 * 0x90 + *plVar1),0,0x90);
  *(undefined8 *)(*plVar1 + lVar5 * 0x90) = *(undefined8 *)(param_1 + 0x38);
  *(undefined1 *)(*plVar1 + 8 + lVar5 * 0x90) = 6;
  *(undefined8 *)(*plVar1 + 0x30 + lVar5 * 0x90) = 0;
  return;
}



// FUNCTION 140e186c0 FUN_140e186c0 body=97 status=ok
// SIG undefined FUN_140e186c0(void)

void FUN_140e186c0(longlong param_1)

{
  FUN_14306c5c0();
  FUN_143088220(param_1,param_1 + 0xa78);
  FUN_143088220(param_1,param_1 + 0xad8);
  FUN_143088220(param_1,param_1 + 0xb38);
  FUN_143088220(param_1,param_1 + 0xb98);
  FUN_14223c460(param_1,0);
  FUN_140e2c610(param_1);
  return;
}



// FUNCTION 140e18730 FUN_140e18730 body=2861 status=ok
// SIG undefined FUN_140e18730(void)

void FUN_140e18730(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  wchar_t *pwVar9;
  int *piVar10;
  undefined4 *puVar11;
  int *piVar12;
  wchar_t *pwVar13;
  longlong lVar14;
  longlong *plVar15;
  uint uVar16;
  wchar_t *pwVar17;
  undefined8 local_res10;
  longlong local_res18;
  longlong local_res20;
  undefined8 local_118;
  undefined8 uStack_110;
  int local_108;
  int local_104;
  longlong local_100;
  int local_f8;
  int local_f4;
  longlong local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  longlong local_e0;
  undefined1 local_d8 [8];
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [8];
  undefined1 local_a0 [8];
  undefined1 local_98 [8];
  undefined1 local_90 [8];
  code *local_88;
  ulonglong uStack_80;
  code *local_78;
  ulonglong uStack_70;
  undefined1 local_68 [40];
  
  FUN_140a58ff0();
  if (*(char *)((longlong)param_1 + 0x13c2) == '\0') {
    FUN_140e53150(param_1 + 0x4de,param_1);
  }
  pwVar13 = (wchar_t *)0x0;
  pwVar9 = pwVar13;
  pwVar5 = pwVar13;
  pwVar17 = pwVar13;
  if (0 < (int)param_1[0x4dd]) {
    do {
      if (((longlong)pwVar9 < 0) || ((int)param_1[0x4db] <= (int)pwVar17)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        lVar14 = param_1[0x4dc] + (longlong)pwVar5;
        lVar4 = FWeakObjectPtr::Get(lVar14);
        if (lVar4 == 0) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          if ((DAT_1464b56f4 != *(int *)(lVar14 + 8)) && (*(longlong *)(lVar14 + 0x10) != 0)) {
            lVar4 = FUN_141796df0();
            FWeakObjectPtr::operator=(lVar14,lVar4);
            if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
              LOCK();
              if (DAT_1464b56f4 == 0) {
                DAT_1464b56f4 = 0;
              }
              UNLOCK();
              *(int *)(lVar14 + 8) = DAT_1464b56f4;
            }
            lVar4 = FWeakObjectPtr::Get(lVar14);
            if (lVar4 != 0) goto LAB_140e1882f;
          }
        }
        else {
LAB_140e1882f:
          lVar14 = UParticleModuleTypeDataBeam2::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar14 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar14 + 0x90) * 8) != lVar14 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            *(longlong *)(param_1[0x4da] + (longlong)pwVar9 * 8) = lVar4;
          }
        }
      }
      uVar16 = (int)pwVar17 + 1;
      pwVar9 = (wchar_t *)((longlong)pwVar9 + 1);
      pwVar5 = pwVar5 + 0x14;
      pwVar17 = (wchar_t *)(ulonglong)uVar16;
    } while ((int)uVar16 < (int)param_1[0x4dd]);
  }
  if ((char)param_1[0x25] == '\x03') {
    uStack_110 = uStack_110 & 0xffffffff00000000;
    local_118 = FUN_140e2e1a0;
    pwVar5 = _guard_xfg_dispatch_icall_nop(L"&AOakCharacter_Player::OnStartDead",L"::");
    pwVar9 = pwVar13;
    while (pwVar17 = pwVar5, pwVar17 != (wchar_t *)0x0) {
      pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar17 + 1,L"::");
      pwVar9 = pwVar17;
    }
    FName::FName(&local_res10,pwVar9 + 2,1);
    FUN_1407260e0(param_1 + 0x1e3,param_1,&local_118,local_res10);
    lVar4 = param_1[0x121];
    if (lVar4 != 0) {
      uStack_110 = uStack_110 & 0xffffffff00000000;
      local_118 = FUN_140e2e850;
      plVar15 = (longlong *)(lVar4 + 400);
      plVar6 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar6 != (longlong *)0x0) {
        *plVar6 = (longlong)&PTR_FUN_144012f30;
        FWeakObjectPtr::operator=(plVar6 + 1,param_1);
        *(undefined4 *)(plVar6 + 2) = (undefined4)local_118;
        *(undefined4 *)((longlong)plVar6 + 0x14) = local_118._4_4_;
        *(undefined4 *)(plVar6 + 3) = (undefined4)uStack_110;
        *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_110._4_4_;
        lVar14 = FDelegateHandle::GenerateNewID();
        plVar6[5] = lVar14;
        *plVar6 = (longlong)&PTR_FUN_144012f78;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar15,1);
        (**(code **)(*plVar6 + 0x20))(plVar6,local_a8);
        iVar3 = *(int *)(lVar4 + 0x198);
        *(int *)(lVar4 + 0x198) = iVar3 + 1;
        if (*(int *)(lVar4 + 0x19c) < iVar3 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar15,iVar3);
        }
        puVar7 = (undefined8 *)((longlong)iVar3 * 0x10 + *plVar15);
        *puVar7 = plVar6;
        *(undefined4 *)(puVar7 + 1) = 3;
      }
    }
    lVar4 = param_1[0x123];
    if (lVar4 != 0) {
      uStack_110 = uStack_110 & 0xffffffff00000000;
      local_118 = FUN_140e2a6e0;
      plVar15 = (longlong *)(lVar4 + 0x208);
      plVar6 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar6 != (longlong *)0x0) {
        *plVar6 = (longlong)&PTR_FUN_143fcfec0;
        FWeakObjectPtr::operator=(plVar6 + 1,param_1);
        *(undefined4 *)(plVar6 + 2) = (undefined4)local_118;
        *(undefined4 *)((longlong)plVar6 + 0x14) = local_118._4_4_;
        *(undefined4 *)(plVar6 + 3) = (undefined4)uStack_110;
        *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_110._4_4_;
        lVar14 = FDelegateHandle::GenerateNewID();
        plVar6[5] = lVar14;
        *plVar6 = (longlong)&PTR_FUN_143fcff08;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar15,1);
        (**(code **)(*plVar6 + 0x20))(plVar6,local_a0);
        iVar3 = *(int *)(lVar4 + 0x210);
        *(int *)(lVar4 + 0x210) = iVar3 + 1;
        if (*(int *)(lVar4 + 0x214) < iVar3 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar15,iVar3);
        }
        puVar7 = (undefined8 *)((longlong)iVar3 * 0x10 + *plVar15);
        *puVar7 = plVar6;
        *(undefined4 *)(puVar7 + 1) = 3;
      }
      pwVar5 = _guard_xfg_dispatch_icall_nop(L"&AOakCharacter_Player::NotifyHitFriendly",L"::");
      pwVar9 = pwVar13;
      while (pwVar17 = pwVar5, pwVar17 != (wchar_t *)0x0) {
        pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar17 + 1,L"::");
        pwVar9 = pwVar17;
      }
      FName::FName(&local_res18,pwVar9 + 2,1);
      lVar4 = param_1[0x123];
      plVar6 = (longlong *)(lVar4 + 0x230);
      FWeakObjectPtr::operator=(&local_108,0);
      local_100 = 0;
      FWeakObjectPtr::operator=(&local_108,param_1);
      local_100 = local_res18;
      if ((local_res18 != 0) && (lVar14 = FWeakObjectPtr::Get(&local_108), lVar14 != 0)) {
        UObject::FindFunction(lVar14,local_100);
      }
      piVar10 = (int *)*plVar6;
      iVar3 = *(int *)(lVar4 + 0x238);
      for (piVar12 = piVar10; piVar12 != piVar10 + (longlong)iVar3 * 4; piVar12 = piVar12 + 4) {
        if (((*piVar12 == local_108) && (piVar12[1] == local_104)) ||
           ((cVar2 = FWeakObjectPtr::IsValid(piVar12), cVar2 == '\0' &&
            (cVar2 = FWeakObjectPtr::IsValid(&local_108), cVar2 == '\0')))) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if ((bVar1) && (*(longlong *)(piVar12 + 2) == local_100)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          if ((int)((longlong)piVar12 - (longlong)piVar10 >> 4) != -1) goto LAB_140e18bdc;
          break;
        }
      }
      iVar3 = *(int *)(lVar4 + 0x238);
      *(int *)(lVar4 + 0x238) = iVar3 + 1;
      if (*(int *)(lVar4 + 0x23c) < iVar3 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar6,iVar3);
      }
      piVar10 = (int *)((longlong)iVar3 * 0x10 + *plVar6);
      *piVar10 = local_108;
      piVar10[1] = local_104;
      *(longlong *)(piVar10 + 2) = local_100;
LAB_140e18bdc:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar6);
      lVar4 = param_1[0x123];
      local_118 = (code *)&LAB_140e2a460;
      uStack_110 = uStack_110 & 0xffffffff00000000;
      plVar15 = (longlong *)(lVar4 + 0x1d0);
      plVar6 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar6 != (longlong *)0x0) {
        *plVar6 = (longlong)&PTR_FUN_143fcfec0;
        FWeakObjectPtr::operator=(plVar6 + 1,param_1);
        *(undefined4 *)(plVar6 + 2) = (undefined4)local_118;
        *(undefined4 *)((longlong)plVar6 + 0x14) = local_118._4_4_;
        *(undefined4 *)(plVar6 + 3) = (undefined4)uStack_110;
        *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_110._4_4_;
        lVar14 = FDelegateHandle::GenerateNewID();
        plVar6[5] = lVar14;
        *plVar6 = (longlong)&PTR_FUN_143fcff08;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar15,1);
        (**(code **)(*plVar6 + 0x20))(plVar6,local_98);
        iVar3 = *(int *)(lVar4 + 0x1d8);
        *(int *)(lVar4 + 0x1d8) = iVar3 + 1;
        if (*(int *)(lVar4 + 0x1dc) < iVar3 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar15,iVar3);
        }
        puVar7 = (undefined8 *)((longlong)iVar3 * 0x10 + *plVar15);
        *puVar7 = plVar6;
        *(undefined4 *)(puVar7 + 1) = 3;
      }
    }
    lVar4 = param_1[0x122];
    if (lVar4 != 0) {
      uStack_110 = uStack_110 & 0xffffffff00000000;
      local_118 = FUN_140e2e7a0;
      plVar15 = (longlong *)(lVar4 + 0x1e8);
      plVar6 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar6 != (longlong *)0x0) {
        *plVar6 = (longlong)&PTR_FUN_143fcfec0;
        FWeakObjectPtr::operator=(plVar6 + 1,param_1);
        *(undefined4 *)(plVar6 + 2) = (undefined4)local_118;
        *(undefined4 *)((longlong)plVar6 + 0x14) = local_118._4_4_;
        *(undefined4 *)(plVar6 + 3) = (undefined4)uStack_110;
        *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_110._4_4_;
        lVar14 = FDelegateHandle::GenerateNewID();
        plVar6[5] = lVar14;
        *plVar6 = (longlong)&PTR_FUN_143fcff08;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar15,1);
        (**(code **)(*plVar6 + 0x20))(plVar6,local_90);
        iVar3 = *(int *)(lVar4 + 0x1f0);
        *(int *)(lVar4 + 0x1f0) = iVar3 + 1;
        if (*(int *)(lVar4 + 500) < iVar3 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar15,iVar3);
        }
        puVar7 = (undefined8 *)((longlong)iVar3 * 0x10 + *plVar15);
        *puVar7 = plVar6;
        *(undefined4 *)(puVar7 + 1) = 3;
      }
    }
    if (param_1[0x55a] != 0) {
      pwVar5 = _guard_xfg_dispatch_icall_nop(L"&AOakCharacter_Player::OnLevelUp",L"::");
      pwVar9 = pwVar13;
      while (pwVar17 = pwVar5, pwVar17 != (wchar_t *)0x0) {
        pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar17 + 1,L"::");
        pwVar9 = pwVar17;
      }
      FName::FName(&local_res20,pwVar9 + 2,1);
      lVar4 = param_1[0x55a];
      plVar6 = (longlong *)(lVar4 + 0x208);
      FWeakObjectPtr::operator=(&local_f8,0);
      local_f0 = 0;
      FWeakObjectPtr::operator=(&local_f8,param_1);
      local_f0 = local_res20;
      if ((local_res20 != 0) && (lVar14 = FWeakObjectPtr::Get(&local_f8), lVar14 != 0)) {
        UObject::FindFunction(lVar14,local_f0);
      }
      piVar10 = (int *)*plVar6;
      iVar3 = *(int *)(lVar4 + 0x210);
      for (piVar12 = piVar10; piVar12 != piVar10 + (longlong)iVar3 * 4; piVar12 = piVar12 + 4) {
        if (((*piVar12 == local_f8) && (piVar12[1] == local_f4)) ||
           ((cVar2 = FWeakObjectPtr::IsValid(piVar12), cVar2 == '\0' &&
            (cVar2 = FWeakObjectPtr::IsValid(&local_f8), cVar2 == '\0')))) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if ((bVar1) && (*(longlong *)(piVar12 + 2) == local_f0)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          if ((int)((longlong)piVar12 - (longlong)piVar10 >> 4) != -1) goto LAB_140e18e9c;
          break;
        }
      }
      iVar3 = *(int *)(lVar4 + 0x210);
      *(int *)(lVar4 + 0x210) = iVar3 + 1;
      if (*(int *)(lVar4 + 0x214) < iVar3 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar6,iVar3);
      }
      piVar10 = (int *)((longlong)iVar3 * 0x10 + *plVar6);
      *piVar10 = local_f8;
      piVar10[1] = local_f4;
      *(longlong *)(piVar10 + 2) = local_f0;
LAB_140e18e9c:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar6);
    }
    (**(code **)(param_1[0x1b5] + 0x40))(param_1 + 0x1b5,local_68);
    cVar2 = FUN_142d52a00(local_68);
    if (cVar2 != '\0') {
      FWeakObjectPtr::operator=(local_d8,0);
      local_d0 = 0;
      pwVar5 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnMaxHealthChanged",L"::");
      pwVar9 = pwVar13;
      while (pwVar17 = pwVar5, pwVar17 != (wchar_t *)0x0) {
        pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar17 + 1,L"::");
        pwVar9 = pwVar17;
      }
      FName::FName(&local_c8,pwVar9 + 2,1);
      FWeakObjectPtr::operator=(local_d8,param_1);
      local_d0 = local_c8;
      if ((local_c8 != 0) && (lVar4 = FWeakObjectPtr::Get(local_d8), lVar4 != 0)) {
        UObject::FindFunction(lVar4,local_d0);
      }
      uVar8 = FUN_142d52a20(local_68);
      lVar4 = FArchive::operator<<(uVar8);
      FUN_142475720(lVar4 + 0x1c,local_d8);
    }
    uVar8 = (**(code **)(*param_1 + 0x148))(param_1);
    cVar2 = FUN_140adaba0(uVar8);
    if (cVar2 != '\0') {
      puVar7 = (undefined8 *)param_1[0x27b];
      pwVar9 = (wchar_t *)((longlong)(int)param_1[0x27c] & 0x1fffffffffffffff);
      if (puVar7 + (int)param_1[0x27c] < puVar7) {
        pwVar9 = pwVar13;
      }
      pwVar5 = pwVar13;
      if (pwVar9 != (wchar_t *)0x0) {
        do {
          FUN_140e6fa10(param_1 + 0x5a6,*puVar7);
          pwVar5 = (wchar_t *)((longlong)pwVar5 + 1);
          puVar7 = puVar7 + 1;
        } while (pwVar5 != pwVar9);
      }
      puVar7 = (undefined8 *)param_1[0x27d];
      pwVar9 = (wchar_t *)((longlong)(int)param_1[0x27e] & 0x1fffffffffffffff);
      if (puVar7 + (int)param_1[0x27e] < puVar7) {
        pwVar9 = pwVar13;
      }
      pwVar5 = pwVar13;
      if (pwVar9 != (wchar_t *)0x0) {
        do {
          FUN_140e6fb20(param_1 + 0x5c3,*puVar7);
          pwVar5 = (wchar_t *)((longlong)pwVar5 + 1);
          puVar7 = puVar7 + 1;
        } while (pwVar5 != pwVar9);
      }
    }
  }
  pwVar5 = _guard_xfg_dispatch_icall_nop(L"&AOakCharacter_Player::OnSDUListUpdated",L"::");
  pwVar9 = pwVar13;
  while (pwVar17 = pwVar5, pwVar17 != (wchar_t *)0x0) {
    pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar17 + 1,L"::");
    pwVar9 = pwVar17;
  }
  FName::FName(&local_c0,pwVar9 + 2,1);
  plVar6 = param_1 + 0x543;
  FWeakObjectPtr::operator=(&local_e8,0);
  local_e0 = 0;
  FWeakObjectPtr::operator=(&local_e8,param_1);
  local_e0 = local_c0;
  if ((local_c0 != 0) && (lVar4 = FWeakObjectPtr::Get(&local_e8), lVar4 != 0)) {
    UObject::FindFunction(lVar4,local_e0);
  }
  iVar3 = TArray<TScriptDelegate<FWeakObjectPtr>,FDefaultAllocator>::Find(plVar6,&local_e8);
  if (iVar3 == -1) {
    iVar3 = (int)param_1[0x544];
    *(int *)(param_1 + 0x544) = iVar3 + 1;
    if (*(int *)((longlong)param_1 + 0x2a24) < iVar3 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar6,iVar3);
    }
    puVar11 = (undefined4 *)((longlong)iVar3 * 0x10 + *plVar6);
    *puVar11 = local_e8;
    puVar11[1] = local_e4;
    *(longlong *)(puVar11 + 2) = local_e0;
  }
  TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar6);
  FUN_140e5a590(param_1 + 0x52a,param_1);
  uStack_110 = uStack_110 & 0xffffffff00000000;
  local_118 = FUN_140e3ca20;
  local_88 = FUN_140e3ca20;
  uStack_80 = uStack_110;
  pwVar5 = _guard_xfg_dispatch_icall_nop
                     (L"&AOakCharacter_Player::UpdateFriendStatusSystemOfInventoryChange",L"::");
  pwVar9 = pwVar13;
  while (pwVar17 = pwVar5, pwVar17 != (wchar_t *)0x0) {
    pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar17 + 1,L"::");
    pwVar9 = pwVar17;
  }
  FName::FName(&local_b8,pwVar9 + 2,1);
  FUN_1407260e0(param_1 + 0x261,param_1,&local_88,local_b8);
  local_118 = FUN_140e3ca20;
  uStack_110 = uStack_110 & 0xffffffff00000000;
  local_78 = FUN_140e3ca20;
  uStack_70 = uStack_110;
  pwVar9 = _guard_xfg_dispatch_icall_nop
                     (L"&AOakCharacter_Player::UpdateFriendStatusSystemOfInventoryChange",L"::");
  while (pwVar5 = pwVar9, pwVar5 != (wchar_t *)0x0) {
    pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
    pwVar13 = pwVar5;
  }
  FName::FName(&local_b0,pwVar13 + 2,1);
  FUN_1407260e0(param_1 + 0x263,param_1,&local_78,local_b0);
  return;
}



// FUNCTION 140e19260 FUN_140e19260 body=266 status=ok
// SIG undefined FUN_140e19260(void)

void FUN_140e19260(longlong *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  undefined4 *puVar7;
  longlong lVar8;
  undefined8 local_res8;
  undefined1 local_28 [32];
  
  FUN_140e45090();
  lVar8 = param_1[0x23];
  if (lVar8 != 0) {
    lVar6 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_140e192b6;
  }
  lVar8 = 0;
LAB_140e192b6:
  param_1[0x7a] = lVar8;
  iVar5 = FUN_14233f450(param_1);
  if (iVar5 == 3) {
    local_res8 = 0;
    puVar7 = (undefined4 *)FUN_142d61e00(local_28,&local_res8,param_1[0x23],param_1[0x71]);
    uVar1 = puVar7[1];
    uVar2 = puVar7[2];
    uVar3 = puVar7[3];
    *(undefined4 *)(param_1 + 0x72) = *puVar7;
    *(undefined4 *)((longlong)param_1 + 0x394) = uVar1;
    *(undefined4 *)(param_1 + 0x73) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x39c) = uVar3;
    param_1[0x74] = *(longlong *)(puVar7 + 4);
    puVar7 = (undefined4 *)FUN_142d61e00(local_28,&local_res8,param_1[0x23],param_1[0x75]);
    uVar1 = puVar7[1];
    uVar2 = puVar7[2];
    uVar3 = puVar7[3];
    *(undefined4 *)(param_1 + 0x76) = *puVar7;
    *(undefined4 *)((longlong)param_1 + 0x3b4) = uVar1;
    *(undefined4 *)(param_1 + 0x77) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x3bc) = uVar3;
    param_1[0x78] = *(longlong *)(puVar7 + 4);
    (**(code **)(*param_1 + 0x260))(param_1);
  }
  FUN_140e18230(param_1);
  if ((char)param_1[0x81] != '\x01') {
    *(undefined1 *)(param_1 + 0x81) = 1;
  }
  return;
}



// FUNCTION 140e19370 FUN_140e19370 body=243 status=ok
// SIG undefined FUN_140e19370(void)

void FUN_140e19370(undefined8 param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res10 [24];
  longlong local_18 [2];
  
  FUN_142330a70();
  FUN_140e3cf10(param_1);
  local_18[0] = 0;
  local_18[1] = 0x51;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy
            (local_18[0],
             L"/Game/GameData/ZoneMap/PlanetMapData/PlanetMapData_Pandora.PlanetMapData_Pandora",
             0xa2);
  uVar2 = FUN_1414a9b90();
  puVar3 = (undefined8 *)FName::FName(local_res10,L"PlanetMapData_Pandora",1);
  lVar4 = StaticFindObjectFastExplicit(uVar2,*puVar3,local_18,0,0);
  if (lVar4 != 0) {
    lVar5 = FUN_1414a9b90();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140e19439;
  }
  lVar4 = 0;
LAB_140e19439:
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (lVar4 != 0) {
    FUN_140e3c210(param_1,lVar4);
  }
  return;
}



// FUNCTION 140e19470 FUN_140e19470 body=670 status=ok
// SIG undefined FUN_140e19470(void)

void FUN_140e19470(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  char cVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  int *piVar8;
  int *piVar9;
  longlong local_res10;
  int local_38;
  int local_34;
  longlong local_30;
  
  thunk_FUN_142330a70();
  pwVar6 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::BroadcastChallengeUpdateFriendEvent",L"::");
  pwVar4 = (wchar_t *)0x0;
  while (pwVar3 = pwVar6, pwVar3 != (wchar_t *)0x0) {
    pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
    pwVar4 = pwVar3;
  }
  FName::FName(&local_res10,pwVar4 + 2,1);
  lVar7 = local_res10;
  plVar1 = (longlong *)(param_1 + 0x198);
  FWeakObjectPtr::operator=(&local_38,0);
  local_30 = 0;
  FWeakObjectPtr::operator=(&local_38,param_1);
  local_30 = lVar7;
  if ((lVar7 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_38), lVar7 != 0)) {
    UObject::FindFunction(lVar7,local_30);
  }
  piVar8 = (int *)*plVar1;
  iVar2 = *(int *)(param_1 + 0x1a0);
  for (piVar9 = piVar8; piVar9 != piVar8 + (longlong)iVar2 * 4; piVar9 = piVar9 + 4) {
    if ((((*piVar9 == local_38) && (piVar9[1] == local_34)) ||
        ((cVar5 = FWeakObjectPtr::IsValid(piVar9), cVar5 == '\0' &&
         (cVar5 = FWeakObjectPtr::IsValid(&local_38), cVar5 == '\0')))) &&
       (*(longlong *)(piVar9 + 2) == local_30)) {
      if ((int)((longlong)piVar9 - (longlong)piVar8 >> 4) != -1) goto LAB_140e195bf;
      break;
    }
  }
  iVar2 = *(int *)(param_1 + 0x1a0);
  *(int *)(param_1 + 0x1a0) = iVar2 + 1;
  if (*(int *)(param_1 + 0x1a4) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
  }
  piVar8 = (int *)((longlong)iVar2 * 0x10 + *plVar1);
  *piVar8 = local_38;
  piVar8[1] = local_34;
  *(longlong *)(piVar8 + 2) = local_30;
LAB_140e195bf:
  TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
  pwVar6 = _guard_xfg_dispatch_icall_nop
                     (L"&ThisClass::BroadcastChallengeCompletedToFriendSystems",L"::");
  pwVar4 = (wchar_t *)0x0;
  while (pwVar3 = pwVar6, pwVar3 != (wchar_t *)0x0) {
    pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
    pwVar4 = pwVar3;
  }
  FName::FName(&local_res10,pwVar4 + 2,1);
  plVar1 = (longlong *)(param_1 + 0x1a8);
  FWeakObjectPtr::operator=(&local_38,0);
  local_30 = 0;
  FWeakObjectPtr::operator=(&local_38,param_1);
  local_30 = local_res10;
  if ((local_res10 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_38), lVar7 != 0)) {
    UObject::FindFunction(lVar7,local_30);
  }
  piVar8 = (int *)*plVar1;
  iVar2 = *(int *)(param_1 + 0x1b0);
  piVar9 = piVar8;
  do {
    if (piVar9 == piVar8 + (longlong)iVar2 * 4) {
LAB_140e196b9:
      iVar2 = *(int *)(param_1 + 0x1b0);
      *(int *)(param_1 + 0x1b0) = iVar2 + 1;
      if (*(int *)(param_1 + 0x1b4) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
      }
      piVar8 = (int *)((longlong)iVar2 * 0x10 + *plVar1);
      *piVar8 = local_38;
      piVar8[1] = local_34;
      *(longlong *)(piVar8 + 2) = local_30;
LAB_140e196ef:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
      return;
    }
    if ((((*piVar9 == local_38) && (piVar9[1] == local_34)) ||
        ((cVar5 = FWeakObjectPtr::IsValid(piVar9), cVar5 == '\0' &&
         (cVar5 = FWeakObjectPtr::IsValid(&local_38), cVar5 == '\0')))) &&
       (*(longlong *)(piVar9 + 2) == local_30)) {
      if ((int)((longlong)piVar9 - (longlong)piVar8 >> 4) != -1) goto LAB_140e196ef;
      goto LAB_140e196b9;
    }
    piVar9 = piVar9 + 4;
  } while( true );
}



// FUNCTION 140e19710 FUN_140e19710 body=88 status=ok
// SIG undefined FUN_140e19710(void)

void FUN_140e19710(void)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_1422312c0();
  if (lVar2 != 0) {
    lVar3 = FUN_14141f270();
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
      FUN_140bb4d90(lVar2);
      return;
    }
  }
  return;
}



// FUNCTION 140e19770 FUN_140e19770 body=79 status=ok
// SIG undefined FUN_140e19770(void)

longlong FUN_140e19770(longlong param_1,longlong *param_2,longlong param_3)

{
  (**(code **)(*param_2 + 0x90))(param_2,*(undefined8 *)(param_1 + 8));
  (**(code **)(*param_2 + 0x108))(param_2,*(undefined4 *)(*(int *)(param_1 + 0x18) + param_3));
  return param_3;
}


