// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14128c180 FUN_14128c180 body=122 status=ok
// SIG undefined FUN_14128c180(void)

bool FUN_14128c180(undefined8 *param_1,longlong param_2)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  bool bVar6;
  longlong local_18 [2];
  
  bVar1 = false;
  if ((param_2 == 0) || (*(longlong *)(param_2 + 0x118) == 0)) {
    bVar6 = false;
  }
  else {
    puVar3 = (undefined8 *)
             UObjectBaseUtility::GetFullGroupName(*(longlong *)(param_2 + 0x118),local_18,0);
    puVar4 = &DAT_143f3eda8;
    if (*(int *)(param_1 + 1) == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = (undefined2 *)*param_1;
    }
    if (*(int *)(puVar3 + 1) != 0) {
      puVar4 = (undefined2 *)*puVar3;
    }
    iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,puVar5);
    bVar6 = iVar2 == 0;
    bVar1 = true;
  }
  if ((bVar1) && (local_18[0] != 0)) {
    FMemory::Free();
  }
  return bVar6;
}



// FUNCTION 14128c200 FUN_14128c200 body=1179 status=ok
// SIG undefined FUN_14128c200(void)

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_14128c200(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *local_res18;
  undefined8 local_res20;
  undefined8 local_1b8 [4];
  longlong local_198 [3];
  undefined1 local_180 [32];
  longlong local_160 [3];
  undefined1 local_148 [32];
  longlong local_128;
  longlong local_118;
  longlong local_108;
  longlong local_f8;
  undefined **local_d8 [18];
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 local_38;
  
  uVar9 = 0;
  local_160[1] = 0;
  local_160[0] = 0;
  local_res18 = (longlong *)0x0;
  cVar6 = FUN_14309e490(param_3 + 8,local_160 + 1,local_160,&local_res18);
  plVar1 = local_res18;
  if (cVar6 != '\0') {
    if (local_res18 == (longlong *)0x0) {
      if (local_160[0] != 0) {
        return 1;
      }
    }
    else {
      _guard_xfg_dispatch_icall_nop(local_148,0,0x68);
      uVar7 = APlayArea::GetPrivateStaticClass();
      lVar8 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar7);
      if (lVar8 != 0) {
        FUN_142ff3000(lVar8,local_148);
        local_198[0] = 0;
        local_198[1] = 0;
        cVar6 = FUN_142ff5c90(local_148,local_198,0);
        if (cVar6 != '\0') {
          if (DAT_146b48018 == '\0') {
            FUN_14309f510(&DAT_146b48010);
          }
          lVar5 = DAT_146b48010;
          cVar6 = FUN_1407ce070(param_3);
          if (cVar6 != '\0') {
            plVar1 = (longlong *)(param_3 + 0xa8);
            local_res20 = 0;
            if ((**(longlong **)(lVar5 + 0x28) != 0) &&
               (cVar6 = FUN_1407ce010(*(longlong **)(lVar5 + 0x28) + 1), cVar6 != '\0')) {
              plVar10 = (longlong *)*plVar1;
              plVar2 = plVar10 + (longlong)*(int *)(param_3 + 0xb0) * 5;
              if (plVar10 != plVar2) {
                do {
                  if ((*(longlong *)*plVar10 == **(longlong **)(lVar5 + 0x28)) &&
                     (*(longlong *)(((longlong *)*plVar10)[1] + 0x28) ==
                      *(longlong *)((*(longlong **)(lVar5 + 0x28))[1] + 0x28))) goto LAB_14128c44b;
                  plVar10 = plVar10 + 5;
                } while (plVar10 != plVar2);
              }
              local_198[2] = *(undefined8 *)(lVar5 + 0x28);
              FUN_14217e740(local_180);
              FUN_142194380(local_180,0x18,1,0,0);
              local_res20 = 0;
              FArchive::FArchive(local_d8);
              local_48 = 0;
              local_d8[0] = &PTR_FUN_143f4a100;
              local_40 = local_180;
              local_38 = 0;
              FArchive::SetIsSaving(local_d8,1);
              FArchive::SetIsPersistent(local_d8,1);
              FUN_14158ce90(local_d8,local_198);
              FArchive::~FArchive(local_d8);
              iVar4 = *(int *)(param_3 + 0xb0);
              *(int *)(param_3 + 0xb0) = iVar4 + 1;
              if (*(int *)(param_3 + 0xb4) < iVar4 + 1) {
                TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar1,iVar4);
              }
              puVar3 = (undefined8 *)(*plVar1 + (longlong)iVar4 * 0x28);
              *puVar3 = local_198[2];
              FUN_14217e5b0(puVar3 + 1,local_180);
              FUN_14217f430(local_180);
            }
LAB_14128c44b:
            FUN_1421957f0(param_3);
          }
          local_res20 = *(undefined8 *)(lVar8 + 0x218);
          FUN_14217e740(local_1b8);
          FUN_142194380(local_1b8,0x28,0,0,0);
          local_1b8[0] = local_res20;
          FUN_1421923f0(local_198 + 2,DAT_146877ef8,local_1b8);
          FUN_140bfa350(param_3,lVar5 + 0x30,local_198 + 2);
          FUN_14217f430(local_198 + 2);
          FUN_14217f430(local_1b8);
          if (*(longlong *)(lVar8 + 0x210) != 0) {
            uVar9 = *(undefined8 *)(*(longlong *)(lVar8 + 0x210) + 0xb8);
          }
          local_res20 = uVar9;
          FUN_14217e740(local_1b8);
          FUN_142194380(local_1b8,0x28,0,0,0);
          local_1b8[0] = local_res20;
          FUN_1421923f0(local_198 + 2,DAT_146877ef8,local_1b8);
          FUN_140bfa350(param_3,lVar5 + 0x38,local_198 + 2);
          FUN_14217f430(local_198 + 2);
          FUN_14217f430(local_1b8);
          local_res20 = *(undefined8 *)(lVar8 + 0x208);
          FUN_14217e740(local_1b8);
          FUN_142194380(local_1b8,0x28,0,0,0);
          local_1b8[0] = local_res20;
          FUN_1421923f0(local_198 + 2,DAT_146877ef8,local_1b8);
          FUN_140bfa350(param_3,lVar5 + 0x40,local_198 + 2);
          FUN_14217f430(local_198 + 2);
          FUN_14217f430(local_1b8);
          if (local_198[0] != 0) {
            FMemory::Free();
          }
          if (local_f8 != 0) {
            FMemory::Free();
          }
          if (local_108 != 0) {
            FMemory::Free();
          }
          if (local_118 != 0) {
            FMemory::Free();
          }
          if (local_128 == 0) {
            return 1;
          }
          FMemory::Free();
          return 1;
        }
        if (local_198[0] != 0) {
          FMemory::Free();
        }
      }
      if (local_f8 != 0) {
        FMemory::Free();
      }
      if (local_108 != 0) {
        FMemory::Free();
      }
      if (local_118 != 0) {
        FMemory::Free();
      }
      if (local_128 != 0) {
        FMemory::Free();
      }
    }
  }
  return 0;
}



// FUNCTION 14128c6a0 FUN_14128c6a0 body=459 status=ok
// SIG undefined FUN_14128c6a0(void)

void FUN_14128c6a0(undefined8 *param_1,undefined8 *param_2)

{
  code **ppcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 uVar12;
  code *pcVar13;
  code *local_168;
  undefined4 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 local_128 [80];
  undefined1 local_d8 [80];
  undefined1 local_88 [128];
  
  *(undefined1 *)(param_2 + 10) = 0;
  *(undefined1 *)(param_2 + 4) = 1;
  uStack_160 = 0;
  *param_2 = *(undefined8 *)*param_1;
  param_2[3] = *(undefined8 *)(param_1[1] + 0x960);
  *(undefined4 *)(param_2 + 7) = *(undefined4 *)param_1[2];
  local_168 = FUN_1412a6a20;
  puVar2 = (undefined8 *)param_1[3];
  uVar12 = *puVar2;
  uVar4 = puVar2[1];
  uVar5 = puVar2[2];
  uVar6 = puVar2[3];
  uVar7 = puVar2[4];
  uVar8 = puVar2[5];
  lVar9 = FUN_141289d90(local_128,param_1[4]);
  uVar3 = param_1[1];
  lVar10 = FUN_141289d90(local_d8,lVar9);
  plVar11 = (longlong *)FMemory::Realloc(0,0xb0,0);
  if (plVar11 != (longlong *)0x0) {
    local_158 = uVar12;
    uStack_150 = uVar4;
    local_148 = uVar5;
    uStack_140 = uVar6;
    local_138 = uVar7;
    uStack_130 = uVar8;
    uVar12 = FUN_141289d90(local_88,lVar10);
    FUN_141289a30(plVar11,uVar3,&local_168,&local_158,uVar12);
  }
  if (*(longlong *)(lVar10 + 8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(lVar9 + 8) != 0) {
    FMemory::Free();
  }
  ppcVar1 = (code **)(param_2 + 0x15);
  if (&local_168 != ppcVar1) {
    if (plVar11 == (longlong *)0x0) {
      if ((*(int *)(param_2 + 0x16) != 0) && (pcVar13 = *ppcVar1, pcVar13 != (code *)0x0)) {
        (**(code **)(*(longlong *)pcVar13 + 0x28))(pcVar13,0);
        if (*ppcVar1 != (code *)0x0) {
          pcVar13 = (code *)FMemory::Realloc(*ppcVar1,0,0);
          *ppcVar1 = pcVar13;
        }
        *(undefined4 *)(param_2 + 0x16) = 0;
      }
    }
    else {
      (**(code **)(*plVar11 + 0x30))(plVar11,ppcVar1);
    }
  }
  if (plVar11 != (longlong *)0x0) {
    (**(code **)(*plVar11 + 0x28))(plVar11,0);
    lVar9 = FMemory::Realloc(plVar11,0,0);
    if (lVar9 != 0) {
      FMemory::Free(lVar9);
    }
  }
  return;
}



// FUNCTION 14128c870 FUN_14128c870 body=325 status=ok
// SIG undefined FUN_14128c870(void)

longlong FUN_14128c870(undefined8 *param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined4 local_res10;
  undefined4 local_res14;
  undefined1 local_res18 [16];
  
  plVar2 = (longlong *)*param_1;
  uVar3 = FUN_142e43690();
  lVar4 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar3);
  if (lVar4 == 0) {
    lVar4 = FUN_141289710(*param_1);
    FUN_142350b20(lVar4,0);
    FUN_14234b150(lVar4);
    FWeakObjectPtr::operator=(&local_res8,*param_1);
    FWeakObjectPtr::operator=(&local_res10,param_1[1]);
    plVar2 = (longlong *)(lVar4 + 0x2f0);
    plVar5 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = (longlong)&PTR_GetPoolName_14475bb68;
      *(undefined4 *)(plVar5 + 1) = local_res8;
      *(undefined4 *)((longlong)plVar5 + 0xc) = local_resc;
      *(undefined4 *)(plVar5 + 2) = local_res10;
      *(undefined4 *)((longlong)plVar5 + 0x14) = local_res14;
      lVar6 = FDelegateHandle::GenerateNewID();
      plVar5[4] = lVar6;
      *plVar5 = (longlong)&PTR_GetPoolName_14475bbb0;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar2,1);
      (**(code **)(*plVar5 + 0x20))(plVar5,local_res18);
      iVar1 = *(int *)(lVar4 + 0x2f8);
      *(int *)(lVar4 + 0x2f8) = iVar1 + 1;
      if (*(int *)(lVar4 + 0x2fc) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar2,iVar1);
      }
      puVar7 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar2);
      *puVar7 = plVar5;
      *(undefined4 *)(puVar7 + 1) = 3;
    }
  }
  return lVar4;
}



// FUNCTION 14128c9c0 FUN_14128c9c0 body=740 status=ok
// SIG undefined FUN_14128c9c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14128c9c0(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined8 local_150;
  undefined1 local_148;
  undefined8 local_140;
  undefined1 local_138;
  undefined8 local_128;
  longlong local_120;
  longlong local_118 [24];
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  uVar10 = 0;
  local_58 = (longlong *)0x0;
  local_50 = 0;
  (**(code **)(**(longlong **)*param_1 + 0x908))(*(longlong **)*param_1,param_2,local_118);
  lVar4 = FUN_143077380(*(undefined8 *)*param_1,(int)param_2 == 1,0);
  plVar9 = local_118;
  if (local_58 != (longlong *)0x0) {
    plVar9 = local_58;
  }
  uVar8 = (longlong)(int)local_50 & 0x1fffffffffffffff;
  if (plVar9 + (int)local_50 < plVar9) {
    uVar8 = uVar10;
  }
  local_120 = lVar4;
  if (uVar8 != 0) {
    do {
      lVar1 = *plVar9;
      iVar7 = *(int *)param_1[2];
      if ((iVar7 < 0) || (*(int *)(param_1[1] + 0x280) <= iVar7)) {
        uVar2 = param_1[1];
        FUN_1417846f0(uVar2,
                      L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                     );
        local_128 = 0;
        uVar5 = FUN_142a232e0();
        local_138 = 0;
        local_140 = 0;
        local_148 = 0;
        local_150 = 0;
        local_158 = 0;
        lVar6 = FUN_1417985e0(uVar5,uVar2,local_128,0);
        *(byte *)(lVar6 + 0xb9) = *(byte *)(lVar6 + 0xb9) & 0xfb;
        lVar4 = *(longlong *)(param_1[1] + 0x120);
        if (lVar4 == 0) {
          lVar4 = FUN_1423407b0();
        }
        FUN_14234b270(lVar6,lVar4);
        lVar4 = param_1[1];
        iVar7 = *(int *)(lVar4 + 0x280);
        *(int *)(lVar4 + 0x280) = iVar7 + 1;
        if (*(int *)(lVar4 + 0x284) < iVar7 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar4 + 0x278,iVar7);
        }
        *(longlong *)(*(longlong *)(lVar4 + 0x278) + (longlong)iVar7 * 8) = lVar6;
        iVar7 = *(int *)param_1[2];
        lVar4 = local_120;
      }
      plVar3 = *(longlong **)(*(longlong *)(param_1[1] + 0x278) + (longlong)iVar7 * 8);
      (**(code **)(*plVar3 + 0x638))(plVar3,0);
      (**(code **)(*plVar3 + 0x928))(plVar3,*(undefined8 *)param_1[3]);
      *(byte *)((longlong)plVar3 + 0x2f1) = *(byte *)((longlong)plVar3 + 0x2f1) & 0xef;
      *(uint *)(plVar3 + 0x73) =
           *(uint *)(plVar3 + 0x73) ^ (*(uint *)(lVar1 + 0x398) ^ *(uint *)(plVar3 + 0x73)) & 1;
      FUN_142398e60(plVar3,*(undefined4 *)(lVar1 + 0x6b8),0);
      FUN_1423979a0(plVar3,*(byte *)(lVar1 + 0x2f0) >> 5 & 1);
      FUN_142397970(plVar3,*(byte *)(lVar1 + 0x2f0) >> 6 & 1);
      FUN_142382f60(plVar3,lVar1,&DAT_146af29ec);
      if (lVar4 != 0) {
        (**(code **)(*plVar3 + 0x568))(plVar3,0,lVar4);
      }
      FUN_142397540(plVar3,0);
      plVar9 = plVar9 + 1;
      uVar10 = uVar10 + 1;
      *(int *)param_1[2] = *(int *)param_1[2] + 1;
    } while (uVar10 != uVar8);
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}



// FUNCTION 14128ccb0 FUN_14128ccb0 body=341 status=ok
// SIG undefined FUN_14128ccb0(void)

undefined1 FUN_14128ccb0(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 uVar10;
  longlong *plVar11;
  bool bVar12;
  uint uStackX_c;
  undefined1 local_res18 [16];
  
  plVar11 = (longlong *)0x0;
  if ((*(longlong *)(*param_1 + 0x220) == 0) ||
     (lVar2 = *(longlong *)(*param_1 + 0x228), lVar2 == 0)) {
LAB_14128cdb6:
    plVar8 = (longlong *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    piVar1 = (int *)(lVar2 + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (iVar4 < 1) goto LAB_14128cdb6;
    plVar9 = plVar11;
    if (*param_2 != 0) {
      plVar5 = (longlong *)FUN_142e20fc0();
      for (plVar8 = (longlong *)*param_2;
          (plVar9 = plVar11, plVar8 != (longlong *)0x0 &&
          (plVar9 = (longlong *)*param_2, plVar8 != plVar5)); plVar8 = (longlong *)plVar8[6]) {
      }
    }
    lVar2 = *param_1;
    plVar5 = *(longlong **)(lVar2 + 0x228);
    plVar8 = plVar5;
    plVar6 = plVar11;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      iVar4 = (int)plVar5[1];
      bVar12 = iVar4 == 0;
      if (bVar12) {
        *(int *)(plVar5 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
      while (plVar8 = plVar11, !bVar12) {
        LOCK();
        bVar12 = iVar4 == (int)plVar5[1];
        if (bVar12) {
          *(int *)(plVar5 + 1) = iVar4 + 1;
        }
        UNLOCK();
        if (bVar12) {
          plVar8 = plVar5;
          plVar6 = (longlong *)0x0;
          if (plVar5 != (longlong *)0x0) {
            plVar6 = *(longlong **)(lVar2 + 0x220);
          }
          break;
        }
        LOCK();
        iVar4 = (int)plVar5[1];
        bVar12 = iVar4 == 0;
        if (bVar12) {
          *(int *)(plVar5 + 1) = 0;
          iVar4 = 0;
        }
        UNLOCK();
      }
    }
    plVar6 = (longlong *)FUN_142c6fde0(plVar6,local_res18);
    plVar5 = plVar11;
    if (*plVar6 != 0) {
      plVar7 = (longlong *)FUN_142e20fc0();
      for (plVar3 = (longlong *)*plVar6;
          (plVar5 = plVar11, plVar3 != (longlong *)0x0 &&
          (plVar5 = (longlong *)*plVar6, plVar3 != plVar7)); plVar3 = (longlong *)plVar3[6]) {
      }
    }
    plVar11 = (longlong *)0x1;
    if (plVar9 != plVar5) {
      uVar10 = 1;
      goto LAB_14128cdbe;
    }
  }
  uVar10 = 0;
LAB_14128cdbe:
  if ((plVar11 != (longlong *)0x0) && (plVar8 != (longlong *)0x0)) {
    LOCK();
    plVar11 = plVar8 + 1;
    lVar2 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  return uVar10;
}



// FUNCTION 14128ce10 FUN_14128ce10 body=250 status=ok
// SIG undefined FUN_14128ce10(void)

void FUN_14128ce10(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 local_res18 [2];
  
  lVar3 = APlayArea::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
      != lVar3 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((((bVar1) && (*(longlong *)(param_3 + 0x208) != 0)) && (*(longlong *)(param_3 + 0x218) != 0))
     && (*(longlong *)(param_3 + 0x210) != 0)) {
    local_res18[0] = *(undefined8 *)(*(longlong *)(param_3 + 0x210) + 0x18);
    cVar2 = FUN_1412892a0(param_2,L"Weapon",local_res18);
    if (cVar2 != '\0') {
      puVar4 = (undefined8 *)FName::FName(local_res18,L"Weapon",1);
      FUN_143010a20(param_2,*puVar4);
      FUN_143010a20(param_2,*(undefined8 *)(*(longlong *)(param_3 + 0x210) + 0x18));
      FUN_143010a20(param_2,*(undefined8 *)(*(longlong *)(param_3 + 0x208) + 0x18));
      FUN_143010a20(param_2,*(undefined8 *)(*(longlong *)(param_3 + 0x218) + 0x18));
    }
  }
  return;
}



// FUNCTION 14128cf10 FUN_14128cf10 body=188 status=ok
// SIG undefined FUN_14128cf10(void)

void FUN_14128cf10(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  
  if (0 < *(int *)(param_2 + 0x188)) {
    plVar1 = *(longlong **)(param_2 + 0x180);
    if (param_1[2] == 0) {
      iVar2 = 0;
      plVar3 = plVar1 + (longlong)*(int *)(param_2 + 0x188) * 4;
      for (; plVar1 != plVar3; plVar1 = plVar1 + 4) {
        if (*plVar1 != 0) {
          iVar2 = iVar2 + (int)plVar1[3];
        }
      }
      goto LAB_14128cf61;
    }
    plVar3 = plVar1 + (longlong)*(int *)(param_2 + 0x188) * 4;
    for (; plVar1 != plVar3; plVar1 = plVar1 + 4) {
      if (*plVar1 == param_1[2]) {
        iVar2 = (int)plVar1[3];
        goto LAB_14128cf61;
      }
    }
  }
  iVar2 = 0;
LAB_14128cf61:
  *(int *)param_1[1] = *(int *)param_1[1] + iVar2;
  param_1 = (longlong *)*param_1;
  iVar2 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar2 * 8) = *(undefined8 *)(param_2 + 0x78);
  return;
}



// FUNCTION 14128cfd0 FUN_14128cfd0 body=158 status=ok
// SIG undefined FUN_14128cfd0(void)

longlong FUN_14128cfd0(longlong *param_1,byte param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  plVar2 = (longlong *)*param_1;
  iVar1 = (int)plVar2[1];
  if (iVar1 <= (int)(uint)param_2) {
    iVar3 = param_2 + 1;
    if (iVar1 < iVar3) {
      *(int *)(plVar2 + 1) = iVar3;
      if (*(int *)((longlong)plVar2 + 0xc) < iVar3) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeGrow(plVar2);
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)iVar1 * 0x20 + *plVar2),0,(longlong)(iVar3 - iVar1) << 5);
    }
    else if (iVar3 < iVar1) {
      TArray<FMeltOperationData,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                (plVar2,iVar3,iVar1 - iVar3,1);
    }
  }
  return (ulonglong)(uint)param_2 * 0x20 + *(longlong *)*param_1;
}



// FUNCTION 14128d260 FUN_14128d260 body=72 status=ok
// SIG undefined FUN_14128d260(void)

undefined8 * FUN_14128d260(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[0xb] != 0) {
    FMemory::Free();
  }
  *param_1 = IDelegateInstance::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 14128d2b0 FUN_14128d2b0 body=100 status=ok
// SIG undefined FUN_14128d2b0(void)

undefined8 * FUN_14128d2b0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144758218;
  if (param_1[0x1c] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x1c] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe8);
  }
  return param_1;
}



// FUNCTION 14128d320 FUN_14128d320 body=52 status=ok
// SIG undefined FUN_14128d320(void)

undefined8 FUN_14128d320(undefined8 param_1,ulonglong param_2)

{
  FUN_1404571d0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x498);
  }
  return param_1;
}



// FUNCTION 14128d360 FUN_14128d360 body=90 status=ok
// SIG undefined FUN_14128d360(void)

longlong FUN_14128d360(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x9a0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x990) != 0) {
    FMemory::Free();
  }
  FUN_140e14500(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x9c0);
  }
  return param_1;
}



// FUNCTION 14128d3c0 FUN_14128d3c0 body=66 status=ok
// SIG undefined FUN_14128d3c0(void)

longlong FUN_14128d3c0(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x458) = &PTR_FUN_143fcb7e0;
  FUN_1404571d0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x468);
  }
  return param_1;
}



// FUNCTION 14128d410 FUN_14128d410 body=43 status=ok
// SIG undefined FUN_14128d410(void)

undefined8 * FUN_14128d410(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1447540b8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14128d440 FUN_14128d440 body=43 status=ok
// SIG undefined FUN_14128d440(void)

undefined8 * FUN_14128d440(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1447540b8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 14128d470 FUN_14128d470 body=43 status=ok
// SIG undefined FUN_14128d470(void)

undefined8 * FUN_14128d470(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1447540b8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 14128d4a0 FUN_14128d4a0 body=43 status=ok
// SIG undefined FUN_14128d4a0(void)

undefined8 * FUN_14128d4a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1447540b8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14128d4d0 FUN_14128d4d0 body=43 status=ok
// SIG undefined FUN_14128d4d0(void)

undefined8 * FUN_14128d4d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1447540b8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 14128d500 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FPostProcessMotionBlurPS<1,1>::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140458c20();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1e0);
  }
  return param_1;
}



// FUNCTION 14128d540 FUN_14128d540 body=229 status=ok
// SIG undefined FUN_14128d540(void)

longlong FUN_14128d540(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
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
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 14128d630 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FGlobalShader::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_14128b400();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 14128d670 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FArrayReader::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  FUN_14128b4f0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 14128d6c0 FUN_14128d6c0 body=165 status=ok
// SIG undefined FUN_14128d6c0(void)

longlong FUN_14128d6c0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  FRichCurve::~FRichCurve(param_1 + 0x138);
  FRichCurve::~FRichCurve(param_1 + 0xc0);
  FRichCurve::~FRichCurve(param_1 + 0x48);
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
    FMemory::operator_delete(param_1,0x1b0);
  }
  return param_1;
}



// FUNCTION 14128d770 `scalar_deleting_destructor' body=90 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong ARebRubbleProjectile::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x268) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 600) != 0) {
    FMemory::Free();
  }
  FUN_14128b250(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x288);
  }
  return param_1;
}



// FUNCTION 14128d7d0 FUN_14128d7d0 body=79 status=ok
// SIG undefined FUN_14128d7d0(void)

longlong FUN_14128d7d0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (param_1 + 0x38);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 14128d820 `scalar_deleting_destructor' body=70 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UParticleModuleSpawnPerUnit::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 14128d870 FUN_14128d870 body=99 status=ok
// SIG undefined FUN_14128d870(void)

longlong FUN_14128d870(longlong param_1,ulonglong param_2)

{
  thunk_FUN_142478640(param_1 + 0x1b8);
  if (*(longlong *)(param_1 + 400) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x178) = &PTR_FUN_143fe0658;
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x208);
  }
  return param_1;
}



// FUNCTION 14128d8e0 FUN_14128d8e0 body=201 status=ok
// SIG undefined FUN_14128d8e0(void)

longlong FUN_14128d8e0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x3d0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x3c0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x3b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x3a0) != 0) {
    FMemory::Free();
  }
  TArray<FPaperTerrainMaterialRule,FDefaultAllocator>::
  ~TArray<FPaperTerrainMaterialRule,FDefaultAllocator>(param_1 + 0x390);
  *(undefined ***)(param_1 + 0x388) = &PTR_FUN_143fe0658;
  if (*(longlong *)(param_1 + 0x370) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x360) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x350) != 0) {
    FMemory::Free();
  }
  FUN_140aee3c0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x450);
  }
  return param_1;
}



// FUNCTION 14128d9b0 FUN_14128d9b0 body=90 status=ok
// SIG undefined FUN_14128d9b0(void)

longlong FUN_14128d9b0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x278) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x248) != 0) {
    FMemory::Free();
  }
  FUN_14128b780(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x290);
  }
  return param_1;
}



// FUNCTION 14128da10 FUN_14128da10 body=73 status=ok
// SIG undefined FUN_14128da10(void)

longlong FUN_14128da10(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    FMemory::Free();
  }
  FUN_14128b820(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x208);
  }
  return param_1;
}



// FUNCTION 14128da60 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UUGGameInstance::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_14128b610();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x968);
  }
  return param_1;
}



// FUNCTION 14128daa0 FUN_14128daa0 body=99 status=ok
// SIG undefined FUN_14128daa0(void)

longlong FUN_14128daa0(longlong param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x228);
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
  FUN_14099b5e0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x230);
  }
  return param_1;
}



// FUNCTION 14128db10 FUN_14128db10 body=52 status=ok
// SIG undefined FUN_14128db10(void)

undefined8 FUN_14128db10(undefined8 param_1,ulonglong param_2)

{
  FUN_14128b610();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x980);
  }
  return param_1;
}



// FUNCTION 14128db50 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UUGOptionsScreenUW::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_14128b8a0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x3e0);
  }
  return param_1;
}



// FUNCTION 14128db90 FUN_14128db90 body=52 status=ok
// SIG undefined FUN_14128db90(void)

undefined8 FUN_14128db90(undefined8 param_1,ulonglong param_2)

{
  FUN_14128b8a0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x3f0);
  }
  return param_1;
}



// FUNCTION 14128dbd0 FUN_14128dbd0 body=230 status=ok
// SIG undefined FUN_14128dbd0(void)

longlong FUN_14128dbd0(longlong param_1,ulonglong param_2)

{
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x2f0);
  if (*(longlong *)(param_1 + 0x2e0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2d0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2c0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2a0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x290) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1f0) != 0) {
    FMemory::Free();
  }
  thunk_FUN_142478640(param_1 + 0x1a0);
  if (*(longlong *)(param_1 + 400) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x178) = &PTR_FUN_143fe0658;
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x358);
  }
  return param_1;
}



// FUNCTION 14128dcc0 FUN_14128dcc0 body=52 status=ok
// SIG undefined FUN_14128dcc0(void)

undefined8 FUN_14128dcc0(undefined8 param_1,ulonglong param_2)

{
  FUN_14128b8a0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x360);
  }
  return param_1;
}



// FUNCTION 14128dd00 FUN_14128dd00 body=149 status=ok
// SIG undefined FUN_14128dd00(void)

longlong FUN_14128dd00(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x248) != 0) {
    FMemory::Free();
  }
  thunk_FUN_142478640(param_1 + 0x1c8);
  thunk_FUN_142478640(param_1 + 0x1bc);
  thunk_FUN_142478640(param_1 + 0x19c);
  thunk_FUN_142478640(param_1 + 400);
  *(undefined ***)(param_1 + 0x180) = &PTR_FUN_143fce298;
  *(undefined ***)(param_1 + 0x178) = &PTR_FUN_143fe0658;
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x268);
  }
  return param_1;
}



// FUNCTION 14128dda0 FUN_14128dda0 body=270 status=ok
// SIG undefined FUN_14128dda0(void)

longlong FUN_14128dda0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int iVar2;
  
  if (*(longlong *)(param_1 + 0x1f8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1e8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    FMemory::Free();
  }
  FUN_1408708d0(param_1 + 0x180);
  iVar2 = *(int *)(param_1 + 0x178);
  plVar1 = *(longlong **)(param_1 + 0x170);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 0xc;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x170);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  FUN_14128b170(param_1 + 0x160);
  TArray<FREDAsyncLoadDF_LoadData,TSizedDefaultAllocator<32>_>::
  ~TArray<FREDAsyncLoadDF_LoadData,TSizedDefaultAllocator<32>_>(param_1 + 0x150);
  FUN_14128b100(param_1 + 0xf8);
  TArray<UPollWindowWidget::PollInfo,FDefaultAllocator>::
  ~TArray<UPollWindowWidget::PollInfo,FDefaultAllocator>(param_1 + 0xd8);
  if (*(longlong *)(param_1 + 200) != 0) {
    FMemory::Free();
  }
  FUN_14128b400(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x220);
  }
  return param_1;
}



// FUNCTION 14128deb0 FUN_14128deb0 body=440 status=ok
// SIG undefined FUN_14128deb0(void)

void FUN_14128deb0(longlong param_1)

{
  wchar_t *pwVar1;
  char cVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  undefined8 local_res8;
  undefined1 *local_18;
  undefined8 uStack_10;
  
  FUN_1430696b0();
  if ((*(longlong *)(param_1 + 0x968) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x968) + 0x142) != '\0')) {
    lVar3 = *(longlong *)(param_1 + 0x9b0);
    if (lVar3 == 0) {
      lVar3 = FUN_14126ca30(param_1);
      *(longlong *)(param_1 + 0x9b0) = lVar3;
    }
    pwVar7 = (wchar_t *)0x0;
    pwVar6 = pwVar7;
    if (lVar3 != 0) {
      pwVar6 = *(wchar_t **)(lVar3 + 0x690);
    }
    if (pwVar6 != (wchar_t *)0x0) {
      uStack_10 = (ulonglong)uStack_10._4_4_ << 0x20;
      local_18 = &LAB_1412ac2c0;
      pwVar4 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::StartIdleEffects",L"::");
      pwVar5 = pwVar7;
      while (pwVar1 = pwVar4, pwVar1 != (wchar_t *)0x0) {
        pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
        pwVar5 = pwVar1;
      }
      FName::FName(&local_res8,pwVar5 + 2,1);
      FUN_1407260e0(pwVar6 + 200,param_1,&local_18,local_res8);
      uStack_10 = uStack_10 & 0xffffffff00000000;
      local_18 = &LAB_1412ac790;
      pwVar5 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::StopIdleEffects",L"::");
      while (pwVar4 = pwVar5, pwVar4 != (wchar_t *)0x0) {
        pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
        pwVar7 = pwVar4;
      }
      FName::FName(&local_res8,pwVar7 + 2,1);
      FUN_1407260e0(pwVar6 + 0xd0,param_1,&local_18,local_res8);
      cVar2 = FUN_14122ed60(*(undefined8 *)(param_1 + 0x9b0),0);
      if ((cVar2 != '\0') && (*(longlong *)(param_1 + 0x968) != 0)) {
        FUN_143083d20(param_1,*(undefined1 *)(*(longlong *)(param_1 + 0x968) + 0x143),0,0);
      }
    }
  }
  return;
}



// FUNCTION 14128e070 FUN_14128e070 body=674 status=ok
// SIG undefined FUN_14128e070(void)

void FUN_14128e070(longlong *param_1)

{
  longlong *plVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  undefined8 local_res8;
  code *local_28;
  ulonglong uStack_20;
  
  bVar4 = *(byte *)(param_1 + 0x60);
  if ((bVar4 & 4) != 0) {
    return;
  }
  if ((bVar4 & 2) == 0) {
    FUN_1412a2080();
    bVar4 = *(byte *)(param_1 + 0x60);
  }
  *(byte *)(param_1 + 0x60) = bVar4 | 4;
  (**(code **)(*param_1 + 0x260))(param_1);
  if (*(char *)((longlong)param_1 + 0x31c) != '\0') {
    (**(code **)(*param_1 + 0x358))(param_1,1);
  }
  iVar6 = FUN_14233f450(param_1);
  if (iVar6 == 3) {
    cVar5 = FUN_142d52a00(param_1 + 0x45);
    if (((cVar5 != '\0') && (param_1[0x30] != 0)) && (*(longlong *)(param_1[0x30] + 0x30) != 0)) {
      uVar7 = FUN_142d52a20(param_1 + 0x45);
      uVar7 = FArchive::operator<<(uVar7);
      lVar8 = FDuplicateDataWriter::GetSerializeContext(uVar7);
      if (lVar8 != 0) {
        lVar8 = FUN_142d62010(lVar8,*(undefined8 *)(param_1[0x30] + 0x30));
        uStack_20 = uStack_20 & 0xffffffff00000000;
        local_28 = FUN_1412a9780;
        pwVar9 = _guard_xfg_dispatch_icall_nop(L"&UWeaponShieldComponent::ResourceNowFull",L"::");
        pwVar3 = (wchar_t *)0x0;
        while (pwVar2 = pwVar9, pwVar2 != (wchar_t *)0x0) {
          pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
          pwVar3 = pwVar2;
        }
        FName::FName(&local_res8,pwVar3 + 2,1);
        FUN_1407260e0(lVar8 + 0x28,param_1,&local_28,local_res8);
        uStack_20 = uStack_20 & 0xffffffff00000000;
        local_28 = FUN_1412a97e0;
        pwVar9 = _guard_xfg_dispatch_icall_nop
                           (L"&UWeaponShieldComponent::ResourceNowRegenerating",L"::");
        pwVar3 = (wchar_t *)0x0;
        while (pwVar2 = pwVar9, pwVar2 != (wchar_t *)0x0) {
          pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
          pwVar3 = pwVar2;
        }
        FName::FName(&local_res8,pwVar3 + 2,1);
        FUN_1407260e0(lVar8 + 0x48,param_1,&local_28,local_res8);
      }
    }
    cVar5 = FUN_142d52a00(param_1 + 0x45);
    if (cVar5 != '\0') {
      uVar7 = FUN_142d52a20(param_1 + 0x45);
      uVar7 = FArchive::operator<<(uVar7);
      cVar5 = FUN_142d639f0(uVar7,0);
      *(bool *)((longlong)param_1 + 0x301) = cVar5 != '\0';
    }
    if ((param_1[0x23] != 0) &&
       (plVar1 = *(longlong **)(param_1[0x23] + 0x150), plVar1 != (longlong *)0x0)) {
      uVar7 = AGFreezeCharacterCue::GetPrivateStaticClass();
      lVar8 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar7);
      if (lVar8 != 0) {
        FUN_140a96e80(lVar8,param_1);
      }
    }
  }
  if ((*(char *)((longlong)param_1 + 0x301) != '\x01') &&
     (FUN_1414edd00(param_1), (*(byte *)(param_1 + 0x60) & 1) != 0)) {
    FUN_1412a82b0(param_1);
  }
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x52,0);
  return;
}



// FUNCTION 14128e320 FUN_14128e320 body=75 status=ok
// SIG undefined FUN_14128e320(void)

void FUN_14128e320(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_141296e00(param_1,param_3);
  if (((param_2 != 0) && (lVar1 != 0)) && (*(longlong *)(lVar1 + 0x58) != 0)) {
    FUN_141460920(param_2);
  }
  if (*param_3 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14128e370 FUN_14128e370 body=1955 status=ok
// SIG undefined FUN_14128e370(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_14128e370(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  int iVar4;
  float *pfVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  bool bVar10;
  float fVar11;
  int iVar12;
  uint uVar13;
  undefined8 uVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong lVar17;
  float *pfVar18;
  longlong lVar19;
  longlong lVar20;
  longlong *plVar21;
  float *pfVar22;
  longlong *plVar23;
  undefined4 *puVar24;
  uint uVar25;
  uint uVar26;
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
  undefined1 auStack_1a8 [32];
  undefined4 local_188;
  undefined4 local_184;
  int local_180;
  longlong local_178;
  longlong local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_148;
  longlong local_140;
  longlong local_138;
  longlong local_130 [2];
  undefined8 local_120;
  undefined1 local_118 [16];
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
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined8 local_98;
  undefined8 uStack_90;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  if (param_2 == 0) {
    return -1;
  }
  lVar19 = 0;
  local_140 = param_2;
  local_138 = param_1;
  uVar14 = UGameplayTagAssetInterface::GetPrivateStaticClass();
  plVar15 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_2,uVar14);
  lVar16 = lVar19;
  if (plVar15 != (longlong *)0x0) {
    lVar16 = (**(code **)(*plVar15 + 0x20))(plVar15);
    if (lVar16 != 0) {
      lVar17 = FUN_142f47520();
      if ((*(int *)(*(longlong *)(lVar16 + 0x10) + 0x90) < *(int *)(lVar17 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar17 + 0x90) * 8) != lVar17 + 0x88)) {
        bVar10 = false;
      }
      else {
        bVar10 = true;
      }
      if (bVar10) goto LAB_14128e435;
    }
    lVar16 = 0;
  }
LAB_14128e435:
  lVar17 = *(longlong *)(param_2 + 0x168);
  if (lVar17 == 0) {
    fVar31 = 0.0;
    fVar32 = 0.0;
    fVar33 = 0.0;
    fVar34 = 0.0;
    local_98 = 0;
    uStack_90 = 0;
    fVar27 = (float)(_DAT_146877b80 & _DAT_146877b90);
    fVar28 = (float)(uRam0000000146877b84 & uRam0000000146877b94);
    fVar29 = (float)(uRam0000000146877b88 & uRam0000000146877b98);
    fVar30 = (float)((uint)fRam0000000146877b8c & uRam0000000146877b9c);
    fVar35 = 0.0;
    fVar36 = 0.0;
    fVar37 = 0.0;
    fVar38 = fRam0000000146877b8c;
    local_88 = fVar27;
    fStack_84 = fVar28;
    fStack_80 = fVar29;
    fStack_7c = fVar30;
  }
  else {
    fVar31 = *(float *)(lVar17 + 0x220);
    fVar32 = *(float *)(lVar17 + 0x224);
    fVar33 = *(float *)(lVar17 + 0x228);
    fVar34 = *(float *)(lVar17 + 0x22c);
    fVar27 = *(float *)(lVar17 + 0x230);
    fVar28 = *(float *)(lVar17 + 0x234);
    fVar29 = *(float *)(lVar17 + 0x238);
    fVar30 = *(float *)(lVar17 + 0x23c);
    fVar35 = *(float *)(lVar17 + 0x210);
    fVar36 = *(float *)(lVar17 + 0x214);
    fVar37 = *(float *)(lVar17 + 0x218);
    fVar38 = *(float *)(lVar17 + 0x21c);
    local_c8 = fVar31;
    fStack_c4 = fVar32;
    fStack_c0 = fVar33;
    fStack_bc = fVar34;
    local_b8 = fVar27;
    fStack_b4 = fVar28;
    fStack_b0 = fVar29;
    fStack_ac = fVar30;
  }
  plVar15 = (longlong *)(param_1 + 0x150);
  pfVar5 = (float *)*plVar15;
  pfVar18 = (float *)(longlong)*(int *)(param_1 + 0x158);
  lVar17 = (longlong)pfVar18 * 0x18;
  if (pfVar5 != pfVar5 + lVar17) {
    pfVar22 = pfVar5 + 0x10;
    do {
      if (*(longlong *)(pfVar22 + 6) == lVar16) {
        local_150 = 0x38d1b717;
        auVar6._4_4_ = -(uint)(0.0001 < (float)((uint)(pfVar22[-3] - fVar32) & uRam0000000146877c14)
                              );
        auVar6._0_4_ = -(uint)(0.0001 < (float)((uint)(pfVar22[-4] - fVar31) & _DAT_146877c10));
        auVar6._8_4_ = -(uint)(0.0001 < (float)((uint)(pfVar22[-2] - fVar33) & uRam0000000146877c18)
                              );
        auVar6._12_4_ =
             -(uint)(0.0001 < (float)((uint)(pfVar22[-1] - fVar34) & uRam0000000146877c1c));
        iVar12 = movmskps((int)pfVar18,auVar6);
        if (iVar12 == 0) {
          auVar7._4_4_ = -(uint)(0.0001 < (float)((uint)(pfVar22[-7] - fVar36) &
                                                 uRam0000000146877c14));
          auVar7._0_4_ = -(uint)(0.0001 < (float)((uint)(pfVar22[-8] - fVar35) & _DAT_146877c10));
          auVar7._8_4_ = -(uint)(0.0001 < (float)((uint)(pfVar22[-6] - fVar37) &
                                                 uRam0000000146877c18));
          auVar7._12_4_ =
               -(uint)(0.0001 < (float)((uint)(pfVar22[-5] - fVar38) & uRam0000000146877c1c));
          iVar12 = movmskps(0,auVar7);
          if ((iVar12 == 0) ||
             (auVar8._4_4_ = -(uint)(0.0001 < (float)((uint)(fVar36 + pfVar22[-7]) &
                                                     uRam0000000146877c14)),
             auVar8._0_4_ = -(uint)(0.0001 < (float)((uint)(fVar35 + pfVar22[-8]) & _DAT_146877c10))
             , auVar8._8_4_ = -(uint)(0.0001 < (float)((uint)(fVar37 + pfVar22[-6]) &
                                                      uRam0000000146877c18)),
             auVar8._12_4_ =
                  -(uint)(0.0001 < (float)((uint)(fVar38 + pfVar22[-5]) & uRam0000000146877c1c)),
             uVar13 = movmskps(iVar12,auVar8), uVar13 == 0)) {
            uVar13 = 1;
          }
          else {
            uVar13 = uVar13 & 0xffffff00;
          }
          if (((char)uVar13 == '\0') ||
             (auVar9._4_4_ = -(uint)(0.0001 < (float)((uint)(pfVar22[1] - fVar28) &
                                                     uRam0000000146877c14)),
             auVar9._0_4_ = -(uint)(0.0001 < (float)((uint)(*pfVar22 - fVar27) & _DAT_146877c10)),
             auVar9._8_4_ = -(uint)(0.0001 < (float)((uint)(pfVar22[2] - fVar29) &
                                                    uRam0000000146877c18)),
             auVar9._12_4_ =
                  -(uint)(0.0001 < (float)((uint)(pfVar22[3] - fVar30) & uRam0000000146877c1c)),
             iVar12 = movmskps(uVar13,auVar9), iVar12 != 0)) goto LAB_14128e54d;
          bVar10 = true;
        }
        else {
LAB_14128e54d:
          bVar10 = false;
        }
        if (bVar10) {
          if (param_3 == 0) {
            return -1;
          }
          if (*(longlong *)(pfVar22 + -0x10) == param_3) {
            return -1;
          }
        }
      }
      pfVar18 = pfVar22 + 8;
      pfVar22 = pfVar22 + 0x18;
    } while (pfVar18 != pfVar5 + lVar17);
  }
  local_108 = fVar35;
  fStack_104 = fVar36;
  fStack_100 = fVar37;
  fStack_fc = fVar38;
  local_f8 = fVar31;
  fStack_f4 = fVar32;
  fStack_f0 = fVar33;
  fStack_ec = fVar34;
  local_e8 = fVar27;
  fStack_e4 = fVar28;
  fStack_e0 = fVar29;
  fStack_dc = fVar30;
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
    lVar19 = *(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x588);
  }
  iVar12 = -1;
  if (lVar19 != 0) {
    if (param_3 == 0) {
      puVar24 = *(undefined4 **)(lVar19 + 0x30);
      puVar2 = puVar24 + (longlong)*(int *)(lVar19 + 0x38) * 10;
      if (puVar24 != puVar2) {
        local_160 = 0;
        do {
          local_188 = *puVar24;
          local_184 = puVar24[1];
          local_180 = puVar24[2];
          local_120 = *(undefined8 *)(puVar24 + 4);
          local_170 = 0;
          local_168 = 0;
          local_178 = 0;
          FString::FString(local_118,puVar24 + 6);
          FSoftObjectPath::operator=(&local_178,&local_120);
          lVar19 = FWeakObjectPtr::Get(&local_188);
          if (lVar19 == 0) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            if ((DAT_1464b56f4 != local_180) && (local_160 = 0, local_178 != 0)) {
              lVar19 = FUN_141796df0(&local_178);
              FWeakObjectPtr::operator=(&local_188,lVar19);
              if ((lVar19 != 0) || (DAT_1469e7e10 == '\0')) {
                LOCK();
                if (DAT_1464b56f4 == 0) {
                  DAT_1464b56f4 = 0;
                }
                UNLOCK();
                local_180 = DAT_1464b56f4;
              }
              lVar19 = FWeakObjectPtr::Get(&local_188);
              if (lVar19 != 0) goto LAB_14128e6b6;
            }
          }
          else {
LAB_14128e6b6:
            lVar17 = FUN_1414f8520();
            if ((*(int *)(*(longlong *)(lVar19 + 0x10) + 0x90) < *(int *)(lVar17 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar19 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar17 + 0x90) * 8) != lVar17 + 0x88)) {
              bVar10 = false;
            }
            else {
              bVar10 = true;
            }
            if (bVar10) {
              lVar19 = FWeakObjectPtr::Get(&local_188);
              if (lVar19 == 0) {
                LOCK();
                if (DAT_1464b56f4 == 0) {
                  DAT_1464b56f4 = 0;
                }
                UNLOCK();
                if ((DAT_1464b56f4 != local_180) && (local_148 = 0, local_178 != 0)) {
                  lVar19 = FUN_141796df0(&local_178);
                  FWeakObjectPtr::operator=(&local_188,lVar19);
                  if ((lVar19 != 0) || (DAT_1469e7e10 == '\0')) {
                    LOCK();
                    if (DAT_1464b56f4 == 0) {
                      DAT_1464b56f4 = 0;
                    }
                    UNLOCK();
                    local_180 = DAT_1464b56f4;
                  }
                  lVar19 = FWeakObjectPtr::Get(&local_188);
                  if (lVar19 != 0) goto LAB_14128e771;
                }
LAB_14128e7a7:
                lVar19 = 0;
              }
              else {
LAB_14128e771:
                lVar17 = FUN_1414f8520();
                if ((*(int *)(*(longlong *)(lVar19 + 0x10) + 0x90) < *(int *)(lVar17 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar19 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar17 + 0x90) * 8) != lVar17 + 0x88)) {
                  bVar10 = false;
                }
                else {
                  bVar10 = true;
                }
                if (!bVar10) goto LAB_14128e7a7;
              }
              lVar17 = FWeakObjectPtr::Get();
              if (lVar17 == 0) {
                LOCK();
                if (DAT_1464b56f4 == 0) {
                  DAT_1464b56f4 = 0;
                }
                UNLOCK();
                if ((DAT_1464b56f4 != *(int *)(lVar19 + 0xe0)) &&
                   (local_158 = 0, *(longlong *)(lVar19 + 0xe8) != 0)) {
                  lVar17 = FUN_141796df0();
                  FWeakObjectPtr::operator=(lVar19 + 0xd8,lVar17);
                  if ((lVar17 != 0) || (DAT_1469e7e10 == '\0')) {
                    LOCK();
                    if (DAT_1464b56f4 == 0) {
                      DAT_1464b56f4 = 0;
                    }
                    UNLOCK();
                    *(int *)(lVar19 + 0xe0) = DAT_1464b56f4;
                  }
                  lVar17 = FWeakObjectPtr::Get(lVar19 + 0xd8);
                  if (lVar17 != 0) goto LAB_14128e828;
                }
              }
              else {
LAB_14128e828:
                lVar19 = FUN_14171bfe0();
                if ((*(int *)(*(longlong *)(lVar17 + 0x10) + 0x90) < *(int *)(lVar19 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar19 + 0x90) * 8) != lVar19 + 0x88)) {
                  bVar10 = false;
                }
                else {
                  bVar10 = true;
                }
                if (bVar10) {
                  lVar20 = FUN_1428dfc70();
                  lVar19 = lVar17;
                  do {
                    if (lVar19 == lVar20) goto LAB_14128e882;
                    lVar19 = *(longlong *)(lVar19 + 0x30);
                  } while (lVar19 != 0);
                }
              }
              lVar17 = 0;
LAB_14128e882:
              param_2 = local_140;
              for (lVar19 = *(longlong *)(local_140 + 0x10); lVar19 != 0;
                  lVar19 = *(longlong *)(lVar19 + 0x30)) {
                if (lVar19 == lVar17) {
                  param_3 = FWeakObjectPtr::Get(&local_188);
                  if (param_3 == 0) {
                    LOCK();
                    if (DAT_1464b56f4 == 0) {
                      DAT_1464b56f4 = 0;
                    }
                    UNLOCK();
                    if ((DAT_1464b56f4 != local_180) && (local_158 = 0, local_178 != 0)) {
                      lVar19 = FUN_141796df0(&local_178);
                      FWeakObjectPtr::operator=(&local_188,lVar19);
                      if ((lVar19 != 0) || (DAT_1469e7e10 == '\0')) {
                        LOCK();
                        if (DAT_1464b56f4 == 0) {
                          DAT_1464b56f4 = 0;
                        }
                        UNLOCK();
                        local_180 = DAT_1464b56f4;
                      }
                      param_3 = FWeakObjectPtr::Get(&local_188);
                      if (param_3 != 0) goto LAB_14128e98c;
                    }
LAB_14128e9c2:
                    param_3 = 0;
                  }
                  else {
LAB_14128e98c:
                    lVar19 = FUN_1414f8520();
                    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar19 + 0x90))
                       || (*(longlong *)
                            (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) +
                            (longlong)*(int *)(lVar19 + 0x90) * 8) != lVar19 + 0x88)) {
                      bVar10 = false;
                    }
                    else {
                      bVar10 = true;
                    }
                    if (!bVar10) goto LAB_14128e9c2;
                  }
                  if (local_170 != 0) {
                    FMemory::Free();
                  }
                  fVar27 = local_e8;
                  fVar28 = fStack_e4;
                  fVar29 = fStack_e0;
                  fVar30 = fStack_dc;
                  fVar31 = local_f8;
                  fVar32 = fStack_f4;
                  fVar33 = fStack_f0;
                  fVar34 = fStack_ec;
                  fVar35 = local_108;
                  fVar36 = fStack_104;
                  fVar37 = fStack_100;
                  fVar38 = fStack_fc;
                  if (param_3 == 0) {
                    return -1;
                  }
                  goto LAB_14128e9f0;
                }
              }
            }
          }
          if (local_170 != 0) {
            FMemory::Free();
          }
          puVar24 = puVar24 + 10;
        } while (puVar24 != puVar2);
      }
      iVar12 = -1;
    }
    else {
LAB_14128e9f0:
      iVar4 = *(int *)(param_1 + 0x158);
      *(int *)(param_1 + 0x158) = iVar4 + 1;
      if (*(int *)(param_1 + 0x15c) < iVar4 + 1) {
        TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(plVar15,iVar4);
      }
      lVar19 = *plVar15;
      lVar17 = (longlong)iVar4 * 0x60;
      *(undefined8 *)(lVar19 + lVar17) = 0;
      *(undefined8 *)(lVar19 + 8 + lVar17) = 0;
      *(undefined8 *)(lVar19 + 0x10 + lVar17) = 0;
      fVar11 = fRam0000000146877b8c;
      puVar1 = (undefined8 *)(lVar19 + 0x30 + lVar17);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar2 = (undefined4 *)(lVar19 + 0x20 + lVar17);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = fVar11;
      uVar13 = uRam0000000146877b84 & uRam0000000146877b94;
      uVar25 = uRam0000000146877b88 & uRam0000000146877b98;
      uVar26 = (uint)fRam0000000146877b8c & uRam0000000146877b9c;
      puVar3 = (uint *)(lVar19 + 0x40 + lVar17);
      *puVar3 = _DAT_146877b80 & _DAT_146877b90;
      puVar3[1] = uVar13;
      puVar3[2] = uVar25;
      puVar3[3] = uVar26;
      *(undefined8 *)(lVar19 + 0x50 + lVar17) = 0xffffffffffffffff;
      *(undefined8 *)(lVar19 + 0x58 + lVar17) = 0;
      if ((iVar4 < 0) || (*(int *)(local_138 + 0x158) <= iVar4)) {
        bVar10 = false;
      }
      else {
        bVar10 = true;
      }
      iVar12 = -1;
      if (bVar10) {
        *(longlong *)(lVar17 + *plVar15) = param_3;
        lVar19 = *plVar15;
        plVar21 = (longlong *)UObjectBaseUtility::GetFullGroupName(param_2,local_130,0);
        plVar23 = (longlong *)(lVar19 + 8 + lVar17);
        if (plVar23 != plVar21) {
          if (*plVar23 != 0) {
            FMemory::Free();
          }
          *plVar23 = *plVar21;
          *plVar21 = 0;
          *(int *)(plVar23 + 1) = (int)plVar21[1];
          *(undefined4 *)((longlong)plVar23 + 0xc) = *(undefined4 *)((longlong)plVar21 + 0xc);
          plVar21[1] = 0;
        }
        if (local_130[0] != 0) {
          FMemory::Free();
        }
        lVar19 = *plVar15;
        pfVar18 = (float *)(lVar19 + 0x20 + lVar17);
        *pfVar18 = fVar35;
        pfVar18[1] = fVar36;
        pfVar18[2] = fVar37;
        pfVar18[3] = fVar38;
        pfVar18 = (float *)(lVar19 + 0x30 + lVar17);
        *pfVar18 = fVar31;
        pfVar18[1] = fVar32;
        pfVar18[2] = fVar33;
        pfVar18[3] = fVar34;
        pfVar18 = (float *)(lVar19 + 0x40 + lVar17);
        *pfVar18 = fVar27;
        pfVar18[1] = fVar28;
        pfVar18[2] = fVar29;
        pfVar18[3] = fVar30;
        *(longlong *)(*plVar15 + 0x58 + lVar17) = lVar16;
        iVar12 = iVar4;
      }
    }
  }
  return iVar12;
}



// FUNCTION 14128eb20 FUN_14128eb20 body=458 status=ok
// SIG undefined FUN_14128eb20(void)

void FUN_14128eb20(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong local_70 [3];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 local_20;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x1f8);
    plVar5 = (longlong *)*plVar1;
    plVar2 = plVar5 + *(int *)(param_1 + 0x200);
    for (; plVar5 != plVar2; plVar5 = plVar5 + 1) {
      if (*plVar5 == param_2) {
        return;
      }
    }
    puVar7 = *(undefined8 **)(param_2 + 0x50);
    puVar9 = puVar7 + (longlong)*(int *)(param_2 + 0x58) * 0xc;
    if (puVar7 != puVar9) {
      puVar8 = puVar7 + 8;
      do {
        uVar4 = *puVar7;
        FString::FString(local_70,puVar8 + -7);
        local_28 = puVar8[2];
        local_58 = puVar8[-4];
        uStack_50 = puVar8[-3];
        iVar3 = *(int *)(param_1 + 0x158);
        local_48 = *(undefined4 *)(puVar8 + -2);
        uStack_44 = *(undefined4 *)((longlong)puVar8 + -0xc);
        uStack_40 = *(undefined4 *)(puVar8 + -1);
        uStack_3c = *(undefined4 *)((longlong)puVar8 + -4);
        local_20 = puVar8[3];
        local_38 = *(undefined4 *)puVar8;
        uStack_34 = *(undefined4 *)((longlong)puVar8 + 4);
        uStack_30 = *(undefined4 *)(puVar8 + 1);
        uStack_2c = *(undefined4 *)((longlong)puVar8 + 0xc);
        *(int *)(param_1 + 0x158) = iVar3 + 1;
        if (*(int *)(param_1 + 0x15c) < iVar3 + 1) {
          TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow
                    ((longlong *)(param_1 + 0x150),iVar3);
        }
        puVar6 = (undefined8 *)((longlong)iVar3 * 0x60 + *(longlong *)(param_1 + 0x150));
        *puVar6 = uVar4;
        FString::FString(puVar6 + 1,local_70);
        puVar6[4] = local_58;
        puVar6[5] = uStack_50;
        *(undefined4 *)(puVar6 + 8) = local_38;
        *(undefined4 *)((longlong)puVar6 + 0x44) = uStack_34;
        *(undefined4 *)(puVar6 + 9) = uStack_30;
        *(undefined4 *)((longlong)puVar6 + 0x4c) = uStack_2c;
        *(undefined4 *)(puVar6 + 6) = local_48;
        *(undefined4 *)((longlong)puVar6 + 0x34) = uStack_44;
        *(undefined4 *)(puVar6 + 7) = uStack_40;
        *(undefined4 *)((longlong)puVar6 + 0x3c) = uStack_3c;
        puVar6[10] = local_28;
        puVar6[0xb] = local_20;
        if (local_70[0] != 0) {
          FMemory::Free();
        }
        puVar7 = puVar7 + 0xc;
        puVar8 = puVar8 + 0xc;
      } while (puVar7 != puVar9);
    }
    iVar3 = *(int *)(param_1 + 0x200);
    *(int *)(param_1 + 0x200) = iVar3 + 1;
    if (*(int *)(param_1 + 0x204) < iVar3 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
    }
    *(longlong *)(*plVar1 + (longlong)iVar3 * 8) = param_2;
  }
  return;
}



// FUNCTION 14128ecf0 FUN_14128ecf0 body=157 status=ok
// SIG undefined FUN_14128ecf0(void)

int FUN_14128ecf0(longlong *param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_14233f450();
  if ((iVar1 == 3) && (param_1[0x3c] != 0)) {
    FUN_142fe44f0(param_1[0x3c],param_1[0x36],param_2);
    iVar1 = (**(code **)(*param_1 + 0x448))(param_1);
    iVar2 = iVar1 - (int)param_1[0x39];
    iVar3 = 0;
    if (-1 < iVar2) {
      iVar3 = iVar2;
    }
    *(int *)(param_1 + 0x3a) = iVar3;
    if (param_3 != '\0') {
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x32,0);
    }
    (**(code **)(*param_1 + 0x260))(param_1);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



// FUNCTION 14128ed90 FUN_14128ed90 body=78 status=ok
// SIG undefined FUN_14128ed90(void)

void FUN_14128ed90(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 0x3a8);
    *(int *)(param_1 + 0x3a8) = iVar1 + 1;
    if (*(int *)(param_1 + 0x3ac) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                ((longlong *)(param_1 + 0x3a0),iVar1);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x3a0) + (longlong)iVar1 * 8) = param_2;
  }
  return;
}



// FUNCTION 14128ede0 FUN_14128ede0 body=78 status=ok
// SIG undefined FUN_14128ede0(void)

void FUN_14128ede0(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 0x3c8);
    *(int *)(param_1 + 0x3c8) = iVar1 + 1;
    if (*(int *)(param_1 + 0x3cc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                ((longlong *)(param_1 + 0x3c0),iVar1);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x3c0) + (longlong)iVar1 * 8) = param_2;
  }
  return;
}



// FUNCTION 14128ee30 FUN_14128ee30 body=208 status=ok
// SIG undefined FUN_14128ee30(void)

/* WARNING: Removing unreachable block (ram,0x00014128eeee) */

int FUN_14128ee30(longlong *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  char cVar2;
  wchar_t *pwVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  undefined8 local_18;
  undefined4 local_10;
  undefined4 uStack_c;
  
  if ((param_3 == 0) || (cVar2 = UActorComponent::IsComponentTickEnabled(param_3), cVar2 == '\0')) {
    if ((int)param_1[8] == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = (undefined2 *)param_1[7];
    }
    pwVar3 = L"%s%s";
  }
  else if ((int)param_1[8] == 0) {
    puVar5 = &DAT_143f3eda8;
    pwVar3 = L"%s%s *";
  }
  else {
    puVar5 = (undefined2 *)param_1[7];
    pwVar3 = L"%s%s *";
  }
  FString::PrintfImpl(&local_18,pwVar3,puVar5,param_2);
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar1);
  }
  puVar4 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_1);
  *puVar4 = 0;
  *puVar4 = local_18;
  *(undefined4 *)(puVar4 + 1) = local_10;
  *(undefined4 *)((longlong)puVar4 + 0xc) = uStack_c;
  return iVar1;
}



// FUNCTION 14128ef00 FUN_14128ef00 body=285 status=ok
// SIG undefined FUN_14128ef00(void)

void FUN_14128ef00(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  byte bVar6;
  
  uVar5 = *(uint *)(param_2 + 0x38);
  if (uVar5 != 0) {
    bVar6 = 0;
    do {
      if (7 < bVar6) {
        return;
      }
      if ((uVar5 & 1) != 0) {
        if (*(int *)(param_1 + 0x398) <= (int)(uint)bVar6) {
          plVar4 = (longlong *)(param_1 + 0x390);
          iVar2 = bVar6 + 1;
          iVar1 = *(int *)(param_1 + 0x398);
          if (iVar1 < iVar2) {
            *(int *)(param_1 + 0x398) = iVar2;
            if (*(int *)(param_1 + 0x39c) < iVar2) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
              ResizeGrow(plVar4);
            }
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)iVar1 * 0x38 + *plVar4),0,(longlong)(iVar2 - iVar1) * 0x38
                      );
          }
          else if (iVar2 < iVar1) {
            FUN_1412a8760(plVar4,iVar2,iVar1 - iVar2,1);
          }
        }
        lVar3 = 0x18;
        if (*(char *)(param_2 + 0x50) != '\0') {
          lVar3 = 0x20;
        }
        plVar4 = (longlong *)(lVar3 + (ulonglong)bVar6 * 0x38 + *(longlong *)(param_1 + 0x390));
        lVar3 = *plVar4;
        if (lVar3 == 0) {
          *plVar4 = param_2;
        }
        else {
          if (*(byte *)(lVar3 + 0x30) < *(byte *)(param_2 + 0x30)) {
            lVar3 = param_2;
          }
          *plVar4 = lVar3;
        }
      }
      bVar6 = bVar6 + 1;
      uVar5 = (int)uVar5 >> 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 14128f020 FUN_14128f020 body=216 status=ok
// SIG undefined FUN_14128f020(void)

void FUN_14128f020(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x3d8)) {
    lVar4 = 0;
    do {
      plVar1 = *(longlong **)(lVar4 + *(longlong *)(param_1 + 0x3d0));
      cVar2 = (**(code **)(*plVar1 + 0x2d8))(plVar1,param_2);
      if (cVar2 != '\0') {
        if ((-1 < iVar3) && (iVar3 < *(int *)(param_1 + 0x3d8))) {
          lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x3d0) + (longlong)iVar3 * 8);
          if ((param_2 == 0) ||
             ((lVar4 != 0 && (*(byte *)(param_2 + 0x30) <= *(byte *)(lVar4 + 0x30))))) {
            param_2 = lVar4;
          }
          *(longlong *)(*(longlong *)(param_1 + 0x3d0) + (longlong)iVar3 * 8) = param_2;
          return;
        }
        break;
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 8;
    } while (iVar3 < *(int *)(param_1 + 0x3d8));
  }
  iVar3 = *(int *)(param_1 + 0x3d8);
  *(int *)(param_1 + 0x3d8) = iVar3 + 1;
  if (*(int *)(param_1 + 0x3dc) < iVar3 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x3d0,iVar3);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x3d0) + (longlong)iVar3 * 8) = param_2;
  return;
}



// FUNCTION 14128f100 FUN_14128f100 body=226 status=ok
// SIG undefined FUN_14128f100(void)

void FUN_14128f100(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  
  if (param_2 != 0) {
    uVar5 = 0;
    if (*(longlong *)(param_2 + 0x40) != 0) {
      iVar1 = *(int *)(param_1 + 0x3b8);
      if (0 < iVar1) {
        plVar2 = *(longlong **)(param_1 + 0x3b0);
        plVar3 = plVar2;
        uVar7 = uVar5;
        do {
          iVar6 = (int)uVar7;
          if (*(longlong *)(*plVar3 + 0x40) == *(longlong *)(param_2 + 0x40)) {
            if ((-1 < iVar6) && (iVar6 < iVar1)) {
              lVar4 = plVar2[iVar6];
              if ((lVar4 == 0) || (*(byte *)(lVar4 + 0x30) < *(byte *)(param_2 + 0x30))) {
                lVar4 = param_2;
              }
              plVar2[iVar6] = lVar4;
              return;
            }
            break;
          }
          uVar7 = (ulonglong)(iVar6 + 1);
          uVar5 = uVar5 + 1;
          plVar3 = plVar3 + 1;
        } while ((longlong)uVar5 < (longlong)iVar1);
      }
    }
    iVar1 = *(int *)(param_1 + 0x3b8);
    *(int *)(param_1 + 0x3b8) = iVar1 + 1;
    if (*(int *)(param_1 + 0x3bc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x3b0,iVar1);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x3b0) + (longlong)iVar1 * 8) = param_2;
  }
  return;
}



// FUNCTION 14128f1f0 FUN_14128f1f0 body=43 status=ok
// SIG undefined FUN_14128f1f0(void)

void FUN_14128f1f0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x3e0);
  if ((param_2 != 0) && ((lVar1 == 0 || (*(byte *)(lVar1 + 0x30) < *(byte *)(param_2 + 0x30))))) {
    *(longlong *)(param_1 + 0x3e0) = param_2;
    return;
  }
  *(longlong *)(param_1 + 0x3e0) = lVar1;
  return;
}



// FUNCTION 14128f220 FUN_14128f220 body=1606 status=ok
// SIG undefined FUN_14128f220(void)

ulonglong FUN_14128f220(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  void *_Src;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  ulonglong uVar13;
  undefined4 local_138;
  undefined8 local_134;
  undefined8 local_128;
  longlong local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  uint local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [24];
  undefined1 local_70 [24];
  undefined1 local_58 [32];
  
  if ((DAT_1468780c8 == 0) && (0 < *(int *)(param_1 + 0x80))) {
    FUN_1412a2330();
  }
  plVar11 = *(longlong **)(param_2 + 0x30);
  uVar5 = (ulonglong)*(int *)(param_2 + 0x38);
  plVar1 = plVar11 + uVar5;
  do {
    if (plVar11 == plVar1) {
      return uVar5;
    }
    lVar7 = *plVar11;
    if (lVar7 != 0) {
      lVar10 = lVar7 + 0x90;
      lVar6 = FWeakObjectPtr::Get(lVar10);
      if (lVar6 == 0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        if ((DAT_1464b56f4 != *(uint *)(lVar7 + 0x98)) && (*(longlong *)(lVar7 + 0xa0) != 0)) {
          lVar6 = FUN_141796df0();
          FWeakObjectPtr::operator=(lVar10,lVar6);
          if ((lVar6 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            *(uint *)(lVar7 + 0x98) = DAT_1464b56f4;
          }
          lVar6 = FWeakObjectPtr::Get(lVar10);
          if (lVar6 != 0) goto LAB_14128f31b;
        }
LAB_14128f38b:
        lVar6 = FUN_1405ec200(lVar10);
        uVar5 = 0;
        if (lVar6 != 0) {
          lVar7 = FUN_142e67c90();
          iVar12 = *(int *)(lVar7 + 0x90);
          uVar5 = (longlong)iVar12;
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < iVar12) ||
             (uVar5 = *(ulonglong *)(*(longlong *)(lVar6 + 0x10) + 0x88),
             *(longlong *)(uVar5 + (longlong)iVar12 * 8) != lVar7 + 0x88)) {
            uVar5 = uVar5 & 0xffffffffffffff00;
          }
          else {
            uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
          }
          if ((char)uVar5 != '\0') {
            lVar7 = FUN_1414a9b90();
            iVar12 = *(int *)(lVar7 + 0x90);
            uVar5 = (longlong)iVar12;
            if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < iVar12) ||
               (uVar5 = *(ulonglong *)(*(longlong *)(lVar6 + 0x10) + 0x88),
               *(longlong *)(uVar5 + (longlong)iVar12 * 8) != lVar7 + 0x88)) {
              uVar5 = uVar5 & 0xffffffffffffff00;
            }
            else {
              uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
            }
            if ((char)uVar5 != '\0') goto LAB_14128f413;
          }
        }
      }
      else {
LAB_14128f31b:
        lVar7 = FUN_142e67c90();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) goto LAB_14128f38b;
        lVar7 = FUN_1414a9b90();
        iVar12 = *(int *)(lVar7 + 0x90);
        uVar5 = (longlong)iVar12;
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < iVar12) ||
           (uVar5 = *(ulonglong *)(*(longlong *)(lVar6 + 0x10) + 0x88),
           *(longlong *)(uVar5 + (longlong)iVar12 * 8) != lVar7 + 0x88)) {
          uVar5 = uVar5 & 0xffffffffffffff00;
        }
        else {
          uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
        }
        if ((char)uVar5 == '\0') goto LAB_14128f38b;
LAB_14128f413:
        lVar7 = DAT_1468780c0 + (longlong)DAT_1468780c8 * 0x28;
        for (lVar10 = DAT_1468780c0; lVar10 != lVar7; lVar10 = lVar10 + 0x28) {
          local_b0 = 0;
          local_a8 = 0;
          local_c8 = 0xffffffff;
          local_c4 = 0;
          local_b8 = 0;
          if (lVar6 == 0) {
            local_b8 = 0;
          }
          else {
            uVar8 = FSoftObjectPath::FSoftObjectPath(local_88,lVar6);
            FSoftObjectPath::operator=(&local_b8,uVar8);
            FWeakObjectPtr::operator=(&local_c8,lVar6);
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            local_c4 = CONCAT44(DAT_1464b56f4,(undefined4)local_c4);
          }
          uVar9 = FSoftObjectPath::operator==(lVar10 + 0x10,&local_b8);
          uVar5 = uVar9;
          if (local_b0 != 0) {
            uVar5 = FMemory::Free();
          }
          if ((char)uVar9 != '\0') goto LAB_14128f61a;
        }
        uVar9 = 0;
        if (*(char *)(lVar6 + 0xf0) == '\0') {
          uVar13 = uVar9;
          if (0 < DAT_1468780c8) {
            do {
              lVar10 = DAT_1468780c0 + uVar9;
              lVar7 = FWeakObjectPtr::Get(lVar10);
              iVar12 = (int)uVar13;
              if (lVar7 == 0) {
                LOCK();
                if (DAT_1464b56f4 == 0) {
                  DAT_1464b56f4 = 0;
                  uVar5 = 0;
                }
                else {
                  uVar5 = (ulonglong)DAT_1464b56f4;
                }
                UNLOCK();
                if (((int)uVar5 != *(int *)(lVar10 + 8)) &&
                   (local_100 = 0, uVar5 = 0, *(longlong *)(lVar10 + 0x10) != 0)) {
                  lVar7 = FUN_141796df0();
                  FWeakObjectPtr::operator=();
                  if ((lVar7 != 0) || (DAT_1469e7e10 == '\0')) {
                    LOCK();
                    if (DAT_1464b56f4 == 0) {
                      DAT_1464b56f4 = 0;
                    }
                    UNLOCK();
                    *(uint *)(lVar10 + 8) = DAT_1464b56f4;
                  }
                  lVar7 = FWeakObjectPtr::Get(lVar10);
                  uVar5 = 0;
                  if (lVar7 != 0) goto LAB_14128f6de;
                }
              }
              else {
LAB_14128f6de:
                lVar10 = DAT_1468780c0 + uVar9;
                lVar7 = FWeakObjectPtr::Get(lVar10);
                if (lVar7 == 0) {
                  LOCK();
                  if (DAT_1464b56f4 == 0) {
                    DAT_1464b56f4 = 0;
                    uVar5 = 0;
                  }
                  else {
                    uVar5 = (ulonglong)DAT_1464b56f4;
                  }
                  UNLOCK();
                  if (((int)uVar5 != *(int *)(lVar10 + 8)) &&
                     (local_f8 = 0, uVar5 = 0, *(longlong *)(lVar10 + 0x10) != 0)) {
                    lVar7 = FUN_141796df0();
                    FWeakObjectPtr::operator=();
                    if ((lVar7 != 0) || (DAT_1469e7e10 == '\0')) {
                      LOCK();
                      if (DAT_1464b56f4 == 0) {
                        DAT_1464b56f4 = 0;
                      }
                      UNLOCK();
                      *(uint *)(lVar10 + 8) = DAT_1464b56f4;
                    }
                    lVar7 = FWeakObjectPtr::Get(lVar10);
                    uVar5 = 0;
                    if (lVar7 != 0) goto LAB_14128f756;
                  }
LAB_14128f764:
                  lVar7 = 0;
                }
                else {
LAB_14128f756:
                  uVar5 = FUN_1412896c0(lVar7);
                  if ((char)uVar5 == '\0') goto LAB_14128f764;
                }
                if (*(char *)(lVar7 + 0xf0) != '\0') {
                  local_f0 = 0xffffffff;
                  local_e0 = 0;
                  local_d8 = 0;
                  local_d0 = 0;
                  local_ec = 0;
                  FSoftObjectPath::Reset(&local_e0);
                  local_e8 = 0;
                  uVar8 = FSoftObjectPath::FSoftObjectPath(local_58,lVar6);
                  FSoftObjectPath::operator=(&local_e0,uVar8);
                  FWeakObjectPtr::operator=(&local_f0,lVar6);
                  iVar4 = DAT_1468780c8;
                  LOCK();
                  if (DAT_1464b56f4 == 0) {
                    DAT_1464b56f4 = 0;
                  }
                  UNLOCK();
                  DAT_1468780c8 = DAT_1468780c8 + 1;
                  local_e8 = DAT_1464b56f4;
                  if (DAT_1468780cc < DAT_1468780c8) {
                    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(&DAT_1468780c0,iVar4);
                  }
                  _Src = (void *)(DAT_1468780c0 + (longlong)iVar12 * 0x28);
                  _guard_xfg_dispatch_icall_nop
                            ((void *)((longlong)_Src + 0x28),_Src,(longlong)(iVar4 - iVar12) * 0x28)
                  ;
                  uVar5 = TSoftClassPtr<AItem>::TSoftClassPtr<AItem>
                                    (DAT_1468780c0 + (longlong)iVar12 * 0x28,&local_f0);
                  if (local_d8 != 0) {
                    uVar5 = FMemory::Free();
                  }
                  break;
                }
              }
              uVar13 = (ulonglong)(iVar12 + 1U);
              uVar9 = uVar9 + 0x28;
            } while ((int)(iVar12 + 1U) < DAT_1468780c8);
          }
        }
        else {
          local_110 = 0;
          local_128 = 0;
          local_120 = 0;
          local_118 = 0;
          local_138 = 0xffffffff;
          local_134 = 0;
          uVar8 = FSoftObjectPath::FSoftObjectPath(local_70,lVar6);
          FSoftObjectPath::operator=(&local_128,uVar8);
          FWeakObjectPtr::operator=(&local_138,lVar6);
          iVar12 = DAT_1468780c8;
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          lVar7 = (longlong)DAT_1468780c8;
          local_134 = CONCAT44(DAT_1464b56f4,(undefined4)local_134);
          DAT_1468780c8 = DAT_1468780c8 + 1;
          if (DAT_1468780cc < DAT_1468780c8) {
            TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(&DAT_1468780c0,iVar12);
          }
          puVar2 = (undefined4 *)(DAT_1468780c0 + lVar7 * 0x28);
          *(undefined8 *)(puVar2 + 6) = 0;
          puVar2[9] = 0;
          *puVar2 = 0xffffffff;
          puVar2[1] = 0;
          *(undefined8 *)(puVar2 + 4) = 0;
          local_108 = 0;
          puVar2[8] = 0;
          if (0x7fffffff < (uint)puVar2[9]) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar2 + 6,0);
          }
          if (*(undefined2 **)(puVar2 + 6) != (undefined2 *)0x0) {
            **(undefined2 **)(puVar2 + 6) = 0;
          }
          puVar2[2] = 0;
          *puVar2 = local_138;
          puVar2[1] = (undefined4)local_134;
          puVar2[2] = local_134._4_4_;
          local_a0 = local_128;
          FString::FString(local_98,&local_120);
          uVar5 = FSoftObjectPath::operator=(puVar2 + 4,&local_a0);
          if (local_120 != 0) {
            uVar5 = FMemory::Free();
          }
        }
      }
    }
LAB_14128f61a:
    plVar11 = plVar11 + 1;
  } while( true );
}



// FUNCTION 14128f870 FUN_14128f870 body=43 status=ok
// SIG undefined FUN_14128f870(void)

void FUN_14128f870(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 1000);
  if ((param_2 != 0) && ((lVar1 == 0 || (*(byte *)(lVar1 + 0x30) < *(byte *)(param_2 + 0x30))))) {
    *(longlong *)(param_1 + 1000) = param_2;
    return;
  }
  *(longlong *)(param_1 + 1000) = lVar1;
  return;
}



// FUNCTION 14128f8a0 FUN_14128f8a0 body=245 status=ok
// SIG undefined FUN_14128f8a0(void)

void FUN_14128f8a0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  byte bVar6;
  
  uVar5 = *(uint *)(param_2 + 0x3c);
  if (uVar5 != 0) {
    bVar6 = 0;
    do {
      if (7 < bVar6) {
        return;
      }
      if ((uVar5 & 1) != 0) {
        if (*(int *)(param_1 + 0x398) <= (int)(uint)bVar6) {
          plVar4 = (longlong *)(param_1 + 0x390);
          iVar3 = bVar6 + 1;
          iVar1 = *(int *)(param_1 + 0x398);
          if (iVar1 < iVar3) {
            *(int *)(param_1 + 0x398) = iVar3;
            if (*(int *)(param_1 + 0x39c) < iVar3) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
              ResizeGrow(plVar4);
            }
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)iVar1 * 0x38 + *plVar4),0,(longlong)(iVar3 - iVar1) * 0x38
                      );
          }
          else if (iVar3 < iVar1) {
            FUN_1412a8760(plVar4,iVar3,iVar1 - iVar3,1);
          }
        }
        plVar4 = (longlong *)((ulonglong)bVar6 * 0x38 + *(longlong *)(param_1 + 0x390));
        lVar2 = *plVar4;
        if ((lVar2 == 0) || (*(byte *)(lVar2 + 0x30) < *(byte *)(param_2 + 0x30))) {
          lVar2 = param_2;
        }
        *plVar4 = lVar2;
      }
      bVar6 = bVar6 + 1;
      uVar5 = (int)uVar5 >> 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 14128f9a0 FUN_14128f9a0 body=202 status=ok
// SIG undefined FUN_14128f9a0(void)

void FUN_14128f9a0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  bVar2 = *(byte *)(param_2 + 0x38);
  if (bVar2 < 8) {
    if (*(int *)(param_1 + 0x398) <= (int)(uint)bVar2) {
      iVar5 = bVar2 + 1;
      plVar1 = (longlong *)(param_1 + 0x390);
      iVar3 = *(int *)(param_1 + 0x398);
      if (iVar3 < iVar5) {
        *(int *)(param_1 + 0x398) = iVar5;
        if (*(int *)(param_1 + 0x39c) < iVar5) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
          ResizeGrow(plVar1);
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar3 * 0x38 + *plVar1),0,(longlong)(iVar5 - iVar3) * 0x38);
      }
      else if (iVar5 < iVar3) {
        FUN_1412a8760(plVar1,iVar5,iVar3 - iVar5,1);
      }
    }
    lVar6 = (ulonglong)bVar2 * 0x38 + *(longlong *)(param_1 + 0x390);
    lVar4 = *(longlong *)(lVar6 + 0x30);
    if ((lVar4 == 0) || (*(byte *)(lVar4 + 0x30) < *(byte *)(param_2 + 0x30))) {
      lVar4 = param_2;
    }
    *(longlong *)(lVar6 + 0x30) = lVar4;
  }
  return;
}



// FUNCTION 14128fa70 FUN_14128fa70 body=202 status=ok
// SIG undefined FUN_14128fa70(void)

void FUN_14128fa70(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  bVar2 = *(byte *)(param_2 + 0x38);
  if (bVar2 < 8) {
    if (*(int *)(param_1 + 0x398) <= (int)(uint)bVar2) {
      iVar5 = bVar2 + 1;
      plVar1 = (longlong *)(param_1 + 0x390);
      iVar3 = *(int *)(param_1 + 0x398);
      if (iVar3 < iVar5) {
        *(int *)(param_1 + 0x398) = iVar5;
        if (*(int *)(param_1 + 0x39c) < iVar5) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
          ResizeGrow(plVar1);
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar3 * 0x38 + *plVar1),0,(longlong)(iVar5 - iVar3) * 0x38);
      }
      else if (iVar5 < iVar3) {
        FUN_1412a8760(plVar1,iVar5,iVar3 - iVar5,1);
      }
    }
    lVar6 = (ulonglong)bVar2 * 0x38 + *(longlong *)(param_1 + 0x390);
    lVar4 = *(longlong *)(lVar6 + 0x28);
    if ((lVar4 == 0) || (*(byte *)(lVar4 + 0x30) < *(byte *)(param_2 + 0x30))) {
      lVar4 = param_2;
    }
    *(longlong *)(lVar6 + 0x28) = lVar4;
  }
  return;
}



// FUNCTION 14128fb40 FUN_14128fb40 body=483 status=ok
// SIG undefined FUN_14128fb40(void)

void FUN_14128fb40(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  byte bVar10;
  uint uVar11;
  longlong local_res18;
  
  uVar11 = *(uint *)(param_2 + 0x3c);
  if (uVar11 != 0) {
    bVar10 = 0;
    do {
      if (7 < bVar10) {
        return;
      }
      if ((uVar11 & 1) != 0) {
        if (*(int *)(param_1 + 0x398) <= (int)(uint)bVar10) {
          plVar1 = (longlong *)(param_1 + 0x390);
          iVar8 = bVar10 + 1;
          iVar2 = *(int *)(param_1 + 0x398);
          if (iVar2 < iVar8) {
            *(int *)(param_1 + 0x398) = iVar8;
            if (*(int *)(param_1 + 0x39c) < iVar8) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
              ResizeGrow(plVar1);
            }
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)iVar2 * 0x38 + *plVar1),0,(longlong)(iVar8 - iVar2) * 0x38
                      );
          }
          else if (iVar8 < iVar2) {
            FUN_1412a8760(plVar1,iVar8,iVar2 - iVar8,1);
          }
        }
        lVar9 = (ulonglong)bVar10 * 0x38 + *(longlong *)(param_1 + 0x390);
        if ((*(uint *)(param_2 + 0x38) >> 1 & 1) == 0) {
          iVar8 = 0;
          local_res18 = -1;
          lVar6 = -1;
          lVar7 = 0;
          iVar2 = -1;
          if (0 < *(int *)(lVar9 + 0x10)) {
            do {
              lVar6 = lVar7;
              lVar7 = *(longlong *)(*(longlong *)(lVar9 + 8) + lVar6 * 8);
              if ((*(uint *)(lVar7 + 0x38) >> 1 & 1) == 0) {
                lVar7 = *(longlong *)(lVar7 + 0x48);
                if (lVar7 != 0) {
                  lVar3 = FUN_1428e7a40();
                  lVar5 = lVar7;
                  do {
                    if (lVar5 == lVar3) goto LAB_14128fc62;
                    lVar5 = *(longlong *)(lVar5 + 0x30);
                  } while (lVar5 != 0);
                }
                lVar7 = 0;
LAB_14128fc62:
                lVar5 = *(longlong *)(param_2 + 0x48);
                if (lVar5 != 0) {
                  lVar4 = FUN_1428e7a40();
                  lVar3 = lVar5;
                  do {
                    if (lVar3 == lVar4) goto LAB_14128fc83;
                    lVar3 = *(longlong *)(lVar3 + 0x30);
                  } while (lVar3 != 0);
                }
                lVar5 = 0;
LAB_14128fc83:
                iVar2 = iVar8;
                if (lVar7 == lVar5) goto LAB_14128fc99;
              }
              iVar8 = iVar8 + 1;
              lVar7 = lVar6 + 1;
            } while (iVar8 < *(int *)(lVar9 + 0x10));
            lVar6 = local_res18;
            iVar2 = -1;
          }
LAB_14128fc99:
          if ((-1 < lVar6) && (iVar2 < *(int *)(lVar9 + 0x10))) {
            lVar7 = *(longlong *)(*(longlong *)(lVar9 + 8) + lVar6 * 8);
            if ((lVar7 == 0) || (*(byte *)(lVar7 + 0x30) < *(byte *)(param_2 + 0x30))) {
              lVar7 = param_2;
            }
            *(longlong *)(*(longlong *)(lVar9 + 8) + lVar6 * 8) = lVar7;
            goto LAB_14128fcef;
          }
        }
        iVar2 = *(int *)(lVar9 + 0x10);
        *(int *)(lVar9 + 0x10) = iVar2 + 1;
        if (*(int *)(lVar9 + 0x14) < iVar2 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar9 + 8,iVar2);
        }
        *(longlong *)(*(longlong *)(lVar9 + 8) + (longlong)iVar2 * 8) = param_2;
      }
LAB_14128fcef:
      bVar10 = bVar10 + 1;
      uVar11 = (int)uVar11 >> 1;
    } while (uVar11 != 0);
  }
  return;
}



// FUNCTION 14128fd30 FUN_14128fd30 body=103 status=ok
// SIG undefined FUN_14128fd30(void)

void FUN_14128fd30(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar3 = (longlong *)FUN_14309ec70();
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  iVar2 = FUN_14233f450(param_1);
  if (iVar2 != 3) {
    lVar4 = (**(code **)(*plVar3 + 0x950))(plVar3);
    if (lVar4 == 0) {
      return;
    }
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x950))(plVar3);
    cVar1 = (**(code **)(*plVar3 + 0x778))(plVar3);
    if (cVar1 == '\0') {
      return;
    }
  }
  FUN_1412a8d00(param_1);
  return;
}



// FUNCTION 14128fda0 FUN_14128fda0 body=115 status=ok
// SIG undefined FUN_14128fda0(void)

void FUN_14128fda0(longlong param_1)

{
  uint uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x248) != 0) {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x240) + 4);
    *(uint *)(param_1 + 0x434) = uVar1 & 0x1ffff;
    *(byte *)(param_1 + 0x432) = (byte)((int)uVar1 >> 0x11) & 0x1f;
    *(byte *)(param_1 + 0x431) = (byte)((int)uVar1 >> 0x16) & 0x1f;
    *(byte *)(param_1 + 0x430) = (byte)((int)uVar1 >> 0x1b) & 0x1f;
    iVar2 = FUN_14233f450();
    if (iVar2 < 3) {
      FUN_141291a80(param_1,0,0);
      return;
    }
  }
  return;
}



// FUNCTION 14128fe20 FUN_14128fe20 body=380 status=ok
// SIG undefined FUN_14128fe20(void)

void FUN_14128fe20(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *local_38;
  int local_30;
  
  FUN_142fe5100();
  FUN_141291c20(param_1);
  FUN_1412909f0(param_1);
  lVar3 = FUN_14129ee40(param_1);
  if (lVar3 != 0) {
    uVar8 = 0;
    plVar4 = *(longlong **)(param_1 + 0x3d0);
    uVar5 = (longlong)*(int *)(param_1 + 0x3d8) & 0x1fffffffffffffff;
    if (plVar4 + *(int *)(param_1 + 0x3d8) < plVar4) {
      uVar5 = uVar8;
    }
    if (uVar5 != 0) {
      do {
        plVar10 = (longlong *)*plVar4;
        if (plVar10 != (longlong *)0x0) {
          (**(code **)(*plVar10 + 0x2e0))(plVar10,lVar3);
        }
        plVar4 = plVar4 + 1;
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar5);
    }
  }
  lVar3 = FUN_14129ee40(param_1);
  if ((lVar3 != 0) && (0 < *(int *)(param_1 + 0x2d0))) {
    FUN_1430777d0(lVar3,&local_38);
    plVar10 = *(longlong **)(param_1 + 0x2c8);
    plVar4 = plVar10 + *(int *)(param_1 + 0x2d0);
    plVar7 = local_38;
    for (; plVar10 != plVar4; plVar10 = plVar10 + 1) {
      lVar3 = *plVar10;
      if (lVar3 != 0) {
        plVar1 = plVar7 + local_30;
        for (plVar6 = plVar7; plVar6 != plVar1; plVar6 = plVar6 + 1) {
          lVar2 = *plVar6;
          if (lVar2 != 0) {
            plVar7 = *(longlong **)(lVar3 + 0x38);
            plVar9 = plVar7 + (longlong)*(int *)(lVar3 + 0x40) * 2;
            for (; plVar7 != plVar9; plVar7 = plVar7 + 2) {
              if ((*plVar7 != 0) && (*(char *)((longlong)plVar7 + 9) == '\0')) {
                FUN_142d0eb50(lVar2);
              }
            }
          }
          plVar7 = local_38;
        }
      }
    }
    if (plVar7 != (longlong *)0x0) {
      FMemory::Free(plVar7);
    }
  }
  FUN_1412916a0(param_1);
  return;
}



// FUNCTION 14128ffa0 FUN_14128ffa0 body=2389 status=ok
// SIG undefined FUN_14128ffa0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14128ffa0(longlong param_1)

{
  bool bVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined2 *puVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong *plVar18;
  undefined1 auStack_1b8 [32];
  undefined4 local_198;
  undefined8 local_190;
  undefined1 local_188;
  undefined8 local_180;
  undefined1 local_178;
  int local_168;
  longlong *local_160;
  longlong local_158;
  undefined8 local_150;
  longlong local_148;
  longlong local_140;
  undefined8 local_138;
  longlong local_130;
  longlong local_128;
  longlong *local_120;
  int local_118 [2];
  longlong *local_110;
  int local_108;
  int local_104;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined2 *local_d0;
  int local_c8;
  undefined2 *local_c0;
  int local_b8;
  undefined2 *local_b0;
  int local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong local_88 [4];
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  local_128 = param_1;
  FUN_1412a0e00();
  iVar14 = 0;
  local_120 = &local_158;
  local_158 = 0;
  local_150 = 0;
  local_110 = (longlong *)0x0;
  plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x968) + 0x30);
  local_168 = 0;
  local_104 = 0;
  plVar18 = plVar7 + *(int *)(*(longlong *)(param_1 + 0x968) + 0x38);
  local_160 = plVar18;
  iVar12 = iVar14;
  if (plVar7 != plVar18) {
    do {
      lVar9 = *plVar7;
      if (lVar9 != 0) {
        lVar5 = FUN_1414ece00();
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          uVar17 = *(uint *)(lVar9 + 0x3c);
          plVar18 = local_160;
          for (uVar11 = 0;
              (local_160 = plVar18, uVar17 != 0 && (iVar14 = local_168, (byte)uVar11 < 8));
              uVar11 = (ulonglong)(byte)((byte)uVar11 + 1)) {
            if ((uVar17 & 1) != 0) {
              lVar5 = (longlong)(int)local_150;
              if ((int)local_150 <= (int)uVar11) {
                iVar14 = (int)uVar11 + 1;
                if ((int)local_150 < iVar14) {
                  iVar14 = iVar14 - (int)local_150;
                  iVar4 = (int)local_150 + iVar14;
                  local_150._4_4_ = (int)((ulonglong)local_150 >> 0x20);
                  local_150 = CONCAT44(local_150._4_4_,iVar4);
                  if (local_150._4_4_ < iVar4) {
                    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
                    ::ResizeGrow(&local_158);
                  }
                  _guard_xfg_dispatch_icall_nop
                            ((void *)(lVar5 * 0x20 + local_158),0,(longlong)iVar14 << 5);
                }
                else if (iVar14 < (int)local_150) {
                  TArray<FMeltOperationData,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                            (&local_158,iVar14,(int)local_150 - iVar14);
                }
              }
              *(longlong *)(uVar11 * 0x20 + local_158) = lVar9;
            }
            uVar17 = (int)uVar17 >> 1;
            plVar18 = local_160;
            iVar14 = local_168;
          }
        }
        else {
          lVar5 = UAsyncTaskDownloadImage::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            uVar17 = *(uint *)(lVar9 + 0x3c);
            plVar18 = local_160;
            for (uVar11 = 0;
                (local_160 = plVar18, uVar17 != 0 && (iVar14 = local_168, (byte)uVar11 < 8));
                uVar11 = (ulonglong)(byte)((byte)uVar11 + 1)) {
              if ((uVar17 & 1) != 0) {
                lVar5 = (longlong)(int)local_150;
                if ((int)local_150 <= (int)uVar11) {
                  iVar14 = (int)uVar11 + 1;
                  if ((int)local_150 < iVar14) {
                    iVar14 = iVar14 - (int)local_150;
                    iVar4 = (int)local_150 + iVar14;
                    local_150._4_4_ = (int)((ulonglong)local_150 >> 0x20);
                    local_150 = CONCAT44(local_150._4_4_,iVar4);
                    if (local_150._4_4_ < iVar4) {
                      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
                      ::ResizeGrow(&local_158);
                    }
                    _guard_xfg_dispatch_icall_nop
                              ((void *)(lVar5 * 0x20 + local_158),0,(longlong)iVar14 << 5);
                  }
                  else if (iVar14 < (int)local_150) {
                    TArray<FMeltOperationData,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                              (&local_158,iVar14,(int)local_150 - iVar14);
                  }
                }
                lVar5 = uVar11 * 0x20 + local_158;
                iVar14 = *(int *)(lVar5 + 0x10);
                iVar4 = iVar14 + 1;
                *(int *)(lVar5 + 0x10) = iVar4;
                if (*(int *)(lVar5 + 0x14) < iVar4) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar5 + 8);
                }
                *(longlong *)(*(longlong *)(lVar5 + 8) + (longlong)iVar14 * 8) = lVar9;
              }
              uVar17 = (int)uVar17 >> 1;
              plVar18 = local_160;
              iVar14 = local_168;
            }
          }
          else {
            lVar5 = FUN_1414e8130();
            if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if (bVar1) {
              local_168 = iVar14 + 1;
              local_108 = local_168;
              if (iVar12 < local_168) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_110);
                iVar12 = local_104;
              }
              local_110[iVar14] = lVar9;
              plVar18 = local_160;
              local_168 = local_108;
              iVar14 = local_108;
            }
            else {
              lVar5 = FUN_1414ef930();
              if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
                bVar1 = false;
              }
              else {
                bVar1 = true;
              }
              plVar18 = local_160;
              if (bVar1) {
                lVar5 = FUN_14128cfd0(&local_120);
                *(longlong *)(lVar5 + 0x18) = lVar9;
                plVar18 = local_160;
              }
            }
          }
        }
      }
      plVar7 = plVar7 + 1;
      param_1 = local_128;
    } while (plVar7 != plVar18);
  }
  uVar16 = 0;
  FUN_143089880(param_1);
  local_88[0] = 0;
  local_88[1] = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  uVar11 = uVar16;
  if ((int)local_150 < 1) {
LAB_1412906fe:
    plVar18 = local_110;
    uVar11 = 0;
    uVar16 = (ulonglong)((longlong)(local_110 + local_168) + (7 - (longlong)local_110)) >> 3;
    if (local_110 + local_168 < local_110) {
      uVar16 = 0;
    }
    plVar7 = local_110;
    if (uVar16 != 0) {
      do {
        if ((longlong *)*plVar7 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar7 + 0x2e0))();
        }
        uVar11 = uVar11 + 1;
        plVar7 = plVar7 + 1;
      } while (uVar11 != uVar16);
    }
    lVar9 = local_128;
    if (*(char *)(*(longlong *)(local_128 + 0x968) + 0x140) != '\0') {
      if (*(int *)(local_128 + 0x6b8) < 2) {
        uVar11 = local_128 + 0x6a8;
        iVar14 = *(int *)(local_128 + 0x6b8);
        if (iVar14 < 2) {
          *(undefined4 *)(local_128 + 0x6b8) = 2;
          if (*(int *)(local_128 + 0x6bc) < 2) {
            FUN_140a13660(uVar11);
          }
          uVar16 = *(ulonglong *)(lVar9 + 0x6b0);
          if (*(ulonglong *)(lVar9 + 0x6b0) == 0) {
            uVar16 = uVar11;
          }
          _guard_xfg_dispatch_icall_nop
                    ((void *)(uVar16 + (longlong)iVar14),0,(longlong)(2 - iVar14));
        }
        else if ((2 < iVar14) && (iVar12 = iVar14 + -2, iVar12 != 0)) {
          iVar4 = (iVar14 - iVar12) + -2;
          if (iVar4 != 0) {
            uVar16 = (ulonglong)(*(longlong *)(local_128 + 0x6b0) != 0) - 1 & uVar11 |
                     *(ulonglong *)(local_128 + 0x6b0);
            _guard_xfg_dispatch_icall_nop
                      ((void *)(uVar16 + 2),(void *)((longlong)iVar14 + uVar16),(longlong)iVar4);
            iVar14 = *(int *)(lVar9 + 0x6b8);
          }
          *(int *)(lVar9 + 0x6b8) = iVar14 - iVar12;
          FUN_140a13970(uVar11);
        }
      }
      FUN_14308b9b0(lVar9,1,*(undefined1 *)(*(longlong *)(lVar9 + 0x968) + 0x141));
    }
    lVar5 = *(longlong *)(lVar9 + 0x968);
    if ((lVar5 != 0) && (plVar7 = *(longlong **)(lVar9 + 0x970), plVar7 != (longlong *)0x0)) {
      local_f8 = *(undefined8 *)(lVar5 + 0x48);
      local_f0 = *(undefined4 *)(lVar5 + 0x50);
      (**(code **)(*plVar7 + 0x3f8))(plVar7,&local_f8);
    }
    local_40 = 0;
    if (local_48 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (local_88);
    if (plVar18 != (longlong *)0x0) {
      FMemory::Free(plVar18);
    }
    if ((int)local_150 != 0) {
      plVar18 = (longlong *)(local_158 + 8);
      iVar14 = (int)local_150;
      do {
        if (*plVar18 != 0) {
          FMemory::Free();
        }
        plVar18 = plVar18 + 4;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
    }
    if (local_158 != 0) {
      FMemory::Free();
    }
    return;
  }
LAB_141290180:
  uVar13 = 0;
  plVar18 = (longlong *)(local_158 + uVar16);
  if (*plVar18 != 0) {
    FString::PrintfImpl(&local_d0,L"UM%d_PC",uVar11);
    puVar10 = &DAT_143f3eda8;
    if (local_c8 != 0) {
      puVar10 = local_d0;
    }
    FName::FName(&local_e8,puVar10,1);
    if (local_d0 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    lVar5 = FUN_142227070(param_1,*(undefined8 *)(*plVar18 + 0x48),local_e8);
    local_d8 = lVar5;
    FUN_14234f960(lVar5,*(undefined8 *)(*plVar18 + 0x48));
    FUN_1423511e0(lVar5);
    FUN_14234b150(lVar5);
    lVar9 = local_128;
    local_140 = 0;
    local_138 = 0;
    uVar15 = uVar13;
    if (0 < (int)plVar18[2]) {
      do {
        local_130 = *(longlong *)(plVar18[1] + uVar13);
        if ((*(byte *)(local_130 + 0x38) & 1) != 0) {
          local_148 = 0;
          lVar6 = FUN_1430bf460();
          lVar5 = *(longlong *)(*(longlong *)(local_130 + 0x40) + 0x10);
          if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
              lVar6 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if ((bVar1) || (cVar3 = FUN_141273e70(local_130), cVar3 == '\0')) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
            TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
            ::FindId(local_88,local_118,local_130);
            if (((local_118[0] != -1) &&
                (lVar5 = local_88[0] + (longlong)local_118[0] * 0x18, lVar5 != 0)) &&
               (plVar7 = (longlong *)(lVar5 + 8), plVar7 != (longlong *)0x0)) {
              local_148 = *plVar7;
            }
          }
          if (local_148 == 0) {
            FString::PrintfImpl(&local_c0,L"UM%d_SC%d",uVar11,uVar15);
            puVar10 = &DAT_143f3eda8;
            if (local_b8 != 0) {
              puVar10 = local_c0;
            }
            FName::FName(&local_e0,puVar10,1);
            if (local_c0 != (undefined2 *)0x0) {
              FMemory::Free();
            }
            local_148 = FUN_142227070(lVar9,*(undefined8 *)(local_130 + 0x40),local_e0);
            FUN_14234f960(local_148,*(undefined8 *)(local_130 + 0x40));
            FUN_1423511e0(local_148);
            FUN_14234b150(local_148);
            if (bVar1) {
              local_a0 = &local_130;
              local_98 = &local_148;
              TSet<TTuple<FFlareResourceDescription_*,UFlareSimulatedSpacecraft_*>,TDefaultMapHashableKeyFuncs<FFlareResourceDescription_*,UFlareSimulatedSpacecraft_*,0>,FDefaultSetAllocator>
              ::
              Emplace<TPairInitializer<FFlareResourceDescription_*_const_&,UFlareSimulatedSpacecraft_*_const_&>_>
                        (local_88,&local_160,&local_a0,0);
            }
          }
          uVar2 = local_138;
          lVar5 = (longlong)(int)local_138;
          iVar14 = (int)local_138 + 1;
          local_138 = CONCAT44(local_138._4_4_,iVar14);
          if (local_138._4_4_ < iVar14) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                      (&local_140,uVar2 & 0xffffffff);
          }
          *(longlong *)(local_140 + lVar5 * 8) = local_148;
        }
        uVar17 = (int)uVar15 + 1;
        uVar13 = uVar13 + 8;
        param_1 = local_128;
        uVar15 = (ulonglong)uVar17;
        lVar5 = local_d8;
      } while ((int)uVar17 < (int)plVar18[2]);
    }
    if (plVar18[3] != 0) {
      *(undefined8 *)(lVar5 + 0x188) = *(undefined8 *)(plVar18[3] + 0x40);
      *(undefined8 *)(lVar5 + 400) = *(undefined8 *)(plVar18[3] + 0x48);
    }
    lVar9 = *(longlong *)(param_1 + 0x7e0);
    if (lVar9 != 0) {
      lVar6 = UCircularThrobber::GetPrivateStaticClass();
      do {
        if (lVar9 == lVar6) {
          FString::PrintfImpl(&local_b0,L"DamageModifierComponentMode%u",uVar11);
          lVar9 = *(longlong *)(param_1 + 0x7e0);
          puVar10 = &DAT_143f3eda8;
          if (local_a8 != 0) {
            puVar10 = local_b0;
          }
          if (lVar9 == 0) goto LAB_14129062e;
          lVar8 = UCircularThrobber::GetPrivateStaticClass();
          lVar6 = lVar9;
          goto LAB_141290620;
        }
        lVar9 = *(longlong *)(lVar9 + 0x30);
      } while (lVar9 != 0);
    }
    goto LAB_1412906c4;
  }
  goto LAB_1412906ec;
  while (lVar6 = *(longlong *)(lVar6 + 0x30), lVar6 != 0) {
LAB_141290620:
    if (lVar6 == lVar8) goto LAB_141290630;
  }
LAB_14129062e:
  lVar9 = 0;
LAB_141290630:
  plVar18 = (longlong *)FName::FName(&local_f8,puVar10,1);
  lVar6 = *plVar18;
  local_120 = (longlong *)0x0;
  if (lVar6 == 0) {
    FUN_1417846f0(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  local_178 = 0;
  local_180 = 0;
  local_188 = 0;
  local_190 = 0;
  local_198 = 0;
  lVar9 = FUN_1417985e0(lVar9,param_1,lVar6,0);
  uVar13 = local_138;
  if (lVar9 != 0) {
    lVar6 = (longlong)(int)local_138;
    iVar14 = (int)local_138 + 1;
    local_138 = CONCAT44(local_138._4_4_,iVar14);
    if (local_138._4_4_ < iVar14) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                (&local_140,uVar13 & 0xffffffff);
    }
    *(longlong *)(local_140 + lVar6 * 8) = lVar9;
  }
  if (local_b0 != (undefined2 *)0x0) {
    FMemory::Free();
  }
LAB_1412906c4:
  FUN_14306a460(param_1,lVar5,&local_140);
  if (local_140 != 0) {
    FMemory::Free();
  }
LAB_1412906ec:
  uVar17 = (int)uVar11 + 1;
  uVar16 = uVar16 + 0x20;
  uVar11 = (ulonglong)uVar17;
  if ((int)local_150 <= (int)uVar17) goto LAB_1412906fe;
  goto LAB_141290180;
}



// FUNCTION 141290900 FUN_141290900 body=226 status=ok
// SIG undefined FUN_141290900(void)

void FUN_141290900(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  undefined8 local_res10 [3];
  undefined1 local_28 [32];
  
  FUN_143099c20();
  iVar5 = FUN_14233f450(param_1);
  if ((((iVar5 == 3) && (0.0 < *(float *)(param_1 + 0x300))) && (0.0 < *(float *)(param_1 + 0x304)))
     && (cVar4 = FUN_1407c3030(param_1 + 800), cVar4 == '\0')) {
    plVar6 = (longlong *)FUN_14309ed90(param_1);
    lVar7 = (**(code **)(*plVar6 + 0x828))(plVar6);
    if (lVar7 != 0) {
      local_res10[0] = 0;
      uVar8 = FUN_1412996f0(param_1);
      puVar9 = (undefined4 *)FUN_142d622d0(local_28,local_res10,uVar8,lVar7);
      uVar1 = puVar9[1];
      uVar2 = puVar9[2];
      uVar3 = puVar9[3];
      *(undefined4 *)(param_1 + 0x338) = *puVar9;
      *(undefined4 *)(param_1 + 0x33c) = uVar1;
      *(undefined4 *)(param_1 + 0x340) = uVar2;
      *(undefined4 *)(param_1 + 0x344) = uVar3;
      *(undefined8 *)(param_1 + 0x348) = *(undefined8 *)(puVar9 + 4);
      cVar4 = FUN_142d52a00();
      if (cVar4 != '\0') {
        lVar7 = *(longlong *)(param_1 + 0x120);
        if (lVar7 == 0) {
          lVar7 = FUN_1423407b0(param_1);
        }
        *(undefined4 *)(param_1 + 0x31c) = *(undefined4 *)(lVar7 + 0x790);
      }
    }
  }
  return;
}



// FUNCTION 1412909f0 FUN_1412909f0 body=1274 status=ok
// SIG undefined FUN_1412909f0(void)

void FUN_1412909f0(longlong param_1)

{
  undefined4 *puVar1;
  uint *puVar2;
  float fVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  uint uVar14;
  longlong *plVar15;
  byte bVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong *plVar19;
  longlong *plVar20;
  longlong *plVar21;
  float fVar22;
  byte local_res10;
  uint local_res18 [2];
  longlong local_res20;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  
  lVar10 = FUN_14129ee40();
  if (lVar10 != 0) {
    local_res10 = 0;
    bVar16 = 0;
    do {
      local_res20 = FUN_14307d810(lVar10,local_res10);
      if (local_res20 != 0) {
        lVar11 = AVolume::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(local_res20 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(local_res20 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
          bVar9 = false;
        }
        else {
          bVar9 = true;
        }
        if (bVar9) {
          plVar20 = *(longlong **)(param_1 + 0x3c0);
          plVar12 = plVar20 + *(int *)(param_1 + 0x3c8);
          lVar11 = local_res20;
          for (; plVar20 != plVar12; plVar20 = plVar20 + 1) {
            uVar17 = 0;
            lVar6 = *plVar20;
            if (lVar6 != 0) {
              plVar19 = *(longlong **)(lVar6 + 0x38);
              uVar18 = (longlong)*(int *)(lVar6 + 0x40) & 0x1fffffffffffffff;
              if (plVar19 + *(int *)(lVar6 + 0x40) < plVar19) {
                uVar18 = uVar17;
              }
              if (uVar18 != 0) {
                do {
                  lVar6 = *plVar19;
                  if (lVar6 != 0) {
                    plVar21 = (longlong *)(lVar11 + 0x238);
                    plVar7 = (longlong *)*plVar21;
                    iVar5 = *(int *)(lVar11 + 0x240);
                    for (plVar13 = plVar7; plVar13 != plVar7 + iVar5; plVar13 = plVar13 + 1) {
                      if (*plVar13 == lVar6) {
                        if ((int)((longlong)plVar13 - (longlong)plVar7 >> 3) != -1)
                        goto LAB_141290ba2;
                        break;
                      }
                    }
                    *(int *)(lVar11 + 0x240) = iVar5 + 1;
                    if (*(int *)(lVar11 + 0x244) < iVar5 + 1) {
                      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                                (plVar21,iVar5);
                      lVar11 = local_res20;
                    }
                    *(longlong *)(*plVar21 + (longlong)iVar5 * 8) = lVar6;
                  }
LAB_141290ba2:
                  plVar19 = plVar19 + 1;
                  uVar17 = uVar17 + 1;
                } while (uVar17 != uVar18);
              }
            }
            bVar16 = local_res10;
          }
          plVar20 = *(longlong **)(param_1 + 0x3a0);
          plVar12 = plVar20 + *(int *)(param_1 + 0x3a8);
          if (plVar20 != plVar12) {
            uVar14 = (uint)local_res10;
            local_res18[0] = (uint)local_res10;
            do {
              lVar6 = *plVar20;
              if ((lVar6 != 0) && ((*(uint *)(lVar6 + 0x38) >> (uVar14 & 0x1f) & 1) != 0)) {
                lVar8 = *(longlong *)(lVar6 + 0x60);
                if (lVar8 != 0) {
                  plVar19 = (longlong *)(lVar11 + 0x200);
                  iVar5 = *(int *)(lVar11 + 0x208);
                  *(int *)(lVar11 + 0x208) = iVar5 + 1;
                  if (*(int *)(lVar11 + 0x20c) < iVar5 + 1) {
                    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar19,iVar5);
                    lVar11 = local_res20;
                  }
                  uStack_90 = (undefined4)lVar8;
                  uStack_8c = (undefined4)((ulonglong)lVar8 >> 0x20);
                  puVar1 = (undefined4 *)(*plVar19 + (longlong)iVar5 * 0x10);
                  *puVar1 = 0;
                  puVar1[1] = uStack_94;
                  puVar1[2] = uStack_90;
                  puVar1[3] = uStack_8c;
                }
                uVar18 = 0;
                plVar19 = *(longlong **)(lVar6 + 0x40);
                uVar17 = (longlong)*(int *)(lVar6 + 0x48) & 0x1fffffffffffffff;
                if (plVar19 + *(int *)(lVar6 + 0x48) < plVar19) {
                  uVar17 = uVar18;
                }
                if (uVar17 != 0) {
                  do {
                    lVar8 = *plVar19;
                    if (lVar8 != 0) {
                      bVar4 = *(byte *)(lVar6 + 0x30);
                      plVar21 = (longlong *)(lVar11 + 0x200);
                      iVar5 = *(int *)(lVar11 + 0x208);
                      *(int *)(lVar11 + 0x208) = iVar5 + 1;
                      if (*(int *)(lVar11 + 0x20c) < iVar5 + 1) {
                        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar21,iVar5);
                        lVar11 = local_res20;
                      }
                      uStack_80 = (uint)lVar8;
                      uStack_7c = (uint)((ulonglong)lVar8 >> 0x20);
                      puVar2 = (uint *)(*plVar21 + (longlong)iVar5 * 0x10);
                      *puVar2 = (uint)bVar4;
                      puVar2[1] = uStack_84;
                      puVar2[2] = uStack_80;
                      puVar2[3] = uStack_7c;
                    }
                    plVar19 = plVar19 + 1;
                    uVar18 = uVar18 + 1;
                  } while (uVar18 != uVar17);
                }
                plVar19 = *(longlong **)(lVar6 + 0x50);
                plVar21 = plVar19 + (longlong)*(int *)(lVar6 + 0x58) * 2;
                fVar22 = (float)*(byte *)(lVar6 + 0x30) + 1.0;
                uVar14 = local_res18[0];
                for (; local_res18[0] = uVar14, plVar19 != plVar21; plVar19 = plVar19 + 2) {
                  lVar6 = *plVar19;
                  if (lVar6 != 0) {
                    plVar7 = (longlong *)(lVar11 + 0x210);
                    iVar5 = *(int *)(lVar11 + 0x218);
                    plVar13 = (longlong *)*plVar7;
                    plVar15 = plVar13 + (longlong)iVar5 * 2;
                    for (; plVar13 != plVar15; plVar13 = plVar13 + 2) {
                      if (*plVar13 == lVar6) {
                        *(float *)(plVar13 + 1) =
                             fVar22 * *(float *)(plVar19 + 1) + *(float *)(plVar13 + 1);
                        *(float *)((longlong)plVar13 + 0xc) =
                             fVar22 + *(float *)((longlong)plVar13 + 0xc);
                        goto LAB_141290da9;
                      }
                    }
                    fVar3 = *(float *)(plVar19 + 1);
                    *(int *)(lVar11 + 0x218) = iVar5 + 1;
                    if (*(int *)(lVar11 + 0x21c) < iVar5 + 1) {
                      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar7,iVar5);
                      lVar11 = local_res20;
                    }
                    local_a8 = (undefined4)lVar6;
                    uStack_a4 = (undefined4)((ulonglong)lVar6 >> 0x20);
                    puVar1 = (undefined4 *)(*plVar7 + (longlong)iVar5 * 0x10);
                    *puVar1 = local_a8;
                    puVar1[1] = uStack_a4;
                    puVar1[2] = fVar22 * fVar3;
                    puVar1[3] = fVar22;
                  }
LAB_141290da9:
                  uVar14 = local_res18[0];
                }
              }
              plVar20 = plVar20 + 1;
            } while (plVar20 != plVar12);
          }
          local_res18[0] = local_res18[0] & 0xffffff00;
          AlgoImpl::
          IntroSortInternal<FVillageDistance,FIdentityFunctor,TDereferenceWrapper<FVillageDistance,TLess<FVillageDistance>_>_>
                    (*(undefined8 *)(lVar11 + 0x200),(longlong)*(int *)(lVar11 + 0x208),bVar16,
                     local_res18);
          plVar20 = *(longlong **)(local_res20 + 0x210);
          plVar12 = plVar20 + (longlong)*(int *)(local_res20 + 0x218) * 2;
          for (; plVar20 != plVar12; plVar20 = plVar20 + 2) {
            if ((*plVar20 != 0) && (fVar22 = *(float *)((longlong)plVar20 + 0xc), 0.0001 < fVar22))
            {
              *(undefined4 *)((longlong)plVar20 + 0xc) = 0;
              *(float *)(plVar20 + 1) = *(float *)(plVar20 + 1) / fVar22;
            }
          }
        }
      }
      local_res10 = local_res10 + 1;
    } while (local_res10 < 8);
  }
  return;
}



// FUNCTION 141290ef0 FUN_141290ef0 body=579 status=ok
// SIG undefined FUN_141290ef0(void)

void FUN_141290ef0(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  longlong *plVar7;
  char cVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined1 local_res8 [8];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [8];
  longlong *local_40;
  
  FUN_142fe53a0();
  if ((*(int *)(param_1 + 0x260) != 0) && (param_2 != 0)) {
    lVar10 = FUN_1430b3b80();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
         (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      uVar9 = FUN_14307cf50(param_2);
      lVar14 = *(longlong *)(param_1 + 600);
      lVar10 = lVar14 + (longlong)*(int *)(param_1 + 0x260) * 0x18;
      for (; lVar14 != lVar10; lVar14 = lVar14 + 0x18) {
        if ((uVar9 & *(uint *)(lVar14 + 4)) != 0) {
          *(uint *)(param_2 + 0x6dc) = *(uint *)(lVar14 + 4);
          puVar13 = *(undefined8 **)(lVar14 + 8);
          puVar3 = puVar13 + (longlong)*(int *)(lVar14 + 0x10) * 9;
          for (; puVar13 != puVar3; puVar13 = puVar13 + 9) {
            local_88 = (undefined4)param_2;
            uStack_84 = (undefined4)((ulonglong)param_2 >> 0x20);
            local_68 = local_88;
            uStack_64 = uStack_84;
            uStack_60 = 0;
            uStack_5c = 0;
            cVar8 = FUN_142ca5390(*puVar13,&local_68);
            if (cVar8 != '\0') {
              local_58 = local_88;
              uStack_54 = uStack_84;
              uStack_50 = 0;
              uStack_4c = 0;
              puVar11 = (undefined8 *)FUN_142c901e0(puVar13,local_48,param_2,&local_58,0,local_res8)
              ;
              iVar4 = (int)param_3[1];
              *(int *)(param_3 + 1) = iVar4 + 1;
              if (*(int *)((longlong)param_3 + 0xc) < iVar4 + 1) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar4);
              }
              plVar7 = local_40;
              puVar12 = (undefined8 *)((longlong)iVar4 * 0x10 + *param_3);
              *puVar12 = *puVar11;
              puVar12[1] = puVar11[1];
              puVar11[1] = 0;
              *puVar11 = 0;
              if (local_40 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_40 + 1;
                lVar6 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar6 == 1) {
                  (**(code **)*local_40)(local_40);
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
            }
          }
        }
      }
      *(undefined4 *)(param_2 + 0x6dc) = 0;
    }
  }
  return;
}



// FUNCTION 141291140 FUN_141291140 body=486 status=ok
// SIG undefined FUN_141291140(void)

void FUN_141291140(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  char cVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [8];
  longlong *local_40;
  
  uVar9 = FUN_14307cf50();
  lVar13 = *param_2;
  lVar3 = lVar13 + (longlong)(int)param_2[1] * 0x18;
  for (; lVar13 != lVar3; lVar13 = lVar13 + 0x18) {
    if ((uVar9 & *(uint *)(lVar13 + 4)) != 0) {
      *(uint *)(param_1 + 0x6dc) = *(uint *)(lVar13 + 4);
      puVar12 = *(undefined8 **)(lVar13 + 8);
      puVar4 = puVar12 + (longlong)*(int *)(lVar13 + 0x10) * 9;
      for (; puVar12 != puVar4; puVar12 = puVar12 + 9) {
        local_88 = (undefined4)param_1;
        uStack_84 = (undefined4)((ulonglong)param_1 >> 0x20);
        local_68 = local_88;
        uStack_64 = uStack_84;
        uStack_60 = 0;
        uStack_5c = 0;
        cVar8 = FUN_142ca5390(*puVar12,&local_68);
        if (cVar8 != '\0') {
          local_58 = local_88;
          uStack_54 = uStack_84;
          uStack_50 = 0;
          uStack_4c = 0;
          puVar10 = (undefined8 *)FUN_142c901e0(puVar12,local_48,param_1,&local_58,0,param_4);
          iVar5 = (int)param_3[1];
          *(int *)(param_3 + 1) = iVar5 + 1;
          if (*(int *)((longlong)param_3 + 0xc) < iVar5 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar5);
          }
          plVar7 = local_40;
          puVar11 = (undefined8 *)((longlong)iVar5 * 0x10 + *param_3);
          *puVar11 = *puVar10;
          puVar11[1] = puVar10[1];
          puVar10[1] = 0;
          *puVar10 = 0;
          if (local_40 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_40 + 1;
            lVar6 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*local_40)(local_40);
              LOCK();
              piVar2 = (int *)((longlong)plVar7 + 0xc);
              iVar5 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*plVar7 + 8))(plVar7,1);
              }
            }
          }
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0x6dc) = 0;
  return;
}



// FUNCTION 141291330 FUN_141291330 body=591 status=ok
// SIG undefined FUN_141291330(void)

void FUN_141291330(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  uint uVar8;
  
  plVar1 = *(longlong **)(param_1 + 0x118);
  if (plVar1 != (longlong *)0x0) {
    lVar4 = FUN_1430b3b80();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      iVar3 = FUN_1430772b0(plVar1,0);
      uVar8 = 0;
      if (0 < iVar3) {
        do {
          lVar4 = (**(code **)(*plVar1 + 0x900))(plVar1,0,uVar8 & 0xff);
          if (lVar4 != 0) {
            lVar5 = FUN_142a07000();
            if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              plVar7 = *(longlong **)(param_1 + 0x2b8);
              plVar6 = plVar7 + (longlong)*(int *)(param_1 + 0x2c0) * 4;
              for (; plVar7 != plVar6; plVar7 = plVar7 + 4) {
                if ((*plVar7 == 0) || (*plVar7 == *(longlong *)(lVar4 + 0x18))) {
                  FUN_142fe6010(param_1,lVar4,plVar7,param_2);
                }
              }
              FUN_141291a80(param_1,lVar4,0);
            }
          }
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < iVar3);
      }
      iVar3 = FUN_1430772b0(plVar1,1);
      uVar8 = 0;
      if (0 < iVar3) {
        do {
          lVar4 = (**(code **)(*plVar1 + 0x900))(plVar1,1,uVar8 & 0xff);
          if (lVar4 != 0) {
            lVar5 = FUN_142a07000();
            if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              plVar7 = *(longlong **)(param_1 + 0x2b8);
              plVar6 = plVar7 + (longlong)*(int *)(param_1 + 0x2c0) * 4;
              for (; plVar7 != plVar6; plVar7 = plVar7 + 4) {
                if ((*plVar7 == 0) || (*plVar7 == *(longlong *)(lVar4 + 0x18))) {
                  FUN_142fe6010(param_1,lVar4,plVar7,param_2);
                }
              }
              FUN_141291a80(param_1,lVar4,0);
            }
          }
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < iVar3);
      }
    }
  }
  return;
}



// FUNCTION 141291580 FUN_141291580 body=279 status=ok
// SIG undefined FUN_141291580(void)

void FUN_141291580(longlong param_1,longlong param_2,undefined8 param_3)

{
  bool bVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  FUN_142fe5b00();
  if ((*(int *)(param_1 + 0x260) != 0) && (param_2 != 0)) {
    lVar3 = FUN_1430b3b80();
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
      uVar2 = FUN_14307cf50(param_2);
      lVar4 = *(longlong *)(param_1 + 600);
      lVar3 = lVar4 + (longlong)*(int *)(param_1 + 0x260) * 0x18;
      for (; lVar4 != lVar3; lVar4 = lVar4 + 0x18) {
        if ((uVar2 & *(uint *)(lVar4 + 4)) != 0) {
          *(uint *)(param_2 + 0x6dc) = *(uint *)(lVar4 + 4);
          local_38 = (undefined4)param_2;
          uStack_34 = (undefined4)((ulonglong)param_2 >> 0x20);
          local_28 = local_38;
          uStack_24 = uStack_34;
          uStack_20 = 0;
          uStack_1c = 0;
          FUN_142c90ad0(lVar4 + 8,param_3,param_2,&local_28,0,local_res8);
        }
      }
      *(undefined4 *)(param_2 + 0x6dc) = 0;
    }
  }
  return;
}



// FUNCTION 1412916a0 FUN_1412916a0 body=483 status=ok
// SIG undefined FUN_1412916a0(void)

void FUN_1412916a0(longlong param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int iVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  undefined4 local_res10;
  int local_res14;
  
  iVar3 = FUN_14233f450();
  if ((iVar3 == 3) && (*(int *)(param_1 + 0x248) == 0)) {
    lVar4 = *(longlong *)(param_1 + 0x3e0);
    if (lVar4 == 0) {
      *(undefined2 *)(param_1 + 0x430) = 0;
      uVar2 = 0;
    }
    else {
      fVar5 = (float)FUN_1412701a0(lVar4,*(undefined8 *)(param_1 + 0x118),lVar4 + 0x38);
      fVar5 = fVar5 * 31.0;
      if (0.0 <= fVar5) {
        if (31.0 <= fVar5) {
          fVar5 = 31.0;
        }
      }
      else {
        fVar5 = 0.0;
      }
      *(char *)(param_1 + 0x430) = (char)((int)ROUND(fVar5 + fVar5 + 0.5) >> 1);
      fVar5 = (float)FUN_1412701a0(*(longlong *)(param_1 + 0x3e0),*(undefined8 *)(param_1 + 0x118),
                                   *(longlong *)(param_1 + 0x3e0) + 0x48);
      fVar5 = fVar5 * 31.0;
      if (0.0 <= fVar5) {
        if (31.0 <= fVar5) {
          fVar5 = 31.0;
        }
      }
      else {
        fVar5 = 0.0;
      }
      *(char *)(param_1 + 0x431) = (char)((int)ROUND(fVar5 + fVar5 + 0.5) >> 1);
      fVar6 = (float)FUN_1412701a0(*(longlong *)(param_1 + 0x3e0),*(undefined8 *)(param_1 + 0x118),
                                   *(longlong *)(param_1 + 0x3e0) + 0x58);
      fVar6 = fVar6 * 31.0;
      fVar5 = 0.0;
      if ((0.0 <= fVar6) && (fVar5 = fVar6, 31.0 <= fVar6)) {
        fVar5 = 31.0;
      }
      uVar2 = (undefined1)((int)ROUND(fVar5 + fVar5 + 0.5) >> 1);
    }
    *(undefined1 *)(param_1 + 0x432) = uVar2;
    lVar4 = 0;
    local_res10 = 1;
    local_res14 = (((uint)*(byte *)(param_1 + 0x430) * 0x20 + (uint)*(byte *)(param_1 + 0x431)) *
                   0x20 + (uint)*(byte *)(param_1 + 0x432)) * 0x20000 + *(int *)(param_1 + 0x434);
    *(undefined4 *)(param_1 + 0x248) = 0;
    if (*(int *)(param_1 + 0x24c) != 8) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 0x240,8);
    }
    do {
      iVar3 = *(int *)(param_1 + 0x248);
      *(int *)(param_1 + 0x248) = iVar3 + 1;
      if (*(int *)(param_1 + 0x24c) < iVar3 + 1) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 0x240,iVar3);
      }
      puVar1 = (undefined1 *)((longlong)&local_res10 + lVar4);
      lVar4 = lVar4 + 1;
      *(undefined1 *)((longlong)iVar3 + *(longlong *)(param_1 + 0x240)) = *puVar1;
    } while (lVar4 < 8);
  }
  return;
}



// FUNCTION 141291890 FUN_141291890 body=496 status=ok
// SIG undefined FUN_141291890(void)

void FUN_141291890(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar1 + 0x38) < DAT_1468781d8) &&
     (_Init_thread_header(&DAT_1468781d8), DAT_1468781d8 == -1)) {
    FName::FName(&DAT_1468781d0,L"Dirt_Amount",1);
    _Init_thread_footer(&DAT_1468781d8);
  }
  if ((*(int *)(lVar1 + 0x38) < DAT_1468781e8) &&
     (_Init_thread_header(&DAT_1468781e8), DAT_1468781e8 == -1)) {
    FName::FName(&DAT_1468781e0,L"Rust_Amount",1);
    _Init_thread_footer(&DAT_1468781e8);
  }
  if ((*(int *)(lVar1 + 0x38) < DAT_1468781f8) &&
     (_Init_thread_header(&DAT_1468781f8), DAT_1468781f8 == -1)) {
    FName::FName(&DAT_1468781f0,L"Wear_Amount",1);
    _Init_thread_footer(&DAT_1468781f8);
  }
  FUN_1425a2750(param_2,DAT_1468781d0);
  FUN_1425a2750(param_2,DAT_1468781e0);
  FUN_1425a2750(param_2,DAT_1468781f0);
  return;
}



// FUNCTION 141291a80 FUN_141291a80 body=219 status=ok
// SIG undefined FUN_141291a80(void)

void FUN_141291a80(longlong param_1,longlong *param_2,undefined4 param_3)

{
  longlong *plVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_2 == (longlong *)0x0) {
    plVar1 = *(longlong **)(param_1 + 0x118);
    uVar3 = FUN_1429bed90();
    param_2 = (longlong *)(**(code **)(*plVar1 + 0x628))(plVar1,uVar3);
    if (param_2 == (longlong *)0x0) {
      return;
    }
  }
  lVar4 = (**(code **)(*param_2 + 0x560))(param_2,param_3);
  if (lVar4 != 0) {
    lVar5 = FUN_1429ba110();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_141291b3b;
  }
  lVar4 = (**(code **)(*param_2 + 0x5a8))(param_2,param_3,0,0);
  if (lVar4 == 0) {
    return;
  }
LAB_141291b3b:
  FUN_141291890(param_1,lVar4);
  return;
}



// FUNCTION 141291b70 FUN_141291b70 body=173 status=ok
// SIG undefined FUN_141291b70(void)

void FUN_141291b70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 local_res18;
  undefined8 local_res20;
  undefined **local_50;
  undefined8 *local_48;
  undefined8 *puStack_40;
  undefined8 *local_38;
  undefined ***local_18;
  
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_14260f0c0(param_2,DAT_146878060);
  local_48 = &local_res18;
  puStack_40 = &local_res20;
  local_38 = &param_5;
  local_50 = &PTR_LAB_14475bce8;
  local_18 = &local_50;
  FUN_141297010(param_2,&local_50);
  return;
}



// FUNCTION 141291c20 FUN_141291c20 body=1378 status=ok
// SIG undefined FUN_141291c20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141291c20(longlong param_1)

{
  bool bVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined2 *puVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  longlong *plVar16;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined8 local_150;
  undefined1 local_148;
  undefined8 local_140;
  undefined1 local_138;
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  longlong local_110;
  int local_108 [2];
  undefined8 local_100;
  longlong local_f8;
  undefined1 local_f0 [8];
  undefined8 local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined2 *local_d0;
  int local_c8;
  undefined2 *local_c0;
  int local_b8;
  undefined2 *local_b0;
  int local_a8;
  longlong *local_a0;
  longlong *local_98;
  undefined1 local_90 [8];
  longlong local_88 [4];
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  if ((*(int *)(param_1 + 0x398) != 0) && (lVar5 = FUN_14129ee40(), lVar5 != 0)) {
    local_d8 = lVar5;
    FUN_143089880(lVar5);
    iVar15 = 0;
    local_58 = 0xffffffff;
    local_88[0] = 0;
    local_88[1] = 0;
    local_68 = 0;
    local_60 = 0;
    local_54 = 0;
    local_48 = 0;
    local_40 = 0;
    if (0 < *(int *)(param_1 + 0x398)) {
      local_f8 = 0;
LAB_141291ce0:
      uVar12 = 0;
      plVar16 = (longlong *)(local_f8 + *(longlong *)(param_1 + 0x390));
      if (*plVar16 != 0) {
        FString::PrintfImpl(&local_d0,L"UM%d_PC",iVar15);
        puVar11 = &DAT_143f3eda8;
        if (local_c8 != 0) {
          puVar11 = local_d0;
        }
        FName::FName(&local_e8,puVar11,1);
        if (local_d0 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        plVar6 = (longlong *)
                 FUN_142227070(*(undefined8 *)(param_1 + 0x118),*(undefined8 *)(*plVar16 + 0x48),
                               local_e8);
        FUN_14234f960(plVar6,*(undefined8 *)(*plVar16 + 0x48));
        FUN_1423511e0(plVar6);
        FUN_14234b150(plVar6);
        local_120 = 0;
        local_118 = 0;
        uVar14 = uVar12;
        if (0 < (int)plVar16[2]) {
          do {
            local_110 = *(longlong *)(uVar12 + plVar16[1]);
            if ((*(byte *)(local_110 + 0x38) & 1) != 0) {
              local_128 = 0;
              lVar7 = FUN_1430bf460();
              lVar5 = *(longlong *)(*(longlong *)(local_110 + 0x40) + 0x10);
              if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar7 + 0x90)) ||
                 (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
                  != lVar7 + 0x88)) {
                bVar1 = false;
              }
              else {
                bVar1 = true;
              }
              if ((bVar1) || (cVar3 = FUN_141273e70(local_110), cVar3 == '\0')) {
                bVar1 = false;
              }
              else {
                bVar1 = true;
                TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
                ::FindId(local_88,local_108,local_110);
                if (((local_108[0] != -1) &&
                    (lVar5 = local_88[0] + (longlong)local_108[0] * 0x18, lVar5 != 0)) &&
                   (plVar8 = (longlong *)(lVar5 + 8), plVar8 != (longlong *)0x0)) {
                  local_128 = *plVar8;
                }
              }
              if (local_128 == 0) {
                FString::PrintfImpl(&local_c0,L"UM%d_SC%d",iVar15,uVar14);
                puVar11 = &DAT_143f3eda8;
                if (local_b8 != 0) {
                  puVar11 = local_c0;
                }
                FName::FName(&local_e0,puVar11,1);
                if (local_c0 != (undefined2 *)0x0) {
                  FMemory::Free();
                }
                local_128 = FUN_142227070(*(undefined8 *)(param_1 + 0x118),
                                          *(undefined8 *)(local_110 + 0x40),local_e0);
                FUN_14234f960(local_128,*(undefined8 *)(local_110 + 0x40));
                FUN_1423511e0(local_128);
                FUN_14234b150(local_128);
                if (bVar1) {
                  local_a0 = &local_110;
                  local_98 = &local_128;
                  TSet<TTuple<FFlareResourceDescription_*,UFlareSimulatedSpacecraft_*>,TDefaultMapHashableKeyFuncs<FFlareResourceDescription_*,UFlareSimulatedSpacecraft_*,0>,FDefaultSetAllocator>
                  ::
                  Emplace<TPairInitializer<FFlareResourceDescription_*_const_&,UFlareSimulatedSpacecraft_*_const_&>_>
                            (local_88,local_f0,&local_a0,0);
                }
              }
              uVar2 = local_118;
              lVar5 = (longlong)(int)local_118;
              iVar4 = (int)local_118 + 1;
              local_118 = CONCAT44(local_118._4_4_,iVar4);
              if (local_118._4_4_ < iVar4) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                          (&local_120,uVar2 & 0xffffffff);
              }
              *(longlong *)(local_120 + lVar5 * 8) = local_128;
            }
            uVar13 = (int)uVar14 + 1;
            uVar12 = uVar12 + 8;
            lVar5 = local_d8;
            uVar14 = (ulonglong)uVar13;
          } while ((int)uVar13 < (int)plVar16[2]);
        }
        lVar7 = 0;
        cVar3 = (**(code **)(*plVar6 + 0x4b8))(plVar6);
        if ((cVar3 != '\0') && (lVar7 = 0, plVar16[4] != 0)) {
          lVar7 = 1;
        }
        lVar7 = plVar16[lVar7 + 3];
        if (lVar7 != 0) {
          lVar10 = *(longlong *)(lVar7 + 0x40);
          if (lVar10 != 0) {
            lVar9 = FUN_142e49950();
            do {
              if (lVar10 == lVar9) {
                (**(code **)(*plVar6 + 0x4d8))(plVar6,*(undefined8 *)(lVar7 + 0x40));
                break;
              }
              lVar10 = *(longlong *)(lVar10 + 0x30);
            } while (lVar10 != 0);
          }
          if (*(longlong *)(lVar7 + 0x48) != 0) {
            (**(code **)(*plVar6 + 0x4e0))(plVar6);
          }
        }
        if (plVar16[6] != 0) {
          plVar6[0x31] = *(longlong *)(plVar16[6] + 0x40);
          plVar6[0x32] = *(longlong *)(plVar16[6] + 0x48);
        }
        lVar7 = *(longlong *)(lVar5 + 0x7e0);
        if (lVar7 != 0) {
          lVar10 = UCircularThrobber::GetPrivateStaticClass();
          do {
            if (lVar7 == lVar10) {
              FString::PrintfImpl(&local_b0,L"DamageModifierComponentMode%u",iVar15);
              lVar7 = *(longlong *)(lVar5 + 0x7e0);
              puVar11 = &DAT_143f3eda8;
              if (local_a8 != 0) {
                puVar11 = local_b0;
              }
              if (lVar7 == 0) goto LAB_14129203e;
              lVar9 = UCircularThrobber::GetPrivateStaticClass();
              lVar10 = lVar7;
              goto LAB_141292030;
            }
            lVar7 = *(longlong *)(lVar7 + 0x30);
          } while (lVar7 != 0);
        }
        goto LAB_1412920d8;
      }
      goto LAB_141292105;
    }
LAB_14129213d:
    local_40 = 0;
    if (local_48 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (local_88);
  }
  return;
  while (lVar10 = *(longlong *)(lVar10 + 0x30), lVar10 != 0) {
LAB_141292030:
    if (lVar10 == lVar9) goto LAB_141292040;
  }
LAB_14129203e:
  lVar7 = 0;
LAB_141292040:
  plVar16 = (longlong *)FName::FName(local_90,puVar11,1);
  lVar10 = *plVar16;
  local_100 = 0;
  if (lVar10 == 0) {
    FUN_1417846f0(lVar5,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  local_138 = 0;
  local_140 = 0;
  local_148 = 0;
  local_150 = 0;
  local_158 = 0;
  lVar7 = FUN_1417985e0(lVar7,lVar5,lVar10,0);
  uVar12 = local_118;
  if (lVar7 != 0) {
    lVar10 = (longlong)(int)local_118;
    iVar4 = (int)local_118 + 1;
    local_118 = CONCAT44(local_118._4_4_,iVar4);
    if (local_118._4_4_ < iVar4) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                (&local_120,uVar12 & 0xffffffff);
    }
    *(longlong *)(local_120 + lVar10 * 8) = lVar7;
  }
  if (local_b0 != (undefined2 *)0x0) {
    FMemory::Free();
  }
LAB_1412920d8:
  FUN_14306a460(lVar5,plVar6,&local_120);
  if (local_120 != 0) {
    FMemory::Free();
  }
LAB_141292105:
  iVar15 = iVar15 + 1;
  local_f8 = local_f8 + 0x38;
  if (*(int *)(param_1 + 0x398) <= iVar15) goto LAB_14129213d;
  goto LAB_141291ce0;
}



// FUNCTION 141292190 FUN_141292190 body=123 status=ok
// SIG undefined FUN_141292190(void)

void FUN_141292190(longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_14129ab90();
  if (lVar2 != 0) {
    if (param_2 != 0) {
      FUN_142d26ae0(lVar2,param_2);
      FUN_141291330(param_1,1);
    }
    if (param_3 != 0) {
      uVar1 = FUN_140b5d470(param_3,param_1);
      FUN_142d271f0(lVar2,*(undefined8 *)(param_1 + 0x3f8),uVar1);
    }
  }
  return;
}



// FUNCTION 141292210 FUN_141292210 body=183 status=ok
// SIG undefined FUN_141292210(void)

void FUN_141292210(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uVar2 = FUN_14307cf50();
  lVar3 = *param_2;
  lVar1 = lVar3 + (longlong)(int)param_2[1] * 0x18;
  for (; lVar3 != lVar1; lVar3 = lVar3 + 0x18) {
    if ((uVar2 & *(uint *)(lVar3 + 4)) != 0) {
      *(uint *)(param_1 + 0x6dc) = *(uint *)(lVar3 + 4);
      local_38 = (undefined4)param_1;
      uStack_34 = (undefined4)((ulonglong)param_1 >> 0x20);
      local_28 = local_38;
      uStack_24 = uStack_34;
      uStack_20 = 0;
      uStack_1c = 0;
      FUN_142c90ad0(lVar3 + 8,param_3,param_1,&local_28,0,param_4);
    }
  }
  *(undefined4 *)(param_1 + 0x6dc) = 0;
  return;
}



// FUNCTION 1412922d0 FUN_1412922d0 body=416 status=ok
// SIG undefined FUN_1412922d0(void)

void FUN_1412922d0(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong local_38 [3];
  undefined4 local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  lVar4 = FUN_141796280(param_1 + 0xa0);
  if (lVar4 == 0) {
    *(undefined4 *)(param_1 + 0x100) = *param_2;
    *(undefined4 *)(param_1 + 0x104) = param_2[1];
    *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_2 + 2);
    lVar4 = FUN_1422ca050();
    local_38[1] = 0x20;
    local_38[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
    FGenericPlatformString::Memcpy(local_38[0],L"RequestAsyncLoad SingleDelegate",0x40);
    local_38[2] = 0;
    local_20 = 0;
    puVar5 = (undefined8 *)operator_new(0x28,local_38 + 2);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &PTR_FUN_143f4d170;
      FWeakObjectPtr::operator=(puVar5 + 1,param_1);
      puVar5[2] = FUN_1412a4840;
      uVar6 = FDelegateHandle::GenerateNewID();
      puVar5[4] = uVar6;
      *puVar5 = &PTR_FUN_143f4d1b8;
    }
    FStreamableManager::RequestAsyncLoad
              (lVar4 + 0x178,local_18,param_1 + 0xa0,local_38 + 2,0,0,0,local_38);
    if (local_38[0] != 0) {
      FMemory::Free();
    }
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
          return;
        }
      }
    }
  }
  else {
    FUN_140757f80(param_2,param_1);
  }
  return;
}



// FUNCTION 141292470 FUN_141292470 body=349 status=ok
// SIG undefined FUN_141292470(void)

void FUN_141292470(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_38 [3];
  undefined4 local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  lVar4 = FUN_141796280(param_1 + 0xa0);
  if (lVar4 == 0) {
    lVar4 = FUN_1422ca050();
    local_38[1] = 0x20;
    local_38[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
    FGenericPlatformString::Memcpy(local_38[0],L"RequestAsyncLoad SingleDelegate",0x40);
    local_38[2] = 0;
    local_20 = 0;
    if (((param_2 != local_38 + 2) && ((int)param_2[1] != 0)) &&
       (plVar5 = (longlong *)*param_2, plVar5 != (longlong *)0x0)) {
      (**(code **)(*plVar5 + 0x30))(plVar5,local_38 + 2);
    }
    FStreamableManager::RequestAsyncLoad
              (lVar4 + 0x178,local_18,param_1 + 0xa0,local_38 + 2,0,0,0,local_38);
    if (local_38[0] != 0) {
      FMemory::Free();
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
  }
  else if (((int)param_2[1] != 0) && ((longlong *)*param_2 != (longlong *)0x0)) {
    cVar3 = (**(code **)(*(longlong *)*param_2 + 0x18))();
    if (cVar3 != '\0') {
      if ((int)param_2[1] == 0) {
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = (longlong *)*param_2;
      }
      (**(code **)(*plVar5 + 0x40))(plVar5);
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2);
  return;
}



// FUNCTION 1412925d0 FUN_1412925d0 body=416 status=ok
// SIG undefined FUN_1412925d0(void)

void FUN_1412925d0(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong local_38 [3];
  undefined4 local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  lVar4 = FUN_141796df0(param_1 + 0x88);
  if (lVar4 == 0) {
    *(undefined4 *)(param_1 + 0x110) = *param_2;
    *(undefined4 *)(param_1 + 0x114) = param_2[1];
    *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(param_2 + 2);
    lVar4 = FUN_1422ca050();
    local_38[1] = 0x20;
    local_38[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
    FGenericPlatformString::Memcpy(local_38[0],L"RequestAsyncLoad SingleDelegate",0x40);
    local_38[2] = 0;
    local_20 = 0;
    puVar5 = (undefined8 *)operator_new(0x28,local_38 + 2);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &PTR_FUN_143f4d170;
      FWeakObjectPtr::operator=(puVar5 + 1,param_1);
      puVar5[2] = FUN_1412a4880;
      uVar6 = FDelegateHandle::GenerateNewID();
      puVar5[4] = uVar6;
      *puVar5 = &PTR_FUN_143f4d1b8;
    }
    FStreamableManager::RequestAsyncLoad
              (lVar4 + 0x178,local_18,param_1 + 0x88,local_38 + 2,0,0,0,local_38);
    if (local_38[0] != 0) {
      FMemory::Free();
    }
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
          return;
        }
      }
    }
  }
  else {
    FUN_140757f80(param_2,param_1);
  }
  return;
}



// FUNCTION 141292770 FUN_141292770 body=764 status=ok
// SIG undefined FUN_141292770(void)

void FUN_141292770(longlong param_1,undefined4 *param_2)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  bool bVar12;
  undefined8 *local_78;
  undefined8 local_70;
  longlong local_68 [3];
  undefined4 local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  
  lVar5 = FUN_141796df0();
  bVar12 = lVar5 != 0;
  uVar9 = 0;
  if ((lVar5 != 0) && (0 < *(int *)(param_1 + 0x200))) {
    plVar8 = *(longlong **)(param_1 + 0x1f8);
    uVar11 = (longlong)*(int *)(param_1 + 0x200) & 0x1fffffffffffffff;
    if (plVar8 + *(int *)(param_1 + 0x200) < plVar8) {
      uVar11 = uVar9;
    }
    if (uVar11 != 0) {
      do {
        if ((*plVar8 != 0) && (*(longlong *)(*plVar8 + 0x38) != 0)) {
          lVar5 = FUN_141796df0();
          bVar12 = (bool)(bVar12 & lVar5 != 0);
        }
        plVar8 = plVar8 + 1;
        uVar9 = uVar9 + 1;
      } while (uVar9 != uVar11);
    }
  }
  if (bVar12) {
    FUN_140757f80(param_2,param_1);
  }
  else {
    *(undefined4 *)(param_1 + 0x208) = *param_2;
    *(undefined4 *)(param_1 + 0x20c) = param_2[1];
    *(undefined8 *)(param_1 + 0x210) = *(undefined8 *)(param_2 + 2);
    lVar5 = FUN_1422ca050();
    local_70 = 1;
    local_78 = (undefined8 *)0x0;
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (&local_78,0);
    *local_78 = *(undefined8 *)(param_1 + 0xc0);
    FString::FString(local_78 + 1,param_1 + 200);
    uVar11 = 0;
    plVar8 = *(longlong **)(param_1 + 0x1f8);
    uVar9 = (longlong)*(int *)(param_1 + 0x200) & 0x1fffffffffffffff;
    if (plVar8 + *(int *)(param_1 + 0x200) < plVar8) {
      uVar9 = uVar11;
    }
    if (uVar9 != 0) {
      do {
        uVar3 = local_70;
        lVar2 = *plVar8;
        if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x38) != 0)) {
          lVar10 = (longlong)(int)local_70;
          iVar4 = (int)local_70 + 1;
          local_70 = CONCAT44(local_70._4_4_,iVar4);
          if (local_70._4_4_ < iVar4) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
            ResizeGrow(&local_78,uVar3 & 0xffffffff);
          }
          local_78[lVar10 * 3] = *(undefined8 *)(lVar2 + 0x38);
          FString::FString(local_78 + lVar10 * 3 + 1,lVar2 + 0x40);
        }
        plVar8 = plVar8 + 1;
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar9);
    }
    local_68[0] = 0;
    local_68[1] = 0x1f;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68,0);
    FGenericPlatformString::Memcpy(local_68[0],L"RequestAsyncLoad ArrayDelegate",0x3e);
    local_68[2] = 0;
    local_50 = 0;
    puVar6 = (undefined8 *)operator_new(0x28,local_68 + 2);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &PTR_FUN_143f4d170;
      FWeakObjectPtr::operator=(puVar6 + 1,param_1);
      puVar6[2] = FUN_1412a5eb0;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[4] = uVar7;
      *puVar6 = &PTR_FUN_143f4d1b8;
    }
    FUN_142840b00(lVar5 + 0x178,local_48,&local_78,local_68 + 2,0,0,0,local_68);
    if (local_68[0] != 0) {
      FMemory::Free();
    }
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_40 + 1;
      lVar5 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
    if ((int)local_70 != 0) {
      plVar8 = local_78 + 1;
      iVar4 = (int)local_70;
      do {
        if (*plVar8 != 0) {
          FMemory::Free();
        }
        plVar8 = plVar8 + 3;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    if (local_78 != (undefined8 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 141292a70 FUN_141292a70 body=722 status=ok
// SIG undefined FUN_141292a70(void)

void FUN_141292a70(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  bool bVar12;
  undefined8 *local_68;
  undefined8 local_60;
  longlong local_58 [3];
  undefined4 local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  lVar6 = FUN_141796df0(param_1 + 0xc0);
  bVar12 = lVar6 != 0;
  plVar11 = (longlong *)0x0;
  if ((lVar6 != 0) && (0 < *(int *)(param_1 + 0x200))) {
    plVar8 = *(longlong **)(param_1 + 0x1f8);
    plVar10 = (longlong *)((longlong)*(int *)(param_1 + 0x200) & 0x1fffffffffffffff);
    if (plVar8 + *(int *)(param_1 + 0x200) < plVar8) {
      plVar10 = plVar11;
    }
    plVar7 = plVar11;
    if (plVar10 != (longlong *)0x0) {
      do {
        if ((*plVar8 != 0) && (*(longlong *)(*plVar8 + 0x38) != 0)) {
          lVar6 = FUN_141796df0();
          bVar12 = (bool)(bVar12 & lVar6 != 0);
        }
        plVar8 = plVar8 + 1;
        plVar7 = (longlong *)((longlong)plVar7 + 1);
      } while (plVar7 != plVar10);
    }
  }
  if (bVar12) {
    if ((((int)param_2[1] != 0) && ((longlong *)*param_2 != (longlong *)0x0)) &&
       (cVar4 = (**(code **)(*(longlong *)*param_2 + 0x18))(), cVar4 != '\0')) {
      if ((int)param_2[1] != 0) {
        plVar11 = (longlong *)*param_2;
      }
      (**(code **)(*plVar11 + 0x40))(plVar11);
    }
  }
  else {
    lVar6 = FUN_1422ca050();
    local_68 = (undefined8 *)0x0;
    local_60 = 1;
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (&local_68,0);
    *local_68 = *(undefined8 *)(param_1 + 0xc0);
    FString::FString(local_68 + 1,param_1 + 200);
    plVar8 = *(longlong **)(param_1 + 0x1f8);
    plVar10 = (longlong *)((longlong)*(int *)(param_1 + 0x200) & 0x1fffffffffffffff);
    if (plVar8 + *(int *)(param_1 + 0x200) < plVar8) {
      plVar10 = plVar11;
    }
    if (plVar10 != (longlong *)0x0) {
      do {
        uVar3 = local_60;
        lVar2 = *plVar8;
        if (lVar2 != 0) {
          lVar9 = (longlong)(int)local_60;
          iVar5 = (int)local_60 + 1;
          local_60 = CONCAT44(local_60._4_4_,iVar5);
          if (local_60._4_4_ < iVar5) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
            ResizeGrow(&local_68,uVar3 & 0xffffffff);
          }
          local_68[lVar9 * 3] = *(undefined8 *)(lVar2 + 0x38);
          FString::FString(local_68 + lVar9 * 3 + 1,lVar2 + 0x40);
        }
        plVar8 = plVar8 + 1;
        plVar11 = (longlong *)((longlong)plVar11 + 1);
      } while (plVar11 != plVar10);
    }
    local_58[0] = 0;
    local_58[1] = 0x1f;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
    FGenericPlatformString::Memcpy(local_58[0],L"RequestAsyncLoad ArrayDelegate",0x3e);
    local_58[2] = 0;
    local_40 = 0;
    if (((param_2 != local_58 + 2) && ((int)param_2[1] != 0)) &&
       (plVar11 = (longlong *)*param_2, plVar11 != (longlong *)0x0)) {
      (**(code **)(*plVar11 + 0x30))(plVar11,local_58 + 2);
    }
    FUN_142840b00(lVar6 + 0x178,local_38,&local_68,local_58 + 2,0,0,0,local_58);
    if (local_58[0] != 0) {
      FMemory::Free();
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_30 + 1;
      lVar6 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar1 = (int *)((longlong)local_30 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
    if ((int)local_60 != 0) {
      plVar11 = local_68 + 1;
      iVar5 = (int)local_60;
      do {
        if (*plVar11 != 0) {
          FMemory::Free();
        }
        plVar11 = plVar11 + 3;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    if (local_68 != (undefined8 *)0x0) {
      FMemory::Free();
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2);
  return;
}



// FUNCTION 141292d50 FUN_141292d50 body=505 status=ok
// SIG undefined FUN_141292d50(void)

void FUN_141292d50(longlong param_1,char param_2)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 local_res8;
  undefined4 local_res18 [2];
  longlong *local_res20;
  longlong **local_38;
  longlong local_30;
  undefined4 *local_28;
  longlong *local_20;
  
  cVar2 = *(char *)(param_1 + 0x264);
  if ((cVar2 < '\0') || (*(int *)(param_1 + 0x250) <= (int)cVar2)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((bVar1) && (*(char *)(param_1 + 0x270) != cVar2)) {
    if (*(char *)(param_1 + 0x270) != -1) {
      FUN_141295840(param_1);
    }
    local_res20 = (longlong *)FUN_14309ec30(param_1);
    if (local_res20 != (longlong *)0x0) {
      lVar4 = FUN_14149b100();
      if ((*(int *)(local_res20[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)(*(longlong *)(local_res20[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
          != lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        plVar6 = (longlong *)
                 ((longlong)*(char *)(param_1 + 0x264) * 0x20 + *(longlong *)(param_1 + 0x248));
        *(char *)(param_1 + 0x270) = *(char *)(param_1 + 0x264);
        if (*plVar6 != 0) {
          local_38 = &local_res20;
          local_res18[0] = 0;
          local_28 = local_res18;
          local_30 = param_1;
          local_20 = plVar6;
          FUN_14128c9c0(&local_38,2);
          plVar5 = (longlong *)FUN_140a63ba0(local_res20);
          if (plVar5 != (longlong *)0x0) {
            cVar2 = (**(code **)(*plVar5 + 0x778))(plVar5);
            if (cVar2 != '\0') {
              cVar2 = (**(code **)(*plVar5 + 0x780))(plVar5);
              if (cVar2 != '\0') {
                FUN_14128c9c0(&local_38,1);
              }
            }
          }
          local_res8 = 0;
          if (plVar6[2] != 0) {
            local_res8 = 0;
            FUN_14308aea0(local_res20,plVar6[2],0,&local_res8);
          }
        }
        uVar3 = (**(code **)(*local_res20 + 0x858))(local_res20);
        *(undefined1 *)(param_1 + 0x271) = uVar3;
        if ((param_2 != '\0') && ((char)plVar6[3] != '\0')) {
          FUN_143083d20(local_res20,(char)plVar6[3],uVar3,*(undefined1 *)((longlong)plVar6 + 0x19));
        }
        if (*(char *)((longlong)plVar6 + 0x1a) != '\0') {
          FUN_143083d20(local_res20,*(char *)((longlong)plVar6 + 0x1a),
                        *(undefined1 *)(param_1 + 0x271),*(undefined1 *)((longlong)plVar6 + 0x1b));
        }
        if (*(char *)((longlong)plVar6 + 0x1c) != '\0') {
          *(undefined1 *)(param_1 + 0x272) = 1;
          FUN_14127d640(local_res20,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 141292f50 FUN_141292f50 body=27 status=ok
// SIG undefined FUN_141292f50(void)

void FUN_141292f50(undefined8 param_1)

{
  FUN_1412a8580();
  FUN_142330890(param_1);
  return;
}



// FUNCTION 141292f70 FUN_141292f70 body=141 status=ok
// SIG undefined FUN_141292f70(void)

void FUN_141292f70(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 local_18;
  undefined4 local_10;
  
  FUN_142223710();
  if (*(longlong *)(param_1 + 0x488) != 0) {
    local_18 = 0;
    local_10 = 0;
    puVar1 = (undefined8 *)operator_new(0x28,&local_18);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &PTR_FUN_143f4d170;
      FWeakObjectPtr::operator=(puVar1 + 1,param_1);
      puVar1[2] = FUN_1412a5540;
      uVar2 = FDelegateHandle::GenerateNewID();
      puVar1[4] = uVar2;
      *puVar1 = &PTR_FUN_143f4d1b8;
    }
    FUN_141292a70(*(undefined8 *)(param_1 + 0x488),&local_18);
  }
  return;
}



// FUNCTION 141293000 FUN_141293000 body=91 status=ok
// SIG undefined FUN_141293000(void)

void FUN_141293000(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined4 local_10;
  
  FUN_141264bd0();
  uVar3 = FUN_14126ca30(param_1);
  *(undefined8 *)(param_1 + 0x9b0) = uVar3;
  lVar1 = *(longlong *)(param_1 + 0x968);
  if ((lVar1 != 0) && (plVar2 = *(longlong **)(param_1 + 0x970), plVar2 != (longlong *)0x0)) {
    local_18 = *(undefined8 *)(lVar1 + 0x48);
    local_10 = *(undefined4 *)(lVar1 + 0x50);
    (**(code **)(*plVar2 + 0x3f8))(plVar2,&local_18);
  }
  return;
}



// FUNCTION 141293060 FUN_141293060 body=1072 status=ok
// SIG undefined FUN_141293060(void)

void FUN_141293060(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int *piVar3;
  wchar_t *pwVar4;
  char cVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int *piVar12;
  wchar_t *pwVar13;
  longlong *plVar14;
  bool bVar15;
  undefined4 uVar16;
  undefined8 local_res8;
  ulonglong local_res10;
  undefined8 local_68;
  ulonglong uStack_60;
  code *local_58;
  ulonglong uStack_50;
  undefined1 local_48 [16];
  
  FUN_142330a70();
  plVar14 = *(longlong **)(param_1 + 0x118);
  if (plVar14 != (longlong *)0x0) {
    lVar6 = FUN_14145f370();
    if ((*(int *)(plVar14[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar14[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar15 = false;
    }
    else {
      bVar15 = true;
    }
    if (bVar15) {
      pwVar13 = (wchar_t *)0x0;
      pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnCharacterChanged",L"::");
      pwVar9 = pwVar13;
      while (pwVar4 = pwVar7, pwVar4 != (wchar_t *)0x0) {
        pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
        pwVar9 = pwVar4;
      }
      FName::FName(&local_res10,pwVar9 + 2,1);
      plVar1 = plVar14 + 0x167;
      FWeakObjectPtr::operator=(&local_68,0);
      uStack_60 = 0;
      FWeakObjectPtr::operator=(&local_68,param_1);
      uStack_60 = local_res10;
      local_res8 = 0;
      if ((local_res10 != 0) && (lVar6 = FWeakObjectPtr::Get(&local_68), lVar6 != 0)) {
        UObject::FindFunction(lVar6,uStack_60);
      }
      piVar3 = (int *)*plVar1;
      lVar6 = plVar14[0x168];
      for (piVar12 = piVar3; piVar12 != piVar3 + (longlong)(int)lVar6 * 4; piVar12 = piVar12 + 4) {
        if (((*piVar12 == (int)local_68) &&
            (local_68._4_4_ = (int)((ulonglong)local_68 >> 0x20),
            bVar15 = piVar12[1] == local_68._4_4_, bVar15)) ||
           ((cVar5 = FWeakObjectPtr::IsValid(piVar12), cVar5 == '\0' &&
            (cVar5 = FWeakObjectPtr::IsValid(&local_68), cVar5 == '\0')))) {
          bVar15 = true;
        }
        else {
          bVar15 = false;
        }
        if ((bVar15) && (*(ulonglong *)(piVar12 + 2) == uStack_60)) {
          bVar15 = true;
        }
        else {
          bVar15 = false;
        }
        if (bVar15) {
          if ((int)((longlong)piVar12 - (longlong)piVar3 >> 4) != -1) goto LAB_141293229;
          break;
        }
      }
      iVar2 = (int)plVar14[0x168];
      lVar6 = (longlong)iVar2;
      *(int *)(plVar14 + 0x168) = iVar2 + 1;
      if (*(int *)((longlong)plVar14 + 0xb44) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
      }
      lVar8 = *plVar1;
      *(int *)(lVar8 + lVar6 * 0x10) = (int)local_68;
      *(int *)(lVar8 + 4 + lVar6 * 0x10) = local_68._4_4_;
      *(ulonglong *)(lVar8 + 8 + lVar6 * 0x10) = uStack_60;
LAB_141293229:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
      lVar6 = (**(code **)(*plVar14 + 0x690))(plVar14);
      if (lVar6 == 0) {
        FUN_1412af310(param_1);
      }
      else {
        FUN_1412af370();
      }
      lVar6 = (**(code **)(*plVar14 + 0x678))(plVar14);
      if (lVar6 != 0) {
        lVar8 = FUN_1413ffe00();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
          bVar15 = false;
        }
        else {
          bVar15 = true;
        }
        if (bVar15) {
          uStack_60 = uStack_60 & 0xffffffff00000000;
          local_68 = FUN_1412a48c0;
          local_58 = FUN_1412a48c0;
          uStack_50 = uStack_60;
          pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnPlayerEnteringVehicle",L"::");
          pwVar9 = pwVar13;
          while (pwVar4 = pwVar7, pwVar4 != (wchar_t *)0x0) {
            pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
            pwVar9 = pwVar4;
          }
          FName::FName(&local_res8,pwVar9 + 2,1);
          FUN_1407260e0(lVar6 + 0x1d88,param_1,&local_58,local_res8);
          uStack_60 = uStack_60 & 0xffffffff00000000;
          local_68 = FUN_1412a4930;
          local_58 = FUN_1412a4930;
          uStack_50 = uStack_60;
          pwVar9 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnPlayerExitedVehicle",L"::");
          while (pwVar7 = pwVar9, pwVar7 != (wchar_t *)0x0) {
            pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar7 + 1,L"::");
            pwVar13 = pwVar7;
          }
          FName::FName(&local_res8,pwVar13 + 2,1);
          FUN_1407260e0(lVar6 + 0x1db8,param_1,&local_58,local_res8);
        }
      }
      goto LAB_1412933a9;
    }
  }
  plVar14 = (longlong *)0x0;
LAB_1412933a9:
  uVar16 = FUN_14129e600(param_1);
  *(undefined4 *)(param_1 + 0x1a4) = uVar16;
  local_68 = (code *)0x0;
  uStack_60 = 0;
  lVar6 = FUN_1412c3780(&local_68,param_1);
  if (((lVar6 != 0) && (cVar5 = FUN_140f12a40(lVar6,param_1 + 0x180), cVar5 != '\0')) &&
     (cVar5 = FUN_140bf9670(0,param_1 + 0x188), cVar5 != '\0')) {
    FWeakObjectPtr::operator=(param_1 + 0x188,lVar6);
    local_58 = FUN_1412a5be0;
    uStack_50 = uStack_50 & 0xffffffff00000000;
    *(undefined1 *)(param_1 + 0x191) = 1;
    uVar10 = FWeakObjectPtr::Get(param_1 + 0x188);
    uVar11 = TBaseDelegate<TTypeWrapper<void>_>::CreateUObject<AFlarePlayerController>
                       (local_48,param_1,&local_58);
    FUN_141292a70(uVar10,uVar11);
  }
  if (*(longlong *)(param_1 + 0x1c0) == 0) {
    local_res8 = 0;
    FUN_1412a1d80(param_1,plVar14,0,1);
  }
  return;
}



// FUNCTION 141293490 FUN_141293490 body=446 status=ok
// SIG undefined FUN_141293490(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141293490(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  longlong *plVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  uint uVar12;
  longlong *plVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  uint uVar16;
  uint uVar17;
  longlong *local_38;
  undefined8 local_30;
  
  FUN_14306c7d0();
  local_38 = (longlong *)0x0;
  local_30 = 0;
  FUN_1412888c0(*(undefined8 *)(param_1 + 0x118),&local_38,0);
  plVar7 = local_38;
  if ((0 < (int)local_30) && (*local_38 != 0)) {
    plVar1 = local_38 + (int)local_30;
    for (plVar13 = local_38; plVar13 != plVar1; plVar13 = plVar13 + 1) {
      lVar2 = *plVar13;
      if (lVar2 != 0) {
        uVar8 = UWorld::GetNumPlayerControllers(lVar2);
        uVar12 = 0;
        if (uVar8 != 0) {
          do {
            lVar9 = UKWMeshArray::GetMeshByIndex(lVar2,uVar12);
            if (lVar9 != 0) {
              lVar10 = FUN_142a232e0();
              if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
                bVar6 = false;
              }
              else {
                bVar6 = true;
              }
              if (bVar6) {
                uVar11 = UKWMeshArray::GetMeshByIndex(lVar2,uVar12);
                *(undefined8 *)(param_1 + 0x358) = uVar11;
                uVar8 = *(uint *)(lVar2 + 0x230) & _DAT_146877c10;
                uVar12 = *(uint *)(lVar2 + 0x234) & uRam0000000146877c14;
                uVar16 = *(uint *)(lVar2 + 0x238) & uRam0000000146877c18;
                uVar17 = *(uint *)(lVar2 + 0x23c) & uRam0000000146877c1c;
                auVar14._4_4_ = uVar12;
                auVar14._0_4_ = uVar8;
                auVar14._8_4_ = uVar16;
                auVar14._12_4_ = uVar17;
                auVar15._4_4_ = uVar16;
                auVar15._0_4_ = uVar12;
                auVar15._8_4_ = uVar8;
                auVar15._12_4_ = uVar17;
                auVar15 = minps(auVar14,auVar15);
                auVar3._4_4_ = uVar8;
                auVar3._0_4_ = uVar16;
                auVar3._8_4_ = uVar12;
                auVar3._12_4_ = uVar17;
                auVar15 = minps(auVar15,auVar3);
                *(float *)(param_1 + 0x36c) = auVar15._0_4_ * *(float *)(lVar2 + 0x710);
                break;
              }
            }
            uVar12 = uVar12 + 1;
          } while (uVar12 < uVar8);
        }
      }
    }
  }
  lVar2 = *(longlong *)(param_1 + 0x358);
  uVar4 = *(undefined4 *)(lVar2 + 0x224);
  uVar5 = *(undefined4 *)(lVar2 + 0x228);
  local_30 = CONCAT44(local_30._4_4_,uVar5);
  *(undefined4 *)(param_1 + 0x360) = *(undefined4 *)(lVar2 + 0x220);
  *(undefined4 *)(param_1 + 0x364) = uVar4;
  *(undefined4 *)(param_1 + 0x368) = uVar5;
  if (plVar7 != (longlong *)0x0) {
    FMemory::Free(plVar7);
    return;
  }
  return;
}



// FUNCTION 141293650 FUN_141293650 body=438 status=ok
// SIG undefined FUN_141293650(void)

void FUN_141293650(longlong *param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  wchar_t *pwVar8;
  undefined8 local_res8;
  longlong local_res10;
  undefined4 local_38;
  undefined4 local_34;
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  
  FUN_142330a70();
  lVar6 = param_1[0x24];
  if (lVar6 == 0) {
    lVar6 = FUN_1423407b0(param_1);
  }
  if (lVar6 != 0) {
    lVar6 = param_1[0x24];
    if (lVar6 == 0) {
      lVar6 = FUN_1423407b0(param_1);
    }
    cVar3 = UWorld::IsGameWorld(lVar6);
    if ((cVar3 != '\0') && (lVar6 = FUN_14307d730(param_1), lVar6 != 0)) {
      FWeakObjectPtr::operator=(&local_38,0);
      local_30 = 0;
      puVar7 = (undefined8 *)FName::FName(&local_res8,L"OnGivenTo",1);
      FWeakObjectPtr::operator=(&local_38,param_1);
      local_30 = *puVar7;
      local_28 = local_38;
      local_24 = local_34;
      local_20 = local_30;
      FUN_143088620(lVar6,&local_28);
    }
  }
  iVar4 = FUN_14233f450(param_1);
  if (iVar4 == 3) {
    iVar5 = (**(code **)(*param_1 + 0x448))(param_1);
    iVar5 = iVar5 - (int)param_1[0x39];
    iVar4 = 0;
    if (-1 < iVar5) {
      iVar4 = iVar5;
    }
    *(int *)(param_1 + 0x3a) = iVar4;
    FWeakObjectPtr::operator=(&local_38,0);
    local_30 = 0;
    pwVar8 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnMaxLoadedAmmoChanged",L"::");
    pwVar2 = (wchar_t *)0x0;
    while (pwVar1 = pwVar8, pwVar1 != (wchar_t *)0x0) {
      pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar2 = pwVar1;
    }
    FName::FName(&local_res10,pwVar2 + 2,1);
    FWeakObjectPtr::operator=(&local_38,param_1);
    local_30 = local_res10;
    local_res8 = 0;
    if ((local_res10 != 0) && (lVar6 = FWeakObjectPtr::Get(&local_38), lVar6 != 0)) {
      UObject::FindFunction(lVar6,local_30);
    }
    FUN_142475720(param_1 + 0x37,&local_38);
  }
  return;
}



// FUNCTION 141293810 FUN_141293810 body=264 status=ok
// SIG undefined FUN_141293810(void)

void FUN_141293810(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  plVar6 = *(longlong **)(param_1 + 0x230);
  plVar1 = plVar6 + *(int *)(param_1 + 0x238);
  for (; plVar6 != plVar1; plVar6 = plVar6 + 1) {
    lVar7 = *plVar6;
    if (lVar7 == 0) {
LAB_141293881:
      lVar7 = 0;
    }
    else {
      lVar5 = FUN_14149c820();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_141293881;
    }
    FWeakObjectPtr::operator=(param_1 + 0x440,lVar7);
    cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x440);
    if (cVar3 != '\0') break;
  }
  FUN_142fe7b10(param_1);
  FUN_141291a80(param_1,0,0);
  lVar7 = *(longlong *)(param_1 + 0x3f8);
  if (((lVar7 != 0) && (lVar5 = FUN_14129ab90(param_1), lVar5 != 0)) && (lVar7 != 0)) {
    uVar4 = FUN_140b5d470(lVar7,param_1);
    FUN_142d271f0(lVar5,*(undefined8 *)(param_1 + 0x3f8),uVar4);
  }
  return;
}



// FUNCTION 141293920 FUN_141293920 body=605 status=ok
// SIG undefined FUN_141293920(void)

void FUN_141293920(longlong param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  int *piVar11;
  int *piVar12;
  longlong local_res18;
  int local_28;
  int local_24;
  longlong local_20;
  
  FUN_143099d40();
  iVar5 = FUN_14233f450(param_1);
  if ((iVar5 == 3) &&
     ((*(longlong *)(param_1 + 0x120) != 0 || (lVar6 = FUN_1423407b0(param_1), lVar6 != 0)))) {
    lVar6 = *(longlong *)(param_1 + 0x120);
    if (lVar6 == 0) {
      lVar6 = FUN_1423407b0(param_1);
    }
    cVar4 = UWorld::IsGameWorld(lVar6);
    if ((cVar4 != '\0') && (plVar7 = (longlong *)FUN_14309ec30(param_1), plVar7 != (longlong *)0x0))
    {
      uVar8 = UAnimMontage::GetPrivateStaticClass();
      lVar6 = (**(code **)(*plVar7 + 0x800))(plVar7,uVar8,param_1);
      if (lVar6 != 0) {
        lVar9 = UAnimMontage::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          pwVar10 = _guard_xfg_dispatch_icall_nop(L"&UWeaponCOVHeatComponent::RepairedNotify",L"::")
          ;
          pwVar3 = (wchar_t *)0x0;
          while (pwVar2 = pwVar10, pwVar2 != (wchar_t *)0x0) {
            pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
            pwVar3 = pwVar2;
          }
          FName::FName(&local_res18,pwVar3 + 2,1);
          plVar7 = (longlong *)(lVar6 + 0x1b0);
          FWeakObjectPtr::operator=(&local_28,0);
          local_20 = 0;
          FWeakObjectPtr::operator=(&local_28,param_1);
          local_20 = local_res18;
          if ((local_res18 != 0) && (lVar9 = FWeakObjectPtr::Get(&local_28), lVar9 != 0)) {
            UObject::FindFunction(lVar9,local_20);
          }
          piVar11 = (int *)*plVar7;
          iVar5 = *(int *)(lVar6 + 0x1b8);
          for (piVar12 = piVar11; piVar12 != piVar11 + (longlong)iVar5 * 4; piVar12 = piVar12 + 4) {
            if (((*piVar12 == local_28) && (piVar12[1] == local_24)) ||
               ((cVar4 = FWeakObjectPtr::IsValid(piVar12), cVar4 == '\0' &&
                (cVar4 = FWeakObjectPtr::IsValid(&local_28), cVar4 == '\0')))) {
              bVar1 = true;
            }
            else {
              bVar1 = false;
            }
            if ((bVar1) && (*(longlong *)(piVar12 + 2) == local_20)) {
              bVar1 = true;
            }
            else {
              bVar1 = false;
            }
            if (bVar1) {
              if ((int)((longlong)piVar12 - (longlong)piVar11 >> 4) != -1) goto LAB_141293b53;
              break;
            }
          }
          iVar5 = *(int *)(lVar6 + 0x1b8);
          *(int *)(lVar6 + 0x1b8) = iVar5 + 1;
          if (*(int *)(lVar6 + 0x1bc) < iVar5 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar7,iVar5);
          }
          piVar11 = (int *)((longlong)iVar5 * 0x10 + *plVar7);
          *piVar11 = local_28;
          piVar11[1] = local_24;
          *(longlong *)(piVar11 + 2) = local_20;
LAB_141293b53:
          TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar7);
        }
      }
      FUN_141297510(param_1);
    }
  }
  return;
}



// FUNCTION 141293b80 FUN_141293b80 body=116 status=ok
// SIG undefined FUN_141293b80(void)

void FUN_141293b80(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  
  FUN_142330a70();
  if ((*(longlong *)(param_1 + 0x120) == 0) && (lVar3 = FUN_1423407b0(param_1), lVar3 == 0)) {
    return;
  }
  lVar3 = *(longlong *)(param_1 + 0x120);
  if (lVar3 == 0) {
    lVar3 = FUN_1423407b0(param_1);
  }
  cVar1 = UWorld::IsGameWorld(lVar3);
  if (((cVar1 != '\0') && (lVar3 = FUN_14309ec70(param_1), lVar3 != 0)) &&
     (iVar2 = FUN_14233f450(param_1), iVar2 == 3)) {
    FUN_1412a6830(param_1);
    return;
  }
  return;
}



// FUNCTION 141293c80 FUN_141293c80 body=85 status=ok
// SIG undefined FUN_141293c80(void)

void FUN_141293c80(longlong *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_142330a70();
  iVar1 = FUN_14233f450(param_1);
  if (iVar1 == 3) {
    uVar2 = FUN_142c98860(param_1 + 0x36,param_1[0x23]);
    FUN_14246fd50(param_1 + 0x34,uVar2);
                    /* WARNING: Could not recover jumptable at 0x000141293cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x260))(param_1);
    return;
  }
  return;
}



// FUNCTION 141293d80 FUN_141293d80 body=20 status=ok
// SIG undefined FUN_141293d80(void)

ulonglong FUN_141293d80(longlong *param_1)

{
  ulonglong uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x500))();
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 141293da0 FUN_141293da0 body=45 status=ok
// SIG undefined FUN_141293da0(void)

undefined8 FUN_141293da0(longlong *param_1)

{
  char cVar1;
  
  if ((int)param_1[0x39] < *(int *)((longlong)param_1 + 0x1bc)) {
    cVar1 = (**(code **)(*param_1 + 0x490))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141293dd0 FUN_141293dd0 body=81 status=ok
// SIG undefined FUN_141293dd0(void)

undefined8 FUN_141293dd0(longlong *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = (**(code **)(*param_1 + 0x408))();
  if (cVar2 != '\0') {
    return 0;
  }
  if ((param_1[0x44] != 0) && (param_1[0x45] != 0)) {
    piVar1 = (int *)(param_1[0x45] + 8);
    LOCK();
    iVar3 = *piVar1;
    if (iVar3 == 0) {
      *piVar1 = 0;
      iVar3 = 0;
    }
    UNLOCK();
    if ((0 < iVar3) && ((char)param_1[0x43] != '\0')) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 141293e30 FUN_141293e30 body=54 status=ok
// SIG undefined FUN_141293e30(void)

void FUN_141293e30(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_1429fde70();
  lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
  if (lVar2 != 0) {
    FUN_142385b60(lVar2);
    return;
  }
  return;
}



// FUNCTION 141293e70 FUN_141293e70 body=42 status=ok
// SIG undefined FUN_141293e70(void)

void FUN_141293e70(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x180) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x184) = 0;
  *(undefined4 *)(param_1 + 0x188) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x18c) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  return;
}



// FUNCTION 141293ea0 FUN_141293ea0 body=50 status=ok
// SIG undefined FUN_141293ea0(void)

void FUN_141293ea0(longlong *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_14233f450();
  if (iVar1 != 3) {
    (**(code **)(*param_1 + 0x4a8))(param_1,param_2);
  }
  return;
}



// FUNCTION 141293ee0 FUN_141293ee0 body=51 status=ok
// SIG undefined FUN_141293ee0(void)

void FUN_141293ee0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_14233f450();
  if (iVar1 != 3) {
    FUN_1412a6b00(param_1,param_2,0);
  }
  return;
}



// FUNCTION 141293f40 FUN_141293f40 body=3146 status=ok
// SIG undefined FUN_141293f40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141293f40(longlong **param_1,longlong **param_2,undefined8 param_3,undefined8 param_4,
                  longlong *param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong **pplVar15;
  undefined1 auStack_248 [32];
  longlong *local_228;
  undefined8 local_220;
  undefined1 local_218;
  undefined8 local_210;
  undefined1 local_208;
  longlong *local_1f8;
  longlong **local_1f0;
  longlong *local_1e8;
  int local_1e0 [2];
  longlong *local_1d8;
  longlong **local_1d0;
  longlong **local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  longlong *local_1a8;
  undefined1 local_1a0 [8];
  undefined4 local_198;
  undefined1 local_190 [8];
  undefined4 local_188;
  undefined4 uStack_184;
  longlong local_178;
  undefined8 local_170;
  undefined8 local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 local_144;
  longlong local_138;
  undefined4 local_130;
  longlong local_128 [24];
  longlong *local_68;
  undefined8 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_248;
  local_228 = param_5;
  local_1f0 = param_2;
  FUN_142fea860();
  if (param_2 != (longlong **)0x0) {
    local_1d0 = param_2;
    local_1c8 = param_1;
    if ((char)param_5[2] == '\0') {
      plVar14 = (longlong *)*param_5;
      plVar1 = param_1[0x7f];
      plVar11 = plVar14 + (int)param_5[1];
      for (; plVar9 = plVar1, plVar14 != plVar11; plVar14 = plVar14 + 1) {
        plVar9 = (longlong *)*plVar14;
        if (plVar9 != (longlong *)0x0) {
          lVar5 = FUN_1414eba50();
          if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
              != lVar5 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) break;
        }
      }
      if ((plVar9 != (longlong *)0x0) && (lVar5 = FUN_14128c870(&local_1d0), lVar5 != 0)) {
        uVar4 = FUN_140b5d470(plVar9,param_1);
        FUN_142d271f0(lVar5,plVar9,uVar4);
      }
    }
    if (*(char *)((longlong)param_5 + 0x11) == '\0') {
      plVar14 = (longlong *)*param_5;
      plVar1 = param_1[0x7e];
      plVar11 = plVar14 + (int)param_5[1];
      for (; plVar9 = plVar1, plVar14 != plVar11; plVar14 = plVar14 + 1) {
        plVar9 = (longlong *)*plVar14;
        if (plVar9 != (longlong *)0x0) {
          lVar5 = FUN_1414ecd30();
          if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
              != lVar5 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) break;
        }
      }
      if ((plVar9 != (longlong *)0x0) && (lVar5 = FUN_14128c870(&local_1d0), lVar5 != 0)) {
        FUN_142d271f0(lVar5,plVar9,0);
      }
    }
    uVar6 = FUN_1429bed90();
    pplVar15 = local_1f0;
    lVar5 = (*(code *)(*local_1f0)[0xc5])(local_1f0,uVar6);
    if (lVar5 != 0) {
      FUN_141291a80(param_1,lVar5,0);
    }
    if (*(char *)((longlong)param_5 + 0x12) != '\0') {
      plVar14 = param_1[0x7a];
      local_178 = 0;
      local_170 = 0;
      plVar11 = plVar14 + *(int *)(param_1 + 0x7b);
      local_158 = 0;
      local_150 = 0;
      local_148 = 0xffffffff;
      local_144 = 0;
      local_138 = 0;
      local_130 = 0;
      for (; plVar14 != plVar11; plVar14 = plVar14 + 1) {
        plVar1 = (longlong *)*plVar14;
        local_1d8 = plVar1;
        if (plVar1 != (longlong *)0x0) {
          lVar5 = UPawnAction_Sequence::StaticClass();
          if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
              != lVar5 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (((bVar3) && ((char)plVar1[0x17] != '\0')) &&
             (*(char *)((longlong)plVar1 + 0x84) != '\x02')) {
            lVar5 = plVar1[0xc];
            if (plVar1[0xd] != 0) {
              lVar7 = UDungeonEventListener::GetPrivateStaticClass();
              for (lVar8 = plVar1[0xd]; lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x30)) {
                if (lVar8 == lVar7) {
                  if ((plVar1[0xd] != 0) &&
                     (lVar8 = FUN_142db9260(plVar1[0xd],param_1[0x23]), lVar8 != 0)) {
                    lVar5 = lVar8;
                  }
                  break;
                }
              }
            }
            if ((lVar5 == 0) || (lVar8 = FUN_14222b250(pplVar15,plVar1[0xe],0), lVar8 == 0)) {
              plVar9 = (longlong *)0x0;
            }
            else {
              FUN_1417846f0(pplVar15,
                            L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                           );
              local_1e8 = (longlong *)0x0;
              uVar6 = AGFreezeCharacterCue::GetPrivateStaticClass();
              local_208 = 0;
              local_210 = 0;
              local_218 = 0;
              local_220 = 0;
              local_228 = (longlong *)((ulonglong)local_228 & 0xffffffff00000000);
              plVar9 = (longlong *)FUN_1417985e0(uVar6,pplVar15,local_1e8,0);
              *(byte *)((longlong)plVar9 + 0x71a) = *(byte *)((longlong)plVar9 + 0x71a) & 0xbf;
              *(undefined4 *)((longlong)plVar9 + 0x794) = 0;
              *(byte *)((longlong)plVar9 + 0xba) = *(byte *)((longlong)plVar9 + 0xba) & 0xfd | 1;
              *(byte *)(plVar9 + 0x12f) = (byte)(*(uint *)(plVar1 + 0x12) >> 2) & 1;
              FUN_14260f940(plVar9,lVar5);
              *(byte *)((longlong)plVar9 + 0x71a) = *(byte *)((longlong)plVar9 + 0x71a) & 0xfe;
              *(undefined8 *)((longlong)plVar9 + 0x1ec) = *(undefined8 *)((longlong)plVar1 + 0x94);
              *(undefined4 *)((longlong)plVar9 + 500) = *(undefined4 *)((longlong)plVar1 + 0x9c);
              plVar9[0x3f] = plVar1[0x14];
              *(int *)(plVar9 + 0x40) = (int)plVar1[0x15];
              local_198 = *(undefined4 *)((longlong)plVar1 + 0xac);
              *(ulonglong *)((longlong)plVar9 + 0x204) = CONCAT44(local_198,local_198);
              *(undefined4 *)((longlong)plVar9 + 0x20c) = local_198;
              uVar6 = (*(code *)(*local_1f0)[0x29])();
              FUN_14234b270(plVar9,uVar6);
              FUN_142382f60(plVar9,lVar8,&DAT_146af29ec);
              FUN_1425fcab0(plVar9,1);
            }
            pplVar15 = local_1f0;
            local_1f8 = plVar9;
            if (plVar9 != (longlong *)0x0) {
              lVar5 = plVar9[0xde];
              if (lVar5 != 0) {
                plVar9 = *(longlong **)(lVar5 + 0x138);
                plVar1 = plVar9 + *(int *)(lVar5 + 0x140);
                for (; plVar9 != plVar1; plVar9 = plVar9 + 1) {
                  plVar2 = (longlong *)*plVar9;
                  if (plVar2 != (longlong *)0x0) {
                    lVar5 = FUN_1414e8a80();
                    if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
                       (*(longlong *)
                         (*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
                        lVar5 + 0x88)) {
                      bVar3 = false;
                    }
                    else {
                      bVar3 = true;
                    }
                    if (bVar3) {
                      lVar5 = local_1f8[0x10b];
                      local_1f8[0x10b] = (longlong)param_1[0x23];
                      (**(code **)(*plVar2 + 0x278))(plVar2,local_1f8);
                      local_1f8[0x10b] = lVar5;
                    }
                    else {
                      lVar5 = FUN_142e6a320();
                      if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
                         (*(longlong *)
                           (*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
                          != lVar5 + 0x88)) {
                        bVar3 = false;
                      }
                      else {
                        bVar3 = true;
                      }
                      if (((bVar3) && (plVar2[5] != 0)) &&
                         (lVar5 = *(longlong *)(plVar2[5] + 0x30), lVar5 != 0)) {
                        FUN_142ca0820(lVar5,local_190);
                        plVar10 = (longlong *)FUN_142cc1650(local_190);
                        if (plVar10 != (longlong *)0x0) {
                          lVar5 = FUN_1430bc880();
                          if ((*(int *)(plVar10[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
                             (*(longlong *)
                               (*(longlong *)(plVar10[2] + 0x88) +
                               (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
                            bVar3 = false;
                          }
                          else {
                            bVar3 = true;
                          }
                          if (bVar3) {
                            (**(code **)(*plVar10 + 0x418))(plVar10);
                            FUN_14260f0c0(local_1f8,plVar2[6]);
                          }
                        }
                        if (CONCAT44(uStack_184,local_188) != 0) {
                          FMemory::Free();
                        }
                      }
                    }
                  }
                }
              }
              local_1d0 = &local_1d8;
              local_1c8 = &local_1f8;
              TSet<TTuple<FFlareResourceDescription_*,UFlareSimulatedSpacecraft_*>,TDefaultMapHashableKeyFuncs<FFlareResourceDescription_*,UFlareSimulatedSpacecraft_*,0>,FDefaultSetAllocator>
              ::
              Emplace<TPairInitializer<FFlareResourceDescription_*_const_&,UFlareSimulatedSpacecraft_*_const_&>_>
                        (&local_178,local_1e0,&local_1d0);
              pplVar15 = local_1f0;
            }
          }
        }
      }
      local_68 = (longlong *)0x0;
      local_60 = 0;
      FUN_141288cc0(param_1[0x23],local_128,0);
      local_1d8 = local_128;
      if (local_68 != (longlong *)0x0) {
        local_1d8 = local_68;
      }
      local_1a8 = local_1d8 + (int)local_60;
      if (local_1d8 != local_1a8) {
        do {
          lVar5 = *local_1d8;
          local_1b0 = FUN_14129d880(lVar5);
          plVar11 = (longlong *)(*(code *)(*param_1)[0xa8])(param_1,local_1a0,0);
          plVar11 = (longlong *)*plVar11;
          if (plVar11 == (longlong *)0x0) {
LAB_141294634:
            plVar14 = (longlong *)0x0;
            local_1e8 = (longlong *)0x0;
          }
          else {
            plVar14 = (longlong *)plVar11[0x1f];
            if (plVar14 == (longlong *)0x0) {
              local_1e8 = plVar14;
              (**(code **)(*plVar11 + 0x368))(plVar11);
              plVar14 = (longlong *)plVar11[0x1f];
              if (plVar14 == (longlong *)0x0) goto LAB_141294634;
            }
            local_1e8 = plVar14;
            lVar8 = FUN_1414193b0();
            if ((*(int *)(plVar14[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(plVar14[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
                lVar8 + 0x88)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (!bVar3) goto LAB_141294634;
          }
          if (lVar5 != 0) {
            lVar8 = FUN_1414ebd60();
            if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if ((bVar3) && (*(longlong *)(lVar5 + 0x378) != 0)) {
              lVar8 = *(longlong *)(lVar5 + 0x378);
              if (*(longlong *)(lVar5 + 0x380) != 0) {
                lVar12 = UDungeonEventListener::GetPrivateStaticClass();
                for (lVar7 = *(longlong *)(lVar5 + 0x380); lVar7 != 0;
                    lVar7 = *(longlong *)(lVar7 + 0x30)) {
                  if (lVar7 == lVar12) {
                    if ((*(longlong *)(lVar5 + 0x380) != 0) &&
                       (lVar7 = FUN_142db9260(*(undefined8 *)(lVar5 + 0x380),param_1[0x23]),
                       lVar7 != 0)) {
                      lVar8 = lVar7;
                    }
                    break;
                  }
                }
              }
              pplVar15 = local_1f0;
              if ((lVar8 != 0) &&
                 (lVar7 = FUN_14222b250(local_1f0,*(undefined8 *)(lVar5 + 0x388)), lVar7 != 0)) {
                FUN_1417846f0(pplVar15,
                              L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                             );
                local_1c0 = 0;
                uVar6 = AGFreezeCharacterCue::GetPrivateStaticClass();
                local_208 = 0;
                local_210 = 0;
                local_218 = 0;
                local_220 = 0;
                local_228 = (longlong *)((ulonglong)local_228 & 0xffffffff00000000);
                lVar12 = FUN_1417985e0(uVar6,pplVar15,local_1c0,0);
                *(byte *)(lVar12 + 0x71a) = *(byte *)(lVar12 + 0x71a) & 0xbf;
                *(undefined4 *)(lVar12 + 0x794) = 0;
                *(byte *)(lVar12 + 0xba) = *(byte *)(lVar12 + 0xba) & 0xfd | 1;
                *(byte *)(lVar12 + 0x978) = (byte)(*(uint *)(lVar5 + 0x3a8) >> 2) & 1;
                FUN_14260f940(lVar12,lVar8);
                *(byte *)(lVar12 + 0x71a) = *(byte *)(lVar12 + 0x71a) & 0xfe;
                *(undefined8 *)(lVar12 + 0x1ec) = *(undefined8 *)(lVar5 + 0x3ac);
                *(undefined4 *)(lVar12 + 500) = *(undefined4 *)(lVar5 + 0x3b4);
                *(undefined8 *)(lVar12 + 0x1f8) = *(undefined8 *)(lVar5 + 0x3b8);
                *(undefined4 *)(lVar12 + 0x200) = *(undefined4 *)(lVar5 + 0x3c0);
                local_188 = *(undefined4 *)(lVar5 + 0x3c4);
                *(ulonglong *)(lVar12 + 0x204) = CONCAT44(local_188,local_188);
                *(undefined4 *)(lVar12 + 0x20c) = local_188;
                uVar6 = (*(code *)(*pplVar15)[0x29])(pplVar15);
                FUN_14234b270(lVar12,uVar6);
                FUN_142382f60(lVar12,lVar7,&DAT_146af29ec,*(undefined8 *)(lVar5 + 0x388));
                FUN_1425fcab0(lVar12,1);
                local_228 = plVar14;
                FUN_141291b70(lVar5,lVar12,param_1,local_1b0);
              }
            }
          }
          plVar14 = param_1[0x7a];
          plVar11 = plVar14 + *(int *)(param_1 + 0x7b);
          local_1f8 = plVar11;
          if (plVar14 != plVar11) {
            do {
              lVar8 = *plVar14;
              if (lVar8 != 0) {
                lVar7 = UPawnAction_Sequence::StaticClass();
                if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                  bVar3 = false;
                }
                else {
                  bVar3 = true;
                }
                plVar11 = local_1f8;
                if (((((bVar3) && (*(char *)(lVar8 + 0x58) == *(char *)(lVar5 + 0x308))) &&
                     (*(char *)(lVar8 + 0x84) != '\x01')) &&
                    ((*(uint *)(lVar5 + 0x314) & *(uint *)(lVar8 + 0x88)) != 0)) &&
                   ((*(int *)(lVar8 + 0x80) == 0 ||
                    (*(int *)(lVar8 + 0x80) == *(int *)(lVar5 + 0x30c))))) {
                  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
                  ::FindId(&local_178,local_1e0);
                  if (((local_1e0[0] == -1) ||
                      ((lVar7 = local_178 + (longlong)local_1e0[0] * 0x18, lVar7 == 0 ||
                       (plVar11 = (longlong *)(lVar7 + 8), plVar11 == (longlong *)0x0)))) ||
                     (lVar7 = *plVar11, lVar7 == 0)) {
                    lVar12 = *(longlong *)(lVar8 + 0x60);
                    if (*(longlong *)(lVar8 + 0x68) != 0) {
                      lVar13 = UDungeonEventListener::GetPrivateStaticClass();
                      for (lVar7 = *(longlong *)(lVar8 + 0x68); lVar7 != 0;
                          lVar7 = *(longlong *)(lVar7 + 0x30)) {
                        if (lVar7 == lVar13) {
                          if ((*(longlong *)(lVar8 + 0x68) != 0) &&
                             (lVar7 = FUN_142db9260(*(undefined8 *)(lVar8 + 0x68),param_1[0x23]),
                             lVar7 != 0)) {
                            lVar12 = lVar7;
                          }
                          break;
                        }
                      }
                    }
                    pplVar15 = local_1f0;
                    plVar11 = local_1f8;
                    if ((lVar12 == 0) ||
                       (lVar13 = FUN_14222b250(local_1f0,*(undefined8 *)(lVar8 + 0x70)),
                       plVar11 = local_1f8, lVar13 == 0)) goto LAB_141294afc;
                    FUN_1417846f0(pplVar15,
                                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                                 );
                    local_1b8 = 0;
                    uVar6 = AGFreezeCharacterCue::GetPrivateStaticClass();
                    local_208 = 0;
                    local_210 = 0;
                    local_218 = 0;
                    local_220 = 0;
                    local_228 = (longlong *)((ulonglong)local_228 & 0xffffffff00000000);
                    lVar7 = FUN_1417985e0(uVar6,pplVar15,local_1b8,0);
                    *(byte *)(lVar7 + 0x71a) = *(byte *)(lVar7 + 0x71a) & 0xbf;
                    *(undefined4 *)(lVar7 + 0x794) = 0;
                    *(byte *)(lVar7 + 0xba) = *(byte *)(lVar7 + 0xba) & 0xfd | 1;
                    *(byte *)(lVar7 + 0x978) = (byte)(*(uint *)(lVar8 + 0x90) >> 2) & 1;
                    FUN_14260f940(lVar7,lVar12);
                    *(byte *)(lVar7 + 0x71a) = *(byte *)(lVar7 + 0x71a) & 0xfe;
                    *(undefined8 *)(lVar7 + 0x1ec) = *(undefined8 *)(lVar8 + 0x94);
                    *(undefined4 *)(lVar7 + 500) = *(undefined4 *)(lVar8 + 0x9c);
                    *(undefined8 *)(lVar7 + 0x1f8) = *(undefined8 *)(lVar8 + 0xa0);
                    *(undefined4 *)(lVar7 + 0x200) = *(undefined4 *)(lVar8 + 0xa8);
                    uVar4 = *(undefined4 *)(lVar8 + 0xac);
                    local_1c8 = (longlong **)CONCAT44(local_1c8._4_4_,uVar4);
                    *(ulonglong *)(lVar7 + 0x204) = CONCAT44(uVar4,uVar4);
                    *(undefined4 *)(lVar7 + 0x20c) = uVar4;
                    uVar6 = (*(code *)(*local_1f0)[0x29])(local_1f0);
                    FUN_14234b270(lVar7,uVar6);
                    FUN_142382f60(lVar7,lVar13,&DAT_146af29ec,*(undefined8 *)(lVar8 + 0x70));
                    FUN_1425fcab0(lVar7,1);
                  }
                  local_228 = local_1e8;
                  FUN_141291b70(lVar5,lVar7);
                  plVar11 = local_1f8;
                }
              }
LAB_141294afc:
              plVar14 = plVar14 + 1;
            } while (plVar14 != plVar11);
          }
          local_1d8 = local_1d8 + 1;
        } while (local_1d8 != local_1a8);
      }
      if (local_68 != (longlong *)0x0) {
        FMemory::Free();
      }
      local_130 = 0;
      if (local_138 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_178);
    }
  }
  return;
}



// FUNCTION 141294b90 FUN_141294b90 body=527 status=ok
// SIG undefined FUN_141294b90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_141294b90(longlong param_1,float param_2,char *param_3,uint *param_4,undefined1 *param_5)

{
  float fVar1;
  bool bVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  float fVar6;
  undefined1 auStack_408 [32];
  undefined1 local_3e8 [896];
  byte local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_408;
  plVar4 = (longlong *)FUN_1412996f0();
  if ((plVar4 == (longlong *)0x0) ||
     (plVar4 = (longlong *)(**(code **)(*plVar4 + 0x670))(plVar4), plVar4 == (longlong *)0x0)) {
    return 0;
  }
  lVar5 = FUN_14145f370();
  if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return 0;
  }
  cVar3 = (**(code **)(*plVar4 + 0x768))(plVar4);
  if (cVar3 == '\0') {
    return 0;
  }
  *param_5 = (char)plVar4[0x270];
  bVar2 = false;
  *param_3 = (char)plVar4[0x270];
  *param_4 = 1;
  if ((char)plVar4[0x270] == '\0') {
    lVar5 = plVar4[0x122];
    if (lVar5 != 0) {
      FUN_142dc1ad0(local_3e8);
      cVar3 = FUN_142dcd6e0(lVar5,local_3e8,0);
      if ((cVar3 == '\0') || (local_68 == 1)) {
        if (0.0 < *(float *)(param_1 + 0x358)) {
          bVar2 = true;
          *(undefined4 *)(param_1 + 0x358) = 0;
        }
      }
      else if ((char)plVar4[0x26f] != '\0') {
        *param_3 = '\x01';
        *param_4 = (uint)local_68;
      }
    }
  }
  else {
    *param_3 = '\x01';
    *param_4 = 2;
  }
  fVar6 = *(float *)(param_1 + 0x358);
  if (0.0 < fVar6) {
    fVar6 = fVar6 - param_2;
    *(float *)(param_1 + 0x358) = fVar6;
    bVar2 = fVar6 <= 0.0;
  }
  if (*param_3 == '\0') {
    if (((((*(byte *)(param_1 + 0x350) & 1) == 0) || (bVar2)) ||
        (fVar1 = *(float *)(param_1 + 0x2f4), fVar1 <= 0.0)) || (0.0 < fVar6)) goto LAB_141294d59;
    *(float *)(param_1 + 0x358) = fVar1;
    fVar6 = fVar1;
  }
  else if (0.0 < fVar6) {
    *(undefined4 *)(param_1 + 0x358) = 0;
    fVar6 = 0.0;
  }
  if (*param_3 != '\0') {
    return 1;
  }
LAB_141294d59:
  if (0.0 < fVar6) {
    *param_3 = '\x01';
    *param_4 = *(uint *)(param_1 + 0x354);
  }
  return 1;
}



// FUNCTION 141294da0 FUN_141294da0 body=287 status=ok
// SIG undefined FUN_141294da0(void)

void FUN_141294da0(longlong *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 0) {
    iVar2 = (**(code **)(*param_1 + 0x418))();
    if (iVar2 < 1) {
      iVar2 = (**(code **)(*param_1 + 0x440))(param_1);
    }
    else {
      iVar2 = (**(code **)(*param_1 + 0x418))();
    }
    iVar3 = (int)param_1[0x39] - param_2;
    if (iVar3 <= iVar2) {
      iVar2 = iVar3;
    }
    *(int *)(param_1 + 0x39) = iVar2;
    *(int *)(param_1 + 0x3b) = iVar2;
    (**(code **)(*param_1 + 0x260))(param_1);
  }
  else {
    iVar2 = (**(code **)(*param_1 + 0x448))();
    iVar3 = (**(code **)(*param_1 + 0x418))(param_1);
    if (iVar3 <= iVar2) {
      iVar2 = iVar3;
    }
    iVar3 = (int)param_1[0x39] - param_2;
    if (iVar3 < 0) {
      *(undefined4 *)(param_1 + 0x39) = 0;
    }
    else {
      if (iVar3 < iVar2) {
        iVar2 = iVar3;
      }
      *(int *)(param_1 + 0x39) = iVar2;
    }
  }
  iVar2 = FUN_14233f450(param_1);
  if (iVar2 == 3) {
    cVar1 = (**(code **)(*param_1 + 0x460))(param_1);
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + 0x4a0))(param_1,-param_2,0);
    }
    iVar3 = (**(code **)(*param_1 + 0x448))(param_1);
    iVar3 = iVar3 - (int)param_1[0x39];
    iVar2 = 0;
    if (-1 < iVar3) {
      iVar2 = iVar3;
    }
    *(int *)(param_1 + 0x3a) = iVar2;
    (**(code **)(*param_1 + 0x260))(param_1);
  }
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x32,0);
  return;
}



// FUNCTION 141294ec0 FUN_141294ec0 body=89 status=ok
// SIG undefined FUN_141294ec0(void)

void FUN_141294ec0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_14475bb68;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_GetPoolName_14475bbb0;
  }
  return;
}



// FUNCTION 141294f20 FUN_141294f20 body=133 status=ok
// SIG undefined FUN_141294f20(void)

void FUN_141294f20(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)operator_new(0xb0);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_FUN_14475bad8;
    *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar5 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    puVar5[2] = *(undefined8 *)(param_1 + 0x10);
    puVar5[3] = uVar4;
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    puVar5[4] = *(undefined8 *)(param_1 + 0x20);
    puVar5[5] = uVar4;
    uVar1 = *(undefined4 *)(param_1 + 0x34);
    uVar2 = *(undefined4 *)(param_1 + 0x38);
    uVar3 = *(undefined4 *)(param_1 + 0x3c);
    *(undefined4 *)(puVar5 + 6) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)((longlong)puVar5 + 0x34) = uVar1;
    *(undefined4 *)(puVar5 + 7) = uVar2;
    *(undefined4 *)((longlong)puVar5 + 0x3c) = uVar3;
    uVar1 = *(undefined4 *)(param_1 + 0x44);
    uVar2 = *(undefined4 *)(param_1 + 0x48);
    uVar3 = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(puVar5 + 8) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)((longlong)puVar5 + 0x44) = uVar1;
    *(undefined4 *)(puVar5 + 9) = uVar2;
    *(undefined4 *)((longlong)puVar5 + 0x4c) = uVar3;
    FUN_141289d90(puVar5 + 10,param_1 + 0x50);
    puVar5[0x14] = *(undefined8 *)(param_1 + 0xa0);
    *puVar5 = &PTR_FUN_14475bb20;
  }
  return;
}



// FUNCTION 141294fb0 FUN_141294fb0 body=687 status=ok
// SIG undefined FUN_141294fb0(void)

void FUN_141294fb0(longlong param_1)

{
  undefined4 *puVar1;
  void *_Dst;
  longlong lVar2;
  wchar_t *pwVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  int iVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined2 *_Src;
  int iVar10;
  uint uVar11;
  ulonglong local_res10;
  undefined8 local_res18;
  longlong local_68;
  int local_60;
  int local_5c;
  undefined2 *local_58;
  int local_50;
  undefined4 local_4c;
  wchar_t *local_48;
  int local_40;
  
  puVar8 = (undefined2 *)0x0;
  local_res10 = local_res10 & 0xffffffff00000000;
  if (((*(longlong *)(param_1 + 0x118) != 0) && (lVar2 = AActor::GetLevel(), lVar2 != 0)) &&
     (*(longlong *)(lVar2 + 0x20) != 0)) {
    local_res18 = *(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0x18);
    FName::ToString(&local_res18,&local_68);
    iVar10 = local_60;
    lVar2 = (longlong)local_60;
    local_60 = (4 - (uint)(local_60 != 0)) + local_60;
    if (local_5c < local_60) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,iVar10);
    }
    puVar1 = (undefined4 *)(local_68 + (lVar2 - (ulonglong)(iVar10 != 0)) * 2);
    *puVar1 = 0x440057;
    *(undefined2 *)(puVar1 + 1) = 0x41;
    *(undefined2 *)((longlong)puVar1 + 6) = 0;
    local_res18 = *(undefined8 *)(*(longlong *)(param_1 + 0x118) + 0x18);
    FName::ToString(&local_res18,&local_48);
    puVar9 = &DAT_143f3eda8;
    pwVar3 = L"";
    if (local_40 != 0) {
      pwVar3 = local_48;
    }
    pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar3,L'_');
    local_58 = (undefined2 *)0x0;
    local_4c = 0;
    lVar2 = -1;
    iVar10 = 0;
    if ((pwVar3 != (wchar_t *)0x0) && (iVar10 = 0, *pwVar3 != L'\0')) {
      lVar7 = -1;
      do {
        lVar7 = lVar7 + 1;
      } while (pwVar3[lVar7] != L'\0');
      iVar6 = (int)lVar7 + 1;
      local_50 = iVar6;
      if (0 < iVar6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
      }
      iVar10 = local_50;
      puVar8 = local_58;
      FGenericPlatformString::Memcpy(local_58,pwVar3,(longlong)iVar6 * 2);
    }
    if (local_48 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    if (iVar10 < 2) {
      local_res10 = *(ulonglong *)(*(longlong *)(param_1 + 0x118) + 0x18);
      FName::ToString(&local_res10,&local_58);
      puVar5 = local_58;
      _Src = &DAT_143f3eda8;
      uVar11 = 1;
      if (local_50 != 0) {
        _Src = local_58;
      }
    }
    else {
      puVar5 = local_58;
      _Src = &DAT_143f3eda8;
      uVar11 = (uint)local_res10;
      if (iVar10 != 0) {
        _Src = puVar8;
      }
    }
    do {
      iVar10 = local_60;
      lVar2 = lVar2 + 1;
    } while (_Src[lVar2] != 0);
    iVar6 = (int)lVar2;
    if (iVar6 != 0) {
      lVar2 = (longlong)local_60;
      local_60 = (uint)(local_60 == 0) + iVar6 + local_60;
      if (local_5c < local_60) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,iVar10);
      }
      _Dst = (void *)(local_68 + (lVar2 - (ulonglong)(iVar10 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar6 * 2);
      *(undefined2 *)((longlong)iVar6 * 2 + (longlong)_Dst) = 0;
      puVar5 = local_58;
    }
    if (((uVar11 & 1) != 0) && (puVar5 != (undefined2 *)0x0)) {
      FMemory::Free();
    }
    puVar4 = (undefined8 *)FString::ToUpper(&local_68,&local_48);
    if (*(int *)(puVar4 + 1) != 0) {
      puVar9 = (undefined2 *)*puVar4;
    }
    puVar4 = (undefined8 *)FName::FName(&local_res10,puVar9,1);
    *(undefined8 *)(param_1 + 0x750) = *puVar4;
    if (local_48 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    if (puVar8 != (undefined2 *)0x0) {
      FMemory::Free(puVar8);
    }
    if (local_68 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 141295260 InitializeModule body=63 status=ok
// SIG undefined InitializeModule(void)

undefined8 *
FStaticallyLinkedModuleRegistrant<FDefaultInstallBundleManagerModule>::InitializeModule(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *puVar1 = &PTR_FUN_1447571d0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1412952a0 FUN_1412952a0 body=55 status=ok
// SIG undefined FUN_1412952a0(void)

void FUN_1412952a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = &PTR_FUN_1447576d0;
    return;
  }
  return;
}



// FUNCTION 1412952e0 FUN_1412952e0 body=55 status=ok
// SIG undefined FUN_1412952e0(void)

void FUN_1412952e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = &PTR_FUN_144759b68;
    return;
  }
  return;
}



// FUNCTION 141295320 FUN_141295320 body=53 status=ok
// SIG undefined FUN_141295320(void)

void FUN_141295320(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new();
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = &PTR_FUN_1447550d0;
    *(undefined1 *)((longlong)puVar1 + 9) = 0;
    return;
  }
  return;
}



// FUNCTION 141295360 FUN_141295360 body=529 status=ok
// SIG undefined FUN_141295360(void)

void FUN_141295360(longlong *param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  wchar_t *pwVar8;
  undefined8 local_res8;
  
  if ((*(byte *)(param_1 + 0x60) & 4) != 0) {
    *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) & 0xfb;
    (**(code **)(*param_1 + 0x260))();
    if (*(char *)((longlong)param_1 + 0x31c) == '\0') {
      (**(code **)(*param_1 + 0x358))(param_1,0);
    }
    iVar4 = FUN_14233f450(param_1);
    if (iVar4 == 3) {
      if ((param_1[0x23] != 0) &&
         (plVar7 = *(longlong **)(param_1[0x23] + 0x150), plVar7 != (longlong *)0x0)) {
        uVar5 = AGFreezeCharacterCue::GetPrivateStaticClass();
        lVar6 = (**(code **)(*plVar7 + 0x628))(plVar7,uVar5);
        if ((lVar6 != 0) &&
           (plVar7 = (longlong *)FWeakObjectPtr::Get(lVar6 + 0x96c), plVar7 == param_1)) {
          FUN_140a96e80(lVar6,0);
        }
      }
      cVar3 = FUN_142d52a00(param_1 + 0x45);
      if (((cVar3 != '\0') && (param_1[0x30] != 0)) && (*(longlong *)(param_1[0x30] + 0x30) != 0)) {
        uVar5 = FUN_142d52a20(param_1 + 0x45);
        uVar5 = FArchive::operator<<(uVar5);
        lVar6 = FDuplicateDataWriter::GetSerializeContext(uVar5);
        if (lVar6 != 0) {
          lVar6 = FUN_142d62010(lVar6,*(undefined8 *)(param_1[0x30] + 0x30));
          pwVar8 = _guard_xfg_dispatch_icall_nop(L"&UWeaponShieldComponent::ResourceNowFull",L"::");
          pwVar2 = (wchar_t *)0x0;
          while (pwVar1 = pwVar8, pwVar1 != (wchar_t *)0x0) {
            pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
            pwVar2 = pwVar1;
          }
          FName::FName(&local_res8,pwVar2 + 2,1);
          TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar6 + 0x28,param_1,local_res8);
          pwVar8 = _guard_xfg_dispatch_icall_nop
                             (L"&UWeaponShieldComponent::ResourceNowRegenerating",L"::");
          pwVar2 = (wchar_t *)0x0;
          while (pwVar1 = pwVar8, pwVar1 != (wchar_t *)0x0) {
            pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
            pwVar2 = pwVar1;
          }
          FName::FName(&local_res8,pwVar2 + 2,1);
          TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar6 + 0x48,param_1,local_res8);
        }
      }
    }
    if (*(char *)((longlong)param_1 + 0x301) != '\x01') {
      FUN_1414ee0d0(param_1);
    }
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x54,0);
    return;
  }
  return;
}



// FUNCTION 141295580 FUN_141295580 body=146 status=ok
// SIG undefined FUN_141295580(void)

void FUN_141295580(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if ((param_2 != 0) && (lVar3 = *(longlong *)(param_2 + 0x488), lVar3 != 0)) {
    uVar1 = FUN_1430a8880();
    plVar2 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar1);
    if ((plVar2 != (longlong *)0x0) &&
       (plVar2 = (longlong *)(**(code **)(*plVar2 + 0xf0))(plVar2,0), plVar2 != (longlong *)0x0)) {
      uVar1 = UMovieSceneAudioSection::GetPrivateStaticClass();
      lVar3 = (**(code **)(*plVar2 + 0x7f8))(plVar2,uVar1,(char)plVar2[0xd2]);
      if ((lVar3 != 0) && (*(char *)(lVar3 + 0x25c) == '\0')) {
        FUN_1412aa9e0(lVar3,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 141295620 FUN_141295620 body=544 status=ok
// SIG undefined FUN_141295620(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141295620(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
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
  lVar3 = *(longlong *)(param_1 + 0x118);
  if (lVar3 != 0) {
    lVar2 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (lVar3 = UMediumDoorComponent::GetSecondDoorComponent(lVar3), lVar3 != 0)) {
      FUN_1412c6430(lVar3);
      return;
    }
  }
  if (*(longlong *)(param_1 + 0x118) != 0) {
    local_a8 = 0;
    uStack_98 = 0;
    local_a0 = FUN_141295620;
    uVar4 = AActor::GetWorldTimerManager();
    plVar5 = (longlong *)FMemory::Realloc(0,0x30,0);
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar5 + 1,param_1);
      *(undefined4 *)(plVar5 + 2) = (undefined4)local_a0;
      *(undefined4 *)((longlong)plVar5 + 0x14) = local_a0._4_4_;
      *(undefined4 *)(plVar5 + 3) = uStack_98;
      *(undefined4 *)((longlong)plVar5 + 0x1c) = uStack_94;
      lVar3 = FDelegateHandle::GenerateNewID();
      plVar5[5] = lVar3;
      *plVar5 = (longlong)&PTR_FUN_143f77bd0;
    }
    local_88 = 0;
    local_80 = 0;
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x30))(plVar5,&local_88);
    }
    FWeakObjectPtr::operator=(local_78,0);
    local_b0 = 0xbf800000;
    local_b8 = 0;
    local_70 = 0;
    local_38 = (longlong *)0x0;
    local_28 = 0;
    local_68 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar4,&local_a8,&local_88,0x3dcccccd);
    if (local_28 != 0) {
      plVar6 = local_58;
      if (local_38 != (longlong *)0x0) {
        plVar6 = local_38;
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6,0);
      }
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_88);
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x28))(plVar5,0);
      lVar3 = FMemory::Realloc(plVar5,0,0);
      if (lVar3 != 0) {
        FMemory::Free(lVar3);
      }
    }
  }
  return;
}



// FUNCTION 141295840 FUN_141295840 body=493 status=ok
// SIG undefined FUN_141295840(void)

void FUN_141295840(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined8 local_res8;
  
  if ((*(char *)(param_1 + 0x270) < '\0') ||
     (*(int *)(param_1 + 0x250) <= (int)*(char *)(param_1 + 0x270))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    lVar3 = FUN_14309ec30();
    if (lVar3 != 0) {
      lVar4 = FUN_14149b100();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        uVar6 = 0;
        if (*(longlong *)(param_1 + 0x288) != 0) {
          lVar4 = *(longlong *)(param_1 + 0x120);
          if (lVar4 == 0) {
            lVar4 = FUN_1423407b0(param_1);
          }
          if (*(longlong *)(lVar4 + 400) == 0) {
            uVar5 = *(undefined8 *)(lVar4 + 0x3f8);
          }
          else {
            uVar5 = *(undefined8 *)(*(longlong *)(lVar4 + 400) + 0x90);
          }
          FUN_142880530(uVar5,param_1 + 0x288);
          *(undefined8 *)(param_1 + 0x288) = 0;
        }
        lVar4 = (longlong)*(char *)(param_1 + 0x270) * 0x20 + *(longlong *)(param_1 + 0x248);
        if (*(char *)(lVar4 + 0x18) != '\0') {
          FUN_14308fb00(lVar3,*(char *)(lVar4 + 0x18),*(undefined1 *)(param_1 + 0x271));
        }
        if (*(char *)(lVar4 + 0x1a) != '\0') {
          FUN_14308fb00(lVar3,*(char *)(lVar4 + 0x1a),*(undefined1 *)(param_1 + 0x271));
        }
        plVar7 = *(longlong **)(param_1 + 0x278);
        uVar8 = (longlong)*(int *)(param_1 + 0x280) & 0x1fffffffffffffff;
        if (plVar7 + *(int *)(param_1 + 0x280) < plVar7) {
          uVar8 = uVar6;
        }
        if (uVar8 != 0) {
          do {
            plVar1 = (longlong *)*plVar7;
            if (plVar1 != (longlong *)0x0) {
              (**(code **)(*plVar1 + 0x418))(plVar1,&DAT_14653218c);
              FUN_142397540(plVar1,1);
            }
            plVar7 = plVar7 + 1;
            uVar6 = uVar6 + 1;
          } while (uVar6 != uVar8);
        }
        if (*(longlong *)(lVar4 + 0x10) != 0) {
          local_res8 = 0;
          FUN_14308aea0(lVar3,*(undefined8 *)(lVar4 + 0x10),1,&local_res8);
        }
      }
    }
    *(undefined1 *)(param_1 + 0x270) = 0xff;
  }
  return;
}



// FUNCTION 141295a40 FUN_141295a40 body=1215 status=ok
// SIG undefined FUN_141295a40(void)

void FUN_141295a40(longlong param_1,byte param_2)

{
  byte *pbVar1;
  uint *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  byte bVar13;
  int iVar14;
  bool bVar15;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (*(longlong *)(param_1 + 1000) != 0) {
    lVar6 = *(longlong *)(param_1 + 0x120);
    if (lVar6 == 0) {
      lVar6 = FUN_1423407b0();
    }
    if (*(longlong *)(lVar6 + 400) == 0) {
      uVar11 = *(undefined8 *)(lVar6 + 0x3f8);
    }
    else {
      uVar11 = *(undefined8 *)(*(longlong *)(lVar6 + 400) + 0x90);
    }
    FUN_142880530(uVar11,param_1 + 1000);
    *(undefined8 *)(param_1 + 1000) = 0;
  }
  bVar13 = *(byte *)(param_1 + 0x3b8) & 0xfe | param_2;
  *(byte *)(param_1 + 0x3b8) = bVar13;
  if ((bVar13 >> 1 & 1) == param_2) {
    return;
  }
  *(byte *)(param_1 + 0x3b8) = bVar13 & 0xfd | param_2 * '\x02';
  plVar7 = (longlong *)FUN_14309ed90(param_1);
  if (plVar7 == (longlong *)0x0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x3b8) & 2) == 0) {
    if ((*(byte *)(param_1 + 0x3b8) & 4) != 0) {
      FUN_1412a09a0(param_1);
    }
    plVar8 = *(longlong **)(param_1 + 0x3c0);
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x418))(plVar8,&DAT_14653218c);
      FUN_142359580(*(undefined8 *)(param_1 + 0x3c0));
    }
    goto LAB_141295edc;
  }
  plVar8 = (longlong *)FUN_1412996f0(param_1);
  if (((plVar8 == (longlong *)0x0) ||
      (plVar8 = (longlong *)(**(code **)(*plVar8 + 0x668))(plVar8), plVar8 == (longlong *)0x0)) ||
     (cVar3 = (**(code **)(*plVar8 + 0x768))(plVar8), cVar3 == '\0')) goto LAB_141295edc;
  if ((*(longlong *)(param_1 + 0x368) != 0) &&
     (plVar8 = (longlong *)(**(code **)(*plVar7 + 0x900))(plVar7,1,0), plVar8 != (longlong *)0x0)) {
    bVar15 = *(longlong *)(param_1 + 0x3c0) == 0;
    iVar14 = 1;
    if (bVar15) {
      plVar9 = (longlong *)FUN_140a79980(param_1);
      *(longlong **)(param_1 + 0x3c0) = plVar9;
      (**(code **)(*plVar9 + 0x638))(plVar9,0);
      (**(code **)(**(longlong **)(param_1 + 0x3c0) + 0x928))
                (*(longlong **)(param_1 + 0x3c0),*(undefined8 *)(param_1 + 0x368));
      pbVar1 = (byte *)(*(longlong *)(param_1 + 0x3c0) + 0x2f1);
      *pbVar1 = *pbVar1 & 0xef;
      puVar2 = (uint *)(*(longlong *)(param_1 + 0x3c0) + 0x398);
      *puVar2 = *puVar2 | 1;
      pbVar1 = (byte *)(*(longlong *)(param_1 + 0x3c0) + 0xb9);
      *pbVar1 = *pbVar1 & 0xfb;
      FUN_142397970(*(undefined8 *)(param_1 + 0x3c0),1);
      FUN_142398e60(*(undefined8 *)(param_1 + 0x3c0),1,0);
      *(undefined1 *)(*(longlong *)(param_1 + 0x3c0) + 0x714) = 1;
    }
    lVar6 = FUN_143077380(plVar7,1,0);
    if ((lVar6 == 0) ||
       (lVar10 = (**(code **)(**(longlong **)(param_1 + 0x3c0) + 0x560))
                           (*(longlong **)(param_1 + 0x3c0),0), lVar10 == lVar6)) {
      if (bVar15) goto LAB_141295c65;
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0x3c0) + 0x568))
                (*(longlong **)(param_1 + 0x3c0),0,lVar6);
LAB_141295c65:
      iVar4 = (**(code **)(**(longlong **)(param_1 + 0x3c0) + 0x6c8))();
      if (1 < iVar4) {
        if (((*(byte *)(param_1 + 0x39c) & 0x20) != 0) &&
           (iVar4 = (**(code **)(*plVar8 + 0x6c8))(plVar8), 1 < iVar4)) {
          lVar6 = plVar8[0xdf];
          iVar4 = 1;
          iVar5 = (**(code **)(*plVar8 + 0x6c8))(plVar8);
          if (iVar5 < (int)lVar6) {
            lVar6 = plVar8[0xdf];
            iVar5 = (**(code **)(*plVar8 + 0x6c8))(plVar8);
            iVar5 = (int)lVar6 - iVar5;
            iVar4 = 0;
            if (-1 < iVar5) {
              iVar4 = iVar5;
            }
            iVar4 = iVar4 + 1;
          }
          lVar6 = (**(code **)(*plVar8 + 0x560))(plVar8,iVar4);
          if ((lVar6 != 0) &&
             (iVar4 = (**(code **)(**(longlong **)(param_1 + 0x3c0) + 0x6c8))(), 1 < iVar4)) {
            do {
              lVar10 = (**(code **)(**(longlong **)(param_1 + 0x3c0) + 0x5a8))
                                 (*(longlong **)(param_1 + 0x3c0),iVar14,0,0);
              if (lVar10 != 0) {
                FUN_142589350(lVar10,lVar6);
              }
              iVar14 = iVar14 + 1;
            } while (iVar14 < iVar4);
          }
        }
        uVar11 = APlayArea::GetPrivateStaticClass();
        lVar6 = (**(code **)(*plVar7 + 0x628))(plVar7,uVar11);
        if (lVar6 != 0) {
          iVar14 = (**(code **)(**(longlong **)(param_1 + 0x3c0) + 0x6c8))();
          lVar10 = (**(code **)(**(longlong **)(param_1 + 0x3c0) + 0x560))
                             (*(longlong **)(param_1 + 0x3c0),iVar14 + -1);
          if (lVar10 == 0) {
LAB_141295dcc:
            lVar10 = (**(code **)(**(longlong **)(param_1 + 0x3c0) + 0x5a8))
                               (*(longlong **)(param_1 + 0x3c0),iVar14 + -1,0,0);
            if (lVar10 == 0) goto LAB_141295e2d;
          }
          else {
            lVar12 = FUN_1429ba110();
            if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar12 + 0x90) * 8) != lVar12 + 0x88)) {
              bVar15 = false;
            }
            else {
              bVar15 = true;
            }
            if (!bVar15) goto LAB_141295dcc;
          }
          FUN_141291890(lVar6,lVar10);
          lVar6 = FUN_14129d880(param_1);
          if (lVar6 != 0) {
            local_38 = *(undefined4 *)(lVar6 + 8);
            uStack_34 = *(undefined4 *)(lVar6 + 0xc);
            uStack_30 = *(undefined4 *)(lVar6 + 0x10);
            uStack_2c = *(undefined4 *)(lVar6 + 0x14);
            FUN_1425a2be0(lVar10,DAT_146878050,&local_38);
          }
        }
      }
    }
LAB_141295e2d:
    FUN_1412ae740(param_1);
    lVar6 = *(longlong *)(param_1 + 0x120);
    if (lVar6 == 0) {
      lVar6 = FUN_1423407b0(param_1);
    }
    FUN_14234b270(*(undefined8 *)(param_1 + 0x3c0),lVar6);
    FUN_142382f60(*(undefined8 *)(param_1 + 0x3c0),plVar8,&DAT_146af29ec,
                  *(undefined8 *)(param_1 + 0x1b8));
    FUN_142397540(*(undefined8 *)(param_1 + 0x3c0),0,1);
  }
  if ((*(byte *)(param_1 + 0x3b8) & 4) == 0) {
    FUN_1412abc50(param_1);
  }
LAB_141295edc:
  if (*(char *)(param_1 + 0x360) != '\0') {
    FUN_14308c3c0(plVar7,param_2);
  }
  return;
}



// FUNCTION 141295f00 FUN_141295f00 body=745 status=ok
// SIG undefined FUN_141295f00(void)

void FUN_141295f00(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  char param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  DWORD *pDVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong *plVar9;
  undefined8 local_118;
  longlong local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  undefined8 local_e0;
  undefined2 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined1 local_70 [8];
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 *local_48;
  longlong local_40;
  undefined1 *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  lVar3 = *(longlong *)(param_1 + 0x120);
  if (lVar3 == 0) {
    lVar3 = FUN_1423407b0();
  }
  lVar3 = FUN_140b5b830(lVar3);
  if (lVar3 != 0) {
    local_118 = *(undefined8 *)(param_1 + 0x118);
    if (*(char *)(param_1 + 0x958) != '\0') {
      local_118 = FUN_1412996f0(param_1);
    }
    local_48 = &local_118;
    local_38 = &stack0x00000038;
    local_40 = param_1;
    local_30 = param_4;
    local_28 = param_3;
    if (param_5 == '\0') {
      plVar9 = (longlong *)0x0;
      local_d0 = 0xbf800000;
      local_f8 = 0;
      local_d4 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_cc = 0x3f800000;
      local_98 = 0;
      uStack_90 = 0;
      local_f0 = 0;
      local_e8 = 0;
      local_e0 = 0;
      local_d8 = 0;
      local_c8 = 0;
      local_c0 = 0;
      local_b8 = 0;
      local_b0 = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_88 = 0;
      local_80 = 0;
      local_78 = 0;
      FWeakObjectPtr::operator=(local_70,0);
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      FUN_14128c6a0(&local_48,&local_108);
      pDVar5 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
      plVar6 = TlsGetValue(*pDVar5);
      if (plVar6 == (longlong *)0x0) {
        plVar6 = (longlong *)operator_new(0x18);
        if (plVar6 != (longlong *)0x0) {
          *plVar6 = 0;
          plVar6[1] = 0;
          *(undefined4 *)(plVar6 + 2) = 0;
          plVar9 = plVar6;
        }
        TlsSetValue(*pDVar5,plVar9);
        plVar6 = plVar9;
      }
      plVar9 = (longlong *)plVar6[1];
      if (plVar9 == (longlong *)0x0) {
        plVar9 = (longlong *)*plVar6;
        if (plVar9 == (longlong *)0x0) {
          lVar3 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar5 + 2);
          plVar6[1] = lVar3;
          if (lVar3 == 0) {
            puVar7 = (undefined8 *)FMemory::Malloc(0x2000,0);
            plVar6[1] = (longlong)puVar7;
            lVar3 = 0x1f;
            do {
              puVar2 = puVar7 + 0x20;
              *puVar7 = puVar2;
              lVar3 = lVar3 + -1;
              puVar7 = puVar2;
            } while (lVar3 != 0);
            *puVar2 = 0;
          }
          plVar9 = (longlong *)plVar6[1];
          iVar8 = 0x20;
          *(undefined4 *)(plVar6 + 2) = 0x20;
        }
        else {
          iVar8 = 0x20;
          plVar6[1] = (longlong)plVar9;
          *(undefined4 *)(plVar6 + 2) = 0x20;
          *plVar6 = 0;
        }
      }
      else {
        iVar8 = (int)plVar6[2];
      }
      plVar6[1] = *plVar9;
      *(int *)(plVar6 + 2) = iVar8 + -1;
      *(undefined4 *)(plVar9 + 1) = 0xff;
      *plVar9 = (longlong)&PTR_FUN_143f3edd8;
      local_20 = 0;
      *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
      *plVar9 = (longlong)&PTR_FUN_144758218;
      *(undefined1 *)(plVar9 + 0x1b) = 0;
      plVar9[0x1c] = 0;
      FUN_140b4c240(plVar9 + 2,&local_108);
      lVar3 = plVar9[0x1c];
      piVar1 = (int *)(lVar3 + 0x48);
      if (lVar3 != 0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      local_110 = lVar3;
      FUN_1412ab0e0(plVar9,0,0xff,1);
      if (lVar3 != 0) {
        LOCK();
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          FGraphEvent::Recycle(local_110);
        }
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_60);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&uStack_90);
      if (local_b0 != 0) {
        FMemory::Free();
      }
      FUN_1409f5880(&uStack_100);
    }
    else {
      uVar4 = FUN_140b58fc0(lVar3);
      FUN_14128c6a0(&local_48,uVar4);
      FUN_140b5a8a0(lVar3,uVar4);
    }
  }
  return;
}



// FUNCTION 1412961f0 Empty body=405 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FString,FVector>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
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
    uVar4 = *puVar7;
    iStack_40 = 0;
    local_58 = 0;
    while (uVar4 == 0) {
      lVar5 = (longlong)local_58;
      iStack_40 = iStack_40 + 0x20;
      iVar6 = local_58 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar6;
      if (bVar3) goto LAB_1412962c1;
      uVar4 = puVar7[lVar5 + 1];
    }
    uStack_54 = -uVar4 & uVar4;
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
LAB_1412962c1:
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
      if (*(longlong *)(*param_1 + (longlong)iStack_1c * 0x28) != 0) {
        FMemory::Free();
      }
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  uVar4 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar4) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar4;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 1412963a0 FUN_1412963a0 body=102 status=ok
// SIG undefined FUN_1412963a0(void)

void FUN_1412963a0(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  char cVar2;
  longlong *plVar3;
  
  if ((*(byte *)(param_1 + 0x3b8) & 8) != 0) {
    plVar3 = (longlong *)IStreamingManager::Get();
    cVar2 = (**(code **)(*plVar3 + 0x98))(plVar3);
    if (cVar2 != '\0') {
      uVar1 = IStreamingManager::Get();
      plVar3 = (longlong *)FVoicePacketImpl::GetSampleCounter(uVar1);
      (**(code **)(*plVar3 + 0x108))(plVar3,param_1);
      *(byte *)(param_1 + 0x3b8) = *(byte *)(param_1 + 0x3b8) & 0xf7;
    }
  }
  FUN_14233a670(param_1,param_2);
  return;
}



// FUNCTION 141296410 FUN_141296410 body=148 status=ok
// SIG undefined FUN_141296410(void)

void FUN_141296410(longlong param_1,char param_2,undefined1 param_3,undefined1 param_4)

{
  char cVar1;
  
  if ((*(char *)(*(longlong *)(param_1 + 0x968) + 0x140) != '\0') && (param_2 == '\x01')) {
    *(byte *)(param_1 + 0x9b8) = *(byte *)(param_1 + 0x9b8) & 0xfe;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x9a0,0);
    FUN_14308fb00(param_1,0x13);
    cVar1 = FUN_14307edb0(param_1,1);
    if (cVar1 == '\0') {
      return;
    }
  }
  FUN_143071a30(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1412964b0 FUN_1412964b0 body=617 status=ok
// SIG undefined FUN_1412964b0(void)

void FUN_1412964b0(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  byte bVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  byte bVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined4 local_a8 [2];
  uint local_a0;
  longlong *local_98;
  longlong local_90;
  code *local_88 [2];
  undefined1 local_78 [32];
  undefined8 local_58;
  undefined4 local_48;
  
  plVar1 = param_2 + 2;
  plVar10 = (longlong *)0x0;
  local_58 = 0;
  local_48 = 0;
  if (*(int *)(param_2 + 8) != 0) {
    plVar3 = (longlong *)param_2[6];
    if ((longlong *)param_2[6] == (longlong *)0x0) {
      plVar3 = plVar1;
    }
    if (plVar3 != (longlong *)0x0) {
      plVar3 = (longlong *)(**(code **)*plVar3)(plVar3,local_78);
      (**(code **)(*plVar3 + 8))(plVar3);
      local_88[0] = (code *)*param_2;
      goto LAB_141296516;
    }
  }
  local_88[0] = AK::MemoryMgr::StartProfileThreadUsage;
LAB_141296516:
  FUN_142ff2440(param_1,local_88);
  lVar4 = FUN_14129ee40(param_1);
  if (lVar4 != 0) {
    bVar2 = ATTLBaseBossWyvePawn::IsExecRotation(lVar4);
    bVar8 = 0;
    local_a0 = (uint)bVar2;
    if (local_a0 != 0) {
      do {
        (**(code **)(*param_1 + 0x540))(param_1,&local_98,bVar8);
        if ((local_98 != (longlong *)0x0) &&
           (plVar5 = (longlong *)FUN_142e49950(), plVar3 = local_98, local_98 != (longlong *)0x0)) {
LAB_1412965b4:
          if (plVar3 != plVar5) goto code_r0x0001412965b9;
          plVar5 = (longlong *)FUN_142e49950();
          for (plVar3 = local_98;
              (plVar9 = plVar10, plVar3 != (longlong *)0x0 && (plVar9 = local_98, plVar3 != plVar5))
              ; plVar3 = (longlong *)plVar3[6]) {
          }
          lVar4 = plVar9[0x1f];
          if (lVar4 == 0) {
            (**(code **)(*plVar9 + 0x368))(plVar9);
            lVar4 = plVar9[0x1f];
          }
          plVar3 = *(longlong **)(lVar4 + 0x118);
          plVar5 = (longlong *)((longlong)*(int *)(lVar4 + 0x120) & 0x1fffffffffffffff);
          if (plVar3 + *(int *)(lVar4 + 0x120) < plVar3) {
            plVar5 = plVar10;
          }
          plVar9 = plVar10;
          if (plVar5 != (longlong *)0x0) {
            do {
              lVar4 = *plVar3;
              if (lVar4 != 0) {
                local_a8[0] = 0;
                plVar6 = plVar10;
                local_90 = lVar4;
                if (*(int *)(param_2 + 8) != 0) {
                  plVar7 = (longlong *)param_2[6];
                  if ((longlong *)param_2[6] == (longlong *)0x0) {
                    plVar7 = plVar1;
                  }
                  if (plVar7 != (longlong *)0x0) {
                    plVar6 = (longlong *)(**(code **)(*plVar7 + 8))();
                  }
                }
                (*(code *)*param_2)(plVar6,&local_90,local_a8);
              }
              plVar3 = plVar3 + 1;
              plVar9 = (longlong *)((longlong)plVar9 + 1);
            } while (plVar9 != plVar5);
          }
        }
LAB_141296691:
        bVar8 = bVar8 + 1;
      } while (bVar8 < local_a0);
    }
  }
  if (*(int *)(param_2 + 8) != 0) {
    plVar10 = (longlong *)param_2[6];
    if ((longlong *)param_2[6] == (longlong *)0x0) {
      plVar10 = plVar1;
    }
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x10))(plVar10,0);
    }
  }
  if (param_2[6] != 0) {
    FMemory::Free();
  }
  return;
code_r0x0001412965b9:
  plVar3 = (longlong *)plVar3[6];
  if (plVar3 == (longlong *)0x0) goto LAB_141296691;
  goto LAB_1412965b4;
}



// FUNCTION 141296720 FUN_141296720 body=125 status=ok
// SIG undefined FUN_141296720(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_141296720(float *param_1,float *param_2,float param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined4 in_EAX;
  uint uVar5;
  int iVar6;
  
  auVar1._4_4_ = -(uint)(param_3 < (float)((uint)(param_1[5] - param_2[5]) & uRam0000000146877c14));
  auVar1._0_4_ = -(uint)(param_3 < (float)((uint)(param_1[4] - param_2[4]) & _DAT_146877c10));
  auVar1._8_4_ = -(uint)(param_3 < (float)((uint)(param_1[6] - param_2[6]) & uRam0000000146877c18));
  auVar1._12_4_ = -(uint)(param_3 < (float)((uint)(param_1[7] - param_2[7]) & uRam0000000146877c1c))
  ;
  uVar5 = movmskps(in_EAX,auVar1);
  if (uVar5 == 0) {
    auVar2._4_4_ = -(uint)(param_3 < (float)((uint)(param_1[1] - param_2[1]) & uRam0000000146877c14)
                          );
    auVar2._0_4_ = -(uint)(param_3 < (float)((uint)(*param_1 - *param_2) & _DAT_146877c10));
    auVar2._8_4_ = -(uint)(param_3 < (float)((uint)(param_1[2] - param_2[2]) & uRam0000000146877c18)
                          );
    auVar2._12_4_ =
         -(uint)(param_3 < (float)((uint)(param_1[3] - param_2[3]) & uRam0000000146877c1c));
    iVar6 = movmskps(0,auVar2);
    if (((iVar6 == 0) ||
        (auVar3._4_4_ = -(uint)(param_3 <
                               (float)((uint)(param_1[1] + param_2[1]) & uRam0000000146877c14)),
        auVar3._0_4_ = -(uint)(param_3 < (float)((uint)(*param_1 + *param_2) & _DAT_146877c10)),
        auVar3._8_4_ = -(uint)(param_3 <
                              (float)((uint)(param_1[2] + param_2[2]) & uRam0000000146877c18)),
        auVar3._12_4_ =
             -(uint)(param_3 < (float)((uint)(param_1[3] + param_2[3]) & uRam0000000146877c1c)),
        uVar5 = movmskps(iVar6,auVar3), uVar5 == 0)) &&
       (auVar4._4_4_ = -(uint)(param_3 <
                              (float)((uint)(param_1[9] - param_2[9]) & uRam0000000146877c14)),
       auVar4._0_4_ = -(uint)(param_3 < (float)((uint)(param_1[8] - param_2[8]) & _DAT_146877c10)),
       auVar4._8_4_ = -(uint)(param_3 <
                             (float)((uint)(param_1[10] - param_2[10]) & uRam0000000146877c18)),
       auVar4._12_4_ =
            -(uint)(param_3 < (float)((uint)(param_1[0xb] - param_2[0xb]) & uRam0000000146877c1c)),
       uVar5 = movmskps(0,auVar4), uVar5 == 0)) {
      return 1;
    }
  }
  return uVar5 & 0xffffff00;
}



// FUNCTION 1412967a0 FUN_1412967a0 body=298 status=ok
// SIG undefined FUN_1412967a0(void)

void FUN_1412967a0(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x10);
  plVar3 = (longlong *)FWeakObjectPtr::Get(param_1 + 8);
  if (((lVar2 != 0) && (plVar3 != (longlong *)0x0)) && (param_2 != 0)) {
    lVar4 = FUN_1414eba50();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar5 = FUN_1429bed90();
      lVar4 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar5);
      if (lVar4 != 0) {
        plVar7 = *(longlong **)(lVar2 + 0x2b8);
        plVar6 = plVar7 + (longlong)*(int *)(lVar2 + 0x2c0) * 4;
        for (; plVar7 != plVar6; plVar7 = plVar7 + 4) {
          if ((*plVar7 == 0) || (*plVar7 == *(longlong *)(lVar4 + 0x18))) {
            FUN_142fe6010(lVar2,lVar4,plVar7,0);
          }
        }
        FUN_141291a80(lVar2,lVar4,0);
      }
      FUN_142feb130(lVar2,plVar3);
    }
  }
  return;
}



// FUNCTION 1412968d0 FUN_1412968d0 body=152 status=ok
// SIG undefined FUN_1412968d0(void)

void FUN_1412968d0(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68 [96];
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 8);
  local_98 = *(undefined8 *)(param_1 + 0x20);
  uStack_90 = *(undefined8 *)(param_1 + 0x28);
  local_88 = *(undefined4 *)(param_1 + 0x30);
  uStack_84 = *(undefined4 *)(param_1 + 0x34);
  uStack_80 = *(undefined4 *)(param_1 + 0x38);
  uStack_7c = *(undefined4 *)(param_1 + 0x3c);
  pcVar1 = *(code **)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  local_78 = *(undefined8 *)(param_1 + 0x40);
  uStack_70 = *(undefined8 *)(param_1 + 0x48);
  uVar4 = FUN_141289d90(local_68,param_1 + 0x50);
  (*pcVar1)((int)uVar2 + lVar3,param_2,&local_98,uVar4);
  return;
}



// FUNCTION 141296970 FUN_141296970 body=300 status=ok
// SIG undefined FUN_141296970(void)

undefined8 FUN_141296970(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x10);
  plVar3 = (longlong *)FWeakObjectPtr::Get(param_1 + 8);
  if (((lVar2 != 0) && (plVar3 != (longlong *)0x0)) && (param_2 != 0)) {
    lVar4 = FUN_1414eba50();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar5 = FUN_1429bed90();
      lVar4 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar5);
      if (lVar4 != 0) {
        plVar7 = *(longlong **)(lVar2 + 0x2b8);
        plVar6 = plVar7 + (longlong)*(int *)(lVar2 + 0x2c0) * 4;
        for (; plVar7 != plVar6; plVar7 = plVar7 + 4) {
          if ((*plVar7 == 0) || (*plVar7 == *(longlong *)(lVar4 + 0x18))) {
            FUN_142fe6010(lVar2,lVar4,plVar7,0);
          }
        }
        FUN_141291a80(lVar2,lVar4,0);
      }
      FUN_142feb130(lVar2,plVar3);
    }
  }
  return 1;
}



// FUNCTION 141296aa0 FUN_141296aa0 body=171 status=ok
// SIG undefined FUN_141296aa0(void)

bool FUN_141296aa0(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68 [96];
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar3 != 0) {
    lVar4 = FWeakObjectPtr::Get(param_1 + 8);
    local_98 = *(undefined8 *)(param_1 + 0x20);
    uStack_90 = *(undefined8 *)(param_1 + 0x28);
    local_88 = *(undefined4 *)(param_1 + 0x30);
    uStack_84 = *(undefined4 *)(param_1 + 0x34);
    uStack_80 = *(undefined4 *)(param_1 + 0x38);
    uStack_7c = *(undefined4 *)(param_1 + 0x3c);
    pcVar1 = *(code **)(param_1 + 0x10);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    local_78 = *(undefined8 *)(param_1 + 0x40);
    uStack_70 = *(undefined8 *)(param_1 + 0x48);
    uVar5 = FUN_141289d90(local_68,param_1 + 0x50);
    (*pcVar1)((int)uVar2 + lVar4,param_2,&local_98,uVar5);
  }
  return lVar3 != 0;
}



// FUNCTION 141296b50 FUN_141296b50 body=293 status=ok
// SIG undefined FUN_141296b50(void)

void FUN_141296b50(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_140b58ef0(param_1 + 2,param_3,param_1 + 0x1c);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x19);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x13);
  if (param_1[0xf] != 0) {
    FMemory::Free();
  }
  FUN_1409f5880(param_1 + 5);
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *param_1 = &PTR_FUN_144758218;
  if (param_1[0x1c] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x1c] + 0x48);
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



// FUNCTION 141296c80 FUN_141296c80 body=183 status=ok
// SIG undefined FUN_141296c80(void)

undefined8 * FUN_141296c80(longlong param_1)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined2 *local_18;
  int local_10;
  
  FString::FString(&local_18);
  puVar4 = *(undefined8 **)(param_1 + 0x170);
  puVar5 = puVar4 + (longlong)*(int *)(param_1 + 0x178) * 0xc;
  while( true ) {
    if (puVar4 == puVar5) {
      if (local_18 != (undefined2 *)0x0) {
        FMemory::Free(local_18);
      }
      return (undefined8 *)0x0;
    }
    puVar3 = &DAT_143f3eda8;
    if (local_10 != 0) {
      puVar3 = local_18;
    }
    if (*(int *)(puVar4 + 1) == 0) {
      puVar2 = &DAT_143f3eda8;
    }
    else {
      puVar2 = (undefined2 *)*puVar4;
    }
    iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar2,puVar3);
    if (iVar1 == 0) break;
    puVar4 = puVar4 + 0xc;
  }
  if (local_18 == (undefined2 *)0x0) {
    return puVar4;
  }
  FMemory::Free(local_18);
  return puVar4;
}



// FUNCTION 141296d40 FUN_141296d40 body=187 status=ok
// SIG undefined FUN_141296d40(void)

longlong FUN_141296d40(longlong param_1)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined2 *local_18;
  int local_10;
  
  FString::FString(&local_18);
  lVar4 = *(longlong *)(param_1 + 0x160);
  lVar5 = (longlong)*(int *)(param_1 + 0x168) * 0xf0 + lVar4;
  while( true ) {
    if (lVar4 == lVar5) {
      if (local_18 != (undefined2 *)0x0) {
        FMemory::Free(local_18);
      }
      return 0;
    }
    puVar3 = &DAT_143f3eda8;
    if (local_10 != 0) {
      puVar3 = local_18;
    }
    if (*(int *)(lVar4 + 0x10) == 0) {
      puVar2 = &DAT_143f3eda8;
    }
    else {
      puVar2 = *(undefined2 **)(lVar4 + 8);
    }
    iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar2,puVar3);
    if (iVar1 == 0) break;
    lVar4 = lVar4 + 0xf0;
  }
  if (local_18 == (undefined2 *)0x0) {
    return lVar4;
  }
  FMemory::Free(local_18);
  return lVar4;
}



// FUNCTION 141296e00 FUN_141296e00 body=184 status=ok
// SIG undefined FUN_141296e00(void)

longlong FUN_141296e00(longlong param_1)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined2 *local_18;
  int local_10;
  
  FString::FString(&local_18);
  lVar4 = *(longlong *)(param_1 + 0x150);
  lVar5 = (longlong)*(int *)(param_1 + 0x158) * 0x60 + lVar4;
  while( true ) {
    if (lVar4 == lVar5) {
      if (local_18 != (undefined2 *)0x0) {
        FMemory::Free(local_18);
      }
      return 0;
    }
    puVar3 = &DAT_143f3eda8;
    if (local_10 != 0) {
      puVar3 = local_18;
    }
    if (*(int *)(lVar4 + 0x10) == 0) {
      puVar2 = &DAT_143f3eda8;
    }
    else {
      puVar2 = *(undefined2 **)(lVar4 + 8);
    }
    iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar2,puVar3);
    if (iVar1 == 0) break;
    lVar4 = lVar4 + 0x60;
  }
  if (local_18 == (undefined2 *)0x0) {
    return lVar4;
  }
  FMemory::Free(local_18);
  return lVar4;
}



// FUNCTION 141296ec0 FUN_141296ec0 body=296 status=ok
// SIG undefined FUN_141296ec0(void)

void FUN_141296ec0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  
  lVar8 = *(longlong *)(param_1 + 0x180);
  lVar10 = (longlong)*(int *)(param_1 + 0x188) * 0x20 + lVar8;
  if (lVar8 != lVar10) {
    do {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      plVar9 = *(longlong **)(lVar8 + 8);
      plVar1 = plVar9 + *(int *)(lVar8 + 0x10);
      for (; plVar9 != plVar1; plVar9 = plVar9 + 1) {
        if (*plVar9 != 0) {
          lVar3 = FUN_142dfdfe0();
          lVar5 = *plVar9;
          lVar6 = lVar5;
          if (lVar5 != 0) {
LAB_141296f40:
            if (lVar6 != lVar3) goto code_r0x000141296f45;
            if (lVar5 != 0) {
              plVar4 = (longlong *)FUN_142dfdfe0();
              for (plVar2 = (longlong *)*plVar9;
                  (plVar7 = (longlong *)0x0, plVar2 != (longlong *)0x0 &&
                  (plVar7 = (longlong *)*plVar9, plVar2 != plVar4)); plVar2 = (longlong *)plVar2[6])
              {
              }
              lVar5 = plVar7[0x1f];
              if (lVar5 == 0) {
                (**(code **)(*plVar7 + 0x368))(plVar7);
                lVar5 = plVar7[0x1f];
                if (lVar5 != 0) goto LAB_141296f9a;
              }
              else {
LAB_141296f9a:
                if ((*(char *)(lVar5 + 0xe1) == '\0') &&
                   (*(int *)(lVar8 + 0x18) = *(int *)(lVar8 + 0x18) + 1,
                   *(char *)(lVar5 + 0x8a) == '\0')) {
                  *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                }
              }
            }
          }
        }
LAB_141296fb2:
      }
      lVar8 = lVar8 + 0x20;
    } while (lVar8 != lVar10);
  }
  return;
code_r0x000141296f45:
  lVar6 = *(longlong *)(lVar6 + 0x30);
  if (lVar6 == 0) goto LAB_141296fb2;
  goto LAB_141296f40;
}



// FUNCTION 141297010 FUN_141297010 body=393 status=ok
// SIG undefined FUN_141297010(void)

void FUN_141297010(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong *local_res18;
  longlong local_res20;
  
  if ((param_1 == (longlong *)0x0) || (param_1[0xde] == 0)) {
    plVar1 = (longlong *)param_2[7];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_2);
      param_2[7] = 0;
      return;
    }
  }
  else {
    iVar3 = FUN_142607040();
    iVar4 = iVar3;
    if (iVar3 < 1) {
      iVar4 = (**(code **)(*param_1 + 0x6c8))(param_1);
    }
    iVar7 = 0;
    if (0 < iVar4) {
      do {
        if (iVar3 < 1) {
          lVar5 = (**(code **)(*param_1 + 0x560))(param_1,iVar7);
          if (lVar5 == 0) {
LAB_1412970f4:
            lVar5 = (**(code **)(*param_1 + 0x5a8))(param_1,iVar7,0,0);
            goto LAB_14129710d;
          }
          lVar6 = FUN_1429ba110();
          if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) goto LAB_1412970f4;
LAB_141297115:
          plVar1 = (longlong *)param_2[7];
          local_res20 = lVar5;
          if (plVar1 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::_guard_xfg_dispatch_icall_nop();
          }
          (**(code **)(*plVar1 + 0x10))(plVar1,&local_res20);
        }
        else {
          FUN_142606f60(param_1,&local_res18);
          lVar5 = (**(code **)(*param_1 + 0x9a0))(param_1,local_res18);
LAB_14129710d:
          if (lVar5 != 0) goto LAB_141297115;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar4);
    }
    plVar1 = (longlong *)param_2[7];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_2);
      param_2[7] = 0;
    }
  }
  return;
}



// FUNCTION 1412971a0 FUN_1412971a0 body=874 status=ok
// SIG undefined FUN_1412971a0(void)

void FUN_1412971a0(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  ulonglong uVar16;
  bool bVar17;
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  ulonglong local_50;
  longlong *local_48;
  undefined8 local_40;
  
  plVar6 = (longlong *)IStreamingManager::Get();
  cVar3 = (**(code **)(*plVar6 + 0x98))(plVar6);
  if (cVar3 != '\0') {
    uVar16 = 0;
    local_60._4_4_ = 0;
    local_68 = (longlong *)0x0;
    local_60 = 0;
    local_48 = (longlong *)0x0;
    local_40 = 0;
    uVar10 = uVar16;
    if (*(longlong *)(param_1 + 0x388) != 0) {
      FUN_142607e10(*(longlong *)(param_1 + 0x388),&local_68);
      uVar10 = local_60 & 0xffffffff;
    }
    if (*(longlong *)(param_1 + 0x368) != 0) {
      iVar5 = *(int *)(*(longlong *)(param_1 + 0x368) + 0x78);
      iVar9 = (int)uVar10 + iVar5;
      if (local_60._4_4_ < iVar9) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(&local_68,iVar9);
        uVar10 = local_60 & 0xffffffff;
      }
      if (0 < iVar5) {
        do {
          lVar7 = UStaticMesh::GetMaterial(*(undefined8 *)(param_1 + 0x368),uVar16);
          uVar10 = local_60;
          lVar13 = (longlong)(int)local_60;
          iVar9 = (int)local_60 + 1;
          local_60 = CONCAT44(local_60._4_4_,iVar9);
          if (local_60._4_4_ < iVar9) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                      (&local_68,uVar10 & 0xffffffff);
          }
          uVar11 = (int)uVar16 + 1;
          uVar16 = (ulonglong)uVar11;
          local_68[lVar13] = lVar7;
        } while ((int)uVar11 < iVar5);
        uVar10 = local_60 & 0xffffffff;
      }
    }
    uVar12 = 0;
    iVar5 = (int)uVar10;
    plVar6 = local_68;
    uVar16 = uVar12;
    if (0 < iVar5) {
      do {
        lVar7 = plVar6[uVar16];
        iVar9 = (int)uVar10 + -1;
        for (lVar13 = (longlong)iVar9; iVar5 = (int)uVar10, (longlong)uVar16 < lVar13;
            lVar13 = lVar13 + -1) {
          if (plVar6[lVar13] == lVar7) {
            iVar4 = (iVar5 - iVar9) + -1;
            if (0 < iVar4) {
              iVar4 = 1;
            }
            if (iVar4 != 0) {
              _guard_xfg_dispatch_icall_nop
                        (plVar6 + iVar9,plVar6 + (iVar5 - iVar4),(longlong)iVar4 << 3);
              iVar5 = (int)local_60;
            }
            local_60 = CONCAT44(local_60._4_4_,iVar5 + -1);
            TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(&local_68);
            uVar10 = local_60 & 0xffffffff;
            plVar6 = local_68;
          }
          iVar9 = iVar9 + -1;
        }
        uVar11 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar11;
        uVar16 = uVar16 + 1;
      } while ((int)uVar11 < iVar5);
    }
    lVar7 = *(longlong *)(param_1 + 0x120);
    local_58 = (longlong *)0x0;
    local_50 = 0;
    if (lVar7 == 0) {
      lVar7 = FUN_1423407b0(param_1);
      iVar5 = (int)local_60;
      plVar6 = local_68;
    }
    uVar2 = *(undefined4 *)(lVar7 + 0x1c0);
    plVar1 = plVar6 + iVar5;
    plVar14 = plVar6;
    plVar15 = local_58;
    for (; plVar6 != plVar1; plVar6 = plVar6 + 1) {
      plVar14 = (longlong *)*plVar6;
      if (plVar14 != (longlong *)0x0) {
        bVar17 = (longlong)local_50 < 0;
        local_50 = local_50 & 0xffffffff00000000;
        if (bVar17) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(&local_58,0);
        }
        (**(code **)(*plVar14 + 0x2b8))(plVar14,&local_58,3,0,uVar2,0);
        uVar16 = 0;
        uVar10 = (ulonglong)((longlong)(local_58 + (int)local_50) + (7 - (longlong)local_58)) >> 3;
        if (local_58 + (int)local_50 < local_58) {
          uVar10 = uVar16;
        }
        plVar14 = local_58;
        plVar15 = local_58;
        if (uVar10 != 0) {
          do {
            lVar7 = *plVar14;
            for (plVar15 = local_48; plVar15 != local_48 + (int)local_40; plVar15 = plVar15 + 1) {
              if (*plVar15 == lVar7) {
                if ((int)((longlong)plVar15 - (longlong)local_48 >> 3) != -1) goto LAB_141297443;
                break;
              }
            }
            lVar13 = (longlong)(int)local_40;
            iVar5 = (int)local_40 + 1;
            local_40 = CONCAT44(local_40._4_4_,iVar5);
            if (local_40._4_4_ < iVar5) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_48);
            }
            local_48[lVar13] = lVar7;
LAB_141297443:
            plVar14 = plVar14 + 1;
            uVar16 = uVar16 + 1;
            plVar15 = local_58;
          } while (uVar16 != uVar10);
        }
      }
      plVar14 = local_68;
    }
    if (0 < (int)local_40) {
      uVar8 = IStreamingManager::Get();
      plVar6 = (longlong *)FVoicePacketImpl::GetSampleCounter(uVar8);
      (**(code **)(*plVar6 + 0xf8))(plVar6,param_1,&local_48,0,0);
      *(byte *)(param_1 + 0x3b8) = *(byte *)(param_1 + 0x3b8) | 8;
      plVar14 = local_68;
      plVar15 = local_58;
    }
    if (plVar15 != (longlong *)0x0) {
      FMemory::Free(plVar15);
      plVar14 = local_68;
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
      plVar14 = local_68;
    }
    if (plVar14 != (longlong *)0x0) {
      FMemory::Free(plVar14);
    }
  }
  return;
}



// FUNCTION 141297510 FUN_141297510 body=318 status=ok
// SIG undefined FUN_141297510(void)

void FUN_141297510(longlong *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = FUN_14233f450();
  if (iVar2 == 3) {
    iVar2 = (int)((float)(*(int *)((longlong)param_1 + 0x23c) - (int)param_1[0x47]) * 0.5 +
                 (float)(int)param_1[0x47]);
    iVar3 = rand();
    fVar1 = *(float *)((longlong)param_1 + 0x274);
    if (fVar1 <= (float)iVar3 * 3.051851e-05) {
      iVar3 = *(int *)((longlong)param_1 + 0x23c) - iVar2;
      *(float *)((longlong)param_1 + 0x274) = *(float *)(param_1 + 0x48) + fVar1;
      if (iVar3 + 1 < 1) {
        iVar3 = 0;
      }
      else {
        iVar4 = rand();
        iVar4 = (int)((float)iVar4 * 3.051851e-05 * (float)(iVar3 + 1));
        if (iVar4 <= iVar3) {
          iVar3 = iVar4;
        }
      }
      iVar3 = iVar3 + iVar2;
    }
    else {
      iVar3 = (int)param_1[0x47];
      iVar2 = iVar2 - iVar3;
      *(float *)((longlong)param_1 + 0x274) = fVar1 - *(float *)(param_1 + 0x48);
      if (0 < iVar2 + 1) {
        iVar4 = rand();
        iVar4 = (int)((float)iVar4 * 3.051851e-05 * (float)(iVar2 + 1));
        if (iVar4 <= iVar2) {
          iVar2 = iVar4;
        }
        iVar3 = iVar2 + iVar3;
      }
    }
    *(int *)(param_1 + 0x4c) = iVar3;
    (**(code **)(*param_1 + 0x260))(param_1);
  }
  return;
}



// FUNCTION 141297650 FUN_141297650 body=230 status=ok
// SIG undefined FUN_141297650(void)

void FUN_141297650(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  plVar6 = *(longlong **)(param_1 + 0x1f8);
  plVar1 = plVar6 + *(int *)(param_1 + 0x200);
  if (plVar6 != plVar1) {
    do {
      if ((*plVar6 != 0) && (*(longlong *)(*plVar6 + 0x38) != 0)) {
        lVar4 = FSoftObjectPath::TryLoad();
        if (lVar4 == 0) {
LAB_1412976ec:
          lVar4 = 0;
        }
        else {
          lVar5 = FUN_1414f3400();
          if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (!bVar3) goto LAB_1412976ec;
        }
        iVar2 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
        }
        *(longlong *)(*param_2 + (longlong)iVar2 * 8) = lVar4;
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar1);
  }
  return;
}



// FUNCTION 141297740 FUN_141297740 body=103 status=ok
// SIG undefined FUN_141297740(void)

void FUN_141297740(longlong *param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x460))();
  if (cVar1 != '\0') {
    iVar2 = (**(code **)(*param_1 + 0x418))(param_1);
    if (0 < iVar2) {
                    /* WARNING: Could not recover jumptable at 0x000141297771. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x418))(param_1);
      return;
    }
  }
  if (param_1[0x3c] != 0) {
    FUN_142ff7c90(param_1[0x3c],param_1[0x36]);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001412977a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x430))(param_1);
  return;
}



// FUNCTION 1412977b0 FUN_1412977b0 body=194 status=ok
// SIG undefined FUN_1412977b0(void)

undefined8 FUN_1412977b0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  
  if (*(longlong *)(param_1 + 0x48) != 0) {
    lVar3 = FUN_142dfdfe0();
    lVar5 = *(longlong *)(param_1 + 0x48);
    for (lVar1 = lVar5; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar3) {
        if (lVar5 != 0) {
          if (lVar5 == 0) goto LAB_141297826;
          plVar4 = (longlong *)FUN_142dfdfe0();
          plVar6 = *(longlong **)(param_1 + 0x48);
          plVar2 = plVar6;
          goto joined_r0x000141297816;
        }
        break;
      }
    }
  }
  goto LAB_1412977e6;
joined_r0x000141297816:
  if (plVar2 == (longlong *)0x0) goto LAB_141297826;
  if (plVar2 == plVar4) goto LAB_141297828;
  plVar2 = (longlong *)plVar2[6];
  goto joined_r0x000141297816;
LAB_141297826:
  plVar6 = (longlong *)0x0;
LAB_141297828:
  lVar5 = plVar6[0x1f];
  if (lVar5 == 0) {
    (**(code **)(*plVar6 + 0x368))(plVar6);
    lVar5 = plVar6[0x1f];
    if (lVar5 == 0) goto LAB_1412977e6;
  }
  if (*(longlong *)(lVar5 + 0xd8) != 0) {
    FText::FText(param_2,*(longlong *)(lVar5 + 0xd8) + 0x30);
    return param_2;
  }
LAB_1412977e6:
  FText::FText(param_2);
  return param_2;
}



// FUNCTION 141297880 FUN_141297880 body=182 status=ok
// SIG undefined FUN_141297880(void)

undefined8 FUN_141297880(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  
  if (*(longlong *)(param_3 + 0x48) != 0) {
    lVar3 = FUN_142dfdfe0();
    lVar5 = *(longlong *)(param_3 + 0x48);
    for (lVar1 = lVar5; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar3) {
        if (lVar5 != 0) {
          if (lVar5 == 0) goto LAB_1412978f6;
          plVar4 = (longlong *)FUN_142dfdfe0();
          plVar6 = *(longlong **)(param_3 + 0x48);
          plVar2 = plVar6;
          goto joined_r0x0001412978e6;
        }
        break;
      }
    }
  }
LAB_1412978b6:
  FText::FText(param_2);
  return param_2;
joined_r0x0001412978e6:
  if (plVar2 == (longlong *)0x0) goto LAB_1412978f6;
  if (plVar2 == plVar4) goto LAB_1412978f8;
  plVar2 = (longlong *)plVar2[6];
  goto joined_r0x0001412978e6;
LAB_1412978f6:
  plVar6 = (longlong *)0x0;
LAB_1412978f8:
  lVar5 = plVar6[0x1f];
  if (lVar5 == 0) {
    (**(code **)(*plVar6 + 0x368))(plVar6);
    lVar5 = plVar6[0x1f];
    if (lVar5 == 0) goto LAB_1412978b6;
  }
  FText::FText(param_2,lVar5 + 0x40);
  return param_2;
}



// FUNCTION 141297940 FUN_141297940 body=92 status=ok
// SIG undefined FUN_141297940(void)

undefined8 *
FUN_141297940(undefined8 param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_141296c80(param_1,param_4);
  if (lVar1 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    FUN_14129d6f0(lVar1,param_2,param_3);
  }
  if (*param_4 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1412979a0 FUN_1412979a0 body=26 status=ok
// SIG undefined FUN_1412979a0(void)

undefined8
FUN_1412979a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14129d6f0(param_4);
  return param_2;
}



// FUNCTION 1412979c0 FUN_1412979c0 body=97 status=ok
// SIG undefined FUN_1412979c0(void)

undefined4 FUN_1412979c0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_141296c80(param_1,param_3);
  if (lVar2 != 0) {
    uVar1 = FUN_14129dc40(lVar2,param_2);
    if (*param_3 != 0) {
      FMemory::Free();
    }
    return uVar1;
  }
  if (*param_3 != 0) {
    FMemory::Free();
  }
  return 2;
}



// FUNCTION 141297a30 FUN_141297a30 body=8 status=ok
// SIG undefined FUN_141297a30(void)

void FUN_141297a30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14129dc40(param_3);
  return;
}



// FUNCTION 141297a40 FUN_141297a40 body=96 status=ok
// SIG undefined FUN_141297a40(void)

undefined8 FUN_141297a40(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_141296c80(param_1,param_3);
  if (lVar1 != 0) {
    uVar2 = FUN_14129f0c0(lVar1,param_2);
    if (*param_3 != 0) {
      FMemory::Free();
    }
    return uVar2;
  }
  if (*param_3 != 0) {
    FMemory::Free();
  }
  return 0;
}



// FUNCTION 141297aa0 FUN_141297aa0 body=8 status=ok
// SIG undefined FUN_141297aa0(void)

void FUN_141297aa0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14129f0c0(param_3);
  return;
}



// FUNCTION 141297ab0 FUN_141297ab0 body=14 status=ok
// SIG undefined FUN_141297ab0(void)

undefined8 * FUN_141297ab0(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x1b8);
  return param_2;
}



// FUNCTION 141297ac0 FUN_141297ac0 body=1139 status=ok
// SIG undefined FUN_141297ac0(void)

longlong FUN_141297ac0(longlong *param_1,longlong param_2)

{
  void *_Src;
  bool bVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  longlong *plVar14;
  int local_res8 [2];
  longlong local_res18;
  longlong local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  int local_48;
  
  lVar4 = (**(code **)(*param_1 + 0x148))();
  if ((((lVar4 != 0) && (lVar5 = UWorld::GetGameState<APVPGameState>(lVar4), lVar5 != 0)) &&
      (*(longlong *)(lVar5 + 0x5a0) != 0)) && (lVar8 = *(longlong *)(lVar5 + 0x598), lVar8 != 0)) {
    if (param_2 != 0) {
      lVar6 = FUN_142f71d80();
      lVar8 = param_2;
      do {
        if (lVar8 == lVar6) goto LAB_141297b47;
        lVar8 = *(longlong *)(lVar8 + 0x30);
      } while (lVar8 != 0);
      lVar8 = *(longlong *)(lVar5 + 0x598);
    }
    plVar7 = (longlong *)FUN_142f5ed60(lVar8,local_58);
    param_2 = *plVar7;
LAB_141297b47:
    lVar8 = FUN_142f5ef60(*(undefined8 *)(lVar5 + 0x598),param_2);
    if (lVar8 != 0) {
      plVar7 = (longlong *)0x0;
      local_res18 = 0;
      lVar6 = FUN_142f477c0();
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) &&
         (cVar3 = FUN_142f430a0(*(undefined8 *)(lVar5 + 0x5a0),lVar8,
                                CONCAT71((int7)((ulonglong)(lVar6 + 0x88) >> 8),1)), cVar3 != '\0'))
      {
        return lVar8;
      }
      iVar13 = 100000;
      puVar9 = (undefined8 *)UAssetRegistryImpl::OnPathAdded(*(undefined8 *)(lVar5 + 0x5a0));
      local_50 = (longlong *)0x0;
      local_48 = *(int *)(puVar9 + 1);
      lVar5 = (longlong)local_48;
      _Src = (void *)*puVar9;
      if (local_48 != 0) {
        TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_50,local_48,0);
        plVar7 = local_50;
        _guard_xfg_dispatch_icall_nop(local_50,_Src,lVar5 << 4);
      }
      plVar14 = plVar7 + (longlong)local_48 * 2;
      for (plVar11 = plVar7; plVar2 = plVar7, plVar11 != plVar14; plVar11 = plVar11 + 2) {
        if ((*(char *)((longlong)plVar11 + 10) == '\0') &&
           (lVar5 = *plVar11, *(longlong *)(lVar8 + 0x30) == *(longlong *)(lVar5 + 0x30))) {
          iVar13 = 0;
          local_res18 = lVar5;
          if (lVar5 != 0) goto LAB_141297ee7;
          break;
        }
      }
      do {
        if (plVar2 == plVar14) {
LAB_141297ee7:
          if (plVar7 != (longlong *)0x0) {
            FMemory::Free(plVar7);
          }
          return local_res18;
        }
        lVar6 = 0;
        lVar5 = *plVar2;
        if (lVar5 != 0) {
          lVar12 = lVar5 + 0x70;
          lVar6 = FWeakObjectPtr::Get(lVar12);
          if (lVar6 == 0) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            if ((DAT_1464b56f4 != *(int *)(lVar5 + 0x78)) && (*(longlong *)(lVar5 + 0x80) != 0)) {
              lVar6 = FUN_141796df0();
              FWeakObjectPtr::operator=(lVar12,lVar6);
              if ((lVar6 != 0) || (DAT_1469e7e10 == '\0')) {
                LOCK();
                if (DAT_1464b56f4 == 0) {
                  DAT_1464b56f4 = 0;
                }
                UNLOCK();
                *(int *)(lVar5 + 0x78) = DAT_1464b56f4;
              }
              lVar6 = FWeakObjectPtr::Get(lVar12);
              if (lVar6 != 0) goto LAB_141297d1b;
            }
          }
          else {
LAB_141297d1b:
            lVar5 = FUN_142e67be0();
            if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if (bVar1) goto LAB_141297d77;
          }
          lVar6 = 0;
        }
LAB_141297d77:
        lVar5 = FWeakObjectPtr::Get(lVar8 + 0x70);
        if (lVar5 == 0) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          if ((DAT_1464b56f4 != *(int *)(lVar8 + 0x78)) && (*(longlong *)(lVar8 + 0x80) != 0)) {
            lVar5 = FUN_141796df0();
            FWeakObjectPtr::operator=(lVar8 + 0x70,lVar5);
            if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
              LOCK();
              if (DAT_1464b56f4 == 0) {
                DAT_1464b56f4 = 0;
              }
              UNLOCK();
              *(int *)(lVar8 + 0x78) = DAT_1464b56f4;
            }
            lVar5 = FWeakObjectPtr::Get(lVar8 + 0x70);
            if (lVar5 != 0) goto LAB_141297df4;
          }
LAB_141297e2a:
          lVar5 = 0;
        }
        else {
LAB_141297df4:
          lVar12 = FUN_142e67be0();
          if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar12 + 0x90) * 8) != lVar12 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (!bVar1) goto LAB_141297e2a;
        }
        if ((((*(char *)((longlong)plVar2 + 10) == '\0') && (*plVar2 != 0)) && (lVar6 != 0)) &&
           ((lVar5 != 0 &&
            (cVar3 = FSoftObjectPath::operator==(lVar6 + 0xa0,lVar5 + 0xa0), cVar3 != '\0')))) {
          local_res8[0] = 0;
          lVar5 = *plVar2;
          uVar10 = FMistWorldUtils::GetDebugEntityDrawSystem(lVar4);
          FUN_142f40360(uVar10,&local_60,lVar5 + 0x30,lVar8 + 0x30,local_res8);
          if ((local_60 != 0) && (local_res8[0] < iVar13)) {
            local_res18 = *plVar2;
            iVar13 = local_res8[0];
          }
        }
        plVar2 = plVar2 + 2;
        plVar7 = local_50;
      } while( true );
    }
  }
  return 0;
}



// FUNCTION 141297f40 FUN_141297f40 body=182 status=ok
// SIG undefined FUN_141297f40(void)

undefined8 FUN_141297f40(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  
  if (*(longlong *)(param_1 + 0x48) != 0) {
    lVar3 = FUN_142dfdfe0();
    lVar5 = *(longlong *)(param_1 + 0x48);
    for (lVar1 = lVar5; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar3) {
        if (lVar5 != 0) {
          if (lVar5 == 0) goto LAB_141297fb6;
          plVar4 = (longlong *)FUN_142dfdfe0();
          plVar6 = *(longlong **)(param_1 + 0x48);
          plVar2 = plVar6;
          goto joined_r0x000141297fa6;
        }
        break;
      }
    }
  }
LAB_141297f76:
  FText::FText(param_2);
  return param_2;
joined_r0x000141297fa6:
  if (plVar2 == (longlong *)0x0) goto LAB_141297fb6;
  if (plVar2 == plVar4) goto LAB_141297fb8;
  plVar2 = (longlong *)plVar2[6];
  goto joined_r0x000141297fa6;
LAB_141297fb6:
  plVar6 = (longlong *)0x0;
LAB_141297fb8:
  lVar5 = plVar6[0x1f];
  if (lVar5 == 0) {
    (**(code **)(*plVar6 + 0x368))(plVar6);
    lVar5 = plVar6[0x1f];
    if (lVar5 == 0) goto LAB_141297f76;
  }
  FText::FText(param_2,lVar5 + 0x70);
  return param_2;
}



// FUNCTION 141298000 FUN_141298000 body=107 status=ok
// SIG undefined FUN_141298000(void)

int FUN_141298000(longlong *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (**(code **)(*param_1 + 0x418))();
  if (0 < iVar1) {
    iVar2 = (**(code **)(*param_1 + 0x420))();
    iVar3 = (**(code **)(*param_1 + 0x418))(param_1);
    iVar1 = iVar3 - iVar2;
    if (iVar3 - iVar2 < 1) {
      iVar1 = 0;
    }
    return iVar1;
  }
  iVar1 = (**(code **)(*param_1 + 0x440))(param_1);
  iVar2 = (**(code **)(*param_1 + 0x438))(param_1);
  return iVar1 - iVar2;
}



// FUNCTION 141298090 FUN_141298090 body=66 status=ok
// SIG undefined FUN_141298090(void)

undefined4 FUN_141298090(longlong param_1)

{
  undefined4 *puVar1;
  char cVar2;
  undefined1 local_res8 [32];
  
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    cVar2 = FUN_1424a40c0();
    if (cVar2 != '\0') {
      puVar1 = (undefined4 *)FUN_1424a1c80(*(undefined8 *)(param_1 + 0x1c0),local_res8);
      return *puVar1;
    }
  }
  return 0;
}



// FUNCTION 1412980e0 FUN_1412980e0 body=76 status=ok
// SIG undefined FUN_1412980e0(void)

undefined8 FUN_1412980e0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_14309f7d0(param_1,0);
  if (((cVar1 != '\0') && (*(char *)(param_1 + 0x2c4) == '\0')) &&
     ((*(longlong *)(param_1 + 0x368) != 0 || (*(longlong *)(param_1 + 0x388) != 0)))) {
    return 0x3f800000;
  }
  uVar2 = FUN_14309b440(param_1);
  return uVar2;
}



// FUNCTION 141298130 FUN_141298130 body=375 status=ok
// SIG undefined FUN_141298130(void)

longlong * FUN_141298130(longlong param_1,longlong *param_2,byte param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 local_res10 [8];
  
  lVar4 = 0;
  *param_2 = 0;
  if ((int)(uint)param_3 < *(int *)(param_1 + 0x398)) {
    lVar6 = (ulonglong)param_3 * 0x38;
    lVar3 = *(longlong *)(lVar6 + *(longlong *)(param_1 + 0x390));
    if ((lVar3 != 0) && (plVar5 = *(longlong **)(lVar3 + 0x48), plVar5 != (longlong *)0x0)) {
      plVar2 = (longlong *)(**(code **)(*plVar5 + 0x4d0))(plVar5,local_res10);
      lVar3 = *plVar5;
      *param_2 = *plVar2;
      cVar1 = (**(code **)(lVar3 + 0x4b8))(plVar5);
      if ((cVar1 != '\0') && (*(longlong *)(*(longlong *)(param_1 + 0x390) + 0x20 + lVar6) != 0)) {
        lVar4 = 1;
      }
      lVar4 = ((ulonglong)param_3 * 7 + lVar4) * 8 + 0x18;
      lVar3 = *(longlong *)(lVar4 + *(longlong *)(param_1 + 0x390));
      if ((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 0x40), lVar3 != 0)) {
        lVar6 = FUN_142e49950();
        do {
          if (lVar3 == lVar6) {
            *param_2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x390) + lVar4) + 0x40);
            break;
          }
          lVar3 = *(longlong *)(lVar3 + 0x30);
        } while (lVar3 != 0);
      }
    }
  }
  if (*param_2 != 0) {
    lVar3 = FUN_142e49950();
    for (lVar4 = *param_2; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
      if (lVar4 == lVar3) {
        if (*param_2 != 0) {
          return param_2;
        }
        break;
      }
    }
  }
  lVar4 = FUN_14129ee40(param_1);
  if ((lVar4 != 0) && (plVar5 = (longlong *)FUN_14307cf20(lVar4,param_3), plVar5 != (longlong *)0x0)
     ) {
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x4d0))(plVar5,local_res10);
    *param_2 = *plVar5;
  }
  return param_2;
}



// FUNCTION 1412982b0 FUN_1412982b0 body=30 status=ok
// SIG undefined FUN_1412982b0(void)

undefined8 FUN_1412982b0(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x540))(param_1,param_2,0);
  return param_2;
}



// FUNCTION 1412982d0 FUN_1412982d0 body=305 status=ok
// SIG undefined FUN_1412982d0(void)

void FUN_1412982d0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined2 *puVar5;
  undefined2 *local_18;
  int local_10;
  
  cVar2 = FUN_143070860(param_2,&DAT_146b479e8);
  if (cVar2 != '\0') {
    FUN_143077d00(param_1,param_2);
    plVar1 = (longlong *)(param_1 + -0x178);
    uVar3 = (**(code **)(*plVar1 + 0x418))(plVar1);
    uVar4 = (**(code **)(*plVar1 + 0x420))(plVar1);
    FString::PrintfImpl(&local_18,L"%d (%d)",uVar4,uVar3);
    puVar5 = &DAT_143f3eda8;
    if (local_10 != 0) {
      puVar5 = local_18;
    }
    uVar3 = (**(code **)(*plVar1 + 0x430))(plVar1);
    uVar4 = (**(code **)(*plVar1 + 0x438))(plVar1);
    FUN_141287300(param_2,L"Loaded:",puVar5,L"Spare:",uVar4,L"Stored:",uVar3);
    if (local_18 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    cVar2 = FUN_143070930(param_2);
    if (cVar2 != '\0') {
      uVar3 = (**(code **)(*plVar1 + 0x420))(plVar1);
      FUN_141285dd0(param_2,L"Server Loaded Ammo:",*(undefined4 *)(param_1 + 0x60),
                    L"Client Loaded Ammo:",uVar3);
    }
  }
  return;
}



// FUNCTION 141298410 FUN_141298410 body=1766 status=ok
// SIG undefined FUN_141298410(void)

/* WARNING: Removing unreachable block (ram,0x0001412986ad) */

void FUN_141298410(longlong param_1,longlong *param_2)

{
  int *piVar1;
  void *_Dst;
  undefined4 uVar2;
  bool bVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  void *pvVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined2 *puVar15;
  undefined2 *puVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  int iVar19;
  longlong *local_res18;
  longlong *local_res20;
  undefined8 in_stack_fffffffffffffef8;
  undefined4 uVar20;
  ulonglong local_f8;
  uint local_f0;
  uint local_ec;
  longlong *local_e8;
  undefined8 local_e0;
  void *local_d8;
  undefined8 local_d0;
  void *local_c8;
  int local_c0;
  int local_bc;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  int local_98;
  undefined2 *local_90;
  int local_88;
  void *local_80;
  int local_78;
  longlong local_70 [2];
  longlong local_60 [2];
  undefined1 local_50 [8];
  longlong *local_48;
  
  uVar20 = (undefined4)((ulonglong)in_stack_fffffffffffffef8 >> 0x20);
  cVar4 = FUN_143070860(param_2,&DAT_146877fd0);
  if ((cVar4 != '\0') && (cVar4 = FUN_143070930(param_2), cVar4 != '\0')) {
    FUN_14128ee30(param_2,L"[Parts]",param_1 + -0x388);
    uVar2 = *(undefined4 *)(param_1 + -0x18c);
    FText::FText(local_50,param_1 + -0x120);
    puVar5 = (undefined8 *)FText::ToString(local_50);
    if (*(int *)(puVar5 + 1) == 0) {
      puVar16 = &DAT_143f3eda8;
    }
    else {
      puVar16 = (undefined2 *)*puVar5;
    }
    FUN_141287040(param_2,L"Name:",puVar16,L"Value:",CONCAT44(uVar20,uVar2));
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_48 + 1;
      lVar14 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar1 = (int *)((longlong)local_48 + 0xc);
        iVar19 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar19 == 1) {
          (**(code **)(*local_48 + 8))(local_48,1);
        }
      }
    }
    if (*(longlong *)(param_1 + -0x170) == 0) {
      local_e8 = (longlong *)0x0;
      local_e0 = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
      FGenericPlatformString::Memcpy(local_e8,&DAT_143f3edc8,10);
    }
    else {
      local_res18 = *(longlong **)(*(longlong *)(param_1 + -0x170) + 0x18);
      FName::ToString(&local_res18,&local_e8);
    }
    plVar6 = (longlong *)&DAT_143f3eda8;
    if ((int)local_e0 != 0) {
      plVar6 = local_e8;
    }
    puVar5 = (undefined8 *)FUN_1412887b0(param_2,local_70,L"Manufacturer:",plVar6);
    iVar19 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar19 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar19 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar19);
    }
    puVar8 = (undefined8 *)((longlong)iVar19 * 0x10 + *param_2);
    *puVar8 = 0;
    *puVar8 = *puVar5;
    *puVar5 = 0;
    *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar5 + 1);
    *(undefined4 *)((longlong)puVar8 + 0xc) = *(undefined4 *)((longlong)puVar5 + 0xc);
    puVar5[1] = 0;
    if (local_70[0] != 0) {
      FMemory::Free();
    }
    if (local_e8 != (longlong *)0x0) {
      FMemory::Free();
    }
    FString::PrintfImpl(&local_a0,&DAT_1440da628,*(undefined4 *)(param_1 + -0x160));
    plVar6 = (longlong *)&DAT_143f3eda8;
    if (local_98 != 0) {
      plVar6 = local_a0;
    }
    if ((int)param_2[6] == 0) {
      puVar16 = &DAT_143f3eda8;
    }
    else {
      puVar16 = (undefined2 *)param_2[5];
    }
    if ((int)param_2[4] == 0) {
      puVar15 = &DAT_143f3eda8;
    }
    else {
      puVar15 = (undefined2 *)param_2[3];
    }
    FString::PrintfImpl(&local_d8,L"%s%s %s%s",puVar15,L"Parts List:",puVar16,plVar6);
    if (local_a0 != (longlong *)0x0) {
      FMemory::Free();
    }
    iVar19 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar19 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar19 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar19);
    }
    puVar5 = (undefined8 *)((longlong)iVar19 * 0x10 + *param_2);
    *puVar5 = 0;
    *puVar5 = local_d8;
    *(undefined4 *)(puVar5 + 1) = (undefined4)local_d0;
    *(undefined4 *)((longlong)puVar5 + 0xc) = local_d0._4_4_;
    local_d0 = 0;
    local_d8 = (void *)0x0;
    local_res20 = *(longlong **)(param_1 + -0x168);
    plVar6 = local_res20 + *(int *)(param_1 + -0x160);
    local_res18 = plVar6;
    if (local_res20 != plVar6) {
      do {
        uVar11 = 0;
        local_b8 = *local_res20;
        if (local_b8 != 0) {
          plVar13 = *(longlong **)(local_b8 + 0x208);
          iVar19 = 0;
          local_f8 = 0;
          local_ec = 0;
          plVar6 = plVar13 + *(int *)(local_b8 + 0x210);
          uVar17 = uVar11;
          uVar18 = uVar11;
          local_e8 = plVar6;
          local_a0 = plVar13;
          if (plVar13 != plVar6) {
            do {
              lVar14 = *plVar13;
              if (lVar14 != 0) {
                local_a0 = plVar13;
                lVar7 = UXSkinAnimationProfile::GetPrivateStaticClass();
                if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                  bVar3 = false;
                }
                else {
                  bVar3 = true;
                }
                if (bVar3) {
                  iVar19 = 0;
                  local_b0 = 0;
                  local_a8 = 0;
                  FUN_141269c40(lVar14,&local_b0);
                  if (0 < (int)local_a8) {
                    do {
                      iVar9 = (int)uVar11;
                      if ((iVar9 != 0) && (0 < iVar9 + -1)) {
                        local_f0 = iVar9 + 3;
                        if ((int)uVar17 < (int)local_f0) {
                          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,uVar11);
                          uVar17 = (ulonglong)local_ec;
                          uVar18 = local_f8;
                        }
                        uVar11 = (ulonglong)local_f0;
                        lVar14 = ((longlong)iVar9 - (ulonglong)(iVar9 != 0)) * 2;
                        *(undefined4 *)(lVar14 + uVar18) = 0x2b0020;
                        *(undefined2 *)(lVar14 + 4 + uVar18) = 0x20;
                        *(undefined2 *)(lVar14 + 6 + uVar18) = 0;
                      }
                      puVar5 = (undefined8 *)
                               FName::ToString(local_b0 + (longlong)iVar19 * 8,local_60);
                      local_d8 = (void *)*puVar5;
                      iVar9 = *(int *)(puVar5 + 1) + -1;
                      if (*(int *)(puVar5 + 1) == 0) {
                        iVar9 = 0;
                      }
                      if (iVar9 != 0) {
                        iVar10 = (int)uVar11;
                        local_f0 = iVar9 + (uint)(iVar10 == 0) + iVar10;
                        if ((int)uVar17 < (int)local_f0) {
                          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,uVar11);
                          uVar17 = (ulonglong)local_ec;
                          uVar18 = local_f8;
                        }
                        uVar11 = (ulonglong)local_f0;
                        pvVar12 = (void *)(((longlong)iVar10 - (ulonglong)(iVar10 != 0)) * 2 +
                                          uVar18);
                        _guard_xfg_dispatch_icall_nop(pvVar12,local_d8,(longlong)iVar9 * 2);
                        *(undefined2 *)((longlong)iVar9 * 2 + (longlong)pvVar12) = 0;
                      }
                      if (local_60[0] != 0) {
                        FMemory::Free();
                      }
                      iVar19 = iVar19 + 1;
                      plVar13 = local_a0;
                      plVar6 = local_e8;
                    } while (iVar19 < (int)local_a8);
                  }
                  if (local_b0 != 0) {
                    FMemory::Free();
                  }
                }
              }
              iVar19 = (int)uVar11;
              plVar13 = plVar13 + 1;
              local_a0 = plVar13;
            } while (plVar13 != plVar6);
          }
          local_b8 = *(longlong *)(local_b8 + 0x18);
          FName::ToString(&local_b8,&local_90);
          puVar16 = &DAT_143f3eda8;
          if (local_88 != 0) {
            puVar16 = local_90;
          }
          if ((int)param_2[6] == 0) {
            puVar15 = &DAT_143f3eda8;
          }
          else {
            puVar15 = (undefined2 *)param_2[5];
          }
          FString::PrintfImpl(&local_c8,L"     %s%s",puVar15,puVar16);
          if (local_90 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          if ((iVar19 != 0) && (0 < iVar19 + -1)) {
            if ((int)param_2[6] == 0) {
              puVar16 = &DAT_143f3eda8;
            }
            else {
              puVar16 = (undefined2 *)param_2[5];
            }
            if ((int)param_2[4] == 0) {
              puVar15 = &DAT_143f3eda8;
            }
            else {
              puVar15 = (undefined2 *)param_2[3];
            }
            FString::PrintfImpl(&local_80,L" %s- %s%s",puVar15,puVar16,uVar18);
            pvVar12 = local_80;
            iVar19 = local_c0;
            if (local_78 == 0) {
              iVar9 = 0;
            }
            else {
              iVar9 = local_78 + -1;
            }
            if (iVar9 != 0) {
              lVar14 = (longlong)local_c0;
              local_c0 = (uint)(local_c0 == 0) + local_c0 + iVar9;
              if (local_bc < local_c0) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,iVar19);
              }
              _Dst = (void *)((longlong)local_c8 + (lVar14 - (ulonglong)(iVar19 != 0)) * 2);
              _guard_xfg_dispatch_icall_nop(_Dst,pvVar12,(longlong)iVar9 * 2);
              *(undefined2 *)((longlong)iVar9 * 2 + (longlong)_Dst) = 0;
            }
            if (local_80 != (void *)0x0) {
              FMemory::Free(local_80);
            }
          }
          iVar19 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar19 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar19 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar19);
          }
          pvVar12 = local_c8;
          puVar5 = (undefined8 *)((longlong)iVar19 * 0x10 + *param_2);
          *puVar5 = 0;
          lVar14 = (longlong)local_c0;
          *(int *)(puVar5 + 1) = local_c0;
          if (local_c0 == 0) {
            *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar5,local_c0,0);
            _guard_xfg_dispatch_icall_nop((void *)*puVar5,pvVar12,lVar14 * 2);
          }
          if (local_c8 != (void *)0x0) {
            FMemory::Free();
          }
          plVar6 = local_res18;
          if (uVar18 != 0) {
            FMemory::Free(uVar18);
            plVar6 = local_res18;
          }
        }
        local_res20 = local_res20 + 1;
      } while (local_res20 != plVar6);
    }
  }
  return;
}



// FUNCTION 141298b00 FUN_141298b00 body=227 status=ok
// SIG undefined FUN_141298b00(void)

void FUN_141298b00(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined2 *puVar2;
  undefined2 *local_18;
  int local_10;
  
  cVar1 = FUN_143070860(param_2,&DAT_146b47eb0);
  if (cVar1 != '\0') {
    FUN_14309b740(param_1,param_2);
    FString::PrintfImpl(&local_18,L"%d/%d",*(undefined4 *)(param_1 + 0xf0),
                        *(undefined4 *)(param_1 + 0xe8));
    puVar2 = &DAT_143f3eda8;
    if (local_10 != 0) {
      puVar2 = local_18;
    }
    FUN_141286d90(param_2,L"Current Jankiness:",*(undefined4 *)(param_1 + 0xe0),L"Shots To Break:",
                  puVar2);
    if (local_18 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    FUN_1412877b0(param_2,L"Broken:",*(undefined1 *)(param_1 + 0xe4),L"Broken Effects:",
                  *(undefined1 *)(param_1 + 0xec),L"Repair Cooldown Rate:",
                  *(undefined4 *)(param_1 + 0xf4));
  }
  return;
}



// FUNCTION 141298bf0 FUN_141298bf0 body=106 status=ok
// SIG undefined FUN_141298bf0(void)

void FUN_141298bf0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_143070860(param_2,&DAT_146b47ec0);
  if (cVar1 != '\0') {
    FUN_14309b9e0(param_1,param_2);
    uVar2 = (**(code **)(*(longlong *)(param_1 + -0x178) + 0x428))();
    FUN_1412861f0(param_2,L"Repair Time:",uVar2,L"Repair Type:",*(undefined1 *)(param_1 + 0x60));
  }
  return;
}



// FUNCTION 141298c60 FUN_141298c60 body=425 status=ok
// SIG undefined FUN_141298c60(void)

void FUN_141298c60(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined4 uVar6;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar7;
  undefined2 *local_28;
  int local_20;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  cVar2 = FUN_143070860(param_2,&DAT_146878038);
  if (cVar2 != '\0') {
    cVar2 = FUN_142d52a00(param_1 + 0xb0);
    if (cVar2 == '\0') {
      uVar6 = *(undefined4 *)(param_1 + 0x2c);
    }
    else {
      uVar3 = FUN_142d52a20(param_1 + 0xb0);
      uVar3 = FArchive::operator<<(uVar3);
      uVar6 = FUN_142d5fed0(uVar3);
    }
    FUN_14128ee30(param_2,L"[Shield]",param_1 + -0x178);
    uVar1 = *(undefined1 *)(param_1 + 0x189);
    uVar3 = UEnum::GetPrivateStaticClass();
    lVar4 = FUN_141799410(uVar3,0,L"/Script/OakGame.EWeaponShieldState",0);
    if (lVar4 == 0) {
      LowLevelFatalErrorHandler
                ("Unknown",0x75d,L"Couldn\'t find enum \'%s\'",L"/Script/OakGame.EWeaponShieldState"
                );
      uVar7 = 1;
      FDebug::AssertFailed
                (&DAT_143f3f584,"Unknown",0x75d,L"Couldn\'t find enum \'%s\'",
                 L"/Script/OakGame.EWeaponShieldState");
    }
    UEnum::GetNameStringByValue(lVar4,&local_28,uVar1);
    puVar5 = &DAT_143f3eda8;
    if (local_20 != 0) {
      puVar5 = local_28;
    }
    FUN_141285920(param_2,L"Active:",*(byte *)(param_1 + 0x188) >> 2 & 1,L"Strength:",
                  CONCAT44(uVar7,uVar6),L"State:",puVar5);
    if (local_28 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    cVar2 = FUN_143070930(param_2);
    if (cVar2 != '\0') {
      FUN_141286100(param_2,L"Blocking Angle:",*(undefined4 *)(param_1 + 0x10));
    }
  }
  return;
}



// FUNCTION 141298e10 FUN_141298e10 body=451 status=ok
// SIG undefined FUN_141298e10(void)

void FUN_141298e10(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined2 *puVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined2 *local_18;
  int local_10;
  
  cVar1 = FUN_143070860(param_2,&DAT_1468780a0);
  if (cVar1 != '\0') {
    FUN_14128ee30(param_2,L"[Sway]",param_1 + -0x178);
    FString::PrintfImpl(&local_18,L"P=%f Y=%f R=%f",(double)*(float *)(param_1 + 0x70),
                        (double)*(float *)(param_1 + 0x74),(double)*(float *)(param_1 + 0x78));
    puVar2 = &DAT_143f3eda8;
    if (local_10 != 0) {
      puVar2 = local_18;
    }
    FUN_141286d90(param_2,L"Current Scale:",*(undefined4 *)(param_1 + 0x7c),L"Current Rotation:",
                  puVar2);
    uVar5 = (undefined4)((ulonglong)puVar2 >> 0x20);
    if (local_18 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    cVar1 = FUN_143070930(param_2);
    if (cVar1 != '\0') {
      FUN_141286530(param_2,L"Scale:",*(undefined4 *)(param_1 + 0x1c),L"Zoom Scale:",
                    CONCAT44(uVar5,*(undefined4 *)(param_1 + 0x48)));
      FUN_141286530(param_2,L"Accuracy Scale:",*(undefined4 *)(param_1 + 0x28),
                    L"Zoom Accuracy Scale:",*(undefined4 *)(param_1 + 0x54));
      FUN_141286530(param_2,L"Disc Width:",*(undefined4 *)(param_1 + 0x3c),L"Disc Height:",
                    *(undefined4 *)(param_1 + 0x40));
      FUN_141286870(param_2,L"Speed:",*(undefined4 *)(param_1 + 0x30),L"Lacunarity:",
                    *(undefined4 *)(param_1 + 0x34),L"Persistence",*(undefined4 *)(param_1 + 0x38));
      fVar3 = *(float *)(param_1 + 0x48) + *(float *)(param_1 + 0x48) + *(float *)(param_1 + 0x54);
      fVar4 = *(float *)(param_1 + 0x1c) + *(float *)(param_1 + 0x1c) + *(float *)(param_1 + 0x28);
      if (fVar4 <= fVar3) {
        fVar4 = fVar3;
      }
      fVar3 = *(float *)(param_1 + 0x40);
      if (*(float *)(param_1 + 0x40) <= *(float *)(param_1 + 0x3c)) {
        fVar3 = *(float *)(param_1 + 0x3c);
      }
      FUN_141286100(param_2,L"Goodness:",fVar4 * fVar3 * *(float *)(param_1 + 0x30));
    }
  }
  return;
}



// FUNCTION 141298fe0 FUN_141298fe0 body=182 status=ok
// SIG undefined FUN_141298fe0(void)

undefined8 FUN_141298fe0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  
  if (*(longlong *)(param_1 + 0x48) != 0) {
    lVar3 = FUN_142dfdfe0();
    lVar5 = *(longlong *)(param_1 + 0x48);
    for (lVar1 = lVar5; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar3) {
        if (lVar5 != 0) {
          if (lVar5 == 0) goto LAB_141299056;
          plVar4 = (longlong *)FUN_142dfdfe0();
          plVar6 = *(longlong **)(param_1 + 0x48);
          plVar2 = plVar6;
          goto joined_r0x000141299046;
        }
        break;
      }
    }
  }
LAB_141299016:
  FText::FText(param_2);
  return param_2;
joined_r0x000141299046:
  if (plVar2 == (longlong *)0x0) goto LAB_141299056;
  if (plVar2 == plVar4) goto LAB_141299058;
  plVar2 = (longlong *)plVar2[6];
  goto joined_r0x000141299046;
LAB_141299056:
  plVar6 = (longlong *)0x0;
LAB_141299058:
  lVar5 = plVar6[0x1f];
  if (lVar5 == 0) {
    (**(code **)(*plVar6 + 0x368))(plVar6);
    lVar5 = plVar6[0x1f];
    if (lVar5 == 0) goto LAB_141299016;
  }
  FText::FText(param_2,lVar5 + 0x58);
  return param_2;
}



// FUNCTION 1412990a0 FUN_1412990a0 body=182 status=ok
// SIG undefined FUN_1412990a0(void)

undefined8 FUN_1412990a0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  
  if (*(longlong *)(param_1 + 0x48) != 0) {
    lVar3 = FUN_142dfdfe0();
    lVar5 = *(longlong *)(param_1 + 0x48);
    for (lVar1 = lVar5; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar3) {
        if (lVar5 != 0) {
          if (lVar5 == 0) goto LAB_141299116;
          plVar4 = (longlong *)FUN_142dfdfe0();
          plVar6 = *(longlong **)(param_1 + 0x48);
          plVar2 = plVar6;
          goto joined_r0x000141299106;
        }
        break;
      }
    }
  }
LAB_1412990d6:
  FText::FText(param_2);
  return param_2;
joined_r0x000141299106:
  if (plVar2 == (longlong *)0x0) goto LAB_141299116;
  if (plVar2 == plVar4) goto LAB_141299118;
  plVar2 = (longlong *)plVar2[6];
  goto joined_r0x000141299106;
LAB_141299116:
  plVar6 = (longlong *)0x0;
LAB_141299118:
  lVar5 = plVar6[0x1f];
  if (lVar5 == 0) {
    (**(code **)(*plVar6 + 0x368))(plVar6);
    lVar5 = plVar6[0x1f];
    if (lVar5 == 0) goto LAB_1412990d6;
  }
  FText::FText(param_2,lVar5 + 0x40);
  return param_2;
}



// FUNCTION 141299160 FUN_141299160 body=884 status=ok
// SIG undefined FUN_141299160(void)

void FUN_141299160(longlong param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  bool bVar9;
  char cVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  undefined4 *puVar18;
  undefined8 *puVar19;
  longlong lVar20;
  longlong local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined8 local_d0;
  undefined **local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_a0 [24];
  longlong local_88;
  undefined1 local_78 [8];
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  
  plVar11 = (longlong *)FUN_142f6c9f0(param_2);
  if (plVar11 != (longlong *)0x0) {
    iVar6 = *(int *)(param_1 + 0x60);
    puVar7 = *(undefined8 **)(param_1 + 0x58);
    if (puVar7 != puVar7 + (longlong)iVar6 * 10) {
      puVar19 = puVar7 + 1;
      do {
        local_c0 = *puVar19;
        local_b8 = *(undefined4 *)(puVar19 + 1);
        uStack_b4 = *(undefined4 *)((longlong)puVar19 + 0xc);
        uStack_b0 = *(undefined4 *)(puVar19 + 2);
        uStack_ac = *(undefined4 *)((longlong)puVar19 + 0x14);
        local_a8 = *(undefined4 *)(puVar19 + 3);
        local_a4 = *(undefined4 *)((longlong)puVar19 + 0x1c);
        local_c8 = &PTR_FUN_144278ac0;
        TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(local_a0,puVar19 + 4);
        cVar10 = FUN_142f63b20(&local_c8,param_2);
        if (cVar10 != '\0') {
          puVar12 = (undefined8 *)FUN_142f5ad80(&local_c8,local_78);
          uVar13 = FUN_142f5f490(&local_c8);
          cVar10 = FUN_142f63670(plVar11,uVar13,*puVar12,param_2);
          if (cVar10 != '\0') {
            lVar14 = FUN_142f5f490(&local_c8);
            if (lVar14 != 0) {
              uVar13 = ULiveLinkTimeSynchronizationSource::GetDisplayName(lVar14,local_58);
              iVar6 = (int)param_3[1];
              *(int *)(param_3 + 1) = iVar6 + 1;
              if (*(int *)((longlong)param_3 + 0xc) < iVar6 + 1) {
                TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
                ResizeGrow(param_3,iVar6);
              }
              FText::FText(*param_3 + (longlong)iVar6 * 0x18,uVar13);
              if (local_50 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_50 + 1;
                lVar14 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar14 == 1) {
                  (**(code **)*local_50)(local_50);
                  LOCK();
                  piVar3 = (int *)((longlong)local_50 + 0xc);
                  iVar6 = *piVar3;
                  *piVar3 = *piVar3 + -1;
                  UNLOCK();
                  if (iVar6 == 1) {
                    (**(code **)(*local_50 + 8))(local_50,1);
                  }
                }
              }
            }
            local_c8 = &PTR_FUN_144278ac0;
            if (local_88 != 0) {
              FMemory::Free();
            }
            break;
          }
        }
        local_c8 = &PTR_FUN_144278ac0;
        if (local_88 != 0) {
          FMemory::Free();
        }
        puVar12 = puVar19 + 9;
        puVar19 = puVar19 + 10;
      } while (puVar12 != puVar7 + (longlong)iVar6 * 10);
    }
    puVar8 = *(undefined4 **)(param_1 + 0xd0);
    iVar6 = *(int *)(param_1 + 0xd8);
    if (puVar8 != puVar8 + (longlong)iVar6 * 10) {
      lVar14 = 0;
      puVar18 = puVar8 + 1;
      do {
        local_f0 = puVar18[-1];
        local_ec = *puVar18;
        local_e8 = puVar18[1];
        local_70 = *(undefined8 *)(puVar18 + 3);
        local_d8 = 0;
        local_d0 = 0;
        local_e0 = 0;
        FString::FString(local_68,puVar18 + 5);
        FSoftObjectPath::operator=(&local_e0,&local_70);
        lVar15 = FUN_1405ec200(&local_f0);
        lVar20 = lVar14;
        if (lVar15 != 0) {
          lVar16 = FUN_14171bfe0();
          if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) < *(int *)(lVar16 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar16 + 0x90) * 8) != lVar16 + 0x88)) {
            bVar9 = false;
          }
          else {
            bVar9 = true;
          }
          if (bVar9) {
            lVar17 = FUN_142f71d80();
            lVar16 = lVar15;
            do {
              lVar20 = lVar15;
              if (lVar16 == lVar17) break;
              lVar16 = *(longlong *)(lVar16 + 0x30);
              lVar20 = lVar14;
            } while (lVar16 != 0);
          }
        }
        local_f8 = lVar20;
        cVar10 = (**(code **)(*plVar11 + 0x728))(plVar11,lVar20);
        if (cVar10 != '\0') {
          uVar13 = FUN_142f5bb60(&local_f8);
          uVar13 = FUN_142dea370(uVar13,local_40);
          iVar5 = (int)param_4[1];
          *(int *)(param_4 + 1) = iVar5 + 1;
          if (*(int *)((longlong)param_4 + 0xc) < iVar5 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
            ResizeGrow(param_4,iVar5);
          }
          FText::FText(*param_4 + (longlong)iVar5 * 0x18,uVar13);
          plVar1 = local_38;
          if (local_38 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_38 + 1;
            lVar20 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar20 == 1) {
              (**(code **)*local_38)(local_38);
              LOCK();
              piVar3 = (int *)((longlong)plVar1 + 0xc);
              iVar5 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*plVar1 + 8))(plVar1,1);
              }
            }
          }
        }
        if (local_d8 != 0) {
          FMemory::Free();
        }
        puVar4 = puVar18 + 9;
        puVar18 = puVar18 + 10;
      } while (puVar4 != puVar8 + (longlong)iVar6 * 10);
    }
  }
  return;
}



// FUNCTION 1412994e0 FUN_1412994e0 body=8 status=ok
// SIG undefined FUN_1412994e0(void)

undefined8 FUN_1412994e0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x1c0);
}



// FUNCTION 1412994f0 FUN_1412994f0 body=30 status=ok
// SIG undefined FUN_1412994f0(void)

void FUN_1412994f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14129ae20(0,param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 141299510 FUN_141299510 body=63 status=ok
// SIG undefined FUN_141299510(void)

void FUN_141299510(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 local_res20 [8];
  
  local_res20[0] = *param_4;
  FUN_14129b0f0(0,param_1,param_2,param_3,local_res20,param_5,param_6);
  return;
}



// FUNCTION 141299550 FUN_141299550 body=408 status=ok
// SIG undefined FUN_141299550(void)

undefined8 * FUN_141299550(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined8 local_28;
  longlong *plStack_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146852c60) {
    _Init_thread_header(&DAT_146852c60);
    if (DAT_146852c60 == -1) {
      FName::FName(&DAT_146852c58,L"OnlineSubsystem",1);
      _Init_thread_footer(&DAT_146852c60);
    }
  }
  uVar8 = DAT_146852c58;
  uVar5 = FUN_14168dc80();
  plVar6 = (longlong *)FModuleManager::GetModule(uVar5,uVar8);
  plVar6 = (longlong *)(**(code **)(*plVar6 + 0x50))(plVar6,param_2);
  bVar9 = plVar6 != (longlong *)0x0;
  if (bVar9) {
    puVar7 = (undefined8 *)(**(code **)(*plVar6 + 200))(plVar6,local_18);
    uVar8 = *puVar7;
  }
  else {
    puVar7 = &local_28;
    local_28 = 0;
    plStack_20 = (longlong *)0x0;
    uVar8 = 0;
  }
  *param_1 = uVar8;
  param_1[1] = puVar7[1];
  puVar7[1] = 0;
  *puVar7 = 0;
  if (bVar9) {
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_10 + 1;
      lVar4 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
  }
  plVar6 = plStack_20;
  if ((!bVar9) && (plStack_20 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_20 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_20 + 8))(plStack_20,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 1412996f0 FUN_1412996f0 body=21 status=ok
// SIG undefined FUN_1412996f0(void)

undefined8 FUN_1412996f0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x118) != 0) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x118) + 0x150);
  }
  return 0;
}



// FUNCTION 141299710 FUN_141299710 body=421 status=ok
// SIG undefined FUN_141299710(void)

void FUN_141299710(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int *piVar4;
  undefined1 local_res18 [8];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_14126f530();
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if (*piVar4 < DAT_146878178) {
    _Init_thread_header(&DAT_146878178);
    if (DAT_146878178 == -1) {
      uVar1 = AGFreezeCharacterCue::GetPrivateStaticClass();
      AGFreezeCharacterCue::GetPrivateStaticClass();
      puVar2 = (undefined8 *)FName::FName(local_res18,L"DataAsset",1);
      DAT_146878170 = FUN_1405dfb00(uVar1,*puVar2);
      _Init_thread_footer(&DAT_146878178);
    }
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146878170 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146878170 + 0x40) + (short)iVar3;
      local_14 = 1;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146878170 + 0x30));
  }
  if (*piVar4 < DAT_146878188) {
    _Init_thread_header(&DAT_146878188);
    if (DAT_146878188 == -1) {
      uVar1 = AGFreezeCharacterCue::GetPrivateStaticClass();
      AGFreezeCharacterCue::GetPrivateStaticClass();
      puVar2 = (undefined8 *)FName::FName(local_res18,L"bIsSecondaryInUse",1);
      DAT_146878180 = FUN_1405dfb00(uVar1,*puVar2);
      _Init_thread_footer(&DAT_146878188);
    }
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146878180 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146878180 + 0x40) + (short)iVar3;
      local_14 = 3;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146878180 + 0x30));
  }
  return;
}



// FUNCTION 1412998c0 FUN_1412998c0 body=789 status=ok
// SIG undefined FUN_1412998c0(void)

void FUN_1412998c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [8];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_14233e8d0();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146878198) && (_Init_thread_header(&DAT_146878198), DAT_146878198 == -1)) {
    uVar1 = FUN_1414e8c10();
    FUN_1414e8c10();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"MaxLoadedAmmo",1);
    DAT_146878190 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146878198);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146878190 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146878190 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146878190 + 0x30));
  }
  if ((*piVar5 < DAT_1468781a8) && (_Init_thread_header(&DAT_1468781a8), DAT_1468781a8 == -1)) {
    uVar1 = FUN_1414e8c10();
    FUN_1414e8c10();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"StoredAmmo",1);
    DAT_1468781a0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_1468781a8);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_1468781a0 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_1468781a0 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_1468781a0 + 0x30));
  }
  if ((*piVar5 < DAT_1468781b8) && (_Init_thread_header(&DAT_1468781b8), DAT_1468781b8 == -1)) {
    uVar1 = FUN_1414e8c10();
    FUN_1414e8c10();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"SpareAmmo",1);
    DAT_1468781b0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_1468781b8);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_1468781b0 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_1468781b0 + 0x40) + (short)iVar3;
      local_14 = 2;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_1468781b0 + 0x30));
  }
  if ((*piVar5 < DAT_1468781c8) && (_Init_thread_header(&DAT_1468781c8), DAT_1468781c8 == -1)) {
    uVar1 = FUN_1414e8c10();
    FUN_1414e8c10();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ServerSyncedLoadedAmmo",1);
    DAT_1468781c0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_1468781c8);
  }
  if (0 < *(int *)(DAT_1468781c0 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_1468781c0 + 0x40) + (short)iVar4;
      local_14 = 2;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_1468781c0 + 0x30));
  }
  return;
}



// FUNCTION 141299be0 FUN_141299be0 body=609 status=ok
// SIG undefined FUN_141299be0(void)

void FUN_141299be0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [8];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_14309cca0();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146878208) && (_Init_thread_header(&DAT_146878208), DAT_146878208 == -1)) {
    uVar1 = UMovieSceneAudioSection::GetPrivateStaticClass();
    UMovieSceneAudioSection::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"NumShotsToBreak",1);
    DAT_146878200 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146878208);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146878200 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146878200 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146878200 + 0x30));
  }
  if ((*piVar5 < DAT_146878218) && (_Init_thread_header(&DAT_146878218), DAT_146878218 == -1)) {
    uVar1 = UMovieSceneAudioSection::GetPrivateStaticClass();
    UMovieSceneAudioSection::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"SelectedBrokenEffectsIndex",1);
    DAT_146878210 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146878218);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146878210 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146878210 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146878210 + 0x30));
  }
  if ((*piVar5 < DAT_146878228) && (_Init_thread_header(&DAT_146878228), DAT_146878228 == -1)) {
    uVar1 = UMovieSceneAudioSection::GetPrivateStaticClass();
    UMovieSceneAudioSection::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bBroken",1);
    DAT_146878220 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146878228);
  }
  if (0 < *(int *)(DAT_146878220 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146878220 + 0x40) + (short)iVar4;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146878220 + 0x30));
  }
  return;
}



// FUNCTION 141299e50 FUN_141299e50 body=433 status=ok
// SIG undefined FUN_141299e50(void)

void FUN_141299e50(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [8];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_14309d580();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146878238) && (_Init_thread_header(&DAT_146878238), DAT_146878238 == -1)) {
    uVar1 = FUN_1414e7df0();
    FUN_1414e7df0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"CurrentRepairType",1);
    DAT_146878230 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146878238);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146878230 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146878230 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146878230 + 0x30));
  }
  if ((*piVar5 < DAT_146878248) && (_Init_thread_header(&DAT_146878248), DAT_146878248 == -1)) {
    uVar1 = FUN_1414e7df0();
    FUN_1414e7df0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ClientRepairState",1);
    DAT_146878240 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146878248);
  }
  if (0 < *(int *)(DAT_146878240 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146878240 + 0x40) + (short)iVar4;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146878240 + 0x30));
  }
  return;
}



// FUNCTION 14129a010 FUN_14129a010 body=236 status=ok
// SIG undefined FUN_14129a010(void)

void FUN_14129a010(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 local_res18 [16];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_14233e8d0();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146878258) && (_Init_thread_header(&DAT_146878258), DAT_146878258 == -1))
  {
    uVar1 = UUGStreamInteractSpawnedActorUW::GetPrivateStaticClass();
    UUGStreamInteractSpawnedActorUW::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bIsUsing",1);
    DAT_146878250 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146878258);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146878250 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146878250 + 0x40) + (short)iVar3;
      local_14 = 3;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146878250 + 0x30));
  }
  return;
}



// FUNCTION 14129a100 FUN_14129a100 body=785 status=ok
// SIG undefined FUN_14129a100(void)

void FUN_14129a100(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [8];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_14233e8d0();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146878268) && (_Init_thread_header(&DAT_146878268), DAT_146878268 == -1)) {
    uVar1 = FUN_1414ec640();
    FUN_1414ec640();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"MaxShield",1);
    DAT_146878260 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146878268);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146878260 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146878260 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146878260 + 0x30));
  }
  if ((*piVar5 < DAT_146878278) && (_Init_thread_header(&DAT_146878278), DAT_146878278 == -1)) {
    uVar1 = FUN_1414ec640();
    FUN_1414ec640();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ShieldPool",1);
    DAT_146878270 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146878278);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146878270 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146878270 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146878270 + 0x30));
  }
  if ((*piVar5 < DAT_146878288) && (_Init_thread_header(&DAT_146878288), DAT_146878288 == -1)) {
    uVar1 = FUN_1414ec640();
    FUN_1414ec640();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bIsShieldActive",1);
    DAT_146878280 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146878288);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146878280 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146878280 + 0x40) + (short)iVar3;
      local_14 = 3;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146878280 + 0x30));
  }
  if ((*piVar5 < DAT_146878298) && (_Init_thread_header(&DAT_146878298), DAT_146878298 == -1)) {
    uVar1 = FUN_1414ec640();
    FUN_1414ec640();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ShieldState",1);
    DAT_146878290 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146878298);
  }
  if (0 < *(int *)(DAT_146878290 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146878290 + 0x40) + (short)iVar4;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146878290 + 0x30));
  }
  return;
}



// FUNCTION 14129a420 FUN_14129a420 body=785 status=ok
// SIG undefined FUN_14129a420(void)

void FUN_14129a420(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [8];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_14233e8d0();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_1468782b8) && (_Init_thread_header(&DAT_1468782b8), DAT_1468782b8 == -1)) {
    uVar1 = UUGBrightnessScreenUW::GetPrivateStaticClass();
    UUGBrightnessScreenUW::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"Scale",1);
    DAT_1468782b0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_1468782b8);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_1468782b0 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_1468782b0 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_1468782b0 + 0x30));
  }
  if ((*piVar5 < DAT_1468782c8) && (_Init_thread_header(&DAT_1468782c8), DAT_1468782c8 == -1)) {
    uVar1 = UUGBrightnessScreenUW::GetPrivateStaticClass();
    UUGBrightnessScreenUW::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"AccuracyScale",1);
    DAT_1468782c0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_1468782c8);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_1468782c0 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_1468782c0 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_1468782c0 + 0x30));
  }
  if ((*piVar5 < DAT_1468782d8) && (_Init_thread_header(&DAT_1468782d8), DAT_1468782d8 == -1)) {
    uVar1 = UUGBrightnessScreenUW::GetPrivateStaticClass();
    UUGBrightnessScreenUW::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ZoomScale",1);
    DAT_1468782d0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_1468782d8);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_1468782d0 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_1468782d0 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_1468782d0 + 0x30));
  }
  if ((*piVar5 < DAT_1468782e8) && (_Init_thread_header(&DAT_1468782e8), DAT_1468782e8 == -1)) {
    uVar1 = UUGBrightnessScreenUW::GetPrivateStaticClass();
    UUGBrightnessScreenUW::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ZoomAccuracyScale",1);
    DAT_1468782e0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_1468782e8);
  }
  if (0 < *(int *)(DAT_1468782e0 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_1468782e0 + 0x40) + (short)iVar4;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_1468782e0 + 0x30));
  }
  return;
}



// FUNCTION 14129a740 FUN_14129a740 body=63 status=ok
// SIG undefined FUN_14129a740(void)

undefined8 FUN_14129a740(longlong param_1,undefined8 param_2)

{
  longlong local_18 [2];
  
  FName::ToString(param_1 + 0x78,local_18);
  FUN_141671940(param_2,local_18,1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 14129a790 FUN_14129a790 body=83 status=ok
// SIG undefined FUN_14129a790(void)

ulonglong FUN_14129a790(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  iVar1 = (**(code **)(*param_1 + 0x418))();
  if (0 < iVar1) {
    uVar2 = (**(code **)(*param_1 + 0x448))();
    uVar3 = (**(code **)(*param_1 + 0x418))(param_1);
    if ((int)uVar3 <= (int)uVar2) {
      uVar2 = uVar3;
    }
    return (ulonglong)uVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00014129a7e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(*param_1 + 0x448))(param_1);
  return uVar4;
}



// FUNCTION 14129a7f0 FUN_14129a7f0 body=7 status=ok
// SIG undefined FUN_14129a7f0(void)

undefined4 FUN_14129a7f0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x278);
}



// FUNCTION 14129a800 FUN_14129a800 body=59 status=ok
// SIG undefined FUN_14129a800(void)

undefined8 FUN_14129a800(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x440);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x440);
                    /* WARNING: Could not recover jumptable at 0x00014129a82c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*plVar2 + 0x278))(plVar2);
    return uVar3;
  }
  return 0;
}



// FUNCTION 14129a840 FUN_14129a840 body=68 status=ok
// SIG undefined FUN_14129a840(void)

undefined8 FUN_14129a840(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x440);
  if (cVar1 != '\0') {
    lVar2 = FWeakObjectPtr::Get(param_1 + 0x440);
    if (*(longlong **)(lVar2 + 0x280) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014129a875. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(**(longlong **)(lVar2 + 0x280) + 0x278))();
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 14129a890 FUN_14129a890 body=56 status=ok
// SIG undefined FUN_14129a890(void)

undefined4 FUN_14129a890(void)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)UGGamepadProfileSettings::GetPrivateStaticClass();
  lVar2 = plVar1[0x1f];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 0x368))(plVar1);
    lVar2 = plVar1[0x1f];
  }
  return *(undefined4 *)(lVar2 + 100);
}



// FUNCTION 14129a8d0 FUN_14129a8d0 body=63 status=ok
// SIG undefined FUN_14129a8d0(void)

void FUN_14129a8d0(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_2 + 0x148))(param_2);
  if (lVar1 != 0) {
    FUN_141299160(param_3,lVar1,param_4,param_5);
  }
  return;
}



// FUNCTION 14129a910 FUN_14129a910 body=270 status=ok
// SIG undefined FUN_14129a910(void)

undefined4 FUN_14129a910(longlong param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined2 *local_28;
  int local_20;
  
  FString::FString(&local_28,param_3);
  lVar6 = *(longlong *)(param_1 + 0x160);
  lVar5 = (longlong)*(int *)(param_1 + 0x168) * 0xf0 + lVar6;
  do {
    if (lVar6 == lVar5) {
      if (local_28 != (undefined2 *)0x0) {
        FMemory::Free(local_28);
      }
LAB_14129a9b2:
      if (*param_3 != 0) {
        FMemory::Free();
      }
      return 5;
    }
    puVar4 = &DAT_143f3eda8;
    if (local_20 != 0) {
      puVar4 = local_28;
    }
    if (*(int *)(lVar6 + 0x10) == 0) {
      puVar3 = &DAT_143f3eda8;
    }
    else {
      puVar3 = *(undefined2 **)(lVar6 + 8);
    }
    iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar3,puVar4);
    if (iVar1 == 0) {
      if (local_28 != (undefined2 *)0x0) {
        FMemory::Free(local_28);
      }
      if ((lVar6 != 0) && (lVar5 = (**(code **)(*param_2 + 0x148))(param_2), lVar5 != 0)) {
        uVar2 = FUN_14129dd30(lVar6,lVar5);
        if (*param_3 == 0) {
          return uVar2;
        }
        FMemory::Free();
        return uVar2;
      }
      goto LAB_14129a9b2;
    }
    lVar6 = lVar6 + 0xf0;
  } while( true );
}



// FUNCTION 14129aa20 FUN_14129aa20 body=53 status=ok
// SIG undefined FUN_14129aa20(void)

undefined8 FUN_14129aa20(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_2 + 0x148))(param_2);
  if (lVar1 != 0) {
    uVar2 = FUN_14129dd30(param_3,lVar1);
    return uVar2;
  }
  return 5;
}



// FUNCTION 14129aa60 FUN_14129aa60 body=286 status=ok
// SIG undefined FUN_14129aa60(void)

void FUN_14129aa60(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong local_res8;
  
  *(undefined4 *)(param_2 + 1) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_2 + 0xc)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_2,0);
  }
  lVar6 = *(longlong *)(param_1 + 0x160);
  lVar7 = (longlong)*(int *)(param_1 + 0x168) * 0xf0 + lVar6;
  do {
    if (lVar6 == lVar7) {
      return;
    }
    plVar5 = *(longlong **)(lVar6 + 0x58);
    plVar4 = plVar5 + (longlong)*(int *)(lVar6 + 0x60) * 10;
    for (; plVar5 != plVar4; plVar5 = plVar5 + 10) {
      (**(code **)(*plVar5 + 0x18))(plVar5,&local_res8);
      if (local_res8 != 0) {
        lVar3 = FUN_142f71d80();
        for (lVar1 = local_res8; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
          if (lVar1 == lVar3) {
            iVar2 = TArray<TSubclassOf<AEmitterCameraLensEffectBase>,FDefaultAllocator>::Find
                              (param_2,&local_res8);
            if (iVar2 == -1) {
              iVar2 = (int)param_2[1];
              *(int *)(param_2 + 1) = iVar2 + 1;
              if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
              }
              *(longlong *)(*param_2 + (longlong)iVar2 * 8) = local_res8;
            }
            break;
          }
        }
      }
    }
    lVar6 = lVar6 + 0xf0;
  } while( true );
}



// FUNCTION 14129ab90 FUN_14129ab90 body=323 status=ok
// SIG undefined FUN_14129ab90(void)

undefined8 FUN_14129ab90(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined1 local_res8 [8];
  undefined4 uStack_c;
  
  if (*(longlong *)(param_1 + 0x438) != 0) {
    return *(undefined8 *)(param_1 + 0x438);
  }
  uVar3 = FUN_141289710(*(undefined8 *)(param_1 + 0x118));
  *(undefined8 *)(param_1 + 0x438) = uVar3;
  FUN_142350b20(uVar3,0);
  FUN_14234b150(*(undefined8 *)(param_1 + 0x438));
  lVar2 = *(longlong *)(param_1 + 0x438);
  plVar7 = (longlong *)(lVar2 + 0x2f0);
  plVar4 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar4 == (longlong *)0x0) {
    return *(undefined8 *)(param_1 + 0x438);
  }
  *plVar4 = (longlong)&PTR_FUN_143fcfec0;
  FWeakObjectPtr::operator=(plVar4 + 1,param_1);
  *(undefined4 *)(plVar4 + 2) = 0x412a7b40;
  *(undefined4 *)((longlong)plVar4 + 0x14) = 1;
  *(undefined4 *)(plVar4 + 3) = 0;
  *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_c;
  lVar5 = FDelegateHandle::GenerateNewID();
  plVar4[5] = lVar5;
  *plVar4 = (longlong)&PTR_FUN_143fcff08;
  FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar7,1);
  (**(code **)(*plVar4 + 0x20))(plVar4,local_res8);
  iVar1 = *(int *)(lVar2 + 0x2f8);
  *(int *)(lVar2 + 0x2f8) = iVar1 + 1;
  if (*(int *)(lVar2 + 0x2fc) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar7,iVar1);
  }
  puVar6 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar7);
  *puVar6 = plVar4;
  *(undefined4 *)(puVar6 + 1) = 3;
  return *(undefined8 *)(param_1 + 0x438);
}



// FUNCTION 14129ace0 GetCancelReorientationCurve body=18 status=ok
// SIG undefined GetCancelReorientationCurve(void)

undefined8 UAttackComponent::GetCancelReorientationCurve(longlong param_1)

{
  if (*(longlong *)(param_1 + 1000) != 0) {
    return *(undefined8 *)(*(longlong *)(param_1 + 1000) + 0x38);
  }
  return 0;
}



// FUNCTION 14129ad00 FUN_14129ad00 body=152 status=ok
// SIG undefined FUN_14129ad00(void)

void FUN_14129ad00(undefined8 param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar3 = UParticleModuleTypeDataGpu::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) &&
       (cVar2 = ACoreContact::DoAllVisibilityExpressionsNeedToBeTrue(param_2), cVar2 == '\0')) {
      FUN_14126fc80(param_1,param_2,param_3,param_4);
      return;
    }
  }
  *param_3 = 0;
  *param_4 = 0;
  return;
}



// FUNCTION 14129ada0 FUN_14129ada0 body=127 status=ok
// SIG undefined FUN_14129ada0(void)

undefined8 FUN_14129ada0(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (((*(byte *)(param_1 + 0x28) & 1) != 0) && (param_2 != 0)) {
    lVar3 = UParticleModuleTypeDataGpu::GetPrivateStaticClass();
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
      cVar2 = ACoreContact::DoAllVisibilityExpressionsNeedToBeTrue(param_2);
      if (cVar2 == '\0') {
        uVar4 = FUN_14126fdc0(param_1,param_2);
        return uVar4;
      }
    }
  }
  return 0;
}



// FUNCTION 14129ae20 FUN_14129ae20 body=326 status=ok
// SIG undefined FUN_14129ae20(void)

void FUN_14129ae20(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  undefined4 *puVar1;
  void *_Src;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  void *local_58;
  ulonglong local_50;
  undefined1 *local_48;
  int iStack_40;
  undefined4 uStack_3c;
  void **local_38;
  undefined4 *local_30;
  undefined8 local_28;
  
  puVar1 = param_5;
  local_38 = &local_58;
  uStack_3c = (undefined4)((ulonglong)&local_38 >> 0x20);
  *param_4 = 0;
  local_48 = &LAB_141293ce0;
  iStack_40 = (int)&local_38;
  *param_5 = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_30 = param_4;
  local_28 = param_3;
  FUN_1412be2f0(param_2,param_1,&local_48);
  uVar2 = FUN_142e035e0();
  lVar3 = (**(code **)(*param_2 + 0x628))(param_2,uVar2);
  _Src = local_58;
  if (lVar3 != 0) {
    lVar4 = (longlong)(int)local_50;
    local_48 = (undefined1 *)0x0;
    iStack_40 = (int)local_50;
    if ((int)local_50 == 0) {
      uStack_3c = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                (&local_48,local_50 & 0xffffffff,0);
      _guard_xfg_dispatch_icall_nop(local_48,_Src,lVar4 << 3);
    }
    FUN_142dcda40(lVar3,&local_48,param_3,puVar1,&param_5,0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14129af70 FUN_14129af70 body=164 status=ok
// SIG undefined FUN_14129af70(void)

undefined8 * FUN_14129af70(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  longlong local_18 [2];
  
  uVar3 = 0;
  lVar1 = *(longlong *)(param_1 + 0xa0);
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)FSoftObjectPath::ToString((longlong *)(param_1 + 0xa0),local_18);
      if (*(int *)(puVar2 + 1) == 0) {
        puVar4 = &DAT_143f3eda8;
      }
      else {
        puVar4 = (undefined2 *)*puVar2;
      }
      uVar3 = APlayerState::GetPrivateStaticClass();
      uVar3 = FUN_141799830(uVar3,0,puVar4,0,0,0);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
    }
    *param_2 = uVar3;
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14129b020 FUN_14129b020 body=197 status=ok
// SIG undefined FUN_14129b020(void)

longlong FUN_14129b020(undefined8 param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 local_res10 [3];
  
  lVar2 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (lVar2 == 0) {
    return 0;
  }
  lVar5 = *(longlong *)(lVar2 + 0x30);
  lVar3 = FMistWorldUtils::GetDebugEntityDrawSystem(lVar2);
  if (lVar5 == 0) {
    return 0;
  }
  lVar5 = *(longlong *)(lVar5 + 0xc0);
  if (lVar5 == 0) {
    return 0;
  }
  if (lVar3 != 0) {
    local_res10[0] = *(undefined8 *)(lVar5 + 0x18);
    uVar4 = FMistWorldUtils::GetDebugEntityDrawSystem(lVar2);
    lVar2 = FUN_142f41ab0(uVar4,local_res10);
    if (lVar2 != 0) {
      lVar5 = FUN_1414a9b90();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
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
  return 0;
}



// FUNCTION 14129b0f0 FUN_14129b0f0 body=467 status=ok
// SIG undefined FUN_14129b0f0(void)

void FUN_14129b0f0(longlong param_1,longlong *param_2,undefined4 *param_3,int *param_4,char *param_5
                  ,longlong param_6,longlong param_7)

{
  void *_Src;
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 *local_78;
  undefined4 **ppuStack_70;
  int local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 *local_58;
  int *local_50;
  char *local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  
  local_48 = param_5;
  *param_3 = 0;
  local_40 = &param_6;
  local_38 = &param_7;
  ppuStack_70 = &local_58;
  *param_4 = 0;
  local_78 = &LAB_141293cf0;
  local_58 = param_3;
  local_50 = param_4;
  FUN_1412be2f0(param_2,param_1,&local_78);
  uVar2 = UEnvQueryTest_Random::StaticClass();
  lVar3 = (**(code **)(*param_2 + 0x628))(param_2,uVar2);
  if (lVar3 != 0) {
    uVar2 = (**(code **)(*param_2 + 0x148))(param_2);
    lVar4 = FUN_140e7e6f0(uVar2);
    if (lVar4 != 0) {
      puVar5 = *(undefined8 **)(lVar3 + 0x178);
      puVar6 = puVar5 + (longlong)*(int *)(lVar3 + 0x180) * 4;
      for (; puVar5 != puVar6; puVar5 = puVar5 + 4) {
        local_68 = *(int *)(puVar5 + 2);
        lVar3 = (longlong)local_68;
        local_78 = (undefined1 *)*puVar5;
        ppuStack_70 = (undefined4 **)0x0;
        _Src = (void *)puVar5[1];
        if (local_68 == 0) {
          local_64 = 0;
        }
        else {
          TArray<FString,FDefaultAllocator>::ResizeForCopy(&ppuStack_70,local_68,0);
          _guard_xfg_dispatch_icall_nop(ppuStack_70,_Src,lVar3 << 4);
        }
        local_60 = *(undefined4 *)(puVar5 + 3);
        uVar2 = (**(code **)(*param_2 + 0x148))(param_2);
        lVar3 = FUN_140e25cb0(&local_78,uVar2);
        if ((((lVar3 != 0) &&
             (((lVar4 = *(longlong *)(lVar3 + 0x1d0), lVar4 == 0 ||
               (*(char *)(lVar4 + 0xe0) == *param_5)) && (lVar4 == param_6)))) &&
            (*(longlong *)(lVar3 + 0xb8) == param_7)) &&
           ((param_1 == 0 || (cVar1 = FUN_1412a3110(lVar3,param_1), cVar1 != '\0')))) {
          *param_4 = *param_4 + local_68;
        }
        if (ppuStack_70 != (undefined4 **)0x0) {
          FMemory::Free();
        }
      }
    }
  }
  return;
}



// FUNCTION 14129b2d0 FUN_14129b2d0 body=1523 status=ok
// SIG undefined FUN_14129b2d0(void)

void FUN_14129b2d0(longlong *param_1,longlong param_2,longlong *param_3,char param_4,
                  undefined8 param_5)

{
  int iVar1;
  void *pvVar2;
  bool bVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *local_d8;
  int local_d0;
  longlong *local_c8;
  int local_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined1 local_68 [24];
  undefined1 local_50 [24];
  
  if ((((param_1 != (longlong *)0x0) && (plVar12 = (longlong *)0x0, param_2 != 0)) &&
      (lVar6 = (**(code **)(*param_1 + 0x148))(), lVar6 != 0)) &&
     (lVar7 = FUN_142f429c0(lVar6), lVar7 != 0)) {
    if (param_4 == '\0') {
      puVar8 = (undefined8 *)USkinnedMeshComponent::GetSlavePoseComponents(lVar7);
      local_c8 = (longlong *)0x0;
      local_c0 = *(int *)(puVar8 + 1);
      lVar6 = (longlong)local_c0;
      pvVar2 = (void *)*puVar8;
      plVar11 = plVar12;
      if (local_c0 != 0) {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_c8,local_c0,0);
        plVar11 = local_c8;
        _guard_xfg_dispatch_icall_nop(local_c8,pvVar2,lVar6 << 3);
      }
      plVar13 = plVar11 + local_c0;
      plVar4 = plVar11;
      for (; plVar11 != plVar13; plVar11 = plVar11 + 1) {
        lVar6 = *plVar11;
        if (lVar6 == 0) {
LAB_14129b83e:
          bVar3 = false;
        }
        else {
          lVar7 = FWeakObjectPtr::Get();
          if (lVar7 == 0) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            if ((DAT_1464b56f4 != *(int *)(lVar6 + 0x78)) && (*(longlong *)(lVar6 + 0x80) != 0)) {
              lVar7 = FUN_141796df0();
              FWeakObjectPtr::operator=(lVar6 + 0x70,lVar7);
              if ((lVar7 != 0) || (DAT_1469e7e10 == '\0')) {
                LOCK();
                if (DAT_1464b56f4 == 0) {
                  DAT_1464b56f4 = 0;
                }
                UNLOCK();
                *(int *)(lVar6 + 0x78) = DAT_1464b56f4;
              }
              lVar7 = FWeakObjectPtr::Get();
              if (lVar7 != 0) goto LAB_14129b719;
            }
            goto LAB_14129b83e;
          }
LAB_14129b719:
          local_78 = 0;
          local_70 = 0;
          local_8c = 0;
          local_80 = 0;
          local_90 = 0xffffffff;
          uVar10 = FSoftObjectPath::FSoftObjectPath(local_50,param_2);
          FSoftObjectPath::operator=(&local_80,uVar10);
          FWeakObjectPtr::operator=(&local_90,param_2);
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          local_8c = CONCAT44(DAT_1464b56f4,(undefined4)local_8c);
          plVar12 = (longlong *)0x2;
          lVar7 = FWeakObjectPtr::Get();
          if (lVar7 == 0) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            if ((DAT_1464b56f4 != *(int *)(lVar6 + 0x78)) && (*(longlong *)(lVar6 + 0x80) != 0)) {
              lVar7 = FUN_141796df0();
              FWeakObjectPtr::operator=(lVar6 + 0x70,lVar7);
              if ((lVar7 != 0) || (DAT_1469e7e10 == '\0')) {
                LOCK();
                if (DAT_1464b56f4 == 0) {
                  DAT_1464b56f4 = 0;
                }
                UNLOCK();
                *(int *)(lVar6 + 0x78) = DAT_1464b56f4;
              }
              lVar7 = FWeakObjectPtr::Get(lVar6 + 0x70);
              if (lVar7 != 0) goto LAB_14129b7ec;
            }
LAB_14129b822:
            lVar7 = 0;
          }
          else {
LAB_14129b7ec:
            lVar9 = FUN_142e67be0();
            if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (!bVar3) goto LAB_14129b822;
          }
          cVar5 = FSoftObjectPath::operator==(lVar7 + 0xa0,&local_80);
          if (cVar5 == '\0') goto LAB_14129b83e;
          bVar3 = true;
        }
        if ((plVar12 != (longlong *)0x0) && (plVar12 = (longlong *)0x0, local_78 != 0)) {
          FMemory::Free();
        }
        if (bVar3) {
          iVar1 = (int)param_3[1];
          *(int *)(param_3 + 1) = iVar1 + 1;
          if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar1);
          }
          *(longlong *)(*param_3 + (longlong)iVar1 * 8) = lVar6;
        }
        plVar4 = local_c8;
      }
    }
    else {
      puVar8 = (undefined8 *)UAssetRegistryImpl::OnPathAdded();
      local_d8 = (longlong *)0x0;
      local_d0 = *(int *)(puVar8 + 1);
      lVar7 = (longlong)local_d0;
      pvVar2 = (void *)*puVar8;
      plVar11 = plVar12;
      if (local_d0 != 0) {
        TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_d8,local_d0,0);
        plVar11 = local_d8;
        _guard_xfg_dispatch_icall_nop(local_d8,pvVar2,lVar7 << 4);
      }
      plVar13 = plVar11 + (longlong)local_d0 * 2;
      plVar4 = plVar11;
      for (; plVar11 != plVar13; plVar11 = plVar11 + 2) {
        if ((*(char *)((longlong)plVar11 + 10) == '\0') && (lVar7 = *plVar11, lVar7 != 0)) {
          lVar9 = FWeakObjectPtr::Get();
          if (lVar9 == 0) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            if ((DAT_1464b56f4 != *(int *)(lVar7 + 0x78)) && (*(longlong *)(lVar7 + 0x80) != 0)) {
              lVar9 = FUN_141796df0();
              FWeakObjectPtr::operator=(lVar7 + 0x70,lVar9);
              if ((lVar9 != 0) || (DAT_1469e7e10 == '\0')) {
                LOCK();
                if (DAT_1464b56f4 == 0) {
                  DAT_1464b56f4 = 0;
                }
                UNLOCK();
                *(int *)(lVar7 + 0x78) = DAT_1464b56f4;
              }
              lVar9 = FWeakObjectPtr::Get(lVar7 + 0x70);
              if (lVar9 != 0) goto LAB_14129b43b;
            }
            goto LAB_14129b597;
          }
LAB_14129b43b:
          lVar7 = FUN_142e67be0();
          if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (!bVar3) goto LAB_14129b597;
          local_b8 = 0xffffffff;
          local_a0 = 0;
          local_a8 = 0;
          local_98 = 0;
          local_b4 = 0;
          uVar10 = FSoftObjectPath::FSoftObjectPath(local_68,param_2);
          FSoftObjectPath::operator=(&local_a8,uVar10);
          FWeakObjectPtr::operator=(&local_b8,param_2);
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          lVar7 = *plVar11;
          plVar12 = (longlong *)0x1;
          local_b4 = CONCAT44(DAT_1464b56f4,(undefined4)local_b4);
          lVar9 = FWeakObjectPtr::Get();
          if (lVar9 == 0) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            if ((DAT_1464b56f4 != *(int *)(lVar7 + 0x78)) && (*(longlong *)(lVar7 + 0x80) != 0)) {
              lVar9 = FUN_141796df0();
              FWeakObjectPtr::operator=(lVar7 + 0x70,lVar9);
              if ((lVar9 != 0) || (DAT_1469e7e10 == '\0')) {
                LOCK();
                if (DAT_1464b56f4 == 0) {
                  DAT_1464b56f4 = 0;
                }
                UNLOCK();
                *(int *)(lVar7 + 0x78) = DAT_1464b56f4;
              }
              lVar9 = FWeakObjectPtr::Get(lVar7 + 0x70);
              if (lVar9 != 0) goto LAB_14129b545;
            }
LAB_14129b57b:
            lVar9 = 0;
          }
          else {
LAB_14129b545:
            lVar7 = FUN_142e67be0();
            if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (!bVar3) goto LAB_14129b57b;
          }
          cVar5 = FSoftObjectPath::operator==(lVar9 + 0xa0,&local_a8);
          if (cVar5 == '\0') goto LAB_14129b597;
          bVar3 = true;
        }
        else {
LAB_14129b597:
          bVar3 = false;
        }
        if ((plVar12 != (longlong *)0x0) && (plVar12 = (longlong *)0x0, local_a0 != 0)) {
          FMemory::Free();
        }
        if (((bVar3) &&
            ((*plVar11 == 0 || (cVar5 = FUN_142f3e730(*plVar11,param_5), cVar5 != '\0')))) &&
           ((cVar5 = FOutputDevice::CanBeUsedOnAnyThread(), cVar5 != '\0' ||
            (((*plVar11 != 0 && (cVar5 = FUN_142f43380(*plVar11,lVar6,0), cVar5 != '\0')) &&
             (*(char *)(*plVar11 + 0xd8) != '\x01')))))) {
          iVar1 = (int)param_3[1];
          *(int *)(param_3 + 1) = iVar1 + 1;
          if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar1);
          }
          *(longlong *)(*param_3 + (longlong)iVar1 * 8) = *plVar11;
        }
        plVar4 = local_d8;
      }
    }
    if (plVar4 != (longlong *)0x0) {
      FMemory::Free(plVar4);
    }
  }
  return;
}



// FUNCTION 14129b8d0 FUN_14129b8d0 body=716 status=ok
// SIG undefined FUN_14129b8d0(void)

longlong FUN_14129b8d0(longlong *param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res18 [8];
  
  lVar2 = (**(code **)(*param_1 + 0x148))();
  if ((((lVar2 == 0) || (lVar2 = UWorld::GetGameState<APVPGameState>(lVar2), lVar2 == 0)) ||
      (*(longlong *)(lVar2 + 0x5a0) == 0)) || (lVar5 = *(longlong *)(lVar2 + 0x598), lVar5 == 0)) {
    return 0;
  }
  if (param_2 != 0) {
    lVar3 = FUN_142f71d80();
    lVar5 = param_2;
    do {
      if (lVar5 == lVar3) goto LAB_14129b955;
      lVar5 = *(longlong *)(lVar5 + 0x30);
    } while (lVar5 != 0);
    lVar5 = *(longlong *)(lVar2 + 0x598);
  }
  plVar4 = (longlong *)FUN_142f5ed60(lVar5,local_res18);
  param_2 = *plVar4;
LAB_14129b955:
  lVar2 = FUN_142f5ef60(*(undefined8 *)(lVar2 + 0x598),param_2);
  if (lVar2 == 0) {
    return 0;
  }
  lVar5 = lVar2 + 0x70;
  lVar3 = FWeakObjectPtr::Get(lVar5);
  if (lVar3 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if (DAT_1464b56f4 == *(int *)(lVar2 + 0x78)) {
      return 0;
    }
    if (*(longlong *)(lVar2 + 0x80) == 0) {
      return 0;
    }
    lVar3 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar5,lVar3);
    if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar2 + 0x78) = DAT_1464b56f4;
    }
    lVar3 = FWeakObjectPtr::Get(lVar5);
    if (lVar3 == 0) {
      return 0;
    }
  }
  lVar3 = FWeakObjectPtr::Get(lVar5);
  if (lVar3 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(lVar2 + 0x78)) && (*(longlong *)(lVar2 + 0x80) != 0)) {
      lVar3 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar5,lVar3);
      if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(lVar2 + 0x78) = DAT_1464b56f4;
      }
      lVar3 = FWeakObjectPtr::Get(lVar5);
      if (lVar3 != 0) goto LAB_14129ba54;
    }
  }
  else {
LAB_14129ba54:
    lVar2 = FUN_142e67be0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_14129ba8d;
  }
  lVar3 = 0;
LAB_14129ba8d:
  lVar2 = lVar3 + 0x90;
  lVar5 = FWeakObjectPtr::Get(lVar2);
  if (lVar5 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if (DAT_1464b56f4 == *(int *)(lVar3 + 0x98)) {
      return 0;
    }
    if (*(longlong *)(lVar3 + 0xa0) == 0) {
      return 0;
    }
    lVar5 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar2,lVar5);
    if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar3 + 0x98) = DAT_1464b56f4;
    }
    lVar5 = FWeakObjectPtr::Get(lVar2);
    if (lVar5 == 0) {
      return 0;
    }
  }
  lVar2 = FUN_142e67c90();
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
      lVar2 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    lVar2 = FUN_1414a9b90();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return lVar5;
    }
  }
  return 0;
}



// FUNCTION 14129bba0 FUN_14129bba0 body=120 status=ok
// SIG undefined FUN_14129bba0(void)

longlong FUN_14129bba0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x88) == 0) {
    return 0;
  }
  lVar2 = FSoftObjectPath::TryLoad();
  if (lVar2 != 0) {
    lVar3 = UXSkinAnimationProfile::GetPrivateStaticClass();
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



// FUNCTION 14129bc20 FUN_14129bc20 body=412 status=ok
// SIG undefined FUN_14129bc20(void)

/* WARNING: Removing unreachable block (ram,0x00014129bd7b) */

void FUN_14129bc20(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong *local_38;
  undefined8 local_30;
  longlong local_28 [2];
  
  uVar4 = 0;
  local_38 = (longlong *)0x0;
  local_30 = 0;
  FUN_14129bdc0(param_1,param_2,&local_38,param_4,0);
  iVar1 = *(int *)((longlong)param_3 + 0xc);
  plVar3 = (longlong *)*param_3;
  iVar5 = (int)param_3[1];
  if (iVar1 < 0) {
    if (iVar5 != 0) {
      do {
        if (*plVar3 != 0) {
          FMemory::Free();
        }
        plVar3 = plVar3 + 2;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      iVar1 = *(int *)((longlong)param_3 + 0xc);
    }
    *(undefined4 *)(param_3 + 1) = 0;
    if (iVar1 != 0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_3,0);
    }
  }
  else {
    for (; iVar5 != 0; iVar5 = iVar5 + -1) {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 2;
    }
    *(undefined4 *)(param_3 + 1) = 0;
  }
  plVar3 = local_38;
  uVar7 = (ulonglong)((longlong)(local_38 + (int)local_30) + (7 - (longlong)local_38)) >> 3;
  if (local_38 + (int)local_30 < local_38) {
    uVar7 = uVar4;
  }
  plVar6 = local_38;
  if (uVar7 != 0) {
    do {
      if (*plVar6 != 0) {
        FName::ToString(*plVar6 + 0x78,local_28);
        FUN_141671940(&local_38,local_28,1);
        if (local_28[0] != 0) {
          FMemory::Free();
        }
        iVar1 = (int)param_3[1];
        *(int *)(param_3 + 1) = iVar1 + 1;
        if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar1);
        }
        puVar2 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_3);
        *puVar2 = 0;
        *puVar2 = local_38;
        local_38 = (longlong *)0x0;
        *(int *)(puVar2 + 1) = (int)local_30;
        *(undefined4 *)((longlong)puVar2 + 0xc) = local_30._4_4_;
        local_30 = 0;
      }
      plVar6 = plVar6 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar7);
  }
  if (plVar3 != (longlong *)0x0) {
    FMemory::Free(plVar3);
  }
  return;
}



// FUNCTION 14129bdc0 FUN_14129bdc0 body=904 status=ok
// SIG undefined FUN_14129bdc0(void)

bool FUN_14129bdc0(longlong *param_1,longlong param_2,longlong *param_3,char param_4,char param_5)

{
  longlong lVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  undefined1 local_60 [8];
  int local_58;
  longlong local_50;
  longlong local_48;
  
  if (((param_2 != 0) && (param_1 != (longlong *)0x0)) &&
     (lVar5 = (**(code **)(*param_1 + 0x148))(), lVar5 != 0)) {
    lVar5 = UWorld::GetGameState<APVPGameState>(lVar5);
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
      if (DAT_1468782f0 == '\0') {
        FUN_1412c54f0();
      }
      lVar1 = DAT_1468787b8 + (longlong)DAT_1468787c0 * 0x28;
      for (lVar8 = DAT_1468787b8; lVar8 != lVar1; lVar8 = lVar8 + 0x28) {
        TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(local_60,lVar8);
        lVar6 = FWeakObjectPtr::Get(local_60);
        if (lVar6 == 0) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          if ((DAT_1464b56f4 != local_58) && (local_50 != 0)) {
            lVar6 = FUN_141796df0(&local_50);
            FWeakObjectPtr::operator=(local_60,lVar6);
            if ((lVar6 != 0) || (DAT_1469e7e10 == '\0')) {
              LOCK();
              if (DAT_1464b56f4 == 0) {
                DAT_1464b56f4 = 0;
              }
              UNLOCK();
              local_58 = DAT_1464b56f4;
            }
            lVar6 = FWeakObjectPtr::Get(local_60);
            if (lVar6 != 0) goto LAB_14129bf21;
          }
        }
        else {
LAB_14129bf21:
          lVar6 = FWeakObjectPtr::Get();
          if (lVar6 == 0) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            if ((DAT_1464b56f4 != local_58) && (local_50 != 0)) {
              lVar6 = FUN_141796df0(&local_50);
              FWeakObjectPtr::operator=(local_60,lVar6);
              if ((lVar6 != 0) || (DAT_1469e7e10 == '\0')) {
                LOCK();
                if (DAT_1464b56f4 == 0) {
                  DAT_1464b56f4 = 0;
                }
                UNLOCK();
                local_58 = DAT_1464b56f4;
              }
              lVar6 = FWeakObjectPtr::Get();
              if (lVar6 != 0) goto LAB_14129bfa3;
            }
LAB_14129bfd9:
            lVar6 = 0;
          }
          else {
LAB_14129bfa3:
            lVar7 = FUN_1414f4830();
            if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (!bVar3) goto LAB_14129bfd9;
          }
          uVar9 = 0;
          plVar10 = *(longlong **)(lVar6 + 0x30);
          uVar11 = (longlong)*(int *)(lVar6 + 0x38) & 0x1fffffffffffffff;
          if (plVar10 + *(int *)(lVar6 + 0x38) < plVar10) {
            uVar11 = uVar9;
          }
          if (uVar11 != 0) {
            do {
              lVar6 = *plVar10;
              if ((((lVar6 != 0) && (cVar4 = FUN_1412a3110(lVar6,param_2), cVar4 != '\0')) &&
                  (((param_5 == '\0' || (*(longlong **)(lVar6 + 0xb8) == (longlong *)0x0)) ||
                   ((cVar4 = (**(code **)(**(longlong **)(lVar6 + 0xb8) + 0x288))(), cVar4 != '\0'
                    && (cVar4 = (**(code **)(**(longlong **)(lVar6 + 0xb8) + 0x280))
                                          (*(longlong **)(lVar6 + 0xb8),param_1), cVar4 != '\0')))))
                  ) && ((param_4 == '\0' ||
                        (((param_1[0x18d] != 0 &&
                          (cVar4 = FUN_140e278b0(param_1[0x18d],*(undefined8 *)(lVar6 + 0x78)),
                          cVar4 != '\0')) ||
                         ((lVar5 != 0 &&
                          ((*(longlong *)(lVar5 + 0x5a0) != 0 &&
                           (cVar4 = FUN_142f43100(*(longlong *)(lVar5 + 0x5a0),
                                                  *(undefined8 *)(lVar6 + 0x78)), cVar4 != '\0')))))
                         ))))) {
                iVar2 = (int)param_3[1];
                *(int *)(param_3 + 1) = iVar2 + 1;
                if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar2);
                }
                *(longlong *)(*param_3 + (longlong)iVar2 * 8) = lVar6;
              }
              plVar10 = plVar10 + 1;
              uVar9 = uVar9 + 1;
            } while (uVar9 != uVar11);
          }
        }
        if (local_48 != 0) {
          FMemory::Free();
        }
      }
    }
  }
  return 0 < (int)param_3[1];
}



// FUNCTION 14129c150 FUN_14129c150 body=1255 status=ok
// SIG undefined FUN_14129c150(void)

void FUN_14129c150(undefined8 param_1,longlong *param_2,longlong *param_3,char param_4)

{
  undefined4 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  char *pcVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined4 *puVar14;
  undefined8 local_res10 [2];
  char local_res20;
  longlong *local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  int local_98;
  longlong local_90;
  longlong local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48 [16];
  
  if ((param_2 != (longlong *)0x0) &&
     (local_res20 = param_4, lVar7 = (**(code **)(*param_2 + 0x148))(param_2), lVar7 != 0)) {
    local_68 = lVar7;
    if (DAT_146877b20 == '\0') {
      FUN_1412a2330(param_1);
    }
    puVar1 = DAT_1468780c0 + (longlong)DAT_1468780c8 * 10;
    if (DAT_1468780c0 != puVar1) {
      local_res10[0] = 0;
      puVar14 = DAT_1468780c0;
      do {
        local_a0 = *puVar14;
        local_9c = puVar14[1];
        local_98 = puVar14[2];
        local_50 = *(undefined8 *)(puVar14 + 4);
        local_88 = 0;
        local_80 = 0;
        local_90 = 0;
        FString::FString(local_48,puVar14 + 6);
        FSoftObjectPath::operator=(&local_90,&local_50);
        lVar8 = FWeakObjectPtr::Get();
        if (lVar8 == 0) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          if ((DAT_1464b56f4 != local_98) && (local_90 != 0)) {
            lVar8 = FUN_141796df0(&local_90);
            FWeakObjectPtr::operator=(&local_a0,lVar8);
            if ((lVar8 != 0) || (DAT_1469e7e10 == '\0')) {
              LOCK();
              if (DAT_1464b56f4 == 0) {
                DAT_1464b56f4 = 0;
              }
              UNLOCK();
              local_98 = DAT_1464b56f4;
            }
            lVar8 = FWeakObjectPtr::Get(&local_a0);
            if (lVar8 != 0) goto LAB_14129c2ac;
          }
LAB_14129c2e2:
          lVar8 = FUN_1405ec200(&local_a0);
          if (lVar8 != 0) {
            lVar9 = FUN_1414a9b90();
            if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if (bVar5) goto LAB_14129c32d;
          }
        }
        else {
LAB_14129c2ac:
          lVar9 = FUN_1414a9b90();
          if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (!bVar5) goto LAB_14129c2e2;
LAB_14129c32d:
          local_78 = 0;
          local_70 = 0;
          FUN_14129b2d0(lVar7,lVar8,&local_78,1,param_2);
          if (((int)local_70 != 0) || (local_res20 == '\0')) {
            iVar4 = (int)param_3[1];
            *(int *)(param_3 + 1) = iVar4 + 1;
            if (*(int *)((longlong)param_3 + 0xc) < iVar4 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar4);
            }
            *(longlong *)(*param_3 + (longlong)iVar4 * 8) = lVar8;
            lVar7 = local_68;
          }
          if (local_78 != 0) {
            FMemory::Free();
          }
        }
        if (local_88 != 0) {
          FMemory::Free();
        }
        puVar14 = puVar14 + 10;
      } while (puVar14 != puVar1);
    }
    local_60 = UEnvQueryTest_Random::StaticClass();
    lVar7 = (**(code **)(*param_2 + 0x628))(param_2,local_60);
    if (lVar7 != 0) {
      local_b0 = (longlong *)0x0;
      local_a8 = 0;
      FUN_140e21a50(lVar7,param_2,&local_b0,1);
      plVar2 = local_b0 + (int)local_a8;
      for (plVar13 = local_b0; plVar13 != plVar2; plVar13 = plVar13 + 1) {
        lVar7 = *plVar13;
        if ((lVar7 != 0) && (*(char *)(lVar7 + 0x1e0) != '\0')) {
          local_58 = UEnvQueryTest_Random::StaticClass();
          lVar8 = (**(code **)(*param_2 + 0x628))(param_2,local_58);
          if ((lVar8 != 0) &&
             (cVar6 = FUN_140e278b0(lVar8,*(undefined8 *)(lVar7 + 0x78)), cVar6 != '\0')) {
            if (*(char *)(lVar7 + 0x1c8) == '\0') {
              if ((*(longlong **)(lVar7 + 0xb8) == (longlong *)0x0) ||
                 ((cVar6 = (**(code **)(**(longlong **)(lVar7 + 0xb8) + 0x288))(), cVar6 != '\0' &&
                  (cVar6 = (**(code **)(**(longlong **)(lVar7 + 0xb8) + 0x280))
                                     (*(longlong **)(lVar7 + 0xb8),param_2), cVar6 != '\0'))))
              goto LAB_14129c4bf;
            }
            else {
              uVar10 = (**(code **)(*param_2 + 0x148))(param_2);
              cVar6 = *(char *)(lVar7 + 0x1c8);
              pcVar11 = (char *)FUN_140cb6000(local_res10,uVar10);
              if (*pcVar11 == cVar6) {
LAB_14129c4bf:
                lVar9 = lVar7 + 0x90;
                lVar8 = FWeakObjectPtr::Get(lVar9);
                if (lVar8 == 0) {
                  LOCK();
                  if (DAT_1464b56f4 == 0) {
                    DAT_1464b56f4 = 0;
                  }
                  UNLOCK();
                  if ((DAT_1464b56f4 != *(int *)(lVar7 + 0x98)) &&
                     (*(longlong *)(lVar7 + 0xa0) != 0)) {
                    lVar8 = FUN_141796df0();
                    FWeakObjectPtr::operator=(lVar9,lVar8);
                    if ((lVar8 != 0) || (DAT_1469e7e10 == '\0')) {
                      LOCK();
                      if (DAT_1464b56f4 == 0) {
                        DAT_1464b56f4 = 0;
                      }
                      UNLOCK();
                      *(int *)(lVar7 + 0x98) = DAT_1464b56f4;
                    }
                    lVar8 = FWeakObjectPtr::Get(lVar9);
                    if (lVar8 != 0) goto LAB_14129c542;
                  }
                }
                else {
LAB_14129c542:
                  lVar7 = FUN_142e67c90();
                  if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                       (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                    bVar5 = false;
                  }
                  else {
                    bVar5 = true;
                  }
                  if (bVar5) {
                    lVar7 = FUN_1414a9b90();
                    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
                       (*(longlong *)
                         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                         (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                      bVar5 = false;
                    }
                    else {
                      bVar5 = true;
                    }
                    if (bVar5) {
                      plVar12 = (longlong *)*param_3;
                      iVar4 = (int)param_3[1];
                      plVar3 = plVar12 + iVar4;
                      for (; plVar12 != plVar3; plVar12 = plVar12 + 1) {
                        if (*plVar12 == lVar8) goto LAB_14129c5eb;
                      }
                      *(int *)(param_3 + 1) = iVar4 + 1;
                      if (*(int *)((longlong)param_3 + 0xc) < iVar4 + 1) {
                        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3);
                      }
                      *(longlong *)(*param_3 + (longlong)iVar4 * 8) = lVar8;
                    }
                  }
                }
              }
            }
          }
        }
LAB_14129c5eb:
      }
      if (local_b0 != (longlong *)0x0) {
        FMemory::Free(local_b0);
      }
    }
  }
  return;
}



// FUNCTION 14129c640 FUN_14129c640 body=120 status=ok
// SIG undefined FUN_14129c640(void)

longlong FUN_14129c640(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong **)(param_1 + 0x118) == (longlong *)0x0) {
    return 0;
  }
  lVar2 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0x670))();
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
      return lVar2;
    }
  }
  return 0;
}



// FUNCTION 14129c6c0 FUN_14129c6c0 body=422 status=ok
// SIG undefined FUN_14129c6c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14129c6c0(undefined8 param_1,undefined8 *param_2,char param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined1 local_28 [16];
  
  lVar8 = DAT_146b33f38;
  uVar6 = uRam00000001464aa6fc;
  uVar5 = uRam00000001464aa6f8;
  uVar4 = uRam00000001464aa6f4;
  *(undefined4 *)param_2 = _DAT_1464aa6f0;
  *(undefined4 *)((longlong)param_2 + 4) = uVar4;
  *(undefined4 *)(param_2 + 1) = uVar5;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar6;
  if (lVar8 == 0) {
    FUN_142d7ebe0();
    lVar8 = DAT_146b33f38;
  }
  lVar11 = lVar8 + 0xa0;
  lVar7 = FWeakObjectPtr::Get(lVar11);
  if (lVar7 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if (DAT_1464b56f4 == *(int *)(lVar8 + 0xa8)) {
      return param_2;
    }
    if (*(longlong *)(lVar8 + 0xb0) == 0) {
      return param_2;
    }
    lVar7 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar11,lVar7);
    if ((lVar7 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar8 + 0xa8) = DAT_1464b56f4;
    }
    lVar7 = FWeakObjectPtr::Get(lVar11);
    if (lVar7 == 0) {
      return param_2;
    }
  }
  lVar8 = FUN_1413bd170();
  if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
      lVar8 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (((bVar3) && (plVar9 = (longlong *)FUN_1412996f0(param_1), plVar9 != (longlong *)0x0)) &&
     (lVar8 = (**(code **)(*plVar9 + 0x670))(plVar9), lVar8 != 0)) {
    lVar11 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8)
        != lVar11 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (lVar8 = FUN_140cff230(lVar8), lVar8 != 0)) {
      if (param_3 == '\0') {
        uVar1 = *(undefined1 *)(lVar8 + 0x2ee);
      }
      else {
        uVar1 = *(undefined1 *)(lVar8 + 0x2ed);
      }
      puVar10 = (undefined8 *)FUN_1412c2e60(lVar7,local_28,uVar1);
      uVar2 = puVar10[1];
      *param_2 = *puVar10;
      param_2[1] = uVar2;
    }
  }
  return param_2;
}



// FUNCTION 14129c870 FUN_14129c870 body=56 status=ok
// SIG undefined FUN_14129c870(void)

undefined8 FUN_14129c870(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FText::FText(param_2,*(longlong *)(param_1 + 8) + 0x758);
    return param_2;
  }
  FText::FText(param_2);
  return param_2;
}



// FUNCTION 14129c8b0 FUN_14129c8b0 body=434 status=ok
// SIG undefined FUN_14129c8b0(void)

longlong * FUN_14129c8b0(longlong param_1,longlong *param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar5 = 0;
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x90);
  _Src = *(void **)(param_1 + 0x88);
  *(int *)(param_2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_2,iVar1,0);
    _guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar1 << 3);
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar2 = *(longlong *)(DAT_146b33f38 + 0x58);
  if (lVar2 != 0) {
    plVar6 = *(longlong **)(lVar2 + 0x1088);
    uVar7 = (longlong)*(int *)(lVar2 + 0x1090) & 0x1fffffffffffffff;
    if (plVar6 + *(int *)(lVar2 + 0x1090) < plVar6) {
      uVar7 = uVar5;
    }
    uVar8 = uVar5;
    if (uVar7 != 0) {
      do {
        lVar3 = *plVar6;
        if (lVar3 != 0) {
          iVar1 = *(int *)(lVar3 + 0x2d0);
          if (iVar1 != 0) {
            iVar4 = (int)param_2[1];
            if (*(int *)((longlong)param_2 + 0xc) < iVar4 + iVar1) {
              TArray<void_*,FDefaultAllocator>::ResizeTo(param_2);
              iVar4 = (int)param_2[1];
            }
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*param_2 + (longlong)iVar4 * 8),*(void **)(lVar3 + 0x2c8),
                       (longlong)iVar1 << 3);
            *(int *)(param_2 + 1) = (int)param_2[1] + iVar1;
          }
        }
        plVar6 = plVar6 + 1;
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar7);
    }
    plVar6 = *(longlong **)(lVar2 + 0x1098);
    uVar7 = (longlong)*(int *)(lVar2 + 0x10a0) & 0x1fffffffffffffff;
    if (plVar6 + *(int *)(lVar2 + 0x10a0) < plVar6) {
      uVar7 = uVar5;
    }
    if (uVar7 != 0) {
      do {
        lVar2 = *plVar6;
        if (lVar2 != 0) {
          iVar1 = *(int *)(lVar2 + 0x1d8);
          if (iVar1 != 0) {
            iVar4 = (int)param_2[1];
            if (*(int *)((longlong)param_2 + 0xc) < iVar4 + iVar1) {
              TArray<void_*,FDefaultAllocator>::ResizeTo(param_2);
              iVar4 = (int)param_2[1];
            }
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*param_2 + (longlong)iVar4 * 8),*(void **)(lVar2 + 0x1d0),
                       (longlong)iVar1 << 3);
            *(int *)(param_2 + 1) = (int)param_2[1] + iVar1;
          }
        }
        plVar6 = plVar6 + 1;
        uVar5 = uVar5 + 1;
      } while (uVar5 != uVar7);
    }
    return param_2;
  }
  return param_2;
}



// FUNCTION 14129ca70 FUN_14129ca70 body=1032 status=ok
// SIG undefined FUN_14129ca70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14129ca70(longlong *param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  uint uVar12;
  longlong *plVar14;
  undefined1 auStack_d8 [32];
  int local_b8;
  longlong *local_b0;
  longlong local_a8 [3];
  longlong local_90 [2];
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  longlong *plVar13;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  plVar14 = (longlong *)0x0;
  uVar3 = 0;
  local_b8 = 0;
  local_a8[2] = param_2;
  FUN_142ffd600();
  local_58 = *(undefined8 *)(param_2 + 8);
  local_60 = &local_50;
  local_b8 = (int)param_1[0x73];
  local_50 = 0;
  local_48 = 0x4000000000000;
  plVar9 = plVar14;
  plVar13 = plVar14;
  if (0 < local_b8) {
    do {
      local_78 = *(undefined8 *)(param_2 + 8);
      local_80 = &local_70;
      local_70 = 0;
      local_68 = 0x3000000000000;
      (**(code **)(*param_1 + 0x540))(param_1,&local_b0,(ulonglong)plVar9 & 0xff);
      if ((local_b0 != (longlong *)0x0) &&
         (plVar5 = (longlong *)FUN_142e49950(), plVar8 = local_b0, local_b0 != (longlong *)0x0)) {
LAB_14129cb52:
        if (plVar8 != plVar5) goto code_r0x00014129cb57;
        plVar5 = (longlong *)FUN_142e49950();
        for (plVar8 = local_b0;
            (plVar11 = plVar14, plVar8 != (longlong *)0x0 && (plVar11 = local_b0, plVar8 != plVar5))
            ; plVar8 = (longlong *)plVar8[6]) {
        }
        plVar8 = (longlong *)plVar11[0x1f];
        if (plVar8 == (longlong *)0x0) {
          (**(code **)(*plVar11 + 0x368))(plVar11);
          plVar8 = (longlong *)plVar11[0x1f];
          if (plVar8 != (longlong *)0x0) goto LAB_14129cbb5;
          goto LAB_14129cbeb;
        }
LAB_14129cbb5:
        lVar10 = FUN_1414193b0();
        if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
            != lVar10 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) goto LAB_14129cbeb;
        goto LAB_14129cbee;
      }
LAB_14129cbeb:
      plVar8 = plVar14;
LAB_14129cbee:
      if ((((int)((uint)plVar9 & 0xff) < (int)param_1[0x73]) &&
          (lVar10 = *(longlong *)(((ulonglong)plVar9 & 0xff) * 0x38 + 0x28 + param_1[0x72]),
          lVar10 != 0)) && (lVar10 = *(longlong *)(lVar10 + 0x40), lVar10 != 0)) {
        lVar6 = lVar10 + 0x80;
        cVar2 = FText::IsEmpty(lVar6);
        if (cVar2 != '\0') {
          lVar6 = lVar10 + 0x68;
        }
      }
      else {
        lVar6 = FUN_1404b03b0();
      }
      uVar7 = FText::ToString(lVar6);
      FUN_142ab64b0(&local_80,"UseModeName",uVar7);
      if (plVar8 == (longlong *)0x0) {
        local_a8[0] = 0;
        local_a8[1] = 6;
        uVar12 = (uint)plVar13 | 2;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8,0);
        FGenericPlatformString::Memcpy(local_a8[0],L"Error",0xc);
        plVar8 = local_a8;
      }
      else {
        uVar12 = (uint)plVar13 | 1;
        plVar8 = (longlong *)FUN_140a8c190(plVar8,local_90);
      }
      plVar13 = (longlong *)(ulonglong)uVar12;
      FUN_142ab64b0(&local_80,"DamageType",plVar8);
      if (((uVar12 & 2) != 0) &&
         (plVar13 = (longlong *)(ulonglong)(uVar12 & 0xfffffffd), local_a8[0] != 0)) {
        FMemory::Free();
      }
      if ((((ulonglong)plVar13 & 1) != 0) &&
         (plVar13 = (longlong *)(ulonglong)((uint)plVar13 & 0xfffffffe), local_90[0] != 0)) {
        FMemory::Free();
      }
      FUN_142ab4ae0(&local_60,&local_80);
      uVar12 = (uint)plVar9 + 1;
      param_2 = local_a8[2];
      plVar9 = (longlong *)(ulonglong)uVar12;
    } while ((int)uVar12 < local_b8);
  }
  UE4Function_Private::
  TFunctionRefCaller<<lambda_7ba9f5259ce314810519498fe7d9f36b>,void___cdecl(FRHICommandListImmediate_&,FViewportSurfaceReader_*)>
  ::Call(param_2,"UseModes",&local_60);
  if ((longlong *)param_1[0x7e] != (longlong *)0x0) {
    uVar3 = (**(code **)(*(longlong *)param_1[0x7e] + 0x278))();
  }
  FUN_142ab61f0(param_2,"CurrentTrinketPartHash",uVar3);
  uVar4 = 0;
  uVar3 = uVar4;
  if ((longlong *)param_1[0x7f] != (longlong *)0x0) {
    uVar3 = (**(code **)(*(longlong *)param_1[0x7f] + 0x278))();
  }
  FUN_142ab61f0(param_2,"CurrentSkinPartHash",uVar3);
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x88);
  if (cVar2 != '\0') {
    plVar9 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x88);
    uVar4 = (**(code **)(*plVar9 + 0x278))(plVar9);
  }
  FUN_142ab61f0(param_2,"CurrentMayhemPartHash",uVar4);
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x88);
  if (cVar2 != '\0') {
    lVar10 = FWeakObjectPtr::Get(param_1 + 0x88);
    if (*(longlong **)(lVar10 + 0x280) != (longlong *)0x0) {
      uVar12 = (**(code **)(**(longlong **)(lVar10 + 0x280) + 0x278))();
      plVar14 = (longlong *)(ulonglong)uVar12;
    }
  }
  FUN_142ab61f0(param_2,"CurrentMayhemPartUIStatHash",plVar14);
  FUN_142ab6140(param_2,"DirtAmount",(char)param_1[0x86]);
  FUN_142ab6140(param_2,"RustAmount",*(undefined1 *)((longlong)param_1 + 0x431));
  FUN_142ab6140(param_2,"WearAmount",*(undefined1 *)((longlong)param_1 + 0x432));
  return;
code_r0x00014129cb57:
  plVar8 = (longlong *)plVar8[6];
  if (plVar8 == (longlong *)0x0) goto LAB_14129cbeb;
  goto LAB_14129cb52;
}



// FUNCTION 14129ce80 FUN_14129ce80 body=2131 status=ok
// SIG undefined FUN_14129ce80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14129ce80(longlong *param_1,longlong param_2)

{
  undefined1 uVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  uint uVar5;
  char cVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined1 *puVar14;
  longlong *plVar15;
  uint uVar16;
  longlong *plVar17;
  undefined2 *puVar18;
  undefined1 auStack_158 [32];
  uint local_138;
  longlong *local_130;
  uint local_128;
  int local_124;
  longlong *local_120;
  longlong local_118 [2];
  longlong *local_108;
  longlong local_100 [3];
  longlong local_e8 [16];
  longlong *local_68;
  longlong *local_60;
  uint local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  plVar15 = (longlong *)0x0;
  local_138 = 0;
  local_108 = param_1;
  FUN_142ffd9f0();
  lVar13 = param_1[0x73];
  plVar17 = (longlong *)(param_2 + 0x30);
  local_124 = (int)lVar13;
  FUN_140a6ec50(plVar17,5);
  FUN_140a78ce0(plVar17,"UseModes",8);
  FUN_140a6ec50(plVar17,4);
  puVar10 = *(undefined8 **)(param_2 + 0x50);
  if (*(undefined8 **)(param_2 + 0x58) < puVar10 + 2) {
    rapidjson::internal::Stack<rapidjson::CrtAllocator>::
    Expand<rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0>::Level>
              (param_2 + 0x38,1);
    puVar10 = *(undefined8 **)(param_2 + 0x50);
  }
  *(undefined8 **)(param_2 + 0x50) = puVar10 + 2;
  *puVar10 = 0;
  *(undefined1 *)(puVar10 + 1) = 1;
  lVar9 = *plVar17;
  puVar14 = *(undefined1 **)(lVar9 + 0x18);
  if (*(undefined1 **)(lVar9 + 0x20) < puVar14 + 1) {
    rapidjson::internal::Stack<rapidjson::CrtAllocator>::Expand<char>(lVar9,1);
    puVar14 = *(undefined1 **)(lVar9 + 0x18);
  }
  local_128 = 0;
  *(undefined1 **)(lVar9 + 0x18) = puVar14 + 1;
  *puVar14 = 0x5b;
  plVar11 = plVar15;
  if ((int)lVar13 < 1) {
LAB_14129d3df:
    *(longlong *)(param_2 + 0x50) = *(longlong *)(param_2 + 0x50) + -0x10;
    lVar13 = *plVar17;
    puVar14 = *(undefined1 **)(lVar13 + 0x18);
    if (*(undefined1 **)(lVar13 + 0x20) < puVar14 + 1) {
      rapidjson::internal::Stack<rapidjson::CrtAllocator>::Expand<char>(lVar13,1);
      puVar14 = *(undefined1 **)(lVar13 + 0x18);
    }
    *(undefined1 **)(lVar13 + 0x18) = puVar14 + 1;
    *puVar14 = 0x5d;
    plVar11 = plVar15;
    if ((longlong *)param_1[0x7e] != (longlong *)0x0) {
      uVar16 = (**(code **)(*(longlong *)param_1[0x7e] + 0x278))();
      plVar11 = (longlong *)(ulonglong)uVar16;
    }
    FUN_140a6ec50(plVar17,5);
    FUN_140a78ce0(plVar17,"CurrentTrinketPartHash",0x16);
    FUN_140a6ec50(plVar17,6);
    lVar13 = *plVar17;
    lVar9 = *(longlong *)(lVar13 + 0x18);
    if (*(ulonglong *)(lVar13 + 0x20) < lVar9 + 10U) {
      rapidjson::internal::Stack<rapidjson::CrtAllocator>::Expand<char>(lVar13,10);
      lVar9 = *(longlong *)(lVar13 + 0x18);
    }
    *(longlong *)(lVar13 + 0x18) = lVar9 + 10;
    lVar13 = rapidjson::internal::u32toa(plVar11,lVar9);
    *(longlong *)(*plVar17 + 0x18) = *(longlong *)(*plVar17 + 0x18) + (lVar13 - lVar9) + -10;
    if ((longlong *)param_1[0x7f] != (longlong *)0x0) {
      uVar16 = (**(code **)(*(longlong *)param_1[0x7f] + 0x278))();
      plVar15 = (longlong *)(ulonglong)uVar16;
    }
    FUN_140a6ec50(plVar17,5);
    FUN_140a78ce0(plVar17,"CurrentSkinPartHash",0x13);
    FUN_140a6ec50(plVar17,6);
    lVar13 = *plVar17;
    lVar9 = *(longlong *)(lVar13 + 0x18);
    if (*(ulonglong *)(lVar13 + 0x20) < lVar9 + 10U) {
      rapidjson::internal::Stack<rapidjson::CrtAllocator>::Expand<char>(lVar13,10);
      lVar9 = *(longlong *)(lVar13 + 0x18);
    }
    *(longlong *)(lVar13 + 0x18) = lVar9 + 10;
    lVar13 = rapidjson::internal::u32toa(plVar15,lVar9);
    *(longlong *)(*plVar17 + 0x18) = *(longlong *)(*plVar17 + 0x18) + (lVar13 - lVar9) + -10;
    lVar4 = param_1[0x86];
    FUN_140a6ec50(plVar17,5);
    FUN_140a78ce0(plVar17,"DirtAmount",10);
    FUN_140a6ec50(plVar17,6);
    lVar13 = *plVar17;
    lVar9 = *(longlong *)(lVar13 + 0x18);
    if (*(ulonglong *)(lVar13 + 0x20) < lVar9 + 10U) {
      rapidjson::internal::Stack<rapidjson::CrtAllocator>::Expand<char>(lVar13,10);
      lVar9 = *(longlong *)(lVar13 + 0x18);
    }
    *(longlong *)(lVar13 + 0x18) = lVar9 + 10;
    lVar13 = rapidjson::internal::u32toa((char)lVar4,lVar9);
    *(longlong *)(*plVar17 + 0x18) = *(longlong *)(*plVar17 + 0x18) + (lVar13 - lVar9) + -10;
    uVar1 = *(undefined1 *)((longlong)param_1 + 0x431);
    FUN_140a6ec50(plVar17,5);
    FUN_140a78ce0(plVar17,"RustAmount",10);
    FUN_140a6ec50(plVar17,6);
    lVar13 = *plVar17;
    lVar9 = *(longlong *)(lVar13 + 0x18);
    if (*(ulonglong *)(lVar13 + 0x20) < lVar9 + 10U) {
      rapidjson::internal::Stack<rapidjson::CrtAllocator>::Expand<char>(lVar13,10);
      lVar9 = *(longlong *)(lVar13 + 0x18);
    }
    *(longlong *)(lVar13 + 0x18) = lVar9 + 10;
    lVar13 = rapidjson::internal::u32toa(uVar1,lVar9);
    *(longlong *)(*plVar17 + 0x18) = *(longlong *)(*plVar17 + 0x18) + (lVar13 - lVar9) + -10;
    uVar1 = *(undefined1 *)((longlong)param_1 + 0x432);
    FUN_140a6ec50(plVar17,5);
    FUN_140a78ce0(plVar17,"WearAmount",10);
    FUN_140a6ec50(plVar17,6);
    lVar13 = *plVar17;
    lVar9 = *(longlong *)(lVar13 + 0x18);
    if (*(ulonglong *)(lVar13 + 0x20) < lVar9 + 10U) {
      rapidjson::internal::Stack<rapidjson::CrtAllocator>::Expand<char>(lVar13,10);
      lVar9 = *(longlong *)(lVar13 + 0x18);
    }
    *(longlong *)(lVar13 + 0x18) = lVar9 + 10;
    lVar13 = rapidjson::internal::u32toa(uVar1,lVar9);
    *(longlong *)(*plVar17 + 0x18) = *(longlong *)(*plVar17 + 0x18) + (lVar13 - lVar9) + -10;
    return;
  }
LAB_14129cf70:
  (**(code **)(*param_1 + 0x540))(param_1,&local_120,(ulonglong)plVar11 & 0xff);
  if (local_120 != (longlong *)0x0) {
    plVar7 = (longlong *)FUN_142e49950();
    for (plVar12 = local_120; plVar12 != (longlong *)0x0; plVar12 = (longlong *)plVar12[6]) {
      if (plVar12 == plVar7) {
        plVar8 = (longlong *)FUN_142e49950();
        plVar12 = local_120;
        plVar7 = plVar15;
        if (local_120 == (longlong *)0x0) goto LAB_14129cfe1;
        goto LAB_14129cfd0;
      }
    }
  }
  goto LAB_14129d03b;
  while (plVar12 = (longlong *)plVar12[6], plVar7 = plVar15, plVar12 != (longlong *)0x0) {
LAB_14129cfd0:
    plVar7 = local_120;
    if (plVar12 == plVar8) break;
  }
LAB_14129cfe1:
  plVar12 = (longlong *)plVar7[0x1f];
  if (plVar12 == (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x368))(plVar7);
    plVar12 = (longlong *)plVar7[0x1f];
    if (plVar12 != (longlong *)0x0) goto LAB_14129d005;
  }
  else {
LAB_14129d005:
    lVar13 = FUN_1414193b0();
    if ((*(int *)(plVar12[2] + 0x90) < *(int *)(lVar13 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar12[2] + 0x88) + (longlong)*(int *)(lVar13 + 0x90) * 8) !=
        lVar13 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_14129d03e;
  }
LAB_14129d03b:
  plVar12 = plVar15;
LAB_14129d03e:
  FUN_140a6ec50(plVar17,3);
  puVar10 = *(undefined8 **)(param_2 + 0x50);
  if (*(undefined8 **)(param_2 + 0x58) < puVar10 + 2) {
    rapidjson::internal::Stack<rapidjson::CrtAllocator>::
    Expand<rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0>::Level>
              (param_2 + 0x38,1);
    puVar10 = *(undefined8 **)(param_2 + 0x50);
  }
  *(undefined8 **)(param_2 + 0x50) = puVar10 + 2;
  *puVar10 = 0;
  *(undefined1 *)(puVar10 + 1) = 0;
  lVar13 = *plVar17;
  puVar14 = *(undefined1 **)(lVar13 + 0x18);
  if (*(undefined1 **)(lVar13 + 0x20) < puVar14 + 1) {
    rapidjson::internal::Stack<rapidjson::CrtAllocator>::Expand<char>(lVar13,1);
    puVar14 = *(undefined1 **)(lVar13 + 0x18);
  }
  *(undefined1 **)(lVar13 + 0x18) = puVar14 + 1;
  *puVar14 = 0x7b;
  if ((((int)((uint)plVar11 & 0xff) < (int)param_1[0x73]) &&
      (lVar13 = *(longlong *)(((ulonglong)plVar11 & 0xff) * 0x38 + 0x28 + param_1[0x72]),
      lVar13 != 0)) && (lVar13 = *(longlong *)(lVar13 + 0x40), lVar13 != 0)) {
    lVar9 = lVar13 + 0x80;
    cVar6 = FText::IsEmpty(lVar9);
    if (cVar6 != '\0') {
      lVar9 = lVar13 + 0x68;
    }
  }
  else {
    lVar9 = FUN_1404b03b0();
  }
  puVar10 = (undefined8 *)FText::ToString(lVar9);
  if (*(int *)(puVar10 + 1) == 0) {
    puVar18 = &DAT_143f3eda8;
    iVar2 = 0;
  }
  else {
    puVar18 = (undefined2 *)*puVar10;
    iVar2 = *(int *)(puVar10 + 1) + -1;
  }
  local_68 = (longlong *)0x0;
  if (puVar18 == (undefined2 *)0x0) {
    local_60 = (longlong *)0x0;
    local_58 = 0;
  }
  else {
    local_130 = (longlong *)((ulonglong)local_130 & 0xffffffff00000000);
    FTCHARToUTF8_Convert::Convert_Impl<UE4StringConv_Private::FCountingOutputIterator>
              (&local_130,iVar2 * 4,puVar18,iVar2);
    plVar11 = local_130;
    local_58 = (uint)local_130;
    plVar7 = plVar15;
    if ((0x80 < (uint)local_130) && ((uint)local_130 != 0)) {
      plVar7 = (longlong *)FMemory::Realloc(0,(longlong)(int)(uint)local_130,0);
      local_68 = plVar7;
    }
    local_130 = local_e8;
    if (plVar7 != (longlong *)0x0) {
      local_130 = plVar7;
    }
    local_60 = local_130;
    FTCHARToUTF8_Convert::Convert_Impl<char_*>
              (&local_130,(ulonglong)plVar11 & 0xffffffff,puVar18,iVar2);
  }
  FUN_140a6ec50(plVar17,5);
  FUN_140a78ce0(plVar17,"UseModeName",0xb);
  uVar16 = local_58;
  plVar11 = local_60;
  FUN_140a6ec50(plVar17,5);
  FUN_140a78ce0(plVar17,plVar11,uVar16);
  if (local_68 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (plVar12 == (longlong *)0x0) {
    uVar16 = local_138 | 2;
    local_118[0] = 0;
    local_118[1] = 6;
    local_138 = uVar16;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_118,0);
    FGenericPlatformString::Memcpy(local_118[0],L"Error",0xc);
    plVar11 = local_118;
  }
  else {
    uVar16 = local_138 | 1;
    local_138 = uVar16;
    plVar11 = (longlong *)FUN_140a8c190(plVar12,local_100);
  }
  if ((int)plVar11[1] == 0) {
    puVar18 = &DAT_143f3eda8;
    iVar2 = 0;
  }
  else {
    puVar18 = (undefined2 *)*plVar11;
    iVar2 = (int)plVar11[1] + -1;
  }
  local_68 = (longlong *)0x0;
  if (puVar18 == (undefined2 *)0x0) {
    local_60 = (longlong *)0x0;
    local_58 = 0;
  }
  else {
    local_130 = (longlong *)((ulonglong)local_130 & 0xffffffff00000000);
    FTCHARToUTF8_Convert::Convert_Impl<UE4StringConv_Private::FCountingOutputIterator>
              (&local_130,iVar2 * 4,puVar18,iVar2);
    plVar11 = local_130;
    local_58 = (uint)local_130;
    plVar12 = plVar15;
    if ((0x80 < (uint)local_130) && ((uint)local_130 != 0)) {
      plVar12 = (longlong *)FMemory::Realloc(0,(longlong)(int)(uint)local_130,0);
      local_68 = plVar12;
    }
    local_130 = local_e8;
    if (plVar12 != (longlong *)0x0) {
      local_130 = plVar12;
    }
    local_60 = local_130;
    FTCHARToUTF8_Convert::Convert_Impl<char_*>
              (&local_130,(ulonglong)plVar11 & 0xffffffff,puVar18,iVar2);
  }
  FUN_140a6ec50(plVar17,5);
  FUN_140a78ce0(plVar17,"DamageType",10);
  uVar5 = local_58;
  plVar11 = local_60;
  FUN_140a6ec50(plVar17,5);
  FUN_140a78ce0(plVar17,plVar11,uVar5);
  if (local_68 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (((uVar16 & 2) != 0) && (uVar16 = uVar16 & 0xfffffffd, local_138 = uVar16, local_118[0] != 0))
  {
    FMemory::Free(local_118[0]);
  }
  if (((uVar16 & 1) != 0) && (local_138 = uVar16 & 0xfffffffe, local_100[0] != 0)) {
    FMemory::Free();
  }
  *(longlong *)(param_2 + 0x50) = *(longlong *)(param_2 + 0x50) + -0x10;
  lVar13 = *plVar17;
  puVar14 = *(undefined1 **)(lVar13 + 0x18);
  if (*(undefined1 **)(lVar13 + 0x20) < puVar14 + 1) {
    rapidjson::internal::Stack<rapidjson::CrtAllocator>::Expand<char>(lVar13,1);
    puVar14 = *(undefined1 **)(lVar13 + 0x18);
  }
  local_128 = local_128 + 1;
  *(undefined1 **)(lVar13 + 0x18) = puVar14 + 1;
  *puVar14 = 0x7d;
  plVar11 = (longlong *)(ulonglong)local_128;
  param_1 = local_108;
  if (local_124 <= (int)local_128) goto LAB_14129d3df;
  goto LAB_14129cf70;
}



// FUNCTION 14129d6f0 FUN_14129d6f0 body=331 status=ok
// SIG undefined FUN_14129d6f0(void)

undefined8 * FUN_14129d6f0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  iVar3 = FUN_14129dc40(param_1,param_3);
  if (*(longlong *)(param_1 + 0x48) != 0) {
    lVar4 = FUN_142dfdfe0();
    lVar6 = *(longlong *)(param_1 + 0x48);
    for (lVar7 = lVar6; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x30)) {
      if (lVar7 == lVar4) {
        if (lVar6 != 0) {
          if (lVar6 == 0) goto LAB_14129d781;
          plVar5 = (longlong *)FUN_142dfdfe0();
          plVar8 = *(longlong **)(param_1 + 0x48);
          plVar1 = plVar8;
          goto joined_r0x00014129d771;
        }
        break;
      }
    }
  }
  goto LAB_14129d735;
joined_r0x00014129d771:
  if (plVar1 == (longlong *)0x0) goto LAB_14129d781;
  if (plVar1 == plVar5) goto LAB_14129d783;
  plVar1 = (longlong *)plVar1[6];
  goto joined_r0x00014129d771;
LAB_14129d781:
  plVar8 = (longlong *)0x0;
LAB_14129d783:
  lVar6 = plVar8[0x1f];
  if (lVar6 == 0) {
    (**(code **)(*plVar8 + 0x368))(plVar8);
    lVar6 = plVar8[0x1f];
    if (lVar6 == 0) goto LAB_14129d735;
  }
  lVar6 = *(longlong *)(lVar6 + 0xd8);
  if (lVar6 != 0) {
    lVar7 = UARGetCandidateObjectAsyncTaskBlueprintProxy::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      if (iVar3 == 0) {
        FString::FString(param_2,lVar6 + 0x78);
        return param_2;
      }
      if (iVar3 == 1) {
        FString::FString(param_2,lVar6 + 0x88);
        return param_2;
      }
    }
  }
LAB_14129d735:
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 14129d840 FUN_14129d840 body=64 status=ok
// SIG undefined FUN_14129d840(void)

undefined1 FUN_14129d840(longlong param_1)

{
  char cVar1;
  
  if (((((*(byte *)(param_1 + 0x3b8) >> 1 ^ *(byte *)(param_1 + 0x3b8)) & 1) == 0) &&
      (*(longlong *)(param_1 + 0x3c8) == 0)) && (*(longlong *)(param_1 + 0x3d8) == 0)) {
    cVar1 = FUN_14309e620();
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 14129d880 FUN_14129d880 body=929 status=ok
// SIG undefined FUN_14129d880(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14129d880(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 local_res10;
  longlong local_res18;
  undefined8 local_res20;
  longlong *local_68;
  int local_60;
  longlong *local_58;
  int local_50;
  longlong local_48 [2];
  longlong local_38 [2];
  
  if ((*(byte *)(param_1 + 0x2ec) & 2) == 0) {
    return 0;
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar3 = DAT_146b33f38;
  lVar9 = DAT_146b33f38 + 0xa0;
  lVar2 = FWeakObjectPtr::Get(lVar9);
  if (lVar2 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if (DAT_1464b56f4 == *(int *)(lVar3 + 0xa8)) {
      return 0;
    }
    if (*(longlong *)(lVar3 + 0xb0) == 0) {
      return 0;
    }
    lVar2 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar9,lVar2);
    if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar3 + 0xa8) = DAT_1464b56f4;
    }
    lVar2 = FWeakObjectPtr::Get(lVar9);
    if (lVar2 == 0) {
      return 0;
    }
  }
  lVar3 = FUN_1413bd170();
  if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    if (*(int *)(param_1 + 0x2e8) == -1) {
      plVar5 = (longlong *)FUN_14309ed90(param_1);
      uVar4 = APlayArea::GetPrivateStaticClass();
      lVar3 = (**(code **)(*plVar5 + 0x628))(plVar5,uVar4);
      if (lVar3 == 0) {
        return 0;
      }
      lVar2 = FUN_1412bfd90(lVar2,*(undefined8 *)(lVar3 + 0x218));
      if (lVar2 == 0) {
        return 0;
      }
      puVar8 = &DAT_14686e138;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38) < DAT_14686e148) &&
         (_Init_thread_header(&DAT_14686e148), DAT_14686e148 == -1)) {
        DAT_14686e138 = 0;
        _DAT_14686e140 = 7;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14686e138,0);
        FGenericPlatformString::Memcpy(DAT_14686e138,L"Common",0xe);
        atexit((_func_5014 *)&LAB_143e51550);
        _Init_thread_footer(&DAT_14686e148);
      }
      if (((*(longlong *)(lVar3 + 0x210) != 0) &&
          (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x210) + 0xb8), lVar3 != 0)) &&
         (1 < *(int *)(lVar3 + 0x60))) {
        puVar8 = (undefined8 *)(lVar3 + 0x58);
      }
      if (*(int *)(puVar8 + 1) == 0) {
        puVar6 = &DAT_143f3eda8;
      }
      else {
        puVar6 = (undefined2 *)*puVar8;
      }
      FName::FName(&local_res18,puVar6,1);
      UDataTable::GetRowNames(lVar2,&local_58);
      for (plVar5 = local_58; plVar5 != local_58 + local_50; plVar5 = plVar5 + 1) {
        if (*plVar5 == local_res18) {
          iVar7 = (int)((longlong)plVar5 - (longlong)local_58 >> 3);
          if (iVar7 != -1) {
            local_res20 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x18);
            FName::ToString(&local_res20,local_38);
            uVar4 = FUN_1412886a0(lVar2,local_58[iVar7],local_38,1);
            if (local_38[0] != 0) {
              FMemory::Free();
            }
            goto LAB_14129da15;
          }
          break;
        }
      }
    }
    else {
      lVar3 = USceneComponent::GetAttachParent(lVar2);
      if (lVar3 == 0) {
        return 0;
      }
      UDataTable::GetRowNames(lVar3,&local_68);
      if ((*(int *)(param_1 + 0x2e8) < 0) || (local_60 <= *(int *)(param_1 + 0x2e8))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      local_58 = local_68;
      if (bVar1) {
        local_res10 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x18);
        FName::ToString(&local_res10,local_48);
        uVar4 = FUN_1412886a0(lVar3,local_68[*(int *)(param_1 + 0x2e8)],local_48,1);
        local_58 = local_68;
        if (local_48[0] != 0) {
          FMemory::Free();
          local_58 = local_68;
        }
LAB_14129da15:
        if (local_58 != (longlong *)0x0) {
          FMemory::Free();
        }
        return uVar4;
      }
    }
    if (local_58 != (longlong *)0x0) {
      FMemory::Free(local_58);
    }
  }
  return 0;
}



// FUNCTION 14129dc40 FUN_14129dc40 body=228 status=ok
// SIG undefined FUN_14129dc40(void)

longlong FUN_14129dc40(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (param_2 != (longlong *)0x0) {
    uVar3 = FUN_142e035e0();
    lVar4 = (**(code **)(*param_2 + 0x628))(param_2,uVar3);
    if (lVar4 != 0) {
      lVar7 = 0;
      lVar6 = lVar7;
      if (*(longlong *)(param_1 + 0x48) != 0) {
        lVar5 = FUN_142dfdfe0();
        for (lVar1 = *(longlong *)(param_1 + 0x48);
            (lVar6 = lVar7, lVar1 != 0 && (lVar6 = *(longlong *)(param_1 + 0x48), lVar1 != lVar5));
            lVar1 = *(longlong *)(lVar1 + 0x30)) {
        }
      }
      cVar2 = FUN_142dd3360(lVar4,lVar6);
      if (cVar2 == '\0') {
        lVar6 = lVar7;
        if (*(longlong *)(param_1 + 0x48) != 0) {
          lVar5 = FUN_142dfdfe0();
          for (lVar1 = *(longlong *)(param_1 + 0x48);
              (lVar6 = lVar7, lVar1 != 0 && (lVar6 = *(longlong *)(param_1 + 0x48), lVar1 != lVar5))
              ; lVar1 = *(longlong *)(lVar1 + 0x30)) {
          }
        }
        cVar2 = FUN_142dd32c0(lVar4,lVar6);
        lVar4 = 2;
        if (cVar2 != '\0') {
          lVar4 = lVar7;
        }
      }
      else {
        lVar4 = 1;
      }
      return lVar4;
    }
  }
  return 2;
}



// FUNCTION 14129dd30 FUN_14129dd30 body=899 status=ok
// SIG undefined FUN_14129dd30(void)

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_14129dd30(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined4 *puVar5;
  bool bVar6;
  char cVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined8 *puVar19;
  undefined4 *puVar20;
  ulonglong uVar21;
  uint uVar22;
  longlong local_res18 [2];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  longlong lStack_b0;
  undefined8 local_a8;
  undefined1 local_a0 [24];
  longlong local_88;
  undefined8 local_78 [2];
  undefined8 local_68;
  undefined1 local_60 [32];
  
  uVar22 = 5;
  plVar8 = (longlong *)FUN_142f6c9f0(param_2);
  if (plVar8 == (longlong *)0x0) {
    return 5;
  }
  FUN_142f5ed60(plVar8,local_78);
  if ((*(char *)(param_1 + 0xe4) != '\0') &&
     (lVar9 = FUN_141288540(param_1 + 0xd0,local_78[0]), lVar9 != 0)) {
    return 4;
  }
  FUN_142f5ed60(plVar8,local_res18);
  puVar3 = *(undefined8 **)(param_1 + 0x58);
  iVar2 = *(int *)(param_1 + 0x60);
  if (puVar3 != puVar3 + (longlong)iVar2 * 10) {
    puVar19 = puVar3 + 1;
    do {
      local_c0 = *puVar19;
      local_b8 = puVar19[1];
      lStack_b0 = puVar19[2];
      local_a8 = puVar19[3];
      local_c8 = &PTR_FUN_144278ac0;
      TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(local_a0,puVar19 + 4);
      cVar7 = FUN_142f63b20(&local_c8,param_2);
      if (cVar7 != '\0') {
        lVar9 = FUN_142f5f490(&local_c8);
        puVar10 = (undefined8 *)FUN_142f5ad80(&local_c8,local_res18 + 1);
        cVar7 = FUN_142f63670(plVar8,lVar9,*puVar10,param_2);
        if (cVar7 != '\0') {
          plVar11 = (longlong *)FUN_142f5ad80(&local_c8);
          if (*plVar11 != 0) {
            lVar12 = FUN_142f71d80();
            lVar17 = *plVar11;
            for (lVar4 = lVar17; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
              if (lVar4 == lVar12) goto LAB_14129dea5;
            }
          }
          lVar17 = 0;
LAB_14129dea5:
          if (local_res18[0] != 0) {
            lVar12 = FUN_142f71d80();
            for (lVar4 = local_res18[0]; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
              lVar16 = local_res18[0];
              if (lVar4 == lVar12) goto LAB_14129ded0;
            }
          }
          lVar16 = 0;
LAB_14129ded0:
          if (lVar17 == lVar16) {
            if ((lVar9 == 0) || (uVar22 = 2, *(char *)(lVar9 + 0xa8) == '\0')) {
              uVar22 = 1;
            }
            local_c8 = &PTR_FUN_144278ac0;
            if (local_88 != 0) {
              FMemory::Free();
            }
            break;
          }
          uVar22 = 3;
        }
      }
      local_c8 = &PTR_FUN_144278ac0;
      if (local_88 != 0) {
        FMemory::Free();
      }
      puVar10 = puVar19 + 9;
      puVar19 = puVar19 + 10;
    } while (puVar10 != puVar3 + (longlong)iVar2 * 10);
    if ((uVar22 - 3 & 0xfffffffd) != 0) {
      return uVar22;
    }
  }
  uVar21 = 0;
  puVar5 = *(undefined4 **)(param_1 + 0xd0);
  iVar2 = *(int *)(param_1 + 0xd8);
  if (puVar5 != puVar5 + (longlong)iVar2 * 10) {
    local_res18[1] = 0;
    puVar20 = puVar5 + 1;
    do {
      local_c8 = (undefined **)CONCAT44(*puVar20,puVar20[-1]);
      local_c0 = CONCAT44(local_c0._4_4_,puVar20[1]);
      local_68 = *(undefined8 *)(puVar20 + 3);
      lStack_b0 = 0;
      local_a8 = 0;
      local_b8 = 0;
      FString::FString(local_60,puVar20 + 5);
      FSoftObjectPath::operator=(&local_b8,&local_68);
      uVar13 = FUN_1405ec200(&local_c8);
      uVar18 = uVar21;
      if (uVar13 != 0) {
        lVar9 = FUN_14171bfe0();
        if ((*(int *)(*(longlong *)(uVar13 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(uVar13 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (bVar6) {
          uVar14 = FUN_142f71d80();
          uVar15 = uVar13;
          do {
            uVar18 = uVar13;
            if (uVar15 == uVar14) break;
            uVar15 = *(ulonglong *)(uVar15 + 0x30);
            uVar18 = uVar21;
          } while (uVar15 != 0);
        }
      }
      cVar7 = (**(code **)(*plVar8 + 0x728))(plVar8,uVar18);
      if (cVar7 != '\0') {
        if (lStack_b0 != 0) {
          FMemory::Free();
          return 0;
        }
        return 0;
      }
      if (lStack_b0 != 0) {
        FMemory::Free();
      }
      puVar1 = puVar20 + 9;
      puVar20 = puVar20 + 10;
    } while (puVar1 != puVar5 + (longlong)iVar2 * 10);
  }
  return uVar22;
}



// FUNCTION 14129e0c0 FUN_14129e0c0 body=91 status=ok
// SIG undefined FUN_14129e0c0(void)

undefined4 FUN_14129e0c0(longlong param_1,undefined8 param_2)

{
  undefined4 local_38 [4];
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
  if (*(longlong *)(param_1 + 0x328) != 0) {
    if (*(longlong *)(param_1 + 0x118) == 0) {
      local_20 = 0;
    }
    else {
      local_20 = *(undefined8 *)(*(longlong *)(param_1 + 0x118) + 0x150);
    }
    local_18 = 0;
    local_28 = param_2;
    FUN_142dd6dc0(*(longlong *)(param_1 + 0x328),local_38,&local_28);
    return local_38[0];
  }
  return 0;
}



// FUNCTION 14129e130 FUN_14129e130 body=25 status=ok
// SIG undefined FUN_14129e130(void)

undefined8 * FUN_14129e130(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1f0);
  *param_2 = *(undefined8 *)(param_1 + 0x1e8);
  *(undefined4 *)(param_2 + 1) = uVar1;
  return param_2;
}



// FUNCTION 14129e150 FUN_14129e150 body=73 status=ok
// SIG undefined FUN_14129e150(void)

float FUN_14129e150(longlong param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 0x194) + *(float *)(param_1 + 0x194) + *(float *)(param_1 + 0x1a0);
  fVar1 = *(float *)(param_1 + 0x1c0) + *(float *)(param_1 + 0x1c0) + *(float *)(param_1 + 0x1cc);
  if (fVar1 <= fVar2) {
    fVar1 = fVar2;
  }
  fVar2 = *(float *)(param_1 + 0x1b8);
  if (*(float *)(param_1 + 0x1b8) <= *(float *)(param_1 + 0x1b4)) {
    fVar2 = *(float *)(param_1 + 0x1b4);
  }
  return fVar1 * fVar2 * *(float *)(param_1 + 0x1a8);
}



// FUNCTION 14129e1a0 FUN_14129e1a0 body=268 status=ok
// SIG undefined FUN_14129e1a0(void)

undefined8 FUN_14129e1a0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  iVar3 = FUN_14129dc40();
  if (*(longlong *)(param_1 + 0x48) == 0) {
    return 0;
  }
  lVar4 = FUN_142dfdfe0();
  lVar6 = *(longlong *)(param_1 + 0x48);
  lVar7 = lVar6;
  while( true ) {
    if (lVar7 == 0) {
      return 0;
    }
    if (lVar7 == lVar4) break;
    lVar7 = *(longlong *)(lVar7 + 0x30);
  }
  if (lVar6 == 0) {
    return 0;
  }
  if (lVar6 != 0) {
    plVar5 = (longlong *)FUN_142dfdfe0();
    plVar8 = *(longlong **)(param_1 + 0x48);
    for (plVar1 = plVar8; plVar1 != (longlong *)0x0; plVar1 = (longlong *)plVar1[6]) {
      if (plVar1 == plVar5) goto LAB_14129e217;
    }
  }
  plVar8 = (longlong *)0x0;
LAB_14129e217:
  lVar6 = plVar8[0x1f];
  if (lVar6 == 0) {
    (**(code **)(*plVar8 + 0x368))(plVar8);
    lVar6 = plVar8[0x1f];
    if (lVar6 == 0) {
      return 0;
    }
  }
  lVar6 = *(longlong *)(lVar6 + 0xd8);
  if (lVar6 != 0) {
    lVar7 = UARGetCandidateObjectAsyncTaskBlueprintProxy::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      if (iVar3 == 0) {
        return *(undefined8 *)(lVar6 + 0x60);
      }
      if (iVar3 == 1) {
        return *(undefined8 *)(lVar6 + 0x68);
      }
    }
  }
  return 0;
}



// FUNCTION 14129e2b0 FUN_14129e2b0 body=805 status=ok
// SIG undefined FUN_14129e2b0(void)

void FUN_14129e2b0(longlong *param_1,undefined8 param_2,longlong *param_3,longlong param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  char cVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 uVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined4 *puVar16;
  undefined8 local_res8;
  longlong local_28 [2];
  
  lVar9 = (**(code **)(*param_1 + 0x148))();
  if ((lVar9 != 0) && (lVar10 = FUN_142f6c9f0(lVar9), lVar10 != 0)) {
    if (param_4 != 0) {
      lVar11 = FUN_142f71d80();
      lVar14 = param_4;
      do {
        if (lVar14 == lVar11) goto LAB_14129e320;
        lVar14 = *(longlong *)(lVar14 + 0x30);
      } while (lVar14 != 0);
    }
    plVar12 = (longlong *)FUN_142f5ed60(lVar10,&local_res8);
    param_4 = *plVar12;
LAB_14129e320:
    if (param_4 != 0) {
      lVar11 = FUN_142f71d80();
      lVar14 = param_4;
      do {
        if (lVar14 == lVar11) {
          lVar10 = FUN_142f5ef60(lVar10,param_4);
          if (lVar10 == 0) {
            return;
          }
          local_res8 = 0;
          if (param_1[0xf] == 0) {
            return;
          }
          if (param_1[0xf] == *(longlong *)(lVar10 + 0x30)) {
            return;
          }
          uVar13 = FMistWorldUtils::GetDebugEntityDrawSystem(lVar9);
          FUN_142f40360(uVar13,local_28,param_1 + 0xf,lVar10 + 0x30,0);
          local_res8 = 0;
          if (local_28[0] != 0) {
            puVar3 = (undefined4 *)param_1[0x2a];
            lVar10 = param_1[0x2b];
            if (puVar3 != puVar3 + (longlong)(int)lVar10 * 0x18) {
              puVar16 = puVar3 + 0x10;
              do {
                lVar14 = *(longlong *)(puVar16 + 6);
                if (lVar14 != 0) {
                  lVar11 = FUN_142f478b0();
                  if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x88) +
                       (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
                    bVar7 = false;
                  }
                  else {
                    bVar7 = true;
                  }
                  if ((bVar7) && (*(longlong *)(lVar14 + 0xd8) == local_28[0])) {
                    iVar2 = (int)param_3[1];
                    *(int *)(param_3 + 1) = iVar2 + 1;
                    if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
                      TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(param_3,iVar2)
                      ;
                    }
                    puVar15 = (undefined8 *)((longlong)iVar2 * 0x60 + *param_3);
                    *puVar15 = *(undefined8 *)(puVar16 + -0x10);
                    FString::FString(puVar15 + 1,puVar16 + -0xe);
                    uVar13 = *(undefined8 *)(puVar16 + -6);
                    puVar15[4] = *(undefined8 *)(puVar16 + -8);
                    puVar15[5] = uVar13;
                    uVar13 = *(undefined8 *)(puVar16 + -2);
                    puVar15[6] = *(undefined8 *)(puVar16 + -4);
                    puVar15[7] = uVar13;
                    uVar4 = puVar16[1];
                    uVar5 = puVar16[2];
                    uVar6 = puVar16[3];
                    *(undefined4 *)(puVar15 + 8) = *puVar16;
                    *(undefined4 *)((longlong)puVar15 + 0x44) = uVar4;
                    *(undefined4 *)(puVar15 + 9) = uVar5;
                    *(undefined4 *)((longlong)puVar15 + 0x4c) = uVar6;
                    puVar15[10] = *(undefined8 *)(puVar16 + 4);
                    puVar15[0xb] = *(undefined8 *)(puVar16 + 6);
                  }
                }
                puVar1 = puVar16 + 8;
                puVar16 = puVar16 + 0x18;
              } while (puVar1 != puVar3 + (longlong)(int)lVar10 * 0x18);
            }
          }
          lVar9 = UWorld::GetGameState<APVPGameState>(lVar9);
          if (lVar9 == 0) {
            return;
          }
          if (*(longlong *)(lVar9 + 0x5a0) == 0) {
            return;
          }
          if ((int)param_3[1] != 0) {
            return;
          }
          puVar3 = (undefined4 *)param_1[0x2a];
          lVar10 = param_1[0x2b];
          if (puVar3 == puVar3 + (longlong)(int)lVar10 * 0x18) {
            return;
          }
          puVar16 = puVar3 + 0x10;
          do {
            lVar14 = *(longlong *)(puVar16 + 6);
            if (lVar14 != 0) {
              lVar11 = FUN_142f477c0();
              if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
                bVar7 = false;
              }
              else {
                bVar7 = true;
              }
              if ((bVar7) &&
                 (cVar8 = FUN_142f430a0(*(undefined8 *)(lVar9 + 0x5a0),lVar14,
                                        CONCAT71((int7)((ulonglong)(lVar11 + 0x88) >> 8),1)),
                 cVar8 != '\0')) {
                iVar2 = (int)param_3[1];
                *(int *)(param_3 + 1) = iVar2 + 1;
                if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
                  TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(param_3,iVar2);
                }
                puVar15 = (undefined8 *)((longlong)iVar2 * 0x60 + *param_3);
                *puVar15 = *(undefined8 *)(puVar16 + -0x10);
                FString::FString(puVar15 + 1,puVar16 + -0xe);
                uVar13 = *(undefined8 *)(puVar16 + -6);
                puVar15[4] = *(undefined8 *)(puVar16 + -8);
                puVar15[5] = uVar13;
                uVar13 = *(undefined8 *)(puVar16 + -2);
                puVar15[6] = *(undefined8 *)(puVar16 + -4);
                puVar15[7] = uVar13;
                uVar4 = puVar16[1];
                uVar5 = puVar16[2];
                uVar6 = puVar16[3];
                *(undefined4 *)(puVar15 + 8) = *puVar16;
                *(undefined4 *)((longlong)puVar15 + 0x44) = uVar4;
                *(undefined4 *)(puVar15 + 9) = uVar5;
                *(undefined4 *)((longlong)puVar15 + 0x4c) = uVar6;
                puVar15[10] = *(undefined8 *)(puVar16 + 4);
                puVar15[0xb] = *(undefined8 *)(puVar16 + 6);
              }
            }
            puVar1 = puVar16 + 8;
            puVar16 = puVar16 + 0x18;
          } while (puVar1 != puVar3 + (longlong)(int)lVar10 * 0x18);
          return;
        }
        lVar14 = *(longlong *)(lVar14 + 0x30);
      } while (lVar14 != 0);
    }
  }
  return;
}



// FUNCTION 14129e5e0 FUN_14129e5e0 body=25 status=ok
// SIG undefined FUN_14129e5e0(void)

undefined8 FUN_14129e5e0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong **)(param_1 + 0x280) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014129e5ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x280) + 0x278))();
    return uVar1;
  }
  return 0;
}



// FUNCTION 14129e600 FUN_14129e600 body=458 status=ok
// SIG undefined FUN_14129e600(void)

float FUN_14129e600(longlong param_1)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  undefined1 local_res8 [8];
  
  fVar8 = 0.0;
  lVar5 = *(longlong *)(param_1 + 0x118);
  if (lVar5 != 0) {
    lVar4 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      cVar2 = FUN_140d01be0(lVar5);
      goto LAB_14129e674;
    }
  }
  cVar2 = '\0';
LAB_14129e674:
  cVar3 = FUN_140bf9690(0,param_1 + 0x180);
  if (cVar3 != '\0') {
    lVar5 = FWeakObjectPtr::Get(param_1 + 0x180);
    if (cVar2 == '\0') {
      if (0.0 < *(float *)(lVar5 + 0xe8)) {
        lVar5 = FWeakObjectPtr::Get(param_1 + 0x180);
        fVar8 = *(float *)(lVar5 + 0xe8);
      }
    }
    else if (0.0 < *(float *)(lVar5 + 0xec)) {
      lVar5 = FWeakObjectPtr::Get(param_1 + 0x180);
      fVar8 = *(float *)(lVar5 + 0xec);
    }
  }
  if (ABS(fVar8) <= 1e-08) {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    lVar5 = 0;
    if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
      lVar5 = *(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x588);
    }
    if (lVar5 != 0) {
      if (cVar2 == '\0') {
        fVar7 = *(float *)(lVar5 + 0x220);
      }
      else {
        fVar7 = *(float *)(lVar5 + 0x224);
      }
      if (0.0 < fVar7) {
        fVar8 = fVar7;
      }
      if (ABS(fVar8) <= 1e-08) {
        if (cVar2 == '\0') {
          fVar8 = *(float *)(lVar5 + 0x218);
        }
        else {
          fVar8 = *(float *)(lVar5 + 0x21c);
        }
        if (ABS(fVar8) <= 1e-08) {
          if ((*(longlong *)(param_1 + 0x1c0) == 0) || (cVar2 = FUN_1424a40c0(), cVar2 == '\0')) {
            fVar8 = 0.0;
          }
          else {
            pfVar6 = (float *)FUN_1424a1c80(*(undefined8 *)(param_1 + 0x1c0),local_res8);
            fVar8 = *pfVar6;
          }
        }
      }
    }
  }
  return fVar8;
}



// FUNCTION 14129e7d0 FUN_14129e7d0 body=102 status=ok
// SIG undefined FUN_14129e7d0(void)

longlong FUN_14129e7d0(longlong param_1,ulonglong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((int)((uint)param_2 & 0xff) < *(int *)(param_1 + 0x398)) {
    lVar2 = *(longlong *)((param_2 & 0xff) * 0x38 + 0x28 + *(longlong *)(param_1 + 0x390));
    if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x40), lVar2 != 0)) {
      lVar3 = lVar2 + 0x80;
      cVar1 = FText::IsEmpty(lVar3);
      if (cVar1 != '\0') {
        lVar3 = lVar2 + 0x68;
      }
      return lVar3;
    }
  }
  lVar2 = FUN_1404b03b0();
  return lVar2;
}



// FUNCTION 14129e840 FUN_14129e840 body=450 status=ok
// SIG undefined FUN_14129e840(void)

float * FUN_14129e840(undefined8 param_1,float *param_2,longlong *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  
  if (param_3 == (longlong *)0x0) {
LAB_14129e9e3:
    param_2[0] = 0.0;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    *(undefined1 *)(param_2 + 2) = 0xff;
    return param_2;
  }
  lVar4 = FUN_1413b4d10();
  if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  plVar5 = param_3;
  if (!bVar1) {
    lVar4 = AWeaponBase::GetPrivateStaticClass();
    if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((!bVar1) || (plVar5 = (longlong *)FUN_140b27930(param_3), plVar5 == (longlong *)0x0)) {
      lVar4 = FUN_142dfdf30();
      if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
          lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        iVar3 = (**(code **)(*param_3 + 0x408))(param_3);
        *param_2 = (float)iVar3;
        *(undefined1 *)(param_2 + 2) = 0;
        return param_2;
      }
      goto LAB_14129e9e3;
    }
  }
  iVar3 = (**(code **)(*plVar5 + 0x408))(plVar5);
  fVar8 = (float)iVar3;
  iVar3 = FUN_140b2bf30(plVar5);
  if ((0 < iVar3) &&
     ((cVar2 = FWeakObjectPtr::IsValid(&DAT_146877e98), cVar2 != '\0' &&
      (lVar4 = FWeakObjectPtr::Get(&DAT_146877e98), lVar4 != 0)))) {
    uVar6 = FRuntimeFloatCurve::GetRichCurve(lVar4 + 0x48);
    fVar7 = (float)FRichCurve::Eval(uVar6,(float)iVar3,0x3f800000);
    fVar8 = fVar8 + fVar7;
  }
  *param_2 = fVar8;
  *(undefined1 *)(param_2 + 2) = 0;
  return param_2;
}



// FUNCTION 14129ea10 FUN_14129ea10 body=474 status=ok
// SIG undefined FUN_14129ea10(void)

float * FUN_14129ea10(undefined8 param_1,float *param_2,longlong *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  float fVar7;
  float fVar8;
  
  if (param_3 == (longlong *)0x0) {
LAB_14129ebcb:
    param_2[0] = 0.0;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    *(undefined1 *)(param_2 + 2) = 0xff;
    return param_2;
  }
  lVar4 = APlayArea::GetPrivateStaticClass();
  if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  plVar6 = param_3;
  if (!bVar1) {
    lVar4 = FUN_14149b100();
    if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((!bVar1) ||
       (plVar6 = (longlong *)param_3[0x121], (longlong *)param_3[0x121] == (longlong *)0x0)) {
      lVar4 = FUN_142dfdf30();
      if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
          lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        iVar3 = (**(code **)(*param_3 + 0x408))(param_3);
        *param_2 = (float)iVar3;
        *(undefined1 *)(param_2 + 2) = 0;
        return param_2;
      }
      goto LAB_14129ebcb;
    }
  }
  iVar3 = (**(code **)(*plVar6 + 0x408))(plVar6);
  fVar8 = (float)iVar3;
  cVar2 = FWeakObjectPtr::IsValid(plVar6 + 0x88);
  if (cVar2 == '\0') {
    iVar3 = 0;
  }
  else {
    lVar4 = FWeakObjectPtr::Get(plVar6 + 0x88);
    iVar3 = *(int *)(lVar4 + 0x278);
  }
  if (((0 < iVar3) && (cVar2 = FWeakObjectPtr::IsValid(&DAT_146877e98), cVar2 != '\0')) &&
     (lVar4 = FWeakObjectPtr::Get(&DAT_146877e98), lVar4 != 0)) {
    uVar5 = FRuntimeFloatCurve::GetRichCurve(lVar4 + 0x48);
    fVar7 = (float)FRichCurve::Eval(uVar5,(float)iVar3,0x3f800000);
    fVar8 = fVar8 + fVar7;
  }
  *param_2 = fVar8;
  *(undefined1 *)(param_2 + 2) = 0;
  return param_2;
}



// FUNCTION 14129ebf0 FUN_14129ebf0 body=269 status=ok
// SIG undefined FUN_14129ebf0(void)

float * FUN_14129ebf0(undefined8 param_1,float *param_2,longlong *param_3)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  
  if (param_3 != (longlong *)0x0) {
    lVar2 = UUGBrightnessScreenUW::GetPrivateStaticClass();
    if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
LAB_14129ec9a:
      fVar4 = *(float *)((longlong)param_3 + 0x194) + *(float *)((longlong)param_3 + 0x194) +
              *(float *)(param_3 + 0x34);
      fVar5 = *(float *)(param_3 + 0x38) + *(float *)(param_3 + 0x38) +
              *(float *)((longlong)param_3 + 0x1cc);
      if (fVar5 <= fVar4) {
        fVar5 = fVar4;
      }
      fVar4 = *(float *)(param_3 + 0x37);
      if (*(float *)(param_3 + 0x37) <= *(float *)((longlong)param_3 + 0x1b4)) {
        fVar4 = *(float *)((longlong)param_3 + 0x1b4);
      }
      fVar5 = fVar5 * fVar4 * *(float *)(param_3 + 0x35);
      goto LAB_14129ece7;
    }
    lVar2 = FUN_1430b3b80();
    if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar3 = UUGBrightnessScreenUW::GetPrivateStaticClass();
      param_3 = (longlong *)(**(code **)(*param_3 + 0x7f8))(param_3,uVar3,(char)param_3[0xd2]);
      if (param_3 != (longlong *)0x0) goto LAB_14129ec9a;
    }
  }
  fVar5 = 0.0;
LAB_14129ece7:
  *param_2 = fVar5;
  *(undefined1 *)(param_2 + 2) = 0;
  return param_2;
}



// FUNCTION 14129ed00 FUN_14129ed00 body=309 status=ok
// SIG undefined FUN_14129ed00(void)

float * FUN_14129ed00(longlong param_1,float *param_2,longlong *param_3)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  longlong lVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  
  if (param_3 == (longlong *)0x0) goto LAB_14129ee16;
  lVar4 = APlayArea::GetPrivateStaticClass();
  if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    lVar4 = FUN_14149b100();
    if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_14129ee16;
    uVar5 = APlayArea::GetPrivateStaticClass();
    param_3 = (longlong *)(**(code **)(*param_3 + 0x628))(param_3,uVar5);
    if (param_3 == (longlong *)0x0) goto LAB_14129ee16;
  }
  cVar1 = *(char *)(param_1 + 0x28);
  if (cVar1 == '\0') {
    bVar3 = *(byte *)((longlong)param_3 + 0x432);
  }
  else if (cVar1 == '\x01') {
    bVar3 = *(byte *)((longlong)param_3 + 0x431);
  }
  else {
    if (cVar1 != '\x02') {
LAB_14129ee16:
      param_2[0] = 0.0;
      param_2[1] = 0.0;
      param_2[2] = 0.0;
      *(undefined1 *)(param_2 + 2) = 0xff;
      return param_2;
    }
    bVar3 = *(byte *)(param_3 + 0x86);
  }
  fVar7 = (float)bVar3 * 0.032258064;
  fVar6 = 0.0;
  if ((0.0 <= fVar7) && (fVar6 = fVar7, 1.0 <= fVar7)) {
    fVar6 = 1.0;
  }
  *param_2 = fVar6;
  *(undefined1 *)(param_2 + 2) = 0;
  return param_2;
}



// FUNCTION 14129ee40 FUN_14129ee40 body=115 status=ok
// SIG undefined FUN_14129ee40(void)

longlong FUN_14129ee40(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x448) != 0) {
    return *(longlong *)(param_1 + 0x448);
  }
  lVar3 = *(longlong *)(param_1 + 0x118);
  if (lVar3 != 0) {
    lVar2 = FUN_14149b100();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_14129ee9e;
  }
  lVar3 = 0;
LAB_14129ee9e:
  *(longlong *)(param_1 + 0x448) = lVar3;
  return lVar3;
}



// FUNCTION 14129eec0 FUN_14129eec0 body=27 status=ok
// SIG undefined FUN_14129eec0(void)

void FUN_14129eec0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x350) == 0) {
    *(undefined8 *)(param_1 + 0x350) = *(undefined8 *)(param_1 + 0x118);
  }
  return;
}



// FUNCTION 14129eee0 FUN_14129eee0 body=61 status=ok
// SIG undefined FUN_14129eee0(void)

float FUN_14129eee0(longlong param_1)

{
  float fVar1;
  
  fVar1 = (float)((uint)*(byte *)(param_1 + 0x432) + (uint)*(byte *)(param_1 + 0x431) +
                 (uint)*(byte *)(param_1 + 0x430)) * 0.010752688;
  if (fVar1 < 0.0) {
    return 0.0;
  }
  if (1.0 <= fVar1) {
    fVar1 = 1.0;
  }
  return fVar1;
}



// FUNCTION 14129ef20 FUN_14129ef20 body=44 status=ok
// SIG undefined FUN_14129ef20(void)

undefined8 FUN_14129ef20(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((DAT_146877ee8 != 0) && (0 < param_1)) {
    iVar1 = DAT_146877ee8;
    if (param_1 < DAT_146877ee8) {
      iVar1 = param_1;
    }
    uVar2 = FWeakObjectPtr::Get(DAT_146877ee0 + (longlong)(iVar1 + -1) * 8);
    return uVar2;
  }
  return 0;
}



// FUNCTION 14129ef50 FUN_14129ef50 body=86 status=ok
// SIG undefined FUN_14129ef50(void)

longlong * FUN_14129ef50(longlong param_1,longlong *param_2)

{
  *param_2 = 0;
  if (*(longlong *)(param_1 + 0x750) == 0) {
    FUN_141294fb0();
    *param_2 = *(longlong *)(param_1 + 0x750);
    return param_2;
  }
  *param_2 = *(longlong *)(param_1 + 0x750);
  return param_2;
}



// FUNCTION 14129efb0 thunk_FUN_14129ae20 body=5 status=ok
// SIG undefined thunk_FUN_14129ae20(void)

void thunk_FUN_14129ae20(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined4 *param_4
                        ,undefined4 *param_5)

{
  undefined4 *puVar1;
  void *_Src;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  void *pvStack_58;
  ulonglong uStack_50;
  undefined1 *puStack_48;
  int iStack_40;
  undefined4 uStack_3c;
  void **ppvStack_38;
  undefined4 *puStack_30;
  undefined8 uStack_28;
  
  puVar1 = param_5;
  ppvStack_38 = &pvStack_58;
  uStack_3c = (undefined4)((ulonglong)&ppvStack_38 >> 0x20);
  *param_4 = 0;
  puStack_48 = &LAB_141293ce0;
  iStack_40 = (int)&ppvStack_38;
  *param_5 = 0;
  pvStack_58 = (void *)0x0;
  uStack_50 = 0;
  puStack_30 = param_4;
  uStack_28 = param_3;
  FUN_1412be2f0(param_2,param_1,&puStack_48);
  uVar2 = FUN_142e035e0();
  lVar3 = (**(code **)(*param_2 + 0x628))(param_2,uVar2);
  _Src = pvStack_58;
  if (lVar3 != 0) {
    lVar4 = (longlong)(int)uStack_50;
    puStack_48 = (undefined1 *)0x0;
    iStack_40 = (int)uStack_50;
    if ((int)uStack_50 == 0) {
      uStack_3c = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                (&puStack_48,uStack_50 & 0xffffffff,0);
      _guard_xfg_dispatch_icall_nop(puStack_48,_Src,lVar4 << 3);
    }
    FUN_142dcda40(lVar3,&puStack_48,param_3,puVar1,&param_5,0);
  }
  if (pvStack_58 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14129efc0 FUN_14129efc0 body=61 status=ok
// SIG undefined FUN_14129efc0(void)

void FUN_14129efc0(void)

{
  FUN_14129b0f0();
  return;
}



// FUNCTION 14129f000 FUN_14129f000 body=180 status=ok
// SIG undefined FUN_14129f000(void)

void FUN_14129f000(longlong param_1,longlong *param_2,undefined4 *param_3,undefined4 *param_4,
                  char *param_5,longlong param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((*(char *)(param_1 + 0x1c8) == *param_5) && (*(longlong *)(param_1 + 0x1d8) == param_6)) {
    if (param_2 != (longlong *)0x0) {
      lVar1 = (**(code **)(*param_2 + 0x148))(param_2);
      if (lVar1 != 0) {
        *param_3 = *(undefined4 *)(param_1 + 400);
        *param_4 = 0;
        uVar2 = UEnvQueryTest_Random::StaticClass();
        lVar1 = (**(code **)(*param_2 + 0x628))(param_2,uVar2);
        if (lVar1 != 0) {
          lVar1 = FUN_140e22230(lVar1,*(undefined8 *)(param_1 + 0x78));
          if (lVar1 != 0) {
            *param_4 = *(undefined4 *)(lVar1 + 0x10);
          }
        }
      }
    }
  }
  else {
    *param_3 = 0;
    *param_4 = 0;
  }
  return;
}



// FUNCTION 14129f0c0 FUN_14129f0c0 body=268 status=ok
// SIG undefined FUN_14129f0c0(void)

undefined8 FUN_14129f0c0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  iVar3 = FUN_14129dc40();
  if (*(longlong *)(param_1 + 0x48) == 0) {
    return 0;
  }
  lVar4 = FUN_142dfdfe0();
  lVar6 = *(longlong *)(param_1 + 0x48);
  lVar7 = lVar6;
  while( true ) {
    if (lVar7 == 0) {
      return 0;
    }
    if (lVar7 == lVar4) break;
    lVar7 = *(longlong *)(lVar7 + 0x30);
  }
  if (lVar6 == 0) {
    return 0;
  }
  if (lVar6 != 0) {
    plVar5 = (longlong *)FUN_142dfdfe0();
    plVar8 = *(longlong **)(param_1 + 0x48);
    for (plVar1 = plVar8; plVar1 != (longlong *)0x0; plVar1 = (longlong *)plVar1[6]) {
      if (plVar1 == plVar5) goto LAB_14129f137;
    }
  }
  plVar8 = (longlong *)0x0;
LAB_14129f137:
  lVar6 = plVar8[0x1f];
  if (lVar6 == 0) {
    (**(code **)(*plVar8 + 0x368))(plVar8);
    lVar6 = plVar8[0x1f];
    if (lVar6 == 0) {
      return 0;
    }
  }
  lVar6 = *(longlong *)(lVar6 + 0xd8);
  if (lVar6 != 0) {
    lVar7 = UARGetCandidateObjectAsyncTaskBlueprintProxy::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      if (iVar3 == 0) {
        return *(undefined8 *)(lVar6 + 0x50);
      }
      if (iVar3 == 1) {
        return *(undefined8 *)(lVar6 + 0x58);
      }
    }
  }
  return 0;
}



// FUNCTION 14129f1d0 FUN_14129f1d0 body=127 status=ok
// SIG undefined FUN_14129f1d0(void)

undefined8 FUN_14129f1d0(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (((*(byte *)(param_1 + 0x28) & 2) != 0) && (param_2 != 0)) {
    lVar3 = UParticleModuleTypeDataGpu::GetPrivateStaticClass();
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
      cVar2 = ACoreContact::DoAllVisibilityExpressionsNeedToBeTrue(param_2);
      if (cVar2 == '\0') {
        uVar4 = FUN_141270fe0(param_1,param_2);
        return uVar4;
      }
    }
  }
  return 0;
}



// FUNCTION 14129f250 FUN_14129f250 body=940 status=ok
// SIG undefined FUN_14129f250(void)

void FUN_14129f250(longlong param_1,longlong *param_2,longlong param_3,int *param_4,int *param_5,
                  char param_6)

{
  bool bVar1;
  int *piVar2;
  char cVar3;
  undefined8 *_Src;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  longlong *plVar12;
  longlong *plVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 *local_60;
  ulonglong local_58;
  void *local_50;
  int local_48;
  undefined4 local_44;
  
  piVar2 = param_5;
  iVar14 = 0;
  *param_4 = 0;
  *param_5 = 0;
  uVar5 = FUN_142e035e0();
  lVar6 = (**(code **)(*param_2 + 0x628))(param_2,uVar5);
  cVar3 = param_6;
  iVar11 = *(int *)(param_1 + 0x188);
  if (iVar11 < 1) {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    if ((lVar6 != 0) && (*(longlong **)(DAT_146b33f38 + 0x58) != (longlong *)0x0)) {
      plVar7 = (longlong *)(**(code **)(**(longlong **)(DAT_146b33f38 + 0x58) + 0x290))();
      cVar3 = param_6;
      plVar12 = (longlong *)*plVar7;
      plVar7 = plVar12 + (int)plVar7[1];
      for (; plVar12 != plVar7; plVar12 = plVar12 + 1) {
        if (*plVar12 != 0) {
          plVar8 = (longlong *)UListView::OnItemSelectionChanged();
          lVar16 = *plVar8;
          lVar15 = lVar16 + (longlong)(int)plVar8[1] * 0x28;
          for (; lVar16 != lVar15; lVar16 = lVar16 + 0x28) {
            plVar8 = (longlong *)FWeakObjectPtr::Get();
            if (plVar8 == (longlong *)0x0) {
              LOCK();
              if (DAT_1464b56f4 == 0) {
                DAT_1464b56f4 = 0;
              }
              UNLOCK();
              if ((DAT_1464b56f4 != *(int *)(lVar16 + 8)) && (*(longlong *)(lVar16 + 0x10) != 0)) {
                lVar9 = FUN_141796df0();
                FWeakObjectPtr::operator=(lVar16,lVar9);
                if ((lVar9 != 0) || (DAT_1469e7e10 == '\0')) {
                  LOCK();
                  if (DAT_1464b56f4 == 0) {
                    DAT_1464b56f4 = 0;
                  }
                  UNLOCK();
                  *(int *)(lVar16 + 8) = DAT_1464b56f4;
                }
                plVar8 = (longlong *)FWeakObjectPtr::Get(lVar16);
                if (plVar8 != (longlong *)0x0) goto LAB_14129f4f7;
              }
            }
            else {
LAB_14129f4f7:
              lVar9 = FUN_14171bfe0();
              if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
                  lVar9 + 0x88)) {
                bVar1 = false;
              }
              else {
                bVar1 = true;
              }
              if (bVar1) {
                plVar10 = (longlong *)FUN_142dfdfe0();
                plVar13 = plVar8;
                do {
                  if (plVar13 == plVar10) {
                    lVar9 = plVar8[0x1f];
                    if (lVar9 == 0) {
                      (**(code **)(*plVar8 + 0x368))(plVar8);
                      lVar9 = plVar8[0x1f];
                      if (lVar9 == 0) break;
                    }
                    if ((((*(longlong *)(lVar9 + 0xd8) == param_3) &&
                         (*(char *)(lVar9 + 0xe1) == '\0')) &&
                        ((cVar3 == '\0' || (*(char *)(lVar9 + 0x8a) == '\0')))) &&
                       (*(longlong *)(lVar9 + 0x90) == *(longlong *)(param_1 + 0x78))) {
                      *param_4 = *param_4 + 1;
                      cVar4 = FUN_142dd3360(lVar6,plVar8);
                      if (cVar4 != '\0') {
                        *piVar2 = *piVar2 + 1;
                      }
                    }
                    break;
                  }
                  plVar13 = (longlong *)plVar13[6];
                } while (plVar13 != (longlong *)0x0);
              }
            }
          }
        }
      }
    }
  }
  else if (lVar6 != 0) {
    param_5._0_4_ = 0;
    if (0 < iVar11) {
      plVar7 = *(longlong **)(param_1 + 0x180);
      if (param_3 == 0) {
        iVar14 = 0;
        plVar12 = plVar7 + (longlong)*(int *)(param_1 + 0x188) * 4;
        for (; plVar7 != plVar12; plVar7 = plVar7 + 4) {
          if (*plVar7 != 0) {
            if (param_6 == '\0') {
              iVar11 = (int)plVar7[3];
            }
            else {
              iVar11 = *(int *)((longlong)plVar7 + 0x1c);
            }
            iVar14 = iVar14 + iVar11;
          }
        }
      }
      else {
        plVar12 = plVar7 + (longlong)iVar11 * 4;
        for (; plVar7 != plVar12; plVar7 = plVar7 + 4) {
          if (*plVar7 == param_3) {
            if (param_6 == '\0') {
              iVar14 = (int)plVar7[3];
            }
            else {
              iVar14 = *(int *)((longlong)plVar7 + 0x1c);
            }
            break;
          }
        }
      }
    }
    *param_4 = iVar14;
    local_60 = (undefined8 *)0x0;
    local_58 = 1;
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_60,0);
    _Src = local_60;
    lVar15 = (longlong)(int)local_58;
    local_50 = (void *)0x0;
    local_48 = (int)local_58;
    *local_60 = *(undefined8 *)(param_1 + 0x78);
    if ((int)local_58 == 0) {
      local_44 = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                (&local_50,local_58 & 0xffffffff,0);
      _guard_xfg_dispatch_icall_nop(local_50,_Src,lVar15 << 3);
    }
    FUN_142dcda40(lVar6,&local_50,param_3,piVar2,&param_5,cVar3);
    FMemory::Free(_Src);
  }
  return;
}



// FUNCTION 14129f600 FUN_14129f600 body=130 status=ok
// SIG undefined FUN_14129f600(void)

int FUN_14129f600(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  
  if (0 < *(int *)(param_1 + 0x188)) {
    plVar1 = *(longlong **)(param_1 + 0x180);
    if (param_2 == 0) {
      plVar3 = plVar1 + (longlong)*(int *)(param_1 + 0x188) * 4;
      iVar4 = 0;
      for (; plVar1 != plVar3; plVar1 = plVar1 + 4) {
        if (*plVar1 != 0) {
          if (param_3 == '\0') {
            iVar2 = (int)plVar1[3];
          }
          else {
            iVar2 = *(int *)((longlong)plVar1 + 0x1c);
          }
          iVar4 = iVar4 + iVar2;
        }
      }
      return iVar4;
    }
    plVar3 = plVar1 + (longlong)*(int *)(param_1 + 0x188) * 4;
    for (; plVar1 != plVar3; plVar1 = plVar1 + 4) {
      if (*plVar1 == param_2) {
        if (param_3 == '\0') {
          return (int)plVar1[3];
        }
        return *(int *)((longlong)plVar1 + 0x1c);
      }
    }
  }
  return 0;
}



// FUNCTION 14129f690 FUN_14129f690 body=521 status=ok
// SIG undefined FUN_14129f690(void)

longlong FUN_14129f690(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong local_res8 [2];
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  int local_40;
  longlong local_38;
  longlong local_30;
  
  lVar3 = (**(code **)(*param_1 + 0x148))();
  if (lVar3 == 0) {
    return 0;
  }
  lVar3 = FUN_142f6c9f0(lVar3);
  if (lVar3 == 0) {
    return 0;
  }
  FUN_142f5ed60(lVar3,local_res8);
  if (local_res8[0] == 0) {
    return 0;
  }
  lVar3 = FUN_142f71d80();
  while( true ) {
    if (local_res8[0] == 0) {
      return 0;
    }
    if (local_res8[0] == lVar3) break;
    local_res8[0] = *(longlong *)(local_res8[0] + 0x30);
  }
  lVar3 = FUN_141297ac0(param_1);
  if (lVar3 == 0) {
    return 0;
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  if (*(longlong *)(DAT_146b33f38 + 0x58) == 0) {
    return 0;
  }
  if (DAT_1468782f0 == '\0') {
    FUN_1412c54f0();
  }
  lVar1 = DAT_1468787b8 + (longlong)DAT_1468787c0 * 0x28;
  if (DAT_1468787b8 == lVar1) {
    return 0;
  }
  lVar7 = DAT_1468787b8;
  do {
    TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(local_48,lVar7);
    lVar4 = FWeakObjectPtr::Get(local_48);
    if (lVar4 == 0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 != local_40) && (local_res8[1] = 0, local_38 != 0)) {
        lVar4 = FUN_141796df0(&local_38);
        FWeakObjectPtr::operator=(local_48,lVar4);
        if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          local_40 = DAT_1464b56f4;
        }
        lVar4 = FWeakObjectPtr::Get(local_48);
        if (lVar4 != 0) goto LAB_14129f80d;
      }
LAB_14129f843:
      lVar4 = 0;
    }
    else {
LAB_14129f80d:
      lVar5 = FUN_1414f4830();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_14129f843;
    }
    uVar6 = FName::ToString(lVar3 + 0x30,local_58);
    lVar4 = FUN_1412c36f0(lVar4,uVar6);
    if (lVar4 != 0) {
      if (local_30 != 0) {
        FMemory::Free();
        return lVar4;
      }
      return lVar4;
    }
    if (local_30 != 0) {
      FMemory::Free();
    }
    lVar7 = lVar7 + 0x28;
    if (lVar7 == lVar1) {
      return 0;
    }
  } while( true );
}



// FUNCTION 14129f8a0 FUN_14129f8a0 body=120 status=ok
// SIG undefined FUN_14129f8a0(void)

longlong FUN_14129f8a0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0xc0) == 0) {
    return 0;
  }
  lVar2 = FSoftObjectPath::TryLoad();
  if (lVar2 != 0) {
    lVar3 = FUN_1414f3400();
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



// FUNCTION 14129f920 FUN_14129f920 body=151 status=ok
// SIG undefined FUN_14129f920(void)

longlong FUN_14129f920(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_1405ec200(param_1 + 0x90);
  if (lVar2 != 0) {
    lVar3 = FUN_142e67c90();
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
      lVar3 = FUN_1414a9b90();
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
  }
  return 0;
}



// FUNCTION 14129f9c0 FUN_14129f9c0 body=683 status=ok
// SIG undefined FUN_14129f9c0(void)

undefined8 * FUN_14129f9c0(longlong param_1,undefined8 *param_2)

{
  wint_t _C;
  void *_Src;
  int iVar1;
  undefined8 *puVar2;
  wint_t *pwVar3;
  int iVar4;
  wint_t *pwVar5;
  longlong lVar6;
  undefined4 uVar7;
  wint_t *pwVar8;
  wint_t *pwVar9;
  wint_t *pwVar10;
  wint_t *pwVar11;
  wint_t *local_48;
  uint local_40;
  uint local_3c;
  wint_t *local_38;
  int local_30;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1468782ec) && (_Init_thread_header(&DAT_1468782ec), DAT_1468782ec == -1))
  {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a2e40,0);
    FGenericPlatformString::Memcpy
              (DAT_1462a2e40,L"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789",0x7e)
    ;
    atexit((_func_5014 *)&LAB_143e64640);
    _Init_thread_footer(&DAT_1468782ec);
  }
  puVar2 = (undefined8 *)FText::ToString(param_1 + 0x758);
  pwVar5 = (wint_t *)0x0;
  local_38 = (wint_t *)0x0;
  local_30 = *(int *)(puVar2 + 1);
  lVar6 = (longlong)local_30;
  _Src = (void *)*puVar2;
  iVar4 = 0;
  pwVar10 = pwVar5;
  if (local_30 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,local_30,0);
    pwVar10 = local_38;
    _guard_xfg_dispatch_icall_nop(local_38,_Src,lVar6 * 2);
  }
  if (local_30 < 2) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    uVar7 = 0;
    local_48 = (wint_t *)0x0;
    local_3c = 0;
    pwVar8 = pwVar5;
    pwVar11 = pwVar5;
    pwVar9 = pwVar10 + local_30 + -1;
    if (local_30 == 0) {
      pwVar9 = pwVar10 + local_30;
    }
    for (; pwVar10 != pwVar9; pwVar10 = pwVar10 + 1) {
      _C = *pwVar10;
      iVar4 = (int)pwVar5;
      for (pwVar3 = DAT_1462a2e40; pwVar3 != DAT_1462a2e40 + DAT_1462a2e48; pwVar3 = pwVar3 + 1) {
        if (*pwVar3 == _C) {
          if ((int)((longlong)pwVar3 - (longlong)DAT_1462a2e40 >> 1) != -1) {
            if (_C != 0) {
              iVar1 = iVar4 + -1;
              if (iVar4 < 1) {
                iVar1 = 0;
              }
              local_40 = (iVar4 < 1) + 1 + iVar4;
              if ((int)pwVar8 < (int)local_40) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48);
                pwVar8 = (wint_t *)(ulonglong)local_3c;
                pwVar11 = local_48;
              }
              pwVar5 = (wint_t *)(ulonglong)local_40;
              pwVar11[iVar1] = _C;
              pwVar11[(longlong)iVar1 + 1] = 0;
            }
            goto LAB_14129fb46;
          }
          break;
        }
      }
      iVar1 = iswspace(_C);
      if ((iVar1 != 0) && (1 < iVar4)) {
        iVar1 = iVar4 + -1;
        if (iVar4 < 1) {
          iVar1 = 0;
        }
        local_40 = (iVar4 < 1) + 1 + iVar4;
        if ((int)pwVar8 < (int)local_40) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48);
          pwVar8 = (wint_t *)(ulonglong)local_3c;
          pwVar11 = local_48;
        }
        pwVar5 = (wint_t *)(ulonglong)local_40;
        (pwVar11 + iVar1)[0] = 0x5f;
        (pwVar11 + iVar1)[1] = 0;
LAB_14129fb46:
        uVar7 = SUB84(pwVar8,0);
        iVar4 = (int)pwVar5;
        if ((iVar4 != 0) && (0x1f < iVar4 + -1)) break;
      }
      iVar4 = (int)pwVar5;
      uVar7 = SUB84(pwVar8,0);
    }
    *param_2 = pwVar11;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar7;
    *(int *)(param_2 + 1) = iVar4;
    pwVar10 = local_38;
  }
  if (pwVar10 != (wint_t *)0x0) {
    FMemory::Free(pwVar10);
  }
  return param_2;
}



// FUNCTION 14129fc70 FUN_14129fc70 body=484 status=ok
// SIG undefined FUN_14129fc70(void)

ulonglong * FUN_14129fc70(longlong param_1,ulonglong *param_2)

{
  wint_t _C;
  wint_t *pwVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  wint_t *pwVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong local_58;
  uint local_50;
  uint local_4c;
  wint_t *local_48;
  int local_40;
  
  FName::ToString(param_1 + 0x78,&local_48);
  uVar4 = 0;
  if (local_40 < 2) {
    *param_2 = 0;
    param_2[1] = 0;
    if (local_48 != (wint_t *)0x0) {
      FMemory::Free();
      return param_2;
    }
  }
  else {
    iVar6 = 0;
    local_58 = 0;
    local_4c = 0;
    iVar2 = iVar6;
    iVar3 = iVar6;
    uVar7 = uVar4;
    uVar8 = uVar4;
    pwVar1 = local_48;
    pwVar5 = local_48 + local_40 + -1;
    if (local_40 == 0) {
      pwVar5 = local_48 + local_40;
    }
    for (; pwVar1 != pwVar5; pwVar1 = pwVar1 + 1) {
      _C = *pwVar1;
      iVar2 = iswalnum(_C);
      iVar3 = (int)uVar4;
      if ((iVar2 == 0) && (_C != 0x5f)) {
        iVar2 = iswspace(_C);
        if ((iVar2 != 0) && (1 < iVar3)) {
          iVar2 = iVar3 + -1;
          if (iVar3 < 1) {
            iVar2 = iVar6;
          }
          local_50 = (iVar3 < 1) + 1 + iVar3;
          if ((int)uVar7 < (int)local_50) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58);
            uVar7 = (ulonglong)local_4c;
            uVar8 = local_58;
          }
          uVar4 = (ulonglong)local_50;
          *(undefined4 *)(uVar8 + (longlong)iVar2 * 2) = 0x5f;
          goto LAB_14129fde7;
        }
      }
      else {
        if (_C != 0) {
          iVar2 = iVar3 + -1;
          if (iVar3 < 1) {
            iVar2 = iVar6;
          }
          local_50 = (iVar3 < 1) + 1 + iVar3;
          if ((int)uVar7 < (int)local_50) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58);
            uVar7 = (ulonglong)local_4c;
            uVar8 = local_58;
          }
          uVar4 = (ulonglong)local_50;
          *(wint_t *)(uVar8 + (longlong)iVar2 * 2) = _C;
          *(undefined2 *)(uVar8 + 2 + (longlong)iVar2 * 2) = 0;
        }
LAB_14129fde7:
        iVar3 = (int)uVar7;
        iVar2 = (int)uVar4;
        if ((iVar2 != 0) && (0x1f < iVar2 + -1)) break;
      }
      iVar2 = (int)uVar4;
      iVar3 = (int)uVar7;
    }
    *param_2 = uVar8;
    *(int *)(param_2 + 1) = iVar2;
    *(int *)((longlong)param_2 + 0xc) = iVar3;
    if (local_48 != (wint_t *)0x0) {
      FMemory::Free(local_48);
    }
  }
  return param_2;
}



// FUNCTION 14129fe60 FUN_14129fe60 body=565 status=ok
// SIG undefined FUN_14129fe60(void)

void FUN_14129fe60(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong local_48;
  int local_40;
  int local_3c;
  
  lVar13 = 0;
  iVar6 = 0;
  iVar10 = 0;
  lVar12 = *(longlong *)(param_1 + 0x160);
  local_3c = 0;
  local_48 = 0;
  lVar11 = (longlong)*(int *)(param_1 + 0x168) * 0xf0 + lVar12;
  do {
    if (lVar12 == lVar11) {
      if (param_3 != &local_48) {
        iVar8 = (int)param_3[1];
        lVar12 = *param_3;
        if (iVar8 != 0) {
          lVar12 = lVar12 + 0x68;
          do {
            TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
            ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(lVar12 + 0x68);
            FUN_140bff340(lVar12);
            FUN_140c64420(lVar12 + -0x10);
            if (*(longlong *)(lVar12 + -0x60) != 0) {
              FMemory::Free();
            }
            lVar12 = lVar12 + 0xf0;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
          lVar12 = *param_3;
        }
        if (lVar12 != 0) {
          FMemory::Free();
        }
        *param_3 = lVar13;
        lVar13 = 0;
        *(int *)(param_3 + 1) = iVar6;
        iVar6 = 0;
        *(int *)((longlong)param_3 + 0xc) = iVar10;
      }
      if (iVar6 != 0) {
        lVar12 = lVar13 + 0x68;
        do {
          TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
          ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(lVar12 + 0x68);
          FUN_140bff340(lVar12);
          FUN_140c64420(lVar12 + -0x10);
          if (*(longlong *)(lVar12 + -0x60) != 0) {
            FMemory::Free();
          }
          lVar12 = lVar12 + 0xf0;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      if (lVar13 != 0) {
        FMemory::Free(lVar13);
      }
      return;
    }
    plVar9 = *(longlong **)(lVar12 + 0x58);
    plVar7 = plVar9 + (longlong)*(int *)(lVar12 + 0x60) * 10;
    for (; plVar9 != plVar7; plVar9 = plVar9 + 10) {
      plVar2 = (longlong *)(**(code **)(*plVar9 + 0x18))(plVar9);
      if (*plVar2 != 0) {
        lVar3 = FUN_142f71d80();
        lVar5 = *plVar2;
        for (lVar1 = lVar5; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
          if (lVar1 == lVar3) goto LAB_14129ff27;
        }
      }
      lVar5 = 0;
LAB_14129ff27:
      if (param_2 != 0) {
        lVar3 = FUN_142f71d80();
        for (lVar1 = param_2; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
          lVar4 = param_2;
          if (lVar1 == lVar3) goto LAB_14129ff51;
        }
      }
      lVar4 = 0;
LAB_14129ff51:
      if (lVar5 == lVar4) {
        lVar5 = (longlong)iVar6;
        local_40 = iVar6 + 1;
        if (iVar10 < local_40) {
          TArray<FSlateRenderBatch,FDefaultAllocator>::ResizeGrow(&local_48,iVar6);
          lVar13 = local_48;
          iVar10 = local_3c;
        }
        iVar6 = local_40;
        FUN_141289e80(lVar5 * 0xf0 + lVar13,lVar12);
        break;
      }
    }
    lVar12 = lVar12 + 0xf0;
  } while( true );
}



// FUNCTION 1412a00a0 FUN_1412a00a0 body=153 status=ok
// SIG undefined FUN_1412a00a0(void)

undefined8 FUN_1412a00a0(longlong *param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_2 != 0) {
    lVar2 = FUN_142f477c0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (param_1 != (longlong *)0x0)) {
      lVar2 = (**(code **)(*param_1 + 0x690))(param_1);
      if (lVar2 == 0) {
        uVar3 = (**(code **)(*param_1 + 0x688))(param_1);
      }
      else {
        uVar3 = 0;
      }
      UE::Net::Private::FReliableNetBlobQueue::Serialize(param_1,param_2,uVar3);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1412a0140 FUN_1412a0140 body=255 status=ok
// SIG undefined FUN_1412a0140(void)

void FUN_1412a0140(longlong param_1,longlong param_2,undefined1 param_3,char param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *local_28;
  undefined4 uStack_20;
  undefined1 local_18 [16];
  
  if ((param_2 != 0) && (cVar1 = FUN_140f12a40(param_2,param_1 + 0x180), cVar1 != '\0')) {
    if (param_4 == '\0') {
      cVar1 = FUN_140bf9670(0,param_1 + 0x188);
      if (cVar1 != '\0') {
        FWeakObjectPtr::operator=(param_1 + 0x188,param_2);
        local_28 = FUN_1412a5be0;
        uStack_20 = 0;
        *(undefined1 *)(param_1 + 0x191) = param_3;
        uVar2 = FWeakObjectPtr::Get(param_1 + 0x188);
        uVar3 = TBaseDelegate<TTypeWrapper<void>_>::CreateUObject<AFlarePlayerController>
                          (local_18,param_1,&local_28);
        FUN_141292a70(uVar2,uVar3);
      }
    }
    else {
      FWeakObjectPtr::operator=(param_1 + 0x188,param_2);
      *(undefined1 *)(param_1 + 0x191) = param_3;
      FUN_1412a5be0(param_1);
    }
  }
  return;
}



// FUNCTION 1412a0240 FUN_1412a0240 body=1165 status=ok
// SIG undefined FUN_1412a0240(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1412a0240(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_228 [32];
  code **local_208;
  undefined1 local_200;
  undefined8 local_1f0;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined1 local_1e0 [8];
  undefined1 local_1d8 [8];
  longlong *local_1d0;
  undefined1 local_1c8 [8];
  longlong *local_1c0;
  code *local_1b8 [2];
  undefined1 local_1a8 [32];
  undefined8 local_188;
  undefined4 local_178;
  longlong *local_168;
  undefined1 local_158 [49];
  undefined1 local_127;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_228;
  plVar3 = (longlong *)FUN_14309ed70();
  if (plVar3 == (longlong *)0x0) goto LAB_1412a06a5;
  FUN_143083d20(plVar3,1,(char)param_1[0x30]);
  FUN_142c62180(local_158);
  local_127 = 2;
  (**(code **)(*param_1 + 0x518))(param_1,local_158);
  plVar8 = (longlong *)0x0;
  if ((param_1[0x44] == 0) || (param_1[0x45] == 0)) {
LAB_1412a0473:
    local_200 = 0;
    local_208 = (code **)((ulonglong)local_208 & 0xffffffffffffff00);
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x998))(plVar3,local_1c8,1,local_158);
    param_1[0x44] = *plVar3;
    plVar3 = (longlong *)plVar3[1];
    plVar5 = (longlong *)param_1[0x45];
    if (plVar3 != plVar5) {
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
        UNLOCK();
        plVar5 = (longlong *)param_1[0x45];
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
      param_1[0x45] = (longlong)plVar3;
    }
    if (local_1c0 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_1c0 + 1;
      lVar7 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_1c0)(local_1c0);
        LOCK();
        piVar1 = (int *)((longlong)local_1c0 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_1c0 + 8))(local_1c0,1);
        }
      }
    }
  }
  else {
    piVar1 = (int *)(param_1[0x45] + 8);
    LOCK();
    iVar2 = *piVar1;
    if (iVar2 == 0) {
      *piVar1 = 0;
      iVar2 = 0;
    }
    UNLOCK();
    if (iVar2 < 1) goto LAB_1412a0473;
    local_58 = (longlong *)0x0;
    local_48 = 0;
    puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_78);
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[1] = param_1;
      *puVar4 = &PTR_FUN_143f77b70;
    }
    local_188 = 0;
    local_88 = (code *)&LAB_141293d40;
    local_178 = 0;
    if (local_48 == 0) {
LAB_1412a036c:
      local_1b8[0] = FUN_1407c3030;
    }
    else {
      plVar5 = local_78;
      if (local_58 != (longlong *)0x0) {
        plVar5 = local_58;
      }
      if (plVar5 == (longlong *)0x0) goto LAB_1412a036c;
      plVar5 = (longlong *)(**(code **)*plVar5)(plVar5,local_1a8);
      (**(code **)(*plVar5 + 8))(plVar5);
      local_1b8[0] = local_88;
    }
    local_208 = local_1b8;
    local_200 = 0;
    plVar3 = (longlong *)FUN_143083a00(plVar3,local_1d8,1,local_158);
    param_1[0x44] = *plVar3;
    plVar3 = (longlong *)plVar3[1];
    plVar5 = (longlong *)param_1[0x45];
    if (plVar3 != plVar5) {
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
        UNLOCK();
        plVar5 = (longlong *)param_1[0x45];
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
      param_1[0x45] = (longlong)plVar3;
    }
    if (local_1d0 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_1d0 + 1;
      lVar7 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_1d0)(local_1d0);
        LOCK();
        piVar1 = (int *)((longlong)local_1d0 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_1d0 + 8))(local_1d0,1);
        }
      }
    }
    if (local_48 != 0) {
      plVar3 = local_78;
      if (local_58 != (longlong *)0x0) {
        plVar3 = local_58;
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3,0);
      }
    }
    if (local_58 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  if ((param_1[0x44] != 0) && (param_1[0x45] != 0)) {
    piVar1 = (int *)(param_1[0x45] + 8);
    LOCK();
    iVar2 = *piVar1;
    if (iVar2 == 0) {
      *piVar1 = 0;
      iVar2 = 0;
    }
    UNLOCK();
    if (0 < iVar2) {
      plVar3 = (longlong *)param_1[0x45];
      local_1f0 = FUN_1412a3ab0;
      uStack_1e8 = 0;
      plVar5 = plVar3;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        iVar2 = (int)plVar3[1];
        bVar9 = iVar2 == 0;
        if (bVar9) {
          *(int *)(plVar3 + 1) = 0;
          iVar2 = 0;
        }
        UNLOCK();
        while (plVar5 = plVar8, !bVar9) {
          LOCK();
          bVar9 = iVar2 == (int)plVar3[1];
          if (bVar9) {
            *(int *)(plVar3 + 1) = iVar2 + 1;
          }
          UNLOCK();
          if (bVar9) {
            plVar5 = plVar3;
            if (plVar3 != (longlong *)0x0) {
              plVar8 = (longlong *)param_1[0x44];
            }
            break;
          }
          LOCK();
          iVar2 = (int)plVar3[1];
          bVar9 = iVar2 == 0;
          if (bVar9) {
            *(int *)(plVar3 + 1) = 0;
            iVar2 = 0;
          }
          UNLOCK();
        }
      }
      plVar3 = plVar8 + 0xb;
      plVar6 = (longlong *)FMemory::Realloc(0,0x30);
      local_168 = plVar6;
      if (plVar6 != (longlong *)0x0) {
        *plVar6 = (longlong)&PTR_FUN_143fcff50;
        FWeakObjectPtr::operator=(plVar6 + 1,param_1);
        *(undefined4 *)(plVar6 + 2) = (undefined4)local_1f0;
        *(undefined4 *)((longlong)plVar6 + 0x14) = local_1f0._4_4_;
        *(undefined4 *)(plVar6 + 3) = uStack_1e8;
        *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_1e4;
        lVar7 = FDelegateHandle::GenerateNewID();
        plVar6[5] = lVar7;
        *plVar6 = (longlong)&PTR_FUN_143fcff98;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar3,1);
        (**(code **)(*plVar6 + 0x20))(plVar6,local_1e0);
        iVar2 = (int)plVar8[0xc];
        *(int *)(plVar8 + 0xc) = iVar2 + 1;
        if (*(int *)((longlong)plVar8 + 100) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar3,iVar2);
        }
        puVar4 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar3);
        *puVar4 = plVar6;
        *(undefined4 *)(puVar4 + 1) = 3;
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar5 + 1;
        lVar7 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
    }
  }
  FUN_142c63c50(local_158);
LAB_1412a06a5:
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x38,0);
  return;
}



// FUNCTION 1412a06d0 FUN_1412a06d0 body=422 status=ok
// SIG undefined FUN_1412a06d0(void)

void FUN_1412a06d0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined8 local_28;
  longlong local_20;
  
  lVar5 = FUN_14309ed70();
  if (((lVar5 == 0) ||
      (FUN_14308fb00(lVar5,1,*(undefined1 *)(param_1 + 0x180)), *(longlong *)(param_1 + 0x220) == 0)
      ) || (*(longlong *)(param_1 + 0x228) == 0)) goto LAB_1412a0862;
  plVar8 = (longlong *)0x0;
  piVar1 = (int *)(*(longlong *)(param_1 + 0x228) + 8);
  LOCK();
  iVar4 = *piVar1;
  if (iVar4 == 0) {
    *piVar1 = 0;
    iVar4 = 0;
  }
  UNLOCK();
  if (iVar4 < 1) goto LAB_1412a0862;
  if (*(char *)(param_1 + 0x218) == '\0') {
    local_20 = *(longlong *)(param_1 + 0x228);
    local_28 = 0;
    if (local_20 != 0) {
      LOCK();
      iVar4 = *(int *)(local_20 + 8);
      bVar9 = iVar4 == 0;
      if (bVar9) {
        *(int *)(local_20 + 8) = 0;
        iVar4 = 0;
      }
      UNLOCK();
      while (!bVar9) {
        LOCK();
        bVar9 = iVar4 == *(int *)(local_20 + 8);
        if (bVar9) {
          *(int *)(local_20 + 8) = iVar4 + 1;
        }
        UNLOCK();
        if (bVar9) {
          if (local_20 != 0) {
            local_28 = *(undefined8 *)(param_1 + 0x220);
          }
          goto LAB_1412a0850;
        }
        LOCK();
        iVar4 = *(int *)(local_20 + 8);
        bVar9 = iVar4 == 0;
        if (bVar9) {
          *(int *)(local_20 + 8) = 0;
          iVar4 = 0;
        }
        UNLOCK();
      }
      local_20 = 0;
    }
LAB_1412a0850:
    FUN_143090ac0(lVar5,&local_28);
    goto LAB_1412a0862;
  }
  plVar2 = *(longlong **)(param_1 + 0x228);
  plVar7 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)plVar2[1];
    bVar9 = iVar4 == 0;
    if (bVar9) {
      *(int *)(plVar2 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (plVar7 = plVar8, !bVar9) {
      LOCK();
      bVar9 = iVar4 == (int)plVar2[1];
      if (bVar9) {
        *(int *)(plVar2 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar9) {
        plVar7 = plVar2;
        if ((plVar2 != (longlong *)0x0) &&
           (plVar3 = *(longlong **)(param_1 + 0x220), plVar8 = (longlong *)0x0,
           plVar3 != (longlong *)0x0)) {
          lVar5 = plVar3[1];
          lVar6 = FUN_142e219b0();
          goto joined_r0x0001412a0795;
        }
        break;
      }
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar9 = iVar4 == 0;
      if (bVar9) {
        *(int *)(plVar2 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
    }
  }
  goto LAB_1412a07ad;
joined_r0x0001412a0795:
  if (lVar5 == 0) goto LAB_1412a07a5;
  if (lVar5 == lVar6) {
    bVar9 = true;
    goto LAB_1412a07a7;
  }
  lVar5 = *(longlong *)(lVar5 + 0x30);
  goto joined_r0x0001412a0795;
LAB_1412a07a5:
  bVar9 = false;
LAB_1412a07a7:
  if (bVar9) {
    plVar8 = plVar3;
  }
LAB_1412a07ad:
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar7 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  if (plVar8 != (longlong *)0x0) {
    FUN_142c7dff0(plVar8);
  }
LAB_1412a0862:
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x1d0,0);
  return;
}



// FUNCTION 1412a0880 FUN_1412a0880 body=92 status=ok
// SIG undefined FUN_1412a0880(void)

bool FUN_1412a0880(longlong *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x460))();
  if (cVar1 != '\0') {
    return true;
  }
  iVar2 = (**(code **)(*param_1 + 0x448))(param_1);
  if (param_2 == 0) {
    return 0 < iVar2;
  }
  return param_2 <= iVar2;
}



// FUNCTION 1412a08e0 FUN_1412a08e0 body=64 status=ok
// SIG undefined FUN_1412a08e0(void)

undefined8 FUN_1412a08e0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  
  if ((((*(byte *)(param_1 + 0x1d4) & 1) != 0) && (*(longlong *)(param_1 + 0x118) != 0)) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x118) + 0x150), plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x780))();
    if (cVar2 == '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1412a0920 FUN_1412a0920 body=109 status=ok
// SIG undefined FUN_1412a0920(void)

bool FUN_1412a0920(longlong *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  if (param_2 == 0) {
    param_2 = 1;
  }
  if (0 < *(int *)((longlong)param_1 + 0x1bc)) {
    return param_2 <= (int)param_1[0x39];
  }
  cVar1 = (**(code **)(*param_1 + 0x460))();
  if (cVar1 == '\0') {
    iVar2 = (**(code **)(*param_1 + 0x448))(param_1);
    if (iVar2 < param_2) {
      return false;
    }
  }
  return true;
}



// FUNCTION 1412a09a0 FUN_1412a09a0 body=767 status=ok
// SIG undefined FUN_1412a09a0(void)

void FUN_1412a09a0(longlong *param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  byte bVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  undefined8 local_res8;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong local_48;
  undefined1 local_40;
  byte local_3f;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  if ((*(byte *)(param_1 + 0x77) & 4) != 0) {
    bVar3 = *(byte *)((longlong)param_1 + 0x39c);
    if ((bVar3 & 1) != 0) {
      FWeakObjectPtr::operator=(&local_68,0);
      local_60 = 0;
      puVar5 = (undefined8 *)FName::FName(&local_res8,L"OnAmmoChanged",1);
      FWeakObjectPtr::operator=(&local_68,param_1);
      local_60 = *puVar5;
      local_58 = local_68;
      local_54 = local_64;
      local_50 = local_60;
      uVar6 = FUN_14309ed90(param_1);
      FUN_143093f70(uVar6,&local_58);
      bVar3 = *(byte *)((longlong)param_1 + 0x39c);
    }
    if (((bVar3 & 2) != 0) && (param_1[0x79] != 0)) {
      *(undefined8 *)(param_1[0x79] + 0x338) = 0;
      bVar3 = *(byte *)((longlong)param_1 + 0x39c);
      param_1[0x79] = 0;
    }
    if ((bVar3 & 4) != 0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(L"&UWeaponScopeComponent::OnTargetLockChange",L"::");
      pwVar2 = (wchar_t *)0x0;
      while (pwVar1 = pwVar7, pwVar1 != (wchar_t *)0x0) {
        pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
        pwVar2 = pwVar1;
      }
      FName::FName(&local_res8,pwVar2 + 2,1);
      uVar6 = local_res8;
      lVar8 = FUN_14309ed90(param_1);
      TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar8 + 0x560,param_1,uVar6);
      bVar3 = *(byte *)((longlong)param_1 + 0x39c);
    }
    if (((bVar3 & 8) != 0) && (param_1[0x7a] != 0)) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(L"&UWeaponScopeComponent::OnHeatChanged",L"::");
      pwVar2 = (wchar_t *)0x0;
      while (pwVar1 = pwVar7, pwVar1 != (wchar_t *)0x0) {
        pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
        pwVar2 = pwVar1;
      }
      FName::FName(&local_res8,pwVar2 + 2,1);
      TMulticastScriptDelegate<FWeakObjectPtr>::Remove(param_1[0x7a] + 0x208,param_1,local_res8);
      param_1[0x7a] = 0;
    }
    param_1[0x7b] = 0;
    if (((param_1[0x71] != 0) && (cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x76), cVar4 != '\0'))
       && (lVar8 = FWeakObjectPtr::Get(param_1 + 0x76), lVar8 != 0)) {
      local_res8 = 0;
      FUN_142d9dd60(lVar8,param_1[0x71],0,0);
      if (param_1[0x72] != 0) {
        local_3f = local_3f & 0xfe;
        local_3c = 0x41800000;
        local_34 = 0x42c80000;
        local_38 = 0x41100000;
        local_30 = 4;
        local_28 = 0;
        local_20 = 0;
        local_40 = 0x6f;
        local_48 = param_1[0x72];
        FUN_142db7ff0(lVar8,&local_48);
        FUN_1412aef70(param_1,param_1[0x72]);
        FUN_1412aeb30(param_1,0,1);
      }
      FWeakObjectPtr::operator=(&local_res8,0);
      *(undefined4 *)(param_1 + 0x76) = (undefined4)local_res8;
      *(undefined4 *)((longlong)param_1 + 0x3b4) = local_res8._4_4_;
    }
    cVar4 = UActorComponent::IsComponentTickEnabled(param_1);
    if ((cVar4 != '\0') && (cVar4 = (**(code **)(*param_1 + 0x458))(param_1), cVar4 == '\0')) {
      (**(code **)(*param_1 + 0x358))(param_1,0);
    }
    *(byte *)(param_1 + 0x77) = *(byte *)(param_1 + 0x77) & 0xfb;
  }
  return;
}



// FUNCTION 1412a0e00 FUN_1412a0e00 body=1864 status=ok
// SIG undefined FUN_1412a0e00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1412a0e00(longlong param_1)

{
  byte *pbVar1;
  float *pfVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined2 *puVar11;
  longlong lVar12;
  undefined2 *puVar13;
  longlong lVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  uint uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 local_res8 [8];
  ulonglong in_stack_ffffffffffffffa8;
  ulonglong uVar21;
  ulonglong uVar22;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_28 [16];
  
  lVar3 = *(longlong *)(param_1 + 0x968);
  if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x40) != 0)) {
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0x970) + 0x24d);
    *pbVar1 = *pbVar1 ^ (*(char *)(lVar3 + 0x55) * '\x02' ^
                        *(byte *)(*(longlong *)(param_1 + 0x970) + 0x24d)) & 2;
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0x970) + 0x2ee);
    *pbVar1 = *pbVar1 ^ (*(byte *)(*(longlong *)(param_1 + 0x968) + 0x54) ^
                        *(byte *)(*(longlong *)(param_1 + 0x970) + 0x2ee)) & 1;
    (**(code **)(**(longlong **)(param_1 + 0x970) + 0x930))
              (*(longlong **)(param_1 + 0x970),
               *(undefined8 *)(*(longlong *)(param_1 + 0x968) + 0x40),1);
    FUN_1423b9af0(*(undefined8 *)(param_1 + 0x970),0);
    lVar3 = *(longlong *)(param_1 + 0x968);
    lVar14 = 0;
    lVar12 = lVar14;
    if (*(longlong *)(lVar3 + 0xd8) != 0) {
      lVar8 = FUN_1428eccf0();
      lVar3 = *(longlong *)(lVar3 + 0xd8);
      for (lVar4 = lVar3; (lVar12 = lVar14, lVar4 != 0 && (lVar12 = lVar3, lVar4 != lVar8));
          lVar4 = *(longlong *)(lVar4 + 0x30)) {
      }
    }
    FUN_1423b4b50(*(undefined8 *)(param_1 + 0x970),lVar12);
    (**(code **)(**(longlong **)(param_1 + 0x970) + 0x358))(*(longlong **)(param_1 + 0x970),1);
    local_48 = *(undefined8 *)(*(longlong *)(param_1 + 0x968) + 0x48);
    uStack_40 = CONCAT44(uStack_40._4_4_,*(undefined4 *)(*(longlong *)(param_1 + 0x968) + 0x50));
    (**(code **)(**(longlong **)(param_1 + 0x970) + 0x3f8))
              (*(longlong **)(param_1 + 0x970),&local_48);
    if ((*(char *)(*(longlong *)(param_1 + 0x968) + 200) == '\0') ||
       (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x968) + 0xd0), lVar3 == 0)) {
      (**(code **)(**(longlong **)(param_1 + 0x970) + 0x638))(*(longlong **)(param_1 + 0x970),0);
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0x970) + 0x928))
                (*(longlong **)(param_1 + 0x970),lVar3,0);
      (**(code **)(**(longlong **)(param_1 + 0x970) + 0x638))(*(longlong **)(param_1 + 0x970),1);
      (**(code **)(**(longlong **)(param_1 + 0x970) + 0x648))(*(longlong **)(param_1 + 0x970),6);
      (**(code **)(**(longlong **)(param_1 + 0x970) + 0x830))(*(longlong **)(param_1 + 0x970),2);
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x970) + 0x303) = 0;
    lVar3 = *(longlong *)(param_1 + 0x968);
    if (*(char *)(lVar3 + 0x56) != '\0') {
      puVar13 = &DAT_143f3eda8;
      if (*(int *)(lVar3 + 0x68) == 0) {
        puVar11 = &DAT_143f3eda8;
      }
      else {
        puVar11 = *(undefined2 **)(lVar3 + 0x60);
      }
      puVar9 = (undefined8 *)FName::FName(local_res8,puVar11,1);
      uVar22 = 0;
      uVar10 = FUN_140b149e0(param_1,*puVar9,0,0,in_stack_ffffffffffffffa8 & 0xffffffffffffff00,0);
      *(undefined8 *)(param_1 + 0x980) = uVar10;
      FUN_1423511e0(uVar10);
      (**(code **)(**(longlong **)(param_1 + 0x980) + 0x358))(*(longlong **)(param_1 + 0x980),1);
      FUN_142382f60(*(undefined8 *)(param_1 + 0x980),*(undefined8 *)(param_1 + 0x970),&DAT_146532184
                    ,*(undefined8 *)(*(longlong *)(param_1 + 0x968) + 0x58));
      lVar3 = *(longlong *)(param_1 + 0x980);
      local_38 = *(undefined8 *)(*(longlong *)(param_1 + 0x968) + 0x84);
      local_30 = *(undefined4 *)(*(longlong *)(param_1 + 0x968) + 0x8c);
      pfVar2 = (float *)(lVar3 + 0x280);
      if (((*(float *)(lVar3 + 0x1f8) != *pfVar2) ||
          (*(float *)(lVar3 + 0x1fc) != *(float *)(lVar3 + 0x284))) ||
         (*(float *)(lVar3 + 0x200) != *(float *)(lVar3 + 0x288))) {
        local_48 = *(undefined8 *)*(undefined1 (*) [12])(lVar3 + 0x1f8);
        auVar15._12_4_ = 0;
        auVar15._0_12_ = *(undefined1 (*) [12])(lVar3 + 0x1f8);
        fVar5 = (float)DAT_146877b40;
        fVar6 = DAT_146877b40._4_4_;
        fVar7 = DAT_146877b40._8_4_;
        auVar15 = divps(auVar15,_DAT_146877b40);
        fVar18 = (float)local_48 - (float)(int)auVar15._0_4_ * fVar5;
        fVar19 = (float)((ulonglong)local_48 >> 0x20) - (float)(int)auVar15._4_4_ * fVar6;
        fVar20 = *(float *)(lVar3 + 0x200) - (float)(int)auVar15._8_4_ * fVar7;
        fVar18 = (float)(((uint)(fVar18 + fVar5) ^ (uint)fVar18) & -(uint)(0.0 <= fVar18) ^
                        (uint)(fVar18 + fVar5));
        fVar19 = (float)(((uint)(fVar19 + fVar6) ^ (uint)fVar19) & -(uint)(0.0 <= fVar19) ^
                        (uint)(fVar19 + fVar6));
        fVar20 = (float)(((uint)(fVar20 + fVar7) ^ (uint)fVar20) & -(uint)(0.0 <= fVar20) ^
                        (uint)(fVar20 + fVar7));
        uVar17 = ((uint)(fVar20 - fVar7) ^ (uint)fVar20) & -(uint)(fRam0000000146877b38 < fVar20) ^
                 (uint)fVar20;
        uStack_40 = CONCAT44(uStack_40._4_4_,uVar17);
        *(ulonglong *)pfVar2 =
             CONCAT44(((uint)(fVar19 - fVar6) ^ (uint)fVar19) &
                      -(uint)(fRam0000000146877b34 < fVar19) ^ (uint)fVar19,
                      ((uint)(fVar18 - fVar5) ^ (uint)fVar18) & -(uint)(_DAT_146877b30 < fVar18) ^
                      (uint)fVar18);
        *(uint *)(lVar3 + 0x288) = uVar17;
        puVar9 = (undefined8 *)FRotator::Quaternion(pfVar2,local_28);
        uVar10 = puVar9[1];
        *(undefined8 *)(lVar3 + 0x270) = *puVar9;
        *(undefined8 *)(lVar3 + 0x278) = uVar10;
      }
      local_48 = *(undefined8 *)(lVar3 + 0x270);
      uStack_40 = *(undefined8 *)(lVar3 + 0x278);
      uVar21 = 0;
      FUN_142397be0(lVar3,&local_38,&local_48,0,0,uVar22 & 0xffffffffffffff00);
      local_38 = *(undefined8 *)(*(longlong *)(param_1 + 0x968) + 0x78);
      local_30 = *(undefined4 *)(*(longlong *)(param_1 + 0x968) + 0x80);
      (**(code **)(**(longlong **)(param_1 + 0x980) + 0x3f8))
                (*(longlong **)(param_1 + 0x980),&local_38);
      pbVar1 = (byte *)(*(longlong *)(param_1 + 0x980) + 0x24d);
      *pbVar1 = *pbVar1 ^ (*(char *)(*(longlong *)(param_1 + 0x968) + 0x57) * '\x02' ^
                          *(byte *)(*(longlong *)(param_1 + 0x980) + 0x24d)) & 2;
      pbVar1 = (byte *)(*(longlong *)(param_1 + 0x980) + 0x2ee);
      *pbVar1 = *pbVar1 ^ (*(byte *)(*(longlong *)(param_1 + 0x968) + 0x54) ^
                          *(byte *)(*(longlong *)(param_1 + 0x980) + 0x2ee)) & 1;
      FUN_14222b990(param_1,*(undefined8 *)(param_1 + 0x980));
      (**(code **)(**(longlong **)(param_1 + 0x980) + 0x930))
                (*(longlong **)(param_1 + 0x980),
                 *(undefined8 *)(*(longlong *)(param_1 + 0x968) + 0x70),1);
      FUN_1423b9af0(*(undefined8 *)(param_1 + 0x980),0);
      lVar3 = *(longlong *)(param_1 + 0x968);
      lVar12 = lVar14;
      if (*(longlong *)(lVar3 + 0x100) != 0) {
        lVar8 = FUN_1428eccf0();
        lVar3 = *(longlong *)(lVar3 + 0x100);
        for (lVar4 = lVar3; (lVar12 = lVar14, lVar4 != 0 && (lVar12 = lVar3, lVar4 != lVar8));
            lVar4 = *(longlong *)(lVar4 + 0x30)) {
        }
      }
      FUN_1423b4b50(*(undefined8 *)(param_1 + 0x980),lVar12);
      if (*(int *)(*(longlong *)(param_1 + 0x968) + 0xa0) != 0) {
        puVar13 = *(undefined2 **)(*(longlong *)(param_1 + 0x968) + 0x98);
      }
      puVar9 = (undefined8 *)FName::FName(local_res8,puVar13,1);
      uVar22 = 0;
      uVar10 = FUN_140b149e0(param_1,*puVar9,0,0,uVar21 & 0xffffffffffffff00,0);
      *(undefined8 *)(param_1 + 0x988) = uVar10;
      FUN_1423511e0(uVar10);
      (**(code **)(**(longlong **)(param_1 + 0x988) + 0x358))(*(longlong **)(param_1 + 0x988),1);
      FUN_142382f60(*(undefined8 *)(param_1 + 0x988),*(undefined8 *)(param_1 + 0x970),&DAT_146532184
                    ,*(undefined8 *)(*(longlong *)(param_1 + 0x968) + 0x90));
      lVar3 = *(longlong *)(param_1 + 0x988);
      local_38 = *(undefined8 *)(*(longlong *)(param_1 + 0x968) + 0xbc);
      local_30 = *(undefined4 *)(*(longlong *)(param_1 + 0x968) + 0xc4);
      pfVar2 = (float *)(lVar3 + 0x280);
      if (((*(float *)(lVar3 + 0x1f8) != *pfVar2) ||
          (*(float *)(lVar3 + 0x1fc) != *(float *)(lVar3 + 0x284))) ||
         (*(float *)(lVar3 + 0x200) != *(float *)(lVar3 + 0x288))) {
        local_48 = *(undefined8 *)*(undefined1 (*) [12])(lVar3 + 0x1f8);
        auVar16._12_4_ = 0;
        auVar16._0_12_ = *(undefined1 (*) [12])(lVar3 + 0x1f8);
        fVar5 = (float)DAT_146877b40;
        fVar6 = DAT_146877b40._4_4_;
        fVar7 = DAT_146877b40._8_4_;
        auVar15 = divps(auVar16,_DAT_146877b40);
        fVar18 = (float)local_48 - (float)(int)auVar15._0_4_ * fVar5;
        fVar19 = (float)((ulonglong)local_48 >> 0x20) - (float)(int)auVar15._4_4_ * fVar6;
        fVar20 = *(float *)(lVar3 + 0x200) - (float)(int)auVar15._8_4_ * fVar7;
        fVar18 = (float)(((uint)(fVar18 + fVar5) ^ (uint)fVar18) & -(uint)(0.0 <= fVar18) ^
                        (uint)(fVar18 + fVar5));
        fVar19 = (float)(((uint)(fVar19 + fVar6) ^ (uint)fVar19) & -(uint)(0.0 <= fVar19) ^
                        (uint)(fVar19 + fVar6));
        fVar20 = (float)(((uint)(fVar20 + fVar7) ^ (uint)fVar20) & -(uint)(0.0 <= fVar20) ^
                        (uint)(fVar20 + fVar7));
        uVar17 = ((uint)(fVar20 - fVar7) ^ (uint)fVar20) & -(uint)(fRam0000000146877b38 < fVar20) ^
                 (uint)fVar20;
        uStack_40 = CONCAT44(uStack_40._4_4_,uVar17);
        *(ulonglong *)pfVar2 =
             CONCAT44(((uint)(fVar19 - fVar6) ^ (uint)fVar19) &
                      -(uint)(fRam0000000146877b34 < fVar19) ^ (uint)fVar19,
                      ((uint)(fVar18 - fVar5) ^ (uint)fVar18) & -(uint)(_DAT_146877b30 < fVar18) ^
                      (uint)fVar18);
        *(uint *)(lVar3 + 0x288) = uVar17;
        puVar9 = (undefined8 *)FRotator::Quaternion(pfVar2,local_28);
        uVar10 = puVar9[1];
        *(undefined8 *)(lVar3 + 0x270) = *puVar9;
        *(undefined8 *)(lVar3 + 0x278) = uVar10;
      }
      local_48 = *(undefined8 *)(lVar3 + 0x270);
      uStack_40 = *(undefined8 *)(lVar3 + 0x278);
      FUN_142397be0(lVar3,&local_38,&local_48,0,0,uVar22 & 0xffffffffffffff00);
      local_38 = *(undefined8 *)(*(longlong *)(param_1 + 0x968) + 0xb0);
      local_30 = *(undefined4 *)(*(longlong *)(param_1 + 0x968) + 0xb8);
      (**(code **)(**(longlong **)(param_1 + 0x988) + 0x3f8))
                (*(longlong **)(param_1 + 0x988),&local_38);
      pbVar1 = (byte *)(*(longlong *)(param_1 + 0x988) + 0x24d);
      *pbVar1 = *pbVar1 ^ (*(char *)(*(longlong *)(param_1 + 0x968) + 0x57) * '\x02' ^
                          *(byte *)(*(longlong *)(param_1 + 0x988) + 0x24d)) & 2;
      pbVar1 = (byte *)(*(longlong *)(param_1 + 0x988) + 0x2ee);
      *pbVar1 = *pbVar1 ^ (*(byte *)(*(longlong *)(param_1 + 0x968) + 0x54) ^
                          *(byte *)(*(longlong *)(param_1 + 0x988) + 0x2ee)) & 1;
      FUN_14222b990(param_1,*(undefined8 *)(param_1 + 0x988));
      (**(code **)(**(longlong **)(param_1 + 0x988) + 0x930))
                (*(longlong **)(param_1 + 0x988),
                 *(undefined8 *)(*(longlong *)(param_1 + 0x968) + 0xa8),1);
      FUN_1423b9af0(*(undefined8 *)(param_1 + 0x988),0);
      lVar3 = *(longlong *)(param_1 + 0x968);
      lVar12 = lVar14;
      if (*(longlong *)(lVar3 + 0x100) != 0) {
        lVar8 = FUN_1428eccf0();
        lVar3 = *(longlong *)(lVar3 + 0x100);
        for (lVar4 = lVar3; (lVar12 = lVar14, lVar4 != 0 && (lVar12 = lVar3, lVar4 != lVar8));
            lVar4 = *(longlong *)(lVar4 + 0x30)) {
        }
      }
      FUN_1423b4b50(*(undefined8 *)(param_1 + 0x988),lVar12);
    }
  }
  return;
}



// FUNCTION 1412a1550 FUN_1412a1550 body=1295 status=ok
// SIG undefined FUN_1412a1550(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1412a1550(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  char cVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined4 uVar13;
  undefined1 auStack_1d8 [32];
  undefined4 local_1b8;
  undefined8 local_1b0;
  undefined1 local_1a8;
  undefined8 local_1a0;
  undefined1 local_198;
  undefined4 *local_188;
  ulonglong *puStack_180;
  undefined8 local_178;
  undefined8 local_170;
  longlong local_168;
  undefined8 local_160;
  longlong *plStack_158;
  undefined1 local_150 [16];
  undefined1 local_140 [8];
  longlong *local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a0 [16];
  undefined1 local_90 [24];
  undefined4 local_78 [4];
  undefined1 local_68 [8];
  longlong *local_60;
  char local_50;
  ulonglong local_48 [4];
  
  local_48[0] = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146878168) && (_Init_thread_header(&DAT_146878168), DAT_146878168 == -1))
  {
    FName::FName(&DAT_146878160,L"Secondary",1);
    _Init_thread_footer(&DAT_146878168);
  }
  plVar3 = (longlong *)(param_1 + 0x1d0);
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  if (*(int *)(param_1 + 0x1dc) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar3,0);
  }
  cVar7 = FWeakObjectPtr::IsValid(&DAT_146877e98);
  if ((cVar7 != '\0') && (lVar8 = FWeakObjectPtr::Get(&DAT_146877e98), lVar8 != 0)) {
    if (0 < *(int *)(param_1 + 0x278)) {
      local_178 = 0;
      uVar9 = GetTransientPackage();
      local_188 = (undefined4 *)0x0;
      FUN_1417846f0(uVar9,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
      uVar10 = FUN_142e7dd60();
      local_198 = 0;
      local_1a0 = 0;
      local_1a8 = 0;
      local_1b0 = 0;
      local_1b8 = 0;
      lVar11 = FUN_1417985e0(uVar10,uVar9,0,0x40);
      *(longlong *)(param_1 + 0x280) = lVar11;
      if (lVar11 != 0) {
        *(undefined4 *)(lVar11 + 0x4c) = 0x42b40000;
        local_160 = 0;
        plStack_158 = (longlong *)0x0;
        *(undefined8 *)(*(longlong *)(param_1 + 0x280) + 0x50) = DAT_146878160;
        lVar11 = FText::AsNumber(local_90,*(undefined4 *)(param_1 + 0x278),0,&local_160);
        puVar12 = (undefined8 *)FTextFormat::FTextFormat(local_a0,lVar8 + 0x30);
        local_78[0] = 4;
        FText::FText(local_68,lVar11);
        local_170 = *puVar12;
        local_188 = local_78;
        puStack_180 = local_48;
        local_168 = puVar12[1];
        local_50 = '\x01';
        if (local_168 != 0) {
          LOCK();
          *(int *)(local_168 + 8) = *(int *)(local_168 + 8) + 1;
          UNLOCK();
        }
        uVar9 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                TArray<FFormatArgumentValue,FDefaultAllocator>(local_150,&local_188);
        uVar9 = FText::Format(local_b8,&local_170,uVar9);
        FText::FText(local_140,uVar9);
        if (local_b0 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_b0 + 1;
          lVar6 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_b0)(local_b0);
            LOCK();
            piVar1 = (int *)((longlong)local_b0 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_b0 + 8))(local_b0,1);
            }
          }
        }
        TArray<FFormatArgumentValue,FDefaultAllocator>::
        ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_150);
        if ((local_50 != '\0') && (local_50 = '\0', local_60 != (longlong *)0x0)) {
          LOCK();
          plVar5 = local_60 + 1;
          lVar6 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar1 = (int *)((longlong)local_60 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_60 + 8))(local_60,1);
            }
          }
        }
        plVar5 = (longlong *)puVar12[1];
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar5 + 1;
          lVar6 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        plVar5 = *(longlong **)(lVar11 + 8);
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
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        FText::operator=(*(longlong *)(param_1 + 0x280) + 0x68,local_140);
        if (local_138 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_138 + 1;
          lVar11 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*local_138)(local_138);
            LOCK();
            piVar1 = (int *)((longlong)local_138 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_138 + 8))(local_138,1);
            }
          }
        }
        plVar5 = plStack_158;
        if (plStack_158 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_158 + 1;
          lVar11 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*plStack_158)(plStack_158);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        iVar4 = *(int *)(param_1 + 0x1d8);
        lVar11 = (longlong)iVar4;
        *(int *)(param_1 + 0x1d8) = iVar4 + 1;
        if (*(int *)(param_1 + 0x1dc) < iVar4 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar3,iVar4);
        }
        lVar6 = *plVar3;
        *(undefined8 *)(lVar6 + lVar11 * 0x10) = 0;
        *(undefined8 *)(lVar6 + 8 + lVar11 * 0x10) = 0;
        *(undefined8 *)(lVar6 + lVar11 * 0x10) = *(undefined8 *)(param_1 + 0x280);
      }
    }
    iVar4 = *(int *)(param_1 + 0x278);
    uVar9 = FRuntimeFloatCurve::GetRichCurve(lVar8 + 0xc0);
    uVar13 = FRichCurve::Eval(uVar9,(float)iVar4,0x3dcccccd);
    FUN_142c8c260(&local_128,uVar13);
    iVar4 = *(int *)(param_1 + 0x278);
    *(undefined8 *)(param_1 + 0x108) = local_128;
    *(undefined8 *)(param_1 + 0x110) = uStack_120;
    *(undefined8 *)(param_1 + 0x118) = local_118;
    *(undefined8 *)(param_1 + 0x120) = uStack_110;
    *(undefined4 *)(param_1 + 0x128) = local_108;
    *(undefined4 *)(param_1 + 300) = uStack_104;
    *(undefined4 *)(param_1 + 0x130) = uStack_100;
    *(undefined4 *)(param_1 + 0x134) = uStack_fc;
    *(undefined8 *)(param_1 + 0x138) = local_f8;
    uVar9 = FRuntimeFloatCurve::GetRichCurve(lVar8 + 0x138);
    uVar13 = FRichCurve::Eval(uVar9,(float)iVar4,0x3c23d70a);
    FUN_142c8c260(&local_f0,uVar13);
    *(undefined8 *)(param_1 + 0x140) = local_f0;
    *(undefined8 *)(param_1 + 0x148) = uStack_e8;
    *(undefined8 *)(param_1 + 0x150) = local_e0;
    *(undefined8 *)(param_1 + 0x158) = uStack_d8;
    *(undefined8 *)(param_1 + 0x160) = local_d0;
    *(undefined8 *)(param_1 + 0x168) = uStack_c8;
    *(undefined8 *)(param_1 + 0x170) = local_c0;
  }
  return;
}



// FUNCTION 1412a1a60 FUN_1412a1a60 body=214 status=ok
// SIG undefined FUN_1412a1a60(void)

void FUN_1412a1a60(longlong param_1,longlong param_2,undefined4 param_3,undefined1 param_4)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  plVar5 = *(longlong **)(param_2 + 0x30);
  plVar1 = plVar5 + *(int *)(param_2 + 0x38);
  for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
    lVar6 = *plVar5;
    if (lVar6 == 0) {
LAB_1412a1ade:
      lVar6 = 0;
    }
    else {
      lVar4 = FUN_14149c820();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_1412a1ade;
    }
    FWeakObjectPtr::operator=(param_1 + 0x440,lVar6);
    cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x440);
    if (cVar3 != '\0') break;
  }
  FUN_1430022a0(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1412a1b40 FUN_1412a1b40 body=570 status=ok
// SIG undefined FUN_1412a1b40(void)

void FUN_1412a1b40(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  int *piVar6;
  int *piVar7;
  undefined1 local_res10 [8];
  int local_38;
  int local_34;
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  
  FUN_143002410();
  lVar3 = FUN_14129ee40(param_1);
  if (lVar3 != 0) {
    *(longlong *)(lVar3 + 0x908) = param_1;
    iVar2 = FUN_14233f450(param_1);
    if (iVar2 == 3) {
      puVar4 = (undefined8 *)FName::FName(local_res10,L"NotifyWeaponEquipped",1);
      FWeakObjectPtr::operator=(param_1 + 0x400,param_1);
      local_20 = *puVar4;
      *(undefined8 *)(param_1 + 0x408) = local_20;
      local_28 = *(undefined4 *)(param_1 + 0x400);
      local_24 = *(undefined4 *)(param_1 + 0x404);
      FUN_143088610(lVar3,&local_28);
      puVar4 = (undefined8 *)FName::FName(local_res10,L"NotifyWeaponPutDown",1);
      FWeakObjectPtr::operator=(param_1 + 0x410,param_1);
      local_20 = *puVar4;
      *(undefined8 *)(param_1 + 0x418) = local_20;
      local_28 = *(undefined4 *)(param_1 + 0x410);
      local_24 = *(undefined4 *)(param_1 + 0x414);
      FUN_1430886d0(lVar3,&local_28);
      puVar4 = (undefined8 *)FName::FName(local_res10,L"NotifyWeaponAttached",1);
      FWeakObjectPtr::operator=(param_1 + 0x420,param_1);
      local_20 = *puVar4;
      *(undefined8 *)(param_1 + 0x428) = local_20;
      local_28 = *(undefined4 *)(param_1 + 0x420);
      local_24 = *(undefined4 *)(param_1 + 0x424);
      FUN_143088040(lVar3,&local_28);
    }
    FWeakObjectPtr::operator=(&local_38,0);
    local_30 = 0;
    plVar5 = (longlong *)FName::FName(local_res10,L"NotifyFirstPersonCreated",1);
    FWeakObjectPtr::operator=(&local_38,param_1);
    local_30 = *plVar5;
    plVar5 = (longlong *)(lVar3 + 0x520);
    piVar6 = (int *)*plVar5;
    iVar2 = *(int *)(lVar3 + 0x528);
    for (piVar7 = piVar6; piVar7 != piVar6 + (longlong)iVar2 * 4; piVar7 = piVar7 + 4) {
      if ((((*piVar7 == local_38) && (piVar7[1] == local_34)) ||
          ((cVar1 = FWeakObjectPtr::IsValid(piVar7), cVar1 == '\0' &&
           (cVar1 = FWeakObjectPtr::IsValid(&local_38), cVar1 == '\0')))) &&
         (*(longlong *)(piVar7 + 2) == local_30)) {
        if ((int)((longlong)piVar7 - (longlong)piVar6 >> 4) != -1) goto LAB_1412a1d5f;
        break;
      }
    }
    iVar2 = *(int *)(lVar3 + 0x528);
    *(int *)(lVar3 + 0x528) = iVar2 + 1;
    if (*(int *)(lVar3 + 0x52c) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar5,iVar2);
    }
    piVar6 = (int *)((longlong)iVar2 * 0x10 + *plVar5);
    *piVar6 = local_38;
    piVar6[1] = local_34;
    *(longlong *)(piVar6 + 2) = local_30;
LAB_1412a1d5f:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar5);
  }
  return;
}



// FUNCTION 1412a1d80 FUN_1412a1d80 body=763 status=ok
// SIG undefined FUN_1412a1d80(void)

longlong FUN_1412a1d80(longlong param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined2 *puVar12;
  longlong *plVar13;
  undefined2 *puVar14;
  longlong lVar15;
  longlong local_res8;
  undefined8 local_res18;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48 [2];
  longlong local_38 [2];
  
  lVar10 = 0;
  local_res18 = 0;
  local_res8 = param_3;
  if (param_3 == 0) {
    local_res8 = *(longlong *)(param_1 + 0x1b8);
  }
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x180);
  lVar15 = lVar10;
  if (cVar1 == '\0') {
    lVar7 = FWeakObjectPtr::IsValid(param_1 + 0x188);
    lVar5 = lVar10;
    if ((char)lVar7 != '\0') {
      return lVar7;
    }
  }
  else {
    uVar4 = FWeakObjectPtr::Get(param_1 + 0x180);
    lVar5 = FUN_14129f8a0(uVar4);
    if (lVar5 != 0) {
      lVar15 = *(longlong *)(lVar5 + 0x50);
    }
  }
  lVar7 = lVar10;
  if ((param_2 != 0) && (lVar6 = FUN_140d00450(param_2), lVar6 != 0)) {
    lVar7 = FUN_1424a1f70(lVar6,local_res8);
  }
  lVar6 = FUN_1412a8580(param_1);
  if (((((*(byte *)(param_1 + 200) & 0x20) != 0) && (lVar5 != 0)) &&
      (local_res18 = 0, lVar6 = lVar10, local_res8 != 0)) && (lVar15 != 0)) {
    cVar1 = APlayerController::IsPrimaryPlayer(param_2);
    lVar6 = operator_new(0x1f0);
    lVar5 = lVar10;
    if (lVar6 != 0) {
      lVar5 = FUN_1424945a0(lVar6,2 - (uint)(cVar1 != '\0'),param_4);
    }
    *(longlong *)(param_1 + 0x1c0) = lVar5;
    iVar2 = FUN_140cfc820(param_2);
    if (iVar2 == 0) {
      puVar8 = (undefined8 *)FUN_14167d0d0(local_38);
      if (*(int *)(puVar8 + 1) == 0) {
        puVar14 = &DAT_143f3eda8;
      }
      else {
        puVar14 = (undefined2 *)*puVar8;
      }
      FString::PrintfImpl(&local_58,L"%sSaveGames/Temp/",puVar14,0);
    }
    else {
      uVar3 = FUN_140cfc820(param_2);
      puVar8 = (undefined8 *)UKismetStringLibrary::Conv_IntToString(local_38,uVar3);
      puVar14 = &DAT_143f3eda8;
      if (*(int *)(puVar8 + 1) == 0) {
        puVar12 = &DAT_143f3eda8;
      }
      else {
        puVar12 = (undefined2 *)*puVar8;
      }
      puVar8 = (undefined8 *)FUN_14167d0d0(local_48);
      if (*(int *)(puVar8 + 1) != 0) {
        puVar14 = (undefined2 *)*puVar8;
      }
      FString::PrintfImpl(&local_58,L"%sSaveGames/%s/",puVar14,puVar12);
      if (local_48[0] != 0) {
        FMemory::Free();
      }
    }
    if (local_38[0] != 0) {
      FMemory::Free();
    }
    FUN_1424ac9f0(*(undefined8 *)(param_1 + 0x1c0),&local_58);
    if (local_58 != (undefined1 *)0x0) {
      FMemory::Free();
    }
    FUN_1424a25c0(*(undefined8 *)(param_1 + 0x1c0),local_res8,lVar15,lVar7);
    lVar15 = *(longlong *)(param_1 + 0x1c0);
    local_58 = &LAB_1412a4540;
    uStack_50 = 0;
    plVar13 = (longlong *)(lVar15 + 0x1d8);
    plVar9 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar9 != (longlong *)0x0) {
      *plVar9 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar9 + 1,param_1);
      *(undefined4 *)(plVar9 + 2) = (undefined4)local_58;
      *(undefined4 *)((longlong)plVar9 + 0x14) = local_58._4_4_;
      *(undefined4 *)(plVar9 + 3) = uStack_50;
      *(undefined4 *)((longlong)plVar9 + 0x1c) = uStack_4c;
      lVar10 = FDelegateHandle::GenerateNewID();
      plVar9[5] = lVar10;
      *plVar9 = (longlong)&PTR_FUN_143f77bd0;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar13,1);
      plVar11 = (longlong *)(**(code **)(*plVar9 + 0x20))(plVar9,&local_res18);
      iVar2 = *(int *)(lVar15 + 0x1e0);
      lVar10 = *plVar11;
      *(int *)(lVar15 + 0x1e0) = iVar2 + 1;
      if (*(int *)(lVar15 + 0x1e4) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar13,iVar2);
      }
      puVar8 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar13);
      *puVar8 = plVar9;
      *(undefined4 *)(puVar8 + 1) = 3;
    }
    *(longlong *)(param_1 + 0x1c8) = lVar10;
    lVar6 = FUN_141295620(param_1);
  }
  return lVar6;
}



// FUNCTION 1412a2080 FUN_1412a2080 body=675 status=ok
// SIG undefined FUN_1412a2080(void)

void FUN_1412a2080(longlong *param_1)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  byte bVar8;
  int iVar9;
  longlong *plVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  undefined8 local_res8;
  undefined8 local_48;
  longlong lStack_40;
  
  lVar16 = param_1[0x6a];
  if (lVar16 == 0) {
    lVar16 = param_1[0x23];
    param_1[0x6a] = lVar16;
    if (lVar16 == 0) {
      return;
    }
  }
  plVar10 = (longlong *)FUN_14129c640();
  if ((plVar10 == (longlong *)0x0) || (cVar7 = (**(code **)(*plVar10 + 0x768))(), cVar7 == '\0')) {
    bVar8 = 0;
  }
  else {
    bVar8 = 8;
  }
  bVar8 = *(byte *)(param_1 + 0x60) & 0xf7 | bVar8;
  *(byte *)(param_1 + 0x60) = bVar8 | 2;
  iVar9 = FUN_14233f450(param_1);
  if (iVar9 == 3) {
    uVar14 = 0;
    if ((param_1[0x23] != 0) &&
       (plVar10 = *(longlong **)(param_1[0x23] + 0x150), plVar10 != (longlong *)0x0)) {
      local_res8 = 0;
      puVar11 = (undefined4 *)FUN_142d61e00(&local_48,&local_res8,plVar10,param_1[0x30]);
      uVar4 = puVar11[1];
      uVar5 = puVar11[2];
      uVar6 = puVar11[3];
      *(undefined4 *)(param_1 + 0x45) = *puVar11;
      *(undefined4 *)((longlong)param_1 + 0x22c) = uVar4;
      *(undefined4 *)(param_1 + 0x46) = uVar5;
      *(undefined4 *)((longlong)param_1 + 0x234) = uVar6;
      param_1[0x47] = *(longlong *)(puVar11 + 4);
      (**(code **)(*param_1 + 0x260))(param_1);
      uVar12 = FUN_141477fa0();
      lVar13 = (**(code **)(*plVar10 + 0x628))(plVar10,uVar12);
      param_1[0x65] = lVar13;
    }
    if ((0 < (int)param_1[0x33]) && ((int)param_1[0x5f] == 0)) {
      lStack_40 = param_1[0x23];
      if (lStack_40 != 0) {
        uVar14 = *(undefined8 *)(lStack_40 + 0x150);
      }
      local_48 = uVar14;
      FUN_142c90ad0(param_1 + 0x32,param_1 + 0x5e,lStack_40,&local_48,0,&local_res8);
    }
    cVar7 = FUN_142d52a00(param_1 + 0x45);
    if (cVar7 != '\0') {
      fVar1 = *(float *)(param_1 + 0x68);
      uVar14 = FUN_142d52a20(param_1 + 0x45);
      uVar14 = FArchive::operator<<(uVar14);
      if (fVar1 <= 0.0) {
        FUN_142d6cbd0(uVar14);
      }
      else {
        FUN_142d63450(uVar14,(longlong)param_1 + 0x344);
        lVar13 = param_1[0x24];
        if (lVar13 == 0) {
          lVar13 = FUN_1423407b0(param_1);
        }
        fVar1 = *(float *)(lVar13 + 0x790);
        fVar2 = *(float *)(param_1 + 0x68);
        uVar14 = FUN_142d52a20(param_1 + 0x45);
        uVar14 = FArchive::operator<<(uVar14);
        FUN_142d73750(uVar14,fVar1 - fVar2);
        *(undefined4 *)(param_1 + 0x68) = 0xbf800000;
      }
    }
  }
  if ((~(bVar8 >> 1) & 1) != 0) {
    lVar13 = param_1[0x3e];
    lVar17 = (longlong)(int)param_1[0x3f] * 0x60 + lVar13;
    for (; lVar13 != lVar17; lVar13 = lVar13 + 0x60) {
      if (*(longlong *)(lVar13 + 8) == 0) {
        if (*(longlong *)(lVar13 + 0x10) != 0) {
          lVar15 = UDungeonEventListener::GetPrivateStaticClass();
          for (lVar3 = *(longlong *)(lVar13 + 0x10); lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)
              ) {
            if (lVar3 == lVar15) goto LAB_1412a22f0;
          }
        }
      }
      else {
LAB_1412a22f0:
        FUN_143088220(lVar16,lVar13);
      }
    }
    FUN_1414edc80(param_1);
  }
  return;
}


