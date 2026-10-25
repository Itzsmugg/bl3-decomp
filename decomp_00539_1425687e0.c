// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1425687e0 FUN_1425687e0 body=779 status=ok
// SIG undefined FUN_1425687e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1425687e0(longlong *param_1,undefined4 param_2,longlong *param_3)

{
  bool bVar1;
  bool bVar2;
  longlong *plVar3;
  undefined4 uVar4;
  longlong lVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  char cVar14;
  int *piVar15;
  undefined8 *puVar16;
  int iVar17;
  undefined1 auStack_b8 [32];
  char local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined8 *local_88;
  uint local_80;
  int local_7c;
  int *local_78;
  uint local_70;
  longlong *local_68;
  char local_60 [8];
  char *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  puVar9 = (undefined8 *)0x0;
  local_88 = (undefined8 *)0x0;
  local_7c = 0;
  local_90 = param_2;
  local_68 = param_3;
  uVar4 = FUN_1419ef5f0(param_2);
  local_58 = (char *)0x0;
  local_50 = 0;
  local_94 = uVar4;
  FUN_14256d550(param_1,local_60,param_2);
  FUN_141ec78f0(&local_78,param_2);
  uVar13 = (ulonglong)(int)local_70;
  pcVar7 = local_60;
  if (local_58 != (char *)0x0) {
    pcVar7 = local_58;
  }
  if (*pcVar7 != '\0') {
    for (piVar15 = local_78; piVar15 != local_78 + uVar13; piVar15 = piVar15 + 1) {
      if (*piVar15 == 0) {
        bVar1 = true;
        goto LAB_1425688a0;
      }
    }
  }
  bVar1 = false;
LAB_1425688a0:
  if ((*pcVar7 != '\0') || (bVar2 = false, pcVar7[1] != '\0')) {
    bVar2 = true;
  }
  if (bVar1) {
LAB_1425688dd:
    bVar1 = true;
  }
  else {
    if (pcVar7[1] != '\0') {
      for (piVar15 = local_78; piVar15 != local_78 + uVar13; piVar15 = piVar15 + 1) {
        if (*piVar15 == 1) goto LAB_1425688dd;
      }
    }
    bVar1 = false;
  }
  if ((bVar2) || (cVar14 = '\0', pcVar7[2] != '\0')) {
    cVar14 = '\x01';
  }
  piVar15 = local_78;
  puVar16 = puVar9;
  puVar11 = puVar9;
  puVar10 = puVar9;
  local_98 = cVar14;
  if (bVar1) {
LAB_14256891b:
    bVar1 = true;
  }
  else {
    if (pcVar7[2] != '\0') {
      for (piVar6 = local_78; piVar6 != local_78 + uVar13; piVar6 = piVar6 + 1) {
        if (*piVar6 == 2) goto LAB_14256891b;
      }
    }
    bVar1 = false;
  }
  do {
    iVar8 = (int)puVar9;
    if (cVar14 == '\0') {
      if (iVar8 == 1) {
LAB_142568935:
        lVar5 = (**(code **)(*param_1 + 0x500))(param_1);
        pcVar7 = local_60;
        if (local_58 != (char *)0x0) {
          pcVar7 = local_58;
        }
        cVar14 = pcVar7[(longlong)puVar11];
        *(undefined4 *)(lVar5 + 0x20) = uVar4;
        iVar17 = (int)puVar10;
        *(longlong **)(lVar5 + 0x28) = param_1;
        *(undefined8 *)(lVar5 + 0x30) = 0;
        *(int *)(lVar5 + 0x18) = iVar8;
        local_80 = iVar17 + 1;
        *(char *)(lVar5 + 0x1c) = cVar14;
        if (local_7c < (int)local_80) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_88,puVar10);
          puVar16 = local_88;
        }
        puVar10 = (undefined8 *)(ulonglong)local_80;
        puVar16[iVar17] = lVar5;
        uVar13 = (ulonglong)local_70;
        piVar15 = local_78;
        cVar14 = local_98;
        uVar4 = local_94;
      }
    }
    else {
      if ((!bVar1) || ((int)uVar13 < 1)) goto LAB_142568935;
      for (piVar6 = piVar15; piVar6 != piVar15 + (int)uVar13; piVar6 = piVar6 + 1) {
        if (*piVar6 == iVar8) goto LAB_142568935;
      }
    }
    plVar3 = local_68;
    puVar9 = (undefined8 *)(ulonglong)(iVar8 + 1U);
    puVar11 = (undefined8 *)((longlong)puVar11 + 1);
    if (2 < (int)(iVar8 + 1U)) {
      *(undefined4 *)(param_1 + 0x106) = 0;
      if (*(int *)((longlong)param_1 + 0x834) != 0) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x105,0);
      }
      (**(code **)(*param_1 + 0x3a0))(param_1,param_1 + 0x105);
      uVar4 = local_90;
      puVar9 = puVar16;
      puVar11 = puVar10;
      if (0 < (int)puVar10) {
        do {
          FUN_1425881e0(*puVar9,uVar4,0,0);
          puVar11 = (undefined8 *)((longlong)puVar11 + -1);
          puVar9 = puVar9 + 1;
          puVar12 = puVar16;
        } while (puVar11 != (undefined8 *)0x0);
        do {
          iVar8 = (int)plVar3[1];
          *(int *)(plVar3 + 1) = iVar8 + 1;
          if (*(int *)((longlong)plVar3 + 0xc) < iVar8 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar3,iVar8);
          }
          *(undefined8 *)(*plVar3 + (longlong)iVar8 * 8) = *puVar12;
          puVar10 = (undefined8 *)((longlong)puVar10 + -1);
          puVar12 = puVar12 + 1;
        } while (puVar10 != (undefined8 *)0x0);
      }
      if (local_78 != (int *)0x0) {
        FMemory::Free();
      }
      if (local_58 != (char *)0x0) {
        FMemory::Free();
      }
      if (puVar16 != (undefined8 *)0x0) {
        FMemory::Free(puVar16);
      }
      return;
    }
  } while( true );
}



// FUNCTION 142568af0 FUN_142568af0 body=851 status=ok
// SIG undefined FUN_142568af0(void)

void FUN_142568af0(longlong *param_1,char param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  uint uVar10;
  int iVar11;
  longlong *plVar12;
  ulonglong uVar13;
  int iVar14;
  bool bVar15;
  int local_res10 [2];
  uint local_res18 [2];
  uint local_res20;
  undefined4 local_64;
  int local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined2 *local_48;
  int local_40;
  
  if (param_2 != '\0') {
    (**(code **)(*param_1 + 0x518))();
  }
  FUN_1425797d0(param_1);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1468509e4) && (_Init_thread_header(&DAT_1468509e4), DAT_1468509e4 == -1))
  {
    uVar7 = FCommandLine::Get();
    DAT_1468509e0 = FParse::Param(uVar7);
    _Init_thread_footer(&DAT_1468509e4);
  }
  if (((DAT_1468b616c == '\0') || (DAT_1468b616d != '\0')) && (DAT_1468509e0 == '\0')) {
    uVar2 = UMaterialInterface::GetFeatureLevelsToCompileForRendering(param_1);
    lVar4 = FUN_1428742e0();
    plVar8 = (longlong *)0x0;
    local_58 = (longlong *)0x0;
    local_50 = 0;
    iVar14 = 0;
    plVar12 = plVar8;
    uVar1 = *(undefined4 *)(lVar4 + 0xc);
    if (uVar2 != 0) {
      do {
        local_64 = uVar1;
        local_res20 = -uVar2 & uVar2;
        iVar14 = 0x1f;
        if (local_res20 != 0) {
          for (; local_res20 >> iVar14 == 0; iVar14 = iVar14 + -1) {
          }
        }
        iVar3 = 0;
        if (local_res20 != 0) {
          iVar3 = iVar14;
        }
        uVar10 = uVar2 ^ local_res20;
        uVar1 = (&DAT_1464c9c48)[iVar3];
        iVar11 = 0;
        local_res18[0] = uVar2;
        if (((int)plVar12 < 0) && (local_50 = local_50 & 0xffffffff00000000, (int)plVar12 != 0)) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(&local_58,0);
          plVar12 = (longlong *)(local_50 >> 0x20);
          plVar8 = local_58;
          iVar11 = (uint)local_50;
        }
        local_60 = iVar3;
        TSet<TTuple<FObjectKey,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
        ::FindId(param_1 + 0xfa,local_res10,&local_64);
        if (local_res10[0] == -1) {
          lVar4 = 0;
        }
        else {
          lVar4 = param_1[0xfa] + (longlong)local_res10[0] * 0x18;
        }
        plVar5 = (longlong *)(lVar4 + 8);
        if (lVar4 == 0) {
          plVar5 = (longlong *)0x0;
        }
        if (plVar5 == (longlong *)0x0) {
          lVar4 = 0;
        }
        else {
          lVar4 = *plVar5;
        }
        uVar2 = iVar11 + 1;
        local_50 = CONCAT44(local_50._4_4_,uVar2);
        if ((int)plVar12 < (int)uVar2) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_58,iVar11);
          plVar12 = (longlong *)(local_50 >> 0x20);
          plVar8 = local_58;
          uVar2 = (uint)local_50;
        }
        uVar13 = (ulonglong)uVar2;
        iVar14 = (int)plVar12;
        plVar8[iVar11] = lVar4;
        *(undefined4 *)(param_1 + 0x106) = 0;
        if (*(int *)((longlong)param_1 + 0x834) != 0) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x105,0);
        }
        (**(code **)(*param_1 + 0x3a0))(param_1);
        plVar5 = plVar8;
        if (0 < (int)uVar2) {
          do {
            FUN_1425881e0(*plVar5,uVar1,1,0);
            uVar13 = uVar13 - 1;
            plVar5 = plVar5 + 1;
          } while (uVar13 != 0);
        }
        uVar2 = uVar10;
        uVar1 = local_64;
      } while (local_res20 != local_res18[0]);
    }
    (**(code **)(*DAT_146afd098 + 0x78))(DAT_146afd098,&local_48);
    if (1 < local_40) {
      puVar9 = &DAT_143f3eda8;
      if (local_40 != 0) {
        puVar9 = local_48;
      }
      puVar6 = (undefined8 *)FName::FName(local_res18,puVar9,1);
      iVar3 = FUN_141ed7950(*puVar6);
      if (iVar3 != 0x20) {
        local_50 = local_50 & 0xffffffff00000000;
        if ((iVar14 < 0) && (iVar14 != 0)) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(&local_58,0);
        }
        FUN_1425687e0(param_1,iVar3,&local_58);
        plVar8 = local_58;
        if (0 < (int)(uint)local_50) {
          uVar13 = local_50 & 0xffffffff;
          plVar12 = local_58;
          do {
            puVar6 = (undefined8 *)*plVar12;
            if (puVar6 != (undefined8 *)0x0) {
              (**(code **)*puVar6)(puVar6,1);
            }
            plVar12 = plVar12 + 1;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        bVar15 = local_50._4_4_ != 0;
        if (((longlong)local_50 < 0) && (local_50 = (ulonglong)local_50._4_4_ << 0x20, bVar15)) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(&local_58,0);
          plVar8 = local_58;
        }
      }
    }
    (**(code **)(*param_1 + 0x4d8))(param_1);
    if (local_48 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (plVar8 != (longlong *)0x0) {
      FMemory::Free(plVar8);
    }
  }
  return;
}



// FUNCTION 142568e50 FUN_142568e50 body=101 status=ok
// SIG undefined FUN_142568e50(void)

undefined8 FUN_142568e50(longlong param_1,byte param_2)

{
  char cVar1;
  uint uVar2;
  
  if (((*(byte *)(param_1 + 0x140) & 0xfc) == 0) && (*(byte *)(param_1 + 0x140) != 2)) {
    cVar1 = FUN_14256ec20();
    if ((cVar1 != '\0') || ((*(byte *)(param_1 + 0x708) & 0x40) != 0)) {
      return 1;
    }
    uVar2 = 1 << (param_2 & 0x1f);
    if ((uVar2 & *(uint *)(param_1 + 0x774)) == 0) {
      *(uint *)(param_1 + 0x774) = *(uint *)(param_1 + 0x774) | uVar2;
    }
  }
  return 0;
}



// FUNCTION 142568ec0 FUN_142568ec0 body=710 status=ok
// SIG undefined FUN_142568ec0(void)

undefined1 FUN_142568ec0(longlong *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined1 uVar8;
  DWORD DVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong **pplVar13;
  longlong *local_58 [2];
  undefined8 *local_48;
  longlong *local_40;
  undefined1 local_38 [32];
  
  if (((*(byte *)(param_1 + 0x28) & 0xfc) == 0) && (*(byte *)(param_1 + 0x28) != 2)) {
    cVar7 = FUN_14256ec20();
    if (cVar7 != '\0') {
      return 1;
    }
    if ((*(byte *)(param_1 + 0xe1) & 0x40) != 0) {
      return 1;
    }
    if ((*(uint *)((longlong)param_1 + 0x774) >> (param_2 & 0x1f) & 1) == 0) {
      cVar7 = FUN_1415ad720(&DAT_1468e2448);
      if (((cVar7 != '\0') || (DAT_1468c21ae == '\0')) ||
         (DVar9 = GetCurrentThreadId(), DVar9 == DAT_1468c21c0)) {
        uVar8 = (**(code **)(*param_1 + 0x2e8))(param_1,param_2);
        return uVar8;
      }
      local_48 = (undefined8 *)operator_new(0x10);
      if (local_48 == (undefined8 *)0x0) {
        local_48 = (undefined8 *)0x0;
      }
      else {
        *local_48 = param_1;
        *(uint *)(local_48 + 1) = param_2;
      }
      local_40 = (longlong *)operator_new(0x18);
      if (local_40 != (longlong *)0x0) {
        *(undefined4 *)(local_40 + 1) = 1;
        *local_40 = (longlong)&PTR_FUN_1451036e8;
        *(undefined4 *)((longlong)local_40 + 0xc) = 1;
        local_40[2] = (longlong)local_48;
      }
      SharedPointerInternals::EnableSharedFromThis(&local_48,local_48,local_48);
      plVar12 = local_40;
      puVar6 = local_48;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_40 + 1) = (int)local_40[1] + 1;
        UNLOCK();
      }
      plVar10 = (longlong *)FMemory::Realloc(0,0x30);
      local_58[0] = plVar10;
      if (plVar10 != (longlong *)0x0) {
        *plVar10 = (longlong)&PTR_GetPoolName_145103658;
        plVar10[1] = (longlong)puVar6;
        plVar10[2] = (longlong)plVar12;
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar12 + 0xc) = *(int *)((longlong)plVar12 + 0xc) + 1;
          UNLOCK();
        }
        plVar10[3] = (longlong)&LAB_142578ac0;
        lVar11 = FDelegateHandle::GenerateNewID();
        plVar10[5] = lVar11;
        *plVar10 = (longlong)&PTR_GetPoolName_1451036a0;
      }
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar10 = plVar12 + 1;
        lVar11 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        plVar10 = local_58[0];
        if ((int)lVar11 == 1) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar10 = local_58[0];
          if (iVar2 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
            plVar10 = local_58[0];
          }
        }
      }
      plVar12 = (longlong *)FUN_141d29000(local_38,0,0xff);
      lVar11 = *plVar12;
      pplVar13 = (longlong **)(lVar11 + 0x10);
      *pplVar13 = (longlong *)0x0;
      *(undefined4 *)(lVar11 + 0x18) = 0;
      if ((local_58 != pplVar13) && (plVar10 != (longlong *)0x0)) {
        (**(code **)(*plVar10 + 0x30))(plVar10,pplVar13);
      }
      *(undefined4 *)(lVar11 + 0x20) = 0x102;
      lVar11 = *plVar12;
      lVar5 = plVar12[2];
      lVar3 = plVar12[1];
      lVar4 = *(longlong *)(lVar11 + 0x30);
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
        UNLOCK();
        plVar10 = local_58[0];
      }
      FUN_1409691d0(lVar11,lVar3,(int)lVar5,1);
      if (lVar4 != 0) {
        LOCK();
        piVar1 = (int *)(lVar4 + 0x48);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar10 = local_58[0];
        if (iVar2 == 1) {
          FGraphEvent::Recycle(lVar4);
          plVar10 = local_58[0];
        }
      }
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x28))(plVar10,0);
        local_58[0] = (longlong *)FMemory::Realloc(plVar10,0,0);
        if (local_58[0] != (longlong *)0x0) {
          FMemory::Free(local_58[0]);
        }
      }
      plVar12 = local_40;
      if (local_40 == (longlong *)0x0) {
        return 0;
      }
      LOCK();
      plVar10 = local_40 + 1;
      lVar11 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar11 != 1) {
        return 0;
      }
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 != 1) {
        return 0;
      }
      (**(code **)(*plVar12 + 8))(plVar12,1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 142569190 FUN_142569190 body=161 status=ok
// SIG undefined FUN_142569190(void)

undefined8 FUN_142569190(longlong param_1,uint param_2,char param_3)

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
      FUN_142574e40(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142569240 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FGuid,FLightComponentMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FLightComponentMapBuildData,0>,FDefaultSetAllocator>
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



// FUNCTION 1425692f0 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FGuid,FMeshMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FMeshMapBuildData,0>,FDefaultSetAllocator>
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
      TSet<TTuple<FGuid,FExternalTextureRegistry::FExternalTextureEntry>,TDefaultMapHashableKeyFuncs<FGuid,FExternalTextureRegistry::FExternalTextureEntry,0>,FDefaultSetAllocator>
      ::Rehash(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1425693a0 FUN_1425693a0 body=161 status=ok
// SIG undefined FUN_1425693a0(void)

undefined8 FUN_1425693a0(longlong param_1,uint param_2,char param_3)

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
      FUN_142575300(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142569450 ConstructFLocalVertexFactoryShaderParameters body=63 status=ok
// SIG undefined ConstructFLocalVertexFactoryShaderParameters(void)

undefined8 * ConstructFLocalVertexFactoryShaderParameters(int param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined8 *)operator_new(0x10);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &PTR_FUN_1450d2670;
      *(undefined4 *)(puVar1 + 1) = 0;
      *(undefined2 *)((longlong)puVar1 + 0xc) = 0;
      *(undefined1 *)((longlong)puVar1 + 0xe) = 0;
      return puVar1;
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142569490 FUN_142569490 body=220 status=ok
// SIG undefined FUN_142569490(void)

undefined8 FUN_142569490(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (((param_2 != 0) && (param_2 != param_1)) &&
     (*(int *)(param_1 + 0x60) == *(int *)(param_2 + 0x60))) {
    lVar5 = 0;
    do {
      puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x40) + lVar5);
      puVar1 = (undefined8 *)(lVar5 + *(longlong *)(param_1 + 0x40));
      if (puVar1 != puVar4) {
        iVar2 = *(int *)(puVar4 + 1);
        _Src = (void *)*puVar4;
        *(int *)(puVar1 + 1) = iVar2;
        if ((iVar2 == 0) && (*(int *)((longlong)puVar1 + 0xc) == 0)) {
          *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
          _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 * 2);
        }
      }
      lVar5 = lVar5 + 0x10;
    } while (lVar5 < 0x40);
    uVar3 = *(undefined8 *)(param_2 + 0x58);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(param_1 + 0x58) = uVar3;
    return 1;
  }
  return 0;
}



// FUNCTION 142569570 FUN_142569570 body=94 status=ok
// SIG undefined FUN_142569570(void)

void FUN_142569570(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_145103658;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    lVar1 = *(longlong *)(param_1 + 0x10);
    puVar2[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_GetPoolName_1451036a0;
  }
  return;
}



// FUNCTION 1425695d0 FUN_1425695d0 body=464 status=ok
// SIG undefined FUN_1425695d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1425695d0(longlong *param_1,longlong param_2,longlong *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined4 *puVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88 [8];
  int local_68;
  int local_64;
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  iVar8 = 0;
  puVar9 = local_88;
  lVar10 = 0;
  local_58 = *(undefined8 *)(*(longlong *)(param_2 + 0x750) + 200);
  local_60 = *(undefined8 *)(*(longlong *)(param_2 + 0x750) + 0xd0);
  local_a8 = param_1;
  do {
    lVar12 = *(longlong *)(param_2 + 0x750);
    bVar1 = *(byte *)(lVar12 + 0xf0 + lVar10);
    if (((iVar8 < 0) || ((int)param_3[1] <= iVar8)) ||
       (lVar6 = *(longlong *)(*param_3 + lVar10 * 8), lVar6 == 0)) {
      lVar7 = *(longlong *)(lVar12 + 0xd8 + lVar10 * 8);
      iVar11 = -1;
    }
    else {
      lVar7 = *(longlong *)(lVar6 + 0x40);
      iVar11 = -(uint)(1 < *(uint *)(lVar6 + 0x54));
    }
    if (lVar7 == 0) {
      lVar6 = FUN_141ee2f20(bVar1);
      lVar12 = *(longlong *)(param_2 + 0x750);
      iVar11 = 0;
      lVar7 = *(longlong *)(lVar6 + 0x38);
    }
    if (iVar8 == 0) {
      lVar6 = (ulonglong)bVar1 * 0x10;
      uVar2 = *(undefined4 *)(lVar6 + 0x1465333c4);
      uVar3 = *(undefined4 *)(lVar6 + 0x1465333c8);
      uVar4 = *(undefined4 *)(lVar6 + 0x1465333cc);
      *puVar9 = *(undefined4 *)(&DAT_1465333c0 + lVar6);
      puVar9[1] = uVar2;
      puVar9[2] = uVar3;
      puVar9[3] = uVar4;
      local_68 = iVar11;
      local_50 = lVar7;
    }
    else if (iVar8 == 1) {
      lVar6 = (ulonglong)bVar1 * 0x10;
      uVar2 = *(undefined4 *)(lVar6 + 0x1465333c4);
      uVar3 = *(undefined4 *)(lVar6 + 0x1465333c8);
      uVar4 = *(undefined4 *)(lVar6 + 0x1465333cc);
      *puVar9 = *(undefined4 *)(&DAT_1465333c0 + lVar6);
      puVar9[1] = uVar2;
      puVar9[2] = uVar3;
      puVar9[3] = uVar4;
      local_64 = iVar11;
      local_48 = lVar7;
    }
    iVar8 = iVar8 + 1;
    lVar10 = lVar10 + 1;
    puVar9 = puVar9 + 4;
  } while (iVar8 < 2);
  uStack_b4 = *(undefined4 *)(lVar12 + 0xec);
  uStack_b0 = *(undefined4 *)(lVar12 + 0xe8);
  local_b8 = 0;
  uStack_ac = 0;
  local_c8 = 2;
  local_98 = 0;
  uStack_8c = 0;
  uStack_94 = uStack_b4;
  uStack_90 = uStack_b0;
  (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,&local_b8,&local_98,&DAT_146afcd88);
  plVar5 = local_a8;
  lVar10 = CONCAT44(uStack_b4,local_b8);
  *local_a8 = lVar10;
  if (lVar10 != 0) {
    LOCK();
    *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
    UNLOCK();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_b8);
  return plVar5;
}



// FUNCTION 1425697a0 FUN_1425697a0 body=244 status=ok
// SIG undefined FUN_1425697a0(void)

void FUN_1425697a0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146afd120) {
    _Init_thread_header(&DAT_146afd120);
    if (DAT_146afd120 == -1) {
      FName::FName(&DAT_146afd118,L"MapBuildDataRegistry",1);
      _Init_thread_footer(&DAT_146afd120);
    }
  }
  lVar1 = DAT_146afd118;
  uVar2 = UObjectBaseUtility::GetOutermost(param_1);
  if (lVar1 == 0) {
    FUN_1417846f0(uVar2,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  uVar3 = UMapBuildDataRegistry::GetPrivateStaticClass();
  uVar2 = FUN_1417985e0(uVar3,uVar2,lVar1,0,0,0,0,0,0);
  *(undefined8 *)(param_1 + 0x1f0) = uVar2;
  return;
}



// FUNCTION 1425698a0 Empty body=116 status=ok
// SIG undefined Empty(void)

void TArray<FMaterialResource,FDefaultAllocator>::Empty(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)*param_1;
  for (iVar2 = *(int *)(param_1 + 1); iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = &PTR_FUN_144eef6b8;
    FUN_14257f4c0(puVar1);
    puVar1 = puVar1 + 7;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  return;
}



// FUNCTION 142569920 FUN_142569920 body=181 status=ok
// SIG undefined FUN_142569920(void)

void FUN_142569920(longlong param_1,int param_2)

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
  cVar1 = FUN_142569190(param_1,param_2,1);
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



// FUNCTION 1425699e0 Empty body=202 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FGuid,FLightComponentMapBuildData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong param_1,int param_2)

{
  uint uVar1;
  longlong *local_38;
  undefined1 local_30 [4];
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_38,param_1);
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      if (*(longlong *)((longlong)local_1c * 0x90 + *local_38 + 0x68) != 0) {
        FMemory::Free();
      }
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<144,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar1 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)(param_1 + 0x2c) != uVar1) {
    *(uint *)(param_1 + 0x2c) = uVar1;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 0x10,0);
  }
  return;
}



// FUNCTION 142569ab0 Empty body=255 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FGuid,FMeshMapBuildData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  longlong *local_38;
  undefined1 local_30 [4];
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_38,param_1);
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      lVar3 = *local_38 + (longlong)local_1c * 0x48;
      if (*(longlong *)(*local_38 + 0x30 + (longlong)local_1c * 0x48) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar3 + 0x20) != 0) {
        FMemory::Free();
      }
      plVar4 = *(longlong **)(lVar3 + 0x18);
      if (plVar4 != (longlong *)0x0) {
        plVar1 = plVar4 + 3;
        *(int *)plVar1 = (int)*plVar1 + -1;
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar4 + 0x38))();
        }
      }
      plVar4 = *(longlong **)(lVar3 + 0x10);
      if (plVar4 != (longlong *)0x0) {
        piVar2 = (int *)((longlong)plVar4 + 0x1c);
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x38))();
        }
      }
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<72,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar5 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)(param_1 + 0x2c) != uVar5) {
    *(uint *)(param_1 + 0x2c) = uVar5;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 0x10,0);
  }
  return;
}



// FUNCTION 142569bb0 FUN_142569bb0 body=194 status=ok
// SIG undefined FUN_142569bb0(void)

void FUN_142569bb0(longlong param_1,int param_2)

{
  uint uVar1;
  longlong *local_38;
  undefined1 local_30 [4];
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_38,param_1);
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      FUN_142564070((longlong)local_1c * 0xe0 + 0x10 + *local_38);
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<224,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar1 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)(param_1 + 0x2c) != uVar1) {
    *(uint *)(param_1 + 0x2c) = uVar1;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 0x10,0);
  }
  return;
}



// FUNCTION 142569c80 EmptyLevelData body=1281 status=ok
// SIG undefined EmptyLevelData(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void UMapBuildDataRegistry::EmptyLevelData(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  int *piVar9;
  longlong lVar10;
  uint *puVar11;
  uint *puVar12;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  uint uStack_160;
  uint uStack_15c;
  undefined8 local_158;
  uint uStack_150;
  int iStack_14c;
  undefined1 local_148 [16];
  longlong *local_138;
  undefined2 local_130;
  undefined1 local_128 [8];
  longlong *local_120;
  uint uStack_118;
  uint uStack_114;
  uint *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  longlong local_e8 [2];
  uint local_d8 [4];
  uint *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  longlong local_a8;
  undefined4 local_a0;
  longlong local_98 [2];
  uint local_88 [4];
  uint *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  puVar12 = local_88;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  local_98[0] = 0;
  local_98[1] = 0;
  local_78 = (uint *)0x0;
  local_70 = 0;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_e8[0] = 0;
  local_e8[1] = 0;
  local_c8 = (uint *)0x0;
  local_c0 = 0;
  local_b8 = 0xffffffff;
  local_b4 = 0;
  local_a8 = 0;
  local_a0 = 0;
  FGenericPlatformMemory::MemswapGreaterThan8(param_1 + 0x80,local_98,0x50);
  FGenericPlatformMemory::MemswapGreaterThan8(param_1 + 0xd0,local_e8,0x50);
  local_168._0_4_ = 0;
  local_168._4_4_ = 1;
  local_158._4_4_ = 0;
  uStack_150 = 0;
  if ((int)local_70 != 0) {
    puVar11 = puVar12;
    if (local_78 != (uint *)0x0) {
      puVar11 = local_78;
    }
    uVar1 = *puVar11;
    local_168._0_4_ = 0;
    uStack_150 = 0;
    while (uVar1 == 0) {
      uStack_150 = uStack_150 + 0x20;
      if ((int)((int)local_70 + -1 + ((int)local_70 + -1 >> 0x1f & 0x1fU)) >> 5 <=
          (int)(uint)local_168) {
        local_158._4_4_ = (int)local_70;
        local_168._0_4_ = (uint)local_168 + 1;
        goto LAB_142569deb;
      }
      uVar1 = puVar11[(longlong)(int)(uint)local_168 + 1];
      local_168._0_4_ = (uint)local_168 + 1;
    }
    local_168._4_4_ = -uVar1 & uVar1;
    iVar8 = 0x1f;
    if (local_168._4_4_ != 0) {
      for (; local_168._4_4_ >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (local_168._4_4_ == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    local_158._4_4_ = (uStack_150 - iVar8) + 0x1f;
    if ((int)local_70 < local_158._4_4_) {
      local_158._4_4_ = (int)local_70;
    }
  }
LAB_142569deb:
  uStack_108 = CONCAT44(local_158._4_4_,0xffffffff);
  auVar4._8_4_ = uStack_150;
  auVar4._0_8_ = uStack_108;
  auVar4._12_4_ = iStack_14c;
  local_120 = local_98;
  plVar6 = local_98;
  local_f8._0_4_ = SUB84(plVar6,0);
  local_f8._4_4_ = (undefined4)((ulonglong)plVar6 >> 0x20);
  uStack_118 = (uint)local_168;
  uStack_114 = local_168._4_4_;
  local_138 = local_98;
  local_130 = 0;
  uStack_100 = auVar4._8_8_;
  uStack_160 = (uint)local_168;
  uStack_15c = local_168._4_4_;
  uStack_150 = 0xffffffff;
  iStack_14c = local_158._4_4_;
  local_148._8_4_ = (undefined4)local_f8;
  local_148._0_8_ = uStack_100;
  local_148._12_4_ = local_f8._4_4_;
  local_168 = local_120;
  puStack_110 = puVar12;
  if (local_158._4_4_ < (int)local_70) {
    do {
      iVar8 = iStack_14c;
      plVar7 = local_168;
      local_158 = puVar12;
      local_f8 = plVar6;
      if (param_2 == 0) {
LAB_142569ead:
        lVar10 = *(longlong *)((longlong)iVar8 * 0x20 + 0x10 + *plVar7);
        if (lVar10 != 0) {
          FPrecomputedLightVolumeData::~FPrecomputedLightVolumeData(lVar10);
          FMemory::operator_delete(lVar10,0x160);
        }
      }
      else {
        lVar10 = (longlong)iStack_14c;
        piVar9 = (int *)TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::FindId
                                  (param_2,local_128,*local_168 + lVar10 * 0x20);
        if (*piVar9 == -1) goto LAB_142569ead;
        lVar10 = *plVar7 + lVar10 * 0x20;
        TMapBase<FGuid,FPrecomputedLightVolumeData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FPrecomputedLightVolumeData_*,0>_>
        ::Emplace<FGuid_const_&,FPrecomputedLightVolumeData_*_const_&>
                  (param_1 + 0x80,lVar10,lVar10 + 0x10);
      }
      uStack_150 = uStack_150 & ~uStack_15c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_160);
      puVar12 = local_158;
      plVar6 = local_f8;
    } while (iStack_14c < (int)local_158[6]);
    if (((char)local_130 != '\0') && (local_130._1_1_ != '\0')) {
      TSet<TTuple<FUniqueObjectGuid,UObjectBase_const_*>,TDefaultMapHashableKeyFuncs<FUniqueObjectGuid,UObjectBase_const_*,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_138,(int)local_138[1] - *(int *)((longlong)local_138 + 0x34),1);
    }
  }
  puStack_110 = local_d8;
  local_168._0_4_ = 0;
  local_168._4_4_ = 1;
  local_158._4_4_ = 0;
  uStack_150 = 0;
  if ((int)local_c0 != 0) {
    puVar12 = local_d8;
    if (local_c8 != (uint *)0x0) {
      puVar12 = local_c8;
    }
    uVar1 = *puVar12;
    local_168._0_4_ = 0;
    uStack_150 = 0;
    while (uVar1 == 0) {
      uStack_150 = uStack_150 + 0x20;
      if ((int)((int)local_c0 + -1 + ((int)local_c0 + -1 >> 0x1f & 0x1fU)) >> 5 <=
          (int)(uint)local_168) {
        local_158._4_4_ = (int)local_c0;
        local_168._0_4_ = (uint)local_168 + 1;
        goto LAB_142569fea;
      }
      uVar1 = puVar12[(longlong)(int)(uint)local_168 + 1];
      local_168._0_4_ = (uint)local_168 + 1;
    }
    local_168._4_4_ = -uVar1 & uVar1;
    iVar8 = 0x1f;
    if (local_168._4_4_ != 0) {
      for (; local_168._4_4_ >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (local_168._4_4_ == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    local_158._4_4_ = (uStack_150 - iVar8) + 0x1f;
    if ((int)local_c0 < local_158._4_4_) {
      local_158._4_4_ = (int)local_c0;
    }
  }
LAB_142569fea:
  uStack_108 = CONCAT44(local_158._4_4_,0xffffffff);
  auVar5._8_4_ = uStack_150;
  auVar5._0_8_ = uStack_108;
  auVar5._12_4_ = iStack_14c;
  local_120 = local_e8;
  plVar6 = local_e8;
  local_f8._0_4_ = SUB84(plVar6,0);
  local_f8._4_4_ = (undefined4)((ulonglong)plVar6 >> 0x20);
  uStack_118 = (uint)local_168;
  uStack_114 = local_168._4_4_;
  local_138 = local_e8;
  local_130 = 0;
  uStack_100 = auVar5._8_8_;
  uStack_160 = (uint)local_168;
  uStack_15c = local_168._4_4_;
  uStack_150 = 0xffffffff;
  iStack_14c = local_158._4_4_;
  local_148._8_4_ = (undefined4)local_f8;
  local_148._0_8_ = uStack_100;
  local_148._12_4_ = local_f8._4_4_;
  bVar3 = local_158._4_4_ < (int)local_c0;
  local_168 = local_120;
  local_f8 = plVar6;
  local_158 = puStack_110;
  if (bVar3) {
    do {
      iVar8 = iStack_14c;
      plVar7 = local_168;
      local_f8 = plVar6;
      if (param_2 == 0) {
LAB_14256a0ad:
        puVar2 = *(undefined8 **)((longlong)iVar8 * 0x20 + 0x10 + *plVar7);
        if (puVar2 != (undefined8 *)0x0) {
          (**(code **)*puVar2)(puVar2,1);
        }
      }
      else {
        lVar10 = (longlong)iStack_14c;
        piVar9 = (int *)TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::FindId
                                  (param_2,local_128,*local_168 + lVar10 * 0x20);
        if (*piVar9 == -1) goto LAB_14256a0ad;
        lVar10 = *plVar7 + lVar10 * 0x20;
        TMapBase<FGuid,FPrecomputedLightVolumeData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FPrecomputedLightVolumeData_*,0>_>
        ::Emplace<FGuid_const_&,FPrecomputedLightVolumeData_*_const_&>
                  (param_1 + 0xd0,lVar10,lVar10 + 0x10);
      }
      uStack_150 = uStack_150 & ~uStack_15c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_160);
      plVar6 = local_f8;
    } while (iStack_14c < (int)local_158[6]);
    if (((char)local_130 != '\0') && (local_130._1_1_ != '\0')) {
      TSet<TTuple<FUniqueObjectGuid,UObjectBase_const_*>,TDefaultMapHashableKeyFuncs<FUniqueObjectGuid,UObjectBase_const_*,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_138,(int)local_138[1] - *(int *)((longlong)local_138 + 0x34),1);
    }
  }
  local_a0 = 0;
  if (local_a8 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (local_e8);
  local_50 = 0;
  if (local_58 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (local_98);
  return;
}



// FUNCTION 14256a190 Execute body=141 status=ok
// SIG undefined Execute(void)

void TBaseSPMethodDelegateInstance<0,`UMaterial::CheckMaterialUsage_Concurrent'::`10'::FCallSMU,1,TTypeWrapper<void>___cdecl(void)>
     ::Execute(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  plVar5 = (longlong *)0x0;
  plVar6 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)plVar2[1];
    bVar7 = iVar4 == 0;
    if (bVar7) {
      *(int *)(plVar2 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (plVar6 = plVar5, !bVar7) {
      LOCK();
      bVar7 = iVar4 == (int)plVar2[1];
      if (bVar7) {
        *(int *)(plVar2 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar7) {
        plVar6 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar5 = *(longlong **)(param_1 + 8);
        }
        break;
      }
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar7 = iVar4 == 0;
      if (bVar7) {
        *(int *)(plVar2 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
    }
  }
  (**(code **)(param_1 + 0x18))(plVar5);
  if (plVar6 != (longlong *)0x0) {
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
  return;
}



// FUNCTION 14256a220 ExecuteIfSafe body=277 status=ok
// SIG undefined ExecuteIfSafe(void)

undefined8
TBaseSPMethodDelegateInstance<0,`UMaterial::CheckMaterialUsage_Concurrent'::`10'::FCallSMU,1,void___cdecl(void)>
::ExecuteIfSafe(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  bool bVar9;
  
  plVar6 = *(longlong **)(param_1 + 0x10);
  plVar4 = (longlong *)0x0;
  plVar5 = plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    iVar3 = (int)plVar6[1];
    bVar9 = iVar3 == 0;
    if (bVar9) {
      *(int *)(plVar6 + 1) = 0;
      iVar3 = 0;
    }
    UNLOCK();
    while (plVar5 = plVar4, !bVar9) {
      LOCK();
      bVar9 = iVar3 == (int)plVar6[1];
      if (bVar9) {
        *(int *)(plVar6 + 1) = iVar3 + 1;
      }
      UNLOCK();
      if (bVar9) {
        plVar5 = plVar6;
        if ((plVar6 != (longlong *)0x0) && (*(longlong *)(param_1 + 8) != 0)) {
          plVar5 = *(longlong **)(param_1 + 0x10);
          plVar8 = plVar5;
          if (plVar5 == (longlong *)0x0) goto LAB_14256a2f1;
          LOCK();
          iVar3 = (int)plVar5[1];
          bVar9 = iVar3 == 0;
          if (bVar9) {
            *(int *)(plVar5 + 1) = 0;
            iVar3 = 0;
          }
          UNLOCK();
          goto joined_r0x00014256a2c8;
        }
        break;
      }
      LOCK();
      iVar3 = (int)plVar6[1];
      bVar9 = iVar3 == 0;
      if (bVar9) {
        *(int *)(plVar6 + 1) = 0;
        iVar3 = 0;
      }
      UNLOCK();
    }
  }
  uVar7 = 0;
  plVar6 = plVar5;
LAB_14256a269:
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar6 + 1;
    lVar2 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
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
  return uVar7;
joined_r0x00014256a2c8:
  plVar8 = plVar4;
  if (bVar9) goto LAB_14256a2f1;
  LOCK();
  bVar9 = iVar3 == (int)plVar5[1];
  if (bVar9) {
    *(int *)(plVar5 + 1) = iVar3 + 1;
  }
  UNLOCK();
  if (bVar9) {
    plVar8 = plVar5;
    if (plVar5 != (longlong *)0x0) {
      plVar4 = *(longlong **)(param_1 + 8);
    }
    goto LAB_14256a2f1;
  }
  LOCK();
  iVar3 = (int)plVar5[1];
  bVar9 = iVar3 == 0;
  if (bVar9) {
    *(int *)(plVar5 + 1) = 0;
    iVar3 = 0;
  }
  UNLOCK();
  goto joined_r0x00014256a2c8;
LAB_14256a2f1:
  (**(code **)(param_1 + 0x18))(plVar4);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar8 + 1;
    lVar2 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  uVar7 = 1;
  goto LAB_14256a269;
}



// FUNCTION 14256a340 FUN_14256a340 body=276 status=ok
// SIG undefined FUN_14256a340(void)

void FUN_14256a340(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  lVar3 = param_1[2];
  if (lVar3 != 0) {
    FMaterialRenderProxy::~FMaterialRenderProxy(lVar3);
    FMemory::operator_delete(lVar3,0x140);
  }
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_1450fdb38;
  *(undefined1 *)(param_1 + 3) = 0;
  if (param_1[4] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[4] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar4 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar4);
  plVar6 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar5 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar6;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = 0;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      lpTlsValue = plVar5;
    }
    TlsSetValue(*pDVar4,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar6 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar4 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar6;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 14256a460 FindId body=217 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FGuid,FLightComponentMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FLightComponentMapBuildData,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,int *param_3)

{
  int iVar1;
  longlong *plVar2;
  int *piVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar1 = FCrc::MemCrc_DEPRECATED(param_3,0x10);
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar1) * 4);
    if (iVar1 != -1) {
      do {
        piVar3 = (int *)((longlong)iVar1 * 0x90 + *param_1);
        if (((piVar3[1] == param_3[1] && piVar3[2] == param_3[2]) && piVar3[3] == param_3[3]) &&
            *param_3 == *piVar3) {
          *param_2 = iVar1;
          return param_2;
        }
        iVar1 = piVar3[0x20];
      } while (iVar1 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 14256a540 FUN_14256a540 body=216 status=ok
// SIG undefined FUN_14256a540(void)

int * FUN_14256a540(longlong *param_1,int *param_2,int *param_3)

{
  int iVar1;
  longlong *plVar2;
  int *piVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar1 = FCrc::MemCrc_DEPRECATED(param_3,0x10);
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar1) * 4);
    if (iVar1 != -1) {
      do {
        piVar3 = (int *)((longlong)iVar1 * 0xe0 + *param_1);
        if (((piVar3[1] == param_3[1] && piVar3[2] == param_3[2]) && piVar3[3] == param_3[3]) &&
            *param_3 == *piVar3) {
          *param_2 = iVar1;
          return param_2;
        }
        iVar1 = piVar3[0x36];
      } while (iVar1 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 14256a620 FUN_14256a620 body=85 status=ok
// SIG undefined FUN_14256a620(void)

undefined8 FUN_14256a620(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [8];
  
  TSet<TTuple<FObjectKey,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  ::FindId(param_1,local_res8,param_2);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)(*param_1 + (longlong)local_res8[0] * 0x18);
  }
  puVar1 = puVar2 + 1;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  if (puVar1 == (undefined8 *)0x0) {
    return 0;
  }
  return *puVar1;
}



// FUNCTION 14256a680 FUN_14256a680 body=29 status=ok
// SIG undefined FUN_14256a680(void)

void FUN_14256a680(undefined8 param_1)

{
  FUN_141755460();
  UMapBuildDataRegistry::EmptyLevelData(param_1,0);
  return;
}



// FUNCTION 14256a6a0 FUN_14256a6a0 body=27 status=ok
// SIG undefined FUN_14256a6a0(void)

void FUN_14256a6a0(undefined8 param_1)

{
  FUN_1425756f0();
  FUN_141755460(param_1);
  return;
}



// FUNCTION 14256a6c0 FUN_14256a6c0 body=372 status=ok
// SIG undefined FUN_14256a6c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14256a6c0(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  bool bVar10;
  int local_res8 [2];
  int local_res10;
  int local_res14;
  undefined8 *puVar6;
  
  FWindowsPlatformMisc::CreateGuid((GUID *)(param_1 + 0x788));
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1468509e4) && (_Init_thread_header(&DAT_1468509e4), DAT_1468509e4 == -1))
  {
    uVar3 = FCommandLine::Get();
    DAT_1468509e0 = FParse::Param(uVar3,L"nullrhi");
    _Init_thread_footer(&DAT_1468509e4);
  }
  if ((((DAT_1468b616c == '\0') || (DAT_1468b616d != '\0')) && (DAT_1468509e0 == '\0')) &&
     (uVar7 = 1 << ((byte)DAT_1464c9c14 & 0x1f) | _DAT_146afe3a0, uVar7 != 0)) {
    puVar9 = (undefined8 *)0x0;
    do {
      uVar8 = -uVar7 & uVar7;
      iVar1 = 0x1f;
      if (uVar8 != 0) {
        for (; uVar8 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      local_res14 = 0;
      if (uVar8 != 0) {
        local_res14 = iVar1;
      }
      puVar6 = puVar9;
      do {
        local_res10 = (int)puVar6;
        TSet<TTuple<FObjectKey,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
        ::FindId(param_1 + 2000,local_res8,&local_res10);
        puVar4 = puVar9;
        if (local_res8[0] != -1) {
          puVar4 = (undefined8 *)(*(longlong *)(param_1 + 2000) + (longlong)local_res8[0] * 0x18);
        }
        puVar2 = puVar4 + 1;
        if (puVar4 == (undefined8 *)0x0) {
          puVar2 = puVar9;
        }
        puVar4 = puVar9;
        if (puVar2 != (undefined8 *)0x0) {
          puVar4 = (undefined8 *)*puVar2;
        }
        FUN_14259f700(puVar4);
        uVar5 = (int)puVar6 + 1;
        puVar6 = (undefined8 *)(ulonglong)uVar5;
      } while ((int)uVar5 < 3);
      bVar10 = uVar8 != uVar7;
      uVar7 = uVar7 ^ uVar8;
    } while (bVar10);
  }
  return;
}



// FUNCTION 14256a850 FUN_14256a850 body=509 status=ok
// SIG undefined FUN_14256a850(void)

void FUN_14256a850(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  DWORD DVar4;
  DWORD *pDVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  int iVar10;
  LARGE_INTEGER local_res10;
  longlong local_res18;
  LARGE_INTEGER local_res20;
  
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)))) {
    FBaseGraphTask::GetSmallTaskAllocator();
    QueryPerformanceCounter(&local_res20);
    if (param_1 != 0) {
      FMaterialRenderProxy::~FMaterialRenderProxy(param_1);
      FMemory::operator_delete(param_1,0x140);
    }
    QueryPerformanceCounter(&local_res10);
    DAT_146ac3af4 = DAT_146ac3af4 + (local_res10.s.LowPart - local_res20._0_4_);
    return;
  }
  pDVar5 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar6 = TlsGetValue(*pDVar5);
  plVar9 = (longlong *)0x0;
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
      lVar7 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar5 + 2);
      plVar6[1] = lVar7;
      if (lVar7 == 0) {
        puVar8 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar6[1] = (longlong)puVar8;
        lVar7 = 0x1f;
        do {
          puVar2 = puVar8 + 0x20;
          *puVar8 = puVar2;
          lVar7 = lVar7 + -1;
          puVar8 = puVar2;
        } while (lVar7 != 0);
        *puVar2 = 0;
      }
      plVar9 = (longlong *)plVar6[1];
      iVar10 = 0x20;
      *(undefined4 *)(plVar6 + 2) = 0x20;
    }
    else {
      iVar10 = 0x20;
      plVar6[1] = (longlong)plVar9;
      *(undefined4 *)(plVar6 + 2) = 0x20;
      *plVar6 = 0;
    }
  }
  else {
    iVar10 = (int)plVar6[2];
  }
  plVar6[1] = *plVar9;
  *(int *)(plVar6 + 2) = iVar10 + -1;
  *plVar9 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar9 + 1) = 0xff;
  *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
  *(undefined1 *)(plVar9 + 3) = 0;
  *plVar9 = (longlong)&PTR_FUN_1450fdb38;
  plVar9[4] = 0;
  plVar9[2] = param_1;
  lVar7 = plVar9[4];
  piVar1 = (int *)(lVar7 + 0x48);
  if (lVar7 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_res18 = lVar7;
  FUN_140445100(plVar9,0,0xff,1,0,0);
  if (lVar7 != 0) {
    LOCK();
    iVar10 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar10 == 1) {
      FGraphEvent::Recycle(local_res18);
      return;
    }
  }
  return;
}



// FUNCTION 14256aa50 FUN_14256aa50 body=186 status=ok
// SIG undefined FUN_14256aa50(void)

void FUN_14256aa50(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  
  plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 0x740);
  plVar1 = plVar6 + *(int *)(*(longlong *)(param_1 + 0x28) + 0x748);
  for (; plVar6 != plVar1; plVar6 = plVar6 + 1) {
    lVar3 = *plVar6;
    if (lVar3 != 0) {
      lVar5 = UMaterialExpressionCustomOutput::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        iVar2 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
        }
        *(longlong *)(*param_2 + (longlong)iVar2 * 8) = lVar3;
      }
    }
  }
  return;
}



// FUNCTION 14256ab10 FUN_14256ab10 body=312 status=ok
// SIG undefined FUN_14256ab10(void)

void FUN_14256ab10(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  
  plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 0x740);
  plVar1 = plVar6 + *(int *)(*(longlong *)(param_1 + 0x28) + 0x748);
  do {
    if (plVar6 == plVar1) {
      return;
    }
    lVar3 = *plVar6;
    if (lVar3 != 0) {
      lVar5 = UInterpTrackParticleReplay::StaticClass();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) {
        lVar5 = UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (!bVar4) {
          lVar5 = FUN_1429af6e0();
          if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (!bVar4) goto LAB_14256ac20;
        }
      }
      iVar2 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar2 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
      }
      *(longlong *)(*param_2 + (longlong)iVar2 * 8) = lVar3;
    }
LAB_14256ac20:
    plVar6 = plVar6 + 1;
  } while( true );
}



// FUNCTION 14256ac50 FUN_14256ac50 body=72 status=ok
// SIG undefined FUN_14256ac50(void)

longlong FUN_14256ac50(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (0 < *(int *)(param_1 + 0x168)) {
    plVar3 = *(longlong **)(param_1 + 0x160);
    lVar2 = 0;
    do {
      lVar1 = *plVar3;
      if (((*(byte *)(lVar1 + 0x204) & 0x10) != 0) && (*(char *)(lVar1 + 0x1d8) != '\0')) {
        return lVar1;
      }
      lVar2 = lVar2 + 1;
      plVar3 = plVar3 + 1;
    } while (lVar2 < *(int *)(param_1 + 0x168));
  }
  return 0;
}



// FUNCTION 14256aca0 FUN_14256aca0 body=108 status=ok
// SIG undefined FUN_14256aca0(void)

void FUN_14256aca0(undefined8 param_1,longlong param_2,longlong param_3)

{
  *(undefined4 *)(param_2 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_2 + 0xc)) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2,0);
  }
  *(undefined4 *)(param_3 + 8) = 0;
  if ((*(int *)(param_3 + 0xc) < 0) && (*(int *)(param_3 + 0xc) != 0)) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_3,0);
  }
  FUN_142556500(param_1,param_2,param_3,0);
  return;
}



// FUNCTION 14256ad10 FUN_14256ad10 body=108 status=ok
// SIG undefined FUN_14256ad10(void)

void FUN_14256ad10(undefined8 param_1,longlong param_2,longlong param_3)

{
  *(undefined4 *)(param_2 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_2 + 0xc)) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2,0);
  }
  *(undefined4 *)(param_3 + 8) = 0;
  if ((*(int *)(param_3 + 0xc) < 0) && (*(int *)(param_3 + 0xc) != 0)) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_3,0);
  }
  FUN_142556d90(param_1,param_2,param_3,0);
  return;
}



// FUNCTION 14256ad80 FUN_14256ad80 body=154 status=ok
// SIG undefined FUN_14256ad80(void)

void FUN_14256ad80(longlong param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined2 local_10;
  undefined1 local_e;
  undefined1 local_d;
  undefined4 local_c;
  
  local_18 = *(undefined8 *)(param_1 + 0x50);
  iVar2 = *(int *)(param_2 + 8);
  local_e = 2;
  local_10 = 0xffff;
  local_d = *(undefined1 *)(param_4 + 0xb);
  local_c = *(undefined4 *)(param_4 + 0xc);
  FUN_141f08a10(param_2,&local_18);
  if (iVar2 != *(int *)(param_2 + 8)) {
    iVar2 = (int)param_3[1];
    *(int *)(param_3 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar2);
    }
    uVar3 = *(undefined8 *)(param_1 + 0x60);
    puVar1 = (undefined8 *)(*param_3 + (longlong)iVar2 * 0x10);
    *puVar1 = *(undefined8 *)(param_1 + 0x58);
    puVar1[1] = uVar3;
  }
  return;
}



// FUNCTION 14256ae20 FUN_14256ae20 body=139 status=ok
// SIG undefined FUN_14256ae20(void)

void FUN_14256ae20(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  local_18 = *(undefined8 *)(param_1 + 0x40);
  iVar2 = *(int *)(param_2 + 8);
  local_10 = 0x202ffff;
  local_c = 0xffffffff;
  FUN_141f08a10(param_2,&local_18);
  if (iVar2 != *(int *)(param_2 + 8)) {
    iVar2 = (int)param_3[1];
    *(int *)(param_3 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar2);
    }
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    puVar1 = (undefined8 *)(*param_3 + (longlong)iVar2 * 0x10);
    *puVar1 = *(undefined8 *)(param_1 + 0x48);
    puVar1[1] = uVar3;
  }
  return;
}



// FUNCTION 14256aeb0 FUN_14256aeb0 body=154 status=ok
// SIG undefined FUN_14256aeb0(void)

void FUN_14256aeb0(longlong param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined2 local_10;
  undefined1 local_e;
  undefined1 local_d;
  undefined4 local_c;
  
  local_18 = *(undefined8 *)(param_1 + 0x40);
  iVar2 = *(int *)(param_2 + 8);
  local_e = 2;
  local_10 = 0xffff;
  local_d = *(undefined1 *)(param_4 + 0xb);
  local_c = *(undefined4 *)(param_4 + 0xc);
  FUN_141f08a10(param_2,&local_18);
  if (iVar2 != *(int *)(param_2 + 8)) {
    iVar2 = (int)param_3[1];
    *(int *)(param_3 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar2);
    }
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    puVar1 = (undefined8 *)(*param_3 + (longlong)iVar2 * 0x10);
    *puVar1 = *(undefined8 *)(param_1 + 0x48);
    puVar1[1] = uVar3;
  }
  return;
}



// FUNCTION 14256af50 FUN_14256af50 body=160 status=ok
// SIG undefined FUN_14256af50(void)

void FUN_14256af50(longlong param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined2 local_10;
  undefined1 local_e;
  undefined1 local_d;
  undefined4 local_c;
  
  local_18 = *(undefined8 *)(param_1 + 0x1b8);
  iVar2 = *(int *)(param_2 + 8);
  local_e = 2;
  local_10 = 0xffff;
  local_d = *(undefined1 *)(param_4 + 0xb);
  local_c = *(undefined4 *)(param_4 + 0xc);
  FUN_141f08a10(param_2,&local_18);
  if (iVar2 != *(int *)(param_2 + 8)) {
    iVar2 = (int)param_3[1];
    *(int *)(param_3 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar2);
    }
    uVar3 = *(undefined8 *)(param_1 + 0x1c8);
    puVar1 = (undefined8 *)(*param_3 + (longlong)iVar2 * 0x10);
    *puVar1 = *(undefined8 *)(param_1 + 0x1c0);
    puVar1[1] = uVar3;
  }
  return;
}



// FUNCTION 14256aff0 FUN_14256aff0 body=108 status=ok
// SIG undefined FUN_14256aff0(void)

void FUN_14256aff0(undefined8 param_1,longlong param_2,longlong param_3)

{
  *(undefined4 *)(param_2 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_2 + 0xc)) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2,0);
  }
  *(undefined4 *)(param_3 + 8) = 0;
  if ((*(int *)(param_3 + 0xc) < 0) && (*(int *)(param_3 + 0xc) != 0)) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_3,0);
  }
  FUN_1425575d0(param_1,param_2,param_3,0);
  return;
}



// FUNCTION 14256b060 FUN_14256b060 body=108 status=ok
// SIG undefined FUN_14256b060(void)

void FUN_14256b060(undefined8 param_1,longlong param_2,longlong param_3)

{
  *(undefined4 *)(param_2 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_2 + 0xc)) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2,0);
  }
  *(undefined4 *)(param_3 + 8) = 0;
  if ((*(int *)(param_3 + 0xc) < 0) && (*(int *)(param_3 + 0xc) != 0)) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_3,0);
  }
  FUN_1425586f0(param_1,param_2,param_3,0);
  return;
}



// FUNCTION 14256b0d0 FUN_14256b0d0 body=108 status=ok
// SIG undefined FUN_14256b0d0(void)

void FUN_14256b0d0(undefined8 param_1,longlong param_2,longlong param_3)

{
  *(undefined4 *)(param_2 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_2 + 0xc)) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2,0);
  }
  *(undefined4 *)(param_3 + 8) = 0;
  if ((*(int *)(param_3 + 0xc) < 0) && (*(int *)(param_3 + 0xc) != 0)) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_3,0);
  }
  FUN_142557e60(param_1,param_2,param_3,0);
  return;
}



// FUNCTION 14256b140 FUN_14256b140 body=108 status=ok
// SIG undefined FUN_14256b140(void)

void FUN_14256b140(undefined8 param_1,longlong param_2,longlong param_3)

{
  *(undefined4 *)(param_2 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_2 + 0xc)) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2,0);
  }
  *(undefined4 *)(param_3 + 8) = 0;
  if ((*(int *)(param_3 + 0xc) < 0) && (*(int *)(param_3 + 0xc) != 0)) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_3,0);
  }
  FUN_142558f80(param_1,param_2,param_3,0);
  return;
}



// FUNCTION 14256b1b0 FUN_14256b1b0 body=108 status=ok
// SIG undefined FUN_14256b1b0(void)

void FUN_14256b1b0(undefined8 param_1,longlong param_2,longlong param_3)

{
  *(undefined4 *)(param_2 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_2 + 0xc)) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2,0);
  }
  *(undefined4 *)(param_3 + 8) = 0;
  if ((*(int *)(param_3 + 0xc) < 0) && (*(int *)(param_3 + 0xc) != 0)) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_3,0);
  }
  FUN_142559840(param_1,param_2,param_3,0);
  return;
}



// FUNCTION 14256b220 GetAssetRegistryTags body=368 status=ok
// SIG undefined GetAssetRegistryTags(void)

void UMaterial::GetAssetRegistryTags(undefined8 param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  undefined8 *puVar4;
  uint uVar5;
  longlong lVar6;
  void *_Src;
  int iVar7;
  void *pvVar8;
  wchar_t *pwVar9;
  undefined4 uVar10;
  void *pvVar11;
  undefined1 local_res10 [8];
  void *local_48;
  void *local_40;
  int local_38;
  undefined4 local_34;
  
  cVar3 = FUN_14255a750();
  pwVar9 = L"False";
  if (cVar3 != '\0') {
    pwVar9 = L"True";
  }
  pvVar11 = (void *)0x0;
  uVar10 = 0;
  local_48 = (void *)0x0;
  local_40 = (void *)(ulonglong)(uint)local_40;
  _Src = pvVar11;
  pvVar8 = pvVar11;
  if (*pwVar9 != L'\0') {
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (pwVar9[lVar6] != L'\0');
    uVar5 = (int)lVar6 + 1;
    local_40 = (void *)(ulonglong)uVar5;
    uVar1 = uVar5;
    if (0 < (int)uVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      uVar1 = (uint)local_40;
    }
    _Src = local_48;
    pvVar8 = (void *)(ulonglong)uVar1;
    FGenericPlatformString::Memcpy(local_48,pwVar9,(longlong)(int)uVar5 * 2);
  }
  puVar4 = (undefined8 *)FName::FName(local_res10,"HasSceneColor",1);
  local_40 = (void *)0x0;
  iVar7 = (int)pvVar8;
  local_48 = (void *)*puVar4;
  local_38 = iVar7;
  if (iVar7 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_40,pvVar8,0);
    pvVar11 = local_40;
    ::_guard_xfg_dispatch_icall_nop(local_40,_Src,(longlong)iVar7 * 2);
    uVar10 = local_34;
  }
  iVar2 = local_38;
  pvVar8 = local_48;
  iVar7 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar7 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar7 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(param_2,iVar7);
  }
  puVar4 = (undefined8 *)((longlong)iVar7 * 0x20 + *param_2);
  *puVar4 = pvVar8;
  puVar4[1] = pvVar11;
  *(int *)(puVar4 + 2) = iVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar10;
  puVar4[3] = 1;
  if (_Src != (void *)0x0) {
    FMemory::Free(_Src);
  }
  FUN_1417557f0(param_1,param_2);
  return;
}



// FUNCTION 14256b390 GetBaseFunction body=90 status=ok
// SIG undefined GetBaseFunction(void)

longlong UMaterialFunctionInstance::GetBaseFunction(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x40);
  while( true ) {
    if (lVar3 == 0) {
      return 0;
    }
    lVar2 = GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) break;
    lVar3 = *(longlong *)(lVar3 + 0x40);
  }
  return lVar3;
}



// FUNCTION 14256b3f0 GetBaseFunction body=85 status=ok
// SIG undefined GetBaseFunction(void)

undefined8 UMaterialFunctionInterface::GetBaseFunction(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialFunctionInterface.h"
             ,0x70,L"Pure virtual not implemented (%s)",
             L"UMaterialFunctionInterface::GetBaseFunction");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialFunctionInterface.h"
             ,0x70,L"Pure virtual not implemented (%s)",
             L"UMaterialFunctionInterface::GetBaseFunction");
  return 0;
}



// FUNCTION 14256b450 GetBaseFunction body=85 status=ok
// SIG undefined GetBaseFunction(void)

undefined8 UMaterialFunctionInterface::GetBaseFunction(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialFunctionInterface.h"
             ,0x73,L"Pure virtual not implemented (%s)",
             L"UMaterialFunctionInterface::GetBaseFunction");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialFunctionInterface.h"
             ,0x73,L"Pure virtual not implemented (%s)",
             L"UMaterialFunctionInterface::GetBaseFunction");
  return 0;
}



// FUNCTION 14256b4f0 FUN_14256b4f0 body=755 status=ok
// SIG undefined FUN_14256b4f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16] FUN_14256b4f0(longlong param_1,undefined1 (*param_2) [16],char param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  float *pfVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  uint local_60;
  
  FUN_14222fcc0();
  fVar8 = DAT_1468b5d98;
  if ((*(float *)param_2[1] - *(float *)(*param_2 + 4)) *
      (*(float *)(*param_2 + 0xc) - *(float *)*param_2) *
      (*(float *)(param_2[1] + 4) - *(float *)(*param_2 + 8)) == 0.0) {
    fStack_6c = (float)_DAT_1468b5d90;
    fStack_68 = (float)((ulonglong)_DAT_1468b5d90 >> 0x20);
    fStack_64 = DAT_1468b5d98;
    local_60 = local_60 & 0xffffff00;
    auVar3._8_4_ = DAT_1468b5d98;
    auVar3._0_8_ = _DAT_1468b5d90;
    auVar3._12_4_ = fStack_6c;
    *param_2 = auVar3;
    fStack_70 = fVar8;
    *(ulonglong *)param_2[1] = CONCAT44(fVar8,fStack_68);
    *(uint *)(param_2[1] + 8) = local_60;
    local_78 = fStack_6c;
    fStack_74 = fStack_68;
  }
  if (param_3 != '\0') {
    if ((*(longlong *)(param_1 + 0x458) == 0) ||
       (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x458) + 0x728), lVar1 == 0)) {
      plVar6 = *(longlong **)(param_1 + 0x478);
      uVar5 = 0;
      uVar7 = (longlong)*(int *)(param_1 + 0x480) & 0x1fffffffffffffff;
      if (plVar6 + *(int *)(param_1 + 0x480) < plVar6) {
        uVar7 = uVar5;
      }
      if (uVar7 != 0) {
        do {
          plVar2 = (longlong *)*plVar6;
          if (plVar2 != (longlong *)0x0) {
            pfVar4 = (float *)(**(code **)(*plVar2 + 0x560))(plVar2,&local_78,param_3);
            if (param_2[1][8] == '\0') {
              if (*(char *)(pfVar4 + 6) != '\0') {
                fVar8 = pfVar4[1];
                fVar10 = pfVar4[2];
                fVar9 = pfVar4[3];
                *(float *)*param_2 = *pfVar4;
                *(float *)(*param_2 + 4) = fVar8;
                *(float *)(*param_2 + 8) = fVar10;
                *(float *)(*param_2 + 0xc) = fVar9;
                *(undefined8 *)param_2[1] = *(undefined8 *)(pfVar4 + 4);
                *(float *)(param_2[1] + 8) = pfVar4[6];
              }
            }
            else if (*(char *)(pfVar4 + 6) != '\0') {
              fVar8 = *pfVar4;
              if (*(float *)*param_2 <= *pfVar4) {
                fVar8 = *(float *)*param_2;
              }
              *(float *)*param_2 = fVar8;
              fVar8 = pfVar4[1];
              if (*(float *)(*param_2 + 4) <= pfVar4[1]) {
                fVar8 = *(float *)(*param_2 + 4);
              }
              *(float *)(*param_2 + 4) = fVar8;
              fVar8 = pfVar4[2];
              if (*(float *)(*param_2 + 8) <= pfVar4[2]) {
                fVar8 = *(float *)(*param_2 + 8);
              }
              *(float *)(*param_2 + 8) = fVar8;
              fVar8 = pfVar4[3];
              if (pfVar4[3] <= *(float *)(*param_2 + 0xc)) {
                fVar8 = *(float *)(*param_2 + 0xc);
              }
              *(float *)(*param_2 + 0xc) = fVar8;
              fVar8 = pfVar4[4];
              if (pfVar4[4] <= *(float *)param_2[1]) {
                fVar8 = *(float *)param_2[1];
              }
              *(float *)param_2[1] = fVar8;
              fVar8 = pfVar4[5];
              if (pfVar4[5] <= *(float *)(param_2[1] + 4)) {
                fVar8 = *(float *)(param_2[1] + 4);
              }
              *(float *)(param_2[1] + 4) = fVar8;
            }
          }
          plVar6 = plVar6 + 1;
          uVar5 = uVar5 + 1;
        } while (uVar5 != uVar7);
      }
    }
    else {
      UStaticMesh::GetBounds(lVar1,&local_78);
      fVar8 = *(float *)*param_2;
      local_60 = CONCAT31(local_60._1_3_,1);
      fVar9 = (*(float *)param_2[1] + *(float *)(*param_2 + 4)) * 0.5;
      fVar13 = (*(float *)(param_2[1] + 4) + *(float *)(*param_2 + 8)) * 0.5;
      fVar11 = (fVar8 + *(float *)(*param_2 + 0xc)) * 0.5;
      fVar10 = fVar9 - fStack_68;
      fVar9 = fVar9 + fStack_68;
      fVar12 = fVar11 - fStack_6c;
      fVar14 = fVar13 - fStack_64;
      fVar11 = fVar11 + fStack_6c;
      fVar13 = fVar13 + fStack_64;
      if (param_2[1][8] == '\0') {
        *(ulonglong *)*param_2 = CONCAT44(fVar10,fVar12);
        *(ulonglong *)(*param_2 + 8) = CONCAT44(fVar11,fVar14);
        *(ulonglong *)param_2[1] = CONCAT44(fVar13,fVar9);
        *(uint *)(param_2[1] + 8) = local_60;
      }
      else {
        if (fVar12 <= fVar8) {
          fVar8 = fVar12;
        }
        *(float *)*param_2 = fVar8;
        fVar8 = *(float *)(*param_2 + 8);
        if (fVar14 <= *(float *)(*param_2 + 8)) {
          fVar8 = fVar14;
        }
        if (*(float *)(*param_2 + 4) <= fVar10) {
          fVar10 = *(float *)(*param_2 + 4);
        }
        if (fVar9 <= *(float *)param_2[1]) {
          fVar9 = *(float *)param_2[1];
        }
        fVar12 = *(float *)(*param_2 + 0xc);
        if (*(float *)(*param_2 + 0xc) <= fVar11) {
          fVar12 = fVar11;
        }
        *(float *)(*param_2 + 8) = fVar8;
        fVar8 = *(float *)(param_2[1] + 4);
        if (*(float *)(param_2[1] + 4) <= fVar13) {
          fVar8 = fVar13;
        }
        *(float *)(*param_2 + 4) = fVar10;
        *(float *)(*param_2 + 0xc) = fVar12;
        *(float *)param_2[1] = fVar9;
        *(float *)(param_2[1] + 4) = fVar8;
      }
    }
  }
  return param_2;
}



// FUNCTION 14256b7f0 FUN_14256b7f0 body=27 status=ok
// SIG undefined FUN_14256b7f0(void)

undefined8 FUN_14256b7f0(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x388))();
  return param_2;
}



// FUNCTION 14256b810 GetDefaultMaterial body=31 status=ok
// SIG undefined GetDefaultMaterial(void)

undefined8 UMaterial::GetDefaultMaterial(int param_1)

{
  FUN_142570f00();
  return (&DAT_146afd0b8)[param_1];
}



// FUNCTION 14256b830 FUN_14256b830 body=250 status=ok
// SIG undefined FUN_14256b830(void)

void FUN_14256b830(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  
  plVar6 = *(longlong **)(param_1 + 0x740);
  plVar1 = plVar6 + *(int *)(param_1 + 0x748);
  for (; plVar6 != plVar1; plVar6 = plVar6 + 1) {
    lVar2 = *plVar6;
    if (lVar2 != 0) {
      lVar5 = UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        plVar3 = *(longlong **)(lVar2 + 0x40);
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x2a0))(plVar3,param_2);
          TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
          AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_2,lVar2 + 0x40);
        }
      }
      else {
        lVar5 = FUN_1429af6e0();
        if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          FUN_14256b930(lVar2,param_2);
        }
      }
    }
  }
  return;
}



// FUNCTION 14256b930 FUN_14256b930 body=408 status=ok
// SIG undefined FUN_14256b930(void)

void FUN_14256b930(longlong param_1,longlong *param_2)

{
  int iVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  
  puVar2 = *(ulonglong **)(param_1 + 0x100);
  puVar8 = puVar2;
  if (puVar2 == (ulonglong *)0x0) {
    puVar8 = (ulonglong *)(param_1 + 0x90);
  }
  plVar7 = (longlong *)*puVar8;
  puVar10 = puVar2 + 2;
  if (puVar2 == (ulonglong *)0x0) {
    puVar10 = (ulonglong *)(param_1 + 0xa0);
  }
  uVar11 = 0;
  uVar9 = (longlong)(int)puVar8[1] & 0x1fffffffffffffff;
  if (plVar7 + (int)puVar8[1] < plVar7) {
    uVar9 = uVar11;
  }
  uVar6 = uVar11;
  if (uVar9 != 0) {
    do {
      plVar3 = (longlong *)*plVar7;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x2a0))(plVar3,param_2);
        puVar4 = (undefined8 *)*param_2;
        iVar1 = (int)param_2[1];
        for (puVar5 = puVar4; puVar5 != puVar4 + iVar1; puVar5 = puVar5 + 1) {
          if ((longlong *)*puVar5 == plVar3) {
            if ((int)((longlong)puVar5 - (longlong)puVar4 >> 3) != -1) goto LAB_14256ba08;
            break;
          }
        }
        *(int *)(param_2 + 1) = iVar1 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2);
        }
        *(longlong **)((longlong)iVar1 * 8 + *param_2) = plVar3;
      }
LAB_14256ba08:
      plVar7 = plVar7 + 1;
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar9);
  }
  plVar7 = (longlong *)*puVar10;
  uVar9 = (longlong)(int)puVar10[1] & 0x1fffffffffffffff;
  if (plVar7 + (int)puVar10[1] < plVar7) {
    uVar9 = uVar11;
  }
  if (uVar9 != 0) {
    do {
      plVar3 = (longlong *)*plVar7;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x2a0))(plVar3,param_2);
        puVar4 = (undefined8 *)*param_2;
        iVar1 = (int)param_2[1];
        for (puVar5 = puVar4; puVar5 != puVar4 + iVar1; puVar5 = puVar5 + 1) {
          if ((longlong *)*puVar5 == plVar3) {
            if ((int)((longlong)puVar5 - (longlong)puVar4 >> 3) != -1) goto LAB_14256baaa;
            break;
          }
        }
        *(int *)(param_2 + 1) = iVar1 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2);
        }
        *(longlong **)((longlong)iVar1 * 8 + *param_2) = plVar3;
      }
LAB_14256baaa:
      plVar7 = plVar7 + 1;
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar9);
  }
  return;
}



// FUNCTION 14256bad0 FUN_14256bad0 body=165 status=ok
// SIG undefined FUN_14256bad0(void)

void FUN_14256bad0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  
  plVar6 = *(longlong **)(param_1 + 0x58);
  plVar1 = plVar6 + *(int *)(param_1 + 0x60);
  for (; plVar6 != plVar1; plVar6 = plVar6 + 1) {
    lVar2 = *plVar6;
    if (lVar2 != 0) {
      lVar5 = UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((bVar4) && (plVar3 = *(longlong **)(lVar2 + 0x40), plVar3 != (longlong *)0x0)) {
        (**(code **)(*plVar3 + 0x2a0))(plVar3,param_2);
        TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
        AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_2,lVar2 + 0x40);
      }
    }
  }
  return;
}



// FUNCTION 14256bb80 FUN_14256bb80 body=56 status=ok
// SIG undefined FUN_14256bb80(void)

void FUN_14256bb80(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x40);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2a0))();
    TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
    AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_2,(longlong *)(param_1 + 0x40));
  }
  return;
}



// FUNCTION 14256bbc0 GetDependentFunctions body=83 status=ok
// SIG undefined GetDependentFunctions(void)

void UMaterialFunctionInterface::GetDependentFunctions(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialFunctionInterface.h"
             ,0x51,L"Pure virtual not implemented (%s)",
             L"UMaterialFunctionInterface::GetDependentFunctions");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialFunctionInterface.h"
             ,0x51,L"Pure virtual not implemented (%s)",
             L"UMaterialFunctionInterface::GetDependentFunctions");
  return;
}



// FUNCTION 14256bc20 FUN_14256bc20 body=40 status=ok
// SIG undefined FUN_14256bc20(void)

void FUN_14256bc20(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x2b0))();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014256bc3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x2c8))(plVar1);
    return;
  }
  return;
}



// FUNCTION 14256bc50 GetDescription body=85 status=ok
// SIG undefined GetDescription(void)

undefined8 UMaterialFunctionInterface::GetDescription(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialFunctionInterface.h"
             ,0x79,L"Pure virtual not implemented (%s)",
             L"UMaterialFunctionInterface::GetDescription");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialFunctionInterface.h"
             ,0x79,L"Pure virtual not implemented (%s)",
             L"UMaterialFunctionInterface::GetDescription");
  return 0;
}



// FUNCTION 14256bcb0 FUN_14256bcb0 body=206 status=ok
// SIG undefined FUN_14256bcb0(void)

longlong * FUN_14256bcb0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong local_28 [4];
  
  plVar1 = *(longlong **)(param_1 + 0x458);
  bVar2 = plVar1 == (longlong *)0x0;
  if (bVar2) {
    local_28[0] = 0;
    local_28[1] = 0x17;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
    FGenericPlatformString::Memcpy(local_28[0],L"No_StaticMeshComponent",0x2e);
    plVar1 = local_28;
  }
  else {
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x40))(plVar1,local_28 + 2);
  }
  *param_2 = 0;
  *param_2 = *plVar1;
  *plVar1 = 0;
  *(int *)(param_2 + 1) = (int)plVar1[1];
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)plVar1 + 0xc);
  plVar1[1] = 0;
  if (bVar2) {
    if (local_28[0] != 0) {
      FMemory::Free();
    }
  }
  if ((!bVar2) && (local_28[2] != 0)) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 14256bd80 FUN_14256bd80 body=6 status=ok
// SIG undefined FUN_14256bd80(void)

undefined4 FUN_14256bd80(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x50);
}



// FUNCTION 14256bda0 GetDisplayName body=62 status=ok
// SIG undefined GetDisplayName(void)

undefined8 *
UMaterialExpressionBentNormalCustomOutput::GetDisplayName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"BentNormal",0x16);
  return param_2;
}



// FUNCTION 14256bde0 GetDisplayName body=62 status=ok
// SIG undefined GetDisplayName(void)

undefined8 *
UMaterialExpressionTangentOutput::GetDisplayName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"CustomEyeTangent",0x22);
  return param_2;
}



// FUNCTION 14256be60 FUN_14256be60 body=197 status=ok
// SIG undefined FUN_14256be60(void)

ulonglong FUN_14256be60(longlong param_1,int *param_2,undefined8 *param_3,int *param_4,char param_5)

{
  int iVar1;
  ulonglong in_RAX;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  if ((param_5 == '\0') || (in_RAX = FUN_1425b3950(), (char)in_RAX != '\0')) {
    if (*(char *)(param_1 + 0x838) == '\0') {
      in_RAX = FUN_142568050(param_1,0);
    }
    piVar2 = *(int **)(param_1 + 0x870);
    piVar5 = (int *)0x0;
    piVar4 = piVar2 + (longlong)*(int *)(param_1 + 0x878) * 8;
    piVar3 = piVar5;
    if (piVar2 != piVar4) {
      do {
        if ((((*piVar2 == *param_2) &&
             (in_RAX = (ulonglong)(uint)param_2[1], piVar2[1] == param_2[1])) &&
            (in_RAX = 0, *(char *)((longlong)piVar2 + 0xb) == *(char *)((longlong)param_2 + 0xb)))
           && (in_RAX = (ulonglong)(uint)param_2[3], piVar3 = piVar2, piVar2[3] == param_2[3]))
        break;
        piVar2 = piVar2 + 8;
        piVar3 = piVar5;
      } while (piVar2 != piVar4);
    }
    piVar2 = piVar3 + 4;
    if (piVar3 == (int *)0x0) {
      piVar2 = piVar5;
    }
    if (piVar2 != (int *)0x0) {
      *param_3 = *(undefined8 *)piVar2;
      iVar1 = piVar2[2];
      *param_4 = iVar1;
      return CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14256bf30 FUN_14256bf30 body=960 status=ok
// SIG undefined FUN_14256bf30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14256bf30(longlong param_1,byte *param_2)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  short sVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  byte *pbVar15;
  byte bVar16;
  longlong *plVar17;
  longlong *plVar18;
  undefined1 auStack_188 [32];
  longlong *local_168;
  undefined8 local_160;
  longlong *local_158;
  longlong *local_150;
  undefined8 local_148;
  longlong *local_140;
  uint local_138;
  uint local_134;
  byte *local_130;
  ulonglong local_128;
  undefined1 local_118 [208];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  plVar7 = *(longlong **)(param_1 + 0x740);
  plVar6 = (longlong *)0x0;
  local_140 = (longlong *)0x0;
  local_134 = 0;
  plVar9 = plVar7 + *(int *)(param_1 + 0x748);
  plVar8 = plVar6;
  plVar18 = plVar6;
  local_168 = plVar9;
  local_130 = param_2;
  if (plVar7 != plVar9) {
    do {
      if ((longlong *)*plVar7 != (longlong *)0x0) {
        local_150 = (longlong *)0x0;
        local_148 = 0;
        local_158 = plVar7;
        (**(code **)(*(longlong *)*plVar7 + 0x278))();
        uVar14 = 0;
        uVar12 = (ulonglong)((longlong)(local_150 + (int)local_148) + (7 - (longlong)local_150)) >>
                 3;
        if (local_150 + (int)local_148 < local_150) {
          uVar12 = uVar14;
        }
        plVar17 = local_150;
        local_128 = uVar12;
        if (uVar12 != 0) {
          do {
            lVar1 = *plVar17;
            iVar10 = (int)plVar6;
            for (plVar9 = plVar18; plVar9 != plVar18 + iVar10; plVar9 = plVar9 + 1) {
              if (*plVar9 == lVar1) {
                if ((int)((longlong)plVar9 - (longlong)plVar18 >> 3) != -1) goto LAB_14256c060;
                break;
              }
            }
            local_138 = iVar10 + 1;
            if ((int)plVar8 < (int)local_138) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_140);
              plVar8 = (longlong *)(ulonglong)local_134;
              uVar12 = local_128;
              plVar18 = local_140;
            }
            plVar6 = (longlong *)(ulonglong)local_138;
            plVar18[iVar10] = lVar1;
LAB_14256c060:
            plVar17 = plVar17 + 1;
            uVar14 = uVar14 + 1;
            plVar7 = local_158;
            plVar9 = local_168;
          } while (uVar14 != uVar12);
        }
        if (local_150 != (longlong *)0x0) {
          FMemory::Free(local_150);
        }
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar9);
    local_158 = plVar7;
    if (0 < (int)plVar6) {
      FSHA1::FSHA1(local_118);
      pbVar15 = local_130;
      iVar10 = 0;
      iVar13 = 0x14;
      local_158 = (longlong *)CONCAT44(local_158._4_4_,0x14);
      local_168 = (longlong *)0x0;
      local_160 = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_168,0x28);
      plVar9 = local_168;
      iVar3 = (int)local_160;
      do {
        bVar16 = *pbVar15;
        sVar11 = 0x37;
        bVar2 = bVar16 >> 4;
        if (bVar2 < 10) {
          sVar11 = 0x30;
        }
        sVar11 = sVar11 + (ushort)bVar2;
        if (sVar11 != 0) {
          iVar13 = iVar3 + -1;
          if (iVar3 < 1) {
            iVar13 = 0;
          }
          iVar4 = (iVar3 < 1) + 1 + iVar3;
          local_160 = CONCAT44(local_160._4_4_,iVar4);
          if (local_160._4_4_ < iVar4) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_168,iVar3);
            plVar9 = local_168;
            iVar4 = (int)local_160;
          }
          iVar3 = iVar4;
          *(short *)((longlong)plVar9 + (longlong)iVar13 * 2) = sVar11;
          *(undefined2 *)((longlong)plVar9 + (longlong)iVar13 * 2 + 2) = 0;
          iVar13 = (int)local_158;
        }
        bVar16 = bVar16 & 0xf;
        sVar11 = 0x37;
        if (bVar16 < 10) {
          sVar11 = 0x30;
        }
        sVar11 = sVar11 + (ushort)bVar16;
        if (sVar11 != 0) {
          iVar4 = iVar3 + -1;
          if (iVar3 < 1) {
            iVar4 = 0;
          }
          iVar5 = (iVar3 < 1) + 1 + iVar3;
          local_160 = CONCAT44(local_160._4_4_,iVar5);
          if (local_160._4_4_ < iVar5) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_168,iVar3);
            plVar9 = local_168;
            iVar5 = (int)local_160;
          }
          iVar3 = iVar5;
          *(short *)((longlong)plVar9 + (longlong)iVar4 * 2) = sVar11;
          *(undefined2 *)((longlong)plVar9 + (longlong)iVar4 * 2 + 2) = 0;
        }
        pbVar15 = pbVar15 + 1;
        iVar13 = iVar13 + -1;
        local_158 = (longlong *)CONCAT44(local_158._4_4_,iVar13);
      } while (iVar13 != 0);
      if (iVar3 == 0) {
        plVar7 = (longlong *)&DAT_143f3eda8;
      }
      else {
        iVar10 = iVar3 + -1;
        plVar7 = plVar9;
      }
      FSHA1::UpdateWithString(local_118,plVar7,iVar10);
      plVar18 = local_140;
      uVar14 = 0;
      uVar12 = (ulonglong)((longlong)(local_140 + (int)plVar6) + (7 - (longlong)local_140)) >> 3;
      if (local_140 + (int)plVar6 < local_140) {
        uVar12 = uVar14;
      }
      plVar7 = local_140;
      if (uVar12 != 0) {
        do {
          FUN_141682af0(*plVar7 + 0x30,&local_150,0);
          plVar8 = local_150;
          if ((int)local_148 == 0) {
            plVar8 = (longlong *)&DAT_143f3eda8;
          }
          FSHA1::UpdateWithString(local_118,plVar8);
          if (local_150 != (longlong *)0x0) {
            FMemory::Free();
          }
          uVar14 = uVar14 + 1;
          plVar7 = plVar7 + 1;
        } while (uVar14 != uVar12);
      }
      FSHA1::Final(local_118);
      FSHA1::GetHash(local_118,local_130);
      if (plVar9 != (longlong *)0x0) {
        FMemory::Free(plVar9);
      }
      FSHA1::~FSHA1(local_118);
    }
    if (plVar18 != (longlong *)0x0) {
      FMemory::Free(plVar18);
    }
  }
  return;
}



// FUNCTION 14256c2f0 GetFriendlyName body=44 status=ok
// SIG undefined GetFriendlyName(void)

undefined8 FMaterialInstanceResource::GetFriendlyName(longlong param_1,undefined8 param_2)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = *(undefined8 *)(*(longlong *)(param_1 + 0x138) + 0x18);
  FName::ToString(local_res8);
  return param_2;
}



// FUNCTION 14256c320 FUN_14256c320 body=40 status=ok
// SIG undefined FUN_14256c320(void)

void FUN_14256c320(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x2b0))();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014256c33c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x2c0))(plVar1);
    return;
  }
  return;
}



// FUNCTION 14256c350 GetFunctionExpressions body=85 status=ok
// SIG undefined GetFunctionExpressions(void)

undefined8 UMaterialFunctionInterface::GetFunctionExpressions(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialFunctionInterface.h"
             ,0x76,L"Pure virtual not implemented (%s)",
             L"UMaterialFunctionInterface::GetFunctionExpressions");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialFunctionInterface.h"
             ,0x76,L"Pure virtual not implemented (%s)",
             L"UMaterialFunctionInterface::GetFunctionExpressions");
  return 0;
}



// FUNCTION 14256c3b0 GetFunctionName body=62 status=ok
// SIG undefined GetFunctionName(void)

undefined8 *
UMaterialExpressionBentNormalCustomOutput::GetFunctionName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"GetBentNormal",0x1c);
  return param_2;
}



// FUNCTION 14256c3f0 GetFunctionName body=62 status=ok
// SIG undefined GetFunctionName(void)

undefined8 *
UMaterialExpressionClearCoatNormalCustomOutput::GetFunctionName
          (undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x16;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"ClearCoatBottomNormal",0x2c);
  return param_2;
}



// FUNCTION 14256c430 GetFunctionName body=142 status=ok
// SIG undefined GetFunctionName(void)

undefined8 *
UMaterialExpressionCustomOutput::GetFunctionName(undefined8 param_1,undefined8 *param_2)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialExpressionCustomOutput.h"
             ,0x12,L"Pure virtual not implemented (%s)",
             L"UMaterialExpressionCustomOutput::GetFunctionName");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialExpressionCustomOutput.h"
             ,0x12,L"Pure virtual not implemented (%s)",
             L"UMaterialExpressionCustomOutput::GetFunctionName");
  *param_2 = 0;
  param_2[1] = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"GetCustomOutput",0x20);
  return param_2;
}



// FUNCTION 14256c4c0 GetFunctionName body=62 status=ok
// SIG undefined GetFunctionName(void)

undefined8 *
UMaterialExpressionTangentOutput::GetFunctionName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"GetTangentOutput",0x22);
  return param_2;
}



// FUNCTION 14256c500 GetFunctionName body=62 status=ok
// SIG undefined GetFunctionName(void)

undefined8 *
UMaterialExpressionVertexInterpolator::GetFunctionName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"VertexInterpolator",0x26);
  return param_2;
}



// FUNCTION 14256c540 FUN_14256c540 body=712 status=ok
// SIG undefined FUN_14256c540(void)

undefined8 FUN_14256c540(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  
  plVar8 = *(longlong **)(param_1 + 0x740);
  plVar1 = plVar8 + *(int *)(param_1 + 0x748);
  do {
    if (plVar8 == plVar1) {
      return 0;
    }
    lVar7 = *plVar8;
    if (*(char *)((longlong)param_2 + 0xb) == '\x02') {
      if (lVar7 != 0) {
        lVar5 = FUN_1429afb00();
        if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          if (*(longlong *)(lVar7 + 0x40) == *param_2) {
            *param_3 = *(undefined8 *)(lVar7 + 0x58);
            return 1;
          }
        }
        else {
          lVar5 = UCompositingMediaInput::StaticClass();
          if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            if (*(longlong *)(lVar7 + 0x1b8) == *param_2) {
              *param_3 = *(undefined8 *)(lVar7 + 0x1d0);
              return 1;
            }
          }
          else {
            lVar5 = UMaterialExpressionFontSampleParameter::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (bVar3) {
              if (*(longlong *)(lVar7 + 0x50) == *param_2) {
                *param_3 = *(undefined8 *)(lVar7 + 0x68);
                return 1;
              }
            }
            else {
              lVar5 = UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if (bVar3) {
                lVar7 = *(longlong *)(lVar7 + 0x40);
                goto LAB_14256c7ce;
              }
              lVar5 = FUN_1429af6e0();
              if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if ((bVar3) && (*(longlong *)(lVar7 + 0x40) == *param_2)) {
                *param_3 = 0;
                return 1;
              }
            }
          }
        }
      }
    }
    else if (lVar7 != 0) {
      lVar5 = FUN_1429af6e0();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        if (*(char *)((longlong)param_2 + 0xb) == '\0') {
          plVar6 = *(longlong **)(lVar7 + 0x100);
          if (plVar6 == (longlong *)0x0) {
            plVar6 = (longlong *)(lVar7 + 0x90);
          }
          iVar2 = *(int *)((longlong)param_2 + 0xc);
          if ((iVar2 < 0) || ((int)plVar6[1] <= iVar2)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            lVar7 = *plVar6;
LAB_14256c7ca:
            lVar7 = *(longlong *)(lVar7 + (longlong)iVar2 * 8);
LAB_14256c7ce:
            if ((lVar7 != 0) && (cVar4 = FUN_14256ce30(lVar7,param_2,param_3), cVar4 != '\0')) {
              return 1;
            }
          }
        }
        else if (*(char *)((longlong)param_2 + 0xb) == '\x01') {
          iVar2 = *(int *)((longlong)param_2 + 0xc);
          plVar6 = (longlong *)(*(longlong *)(lVar7 + 0x100) + 0x10);
          if (*(longlong *)(lVar7 + 0x100) == 0) {
            plVar6 = (longlong *)(lVar7 + 0xa0);
          }
          if ((iVar2 < 0) || ((int)plVar6[1] <= iVar2)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            lVar7 = *plVar6;
            goto LAB_14256c7ca;
          }
        }
      }
    }
    plVar8 = plVar8 + 1;
  } while( true );
}



// FUNCTION 14256c850 GetInputsAndOutputs body=83 status=ok
// SIG undefined GetInputsAndOutputs(void)

void UMaterialFunctionInterface::GetInputsAndOutputs(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialFunctionInterface.h"
             ,0x3b,L"Pure virtual not implemented (%s)",
             L"UMaterialFunctionInterface::GetInputsAndOutputs");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialFunctionInterface.h"
             ,0x3b,L"Pure virtual not implemented (%s)",
             L"UMaterialFunctionInterface::GetInputsAndOutputs");
  return;
}



// FUNCTION 14256c8b0 GetLevelPrecomputedLightVolumeBuildData body=87 status=ok
// SIG undefined GetLevelPrecomputedLightVolumeBuildData(void)

undefined8
UMapBuildDataRegistry::GetLevelPrecomputedLightVolumeBuildData(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [8];
  
  TSet<TTuple<FGuid,AActor_*>,TDefaultMapHashableKeyFuncs<FGuid,AActor_*,0>,FDefaultSetAllocator>::
  FindId((longlong *)(param_1 + 0x80),local_res8,param_2);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_1 + 0x80));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  if (puVar1 == (undefined8 *)0x0) {
    return 0;
  }
  return *puVar1;
}



// FUNCTION 14256c910 GetLevelPrecomputedVolumetricLightmapBuildData body=87 status=ok
// SIG undefined GetLevelPrecomputedVolumetricLightmapBuildData(void)

undefined8
UMapBuildDataRegistry::GetLevelPrecomputedVolumetricLightmapBuildData
          (longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [8];
  
  TSet<TTuple<FGuid,AActor_*>,TDefaultMapHashableKeyFuncs<FGuid,AActor_*,0>,FDefaultSetAllocator>::
  FindId((longlong *)(param_1 + 0xd0),local_res8,param_2);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_1 + 0xd0));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  if (puVar1 == (undefined8 *)0x0) {
    return 0;
  }
  return *puVar1;
}



// FUNCTION 14256c970 GetLightBuildData body=90 status=ok
// SIG undefined GetLightBuildData(void)

longlong UMapBuildDataRegistry::GetLightBuildData(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int local_res8 [8];
  
  TSet<TTuple<FGuid,FLightComponentMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FLightComponentMapBuildData,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x120),local_res8);
  if (local_res8[0] == -1) {
    return 0;
  }
  lVar2 = (longlong)local_res8[0] * 0x90 + *(longlong *)(param_1 + 0x120);
  lVar1 = lVar2 + 0x10;
  if (lVar2 == 0) {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 14256c9d0 FUN_14256c9d0 body=102 status=ok
// SIG undefined FUN_14256c9d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14256c9d0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146afd0f8) {
    _Init_thread_header(&DAT_146afd0f8);
    if (DAT_146afd0f8 == -1) {
      _DAT_146afd0e8 = 0;
      _DAT_146afd0f0 = 0;
      _Init_thread_footer(&DAT_146afd0f8);
    }
  }
  return &DAT_146afd0e8;
}



// FUNCTION 14256ca40 FUN_14256ca40 body=40 status=ok
// SIG undefined FUN_14256ca40(void)

void FUN_14256ca40(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x2b8))();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014256ca5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x278))(plVar1);
    return;
  }
  return;
}



// FUNCTION 14256ca70 FUN_14256ca70 body=85 status=ok
// SIG undefined FUN_14256ca70(void)

undefined1 FUN_14256ca70(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialFunctionInterface.h"
             ,0x35,L"Pure virtual not implemented (%s)",
             L"UMaterialFunctionInterface::GetMaterialFunctionUsage");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialFunctionInterface.h"
             ,0x35,L"Pure virtual not implemented (%s)",
             L"UMaterialFunctionInterface::GetMaterialFunctionUsage");
  return 0;
}



// FUNCTION 14256cad0 FUN_14256cad0 body=377 status=ok
// SIG undefined FUN_14256cad0(void)

undefined8 FUN_14256cad0(longlong param_1,longlong *param_2,longlong param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  undefined8 uVar4;
  bool bVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  
  plVar8 = *(longlong **)(param_1 + 0x740);
  plVar1 = plVar8 + *(int *)(param_1 + 0x748);
  do {
    if (plVar8 == plVar1) {
      *(undefined4 *)(param_3 + 8) = 0;
      if (*(int *)(param_3 + 0xc) != 0) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(param_3,0);
      }
      *(undefined4 *)(param_3 + 0x18) = 0;
      if (*(int *)(param_3 + 0x1c) != 0) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(param_3 + 0x10,0);
      }
      return 0;
    }
    lVar3 = *plVar8;
    if (lVar3 != 0) {
      lVar6 = FUN_1429af6e0();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if ((bVar5) && (*param_2 == *(longlong *)(lVar3 + 0x40))) {
        lVar6 = *(longlong *)(lVar3 + 0x100);
        if (lVar6 == 0) {
          lVar6 = lVar3 + 0x90;
        }
        TArray<FName,FDefaultAllocator>::operator=(param_3,lVar6);
        lVar6 = *(longlong *)(lVar3 + 0x100) + 0x10;
        if (*(longlong *)(lVar3 + 0x100) == 0) {
          lVar6 = lVar3 + 0xa0;
        }
        TArray<FName,FDefaultAllocator>::operator=(param_3 + 0x10,lVar6);
        puVar7 = (undefined8 *)(*(longlong *)(lVar3 + 0x100) + 0x20);
        if (*(longlong *)(lVar3 + 0x100) == 0) {
          puVar7 = (undefined8 *)(lVar3 + 0xb0);
        }
        puVar9 = (undefined8 *)(param_3 + 0x20);
        if (puVar9 != puVar7) {
          iVar2 = *(int *)(puVar7 + 1);
          _Src = (void *)*puVar7;
          *(int *)(param_3 + 0x28) = iVar2;
          if ((iVar2 == 0) && (*(int *)(param_3 + 0x2c) == 0)) {
            *(undefined4 *)(param_3 + 0x2c) = 0;
            uVar4 = *(undefined8 *)(lVar3 + 0x50);
            *param_4 = *(undefined8 *)(lVar3 + 0x48);
            param_4[1] = uVar4;
            return 1;
          }
          TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(puVar9,iVar2);
          _guard_xfg_dispatch_icall_nop((void *)*puVar9,_Src,(longlong)iVar2);
        }
        uVar4 = *(undefined8 *)(lVar3 + 0x50);
        *param_4 = *(undefined8 *)(lVar3 + 0x48);
        param_4[1] = uVar4;
        return 1;
      }
    }
    plVar8 = plVar8 + 1;
  } while( true );
}



// FUNCTION 14256cc70 FUN_14256cc70 body=138 status=ok
// SIG undefined FUN_14256cc70(void)

undefined8 FUN_14256cc70(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res10 [2];
  
  if (param_3 == 3) {
    FUN_1428742e0();
  }
  TSet<TTuple<FObjectKey,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 2000,local_res10);
  puVar2 = (undefined8 *)0x0;
  if (local_res10[0] != -1) {
    puVar2 = (undefined8 *)(*(longlong *)(param_1 + 2000) + (longlong)local_res10[0] * 0x18);
  }
  puVar1 = puVar2 + 1;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  if (puVar1 == (undefined8 *)0x0) {
    return 0;
  }
  return *puVar1;
}



// FUNCTION 14256cd00 FUN_14256cd00 body=177 status=ok
// SIG undefined FUN_14256cd00(void)

void FUN_14256cd00(longlong param_1,ulonglong param_2,longlong *param_3,undefined8 *param_4)

{
  byte bVar1;
  WriteBytesMem *this;
  uchar *puVar2;
  longlong *plVar3;
  
  this = (WriteBytesMem *)
         (**(code **)(**(longlong **)(param_1 + 0x138) + 0x300))
                   (*(longlong **)(param_1 + 0x138),param_2,3);
  if ((this != (WriteBytesMem *)0x0) &&
     (puVar2 = AK::WriteBytesMem::Bytes(this), puVar2 != (uchar *)0x0)) {
    *param_3 = param_1;
    *param_4 = this;
    return;
  }
  bVar1 = *(byte *)(*(longlong *)(param_1 + 0x138) + 0x140);
  FUN_142570f00();
  plVar3 = (longlong *)
           (**(code **)(*(longlong *)(&DAT_146afd0b8)[bVar1] + 0x2a8))
                     ((longlong *)(&DAT_146afd0b8)[bVar1],0,0);
  (**(code **)(*plVar3 + 0x40))(plVar3,param_2 & 0xffffffff,param_3,param_4);
  return;
}



// FUNCTION 14256cdc0 GetMeshBuildData body=87 status=ok
// SIG undefined GetMeshBuildData(void)

longlong UMapBuildDataRegistry::GetMeshBuildData(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int local_res8 [8];
  
  TSet<TTuple<FGuid,FExternalTextureRegistry::FExternalTextureEntry>,TDefaultMapHashableKeyFuncs<FGuid,FExternalTextureRegistry::FExternalTextureEntry,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x30),local_res8);
  if (local_res8[0] == -1) {
    return 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x30) + (longlong)local_res8[0] * 0x48;
  lVar2 = lVar1 + 0x10;
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 14256ce30 FUN_14256ce30 body=573 status=ok
// SIG undefined FUN_14256ce30(void)

undefined8 FUN_14256ce30(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  bool bVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 *local_28;
  undefined8 local_20;
  
  plVar4 = (longlong *)(**(code **)(*param_1 + 0x2b8))();
  if (plVar4 != (longlong *)0x0) {
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    (**(code **)(*plVar4 + 0x2a0))(plVar4,&local_28);
    uVar1 = local_20;
    lVar8 = (longlong)(int)local_20;
    for (puVar7 = local_28; puVar7 != local_28 + lVar8; puVar7 = puVar7 + 1) {
      if ((longlong *)*puVar7 == plVar4) {
        if ((int)((longlong)puVar7 - (longlong)local_28 >> 3) != -1) goto LAB_14256cee7;
        break;
      }
    }
    iVar3 = (int)local_20 + 1;
    local_20 = CONCAT44(local_20._4_4_,iVar3);
    if (local_20._4_4_ < iVar3) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                (&local_28,uVar1 & 0xffffffff);
    }
    local_28[lVar8] = plVar4;
LAB_14256cee7:
    puVar7 = local_28 + (int)local_20;
    for (puVar10 = local_28; puVar10 != puVar7; puVar10 = puVar10 + 1) {
      plVar4 = (longlong *)(**(code **)(*(longlong *)*puVar10 + 0x2c0))();
      plVar9 = (longlong *)*plVar4;
      plVar4 = plVar9 + (int)plVar4[1];
      for (; plVar9 != plVar4; plVar9 = plVar9 + 1) {
        lVar8 = *plVar9;
        if (lVar8 != 0) {
          lVar5 = FUN_1429afb00();
          if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            if (*(longlong *)(lVar8 + 0x40) == *param_2) {
              uVar6 = *(undefined8 *)(lVar8 + 0x58);
              goto LAB_14256d056;
            }
          }
          else {
            lVar5 = UCompositingMediaInput::StaticClass();
            if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              if (*(longlong *)(lVar8 + 0x1b8) == *param_2) {
                uVar6 = *(undefined8 *)(lVar8 + 0x1d0);
LAB_14256d056:
                *param_3 = uVar6;
                if (local_28 != (undefined8 *)0x0) {
                  FMemory::Free();
                }
                return 1;
              }
            }
            else {
              lVar5 = UMaterialExpressionFontSampleParameter::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if ((bVar2) && (*(longlong *)(lVar8 + 0x50) == *param_2)) {
                uVar6 = *(undefined8 *)(lVar8 + 0x68);
                goto LAB_14256d056;
              }
            }
          }
        }
      }
    }
    if (local_28 != (undefined8 *)0x0) {
      FMemory::Free(local_28);
    }
  }
  return 0;
}



// FUNCTION 14256d090 FUN_14256d090 body=1214 status=ok
// SIG undefined FUN_14256d090(void)

void FUN_14256d090(longlong param_1,undefined1 *param_2)

{
  bool bVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong *plVar16;
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  
  iVar3 = *(int *)(param_2 + 0x10);
  *(int *)(param_2 + 0x10) = iVar3 + 3;
  if (*(int *)(param_2 + 0x14) < iVar3 + 3) {
    TArray<bool,TInlineAllocator<3,FDefaultAllocator>_>::ResizeGrow(param_2,iVar3);
  }
  uVar13 = 0;
  puVar10 = *(undefined1 **)(param_2 + 8);
  if (*(undefined1 **)(param_2 + 8) == (undefined1 *)0x0) {
    puVar10 = param_2;
  }
  *(undefined2 *)(puVar10 + iVar3) = 0;
  puVar10[(longlong)iVar3 + 2] = 0;
  uVar15 = uVar13;
  if (0 < *(int *)(param_1 + 0x748)) {
    do {
      lVar8 = 0;
      lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x740) + uVar13 * 8);
      if (lVar12 == 0) {
LAB_14256d149:
        lVar4 = lVar8;
      }
      else {
        lVar4 = UTexture2D::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        lVar4 = lVar12;
        if (!bVar1) goto LAB_14256d149;
      }
      if (lVar12 == 0) {
LAB_14256d18a:
        lVar5 = lVar8;
      }
      else {
        lVar5 = UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        lVar5 = lVar12;
        if (!bVar1) goto LAB_14256d18a;
      }
      if (lVar12 == 0) {
LAB_14256d1c8:
        lVar12 = lVar8;
      }
      else {
        lVar6 = FUN_1429af6e0();
        if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) goto LAB_14256d1c8;
      }
      if (lVar4 == 0) {
        if ((lVar5 == 0) || (plVar9 = *(longlong **)(lVar5 + 0x40), plVar9 == (longlong *)0x0)) {
          if (lVar12 == 0) goto LAB_14256d518;
          local_58 = (longlong *)0x0;
          local_50 = 0;
          FUN_14256b930(lVar12,&local_58);
          plVar9 = local_58 + (int)local_50;
          plVar7 = local_58;
          for (plVar16 = local_58; local_58 = plVar7, plVar16 != plVar9; plVar16 = plVar16 + 1) {
            plVar7 = (longlong *)(**(code **)(*(longlong *)*plVar16 + 0x2c0))();
            plVar11 = (longlong *)*plVar7;
            plVar7 = plVar11 + (int)plVar7[1];
            for (; plVar11 != plVar7; plVar11 = plVar11 + 1) {
              lVar12 = *plVar11;
              if (lVar12 != 0) {
                lVar8 = UTexture2D::GetPrivateStaticClass();
                if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
                  bVar1 = false;
                }
                else {
                  bVar1 = true;
                }
                if (bVar1) {
                  if (*(longlong *)(lVar12 + 0x98) != 0) {
                    puVar10 = *(undefined1 **)(param_2 + 8);
                    if (*(undefined1 **)(param_2 + 8) == (undefined1 *)0x0) {
                      puVar10 = param_2;
                    }
                    *puVar10 = 1;
                  }
                  if (*(longlong *)(lVar12 + 200) != 0) {
                    puVar10 = *(undefined1 **)(param_2 + 8);
                    if (*(undefined1 **)(param_2 + 8) == (undefined1 *)0x0) {
                      puVar10 = param_2;
                    }
                    puVar10[1] = 1;
                  }
                  if (*(longlong *)(lVar12 + 0xf8) != 0) {
                    puVar10 = *(undefined1 **)(param_2 + 8);
                    if (*(undefined1 **)(param_2 + 8) == (undefined1 *)0x0) {
                      puVar10 = param_2;
                    }
                    puVar10[2] = 1;
                  }
                }
              }
            }
            plVar7 = local_58;
          }
        }
        else {
          local_68 = (longlong *)0x0;
          local_60 = 0;
          (**(code **)(*plVar9 + 0x2a0))(plVar9,&local_68);
          uVar2 = local_60;
          lVar12 = (longlong)(int)local_60;
          if (local_68 != local_68 + lVar12) {
            plVar9 = local_68;
            do {
              if (*plVar9 == *(longlong *)(lVar5 + 0x40)) {
                if ((int)((longlong)plVar9 - (longlong)local_68 >> 3) != -1) goto LAB_14256d2dd;
                break;
              }
              plVar9 = plVar9 + 1;
            } while (plVar9 != local_68 + lVar12);
          }
          iVar3 = (int)local_60 + 1;
          local_60 = CONCAT44(local_60._4_4_,iVar3);
          if (local_60._4_4_ < iVar3) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                      (&local_68,uVar2 & 0xffffffff);
          }
          local_68[lVar12] = *(longlong *)(lVar5 + 0x40);
LAB_14256d2dd:
          plVar9 = local_68 + (int)local_60;
          plVar7 = local_68;
          for (plVar16 = local_68; local_68 = plVar7, plVar16 != plVar9; plVar16 = plVar16 + 1) {
            plVar7 = (longlong *)(**(code **)(*(longlong *)*plVar16 + 0x2c0))();
            plVar11 = (longlong *)*plVar7;
            plVar7 = plVar11 + (int)plVar7[1];
            for (; plVar11 != plVar7; plVar11 = plVar11 + 1) {
              lVar12 = *plVar11;
              if (lVar12 != 0) {
                lVar8 = UTexture2D::GetPrivateStaticClass();
                if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
                  bVar1 = false;
                }
                else {
                  bVar1 = true;
                }
                if (bVar1) {
                  if (*(longlong *)(lVar12 + 0x98) != 0) {
                    puVar10 = *(undefined1 **)(param_2 + 8);
                    if (*(undefined1 **)(param_2 + 8) == (undefined1 *)0x0) {
                      puVar10 = param_2;
                    }
                    *puVar10 = 1;
                  }
                  if (*(longlong *)(lVar12 + 200) != 0) {
                    puVar10 = *(undefined1 **)(param_2 + 8);
                    if (*(undefined1 **)(param_2 + 8) == (undefined1 *)0x0) {
                      puVar10 = param_2;
                    }
                    puVar10[1] = 1;
                  }
                  if (*(longlong *)(lVar12 + 0xf8) != 0) {
                    puVar10 = *(undefined1 **)(param_2 + 8);
                    if (*(undefined1 **)(param_2 + 8) == (undefined1 *)0x0) {
                      puVar10 = param_2;
                    }
                    puVar10[2] = 1;
                  }
                }
              }
            }
            plVar7 = local_68;
          }
        }
        if (plVar7 != (longlong *)0x0) {
          FMemory::Free(plVar7);
        }
      }
      else {
        if (*(longlong *)(lVar4 + 0x98) != 0) {
          puVar10 = *(undefined1 **)(param_2 + 8);
          if (*(undefined1 **)(param_2 + 8) == (undefined1 *)0x0) {
            puVar10 = param_2;
          }
          *puVar10 = 1;
        }
        if (*(longlong *)(lVar4 + 200) != 0) {
          puVar10 = *(undefined1 **)(param_2 + 8);
          if (*(undefined1 **)(param_2 + 8) == (undefined1 *)0x0) {
            puVar10 = param_2;
          }
          puVar10[1] = 1;
        }
        if (*(longlong *)(lVar4 + 0xf8) != 0) {
          puVar10 = *(undefined1 **)(param_2 + 8);
          if (*(undefined1 **)(param_2 + 8) == (undefined1 *)0x0) {
            puVar10 = param_2;
          }
          puVar10[2] = 1;
        }
      }
LAB_14256d518:
      uVar14 = (int)uVar15 + 1;
      uVar13 = uVar13 + 1;
      uVar15 = (ulonglong)uVar14;
    } while ((int)uVar14 < *(int *)(param_1 + 0x748));
  }
  return;
}



// FUNCTION 14256d550 FUN_14256d550 body=212 status=ok
// SIG undefined FUN_14256d550(void)

void FUN_14256d550(longlong param_1,byte *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  longlong lVar3;
  byte *pbVar4;
  
  if (*(int *)(param_1 + 0x7b8) == 3) {
    iVar1 = *(int *)(param_1 + 0x7b8);
    _Src = *(void **)(param_1 + 0x7b0);
    *(int *)(param_2 + 0x10) = iVar1;
    if ((iVar1 == 0) && (*(int *)(param_2 + 0x14) == 0)) {
      param_2[0x14] = 0;
      param_2[0x15] = 0;
      param_2[0x16] = 0;
      param_2[0x17] = 0;
    }
    else {
      FUN_142575c60(param_2,iVar1);
      pbVar4 = *(byte **)(param_2 + 8);
      if (*(byte **)(param_2 + 8) == (byte *)0x0) {
        pbVar4 = param_2;
      }
      _guard_xfg_dispatch_icall_nop(pbVar4,_Src,(longlong)iVar1);
    }
  }
  else {
    FUN_14256d090();
  }
  if (param_3 != 0x20) {
    uVar2 = UMaterialShaderQualitySettings::Get();
    lVar3 = UMaterialShaderQualitySettings::GetShaderPlatformQualitySettings(uVar2,param_3);
    pbVar4 = *(byte **)(param_2 + 8);
    if (*(byte **)(param_2 + 8) == (byte *)0x0) {
      pbVar4 = param_2;
    }
    *pbVar4 = *pbVar4 | *(byte *)(lVar3 + 0x28);
    pbVar4 = *(byte **)(param_2 + 8);
    if (*(byte **)(param_2 + 8) == (byte *)0x0) {
      pbVar4 = param_2;
    }
    pbVar4[2] = pbVar4[2] | *(byte *)(lVar3 + 0x36);
  }
  return;
}



// FUNCTION 14256d640 FUN_14256d640 body=40 status=ok
// SIG undefined FUN_14256d640(void)

void FUN_14256d640(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x2b0))();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014256d65c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x2d0))(plVar1);
    return;
  }
  return;
}



// FUNCTION 14256d670 GetReentrantFlag body=85 status=ok
// SIG undefined GetReentrantFlag(void)

undefined1 UMaterialFunctionInterface::GetReentrantFlag(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialFunctionInterface.h"
             ,0x7c,L"Pure virtual not implemented (%s)",
             L"UMaterialFunctionInterface::GetReentrantFlag");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialFunctionInterface.h"
             ,0x7c,L"Pure virtual not implemented (%s)",
             L"UMaterialFunctionInterface::GetReentrantFlag");
  return 0;
}



// FUNCTION 14256d700 FUN_14256d700 body=89 status=ok
// SIG undefined FUN_14256d700(void)

longlong FUN_14256d700(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int local_res8 [8];
  
  FUN_14256a540((longlong *)(param_1 + 0x170),local_res8);
  if (local_res8[0] == -1) {
    return 0;
  }
  lVar2 = (longlong)local_res8[0] * 0xe0 + *(longlong *)(param_1 + 0x170);
  lVar1 = lVar2 + 0x10;
  if (lVar2 == 0) {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 14256d810 FUN_14256d810 body=233 status=ok
// SIG undefined FUN_14256d810(void)

void FUN_14256d810(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar5;
  longlong *plVar6;
  int local_res18 [2];
  int local_res20;
  int local_res24;
  longlong *plVar4;
  
  FUN_141758340();
  if (*(longlong *)(param_1 + 0x798) != 0) {
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 0x140;
  }
  if (*(longlong *)(param_1 + 0x7a0) != 0) {
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 0x140;
  }
  if (*(longlong *)(param_1 + 0x7a8) != 0) {
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 0x140;
  }
  plVar6 = (longlong *)0x0;
  plVar5 = plVar6;
  do {
    plVar4 = plVar6;
    local_res20 = (int)plVar5;
    do {
      local_res24 = (int)plVar4;
      TSet<TTuple<FObjectKey,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
      ::FindId(param_1 + 2000,local_res18,&local_res20);
      plVar2 = plVar6;
      if (local_res18[0] != -1) {
        plVar2 = (longlong *)(*(longlong *)(param_1 + 2000) + (longlong)local_res18[0] * 0x18);
      }
      plVar1 = plVar2 + 1;
      if (plVar2 == (longlong *)0x0) {
        plVar1 = plVar6;
      }
      if ((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) {
        FUN_1425924f0(*plVar1,param_2);
      }
      uVar3 = (int)plVar4 + 1;
      plVar4 = (longlong *)(ulonglong)uVar3;
    } while ((int)uVar3 < 4);
    uVar3 = (int)plVar5 + 1;
    plVar5 = (longlong *)(ulonglong)uVar3;
  } while ((int)uVar3 < 3);
  return;
}



// FUNCTION 14256d910 FUN_14256d910 body=522 status=ok
// SIG undefined FUN_14256d910(void)

ulonglong FUN_14256d910(longlong param_1,longlong *param_2,undefined4 *param_3,undefined4 *param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint7 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong local_res8;
  
  plVar11 = *(longlong **)(param_1 + 0x740);
  puVar5 = (undefined8 *)(longlong)*(int *)(param_1 + 0x748);
  local_res8 = 0;
  plVar1 = plVar11 + (longlong)puVar5;
  do {
    if (plVar11 == plVar1) {
      return (ulonglong)puVar5 & 0xffffffffffffff00;
    }
    lVar9 = *plVar11;
    if (*(char *)((longlong)param_2 + 0xb) == '\x02') {
      if (lVar9 != 0) {
        lVar6 = UMaterialExpressionScalarParameter::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          puVar5 = *(undefined8 **)(lVar9 + 0x40);
          if ((undefined8 *)*param_2 == puVar5) {
            *param_3 = *(undefined4 *)(lVar9 + 100);
            uVar2 = *(undefined4 *)(lVar9 + 0x68);
            *param_4 = uVar2;
            return CONCAT71((uint7)(uint3)((uint)uVar2 >> 8),1);
          }
        }
        else {
          lVar6 = UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass();
          iVar3 = *(int *)(lVar6 + 0x90);
          uVar7 = (longlong)iVar3;
          if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < iVar3) ||
             (uVar7 = *(ulonglong *)(*(longlong *)(lVar9 + 0x10) + 0x88),
             *(longlong *)(uVar7 + (longlong)iVar3 * 8) != lVar6 + 0x88)) {
            puVar5 = (undefined8 *)(uVar7 & 0xffffffffffffff00);
          }
          else {
            puVar5 = (undefined8 *)CONCAT71((int7)(uVar7 >> 8),1);
          }
          if ((char)puVar5 != '\0') {
            lVar9 = *(longlong *)(lVar9 + 0x40);
LAB_14256dac4:
            if ((lVar9 != 0) &&
               (puVar5 = (undefined8 *)FUN_14255a0d0(lVar9,param_2,&local_res8,0),
               (char)puVar5 != '\0')) {
              *param_3 = *(undefined4 *)(local_res8 + 100);
              uVar2 = *(undefined4 *)(local_res8 + 0x68);
              *param_4 = uVar2;
              return CONCAT71((uint7)(uint3)((uint)uVar2 >> 8),1);
            }
          }
        }
      }
    }
    else if (lVar9 != 0) {
      lVar6 = FUN_1429af6e0();
      iVar3 = *(int *)(lVar6 + 0x90);
      uVar7 = (longlong)iVar3;
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < iVar3) ||
         (uVar7 = *(ulonglong *)(*(longlong *)(lVar9 + 0x10) + 0x88),
         *(longlong *)(uVar7 + (longlong)iVar3 * 8) != lVar6 + 0x88)) {
        puVar5 = (undefined8 *)(uVar7 & 0xffffffffffffff00);
      }
      else {
        puVar5 = (undefined8 *)CONCAT71((int7)(uVar7 >> 8),1);
      }
      if ((char)puVar5 != '\0') {
        puVar5 = (undefined8 *)0x0;
        if (*(char *)((longlong)param_2 + 0xb) == '\0') {
          puVar5 = *(undefined8 **)(lVar9 + 0x100);
          if (puVar5 == (undefined8 *)0x0) {
            puVar5 = (undefined8 *)(lVar9 + 0x90);
          }
          iVar3 = *(int *)((longlong)param_2 + 0xc);
          if ((iVar3 < 0) || (*(int *)(puVar5 + 1) <= iVar3)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            puVar5 = (undefined8 *)*puVar5;
LAB_14256dac0:
            lVar9 = puVar5[iVar3];
            goto LAB_14256dac4;
          }
        }
        else if (*(char *)((longlong)param_2 + 0xb) == '\x01') {
          iVar3 = *(int *)((longlong)param_2 + 0xc);
          puVar10 = (undefined8 *)(*(longlong *)(lVar9 + 0x100) + 0x10);
          if (*(longlong *)(lVar9 + 0x100) == 0) {
            puVar10 = (undefined8 *)(lVar9 + 0xa0);
          }
          uVar8 = (uint7)((ulonglong)(lVar9 + 0xa0) >> 8);
          if ((iVar3 < 0) || (*(int *)(puVar10 + 1) <= iVar3)) {
            puVar5 = (undefined8 *)((ulonglong)uVar8 << 8);
          }
          else {
            puVar5 = (undefined8 *)CONCAT71(uVar8,1);
          }
          if ((char)puVar5 != '\0') {
            puVar5 = (undefined8 *)*puVar10;
            goto LAB_14256dac0;
          }
        }
      }
    }
    plVar11 = plVar11 + 1;
  } while( true );
}



// FUNCTION 14256db20 FUN_14256db20 body=193 status=ok
// SIG undefined FUN_14256db20(void)

ulonglong FUN_14256db20(longlong param_1,int *param_2,int *param_3,char param_4)

{
  int iVar1;
  ulonglong uVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  if ((param_4 == '\0') || (uVar2 = FUN_1425b3950(), (char)uVar2 != '\0')) {
    if (*(char *)(param_1 + 0x838) == '\0') {
      FUN_142568050(param_1,0);
    }
    piVar4 = *(int **)(param_1 + 0x840);
    piVar6 = (int *)0x0;
    piVar3 = piVar4 + (longlong)*(int *)(param_1 + 0x848) * 6;
    piVar5 = piVar6;
    if (piVar4 != piVar3) {
      do {
        if ((((*piVar4 == *param_2) && (piVar4[1] == param_2[1])) &&
            (*(char *)((longlong)piVar4 + 0xb) == *(char *)((longlong)param_2 + 0xb))) &&
           (piVar5 = piVar4, piVar4[3] == param_2[3])) break;
        piVar4 = piVar4 + 6;
        piVar5 = piVar6;
      } while (piVar4 != piVar3);
    }
    piVar3 = piVar5 + 4;
    if (piVar5 == (int *)0x0) {
      piVar3 = piVar6;
    }
    uVar2 = 0;
    if (piVar3 != (int *)0x0) {
      iVar1 = *piVar3;
      *param_3 = iVar1;
      return CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 14256dbf0 FUN_14256dbf0 body=265 status=ok
// SIG undefined FUN_14256dbf0(void)

undefined8 FUN_14256dbf0(longlong param_1,longlong *param_2,float *param_3,longlong param_4)

{
  int iVar1;
  WriteBytesMem *this;
  uchar *puVar2;
  
  this = (WriteBytesMem *)
         (**(code **)(**(longlong **)(param_1 + 0x138) + 0x300))
                   (*(longlong **)(param_1 + 0x138),
                    *(undefined4 *)(*(longlong *)(param_4 + 8) + 0x20),3);
  if (this != (WriteBytesMem *)0x0) {
    puVar2 = AK::WriteBytesMem::Bytes(this);
    if (puVar2 != (uchar *)0x0) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38) < DAT_146afd1b0) {
        _Init_thread_header(&DAT_146afd1b0);
        if (DAT_146afd1b0 == -1) {
          FName::FName(&DAT_146afd1a8,L"__SubsurfaceProfile",1);
          _Init_thread_footer(&DAT_146afd1b0);
        }
      }
      if (*param_2 == DAT_146afd1a8) {
        if (*(longlong *)(param_1 + 0x118) == 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = FSubsurfaceProfileTexture::FindAllocationId(&PTR_PTR_146534b70);
        }
        *param_3 = (float)iVar1 * 0.003921569;
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 14256dd00 FUN_14256dd00 body=552 status=ok
// SIG undefined FUN_14256dd00(void)

void FUN_14256dd00(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined4 *puVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined4 *puVar12;
  longlong local_68 [8];
  
  FUN_1425943a0();
  lVar10 = *(longlong *)(param_1 + 0x28);
  uVar8 = 0;
  uVar11 = uVar8;
  if (0 < *(int *)(lVar10 + 0x758)) {
    do {
      puVar12 = (undefined4 *)(*(longlong *)(lVar10 + 0x750) + uVar11);
      iVar6 = TArray<FGuid,FDefaultAllocator>::IndexOfByKey<FGuid>(param_3 + 0x70,puVar12);
      if (iVar6 == -1) {
        iVar6 = *(int *)(param_3 + 0x78);
        *(int *)(param_3 + 0x78) = iVar6 + 1;
        if (*(int *)(param_3 + 0x7c) < iVar6 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3 + 0x70,iVar6);
        }
        uVar3 = puVar12[1];
        uVar4 = puVar12[2];
        uVar5 = puVar12[3];
        puVar1 = (undefined4 *)(*(longlong *)(param_3 + 0x70) + (longlong)iVar6 * 0x10);
        *puVar1 = *puVar12;
        puVar1[1] = uVar3;
        puVar1[2] = uVar4;
        puVar1[3] = uVar5;
      }
      uVar9 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar9;
      uVar11 = uVar11 + 0x18;
    } while ((int)uVar9 < *(int *)(lVar10 + 0x758));
    lVar10 = *(longlong *)(param_1 + 0x28);
  }
  uVar8 = 0;
  plVar2 = (longlong *)(param_3 + 0x80);
  uVar11 = uVar8;
  if (0 < *(int *)(lVar10 + 0x768)) {
    do {
      puVar12 = (undefined4 *)(*(longlong *)(lVar10 + 0x760) + uVar11);
      iVar6 = TArray<FGuid,FDefaultAllocator>::IndexOfByKey<FGuid>(plVar2,puVar12);
      if (iVar6 == -1) {
        iVar6 = *(int *)(param_3 + 0x88);
        *(int *)(param_3 + 0x88) = iVar6 + 1;
        if (*(int *)(param_3 + 0x8c) < iVar6 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar2,iVar6);
        }
        uVar3 = puVar12[1];
        uVar4 = puVar12[2];
        uVar5 = puVar12[3];
        puVar1 = (undefined4 *)(*plVar2 + (longlong)iVar6 * 0x10);
        *puVar1 = *puVar12;
        puVar1[1] = uVar3;
        puVar1[2] = uVar4;
        puVar1[3] = uVar5;
      }
      uVar9 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar9;
      uVar11 = uVar11 + 0x18;
    } while ((int)uVar9 < *(int *)(lVar10 + 0x768));
    lVar10 = *(longlong *)(param_1 + 0x28);
  }
  FUN_14256bf30(lVar10,param_3 + 0xd0);
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_14258e9e0(*(longlong *)(param_1 + 0x30),param_3 + 0xe4);
    if (((*(uint *)(param_1 + 0x24) >> 1 & 1) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0x30) + 0x98) & 1) != 0)) {
      uVar7 = FUN_140aaea60();
      FMaterialShaderMapId::UpdateParameterSet(param_3,uVar7);
      return;
    }
    local_68[0] = 0;
    local_68[1] = 0;
    local_68[2] = 0;
    local_68[3] = 0;
    local_68[4] = 0;
    local_68[5] = 0;
    local_68[6] = 0;
    local_68[7] = 0;
    FUN_142595aa0(*(undefined8 *)(param_1 + 0x30),local_68);
    FMaterialShaderMapId::UpdateParameterSet(param_3,local_68);
    TArray<FStaticMaterialLayersParameter,FDefaultAllocator>::
    ~TArray<FStaticMaterialLayersParameter,FDefaultAllocator>(local_68 + 6);
    if (local_68[4] != 0) {
      FMemory::Free();
    }
    if (local_68[2] != 0) {
      FMemory::Free();
    }
    if (local_68[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 14256df90 FUN_14256df90 body=897 status=ok
// SIG undefined FUN_14256df90(void)

byte FUN_14256df90(longlong param_1,longlong *param_2,byte *param_3,byte *param_4,byte *param_5,
                  byte *param_6,undefined8 *param_7,byte param_8)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 local_48;
  longlong *local_40;
  
  plVar10 = *(longlong **)(param_1 + 0x740);
  local_48 = 0;
  plVar1 = plVar10 + *(int *)(param_1 + 0x748);
  do {
    if (plVar10 == plVar1) {
      return 0;
    }
    lVar8 = *plVar10;
    if (*(char *)((longlong)param_2 + 0xb) == '\x02') {
      if (lVar8 != 0) {
        lVar6 = FUN_1429b4960();
        if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          if (*param_2 == *(longlong *)(lVar8 + 0x40)) {
            *param_3 = *(byte *)(lVar8 + 0x90) & 1;
            *param_4 = (byte)(*(uint *)(lVar8 + 0x90) >> 1) & 1;
            *param_5 = (byte)(*(uint *)(lVar8 + 0x90) >> 2) & 1;
            *param_6 = (byte)(*(uint *)(lVar8 + 0x90) >> 3) & 1;
            uVar3 = *(undefined8 *)(lVar8 + 0x50);
            *param_7 = *(undefined8 *)(lVar8 + 0x48);
            param_7[1] = uVar3;
            return 1;
          }
        }
        else {
          lVar6 = UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            plVar9 = *(longlong **)(lVar8 + 0x40);
            local_40 = (longlong *)0x0;
            if (plVar9 != (longlong *)0x0) {
              cVar5 = (**(code **)(*plVar9 + 0x308))
                                (plVar9,param_2,param_3,param_4,param_5,param_6,param_7);
              if (cVar5 != '\0') {
                return 1;
              }
              cVar5 = FUN_14255a410(plVar9,param_2,&local_48,&local_40);
              if (cVar5 != '\0') {
                cVar5 = (**(code **)(*local_40 + 0x308))
                                  (local_40,param_2,param_3,param_4,param_5,param_6,param_7);
                goto joined_r0x00014256e303;
              }
            }
          }
        }
      }
    }
    else if (lVar8 != 0) {
      lVar6 = FUN_1429af6e0();
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        plVar9 = (longlong *)0x0;
        if (*(char *)((longlong)param_2 + 0xb) == '\0') {
          plVar7 = *(longlong **)(lVar8 + 0x100);
          if (plVar7 == (longlong *)0x0) {
            plVar7 = (longlong *)(lVar8 + 0x90);
          }
          iVar2 = *(int *)((longlong)param_2 + 0xc);
          if ((iVar2 < 0) || ((int)plVar7[1] <= iVar2)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            lVar8 = *plVar7;
LAB_14256e245:
            plVar9 = *(longlong **)(lVar8 + (longlong)iVar2 * 8);
          }
        }
        else if (*(char *)((longlong)param_2 + 0xb) == '\x01') {
          iVar2 = *(int *)((longlong)param_2 + 0xc);
          plVar7 = (longlong *)(*(longlong *)(lVar8 + 0x100) + 0x10);
          if (*(longlong *)(lVar8 + 0x100) == 0) {
            plVar7 = (longlong *)(lVar8 + 0xa0);
          }
          if ((iVar2 < 0) || ((int)plVar7[1] <= iVar2)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          plVar9 = (longlong *)0x0;
          if (bVar4) {
            lVar8 = *plVar7;
            goto LAB_14256e245;
          }
        }
        local_40 = (longlong *)0x0;
        if (plVar9 != (longlong *)0x0) {
          cVar5 = (**(code **)(*plVar9 + 0x308))
                            (plVar9,param_2,param_3,param_4,param_5,param_6,param_7);
          if (cVar5 != '\0') {
            return 1;
          }
          cVar5 = FUN_14255a410(plVar9,param_2,&local_48,&local_40);
          if (cVar5 != '\0') {
            cVar5 = (**(code **)(*local_40 + 0x308))
                              (local_40,param_2,param_3,param_4,param_5,param_6,param_7);
joined_r0x00014256e303:
            if (cVar5 != '\0') {
              return 1;
            }
            UMaterialExpressionStaticComponentMaskParameter::IsNamedParameter
                      (local_48,param_2,param_3,param_4,param_5,param_6,param_7);
            return param_8 ^ 1;
          }
        }
      }
    }
    plVar10 = plVar10 + 1;
  } while( true );
}



// FUNCTION 14256e320 FUN_14256e320 body=1207 status=ok
// SIG undefined FUN_14256e320(void)

longlong * FUN_14256e320(ulonglong *param_1,longlong *param_2)

{
  void *pvVar1;
  size_t sVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined2 *puVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong *plVar15;
  char *pcVar16;
  undefined2 *local_48;
  ulonglong local_40;
  longlong local_38 [2];
  
  uVar12 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  plVar15 = (longlong *)*param_1;
  uVar14 = (longlong)(int)param_1[1] & 0x1fffffffffffffff;
  if (plVar15 + (int)param_1[1] < plVar15) {
    uVar14 = uVar12;
  }
  if (uVar14 != 0) {
    do {
      if (((longlong *)*plVar15 == (longlong *)0x0) ||
         (lVar5 = (**(code **)(*(longlong *)*plVar15 + 0x2b8))(), lVar5 == 0)) {
        iVar10 = (int)param_2[1];
        iVar3 = (0xb - (uint)(iVar10 != 0)) + iVar10;
        *(int *)(param_2 + 1) = iVar3;
        if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar10);
        }
        lVar5 = (longlong)iVar10 - (ulonglong)(iVar10 != 0);
        builtin_wcsncpy((wchar_t *)(*param_2 + lVar5 * 2),L"_NullLay",8);
        lVar5 = *param_2 + lVar5 * 2;
        *(undefined4 *)(lVar5 + 0x10) = 0x720065;
        *(undefined2 *)(lVar5 + 0x14) = 0;
      }
      else {
        uVar6 = UObjectBaseUtility::GetOutermost(lVar5);
        puVar7 = (undefined8 *)UObjectBaseUtility::GetFullName(uVar6,local_38,0);
        local_48 = (undefined2 *)0x0;
        iVar10 = *(int *)(puVar7 + 1) + -1;
        if (*(int *)(puVar7 + 1) == 0) {
          iVar10 = 0;
        }
        uVar8 = iVar10 + 2;
        local_40 = (ulonglong)uVar8;
        if (0 < (int)uVar8) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
          uVar8 = (uint)local_40;
        }
        puVar9 = local_48;
        *local_48 = 0x5f;
        _guard_xfg_dispatch_icall_nop(local_48 + 1,(void *)*puVar7,(longlong)iVar10 * 2);
        puVar9[(longlong)iVar10 + 1] = 0;
        local_48 = (undefined2 *)0x0;
        local_40 = 0;
        if ((uVar8 != 0) && (uVar8 - 1 != 0)) {
          iVar10 = (int)param_2[1];
          iVar3 = (uint)(iVar10 == 0) + iVar10 + (uVar8 - 1);
          *(int *)(param_2 + 1) = iVar3;
          if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar10);
          }
          pvVar1 = (void *)(*param_2 + ((longlong)iVar10 - (ulonglong)(iVar10 != 0)) * 2);
          sVar2 = (longlong)(int)uVar8 * 2 - 2;
          _guard_xfg_dispatch_icall_nop(pvVar1,puVar9,sVar2);
          *(undefined2 *)((longlong)pvVar1 + sVar2) = 0;
        }
        if (puVar9 != (undefined2 *)0x0) {
          FMemory::Free(puVar9);
        }
        if (local_38[0] != 0) {
          FMemory::Free();
        }
      }
      plVar15 = plVar15 + 1;
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar14);
  }
  uVar12 = 0;
  plVar15 = (longlong *)param_1[2];
  uVar14 = (longlong)(int)param_1[3] & 0x1fffffffffffffff;
  if (plVar15 + (int)param_1[3] < plVar15) {
    uVar14 = uVar12;
  }
  if (uVar14 != 0) {
    do {
      if (((longlong *)*plVar15 == (longlong *)0x0) ||
         (lVar5 = (**(code **)(*(longlong *)*plVar15 + 0x2b8))(), lVar5 == 0)) {
        iVar10 = (int)param_2[1];
        iVar3 = (0xb - (uint)(iVar10 != 0)) + iVar10;
        *(int *)(param_2 + 1) = iVar3;
        if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar10);
        }
        lVar5 = (longlong)iVar10 - (ulonglong)(iVar10 != 0);
        builtin_wcsncpy((wchar_t *)(*param_2 + lVar5 * 2),L"_NullBle",8);
        lVar5 = *param_2 + lVar5 * 2;
        *(undefined4 *)(lVar5 + 0x10) = 0x64006e;
        *(undefined2 *)(lVar5 + 0x14) = 0;
      }
      else {
        uVar6 = UObjectBaseUtility::GetOutermost(lVar5);
        puVar7 = (undefined8 *)UObjectBaseUtility::GetFullName(uVar6,local_38,0);
        local_48 = (undefined2 *)0x0;
        iVar10 = *(int *)(puVar7 + 1) + -1;
        if (*(int *)(puVar7 + 1) == 0) {
          iVar10 = 0;
        }
        uVar8 = iVar10 + 2;
        local_40 = (ulonglong)uVar8;
        if (0 < (int)uVar8) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
          uVar8 = (uint)local_40;
        }
        puVar9 = local_48;
        *local_48 = 0x5f;
        _guard_xfg_dispatch_icall_nop(local_48 + 1,(void *)*puVar7,(longlong)iVar10 * 2);
        puVar9[(longlong)iVar10 + 1] = 0;
        local_48 = (undefined2 *)0x0;
        local_40 = 0;
        if ((uVar8 != 0) && (uVar8 - 1 != 0)) {
          iVar10 = (int)param_2[1];
          iVar3 = (uint)(iVar10 == 0) + (uVar8 - 1) + iVar10;
          *(int *)(param_2 + 1) = iVar3;
          if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar10);
          }
          pvVar1 = (void *)(*param_2 + ((longlong)iVar10 - (ulonglong)(iVar10 != 0)) * 2);
          sVar2 = (longlong)(int)uVar8 * 2 - 2;
          _guard_xfg_dispatch_icall_nop(pvVar1,puVar9,sVar2);
          *(undefined2 *)((longlong)pvVar1 + sVar2) = 0;
        }
        if (puVar9 != (undefined2 *)0x0) {
          FMemory::Free(puVar9);
        }
        if (local_38[0] != 0) {
          FMemory::Free();
        }
      }
      plVar15 = plVar15 + 1;
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar14);
  }
  lVar5 = 0;
  iVar10 = (int)param_2[1];
  iVar3 = (2 - (uint)(iVar10 != 0)) + iVar10;
  *(int *)(param_2 + 1) = iVar3;
  if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar10);
  }
  puVar9 = (undefined2 *)(*param_2 + ((longlong)iVar10 - (ulonglong)(iVar10 != 0)) * 2);
  *puVar9 = 0x5f;
  puVar9[1] = 0;
  pcVar16 = (char *)param_1[4];
  lVar13 = (longlong)(int)param_1[5];
  if (pcVar16 + (int)param_1[5] < pcVar16) {
    lVar13 = lVar5;
  }
  if (lVar13 != 0) {
    do {
      puVar9 = &DAT_1450f2240;
      lVar11 = -1;
      if (*pcVar16 != '\0') {
        puVar9 = &DAT_1450f223c;
      }
      do {
        lVar11 = lVar11 + 1;
      } while (puVar9[lVar11] != 0);
      iVar10 = (int)lVar11;
      if (iVar10 != 0) {
        iVar3 = (int)param_2[1];
        iVar4 = (uint)(iVar3 == 0) + iVar10 + iVar3;
        *(int *)(param_2 + 1) = iVar4;
        if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
        }
        pvVar1 = (void *)(*param_2 + ((longlong)iVar3 - (ulonglong)(iVar3 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar1,puVar9,(longlong)iVar10 * 2);
        *(undefined2 *)((longlong)iVar10 * 2 + (longlong)pvVar1) = 0;
      }
      pcVar16 = pcVar16 + 1;
      lVar5 = lVar5 + 1;
    } while (lVar5 != lVar13);
  }
  return param_2;
}



// FUNCTION 14256e7f0 FUN_14256e7f0 body=786 status=ok
// SIG undefined FUN_14256e7f0(void)

byte FUN_14256e7f0(longlong param_1,longlong *param_2,byte *param_3,undefined8 *param_4,byte param_5
                  )

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong local_res8;
  longlong *local_38 [2];
  
  plVar10 = *(longlong **)(param_1 + 0x740);
  local_res8 = 0;
  plVar1 = plVar10 + *(int *)(param_1 + 0x748);
  do {
    if (plVar10 == plVar1) {
      return 0;
    }
    lVar8 = *plVar10;
    if (*(char *)((longlong)param_2 + 0xb) == '\x02') {
      if (lVar8 != 0) {
        lVar6 = FUN_1429b47b0();
        if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          if (*param_2 == *(longlong *)(lVar8 + 0x40)) {
            *param_3 = *(byte *)(lVar8 + 0x60) & 1;
            uVar3 = *(undefined8 *)(lVar8 + 0x50);
            *param_4 = *(undefined8 *)(lVar8 + 0x48);
            param_4[1] = uVar3;
            return param_5 ^ 1;
          }
        }
        else {
          lVar6 = UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            plVar9 = *(longlong **)(lVar8 + 0x40);
            local_38[0] = (longlong *)0x0;
            if (plVar9 != (longlong *)0x0) {
              cVar5 = (**(code **)(*plVar9 + 0x300))(plVar9,param_2,param_3,param_4);
              if (cVar5 != '\0') {
                return 1;
              }
              cVar5 = FUN_14255a270(plVar9,param_2,&local_res8,local_38);
              if (cVar5 != '\0') {
                cVar5 = (**(code **)(*local_38[0] + 0x300))(local_38[0],param_2,param_3,param_4);
                if (cVar5 != '\0') {
                  return 1;
                }
                if (*param_2 == *(longlong *)(local_res8 + 0x40)) {
                  *param_3 = *(byte *)(local_res8 + 0x60) & 1;
                  uVar3 = *(undefined8 *)(local_res8 + 0x50);
                  *param_4 = *(undefined8 *)(local_res8 + 0x48);
                  param_4[1] = uVar3;
                  return param_5 ^ 1;
                }
                goto LAB_14256eaf4;
              }
            }
          }
        }
      }
    }
    else if (lVar8 != 0) {
      lVar6 = FUN_1429af6e0();
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        plVar9 = (longlong *)0x0;
        if (*(char *)((longlong)param_2 + 0xb) == '\0') {
          plVar7 = *(longlong **)(lVar8 + 0x100);
          if (plVar7 == (longlong *)0x0) {
            plVar7 = (longlong *)(lVar8 + 0x90);
          }
          iVar2 = *(int *)((longlong)param_2 + 0xc);
          if ((iVar2 < 0) || ((int)plVar7[1] <= iVar2)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            lVar8 = *plVar7;
LAB_14256ea45:
            plVar9 = *(longlong **)(lVar8 + (longlong)iVar2 * 8);
          }
        }
        else if (*(char *)((longlong)param_2 + 0xb) == '\x01') {
          iVar2 = *(int *)((longlong)param_2 + 0xc);
          plVar7 = (longlong *)(*(longlong *)(lVar8 + 0x100) + 0x10);
          if (*(longlong *)(lVar8 + 0x100) == 0) {
            plVar7 = (longlong *)(lVar8 + 0xa0);
          }
          if ((iVar2 < 0) || ((int)plVar7[1] <= iVar2)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          plVar9 = (longlong *)0x0;
          if (bVar4) {
            lVar8 = *plVar7;
            goto LAB_14256ea45;
          }
        }
        local_38[0] = (longlong *)0x0;
        if (plVar9 != (longlong *)0x0) {
          cVar5 = (**(code **)(*plVar9 + 0x300))(plVar9,param_2,param_3,param_4);
          if (cVar5 != '\0') {
            return 1;
          }
          cVar5 = FUN_14255a270(plVar9,param_2,&local_res8,local_38);
          if (cVar5 != '\0') {
            cVar5 = (**(code **)(*local_38[0] + 0x300))(local_38[0],param_2,param_3,param_4);
            if (cVar5 != '\0') {
              return 1;
            }
            if (*param_2 == *(longlong *)(local_res8 + 0x40)) {
              *param_3 = *(byte *)(local_res8 + 0x60) & 1;
              uVar3 = *(undefined8 *)(local_res8 + 0x50);
              *param_4 = *(undefined8 *)(local_res8 + 0x48);
              param_4[1] = uVar3;
            }
LAB_14256eaf4:
            return param_5 ^ 1;
          }
        }
      }
    }
    plVar10 = plVar10 + 1;
  } while( true );
}



// FUNCTION 14256eb30 FUN_14256eb30 body=195 status=ok
// SIG undefined FUN_14256eb30(void)

ulonglong FUN_14256eb30(longlong param_1,int *param_2,undefined8 *param_3,char param_4)

{
  undefined8 uVar1;
  ulonglong uVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  if ((param_4 == '\0') || (uVar2 = FUN_1425b3950(), (char)uVar2 != '\0')) {
    if (*(char *)(param_1 + 0x838) == '\0') {
      FUN_142568050(param_1,0);
    }
    piVar4 = *(int **)(param_1 + 0x860);
    piVar6 = (int *)0x0;
    piVar3 = piVar4 + (longlong)*(int *)(param_1 + 0x868) * 6;
    piVar5 = piVar6;
    if (piVar4 != piVar3) {
      do {
        if ((((*piVar4 == *param_2) && (piVar4[1] == param_2[1])) &&
            (*(char *)((longlong)piVar4 + 0xb) == *(char *)((longlong)param_2 + 0xb))) &&
           (piVar5 = piVar4, piVar4[3] == param_2[3])) break;
        piVar4 = piVar4 + 6;
        piVar5 = piVar6;
      } while (piVar4 != piVar3);
    }
    piVar3 = piVar5 + 4;
    if (piVar5 == (int *)0x0) {
      piVar3 = piVar6;
    }
    uVar2 = 0;
    if (piVar3 != (int *)0x0) {
      uVar1 = *(undefined8 *)piVar3;
      *param_3 = uVar1;
      return CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 14256ec10 FUN_14256ec10 body=8 status=ok
// SIG undefined FUN_14256ec10(void)

undefined * FUN_14256ec10(void)

{
  return &DAT_146afce00;
}



// FUNCTION 14256ec20 FUN_14256ec20 body=586 status=ok
// SIG undefined FUN_14256ec20(void)

byte FUN_14256ec20(longlong param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    return (byte)(*(uint *)(param_1 + 0x708) >> 7) & 1;
  case 1:
    return (byte)(*(uint *)(param_1 + 0x708) >> 9) & 1;
  case 2:
    return (byte)(*(uint *)(param_1 + 0x708) >> 0xb) & 1;
  case 3:
    return (byte)(*(uint *)(param_1 + 0x708) >> 0xc) & 1;
  case 4:
    return (byte)(*(uint *)(param_1 + 0x708) >> 0x11) & 1;
  case 5:
    return (byte)(*(uint *)(param_1 + 0x708) >> 0x12) & 1;
  case 6:
    return (byte)(*(uint *)(param_1 + 0x708) >> 0x13) & 1;
  case 7:
    return (byte)(*(uint *)(param_1 + 0x708) >> 0x14) & 1;
  case 8:
    return (byte)(*(uint *)(param_1 + 0x708) >> 0x16) & 1;
  case 9:
    return (byte)(*(uint *)(param_1 + 0x708) >> 0xd) & 1;
  case 10:
    return (byte)(*(uint *)(param_1 + 0x708) >> 0xe) & 1;
  case 0xb:
    return (byte)(*(uint *)(param_1 + 0x708) >> 0xf) & 1;
  case 0xc:
    return *(byte *)(param_1 + 0x70a) & 1;
  case 0xd:
    return (byte)(*(uint *)(param_1 + 0x708) >> 0x15) & 1;
  case 0xe:
    return *(byte *)(param_1 + 0x70b) & 1;
  case 0xf:
    return (byte)((uint)*(undefined4 *)(param_1 + 0x708) >> 0x19) & 1;
  case 0x10:
    return (byte)(*(uint *)(param_1 + 0x708) >> 10) & 1;
  case 0x11:
    return (byte)((uint)*(undefined4 *)(param_1 + 0x708) >> 0x1a) & 1;
  default:
    LowLevelFatalErrorHandler("Unknown",0x598,L"Unknown material usage: %u",param_2);
    FDebug::AssertFailed(&DAT_1450f224d,"Unknown",0x598,L"Unknown material usage: %u",param_2);
    return 0;
  }
}



// FUNCTION 14256eec0 FUN_14256eec0 body=2152 status=ok
// SIG undefined FUN_14256eec0(void)

longlong * FUN_14256eec0(undefined8 param_1,longlong *param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  
  *param_2 = 0;
  param_2[1] = 0;
  switch(param_3) {
  case 0:
    if ((undefined *)*param_2 != &DAT_1450f3e30) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,0x16);
      iVar2 = (int)param_2[1] + 0x16;
      *(int *)(param_2 + 1) = iVar2;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
      }
      puVar1 = (undefined8 *)*param_2;
      *puVar1 = 0x65007300550062;
      puVar1[1] = 0x74006900570064;
      puVar1[2] = 0x65006b00530068;
      puVar1[3] = 0x6100740065006c;
      puVar1[4] = 0x730065004d006c;
      *(undefined4 *)(puVar1 + 5) = 0x68;
      return param_2;
    }
    break;
  case 1:
    if ((wchar_t *)*param_2 != L"bUsedWithParticleSprites") {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,0x19);
      iVar2 = (int)param_2[1] + 0x19;
      *(int *)(param_2 + 1) = iVar2;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
      }
      builtin_wcsncpy((wchar_t *)*param_2,L"bUsedWithParticleSprites",0x19);
      return param_2;
    }
    break;
  case 2:
    if ((wchar_t *)*param_2 != L"bUsedWithBeamTrails") {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,0x14);
      iVar2 = (int)param_2[1] + 0x14;
      *(int *)(param_2 + 1) = iVar2;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
      }
      builtin_wcsncpy((wchar_t *)*param_2,L"bUsedWithBeamTrails",0x14);
      return param_2;
    }
    break;
  case 3:
    if ((wchar_t *)*param_2 != L"bUsedWithMeshParticles") {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,0x17);
      iVar2 = (int)param_2[1] + 0x17;
      *(int *)(param_2 + 1) = iVar2;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
      }
      builtin_wcsncpy((wchar_t *)*param_2,L"bUsedWithMeshParticles",0x17);
      return param_2;
    }
    break;
  case 4:
    if ((wchar_t *)*param_2 != L"bUsedWithStaticLighting") {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,0x18);
      iVar2 = (int)param_2[1] + 0x18;
      *(int *)(param_2 + 1) = iVar2;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
      }
      builtin_wcsncpy((wchar_t *)*param_2,L"bUsedWithStaticLighting",0x18);
      return param_2;
    }
    break;
  case 5:
    if ((wchar_t *)*param_2 != L"bUsedWithMorphTargets") {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,0x16);
      iVar2 = (int)param_2[1] + 0x16;
      *(int *)(param_2 + 1) = iVar2;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
      }
      builtin_wcsncpy((wchar_t *)*param_2,L"bUsedWithMorphTargets",0x16);
      return param_2;
    }
    break;
  case 6:
    if ((wchar_t *)*param_2 != L"bUsedWithSplineMeshes") {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,0x16);
      iVar2 = (int)param_2[1] + 0x16;
      *(int *)(param_2 + 1) = iVar2;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
      }
      builtin_wcsncpy((wchar_t *)*param_2,L"bUsedWithSplineMeshes",0x16);
      return param_2;
    }
    break;
  case 7:
    if ((wchar_t *)*param_2 != L"bUsedWithInstancedStaticMeshes") {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,0x1f);
      iVar2 = (int)param_2[1] + 0x1f;
      *(int *)(param_2 + 1) = iVar2;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
      }
      builtin_wcsncpy((wchar_t *)*param_2,L"bUsedWithInstancedStaticMeshes",0x1f);
      return param_2;
    }
    break;
  case 8:
    if ((wchar_t *)*param_2 != L"bUsedWithClothing") {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,0x12);
      iVar2 = (int)param_2[1] + 0x12;
      *(int *)(param_2 + 1) = iVar2;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
      }
      builtin_wcsncpy((wchar_t *)*param_2,L"bUsedWithClothing",0x12);
      return param_2;
    }
    break;
  case 9:
    if ((wchar_t *)*param_2 != L"bUsedWithNiagaraSprites") {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,0x18);
      iVar2 = (int)param_2[1] + 0x18;
      *(int *)(param_2 + 1) = iVar2;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
      }
      builtin_wcsncpy((wchar_t *)*param_2,L"bUsedWithNiagaraSprites",0x18);
      return param_2;
    }
    break;
  case 10:
    if ((wchar_t *)*param_2 != L"bUsedWithNiagaraRibbons") {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,0x18);
      iVar2 = (int)param_2[1] + 0x18;
      *(int *)(param_2 + 1) = iVar2;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
      }
      builtin_wcsncpy((wchar_t *)*param_2,L"bUsedWithNiagaraRibbons",0x18);
      return param_2;
    }
    break;
  case 0xb:
    if ((wchar_t *)*param_2 != L"bUsedWithNiagaraMeshParticles") {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,0x1e);
      iVar2 = (int)param_2[1] + 0x1e;
      *(int *)(param_2 + 1) = iVar2;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
      }
      builtin_wcsncpy((wchar_t *)*param_2,L"bUsedWithNiagaraMeshParticles",0x1e);
      return param_2;
    }
    break;
  case 0xc:
    if ((wchar_t *)*param_2 != L"bUsedWithGeometryCache") {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,0x17);
      iVar2 = (int)param_2[1] + 0x17;
      *(int *)(param_2 + 1) = iVar2;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
      }
      builtin_wcsncpy((wchar_t *)*param_2,L"bUsedWithGeometryCache",0x17);
      return param_2;
    }
    break;
  case 0xd:
    if ((wchar_t *)*param_2 != L"bUsedWithSkyEnvMap") {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,0x13);
      iVar2 = (int)param_2[1] + 0x13;
      *(int *)(param_2 + 1) = iVar2;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
      }
      builtin_wcsncpy((wchar_t *)*param_2,L"bUsedWithSkyEnvMap",0x13);
      return param_2;
    }
    break;
  case 0xe:
    if ((wchar_t *)*param_2 != L"bUsedWithSkeletalMeshParticles") {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,0x1f);
      iVar2 = (int)param_2[1] + 0x1f;
      *(int *)(param_2 + 1) = iVar2;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
      }
      builtin_wcsncpy((wchar_t *)*param_2,L"bUsedWithSkeletalMeshParticles",0x1f);
      return param_2;
    }
    break;
  case 0xf:
    if ((wchar_t *)*param_2 != L"bUsedWithCables") {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,0x10);
      iVar2 = (int)param_2[1] + 0x10;
      *(int *)(param_2 + 1) = iVar2;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
      }
      builtin_wcsncpy((wchar_t *)*param_2,L"bUsedWithCables",0x10);
      return param_2;
    }
    break;
  case 0x10:
    if ((wchar_t *)*param_2 != L"bUsedWithGPUParticleSprites") {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,0x1c);
      iVar2 = (int)param_2[1] + 0x1c;
      *(int *)(param_2 + 1) = iVar2;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
      }
      builtin_wcsncpy((wchar_t *)*param_2,L"bUsedWithGPUParticleSprites",0x1c);
      return param_2;
    }
    break;
  case 0x11:
    if ((wchar_t *)*param_2 != L"bUsedWithVolumetricTranslucentShadow") {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,0x25);
      iVar2 = (int)param_2[1] + 0x25;
      *(int *)(param_2 + 1) = iVar2;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
      }
      builtin_wcsncpy((wchar_t *)*param_2,L"bUsedWithVolumetricTranslucentShadow",0x25);
      return param_2;
    }
    break;
  default:
    LowLevelFatalErrorHandler("Unknown",0x737,L"Unknown material usage: %u",param_3);
    FDebug::AssertFailed(&DAT_1450f224f,"Unknown",0x737,L"Unknown material usage: %u",param_3);
  }
  return param_2;
}



// FUNCTION 14256f770 FUN_14256f770 body=618 status=ok
// SIG undefined FUN_14256f770(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14256f770(longlong param_1,longlong *param_2,int param_3,char param_4,int param_5,
                  char param_6)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  char local_88;
  uint local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  longlong local_70;
  int local_68;
  int local_64;
  longlong local_60 [4];
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  *(undefined4 *)(param_2 + 1) = 0;
  local_88 = param_4;
  local_7c = param_3;
  if (*(int *)((longlong)param_2 + 0xc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_2,0);
  }
  if (param_3 == 3) {
    lVar3 = FUN_1428742e0();
    local_7c = *(int *)(lVar3 + 0xc);
    param_3 = local_7c;
  }
  local_78 = 0;
  do {
    if ((local_78 == param_3) || (param_4 != '\0')) {
      local_80 = 0;
      local_68 = local_78;
      do {
        iVar6 = local_80;
        plVar8 = (longlong *)0x0;
        local_64 = local_80;
        TSet<TTuple<FObjectKey,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
        ::FindId((longlong *)(param_1 + 2000),&local_74,&local_68);
        plVar5 = plVar8;
        if (local_74 != -1) {
          plVar5 = (longlong *)(*(longlong *)(param_1 + 2000) + (longlong)local_74 * 0x18);
        }
        plVar4 = plVar5 + 1;
        if (plVar5 == (longlong *)0x0) {
          plVar4 = plVar8;
        }
        if (((plVar4 != (longlong *)0x0) && (lVar3 = *plVar4, lVar3 != 0)) &&
           ((iVar6 == param_5 || (param_6 != '\0')))) {
          local_60[0] = FUN_142597a60(lVar3);
          local_60[1] = FUN_142597b30(lVar3);
          local_60[2] = FUN_142597da0(lVar3);
          local_60[3] = FUN_142597990(lVar3);
          plVar5 = local_60;
          local_84 = 0;
          do {
            puVar7 = *(undefined8 **)*plVar5;
            puVar1 = puVar7 + (int)((longlong *)*plVar5)[1];
            uVar2 = (uint)plVar8;
            iVar6 = local_80;
            for (; local_80 = iVar6, puVar7 != puVar1; puVar7 = puVar7 + 1) {
              local_70 = 0;
              local_98 = 0;
              (**(code **)(*(longlong *)*puVar7 + 0x58))
                        ((longlong *)*puVar7,param_1,lVar3,&local_70);
              if (local_70 != 0) {
                plVar8 = (longlong *)*param_2;
                iVar6 = (int)param_2[1];
                for (plVar4 = plVar8; plVar4 != plVar8 + iVar6; plVar4 = plVar4 + 1) {
                  if (*plVar4 == local_70) {
                    if ((int)((longlong)plVar4 - (longlong)plVar8 >> 3) != -1) goto LAB_14256f952;
                    break;
                  }
                }
                *(int *)(param_2 + 1) = iVar6 + 1;
                if (*(int *)((longlong)param_2 + 0xc) < iVar6 + 1) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar6);
                }
                *(longlong *)((longlong)iVar6 * 8 + *param_2) = local_70;
              }
LAB_14256f952:
              uVar2 = local_84;
              iVar6 = local_80;
            }
            local_84 = uVar2 + 1;
            plVar8 = (longlong *)(ulonglong)local_84;
            plVar5 = plVar5 + 1;
          } while (local_84 < 4);
        }
        local_80 = iVar6 + 1;
        param_4 = local_88;
        param_3 = local_7c;
      } while (local_80 < 4);
    }
    local_78 = local_78 + 1;
    if (2 < local_78) {
      return;
    }
  } while( true );
}



// FUNCTION 14256f9e0 FUN_14256f9e0 body=770 status=ok
// SIG undefined FUN_14256f9e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14256f9e0(longlong param_1,longlong *param_2,longlong *param_3,undefined4 param_4,
                  undefined4 param_5)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  uint local_88 [2];
  undefined8 local_80;
  longlong local_78;
  longlong *local_70;
  longlong local_68;
  longlong local_60 [4];
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  *(undefined4 *)(param_2 + 1) = 0;
  local_78 = param_1;
  if (*(int *)((longlong)param_2 + 0xc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_2,0);
  }
  plVar5 = (longlong *)*param_3;
  for (iVar11 = (int)param_3[1]; iVar11 != 0; iVar11 = iVar11 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  *(undefined4 *)(param_3 + 1) = 0;
  if (*(int *)((longlong)param_3 + 0xc) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_3,0);
  }
  lVar12 = local_78;
  local_80 = CONCAT44(param_5,param_4);
  TSet<TTuple<FObjectKey,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  ::FindId(local_78 + 2000,local_88,&local_80);
  plVar8 = (longlong *)0x0;
  plVar5 = plVar8;
  if (local_88[0] != 0xffffffff) {
    plVar5 = (longlong *)(*(longlong *)(lVar12 + 2000) + (longlong)(int)local_88[0] * 0x18);
  }
  plVar4 = plVar5 + 1;
  if (plVar5 == (longlong *)0x0) {
    plVar4 = plVar8;
  }
  if ((plVar4 != (longlong *)0x0) && (lVar9 = *plVar4, lVar9 != 0)) {
    local_68 = lVar9;
    local_60[0] = FUN_142597a60(lVar9);
    local_60[1] = FUN_142597b30(lVar9);
    local_60[2] = FUN_142597da0(lVar9);
    local_60[3] = FUN_142597990(lVar9);
    plVar5 = local_60;
    iVar11 = 0;
    lVar13 = 4;
    do {
      if (*plVar5 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(*plVar5 + 8);
      }
      iVar11 = iVar11 + iVar6;
      plVar5 = plVar5 + 1;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    TArray<FString,FDefaultAllocator>::Empty(param_3,iVar11);
    local_70 = local_60;
    local_88[0] = 0;
    do {
      plVar4 = *(longlong **)*local_70;
      plVar5 = plVar4 + (int)((longlong *)*local_70)[1];
      uVar2 = (uint)plVar8;
      for (; plVar4 != plVar5; plVar4 = plVar4 + 1) {
        plVar8 = (longlong *)*plVar4;
        local_80 = 0;
        local_98 = 0;
        (**(code **)(*plVar8 + 0x58))(plVar8,lVar12,lVar9,&local_80);
        if (local_80 != 0) {
          plVar1 = (longlong *)*param_2;
          iVar11 = (int)param_2[1];
          for (plVar7 = plVar1; plVar7 != plVar1 + iVar11; plVar7 = plVar7 + 1) {
            if (*plVar7 == local_80) {
              iVar6 = (int)((longlong)plVar7 - (longlong)plVar1 >> 3);
              if (iVar6 != -1) goto LAB_14256fc10;
              break;
            }
          }
          *(int *)(param_2 + 1) = iVar11 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar11 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2);
          }
          *(longlong *)((longlong)iVar11 * 8 + *param_2) = local_80;
          iVar6 = iVar11;
LAB_14256fc10:
          iVar11 = (int)param_3[1];
          if (iVar11 <= iVar6) {
            iVar10 = (iVar6 - iVar11) + 1;
            iVar3 = iVar11 + iVar10;
            *(int *)(param_3 + 1) = iVar3;
            if (*(int *)((longlong)param_3 + 0xc) < iVar3) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3);
            }
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)iVar11 * 0x10 + *param_3),0,(longlong)iVar10 << 4);
          }
          lVar12 = plVar8[2];
          plVar8 = (longlong *)((longlong)iVar6 * 0x10 + *param_3);
          iVar11 = (int)plVar8[1];
          *(int *)(plVar8 + 1) = iVar11 + 1;
          if (*(int *)((longlong)plVar8 + 0xc) < iVar11 + 1) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar8,iVar11);
          }
          *(int *)(*plVar8 + (longlong)iVar11 * 4) = (int)lVar12;
          lVar9 = local_68;
          lVar12 = local_78;
        }
        uVar2 = local_88[0];
      }
      local_88[0] = uVar2 + 1;
      plVar8 = (longlong *)(ulonglong)local_88[0];
      local_70 = local_70 + 1;
    } while (local_88[0] < 4);
  }
  return;
}



// FUNCTION 14256fcf0 FUN_14256fcf0 body=196 status=ok
// SIG undefined FUN_14256fcf0(void)

ulonglong FUN_14256fcf0(longlong param_1,int *param_2,undefined8 *param_3,char param_4)

{
  undefined8 uVar1;
  ulonglong uVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  if ((param_4 == '\0') || (uVar2 = FUN_1425b3950(), (char)uVar2 != '\0')) {
    if (*(char *)(param_1 + 0x838) == '\0') {
      FUN_142568050(param_1,0);
    }
    piVar3 = *(int **)(param_1 + 0x850);
    piVar6 = (int *)0x0;
    piVar5 = piVar3 + (longlong)*(int *)(param_1 + 0x858) * 8;
    piVar4 = piVar6;
    if (piVar3 != piVar5) {
      do {
        if ((((*piVar3 == *param_2) && (piVar3[1] == param_2[1])) &&
            (*(char *)((longlong)piVar3 + 0xb) == *(char *)((longlong)param_2 + 0xb))) &&
           (piVar4 = piVar3, piVar3[3] == param_2[3])) break;
        piVar3 = piVar3 + 8;
        piVar4 = piVar6;
      } while (piVar3 != piVar5);
    }
    piVar3 = piVar4 + 4;
    if (piVar4 == (int *)0x0) {
      piVar3 = piVar6;
    }
    uVar2 = 0;
    if (piVar3 != (int *)0x0) {
      uVar1 = *(undefined8 *)(piVar3 + 2);
      *param_3 = *(undefined8 *)piVar3;
      param_3[1] = uVar1;
      return CONCAT71((int7)((ulonglong)piVar3 >> 8),1);
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 14256fdc0 FUN_14256fdc0 body=4413 status=ok
// SIG undefined FUN_14256fdc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14256fdc0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  void *pvVar5;
  undefined8 uVar6;
  bool bVar7;
  BOOL BVar8;
  int iVar9;
  longlong lVar10;
  undefined1 *puVar11;
  longlong lVar12;
  int *piVar13;
  undefined4 *puVar14;
  int iVar15;
  longlong *plVar16;
  undefined2 *puVar17;
  undefined8 *puVar18;
  int iVar19;
  ulonglong *puVar20;
  int *piVar21;
  int iVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  int iVar25;
  uint uVar26;
  int iVar27;
  int iVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  int iVar31;
  undefined1 auStack_2d8 [32];
  int local_2b8;
  int local_2b4;
  int local_2b0 [2];
  ulonglong local_2a8;
  ulonglong local_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  int *local_288;
  longlong local_280;
  undefined8 *local_278;
  int local_270;
  int iStack_26c;
  undefined8 uStack_268;
  ulonglong local_260;
  int local_258 [2];
  undefined8 *local_250;
  longlong local_248;
  ulonglong local_240;
  undefined8 local_238;
  int iStack_230;
  int iStack_22c;
  longlong *local_228;
  longlong *plStack_220;
  longlong local_218;
  undefined8 local_210;
  longlong local_208;
  undefined8 local_200;
  ulonglong local_1f8 [3];
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 local_1cc;
  longlong local_1c8;
  undefined8 local_1c0;
  longlong local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  longlong local_1a0;
  undefined8 local_198;
  longlong local_190;
  undefined8 local_188;
  longlong local_180;
  undefined8 local_178;
  longlong local_170;
  undefined8 local_168;
  longlong local_160;
  undefined8 local_158;
  longlong local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined1 local_128;
  undefined4 *local_120;
  undefined8 local_118;
  undefined1 local_110 [192];
  undefined1 *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_2d8;
  local_280 = param_1;
  if (((0 < DAT_1465334b0 - DAT_1465334dc) || (0 < DAT_146533550 - DAT_14653357c)) ||
     (0 < DAT_1465335f0 - DAT_14653361c)) {
    BVar8 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146533598);
    if (BVar8 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146533598);
    }
    iVar19 = DAT_14653357c;
    iVar9 = DAT_146533550;
    local_298 = 0;
    uStack_290 = 0;
    iVar25 = DAT_146533550 - DAT_14653357c;
    local_288 = (int *)0x0;
    _DAT_1465335c8 = 0;
    uRam00000001465335cc = 0;
    _DAT_1465335d0 = 0;
    uRam00000001465335d4 = 0;
    local_270 = 0;
    _DAT_1465335d8 = 0;
    iStack_26c = 0;
    uStack_268._0_4_ = 0;
    uStack_268._4_4_ = 0;
    local_260 = 0;
    _DAT_1465335c0 = param_1;
    TSet<TTuple<UObject_*,FTraceRouteRecord>,TDefaultMapHashableKeyFuncs<UObject_*,FTraceRouteRecord,0>,FDefaultSetAllocator>
    ::FindId(&DAT_146533548,&local_2b8,local_280);
    uVar23 = 0;
    iVar27 = 0;
    iVar15 = 0;
    iVar28 = 0;
    if (local_2b8 != -1) {
      piVar13 = (int *)(DAT_146533548 + 8 + (longlong)local_2b8 * 0x28);
      local_270 = *piVar13;
      iStack_26c = piVar13[1];
      uStack_268._0_4_ = piVar13[2];
      uStack_268._4_4_ = piVar13[3];
      local_260 = *(ulonglong *)(DAT_146533548 + 0x18 + (longlong)local_2b8 * 0x28);
      TSet<TTuple<UObjectBase_const_*,FLevelLegacyMapBuildData>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLevelLegacyMapBuildData,0>,FDefaultSetAllocator>
      ::Remove(&DAT_146533548);
      uVar23 = local_260;
      iVar9 = DAT_146533550;
      iVar19 = DAT_14653357c;
      iVar27 = (int)uStack_268;
      iVar15 = local_270;
      iVar28 = iStack_26c;
    }
    if ((0 < iVar25) && (iVar9 == iVar19)) {
      FUObjectArray::RemoveUObjectDeleteListener(&DAT_1469e91a0,&PTR_PTR_146533540);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146533598);
    param_1 = local_280;
    local_248 = 0;
    if (((iVar15 != 0 || iVar28 != 0) || iVar27 != 0) || uStack_268._4_4_ != 0) {
      local_248 = FUN_1425697a0(local_280);
      local_2a0 = uVar23;
      TMapBase<FGuid,FPrecomputedLightVolumeData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FPrecomputedLightVolumeData_*,0>_>
      ::Emplace<FGuid_const_&,FPrecomputedLightVolumeData_*_const_&>
                (local_248 + 0x80,&local_270,&local_2a0);
    }
    local_2b8 = 0;
    if (0 < *(int *)(param_1 + 0xa8)) {
      local_2a0 = 0;
      do {
        uVar23 = local_2a0;
        iVar9 = local_2b8;
        if (*(longlong *)(*(longlong *)(param_1 + 0xa0) + local_2a0 * 8) != 0) {
          local_120 = (undefined4 *)0x0;
          local_118 = 0;
          FUN_140a4ca80(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + local_2a0 * 8),&local_1e0,0)
          ;
          local_2b4 = 0;
          if (0 < (int)local_118) {
            local_278 = (undefined8 *)0x0;
            do {
              uVar23 = 0;
              puVar14 = &local_1e0;
              if (local_120 != (undefined4 *)0x0) {
                puVar14 = local_120;
              }
              plVar16 = *(longlong **)((longlong)puVar14 + (longlong)local_278);
              local_238 = plVar16;
              BVar8 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1465334f8);
              if (BVar8 == 0) {
                EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1465334f8);
              }
              DAT_146533520 = plVar16;
              if (DAT_146533528 != 0) {
                FMemory::Free();
              }
              iVar19 = DAT_1465334dc;
              iVar9 = DAT_1465334b0;
              DAT_146533528 = 0;
              iVar27 = DAT_1465334b0 - DAT_1465334dc;
              _DAT_146533530 = 0;
              local_250 = (undefined8 *)0x0;
              uVar26 = 0;
              TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
              ::FindId(&DAT_1465334a8,&local_240,DAT_146533520);
              if ((int)local_240 != -1) {
                puVar20 = (ulonglong *)(DAT_1465334a8 + 8 + (longlong)(int)local_240 * 0x20);
                uVar24 = uVar23;
                if (local_1f8 != puVar20) {
                  uVar23 = *puVar20;
                  *puVar20 = 0;
                  uVar24 = (ulonglong)(uint)puVar20[1];
                  puVar20[1] = 0;
                  local_250 = (undefined8 *)uVar23;
                }
                uVar26 = (uint)uVar24;
                TSet<TTuple<UObjectBase_const_*,FMeshMapBuildLegacyData>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FMeshMapBuildLegacyData,0>,FDefaultSetAllocator>
                ::Remove(&DAT_1465334a8);
                iVar9 = DAT_1465334b0;
                iVar19 = DAT_1465334dc;
              }
              if ((0 < iVar27) && (iVar9 == iVar19)) {
                local_2a8 = uVar23;
                FUObjectArray::RemoveUObjectDeleteListener(&DAT_1469e91a0,&PTR_PTR_1465334a0);
              }
              local_2a8 = uVar23;
              LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1465334f8);
              if (0 < (int)uVar26) {
                uStack_268 = &local_228;
                plVar16 = (longlong *)(uVar23 + 0x10);
                local_1f8[0] = (ulonglong)uVar26;
                do {
                  if (local_248 == 0) {
                    local_248 = FUN_1425697a0();
                  }
                  local_270 = (int)uVar23;
                  iStack_26c = (int)(uVar23 >> 0x20);
                  plVar1 = (longlong *)(local_248 + 0x30);
                  local_218 = 0;
                  local_210 = 0;
                  local_208 = 0;
                  local_200 = 0;
                  local_228 = (longlong *)0x0;
                  plStack_220 = (longlong *)0x0;
                  TSet<TTuple<FGuid,FMeshMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FMeshMapBuildData,0>,FDefaultSetAllocator>
                  ::Emplace<TPairInitializer<FGuid_const_&,FMeshMapBuildData_&&>_>
                            (plVar1,local_258,&local_270);
                  lVar10 = (longlong)local_258[0];
                  lVar12 = *plVar1;
                  if (local_208 != 0) {
                    FMemory::Free();
                  }
                  if (local_218 != 0) {
                    FMemory::Free();
                  }
                  if (plStack_220 != (longlong *)0x0) {
                    plVar1 = plStack_220 + 3;
                    *(int *)plVar1 = (int)*plVar1 + -1;
                    if ((int)*plVar1 == 0) {
                      (**(code **)(*plStack_220 + 0x38))();
                    }
                  }
                  if (local_228 != (longlong *)0x0) {
                    piVar13 = (int *)((longlong)local_228 + 0x1c);
                    *piVar13 = *piVar13 + -1;
                    if (*piVar13 == 0) {
                      (**(code **)(*local_228 + 0x38))();
                    }
                  }
                  plVar1 = (longlong *)*plVar16;
                  plVar3 = *(longlong **)(lVar12 + 0x10 + lVar10 * 0x48);
                  lVar4 = *plVar1;
                  *(longlong *)(lVar12 + 0x10 + lVar10 * 0x48) = lVar4;
                  if (lVar4 != 0) {
                    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                  }
                  if (plVar3 != (longlong *)0x0) {
                    piVar13 = (int *)((longlong)plVar3 + 0x1c);
                    *piVar13 = *piVar13 + -1;
                    if (*piVar13 == 0) {
                      (**(code **)(*plVar3 + 0x38))();
                    }
                  }
                  lVar4 = plVar1[1];
                  plVar3 = *(longlong **)(lVar12 + 0x18 + lVar10 * 0x48);
                  *(longlong *)(lVar12 + 0x18 + lVar10 * 0x48) = lVar4;
                  if (lVar4 != 0) {
                    *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
                  }
                  if (plVar3 != (longlong *)0x0) {
                    plVar2 = plVar3 + 3;
                    *(int *)plVar2 = (int)*plVar2 + -1;
                    if ((int)*plVar2 == 0) {
                      (**(code **)(*plVar3 + 0x38))();
                    }
                  }
                  plVar3 = (longlong *)(lVar12 + (lVar10 * 9 + 4) * 8);
                  if (plVar3 != plVar1 + 2) {
                    iVar9 = (int)plVar1[3];
                    pvVar5 = (void *)plVar1[2];
                    *(int *)(plVar3 + 1) = iVar9;
                    if ((iVar9 == 0) && (*(int *)((longlong)plVar3 + 0xc) == 0)) {
                      *(undefined4 *)((longlong)plVar3 + 0xc) = 0;
                      uVar23 = local_2a8;
                    }
                    else {
                      TArray<FString,FDefaultAllocator>::ResizeForCopy(plVar3,iVar9);
                      _guard_xfg_dispatch_icall_nop((void *)*plVar3,pvVar5,(longlong)iVar9 << 4);
                      uVar23 = local_2a8;
                    }
                  }
                  plVar3 = (longlong *)(lVar12 + (lVar10 * 9 + 6) * 8);
                  if (plVar3 != plVar1 + 4) {
                    iVar9 = (int)plVar1[5];
                    pvVar5 = (void *)plVar1[4];
                    *(int *)(plVar3 + 1) = iVar9;
                    if ((iVar9 == 0) && (*(int *)((longlong)plVar3 + 0xc) == 0)) {
                      *(undefined4 *)((longlong)plVar3 + 0xc) = 0;
                    }
                    else {
                      TArray<FString,FDefaultAllocator>::ResizeForCopy(plVar3,iVar9);
                      _guard_xfg_dispatch_icall_nop((void *)*plVar3,pvVar5,(longlong)iVar9 << 4);
                    }
                  }
                  plVar1 = (longlong *)*plVar16;
                  if (plVar1 != (longlong *)0x0) {
                    if (plVar1[4] != 0) {
                      FMemory::Free();
                    }
                    if (plVar1[2] != 0) {
                      FMemory::Free();
                    }
                    plVar3 = (longlong *)plVar1[1];
                    if (plVar3 != (longlong *)0x0) {
                      plVar2 = plVar3 + 3;
                      *(int *)plVar2 = (int)*plVar2 + -1;
                      if ((int)*plVar2 == 0) {
                        (**(code **)(*plVar3 + 0x38))();
                      }
                    }
                    plVar3 = (longlong *)*plVar1;
                    if (plVar3 != (longlong *)0x0) {
                      piVar13 = (int *)((longlong)plVar3 + 0x1c);
                      *piVar13 = *piVar13 + -1;
                      if (*piVar13 == 0) {
                        (**(code **)(*plVar3 + 0x38))();
                      }
                    }
                    FMemory::operator_delete(plVar1,0x30);
                  }
                  uVar23 = uVar23 + 0x18;
                  plVar16 = plVar16 + 3;
                  local_1f8[0] = local_1f8[0] - 1;
                  local_2a8 = uVar23;
                } while (local_1f8[0] != 0);
                local_1f8[0] = 0;
                plVar16 = local_238;
              }
              BVar8 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146533638);
              if (BVar8 == 0) {
                EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146533638);
              }
              iVar19 = DAT_14653361c;
              iVar9 = DAT_1465335f0;
              piVar13 = (int *)0x0;
              local_1f8[0] = 0;
              local_1f8[1] = 0;
              iVar28 = DAT_1465335f0 - DAT_14653361c;
              local_1f8[2] = 0;
              iVar27 = 0;
              _DAT_146533668 = 0;
              uRam000000014653366c = 0;
              _DAT_146533670 = 0;
              uRam0000000146533674 = 0;
              iVar15 = 0;
              local_298 = 0;
              _DAT_146533678 = 0;
              uStack_290 = 0;
              _DAT_146533660 = plVar16;
              TSet<TTuple<UObject_*,FTraceRouteRecord>,TDefaultMapHashableKeyFuncs<UObject_*,FTraceRouteRecord,0>,FDefaultSetAllocator>
              ::FindId(&DAT_1465335e8,local_2b0);
              if (local_2b0[0] == -1) {
                uVar29 = (int)local_298;
                uVar30 = local_298._4_4_;
                iVar31 = (int)uStack_290;
                iVar25 = uStack_290._4_4_;
                iVar22 = iVar27;
              }
              else {
                puVar20 = (ulonglong *)(DAT_1465335e8 + 8 + (longlong)local_2b0[0] * 0x28);
                uVar23 = *puVar20;
                uVar30 = *(undefined4 *)((longlong)puVar20 + 4);
                local_298 = *puVar20;
                uVar24 = puVar20[1];
                iVar25 = *(int *)((longlong)puVar20 + 0xc);
                uStack_290 = puVar20[1];
                local_288 = *(int **)(DAT_1465335e8 + 0x18 + (longlong)local_2b0[0] * 0x28);
                TSet<TTuple<UObjectBase_const_*,FLevelLegacyMapBuildData>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLevelLegacyMapBuildData,0>,FDefaultSetAllocator>
                ::Remove(&DAT_1465335e8);
                piVar13 = local_288;
                uVar29 = (int)uVar23;
                iVar31 = (int)uVar24;
                iVar9 = DAT_1465335f0;
                iVar19 = DAT_14653361c;
                iVar27 = (int)local_298;
                iVar22 = local_298._4_4_;
                iVar15 = (int)uStack_290;
              }
              if ((0 < iVar28) && (iVar9 == iVar19)) {
                FUObjectArray::RemoveUObjectDeleteListener(&DAT_1469e91a0,&PTR_PTR_1465335e0);
              }
              LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146533638);
              lVar12 = local_248;
              if (((iVar27 != 0 || iVar22 != 0) || iVar15 != 0) || uStack_290._4_4_ != 0) {
                plVar16 = (longlong *)(local_248 + 0x120);
                local_238 = (longlong *)CONCAT44(uVar30,uVar29);
                iStack_230 = iVar31;
                iStack_22c = iVar25;
                if (*(int *)(local_248 + 0x128) != *(int *)(local_248 + 0x154)) {
                  iVar9 = FCrc::MemCrc_DEPRECATED(&local_238,0x10);
                  lVar10 = *(longlong *)(lVar12 + 0x160);
                  if (*(longlong *)(lVar12 + 0x160) == 0) {
                    lVar10 = lVar12 + 0x158;
                  }
                  iVar9 = *(int *)(lVar10 + ((longlong)*(int *)(lVar12 + 0x168) - 1U &
                                            (longlong)iVar9) * 4);
                  if (iVar9 != -1) {
                    do {
                      piVar21 = (int *)((longlong)iVar9 * 0x90 + *plVar16);
                      if (((piVar21[1] == local_238._4_4_ && piVar21[2] == iStack_230) &&
                          piVar21[3] == iStack_22c) && *piVar21 == (int)local_238) {
                        if ((iVar9 != -1) && (piVar21 != (int *)0x0)) {
                          piVar21 = piVar21 + 4;
                          goto LAB_14257053f;
                        }
                        break;
                      }
                      iVar9 = piVar21[0x20];
                    } while (iVar9 != -1);
                  }
                }
                piVar21 = (int *)TMapBase<FGuid,FLightComponentMapBuildData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FLightComponentMapBuildData,0>_>
                                 ::Emplace<FGuid_const_&>(plVar16,&local_238);
LAB_14257053f:
                *piVar21 = *piVar13;
                plVar16 = (longlong *)(piVar21 + 0x16);
                uVar6 = *(undefined8 *)(piVar13 + 6);
                *(undefined8 *)(piVar21 + 4) = *(undefined8 *)(piVar13 + 4);
                *(undefined8 *)(piVar21 + 6) = uVar6;
                uVar6 = *(undefined8 *)(piVar13 + 10);
                *(undefined8 *)(piVar21 + 8) = *(undefined8 *)(piVar13 + 8);
                *(undefined8 *)(piVar21 + 10) = uVar6;
                iVar9 = piVar13[0xd];
                iVar19 = piVar13[0xe];
                iVar27 = piVar13[0xf];
                piVar21[0xc] = piVar13[0xc];
                piVar21[0xd] = iVar9;
                piVar21[0xe] = iVar19;
                piVar21[0xf] = iVar27;
                iVar9 = piVar13[0x11];
                iVar19 = piVar13[0x12];
                iVar27 = piVar13[0x13];
                piVar21[0x10] = piVar13[0x10];
                piVar21[0x11] = iVar9;
                piVar21[0x12] = iVar19;
                piVar21[0x13] = iVar27;
                piVar21[0x14] = piVar13[0x14];
                piVar21[0x15] = piVar13[0x15];
                if (plVar16 != (longlong *)(piVar13 + 0x16)) {
                  iVar9 = piVar13[0x18];
                  puVar17 = *(undefined2 **)(piVar13 + 0x16);
                  piVar21[0x18] = iVar9;
                  if ((iVar9 == 0) && (piVar21[0x19] == 0)) {
                    piVar21[0x19] = 0;
                  }
                  else {
                    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(plVar16,iVar9);
                    if (iVar9 != 0) {
                      lVar12 = *plVar16 - (longlong)puVar17;
                      do {
                        *(undefined2 *)((longlong)puVar17 + lVar12) = *puVar17;
                        puVar17 = puVar17 + 1;
                        iVar9 = iVar9 + -1;
                      } while (iVar9 != 0);
                    }
                  }
                }
                if (*(longlong *)(piVar13 + 0x16) != 0) {
                  FMemory::Free();
                }
                FMemory::operator_delete(piVar13,0x70);
              }
              if (local_250 != (undefined8 *)0x0) {
                FMemory::Free(local_250);
              }
              local_2b4 = local_2b4 + 1;
              local_278 = local_278 + 1;
              uVar23 = local_2a0;
              param_1 = local_280;
              iVar9 = local_2b8;
            } while (local_2b4 < (int)local_118);
          }
          if (local_120 != (undefined4 *)0x0) {
            FMemory::Free();
          }
        }
        local_2b8 = iVar9 + 1;
        local_2a0 = uVar23 + 1;
      } while (local_2b8 < *(int *)(param_1 + 0xa8));
    }
    puVar18 = *(undefined8 **)(param_1 + 0xd0);
    local_250 = puVar18 + *(int *)(param_1 + 0xd8);
    local_278 = puVar18;
    if (puVar18 != local_250) {
      do {
        plVar16 = (longlong *)*puVar18;
        local_278 = puVar18;
        (**(code **)(*plVar16 + 0x530))(plVar16);
        BVar8 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1465334f8);
        if (BVar8 == 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1465334f8);
        }
        DAT_146533520 = plVar16;
        if (DAT_146533528 != 0) {
          FMemory::Free();
        }
        iVar19 = DAT_1465334dc;
        iVar9 = DAT_1465334b0;
        DAT_146533528 = 0;
        _DAT_146533530 = 0;
        local_2a0 = 0;
        iVar27 = DAT_1465334b0 - DAT_1465334dc;
        uVar26 = 0;
        TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
        ::FindId(&DAT_1465334a8,local_2b0,DAT_146533520);
        uVar23 = 0;
        if (local_2b0[0] != -1) {
          puVar20 = (ulonglong *)(DAT_1465334a8 + 8 + (longlong)local_2b0[0] * 0x20);
          uVar26 = 0;
          if (&local_238 != puVar20) {
            uVar23 = *puVar20;
            *puVar20 = 0;
            uVar26 = (uint)puVar20[1];
            puVar20[1] = 0;
            local_2a0 = uVar23;
          }
          TSet<TTuple<UObjectBase_const_*,FMeshMapBuildLegacyData>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FMeshMapBuildLegacyData,0>,FDefaultSetAllocator>
          ::Remove(&DAT_1465334a8);
          iVar9 = DAT_1465334b0;
          iVar19 = DAT_1465334dc;
        }
        if ((0 < iVar27) && (iVar9 == iVar19)) {
          local_2a8 = uVar23;
          FUObjectArray::RemoveUObjectDeleteListener(&DAT_1469e91a0,&PTR_PTR_1465334a0);
        }
        local_2a8 = uVar23;
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1465334f8);
        if (0 < (int)uVar26) {
          uStack_268 = &local_228;
          uVar24 = (ulonglong)uVar26;
          plVar16 = (longlong *)(uVar23 + 0x10);
          do {
            local_240 = uVar24;
            if (local_248 == 0) {
              local_248 = FUN_1425697a0();
            }
            local_270 = (int)uVar23;
            iStack_26c = (int)(uVar23 >> 0x20);
            plVar1 = (longlong *)(local_248 + 0x30);
            local_218 = 0;
            local_210 = 0;
            local_208 = 0;
            local_200 = 0;
            local_228 = (longlong *)0x0;
            plStack_220 = (longlong *)0x0;
            TSet<TTuple<FGuid,FMeshMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FMeshMapBuildData,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<FGuid_const_&,FMeshMapBuildData_&&>_>
                      (plVar1,local_258,&local_270);
            lVar10 = (longlong)local_258[0];
            lVar12 = *plVar1;
            if (local_208 != 0) {
              FMemory::Free();
            }
            if (local_218 != 0) {
              FMemory::Free();
            }
            if (plStack_220 != (longlong *)0x0) {
              plVar1 = plStack_220 + 3;
              *(int *)plVar1 = (int)*plVar1 + -1;
              if ((int)*plVar1 == 0) {
                (**(code **)(*plStack_220 + 0x38))();
              }
            }
            if (local_228 != (longlong *)0x0) {
              piVar13 = (int *)((longlong)local_228 + 0x1c);
              *piVar13 = *piVar13 + -1;
              if (*piVar13 == 0) {
                (**(code **)(*local_228 + 0x38))();
              }
            }
            plVar1 = (longlong *)*plVar16;
            plVar3 = *(longlong **)(lVar12 + 0x10 + lVar10 * 0x48);
            lVar4 = *plVar1;
            *(longlong *)(lVar12 + 0x10 + lVar10 * 0x48) = lVar4;
            if (lVar4 != 0) {
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
            }
            if (plVar3 != (longlong *)0x0) {
              piVar13 = (int *)((longlong)plVar3 + 0x1c);
              *piVar13 = *piVar13 + -1;
              if (*piVar13 == 0) {
                (**(code **)(*plVar3 + 0x38))();
              }
            }
            lVar4 = plVar1[1];
            plVar3 = *(longlong **)(lVar12 + 0x18 + lVar10 * 0x48);
            *(longlong *)(lVar12 + 0x18 + lVar10 * 0x48) = lVar4;
            if (lVar4 != 0) {
              *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
            }
            if (plVar3 != (longlong *)0x0) {
              plVar2 = plVar3 + 3;
              *(int *)plVar2 = (int)*plVar2 + -1;
              if ((int)*plVar2 == 0) {
                (**(code **)(*plVar3 + 0x38))();
              }
            }
            plVar3 = (longlong *)(lVar12 + (lVar10 * 9 + 4) * 8);
            if (plVar3 != plVar1 + 2) {
              iVar9 = (int)plVar1[3];
              pvVar5 = (void *)plVar1[2];
              *(int *)(plVar3 + 1) = iVar9;
              if ((iVar9 == 0) && (*(int *)((longlong)plVar3 + 0xc) == 0)) {
                *(undefined4 *)((longlong)plVar3 + 0xc) = 0;
                uVar24 = local_240;
                uVar23 = local_2a8;
              }
              else {
                TArray<FString,FDefaultAllocator>::ResizeForCopy(plVar3,iVar9);
                _guard_xfg_dispatch_icall_nop((void *)*plVar3,pvVar5,(longlong)iVar9 << 4);
                uVar24 = local_240;
                uVar23 = local_2a8;
              }
            }
            plVar3 = (longlong *)(lVar12 + (lVar10 * 9 + 6) * 8);
            if (plVar3 != plVar1 + 4) {
              iVar9 = (int)plVar1[5];
              pvVar5 = (void *)plVar1[4];
              *(int *)(plVar3 + 1) = iVar9;
              if ((iVar9 == 0) && (*(int *)((longlong)plVar3 + 0xc) == 0)) {
                *(undefined4 *)((longlong)plVar3 + 0xc) = 0;
              }
              else {
                TArray<FString,FDefaultAllocator>::ResizeForCopy(plVar3,iVar9);
                _guard_xfg_dispatch_icall_nop((void *)*plVar3,pvVar5,(longlong)iVar9 << 4);
              }
            }
            plVar1 = (longlong *)*plVar16;
            if (plVar1 != (longlong *)0x0) {
              if (plVar1[4] != 0) {
                FMemory::Free();
              }
              if (plVar1[2] != 0) {
                FMemory::Free();
              }
              plVar3 = (longlong *)plVar1[1];
              if (plVar3 != (longlong *)0x0) {
                plVar2 = plVar3 + 3;
                *(int *)plVar2 = (int)*plVar2 + -1;
                if ((int)*plVar2 == 0) {
                  (**(code **)(*plVar3 + 0x38))();
                }
              }
              plVar3 = (longlong *)*plVar1;
              if (plVar3 != (longlong *)0x0) {
                piVar13 = (int *)((longlong)plVar3 + 0x1c);
                *piVar13 = *piVar13 + -1;
                if (*piVar13 == 0) {
                  (**(code **)(*plVar3 + 0x38))();
                }
              }
              FMemory::operator_delete(plVar1,0x30);
            }
            uVar23 = uVar23 + 0x18;
            plVar16 = plVar16 + 3;
            uVar24 = uVar24 - 1;
            local_2a8 = uVar23;
          } while (uVar24 != 0);
          local_240 = 0;
          puVar18 = local_278;
        }
        if (local_2a0 != 0) {
          FMemory::Free(local_2a0);
        }
        puVar18 = puVar18 + 1;
        param_1 = local_280;
        local_278 = puVar18;
      } while (puVar18 != local_250);
    }
  }
  if (0 < DAT_146533690 - DAT_1465336bc) {
    local_2a0 = *(ulonglong *)(param_1 + 0x1f0);
    local_2b4 = 0;
    if (0 < *(int *)(param_1 + 0xa8)) {
      local_250 = (undefined8 *)0x0;
      do {
        puVar18 = local_250;
        iVar9 = local_2b4;
        if (*(longlong *)((longlong)local_250 + *(longlong *)(param_1 + 0xa0)) != 0) {
          local_50 = (undefined1 *)0x0;
          local_48 = 0;
          FUN_140a4ca80(*(undefined8 *)((longlong)local_250 + *(longlong *)(param_1 + 0xa0)),
                        local_110,0);
          local_2b8 = 0;
          if (0 < (int)local_48) {
            local_278 = (undefined8 *)0x0;
            do {
              uVar23 = 0;
              puVar11 = local_110;
              if (local_50 != (undefined1 *)0x0) {
                puVar11 = local_50;
              }
              uVar24 = *(ulonglong *)(puVar11 + (longlong)local_278);
              if (uVar24 == 0) {
LAB_142570b18:
                uVar24 = uVar23;
              }
              else {
                lVar12 = FUN_1429f8200();
                if ((*(int *)(*(longlong *)(uVar24 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(uVar24 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar12 + 0x90) * 8) != lVar12 + 0x88)) {
                  bVar7 = false;
                }
                else {
                  bVar7 = true;
                }
                if (!bVar7) goto LAB_142570b18;
              }
              if (uVar24 != 0) {
                BVar8 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1465336d8);
                if (BVar8 == 0) {
                  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1465336d8);
                }
                iVar19 = DAT_1465336bc;
                iVar9 = DAT_146533690;
                local_270 = 0;
                iStack_26c = 0;
                uStack_268._0_4_ = 0;
                uStack_268._4_4_ = 0;
                local_260 = 0;
                iVar28 = DAT_146533690 - DAT_1465336bc;
                _DAT_146533708 = 0;
                uRam000000014653370c = 0;
                _DAT_146533710 = 0;
                uRam0000000146533714 = 0;
                _DAT_146533718 = 0;
                local_298 = 0;
                uStack_290 = 0;
                _DAT_146533700 = uVar24;
                TSet<TTuple<UObject_*,FTraceRouteRecord>,TDefaultMapHashableKeyFuncs<UObject_*,FTraceRouteRecord,0>,FDefaultSetAllocator>
                ::FindId(&DAT_146533688,local_2b0,uVar24);
                iVar27 = 0;
                iVar15 = 0;
                if (local_2b0[0] != -1) {
                  puVar20 = (ulonglong *)(DAT_146533688 + 8 + (longlong)local_2b0[0] * 0x28);
                  local_298 = *puVar20;
                  uStack_290 = puVar20[1];
                  local_288 = *(int **)(DAT_146533688 + 0x18 + (longlong)local_2b0[0] * 0x28);
                  TSet<TTuple<UObjectBase_const_*,FLevelLegacyMapBuildData>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLevelLegacyMapBuildData,0>,FDefaultSetAllocator>
                  ::Remove(&DAT_146533688);
                  uVar23 = local_298 & 0xffffffff;
                  iVar9 = DAT_146533690;
                  iVar19 = DAT_1465336bc;
                  iVar27 = uStack_290._4_4_;
                  iVar15 = local_298._4_4_;
                }
                if ((0 < iVar28) && (iVar9 == iVar19)) {
                  FUObjectArray::RemoveUObjectDeleteListener(&DAT_1469e91a0,&PTR_PTR_146533680);
                }
                LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1465336d8);
                if (((iVar27 != 0 || (int)uStack_290 != 0) || iVar15 != 0) || (int)uVar23 != 0) {
                  if (local_2a0 == 0) {
                    local_2a0 = FUN_1425697a0(local_280);
                  }
                  local_1e0 = 0;
                  local_1dc = 0;
                  uStack_1d8 = 0;
                  uStack_1d4 = 0;
                  uStack_1d0 = 0x3f800000;
                  local_1cc = 0;
                  local_1c8 = 0;
                  local_1c0 = 0;
                  local_1b8 = 0;
                  local_1b0 = 0;
                  local_1a8 = 0;
                  local_1a0 = 0;
                  local_198 = 0;
                  local_190 = 0;
                  local_188 = 0;
                  local_180 = 0;
                  local_178 = 0;
                  local_170 = 0;
                  local_168 = 0;
                  local_160 = 0;
                  local_158 = 0;
                  local_150 = 0;
                  local_148 = 0;
                  local_140 = 0;
                  local_138 = 0;
                  local_130 = 0;
                  local_128 = 0;
                  local_120 = (undefined4 *)0x0;
                  piVar13 = (int *)FUN_1425547f0(local_2a0 + 0x170,&local_298,&local_1e0);
                  if (local_150 != 0) {
                    FMemory::Free();
                  }
                  if (local_160 != 0) {
                    FMemory::Free();
                  }
                  if (local_170 != 0) {
                    FMemory::Free();
                  }
                  if (local_180 != 0) {
                    FMemory::Free();
                  }
                  if (local_190 != 0) {
                    FMemory::Free();
                  }
                  if (local_1a0 != 0) {
                    FMemory::Free();
                  }
                  if (local_1b8 != 0) {
                    FMemory::Free();
                  }
                  if (local_1c8 != 0) {
                    FMemory::Free();
                  }
                  piVar21 = local_288;
                  *piVar13 = *local_288;
                  piVar13[1] = local_288[1];
                  piVar13[2] = local_288[2];
                  piVar13[3] = local_288[3];
                  piVar13[4] = local_288[4];
                  piVar13[5] = local_288[5];
                  TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=
                            (piVar13 + 6,local_288 + 6);
                  TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=
                            (piVar13 + 10,piVar21 + 10);
                  *(undefined8 *)(piVar13 + 0xe) = *(undefined8 *)(piVar21 + 0xe);
                  TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=
                            (piVar13 + 0x10,piVar21 + 0x10);
                  TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=
                            (piVar13 + 0x14,piVar21 + 0x14);
                  TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=
                            (piVar13 + 0x18,piVar21 + 0x18);
                  TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=
                            (piVar13 + 0x1c,piVar21 + 0x1c);
                  TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=
                            (piVar13 + 0x20,piVar21 + 0x20);
                  TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=
                            (piVar13 + 0x24,piVar21 + 0x24);
                  *(undefined8 *)(piVar13 + 0x28) = *(undefined8 *)(piVar21 + 0x28);
                  *(undefined8 *)(piVar13 + 0x2a) = *(undefined8 *)(piVar21 + 0x2a);
                  *(undefined8 *)(piVar13 + 0x2c) = *(undefined8 *)(piVar21 + 0x2c);
                  *(char *)(piVar13 + 0x2e) = (char)piVar21[0x2e];
                  *(undefined8 *)(piVar13 + 0x30) = *(undefined8 *)(piVar21 + 0x30);
                  FUN_142564070(piVar21);
                  FMemory::operator_delete(piVar21,200);
                }
              }
              local_2b8 = local_2b8 + 1;
              local_278 = local_278 + 1;
              puVar18 = local_250;
              param_1 = local_280;
              iVar9 = local_2b4;
            } while (local_2b8 < (int)local_48);
          }
          if (local_50 != (undefined1 *)0x0) {
            FMemory::Free();
          }
        }
        local_2b4 = iVar9 + 1;
        local_250 = (undefined8 *)((longlong)puVar18 + 8);
      } while (local_2b4 < *(int *)(param_1 + 0xa8));
    }
  }
  return;
}



// FUNCTION 142570f00 FUN_142570f00 body=592 status=ok
// SIG undefined FUN_142570f00(void)

void FUN_142570f00(void)

{
  short *psVar1;
  longlong lVar2;
  char cVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  longlong local_38;
  ulonglong local_30;
  longlong local_28 [2];
  
  if ((DAT_146afd1b4 == '\0') &&
     (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)))) {
    DAT_146afd1b8 = DAT_146afd1b8 + 1;
    lVar8 = 6;
    lVar9 = 0;
    do {
      if (*(longlong *)((longlong)&DAT_146afd0b8 + lVar9) == 0) {
        psVar1 = *(short **)((longlong)&PTR_u_engine_ini__Script_Engine_Engine_146533720 + lVar9);
        local_38 = 0;
        local_30 = 0;
        if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
          lVar5 = -1;
          do {
            lVar2 = lVar5 + 1;
            lVar5 = lVar5 + 1;
          } while (psVar1[lVar2] != 0);
          uVar10 = (int)lVar5 + 1;
          local_30 = (ulonglong)uVar10;
          if (0 < (int)uVar10) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
          }
          FGenericPlatformString::Memcpy(local_38,psVar1,(longlong)(int)uVar10 * 2);
        }
        FUN_141796530(local_28,&local_38,0,0);
        if (local_38 != 0) {
          FMemory::Free();
        }
        uVar6 = ACineCameraActor::GetPrivateStaticClass();
        lVar5 = FUN_141799410(uVar6);
        *(longlong *)((longlong)&DAT_146afd0b8 + lVar9) = lVar5;
        if (lVar5 == 0) {
          if ((DAT_146afd1b8 == 1) || (DAT_1468c21ab == '\0')) {
            uVar6 = ACineCameraActor::GetPrivateStaticClass();
            lVar5 = FUN_141799c90(uVar6);
            *(longlong *)((longlong)&DAT_146afd0b8 + lVar9) = lVar5;
          }
          if (lVar5 != 0) goto LAB_142571099;
        }
        else {
LAB_142571099:
          uVar10 = *(uint *)(lVar5 + 0xc);
          lVar5 = 0;
          if ((int)uVar10 < (int)DAT_1469e91c4) {
            uVar7 = uVar10 & 0xffff;
            if ((int)uVar10 < 0) {
              uVar10 = uVar10 + 0xffff;
              uVar7 = uVar7 - 0x10000;
            }
            lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar10 >> 0x10) * 8) +
                    (longlong)(int)uVar7 * 0x18;
          }
          *(uint *)(lVar5 + 8) = *(uint *)(lVar5 + 8) | 0x40000000;
        }
        if (local_28[0] != 0) {
          FMemory::Free();
        }
      }
      lVar9 = lVar9 + 8;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    DAT_146afd1b8 = DAT_146afd1b8 + -1;
    if ((DAT_1468c21ab == '\0') || (DAT_146afd1b4 = '\0', DAT_146afd1b8 == 0)) {
      DAT_146afd1b4 = '\x01';
    }
  }
  return;
}



// FUNCTION 142571150 FUN_142571150 body=1741 status=ok
// SIG undefined FUN_142571150(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142571150(longlong param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 *puVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 **ppuVar13;
  undefined4 uVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined2 *puVar17;
  longlong lVar18;
  undefined4 *puVar19;
  longlong lVar20;
  longlong *plVar21;
  undefined1 auStack_368 [32];
  undefined4 local_348;
  undefined2 local_338 [4];
  longlong local_330;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined8 *local_320;
  undefined4 local_318;
  undefined4 local_314;
  longlong local_310;
  undefined1 local_308 [8];
  undefined1 local_300 [8];
  undefined1 local_2f8 [8];
  undefined1 local_2f0 [8];
  undefined1 local_2e8 [8];
  undefined1 local_2e0 [8];
  undefined1 local_2d8 [8];
  undefined1 local_2d0 [8];
  undefined1 local_2c8 [16];
  byte local_2b8 [256];
  undefined8 local_1b8;
  undefined4 local_1a8;
  uint uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198 [8];
  undefined4 local_178;
  undefined4 local_174;
  undefined8 local_170;
  undefined8 local_168;
  longlong local_160;
  longlong local_158;
  undefined1 local_148 [4];
  undefined2 auStack_144 [126];
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_368;
  lVar20 = *(longlong *)(param_1 + 0x658);
  plVar10 = (longlong *)(param_1 + 0x668);
  if (lVar20 != *plVar10) {
    local_48 = 0;
    puVar6 = (undefined1 *)FUN_1419e2380(param_1,local_308,param_1 + 0x658,0);
    uVar12 = local_48;
    lVar20 = (longlong)(int)local_48;
    iVar8 = (int)local_48 + 1;
    local_48 = CONCAT44(local_48._4_4_,iVar8);
    if (local_48._4_4_ < iVar8) {
      TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(local_148,uVar12 & 0xffffffff);
    }
    local_148[lVar20 * 8] = *puVar6;
    lVar20 = lVar20 * 8;
    local_148[lVar20 + 1] = puVar6[1];
    local_148[lVar20 + 2] = puVar6[2];
    local_148[lVar20 + 3] = puVar6[3];
    *(undefined2 *)(local_148 + lVar20 + 4) = *(undefined2 *)(puVar6 + 4);
    *(undefined2 *)(local_148 + lVar20 + 6) = *(undefined2 *)(puVar6 + 6);
    FUN_1419f2190(param_1);
    lVar20 = *(longlong *)(param_1 + 0x658);
  }
  local_1b8 = 0;
  if (lVar20 != 0) {
    pbVar7 = (byte *)FUN_1419e2500(param_1,local_300,param_1 + 0x658,0);
    uVar12 = local_1b8;
    lVar20 = (longlong)(int)local_1b8;
    iVar8 = (int)local_1b8 + 1;
    local_1b8 = CONCAT44(local_1b8._4_4_,iVar8);
    if (local_1b8._4_4_ < iVar8) {
      TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(local_2b8,uVar12 & 0xffffffff);
    }
    lVar20 = lVar20 * 8;
    local_2b8[lVar20] = *pbVar7;
    local_2b8[lVar20 + 1] = pbVar7[1];
    local_2b8[lVar20 + 2] = pbVar7[2];
    local_2b8[lVar20 + 3] = pbVar7[3];
    *(undefined2 *)(local_2b8 + lVar20 + 4) = *(undefined2 *)(pbVar7 + 4);
    *(undefined2 *)(local_2b8 + lVar20 + 6) = *(undefined2 *)(pbVar7 + 6);
  }
  local_338[0] = 0x201;
  puVar17 = local_338;
  lVar20 = 2;
  plVar21 = plVar10;
  do {
    if (*plVar10 != 0) {
      pbVar7 = (byte *)FUN_1419e2500(param_1,local_2f8,plVar21,*(undefined1 *)puVar17);
      uVar12 = local_1b8;
      lVar15 = (longlong)(int)local_1b8;
      iVar8 = (int)local_1b8 + 1;
      local_1b8 = CONCAT44(local_1b8._4_4_,iVar8);
      if (local_1b8._4_4_ < iVar8) {
        TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(local_2b8,uVar12 & 0xffffffff);
      }
      lVar15 = lVar15 * 8;
      local_2b8[lVar15] = *pbVar7;
      local_2b8[lVar15 + 1] = pbVar7[1];
      local_2b8[lVar15 + 2] = pbVar7[2];
      local_2b8[lVar15 + 3] = pbVar7[3];
      *(undefined2 *)(local_2b8 + lVar15 + 4) = *(undefined2 *)(pbVar7 + 4);
      *(undefined2 *)(local_2b8 + lVar15 + 6) = *(undefined2 *)(pbVar7 + 6);
    }
    plVar21 = plVar21 + 2;
    plVar10 = plVar10 + 2;
    puVar17 = (undefined2 *)((longlong)puVar17 + 1);
    lVar20 = lVar20 + -1;
  } while (lVar20 != 0);
  iVar8 = 0;
  puVar16 = &DAT_146ac3d70;
  lVar15 = 0;
  lVar20 = 0x760;
  do {
    *(undefined4 *)(lVar20 + param_1) = 0xffffffff;
    if ((iVar8 < 0) || (*(int *)(param_1 + 0x708) <= iVar8)) {
LAB_1425713ac:
      ppuVar13 = &local_320;
      local_318 = 0;
      puVar6 = local_2e8;
      local_314 = 0x4080000;
      local_320 = puVar16;
    }
    else {
      lVar18 = *(longlong *)(param_1 + 0x700);
      if (*(longlong *)(param_1 + 0x700) == 0) {
        lVar18 = param_1 + 0x6e0;
      }
      ppuVar13 = (undefined8 **)(lVar18 + lVar15);
      if (*(longlong *)(lVar18 + lVar15) == 0) goto LAB_1425713ac;
      puVar6 = local_2f0;
    }
    pbVar7 = (byte *)FUN_1419e2500(param_1,puVar6,ppuVar13,iVar8 + 0x10);
    uVar12 = local_1b8;
    lVar18 = (longlong)(int)local_1b8;
    iVar9 = (int)local_1b8 + 1;
    local_1b8 = CONCAT44(local_1b8._4_4_,iVar9);
    if (local_1b8._4_4_ < iVar9) {
      TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(local_2b8,uVar12 & 0xffffffff);
    }
    local_2b8[lVar18 * 8] = *pbVar7;
    lVar18 = lVar18 * 8;
    iVar8 = iVar8 + 1;
    local_2b8[lVar18 + 1] = pbVar7[1];
    lVar15 = lVar15 + 0x10;
    puVar16 = puVar16 + 9;
    local_2b8[lVar18 + 2] = pbVar7[2];
    local_2b8[lVar18 + 3] = pbVar7[3];
    *(undefined2 *)(local_2b8 + lVar18 + 4) = *(undefined2 *)(pbVar7 + 4);
    *(undefined2 *)(local_2b8 + lVar18 + 6) = *(undefined2 *)(pbVar7 + 6);
    *(uint *)(lVar20 + param_1) = (uint)local_2b8[(longlong)((int)local_1b8 + -1) * 8];
    lVar20 = lVar20 + 4;
  } while (iVar8 < 2);
  iVar8 = *(int *)(param_1 + 0x6c8);
  uVar12 = 0;
  if (iVar8 != 0) {
    uVar11 = uVar12;
    if (0 < iVar8) {
      do {
        iVar9 = (int)uVar11;
        pbVar7 = (byte *)FUN_1419e2500(param_1,local_2e0,param_1 + 0x688 + (longlong)iVar9 * 0x10,
                                       iVar9 + 4);
        uVar11 = local_1b8;
        lVar20 = (longlong)(int)local_1b8;
        iVar8 = (int)local_1b8 + 1;
        local_1b8 = CONCAT44(local_1b8._4_4_,iVar8);
        if (local_1b8._4_4_ < iVar8) {
          TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(local_2b8,uVar11 & 0xffffffff);
        }
        lVar20 = lVar20 * 8;
        local_2b8[lVar20] = *pbVar7;
        local_2b8[lVar20 + 1] = pbVar7[1];
        local_2b8[lVar20 + 2] = pbVar7[2];
        local_2b8[lVar20 + 3] = pbVar7[3];
        *(undefined2 *)(local_2b8 + lVar20 + 4) = *(undefined2 *)(pbVar7 + 4);
        iVar8 = *(int *)(param_1 + 0x6c8);
        *(undefined2 *)(local_2b8 + lVar20 + 6) = *(undefined2 *)(pbVar7 + 6);
        uVar11 = (ulonglong)(iVar9 + 1U);
      } while ((int)(iVar9 + 1U) < iVar8);
    }
    for (; iVar8 < 4; iVar8 = iVar8 + 1) {
      pbVar7 = (byte *)FUN_1419e2500(param_1,local_2d8,
                                     param_1 + 0x678 + (longlong)*(int *)(param_1 + 0x6c8) * 0x10,
                                     iVar8 + 4);
      uVar11 = local_1b8;
      lVar20 = (longlong)(int)local_1b8;
      iVar9 = (int)local_1b8 + 1;
      local_1b8 = CONCAT44(local_1b8._4_4_,iVar9);
      if (local_1b8._4_4_ < iVar9) {
        TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(local_2b8,uVar11 & 0xffffffff);
      }
      lVar20 = lVar20 * 8;
      local_2b8[lVar20] = *pbVar7;
      local_2b8[lVar20 + 1] = pbVar7[1];
      local_2b8[lVar20 + 2] = pbVar7[2];
      local_2b8[lVar20 + 3] = pbVar7[3];
      *(undefined2 *)(local_2b8 + lVar20 + 4) = *(undefined2 *)(pbVar7 + 4);
      *(undefined2 *)(local_2b8 + lVar20 + 6) = *(undefined2 *)(pbVar7 + 6);
    }
  }
  plVar10 = (longlong *)(param_1 + 0x6d0);
  if (*plVar10 == 0) {
    if (*(int *)(param_1 + 0x6c8) == 0) goto LAB_142571645;
    plVar10 = (longlong *)(param_1 + 0x688);
    puVar6 = local_2c8;
  }
  else {
    puVar6 = local_2d0;
  }
  pbVar7 = (byte *)FUN_1419e2500(param_1,puVar6,plVar10,0xf);
  uVar11 = local_1b8;
  lVar20 = (longlong)(int)local_1b8;
  iVar8 = (int)local_1b8 + 1;
  local_1b8 = CONCAT44(local_1b8._4_4_,iVar8);
  if (local_1b8._4_4_ < iVar8) {
    TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(local_2b8,uVar11 & 0xffffffff);
  }
  local_2b8[lVar20 * 8] = *pbVar7;
  lVar20 = lVar20 * 8;
  local_2b8[lVar20 + 1] = pbVar7[1];
  local_2b8[lVar20 + 2] = pbVar7[2];
  local_2b8[lVar20 + 3] = pbVar7[3];
  *(undefined2 *)(local_2b8 + lVar20 + 4) = *(undefined2 *)(pbVar7 + 4);
  *(undefined2 *)(local_2b8 + lVar20 + 6) = *(undefined2 *)(pbVar7 + 6);
LAB_142571645:
  FUN_1419f1da0(param_1,local_2b8);
  if (((*(char *)(param_1 + 0x339) != '\0') &&
      ((0x1d < DAT_146ab62cc || ((0x25e2efcaU >> (DAT_146ab62cc & 0x1f) & 1) == 0)))) &&
     ((0x1b < DAT_146ab62cc ||
      (((0x8051000U >> (DAT_146ab62cc & 0x1f) & 1) == 0 ||
       (uVar5 = RHIGetShaderLanguageVersion(), 1 < uVar5)))))) {
    puVar19 = local_198;
    local_168 = *(undefined8 *)(*(longlong *)(param_1 + 0x750) + 200);
    local_170 = *(undefined8 *)(*(longlong *)(param_1 + 0x750) + 0xd0);
    uVar11 = uVar12;
    do {
      lVar20 = *(longlong *)(param_1 + 0x750);
      lVar15 = *(longlong *)(lVar20 + 0xd8 + uVar12 * 8);
      bVar1 = *(byte *)(lVar20 + 0xf0 + uVar12);
      uVar14 = 0xffffffff;
      if (lVar15 == 0) {
        lVar15 = FUN_141ee2f20(bVar1);
        lVar20 = *(longlong *)(param_1 + 0x750);
        lVar15 = *(longlong *)(lVar15 + 0x38);
        uVar14 = 0;
      }
      iVar8 = (int)uVar11;
      if (iVar8 == 0) {
        lVar18 = (ulonglong)bVar1 * 0x10;
        uVar2 = *(undefined4 *)(lVar18 + 0x1465333c4);
        uVar3 = *(undefined4 *)(lVar18 + 0x1465333c8);
        uVar4 = *(undefined4 *)(lVar18 + 0x1465333cc);
        *puVar19 = *(undefined4 *)(&DAT_1465333c0 + lVar18);
        puVar19[1] = uVar2;
        puVar19[2] = uVar3;
        puVar19[3] = uVar4;
        local_178 = uVar14;
        local_160 = lVar15;
      }
      else if (iVar8 == 1) {
        lVar18 = (ulonglong)bVar1 * 0x10;
        uVar2 = *(undefined4 *)(lVar18 + 0x1465333c4);
        uVar3 = *(undefined4 *)(lVar18 + 0x1465333c8);
        uVar4 = *(undefined4 *)(lVar18 + 0x1465333cc);
        *puVar19 = *(undefined4 *)(&DAT_1465333c0 + lVar18);
        puVar19[1] = uVar2;
        puVar19[2] = uVar3;
        puVar19[3] = uVar4;
        local_174 = uVar14;
        local_158 = lVar15;
      }
      uVar11 = (ulonglong)(iVar8 + 1U);
      uVar12 = uVar12 + 1;
      puVar19 = puVar19 + 4;
    } while ((int)(iVar8 + 1U) < 2);
    uStack_1a4 = *(uint *)(lVar20 + 0xec);
    uStack_328 = *(undefined4 *)(lVar20 + 0xe8);
    local_330 = (ulonglong)uStack_1a4 << 0x20;
    uStack_324 = 0;
    local_348 = 2;
    local_1a8 = 0;
    uStack_19c = 0;
    uStack_1a0 = uStack_328;
    (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,&local_310,&local_1a8,&DAT_146afcd88);
    local_330 = local_310;
    if (local_310 != 0) {
      LOCK();
      *(int *)(local_310 + 8) = *(int *)(local_310 + 8) + 1;
      UNLOCK();
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_310);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x758,&local_330);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_330);
  }
  return;
}



// FUNCTION 142571820 IsDefaultMaterial body=40 status=ok
// SIG undefined IsDefaultMaterial(void)

bool UMaterial::IsDefaultMaterial(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  
  bVar2 = false;
  plVar3 = &DAT_146afd0b8;
  do {
    if (0x146afd0e7 < (longlong)plVar3) {
      return bVar2;
    }
    lVar1 = *plVar3;
    bVar2 = param_1 == lVar1;
    plVar3 = plVar3 + 1;
  } while (param_1 != lVar1);
  return bVar2;
}



// FUNCTION 142571850 FUN_142571850 body=281 status=ok
// SIG undefined FUN_142571850(void)

char FUN_142571850(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  longlong lVar7;
  
  if (param_2 == (longlong *)0x0) {
    return '\0';
  }
  if (param_2 != param_1) {
    (**(code **)(*param_1 + 0x2d8))(param_1,1);
    cVar6 = '\0';
    iVar5 = 0;
    if (0 < (int)param_1[0xc]) {
      lVar7 = 0;
      do {
        lVar1 = *(longlong *)(lVar7 + param_1[0xb]);
        if (lVar1 != 0) {
          lVar4 = UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (((bVar2) && (*(longlong **)(lVar1 + 0x40) != (longlong *)0x0)) &&
             ((cVar6 != '\0' ||
              ((cVar3 = (**(code **)(**(longlong **)(lVar1 + 0x40) + 0x2d0))(), cVar3 != '\0' ||
               (cVar3 = (**(code **)(**(longlong **)(lVar1 + 0x40) + 0x298))
                                  (*(longlong **)(lVar1 + 0x40),param_2), cVar3 != '\0')))))) {
            cVar6 = '\x01';
          }
        }
        iVar5 = iVar5 + 1;
        lVar7 = lVar7 + 8;
      } while (iVar5 < (int)param_1[0xc]);
    }
    (**(code **)(*param_1 + 0x2d8))(param_1,0);
    return cVar6;
  }
  return '\x01';
}



// FUNCTION 142571990 IsDependent body=85 status=ok
// SIG undefined IsDependent(void)

undefined1 UMaterialFunctionInterface::IsDependent(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialFunctionInterface.h"
             ,0x4d,L"Pure virtual not implemented (%s)",L"UMaterialFunctionInterface::IsDependent");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialFunctionInterface.h"
             ,0x4d,L"Pure virtual not implemented (%s)",L"UMaterialFunctionInterface::IsDependent");
  return 0;
}



// FUNCTION 142571a10 FUN_142571a10 body=72 status=ok
// SIG undefined FUN_142571a10(void)

undefined8 FUN_142571a10(longlong *param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*param_1 + 0x460))();
  if (iVar2 == 1) {
    return 1;
  }
  iVar2 = (**(code **)(*param_1 + 0x460))(param_1);
  if ((iVar2 == 2) && (cVar1 = (**(code **)(*param_1 + 0x450))(param_1), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 142571a60 IsNamedParameter body=28 status=ok
// SIG undefined IsNamedParameter(void)

ulonglong UMaterialExpressionFontSampleParameter::IsNamedParameter
                    (longlong param_1,ulonglong *param_2,undefined8 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  if (*param_2 == *(ulonglong *)(param_1 + 0x50)) {
    *param_3 = *(undefined8 *)(param_1 + 0x40);
    uVar1 = *(undefined4 *)(param_1 + 0x48);
    *param_4 = uVar1;
    return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
  }
  return *(ulonglong *)(param_1 + 0x50) & 0xffffffffffffff00;
}



// FUNCTION 142571a80 IsNamedParameter body=21 status=ok
// SIG undefined IsNamedParameter(void)

ulonglong UMaterialExpressionScalarParameter::IsNamedParameter
                    (longlong param_1,ulonglong *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  if (*param_2 == *(ulonglong *)(param_1 + 0x40)) {
    uVar1 = *(undefined4 *)(param_1 + 0x60);
    *param_3 = uVar1;
    return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
  }
  return *(ulonglong *)(param_1 + 0x40) & 0xffffffffffffff00;
}



// FUNCTION 142571aa0 IsNamedParameter body=32 status=ok
// SIG undefined IsNamedParameter(void)

ulonglong UMaterialExpressionStaticBoolParameter::IsNamedParameter
                    (longlong param_1,ulonglong *param_2,byte *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  if (*param_2 == *(ulonglong *)(param_1 + 0x40)) {
    *param_3 = *(byte *)(param_1 + 0x60) & 1;
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    *param_4 = *(undefined8 *)(param_1 + 0x48);
    param_4[1] = uVar1;
    return 1;
  }
  return *(ulonglong *)(param_1 + 0x40) & 0xffffffffffffff00;
}



// FUNCTION 142571ac0 IsNamedParameter body=95 status=ok
// SIG undefined IsNamedParameter(void)

undefined8
UMaterialExpressionStaticComponentMaskParameter::IsNamedParameter
          (longlong param_1,longlong *param_2,byte *param_3,byte *param_4,byte *param_5,
          byte *param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  
  if (*param_2 == *(longlong *)(param_1 + 0x40)) {
    *param_3 = *(byte *)(param_1 + 0x90) & 1;
    *param_4 = (byte)(*(uint *)(param_1 + 0x90) >> 1) & 1;
    *param_5 = (byte)(*(uint *)(param_1 + 0x90) >> 2) & 1;
    *param_6 = (byte)(*(uint *)(param_1 + 0x90) >> 3) & 1;
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    *param_7 = *(undefined8 *)(param_1 + 0x48);
    param_7[1] = uVar1;
    return 1;
  }
  return 0;
}



// FUNCTION 142571b20 FUN_142571b20 body=25 status=ok
// SIG undefined FUN_142571b20(void)

ulonglong FUN_142571b20(longlong param_1,ulonglong *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  if (*param_2 == *(ulonglong *)(param_1 + 0x1b8)) {
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    *param_3 = uVar1;
    return CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
  }
  return *(ulonglong *)(param_1 + 0x1b8) & 0xffffffffffffff00;
}



// FUNCTION 142571b40 IsNamedParameter body=23 status=ok
// SIG undefined IsNamedParameter(void)

longlong UMaterialExpressionVectorParameter::IsNamedParameter
                   (longlong param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  uint7 uVar2;
  
  uVar2 = (uint7)((ulonglong)*(longlong *)(param_1 + 0x40) >> 8);
  if (*param_2 == *(longlong *)(param_1 + 0x40)) {
    uVar1 = *(undefined8 *)(param_1 + 0x68);
    *param_3 = *(undefined8 *)(param_1 + 0x60);
    param_3[1] = uVar1;
    return CONCAT71(uVar2,1);
  }
  return (ulonglong)uVar2 << 8;
}



// FUNCTION 142571b80 FUN_142571b80 body=1030 status=ok
// SIG undefined FUN_142571b80(void)

ulonglong FUN_142571b80(longlong *param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  uint7 uVar5;
  char *pcVar4;
  byte bVar6;
  ulonglong uVar7;
  
  cVar1 = (char)param_1[0x28];
  pcVar4 = (char *)0x0;
  if (cVar1 == '\x04') {
    if ((param_2 != 0) && (((char)param_1[0xf0] == '\0' || (param_2 != 1)))) goto LAB_142571c08;
    goto LAB_142571ba4;
  }
  if (cVar1 == '\x02') {
    return (ulonglong)(param_2 == 0);
  }
  if (cVar1 != '\x01') {
    if (cVar1 == '\x03') {
      if (((param_2 & 0xfffffffa) == 0) && (param_2 != 4)) {
        return 1;
      }
      goto LAB_142571c08;
    }
    if (cVar1 != '\x05') {
      cVar1 = *(char *)((longlong)param_1 + 0x141);
      if ((cVar1 == '\0') || (cVar1 == '\x01')) {
        bVar6 = 0;
      }
      else {
        bVar6 = 1;
      }
      switch(param_2) {
      case 1:
        if ((bVar6 == 0) || (cVar1 == '\x04')) {
          uVar7 = 0;
        }
        else {
          uVar7 = 1;
        }
        bVar6 = *(byte *)((longlong)param_1 + 0x144);
        if (((8 < bVar6) || ((0x16cU >> (bVar6 & 0x1f) & 1) == 0)) && (bVar6 != 9)) {
          return uVar7;
        }
        break;
      case 2:
        return (ulonglong)(cVar1 == '\x01');
      case 3:
      case 4:
        return 0;
      case 5:
      case 0x10:
        return (ulonglong)(*(char *)((longlong)param_1 + 0x144) != '\0');
      case 6:
      case 7:
      case 8:
        if (*(char *)((longlong)param_1 + 0x144) == '\0') {
          return 0;
        }
        if ((bVar6 != 0) && (*(byte *)((longlong)param_1 + 0x6d5) < 4)) {
          return 0;
        }
        break;
      case 9:
        if (((bVar6 != 0) && ((*(byte *)((longlong)param_1 + 0x6d5) & 0xfd) == 0)) &&
           (cVar1 = (**(code **)(*param_1 + 0x498))(param_1), cVar1 == '\0')) {
          return 0;
        }
        break;
      case 0xb:
      case 0xc:
        return (ulonglong)((char)param_1[0xe2] != '\0');
      case 0xd:
        if (8 < *(byte *)((longlong)param_1 + 0x144)) {
          return 0;
        }
        if ((0x14cU >> (*(byte *)((longlong)param_1 + 0x144) & 0x1f) & 1) == 0) {
          return 0;
        }
        break;
      case 0xe:
        if ((*(char *)((longlong)param_1 + 0x144) != '\x04') &&
           (2 < (byte)(*(char *)((longlong)param_1 + 0x144) - 7U))) {
          return 0;
        }
        break;
      case 0xf:
        if ((*(char *)((longlong)param_1 + 0x144) != '\x04') &&
           (*(char *)((longlong)param_1 + 0x144) != '\t')) {
          return 0;
        }
        break;
      case 0x11:
        if (bVar6 == 0) {
          return 0;
        }
        if (cVar1 == '\x04') {
          return 0;
        }
        break;
      case 0x1a:
      case 0x1b:
        return (ulonglong)(bVar6 ^ 1);
      }
      return 1;
    }
    if ((param_2 != 0) && (param_2 != 10)) {
      if (param_2 == 2) {
        if (*(char *)((longlong)param_1 + 0x141) != '\x01') {
          return 0;
        }
      }
      else if (param_2 == 1) {
        cVar1 = *(char *)((longlong)param_1 + 0x141);
        pcVar4 = (char *)0x0;
        if ((cVar1 == '\0') || (cVar1 == '\x01')) goto LAB_142571c08;
        if (cVar1 == '\x04') {
          return 0;
        }
      }
      else {
        pcVar4 = (char *)(ulonglong)(param_2 - 0x12);
        if (7 < param_2 - 0x12) {
          param_2 = param_2 - 0x1c;
          pcVar4 = (char *)(ulonglong)param_2;
          if (3 < param_2) {
            return (ulonglong)(uint3)(param_2 >> 8) << 8;
          }
        }
      }
    }
    goto LAB_142571ba4;
  }
  pcVar4 = (char *)(ulonglong)(param_2 - 0x12);
  if (((param_2 - 0x12 < 8) || (pcVar4 = (char *)(ulonglong)(param_2 - 0x1c), param_2 - 0x1c < 4))
     || ((param_2 == 0x20 || (param_2 == 10)))) goto LAB_142571ba4;
  pcVar3 = (char *)(ulonglong)*(byte *)((longlong)param_1 + 0x142);
  pcVar4 = pcVar3;
  if (0xe < *(byte *)((longlong)param_1 + 0x142)) goto LAB_142571c08;
  pcVar4 = IMAGE_DOS_HEADER_140000000.e_magic +
           (&switchD_142571bf9::switchdataD_142571f88)[(longlong)pcVar3];
  uVar5 = (uint7)((ulonglong)pcVar4 >> 8);
  switch(pcVar3) {
  default:
    if ((1 < param_2) && (pcVar4 = (char *)(ulonglong)(param_2 - 5), 4 < param_2 - 5)) break;
    goto LAB_142571ba4;
  case (char *)0x2:
  case (char *)0x8:
    return (ulonglong)CONCAT31((int3)(param_2 - 1 >> 8),(param_2 - 1 & 0xfffffff7) == 0);
  case (char *)0x3:
    return CONCAT71(uVar5,param_2 < 2);
  case (char *)0x4:
    if ((param_2 < 10) && (pcVar4 = (char *)0x322, (0x322U >> (param_2 & 0x1f) & 1) != 0)) {
      return 0x301;
    }
    break;
  case (char *)0x5:
    return (ulonglong)CONCAT31((int3)(param_2 - 1 >> 8),(param_2 - 1 & 0xfffffffb) == 0);
  case (char *)0x6:
    uVar2 = param_2 - 1;
    pcVar4 = (char *)(ulonglong)uVar2;
    if (((uVar2 & 0xfffffff3) == 0) && (param_2 != 0xd)) {
      return CONCAT71((uint7)(uint3)(uVar2 >> 8),1);
    }
    break;
  case (char *)0x7:
    if ((param_2 < 9) && (pcVar4 = (char *)0x122, (0x122U >> (param_2 & 0x1f) & 1) != 0)) {
      return 0x101;
    }
    break;
  case (char *)0x9:
    uVar2 = param_2 - 8;
    pcVar4 = (char *)(ulonglong)uVar2;
    if ((1 < uVar2) && (param_2 != 1)) {
      return (ulonglong)(uint3)(uVar2 >> 8) << 8;
    }
    goto LAB_142571ba4;
  case (char *)0xa:
    if ((param_2 != 8) && (param_2 != 1)) {
      return (ulonglong)uVar5 << 8;
    }
    goto LAB_142571ba4;
  case (char *)0xb:
    if ((param_2 < 10) && (pcVar4 = (char *)0x323, (0x323U >> (param_2 & 0x1f) & 1) != 0)) {
      return 0x301;
    }
    break;
  case (char *)0xc:
    if ((param_2 < 10) && (pcVar4 = (char *)0x3e5, (0x3e5U >> (param_2 & 0x1f) & 1) != 0)) {
      return 0x301;
    }
    break;
  case (char *)0xd:
    if (1 < param_2) {
      param_2 = param_2 - 5;
      pcVar4 = (char *)(ulonglong)param_2;
      if (3 < param_2) {
        return (ulonglong)(uint3)(param_2 >> 8) << 8;
      }
    }
LAB_142571ba4:
    return CONCAT71((int7)((ulonglong)pcVar4 >> 8),1);
  case (char *)0xe:
    return CONCAT71(uVar5,param_2 == 0x10);
  }
LAB_142571c08:
  return (ulonglong)pcVar4 & 0xffffffffffffff00;
}



// FUNCTION 142572040 IsReadyForFinishDestroy body=26 status=ok
// SIG undefined IsReadyForFinishDestroy(void)

bool ULevel::IsReadyForFinishDestroy(longlong param_1)

{
  char cVar1;
  
  cVar1 = FRenderCommandFence::IsFenceComplete(param_1 + 0x1c0);
  return cVar1 != '\0';
}



// FUNCTION 142572060 FUN_142572060 body=50 status=ok
// SIG undefined FUN_142572060(void)

undefined1 FUN_142572060(longlong param_1)

{
  char cVar1;
  
  cVar1 = UMaterialInterface::IsReadyForFinishDestroy();
  if (cVar1 != '\0') {
    cVar1 = FRenderCommandFence::IsFenceComplete(param_1 + 0x820);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1425720b0 FUN_1425720b0 body=1297 status=ok
// SIG undefined FUN_1425720b0(void)

/* WARNING: Removing unreachable block (ram,0x0001425721a8) */

undefined8
FUN_1425720b0(longlong param_1,longlong *param_2,char *param_3,undefined4 *param_4,
             undefined4 *param_5)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *local_res8;
  longlong local_80 [2];
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [32];
  
  plVar12 = *(longlong **)(param_1 + 0x740);
  local_res8 = (longlong *)0x0;
  plVar1 = plVar12 + *(int *)(param_1 + 0x748);
  do {
    if (plVar12 == plVar1) {
      return 0;
    }
    plVar10 = (longlong *)0x0;
    plVar11 = (longlong *)*plVar12;
    if (*(char *)((longlong)param_2 + 0xb) == '\x02') {
      if (plVar11 != (longlong *)0x0) {
        lVar5 = UMaterialExpressionScalarParameter::GetPrivateStaticClass();
        if ((*(int *)(plVar11[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar11[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
            != lVar5 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          if (*param_2 == plVar11[8]) {
            cVar3 = (**(code **)(*plVar11 + 0x2a0))(plVar11);
            *param_3 = cVar3;
            if (cVar3 == '\0') {
              return 1;
            }
            lVar5 = FUN_1429acb70();
            if ((*(int *)(lVar5 + 0x90) <= *(int *)(plVar11[2] + 0x90)) &&
               (*(longlong *)
                 (*(longlong *)(plVar11[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) ==
                lVar5 + 0x88)) {
              plVar10 = plVar11;
            }
LAB_1425723ca:
            uVar7 = UObjectBaseUtility::GetPathName(plVar10[0xe],local_58,0);
            puVar8 = (undefined8 *)FSoftObjectPath::FSoftObjectPath(local_48,uVar7);
            uVar7 = *puVar8;
            FString::FString(local_80,puVar8 + 1);
            if (puVar8[1] != 0) {
              FMemory::Free();
            }
            *param_4 = 0xffffffff;
            param_4[1] = 0;
            param_4[2] = 0;
            local_70 = uVar7;
            FString::FString(local_68,local_80);
            FSoftObjectPath::operator=(param_4 + 4,&local_70);
            if (local_80[0] != 0) {
              FMemory::Free();
            }
            uVar7 = UObjectBaseUtility::GetPathName(plVar10[0xf],local_58,0);
            puVar8 = (undefined8 *)FSoftObjectPath::FSoftObjectPath(local_48,uVar7);
LAB_142572483:
            uVar7 = *puVar8;
            FString::FString(local_80,puVar8 + 1);
            if (puVar8[1] != 0) {
              FMemory::Free();
            }
            *param_5 = 0xffffffff;
            param_5[1] = 0;
            param_5[2] = 0;
            local_70 = uVar7;
            FString::FString(local_68,local_80);
            FSoftObjectPath::operator=(param_5 + 4,&local_70);
            if (local_80[0] != 0) {
              FMemory::Free();
            }
            return 1;
          }
        }
        else {
          lVar5 = UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass();
          if ((*(int *)(plVar11[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar11[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
              != lVar5 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (((bVar4) && (plVar11[8] != 0)) &&
             (cVar3 = FUN_14255a0d0(plVar11[8],param_2,&local_res8,local_58), plVar11 = local_res8,
             cVar3 != '\0')) {
            cVar3 = (**(code **)(*local_res8 + 0x2a0))();
            *param_3 = cVar3;
            if (cVar3 != '\0') {
              lVar6 = FUN_1429acb70();
              lVar5 = plVar11[2];
              if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar6 + 0x90)) ||
                 (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
                  != lVar6 + 0x88)) {
                bVar4 = false;
              }
              else {
                bVar4 = true;
              }
              plVar10 = (longlong *)0x0;
              if (bVar4) {
                plVar10 = plVar11;
              }
              if (plVar10 != (longlong *)0x0) {
                uVar7 = UObjectBaseUtility::GetPathName(plVar10[0xe],local_58,0);
                puVar8 = (undefined8 *)FSoftObjectPath::FSoftObjectPath(local_48,uVar7);
                uVar7 = *puVar8;
                FString::FString(local_80,puVar8 + 1);
                if (puVar8[1] != 0) {
                  FMemory::Free();
                }
                *param_4 = 0xffffffff;
                param_4[1] = 0;
                param_4[2] = 0;
                local_70 = uVar7;
                FString::FString(local_68,local_80);
                FSoftObjectPath::operator=(param_4 + 4,&local_70);
                if (local_80[0] != 0) {
                  FMemory::Free();
                }
                uVar7 = UObjectBaseUtility::GetPathName(plVar10[0xf],local_58,0);
                puVar8 = (undefined8 *)FSoftObjectPath::FSoftObjectPath(local_48,uVar7);
                goto LAB_142572483;
              }
            }
          }
        }
      }
    }
    else if (plVar11 != (longlong *)0x0) {
      lVar5 = FUN_1429af6e0();
      if ((*(int *)(plVar11[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar11[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
          lVar5 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        if (*(char *)((longlong)param_2 + 0xb) == '\0') {
          plVar9 = (longlong *)plVar11[0x20];
          if (plVar9 == (longlong *)0x0) {
            plVar9 = plVar11 + 0x12;
          }
          iVar2 = *(int *)((longlong)param_2 + 0xc);
          if ((iVar2 < 0) || ((int)plVar9[1] <= iVar2)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            lVar5 = *(longlong *)(*plVar9 + (longlong)iVar2 * 8);
LAB_142572354:
            if (((lVar5 != 0) &&
                (cVar3 = FUN_14255a0d0(lVar5,param_2,&local_res8,local_58), plVar11 = local_res8,
                cVar3 != '\0')) && (*param_3 != '\0')) {
              if (local_res8 == (longlong *)0x0) {
LAB_1425723be:
                plVar11 = plVar10;
              }
              else {
                lVar6 = FUN_1429acb70();
                lVar5 = plVar11[2];
                if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar6 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
                    lVar6 + 0x88)) {
                  bVar4 = false;
                }
                else {
                  bVar4 = true;
                }
                if (!bVar4) goto LAB_1425723be;
              }
              plVar10 = plVar11;
              if (plVar11 != (longlong *)0x0) goto LAB_1425723ca;
            }
          }
        }
        else if (*(char *)((longlong)param_2 + 0xb) == '\x01') {
          iVar2 = *(int *)((longlong)param_2 + 0xc);
          plVar9 = (longlong *)(plVar11[0x20] + 0x10);
          if (plVar11[0x20] == 0) {
            plVar9 = plVar11 + 0x14;
          }
          if ((iVar2 < 0) || ((int)plVar9[1] <= iVar2)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            lVar5 = *(longlong *)(*plVar9 + (longlong)iVar2 * 8);
            goto LAB_142572354;
          }
        }
      }
    }
    plVar12 = plVar12 + 1;
  } while( true );
}



// FUNCTION 1425725d0 FUN_1425725d0 body=41 status=ok
// SIG undefined FUN_1425725d0(void)

undefined8 FUN_1425725d0(longlong *param_1)

{
  uint uVar1;
  
  if ((*(byte *)((longlong)param_1 + 0x6dc) & 1) != 0) {
    uVar1 = (**(code **)(*param_1 + 0x460))();
    if (1 < uVar1) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142572620 FUN_142572620 body=505 status=ok
// SIG undefined FUN_142572620(void)

undefined8 FUN_142572620(longlong param_1,longlong *param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 uVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *local_res8;
  undefined1 local_res20 [8];
  
  plVar9 = *(longlong **)(param_1 + 0x740);
  local_res8 = (longlong *)0x0;
  plVar1 = plVar9 + *(int *)(param_1 + 0x748);
  do {
    if (plVar9 == plVar1) {
      return 0;
    }
    plVar3 = (longlong *)*plVar9;
    if (*(char *)((longlong)param_2 + 0xb) == '\x02') {
      if (plVar3 != (longlong *)0x0) {
        lVar7 = UMaterialExpressionVectorParameter::GetPrivateStaticClass();
        if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
            lVar7 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          if (*param_2 == plVar3[8]) {
            uVar4 = (**(code **)(*plVar3 + 0x2a0))(plVar3);
            *param_3 = uVar4;
            return 1;
          }
        }
        else {
          lVar7 = UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass();
          if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
              != lVar7 + 0x88)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (bVar5) {
            lVar7 = plVar3[8];
LAB_1425727c7:
            if ((lVar7 != 0) &&
               (cVar6 = FUN_14255a5b0(lVar7,param_2,&local_res8,local_res20), cVar6 != '\0')) {
              uVar4 = (**(code **)(*local_res8 + 0x2a0))();
              *param_3 = uVar4;
              return 1;
            }
          }
        }
      }
    }
    else if (plVar3 != (longlong *)0x0) {
      lVar7 = FUN_1429af6e0();
      if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
          lVar7 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        if (*(char *)((longlong)param_2 + 0xb) == '\0') {
          plVar8 = (longlong *)plVar3[0x20];
          if (plVar8 == (longlong *)0x0) {
            plVar8 = plVar3 + 0x12;
          }
          iVar2 = *(int *)((longlong)param_2 + 0xc);
          if ((iVar2 < 0) || ((int)plVar8[1] <= iVar2)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (bVar5) {
            lVar7 = *plVar8;
LAB_1425727c3:
            lVar7 = *(longlong *)(lVar7 + (longlong)iVar2 * 8);
            goto LAB_1425727c7;
          }
        }
        else if (*(char *)((longlong)param_2 + 0xb) == '\x01') {
          iVar2 = *(int *)((longlong)param_2 + 0xc);
          plVar8 = (longlong *)(plVar3[0x20] + 0x10);
          if (plVar3[0x20] == 0) {
            plVar8 = plVar3 + 0x14;
          }
          if ((iVar2 < 0) || ((int)plVar8[1] <= iVar2)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (bVar5) {
            lVar7 = *plVar8;
            goto LAB_1425727c3;
          }
        }
      }
    }
    plVar9 = plVar9 + 1;
  } while( true );
}



// FUNCTION 142572830 FUN_142572830 body=436 status=ok
// SIG undefined FUN_142572830(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142572830(void)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  bool bVar10;
  longlong local_res10;
  undefined1 local_res18 [16];
  longlong local_68 [3];
  ulonglong local_50;
  int local_48;
  
  uVar9 = 1 << ((byte)DAT_1464c9c14 & 0x1f) | _DAT_146afe3a0;
  if (uVar9 == 0) {
    return;
  }
LAB_142572880:
  local_68[0] = 0;
  local_68[1] = 0;
  uVar6 = -uVar9 & uVar9;
  iVar2 = 0x1f;
  if (uVar6 != 0) {
    for (; uVar6 >> iVar2 == 0; iVar2 = iVar2 + -1) {
    }
  }
  iVar7 = 0;
  if (uVar6 != 0) {
    iVar7 = iVar2;
  }
  GetFeatureLevelName(iVar7,local_68);
  local_68[2] = 0;
  local_50 = 0;
  local_48 = -1;
  uVar4 = UMaterialInterface::GetPrivateStaticClass();
  FUN_1417a5560(uVar4,local_68 + 2,1,0x10,0);
  uVar8 = local_50 & 0xffffffff;
  do {
    local_48 = local_48 + 1;
    if ((int)local_50 <= local_48) break;
  } while (*(longlong *)(local_68[2] + (longlong)local_48 * 8) == 0);
  do {
    if ((local_48 < 0) || ((int)uVar8 <= local_48)) break;
    plVar1 = *(longlong **)(local_68[2] + (longlong)local_48 * 8);
    plVar5 = (longlong *)(**(code **)(*plVar1 + 0x2a8))(plVar1,0,0);
    local_res10 = 0;
    (**(code **)(*plVar5 + 0x40))(plVar5,iVar7,local_res18,&local_res10);
    if ((local_res10 != 0) && (cVar3 = FUN_14259fdf0(), cVar3 != '\0')) {
      (**(code **)(*plVar1 + 0x290))(plVar1);
    }
    uVar8 = local_50 & 0xffffffff;
    do {
      local_48 = local_48 + 1;
      if ((int)local_50 <= local_48) break;
    } while (*(longlong *)(local_68[2] + (longlong)local_48 * 8) == 0);
  } while( true );
  if (local_68[2] != 0) {
    FMemory::Free(local_68[2]);
  }
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  bVar10 = uVar6 == uVar9;
  uVar9 = uVar9 ^ uVar6;
  if (bVar10) {
    return;
  }
  goto LAB_142572880;
}



// FUNCTION 1425729f0 FUN_1425729f0 body=154 status=ok
// SIG undefined FUN_1425729f0(void)

undefined8 FUN_1425729f0(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146afd1c8) {
    _Init_thread_header(&DAT_146afd1c8);
    if (DAT_146afd1c8 == -1) {
      uVar1 = UEnum::GetPrivateStaticClass();
      DAT_146afd1c0 = FUN_141799410(uVar1,0xffffffffffffffff,L"EMaterialDomain");
      _Init_thread_footer(&DAT_146afd1c8);
    }
  }
  UEnum::GetNameStringByValue(DAT_146afd1c0,param_1,(longlong)param_2);
  return param_1;
}



// FUNCTION 142572a90 FUN_142572a90 body=53 status=ok
// SIG undefined FUN_142572a90(void)

undefined1 FUN_142572a90(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(*param_1 + 0x280))();
  if (lVar2 == 0) {
    cVar1 = (**(code **)(*param_1 + 0x288))(param_1);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 142572ad0 FUN_142572ad0 body=122 status=ok
// SIG undefined FUN_142572ad0(void)

ulonglong FUN_142572ad0(longlong param_1,undefined1 *param_2,undefined4 param_3)

{
  uint uVar1;
  ulonglong uVar2;
  
  *param_2 = 1;
  uVar2 = 0;
  if (((*(byte *)(param_1 + 0x140) & 0xfc) == 0) && (*(byte *)(param_1 + 0x140) != 2)) {
    uVar2 = FUN_14256ec20(param_1,param_3);
    if (((char)uVar2 == '\0') && ((*(byte *)(param_1 + 0x708) & 0x40) == 0)) {
      uVar1 = 1 << ((byte)param_3 & 0x1f) & *(uint *)(param_1 + 0x774);
      uVar2 = (ulonglong)uVar1;
      *param_2 = 0;
      if (uVar1 == 0) {
        return 1;
      }
    }
  }
  else {
    *param_2 = 0;
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 142572b50 FUN_142572b50 body=932 status=ok
// SIG undefined FUN_142572b50(void)

void FUN_142572b50(void)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  undefined8 uVar4;
  float *pfVar5;
  uint uVar6;
  void *pvVar8;
  int iVar9;
  void *pvVar10;
  int iVar11;
  longlong lVar12;
  void *local_48;
  ulonglong local_40;
  int local_38;
  void *local_30;
  int local_28;
  void *pvVar7;
  
  pvVar10 = (void *)0x0;
  if (DAT_1465333a0 != DAT_1465337a0) {
    DAT_1465337a0 = DAT_1465333a0;
    local_48 = (void *)0x0;
    local_40 = 0;
    local_38 = -1;
    uVar4 = AGPingUsable::GetPrivateStaticClass();
    FUN_1417a5560(uVar4,&local_48,1,0x30,0x20000000);
    pvVar7 = local_48;
    lVar12 = (longlong)(int)local_40;
    do {
      local_38 = local_38 + 1;
      if ((int)local_40 <= local_38) break;
    } while (*(longlong *)((longlong)local_48 + (longlong)local_38 * 8) == 0);
    local_30 = (void *)0x0;
    local_28 = (int)local_40;
    iVar9 = local_38;
    iVar1 = (int)local_40;
    iVar3 = local_28;
    iVar11 = 0;
    pvVar8 = pvVar10;
    if ((int)local_40 != 0) {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                (&local_30,local_40 & 0xffffffff,0);
      pvVar8 = local_30;
      _guard_xfg_dispatch_icall_nop(local_30,pvVar7,lVar12 << 3);
      iVar9 = local_38;
      iVar1 = local_28;
      iVar3 = local_28;
      iVar11 = (int)local_40;
    }
joined_r0x000142572c2f:
    local_28 = iVar3;
    iVar3 = local_28;
    local_28 = iVar1;
    if (iVar9 != iVar11) {
      FUN_1425793d0(*(undefined8 *)((longlong)pvVar8 + (longlong)iVar9 * 8));
      do {
        iVar9 = iVar9 + 1;
        iVar1 = local_28;
        if (iVar3 <= iVar9) break;
      } while (*(longlong *)((longlong)pvVar8 + (longlong)iVar9 * 8) == 0);
      goto joined_r0x000142572c2f;
    }
    if (pvVar8 != (void *)0x0) {
      FMemory::Free(pvVar8);
    }
    if (local_48 != (void *)0x0) {
      FMemory::Free(local_48);
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146afd110) &&
     (_Init_thread_header(&DAT_146afd110), pfVar2 = DAT_146afd020, DAT_146afd110 == -1)) {
    iVar9 = (int)DAT_146afd028;
    DAT_146afd108 = iVar9;
    if (iVar9 == 0) {
      DAT_146afd10c = 0;
    }
    else {
      TArray<int,FDefaultAllocator>::ResizeForCopy(&DAT_146afd100,DAT_146afd028 & 0xffffffff,0);
      _guard_xfg_dispatch_icall_nop(DAT_146afd100,pfVar2,(longlong)iVar9 << 2);
    }
    atexit((_func_5014 *)&LAB_143eb0630);
    _Init_thread_footer(&DAT_146afd110);
  }
  FUN_1425732f0();
  pfVar2 = DAT_146afd020;
  iVar9 = (int)DAT_146afd028;
  if (0 < DAT_146afd108) {
    pfVar5 = DAT_146afd020;
    pvVar7 = pvVar10;
    pvVar8 = pvVar10;
    do {
      if ((((longlong)pvVar8 < 0) || (iVar9 <= (int)pvVar7)) ||
         (*(float *)(((longlong)DAT_146afd100 - (longlong)DAT_146afd020) + (longlong)pfVar5) !=
          *pfVar5)) goto code_r0x000142572d27;
      uVar6 = (int)pvVar7 + 1;
      pvVar7 = (void *)(ulonglong)uVar6;
      pvVar8 = (void *)((longlong)pvVar8 + 1);
      pfVar5 = pfVar5 + 1;
    } while ((int)uVar6 < DAT_146afd108);
  }
  if (DAT_146afd108 != iVar9) {
code_r0x000142572d27:
    DAT_146afd108 = iVar9;
    if ((iVar9 == 0) && (DAT_146afd10c == 0)) {
      DAT_146afd10c = 0;
    }
    else {
      TArray<int,FDefaultAllocator>::ResizeForCopy(&DAT_146afd100,DAT_146afd028 & 0xffffffff);
      _guard_xfg_dispatch_icall_nop(DAT_146afd100,pfVar2,(longlong)iVar9 << 2);
    }
    local_48 = (void *)0x0;
    local_40 = 0;
    local_38 = -1;
    uVar4 = AGPingUsable::GetPrivateStaticClass();
    FUN_1417a5560(uVar4,&local_48,1,0x30,0x20000000);
    pvVar7 = local_48;
    lVar12 = (longlong)(int)local_40;
    do {
      local_38 = local_38 + 1;
      if ((int)local_40 <= local_38) break;
    } while (*(longlong *)((longlong)local_48 + (longlong)local_38 * 8) == 0);
    local_30 = (void *)0x0;
    local_28 = (int)local_40;
    iVar9 = local_38;
    iVar1 = (int)local_40;
    iVar3 = local_28;
    iVar11 = 0;
    if ((int)local_40 != 0) {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                (&local_30,local_40 & 0xffffffff,0);
      pvVar10 = local_30;
      _guard_xfg_dispatch_icall_nop(local_30,pvVar7,lVar12 << 3);
      iVar9 = local_38;
      iVar1 = local_28;
      iVar3 = local_28;
      iVar11 = (int)local_40;
    }
joined_r0x000142572e0b:
    local_28 = iVar3;
    iVar3 = local_28;
    local_28 = iVar1;
    if (iVar9 != iVar11) {
      FUN_142579320(*(undefined8 *)((longlong)pvVar10 + (longlong)iVar9 * 8));
      do {
        iVar9 = iVar9 + 1;
        iVar1 = local_28;
        if (iVar3 <= iVar9) break;
      } while (*(longlong *)((longlong)pvVar10 + (longlong)iVar9 * 8) == 0);
      goto joined_r0x000142572e0b;
    }
    if (pvVar10 != (void *)0x0) {
      FMemory::Free(pvVar10);
    }
    if (local_48 != (void *)0x0) {
      FMemory::Free(local_48);
    }
  }
  return;
}



// FUNCTION 142572f00 FUN_142572f00 body=543 status=ok
// SIG undefined FUN_142572f00(void)

void FUN_142572f00(longlong param_1,longlong param_2,float param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 *puVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong *plVar15;
  undefined8 local_res8;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_44;
  
  lVar1 = param_1 + -0x28;
  lVar8 = (**(code **)(*(longlong *)(param_1 + -0x28) + 0x288))(lVar1);
  if (lVar8 == 0) {
    return;
  }
  if (*(char *)(lVar8 + 0x140) != '\x04') {
    return;
  }
  if (*(longlong *)(param_2 + 0x18) == 0) {
    return;
  }
  local_res8 = 0;
  puVar9 = (undefined8 *)FUN_14259c2b0(param_2 + 0x1240,lVar8,&local_res8);
  if (puVar9 == (undefined8 *)0x0) {
    lVar10 = (**(code **)(**(longlong **)(param_2 + 0x18) + 0x28))
                       (*(longlong **)(param_2 + 0x18),lVar1);
    if (lVar10 == 0) {
      return;
    }
    lVar11 = lVar1;
    if (param_3 < 1.0) {
      lVar11 = lVar8;
    }
    FUN_14258aaf0(lVar10,lVar11,*(undefined4 *)(param_2 + 0x1a38));
    bVar3 = *(byte *)(lVar8 + 0x778);
    plVar15 = (longlong *)(param_2 + 0x19d8);
    uVar4 = *(undefined4 *)(lVar8 + 0x77c);
    uStack_50 = CONCAT31(uStack_50._1_3_,1);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146a29948) &&
       (_Init_thread_header(&DAT_146a29948), DAT_146a29948 == -1)) {
      FName::FName(&DAT_146a29940,L"FPostProcessMaterialNode",1);
      _Init_thread_footer(&DAT_146a29948);
    }
    uVar6 = DAT_146a29940;
    iVar5 = *(int *)(param_2 + 0x19e0);
    lVar11 = *plVar15 + 0x18 + (longlong)iVar5;
    uVar13 = (uint)(lVar11 >> 0x3f) & 7;
    uVar13 = 8 - (((int)lVar11 + uVar13 & 7) - uVar13);
    uVar14 = (ulonglong)uVar13;
    if (uVar13 == 8) {
      uVar14 = 0;
    }
    iVar7 = iVar5 + 0x30 + (int)uVar14;
    *(int *)(param_2 + 0x19e0) = iVar7;
    if (*(int *)(param_2 + 0x19e4) < iVar7) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar15,iVar5);
    }
    local_58 = (undefined4)lVar10;
    uStack_54 = (undefined4)((ulonglong)lVar10 >> 0x20);
    puVar12 = (undefined4 *)(*plVar15 + (longlong)iVar5);
    *puVar12 = 0x3f800000;
    *(undefined8 *)(puVar12 + 2) = uVar6;
    puVar12[4] = 0x18;
    puVar12[5] = (int)uVar14;
    puVar2 = (undefined4 *)(uVar14 + 0x18 + (longlong)puVar12);
    *puVar2 = local_58;
    puVar2[1] = uStack_54;
    puVar2[2] = uStack_50;
    puVar2[3] = (uint)bVar3;
    *(ulonglong *)(uVar14 + 0x28 + (longlong)puVar12) = CONCAT44(uStack_44,uVar4);
    if (1.0 <= param_3) {
      return;
    }
    if (lVar1 == lVar8) {
      return;
    }
    puVar9 = (undefined8 *)((ulonglong)(uint)puVar12[5] + 0x18 + (longlong)puVar12);
    if (puVar9 == (undefined8 *)0x0) {
      return;
    }
  }
  FUN_14259c4f0(*puVar9,*puVar9,lVar1,param_3);
  return;
}



// FUNCTION 1425732f0 FUN_1425732f0 body=423 status=ok
// SIG undefined FUN_1425732f0(void)

void FUN_1425732f0(void)

{
  void *_Src;
  int iVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  wchar_t *_Str;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  double dVar9;
  longlong *local_38;
  ulonglong local_30;
  void *local_28;
  int local_20;
  undefined4 local_1c;
  
  lVar8 = DAT_146afcdf8;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    lVar4 = 0x10;
    if (DVar3 != DAT_1468c21c0) goto LAB_14257333e;
  }
  lVar4 = 0;
LAB_14257333e:
  local_28 = (void *)0x0;
  local_20 = *(int *)(lVar4 + 8 + lVar8);
  lVar5 = (longlong)local_20;
  _Src = *(void **)(lVar4 + lVar8);
  if (local_20 == 0) {
    local_1c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_28,local_20,0);
    _guard_xfg_dispatch_icall_nop(local_28,_Src,lVar5 * 2);
  }
  local_38 = (longlong *)0x0;
  local_30 = 0;
  FUN_141594550(&local_28,&local_38,&DAT_1450f22fc,0);
  DAT_146afd028._0_4_ = 0;
  if (DAT_146afd028._4_4_ != (int)local_30) {
    TArray<float,FDefaultAllocator>::ResizeTo(&DAT_146afd020,local_30 & 0xffffffff);
  }
  plVar7 = local_38 + (longlong)(int)local_30 * 2;
  plVar6 = local_38;
  iVar1 = (int)local_30;
  if (local_38 != plVar7) {
    do {
      if ((int)plVar6[1] == 0) {
        _Str = L"";
      }
      else {
        _Str = (wchar_t *)*plVar6;
      }
      dVar9 = _wtof(_Str);
      iVar1 = (int)DAT_146afd028;
      lVar8 = (longlong)(int)DAT_146afd028;
      DAT_146afd028._0_4_ = (int)DAT_146afd028 + 1;
      if (DAT_146afd028._4_4_ < (int)DAT_146afd028) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&DAT_146afd020,iVar1);
      }
      plVar6 = plVar6 + 2;
      *(float *)(DAT_146afd020 + lVar8 * 4) = (float)dVar9;
    } while (plVar6 != plVar7);
    iVar1 = (int)local_30;
    plVar6 = local_38;
  }
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1425734a0 PostCDOContruct body=54 status=ok
// SIG undefined PostCDOContruct(void)

void UMaterialInterface::PostCDOContruct(void)

{
  longlong *plVar1;
  
  if (DAT_1468c21ab != '\0') {
    plVar1 = (longlong *)ACineCameraActor::GetPrivateStaticClass();
    if (plVar1[0x1f] == 0) {
      (**(code **)(*plVar1 + 0x368))(plVar1);
    }
    FUN_142570f00();
    return;
  }
  return;
}



// FUNCTION 1425734e0 BeginDestroy body=31 status=ok
// SIG undefined BeginDestroy(void)

void UDynamicMeshComponent::BeginDestroy(longlong param_1)

{
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  FWindowsPlatformMisc::CreateGuid((GUID *)(param_1 + 0x788));
  return;
}



// FUNCTION 142573500 PostDuplicate body=61 status=ok
// SIG undefined PostDuplicate(void)

void UMaterialExpressionFunctionInput::PostDuplicate(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_18 [16];
  
  if (((*(int *)(param_1 + 0x94) == 0 && *(int *)(param_1 + 0x90) == 0) &&
      *(int *)(param_1 + 0x8c) == 0) && *(int *)(param_1 + 0x88) == 0) {
    puVar2 = (undefined8 *)FGuid::NewGuid(local_18);
    uVar1 = puVar2[1];
    *(undefined8 *)(param_1 + 0x88) = *puVar2;
    *(undefined8 *)(param_1 + 0x90) = uVar1;
  }
  return;
}



// FUNCTION 142573540 PostDuplicate body=61 status=ok
// SIG undefined PostDuplicate(void)

void UMaterialExpressionFunctionOutput::PostDuplicate(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_18 [16];
  
  if (((*(int *)(param_1 + 0xa0) == 0 && *(int *)(param_1 + 0x9c) == 0) &&
      *(int *)(param_1 + 0x98) == 0) && *(int *)(param_1 + 0x94) == 0) {
    puVar2 = (undefined8 *)FGuid::NewGuid(local_18);
    uVar1 = puVar2[1];
    *(undefined8 *)(param_1 + 0x94) = *puVar2;
    *(undefined8 *)(param_1 + 0x9c) = uVar1;
  }
  return;
}



// FUNCTION 142573580 FUN_142573580 body=159 status=ok
// SIG undefined FUN_142573580(void)

void FUN_142573580(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  FUN_1417931d0();
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
    lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
    if (lVar1 != 0) {
      uVar3 = (undefined4)*(undefined8 *)(lVar1 + 0x7a0);
      uVar4 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x7a0) >> 0x20);
      uVar5 = (undefined4)*(undefined8 *)(lVar1 + 0x7a8);
      uVar6 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x7a8) >> 0x20);
    }
    lVar2 = operator_new(0x140);
    lVar1 = 0;
    if (lVar2 != 0) {
      lVar1 = FUN_14255af30(lVar2,param_1,0,0,CONCAT44(uVar4,uVar3),CONCAT44(uVar6,uVar5));
    }
    param_1[0xf3] = lVar1;
  }
  FWindowsPlatformMisc::CreateGuid((GUID *)(param_1 + 0xf1));
  FUN_1425797d0(param_1);
  return;
}



// FUNCTION 142573620 FUN_142573620 body=644 status=ok
// SIG undefined FUN_142573620(void)

void FUN_142573620(longlong param_1)

{
  byte *pbVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  bool bVar13;
  
  FUN_1422384a0();
  *(undefined4 *)(*(longlong *)(param_1 + 0x458) + 0x2d8) = *(undefined4 *)(param_1 + 0x470);
  pbVar1 = (byte *)(*(longlong *)(param_1 + 0x458) + 0x2f1);
  *pbVar1 = *pbVar1 & 0x7f;
  FUN_1425793d0(param_1);
  if (((*(longlong *)(*(longlong *)(param_1 + 0x458) + 0x728) == 0) &&
      (*(longlong *)(param_1 + 0x458) != 0)) && (lVar3 = FUN_14238b970(), lVar3 != 0)) {
    lVar3 = FUN_14238b970(*(undefined8 *)(param_1 + 0x458));
    lVar3 = *(longlong *)(lVar3 + 0x118);
    if (lVar3 != 0) {
      lVar4 = AGPingUsable::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar13 = false;
      }
      else {
        bVar13 = true;
      }
      if ((bVar13) && (*(longlong *)(*(longlong *)(lVar3 + 0x458) + 0x728) != 0)) {
        uVar6 = 0;
        plVar7 = (longlong *)(lVar3 + 0x478);
        lVar4 = (longlong)*(int *)(lVar3 + 0x480);
        iVar9 = 0;
        if (*(int *)(lVar3 + 0x480) != 0) {
          bVar13 = *(longlong *)*plVar7 != param_1;
          uVar10 = uVar6;
          uVar12 = uVar6;
          do {
            iVar9 = (int)uVar10;
            uVar6 = uVar6 + 1;
            uVar10 = (ulonglong)(iVar9 + 1);
            if ((longlong)uVar6 < lVar4) {
              plVar5 = (longlong *)(*plVar7 + uVar6 * 8);
              do {
                if (bVar13 != (*plVar5 != param_1)) break;
                uVar10 = (ulonglong)((int)uVar10 + 1);
                uVar6 = uVar6 + 1;
                plVar5 = plVar5 + 1;
              } while ((longlong)uVar6 < lVar4);
            }
            iVar8 = (int)uVar10 - iVar9;
            if (bVar13 != false) {
              iVar11 = (int)uVar12;
              if (iVar11 != iVar9) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)(*plVar7 + (longlong)iVar11 * 8),
                           (void *)(*plVar7 + (longlong)iVar9 * 8),(longlong)iVar8 << 3);
              }
              uVar12 = (ulonglong)(uint)(iVar11 + iVar8);
            }
            bVar13 = (bool)(bVar13 ^ 1);
            iVar9 = (int)uVar12;
          } while ((longlong)uVar6 < lVar4);
          *(int *)(lVar3 + 0x480) = iVar9;
        }
        puVar2 = (ulonglong *)(param_1 + 0x478);
        iVar8 = *(int *)(param_1 + 0x480);
        if (iVar8 != 0) {
          if (*(int *)(lVar3 + 0x484) < iVar9 + iVar8) {
            TArray<void_*,FDefaultAllocator>::ResizeTo(plVar7,iVar9 + iVar8,0);
            iVar9 = *(int *)(lVar3 + 0x480);
          }
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar7 + (longlong)iVar9 * 8),(void *)*puVar2,(longlong)iVar8 << 3);
          *(int *)(lVar3 + 0x480) = *(int *)(lVar3 + 0x480) + iVar8;
        }
        uVar10 = 0;
        plVar7 = (longlong *)*puVar2;
        uVar6 = (longlong)*(int *)(param_1 + 0x480) & 0x1fffffffffffffff;
        if (plVar7 + *(int *)(param_1 + 0x480) < plVar7) {
          uVar6 = uVar10;
        }
        if (uVar6 != 0) {
          do {
            if (*plVar7 != 0) {
              FUN_14223e400(*plVar7,*(undefined8 *)(lVar3 + 0x458),*(undefined4 *)(lVar3 + 0x470));
            }
            plVar7 = plVar7 + 1;
            uVar10 = uVar10 + 1;
          } while (uVar10 != uVar6);
        }
        *(undefined4 *)(param_1 + 0x480) = 0;
        if (*(int *)(param_1 + 0x484) != 0) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(puVar2,0);
        }
        *(byte *)(param_1 + 0x4a1) = *(byte *)(param_1 + 0x4a1) | 2;
      }
    }
  }
  FUN_1425732f0();
  FUN_142579320(param_1);
  return;
}



// FUNCTION 1425738b0 FUN_1425738b0 body=892 status=ok
// SIG undefined FUN_1425738b0(void)

void FUN_1425738b0(longlong *param_1)

{
  ulonglong *puVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int *piVar12;
  undefined1 local_res8 [8];
  longlong *local_res10;
  undefined8 local_38;
  longlong **local_30;
  
  UMaterialInterface::PostLoad();
  piVar12 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar12 < DAT_1468509e4) && (_Init_thread_header(&DAT_1468509e4), DAT_1468509e4 == -1)) {
    uVar5 = FCommandLine::Get();
    DAT_1468509e0 = FParse::Param(uVar5,L"nullrhi");
    _Init_thread_footer(&DAT_1468509e4);
  }
  if (((DAT_1468b616c == '\0') || (DAT_1468b616d != '\0')) && (DAT_1468509e0 == '\0')) {
    FUN_142574140(param_1,param_1 + 0xf8,param_1 + 0xfa);
  }
  else {
    lVar4 = param_1[0xf8];
    lVar9 = (longlong)(int)param_1[0xf9] * 0x38 + lVar4;
    for (; lVar4 != lVar9; lVar4 = lVar4 + 0x38) {
      FMaterial::DiscardShaderMap(lVar4);
    }
  }
  TArray<FMaterialResource,FDefaultAllocator>::Empty(param_1 + 0xf8,0);
  plVar6 = &DAT_146afd0b8;
  do {
    if (0x146afd0e7 < (longlong)plVar6) break;
    plVar2 = (longlong *)*plVar6;
    plVar6 = plVar6 + 1;
  } while (param_1 != plVar2);
  iVar3 = UObjectBaseUtility::GetLinkerUE4Version(param_1);
  if ((iVar3 < 0x1d7) && ((*(uint *)(param_1 + 0xe1) & 0x800000) != 0)) {
    *(undefined1 *)(param_1 + 0x28) = 5;
  }
  uVar11 = 0;
  uVar8 = uVar11;
  uVar10 = uVar11;
  if (0 < (int)param_1[0xe9]) {
    do {
      if (*(longlong *)(uVar10 + param_1[0xe8]) != 0) {
        FUN_1417510e0();
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
      uVar10 = uVar10 + 8;
    } while ((int)uVar7 < (int)param_1[0xe9]);
  }
  uVar8 = uVar11;
  uVar10 = uVar11;
  if (0 < (int)param_1[0xed]) {
    do {
      if (*(longlong *)(param_1[0xec] + 0x10 + uVar10) != 0) {
        FUN_1417510e0();
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
      uVar10 = uVar10 + 0x18;
    } while ((int)uVar7 < (int)param_1[0xed]);
  }
  lVar4 = FUN_1417a53c0(param_1);
  if ((lVar4 != 0) && (lVar4 = FUN_1417a53c0(param_1), *(int *)(lVar4 + 0x240) < 0x132)) {
    uVar5 = FUN_14256c9d0(param_1);
    TSet<TTuple<FGuid,AActor_*>,TDefaultMapHashableKeyFuncs<FGuid,AActor_*,0>,FDefaultSetAllocator>
    ::FindId(&DAT_146533750,local_res8,uVar5);
    local_res10 = param_1;
    local_38 = FUN_14256c9d0(param_1);
    local_30 = &local_res10;
    FUN_142554f40(&DAT_146533750,local_res8,&local_38,0);
  }
  if (*(char *)((longlong)param_1 + 0x144) == '\n') {
    *(undefined1 *)((longlong)param_1 + 0x144) = 1;
  }
  if (*(char *)((longlong)param_1 + 0x142) == '\x0f') {
    *(undefined1 *)((longlong)param_1 + 0x142) = 0;
  }
  if (((*(int *)((longlong)param_1 + 0x794) == 0 && (int)param_1[0xf2] == 0) &&
      *(int *)((longlong)param_1 + 0x78c) == 0) && ((GUID *)(param_1 + 0xf1))->Data1 == 0) {
    FWindowsPlatformMisc::CreateGuid((GUID *)(param_1 + 0xf1));
  }
  plVar6 = param_1 + 0xf3;
  uVar8 = uVar11;
  do {
    if (*plVar6 != 0) {
      FUN_1425a43b0(param_1);
    }
    uVar7 = (int)uVar8 + 1;
    uVar8 = (ulonglong)uVar7;
    plVar6 = plVar6 + 1;
  } while (uVar7 < 3);
  if ((*piVar12 < DAT_1468509e4) && (_Init_thread_header(&DAT_1468509e4), DAT_1468509e4 == -1)) {
    uVar5 = FCommandLine::Get();
    DAT_1468509e0 = FParse::Param(uVar5,L"nullrhi");
    _Init_thread_footer(&DAT_1468509e4);
  }
  if ((((DAT_1468b616c == '\0') || (DAT_1468b616d != '\0')) && (DAT_1468509e0 == '\0')) &&
     ((*(uint *)(param_1 + 0xee) & 0x100) == 0)) {
    puVar1 = (ulonglong *)(param_1 + 0x105);
    *(undefined4 *)(param_1 + 0x106) = 0;
    if (*(int *)((longlong)param_1 + 0x834) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(puVar1,0);
    }
    (**(code **)(*param_1 + 0x3a0))(param_1,puVar1);
    plVar6 = (longlong *)*puVar1;
    uVar8 = (longlong)(int)param_1[0x106] & 0x1fffffffffffffff;
    if (plVar6 + (int)param_1[0x106] < plVar6) {
      uVar8 = uVar11;
    }
    if (uVar8 != 0) {
      do {
        if (*plVar6 != 0) {
          FUN_1417510e0();
        }
        plVar6 = plVar6 + 1;
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar8);
    }
    FUN_142568af0(param_1,0);
  }
  return;
}



// FUNCTION 142573c30 PostLoad body=160 status=ok
// SIG undefined PostLoad(void)

void UMaterialExpression::PostLoad(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  UObject::PostLoad();
  if (*(longlong *)(param_1 + 0x28) == 0) {
    lVar3 = ACineCameraActor::GetPrivateStaticClass();
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10);
    if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x20);
    }
  }
  if (*(longlong *)(param_1 + 0x30) == 0) {
    lVar3 = UMaterialFunction::GetPrivateStaticClass();
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10);
    if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x20);
    }
  }
  return;
}



// FUNCTION 142573cd0 PostLoad body=61 status=ok
// SIG undefined PostLoad(void)

void UMaterialExpressionCollectionParameter::PostLoad(longlong param_1)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1417510e0();
    puVar1 = (undefined8 *)
             UMaterialParameterCollection::GetParameterName
                       (*(undefined8 *)(param_1 + 0x40),local_res8,param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x48) = *puVar1;
  }
  UMaterialExpression::PostLoad(param_1);
  return;
}



// FUNCTION 142573d10 PostLoad body=46 status=ok
// SIG undefined PostLoad(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UMaterialExpressionDynamicParameter::PostLoad(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  UMaterialExpression::PostLoad();
  iVar2 = UObjectBaseUtility::GetLinkerUE4Version(param_1);
  uVar1 = _DAT_1464aa6e8;
  if (iVar2 < 0x1da) {
    *(undefined8 *)(param_1 + 0x50) = _DAT_1464aa6e0;
    *(undefined8 *)(param_1 + 0x58) = uVar1;
  }
  return;
}



// FUNCTION 142573d40 PostLoad body=66 status=ok
// SIG undefined PostLoad(void)

void UMaterialExpressionFunctionInput::PostLoad(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_18 [16];
  
  UMaterialExpression::PostLoad();
  if (((*(int *)(param_1 + 0x94) == 0 && *(int *)(param_1 + 0x90) == 0) &&
      *(int *)(param_1 + 0x8c) == 0) && *(int *)(param_1 + 0x88) == 0) {
    puVar2 = (undefined8 *)FGuid::NewGuid(local_18);
    uVar1 = puVar2[1];
    *(undefined8 *)(param_1 + 0x88) = *puVar2;
    *(undefined8 *)(param_1 + 0x90) = uVar1;
  }
  return;
}



// FUNCTION 142573d90 PostLoad body=66 status=ok
// SIG undefined PostLoad(void)

void UMaterialExpressionFunctionOutput::PostLoad(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_18 [16];
  
  UMaterialExpression::PostLoad();
  if (((*(int *)(param_1 + 0xa0) == 0 && *(int *)(param_1 + 0x9c) == 0) &&
      *(int *)(param_1 + 0x98) == 0) && *(int *)(param_1 + 0x94) == 0) {
    puVar2 = (undefined8 *)FGuid::NewGuid(local_18);
    uVar1 = puVar2[1];
    *(undefined8 *)(param_1 + 0x94) = *puVar2;
    *(undefined8 *)(param_1 + 0x9c) = uVar1;
  }
  return;
}



// FUNCTION 142573de0 FUN_142573de0 body=208 status=ok
// SIG undefined FUN_142573de0(void)

void FUN_142573de0(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  UMaterialExpression::PostLoad();
  uVar4 = 0;
  plVar1 = *(longlong **)(param_1 + 0x90);
  uVar3 = (longlong)*(int *)(param_1 + 0x98) & 0x1fffffffffffffff;
  if (plVar1 + *(int *)(param_1 + 0x98) < plVar1) {
    uVar3 = uVar4;
  }
  uVar2 = uVar4;
  if (uVar3 != 0) {
    do {
      if (*plVar1 != 0) {
        FUN_1417510e0();
      }
      plVar1 = plVar1 + 1;
      uVar2 = uVar2 + 1;
    } while (uVar2 != uVar3);
  }
  plVar1 = *(longlong **)(param_1 + 0xa0);
  uVar3 = (longlong)*(int *)(param_1 + 0xa8) & 0x1fffffffffffffff;
  if (plVar1 + *(int *)(param_1 + 0xa8) < plVar1) {
    uVar3 = uVar4;
  }
  if (uVar3 != 0) {
    do {
      if (*plVar1 != 0) {
        FUN_1417510e0();
      }
      plVar1 = plVar1 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar3);
  }
  FUN_142574a70(param_1,0);
  return;
}



// FUNCTION 142573eb0 PostLoad body=36 status=ok
// SIG undefined PostLoad(void)

void UMaterialExpressionMaterialFunctionCall::PostLoad(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1417510e0();
  }
  UMaterialExpression::PostLoad(param_1);
  return;
}



// FUNCTION 142573ee0 PostLoad body=69 status=ok
// SIG undefined PostLoad(void)

void UMaterialExpressionSceneColor::PostLoad(longlong param_1)

{
  int iVar1;
  
  UMaterialExpression::PostLoad();
  iVar1 = UObjectBaseUtility::GetLinkerUE4Version(param_1);
  if (iVar1 < 0xe7) {
    *(undefined1 *)(param_1 + 0x40) = 1;
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x90);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x98);
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0xa0);
  }
  return;
}



// FUNCTION 142573f30 FUN_142573f30 body=72 status=ok
// SIG undefined FUN_142573f30(void)

void FUN_142573f30(longlong param_1)

{
  int iVar1;
  
  UMaterialExpression::PostLoad();
  iVar1 = UObjectBaseUtility::GetLinkerUE4Version(param_1);
  if (iVar1 < 0xe7) {
    *(undefined1 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x90);
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x98);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0xa0);
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0xa8);
  }
  return;
}



// FUNCTION 142573f80 FUN_142573f80 body=69 status=ok
// SIG undefined FUN_142573f80(void)

void FUN_142573f80(longlong param_1)

{
  undefined1 uVar1;
  
  UMaterialExpression::PostLoad();
  if (*(char *)(param_1 + 0x72) != '\0') {
    *(undefined1 *)(param_1 + 0x72) = 0;
    if (*(longlong *)(param_1 + 0x28) != 0) {
      uVar1 = 0xe;
      if (*(char *)(*(longlong *)(param_1 + 0x28) + 0x140) != '\x04') {
        uVar1 = 0;
      }
      *(undefined1 *)(param_1 + 0x70) = uVar1;
      return;
    }
    *(undefined1 *)(param_1 + 0x70) = 0;
  }
  return;
}



// FUNCTION 142573fd0 PostLoad body=109 status=ok
// SIG undefined PostLoad(void)

void UMaterialFunction::PostLoad(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  undefined1 local_18 [16];
  
  UObject::PostLoad();
  if (((*(int *)(param_1 + 0x34) == 0 && *(int *)(param_1 + 0x30) == 0) &&
      *(int *)(param_1 + 0x2c) == 0) && *(int *)(param_1 + 0x28) == 0) {
    puVar4 = (undefined4 *)FGuid::NewGuid(local_18);
    uVar1 = puVar4[1];
    uVar2 = puVar4[2];
    uVar3 = puVar4[3];
    *(undefined4 *)(param_1 + 0x28) = *puVar4;
    *(undefined4 *)(param_1 + 0x2c) = uVar1;
    *(undefined4 *)(param_1 + 0x30) = uVar2;
    *(undefined4 *)(param_1 + 0x34) = uVar3;
  }
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x60)) {
    lVar6 = 0;
    do {
      if (*(longlong *)(lVar6 + *(longlong *)(param_1 + 0x58)) != 0) {
        FUN_1417510e0();
      }
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 8;
    } while (iVar5 < *(int *)(param_1 + 0x60));
  }
  return;
}



// FUNCTION 142574040 PostLoad body=39 status=ok
// SIG undefined PostLoad(void)

void UMaterialFunctionInstance::PostLoad(longlong param_1)

{
  UObject::PostLoad();
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1417510e0();
    return;
  }
  return;
}



// FUNCTION 142574070 PostLoadDefaultMaterials body=121 status=ok
// SIG undefined PostLoadDefaultMaterials(void)

void UMaterialInterface::PostLoadDefaultMaterials(void)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (DAT_146afd1bc == '\0') {
    plVar2 = &DAT_146afd0b8;
    DAT_146afd1bc = '\x01';
    do {
      lVar1 = *plVar2;
      if (((lVar1 == 0) || ((*(uint *)(lVar1 + 8) >> 10 & 1) != 0)) ||
         (FUN_1417510e0(lVar1), (*(uint *)(lVar1 + 8) >> 0xc & 1) != 0)) {
        DAT_146afd1bc = '\0';
      }
      plVar2 = plVar2 + 1;
    } while ((longlong)plVar2 < 0x146afd0e8);
  }
  return;
}



// FUNCTION 1425740f0 FUN_1425740f0 body=53 status=ok
// SIG undefined FUN_1425740f0(void)

void FUN_1425740f0(longlong param_1)

{
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  *(byte *)(param_1 + 0x4a1) = *(byte *)(param_1 + 0x4a1) | 1;
  if ((*(byte *)(param_1 + 0x4a1) & 2) != 0) {
    FUN_142359580(*(undefined8 *)(param_1 + 0x458));
    return;
  }
  return;
}



// FUNCTION 142574140 FUN_142574140 body=1348 status=ok
// SIG undefined FUN_142574140(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142574140(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  DWORD DVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  int *piVar8;
  longlong lVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  undefined1 auStack_e8 [32];
  int local_c8 [2];
  undefined8 local_c0;
  longlong *local_b8;
  int local_b0 [2];
  longlong local_a8;
  int local_a0 [2];
  int **local_98;
  longlong *local_90;
  longlong local_88;
  longlong *local_80;
  longlong *local_78;
  undefined1 local_70 [8];
  undefined8 local_68;
  int *local_60 [4];
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_b8 = param_1;
  local_80 = param_2;
  if (param_1 == (longlong *)0x0) {
LAB_1425741bc:
    plVar6 = (longlong *)0x0;
  }
  else {
    lVar5 = ACineCameraActor::GetPrivateStaticClass();
    if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    plVar6 = param_1;
    if (!bVar2) goto LAB_1425741bc;
  }
  local_90 = plVar6;
  if (param_1 == (longlong *)0x0) {
LAB_14257420a:
    param_1 = (longlong *)0x0;
    local_b8 = (longlong *)0x0;
    if (plVar6 == (longlong *)0x0) goto LAB_142574251;
  }
  else {
    lVar5 = FUN_1429b6de0();
    if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_14257420a;
    plVar6 = (longlong *)FUN_14258e9b0(param_1);
  }
  if (plVar6 != (longlong *)0x0) {
    lVar5 = *param_2;
    lVar7 = lVar5 + (longlong)(int)param_2[1] * 0x38;
    for (; lVar5 != lVar7; lVar5 = lVar5 + 0x38) {
      if (*(longlong *)(lVar5 + 8) != 0) {
        *(byte *)(*(longlong *)(lVar5 + 8) + 8) = (byte)(*(uint *)(plVar6 + 0xd9) >> 7) & 1;
      }
    }
  }
LAB_142574251:
  lVar5 = DAT_146afd088;
  cVar3 = FUN_1415ad720();
  if (((cVar3 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar4 = GetCurrentThreadId(), DVar4 != DAT_1468c21c0)) {
    lVar7 = 1;
  }
  else {
    lVar7 = 0;
  }
  if (*(int *)(lVar5 + lVar7 * 4) == 0) {
    lVar5 = *param_2;
    lVar7 = (longlong)(int)param_2[1] * 0x38 + lVar5;
    for (; lVar5 != lVar7; lVar5 = lVar5 + 0x38) {
      FUN_14259eb50();
    }
    lVar5 = 0;
    local_a8 = 2;
    do {
      local_c8[0] = 0;
      if (0 < (int)param_2[1]) {
        local_88 = 0;
        do {
          lVar7 = *(longlong *)(local_88 + 8 + *param_2);
          if ((lVar7 != 0) && (*(int *)(lVar7 + 0x30) == DAT_146ab62cc)) {
            iVar14 = *(int *)(lVar7 + 0x114);
            iVar12 = 0;
            iVar11 = *(int *)(lVar7 + 0x110);
            local_b0[0] = iVar14;
            do {
              if (lVar5 == 0) {
                if (iVar11 == 3) {
LAB_142574513:
                  local_c0._0_4_ = iVar12;
                  local_c0._4_4_ = iVar14;
                  piVar8 = (int *)TSet<TTuple<FObjectKey,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                                  ::FindId(param_3,local_70,&local_c0);
                  if (*piVar8 == -1) {
                    if (param_1 == (longlong *)0x0) {
                      lVar9 = *local_90;
                      param_1 = local_90;
                    }
                    else {
                      lVar9 = *param_1;
                    }
                    local_68 = (**(code **)(lVar9 + 0x500))(param_1);
                    local_60[0] = (int *)&local_c0;
                    local_60[1] = (int *)&local_68;
                    FUN_142554c80(param_3,&local_98,local_60,0);
                  }
                  TSet<TTuple<FObjectKey,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                  ::FindId(param_3,local_a0,&local_c0);
                  if (local_a0[0] == -1) {
                    lVar9 = 0;
                  }
                  else {
                    lVar9 = *param_3 + (longlong)local_a0[0] * 0x18;
                  }
                  lVar9 = *(longlong *)(lVar9 + 8);
                  lVar1 = *(longlong *)(lVar9 + 8);
                  *(longlong *)(lVar9 + 8) = lVar7;
                  FMaterialShaderMap::AddRef(lVar7);
                  if (lVar1 != 0) {
                    FUN_14259f650(lVar1);
                  }
                  *(uint *)(lVar9 + 0x24) = *(uint *)(lVar9 + 0x24) | 3;
                  iVar14 = local_b0[0];
                }
              }
              else if ((lVar5 == 1) && (iVar12 == iVar11)) goto LAB_142574513;
              iVar12 = iVar12 + 1;
              param_1 = local_b8;
            } while (iVar12 < 3);
          }
          local_c8[0] = local_c8[0] + 1;
          local_88 = local_88 + 0x38;
          param_1 = local_b8;
          param_2 = local_80;
        } while (local_c8[0] < (int)local_80[1]);
      }
      lVar5 = lVar5 + 1;
      local_a8 = local_a8 + -1;
      param_1 = local_b8;
    } while (local_a8 != 0);
  }
  else {
    lVar5 = FUN_1428742e0();
    piVar8 = (int *)*param_2;
    iVar14 = *(int *)(lVar5 + 0xc);
    local_60[0] = (int *)0x0;
    local_60[1] = (int *)0x0;
    local_60[2] = (int *)0x0;
    local_60[3] = (int *)0x0;
    piVar13 = piVar8 + (longlong)(int)param_2[1] * 0xe;
    piVar10 = piVar8;
    if (piVar8 != piVar13) {
      do {
        lVar5 = *(longlong *)(piVar10 + 2);
        if ((lVar5 != 0) && (*(int *)(lVar5 + 0x30) == DAT_146ab62cc)) {
          if ((*(int *)(lVar5 + 0x110) == iVar14) ||
             ((local_60[*(int *)(lVar5 + 0x114)] == (int *)0x0 && (*(int *)(lVar5 + 0x110) == 3))))
          {
            local_60[*(int *)(lVar5 + 0x114)] = piVar10;
          }
        }
        piVar10 = piVar10 + 0xe;
      } while (piVar10 != piVar13);
      for (; piVar8 != piVar13; piVar8 = piVar8 + 0xe) {
        lVar5 = *(longlong *)(piVar8 + 2);
        if ((lVar5 != 0) && (*(int *)(lVar5 + 0x30) == DAT_146ab62cc)) {
          if (local_60[*(int *)(lVar5 + 0x114)] == piVar8) {
            FUN_14259eb50();
          }
          else {
            FMaterial::DiscardShaderMap(piVar8);
          }
        }
      }
    }
    local_98 = local_60;
    iVar14 = 0;
    do {
      plVar6 = local_90;
      if (*local_98 != (int *)0x0) {
        lVar5 = *(longlong *)(*local_98 + 2);
        local_80 = &local_c0;
        iVar11 = 0;
        local_78 = &local_a8;
        do {
          if (param_1 == (longlong *)0x0) {
            lVar7 = *plVar6;
            param_1 = plVar6;
          }
          else {
            lVar7 = *param_1;
          }
          local_c0._0_4_ = iVar11;
          local_c0._4_4_ = iVar14;
          local_a8 = (**(code **)(lVar7 + 0x500))(param_1);
          FUN_142554c80(param_3,local_b0,&local_80,0);
          TSet<TTuple<FObjectKey,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
          ::FindId(param_3,local_c8,&local_c0);
          if (local_c8[0] == -1) {
            lVar7 = 0;
          }
          else {
            lVar7 = *param_3 + (longlong)local_c8[0] * 0x18;
          }
          lVar7 = *(longlong *)(lVar7 + 8);
          lVar9 = *(longlong *)(lVar7 + 8);
          *(longlong *)(lVar7 + 8) = lVar5;
          if (lVar5 != 0) {
            FMaterialShaderMap::AddRef(lVar5);
          }
          if (lVar9 != 0) {
            FUN_14259f650(lVar9);
          }
          *(uint *)(lVar7 + 0x24) = *(uint *)(lVar7 + 0x24) | 3;
          iVar11 = iVar11 + 1;
          param_1 = local_b8;
        } while (iVar11 < 3);
      }
      local_98 = local_98 + 1;
      iVar14 = iVar14 + 1;
      param_1 = local_b8;
    } while (iVar14 < 4);
  }
  cVar3 = TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
          ::Compact(param_3);
  if (cVar3 != '\0') {
    FUN_142574e40(param_3);
  }
  TSparseArray<TSetElement<TTuple<ABasePlayerController_*,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Shrink(param_3);
  FUN_142569190(param_3,(int)param_3[1] - *(int *)((longlong)param_3 + 0x34),1);
  return;
}



// FUNCTION 142574690 FUN_142574690 body=990 status=ok
// SIG undefined FUN_142574690(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142574690(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  char cVar7;
  longlong lVar8;
  int *piVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 *puVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong lVar18;
  undefined8 *puVar19;
  int iVar20;
  longlong lVar21;
  int iVar22;
  longlong *plVar23;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  uint local_160 [2];
  longlong local_158;
  longlong local_150;
  int local_148;
  int local_140;
  char local_13c;
  int local_138;
  longlong local_130;
  longlong local_128;
  int local_120;
  undefined8 local_110;
  char local_108;
  undefined1 local_100 [192];
  undefined1 *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  local_168 = param_1;
  local_178 = FUN_1428dfc70();
  local_160[0] = 5;
  local_108 = '\0';
  local_170 = param_1;
  FUN_14044bc80(&local_158,&local_170,&local_178);
  FUN_14045a130(local_160);
  iVar22 = local_140;
  lVar18 = local_130;
joined_r0x000142574704:
  do {
    local_130 = lVar18;
    local_140 = iVar22;
    if (local_13c != '\0') {
      if (local_108 != '\0') {
        local_108 = '\0';
        UWorld::RemoveOnActorSpawnedHandler(local_158,local_110);
        if (local_128 != 0) {
          FMemory::Free();
        }
        if (local_150 != 0) {
          FMemory::Free();
        }
      }
      plVar11 = (longlong *)UDynamicEntryBox::GetAllEntries(param_1);
      plVar23 = (longlong *)*plVar11;
      plVar11 = plVar23 + (int)plVar11[1];
      if (plVar23 != plVar11) {
        do {
          lVar18 = *plVar23;
          FUN_142534f40(lVar18);
          FUN_14252bcf0(lVar18);
          puVar19 = *(undefined8 **)(lVar18 + 0xd0);
          uVar15 = (longlong)*(int *)(lVar18 + 0xd8) & 0x1fffffffffffffff;
          if (puVar19 + *(int *)(lVar18 + 0xd8) < puVar19) {
            uVar15 = 0;
          }
          uVar16 = 0;
          if (uVar15 != 0) {
            do {
              (**(code **)(*(longlong *)*puVar19 + 0x530))();
              uVar16 = uVar16 + 1;
              puVar19 = puVar19 + 1;
            } while (uVar16 != uVar15);
          }
          plVar23 = plVar23 + 1;
        } while (plVar23 != plVar11);
      }
      plVar11 = (longlong *)IStreamingManager::Get();
      (**(code **)(*plVar11 + 0x90))(plVar11);
      return;
    }
    uVar15 = 0;
    local_40 = (undefined1 *)0x0;
    local_38 = 0;
    FUN_140749cd0(local_130,local_100,0);
    uVar16 = uVar15;
    if (0 < (int)local_38) {
      do {
        puVar12 = local_100;
        if (local_40 != (undefined1 *)0x0) {
          puVar12 = local_40;
        }
        (**(code **)(**(longlong **)(puVar12 + uVar15) + 0x530))();
        uVar17 = (int)uVar16 + 1;
        uVar15 = uVar15 + 8;
        uVar16 = (ulonglong)uVar17;
      } while ((int)uVar17 < (int)local_38);
    }
    if (local_40 != (undefined1 *)0x0) {
      FMemory::Free();
    }
    lVar6 = local_158;
    iVar22 = local_140 + 1;
    if (iVar22 < local_120 + local_148) {
      lVar21 = (longlong)iVar22 * 8;
      iVar20 = local_120;
      iVar13 = local_148;
      do {
        lVar10 = 0;
        if (iVar22 < iVar13) {
          lVar18 = *(longlong *)(local_150 + lVar21);
        }
        else {
          lVar18 = *(longlong *)(local_128 + (longlong)(iVar22 - iVar13) * 8);
        }
        local_138 = local_138 + 1;
        if ((lVar18 != 0) &&
           (lVar8 = AActor::GetLevel(lVar18), iVar20 = local_120, iVar13 = local_148, lVar8 != 0)) {
          if ((local_160[0] & 1) != 0) {
            iVar1 = *(int *)(lVar18 + 0xc);
            if (iVar1 < (int)DAT_1469e91c4) {
              uVar14 = iVar1 >> 0x1f & 0xffff;
              uVar17 = iVar1 + uVar14;
              lVar10 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar17 >> 0x10) * 8) +
                       (longlong)(int)((uVar17 & 0xffff) - uVar14) * 0x18;
            }
            if ((*(uint *)(lVar10 + 8) >> 0x1d & 1) != 0) goto LAB_142574938;
          }
          if (((local_160[0] >> 1 & 1) == 0) ||
             (cVar7 = FOutputDevice::CanBeUsedOnAnyThread(lVar18), iVar20 = local_120,
             iVar13 = local_148, cVar7 != '\0')) {
            if ((local_160[0] >> 2 & 1) != 0) {
              if (((*(byte *)(lVar8 + 0x204) & 0x10) == 0) &&
                 ((*(byte *)(lVar8 + 0x205) & 0x10) == 0)) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              piVar2 = *(int **)(lVar8 + 600);
              if (((*(longlong *)(lVar8 + 0xc0) == 0) ||
                  (piVar9 = (int *)UWorld::GetActiveLevelCollection(), piVar9 == (int *)0x0)) ||
                 (piVar2 == piVar9)) {
                bVar3 = true;
              }
              else {
                bVar3 = false;
              }
              if ((piVar2 == (int *)0x0) || (*piVar2 == 2)) {
                bVar4 = true;
              }
              else {
                bVar4 = false;
              }
              if ((bVar3) || (bVar3 = false, bVar4)) {
                bVar3 = true;
              }
              iVar20 = local_120;
              iVar13 = local_148;
              if ((!bVar5) || (!bVar3)) goto LAB_142574938;
            }
            lVar10 = ULevel::GetWorld(lVar8);
            iVar20 = local_120;
            iVar13 = local_148;
            if (lVar10 == lVar6) {
              lVar10 = AActor::GetLevel(lVar18);
              param_1 = local_168;
              if (lVar10 == *(longlong *)(lVar6 + 0x30)) goto joined_r0x000142574704;
              lVar10 = UVoipListenerSynthComponent::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar18 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar18 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              iVar20 = local_120;
              iVar13 = local_148;
              param_1 = local_168;
              if (!bVar5) goto joined_r0x000142574704;
            }
          }
        }
LAB_142574938:
        iVar22 = iVar22 + 1;
        lVar21 = lVar21 + 8;
      } while (iVar22 < iVar20 + iVar13);
    }
    local_130 = 0;
    local_13c = '\x01';
    param_1 = local_168;
    iVar22 = local_140;
    lVar18 = local_130;
  } while( true );
}



// FUNCTION 142574a70 FUN_142574a70 body=897 status=ok
// SIG undefined FUN_142574a70(void)

void FUN_142574a70(longlong param_1,undefined1 param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  
  plVar2 = *(longlong **)(param_1 + 0x100);
  plVar14 = plVar2 + 4;
  plVar4 = plVar2 + 2;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)(param_1 + 0x90);
    plVar14 = (longlong *)(param_1 + 0xb0);
    plVar4 = (longlong *)(param_1 + 0xa0);
  }
  if (*(int *)(param_1 + 0xd8) < (int)plVar2[1]) {
    do {
      uVar6 = GetTransientPackage();
      FUN_1417846f0(uVar6,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
      uVar7 = UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass();
      uVar6 = FUN_1417985e0(uVar7,uVar6,0,0,0,0,0,0,0);
      iVar1 = *(int *)(param_1 + 0xd8);
      *(int *)(param_1 + 0xd8) = iVar1 + 1;
      if (*(int *)(param_1 + 0xdc) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0xd0,iVar1);
      }
      *(undefined8 *)(*(longlong *)(param_1 + 0xd0) + (longlong)iVar1 * 8) = uVar6;
    } while (*(int *)(param_1 + 0xd8) < (int)plVar2[1]);
  }
  if (*(int *)(param_1 + 0xf0) < (int)plVar4[1]) {
    do {
      uVar6 = GetTransientPackage();
      FUN_1417846f0(uVar6,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
      uVar7 = UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass();
      uVar6 = FUN_1417985e0(uVar7,uVar6,0,0,0,0,0,0,0);
      iVar1 = *(int *)(param_1 + 0xf0);
      *(int *)(param_1 + 0xf0) = iVar1 + 1;
      if (*(int *)(param_1 + 0xf4) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0xe8,iVar1);
      }
      *(undefined8 *)(*(longlong *)(param_1 + 0xe8) + (longlong)iVar1 * 8) = uVar6;
    } while (*(int *)(param_1 + 0xf0) < (int)plVar4[1]);
  }
  uVar9 = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(undefined1 *)(param_1 + 0xfc) = 0;
  cVar5 = FUN_1425798f0(param_1,0,param_2);
  if (cVar5 != '\0') {
    uVar10 = uVar9;
    uVar13 = uVar9;
    if (0 < (int)plVar2[1]) {
      do {
        lVar11 = *(longlong *)(*plVar2 + uVar10 * 8);
        if ((lVar11 != 0) && (*(char *)(uVar10 + *plVar14) != '\0')) {
          lVar8 = (longlong)*(int *)(param_1 + 0xe0);
          *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xd0) + lVar8 * 8) + 0x40) = lVar11;
          *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0xd0) + lVar8 * 8) + 0x53) = 0;
          *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xd0) + lVar8 * 8) + 0x54) = (int)uVar13;
          *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + 1;
        }
        uVar12 = (int)uVar13 + 1;
        uVar10 = uVar10 + 1;
        uVar13 = (ulonglong)uVar12;
      } while ((int)uVar12 < (int)plVar2[1]);
    }
    if (0 < (int)plVar4[1]) {
      lVar11 = 1;
      uVar10 = uVar9;
      do {
        if ((*(longlong *)(uVar10 + 8 + *plVar2) != 0) && (*(char *)(lVar11 + *plVar14) != '\0')) {
          iVar1 = *(int *)(param_1 + 0xf8);
          *(int *)(param_1 + 0xf8) = iVar1 + 1;
          lVar8 = (longlong)iVar1 * 8;
          lVar3 = *(longlong *)(lVar8 + *(longlong *)(param_1 + 0xe8));
          if (*(longlong *)(uVar10 + *plVar4) == 0) {
            *(undefined8 *)(lVar3 + 0x40) = 0;
          }
          else {
            *(longlong *)(lVar3 + 0x40) = *(longlong *)(uVar10 + *plVar4);
            *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0xe8) + lVar8) + 0x53) = 1;
            *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xe8) + lVar8) + 0x54) = (int)uVar9;
          }
        }
        uVar12 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar12;
        lVar11 = lVar11 + 1;
        uVar10 = uVar10 + 8;
      } while ((int)uVar12 < (int)plVar4[1]);
    }
    uVar9 = (ulonglong)*(int *)(param_1 + 0xe0);
    if (*(int *)(param_1 + 0xe0) < *(int *)(param_1 + 0xd8)) {
      lVar11 = uVar9 * 8;
      do {
        lVar11 = lVar11 + 8;
        uVar12 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar12;
        *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xd0) + -8 + lVar11) + 0x40) = 0;
      } while ((int)uVar12 < *(int *)(param_1 + 0xd8));
    }
    uVar9 = (ulonglong)*(int *)(param_1 + 0xf8);
    if (*(int *)(param_1 + 0xf8) < *(int *)(param_1 + 0xf0)) {
      lVar11 = uVar9 * 8;
      do {
        lVar11 = lVar11 + 8;
        uVar12 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar12;
        *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xe8) + -8 + lVar11) + 0x40) = 0;
      } while ((int)uVar12 < *(int *)(param_1 + 0xf0));
    }
    *(undefined1 *)(param_1 + 0xfc) = 1;
  }
  return;
}



// FUNCTION 142574e00 FUN_142574e00 body=57 status=ok
// SIG undefined FUN_142574e00(void)

void FUN_142574e00(longlong param_1)

{
  if (DAT_1468c21ab == '\0') {
    FUN_142570f00();
  }
  if (*(longlong *)(param_1 + 0x798) != 0) {
    FUN_142588630();
  }
  FUN_142575b50(param_1 + 0x838);
  return;
}



// FUNCTION 142574e40 FUN_142574e40 body=648 status=ok
// SIG undefined FUN_142574e40(void)

void FUN_142574e40(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong *plVar12;
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
  uVar10 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar10 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation();
    if (0 < (int)uVar10) {
      uVar7 = 0;
      uVar15 = (ulonglong)uVar10;
      do {
        plVar12 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar12 = plVar1;
        }
        uVar11 = (longlong)(int)*plVar2 - 1U & uVar7;
        uVar7 = uVar7 + 1;
        *(undefined4 *)((longlong)plVar12 + uVar11 * 4) = 0xffffffff;
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
      uVar10 = *puVar16;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar10 == 0) {
        lVar6 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar8 = local_58 + 1;
        bVar5 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar8;
        if (bVar5) goto LAB_142574f7f;
        uVar10 = puVar16[lVar6 + 1];
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
      if (iVar4 < iStack_44) {
LAB_142574f7f:
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
        uVar10 = piVar3[1];
        uVar13 = *piVar3 - uVar10 ^ uVar10 >> 0xd;
        uVar9 = (-0x61c88647 - uVar13) - uVar10 ^ uVar13 << 8;
        uVar14 = (uVar10 - uVar9) - uVar13 ^ uVar9 >> 0xd;
        uVar13 = (uVar13 - uVar9) - uVar14 ^ uVar14 >> 0xc;
        uVar10 = (uVar9 - uVar13) - uVar14 ^ uVar13 << 0x10;
        uVar14 = (uVar14 - uVar10) - uVar13 ^ uVar10 >> 5;
        uVar9 = (uVar13 - uVar10) - uVar14 ^ uVar14 >> 3;
        uVar10 = (uVar10 - uVar9) - uVar14 ^ uVar9 << 10;
        uVar10 = ((uVar14 - uVar10) - uVar9 ^ uVar10 >> 0xf) & (int)*plVar2 - 1U;
        piVar3[5] = uVar10;
        plVar12 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar12 = plVar1;
        }
        piVar3[4] = *(int *)((longlong)plVar12 +
                            ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar10) * 4);
        plVar12 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar12 = plVar1;
        }
        *(int *)((longlong)plVar12 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar10) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 1425750d0 Rehash body=545 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FGuid,FLightComponentMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FLightComponentMapBuildData,0>,FDefaultSetAllocator>
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
  ulonglong uVar11;
  uint *puVar12;
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
      uVar11 = (ulonglong)uVar5;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar9 * 4) = 0xffffffff;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_38 = (uint *)(param_1 + 2);
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar3 != 0) {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puStack_38;
      }
      uVar5 = *puVar12;
      local_68 = 0;
      iStack_50 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar8 = local_68 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar8;
        if (bVar4) goto LAB_1425751ff;
        uVar5 = puVar12[lVar6 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      iVar8 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      iStack_54 = (iStack_50 - iVar8) + 0x1f;
      if (iVar3 < iStack_54) {
LAB_1425751ff:
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
        lVar6 = (longlong)iStack_2c * 0x90 + *param_1;
        uVar5 = FCrc::MemCrc_DEPRECATED(lVar6,0x10);
        uVar5 = (int)*plVar2 - 1U & uVar5;
        *(uint *)(lVar6 + 0x84) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x80) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iVar3;
        local_30 = local_30 & ~uStack_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (iStack_2c < (int)puStack_38[6]);
    }
  }
  return;
}



// FUNCTION 142575300 FUN_142575300 body=544 status=ok
// SIG undefined FUN_142575300(void)

void FUN_142575300(longlong *param_1)

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
  ulonglong uVar11;
  uint *puVar12;
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
      uVar11 = (ulonglong)uVar5;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar9 * 4) = 0xffffffff;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_38 = (uint *)(param_1 + 2);
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar3 != 0) {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puStack_38;
      }
      uVar5 = *puVar12;
      local_68 = 0;
      iStack_50 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar8 = local_68 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar8;
        if (bVar4) goto LAB_14257542f;
        uVar5 = puVar12[lVar6 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      iVar8 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      iStack_54 = (iStack_50 - iVar8) + 0x1f;
      if (iVar3 < iStack_54) {
LAB_14257542f:
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
        lVar6 = (longlong)iStack_2c * 0xe0 + *param_1;
        uVar5 = FCrc::MemCrc_DEPRECATED(lVar6,0x10);
        uVar5 = (int)*plVar2 - 1U & uVar5;
        *(uint *)(lVar6 + 0xdc) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0xd8) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iVar3;
        local_30 = local_30 & ~uStack_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (iStack_2c < (int)puStack_38[6]);
    }
  }
  return;
}



// FUNCTION 142575520 ReleaseResources body=464 status=ok
// SIG undefined ReleaseResources(void)

void UMapBuildDataRegistry::ReleaseResources(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  longlong lVar7;
  uint *puVar8;
  undefined1 local_res8 [8];
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  uint uStack_60;
  int iStack_5c;
  undefined1 local_58 [16];
  longlong *local_48;
  undefined2 local_40;
  longlong *local_38;
  uint uStack_30;
  uint uStack_2c;
  uint *puStack_28;
  undefined1 auStack_20 [16];
  undefined8 local_10;
  
  plVar1 = (longlong *)(param_1 + 0xd0);
  iVar2 = *(int *)(param_1 + 0xf8);
  local_78 = 0;
  uStack_74 = 1;
  puStack_28 = (uint *)(param_1 + 0xe0);
  local_68._4_4_ = 0;
  uStack_60 = 0;
  if (iVar2 != 0) {
    puVar8 = *(uint **)(param_1 + 0xf0);
    if (*(uint **)(param_1 + 0xf0) == (uint *)0x0) {
      puVar8 = puStack_28;
    }
    uVar6 = *puVar8;
    local_78 = 0;
    uStack_60 = 0;
    while (uVar6 == 0) {
      lVar7 = (longlong)(int)local_78;
      uStack_60 = uStack_60 + 0x20;
      uVar6 = local_78 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_78;
      local_78 = uVar6;
      if (bVar3) goto LAB_1425755ef;
      uVar6 = puVar8[lVar7 + 1];
    }
    uStack_74 = -uVar6 & uVar6;
    iVar4 = 0x1f;
    if (uStack_74 != 0) {
      for (; uStack_74 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uStack_74 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    local_68._4_4_ = (uStack_60 - iVar4) + 0x1f;
    if (iVar2 < local_68._4_4_) {
LAB_1425755ef:
      local_68._4_4_ = iVar2;
    }
  }
  auStack_20._4_4_ = local_68._4_4_;
  auStack_20._0_4_ = 0xffffffff;
  auStack_20._8_4_ = uStack_60;
  auStack_20._12_4_ = iStack_5c;
  uStack_30 = local_78;
  uStack_2c = uStack_74;
  local_40 = 0;
  local_10._0_4_ = SUB84(plVar1,0);
  local_10._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
  uStack_60 = 0xffffffff;
  iStack_5c = local_68._4_4_;
  uStack_70 = local_78;
  uStack_6c = uStack_74;
  local_58._8_4_ = (undefined4)local_10;
  local_58._0_8_ = auStack_20._8_8_;
  local_58._12_4_ = local_10._4_4_;
  bVar3 = local_68._4_4_ < *(int *)(param_1 + 0xf8);
  local_48 = plVar1;
  local_38 = plVar1;
  local_10 = plVar1;
  local_68 = puStack_28;
  if (bVar3) {
    do {
      iVar2 = iStack_5c;
      if (param_2 == 0) {
LAB_142575684:
        FUN_141edf360(*(undefined8 *)((longlong)iVar2 * 0x20 + 0x10 + *plVar1));
      }
      else {
        piVar5 = (int *)TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::FindId
                                  (param_2,local_res8,(longlong)iStack_5c * 0x20 + *plVar1);
        if (*piVar5 == -1) goto LAB_142575684;
      }
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
    } while (iStack_5c < (int)local_68[6]);
    if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
      TSet<TTuple<FUniqueObjectGuid,UObjectBase_const_*>,TDefaultMapHashableKeyFuncs<FUniqueObjectGuid,UObjectBase_const_*,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),1);
    }
  }
  return;
}



// FUNCTION 1425756f0 FUN_1425756f0 body=587 status=ok
// SIG undefined FUN_1425756f0(void)

void FUN_1425756f0(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
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
  
  uStack_94 = 1;
  plVar8 = (longlong *)(param_1 + 2000);
  local_98 = 0;
  uVar2 = *(uint *)(param_1 + 0x7f8);
  puVar1 = (uint *)(param_1 + 0x7e0);
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar2 != 0) {
    puVar11 = *(uint **)(param_1 + 0x7f0);
    if (*(uint **)(param_1 + 0x7f0) == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar3 = *puVar11;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar3 == 0) {
      lVar7 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar9 = local_98 + 1;
      bVar5 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar9;
      if (bVar5) goto LAB_1425757ca;
      uVar3 = puVar11[lVar7 + 1];
    }
    uStack_94 = -uVar3 & uVar3;
    iVar9 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    uStack_84 = (iStack_80 - iVar9) + 0x1f;
    if ((int)uVar2 < (int)uStack_84) {
LAB_1425757ca:
      uStack_84 = uVar2;
    }
  }
  uVar3 = *(uint *)(param_1 + 0x7f8);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  uStack_48 = CONCAT44(uStack_94,local_98);
  uVar10 = uVar3 & 0xffffffe0;
  iStack_70 = local_98;
  uStack_6c = uStack_94;
  local_68 = puVar1;
  local_50 = plVar8;
  puStack_40 = puVar1;
  uStack_30 = local_58;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  uStack_84 = uVar3;
  if (uVar3 != uVar2) {
    puVar11 = *(uint **)(param_1 + 0x7f0);
    if (*(uint **)(param_1 + 0x7f0) == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar6 = puVar11[(int)uVar3 >> 5] & -1 << ((byte)uVar3 & 0x1f);
    iVar9 = (int)uVar3 >> 5;
    while (uVar6 == 0) {
      uVar10 = uVar10 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9) goto LAB_142575892;
      uVar6 = puVar11[(longlong)iVar9 + 1];
      iVar9 = iVar9 + 1;
    }
    uVar6 = -uVar6 & uVar6;
    iVar9 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar6 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    uStack_84 = (uVar10 - iVar9) + 0x1f;
    if ((int)uVar2 < (int)uStack_84) {
LAB_142575892:
      uStack_84 = uVar2;
    }
  }
  while ((uStack_5c != uStack_84 || (local_68 != puVar1))) {
    puVar4 = *(undefined8 **)(*plVar8 + 8 + (longlong)(int)uStack_5c * 0x18);
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,1);
    }
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  FUN_142569920(plVar8,0);
  plVar8 = (longlong *)(param_1 + 0x798);
  lVar7 = 3;
  do {
    if (*plVar8 != 0) {
      FUN_14256a850();
      *plVar8 = 0;
    }
    plVar8 = plVar8 + 1;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  return;
}



// FUNCTION 142575940 Remove body=237 status=ok
// SIG undefined Remove(void)

void TSet<TTuple<UObjectBase_const_*,FLevelLegacyMapBuildData>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLevelLegacyMapBuildData,0>,FDefaultSetAllocator>
     ::Remove(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  uint *puVar3;
  int iVar4;
  longlong lVar5;
  byte bVar6;
  undefined4 uVar7;
  longlong *plVar8;
  longlong lVar9;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar5 = *param_1;
    lVar1 = lVar5 + (longlong)param_2 * 0x28;
    lVar9 = (longlong)(int)((int)param_1[9] - 1U & *(uint *)(lVar1 + 0x24));
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    puVar2 = (undefined4 *)((longlong)plVar8 + lVar9 * 4);
    iVar4 = *(int *)((longlong)plVar8 + lVar9 * 4);
    while (iVar4 != -1) {
      if (iVar4 == param_2) {
        *puVar2 = *(undefined4 *)(lVar1 + 0x20);
        break;
      }
      lVar9 = (longlong)iVar4 * 5 + 4;
      puVar2 = (undefined4 *)(lVar5 + lVar9 * 8);
      iVar4 = *(int *)(lVar5 + lVar9 * 8);
    }
  }
  bVar6 = (byte)param_2 & 0x1f;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar2 = (undefined4 *)(*param_1 + (longlong)param_2 * 0x28);
  uVar7 = 0xffffffff;
  *puVar2 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar7 = (undefined4)param_1[6];
  }
  puVar2[1] = uVar7;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  *(int *)(param_1 + 6) = param_2;
  plVar8 = (longlong *)param_1[4];
  if ((longlong *)param_1[4] == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  puVar3 = (uint *)((longlong)plVar8 +
                   (longlong)((int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar3 = *puVar3 & ~(1 << bVar6 | 1U >> 0x20 - bVar6);
  return;
}



// FUNCTION 142575a30 Remove body=274 status=ok
// SIG undefined Remove(void)

void TSet<TTuple<UObjectBase_const_*,FMeshMapBuildLegacyData>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FMeshMapBuildLegacyData,0>,FDefaultSetAllocator>
     ::Remove(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong lVar6;
  int *piVar7;
  longlong lVar8;
  longlong lVar9;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar8 = *param_1;
    lVar9 = (longlong)param_2 * 0x20;
    lVar6 = (longlong)(int)((int)param_1[9] - 1U & *(uint *)(lVar9 + 0x1c + lVar8));
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    piVar7 = (int *)((longlong)plVar5 + lVar6 * 4);
    iVar2 = *(int *)((longlong)plVar5 + lVar6 * 4);
    while (iVar2 != -1) {
      if (iVar2 == param_2) {
        *piVar7 = *(int *)(lVar9 + 0x18 + lVar8);
        break;
      }
      piVar7 = (int *)(lVar8 + 0x18 + (longlong)iVar2 * 0x20);
      iVar2 = *piVar7;
    }
  }
  lVar8 = *param_1;
  lVar6 = (longlong)param_2 * 0x20;
  if (*(longlong *)(lVar8 + 8 + lVar6) != 0) {
    FMemory::Free();
    lVar8 = *param_1;
  }
  bVar3 = (byte)param_2 & 0x1f;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)((longlong)(int)param_1[6] * 0x20 + lVar8) = param_2;
    lVar8 = *param_1;
  }
  uVar4 = 0xffffffff;
  *(undefined4 *)(lVar6 + lVar8) = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar6 + 4 + lVar8) = uVar4;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  *(int *)(param_1 + 6) = param_2;
  plVar5 = (longlong *)param_1[4];
  if ((longlong *)param_1[4] == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar5 +
                   (longlong)((int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
  return;
}



// FUNCTION 142575b50 FUN_142575b50 body=124 status=ok
// SIG undefined FUN_142575b50(void)

void FUN_142575b50(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x14)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 8,0);
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if ((*(int *)(param_1 + 0x24) < 0) && (*(int *)(param_1 + 0x24) != 0)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x18,0);
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  if ((*(int *)(param_1 + 0x34) < 0) && (*(int *)(param_1 + 0x34) != 0)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x28,0);
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  if ((*(int *)(param_1 + 0x44) < 0) && (*(int *)(param_1 + 0x44) != 0)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x38,0);
  }
  return;
}



// FUNCTION 142575bd0 FUN_142575bd0 body=141 status=ok
// SIG undefined FUN_142575bd0(void)

void FUN_142575bd0(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 8);
  if (param_3 < 4) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2);
    pvVar1 = *(void **)((longlong)param_1 + 8);
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
        *(void **)((longlong)param_1 + 8) = pvVar1;
      }
      _guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 8) = uVar2;
  return;
}



// FUNCTION 142575c60 FUN_142575c60 body=104 status=ok
// SIG undefined FUN_142575c60(void)

void FUN_142575c60(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 != 0) {
    if (param_2 < 4) {
      iVar1 = 3;
    }
    else {
      iVar1 = FMemory::QuantizeSize((longlong)(int)param_2,0);
      if (iVar1 < (int)param_2) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != param_3) {
    FUN_142575bd0(param_1,0,iVar1,1);
  }
  *(int *)(param_1 + 0x14) = iVar1;
  return;
}



// FUNCTION 142575cd0 ResizeGrow body=120 status=ok
// SIG undefined ResizeGrow(void)

void TArray<bool,TInlineAllocator<3,FDefaultAllocator>_>::ResizeGrow
               (longlong param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (uVar1 < 4) {
    iVar2 = 3;
  }
  else {
    lVar3 = 4;
    if ((*(int *)(param_1 + 0x14) != 0) || (4 < uVar1)) {
      lVar3 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    iVar2 = FMemory::QuantizeSize(lVar3,0);
    if (iVar2 < (int)uVar1) {
      iVar2 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x14) = iVar2;
  FUN_142575bd0(param_1,param_2,iVar2,1);
  return;
}



// FUNCTION 142575d50 FUN_142575d50 body=746 status=ok
// SIG undefined FUN_142575d50(void)

void FUN_142575d50(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  int local_68;
  int local_64;
  longlong local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  int local_40;
  
  uVar12 = 0;
  local_40 = -1;
  local_50 = 0;
  local_48 = 0;
  uVar4 = UMaterialInterface::GetPrivateStaticClass();
  FUN_1417a5560(uVar4,&local_50,1,0x10,0);
  do {
    local_40 = local_40 + 1;
    if ((int)local_48 <= local_40) break;
  } while (*(longlong *)(local_50 + (longlong)local_40 * 8) == 0);
  do {
    if ((local_40 < 0) || ((int)local_48 <= local_40)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) {
      if (local_50 != 0) {
        FMemory::Free();
      }
      return;
    }
    uVar11 = *(ulonglong *)(local_50 + (longlong)local_40 * 8);
    if (uVar11 == 0) {
LAB_142575e33:
      uVar8 = uVar12;
    }
    else {
      lVar5 = FUN_1429b6de0();
      if ((*(int *)(*(longlong *)(uVar11 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(uVar11 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      uVar8 = uVar11;
      if (!bVar3) goto LAB_142575e33;
    }
    if (uVar11 == 0) {
LAB_142575e74:
      uVar11 = uVar12;
    }
    else {
      lVar5 = ACineCameraActor::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(uVar11 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(uVar11 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) goto LAB_142575e74;
    }
    if (uVar8 == 0) {
      uVar8 = uVar12;
      if (uVar11 != 0) {
        do {
          uVar9 = uVar12;
          local_68 = (int)uVar8;
          do {
            local_64 = (int)uVar9;
            TSet<TTuple<FObjectKey,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
            ::FindId(uVar11 + 2000,local_res18,&local_68);
            if ((((local_res18[0] != -1) &&
                 (lVar5 = *(longlong *)(uVar11 + 2000) + (longlong)local_res18[0] * 0x18, lVar5 != 0
                 )) && (plVar6 = (longlong *)(lVar5 + 8), plVar6 != (longlong *)0x0)) &&
               ((lVar5 = *plVar6, lVar5 != 0 && (lVar5 = *(longlong *)(lVar5 + 8), lVar5 != 0)))) {
              TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
              ::FindId(param_1,local_res20,lVar5);
              if ((local_res20[0] != -1) &&
                 ((lVar2 = *param_1 + (longlong)local_res20[0] * 0x18, lVar2 != 0 &&
                  (puVar7 = (undefined8 *)(lVar2 + 8), puVar7 != (undefined8 *)0x0)))) {
                FUN_14259fe40(lVar5,*puVar7);
              }
            }
            uVar10 = (int)uVar9 + 1;
            uVar9 = (ulonglong)uVar10;
          } while ((int)uVar10 < 4);
          uVar10 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar10;
        } while ((int)uVar10 < 3);
      }
    }
    else if ((*(byte *)(uVar8 + 0x98) & 1) != 0) {
      local_60 = 0;
      local_58 = 0;
      FUN_14258e4b0(uVar8,&local_60);
      uVar11 = uVar12;
      uVar8 = uVar12;
      lVar5 = local_60;
      iVar13 = (int)local_58;
      if (0 < (int)local_58) {
        do {
          lVar2 = *(longlong *)(uVar8 + lVar5);
          if (lVar2 != 0) {
            TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
            ::FindId(param_1,local_res10,lVar2);
            if (((local_res10[0] != -1) &&
                (lVar1 = *param_1 + (longlong)local_res10[0] * 0x18, lVar1 != 0)) &&
               (puVar7 = (undefined8 *)(lVar1 + 8), puVar7 != (undefined8 *)0x0)) {
              FUN_14259fe40(lVar2,*puVar7);
              lVar5 = local_60;
              iVar13 = (int)local_58;
            }
          }
          uVar10 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar10;
          uVar8 = uVar8 + 8;
        } while ((int)uVar10 < iVar13);
      }
      if (lVar5 != 0) {
        FMemory::Free(lVar5);
      }
    }
    do {
      local_40 = local_40 + 1;
      if ((int)local_48 <= local_40) break;
    } while (*(longlong *)(local_50 + (longlong)local_40 * 8) == 0);
  } while( true );
}



// FUNCTION 142576040 Serialize body=5 status=ok
// SIG undefined Serialize(void)

void AActor::Serialize(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lStackX_8;
  undefined8 uStackX_10;
  undefined8 uStackX_18;
  
  uStackX_18 = *(undefined8 *)(param_1 + 0x20);
  lStackX_8 = *(longlong *)(param_1 + 0x10);
  uStackX_10 = *(undefined8 *)(param_1 + 0x18);
  if ((*(uint *)(lStackX_8 + 8) >> 10 & 1) != 0) {
    (**(code **)(*param_2 + 0x70))(param_2);
    if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
      if ((*(longlong *)(lStackX_8 + 0xf8) != 0) && (0 < *(int *)(lStackX_8 + 0x40))) {
        (**(code **)(*param_2 + 0x70))(param_2);
      }
    }
  }
  if (((*(byte *)(param_2 + 5) & 3) == 0) && ((*(byte *)((longlong)param_2 + 0x2a) & 8) == 0)) {
    (**(code **)(*param_2 + 0x40))(param_2,&uStackX_10);
    if (-1 < *(char *)((longlong)param_2 + 0x29)) {
      (**(code **)(*param_2 + 0x30))(param_2,&uStackX_18);
    }
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x30))(param_2,&lStackX_8);
    }
  }
  lVar2 = FUN_14171bfe0();
  if (lStackX_8 != lVar2) {
    FUN_1417645f0(param_1,param_2);
  }
  FUN_141740770(param_1,param_2);
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    LOCK();
    DAT_1464b56f4 = DAT_1464b56f4 + 1;
    UNLOCK();
  }
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x44);
  lVar2 = (longlong)(*(int *)(*(longlong *)(param_1 + 0x10) + 0x40) + -1 + iVar1 & -iVar1);
  (**(code **)(*param_2 + 0x78))(param_2,lVar2,lVar2);
  return;
}



// FUNCTION 142576050 FUN_142576050 body=51 status=ok
// SIG undefined FUN_142576050(void)

void FUN_142576050(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0xe);
  FUN_1419e0a40(param_2,param_1 + 8);
  return;
}



// FUNCTION 142576090 FUN_142576090 body=965 status=ok
// SIG undefined FUN_142576090(void)

void FUN_142576090(longlong param_1,longlong *param_2)

{
  bool bVar1;
  bool bVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  uint *puVar8;
  char local_res10 [8];
  byte local_res18 [8];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  uint uStack_80;
  int iStack_7c;
  undefined1 local_78 [16];
  longlong local_68;
  undefined2 local_60;
  longlong local_58;
  undefined8 uStack_50;
  uint *puStack_48;
  undefined1 auStack_40 [16];
  undefined8 local_30;
  
  FUN_141763960();
  FUN_14242a0d0(local_res18,param_2,0,0xd6);
  FArchive::UsingCustomVersion(param_2,&DAT_1464b00e8);
  FArchive::UsingCustomVersion(param_2,&DAT_1464b0158);
  bVar2 = false;
  if (*(int *)((longlong)param_2 + 0x44) < 0x11) {
    bVar2 = false;
    if (*(int *)((longlong)param_2 + 0x44) < 4) {
      bVar2 = true;
    }
  }
  else {
    local_res10[0] = '\x01';
    (**(code **)(*param_2 + 8))(param_2,local_res10);
    if (local_res10[0] != '\x01') {
      bVar2 = true;
    }
  }
  if ((local_res18[0] & 2) == 0) {
    FUN_142564ef0(param_2,param_1 + 0x30);
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      if (*(longlong *)(param_1 + 0x70) != 0) {
        uVar7 = FMemory::Realloc(*(longlong *)(param_1 + 0x70),0,0);
        *(undefined8 *)(param_1 + 0x70) = uVar7;
      }
      *(undefined4 *)(param_1 + 0x78) = 0;
      TSet<TTuple<FGuid,FMeshMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FMeshMapBuildData,0>,FDefaultSetAllocator>
      ::ConditionalRehash(param_1 + 0x30,*(int *)(param_1 + 0x38) - *(int *)(param_1 + 100),0);
    }
    FUN_142564520(param_2,param_1 + 0x80);
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      if (*(longlong *)(param_1 + 0xc0) != 0) {
        uVar7 = FMemory::Realloc(*(longlong *)(param_1 + 0xc0),0,0);
        *(undefined8 *)(param_1 + 0xc0) = uVar7;
      }
      *(undefined4 *)(param_1 + 200) = 0;
      TSet<TTuple<FUniqueObjectGuid,UObjectBase_const_*>,TDefaultMapHashableKeyFuncs<FUniqueObjectGuid,UObjectBase_const_*,0>,FDefaultSetAllocator>
      ::ConditionalRehash(param_1 + 0x80,*(int *)(param_1 + 0x88) - *(int *)(param_1 + 0xb4),0);
    }
    iVar4 = FArchive::CustomVer(param_2,&DAT_1464b00e8);
    if (0x13 < iVar4) {
      FUN_142564860(param_2,param_1 + 0xd0);
      if ((*(byte *)(param_2 + 5) & 1) != 0) {
        if (*(longlong *)(param_1 + 0x110) != 0) {
          uVar7 = FMemory::Realloc(*(longlong *)(param_1 + 0x110),0,0);
          *(undefined8 *)(param_1 + 0x110) = uVar7;
        }
        *(undefined4 *)(param_1 + 0x118) = 0;
        TSet<TTuple<FUniqueObjectGuid,UObjectBase_const_*>,TDefaultMapHashableKeyFuncs<FUniqueObjectGuid,UObjectBase_const_*,0>,FDefaultSetAllocator>
        ::ConditionalRehash(param_1 + 0xd0,*(int *)(param_1 + 0xd8) - *(int *)(param_1 + 0x104),0);
      }
    }
    FUN_142564ba0(param_2,param_1 + 0x120);
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      if (*(longlong *)(param_1 + 0x160) != 0) {
        uVar7 = FMemory::Realloc(*(longlong *)(param_1 + 0x160),0,0);
        *(undefined8 *)(param_1 + 0x160) = uVar7;
      }
      *(undefined4 *)(param_1 + 0x168) = 0;
      TSet<TTuple<FGuid,FLightComponentMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FLightComponentMapBuildData,0>,FDefaultSetAllocator>
      ::ConditionalRehash(param_1 + 0x120,*(int *)(param_1 + 0x128) - *(int *)(param_1 + 0x154),0);
    }
    local_88 = (uint *)CONCAT44(local_88._4_4_,(undefined4)local_88);
    if ((*(byte *)(param_2 + 5) & 2) != 0) {
      local_68 = param_1 + 0x170;
      iVar4 = *(int *)(param_1 + 0x198);
      puStack_48 = (uint *)(param_1 + 0x180);
      local_98 = 0x100000000;
      local_88._4_4_ = 0;
      uStack_80 = 0;
      if (iVar4 != 0) {
        puVar8 = *(uint **)(param_1 + 400);
        if (*(uint **)(param_1 + 400) == (uint *)0x0) {
          puVar8 = puStack_48;
        }
        uVar5 = *puVar8;
        iVar6 = 0;
        while (uVar5 == 0) {
          uStack_80 = uStack_80 + 0x20;
          uVar3 = (ulonglong)local_98 >> 0x20;
          local_98 = CONCAT44((int)uVar3,iVar6 + 1);
          if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_14257631f;
          uVar5 = puVar8[(longlong)iVar6 + 1];
          iVar6 = iVar6 + 1;
        }
        uVar5 = -uVar5 & uVar5;
        iVar6 = 0x1f;
        if (uVar5 != 0) {
          for (; uVar5 >> iVar6 == 0; iVar6 = iVar6 + -1) {
          }
        }
        local_98 = CONCAT44(uVar5,(undefined4)local_98);
        if (uVar5 == 0) {
          iVar6 = 0x20;
        }
        else {
          iVar6 = 0x1f - iVar6;
        }
        local_88._4_4_ = (uStack_80 - iVar6) + 0x1f;
        if (iVar4 < local_88._4_4_) {
LAB_14257631f:
          local_88._4_4_ = iVar4;
        }
      }
      auStack_40._4_4_ = local_88._4_4_;
      auStack_40._0_4_ = 0xffffffff;
      auStack_40._8_4_ = uStack_80;
      auStack_40._12_4_ = iStack_7c;
      uStack_50 = local_98;
      local_60 = 0;
      local_30._0_4_ = (undefined4)local_68;
      local_30._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
      uStack_80 = 0xffffffff;
      iStack_7c = local_88._4_4_;
      uStack_90 = local_98;
      local_78._8_4_ = (undefined4)local_30;
      local_78._0_8_ = auStack_40._8_8_;
      local_78._12_4_ = local_30._4_4_;
      bVar1 = local_88._4_4_ < *(int *)(param_1 + 0x198);
      local_58 = local_68;
      local_30 = local_68;
      local_88 = puStack_48;
      if (bVar1) {
        do {
          uStack_80 = uStack_80 & ~uStack_90._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_90);
        } while (iStack_7c < (int)local_88[6]);
        if (((char)local_60 != '\0') && (local_60._1_1_ != '\0')) {
          FUN_1425693a0(local_68,*(int *)(local_68 + 8) - *(int *)(local_68 + 0x34),1);
        }
      }
    }
    iVar4 = FArchive::CustomVer(param_2,&DAT_1464b0158);
    if (0 < iVar4) {
      FUN_142565210(param_2,param_1 + 0x170);
      if ((*(byte *)(param_2 + 5) & 1) != 0) {
        if (*(longlong *)(param_1 + 0x1b0) != 0) {
          uVar7 = FMemory::Realloc(*(longlong *)(param_1 + 0x1b0),0,0);
          *(undefined8 *)(param_1 + 0x1b0) = uVar7;
        }
        *(undefined4 *)(param_1 + 0x1b8) = 0;
        FUN_1425693a0(param_1 + 0x170,*(int *)(param_1 + 0x178) - *(int *)(param_1 + 0x1a4),0);
      }
    }
  }
  if (bVar2) {
    UMapBuildDataRegistry::EmptyLevelData(param_1,0);
  }
  return;
}



// FUNCTION 142576460 FUN_142576460 body=392 status=ok
// SIG undefined FUN_142576460(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142576460(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *_Src;
  size_t _Size;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [8];
  undefined1 *local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  FArchive::UsingCustomVersion(param_2,&DAT_1464b00e8);
  FArchive::UsingCustomVersion(param_2,&DAT_1464b0148);
  FUN_141763960(param_1,param_2);
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    local_48 = 0;
    TArray<FName,FDefaultAllocator>::Remove(param_1 + 0x740,&local_48);
  }
  iVar2 = *(int *)(param_2 + 0x40);
  if (0x103 < iVar2) {
    FUN_142577fd0(0,param_2,param_1 + 0x7c0);
    iVar2 = *(int *)(param_2 + 0x40);
  }
  if (iVar2 < 0x1ae) {
    if ((*(char *)(param_1 + 0x141) == '\x01') && ((*(uint *)(param_1 + 0x770) & 2) == 0)) {
      *(uint *)(param_1 + 0x770) = *(uint *)(param_1 + 0x770) | 1;
    }
    else {
      *(uint *)(param_1 + 0x770) = *(uint *)(param_1 + 0x770) & 0xfffffffe;
    }
  }
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    iVar2 = FArchive::CustomVer(param_2,&DAT_1464b00e8);
    if ((iVar2 < 4) && (*(char *)(param_1 + 0x140) == '\x01')) {
      *(undefined1 *)(param_1 + 0x141) = 2;
    }
  }
  iVar2 = FArchive::CustomVer(param_2,&DAT_1464b0148);
  if (iVar2 < 0xc) {
    local_38 = (undefined1 *)0x0;
    local_30 = 0;
    FUN_14256d090(param_1,local_40);
    puVar1 = local_38;
    _Size = (size_t)(int)local_30;
    *(int *)(param_1 + 0x7b8) = (int)local_30;
    if (((int)local_30 == 0) && (*(int *)(param_1 + 0x7bc) == 0)) {
      *(undefined4 *)(param_1 + 0x7bc) = 0;
    }
    else {
      TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy
                ((undefined8 *)(param_1 + 0x7b0),local_30 & 0xffffffff);
      _Src = local_40;
      if (puVar1 != (undefined1 *)0x0) {
        _Src = puVar1;
      }
      _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x7b0),_Src,_Size);
    }
    if (local_38 != (undefined1 *)0x0) {
      FMemory::Free(local_38);
    }
  }
  return;
}



// FUNCTION 1425765f0 Serialize body=34 status=ok
// SIG undefined Serialize(void)

void AAkReverbVolume::Serialize(undefined8 param_1,undefined8 param_2)

{
  FUN_141763960();
  FArchive::UsingCustomVersion(param_2,&DAT_1464b00e8);
  return;
}



// FUNCTION 142576620 Serialize body=87 status=ok
// SIG undefined Serialize(void)

void UMaterialExpressionClamp::Serialize(longlong param_1,longlong param_2)

{
  FUN_141763960();
  if (((*(byte *)(param_2 + 0x28) & 1) != 0) && (*(int *)(param_2 + 0x40) < 0x109)) {
    if (*(char *)(param_1 + 0xd0) == '\x01') {
      *(undefined1 *)(param_1 + 0xd0) = 2;
      return;
    }
    if (*(char *)(param_1 + 0xd0) == '\x02') {
      *(undefined1 *)(param_1 + 0xd0) = 1;
    }
  }
  return;
}



// FUNCTION 142576680 FUN_142576680 body=5389 status=ok
// SIG undefined FUN_142576680(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142576680(longlong param_1,longlong param_2)

{
  void *_Dst;
  void *pvVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  undefined2 *puVar15;
  undefined2 *local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  void *local_78;
  undefined8 local_70;
  undefined2 *local_68;
  int local_60;
  int local_5c;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  void *local_48;
  int local_40;
  
  FUN_141763960();
  FArchive::UsingCustomVersion(param_2,&DAT_1464b00e8);
  FArchive::UsingCustomVersion(param_2,&DAT_1464b0188);
  local_40 = *(int *)(param_1 + 0x48);
  lVar10 = (longlong)local_40;
  puVar7 = (undefined8 *)(param_1 + 0x40);
  local_48 = (void *)0x0;
  pvVar1 = (void *)*puVar7;
  if (local_40 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,local_40,0);
    _guard_xfg_dispatch_icall_nop(local_48,pvVar1,lVar10 * 2);
  }
  if (*(int *)(param_2 + 0x40) < 0x1f1) {
    FString::ReplaceInline(puVar7,L"Parameters.WorldPosition",L"Parameters.AbsoluteWorldPosition",0)
    ;
  }
  else if (*(int *)(param_2 + 0x40) < 0x1f9) {
    puVar8 = &DAT_1465337b0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146afddfc) &&
       (_Init_thread_header(&DAT_146afddfc), DAT_146afddfc == -1)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1465337b0,0);
      FGenericPlatformString::Memcpy(DAT_1465337b0,L"FieldOfViewWideAngles",0x2c);
      DAT_1465337c0 = 0;
      _DAT_1465337c8 = 0x1a;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1465337c0,0);
      FGenericPlatformString::Memcpy(DAT_1465337c0,L"PrevFieldOfViewWideAngles",0x34);
      DAT_1465337d0 = 0;
      _DAT_1465337d8 = 0xc;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1465337d0,0);
      FGenericPlatformString::Memcpy(DAT_1465337d0,L"ViewRectMin",0x18);
      DAT_1465337e0 = 0;
      _DAT_1465337e8 = 0x13;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1465337e0,0);
      FGenericPlatformString::Memcpy(DAT_1465337e0,L"ViewSizeAndInvSize",0x26);
      DAT_1465337f0 = 0;
      _DAT_1465337f8 = 0x15;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1465337f0,0);
      FGenericPlatformString::Memcpy(DAT_1465337f0,L"BufferSizeAndInvSize",0x2a);
      DAT_146533800 = 0;
      _DAT_146533808 = 0xe;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146533800,0);
      FGenericPlatformString::Memcpy(DAT_146533800,L"ExposureScale",0x1c);
      DAT_146533810 = 0;
      _DAT_146533818 = 0x19;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146533810,0);
      FGenericPlatformString::Memcpy(DAT_146533810,L"DiffuseOverrideParameter",0x32);
      DAT_146533820 = 0;
      _DAT_146533828 = 0x1a;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146533820,0);
      FGenericPlatformString::Memcpy(DAT_146533820,L"SpecularOverrideParameter",0x34);
      DAT_146533830 = 0;
      _DAT_146533838 = 0x18;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146533830,0);
      FGenericPlatformString::Memcpy(DAT_146533830,L"NormalOverrideParameter",0x30);
      DAT_146533840 = 0;
      _DAT_146533848 = 0x1b;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146533840,0);
      FGenericPlatformString::Memcpy(DAT_146533840,L"RoughnessOverrideParameter",0x36);
      DAT_146533850 = 0;
      _DAT_146533858 = 0x12;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146533850,0);
      FGenericPlatformString::Memcpy(DAT_146533850,L"PrevFrameGameTime",0x24);
      DAT_146533860 = 0;
      _DAT_146533868 = 0x12;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146533860,0);
      FGenericPlatformString::Memcpy(DAT_146533860,L"PrevFrameRealTime",0x24);
      DAT_146533870 = 0;
      _DAT_146533878 = 0x10;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146533870,0);
      FGenericPlatformString::Memcpy(DAT_146533870,L"OutOfBoundsMask",0x20);
      DAT_146533880 = 0;
      _DAT_146533888 = 0x22;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146533880,0);
      FGenericPlatformString::Memcpy(DAT_146533880,L"WorldCameraMovementSinceLastFrame",0x44);
      DAT_146533890 = 0;
      _DAT_146533898 = 0xc;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146533890,0);
      FGenericPlatformString::Memcpy(DAT_146533890,L"CullingSign",0x18);
      DAT_1465338a0 = 0;
      _DAT_1465338a8 = 10;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1465338a0,0);
      FGenericPlatformString::Memcpy(DAT_1465338a0,L"NearPlane",0x14);
      DAT_1465338b0 = 0;
      _DAT_1465338b8 = 0x1b;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1465338b0,0);
      FGenericPlatformString::Memcpy(DAT_1465338b0,L"AdaptiveTessellationFactor",0x36);
      DAT_1465338c0 = 0;
      _DAT_1465338c8 = 9;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1465338c0,0);
      FGenericPlatformString::Memcpy(DAT_1465338c0,L"GameTime",0x12);
      DAT_1465338d0 = 0;
      _DAT_1465338d8 = 9;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1465338d0,0);
      FGenericPlatformString::Memcpy(DAT_1465338d0,L"RealTime",0x12);
      DAT_1465338e0 = 0;
      _DAT_1465338e8 = 7;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1465338e0,0);
      FGenericPlatformString::Memcpy(DAT_1465338e0,L"Random",0xe);
      DAT_1465338f0 = 0;
      _DAT_1465338f8 = 0xc;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1465338f0,0);
      FGenericPlatformString::Memcpy(DAT_1465338f0,L"FrameNumber",0x18);
      DAT_146533900 = 0;
      _DAT_146533908 = 10;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146533900,0);
      FGenericPlatformString::Memcpy(DAT_146533900,L"CameraCut",0x14);
      DAT_146533910 = 0;
      _DAT_146533918 = 0xd;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146533910,0);
      FGenericPlatformString::Memcpy(DAT_146533910,L"UseLightmaps",0x1a);
      DAT_146533920 = 0;
      _DAT_146533928 = 0x12;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146533920,0);
      FGenericPlatformString::Memcpy(DAT_146533920,L"UnlitViewmodeMask",0x24);
      DAT_146533930 = 0;
      _DAT_146533938 = 0x16;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146533930,0);
      FGenericPlatformString::Memcpy(DAT_146533930,L"DirectionalLightColor",0x2c);
      DAT_146533940 = 0;
      _DAT_146533948 = 0x1a;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146533940,0);
      FGenericPlatformString::Memcpy(DAT_146533940,L"DirectionalLightDirection",0x34);
      DAT_146533950 = 0;
      _DAT_146533958 = 0x21;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146533950,0);
      FGenericPlatformString::Memcpy(DAT_146533950,L"DirectionalLightShadowTransition",0x42);
      DAT_146533960 = 0;
      _DAT_146533968 = 0x1b;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146533960,0);
      FGenericPlatformString::Memcpy(DAT_146533960,L"DirectionalLightShadowSize",0x36);
      DAT_146533970 = 0;
      _DAT_146533978 = 0x1f;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146533970,0);
      FGenericPlatformString::Memcpy(DAT_146533970,L"DirectionalLightScreenToShadow",0x3e);
      DAT_146533980 = 0;
      _DAT_146533988 = 0x20;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146533980,0);
      FGenericPlatformString::Memcpy(DAT_146533980,L"DirectionalLightShadowDistances",0x40);
      DAT_146533990 = 0;
      _DAT_146533998 = 0xe;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146533990,0);
      FGenericPlatformString::Memcpy(DAT_146533990,L"UpperSkyColor",0x1c);
      DAT_1465339a0 = 0;
      _DAT_1465339a8 = 0xe;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1465339a0,0);
      FGenericPlatformString::Memcpy(DAT_1465339a0,L"LowerSkyColor",0x1c);
      DAT_1465339b0 = 0;
      _DAT_1465339b8 = 0x1e;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1465339b0,0);
      FGenericPlatformString::Memcpy(DAT_1465339b0,L"TranslucencyLightingVolumeMin",0x3c);
      DAT_1465339c0 = 0;
      _DAT_1465339c8 = 0x22;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1465339c0,0);
      FGenericPlatformString::Memcpy(DAT_1465339c0,L"TranslucencyLightingVolumeInvSize",0x44);
      DAT_1465339d0 = 0;
      _DAT_1465339d8 = 0x11;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1465339d0,0);
      FGenericPlatformString::Memcpy(DAT_1465339d0,L"TemporalAAParams",0x22);
      DAT_1465339e0 = 0;
      _DAT_1465339e8 = 0x10;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1465339e0,0);
      FGenericPlatformString::Memcpy(DAT_1465339e0,L"CircleDOFParams",0x20);
      DAT_1465339f0 = 0;
      _DAT_1465339f8 = 0x1a;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1465339f0,0);
      FGenericPlatformString::Memcpy(DAT_1465339f0,L"DepthOfFieldFocalDistance",0x34);
      DAT_146533a00 = 0;
      _DAT_146533a08 = 0x12;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146533a00,0);
      FGenericPlatformString::Memcpy(DAT_146533a00,L"DepthOfFieldScale",0x24);
      DAT_146533a10 = 0;
      _DAT_146533a18 = 0x18;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146533a10,0);
      FGenericPlatformString::Memcpy(DAT_146533a10,L"DepthOfFieldFocalLength",0x30);
      DAT_146533a20 = 0;
      _DAT_146533a28 = 0x18;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146533a20,0);
      FGenericPlatformString::Memcpy(DAT_146533a20,L"DepthOfFieldFocalRegion",0x30);
      DAT_146533a30 = 0;
      _DAT_146533a38 = 0x21;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146533a30,0);
      FGenericPlatformString::Memcpy(DAT_146533a30,L"DepthOfFieldNearTransitionRegion",0x42);
      DAT_146533a40 = 0;
      _DAT_146533a48 = 0x20;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146533a40,0);
      FGenericPlatformString::Memcpy(DAT_146533a40,L"DepthOfFieldFarTransitionRegion",0x40);
      DAT_146533a50 = 0;
      _DAT_146533a58 = 0x1c;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146533a50,0);
      FGenericPlatformString::Memcpy(DAT_146533a50,L"MotionBlurNormalizedToPixel",0x38);
      DAT_146533a60 = 0;
      _DAT_146533a68 = 0x14;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146533a60,0);
      FGenericPlatformString::Memcpy(DAT_146533a60,L"GeneralPurposeTweak",0x28);
      DAT_146533a70 = 0;
      _DAT_146533a78 = 0x13;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146533a70,0);
      FGenericPlatformString::Memcpy(DAT_146533a70,L"DemosaicVposOffset",0x26);
      DAT_146533a80 = 0;
      _DAT_146533a88 = 0x1b;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146533a80,0);
      FGenericPlatformString::Memcpy(DAT_146533a80,L"IndirectLightingColorScale",0x36);
      DAT_146533a90 = 0;
      _DAT_146533a98 = 0x15;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146533a90,0);
      FGenericPlatformString::Memcpy(DAT_146533a90,L"HDR32bppEncodingMode",0x2a);
      DAT_146533aa0 = 0;
      _DAT_146533aa8 = 0x1b;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146533aa0,0);
      FGenericPlatformString::Memcpy(DAT_146533aa0,L"AtmosphericFogSunDirection",0x36);
      DAT_146533ab0 = 0;
      _DAT_146533ab8 = 0x17;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146533ab0,0);
      FGenericPlatformString::Memcpy(DAT_146533ab0,L"AtmosphericFogSunPower",0x2e);
      DAT_146533ac0 = 0;
      _DAT_146533ac8 = 0x14;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146533ac0,0);
      FGenericPlatformString::Memcpy(DAT_146533ac0,L"AtmosphericFogPower",0x28);
      DAT_146533ad0 = 0;
      _DAT_146533ad8 = 0x1b;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146533ad0,0);
      FGenericPlatformString::Memcpy(DAT_146533ad0,L"AtmosphericFogDensityScale",0x36);
      DAT_146533ae0 = 0;
      _DAT_146533ae8 = 0x1c;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146533ae0,0);
      FGenericPlatformString::Memcpy(DAT_146533ae0,L"AtmosphericFogDensityOffset",0x38);
      DAT_146533af0 = 0;
      _DAT_146533af8 = 0x1b;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146533af0,0);
      FGenericPlatformString::Memcpy(DAT_146533af0,L"AtmosphericFogGroundOffset",0x36);
      DAT_146533b00 = 0;
      _DAT_146533b08 = 0x1c;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146533b00,0);
      FGenericPlatformString::Memcpy(DAT_146533b00,L"AtmosphericFogDistanceScale",0x38);
      DAT_146533b10 = 0;
      _DAT_146533b18 = 0x1c;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146533b10,0);
      FGenericPlatformString::Memcpy(DAT_146533b10,L"AtmosphericFogAltitudeScale",0x38);
      DAT_146533b20 = 0;
      _DAT_146533b28 = 0x22;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146533b20,0);
      FGenericPlatformString::Memcpy(DAT_146533b20,L"AtmosphericFogHeightScaleRayleigh",0x44);
      DAT_146533b30 = 0;
      _DAT_146533b38 = 0x1c;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146533b30,0);
      FGenericPlatformString::Memcpy(DAT_146533b30,L"AtmosphericFogStartDistance",0x38);
      DAT_146533b40 = 0;
      _DAT_146533b48 = 0x1d;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146533b40,0);
      FGenericPlatformString::Memcpy(DAT_146533b40,L"AtmosphericFogDistanceOffset",0x3a);
      DAT_146533b50 = 0;
      _DAT_146533b58 = 0x1b;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146533b50,0);
      FGenericPlatformString::Memcpy(DAT_146533b50,L"AtmosphericFogSunDiscScale",0x36);
      DAT_146533b60 = 0;
      _DAT_146533b68 = 0x19;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146533b60,0);
      FGenericPlatformString::Memcpy(DAT_146533b60,L"AtmosphericFogRenderMask",0x32);
      DAT_146533b70 = 0;
      _DAT_146533b78 = 0x29;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146533b70,0);
      FGenericPlatformString::Memcpy(DAT_146533b70,L"AtmosphericFogInscatterAltitudeSampleNum",0x52)
      ;
      DAT_146533b80 = 0;
      _DAT_146533b88 = 0x17;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146533b80,0);
      FGenericPlatformString::Memcpy(DAT_146533b80,L"AtmosphericFogSunColor",0x2e);
      DAT_146533b90 = 0;
      _DAT_146533b98 = 0x13;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146533b90,0);
      FGenericPlatformString::Memcpy(DAT_146533b90,L"AmbientCubemapTint",0x26);
      DAT_146533ba0 = 0;
      _DAT_146533ba8 = 0x18;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146533ba0,0);
      FGenericPlatformString::Memcpy(DAT_146533ba0,L"AmbientCubemapIntensity",0x30);
      DAT_146533bb0 = 0;
      _DAT_146533bb8 = 0x11;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146533bb0,0);
      FGenericPlatformString::Memcpy(DAT_146533bb0,L"RenderTargetSize",0x22);
      DAT_146533bc0 = 0;
      _DAT_146533bc8 = 0x13;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146533bc0,0);
      FGenericPlatformString::Memcpy(DAT_146533bc0,L"SkyLightParameters",0x26);
      DAT_146533bd0 = 0;
      _DAT_146533bd8 = 0x1b;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146533bd0,0);
      FGenericPlatformString::Memcpy(DAT_146533bd0,L"SceneFString(TEXTureMinMax",0x36);
      DAT_146533be0 = 0;
      _DAT_146533be8 = 0xe;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146533be0,0);
      FGenericPlatformString::Memcpy(DAT_146533be0,L"SkyLightColor",0x1c);
      DAT_146533bf0 = 0;
      _DAT_146533bf8 = 0x1c;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146533bf0,0);
      FGenericPlatformString::Memcpy(DAT_146533bf0,L"SkyIrradianceEnvironmentMap",0x38);
      DAT_146533c00 = 0;
      _DAT_146533c08 = 0x12;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146533c00,0);
      FGenericPlatformString::Memcpy(DAT_146533c00,L"MobilePreviewMode",0x24);
      DAT_146533c10 = 0;
      _DAT_146533c18 = 0x14;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146533c10,0);
      FGenericPlatformString::Memcpy(DAT_146533c10,L"HMDEyePaddingOffset",0x28);
      DAT_146533c20 = 0;
      _DAT_146533c28 = 0x26;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146533c20,0);
      FGenericPlatformString::Memcpy(DAT_146533c20,L"DirectionalLightShadowFString(TEXTure",0x4c);
      DAT_146533c30 = 0;
      _DAT_146533c38 = 0xd;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146533c30,0);
      FGenericPlatformString::Memcpy(DAT_146533c30,L"SamplerState",0x1a);
      atexit(`UMaterialExpressionCustom::Serialize'::`12'::
             _dynamic_atexit_destructor_for__UniformMembers__);
      _Init_thread_footer(&DAT_146afddfc);
    }
    local_88 = 0;
    local_80 = 6;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
    lVar10 = local_88;
    FGenericPlatformString::Memcpy(local_88,L"View.",0xc);
    local_78 = (void *)0x0;
    local_70 = 7;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
    FGenericPlatformString::Memcpy(local_78,L"Frame.",0xe);
    iVar5 = (int)local_70;
    lVar14 = (longlong)(int)local_70;
    iVar9 = (int)local_80;
    do {
      puVar15 = (undefined2 *)0x0;
      iVar3 = *(int *)(puVar8 + 1);
      if (iVar5 < 2) {
        pvVar1 = (void *)*puVar8;
        local_68 = (undefined2 *)0x0;
        local_60 = iVar3;
        if (iVar3 == 0) {
          local_5c = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_68,iVar3,0);
          puVar15 = local_68;
          _guard_xfg_dispatch_icall_nop(local_68,pvVar1,(longlong)iVar3 * 2);
          iVar3 = local_60;
        }
      }
      else {
        puVar6 = (undefined2 *)(ulonglong)(iVar3 - 1);
        if (iVar3 == 0) {
          puVar6 = puVar15;
        }
        iVar12 = (int)puVar6;
        if ((iVar5 != 0) || (iVar3 = 1, iVar12 == 0)) {
          iVar3 = 0;
        }
        local_a8 = (undefined2 *)0x0;
        local_a0._0_4_ = iVar5;
        if ((iVar5 == 0) && (iVar3 + iVar12 == 0)) {
          local_a0._4_4_ = 0;
          iVar4 = iVar5;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_a8,iVar3 + iVar12 + iVar5,0);
          puVar15 = local_a8;
          _guard_xfg_dispatch_icall_nop(local_a8,local_78,lVar14 * 2);
          iVar4 = (int)local_a0;
        }
        pvVar1 = (void *)*puVar8;
        iVar13 = local_a0._4_4_;
        iVar3 = iVar4;
        if (iVar12 != 0) {
          local_a0._0_4_ = (uint)(iVar4 == 0) + iVar12 + iVar4;
          if (local_a0._4_4_ < (int)local_a0) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,iVar4);
            puVar15 = local_a8;
          }
          iVar13 = local_a0._4_4_;
          iVar3 = (int)local_a0;
          _guard_xfg_dispatch_icall_nop
                    (puVar15 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)),pvVar1,
                     (longlong)iVar12 * 2);
          (puVar15 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)))[iVar12] = 0;
          iVar9 = (int)local_80;
        }
        local_a8 = (undefined2 *)0x0;
        local_a0 = 0;
        lVar10 = local_88;
        local_5c = iVar13;
      }
      if (iVar9 < 2) {
        FString::FString(&local_58,puVar8);
      }
      else {
        iVar12 = *(int *)(puVar8 + 1) + -1;
        if (*(int *)(puVar8 + 1) == 0) {
          iVar12 = 0;
        }
        if ((iVar9 != 0) || (iVar4 = 1, iVar12 == 0)) {
          iVar4 = 0;
        }
        local_98 = 0;
        TArray<wchar_t,FDefaultAllocator>::CopyToEmpty<wchar_t>
                  (&local_98,lVar10,iVar9,0,iVar4 + iVar12);
        uVar2 = local_90;
        pvVar1 = (void *)*puVar8;
        lVar10 = local_98;
        if (iVar12 != 0) {
          iVar9 = (int)local_90;
          lVar11 = (longlong)(int)local_90;
          iVar4 = (uint)((int)local_90 == 0) + (int)local_90 + iVar12;
          local_90 = CONCAT44(local_90._4_4_,iVar4);
          if (local_90._4_4_ < iVar4) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,uVar2 & 0xffffffff);
          }
          lVar10 = local_98;
          _Dst = (void *)(local_98 + (lVar11 - (ulonglong)(iVar9 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(_Dst,pvVar1,(longlong)iVar12 * 2);
          *(undefined2 *)((longlong)iVar12 * 2 + (longlong)_Dst) = 0;
          iVar9 = (int)local_80;
        }
        local_50 = (int)local_90;
        local_4c = local_90._4_4_;
        local_90 = 0;
        local_98 = 0;
        local_58 = lVar10;
      }
      lVar10 = local_58;
      puVar6 = &DAT_143f3eda8;
      if (iVar3 != 0) {
        puVar6 = puVar15;
      }
      FString::ReplaceInline(puVar7,puVar6);
      if (lVar10 != 0) {
        FMemory::Free();
      }
      if (puVar15 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      puVar8 = puVar8 + 2;
      lVar10 = local_88;
    } while (puVar8 != (undefined8 *)&DAT_146533c40);
    if (local_78 != (void *)0x0) {
      FMemory::Free(local_78);
    }
    if (local_88 != 0) {
      FMemory::Free();
    }
  }
  iVar5 = FArchive::CustomVer(param_2,&DAT_1464b00e8);
  if (iVar5 < 7) {
    FString::ReplaceInline(puVar7,L"View.RenderTargetSize",L"View.BufferSizeAndInvSize.xy",0);
  }
  iVar5 = FArchive::CustomVer(param_2,&DAT_1464b0188);
  if (iVar5 < 9) {
    FString::ReplaceInline(puVar7,L"SceneDepthTexture",L"SceneTexturesStruct.SceneDepthTexture",0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}



// FUNCTION 142577b90 Serialize body=86 status=ok
// SIG undefined Serialize(void)

void UMaterialExpressionFeatureLevelSwitch::Serialize(longlong param_1,longlong param_2)

{
  FUN_141763960();
  if (((*(byte *)(param_2 + 0x28) & 1) != 0) && (*(int *)(param_2 + 0x40) < 0x18c)) {
    *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_1 + 0x90);
    *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_1 + 0x98);
  }
  return;
}



// FUNCTION 142577bf0 FUN_142577bf0 body=191 status=ok
// SIG undefined FUN_142577bf0(void)

void FUN_142577bf0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  FUN_141763960();
  FArchive::UsingCustomVersion(param_2,&DAT_1464b00e8);
  iVar1 = FArchive::CustomVer(param_2,&DAT_1464b00e8);
  if (iVar1 < 0xe) {
    *(undefined4 *)(param_1 + 0x350) = 1;
    *(undefined4 *)(param_1 + 0x360) = 0;
    *(undefined4 *)(param_1 + 0x354) = 1;
    *(undefined8 *)(param_1 + 0x358) = 1;
  }
  FArchive::UsingCustomVersion(param_2,&DAT_1464b0188);
  iVar1 = FArchive::CustomVer(param_2,&DAT_1464b0188);
  if (iVar1 < 1) {
    *(undefined4 *)(param_1 + 0x530) = 1;
    *(undefined4 *)(param_1 + 0x534) = 1;
    *(undefined4 *)(param_1 + 0x538) = 1;
    *(undefined4 *)(param_1 + 0x53c) = 1;
    *(undefined4 *)(param_1 + 0x540) = 1;
  }
  return;
}



// FUNCTION 142577cb0 FUN_142577cb0 body=56 status=ok
// SIG undefined FUN_142577cb0(void)

void FUN_142577cb0(longlong param_1,longlong param_2)

{
  FUN_141763960();
  if ((*(int *)(param_2 + 0x44) - 1U < 0xc) && (0x1d < *(byte *)(param_1 + 0x70))) {
    *(undefined1 *)(param_1 + 0x72) = 1;
    *(undefined1 *)(param_1 + 0x70) = 0;
  }
  return;
}



// FUNCTION 142577cf0 FUN_142577cf0 body=421 status=ok
// SIG undefined FUN_142577cf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142577cf0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  byte *pbVar4;
  longlong lVar5;
  int iVar6;
  wchar_t *pwVar7;
  undefined1 auStack_878 [32];
  int local_858 [4];
  wchar_t local_848 [1024];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_878;
  FUN_141763960();
  FArchive::UsingCustomVersion(param_2,&DAT_1464b0188);
  iVar3 = FArchive::CustomVer(param_2,&DAT_1464b0188);
  if ((iVar3 < 1) && (iVar3 = 0, 0 < *(int *)(param_1 + 0x48))) {
    lVar5 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x40);
      pbVar4 = (byte *)FName::GetComparisonNameEntry(lVar1 + 8 + lVar5);
      if (pbVar4 != (byte *)0x0) {
        local_858[0] = 0;
        iVar6 = 0;
        pwVar7 = L"CustomDataGBX";
        cVar2 = FName::SplitNameWithCheck(L"CustomDataGBX",local_848,0x400,local_858);
        if (cVar2 != '\0') {
          pwVar7 = local_848;
          iVar6 = local_858[0] + 1;
        }
        if (iVar6 == *(int *)(lVar1 + 0xc + lVar5)) {
          if ((*pbVar4 & 1) == 0) {
            iVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,char>(pwVar7,pbVar4 + 0x10);
          }
          else {
            iVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>();
          }
          if (iVar6 == 0) {
            lVar1 = *(longlong *)(param_1 + 0x40);
            *(undefined4 *)(lVar5 + 0x10 + lVar1) = 1;
            *(undefined4 *)(lVar5 + 0x14 + lVar1) = 1;
            *(undefined4 *)(lVar5 + 0x18 + lVar1) = 1;
            *(undefined4 *)(lVar5 + 0x1c + lVar1) = 1;
            *(undefined4 *)(lVar5 + 0x20 + lVar1) = 1;
          }
        }
      }
      iVar3 = iVar3 + 1;
      lVar5 = lVar5 + 0x30;
    } while (iVar3 < *(int *)(param_1 + 0x48));
  }
  return;
}



// FUNCTION 142577ea0 Serialize body=106 status=ok
// SIG undefined Serialize(void)

void UMaterialExpressionSpeedTree::Serialize(longlong param_1,longlong param_2)

{
  char cVar1;
  
  FUN_141763960();
  if (*(int *)(param_2 + 0x40) < 0x16c) {
    cVar1 = *(char *)(param_1 + 0x101);
    if (cVar1 == '\x01') {
      *(undefined1 *)(param_1 + 0x101) = 3;
    }
    else {
      if (cVar1 == '\x02') {
        *(undefined1 *)(param_1 + 0x101) = 5;
        return;
      }
      if (cVar1 == '\x03') {
        *(undefined1 *)(param_1 + 0x101) = 4;
        return;
      }
    }
  }
  return;
}



// FUNCTION 142577f10 Serialize body=61 status=ok
// SIG undefined Serialize(void)

void UMaterialFunction::Serialize(longlong param_1,longlong param_2)

{
  undefined8 local_res18 [2];
  
  FUN_141763960();
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    local_res18[0] = 0;
    TArray<FName,FDefaultAllocator>::Remove(param_1 + 0x58,local_res18);
  }
  return;
}



// FUNCTION 142577f50 SerializeForDDC body=124 status=ok
// SIG undefined SerializeForDDC(void)

void FMaterialLayersFunctions::SerializeForDDC(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong local_18 [2];
  
  plVar1 = (longlong *)FUN_14256e320(param_1,local_18);
  plVar2 = (longlong *)(param_1 + 0x30);
  if (plVar2 != plVar1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_1 + 0x38) = (int)plVar1[1];
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)((longlong)plVar1 + 0xc);
    plVar1[1] = 0;
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  FUN_14158ce90(param_2,plVar2);
  return;
}



// FUNCTION 142577fd0 FUN_142577fd0 body=615 status=ok
// SIG undefined FUN_142577fd0(void)

void FUN_142577fd0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  int local_res10 [2];
  int local_res20 [2];
  undefined **local_68;
  longlong local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined4 local_48;
  uint local_44;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if ((*(byte *)(param_2 + 5) & 2) == 0) {
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      plVar7 = (longlong *)param_2[1];
      iVar4 = 0;
      local_res10[0] = 0;
      if ((int *)plVar7[1] < (int *)*plVar7 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,local_res10,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,local_res10,4);
        }
      }
      else {
        local_res10[0] = *(int *)*plVar7;
        *plVar7 = *plVar7 + 4;
      }
      TArray<FMaterialResource,FDefaultAllocator>::Empty(param_3,local_res10[0]);
      if (0 < local_res10[0]) {
        do {
          local_44 = local_44 & 0xfffffffc;
          local_50 = 1;
          local_4c = 0;
          local_60 = 0;
          uStack_58 = 0;
          local_48 = 2;
          local_40 = 0;
          uStack_38 = 0;
          local_68 = &PTR_FUN_144eef6b8;
          FUN_1425a2020(&local_68,param_2);
          iVar1 = (int)param_3[1];
          *(int *)(param_3 + 1) = iVar1 + 1;
          if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
            ResizeGrow(param_3,iVar1);
          }
          puVar6 = (undefined8 *)((longlong)iVar1 * 0x38 + *param_3);
          *puVar6 = &PTR_FUN_1450f76b8;
          puVar6[1] = local_60;
          if (local_60 != 0) {
            FMaterialShaderMap::AddRef();
          }
          puVar6[2] = uStack_58;
          *(undefined4 *)(puVar6 + 3) = local_50;
          *(undefined1 *)((longlong)puVar6 + 0x1c) = local_4c;
          *(undefined4 *)(puVar6 + 4) = local_48;
          *(uint *)((longlong)puVar6 + 0x24) =
               *(uint *)((longlong)puVar6 + 0x24) ^
               (*(uint *)((longlong)puVar6 + 0x24) ^ local_44) & 1;
          *puVar6 = &PTR_FUN_144eef6b8;
          *(uint *)((longlong)puVar6 + 0x24) =
               *(uint *)((longlong)puVar6 + 0x24) ^
               (*(uint *)((longlong)puVar6 + 0x24) ^ local_44) & 2;
          puVar6[5] = local_40;
          puVar6[6] = uStack_38;
          local_68 = &PTR_FUN_144eef6b8;
          FUN_14257f4c0(&local_68);
          iVar4 = iVar4 + 1;
        } while (iVar4 < local_res10[0]);
      }
    }
  }
  else {
    plVar5 = (longlong *)0x0;
    local_res10[0] = 0;
    plVar7 = plVar5;
    if (param_2[0xe] != 0) {
      TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
      ::FindId(param_1,local_res20);
      plVar2 = plVar5;
      if (local_res20[0] != -1) {
        plVar2 = (longlong *)((longlong)local_res20[0] * 0x20 + *param_1);
      }
      plVar7 = plVar2 + 1;
      if (plVar2 == (longlong *)0x0) {
        plVar7 = plVar5;
      }
      if (plVar7 != (longlong *)0x0) {
        local_res10[0] = (int)plVar7[1];
      }
    }
    plVar2 = (longlong *)param_2[1];
    if ((int *)plVar2[1] < (int *)*plVar2 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_res10,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,local_res10,4);
      }
    }
    else {
      local_res10[0] = *(int *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    if ((plVar7 != (longlong *)0x0) && (plVar2 = plVar5, 0 < local_res10[0])) {
      do {
        FUN_1425a2020(*(undefined8 *)((longlong)plVar2 + *plVar7),param_2);
        uVar3 = (int)plVar5 + 1;
        plVar5 = (longlong *)(ulonglong)uVar3;
        plVar2 = plVar2 + 1;
      } while ((int)uVar3 < local_res10[0]);
      return;
    }
  }
  return;
}



// FUNCTION 142578240 FUN_142578240 body=34 status=ok
// SIG undefined FUN_142578240(void)

void FUN_142578240(longlong param_1)

{
  FUN_1424b6ac0(param_1 + 0x658);
  FRenderResource::UpdateRHI(param_1);
  return;
}



// FUNCTION 142578280 FUN_142578280 body=60 status=ok
// SIG undefined FUN_142578280(void)

void FUN_142578280(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = UTexture2D::GetPrivateStaticClass();
  uVar1 = FUN_141799c90(uVar1,0,L"/Engine/EngineResources/DefaultTexture.DefaultTexture",0,0,0,1);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  return;
}



// FUNCTION 1425782c0 FUN_1425782c0 body=60 status=ok
// SIG undefined FUN_1425782c0(void)

void FUN_1425782c0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = UTexture2D::GetPrivateStaticClass();
  uVar1 = FUN_141799c90(uVar1,0,L"/Engine/EngineResources/DefaultTexture.DefaultTexture",0,0,0,1);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  return;
}



// FUNCTION 142578300 SetDefaultTexture body=60 status=ok
// SIG undefined SetDefaultTexture(void)

void UMaterialExpressionTextureSampleParameterCube::SetDefaultTexture(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = UTextureCube::GetPrivateStaticClass();
  uVar1 = FUN_141799c90(uVar1,0,L"/Engine/EngineResources/DefaultTextureCube.DefaultTextureCube",0,0
                        ,0,1);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  return;
}



// FUNCTION 142578340 SetDefaultTexture body=60 status=ok
// SIG undefined SetDefaultTexture(void)

void UMaterialExpressionTextureSampleParameterVolume::SetDefaultTexture(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = UVolumeTexture::GetPrivateStaticClass();
  uVar1 = FUN_141799c90(uVar1,0,L"/Engine/EngineResources/DefaultVolumeTexture.DefaultVolumeTexture"
                        ,0,0,0,1);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  return;
}



// FUNCTION 142578380 FUN_142578380 body=108 status=ok
// SIG undefined FUN_142578380(void)

undefined8 FUN_142578380(longlong param_1,undefined1 *param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  
  *param_2 = 0;
  if (((*(byte *)(param_1 + 0x140) & 0xfc) == 0) && (*(byte *)(param_1 + 0x140) != 2)) {
    cVar1 = FUN_14256ec20(param_1,param_3);
    if ((cVar1 != '\0') || ((*(byte *)(param_1 + 0x708) & 0x40) != 0)) {
      return 1;
    }
    uVar2 = 1 << ((byte)param_3 & 0x1f);
    if ((uVar2 & *(uint *)(param_1 + 0x774)) == 0) {
      *(uint *)(param_1 + 0x774) = *(uint *)(param_1 + 0x774) | uVar2;
    }
  }
  return 0;
}



// FUNCTION 1425783f0 FUN_1425783f0 body=1534 status=ok
// SIG undefined FUN_1425783f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1425783f0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  void *_Dst;
  ulonglong uVar14;
  undefined4 *puVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  float local_48;
  float local_44;
  float local_40;
  
  lVar9 = *(longlong *)(param_3 + 0x48);
  if (*(char *)(lVar9 + 0x28) == '\0') {
    FUN_1419f3850(lVar9);
  }
  uVar4 = *(undefined8 *)(lVar9 + 0x38);
  uVar10 = (ulonglong)_tls_index;
  if (((*(char *)(param_4 + 0x339) != '\0') && (1 < *(int *)(param_5 + 0x1a38))) &&
     ((0x1d < DAT_146ab62cc || ((0x25e2efcaU >> (DAT_146ab62cc & 0x1f) & 1) == 0)))) {
    if ((DAT_146ab62cc < 0x1c) && ((0x8051000U >> (DAT_146ab62cc & 0x1f) & 1) != 0)) {
      uVar7 = RHIGetShaderLanguageVersion();
      if (uVar7 < 2) goto LAB_14257853b;
      uVar10 = (ulonglong)_tls_index;
    }
    lVar9 = *(longlong *)(param_6 + 0x50);
    if (lVar9 == 0) {
      lVar9 = *(longlong *)(param_4 + 0x758);
    }
    iVar13 = 0;
    if (0 < *(int *)(param_3 + 0x10)) {
      lVar8 = 0;
      do {
        if (*(undefined **)(*(longlong *)(param_3 + 8) + lVar8 * 8) == &DAT_146afcd60) {
          if (iVar13 != -1) {
            puVar15 = *(undefined4 **)(*(longlong *)(param_3 + 0x18) + (longlong)iVar13 * 8);
            *puVar15 = *(undefined4 *)(param_3 + 0xb8);
            goto LAB_142578520;
          }
          break;
        }
        iVar13 = iVar13 + 1;
        lVar8 = lVar8 + 1;
      } while (lVar8 < *(int *)(param_3 + 0x10));
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar10 * 8) + 0x38) <
         DAT_146afe380) && (_Init_thread_header(&DAT_146afe380), DAT_146afe380 == -1)) {
      _DAT_146afe378 = 0;
      _DAT_146afe37c = 0;
      DAT_146afe37e = 0;
      _Init_thread_footer(&DAT_146afe380);
    }
    puVar15 = (undefined4 *)&DAT_146afe378;
LAB_142578520:
    SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>(param_2,uVar4,puVar15,lVar9);
  }
LAB_14257853b:
  uVar10 = 0;
  cVar6 = *(char *)(param_6 + 0x66);
  if (cVar6 != '\0') {
    if ((*(char *)(param_4 + 0x339) != '\0') && (1 < *(int *)(param_5 + 0x1a38))) {
      if (((0x1d < DAT_146ab62cc) || ((0x25e2efcaU >> (DAT_146ab62cc & 0x1f) & 1) == 0)) &&
         (((0x1b < DAT_146ab62cc || ((0x8051000U >> (DAT_146ab62cc & 0x1f) & 1) == 0)) ||
          (uVar7 = RHIGetShaderLanguageVersion(), 1 < uVar7)))) goto LAB_142578786;
      cVar6 = *(char *)(param_6 + 0x66);
    }
    if (cVar6 != '\0') {
      puVar15 = (undefined4 *)(param_4 + 0x760);
      uVar14 = uVar10;
      uVar17 = uVar10;
      do {
        lVar9 = *(longlong *)(*(longlong *)(param_6 + 0x20) + uVar14 * 8);
        if ((-1 < (longlong)uVar14) && ((int)uVar10 < *(int *)(param_4 + 0x708))) {
          if (lVar9 == 0) {
LAB_142578696:
            lVar9 = *(longlong *)(param_4 + 0x700);
            if (*(longlong *)(param_4 + 0x700) == 0) {
              lVar9 = param_4 + 0x6e0;
            }
            if (*(longlong *)(lVar9 + uVar17) != 0) {
              uVar16 = *(undefined8 *)(*(longlong *)(lVar9 + uVar17) + 0x30);
              goto LAB_142578607;
            }
            lVar9 = FUN_141ee2f20(*(undefined1 *)(uVar14 + 0x748 + param_4));
            puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            uVar16 = *(undefined8 *)(lVar9 + 0x30);
            uVar3 = *puVar15;
            puVar11 = puVar12 + 5;
            if (*(undefined8 **)(param_2 + 0x38) < puVar11) {
              FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
              puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
              puVar11 = puVar12 + 5;
            }
            *(undefined8 **)(param_2 + 0x30) = puVar11;
            *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
            **(undefined8 **)(param_2 + 8) = puVar12;
            *(undefined8 **)(param_2 + 8) = puVar12 + 1;
            puVar12[1] = 0;
            *puVar12 = &PTR_LAB_143f489e0;
            *(undefined4 *)(puVar12 + 2) = uVar3;
          }
          else {
            lVar8 = *(longlong *)(param_4 + 0x700);
            if (*(longlong *)(param_4 + 0x700) == 0) {
              lVar8 = param_4 + 0x6e0;
            }
            if ((*(byte *)(lVar8 + 0xf + uVar17) & 2) == 0) goto LAB_142578696;
            uVar16 = *(undefined8 *)(lVar9 + 0x30);
LAB_142578607:
            uVar3 = *puVar15;
            puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar11 = puVar12 + 5;
            if (*(undefined8 **)(param_2 + 0x38) < puVar11) {
              FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
              puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
              puVar11 = puVar12 + 5;
            }
            *(undefined8 **)(param_2 + 0x30) = puVar11;
            *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
            **(undefined8 **)(param_2 + 8) = puVar12;
            *(undefined8 **)(param_2 + 8) = puVar12 + 1;
            puVar12[1] = 0;
            *puVar12 = &PTR_LAB_143f489e0;
            *(undefined4 *)(puVar12 + 2) = uVar3;
          }
          *(undefined4 *)(puVar12 + 4) = 0;
          puVar12[3] = uVar16;
        }
        uVar7 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar7;
        uVar14 = uVar14 + 1;
        puVar15 = puVar15 + 1;
        uVar17 = uVar17 + 0x10;
      } while ((int)uVar7 < (int)(uint)*(byte *)(param_6 + 0x66));
    }
  }
LAB_142578786:
  if (((*(char *)(param_1 + 0xe) != '\0') && (*(longlong *)(param_5 + 0x10) != 0)) &&
     (plVar5 = *(longlong **)(*(longlong *)(param_5 + 0x10) + 0x20), plVar5 != (longlong *)0x0)) {
    lVar9 = (**(code **)(*plVar5 + 0x1e8))(plVar5,param_4);
    if (lVar9 == 0) {
      lVar9 = DAT_146533488;
    }
    uVar10 = 0;
    if (0 < *(int *)(param_3 + 0x10)) {
      uVar14 = uVar10;
      do {
        iVar13 = (int)uVar14;
        if (*(undefined **)(*(longlong *)(param_3 + 8) + uVar10 * 8) == &DAT_146b15eb0) {
          if (iVar13 != -1) {
            puVar15 = *(undefined4 **)(*(longlong *)(param_3 + 0x18) + (longlong)iVar13 * 8);
            *puVar15 = *(undefined4 *)(param_3 + 0xb8);
            goto LAB_142578826;
          }
          break;
        }
        uVar14 = (ulonglong)(iVar13 + 1);
        uVar10 = uVar10 + 1;
      } while ((longlong)uVar10 < (longlong)*(int *)(param_3 + 0x10));
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146afe390) &&
       (_Init_thread_header(&DAT_146afe390), DAT_146afe390 == -1)) {
      _DAT_146afe388 = 0;
      _DAT_146afe38c = 0;
      DAT_146afe38e = 0;
      _Init_thread_footer(&DAT_146afe390);
    }
    puVar15 = (undefined4 *)&DAT_146afe388;
LAB_142578826:
    SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>(param_2,uVar4,puVar15,lVar9);
    if (*(short *)(param_1 + 0xc) != 0) {
      local_44 = *(float *)(param_6 + 0x60);
      local_48 = *(float *)(param_6 + 0x5c);
      local_40 = local_44 - local_48;
      uVar7 = (uint)*(ushort *)(param_1 + 0xc);
      if (0xb < *(ushort *)(param_1 + 0xc)) {
        uVar7 = 0xc;
      }
      if (uVar7 != 0) {
        uVar1 = *(ushort *)(param_1 + 10);
        uVar2 = *(ushort *)(param_1 + 8);
        _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
        uVar10 = (longlong)_Dst + (ulonglong)uVar7;
        if (*(ulonglong *)(param_2 + 0x38) < uVar10) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar7 + 0x10);
          _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
          uVar10 = (longlong)_Dst + (ulonglong)uVar7;
        }
        *(ulonglong *)(param_2 + 0x30) = uVar10;
        _guard_xfg_dispatch_icall_nop(_Dst,&local_48,(ulonglong)uVar7);
        puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar11 = puVar12 + 6;
        if (*(undefined8 **)(param_2 + 0x38) < puVar11) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
          puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar11 = puVar12 + 6;
        }
        *(undefined8 **)(param_2 + 0x30) = puVar11;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar12;
        *(undefined8 **)(param_2 + 8) = puVar12 + 1;
        puVar12[1] = 0;
        *puVar12 = &PTR_LAB_143f4d340;
        puVar12[2] = uVar4;
        puVar12[3] = _Dst;
        *(uint *)(puVar12 + 4) = (uint)uVar2;
        *(uint *)((longlong)puVar12 + 0x24) = (uint)uVar1;
        *(uint *)(puVar12 + 5) = uVar7;
      }
    }
  }
  return;
}



// FUNCTION 142578a00 FUN_142578a00 body=50 status=ok
// SIG undefined FUN_142578a00(void)

void FUN_142578a00(longlong *param_1,undefined1 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x2b8))();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142578a25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x2d8))(plVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 142578a40 SetReentrantFlag body=83 status=ok
// SIG undefined SetReentrantFlag(void)

void UMaterialFunctionInterface::SetReentrantFlag(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialFunctionInterface.h"
             ,0x7f,L"Pure virtual not implemented (%s)",
             L"UMaterialFunctionInterface::SetReentrantFlag");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialFunctionInterface.h"
             ,0x7f,L"Pure virtual not implemented (%s)",
             L"UMaterialFunctionInterface::SetReentrantFlag");
  return;
}



// FUNCTION 142578ad0 TextureIsValid body=175 status=ok
// SIG undefined TextureIsValid(void)

/* WARNING: Removing unreachable block (ram,0x000142578b5d) */

bool UMaterialExpressionAntialiasedTextureMask::TextureIsValid(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 == 0) {
    return false;
  }
  lVar1 = *(longlong *)(param_2 + 0x10);
  lVar2 = UTexture2D::GetPrivateStaticClass();
  lVar3 = UTexture2D::GetPrivateStaticClass();
  if ((*(int *)(lVar3 + 0x90) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x90)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
      == lVar3 + 0x88)) {
    return true;
  }
  return lVar1 == lVar2;
}



// FUNCTION 142578b80 FUN_142578b80 body=245 status=ok
// SIG undefined FUN_142578b80(void)

ulonglong FUN_142578b80(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  int iVar2;
  ulonglong in_RAX;
  longlong lVar3;
  byte bVar4;
  
  if (param_2 != (longlong *)0x0) {
    lVar3 = UTexture2D::GetPrivateStaticClass();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar4 = 0;
    }
    else {
      bVar4 = 1;
    }
    lVar3 = UTexture2D::GetPrivateStaticClass();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      bVar4 = 1;
    }
    lVar3 = UTexture2DDynamic::GetPrivateStaticClass();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      bVar4 = 1;
    }
    iVar2 = (**(code **)(*param_2 + 0x288))(param_2);
    if (iVar2 == 0x200000) {
      bVar4 = 1;
    }
    return (ulonglong)bVar4;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142578c80 TextureIsValid body=67 status=ok
// SIG undefined TextureIsValid(void)

bool UMaterialExpressionTextureSampleParameterVolume::TextureIsValid
               (undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar1 = *(longlong *)(param_2 + 0x10);
    lVar2 = UTexture2D::GetPrivateStaticClass();
    return lVar1 == lVar2;
  }
  return false;
}



// FUNCTION 142578cd0 TextureIsValid body=175 status=ok
// SIG undefined TextureIsValid(void)

/* WARNING: Removing unreachable block (ram,0x000142578d5d) */

bool UMaterialExpressionTextureSampleParameterCube::TextureIsValid
               (undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 == 0) {
    return false;
  }
  lVar1 = *(longlong *)(param_2 + 0x10);
  lVar2 = UTextureCube::GetPrivateStaticClass();
  lVar3 = UTextureRenderTargetCube::GetPrivateStaticClass();
  if ((*(int *)(lVar3 + 0x90) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x90)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
      == lVar3 + 0x88)) {
    return true;
  }
  return lVar1 == lVar2;
}



// FUNCTION 142578d80 FUN_142578d80 body=109 status=ok
// SIG undefined FUN_142578d80(void)

bool FUN_142578d80(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_2 != 0) {
    lVar1 = *(longlong *)(param_2 + 0x10);
    lVar3 = UVolumeTexture::GetPrivateStaticClass();
    lVar2 = *(longlong *)(param_2 + 0x10);
    lVar4 = FUN_142a25b30();
    return lVar2 == lVar4 || lVar1 == lVar3;
  }
  return false;
}



// FUNCTION 142578df0 FUN_142578df0 body=317 status=ok
// SIG undefined FUN_142578df0(void)

void FUN_142578df0(longlong param_1,float param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  DWORD DVar4;
  int iVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  
  FUN_1422406d0();
  lVar2 = DAT_146afcd58;
  if ((*(byte *)(param_1 + 0x4a1) & 8) == 0) {
    return;
  }
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar3 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar4 = GetCurrentThreadId(), DVar4 != DAT_1468c21c0)) {
    lVar6 = 4;
  }
  else {
    lVar6 = 0;
  }
  if (*(float *)(param_1 + 0x4a4) <= *(float *)(lVar6 + lVar2)) {
    fVar7 = (float)FUN_14222dcf0(param_1);
    if (fVar7 <= 1e-08) {
      fVar7 = 1e-08;
    }
    *(float *)(param_1 + 0x4a4) = param_2 / fVar7 + *(float *)(param_1 + 0x4a4);
    return;
  }
  if ((int)(uint)*(byte *)(param_1 + 0x4a0) <= (int)DAT_146afd028) {
    iVar1 = (*(int *)(param_1 + 0x488) - (uint)*(byte *)(param_1 + 0x4a0)) + (int)DAT_146afd028;
    iVar5 = iVar1 + -1;
    if ((-1 < iVar5) && (iVar5 < (int)DAT_146afd028)) {
      fVar7 = *(float *)(DAT_146afd020 + -4 + (longlong)iVar1 * 4);
      goto LAB_142578ea9;
    }
  }
  fVar7 = 0.0;
LAB_142578ea9:
  fVar8 = *(float *)(param_1 + 0x470);
  if (fVar7 != 0.0) {
    fVar8 = fVar7;
  }
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  *(float *)(*(longlong *)(param_1 + 0x458) + 0x2d8) = fVar8;
  FUN_1423424e0(*(undefined8 *)(param_1 + 0x458));
  *(byte *)(param_1 + 0x4a1) = *(byte *)(param_1 + 0x4a1) & 0xf7;
  *(undefined4 *)(param_1 + 0x4a4) = 0;
  FUN_14288e3d0(param_1 + 0x28,0);
  return;
}



// FUNCTION 142578f30 FUN_142578f30 body=234 status=ok
// SIG undefined FUN_142578f30(void)

void FUN_142578f30(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  if (param_2 != 0) {
    lVar3 = UMaterialExpressionDynamicParameter::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (iVar5 = 0, 0 < *(int *)(param_1 + 0x748))) {
      lVar3 = 0;
      do {
        lVar1 = *(longlong *)(lVar3 + *(longlong *)(param_1 + 0x740));
        if (lVar1 != 0) {
          lVar4 = UMaterialExpressionDynamicParameter::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            FUN_142569490(lVar1,param_2);
          }
        }
        iVar5 = iVar5 + 1;
        lVar3 = lVar3 + 8;
      } while (iVar5 < *(int *)(param_1 + 0x748));
    }
  }
  return;
}



// FUNCTION 142579040 UpdateFromFunctionResource body=83 status=ok
// SIG undefined UpdateFromFunctionResource(void)

void UMaterialFunctionInterface::UpdateFromFunctionResource(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialFunctionInterface.h"
             ,0x38,L"Pure virtual not implemented (%s)",
             L"UMaterialFunctionInterface::UpdateFromFunctionResource");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialFunctionInterface.h"
             ,0x38,L"Pure virtual not implemented (%s)",
             L"UMaterialFunctionInterface::UpdateFromFunctionResource");
  return;
}



// FUNCTION 1425790a0 UpdateMaterialShaders body=631 status=ok
// SIG undefined UpdateMaterialShaders(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UMaterial::UpdateMaterialShaders(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  undefined4 in_R9D;
  int iVar8;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  longlong local_138;
  ulonglong local_130;
  int local_128;
  longlong local_120;
  undefined8 local_118;
  int local_110;
  undefined1 local_108 [8];
  longlong *local_100;
  undefined1 local_e8 [192];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  FUN_14257e6f0(local_e8,6,in_R9D);
  iVar6 = 0;
  local_110 = -1;
  local_120 = 0;
  local_118 = 0;
  uVar4 = ACineCameraActor::GetPrivateStaticClass();
  local_148 = 0;
  FUN_1417a5560(uVar4,&local_120,1,0x10);
  do {
    local_110 = local_110 + 1;
    iVar5 = 0;
    if ((int)local_118 <= local_110) break;
    iVar5 = 0;
  } while (*(longlong *)(local_120 + (longlong)local_110 * 8) == 0);
  do {
    if ((local_110 < 0) || ((int)local_118 <= local_110)) break;
    iVar5 = iVar5 + 1;
    do {
      local_110 = local_110 + 1;
      if ((int)local_118 <= local_110) break;
    } while (*(longlong *)(local_120 + (longlong)local_110 * 8) == 0);
  } while( true );
  if (local_120 != 0) {
    FMemory::Free(local_120);
  }
  uVar4 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_108,L"Kicking off async material shader compiles...",L"Material",
                     L"BeginAsyncMaterialShaderCompilesTask");
  FUN_141682490(DAT_1468b6160,0,iVar5,uVar4);
  if (local_100 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_100 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  local_138 = 0;
  local_130 = 0;
  local_128 = -1;
  iVar8 = 1;
  if (0 < iVar5 / 0x14) {
    iVar8 = iVar5 / 0x14;
  }
  uVar4 = ACineCameraActor::GetPrivateStaticClass();
  local_148 = 0;
  FUN_1417a5560(uVar4,&local_138,1,0x10);
  uVar7 = local_130 & 0xffffffff;
  do {
    local_128 = local_128 + 1;
    if ((int)local_130 <= local_128) break;
  } while (*(longlong *)(local_138 + (longlong)local_128 * 8) == 0);
  do {
    do {
      if ((local_128 < 0) || ((int)uVar7 <= local_128)) {
        if (local_138 != 0) {
          FMemory::Free(local_138);
        }
        FUN_14257f760(local_e8);
        return;
      }
      uVar4 = *(undefined8 *)(local_138 + (longlong)local_128 * 8);
      FMaterialUpdateContext::AddMaterial(local_e8,uVar4);
      FUN_142568af0(uVar4,0);
      if (iVar6 % iVar8 == 0) {
        FUN_141685240(DAT_1468b6160,iVar6,iVar5);
      }
      iVar6 = iVar6 + 1;
      uVar7 = local_130 & 0xffffffff;
      local_128 = local_128 + 1;
    } while ((int)local_130 <= local_128);
    do {
      if (*(longlong *)(local_138 + (longlong)local_128 * 8) != 0) break;
      local_128 = local_128 + 1;
    } while (local_128 < (int)local_130);
  } while( true );
}



// FUNCTION 142579320 FUN_142579320 body=168 status=ok
// SIG undefined FUN_142579320(void)

void FUN_142579320(longlong param_1)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  float fVar4;
  
  bVar2 = *(byte *)(param_1 + 0x4a0);
  if (bVar2 == (uint)DAT_146afd028) {
    iVar3 = *(int *)(param_1 + 0x488);
  }
  else {
    if ((int)(uint)DAT_146afd028 <= (int)(uint)bVar2) {
      return;
    }
    iVar3 = (*(int *)(param_1 + 0x488) - (uint)bVar2) + (uint)DAT_146afd028;
  }
  iVar1 = iVar3 + -1;
  if (iVar1 == -1) {
    return;
  }
  if (((iVar1 < 0) || ((int)(uint)DAT_146afd028 <= iVar1)) ||
     (fVar4 = *(float *)(DAT_146afd020 + -4 + (longlong)iVar3 * 4), ABS(fVar4) <= 1e-08)) {
    fVar4 = *(float *)(param_1 + 0x470);
  }
  *(float *)(*(longlong *)(param_1 + 0x458) + 0x2d8) = fVar4;
  fVar4 = *(float *)(*(longlong *)(param_1 + 0x458) + 0x2d8);
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  *(float *)(*(longlong *)(param_1 + 0x458) + 0x2d8) = fVar4;
  FUN_1423424e0(*(undefined8 *)(param_1 + 0x458));
  return;
}



// FUNCTION 1425793d0 FUN_1425793d0 body=129 status=ok
// SIG undefined FUN_1425793d0(void)

void FUN_1425793d0(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  byte bVar3;
  
  if ((DAT_1465333a0 < 0) || (*(int *)(param_1 + 0x488) <= DAT_1465333a0)) {
    bVar3 = 1;
  }
  else {
    bVar3 = 0;
  }
  bVar1 = *(byte *)(*(longlong *)(param_1 + 0x458) + 0xb9);
  if ((bVar1 >> 2 & 1) != bVar3) {
    *(byte *)(*(longlong *)(param_1 + 0x458) + 0xb9) = bVar1 & 0xfb | bVar3 << 2;
    lVar2 = *(longlong *)(param_1 + 0x458);
    if (bVar3 == 0) {
      if ((*(byte *)(lVar2 + 0xb8) & 1) != 0) {
        FUN_142359580(lVar2);
        return;
      }
    }
    else if (((*(byte *)(lVar2 + 0xb8) & 1) == 0) && ((*(byte *)(param_1 + 0x4a1) & 1) != 0)) {
      FUN_14234b150(lVar2);
      return;
    }
  }
  return;
}



// FUNCTION 142579460 FUN_142579460 body=873 status=ok
// SIG undefined FUN_142579460(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142579460(longlong *param_1)

{
  longlong *plVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 *puVar9;
  longlong *plVar10;
  undefined4 *puVar11;
  int iVar12;
  longlong *plVar13;
  undefined1 auStack_b8 [32];
  int local_98 [2];
  int local_90;
  int local_8c;
  int local_88 [2];
  undefined8 local_80;
  int *local_78;
  undefined8 *local_70;
  undefined1 local_68 [8];
  undefined1 *local_60;
  undefined8 local_58;
  undefined1 local_50 [8];
  undefined1 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  iVar3 = FShaderCodeLibrary::GetRuntimeShaderPlatform();
  plVar1 = param_1 + 0xfa;
  if (iVar3 == 0x20) {
    plVar10 = (longlong *)0x0;
    puVar11 = &DAT_1464c9c48;
    plVar8 = plVar10;
    do {
      local_48 = (undefined1 *)0x0;
      local_40 = 0;
      FUN_14256d550(param_1,local_50,*puVar11);
      plVar7 = plVar10;
      plVar13 = plVar10;
      do {
        iVar3 = (int)plVar7;
        iVar12 = (int)plVar8;
        local_90 = iVar3;
        local_8c = iVar12;
        TSet<TTuple<FObjectKey,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
        ::FindId(plVar1,local_88,&local_90);
        plVar7 = plVar10;
        if (local_88[0] != -1) {
          plVar7 = (longlong *)(*plVar1 + (longlong)local_88[0] * 0x18);
        }
        plVar5 = plVar7 + 1;
        if (plVar7 == (longlong *)0x0) {
          plVar5 = plVar10;
        }
        if ((plVar5 == (longlong *)0x0) || (lVar6 = *plVar5, lVar6 == 0)) {
          local_80 = (**(code **)(*param_1 + 0x500))(param_1);
          local_78 = &local_90;
          local_70 = &local_80;
          FUN_142554c80(plVar1,local_98,&local_78,0);
          lVar6 = *(longlong *)(*plVar1 + 8 + (longlong)local_98[0] * 0x18);
        }
        puVar9 = local_50;
        if (local_48 != (undefined1 *)0x0) {
          puVar9 = local_48;
        }
        uVar2 = puVar9[(longlong)plVar13];
        plVar13 = (longlong *)((longlong)plVar13 + 1);
        *(int *)(lVar6 + 0x18) = iVar3;
        plVar7 = (longlong *)(ulonglong)(iVar3 + 1U);
        *(longlong **)(lVar6 + 0x28) = param_1;
        *(undefined8 *)(lVar6 + 0x30) = 0;
        *(undefined1 *)(lVar6 + 0x1c) = uVar2;
        *(int *)(lVar6 + 0x20) = iVar12;
      } while ((int)(iVar3 + 1U) < 3);
      if (local_48 != (undefined1 *)0x0) {
        FMemory::Free();
      }
      plVar8 = (longlong *)(ulonglong)(iVar12 + 1U);
      puVar11 = puVar11 + 1;
    } while ((int)(iVar12 + 1U) < 4);
  }
  else {
    uVar4 = FUN_1419ef5f0(iVar3);
    plVar7 = (longlong *)0x0;
    local_60 = (undefined1 *)0x0;
    local_58 = 0;
    FUN_14256d550(param_1,local_68,iVar3);
    lVar6 = FUN_1428742e0();
    plVar8 = plVar7;
    plVar10 = plVar7;
    if (*(int *)(lVar6 + 0x10) == 1) {
      lVar6 = FUN_1428742e0();
      iVar3 = *(int *)(lVar6 + 0xc);
      local_90 = iVar3;
      local_8c = uVar4;
      TSet<TTuple<FObjectKey,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
      ::FindId(plVar1,local_98,&local_90);
      if (local_98[0] != -1) {
        plVar8 = (longlong *)(*plVar1 + (longlong)local_98[0] * 0x18);
      }
      plVar10 = plVar8 + 1;
      if (plVar8 == (longlong *)0x0) {
        plVar10 = plVar7;
      }
      if ((plVar10 == (longlong *)0x0) || (lVar6 = *plVar10, lVar6 == 0)) {
        local_80 = (**(code **)(*param_1 + 0x500))(param_1);
        local_78 = &local_90;
        local_70 = &local_80;
        FUN_142554c80(plVar1,local_98,&local_78,0);
        lVar6 = *(longlong *)(*plVar1 + 8 + (longlong)local_98[0] * 0x18);
      }
      puVar9 = local_68;
      if (local_60 != (undefined1 *)0x0) {
        puVar9 = local_60;
      }
      *(undefined1 *)(lVar6 + 0x1c) = puVar9[iVar3];
      *(longlong **)(lVar6 + 0x28) = param_1;
      *(undefined8 *)(lVar6 + 0x30) = 0;
      *(int *)(lVar6 + 0x18) = iVar3;
      *(undefined4 *)(lVar6 + 0x20) = uVar4;
    }
    else {
      do {
        iVar3 = (int)plVar8;
        local_90 = iVar3;
        local_8c = uVar4;
        TSet<TTuple<FObjectKey,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
        ::FindId(plVar1,local_98,&local_90);
        plVar8 = plVar7;
        if (local_98[0] != -1) {
          plVar8 = (longlong *)(*plVar1 + (longlong)local_98[0] * 0x18);
        }
        plVar13 = plVar8 + 1;
        if (plVar8 == (longlong *)0x0) {
          plVar13 = plVar7;
        }
        if ((plVar13 == (longlong *)0x0) || (lVar6 = *plVar13, lVar6 == 0)) {
          local_80 = (**(code **)(*param_1 + 0x500))(param_1);
          local_78 = &local_90;
          local_70 = &local_80;
          FUN_142554c80(plVar1,local_88,&local_78,0);
          lVar6 = *(longlong *)(*plVar1 + 8 + (longlong)local_88[0] * 0x18);
        }
        puVar9 = local_68;
        if (local_60 != (undefined1 *)0x0) {
          puVar9 = local_60;
        }
        uVar2 = puVar9[(longlong)plVar10];
        *(int *)(lVar6 + 0x18) = iVar3;
        *(longlong **)(lVar6 + 0x28) = param_1;
        *(undefined8 *)(lVar6 + 0x30) = 0;
        *(undefined1 *)(lVar6 + 0x1c) = uVar2;
        *(undefined4 *)(lVar6 + 0x20) = uVar4;
        plVar8 = (longlong *)(ulonglong)(iVar3 + 1U);
        plVar10 = (longlong *)((longlong)plVar10 + 1);
      } while ((int)(iVar3 + 1U) < 3);
    }
    if (local_60 != (undefined1 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1425797d0 FUN_1425797d0 body=151 status=ok
// SIG undefined FUN_1425797d0(void)

void FUN_1425797d0(undefined8 param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468509e4) {
    _Init_thread_header(&DAT_1468509e4);
    if (DAT_1468509e4 == -1) {
      uVar1 = FCommandLine::Get();
      DAT_1468509e0 = FParse::Param(uVar1,L"nullrhi");
      _Init_thread_footer(&DAT_1468509e4);
    }
  }
  if (((DAT_1468b616c == '\0') || (DAT_1468b616d != '\0')) && (DAT_1468509e0 == '\0')) {
    FUN_142579460(param_1);
    return;
  }
  return;
}



// FUNCTION 142579890 ValidateFunctionUsage body=85 status=ok
// SIG undefined ValidateFunctionUsage(void)

undefined1 UMaterialFunctionInterface::ValidateFunctionUsage(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialFunctionInterface.h"
             ,0x3e,L"Pure virtual not implemented (%s)",
             L"UMaterialFunctionInterface::ValidateFunctionUsage");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialFunctionInterface.h"
             ,0x3e,L"Pure virtual not implemented (%s)",
             L"UMaterialFunctionInterface::ValidateFunctionUsage");
  return 0;
}



// FUNCTION 1425798f0 FUN_1425798f0 body=1568 status=ok
// SIG undefined FUN_1425798f0(void)

ulonglong FUN_1425798f0(longlong param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined2 *puVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  byte bVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  ulonglong local_res8;
  longlong *local_res10;
  char local_res18;
  int local_res20;
  int local_f8;
  int local_f4;
  longlong local_e8;
  longlong local_e0;
  undefined8 local_d8;
  longlong local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  int local_98;
  longlong *local_90;
  int local_88;
  undefined2 *local_80;
  int local_78;
  undefined2 *local_70;
  int local_68;
  undefined2 *local_60;
  int local_58;
  
  plVar1 = *(longlong **)(param_1 + 0x100);
  plVar6 = plVar1;
  if (plVar1 == (longlong *)0x0) {
    plVar6 = (longlong *)(param_1 + 0x90);
  }
  lVar9 = plVar6[1];
  local_f8 = 0;
  plVar13 = plVar1 + 2;
  if (plVar1 == (longlong *)0x0) {
    plVar13 = (longlong *)(param_1 + 0xa0);
  }
  bVar14 = 1;
  local_res8 = CONCAT71(local_res8._1_7_,1);
  local_a8 = plVar1 + 4;
  if (plVar1 == (longlong *)0x0) {
    local_a8 = (longlong *)(param_1 + 0xb0);
  }
  lVar17 = plVar13[1];
  iVar10 = 0;
  lVar11 = 0;
  local_res20 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_b8 = plVar6;
  if (0 < (longlong)(int)lVar9) {
    do {
      plVar1 = *(longlong **)(*plVar6 + lVar11 * 8);
      if (plVar1 != (longlong *)0x0) {
        cVar3 = (**(code **)(*plVar1 + 0x278))();
        if (cVar3 == '\x01') {
          lVar5 = UMaterialFunctionInstance::GetPrivateStaticClass();
          if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
              != lVar5 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            if (plVar1[8] == 0) {
              if ((param_3 != '\0') && (param_2 != (longlong *)0x0)) {
                local_res8 = plVar1[3];
                FName::ToString(&local_res8,&local_90);
                plVar6 = (longlong *)&DAT_143f3eda8;
                if (local_88 != 0) {
                  plVar6 = local_90;
                }
                FMaterialCompiler::Errorf
                          (param_2,L"Layer %i, %s, layer instance has no parent set.",iVar10,plVar6)
                ;
                plVar6 = local_90;
                goto LAB_142579a98;
              }
              goto LAB_142579aa2;
            }
          }
          else {
            local_e0 = 0;
            local_d8 = 0;
            FUN_142555b70(plVar1,&local_e0,0);
            if (1 < (int)local_d8) {
              if ((param_3 != '\0') && (param_2 != (longlong *)0x0)) {
                local_res8 = plVar1[3];
                FName::ToString(&local_res8,&local_a0);
                plVar6 = (longlong *)&DAT_143f3eda8;
                if (local_98 != 0) {
                  plVar6 = local_a0;
                }
                FMaterialCompiler::Errorf
                          (param_2,L"Layer %i, %s, must have one MaterialAttributes input only.",
                           iVar10,plVar6);
                if (local_a0 != (longlong *)0x0) {
                  FMemory::Free();
                }
              }
              bVar14 = 0;
            }
            if (local_e0 != 0) {
              FMemory::Free();
            }
          }
        }
        else {
          if ((param_3 != '\0') && (param_2 != (longlong *)0x0)) {
            local_res8 = plVar1[3];
            FName::ToString(&local_res8,&local_c8);
            plVar6 = (longlong *)&DAT_143f3eda8;
            if ((int)local_c0 != 0) {
              plVar6 = local_c8;
            }
            FMaterialCompiler::Errorf
                      (param_2,L"Layer %i, %s, not set for layer usage.",iVar10,plVar6);
            plVar6 = local_c8;
LAB_142579a98:
            if (plVar6 != (longlong *)0x0) {
              FMemory::Free();
            }
          }
LAB_142579aa2:
          bVar14 = 0;
        }
        plVar6 = local_b8;
        if (*(char *)(lVar11 + *local_a8) != '\0') {
          local_f8 = local_f8 + 1;
        }
      }
      iVar10 = iVar10 + 1;
      lVar11 = lVar11 + 1;
    } while (lVar11 < (int)lVar9);
    local_res8 = CONCAT71(local_res8._1_7_,bVar14);
  }
  lVar9 = (longlong)(int)lVar17;
  local_f4 = 0;
  local_e8 = 0;
  local_d0 = lVar9;
  if (0 < (int)lVar17) {
    do {
      cVar3 = local_res18;
      plVar6 = *(longlong **)(*plVar13 + local_e8 * 8);
      local_90 = plVar6;
      if (plVar6 != (longlong *)0x0) {
        cVar4 = (**(code **)(*plVar6 + 0x278))(plVar6);
        if (cVar4 == '\x02') {
          lVar9 = UMaterialFunctionInstance::GetPrivateStaticClass();
          if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
              != lVar9 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) {
            lVar17 = 0;
            iVar15 = 0;
            local_e0 = 0;
            local_d8 = local_d8 & 0xffffffff;
            iVar10 = 0;
            lVar9 = (**(code **)(*plVar6 + 0x2b8))(plVar6);
            if (lVar9 == 0) {
LAB_142579dca:
              if ((local_res18 != '\0') && (param_2 != (longlong *)0x0)) {
                local_res8 = plVar6[3];
                FName::ToString(&local_res8,&local_60);
                puVar8 = &DAT_143f3eda8;
                if (local_58 != 0) {
                  puVar8 = local_60;
                }
                FMaterialCompiler::Errorf
                          (param_2,L"Blend %i, %s, must have two MaterialAttributes inputs only.",
                           local_f4,puVar8);
                if (local_60 != (undefined2 *)0x0) {
                  FMemory::Free();
                }
              }
              local_res8 = local_res8 & 0xffffffffffffff00;
              bVar14 = 0;
            }
            else {
              local_c0 = 1;
              local_c8 = (longlong *)0x0;
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_c8,0);
              *local_c8 = lVar9;
              local_b0 = local_c8;
              local_a0 = local_c8 + (int)local_c0;
              if (local_c8 != local_a0) {
                do {
                  plVar6 = (longlong *)(**(code **)(*(longlong *)*local_b0 + 0x2c0))();
                  plVar12 = (longlong *)*plVar6;
                  plVar1 = plVar12 + (int)plVar6[1];
                  param_2 = local_res10;
                  plVar6 = local_90;
                  for (; local_res10 = param_2, local_90 = plVar6, plVar12 != plVar1;
                      plVar12 = plVar12 + 1) {
                    lVar9 = *plVar12;
                    iVar16 = iVar10;
                    if (lVar9 != 0) {
                      lVar11 = UTextureRenderTarget2D::GetPrivateStaticClass();
                      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90))
                         || (*(longlong *)
                              (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
                              (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
                        bVar2 = false;
                      }
                      else {
                        bVar2 = true;
                      }
                      if (bVar2) {
                        iVar16 = iVar10 + 1;
                        local_d8 = CONCAT44(local_d8._4_4_,iVar16);
                        if (iVar15 < iVar16) {
                          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                                    (&local_e0,iVar10);
                          lVar17 = local_e0;
                          iVar16 = (int)local_d8;
                          iVar15 = local_d8._4_4_;
                        }
                        *(longlong *)(lVar17 + (longlong)iVar10 * 8) = lVar9;
                      }
                    }
                    param_2 = local_res10;
                    plVar6 = local_90;
                    iVar10 = iVar16;
                  }
                  local_b0 = local_b0 + 1;
                } while (local_b0 != local_a0);
              }
              if (local_c8 != (longlong *)0x0) {
                FMemory::Free();
              }
              if (iVar10 != 2) goto LAB_142579dca;
              bVar14 = (byte)local_res8;
            }
            lVar9 = local_d0;
            if (lVar17 != 0) {
              FMemory::Free(lVar17);
              lVar9 = local_d0;
            }
            goto LAB_142579e43;
          }
          lVar9 = local_d0;
          if (plVar6[8] != 0) goto LAB_142579e43;
          if ((cVar3 != '\0') && (param_2 != (longlong *)0x0)) {
            local_res8 = plVar6[3];
            FName::ToString(&local_res8,&local_70);
            puVar8 = &DAT_143f3eda8;
            if (local_68 != 0) {
              puVar8 = local_70;
            }
            FMaterialCompiler::Errorf
                      (param_2,L"Blend %i, %s, layer instance has no parent set.",local_f4,puVar8);
            puVar8 = local_70;
            goto LAB_142579bfc;
          }
        }
        else if ((cVar3 != '\0') && (param_2 != (longlong *)0x0)) {
          local_res8 = plVar6[3];
          FName::ToString(&local_res8,&local_80);
          puVar8 = &DAT_143f3eda8;
          if (local_78 != 0) {
            puVar8 = local_80;
          }
          FMaterialCompiler::Errorf
                    (param_2,L"Blend %i, %s, not set for layer blend usage.",local_f4,puVar8);
          puVar8 = local_80;
LAB_142579bfc:
          if (puVar8 != (undefined2 *)0x0) {
            FMemory::Free();
          }
        }
        bVar14 = 0;
        local_res8 = local_res8 & 0xffffffffffffff00;
        lVar9 = local_d0;
      }
LAB_142579e43:
      if ((*(longlong *)(*local_b8 + 8 + local_e8 * 8) != 0) &&
         (*(char *)(*local_a8 + 1 + local_e8) != '\0')) {
        local_res20 = local_res20 + 1;
      }
      local_f4 = local_f4 + 1;
      local_e8 = local_e8 + 1;
    } while (local_e8 < lVar9);
  }
  cVar3 = local_res18;
  if ((local_f8 == 0) || (local_f8 == 1)) {
    if (local_res20 == 0) goto LAB_142579e93;
  }
  else if ((1 < local_f8) && (local_res20 == local_f8 + -1)) goto LAB_142579e93;
  if ((local_res18 != '\0') && (param_2 != (longlong *)0x0)) {
    FMaterialCompiler::Errorf
              (param_2,L"Invalid number of layers (%i) or blends (%i) assigned.",local_f8,
               local_res20);
  }
  bVar14 = 0;
LAB_142579e93:
  if ((param_2 == (longlong *)0x0) ||
     (uVar7 = (**(code **)(*param_2 + 0xa8))(param_2), (int)uVar7 < 2)) {
    uVar7 = (ulonglong)bVar14;
  }
  else {
    if (cVar3 != '\0') {
      uVar7 = FMaterialCompiler::Errorf
                        (param_2,L"Layer expressions cannot be used within a material function.");
    }
    uVar7 = uVar7 & 0xffffffffffffff00;
  }
  return uVar7;
}



// FUNCTION 142579f20 FUN_142579f20 body=618 status=ok
// SIG undefined FUN_142579f20(void)

longlong * FUN_142579f20(longlong *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  *param_1 = 0;
  param_1[1] = 1;
  TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,0);
  puVar3 = (undefined8 *)*param_1;
  *puVar3 = L"VertexFetch_Parameters";
  puVar3[1] = &DAT_143f3eda8;
  *(undefined4 *)(puVar3 + 2) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x14) = 2;
  *(undefined4 *)(puVar3 + 3) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x1c) = 1;
  *(undefined4 *)(puVar3 + 4) = 4;
  *(undefined4 *)((longlong)puVar3 + 0x24) = 0;
  *(undefined4 *)(puVar3 + 5) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x2c) = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"VertexFetch_DefaultColors";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x10;
  puVar1[1] = 4;
  puVar1[2] = 0;
  puVar1[3] = 1;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 4;
  puVar1[1] = 2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"VertexFetch_ColorChannelMasks";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x30;
  puVar1[1] = 2;
  puVar1[2] = 0;
  puVar1[3] = 1;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 2;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"VertexFetch_TexCoordBuffer";
  puVar3[1] = L"Buffer<float2>";
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x38;
  puVar1[1] = 6;
  puVar1[2] = 0;
  puVar1[3] = 1;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"VertexFetch_PackedTangentsBuffer";
  puVar3[1] = L"Buffer<float4>";
  puVar3 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar3 = 0x600000040;
  puVar3[1] = 0x100000000;
  puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar3 = 1;
  puVar3[1] = 0;
  return param_1;
}



// FUNCTION 14257a350 FUN_14257a350 body=182 status=ok
// SIG undefined FUN_14257a350(void)

void FUN_14257a350(undefined8 *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(param_1,param_3 + param_5,param_4);
  if (param_3 != 0) {
    puVar2 = (undefined1 *)(param_2 + 10);
    puVar3 = (undefined8 *)*param_1;
    do {
      *puVar3 = *(undefined8 *)(puVar2 + -10);
      *(undefined2 *)(puVar3 + 1) = *(undefined2 *)(puVar2 + -2);
      *(undefined1 *)((longlong)puVar3 + 10) = *puVar2;
      *(undefined1 *)((longlong)puVar3 + 0xb) = puVar2[1];
      *(undefined4 *)((longlong)puVar3 + 0xc) = *(undefined4 *)(puVar2 + 2);
      puVar3[2] = *(undefined8 *)(puVar2 + 6);
      *(undefined4 *)(puVar3 + 3) = *(undefined4 *)(puVar2 + 0xe);
      uVar1 = *(undefined8 *)(puVar2 + 0x1a);
      *(undefined8 *)((longlong)puVar3 + 0x1c) = *(undefined8 *)(puVar2 + 0x12);
      *(undefined8 *)((longlong)puVar3 + 0x24) = uVar1;
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 0x30;
      puVar3 = puVar3 + 6;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14257a410 FUN_14257a410 body=174 status=ok
// SIG undefined FUN_14257a410(void)

void FUN_14257a410(undefined8 *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FActorSequenceObjectReference,FDefaultAllocator>::ResizeForCopy
            (param_1,param_3 + param_5,param_4);
  if (param_3 != 0) {
    puVar2 = (undefined1 *)(param_2 + 10);
    puVar3 = (undefined8 *)*param_1;
    do {
      *puVar3 = *(undefined8 *)(puVar2 + -10);
      *(undefined2 *)(puVar3 + 1) = *(undefined2 *)(puVar2 + -2);
      *(undefined1 *)((longlong)puVar3 + 10) = *puVar2;
      *(undefined1 *)((longlong)puVar3 + 0xb) = puVar2[1];
      *(undefined4 *)((longlong)puVar3 + 0xc) = *(undefined4 *)(puVar2 + 2);
      *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(puVar2 + 6);
      uVar1 = *(undefined8 *)(puVar2 + 0x12);
      *(undefined8 *)((longlong)puVar3 + 0x14) = *(undefined8 *)(puVar2 + 10);
      *(undefined8 *)((longlong)puVar3 + 0x1c) = uVar1;
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 0x28;
      puVar3 = puVar3 + 5;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14257a4c0 FUN_14257a4c0 body=203 status=ok
// SIG undefined FUN_14257a4c0(void)

void FUN_14257a4c0(undefined8 *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FActorSequenceObjectReference,FDefaultAllocator>::ResizeForCopy
            (param_1,param_3 + param_5,param_4);
  if (param_3 != 0) {
    puVar2 = (undefined1 *)(param_2 + 10);
    puVar3 = (undefined8 *)*param_1;
    do {
      *puVar3 = *(undefined8 *)(puVar2 + -10);
      *(undefined2 *)(puVar3 + 1) = *(undefined2 *)(puVar2 + -2);
      *(undefined1 *)((longlong)puVar3 + 10) = *puVar2;
      *(undefined1 *)((longlong)puVar3 + 0xb) = puVar2[1];
      *(undefined4 *)((longlong)puVar3 + 0xc) = *(undefined4 *)(puVar2 + 2);
      *(undefined1 *)(puVar3 + 2) = puVar2[6];
      *(undefined1 *)((longlong)puVar3 + 0x11) = puVar2[7];
      *(undefined1 *)((longlong)puVar3 + 0x12) = puVar2[8];
      *(undefined1 *)((longlong)puVar3 + 0x13) = puVar2[9];
      *(undefined1 *)((longlong)puVar3 + 0x14) = puVar2[10];
      uVar1 = *(undefined8 *)(puVar2 + 0x16);
      puVar3[3] = *(undefined8 *)(puVar2 + 0xe);
      puVar3[4] = uVar1;
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 0x28;
      puVar3 = puVar3 + 5;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14257a590 FUN_14257a590 body=393 status=ok
// SIG undefined FUN_14257a590(void)

void FUN_14257a590(longlong *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined8 *puVar8;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FExposedValueCopyRecord,FDefaultAllocator>::ResizeForCopy
            (param_1,param_3 + param_5,param_4);
  puVar8 = (undefined8 *)*param_1;
  if (param_3 != 0) {
    piVar7 = (int *)(param_2 + 0x38);
    puVar6 = (undefined4 *)((longlong)puVar8 + 0x2c);
    do {
      *puVar8 = *(undefined8 *)(piVar7 + -0xe);
      *(short *)(puVar6 + -9) = (short)piVar7[-0xc];
      *(undefined1 *)((longlong)puVar6 + -0x22) = *(undefined1 *)((longlong)piVar7 + -0x2e);
      *(undefined1 *)((longlong)puVar6 + -0x21) = *(undefined1 *)((longlong)piVar7 + -0x2d);
      puVar6[-8] = piVar7[-0xb];
      *(undefined8 *)(puVar6 + -7) = 0;
      iVar2 = piVar7[-8];
      pvVar3 = *(void **)(piVar7 + -10);
      puVar6[-5] = iVar2;
      if (iVar2 == 0) {
        puVar6[-4] = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar6 + -7,iVar2,0);
        _guard_xfg_dispatch_icall_nop(*(void **)(puVar6 + -7),pvVar3,(longlong)iVar2 << 3);
      }
      *(undefined8 *)(puVar6 + -3) = 0;
      iVar2 = piVar7[-4];
      pvVar3 = *(void **)(piVar7 + -6);
      puVar6[-1] = iVar2;
      if (iVar2 == 0) {
        *puVar6 = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar6 + -3,iVar2,0);
        _guard_xfg_dispatch_icall_nop(*(void **)(puVar6 + -3),pvVar3,(longlong)iVar2 << 3);
      }
      *(undefined8 *)(puVar6 + 1) = 0;
      iVar2 = *piVar7;
      pvVar3 = *(void **)(piVar7 + -2);
      puVar6[3] = iVar2;
      if (iVar2 == 0) {
        puVar6[4] = 0;
      }
      else {
        TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(puVar6 + 1,iVar2,0);
        _guard_xfg_dispatch_icall_nop(*(void **)(puVar6 + 1),pvVar3,(longlong)iVar2);
      }
      FString::FString(puVar6 + 5,piVar7 + 2);
      puVar8 = puVar8 + 0xd;
      *(char *)(puVar6 + 9) = (char)piVar7[6];
      piVar1 = piVar7 + 7;
      iVar2 = piVar7[8];
      iVar4 = piVar7[9];
      iVar5 = piVar7[10];
      piVar7 = piVar7 + 0x1a;
      puVar6[10] = *piVar1;
      puVar6[0xb] = iVar2;
      puVar6[0xc] = iVar4;
      puVar6[0xd] = iVar5;
      puVar6 = puVar6 + 0x1a;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14257a720 FUN_14257a720 body=182 status=ok
// SIG undefined FUN_14257a720(void)

void FUN_14257a720(undefined8 *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FActorSequenceObjectReference,FDefaultAllocator>::ResizeForCopy
            (param_1,param_3 + param_5,param_4);
  if (param_3 != 0) {
    puVar2 = (undefined1 *)(param_2 + 10);
    puVar3 = (undefined8 *)*param_1;
    do {
      *puVar3 = *(undefined8 *)(puVar2 + -10);
      *(undefined2 *)(puVar3 + 1) = *(undefined2 *)(puVar2 + -2);
      *(undefined1 *)((longlong)puVar3 + 10) = *puVar2;
      *(undefined1 *)((longlong)puVar3 + 0xb) = puVar2[1];
      *(undefined4 *)((longlong)puVar3 + 0xc) = *(undefined4 *)(puVar2 + 2);
      *(undefined1 *)(puVar3 + 2) = puVar2[6];
      *(undefined1 *)((longlong)puVar3 + 0x11) = puVar2[7];
      uVar1 = *(undefined8 *)(puVar2 + 0x12);
      *(undefined8 *)((longlong)puVar3 + 0x14) = *(undefined8 *)(puVar2 + 10);
      *(undefined8 *)((longlong)puVar3 + 0x1c) = uVar1;
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 0x28;
      puVar3 = puVar3 + 5;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14257a7e0 FUN_14257a7e0 body=188 status=ok
// SIG undefined FUN_14257a7e0(void)

void FUN_14257a7e0(undefined8 *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(param_1,param_3 + param_5,param_4);
  if (param_3 != 0) {
    puVar2 = (undefined1 *)(param_2 + 10);
    puVar3 = (undefined8 *)*param_1;
    do {
      *puVar3 = *(undefined8 *)(puVar2 + -10);
      *(undefined2 *)(puVar3 + 1) = *(undefined2 *)(puVar2 + -2);
      *(undefined1 *)((longlong)puVar3 + 10) = *puVar2;
      *(undefined1 *)((longlong)puVar3 + 0xb) = puVar2[1];
      *(undefined4 *)((longlong)puVar3 + 0xc) = *(undefined4 *)(puVar2 + 2);
      *(undefined1 *)(puVar3 + 2) = puVar2[6];
      uVar1 = *(undefined8 *)(puVar2 + 0x12);
      *(undefined8 *)((longlong)puVar3 + 0x14) = *(undefined8 *)(puVar2 + 10);
      *(undefined8 *)((longlong)puVar3 + 0x1c) = uVar1;
      *(undefined4 *)((longlong)puVar3 + 0x24) = *(undefined4 *)(puVar2 + 0x1a);
      *(undefined1 *)(puVar3 + 5) = puVar2[0x1e];
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 0x30;
      puVar3 = puVar3 + 6;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14257a8a0 FUN_14257a8a0 body=176 status=ok
// SIG undefined FUN_14257a8a0(void)

void FUN_14257a8a0(undefined8 *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FActorSequenceObjectReference,FDefaultAllocator>::ResizeForCopy
            (param_1,param_3 + param_5,param_4);
  if (param_3 != 0) {
    puVar2 = (undefined1 *)(param_2 + 10);
    puVar3 = (undefined8 *)*param_1;
    do {
      *puVar3 = *(undefined8 *)(puVar2 + -10);
      *(undefined2 *)(puVar3 + 1) = *(undefined2 *)(puVar2 + -2);
      *(undefined1 *)((longlong)puVar3 + 10) = *puVar2;
      *(undefined1 *)((longlong)puVar3 + 0xb) = puVar2[1];
      *(undefined4 *)((longlong)puVar3 + 0xc) = *(undefined4 *)(puVar2 + 2);
      puVar3[2] = *(undefined8 *)(puVar2 + 6);
      uVar1 = *(undefined8 *)(puVar2 + 0x16);
      puVar3[3] = *(undefined8 *)(puVar2 + 0xe);
      puVar3[4] = uVar1;
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 0x28;
      puVar3 = puVar3 + 5;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14257a950 FUN_14257a950 body=176 status=ok
// SIG undefined FUN_14257a950(void)

void FUN_14257a950(undefined8 *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(param_1,param_3 + param_5,param_4);
  if (param_3 != 0) {
    puVar2 = (undefined1 *)(param_2 + 10);
    puVar3 = (undefined8 *)*param_1;
    do {
      *puVar3 = *(undefined8 *)(puVar2 + -10);
      *(undefined2 *)(puVar3 + 1) = *(undefined2 *)(puVar2 + -2);
      *(undefined1 *)((longlong)puVar3 + 10) = *puVar2;
      *(undefined1 *)((longlong)puVar3 + 0xb) = puVar2[1];
      *(undefined4 *)((longlong)puVar3 + 0xc) = *(undefined4 *)(puVar2 + 2);
      uVar1 = *(undefined8 *)(puVar2 + 0xe);
      puVar3[2] = *(undefined8 *)(puVar2 + 6);
      puVar3[3] = uVar1;
      uVar1 = *(undefined8 *)(puVar2 + 0x1e);
      puVar3[4] = *(undefined8 *)(puVar2 + 0x16);
      puVar3[5] = uVar1;
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 0x30;
      puVar3 = puVar3 + 6;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14257aa00 Emplace<TKeyInitializer<FVertexFactoryType_const_*_const_&>_> body=456 status=ok
// SIG undefined Emplace<TKeyInitializer<FVertexFactoryType_const_*_const_&>_>(void)

int * TSet<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<FVertexFactoryType_const_*_const_&>_>
                (longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  char cVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  void *_Dst;
  uint uVar6;
  bool bVar7;
  int local_res8 [2];
  int local_38 [2];
  ulonglong *local_30;
  
  TSparseArray<TSetElement<TTuple<FName,FNameArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  bVar7 = false;
  *param_2 = local_38[0];
  *local_30 = *(ulonglong *)*param_3;
  local_30[1] = 0;
  local_30[2] = 0;
  *(undefined4 *)(local_30 + 3) = 0xffffffff;
  iVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar5 != 1) {
    TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8);
    bVar7 = local_res8[0] != -1;
    if (bVar7) {
      _Dst = (void *)((longlong)local_res8[0] * 0x20 + *param_1);
      if (*(longlong *)((longlong)_Dst + 8) != 0) {
        FMemory::Free();
      }
      ::_guard_xfg_dispatch_icall_nop(_Dst,local_30,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_14257ab9f;
    }
  }
  cVar1 = TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar5,0);
  if (cVar1 == '\0') {
    iVar5 = (int)(*local_30 >> 4);
    uVar4 = 0x9e3779b9U - iVar5 ^ iVar5 << 8;
    uVar6 = -(uVar4 + iVar5) ^ uVar4 >> 0xd;
    uVar3 = (iVar5 - uVar4) - uVar6 ^ uVar6 >> 0xc;
    uVar4 = (uVar4 - uVar3) - uVar6 ^ uVar3 << 0x10;
    uVar6 = (uVar6 - uVar4) - uVar3 ^ uVar4 >> 5;
    uVar3 = (uVar3 - uVar4) - uVar6 ^ uVar6 >> 3;
    uVar4 = (uVar4 - uVar3) - uVar6 ^ uVar3 << 10;
    uVar3 = ((uVar6 - uVar4) - uVar3 ^ uVar4 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_30 + 0x1c) = uVar3;
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 3) =
         *(undefined4 *)
          ((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar3) * 4);
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar3) * 4) =
         *param_2;
  }
LAB_14257ab9f:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar7;
  }
  return param_2;
}



// FUNCTION 14257abd0 FUN_14257abd0 body=655 status=ok
// SIG undefined FUN_14257abd0(void)

uint * FUN_14257abd0(longlong *param_1,uint *param_2,longlong *param_3,undefined1 *param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  uint uVar9;
  uint uVar10;
  undefined1 uVar11;
  longlong lVar12;
  int iVar13;
  void *_Dst;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  longlong *_Src;
  bool bVar18;
  uint local_res8 [2];
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar15 = (ulonglong)*(uint *)(param_1 + 1);
    iVar7 = *(uint *)(param_1 + 1) + 1;
    *(int *)(param_1 + 1) = iVar7;
    if (*(int *)((longlong)param_1 + 0xc) < iVar7) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,uVar15);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar15 = (ulonglong)(int)param_1[6];
    iVar13 = *(int *)(uVar15 * 0x20 + 4 + *param_1);
    iVar7 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar13;
    *(int *)((longlong)param_1 + 0x34) = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)((longlong)iVar13 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar8 = (longlong *)param_1[4];
  uVar14 = (uint)uVar15;
  *param_2 = uVar14;
  iVar7 = 0;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar8 +
                   (longlong)((int)(uVar14 + ((int)uVar14 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar15 & 0x1f);
  puVar2 = (undefined4 *)*param_3;
  plVar8 = (longlong *)param_3[1];
  _Src = (longlong *)((longlong)(int)uVar14 * 0x20 + *param_1);
  uVar3 = puVar2[1];
  uVar4 = puVar2[2];
  uVar5 = puVar2[3];
  *(undefined4 *)_Src = *puVar2;
  *(undefined4 *)((longlong)_Src + 4) = uVar3;
  *(undefined4 *)(_Src + 1) = uVar4;
  *(undefined4 *)((longlong)_Src + 0xc) = uVar5;
  _Src[2] = *plVar8;
  *plVar8 = 0;
  *(undefined4 *)(_Src + 3) = 0xffffffff;
  iVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar13 != 1) {
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,_Src);
    uVar14 = local_res8[0];
    lVar12 = (longlong)(int)local_res8[0];
    bVar18 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar18);
    if (bVar18) {
      _Dst = (void *)(lVar12 * 0x20 + *param_1);
      if (*(longlong *)((longlong)_Dst + 0x10) != 0) {
        FShader::Release();
        uVar15 = (ulonglong)*param_2;
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,uVar15 & 0xffffffff,1);
      *param_2 = uVar14;
      uVar11 = (undefined1)local_res8[0];
      goto LAB_14257ae36;
    }
  }
  uVar11 = 0;
  cVar6 = TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar13,0);
  if (cVar6 == '\0') {
    uVar14 = *param_2;
    if (*_Src != 0) {
      iVar7 = *(int *)(*_Src + 0xc);
    }
    uVar10 = *(uint *)(_Src + 1);
    uVar16 = iVar7 - uVar10 ^ uVar10 >> 0xd;
    uVar9 = (-0x61c88647 - uVar16) - uVar10 ^ uVar16 << 8;
    uVar17 = (uVar10 - uVar9) - uVar16 ^ uVar9 >> 0xd;
    uVar16 = (uVar16 - uVar9) - uVar17 ^ uVar17 >> 0xc;
    uVar10 = (uVar9 - uVar16) - uVar17 ^ uVar16 << 0x10;
    uVar17 = (uVar17 - uVar10) - uVar16 ^ uVar10 >> 5;
    uVar9 = (uVar16 - uVar10) - uVar17 ^ uVar17 >> 3;
    uVar10 = (uVar10 - uVar9) - uVar17 ^ uVar9 << 10;
    uVar10 = ((uVar17 - uVar10) - uVar9 ^ uVar10 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x1c) = uVar10;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 3) =
         *(undefined4 *)
          ((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(uint *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         uVar14;
  }
LAB_14257ae36:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = uVar11;
  }
  return param_2;
}



// FUNCTION 14257ae60 FUN_14257ae60 body=529 status=ok
// SIG undefined FUN_14257ae60(void)

int * FUN_14257ae60(longlong *param_1,int *param_2,longlong *param_3,undefined1 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  longlong *plVar11;
  longlong lVar12;
  bool bVar13;
  int local_38 [2];
  undefined8 *local_30;
  
  TSparseArray<TSetElement<TTuple<wchar_t,FCharacterList::FCharacterListEntry>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  puVar1 = (undefined8 *)param_3[1];
  bVar13 = false;
  *param_2 = local_38[0];
  puVar2 = (undefined8 *)*param_3;
  uVar7 = puVar2[1];
  *local_30 = *puVar2;
  local_30[1] = uVar7;
  uVar7 = puVar2[3];
  local_30[2] = puVar2[2];
  local_30[3] = uVar7;
  uVar7 = puVar2[5];
  local_30[4] = puVar2[4];
  local_30[5] = uVar7;
  uVar7 = puVar2[7];
  local_30[6] = puVar2[6];
  local_30[7] = uVar7;
  uVar7 = puVar2[9];
  local_30[8] = puVar2[8];
  local_30[9] = uVar7;
  uVar7 = puVar2[0xb];
  local_30[10] = puVar2[10];
  local_30[0xb] = uVar7;
  uVar4 = *(undefined4 *)((longlong)puVar2 + 100);
  uVar5 = *(undefined4 *)(puVar2 + 0xd);
  uVar6 = *(undefined4 *)((longlong)puVar2 + 0x6c);
  *(undefined4 *)(local_30 + 0xc) = *(undefined4 *)(puVar2 + 0xc);
  *(undefined4 *)((longlong)local_30 + 100) = uVar4;
  *(undefined4 *)(local_30 + 0xd) = uVar5;
  *(undefined4 *)((longlong)local_30 + 0x6c) = uVar6;
  local_30[0xe] = puVar2[0xe];
  local_30[0xf] = *puVar1;
  *(undefined4 *)(local_30 + 0x10) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      iVar9 = FCrc::MemCrc_DEPRECATED(local_30,0x14,0);
      plVar11 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar11 = param_1 + 7;
      }
      iVar9 = *(int *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar9) * 4);
      if (iVar9 != -1) {
        lVar3 = *param_1;
        do {
          lVar12 = (longlong)iVar9 * 0x88 + lVar3;
          cVar8 = operator==(lVar12,local_30);
          if (cVar8 != '\0') goto LAB_14257af8c;
          iVar9 = *(int *)(lVar12 + 0x80);
        } while (iVar9 != -1);
      }
    }
    iVar9 = -1;
LAB_14257af8c:
    bVar13 = iVar9 != -1;
    if (bVar13) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar9 * 0x88 + *param_1),local_30,0x80);
      TSparseArray<TSetElement<TTuple<wchar_t,FCharacterList::FCharacterListEntry>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar9;
      goto LAB_14257b047;
    }
  }
  cVar8 = FUN_1425891f0(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar8 == '\0') {
    iVar9 = *param_2;
    uVar10 = FCrc::MemCrc_DEPRECATED(local_30,0x14);
    uVar10 = (int)param_1[9] - 1U & uVar10;
    *(uint *)((longlong)local_30 + 0x84) = uVar10;
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 0x10) =
         *(undefined4 *)
          ((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(int *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         iVar9;
  }
LAB_14257b047:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar13;
  }
  return param_2;
}



// FUNCTION 14257b080 FUN_14257b080 body=570 status=ok
// SIG undefined FUN_14257b080(void)

int * FUN_14257b080(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  longlong *plVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar7 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar7 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar7);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar7 = (int)param_1[6];
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar10 = *(int *)(*param_1 + 4 + (longlong)iVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar10;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar10 * 0x18) = 0xffffffff;
    }
  }
  plVar8 = (longlong *)param_1[4];
  *param_2 = iVar7;
  uVar9 = 0;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  bVar11 = false;
  puVar1 = (uint *)((longlong)plVar8 + (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar7 & 0x1f);
  plVar8 = (longlong *)(*param_1 + (longlong)iVar7 * 0x18);
  plVar6 = (longlong *)param_3[1];
  lVar2 = *(longlong *)*param_3;
  *plVar8 = lVar2;
  plVar8[1] = *plVar6;
  *(undefined4 *)(plVar8 + 2) = 0xffffffff;
  iVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar10 != 1) {
    if (iVar10 != 0) {
      uVar5 = uVar9;
      if (lVar2 != 0) {
        uVar5 = *(uint *)(lVar2 + 0x68);
      }
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar4 = *(int *)((longlong)plVar6 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
      if (iVar4 != -1) {
        do {
          if (*(longlong *)(*param_1 + (longlong)iVar4 * 0x18) == lVar2) goto LAB_14257b1db;
          iVar4 = *(int *)(*param_1 + 0x10 + (longlong)iVar4 * 0x18);
        } while (iVar4 != -1);
      }
    }
    iVar4 = -1;
LAB_14257b1db:
    bVar11 = iVar4 != -1;
    if (bVar11) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar4 * 0x18),plVar8,0x10);
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,iVar7,1);
      *param_2 = iVar4;
      goto LAB_14257b291;
    }
  }
  cVar3 = TSet<TTuple<FShaderPipelineType_const_*,FShaderPipeline_*>,TDefaultMapHashableKeyFuncs<FShaderPipelineType_const_*,FShaderPipeline_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar10,0);
  if (cVar3 == '\0') {
    iVar7 = *param_2;
    if (*plVar8 != 0) {
      uVar9 = *(uint *)(*plVar8 + 0x68);
    }
    uVar9 = (int)param_1[9] - 1U & uVar9;
    *(uint *)((longlong)plVar8 + 0x14) = uVar9;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(plVar8 + 2) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4) = iVar7
    ;
  }
LAB_14257b291:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar11;
  }
  return param_2;
}



// FUNCTION 14257b2c0 Emplace<TPairInitializer<FMaterialShaderMapId_const_&,FMaterialShaderMap_*_&&>_> body=448 status=ok
// SIG undefined Emplace<TPairInitializer<FMaterialShaderMapId_const_&,FMaterialShaderMap_*_&&>_>(void)

int * TSet<TTuple<FMaterialShaderMapId,FMaterialShaderMap_*>,TDefaultMapHashableKeyFuncs<FMaterialShaderMapId,FMaterialShaderMap_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FMaterialShaderMapId_const_&,FMaterialShaderMap_*_&&>_>
                (longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  void *_Dst;
  uint uVar7;
  bool bVar8;
  int local_38 [2];
  uint *local_30;
  
  TSparseArray<TSetElement<TTuple<FMaterialShaderMapId,FMaterialShaderMap_*>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  uVar1 = *param_3;
  puVar2 = (undefined8 *)param_3[1];
  *param_2 = local_38[0];
  FMaterialShaderMapId::FMaterialShaderMapId(local_30,uVar1);
  bVar8 = false;
  *(undefined8 *)(local_30 + 0x3e) = *puVar2;
  local_30[0x40] = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = param_1 + 7;
      }
      iVar6 = *(int *)((longlong)plVar4 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*local_30) * 4);
      if (iVar6 != -1) {
        lVar5 = *param_1;
        do {
          cVar3 = FMaterialShaderMapId::operator==(lVar5 + (longlong)iVar6 * 0x108,local_30);
          if (cVar3 != '\0') goto LAB_14257b39d;
          lVar5 = *param_1;
          iVar6 = *(int *)((longlong)iVar6 * 0x108 + 0x100 + lVar5);
        } while (iVar6 != -1);
      }
    }
    iVar6 = -1;
LAB_14257b39d:
    bVar8 = iVar6 != -1;
    if (bVar8) {
      _Dst = (void *)((longlong)iVar6 * 0x108 + *param_1);
      FMaterialShaderMapId::~FMaterialShaderMapId(_Dst);
      ::_guard_xfg_dispatch_icall_nop(_Dst,local_30,0x100);
      TSparseArray<TSetElement<TTuple<FGuid,FUdpMessageProcessor::FNodeInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar6;
      goto LAB_14257b457;
    }
  }
  cVar3 = TSet<TTuple<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>,TDefaultMapHashableKeyFuncs<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar3 == '\0') {
    uVar7 = (int)param_1[9] - 1U & *local_30;
    local_30[0x41] = uVar7;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    local_30[0x40] =
         *(uint *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4) =
         *param_2;
  }
LAB_14257b457:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar8;
  }
  return param_2;
}



// FUNCTION 14257b480 FUN_14257b480 body=739 status=ok
// SIG undefined FUN_14257b480(void)

int * FUN_14257b480(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined8 *puVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  char cVar6;
  uint uVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  void *_Dst;
  int iVar12;
  uint *puVar13;
  int iVar14;
  bool bVar15;
  
  iVar14 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar12 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar12 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar12 + 1) {
      TArray<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,FDefaultAllocator>::ResizeGrow
                (param_1,iVar12);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar12 = (int)param_1[6];
    iVar10 = *(int *)((longlong)iVar12 * 0x80 + 4 + *param_1);
    iVar11 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar10;
    *(int *)((longlong)param_1 + 0x34) = iVar11;
    if (iVar11 != 0) {
      *(undefined4 *)((longlong)iVar10 * 0x80 + *param_1) = 0xffffffff;
    }
  }
  plVar8 = (longlong *)param_1[4];
  *param_2 = iVar12;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  puVar13 = (uint *)((longlong)plVar8 +
                    (longlong)((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) * 4);
  bVar15 = false;
  *puVar13 = *puVar13 | 1 << ((byte)iVar12 & 0x1f);
  puVar1 = (undefined8 *)param_3[1];
  puVar13 = (uint *)((longlong)iVar12 * 0x80 + *param_1);
  *puVar13 = *(uint *)*param_3;
  uVar5 = puVar1[1];
  *(undefined8 *)(puVar13 + 4) = *puVar1;
  *(undefined8 *)(puVar13 + 6) = uVar5;
  puVar13[8] = 0;
  puVar13[9] = 0;
  *(undefined8 *)(puVar13 + 8) = puVar1[2];
  puVar1[2] = 0;
  puVar13[10] = *(uint *)(puVar1 + 3);
  puVar13[0xb] = *(uint *)((longlong)puVar1 + 0x1c);
  puVar1[3] = 0;
  puVar13[0xc] = *(uint *)(puVar1 + 4);
  puVar13[0xd] = *(uint *)((longlong)puVar1 + 0x24);
  uVar7 = *(uint *)((longlong)puVar1 + 0x34);
  uVar3 = *(uint *)(puVar1 + 7);
  uVar4 = *(uint *)((longlong)puVar1 + 0x3c);
  puVar13[0x10] = *(uint *)(puVar1 + 6);
  puVar13[0x11] = uVar7;
  puVar13[0x12] = uVar3;
  puVar13[0x13] = uVar4;
  puVar13[0x14] = *(uint *)(puVar1 + 8);
  puVar13[0x15] = *(uint *)((longlong)puVar1 + 0x44);
  *(undefined8 *)(puVar13 + 0x16) = puVar1[9];
  *(undefined1 *)(puVar13 + 0x18) = *(undefined1 *)(puVar1 + 10);
  puVar13[0x1c] = 0xffffffff;
  iVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar12 != 1) {
    iVar11 = iVar14;
    if (iVar12 != 0) {
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = param_1 + 7;
      }
      iVar10 = *(int *)((longlong)plVar8 +
                       ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar13) * 4);
      if (iVar10 != -1) {
        do {
          iVar11 = iVar10;
          if (*(uint *)((longlong)iVar10 * 0x80 + *param_1) == *puVar13) break;
          iVar10 = *(int *)((longlong)iVar10 * 0x80 + 0x70 + *param_1);
          iVar11 = iVar14;
        } while (iVar10 != -1);
      }
    }
    bVar15 = iVar11 != -1;
    if (bVar15) {
      _Dst = (void *)((longlong)iVar11 * 0x80 + *param_1);
      if (*(longlong *)((longlong)_Dst + 0x20) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(_Dst,puVar13,0x70);
      iVar12 = *param_2;
      bVar2 = (byte)iVar12 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x80 + *param_1) = iVar12;
      }
      puVar9 = (undefined4 *)((longlong)iVar12 * 0x80 + *param_1);
      *puVar9 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar14 = (int)param_1[6];
      }
      puVar9[1] = iVar14;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar12;
      plVar8 = (longlong *)param_1[4];
      *param_2 = iVar11;
      if (plVar8 == (longlong *)0x0) {
        plVar8 = param_1 + 2;
      }
      puVar13 = (uint *)((longlong)plVar8 +
                        (longlong)((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar13 = *puVar13 & ~(1 << bVar2 | 1U >> 0x20 - bVar2);
      goto LAB_14257b743;
    }
  }
  cVar6 = TSet<TTuple<enum_EMaterialProperty,FMaterialAttributeDefintion>,TDefaultMapHashableKeyFuncs<enum_EMaterialProperty,FMaterialAttributeDefintion,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar12,0);
  if (cVar6 == '\0') {
    uVar7 = (int)param_1[9] - 1U & *puVar13;
    puVar13[0x1d] = uVar7;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    puVar13[0x1c] =
         *(uint *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4) =
         *param_2;
  }
LAB_14257b743:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar15;
  }
  return param_2;
}



// FUNCTION 14257b770 FUN_14257b770 body=678 status=ok
// SIG undefined FUN_14257b770(void)

void FUN_14257b770(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  DWORD *pDVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  int iVar11;
  longlong *plVar12;
  LARGE_INTEGER local_res18;
  longlong local_res20;
  LARGE_INTEGER local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar5 = FUN_1415ad720(&DAT_1468e2448), cVar5 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)))) {
    local_38 = *(longlong *)(param_1 + 0x118);
    uVar3 = *(undefined8 *)(param_1 + 0x110);
    local_30 = *(longlong *)(param_1 + 0x120);
    local_20 = 0x202ffff;
    local_1c = 0xffffffff;
    local_40 = uVar3;
    local_28 = param_2;
    FBaseGraphTask::GetSmallTaskAllocator();
    QueryPerformanceCounter(&local_58);
    FUN_14257d820(uVar3,&local_28);
    if (local_38 != 0) {
      FUN_14257d820(local_38,&local_28);
    }
    if (local_30 != 0) {
      FUN_14257d820(local_30,&local_28);
    }
    QueryPerformanceCounter(&local_res18);
    DAT_146ac3af4 = DAT_146ac3af4 + (local_res18.s.LowPart - local_58._0_4_);
    return;
  }
  pDVar7 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar8 = TlsGetValue(*pDVar7);
  plVar12 = (longlong *)0x0;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)operator_new(0x18);
    if (plVar8 != (longlong *)0x0) {
      *plVar8 = 0;
      plVar8[1] = 0;
      *(undefined4 *)(plVar8 + 2) = 0;
      plVar12 = plVar8;
    }
    TlsSetValue(*pDVar7,plVar12);
    plVar8 = plVar12;
  }
  plVar12 = (longlong *)plVar8[1];
  if (plVar12 == (longlong *)0x0) {
    plVar12 = (longlong *)*plVar8;
    if (plVar12 == (longlong *)0x0) {
      lVar9 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar7 + 2);
      plVar8[1] = lVar9;
      if (lVar9 == 0) {
        puVar10 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar8[1] = (longlong)puVar10;
        lVar9 = 0x1f;
        do {
          puVar2 = puVar10 + 0x20;
          *puVar10 = puVar2;
          lVar9 = lVar9 + -1;
          puVar10 = puVar2;
        } while (lVar9 != 0);
        *puVar2 = 0;
      }
      plVar12 = (longlong *)plVar8[1];
      iVar11 = 0x20;
      *(undefined4 *)(plVar8 + 2) = 0x20;
    }
    else {
      iVar11 = 0x20;
      plVar8[1] = (longlong)plVar12;
      *(undefined4 *)(plVar8 + 2) = 0x20;
      *plVar8 = 0;
    }
  }
  else {
    iVar11 = (int)plVar8[2];
  }
  plVar8[1] = *plVar12;
  *(int *)(plVar8 + 2) = iVar11 + -1;
  *plVar12 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar12 + 1) = 0xff;
  local_50 = 0;
  local_48 = 0;
  *(undefined4 *)((longlong)plVar12 + 0xc) = 1;
  *(undefined1 *)(plVar12 + 7) = 0;
  *plVar12 = (longlong)&PTR_FUN_14510bfb0;
  plVar12[8] = 0;
  lVar9 = *(longlong *)(param_1 + 0x120);
  lVar4 = *(longlong *)(param_1 + 0x118);
  plVar12[2] = *(longlong *)(param_1 + 0x110);
  plVar12[3] = lVar4;
  plVar12[4] = lVar9;
  plVar12[5] = param_2;
  *(undefined4 *)(plVar12 + 6) = 0x202ffff;
  *(undefined4 *)((longlong)plVar12 + 0x34) = 0xffffffff;
  lVar9 = plVar12[8];
  piVar1 = (int *)(lVar9 + 0x48);
  if (lVar9 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_res20 = lVar9;
  FUN_1425a2d80(plVar12,0,0xff,1);
  if (lVar9 != 0) {
    LOCK();
    iVar11 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar11 == 1) {
      FGraphEvent::Recycle(local_res20);
    }
  }
  return;
}



// FUNCTION 14257ba20 FUN_14257ba20 body=678 status=ok
// SIG undefined FUN_14257ba20(void)

void FUN_14257ba20(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  DWORD *pDVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  int iVar11;
  longlong *plVar12;
  LARGE_INTEGER local_res18;
  longlong local_res20;
  LARGE_INTEGER local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar5 = FUN_1415ad720(&DAT_1468e2448), cVar5 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)))) {
    local_38 = *(longlong *)(param_1 + 0x118);
    uVar3 = *(undefined8 *)(param_1 + 0x110);
    local_30 = *(longlong *)(param_1 + 0x120);
    local_20 = 0x202ffff;
    local_1c = 0xffffffff;
    local_40 = uVar3;
    local_28 = param_2;
    FBaseGraphTask::GetSmallTaskAllocator();
    QueryPerformanceCounter(&local_58);
    FUN_14257d950(uVar3,&local_28);
    if (local_38 != 0) {
      FUN_14257d950(local_38,&local_28);
    }
    if (local_30 != 0) {
      FUN_14257d950(local_30,&local_28);
    }
    QueryPerformanceCounter(&local_res18);
    DAT_146ac3af4 = DAT_146ac3af4 + (local_res18.s.LowPart - local_58._0_4_);
    return;
  }
  pDVar7 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar8 = TlsGetValue(*pDVar7);
  plVar12 = (longlong *)0x0;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)operator_new(0x18);
    if (plVar8 != (longlong *)0x0) {
      *plVar8 = 0;
      plVar8[1] = 0;
      *(undefined4 *)(plVar8 + 2) = 0;
      plVar12 = plVar8;
    }
    TlsSetValue(*pDVar7,plVar12);
    plVar8 = plVar12;
  }
  plVar12 = (longlong *)plVar8[1];
  if (plVar12 == (longlong *)0x0) {
    plVar12 = (longlong *)*plVar8;
    if (plVar12 == (longlong *)0x0) {
      lVar9 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar7 + 2);
      plVar8[1] = lVar9;
      if (lVar9 == 0) {
        puVar10 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar8[1] = (longlong)puVar10;
        lVar9 = 0x1f;
        do {
          puVar2 = puVar10 + 0x20;
          *puVar10 = puVar2;
          lVar9 = lVar9 + -1;
          puVar10 = puVar2;
        } while (lVar9 != 0);
        *puVar2 = 0;
      }
      plVar12 = (longlong *)plVar8[1];
      iVar11 = 0x20;
      *(undefined4 *)(plVar8 + 2) = 0x20;
    }
    else {
      iVar11 = 0x20;
      plVar8[1] = (longlong)plVar12;
      *(undefined4 *)(plVar8 + 2) = 0x20;
      *plVar8 = 0;
    }
  }
  else {
    iVar11 = (int)plVar8[2];
  }
  plVar8[1] = *plVar12;
  *(int *)(plVar8 + 2) = iVar11 + -1;
  *plVar12 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar12 + 1) = 0xff;
  local_50 = 0;
  local_48 = 0;
  *(undefined4 *)((longlong)plVar12 + 0xc) = 1;
  *(undefined1 *)(plVar12 + 7) = 0;
  *plVar12 = (longlong)&PTR_FUN_14510bfc0;
  plVar12[8] = 0;
  lVar9 = *(longlong *)(param_1 + 0x120);
  lVar4 = *(longlong *)(param_1 + 0x118);
  plVar12[2] = *(longlong *)(param_1 + 0x110);
  plVar12[3] = lVar4;
  plVar12[4] = lVar9;
  plVar12[5] = param_2;
  *(undefined4 *)(plVar12 + 6) = 0x202ffff;
  *(undefined4 *)((longlong)plVar12 + 0x34) = 0xffffffff;
  lVar9 = plVar12[8];
  piVar1 = (int *)(lVar9 + 0x48);
  if (lVar9 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_res20 = lVar9;
  FUN_1425a2d80(plVar12,0,0xff,1);
  if (lVar9 != 0) {
    LOCK();
    iVar11 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar11 == 1) {
      FGraphEvent::Recycle(local_res20);
    }
  }
  return;
}



// FUNCTION 14257bcd0 FUN_14257bcd0 body=74 status=ok
// SIG undefined FUN_14257bcd0(void)

int * FUN_14257bcd0(undefined8 *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)*param_1;
  piVar2 = piVar1 + (longlong)*(int *)(param_1 + 1) * 0xc;
  if (piVar1 != piVar2) {
    do {
      if ((((*piVar1 == *param_2) && (piVar1[1] == param_2[1])) &&
          (*(char *)((longlong)piVar1 + 0xb) == *(char *)((longlong)param_2 + 0xb))) &&
         (piVar1[3] == param_2[3])) {
        return piVar1;
      }
      piVar1 = piVar1 + 0xc;
    } while (piVar1 != piVar2);
  }
  return (int *)0x0;
}



// FUNCTION 14257bd20 FUN_14257bd20 body=772 status=ok
// SIG undefined FUN_14257bd20(void)

void FUN_14257bd20(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  DWORD *pDVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  int iVar11;
  longlong *plVar12;
  longlong *plVar13;
  LARGE_INTEGER local_res18;
  longlong local_res20;
  LARGE_INTEGER local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  undefined2 local_40;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined4 local_3c;
  undefined8 local_38 [2];
  
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar5 = FUN_1415ad720(&DAT_1468e2448), cVar5 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)))) {
    lVar9 = param_2[2];
    local_38[0] = 0;
    if (lVar9 != 0) {
      iVar11 = (int)param_2[3];
      if ((-1 < iVar11) && (iVar11 < *(int *)(lVar9 + 0x50))) {
        local_38[0] = *(undefined8 *)(*(longlong *)(lVar9 + 0x48) + (longlong)iVar11 * 8);
      }
    }
    local_58 = *(longlong *)(param_1 + 0x118);
    uVar3 = *(undefined8 *)(param_1 + 0x110);
    local_50 = *(longlong *)(param_1 + 0x120);
    local_48 = *param_2;
    local_40 = (undefined2)param_2[1];
    local_3e = *(undefined1 *)((longlong)param_2 + 10);
    local_3d = *(undefined1 *)((longlong)param_2 + 0xb);
    local_3c = *(undefined4 *)((longlong)param_2 + 0xc);
    local_60 = uVar3;
    FBaseGraphTask::GetSmallTaskAllocator();
    QueryPerformanceCounter(&local_78);
    FUN_14257db90(uVar3,&local_48,local_38);
    if (local_58 != 0) {
      FUN_14257db90(local_58,&local_48,local_38);
    }
    if (local_50 != 0) {
      FUN_14257db90(local_50,&local_48,local_38);
    }
    QueryPerformanceCounter(&local_res18);
    DAT_146ac3af4 = DAT_146ac3af4 + (local_res18.s.LowPart - local_78._0_4_);
    return;
  }
  lVar9 = param_2[2];
  plVar12 = (longlong *)0x0;
  plVar13 = plVar12;
  if (lVar9 != 0) {
    iVar11 = (int)param_2[3];
    plVar13 = (longlong *)0x0;
    if ((-1 < iVar11) && (iVar11 < *(int *)(lVar9 + 0x50))) {
      plVar13 = *(longlong **)(*(longlong *)(lVar9 + 0x48) + (longlong)iVar11 * 8);
    }
  }
  pDVar7 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar8 = TlsGetValue(*pDVar7);
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)operator_new(0x18);
    if (plVar8 != (longlong *)0x0) {
      *plVar8 = 0;
      plVar8[1] = 0;
      *(undefined4 *)(plVar8 + 2) = 0;
      plVar12 = plVar8;
    }
    TlsSetValue(*pDVar7,plVar12);
    plVar8 = plVar12;
  }
  plVar12 = (longlong *)plVar8[1];
  if (plVar12 == (longlong *)0x0) {
    plVar12 = (longlong *)*plVar8;
    if (plVar12 == (longlong *)0x0) {
      lVar9 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar7 + 2);
      plVar8[1] = lVar9;
      if (lVar9 == 0) {
        puVar10 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar8[1] = (longlong)puVar10;
        lVar9 = 0x1f;
        do {
          puVar2 = puVar10 + 0x20;
          *puVar10 = puVar2;
          lVar9 = lVar9 + -1;
          puVar10 = puVar2;
        } while (lVar9 != 0);
        *puVar2 = 0;
      }
      plVar12 = (longlong *)plVar8[1];
      iVar11 = 0x20;
      *(undefined4 *)(plVar8 + 2) = 0x20;
    }
    else {
      iVar11 = 0x20;
      plVar8[1] = (longlong)plVar12;
      *(undefined4 *)(plVar8 + 2) = 0x20;
      *plVar8 = 0;
    }
  }
  else {
    iVar11 = (int)plVar8[2];
  }
  plVar8[1] = *plVar12;
  *(int *)(plVar8 + 2) = iVar11 + -1;
  *plVar12 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar12 + 1) = 0xff;
  local_70 = 0;
  local_68 = 0;
  *(undefined4 *)((longlong)plVar12 + 0xc) = 1;
  *plVar12 = (longlong)&PTR_FUN_14510bfa0;
  *(undefined1 *)(plVar12 + 8) = 0;
  plVar12[9] = 0;
  lVar9 = *(longlong *)(param_1 + 0x120);
  lVar4 = *(longlong *)(param_1 + 0x118);
  plVar12[2] = *(longlong *)(param_1 + 0x110);
  plVar12[3] = lVar4;
  plVar12[4] = lVar9;
  plVar12[5] = *param_2;
  *(short *)(plVar12 + 6) = (short)param_2[1];
  *(undefined1 *)((longlong)plVar12 + 0x32) = *(undefined1 *)((longlong)param_2 + 10);
  *(undefined1 *)((longlong)plVar12 + 0x33) = *(undefined1 *)((longlong)param_2 + 0xb);
  *(undefined4 *)((longlong)plVar12 + 0x34) = *(undefined4 *)((longlong)param_2 + 0xc);
  plVar12[7] = (longlong)plVar13;
  lVar9 = plVar12[9];
  if (lVar9 != 0) {
    LOCK();
    *(int *)(lVar9 + 0x48) = *(int *)(lVar9 + 0x48) + 1;
    UNLOCK();
  }
  local_res20 = lVar9;
  FUN_141eedf40(plVar12,0,0xff,1);
  if (lVar9 != 0) {
    LOCK();
    piVar1 = (int *)(lVar9 + 0x48);
    iVar11 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar11 == 1) {
      FGraphEvent::Recycle(local_res20);
    }
  }
  return;
}



// FUNCTION 14257c030 FUN_14257c030 body=733 status=ok
// SIG undefined FUN_14257c030(void)

void FUN_14257c030(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  DWORD DVar7;
  DWORD *pDVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  int iVar12;
  longlong *plVar13;
  LARGE_INTEGER local_res18;
  longlong local_res20;
  LARGE_INTEGER local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  undefined2 local_50;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined4 local_4c;
  undefined4 local_48 [8];
  
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar6 = FUN_1415ad720(&DAT_1468e2448), cVar6 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar7 = GetCurrentThreadId(), DVar7 == DAT_1468c21c0)))) {
    local_68 = *(longlong *)(param_1 + 0x118);
    uVar3 = *(undefined8 *)(param_1 + 0x110);
    local_48[0] = (undefined4)param_2[2];
    local_60 = *(longlong *)(param_1 + 0x120);
    local_58 = *param_2;
    local_50 = (undefined2)param_2[1];
    local_4e = *(undefined1 *)((longlong)param_2 + 10);
    local_4d = *(undefined1 *)((longlong)param_2 + 0xb);
    local_4c = *(undefined4 *)((longlong)param_2 + 0xc);
    local_70 = uVar3;
    FBaseGraphTask::GetSmallTaskAllocator();
    QueryPerformanceCounter(&local_88);
    FUN_14257da70(uVar3,&local_58,local_48);
    if (local_68 != 0) {
      FUN_14257da70(local_68,&local_58,local_48);
    }
    if (local_60 != 0) {
      FUN_14257da70(local_60,&local_58,local_48);
    }
    QueryPerformanceCounter(&local_res18);
    DAT_146ac3af4 = DAT_146ac3af4 + (local_res18.s.LowPart - local_88._0_4_);
    return;
  }
  lVar5 = param_2[2];
  pDVar8 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar9 = TlsGetValue(*pDVar8);
  plVar13 = (longlong *)0x0;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)operator_new(0x18);
    if (plVar9 != (longlong *)0x0) {
      *plVar9 = 0;
      plVar9[1] = 0;
      *(undefined4 *)(plVar9 + 2) = 0;
      plVar13 = plVar9;
    }
    TlsSetValue(*pDVar8,plVar13);
    plVar9 = plVar13;
  }
  plVar13 = (longlong *)plVar9[1];
  if (plVar13 == (longlong *)0x0) {
    plVar13 = (longlong *)*plVar9;
    if (plVar13 == (longlong *)0x0) {
      lVar10 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar8 + 2);
      plVar9[1] = lVar10;
      if (lVar10 == 0) {
        puVar11 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar9[1] = (longlong)puVar11;
        lVar10 = 0x1f;
        do {
          puVar2 = puVar11 + 0x20;
          *puVar11 = puVar2;
          lVar10 = lVar10 + -1;
          puVar11 = puVar2;
        } while (lVar10 != 0);
        *puVar2 = 0;
      }
      plVar13 = (longlong *)plVar9[1];
      iVar12 = 0x20;
      *(undefined4 *)(plVar9 + 2) = 0x20;
    }
    else {
      iVar12 = 0x20;
      plVar9[1] = (longlong)plVar13;
      *(undefined4 *)(plVar9 + 2) = 0x20;
      *plVar9 = 0;
    }
  }
  else {
    iVar12 = (int)plVar9[2];
  }
  plVar9[1] = *plVar13;
  *(int *)(plVar9 + 2) = iVar12 + -1;
  *plVar13 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar13 + 1) = 0xff;
  local_80 = 0;
  local_78 = 0;
  *(undefined4 *)((longlong)plVar13 + 0xc) = 1;
  *(undefined1 *)(plVar13 + 8) = 0;
  *plVar13 = (longlong)&PTR_FUN_14510bf90;
  plVar13[9] = 0;
  lVar10 = *(longlong *)(param_1 + 0x120);
  lVar4 = *(longlong *)(param_1 + 0x118);
  plVar13[2] = *(longlong *)(param_1 + 0x110);
  plVar13[3] = lVar4;
  plVar13[4] = lVar10;
  plVar13[5] = *param_2;
  *(short *)(plVar13 + 6) = (short)param_2[1];
  *(undefined1 *)((longlong)plVar13 + 0x32) = *(undefined1 *)((longlong)param_2 + 10);
  *(undefined1 *)((longlong)plVar13 + 0x33) = *(undefined1 *)((longlong)param_2 + 0xb);
  *(undefined4 *)((longlong)plVar13 + 0x34) = *(undefined4 *)((longlong)param_2 + 0xc);
  *(int *)(plVar13 + 7) = (int)lVar5;
  lVar5 = plVar13[9];
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 0x48) = *(int *)(lVar5 + 0x48) + 1;
    UNLOCK();
  }
  local_res20 = lVar5;
  FUN_141eedf40(plVar13,0,0xff,1);
  if (lVar5 != 0) {
    LOCK();
    piVar1 = (int *)(lVar5 + 0x48);
    iVar12 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar12 == 1) {
      FGraphEvent::Recycle(local_res20);
    }
  }
  return;
}



// FUNCTION 14257c310 FUN_14257c310 body=713 status=ok
// SIG undefined FUN_14257c310(void)

void FUN_14257c310(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  DWORD DVar7;
  DWORD *pDVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  int iVar12;
  longlong *plVar13;
  LARGE_INTEGER local_res18;
  longlong local_res20;
  LARGE_INTEGER local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  undefined2 local_40;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined4 local_3c;
  longlong local_38 [2];
  
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar6 = FUN_1415ad720(&DAT_1468e2448), cVar6 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar7 = GetCurrentThreadId(), DVar7 == DAT_1468c21c0)))) {
    local_58 = *(longlong *)(param_1 + 0x118);
    uVar3 = *(undefined8 *)(param_1 + 0x110);
    local_50 = *(longlong *)(param_1 + 0x120);
    local_48 = *param_2;
    local_40 = (undefined2)param_2[1];
    local_3e = *(undefined1 *)((longlong)param_2 + 10);
    local_3d = *(undefined1 *)((longlong)param_2 + 0xb);
    local_3c = *(undefined4 *)((longlong)param_2 + 0xc);
    local_38[0] = param_2[2];
    local_60 = uVar3;
    FBaseGraphTask::GetSmallTaskAllocator();
    QueryPerformanceCounter(&local_78);
    FUN_14257db90(uVar3,&local_48,local_38);
    if (local_58 != 0) {
      FUN_14257db90(local_58,&local_48,local_38);
    }
    if (local_50 != 0) {
      FUN_14257db90(local_50,&local_48,local_38);
    }
    QueryPerformanceCounter(&local_res18);
    DAT_146ac3af4 = DAT_146ac3af4 + (local_res18.s.LowPart - local_78._0_4_);
    return;
  }
  lVar4 = param_2[2];
  pDVar8 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar9 = TlsGetValue(*pDVar8);
  plVar13 = (longlong *)0x0;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)operator_new(0x18);
    if (plVar9 != (longlong *)0x0) {
      *plVar9 = 0;
      plVar9[1] = 0;
      *(undefined4 *)(plVar9 + 2) = 0;
      plVar13 = plVar9;
    }
    TlsSetValue(*pDVar8,plVar13);
    plVar9 = plVar13;
  }
  plVar13 = (longlong *)plVar9[1];
  if (plVar13 == (longlong *)0x0) {
    plVar13 = (longlong *)*plVar9;
    if (plVar13 == (longlong *)0x0) {
      lVar10 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar8 + 2);
      plVar9[1] = lVar10;
      if (lVar10 == 0) {
        puVar11 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar9[1] = (longlong)puVar11;
        lVar10 = 0x1f;
        do {
          puVar2 = puVar11 + 0x20;
          *puVar11 = puVar2;
          lVar10 = lVar10 + -1;
          puVar11 = puVar2;
        } while (lVar10 != 0);
        *puVar2 = 0;
      }
      plVar13 = (longlong *)plVar9[1];
      iVar12 = 0x20;
      *(undefined4 *)(plVar9 + 2) = 0x20;
    }
    else {
      iVar12 = 0x20;
      plVar9[1] = (longlong)plVar13;
      *(undefined4 *)(plVar9 + 2) = 0x20;
      *plVar9 = 0;
    }
  }
  else {
    iVar12 = (int)plVar9[2];
  }
  plVar9[1] = *plVar13;
  *(int *)(plVar9 + 2) = iVar12 + -1;
  *plVar13 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar13 + 1) = 0xff;
  local_70 = 0;
  local_68 = 0;
  *(undefined4 *)((longlong)plVar13 + 0xc) = 1;
  *(undefined1 *)(plVar13 + 8) = 0;
  *plVar13 = (longlong)&PTR_FUN_14510bfa0;
  plVar13[9] = 0;
  lVar10 = *(longlong *)(param_1 + 0x120);
  lVar5 = *(longlong *)(param_1 + 0x118);
  plVar13[2] = *(longlong *)(param_1 + 0x110);
  plVar13[3] = lVar5;
  plVar13[4] = lVar10;
  plVar13[5] = *param_2;
  *(short *)(plVar13 + 6) = (short)param_2[1];
  *(undefined1 *)((longlong)plVar13 + 0x32) = *(undefined1 *)((longlong)param_2 + 10);
  *(undefined1 *)((longlong)plVar13 + 0x33) = *(undefined1 *)((longlong)param_2 + 0xb);
  *(undefined4 *)((longlong)plVar13 + 0x34) = *(undefined4 *)((longlong)param_2 + 0xc);
  plVar13[7] = lVar4;
  lVar4 = plVar13[9];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
    UNLOCK();
  }
  local_res20 = lVar4;
  FUN_141eedf40(plVar13,0,0xff,1);
  if (lVar4 != 0) {
    LOCK();
    piVar1 = (int *)(lVar4 + 0x48);
    iVar12 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar12 == 1) {
      FGraphEvent::Recycle(local_res20);
    }
  }
  return;
}



// FUNCTION 14257c5e0 FUN_14257c5e0 body=731 status=ok
// SIG undefined FUN_14257c5e0(void)

void FUN_14257c5e0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  DWORD *pDVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  int iVar11;
  longlong lVar12;
  LARGE_INTEGER local_res18;
  longlong local_res20;
  LARGE_INTEGER local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  undefined2 local_40;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar5 = FUN_1415ad720(&DAT_1468e2448), cVar5 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)))) {
    local_58 = *(longlong *)(param_1 + 0x118);
    local_38 = (undefined4)param_2[2];
    uStack_34 = *(undefined4 *)((longlong)param_2 + 0x14);
    uStack_30 = (undefined4)param_2[3];
    uStack_2c = *(undefined4 *)((longlong)param_2 + 0x1c);
    uVar3 = *(undefined8 *)(param_1 + 0x110);
    local_50 = *(longlong *)(param_1 + 0x120);
    local_48 = *param_2;
    local_40 = (undefined2)param_2[1];
    local_3e = *(undefined1 *)((longlong)param_2 + 10);
    local_3d = *(undefined1 *)((longlong)param_2 + 0xb);
    local_3c = *(undefined4 *)((longlong)param_2 + 0xc);
    local_60 = uVar3;
    FBaseGraphTask::GetSmallTaskAllocator();
    QueryPerformanceCounter(&local_88);
    FUN_14257dca0(uVar3,&local_48,&local_38);
    if (local_58 != 0) {
      FUN_14257dca0(local_58,&local_48,&local_38);
    }
    if (local_50 != 0) {
      FUN_14257dca0(local_50,&local_48,&local_38);
    }
    QueryPerformanceCounter(&local_res18);
    DAT_146ac3af4 = DAT_146ac3af4 + (local_res18.s.LowPart - local_88._0_4_);
    return;
  }
  local_70 = (undefined4)param_2[2];
  uStack_6c = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_68 = (undefined4)param_2[3];
  uStack_64 = *(undefined4 *)((longlong)param_2 + 0x1c);
  pDVar7 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar8 = TlsGetValue(*pDVar7);
  plVar9 = (longlong *)0x0;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)operator_new(0x18);
    if (plVar8 != (longlong *)0x0) {
      *plVar8 = 0;
      plVar8[1] = 0;
      *(undefined4 *)(plVar8 + 2) = 0;
      plVar9 = plVar8;
    }
    TlsSetValue(*pDVar7,plVar9);
    plVar8 = plVar9;
  }
  plVar9 = (longlong *)plVar8[1];
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)*plVar8;
    if (plVar9 == (longlong *)0x0) {
      plVar9 = (longlong *)TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar7 + 2);
      plVar8[1] = (longlong)plVar9;
      if (plVar9 == (longlong *)0x0) {
        puVar10 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar8[1] = (longlong)puVar10;
        lVar12 = 0x1f;
        do {
          puVar2 = puVar10 + 0x20;
          *puVar10 = puVar2;
          lVar12 = lVar12 + -1;
          puVar10 = puVar2;
        } while (lVar12 != 0);
        *puVar2 = 0;
        plVar9 = (longlong *)plVar8[1];
      }
      iVar11 = 0x20;
      *(undefined4 *)(plVar8 + 2) = 0x20;
    }
    else {
      iVar11 = 0x20;
      plVar8[1] = (longlong)plVar9;
      *(undefined4 *)(plVar8 + 2) = 0x20;
      *plVar8 = 0;
    }
  }
  else {
    iVar11 = (int)plVar8[2];
  }
  plVar8[1] = *plVar9;
  *(int *)(plVar8 + 2) = iVar11 + -1;
  *plVar9 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar9 + 1) = 0xff;
  local_80 = 0;
  local_78 = 0;
  *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
  *(undefined1 *)(plVar9 + 9) = 0;
  *plVar9 = (longlong)&PTR_FUN_14510bf80;
  plVar9[10] = 0;
  lVar12 = *(longlong *)(param_1 + 0x120);
  lVar4 = *(longlong *)(param_1 + 0x118);
  plVar9[2] = *(longlong *)(param_1 + 0x110);
  plVar9[3] = lVar4;
  plVar9[4] = lVar12;
  plVar9[5] = *param_2;
  *(short *)(plVar9 + 6) = (short)param_2[1];
  *(undefined1 *)((longlong)plVar9 + 0x32) = *(undefined1 *)((longlong)param_2 + 10);
  *(undefined1 *)((longlong)plVar9 + 0x33) = *(undefined1 *)((longlong)param_2 + 0xb);
  *(undefined4 *)((longlong)plVar9 + 0x34) = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(plVar9 + 7) = local_70;
  *(undefined4 *)((longlong)plVar9 + 0x3c) = uStack_6c;
  *(undefined4 *)(plVar9 + 8) = uStack_68;
  *(undefined4 *)((longlong)plVar9 + 0x44) = uStack_64;
  lVar12 = plVar9[10];
  if (lVar12 != 0) {
    LOCK();
    *(int *)(lVar12 + 0x48) = *(int *)(lVar12 + 0x48) + 1;
    UNLOCK();
  }
  local_res20 = lVar12;
  FUN_1425a2ff0(plVar9,0,0xff,1);
  if (lVar12 != 0) {
    LOCK();
    piVar1 = (int *)(lVar12 + 0x48);
    iVar11 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar11 == 1) {
      FGraphEvent::Recycle(local_res20);
    }
  }
  return;
}



// FUNCTION 14257c8c0 GenerateKeyArray<FDefaultAllocator> body=398 status=ok
// SIG undefined GenerateKeyArray<FDefaultAllocator>(void)

void TMapBase<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>_>
     ::GenerateKeyArray<FDefaultAllocator>(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  longlong lVar9;
  int iVar10;
  uint *puVar11;
  int local_58;
  uint uStack_54;
  int iStack_50;
  uint uStack_4c;
  undefined8 local_48;
  uint uStack_40;
  int iStack_3c;
  int local_38;
  undefined4 uStack_34;
  longlong *local_30;
  int iStack_28;
  uint uStack_24;
  uint *puStack_20;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  lVar9 = param_1[1];
  iVar2 = *(int *)((longlong)param_1 + 0x34);
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != (int)lVar9 - iVar2) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2);
  }
  iVar2 = (int)param_1[5];
  puStack_20 = (uint *)(param_1 + 2);
  local_58 = 0;
  uStack_54 = 1;
  local_48._4_4_ = 0;
  uStack_40 = 0;
  if (iVar2 != 0) {
    puVar11 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar11 = puStack_20;
    }
    uVar3 = *puVar11;
    uStack_40 = 0;
    local_58 = 0;
    while (uVar3 == 0) {
      lVar9 = (longlong)local_58;
      uStack_40 = uStack_40 + 0x20;
      iVar10 = local_58 + 1;
      bVar4 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar10;
      if (bVar4) goto LAB_14257c99b;
      uVar3 = puVar11[lVar9 + 1];
    }
    uStack_54 = -uVar3 & uVar3;
    iVar10 = 0x1f;
    if (uStack_54 != 0) {
      for (; uStack_54 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uStack_54 == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - iVar10;
    }
    local_48._4_4_ = (uStack_40 - iVar10) + 0x1f;
    if (iVar2 < local_48._4_4_) {
LAB_14257c99b:
      local_48._4_4_ = iVar2;
    }
  }
  uStack_18 = 0xffffffff;
  iStack_14 = local_48._4_4_;
  iStack_10 = uStack_40;
  uStack_c = iStack_3c;
  iStack_28 = local_58;
  uStack_24 = uStack_54;
  iVar10 = local_48._4_4_;
  iStack_50 = local_58;
  uStack_4c = uStack_54;
  local_38 = uStack_40;
  uStack_34 = iStack_3c;
  bVar4 = local_48._4_4_ < iVar2;
  local_48 = puStack_20;
  local_30 = param_1;
  uStack_40 = 0xffffffff;
  iStack_3c = iVar10;
  if (bVar4) {
    do {
      iVar10 = iStack_3c;
      iVar2 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar2 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar2);
      }
      puVar8 = (undefined4 *)((longlong)iVar2 * 0x10 + *param_2);
      if (puVar8 != (undefined4 *)0x0) {
        puVar1 = (undefined4 *)((longlong)iVar10 * 0x20 + *param_1);
        uVar5 = puVar1[1];
        uVar6 = puVar1[2];
        uVar7 = puVar1[3];
        *puVar8 = *puVar1;
        puVar8[1] = uVar5;
        puVar8[2] = uVar6;
        puVar8[3] = uVar7;
      }
      uStack_40 = uStack_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_50);
    } while (iStack_3c < (int)local_48[6]);
  }
  return;
}



// FUNCTION 14257ca50 GenerateKeyArray<FDefaultAllocator> body=594 status=ok
// SIG undefined GenerateKeyArray<FDefaultAllocator>(void)

void TMapBase<FMaterialShaderMapId,FMaterialShaderMap_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMaterialShaderMapId,FMaterialShaderMap_*,0>_>
     ::GenerateKeyArray<FDefaultAllocator>(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  int local_68;
  uint uStack_64;
  int iStack_60;
  uint uStack_5c;
  undefined8 local_58;
  uint uStack_50;
  int iStack_4c;
  int local_48;
  undefined4 uStack_44;
  longlong *local_40;
  int iStack_38;
  uint uStack_34;
  uint *puStack_30;
  undefined4 uStack_28;
  int iStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  
  iVar7 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  iVar5 = (int)param_2[1];
  if (iVar5 != 0) {
    plVar4 = (longlong *)(*param_2 + 0x40);
    do {
      if (plVar4[0x10] != 0) {
        FMemory::Free();
      }
      if (plVar4[0xe] != 0) {
        FMemory::Free();
      }
      if (plVar4[0xc] != 0) {
        FMemory::Free();
      }
      if (plVar4[10] != 0) {
        FMemory::Free();
      }
      if (plVar4[8] != 0) {
        FMemory::Free();
      }
      if (plVar4[6] != 0) {
        FMemory::Free();
      }
      if (plVar4[4] != 0) {
        FMemory::Free();
      }
      TArray<FStaticMaterialLayersParameter,FDefaultAllocator>::
      ~TArray<FStaticMaterialLayersParameter,FDefaultAllocator>(plVar4 + 2);
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      if (plVar4[-2] != 0) {
        FMemory::Free();
      }
      if (plVar4[-4] != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 0x1f;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != iVar7) {
    TArray<FMaterialShaderMapId,FDefaultAllocator>::ResizeTo(param_2,iVar7);
  }
  iVar5 = (int)param_1[5];
  puStack_30 = (uint *)(param_1 + 2);
  local_68 = 0;
  uStack_64 = 1;
  local_58._4_4_ = 0;
  uStack_50 = 0;
  if (iVar5 != 0) {
    puVar6 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar6 = puStack_30;
    }
    uVar1 = *puVar6;
    uStack_50 = 0;
    local_68 = 0;
    while (uVar1 == 0) {
      lVar3 = (longlong)local_68;
      uStack_50 = uStack_50 + 0x20;
      iVar7 = local_68 + 1;
      bVar2 = (int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar7;
      if (bVar2) goto LAB_14257cbeb;
      uVar1 = puVar6[lVar3 + 1];
    }
    uStack_64 = -uVar1 & uVar1;
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
    local_58._4_4_ = (uStack_50 - iVar7) + 0x1f;
    if (iVar5 < local_58._4_4_) {
LAB_14257cbeb:
      local_58._4_4_ = iVar5;
    }
  }
  uStack_28 = 0xffffffff;
  iStack_24 = local_58._4_4_;
  iStack_20 = uStack_50;
  uStack_1c = iStack_4c;
  iStack_38 = local_68;
  uStack_34 = uStack_64;
  iStack_60 = local_68;
  uStack_5c = uStack_64;
  local_48 = uStack_50;
  uStack_44 = iStack_4c;
  uStack_50 = 0xffffffff;
  iStack_4c = local_58._4_4_;
  bVar2 = local_58._4_4_ < iVar5;
  local_40 = param_1;
  local_58 = puStack_30;
  if (bVar2) {
    do {
      iVar7 = iStack_4c;
      iVar5 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar5 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar5 + 1) {
        TArray<FMaterialShaderMapId,FDefaultAllocator>::ResizeGrow(param_2,iVar5);
      }
      lVar3 = (longlong)iVar5 * 0xf8 + *param_2;
      if (lVar3 != 0) {
        FMaterialShaderMapId::FMaterialShaderMapId(lVar3,(longlong)iVar7 * 0x108 + *param_1);
      }
      uStack_50 = uStack_50 & ~uStack_5c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
    } while (iStack_4c < (int)local_58[6]);
  }
  return;
}



// FUNCTION 14257ccb0 FUN_14257ccb0 body=414 status=ok
// SIG undefined FUN_14257ccb0(void)

undefined8 FUN_14257ccb0(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  bool bVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *local_38;
  undefined8 local_30;
  
  *param_3 = 0;
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x2b8))();
  if (plVar5 != (longlong *)0x0) {
    local_38 = (undefined8 *)0x0;
    local_30 = 0;
    (**(code **)(*plVar5 + 0x2a0))(plVar5,&local_38);
    uVar2 = local_30;
    lVar10 = (longlong)(int)local_30;
    for (puVar7 = local_38; puVar7 != local_38 + lVar10; puVar7 = puVar7 + 1) {
      if ((longlong *)*puVar7 == plVar5) {
        if ((int)((longlong)puVar7 - (longlong)local_38 >> 3) != -1) goto LAB_14257cd6a;
        break;
      }
    }
    iVar4 = (int)local_30 + 1;
    local_30 = CONCAT44(local_30._4_4_,iVar4);
    if (local_30._4_4_ < iVar4) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                (&local_38,uVar2 & 0xffffffff);
    }
    local_38[lVar10] = plVar5;
LAB_14257cd6a:
    puVar7 = local_38 + (int)local_30;
    for (puVar9 = local_38; puVar9 != puVar7; puVar9 = puVar9 + 1) {
      plVar1 = (longlong *)*puVar9;
      plVar5 = (longlong *)(**(code **)(*plVar1 + 0x2c0))(plVar1);
      plVar8 = (longlong *)*plVar5;
      plVar5 = plVar8 + (int)plVar5[1];
      for (; plVar8 != plVar5; plVar8 = plVar8 + 1) {
        lVar10 = *plVar8;
        if (lVar10 != 0) {
          lVar6 = UMaterialExpressionFontSampleParameter::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if ((bVar3) && (*(longlong *)(lVar10 + 0x50) == *param_2)) {
            *param_3 = lVar10;
            if (param_4 != (undefined8 *)0x0) {
              *param_4 = plVar1;
            }
            if (local_38 != (undefined8 *)0x0) {
              FMemory::Free();
            }
            return 1;
          }
        }
      }
    }
    if (local_38 != (undefined8 *)0x0) {
      FMemory::Free(local_38);
    }
  }
  return 0;
}



// FUNCTION 14257ce50 FUN_14257ce50 body=417 status=ok
// SIG undefined FUN_14257ce50(void)

undefined8 FUN_14257ce50(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  bool bVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *local_38;
  undefined8 local_30;
  
  *param_3 = 0;
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x2b8))();
  if (plVar5 != (longlong *)0x0) {
    local_38 = (undefined8 *)0x0;
    local_30 = 0;
    (**(code **)(*plVar5 + 0x2a0))(plVar5,&local_38);
    uVar2 = local_30;
    lVar10 = (longlong)(int)local_30;
    for (puVar7 = local_38; puVar7 != local_38 + lVar10; puVar7 = puVar7 + 1) {
      if ((longlong *)*puVar7 == plVar5) {
        if ((int)((longlong)puVar7 - (longlong)local_38 >> 3) != -1) goto LAB_14257cf0a;
        break;
      }
    }
    iVar4 = (int)local_30 + 1;
    local_30 = CONCAT44(local_30._4_4_,iVar4);
    if (local_30._4_4_ < iVar4) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                (&local_38,uVar2 & 0xffffffff);
    }
    local_38[lVar10] = plVar5;
LAB_14257cf0a:
    puVar7 = local_38 + (int)local_30;
    for (puVar9 = local_38; puVar9 != puVar7; puVar9 = puVar9 + 1) {
      plVar1 = (longlong *)*puVar9;
      plVar5 = (longlong *)(**(code **)(*plVar1 + 0x2c0))(plVar1);
      plVar8 = (longlong *)*plVar5;
      plVar5 = plVar8 + (int)plVar5[1];
      for (; plVar8 != plVar5; plVar8 = plVar8 + 1) {
        lVar10 = *plVar8;
        if (lVar10 != 0) {
          lVar6 = UCompositingMediaInput::StaticClass();
          if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if ((bVar3) && (*(longlong *)(lVar10 + 0x1b8) == *param_2)) {
            *param_3 = lVar10;
            if (param_4 != (undefined8 *)0x0) {
              *param_4 = plVar1;
            }
            if (local_38 != (undefined8 *)0x0) {
              FMemory::Free();
            }
            return 1;
          }
        }
      }
    }
    if (local_38 != (undefined8 *)0x0) {
      FMemory::Free(local_38);
    }
  }
  return 0;
}



// FUNCTION 14257d000 FUN_14257d000 body=693 status=ok
// SIG undefined FUN_14257d000(void)

void FUN_14257d000(undefined8 *param_1,int param_2)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  
  iVar4 = (param_2 + -2) / 2;
  if (-1 < iVar4) {
    iVar6 = iVar4 * 2 + 1;
    iVar8 = iVar6;
    iVar7 = iVar4;
joined_r0x00014257d046:
    do {
      if (iVar6 < param_2) {
        iVar6 = iVar4 * 2;
        iVar11 = iVar6 + 1;
        if (iVar6 + 2 < param_2) {
          lVar12 = -1;
          pwVar1 = *(wchar_t **)(*(longlong *)(param_1[iVar11] + 0xd8) + 0x10);
          do {
            lVar12 = lVar12 + 1;
          } while (pwVar1[lVar12] != L'\0');
          pwVar2 = *(wchar_t **)(*(longlong *)(param_1[(longlong)iVar6 + 2] + 0xd8) + 0x10);
          lVar9 = -1;
          do {
            lVar9 = lVar9 + 1;
          } while (pwVar2[lVar9] != L'\0');
          iVar5 = (int)lVar12;
          if ((int)lVar9 <= (int)lVar12) {
            iVar5 = (int)lVar9;
          }
          iVar5 = wcsncmp(pwVar2,pwVar1,(longlong)iVar5);
          if (0 < iVar5) {
            iVar11 = iVar6;
          }
          iVar11 = iVar11 + 1;
        }
        lVar12 = -1;
        pwVar1 = *(wchar_t **)(*(longlong *)(param_1[iVar11] + 0xd8) + 0x10);
        do {
          lVar12 = lVar12 + 1;
        } while (pwVar1[lVar12] != L'\0');
        lVar9 = -1;
        pwVar2 = *(wchar_t **)(*(longlong *)(param_1[iVar4] + 0xd8) + 0x10);
        do {
          lVar9 = lVar9 + 1;
        } while (pwVar2[lVar9] != L'\0');
        iVar6 = (int)lVar12;
        if ((int)lVar9 <= (int)lVar12) {
          iVar6 = (int)lVar9;
        }
        iVar6 = wcsncmp(pwVar2,pwVar1,(longlong)iVar6);
        if (0 < iVar6) {
          uVar3 = param_1[iVar4];
          param_1[iVar4] = param_1[iVar11];
          iVar6 = iVar11 * 2 + 1;
          param_1[iVar11] = uVar3;
          iVar4 = iVar11;
          goto joined_r0x00014257d046;
        }
      }
      iVar6 = iVar8 + -2;
      iVar4 = iVar7 + -1;
      iVar8 = iVar6;
      iVar7 = iVar4;
    } while (-1 < iVar4);
  }
  param_2 = param_2 + -1;
  lVar12 = (longlong)param_2;
  if (0 < param_2) {
    do {
      iVar4 = 0;
      uVar3 = *param_1;
      *param_1 = param_1[lVar12];
      param_1[lVar12] = uVar3;
      if (1 < param_2) {
        do {
          iVar8 = iVar4 * 2;
          iVar6 = iVar8 + 1;
          if (iVar8 + 2 < param_2) {
            lVar9 = -1;
            pwVar1 = *(wchar_t **)(*(longlong *)(param_1[iVar6] + 0xd8) + 0x10);
            do {
              lVar9 = lVar9 + 1;
            } while (pwVar1[lVar9] != L'\0');
            pwVar2 = *(wchar_t **)(*(longlong *)(param_1[(longlong)iVar8 + 2] + 0xd8) + 0x10);
            lVar10 = -1;
            do {
              lVar10 = lVar10 + 1;
            } while (pwVar2[lVar10] != L'\0');
            iVar7 = (int)lVar9;
            if ((int)lVar10 <= (int)lVar9) {
              iVar7 = (int)lVar10;
            }
            iVar7 = wcsncmp(pwVar2,pwVar1,(longlong)iVar7);
            if (0 < iVar7) {
              iVar6 = iVar8;
            }
            iVar6 = iVar6 + 1;
          }
          lVar9 = -1;
          pwVar1 = *(wchar_t **)(*(longlong *)(param_1[iVar6] + 0xd8) + 0x10);
          do {
            lVar9 = lVar9 + 1;
          } while (pwVar1[lVar9] != L'\0');
          lVar10 = -1;
          pwVar2 = *(wchar_t **)(*(longlong *)(param_1[iVar4] + 0xd8) + 0x10);
          do {
            lVar10 = lVar10 + 1;
          } while (pwVar2[lVar10] != L'\0');
          iVar8 = (int)lVar9;
          if ((int)lVar10 <= (int)lVar9) {
            iVar8 = (int)lVar10;
          }
          iVar8 = wcsncmp(pwVar2,pwVar1,(longlong)iVar8);
          if (iVar8 < 1) break;
          uVar3 = param_1[iVar4];
          param_1[iVar4] = param_1[iVar6];
          param_1[iVar6] = uVar3;
          iVar4 = iVar6;
        } while (iVar6 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      lVar12 = lVar12 + -1;
    } while (0 < lVar12);
  }
  return;
}



// FUNCTION 14257d2c0 FUN_14257d2c0 body=878 status=ok
// SIG undefined FUN_14257d2c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14257d2c0(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  float fVar13;
  undefined1 auStack_388 [48];
  longlong local_358;
  longlong local_348;
  longlong lStack_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_388;
    lStack_340 = param_1 + (param_2 - 1) * 8;
    fVar13 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar13 = fVar13 + 1.8446744e+19;
    }
    local_348 = param_1;
    fVar13 = _guard_xfg_dispatch_icall_nop(fVar13);
    local_338 = (undefined4)(longlong)(fVar13 + fVar13);
    _guard_xfg_dispatch_icall_nop(local_330,0,0x2e8);
    plVar9 = &local_348;
    do {
      plVar7 = (longlong *)*plVar9;
      plVar8 = (longlong *)plVar9[1];
      local_358 = plVar9[2];
      lVar5 = ((longlong)plVar8 - (longlong)plVar7 >> 3) + 1;
      plVar12 = plVar7;
      iVar6 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_14257d3a0:
        if (8 < lVar5) {
          if (lVar5 < 0) {
            lVar5 = lVar5 + 1;
          }
          plVar10 = plVar8 + 1;
          lVar4 = plVar12[lVar5 >> 1];
          plVar12[lVar5 >> 1] = *plVar12;
          *plVar12 = lVar4;
          plVar7 = plVar12;
LAB_14257d3d0:
          plVar7 = plVar7 + 1;
          if (plVar7 <= plVar8) goto code_r0x00014257d3d9;
          goto LAB_14257d430;
        }
        for (; plVar10 = plVar12, plVar7 = plVar12, plVar12 < plVar8; plVar8 = plVar8 + -1) {
          while (plVar7 = plVar7 + 1, plVar7 <= plVar8) {
            lVar5 = -1;
            pwVar1 = *(wchar_t **)(*(longlong *)(*plVar7 + 0xd8) + 0x10);
            do {
              lVar5 = lVar5 + 1;
            } while (pwVar1[lVar5] != L'\0');
            lVar4 = -1;
            pwVar2 = *(wchar_t **)(*(longlong *)(*plVar10 + 0xd8) + 0x10);
            do {
              lVar4 = lVar4 + 1;
            } while (pwVar2[lVar4] != L'\0');
            iVar6 = (int)lVar5;
            if ((int)lVar4 <= (int)lVar5) {
              iVar6 = (int)lVar4;
            }
            iVar6 = wcsncmp(pwVar2,pwVar1,(longlong)iVar6);
            if (0 < iVar6) {
              plVar10 = plVar7;
            }
          }
          lVar5 = *plVar10;
          *plVar10 = *plVar8;
          *plVar8 = lVar5;
        }
        goto LAB_14257d539;
      }
LAB_14257d52a:
      FUN_14257d000(plVar7,lVar5,param_3,param_4);
LAB_14257d539:
      plVar9 = plVar9 + -3;
    } while (&local_348 <= plVar9);
  }
  return;
code_r0x00014257d3d9:
  lVar5 = -1;
  pwVar1 = *(wchar_t **)(*(longlong *)(*plVar7 + 0xd8) + 0x10);
  do {
    lVar5 = lVar5 + 1;
  } while (pwVar1[lVar5] != L'\0');
  lVar4 = -1;
  pwVar2 = *(wchar_t **)(*(longlong *)(*plVar12 + 0xd8) + 0x10);
  do {
    lVar4 = lVar4 + 1;
  } while (pwVar2[lVar4] != L'\0');
  iVar3 = (int)lVar5;
  if ((int)lVar4 <= (int)lVar5) {
    iVar3 = (int)lVar4;
  }
  iVar3 = wcsncmp(pwVar2,pwVar1,(longlong)iVar3);
  if (iVar3 < 1) goto LAB_14257d3d0;
LAB_14257d430:
  do {
    plVar11 = plVar10;
    plVar10 = plVar11 + -1;
    if (plVar10 <= plVar12) break;
    lVar5 = -1;
    pwVar1 = *(wchar_t **)(*(longlong *)(*plVar12 + 0xd8) + 0x10);
    do {
      lVar5 = lVar5 + 1;
    } while (pwVar1[lVar5] != L'\0');
    lVar4 = -1;
    pwVar2 = *(wchar_t **)(*(longlong *)(*plVar10 + 0xd8) + 0x10);
    do {
      lVar4 = lVar4 + 1;
    } while (pwVar2[lVar4] != L'\0');
    iVar3 = (int)lVar5;
    if ((int)lVar4 <= (int)lVar5) {
      iVar3 = (int)lVar4;
    }
    iVar3 = wcsncmp(pwVar2,pwVar1,(longlong)iVar3);
  } while (iVar3 < 1);
  if (plVar7 <= plVar10) {
    lVar5 = *plVar7;
    *plVar7 = *plVar10;
    *plVar10 = lVar5;
    goto LAB_14257d3d0;
  }
  lVar5 = *plVar12;
  iVar6 = iVar6 + -1;
  *plVar12 = *plVar10;
  *plVar10 = lVar5;
  if ((longlong)((longlong)plVar10 + (-8 - (longlong)plVar12) & 0xfffffffffffffff8U) <
      (longlong)((longlong)plVar8 - (longlong)plVar7 & 0xfffffffffffffff8U)) {
    if (plVar7 < plVar8) {
      *plVar9 = (longlong)plVar7;
      plVar9[1] = (longlong)plVar8;
      *(int *)(plVar9 + 2) = iVar6;
      plVar9 = plVar9 + 3;
    }
    if (plVar10 <= plVar12 + 1) goto LAB_14257d539;
    plVar8 = plVar11 + -2;
    plVar7 = plVar12;
  }
  else {
    if (plVar12 + 1 < plVar10) {
      *plVar9 = (longlong)plVar12;
      plVar9[1] = (longlong)(plVar11 + -2);
      *(int *)(plVar9 + 2) = iVar6;
      plVar9 = plVar9 + 3;
    }
    if (plVar8 <= plVar7) goto LAB_14257d539;
  }
  lVar5 = ((longlong)plVar8 - (longlong)plVar7 >> 3) + 1;
  plVar12 = plVar7;
  if (iVar6 == 0) goto LAB_14257d52a;
  goto LAB_14257d3a0;
}



// FUNCTION 14257d630 FUN_14257d630 body=488 status=ok
// SIG undefined FUN_14257d630(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14257d630(longlong *param_1)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  longlong local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  longlong local_48;
  longlong local_40;
  
  uVar8 = 1 << ((byte)DAT_1464c9c14 & 0x1f) | _DAT_146afe3a0;
  if (uVar8 != 0) {
    do {
      uVar6 = -uVar8 & uVar8;
      iVar2 = 0x1f;
      if (uVar6 != 0) {
        for (; uVar6 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar7 = 0;
      if (uVar6 != 0) {
        iVar7 = iVar2;
      }
      lVar3 = (**(code **)(*(longlong *)*param_1 + 0x48))((longlong *)*param_1,iVar7);
      if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x10) != 0)) {
        local_res10 = 0;
        (**(code **)(*(longlong *)*param_1 + 0x40))
                  ((longlong *)*param_1,iVar7,local_res20,&local_res10);
        if (local_res10 == lVar3) {
          lVar3 = *param_1;
          local_40 = local_res10;
          local_48 = lVar3;
          if ((*(byte *)(lVar3 + 0x110) & 8) != 0) {
            lVar4 = FUN_1428742e0();
            lVar3 = *param_1;
            if (*(int *)(lVar4 + 0xc) != *(int *)(lVar3 + 0x130)) {
              bVar1 = *(byte *)(lVar3 + 0x110);
              if ((bVar1 & 8) != 0) {
                *(byte *)(lVar3 + 0x110) = bVar1 & 0xf7 | 0x10;
                lVar3 = *param_1;
              }
            }
          }
          if ((((*(byte *)(lVar3 + 0x110) & 6) == 6) && ((*(byte *)(lVar3 + 0x110) & 8) == 0)) &&
             (DAT_146533c40 != 0)) {
            FUN_1425870c0(lVar3,&local_48);
            lVar3 = *param_1;
          }
          if ((*(byte *)(lVar3 + 0x110) & 0x18) == 0x18) {
            FUN_14258e0b0(lVar3,&local_48);
            lVar3 = *param_1;
          }
          lVar3 = (longlong)iVar7 * 0x38 + lVar3;
          lVar4 = *(longlong *)(local_40 + 0x10);
          *(longlong *)(lVar3 + 0x60) = lVar4;
          uVar5 = FUN_1425bb230(lVar4 + 0x1f8,local_res18,&local_48,0,lVar3 + 0x38);
          TRefCountPtr<FRHIIndexBuffer>::operator=(lVar3 + 0x30,uVar5);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res18);
          FUN_1408e22e0(lVar3 + 0x48,lVar4 + 0x2a8);
          *(undefined1 *)(lVar3 + 0x58) = 1;
        }
      }
      bVar9 = uVar6 != uVar8;
      uVar8 = uVar8 ^ uVar6;
    } while (bVar9);
  }
  return;
}



// FUNCTION 14257d820 FUN_14257d820 body=297 status=ok
// SIG undefined FUN_14257d820(void)

void FUN_14257d820(longlong param_1,int *param_2)

{
  int iVar1;
  char *pcVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar8 = *(int *)(param_1 + 0x168);
  uVar5 = 0;
  if (0 < iVar8) {
    lVar4 = *(longlong *)(param_1 + 0x160);
    pcVar2 = (char *)(lVar4 + 0xb);
    uVar7 = uVar5;
    do {
      iVar6 = (int)uVar7;
      if ((((*(int *)(pcVar2 + -0xb) == *param_2) && (*(int *)(pcVar2 + -7) == param_2[1])) &&
          (*pcVar2 == *(char *)((longlong)param_2 + 0xb))) && (*(int *)(pcVar2 + 1) == param_2[3]))
      {
        if (*(short *)(pcVar2 + -3) == -1) {
          iVar1 = (iVar8 - iVar6) + -1;
          if (iVar1 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(lVar4 + (longlong)iVar6 * 0x18),
                       (void *)(lVar4 + (longlong)(iVar6 + 1) * 0x18),(longlong)iVar1 * 0x18);
            iVar8 = *(int *)(param_1 + 0x168);
          }
          *(int *)(param_1 + 0x168) = iVar8 + -1;
          TArray<FFurData::FSection,FDefaultAllocator>::ResizeShrink(param_1 + 0x160);
        }
        else {
          pcVar2[-1] = '\x02';
        }
        *(byte *)(param_1 + 0x110) = *(byte *)(param_1 + 0x110) | 0x10;
        puVar3 = (undefined8 *)(param_1 + 0x60);
        param_1 = param_1 + 0x30;
        lVar4 = 4;
        do {
          *(undefined1 *)(puVar3 + -1) = 0;
          TRefCountPtr<FRHIIndexBuffer>::operator=(param_1,0);
          param_1 = param_1 + 0x38;
          *puVar3 = 0;
          puVar3 = puVar3 + 7;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
        return;
      }
      uVar7 = (ulonglong)(iVar6 + 1);
      uVar5 = uVar5 + 1;
      pcVar2 = pcVar2 + 0x18;
    } while ((longlong)uVar5 < (longlong)iVar8);
  }
  return;
}



// FUNCTION 14257d950 FUN_14257d950 body=283 status=ok
// SIG undefined FUN_14257d950(void)

void FUN_14257d950(longlong param_1,int *param_2)

{
  int iVar1;
  char *pcVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar8 = *(int *)(param_1 + 0x158);
  uVar5 = 0;
  if (0 < iVar8) {
    lVar4 = *(longlong *)(param_1 + 0x150);
    pcVar2 = (char *)(lVar4 + 0xb);
    uVar7 = uVar5;
    do {
      iVar6 = (int)uVar7;
      if ((((*(int *)(pcVar2 + -0xb) == *param_2) && (*(int *)(pcVar2 + -7) == param_2[1])) &&
          (*pcVar2 == *(char *)((longlong)param_2 + 0xb))) && (*(int *)(pcVar2 + 1) == param_2[3]))
      {
        if (*(short *)(pcVar2 + -3) == -1) {
          iVar1 = (iVar8 - iVar6) + -1;
          if (iVar1 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)iVar6 * 0x20 + lVar4),
                       (void *)((longlong)(iVar6 + 1) * 0x20 + lVar4),(longlong)iVar1 << 5);
            iVar8 = *(int *)(param_1 + 0x158);
          }
          *(int *)(param_1 + 0x158) = iVar8 + -1;
          TArray<FUniqueNetIdSteam,FDefaultAllocator>::ResizeShrink(param_1 + 0x150);
        }
        else {
          pcVar2[-1] = '\x02';
        }
        *(byte *)(param_1 + 0x110) = *(byte *)(param_1 + 0x110) | 0x10;
        puVar3 = (undefined8 *)(param_1 + 0x60);
        param_1 = param_1 + 0x30;
        lVar4 = 4;
        do {
          *(undefined1 *)(puVar3 + -1) = 0;
          TRefCountPtr<FRHIIndexBuffer>::operator=(param_1,0);
          param_1 = param_1 + 0x38;
          *puVar3 = 0;
          puVar3 = puVar3 + 7;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
        return;
      }
      uVar7 = (ulonglong)(iVar6 + 1);
      uVar5 = uVar5 + 1;
      pcVar2 = pcVar2 + 0x20;
    } while ((longlong)uVar5 < (longlong)iVar8);
  }
  return;
}



// FUNCTION 14257da70 FUN_14257da70 body=286 status=ok
// SIG undefined FUN_14257da70(void)

void FUN_14257da70(longlong param_1,int *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  char *pcVar9;
  longlong lVar10;
  
  FUN_14259b260();
  iVar3 = *(int *)(param_1 + 0x168);
  lVar10 = (longlong)iVar3;
  lVar5 = *(longlong *)(param_1 + 0x160);
  lVar8 = lVar5 + lVar10 * 0x18;
  if (lVar8 != lVar5) {
    pcVar9 = (char *)(lVar8 + -0xd);
    do {
      if ((((*(int *)(pcVar9 + -0xb) == *param_2) && (*(int *)(pcVar9 + -7) == param_2[1])) &&
          (*pcVar9 == *(char *)((longlong)param_2 + 0xb))) && (*(int *)(pcVar9 + 1) == param_2[3]))
      {
        pcVar9[-1] = '\x01';
        *(undefined4 *)(pcVar9 + 5) = *param_3;
        return;
      }
      lVar8 = lVar8 + -0x18;
      pcVar9 = pcVar9 + -0x18;
    } while (lVar8 != lVar5);
  }
  uVar2 = *(undefined1 *)((longlong)param_2 + 0xb);
  iVar7 = param_2[2];
  uVar6 = *(undefined8 *)param_2;
  iVar4 = param_2[3];
  uVar1 = *param_3;
  *(int *)(param_1 + 0x168) = iVar3 + 1;
  if (*(int *)(param_1 + 0x16c) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 0x160,iVar3);
  }
  lVar8 = *(longlong *)(param_1 + 0x160);
  *(undefined8 *)(lVar8 + lVar10 * 0x18) = uVar6;
  *(short *)(lVar8 + 8 + lVar10 * 0x18) = (short)iVar7;
  *(undefined1 *)(lVar8 + 10 + lVar10 * 0x18) = 1;
  *(undefined1 *)(lVar8 + 0xb + lVar10 * 0x18) = uVar2;
  *(int *)(lVar8 + 0xc + lVar10 * 0x18) = iVar4;
  *(undefined4 *)(lVar8 + 0x10 + lVar10 * 0x18) = uVar1;
  return;
}



// FUNCTION 14257db90 FUN_14257db90 body=272 status=ok
// SIG undefined FUN_14257db90(void)

void FUN_14257db90(longlong param_1,int *param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  char *pcVar9;
  longlong lVar10;
  
  FUN_14259b260();
  iVar2 = *(int *)(param_1 + 0x178);
  lVar10 = (longlong)iVar2;
  lVar4 = *(longlong *)(param_1 + 0x170);
  lVar8 = lVar4 + lVar10 * 0x18;
  if (lVar8 != lVar4) {
    pcVar9 = (char *)(lVar8 + -0xd);
    do {
      if ((((*(int *)(pcVar9 + -0xb) == *param_2) && (*(int *)(pcVar9 + -7) == param_2[1])) &&
          (*pcVar9 == *(char *)((longlong)param_2 + 0xb))) && (*(int *)(pcVar9 + 1) == param_2[3]))
      {
        pcVar9[-1] = '\x01';
        *(undefined8 *)(pcVar9 + 5) = *param_3;
        return;
      }
      lVar8 = lVar8 + -0x18;
      pcVar9 = pcVar9 + -0x18;
    } while (lVar8 != lVar4);
  }
  uVar5 = *param_3;
  uVar1 = *(undefined1 *)((longlong)param_2 + 0xb);
  iVar7 = param_2[2];
  uVar6 = *(undefined8 *)param_2;
  iVar3 = param_2[3];
  *(int *)(param_1 + 0x178) = iVar2 + 1;
  if (*(int *)(param_1 + 0x17c) < iVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 0x170,iVar2);
  }
  lVar8 = *(longlong *)(param_1 + 0x170);
  *(undefined8 *)(lVar8 + lVar10 * 0x18) = uVar6;
  *(short *)(lVar8 + 8 + lVar10 * 0x18) = (short)iVar7;
  *(undefined1 *)(lVar8 + 10 + lVar10 * 0x18) = 1;
  *(undefined1 *)(lVar8 + 0xb + lVar10 * 0x18) = uVar1;
  *(int *)(lVar8 + 0xc + lVar10 * 0x18) = iVar3;
  *(undefined8 *)(lVar8 + 0x10 + lVar10 * 0x18) = uVar5;
  return;
}



// FUNCTION 14257dca0 FUN_14257dca0 body=280 status=ok
// SIG undefined FUN_14257dca0(void)

void FUN_14257dca0(longlong param_1,int *param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  longlong lVar11;
  char *pcVar12;
  undefined8 *puVar13;
  
  FUN_14259b260();
  iVar2 = *(int *)(param_1 + 0x158);
  lVar4 = *(longlong *)(param_1 + 0x150);
  lVar11 = (longlong)iVar2 * 0x20 + lVar4;
  if (lVar11 != lVar4) {
    pcVar12 = (char *)(lVar11 + -0x15);
    do {
      if ((((*(int *)(pcVar12 + -0xb) == *param_2) && (*(int *)(pcVar12 + -7) == param_2[1])) &&
          (*pcVar12 == *(char *)((longlong)param_2 + 0xb))) && (*(int *)(pcVar12 + 1) == param_2[3])
         ) {
        pcVar12[-1] = '\x01';
        uVar5 = param_3[1];
        *(undefined8 *)(pcVar12 + 5) = *param_3;
        *(undefined8 *)(pcVar12 + 0xd) = uVar5;
        return;
      }
      lVar11 = lVar11 + -0x20;
      pcVar12 = pcVar12 + -0x20;
    } while (lVar11 != lVar4);
  }
  uVar6 = *(undefined4 *)param_3;
  uVar7 = *(undefined4 *)((longlong)param_3 + 4);
  uVar8 = *(undefined4 *)(param_3 + 1);
  uVar9 = *(undefined4 *)((longlong)param_3 + 0xc);
  uVar5 = *(undefined8 *)param_2;
  iVar10 = param_2[2];
  uVar1 = *(undefined1 *)((longlong)param_2 + 0xb);
  iVar3 = param_2[3];
  *(int *)(param_1 + 0x158) = iVar2 + 1;
  if (*(int *)(param_1 + 0x15c) < iVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(param_1 + 0x150,iVar2);
  }
  puVar13 = (undefined8 *)((longlong)iVar2 * 0x20 + *(longlong *)(param_1 + 0x150));
  *puVar13 = uVar5;
  *(short *)(puVar13 + 1) = (short)iVar10;
  *(undefined1 *)((longlong)puVar13 + 10) = 1;
  *(undefined1 *)((longlong)puVar13 + 0xb) = uVar1;
  *(int *)((longlong)puVar13 + 0xc) = iVar3;
  *(undefined4 *)(puVar13 + 2) = uVar6;
  *(undefined4 *)((longlong)puVar13 + 0x14) = uVar7;
  *(undefined4 *)(puVar13 + 3) = uVar8;
  *(undefined4 *)((longlong)puVar13 + 0x1c) = uVar9;
  return;
}



// FUNCTION 14257ddc0 FUN_14257ddc0 body=41 status=ok
// SIG undefined FUN_14257ddc0(void)

undefined8 * FUN_14257ddc0(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined2 *)((longlong)param_1 + 10) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 2) = 0x3eaaaa9f;
  *(undefined2 *)((longlong)param_1 + 0x14) = 0x100;
  *(uint *)(param_1 + 3) = *(uint *)(param_1 + 3) & 0xfffffc60;
  return param_1;
}



// FUNCTION 14257ddf0 FUN_14257ddf0 body=477 status=ok
// SIG undefined FUN_14257ddf0(void)

undefined8 *
FUN_14257ddf0(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  byte bVar1;
  longlong lVar2;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  param_1[0x21] = 0;
  param_1[0x24] = param_5;
  param_1[0x25] = param_6;
  *(byte *)(param_1 + 0x22) = *(byte *)(param_1 + 0x22) & 0x90 | 0x10;
  *param_1 = &PTR__scalar_deleting_destructor__14510be60;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x26) = 3;
  param_1[0x27] = 0;
  param_1[0x28] = param_2;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(byte *)(param_1 + 0x22) = *(byte *)(param_1 + 0x22) | 2;
  lVar2 = FUN_1429ba110();
  if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
     (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
      lVar2 + 0x88)) {
    bVar1 = 0;
  }
  else {
    bVar1 = 4;
  }
  *(byte *)(param_1 + 0x22) = *(byte *)(param_1 + 0x22) & 0xfb;
  *(byte *)(param_1 + 0x22) = *(byte *)(param_1 + 0x22) | bVar1;
  bVar1 = (**(code **)(*param_2 + 0x280))(param_2);
  *(byte *)(param_1 + 0x22) = *(byte *)(param_1 + 0x22) & 0xbf;
  *(byte *)(param_1 + 0x22) = *(byte *)(param_1 + 0x22) | (bVar1 & 1) << 6;
  bVar1 = (**(code **)(*param_2 + 0x278))(param_2);
  *(byte *)(param_1 + 0x22) = *(byte *)(param_1 + 0x22) & 0xdf;
  *(byte *)(param_1 + 0x22) = *(byte *)(param_1 + 0x22) | (bVar1 & 1) << 5;
  return param_1;
}



// FUNCTION 14257dfd0 FUN_14257dfd0 body=244 status=ok
// SIG undefined FUN_14257dfd0(void)

undefined8 * FUN_14257dfd0(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__14510ae30;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  param_1[0x21] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(byte *)(param_1 + 0x22) = *(byte *)(param_1 + 0x22) & 0x90 | 0x10;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 3;
  return param_1;
}



// FUNCTION 14257e0d0 FUN_14257e0d0 body=252 status=ok
// SIG undefined FUN_14257e0d0(void)

undefined8 *
FUN_14257e0d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__14510ae30;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  param_1[0x21] = 0;
  param_1[0x24] = param_4;
  param_1[0x25] = param_5;
  *(byte *)(param_1 + 0x22) = *(byte *)(param_1 + 0x22) & 0x90 | 0x10;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x26) = 3;
  return param_1;
}



// FUNCTION 14257e1d0 FUN_14257e1d0 body=487 status=ok
// SIG undefined FUN_14257e1d0(void)

undefined8 * FUN_14257e1d0(undefined8 *param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  
  *(undefined2 *)(param_1 + 1) = 0x100;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = param_2;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *param_1 = &PTR_FUN_14510ae08;
  param_1[0x1b] = &PTR_LAB_14510ae20;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  FMaterialShaderMapId::FMaterialShaderMapId(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x3f] = &PTR_FUN_14510add0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  *(undefined1 *)(param_1 + 0x68) = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  *(uint *)((longlong)param_1 + 0x364) = *(uint *)((longlong)param_1 + 0x364) & 0xfffffffe;
  *(uint *)((longlong)param_1 + 0x364) = *(uint *)((longlong)param_1 + 0x364) | 0xe;
  param_1[0x6b] = 1;
  *(undefined1 *)(param_1 + 0x6c) = 0;
  iVar1 = DAT_146afee28;
  lVar2 = (longlong)DAT_146afee28;
  DAT_146afee28 = DAT_146afee28 + 1;
  if (DAT_146afee2c < DAT_146afee28) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146afee20,iVar1);
  }
  *(undefined8 **)(DAT_146afee20 + lVar2 * 8) = param_1;
  return param_1;
}



// FUNCTION 14257e3c0 FMaterialShaderMapId body=616 status=ok
// SIG undefined FMaterialShaderMapId(void)

undefined4 * FMaterialShaderMapId::FMaterialShaderMapId(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  FUN_14257ecf0(param_1 + 8,param_2 + 8);
  FString::FString(param_1 + 0x18,param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x1c) = 0;
  iVar1 = param_2[0x1e];
  pvVar2 = *(void **)(param_2 + 0x1c);
  param_1[0x1e] = iVar1;
  if (iVar1 == 0) {
    param_1[0x1f] = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 0x1c,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x1c),pvVar2,(longlong)iVar1 << 4);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  iVar1 = param_2[0x22];
  pvVar2 = *(void **)(param_2 + 0x20);
  param_1[0x22] = iVar1;
  if (iVar1 == 0) {
    param_1[0x23] = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 0x20,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x20),pvVar2,(longlong)iVar1 << 4);
  }
  *(undefined8 *)(param_1 + 0x24) = 0;
  iVar1 = param_2[0x26];
  pvVar2 = *(void **)(param_2 + 0x24);
  param_1[0x26] = iVar1;
  if (iVar1 == 0) {
    param_1[0x27] = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 0x24,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x24),pvVar2,(longlong)iVar1 << 4);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  iVar1 = param_2[0x2a];
  pvVar2 = *(void **)(param_2 + 0x28);
  param_1[0x2a] = iVar1;
  if (iVar1 == 0) {
    param_1[0x2b] = 0;
  }
  else {
    TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy(param_1 + 0x28,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x28),pvVar2,(longlong)iVar1 << 5);
  }
  *(undefined8 *)(param_1 + 0x2c) = 0;
  iVar1 = param_2[0x2e];
  pvVar2 = *(void **)(param_2 + 0x2c);
  param_1[0x2e] = iVar1;
  if (iVar1 == 0) {
    param_1[0x2f] = 0;
  }
  else {
    TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy(param_1 + 0x2c,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x2c),pvVar2,(longlong)iVar1 << 5);
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  iVar1 = param_2[0x32];
  pvVar2 = *(void **)(param_2 + 0x30);
  param_1[0x32] = iVar1;
  if (iVar1 == 0) {
    param_1[0x33] = 0;
  }
  else {
    TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy(param_1 + 0x30,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x30),pvVar2,(longlong)iVar1 << 5);
  }
  uVar6 = *(undefined8 *)(param_2 + 0x36);
  *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x34);
  *(undefined8 *)(param_1 + 0x36) = uVar6;
  param_1[0x38] = param_2[0x38];
  uVar6 = *(undefined8 *)(param_2 + 0x3b);
  *(undefined8 *)(param_1 + 0x39) = *(undefined8 *)(param_2 + 0x39);
  *(undefined8 *)(param_1 + 0x3b) = uVar6;
  param_1[0x3d] = param_2[0x3d];
  return param_1;
}



// FUNCTION 14257e630 FMaterialShaderMapId body=181 status=ok
// SIG undefined FMaterialShaderMapId(void)

undefined8 * FMaterialShaderMapId::FMaterialShaderMapId(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 1;
  *(undefined8 *)((longlong)param_1 + 0x14) = 2;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
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
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  return param_1;
}



// FUNCTION 14257e6f0 FUN_14257e6f0 body=374 status=ok
// SIG undefined FUN_14257e6f0(void)

undefined8 * FUN_14257e6f0(undefined8 *param_1,ulonglong param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_res8;
  
  lVar4 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  plVar1 = param_1 + 0x14;
  *plVar1 = 0;
  plVar2 = param_1 + 0x15;
  *plVar2 = 0;
  *(byte *)((longlong)param_1 + 0xb4) = (byte)(param_2 >> 1) & 1;
  if ((param_2 & 1) == 0) {
    if ((param_2 >> 2 & 1) == 0) goto LAB_14257e832;
    lVar3 = operator_new(0x10);
    if (lVar3 != 0) {
      lVar4 = FUN_142325a50(lVar3,0);
    }
    if (plVar2 == &local_res8) {
      if (lVar4 == 0) goto LAB_14257e832;
      FGlobalComponentRecreateRenderStateContext::~FGlobalComponentRecreateRenderStateContext(lVar4)
      ;
    }
    else {
      lVar3 = *plVar2;
      *plVar2 = lVar4;
      if (lVar3 == 0) goto LAB_14257e832;
      FGlobalComponentRecreateRenderStateContext::~FGlobalComponentRecreateRenderStateContext(lVar3)
      ;
      lVar4 = lVar3;
    }
  }
  else {
    lVar3 = operator_new(0x10);
    if (lVar3 != 0) {
      lVar4 = FUN_142325c50(lVar3);
    }
    if (plVar1 == &local_res8) {
      if (lVar4 == 0) goto LAB_14257e832;
      FGlobalComponentReregisterContext::~FGlobalComponentReregisterContext(lVar4);
    }
    else {
      lVar3 = *plVar1;
      *plVar1 = lVar4;
      if (lVar3 == 0) goto LAB_14257e832;
      FGlobalComponentReregisterContext::~FGlobalComponentReregisterContext(lVar3);
      lVar4 = lVar3;
    }
  }
  FMemory::operator_delete(lVar4,0x10);
LAB_14257e832:
  if (*(char *)((longlong)param_1 + 0xb4) != '\0') {
    FUN_141ee24f0(0);
  }
  *(undefined4 *)(param_1 + 0x16) = param_3;
  return param_1;
}



// FUNCTION 14257e870 FUN_14257e870 body=424 status=ok
// SIG undefined FUN_14257e870(void)

undefined8 *
FUN_14257e870(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  *(undefined4 *)(param_1 + 2) = param_2;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__14510bf20;
  *(undefined4 *)(param_1 + 5) = param_5;
  *(undefined2 *)((longlong)param_1 + 0x14) = 0;
  *(undefined1 *)((longlong)param_1 + 0x16) = 0;
  param_1[3] = param_3;
  param_1[4] = param_4;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  FUN_14257ea20(param_1 + 0x17);
  param_1[0x61] = 0;
  *(undefined1 *)(param_1 + 0x62) = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x35c) = 0;
  param_1[0x6d] = 0;
  *(undefined4 *)(param_1 + 0x6e) = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  *(undefined2 *)((longlong)param_1 + 0x3d4) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3d6) = 0;
  *(undefined4 *)(param_1 + 0x7a) = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  *(undefined4 *)(param_1 + 0x85) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x42c) = 0;
  param_1[0x87] = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  return param_1;
}



// FUNCTION 14257ea20 FUN_14257ea20 body=716 status=ok
// SIG undefined FUN_14257ea20(void)

undefined8 * FUN_14257ea20(undefined8 *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  DWORD DVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined *puVar7;
  
  lVar6 = 0;
  puVar1 = param_1 + 0x40;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__145109c88;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x194) = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  *puVar1 = 0;
  param_1[0x41] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x46) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x234) = 0;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x49) = 0;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Empty(puVar1,0x32);
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 2,0xf);
  FShaderCompilerDefinitions::SetDefine(puVar1,L"WITH_TIMEOFDAY",1);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146afeee8) && (_Init_thread_header(&DAT_146afeee8), DAT_146afeee8 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.FullQualitySphericalHarmonics");
    lVar5 = lVar6;
    if (plVar4 != (longlong *)0x0) {
      lVar5 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    DAT_146afeee0 = lVar5;
    _Init_thread_footer(&DAT_146afeee8);
  }
  lVar5 = DAT_146afeee0;
  if (DAT_146afeee0 != 0) {
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar2 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar3 = GetCurrentThreadId(), DVar3 != DAT_1468c21c0)) {
      lVar6 = 4;
    }
    puVar7 = &DAT_144573578;
    if (*(int *)(lVar5 + lVar6) == 0) goto LAB_14257ec56;
  }
  puVar7 = &DAT_143f591f0;
LAB_14257ec56:
  FUN_1404a3a40(param_1,L"WITH_HIGH_QUALITY_SH",puVar7);
  return param_1;
}


