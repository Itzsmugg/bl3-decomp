// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140f055c0 FUN_140f055c0 body=454 status=ok
// SIG undefined FUN_140f055c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f055c0(undefined8 param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined1 local_e0 [8];
  longlong *local_d8;
  code *local_c8 [2];
  longlong local_b8 [4];
  longlong *local_98;
  int local_88;
  undefined1 local_78 [16];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  local_e8 = param_1;
  FText::FText(local_e0);
  uVar6 = 0;
  local_98 = (longlong *)0x0;
  local_88 = 0;
  puVar5 = (undefined8 *)FUN_140438ef0(0x28,local_b8);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_FUN_144605c20;
    puVar5[1] = local_e8;
    FText::FText(puVar5 + 2,local_e0);
  }
  local_c8[0] = thunk_FUN_140ed45b0;
  if (local_d8 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_d8 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_d8)(local_d8);
      LOCK();
      piVar1 = (int *)((longlong)local_d8 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_d8 + 8))(local_d8,1);
      }
    }
  }
  cVar4 = FUN_142ebdc00(param_1);
  if ((cVar4 == '\0') || (cVar4 = FUN_142eba870(param_1), cVar4 != '\0')) {
    if (local_88 != 0) {
      plVar7 = local_b8;
      if (local_98 != (longlong *)0x0) {
        plVar7 = local_98;
      }
      if (plVar7 != (longlong *)0x0) {
        uVar6 = (**(code **)(*plVar7 + 8))();
      }
    }
    (*local_c8[0])(uVar6);
  }
  else {
    uVar6 = FUN_1420849a0(param_1,local_78,local_c8);
    FUN_14208d480(param_1,uVar6);
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
    FUN_142eb05b0(param_1);
  }
  if (local_88 != 0) {
    plVar7 = local_b8;
    if (local_98 != (longlong *)0x0) {
      plVar7 = local_98;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (local_98 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140f05790 FUN_140f05790 body=1279 status=ok
// SIG undefined FUN_140f05790(void)

void FUN_140f05790(longlong *param_1,char param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  longlong *plVar10;
  uint *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  undefined8 *puVar15;
  uint *puVar16;
  longlong *plVar17;
  uint *puVar18;
  longlong *plVar19;
  int local_res20;
  longlong local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  uint *local_68;
  uint local_60;
  uint local_5c;
  undefined8 *local_58;
  int local_50;
  int local_4c;
  uint *puVar14;
  
  if ((int)param_1[0xd7] < 1) {
    *(undefined1 *)(param_1 + 0xd9) = 0;
    lVar5 = (**(code **)(*param_1 + 0x148))();
    lVar6 = 0;
    if (lVar5 != 0) {
      lVar6 = (**(code **)(*param_1 + 0x148))(param_1);
      lVar6 = *(longlong *)(lVar6 + 0x148);
    }
    puVar11 = (uint *)0x0;
    local_88 = lVar6;
    if (lVar6 != 0) {
      plVar19 = param_1 + 0xce;
      local_68 = (uint *)0x0;
      local_5c = 0;
      local_58 = (undefined8 *)0x0;
      local_res20 = 0;
      local_4c = 0;
      puVar14 = puVar11;
      puVar16 = puVar11;
      puVar18 = puVar11;
      local_78 = plVar19;
      do {
        lVar5 = *plVar19;
        if (lVar5 != 0) {
          if ((*(char *)(lVar5 + 0x1f8) == '\0') || (*(longlong *)(lVar5 + 0x1d0) != 0)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
LAB_140f058e4:
            iVar9 = (int)puVar18;
            local_60 = iVar9 + 1;
            if ((int)puVar11 < (int)local_60) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow();
              puVar11 = (uint *)(ulonglong)local_5c;
              puVar16 = local_68;
            }
            puVar18 = (uint *)(ulonglong)local_60;
            puVar16[iVar9] = (uint)puVar14;
          }
          else {
            lVar5 = *(longlong *)(lVar5 + 0x1d0);
            if (lVar5 != 0) {
              lVar7 = UInputKeySelector::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if (bVar3) {
                plVar10 = *(longlong **)(lVar6 + 0x470);
                plVar17 = plVar10 + *(int *)(lVar6 + 0x478);
                for (; plVar10 != plVar17; plVar10 = plVar10 + 1) {
                  if (*plVar10 == lVar5) goto LAB_140f0590e;
                }
                goto LAB_140f058e4;
              }
            }
          }
        }
LAB_140f0590e:
        plVar17 = local_78;
        uVar13 = (uint)puVar14 + 1;
        puVar14 = (uint *)(ulonglong)uVar13;
        plVar19 = plVar19 + 1;
      } while ((int)uVar13 < 3);
      plVar10 = *(longlong **)(lVar6 + 0x470);
      plVar19 = plVar10 + *(int *)(lVar6 + 0x478);
      puVar11 = local_68;
      for (; local_68 = puVar11, plVar10 != plVar19; plVar10 = plVar10 + 1) {
        plVar1 = (longlong *)*plVar10;
        if (plVar1 != (longlong *)0x0) {
          lVar6 = UInputKeySelector::GetPrivateStaticClass();
          if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
              != lVar6 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if ((bVar3) &&
             ((plVar8 = (longlong *)(**(code **)(*plVar1 + 0x670))(), plVar8 == (longlong *)0x0 ||
              (cVar4 = (**(code **)(*plVar8 + 0x768))(), cVar4 == '\0')))) {
            *(undefined1 *)(param_1 + 0xd9) = 1;
            iVar9 = 0;
            plVar8 = plVar17;
            do {
              if ((*plVar8 != 0) && (*(longlong **)(*plVar8 + 0x1d0) == plVar1)) goto LAB_140f05a04;
              iVar9 = iVar9 + 1;
              plVar8 = plVar8 + 1;
            } while (iVar9 < 3);
            local_50 = local_res20 + 1;
            if (local_4c < local_50) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_58);
            }
            local_58[local_res20] = plVar1;
            local_res20 = local_50;
          }
        }
LAB_140f05a04:
        lVar6 = local_88;
        puVar11 = local_68;
      }
      if ((0 < (int)puVar18) || (0 < local_res20)) {
        if (param_2 == '\0') {
          puVar15 = *(undefined8 **)(lVar6 + 0x470);
          iVar9 = 0;
          puVar12 = puVar15 + *(int *)(lVar6 + 0x478);
          while ((local_68 = puVar11, puVar15 != puVar12 && (iVar9 < 3))) {
            if (*plVar17 == 0) {
LAB_140f05bc0:
              iVar9 = iVar9 + 1;
              plVar17 = plVar17 + 1;
            }
            else {
              FUN_140f09b90(*plVar17,*puVar15);
              if (*(longlong *)(*plVar17 + 0x1d0) != 0) {
                local_78 = (longlong *)0x0;
                local_70 = 3;
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
                FGenericPlatformString::Memcpy(local_78,&DAT_144601d90,6);
                FUN_142088cf0(*plVar17,&local_78);
                if (local_78 != (longlong *)0x0) {
                  FMemory::Free();
                }
                goto LAB_140f05bc0;
              }
              local_88 = 0;
              local_80 = 4;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
              FGenericPlatformString::Memcpy(local_88,&DAT_144601d98,8);
              FUN_142088cf0(*plVar17,&local_88);
              if (local_88 != 0) {
                FMemory::Free();
              }
            }
            puVar15 = puVar15 + 1;
            puVar11 = local_68;
          }
        }
        else {
          puVar12 = local_58;
          for (puVar14 = puVar11; local_58 = puVar12, puVar14 != puVar11 + (int)puVar18;
              puVar14 = puVar14 + 1) {
            uVar13 = *puVar14;
            if (uVar13 < 3) {
              plVar19 = param_1 + 0xd6;
              lVar6 = (longlong)(int)param_1[0xd7];
              iVar9 = (int)param_1[0xd7] + 1;
              *(int *)(param_1 + 0xd7) = iVar9;
              if (*(int *)((longlong)param_1 + 0x6bc) < iVar9) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar19);
              }
              lVar5 = *plVar19;
              *(undefined8 *)(lVar5 + lVar6 * 0x10) = 0;
              *(undefined8 *)(lVar5 + 8 + lVar6 * 0x10) = 0;
              *(uint *)(*plVar19 + 8 + lVar6 * 0x10) = uVar13;
              *(undefined1 *)(*plVar19 + 0xc + lVar6 * 0x10) = 0;
              *(undefined1 *)(*plVar19 + 0xd + lVar6 * 0x10) = 0;
            }
            puVar12 = local_58;
          }
          puVar15 = puVar12 + local_res20;
          if (puVar12 != puVar15) {
            plVar19 = param_1 + 0xd6;
            do {
              lVar6 = (longlong)(int)param_1[0xd7];
              uVar2 = *puVar12;
              iVar9 = (int)param_1[0xd7] + 1;
              *(int *)(param_1 + 0xd7) = iVar9;
              if (*(int *)((longlong)param_1 + 0x6bc) < iVar9) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar19);
              }
              lVar5 = *plVar19;
              puVar12 = puVar12 + 1;
              *(undefined8 *)(lVar5 + lVar6 * 0x10) = 0;
              *(undefined8 *)(lVar5 + 8 + lVar6 * 0x10) = 0;
              *(undefined8 *)(*plVar19 + lVar6 * 0x10) = uVar2;
              *(undefined1 *)(*plVar19 + 0xc + lVar6 * 0x10) = 0;
              *(undefined1 *)(*plVar19 + 0xd + lVar6 * 0x10) = 1;
            } while (puVar12 != puVar15);
          }
        }
      }
      if (local_58 != (undefined8 *)0x0) {
        FMemory::Free(local_58);
      }
      if (puVar11 != (uint *)0x0) {
        FMemory::Free(puVar11);
      }
    }
    if ((0 < (int)param_1[0xd7]) && ((char)param_1[0xd8] == '\0')) {
      FUN_140f03520(param_1);
    }
  }
  return;
}



// FUNCTION 140f05c90 FUN_140f05c90 body=610 status=ok
// SIG undefined FUN_140f05c90(void)

void FUN_140f05c90(longlong *param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x105);
  if (cVar4 != '\0') {
    *(undefined4 *)(param_1 + 0x108) = 0;
    lVar7 = FWeakObjectPtr::Get(param_1 + 0x105);
    *(undefined4 *)(param_1 + 0x109) = *(undefined4 *)(lVar7 + 0x1d8);
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    if (*(longlong *)(DAT_146b33f38 + 200) != 0) {
      uVar6 = FUN_140a2f2a0(*(longlong *)(DAT_146b33f38 + 200),(int)param_1[0x109]);
      *(undefined4 *)(param_1 + 0x108) = uVar6;
      if (param_2 != '\0') {
        *(undefined4 *)((longlong)param_1 + 0x844) = uVar6;
      }
    }
    uVar8 = FWeakObjectPtr::Get(param_1 + 0x105);
    uVar6 = FUN_140e47680(uVar8,(int)param_1[0x108] + -1);
    *(undefined4 *)(param_1 + 0x10a) = uVar6;
    uVar8 = FWeakObjectPtr::Get(param_1 + 0x105);
    uVar6 = FUN_140e47680(uVar8,(int)param_1[0x108]);
    *(undefined4 *)((longlong)param_1 + 0x84c) = uVar6;
  }
  cVar4 = FWeakObjectPtr::IsValid();
  if (cVar4 == '\0') {
    uVar6 = 0;
  }
  else {
    lVar7 = FWeakObjectPtr::Get(param_1 + 0x106);
    uVar6 = *(undefined4 *)(lVar7 + 0x17c);
  }
  *(undefined4 *)((longlong)param_1 + 0x85c) = uVar6;
  FUN_140f05f00(param_1);
  FUN_140f06d10(param_1);
  uVar8 = (**(code **)(*param_1 + 0x148))(param_1);
  uVar5 = FUN_140b60d90(uVar8);
  uVar6 = FUN_140b5d0c0(uVar8);
  FUN_140f05fd0(param_1,uVar5,uVar6);
  plVar9 = (longlong *)FUN_140ad4c90(param_1,local_78);
  lVar7 = *plVar9;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_70 + 1;
    lVar3 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)local_70 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  if (lVar7 != 0) {
    FWeakObjectPtr::operator=(&local_res8,param_1);
    local_28 = 0;
    local_18 = 0;
    puVar10 = (undefined8 *)FUN_140438ef0(0x18,local_48);
    if (puVar10 != (undefined8 *)0x0) {
      *puVar10 = &PTR_FUN_1444f8920;
      puVar10[1] = param_1;
      *(undefined4 *)(puVar10 + 2) = local_res8;
      *(undefined4 *)((longlong)puVar10 + 0x14) = local_resc;
    }
    local_58[0] = &LAB_140ee0db0;
    puVar10 = (undefined8 *)FUN_140ad4c90(param_1,local_68);
    FUN_14204c370(*puVar10,local_58);
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_60 + 1;
      lVar7 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar1 = (int *)((longlong)local_60 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_60 + 8))(local_60,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140f05f00 FUN_140f05f00 body=197 status=ok
// SIG undefined FUN_140f05f00(void)

void FUN_140f05f00(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  
  lVar1 = param_1 + 0x830;
  cVar4 = FWeakObjectPtr::IsValid(lVar1);
  if (cVar4 != '\0') {
    plVar2 = (longlong *)FWeakObjectPtr::Get(lVar1);
    uVar3 = FWeakObjectPtr::Get(lVar1);
    iVar5 = (**(code **)(*plVar2 + 0x468))(plVar2);
    uVar6 = FUN_140e476d0(uVar3,iVar5 + -1);
    *(undefined4 *)(param_1 + 0x86c) = uVar6;
    plVar2 = (longlong *)FWeakObjectPtr::Get(lVar1);
    uVar3 = FWeakObjectPtr::Get(lVar1);
    uVar6 = (**(code **)(*plVar2 + 0x468))(plVar2);
    uVar6 = FUN_140e476d0(uVar3,uVar6);
    *(undefined4 *)(param_1 + 0x868) = uVar6;
    uVar3 = FWeakObjectPtr::Get(lVar1);
    uVar6 = FUN_140e4de20(uVar3);
    *(undefined4 *)(param_1 + 0x870) = uVar6;
  }
  FUN_140f07020(param_1);
  return;
}



// FUNCTION 140f05fd0 FUN_140f05fd0 body=479 status=ok
// SIG undefined FUN_140f05fd0(void)

void FUN_140f05fd0(longlong param_1,char param_2,int param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  longlong local_58 [5];
  longlong *plStack_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if (*(longlong *)(param_1 + 0x768) == 0) {
    return;
  }
  if (param_2 == '\0') {
    bVar7 = *(char *)(param_1 + 0x708) == '\0';
  }
  else {
    if (*(char *)(param_1 + 0x708) == '\0') goto LAB_140f0600d;
    bVar7 = param_3 == *(int *)(param_1 + 0x70c);
  }
  if (bVar7) {
    return;
  }
LAB_140f0600d:
  *(char *)(param_1 + 0x708) = param_2;
  *(int *)(param_1 + 0x70c) = param_3;
  if (param_2 == '\0') {
    local_58[2] = 0;
    local_58[3] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58 + 2,0);
    FGenericPlatformString::Memcpy(local_58[2],L"hide",10);
    FUN_142088910(*(undefined8 *)(param_1 + 0x770),local_58 + 2);
    if (local_58[2] != 0) {
      FMemory::Free();
    }
  }
  else {
    local_58[0] = 0;
    local_58[1] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
    FGenericPlatformString::Memcpy(local_58[0],L"show",10);
    FUN_142088910(*(undefined8 *)(param_1 + 0x770),local_58);
    if (local_58[0] != 0) {
      FMemory::Free();
    }
    if ((*(longlong *)(param_1 + 0x780) != 0) && (*(longlong *)(param_1 + 0x788) != 0)) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x788) + 8);
      LOCK();
      iVar5 = *piVar1;
      if (iVar5 == 0) {
        *piVar1 = 0;
        iVar5 = 0;
      }
      UNLOCK();
      if (0 < iVar5) {
        local_58[4] = 0;
        plStack_30 = (longlong *)0x0;
        uVar6 = FText::AsNumber(local_28,param_3,0,local_58 + 4);
        UMistDebugEntityScreen::InspectEntity(param_1 + 0x778,uVar6,1,0);
        if (local_20 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_20 + 1;
          lVar4 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_20)(local_20);
            LOCK();
            piVar1 = (int *)((longlong)local_20 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*local_20 + 8))(local_20,1);
            }
          }
        }
        plVar2 = plStack_30;
        if (plStack_30 != (longlong *)0x0) {
          LOCK();
          plVar3 = plStack_30 + 1;
          lVar4 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*plStack_30)(plStack_30);
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar2 + 8))(plVar2,1);
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140f061b0 FUN_140f061b0 body=245 status=ok
// SIG undefined FUN_140f061b0(void)

void FUN_140f061b0(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  wchar_t *local_18;
  undefined8 local_10;
  
  *(undefined4 *)(param_1 + 0x528) = param_2;
  local_10 = 8;
  local_18 = (wchar_t *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"player1",0x10);
  if ((1 < *(int *)(param_1 + 0x528)) && (*(longlong *)(param_1 + 0x430) != 0)) {
    lVar2 = FUN_14270bb10();
    if (lVar2 != 0) {
      cVar1 = FUN_14254a1f0(lVar2);
      if ((cVar1 == '\0') && (local_18 != L"player2")) {
        uVar3 = local_10._4_4_;
        local_10 = (ulonglong)local_10._4_4_ << 0x20;
        iVar4 = 0;
        if (uVar3 != 8) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_18,8);
          uVar3 = local_10._4_4_;
          iVar4 = (int)local_10;
        }
        local_10 = CONCAT44(local_10._4_4_,iVar4 + 8);
        if ((int)uVar3 < iVar4 + 8) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,iVar4);
        }
        builtin_wcsncpy(local_18,L"player2",8);
      }
    }
  }
  if (*(longlong *)(param_1 + 0x510) != 0) {
    FUN_142088cf0(*(longlong *)(param_1 + 0x510),&local_18);
  }
  if (local_18 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140f062b0 FUN_140f062b0 body=121 status=ok
// SIG undefined FUN_140f062b0(void)

void FUN_140f062b0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  lVar3 = *(longlong *)(param_1 + 0x28);
  iVar5 = 0;
  lVar4 = (longlong)*(int *)(param_1 + 0x30) * 0x10 + lVar3;
  lVar2 = lVar3;
  if (lVar3 != lVar4) {
    do {
      iVar1 = iVar5 + 1;
      if (*(longlong *)(lVar2 + 8) == 0) {
        iVar1 = iVar5;
      }
      iVar5 = iVar1;
      lVar2 = lVar2 + 0x10;
    } while (lVar2 != lVar4);
    for (; lVar3 != lVar4; lVar3 = lVar3 + 0x10) {
      if (*(longlong *)(lVar3 + 8) != 0) {
        FUN_140f061b0(*(longlong *)(lVar3 + 8),iVar5);
      }
    }
  }
  return;
}



// FUNCTION 140f06330 FUN_140f06330 body=1626 status=ok
// SIG undefined FUN_140f06330(void)

void FUN_140f06330(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  float fVar7;
  undefined4 uVar8;
  longlong local_f8 [14];
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_50 [8];
  longlong *local_48;
  undefined1 local_38 [8];
  longlong *local_30;
  
  switch(*(undefined1 *)(param_1 + 0x1e0)) {
  case 0:
    if (*(longlong *)(param_1 + 0x170) != 0) {
      local_f8[1] = 0xc;
      local_f8[0] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_f8,0);
      FGenericPlatformString::Memcpy(local_f8[0],L"buddyWidget",0x18);
      FUN_142088cf0(*(undefined8 *)(param_1 + 0x170),local_f8);
      if (local_f8[0] != 0) {
        FMemory::Free();
      }
    }
    break;
  case 1:
    if (*(longlong *)(param_1 + 0x170) != 0) {
      local_f8[3] = 0xc;
      local_f8[2] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_f8 + 2,0);
      FGenericPlatformString::Memcpy(local_f8[2],L"buddyFadeIn",0x18);
      FUN_142088910(*(undefined8 *)(param_1 + 0x170),local_f8 + 2);
      if (local_f8[2] != 0) {
        FMemory::Free();
      }
    }
    *(undefined1 *)(param_1 + 0x1e0) = 0;
    break;
  case 2:
    if (*(longlong *)(param_1 + 0x170) != 0) {
      local_f8[8] = 0;
      local_f8[9] = 6;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_f8 + 8,0);
      FGenericPlatformString::Memcpy(local_f8[8],L"dying",0xc);
      FUN_142088910(*(undefined8 *)(param_1 + 0x170),local_f8 + 8);
      if (local_f8[8] != 0) {
        FMemory::Free();
      }
    }
    if ((*(longlong *)(param_1 + 0x1c0) != 0) && (*(longlong *)(param_1 + 0x1c8) != 0)) {
      plVar6 = *(longlong **)(param_1 + 0x1c8);
      fVar7 = (float)(**(code **)(*plVar6 + 0x60))(plVar6);
      uVar8 = (**(code **)(*plVar6 + 0x58))(plVar6);
      if (*(longlong *)(param_1 + 400) != 0) {
        FUN_142f0ead0(*(longlong *)(param_1 + 400),uVar8);
      }
      if (*(longlong *)(param_1 + 0x188) != 0) {
        FUN_142f0ead0(*(longlong *)(param_1 + 0x188),1.0 - fVar7);
      }
    }
    if ((*(longlong *)(param_1 + 0x300) == 0) || (*(longlong *)(param_1 + 0x308) == 0)) {
LAB_140f06739:
      uVar5 = FUN_142085870(param_1,local_78,L"dyingTextAnims.dyingText");
      FUN_142ede260(param_1 + 0x2f8,uVar5);
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_70 + 1;
        lVar3 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar1 = (int *)((longlong)local_70 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_70 + 8))(local_70,1);
          }
        }
      }
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x308) + 8);
      LOCK();
      iVar4 = *piVar1;
      if (iVar4 == 0) {
        *piVar1 = 0;
        iVar4 = 0;
      }
      UNLOCK();
      if (iVar4 < 1) goto LAB_140f06739;
    }
    if (*(longlong *)(param_1 + 0x300) == 0) {
      return;
    }
    if (*(longlong *)(param_1 + 0x308) == 0) {
      return;
    }
    piVar1 = (int *)(*(longlong *)(param_1 + 0x308) + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (iVar4 < 1) {
      return;
    }
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_38,L"IS DYING",L"GFxBuddyWidget",L"IsDyingText");
    UMistDebugEntityScreen::InspectEntity(param_1 + 0x2f8,uVar5,1,0);
    local_60 = local_30;
    goto LAB_140f067f7;
  case 3:
    if (*(longlong *)(param_1 + 0x170) != 0) {
      local_f8[0xb] = 9;
      local_f8[10] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_f8 + 10,0);
      FGenericPlatformString::Memcpy(local_f8[10],L"reviving",0x12);
      FUN_142088910(*(undefined8 *)(param_1 + 0x170),local_f8 + 10);
      if (local_f8[10] != 0) {
        FMemory::Free();
      }
    }
    if ((*(longlong *)(param_1 + 0x1c0) != 0) && (*(longlong *)(param_1 + 0x1c8) != 0)) {
      plVar6 = *(longlong **)(param_1 + 0x1c8);
      fVar7 = (float)(**(code **)(*plVar6 + 0x60))(plVar6);
      uVar8 = (**(code **)(*plVar6 + 0x58))(plVar6);
      if (*(longlong *)(param_1 + 400) != 0) {
        FUN_142f0ead0(*(longlong *)(param_1 + 400),uVar8);
      }
      if (*(longlong *)(param_1 + 0x188) != 0) {
        FUN_142f0ead0(*(longlong *)(param_1 + 0x188),1.0 - fVar7);
      }
    }
    break;
  case 4:
    if (*(longlong *)(param_1 + 0x170) != 0) {
      local_f8[4] = 0;
      local_f8[5] = 8;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_f8 + 4,0);
      FGenericPlatformString::Memcpy(local_f8[4],L"respawn",0x10);
      FUN_142088cf0(*(undefined8 *)(param_1 + 0x170),local_f8 + 4);
      if (local_f8[4] != 0) {
        FMemory::Free();
      }
    }
    if ((*(longlong *)(param_1 + 0x300) == 0) || (*(longlong *)(param_1 + 0x308) == 0)) {
LAB_140f064c8:
      uVar5 = FUN_142085870(param_1,local_88,L"dyingTextAnims.dyingText");
      FUN_142ede260(param_1 + 0x2f8,uVar5);
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_80 + 1;
        lVar3 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_80)(local_80);
          LOCK();
          piVar1 = (int *)((longlong)local_80 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_80 + 8))(local_80,1);
          }
        }
      }
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x308) + 8);
      LOCK();
      iVar4 = *piVar1;
      if (iVar4 == 0) {
        *piVar1 = 0;
        iVar4 = 0;
      }
      UNLOCK();
      if (iVar4 < 1) goto LAB_140f064c8;
    }
    if (*(longlong *)(param_1 + 0x300) == 0) {
      return;
    }
    if (*(longlong *)(param_1 + 0x308) == 0) {
      return;
    }
    piVar1 = (int *)(*(longlong *)(param_1 + 0x308) + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (iVar4 < 1) {
      return;
    }
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_68,L"IS RESPAWNING",L"GFxBuddyWidget",L"IsRespawningText");
    UMistDebugEntityScreen::InspectEntity(param_1 + 0x2f8,uVar5,1,0);
LAB_140f067f7:
    plVar6 = local_60;
    if (local_60 != (longlong *)0x0) {
LAB_140f06800:
      LOCK();
      plVar2 = plVar6 + 1;
      lVar3 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
    break;
  case 5:
    if (*(longlong *)(param_1 + 0x170) != 0) {
      local_f8[0xd] = 0xd;
      local_f8[0xc] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_f8 + 0xc,0);
      FGenericPlatformString::Memcpy(local_f8[0xc],L"respawnTimer",0x1a);
      FUN_142088910(*(undefined8 *)(param_1 + 0x170),local_f8 + 0xc);
      if (local_f8[0xc] != 0) {
        FMemory::Free();
      }
    }
    FUN_140f11450(param_1);
    break;
  case 6:
    if (*(longlong *)(param_1 + 0x170) != 0) {
      local_f8[6] = 0;
      local_f8[7] = 8;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_f8 + 6,0);
      FGenericPlatformString::Memcpy(local_f8[6],L"respawn",0x10);
      FUN_142088cf0(*(undefined8 *)(param_1 + 0x170),local_f8 + 6);
      if (local_f8[6] != 0) {
        FMemory::Free();
      }
    }
    if (*(longlong *)(param_1 + 0x300) == 0) {
      return;
    }
    if (*(longlong *)(param_1 + 0x308) == 0) {
      return;
    }
    piVar1 = (int *)(*(longlong *)(param_1 + 0x308) + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (iVar4 < 1) {
      return;
    }
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_50,L"IS SPECTATING",L"GFxBuddyWidget",L"IsSpectatingText");
    UMistDebugEntityScreen::InspectEntity(param_1 + 0x2f8,uVar5,1,0);
    plVar6 = local_48;
    if (local_48 == (longlong *)0x0) {
      return;
    }
    goto LAB_140f06800;
  }
  return;
}



// FUNCTION 140f069b0 FUN_140f069b0 body=249 status=ok
// SIG undefined FUN_140f069b0(void)

void FUN_140f069b0(longlong param_1)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  FUN_140f054a0();
  lVar5 = *(longlong *)(param_1 + 0x20);
  if (lVar5 != 0) {
    lVar4 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (cVar3 = FUN_140bc9f00(lVar5), cVar3 != '\0')) {
      FUN_140ee3890(param_1);
      goto LAB_140f06a41;
    }
  }
  lVar5 = *(longlong *)(param_1 + 0x28);
  lVar4 = (longlong)*(int *)(param_1 + 0x30) * 0x10 + lVar5;
  for (; lVar5 != lVar4; lVar5 = lVar5 + 0x10) {
    FWeakObjectPtr::IsValid(lVar5);
  }
LAB_140f06a41:
  lVar5 = *(longlong *)(param_1 + 0x28);
  iVar7 = 0;
  lVar6 = (longlong)*(int *)(param_1 + 0x30) * 0x10 + lVar5;
  lVar4 = lVar5;
  if (lVar5 != lVar6) {
    do {
      iVar2 = iVar7 + 1;
      if (*(longlong *)(lVar4 + 8) == 0) {
        iVar2 = iVar7;
      }
      iVar7 = iVar2;
      lVar4 = lVar4 + 0x10;
    } while (lVar4 != lVar6);
    for (; lVar5 != lVar6; lVar5 = lVar5 + 0x10) {
      if (*(longlong *)(lVar5 + 8) != 0) {
        FUN_140f061b0(*(longlong *)(lVar5 + 8),iVar7);
      }
    }
  }
  return;
}



// FUNCTION 140f06ab0 FUN_140f06ab0 body=229 status=ok
// SIG undefined FUN_140f06ab0(void)

void FUN_140f06ab0(longlong param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined4 local_res10 [2];
  undefined1 *local_68 [2];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  
  local_res10[0] = 0xffffffff;
  if (*(longlong *)(param_1 + 0x5b0) != 0) {
    FUN_14170c210(local_res10);
  }
  FWeakObjectPtr::operator=(&local_res8,param_1);
  uVar2 = local_res10[0];
  local_res10[0] = 0xffffffff;
  local_38 = 0;
  local_28 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x20,local_58);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144606070;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_res8;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_resc;
    *(undefined1 *)(puVar1 + 3) = param_2;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = uVar2;
    uVar2 = 0xffffffff;
  }
  local_68[0] = &LAB_140ee0840;
  FUN_14208c4f0(param_1,local_68);
  FUN_1416f8340(uVar2);
  FUN_1416f8340(local_res10[0]);
  return;
}



// FUNCTION 140f06ba0 FUN_140f06ba0 body=360 status=ok
// SIG undefined FUN_140f06ba0(void)

void FUN_140f06ba0(longlong param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  longlong local_38 [2];
  
  lVar6 = 0;
  iVar7 = *(int *)(param_1 + 0x184) + -1 + *(int *)(param_1 + 0xec);
  if (*(longlong *)(param_1 + 0x170) != 0) {
    iVar2 = FUN_142eb7440();
    if (iVar2 + -1 < iVar7) {
      iVar7 = FUN_142eb7440(*(undefined8 *)(param_1 + 0x170));
      iVar7 = iVar7 + -1;
    }
    iVar2 = *(int *)(param_1 + 0x184);
    if (iVar2 <= iVar7) {
      do {
        lVar3 = FUN_142eb6a30(*(undefined8 *)(param_1 + 0x170),iVar2);
        if (lVar3 == 0) {
LAB_140f06c68:
          local_38[0] = lVar6;
        }
        else {
          lVar4 = FUN_141324a80();
          if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          local_38[0] = lVar3;
          if (!bVar1) goto LAB_140f06c68;
        }
        lVar3 = lVar6;
        if (*(int *)(param_2 + 8) != 0) {
          plVar5 = (longlong *)param_2[6];
          if ((longlong *)param_2[6] == (longlong *)0x0) {
            plVar5 = param_2 + 2;
          }
          if (plVar5 != (longlong *)0x0) {
            lVar3 = (**(code **)(*plVar5 + 8))();
          }
        }
        (*(code *)*param_2)(lVar3,local_38);
        iVar2 = iVar2 + 1;
      } while (iVar2 <= iVar7);
    }
  }
  if (*(int *)(param_2 + 8) != 0) {
    plVar5 = (longlong *)param_2[6];
    if ((longlong *)param_2[6] == (longlong *)0x0) {
      plVar5 = param_2 + 2;
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (param_2[6] == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 140f06d10 FUN_140f06d10 body=245 status=ok
// SIG undefined FUN_140f06d10(void)

void FUN_140f06d10(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar1 = *(longlong *)(DAT_146b33f38 + 200);
  lVar5 = FWeakObjectPtr::Get(param_1 + 0x5d8);
  if (lVar5 != 0) {
    lVar6 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (lVar1 != 0)) {
      iVar3 = FUN_140e827f0(lVar5 + 0x1b10,0);
      uVar4 = FUN_140a32b50(lVar1,iVar3);
      *(undefined4 *)(param_1 + 0x880) = uVar4;
      uVar4 = FUN_140a32b50(lVar1,iVar3 + 1);
      *(undefined4 *)(param_1 + 0x87c) = uVar4;
      uVar4 = FUN_140e7f880(lVar5 + 0x1b10,0);
      goto LAB_140f06de8;
    }
  }
  *(undefined8 *)(param_1 + 0x87c) = 100;
  uVar4 = 0;
LAB_140f06de8:
  *(undefined4 *)(param_1 + 0x884) = uVar4;
  FUN_140f07020(param_1);
  return;
}



// FUNCTION 140f06e10 FUN_140f06e10 body=145 status=ok
// SIG undefined FUN_140f06e10(void)

void FUN_140f06e10(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x730);
  if (lVar1 != 0) {
    uVar2 = FUN_140ee6b10();
    FUN_142f0ead0(lVar1,uVar2);
  }
  lVar1 = *(longlong *)(param_1 + 2000);
  if ((lVar1 != 0) && (*(char *)(param_1 + 0x839) != '\x02')) {
    uVar2 = FUN_140ee6aa0(param_1);
    FUN_142f0ead0(lVar1,uVar2);
  }
  lVar1 = *(longlong *)(param_1 + 0x738);
  if ((lVar1 != 0) && (*(char *)(param_1 + 0x83a) != '\x02')) {
    uVar2 = FUN_140ee6bc0(param_1);
    FUN_142f0ead0(lVar1,uVar2);
  }
  FUN_140f09220(param_1,*(undefined4 *)(param_1 + 0x840));
  return;
}



// FUNCTION 140f06eb0 FUN_140f06eb0 body=356 status=ok
// SIG undefined FUN_140f06eb0(void)

void FUN_140f06eb0(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x30);
  if (cVar2 != '\0') {
    if (*(char *)(param_1 + 0x191) == '\0') {
      uVar1 = FWeakObjectPtr::Get(param_1 + 0x30);
      FUN_1411f57e0(uVar1);
      local_28 = 0;
      local_18 = 0;
      puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_48);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &PTR_FUN_143f77b70;
        puVar3[1] = param_1;
      }
      local_58[0] = &LAB_140ee0e30;
      FUN_140f06ba0(param_1,local_58);
      uVar1 = FWeakObjectPtr::Get(param_1 + 0x30);
      FUN_1411dba20(uVar1);
      local_28 = 0;
      local_18 = 0;
      puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_48);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &PTR_FUN_143f77b70;
        puVar3[1] = param_1;
      }
      local_58[0] = &LAB_140ee0e30;
      FUN_140f06ba0(param_1,local_58);
      uVar1 = FWeakObjectPtr::Get(param_1 + 0x30);
      FUN_1411f5630(uVar1);
    }
    else {
      local_28 = 0;
      local_18 = 0;
      puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_48);
      if (puVar3 != (undefined8 *)0x0) {
        puVar3[1] = param_1;
        *puVar3 = &PTR_FUN_143f77b70;
      }
      local_58[0] = &LAB_140ee0e30;
      FUN_140f06ba0(param_1,local_58);
      *(undefined1 *)(param_1 + 0x192) = 1;
    }
  }
  return;
}



// FUNCTION 140f07020 FUN_140f07020 body=819 status=ok
// SIG undefined FUN_140f07020(void)

void FUN_140f07020(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong local_78 [12];
  
  lVar6 = FWeakObjectPtr::Get(param_1 + 0x5d8);
  if (lVar6 == 0) {
LAB_140f07083:
    lVar6 = 0;
  }
  else {
    lVar7 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_140f07083;
  }
  if (*(longlong *)(param_1 + 0x728) == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x7b0) == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x7b8) == 0) {
    return;
  }
  piVar1 = (int *)(*(longlong *)(param_1 + 0x7b8) + 8);
  LOCK();
  iVar5 = *piVar1;
  if (iVar5 == 0) {
    *piVar1 = 0;
    iVar5 = 0;
  }
  UNLOCK();
  if (iVar5 < 1) {
    return;
  }
  if (lVar6 == 0) {
    return;
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar7 = *(longlong *)(DAT_146b33f38 + 200);
  cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x830);
  if (cVar4 == '\0') {
LAB_140f07128:
    bVar2 = false;
  }
  else {
    plVar8 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x830);
    iVar5 = (**(code **)(*plVar8 + 0x468))(plVar8);
    if (iVar5 == 0) goto LAB_140f07128;
    bVar2 = true;
  }
  if ((lVar7 == 0) || (iVar5 = FUN_140a33820(lVar7), *(int *)(param_1 + 0x840) < iVar5)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  iVar5 = FUN_1404cf9f0(lVar6 + 0x1b10);
  if (iVar5 == 0) {
    if (bVar2) {
      if (bVar3) {
        local_78[10] = 0;
        local_78[0xb] = 9;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_78 + 10,0);
        FGenericPlatformString::Memcpy(local_78[10],L"guardian",0x12);
        FUN_142088cf0(*(undefined8 *)(param_1 + 0x728),local_78 + 10);
        lVar6 = local_78[10];
      }
      else {
        local_78[8] = 0;
        local_78[9] = 5;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_78 + 8,0);
        FGenericPlatformString::Memcpy(local_78[8],L"both",10);
        FUN_142088cf0(*(undefined8 *)(param_1 + 0x728),local_78 + 8);
        lVar6 = local_78[8];
      }
      if (lVar6 != 0) {
        FMemory::Free();
      }
      uVar9 = 0;
      goto LAB_140f07323;
    }
    local_78[6] = 0;
    local_78[7] = 7;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_78 + 6,0);
    FGenericPlatformString::Memcpy(local_78[6],L"normal",0xe);
    FUN_142088cf0(*(undefined8 *)(param_1 + 0x728),local_78 + 6);
    lVar6 = local_78[6];
  }
  else {
    if (bVar2) {
      if (bVar3) {
        local_78[4] = 0;
        local_78[5] = 0x12;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_78 + 4,0);
        FGenericPlatformString::Memcpy(local_78[4],L"vaultCardGuardian",0x24);
        FUN_142088cf0(*(undefined8 *)(param_1 + 0x728),local_78 + 4);
        lVar6 = local_78[4];
      }
      else {
        local_78[2] = 0;
        local_78[3] = 10;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_78 + 2,0);
        FGenericPlatformString::Memcpy(local_78[2],L"vaultCard",0x14);
        FUN_142088cf0(*(undefined8 *)(param_1 + 0x728),local_78 + 2);
        lVar6 = local_78[2];
      }
      if (lVar6 != 0) {
        FMemory::Free();
      }
      uVar9 = 0;
      goto LAB_140f07323;
    }
    local_78[0] = 0;
    local_78[1] = 0xc;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_78,0);
    FGenericPlatformString::Memcpy(local_78[0],L"vaultCardXp",0x18);
    FUN_142088cf0(*(undefined8 *)(param_1 + 0x728),local_78);
    lVar6 = local_78[0];
  }
  if (lVar6 != 0) {
    FMemory::Free();
  }
  uVar9 = 1;
LAB_140f07323:
  FUN_142f10d20(param_1 + 0x7a8,uVar9);
  return;
}



// FUNCTION 140f07370 FUN_140f07370 body=271 status=ok
// SIG undefined FUN_140f07370(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f07370(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = &LAB_140ee0cf0;
  uVar2 = FUN_1420849a0(param_1,local_68,local_b8);
  FUN_14208c260(param_1,uVar2);
  if (local_28 != 0) {
    plVar3 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar3 = local_38;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_78 != 0) {
    plVar3 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar3 = local_88;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140f07480 FUN_140f07480 body=271 status=ok
// SIG undefined FUN_140f07480(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f07480(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = &LAB_140ee0bd0;
  uVar2 = FUN_1420849a0(param_1,local_68,local_b8);
  FUN_14208c260(param_1,uVar2);
  if (local_28 != 0) {
    plVar3 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar3 = local_38;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_78 != 0) {
    plVar3 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar3 = local_88;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140f07590 FUN_140f07590 body=271 status=ok
// SIG undefined FUN_140f07590(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f07590(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = &LAB_140ee0830;
  uVar2 = FUN_1420849a0(param_1,local_68,local_b8);
  FUN_14208c260(param_1,uVar2);
  if (local_28 != 0) {
    plVar3 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar3 = local_38;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_78 != 0) {
    plVar3 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar3 = local_88;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140f076a0 FUN_140f076a0 body=271 status=ok
// SIG undefined FUN_140f076a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f076a0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = &LAB_140ee1080;
  uVar2 = FUN_1420849a0(param_1,local_68,local_b8);
  FUN_14208c260(param_1,uVar2);
  if (local_28 != 0) {
    plVar3 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar3 = local_38;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_78 != 0) {
    plVar3 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar3 = local_88;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140f077b0 FUN_140f077b0 body=276 status=ok
// SIG undefined FUN_140f077b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f077b0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  FUN_140f08b10();
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = &LAB_140ee0f30;
  uVar2 = FUN_1420849a0(param_1,local_68,local_b8);
  FUN_14208c260(param_1,uVar2);
  if (local_28 != 0) {
    plVar3 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar3 = local_38;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_78 != 0) {
    plVar3 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar3 = local_88;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140f078d0 FUN_140f078d0 body=474 status=ok
// SIG undefined FUN_140f078d0(void)

void FUN_140f078d0(longlong *param_1,int param_2,int param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  
  if (param_3 != 0) {
    plVar7 = (longlong *)(*param_1 + 0x70 + (longlong)param_2 * 0xb8);
    iVar6 = param_3;
    do {
      if (plVar7[2] != 0) {
        FMemory::Free();
      }
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar3 = (longlong *)plVar7[-3];
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
      plVar3 = (longlong *)plVar7[-6];
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
      plVar3 = (longlong *)plVar7[-10];
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
      plVar3 = (longlong *)plVar7[-0xd];
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
      plVar7 = plVar7 + 0x17;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    iVar6 = (int)param_1[1];
    iVar5 = (iVar6 - param_2) - param_3;
    if (iVar5 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0xb8),
                 (void *)((longlong)(param_2 + param_3) * 0xb8 + *param_1),(longlong)iVar5 * 0xb8);
      iVar6 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar6 - param_3;
    if (param_4 != '\0') {
      TArray<FOnlineSessionSearchResult,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 140f07ab0 FUN_140f07ab0 body=717 status=ok
// SIG undefined FUN_140f07ab0(void)

void FUN_140f07ab0(longlong param_1,int *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar11;
  undefined1 local_138 [8];
  longlong *local_130;
  undefined4 local_120;
  undefined1 local_118 [8];
  longlong *local_110;
  undefined1 local_100 [8];
  longlong *local_f8;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined2 local_e0;
  undefined1 local_de;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined1 local_a0 [64];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_2c;
  ulonglong uVar10;
  
  uVar10 = 0;
  uVar7 = 0xffffffff;
  uVar11 = uVar10;
  if (0 < *(int *)(param_1 + 0x168)) {
    do {
      lVar8 = *(longlong *)(param_1 + 0x160) + uVar11;
      if (*(int *)(lVar8 + 0xd8) == *param_2) {
        _guard_xfg_dispatch_icall_nop(local_138,0,0x110);
        uVar5 = FUN_1404b03b0();
        FText::FText(local_138,uVar5);
        local_120 = 0;
        uVar5 = FUN_1404b03b0();
        FText::FText(local_118,uVar5);
        FText::FText(local_100);
        local_e8 = 0;
        local_c0 = 0;
        local_e4 = 0x1000000;
        local_e0 = 0;
        local_de = 0;
        local_dc = 0xffffffff;
        local_d8 = 0;
        local_b8 = 0;
        local_b0 = 0;
        local_d0 = 0xffffffff;
        local_cc = 0;
        local_a8 = 0;
        FUN_142fde510(local_a0);
        local_60 = 0xffffffffffffffff;
        uStack_58 = 0xffffffff00000000;
        local_40 = 0;
        local_50 = 0xffffffff00000000;
        uStack_48 = 0xffffffff00000000;
        local_38 = 0;
        local_30 = 0;
        local_2c = 1;
        FUN_140e9ca30(lVar8);
        if (local_b8 != 0) {
          FMemory::Free();
        }
        plVar6 = local_f8;
        if (local_f8 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_f8 + 1;
          lVar8 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_f8)(local_f8);
            LOCK();
            piVar2 = (int *)((longlong)plVar6 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar6 + 8))(plVar6);
            }
          }
        }
        plVar6 = local_110;
        if (local_110 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_110 + 1;
          lVar8 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_110)(local_110);
            LOCK();
            piVar2 = (int *)((longlong)plVar6 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar6 + 8))(plVar6);
            }
          }
        }
        plVar6 = local_130;
        uVar7 = uVar10;
        if (local_130 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_130 + 1;
          lVar8 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_130)(local_130);
            LOCK();
            piVar2 = (int *)((longlong)plVar6 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar6 + 8))(plVar6);
            }
          }
        }
      }
      uVar9 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar9;
      uVar11 = uVar11 + 0x110;
    } while ((int)uVar9 < *(int *)(param_1 + 0x168));
    if ((-1 < (int)uVar7) && ((int)uVar7 < *(int *)(param_1 + 0x168))) {
      bVar4 = true;
      goto LAB_140f07ce5;
    }
  }
  bVar4 = false;
LAB_140f07ce5:
  if ((bVar4) && (*(longlong *)(param_1 + 0x170) != 0)) {
    plVar6 = (longlong *)FUN_142eb6a30(*(longlong *)(param_1 + 0x170),uVar7);
    if (plVar6 != (longlong *)0x0) {
      lVar8 = FUN_141324a80();
      if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
          lVar8 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        (**(code **)(*plVar6 + 0x330))
                  (plVar6,(longlong)(int)uVar7 * 0x110 + *(longlong *)(param_1 + 0x160));
        (**(code **)(*plVar6 + 0x3c0))(plVar6);
      }
    }
  }
  return;
}



// FUNCTION 140f07d80 FUN_140f07d80 body=23 status=ok
// SIG undefined FUN_140f07d80(void)

void FUN_140f07d80(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x170) != 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x170) + 0x274) = 0xffffffff;
  }
  return;
}



// FUNCTION 140f07da0 FUN_140f07da0 body=29 status=ok
// SIG undefined FUN_140f07da0(void)

void FUN_140f07da0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x170);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140f07db5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x2f8))(plVar1,0,0);
    return;
  }
  return;
}



// FUNCTION 140f07dc0 FUN_140f07dc0 body=130 status=ok
// SIG undefined FUN_140f07dc0(void)

void FUN_140f07dc0(longlong *param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x110,0);
    iVar3 = (int)(uVar1 / 0x110);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if ((iVar3 != param_3) && ((*param_1 != 0 || (iVar3 != 0)))) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x110,0);
    *param_1 = lVar2;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar3;
  return;
}



// FUNCTION 140f07e50 FUN_140f07e50 body=117 status=ok
// SIG undefined FUN_140f07e50(void)

void FUN_140f07e50(undefined4 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  
  if (*(char *)(param_1 + 2) != '\0') {
    lVar1 = FUN_1416f8720(param_1[1]);
    lVar2 = FUN_1416f8720(*param_1);
    if (lVar1 != lVar2) {
      puVar4 = param_1 + 1;
      if (*(char *)(param_1 + 2) == '\0') {
        puVar4 = param_1;
      }
      uVar3 = FUN_1416f8720(*puVar4);
      FUN_14170c210(param_1,uVar3);
    }
  }
  if (*(char *)(param_1 + 2) == '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 2) = 0;
  FUN_1416f8340(param_1[1]);
  return;
}



// FUNCTION 140f07ed0 FUN_140f07ed0 body=453 status=ok
// SIG undefined FUN_140f07ed0(void)

void FUN_140f07ed0(void **param_1)

{
  void *pvVar1;
  int iVar2;
  char cVar3;
  void **ppvVar4;
  void *_Src;
  int iVar5;
  longlong lVar6;
  void *local_28;
  int local_20;
  int local_1c;
  
  cVar3 = FUN_140eeae50();
  if (cVar3 != '\0') {
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 2));
    local_20 = *(int *)(param_1 + 1);
    lVar6 = (longlong)local_20;
    pvVar1 = *param_1;
    local_28 = (void *)0x0;
    if (local_20 == 0) {
      local_1c = 0;
      _Src = (void *)0x0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_28,local_20,0);
      _Src = local_28;
      _guard_xfg_dispatch_icall_nop(local_28,pvVar1,lVar6 * 2);
    }
    iVar2 = local_1c;
    iVar5 = local_20;
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 2));
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 6));
    cVar3 = *(char *)(param_1 + 5);
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 6));
    if (cVar3 != '\0') {
      AcquireSRWLockShared((PSRWLOCK)(param_1 + 6));
      ppvVar4 = &local_28;
      if (*(char *)(param_1 + 5) != '\0') {
        ppvVar4 = param_1 + 3;
      }
      if (&local_28 != ppvVar4) {
        local_20 = *(int *)(ppvVar4 + 1);
        lVar6 = (longlong)local_20;
        pvVar1 = *ppvVar4;
        if ((local_20 != 0) || (iVar5 = local_20, iVar2 != 0)) {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_28,local_20,iVar2);
          _Src = local_28;
          _guard_xfg_dispatch_icall_nop(local_28,pvVar1,lVar6 * 2);
          iVar5 = local_20;
        }
      }
      ReleaseSRWLockShared((PSRWLOCK)(param_1 + 6));
    }
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 2));
    if (param_1 != &local_28) {
      *(int *)(param_1 + 1) = iVar5;
      if ((iVar5 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_1,iVar5);
        _guard_xfg_dispatch_icall_nop(*param_1,_Src,(longlong)iVar5 * 2);
      }
    }
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 2));
    if (_Src != (void *)0x0) {
      FMemory::Free(_Src);
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 6));
  if ((*(char *)(param_1 + 5) != '\0') &&
     (*(undefined1 *)(param_1 + 5) = 0, param_1[3] != (void *)0x0)) {
    FMemory::Free();
  }
                    /* WARNING: Could not recover jumptable at 0x000140f0808e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 6));
  return;
}



// FUNCTION 140f080a0 FUN_140f080a0 body=34 status=ok
// SIG undefined FUN_140f080a0(void)

void FUN_140f080a0(longlong param_1)

{
  FUN_140f06eb0();
  *(undefined1 *)(param_1 + 0x192) = 0;
  *(undefined1 *)(param_1 + 400) = 0;
  return;
}



// FUNCTION 140f080d0 FUN_140f080d0 body=23 status=ok
// SIG undefined FUN_140f080d0(void)

void FUN_140f080d0(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x170) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140f080df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x170) + 0x2c8))();
    return;
  }
  return;
}



// FUNCTION 140f080f0 FUN_140f080f0 body=106 status=ok
// SIG undefined FUN_140f080f0(void)

void FUN_140f080f0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x30));
  plVar1 = (longlong *)(param_1 + 0x18);
  if (param_2 != plVar1) {
    if (*(char *)(param_1 + 0x28) != '\0') {
      *(undefined1 *)(param_1 + 0x28) = 0;
      if (*plVar1 != 0) {
        FMemory::Free();
      }
    }
    FString::FString(plVar1,param_2);
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x000140f08153. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x30));
  return;
}



// FUNCTION 140f08160 FUN_140f08160 body=7 status=ok
// SIG undefined FUN_140f08160(void)

void FUN_140f08160(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x254) = param_2;
  return;
}



// FUNCTION 140f08170 FUN_140f08170 body=39 status=ok
// SIG undefined FUN_140f08170(void)

void FUN_140f08170(longlong param_1,undefined4 *param_2)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (*(longlong *)(param_1 + 0x670) != 0) {
    local_18 = *param_2;
    uStack_14 = param_2[1];
    uStack_10 = param_2[2];
    uStack_c = param_2[3];
    FUN_142f0cf50(*(longlong *)(param_1 + 0x670),&local_18);
  }
  return;
}



// FUNCTION 140f081a0 FUN_140f081a0 body=54 status=ok
// SIG undefined FUN_140f081a0(void)

void FUN_140f081a0(longlong *param_1,char param_2)

{
  if (param_2 != (char)param_1[0xf0]) {
    *(char *)(param_1 + 0xf0) = param_2;
    if (param_2 == '\0') {
      if (0 < (int)param_1[0xef]) {
                    /* WARNING: Could not recover jumptable at 0x000140f081ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x578))(param_1,0);
        return;
      }
    }
    else if ((int)param_1[0xcb] == 0) {
      FUN_140eecd70();
      return;
    }
  }
  return;
}



// FUNCTION 140f081e0 FUN_140f081e0 body=401 status=ok
// SIG undefined FUN_140f081e0(void)

void FUN_140f081e0(longlong param_1,byte param_2,byte param_3,int param_4,int param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  wchar_t *_Src;
  float fVar6;
  float fVar7;
  
  _Src = L"";
  *(byte *)(param_1 + 0x91) = param_3 ^ 1;
  puVar1 = (undefined8 *)(param_1 + 0x80);
  *(byte *)(param_1 + 0xa0) = param_2;
  if (param_2 != 0) {
    _Src = L"challengeComplete";
  }
  if ((wchar_t *)*puVar1 != _Src) {
    iVar3 = 0;
    iVar4 = iVar3;
    if (*_Src != L'\0') {
      lVar5 = -1;
      do {
        lVar5 = lVar5 + 1;
      } while (_Src[lVar5] != L'\0');
      iVar4 = (int)lVar5 + 1;
    }
    *(undefined4 *)(param_1 + 0x88) = 0;
    if (*(int *)(param_1 + 0x8c) != iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar1,iVar4);
      iVar3 = *(int *)(param_1 + 0x88);
    }
    *(int *)(param_1 + 0x88) = iVar3 + iVar4;
    if (*(int *)(param_1 + 0x8c) < iVar3 + iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar1);
    }
    if (iVar4 != 0) {
      _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar4 * 2);
    }
  }
  if (param_5 < 2) {
    *(undefined1 *)(param_1 + 0x92) = 1;
    if (param_3 == 0) {
      param_5 = 100;
      uVar2 = -(uint)(param_2 != 0) & 100;
    }
    else {
      uVar2 = (uint)param_2;
      param_5 = 1;
    }
    *(uint *)(param_1 + 0x98) = uVar2;
  }
  else {
    *(undefined1 *)(param_1 + 0x92) = 0;
    if ((param_2 != 0) || (param_5 <= param_4)) {
      param_4 = param_5;
    }
    *(int *)(param_1 + 0x98) = param_4;
  }
  *(int *)(param_1 + 0x9c) = param_5;
  fVar7 = 0.0;
  if (((*(char *)(param_1 + 0x91) == '\0') &&
      (fVar6 = (float)(*(int *)(param_1 + 0x98) + -1) / (float)param_5, 0.0 <= fVar6)) &&
     (fVar7 = fVar6, 1.0 <= fVar6)) {
    fVar7 = 1.0;
  }
  *(float *)(param_1 + 0x94) = fVar7;
  if (*(char *)(param_1 + 0xa0) != '\0') {
    if (0.95 <= fVar7) {
      fVar7 = 0.95;
    }
    *(float *)(param_1 + 0x94) = fVar7;
  }
  return;
}



// FUNCTION 140f08380 FUN_140f08380 body=286 status=ok
// SIG undefined FUN_140f08380(void)

void FUN_140f08380(longlong *param_1,float param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  if (*param_1 != 0) {
    iVar5 = FUN_14203aec0(*param_1,"totalFrames");
    iVar6 = (int)ROUND((float)iVar5 * param_2 + (float)iVar5 * param_2 + 0.5) >> 1;
    if (iVar6 < 1) {
      iVar5 = 1;
    }
    else if (iVar6 < iVar5) {
      iVar5 = iVar6;
    }
    plVar3 = (longlong *)param_1[1];
    lVar4 = *param_1;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    if (lVar4 != 0) {
      iVar6 = FUN_142039580(lVar4);
      if (iVar6 != iVar5) {
        FUN_14203e3e0(lVar4,iVar5);
      }
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
  }
  plVar3 = (longlong *)param_1[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return;
}



// FUNCTION 140f084a0 FUN_140f084a0 body=17 status=ok
// SIG undefined FUN_140f084a0(void)

void FUN_140f084a0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  char cVar5;
  longlong *plVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  longlong lStackX_10;
  
  plVar1 = *(longlong **)(param_1 + 0x1b0);
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  *(undefined1 *)(plVar1 + 0x60) = 0;
  if ((plVar1[0x5f] != 0) &&
     (plVar6 = (longlong *)FWeakObjectPtr::Get(plVar1[0x5f] + 0x378), plVar1 == plVar6)) {
    lVar2 = plVar1[0x5f];
    FWeakObjectPtr::operator=(lVar2 + 0x378,0);
    *(undefined8 *)(lVar2 + 0x380) = 0;
  }
  plVar1[0x5f] = param_2;
  if (param_2 != 0) {
    pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnScrollBarPositionUpdated",L"::");
    pwVar4 = (wchar_t *)0x0;
    while (pwVar3 = pwVar7, pwVar3 != (wchar_t *)0x0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar4 = pwVar3;
    }
    FName::FName(&lStackX_10,pwVar4 + 2,1);
    lVar2 = plVar1[0x5f];
    FWeakObjectPtr::operator=(lVar2 + 0x378,plVar1);
    *(longlong *)(lVar2 + 0x380) = lStackX_10;
    if ((lStackX_10 != 0) && (lVar8 = FWeakObjectPtr::Get(lVar2 + 0x378), lVar8 != 0)) {
      UObject::FindFunction(lVar8,*(undefined8 *)(lVar2 + 0x380));
    }
  }
  cVar5 = FUN_142eb3360();
  if (cVar5 == '\0') {
    (**(code **)(*plVar1 + 0x338))(plVar1);
  }
  else {
    LOCK();
    *(undefined4 *)((longlong)plVar1 + 0x30c) = 1;
    UNLOCK();
  }
  cVar5 = FUN_142eb34c0();
  if (cVar5 != '\0') {
    LOCK();
    *(undefined4 *)((longlong)plVar1 + 0x314) = 1;
    UNLOCK();
    return;
  }
  FUN_142edbed0(plVar1);
  return;
}



// FUNCTION 140f084c0 FUN_140f084c0 body=27 status=ok
// SIG undefined FUN_140f084c0(void)

void FUN_140f084c0(undefined8 param_1)

{
  FUN_140a678a0();
  FUN_140efbc30(param_1);
  return;
}



// FUNCTION 140f084e0 FUN_140f084e0 body=42 status=ok
// SIG undefined FUN_140f084e0(void)

void FUN_140f084e0(undefined8 param_1,undefined1 param_2)

{
  FUN_140a678a0();
  FUN_140f06ab0(param_1,param_2);
  return;
}



// FUNCTION 140f08510 FUN_140f08510 body=9 status=ok
// SIG undefined FUN_140f08510(void)

void FUN_140f08510(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x244) = param_2;
  return;
}



// FUNCTION 140f08520 FUN_140f08520 body=356 status=ok
// SIG undefined FUN_140f08520(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f08520(longlong *param_1,char param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  if (*(char *)((longlong)param_1 + 0x649) != param_2) {
    *(char *)((longlong)param_1 + 0x649) = param_2;
    cVar1 = FUN_142ebdc00();
    if ((cVar1 != '\0') && (cVar1 = FUN_142eba870(param_1), cVar1 == '\0')) {
      if (*(char *)((longlong)param_1 + 0x649) == '\0') {
        return;
      }
      local_88 = (longlong *)0x0;
      local_78 = 0;
      puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
      if (puVar2 != (undefined8 *)0x0) {
        puVar2[1] = param_1;
        *puVar2 = &PTR_FUN_143f77b70;
      }
      local_b8[0] = &LAB_140ee0d10;
      uVar3 = FUN_1420849a0(param_1,local_68,local_b8);
      FUN_14208d480(param_1,uVar3);
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
      if (local_78 != 0) {
        plVar4 = local_a8;
        if (local_88 != (longlong *)0x0) {
          plVar4 = local_88;
        }
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x10))(plVar4,0);
        }
      }
      if (local_88 != (longlong *)0x0) {
        FMemory::Free();
      }
      FUN_142eb05b0(param_1);
      return;
    }
    (**(code **)(*param_1 + 0x5d8))(param_1);
  }
  return;
}



// FUNCTION 140f08690 FUN_140f08690 body=24 status=ok
// SIG undefined FUN_140f08690(void)

void FUN_140f08690(longlong param_1,undefined1 param_2)

{
  undefined1 local_res10 [24];
  
  if (local_res10 != (undefined1 *)(param_1 + 0x6cc)) {
    *(undefined1 *)(param_1 + 0x6cc) = param_2;
    *(undefined1 *)(param_1 + 0x6cd) = 1;
  }
  return;
}



// FUNCTION 140f086b0 FUN_140f086b0 body=358 status=ok
// SIG undefined FUN_140f086b0(void)

void FUN_140f086b0(longlong param_1,int param_2,undefined1 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 *local_68 [2];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  
  if (param_2 < 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x278);
    if (param_2 < *(int *)(param_1 + 0x278)) {
      iVar4 = param_2;
    }
  }
  iVar3 = 0;
  iVar8 = 0;
  if (0 < *(int *)(param_1 + 0x270)) {
    lVar6 = 0;
    iVar7 = *(int *)(param_1 + 0x1c8);
    iVar5 = iVar4;
    do {
      *(int *)(lVar6 + *(longlong *)(param_1 + 0x268)) = iVar7 % 10;
      *(int *)(lVar6 + 4 + *(longlong *)(param_1 + 0x268)) = iVar5 % 10;
      iVar1 = iVar3 + 1;
      if (iVar5 / 10 < 1) {
        iVar1 = iVar3;
      }
      iVar3 = iVar1;
      iVar8 = iVar8 + 1;
      lVar6 = lVar6 + 8;
      iVar7 = iVar7 / 10;
      iVar5 = iVar5 / 10;
    } while (iVar8 < *(int *)(param_1 + 0x270));
  }
  if (*(char *)(param_1 + 0x253) != '\0') {
    iVar3 = *(int *)(param_1 + 0x264);
  }
  FWeakObjectPtr::operator=(&local_res8,param_1);
  local_38 = 0;
  local_28 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x20,local_58);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144605ce0;
    puVar2[1] = param_1;
    *(undefined4 *)(puVar2 + 2) = local_res8;
    *(undefined4 *)((longlong)puVar2 + 0x14) = local_resc;
    *(int *)(puVar2 + 3) = iVar3;
    *(undefined1 *)((longlong)puVar2 + 0x1c) = param_3;
  }
  local_68[0] = &LAB_140ee0a80;
  FUN_14208c5d0(param_1,local_68);
  *(int *)(param_1 + 0x1c8) = iVar4;
  return;
}



// FUNCTION 140f08820 FUN_140f08820 body=27 status=ok
// SIG undefined FUN_140f08820(void)

void FUN_140f08820(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x170) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000140f08836. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x170) + 0x170) + 0x38))();
    return;
  }
  return;
}



// FUNCTION 140f08840 FUN_140f08840 body=28 status=ok
// SIG undefined FUN_140f08840(void)

void FUN_140f08840(longlong param_1)

{
  FWeakObjectPtr::operator=(param_1 + 0x30);
  *(undefined1 *)(param_1 + 0x38) = 1;
  return;
}



// FUNCTION 140f08860 FUN_140f08860 body=349 status=ok
// SIG undefined FUN_140f08860(void)

void FUN_140f08860(longlong param_1,char param_2)

{
  undefined8 uVar1;
  longlong local_18 [2];
  
  if ((*(char *)(param_1 + 0x215) == '\0') && (param_2 != *(char *)(param_1 + 0x1e1))) {
    *(char *)(param_1 + 0x1e1) = param_2;
    if (param_2 == '\0') {
      FUN_140f06330(param_1);
      return;
    }
    if (param_2 == '\x01') {
      if (*(longlong *)(param_1 + 0x170) != 0) {
        local_18[0] = 0;
        local_18[1] = 8;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
        FGenericPlatformString::Memcpy(local_18[0],L"levelUp",0x10);
        FUN_142088910(*(undefined8 *)(param_1 + 0x170),local_18);
        if (local_18[0] != 0) {
          FMemory::Free();
        }
      }
      if (*(longlong *)(param_1 + 0x198) == 0) {
        return;
      }
      local_18[0] = 0;
      local_18[1] = 8;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      FGenericPlatformString::Memcpy(local_18[0],L"levelUp",0x10);
      uVar1 = *(undefined8 *)(param_1 + 0x198);
    }
    else {
      if (param_2 != '\x02') {
        return;
      }
      if (*(longlong *)(param_1 + 0x170) == 0) {
        return;
      }
      local_18[1] = 0xb;
      local_18[0] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      FGenericPlatformString::Memcpy(local_18[0],L"secondWind",0x16);
      uVar1 = *(undefined8 *)(param_1 + 0x170);
    }
    FUN_142088910(uVar1,local_18);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140f089c0 FUN_140f089c0 body=8 status=ok
// SIG undefined FUN_140f089c0(void)

void FUN_140f089c0(undefined8 param_1)

{
  DAT_1468722d0 = param_1;
  return;
}



// FUNCTION 140f089d0 FUN_140f089d0 body=168 status=ok
// SIG undefined FUN_140f089d0(void)

void FUN_140f089d0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong local_18;
  undefined8 local_10;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x14c);
  if (lVar2 != 0) {
    lVar3 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140f08a29;
  }
  lVar2 = 0;
LAB_140f08a29:
  lVar3 = *(longlong *)(param_1 + 0x170);
  if ((lVar3 != 0) && (lVar2 != 0)) {
    local_10 = 0;
    local_18 = lVar3;
    uVar4 = UBlendableInterface::GetPrivateStaticClass();
    local_10 = UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar4);
    FUN_142ed36d0(lVar2,&local_18,0);
  }
  return;
}



// FUNCTION 140f08a80 FUN_140f08a80 body=136 status=ok
// SIG undefined FUN_140f08a80(void)

void FUN_140f08a80(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x668)) {
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(lVar3 + *(longlong *)(param_1 + 0x660));
      if (lVar1 != 0) {
        FUN_142088cf0(lVar1,param_2);
        FUN_140f0ecc0(param_1);
      }
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (iVar2 < *(int *)(param_1 + 0x668));
  }
  if (*param_2 == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 140f08b10 FUN_140f08b10 body=271 status=ok
// SIG undefined FUN_140f08b10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f08b10(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = &LAB_140ee0a60;
  uVar2 = FUN_1420849a0(param_1,local_68,local_b8);
  FUN_14208c260(param_1,uVar2);
  if (local_28 != 0) {
    plVar3 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar3 = local_38;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_78 != 0) {
    plVar3 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar3 = local_88;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140f08c20 FUN_140f08c20 body=505 status=ok
// SIG undefined FUN_140f08c20(void)

void FUN_140f08c20(longlong param_1,int param_2,uint *param_3)

{
  uint uVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  
  if (param_2 == 0) {
    lVar3 = *(longlong *)(param_1 + 0x1c0);
  }
  else if (param_2 == 1) {
    lVar3 = *(longlong *)(param_1 + 0x1d0);
  }
  else {
    if (param_2 != 2) {
      return;
    }
    lVar3 = *(longlong *)(param_1 + 0x1e0);
  }
  if (lVar3 != 0) {
    iVar5 = 0;
    iVar6 = 0;
    if (0 < *(int *)(param_1 + 0x230)) {
      lVar7 = 0;
      do {
        uVar1 = *(uint *)(lVar7 + *(longlong *)(param_1 + 0x228));
        if (*param_3 == uVar1) {
          *(int *)(lVar3 + 0x2e4) = iVar6;
          local_2c = (float)(uVar1 >> 0x18) * 0.003921569;
          local_30 = (float)(uVar1 & 0xff) * 0.003921569;
          local_38 = (float)(uVar1 >> 0x10 & 0xff) * 0.003921569;
          local_34 = (float)(uVar1 >> 8 & 0xff) * 0.003921569;
          if (*(longlong *)(lVar3 + 0x2d0) != 0) {
            FUN_142f0c220(*(longlong *)(lVar3 + 0x2d0),&local_38,
                          CONCAT71((uint7)(ushort)(uVar1 >> 0x10),1));
          }
        }
        iVar6 = iVar6 + 1;
        lVar7 = lVar7 + 4;
      } while (iVar6 < *(int *)(param_1 + 0x230));
    }
    if (((*(longlong *)(param_1 + 0x1b0) != 0) && (lVar3 == *(longlong *)(param_1 + 0x1f0))) &&
       (iVar6 = FUN_142eb7440(), 0 < iVar6)) {
      do {
        lVar3 = FUN_142eb6a30(*(undefined8 *)(param_1 + 0x1b0),iVar5);
        if (lVar3 != 0) {
          lVar7 = FUN_14132e850();
          iVar6 = *(int *)(lVar7 + 0x90);
          if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < iVar6) ||
             (*(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)iVar6 * 8)
              != lVar7 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            if ((iVar5 == *(int *)(*(longlong *)(param_1 + 0x1f0) + 0x2e4)) ||
               (iVar5 == *(int *)(*(longlong *)(param_1 + 0x1f0) + 0x2e8))) {
              uVar4 = CONCAT71((int7)(int3)((uint)iVar6 >> 8),1);
            }
            else {
              uVar4 = 0;
            }
            FUN_142ed2820(lVar3,uVar4,1);
          }
        }
        iVar5 = iVar5 + 1;
        iVar6 = FUN_142eb7440(*(undefined8 *)(param_1 + 0x1b0));
      } while (iVar5 < iVar6);
    }
  }
  return;
}



// FUNCTION 140f08e20 FUN_140f08e20 body=505 status=ok
// SIG undefined FUN_140f08e20(void)

void FUN_140f08e20(longlong param_1,int param_2,uint *param_3)

{
  uint uVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  
  if (param_2 == 0) {
    lVar3 = *(longlong *)(param_1 + 0x1c0);
  }
  else if (param_2 == 1) {
    lVar3 = *(longlong *)(param_1 + 0x1d0);
  }
  else {
    if (param_2 != 2) {
      return;
    }
    lVar3 = *(longlong *)(param_1 + 0x1e0);
  }
  if (lVar3 != 0) {
    iVar5 = 0;
    iVar6 = 0;
    if (0 < *(int *)(param_1 + 0x230)) {
      lVar7 = 0;
      do {
        uVar1 = *(uint *)(lVar7 + *(longlong *)(param_1 + 0x228));
        if (*param_3 == uVar1) {
          *(int *)(lVar3 + 0x2e8) = iVar6;
          local_2c = (float)(uVar1 >> 0x18) * 0.003921569;
          local_30 = (float)(uVar1 & 0xff) * 0.003921569;
          local_38 = (float)(uVar1 >> 0x10 & 0xff) * 0.003921569;
          local_34 = (float)(uVar1 >> 8 & 0xff) * 0.003921569;
          if (*(longlong *)(lVar3 + 0x2d8) != 0) {
            FUN_142f0c220(*(longlong *)(lVar3 + 0x2d8),&local_38,
                          CONCAT71((uint7)(ushort)(uVar1 >> 0x10),1));
          }
        }
        iVar6 = iVar6 + 1;
        lVar7 = lVar7 + 4;
      } while (iVar6 < *(int *)(param_1 + 0x230));
    }
    if (((*(longlong *)(param_1 + 0x1b0) != 0) && (lVar3 == *(longlong *)(param_1 + 0x1f0))) &&
       (iVar6 = FUN_142eb7440(), 0 < iVar6)) {
      do {
        lVar3 = FUN_142eb6a30(*(undefined8 *)(param_1 + 0x1b0),iVar5);
        if (lVar3 != 0) {
          lVar7 = FUN_14132e850();
          iVar6 = *(int *)(lVar7 + 0x90);
          if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < iVar6) ||
             (*(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)iVar6 * 8)
              != lVar7 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            if ((iVar5 == *(int *)(*(longlong *)(param_1 + 0x1f0) + 0x2e4)) ||
               (iVar5 == *(int *)(*(longlong *)(param_1 + 0x1f0) + 0x2e8))) {
              uVar4 = CONCAT71((int7)(int3)((uint)iVar6 >> 8),1);
            }
            else {
              uVar4 = 0;
            }
            FUN_142ed2820(lVar3,uVar4,1);
          }
        }
        iVar5 = iVar5 + 1;
        iVar6 = FUN_142eb7440(*(undefined8 *)(param_1 + 0x1b0));
      } while (iVar5 < iVar6);
    }
  }
  return;
}



// FUNCTION 140f09020 FUN_140f09020 body=330 status=ok
// SIG undefined FUN_140f09020(void)

void FUN_140f09020(longlong param_1,undefined1 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined2 *puVar6;
  longlong *plVar7;
  bool bVar8;
  longlong local_18 [2];
  
  *(undefined1 *)(param_1 + 0x215) = param_2;
  FUN_140f0fcf0();
  plVar2 = *(longlong **)(param_1 + 0x1b8);
  plVar7 = (longlong *)0x0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar3 = (int)plVar2[1];
    bVar8 = iVar3 == 0;
    if (bVar8) {
      *(int *)(plVar2 + 1) = 0;
      iVar3 = 0;
    }
    UNLOCK();
    if (!bVar8) {
      while( true ) {
        LOCK();
        bVar8 = iVar3 == (int)plVar2[1];
        if (bVar8) {
          *(int *)(plVar2 + 1) = iVar3 + 1;
        }
        UNLOCK();
        if (bVar8) break;
        LOCK();
        iVar3 = (int)plVar2[1];
        bVar8 = iVar3 == 0;
        if (bVar8) {
          *(int *)(plVar2 + 1) = 0;
          iVar3 = 0;
        }
        UNLOCK();
        if (bVar8) {
          return;
        }
      }
      if (plVar2 != (longlong *)0x0) {
        lVar4 = *(longlong *)(param_1 + 0x1b0);
        if (lVar4 != 0) {
          if (*(char *)(param_1 + 0x215) == '\0') {
            if (*(longlong *)(param_1 + 0x1c0) != 0) {
              plVar7 = *(longlong **)(param_1 + 0x1c8);
            }
            puVar5 = (undefined8 *)(**(code **)(*plVar7 + 0x70))(plVar7,local_18);
            if (*(int *)(puVar5 + 1) == 0) {
              puVar6 = &DAT_143f3eda8;
            }
            else {
              puVar6 = (undefined2 *)*puVar5;
            }
            FUN_14203e4e0(lVar4,puVar6);
            if (local_18[0] != 0) {
              FMemory::Free();
            }
          }
          else {
            if (*(int *)(param_1 + 0x230) == 0) {
              puVar6 = &DAT_143f3eda8;
            }
            else {
              puVar6 = *(undefined2 **)(param_1 + 0x228);
            }
            FUN_14203e4e0(lVar4,puVar6);
            lVar4 = FUN_140eccb70(param_1);
            if (lVar4 != 0) {
              FUN_140483870(lVar4 + 0xa38,param_1);
            }
          }
        }
        LOCK();
        plVar7 = plVar2 + 1;
        lVar4 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar2)(plVar2);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar2 + 8))(plVar2,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140f09170 Server_SetPlayerInDialogueOption_Implementation body=7 status=ok
// SIG undefined Server_SetPlayerInDialogueOption_Implementation(void)

void UCG2PlayerDialogueComponent::Server_SetPlayerInDialogueOption_Implementation
               (longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x253) = param_2;
  return;
}



// FUNCTION 140f09180 FUN_140f09180 body=152 status=ok
// SIG undefined FUN_140f09180(void)

void FUN_140f09180(undefined8 param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  FWeakObjectPtr::operator=(&local_res8,param_1);
  local_28 = 0;
  local_18 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x20,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144605cc8;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_res8;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_resc;
    *(undefined1 *)(puVar1 + 3) = param_2;
  }
  local_58[0] = &LAB_140ee0ed0;
  FUN_14208c5d0(param_1,local_58);
  return;
}



// FUNCTION 140f09220 FUN_140f09220 body=777 status=ok
// SIG undefined FUN_140f09220(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f09220(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 auStack_138 [32];
  undefined4 *local_118;
  ulonglong *puStack_110;
  undefined8 local_108;
  longlong local_100;
  undefined8 local_f8;
  longlong *plStack_f0;
  undefined1 local_e8 [16];
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_90 [16];
  undefined1 local_80 [24];
  undefined4 local_68 [4];
  undefined1 local_58 [8];
  longlong *local_50;
  char local_40;
  ulonglong local_38 [2];
  
  local_38[0] = DAT_1468387a8 ^ (ulonglong)auStack_138;
  if ((*(longlong *)(param_1 + 0x808) != 0) && (*(longlong *)(param_1 + 0x810) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x810) + 8);
    LOCK();
    iVar5 = *piVar1;
    if (iVar5 == 0) {
      *piVar1 = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (0 < iVar5) {
      local_f8 = 0;
      plStack_f0 = (longlong *)0x0;
      lVar6 = FText::AsNumber(local_80,param_2,0,&local_f8);
      uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_a8,L"LVL {0}",L"GFxExperienceBar",L"CurrentLevelText");
      puVar8 = (undefined8 *)FTextFormat::FTextFormat(local_90,uVar7);
      local_68[0] = 4;
      FText::FText(local_58,lVar6);
      local_108 = *puVar8;
      local_118 = local_68;
      local_100 = puVar8[1];
      local_40 = '\x01';
      if (local_100 != 0) {
        LOCK();
        *(int *)(local_100 + 8) = *(int *)(local_100 + 8) + 1;
        UNLOCK();
      }
      puStack_110 = local_38;
      uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
              TArray<FFormatArgumentValue,FDefaultAllocator>(local_e8,&local_118);
      uVar7 = FText::Format(local_c0,&local_108,uVar7);
      FText::FText(local_d8,uVar7);
      if (local_b8 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_b8 + 1;
        lVar4 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_b8)(local_b8);
          LOCK();
          piVar1 = (int *)((longlong)local_b8 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_b8 + 8))(local_b8,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_e8);
      if ((local_40 != '\0') && (local_40 = '\0', local_50 != (longlong *)0x0)) {
        LOCK();
        plVar3 = local_50 + 1;
        lVar4 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar1 = (int *)((longlong)local_50 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_50 + 8))(local_50,1);
          }
        }
      }
      plVar3 = (longlong *)puVar8[1];
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar3 + 1;
        lVar4 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
      plVar3 = *(longlong **)(lVar6 + 8);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar3 + 1;
        lVar6 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x800,local_d8,1,0);
      if (local_d0 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_d0 + 1;
        lVar6 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_d0)(local_d0);
          LOCK();
          piVar1 = (int *)((longlong)local_d0 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_d0 + 8))(local_d0,1);
          }
        }
      }
      if (local_a0 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_a0 + 1;
        lVar6 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_a0)(local_a0);
          LOCK();
          piVar1 = (int *)((longlong)local_a0 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_a0 + 8))(local_a0,1);
          }
        }
      }
      plVar3 = plStack_f0;
      if (plStack_f0 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_f0 + 1;
        lVar6 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plStack_f0)(plStack_f0);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140f09530 FUN_140f09530 body=24 status=ok
// SIG undefined FUN_140f09530(void)

void FUN_140f09530(longlong param_1,undefined1 param_2)

{
  undefined1 local_res10 [24];
  
  if (local_res10 != (undefined1 *)(param_1 + 0x652)) {
    *(undefined1 *)(param_1 + 0x652) = param_2;
    *(undefined1 *)(param_1 + 0x653) = 1;
  }
  return;
}



// FUNCTION 140f09550 FUN_140f09550 body=7 status=ok
// SIG undefined FUN_140f09550(void)

void FUN_140f09550(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2a4) = param_2;
  return;
}



// FUNCTION 140f09560 FUN_140f09560 body=1048 status=ok
// SIG undefined FUN_140f09560(void)

void FUN_140f09560(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  bool bVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  char cVar7;
  longlong *plVar8;
  uint uVar9;
  int iVar10;
  longlong *plVar11;
  uint uVar12;
  uint *puVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  longlong *local_f8;
  undefined8 local_f0;
  longlong *local_e8;
  undefined8 local_e0;
  uint local_d8;
  uint uStack_d4;
  uint *puStack_d0;
  undefined4 local_c8;
  uint uStack_c4;
  uint uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  longlong local_90;
  longlong *local_88;
  longlong *local_80;
  undefined8 local_78;
  uint uStack_70;
  uint uStack_6c;
  uint *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  FUN_140ad4c90(param_1,&local_90);
  if (local_90 != 0) {
    cVar7 = FUN_142045c80();
    if (cVar7 != '\0') {
      lVar16 = *(longlong *)(param_1 + 0x4d8);
      lVar14 = (longlong)*(int *)(param_1 + 0x4e0) * 0x10 + lVar16;
      if (lVar16 != lVar14) {
        local_50 = 0;
        do {
          local_f8 = (longlong *)0x0;
          local_f0 = 0;
          plVar8 = (longlong *)FUN_140ac4770(param_1,lVar16,0,6,&local_f8);
          plVar11 = local_f8;
          for (iVar10 = (int)local_f0; iVar10 != 0; iVar10 = iVar10 + -1) {
            if (*plVar11 != 0) {
              FMemory::Free();
            }
            plVar11 = plVar11 + 2;
          }
          if (local_f8 != (longlong *)0x0) {
            FMemory::Free(local_f8);
          }
          if (plVar8 != (longlong *)0x0) {
            (**(code **)(*plVar8 + 0x2b0))(plVar8,param_2,1,0);
          }
          lVar16 = lVar16 + 0x10;
        } while (lVar16 != lVar14);
      }
      local_80 = (longlong *)(param_1 + 0x4e8);
      local_d8 = 0;
      uVar3 = *(uint *)(param_1 + 0x510);
      puVar1 = (uint *)(param_1 + 0x4f8);
      uStack_d4 = 1;
      uStack_c4 = 0;
      uStack_c0 = 0;
      if (uVar3 != 0) {
        puVar13 = *(uint **)(param_1 + 0x508);
        if (*(uint **)(param_1 + 0x508) == (uint *)0x0) {
          puVar13 = puVar1;
        }
        uVar9 = *puVar13;
        local_d8 = 0;
        uStack_c0 = 0;
        while (uVar9 == 0) {
          lVar16 = (longlong)(int)local_d8;
          uStack_c0 = uStack_c0 + 0x20;
          uVar9 = local_d8 + 1;
          bVar4 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= (int)local_d8;
          local_d8 = uVar9;
          if (bVar4) goto LAB_140f09734;
          uVar9 = puVar13[lVar16 + 1];
        }
        uStack_d4 = -uVar9 & uVar9;
        iVar10 = 0x1f;
        if (uStack_d4 != 0) {
          for (; uStack_d4 >> iVar10 == 0; iVar10 = iVar10 + -1) {
          }
        }
        if (uStack_d4 == 0) {
          iVar10 = 0x20;
        }
        else {
          iVar10 = 0x1f - iVar10;
        }
        uStack_c4 = (uStack_c0 - iVar10) + 0x1f;
        if ((int)uVar3 < (int)uStack_c4) {
LAB_140f09734:
          uStack_c4 = uVar3;
        }
      }
      local_c8 = 0xffffffff;
      uVar9 = *(uint *)(param_1 + 0x510);
      uStack_b0 = CONCAT44(uStack_d4,local_d8);
      uStack_60 = CONCAT44(uStack_c4,0xffffffff);
      uStack_98 = CONCAT44(uStack_bc,uStack_c0);
      iVar10 = (int)uVar9 >> 5;
      local_b8._4_4_ = (undefined4)((ulonglong)local_80 >> 0x20);
      uVar15 = -1 << ((byte)uVar9 & 0x1f);
      uVar12 = uVar9 & 0xffffffe0;
      local_b8 = CONCAT44(local_b8._4_4_,iVar10);
      uStack_a8 = CONCAT44(uVar9,uVar15);
      uStack_a0 = CONCAT44(uStack_c4,uVar9) & 0xffffffffffffffe0;
      uStack_70 = local_d8;
      uStack_6c = uStack_d4;
      puStack_d0 = puVar1;
      local_68 = puVar1;
      local_58 = uStack_98;
      local_78 = local_80;
      uVar5 = uStack_a8;
      if (uVar9 != uVar3) {
        puVar13 = *(uint **)(param_1 + 0x508);
        if (*(uint **)(param_1 + 0x508) == (uint *)0x0) {
          puVar13 = puVar1;
        }
        uVar15 = puVar13[iVar10] & uVar15;
        while (uVar15 == 0) {
          uVar12 = uVar12 + 0x20;
          uVar6 = uStack_a0 >> 0x20;
          uStack_a0 = CONCAT44((int)uVar6,uVar12);
          local_b8._4_4_ = (undefined4)((ulonglong)local_b8 >> 0x20);
          local_b8 = CONCAT44(local_b8._4_4_,iVar10 + 1);
          if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar10)
          goto LAB_140f0981e;
          uVar15 = puVar13[(longlong)iVar10 + 1];
          uStack_a8 = 0xffffffff;
          iVar10 = iVar10 + 1;
        }
        uVar15 = -uVar15 & uVar15;
        iVar10 = 0x1f;
        if (uVar15 != 0) {
          for (; uVar15 >> iVar10 == 0; iVar10 = iVar10 + -1) {
          }
        }
        if (uVar15 == 0) {
          iVar10 = 0x20;
        }
        else {
          iVar10 = 0x1f - iVar10;
        }
        iVar10 = (uVar12 - iVar10) + 0x1f;
        uStack_a8 = CONCAT44(iVar10,(undefined4)uStack_a8);
        uVar5 = uStack_a8;
        if ((int)uVar3 < iVar10) {
LAB_140f0981e:
          uStack_a8 = CONCAT44(uVar3,(undefined4)uStack_a8);
          uVar5 = uStack_a8;
        }
      }
      while( true ) {
        if (((uStack_60._4_4_ == (int)((ulonglong)uVar5 >> 0x20)) && (local_68 == puVar1)) &&
           (local_78 == local_80)) break;
        local_e8 = (longlong *)0x0;
        lVar16 = (longlong)uStack_60._4_4_ * 0x30 + *local_78;
        local_e0 = 0;
        local_48 = 0;
        plVar8 = (longlong *)FUN_140ac4770(param_1,lVar16,0,6,&local_e8);
        plVar11 = local_e8;
        for (iVar10 = (int)local_e0; iVar10 != 0; iVar10 = iVar10 + -1) {
          if (*plVar11 != 0) {
            FMemory::Free();
          }
          plVar11 = plVar11 + 2;
        }
        if (local_e8 != (longlong *)0x0) {
          FMemory::Free(local_e8);
        }
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 0x2b0))(plVar8,lVar16 + 0x10,1,0);
        }
        uStack_60 = CONCAT44(uStack_60._4_4_,(uint)uStack_60 & ~uStack_6c);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
      }
      param_2 = FUN_1404b03b0();
    }
  }
  FText::operator=(param_1 + 0x538,param_2);
  plVar11 = local_88;
  if (local_88 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_88 + 1;
    lVar16 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar16 == 1) {
      (**(code **)*local_88)(local_88);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      iVar10 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*local_88 + 8))(local_88,1);
      }
    }
  }
  return;
}



// FUNCTION 140f09980 FUN_140f09980 body=313 status=ok
// SIG undefined FUN_140f09980(void)

void FUN_140f09980(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong local_38 [2];
  undefined1 local_28 [8];
  longlong *local_20;
  
  if ((param_2 <= *(int *)(param_1 + 0x2a4)) && (-1 < param_2)) {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    lVar4 = *(longlong *)(DAT_146b33f38 + 0x90);
    if (lVar4 != 0) {
      lVar6 = FUN_1414d9130();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        puVar7 = (undefined8 *)FUN_1411e4840(lVar4);
        FUN_140f0abd0(param_1,*puVar7,param_2,0);
      }
    }
    if (*(longlong *)(param_1 + 0x2b0) != 0) {
      local_38[0] = 0;
      local_38[1] = 0;
      FString::AppendInt(local_38,param_2);
      uVar8 = FText::FromString(local_28,local_38);
      FUN_142ed51f0(*(undefined8 *)(param_1 + 0x2b0),uVar8,1);
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
      if (local_38[0] != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140f09ac0 FUN_140f09ac0 body=194 status=ok
// SIG undefined FUN_140f09ac0(void)

void FUN_140f09ac0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  
  plVar1 = (longlong *)(param_1 + 0x2e8);
  if ((*(int *)(param_1 + 0x2f0) != 0) && ((longlong *)*plVar1 != (longlong *)0x0)) {
    cVar3 = (**(code **)(*(longlong *)*plVar1 + 0x18))();
    if ((cVar3 != '\0') &&
       ((*(int *)(param_1 + 0x2f0) != 0 && (plVar2 = (longlong *)*plVar1, plVar2 != (longlong *)0x0)
        ))) {
      (**(code **)(*plVar2 + 0x28))(plVar2,0);
      if (*plVar1 != 0) {
        lVar4 = FMemory::Realloc(*plVar1,0,0);
        *plVar1 = lVar4;
      }
      *(undefined4 *)(param_1 + 0x2f0) = 0;
    }
  }
  if (param_2 != plVar1) {
    if (((int)param_2[1] != 0) && (param_2 = (longlong *)*param_2, param_2 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000140f09b41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x30))(param_2,plVar1);
      return;
    }
    if ((*(int *)(param_1 + 0x2f0) != 0) &&
       (plVar2 = (longlong *)*plVar1, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x28))(plVar2,0);
      if (*plVar1 != 0) {
        lVar4 = FMemory::Realloc(*plVar1,0,0);
        *plVar1 = lVar4;
      }
      *(undefined4 *)(param_1 + 0x2f0) = 0;
    }
  }
  return;
}



// FUNCTION 140f09b90 FUN_140f09b90 body=2332 status=ok
// SIG undefined FUN_140f09b90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f09b90(longlong param_1,longlong *param_2)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  undefined8 uVar7;
  longlong *plVar8;
  wchar_t *pwVar9;
  longlong **pplVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  int *piVar13;
  undefined2 *puVar14;
  int *piVar15;
  wchar_t *pwVar16;
  bool bVar17;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  int local_d0;
  int local_cc;
  longlong local_c8;
  int local_c0;
  int local_bc;
  longlong local_b8;
  undefined8 local_b0;
  longlong *plStack_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 local_90;
  longlong local_88;
  longlong local_80;
  longlong *local_78 [2];
  longlong local_68 [2];
  undefined8 local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  if (*(longlong **)(param_1 + 0x1d0) == param_2) {
    if (*(longlong *)(param_1 + 0x1c0) == 0) {
      *(undefined1 *)(param_1 + 0x1f8) = 0;
    }
    else {
      *(bool *)(param_1 + 0x1f8) = *(longlong *)(param_1 + 0x1c8) != 0;
    }
  }
  else {
    pwVar16 = (wchar_t *)0x0;
    if ((*(longlong *)(param_1 + 0x1c0) != 0) && (*(longlong *)(param_1 + 0x1c8) != 0)) {
      lVar5 = (**(code **)(**(longlong **)(param_1 + 0x1c8) + 0xb8))();
      if (lVar5 != 0) {
        pwVar9 = pwVar16;
        if (*(longlong *)(param_1 + 0x1c0) != 0) {
          pwVar9 = *(wchar_t **)(param_1 + 0x1c8);
        }
        pwVar6 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnDownStateExitReasonChanged",L"::");
        pwVar2 = pwVar16;
        while (pwVar1 = pwVar6, pwVar1 != (wchar_t *)0x0) {
          pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
          pwVar2 = pwVar1;
        }
        FName::FName(&local_98,pwVar2 + 2,1);
        uVar7 = (**(code **)(*(longlong *)pwVar9 + 0xb8))(pwVar9);
        TMulticastScriptDelegate<FWeakObjectPtr>::Remove(uVar7,param_1,local_98);
      }
      pwVar9 = pwVar16;
      if (*(longlong *)(param_1 + 0x1c0) != 0) {
        pwVar9 = *(wchar_t **)(param_1 + 0x1c8);
      }
      lVar5 = (**(code **)(*(longlong *)pwVar9 + 0xa8))();
      if (lVar5 != 0) {
        pwVar9 = pwVar16;
        if (*(longlong *)(param_1 + 0x1c0) != 0) {
          pwVar9 = *(wchar_t **)(param_1 + 0x1c8);
        }
        pwVar6 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnLevelChanged",L"::");
        pwVar2 = pwVar16;
        while (pwVar1 = pwVar6, pwVar1 != (wchar_t *)0x0) {
          pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
          pwVar2 = pwVar1;
        }
        FName::FName(&local_90,pwVar2 + 2,1);
        uVar7 = (**(code **)(*(longlong *)pwVar9 + 0xa8))(pwVar9);
        TMulticastScriptDelegate<FWeakObjectPtr>::Remove(uVar7,param_1,local_90);
      }
      pwVar9 = pwVar16;
      if (*(longlong *)(param_1 + 0x1c0) != 0) {
        pwVar9 = *(wchar_t **)(param_1 + 0x1c8);
      }
      lVar5 = (**(code **)(*(longlong *)pwVar9 + 200))();
      if (lVar5 != 0) {
        pwVar9 = pwVar16;
        if (*(longlong *)(param_1 + 0x1c0) != 0) {
          pwVar9 = *(wchar_t **)(param_1 + 0x1c8);
        }
        plVar8 = (longlong *)(**(code **)(*(longlong *)pwVar9 + 200))();
        if ((((int)plVar8[1] != 0) && (plVar8 = (longlong *)*plVar8, plVar8 != (longlong *)0x0)) &&
           (cVar3 = (**(code **)(*plVar8 + 8))(plVar8,param_1), cVar3 != '\0')) {
          pwVar9 = pwVar16;
          if (*(longlong *)(param_1 + 0x1c0) != 0) {
            pwVar9 = *(wchar_t **)(param_1 + 0x1c8);
          }
          plVar8 = (longlong *)(**(code **)(*(longlong *)pwVar9 + 200))();
          if (((int)plVar8[1] != 0) && (plVar11 = (longlong *)*plVar8, plVar11 != (longlong *)0x0))
          {
            (**(code **)(*plVar11 + 0x28))(plVar11,0);
            if (*plVar8 != 0) {
              lVar5 = FMemory::Realloc(*plVar8,0,0);
              *plVar8 = lVar5;
            }
            *(undefined4 *)(plVar8 + 1) = 0;
          }
        }
      }
    }
    *(undefined1 *)(param_1 + 0x1f8) = 0;
    FWeakObjectPtr::operator=(&local_a0,0);
    *(undefined4 *)(param_1 + 0x21c) = local_a0;
    *(undefined4 *)(param_1 + 0x220) = local_9c;
    if (param_2 == (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x1c0) = 0;
      *(undefined8 *)(param_1 + 0x1c8) = 0;
    }
    else {
      uVar7 = UGameplayTagAssetInterface::GetPrivateStaticClass();
      lVar5 = UObjectBaseUtility::GetInterfaceAddress(param_2,uVar7);
      if (lVar5 != 0) {
        *(longlong **)(param_1 + 0x1c0) = param_2;
        *(longlong *)(param_1 + 0x1c8) = lVar5;
        *(undefined1 *)(param_1 + 0x1f8) = 1;
      }
      lVar5 = (**(code **)(*param_2 + 0x680))(param_2);
      if (((lVar5 != 0) && (*(longlong **)(lVar5 + 0x4b8) != (longlong *)0x0)) &&
         (cVar3 = (**(code **)(**(longlong **)(lVar5 + 0x4b8) + 0x20))(), cVar3 != '\0')) {
        plVar8 = *(longlong **)(lVar5 + 0x4c0);
        puVar12 = (undefined8 *)(param_1 + 0x1e8);
        uVar7 = *(undefined8 *)(lVar5 + 0x4b8);
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
        }
        local_b0 = uVar7;
        plStack_a8 = plVar8;
        if (&local_b0 != puVar12) {
          local_b0 = *puVar12;
          plStack_a8 = *(longlong **)(param_1 + 0x1f0);
          *puVar12 = uVar7;
          *(longlong **)(param_1 + 0x1f0) = plVar8;
          local_58 = uVar7;
          plStack_50 = plVar8;
        }
        plVar8 = plStack_a8;
        if (plStack_a8 != (longlong *)0x0) {
          LOCK();
          plVar11 = plStack_a8 + 1;
          lVar5 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*plStack_a8)(plStack_a8);
            LOCK();
            piVar13 = (int *)((longlong)plVar8 + 0xc);
            iVar4 = *piVar13;
            *piVar13 = *piVar13 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plStack_a8 + 8))(plStack_a8,1);
            }
          }
        }
      }
    }
    *(longlong **)(param_1 + 0x1d0) = param_2;
    pwVar9 = pwVar16;
    if (param_2 != (longlong *)0x0) {
      pwVar9 = (wchar_t *)param_2[2];
    }
    *(wchar_t **)(param_1 + 0x1d8) = pwVar9;
    FUN_140f10a00(param_1);
    FUN_140f0fcf0(param_1);
    if ((*(longlong *)(param_1 + 0x1c0) != 0) && (*(longlong *)(param_1 + 0x1c8) != 0)) {
      lVar5 = (**(code **)(**(longlong **)(param_1 + 0x1c8) + 0xb8))();
      if (lVar5 != 0) {
        pwVar9 = pwVar16;
        if (*(longlong *)(param_1 + 0x1c0) != 0) {
          pwVar9 = *(wchar_t **)(param_1 + 0x1c8);
        }
        pwVar6 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnDownStateExitReasonChanged",L"::");
        pwVar2 = pwVar16;
        while (pwVar1 = pwVar6, pwVar1 != (wchar_t *)0x0) {
          pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
          pwVar2 = pwVar1;
        }
        FName::FName(&local_88,pwVar2 + 2,1);
        plVar8 = (longlong *)(**(code **)(*(longlong *)pwVar9 + 0xb8))(pwVar9);
        FWeakObjectPtr::operator=(&local_d0,0);
        local_c8 = 0;
        FWeakObjectPtr::operator=(&local_d0,param_1);
        local_c8 = local_88;
        local_d8 = 0;
        if ((local_88 != 0) && (lVar5 = FWeakObjectPtr::Get(&local_d0), lVar5 != 0)) {
          UObject::FindFunction(lVar5,local_c8);
        }
        piVar13 = (int *)*plVar8;
        lVar5 = plVar8[1];
        for (piVar15 = piVar13; piVar15 != piVar13 + (longlong)(int)lVar5 * 4; piVar15 = piVar15 + 4
            ) {
          if ((((*piVar15 == local_d0) && (piVar15[1] == local_cc)) ||
              ((cVar3 = FWeakObjectPtr::IsValid(piVar15), cVar3 == '\0' &&
               (cVar3 = FWeakObjectPtr::IsValid(&local_d0), cVar3 == '\0')))) &&
             (*(longlong *)(piVar15 + 2) == local_c8)) {
            if ((int)((longlong)piVar15 - (longlong)piVar13 >> 4) != -1) goto LAB_140f0a0b7;
            break;
          }
        }
        iVar4 = (int)plVar8[1];
        *(int *)(plVar8 + 1) = iVar4 + 1;
        if (*(int *)((longlong)plVar8 + 0xc) < iVar4 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8,iVar4);
        }
        piVar13 = (int *)((longlong)iVar4 * 0x10 + *plVar8);
        *piVar13 = local_d0;
        piVar13[1] = local_cc;
        *(longlong *)(piVar13 + 2) = local_c8;
LAB_140f0a0b7:
        TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar8);
      }
      pwVar9 = pwVar16;
      if (*(longlong *)(param_1 + 0x1c0) != 0) {
        pwVar9 = *(wchar_t **)(param_1 + 0x1c8);
      }
      lVar5 = (**(code **)(*(longlong *)pwVar9 + 0xa8))();
      if (lVar5 != 0) {
        pwVar9 = pwVar16;
        if (*(longlong *)(param_1 + 0x1c0) != 0) {
          pwVar9 = *(wchar_t **)(param_1 + 0x1c8);
        }
        pwVar6 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnLevelChanged",L"::");
        pwVar2 = pwVar16;
        while (pwVar1 = pwVar6, pwVar1 != (wchar_t *)0x0) {
          pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
          pwVar2 = pwVar1;
        }
        FName::FName(&local_80,pwVar2 + 2,1);
        plVar8 = (longlong *)(**(code **)(*(longlong *)pwVar9 + 0xa8))(pwVar9);
        FWeakObjectPtr::operator=(&local_c0,0);
        local_b8 = 0;
        FWeakObjectPtr::operator=(&local_c0,param_1);
        local_b8 = local_80;
        local_d8 = 0;
        if ((local_80 != 0) && (lVar5 = FWeakObjectPtr::Get(&local_c0), lVar5 != 0)) {
          UObject::FindFunction(lVar5,local_b8);
        }
        piVar13 = (int *)*plVar8;
        lVar5 = plVar8[1];
        for (piVar15 = piVar13; piVar15 != piVar13 + (longlong)(int)lVar5 * 4; piVar15 = piVar15 + 4
            ) {
          if ((((*piVar15 == local_c0) && (piVar15[1] == local_bc)) ||
              ((cVar3 = FWeakObjectPtr::IsValid(piVar15), cVar3 == '\0' &&
               (cVar3 = FWeakObjectPtr::IsValid(&local_c0), cVar3 == '\0')))) &&
             (*(longlong *)(piVar15 + 2) == local_b8)) {
            if ((int)((longlong)piVar15 - (longlong)piVar13 >> 4) != -1) goto LAB_140f0a237;
            break;
          }
        }
        iVar4 = (int)plVar8[1];
        *(int *)(plVar8 + 1) = iVar4 + 1;
        if (*(int *)((longlong)plVar8 + 0xc) < iVar4 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8,iVar4);
        }
        piVar13 = (int *)((longlong)iVar4 * 0x10 + *plVar8);
        *piVar13 = local_c0;
        piVar13[1] = local_bc;
        *(longlong *)(piVar13 + 2) = local_b8;
LAB_140f0a237:
        TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar8);
      }
      pwVar9 = pwVar16;
      if (*(longlong *)(param_1 + 0x1c0) != 0) {
        pwVar9 = *(wchar_t **)(param_1 + 0x1c8);
      }
      lVar5 = (**(code **)(*(longlong *)pwVar9 + 200))();
      if (lVar5 != 0) {
        pwVar9 = pwVar16;
        if (*(longlong *)(param_1 + 0x1c0) != 0) {
          pwVar9 = *(wchar_t **)(param_1 + 0x1c8);
        }
        pplVar10 = (longlong **)(**(code **)(*(longlong *)pwVar9 + 200))();
        plVar8 = (longlong *)FMemory::Realloc(0,0x30);
        local_78[0] = plVar8;
        if (plVar8 != (longlong *)0x0) {
          *plVar8 = (longlong)&PTR_FUN_143f4d170;
          FWeakObjectPtr::operator=(plVar8 + 1,param_1);
          plVar8[2] = (longlong)FUN_140efce80;
          lVar5 = FDelegateHandle::GenerateNewID();
          plVar8[4] = lVar5;
          *plVar8 = (longlong)&PTR_FUN_143f4d1b8;
        }
        if (local_78 != pplVar10) {
          if (plVar8 == (longlong *)0x0) {
            if ((*(int *)(pplVar10 + 1) != 0) && (plVar11 = *pplVar10, plVar11 != (longlong *)0x0))
            {
              (**(code **)(*plVar11 + 0x28))(plVar11,0);
              if (*pplVar10 != (longlong *)0x0) {
                plVar11 = (longlong *)FMemory::Realloc(*pplVar10,0,0);
                *pplVar10 = plVar11;
              }
              *(undefined4 *)(pplVar10 + 1) = 0;
            }
          }
          else {
            (**(code **)(*plVar8 + 0x30))(plVar8,pplVar10);
          }
        }
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 0x28))(plVar8,0);
          local_78[0] = (longlong *)FMemory::Realloc(plVar8,0,0);
          if (local_78[0] != (longlong *)0x0) {
            FMemory::Free(local_78[0]);
          }
        }
      }
      plVar8 = *(longlong **)(param_1 + 0x1b8);
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        iVar4 = (int)plVar8[1];
        bVar17 = iVar4 == 0;
        if (bVar17) {
          *(int *)(plVar8 + 1) = 0;
          iVar4 = 0;
        }
        UNLOCK();
        while (!bVar17) {
          LOCK();
          bVar17 = iVar4 == (int)plVar8[1];
          if (bVar17) {
            *(int *)(plVar8 + 1) = iVar4 + 1;
          }
          UNLOCK();
          if (bVar17) {
            if (plVar8 == (longlong *)0x0) {
              return;
            }
            lVar5 = *(longlong *)(param_1 + 0x1b0);
            if (lVar5 != 0) {
              if (*(char *)(param_1 + 0x215) == '\0') {
                if (*(longlong *)(param_1 + 0x1c0) != 0) {
                  pwVar16 = *(wchar_t **)(param_1 + 0x1c8);
                }
                puVar12 = (undefined8 *)(**(code **)(*(longlong *)pwVar16 + 0x70))(pwVar16,local_68)
                ;
                if (*(int *)(puVar12 + 1) == 0) {
                  puVar14 = &DAT_143f3eda8;
                }
                else {
                  puVar14 = (undefined2 *)*puVar12;
                }
                FUN_14203e4e0(lVar5,puVar14);
                if (local_68[0] != 0) {
                  FMemory::Free();
                }
              }
              else if (*(int *)(param_1 + 0x230) == 0) {
                FUN_14203e4e0(lVar5,&DAT_143f3eda8);
              }
              else {
                FUN_14203e4e0(lVar5,*(undefined8 *)(param_1 + 0x228));
              }
            }
            LOCK();
            plVar11 = plVar8 + 1;
            lVar5 = *plVar11;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)lVar5 != 1) {
              return;
            }
            (**(code **)*plVar8)(plVar8);
            LOCK();
            piVar13 = (int *)((longlong)plVar8 + 0xc);
            iVar4 = *piVar13;
            *piVar13 = *piVar13 + -1;
            UNLOCK();
            if (iVar4 != 1) {
              return;
            }
            (**(code **)(*plVar8 + 8))(plVar8,1);
            return;
          }
          LOCK();
          iVar4 = (int)plVar8[1];
          bVar17 = iVar4 == 0;
          if (bVar17) {
            *(int *)(plVar8 + 1) = 0;
            iVar4 = 0;
          }
          UNLOCK();
        }
      }
    }
  }
  return;
}



// FUNCTION 140f0a4b0 FUN_140f0a4b0 body=8 status=ok
// SIG undefined FUN_140f0a4b0(void)

void FUN_140f0a4b0(longlong param_1)

{
  *(undefined1 *)(param_1 + 400) = 1;
  return;
}



// FUNCTION 140f0a4c0 FUN_140f0a4c0 body=319 status=ok
// SIG undefined FUN_140f0a4c0(void)

void FUN_140f0a4c0(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong local_18;
  longlong local_10;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x5d8);
  if (lVar2 == 0) {
LAB_140f0a525:
    lVar2 = 0;
  }
  else {
    lVar3 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140f0a525;
  }
  if (param_2 == 0) {
    lVar3 = 0;
  }
  else {
    uVar4 = UGameplayTagAssetInterface::GetPrivateStaticClass();
    lVar3 = UObjectBaseUtility::GetInterfaceAddress(param_2,uVar4);
  }
  lVar5 = (**(code **)(*(longlong *)(param_2 + 0xd98) + 0x98))();
  if (lVar5 != 0) {
    lVar6 = AGFreezeCharacterCue::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140f0a594;
  }
  lVar5 = 0;
LAB_140f0a594:
  *(longlong *)(param_1 + 0x658) = lVar5;
  if ((lVar2 != 0) && (lVar3 != 0)) {
    if (*(longlong *)(param_1 + 0x648) != 0) {
      local_18 = param_2;
      local_10 = lVar3;
      FUN_140ffb870(*(longlong *)(param_1 + 0x648),&local_18,0,2);
    }
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
  }
  FUN_140f0ffd0(param_1);
  return;
}



// FUNCTION 140f0a600 FUN_140f0a600 body=356 status=ok
// SIG undefined FUN_140f0a600(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f0a600(longlong *param_1,char param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  if ((char)param_1[0xc9] != param_2) {
    *(char *)(param_1 + 0xc9) = param_2;
    cVar1 = FUN_142ebdc00();
    if ((cVar1 != '\0') && (cVar1 = FUN_142eba870(param_1), cVar1 == '\0')) {
      if ((char)param_1[0xc9] == '\0') {
        return;
      }
      local_88 = (longlong *)0x0;
      local_78 = 0;
      puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
      if (puVar2 != (undefined8 *)0x0) {
        puVar2[1] = param_1;
        *puVar2 = &PTR_FUN_143f77b70;
      }
      local_b8[0] = &LAB_140ee0d10;
      uVar3 = FUN_1420849a0(param_1,local_68,local_b8);
      FUN_14208d480(param_1,uVar3);
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
      if (local_78 != 0) {
        plVar4 = local_a8;
        if (local_88 != (longlong *)0x0) {
          plVar4 = local_88;
        }
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x10))(plVar4,0);
        }
      }
      if (local_88 != (longlong *)0x0) {
        FMemory::Free();
      }
      FUN_142eb05b0(param_1);
      return;
    }
    (**(code **)(*param_1 + 0x5d8))(param_1);
  }
  return;
}



// FUNCTION 140f0a770 FUN_140f0a770 body=557 status=ok
// SIG undefined FUN_140f0a770(void)

void FUN_140f0a770(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *local_48;
  int local_40;
  longlong *local_38;
  ulonglong local_30;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  *(longlong *)(param_1 + 0x290) = param_2;
  if (param_2 == 0) {
    return;
  }
  local_30 = 0;
  plVar2 = *(longlong **)(param_1 + 0x2b0);
  local_38 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    uVar1 = UBlendableInterface::GetPrivateStaticClass();
    local_30 = UObjectBaseUtility::GetInterfaceAddress(plVar2,uVar1);
    param_2 = *(longlong *)(param_1 + 0x290);
  }
  FUN_142ecfdd0(param_2,&local_38,0,0,0,0);
  uStack_20 = 0;
  local_48 = (longlong *)0x0;
  local_28 = (code *)&LAB_140eff650;
  plVar2 = (longlong *)FMemory::Realloc(0,0x30);
  local_40 = 3;
  local_48 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_FUN_143fcfec0;
    FWeakObjectPtr::operator=(plVar2 + 1,param_1);
    *(undefined4 *)(plVar2 + 2) = (undefined4)local_28;
    *(undefined4 *)((longlong)plVar2 + 0x14) = local_28._4_4_;
    *(undefined4 *)(plVar2 + 3) = uStack_20;
    *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_1c;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[5] = lVar3;
    *plVar2 = (longlong)&PTR_FUN_143fcff08;
  }
  FUN_142ee1c00(param_1,PTR_s_textInput_14629d7e8,param_1 + 0x2b8,&local_48);
  if (local_40 != 0) {
    if (local_48 == (longlong *)0x0) goto LAB_140f0a8bb;
    (**(code **)(*local_48 + 0x28))(local_48,0);
    if (local_48 != (longlong *)0x0) {
      local_48 = (longlong *)FMemory::Realloc(local_48,0,0);
    }
    local_40 = 0;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
LAB_140f0a8bb:
  uStack_20 = 0;
  local_38 = (longlong *)0x0;
  local_28 = FUN_140efbe30;
  plVar2 = (longlong *)FMemory::Realloc(0,0x30);
  local_30 = CONCAT44(local_30._4_4_,3);
  local_38 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_FUN_143fcfec0;
    FWeakObjectPtr::operator=(plVar2 + 1,param_1);
    *(undefined4 *)(plVar2 + 2) = (undefined4)local_28;
    *(undefined4 *)((longlong)plVar2 + 0x14) = local_28._4_4_;
    *(undefined4 *)(plVar2 + 3) = uStack_20;
    *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_1c;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[5] = lVar3;
    *plVar2 = (longlong)&PTR_FUN_143fcff08;
  }
  FUN_142ee1c00(param_1,PTR_s_keyDown_14629d7e0,param_1 + 0x2c0,&local_38);
  if ((int)local_30 != 0) {
    if (local_38 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_38 + 0x28))(local_38,0);
    if (local_38 != (longlong *)0x0) {
      local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
    }
    local_30 = local_30 & 0xffffffff00000000;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}



// FUNCTION 140f0a9a0 FUN_140f0a9a0 body=9 status=ok
// SIG undefined FUN_140f0a9a0(void)

void FUN_140f0a9a0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x248) = param_2;
  return;
}



// FUNCTION 140f0a9b0 FUN_140f0a9b0 body=535 status=ok
// SIG undefined FUN_140f0a9b0(void)

void FUN_140f0a9b0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong local_28 [2];
  
  if (*(longlong *)(param_1 + 0x688) == 0) goto LAB_140f0ab98;
  lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x688) + 0x1d0);
  if (lVar8 == 0) {
LAB_140f0aa18:
    lVar8 = 0;
  }
  else {
    lVar4 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_140f0aa18;
  }
  if (lVar8 != param_2) {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x688) + 0x1d8);
    if ((param_2 != 0) && (lVar7 = *(longlong *)(param_2 + 0x10), lVar7 != 0)) {
      lVar5 = FUN_1428dfc70();
      lVar6 = lVar7;
      do {
        if (lVar6 == lVar5) goto LAB_140f0aa61;
        lVar6 = *(longlong *)(lVar6 + 0x30);
      } while (lVar6 != 0);
    }
    lVar7 = 0;
LAB_140f0aa61:
    if (lVar4 != 0) {
      lVar5 = FUN_1428dfc70();
      lVar6 = lVar4;
      do {
        if (lVar6 == lVar5) goto LAB_140f0aa81;
        lVar6 = *(longlong *)(lVar6 + 0x30);
      } while (lVar6 != 0);
    }
    lVar4 = 0;
LAB_140f0aa81:
    if ((lVar8 != 0) && (lVar7 != lVar4)) {
      iVar3 = TArray<FString,FDefaultAllocator>::AddZeroed(param_1 + 0x6b0);
      lVar6 = (longlong)iVar3;
      *(longlong *)(*(longlong *)(param_1 + 0x6b0) + lVar6 * 0x10) = lVar8;
      *(undefined1 *)(*(longlong *)(param_1 + 0x6b0) + 0xc + lVar6 * 0x10) = 1;
      *(undefined1 *)(*(longlong *)(param_1 + 0x6b0) + 0xd + lVar6 * 0x10) = 0;
    }
    if (param_2 != 0) {
      if (lVar7 == lVar4) {
        FUN_140f09b90(*(undefined8 *)(param_1 + 0x688),param_2);
        local_28[0] = 0;
        local_28[1] = 3;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
        FGenericPlatformString::Memcpy(local_28[0],&DAT_144601f40,6);
        FUN_142088cf0(*(undefined8 *)(param_1 + 0x688),local_28);
        if (local_28[0] != 0) {
          FMemory::Free();
        }
      }
      else {
        plVar1 = (longlong *)(param_1 + 0x6b0);
        lVar8 = (longlong)*(int *)(param_1 + 0x6b8);
        iVar3 = *(int *)(param_1 + 0x6b8) + 1;
        *(int *)(param_1 + 0x6b8) = iVar3;
        if (*(int *)(param_1 + 0x6bc) < iVar3) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1);
        }
        lVar4 = *plVar1;
        *(undefined8 *)(lVar4 + lVar8 * 0x10) = 0;
        *(undefined8 *)(lVar4 + 8 + lVar8 * 0x10) = 0;
        *(longlong *)(*plVar1 + lVar8 * 0x10) = param_2;
        *(undefined1 *)(*plVar1 + 0xc + lVar8 * 0x10) = 1;
        *(undefined1 *)(*plVar1 + 0xd + lVar8 * 0x10) = 1;
      }
    }
  }
LAB_140f0ab98:
  if ((0 < *(int *)(param_1 + 0x6b8)) && (*(char *)(param_1 + 0x6c0) == '\0')) {
    FUN_140f03520(param_1);
    return;
  }
  return;
}



// FUNCTION 140f0abd0 FUN_140f0abd0 body=432 status=ok
// SIG undefined FUN_140f0abd0(void)

void FUN_140f0abd0(undefined8 param_1,longlong param_2,undefined4 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined4 local_118;
  undefined4 local_114;
  int iStack_110;
  undefined8 local_108;
  longlong local_100 [3];
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  int local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined1 local_b4;
  undefined8 local_b0;
  undefined1 local_a8 [16];
  undefined1 *local_98 [2];
  undefined1 local_88 [32];
  undefined8 local_68;
  undefined4 local_58;
  undefined1 local_48 [32];
  
  local_118 = 0xffffffff;
  local_100[0] = 0;
  local_108 = 0;
  local_100[1] = 0;
  local_114 = 0;
  iStack_110 = 0;
  local_res8 = 0;
  if (param_2 == 0) {
    local_res8 = 0;
    local_108 = 0;
  }
  else {
    uVar1 = FSoftObjectPath::FSoftObjectPath(local_48);
    FSoftObjectPath::operator=(&local_108,uVar1);
    FWeakObjectPtr::operator=(&local_118,param_2);
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    iStack_110 = DAT_1464b56f4;
  }
  FWeakObjectPtr::operator=(&local_res8,param_1);
  local_e8 = (undefined4)local_res8;
  local_e4 = local_res8._4_4_;
  local_d0 = 0;
  local_e0 = local_118;
  local_dc = local_114;
  local_d8 = iStack_110;
  local_b0 = local_108;
  local_c8 = 0;
  local_c0 = 0;
  local_res10 = 0;
  local_100[2] = param_1;
  FString::FString(local_a8,local_100);
  FSoftObjectPath::operator=(&local_d0,&local_b0);
  local_68 = 0;
  local_58 = 0;
  local_b8 = param_3;
  local_b4 = param_4;
  puVar2 = (undefined8 *)FUN_140438ef0(0x48,local_88);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144605cb0;
    puVar2[1] = local_100[2];
    *(undefined4 *)(puVar2 + 2) = local_e8;
    *(undefined4 *)((longlong)puVar2 + 0x14) = local_e4;
    TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(puVar2 + 3,&local_e0);
    *(undefined4 *)(puVar2 + 8) = local_b8;
    *(undefined1 *)((longlong)puVar2 + 0x44) = local_b4;
  }
  local_98[0] = &LAB_140ee0870;
  FUN_14208c5d0(param_1,local_98);
  if (local_c8 != 0) {
    FMemory::Free();
  }
  if (local_100[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140f0ad80 FUN_140f0ad80 body=784 status=ok
// SIG undefined FUN_140f0ad80(void)

void FUN_140f0ad80(longlong *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  undefined *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  bool bVar12;
  longlong local_78 [3];
  longlong *plStack_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_30 [8];
  longlong *local_28;
  
  plVar9 = (longlong *)0x0;
  if ((*(int *)((longlong)param_1 + 0x734) == 0) && (0 < param_2)) {
    FUN_140efd5a0();
  }
  *(int *)((longlong)param_1 + 0x734) = param_2;
  puVar11 = &DAT_143f3eda8;
  if ((param_1[0xdc] != 0) && (param_1[0xdd] != 0)) {
    piVar1 = (int *)(param_1[0xdd] + 8);
    LOCK();
    iVar5 = *piVar1;
    if (iVar5 == 0) {
      *piVar1 = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (0 < iVar5) goto LAB_140f0ae58;
  }
  if ((int)param_1[0xda] == 0) {
    puVar10 = &DAT_143f3eda8;
  }
  else {
    puVar10 = (undefined2 *)param_1[0xd9];
  }
  uVar6 = (**(code **)(*param_1 + 0x4a8))(param_1,local_58,puVar10);
  FUN_142ede260(param_1 + 0xdb,uVar6);
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_50 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)local_50 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
LAB_140f0ae58:
  if ((param_1[0xdc] != 0) && (param_1[0xdd] != 0)) {
    piVar1 = (int *)(param_1[0xdd] + 8);
    LOCK();
    iVar5 = *piVar1;
    if (iVar5 == 0) {
      *piVar1 = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (0 < iVar5) {
      bVar12 = *(int *)((longlong)param_1 + 0x734) < 2;
      if (bVar12) {
        local_78[0] = 0;
        local_78[1] = 0;
        uVar6 = FText::FromString(local_48,local_78);
      }
      else {
        local_78[2] = 0;
        plStack_60 = (longlong *)0x0;
        uVar6 = FText::AsNumber(local_30,*(int *)((longlong)param_1 + 0x734),0,local_78 + 2);
      }
      UMistDebugEntityScreen::InspectEntity(param_1 + 0xdb,uVar6,1,0);
      if ((bVar12) && (local_40 != (longlong *)0x0)) {
        LOCK();
        plVar2 = local_40 + 1;
        lVar3 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar1 = (int *)((longlong)local_40 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_40 + 8))(local_40,1);
          }
        }
      }
      if ((bVar12) && (local_78[0] != 0)) {
        FMemory::Free();
      }
      if ((!bVar12) && (local_28 != (longlong *)0x0)) {
        LOCK();
        plVar2 = local_28 + 1;
        lVar3 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_28)(local_28);
          LOCK();
          piVar1 = (int *)((longlong)local_28 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_28 + 8))(local_28,1);
          }
        }
      }
      plVar2 = plStack_60;
      if ((!bVar12) && (plStack_60 != (longlong *)0x0)) {
        LOCK();
        plVar8 = plStack_60 + 1;
        lVar3 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*plStack_60)(plStack_60);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar2 + 8))(plVar2,1);
          }
        }
      }
    }
  }
  if ((int)param_1[0xdf] != 0) {
    puVar11 = (undefined2 *)param_1[0xde];
  }
  cVar4 = FUN_14208d1c0(param_1,param_1 + 0xe0,puVar11);
  if (cVar4 != '\0') {
    plVar2 = (longlong *)param_1[0xe1];
    plVar8 = plVar2;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      iVar5 = (int)plVar2[1];
      bVar12 = iVar5 == 0;
      if (bVar12) {
        *(int *)(plVar2 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
      while (plVar8 = plVar9, !bVar12) {
        LOCK();
        bVar12 = iVar5 == (int)plVar2[1];
        if (bVar12) {
          *(int *)(plVar2 + 1) = iVar5 + 1;
        }
        UNLOCK();
        if (bVar12) {
          plVar8 = plVar2;
          if (plVar2 != (longlong *)0x0) {
            plVar9 = (longlong *)param_1[0xe0];
          }
          break;
        }
        LOCK();
        iVar5 = (int)plVar2[1];
        bVar12 = iVar5 == 0;
        if (bVar12) {
          *(int *)(plVar2 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
      }
    }
    puVar7 = &DAT_1445eea40;
    if (1 < *(int *)((longlong)param_1 + 0x734)) {
      puVar7 = &DAT_1445eea38;
    }
    FUN_14203e4e0(plVar9,puVar7);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar8 + 1;
      lVar3 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140f0b090 FUN_140f0b090 body=23 status=ok
// SIG undefined FUN_140f0b090(void)

void FUN_140f0b090(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x170) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140f0b09f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x170) + 0x2b8))();
    return;
  }
  return;
}



// FUNCTION 140f0b0b0 FUN_140f0b0b0 body=42 status=ok
// SIG undefined FUN_140f0b0b0(void)

void FUN_140f0b0b0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x170);
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000140f0b0cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x2c0))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140f0b0d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x2b8))(plVar1,0,1);
  return;
}



// FUNCTION 140f0b0e0 FUN_140f0b0e0 body=19 status=ok
// SIG undefined FUN_140f0b0e0(void)

void FUN_140f0b0e0(longlong param_1,undefined1 param_2)

{
  if (*(longlong *)(param_1 + 0x170) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x170) + 0x1c8) = param_2;
  }
  return;
}



// FUNCTION 140f0b100 FUN_140f0b100 body=706 status=ok
// SIG undefined FUN_140f0b100(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f0b100(longlong *param_1,byte param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_e8 [32];
  longlong local_c8 [2];
  code *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1468723e0) && (_Init_thread_header(&DAT_1468723e0), DAT_1468723e0 == -1))
  {
    FName::FName(&DAT_1468723d8,L"AutoSave",1);
    _Init_thread_footer(&DAT_1468723e0);
  }
  cVar1 = FUN_142ebd920(param_1);
  if (((cVar1 != '\0') && (param_1[200] != 0)) && (param_2 != *(byte *)((longlong)param_1 + 0x634)))
  {
    *(byte *)((longlong)param_1 + 0x634) = param_2;
    if (param_2 < 2) {
      (**(code **)(*param_1 + 0x580))(param_1,1);
    }
    else if (param_2 == 2) {
      uVar3 = 0;
      local_88 = (longlong *)0x0;
      local_78 = 0;
      puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
      if (puVar2 != (undefined8 *)0x0) {
        puVar2[1] = param_1;
        *puVar2 = &PTR_FUN_143f77b70;
      }
      local_b8[0] = thunk_FUN_140ed1570;
      cVar1 = FUN_142ebdc00(param_1);
      if ((cVar1 == '\0') || (cVar1 = FUN_142eba870(param_1), cVar1 != '\0')) {
        if (local_78 != 0) {
          plVar4 = local_a8;
          if (local_88 != (longlong *)0x0) {
            plVar4 = local_88;
          }
          if (plVar4 != (longlong *)0x0) {
            uVar3 = (**(code **)(*plVar4 + 8))();
          }
        }
        (*local_b8[0])(uVar3);
      }
      else {
        uVar3 = FUN_1420849a0(param_1,local_68,local_b8);
        FUN_14208d480(param_1,uVar3);
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
        FUN_142eb05b0(param_1);
      }
      if (local_78 != 0) {
        plVar4 = local_a8;
        if (local_88 != (longlong *)0x0) {
          plVar4 = local_88;
        }
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x10))(plVar4,0);
        }
      }
      if (local_88 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
    else if (param_2 == 3) {
      local_c8[1] = 5;
      local_c8[0] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_c8,0);
      FGenericPlatformString::Memcpy(local_c8[0],L"idle",10);
      FUN_142088910(param_1[200],local_c8);
      if (local_c8[0] != 0) {
        FMemory::Free();
      }
    }
    else if (param_2 == 4) {
      local_c8[1] = 5;
      local_c8[0] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_c8,0);
      FGenericPlatformString::Memcpy(local_c8[0],L"exit",10);
      FUN_142088910(param_1[200],local_c8);
      if (local_c8[0] != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140f0b3d0 FUN_140f0b3d0 body=151 status=ok
// SIG undefined FUN_140f0b3d0(void)

void FUN_140f0b3d0(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x6d8) == 0) {
    if (param_2 == 0) {
      param_2 = FWeakObjectPtr::Get(param_1 + 0x58c);
    }
    *(longlong *)(param_1 + 0x6d8) = param_2;
    plVar2 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x680);
    if (plVar2 != (longlong *)0x0) {
      lVar3 = AGShrineUsable::GetPrivateStaticClass();
      if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
          lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        (**(code **)(*plVar2 + 0x590))(plVar2,*(undefined8 *)(param_1 + 0x6d8));
      }
    }
  }
  return;
}



// FUNCTION 140f0b470 FUN_140f0b470 body=174 status=ok
// SIG undefined FUN_140f0b470(void)

void FUN_140f0b470(longlong param_1,undefined4 param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  
  *(undefined4 *)(param_1 + 0x240) = param_2;
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x1a8));
  LOCK();
  *(int *)(param_1 + 0x1b4) = *(int *)(param_1 + 0x1b4) + 1;
  UNLOCK();
  uVar1 = 0;
  plVar2 = *(longlong **)(param_1 + 0x198);
  uVar3 = (longlong)*(int *)(param_1 + 0x1a0) & 0x1fffffffffffffff;
  if (plVar2 + *(int *)(param_1 + 0x1a0) < plVar2) {
    uVar3 = uVar1;
  }
  if (uVar3 != 0) {
    do {
      if (*plVar2 != 0) {
        FUN_1410a63a0(*plVar2,*(undefined4 *)(param_1 + 0x240));
      }
      plVar2 = plVar2 + 1;
      uVar1 = uVar1 + 1;
    } while (uVar1 != uVar3);
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x1a8));
  LOCK();
  *(int *)(param_1 + 0x1b4) = *(int *)(param_1 + 0x1b4) + -1;
  UNLOCK();
  return;
}



// FUNCTION 140f0b520 FUN_140f0b520 body=173 status=ok
// SIG undefined FUN_140f0b520(void)

void FUN_140f0b520(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined4 local_res8;
  undefined4 local_resc;
  
  *(undefined1 *)(param_1 + 0x23c) = 0;
  FWeakObjectPtr::operator=(param_1 + 0x170);
  FWeakObjectPtr::operator=(&local_res8,0);
  *(undefined4 *)(param_1 + 0x178) = local_res8;
  *(undefined4 *)(param_1 + 0x17c) = local_resc;
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x170);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    plVar2 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x170);
    uVar3 = USoundSourceBus::GetPrivateStaticClass();
    uVar3 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar3);
  }
  FWeakObjectPtr::operator=(param_1 + 0x180,uVar3);
  FWeakObjectPtr::operator=(param_1 + 400,param_3);
  return;
}



// FUNCTION 140f0b5d0 FUN_140f0b5d0 body=289 status=ok
// SIG undefined FUN_140f0b5d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f0b5d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  local_c8 = param_1;
  uStack_c0 = param_2;
  puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_a8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_143f77c18;
    *(undefined4 *)(puVar1 + 1) = (undefined4)local_c8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = local_c8._4_4_;
    *(undefined4 *)(puVar1 + 2) = (undefined4)uStack_c0;
    *(undefined4 *)((longlong)puVar1 + 0x14) = uStack_c0._4_4_;
  }
  local_b8[0] = &LAB_140ee1050;
  uVar2 = FUN_1420849a0(param_1,local_68,local_b8);
  FUN_14208c260(param_1,uVar2);
  if (local_28 != 0) {
    plVar3 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar3 = local_38;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_78 != 0) {
    plVar3 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar3 = local_88;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140f0b700 FUN_140f0b700 body=270 status=ok
// SIG undefined FUN_140f0b700(void)

void FUN_140f0b700(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  
  if (param_2 != 0) {
    lVar2 = UObject::GetPrivateStaticClass();
    lVar5 = param_2;
    do {
      if (lVar5 == lVar2) goto LAB_140f0b730;
      lVar5 = *(longlong *)(lVar5 + 0x30);
    } while (lVar5 != 0);
  }
  param_2 = 0;
LAB_140f0b730:
  *(longlong *)(param_1 + 0x590) = param_2;
  if (param_2 != 0) {
    lVar3 = FUN_1413f2350();
    lVar5 = *(longlong *)(param_1 + 0x590);
    lVar2 = lVar5;
    if (lVar5 != 0) {
      while (lVar2 != lVar3) {
        lVar2 = *(longlong *)(lVar2 + 0x30);
        if (lVar2 == 0) {
          return;
        }
      }
      if (lVar5 != 0) {
        if (*(longlong *)(param_1 + 0x2b8) == 0) {
          *(undefined1 *)(param_1 + 0x5b0) = 1;
          return;
        }
        if (lVar5 != 0) {
          plVar4 = (longlong *)FUN_1413f2350();
          plVar6 = *(longlong **)(param_1 + 0x590);
          for (plVar1 = plVar6; plVar1 != (longlong *)0x0; plVar1 = (longlong *)plVar1[6]) {
            if (plVar1 == plVar4) goto LAB_140f0b7c0;
          }
        }
        plVar6 = (longlong *)0x0;
LAB_140f0b7c0:
        lVar5 = plVar6[0x1f];
        if (lVar5 == 0) {
          (**(code **)(*plVar6 + 0x368))(plVar6);
          lVar5 = plVar6[0x1f];
        }
        plVar6 = *(longlong **)(param_1 + 0x5a8);
        if ((plVar6 != (longlong *)0x0) && (lVar5 != 0)) {
          (**(code **)(*plVar6 + 0x2b0))(plVar6,lVar5 + 0x40,1,0);
        }
      }
    }
  }
  return;
}



// FUNCTION 140f0b810 FUN_140f0b810 body=1376 status=ok
// SIG undefined FUN_140f0b810(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140f0b810(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  undefined8 uVar11;
  longlong lVar12;
  wchar_t *pwVar13;
  longlong lVar14;
  int *piVar15;
  uint in_stack_ffffffffffffff68;
  longlong local_68;
  float local_60;
  int local_58;
  int local_54;
  longlong local_50;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  
  lVar12 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar12 + 0x38) < DAT_1468723c0) &&
     (_Init_thread_header(&DAT_1468723c0), DAT_1468723c0 == -1)) {
    FName::FName(&DAT_1468723b8,L"UI_None",1);
    _Init_thread_footer(&DAT_1468723c0);
  }
  if ((*(int *)(lVar12 + 0x38) < DAT_1468723d0) &&
     (_Init_thread_header(&DAT_1468723d0), DAT_1468723d0 == -1)) {
    FName::FName(&DAT_1468723c8,L"InWorldScaleformTexture",1);
    _Init_thread_footer(&DAT_1468723d0);
  }
  FUN_142398ec0(param_1,0,1);
  FUN_142398d80(param_1,*(undefined4 *)((longlong)param_1 + 0x7b4));
  cVar10 = FUN_142390860(param_1,param_4);
  if ((cVar10 == '\0') && (FUN_142382f60(param_1,param_4,&DAT_146532180,param_5), param_4 != 0)) {
    local_68 = *(longlong *)(param_4 + 0x220);
    local_60 = *(float *)(param_4 + 0x228);
    local_50 = CONCAT44(local_50._4_4_,local_60);
    FUN_1423990b0(param_1,&local_68,0,0,in_stack_ffffffffffffff68 & 0xffffff00);
  }
  (**(code **)(*param_1 + 0x640))(param_1,DAT_1468723b8);
  if (param_1[0xe5] == 0) {
    return;
  }
  FUN_14281d030(param_1[0xe5],&local_48);
  local_50 = CONCAT44(local_50._4_4_,local_34 - local_40);
  param_1[0xfe] = CONCAT44(local_38 - local_44,local_3c - local_48);
  *(float *)(param_1 + 0xff) = local_34 - local_40;
  if (param_1[0xfc] == 0) {
    FUN_1417846f0(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    uVar11 = UTexture2D::GetPrivateStaticClass();
    lVar12 = FUN_1417985e0(uVar11,param_1,0,0,0,0,0,0,0);
    param_1[0xfc] = lVar12;
  }
  if ((longlong *)param_1[0xfb] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xfb] + 0x280))();
    param_1[0xfb] = 0;
  }
  if (param_3 == 0) {
    return;
  }
  if (param_1[0xfc] == 0) {
    return;
  }
  *(undefined1 *)(param_3 + 0x88) = 1;
  *(int *)(param_1[0xfc] + 0xc0) = (int)*(float *)(param_1 + 0xf7);
  *(int *)(param_1[0xfc] + 0xc4) = (int)*(float *)((longlong)param_1 + 0x7bc);
  *(byte *)(param_1[0xfc] + 0x4b) = *(byte *)(param_1[0xfc] + 0x4b) | 1;
  *(uint *)(param_1[0xfc] + 0xdc) = *(uint *)(param_1[0xfc] + 0xdc) | 1;
  uVar9 = uRam00000001468b5d84;
  uVar8 = uRam00000001468b5d80;
  uVar7 = uRam00000001468b5d7c;
  lVar12 = param_1[0xfc];
  *(undefined4 *)(lVar12 + 200) = _DAT_1468b5d78;
  *(undefined4 *)(lVar12 + 0xcc) = uVar7;
  *(undefined4 *)(lVar12 + 0xd0) = uVar8;
  *(undefined4 *)(lVar12 + 0xd4) = uVar9;
  lVar12 = param_1[0xfc];
  FUN_14287a5c0(lVar12,*(undefined4 *)(lVar12 + 0xc0),*(undefined4 *)(lVar12 + 0xc4),2,1);
  pwVar13 = _guard_xfg_dispatch_icall_nop(L"&UGFxBillboardComponent::OnMovieStarted",L"::");
  pwVar6 = (wchar_t *)0x0;
  while (pwVar5 = pwVar13, pwVar5 != (wchar_t *)0x0) {
    pwVar13 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
    pwVar6 = pwVar5;
  }
  FName::FName(&local_68,pwVar6 + 2,1);
  lVar12 = local_68;
  plVar1 = (longlong *)(param_3 + 0xc0);
  FWeakObjectPtr::operator=(&local_58,0);
  local_50 = 0;
  FWeakObjectPtr::operator=(&local_58,param_1);
  local_50 = lVar12;
  if ((lVar12 != 0) && (lVar12 = FWeakObjectPtr::Get(&local_58), lVar12 != 0)) {
    UObject::FindFunction(lVar12,local_50);
  }
  piVar3 = (int *)*plVar1;
  iVar2 = *(int *)(param_3 + 200);
  for (piVar15 = piVar3; piVar15 != piVar3 + (longlong)iVar2 * 4; piVar15 = piVar15 + 4) {
    if (((*piVar15 == local_58) && (piVar15[1] == local_54)) ||
       ((cVar10 = FWeakObjectPtr::IsValid(piVar15), cVar10 == '\0' &&
        (cVar10 = FWeakObjectPtr::IsValid(&local_58), cVar10 == '\0')))) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if ((bVar4) && (*(longlong *)(piVar15 + 2) == local_50)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      if ((int)((longlong)piVar15 - (longlong)piVar3 >> 4) != -1) goto LAB_140f0bbb9;
      break;
    }
  }
  iVar2 = *(int *)(param_3 + 200);
  lVar12 = (longlong)iVar2;
  *(int *)(param_3 + 200) = iVar2 + 1;
  if (*(int *)(param_3 + 0xcc) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
  }
  lVar14 = *plVar1;
  *(int *)(lVar14 + lVar12 * 0x10) = local_58;
  *(int *)(lVar14 + 4 + lVar12 * 0x10) = local_54;
  *(longlong *)(lVar14 + 8 + lVar12 * 0x10) = local_50;
LAB_140f0bbb9:
  TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
  FUN_142ed95f0(param_3,param_2,param_1[0xfc]);
  *(uint *)(param_3 + 0x40) = *(uint *)(param_3 + 0x40) & 0xfffff87f;
  param_1[0xfb] = param_3;
  if (*(float *)(param_1 + 0xf7) < *(float *)((longlong)param_1 + 0x7f4)) {
    local_60 = *(float *)((longlong)param_1 + 0x7bc) / *(float *)(param_1 + 0xff);
    local_50 = CONCAT44(local_50._4_4_,local_60);
    local_68 = CONCAT44(*(float *)(param_1 + 0xf7) / *(float *)((longlong)param_1 + 0x7f4),
                        0x3f800000);
    FUN_142399c30(param_1,&local_68);
  }
  lVar12 = (**(code **)(*param_1 + 0x560))(param_1,0);
  if (lVar12 == 0) {
LAB_140f0bc86:
    lVar12 = (**(code **)(*param_1 + 0x5a8))(param_1,0,0,0);
    if (lVar12 == 0) goto LAB_140f0bcbf;
  }
  else {
    lVar14 = FUN_1429ba110();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar14 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar14 + 0x90) * 8
         ) != lVar14 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_140f0bc86;
  }
  FUN_1425a28b0(lVar12,param_1[0xf5],param_1[0xfc]);
LAB_140f0bcbf:
  param_1[0xfa] = param_2;
  FUN_140f116f0(param_1);
  return;
}



// FUNCTION 140f0bd70 FUN_140f0bd70 body=3567 status=ok
// SIG undefined FUN_140f0bd70(void)

void FUN_140f0bd70(longlong param_1,longlong param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,char param_7)

{
  longlong *plVar1;
  byte *pbVar2;
  wchar_t *pwVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  int *piVar13;
  int *piVar14;
  wchar_t *pwVar15;
  longlong *plVar16;
  int local_res8;
  undefined4 local_res10;
  undefined4 local_res14;
  int local_228;
  int local_224;
  longlong local_220;
  undefined8 local_218;
  float fStack_210;
  float fStack_20c;
  longlong local_208;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  longlong local_1d8;
  undefined8 local_1d0;
  longlong local_1c8;
  undefined8 local_1c0;
  longlong *local_1b8;
  undefined8 local_1b0;
  longlong local_1a8;
  undefined8 local_1a0;
  longlong local_198;
  undefined8 local_190;
  longlong local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  undefined8 local_100;
  undefined8 local_f8;
  longlong local_f0;
  undefined1 local_e8 [8];
  undefined4 local_e0;
  undefined1 local_dc;
  undefined1 local_d8 [8];
  undefined8 local_d0;
  longlong *plStack_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  code *local_a8;
  longlong lStack_a0;
  code *local_98;
  longlong lStack_90;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [32];
  
  *(longlong *)(param_1 + 0x218) = param_2;
  if ((((param_2 == 0) || (*(longlong *)(param_1 + 0x1c0) == 0)) ||
      (*(longlong *)(param_1 + 0x1d0) == 0)) ||
     ((*(longlong *)(param_1 + 0x1e0) == 0 || (*(longlong *)(param_1 + 0x1b0) == 0))))
  goto LAB_140f0ca10;
  pwVar15 = (wchar_t *)0x0;
  plVar1 = (longlong *)(param_1 + 0x228);
  *(undefined4 *)(param_1 + 0x230) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x234)) {
    TArray<float,FDefaultAllocator>::ResizeTo(plVar1,0);
  }
  FUN_142ecffe0(*(undefined8 *)(param_1 + 0x1b0));
  FWeakObjectPtr::operator=(&local_1f8,0);
  FWeakObjectPtr::operator=(&local_1f0,0);
  FWeakObjectPtr::operator=(&local_1e8,0);
  FWeakObjectPtr::operator=(&local_1e0,0);
  FWeakObjectPtr::operator=(&local_res10,0);
  local_1f8 = local_res10;
  local_1f4 = local_res14;
  FWeakObjectPtr::operator=(&local_178,0);
  local_1f0 = local_178;
  local_1ec = local_174;
  FWeakObjectPtr::operator=(&local_170,0);
  local_1e8 = local_170;
  local_1e4 = local_16c;
  FWeakObjectPtr::operator=(&local_168,0);
  local_1e0 = local_168;
  local_1dc = local_164;
  uVar7 = TScriptInterface<IBlendableInterface>::
          TScriptInterface<IBlendableInterface><UMaterialInterface>
                    (local_88,*(undefined8 *)(param_1 + 0x1c0));
  FUN_142ecfd10(*(undefined8 *)(param_1 + 0x218),uVar7,&local_1f8);
  uVar7 = TScriptInterface<IBlendableInterface>::
          TScriptInterface<IBlendableInterface><UMaterialInterface>
                    (local_78,*(undefined8 *)(param_1 + 0x1d0));
  FUN_142ecfd10(*(undefined8 *)(param_1 + 0x218),uVar7,&local_1f8);
  uVar7 = TScriptInterface<IBlendableInterface>::
          TScriptInterface<IBlendableInterface><UMaterialInterface>
                    (local_68,*(undefined8 *)(param_1 + 0x1e0));
  FUN_142ecfd10(*(undefined8 *)(param_1 + 0x218),uVar7,&local_1f8);
  TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_1 + 0x238,param_4);
  if (*(int *)(param_1 + 0x240) != 0) {
    pbVar2 = *(byte **)(param_1 + 0x238);
    local_154 = (float)pbVar2[3] * 0.003921569;
    local_160 = (float)pbVar2[2] * 0.003921569;
    local_158 = (float)*pbVar2 * 0.003921569;
    local_15c = (float)pbVar2[1] * 0.003921569;
    lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + 0x2d0);
    *(undefined4 *)(*(longlong *)(param_1 + 0x1c0) + 0x2e4) = 0;
    if (lVar11 != 0) {
      FUN_142f0c220(lVar11,&local_160,1);
    }
    if (*(int *)(param_1 + 0x240) < 2) {
      plVar16 = *(longlong **)(*(longlong *)(param_1 + 0x1c0) + 0x2d8);
      *(undefined1 *)(*(longlong *)(param_1 + 0x1c0) + 0x2c8) = 0;
      if (plVar16 != (longlong *)0x0) {
        uVar7 = 0;
        goto LAB_140f0c086;
      }
    }
    else {
      lVar11 = *(longlong *)(param_1 + 0x238);
      local_144 = (float)*(byte *)(lVar11 + 7) * 0.003921569;
      local_150 = (float)*(byte *)(lVar11 + 6) * 0.003921569;
      local_148 = (float)*(byte *)(lVar11 + 4) * 0.003921569;
      local_14c = (float)*(byte *)(lVar11 + 5) * 0.003921569;
      lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + 0x2d8);
      *(undefined4 *)(*(longlong *)(param_1 + 0x1c0) + 0x2e8) = 0;
      if (lVar11 != 0) {
        FUN_142f0c220(lVar11,&local_150,1);
      }
      plVar16 = *(longlong **)(*(longlong *)(param_1 + 0x1c0) + 0x2d8);
      *(undefined1 *)(*(longlong *)(param_1 + 0x1c0) + 0x2c8) = 1;
      if (plVar16 != (longlong *)0x0) {
        uVar7 = 1;
LAB_140f0c086:
        (**(code **)(*plVar16 + 0x278))(plVar16,uVar7);
      }
    }
  }
  TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_1 + 0x248,param_5);
  if (*(int *)(param_1 + 0x250) != 0) {
    pbVar2 = *(byte **)(param_1 + 0x248);
    local_134 = (float)pbVar2[3] * 0.003921569;
    local_140 = (float)pbVar2[2] * 0.003921569;
    local_138 = (float)*pbVar2 * 0.003921569;
    local_13c = (float)pbVar2[1] * 0.003921569;
    lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 0x2d0);
    *(undefined4 *)(*(longlong *)(param_1 + 0x1d0) + 0x2e4) = 0;
    if (lVar11 != 0) {
      FUN_142f0c220(lVar11,&local_140,1);
    }
    if (*(int *)(param_1 + 0x250) < 2) {
      plVar16 = *(longlong **)(*(longlong *)(param_1 + 0x1d0) + 0x2d8);
      *(undefined1 *)(*(longlong *)(param_1 + 0x1d0) + 0x2c8) = 0;
      if (plVar16 != (longlong *)0x0) {
        uVar7 = 0;
        goto LAB_140f0c1ec;
      }
    }
    else {
      lVar11 = *(longlong *)(param_1 + 0x248);
      local_124 = (float)*(byte *)(lVar11 + 7) * 0.003921569;
      local_130 = (float)*(byte *)(lVar11 + 6) * 0.003921569;
      local_128 = (float)*(byte *)(lVar11 + 4) * 0.003921569;
      local_12c = (float)*(byte *)(lVar11 + 5) * 0.003921569;
      lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 0x2d8);
      *(undefined4 *)(*(longlong *)(param_1 + 0x1d0) + 0x2e8) = 0;
      if (lVar11 != 0) {
        FUN_142f0c220(lVar11,&local_130,1);
      }
      plVar16 = *(longlong **)(*(longlong *)(param_1 + 0x1d0) + 0x2d8);
      *(undefined1 *)(*(longlong *)(param_1 + 0x1d0) + 0x2c8) = 1;
      if (plVar16 != (longlong *)0x0) {
        uVar7 = 1;
LAB_140f0c1ec:
        (**(code **)(*plVar16 + 0x278))(plVar16,uVar7);
      }
    }
  }
  TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_1 + 600,param_6);
  if (*(int *)(param_1 + 0x260) != 0) {
    pbVar2 = *(byte **)(param_1 + 600);
    local_114 = (float)pbVar2[3] * 0.003921569;
    local_120 = (float)pbVar2[2] * 0.003921569;
    local_118 = (float)*pbVar2 * 0.003921569;
    local_11c = (float)pbVar2[1] * 0.003921569;
    lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x1e0) + 0x2d0);
    *(undefined4 *)(*(longlong *)(param_1 + 0x1e0) + 0x2e4) = 0;
    if (lVar11 != 0) {
      FUN_142f0c220(lVar11,&local_120,1);
    }
    if (*(int *)(param_1 + 0x260) < 2) {
      plVar16 = *(longlong **)(*(longlong *)(param_1 + 0x1e0) + 0x2d8);
      *(undefined1 *)(*(longlong *)(param_1 + 0x1e0) + 0x2c8) = 0;
      if (plVar16 != (longlong *)0x0) {
        uVar7 = 0;
        goto LAB_140f0c352;
      }
    }
    else {
      lVar11 = *(longlong *)(param_1 + 600);
      local_104 = (float)*(byte *)(lVar11 + 7) * 0.003921569;
      local_110 = (float)*(byte *)(lVar11 + 6) * 0.003921569;
      local_108 = (float)*(byte *)(lVar11 + 4) * 0.003921569;
      local_10c = (float)*(byte *)(lVar11 + 5) * 0.003921569;
      lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x1e0) + 0x2d8);
      *(undefined4 *)(*(longlong *)(param_1 + 0x1e0) + 0x2e8) = 0;
      if (lVar11 != 0) {
        FUN_142f0c220(lVar11,&local_110,1);
      }
      plVar16 = *(longlong **)(*(longlong *)(param_1 + 0x1e0) + 0x2d8);
      *(undefined1 *)(*(longlong *)(param_1 + 0x1e0) + 0x2c8) = 1;
      if (plVar16 != (longlong *)0x0) {
        uVar7 = 1;
LAB_140f0c352:
        (**(code **)(*plVar16 + 0x278))(plVar16,uVar7);
      }
    }
  }
  iVar5 = *(int *)(param_1 + 0x230) + 1;
  *(int *)(param_1 + 0x230) = iVar5;
  if (*(int *)(param_1 + 0x234) < iVar5) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1);
  }
  iVar5 = *(int *)(param_3 + 1);
  if (iVar5 != 0) {
    iVar6 = *(int *)(param_1 + 0x230);
    if (*(int *)(param_1 + 0x234) < iVar5 + iVar6) {
      TArray<float,FDefaultAllocator>::ResizeTo(plVar1);
      iVar6 = *(int *)(param_1 + 0x230);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)(*plVar1 + (longlong)iVar6 * 4),(void *)*param_3,(longlong)iVar5 << 2);
    *(int *)(param_1 + 0x230) = *(int *)(param_1 + 0x230) + iVar5;
  }
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    fStack_210 = 0.0;
    local_218 = FUN_140f01940;
    lStack_a0 = (ulonglong)(uint)fStack_20c << 0x20;
    local_a8 = FUN_140f01940;
    pwVar8 = _guard_xfg_dispatch_icall_nop(L"&UGFxColorPickerWidget::OnTopColorSelected",L"::");
    pwVar9 = pwVar15;
    while (pwVar3 = pwVar8, pwVar3 != (wchar_t *)0x0) {
      pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar9 = pwVar3;
    }
    FName::FName(&local_100,pwVar9 + 2,1);
    FUN_1407260e0(*(longlong *)(param_1 + 0x1b0) + 0x1a8,param_1,&local_a8,local_100);
    fStack_210 = 0.0;
    local_218 = FUN_140eee420;
    lStack_90 = (ulonglong)(uint)fStack_20c << 0x20;
    local_98 = FUN_140eee420;
    pwVar8 = _guard_xfg_dispatch_icall_nop(L"&UGFxColorPickerWidget::OnBottomColorSelected",L"::");
    pwVar9 = pwVar15;
    while (pwVar3 = pwVar8, pwVar3 != (wchar_t *)0x0) {
      pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar9 = pwVar3;
    }
    FName::FName(&local_f8,pwVar9 + 2,1);
    FUN_1407260e0(*(longlong *)(param_1 + 0x1b0) + 0x1b8,param_1,&local_98,local_f8);
    pwVar9 = _guard_xfg_dispatch_icall_nop(L"&UGFxColorPickerWidget::OnColorFocused",L"::");
    while (pwVar8 = pwVar9, pwVar8 != (wchar_t *)0x0) {
      pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar8 + 1,L"::");
      pwVar15 = pwVar8;
    }
    FName::FName(&local_f0,pwVar15 + 2,1);
    lVar11 = *(longlong *)(param_1 + 0x1b0);
    plVar16 = (longlong *)(lVar11 + 0x180);
    FWeakObjectPtr::operator=(&local_228,0);
    local_220 = 0;
    FWeakObjectPtr::operator=(&local_228,param_1);
    local_220 = local_f0;
    if ((local_f0 != 0) && (lVar10 = FWeakObjectPtr::Get(&local_228), lVar10 != 0)) {
      UObject::FindFunction(lVar10,local_220);
    }
    piVar13 = (int *)*plVar16;
    iVar5 = *(int *)(lVar11 + 0x188);
    for (piVar14 = piVar13; piVar14 != piVar13 + (longlong)iVar5 * 4; piVar14 = piVar14 + 4) {
      if ((((*piVar14 == local_228) && (piVar14[1] == local_224)) ||
          ((cVar4 = FWeakObjectPtr::IsValid(piVar14), cVar4 == '\0' &&
           (cVar4 = FWeakObjectPtr::IsValid(&local_228), cVar4 == '\0')))) &&
         (*(longlong *)(piVar14 + 2) == local_220)) {
        if ((int)((longlong)piVar14 - (longlong)piVar13 >> 4) != -1) goto LAB_140f0c628;
        break;
      }
    }
    iVar5 = *(int *)(lVar11 + 0x188);
    *(int *)(lVar11 + 0x188) = iVar5 + 1;
    if (*(int *)(lVar11 + 0x18c) < iVar5 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar16,iVar5);
    }
    piVar13 = (int *)((longlong)iVar5 * 0x10 + *plVar16);
    *piVar13 = local_228;
    piVar13[1] = local_224;
    *(longlong *)(piVar13 + 2) = local_220;
LAB_140f0c628:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar16);
    local_1d8 = 0;
    local_1d0 = 0x20;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1d8,0);
    FGenericPlatformString::Memcpy(local_1d8,L"ColorSwatchSelectionCellDefault",0x40);
    lVar11 = FUN_140ecd410(*(undefined8 *)(param_1 + 0x1b0),&local_1d8,0);
    if (local_1d8 != 0) {
      FMemory::Free();
    }
    if (lVar11 != 0) {
      *(undefined4 *)(lVar11 + 0x308) = 0;
      *(undefined1 *)(lVar11 + 0x348) = 1;
      (**(code **)(*(longlong *)(lVar11 + 0x170) + 0x38))((longlong *)(lVar11 + 0x170),1);
      FUN_142ed2600(lVar11,3);
    }
    local_res8 = 1;
    if (1 < *(int *)(param_1 + 0x230)) {
      lVar11 = 4;
      do {
        lVar10 = *plVar1;
        local_1c8 = 0;
        local_1c0 = 0x19;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1c8,0);
        FGenericPlatformString::Memcpy(local_1c8,L"ColorSwatchSelectionCell",0x32);
        lVar12 = FUN_140ecd410(*(undefined8 *)(param_1 + 0x1b0),&local_1c8,0);
        if (local_1c8 != 0) {
          FMemory::Free();
        }
        if (lVar12 != 0) {
          *(undefined4 *)(lVar12 + 0x308) = *(undefined4 *)(lVar11 + lVar10);
          local_1a8 = 0;
          local_1a0 = 0x20;
          local_218 = (code *)CONCAT44((float)*(byte *)(lVar11 + 1 + lVar10) * 0.003921569,
                                       (float)*(byte *)(lVar11 + 2 + lVar10) * 0.003921569);
          fStack_210 = (float)*(byte *)(lVar11 + lVar10) * 0.003921569;
          fStack_20c = (float)*(byte *)(lVar11 + 3 + lVar10) * 0.003921569;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1a8,0);
          FGenericPlatformString::Memcpy(local_1a8,L"coloredSquareAnim.coloredSquare",0x40);
          local_1b8 = (longlong *)0x0;
          local_1b0 = 0;
          local_b8 = 0;
          local_208 = FUN_140ecbdf0(lVar12,&local_1a8,0,6,&local_1b8);
          plVar16 = local_1b8;
          for (iVar5 = (int)local_1b0; iVar5 != 0; iVar5 = iVar5 + -1) {
            if (*plVar16 != 0) {
              FMemory::Free();
            }
            plVar16 = plVar16 + 2;
          }
          if (local_1b8 != (longlong *)0x0) {
            FMemory::Free(local_1b8);
          }
          if (local_1a8 != 0) {
            FMemory::Free();
          }
          if (local_208 != 0) {
            FUN_142f0c220(local_208,&local_218,1);
          }
          plVar16 = *(longlong **)(lVar12 + 0x310);
          if (plVar16 != (longlong *)0x0) {
            (**(code **)(*plVar16 + 0x278))(plVar16,0);
          }
          (**(code **)(*(longlong *)(lVar12 + 0x170) + 0x38))((longlong *)(lVar12 + 0x170),1);
          FUN_142ed2600(lVar12);
        }
        local_res8 = local_res8 + 1;
        lVar11 = lVar11 + 4;
      } while (local_res8 < *(int *)(param_1 + 0x230));
    }
  }
  if ((param_7 != *(char *)(param_1 + 0x220)) && (*(longlong *)(param_1 + 0x1b8) != 0)) {
    *(char *)(param_1 + 0x220) = param_7;
    if (param_7 == '\x01') {
LAB_140f0c962:
      local_198 = 0;
      local_190 = 0x11;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_198,0);
      FGenericPlatformString::Memcpy(local_198,L"primarySecondary",0x22);
      FUN_142088cf0(*(undefined8 *)(param_1 + 0x1b8),&local_198);
      if (local_198 != 0) {
        FMemory::Free();
      }
    }
    else if (param_7 != '\x02') {
      local_208 = 0;
      local_200 = 4;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_208,0);
      FGenericPlatformString::Memcpy(local_208,&DAT_1445ff230,8);
      FUN_142088cf0(*(undefined8 *)(param_1 + 0x1b8),&local_208);
      if (local_208 != 0) {
        FMemory::Free();
      }
      goto LAB_140f0c962;
    }
    local_188 = 0;
    local_180 = 0xc;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_188,0);
    FGenericPlatformString::Memcpy(local_188,L"primaryOnly",0x18);
    FUN_142088cf0(*(undefined8 *)(param_1 + 0x1b8),&local_188);
    if (local_188 != 0) {
      FMemory::Free();
    }
  }
  (**(code **)(**(longlong **)(param_1 + 0x1b0) + 0x2b8))(*(longlong **)(param_1 + 0x1b0),0,1,0);
LAB_140f0ca10:
  FName::FName(local_e8,&DAT_143f3eda8,1);
  local_dc = 0;
  local_e0 = 0xffffffff;
  FName::FName(local_d8,&DAT_143f3eda8,1);
  local_d0 = 0;
  plStack_c8 = (longlong *)0x0;
  local_c0 = 0;
  if ((((*(longlong *)(param_1 + 0x1c0) != 0) &&
       (lVar11 = *(longlong *)(param_1 + 0x1d0), lVar11 != 0)) &&
      (*(longlong *)(param_1 + 0x1e0) != 0)) && (*(longlong *)(param_1 + 0x218) != 0)) {
    *(undefined1 *)(lVar11 + 0x2e0) = 0;
    FUN_142ecf920(lVar11,0);
    lVar11 = *(longlong *)(param_1 + 0x1e0);
    *(undefined1 *)(lVar11 + 0x2e0) = 0;
    FUN_142ecf920(lVar11,0);
    lVar11 = *(longlong *)(param_1 + 0x1c0);
    *(undefined1 *)(lVar11 + 0x2e0) = 1;
    FUN_142ecf920(lVar11,0);
    *(undefined8 *)(param_1 + 0x1f0) = *(undefined8 *)(param_1 + 0x1c0);
    uVar7 = TScriptInterface<IBlendableInterface>::
            TScriptInterface<IBlendableInterface><UMaterialInterface>
                      (local_58,*(undefined8 *)(param_1 + 0x1b0));
    FUN_142ed36d0(*(undefined8 *)(param_1 + 0x218),uVar7,0);
  }
  FUN_140eff120(param_1,*(undefined8 *)(param_1 + 0x1f0),local_e8);
  plVar1 = plStack_c8;
  if (plStack_c8 != (longlong *)0x0) {
    LOCK();
    plVar16 = plStack_c8 + 1;
    lVar11 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plStack_c8)(plStack_c8);
      LOCK();
      piVar13 = (int *)((longlong)plVar1 + 0xc);
      iVar5 = *piVar13;
      *piVar13 = *piVar13 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar1 + 8))(plVar1,1);
      }
    }
  }
  return;
}



// FUNCTION 140f0cb60 FUN_140f0cb60 body=1629 status=ok
// SIG undefined FUN_140f0cb60(void)

void FUN_140f0cb60(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 local_f8 [8];
  longlong *local_f0;
  undefined1 local_e0 [8];
  longlong *local_d8;
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 local_b0 [8];
  longlong *local_a8;
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 local_90 [8];
  longlong *local_88;
  undefined1 local_80 [8];
  longlong *local_78;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_60 [8];
  longlong *local_58;
  undefined1 local_50 [8];
  longlong *local_48;
  undefined1 local_40 [8];
  longlong *local_38;
  undefined1 local_30 [8];
  longlong *local_28;
  
  if (*(longlong *)(param_1 + 0x170) != 0) {
    uVar5 = FUN_142085870(*(longlong *)(param_1 + 0x170),local_b0,L"reviveText");
    FUN_142ede260(param_1 + 0x238,uVar5);
    if (local_a8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_a8 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_a8)(local_a8);
        LOCK();
        piVar2 = (int *)((longlong)local_a8 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_a8 + 8))(local_a8,1);
        }
      }
    }
    if ((*(longlong *)(param_1 + 0x240) != 0) && (*(longlong *)(param_1 + 0x248) != 0)) {
      piVar2 = (int *)(*(longlong *)(param_1 + 0x248) + 8);
      LOCK();
      iVar4 = *piVar2;
      if (iVar4 == 0) {
        *piVar2 = 0;
        iVar4 = 0;
      }
      UNLOCK();
      if (0 < iVar4) {
        uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_30,L"IS REVIVING",L"GFxBuddyWidget",L"IsRevivingText");
        UMistDebugEntityScreen::InspectEntity(param_1 + 0x238,uVar5,1,0);
        if (local_28 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_28 + 1;
          lVar3 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*local_28)(local_28);
            LOCK();
            piVar2 = (int *)((longlong)local_28 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_28 + 8))(local_28,1);
            }
          }
        }
      }
    }
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (local_f8,L"LEVEL UP",L"GFxBuddyWidget",L"LevelUpText");
    uVar5 = FUN_142085870(*(undefined8 *)(param_1 + 0x170),local_a0,L"levelUpTextTop");
    FUN_142ede260(param_1 + 0x250,uVar5);
    if (local_98 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_98 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_98)(local_98);
        LOCK();
        piVar2 = (int *)((longlong)local_98 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_98 + 8))(local_98,1);
        }
      }
    }
    if ((*(longlong *)(param_1 + 600) != 0) && (*(longlong *)(param_1 + 0x260) != 0)) {
      piVar2 = (int *)(*(longlong *)(param_1 + 0x260) + 8);
      LOCK();
      iVar4 = *piVar2;
      if (iVar4 == 0) {
        *piVar2 = 0;
        iVar4 = 0;
      }
      UNLOCK();
      if (0 < iVar4) {
        UMistDebugEntityScreen::InspectEntity(param_1 + 0x250,local_f8,1,0);
      }
    }
    uVar5 = FUN_142085870(*(undefined8 *)(param_1 + 0x170),local_90,L"levelUpTextMid");
    FUN_142ede260(param_1 + 0x268,uVar5);
    if (local_88 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_88 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_88)(local_88);
        LOCK();
        piVar2 = (int *)((longlong)local_88 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_88 + 8))(local_88,1);
        }
      }
    }
    if ((*(longlong *)(param_1 + 0x270) != 0) && (*(longlong *)(param_1 + 0x278) != 0)) {
      piVar2 = (int *)(*(longlong *)(param_1 + 0x278) + 8);
      LOCK();
      iVar4 = *piVar2;
      if (iVar4 == 0) {
        *piVar2 = 0;
        iVar4 = 0;
      }
      UNLOCK();
      if (0 < iVar4) {
        UMistDebugEntityScreen::InspectEntity(param_1 + 0x268,local_f8,1,0);
      }
    }
    uVar5 = FUN_142085870(*(undefined8 *)(param_1 + 0x170),local_80,L"levelUpTextBot");
    FUN_142ede260(param_1 + 0x280,uVar5);
    if (local_78 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_78 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar2 = (int *)((longlong)local_78 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_78 + 8))(local_78,1);
        }
      }
    }
    if ((*(longlong *)(param_1 + 0x288) != 0) && (*(longlong *)(param_1 + 0x290) != 0)) {
      piVar2 = (int *)(*(longlong *)(param_1 + 0x290) + 8);
      LOCK();
      iVar4 = *piVar2;
      if (iVar4 == 0) {
        *piVar2 = 0;
        iVar4 = 0;
      }
      UNLOCK();
      if (0 < iVar4) {
        UMistDebugEntityScreen::InspectEntity(param_1 + 0x280,local_f8,1,0);
      }
    }
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (local_c8,&DAT_1445f8ad8,L"GFxBuddyWidget",L"LevelText");
    uVar5 = FUN_142085870(*(undefined8 *)(param_1 + 0x170),local_70,L"lvlTextTop");
    FUN_142ede260(param_1 + 0x298,uVar5);
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_68 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar2 = (int *)((longlong)local_68 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_68 + 8))(local_68,1);
        }
      }
    }
    if ((*(longlong *)(param_1 + 0x2a0) != 0) && (*(longlong *)(param_1 + 0x2a8) != 0)) {
      piVar2 = (int *)(*(longlong *)(param_1 + 0x2a8) + 8);
      LOCK();
      iVar4 = *piVar2;
      if (iVar4 == 0) {
        *piVar2 = 0;
        iVar4 = 0;
      }
      UNLOCK();
      if (0 < iVar4) {
        UMistDebugEntityScreen::InspectEntity(param_1 + 0x298,local_c8,1,0);
      }
    }
    uVar5 = FUN_142085870(*(undefined8 *)(param_1 + 0x170),local_60,L"lvlTextBot");
    FUN_142ede260(param_1 + 0x2b0,uVar5);
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_58 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar2 = (int *)((longlong)local_58 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_58 + 8))(local_58,1);
        }
      }
    }
    if ((*(longlong *)(param_1 + 0x2b8) != 0) && (*(longlong *)(param_1 + 0x2c0) != 0)) {
      piVar2 = (int *)(*(longlong *)(param_1 + 0x2c0) + 8);
      LOCK();
      iVar4 = *piVar2;
      if (iVar4 == 0) {
        *piVar2 = 0;
        iVar4 = 0;
      }
      UNLOCK();
      if (0 < iVar4) {
        UMistDebugEntityScreen::InspectEntity(param_1 + 0x2b0,local_c8,1,0);
      }
    }
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (local_e0,L"SECOND WIND",L"GFxBuddyWidget",L"SecondWindText");
    uVar5 = FUN_142085870(*(undefined8 *)(param_1 + 0x170),local_50,L"secondWindTop");
    FUN_142ede260(param_1 + 0x2c8,uVar5);
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_48 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar2 = (int *)((longlong)local_48 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_48 + 8))(local_48,1);
        }
      }
    }
    if ((*(longlong *)(param_1 + 0x2d0) != 0) && (*(longlong *)(param_1 + 0x2d8) != 0)) {
      piVar2 = (int *)(*(longlong *)(param_1 + 0x2d8) + 8);
      LOCK();
      iVar4 = *piVar2;
      if (iVar4 == 0) {
        *piVar2 = 0;
        iVar4 = 0;
      }
      UNLOCK();
      if (0 < iVar4) {
        UMistDebugEntityScreen::InspectEntity(param_1 + 0x2c8,local_e0,1,0);
      }
    }
    uVar5 = FUN_142085870(*(undefined8 *)(param_1 + 0x170),local_40,L"secondWindBot");
    FUN_142ede260(param_1 + 0x2e0,uVar5);
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar2 = (int *)((longlong)local_38 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_38 + 8))(local_38,1);
        }
      }
    }
    if ((*(longlong *)(param_1 + 0x2e8) != 0) && (*(longlong *)(param_1 + 0x2f0) != 0)) {
      piVar2 = (int *)(*(longlong *)(param_1 + 0x2f0) + 8);
      LOCK();
      iVar4 = *piVar2;
      if (iVar4 == 0) {
        *piVar2 = 0;
        iVar4 = 0;
      }
      UNLOCK();
      if (0 < iVar4) {
        UMistDebugEntityScreen::InspectEntity(param_1 + 0x2e0,local_e0,1,0);
      }
    }
    if (local_d8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_d8 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_d8)(local_d8);
        LOCK();
        piVar2 = (int *)((longlong)local_d8 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_d8 + 8))(local_d8,1);
        }
      }
    }
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_c0 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_c0)(local_c0);
        LOCK();
        piVar2 = (int *)((longlong)local_c0 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_c0 + 8))(local_c0,1);
        }
      }
    }
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_f0 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_f0)(local_f0);
        LOCK();
        piVar2 = (int *)((longlong)local_f0 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_f0 + 8))(local_f0,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140f0d1d0 FUN_140f0d1d0 body=698 status=ok
// SIG undefined FUN_140f0d1d0(void)

void FUN_140f0d1d0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  undefined4 local_res10 [2];
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  int local_40;
  longlong local_38 [2];
  
  if (param_2 != 0) {
    bVar3 = false;
    bVar2 = false;
    local_res10[0] = 0;
    plVar1 = (longlong *)(param_2 + 0x98);
    local_58 = (wchar_t *)
               CONCAT44((float)DAT_1464aa744._1_1_ * 0.003921569,
                        (float)DAT_1464aa744._2_1_ * 0.003921569);
    local_50 = CONCAT44((float)DAT_1464aa744._3_1_ * 0.003921569,
                        (float)(byte)DAT_1464aa744 * 0.003921569);
    (**(code **)(*plVar1 + 0x20))(plVar1,&local_58);
    local_res10[0] = 0;
    local_58 = (wchar_t *)0x0;
    local_50 = 0x1b;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
    FGenericPlatformString::Memcpy(local_58,L"==========================",0x36);
    FUN_1428a6fb0(plVar1,&local_58,local_res10);
    if (local_58 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    local_res10[0] = 0;
    local_58 = (wchar_t *)0x0;
    local_50 = 0x18;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
    FGenericPlatformString::Memcpy(local_58,L"Disconnect Movie State:",0x30);
    FUN_1428a6fb0(plVar1,&local_58,local_res10);
    if (local_58 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    local_res10[0] = 0;
    local_58 = (wchar_t *)0x0;
    local_50 = 0x1b;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
    FGenericPlatformString::Memcpy(local_58,L"==========================",0x36);
    FUN_1428a6fb0(plVar1,&local_58,local_res10);
    if (local_58 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    lVar7 = *(longlong *)(param_1 + 0x28);
    lVar9 = (longlong)*(int *)(param_1 + 0x30) * 0x10 + lVar7;
    for (; lVar7 != lVar9; lVar7 = lVar7 + 0x10) {
      local_res10[0] = 0;
      if (*(longlong *)(lVar7 + 8) == 0) {
        pwVar6 = L"NULL";
      }
      else {
        local_res18 = *(undefined8 *)(*(longlong *)(lVar7 + 8) + 0x18);
        bVar3 = true;
        FName::ToString(&local_res18,&local_48);
        pwVar6 = L"";
        if (local_40 != 0) {
          pwVar6 = local_48;
        }
      }
      cVar4 = FWeakObjectPtr::IsValid(lVar7);
      if (cVar4 == '\0') {
        pwVar8 = L"NULL";
      }
      else {
        bVar2 = true;
        lVar5 = FWeakObjectPtr::Get(lVar7);
        local_res20 = *(undefined8 *)(lVar5 + 0x18);
        FName::ToString(&local_res20,&local_58);
        pwVar8 = L"";
        if ((int)local_50 != 0) {
          pwVar8 = local_58;
        }
      }
      FString::PrintfImpl(local_38,L"%s : Movie: %s",pwVar8,pwVar6);
      FUN_1428a6fb0(plVar1,local_38,local_res10);
      if (local_38[0] != 0) {
        FMemory::Free();
      }
      if ((bVar2) && (bVar2 = false, local_58 != (wchar_t *)0x0)) {
        FMemory::Free();
      }
      if ((bVar3) && (bVar3 = false, local_48 != (wchar_t *)0x0)) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140f0d490 FUN_140f0d490 body=139 status=ok
// SIG undefined FUN_140f0d490(void)

void FUN_140f0d490(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[0xef];
  *(int *)(param_1 + 0xef) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0x77c) < iVar1 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<184,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 0xee,iVar1);
  }
  FUN_140ecfd40((longlong)iVar1 * 0xb8 + param_1[0xee],param_2);
  if (((int)param_1[0xcb] == 0) && ((char)param_1[0xf0] == '\0')) {
    (**(code **)(*param_1 + 0x578))(param_1,0);
  }
  return;
}



// FUNCTION 140f0d520 FUN_140f0d520 body=1138 status=ok
// SIG undefined FUN_140f0d520(void)

void FUN_140f0d520(longlong param_1)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong **pplVar9;
  longlong *plVar10;
  longlong *local_b8;
  int local_b0;
  longlong local_a8 [4];
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong *local_78 [2];
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_50 [8];
  longlong *local_48;
  undefined1 local_38 [8];
  longlong *local_30;
  
  if ((*(longlong *)(param_1 + 0x2b0) != 0) && (*(char *)(param_1 + 0x2a8) == '\0')) {
    uVar5 = FUN_1404b03b0();
    FText::FText(local_68,uVar5);
    if ((*(int *)(param_1 + 0x1c8) != 0) && (*(longlong *)(param_1 + 0x2b0) != 0)) {
      uVar5 = FUN_142eb8880(*(longlong *)(param_1 + 0x2b0) + 0x308,local_50);
      FText::operator=(local_68,uVar5);
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_48 + 1;
        lVar8 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar1 = (int *)((longlong)local_48 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_48 + 8))(local_48,1);
          }
        }
      }
    }
    local_a8[0] = 0;
    local_a8[1] = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8,0);
    FGenericPlatformString::Memcpy(local_a8[0],L"keyboardInput",0x1c);
    FUN_142088910(param_1,local_a8);
    if (local_a8[0] != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(param_1 + 0x290) != 0) {
      puVar2 = (uint *)(*(longlong *)(param_1 + 0x290) + 0x40);
      *puVar2 = *puVar2 | 0x80;
      *(undefined1 *)(*(longlong *)(param_1 + 0x290) + 0x630) = 0;
    }
    *(undefined1 *)(param_1 + 0x2a8) = 1;
    if (*(longlong *)(param_1 + 0x2b0) != 0) {
      FUN_142eb4cb0();
      local_a8[2] = 0;
      local_a8[3] = 0;
      FString::AppendInt(local_a8 + 2,*(undefined4 *)(param_1 + 0x1c8));
      uVar5 = FText::FromString(local_38,local_a8 + 2);
      FUN_142ed51f0(*(undefined8 *)(param_1 + 0x2b0),uVar5,1);
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_30 + 1;
        lVar8 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar1 = (int *)((longlong)local_30 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_30 + 8))(local_30,1);
          }
        }
      }
      if (local_a8[2] != 0) {
        FMemory::Free();
      }
    }
    lVar8 = *(longlong *)(param_1 + 0x2b0);
    pplVar9 = (longlong **)(lVar8 + 0x3b8);
    plVar6 = (longlong *)FMemory::Realloc(0,0x20);
    local_78[0] = plVar6;
    if (plVar6 != (longlong *)0x0) {
      plVar6[1] = param_1;
      *plVar6 = (longlong)&PTR_GetPoolName_144605ec0;
      lVar7 = FDelegateHandle::GenerateNewID();
      plVar6[3] = lVar7;
      *plVar6 = (longlong)&PTR_GetPoolName_144605f08;
    }
    if (local_78 != pplVar9) {
      if (plVar6 == (longlong *)0x0) {
        if ((*(int *)(lVar8 + 0x3c0) != 0) && (plVar10 = *pplVar9, plVar10 != (longlong *)0x0)) {
          (**(code **)(*plVar10 + 0x28))(plVar10,0);
          if (*pplVar9 != (longlong *)0x0) {
            plVar10 = (longlong *)FMemory::Realloc(*pplVar9,0,0);
            *pplVar9 = plVar10;
          }
          *(undefined4 *)(lVar8 + 0x3c0) = 0;
        }
      }
      else {
        (**(code **)(*plVar6 + 0x30))(plVar6,pplVar9);
      }
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x28))(plVar6,0);
      local_78[0] = (longlong *)FMemory::Realloc(plVar6,0,0);
      if (local_78[0] != (longlong *)0x0) {
        FMemory::Free(local_78[0]);
      }
    }
    lVar8 = *(longlong *)(param_1 + 0x2b0);
    plVar10 = (longlong *)(lVar8 + 0x3c8);
    plVar6 = (longlong *)FMemory::Realloc(0,0x20);
    local_88 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      plVar6[1] = param_1;
      *plVar6 = (longlong)&PTR_GetPoolName_144605f50;
      lVar7 = FDelegateHandle::GenerateNewID();
      plVar6[3] = lVar7;
      *plVar6 = (longlong)&PTR_GetPoolName_144605f98;
    }
    if (&local_88 != plVar10) {
      if (plVar6 == (longlong *)0x0) {
        if ((*(int *)(lVar8 + 0x3d0) != 0) &&
           (plVar4 = (longlong *)*plVar10, plVar4 != (longlong *)0x0)) {
          (**(code **)(*plVar4 + 0x28))(plVar4,0);
          if (*plVar10 != 0) {
            lVar7 = FMemory::Realloc(*plVar10,0,0);
            *plVar10 = lVar7;
          }
          *(undefined4 *)(lVar8 + 0x3d0) = 0;
        }
      }
      else {
        (**(code **)(*plVar6 + 0x30))(plVar6,plVar10);
      }
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x28))(plVar6,0);
      local_88 = (longlong *)FMemory::Realloc(plVar6,0,0);
      if (local_88 != (longlong *)0x0) {
        FMemory::Free(local_88);
      }
    }
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_60 + 1;
      lVar8 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar1 = (int *)((longlong)local_60 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_60 + 8))(local_60,1);
        }
      }
    }
  }
  lVar8 = FUN_142eee1b0(param_1);
  if (lVar8 != 0) {
    uStack_80 = 0;
    local_b8 = (longlong *)0x0;
    local_88 = (longlong *)&LAB_140edead0;
    plVar6 = (longlong *)FMemory::Realloc(0,0x30);
    local_b0 = 3;
    local_b8 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      *plVar6 = (longlong)&PTR_FUN_143fcfec0;
      FWeakObjectPtr::operator=(plVar6 + 1,param_1);
      *(undefined4 *)(plVar6 + 2) = (undefined4)local_88;
      *(undefined4 *)((longlong)plVar6 + 0x14) = local_88._4_4_;
      *(undefined4 *)(plVar6 + 3) = uStack_80;
      *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_7c;
      lVar7 = FDelegateHandle::GenerateNewID();
      plVar6[5] = lVar7;
      *plVar6 = (longlong)&PTR_FUN_143fcff08;
    }
    FUN_142ee1c00(lVar8,PTR_s_click_14629d748,param_1 + 0x2e0,&local_b8);
    if (local_b0 != 0) {
      if (local_b8 == (longlong *)0x0) {
        return;
      }
      (**(code **)(*local_b8 + 0x28))(local_b8,0);
      if (local_b8 != (longlong *)0x0) {
        local_b8 = (longlong *)FMemory::Realloc(local_b8,0,0);
      }
      local_b0 = 0;
    }
    if (local_b8 != (longlong *)0x0) {
      FMemory::Free(local_b8);
    }
  }
  return;
}



// FUNCTION 140f0d9a0 FUN_140f0d9a0 body=201 status=ok
// SIG undefined FUN_140f0d9a0(void)

void FUN_140f0d9a0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined1 local_res18 [16];
  
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    bVar6 = DVar3 == DAT_1468c21c0;
    if (!bVar6) goto LAB_140f0d9dc;
  }
  bVar6 = true;
LAB_140f0d9dc:
  if ((bVar6) && (lVar1 = *(longlong *)(param_1 + 0x4e8), lVar1 != 0)) {
    lVar4 = FUN_142f227c0();
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      *(undefined4 *)(param_1 + 0x6f0) = param_2;
      uVar5 = FName::FName(local_res18,"Shift",1);
      thunk_FUN_142eda790(param_1,uVar5);
      *(undefined4 *)(param_1 + 0x6f0) = 0;
    }
  }
  return;
}



// FUNCTION 140f0da70 FUN_140f0da70 body=351 status=ok
// SIG undefined FUN_140f0da70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f0da70(undefined8 param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_d8 [32];
  code *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  uVar3 = 0;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = param_1;
    *puVar2 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = FUN_140ee0c20;
  cVar1 = FUN_142ebdc00(param_1);
  if ((cVar1 == '\0') || (cVar1 = FUN_142eba870(param_1), cVar1 != '\0')) {
    if (local_78 != 0) {
      plVar4 = local_a8;
      if (local_88 != (longlong *)0x0) {
        plVar4 = local_88;
      }
      if (plVar4 != (longlong *)0x0) {
        uVar3 = (**(code **)(*plVar4 + 8))();
      }
    }
    (*local_b8[0])(uVar3);
  }
  else {
    uVar3 = FUN_1420849a0(param_1,local_68,local_b8);
    FUN_14208d480(param_1,uVar3);
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
    FUN_142eb05b0(param_1);
  }
  if (local_78 != 0) {
    plVar4 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar4 = local_88;
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140f0dbd0 FUN_140f0dbd0 body=123 status=ok
// SIG undefined FUN_140f0dbd0(void)

void FUN_140f0dbd0(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_28 [8];
  longlong *local_20;
  
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_28,L"TestDuelingWidget",L"GFxDuelingWidget",L"RolloutTestDuelingWidget");
  FUN_140f055c0(param_1,uVar5);
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



// FUNCTION 140f0dc50 FUN_140f0dc50 body=246 status=ok
// SIG undefined FUN_140f0dc50(void)

void FUN_140f0dc50(longlong param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  
  if (*(char *)(param_1 + 0x38) == '\0') {
    cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x30);
    if (cVar1 != '\0') {
      uVar4 = FWeakObjectPtr::Get(param_1 + 0x30);
      FUN_1411fd550(uVar4,param_2);
    }
  }
  if (*(longlong *)(param_1 + 0x170) != 0) {
    fVar6 = (float)FUN_142eedeb0(*(longlong *)(param_1 + 0x170) + 0x2b8);
    iVar2 = FUN_142eb6ea0(*(undefined8 *)(param_1 + 0x170));
    fVar7 = (float)FUN_142eb79f0(*(undefined8 *)(param_1 + 0x170));
    if (ABS(fVar7) <= 1e-08) {
      fVar7 = 1.0;
    }
    iVar3 = (int)ROUND((fVar6 / fVar7 + fVar6 / fVar7) - 0.5) >> 1;
    iVar5 = iVar3 + -1;
    if (iVar3 < 1) {
      iVar5 = iVar3;
    }
    if (*(int *)(param_1 + 0x184) != iVar5 * iVar2) {
      *(int *)(param_1 + 0x184) = iVar5 * iVar2;
      *(undefined1 *)(param_1 + 400) = 1;
    }
  }
  if ((*(char *)(param_1 + 0x38) == '\0') && (*(char *)(param_1 + 400) != '\0')) {
    *(undefined1 *)(param_1 + 400) = 0;
    FUN_140f06eb0(param_1);
    return;
  }
  return;
}



// FUNCTION 140f0dd50 FUN_140f0dd50 body=27 status=ok
// SIG undefined FUN_140f0dd50(void)

void FUN_140f0dd50(undefined8 param_1)

{
  FUN_142357eb0();
  FUN_140f116f0(param_1);
  return;
}



// FUNCTION 140f0dd70 FUN_140f0dd70 body=190 status=ok
// SIG undefined FUN_140f0dd70(void)

void FUN_140f0dd70(undefined8 param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 local_res10 [16];
  undefined1 local_res20 [8];
  
  if ((param_2 != (longlong *)0x0) && (param_3 != 0)) {
    lVar2 = (**(code **)(*param_2 + 0x340))(param_2);
    cVar1 = FWeakObjectPtr::IsValid(lVar2 + 0xdc);
    if (cVar1 != '\0') {
      lVar2 = (**(code **)(*param_2 + 0x340))(param_2);
      uVar3 = FWeakObjectPtr::Get(lVar2 + 0xdc);
      cVar1 = FUN_1411d5660(uVar3,param_3);
      if (cVar1 != '\0') {
        local_res20[0] = 0;
        local_res10[0] = 0;
        lVar2 = (**(code **)(*param_2 + 0x340))(param_2);
        uVar3 = FWeakObjectPtr::Get(lVar2 + 0xdc);
        FUN_1411fda30(uVar3,param_3,local_res20,local_res10);
        (**(code **)(*param_2 + 0x380))(param_2,local_res20[0],local_res10[0]);
      }
    }
  }
  return;
}



// FUNCTION 140f0de30 FUN_140f0de30 body=337 status=ok
// SIG undefined FUN_140f0de30(void)

void FUN_140f0de30(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined8 uVar9;
  undefined8 local_res8;
  
  FUN_140a678a0();
  lVar4 = FWeakObjectPtr::Get(param_1 + 0x5c8);
  if (lVar4 != 0) {
    lVar5 = FUN_14142a560();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_140f0de8e;
  }
  lVar4 = 0;
LAB_140f0de8e:
  if ((*(int *)(param_1 + 0x658) == 1) && (lVar4 != 0)) {
    FUN_140cc9500(lVar4,param_1);
    *(undefined4 *)(param_1 + 0x658) = 2;
    *(undefined4 *)(param_1 + 0x718) = 0;
    FUN_140ee4180(param_1);
    lVar4 = FUN_140eccc40(param_1);
    if (lVar4 != 0) {
      cVar3 = FUN_140e857c0(lVar4 + 0x1b10,*(undefined8 *)(param_1 + 0x708));
      if (cVar3 == '\0') {
        puVar8 = &DAT_143f3eda8;
        if (DAT_14629dbf8 != 0) {
          puVar8 = DAT_14629dbf0;
        }
        puVar6 = (undefined8 *)FName::FName(&local_res8,puVar8,1);
        uVar9 = *puVar6;
      }
      else {
        FName::FName(&local_res8,L"vaultcard",1);
        uVar9 = local_res8;
      }
      if (*(longlong *)(param_1 + 0x708) != 0) {
        lVar7 = FUN_142dfdfe0();
        lVar5 = *(longlong *)(param_1 + 0x708);
        for (lVar1 = lVar5; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
          if (lVar1 == lVar7) goto LAB_140f0df66;
        }
      }
      lVar5 = 0;
LAB_140f0df66:
      FUN_140d07ee0(lVar4,uVar9,lVar5);
    }
  }
  return;
}



// FUNCTION 140f0df90 FUN_140f0df90 body=184 status=ok
// SIG undefined FUN_140f0df90(void)

void FUN_140f0df90(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  char *pcVar4;
  undefined1 local_res10 [24];
  
  FUN_140a678a0();
  cVar1 = FUN_142eb50d0(param_1);
  if ((cVar1 == '\0') && (lVar2 = FUN_140eccc40(param_1), lVar2 != 0)) {
    if ((*(int *)(param_1 + 0x858) < 1) &&
       (((cVar1 = FUN_140eec620(param_1), cVar1 != '\0' || (*(longlong *)(param_1 + 0x820) == 0)) ||
        (*(int *)(param_1 + 0x844) < *(int *)(*(longlong *)(param_1 + 0x820) + 0x178))))) {
      if (*(char *)(param_1 + 0x710) == '\0') {
        pcVar4 = "GuardianRank";
      }
      else {
        pcVar4 = "vaultcard";
      }
    }
    else {
      pcVar4 = "SkillScreen";
    }
    puVar3 = (undefined8 *)FName::FName(local_res10,pcVar4,1);
    FUN_140d07ee0(lVar2,*puVar3,0);
  }
  return;
}



// FUNCTION 140f0e050 FUN_140f0e050 body=1521 status=ok
// SIG undefined FUN_140f0e050(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f0e050(longlong *param_1,int param_2,char param_3,char param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined1 auStack_1f8 [32];
  int local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined4 *local_1b8;
  ulonglong *puStack_1b0;
  undefined4 local_1a8;
  float local_1a4;
  undefined1 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  longlong local_168;
  undefined8 local_160;
  longlong *plStack_158;
  undefined1 local_150 [16];
  undefined1 local_140 [8];
  longlong *local_138;
  undefined1 local_128 [8];
  longlong *local_120;
  undefined1 local_110 [8];
  longlong *local_108;
  undefined1 local_f8 [16];
  undefined1 *local_e8 [2];
  undefined1 local_d8 [32];
  undefined8 local_b8;
  undefined4 local_a8;
  undefined1 local_98 [24];
  undefined4 local_80 [4];
  undefined1 local_70 [8];
  longlong *local_68;
  char local_58;
  ulonglong local_50 [5];
  
  local_50[0] = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  *(int *)((longlong)param_1 + 0x854) = *(int *)((longlong)param_1 + 0x854) + param_2;
  cVar5 = (char)param_1[0x107];
  local_1d8 = param_2;
  if (cVar5 == '\x01') {
    uStack_1c8 = param_1 + 0x111;
    local_b8 = 0;
    local_a8 = 0;
    local_1d0 = param_1;
    puVar7 = (undefined8 *)FUN_140438ef0(0x18,local_d8);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &PTR_FUN_143f77c18;
      *(undefined4 *)(puVar7 + 1) = (undefined4)local_1d0;
      *(undefined4 *)((longlong)puVar7 + 0xc) = local_1d0._4_4_;
      *(undefined4 *)(puVar7 + 2) = (undefined4)uStack_1c8;
      *(undefined4 *)((longlong)puVar7 + 0x14) = uStack_1c8._4_4_;
    }
    local_e8[0] = &LAB_140ee0fb0;
    FUN_14204c280(local_e8);
    cVar5 = (char)param_1[0x107];
  }
  if (cVar5 == '\0') {
    FUN_140ee4e40(param_1);
  }
  if ((param_1[0xf6] != 0) && (param_1[0xf7] != 0)) {
    piVar1 = (int *)(param_1[0xf7] + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      local_160 = 0;
      plStack_158 = (longlong *)0x0;
      lVar8 = FText::AsNumber(local_98,*(undefined4 *)((longlong)param_1 + 0x854),0,&local_160);
      uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_110,L"+{0} XP",L"GFxExperienceBar",L"ExperienceAnnouncementXP");
      puVar7 = (undefined8 *)FTextFormat::FTextFormat(local_f8,uVar9);
      local_80[0] = 4;
      FText::FText(local_70,lVar8);
      local_170 = *puVar7;
      local_1b8 = local_80;
      puStack_1b0 = local_50;
      local_168 = puVar7[1];
      local_58 = '\x01';
      if (local_168 != 0) {
        LOCK();
        *(int *)(local_168 + 8) = *(int *)(local_168 + 8) + 1;
        UNLOCK();
      }
      uVar9 = TArray<FFormatArgumentValue,FDefaultAllocator>::
              TArray<FFormatArgumentValue,FDefaultAllocator>(local_150,&local_1b8);
      uVar9 = FText::Format(local_128,&local_170,uVar9);
      FText::FText(local_140,uVar9);
      if (local_120 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_120 + 1;
        lVar4 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_120)(local_120);
          LOCK();
          piVar1 = (int *)((longlong)local_120 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*local_120 + 8))(local_120,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_150);
      if ((local_58 != '\0') && (local_58 = '\0', local_68 != (longlong *)0x0)) {
        LOCK();
        plVar3 = local_68 + 1;
        lVar4 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_68)(local_68);
          LOCK();
          piVar1 = (int *)((longlong)local_68 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*local_68 + 8))(local_68,1);
          }
        }
      }
      plVar3 = (longlong *)puVar7[1];
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar3 + 1;
        lVar4 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
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
      plVar3 = *(longlong **)(lVar8 + 8);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar3 + 1;
        lVar8 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
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
      UMistDebugEntityScreen::InspectEntity(param_1 + 0xf5,local_140,1,0);
      if (local_138 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_138 + 1;
        lVar8 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_138)(local_138);
          LOCK();
          piVar1 = (int *)((longlong)local_138 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*local_138 + 8))(local_138,1);
          }
        }
      }
      if (local_108 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_108 + 1;
        lVar8 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_108)(local_108);
          LOCK();
          piVar1 = (int *)((longlong)local_108 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*local_108 + 8))(local_108,1);
          }
        }
      }
      plVar3 = plStack_158;
      param_2 = local_1d8;
      if (plStack_158 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_158 + 1;
        lVar8 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plStack_158)(plStack_158);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          param_2 = local_1d8;
          if (iVar6 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
            param_2 = local_1d8;
          }
        }
      }
    }
  }
  if ((char)param_1[0x107] == '\x02') {
    return;
  }
  if (param_3 == '\0') {
    if ((char)param_1[0x107] == '\0') {
      *(undefined1 *)(param_1 + 0x107) = 1;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x107) = 2;
  }
  FUN_140f09220(param_1,(int)param_1[0x108]);
  lVar8 = param_1[0xe6];
  if (lVar8 == 0) goto LAB_140f0e59b;
  fVar12 = 1.0;
  if (param_3 == '\0') {
    uVar13 = FUN_140ee6b10(param_1);
  }
  else {
    uVar13 = 0x3f800000;
  }
  local_1a8 = *(undefined4 *)(lVar8 + 0x188);
  local_1a4 = *(float *)(lVar8 + 0x18c);
  local_1a0 = *(undefined1 *)(lVar8 + 400);
  local_19c = *(undefined4 *)(lVar8 + 0x194);
  local_198 = *(undefined4 *)(lVar8 + 0x198);
  local_194 = *(undefined4 *)(lVar8 + 0x19c);
  local_190 = *(undefined4 *)(lVar8 + 0x1a0);
  local_18c = *(undefined4 *)(lVar8 + 0x1a4);
  local_188 = *(undefined4 *)(lVar8 + 0x1a8);
  local_184 = *(undefined4 *)(lVar8 + 0x1ac);
  fVar11 = (float)*(int *)((longlong)param_1 + 0x84c) - (float)(int)param_1[0x10a];
  if (1e-08 < ABS(fVar11)) {
    fVar12 = ((float)param_2 - (float)(int)param_1[0x10a]) / fVar11;
  }
  else if ((float)param_2 < (float)*(int *)((longlong)param_1 + 0x84c)) {
    fVar12 = 0.0;
  }
  if (fVar12 < *(float *)(param_1 + 0xc6) || fVar12 == *(float *)(param_1 + 0xc6)) {
    if (param_4 != '\0') {
      lVar8 = param_1[200];
      puVar7 = &local_1d0;
      local_1d0 = (longlong *)0x0;
      uStack_1c8 = (longlong *)0x0;
      goto LAB_140f0e573;
    }
  }
  else {
    local_1a4 = local_1a4 * *(float *)((longlong)param_1 + 0x634);
    if (param_4 != '\0') {
      lVar8 = param_1[0xc9];
      puVar7 = &local_180;
      local_180 = 0;
      local_178 = 0;
LAB_140f0e573:
      (**(code **)(*param_1 + 0x4e8))(param_1,lVar8,puVar7);
    }
  }
  FUN_142ef4ad0(param_1[0xe6],uVar13,&local_1a8);
LAB_140f0e59b:
  plVar3 = (longlong *)param_1[0xf9];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    iVar6 = (int)plVar3[1];
    bVar10 = iVar6 == 0;
    if (bVar10) {
      *(int *)(plVar3 + 1) = 0;
      iVar6 = 0;
    }
    UNLOCK();
    while (!bVar10) {
      LOCK();
      bVar10 = iVar6 == (int)plVar3[1];
      if (bVar10) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
      }
      UNLOCK();
      if (bVar10) {
        if (plVar3 == (longlong *)0x0) {
          return;
        }
        if (param_1[0xf8] != 0) {
          FUN_14203e030(param_1[0xf8],&DAT_144601234);
        }
        LOCK();
        plVar2 = plVar3 + 1;
        lVar8 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar8 != 1) {
          return;
        }
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 != 1) {
          return;
        }
        (**(code **)(*plVar3 + 8))(plVar3,1);
        return;
      }
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar10 = iVar6 == 0;
      if (bVar10) {
        *(int *)(plVar3 + 1) = 0;
        iVar6 = 0;
      }
      UNLOCK();
    }
  }
  return;
}



// FUNCTION 140f0e650 FUN_140f0e650 body=737 status=ok
// SIG undefined FUN_140f0e650(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f0e650(longlong *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined1 local_130;
  undefined4 *local_128;
  ulonglong *puStack_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  longlong local_100;
  undefined4 *local_f8;
  ulonglong *puStack_f0;
  undefined1 local_e8 [16];
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_90 [16];
  undefined1 local_80 [24];
  undefined4 local_68 [2];
  longlong local_60;
  longlong *local_50;
  char local_40;
  ulonglong local_38 [2];
  
  local_38[0] = DAT_1468387a8 ^ (ulonglong)auStack_158;
  lVar6 = FWeakObjectPtr::Get(param_1 + 0xb9);
  if (lVar6 != 0) {
    lVar7 = FUN_14142a560();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if ((bVar5) && (*(char *)(lVar6 + 0x7c0) == '\0')) {
      local_118 = 0;
      local_110 = 0;
      (**(code **)(*param_1 + 0x4e8))(param_1,param_1[0xca],&local_118);
      uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_a8,L"LEVEL {0}",L"GFxExperienceBar",L"LevelText");
      puVar9 = (undefined8 *)FTextFormat::FTextFormat(local_90,uVar8);
      local_68[0] = 0;
      local_128 = local_68;
      local_40 = '\0';
      puStack_120 = local_38;
      local_108 = *puVar9;
      local_100 = puVar9[1];
      if (local_100 != 0) {
        LOCK();
        *(int *)(local_100 + 8) = *(int *)(local_100 + 8) + 1;
        UNLOCK();
      }
      local_60 = (longlong)param_2;
      local_f8 = local_128;
      puStack_f0 = puStack_120;
      uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
              TArray<FFormatArgumentValue,FDefaultAllocator>(local_e8,&local_f8);
      uVar8 = FText::Format(local_c0,&local_108,uVar8);
      FText::FText(local_d8,uVar8);
      if (local_b8 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_b8 + 1;
        lVar7 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_b8)(local_b8);
          LOCK();
          piVar1 = (int *)((longlong)local_b8 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_b8 + 8))(local_b8,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_e8);
      if ((local_40 != '\0') && (local_40 = '\0', local_50 != (longlong *)0x0)) {
        LOCK();
        plVar4 = local_50 + 1;
        lVar7 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar1 = (int *)((longlong)local_50 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_50 + 8))(local_50,1);
          }
        }
      }
      plVar4 = (longlong *)puVar9[1];
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        lVar7 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
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
      if (local_a0 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_a0 + 1;
        lVar7 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_a0)(local_a0);
          LOCK();
          piVar1 = (int *)((longlong)local_a0 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_a0 + 8))(local_a0,1);
          }
        }
      }
      local_128 = (undefined4 *)0x0;
      uVar8 = FText::FText(local_80,local_d8);
      local_130 = 0;
      local_138 = 0;
      FUN_140c70250(lVar6,param_1[0xcb],uVar8,0);
      if (local_d0 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_d0 + 1;
        lVar6 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_d0)(local_d0);
          LOCK();
          piVar1 = (int *)((longlong)local_d0 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_d0 + 8))(local_d0,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140f0e940 FUN_140f0e940 body=186 status=ok
// SIG undefined FUN_140f0e940(void)

void FUN_140f0e940(longlong param_1)

{
  byte bVar1;
  wchar_t *pwVar2;
  undefined8 uVar3;
  longlong local_18 [2];
  
  if (*(char *)(param_1 + 0x5f9) == '\0') {
    return;
  }
  if (*(longlong *)(param_1 + 0x5f0) == 0) {
    return;
  }
  bVar1 = *(byte *)(param_1 + 0x71b);
  if (bVar1 < 2) {
LAB_140f0e96f:
    local_18[1] = 0x11;
    local_18[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    uVar3 = 0x22;
    pwVar2 = L"defaultFirstBoot";
  }
  else {
    if (bVar1 != 2) {
      if (bVar1 != 4) goto LAB_140f0e9c2;
      goto LAB_140f0e96f;
    }
    local_18[1] = 0x14;
    local_18[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    uVar3 = 0x28;
    pwVar2 = L"modeSwitchFirstBoot";
  }
  FGenericPlatformString::Memcpy(local_18[0],pwVar2,uVar3);
  FUN_142088910(*(undefined8 *)(param_1 + 0x5f0),local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
LAB_140f0e9c2:
  *(undefined1 *)(param_1 + 0x5f9) = 0;
  return;
}



// FUNCTION 140f0ea00 FUN_140f0ea00 body=42 status=ok
// SIG undefined FUN_140f0ea00(void)

void FUN_140f0ea00(longlong *param_1)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  (**(code **)(*param_1 + 0x4e8))(param_1,DAT_1468722c8,&local_18);
  return;
}



// FUNCTION 140f0ea30 FUN_140f0ea30 body=271 status=ok
// SIG undefined FUN_140f0ea30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f0ea30(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = &LAB_140ee1030;
  uVar2 = FUN_1420849a0(param_1,local_68,local_b8);
  FUN_14208c260(param_1,uVar2);
  if (local_28 != 0) {
    plVar3 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar3 = local_38;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_78 != 0) {
    plVar3 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar3 = local_88;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140f0eb40 FUN_140f0eb40 body=382 status=ok
// SIG undefined FUN_140f0eb40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f0eb40(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d4 [3];
  undefined1 *local_c8 [2];
  longlong local_b8 [4];
  longlong *local_98;
  int local_88;
  undefined1 local_78 [16];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  local_d4[0] = 0xffffffff;
  if (*(longlong *)(param_1 + 0x668) != 0) {
    FUN_14170c210(local_d4);
  }
  local_d8 = 0xffffffff;
  uVar4 = 0xffffffff;
  if (*(longlong *)(param_1 + 0x670) != 0) {
    FUN_14170c210(&local_d8);
    uVar4 = local_d8;
  }
  uVar3 = local_d4[0];
  local_d8 = 0xffffffff;
  local_d4[0] = 0xffffffff;
  local_98 = (longlong *)0x0;
  local_88 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_b8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144605c38;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = uVar4;
    uVar4 = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x14) = uVar3;
    uVar3 = 0xffffffff;
  }
  local_c8[0] = &LAB_140ee0a50;
  uVar2 = FUN_1420849a0(param_1,local_78,local_c8);
  FUN_14208c260(param_1,uVar2);
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
  if (local_88 != 0) {
    plVar5 = local_b8;
    if (local_98 != (longlong *)0x0) {
      plVar5 = local_98;
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (local_98 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_1416f8340(uVar3);
  FUN_1416f8340(uVar4);
  FUN_1416f8340(local_d8);
  FUN_1416f8340(local_d4[0]);
  return;
}



// FUNCTION 140f0ecc0 FUN_140f0ecc0 body=846 status=ok
// SIG undefined FUN_140f0ecc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f0ecc0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined1 auStack_1e8 [32];
  longlong **local_1c8;
  undefined1 local_1b8 [8];
  longlong *local_1b0;
  undefined8 local_1a8;
  longlong local_1a0;
  undefined8 local_198;
  longlong local_190;
  undefined8 local_188;
  undefined8 local_180;
  ulonglong local_178;
  undefined4 local_170;
  undefined4 local_16c;
  byte local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined1 local_108 [16];
  longlong local_f8;
  undefined1 *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  if ((*(longlong *)(param_1 + 0x690) != 0) && (*(longlong *)(param_1 + 0x648) != 0)) {
    uVar5 = 0;
    plVar7 = *(longlong **)(param_1 + 0x670);
    uVar8 = (longlong)*(int *)(param_1 + 0x678) & 0x1fffffffffffffff;
    if (plVar7 + *(int *)(param_1 + 0x678) < plVar7) {
      uVar8 = uVar5;
    }
    uVar6 = uVar5;
    if (uVar8 != 0) {
      do {
        plVar1 = (longlong *)*plVar7;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x278))(plVar1,0);
        }
        plVar7 = plVar7 + 1;
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar8);
    }
    *(undefined4 *)(param_1 + 0x678) = 0;
    if (*(int *)(param_1 + 0x67c) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x670,0);
    }
    iVar2 = FUN_140ff6390(*(undefined8 *)(param_1 + 0x648));
    FUN_140c42cb0(*(undefined8 *)(param_1 + 0x690),local_108,iVar2,local_1b8);
    iVar2 = 2 - iVar2;
    if (((-1 < iVar2) && (iVar2 < *(int *)(param_1 + 0x688))) &&
       (*(longlong *)((longlong)iVar2 * 8 + *(longlong *)(param_1 + 0x680)) != 0)) {
      local_1a0 = 0;
      local_198 = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1a0,0);
      local_1c8 = (longlong **)CONCAT62(local_1c8._2_6_,0x3f);
      FGenericPlatformString::Convert<char,wchar_t>(local_1a0,5,&DAT_1445f3c74);
      local_1c8 = &local_1b0;
      local_1b0 = (longlong *)0x0;
      local_1a8 = 0;
      lVar3 = FUN_140ecbdf0(*(undefined8 *)((longlong)iVar2 * 8 + *(longlong *)(param_1 + 0x680)),
                            &local_1a0,0,6);
      plVar7 = local_1b0;
      for (iVar2 = (int)local_1a8; iVar2 != 0; iVar2 = iVar2 + -1) {
        if (*plVar7 != 0) {
          FMemory::Free();
        }
        plVar7 = plVar7 + 2;
      }
      if (local_1b0 != (longlong *)0x0) {
        FMemory::Free(local_1b0);
      }
      if (local_1a0 != 0) {
        FMemory::Free();
      }
      if (lVar3 != 0) {
        local_190 = param_1;
        FUN_140ed0160(&local_188,local_108);
        local_58 = (longlong *)0x0;
        local_48 = 0;
        puVar4 = (undefined8 *)FUN_140438ef0(0x88,local_78);
        uVar8 = local_178;
        if (puVar4 != (undefined8 *)0x0) {
          *puVar4 = &PTR_FUN_144605c08;
          puVar4[1] = local_190;
          puVar4[2] = local_188;
          puVar4[3] = local_180;
          puVar4[4] = local_178;
          *(undefined4 *)(puVar4 + 5) = local_170;
          *(undefined4 *)((longlong)puVar4 + 0x2c) = local_16c;
          *(byte *)(puVar4 + 6) = *(byte *)(puVar4 + 6) & 0xfc;
          *(byte *)(puVar4 + 6) = *(byte *)(puVar4 + 6) | local_168 & 3;
          puVar4[7] = local_160;
          puVar4[8] = uStack_158;
          puVar4[9] = local_150;
          puVar4[10] = uStack_148;
          puVar4[0xb] = local_140;
          puVar4[0xc] = uStack_138;
          puVar4[0xd] = local_130;
          *(undefined4 *)(puVar4 + 0xe) = local_128;
          *(undefined4 *)((longlong)puVar4 + 0x74) = uStack_124;
          *(undefined4 *)(puVar4 + 0xf) = uStack_120;
          *(undefined4 *)((longlong)puVar4 + 0x7c) = uStack_11c;
          puVar4[0x10] = local_118;
          uVar8 = uVar5;
        }
        local_88[0] = &LAB_140ee0d70;
        FUN_140f02bb0(lVar3,local_88);
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
        if (uVar8 != 0) {
          FMemory::Free(uVar8);
        }
      }
    }
    if (local_f8 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140f0f010 thunk_FUN_140f0f4b0 body=5 status=ok
// SIG undefined thunk_FUN_140f0f4b0(void)

void thunk_FUN_140f0f4b0(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  longlong *plVar6;
  wchar_t *pwVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  bool bVar11;
  int iStackX_10;
  longlong lStack_48;
  ulonglong uStack_40;
  
  plVar6 = *(longlong **)(param_1 + 0x680);
  if ((plVar6 == (longlong *)0x0) || (*(char *)(param_1 + 0x71a) != '\0')) {
    if ((*(int *)(param_1 + 0x630) != 0) ||
       (((*(int *)(param_1 + 0x634) != 0 || (*(int *)(param_1 + 0x638) != 0)) ||
        (*(int *)(param_1 + 0x63c) != 0)))) {
      if ((*(longlong *)(param_1 + 0x698) != 0) && (*(longlong *)(param_1 + 0x6a8) != 0)) {
        lStack_48 = 0;
        uStack_40 = 0xc;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&lStack_48,0);
        FGenericPlatformString::Memcpy(lStack_48,L"clipToEmpty",0x18);
        FUN_142088910(*(undefined8 *)(param_1 + 0x698),&lStack_48);
        if (lStack_48 != 0) {
          FMemory::Free();
        }
        lStack_48 = 0;
        uStack_40 = 0xc;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&lStack_48,0);
        FGenericPlatformString::Memcpy(lStack_48,L"clipToEmpty",0x18);
        FUN_142088910(*(undefined8 *)(param_1 + 0x6a8),&lStack_48);
        if (lStack_48 != 0) {
          FMemory::Free();
        }
      }
      *(undefined8 *)(param_1 + 0x630) = 0;
      *(undefined8 *)(param_1 + 0x638) = 0;
      FUN_140f0f020(param_1,0,0);
    }
    return;
  }
  if ((char)plVar6[0x31] == '\0') {
    return;
  }
  iVar2 = (**(code **)(*plVar6 + 0x420))();
  iStackX_10 = (**(code **)(**(longlong **)(param_1 + 0x680) + 0x418))();
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x680) + 0x438))();
  uVar4 = (**(code **)(**(longlong **)(param_1 + 0x680) + 0x448))();
  lVar9 = *(longlong *)(param_1 + 0x670);
  iVar10 = 0;
  if ((lVar9 != 0) &&
     (plVar6 = (longlong *)FUN_14307cf20(lVar9,*(undefined1 *)(lVar9 + 0x690)), iVar10 = 0,
     plVar6 != (longlong *)0x0)) {
    iVar5 = (**(code **)(*plVar6 + 0x480))(plVar6);
    iVar10 = 0;
    if (-1 < iVar5 + -1) {
      iVar10 = iVar5 + -1;
    }
  }
  bVar11 = iVar3 == 0;
  if (iStackX_10 == 0) {
    iStackX_10 = (**(code **)(**(longlong **)(param_1 + 0x680) + 0x440))();
    bVar11 = iVar3 <= iVar10;
    iVar2 = iVar3;
  }
  if (*(longlong *)(param_1 + 0x698) != 0) {
    if (iVar10 < iVar2) {
      uStack_40 = 0;
      if (*(int *)(param_1 + 0x630) < iVar2) {
        pwVar7 = L"defaultReload";
        if (*(char *)(param_1 + 0x71b) == '\x04') {
          pwVar7 = L"eridianReload";
        }
        lStack_48 = 0;
        if (*pwVar7 != L'\0') {
          lVar9 = -1;
          do {
            lVar9 = lVar9 + 1;
          } while (pwVar7[lVar9] != L'\0');
LAB_140f0f65a:
          lStack_48 = 0;
          uVar8 = (int)lVar9 + 1;
          uStack_40 = (ulonglong)uVar8;
          if (0 < (int)uVar8) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&lStack_48,0);
          }
          lVar9 = (longlong)(int)uVar8 * 2;
          goto LAB_140f0f67b;
        }
      }
      else {
        pwVar7 = L"defaultValueChange";
        if (*(char *)(param_1 + 0x71b) == '\x04') {
          pwVar7 = L"eridianValueChange";
        }
        lStack_48 = 0;
        if (*pwVar7 != L'\0') {
          lVar9 = -1;
          do {
            lVar9 = lVar9 + 1;
          } while (pwVar7[lVar9] != L'\0');
          goto LAB_140f0f65a;
        }
      }
    }
    else {
      lStack_48 = 0;
      uStack_40 = 0xc;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&lStack_48,0);
      pwVar7 = L"clipToEmpty";
      lVar9 = 0x18;
LAB_140f0f67b:
      FGenericPlatformString::Memcpy(lStack_48,pwVar7,lVar9);
    }
    FUN_142088910(*(undefined8 *)(param_1 + 0x698),&lStack_48);
    if (lStack_48 != 0) {
      FMemory::Free();
    }
  }
  if (*(longlong *)(param_1 + 0x6a8) != 0) {
    if (bVar11) {
      lStack_48 = 0;
      uStack_40 = 0xc;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&lStack_48,0);
      FGenericPlatformString::Memcpy(lStack_48,L"clipToEmpty",0x18);
      FUN_142088910(*(undefined8 *)(param_1 + 0x6a8),&lStack_48);
      if (lStack_48 != 0) {
        FMemory::Free();
      }
    }
    else {
      pwVar7 = L"defaultPickup";
      uStack_40 = 0;
      if (*(char *)(param_1 + 0x71b) == '\x04') {
        pwVar7 = L"eridianPickup";
      }
      lStack_48 = 0;
      if (*pwVar7 != L'\0') {
        lVar9 = -1;
        do {
          lVar9 = lVar9 + 1;
        } while (pwVar7[lVar9] != L'\0');
        uVar8 = (int)lVar9 + 1;
        uStack_40 = (ulonglong)uVar8;
        if (0 < (int)uVar8) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&lStack_48,0);
        }
        FGenericPlatformString::Memcpy(lStack_48,pwVar7,(longlong)(int)uVar8 * 2);
      }
      FUN_142088910(*(undefined8 *)(param_1 + 0x6a8),&lStack_48);
      if (lStack_48 != 0) {
        FMemory::Free();
      }
    }
  }
  if ((iVar2 <= iVar10) && (*(int *)(param_1 + 0x660) != 2)) {
    FUN_141326860(param_1);
    *(undefined4 *)(param_1 + 0x660) = 2;
    goto LAB_140f0f841;
  }
  if ((0 < iStackX_10) && (iVar2 < iStackX_10)) {
    if ((*(longlong *)(param_1 + 0x688) == 0) ||
       (*(longlong *)(*(longlong *)(param_1 + 0x688) + 0x990) == 0)) goto LAB_140f0f841;
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    if ((*(longlong *)(DAT_146b33f38 + 0x58) != 0) &&
       (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x680) + 0x478))
                          (*(longlong **)(param_1 + 0x680),
                           *(undefined4 *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x238)),
       cVar1 != '\0')) {
      if (*(int *)(param_1 + 0x660) != 1) {
        FUN_141326a20(param_1);
        *(undefined4 *)(param_1 + 0x660) = 1;
      }
      goto LAB_140f0f841;
    }
  }
  *(undefined4 *)(param_1 + 0x660) = 0;
LAB_140f0f841:
  if (bVar11) {
    if (*(int *)(param_1 + 0x664) != 1) {
      *(undefined4 *)(param_1 + 0x664) = 1;
      FUN_141326a60(param_1);
    }
  }
  else if (*(int *)(param_1 + 0x664) != 0) {
    *(undefined4 *)(param_1 + 0x664) = 0;
  }
  *(undefined4 *)(param_1 + 0x63c) = uVar4;
  *(int *)(param_1 + 0x638) = iVar3;
  if (*(char *)(param_1 + 0x71b) == '\x04') {
    iVar3 = -1;
  }
  *(int *)(param_1 + 0x630) = iVar2;
  *(int *)(param_1 + 0x634) = iStackX_10;
  FUN_140f0f020(param_1,iVar2,iVar3);
  return;
}



// FUNCTION 140f0f020 FUN_140f0f020 body=467 status=ok
// SIG undefined FUN_140f0f020(void)

void FUN_140f0f020(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 local_58;
  longlong *plStack_50;
  undefined8 local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  if (((*(longlong **)(param_1 + 0x6a0) != (longlong *)0x0) && (*(longlong *)(param_1 + 0x6b0) != 0)
      ) && (*(char *)(param_1 + 0x71a) == '\0')) {
    local_58 = 0;
    plStack_50 = (longlong *)0x0;
    lVar5 = **(longlong **)(param_1 + 0x6a0);
    uVar6 = FText::AsNumber(local_38,param_2,0,&local_58);
    (**(code **)(lVar5 + 0x2b0))(*(undefined8 *)(param_1 + 0x6a0),uVar6,0,0);
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)local_30 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
    plVar1 = plStack_50;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_50 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar1 + 8))(plVar1,1);
        }
      }
    }
    if (param_3 < 0) {
      lVar5 = **(longlong **)(param_1 + 0x6b0);
      uVar6 = FUN_1404b03b0();
      (**(code **)(lVar5 + 0x2b0))(*(undefined8 *)(param_1 + 0x6b0),uVar6,1,0);
    }
    else {
      local_48 = 0;
      plStack_40 = (longlong *)0x0;
      lVar5 = **(longlong **)(param_1 + 0x6b0);
      uVar6 = FText::AsNumber(local_20,param_3,0,&local_48);
      (**(code **)(lVar5 + 0x2b0))(*(undefined8 *)(param_1 + 0x6b0),uVar6,0,0);
      if (local_18 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_18 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_18)(local_18);
          LOCK();
          piVar2 = (int *)((longlong)local_18 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_18 + 8))(local_18,1);
          }
        }
      }
      plVar1 = plStack_40;
      if (plStack_40 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_40 + 1;
        lVar5 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plStack_40)(plStack_40);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar1 + 8))(plVar1,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140f0f200 FUN_140f0f200 body=677 status=ok
// SIG undefined FUN_140f0f200(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f0f200(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 *local_c8 [2];
  longlong local_b8 [4];
  longlong *local_98;
  int local_88;
  undefined1 local_78 [16];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  lVar1 = *(longlong *)(param_1 + 0x670);
  lVar3 = 0;
  if (lVar1 != 0) {
    lVar3 = (**(code **)(*(longlong *)(lVar1 + 0x460) + 0x10))
                      ((longlong *)(lVar1 + 0x460),*(undefined1 *)(lVar1 + 0x690));
  }
  if (lVar3 != *(longlong *)(param_1 + 0x680)) {
    FWeakObjectPtr::operator=(&local_d8);
    local_98 = (longlong *)0x0;
    local_88 = 0;
    puVar4 = (undefined8 *)FUN_140438ef0(0x18,local_b8);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &PTR_FUN_1444f8920;
      puVar4[1] = param_1;
      *(undefined4 *)(puVar4 + 2) = local_d8;
      *(undefined4 *)((longlong)puVar4 + 0x14) = local_d4;
    }
    local_c8[0] = &LAB_140ee0b70;
    uVar5 = FUN_1420849a0(param_1,local_78,local_c8);
    FUN_14208c260(param_1,uVar5);
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
    *(longlong *)(param_1 + 0x680) = lVar3;
    if (lVar3 != 0) {
      cVar2 = FUN_142d52a00(param_1 + 0x648);
      if (cVar2 != '\0') {
        uVar5 = FUN_142d52a20(param_1 + 0x648);
        uVar5 = FArchive::operator<<(uVar5);
        uVar5 = FUN_142d62330(uVar5);
        FUN_140483870(uVar5,param_1);
      }
      local_98 = (longlong *)0x0;
      local_88 = 0;
      puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_b8);
      if (puVar4 != (undefined8 *)0x0) {
        puVar4[1] = param_1;
        *puVar4 = &PTR_FUN_143f77b70;
      }
      local_c8[0] = &LAB_140ee0e80;
      uVar5 = FUN_1420849a0(param_1,local_78,local_c8);
      FUN_14208c260(param_1,uVar5);
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
      if (((*(longlong *)(param_1 + 0x6b8) != 0) && (*(longlong *)(param_1 + 0x680) != 0)) &&
         (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x680) + 0x180), lVar1 != 0)) {
        FUN_142088cf0(*(longlong *)(param_1 + 0x6b8),lVar1 + 0x50);
      }
    }
    FUN_140f0f4b0(param_1);
    *(undefined4 *)(param_1 + 0x660) = 0;
  }
  return;
}



// FUNCTION 140f0f4b0 FUN_140f0f4b0 body=1301 status=ok
// SIG undefined FUN_140f0f4b0(void)

void FUN_140f0f4b0(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  longlong *plVar6;
  wchar_t *pwVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  bool bVar11;
  int local_res10;
  longlong local_48;
  ulonglong local_40;
  
  plVar6 = *(longlong **)(param_1 + 0x680);
  if ((plVar6 == (longlong *)0x0) || (*(char *)(param_1 + 0x71a) != '\0')) {
    if ((*(int *)(param_1 + 0x630) != 0) ||
       (((*(int *)(param_1 + 0x634) != 0 || (*(int *)(param_1 + 0x638) != 0)) ||
        (*(int *)(param_1 + 0x63c) != 0)))) {
      if ((*(longlong *)(param_1 + 0x698) != 0) && (*(longlong *)(param_1 + 0x6a8) != 0)) {
        local_48 = 0;
        local_40 = 0xc;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
        FGenericPlatformString::Memcpy(local_48,L"clipToEmpty",0x18);
        FUN_142088910(*(undefined8 *)(param_1 + 0x698),&local_48);
        if (local_48 != 0) {
          FMemory::Free();
        }
        local_48 = 0;
        local_40 = 0xc;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
        FGenericPlatformString::Memcpy(local_48,L"clipToEmpty",0x18);
        FUN_142088910(*(undefined8 *)(param_1 + 0x6a8),&local_48);
        if (local_48 != 0) {
          FMemory::Free();
        }
      }
      *(undefined8 *)(param_1 + 0x630) = 0;
      *(undefined8 *)(param_1 + 0x638) = 0;
      FUN_140f0f020(param_1,0,0);
    }
    return;
  }
  if ((char)plVar6[0x31] == '\0') {
    return;
  }
  iVar2 = (**(code **)(*plVar6 + 0x420))();
  local_res10 = (**(code **)(**(longlong **)(param_1 + 0x680) + 0x418))();
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x680) + 0x438))();
  uVar4 = (**(code **)(**(longlong **)(param_1 + 0x680) + 0x448))();
  lVar9 = *(longlong *)(param_1 + 0x670);
  iVar10 = 0;
  if ((lVar9 != 0) &&
     (plVar6 = (longlong *)FUN_14307cf20(lVar9,*(undefined1 *)(lVar9 + 0x690)), iVar10 = 0,
     plVar6 != (longlong *)0x0)) {
    iVar5 = (**(code **)(*plVar6 + 0x480))(plVar6);
    iVar10 = 0;
    if (-1 < iVar5 + -1) {
      iVar10 = iVar5 + -1;
    }
  }
  bVar11 = iVar3 == 0;
  if (local_res10 == 0) {
    local_res10 = (**(code **)(**(longlong **)(param_1 + 0x680) + 0x440))();
    bVar11 = iVar3 <= iVar10;
    iVar2 = iVar3;
  }
  if (*(longlong *)(param_1 + 0x698) != 0) {
    if (iVar10 < iVar2) {
      local_40 = 0;
      if (*(int *)(param_1 + 0x630) < iVar2) {
        pwVar7 = L"defaultReload";
        if (*(char *)(param_1 + 0x71b) == '\x04') {
          pwVar7 = L"eridianReload";
        }
        local_48 = 0;
        if (*pwVar7 != L'\0') {
          lVar9 = -1;
          do {
            lVar9 = lVar9 + 1;
          } while (pwVar7[lVar9] != L'\0');
LAB_140f0f65a:
          local_48 = 0;
          uVar8 = (int)lVar9 + 1;
          local_40 = (ulonglong)uVar8;
          if (0 < (int)uVar8) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
          }
          lVar9 = (longlong)(int)uVar8 * 2;
          goto LAB_140f0f67b;
        }
      }
      else {
        pwVar7 = L"defaultValueChange";
        if (*(char *)(param_1 + 0x71b) == '\x04') {
          pwVar7 = L"eridianValueChange";
        }
        local_48 = 0;
        if (*pwVar7 != L'\0') {
          lVar9 = -1;
          do {
            lVar9 = lVar9 + 1;
          } while (pwVar7[lVar9] != L'\0');
          goto LAB_140f0f65a;
        }
      }
    }
    else {
      local_48 = 0;
      local_40 = 0xc;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      pwVar7 = L"clipToEmpty";
      lVar9 = 0x18;
LAB_140f0f67b:
      FGenericPlatformString::Memcpy(local_48,pwVar7,lVar9);
    }
    FUN_142088910(*(undefined8 *)(param_1 + 0x698),&local_48);
    if (local_48 != 0) {
      FMemory::Free();
    }
  }
  if (*(longlong *)(param_1 + 0x6a8) != 0) {
    if (bVar11) {
      local_48 = 0;
      local_40 = 0xc;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      FGenericPlatformString::Memcpy(local_48,L"clipToEmpty",0x18);
      FUN_142088910(*(undefined8 *)(param_1 + 0x6a8),&local_48);
      if (local_48 != 0) {
        FMemory::Free();
      }
    }
    else {
      pwVar7 = L"defaultPickup";
      local_40 = 0;
      if (*(char *)(param_1 + 0x71b) == '\x04') {
        pwVar7 = L"eridianPickup";
      }
      local_48 = 0;
      if (*pwVar7 != L'\0') {
        lVar9 = -1;
        do {
          lVar9 = lVar9 + 1;
        } while (pwVar7[lVar9] != L'\0');
        uVar8 = (int)lVar9 + 1;
        local_40 = (ulonglong)uVar8;
        if (0 < (int)uVar8) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
        }
        FGenericPlatformString::Memcpy(local_48,pwVar7,(longlong)(int)uVar8 * 2);
      }
      FUN_142088910(*(undefined8 *)(param_1 + 0x6a8),&local_48);
      if (local_48 != 0) {
        FMemory::Free();
      }
    }
  }
  if ((iVar2 <= iVar10) && (*(int *)(param_1 + 0x660) != 2)) {
    FUN_141326860(param_1);
    *(undefined4 *)(param_1 + 0x660) = 2;
    goto LAB_140f0f841;
  }
  if ((0 < local_res10) && (iVar2 < local_res10)) {
    if ((*(longlong *)(param_1 + 0x688) == 0) ||
       (*(longlong *)(*(longlong *)(param_1 + 0x688) + 0x990) == 0)) goto LAB_140f0f841;
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    if ((*(longlong *)(DAT_146b33f38 + 0x58) != 0) &&
       (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x680) + 0x478))
                          (*(longlong **)(param_1 + 0x680),
                           *(undefined4 *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x238)),
       cVar1 != '\0')) {
      if (*(int *)(param_1 + 0x660) != 1) {
        FUN_141326a20(param_1);
        *(undefined4 *)(param_1 + 0x660) = 1;
      }
      goto LAB_140f0f841;
    }
  }
  *(undefined4 *)(param_1 + 0x660) = 0;
LAB_140f0f841:
  if (bVar11) {
    if (*(int *)(param_1 + 0x664) != 1) {
      *(undefined4 *)(param_1 + 0x664) = 1;
      FUN_141326a60(param_1);
    }
  }
  else if (*(int *)(param_1 + 0x664) != 0) {
    *(undefined4 *)(param_1 + 0x664) = 0;
  }
  *(undefined4 *)(param_1 + 0x63c) = uVar4;
  *(int *)(param_1 + 0x638) = iVar3;
  if (*(char *)(param_1 + 0x71b) == '\x04') {
    iVar3 = -1;
  }
  *(int *)(param_1 + 0x630) = iVar2;
  *(int *)(param_1 + 0x634) = local_res10;
  FUN_140f0f020(param_1,iVar2,iVar3);
  return;
}



// FUNCTION 140f0f9d0 FUN_140f0f9d0 body=399 status=ok
// SIG undefined FUN_140f0f9d0(void)

void FUN_140f0f9d0(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined4 uVar6;
  
  if ((*(longlong *)(param_1 + 0x1c0) != 0) && (*(longlong *)(param_1 + 0x1c8) != 0)) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x1c8) + 0x10))();
    plVar5 = (longlong *)0x0;
    if (*(int *)(param_1 + 0x210) != iVar2) {
      plVar3 = plVar5;
      if (*(longlong *)(param_1 + 0x1c0) != 0) {
        plVar3 = *(longlong **)(param_1 + 0x1c8);
      }
      iVar2 = (**(code **)(*plVar3 + 0x10))();
      plVar3 = *(longlong **)(param_1 + 0x178);
      *(int *)(param_1 + 0x210) = iVar2;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x278))(plVar3,0 < iVar2);
      }
      plVar3 = *(longlong **)(param_1 + 0x180);
      if (plVar3 != (longlong *)0x0) {
        if ((*(char *)(param_1 + 0x214) == '\0') || (*(int *)(param_1 + 0x210) < 2)) {
          uVar4 = 0;
        }
        else {
          uVar4 = 1;
        }
        (**(code **)(*plVar3 + 0x278))(plVar3,uVar4);
      }
    }
    plVar3 = plVar5;
    if (*(longlong *)(param_1 + 0x1c0) != 0) {
      plVar3 = *(longlong **)(param_1 + 0x1c8);
    }
    cVar1 = (**(code **)(*plVar3 + 0x30))();
    if (cVar1 != *(char *)(param_1 + 0x214)) {
      plVar3 = *(longlong **)(param_1 + 0x180);
      *(char *)(param_1 + 0x214) = cVar1;
      if (plVar3 != (longlong *)0x0) {
        if ((cVar1 == '\0') || (*(int *)(param_1 + 0x210) < 2)) {
          uVar4 = 0;
        }
        else {
          uVar4 = 1;
        }
        (**(code **)(*plVar3 + 0x278))(plVar3,uVar4);
      }
    }
    iVar2 = *(int *)(param_1 + 0x210);
    if ((0 < iVar2) && (*(longlong *)(param_1 + 0x178) != 0)) {
      plVar3 = plVar5;
      if (*(longlong *)(param_1 + 0x1c0) != 0) {
        plVar3 = *(longlong **)(param_1 + 0x1c8);
      }
      uVar6 = (**(code **)(*plVar3 + 0x18))(plVar3,0);
      FUN_142f0ead0(*(undefined8 *)(param_1 + 0x178),uVar6);
      iVar2 = *(int *)(param_1 + 0x210);
    }
    if (((1 < iVar2) && (*(char *)(param_1 + 0x214) != '\0')) &&
       (*(longlong *)(param_1 + 0x180) != 0)) {
      if (*(longlong *)(param_1 + 0x1c0) != 0) {
        plVar5 = *(longlong **)(param_1 + 0x1c8);
      }
      uVar6 = (**(code **)(*plVar5 + 0x18))(plVar5,1);
      FUN_142f0ead0(*(undefined8 *)(param_1 + 0x180),uVar6);
    }
  }
  return;
}



// FUNCTION 140f0fb60 FUN_140f0fb60 body=392 status=ok
// SIG undefined FUN_140f0fb60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f0fb60(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  if (*(longlong *)(param_1 + 0x748) != 0) {
    local_88 = (longlong *)0x0;
    local_78 = 0;
    puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
    if (puVar1 != (undefined8 *)0x0) {
      puVar1[1] = param_1;
      *puVar1 = &PTR_FUN_143f77b70;
    }
    local_b8[0] = &LAB_140ee0c90;
    uVar2 = FUN_1420849a0(param_1,local_68,local_b8);
    FUN_14208c260(param_1,uVar2);
    if (local_28 != 0) {
      plVar3 = local_58;
      if (local_38 != (longlong *)0x0) {
        plVar3 = local_38;
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3,0);
      }
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_78 != 0) {
      plVar3 = local_a8;
      if (local_88 != (longlong *)0x0) {
        plVar3 = local_88;
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3,0);
      }
    }
    if (local_88 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = &LAB_140ee1000;
  uVar2 = FUN_1420849a0(param_1,local_68,local_b8);
  FUN_14208c4f0(param_1,uVar2);
  if (local_78 != 0) {
    plVar3 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar3 = local_88;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140f0fcf0 FUN_140f0fcf0 body=436 status=ok
// SIG undefined FUN_140f0fcf0(void)

void FUN_140f0fcf0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  lVar5 = *(longlong *)(param_1 + 0x170);
  if (lVar5 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x348) != 0) {
    if (*(longlong *)(param_1 + 0x350) != 0) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x350) + 8);
      LOCK();
      iVar3 = *piVar1;
      if (iVar3 == 0) {
        *piVar1 = 0;
        iVar3 = 0;
      }
      UNLOCK();
      if (0 < iVar3) goto LAB_140f0fda3;
    }
    lVar5 = *(longlong *)(param_1 + 0x170);
  }
  uVar4 = FUN_142085870(lVar5,local_38,L"gamertagText");
  FUN_142ede260(param_1 + 0x340,uVar4);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_30 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
LAB_140f0fda3:
  if ((*(longlong *)(param_1 + 0x348) != 0) && (*(longlong *)(param_1 + 0x350) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x350) + 8);
    LOCK();
    iVar3 = *piVar1;
    if (iVar3 == 0) {
      *piVar1 = 0;
      iVar3 = 0;
    }
    UNLOCK();
    if (0 < iVar3) {
      if (((*(char *)(param_1 + 0x215) == '\0') && (*(longlong *)(param_1 + 0x1d0) != 0)) &&
         (*(char *)(param_1 + 0x1f8) != '\0')) {
        if ((*(longlong *)(param_1 + 0x1c0) != 0) && (*(longlong *)(param_1 + 0x1c8) != 0)) {
          uVar4 = (**(code **)(**(longlong **)(param_1 + 0x1c8) + 0x68))
                            (*(longlong **)(param_1 + 0x1c8),local_28);
          UMistDebugEntityScreen::InspectEntity(param_1 + 0x340,uVar4,1,0);
          if (local_20 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_20 + 1;
            lVar5 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*local_20)(local_20);
              LOCK();
              piVar1 = (int *)((longlong)local_20 + 0xc);
              iVar3 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*local_20 + 8))(local_20,1);
                return;
              }
            }
          }
        }
      }
      else {
        uVar4 = FUN_1404b03b0();
        UMistDebugEntityScreen::InspectEntity(param_1 + 0x340,uVar4,1,0);
      }
    }
  }
  return;
}



// FUNCTION 140f0feb0 FUN_140f0feb0 body=283 status=ok
// SIG undefined FUN_140f0feb0(void)

void FUN_140f0feb0(longlong param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  longlong local_18 [2];
  
  if (*(longlong *)(param_1 + 0x6d8) == 0) {
    return;
  }
  if (*(longlong **)(param_1 + 0x670) != (longlong *)0x0) {
    lVar1 = **(longlong **)(param_1 + 0x670);
    uVar2 = (**(code **)(lVar1 + 0x858))();
    plVar4 = (longlong *)
             (**(code **)(lVar1 + 0xad8))(*(undefined8 *)(param_1 + 0x670),local_res8,uVar2);
    plVar4 = (longlong *)*plVar4;
    if (plVar4 != (longlong *)0x0) {
      plVar5 = (longlong *)plVar4[0x1f];
      if (plVar5 == (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x368))(plVar4);
        plVar5 = (longlong *)plVar4[0x1f];
        if (plVar5 == (longlong *)0x0) goto LAB_140f0ff68;
      }
      if ((1 < (int)plVar5[0x15]) && (cVar3 = (**(code **)(*plVar5 + 0x278))(plVar5), cVar3 != '\0')
         ) {
        FUN_142088cf0(*(undefined8 *)(param_1 + 0x6d8),plVar5 + 0x14);
        return;
      }
    }
  }
LAB_140f0ff68:
  local_18[1] = 5;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"None",10);
  FUN_142088cf0(*(undefined8 *)(param_1 + 0x6d8),local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140f0ffd0 FUN_140f0ffd0 body=273 status=ok
// SIG undefined FUN_140f0ffd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f0ffd0(undefined8 param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c4;
  undefined1 local_b8 [80];
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  FWeakObjectPtr::operator=(&local_c8,param_1);
  local_38 = (longlong *)0x0;
  local_28 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_58);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444f8920;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_c8;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_c4;
  }
  local_68[0] = &LAB_140ee0a30;
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_b8,local_68);
  FUN_14204c280(local_b8);
  if (local_28 != 0) {
    plVar2 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar2 = local_38;
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140f100f0 FUN_140f100f0 body=764 status=ok
// SIG undefined FUN_140f100f0(void)

void FUN_140f100f0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  longlong local_28;
  ulonglong local_20;
  
  if ((((*(longlong *)(param_1 + 0x6f0) != 0) && (*(longlong *)(param_1 + 0x6f8) != 0)) &&
      (*(longlong *)(param_1 + 0x678) != 0)) &&
     ((*(longlong *)(param_1 + 0x6b0) != 0 && (*(longlong *)(param_1 + 0x700) != 0)))) {
    FUN_142f0ead0(*(longlong *)(param_1 + 0x6f0),
                  *(undefined4 *)(*(longlong *)(param_1 + 0x678) + 0x218));
    lVar4 = *(longlong *)(param_1 + 0x678);
    if ((*(float *)(lVar4 + 600) <= 1e-08) || (cVar1 = '\x01', (*(byte *)(lVar4 + 0x229) & 1) == 0))
    {
      cVar1 = '\0';
    }
    lVar2 = -1;
    if (*(char *)(param_1 + 0x71d) != cVar1) {
      if ((*(float *)(lVar4 + 600) <= 1e-08) || ((*(byte *)(lVar4 + 0x229) & 1) == 0)) {
        cVar1 = '\0';
      }
      else {
        cVar1 = '\x01';
      }
      *(char *)(param_1 + 0x71d) = cVar1;
      local_20 = 0;
      pwVar5 = L"stop";
      if (cVar1 != '\0') {
        pwVar5 = L"startOverheatWarning";
      }
      local_28 = 0;
      if (*pwVar5 != L'\0') {
        lVar4 = -1;
        do {
          lVar4 = lVar4 + 1;
        } while (pwVar5[lVar4] != L'\0');
        uVar3 = (int)lVar4 + 1;
        local_20 = (ulonglong)uVar3;
        if (0 < (int)uVar3) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
        }
        FGenericPlatformString::Memcpy(local_28,pwVar5,(longlong)(int)uVar3 * 2);
      }
      FUN_142088910(*(undefined8 *)(param_1 + 0x708),&local_28);
      if (local_28 != 0) {
        FMemory::Free();
      }
      pwVar5 = L"off";
      local_20 = 0;
      if (*(char *)(param_1 + 0x71d) != '\0') {
        pwVar5 = L"startRedline";
      }
      local_28 = 0;
      if (*pwVar5 != L'\0') {
        lVar4 = -1;
        do {
          lVar4 = lVar4 + 1;
        } while (pwVar5[lVar4] != L'\0');
        uVar3 = (int)lVar4 + 1;
        local_20 = (ulonglong)uVar3;
        if (0 < (int)uVar3) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
        }
        FGenericPlatformString::Memcpy(local_28,pwVar5,(longlong)(int)uVar3 * 2);
      }
      FUN_142088910(*(undefined8 *)(param_1 + 0x700),&local_28);
      if (local_28 != 0) {
        FMemory::Free();
      }
    }
    cVar1 = *(char *)(*(longlong *)(param_1 + 0x678) + 0x25c);
    if (*(char *)(param_1 + 0x71c) != cVar1) {
      *(char *)(param_1 + 0x71c) = cVar1;
      local_20 = 0;
      pwVar5 = L"off";
      if (cVar1 != '\0') {
        pwVar5 = L"brokenFillAnim";
      }
      local_28 = 0;
      if (*pwVar5 != L'\0') {
        lVar4 = -1;
        do {
          lVar4 = lVar4 + 1;
        } while (pwVar5[lVar4] != L'\0');
        uVar3 = (int)lVar4 + 1;
        local_20 = (ulonglong)uVar3;
        if (0 < (int)uVar3) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
        }
        FGenericPlatformString::Memcpy(local_28,pwVar5,(longlong)(int)uVar3 * 2);
      }
      FUN_142088910(*(undefined8 *)(param_1 + 0x6f8),&local_28);
      if (local_28 != 0) {
        FMemory::Free();
      }
      pwVar5 = L"defaultState";
      local_28 = 0;
      if (*(char *)(param_1 + 0x71c) != '\0') {
        pwVar5 = L"brokenState";
      }
      local_20 = 0;
      if (*pwVar5 != L'\0') {
        do {
          lVar2 = lVar2 + 1;
        } while (pwVar5[lVar2] != L'\0');
        uVar3 = (int)lVar2 + 1;
        local_20 = (ulonglong)uVar3;
        if (0 < (int)uVar3) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
        }
        FGenericPlatformString::Memcpy(local_28,pwVar5,(longlong)(int)uVar3 * 2);
      }
      FUN_142088910(*(undefined8 *)(param_1 + 0x6f0),&local_28);
      if (local_28 != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140f103f0 FUN_140f103f0 body=381 status=ok
// SIG undefined FUN_140f103f0(void)

void FUN_140f103f0(longlong param_1,char param_2,char param_3)

{
  byte bVar1;
  wchar_t *pwVar2;
  undefined8 uVar3;
  longlong local_18 [2];
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  if (param_2 != '\x02') {
    if (param_2 == '\x03') {
      if (param_3 != '\0') {
        return;
      }
    }
    else if (param_2 != '\x06') {
      return;
    }
  }
  if (*(longlong *)(param_1 + 0x6c0) != 0) {
    local_18[0] = 0;
    local_18[1] = 0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Memcpy(local_18[0],L"initialization",0x1e);
    FUN_142088910(*(undefined8 *)(param_1 + 0x6c0),local_18);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  if (param_3 != '\0') {
    *(undefined1 *)(param_1 + 0x5f9) = 1;
    return;
  }
  if (*(longlong *)(param_1 + 0x5f0) == 0) {
    return;
  }
  bVar1 = *(byte *)(param_1 + 0x71b);
  if (1 < bVar1) {
    if (bVar1 == 2) {
      local_18[0] = 0;
      local_18[1] = 0x1b;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      uVar3 = 0x36;
      pwVar2 = L"modeSwitchReinitializeAnim";
      goto LAB_140f104e2;
    }
    if (bVar1 == 3) {
      local_18[0] = 0;
      local_18[1] = 0x14;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      uVar3 = 0x28;
      pwVar2 = L"covReinitializeAnim";
      goto LAB_140f104e2;
    }
    if (bVar1 != 4) {
      return;
    }
  }
  local_18[0] = 0;
  local_18[1] = 0x18;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  uVar3 = 0x30;
  pwVar2 = L"defaultReinitializeAnim";
LAB_140f104e2:
  FGenericPlatformString::Memcpy(local_18[0],pwVar2,uVar3);
  FUN_142088910(*(undefined8 *)(param_1 + 0x5f0),local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140f10570 FUN_140f10570 body=304 status=ok
// SIG undefined FUN_140f10570(void)

void FUN_140f10570(longlong param_1,char param_2,char param_3)

{
  longlong local_18 [2];
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  if (param_2 != '\x01') {
    if ((param_2 == '\x02') || (param_2 == '\x03')) {
      if (param_3 != '\0') {
        return;
      }
    }
    else if (param_2 != '\x06') {
      return;
    }
  }
  if (*(longlong *)(param_1 + 0x720) != 0) {
    local_18[0] = 0;
    local_18[1] = 0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Memcpy(local_18[0],L"initialization",0x1e);
    FUN_142088cf0(*(undefined8 *)(param_1 + 0x720),local_18);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  if (param_3 == '\0') {
    if (*(longlong *)(param_1 + 0x5f0) != 0) {
      local_18[0] = 0;
      local_18[1] = 0x11;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      FGenericPlatformString::Memcpy(local_18[0],L"reinitializeAnim",0x22);
      FUN_142088910(*(undefined8 *)(param_1 + 0x5f0),local_18);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
    }
    return;
  }
  *(undefined1 *)(param_1 + 0x5f9) = 1;
  return;
}



// FUNCTION 140f106a0 FUN_140f106a0 body=599 status=ok
// SIG undefined FUN_140f106a0(void)

void FUN_140f106a0(longlong param_1,int *param_2,longlong param_3,undefined8 *param_4)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 local_148 [272];
  
  uVar6 = 0;
  uVar4 = uVar6;
  if (param_3 != 0) {
    uVar4 = FUN_142fffe20(param_3);
  }
  FUN_1411e38c0(local_148,uVar4,param_3);
  uVar4 = 0xffffffff;
  if (0 < *(int *)(param_1 + 0x168)) {
    lVar8 = *(longlong *)(param_1 + 0x160);
    uVar10 = uVar6;
    do {
      iVar9 = (int)uVar10;
      if (*(int *)(lVar8 + 0xd8) == *param_2) {
        FUN_140e9cc60(lVar8,local_148);
        if ((*(int *)(param_4 + 8) == 0) ||
           (plVar5 = (longlong *)
                     ((ulonglong)(param_4[6] != 0) - 1 & (ulonglong)(param_4 + 2) | param_4[6]),
           plVar5 == (longlong *)0x0)) {
LAB_140f107d8:
          uVar3 = 2;
        }
        else {
          if ((*(int *)(param_4 + 8) != 0) && (plVar5 != (longlong *)0x0)) {
            uVar6 = (**(code **)(*plVar5 + 8))();
          }
          cVar2 = (*(code *)*param_4)(uVar6,lVar8);
          uVar3 = 1;
          if (cVar2 == '\0') goto LAB_140f107d8;
        }
        *(undefined4 *)(lVar8 + 0x108) = uVar3;
        uVar4 = uVar10;
        if ((-1 < iVar9) && (iVar9 < *(int *)(param_1 + 0x168))) {
          bVar1 = true;
          goto LAB_140f1071b;
        }
        break;
      }
      uVar10 = (ulonglong)(iVar9 + 1U);
      lVar8 = lVar8 + 0x110;
    } while ((int)(iVar9 + 1U) < *(int *)(param_1 + 0x168));
  }
  bVar1 = false;
  uVar10 = uVar4;
LAB_140f1071b:
  if ((!bVar1) || (*(longlong *)(param_1 + 0x170) == 0)) goto LAB_140f108a8;
  plVar5 = (longlong *)FUN_142eb6a30(*(longlong *)(param_1 + 0x170),uVar10);
  if (plVar5 == (longlong *)0x0) goto LAB_140f108a8;
  lVar8 = FUN_141324a80();
  if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
      lVar8 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) goto LAB_140f108a8;
  lVar8 = (**(code **)(*plVar5 + 0x340))(plVar5);
  lVar8 = FWeakObjectPtr::Get(lVar8 + 0xdc);
  lVar11 = (longlong)(int)uVar10 * 0x110;
  lVar7 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 0x160) + 0xdc + lVar11);
  if (lVar8 == lVar7) {
    lVar8 = (**(code **)(*plVar5 + 0x340))(plVar5);
    lVar8 = FWeakObjectPtr::Get(lVar8 + 0x5c);
    lVar7 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 0x160) + 0x5c + lVar11);
    if (lVar8 != lVar7) goto LAB_140f1087f;
    bVar1 = false;
  }
  else {
LAB_140f1087f:
    bVar1 = true;
  }
  (**(code **)(*plVar5 + 0x330))(plVar5,*(longlong *)(param_1 + 0x160) + lVar11);
  if (bVar1) {
    (**(code **)(*plVar5 + 0x3c0))(plVar5);
  }
LAB_140f108a8:
  FUN_140e9c360(local_148);
  if (*(int *)(param_4 + 8) != 0) {
    plVar5 = (longlong *)param_4[6];
    if ((longlong *)param_4[6] == (longlong *)0x0) {
      plVar5 = param_4 + 2;
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (param_4[6] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140f10900 FUN_140f10900 body=255 status=ok
// SIG undefined FUN_140f10900(void)

void FUN_140f10900(longlong param_1)

{
  bool bVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined1 local_res8 [8];
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 0x5d8);
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
    if (bVar1) {
      if (*(longlong **)(param_1 + 0x6f8) != (longlong *)0x0) {
        uVar2 = (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x858))();
        lVar4 = FUN_14309b5c0(*(undefined8 *)(param_1 + 0x6f8),uVar2);
        if (lVar4 != 0) {
          lVar5 = FUN_1414193b0();
          if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if ((bVar1) && (*(char *)(lVar4 + 0x131) != '\0')) {
            puVar6 = (undefined4 *)FUN_141637b60(lVar4 + 0x90,local_res8);
            FUN_142717320(lVar3,*puVar6);
            return;
          }
        }
      }
      FUN_142714700(lVar3);
    }
  }
  return;
}



// FUNCTION 140f10a00 FUN_140f10a00 body=583 status=ok
// SIG undefined FUN_140f10a00(void)

void FUN_140f10a00(longlong param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 local_res8 [8];
  
  if (*(longlong *)(param_1 + 0x1c0) == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    return;
  }
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x1c8) + 0x48))();
  plVar6 = (longlong *)0x0;
  plVar5 = plVar6;
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    plVar5 = *(longlong **)(param_1 + 0x1c8);
  }
  cVar2 = (**(code **)(*plVar5 + 0x50))();
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    plVar6 = *(longlong **)(param_1 + 0x1c8);
  }
  cVar3 = (**(code **)(*plVar6 + 0x40))(plVar6);
  if (*(char *)(param_1 + 0x216) != '\0') {
    if (*(char *)(param_1 + 0x1e0) == '\x05') {
      return;
    }
    if (*(char *)(param_1 + 0x1e0) == '\x03') {
      puVar4 = (undefined8 *)FName::FName(local_res8,L"Buddy_Revive_Stop",1);
      FUN_142f0ad20(param_1,*puVar4);
    }
    *(undefined1 *)(param_1 + 0x1e0) = 5;
    goto LAB_140f10c26;
  }
  if (cVar1 == '\x03') {
    cVar1 = *(char *)(param_1 + 0x1e0);
    if (cVar3 == '\0') {
      if (cVar1 == '\x04') {
        return;
      }
      if (cVar1 == '\x03') {
        puVar4 = (undefined8 *)FName::FName(local_res8,L"Buddy_Revive_Stop",1);
        FUN_142f0ad20(param_1,*puVar4);
      }
      *(undefined1 *)(param_1 + 0x1e0) = 4;
      goto LAB_140f10c26;
    }
  }
  else {
    if (cVar1 != '\0') {
      if (cVar2 == '\0') {
        if (*(char *)(param_1 + 0x1e0) == '\x02') {
          return;
        }
        if (*(char *)(param_1 + 0x1e0) == '\x03') {
          puVar4 = (undefined8 *)FName::FName(local_res8,L"Buddy_Revive_Stop",1);
          FUN_142f0ad20(param_1,*puVar4);
        }
        *(undefined1 *)(param_1 + 0x1e0) = 2;
      }
      else {
        if (cVar2 != '\x01') {
          return;
        }
        if (*(char *)(param_1 + 0x1e0) == '\x03') {
          return;
        }
        *(undefined1 *)(param_1 + 0x1e0) = 3;
        puVar4 = (undefined8 *)FName::FName(local_res8,L"Buddy_Revive_Start",1);
        FUN_142f0ad20(param_1,*puVar4);
      }
      goto LAB_140f10c26;
    }
    cVar1 = *(char *)(param_1 + 0x1e0);
    if (cVar3 == '\0') {
      if (cVar1 == '\x04') {
        *(undefined1 *)(param_1 + 0x1e0) = 1;
      }
      else {
        if (cVar1 == '\0') {
          return;
        }
        if (cVar1 == '\x03') {
          puVar4 = (undefined8 *)FName::FName(local_res8,L"Buddy_Revive_Success",1);
          FUN_142f0ad20(param_1,*puVar4);
        }
        *(undefined1 *)(param_1 + 0x1e0) = 0;
      }
      goto LAB_140f10c26;
    }
  }
  if (cVar1 == '\x06') {
    return;
  }
  if (cVar1 == '\x03') {
    puVar4 = (undefined8 *)FName::FName(local_res8,L"Buddy_Revive_Stop",1);
    FUN_142f0ad20(param_1,*puVar4);
  }
  *(undefined1 *)(param_1 + 0x1e0) = 6;
LAB_140f10c26:
  if (*(char *)(param_1 + 0x1e1) == '\0') {
    FUN_140f06330(param_1);
  }
  return;
}



// FUNCTION 140f10c50 FUN_140f10c50 body=778 status=ok
// SIG undefined FUN_140f10c50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f10c50(longlong param_1)

{
  float *pfVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  float *pfVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98 [16];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68 [16];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x180);
  if (cVar2 == '\0') {
    return;
  }
  plVar3 = (longlong *)FWeakObjectPtr::Get();
  local_a0 = 0;
  pfVar1 = (float *)(param_1 + 0x230);
  puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x428))(plVar3,local_98,0);
  lVar7 = param_1 + 0x188;
  *(undefined8 *)pfVar1 = *puVar4;
  *(undefined4 *)(param_1 + 0x238) = *(undefined4 *)(puVar4 + 1);
  local_a8 = 0;
  cVar2 = FWeakObjectPtr::IsValid(lVar7);
  if ((cVar2 != '\0') && (lVar5 = FWeakObjectPtr::Get(lVar7), *(longlong *)(lVar5 + 0x2b8) != 0)) {
    lVar5 = FWeakObjectPtr::Get(lVar7);
    cVar2 = FUN_142f15520(*(undefined8 *)(lVar5 + 0x2b8),pfVar1,&local_a8,
                          *(char *)(param_1 + 0x23d) == '\0');
    if (cVar2 != '\0') {
      fVar10 = local_a8._4_4_;
      if ((*(char *)(param_1 + 0x23e) == '\0') ||
         (cVar2 = FWeakObjectPtr::IsValid(lVar7), cVar2 == '\0')) goto LAB_140f10da4;
      uVar6 = FWeakObjectPtr::Get(lVar7);
      FUN_142eb8d60(uVar6,&local_a0);
      uVar6 = FWeakObjectPtr::Get(lVar7);
      FUN_142eb83c0(uVar6,local_98);
      if ((0.0 <= fVar10) &&
         (fVar10 < *(float *)(param_1 + 0x240) || fVar10 == *(float *)(param_1 + 0x240)))
      goto LAB_140f10da4;
    }
  }
  local_a8 = 0x459c400000000000;
LAB_140f10da4:
  cVar2 = FWeakObjectPtr::IsValid(lVar7);
  if (cVar2 != '\0') {
    uVar6 = FWeakObjectPtr::Get(lVar7);
    lVar7 = FUN_140eccc40(uVar6);
    if ((lVar7 != 0) && (*(longlong *)(lVar7 + 0x528) != 0)) {
      pfVar8 = (float *)FUN_1426e1ca0(*(longlong *)(lVar7 + 0x528),local_98);
      fVar10 = pfVar8[2] - *(float *)(param_1 + 0x238);
      fVar13 = pfVar8[1] - *(float *)(param_1 + 0x234);
      *(float *)(param_1 + 0x1fc) =
           SQRT(fVar13 * fVar13 + (*pfVar8 - *pfVar1) * (*pfVar8 - *pfVar1) + fVar10 * fVar10);
    }
  }
  local_88 = *(undefined4 *)(param_1 + 0x200);
  uStack_84 = *(undefined4 *)(param_1 + 0x204);
  uStack_80 = *(undefined4 *)(param_1 + 0x208);
  uStack_7c = *(undefined4 *)(param_1 + 0x20c);
  local_68 = *(undefined1 (*) [16])(param_1 + 0x220);
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 400);
  if ((cVar2 != '\0') && (1e-08 < *(float *)(param_1 + 0x1fc))) {
    fVar10 = *(float *)(param_1 + 0x224);
    uVar6 = FWeakObjectPtr::Get(param_1 + 400);
    fVar13 = *(float *)(param_1 + 0x220);
    uVar9 = FWeakObjectPtr::Get(param_1 + 400);
    fVar11 = (float)UCurveFloat::GetFloatValue(uVar6,*(undefined4 *)(param_1 + 0x1fc));
    fVar12 = (float)UCurveFloat::GetFloatValue(uVar9,*(undefined4 *)(param_1 + 0x1fc));
    local_68._4_4_ = fVar11 * fVar10;
    local_68._0_4_ = fVar12 * fVar13;
    local_68._8_4_ = 0x3f800000;
    local_68._12_4_ = 0;
  }
  local_78 = local_a8;
  uStack_70 = 0;
  FUN_14208e4e0(param_1,&local_88);
  return;
}



// FUNCTION 140f10f60 FUN_140f10f60 body=1254 status=ok
// SIG undefined FUN_140f10f60(void)

void FUN_140f10f60(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  longlong local_d8 [9];
  undefined8 local_90;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_70;
  undefined8 local_68;
  undefined2 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined1 local_48 [24];
  undefined1 local_30;
  undefined8 local_28;
  undefined2 local_20;
  
  if ((((param_2 != 0) && (*(longlong *)(param_1 + 0x1f8) != 0)) &&
      (*(longlong *)(param_1 + 0x200) != 0)) &&
     ((*(longlong *)(param_1 + 0x208) != 0 && (*(longlong *)(param_1 + 0x210) != 0)))) {
    cVar4 = FUN_142dd3d20(param_2);
    if ((cVar4 == '\0') || (*(char *)(param_1 + 0x220) == '\x02')) {
      local_d8[5] = 4;
      local_d8[4] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_d8 + 4,0);
      FGenericPlatformString::Memcpy(local_d8[4],&DAT_1445ff288,8);
      FUN_142088cf0(*(undefined8 *)(param_1 + 0x1f8),local_d8 + 4);
      if (local_d8[4] != 0) {
        FMemory::Free();
      }
      local_d8[6] = 0;
      local_d8[7] = 4;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_d8 + 6,0);
      FGenericPlatformString::Memcpy(local_d8[6],&DAT_1445ff298,8);
      FUN_142088cf0(*(undefined8 *)(param_1 + 0x208),local_d8 + 6);
      lVar10 = local_d8[6];
    }
    else {
      local_d8[1] = 3;
      local_d8[0] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_d8,0);
      FGenericPlatformString::Memcpy(local_d8[0],&DAT_1445fde74,6);
      FUN_142088910(*(undefined8 *)(param_1 + 0x1f8),local_d8);
      if (local_d8[0] != 0) {
        FMemory::Free();
      }
      local_d8[2] = 0;
      local_d8[3] = 3;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_d8 + 2,0);
      FGenericPlatformString::Memcpy(local_d8[2],&DAT_1445ff280,6);
      FUN_142088910(*(undefined8 *)(param_1 + 0x208),local_d8 + 2);
      lVar10 = local_d8[2];
    }
    iVar11 = 0;
    if (lVar10 != 0) {
      FMemory::Free();
    }
    local_58 = 0;
    local_50 = 0;
    uVar6 = FUN_1404b03b0();
    FText::FText(local_48,uVar6);
    lVar10 = (longlong)(int)local_50;
    local_28 = 0;
    local_20 = 1;
    local_30 = 1;
    iVar5 = (int)local_50 + 1;
    if (local_50._4_4_ < iVar5) {
      uVar9 = local_50 & 0xffffffff;
      local_50._0_4_ = iVar5;
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_58,uVar9);
      iVar5 = (int)local_50;
    }
    local_50._0_4_ = iVar5;
    *(undefined8 *)(local_58 + lVar10 * 8) = DAT_146872008;
    plVar8 = (longlong *)(*(longlong *)(param_1 + 0x200) + 0x308);
    (**(code **)(*plVar8 + 0x10))(plVar8,0,param_2);
    plVar8 = (longlong *)(*(longlong *)(param_1 + 0x200) + 0x308);
    (**(code **)(*plVar8 + 0x20))(plVar8,&local_58,0);
    local_50._0_4_ = 0;
    iVar5 = 0;
    if (local_50._4_4_ != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(&local_58,0);
      iVar5 = (int)local_50;
    }
    local_50 = CONCAT44(local_50._4_4_,iVar5 + 1);
    if (local_50._4_4_ < iVar5 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_58,iVar5);
    }
    *(undefined8 *)(local_58 + (longlong)iVar5 * 8) = DAT_146872000;
    plVar8 = (longlong *)(*(longlong *)(param_1 + 0x210) + 0x308);
    (**(code **)(*plVar8 + 0x10))(plVar8,0,param_2);
    plVar8 = (longlong *)(*(longlong *)(param_1 + 0x210) + 0x308);
    (**(code **)(*plVar8 + 0x20))(plVar8,&local_58,0);
    if ((*(longlong *)(param_1 + 0x1b0) != 0) && (iVar5 = FUN_142eb7440(), 0 < iVar5)) {
      do {
        lVar10 = FUN_142eb6a30(*(undefined8 *)(param_1 + 0x1b0),iVar11);
        if (lVar10 != 0) {
          lVar7 = FUN_14132e850();
          if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (((bVar3) && (*(longlong *)(lVar10 + 800) != 0)) &&
             (*(longlong *)(lVar10 + 0x338) != 0)) {
            local_d8[8] = 0;
            local_90 = 0;
            uVar6 = FUN_1404b03b0();
            FText::FText(local_88,uVar6);
            lVar7 = (longlong)(int)local_90;
            local_68 = 0;
            local_60 = 1;
            local_70 = 1;
            iVar5 = (int)local_90 + 1;
            if (local_90._4_4_ < iVar5) {
              uVar9 = local_90 & 0xffffffff;
              local_90._0_4_ = iVar5;
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_d8 + 8,uVar9);
              iVar5 = (int)local_90;
            }
            local_90._0_4_ = iVar5;
            *(undefined8 *)(local_d8[8] + lVar7 * 8) = DAT_146b3e2a0;
            plVar8 = (longlong *)(*(longlong *)(lVar10 + 800) + 0x308);
            (**(code **)(*plVar8 + 0x10))(plVar8,0,param_2);
            plVar8 = (longlong *)(*(longlong *)(lVar10 + 800) + 0x308);
            (**(code **)(*plVar8 + 0x20))(plVar8,local_d8 + 8,0);
            local_90._0_4_ = 0;
            iVar5 = 0;
            if (local_90._4_4_ != 0) {
              TArray<void_*,FDefaultAllocator>::ResizeTo(local_d8 + 8,0);
              iVar5 = (int)local_90;
            }
            local_90 = CONCAT44(local_90._4_4_,iVar5 + 1);
            if (local_90._4_4_ < iVar5 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_d8 + 8,iVar5);
            }
            *(undefined8 *)(local_d8[8] + (longlong)iVar5 * 8) = DAT_146871fc8;
            plVar8 = (longlong *)(*(longlong *)(lVar10 + 0x338) + 0x308);
            (**(code **)(*plVar8 + 0x10))(plVar8,0,param_2);
            plVar8 = (longlong *)(*(longlong *)(lVar10 + 0x338) + 0x308);
            (**(code **)(*plVar8 + 0x20))(plVar8,local_d8 + 8,0);
            plVar8 = local_80;
            if (local_80 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_80 + 1;
              lVar10 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar10 == 1) {
                (**(code **)*local_80)(local_80);
                LOCK();
                piVar2 = (int *)((longlong)plVar8 + 0xc);
                iVar5 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar5 == 1) {
                  (**(code **)(*plVar8 + 8))(plVar8,1);
                }
              }
            }
            if (local_d8[8] != 0) {
              FMemory::Free();
            }
          }
        }
        iVar11 = iVar11 + 1;
        iVar5 = FUN_142eb7440(*(undefined8 *)(param_1 + 0x1b0));
      } while (iVar11 < iVar5);
    }
    UE4Tuple_Private::
    TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>::
    ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>
              (&local_58);
  }
  return;
}



// FUNCTION 140f11450 FUN_140f11450 body=661 status=ok
// SIG undefined FUN_140f11450(void)

void FUN_140f11450(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  float fVar9;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  if (*(char *)(param_1 + 0x215) == '\0') {
    return;
  }
  lVar8 = *(longlong *)(param_1 + 0x170);
  if (lVar8 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x360) != 0) {
    if (*(longlong *)(param_1 + 0x368) != 0) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x368) + 8);
      LOCK();
      iVar4 = *piVar1;
      if (iVar4 == 0) {
        *piVar1 = 0;
        iVar4 = 0;
      }
      UNLOCK();
      if (0 < iVar4) goto LAB_140f11510;
    }
    lVar8 = *(longlong *)(param_1 + 0x170);
  }
  uVar5 = FUN_142085870(lVar8,local_48,L"petDeathTimer");
  FUN_142ede260(param_1 + 0x358,uVar5);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_40 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
LAB_140f11510:
  if ((*(longlong *)(param_1 + 0x360) != 0) && (*(longlong *)(param_1 + 0x368) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x368) + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (0 < iVar4) {
      cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x21c);
      if ((cVar3 == '\0') && (lVar8 = *(longlong *)(param_1 + 0x38), lVar8 != 0)) {
        lVar6 = AGImpulseWindProjectile::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((bVar2) && (plVar7 = (longlong *)FUN_140eccd20(lVar8), plVar7 != (longlong *)0x0)) {
          uVar5 = FUN_1412e9ee0();
          uVar5 = (**(code **)(*plVar7 + 0x628))(plVar7,uVar5);
          FWeakObjectPtr::operator=(param_1 + 0x21c,uVar5);
          *(undefined4 *)(param_1 + 0x218) = 0xbf800000;
        }
      }
      cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x21c);
      if (cVar3 != '\0') {
        uVar5 = FWeakObjectPtr::Get(param_1 + 0x21c);
        fVar9 = (float)FUN_140e248b0(uVar5);
        if (1e-08 < ABS(*(float *)(param_1 + 0x218) - fVar9)) {
          if (((0.0 <= fVar9) && (1e-08 < ABS(fVar9))) ||
             (ABS(*(float *)(param_1 + 0x218)) <= 1e-08)) {
            *(float *)(param_1 + 0x218) = fVar9;
            FUN_140ee73c0(param_1,local_38);
            UMistDebugEntityScreen::InspectEntity(param_1 + 0x358,local_38,1,0);
            if (local_30 != (longlong *)0x0) {
              LOCK();
              plVar7 = local_30 + 1;
              lVar8 = *plVar7;
              *(int *)plVar7 = (int)*plVar7 + -1;
              UNLOCK();
              if ((int)lVar8 == 1) {
                (**(code **)*local_30)(local_30);
                LOCK();
                piVar1 = (int *)((longlong)local_30 + 0xc);
                iVar4 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar4 == 1) {
                  (**(code **)(*local_30 + 8))(local_30,1);
                }
              }
            }
          }
          else {
            *(undefined4 *)(param_1 + 0x218) = 0;
            uVar5 = FUN_1404b03b0();
            UMistDebugEntityScreen::InspectEntity(param_1 + 0x358,uVar5,1,0);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140f116f0 FUN_140f116f0 body=102 status=ok
// SIG undefined FUN_140f116f0(void)

void FUN_140f116f0(longlong param_1)

{
  longlong lVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  if (((*(char *)(param_1 + 0x7b0) != '\0') && (*(longlong *)(param_1 + 2000) != 0)) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 2000) + 0x528), lVar1 != 0)) {
    FUN_1426e1d20(lVar1,&local_28);
    local_18 = local_28;
    local_10 = local_20;
    FUN_142399b90(param_1,&local_18,1,0,0);
  }
  return;
}



// FUNCTION 140f11760 FUN_140f11760 body=128 status=ok
// SIG undefined FUN_140f11760(void)

void FUN_140f11760(undefined8 param_1,float param_2,longlong *param_3,longlong param_4)

{
  char cVar1;
  longlong lVar2;
  
  if (param_3 != (longlong *)0x0) {
    cVar1 = FUN_142088620(param_3);
    if ((cVar1 == '\0') && (0.0 < param_2)) {
      (**(code **)(*param_3 + 0x278))(param_3,1);
    }
    if (param_4 != 0) {
      lVar2 = FWeakObjectPtr::Get(param_3 + 0x37);
      if (param_4 != lVar2) {
        FUN_141017dd0(param_3,param_4);
      }
    }
    FUN_14101d3b0(param_3,1,param_2);
  }
  return;
}



// FUNCTION 140f117e0 FUN_140f117e0 body=162 status=ok
// SIG undefined FUN_140f117e0(void)

void FUN_140f117e0(longlong param_1)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 0x5d8);
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
    if (bVar1) {
      iVar2 = FUN_140e80db0(lVar3 + 0x1b10);
      *(bool *)(param_1 + 0x710) = 0 < iVar2;
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x710) = 0;
  return;
}



// FUNCTION 140f11890 FUN_140f11890 body=1603 status=ok
// SIG undefined FUN_140f11890(void)

void FUN_140f11890(longlong param_1)

{
  ulonglong *puVar1;
  int iVar2;
  int *piVar3;
  wchar_t *pwVar4;
  char cVar5;
  undefined1 uVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  undefined8 uVar11;
  int *piVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  wchar_t *pwVar16;
  bool bVar17;
  ulonglong local_res8;
  longlong local_res10;
  undefined8 local_48;
  undefined8 local_40;
  
  pwVar16 = (wchar_t *)0x0;
  if (*(longlong *)(param_1 + 0x710) != 0) {
    pwVar7 = _guard_xfg_dispatch_icall_nop(L"&UGFxCrosshairWidget::OnZoomed",L"::");
    pwVar10 = pwVar16;
    while (pwVar4 = pwVar7, pwVar4 != (wchar_t *)0x0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
      pwVar10 = pwVar4;
    }
    FName::FName(&local_res8,pwVar10 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove
              (*(longlong *)(param_1 + 0x710) + 0x250,param_1,local_res8);
    pwVar7 = _guard_xfg_dispatch_icall_nop(L"&UGFxCrosshairWidget::OnNotZoomed",L"::");
    pwVar10 = pwVar16;
    while (pwVar4 = pwVar7, pwVar4 != (wchar_t *)0x0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
      pwVar10 = pwVar4;
    }
    FName::FName(&local_res8,pwVar10 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove
              (*(longlong *)(param_1 + 0x710) + 0x280,param_1,local_res8);
    *(undefined8 *)(param_1 + 0x710) = 0;
  }
  if (((*(longlong *)(param_1 + 0x728) != 0) && (*(longlong *)(param_1 + 0x730) != 0)) &&
     (*(longlong *)(param_1 + 0x6f8) != 0)) {
    puVar1 = (ulonglong *)(param_1 + 0x64f);
    if (&local_res8 != puVar1) {
      *(undefined2 *)puVar1 = 0x100;
    }
    lVar8 = FUN_14307d8d0(*(longlong *)(param_1 + 0x6f8),
                          *(undefined1 *)(*(longlong *)(param_1 + 0x6f8) + 0x690));
    *(longlong *)(param_1 + 0x710) = lVar8;
    if (lVar8 != 0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(L"&UGFxCrosshairWidget::OnZoomed",L"::");
      pwVar10 = pwVar16;
      while (pwVar4 = pwVar7, pwVar4 != (wchar_t *)0x0) {
        pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
        pwVar10 = pwVar4;
      }
      FName::FName(&local_res10,pwVar10 + 2,1);
      lVar9 = local_res10;
      lVar8 = *(longlong *)(param_1 + 0x710);
      plVar13 = (longlong *)(lVar8 + 0x250);
      FWeakObjectPtr::operator=(&local_48,0);
      local_40 = 0;
      FWeakObjectPtr::operator=(&local_48,param_1);
      local_40 = lVar9;
      local_res8 = 0;
      if ((lVar9 != 0) && (lVar9 = FWeakObjectPtr::Get(&local_48), lVar9 != 0)) {
        UObject::FindFunction(lVar9,local_40);
      }
      piVar3 = (int *)*plVar13;
      iVar2 = *(int *)(lVar8 + 600);
      for (piVar12 = piVar3; piVar12 != piVar3 + (longlong)iVar2 * 4; piVar12 = piVar12 + 4) {
        if (((*piVar12 == (int)local_48) &&
            (local_48._4_4_ = (int)((ulonglong)local_48 >> 0x20),
            bVar17 = piVar12[1] == local_48._4_4_, bVar17)) ||
           ((cVar5 = FWeakObjectPtr::IsValid(piVar12), cVar5 == '\0' &&
            (cVar5 = FWeakObjectPtr::IsValid(&local_48), cVar5 == '\0')))) {
          bVar17 = true;
        }
        else {
          bVar17 = false;
        }
        if ((bVar17) && (*(longlong *)(piVar12 + 2) == local_40)) {
          bVar17 = true;
        }
        else {
          bVar17 = false;
        }
        if (bVar17) {
          if ((int)((longlong)piVar12 - (longlong)piVar3 >> 4) != -1) goto LAB_140f11b3c;
          break;
        }
      }
      iVar2 = *(int *)(lVar8 + 600);
      lVar9 = (longlong)iVar2;
      *(int *)(lVar8 + 600) = iVar2 + 1;
      if (*(int *)(lVar8 + 0x25c) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar13,iVar2);
      }
      lVar8 = *plVar13;
      *(int *)(lVar8 + lVar9 * 0x10) = (int)local_48;
      *(int *)(lVar8 + 4 + lVar9 * 0x10) = local_48._4_4_;
      *(longlong *)(lVar8 + 8 + lVar9 * 0x10) = local_40;
LAB_140f11b3c:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar13);
      pwVar10 = _guard_xfg_dispatch_icall_nop(L"&UGFxCrosshairWidget::OnNotZoomed",L"::");
      while (pwVar7 = pwVar10, pwVar7 != (wchar_t *)0x0) {
        pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar7 + 1,L"::");
        pwVar16 = pwVar7;
      }
      FName::FName(&local_res10,pwVar16 + 2,1);
      lVar8 = *(longlong *)(param_1 + 0x710);
      plVar13 = (longlong *)(lVar8 + 0x280);
      FWeakObjectPtr::operator=(&local_48,0);
      local_40 = 0;
      FWeakObjectPtr::operator=(&local_48,param_1);
      local_40 = local_res10;
      local_res8 = 0;
      if ((local_res10 != 0) && (lVar9 = FWeakObjectPtr::Get(&local_48), lVar9 != 0)) {
        UObject::FindFunction(lVar9,local_40);
      }
      piVar3 = (int *)*plVar13;
      iVar2 = *(int *)(lVar8 + 0x288);
      for (piVar12 = piVar3; piVar12 != piVar3 + (longlong)iVar2 * 4; piVar12 = piVar12 + 4) {
        if (((*piVar12 == (int)local_48) &&
            (local_48._4_4_ = (int)((ulonglong)local_48 >> 0x20),
            bVar17 = piVar12[1] == local_48._4_4_, bVar17)) ||
           ((cVar5 = FWeakObjectPtr::IsValid(piVar12), cVar5 == '\0' &&
            (cVar5 = FWeakObjectPtr::IsValid(&local_48), cVar5 == '\0')))) {
          bVar17 = true;
        }
        else {
          bVar17 = false;
        }
        if ((bVar17) && (*(longlong *)(piVar12 + 2) == local_40)) {
          bVar17 = true;
        }
        else {
          bVar17 = false;
        }
        if (bVar17) {
          if ((int)((longlong)piVar12 - (longlong)piVar3 >> 4) != -1) goto LAB_140f11c8c;
          break;
        }
      }
      iVar2 = *(int *)(lVar8 + 0x288);
      lVar9 = (longlong)iVar2;
      *(int *)(lVar8 + 0x288) = iVar2 + 1;
      if (*(int *)(lVar8 + 0x28c) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar13,iVar2);
      }
      lVar8 = *plVar13;
      *(int *)(lVar8 + lVar9 * 0x10) = (int)local_48;
      *(int *)(lVar8 + 4 + lVar9 * 0x10) = local_48._4_4_;
      *(longlong *)(lVar8 + 8 + lVar9 * 0x10) = local_40;
LAB_140f11c8c:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar13);
      uVar6 = FUN_14309f7c0(*(undefined8 *)(param_1 + 0x710));
      if (&local_res8 != puVar1) {
        *(undefined1 *)puVar1 = uVar6;
        *(undefined1 *)(param_1 + 0x650) = 1;
      }
    }
    lVar8 = (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x838))();
    if (lVar8 == 0) {
      lVar8 = *(longlong *)(param_1 + 0x638);
    }
    local_res8 = CONCAT44(local_res8._4_4_,0xffffffff);
    if (lVar8 != 0) {
      FUN_14170c210(&local_res8,lVar8);
    }
    puVar1 = (ulonglong *)(param_1 + 0x6d4);
    if (&local_res8 != puVar1) {
      if (*(char *)(param_1 + 0x6d8) != '\0') {
        *(undefined1 *)(param_1 + 0x6d8) = 0;
        FUN_1416f8340(*(undefined4 *)puVar1);
      }
      *(undefined4 *)puVar1 = 0xffffffff;
      uVar11 = FUN_1416f8720(local_res8 & 0xffffffff);
      FUN_14170c210(puVar1,uVar11);
      *(undefined1 *)(param_1 + 0x6d8) = 1;
    }
    FUN_1416f8340(local_res8 & 0xffffffff);
    if (*(char *)(param_1 + 0x640) == '\0') {
      if (lVar8 != 0) {
        FUN_140f080f0(param_1 + 0x660,lVar8 + 0x30);
      }
    }
    else if (*(char *)(param_1 + 0x640) == '\x01') {
      local_48 = 0;
      local_40 = 0x11;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      uVar11 = local_48;
      FGenericPlatformString::Memcpy(local_48,L"assaultCrosshair",0x22);
      AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x690));
      if ((*(char *)(param_1 + 0x688) != '\0') &&
         (*(undefined1 *)(param_1 + 0x688) = 0, *(longlong *)(param_1 + 0x678) != 0)) {
        FMemory::Free();
      }
      *(undefined8 *)(param_1 + 0x678) = uVar11;
      *(undefined4 *)(param_1 + 0x680) = (undefined4)local_40;
      *(undefined4 *)(param_1 + 0x684) = local_40._4_4_;
      *(undefined1 *)(param_1 + 0x688) = 1;
      ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x690));
    }
    if ((*(char *)(param_1 + 0x640) == '\x01') &&
       (lVar8 = FWeakObjectPtr::Get(param_1 + 0x5e0), lVar8 != 0)) {
      lVar9 = FUN_1413ffd50();
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8
           ) != lVar9 + 0x88)) {
        bVar17 = false;
      }
      else {
        bVar17 = true;
      }
      if (bVar17) {
        puVar14 = *(undefined8 **)(lVar8 + 0x2298);
        puVar15 = puVar14 + (longlong)*(int *)(lVar8 + 0x22a0) * 4;
        for (; puVar14 != puVar15; puVar14 = puVar14 + 4) {
          lVar9 = FUN_140a64690(lVar8,*puVar14);
          if (lVar9 != 0) {
            iVar2 = *(int *)(param_1 + 0x708);
            *(int *)(param_1 + 0x708) = iVar2 + 1;
            if (*(int *)(param_1 + 0x70c) < iVar2 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                        (param_1 + 0x700,iVar2);
            }
            *(longlong *)(*(longlong *)(param_1 + 0x700) + (longlong)iVar2 * 8) = lVar9;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140f11ee0 FUN_140f11ee0 body=88 status=ok
// SIG undefined FUN_140f11ee0(void)

bool FUN_140f11ee0(void)

{
  int *piVar1;
  char cVar2;
  DWORD DVar3;
  
  piVar1 = DAT_146872278;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    if (DVar3 != DAT_1468c21c0) {
      return piVar1[1] != 0;
    }
  }
  return *piVar1 != 0;
}



// FUNCTION 140f11f50 FUN_140f11f50 body=188 status=ok
// SIG undefined FUN_140f11f50(void)

void FUN_140f11f50(longlong param_1)

{
  longlong local_18;
  undefined8 uStack_10;
  
  if ((((*(longlong *)(param_1 + 0x760) != 0) && (*(longlong *)(param_1 + 0x640) != 0)) &&
      (1e-08 < *(float *)(param_1 + 0x76c))) &&
     (*(int *)(*(longlong *)(param_1 + 0x760) + 0x200) == 0)) {
    if (*(longlong *)(param_1 + 0x670) != 0) {
      local_18 = *(longlong *)(param_1 + 0x720);
      uStack_10 = *(undefined8 *)(param_1 + 0x728);
      FUN_142f0cf50(*(longlong *)(param_1 + 0x670),&local_18);
    }
    uStack_10 = 0xb;
    local_18 = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    FGenericPlatformString::Memcpy(local_18,L"onCooldown",0x16);
    FUN_142088910(*(undefined8 *)(param_1 + 0x640),&local_18);
    if (local_18 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140f12010 FUN_140f12010 body=224 status=ok
// SIG undefined FUN_140f12010(void)

void FUN_140f12010(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar6 = *(longlong *)(param_1 + 0x688);
  if (lVar6 != 0) {
    if (*(int *)(param_2 + 1) == 0) {
      puVar4 = &DAT_143f3eda8;
    }
    else {
      puVar4 = (undefined2 *)*param_2;
    }
    if (*(int *)(lVar6 + 0x208) == 0) {
      puVar3 = &DAT_143f3eda8;
    }
    else {
      puVar3 = *(undefined2 **)(lVar6 + 0x200);
    }
    iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar3,puVar4);
    if (iVar2 == 0) {
      FUN_140f08860(*(undefined8 *)(param_1 + 0x688),0);
      return;
    }
  }
  plVar5 = (longlong *)(param_1 + 0x670);
  lVar6 = 3;
  do {
    lVar1 = *plVar5;
    if (lVar1 != 0) {
      if (*(int *)(param_2 + 1) == 0) {
        puVar4 = &DAT_143f3eda8;
      }
      else {
        puVar4 = (undefined2 *)*param_2;
      }
      if (*(int *)(lVar1 + 0x208) == 0) {
        puVar3 = &DAT_143f3eda8;
      }
      else {
        puVar3 = *(undefined2 **)(lVar1 + 0x200);
      }
      iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar3,puVar4);
      if (iVar2 == 0) {
        FUN_140f08860(*plVar5,0);
      }
    }
    plVar5 = plVar5 + 1;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  return;
}



// FUNCTION 140f120f0 FUN_140f120f0 body=121 status=ok
// SIG undefined FUN_140f120f0(void)

void FUN_140f120f0(longlong *param_1)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FWeakObjectPtr::Get((longlong)param_1 + 0x60c);
  if (lVar3 != 0) {
    lVar4 = FUN_142937720();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      iVar2 = FUN_14046e5c0(lVar3);
      if (1 < iVar2) {
        (**(code **)(*param_1 + 0x580))(param_1,0);
      }
    }
  }
  return;
}



// FUNCTION 140f12170 FUN_140f12170 body=115 status=ok
// SIG undefined FUN_140f12170(void)

void FUN_140f12170(longlong param_1)

{
  longlong local_18 [2];
  
  if (*(longlong *)(param_1 + 0x640) != 0) {
    local_18[1] = 4;
    local_18[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Memcpy(local_18[0],&DAT_1445f6ff8,8);
    FUN_142088910(*(undefined8 *)(param_1 + 0x640),local_18);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  FUN_142edc1c0(param_1);
  return;
}



// FUNCTION 140f121f0 FUN_140f121f0 body=274 status=ok
// SIG undefined FUN_140f121f0(void)

void FUN_140f121f0(longlong param_1)

{
  byte bVar1;
  wchar_t *pwVar2;
  undefined8 uVar3;
  longlong local_18 [2];
  
  FUN_142edc290();
  if (*(longlong *)(param_1 + 0x6c0) != 0) {
    bVar1 = *(byte *)(param_1 + 0x71b);
    if (bVar1 < 2) {
      local_18[1] = 7;
      local_18[0] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      uVar3 = 0xe;
      pwVar2 = L"noMode";
    }
    else if (bVar1 == 2) {
      local_18[1] = 9;
      local_18[0] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      uVar3 = 0x12;
      pwVar2 = L"hasModes";
    }
    else if (bVar1 == 3) {
      local_18[1] = 0xb;
      local_18[0] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      uVar3 = 0x16;
      pwVar2 = L"covAmmoBar";
    }
    else {
      if (bVar1 != 4) {
        return;
      }
      local_18[1] = 0x12;
      local_18[0] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      uVar3 = 0x24;
      pwVar2 = L"eridianFabricator";
    }
    FGenericPlatformString::Memcpy(local_18[0],pwVar2,uVar3);
    FUN_142088910(*(undefined8 *)(param_1 + 0x6c0),local_18);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140f12310 FUN_140f12310 body=113 status=ok
// SIG undefined FUN_140f12310(void)

void FUN_140f12310(longlong param_1)

{
  longlong local_18 [2];
  
  FUN_142edc290();
  if (*(longlong *)(param_1 + 0x720) != 0) {
    local_18[1] = 4;
    local_18[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Memcpy(local_18[0],&DAT_1445f2cb8,8);
    FUN_142088910(*(undefined8 *)(param_1 + 0x720),local_18);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140f123e0 FUN_140f123e0 body=564 status=ok
// SIG undefined FUN_140f123e0(void)

void FUN_140f123e0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong local_e8 [2];
  undefined1 local_d8 [192];
  
  _guard_xfg_dispatch_icall_nop(local_d8,0,0xb8);
  lVar3 = FUN_140d647e0(local_d8);
  FText::operator=(param_1 + 0x660,lVar3);
  FText::operator=(param_1 + 0x678,lVar3 + 0x18);
  *(undefined1 *)(param_1 + 0x690) = *(undefined1 *)(lVar3 + 0x30);
  FText::operator=(param_1 + 0x698,lVar3 + 0x38);
  FText::operator=(param_1 + 0x6b0,lVar3 + 0x50);
  plVar1 = (longlong *)(lVar3 + 0x70);
  plVar2 = (longlong *)(param_1 + 0x6d0);
  *(undefined1 *)(param_1 + 0x6c8) = *(undefined1 *)(lVar3 + 0x68);
  if (plVar2 != plVar1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    *(undefined4 *)(param_1 + 0x6d8) = *(undefined4 *)(lVar3 + 0x78);
    *(undefined4 *)(param_1 + 0x6dc) = *(undefined4 *)(lVar3 + 0x7c);
    *(undefined8 *)(lVar3 + 0x78) = 0;
  }
  plVar1 = (longlong *)(lVar3 + 0x80);
  plVar2 = (longlong *)(param_1 + 0x6e0);
  if (plVar2 != plVar1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    *(undefined4 *)(param_1 + 0x6e8) = *(undefined4 *)(lVar3 + 0x88);
    *(undefined4 *)(param_1 + 0x6ec) = *(undefined4 *)(lVar3 + 0x8c);
    *(undefined8 *)(lVar3 + 0x88) = 0;
  }
  *(undefined1 *)(param_1 + 0x6f0) = *(undefined1 *)(lVar3 + 0x90);
  *(undefined1 *)(param_1 + 0x6f1) = *(undefined1 *)(lVar3 + 0x91);
  *(undefined1 *)(param_1 + 0x6f2) = *(undefined1 *)(lVar3 + 0x92);
  *(undefined4 *)(param_1 + 0x6f4) = *(undefined4 *)(lVar3 + 0x94);
  *(undefined4 *)(param_1 + 0x6f8) = *(undefined4 *)(lVar3 + 0x98);
  *(undefined4 *)(param_1 + 0x6fc) = *(undefined4 *)(lVar3 + 0x9c);
  *(undefined1 *)(param_1 + 0x700) = *(undefined1 *)(lVar3 + 0xa0);
  *(undefined1 *)(param_1 + 0x701) = *(undefined1 *)(lVar3 + 0xa1);
  *(undefined8 *)(param_1 + 0x708) = *(undefined8 *)(lVar3 + 0xa8);
  *(undefined1 *)(param_1 + 0x710) = *(undefined1 *)(lVar3 + 0xb0);
  *(undefined4 *)(param_1 + 0x714) = *(undefined4 *)(lVar3 + 0xb4);
  FUN_140d65f50(local_d8);
  if (*(int *)(param_1 + 0x658) == 2) {
    *(undefined4 *)(param_1 + 0x658) = 0;
    lVar3 = FUN_140eccbe0(param_1);
    if (lVar3 != 0) {
      FUN_140cc9500(lVar3,param_1);
    }
    *(undefined4 *)(param_1 + 0x718) = 0;
    if (*(longlong *)(param_1 + 0x730) != 0) {
      local_e8[0] = 0;
      local_e8[1] = 4;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_e8,0);
      FGenericPlatformString::Memcpy(local_e8[0],&DAT_1445f7998,8);
      FUN_142088910(*(undefined8 *)(param_1 + 0x730),local_e8);
      if (local_e8[0] != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140f12620 FUN_140f12620 body=678 status=ok
// SIG undefined FUN_140f12620(void)

void FUN_140f12620(longlong param_1,undefined8 *param_2)

{
  short sVar1;
  short sVar2;
  undefined2 *puVar3;
  short *psVar4;
  longlong lVar5;
  undefined2 *puVar6;
  longlong *plVar7;
  short *psVar8;
  undefined2 *local_28;
  undefined8 local_20;
  
  local_20 = 0xb;
  local_28 = (undefined2 *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  puVar3 = local_28;
  FGenericPlatformString::Memcpy(local_28,L"updateIcon",0x16);
  psVar8 = &DAT_143f3eda8;
  puVar6 = &DAT_143f3eda8;
  if ((int)local_20 != 0) {
    puVar6 = puVar3;
  }
  if (*(int *)(param_2 + 1) == 0) {
    psVar4 = &DAT_143f3eda8;
  }
  else {
    psVar4 = (short *)*param_2;
  }
  lVar5 = (longlong)puVar6 - (longlong)psVar4;
  do {
    sVar1 = *psVar4;
    sVar2 = *(short *)((longlong)psVar4 + lVar5);
    if (sVar1 != sVar2) break;
    psVar4 = psVar4 + 1;
  } while (sVar2 != 0);
  if (puVar3 != (undefined2 *)0x0) {
    FMemory::Free(puVar3);
  }
  if (sVar1 == sVar2) {
    if (*(longlong *)(param_1 + 0x760) != 0) {
      FUN_142088910(*(longlong *)(param_1 + 0x760),param_1 + 0x6e0);
    }
  }
  else {
    local_28 = (undefined2 *)0x0;
    local_20 = 0xd;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    puVar3 = local_28;
    FGenericPlatformString::Memcpy(local_28,L"updateHeader",0x1a);
    puVar6 = &DAT_143f3eda8;
    if ((int)local_20 != 0) {
      puVar6 = puVar3;
    }
    if (*(int *)(param_2 + 1) == 0) {
      psVar4 = &DAT_143f3eda8;
    }
    else {
      psVar4 = (short *)*param_2;
    }
    lVar5 = (longlong)puVar6 - (longlong)psVar4;
    do {
      sVar1 = *psVar4;
      sVar2 = *(short *)((longlong)psVar4 + lVar5);
      if (sVar1 != sVar2) break;
      psVar4 = psVar4 + 1;
    } while (sVar2 != 0);
    if (puVar3 != (undefined2 *)0x0) {
      FMemory::Free(puVar3);
    }
    if (sVar1 == sVar2) {
      plVar7 = *(longlong **)(param_1 + 0x740);
      if (plVar7 == (longlong *)0x0) {
        return;
      }
      param_1 = param_1 + 0x678;
    }
    else {
      local_28 = (undefined2 *)0x0;
      local_20 = 0xb;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
      puVar3 = local_28;
      FGenericPlatformString::Memcpy(local_28,L"updateBody",0x16);
      puVar6 = &DAT_143f3eda8;
      if ((int)local_20 != 0) {
        puVar6 = puVar3;
      }
      if (*(int *)(param_2 + 1) == 0) {
        psVar4 = &DAT_143f3eda8;
      }
      else {
        psVar4 = (short *)*param_2;
      }
      lVar5 = (longlong)puVar6 - (longlong)psVar4;
      do {
        sVar1 = *psVar4;
        sVar2 = *(short *)((longlong)psVar4 + lVar5);
        if (sVar1 != sVar2) break;
        psVar4 = psVar4 + 1;
      } while (sVar2 != 0);
      if (puVar3 != (undefined2 *)0x0) {
        FMemory::Free(puVar3);
      }
      if (sVar1 == sVar2) {
        plVar7 = *(longlong **)(param_1 + 0x748);
        if (plVar7 == (longlong *)0x0) {
          return;
        }
        param_1 = param_1 + 0x6b0;
      }
      else {
        local_28 = (undefined2 *)0x0;
        local_20 = 0xf;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
        puVar3 = local_28;
        FGenericPlatformString::Memcpy(local_28,L"updateProgress",0x1e);
        puVar6 = &DAT_143f3eda8;
        if ((int)local_20 != 0) {
          puVar6 = puVar3;
        }
        if (*(int *)(param_2 + 1) != 0) {
          psVar8 = (short *)*param_2;
        }
        lVar5 = (longlong)puVar6 - (longlong)psVar8;
        do {
          sVar1 = *psVar8;
          sVar2 = *(short *)((longlong)psVar8 + lVar5);
          if (sVar1 != sVar2) break;
          psVar8 = psVar8 + 1;
        } while (sVar2 != 0);
        if (puVar3 != (undefined2 *)0x0) {
          FMemory::Free(puVar3);
        }
        if (sVar1 != sVar2) {
          return;
        }
        plVar7 = *(longlong **)(param_1 + 0x758);
        if (plVar7 == (longlong *)0x0) {
          return;
        }
        if (*(char *)(param_1 + 0x700) == '\0') {
          return;
        }
        if (*(char *)(param_1 + 0x6f2) != '\0') {
          return;
        }
        param_1 = param_1 + 0x640;
      }
    }
    (**(code **)(*plVar7 + 0x2b0))(plVar7,param_1,1,0);
  }
  return;
}



// FUNCTION 140f128d0 thunk_FUN_140f036b0 body=5 status=ok
// SIG undefined thunk_FUN_140f036b0(void)

void thunk_FUN_140f036b0(longlong param_1)

{
  char cVar1;
  wchar_t *pwVar2;
  undefined8 uVar3;
  longlong alStack_18 [2];
  
  if ((*(char *)(param_1 + 0x6f0) == '\0') &&
     (*(undefined1 *)(param_1 + 0x6f0) = 1, 1 < *(int *)(param_1 + 0x6e8))) {
    alStack_18[1] = 0xb;
    *(undefined4 *)(param_1 + 0x718) = 0;
    alStack_18[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(alStack_18,0);
    uVar3 = 0x16;
    pwVar2 = L"updateIcon";
  }
  else {
    if (*(char *)(param_1 + 0x690) == '\0') {
      *(undefined1 *)(param_1 + 0x690) = 1;
      cVar1 = FText::IsEmpty(param_1 + 0x678);
      if (cVar1 == '\0') {
        alStack_18[1] = 0xd;
        *(undefined4 *)(param_1 + 0x718) = 0;
        alStack_18[0] = 0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(alStack_18,0);
        uVar3 = 0x1a;
        pwVar2 = L"updateHeader";
        goto LAB_140f037f7;
      }
    }
    if (*(char *)(param_1 + 0x6c8) == '\0') {
      *(undefined1 *)(param_1 + 0x6c8) = 1;
      cVar1 = FText::IsEmpty(param_1 + 0x6b0);
      if (cVar1 == '\0') {
        alStack_18[1] = 0xb;
        *(undefined4 *)(param_1 + 0x718) = 0;
        alStack_18[0] = 0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(alStack_18,0);
        uVar3 = 0x16;
        pwVar2 = L"updateBody";
        goto LAB_140f037f7;
      }
    }
    if (*(char *)(param_1 + 0x701) != '\0') {
      return;
    }
    *(undefined1 *)(param_1 + 0x701) = 1;
    if (*(char *)(param_1 + 0x700) == '\0') {
      return;
    }
    if (*(char *)(param_1 + 0x6f2) != '\0') {
      return;
    }
    alStack_18[1] = 0xf;
    *(undefined4 *)(param_1 + 0x718) = 0;
    alStack_18[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(alStack_18,0);
    uVar3 = 0x1e;
    pwVar2 = L"updateProgress";
  }
LAB_140f037f7:
  FGenericPlatformString::Memcpy(alStack_18[0],pwVar2,uVar3);
  FUN_142088910(*(undefined8 *)(param_1 + 0x738),alStack_18);
  if (alStack_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140f128e0 FUN_140f128e0 body=344 status=ok
// SIG undefined FUN_140f128e0(void)

void FUN_140f128e0(longlong param_1)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  longlong local_18 [2];
  
  *(int *)(param_1 + 0x6c4) = *(int *)(param_1 + 0x6c4) + -1;
  if ((*(int *)(param_1 + 0x6c4) < 1) && (0 < *(int *)(param_1 + 0x6b8))) {
    *(undefined4 *)(param_1 + 0x6c4) = 0;
    if (*(char *)(param_1 + 0x6c0) != '\x02') {
      FUN_140ee2540();
      return;
    }
    lVar6 = *(longlong *)(param_1 + 0x6b0);
    lVar3 = FUN_140ee5060(param_1,lVar6);
    if (lVar3 != 0) {
      FUN_140f09b90(lVar3,0);
      lVar6 = *(longlong *)(param_1 + 0x6b0);
    }
    bVar2 = false;
    if (*(char *)(lVar6 + 0xc) == '\0') {
      iVar5 = 2;
      plVar4 = (longlong *)(param_1 + 0x680);
      do {
        iVar1 = *(int *)(*(longlong *)(param_1 + 0x6b0) + 8);
        if ((iVar1 < 0) || (iVar5 <= iVar1)) break;
        if ((*plVar4 != 0) && (*(longlong *)(*plVar4 + 0x1d0) != 0)) {
          local_18[0] = 0;
          local_18[1] = 10;
          bVar2 = true;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
          FGenericPlatformString::Memcpy(local_18[0],L"slideDown",0x14);
          FUN_142088910(*plVar4);
          if (local_18[0] != 0) {
            FMemory::Free();
          }
          *(int *)(param_1 + 0x6c4) = *(int *)(param_1 + 0x6c4) + 1;
        }
        iVar5 = iVar5 + -1;
        plVar4 = plVar4 + -1;
      } while (0 < iVar5);
      if (bVar2) {
        *(undefined1 *)(param_1 + 0x6c0) = 3;
        return;
      }
    }
    FUN_140ee2540(param_1);
  }
  return;
}



// FUNCTION 140f12a40 FUN_140f12a40 body=81 status=ok
// SIG undefined FUN_140f12a40(void)

undefined8 FUN_140f12a40(undefined8 param_1,int *param_2)

{
  char cVar1;
  int local_res10;
  int local_res14;
  
  FWeakObjectPtr::operator=(&local_res10,param_1);
  if ((local_res10 == *param_2) && (local_res14 == param_2[1])) {
    return 0;
  }
  cVar1 = FWeakObjectPtr::IsValid(&local_res10);
  if ((cVar1 == '\0') && (cVar1 = FWeakObjectPtr::IsValid(param_2), cVar1 == '\0')) {
    return 0;
  }
  return 1;
}



// FUNCTION 140f12aa0 FUN_140f12aa0 body=209 status=ok
// SIG undefined FUN_140f12aa0(void)

undefined8 *
FUN_140f12aa0(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_res10 [8];
  
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_FUN_14461b568;
    FWeakObjectPtr::operator=(plVar3 + 1,param_3);
    plVar3[2] = param_4;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[4] = lVar4;
    *plVar3 = (longlong)&PTR_FUN_14461b5b0;
  }
  *param_2 = 0;
  if (plVar3 != (longlong *)0x0) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1,1);
    puVar5 = (undefined8 *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res10);
    iVar1 = (int)param_1[1];
    uVar2 = *puVar5;
    *(int *)(param_1 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar1);
    }
    *param_2 = uVar2;
    puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_1);
    *puVar5 = plVar3;
    *(undefined4 *)(puVar5 + 1) = 3;
  }
  return param_2;
}



// FUNCTION 140f12b80 FUN_140f12b80 body=209 status=ok
// SIG undefined FUN_140f12b80(void)

undefined8 *
FUN_140f12b80(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_res10 [8];
  
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_FUN_14461b5f8;
    FWeakObjectPtr::operator=(plVar3 + 1,param_3);
    plVar3[2] = param_4;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[4] = lVar4;
    *plVar3 = (longlong)&PTR_FUN_14461b640;
  }
  *param_2 = 0;
  if (plVar3 != (longlong *)0x0) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1,1);
    puVar5 = (undefined8 *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res10);
    iVar1 = (int)param_1[1];
    uVar2 = *puVar5;
    *(int *)(param_1 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar1);
    }
    *param_2 = uVar2;
    puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_1);
    *puVar5 = plVar3;
    *(undefined4 *)(puVar5 + 1) = 3;
  }
  return param_2;
}



// FUNCTION 140f12c60 FUN_140f12c60 body=986 status=ok
// SIG undefined FUN_140f12c60(void)

longlong FUN_140f12c60(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong *puVar11;
  longlong *plVar12;
  int iVar13;
  bool bVar14;
  ulonglong local_90;
  longlong *local_88;
  ulonglong local_80;
  longlong *local_78;
  longlong *local_70;
  undefined8 local_68;
  ulonglong local_60;
  longlong *plStack_58;
  ulonglong local_50;
  longlong *plStack_48;
  undefined8 local_40;
  
  uVar8 = 0;
  cVar7 = FUN_142091120(param_1,param_3);
  if (cVar7 == '\0') {
    if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_140f12d0f:
      puVar11 = &local_60;
      local_60 = 0;
      plStack_58 = (longlong *)0x0;
      bVar6 = false;
      bVar5 = true;
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
      LOCK();
      iVar13 = *piVar1;
      if (iVar13 == 0) {
        *piVar1 = 0;
        iVar13 = 0;
      }
      UNLOCK();
      if (iVar13 < 1) goto LAB_140f12d0f;
      local_88 = *(longlong **)(param_1 + 0x30);
      bVar6 = true;
      bVar5 = false;
      local_90 = 0;
      if (local_88 != (longlong *)0x0) {
        LOCK();
        uVar2 = *(uint *)(local_88 + 1);
        bVar14 = uVar2 == 0;
        if (bVar14) {
          *(uint *)(local_88 + 1) = 0;
        }
        else {
          uVar8 = (ulonglong)uVar2;
        }
        UNLOCK();
        while (!bVar14) {
          iVar13 = (int)uVar8;
          LOCK();
          bVar14 = iVar13 == (int)local_88[1];
          if (bVar14) {
            *(int *)(local_88 + 1) = iVar13 + 1;
          }
          UNLOCK();
          if (bVar14) {
            uVar8 = *(ulonglong *)(param_1 + 0x28);
            puVar11 = &local_90;
            local_90 = uVar8;
            goto LAB_140f12d24;
          }
          uVar8 = 0;
          LOCK();
          uVar2 = *(uint *)(local_88 + 1);
          bVar14 = uVar2 == 0;
          if (bVar14) {
            *(uint *)(local_88 + 1) = 0;
          }
          else {
            uVar8 = (ulonglong)uVar2;
          }
          UNLOCK();
        }
        local_88 = (longlong *)0x0;
      }
      uVar8 = 0;
      puVar11 = &local_90;
    }
LAB_140f12d24:
    local_80 = uVar8;
    plVar3 = (longlong *)puVar11[1];
    puVar11[1] = 0;
    plVar4 = plStack_58;
    local_78 = plVar3;
    *puVar11 = 0;
    if ((bVar5) && (plStack_58 != (longlong *)0x0)) {
      LOCK();
      plVar3 = plStack_58 + 1;
      lVar10 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plStack_58)(plStack_58);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar13 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          (**(code **)(*plStack_58 + 8))(plStack_58,1);
        }
      }
    }
    plVar3 = local_88;
    if ((bVar6) && (local_88 != (longlong *)0x0)) {
      LOCK();
      plVar4 = local_88 + 1;
      lVar10 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_88)(local_88);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar13 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          (**(code **)(*local_88 + 8))(local_88,1);
        }
      }
    }
    bVar6 = true;
    bVar5 = false;
    puVar11 = &local_80;
    uVar8 = local_80;
  }
  else {
    puVar11 = &local_50;
    local_50 = 0;
    plStack_48 = (longlong *)0x0;
    bVar6 = false;
    bVar5 = true;
  }
  plVar3 = (longlong *)puVar11[1];
  puVar11[1] = 0;
  plVar4 = plStack_48;
  *puVar11 = 0;
  if ((bVar5) && (plStack_48 != (longlong *)0x0)) {
    LOCK();
    plVar12 = plStack_48 + 1;
    lVar10 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plStack_48)(plStack_48);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*plStack_48 + 8))(plStack_48,1);
      }
    }
  }
  plVar4 = local_78;
  if ((bVar6) && (local_78 != (longlong *)0x0)) {
    LOCK();
    plVar12 = local_78 + 1;
    lVar10 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*local_78 + 8))(local_78,1);
      }
    }
  }
  if (uVar8 == 0) {
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar3 + 1;
      lVar10 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar13 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
    return 0;
  }
  if (param_4 != 0) {
    lVar9 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar10 = param_4;
    do {
      if (lVar10 == lVar9) goto LAB_140f12ead;
      lVar10 = *(longlong *)(lVar10 + 0x30);
    } while (lVar10 != 0);
  }
  param_4 = UReplicationGraphNode_GridSpatialization2D::GetPrivateStaticClass();
LAB_140f12ead:
  plVar4 = *(longlong **)(uVar8 + 0x80);
  local_40 = *(undefined8 *)(uVar8 + 0x78);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_70 = (longlong *)0x0;
  local_68 = 0;
  lVar10 = FUN_14202a0e0(local_40,param_4,param_1,param_2,param_3,6,&local_70);
  if (lVar10 != 0) {
    lVar9 = UReplicationGraphNode_GridSpatialization2D::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) goto LAB_140f12f3a;
  }
  lVar10 = 0;
LAB_140f12f3a:
  plVar12 = local_70;
  for (iVar13 = (int)local_68; iVar13 != 0; iVar13 = iVar13 + -1) {
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    plVar12 = plVar12 + 2;
  }
  if (local_70 != (longlong *)0x0) {
    FMemory::Free(local_70);
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar4 + 1;
    lVar9 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar3 + 1;
    lVar9 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return lVar10;
}



// FUNCTION 140f13040 FUN_140f13040 body=207 status=ok
// SIG undefined FUN_140f13040(void)

void FUN_140f13040(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong local_18 [2];
  
  plVar2 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar2 != (longlong *)0x0) {
    FUN_140f168d0(plVar2,param_2,param_3);
  }
  if (local_18 != param_1) {
    if (plVar2 == (longlong *)0x0) {
      if (((int)param_1[1] != 0) && (plVar1 = (longlong *)*param_1, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x28))(plVar1,0);
        if (*param_1 != 0) {
          lVar3 = FMemory::Realloc(*param_1,0,0);
          *param_1 = lVar3;
        }
        *(undefined4 *)(param_1 + 1) = 0;
      }
    }
    else {
      (**(code **)(*plVar2 + 0x30))(plVar2,param_1);
    }
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,0);
    lVar3 = FMemory::Realloc(plVar2,0,0);
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
  return;
}



// FUNCTION 140f13110 FUN_140f13110 body=666 status=ok
// SIG undefined FUN_140f13110(void)

longlong FUN_140f13110(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
                      undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  longlong local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  lVar7 = *(longlong *)(param_1 + 0x2c0);
  if (lVar7 == 0) {
    lVar7 = *(longlong *)(param_1 + 0x2b8);
  }
  bVar10 = *(char *)(param_1 + 0x4c1) == '\0';
  if (bVar10) {
    plVar5 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    lVar8 = 0;
  }
  else {
    plVar5 = (longlong *)FUN_140ad4c90(param_1,local_38);
    lVar8 = *plVar5;
  }
  plVar4 = (longlong *)plVar5[1];
  plVar5[1] = 0;
  *plVar5 = 0;
  plVar5 = plStack_40;
  if ((bVar10) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  if ((!bVar10) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar5 = local_30 + 1;
    lVar9 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  if (lVar8 == 0) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar7 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
    return 0;
  }
  if (param_3 != 0) {
    lVar6 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar9 = param_3;
    do {
      if (lVar9 == lVar6) goto LAB_140f13276;
      lVar9 = *(longlong *)(lVar9 + 0x30);
    } while (lVar9 != 0);
  }
  param_3 = UReplicationGraphNode_GridSpatialization2D::GetPrivateStaticClass();
LAB_140f13276:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar7 = FUN_14203b1b0(lVar8,param_3,param_2,lVar7,param_4,param_5);
  if (lVar7 != 0) {
    lVar8 = UReplicationGraphNode_GridSpatialization2D::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) goto LAB_140f132e9;
  }
  lVar7 = 0;
LAB_140f132e9:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
    LOCK();
    plVar5 = plVar4 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  return lVar7;
}



// FUNCTION 140f133b0 FUN_140f133b0 body=917 status=ok
// SIG undefined FUN_140f133b0(void)

longlong FUN_140f133b0(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
                      undefined8 param_5)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong *puVar13;
  bool bVar14;
  ulonglong local_80;
  longlong *local_78;
  ulonglong local_70;
  longlong *local_68;
  ulonglong local_60;
  longlong *plStack_58;
  ulonglong local_50;
  longlong *plStack_48;
  undefined8 local_40;
  
  uVar10 = 0;
  cVar8 = FUN_142091120();
  if (cVar8 == '\0') {
    if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_140f1345f:
      puVar13 = &local_60;
      local_60 = 0;
      plStack_58 = (longlong *)0x0;
      bVar7 = false;
      bVar6 = true;
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
      LOCK();
      iVar9 = *piVar1;
      if (iVar9 == 0) {
        *piVar1 = 0;
        iVar9 = 0;
      }
      UNLOCK();
      if (iVar9 < 1) goto LAB_140f1345f;
      local_78 = *(longlong **)(param_1 + 0x30);
      bVar7 = true;
      bVar6 = false;
      local_80 = 0;
      if (local_78 != (longlong *)0x0) {
        LOCK();
        uVar3 = *(uint *)(local_78 + 1);
        bVar14 = uVar3 == 0;
        if (bVar14) {
          *(uint *)(local_78 + 1) = 0;
        }
        else {
          uVar10 = (ulonglong)uVar3;
        }
        UNLOCK();
        while (!bVar14) {
          iVar9 = (int)uVar10;
          LOCK();
          bVar14 = iVar9 == (int)local_78[1];
          if (bVar14) {
            *(int *)(local_78 + 1) = iVar9 + 1;
          }
          UNLOCK();
          if (bVar14) {
            uVar10 = *(ulonglong *)(param_1 + 0x28);
            puVar13 = &local_80;
            local_80 = uVar10;
            goto LAB_140f13474;
          }
          uVar10 = 0;
          LOCK();
          uVar3 = *(uint *)(local_78 + 1);
          bVar14 = uVar3 == 0;
          if (bVar14) {
            *(uint *)(local_78 + 1) = 0;
          }
          else {
            uVar10 = (ulonglong)uVar3;
          }
          UNLOCK();
        }
        local_78 = (longlong *)0x0;
      }
      uVar10 = 0;
      puVar13 = &local_80;
    }
LAB_140f13474:
    local_70 = uVar10;
    plVar4 = (longlong *)puVar13[1];
    puVar13[1] = 0;
    local_68 = plVar4;
    *puVar13 = 0;
    plVar4 = plStack_58;
    if ((bVar6) && (plStack_58 != (longlong *)0x0)) {
      LOCK();
      plVar5 = plStack_58 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plStack_58)(plStack_58);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plStack_58 + 8))(plStack_58,1);
        }
      }
    }
    plVar4 = local_78;
    if ((bVar7) && (local_78 != (longlong *)0x0)) {
      LOCK();
      plVar5 = local_78 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_78 + 8))(local_78,1);
        }
      }
    }
    bVar7 = true;
    bVar6 = false;
    puVar13 = &local_70;
    uVar10 = local_70;
  }
  else {
    puVar13 = &local_50;
    local_50 = 0;
    plStack_48 = (longlong *)0x0;
    bVar7 = false;
    bVar6 = true;
  }
  plVar4 = (longlong *)puVar13[1];
  puVar13[1] = 0;
  *puVar13 = 0;
  plVar5 = plStack_48;
  if ((bVar6) && (plStack_48 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_48 + 1;
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plStack_48)(plStack_48);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plStack_48 + 8))(plStack_48,1);
      }
    }
  }
  plVar5 = local_68;
  if ((bVar7) && (local_68 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_68 + 1;
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_68 + 8))(local_68,1);
      }
    }
  }
  if (uVar10 == 0) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
    return 0;
  }
  if (param_3 != 0) {
    lVar11 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar12 = param_3;
    do {
      if (lVar12 == lVar11) goto LAB_140f135fd;
      lVar12 = *(longlong *)(lVar12 + 0x30);
    } while (lVar12 != 0);
  }
  param_3 = FUN_141352d10();
LAB_140f135fd:
  plVar5 = *(longlong **)(uVar10 + 0x80);
  local_40 = *(undefined8 *)(uVar10 + 0x78);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  lVar12 = FUN_14203b1b0(local_40,param_3,param_2,param_1,param_4,param_5);
  if (lVar12 != 0) {
    lVar11 = FUN_141352d10();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_140f1367a;
  }
  lVar12 = 0;
LAB_140f1367a:
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar11 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return lVar12;
}



// FUNCTION 140f13750 FUN_140f13750 body=666 status=ok
// SIG undefined FUN_140f13750(void)

longlong FUN_140f13750(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
                      undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  longlong local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  lVar7 = *(longlong *)(param_1 + 0x2c0);
  if (lVar7 == 0) {
    lVar7 = *(longlong *)(param_1 + 0x2b8);
  }
  bVar10 = *(char *)(param_1 + 0x4c1) == '\0';
  if (bVar10) {
    plVar5 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    lVar8 = 0;
  }
  else {
    plVar5 = (longlong *)FUN_140ad4c90(param_1,local_38);
    lVar8 = *plVar5;
  }
  plVar4 = (longlong *)plVar5[1];
  plVar5[1] = 0;
  *plVar5 = 0;
  plVar5 = plStack_40;
  if ((bVar10) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  if ((!bVar10) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar5 = local_30 + 1;
    lVar9 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  if (lVar8 == 0) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar7 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
    return 0;
  }
  if (param_3 != 0) {
    lVar6 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar9 = param_3;
    do {
      if (lVar9 == lVar6) goto LAB_140f138b6;
      lVar9 = *(longlong *)(lVar9 + 0x30);
    } while (lVar9 != 0);
  }
  param_3 = FUN_1413531a0();
LAB_140f138b6:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar7 = FUN_14203b1b0(lVar8,param_3,param_2,lVar7,param_4,param_5);
  if (lVar7 != 0) {
    lVar8 = FUN_1413531a0();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) goto LAB_140f13929;
  }
  lVar7 = 0;
LAB_140f13929:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
    LOCK();
    plVar5 = plVar4 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  return lVar7;
}



// FUNCTION 140f139f0 FUN_140f139f0 body=666 status=ok
// SIG undefined FUN_140f139f0(void)

longlong FUN_140f139f0(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
                      undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  longlong local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  lVar7 = *(longlong *)(param_1 + 0x2c0);
  if (lVar7 == 0) {
    lVar7 = *(longlong *)(param_1 + 0x2b8);
  }
  bVar10 = *(char *)(param_1 + 0x4c1) == '\0';
  if (bVar10) {
    plVar5 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    lVar8 = 0;
  }
  else {
    plVar5 = (longlong *)FUN_140ad4c90(param_1,local_38);
    lVar8 = *plVar5;
  }
  plVar4 = (longlong *)plVar5[1];
  plVar5[1] = 0;
  *plVar5 = 0;
  plVar5 = plStack_40;
  if ((bVar10) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  if ((!bVar10) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar5 = local_30 + 1;
    lVar9 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  if (lVar8 == 0) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar7 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
    return 0;
  }
  if (param_3 != 0) {
    lVar6 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar9 = param_3;
    do {
      if (lVar9 == lVar6) goto LAB_140f13b56;
      lVar9 = *(longlong *)(lVar9 + 0x30);
    } while (lVar9 != 0);
  }
  param_3 = AGameModeTitleScene::GetPrivateStaticClass();
LAB_140f13b56:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar7 = FUN_14203b1b0(lVar8,param_3,param_2,lVar7,param_4,param_5);
  if (lVar7 != 0) {
    lVar8 = AGameModeTitleScene::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) goto LAB_140f13bc9;
  }
  lVar7 = 0;
LAB_140f13bc9:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
    LOCK();
    plVar5 = plVar4 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  return lVar7;
}



// FUNCTION 140f13c90 FUN_140f13c90 body=666 status=ok
// SIG undefined FUN_140f13c90(void)

longlong FUN_140f13c90(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
                      undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  longlong local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  lVar7 = *(longlong *)(param_1 + 0x2c0);
  if (lVar7 == 0) {
    lVar7 = *(longlong *)(param_1 + 0x2b8);
  }
  bVar10 = *(char *)(param_1 + 0x4c1) == '\0';
  if (bVar10) {
    plVar5 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    lVar8 = 0;
  }
  else {
    plVar5 = (longlong *)FUN_140ad4c90(param_1,local_38);
    lVar8 = *plVar5;
  }
  plVar4 = (longlong *)plVar5[1];
  plVar5[1] = 0;
  *plVar5 = 0;
  plVar5 = plStack_40;
  if ((bVar10) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  if ((!bVar10) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar5 = local_30 + 1;
    lVar9 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  if (lVar8 == 0) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar7 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
    return 0;
  }
  if (param_3 != 0) {
    lVar6 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar9 = param_3;
    do {
      if (lVar9 == lVar6) goto LAB_140f13df6;
      lVar9 = *(longlong *)(lVar9 + 0x30);
    } while (lVar9 != 0);
  }
  param_3 = AReplicationGraphDebugActor::GetPrivateStaticClass();
LAB_140f13df6:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar7 = FUN_14203b1b0(lVar8,param_3,param_2,lVar7,param_4,param_5);
  if (lVar7 != 0) {
    lVar8 = AReplicationGraphDebugActor::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) goto LAB_140f13e69;
  }
  lVar7 = 0;
LAB_140f13e69:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
    LOCK();
    plVar5 = plVar4 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  return lVar7;
}



// FUNCTION 140f13f30 FUN_140f13f30 body=666 status=ok
// SIG undefined FUN_140f13f30(void)

longlong FUN_140f13f30(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
                      undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  longlong local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  lVar7 = *(longlong *)(param_1 + 0x2c0);
  if (lVar7 == 0) {
    lVar7 = *(longlong *)(param_1 + 0x2b8);
  }
  bVar10 = *(char *)(param_1 + 0x4c1) == '\0';
  if (bVar10) {
    plVar5 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    lVar8 = 0;
  }
  else {
    plVar5 = (longlong *)FUN_140ad4c90(param_1,local_38);
    lVar8 = *plVar5;
  }
  plVar4 = (longlong *)plVar5[1];
  plVar5[1] = 0;
  *plVar5 = 0;
  plVar5 = plStack_40;
  if ((bVar10) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  if ((!bVar10) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar5 = local_30 + 1;
    lVar9 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  if (lVar8 == 0) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar7 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
    return 0;
  }
  if (param_3 != 0) {
    lVar6 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar9 = param_3;
    do {
      if (lVar9 == lVar6) goto LAB_140f14096;
      lVar9 = *(longlong *)(lVar9 + 0x30);
    } while (lVar9 != 0);
  }
  param_3 = FUN_142f25280();
LAB_140f14096:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar7 = FUN_14203b1b0(lVar8,param_3,param_2,lVar7,param_4,param_5);
  if (lVar7 != 0) {
    lVar8 = FUN_142f25280();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) goto LAB_140f14109;
  }
  lVar7 = 0;
LAB_140f14109:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
    LOCK();
    plVar5 = plVar4 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  return lVar7;
}



// FUNCTION 140f141d0 FUN_140f141d0 body=93 status=ok
// SIG undefined FUN_140f141d0(void)

longlong FUN_140f141d0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x58c);
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



// FUNCTION 140f14230 HeapSortInternal<FAnimSyncMarker,FIdentityFunctor,TDereferenceWrapper<FAnimSyncMarker,TLess<FAnimSyncMarker>_>_> body=373 status=ok
// SIG undefined HeapSortInternal<FAnimSyncMarker,FIdentityFunctor,TDereferenceWrapper<FAnimSyncMarker,TLess<FAnimSyncMarker>_>_>(void)

void AlgoImpl::
     HeapSortInternal<FAnimSyncMarker,FIdentityFunctor,TDereferenceWrapper<FAnimSyncMarker,TLess<FAnimSyncMarker>_>_>
               (undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  iVar4 = (param_2 + -2) / 2;
  if (-1 < iVar4) {
    iVar9 = iVar4 * 2 + 1;
    iVar7 = iVar9;
    iVar10 = iVar4;
joined_r0x000140f1425a:
    do {
      if (iVar9 < param_2) {
        iVar5 = iVar4 * 2 + 1;
        iVar9 = iVar4 * 2 + 2;
        iVar6 = iVar5;
        if ((iVar9 < param_2) &&
           (iVar6 = iVar9,
           *(float *)(param_1 + (longlong)iVar9 * 2 + 1) <=
           *(float *)(param_1 + (longlong)iVar5 * 2 + 1) &&
           *(float *)(param_1 + (longlong)iVar5 * 2 + 1) !=
           *(float *)(param_1 + (longlong)iVar9 * 2 + 1))) {
          iVar6 = iVar5;
        }
        puVar8 = param_1 + (longlong)iVar6 * 2;
        puVar11 = param_1 + (longlong)iVar4 * 2;
        if (*(float *)(puVar11 + 1) <= *(float *)(puVar8 + 1) &&
            *(float *)(puVar8 + 1) != *(float *)(puVar11 + 1)) {
          if (puVar11 != puVar8) {
            uVar1 = puVar8[1];
            uVar2 = *puVar11;
            uVar3 = puVar11[1];
            *puVar11 = *puVar8;
            puVar11[1] = uVar1;
            *puVar8 = uVar2;
            puVar8[1] = uVar3;
          }
          iVar9 = iVar6 * 2 + 1;
          iVar4 = iVar6;
          goto joined_r0x000140f1425a;
        }
      }
      iVar9 = iVar7 + -2;
      iVar4 = iVar10 + -1;
      iVar7 = iVar9;
      iVar10 = iVar4;
    } while (-1 < iVar4);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar8 = param_1 + (longlong)param_2 * 2;
    do {
      if (param_1 != puVar8) {
        uVar1 = puVar8[1];
        uVar2 = *param_1;
        uVar3 = param_1[1];
        *param_1 = *puVar8;
        param_1[1] = uVar1;
        *puVar8 = uVar2;
        puVar8[1] = uVar3;
      }
      iVar4 = 0;
      if (1 < param_2) {
        do {
          iVar9 = iVar4 * 2 + 1;
          iVar10 = iVar4 * 2 + 2;
          iVar7 = iVar9;
          if ((iVar10 < param_2) &&
             (iVar7 = iVar10,
             *(float *)(param_1 + (longlong)iVar10 * 2 + 1) <=
             *(float *)(param_1 + (longlong)iVar9 * 2 + 1) &&
             *(float *)(param_1 + (longlong)iVar9 * 2 + 1) !=
             *(float *)(param_1 + (longlong)iVar10 * 2 + 1))) {
            iVar7 = iVar9;
          }
          puVar11 = param_1 + (longlong)iVar7 * 2;
          puVar12 = param_1 + (longlong)iVar4 * 2;
          if (*(float *)(puVar11 + 1) < *(float *)(puVar12 + 1) ||
              *(float *)(puVar11 + 1) == *(float *)(puVar12 + 1)) break;
          if (puVar12 != puVar11) {
            uVar1 = puVar11[1];
            uVar2 = *puVar12;
            uVar3 = puVar12[1];
            *puVar12 = *puVar11;
            puVar12[1] = uVar1;
            *puVar11 = uVar2;
            puVar11[1] = uVar3;
          }
          iVar4 = iVar7;
        } while (iVar7 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar8 = puVar8 + -2;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 140f143b0 FUN_140f143b0 body=143 status=ok
// SIG undefined FUN_140f143b0(void)

longlong FUN_140f143b0(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar2 = AOnlineBeaconClient::GetPrivateStaticClass();
  lVar3 = FUN_142ebcee0(param_1,param_2,uVar2,param_3);
  if (lVar3 != 0) {
    lVar4 = AOnlineBeaconClient::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return lVar3;
    }
  }
  return 0;
}



// FUNCTION 140f14440 FUN_140f14440 body=143 status=ok
// SIG undefined FUN_140f14440(void)

longlong FUN_140f14440(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar2 = UMobBaseAnim::GetPrivateStaticClass();
  lVar3 = FUN_142ebcee0(param_1,param_2,uVar2,param_3);
  if (lVar3 != 0) {
    lVar4 = UMobBaseAnim::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return lVar3;
    }
  }
  return 0;
}



// FUNCTION 140f144d0 FUN_140f144d0 body=905 status=ok
// SIG undefined FUN_140f144d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f144d0(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  float fVar15;
  undefined1 auStack_368 [48];
  int local_338;
  longlong local_328;
  longlong lStack_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = DAT_1468387a8 ^ (ulonglong)auStack_368;
    lStack_320 = param_1 + (param_2 - 1) * 8;
    fVar15 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar15 = fVar15 + 1.8446744e+19;
    }
    local_328 = param_1;
    fVar15 = _guard_xfg_dispatch_icall_nop(fVar15);
    local_318 = (undefined4)(longlong)(fVar15 + fVar15);
    _guard_xfg_dispatch_icall_nop(local_310,0,0x2e8);
    plVar14 = &local_328;
    do {
      plVar8 = (longlong *)*plVar14;
      plVar13 = (longlong *)plVar14[1];
      local_338 = (int)plVar14[2];
      lVar9 = ((longlong)plVar13 - (longlong)plVar8 >> 3) + 1;
      plVar7 = plVar8;
      if (local_338 != 0) {
LAB_140f145a0:
        if (8 < lVar9) {
          if (lVar9 < 0) {
            lVar9 = lVar9 + 1;
          }
          plVar11 = plVar13 + 1;
          lVar1 = plVar7[lVar9 >> 1];
          plVar7[lVar9 >> 1] = *plVar7;
          *plVar7 = lVar1;
          plVar8 = plVar7;
LAB_140f145d0:
          plVar8 = plVar8 + 1;
          if (plVar8 <= plVar13) goto code_r0x000140f145d9;
          goto LAB_140f145f0;
        }
        for (; plVar11 = plVar7, plVar8 = plVar7, plVar7 < plVar13; plVar13 = plVar13 + -1) {
          while (plVar12 = plVar11, plVar8 = plVar8 + 1, plVar8 <= plVar13) {
            plVar11 = plVar8;
            if (*(int *)(*plVar8 + 0x70) <= *(int *)(*plVar12 + 0x70)) {
              plVar11 = plVar12;
            }
          }
          lVar9 = *plVar12;
          *plVar12 = *plVar13;
          *plVar13 = lVar9;
        }
        goto LAB_140f147b8;
      }
LAB_140f146a4:
      iVar5 = (int)lVar9;
      iVar3 = (iVar5 + -2) / 2;
      if (-1 < iVar3) {
        iVar4 = iVar3 * 2 + 1;
        iVar2 = iVar4;
        iVar6 = iVar3;
joined_r0x000140f146bd:
        do {
          if (iVar4 < iVar5) {
            iVar4 = iVar3 * 2;
            iVar10 = iVar4 + 1;
            if (iVar4 + 2 < iVar5) {
              if (*(int *)(plVar8[(longlong)iVar4 + 2] + 0x70) < *(int *)(plVar8[iVar10] + 0x70)) {
                iVar10 = iVar4;
              }
              iVar10 = iVar10 + 1;
            }
            lVar9 = plVar8[iVar3];
            if (*(int *)(lVar9 + 0x70) < *(int *)(plVar8[iVar10] + 0x70)) {
              iVar4 = iVar10 * 2 + 1;
              plVar8[iVar3] = plVar8[iVar10];
              plVar8[iVar10] = lVar9;
              iVar3 = iVar10;
              goto joined_r0x000140f146bd;
            }
          }
          iVar4 = iVar2 + -2;
          iVar3 = iVar6 + -1;
          iVar2 = iVar4;
          iVar6 = iVar3;
        } while (-1 < iVar3);
      }
      iVar5 = iVar5 + -1;
      lVar9 = (longlong)iVar5;
      if (0 < iVar5) {
        do {
          iVar3 = 0;
          lVar1 = *plVar8;
          *plVar8 = plVar8[lVar9];
          plVar8[lVar9] = lVar1;
          if (1 < iVar5) {
            do {
              iVar2 = iVar3 * 2;
              iVar4 = iVar2 + 1;
              if (iVar2 + 2 < iVar5) {
                if (*(int *)(plVar8[(longlong)iVar2 + 2] + 0x70) < *(int *)(plVar8[iVar4] + 0x70)) {
                  iVar4 = iVar2;
                }
                iVar4 = iVar4 + 1;
              }
              lVar1 = plVar8[iVar3];
              if (*(int *)(plVar8[iVar4] + 0x70) <= *(int *)(lVar1 + 0x70)) break;
              plVar8[iVar3] = plVar8[iVar4];
              plVar8[iVar4] = lVar1;
              iVar3 = iVar4;
            } while (iVar4 * 2 + 1 < iVar5);
          }
          iVar5 = iVar5 + -1;
          lVar9 = lVar9 + -1;
        } while (0 < lVar9);
      }
LAB_140f147b8:
      plVar14 = plVar14 + -3;
    } while (&local_328 <= plVar14);
  }
  return;
code_r0x000140f145d9:
  if (*(int *)(*plVar8 + 0x70) <= *(int *)(*plVar7 + 0x70)) goto LAB_140f145d0;
LAB_140f145f0:
  do {
    plVar12 = plVar11;
    lVar9 = plVar12[-1];
    plVar11 = plVar12 + -1;
    if (plVar11 <= plVar7) break;
  } while (*(int *)(*plVar7 + 0x70) <= *(int *)(lVar9 + 0x70));
  if (plVar8 <= plVar11) {
    lVar1 = *plVar8;
    *plVar8 = lVar9;
    *plVar11 = lVar1;
    goto LAB_140f145d0;
  }
  lVar1 = *plVar7;
  *plVar7 = lVar9;
  *plVar11 = lVar1;
  local_338 = local_338 + -1;
  if ((longlong)((longlong)plVar11 + (-8 - (longlong)plVar7) & 0xfffffffffffffff8U) <
      (longlong)((longlong)plVar13 - (longlong)plVar8 & 0xfffffffffffffff8U)) {
    if (plVar8 < plVar13) {
      *plVar14 = (longlong)plVar8;
      plVar14[1] = (longlong)plVar13;
      *(int *)(plVar14 + 2) = local_338;
      plVar14 = plVar14 + 3;
    }
    if (plVar11 <= plVar7 + 1) goto LAB_140f147b8;
    plVar13 = plVar12 + -2;
    plVar8 = plVar7;
  }
  else {
    if (plVar7 + 1 < plVar11) {
      *plVar14 = (longlong)plVar7;
      plVar14[1] = (longlong)(plVar12 + -2);
      *(int *)(plVar14 + 2) = local_338;
      plVar14 = plVar14 + 3;
    }
    if (plVar13 <= plVar8) goto LAB_140f147b8;
  }
  lVar9 = ((longlong)plVar13 - (longlong)plVar8 >> 3) + 1;
  plVar7 = plVar8;
  if (local_338 == 0) goto LAB_140f146a4;
  goto LAB_140f145a0;
}



// FUNCTION 140f14860 IntroSortInternal<FAnimSyncMarker,FIdentityFunctor,TDereferenceWrapper<FAnimSyncMarker,TLess<FAnimSyncMarker>_>_> body=631 status=ok
// SIG undefined IntroSortInternal<FAnimSyncMarker,FIdentityFunctor,TDereferenceWrapper<FAnimSyncMarker,TLess<FAnimSyncMarker>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<FAnimSyncMarker,FIdentityFunctor,TDereferenceWrapper<FAnimSyncMarker,TLess<FAnimSyncMarker>_>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  float fVar16;
  undefined1 auStack_368 [48];
  longlong local_338;
  longlong local_328;
  longlong lStack_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = DAT_1468387a8 ^ (ulonglong)auStack_368;
    lStack_320 = param_2 * 0x10 + -0x10 + param_1;
    fVar16 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar16 = fVar16 + 1.8446744e+19;
    }
    local_328 = param_1;
    fVar16 = ::_guard_xfg_dispatch_icall_nop(fVar16);
    local_318 = (undefined4)(longlong)(fVar16 + fVar16);
    ::_guard_xfg_dispatch_icall_nop(local_310,0,0x2e8);
    plVar10 = &local_328;
    do {
      puVar15 = (undefined8 *)*plVar10;
      puVar13 = (undefined8 *)plVar10[1];
      lVar1 = plVar10[2];
      local_338._0_4_ = (int)lVar1;
      lVar8 = ((longlong)puVar13 - (longlong)puVar15 >> 4) + 1;
      puVar14 = puVar15;
      if ((int)local_338 != 0) {
LAB_140f14930:
        if (8 < lVar8) {
          puVar15 = puVar14 + (lVar8 / 2) * 2;
          if (puVar15 != puVar14) {
            uVar2 = *(undefined4 *)((longlong)puVar14 + 4);
            uVar3 = *(undefined4 *)(puVar14 + 1);
            uVar4 = *(undefined4 *)((longlong)puVar14 + 0xc);
            uVar5 = *puVar15;
            uVar6 = puVar15[1];
            *(undefined4 *)puVar15 = *(undefined4 *)puVar14;
            *(undefined4 *)((longlong)puVar15 + 4) = uVar2;
            *(undefined4 *)(puVar15 + 1) = uVar3;
            *(undefined4 *)((longlong)puVar15 + 0xc) = uVar4;
            *puVar14 = uVar5;
            puVar14[1] = uVar6;
          }
          puVar11 = puVar13 + 2;
          puVar15 = puVar14;
LAB_140f14966:
          puVar9 = puVar15;
          puVar15 = puVar9 + 2;
          if (puVar15 <= puVar13) goto code_r0x000140f1496f;
          goto LAB_140f14980;
        }
        for (; puVar11 = puVar14, puVar15 = puVar14, puVar14 < puVar13; puVar13 = puVar13 + -2) {
          while (puVar15 = puVar15 + 2, puVar15 <= puVar13) {
            if (*(float *)(puVar11 + 1) < *(float *)(puVar15 + 1)) {
              puVar11 = puVar15;
            }
          }
          if (puVar11 != puVar13) {
            uVar7 = puVar13[1];
            uVar5 = *puVar11;
            uVar6 = puVar11[1];
            *puVar11 = *puVar13;
            puVar11[1] = uVar7;
            *puVar13 = uVar5;
            puVar13[1] = uVar6;
          }
        }
        goto LAB_140f14a4e;
      }
LAB_140f14a3f:
      local_338 = lVar1;
      HeapSortInternal<FAnimSyncMarker,FIdentityFunctor,TDereferenceWrapper<FAnimSyncMarker,TLess<FAnimSyncMarker>_>_>
                (puVar15,lVar8,param_3,param_4);
LAB_140f14a4e:
      plVar10 = plVar10 + -3;
    } while (&local_328 <= plVar10);
  }
  return;
code_r0x000140f1496f:
  if (*(float *)(puVar9 + 3) < *(float *)(puVar14 + 1) ||
      *(float *)(puVar9 + 3) == *(float *)(puVar14 + 1)) goto LAB_140f14966;
LAB_140f14980:
  do {
    puVar12 = puVar11;
    puVar11 = puVar12 + -2;
    if (puVar11 <= puVar14) break;
  } while (*(float *)(puVar14 + 1) < *(float *)(puVar12 + -1) ||
           *(float *)(puVar14 + 1) == *(float *)(puVar12 + -1));
  if (puVar15 <= puVar11) {
    if (puVar15 != puVar11) {
      uVar2 = *(undefined4 *)((longlong)puVar12 + -0xc);
      uVar3 = *(undefined4 *)(puVar12 + -1);
      uVar4 = *(undefined4 *)((longlong)puVar12 + -4);
      uVar5 = *puVar15;
      uVar6 = puVar9[3];
      *(undefined4 *)puVar15 = *(undefined4 *)puVar11;
      *(undefined4 *)((longlong)puVar9 + 0x14) = uVar2;
      *(undefined4 *)(puVar9 + 3) = uVar3;
      *(undefined4 *)((longlong)puVar9 + 0x1c) = uVar4;
      *puVar11 = uVar5;
      puVar12[-1] = uVar6;
    }
    goto LAB_140f14966;
  }
  if (puVar14 != puVar11) {
    uVar2 = *(undefined4 *)((longlong)puVar12 + -0xc);
    uVar3 = *(undefined4 *)(puVar12 + -1);
    uVar4 = *(undefined4 *)((longlong)puVar12 + -4);
    uVar5 = *puVar14;
    uVar6 = puVar14[1];
    *(undefined4 *)puVar14 = *(undefined4 *)puVar11;
    *(undefined4 *)((longlong)puVar14 + 4) = uVar2;
    *(undefined4 *)(puVar14 + 1) = uVar3;
    *(undefined4 *)((longlong)puVar14 + 0xc) = uVar4;
    *puVar11 = uVar5;
    puVar12[-1] = uVar6;
  }
  local_338._0_4_ = (int)local_338 + -1;
  if ((longlong)((longlong)puVar11 + (-0x10 - (longlong)puVar14) & 0xfffffffffffffff0U) <
      (longlong)((longlong)puVar13 - (longlong)puVar15 & 0xfffffffffffffff0U)) {
    if (puVar15 < puVar13) {
      *plVar10 = (longlong)puVar15;
      plVar10[1] = (longlong)puVar13;
      *(int *)(plVar10 + 2) = (int)local_338;
      plVar10 = plVar10 + 3;
    }
    if (puVar11 <= puVar14 + 2) goto LAB_140f14a4e;
    puVar13 = puVar12 + -4;
    puVar15 = puVar14;
  }
  else {
    if (puVar14 + 2 < puVar11) {
      *plVar10 = (longlong)puVar14;
      plVar10[1] = (longlong)(puVar12 + -4);
      *(int *)(plVar10 + 2) = (int)local_338;
      plVar10 = plVar10 + 3;
    }
    if (puVar13 <= puVar15) goto LAB_140f14a4e;
  }
  lVar8 = ((longlong)puVar13 - (longlong)puVar15 >> 4) + 1;
  puVar14 = puVar15;
  if ((int)local_338 == 0) goto LAB_140f14a3f;
  goto LAB_140f14930;
}



// FUNCTION 140f14ae0 FUN_140f14ae0 body=617 status=ok
// SIG undefined FUN_140f14ae0(void)

bool FUN_140f14ae0(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  if ((*param_2 == 0) && (*(char *)(param_1 + 0x4c1) != '\0')) {
    bVar5 = true;
    bVar6 = false;
    plVar7 = (longlong *)FUN_140ad4c90(param_1,local_38);
    lVar9 = *plVar7;
  }
  else {
    plVar7 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar5 = false;
    bVar6 = true;
    lVar9 = 0;
  }
  plVar4 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7 = plStack_40;
  if ((bVar6) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  if ((bVar5) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar7 = local_30 + 1;
    lVar10 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  if (lVar9 == 0) goto LAB_140f14cf4;
  lVar10 = *(longlong *)(param_1 + 0x2c0);
  if (lVar10 == 0) {
    lVar10 = *(longlong *)(param_1 + 0x2b8);
  }
  if (param_4 != 0) {
    lVar8 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar8) goto LAB_140f14c37;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = FUN_1413534f0();
LAB_140f14c37:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar9 = FUN_14203b1b0(lVar9,param_4,param_3,lVar10,param_5,param_6);
  if (lVar9 == 0) {
LAB_140f14cab:
    lVar9 = 0;
  }
  else {
    lVar10 = FUN_1413534f0();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_140f14cab;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar4 + 1;
    lVar10 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  *param_2 = lVar9;
LAB_140f14cf4:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar4 + 1;
    lVar9 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  return *param_2 != 0;
}



// FUNCTION 140f14d50 FUN_140f14d50 body=879 status=ok
// SIG undefined FUN_140f14d50(void)

bool FUN_140f14d50(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5,undefined8 param_6)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong *puVar12;
  bool bVar13;
  ulonglong local_88;
  longlong *local_80;
  ulonglong local_78;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  ulonglong local_58;
  longlong *plStack_50;
  ulonglong local_48;
  longlong *plStack_40;
  undefined8 local_38;
  
  uVar9 = 0;
  if ((*param_2 == 0) && (cVar6 = FUN_142091120(param_1,param_3), cVar6 == '\0')) {
    if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_140f14e0f:
      puVar12 = &local_58;
      local_58 = 0;
      plStack_50 = (longlong *)0x0;
      bVar5 = false;
      bVar7 = true;
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
      LOCK();
      iVar8 = *piVar1;
      if (iVar8 == 0) {
        *piVar1 = 0;
        iVar8 = 0;
      }
      UNLOCK();
      if (iVar8 < 1) goto LAB_140f14e0f;
      local_80 = *(longlong **)(param_1 + 0x30);
      bVar5 = true;
      bVar7 = false;
      local_88 = 0;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        uVar3 = *(uint *)(local_80 + 1);
        bVar13 = uVar3 == 0;
        if (bVar13) {
          *(uint *)(local_80 + 1) = 0;
        }
        else {
          uVar9 = (ulonglong)uVar3;
        }
        UNLOCK();
        while (!bVar13) {
          iVar8 = (int)uVar9;
          LOCK();
          bVar13 = iVar8 == (int)local_80[1];
          if (bVar13) {
            *(int *)(local_80 + 1) = iVar8 + 1;
          }
          UNLOCK();
          if (bVar13) {
            uVar9 = *(ulonglong *)(param_1 + 0x28);
            puVar12 = &local_88;
            local_88 = uVar9;
            goto LAB_140f14e24;
          }
          uVar9 = 0;
          LOCK();
          uVar3 = *(uint *)(local_80 + 1);
          bVar13 = uVar3 == 0;
          if (bVar13) {
            *(uint *)(local_80 + 1) = 0;
          }
          else {
            uVar9 = (ulonglong)uVar3;
          }
          UNLOCK();
        }
        local_80 = (longlong *)0x0;
      }
      uVar9 = 0;
      puVar12 = &local_88;
    }
LAB_140f14e24:
    local_78 = uVar9;
    plVar4 = (longlong *)puVar12[1];
    puVar12[1] = 0;
    plVar2 = plStack_50;
    local_70 = plVar4;
    *puVar12 = 0;
    if ((bVar7) && (plStack_50 != (longlong *)0x0)) {
      LOCK();
      plVar4 = plStack_50 + 1;
      lVar11 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
    }
    plVar4 = local_80;
    if ((bVar5) && (local_80 != (longlong *)0x0)) {
      LOCK();
      plVar2 = local_80 + 1;
      lVar11 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    bVar5 = true;
    bVar7 = false;
    puVar12 = &local_78;
    uVar9 = local_78;
  }
  else {
    puVar12 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar5 = false;
    bVar7 = true;
  }
  local_68 = uVar9;
  plVar4 = (longlong *)puVar12[1];
  puVar12[1] = 0;
  plVar2 = plStack_40;
  local_60 = plVar4;
  *puVar12 = 0;
  if ((bVar7) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar4 = plStack_40 + 1;
    lVar11 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  plVar4 = local_70;
  if ((bVar5) && (local_70 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_70 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  if (local_68 == 0) goto LAB_140f1505f;
  if (param_4 != 0) {
    lVar10 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar10) goto LAB_140f14fad;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = FUN_1413565b0();
LAB_140f14fad:
  plVar4 = *(longlong **)(local_68 + 0x80);
  local_38 = *(undefined8 *)(local_68 + 0x78);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar11 = FUN_14203b1b0(local_38,param_4,param_3,param_1,param_5,param_6);
  if (lVar11 == 0) {
LAB_140f15026:
    lVar11 = 0;
  }
  else {
    lVar10 = FUN_1413565b0();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8
         ) != lVar10 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (!bVar7) goto LAB_140f15026;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  *param_2 = lVar11;
LAB_140f1505f:
  plVar4 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_60 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  return *param_2 != 0;
}



// FUNCTION 140f150c0 FUN_140f150c0 body=879 status=ok
// SIG undefined FUN_140f150c0(void)

bool FUN_140f150c0(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5,undefined8 param_6)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong *puVar12;
  bool bVar13;
  ulonglong local_88;
  longlong *local_80;
  ulonglong local_78;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  ulonglong local_58;
  longlong *plStack_50;
  ulonglong local_48;
  longlong *plStack_40;
  undefined8 local_38;
  
  uVar9 = 0;
  if ((*param_2 == 0) && (cVar6 = FUN_142091120(param_1,param_3), cVar6 == '\0')) {
    if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_140f1517f:
      puVar12 = &local_58;
      local_58 = 0;
      plStack_50 = (longlong *)0x0;
      bVar5 = false;
      bVar7 = true;
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
      LOCK();
      iVar8 = *piVar1;
      if (iVar8 == 0) {
        *piVar1 = 0;
        iVar8 = 0;
      }
      UNLOCK();
      if (iVar8 < 1) goto LAB_140f1517f;
      local_80 = *(longlong **)(param_1 + 0x30);
      bVar5 = true;
      bVar7 = false;
      local_88 = 0;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        uVar3 = *(uint *)(local_80 + 1);
        bVar13 = uVar3 == 0;
        if (bVar13) {
          *(uint *)(local_80 + 1) = 0;
        }
        else {
          uVar9 = (ulonglong)uVar3;
        }
        UNLOCK();
        while (!bVar13) {
          iVar8 = (int)uVar9;
          LOCK();
          bVar13 = iVar8 == (int)local_80[1];
          if (bVar13) {
            *(int *)(local_80 + 1) = iVar8 + 1;
          }
          UNLOCK();
          if (bVar13) {
            uVar9 = *(ulonglong *)(param_1 + 0x28);
            puVar12 = &local_88;
            local_88 = uVar9;
            goto LAB_140f15194;
          }
          uVar9 = 0;
          LOCK();
          uVar3 = *(uint *)(local_80 + 1);
          bVar13 = uVar3 == 0;
          if (bVar13) {
            *(uint *)(local_80 + 1) = 0;
          }
          else {
            uVar9 = (ulonglong)uVar3;
          }
          UNLOCK();
        }
        local_80 = (longlong *)0x0;
      }
      uVar9 = 0;
      puVar12 = &local_88;
    }
LAB_140f15194:
    local_78 = uVar9;
    plVar4 = (longlong *)puVar12[1];
    puVar12[1] = 0;
    plVar2 = plStack_50;
    local_70 = plVar4;
    *puVar12 = 0;
    if ((bVar7) && (plStack_50 != (longlong *)0x0)) {
      LOCK();
      plVar4 = plStack_50 + 1;
      lVar11 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
    }
    plVar4 = local_80;
    if ((bVar5) && (local_80 != (longlong *)0x0)) {
      LOCK();
      plVar2 = local_80 + 1;
      lVar11 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    bVar5 = true;
    bVar7 = false;
    puVar12 = &local_78;
    uVar9 = local_78;
  }
  else {
    puVar12 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar5 = false;
    bVar7 = true;
  }
  local_68 = uVar9;
  plVar4 = (longlong *)puVar12[1];
  puVar12[1] = 0;
  plVar2 = plStack_40;
  local_60 = plVar4;
  *puVar12 = 0;
  if ((bVar7) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar4 = plStack_40 + 1;
    lVar11 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  plVar4 = local_70;
  if ((bVar5) && (local_70 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_70 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  if (local_68 == 0) goto LAB_140f153cf;
  if (param_4 != 0) {
    lVar10 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar10) goto LAB_140f1531d;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = UXGameInstance::GetPrivateStaticClass();
LAB_140f1531d:
  plVar4 = *(longlong **)(local_68 + 0x80);
  local_38 = *(undefined8 *)(local_68 + 0x78);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar11 = FUN_14203b1b0(local_38,param_4,param_3,param_1,param_5,param_6);
  if (lVar11 == 0) {
LAB_140f15396:
    lVar11 = 0;
  }
  else {
    lVar10 = UXGameInstance::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8
         ) != lVar10 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (!bVar7) goto LAB_140f15396;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  *param_2 = lVar11;
LAB_140f153cf:
  plVar4 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_60 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  return *param_2 != 0;
}



// FUNCTION 140f15430 FUN_140f15430 body=879 status=ok
// SIG undefined FUN_140f15430(void)

bool FUN_140f15430(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5,undefined8 param_6)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong *puVar12;
  bool bVar13;
  ulonglong local_88;
  longlong *local_80;
  ulonglong local_78;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  ulonglong local_58;
  longlong *plStack_50;
  ulonglong local_48;
  longlong *plStack_40;
  undefined8 local_38;
  
  uVar9 = 0;
  if ((*param_2 == 0) && (cVar6 = FUN_142091120(param_1,param_3), cVar6 == '\0')) {
    if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_140f154ef:
      puVar12 = &local_58;
      local_58 = 0;
      plStack_50 = (longlong *)0x0;
      bVar5 = false;
      bVar7 = true;
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
      LOCK();
      iVar8 = *piVar1;
      if (iVar8 == 0) {
        *piVar1 = 0;
        iVar8 = 0;
      }
      UNLOCK();
      if (iVar8 < 1) goto LAB_140f154ef;
      local_80 = *(longlong **)(param_1 + 0x30);
      bVar5 = true;
      bVar7 = false;
      local_88 = 0;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        uVar3 = *(uint *)(local_80 + 1);
        bVar13 = uVar3 == 0;
        if (bVar13) {
          *(uint *)(local_80 + 1) = 0;
        }
        else {
          uVar9 = (ulonglong)uVar3;
        }
        UNLOCK();
        while (!bVar13) {
          iVar8 = (int)uVar9;
          LOCK();
          bVar13 = iVar8 == (int)local_80[1];
          if (bVar13) {
            *(int *)(local_80 + 1) = iVar8 + 1;
          }
          UNLOCK();
          if (bVar13) {
            uVar9 = *(ulonglong *)(param_1 + 0x28);
            puVar12 = &local_88;
            local_88 = uVar9;
            goto LAB_140f15504;
          }
          uVar9 = 0;
          LOCK();
          uVar3 = *(uint *)(local_80 + 1);
          bVar13 = uVar3 == 0;
          if (bVar13) {
            *(uint *)(local_80 + 1) = 0;
          }
          else {
            uVar9 = (ulonglong)uVar3;
          }
          UNLOCK();
        }
        local_80 = (longlong *)0x0;
      }
      uVar9 = 0;
      puVar12 = &local_88;
    }
LAB_140f15504:
    local_78 = uVar9;
    plVar4 = (longlong *)puVar12[1];
    puVar12[1] = 0;
    plVar2 = plStack_50;
    local_70 = plVar4;
    *puVar12 = 0;
    if ((bVar7) && (plStack_50 != (longlong *)0x0)) {
      LOCK();
      plVar4 = plStack_50 + 1;
      lVar11 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
    }
    plVar4 = local_80;
    if ((bVar5) && (local_80 != (longlong *)0x0)) {
      LOCK();
      plVar2 = local_80 + 1;
      lVar11 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    bVar5 = true;
    bVar7 = false;
    puVar12 = &local_78;
    uVar9 = local_78;
  }
  else {
    puVar12 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar5 = false;
    bVar7 = true;
  }
  local_68 = uVar9;
  plVar4 = (longlong *)puVar12[1];
  puVar12[1] = 0;
  plVar2 = plStack_40;
  local_60 = plVar4;
  *puVar12 = 0;
  if ((bVar7) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar4 = plStack_40 + 1;
    lVar11 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  plVar4 = local_70;
  if ((bVar5) && (local_70 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_70 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  if (local_68 == 0) goto LAB_140f1573f;
  if (param_4 != 0) {
    lVar10 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar10) goto LAB_140f1568d;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = FUN_141359140();
LAB_140f1568d:
  plVar4 = *(longlong **)(local_68 + 0x80);
  local_38 = *(undefined8 *)(local_68 + 0x78);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar11 = FUN_14203b1b0(local_38,param_4,param_3,param_1,param_5,param_6);
  if (lVar11 == 0) {
LAB_140f15706:
    lVar11 = 0;
  }
  else {
    lVar10 = FUN_141359140();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8
         ) != lVar10 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (!bVar7) goto LAB_140f15706;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  *param_2 = lVar11;
LAB_140f1573f:
  plVar4 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_60 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  return *param_2 != 0;
}



// FUNCTION 140f157a0 FUN_140f157a0 body=879 status=ok
// SIG undefined FUN_140f157a0(void)

bool FUN_140f157a0(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5,undefined8 param_6)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong *puVar12;
  bool bVar13;
  ulonglong local_88;
  longlong *local_80;
  ulonglong local_78;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  ulonglong local_58;
  longlong *plStack_50;
  ulonglong local_48;
  longlong *plStack_40;
  undefined8 local_38;
  
  uVar9 = 0;
  if ((*param_2 == 0) && (cVar6 = FUN_142091120(param_1,param_3), cVar6 == '\0')) {
    if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_140f1585f:
      puVar12 = &local_58;
      local_58 = 0;
      plStack_50 = (longlong *)0x0;
      bVar5 = false;
      bVar7 = true;
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
      LOCK();
      iVar8 = *piVar1;
      if (iVar8 == 0) {
        *piVar1 = 0;
        iVar8 = 0;
      }
      UNLOCK();
      if (iVar8 < 1) goto LAB_140f1585f;
      local_80 = *(longlong **)(param_1 + 0x30);
      bVar5 = true;
      bVar7 = false;
      local_88 = 0;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        uVar3 = *(uint *)(local_80 + 1);
        bVar13 = uVar3 == 0;
        if (bVar13) {
          *(uint *)(local_80 + 1) = 0;
        }
        else {
          uVar9 = (ulonglong)uVar3;
        }
        UNLOCK();
        while (!bVar13) {
          iVar8 = (int)uVar9;
          LOCK();
          bVar13 = iVar8 == (int)local_80[1];
          if (bVar13) {
            *(int *)(local_80 + 1) = iVar8 + 1;
          }
          UNLOCK();
          if (bVar13) {
            uVar9 = *(ulonglong *)(param_1 + 0x28);
            puVar12 = &local_88;
            local_88 = uVar9;
            goto LAB_140f15874;
          }
          uVar9 = 0;
          LOCK();
          uVar3 = *(uint *)(local_80 + 1);
          bVar13 = uVar3 == 0;
          if (bVar13) {
            *(uint *)(local_80 + 1) = 0;
          }
          else {
            uVar9 = (ulonglong)uVar3;
          }
          UNLOCK();
        }
        local_80 = (longlong *)0x0;
      }
      uVar9 = 0;
      puVar12 = &local_88;
    }
LAB_140f15874:
    local_78 = uVar9;
    plVar4 = (longlong *)puVar12[1];
    puVar12[1] = 0;
    plVar2 = plStack_50;
    local_70 = plVar4;
    *puVar12 = 0;
    if ((bVar7) && (plStack_50 != (longlong *)0x0)) {
      LOCK();
      plVar4 = plStack_50 + 1;
      lVar11 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
    }
    plVar4 = local_80;
    if ((bVar5) && (local_80 != (longlong *)0x0)) {
      LOCK();
      plVar2 = local_80 + 1;
      lVar11 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    bVar5 = true;
    bVar7 = false;
    puVar12 = &local_78;
    uVar9 = local_78;
  }
  else {
    puVar12 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar5 = false;
    bVar7 = true;
  }
  local_68 = uVar9;
  plVar4 = (longlong *)puVar12[1];
  puVar12[1] = 0;
  plVar2 = plStack_40;
  local_60 = plVar4;
  *puVar12 = 0;
  if ((bVar7) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar4 = plStack_40 + 1;
    lVar11 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  plVar4 = local_70;
  if ((bVar5) && (local_70 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_70 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  if (local_68 == 0) goto LAB_140f15aaf;
  if (param_4 != 0) {
    lVar10 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar10) goto LAB_140f159fd;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = FUN_141373440();
LAB_140f159fd:
  plVar4 = *(longlong **)(local_68 + 0x80);
  local_38 = *(undefined8 *)(local_68 + 0x78);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar11 = FUN_14203b1b0(local_38,param_4,param_3,param_1,param_5,param_6);
  if (lVar11 == 0) {
LAB_140f15a76:
    lVar11 = 0;
  }
  else {
    lVar10 = FUN_141373440();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8
         ) != lVar10 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (!bVar7) goto LAB_140f15a76;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  *param_2 = lVar11;
LAB_140f15aaf:
  plVar4 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_60 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  return *param_2 != 0;
}



// FUNCTION 140f15b10 FUN_140f15b10 body=879 status=ok
// SIG undefined FUN_140f15b10(void)

bool FUN_140f15b10(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5,undefined8 param_6)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong *puVar12;
  bool bVar13;
  ulonglong local_88;
  longlong *local_80;
  ulonglong local_78;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  ulonglong local_58;
  longlong *plStack_50;
  ulonglong local_48;
  longlong *plStack_40;
  undefined8 local_38;
  
  uVar9 = 0;
  if ((*param_2 == 0) && (cVar6 = FUN_142091120(param_1,param_3), cVar6 == '\0')) {
    if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_140f15bcf:
      puVar12 = &local_58;
      local_58 = 0;
      plStack_50 = (longlong *)0x0;
      bVar5 = false;
      bVar7 = true;
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
      LOCK();
      iVar8 = *piVar1;
      if (iVar8 == 0) {
        *piVar1 = 0;
        iVar8 = 0;
      }
      UNLOCK();
      if (iVar8 < 1) goto LAB_140f15bcf;
      local_80 = *(longlong **)(param_1 + 0x30);
      bVar5 = true;
      bVar7 = false;
      local_88 = 0;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        uVar3 = *(uint *)(local_80 + 1);
        bVar13 = uVar3 == 0;
        if (bVar13) {
          *(uint *)(local_80 + 1) = 0;
        }
        else {
          uVar9 = (ulonglong)uVar3;
        }
        UNLOCK();
        while (!bVar13) {
          iVar8 = (int)uVar9;
          LOCK();
          bVar13 = iVar8 == (int)local_80[1];
          if (bVar13) {
            *(int *)(local_80 + 1) = iVar8 + 1;
          }
          UNLOCK();
          if (bVar13) {
            uVar9 = *(ulonglong *)(param_1 + 0x28);
            puVar12 = &local_88;
            local_88 = uVar9;
            goto LAB_140f15be4;
          }
          uVar9 = 0;
          LOCK();
          uVar3 = *(uint *)(local_80 + 1);
          bVar13 = uVar3 == 0;
          if (bVar13) {
            *(uint *)(local_80 + 1) = 0;
          }
          else {
            uVar9 = (ulonglong)uVar3;
          }
          UNLOCK();
        }
        local_80 = (longlong *)0x0;
      }
      uVar9 = 0;
      puVar12 = &local_88;
    }
LAB_140f15be4:
    local_78 = uVar9;
    plVar4 = (longlong *)puVar12[1];
    puVar12[1] = 0;
    plVar2 = plStack_50;
    local_70 = plVar4;
    *puVar12 = 0;
    if ((bVar7) && (plStack_50 != (longlong *)0x0)) {
      LOCK();
      plVar4 = plStack_50 + 1;
      lVar11 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
    }
    plVar4 = local_80;
    if ((bVar5) && (local_80 != (longlong *)0x0)) {
      LOCK();
      plVar2 = local_80 + 1;
      lVar11 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    bVar5 = true;
    bVar7 = false;
    puVar12 = &local_78;
    uVar9 = local_78;
  }
  else {
    puVar12 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar5 = false;
    bVar7 = true;
  }
  local_68 = uVar9;
  plVar4 = (longlong *)puVar12[1];
  puVar12[1] = 0;
  plVar2 = plStack_40;
  local_60 = plVar4;
  *puVar12 = 0;
  if ((bVar7) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar4 = plStack_40 + 1;
    lVar11 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  plVar4 = local_70;
  if ((bVar5) && (local_70 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_70 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  if (local_68 == 0) goto LAB_140f15e1f;
  if (param_4 != 0) {
    lVar10 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar10) goto LAB_140f15d6d;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = FUN_142f18d50();
LAB_140f15d6d:
  plVar4 = *(longlong **)(local_68 + 0x80);
  local_38 = *(undefined8 *)(local_68 + 0x78);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar11 = FUN_14203b1b0(local_38,param_4,param_3,param_1,param_5,param_6);
  if (lVar11 == 0) {
LAB_140f15de6:
    lVar11 = 0;
  }
  else {
    lVar10 = FUN_142f18d50();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8
         ) != lVar10 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (!bVar7) goto LAB_140f15de6;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  *param_2 = lVar11;
LAB_140f15e1f:
  plVar4 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_60 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  return *param_2 != 0;
}



// FUNCTION 140f15e80 FUN_140f15e80 body=879 status=ok
// SIG undefined FUN_140f15e80(void)

bool FUN_140f15e80(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5,undefined8 param_6)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong *puVar12;
  bool bVar13;
  ulonglong local_88;
  longlong *local_80;
  ulonglong local_78;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  ulonglong local_58;
  longlong *plStack_50;
  ulonglong local_48;
  longlong *plStack_40;
  undefined8 local_38;
  
  uVar9 = 0;
  if ((*param_2 == 0) && (cVar6 = FUN_142091120(param_1,param_3), cVar6 == '\0')) {
    if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_140f15f3f:
      puVar12 = &local_58;
      local_58 = 0;
      plStack_50 = (longlong *)0x0;
      bVar5 = false;
      bVar7 = true;
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
      LOCK();
      iVar8 = *piVar1;
      if (iVar8 == 0) {
        *piVar1 = 0;
        iVar8 = 0;
      }
      UNLOCK();
      if (iVar8 < 1) goto LAB_140f15f3f;
      local_80 = *(longlong **)(param_1 + 0x30);
      bVar5 = true;
      bVar7 = false;
      local_88 = 0;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        uVar3 = *(uint *)(local_80 + 1);
        bVar13 = uVar3 == 0;
        if (bVar13) {
          *(uint *)(local_80 + 1) = 0;
        }
        else {
          uVar9 = (ulonglong)uVar3;
        }
        UNLOCK();
        while (!bVar13) {
          iVar8 = (int)uVar9;
          LOCK();
          bVar13 = iVar8 == (int)local_80[1];
          if (bVar13) {
            *(int *)(local_80 + 1) = iVar8 + 1;
          }
          UNLOCK();
          if (bVar13) {
            uVar9 = *(ulonglong *)(param_1 + 0x28);
            puVar12 = &local_88;
            local_88 = uVar9;
            goto LAB_140f15f54;
          }
          uVar9 = 0;
          LOCK();
          uVar3 = *(uint *)(local_80 + 1);
          bVar13 = uVar3 == 0;
          if (bVar13) {
            *(uint *)(local_80 + 1) = 0;
          }
          else {
            uVar9 = (ulonglong)uVar3;
          }
          UNLOCK();
        }
        local_80 = (longlong *)0x0;
      }
      uVar9 = 0;
      puVar12 = &local_88;
    }
LAB_140f15f54:
    local_78 = uVar9;
    plVar4 = (longlong *)puVar12[1];
    puVar12[1] = 0;
    plVar2 = plStack_50;
    local_70 = plVar4;
    *puVar12 = 0;
    if ((bVar7) && (plStack_50 != (longlong *)0x0)) {
      LOCK();
      plVar4 = plStack_50 + 1;
      lVar11 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
    }
    plVar4 = local_80;
    if ((bVar5) && (local_80 != (longlong *)0x0)) {
      LOCK();
      plVar2 = local_80 + 1;
      lVar11 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    bVar5 = true;
    bVar7 = false;
    puVar12 = &local_78;
    uVar9 = local_78;
  }
  else {
    puVar12 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar5 = false;
    bVar7 = true;
  }
  local_68 = uVar9;
  plVar4 = (longlong *)puVar12[1];
  puVar12[1] = 0;
  plVar2 = plStack_40;
  local_60 = plVar4;
  *puVar12 = 0;
  if ((bVar7) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar4 = plStack_40 + 1;
    lVar11 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  plVar4 = local_70;
  if ((bVar5) && (local_70 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_70 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  if (local_68 == 0) goto LAB_140f1618f;
  if (param_4 != 0) {
    lVar10 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar10) goto LAB_140f160dd;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = UGameInstanceGameParameters::GetPrivateStaticClass();
LAB_140f160dd:
  plVar4 = *(longlong **)(local_68 + 0x80);
  local_38 = *(undefined8 *)(local_68 + 0x78);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar11 = FUN_14203b1b0(local_38,param_4,param_3,param_1,param_5,param_6);
  if (lVar11 == 0) {
LAB_140f16156:
    lVar11 = 0;
  }
  else {
    lVar10 = UGameInstanceGameParameters::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8
         ) != lVar10 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (!bVar7) goto LAB_140f16156;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  *param_2 = lVar11;
LAB_140f1618f:
  plVar4 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_60 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  return *param_2 != 0;
}



// FUNCTION 140f161f0 FUN_140f161f0 body=879 status=ok
// SIG undefined FUN_140f161f0(void)

bool FUN_140f161f0(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5,undefined8 param_6)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong *puVar12;
  bool bVar13;
  ulonglong local_88;
  longlong *local_80;
  ulonglong local_78;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  ulonglong local_58;
  longlong *plStack_50;
  ulonglong local_48;
  longlong *plStack_40;
  undefined8 local_38;
  
  uVar9 = 0;
  if ((*param_2 == 0) && (cVar6 = FUN_142091120(param_1,param_3), cVar6 == '\0')) {
    if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_140f162af:
      puVar12 = &local_58;
      local_58 = 0;
      plStack_50 = (longlong *)0x0;
      bVar5 = false;
      bVar7 = true;
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
      LOCK();
      iVar8 = *piVar1;
      if (iVar8 == 0) {
        *piVar1 = 0;
        iVar8 = 0;
      }
      UNLOCK();
      if (iVar8 < 1) goto LAB_140f162af;
      local_80 = *(longlong **)(param_1 + 0x30);
      bVar5 = true;
      bVar7 = false;
      local_88 = 0;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        uVar3 = *(uint *)(local_80 + 1);
        bVar13 = uVar3 == 0;
        if (bVar13) {
          *(uint *)(local_80 + 1) = 0;
        }
        else {
          uVar9 = (ulonglong)uVar3;
        }
        UNLOCK();
        while (!bVar13) {
          iVar8 = (int)uVar9;
          LOCK();
          bVar13 = iVar8 == (int)local_80[1];
          if (bVar13) {
            *(int *)(local_80 + 1) = iVar8 + 1;
          }
          UNLOCK();
          if (bVar13) {
            uVar9 = *(ulonglong *)(param_1 + 0x28);
            puVar12 = &local_88;
            local_88 = uVar9;
            goto LAB_140f162c4;
          }
          uVar9 = 0;
          LOCK();
          uVar3 = *(uint *)(local_80 + 1);
          bVar13 = uVar3 == 0;
          if (bVar13) {
            *(uint *)(local_80 + 1) = 0;
          }
          else {
            uVar9 = (ulonglong)uVar3;
          }
          UNLOCK();
        }
        local_80 = (longlong *)0x0;
      }
      uVar9 = 0;
      puVar12 = &local_88;
    }
LAB_140f162c4:
    local_78 = uVar9;
    plVar4 = (longlong *)puVar12[1];
    puVar12[1] = 0;
    plVar2 = plStack_50;
    local_70 = plVar4;
    *puVar12 = 0;
    if ((bVar7) && (plStack_50 != (longlong *)0x0)) {
      LOCK();
      plVar4 = plStack_50 + 1;
      lVar11 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
    }
    plVar4 = local_80;
    if ((bVar5) && (local_80 != (longlong *)0x0)) {
      LOCK();
      plVar2 = local_80 + 1;
      lVar11 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    bVar5 = true;
    bVar7 = false;
    puVar12 = &local_78;
    uVar9 = local_78;
  }
  else {
    puVar12 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar5 = false;
    bVar7 = true;
  }
  local_68 = uVar9;
  plVar4 = (longlong *)puVar12[1];
  puVar12[1] = 0;
  plVar2 = plStack_40;
  local_60 = plVar4;
  *puVar12 = 0;
  if ((bVar7) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar4 = plStack_40 + 1;
    lVar11 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  plVar4 = local_70;
  if ((bVar5) && (local_70 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_70 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  if (local_68 == 0) goto LAB_140f164ff;
  if (param_4 != 0) {
    lVar10 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar10) goto LAB_140f1644d;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = UXGameInstance::GetPrivateStaticClass();
LAB_140f1644d:
  plVar4 = *(longlong **)(local_68 + 0x80);
  local_38 = *(undefined8 *)(local_68 + 0x78);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar11 = FUN_14203b1b0(local_38,param_4,param_3,param_1,param_5,param_6);
  if (lVar11 == 0) {
LAB_140f164c6:
    lVar11 = 0;
  }
  else {
    lVar10 = UXGameInstance::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8
         ) != lVar10 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (!bVar7) goto LAB_140f164c6;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  *param_2 = lVar11;
LAB_140f164ff:
  plVar4 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_60 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  return *param_2 != 0;
}



// FUNCTION 140f16560 FUN_140f16560 body=879 status=ok
// SIG undefined FUN_140f16560(void)

bool FUN_140f16560(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5,undefined8 param_6)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong *puVar12;
  bool bVar13;
  ulonglong local_88;
  longlong *local_80;
  ulonglong local_78;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  ulonglong local_58;
  longlong *plStack_50;
  ulonglong local_48;
  longlong *plStack_40;
  undefined8 local_38;
  
  uVar9 = 0;
  if ((*param_2 == 0) && (cVar6 = FUN_142091120(param_1,param_3), cVar6 == '\0')) {
    if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_140f1661f:
      puVar12 = &local_58;
      local_58 = 0;
      plStack_50 = (longlong *)0x0;
      bVar5 = false;
      bVar7 = true;
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
      LOCK();
      iVar8 = *piVar1;
      if (iVar8 == 0) {
        *piVar1 = 0;
        iVar8 = 0;
      }
      UNLOCK();
      if (iVar8 < 1) goto LAB_140f1661f;
      local_80 = *(longlong **)(param_1 + 0x30);
      bVar5 = true;
      bVar7 = false;
      local_88 = 0;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        uVar3 = *(uint *)(local_80 + 1);
        bVar13 = uVar3 == 0;
        if (bVar13) {
          *(uint *)(local_80 + 1) = 0;
        }
        else {
          uVar9 = (ulonglong)uVar3;
        }
        UNLOCK();
        while (!bVar13) {
          iVar8 = (int)uVar9;
          LOCK();
          bVar13 = iVar8 == (int)local_80[1];
          if (bVar13) {
            *(int *)(local_80 + 1) = iVar8 + 1;
          }
          UNLOCK();
          if (bVar13) {
            uVar9 = *(ulonglong *)(param_1 + 0x28);
            puVar12 = &local_88;
            local_88 = uVar9;
            goto LAB_140f16634;
          }
          uVar9 = 0;
          LOCK();
          uVar3 = *(uint *)(local_80 + 1);
          bVar13 = uVar3 == 0;
          if (bVar13) {
            *(uint *)(local_80 + 1) = 0;
          }
          else {
            uVar9 = (ulonglong)uVar3;
          }
          UNLOCK();
        }
        local_80 = (longlong *)0x0;
      }
      uVar9 = 0;
      puVar12 = &local_88;
    }
LAB_140f16634:
    local_78 = uVar9;
    plVar4 = (longlong *)puVar12[1];
    puVar12[1] = 0;
    plVar2 = plStack_50;
    local_70 = plVar4;
    *puVar12 = 0;
    if ((bVar7) && (plStack_50 != (longlong *)0x0)) {
      LOCK();
      plVar4 = plStack_50 + 1;
      lVar11 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
    }
    plVar4 = local_80;
    if ((bVar5) && (local_80 != (longlong *)0x0)) {
      LOCK();
      plVar2 = local_80 + 1;
      lVar11 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    bVar5 = true;
    bVar7 = false;
    puVar12 = &local_78;
    uVar9 = local_78;
  }
  else {
    puVar12 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar5 = false;
    bVar7 = true;
  }
  local_68 = uVar9;
  plVar4 = (longlong *)puVar12[1];
  puVar12[1] = 0;
  plVar2 = plStack_40;
  local_60 = plVar4;
  *puVar12 = 0;
  if ((bVar7) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar4 = plStack_40 + 1;
    lVar11 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  plVar4 = local_70;
  if ((bVar5) && (local_70 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_70 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  if (local_68 == 0) goto LAB_140f1686f;
  if (param_4 != 0) {
    lVar10 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar10) goto LAB_140f167bd;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = UGameInstanceGameParameters::GetPrivateStaticClass();
LAB_140f167bd:
  plVar4 = *(longlong **)(local_68 + 0x80);
  local_38 = *(undefined8 *)(local_68 + 0x78);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar11 = FUN_14203b1b0(local_38,param_4,param_3,param_1,param_5,param_6);
  if (lVar11 == 0) {
LAB_140f16836:
    lVar11 = 0;
  }
  else {
    lVar10 = UGameInstanceGameParameters::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8
         ) != lVar10 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (!bVar7) goto LAB_140f16836;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  *param_2 = lVar11;
LAB_140f1686f:
  plVar4 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_60 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  return *param_2 != 0;
}



// FUNCTION 140f168d0 FUN_140f168d0 body=127 status=ok
// SIG undefined FUN_140f168d0(void)

undefined8 * FUN_140f168d0(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_LAB_14461b6c8;
  param_1[2] = *param_3;
  FWeakObjectPtr::operator=(param_1 + 3);
  uVar1 = FDelegateHandle::GenerateNewID();
  param_1[5] = uVar1;
  if (param_2 != 0) {
    uVar1 = FWeakObjectPtr::Get(param_1 + 3);
    uVar1 = FUN_14178ac60(uVar1,*param_3);
    param_1[1] = uVar1;
  }
  *param_1 = &PTR_LAB_14461b710;
  return param_1;
}



// FUNCTION 140f16950 FUN_140f16950 body=167 status=ok
// SIG undefined FUN_140f16950(void)

undefined1 * FUN_140f16950(undefined1 *param_1,undefined1 param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  *param_1 = param_2;
  FWeakObjectPtr::operator=(param_1 + 4,param_3);
  FWeakObjectPtr::operator=(param_1 + 0xc,0);
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 4);
  if (cVar1 != '\0') {
    plVar3 = (longlong *)FWeakObjectPtr::Get(param_1 + 4);
    lVar4 = (**(code **)(*plVar3 + 0x340))(plVar3);
    cVar1 = FWeakObjectPtr::IsValid(lVar4 + 0xdc);
    if (cVar1 == '\0') {
      cVar1 = FWeakObjectPtr::IsValid(lVar4 + 0x5c);
      if (cVar1 == '\0') {
        return param_1;
      }
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(lVar4 + 0x5c);
      uVar2 = *(undefined4 *)(lVar4 + 0x60);
    }
    else {
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(lVar4 + 0xdc);
      uVar2 = *(undefined4 *)(lVar4 + 0xe0);
    }
    *(undefined4 *)(param_1 + 0x10) = uVar2;
  }
  return param_1;
}



// FUNCTION 140f16a00 FUN_140f16a00 body=176 status=ok
// SIG undefined FUN_140f16a00(void)

undefined8 * FUN_140f16a00(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  
  *param_1 = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 0x28);
  *(byte *)((longlong)param_1 + 0x29) =
       *(byte *)((longlong)param_1 + 0x29) ^
       (*(byte *)((longlong)param_1 + 0x29) ^ *(byte *)(param_2 + 0x29)) & 1;
  bVar1 = (*(byte *)(param_2 + 0x29) ^ *(byte *)((longlong)param_1 + 0x29)) & 2 ^
          *(byte *)((longlong)param_1 + 0x29);
  *(byte *)((longlong)param_1 + 0x29) = bVar1;
  bVar1 = (*(byte *)(param_2 + 0x29) ^ bVar1) & 4 ^ bVar1;
  *(byte *)((longlong)param_1 + 0x29) = bVar1;
  *(byte *)((longlong)param_1 + 0x29) = (*(byte *)(param_2 + 0x29) ^ bVar1) & 8 ^ bVar1;
  *(undefined8 *)((longlong)param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
  *(undefined1 *)((longlong)param_1 + 0x34) = *(undefined1 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  *(byte *)((longlong)param_1 + 0x3c) =
       *(byte *)((longlong)param_1 + 0x3c) ^
       (*(byte *)((longlong)param_1 + 0x3c) ^ *(byte *)(param_2 + 0x3c)) & 1;
  *(byte *)((longlong)param_1 + 0x3c) =
       *(byte *)((longlong)param_1 + 0x3c) ^
       (*(byte *)(param_2 + 0x3c) ^ *(byte *)((longlong)param_1 + 0x3c)) & 2;
  return param_1;
}



// FUNCTION 140f16ab0 FUN_140f16ab0 body=139 status=ok
// SIG undefined FUN_140f16ab0(void)

undefined4 * FUN_140f16ab0(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *param_1 = 0xffffffff;
  uVar2 = FUN_1416f8720(*param_2);
  FUN_14170c210(param_1,uVar2);
  param_1[1] = 0xffffffff;
  uVar2 = FUN_1416f8720(param_2[1]);
  FUN_14170c210(param_1 + 1,uVar2);
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  lVar1 = *(longlong *)(param_2 + 4);
  *(longlong *)(param_1 + 4) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[6] = param_2[6];
  lVar1 = *(longlong *)(param_2 + 8);
  *(longlong *)(param_1 + 8) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0x48) = *(int *)(lVar1 + 0x48) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 140f16b40 FUN_140f16b40 body=6356 status=ok
// SIG undefined FUN_140f16b40(void)

uint * FUN_140f16b40(uint *param_1,uint *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  
  *param_1 = *param_1 ^ (*param_2 ^ *param_1) & 1;
  uVar2 = (*param_2 ^ *param_1) & 2 ^ *param_1;
  *param_1 = uVar2;
  uVar2 = (uVar2 ^ *param_2) & 4 ^ uVar2;
  *param_1 = uVar2;
  uVar2 = (uVar2 ^ *param_2) & 8 ^ uVar2;
  *param_1 = uVar2;
  uVar2 = (uVar2 ^ *param_2) & 0x10 ^ uVar2;
  *param_1 = uVar2;
  uVar2 = (uVar2 ^ *param_2) & 0x20 ^ uVar2;
  *param_1 = uVar2;
  uVar2 = (uVar2 ^ *param_2) & 0x40 ^ uVar2;
  *param_1 = uVar2;
  uVar2 = (uVar2 ^ *param_2) & 0x80 ^ uVar2;
  *param_1 = uVar2;
  uVar2 = (uVar2 ^ *param_2) & 0x100 ^ uVar2;
  *param_1 = uVar2;
  uVar2 = (uVar2 ^ *param_2) & 0x200 ^ uVar2;
  *param_1 = uVar2;
  uVar2 = (uVar2 ^ *param_2) & 0x400 ^ uVar2;
  *param_1 = uVar2;
  uVar2 = (uVar2 ^ *param_2) & 0x800 ^ uVar2;
  *param_1 = uVar2;
  uVar2 = (uVar2 ^ *param_2) & 0x1000 ^ uVar2;
  *param_1 = uVar2;
  uVar2 = (uVar2 ^ *param_2) & 0x2000 ^ uVar2;
  *param_1 = uVar2;
  uVar2 = (uVar2 ^ *param_2) & 0x4000 ^ uVar2;
  *param_1 = uVar2;
  uVar2 = (uVar2 ^ *param_2) & 0x8000 ^ uVar2;
  *param_1 = uVar2;
  uVar2 = (uVar2 ^ *param_2) & 0x10000 ^ uVar2;
  *param_1 = uVar2;
  uVar2 = (uVar2 ^ *param_2) & 0x20000 ^ uVar2;
  *param_1 = uVar2;
  uVar2 = (uVar2 ^ *param_2) & 0x40000 ^ uVar2;
  *param_1 = uVar2;
  uVar2 = (uVar2 ^ *param_2) & 0x80000 ^ uVar2;
  *param_1 = uVar2;
  uVar2 = (uVar2 ^ *param_2) & 0x100000 ^ uVar2;
  *param_1 = uVar2;
  uVar2 = (uVar2 ^ *param_2) & 0x200000 ^ uVar2;
  *param_1 = uVar2;
  uVar2 = (uVar2 ^ *param_2) & 0x400000 ^ uVar2;
  *param_1 = uVar2;
  uVar2 = (uVar2 ^ *param_2) & 0x800000 ^ uVar2;
  *param_1 = uVar2;
  uVar2 = (uVar2 ^ *param_2) & 0x1000000 ^ uVar2;
  *param_1 = uVar2;
  uVar2 = (uVar2 ^ *param_2) & 0x2000000 ^ uVar2;
  *param_1 = uVar2;
  uVar2 = (uVar2 ^ *param_2) & 0x4000000 ^ uVar2;
  *param_1 = uVar2;
  uVar2 = (uVar2 ^ *param_2) & 0x8000000 ^ uVar2;
  *param_1 = uVar2;
  uVar2 = (uVar2 ^ *param_2) & 0x10000000 ^ uVar2;
  *param_1 = uVar2;
  uVar2 = (uVar2 ^ *param_2) & 0x20000000 ^ uVar2;
  *param_1 = uVar2;
  uVar2 = (uVar2 ^ *param_2) & 0x40000000 ^ uVar2;
  *param_1 = uVar2;
  *param_1 = (uVar2 ^ *param_2) & 0x7fffffff ^ *param_2;
  param_1[1] = param_1[1] ^ (param_1[1] ^ param_2[1]) & 1;
  uVar2 = (param_2[1] ^ param_1[1]) & 2 ^ param_1[1];
  param_1[1] = uVar2;
  uVar2 = (uVar2 ^ param_2[1]) & 4 ^ uVar2;
  param_1[1] = uVar2;
  uVar2 = (uVar2 ^ param_2[1]) & 8 ^ uVar2;
  param_1[1] = uVar2;
  uVar2 = (uVar2 ^ param_2[1]) & 0x10 ^ uVar2;
  param_1[1] = uVar2;
  uVar2 = (uVar2 ^ param_2[1]) & 0x20 ^ uVar2;
  param_1[1] = uVar2;
  uVar2 = (uVar2 ^ param_2[1]) & 0x40 ^ uVar2;
  param_1[1] = uVar2;
  uVar2 = (uVar2 ^ param_2[1]) & 0x80 ^ uVar2;
  param_1[1] = uVar2;
  uVar2 = (uVar2 ^ param_2[1]) & 0x100 ^ uVar2;
  param_1[1] = uVar2;
  uVar2 = (uVar2 ^ param_2[1]) & 0x200 ^ uVar2;
  param_1[1] = uVar2;
  uVar2 = (uVar2 ^ param_2[1]) & 0x400 ^ uVar2;
  param_1[1] = uVar2;
  uVar2 = (uVar2 ^ param_2[1]) & 0x800 ^ uVar2;
  param_1[1] = uVar2;
  uVar2 = (uVar2 ^ param_2[1]) & 0x1000 ^ uVar2;
  param_1[1] = uVar2;
  uVar2 = (uVar2 ^ param_2[1]) & 0x2000 ^ uVar2;
  param_1[1] = uVar2;
  uVar2 = (uVar2 ^ param_2[1]) & 0x4000 ^ uVar2;
  param_1[1] = uVar2;
  uVar2 = (uVar2 ^ param_2[1]) & 0x8000 ^ uVar2;
  param_1[1] = uVar2;
  uVar2 = (uVar2 ^ param_2[1]) & 0x10000 ^ uVar2;
  param_1[1] = uVar2;
  uVar2 = (uVar2 ^ param_2[1]) & 0x20000 ^ uVar2;
  param_1[1] = uVar2;
  uVar2 = (uVar2 ^ param_2[1]) & 0x40000 ^ uVar2;
  param_1[1] = uVar2;
  uVar2 = (uVar2 ^ param_2[1]) & 0x80000 ^ uVar2;
  param_1[1] = uVar2;
  uVar2 = (uVar2 ^ param_2[1]) & 0x100000 ^ uVar2;
  param_1[1] = uVar2;
  uVar2 = (uVar2 ^ param_2[1]) & 0x200000 ^ uVar2;
  param_1[1] = uVar2;
  uVar2 = (uVar2 ^ param_2[1]) & 0x400000 ^ uVar2;
  param_1[1] = uVar2;
  uVar2 = (uVar2 ^ param_2[1]) & 0x800000 ^ uVar2;
  param_1[1] = uVar2;
  uVar2 = (uVar2 ^ param_2[1]) & 0x1000000 ^ uVar2;
  param_1[1] = uVar2;
  uVar2 = (uVar2 ^ param_2[1]) & 0x2000000 ^ uVar2;
  param_1[1] = uVar2;
  uVar2 = (uVar2 ^ param_2[1]) & 0x4000000 ^ uVar2;
  param_1[1] = uVar2;
  uVar2 = (uVar2 ^ param_2[1]) & 0x8000000 ^ uVar2;
  param_1[1] = uVar2;
  uVar2 = (uVar2 ^ param_2[1]) & 0x10000000 ^ uVar2;
  param_1[1] = uVar2;
  uVar2 = (uVar2 ^ param_2[1]) & 0x20000000 ^ uVar2;
  param_1[1] = uVar2;
  uVar2 = (uVar2 ^ param_2[1]) & 0x40000000 ^ uVar2;
  param_1[1] = uVar2;
  param_1[1] = (uVar2 ^ param_2[1]) & 0x7fffffff ^ param_2[1];
  param_1[2] = param_1[2] ^ (param_1[2] ^ param_2[2]) & 1;
  uVar2 = (param_2[2] ^ param_1[2]) & 2 ^ param_1[2];
  param_1[2] = uVar2;
  uVar2 = (uVar2 ^ param_2[2]) & 4 ^ uVar2;
  param_1[2] = uVar2;
  uVar2 = (uVar2 ^ param_2[2]) & 8 ^ uVar2;
  param_1[2] = uVar2;
  uVar2 = (uVar2 ^ param_2[2]) & 0x10 ^ uVar2;
  param_1[2] = uVar2;
  uVar2 = (uVar2 ^ param_2[2]) & 0x20 ^ uVar2;
  param_1[2] = uVar2;
  uVar2 = (uVar2 ^ param_2[2]) & 0x40 ^ uVar2;
  param_1[2] = uVar2;
  uVar2 = (uVar2 ^ param_2[2]) & 0x80 ^ uVar2;
  param_1[2] = uVar2;
  uVar2 = (uVar2 ^ param_2[2]) & 0x100 ^ uVar2;
  param_1[2] = uVar2;
  uVar2 = (uVar2 ^ param_2[2]) & 0x200 ^ uVar2;
  param_1[2] = uVar2;
  uVar2 = (uVar2 ^ param_2[2]) & 0x400 ^ uVar2;
  param_1[2] = uVar2;
  uVar2 = (uVar2 ^ param_2[2]) & 0x800 ^ uVar2;
  param_1[2] = uVar2;
  uVar2 = (uVar2 ^ param_2[2]) & 0x1000 ^ uVar2;
  param_1[2] = uVar2;
  uVar2 = (uVar2 ^ param_2[2]) & 0x2000 ^ uVar2;
  param_1[2] = uVar2;
  uVar2 = (uVar2 ^ param_2[2]) & 0x4000 ^ uVar2;
  param_1[2] = uVar2;
  uVar2 = (uVar2 ^ param_2[2]) & 0x8000 ^ uVar2;
  param_1[2] = uVar2;
  uVar2 = (uVar2 ^ param_2[2]) & 0x10000 ^ uVar2;
  param_1[2] = uVar2;
  uVar2 = (uVar2 ^ param_2[2]) & 0x20000 ^ uVar2;
  param_1[2] = uVar2;
  uVar2 = (uVar2 ^ param_2[2]) & 0x40000 ^ uVar2;
  param_1[2] = uVar2;
  uVar2 = (uVar2 ^ param_2[2]) & 0x80000 ^ uVar2;
  param_1[2] = uVar2;
  uVar2 = (uVar2 ^ param_2[2]) & 0x100000 ^ uVar2;
  param_1[2] = uVar2;
  uVar2 = (uVar2 ^ param_2[2]) & 0x200000 ^ uVar2;
  param_1[2] = uVar2;
  uVar2 = (uVar2 ^ param_2[2]) & 0x400000 ^ uVar2;
  param_1[2] = uVar2;
  uVar2 = (uVar2 ^ param_2[2]) & 0x800000 ^ uVar2;
  param_1[2] = uVar2;
  uVar2 = (uVar2 ^ param_2[2]) & 0x1000000 ^ uVar2;
  param_1[2] = uVar2;
  uVar2 = (uVar2 ^ param_2[2]) & 0x2000000 ^ uVar2;
  param_1[2] = uVar2;
  uVar2 = (uVar2 ^ param_2[2]) & 0x4000000 ^ uVar2;
  param_1[2] = uVar2;
  uVar2 = (uVar2 ^ param_2[2]) & 0x8000000 ^ uVar2;
  param_1[2] = uVar2;
  uVar2 = (uVar2 ^ param_2[2]) & 0x10000000 ^ uVar2;
  param_1[2] = uVar2;
  uVar2 = (uVar2 ^ param_2[2]) & 0x20000000 ^ uVar2;
  param_1[2] = uVar2;
  uVar2 = (uVar2 ^ param_2[2]) & 0x40000000 ^ uVar2;
  param_1[2] = uVar2;
  param_1[2] = (uVar2 ^ param_2[2]) & 0x7fffffff ^ param_2[2];
  param_1[3] = param_1[3] ^ (param_1[3] ^ param_2[3]) & 1;
  uVar2 = (param_1[3] ^ param_2[3]) & 2 ^ param_1[3];
  param_1[3] = uVar2;
  uVar2 = (uVar2 ^ param_2[3]) & 4 ^ uVar2;
  param_1[3] = uVar2;
  uVar2 = (uVar2 ^ param_2[3]) & 8 ^ uVar2;
  param_1[3] = uVar2;
  uVar2 = (uVar2 ^ param_2[3]) & 0x10 ^ uVar2;
  param_1[3] = uVar2;
  uVar2 = (uVar2 ^ param_2[3]) & 0x20 ^ uVar2;
  param_1[3] = uVar2;
  uVar2 = (uVar2 ^ param_2[3]) & 0x40 ^ uVar2;
  param_1[3] = uVar2;
  uVar2 = (uVar2 ^ param_2[3]) & 0x80 ^ uVar2;
  param_1[3] = uVar2;
  uVar2 = (uVar2 ^ param_2[3]) & 0x100 ^ uVar2;
  param_1[3] = uVar2;
  uVar2 = (uVar2 ^ param_2[3]) & 0x200 ^ uVar2;
  param_1[3] = uVar2;
  uVar2 = (uVar2 ^ param_2[3]) & 0x400 ^ uVar2;
  param_1[3] = uVar2;
  uVar2 = (uVar2 ^ param_2[3]) & 0x800 ^ uVar2;
  param_1[3] = uVar2;
  uVar2 = (uVar2 ^ param_2[3]) & 0x1000 ^ uVar2;
  param_1[3] = uVar2;
  uVar2 = (uVar2 ^ param_2[3]) & 0x2000 ^ uVar2;
  param_1[3] = uVar2;
  uVar2 = (uVar2 ^ param_2[3]) & 0x4000 ^ uVar2;
  param_1[3] = uVar2;
  uVar2 = (uVar2 ^ param_2[3]) & 0x8000 ^ uVar2;
  param_1[3] = uVar2;
  uVar2 = (uVar2 ^ param_2[3]) & 0x10000 ^ uVar2;
  param_1[3] = uVar2;
  uVar2 = (uVar2 ^ param_2[3]) & 0x20000 ^ uVar2;
  param_1[3] = uVar2;
  uVar2 = (uVar2 ^ param_2[3]) & 0x40000 ^ uVar2;
  param_1[3] = uVar2;
  uVar2 = (uVar2 ^ param_2[3]) & 0x80000 ^ uVar2;
  param_1[3] = uVar2;
  uVar2 = (uVar2 ^ param_2[3]) & 0x100000 ^ uVar2;
  param_1[3] = uVar2;
  uVar2 = (uVar2 ^ param_2[3]) & 0x200000 ^ uVar2;
  param_1[3] = uVar2;
  uVar2 = (uVar2 ^ param_2[3]) & 0x400000 ^ uVar2;
  param_1[3] = uVar2;
  uVar2 = (uVar2 ^ param_2[3]) & 0x800000 ^ uVar2;
  param_1[3] = uVar2;
  uVar2 = (uVar2 ^ param_2[3]) & 0x1000000 ^ uVar2;
  param_1[3] = uVar2;
  uVar2 = (uVar2 ^ param_2[3]) & 0x2000000 ^ uVar2;
  param_1[3] = uVar2;
  uVar2 = (uVar2 ^ param_2[3]) & 0x4000000 ^ uVar2;
  param_1[3] = uVar2;
  uVar2 = (uVar2 ^ param_2[3]) & 0x8000000 ^ uVar2;
  param_1[3] = uVar2;
  uVar2 = (uVar2 ^ param_2[3]) & 0x10000000 ^ uVar2;
  param_1[3] = uVar2;
  uVar2 = (uVar2 ^ param_2[3]) & 0x20000000 ^ uVar2;
  param_1[3] = uVar2;
  uVar2 = (uVar2 ^ param_2[3]) & 0x40000000 ^ uVar2;
  param_1[3] = uVar2;
  param_1[3] = (uVar2 ^ param_2[3]) & 0x7fffffff ^ param_2[3];
  param_1[4] = param_1[4] ^ (param_1[4] ^ param_2[4]) & 1;
  uVar2 = (param_1[4] ^ param_2[4]) & 2 ^ param_1[4];
  param_1[4] = uVar2;
  uVar2 = (uVar2 ^ param_2[4]) & 4 ^ uVar2;
  param_1[4] = uVar2;
  uVar2 = (uVar2 ^ param_2[4]) & 8 ^ uVar2;
  param_1[4] = uVar2;
  uVar2 = (uVar2 ^ param_2[4]) & 0x10 ^ uVar2;
  param_1[4] = uVar2;
  uVar2 = (uVar2 ^ param_2[4]) & 0x20 ^ uVar2;
  param_1[4] = uVar2;
  uVar2 = (uVar2 ^ param_2[4]) & 0x40 ^ uVar2;
  param_1[4] = uVar2;
  uVar2 = (uVar2 ^ param_2[4]) & 0x80 ^ uVar2;
  param_1[4] = uVar2;
  uVar2 = (uVar2 ^ param_2[4]) & 0x100 ^ uVar2;
  param_1[4] = uVar2;
  uVar2 = (uVar2 ^ param_2[4]) & 0x200 ^ uVar2;
  param_1[4] = uVar2;
  uVar2 = (uVar2 ^ param_2[4]) & 0x400 ^ uVar2;
  param_1[4] = uVar2;
  uVar2 = (uVar2 ^ param_2[4]) & 0x800 ^ uVar2;
  param_1[4] = uVar2;
  uVar2 = (uVar2 ^ param_2[4]) & 0x1000 ^ uVar2;
  param_1[4] = uVar2;
  uVar2 = (uVar2 ^ param_2[4]) & 0x2000 ^ uVar2;
  param_1[4] = uVar2;
  uVar2 = (uVar2 ^ param_2[4]) & 0x4000 ^ uVar2;
  param_1[4] = uVar2;
  uVar2 = (uVar2 ^ param_2[4]) & 0x8000 ^ uVar2;
  param_1[4] = uVar2;
  uVar2 = (uVar2 ^ param_2[4]) & 0x10000 ^ uVar2;
  param_1[4] = uVar2;
  uVar2 = (uVar2 ^ param_2[4]) & 0x20000 ^ uVar2;
  param_1[4] = uVar2;
  uVar2 = (uVar2 ^ param_2[4]) & 0x40000 ^ uVar2;
  param_1[4] = uVar2;
  uVar2 = (uVar2 ^ param_2[4]) & 0x80000 ^ uVar2;
  param_1[4] = uVar2;
  uVar2 = (uVar2 ^ param_2[4]) & 0x100000 ^ uVar2;
  param_1[4] = uVar2;
  uVar2 = (uVar2 ^ param_2[4]) & 0x200000 ^ uVar2;
  param_1[4] = uVar2;
  uVar2 = (uVar2 ^ param_2[4]) & 0x400000 ^ uVar2;
  param_1[4] = uVar2;
  uVar2 = (uVar2 ^ param_2[4]) & 0x800000 ^ uVar2;
  param_1[4] = uVar2;
  uVar2 = (uVar2 ^ param_2[4]) & 0x1000000 ^ uVar2;
  param_1[4] = uVar2;
  uVar2 = (uVar2 ^ param_2[4]) & 0x2000000 ^ uVar2;
  param_1[4] = uVar2;
  uVar2 = (uVar2 ^ param_2[4]) & 0x4000000 ^ uVar2;
  param_1[4] = uVar2;
  uVar2 = (uVar2 ^ param_2[4]) & 0x8000000 ^ uVar2;
  param_1[4] = uVar2;
  uVar2 = (uVar2 ^ param_2[4]) & 0x10000000 ^ uVar2;
  param_1[4] = uVar2;
  uVar2 = (uVar2 ^ param_2[4]) & 0x20000000 ^ uVar2;
  param_1[4] = uVar2;
  uVar2 = (uVar2 ^ param_2[4]) & 0x40000000 ^ uVar2;
  param_1[4] = uVar2;
  param_1[4] = (uVar2 ^ param_2[4]) & 0x7fffffff ^ param_2[4];
  param_1[5] = param_1[5] ^ (param_1[5] ^ param_2[5]) & 1;
  uVar2 = (param_1[5] ^ param_2[5]) & 2 ^ param_1[5];
  param_1[5] = uVar2;
  uVar2 = (param_2[5] ^ uVar2) & 4 ^ uVar2;
  param_1[5] = uVar2;
  uVar2 = (param_2[5] ^ uVar2) & 8 ^ uVar2;
  param_1[5] = uVar2;
  uVar2 = (param_2[5] ^ uVar2) & 0x10 ^ uVar2;
  param_1[5] = uVar2;
  uVar2 = (param_2[5] ^ uVar2) & 0x20 ^ uVar2;
  param_1[5] = uVar2;
  uVar2 = (param_2[5] ^ uVar2) & 0x40 ^ uVar2;
  param_1[5] = uVar2;
  uVar2 = (param_2[5] ^ uVar2) & 0x80 ^ uVar2;
  param_1[5] = uVar2;
  uVar2 = (param_2[5] ^ uVar2) & 0x100 ^ uVar2;
  param_1[5] = uVar2;
  uVar2 = (param_2[5] ^ uVar2) & 0x200 ^ uVar2;
  param_1[5] = uVar2;
  uVar2 = (param_2[5] ^ uVar2) & 0x400 ^ uVar2;
  param_1[5] = uVar2;
  uVar2 = (param_2[5] ^ uVar2) & 0x800 ^ uVar2;
  param_1[5] = uVar2;
  uVar2 = (param_2[5] ^ uVar2) & 0x1000 ^ uVar2;
  param_1[5] = uVar2;
  uVar2 = (param_2[5] ^ uVar2) & 0x2000 ^ uVar2;
  param_1[5] = uVar2;
  uVar2 = (param_2[5] ^ uVar2) & 0x4000 ^ uVar2;
  param_1[5] = uVar2;
  uVar2 = (param_2[5] ^ uVar2) & 0x8000 ^ uVar2;
  param_1[5] = uVar2;
  uVar2 = (param_2[5] ^ uVar2) & 0x10000 ^ uVar2;
  param_1[5] = uVar2;
  uVar2 = (param_2[5] ^ uVar2) & 0x20000 ^ uVar2;
  param_1[5] = uVar2;
  uVar2 = (param_2[5] ^ uVar2) & 0x40000 ^ uVar2;
  param_1[5] = uVar2;
  uVar2 = (param_2[5] ^ uVar2) & 0x80000 ^ uVar2;
  param_1[5] = uVar2;
  uVar2 = (param_2[5] ^ uVar2) & 0x100000 ^ uVar2;
  param_1[5] = uVar2;
  uVar2 = (param_2[5] ^ uVar2) & 0x200000 ^ uVar2;
  param_1[5] = uVar2;
  uVar2 = (param_2[5] ^ uVar2) & 0x400000 ^ uVar2;
  param_1[5] = uVar2;
  uVar2 = (param_2[5] ^ uVar2) & 0x800000 ^ uVar2;
  param_1[5] = uVar2;
  uVar2 = (param_2[5] ^ uVar2) & 0x1000000 ^ uVar2;
  param_1[5] = uVar2;
  uVar2 = (param_2[5] ^ uVar2) & 0x2000000 ^ uVar2;
  param_1[5] = uVar2;
  uVar2 = (param_2[5] ^ uVar2) & 0x4000000 ^ uVar2;
  param_1[5] = uVar2;
  uVar2 = (param_2[5] ^ uVar2) & 0x8000000 ^ uVar2;
  param_1[5] = uVar2;
  uVar2 = (param_2[5] ^ uVar2) & 0x10000000 ^ uVar2;
  param_1[5] = uVar2;
  uVar2 = (param_2[5] ^ uVar2) & 0x20000000 ^ uVar2;
  param_1[5] = uVar2;
  uVar2 = (param_2[5] ^ uVar2) & 0x40000000 ^ uVar2;
  param_1[5] = uVar2;
  param_1[5] = (param_2[5] ^ uVar2) & 0x7fffffff ^ param_2[5];
  param_1[6] = param_1[6] ^ (param_1[6] ^ param_2[6]) & 1;
  uVar2 = (param_1[6] ^ param_2[6]) & 2 ^ param_1[6];
  param_1[6] = uVar2;
  uVar2 = (param_2[6] ^ uVar2) & 4 ^ uVar2;
  param_1[6] = uVar2;
  uVar2 = (param_2[6] ^ uVar2) & 8 ^ uVar2;
  param_1[6] = uVar2;
  uVar2 = (param_2[6] ^ uVar2) & 0x10 ^ uVar2;
  param_1[6] = uVar2;
  uVar2 = (param_2[6] ^ uVar2) & 0x20 ^ uVar2;
  param_1[6] = uVar2;
  uVar2 = (param_2[6] ^ uVar2) & 0x40 ^ uVar2;
  param_1[6] = uVar2;
  uVar2 = (param_2[6] ^ uVar2) & 0x80 ^ uVar2;
  param_1[6] = uVar2;
  uVar2 = (param_2[6] ^ uVar2) & 0x100 ^ uVar2;
  param_1[6] = uVar2;
  param_1[6] = (param_2[6] ^ uVar2) & 0x200 ^ uVar2;
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  uVar1 = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0xe) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x12) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x16);
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x16) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x1a);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x1a) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x1e);
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x1e) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x22);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x22) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x26);
  *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
  *(undefined8 *)(param_1 + 0x26) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x2a);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x2a) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x2e);
  *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
  *(undefined8 *)(param_1 + 0x2e) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x32);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x32) = uVar1;
  param_1[0x34] = param_2[0x34];
  uVar1 = *(undefined8 *)(param_2 + 0x3a);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x3a) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x3e);
  *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_2 + 0x3c);
  *(undefined8 *)(param_1 + 0x3e) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x42);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x42) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x46);
  *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(param_2 + 0x44);
  *(undefined8 *)(param_1 + 0x46) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x4a);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x4a) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x4e);
  *(undefined8 *)(param_1 + 0x4c) = *(undefined8 *)(param_2 + 0x4c);
  *(undefined8 *)(param_1 + 0x4e) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x52);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x52) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x56);
  *(undefined8 *)(param_1 + 0x54) = *(undefined8 *)(param_2 + 0x54);
  *(undefined8 *)(param_1 + 0x56) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x5a);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x5a) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x5e);
  *(undefined8 *)(param_1 + 0x5c) = *(undefined8 *)(param_2 + 0x5c);
  *(undefined8 *)(param_1 + 0x5e) = uVar1;
  param_1[0x60] = param_2[0x60];
  param_1[0x61] = param_2[0x61];
  param_1[0x62] = param_2[0x62];
  param_1[99] = param_2[99];
  param_1[100] = param_2[100];
  param_1[0x65] = param_2[0x65];
  param_1[0x66] = param_2[0x66];
  param_1[0x67] = param_2[0x67];
  uVar1 = *(undefined8 *)(param_2 + 0x6a);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x6a) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x6e);
  *(undefined8 *)(param_1 + 0x6c) = *(undefined8 *)(param_2 + 0x6c);
  *(undefined8 *)(param_1 + 0x6e) = uVar1;
  param_1[0x70] = param_2[0x70];
  param_1[0x71] = param_2[0x71];
  param_1[0x72] = param_2[0x72];
  uVar1 = *(undefined8 *)(param_2 + 0x75);
  *(undefined8 *)(param_1 + 0x73) = *(undefined8 *)(param_2 + 0x73);
  *(undefined8 *)(param_1 + 0x75) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x79);
  *(undefined8 *)(param_1 + 0x77) = *(undefined8 *)(param_2 + 0x77);
  *(undefined8 *)(param_1 + 0x79) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x7d);
  *(undefined8 *)(param_1 + 0x7b) = *(undefined8 *)(param_2 + 0x7b);
  *(undefined8 *)(param_1 + 0x7d) = uVar1;
  param_1[0x7f] = param_2[0x7f];
  param_1[0x80] = param_2[0x80];
  param_1[0x81] = param_2[0x81];
  param_1[0x82] = param_2[0x82];
  uVar1 = *(undefined8 *)(param_2 + 0x85);
  *(undefined8 *)(param_1 + 0x83) = *(undefined8 *)(param_2 + 0x83);
  *(undefined8 *)(param_1 + 0x85) = uVar1;
  param_1[0x87] = param_2[0x87];
  param_1[0x88] = param_2[0x88];
  *(char *)(param_1 + 0x89) = (char)param_2[0x89];
  param_1[0x8a] = param_2[0x8a];
  param_1[0x8b] = param_2[0x8b];
  param_1[0x8c] = param_2[0x8c];
  param_1[0x8d] = param_2[0x8d];
  param_1[0x8e] = param_2[0x8e];
  param_1[0x8f] = param_2[0x8f];
  param_1[0x90] = param_2[0x90];
  param_1[0x91] = param_2[0x91];
  param_1[0x92] = param_2[0x92];
  uVar1 = *(undefined8 *)(param_2 + 0x95);
  *(undefined8 *)(param_1 + 0x93) = *(undefined8 *)(param_2 + 0x93);
  *(undefined8 *)(param_1 + 0x95) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x99);
  *(undefined8 *)(param_1 + 0x97) = *(undefined8 *)(param_2 + 0x97);
  *(undefined8 *)(param_1 + 0x99) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x9d);
  *(undefined8 *)(param_1 + 0x9b) = *(undefined8 *)(param_2 + 0x9b);
  *(undefined8 *)(param_1 + 0x9d) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0xa1);
  *(undefined8 *)(param_1 + 0x9f) = *(undefined8 *)(param_2 + 0x9f);
  *(undefined8 *)(param_1 + 0xa1) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0xa5);
  *(undefined8 *)(param_1 + 0xa3) = *(undefined8 *)(param_2 + 0xa3);
  *(undefined8 *)(param_1 + 0xa5) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0xa9);
  *(undefined8 *)(param_1 + 0xa7) = *(undefined8 *)(param_2 + 0xa7);
  *(undefined8 *)(param_1 + 0xa9) = uVar1;
  *(undefined8 *)(param_1 + 0xac) = *(undefined8 *)(param_2 + 0xac);
  param_1[0xae] = param_2[0xae];
  *(undefined8 *)(param_1 + 0xaf) = *(undefined8 *)(param_2 + 0xaf);
  *(undefined8 *)(param_1 + 0xb1) = *(undefined8 *)(param_2 + 0xb1);
  param_1[0xb3] = param_2[0xb3];
  param_1[0xb4] = param_2[0xb4];
  param_1[0xb5] = param_2[0xb5];
  param_1[0xb6] = param_2[0xb6];
  param_1[0xb7] = param_2[0xb7];
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  param_1[0xba] = param_2[0xba];
  uVar1 = *(undefined8 *)(param_2 + 0xbd);
  *(undefined8 *)(param_1 + 0xbb) = *(undefined8 *)(param_2 + 0xbb);
  *(undefined8 *)(param_1 + 0xbd) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0xc1);
  *(undefined8 *)(param_1 + 0xbf) = *(undefined8 *)(param_2 + 0xbf);
  *(undefined8 *)(param_1 + 0xc1) = uVar1;
  param_1[0xc3] = param_2[0xc3];
  param_1[0xc4] = param_2[0xc4];
  *(undefined8 *)(param_1 + 0xc6) = *(undefined8 *)(param_2 + 0xc6);
  param_1[200] = param_2[200];
  param_1[0xc9] = param_2[0xc9];
  param_1[0xca] = param_2[0xca];
  param_1[0xcb] = param_2[0xcb];
  param_1[0xcc] = param_2[0xcc];
  param_1[0xcd] = param_2[0xcd];
  param_1[0xce] = param_2[0xce];
  *(char *)(param_1 + 0xcf) = (char)param_2[0xcf];
  param_1[0xd0] = param_2[0xd0];
  param_1[0xd1] = param_2[0xd1];
  param_1[0xd2] = param_2[0xd2];
  param_1[0xd3] = param_2[0xd3];
  param_1[0xd4] = param_2[0xd4];
  param_1[0xd5] = param_2[0xd5];
  param_1[0xd6] = param_2[0xd6];
  param_1[0xd7] = param_2[0xd7];
  param_1[0xd8] = param_2[0xd8];
  param_1[0xd9] = param_2[0xd9];
  param_1[0xda] = param_2[0xda];
  param_1[0xdb] = param_2[0xdb];
  uVar1 = *(undefined8 *)(param_2 + 0xde);
  *(undefined8 *)(param_1 + 0xdc) = *(undefined8 *)(param_2 + 0xdc);
  *(undefined8 *)(param_1 + 0xde) = uVar1;
  param_1[0xe0] = param_2[0xe0];
  param_1[0xe1] = param_2[0xe1];
  *(undefined8 *)(param_1 + 0xe2) = *(undefined8 *)(param_2 + 0xe2);
  uVar1 = *(undefined8 *)(param_2 + 0xe6);
  *(undefined8 *)(param_1 + 0xe4) = *(undefined8 *)(param_2 + 0xe4);
  *(undefined8 *)(param_1 + 0xe6) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0xea);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
  *(undefined8 *)(param_1 + 0xea) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0xee);
  *(undefined8 *)(param_1 + 0xec) = *(undefined8 *)(param_2 + 0xec);
  *(undefined8 *)(param_1 + 0xee) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0xf2);
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_2 + 0xf0);
  *(undefined8 *)(param_1 + 0xf2) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0xf6);
  *(undefined8 *)(param_1 + 0xf4) = *(undefined8 *)(param_2 + 0xf4);
  *(undefined8 *)(param_1 + 0xf6) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0xfa);
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_2 + 0xf8);
  *(undefined8 *)(param_1 + 0xfa) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0xfe);
  *(undefined8 *)(param_1 + 0xfc) = *(undefined8 *)(param_2 + 0xfc);
  *(undefined8 *)(param_1 + 0xfe) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x102);
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_2 + 0x100);
  *(undefined8 *)(param_1 + 0x102) = uVar1;
  param_1[0x104] = param_2[0x104];
  param_1[0x105] = param_2[0x105];
  param_1[0x106] = param_2[0x106];
  param_1[0x107] = param_2[0x107];
  param_1[0x108] = param_2[0x108];
  param_1[0x109] = param_2[0x109];
  param_1[0x10a] = param_2[0x10a];
  param_1[0x10b] = param_1[0x10b] ^ (param_2[0x10b] ^ param_1[0x10b]) & 1;
  param_1[0x10c] = param_2[0x10c];
  param_1[0x10d] = param_2[0x10d];
  param_1[0x10e] = param_2[0x10e];
  param_1[0x10f] = param_2[0x10f];
  param_1[0x110] = param_2[0x110];
  param_1[0x111] = param_2[0x111];
  param_1[0x112] = param_2[0x112];
  param_1[0x113] = param_2[0x113];
  param_1[0x114] = param_2[0x114];
  param_1[0x115] = param_1[0x115] ^ (param_2[0x115] ^ param_1[0x115]) & 1;
  param_1[0x116] = param_2[0x116];
  param_1[0x117] = param_2[0x117];
  param_1[0x118] = param_2[0x118];
  param_1[0x119] = param_2[0x119];
  param_1[0x11a] = param_2[0x11a];
  param_1[0x11b] = param_2[0x11b];
  param_1[0x11c] = param_2[0x11c];
  param_1[0x11d] = param_2[0x11d];
  param_1[0x11e] = param_2[0x11e];
  param_1[0x11f] = param_2[0x11f];
  uVar1 = *(undefined8 *)(param_2 + 0x122);
  *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_2 + 0x120);
  *(undefined8 *)(param_1 + 0x122) = uVar1;
  param_1[0x124] = param_2[0x124];
  uVar1 = *(undefined8 *)(param_2 + 0x127);
  *(undefined8 *)(param_1 + 0x125) = *(undefined8 *)(param_2 + 0x125);
  *(undefined8 *)(param_1 + 0x127) = uVar1;
  param_1[0x129] = param_2[0x129];
  uVar1 = *(undefined8 *)(param_2 + 300);
  *(undefined8 *)(param_1 + 0x12a) = *(undefined8 *)(param_2 + 0x12a);
  *(undefined8 *)(param_1 + 300) = uVar1;
  param_1[0x12e] = param_2[0x12e];
  param_1[0x12f] = param_2[0x12f];
  *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_2 + 0x130);
  *(undefined8 *)(param_1 + 0x132) = *(undefined8 *)(param_2 + 0x132);
  param_1[0x134] = param_2[0x134];
  *(char *)(param_1 + 0x135) = (char)param_2[0x135];
  param_1[0x136] = param_1[0x136] ^ (param_2[0x136] ^ param_1[0x136]) & 1;
  param_1[0x137] = param_2[0x137];
  param_1[0x138] = param_2[0x138];
  param_1[0x139] = param_2[0x139];
  param_1[0x13a] = param_2[0x13a];
  param_1[0x13b] = param_2[0x13b];
  param_1[0x13c] = param_2[0x13c];
  param_1[0x13d] = param_2[0x13d];
  param_1[0x13e] = param_2[0x13e];
  param_1[0x13f] = param_2[0x13f];
  param_1[0x140] = param_2[0x140];
  param_1[0x141] = param_2[0x141];
  param_1[0x142] = param_2[0x142];
  param_1[0x143] = param_2[0x143];
  *(undefined8 *)(param_1 + 0x144) = *(undefined8 *)(param_2 + 0x144);
  param_1[0x146] = param_2[0x146];
  param_1[0x147] = param_2[0x147];
  param_1[0x148] = param_2[0x148];
  param_1[0x149] = param_2[0x149];
  param_1[0x14a] = param_2[0x14a];
  param_1[0x14b] = param_2[0x14b];
  param_1[0x14c] = param_2[0x14c];
  param_1[0x14d] = param_2[0x14d];
  param_1[0x14e] = param_2[0x14e];
  param_1[0x14f] = param_2[0x14f];
  param_1[0x150] = param_2[0x150];
  param_1[0x151] = param_2[0x151];
  param_1[0x152] = param_2[0x152];
  param_1[0x153] = param_2[0x153];
  param_1[0x154] = param_2[0x154];
  param_1[0x155] = param_2[0x155];
  param_1[0x156] = param_2[0x156];
  param_1[0x157] = param_2[0x157];
  param_1[0x158] = param_2[0x158];
  param_1[0x159] = param_2[0x159];
  param_1[0x15a] = param_2[0x15a];
  param_1[0x15b] = param_2[0x15b];
  param_1[0x15c] = param_2[0x15c];
  param_1[0x15d] = param_2[0x15d];
  param_1[0x15e] = param_2[0x15e];
  param_1[0x15f] = param_2[0x15f];
  param_1[0x160] = param_2[0x160];
  param_1[0x161] = param_2[0x161];
  param_1[0x162] = param_2[0x162];
  param_1[0x163] = param_2[0x163];
  param_1[0x164] = param_2[0x164];
  param_1[0x165] = param_2[0x165];
  param_1[0x166] = param_1[0x166] ^ (param_2[0x166] ^ param_1[0x166]) & 1;
  param_1[0x167] = param_2[0x167];
  param_1[0x168] = param_2[0x168];
  param_1[0x169] = param_2[0x169];
  param_1[0x16a] = param_2[0x16a];
  param_1[0x16b] = param_2[0x16b];
  param_1[0x16c] = param_2[0x16c];
  param_1[0x16d] = param_2[0x16d];
  param_1[0x16e] = param_2[0x16e];
  param_1[0x16f] = param_2[0x16f];
  param_1[0x170] = param_2[0x170];
  param_1[0x171] = param_2[0x171];
  param_1[0x172] = param_2[0x172];
  *(undefined8 *)(param_1 + 0x173) = *(undefined8 *)(param_2 + 0x173);
  param_1[0x176] = 0;
  param_1[0x177] = 0;
  *(undefined8 *)(param_1 + 0x176) = *(undefined8 *)(param_2 + 0x176);
  param_2[0x176] = 0;
  param_2[0x177] = 0;
  param_1[0x178] = param_2[0x178];
  param_1[0x179] = param_2[0x179];
  param_2[0x178] = 0;
  param_2[0x179] = 0;
  param_1[0x17a] = 0;
  param_1[0x17b] = 0;
  *(undefined8 *)(param_1 + 0x17a) = *(undefined8 *)(param_2 + 0x17a);
  param_2[0x17a] = 0;
  param_2[0x17b] = 0;
  param_1[0x17c] = param_2[0x17c];
  param_1[0x17d] = param_2[0x17d];
  param_2[0x17c] = 0;
  param_2[0x17d] = 0;
  return param_1;
}



// FUNCTION 140f18420 FUN_140f18420 body=122 status=ok
// SIG undefined FUN_140f18420(void)

undefined1 * FUN_140f18420(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  FText::FText(param_1 + 8,param_2 + 8);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  return param_1;
}



// FUNCTION 140f184a0 FUN_140f184a0 body=161 status=ok
// SIG undefined FUN_140f184a0(void)

void FUN_140f184a0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x70);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x60);
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
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
  FUN_14099a700(param_1 + 0x28);
  if (*(char *)(param_1 + 0x24) != '\0') {
    *(undefined1 *)(param_1 + 0x24) = 0;
  }
  if (*(char *)(param_1 + 0x18) != '\0') {
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  if (*(char *)(param_1 + 0xc) != '\0') {
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 140f18550 FUN_140f18550 body=1427 status=ok
// SIG undefined FUN_140f18550(void)

void FUN_140f18550(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  int *piVar3;
  wchar_t *pwVar4;
  ulonglong uVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  int *piVar15;
  wchar_t *pwVar16;
  bool bVar17;
  undefined8 local_res8;
  ulonglong local_res10;
  undefined8 local_38;
  undefined8 uStack_30;
  
  lVar7 = FWeakObjectPtr::Get(*param_1 + 0x58c);
  if (lVar7 == 0) {
    return;
  }
  lVar8 = FUN_14145f370();
  if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
      lVar8 + 0x88)) {
    bVar17 = false;
  }
  else {
    bVar17 = true;
  }
  if (!bVar17) {
    return;
  }
  uVar9 = FUN_1414b0d60();
  pwVar10 = (wchar_t *)AGameStateBase::OnRep_GameModeClass(lVar7,uVar9);
  pwVar16 = (wchar_t *)0x0;
  if (pwVar10 != (wchar_t *)0x0) {
    lVar7 = FUN_1414b0d60();
    if ((*(int *)(*(longlong *)(pwVar10 + 8) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar10 + 8) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar17 = false;
    }
    else {
      bVar17 = true;
    }
    if (bVar17) goto LAB_140f18609;
  }
  pwVar10 = pwVar16;
LAB_140f18609:
  FWeakObjectPtr::operator=(*param_1 + 0xdb0,pwVar10);
  cVar6 = FWeakObjectPtr::IsValid(*param_1 + 0xdb0);
  if (cVar6 != '\0') {
    pwVar11 = _guard_xfg_dispatch_icall_nop
                        (L"&UGFxGuardianRankMenu::HandleGuardianRankChanged",L"::");
    pwVar10 = pwVar16;
    while (pwVar4 = pwVar11, pwVar4 != (wchar_t *)0x0) {
      pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
      pwVar10 = pwVar4;
    }
    FName::FName(&local_res10,pwVar10 + 2,1);
    lVar8 = FWeakObjectPtr::Get(*param_1 + 0xdb0);
    uVar5 = local_res10;
    lVar7 = *param_1;
    plVar1 = (longlong *)(lVar8 + 0x210);
    FWeakObjectPtr::operator=(&local_38,0);
    uStack_30 = 0;
    FWeakObjectPtr::operator=(&local_38,lVar7);
    uStack_30 = uVar5;
    local_res8 = 0;
    if ((uVar5 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_38), lVar7 != 0)) {
      UObject::FindFunction(lVar7,uStack_30);
    }
    piVar3 = (int *)*plVar1;
    iVar2 = *(int *)(lVar8 + 0x218);
    uVar9 = local_38;
    for (piVar15 = piVar3; local_38 = (code *)uVar9, piVar15 != piVar3 + (longlong)iVar2 * 4;
        piVar15 = piVar15 + 4) {
      local_38._0_4_ = (int)uVar9;
      if (((*piVar15 == (int)local_38) &&
          (local_38._4_4_ = (int)((ulonglong)uVar9 >> 0x20), bVar17 = piVar15[1] == local_38._4_4_,
          bVar17)) ||
         ((cVar6 = FWeakObjectPtr::IsValid(piVar15), cVar6 == '\0' &&
          (cVar6 = FWeakObjectPtr::IsValid(&local_38), cVar6 == '\0')))) {
        bVar17 = true;
      }
      else {
        bVar17 = false;
      }
      if ((bVar17) && (*(ulonglong *)(piVar15 + 2) == uStack_30)) {
        bVar17 = true;
      }
      else {
        bVar17 = false;
      }
      if (bVar17) {
        if ((int)((longlong)piVar15 - (longlong)piVar3 >> 4) != -1) goto LAB_140f18793;
        break;
      }
      uVar9 = local_38;
    }
    iVar2 = *(int *)(lVar8 + 0x218);
    *(int *)(lVar8 + 0x218) = iVar2 + 1;
    if (*(int *)(lVar8 + 0x21c) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    puVar14 = (undefined4 *)((longlong)iVar2 * 0x10 + *plVar1);
    *puVar14 = (int)local_38;
    puVar14[1] = local_38._4_4_;
    *(ulonglong *)(puVar14 + 2) = uStack_30;
LAB_140f18793:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
    uStack_30 = uStack_30 & 0xffffffff00000000;
    local_38 = FUN_140f2ce80;
    pwVar11 = _guard_xfg_dispatch_icall_nop
                        (L"&UGFxGuardianRankMenu::HandleGuardianTokensAdded",L"::");
    pwVar10 = pwVar16;
    while (pwVar4 = pwVar11, pwVar4 != (wchar_t *)0x0) {
      pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
      pwVar10 = pwVar4;
    }
    FName::FName(&local_res8,pwVar10 + 2,1);
    lVar7 = FWeakObjectPtr::Get(*param_1 + 0xdb0);
    FUN_1407260e0(lVar7 + 0x220,*param_1,&local_38,local_res8);
    uStack_30 = uStack_30 & 0xffffffff00000000;
    local_38 = FUN_140f2cac0;
    pwVar11 = _guard_xfg_dispatch_icall_nop
                        (L"&UGFxGuardianRankMenu::HandleGuardianExperienceAdded",L"::");
    pwVar10 = pwVar16;
    while (pwVar4 = pwVar11, pwVar4 != (wchar_t *)0x0) {
      pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
      pwVar10 = pwVar4;
    }
    FName::FName(&local_res8,pwVar10 + 2,1);
    lVar7 = FWeakObjectPtr::Get(*param_1 + 0xdb0);
    FUN_1407260e0(lVar7 + 0x230,*param_1,&local_38,local_res8);
    local_38 = FUN_140f2cbe0;
    uStack_30 = uStack_30 & 0xffffffff00000000;
    lVar8 = FWeakObjectPtr::Get(*param_1 + 0xdb0);
    lVar7 = *param_1;
    plVar1 = (longlong *)(lVar8 + 0x240);
    plVar12 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar12 != (longlong *)0x0) {
      *plVar12 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar12 + 1,lVar7);
      *(int *)(plVar12 + 2) = (int)local_38;
      *(int *)((longlong)plVar12 + 0x14) = local_38._4_4_;
      *(undefined4 *)(plVar12 + 3) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)plVar12 + 0x1c) = uStack_30._4_4_;
      lVar7 = FDelegateHandle::GenerateNewID();
      plVar12[5] = lVar7;
      *plVar12 = (longlong)&PTR_FUN_143f77bd0;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
      (**(code **)(*plVar12 + 0x20))(plVar12,&local_res8);
      iVar2 = *(int *)(lVar8 + 0x248);
      *(int *)(lVar8 + 0x248) = iVar2 + 1;
      if (*(int *)(lVar8 + 0x24c) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
      }
      puVar13 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
      *puVar13 = plVar12;
      *(undefined4 *)(puVar13 + 1) = 3;
    }
    pwVar10 = _guard_xfg_dispatch_icall_nop
                        (L"&ThisClass::HandleGuardianRankPerkEnableChanged",L"::");
    while (pwVar11 = pwVar10, pwVar11 != (wchar_t *)0x0) {
      pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar11 + 1,L"::");
      pwVar16 = pwVar11;
    }
    FName::FName(&local_res10,pwVar16 + 2,1);
    lVar8 = FWeakObjectPtr::Get(*param_1 + 0xdb0);
    lVar7 = *param_1;
    plVar1 = (longlong *)(lVar8 + 0x270);
    FWeakObjectPtr::operator=(&local_38,0);
    uStack_30 = 0;
    FWeakObjectPtr::operator=(&local_38,lVar7);
    uStack_30 = local_res10;
    local_res8 = 0;
    if ((local_res10 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_38), lVar7 != 0)) {
      UObject::FindFunction(lVar7,uStack_30);
    }
    piVar3 = (int *)*plVar1;
    iVar2 = *(int *)(lVar8 + 0x278);
    for (piVar15 = piVar3; piVar15 != piVar3 + (longlong)iVar2 * 4; piVar15 = piVar15 + 4) {
      if (((*piVar15 == (int)local_38) &&
          (local_38._4_4_ = (int)((ulonglong)local_38 >> 0x20),
          bVar17 = piVar15[1] == local_38._4_4_, bVar17)) ||
         ((cVar6 = FWeakObjectPtr::IsValid(piVar15), cVar6 == '\0' &&
          (cVar6 = FWeakObjectPtr::IsValid(&local_38), cVar6 == '\0')))) {
        bVar17 = true;
      }
      else {
        bVar17 = false;
      }
      if ((bVar17) && (*(ulonglong *)(piVar15 + 2) == uStack_30)) {
        bVar17 = true;
      }
      else {
        bVar17 = false;
      }
      if (bVar17) {
        if ((int)((longlong)piVar15 - (longlong)piVar3 >> 4) != -1) goto LAB_140f18ac3;
        break;
      }
    }
    iVar2 = *(int *)(lVar8 + 0x278);
    *(int *)(lVar8 + 0x278) = iVar2 + 1;
    if (*(int *)(lVar8 + 0x27c) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    puVar14 = (undefined4 *)((longlong)iVar2 * 0x10 + *plVar1);
    *puVar14 = (int)local_38;
    puVar14[1] = local_38._4_4_;
    *(ulonglong *)(puVar14 + 2) = uStack_30;
LAB_140f18ac3:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
  }
  return;
}



// FUNCTION 140f18af0 FUN_140f18af0 body=411 status=ok
// SIG undefined FUN_140f18af0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f18af0(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined4 local_c0 [2];
  undefined1 *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  lVar1 = FUN_1416f8720(*(undefined4 *)(param_1 + 1));
  if (lVar1 != 0) {
    plVar2 = (longlong *)FUN_1416f8720(*(undefined4 *)(param_1 + 1));
    lVar1 = (**(code **)(*plVar2 + 0x340))(plVar2);
    if (*(char *)(lVar1 + 0x54) != '\0') {
      plVar2 = (longlong *)FUN_1416f8720(*(undefined4 *)(param_1 + 1));
      (**(code **)(*plVar2 + 0x378))(plVar2);
      local_c8 = *param_1;
      local_c0[0] = 0xffffffff;
      uVar3 = FUN_1416f8720(*(undefined4 *)(param_1 + 1));
      FUN_14170c210(local_c0,uVar3);
      local_88 = (longlong *)0x0;
      local_78 = 0;
      puVar4 = (undefined8 *)FUN_140438ef0(0x18,local_a8);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = &PTR_FUN_144266c70;
        puVar4[1] = local_c8;
        *(undefined4 *)(puVar4 + 2) = local_c0[0];
        local_c0[0] = 0xffffffff;
      }
      local_b8[0] = &LAB_140f26ae0;
      uVar3 = FUN_1420849a0(*param_1,local_68,local_b8);
      FUN_14208c260(*param_1,uVar3);
      if (local_28 != 0) {
        plVar2 = local_58;
        if (local_38 != (longlong *)0x0) {
          plVar2 = local_38;
        }
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2,0);
        }
      }
      if (local_38 != (longlong *)0x0) {
        FMemory::Free();
      }
      if (local_78 != 0) {
        plVar2 = local_a8;
        if (local_88 != (longlong *)0x0) {
          plVar2 = local_88;
        }
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2,0);
        }
      }
      if (local_88 != (longlong *)0x0) {
        FMemory::Free();
      }
      FUN_1416f8340(local_c0[0]);
    }
  }
  return;
}



// FUNCTION 140f18c90 FUN_140f18c90 body=359 status=ok
// SIG undefined FUN_140f18c90(void)

undefined4 FUN_140f18c90(longlong *param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  BOOL BVar4;
  int *piVar5;
  longlong lVar6;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  bool bVar11;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(*param_1 + 0xe58);
  BVar4 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar4 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  lVar3 = *param_1;
  plVar1 = param_1 + 1;
  lVar6 = (longlong)*(int *)(lVar3 + 0xe50);
  if (*(int *)(lVar3 + 0xe50) != 0) {
    iVar10 = 0;
    bVar11 = **(int **)(lVar3 + 0xe48) != (int)*plVar1;
    lVar9 = 0;
    iVar7 = 0;
    do {
      lVar9 = lVar9 + 1;
      iVar8 = iVar7 + 1;
      if (lVar9 < lVar6) {
        piVar5 = (int *)(*(longlong *)(lVar3 + 0xe48) + lVar9 * 4);
        do {
          if (bVar11 != (*piVar5 != (int)*plVar1)) break;
          iVar8 = iVar8 + 1;
          lVar9 = lVar9 + 1;
          piVar5 = piVar5 + 1;
        } while (lVar9 < lVar6);
      }
      if (bVar11 != false) {
        if (iVar10 != iVar7) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(lVar3 + 0xe48) + (longlong)iVar10 * 4),
                     (void *)(*(longlong *)(lVar3 + 0xe48) + (longlong)iVar7 * 4),
                     (longlong)(iVar8 - iVar7) << 2);
        }
        iVar10 = iVar10 + (iVar8 - iVar7);
      }
      bVar11 = (bool)(bVar11 ^ 1);
      iVar7 = iVar8;
    } while (lVar9 < lVar6);
    *(int *)(lVar3 + 0xe50) = iVar10;
  }
  LeaveCriticalSection(lpCriticalSection);
  FUN_140f27170(*param_1,1,4,plVar1);
  lVar3 = *param_1;
  LOCK();
  *(undefined4 *)(lVar3 + 0xfb4) = 1;
  UNLOCK();
  LOCK();
  *(undefined4 *)(lVar3 + 0x9f0) = 1;
  UNLOCK();
  LOCK();
  uVar2 = *(undefined4 *)(lVar3 + 0x588);
  *(undefined4 *)(lVar3 + 0x588) = 1;
  UNLOCK();
  LOCK();
  *(undefined4 *)(lVar3 + 0x9ec) = 1;
  UNLOCK();
  return uVar2;
}



// FUNCTION 140f18e00 FUN_140f18e00 body=638 status=ok
// SIG undefined FUN_140f18e00(void)

void FUN_140f18e00(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  bool bVar5;
  longlong *plVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined4 local_48;
  undefined4 local_44;
  longlong *local_38;
  undefined4 local_30;
  longlong local_28;
  
  lVar8 = FWeakObjectPtr::Get(*param_1 + 0x594);
  if (lVar8 != 0) {
    lVar9 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      lVar9 = *(longlong *)(*param_1 + 0xa00);
      lVar12 = (longlong)*(int *)(*param_1 + 0xa08) * 0xd8 + lVar9;
      for (; lVar9 != lVar12; lVar9 = lVar9 + 0xd8) {
        if (*(longlong *)(lVar9 + 8) != 0) {
          lVar10 = FUN_140c469b0(lVar8,*(undefined8 *)(lVar9 + 0x58));
          if (lVar10 == 0) {
            lVar10 = *(longlong *)(lVar9 + 8);
            cVar7 = FUN_14208d2d0(lVar10,lVar10 + 0x2e8,L"trinketRenderWrapper.trinketRender");
            if (cVar7 != '\0') {
              FUN_142056670(*(undefined8 *)(lVar10 + 0x2e8),0);
            }
            cVar7 = FUN_14208d2d0(lVar10,lVar10 + 0x2f8,L"trinketRenderShadow.trinketRender");
            if (cVar7 != '\0') {
              FUN_142056670(*(undefined8 *)(lVar10 + 0x2f8),0);
            }
            if (*(longlong *)(lVar10 + 0x2c8) != 0) {
              FUN_14203e030(*(longlong *)(lVar10 + 0x2c8),&DAT_144613828);
            }
            puVar3 = (undefined8 *)(*(longlong *)(lVar9 + 8) + 0x308);
            cVar7 = FUN_14208d2d0(*(longlong *)(lVar9 + 8),puVar3,L"rarityContent");
            if (cVar7 != '\0') {
              FUN_14203e4e0(*puVar3,&DAT_144613878);
            }
          }
          else {
            FUN_1411e23f0(*(undefined8 *)(*param_1 + 0xa48),&local_48,lVar10 + 0x90);
            uVar11 = FUN_1411e70f0(&local_48);
            FUN_140f4d5a0(*(undefined8 *)(lVar9 + 8),local_30,uVar11,1);
            lVar10 = *(longlong *)(lVar10 + 0x180);
            puVar3 = (undefined8 *)(*(longlong *)(lVar9 + 8) + 0x308);
            cVar7 = FUN_14208d2d0(*(longlong *)(lVar9 + 8),puVar3,L"rarityContent");
            if (cVar7 != '\0') {
              uVar11 = *puVar3;
              if (lVar10 == 0) {
                FUN_14203e4e0(uVar11,&DAT_144613878);
              }
              else {
                FUN_14203dbf0(uVar11,lVar10 + 0x58);
              }
            }
            if (local_28 != 0) {
              LOCK();
              piVar1 = (int *)(local_28 + 0x48);
              iVar4 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                FGraphEvent::Recycle();
              }
            }
            plVar6 = local_38;
            if (local_38 != (longlong *)0x0) {
              LOCK();
              plVar2 = local_38 + 1;
              lVar10 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar10 == 1) {
                (**(code **)*local_38)(local_38);
                LOCK();
                piVar1 = (int *)((longlong)plVar6 + 0xc);
                iVar4 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar4 == 1) {
                  (**(code **)(*plVar6 + 8))(plVar6,1);
                }
              }
            }
            FUN_1416f8340(local_44);
            FUN_1416f8340(local_48);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140f19080 FUN_140f19080 body=213 status=ok
// SIG undefined FUN_140f19080(void)

void FUN_140f19080(undefined8 *param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48 [16];
  longlong local_38;
  longlong local_28;
  
  lVar3 = FUN_140f2b5e0(*param_1);
  if (lVar3 != 0) {
    FUN_142fde510(local_48);
    cVar2 = FUN_142ffa4f0(lVar3,param_1 + 1,local_48);
    if ((cVar2 != '\0') && (local_38 != 0)) {
      if (*(char *)(local_38 + 0x5d) == '\0') {
        uVar4 = *(undefined8 *)(local_38 + 0x60);
      }
      else {
        if (local_28 == 0) {
          return;
        }
        lVar3 = FUN_1430b3b80();
        if ((*(int *)(*(longlong *)(local_28 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(local_28 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) {
          return;
        }
        if (*(longlong *)(local_28 + 0x478) == 0) {
          return;
        }
        uVar4 = *(undefined8 *)(*(longlong *)(local_28 + 0x478) + 0x58);
      }
      local_58 = 0;
      local_50 = 0;
      (**(code **)(*(longlong *)*param_1 + 0x4e8))((longlong *)*param_1,uVar4,&local_58);
    }
  }
  return;
}



// FUNCTION 140f19160 FUN_140f19160 body=245 status=ok
// SIG undefined FUN_140f19160(void)

void FUN_140f19160(longlong *param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  undefined8 local_res8;
  code *local_18;
  undefined8 uStack_10;
  
  lVar4 = FWeakObjectPtr::Get(*param_1 + 0x58c);
  if (lVar4 != 0) {
    lVar5 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uStack_10 = (ulonglong)uStack_10._4_4_ << 0x20;
      local_18 = FUN_140f3b230;
      pwVar6 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnInventoryCustomizationUnlocked",L"::");
      pwVar3 = (wchar_t *)0x0;
      while (pwVar2 = pwVar6, pwVar2 != (wchar_t *)0x0) {
        pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar3 = pwVar2;
      }
      FName::FName(&local_res8,pwVar3 + 2,1);
      FUN_1407260e0(lVar4 + 0xc28,*param_1,&local_18,local_res8);
    }
  }
  return;
}



// FUNCTION 140f19260 FUN_140f19260 body=268 status=ok
// SIG undefined FUN_140f19260(void)

void FUN_140f19260(longlong *param_1)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined1 local_res8 [8];
  
  lVar3 = FWeakObjectPtr::Get(*param_1 + 0x5c8);
  if (lVar3 != 0) {
    lVar4 = FUN_14142a560();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar4 = *param_1;
      plVar7 = (longlong *)(lVar3 + 0x7c8);
      plVar5 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar5 != (longlong *)0x0) {
        *plVar5 = (longlong)&PTR_FUN_143f4d170;
        FWeakObjectPtr::operator=(plVar5 + 1,lVar4);
        plVar5[2] = (longlong)FUN_140f3aed0;
        lVar4 = FDelegateHandle::GenerateNewID();
        plVar5[4] = lVar4;
        *plVar5 = (longlong)&PTR_FUN_143f4d1b8;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar7,1);
        (**(code **)(*plVar5 + 0x20))(plVar5,local_res8);
        iVar1 = *(int *)(lVar3 + 2000);
        *(int *)(lVar3 + 2000) = iVar1 + 1;
        if (*(int *)(lVar3 + 0x7d4) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar7,iVar1);
        }
        puVar6 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar7);
        *puVar6 = plVar5;
        *(undefined4 *)(puVar6 + 1) = 3;
      }
    }
  }
  return;
}



// FUNCTION 140f19370 FUN_140f19370 body=245 status=ok
// SIG undefined FUN_140f19370(void)

void FUN_140f19370(longlong *param_1)

{
  uint uVar1;
  BOOL BVar2;
  longlong lVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 local_res8;
  undefined4 local_resc;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(*param_1 + 0xf18);
  BVar2 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar2 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  FWeakObjectPtr::operator=(&local_res8,0);
  lVar3 = *param_1;
  *(undefined4 *)(lVar3 + 0x9d4) = local_res8;
  *(undefined4 *)(lVar3 + 0x9d8) = local_resc;
  LOCK();
  *(undefined4 *)(*param_1 + 0xfb8) = 1;
  UNLOCK();
  lVar3 = 0xc18;
  if (*(char *)(*param_1 + 0xe31) != '\x01') {
    lVar3 = 0xa80;
  }
  FUN_140f08820(lVar3 + *param_1,1);
  uVar1 = 0xc18;
  if (*(char *)(*param_1 + 0xe31) != '\x01') {
    uVar1 = 0xa80;
  }
  FUN_140f0b090(*param_1 + (ulonglong)uVar1,0xffffffff,0,0);
  FUN_140f47890(*param_1,1);
  lVar3 = *param_1;
  LOCK();
  *(undefined4 *)(lVar3 + 0xfb4) = 1;
  UNLOCK();
  LOCK();
  *(undefined4 *)(lVar3 + 0x9f0) = 1;
  UNLOCK();
  LOCK();
  *(undefined4 *)(lVar3 + 0x588) = 1;
  UNLOCK();
  LOCK();
  *(undefined4 *)(lVar3 + 0x9ec) = 1;
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x000140f1945e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 140f19470 FUN_140f19470 body=621 status=ok
// SIG undefined FUN_140f19470(void)

void FUN_140f19470(longlong *param_1)

{
  char cVar1;
  wint_t wVar2;
  wint_t wVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  uint uVar8;
  wchar_t *pwVar9;
  int iVar10;
  wint_t *pwVar11;
  longlong *plVar12;
  undefined2 *puVar13;
  undefined8 uVar14;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  longlong local_48 [2];
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar1 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar1 == '\0') {
    return;
  }
  lVar5 = FWeakObjectPtr::Get(&local_res10);
  lVar6 = 0;
  iVar10 = *(int *)(lVar5 + 0xc);
  if (iVar10 < (int)DAT_1469e91c4) {
    uVar8 = iVar10 >> 0x1f & 0xffff;
    uVar4 = iVar10 + uVar8;
    lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
            (longlong)(int)((uVar4 & 0xffff) - uVar8) * 0x18;
  }
  if ((*(uint *)(lVar6 + 8) & 0x30000000) != 0) {
    return;
  }
  lVar6 = *param_1;
  if (*(char *)((longlong)param_1 + 0x11) == '\0') {
    lVar5 = *(longlong *)(lVar6 + 0x658);
    plVar12 = *(longlong **)(lVar6 + 0x648);
  }
  else {
    lVar5 = *(longlong *)(lVar6 + 0x640);
    plVar12 = *(longlong **)(lVar6 + 0x630);
  }
  if (lVar5 == 0) {
    return;
  }
  if (plVar12 == (longlong *)0x0) {
    return;
  }
  puVar7 = (undefined8 *)FUN_142eb6610(plVar12,local_48);
  iVar10 = 0;
  if (*(int *)(puVar7 + 1) == 0) {
    puVar13 = &DAT_143f3eda8;
  }
  else {
    puVar13 = (undefined2 *)*puVar7;
  }
  pwVar11 = &DAT_14461ae58;
  do {
    wVar2 = *(wint_t *)((longlong)pwVar11 + (longlong)(puVar13 + -0xa230d72c));
    if ((wVar2 == 0) && (*pwVar11 == 0)) goto LAB_140f195c1;
    if (wVar2 != *pwVar11) {
      wVar2 = towlower(wVar2);
      wVar3 = towlower(*pwVar11);
      if (wVar2 != wVar3) break;
    }
    pwVar11 = pwVar11 + 1;
  } while( true );
  iVar10 = (uint)wVar2 - (uint)wVar3;
LAB_140f195c1:
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  if ((iVar10 == 0) || (cVar1 = (char)param_1[2], cVar1 == '\0')) {
    uVar14 = 0;
  }
  else {
    if (cVar1 != '\x01') {
      if (cVar1 == '\x02') {
        (**(code **)(*plVar12 + 0x278))(plVar12,0);
        local_48[0] = 0;
        local_48[1] = 8;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
        uVar14 = 0x10;
        pwVar9 = L"cantUse";
      }
      else {
        if (cVar1 != '\x03') {
          return;
        }
        (**(code **)(*plVar12 + 0x278))(plVar12,0);
        local_48[0] = 0;
        local_48[1] = 7;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
        uVar14 = 0xe;
        pwVar9 = L"locked";
      }
      goto LAB_140f196a3;
    }
    uVar14 = 1;
  }
  (**(code **)(*plVar12 + 0x278))(plVar12,uVar14);
  local_48[0] = 0;
  local_48[1] = 4;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
  pwVar9 = L"off";
  uVar14 = 8;
LAB_140f196a3:
  FGenericPlatformString::Memcpy(local_48[0],pwVar9,uVar14);
  FUN_142088cf0(lVar5,local_48);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140f196e0 FUN_140f196e0 body=153 status=ok
// SIG undefined FUN_140f196e0(void)

void FUN_140f196e0(longlong *param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_28 [32];
  
  if ((((*(longlong *)(*param_1 + 0x9e0) != 0) && (cVar3 = FUN_1410875b0(), cVar3 != '\0')) &&
      (cVar3 = FUN_140f279e0(*param_1), cVar3 != '\0')) &&
     (lVar4 = FUN_1416f8720((int)param_1[1]), lVar4 != 0)) {
    lVar5 = FUN_1413565b0();
    iVar1 = *(int *)(lVar5 + 0x90);
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < iVar1) ||
       (*(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)iVar1 * 8) !=
        lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_140f16950(local_28,CONCAT71((int7)(int3)((uint)iVar1 >> 8),2),lVar4);
      FUN_140f51bc0(*param_1,local_28);
    }
  }
  return;
}



// FUNCTION 140f19780 FUN_140f19780 body=916 status=ok
// SIG undefined FUN_140f19780(void)

void FUN_140f19780(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  int *piVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 uVar14;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  undefined8 local_res18;
  longlong local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_90;
  undefined8 local_88;
  undefined2 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_50;
  undefined8 local_48;
  undefined2 local_40;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar3 == '\0') {
    return;
  }
  lVar6 = FWeakObjectPtr::Get(&local_res10);
  lVar13 = 0;
  iVar5 = *(int *)(lVar6 + 0xc);
  lVar6 = lVar13;
  if (iVar5 < (int)DAT_1469e91c4) {
    uVar9 = iVar5 >> 0x1f & 0xffff;
    uVar4 = iVar5 + uVar9;
    lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
            (longlong)(int)((uVar4 & 0xffff) - uVar9) * 0x18;
  }
  if ((*(uint *)(lVar6 + 8) & 0x30000000) != 0) {
    return;
  }
  lVar6 = *param_1;
  if ((*(char *)(lVar6 + 0x4c0) == '\0') && (*(char *)(lVar6 + 0x5f8) == '\0')) {
    return;
  }
  AcquireSRWLockShared((PSRWLOCK)(lVar6 + 0x6b8));
  lVar6 = *param_1;
  uVar8 = 0;
  uVar14 = 0;
  lVar11 = 0;
  lVar12 = lVar13;
  switch(*(undefined1 *)(lVar6 + 0x6c8)) {
  case 1:
    lVar13 = *(longlong *)(lVar6 + 0x698);
    lVar12 = lVar11;
    break;
  case 2:
    goto LAB_140f198ea;
  case 3:
    lVar13 = *(longlong *)(lVar6 + 0x698);
    uVar14 = 1;
    lVar12 = *(longlong *)(lVar6 + 0x6a0);
    break;
  case 5:
    uVar14 = 1;
  case 4:
    lVar13 = *(longlong *)(lVar6 + 0x698);
    lVar12 = *(longlong *)(lVar6 + 0x6a8);
    break;
  case 6:
    lVar11 = *(longlong *)(lVar6 + 0x6a8);
    goto LAB_140f198ea;
  case 7:
    lVar11 = *(longlong *)(lVar6 + 0x6b0);
    uVar14 = 1;
LAB_140f198ea:
    uVar8 = 1;
    lVar13 = *(longlong *)(lVar6 + 0x6a0);
    lVar12 = lVar11;
  }
  ReleaseSRWLockShared((PSRWLOCK)(lVar6 + 0x6b8));
  lVar6 = FUN_1416f8720((int)param_1[2]);
  if (lVar6 != 0) {
    local_b8 = 0;
    local_b0 = 0;
    uVar7 = FUN_1404b03b0();
    FText::FText(local_a8,uVar7);
    uVar2 = local_b0;
    local_88 = 0;
    local_80 = 0x101;
    local_90 = 1;
    if ((lVar13 == 0) ||
       ((piVar10 = (int *)(lVar13 + 0x48), *piVar10 == 0 && (*(int *)(lVar13 + 0x4c) == 0)))) {
      piVar10 = (int *)&DAT_146872758;
    }
    lVar13 = (longlong)(int)local_b0;
    iVar5 = (int)local_b0 + 1;
    local_b0 = CONCAT44(local_b0._4_4_,iVar5);
    if (local_b0._4_4_ < iVar5) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                (&local_b8,uVar2 & 0xffffffff);
    }
    *(undefined8 *)(local_b8 + lVar13 * 8) = *(undefined8 *)piVar10;
    lVar13 = FUN_1416f8720((int)param_1[2]);
    (**(code **)(*(longlong *)(lVar13 + 0x308) + 0x20))
              ((longlong *)(lVar13 + 0x308),&local_b8,uVar8);
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_a0 + 1;
      lVar13 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar10 = (int *)((longlong)local_a0 + 0xc);
        iVar5 = *piVar10;
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_a0 + 8))(local_a0,1);
        }
      }
    }
    if (local_b8 != 0) {
      FMemory::Free();
    }
  }
  lVar13 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0x14));
  if (lVar13 != 0) {
    local_78 = 0;
    local_70 = 0;
    uVar8 = FUN_1404b03b0();
    FText::FText(local_68,uVar8);
    uVar2 = local_70;
    local_48 = 0;
    local_40 = 0x101;
    local_50 = 1;
    local_res18 = DAT_146872760;
    if (*(char *)(*param_1 + 0x6c8) == '\x03') {
      local_res18 = DAT_146872758;
    }
    if ((lVar12 == 0) ||
       ((piVar10 = (int *)(lVar12 + 0x48), *piVar10 == 0 && (*(int *)(lVar12 + 0x4c) == 0)))) {
      piVar10 = (int *)&local_res18;
    }
    lVar13 = (longlong)(int)local_70;
    iVar5 = (int)local_70 + 1;
    local_70 = CONCAT44(local_70._4_4_,iVar5);
    if (local_70._4_4_ < iVar5) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                (&local_78,uVar2 & 0xffffffff);
    }
    *(undefined8 *)(local_78 + lVar13 * 8) = *(undefined8 *)piVar10;
    lVar13 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0x14));
    (**(code **)(*(longlong *)(lVar13 + 0x308) + 0x20))
              ((longlong *)(lVar13 + 0x308),&local_78,uVar14);
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_60 + 1;
      lVar13 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar10 = (int *)((longlong)local_60 + 0xc);
        iVar5 = *piVar10;
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_60 + 8))(local_60,1);
        }
      }
    }
    if (local_78 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140f19b30 FUN_140f19b30 body=582 status=ok
// SIG undefined FUN_140f19b30(void)

void FUN_140f19b30(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  longlong *local_98;
  undefined4 local_90;
  longlong local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong *local_70;
  longlong local_60;
  undefined1 local_58 [40];
  undefined1 local_30 [40];
  
  if (param_2 != (longlong *)0x0) {
    lVar5 = (**(code **)(*param_2 + 0x340))(param_2);
    if (*(longlong *)(lVar5 + 0x78) == 0) {
      lVar5 = (**(code **)(*param_2 + 0x340))(param_2);
      uVar7 = FWeakObjectPtr::Get(lVar5 + 0xdc);
      lVar5 = (**(code **)(*param_2 + 0x340))(param_2);
      FUN_140f2b6a0(*param_1,&local_80,uVar7,*(undefined8 *)(lVar5 + 0xa8));
      (**(code **)(*param_2 + 0x358))(param_2,&local_80,0);
      if (local_60 != 0) {
        LOCK();
        piVar1 = (int *)(local_60 + 0x48);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          FGraphEvent::Recycle();
        }
      }
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_70 + 1;
        lVar5 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar1 = (int *)((longlong)local_70 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_70 + 8))(local_70,1);
          }
        }
      }
      FUN_1416f8340(local_7c);
    }
    else {
      bVar8 = *(longlong *)(*param_1 + 0xa40) == 0;
      if (bVar8) {
        puVar6 = (undefined4 *)FUN_1411c87b0(local_58);
      }
      else {
        lVar5 = (**(code **)(*param_2 + 0x340))(param_2);
        puVar6 = (undefined4 *)
                 FUN_1411e23f0(*(undefined8 *)(*param_1 + 0xa40),local_30,lVar5 + 0x68);
      }
      local_a8 = *puVar6;
      *puVar6 = 0xffffffff;
      local_a4 = puVar6[1];
      puVar6[1] = 0xffffffff;
      local_a0 = *(undefined8 *)(puVar6 + 2);
      local_98 = *(longlong **)(puVar6 + 4);
      *(undefined8 *)(puVar6 + 4) = 0;
      *(undefined8 *)(puVar6 + 2) = 0;
      local_90 = puVar6[6];
      local_88 = *(longlong *)(puVar6 + 8);
      *(undefined8 *)(puVar6 + 8) = 0;
      if (bVar8) {
        FUN_140ddef50(local_58);
      }
      else {
        FUN_140ddef50(local_30);
      }
      (**(code **)(*param_2 + 0x358))(param_2,&local_a8,0);
      if (local_88 != 0) {
        LOCK();
        piVar1 = (int *)(local_88 + 0x48);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          FGraphEvent::Recycle();
        }
      }
      plVar3 = local_98;
      if (local_98 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_98 + 1;
        lVar5 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_98)(local_98);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
      FUN_1416f8340(local_a4);
      local_80 = local_a8;
    }
    FUN_1416f8340(local_80);
  }
  return;
}



// FUNCTION 140f19d80 FUN_140f19d80 body=968 status=ok
// SIG undefined FUN_140f19d80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f19d80(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  longlong lVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined1 auStack_c8 [32];
  char local_a8;
  undefined1 local_a7 [3];
  undefined4 local_a4;
  undefined4 local_a0 [2];
  longlong local_98;
  longlong *plStack_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  longlong local_70;
  char *local_68;
  longlong local_60 [2];
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  longlong local_30;
  longlong *plStack_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  local_80 = (undefined4)param_1[1];
  local_7c = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_a7);
  FUN_14172a400(local_a7);
  cVar7 = FWeakObjectPtr::IsValid(&local_80);
  if (cVar7 == '\0') {
    return;
  }
  lVar9 = FWeakObjectPtr::Get(&local_80);
  iVar3 = *(int *)(lVar9 + 0xc);
  if (iVar3 < (int)DAT_1469e91c4) {
    uVar14 = iVar3 >> 0x1f & 0xffff;
    uVar8 = iVar3 + uVar14;
    lVar9 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
            (longlong)(int)((uVar8 & 0xffff) - uVar14) * 0x18;
  }
  else {
    lVar9 = 0;
  }
  if ((*(uint *)(lVar9 + 8) & 0x30000000) != 0) {
    return;
  }
  puVar10 = (undefined4 *)FUN_1411e6e10(param_1 + 2,&local_84);
  puVar11 = (undefined4 *)FUN_1411e6e10(*param_1 + 0x688,&local_88);
  lVar9 = FUN_1416f8720(*puVar11);
  lVar12 = FUN_1416f8720(*puVar10);
  if (((lVar9 == lVar12) && (*(int *)(*param_1 + 0x6a0) == (int)param_1[5])) &&
     ((char)param_1[7] == '\0')) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  FUN_1416f8340(local_88);
  FUN_1416f8340(local_84);
  if (!bVar6) {
    return;
  }
  lVar9 = *param_1;
  uVar13 = FUN_1416f8720((int)param_1[2]);
  FUN_14170c210(lVar9 + 0x688,uVar13);
  uVar13 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0x14));
  FUN_14170c210(lVar9 + 0x68c,uVar13);
  plVar4 = (longlong *)param_1[4];
  plVar1 = (longlong *)(lVar9 + 0x690);
  lVar12 = param_1[3];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_98 = lVar12;
  plStack_90 = plVar4;
  if (&local_98 != plVar1) {
    local_98 = *plVar1;
    plStack_90 = *(longlong **)(lVar9 + 0x698);
    *plVar1 = lVar12;
    *(longlong **)(lVar9 + 0x698) = plVar4;
    local_30 = lVar12;
    plStack_28 = plVar4;
  }
  plVar1 = plStack_90;
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    plVar4 = plStack_90 + 1;
    lVar12 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plStack_90)(plStack_90);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_90 + 8))(plStack_90,1);
      }
    }
  }
  *(int *)(lVar9 + 0x6a0) = (int)param_1[5];
  lVar12 = param_1[6];
  lVar5 = *(longlong *)(lVar9 + 0x6a8);
  *(longlong *)(lVar9 + 0x6a8) = lVar12;
  if (lVar12 != 0) {
    LOCK();
    *(int *)(lVar12 + 0x48) = *(int *)(lVar12 + 0x48) + 1;
    UNLOCK();
  }
  if (lVar5 != 0) {
    LOCK();
    piVar2 = (int *)(lVar5 + 0x48);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      FGraphEvent::Recycle();
    }
  }
  cVar7 = FWeakObjectPtr::IsValid(*param_1 + 0x240);
  if (cVar7 == '\0') {
    return;
  }
  lVar9 = FWeakObjectPtr::Get(*param_1 + 0x240);
  if (*(longlong *)(lVar9 + 0x2b8) == 0) {
    return;
  }
  FUN_1411e6e10(*param_1 + 0x688,&local_a4);
  cVar7 = FWeakObjectPtr::IsValid(*param_1 + 0x3e4);
  if ((cVar7 == '\0') && (cVar7 = FWeakObjectPtr::IsValid(*param_1 + 0x364), cVar7 == '\0')) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (((*(int *)(*param_1 + 0x6a0) == -1) || (lVar9 = FUN_1416f8720(local_a4), lVar9 == 0)) ||
     (!bVar6)) {
    local_a8 = '\0';
LAB_140f1a139:
    if (bVar6) {
      uVar13 = 1;
      goto LAB_140f1a08d;
    }
  }
  else {
    plVar1 = (longlong *)*param_1;
    local_a8 = '\x01';
    (**(code **)(*plVar1 + 0x3c8))(plVar1,local_60,(int)plVar1[0xd4]);
    local_a0[0] = 0xffffffff;
    uVar13 = FUN_1416f8720(local_a4);
    FUN_14170c210(local_a0,uVar13);
    uVar13 = FWeakObjectPtr::Get(*param_1 + 0x240);
    FUN_14208e7b0(uVar13,local_60,local_a0);
    if (local_60[0] != 0) {
      FMemory::Free();
    }
    if (local_a8 == '\0') goto LAB_140f1a139;
  }
  uVar13 = 0;
LAB_140f1a08d:
  FUN_140f4dcc0(*param_1,uVar13);
  local_70 = *param_1;
  local_68 = &local_a8;
  local_50 = *(undefined8 *)(local_70 + 0x450);
  local_48 = *(longlong *)(local_70 + 0x458);
  if (local_48 != 0) {
    LOCK();
    *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
    UNLOCK();
  }
  FUN_140f1f080(&local_70,&local_50);
  local_40 = *(undefined8 *)(*param_1 + 0x460);
  local_38 = *(longlong *)(*param_1 + 0x468);
  if (local_38 != 0) {
    LOCK();
    *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
    UNLOCK();
  }
  FUN_140f1f080(&local_70,&local_40);
  FUN_1416f8340(local_a4);
  return;
}



// FUNCTION 140f1a150 FUN_140f1a150 body=270 status=ok
// SIG undefined FUN_140f1a150(void)

undefined8 FUN_140f1a150(longlong *param_1,int *param_2)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 local_28;
  
  piVar6 = *(int **)(*param_1 + 0xe48);
  piVar1 = piVar6 + *(int *)(*param_1 + 0xe50);
  if (piVar6 != piVar1) {
    do {
      if (*piVar6 == *param_2) {
        FUN_142fde510(local_48);
        lVar4 = FUN_140f2b5e0(*param_1);
        if (lVar4 != 0) {
          FUN_142ffa4f0(lVar4,param_2,local_48);
        }
        lVar4 = FWeakObjectPtr::Get(*param_1 + 0x594);
        if (lVar4 != 0) {
          lVar5 = FUN_1413f82e0();
          if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if ((bVar2) && (cVar3 = FUN_140c48e60(lVar4,local_28), cVar3 != '\0')) {
            return 0;
          }
        }
        cVar3 = FUN_14044aea0(*param_1 + 0xa1c,0);
        if ((cVar3 == '\0') && (cVar3 = FUN_14058c1e0(*param_1 + 0xa1c,local_38), cVar3 == '\0')) {
          return 0;
        }
        return 1;
      }
      piVar6 = piVar6 + 1;
    } while (piVar6 != piVar1);
  }
  return 0;
}



// FUNCTION 140f1a260 FUN_140f1a260 body=315 status=ok
// SIG undefined FUN_140f1a260(void)

void FUN_140f1a260(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  char cVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  longlong local_res20;
  longlong *local_38;
  undefined8 local_30;
  
  local_38 = (longlong *)0x0;
  local_30 = 0;
  cVar4 = FUN_140f15b10(*(undefined8 *)(*param_1 + 0xe00),param_2,param_3,0,6,&local_38);
  plVar7 = local_38;
  for (iVar8 = (int)local_30; iVar8 != 0; iVar8 = iVar8 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  if (cVar4 != '\0') {
    *(undefined1 *)(*param_2 + 0x198) = 0;
    pwVar5 = _guard_xfg_dispatch_icall_nop
                       (L"&ThisClass::OnSplitScreenPaperDollPageButtonClicked",L"::");
    pwVar3 = (wchar_t *)0x0;
    while (pwVar2 = pwVar5, pwVar2 != (wchar_t *)0x0) {
      pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar3 = pwVar2;
    }
    FName::FName(&local_res20,pwVar3 + 2,1);
    lVar1 = *param_2;
    FWeakObjectPtr::operator=(lVar1 + 0x1b0,*param_1);
    *(longlong *)(lVar1 + 0x1b8) = local_res20;
    if ((local_res20 != 0) && (lVar6 = FWeakObjectPtr::Get(lVar1 + 0x1b0), lVar6 != 0)) {
      UObject::FindFunction(lVar6,*(undefined8 *)(lVar1 + 0x1b8));
    }
  }
  return;
}



// FUNCTION 140f1a3a0 FUN_140f1a3a0 body=468 status=ok
// SIG undefined FUN_140f1a3a0(void)

void FUN_140f1a3a0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_res8 [2];
  undefined4 local_res10;
  undefined8 local_38;
  undefined4 local_30;
  
  lVar3 = *param_1;
  if ((char)param_1[1] == '\0') {
    FUN_140f4d7f0(lVar3,0,0);
    return;
  }
  fVar9 = 1.0;
  if (*(float *)(param_1 + 4) < *(float *)((longlong)param_1 + 0x1c) ||
      *(float *)(param_1 + 4) == *(float *)((longlong)param_1 + 0x1c)) {
    FUN_140f4d7f0(lVar3,1);
    fVar7 = *(float *)(*param_1 + 0x1e8);
    if (fVar7 <= *(float *)(param_1 + 3)) {
      fVar7 = *(float *)(param_1 + 3);
    }
    fVar8 = fVar7 * *(float *)(*param_1 + 0x1e4);
    fVar9 = fVar7 - fVar8;
    if (1e-08 < ABS(fVar9)) {
      fVar9 = (SQRT(*(float *)((longlong)param_1 + 0x1c)) - fVar8) / fVar9;
      if (fVar9 < 0.0) {
        fVar9 = 0.0;
        goto LAB_140f1a43f;
      }
    }
    else if (SQRT(*(float *)((longlong)param_1 + 0x1c)) < fVar7) {
      fVar9 = 0.0;
    }
    else {
      fVar9 = 1.0;
    }
    if (1.0 <= fVar9) {
      fVar9 = 1.0;
    }
  }
  else {
    FUN_140f4d7f0(lVar3,2);
  }
LAB_140f1a43f:
  local_38 = *(undefined8 *)((longlong)param_1 + 0xc);
  local_30 = *(undefined4 *)((longlong)param_1 + 0x14);
  local_res8[0] = 0.0;
  local_res10 = 0;
  UKismetMathLibrary::GetYawPitchFromVector(&local_38,local_res8);
  lVar3 = *param_1;
  FUN_140f53b80(lVar3,local_res8[0] + *(float *)(lVar3 + 0x208),*(undefined4 *)(lVar3 + 0x1e0));
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 0x178);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar4[1];
    bVar6 = iVar5 == 0;
    if (bVar6) {
      *(int *)(plVar4 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (!bVar6) {
      while( true ) {
        LOCK();
        bVar6 = iVar5 == (int)plVar4[1];
        if (bVar6) {
          *(int *)(plVar4 + 1) = iVar5 + 1;
        }
        UNLOCK();
        if (bVar6) break;
        LOCK();
        iVar5 = (int)plVar4[1];
        bVar6 = iVar5 == 0;
        if (bVar6) {
          *(int *)(plVar4 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
        if (bVar6) {
          return;
        }
      }
      if (plVar4 != (longlong *)0x0) {
        lVar3 = *(longlong *)(lVar3 + 0x170);
        if (lVar3 != 0) {
          FUN_14203e3e0(lVar3,(int)(fVar9 * 100.0));
        }
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
    }
  }
  return;
}



// FUNCTION 140f1a580 FUN_140f1a580 body=132 status=ok
// SIG undefined FUN_140f1a580(void)

void FUN_140f1a580(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_res8 [8];
  
  lVar1 = *param_1;
  uVar2 = FUN_142d52a20(lVar1 + 0x640);
  uVar2 = FArchive::operator<<(uVar2);
  uVar2 = FUN_142d621c0(uVar2);
  FUN_140f12aa0(uVar2,local_res8,lVar1,FUN_140f36f00);
  lVar1 = *param_1;
  uVar2 = FUN_142d52a20(lVar1 + 0x640);
  uVar2 = FArchive::operator<<(uVar2);
  uVar2 = FUN_142d62330(uVar2);
  FUN_140f12b80(uVar2,local_res8,lVar1,FUN_140f36f60);
  return;
}



// FUNCTION 140f1a610 FUN_140f1a610 body=168 status=ok
// SIG undefined FUN_140f1a610(void)

void FUN_140f1a610(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (param_3 != (longlong *)0x0) {
    lVar3 = FUN_1413565b0();
    if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) &&
       (lVar3 = (**(code **)(*param_3 + 0x340))(param_3), *(char *)(lVar3 + 0x5a) == '\0')) {
      if (*(int *)(lVar3 + 0xd8) == -1) {
        uVar4 = 0;
      }
      else {
        cVar2 = FUN_140f258f0(*param_1,param_3);
        if ((cVar2 == '\0') && (cVar2 = FUN_140f31eb0(*param_1,param_3), cVar2 == '\0')) {
          uVar4 = 1;
        }
        else {
          uVar4 = 0;
        }
      }
      FUN_142ed3c20(param_3,uVar4,1);
    }
  }
  return;
}



// FUNCTION 140f1a6c0 FUN_140f1a6c0 body=906 status=ok
// SIG undefined FUN_140f1a6c0(void)

ulonglong FUN_140f1a6c0(ulonglong *param_1)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  char local_20 [4];
  undefined1 local_1c [8];
  undefined1 local_14 [12];
  
  if ((param_1[1] == 0) || (plVar4 = (longlong *)FUN_14203d310(), plVar4 == (longlong *)0x0))
  goto LAB_140f1a85c;
  lVar5 = FUN_1413565b0();
  if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) goto LAB_140f1a85c;
  lVar5 = (**(code **)(*plVar4 + 0x370))(plVar4);
  FUN_140f16950(local_20,(lVar5 == 0) + '\x01',plVar4);
  uVar8 = *param_1;
  cVar3 = *(char *)(uVar8 + 0x9c0);
  if (cVar3 == '\0') goto LAB_140f1a85c;
  if (lVar5 == 0) {
    if (((cVar3 == local_20[0]) &&
        (cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(uVar8 + 0x9c4,local_1c),
        cVar3 != '\0')) &&
       (cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(uVar8 + 0x9cc,local_14),
       cVar3 != '\0')) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      FUN_14109ed60();
      goto LAB_140f1a85c;
    }
    if (*(char *)(*param_1 + 0x9c0) == '\x01') {
      lVar5 = FWeakObjectPtr::Get(local_14);
      if (lVar5 == 0) {
LAB_140f1a808:
        lVar5 = FUN_140f2ad20(*param_1 + 0x9c0);
        if (lVar5 != 0) {
          uVar7 = FWeakObjectPtr::Get(*param_1 + 0x9c4);
          FUN_140f52f20(*param_1,uVar7);
          goto LAB_140f1a85c;
        }
      }
      else {
        lVar6 = FUN_1428dfc70();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) goto LAB_140f1a808;
      }
      uVar7 = FWeakObjectPtr::Get(local_1c);
      cVar3 = FUN_140f258f0(*param_1,uVar7);
      uVar8 = *param_1;
      if (cVar3 != '\0') goto LAB_140f1a977;
    }
LAB_140f1a857:
    FUN_140f50970();
  }
  else {
    if (((cVar3 == local_20[0]) &&
        (cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(uVar8 + 0x9c4,local_1c),
        cVar3 != '\0')) &&
       (cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(uVar8 + 0x9cc,local_14),
       cVar3 != '\0')) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      FUN_14109ed60();
      goto LAB_140f1a85c;
    }
    if (*(char *)(*param_1 + 0x9c0) == '\x02') {
      uVar7 = FWeakObjectPtr::Get(*param_1 + 0x9c4);
      cVar3 = FUN_140f258f0(*param_1,uVar7);
      if (cVar3 != '\0') {
        FUN_140f52560(*param_1,local_20,0);
        goto LAB_140f1a85c;
      }
    }
    uVar8 = *param_1;
    if (*(char *)(uVar8 + 0x9c0) != '\x01') goto LAB_140f1a857;
LAB_140f1a977:
    FUN_140f52560(uVar8,local_20,0);
  }
LAB_140f1a85c:
  if (((char)param_1[3] != '\0') && (*(char *)(*param_1 + 0x9c0) != '\0')) {
    FUN_140f29a60(*param_1,0);
  }
  LOCK();
  *(undefined4 *)(*param_1 + 0xfbc) = 0;
  UNLOCK();
  FWeakObjectPtr::operator=(&local_34,0);
  FWeakObjectPtr::operator=(&local_2c,0);
  cVar3 = FWeakObjectPtr::IsValid(&local_34);
  if (cVar3 != '\0') {
    plVar4 = (longlong *)FWeakObjectPtr::Get(&local_34);
    lVar5 = (**(code **)(*plVar4 + 0x340))(plVar4);
    cVar3 = FWeakObjectPtr::IsValid(lVar5 + 0xdc);
    if (cVar3 == '\0') {
      cVar3 = FWeakObjectPtr::IsValid(lVar5 + 0x5c);
      if (cVar3 != '\0') {
        local_2c = *(undefined4 *)(lVar5 + 0x5c);
        local_28 = *(undefined4 *)(lVar5 + 0x60);
      }
    }
    else {
      local_2c = *(undefined4 *)(lVar5 + 0xdc);
      local_28 = *(undefined4 *)(lVar5 + 0xe0);
    }
  }
  uVar8 = *param_1;
  *(undefined1 *)(uVar8 + 0xea4) = 0;
  *(undefined4 *)(uVar8 + 0xea8) = local_34;
  *(undefined4 *)(uVar8 + 0xeac) = local_30;
  *(undefined4 *)(uVar8 + 0xeb0) = local_2c;
  *(undefined4 *)(uVar8 + 0xeb4) = local_28;
  LOCK();
  uVar1 = *(uint *)(*param_1 + 0x588);
  *(uint *)(*param_1 + 0x588) = 1;
  uVar8 = (ulonglong)uVar1;
  UNLOCK();
  if (*(longlong *)(*param_1 + 0xf90) != 0) {
    lVar5 = FUN_1410833d0();
    uVar8 = 0;
    if ((lVar5 != 0) && (uVar8 = FUN_1410833d0(*param_1), *(longlong *)(uVar8 + 0xa88) != 0)) {
      lVar5 = FUN_142eee1b0();
      uVar8 = 0;
      if (lVar5 != 0) {
        FUN_142f06340(lVar5,*param_1 + 0xf90);
        uVar8 = *param_1;
        *(undefined8 *)(uVar8 + 0xf90) = 0;
      }
    }
  }
  return uVar8;
}



// FUNCTION 140f1aa50 FUN_140f1aa50 body=604 status=ok
// SIG undefined FUN_140f1aa50(void)

void FUN_140f1aa50(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 local_38;
  undefined8 local_30;
  char local_28 [4];
  undefined4 local_24 [2];
  undefined4 local_1c;
  undefined4 local_18;
  
  lVar3 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0xc));
  if (lVar3 != 0) {
    lVar4 = FUN_1413565b0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140f1aaa5;
  }
  lVar3 = 0;
LAB_140f1aaa5:
  local_28[0] = '\x01';
  FWeakObjectPtr::operator=(local_24,lVar3);
  FWeakObjectPtr::operator=(&local_1c,0);
  cVar2 = FWeakObjectPtr::IsValid(local_24);
  if (cVar2 != '\0') {
    plVar5 = (longlong *)FWeakObjectPtr::Get(local_24);
    lVar3 = (**(code **)(*plVar5 + 0x340))(plVar5);
    cVar2 = FWeakObjectPtr::IsValid(lVar3 + 0xdc);
    if (cVar2 == '\0') {
      cVar2 = FWeakObjectPtr::IsValid(lVar3 + 0x5c);
      if (cVar2 != '\0') {
        local_1c = *(undefined4 *)(lVar3 + 0x5c);
        local_18 = *(undefined4 *)(lVar3 + 0x60);
      }
    }
    else {
      local_1c = *(undefined4 *)(lVar3 + 0xdc);
      local_18 = *(undefined4 *)(lVar3 + 0xe0);
    }
  }
  if ((*(char *)(*param_1 + 0x9c0) == '\0') && (cVar2 = FUN_140f279e0(), cVar2 != '\0')) {
    lVar3 = 0xc18;
    if (*(char *)(*param_1 + 0xe31) != '\x01') {
      lVar3 = 0xa80;
    }
    cVar2 = FUN_140ee10a0(lVar3 + *param_1);
    if (cVar2 != '\0') {
      FUN_140f259b0(*param_1,(char)param_1[1],0,*(undefined1 *)((longlong)param_1 + 9));
      return;
    }
    param_1 = (longlong *)*param_1;
    local_38 = 0;
    local_30 = 0;
    (**(code **)(*param_1 + 0x4e8))(param_1,DAT_146872890,&local_38);
    FUN_14109ee70(param_1);
    return;
  }
  lVar3 = *param_1;
  if (*(char *)(lVar3 + 0x9c0) == '\0') {
    return;
  }
  if (((*(char *)(lVar3 + 0x9c0) == local_28[0]) &&
      (cVar2 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar3 + 0x9c4,local_24),
      cVar2 != '\0')) &&
     (cVar2 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar3 + 0x9cc,&local_1c),
     cVar2 != '\0')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  lVar3 = *param_1;
  if (!bVar1) {
    if (*(char *)(lVar3 + 0x9c0) == '\x02') {
      uVar6 = FWeakObjectPtr::Get(lVar3 + 0x9c4);
      cVar2 = FUN_140f258f0(*param_1,uVar6);
      if (cVar2 != '\0') {
        FUN_140f52560(*param_1,local_28,1);
        return;
      }
    }
    if (*(char *)(*param_1 + 0x9c0) != '\x01') {
      FUN_140f50970();
      return;
    }
    FUN_140f52560(*param_1,local_28,1);
    return;
  }
  FUN_140f29a60(lVar3,1);
  FUN_14109ed60(*param_1);
  return;
}



// FUNCTION 140f1acb0 FUN_140f1acb0 body=666 status=ok
// SIG undefined FUN_140f1acb0(void)

void FUN_140f1acb0(longlong *param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  char cVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  undefined8 local_res8;
  longlong local_res10;
  undefined1 uVar10;
  longlong *local_48;
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30;
  
  if ((*(longlong *)(*param_1 + 0x600) != 0) && (lVar4 = FUN_140e971d0(), lVar4 != 0)) {
    cVar3 = FUN_142dcfc60(lVar4);
    local_res8 = 0;
    if (cVar3 == '\x03') {
      local_38 = (longlong *)0x0;
      local_30 = 0x29;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
      uVar10 = 0;
      FGenericPlatformString::Convert<char,wchar_t>
                (local_38,0x29,"bottomItemCardAbbreviated.itemCardLoader",0x29,0x3f);
      local_48 = (longlong *)0x0;
      local_40 = 0;
      cVar3 = FUN_140f15430(*(undefined8 *)(*param_1 + 0x600),&local_res8,&local_38,0,
                            CONCAT11(uVar10,6),&local_48);
      plVar8 = local_48;
      plVar7 = local_38;
      for (iVar9 = (int)local_40; local_38 = plVar7, iVar9 != 0; iVar9 = iVar9 + -1) {
        if (*plVar8 != 0) {
          FMemory::Free();
        }
        plVar8 = plVar8 + 2;
        plVar7 = local_38;
      }
      if (local_48 != (longlong *)0x0) {
        FMemory::Free(local_48);
        plVar7 = local_38;
      }
    }
    else {
      local_48 = (longlong *)0x0;
      local_40 = 0x1e;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      uVar10 = 0;
      FGenericPlatformString::Convert<char,wchar_t>
                (local_48,0x1e,"bottomItemCard.itemCardLoader",0x1e,0x3f);
      local_38 = (longlong *)0x0;
      local_30 = 0;
      cVar3 = FUN_140e97ee0(*(undefined8 *)(*param_1 + 0x600),&local_res8,&local_48,0,
                            CONCAT11(uVar10,6),&local_38);
      plVar7 = local_38;
      for (iVar9 = (int)local_30; iVar9 != 0; iVar9 = iVar9 + -1) {
        if (*plVar7 != 0) {
          FMemory::Free();
        }
        plVar7 = plVar7 + 2;
      }
      plVar7 = local_48;
      if (local_38 != (longlong *)0x0) {
        FMemory::Free(local_38);
        plVar7 = local_48;
      }
    }
    if (plVar7 != (longlong *)0x0) {
      FMemory::Free();
    }
    *(undefined8 *)(*param_1 + 0xa58) = local_res8;
    if (cVar3 != '\0') {
      pwVar5 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnBackpackItemCardReady",L"::");
      pwVar2 = (wchar_t *)0x0;
      while (pwVar1 = pwVar5, pwVar1 != (wchar_t *)0x0) {
        pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
        pwVar2 = pwVar1;
      }
      FName::FName(&local_res10,pwVar2 + 2,1);
      lVar4 = *(longlong *)(*param_1 + 0xa58);
      FWeakObjectPtr::operator=(lVar4 + 0x198);
      local_res8 = 0;
      *(longlong *)(lVar4 + 0x1a0) = local_res10;
      if ((local_res10 != 0) && (lVar6 = FWeakObjectPtr::Get(lVar4 + 0x198), lVar6 != 0)) {
        UObject::FindFunction(lVar6,*(undefined8 *)(lVar4 + 0x1a0));
      }
      FUN_140f70290(*(undefined8 *)(*param_1 + 0xa58),*(undefined8 *)(*param_1 + 0x7a8));
    }
  }
  return;
}



// FUNCTION 140f1af50 FUN_140f1af50 body=154 status=ok
// SIG undefined FUN_140f1af50(void)

void FUN_140f1af50(longlong *param_1,undefined8 param_2,longlong param_3)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = FUN_1413565b0();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140f1af9d;
  }
  param_3 = 0;
LAB_140f1af9d:
  cVar2 = operator==<USkinnedMeshComponent,USkinnedMeshComponent,FWeakObjectPtr>
                    (param_3,*param_1 + 0xa60);
  if (cVar2 == '\0') {
    cVar2 = operator==<USkinnedMeshComponent,USkinnedMeshComponent,FWeakObjectPtr>
                      (param_3,*param_1 + 0xa68);
    if ((cVar2 == '\0') && (param_3 != 0)) {
      FUN_140f49780(param_3,*(undefined4 *)(*param_1 + 0xe8c));
    }
  }
  return;
}



// FUNCTION 140f1aff0 FUN_140f1aff0 body=193 status=ok
// SIG undefined FUN_140f1aff0(void)

void FUN_140f1aff0(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FWeakObjectPtr::IsValid(*param_1 + 0xdb0);
  if (cVar2 != '\0') {
    lVar1 = FWeakObjectPtr::Get(*param_1 + 0xdb0);
    FUN_1407665e0(lVar1 + 0x270,*param_1);
    lVar1 = FWeakObjectPtr::Get(*param_1 + 0xdb0);
    FUN_1407665e0(lVar1 + 0x210,*param_1);
    lVar1 = FWeakObjectPtr::Get(*param_1 + 0xdb0);
    FUN_1407665e0(lVar1 + 0x220,*param_1);
    lVar1 = FWeakObjectPtr::Get(*param_1 + 0xdb0);
    FUN_1407665e0(lVar1 + 0x230,*param_1);
    lVar1 = FWeakObjectPtr::Get(*param_1 + 0xdb0);
    FUN_140483870(lVar1 + 0x240,*param_1);
    return;
  }
  return;
}



// FUNCTION 140f1b0c0 FUN_140f1b0c0 body=249 status=ok
// SIG undefined FUN_140f1b0c0(void)

void FUN_140f1b0c0(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar2 = FUN_1416f8720((int)param_1[1]);
  if (lVar2 != 0) {
    lVar2 = FUN_140f2b5e0(*param_1);
    if (lVar2 != 0) {
      plVar3 = (longlong *)FUN_1416f8720((int)param_1[1]);
      lVar4 = (**(code **)(*plVar3 + 0x340))(plVar3);
      if (*(int *)(lVar4 + 0xd8) != -1) {
        *(undefined1 *)(*param_1 + 0x9bc) = 1;
        plVar3 = (longlong *)FUN_1416f8720((int)param_1[1]);
        lVar4 = (**(code **)(*plVar3 + 0x340))(plVar3);
        FUN_143015ae0(lVar2,lVar4 + 0xd8,0,1);
      }
    }
    plVar3 = (longlong *)FUN_1416f8720((int)param_1[1]);
    lVar2 = (**(code **)(*plVar3 + 0x340))(plVar3);
    lVar2 = FWeakObjectPtr::Get(lVar2 + 0x5c);
    if (lVar2 != 0) {
      lVar4 = FUN_1414ecd30();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) && (lVar4 = FUN_140e971d0(*param_1), lVar4 != 0)) {
        FUN_140d02900(lVar4,lVar2);
      }
    }
  }
  return;
}



// FUNCTION 140f1b1c0 FUN_140f1b1c0 body=300 status=ok
// SIG undefined FUN_140f1b1c0(void)

void FUN_140f1b1c0(longlong *param_1)

{
  longlong lVar1;
  undefined8 local_res8;
  
  if (*(longlong *)(*param_1 + 0xf38) != 0) {
    *(undefined1 *)(*(longlong *)(*param_1 + 0xf38) + 0x330) = 2;
    FText::operator=(*(longlong *)(*param_1 + 0xf38) + 0x350,*param_1 + 0xf58);
    FText::operator=(*(longlong *)(*param_1 + 0xf38) + 0x338,*param_1 + 0xc60);
    UItemViewerScrollSelector::SetNumPages(*(undefined8 *)(*param_1 + 0xf38),1);
    FName::FName(&local_res8,L"OnSlotButtonClicked",1);
    lVar1 = *(longlong *)(*param_1 + 0xf38);
    FWeakObjectPtr::operator=(lVar1 + 0x1b0);
    *(undefined8 *)(lVar1 + 0x1b8) = local_res8;
    FName::FName(&local_res8,L"OnSlotButtonFocused",1);
    lVar1 = *(longlong *)(*param_1 + 0xf38);
    FWeakObjectPtr::operator=(lVar1 + 0x1d0);
    *(undefined8 *)(lVar1 + 0x1d8) = local_res8;
    FName::FName(&local_res8,L"OnSlotButtonHovered",1);
    lVar1 = *(longlong *)(*param_1 + 0xf38);
    FWeakObjectPtr::operator=(lVar1 + 0x210);
    *(undefined8 *)(lVar1 + 0x218) = local_res8;
  }
  return;
}



// FUNCTION 140f1b2f0 FUN_140f1b2f0 body=258 status=ok
// SIG undefined FUN_140f1b2f0(void)

void FUN_140f1b2f0(longlong param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = *(undefined4 *)(param_1 + 8);
  local_res14 = *(undefined4 *)(param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(&local_res10);
    iVar1 = *(int *)(lVar4 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar7 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar7;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar7) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) & 0x30000000) == 0) {
      lVar4 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x14));
      if (lVar4 != 0) {
        lVar4 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x18));
        if (lVar4 != 0) {
          if (*(int *)(param_1 + 0x1c) == -1) {
            uVar5 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x14));
            uVar6 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x10));
            param_1 = param_1 + 0x20;
          }
          else {
            uVar5 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x18));
            uVar6 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x10));
            param_1 = param_1 + 0x1c;
          }
          FUN_1413f8950(uVar6,uVar5,param_1,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140f1b400 FUN_140f1b400 body=1248 status=ok
// SIG undefined FUN_140f1b400(void)

void FUN_140f1b400(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  wchar_t *pwVar3;
  char cVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  int *piVar9;
  int *piVar10;
  longlong *plVar11;
  wchar_t *pwVar12;
  undefined8 local_res8;
  longlong local_res10;
  int local_38;
  int local_34;
  longlong local_30;
  
  lVar5 = FWeakObjectPtr::Get(param_1 + 1);
  if (lVar5 != 0) {
    pwVar12 = (wchar_t *)0x0;
    pwVar6 = _guard_xfg_dispatch_icall_nop(L"&UGFxFightForYourLifeWidget::OnDownStart",L"::");
    pwVar7 = pwVar12;
    while (pwVar3 = pwVar6, pwVar3 != (wchar_t *)0x0) {
      pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar7 = pwVar3;
    }
    FName::FName(&local_res8,pwVar7 + 2,1);
    FUN_14074ba20(lVar5 + 0x1130,*param_1,&LAB_140f35cc0,local_res8);
    pwVar6 = _guard_xfg_dispatch_icall_nop(L"&UGFxFightForYourLifeWidget::OnDownStop",L"::");
    pwVar7 = pwVar12;
    while (pwVar3 = pwVar6, pwVar3 != (wchar_t *)0x0) {
      pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar7 = pwVar3;
    }
    FName::FName(&local_res8,pwVar7 + 2,1);
    FUN_14074ba20(lVar5 + 0x1180,*param_1,&LAB_140f35ce0,local_res8);
    pwVar6 = _guard_xfg_dispatch_icall_nop(L"&UGFxFightForYourLifeWidget::OnDownFinish",L"::");
    pwVar7 = pwVar12;
    while (pwVar3 = pwVar6, pwVar3 != (wchar_t *)0x0) {
      pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar7 = pwVar3;
    }
    FName::FName(&local_res8,pwVar7 + 2,1);
    FUN_14074ba20(lVar5 + 0x11b0,*param_1,FUN_140f35c10,local_res8);
    pwVar6 = _guard_xfg_dispatch_icall_nop(L"&UGFxFightForYourLifeWidget::OnGiveUpStop",L"::");
    pwVar7 = pwVar12;
    while (pwVar3 = pwVar6, pwVar3 != (wchar_t *)0x0) {
      pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar7 = pwVar3;
    }
    FName::FName(&local_res8,pwVar7 + 2,1);
    FUN_14074ba20(lVar5 + 0x12c8,*param_1,&LAB_140f36d60,local_res8);
    pwVar6 = _guard_xfg_dispatch_icall_nop
                       (L"&UGFxFightForYourLifeWidget::OnBeingRevivedStart",L"::");
    pwVar7 = pwVar12;
    while (pwVar3 = pwVar6, pwVar3 != (wchar_t *)0x0) {
      pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar7 = pwVar3;
    }
    FName::FName(&local_res8,pwVar7 + 2,1);
    FUN_14074ba20(lVar5 + 0x11f0,*param_1,&LAB_140f334d0,local_res8);
    pwVar6 = _guard_xfg_dispatch_icall_nop(L"&UGFxFightForYourLifeWidget::OnBeingRevivedStop",L"::")
    ;
    pwVar7 = pwVar12;
    while (pwVar3 = pwVar6, pwVar3 != (wchar_t *)0x0) {
      pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar7 = pwVar3;
    }
    FName::FName(&local_res8,pwVar7 + 2,1);
    FUN_14074ba20(lVar5 + 0x1220,*param_1,FUN_140f334e0,local_res8);
    pwVar6 = _guard_xfg_dispatch_icall_nop(L"&UGFxFightForYourLifeWidget::OnRevivingStart",L"::");
    pwVar7 = pwVar12;
    while (pwVar3 = pwVar6, pwVar3 != (wchar_t *)0x0) {
      pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar7 = pwVar3;
    }
    FName::FName(&local_res8,pwVar7 + 2,1);
    FUN_14074ba20(lVar5 + 0x1250,*param_1,FUN_140f3e7c0,local_res8);
    pwVar6 = _guard_xfg_dispatch_icall_nop(L"&UGFxFightForYourLifeWidget::OnRevivingStop",L"::");
    pwVar7 = pwVar12;
    while (pwVar3 = pwVar6, pwVar3 != (wchar_t *)0x0) {
      pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar7 = pwVar3;
    }
    FName::FName(&local_res8,pwVar7 + 2,1);
    FUN_14074ba20(lVar5 + 0x1270,*param_1,FUN_140f3e9a0,local_res8);
    pwVar6 = _guard_xfg_dispatch_icall_nop(L"&UGFxFightForYourLifeWidget::OnRevivingStop",L"::");
    pwVar7 = pwVar12;
    while (pwVar3 = pwVar6, pwVar3 != (wchar_t *)0x0) {
      pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar7 = pwVar3;
    }
    FName::FName(&local_res8,pwVar7 + 2,1);
    FUN_14074ba20(lVar5 + 0x1270,*param_1,FUN_140f3e9a0,local_res8);
    pwVar7 = _guard_xfg_dispatch_icall_nop
                       (L"&UGFxFightForYourLifeWidget::OnRevivingNonLocalStop",L"::");
    while (pwVar6 = pwVar7, pwVar6 != (wchar_t *)0x0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar6 + 1,L"::");
      pwVar12 = pwVar6;
    }
    FName::FName(&local_res10,pwVar12 + 2,1);
    uVar2 = *param_1;
    plVar11 = (longlong *)(lVar5 + 0x11a0);
    FWeakObjectPtr::operator=(&local_38,0);
    local_30 = 0;
    FWeakObjectPtr::operator=(&local_38,uVar2);
    local_res8 = 0;
    local_30 = local_res10;
    if ((local_res10 != 0) && (lVar8 = FWeakObjectPtr::Get(&local_38), lVar8 != 0)) {
      UObject::FindFunction(lVar8,local_30);
    }
    piVar9 = (int *)*plVar11;
    iVar1 = *(int *)(lVar5 + 0x11a8);
    for (piVar10 = piVar9; piVar10 != piVar9 + (longlong)iVar1 * 4; piVar10 = piVar10 + 4) {
      if ((((*piVar10 == local_38) && (piVar10[1] == local_34)) ||
          ((cVar4 = FWeakObjectPtr::IsValid(piVar10), cVar4 == '\0' &&
           (cVar4 = FWeakObjectPtr::IsValid(&local_38), cVar4 == '\0')))) &&
         (*(longlong *)(piVar10 + 2) == local_30)) {
        if ((int)((longlong)piVar10 - (longlong)piVar9 >> 4) != -1) goto LAB_140f1b8c6;
        break;
      }
    }
    iVar1 = *(int *)(lVar5 + 0x11a8);
    *(int *)(lVar5 + 0x11a8) = iVar1 + 1;
    if (*(int *)(lVar5 + 0x11ac) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar11,iVar1);
    }
    piVar9 = (int *)((longlong)iVar1 * 0x10 + *plVar11);
    *piVar9 = local_38;
    piVar9[1] = local_34;
    *(longlong *)(piVar9 + 2) = local_30;
LAB_140f1b8c6:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar11);
  }
  return;
}



// FUNCTION 140f1b8e0 FUN_140f1b8e0 body=358 status=ok
// SIG undefined FUN_140f1b8e0(void)

undefined4 FUN_140f1b8e0(longlong *param_1)

{
  undefined4 uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 local_28 [4];
  undefined1 local_24 [8];
  undefined4 local_1c;
  undefined4 local_18;
  
  lVar6 = *param_1;
  lVar3 = FUN_140f2b2d0(lVar6);
  if (lVar3 != 0) {
    lVar4 = FUN_142eb65a0(lVar6);
    plVar5 = *(longlong **)(lVar6 + 0xa00);
    plVar8 = plVar5 + (longlong)*(int *)(lVar6 + 0xa08) * 0x1b;
    for (; plVar5 != plVar8; plVar5 = plVar5 + 0x1b) {
      if ((lVar4 != 0) && (lVar4 == *plVar5)) {
        FUN_140f16950(local_28,CONCAT71((int7)((ulonglong)plVar5 >> 8),1),lVar3);
        goto LAB_140f1b9fb;
      }
    }
    cVar2 = FUN_140f31c30(lVar6);
    if (cVar2 != '\0') {
      FUN_140f16950(local_28,2,lVar3);
      goto LAB_140f1b9fb;
    }
  }
  local_28[0] = 0;
  FWeakObjectPtr::operator=(local_24,0);
  FWeakObjectPtr::operator=(&local_1c,0);
  cVar2 = FWeakObjectPtr::IsValid(local_24);
  if (cVar2 != '\0') {
    plVar5 = (longlong *)FWeakObjectPtr::Get(local_24);
    lVar6 = (**(code **)(*plVar5 + 0x340))(plVar5);
    cVar2 = FWeakObjectPtr::IsValid(lVar6 + 0xdc);
    if (cVar2 == '\0') {
      cVar2 = FWeakObjectPtr::IsValid(lVar6 + 0x5c);
      if (cVar2 != '\0') {
        local_1c = *(undefined4 *)(lVar6 + 0x5c);
        local_18 = *(undefined4 *)(lVar6 + 0x60);
      }
    }
    else {
      local_1c = *(undefined4 *)(lVar6 + 0xdc);
      local_18 = *(undefined4 *)(lVar6 + 0xe0);
    }
  }
LAB_140f1b9fb:
  uVar7 = FWeakObjectPtr::Get(local_24);
  FUN_140f31f10(*param_1,uVar7);
  lVar6 = *param_1;
  LOCK();
  *(undefined4 *)(lVar6 + 0xfb4) = 1;
  UNLOCK();
  LOCK();
  *(undefined4 *)(lVar6 + 0x9f0) = 1;
  UNLOCK();
  LOCK();
  uVar1 = *(undefined4 *)(lVar6 + 0x588);
  *(undefined4 *)(lVar6 + 0x588) = 1;
  UNLOCK();
  LOCK();
  *(undefined4 *)(lVar6 + 0x9ec) = 1;
  UNLOCK();
  return uVar1;
}



// FUNCTION 140f1ba50 FUN_140f1ba50 body=297 status=ok
// SIG undefined FUN_140f1ba50(void)

void FUN_140f1ba50(longlong *param_1)

{
  longlong lVar1;
  undefined8 local_res8;
  
  if (*(longlong *)(*param_1 + 0xf28) != 0) {
    *(undefined1 *)(*(longlong *)(*param_1 + 0xf28) + 0x330) = 2;
    FText::operator=(*(longlong *)(*param_1 + 0xf28) + 0x350,*param_1 + 0xf58);
    FText::operator=(*(longlong *)(*param_1 + 0xf28) + 0x338,*param_1 + 0xc60);
    UItemViewerScrollSelector::SetNumPages(*(undefined8 *)(*param_1 + 0xf28),0);
    FName::FName(&local_res8,L"OnSlotButtonClicked",1);
    lVar1 = *(longlong *)(*param_1 + 0xf28);
    FWeakObjectPtr::operator=(lVar1 + 0x1b0);
    *(undefined8 *)(lVar1 + 0x1b8) = local_res8;
    FName::FName(&local_res8,L"OnSlotButtonFocused",1);
    lVar1 = *(longlong *)(*param_1 + 0xf28);
    FWeakObjectPtr::operator=(lVar1 + 0x1d0);
    *(undefined8 *)(lVar1 + 0x1d8) = local_res8;
    FName::FName(&local_res8,L"OnSlotButtonHovered",1);
    lVar1 = *(longlong *)(*param_1 + 0xf28);
    FWeakObjectPtr::operator=(lVar1 + 0x210);
    *(undefined8 *)(lVar1 + 0x218) = local_res8;
  }
  return;
}



// FUNCTION 140f1bb80 FUN_140f1bb80 body=129 status=ok
// SIG undefined FUN_140f1bb80(void)

void FUN_140f1bb80(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_140f2b5e0(*param_1);
  if (lVar1 != 0) {
    FUN_14300bce0(lVar1,param_1 + 0x14);
  }
  FUN_14109ed60(*param_1);
  lVar1 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x23));
  if (lVar1 != 0) {
    lVar1 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0x11c));
    if (lVar1 != 0) {
      uVar2 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0x11c));
      uVar3 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x23));
      FUN_1413f8af0(uVar3,uVar2);
    }
  }
  return;
}



// FUNCTION 140f1bc10 FUN_140f1bc10 body=484 status=ok
// SIG undefined FUN_140f1bc10(void)

undefined4 FUN_140f1bc10(longlong *param_1)

{
  undefined4 uVar1;
  BOOL BVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar6;
  
  uVar4 = FUN_140f2b2d0(*param_1);
  FWeakObjectPtr::operator=(*param_1 + 0x9d4,uVar4);
  lVar6 = 0xc18;
  lVar5 = 0xc18;
  LOCK();
  *(undefined4 *)(*param_1 + 0xfb8) = 1;
  UNLOCK();
  if (*(char *)(*param_1 + 0xe31) != '\x01') {
    lVar5 = 0xa80;
  }
  FUN_140f08820(lVar5 + *param_1,1);
  lpCriticalSection = (LPCRITICAL_SECTION)(*param_1 + 0xf18);
  BVar2 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar2 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  if (*(char *)(*param_1 + 0xe31) != '\x01') {
    lVar6 = 0xa80;
  }
  FUN_140f0b090(*param_1 + lVar6,0xffffffff,0);
  LeaveCriticalSection(lpCriticalSection);
  lVar5 = *param_1;
  if (*(char *)(lVar5 + 0x9c0) == '\0') {
    FUN_140f47890(lVar5,0);
    lVar5 = *param_1;
  }
  FUN_140f2c5f0(lVar5,(int)param_1[1]);
  lVar5 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0xc));
  if (lVar5 != 0) {
    uVar4 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0xc));
    FUN_140f31f10(*param_1,uVar4);
  }
  lVar5 = *param_1;
  if (*(longlong *)(lVar5 + 0xe00) != 0) {
    iVar3 = FUN_142eed730();
    iVar3 = iVar3 + -1;
    lVar5 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0xc));
    if (lVar5 != 0) {
      uVar4 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0xc));
      FUN_142f0bc30(*(undefined8 *)(*param_1 + 0xe00),uVar4,iVar3);
    }
    lVar5 = FUN_1416f8720((int)param_1[2]);
    if (lVar5 != 0) {
      uVar4 = FUN_1416f8720((int)param_1[2]);
      FUN_142f0bc30(*(undefined8 *)(*param_1 + 0xe00),uVar4,iVar3);
    }
    lVar5 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0x14));
    if (lVar5 != 0) {
      uVar4 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0x14));
      FUN_142f0bc30(*(undefined8 *)(*param_1 + 0xe00),uVar4,iVar3);
    }
    FUN_142f0bc30(*(undefined8 *)(*param_1 + 0xe00),*(undefined8 *)(*param_1 + 0xa70),iVar3);
    lVar5 = *param_1;
  }
  LOCK();
  *(undefined4 *)(lVar5 + 0xfb4) = 1;
  UNLOCK();
  LOCK();
  *(undefined4 *)(lVar5 + 0x9f0) = 1;
  UNLOCK();
  LOCK();
  uVar1 = *(undefined4 *)(lVar5 + 0x588);
  *(undefined4 *)(lVar5 + 0x588) = 1;
  UNLOCK();
  LOCK();
  *(undefined4 *)(lVar5 + 0x9ec) = 1;
  UNLOCK();
  return uVar1;
}



// FUNCTION 140f1be00 FUN_140f1be00 body=127 status=ok
// SIG undefined FUN_140f1be00(void)

void FUN_140f1be00(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FWeakObjectPtr::Get(*param_1 + 0x5d8);
  if (lVar2 != 0) {
    lVar3 = FUN_14145f370();
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
      FUN_1407665e0(lVar2 + 0xbc8,*param_1);
      FUN_1407665e0(lVar2 + 0xbd8,*param_1);
    }
  }
  return;
}



// FUNCTION 140f1be80 FUN_140f1be80 body=955 status=ok
// SIG undefined FUN_140f1be80(void)

undefined4 FUN_140f1be80(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong *plVar14;
  byte bVar15;
  longlong *plVar16;
  longlong *plVar17;
  undefined1 local_138 [8];
  longlong *local_130;
  longlong *local_110;
  longlong *local_f8;
  longlong local_b8;
  
  lVar8 = FWeakObjectPtr::Get(*param_1 + 0x594);
  if (lVar8 != 0) {
    lVar9 = FUN_1413f82e0();
    bVar6 = true;
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar6 = false;
    }
    if (bVar6) {
      plVar16 = *(longlong **)(*param_1 + 0xa00);
      plVar17 = plVar16 + (longlong)*(int *)(*param_1 + 0xa08) * 0x1b;
      for (; plVar16 != plVar17; plVar16 = plVar16 + 0x1b) {
        lVar9 = plVar16[0xb];
        if ((longlong *)*plVar16 == (longlong *)0x0) {
          lVar10 = 0;
        }
        else {
          lVar10 = (**(code **)(*(longlong *)*plVar16 + 0x340))();
          lVar10 = FWeakObjectPtr::Get(lVar10 + 0xdc);
        }
        lVar11 = FUN_140c42900(lVar8,lVar9);
        lVar12 = FUN_1416f8720((int)param_1[1]);
        if (((((lVar12 == 0) || (lVar12 = FUN_1416f8720((int)param_1[1]), lVar12 == plVar16[0xb]))
             || ((lVar12 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0xc)), lVar12 != 0 &&
                 (lVar12 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0xc)), lVar11 == lVar12
                 )))) || (lVar11 != lVar10)) && (*plVar16 != 0)) {
          if ((lVar9 == 0) || (cVar7 = FUN_140c48ea0(lVar8,lVar9), cVar7 == '\0')) {
            bVar15 = 1;
          }
          else {
            bVar15 = 0;
          }
          uVar13 = (**(code **)(*(longlong *)(lVar8 + 0xd80) + 0x18))();
          FUN_1411e38c0(local_138,lVar11,uVar13);
          (**(code **)(*(longlong *)*plVar16 + 0x330))((longlong *)*plVar16,local_138);
          plVar14 = (longlong *)*plVar16;
          lVar10 = *plVar14;
          if (bVar15 == 0) {
            cVar7 = (**(code **)(lVar10 + 0x388))();
            if (cVar7 == '\x01') {
              plVar14 = (longlong *)*plVar16;
              uVar13 = 0;
              lVar10 = *plVar14;
              goto LAB_140f1c02f;
            }
          }
          else {
            uVar13 = 1;
LAB_140f1c02f:
            (**(code **)(lVar10 + 0x360))(plVar14,uVar13);
          }
          if (plVar16[1] != 0) {
            FUN_142ed3c20(plVar16[1],bVar15,1);
            (**(code **)(*(longlong *)(plVar16[1] + 0x170) + 0x38))
                      ((longlong *)(plVar16[1] + 0x170),bVar15 ^ 1);
          }
          if ((bVar15 == 0) && (cVar7 = FUN_140f2ed30(*param_1,lVar9), cVar7 == '\0')) {
            lVar9 = *plVar16;
            if (*(longlong *)(lVar9 + 0x4d0) != 0) {
              FUN_14203e030(*(longlong *)(lVar9 + 0x4d0),L"unlockAnim");
            }
            cVar7 = FWeakObjectPtr::IsValid(lVar9 + 0x3e4);
            if ((cVar7 == '\0') && (*(longlong *)(lVar9 + 0x560) != 0)) {
              FUN_14203e030(*(longlong *)(lVar9 + 0x560),L"unlockAnim");
            }
            if (plVar16[1] != 0) {
              *(undefined1 *)(plVar16 + 6) = 1;
              FUN_142ed3c20(plVar16[1],0,1);
              (**(code **)(*(longlong *)(plVar16[1] + 0x170) + 0x38))
                        ((longlong *)(plVar16[1] + 0x170),1);
              puVar3 = (undefined8 *)(plVar16[1] + 0x318);
              cVar7 = FUN_14208d2d0(plVar16[1],puVar3,L"lockedSlot");
              if (cVar7 != '\0') {
                FUN_14203e030(*puVar3,L"unlockAnim");
              }
            }
          }
          if (local_b8 != 0) {
            FMemory::Free();
          }
          plVar14 = local_f8;
          if (local_f8 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_f8 + 1;
            lVar9 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*local_f8)(local_f8);
              LOCK();
              piVar2 = (int *)((longlong)plVar14 + 0xc);
              iVar4 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*plVar14 + 8))(plVar14,1);
              }
            }
          }
          plVar14 = local_110;
          if (local_110 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_110 + 1;
            lVar9 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*local_110)(local_110);
              LOCK();
              piVar2 = (int *)((longlong)plVar14 + 0xc);
              iVar4 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*plVar14 + 8))(plVar14,1);
              }
            }
          }
          plVar14 = local_130;
          if (local_130 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_130 + 1;
            lVar9 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*local_130)(local_130);
              LOCK();
              piVar2 = (int *)((longlong)plVar14 + 0xc);
              iVar4 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*plVar14 + 8))(plVar14,1);
              }
            }
          }
        }
      }
    }
  }
  LOCK();
  uVar5 = *(undefined4 *)(*param_1 + 0x9f0);
  *(undefined4 *)(*param_1 + 0x9f0) = 1;
  UNLOCK();
  LOCK();
  *(undefined4 *)(*param_1 + 0xfac) = 1;
  UNLOCK();
  return uVar5;
}



// FUNCTION 140f1c240 FUN_140f1c240 body=250 status=ok
// SIG undefined FUN_140f1c240(void)

void FUN_140f1c240(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined4 local_res8;
  undefined4 local_resc;
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10 [8];
  
  FWeakObjectPtr::operator=(&local_28,0);
  FWeakObjectPtr::operator=(local_20,0);
  FWeakObjectPtr::operator=(&local_18,0);
  FWeakObjectPtr::operator=(local_10,0);
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x618) == 7) {
    puVar3 = local_10;
  }
  else {
    FWeakObjectPtr::operator=(&local_res8,0);
    local_28 = local_res8;
    local_24 = local_resc;
    FWeakObjectPtr::operator=(&local_res8,0);
    local_18 = local_res8;
    local_14 = local_resc;
    FWeakObjectPtr::operator=(local_10,*(undefined8 *)(*param_1 + 0xf30));
    lVar1 = *param_1;
    puVar3 = local_20;
  }
  FWeakObjectPtr::operator=(puVar3,*(undefined8 *)(lVar1 + 0xf28));
  lVar4 = *param_1;
  lVar1 = *(longlong *)(lVar4 + 0xf20);
  local_38 = lVar1;
  if (lVar1 == 0) {
    local_30 = 0;
  }
  else {
    uVar2 = UBlendableInterface::GetPrivateStaticClass();
    local_30 = UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar2);
    lVar4 = *param_1;
  }
  FUN_142ecfd10(lVar4,&local_38,&local_28);
  return;
}



// FUNCTION 140f1c340 FUN_140f1c340 body=1218 status=ok
// SIG undefined FUN_140f1c340(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140f1c340(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined2 *puVar9;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  undefined2 *local_28;
  int local_20;
  
  if ((int)param_1[1] == 0) {
    lVar7 = FWeakObjectPtr::Get(*param_1 + 0x58c);
    if (lVar7 != 0) {
      lVar8 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if ((bVar5) && (lVar8 = FUN_140cff230(lVar7), lVar8 != 0)) {
        lVar4 = *param_1;
        FUN_140cfc0b0(lVar7,lVar4 + 0x850,lVar4 + 0x854,lVar4 + 0x85c,lVar4 + 0x860,lVar4 + 0x858);
        if (*(char *)(*param_1 + 0x868) != '\0') {
          *(undefined1 *)(*param_1 + 0x864) = *(undefined1 *)(lVar8 + 0x6b);
          *(undefined1 *)(*param_1 + 0x865) = *(undefined1 *)(lVar8 + 0x2e9);
          *(undefined1 *)(*param_1 + 0x866) = *(undefined1 *)(lVar8 + 0x2ea);
          *(undefined1 *)(lVar8 + 0x1c0) = 1;
          *(undefined1 *)(lVar8 + 0x28) = 1;
          Z_Construct_UClass_ACharacterGunfire_Statics::NewProp_bSkipWallChecks_SetBit(lVar7);
        }
        FUN_140f2bf90(&local_38,0);
        if (local_38 != (longlong *)0x0) {
          (**(code **)(*local_38 + 0x48))(local_38,-(*(char *)(*param_1 + 0x864) != '\0') & 2);
        }
        plVar6 = local_30;
        if (local_30 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_30 + 1;
          lVar7 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_30)(local_30);
            LOCK();
            piVar2 = (int *)((longlong)plVar6 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            goto joined_r0x000140f1c619;
          }
        }
      }
    }
  }
  else if ((int)param_1[1] == 2) {
    *(undefined1 *)(*param_1 + 0x850) = 0;
    *(undefined4 *)(*param_1 + 0x854) = *(undefined4 *)(*param_1 + 0x71c);
    *(undefined4 *)(*param_1 + 0x85c) = *(undefined4 *)(*param_1 + 0x75c);
    *(undefined4 *)(*param_1 + 0x860) = *(undefined4 *)(*param_1 + 0x794);
    *(undefined4 *)(*param_1 + 0x858) = *(undefined4 *)(*param_1 + 0x720);
    if (*(char *)(*param_1 + 0x868) != '\0') {
      *(undefined1 *)(*param_1 + 0x864) = 1;
      *(undefined1 *)(*param_1 + 0x865) = 0;
      *(undefined1 *)(*param_1 + 0x866) = 0;
      lVar7 = FWeakObjectPtr::Get(*param_1 + 0x58c);
      if (lVar7 != 0) {
        lVar8 = FUN_14145f370();
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
          lVar8 = FUN_140cff230(lVar7);
          if (lVar8 != 0) {
            *(undefined1 *)(lVar8 + 0x6b) = *(undefined1 *)(*param_1 + 0x864);
            *(undefined1 *)(lVar8 + 0x28) = 1;
            FUN_140d131d0(lVar7);
          }
          Z_Construct_UClass_ACharacterGunfire_Statics::NewProp_bSkipWallChecks_SetBit(lVar7);
        }
      }
    }
    FUN_140f2bf90(&local_48,0);
    if (local_48 != (longlong *)0x0) {
      (**(code **)(*local_48 + 0x48))(local_48,-(*(char *)(*param_1 + 0x864) != '\0') & 2);
    }
    plVar6 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        local_30 = local_40;
joined_r0x000140f1c619:
        if (iVar3 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
  }
  if ((DAT_146b17150 != 0) && (lVar7 = FUN_142874ac0(), lVar7 != 0)) {
    FUN_14247c070(lVar7,*(undefined1 *)(*param_1 + 0x850),1000);
  }
  lVar7 = FWeakObjectPtr::Get(*param_1 + 0x58c);
  if (lVar7 != 0) {
    lVar8 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) goto LAB_140f1c6a5;
  }
  lVar7 = 0;
LAB_140f1c6a5:
  FUN_140f36fe0(*param_1,0);
  FUN_140f37160(*param_1,0);
  lVar8 = *param_1;
  if (DAT_146b17150 != 0) {
    FUN_142874ac0();
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146872958) && (_Init_thread_header(&DAT_146872958), DAT_146872958 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    DAT_146872950 =
         (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Tonemapper.OverrideToe")
    ;
    _Init_thread_footer(&DAT_146872958);
  }
  plVar6 = DAT_146872950;
  FString::PrintfImpl(&local_28,&DAT_144050d74,(double)(*(float *)(lVar8 + 0x860) * -0.01));
  puVar9 = &DAT_143f3eda8;
  if (local_20 != 0) {
    puVar9 = local_28;
  }
  (**(code **)(*plVar6 + 0x60))(plVar6,puVar9,0x2000000);
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (DAT_146b17150 != 0) {
    *(float *)(DAT_146b17150 + 0x8fc) =
         (*(float *)(*param_1 + 0x85c) / *(float *)(lVar7 + 0x1238)) *
         (DAT_14629dc3c - _DAT_14629dc38) + _DAT_14629dc38;
  }
  return;
}



// FUNCTION 140f1c810 FUN_140f1c810 body=426 status=ok
// SIG undefined FUN_140f1c810(void)

void FUN_140f1c810(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_res8;
  
  lVar2 = FUN_1416f8720((int)param_1[1]);
  if (lVar2 != 0) {
    lVar2 = FUN_1416f8720((int)param_1[1]);
    *(undefined1 *)(lVar2 + 0x330) = 1;
    lVar2 = FUN_1416f8720((int)param_1[1]);
    FText::operator=(lVar2 + 0x350,*param_1 + 0xf40);
    lVar2 = FUN_1416f8720((int)param_1[1]);
    FText::operator=(lVar2 + 0x338,*param_1 + 0xc60);
    uVar3 = FUN_1416f8720((int)param_1[1]);
    UItemViewerScrollSelector::SetNumPages(uVar3,0);
    uVar3 = FUN_1416f8720((int)param_1[1]);
    lVar2 = *param_1;
    iVar1 = *(int *)(lVar2 + 0xc28);
    *(int *)(lVar2 + 0xc28) = iVar1 + 1;
    if (*(int *)(lVar2 + 0xc2c) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar2 + 0xc20,iVar1);
    }
    *(undefined8 *)(*(longlong *)(lVar2 + 0xc20) + (longlong)iVar1 * 8) = uVar3;
    FName::FName(&local_res8,L"OnSlotButtonClicked",1);
    lVar2 = FUN_1416f8720((int)param_1[1]);
    FWeakObjectPtr::operator=(lVar2 + 0x1b0,*param_1);
    *(undefined8 *)(lVar2 + 0x1b8) = local_res8;
    FName::FName(&local_res8,L"OnSlotButtonFocused",1);
    lVar2 = FUN_1416f8720((int)param_1[1]);
    FWeakObjectPtr::operator=(lVar2 + 0x1d0,*param_1);
    *(undefined8 *)(lVar2 + 0x1d8) = local_res8;
    lVar2 = FUN_1416f8720((int)param_1[1]);
    *(undefined8 *)(lVar2 + 0x400) = *(undefined8 *)(*param_1 + 0xf30);
    FName::FName(&local_res8,L"OnSlotButtonHovered",1);
    lVar2 = FUN_1416f8720((int)param_1[1]);
    FWeakObjectPtr::operator=(lVar2 + 0x210,*param_1);
    *(undefined8 *)(lVar2 + 0x218) = local_res8;
  }
  return;
}



// FUNCTION 140f1c9c0 FUN_140f1c9c0 body=149 status=ok
// SIG undefined FUN_140f1c9c0(void)

void FUN_140f1c9c0(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0xc));
  if (lVar1 != 0) {
    lVar1 = FUN_1416f8720(*(undefined4 *)(param_1 + 1));
    if (lVar1 != 0) {
      plVar2 = (longlong *)FUN_1416f8720(*(undefined4 *)(param_1 + 1));
      (**(code **)(*plVar2 + 0x398))(plVar2);
      FUN_140f437b0(*param_1,param_1 + 0x1d);
      lVar1 = FUN_140e97230(*param_1);
      if (lVar1 != 0) {
        uVar3 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0xc));
        FUN_1413f8950(lVar1,uVar3,param_1 + 0x1d,0);
      }
      FUN_14109ed60(*param_1);
    }
  }
  return;
}



// FUNCTION 140f1ca60 FUN_140f1ca60 body=418 status=ok
// SIG undefined FUN_140f1ca60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140f1ca60(longlong *param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_d8 [32];
  code *local_b8 [2];
  undefined1 local_a8 [32];
  undefined8 local_88;
  undefined4 local_78;
  code *local_68;
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  lVar3 = *param_1;
  local_38 = (longlong *)0x0;
  local_28 = 0;
  puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_58);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[1] = lVar3;
    *puVar4 = &PTR_FUN_143f77b70;
  }
  local_88 = 0;
  local_68 = (code *)&LAB_140f26a20;
  local_78 = 0;
  if (local_28 != 0) {
    plVar5 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar5 = local_38;
    }
    if (plVar5 != (longlong *)0x0) {
      plVar5 = (longlong *)(**(code **)*plVar5)(plVar5,local_a8);
      (**(code **)(*plVar5 + 8))(plVar5);
      local_b8[0] = local_68;
      goto LAB_140f1cb13;
    }
  }
  local_b8[0] = FUN_1407c3030;
LAB_140f1cb13:
  lVar3 = *param_1;
  cVar2 = *(char *)(lVar3 + 0xe31);
  uVar6 = FUN_140f2b5e0(lVar3);
  lVar8 = 0xc18;
  if (cVar2 != '\x01') {
    lVar8 = 0xa80;
  }
  FUN_140f106a0(lVar8 + lVar3,param_1 + 1,uVar6,local_b8);
  LOCK();
  *(undefined4 *)(*param_1 + 0xfa8) = 1;
  UNLOCK();
  FUN_140f4b9a0(*param_1,0,0);
  LOCK();
  *(undefined4 *)(*param_1 + 0xfac) = 1;
  UNLOCK();
  lVar3 = *param_1;
  LOCK();
  *(undefined4 *)(lVar3 + 0xfb4) = 1;
  UNLOCK();
  LOCK();
  *(undefined4 *)(lVar3 + 0x9f0) = 1;
  UNLOCK();
  LOCK();
  uVar1 = *(uint *)(lVar3 + 0x588);
  *(uint *)(lVar3 + 0x588) = 1;
  uVar7 = (ulonglong)uVar1;
  UNLOCK();
  LOCK();
  *(undefined4 *)(lVar3 + 0x9ec) = 1;
  UNLOCK();
  if (local_28 != 0) {
    plVar5 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar5 = local_38;
    }
    if (plVar5 != (longlong *)0x0) {
      uVar7 = (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    uVar7 = FMemory::Free();
  }
  return uVar7;
}



// FUNCTION 140f1cc10 FUN_140f1cc10 body=596 status=ok
// SIG undefined FUN_140f1cc10(void)

void FUN_140f1cc10(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  undefined2 *puVar9;
  uint uVar10;
  wchar_t **ppwVar11;
  wchar_t *pwVar12;
  bool bVar13;
  wchar_t *local_18;
  undefined8 local_10;
  
  if (*(longlong *)(*param_1 + 0x530) != 0) {
    local_18 = (wchar_t *)0x0;
    local_10 = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    FGenericPlatformString::Memcpy(local_18,L"default",0x10);
    plVar3 = (longlong *)FWeakObjectPtr::Get(*param_1 + 0x3e4);
    if (plVar3 != (longlong *)0x0) {
      uVar4 = UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass();
      lVar5 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar4);
      if (lVar5 != 0) {
        bVar13 = false;
        uVar4 = (**(code **)(*(longlong *)*param_1 + 0x148))();
        lVar6 = FUN_142f6c9f0(uVar4);
        if (lVar6 != 0) {
          plVar3 = (longlong *)FUN_142f5ed60(lVar6);
          if (*plVar3 != 0) {
            lVar7 = FUN_142f71d80();
            lVar6 = *plVar3;
            for (lVar1 = lVar6; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
              if (lVar1 == lVar7) goto LAB_140f1ccf6;
            }
          }
          lVar6 = 0;
LAB_140f1ccf6:
          if (*(longlong *)(lVar5 + 0x178) != 0) {
            lVar7 = FUN_142f71d80();
            lVar5 = *(longlong *)(lVar5 + 0x178);
            for (lVar1 = lVar5; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
              if (lVar1 == lVar7) goto LAB_140f1cd24;
            }
          }
          lVar5 = 0;
LAB_140f1cd24:
          bVar13 = lVar6 == lVar5;
        }
        pwVar12 = L"missionItemNotTracked";
        if (bVar13) {
          pwVar12 = L"missionItemTracked";
        }
        if (local_18 != pwVar12) {
          if (*pwVar12 == L'\0') {
            uVar10 = 0;
          }
          else {
            lVar5 = -1;
            do {
              lVar5 = lVar5 + 1;
            } while (pwVar12[lVar5] != L'\0');
            uVar10 = (int)lVar5 + 1;
          }
          uVar8 = local_10._4_4_;
          iVar2 = 0;
          local_10 = (ulonglong)local_10._4_4_ << 0x20;
          if (uVar8 != uVar10) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_18,uVar10);
            iVar2 = (int)local_10;
            uVar8 = local_10._4_4_;
          }
          local_10 = CONCAT44(local_10._4_4_,iVar2 + uVar10);
          if ((int)uVar8 < (int)(iVar2 + uVar10)) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18);
          }
          if (uVar10 != 0) {
            _guard_xfg_dispatch_icall_nop(local_18,pwVar12,(longlong)(int)uVar10 * 2);
          }
        }
      }
    }
    if (*(int *)(*param_1 + 0x618) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = *(undefined2 **)(*param_1 + 0x610);
    }
    pwVar12 = L"";
    if ((int)local_10 != 0) {
      pwVar12 = local_18;
    }
    iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(pwVar12,puVar9);
    if (iVar2 != 0) {
      FUN_14203dbf0(*(undefined8 *)(*param_1 + 0x530),&local_18);
      pwVar12 = local_18;
      lVar5 = *param_1;
      ppwVar11 = (wchar_t **)(lVar5 + 0x610);
      if (ppwVar11 != &local_18) {
        lVar6 = (longlong)(int)local_10;
        *(int *)(lVar5 + 0x618) = (int)local_10;
        if (((int)local_10 == 0) && (*(int *)(lVar5 + 0x61c) == 0)) {
          *(undefined4 *)(lVar5 + 0x61c) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppwVar11,local_10 & 0xffffffff);
          _guard_xfg_dispatch_icall_nop(*ppwVar11,pwVar12,lVar6 * 2);
        }
      }
    }
    if (local_18 != (wchar_t *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140f1ce70 FUN_140f1ce70 body=205 status=ok
// SIG undefined FUN_140f1ce70(void)

void FUN_140f1ce70(longlong param_1,undefined8 param_2,longlong *param_3)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  
  if (param_3 != (longlong *)0x0) {
    lVar3 = FUN_1413565b0();
    if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) &&
       (lVar3 = (**(code **)(*param_3 + 0x340))(param_3), *(char *)(lVar3 + 0x5a) == '\0')) {
      if (*(int *)(lVar3 + 0xd8) == -1) {
        if (*(char *)((longlong)param_3 + 0x6b1) == '\0') {
          return;
        }
        *(undefined1 *)((longlong)param_3 + 0x6b1) = 0;
      }
      else {
        if ((**(longlong **)(param_1 + 0x10) == 0) ||
           (**(longlong **)(param_1 + 0x10) == *(longlong *)(lVar3 + 0xa8))) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if ((**(char **)(param_1 + 8) == '\0') || (bVar1)) {
          cVar2 = '\0';
        }
        else {
          cVar2 = '\x01';
        }
        if (*(char *)((longlong)param_3 + 0x6b1) == cVar2) {
          return;
        }
        *(char *)((longlong)param_3 + 0x6b1) = cVar2;
      }
      FUN_142ecf920(param_3,0);
    }
  }
  return;
}



// FUNCTION 140f1cf40 FUN_140f1cf40 body=344 status=ok
// SIG undefined FUN_140f1cf40(void)

void FUN_140f1cf40(longlong *param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  undefined8 local_res8;
  
  lVar4 = FWeakObjectPtr::Get(*param_1 + 0x5d8);
  if (lVar4 != 0) {
    lVar5 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      pwVar6 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::BeginTrackingGrenades",L"::");
      pwVar3 = (wchar_t *)0x0;
      while (pwVar2 = pwVar6, pwVar2 != (wchar_t *)0x0) {
        pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar3 = pwVar2;
      }
      FName::FName(&local_res8,pwVar3 + 2,1);
      FUN_14074ba20(lVar4 + 0xbc8,*param_1,FUN_140f26410,local_res8);
      pwVar6 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::EndTrackingGrenades",L"::");
      pwVar3 = (wchar_t *)0x0;
      while (pwVar2 = pwVar6, pwVar2 != (wchar_t *)0x0) {
        pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar3 = pwVar2;
      }
      FName::FName(&local_res8,pwVar3 + 2,1);
      FUN_14074ba20(lVar4 + 0xbd8,*param_1,FUN_140f2a2a0,local_res8);
    }
  }
  return;
}



// FUNCTION 140f1d0a0 FUN_140f1d0a0 body=123 status=ok
// SIG undefined FUN_140f1d0a0(void)

undefined4 FUN_140f1d0a0(longlong *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0xc));
  uVar4 = FUN_1416f8720((int)param_1[2]);
  FUN_140f4b9a0(*param_1,uVar4,uVar3);
  FUN_140f27170(*param_1,1,6,param_1 + 1);
  LOCK();
  *(undefined4 *)(*param_1 + 0x9ec) = 1;
  UNLOCK();
  lVar2 = *param_1;
  LOCK();
  *(undefined4 *)(lVar2 + 0xfb4) = 1;
  UNLOCK();
  LOCK();
  *(undefined4 *)(lVar2 + 0x9f0) = 1;
  UNLOCK();
  LOCK();
  uVar1 = *(undefined4 *)(lVar2 + 0x588);
  *(undefined4 *)(lVar2 + 0x588) = 1;
  UNLOCK();
  LOCK();
  *(undefined4 *)(lVar2 + 0x9ec) = 1;
  UNLOCK();
  return uVar1;
}



// FUNCTION 140f1d120 FUN_140f1d120 body=1134 status=ok
// SIG undefined FUN_140f1d120(void)

void FUN_140f1d120(longlong *param_1)

{
  int iVar1;
  wchar_t *pwVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  undefined8 uVar7;
  wchar_t *pwVar8;
  uint uVar9;
  wchar_t *pwVar10;
  undefined8 local_res8;
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(&local_res8);
  FUN_14172a400(&local_res8);
  cVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar3 != '\0') {
    lVar5 = FWeakObjectPtr::Get(&local_res10);
    pwVar10 = (wchar_t *)0x0;
    iVar1 = *(int *)(lVar5 + 0xc);
    pwVar8 = pwVar10;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar9 = iVar1 >> 0x1f & 0xffff;
      uVar4 = iVar1 + uVar9;
      pwVar8 = (wchar_t *)
               (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
               (longlong)(int)((uVar4 & 0xffff) - uVar9) * 0x18);
    }
    if ((*(uint *)(pwVar8 + 4) & 0x30000000) == 0) {
      if (*(longlong *)(*param_1 + 0x670) != 0) {
        pwVar6 = _guard_xfg_dispatch_icall_nop(L"&UGFxInteractionPrompt::OnUsedPrimary",L"::");
        pwVar8 = pwVar10;
        while (pwVar2 = pwVar6, pwVar2 != (wchar_t *)0x0) {
          pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
          pwVar8 = pwVar2;
        }
        FName::FName(&local_res8,pwVar8 + 2,1);
        TMulticastScriptDelegate<FWeakObjectPtr>::Remove
                  (*(longlong *)(*param_1 + 0x670) + 0x328,*param_1,local_res8);
        pwVar6 = _guard_xfg_dispatch_icall_nop(L"&UGFxInteractionPrompt::OnUsedPrimaryHold",L"::");
        pwVar8 = pwVar10;
        while (pwVar2 = pwVar6, pwVar2 != (wchar_t *)0x0) {
          pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
          pwVar8 = pwVar2;
        }
        FName::FName(&local_res8,pwVar8 + 2,1);
        TMulticastScriptDelegate<FWeakObjectPtr>::Remove
                  (*(longlong *)(*param_1 + 0x670) + 0x338,*param_1,local_res8);
        pwVar6 = _guard_xfg_dispatch_icall_nop(L"&UGFxInteractionPrompt::OnUsedSecondary",L"::");
        pwVar8 = pwVar10;
        while (pwVar2 = pwVar6, pwVar2 != (wchar_t *)0x0) {
          pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
          pwVar8 = pwVar2;
        }
        FName::FName(&local_res8,pwVar8 + 2,1);
        TMulticastScriptDelegate<FWeakObjectPtr>::Remove
                  (*(longlong *)(*param_1 + 0x670) + 0x348,*param_1,local_res8);
        pwVar6 = _guard_xfg_dispatch_icall_nop(L"&UGFxInteractionPrompt::OnUsedSecondaryHold",L"::")
        ;
        pwVar8 = pwVar10;
        while (pwVar2 = pwVar6, pwVar2 != (wchar_t *)0x0) {
          pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
          pwVar8 = pwVar2;
        }
        FName::FName(&local_res8,pwVar8 + 2,1);
        TMulticastScriptDelegate<FWeakObjectPtr>::Remove
                  (*(longlong *)(*param_1 + 0x670) + 0x358,*param_1,local_res8);
      }
      uVar7 = FUN_1416f8720((int)param_1[10]);
      *(undefined8 *)(*param_1 + 0x670) = uVar7;
      AcquireSRWLockExclusive((PSRWLOCK)(*param_1 + 0x6b8));
      FUN_140ce30d0(*param_1 + 0x678,param_1 + 2);
      ReleaseSRWLockExclusive((PSRWLOCK)(*param_1 + 0x6b8));
      if (*(longlong *)(*param_1 + 0x670) != 0) {
        pwVar6 = _guard_xfg_dispatch_icall_nop(L"&UGFxInteractionPrompt::OnUsedPrimary",L"::");
        pwVar8 = pwVar10;
        while (pwVar2 = pwVar6, pwVar2 != (wchar_t *)0x0) {
          pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
          pwVar8 = pwVar2;
        }
        FName::FName(&local_res8,pwVar8 + 2,1);
        FUN_14074ba20(*(longlong *)(*param_1 + 0x670) + 0x328,*param_1,FUN_140f43410,local_res8);
        pwVar6 = _guard_xfg_dispatch_icall_nop(L"&UGFxInteractionPrompt::OnUsedPrimaryHold",L"::");
        pwVar8 = pwVar10;
        while (pwVar2 = pwVar6, pwVar2 != (wchar_t *)0x0) {
          pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
          pwVar8 = pwVar2;
        }
        FName::FName(&local_res8,pwVar8 + 2,1);
        FUN_14074ba20(*(longlong *)(*param_1 + 0x670) + 0x338,*param_1,FUN_140f43460,local_res8);
        pwVar6 = _guard_xfg_dispatch_icall_nop(L"&UGFxInteractionPrompt::OnUsedSecondary",L"::");
        pwVar8 = pwVar10;
        while (pwVar2 = pwVar6, pwVar2 != (wchar_t *)0x0) {
          pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
          pwVar8 = pwVar2;
        }
        FName::FName(&local_res8,pwVar8 + 2,1);
        FUN_14074ba20(*(longlong *)(*param_1 + 0x670) + 0x348,*param_1,FUN_140f434b0,local_res8);
        pwVar8 = _guard_xfg_dispatch_icall_nop(L"&UGFxInteractionPrompt::OnUsedSecondaryHold",L"::")
        ;
        while (pwVar6 = pwVar8, pwVar6 != (wchar_t *)0x0) {
          pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar6 + 1,L"::");
          pwVar10 = pwVar6;
        }
        FName::FName(&local_res8,pwVar10 + 2,1);
        FUN_14074ba20(*(longlong *)(*param_1 + 0x670) + 0x358,*param_1,FUN_140f43460,local_res8);
      }
    }
  }
  return;
}



// FUNCTION 140f1d590 FUN_140f1d590 body=860 status=ok
// SIG undefined FUN_140f1d590(void)

void FUN_140f1d590(longlong *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined1 *puVar9;
  longlong *plVar10;
  uint uVar11;
  char *pcVar12;
  longlong lVar13;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  longlong local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined2 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined1 local_88 [24];
  undefined1 local_70;
  undefined8 local_68;
  undefined2 local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar3 == '\0') {
    return;
  }
  lVar5 = FWeakObjectPtr::Get(&local_res10);
  lVar13 = 0;
  iVar8 = *(int *)(lVar5 + 0xc);
  if (iVar8 < (int)DAT_1469e91c4) {
    uVar11 = iVar8 >> 0x1f & 0xffff;
    uVar4 = iVar8 + uVar11;
    lVar13 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
             (longlong)(int)((uVar4 & 0xffff) - uVar11) * 0x18;
  }
  if ((*(uint *)(lVar13 + 8) & 0x30000000) != 0) {
    return;
  }
  if (*(longlong *)(*param_1 + 0x670) == 0) {
    return;
  }
  if (*(longlong *)(*param_1 + 0x678) == 0) {
    return;
  }
  local_d8 = 0;
  local_d0 = 0;
  uVar6 = FUN_1404b03b0();
  FText::FText(local_c8,uVar6);
  local_a8 = 0;
  local_a0 = 1;
  local_b0 = 1;
  if (*(char *)(*param_1 + 0x692) == '\x01') {
    pcVar12 = "OakPC_ActionSkill";
    puVar9 = local_res18;
  }
  else {
    if (*(char *)(*param_1 + 0x692) != '\x02') goto LAB_140f1d6dd;
    pcVar12 = "OakPC_Grenade";
    puVar9 = local_res20;
  }
  puVar7 = (undefined8 *)FName::FName(puVar9,pcVar12,1);
  uVar2 = local_d0;
  lVar13 = (longlong)(int)local_d0;
  iVar8 = (int)local_d0 + 1;
  local_d0 = CONCAT44(local_d0._4_4_,iVar8);
  if (local_d0._4_4_ < iVar8) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_d8,uVar2 & 0xffffffff);
  }
  *(undefined8 *)(local_d8 + lVar13 * 8) = *puVar7;
LAB_140f1d6dd:
  lVar13 = *param_1;
  if ((*(char *)(lVar13 + 0x691) == '\0') || (*(char *)(lVar13 + 0x690) == '\0')) {
    lVar13 = **(longlong **)(lVar13 + 0x670);
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_40,L"Hold to Give Up",L"GFxFightForYourLifeWidget",L"GiveUpPrompt");
    (**(code **)(lVar13 + 0x2b0))(*(undefined8 *)(*param_1 + 0x670),uVar6,1,0);
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_38 + 1;
      lVar13 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar1 = (int *)((longlong)local_38 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_38 + 8))(local_38,1);
        }
      }
    }
    local_98 = 0;
    local_90 = 0;
    uVar6 = FUN_1404b03b0();
    FText::FText(local_88,uVar6);
    uVar2 = local_90;
    lVar13 = (longlong)(int)local_90;
    local_68 = 0;
    local_60 = 1;
    local_70 = 1;
    iVar8 = (int)local_90 + 1;
    local_90 = CONCAT44(local_90._4_4_,iVar8);
    if (local_90._4_4_ < iVar8) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                (&local_98,uVar2 & 0xffffffff);
    }
    *(undefined8 *)(local_98 + lVar13 * 8) = DAT_146872758;
    plVar10 = (longlong *)(*(longlong *)(*param_1 + 0x678) + 0x308);
    (**(code **)(*plVar10 + 0x20))(plVar10,&local_98,0);
    UE4Tuple_Private::
    TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>::
    ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>
              (&local_98);
  }
  else {
    lVar13 = **(longlong **)(lVar13 + 0x670);
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_58,L"Old-U",L"GFxFightForYourLifeWidget",L"OldUPrompt");
    (**(code **)(lVar13 + 0x2b0))(*(undefined8 *)(*param_1 + 0x670),uVar6,1,0);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_50 + 1;
      lVar13 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)local_50 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
    plVar10 = (longlong *)(*(longlong *)(*param_1 + 0x678) + 0x308);
    (**(code **)(*plVar10 + 0x20))(plVar10,&local_d8,0);
  }
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_c0 + 1;
    lVar13 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*local_c0)(local_c0);
      LOCK();
      piVar1 = (int *)((longlong)local_c0 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_c0 + 8))(local_c0,1);
      }
    }
  }
  if (local_d8 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140f1d8f0 FUN_140f1d8f0 body=340 status=ok
// SIG undefined FUN_140f1d8f0(void)

void FUN_140f1d8f0(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = *(undefined4 *)(param_1 + 1);
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar4 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar4 != '\0') {
    lVar6 = FWeakObjectPtr::Get(&local_res10);
    iVar2 = *(int *)(lVar6 + 0xc);
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar10 = iVar2 >> 0x1f & 0xffff;
      uVar5 = iVar2 + uVar10;
      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
              (longlong)(int)((uVar5 & 0xffff) - uVar10) * 0x18;
    }
    else {
      lVar6 = 0;
    }
    if (((*(uint *)(lVar6 + 8) & 0x30000000) == 0) && (lVar6 = FUN_140eccbe0(*param_1), lVar6 != 0))
    {
      uVar3 = *param_1;
      plVar1 = (longlong *)(lVar6 + 0x808);
      plVar7 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar7 != (longlong *)0x0) {
        *plVar7 = (longlong)&PTR_FUN_14419ca48;
        FWeakObjectPtr::operator=(plVar7 + 1,uVar3);
        plVar7[2] = (longlong)FUN_140f36e80;
        lVar8 = FDelegateHandle::GenerateNewID();
        plVar7[4] = lVar8;
        *plVar7 = (longlong)&PTR_FUN_14419ca90;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
        (**(code **)(*plVar7 + 0x20))(plVar7,local_res8);
        iVar2 = *(int *)(lVar6 + 0x810);
        *(int *)(lVar6 + 0x810) = iVar2 + 1;
        if (*(int *)(lVar6 + 0x814) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
        }
        puVar9 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
        *puVar9 = plVar7;
        *(undefined4 *)(puVar9 + 1) = 3;
      }
    }
  }
  return;
}



// FUNCTION 140f1da50 FUN_140f1da50 body=394 status=ok
// SIG undefined FUN_140f1da50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f1da50(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_d8 [32];
  code *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  uVar3 = *param_1;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = uVar3;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = (code *)&LAB_140f26950;
  uVar2 = FUN_1420849a0(uVar3,local_68,local_b8);
  FUN_14208c260(uVar3,uVar2);
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
  if (local_78 != 0) {
    plVar4 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar4 = local_88;
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  uVar3 = *param_1;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = uVar3;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = FUN_140f26d80;
  uVar3 = FUN_1420849a0(*param_1,local_68,local_b8);
  FUN_14208c4f0(*param_1,uVar3);
  if (local_78 != 0) {
    plVar4 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar4 = local_88;
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140f1dbe0 FUN_140f1dbe0 body=149 status=ok
// SIG undefined FUN_140f1dbe0(void)

undefined4 FUN_140f1dbe0(longlong *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  BOOL BVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(*param_1 + 0xe58);
  BVar3 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar3 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  TArray<unsigned_int,FDefaultAllocator>::AddUniqueImpl<unsigned_int_const_&>
            (*param_1 + 0xe48,param_1 + 1);
  LeaveCriticalSection(lpCriticalSection);
  FUN_140f27170(*param_1,1,3,param_1 + 1);
  lVar2 = *param_1;
  LOCK();
  *(undefined4 *)(lVar2 + 0xfb4) = 1;
  UNLOCK();
  LOCK();
  *(undefined4 *)(lVar2 + 0x9f0) = 1;
  UNLOCK();
  LOCK();
  uVar1 = *(undefined4 *)(lVar2 + 0x588);
  *(undefined4 *)(lVar2 + 0x588) = 1;
  UNLOCK();
  LOCK();
  *(undefined4 *)(lVar2 + 0x9ec) = 1;
  UNLOCK();
  return uVar1;
}



// FUNCTION 140f1dc80 FUN_140f1dc80 body=487 status=ok
// SIG undefined FUN_140f1dc80(void)

void FUN_140f1dc80(longlong *param_1)

{
  int iVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  int *piVar8;
  int *piVar9;
  longlong *plVar10;
  longlong local_res8;
  undefined8 local_res10;
  longlong local_res18;
  int local_48;
  int local_44;
  longlong local_40;
  undefined1 local_38 [32];
  
  lVar6 = FUN_140eccca0(*param_1);
  if ((lVar6 != 0) && (local_res8 = FUN_140c453a0(lVar6), local_res8 != 0)) {
    FUN_142d622d0(local_38,&local_res8,lVar6,*(undefined8 *)(*param_1 + 0x630));
    cVar5 = FUN_142d52a00(local_38);
    if (cVar5 != '\0') {
      FUN_140f4d280(*param_1,local_38);
      return;
    }
    pwVar7 = _guard_xfg_dispatch_icall_nop(L"&UGFxGrenadeWidget::OnNewResourcePoolAdded",L"::");
    pwVar3 = (wchar_t *)0x0;
    while (pwVar2 = pwVar7, pwVar2 != (wchar_t *)0x0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar3 = pwVar2;
    }
    FName::FName(&local_res18,pwVar3 + 2,1);
    lVar4 = local_res8;
    lVar6 = *param_1;
    plVar10 = (longlong *)(local_res8 + 0x278);
    FWeakObjectPtr::operator=(&local_48,0);
    local_40 = 0;
    FWeakObjectPtr::operator=(&local_48,lVar6);
    local_40 = local_res18;
    local_res10 = 0;
    if ((local_res18 != 0) && (lVar6 = FWeakObjectPtr::Get(&local_48), lVar6 != 0)) {
      UObject::FindFunction(lVar6,local_40);
    }
    piVar8 = (int *)*plVar10;
    iVar1 = *(int *)(lVar4 + 0x280);
    for (piVar9 = piVar8; piVar9 != piVar8 + (longlong)iVar1 * 4; piVar9 = piVar9 + 4) {
      if ((((*piVar9 == local_48) && (piVar9[1] == local_44)) ||
          ((cVar5 = FWeakObjectPtr::IsValid(piVar9), cVar5 == '\0' &&
           (cVar5 = FWeakObjectPtr::IsValid(&local_48), cVar5 == '\0')))) &&
         (*(longlong *)(piVar9 + 2) == local_40)) {
        if ((int)((longlong)piVar9 - (longlong)piVar8 >> 4) != -1) goto LAB_140f1de4b;
        break;
      }
    }
    iVar1 = *(int *)(lVar4 + 0x280);
    *(int *)(lVar4 + 0x280) = iVar1 + 1;
    if (*(int *)(lVar4 + 0x284) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar1);
    }
    piVar8 = (int *)((longlong)iVar1 * 0x10 + *plVar10);
    *piVar8 = local_48;
    piVar8[1] = local_44;
    *(longlong *)(piVar8 + 2) = local_40;
LAB_140f1de4b:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar10);
  }
  return;
}



// FUNCTION 140f1de70 FUN_140f1de70 body=238 status=ok
// SIG undefined FUN_140f1de70(void)

void FUN_140f1de70(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong local_18;
  undefined8 local_10;
  
  lVar2 = *param_1;
  lVar1 = FUN_1416f8720((int)param_1[1]);
  if (lVar1 == *(longlong *)(*param_1 + 0xe08)) {
    plVar5 = *(longlong **)(lVar2 + 0xa00);
    plVar4 = plVar5 + (longlong)*(int *)(lVar2 + 0xa08) * 0x1b;
    for (; plVar5 != plVar4; plVar5 = plVar5 + 0x1b) {
      lVar2 = *plVar5;
      if ((lVar2 != 0) && ((int)plVar5[0x1a] == 0)) goto LAB_140f1df24;
    }
  }
  else {
    lVar1 = FUN_1416f8720((int)param_1[1]);
    if (lVar1 != *(longlong *)(*param_1 + 0xe10)) {
      return;
    }
    plVar5 = *(longlong **)(lVar2 + 0xa00);
    plVar4 = plVar5 + (longlong)*(int *)(lVar2 + 0xa08) * 0x1b;
    for (; plVar5 != plVar4; plVar5 = plVar5 + 0x1b) {
      lVar2 = *plVar5;
      if ((lVar2 != 0) && ((int)plVar5[0x1a] == 1)) goto LAB_140f1df24;
    }
  }
  lVar2 = 0;
LAB_140f1df24:
  local_10 = 0;
  local_18 = lVar2;
  if (lVar2 != 0) {
    uVar3 = UBlendableInterface::GetPrivateStaticClass();
    local_10 = UObjectBaseUtility::GetInterfaceAddress(lVar2,uVar3);
  }
  FUN_142ed36d0(*param_1,&local_18,0);
  return;
}



// FUNCTION 140f1df60 FUN_140f1df60 body=125 status=ok
// SIG undefined FUN_140f1df60(void)

undefined8 FUN_140f1df60(undefined8 *param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  
  uVar3 = FWeakObjectPtr::Get(param_2 + 0xdc);
  cVar1 = FUN_140c39630(*param_1,uVar3);
  uVar3 = FWeakObjectPtr::Get(param_3 + 0xdc);
  cVar2 = FUN_140c39630(*param_1,uVar3);
  if (cVar1 == cVar2) {
    return 0;
  }
  uVar3 = 1;
  if (cVar1 != '\0') {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



// FUNCTION 140f1dfe0 FUN_140f1dfe0 body=246 status=ok
// SIG undefined FUN_140f1dfe0(void)

void FUN_140f1dfe0(longlong *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  BOOL BVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  lVar3 = *param_1;
  puVar4 = *(undefined8 **)(lVar3 + 0xa00);
  puVar2 = puVar4 + (longlong)*(int *)(lVar3 + 0xa08) * 0x1b;
  if (puVar4 != puVar2) {
    do {
      FUN_140f19b30(param_1[1],*puVar4);
      puVar4 = puVar4 + 0x1b;
    } while (puVar4 != puVar2);
    lVar3 = *param_1;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar3 + 0xf18);
  BVar1 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar1 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  if (*(float *)(*param_1 + 0xea0) <= 0.0) {
    puVar4 = (undefined8 *)param_1[1];
    local_28 = 0;
    local_18 = 0;
    puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_48);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &PTR_FUN_143f77b70;
      puVar2[1] = *puVar4;
    }
    local_58[0] = &LAB_140f26a00;
    lVar3 = 0xc18;
    if (*(char *)(*param_1 + 0xe31) != '\x01') {
      lVar3 = 0xa80;
    }
    FUN_140f06ba0(lVar3 + *param_1,local_58);
  }
                    /* WARNING: Could not recover jumptable at 0x000140f1e0cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 140f1e0e0 FUN_140f1e0e0 body=944 status=ok
// SIG undefined FUN_140f1e0e0(void)

void FUN_140f1e0e0(undefined8 *param_1)

{
  wchar_t *pwVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  undefined8 local_res8;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 1);
  if (lVar2 != 0) {
    pwVar5 = (wchar_t *)0x0;
    pwVar3 = _guard_xfg_dispatch_icall_nop(L"&UGFxFightForYourLifeWidget::OnDownStart",L"::");
    pwVar4 = pwVar5;
    while (pwVar1 = pwVar3, pwVar1 != (wchar_t *)0x0) {
      pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar4 = pwVar1;
    }
    FName::FName(&local_res8,pwVar4 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar2 + 0x1130,*param_1,local_res8);
    pwVar3 = _guard_xfg_dispatch_icall_nop(L"&UGFxFightForYourLifeWidget::OnDownStop",L"::");
    pwVar4 = pwVar5;
    while (pwVar1 = pwVar3, pwVar1 != (wchar_t *)0x0) {
      pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar4 = pwVar1;
    }
    FName::FName(&local_res8,pwVar4 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar2 + 0x1180,*param_1,local_res8);
    pwVar3 = _guard_xfg_dispatch_icall_nop(L"&UGFxFightForYourLifeWidget::OnDownFinish",L"::");
    pwVar4 = pwVar5;
    while (pwVar1 = pwVar3, pwVar1 != (wchar_t *)0x0) {
      pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar4 = pwVar1;
    }
    FName::FName(&local_res8,pwVar4 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar2 + 0x11b0,*param_1,local_res8);
    FUN_140483870(lVar2 + 0x1290,*param_1);
    pwVar3 = _guard_xfg_dispatch_icall_nop(L"&UGFxFightForYourLifeWidget::OnGiveUpStop",L"::");
    pwVar4 = pwVar5;
    while (pwVar1 = pwVar3, pwVar1 != (wchar_t *)0x0) {
      pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar4 = pwVar1;
    }
    FName::FName(&local_res8,pwVar4 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar2 + 0x12c8,*param_1,local_res8);
    pwVar3 = _guard_xfg_dispatch_icall_nop
                       (L"&UGFxFightForYourLifeWidget::OnBeingRevivedStart",L"::");
    pwVar4 = pwVar5;
    while (pwVar1 = pwVar3, pwVar1 != (wchar_t *)0x0) {
      pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar4 = pwVar1;
    }
    FName::FName(&local_res8,pwVar4 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar2 + 0x11f0,*param_1,local_res8);
    pwVar3 = _guard_xfg_dispatch_icall_nop(L"&UGFxFightForYourLifeWidget::OnBeingRevivedStop",L"::")
    ;
    pwVar4 = pwVar5;
    while (pwVar1 = pwVar3, pwVar1 != (wchar_t *)0x0) {
      pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar4 = pwVar1;
    }
    FName::FName(&local_res8,pwVar4 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar2 + 0x1220,*param_1,local_res8);
    pwVar3 = _guard_xfg_dispatch_icall_nop(L"&UGFxFightForYourLifeWidget::OnRevivingStart",L"::");
    pwVar4 = pwVar5;
    while (pwVar1 = pwVar3, pwVar1 != (wchar_t *)0x0) {
      pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar4 = pwVar1;
    }
    FName::FName(&local_res8,pwVar4 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar2 + 0x1250,*param_1,local_res8);
    pwVar3 = _guard_xfg_dispatch_icall_nop(L"&UGFxFightForYourLifeWidget::OnRevivingStop",L"::");
    pwVar4 = pwVar5;
    while (pwVar1 = pwVar3, pwVar1 != (wchar_t *)0x0) {
      pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar4 = pwVar1;
    }
    FName::FName(&local_res8,pwVar4 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar2 + 0x1270,*param_1,local_res8);
    pwVar4 = _guard_xfg_dispatch_icall_nop
                       (L"&UGFxFightForYourLifeWidget::OnRevivingNonLocalStop",L"::");
    while (pwVar3 = pwVar4, pwVar3 != (wchar_t *)0x0) {
      pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar5 = pwVar3;
    }
    FName::FName(&local_res8,pwVar5 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar2 + 0x11a0,*param_1,local_res8);
  }
  return;
}



// FUNCTION 140f1e490 FUN_140f1e490 body=241 status=ok
// SIG undefined FUN_140f1e490(void)

void FUN_140f1e490(longlong *param_1)

{
  uint uVar1;
  BOOL BVar2;
  longlong lVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 local_res8;
  undefined4 local_resc;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(*param_1 + 0xf18);
  BVar2 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar2 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  FWeakObjectPtr::operator=(&local_res8,0);
  lVar3 = *param_1;
  *(undefined4 *)(lVar3 + 0x9d4) = local_res8;
  *(undefined4 *)(lVar3 + 0x9d8) = local_resc;
  LOCK();
  *(undefined4 *)(*param_1 + 0xfb8) = 1;
  UNLOCK();
  lVar3 = 0xc18;
  if (*(char *)(*param_1 + 0xe31) != '\x01') {
    lVar3 = 0xa80;
  }
  FUN_140f08820(lVar3 + *param_1,0);
  uVar1 = 0xc18;
  if (*(char *)(*param_1 + 0xe31) != '\x01') {
    uVar1 = 0xa80;
  }
  FUN_140f0b090(*param_1 + (ulonglong)uVar1,0xffffffff,0,0);
  FUN_140f47890(*param_1,0);
  lVar3 = *param_1;
  LOCK();
  *(undefined4 *)(lVar3 + 0xfb4) = 1;
  UNLOCK();
  LOCK();
  *(undefined4 *)(lVar3 + 0x9f0) = 1;
  UNLOCK();
  LOCK();
  *(undefined4 *)(lVar3 + 0x588) = 1;
  UNLOCK();
  LOCK();
  *(undefined4 *)(lVar3 + 0x9ec) = 1;
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x000140f1e57a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 140f1e590 FUN_140f1e590 body=666 status=ok
// SIG undefined FUN_140f1e590(void)

void FUN_140f1e590(longlong *param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  char cVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  undefined8 local_res8;
  longlong local_res10;
  undefined1 uVar10;
  longlong *local_48;
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30;
  
  if ((*(longlong *)(*param_1 + 0x600) != 0) && (lVar4 = FUN_140e971d0(), lVar4 != 0)) {
    cVar3 = FUN_142dcfc60(lVar4);
    local_res8 = 0;
    if (cVar3 == '\x03') {
      local_38 = (longlong *)0x0;
      local_30 = 0x26;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
      uVar10 = 0;
      FGenericPlatformString::Convert<char,wchar_t>
                (local_38,0x26,"topItemCardAbbreviated.itemCardLoader",0x26,0x3f);
      local_48 = (longlong *)0x0;
      local_40 = 0;
      cVar3 = FUN_140f15430(*(undefined8 *)(*param_1 + 0x600),&local_res8,&local_38,0,
                            CONCAT11(uVar10,6),&local_48);
      plVar8 = local_48;
      plVar7 = local_38;
      for (iVar9 = (int)local_40; local_38 = plVar7, iVar9 != 0; iVar9 = iVar9 + -1) {
        if (*plVar8 != 0) {
          FMemory::Free();
        }
        plVar8 = plVar8 + 2;
        plVar7 = local_38;
      }
      if (local_48 != (longlong *)0x0) {
        FMemory::Free(local_48);
        plVar7 = local_38;
      }
    }
    else {
      local_48 = (longlong *)0x0;
      local_40 = 0x1b;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      uVar10 = 0;
      FGenericPlatformString::Convert<char,wchar_t>
                (local_48,0x1b,"topItemCard.itemCardLoader",0x1b,0x3f);
      local_38 = (longlong *)0x0;
      local_30 = 0;
      cVar3 = FUN_140e97ee0(*(undefined8 *)(*param_1 + 0x600),&local_res8,&local_48,0,
                            CONCAT11(uVar10,6),&local_38);
      plVar7 = local_38;
      for (iVar9 = (int)local_30; iVar9 != 0; iVar9 = iVar9 + -1) {
        if (*plVar7 != 0) {
          FMemory::Free();
        }
        plVar7 = plVar7 + 2;
      }
      plVar7 = local_48;
      if (local_38 != (longlong *)0x0) {
        FMemory::Free(local_38);
        plVar7 = local_48;
      }
    }
    if (plVar7 != (longlong *)0x0) {
      FMemory::Free();
    }
    *(undefined8 *)(*param_1 + 0xa50) = local_res8;
    if (cVar3 != '\0') {
      pwVar5 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnPaperDollItemCardReady",L"::");
      pwVar2 = (wchar_t *)0x0;
      while (pwVar1 = pwVar5, pwVar1 != (wchar_t *)0x0) {
        pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
        pwVar2 = pwVar1;
      }
      FName::FName(&local_res10,pwVar2 + 2,1);
      lVar4 = *(longlong *)(*param_1 + 0xa50);
      FWeakObjectPtr::operator=(lVar4 + 0x198);
      local_res8 = 0;
      *(longlong *)(lVar4 + 0x1a0) = local_res10;
      if ((local_res10 != 0) && (lVar6 = FWeakObjectPtr::Get(lVar4 + 0x198), lVar6 != 0)) {
        UObject::FindFunction(lVar6,*(undefined8 *)(lVar4 + 0x1a0));
      }
      FUN_140f70290(*(undefined8 *)(*param_1 + 0xa50),*(undefined8 *)(*param_1 + 0x7a8));
    }
  }
  return;
}



// FUNCTION 140f1e830 FUN_140f1e830 body=1189 status=ok
// SIG undefined FUN_140f1e830(void)

void FUN_140f1e830(longlong *param_1)

{
  int iVar1;
  bool bVar2;
  wchar_t *pwVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  uint uVar12;
  int *piVar13;
  int *piVar14;
  wchar_t *pwVar15;
  undefined8 local_res8;
  longlong local_res10;
  int local_38;
  int local_34;
  longlong local_30;
  
  cVar4 = FWeakObjectPtr::IsValid(param_1 + 2);
  pwVar15 = (wchar_t *)0x0;
  if (cVar4 != '\0') {
    lVar6 = FWeakObjectPtr::Get(param_1 + 2);
    iVar1 = *(int *)(lVar6 + 0xc);
    pwVar10 = pwVar15;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar12 = iVar1 >> 0x1f & 0xffff;
      uVar5 = iVar1 + uVar12;
      pwVar10 = (wchar_t *)
                (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
                (longlong)(int)((uVar5 & 0xffff) - uVar12) * 0x18);
    }
    if ((*(uint *)(pwVar10 + 4) & 0x30000000) == 0) {
      plVar7 = (longlong *)FWeakObjectPtr::Get(param_1 + 2);
      uVar8 = AGFireballProjectile::GetPrivateStaticClass();
      lVar6 = (**(code **)(*plVar7 + 0x628))(plVar7,uVar8);
      if (lVar6 != 0) {
        FUN_1407665e0(lVar6 + 0x2a8,*param_1);
        FUN_1407665e0(lVar6 + 0x278,*param_1);
        FUN_1407665e0(lVar6 + 0x278,*param_1);
      }
    }
  }
  FUN_140f29780(*param_1);
  lVar6 = FWeakObjectPtr::Get(*param_1 + 0x5d8);
  if (lVar6 != 0) {
    lVar9 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (lVar6 = *(longlong *)(lVar6 + 0x848), lVar6 != 0)) {
      lVar9 = FUN_1413ffe00();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8
           ) != lVar9 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        uVar8 = FUN_141312e30();
        pwVar10 = (wchar_t *)AGameStateBase::OnRep_GameModeClass(lVar6,uVar8);
        if (pwVar10 != (wchar_t *)0x0) {
          lVar6 = FUN_141312e30();
          if ((*(int *)(*(longlong *)(pwVar10 + 8) + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(pwVar10 + 8) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) goto LAB_140f1e9df;
        }
      }
    }
  }
  pwVar10 = pwVar15;
LAB_140f1e9df:
  FUN_140f26700(*param_1,pwVar10);
  cVar4 = FWeakObjectPtr::IsValid(param_1 + 3);
  if (cVar4 != '\0') {
    lVar6 = FWeakObjectPtr::Get(param_1 + 3);
    iVar1 = *(int *)(lVar6 + 0xc);
    pwVar10 = pwVar15;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar12 = iVar1 >> 0x1f & 0xffff;
      uVar5 = iVar1 + uVar12;
      pwVar10 = (wchar_t *)
                (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
                (longlong)(int)((uVar5 & 0xffff) - uVar12) * 0x18);
    }
    if ((*(uint *)(pwVar10 + 4) & 0x30000000) == 0) {
      plVar7 = (longlong *)FWeakObjectPtr::Get(param_1 + 3);
      uVar8 = AGFireballProjectile::GetPrivateStaticClass();
      lVar6 = (**(code **)(*plVar7 + 0x628))(plVar7,uVar8);
      if (lVar6 != 0) {
        pwVar11 = _guard_xfg_dispatch_icall_nop
                            (L"&UGFxFightForYourLifeWidget::OnAbilitySlotChanged",L"::");
        pwVar10 = pwVar15;
        while (pwVar3 = pwVar11, pwVar3 != (wchar_t *)0x0) {
          pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
          pwVar10 = pwVar3;
        }
        FName::FName(&local_res10,pwVar10 + 2,1);
        lVar9 = *param_1;
        plVar7 = (longlong *)(lVar6 + 0x2a8);
        FWeakObjectPtr::operator=(&local_38,0);
        local_30 = 0;
        FWeakObjectPtr::operator=(&local_38,lVar9);
        local_30 = local_res10;
        local_res8 = 0;
        if ((local_res10 != 0) && (lVar9 = FWeakObjectPtr::Get(&local_38), lVar9 != 0)) {
          UObject::FindFunction(lVar9,local_30);
        }
        piVar13 = (int *)*plVar7;
        iVar1 = *(int *)(lVar6 + 0x2b0);
        for (piVar14 = piVar13; piVar14 != piVar13 + (longlong)iVar1 * 4; piVar14 = piVar14 + 4) {
          if (((*piVar14 == local_38) && (piVar14[1] == local_34)) ||
             ((cVar4 = FWeakObjectPtr::IsValid(piVar14), cVar4 == '\0' &&
              (cVar4 = FWeakObjectPtr::IsValid(&local_38), cVar4 == '\0')))) {
            bVar2 = true;
          }
          else {
            bVar2 = false;
          }
          if ((bVar2) && (*(longlong *)(piVar14 + 2) == local_30)) {
            bVar2 = true;
          }
          else {
            bVar2 = false;
          }
          if (bVar2) {
            if ((int)((longlong)piVar14 - (longlong)piVar13 >> 4) != -1) goto LAB_140f1ebec;
            break;
          }
        }
        iVar1 = *(int *)(lVar6 + 0x2b0);
        *(int *)(lVar6 + 0x2b0) = iVar1 + 1;
        if (*(int *)(lVar6 + 0x2b4) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar7,iVar1);
        }
        piVar13 = (int *)((longlong)iVar1 * 0x10 + *plVar7);
        *piVar13 = local_38;
        piVar13[1] = local_34;
        *(longlong *)(piVar13 + 2) = local_30;
LAB_140f1ebec:
        TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar7);
        pwVar11 = _guard_xfg_dispatch_icall_nop
                            (L"&UGFxFightForYourLifeWidget::OnActionSkillActivated",L"::");
        pwVar10 = pwVar15;
        while (pwVar3 = pwVar11, pwVar3 != (wchar_t *)0x0) {
          pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
          pwVar10 = pwVar3;
        }
        FName::FName(&local_res8,pwVar10 + 2,1);
        FUN_14074ba20(lVar6 + 0x278,*param_1,FUN_140f32190,local_res8);
        pwVar10 = _guard_xfg_dispatch_icall_nop
                            (L"&UGFxFightForYourLifeWidget::OnActionSkillCoolingDown",L"::");
        while (pwVar11 = pwVar10, pwVar11 != (wchar_t *)0x0) {
          pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar11 + 1,L"::");
          pwVar15 = pwVar11;
        }
        FName::FName(&local_res8,pwVar15 + 2,1);
        FUN_14074ba20(lVar6 + 0x268,*param_1,FUN_140f32200,local_res8);
      }
    }
  }
  return;
}



// FUNCTION 140f1ece0 FUN_140f1ece0 body=650 status=ok
// SIG undefined FUN_140f1ece0(void)

void FUN_140f1ece0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  bool bVar11;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  longlong *plStack_50;
  longlong local_48;
  longlong *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28 [8];
  longlong *local_20;
  
  lVar10 = 0;
  lVar6 = FWeakObjectPtr::Get(*param_1 + 0x5cc);
  if (lVar6 != 0) {
    lVar7 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    if (bVar11) goto LAB_140f1ed4e;
  }
  lVar6 = lVar10;
LAB_140f1ed4e:
  cVar5 = FWeakObjectPtr::IsValid(*param_1 + 0x58c);
  bVar11 = cVar5 == '\0';
  if (bVar11) {
    plVar9 = &local_58;
    local_58 = 0;
    plStack_50 = (longlong *)0x0;
  }
  else {
    uVar8 = FWeakObjectPtr::Get(*param_1 + 0x58c);
    plVar9 = (longlong *)FUN_142dcf3a0(uVar8,local_28);
    lVar10 = *plVar9;
  }
  plVar4 = (longlong *)plVar9[1];
  plVar9[1] = 0;
  *plVar9 = 0;
  plVar9 = plStack_50;
  if (bVar11) {
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_50 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
    }
  }
  if ((!bVar11) && (local_20 != (longlong *)0x0)) {
    LOCK();
    plVar9 = local_20 + 1;
    lVar7 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  if ((lVar6 != 0) && (lVar10 != 0)) {
    lVar7 = *(longlong *)(*param_1 + 0x6b8);
    if (lVar7 != 0) {
      local_40 = *(longlong **)(*param_1 + 0x6c0);
      if (local_40 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_40 + 1) = (int)local_40[1] + 1;
        UNLOCK();
      }
      local_68 = (undefined4)lVar10;
      uStack_64 = (undefined4)((ulonglong)lVar10 >> 0x20);
      uStack_60 = SUB84(plVar4,0);
      uStack_5c = (undefined4)((ulonglong)plVar4 >> 0x20);
      local_38 = local_68;
      uStack_34 = uStack_64;
      uStack_30 = uStack_60;
      uStack_2c = uStack_5c;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      local_48 = lVar7;
      FUN_140bcaeb0(lVar6,&local_38,&local_48);
      plVar9 = (longlong *)CONCAT44(uStack_2c,uStack_30);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar9 + 1;
        lVar10 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
      plVar9 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_40 + 1;
        lVar10 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar4 + 1;
    lVar10 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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



// FUNCTION 140f1ef70 FUN_140f1ef70 body=123 status=ok
// SIG undefined FUN_140f1ef70(void)

undefined4 FUN_140f1ef70(longlong *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0xc));
  uVar4 = FUN_1416f8720((int)param_1[2]);
  FUN_140f4b9a0(*param_1,uVar4,uVar3);
  FUN_140f27170(*param_1,1,5,param_1 + 1);
  LOCK();
  *(undefined4 *)(*param_1 + 0x9ec) = 1;
  UNLOCK();
  lVar2 = *param_1;
  LOCK();
  *(undefined4 *)(lVar2 + 0xfb4) = 1;
  UNLOCK();
  LOCK();
  *(undefined4 *)(lVar2 + 0x9f0) = 1;
  UNLOCK();
  LOCK();
  uVar1 = *(undefined4 *)(lVar2 + 0x588);
  *(undefined4 *)(lVar2 + 0x588) = 1;
  UNLOCK();
  LOCK();
  *(undefined4 *)(lVar2 + 0x9ec) = 1;
  UNLOCK();
  return uVar1;
}



// FUNCTION 140f1eff0 FUN_140f1eff0 body=132 status=ok
// SIG undefined FUN_140f1eff0(void)

void FUN_140f1eff0(undefined4 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = FUN_1416f8720(*param_1);
  if ((lVar1 != 0) && (lVar1 = FUN_1416f8720(param_1[1]), lVar1 != 0)) {
    uVar2 = FUN_1416f8720(*param_1);
    lVar3 = FUN_140c428a0(uVar2);
    lVar1 = *(longlong *)(lVar3 + 0xb0);
    lVar3 = (longlong)*(int *)(lVar3 + 0xb8) * 0x40 + lVar1;
    for (; lVar1 != lVar3; lVar1 = lVar1 + 0x40) {
      lVar4 = FUN_1416f8720(param_1[1]);
      if (*(longlong *)(lVar1 + 0x20) == lVar4) {
        *(undefined8 *)(lVar1 + 0x30) = *(undefined8 *)(lVar1 + 0x10);
      }
    }
  }
  return;
}



// FUNCTION 140f1f080 FUN_140f1f080 body=130 status=ok
// SIG undefined FUN_140f1f080(void)

void FUN_140f1f080(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*param_2 != 0) {
    FUN_142056670(*param_2,*(undefined1 *)param_1[1]);
    if (*(char *)param_1[1] != '\0') {
      FUN_14203e3e0(*param_2,*(int *)(*param_1 + 0x6a0) + 1);
    }
  }
  plVar4 = (longlong *)param_2[1];
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



// FUNCTION 140f1f110 FUN_140f1f110 body=279 status=ok
// SIG undefined FUN_140f1f110(void)

void FUN_140f1f110(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 local_res8;
  undefined4 local_resc;
  longlong local_38;
  undefined8 local_30;
  undefined1 local_28 [8];
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18 [8];
  undefined4 local_10;
  undefined4 local_c;
  
  FWeakObjectPtr::operator=(local_28,0);
  FWeakObjectPtr::operator=(&local_20,0);
  FWeakObjectPtr::operator=(local_18,0);
  FWeakObjectPtr::operator=(&local_10,0);
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x618) == 7) {
    FWeakObjectPtr::operator=(local_18,*(undefined8 *)(lVar1 + 0xf28));
    FWeakObjectPtr::operator=(&local_10,*(undefined8 *)(*param_1 + 0xf30));
  }
  else {
    FWeakObjectPtr::operator=(local_28,*(undefined8 *)(lVar1 + 0xf30));
    FWeakObjectPtr::operator=(local_18,*(undefined8 *)(*param_1 + 0xf28));
    FWeakObjectPtr::operator=(&local_res8,0);
    local_10 = local_res8;
    local_c = local_resc;
    FWeakObjectPtr::operator=(&local_res8,0);
    local_20 = local_res8;
    local_1c = local_resc;
  }
  lVar3 = *param_1;
  lVar1 = *(longlong *)(lVar3 + 0xf38);
  local_38 = lVar1;
  if (lVar1 == 0) {
    local_30 = 0;
  }
  else {
    uVar2 = UBlendableInterface::GetPrivateStaticClass();
    local_30 = UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar2);
    lVar3 = *param_1;
  }
  FUN_142ecfd10(lVar3,&local_38,local_28);
  return;
}



// FUNCTION 140f1f230 FUN_140f1f230 body=1829 status=ok
// SIG undefined FUN_140f1f230(void)

void FUN_140f1f230(longlong *param_1)

{
  int iVar1;
  int *piVar2;
  wchar_t *pwVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  char cVar6;
  BOOL BVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  undefined4 *puVar13;
  int *piVar14;
  longlong *plVar15;
  wchar_t *pwVar16;
  bool bVar17;
  undefined8 local_res8;
  ulonglong local_res10;
  undefined8 local_48;
  ulonglong uStack_40;
  
  lVar10 = *param_1;
  BVar7 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar10 + 0xe58));
  if (BVar7 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar10 + 0xe58));
  }
  pwVar16 = (wchar_t *)0x0;
  *(undefined4 *)(lVar10 + 0xe80) = 0;
  *(undefined4 *)(lVar10 + 0xe50) = 0;
  if (*(int *)(lVar10 + 0xe54) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(lVar10 + 0xe48,0);
  }
  lVar9 = FUN_140f2b5e0(lVar10);
  if (lVar9 != 0) {
    uVar8 = FUN_142b47070(lVar9);
    *(undefined4 *)(lVar10 + 0xe80) = uVar8;
    FUN_142ffa060(lVar9,0,lVar10 + 0xe48);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar10 + 0xe58));
  lVar10 = FWeakObjectPtr::Get(*param_1 + 0x594);
  if (lVar10 != 0) {
    lVar9 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar17 = false;
    }
    else {
      bVar17 = true;
    }
    if (bVar17) {
      pwVar11 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnCurrentWeaponChanged",L"::");
      pwVar12 = pwVar16;
      while (pwVar3 = pwVar11, pwVar3 != (wchar_t *)0x0) {
        pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
        pwVar12 = pwVar3;
      }
      FName::FName(&local_res10,pwVar12 + 2,1);
      uVar5 = local_res10;
      lVar9 = *param_1;
      plVar15 = (longlong *)(lVar10 + 0x1050);
      FWeakObjectPtr::operator=(&local_48,0);
      uStack_40 = 0;
      FWeakObjectPtr::operator=(&local_48,lVar9);
      uStack_40 = uVar5;
      local_res8 = 0;
      if ((uVar5 != 0) && (lVar9 = FWeakObjectPtr::Get(&local_48), lVar9 != 0)) {
        UObject::FindFunction(lVar9,uStack_40);
      }
      piVar2 = (int *)*plVar15;
      iVar1 = *(int *)(lVar10 + 0x1058);
      uVar4 = local_48;
      for (piVar14 = piVar2; local_48 = (code *)uVar4, piVar14 != piVar2 + (longlong)iVar1 * 4;
          piVar14 = piVar14 + 4) {
        local_48._0_4_ = (int)uVar4;
        if (((*piVar14 == (int)local_48) &&
            (local_48._4_4_ = (int)((ulonglong)uVar4 >> 0x20), bVar17 = piVar14[1] == local_48._4_4_
            , bVar17)) ||
           ((cVar6 = FWeakObjectPtr::IsValid(piVar14), cVar6 == '\0' &&
            (cVar6 = FWeakObjectPtr::IsValid(&local_48), cVar6 == '\0')))) {
          bVar17 = true;
        }
        else {
          bVar17 = false;
        }
        if ((bVar17) && (*(ulonglong *)(piVar14 + 2) == uStack_40)) {
          bVar17 = true;
        }
        else {
          bVar17 = false;
        }
        if (bVar17) {
          if ((int)((longlong)piVar14 - (longlong)piVar2 >> 4) != -1) goto LAB_140f1f465;
          break;
        }
        uVar4 = local_48;
      }
      iVar1 = *(int *)(lVar10 + 0x1058);
      *(int *)(lVar10 + 0x1058) = iVar1 + 1;
      if (*(int *)(lVar10 + 0x105c) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar15,iVar1);
      }
      puVar13 = (undefined4 *)((longlong)iVar1 * 0x10 + *plVar15);
      *puVar13 = (int)local_48;
      puVar13[1] = local_48._4_4_;
      *(ulonglong *)(puVar13 + 2) = uStack_40;
LAB_140f1f465:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar15);
      uStack_40 = uStack_40 & 0xffffffff00000000;
      local_48 = FUN_140f3b540;
      pwVar11 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnInventoryItemEquipped",L"::");
      pwVar12 = pwVar16;
      while (pwVar3 = pwVar11, pwVar3 != (wchar_t *)0x0) {
        pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
        pwVar12 = pwVar3;
      }
      FName::FName(&local_res8,pwVar12 + 2,1);
      FUN_1407260e0(lVar10 + 0x1308,*param_1,&local_48,local_res8);
      uStack_40 = uStack_40 & 0xffffffff00000000;
      local_48 = FUN_140f3b9a0;
      pwVar11 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnInventoryItemUnequipped",L"::");
      pwVar12 = pwVar16;
      while (pwVar3 = pwVar11, pwVar3 != (wchar_t *)0x0) {
        pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
        pwVar12 = pwVar3;
      }
      FName::FName(&local_res8,pwVar12 + 2,1);
      FUN_1407260e0(lVar10 + 0x1318,*param_1,&local_48,local_res8);
      uStack_40 = uStack_40 & 0xffffffff00000000;
      local_48 = FUN_140f43320;
      pwVar11 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnTrinketEquipped",L"::");
      pwVar12 = pwVar16;
      while (pwVar3 = pwVar11, pwVar3 != (wchar_t *)0x0) {
        pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
        pwVar12 = pwVar3;
      }
      FName::FName(&local_res8,pwVar12 + 2,1);
      FUN_1407260e0(lVar10 + 0x1338,*param_1,&local_48,local_res8);
      uStack_40 = uStack_40 & 0xffffffff00000000;
      local_48 = FUN_140f43320;
      pwVar11 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnTrinketUnequipped",L"::");
      pwVar12 = pwVar16;
      while (pwVar3 = pwVar11, pwVar3 != (wchar_t *)0x0) {
        pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
        pwVar12 = pwVar3;
      }
      FName::FName(&local_res8,pwVar12 + 2,1);
      FUN_1407260e0(lVar10 + 0x1348,*param_1,&local_48,local_res8);
      lVar10 = FUN_140f2b5e0(*param_1);
      if (lVar10 != 0) {
        uStack_40 = uStack_40 & 0xffffffff00000000;
        local_48 = FUN_140f3b370;
        pwVar11 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnInventoryItemAdded",L"::");
        pwVar12 = pwVar16;
        while (pwVar3 = pwVar11, pwVar3 != (wchar_t *)0x0) {
          pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
          pwVar12 = pwVar3;
        }
        FName::FName(&local_res8,pwVar12 + 2,1);
        FUN_1407260e0(lVar10 + 0x2d8,*param_1,&local_48,local_res8);
        uStack_40 = uStack_40 & 0xffffffff00000000;
        local_48 = FUN_140f3b7d0;
        pwVar11 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnInventoryItemRemoved",L"::");
        pwVar12 = pwVar16;
        while (pwVar3 = pwVar11, pwVar3 != (wchar_t *)0x0) {
          pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
          pwVar12 = pwVar3;
        }
        FName::FName(&local_res8,pwVar12 + 2,1);
        FUN_1407260e0(lVar10 + 0x2e8,*param_1,&local_48,local_res8);
        uStack_40 = uStack_40 & 0xffffffff00000000;
        local_48 = FUN_140f3bc30;
        pwVar11 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnInventoryItemUpdated",L"::");
        pwVar12 = pwVar16;
        while (pwVar3 = pwVar11, pwVar3 != (wchar_t *)0x0) {
          pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
          pwVar12 = pwVar3;
        }
        FName::FName(&local_res8,pwVar12 + 2,1);
        FUN_1407260e0(lVar10 + 0x2f8,*param_1,&local_48,local_res8);
        pwVar12 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnInventoryQuantityChanged",L"::");
        while (pwVar11 = pwVar12, pwVar11 != (wchar_t *)0x0) {
          pwVar12 = _guard_xfg_dispatch_icall_nop(pwVar11 + 1,L"::");
          pwVar16 = pwVar11;
        }
        FName::FName(&local_res10,pwVar16 + 2,1);
        lVar9 = *param_1;
        plVar15 = (longlong *)(lVar10 + 0x318);
        FWeakObjectPtr::operator=(&local_48,0);
        uStack_40 = 0;
        FWeakObjectPtr::operator=(&local_48,lVar9);
        uStack_40 = local_res10;
        local_res8 = 0;
        if ((local_res10 != 0) && (lVar9 = FWeakObjectPtr::Get(&local_48), lVar9 != 0)) {
          UObject::FindFunction(lVar9,uStack_40);
        }
        piVar2 = (int *)*plVar15;
        iVar1 = *(int *)(lVar10 + 800);
        for (piVar14 = piVar2; piVar14 != piVar2 + (longlong)iVar1 * 4; piVar14 = piVar14 + 4) {
          if (((*piVar14 == (int)local_48) &&
              (local_48._4_4_ = (int)((ulonglong)local_48 >> 0x20),
              bVar17 = piVar14[1] == local_48._4_4_, bVar17)) ||
             ((cVar6 = FWeakObjectPtr::IsValid(piVar14), cVar6 == '\0' &&
              (cVar6 = FWeakObjectPtr::IsValid(&local_48), cVar6 == '\0')))) {
            bVar17 = true;
          }
          else {
            bVar17 = false;
          }
          if ((bVar17) && (*(ulonglong *)(piVar14 + 2) == uStack_40)) {
            bVar17 = true;
          }
          else {
            bVar17 = false;
          }
          if (bVar17) {
            if ((int)((longlong)piVar14 - (longlong)piVar2 >> 4) != -1) goto LAB_140f1f935;
            break;
          }
        }
        iVar1 = *(int *)(lVar10 + 800);
        *(int *)(lVar10 + 800) = iVar1 + 1;
        if (*(int *)(lVar10 + 0x324) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar15,iVar1);
        }
        puVar13 = (undefined4 *)((longlong)iVar1 * 0x10 + *plVar15);
        *puVar13 = (int)local_48;
        puVar13[1] = local_48._4_4_;
        *(ulonglong *)(puVar13 + 2) = uStack_40;
LAB_140f1f935:
        TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar15);
      }
    }
  }
  return;
}



// FUNCTION 140f1f960 FUN_140f1f960 body=260 status=ok
// SIG undefined FUN_140f1f960(void)

void FUN_140f1f960(longlong *param_1)

{
  int *piVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *local_38;
  undefined8 local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  local_38 = (longlong *)0x0;
  lVar5 = (longlong)(int)param_1[1] * 0xd8 + *(longlong *)(*param_1 + 0xa00);
  local_30 = 0;
  cVar2 = FUN_140e98b90(*(undefined8 *)(*param_1 + 0xe00),lVar5 + 0x10,lVar5 + 0x68,0,6,&local_38);
  plVar4 = local_38;
  for (iVar6 = (int)local_30; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  if (cVar2 != '\0') {
    uVar3 = FUN_142085870(*(undefined8 *)(lVar5 + 0x10),local_28,L"InputActionText");
    FUN_142ede260(lVar5 + 0x18,uVar3);
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_20 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar1 = (int *)((longlong)local_20 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140f1fa70 FUN_140f1fa70 body=618 status=ok
// SIG undefined FUN_140f1fa70(void)

void FUN_140f1fa70(longlong *param_1)

{
  longlong lVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  char cVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  undefined8 uVar7;
  wchar_t *pwVar8;
  longlong *plVar9;
  int iVar10;
  longlong *plVar11;
  longlong local_res10;
  longlong *local_68;
  wchar_t *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  pwVar8 = (wchar_t *)0x0;
  local_68 = (longlong *)0x0;
  local_60 = (wchar_t *)0x0;
  plVar11 = (longlong *)((longlong)(int)param_1[1] * 0xd8 + *(longlong *)(*param_1 + 0xa00));
  cVar4 = FUN_140f14d50(*(undefined8 *)(*param_1 + 0xe00),plVar11,plVar11 + 7,0,6,&local_68);
  plVar9 = local_68;
  for (iVar10 = (int)local_60; iVar10 != 0; iVar10 = iVar10 + -1) {
    if (*plVar9 != 0) {
      FMemory::Free();
    }
    plVar9 = plVar9 + 2;
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free(local_68);
  }
  if (cVar4 != '\0') {
    (**(code **)(*(longlong *)*plVar11 + 0x350))((longlong *)*plVar11,plVar11 + 7);
    (**(code **)(*(longlong *)*plVar11 + 0x3b0))((longlong *)*plVar11,1);
    pwVar5 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnPaperDollSlotClicked",L"::");
    pwVar3 = pwVar8;
    while (pwVar2 = pwVar5, pwVar2 != (wchar_t *)0x0) {
      pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar3 = pwVar2;
    }
    FName::FName(&local_res10,pwVar3 + 2,1);
    lVar6 = local_res10;
    lVar1 = *plVar11;
    FWeakObjectPtr::operator=(lVar1 + 0x1b0,*param_1);
    *(longlong *)(lVar1 + 0x1b8) = lVar6;
    if ((lVar6 != 0) && (lVar6 = FWeakObjectPtr::Get(lVar1 + 0x1b0), lVar6 != 0)) {
      UObject::FindFunction(lVar6,*(undefined8 *)(lVar1 + 0x1b8));
    }
    pwVar5 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnPaperDollSlotPressed",L"::");
    pwVar3 = pwVar8;
    while (pwVar2 = pwVar5, pwVar2 != (wchar_t *)0x0) {
      pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar3 = pwVar2;
    }
    FName::FName(&local_res10,pwVar3 + 2,1);
    lVar1 = *plVar11;
    FWeakObjectPtr::operator=(lVar1 + 0x1f0,*param_1);
    *(longlong *)(lVar1 + 0x1f8) = local_res10;
    if ((local_res10 != 0) && (lVar6 = FWeakObjectPtr::Get(lVar1 + 0x1f0), lVar6 != 0)) {
      UObject::FindFunction(lVar6,*(undefined8 *)(lVar1 + 0x1f8));
    }
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    FWeakObjectPtr::operator=(&local_58,0);
    FWeakObjectPtr::operator=(&local_50,0);
    FWeakObjectPtr::operator=(&local_48,0);
    FWeakObjectPtr::operator=(&local_40,0);
    plVar11 = (longlong *)*plVar11;
    local_68 = plVar11;
    if (plVar11 != (longlong *)0x0) {
      uVar7 = UBlendableInterface::GetPrivateStaticClass();
      pwVar8 = (wchar_t *)UObjectBaseUtility::GetInterfaceAddress(plVar11,uVar7);
    }
    local_60 = pwVar8;
    FUN_142ecfd10(*param_1,&local_68,&local_58);
  }
  return;
}



// FUNCTION 140f1fce0 FUN_140f1fce0 body=777 status=ok
// SIG undefined FUN_140f1fce0(void)

void FUN_140f1fce0(longlong *param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar3 == '\0') {
LAB_140f1fd67:
    bVar2 = false;
  }
  else {
    lVar6 = FWeakObjectPtr::Get(&local_res10);
    iVar1 = *(int *)(lVar6 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar9 = iVar1 >> 0x1f & 0xffff;
      uVar4 = iVar1 + uVar9;
      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar9) * 0x18;
    }
    else {
      lVar6 = 0;
    }
    if ((*(uint *)(lVar6 + 8) & 0x30000000) != 0) goto LAB_140f1fd67;
    bVar2 = true;
  }
  if (!bVar2) {
    return;
  }
  lVar6 = FUN_1416f8720((int)param_1[3]);
  if (lVar6 == 0) {
    return;
  }
  lVar6 = FUN_140eccc40(*param_1);
  if (lVar6 == 0) {
    return;
  }
  AcquireSRWLockShared((PSRWLOCK)(*param_1 + 0x6b8));
  lVar6 = FUN_1416f8720((int)param_1[2]);
  if ((lVar6 != 0) && (lVar6 = *param_1, *(longlong *)(lVar6 + 0x668) != 0)) {
    if ((*(longlong *)(lVar6 + 0x698) != 0) &&
       (cVar3 = FText::IsEmpty(lVar6 + 0x680), cVar3 != '\0')) {
      lVar6 = *(longlong *)(*param_1 + 0x698);
      if (*(char *)(lVar6 + 0x52) != '\0') {
        lVar6 = *(longlong *)(lVar6 + 0x58);
        iVar1 = *(int *)(*(longlong *)(*param_1 + 0x668) + 0x388);
        if (lVar6 == 0) {
LAB_140f1fe51:
          lVar6 = 0;
        }
        else {
          lVar7 = FUN_1430228e0();
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) goto LAB_140f1fe51;
        }
        uVar8 = FUN_1416f8720((int)param_1[3]);
        iVar5 = FUN_142ff7c90(uVar8,lVar6);
        if (iVar5 < iVar1) {
          uVar8 = FUN_1416f8720((int)param_1[2]);
          FUN_142f0c220(uVar8,&DAT_1464aa6f0,1);
          FUN_140f4d1d0(*param_1,2,1);
          goto LAB_140f1febc;
        }
        FUN_140f4d1d0(*param_1,1);
      }
    }
    uVar8 = FUN_1416f8720((int)param_1[2]);
    FUN_142f0c220(uVar8,&DAT_1464aa6c0,1);
  }
LAB_140f1febc:
  lVar6 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0x14));
  if ((lVar6 == 0) || (lVar6 = *param_1, *(longlong *)(lVar6 + 0x668) == 0)) goto LAB_140f1ffc9;
  if ((*(longlong *)(lVar6 + 0x6a8) != 0) && (cVar3 = FText::IsEmpty(lVar6 + 0x680), cVar3 != '\0'))
  {
    lVar6 = *(longlong *)(*param_1 + 0x6a8);
    if (*(char *)(lVar6 + 0x52) != '\0') {
      lVar6 = *(longlong *)(lVar6 + 0x58);
      iVar1 = *(int *)(*(longlong *)(*param_1 + 0x668) + 0x38c);
      if (lVar6 == 0) {
LAB_140f1ff60:
        lVar6 = 0;
      }
      else {
        lVar7 = FUN_1430228e0();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) goto LAB_140f1ff60;
      }
      uVar8 = FUN_1416f8720((int)param_1[3]);
      iVar5 = FUN_142ff7c90(uVar8,lVar6);
      if (iVar5 < iVar1) {
        uVar8 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0x14));
        FUN_142f0c220(uVar8,&DAT_1464aa6f0,1);
        FUN_140f4d1d0(*param_1,2,0);
        goto LAB_140f1ffc9;
      }
      FUN_140f4d1d0(*param_1,1,0);
    }
  }
  uVar8 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0x14));
  FUN_142f0c220(uVar8,&DAT_1464aa6c0,1);
LAB_140f1ffc9:
  ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 0x6b8));
  return;
}



// FUNCTION 140f1fff0 FUN_140f1fff0 body=1377 status=ok
// SIG undefined FUN_140f1fff0(void)

ulonglong FUN_140f1fff0(ulonglong *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  ulonglong uVar10;
  wchar_t *pwVar11;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_48 [3];
  
  uVar2 = *param_1;
  pwVar11 = (wchar_t *)0x0;
  if ((*(longlong *)(uVar2 + 0x6b0) != 0) && (*(longlong *)(uVar2 + 0x6b8) != 0)) {
    lVar4 = (**(code **)(**(longlong **)(uVar2 + 0x6b8) + 0x10))();
    if (lVar4 != 0) {
      uVar2 = *param_1;
      pwVar7 = pwVar11;
      if (*(longlong *)(uVar2 + 0x6b0) != 0) {
        pwVar7 = *(wchar_t **)(uVar2 + 0x6b8);
      }
      uVar5 = (**(code **)(*(longlong *)pwVar7 + 0x10))();
      FUN_1407665e0(uVar5,uVar2);
    }
    pwVar7 = pwVar11;
    if (*(longlong *)(*param_1 + 0x6b0) != 0) {
      pwVar7 = *(wchar_t **)(*param_1 + 0x6b8);
    }
    lVar4 = (**(code **)(*(longlong *)pwVar7 + 0x18))();
    if (lVar4 != 0) {
      uVar2 = *param_1;
      pwVar7 = pwVar11;
      if (*(longlong *)(uVar2 + 0x6b0) != 0) {
        pwVar7 = *(wchar_t **)(uVar2 + 0x6b8);
      }
      uVar5 = (**(code **)(*(longlong *)pwVar7 + 0x18))();
      FUN_1407665e0(uVar5,uVar2);
    }
    pwVar7 = pwVar11;
    if (*(longlong *)(*param_1 + 0x6b0) != 0) {
      pwVar7 = *(wchar_t **)(*param_1 + 0x6b8);
    }
    lVar4 = (**(code **)(*(longlong *)pwVar7 + 0x20))();
    if (lVar4 != 0) {
      uVar2 = *param_1;
      pwVar7 = pwVar11;
      if (*(longlong *)(uVar2 + 0x6b0) != 0) {
        pwVar7 = *(wchar_t **)(uVar2 + 0x6b8);
      }
      uVar5 = (**(code **)(*(longlong *)pwVar7 + 0x20))();
      FUN_1407665e0(uVar5,uVar2);
    }
    pwVar7 = pwVar11;
    if (*(longlong *)(*param_1 + 0x6b0) != 0) {
      pwVar7 = *(wchar_t **)(*param_1 + 0x6b8);
    }
    lVar4 = (**(code **)(*(longlong *)pwVar7 + 0x28))();
    if (lVar4 != 0) {
      uVar2 = *param_1;
      pwVar7 = pwVar11;
      if (*(longlong *)(uVar2 + 0x6b0) != 0) {
        pwVar7 = *(wchar_t **)(uVar2 + 0x6b8);
      }
      uVar5 = (**(code **)(*(longlong *)pwVar7 + 0x28))();
      FUN_1407665e0(uVar5,uVar2);
    }
    pwVar7 = pwVar11;
    if (*(longlong *)(*param_1 + 0x6b0) != 0) {
      pwVar7 = *(wchar_t **)(*param_1 + 0x6b8);
    }
    lVar4 = (**(code **)(*(longlong *)pwVar7 + 0x30))();
    if (lVar4 != 0) {
      uVar2 = *param_1;
      pwVar7 = pwVar11;
      if (*(longlong *)(uVar2 + 0x6b0) != 0) {
        pwVar7 = *(wchar_t **)(uVar2 + 0x6b8);
      }
      uVar5 = (**(code **)(*(longlong *)pwVar7 + 0x30))();
      FUN_1407665e0(uVar5,uVar2);
    }
  }
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 1);
  pwVar7 = pwVar11;
  pwVar9 = pwVar11;
  if ((cVar3 != '\0') && (lVar4 = FWeakObjectPtr::Get(param_1 + 1), lVar4 != 0)) {
    uVar5 = UGameplayTagAssetInterface::GetPrivateStaticClass();
    pwVar6 = (wchar_t *)UObjectBaseUtility::GetInterfaceAddress(lVar4,uVar5);
    pwVar7 = (wchar_t *)0x0;
    pwVar9 = (wchar_t *)0x0;
    if (pwVar6 != (wchar_t *)0x0) {
      pwVar7 = (wchar_t *)FWeakObjectPtr::Get(param_1 + 1);
      pwVar9 = pwVar6;
    }
  }
  uVar2 = *param_1;
  *(wchar_t **)(uVar2 + 0x6b8) = pwVar9;
  *(wchar_t **)(uVar2 + 0x6b0) = pwVar7;
  LOCK();
  uVar1 = *(uint *)(*param_1 + 0x6c8);
  *(uint *)(*param_1 + 0x6c8) = 1;
  uVar10 = (ulonglong)uVar1;
  UNLOCK();
  uVar2 = *param_1;
  if ((*(longlong *)(uVar2 + 0x6b0) != 0) && (*(longlong *)(uVar2 + 0x6b8) != 0)) {
    lVar4 = (**(code **)(**(longlong **)(uVar2 + 0x6b8) + 0x38))();
    pwVar7 = pwVar11;
    if (*(longlong *)(*param_1 + 0x6b0) != 0) {
      pwVar7 = *(wchar_t **)(*param_1 + 0x6b8);
    }
    lVar8 = (**(code **)(*(longlong *)pwVar7 + 0x10))();
    if (lVar8 != 0) {
      pwVar9 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnHealthNormal",L"::");
      pwVar7 = pwVar11;
      while (pwVar6 = pwVar9, pwVar6 != (wchar_t *)0x0) {
        pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar6 + 1,L"::");
        pwVar7 = pwVar6;
      }
      FName::FName(&local_res8,pwVar7 + 2,1);
      FUN_14074ba20(lVar8,*param_1,&LAB_140f37490,local_res8);
      if (lVar4 == lVar8) {
        *(undefined1 *)(*param_1 + 0x6cc) = 0;
      }
    }
    pwVar7 = pwVar11;
    if (*(longlong *)(*param_1 + 0x6b0) != 0) {
      pwVar7 = *(wchar_t **)(*param_1 + 0x6b8);
    }
    lVar8 = (**(code **)(*(longlong *)pwVar7 + 0x18))();
    if (lVar8 != 0) {
      pwVar9 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnHealthLow",L"::");
      pwVar7 = pwVar11;
      while (pwVar6 = pwVar9, pwVar6 != (wchar_t *)0x0) {
        pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar6 + 1,L"::");
        pwVar7 = pwVar6;
      }
      FName::FName(&local_res10,pwVar7 + 2,1);
      FUN_14074ba20(lVar8,*param_1,&LAB_140f37480,local_res10);
      if (lVar4 == lVar8) {
        *(undefined1 *)(*param_1 + 0x6cc) = 1;
      }
    }
    pwVar7 = pwVar11;
    if (*(longlong *)(*param_1 + 0x6b0) != 0) {
      pwVar7 = *(wchar_t **)(*param_1 + 0x6b8);
    }
    lVar8 = (**(code **)(*(longlong *)pwVar7 + 0x20))();
    if (lVar8 != 0) {
      pwVar9 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnHealthVeryLow",L"::");
      pwVar7 = pwVar11;
      while (pwVar6 = pwVar9, pwVar6 != (wchar_t *)0x0) {
        pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar6 + 1,L"::");
        pwVar7 = pwVar6;
      }
      FName::FName(&local_res18,pwVar7 + 2,1);
      FUN_14074ba20(lVar8,*param_1,&LAB_140f374c0,local_res18);
      if (lVar4 == lVar8) {
        *(undefined1 *)(*param_1 + 0x6cc) = 2;
      }
    }
    pwVar7 = pwVar11;
    if (*(longlong *)(*param_1 + 0x6b0) != 0) {
      pwVar7 = *(wchar_t **)(*param_1 + 0x6b8);
    }
    lVar8 = (**(code **)(*(longlong *)pwVar7 + 0x28))();
    if (lVar8 != 0) {
      pwVar9 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnInjured",L"::");
      pwVar7 = pwVar11;
      while (pwVar6 = pwVar9, pwVar6 != (wchar_t *)0x0) {
        pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar6 + 1,L"::");
        pwVar7 = pwVar6;
      }
      FName::FName(&local_res20,pwVar7 + 2,1);
      FUN_14074ba20(lVar8,*param_1,&LAB_140f34950,local_res20);
      if (lVar4 == lVar8) {
        *(undefined1 *)(*param_1 + 0x6cc) = 3;
      }
    }
    pwVar7 = pwVar11;
    if (*(longlong *)(*param_1 + 0x6b0) != 0) {
      pwVar7 = *(wchar_t **)(*param_1 + 0x6b8);
    }
    lVar8 = (**(code **)(*(longlong *)pwVar7 + 0x30))();
    uVar10 = 0;
    if (lVar8 != 0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnDeath",L"::");
      while (pwVar9 = pwVar7, pwVar9 != (wchar_t *)0x0) {
        pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar9 + 1,L"::");
        pwVar11 = pwVar9;
      }
      FName::FName(local_48,pwVar11 + 2,1);
      uVar10 = FUN_14074ba20(lVar8,*param_1,&LAB_140f34950,local_48[0]);
      if (lVar4 == lVar8) {
        uVar10 = *param_1;
        *(undefined1 *)(uVar10 + 0x6cc) = 3;
      }
    }
  }
  return uVar10;
}



// FUNCTION 140f20560 FUN_140f20560 body=250 status=ok
// SIG undefined FUN_140f20560(void)

void FUN_140f20560(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined4 local_res8;
  undefined4 local_resc;
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20 [8];
  undefined1 local_18 [8];
  undefined4 local_10;
  undefined4 local_c;
  
  FWeakObjectPtr::operator=(&local_28,0);
  FWeakObjectPtr::operator=(local_20,0);
  FWeakObjectPtr::operator=(local_18,0);
  FWeakObjectPtr::operator=(&local_10,0);
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x618) == 7) {
    puVar3 = local_18;
  }
  else {
    FWeakObjectPtr::operator=(&local_res8,0);
    local_28 = local_res8;
    local_24 = local_resc;
    FWeakObjectPtr::operator=(local_18,*(undefined8 *)(*param_1 + 0xf20));
    FWeakObjectPtr::operator=(&local_res8,0);
    puVar3 = local_20;
    local_10 = local_res8;
    local_c = local_resc;
    lVar1 = *param_1;
  }
  FWeakObjectPtr::operator=(puVar3,*(undefined8 *)(lVar1 + 0xf38));
  lVar4 = *param_1;
  lVar1 = *(longlong *)(lVar4 + 0xf30);
  local_38 = lVar1;
  if (lVar1 == 0) {
    local_30 = 0;
  }
  else {
    uVar2 = UBlendableInterface::GetPrivateStaticClass();
    local_30 = UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar2);
    lVar4 = *param_1;
  }
  FUN_142ecfd10(lVar4,&local_38,&local_28);
  return;
}



// FUNCTION 140f20660 FUN_140f20660 body=650 status=ok
// SIG undefined FUN_140f20660(void)

void FUN_140f20660(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  bool bVar11;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  longlong *plStack_50;
  longlong local_48;
  longlong *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28 [8];
  longlong *local_20;
  
  lVar10 = 0;
  lVar6 = FWeakObjectPtr::Get(*param_1 + 0x5cc);
  if (lVar6 != 0) {
    lVar7 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    if (bVar11) goto LAB_140f206ce;
  }
  lVar6 = lVar10;
LAB_140f206ce:
  cVar5 = FWeakObjectPtr::IsValid(*param_1 + 0x58c);
  bVar11 = cVar5 == '\0';
  if (bVar11) {
    plVar9 = &local_58;
    local_58 = 0;
    plStack_50 = (longlong *)0x0;
  }
  else {
    uVar8 = FWeakObjectPtr::Get(*param_1 + 0x58c);
    plVar9 = (longlong *)FUN_142dcf3a0(uVar8,local_28);
    lVar10 = *plVar9;
  }
  plVar4 = (longlong *)plVar9[1];
  plVar9[1] = 0;
  *plVar9 = 0;
  plVar9 = plStack_50;
  if (bVar11) {
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_50 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
    }
  }
  if ((!bVar11) && (local_20 != (longlong *)0x0)) {
    LOCK();
    plVar9 = local_20 + 1;
    lVar7 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  if ((lVar6 != 0) && (lVar10 != 0)) {
    lVar7 = *(longlong *)(*param_1 + 0x6b8);
    if (lVar7 != 0) {
      local_40 = *(longlong **)(*param_1 + 0x6c0);
      if (local_40 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_40 + 1) = (int)local_40[1] + 1;
        UNLOCK();
      }
      local_68 = (undefined4)lVar10;
      uStack_64 = (undefined4)((ulonglong)lVar10 >> 0x20);
      uStack_60 = SUB84(plVar4,0);
      uStack_5c = (undefined4)((ulonglong)plVar4 >> 0x20);
      local_38 = local_68;
      uStack_34 = uStack_64;
      uStack_30 = uStack_60;
      uStack_2c = uStack_5c;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      local_48 = lVar7;
      FUN_140bf76e0(lVar6,&local_38,&local_48);
      plVar9 = (longlong *)CONCAT44(uStack_2c,uStack_30);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar9 + 1;
        lVar10 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
      plVar9 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_40 + 1;
        lVar10 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar4 + 1;
    lVar10 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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



// FUNCTION 140f208f0 FUN_140f208f0 body=187 status=ok
// SIG undefined FUN_140f208f0(void)

void FUN_140f208f0(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FWeakObjectPtr::Get(*param_1 + 0x5cc);
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
      TBaseMulticastDelegate<void>::Remove
                (*(longlong *)(lVar2 + 0x478) + 0x1e0,*(undefined8 *)(*param_1 + 0x6a8));
      *(undefined8 *)(*param_1 + 0x6a8) = 0;
      TBaseMulticastDelegate<void>::Remove
                (*(longlong *)(lVar2 + 0x478) + 0x208,*(undefined8 *)(*param_1 + 0x6b0));
      *(undefined8 *)(*param_1 + 0x6b0) = 0;
    }
  }
  return;
}



// FUNCTION 140f209b0 FUN_140f209b0 body=481 status=ok
// SIG undefined FUN_140f209b0(void)

void FUN_140f209b0(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 local_res8;
  code *local_38;
  undefined8 uStack_30;
  
  lVar7 = *param_1;
  *(undefined4 *)(lVar7 + 0xe40) = 0;
  if (0x7fffffff < *(uint *)(lVar7 + 0xe44)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(lVar7 + 0xe38,0);
  }
  lVar7 = FWeakObjectPtr::Get(*param_1 + 0x58c);
  if (lVar7 != 0) {
    lVar8 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      uStack_30 = (ulonglong)uStack_30._4_4_ << 0x20;
      local_38 = FUN_140f3b230;
      pwVar9 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnInventoryCustomizationUnlocked",L"::");
      pwVar5 = (wchar_t *)0x0;
      while (pwVar4 = pwVar9, pwVar4 != (wchar_t *)0x0) {
        pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
        pwVar5 = pwVar4;
      }
      FName::FName(&local_res8,pwVar5 + 2,1);
      FUN_1407260e0(lVar7 + 0xc28,*param_1,&local_38,local_res8);
      plVar10 = *(longlong **)(lVar7 + 0x1870);
      plVar11 = plVar10 + (longlong)*(int *)(lVar7 + 0x1878) * 2;
      for (; plVar10 != plVar11; plVar10 = plVar10 + 2) {
        plVar2 = (longlong *)*plVar10;
        if (plVar2 != (longlong *)0x0) {
          lVar8 = FUN_1414ecd30();
          if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
              != lVar8 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if ((bVar3) && (cVar6 = (**(code **)(*plVar2 + 0x2a8))(plVar2,lVar7), cVar6 == '\0')) {
            lVar8 = *param_1;
            iVar1 = *(int *)(lVar8 + 0xe40);
            *(int *)(lVar8 + 0xe40) = iVar1 + 1;
            if (*(int *)(lVar8 + 0xe44) < iVar1 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar8 + 0xe38,iVar1)
              ;
            }
            *(longlong **)(*(longlong *)(lVar8 + 0xe38) + (longlong)iVar1 * 8) = plVar2;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140f20ba0 FUN_140f20ba0 body=183 status=ok
// SIG undefined FUN_140f20ba0(void)

void FUN_140f20ba0(longlong *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  BOOL BVar5;
  undefined8 uVar6;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar7;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(*param_1 + 0xf18);
  BVar5 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar5 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  lVar7 = 0xc18;
  cVar4 = FUN_140ee10a0();
  if (cVar4 == '\0') goto LAB_140f20c39;
  lVar3 = *param_1;
  LOCK();
  iVar1 = *(int *)(lVar3 + 0xf98);
  *(int *)(lVar3 + 0xf98) = 0;
  UNLOCK();
  LOCK();
  iVar2 = *(int *)(lVar3 + 0xf9c);
  *(int *)(lVar3 + 0xf9c) = 0;
  UNLOCK();
  if (iVar1 == 0) {
    if (iVar2 != 0) {
      uVar6 = 1;
      goto LAB_140f20c1d;
    }
  }
  else {
    uVar6 = 0;
LAB_140f20c1d:
    FUN_140f47890(lVar3,uVar6);
  }
  if (*(char *)(lVar3 + 0xe31) != '\x01') {
    lVar7 = 0xa80;
  }
  FUN_140f089d0(lVar3 + lVar7);
LAB_140f20c39:
                    /* WARNING: Could not recover jumptable at 0x000140f20c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 140f20c60 FUN_140f20c60 body=419 status=ok
// SIG undefined FUN_140f20c60(void)

void FUN_140f20c60(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 local_res8;
  undefined4 local_resc;
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  FWeakObjectPtr::operator=(&local_28,0);
  FWeakObjectPtr::operator=(&local_20,0);
  FWeakObjectPtr::operator=(&local_18,0);
  FWeakObjectPtr::operator=(&local_10,0);
  lVar2 = *param_1;
  uVar3 = 0;
  if (*(longlong *)(lVar2 + 0xac0) != 0) {
    FWeakObjectPtr::operator=(&local_res8,0);
    local_28 = local_res8;
    local_24 = local_resc;
    FWeakObjectPtr::operator=(&local_res8,0);
    local_18 = local_res8;
    local_14 = local_resc;
    FWeakObjectPtr::operator=(&local_10,*(undefined8 *)(*param_1 + 0xae0));
    FWeakObjectPtr::operator=(&local_res8,0);
    lVar4 = *param_1;
    local_20 = local_res8;
    local_1c = local_resc;
    lVar2 = *(longlong *)(lVar4 + 0xac0);
    local_30 = uVar3;
    local_38 = lVar2;
    if (lVar2 != 0) {
      uVar1 = UBlendableInterface::GetPrivateStaticClass();
      local_30 = UObjectBaseUtility::GetInterfaceAddress(lVar2,uVar1);
      lVar4 = *param_1;
    }
    FUN_142ecfd10(lVar4,&local_38,&local_28);
    lVar2 = *param_1;
  }
  if (*(longlong *)(lVar2 + 0xae0) != 0) {
    FWeakObjectPtr::operator=(&local_res8,0);
    local_28 = local_res8;
    local_24 = local_resc;
    FWeakObjectPtr::operator=(&local_18,*(undefined8 *)(*param_1 + 0xac0));
    FWeakObjectPtr::operator=(&local_res8,0);
    local_10 = local_res8;
    local_c = local_resc;
    FWeakObjectPtr::operator=(&local_res8,0);
    lVar2 = *param_1;
    local_20 = local_res8;
    local_1c = local_resc;
    lVar4 = *(longlong *)(lVar2 + 0xae0);
    local_38 = lVar4;
    if (lVar4 != 0) {
      uVar3 = UBlendableInterface::GetPrivateStaticClass();
      uVar3 = UObjectBaseUtility::GetInterfaceAddress(lVar4,uVar3);
      lVar2 = *param_1;
    }
    local_30 = uVar3;
    FUN_142ecfd10(lVar2,&local_38,&local_28);
  }
  return;
}



// FUNCTION 140f20e10 FUN_140f20e10 body=223 status=ok
// SIG undefined FUN_140f20e10(void)

void FUN_140f20e10(longlong *param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  undefined8 local_res8;
  
  lVar4 = FWeakObjectPtr::Get(*param_1 + 0x5c8);
  if (lVar4 != 0) {
    lVar5 = FUN_14142a560();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      pwVar6 = _guard_xfg_dispatch_icall_nop
                         (L"&UGFxFightForYourLifeWidget::OnInputDeviceChanged",L"::");
      pwVar3 = (wchar_t *)0x0;
      while (pwVar2 = pwVar6, pwVar2 != (wchar_t *)0x0) {
        pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar3 = pwVar2;
      }
      FName::FName(&local_res8,pwVar3 + 2,1);
      TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar4 + 0x5f8,*param_1,local_res8);
      FUN_140483870(lVar4 + 0x7c8,*param_1);
    }
  }
  return;
}



// FUNCTION 140f20ef0 FUN_140f20ef0 body=271 status=ok
// SIG undefined FUN_140f20ef0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f20ef0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  uVar1 = *param_1;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = uVar1;
    *puVar2 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = &LAB_140f26cb0;
  uVar3 = FUN_1420849a0(uVar1,local_68,local_b8);
  FUN_14208c260(uVar1,uVar3);
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
  if (local_78 != 0) {
    plVar4 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar4 = local_88;
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140f21000 FUN_140f21000 body=801 status=ok
// SIG undefined FUN_140f21000(void)

void FUN_140f21000(longlong *param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  undefined8 local_res8;
  
  lVar5 = FWeakObjectPtr::Get(*param_1 + 0x5d8);
  if (lVar5 != 0) {
    lVar6 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_1407665e0(lVar5 + 0xaf8,*param_1);
      FUN_1407665e0(lVar5 + 0xb08,*param_1);
    }
  }
  lVar5 = *param_1;
  if (*(longlong *)(lVar5 + 0x670) != 0) {
    pwVar7 = _guard_xfg_dispatch_icall_nop(L"&UGFxInteractionPrompt::OnUsedPrimary",L"::");
    pwVar3 = (wchar_t *)0x0;
    while (pwVar2 = pwVar7, pwVar2 != (wchar_t *)0x0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar3 = pwVar2;
    }
    FName::FName(&local_res8,pwVar3 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove
              (*(longlong *)(*param_1 + 0x670) + 0x328,*param_1,local_res8);
    pwVar7 = _guard_xfg_dispatch_icall_nop(L"&UGFxInteractionPrompt::OnUsedPrimaryHold",L"::");
    pwVar3 = (wchar_t *)0x0;
    while (pwVar2 = pwVar7, pwVar2 != (wchar_t *)0x0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar3 = pwVar2;
    }
    FName::FName(&local_res8,pwVar3 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove
              (*(longlong *)(*param_1 + 0x670) + 0x338,*param_1,local_res8);
    pwVar7 = _guard_xfg_dispatch_icall_nop(L"&UGFxInteractionPrompt::OnUsedSecondary",L"::");
    pwVar3 = (wchar_t *)0x0;
    while (pwVar2 = pwVar7, pwVar2 != (wchar_t *)0x0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar3 = pwVar2;
    }
    FName::FName(&local_res8,pwVar3 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove
              (*(longlong *)(*param_1 + 0x670) + 0x348,*param_1,local_res8);
    pwVar7 = _guard_xfg_dispatch_icall_nop(L"&UGFxInteractionPrompt::OnUsedSecondaryHold",L"::");
    pwVar3 = (wchar_t *)0x0;
    while (pwVar2 = pwVar7, pwVar2 != (wchar_t *)0x0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar3 = pwVar2;
    }
    FName::FName(&local_res8,pwVar3 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove
              (*(longlong *)(*param_1 + 0x670) + 0x358,*param_1,local_res8);
    *(undefined8 *)(*param_1 + 0x670) = 0;
    lVar5 = *param_1;
  }
  if (*(longlong *)(lVar5 + 0x668) != 0) {
    pwVar7 = _guard_xfg_dispatch_icall_nop(L"&UGFxInteractionPrompt::OnHoldUseStopped",L"::");
    pwVar3 = (wchar_t *)0x0;
    while (pwVar2 = pwVar7, pwVar2 != (wchar_t *)0x0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar3 = pwVar2;
    }
    FName::FName(&local_res8,pwVar3 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove
              (*(longlong *)(*param_1 + 0x668) + 0x1a8,*param_1,local_res8);
    *(undefined8 *)(*param_1 + 0x668) = 0;
  }
  lVar5 = FUN_1416f8720((int)param_1[1]);
  if (lVar5 != 0) {
    lVar5 = FUN_1416f8720((int)param_1[1]);
    FUN_1407665e0(lVar5 + 0x318,*param_1);
  }
  cVar4 = FWeakObjectPtr::IsValid(*param_1 + 0x5c8);
  if (cVar4 != '\0') {
    lVar5 = FWeakObjectPtr::Get(*param_1 + 0x5c8);
    FUN_1407665e0(lVar5 + 0x5f8,*param_1);
    lVar5 = FUN_140eccbe0(*param_1);
    if (lVar5 != 0) {
      FUN_140483870(lVar5 + 0x7c8,*param_1);
    }
  }
  return;
}



// FUNCTION 140f21330 FUN_140f21330 body=378 status=ok
// SIG undefined FUN_140f21330(void)

void FUN_140f21330(longlong *param_1,float param_2,longlong param_3)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  float *pfVar4;
  ulonglong uVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  iVar6 = 0;
  fVar8 = 0.0;
  fVar7 = 0.0;
  iVar1 = *(int *)(*param_1 + 0xdcc);
  if (7 < iVar1) {
    fVar9 = *(float *)param_1[1];
    uVar3 = (iVar1 - 8U >> 3) + 1;
    uVar5 = (ulonglong)uVar3;
    iVar6 = uVar3 * 8;
    do {
      fVar7 = fVar9 + fVar7 + fVar9 + fVar9 + fVar9 + fVar9 + fVar9 + fVar9 + fVar9;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (iVar6 < iVar1) {
    uVar5 = (ulonglong)(uint)(iVar1 - iVar6);
    do {
      fVar7 = fVar7 + *(float *)param_1[1];
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (iVar1 == *(int *)param_1[5] + -1) {
    pfVar4 = (float *)param_1[2];
  }
  else {
    pfVar4 = (float *)param_1[1];
  }
  fVar9 = (*pfVar4 + fVar7) - fVar7;
  if (1e-08 < ABS(fVar9)) {
    fVar9 = (param_2 - fVar7) / fVar9;
    fVar7 = fVar8;
    if (fVar9 < 0.0) goto LAB_140f2140e;
  }
  else {
    fVar9 = fVar8;
    if (*pfVar4 + fVar7 <= param_2) {
      fVar9 = 1.0;
    }
  }
  fVar7 = fVar9;
  if (1.0 <= fVar9) {
    fVar7 = 1.0;
  }
LAB_140f2140e:
  if (iVar1 == *(int *)param_1[5] + -1) {
    if ((0.0 <= fVar7) && (fVar8 = fVar7, 1.0 <= fVar7)) {
      fVar8 = 1.0;
    }
    fVar7 = ((float)*(int *)param_1[3] / (float)*(int *)param_1[4]) * fVar8;
  }
  cVar2 = FUN_142ebe030(*param_1);
  if (cVar2 != '\0') {
    fVar7 = fVar7 * 0.5;
  }
  if (param_3 != 0) {
    if (*(char *)param_1[6] != '\0') {
      FUN_142ef4810();
      return;
    }
    FUN_142f0ead0(param_3,fVar7);
  }
  return;
}



// FUNCTION 140f214b0 FUN_140f214b0 body=161 status=ok
// SIG undefined FUN_140f214b0(void)

void FUN_140f214b0(longlong *param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  char cVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  undefined8 local_res8;
  
  cVar3 = FWeakObjectPtr::IsValid(*param_1 + 0x5c8);
  if (cVar3 != '\0') {
    pwVar4 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnInputDeviceChanged",L"::");
    pwVar2 = (wchar_t *)0x0;
    while (pwVar1 = pwVar4, pwVar1 != (wchar_t *)0x0) {
      pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar2 = pwVar1;
    }
    FName::FName(&local_res8,pwVar2 + 2,1);
    lVar5 = FWeakObjectPtr::Get(*param_1 + 0x5c8);
    FUN_14074ba20(lVar5 + 0x5f8,*param_1,FUN_140f3aed0,local_res8);
  }
  return;
}



// FUNCTION 140f21560 FUN_140f21560 body=837 status=ok
// SIG undefined FUN_140f21560(void)

void FUN_140f21560(longlong *param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  int iVar9;
  undefined8 local_res8;
  undefined1 *local_48;
  ulonglong uStack_40;
  undefined4 local_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  (**(code **)(*(longlong *)*param_1 + 0x4c0))((longlong *)*param_1,&local_res8);
  lVar6 = *param_1;
  if (*(longlong *)(lVar6 + 0xa40) == 0) {
    FUN_14172a070(&local_res8,0);
    uVar5 = NewObject<UMaterialParameterCollectionInstance>(*param_1);
    *(undefined8 *)(*param_1 + 0xa40) = uVar5;
    FUN_14172a400(&local_res8);
    lVar6 = *param_1;
  }
  if (*(longlong *)(lVar6 + 0xa48) == 0) {
    FUN_14172a070(&local_res8,0);
    uVar5 = NewObject<UMaterialParameterCollectionInstance>(*param_1);
    *(undefined8 *)(*param_1 + 0xa48) = uVar5;
    FUN_14172a400(&local_res8);
    lVar6 = *param_1;
  }
  if (*(longlong *)(lVar6 + 0xa48) != 0) {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    lVar6 = *(longlong *)(DAT_146b33f38 + 0x90);
    if (lVar6 != 0) {
      lVar7 = FUN_1414d9130();
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
        uStack_40 = uStack_40 & 0xffffffff00000000;
        local_48 = &LAB_140f422a0;
        pwVar8 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnThumbnailLoaded",L"::");
        pwVar3 = (wchar_t *)0x0;
        while (pwVar2 = pwVar8, pwVar2 != (wchar_t *)0x0) {
          pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
          pwVar3 = pwVar2;
        }
        FName::FName(&local_res8,pwVar3 + 2,1);
        FUN_1407260e0(*(longlong *)(*param_1 + 0xa48) + 0xe8,*param_1,&local_48,local_res8);
        local_38 = *(undefined4 *)(lVar6 + 0xb78);
        uStack_30 = *(undefined4 *)(lVar6 + 0xb80);
        uStack_2c = *(undefined4 *)(lVar6 + 0xb84);
        local_28 = *(undefined8 *)(lVar6 + 0xb88);
        iStack_34 = *(undefined4 *)(*param_1 + 0x8e0);
        FUN_1411f9620(*(undefined8 *)(*param_1 + 0xa48),&local_38);
        uVar4 = FUN_142eb7a90(*param_1);
        *(undefined4 *)(*(longlong *)(*param_1 + 0xa48) + 0xd8) = uVar4;
      }
    }
  }
  if (*(longlong *)(*param_1 + 0xa40) != 0) {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    lVar6 = *(longlong *)(DAT_146b33f38 + 0x90);
    if (lVar6 != 0) {
      lVar7 = FUN_1414d9130();
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
        uStack_40 = uStack_40 & 0xffffffff00000000;
        local_48 = &LAB_140f422a0;
        pwVar8 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnThumbnailLoaded",L"::");
        pwVar3 = (wchar_t *)0x0;
        while (pwVar2 = pwVar8, pwVar2 != (wchar_t *)0x0) {
          pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
          pwVar3 = pwVar2;
        }
        FName::FName(&local_res8,pwVar3 + 2,1);
        FUN_1407260e0(*(longlong *)(*param_1 + 0xa40) + 0xe8,*param_1,&local_48,local_res8);
        lVar7 = *param_1;
        local_38 = *(undefined4 *)(lVar6 + 0xb78);
        uStack_30 = *(undefined4 *)(lVar6 + 0xb80);
        uStack_2c = *(undefined4 *)(lVar6 + 0xb84);
        local_28 = *(undefined8 *)(lVar6 + 0xb88);
        iVar9 = *(int *)(lVar7 + 0x8e0) + *(int *)(lVar7 + 0x86c) + *(int *)(lVar7 + 0x780);
        iStack_34 = *(int *)(lVar6 + 0xb7c);
        if (*(int *)(lVar6 + 0xb7c) <= iVar9) {
          iStack_34 = iVar9;
        }
        FUN_1411f9620(*(undefined8 *)(lVar7 + 0xa40),&local_38);
        uVar4 = FUN_142eb7a90(*param_1);
        *(undefined4 *)(*(longlong *)(*param_1 + 0xa40) + 0xd8) = uVar4;
      }
    }
  }
  return;
}



// FUNCTION 140f218b0 FUN_140f218b0 body=1393 status=ok
// SIG undefined FUN_140f218b0(void)

void FUN_140f218b0(longlong *param_1)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  uint uVar13;
  undefined4 *puVar14;
  int *piVar15;
  wchar_t *pwVar16;
  bool bVar17;
  undefined8 local_res8;
  undefined4 local_res10;
  undefined4 uStackX_14;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 *local_88 [2];
  undefined1 local_78 [32];
  undefined8 local_58;
  undefined4 local_48;
  
  local_res10 = (undefined4)param_1[1];
  uStackX_14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(&local_res8);
  FUN_14172a400(&local_res8);
  cVar5 = FWeakObjectPtr::IsValid(&local_res10);
  pwVar16 = (wchar_t *)0x0;
  if (cVar5 != '\0') {
    lVar7 = FWeakObjectPtr::Get(&local_res10);
    iVar1 = *(int *)(lVar7 + 0xc);
    pwVar12 = pwVar16;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar13 = iVar1 >> 0x1f & 0xffff;
      uVar6 = iVar1 + uVar13;
      pwVar12 = (wchar_t *)
                (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
                (longlong)(int)((uVar6 & 0xffff) - uVar13) * 0x18);
    }
    if ((*(uint *)(pwVar12 + 4) & 0x30000000) == 0) {
      bVar17 = true;
      goto LAB_140f21943;
    }
  }
  bVar17 = false;
LAB_140f21943:
  if (bVar17) {
    lVar7 = FWeakObjectPtr::Get(param_1 + 2);
    if (lVar7 != 0) {
      lVar8 = FUN_1413f82e0();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar17 = false;
      }
      else {
        bVar17 = true;
      }
      if (bVar17) {
        local_98 = *param_1;
        local_58 = 0;
        local_48 = 0;
        uStack_90 = lVar7;
        puVar9 = (undefined8 *)FUN_140438ef0(0x18,local_78);
        if (puVar9 != (undefined8 *)0x0) {
          *puVar9 = &PTR_FUN_143f77c18;
          *(int *)(puVar9 + 1) = (int)local_98;
          *(int *)((longlong)puVar9 + 0xc) = local_98._4_4_;
          *(undefined4 *)(puVar9 + 2) = (undefined4)uStack_90;
          *(undefined4 *)((longlong)puVar9 + 0x14) = uStack_90._4_4_;
        }
        local_88[0] = &LAB_140f27080;
        FUN_14204c280(local_88);
      }
    }
    cVar5 = FWeakObjectPtr::IsValid(param_1 + 3);
    if (cVar5 != '\0') {
      plVar10 = (longlong *)FWeakObjectPtr::Get(param_1 + 3);
      lVar7 = (**(code **)(*plVar10 + 0x670))(plVar10);
      if (lVar7 != 0) {
        lVar8 = FUN_14145f370();
        if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
          bVar17 = false;
        }
        else {
          bVar17 = true;
        }
        if ((bVar17) && (lVar7 = *(longlong *)(lVar7 + 0x488), lVar7 != 0)) {
          lVar8 = FUN_1414bbb50();
          lVar7 = *(longlong *)(lVar7 + 0x10);
          if ((*(int *)(lVar7 + 0x90) < *(int *)(lVar8 + 0x90)) ||
             (*(longlong *)(*(longlong *)(lVar7 + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
              lVar8 + 0x88)) {
            bVar17 = false;
          }
          else {
            bVar17 = true;
          }
          if (bVar17) {
            (**(code **)(*(longlong *)*param_1 + 0x580))
                      ((longlong *)*param_1,CONCAT71((int7)((ulonglong)lVar7 >> 8),1));
            *(undefined1 *)(*param_1 + 0x770) = 0;
            return;
          }
        }
      }
    }
    lVar7 = FUN_140eccca0(*param_1);
    if (lVar7 != 0) {
      lVar8 = FUN_1413ffe00();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar17 = false;
      }
      else {
        bVar17 = true;
      }
      if (bVar17) {
        pwVar11 = _guard_xfg_dispatch_icall_nop(L"&UGFxGrenadeWidget::OnGrenadeThrowFailed",L"::");
        pwVar12 = pwVar16;
        while (pwVar4 = pwVar11, pwVar4 != (wchar_t *)0x0) {
          pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
          pwVar12 = pwVar4;
        }
        FName::FName(&local_res10,pwVar12 + 2,1);
        lVar3 = CONCAT44(uStackX_14,local_res10);
        lVar8 = *param_1;
        plVar10 = (longlong *)(lVar7 + 0x2660);
        FWeakObjectPtr::operator=(&local_98,0);
        uStack_90 = 0;
        FWeakObjectPtr::operator=(&local_98,lVar8);
        local_res8 = 0;
        uStack_90 = lVar3;
        if ((lVar3 != 0) && (lVar8 = FWeakObjectPtr::Get(&local_98), lVar8 != 0)) {
          UObject::FindFunction(lVar8,uStack_90);
        }
        piVar2 = (int *)*plVar10;
        iVar1 = *(int *)(lVar7 + 0x2668);
        for (piVar15 = piVar2; piVar15 != piVar2 + (longlong)iVar1 * 4; piVar15 = piVar15 + 4) {
          if (((*piVar15 == (int)local_98) &&
              (local_98._4_4_ = (int)((ulonglong)local_98 >> 0x20),
              bVar17 = piVar15[1] == local_98._4_4_, bVar17)) ||
             ((cVar5 = FWeakObjectPtr::IsValid(piVar15), cVar5 == '\0' &&
              (cVar5 = FWeakObjectPtr::IsValid(&local_98), cVar5 == '\0')))) {
            bVar17 = true;
          }
          else {
            bVar17 = false;
          }
          if ((bVar17) && (*(longlong *)(piVar15 + 2) == uStack_90)) {
            bVar17 = true;
          }
          else {
            bVar17 = false;
          }
          if (bVar17) {
            if ((int)((longlong)piVar15 - (longlong)piVar2 >> 4) != -1) goto LAB_140f21c54;
            break;
          }
        }
        iVar1 = *(int *)(lVar7 + 0x2668);
        *(int *)(lVar7 + 0x2668) = iVar1 + 1;
        if (*(int *)(lVar7 + 0x266c) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar1);
        }
        puVar14 = (undefined4 *)((longlong)iVar1 * 0x10 + *plVar10);
        *puVar14 = (int)local_98;
        puVar14[1] = local_98._4_4_;
        *(longlong *)(puVar14 + 2) = uStack_90;
LAB_140f21c54:
        TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar10);
        pwVar12 = _guard_xfg_dispatch_icall_nop
                            (L"&UGFxGrenadeWidget::OnInventoryEquipHasChanged",L"::");
        while (pwVar11 = pwVar12, pwVar11 != (wchar_t *)0x0) {
          pwVar12 = _guard_xfg_dispatch_icall_nop(pwVar11 + 1,L"::");
          pwVar16 = pwVar11;
        }
        FName::FName(&local_res10,pwVar16 + 2,1);
        lVar3 = CONCAT44(uStackX_14,local_res10);
        lVar8 = *param_1;
        plVar10 = (longlong *)(lVar7 + 0x1308);
        FWeakObjectPtr::operator=(&local_98,0);
        uStack_90 = 0;
        FWeakObjectPtr::operator=(&local_98,lVar8);
        local_res8 = 0;
        uStack_90 = lVar3;
        if ((lVar3 != 0) && (lVar8 = FWeakObjectPtr::Get(&local_98), lVar8 != 0)) {
          UObject::FindFunction(lVar8,uStack_90);
        }
        piVar2 = (int *)*plVar10;
        iVar1 = *(int *)(lVar7 + 0x1310);
        for (piVar15 = piVar2; piVar15 != piVar2 + (longlong)iVar1 * 4; piVar15 = piVar15 + 4) {
          if (((*piVar15 == (int)local_98) &&
              (local_98._4_4_ = (int)((ulonglong)local_98 >> 0x20),
              bVar17 = piVar15[1] == local_98._4_4_, bVar17)) ||
             ((cVar5 = FWeakObjectPtr::IsValid(piVar15), cVar5 == '\0' &&
              (cVar5 = FWeakObjectPtr::IsValid(&local_98), cVar5 == '\0')))) {
            bVar17 = true;
          }
          else {
            bVar17 = false;
          }
          if ((bVar17) && (*(longlong *)(piVar15 + 2) == uStack_90)) {
            bVar17 = true;
          }
          else {
            bVar17 = false;
          }
          if (bVar17) {
            if ((int)((longlong)piVar15 - (longlong)piVar2 >> 4) != -1) goto LAB_140f21da4;
            break;
          }
        }
        iVar1 = *(int *)(lVar7 + 0x1310);
        *(int *)(lVar7 + 0x1310) = iVar1 + 1;
        if (*(int *)(lVar7 + 0x1314) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar1);
        }
        puVar14 = (undefined4 *)((longlong)iVar1 * 0x10 + *plVar10);
        *puVar14 = (int)local_98;
        puVar14[1] = local_98._4_4_;
        *(longlong *)(puVar14 + 2) = uStack_90;
LAB_140f21da4:
        TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar10);
      }
      lVar7 = *param_1;
      local_58 = 0;
      local_48 = 0;
      puVar9 = (undefined8 *)FUN_140438ef0(0x10,local_78);
      if (puVar9 != (undefined8 *)0x0) {
        puVar9[1] = lVar7;
        *puVar9 = &PTR_FUN_143f77b70;
      }
      local_88[0] = &LAB_140f26d20;
      FUN_14204c280(local_88);
    }
  }
  return;
}



// FUNCTION 140f21e30 FUN_140f21e30 body=150 status=ok
// SIG undefined FUN_140f21e30(void)

void FUN_140f21e30(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = *(undefined4 *)(param_1 + 1);
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(&local_res10);
    iVar1 = *(int *)(lVar4 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar5;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) & 0x30000000) == 0) {
      FUN_142eb3990(*param_1);
      return;
    }
  }
  return;
}



// FUNCTION 140f21ed0 FUN_140f21ed0 body=429 status=ok
// SIG undefined FUN_140f21ed0(void)

void FUN_140f21ed0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_res8;
  
  lVar2 = FUN_1416f8720((int)param_1[1]);
  if (lVar2 != 0) {
    lVar2 = FUN_1416f8720((int)param_1[1]);
    *(undefined1 *)(lVar2 + 0x330) = 1;
    lVar2 = FUN_1416f8720((int)param_1[1]);
    FText::operator=(lVar2 + 0x350,*param_1 + 0xf40);
    lVar2 = FUN_1416f8720((int)param_1[1]);
    FText::operator=(lVar2 + 0x338,*param_1 + 0xc60);
    uVar3 = FUN_1416f8720((int)param_1[1]);
    UItemViewerScrollSelector::SetNumPages(uVar3,1);
    uVar3 = FUN_1416f8720((int)param_1[1]);
    lVar2 = *param_1;
    iVar1 = *(int *)(lVar2 + 0xc28);
    *(int *)(lVar2 + 0xc28) = iVar1 + 1;
    if (*(int *)(lVar2 + 0xc2c) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar2 + 0xc20,iVar1);
    }
    *(undefined8 *)(*(longlong *)(lVar2 + 0xc20) + (longlong)iVar1 * 8) = uVar3;
    FName::FName(&local_res8,L"OnSlotButtonClicked",1);
    lVar2 = FUN_1416f8720((int)param_1[1]);
    FWeakObjectPtr::operator=(lVar2 + 0x1b0,*param_1);
    *(undefined8 *)(lVar2 + 0x1b8) = local_res8;
    FName::FName(&local_res8,L"OnSlotButtonFocused",1);
    lVar2 = FUN_1416f8720((int)param_1[1]);
    FWeakObjectPtr::operator=(lVar2 + 0x1d0,*param_1);
    *(undefined8 *)(lVar2 + 0x1d8) = local_res8;
    lVar2 = FUN_1416f8720((int)param_1[1]);
    *(undefined8 *)(lVar2 + 0x400) = *(undefined8 *)(*param_1 + 0xf20);
    FName::FName(&local_res8,L"OnSlotButtonHovered",1);
    lVar2 = FUN_1416f8720((int)param_1[1]);
    FWeakObjectPtr::operator=(lVar2 + 0x210,*param_1);
    *(undefined8 *)(lVar2 + 0x218) = local_res8;
  }
  return;
}



// FUNCTION 140f22080 FUN_140f22080 body=318 status=ok
// SIG undefined FUN_140f22080(void)

void FUN_140f22080(longlong *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  undefined1 local_res8 [8];
  
  cVar5 = FUN_142d529e0(*param_1 + 0x640,param_1 + 1);
  if (cVar5 != '\0') {
    cVar5 = FUN_142d52a00(*param_1 + 0x640);
    if (cVar5 != '\0') {
      lVar1 = *param_1;
      uVar6 = FUN_142d52a20(lVar1 + 0x640);
      uVar6 = FArchive::operator<<(uVar6);
      uVar6 = FUN_142d621c0(uVar6);
      FUN_140483870(uVar6,lVar1);
      lVar1 = *param_1;
      uVar6 = FUN_142d52a20(lVar1 + 0x640);
      uVar6 = FArchive::operator<<(uVar6);
      uVar6 = FUN_142d62330(uVar6);
      FUN_140483870(uVar6,lVar1);
    }
    lVar1 = *param_1;
    uVar2 = *(undefined4 *)((longlong)param_1 + 0xc);
    lVar4 = param_1[2];
    uVar3 = *(undefined4 *)((longlong)param_1 + 0x14);
    *(int *)(lVar1 + 0x640) = (int)param_1[1];
    *(undefined4 *)(lVar1 + 0x644) = uVar2;
    *(int *)(lVar1 + 0x648) = (int)lVar4;
    *(undefined4 *)(lVar1 + 0x64c) = uVar3;
    *(longlong *)(lVar1 + 0x650) = param_1[3];
    cVar5 = FUN_142d52a00(*param_1 + 0x640);
    if (cVar5 != '\0') {
      lVar1 = *param_1;
      uVar6 = FUN_142d52a20(lVar1 + 0x640);
      uVar6 = FArchive::operator<<(uVar6);
      uVar6 = FUN_142d621c0(uVar6);
      FUN_140f12aa0(uVar6,local_res8,lVar1,FUN_140f36f00);
      lVar1 = *param_1;
      uVar6 = FUN_142d52a20(lVar1 + 0x640);
      uVar6 = FArchive::operator<<(uVar6);
      uVar6 = FUN_142d62330(uVar6);
      FUN_140f12b80(uVar6,local_res8,lVar1,FUN_140f36f60);
    }
  }
  return;
}



// FUNCTION 140f221c0 FUN_140f221c0 body=252 status=ok
// SIG undefined FUN_140f221c0(void)

longlong FUN_140f221c0(longlong *param_1,longlong param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong local_18 [2];
  
  if (param_2 != 0) {
    iVar5 = 0;
    iVar2 = FUN_142eb7440(param_2);
    if (0 < iVar2) {
      do {
        lVar3 = FUN_142eb6a30(param_2,iVar5);
        if (lVar3 != 0) {
          lVar4 = AReplicationGraphDebugActor::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if ((bVar1) && (*(longlong *)(lVar3 + 0x338) == *param_1)) {
            local_18[0] = 0;
            local_18[1] = 0xe;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
            FGenericPlatformString::Memcpy(local_18[0],L"highlightStat",0x1c);
            FUN_142088cf0(lVar3,local_18);
            if (local_18[0] == 0) {
              return lVar3;
            }
            FMemory::Free();
            return lVar3;
          }
        }
        iVar5 = iVar5 + 1;
        iVar2 = FUN_142eb7440(param_2);
      } while (iVar5 < iVar2);
    }
  }
  return 0;
}



// FUNCTION 140f222c0 FUN_140f222c0 body=570 status=ok
// SIG undefined FUN_140f222c0(void)

void FUN_140f222c0(longlong *param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  char cVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  undefined8 uVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  longlong local_res10;
  longlong *local_58;
  wchar_t *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  pwVar7 = (wchar_t *)0x0;
  local_58 = (longlong *)0x0;
  local_50 = (wchar_t *)0x0;
  lVar10 = (longlong)(int)param_1[1] * 0xd8 + *(longlong *)(*param_1 + 0xa00);
  cVar3 = FUN_140f150c0(*(undefined8 *)(*param_1 + 0xe00),lVar10 + 8,lVar10 + 0x48,0,6,&local_58);
  plVar9 = local_58;
  for (iVar11 = (int)local_50; iVar11 != 0; iVar11 = iVar11 + -1) {
    if (*plVar9 != 0) {
      FMemory::Free();
    }
    plVar9 = plVar9 + 2;
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free(local_58);
  }
  if (cVar3 != '\0') {
    pwVar4 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnPaperDollTrinketClicked",L"::");
    pwVar2 = pwVar7;
    while (pwVar1 = pwVar4, pwVar1 != (wchar_t *)0x0) {
      pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar2 = pwVar1;
    }
    FName::FName(&local_res10,pwVar2 + 2,1);
    lVar8 = *(longlong *)(lVar10 + 8);
    FWeakObjectPtr::operator=(lVar8 + 0x1b0,*param_1);
    *(longlong *)(lVar8 + 0x1b8) = local_res10;
    if ((local_res10 != 0) && (lVar5 = FWeakObjectPtr::Get(lVar8 + 0x1b0), lVar5 != 0)) {
      UObject::FindFunction(lVar5,*(undefined8 *)(lVar8 + 0x1b8));
    }
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    FWeakObjectPtr::operator=(&local_48,0);
    FWeakObjectPtr::operator=(&local_40,0);
    FWeakObjectPtr::operator=(&local_38,0);
    FWeakObjectPtr::operator=(&local_30,0);
    plVar9 = *(longlong **)(lVar10 + 8);
    local_58 = plVar9;
    if (plVar9 != (longlong *)0x0) {
      uVar6 = UBlendableInterface::GetPrivateStaticClass();
      pwVar7 = (wchar_t *)UObjectBaseUtility::GetInterfaceAddress(plVar9,uVar6);
    }
    local_50 = pwVar7;
    FUN_142ecfd10(*param_1,&local_58,&local_48);
    *(undefined1 *)(lVar10 + 0x30) = 1;
    if ((*(char *)(lVar10 + 0xcc) != '\0') && (*(char *)(*param_1 + 0xe33) == '\0')) {
      *(undefined1 *)(lVar10 + 0x30) = 0;
    }
    lVar8 = FUN_140e97230(*param_1);
    if ((lVar8 != 0) && (cVar3 = FUN_140c48ea0(lVar8,*(undefined8 *)(lVar10 + 0x58)), cVar3 == '\0')
       ) {
      *(undefined1 *)(lVar10 + 0x30) = 0;
    }
    FUN_142ed3c20(*(undefined8 *)(lVar10 + 8),*(char *)(lVar10 + 0x30) == '\0',1);
    plVar9 = (longlong *)(*(longlong *)(lVar10 + 8) + 0x170);
    (**(code **)(*plVar9 + 0x38))(plVar9,*(undefined1 *)(lVar10 + 0x30));
  }
  return;
}



// FUNCTION 140f22500 FUN_140f22500 body=397 status=ok
// SIG undefined FUN_140f22500(void)

void FUN_140f22500(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  longlong local_48;
  undefined8 local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20;
  undefined8 local_18;
  undefined2 local_10;
  
  local_res10 = *(undefined4 *)(param_1 + 1);
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar4 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar4 != '\0') {
    lVar7 = FWeakObjectPtr::Get(&local_res10);
    lVar8 = 0;
    iVar6 = *(int *)(lVar7 + 0xc);
    if (iVar6 < (int)DAT_1469e91c4) {
      uVar10 = iVar6 >> 0x1f & 0xffff;
      uVar5 = iVar6 + uVar10;
      lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
              (longlong)(int)((uVar5 & 0xffff) - uVar10) * 0x18;
    }
    if ((((*(uint *)(lVar8 + 8) & 0x30000000) == 0) &&
        (lVar8 = FUN_1416f8720(*(undefined4 *)(param_1 + 2)), lVar8 != 0)) &&
       (lVar8 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0x14)), lVar8 != 0)) {
      local_48 = 0;
      local_40 = 0;
      uVar9 = FUN_1404b03b0();
      FText::FText(local_38,uVar9);
      uVar3 = local_40;
      local_18 = 0;
      lVar8 = (longlong)(int)local_40;
      local_10 = 1;
      local_20 = 1;
      iVar6 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar6);
      if (local_40._4_4_ < iVar6) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                  (&local_48,uVar3 & 0xffffffff);
      }
      *(undefined8 *)(local_48 + lVar8 * 8) = DAT_146872758;
      lVar8 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0x14));
      (**(code **)(*(longlong *)(lVar8 + 0x308) + 0x20))((longlong *)(lVar8 + 0x308),&local_48,0);
      FUN_140f4b910(*param_1);
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_30 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar2 = (int *)((longlong)local_30 + 0xc);
          iVar6 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*local_30 + 8))(local_30,1);
          }
        }
      }
      if (local_48 != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140f22690 FUN_140f22690 body=224 status=ok
// SIG undefined FUN_140f22690(void)

void FUN_140f22690(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  cVar3 = FUN_142d52a00(*param_1 + 0x640);
  if (cVar3 != '\0') {
    lVar1 = *param_1;
    uVar4 = FUN_142d52a20(lVar1 + 0x640);
    uVar4 = FArchive::operator<<(uVar4);
    uVar4 = FUN_142d621c0(uVar4);
    FUN_140483870(uVar4,lVar1);
    lVar1 = *param_1;
    uVar4 = FUN_142d52a20(lVar1 + 0x640);
    uVar4 = FArchive::operator<<(uVar4);
    uVar4 = FUN_142d62330(uVar4);
    FUN_140483870(uVar4,lVar1);
  }
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    lVar5 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_1407665e0(lVar1 + 0x2660,*param_1);
    }
    FUN_1407665e0(param_1[1] + 0x1308,*param_1);
  }
  return;
}


