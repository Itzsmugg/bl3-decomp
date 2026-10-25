// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140ed0370 FUN_140ed0370 body=190 status=ok
// SIG undefined FUN_140ed0370(void)

undefined8 * FUN_140ed0370(undefined8 *param_1)

{
  FUN_1423c48a0();
  *param_1 = &PTR__scalar_deleting_destructor__144603d10;
  param_1[5] = &PTR_LAB_144604690;
  param_1[0x5a] = &PTR_LAB_1446046c0;
  FName::FName(param_1 + 0xf5,L"SWFTexture",1);
  *(undefined1 *)(param_1 + 0xf6) = 1;
  *(undefined4 *)((longlong)param_1 + 0x7b4) = 99999;
  *(undefined4 *)(param_1 + 0xf7) = 0x44000000;
  *(undefined4 *)((longlong)param_1 + 0x7bc) = 0x44000000;
  *(undefined1 *)(param_1 + 7) = 0;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) & 0xfd;
  *(uint *)(param_1 + 0x73) = *(uint *)(param_1 + 0x73) | 1;
  *(byte *)((longlong)param_1 + 0x24c) = *(byte *)((longlong)param_1 + 0x24c) | 0x1c;
  *(undefined4 *)(param_1 + 0xe) = 0x3e4ccccd;
  *(byte *)((longlong)param_1 + 0x3c) =
       (*(byte *)(param_1 + 0xf6) & 1) * '\x02' | *(byte *)((longlong)param_1 + 0x3c) & 0xfb |
       (*(byte *)(param_1 + 0xf6) & 1) << 2;
  FUN_142397540(param_1,0,1);
  return param_1;
}



// FUNCTION 140ed0430 FUN_140ed0430 body=82 status=ok
// SIG undefined FUN_140ed0430(void)

void FUN_140ed0430(longlong *param_1)

{
  FUN_140e9bfd0(param_1 + 0x2c);
  FUN_140e9c100(param_1 + 9);
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 140ed0490 FUN_140ed0490 body=142 status=ok
// SIG undefined FUN_140ed0490(void)

void FUN_140ed0490(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x28);
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
  plVar4 = *(longlong **)(param_1 + 0x10);
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



// FUNCTION 140ed0520 FUN_140ed0520 body=383 status=ok
// SIG undefined FUN_140ed0520(void)

longlong * FUN_140ed0520(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  
  if (param_1 != param_2) {
    iVar6 = (int)param_1[1];
    if (iVar6 != 0) {
      plVar7 = (longlong *)(*param_1 + 0x40);
      do {
        if (plVar7[8] != 0) {
          FMemory::Free();
        }
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
        plVar4 = (longlong *)plVar7[-3];
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
        plVar4 = (longlong *)plVar7[-7];
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
        plVar7 = plVar7 + 0x22;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    iVar6 = (int)param_2[1];
    lVar5 = *param_2;
    *(int *)(param_1 + 1) = iVar6;
    if ((iVar6 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_140f07dc0(param_1,iVar6);
      lVar8 = *param_1;
      for (; iVar6 != 0; iVar6 = iVar6 + -1) {
        FUN_140e9a4f0(lVar8,lVar5);
        lVar8 = lVar8 + 0x110;
        lVar5 = lVar5 + 0x110;
      }
    }
  }
  return param_1;
}



// FUNCTION 140ed06a0 FUN_140ed06a0 body=28 status=ok
// SIG undefined FUN_140ed06a0(void)

undefined8 * FUN_140ed06a0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  return param_1;
}



// FUNCTION 140ed06c0 FUN_140ed06c0 body=469 status=ok
// SIG undefined FUN_140ed06c0(void)

undefined1 * FUN_140ed06c0(undefined1 *param_1,undefined1 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)(param_2 + 0x18);
  *param_1 = *param_2;
  plVar2 = (longlong *)(param_1 + 0x18);
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  param_1[0x10] = param_2[0x10];
  if (plVar2 != plVar1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
    *(undefined8 *)(param_2 + 0x20) = 0;
  }
  plVar1 = (longlong *)(param_2 + 0x30);
  param_1[0x28] = param_2[0x28];
  plVar2 = (longlong *)(param_1 + 0x30);
  param_1[0x29] = param_2[0x29];
  param_1[0x2a] = param_2[0x2a];
  param_1[0x2b] = param_2[0x2b];
  if (plVar2 != plVar1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
    *(undefined8 *)(param_2 + 0x38) = 0;
  }
  plVar1 = (longlong *)(param_2 + 0x40);
  plVar2 = (longlong *)(param_1 + 0x40);
  if (plVar2 != plVar1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
    *(undefined8 *)(param_2 + 0x48) = 0;
  }
  plVar1 = (longlong *)(param_2 + 0x50);
  plVar2 = (longlong *)(param_1 + 0x50);
  if (plVar2 != plVar1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
    *(undefined8 *)(param_2 + 0x58) = 0;
  }
  param_1[0x60] = param_2[0x60];
  param_1[0x61] = param_2[0x61];
  param_1[0x62] = param_2[0x62];
  *(undefined8 *)(param_1 + 100) = *(undefined8 *)(param_2 + 100);
  param_1[0x6c] = param_2[0x6c];
  param_1[0x6d] = param_2[0x6d];
  param_1[0x6e] = param_2[0x6e];
  param_1[0x6f] = param_2[0x6f];
  param_1[0x70] = param_2[0x70];
  param_1[0x71] = param_2[0x71];
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  param_1[0x88] = param_2[0x88];
  param_1[0x89] = param_2[0x89];
  return param_1;
}



// FUNCTION 140ed08a0 FUN_140ed08a0 body=198 status=ok
// SIG undefined FUN_140ed08a0(void)

undefined8 *
FUN_140ed08a0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 local_20;
  longlong *local_18 [2];
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined1 *)((longlong)param_1 + 0xc) = *(undefined1 *)((longlong)param_2 + 0xc);
  puVar7 = (undefined8 *)FKey::GetFName(param_2 + 2);
  local_18[0] = (longlong *)0x0;
  uVar4 = *puVar7;
  param_1[2] = uVar4;
  if (param_1 + 3 != &local_20) {
    param_1[3] = 0;
    local_20 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (param_1 + 4,local_18,param_3,param_4,uVar4);
    plVar6 = local_18[0];
    if (local_18[0] != (longlong *)0x0) {
      LOCK();
      plVar1 = local_18[0] + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_18[0])(local_18[0]);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_18[0] + 8))(local_18[0],1);
        }
      }
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 140ed0970 FUN_140ed0970 body=431 status=ok
// SIG undefined FUN_140ed0970(void)

void FUN_140ed0970(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 local_res8 [8];
  undefined4 uStack_1c;
  
  lVar4 = FWeakObjectPtr::Get(*param_1 + 0x5cc);
  if (lVar4 != 0) {
    lVar5 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      lVar5 = *param_1;
      uVar8 = 0;
      plVar1 = (longlong *)(lVar4 + 0x9a0);
      plVar6 = (longlong *)FMemory::Realloc(0,0x30,0);
      if (plVar6 != (longlong *)0x0) {
        *plVar6 = (longlong)&PTR_FUN_143fcfec0;
        FWeakObjectPtr::operator=(plVar6 + 1,lVar5);
        *(undefined4 *)(plVar6 + 2) = 0x40eedeb0;
        *(undefined4 *)((longlong)plVar6 + 0x14) = 1;
        *(undefined4 *)(plVar6 + 3) = 0;
        *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_1c;
        lVar5 = FDelegateHandle::GenerateNewID();
        plVar6[5] = lVar5;
        *plVar6 = (longlong)&PTR_FUN_143fcff08;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
        puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x20))(plVar6,local_res8);
        iVar2 = *(int *)(lVar4 + 0x9a8);
        uVar8 = *puVar7;
        *(int *)(lVar4 + 0x9a8) = iVar2 + 1;
        if (*(int *)(lVar4 + 0x9ac) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
        }
        lVar4 = *plVar1;
        *(longlong **)(lVar4 + (longlong)iVar2 * 0x10) = plVar6;
        *(undefined4 *)(lVar4 + 8 + (longlong)iVar2 * 0x10) = 3;
      }
      *(undefined8 *)(*param_1 + 0x6e8) = uVar8;
    }
  }
  lVar4 = FWeakObjectPtr::Get(*param_1 + 0x58c);
  if (lVar4 != 0) {
    lVar5 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      FUN_140d04ad0(lVar4,*(undefined8 *)(*param_1 + 0x6b8),*(undefined4 *)(*param_1 + 0x6c0));
    }
  }
  return;
}



// FUNCTION 140ed0b20 FUN_140ed0b20 body=231 status=ok
// SIG undefined FUN_140ed0b20(void)

void FUN_140ed0b20(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 local_res8;
  undefined4 local_resc;
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18 [8];
  undefined1 local_10 [8];
  
  FWeakObjectPtr::operator=(&local_28,0);
  FWeakObjectPtr::operator=(&local_20,0);
  FWeakObjectPtr::operator=(local_18,0);
  FWeakObjectPtr::operator=(local_10,0);
  FWeakObjectPtr::operator=(&local_res8,0);
  local_28 = local_res8;
  local_24 = local_resc;
  FWeakObjectPtr::operator=(local_18,*(undefined8 *)(*param_1 + 0xf30));
  FWeakObjectPtr::operator=(local_10,*(undefined8 *)(*param_1 + 0xf40));
  FWeakObjectPtr::operator=(&local_res8,0);
  lVar3 = *param_1;
  local_20 = local_res8;
  local_1c = local_resc;
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
  FUN_142ecfd10(lVar3,&local_38,&local_28);
  return;
}



// FUNCTION 140ed0c10 FUN_140ed0c10 body=228 status=ok
// SIG undefined FUN_140ed0c10(void)

void FUN_140ed0c10(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
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
  undefined1 local_10 [8];
  
  FWeakObjectPtr::operator=(&local_28,0);
  FWeakObjectPtr::operator=(&local_20,0);
  FWeakObjectPtr::operator=(&local_18,0);
  FWeakObjectPtr::operator=(local_10,0);
  FWeakObjectPtr::operator=(&local_res8,0);
  local_28 = local_res8;
  local_24 = local_resc;
  FWeakObjectPtr::operator=(&local_res8,0);
  local_18 = local_res8;
  local_14 = local_resc;
  FWeakObjectPtr::operator=(local_10,*(undefined8 *)(*param_1 + 0xf30));
  FWeakObjectPtr::operator=(&local_res8,0);
  lVar3 = *param_1;
  local_20 = local_res8;
  local_1c = local_resc;
  lVar1 = *(longlong *)(lVar3 + 0xf28);
  local_38 = lVar1;
  if (lVar1 == 0) {
    local_30 = 0;
  }
  else {
    uVar2 = UBlendableInterface::GetPrivateStaticClass();
    local_30 = UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar2);
    lVar3 = *param_1;
  }
  FUN_142ecfd10(lVar3,&local_38,&local_28);
  return;
}



// FUNCTION 140ed0d00 FUN_140ed0d00 body=714 status=ok
// SIG undefined FUN_140ed0d00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ed0d00(longlong *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  lVar4 = FWeakObjectPtr::Get(*param_1 + 0x60c);
  if (lVar4 != 0) {
    lVar5 = FUN_142937720();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      lVar5 = *param_1;
      if (*(char *)(lVar5 + 0x83a) == '\x01') {
        uVar2 = *(undefined8 *)(lVar4 + 0x90);
        uVar1 = *(undefined4 *)(lVar5 + 0x638);
        plVar6 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar6 != (longlong *)0x0) {
          *plVar6 = (longlong)&PTR_FUN_143f4d170;
          FWeakObjectPtr::operator=(plVar6 + 1,lVar5);
          plVar6[2] = (longlong)FUN_140ee4f20;
          lVar4 = FDelegateHandle::GenerateNewID();
          plVar6[4] = lVar4;
          *plVar6 = (longlong)&PTR_FUN_143f4d1b8;
        }
        local_a8 = 0;
        local_a0 = 0;
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x30))(plVar6,&local_a8);
        }
        FWeakObjectPtr::operator=(local_98,0);
        local_b0 = 0xbf800000;
        local_b8 = 0;
        local_90 = 0;
        local_58 = (longlong *)0x0;
        local_48 = 0;
        local_88 = AK::MemoryMgr::StartProfileThreadUsage;
        FUN_142880850(uVar2,lVar5 + 0x898,&local_a8,uVar1);
      }
      else {
        if (*(char *)(lVar5 + 0x83a) != '\x02') {
          return;
        }
        uVar2 = *(undefined8 *)(lVar4 + 0x90);
        uVar1 = *(undefined4 *)(lVar5 + 0x63c);
        plVar6 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar6 != (longlong *)0x0) {
          *plVar6 = (longlong)&PTR_FUN_143f4d170;
          FWeakObjectPtr::operator=(plVar6 + 1,lVar5);
          plVar6[2] = (longlong)FUN_140ee5620;
          lVar4 = FDelegateHandle::GenerateNewID();
          plVar6[4] = lVar4;
          *plVar6 = (longlong)&PTR_FUN_143f4d1b8;
        }
        local_a8 = 0;
        local_a0 = 0;
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x30))(plVar6,&local_a8);
        }
        FWeakObjectPtr::operator=(local_98,0);
        local_b0 = 0xbf800000;
        local_b8 = 0;
        local_90 = 0;
        local_58 = (longlong *)0x0;
        local_48 = 0;
        local_88 = AK::MemoryMgr::StartProfileThreadUsage;
        FUN_142880850(uVar2,lVar5 + 0x8b0,&local_a8,uVar1);
      }
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
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x28))(plVar6,0);
        lVar4 = FMemory::Realloc(plVar6,0,0);
        if (lVar4 != 0) {
          FMemory::Free(lVar4);
        }
      }
    }
  }
  return;
}



// FUNCTION 140ed0fd0 FUN_140ed0fd0 body=823 status=ok
// SIG undefined FUN_140ed0fd0(void)

void FUN_140ed0fd0(longlong *param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  longlong *plVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
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
      pwVar6 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnPlayerStateAdded",L"::");
      pwVar3 = (wchar_t *)0x0;
      while (pwVar2 = pwVar6, pwVar2 != (wchar_t *)0x0) {
        pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar3 = pwVar2;
      }
      FName::FName(&local_res8,pwVar3 + 2,1);
      TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar4 + 0xb68,*param_1,local_res8);
      pwVar6 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnPlayerStateRemoved",L"::");
      pwVar3 = (wchar_t *)0x0;
      while (pwVar2 = pwVar6, pwVar2 != (wchar_t *)0x0) {
        pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar3 = pwVar2;
      }
      FName::FName(&local_res8,pwVar3 + 2,1);
      TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar4 + 0xb78,*param_1,local_res8);
      pwVar6 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::NotifyPrimaryCharacterChanged",L"::");
      pwVar3 = (wchar_t *)0x0;
      while (pwVar2 = pwVar6, pwVar2 != (wchar_t *)0x0) {
        pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar3 = pwVar2;
      }
      FName::FName(&local_res8,pwVar3 + 2,1);
      TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar4 + 0x8c0,*param_1,local_res8);
      lVar4 = FUN_1422312c0(lVar4);
      if (lVar4 != 0) {
        lVar5 = FUN_14141f270();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          iVar8 = 0;
          lVar5 = *(longlong *)(*param_1 + 0x6d0);
          if (0 < *(int *)(lVar4 + 0xa70)) {
            lVar10 = 0;
            do {
              plVar9 = (longlong *)(*(longlong *)(lVar4 + 0xa68) + lVar10);
              if ((((int)plVar9[1] != 0) &&
                  (plVar7 = (longlong *)*plVar9, plVar7 != (longlong *)0x0)) &&
                 (plVar7 = (longlong *)(**(code **)(*plVar7 + 0x20))(plVar7,&local_res8),
                 *plVar7 == lVar5)) {
                if (((int)plVar9[1] != 0) &&
                   (plVar7 = (longlong *)*plVar9, plVar7 != (longlong *)0x0)) {
                  (**(code **)(*plVar7 + 0x28))(plVar7,0);
                  if (*plVar9 != 0) {
                    lVar5 = FMemory::Realloc(*plVar9,0,0);
                    *plVar9 = lVar5;
                  }
                  *(undefined4 *)(plVar9 + 1) = 0;
                }
                break;
              }
              iVar8 = iVar8 + 1;
              lVar10 = lVar10 + 0x10;
            } while (iVar8 < *(int *)(lVar4 + 0xa70));
          }
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar4 + 0xa68,0);
        }
      }
    }
  }
  lVar4 = FUN_140eccd20(*param_1);
  if (lVar4 != 0) {
    iVar8 = 0;
    lVar5 = *(longlong *)(*param_1 + 0x6d8);
    if (0 < *(int *)(lVar4 + 0x2c58)) {
      lVar10 = 0;
      do {
        plVar9 = (longlong *)(*(longlong *)(lVar4 + 0x2c50) + lVar10);
        if ((((int)plVar9[1] != 0) && (plVar7 = (longlong *)*plVar9, plVar7 != (longlong *)0x0)) &&
           (plVar7 = (longlong *)(**(code **)(*plVar7 + 0x20))(plVar7,&local_res8), *plVar7 == lVar5
           )) {
          if (((int)plVar9[1] != 0) && (plVar7 = (longlong *)*plVar9, plVar7 != (longlong *)0x0)) {
            (**(code **)(*plVar7 + 0x28))(plVar7,0);
            if (*plVar9 != 0) {
              lVar5 = FMemory::Realloc(*plVar9,0,0);
              *plVar9 = lVar5;
            }
            *(undefined4 *)(plVar9 + 1) = 0;
          }
          break;
        }
        iVar8 = iVar8 + 1;
        lVar10 = lVar10 + 0x10;
      } while (iVar8 < *(int *)(lVar4 + 0x2c58));
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(lVar4 + 0x2c50),0);
  }
  return;
}



// FUNCTION 140ed1310 FUN_140ed1310 body=594 status=ok
// SIG undefined FUN_140ed1310(void)

void FUN_140ed1310(longlong *param_1)

{
  longlong *plVar1;
  wchar_t *pwVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  undefined8 local_res8;
  
  cVar3 = FWeakObjectPtr::IsValid(*param_1 + 0x828);
  if (cVar3 != '\0') {
    lVar4 = FWeakObjectPtr::Get(*param_1 + 0x828);
    FUN_1407665e0(lVar4 + 0x218,*param_1);
    lVar4 = FWeakObjectPtr::Get(*param_1 + 0x828);
    FUN_1407665e0(lVar4 + 0x208,*param_1);
  }
  if (*(longlong *)(*param_1 + 0x820) != 0) {
    FUN_1407665e0(*(longlong *)(*param_1 + 0x820) + 0x48);
  }
  plVar1 = (longlong *)param_1[1];
  if (plVar1 != (longlong *)0x0) {
    uVar5 = FUN_1414aa4c0();
    uVar5 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar5);
    FWeakObjectPtr::operator=(*param_1 + 0x828,uVar5);
    cVar3 = FWeakObjectPtr::IsValid(*param_1 + 0x828);
    pwVar8 = (wchar_t *)0x0;
    if (cVar3 != '\0') {
      pwVar6 = _guard_xfg_dispatch_icall_nop(L"&UGFxExperienceBar::HandleExperienceAdded",L"::");
      pwVar7 = pwVar8;
      while (pwVar2 = pwVar6, pwVar2 != (wchar_t *)0x0) {
        pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar7 = pwVar2;
      }
      FName::FName(&local_res8,pwVar7 + 2,1);
      lVar4 = FWeakObjectPtr::Get(*param_1 + 0x828);
      FUN_14074ba20(lVar4 + 0x218,*param_1,FUN_140ee86d0,local_res8);
      pwVar6 = _guard_xfg_dispatch_icall_nop(L"&UGFxExperienceBar::HandleLevelChanged",L"::");
      pwVar7 = pwVar8;
      while (pwVar2 = pwVar6, pwVar2 != (wchar_t *)0x0) {
        pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar7 = pwVar2;
      }
      FName::FName(&local_res8,pwVar7 + 2,1);
      lVar4 = FWeakObjectPtr::Get(*param_1 + 0x828);
      FUN_14074ba20(lVar4 + 0x208,*param_1,FUN_140eea150,local_res8);
    }
    plVar1 = (longlong *)param_1[1];
    uVar5 = AGFireballProjectile::GetPrivateStaticClass();
    lVar4 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar5);
    if (lVar4 != 0) {
      *(undefined8 *)(*param_1 + 0x820) = *(undefined8 *)(lVar4 + 0x3b0);
      pwVar7 = _guard_xfg_dispatch_icall_nop(L"&UGFxExperienceBar::HandleSkillPointsChanged",L"::");
      while (pwVar6 = pwVar7, pwVar6 != (wchar_t *)0x0) {
        pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar6 + 1,L"::");
        pwVar8 = pwVar6;
      }
      FName::FName(&local_res8,pwVar8 + 2,1);
      FUN_14074ba20(*(longlong *)(*param_1 + 0x820) + 0x48,*param_1,FUN_140eea720,local_res8);
    }
  }
  FUN_140f117e0(*param_1);
  return;
}



// FUNCTION 140ed1570 FUN_140ed1570 body=156 status=ok
// SIG undefined FUN_140ed1570(void)

void FUN_140ed1570(longlong *param_1)

{
  longlong local_18 [2];
  
  local_18[0] = 0;
  local_18[1] = 0;
  (**(code **)(*(longlong *)*param_1 + 0x4e8))((longlong *)*param_1,DAT_1468723d8,local_18);
  (**(code **)(*(longlong *)*param_1 + 0x578))((longlong *)*param_1,0);
  local_18[0] = 0;
  local_18[1] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"intro",0xc);
  FUN_142088910(*(undefined8 *)(*param_1 + 0x640),local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140ed1610 FUN_140ed1610 body=1205 status=ok
// SIG undefined FUN_140ed1610(void)

void FUN_140ed1610(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  int *piVar11;
  int *piVar12;
  wchar_t *pwVar13;
  undefined8 local_res8;
  longlong local_res10;
  int local_48;
  int local_44;
  longlong local_40;
  
  lVar7 = FWeakObjectPtr::Get(*param_1 + 0x5c8);
  pwVar13 = (wchar_t *)0x0;
  if (lVar7 != 0) {
    lVar8 = FUN_14142a560();
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
      pwVar9 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnInputDeviceChanged",L"::");
      pwVar10 = pwVar13;
      while (pwVar4 = pwVar9, pwVar4 != (wchar_t *)0x0) {
        pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
        pwVar10 = pwVar4;
      }
      FName::FName(&local_res10,pwVar10 + 2,1);
      lVar5 = local_res10;
      lVar8 = *param_1;
      plVar1 = (longlong *)(lVar7 + 0x5f8);
      FWeakObjectPtr::operator=(&local_48,0);
      local_40 = 0;
      FWeakObjectPtr::operator=(&local_48,lVar8);
      local_40 = lVar5;
      local_res8 = 0;
      if ((lVar5 != 0) && (lVar8 = FWeakObjectPtr::Get(&local_48), lVar8 != 0)) {
        UObject::FindFunction(lVar8,local_40);
      }
      piVar11 = (int *)*plVar1;
      iVar2 = *(int *)(lVar7 + 0x600);
      for (piVar12 = piVar11; piVar12 != piVar11 + (longlong)iVar2 * 4; piVar12 = piVar12 + 4) {
        if (((*piVar12 == local_48) && (piVar12[1] == local_44)) ||
           ((cVar6 = FWeakObjectPtr::IsValid(piVar12), cVar6 == '\0' &&
            (cVar6 = FWeakObjectPtr::IsValid(&local_48), cVar6 == '\0')))) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        if ((bVar3) && (*(longlong *)(piVar12 + 2) == local_40)) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        if (bVar3) {
          if ((int)((longlong)piVar12 - (longlong)piVar11 >> 4) != -1) goto LAB_140ed17c5;
          break;
        }
      }
      iVar2 = *(int *)(lVar7 + 0x600);
      *(int *)(lVar7 + 0x600) = iVar2 + 1;
      if (*(int *)(lVar7 + 0x604) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
      }
      piVar11 = (int *)((longlong)iVar2 * 0x10 + *plVar1);
      *piVar11 = local_48;
      piVar11[1] = local_44;
      *(longlong *)(piVar11 + 2) = local_40;
LAB_140ed17c5:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
      FUN_140ccd5c0(lVar7,*param_1);
    }
  }
  cVar6 = FWeakObjectPtr::IsValid(*param_1 + 0x728);
  if (cVar6 != '\0') {
    pwVar9 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnChallengeActivated",L"::");
    pwVar10 = pwVar13;
    while (pwVar4 = pwVar9, pwVar4 != (wchar_t *)0x0) {
      pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
      pwVar10 = pwVar4;
    }
    FName::FName(&local_res8,pwVar10 + 2,1);
    lVar7 = FWeakObjectPtr::Get(*param_1 + 0x728);
    FUN_14074ba20(lVar7 + 0x188,*param_1,FUN_140eee7b0,local_res8);
    pwVar9 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnChallengeUpdated",L"::");
    pwVar10 = pwVar13;
    while (pwVar4 = pwVar9, pwVar4 != (wchar_t *)0x0) {
      pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
      pwVar10 = pwVar4;
    }
    FName::FName(&local_res10,pwVar10 + 2,1);
    lVar8 = FWeakObjectPtr::Get(*param_1 + 0x728);
    lVar7 = *param_1;
    plVar1 = (longlong *)(lVar8 + 0x198);
    FWeakObjectPtr::operator=(&local_48,0);
    local_40 = 0;
    FWeakObjectPtr::operator=(&local_48,lVar7);
    local_40 = local_res10;
    local_res8 = 0;
    if ((local_res10 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_48), lVar7 != 0)) {
      UObject::FindFunction(lVar7,local_40);
    }
    piVar11 = (int *)*plVar1;
    iVar2 = *(int *)(lVar8 + 0x1a0);
    for (piVar12 = piVar11; piVar12 != piVar11 + (longlong)iVar2 * 4; piVar12 = piVar12 + 4) {
      if (((*piVar12 == local_48) && (piVar12[1] == local_44)) ||
         ((cVar6 = FWeakObjectPtr::IsValid(piVar12), cVar6 == '\0' &&
          (cVar6 = FWeakObjectPtr::IsValid(&local_48), cVar6 == '\0')))) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if ((bVar3) && (*(longlong *)(piVar12 + 2) == local_40)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if (bVar3) {
        if ((int)((longlong)piVar12 - (longlong)piVar11 >> 4) != -1) goto LAB_140ed19c6;
        break;
      }
    }
    iVar2 = *(int *)(lVar8 + 0x1a0);
    *(int *)(lVar8 + 0x1a0) = iVar2 + 1;
    if (*(int *)(lVar8 + 0x1a4) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    piVar11 = (int *)((longlong)iVar2 * 0x10 + *plVar1);
    *piVar11 = local_48;
    piVar11[1] = local_44;
    *(longlong *)(piVar11 + 2) = local_40;
LAB_140ed19c6:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
    pwVar9 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnChallengeCompleted",L"::");
    pwVar10 = pwVar13;
    while (pwVar4 = pwVar9, pwVar4 != (wchar_t *)0x0) {
      pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
      pwVar10 = pwVar4;
    }
    FName::FName(&local_res8,pwVar10 + 2,1);
    lVar7 = FWeakObjectPtr::Get(*param_1 + 0x728);
    FUN_14074ba20(lVar7 + 0x1a8,*param_1,FUN_140eeeb80,local_res8);
    pwVar10 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnChallengeChildCompleted",L"::");
    while (pwVar9 = pwVar10, pwVar9 != (wchar_t *)0x0) {
      pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar9 + 1,L"::");
      pwVar13 = pwVar9;
    }
    FName::FName(&local_res8,pwVar13 + 2,1);
    lVar7 = FWeakObjectPtr::Get(*param_1 + 0x728);
    FUN_14074ba20(lVar7 + 0x1b8,*param_1,FUN_140eee8d0,local_res8);
  }
  return;
}



// FUNCTION 140ed1ad0 FUN_140ed1ad0 body=1704 status=ok
// SIG undefined FUN_140ed1ad0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ed1ad0(longlong *param_1)

{
  char *pcVar1;
  longlong *plVar2;
  int *piVar3;
  ulonglong uVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined4 *puVar12;
  longlong *plVar13;
  uint uVar14;
  longlong lVar15;
  char *pcVar16;
  bool bVar17;
  undefined1 auStack_218 [32];
  undefined2 local_1f8;
  undefined1 local_1e8 [16];
  undefined4 *local_1d8;
  ulonglong *puStack_1d0;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 *local_1c0;
  undefined8 local_1b8;
  longlong local_1a8;
  undefined8 local_1a0;
  undefined1 local_198 [8];
  longlong *local_190;
  undefined1 local_180;
  undefined8 local_178;
  undefined2 local_170;
  longlong local_168;
  undefined8 local_160;
  undefined8 local_158;
  longlong local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined1 local_138 [16];
  undefined1 local_128 [8];
  longlong *local_120;
  undefined1 local_110 [8];
  longlong *local_108;
  undefined1 local_f8 [8];
  longlong *local_f0;
  undefined1 local_e0 [16];
  undefined1 local_d0 [24];
  undefined1 local_b8 [32];
  undefined4 local_98 [4];
  undefined1 local_88 [24];
  undefined1 local_70;
  undefined4 local_68;
  undefined1 local_58 [24];
  undefined1 local_40;
  ulonglong local_38 [2];
  
  local_38[0] = DAT_1468387a8 ^ (ulonglong)auStack_218;
  local_1c8 = (undefined4)param_1[1];
  local_1c4 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_1e8);
  FUN_14172a400(local_1e8);
  cVar5 = FWeakObjectPtr::IsValid(&local_1c8);
  if (cVar5 == '\0') {
    return;
  }
  lVar8 = FWeakObjectPtr::Get(&local_1c8);
  lVar15 = 0;
  iVar7 = *(int *)(lVar8 + 0xc);
  lVar8 = lVar15;
  if (iVar7 < (int)DAT_1469e91c4) {
    uVar14 = iVar7 >> 0x1f & 0xffff;
    uVar6 = iVar7 + uVar14;
    lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
            (longlong)(int)((uVar6 & 0xffff) - uVar14) * 0x18;
  }
  if ((*(uint *)(lVar8 + 8) & 0x30000000) != 0) {
    return;
  }
  lVar8 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0x14));
  if (lVar8 == 0) {
    return;
  }
  lVar8 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0x14));
  iVar7 = *(int *)(lVar8 + 0xc);
  if (iVar7 < (int)DAT_1469e91c4) {
    uVar14 = iVar7 >> 0x1f & 0xffff;
    uVar6 = iVar7 + uVar14;
    lVar15 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
             (longlong)(int)((uVar6 & 0xffff) - uVar14) * 0x18;
  }
  if ((*(uint *)(lVar15 + 8) & 0x30000000) != 0) {
    return;
  }
  local_1a8 = 0;
  local_1a0 = 0;
  uVar9 = FUN_1404b03b0();
  FText::FText(local_198,uVar9);
  local_180 = 0;
  local_178 = 0;
  local_170 = 1;
  if (((char)param_1[2] == '\0') || (cVar5 = FUN_140eec620(*param_1), cVar5 != '\0')) {
LAB_140ed1c55:
    lVar8 = *param_1;
    if (0 < *(int *)(lVar8 + 0x858)) {
      lVar15 = 0x690;
      if (*(int *)(lVar8 + 0x85c) < 1) {
        lVar11 = 0x678;
        bVar17 = (char)param_1[2] == '\0';
      }
      else {
        lVar11 = 0x6d8;
        bVar17 = (char)param_1[2] == '\0';
      }
LAB_140ed1c98:
      if (bVar17) {
        lVar15 = lVar11;
      }
      lVar15 = lVar15 + lVar8;
      goto LAB_140ed1c9f;
    }
    if (0 < *(int *)(lVar8 + 0x85c)) {
      bVar17 = (char)param_1[2] == '\0';
      lVar15 = 0x6c0;
      lVar11 = 0x6a8;
      goto LAB_140ed1c98;
    }
  }
  else {
    lVar15 = *param_1;
    if ((*(longlong *)(lVar15 + 0x820) == 0) ||
       (*(int *)(lVar15 + 0x844) < *(int *)(*(longlong *)(lVar15 + 0x820) + 0x178)))
    goto LAB_140ed1c55;
    lVar15 = lVar15 + 0x660;
LAB_140ed1c9f:
    FText::operator=(local_198,lVar15);
  }
  if (*(char *)(*param_1 + 0x710) != '\0') {
    cVar5 = FText::IsEmpty(local_198);
    if (cVar5 == '\0') {
      lVar15 = FText::FText(local_d0,*param_1 + 0x6f0);
      local_168 = lVar15;
      lVar8 = FText::FText(local_b8,local_198);
      uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_f8,L"{0} | {1}",L"GFxExperienceBar",L"UsePromptFormatText");
      puVar10 = (undefined8 *)FTextFormat::FTextFormat(local_e0,uVar9);
      local_98[0] = 4;
      FText::FText(local_88,lVar8);
      local_70 = 1;
      local_68 = 4;
      FText::FText(local_58,lVar15);
      local_1d8 = local_98;
      local_40 = 1;
      puStack_1d0 = local_38;
      local_158 = *puVar10;
      local_150 = puVar10[1];
      if (local_150 != 0) {
        LOCK();
        *(int *)(local_150 + 8) = *(int *)(local_150 + 8) + 1;
        UNLOCK();
      }
      local_148 = local_1d8;
      uStack_140 = puStack_1d0;
      uVar9 = TArray<FFormatArgumentValue,FDefaultAllocator>::
              TArray<FFormatArgumentValue,FDefaultAllocator>(local_138,&local_148);
      uVar9 = FText::Format(local_110,&local_158,uVar9);
      FText::FText(local_128,uVar9);
      if (local_108 != (longlong *)0x0) {
        LOCK();
        plVar13 = local_108 + 1;
        lVar15 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar15 == 1) {
          (**(code **)*local_108)(local_108);
          LOCK();
          piVar3 = (int *)((longlong)local_108 + 0xc);
          iVar7 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*local_108 + 8))(local_108,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_138);
      lVar15 = 2;
      pcVar16 = &stack0xfffffffffffffff0;
      do {
        lVar15 = lVar15 + -1;
        pcVar1 = pcVar16 + -0x30;
        if (*pcVar1 != '\0') {
          *pcVar1 = '\0';
          plVar13 = *(longlong **)(pcVar16 + -0x40);
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar13 + 1;
            lVar11 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)*plVar13)(plVar13);
              LOCK();
              piVar3 = (int *)((longlong)plVar13 + 0xc);
              iVar7 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar7 == 1) {
                (**(code **)(*plVar13 + 8))(plVar13,1);
              }
            }
          }
        }
        pcVar16 = pcVar1;
      } while (lVar15 != 0);
      plVar13 = (longlong *)puVar10[1];
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar13 + 1;
        lVar15 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar15 == 1) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar3 = (int *)((longlong)plVar13 + 0xc);
          iVar7 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar13 + 8))(plVar13,1);
          }
        }
      }
      plVar13 = *(longlong **)(lVar8 + 8);
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar13 + 1;
        lVar15 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar15 == 1) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar3 = (int *)((longlong)plVar13 + 0xc);
          iVar7 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar13 + 8))(plVar13,1);
          }
        }
      }
      plVar13 = *(longlong **)(local_168 + 8);
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar13 + 1;
        lVar15 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar15 == 1) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar3 = (int *)((longlong)plVar13 + 0xc);
          iVar7 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar13 + 8))(plVar13,1);
          }
        }
      }
      FText::operator=(local_198,local_128);
      if (local_120 != (longlong *)0x0) {
        LOCK();
        plVar13 = local_120 + 1;
        lVar15 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar15 == 1) {
          (**(code **)*local_120)(local_120);
          LOCK();
          piVar3 = (int *)((longlong)local_120 + 0xc);
          iVar7 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*local_120 + 8))(local_120,1);
          }
        }
      }
      if (local_f0 != (longlong *)0x0) {
        LOCK();
        plVar13 = local_f0 + 1;
        lVar15 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar15 == 1) {
          (**(code **)*local_f0)(local_f0);
          LOCK();
          piVar3 = (int *)((longlong)local_f0 + 0xc);
          iVar7 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*local_f0 + 8))(local_f0,1);
          }
        }
      }
    }
    else {
      FText::operator=(local_198);
    }
  }
  local_180 = 1;
  if ((char)param_1[2] != '\0') {
    cVar5 = FUN_142eb50d0(*param_1);
    if (cVar5 == '\0') {
      FName::FName(&local_160,L"OakPC_OpenStatusMenu",1);
      uVar4 = local_1a0;
      lVar15 = (longlong)(int)local_1a0;
      iVar7 = (int)local_1a0 + 1;
      local_1a0 = CONCAT44(local_1a0._4_4_,iVar7);
      if (local_1a0._4_4_ < iVar7) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                  (&local_1a8,uVar4 & 0xffffffff);
      }
      local_1c0 = (undefined4 *)0x0;
      local_1b8 = 5;
      *(undefined8 *)(local_1a8 + lVar15 * 8) = local_160;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1c0,0);
      local_1f8 = 0x3f;
      FGenericPlatformString::Convert<char,wchar_t>(local_1c0,5,&DAT_144605bf4);
      FUN_142088910(*(undefined8 *)(*param_1 + 0x818),&local_1c0);
      puVar12 = local_1c0;
      goto LAB_140ed20da;
    }
  }
  local_1d8 = (undefined4 *)0x0;
  puStack_1d0 = (ulonglong *)0x5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1d8,0);
  local_1f8 = 0x3f;
  FGenericPlatformString::Convert<char,wchar_t>(local_1d8,5,&DAT_144605bfc);
  FUN_142088910(*(undefined8 *)(*param_1 + 0x818),&local_1d8);
  puVar12 = local_1d8;
LAB_140ed20da:
  if (puVar12 != (undefined4 *)0x0) {
    FMemory::Free();
  }
  plVar13 = (longlong *)(*(longlong *)(*param_1 + 0x5b0) + 0x308);
  (**(code **)(*plVar13 + 0x20))(plVar13,&local_1a8,(char)param_1[2]);
  if (local_190 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_190 + 1;
    lVar15 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*local_190)(local_190);
      LOCK();
      piVar3 = (int *)((longlong)local_190 + 0xc);
      iVar7 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_190 + 8))(local_190,1);
      }
    }
  }
  if (local_1a8 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140ed2180 FUN_140ed2180 body=1230 status=ok
// SIG undefined FUN_140ed2180(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ed2180(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  uint uVar11;
  bool bVar12;
  undefined1 auStack_138 [32];
  undefined1 local_118 [8];
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 *local_108;
  ulonglong *puStack_100;
  undefined8 local_f8;
  longlong local_f0;
  undefined8 local_e8;
  longlong *plStack_e0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 local_b0 [8];
  longlong *local_a8;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_80 [8];
  longlong *local_78;
  undefined1 local_68 [16];
  undefined4 local_58 [2];
  longlong local_50;
  longlong *local_40;
  char local_30;
  ulonglong local_28 [2];
  
  local_28[0] = DAT_1468387a8 ^ (ulonglong)auStack_138;
  local_110 = (undefined4)param_1[1];
  local_10c = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_118);
  FUN_14172a400(local_118);
  cVar4 = FWeakObjectPtr::IsValid(&local_110);
  if (cVar4 != '\0') {
    lVar7 = FWeakObjectPtr::Get(&local_110);
    lVar8 = 0;
    iVar6 = *(int *)(lVar7 + 0xc);
    if (iVar6 < (int)DAT_1469e91c4) {
      uVar11 = iVar6 >> 0x1f & 0xffff;
      uVar5 = iVar6 + uVar11;
      lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
              (longlong)(int)((uVar5 & 0xffff) - uVar11) * 0x18;
    }
    if (((*(uint *)(lVar8 + 8) & 0x30000000) == 0) &&
       (lVar8 = *param_1, *(char *)(lVar8 + 0x252) != '\0')) {
      if ((int)param_1[2] < 1) {
        if (-1 < (int)param_1[2]) {
          return;
        }
        plVar3 = *(longlong **)(lVar8 + 0x1e0);
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          iVar6 = (int)plVar3[1];
          bVar12 = iVar6 == 0;
          if (bVar12) {
            *(int *)(plVar3 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
          while (!bVar12) {
            LOCK();
            bVar12 = iVar6 == (int)plVar3[1];
            if (bVar12) {
              *(int *)(plVar3 + 1) = iVar6 + 1;
            }
            UNLOCK();
            if (bVar12) {
              if (plVar3 != (longlong *)0x0) {
                if (*(longlong *)(lVar8 + 0x1d8) != 0) {
                  FUN_14203e030(*(longlong *)(lVar8 + 0x1d8),&DAT_144603d04);
                }
                LOCK();
                plVar1 = plVar3 + 1;
                lVar8 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar8 == 1) {
                  (**(code **)*plVar3)(plVar3);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar3 + 0xc);
                  iVar6 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar6 == 1) {
                    (**(code **)(*plVar3 + 8))(plVar3,1);
                  }
                }
              }
              break;
            }
            LOCK();
            iVar6 = (int)plVar3[1];
            bVar12 = iVar6 == 0;
            if (bVar12) {
              *(int *)(plVar3 + 1) = 0;
              iVar6 = 0;
            }
            UNLOCK();
          }
        }
        if (*(longlong *)(*param_1 + 0x1f0) == 0) {
          return;
        }
        lVar8 = *(longlong *)(*param_1 + 0x1f8);
        if (lVar8 == 0) {
          return;
        }
        piVar2 = (int *)(lVar8 + 8);
        LOCK();
        iVar6 = *piVar2;
        if (iVar6 == 0) {
          *piVar2 = 0;
          iVar6 = 0;
        }
        UNLOCK();
        if (iVar6 < 1) {
          return;
        }
        local_e8 = 0;
        plStack_e0 = (longlong *)0x0;
        uVar9 = FText::AsNumber(local_80,(int)param_1[2],0,&local_e8);
        UMistDebugEntityScreen::InspectEntity(*param_1 + 0x1e8,uVar9,1,0);
        local_90 = plStack_e0;
        if (local_78 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_78 + 1;
          lVar8 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_78)(local_78);
            LOCK();
            piVar2 = (int *)((longlong)local_78 + 0xc);
            iVar6 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            local_90 = plStack_e0;
            if (iVar6 == 1) {
              (**(code **)(*local_78 + 8))(local_78,1);
              local_90 = plStack_e0;
            }
          }
        }
      }
      else {
        plVar3 = *(longlong **)(lVar8 + 0x208);
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          iVar6 = (int)plVar3[1];
          bVar12 = iVar6 == 0;
          if (bVar12) {
            *(int *)(plVar3 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
          while (!bVar12) {
            LOCK();
            bVar12 = iVar6 == (int)plVar3[1];
            if (bVar12) {
              *(int *)(plVar3 + 1) = iVar6 + 1;
            }
            UNLOCK();
            if (bVar12) {
              if (plVar3 != (longlong *)0x0) {
                if (*(longlong *)(lVar8 + 0x200) != 0) {
                  FUN_14203e030(*(longlong *)(lVar8 + 0x200),&DAT_144603d04);
                }
                LOCK();
                plVar1 = plVar3 + 1;
                lVar8 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar8 == 1) {
                  (**(code **)*plVar3)(plVar3);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar3 + 0xc);
                  iVar6 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar6 == 1) {
                    (**(code **)(*plVar3 + 8))(plVar3,1);
                  }
                }
              }
              break;
            }
            LOCK();
            iVar6 = (int)plVar3[1];
            bVar12 = iVar6 == 0;
            if (bVar12) {
              *(int *)(plVar3 + 1) = 0;
              iVar6 = 0;
            }
            UNLOCK();
          }
        }
        if (*(longlong *)(*param_1 + 0x218) == 0) {
          return;
        }
        lVar8 = *(longlong *)(*param_1 + 0x220);
        if (lVar8 == 0) {
          return;
        }
        piVar2 = (int *)(lVar8 + 8);
        LOCK();
        iVar6 = *piVar2;
        if (iVar6 == 0) {
          *piVar2 = 0;
          iVar6 = 0;
        }
        UNLOCK();
        if (iVar6 < 1) {
          return;
        }
        lVar8 = param_1[2];
        uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_98,L"+{0}",L"GFxCurrencyWidgetText",L"DeltaText");
        puVar10 = (undefined8 *)FTextFormat::FTextFormat(local_68,uVar9);
        local_58[0] = 0;
        local_108 = local_58;
        local_30 = '\0';
        puStack_100 = local_28;
        local_f8 = *puVar10;
        local_f0 = puVar10[1];
        if (local_f0 != 0) {
          LOCK();
          *(int *)(local_f0 + 8) = *(int *)(local_f0 + 8) + 1;
          UNLOCK();
        }
        local_50 = (longlong)(int)lVar8;
        uVar9 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                TArray<FFormatArgumentValue,FDefaultAllocator>(local_d8,&local_108);
        uVar9 = FText::Format(local_b0,&local_f8,uVar9);
        FText::FText(local_c8,uVar9);
        if (local_a8 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_a8 + 1;
          lVar8 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_a8)(local_a8);
            LOCK();
            piVar2 = (int *)((longlong)local_a8 + 0xc);
            iVar6 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*local_a8 + 8))(local_a8,1);
            }
          }
        }
        TArray<FFormatArgumentValue,FDefaultAllocator>::
        ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_d8);
        if ((local_30 != '\0') && (local_30 = '\0', local_40 != (longlong *)0x0)) {
          LOCK();
          plVar3 = local_40 + 1;
          lVar8 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_40)(local_40);
            LOCK();
            piVar2 = (int *)((longlong)local_40 + 0xc);
            iVar6 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*local_40 + 8))(local_40,1);
            }
          }
        }
        plVar3 = (longlong *)puVar10[1];
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar3 + 1;
          lVar8 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*plVar3)(plVar3);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            iVar6 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar3 + 8))(plVar3,1);
            }
          }
        }
        UMistDebugEntityScreen::InspectEntity(*param_1 + 0x210,local_c8,1,0);
        if (local_c0 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_c0 + 1;
          lVar8 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_c0)(local_c0);
            LOCK();
            piVar2 = (int *)((longlong)local_c0 + 0xc);
            iVar6 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*local_c0 + 8))(local_c0,1);
            }
          }
        }
      }
      if (local_90 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_90 + 1;
        lVar8 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_90)(local_90);
          LOCK();
          piVar2 = (int *)((longlong)local_90 + 0xc);
          iVar6 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*local_90 + 8))(local_90,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140ed2650 FUN_140ed2650 body=714 status=ok
// SIG undefined FUN_140ed2650(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ed2650(longlong *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  lVar4 = FWeakObjectPtr::Get(*param_1 + 0x60c);
  if (lVar4 != 0) {
    lVar5 = FUN_142937720();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      lVar5 = *param_1;
      if (*(char *)(lVar5 + 0x839) == '\x01') {
        uVar2 = *(undefined8 *)(lVar4 + 0x90);
        uVar1 = *(undefined4 *)(lVar5 + 0x638);
        plVar6 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar6 != (longlong *)0x0) {
          *plVar6 = (longlong)&PTR_FUN_143f4d170;
          FWeakObjectPtr::operator=(plVar6 + 1,lVar5);
          plVar6[2] = (longlong)FUN_140ee4f20;
          lVar4 = FDelegateHandle::GenerateNewID();
          plVar6[4] = lVar4;
          *plVar6 = (longlong)&PTR_FUN_143f4d1b8;
        }
        local_a8 = 0;
        local_a0 = 0;
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x30))(plVar6,&local_a8);
        }
        FWeakObjectPtr::operator=(local_98,0);
        local_b0 = 0xbf800000;
        local_b8 = 0;
        local_90 = 0;
        local_58 = (longlong *)0x0;
        local_48 = 0;
        local_88 = AK::MemoryMgr::StartProfileThreadUsage;
        FUN_142880850(uVar2,lVar5 + 0x890,&local_a8,uVar1);
      }
      else {
        if (*(char *)(lVar5 + 0x839) != '\x02') {
          return;
        }
        uVar2 = *(undefined8 *)(lVar4 + 0x90);
        uVar1 = *(undefined4 *)(lVar5 + 0x63c);
        plVar6 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar6 != (longlong *)0x0) {
          *plVar6 = (longlong)&PTR_FUN_143f4d170;
          FWeakObjectPtr::operator=(plVar6 + 1,lVar5);
          plVar6[2] = (longlong)FUN_140ee5490;
          lVar4 = FDelegateHandle::GenerateNewID();
          plVar6[4] = lVar4;
          *plVar6 = (longlong)&PTR_FUN_143f4d1b8;
        }
        local_a8 = 0;
        local_a0 = 0;
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x30))(plVar6,&local_a8);
        }
        FWeakObjectPtr::operator=(local_98,0);
        local_b0 = 0xbf800000;
        local_b8 = 0;
        local_90 = 0;
        local_58 = (longlong *)0x0;
        local_48 = 0;
        local_88 = AK::MemoryMgr::StartProfileThreadUsage;
        FUN_142880850(uVar2,lVar5 + 0x8a8,&local_a8,uVar1);
      }
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
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x28))(plVar6,0);
        lVar4 = FMemory::Realloc(plVar6,0,0);
        if (lVar4 != 0) {
          FMemory::Free(lVar4);
        }
      }
    }
  }
  return;
}



// FUNCTION 140ed2920 FUN_140ed2920 body=388 status=ok
// SIG undefined FUN_140ed2920(void)

void FUN_140ed2920(longlong *param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  undefined8 local_res18;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar3 == '\0') {
LAB_140ed29ab:
    bVar2 = false;
  }
  else {
    lVar5 = FWeakObjectPtr::Get(&local_res10);
    iVar1 = *(int *)(lVar5 + 0xc);
    lVar5 = 0;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar7 = iVar1 >> 0x1f & 0xffff;
      uVar4 = iVar1 + uVar7;
      lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar7) * 0x18;
    }
    if ((*(uint *)(lVar5 + 8) & 0x30000000) != 0) goto LAB_140ed29ab;
    bVar2 = true;
  }
  if (!bVar2) {
    return;
  }
  if ((int)param_1[7] < 0) {
    return;
  }
  *(bool *)(*param_1 + 0x250) = *(char *)((longlong)param_1 + 0x3c) == '\x01';
  lVar5 = FWeakObjectPtr::Get(param_1 + 2);
  if (lVar5 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != (int)param_1[3]) && (local_res18 = 0, param_1[4] != 0)) {
      lVar5 = FUN_141796df0();
      FWeakObjectPtr::operator=(param_1 + 2,lVar5);
      if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 3) = DAT_1464b56f4;
      }
      lVar5 = FWeakObjectPtr::Get(param_1 + 2);
      if (lVar5 != 0) goto LAB_140ed2a4b;
    }
  }
  else {
LAB_140ed2a4b:
    lVar6 = FUN_1430228e0();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_140ed2a84;
  }
  lVar5 = 0;
LAB_140ed2a84:
  FUN_140eef9f0(*param_1,lVar5,(int)param_1[7]);
  return;
}



// FUNCTION 140ed2ab0 FUN_140ed2ab0 body=179 status=ok
// SIG undefined FUN_140ed2ab0(void)

void FUN_140ed2ab0(longlong *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = (undefined4)param_1[1];
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
      lVar4 = *param_1;
      if (*(longlong *)(lVar4 + 0x38) != 0) {
        FUN_142880530(*(longlong *)(lVar4 + 0x38) + 0x340,lVar4 + 0x1d0);
        *(undefined8 *)(lVar4 + 0x1d0) = 0;
      }
    }
  }
  return;
}



// FUNCTION 140ed2b70 FUN_140ed2b70 body=185 status=ok
// SIG undefined FUN_140ed2b70(void)

void FUN_140ed2b70(longlong *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  lVar4 = FUN_1416f8720((int)param_1[2]);
  if (lVar4 != 0) {
    local_res10 = (undefined4)param_1[1];
    local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
    FUN_141729b50(local_res8);
    FUN_14172a400(local_res8);
    cVar2 = FWeakObjectPtr::IsValid(&local_res10);
    if (cVar2 != '\0') {
      lVar4 = FWeakObjectPtr::Get(&local_res10);
      iVar1 = *(int *)(lVar4 + 0xc);
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar6 = iVar1 >> 0x1f & 0xffff;
        uVar3 = iVar1 + uVar6;
        lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                (longlong)(int)((uVar3 & 0xffff) - uVar6) * 0x18;
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x30000000) == 0) {
        uVar5 = FUN_1416f8720((int)param_1[2]);
        FUN_142ed4720(uVar5,*param_1 + 0x6e0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140ed2c30 FUN_140ed2c30 body=415 status=ok
// SIG undefined FUN_140ed2c30(void)

void FUN_140ed2c30(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar2 = FWeakObjectPtr::IsValid(&local_res10);
  uVar10 = 0;
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(&local_res10);
    iVar9 = *(int *)(lVar4 + 0xc);
    uVar6 = uVar10;
    if (iVar9 < (int)DAT_1469e91c4) {
      uVar8 = iVar9 >> 0x1f & 0xffff;
      uVar3 = iVar9 + uVar8;
      uVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar8) * 0x18;
    }
    if ((*(uint *)(uVar6 + 8) & 0x30000000) == 0) {
      bVar1 = true;
      goto LAB_140ed2cbd;
    }
  }
  bVar1 = false;
LAB_140ed2cbd:
  if (bVar1) {
    uVar5 = FWeakObjectPtr::Get(*param_1 + 0x5d8);
    uVar6 = uVar10;
    uVar11 = uVar10;
    if (uVar5 != 0) {
      lVar4 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(uVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(uVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        uVar6 = FUN_140cff230(uVar5);
        uVar11 = uVar5;
      }
    }
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    lVar4 = *(longlong *)(DAT_146b33f38 + 0x90);
    if ((((uVar11 != 0) && (lVar4 != 0)) && (lVar7 = *(longlong *)(lVar4 + 0x1110), lVar7 != 0)) &&
       (uVar6 != 0)) {
      if ((*(char *)(lVar7 + 0x40) == '\0') && (0 < *(int *)(lVar7 + 0x38))) {
        do {
          FUN_141460860(uVar11,uVar10);
          lVar7 = *(longlong *)(lVar4 + 0x1110);
          uVar3 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar3;
        } while ((int)uVar3 < *(int *)(lVar7 + 0x38));
      }
      iVar9 = *(int *)(uVar6 + 0x220) + -1;
      if (iVar9 != -1) {
        if ((iVar9 < 0) || (*(int *)(lVar7 + 0x38) <= iVar9)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          FUN_14145fe70(uVar11,iVar9,*(undefined4 *)(uVar6 + 0x224));
        }
      }
    }
  }
  return;
}



// FUNCTION 140ed2dd0 FUN_140ed2dd0 body=153 status=ok
// SIG undefined FUN_140ed2dd0(void)

void FUN_140ed2dd0(longlong *param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  undefined8 local_res8;
  
  if (*(longlong *)(*param_1 + 0x748) != 0) {
    pwVar3 = _guard_xfg_dispatch_icall_nop(L"&UGFxAmmoBar::WeaponSecondaryModeAmmoChanged",L"::");
    pwVar2 = (wchar_t *)0x0;
    while (pwVar1 = pwVar3, pwVar1 != (wchar_t *)0x0) {
      pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar2 = pwVar1;
    }
    FName::FName(&local_res8,pwVar2 + 2,1);
    FUN_14074ba20(*(longlong *)(*param_1 + 0x748) + 400,*param_1,&LAB_140f11f40,local_res8);
  }
  return;
}



// FUNCTION 140ed2e70 FUN_140ed2e70 body=1581 status=ok
// SIG undefined FUN_140ed2e70(void)

void FUN_140ed2e70(longlong *param_1)

{
  int iVar1;
  bool bVar2;
  wchar_t *pwVar3;
  char cVar4;
  undefined1 uVar5;
  longlong *plVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  undefined8 uVar10;
  wchar_t *pwVar11;
  int *piVar12;
  int *piVar13;
  longlong *plVar14;
  wchar_t *pwVar15;
  undefined8 local_res10;
  longlong local_res18;
  longlong local_res20;
  undefined1 local_b8 [8];
  int local_b0;
  int local_ac;
  longlong local_a8;
  int local_a0;
  int local_9c;
  longlong local_98;
  longlong *local_90;
  undefined1 local_80;
  undefined1 local_7f;
  undefined1 local_7e;
  undefined1 local_7d;
  char local_7c;
  char local_7b;
  undefined1 local_7a;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  cVar4 = FWeakObjectPtr::IsValid(param_1 + 1);
  pwVar15 = (wchar_t *)0x0;
  if ((cVar4 != '\0') &&
     (plVar6 = (longlong *)FWeakObjectPtr::Get(param_1 + 1), plVar6 != (longlong *)0x0)) {
    lVar7 = FUN_1413f82e0();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      pwVar8 = _guard_xfg_dispatch_icall_nop(L"&UGFxAmmoBar::OnWeaponChanged",L"::");
      pwVar11 = pwVar15;
      while (pwVar3 = pwVar8, pwVar3 != (wchar_t *)0x0) {
        pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
        pwVar11 = pwVar3;
      }
      FName::FName(&local_res10,pwVar11 + 2,1);
      TMulticastScriptDelegate<FWeakObjectPtr>::Remove(plVar6 + 0x20a,*param_1,local_res10);
      FUN_140483870(plVar6 + 0x25d,*param_1);
      lVar7 = (**(code **)(*plVar6 + 0x670))(plVar6);
      if (lVar7 != 0) {
        lVar9 = FUN_14145f370();
        if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          FUN_1407665e0(lVar7 + 0xaf8,*param_1);
        }
      }
    }
  }
  if (*(longlong *)(*param_1 + 0x690) != 0) {
    pwVar8 = _guard_xfg_dispatch_icall_nop(L"&UGFxAmmoBar::OnWeaponChanged",L"::");
    pwVar11 = pwVar15;
    while (pwVar3 = pwVar8, pwVar3 != (wchar_t *)0x0) {
      pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar11 = pwVar3;
    }
    FName::FName(&local_res18,pwVar11 + 2,1);
    lVar7 = *param_1;
    lVar9 = *(longlong *)(lVar7 + 0x690);
    plVar6 = (longlong *)(lVar9 + 0x1050);
    FWeakObjectPtr::operator=(&local_b0,0);
    local_a8 = 0;
    FWeakObjectPtr::operator=(&local_b0,lVar7);
    local_a8 = local_res18;
    if ((local_res18 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_b0), lVar7 != 0)) {
      UObject::FindFunction(lVar7,local_a8);
    }
    piVar12 = (int *)*plVar6;
    iVar1 = *(int *)(lVar9 + 0x1058);
    for (piVar13 = piVar12; piVar13 != piVar12 + (longlong)iVar1 * 4; piVar13 = piVar13 + 4) {
      if (((*piVar13 == local_b0) && (piVar13[1] == local_ac)) ||
         ((cVar4 = FWeakObjectPtr::IsValid(piVar13), cVar4 == '\0' &&
          (cVar4 = FWeakObjectPtr::IsValid(&local_b0), cVar4 == '\0')))) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if ((bVar2) && (*(longlong *)(piVar13 + 2) == local_a8)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (bVar2) {
        if ((int)((longlong)piVar13 - (longlong)piVar12 >> 4) != -1) goto LAB_140ed3127;
        break;
      }
    }
    iVar1 = *(int *)(lVar9 + 0x1058);
    lVar7 = (longlong)iVar1;
    *(int *)(lVar9 + 0x1058) = iVar1 + 1;
    if (*(int *)(lVar9 + 0x105c) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar6,iVar1);
    }
    lVar9 = *plVar6;
    *(int *)(lVar9 + lVar7 * 0x10) = local_b0;
    *(int *)(lVar9 + 4 + lVar7 * 0x10) = local_ac;
    *(longlong *)(lVar9 + 8 + lVar7 * 0x10) = local_a8;
LAB_140ed3127:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar6);
    uVar10 = FUN_140c46a10(*(undefined8 *)(*param_1 + 0x690),0);
    FUN_140f01dc0(*param_1,uVar10,0);
    lVar7 = *param_1;
    lVar9 = *(longlong *)(lVar7 + 0x690);
    plVar14 = (longlong *)(lVar9 + 0x12e8);
    plVar6 = (longlong *)FMemory::Realloc(0,0x30);
    local_90 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      *plVar6 = (longlong)&PTR_FUN_14419ca48;
      FWeakObjectPtr::operator=(plVar6 + 1,lVar7);
      plVar6[2] = (longlong)FUN_140f01d70;
      lVar7 = FDelegateHandle::GenerateNewID();
      plVar6[4] = lVar7;
      *plVar6 = (longlong)&PTR_FUN_14419ca90;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar14,1);
      (**(code **)(*plVar6 + 0x20))(plVar6,local_b8);
      iVar1 = *(int *)(lVar9 + 0x12f0);
      *(int *)(lVar9 + 0x12f0) = iVar1 + 1;
      if (*(int *)(lVar9 + 0x12f4) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar14,iVar1);
      }
      lVar7 = *plVar14;
      *(longlong **)(lVar7 + (longlong)iVar1 * 0x10) = plVar6;
      *(undefined4 *)(lVar7 + 8 + (longlong)iVar1 * 0x10) = 3;
    }
  }
  if ((*(longlong **)(*param_1 + 0x690) != (longlong *)0x0) &&
     (lVar7 = (**(code **)(**(longlong **)(*param_1 + 0x690) + 0x670))(), lVar7 != 0)) {
    lVar9 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      pwVar11 = _guard_xfg_dispatch_icall_nop(L"&UGFxAmmoBar::OnCurrentUsableChanged",L"::");
      while (pwVar8 = pwVar11, pwVar8 != (wchar_t *)0x0) {
        pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar8 + 1,L"::");
        pwVar15 = pwVar8;
      }
      FName::FName(&local_res20,pwVar15 + 2,1);
      lVar9 = *param_1;
      plVar6 = (longlong *)(lVar7 + 0xaf8);
      FWeakObjectPtr::operator=(&local_a0,0);
      local_98 = 0;
      FWeakObjectPtr::operator=(&local_a0,lVar9);
      local_98 = local_res20;
      if ((local_res20 != 0) && (lVar9 = FWeakObjectPtr::Get(&local_a0), lVar9 != 0)) {
        UObject::FindFunction(lVar9,local_98);
      }
      piVar12 = (int *)*plVar6;
      iVar1 = *(int *)(lVar7 + 0xb00);
      for (piVar13 = piVar12; piVar13 != piVar12 + (longlong)iVar1 * 4; piVar13 = piVar13 + 4) {
        if (((*piVar13 == local_a0) && (piVar13[1] == local_9c)) ||
           ((cVar4 = FWeakObjectPtr::IsValid(piVar13), cVar4 == '\0' &&
            (cVar4 = FWeakObjectPtr::IsValid(&local_a0), cVar4 == '\0')))) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if ((bVar2) && (*(longlong *)(piVar13 + 2) == local_98)) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if (bVar2) {
          if ((int)((longlong)piVar13 - (longlong)piVar12 >> 4) != -1) goto LAB_140ed3395;
          break;
        }
      }
      iVar1 = *(int *)(lVar7 + 0xb00);
      *(int *)(lVar7 + 0xb00) = iVar1 + 1;
      if (*(int *)(lVar7 + 0xb04) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar6,iVar1);
      }
      piVar12 = (int *)((longlong)iVar1 * 0x10 + *plVar6);
      *piVar12 = local_a0;
      piVar12[1] = local_9c;
      *(longlong *)(piVar12 + 2) = local_98;
LAB_140ed3395:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar6);
      local_80 = *(undefined1 *)(lVar7 + 0xcc8);
      local_7f = *(undefined1 *)(lVar7 + 0xcc9);
      local_7e = *(undefined1 *)(lVar7 + 0xcca);
      local_7d = *(undefined1 *)(lVar7 + 0xccb);
      local_7c = *(char *)(lVar7 + 0xccc);
      local_7b = *(char *)(lVar7 + 0xccd);
      local_7a = *(undefined1 *)(lVar7 + 0xcce);
      FText::FText(local_78,lVar7 + 0xcd0);
      local_60 = *(undefined8 *)(lVar7 + 0xce8);
      local_58 = *(undefined8 *)(lVar7 + 0xcf0);
      local_50 = *(undefined8 *)(lVar7 + 0xcf8);
      local_48 = *(undefined8 *)(lVar7 + 0xd00);
      if ((local_7c == '\0') && (local_7b == '\0')) {
        uVar5 = 0;
      }
      else {
        uVar5 = 1;
      }
      *(undefined1 *)(*param_1 + 0x718) = uVar5;
      FUN_140f0fb60();
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_70 + 1;
        lVar7 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar12 = (int *)((longlong)local_70 + 0xc);
          iVar1 = *piVar12;
          *piVar12 = *piVar12 + -1;
          UNLOCK();
          if (iVar1 == 1) {
            (**(code **)(*local_70 + 8))(local_70,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140ed34a0 FUN_140ed34a0 body=127 status=ok
// SIG undefined FUN_140ed34a0(void)

void FUN_140ed34a0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 local_res8;
  undefined4 local_resc;
  
  if (*(longlong *)(*param_1 + 0x638) != 0) {
    FUN_140f0a600(*param_1,1);
    uVar2 = FWeakObjectPtr::Get(*param_1 + 0x640);
    uVar3 = FUN_140eccd20(*param_1);
    FUN_140f03a80(*(undefined8 *)(*param_1 + 0x638),uVar3,uVar2);
  }
  FWeakObjectPtr::operator=(&local_res8,0);
  lVar1 = *param_1;
  *(undefined4 *)(lVar1 + 0x640) = local_res8;
  *(undefined4 *)(lVar1 + 0x644) = local_resc;
  return;
}



// FUNCTION 140ed3520 FUN_140ed3520 body=263 status=ok
// SIG undefined FUN_140ed3520(void)

void FUN_140ed3520(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  int local_res8 [2];
  undefined8 local_18;
  undefined8 local_10;
  
  lVar1 = *param_1;
  TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x50,local_res8,param_1 + 1);
  plVar3 = (longlong *)0x0;
  if (local_res8[0] != -1) {
    plVar3 = (longlong *)((longlong)local_res8[0] * 0x20 + *(longlong *)(lVar1 + 0x50));
  }
  plVar4 = plVar3 + 2;
  if (plVar3 == (longlong *)0x0) {
    plVar4 = (longlong *)0x0;
  }
  if ((plVar4 != (longlong *)0x0) && (*plVar4 != 0)) {
    FUN_140ee4060(param_1[3]);
    if (*(longlong *)(param_1[3] + 0x710) != 0) {
      FUN_142ecd360(*(longlong *)(param_1[3] + 0x710),*plVar4);
      FUN_142ed3c40(*(undefined8 *)(param_1[3] + 0x710),*(int *)(*param_1 + 0xa0) == 1);
      FUN_142ecd3d0(*(undefined8 *)(param_1[3] + 0x710));
    }
    if (*(int *)(*param_1 + 0xa0) == 1) {
      *(undefined1 *)(param_1[3] + 0x71a) = 1;
    }
  }
  local_18 = 0;
  local_10 = 0;
  lVar1 = *(longlong *)param_1[3];
  puVar2 = (undefined8 *)FName::FName(local_res8,PTR_s_Echo_Portrait_Up_14629dc18,1);
  (**(code **)(lVar1 + 0x4e8))(param_1[3],*puVar2,&local_18);
  return;
}



// FUNCTION 140ed3630 FUN_140ed3630 body=228 status=ok
// SIG undefined FUN_140ed3630(void)

void FUN_140ed3630(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 local_res8;
  undefined4 local_resc;
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18 [8];
  undefined4 local_10;
  undefined4 local_c;
  
  FWeakObjectPtr::operator=(&local_28,0);
  FWeakObjectPtr::operator=(&local_20,0);
  FWeakObjectPtr::operator=(local_18,0);
  FWeakObjectPtr::operator=(&local_10,0);
  FWeakObjectPtr::operator=(&local_res8,0);
  local_28 = local_res8;
  local_24 = local_resc;
  FWeakObjectPtr::operator=(local_18,*(undefined8 *)(*param_1 + 0xf38));
  FWeakObjectPtr::operator=(&local_res8,0);
  local_10 = local_res8;
  local_c = local_resc;
  FWeakObjectPtr::operator=(&local_res8,0);
  lVar3 = *param_1;
  local_20 = local_res8;
  local_1c = local_resc;
  lVar1 = *(longlong *)(lVar3 + 0xf40);
  local_38 = lVar1;
  if (lVar1 == 0) {
    local_30 = 0;
  }
  else {
    uVar2 = UBlendableInterface::GetPrivateStaticClass();
    local_30 = UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar2);
    lVar3 = *param_1;
  }
  FUN_142ecfd10(lVar3,&local_38,&local_28);
  return;
}



// FUNCTION 140ed3720 FUN_140ed3720 body=883 status=ok
// SIG undefined FUN_140ed3720(void)

void FUN_140ed3720(longlong *param_1)

{
  int iVar1;
  bool bVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  int *piVar10;
  int *piVar11;
  longlong *plVar12;
  longlong local_res10;
  int local_38;
  int local_34;
  longlong local_30;
  
  lVar7 = FWeakObjectPtr::Get(*param_1 + 0x5d8);
  if (lVar7 != 0) {
    lVar8 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      pwVar9 = _guard_xfg_dispatch_icall_nop(L"&UGFxCurrencyWidget::OnPauseStateChanged",L"::");
      pwVar4 = (wchar_t *)0x0;
      while (pwVar3 = pwVar9, pwVar3 != (wchar_t *)0x0) {
        pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
        pwVar4 = pwVar3;
      }
      FName::FName(&local_res10,pwVar4 + 2,1);
      lVar5 = local_res10;
      lVar8 = *param_1;
      plVar12 = (longlong *)(lVar7 + 0x8d0);
      FWeakObjectPtr::operator=(&local_38,0);
      local_30 = 0;
      FWeakObjectPtr::operator=(&local_38,lVar8);
      local_30 = lVar5;
      if ((lVar5 != 0) && (lVar8 = FWeakObjectPtr::Get(&local_38), lVar8 != 0)) {
        UObject::FindFunction(lVar8,local_30);
      }
      piVar10 = (int *)*plVar12;
      iVar1 = *(int *)(lVar7 + 0x8d8);
      for (piVar11 = piVar10; piVar11 != piVar10 + (longlong)iVar1 * 4; piVar11 = piVar11 + 4) {
        if (((*piVar11 == local_38) && (piVar11[1] == local_34)) ||
           ((cVar6 = FWeakObjectPtr::IsValid(piVar11), cVar6 == '\0' &&
            (cVar6 = FWeakObjectPtr::IsValid(&local_38), cVar6 == '\0')))) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if ((bVar2) && (*(longlong *)(piVar11 + 2) == local_30)) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if (bVar2) {
          if ((int)((longlong)piVar11 - (longlong)piVar10 >> 4) != -1) goto LAB_140ed38d8;
          break;
        }
      }
      iVar1 = *(int *)(lVar7 + 0x8d8);
      lVar8 = (longlong)iVar1;
      *(int *)(lVar7 + 0x8d8) = iVar1 + 1;
      if (*(int *)(lVar7 + 0x8dc) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar12,iVar1);
      }
      lVar7 = *plVar12;
      *(int *)(lVar7 + lVar8 * 0x10) = local_38;
      *(int *)(lVar7 + 4 + lVar8 * 0x10) = local_34;
      *(longlong *)(lVar7 + 8 + lVar8 * 0x10) = local_30;
LAB_140ed38d8:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar12);
    }
  }
  lVar7 = FWeakObjectPtr::Get(*param_1 + 0x5c8);
  if (lVar7 != 0) {
    lVar8 = FUN_14142a560();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      pwVar9 = _guard_xfg_dispatch_icall_nop
                         (L"&UGFxCurrencyWidget::OnDisplayCurrencyWidgetOnHUD",L"::");
      pwVar4 = (wchar_t *)0x0;
      while (pwVar3 = pwVar9, pwVar3 != (wchar_t *)0x0) {
        pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
        pwVar4 = pwVar3;
      }
      FName::FName(&local_res10,pwVar4 + 2,1);
      lVar8 = *param_1;
      plVar12 = (longlong *)(lVar7 + 0x7e0);
      FWeakObjectPtr::operator=(&local_38,0);
      local_30 = 0;
      FWeakObjectPtr::operator=(&local_38,lVar8);
      local_30 = local_res10;
      if ((local_res10 != 0) && (lVar8 = FWeakObjectPtr::Get(&local_38), lVar8 != 0)) {
        UObject::FindFunction(lVar8,local_30);
      }
      piVar10 = (int *)*plVar12;
      iVar1 = *(int *)(lVar7 + 0x7e8);
      for (piVar11 = piVar10; piVar11 != piVar10 + (longlong)iVar1 * 4; piVar11 = piVar11 + 4) {
        if (((*piVar11 == local_38) && (piVar11[1] == local_34)) ||
           ((cVar6 = FWeakObjectPtr::IsValid(piVar11), cVar6 == '\0' &&
            (cVar6 = FWeakObjectPtr::IsValid(&local_38), cVar6 == '\0')))) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if ((bVar2) && (*(longlong *)(piVar11 + 2) == local_30)) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if (bVar2) {
          if ((int)((longlong)piVar11 - (longlong)piVar10 >> 4) != -1) goto LAB_140ed3a74;
          break;
        }
      }
      iVar1 = *(int *)(lVar7 + 0x7e8);
      *(int *)(lVar7 + 0x7e8) = iVar1 + 1;
      if (*(int *)(lVar7 + 0x7ec) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar12,iVar1);
      }
      piVar10 = (int *)((longlong)iVar1 * 0x10 + *plVar12);
      *piVar10 = local_38;
      piVar10[1] = local_34;
      *(longlong *)(piVar10 + 2) = local_30;
LAB_140ed3a74:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar12);
    }
  }
  return;
}



// FUNCTION 140ed3aa0 FUN_140ed3aa0 body=705 status=ok
// SIG undefined FUN_140ed3aa0(void)

void FUN_140ed3aa0(longlong *param_1)

{
  longlong lVar1;
  void *_Src;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  undefined8 local_res8;
  longlong *local_48;
  undefined8 local_40;
  
  bVar12 = false;
  if (*(longlong *)(*param_1 + 0x640) != 0) {
    *(undefined1 *)(*param_1 + 0x664) = 1;
    plVar10 = (longlong *)*param_1;
    iVar4 = (int)plVar10[0xcc];
    if (iVar4 == 0) {
      (**(code **)(*plVar10 + 0x578))(plVar10,1);
      iVar4 = (int)plVar10[0xcc];
    }
    local_48 = (longlong *)0x0;
    *(int *)(plVar10 + 0xcc) = iVar4 + 1;
    local_40 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    FGenericPlatformString::Memcpy(local_48,&DAT_144603cf8,10);
    FUN_142088910(*(undefined8 *)(*param_1 + 0x640),&local_48);
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
    lVar5 = FUN_140eccd20(*param_1);
    if (lVar5 != 0) {
      cVar3 = FWeakObjectPtr::IsValid(*param_1 + 0x630);
      if (cVar3 == '\0') {
        local_res8 = 0;
      }
      else {
        uVar6 = FWeakObjectPtr::Get(*param_1 + 0x630);
        local_res8 = FUN_140aab8f0(uVar6,lVar5);
      }
      lVar11 = *(longlong *)(*param_1 + 0x648);
      lVar1 = lVar11 + (longlong)*(int *)(*param_1 + 0x650) * 0x18;
      if (lVar11 != lVar1) {
        plVar10 = local_48;
        lVar11 = lVar11 + 8;
        do {
          cVar3 = FWeakObjectPtr::IsValid(lVar11);
          if (cVar3 != '\0') {
            lVar7 = FWeakObjectPtr::Get(lVar11);
            lVar7 = *(longlong *)(lVar7 + 0x118);
            if (lVar7 != 0) {
              lVar8 = UNukerSkills001Widget::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if (bVar2) {
                if (*(longlong *)(lVar7 + 0x560) == lVar5) {
LAB_140ed3cd4:
                  bVar2 = true;
                }
                else {
                  iVar4 = *(int *)(lVar7 + 0x578);
                  plVar10 = (longlong *)0x0;
                  _Src = *(void **)(lVar7 + 0x570);
                  bVar12 = true;
                  local_48 = (longlong *)0x0;
                  local_40 = CONCAT44(local_40._4_4_,iVar4);
                  if (iVar4 == 0) {
                    local_40 = 0;
                    local_40._0_4_ = 0;
                  }
                  else {
                    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                              (&local_48,iVar4,0);
                    plVar10 = local_48;
                    _guard_xfg_dispatch_icall_nop(local_48,_Src,(longlong)iVar4 << 3);
                  }
                  for (plVar9 = plVar10; plVar9 != plVar10 + (int)local_40; plVar9 = plVar9 + 1) {
                    if (*plVar9 == lVar5) goto LAB_140ed3cd4;
                  }
                  bVar2 = false;
                }
                if ((bVar12) && (bVar12 = false, plVar10 != (longlong *)0x0)) {
                  FMemory::Free(plVar10);
                }
                if (bVar2) {
                  lVar5 = *(longlong *)(*param_1 + 0x640);
                  FUN_140f0b520(lVar5,lVar7,0);
                  FWeakObjectPtr::operator=(lVar5 + 0x178,local_res8);
                  *(undefined1 *)(lVar5 + 0x23c) = 1;
                  return;
                }
              }
            }
          }
          lVar7 = lVar11 + 0x10;
          lVar11 = lVar11 + 0x18;
        } while (lVar7 != lVar1);
      }
    }
  }
  return;
}



// FUNCTION 140ed3d70 FUN_140ed3d70 body=1197 status=ok
// SIG undefined FUN_140ed3d70(void)

void FUN_140ed3d70(longlong *param_1)

{
  int iVar1;
  bool bVar2;
  wchar_t *pwVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  longlong *plVar12;
  int *piVar13;
  int *piVar14;
  wchar_t *pwVar15;
  undefined8 local_res8;
  longlong local_res10;
  int local_38;
  int local_34;
  longlong local_30;
  
  cVar4 = FWeakObjectPtr::IsValid(param_1 + 2);
  if ((cVar4 != '\0') &&
     (plVar5 = (longlong *)FWeakObjectPtr::Get(param_1 + 2), plVar5 != (longlong *)0x0)) {
    lVar6 = FUN_1413f82e0();
    if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      plVar12 = plVar5 + 0x20a;
LAB_140ed3dfd:
      FUN_1407665e0(plVar12,*param_1);
    }
    else {
      uVar7 = FUN_1412d7930();
      lVar6 = (**(code **)(*plVar5 + 0x628))(plVar5,uVar7);
      if (lVar6 != 0) {
        plVar12 = (longlong *)(lVar6 + 0x1c8);
        goto LAB_140ed3dfd;
      }
    }
    uVar7 = FUN_1414b0910();
    lVar6 = (**(code **)(*plVar5 + 0x628))(plVar5,uVar7);
    if (lVar6 != 0) {
      FUN_1407665e0(lVar6 + 0x210,*param_1);
    }
  }
  cVar4 = FUN_142045f70();
  if (cVar4 != '\0') {
    return;
  }
  cVar4 = FWeakObjectPtr::IsValid(param_1 + 1);
  pwVar15 = (wchar_t *)0x0;
  pwVar8 = pwVar15;
  if (cVar4 != '\0') {
    pwVar8 = (wchar_t *)FWeakObjectPtr::Get(param_1 + 1);
  }
  cVar4 = FWeakObjectPtr::IsValid(param_1 + 1);
  if ((cVar4 == '\0') ||
     (plVar5 = (longlong *)FWeakObjectPtr::Get(param_1 + 1), plVar5 == (longlong *)0x0))
  goto LAB_140ed4191;
  lVar6 = FUN_1413f82e0();
  if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    lVar6 = (**(code **)(*plVar5 + 0x670))(plVar5);
    if ((lVar6 != 0) && (pwVar11 = *(wchar_t **)(lVar6 + 0x488), pwVar11 != (wchar_t *)0x0)) {
      lVar6 = FUN_1414bbb50();
      if ((*(int *)(*(longlong *)(pwVar11 + 8) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(pwVar11 + 8) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
          != lVar6 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        pwVar8 = pwVar11;
      }
    }
    pwVar9 = _guard_xfg_dispatch_icall_nop(L"&UGFxCrosshairWidget::OnWeaponChanged",L"::");
    pwVar11 = pwVar15;
    while (pwVar3 = pwVar9, pwVar3 != (wchar_t *)0x0) {
      pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar11 = pwVar3;
    }
    FName::FName(&local_res8,pwVar11 + 2,1);
    plVar12 = plVar5 + 0x20a;
LAB_140ed3fe3:
    FUN_14074ba20(plVar12,*param_1,FUN_140f026c0,local_res8);
  }
  else {
    uVar7 = FUN_1412d7930();
    lVar6 = (**(code **)(*plVar5 + 0x628))(plVar5,uVar7);
    if (lVar6 != 0) {
      pwVar9 = _guard_xfg_dispatch_icall_nop(L"&UGFxCrosshairWidget::OnWeaponChanged",L"::");
      pwVar11 = pwVar15;
      while (pwVar3 = pwVar9, pwVar3 != (wchar_t *)0x0) {
        pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
        pwVar11 = pwVar3;
      }
      FName::FName(&local_res8,pwVar11 + 2,1);
      plVar12 = (longlong *)(lVar6 + 0x1c8);
      goto LAB_140ed3fe3;
    }
  }
  uVar7 = FUN_1414b0910();
  lVar6 = (**(code **)(*plVar5 + 0x628))(plVar5,uVar7);
  if (lVar6 != 0) {
    pwVar9 = _guard_xfg_dispatch_icall_nop(L"&UGFxCrosshairWidget::OnMeleeStateChangeEvent",L"::");
    pwVar11 = pwVar15;
    while (pwVar3 = pwVar9, pwVar3 != (wchar_t *)0x0) {
      pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar11 = pwVar3;
    }
    FName::FName(&local_res10,pwVar11 + 2,1);
    lVar10 = *param_1;
    plVar5 = (longlong *)(lVar6 + 0x210);
    FWeakObjectPtr::operator=(&local_38,0);
    local_30 = 0;
    FWeakObjectPtr::operator=(&local_38,lVar10);
    local_30 = local_res10;
    local_res8 = 0;
    if ((local_res10 != 0) && (lVar10 = FWeakObjectPtr::Get(&local_38), lVar10 != 0)) {
      UObject::FindFunction(lVar10,local_30);
    }
    piVar13 = (int *)*plVar5;
    iVar1 = *(int *)(lVar6 + 0x218);
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
        if ((int)((longlong)piVar14 - (longlong)piVar13 >> 4) != -1) goto LAB_140ed417a;
        break;
      }
    }
    iVar1 = *(int *)(lVar6 + 0x218);
    *(int *)(lVar6 + 0x218) = iVar1 + 1;
    if (*(int *)(lVar6 + 0x21c) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar5,iVar1);
    }
    piVar13 = (int *)((longlong)iVar1 * 0x10 + *plVar5);
    *piVar13 = local_38;
    piVar13[1] = local_34;
    *(longlong *)(piVar13 + 2) = local_30;
LAB_140ed417a:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar5);
  }
LAB_140ed4191:
  FUN_140f08b10(*param_1);
  pwVar11 = pwVar15;
  if (pwVar8 != (wchar_t *)0x0) {
    uVar7 = FUN_1430a8880();
    pwVar11 = (wchar_t *)UObjectBaseUtility::GetInterfaceAddress(pwVar8,uVar7);
  }
  lVar6 = *param_1;
  *(wchar_t **)(lVar6 + 0x728) = pwVar8;
  *(wchar_t **)(lVar6 + 0x730) = pwVar11;
  lVar6 = *param_1;
  if ((*(longlong *)(lVar6 + 0x728) != 0) && (*(wchar_t **)(lVar6 + 0x730) != (wchar_t *)0x0)) {
    pwVar8 = *(wchar_t **)(lVar6 + 0x730);
    if (*(longlong *)(lVar6 + 0x728) == 0) {
      pwVar8 = pwVar15;
    }
    uVar7 = (**(code **)(*(longlong *)pwVar8 + 0xf0))(pwVar8,*(undefined1 *)(lVar6 + 0x630));
    FUN_140f026c0(*param_1,uVar7,*(undefined8 *)(lVar6 + 0x6f8));
  }
  return;
}



// FUNCTION 140ed4220 FUN_140ed4220 body=897 status=ok
// SIG undefined FUN_140ed4220(void)

void FUN_140ed4220(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  undefined2 *puVar10;
  longlong lVar11;
  longlong *plVar12;
  bool bVar13;
  undefined4 local_res8 [4];
  undefined4 local_res18;
  undefined4 local_res1c;
  undefined2 *local_68;
  int local_60;
  longlong local_58;
  longlong *plStack_50;
  longlong local_48;
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  lVar11 = 0;
  local_res8[0] = 0;
  local_res18 = (undefined4)param_1[1];
  local_res1c = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar4 = FWeakObjectPtr::IsValid(&local_res18);
  if (cVar4 != '\0') {
    lVar7 = FWeakObjectPtr::Get(&local_res18);
    iVar6 = *(int *)(lVar7 + 0xc);
    lVar7 = lVar11;
    if (iVar6 < (int)DAT_1469e91c4) {
      uVar9 = iVar6 >> 0x1f & 0xffff;
      uVar5 = iVar6 + uVar9;
      lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
              (longlong)(int)((uVar5 & 0xffff) - uVar9) * 0x18;
    }
    if ((*(uint *)(lVar7 + 8) & 0x30000000) == 0) {
      FName::ToString(param_1[2],&local_68);
      if (*(longlong *)(*param_1 + 0x228) != 0) {
        FUN_142085870(*(longlong *)(*param_1 + 0x228),&local_48,L"currencyIcons");
        if (local_48 != 0) {
          FUN_14203dbf0(local_48,&local_68);
        }
        if (local_40 != (longlong *)0x0) {
          LOCK();
          plVar8 = local_40 + 1;
          lVar7 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_40)(local_40);
            LOCK();
            piVar1 = (int *)((longlong)local_40 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*local_40 + 8))(local_40,1);
            }
          }
        }
        bVar13 = *(longlong *)(*param_1 + 0x228) == 0;
        if (bVar13) {
          plVar8 = &local_58;
          local_58 = 0;
          plStack_50 = (longlong *)0x0;
        }
        else {
          plVar8 = (longlong *)FUN_142085870(*(longlong *)(*param_1 + 0x228),local_38,L"rightBG");
          lVar11 = *plVar8;
        }
        plVar12 = (longlong *)plVar8[1];
        plVar8[1] = 0;
        *plVar8 = 0;
        plVar8 = plStack_50;
        if ((bVar13) && (plStack_50 != (longlong *)0x0)) {
          LOCK();
          plVar3 = plStack_50 + 1;
          lVar7 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plStack_50)(plStack_50);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plStack_50 + 8))(plStack_50,1);
            }
          }
        }
        if ((!bVar13) && (local_30 != (longlong *)0x0)) {
          LOCK();
          plVar8 = local_30 + 1;
          lVar7 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_30)(local_30);
            LOCK();
            piVar1 = (int *)((longlong)local_30 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*local_30 + 8))(local_30,1);
            }
          }
        }
        if (lVar11 != 0) {
          puVar10 = &DAT_143f3eda8;
          if (local_60 != 0) {
            puVar10 = local_68;
          }
          FUN_14203e030(lVar11,puVar10);
        }
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          plVar8 = plVar12 + 1;
          lVar11 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar12 + 8))(plVar12,1);
            }
          }
        }
        plVar8 = *(longlong **)(*param_1 + 0x1b8);
        plVar12 = plVar8 + (longlong)*(int *)(*param_1 + 0x1c0) * 2;
        for (; plVar8 != plVar12; plVar8 = plVar8 + 2) {
          plVar3 = (longlong *)plVar8[1];
          lVar11 = *plVar8;
          if (plVar3 == (longlong *)0x0) {
LAB_140ed44f8:
            if (plVar3 != (longlong *)0x0) {
              if (lVar11 != 0) {
                FUN_14203dbf0(lVar11,&local_68);
              }
              LOCK();
              plVar2 = plVar3 + 1;
              lVar11 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar11 == 1) {
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
          }
          else {
            LOCK();
            *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
            UNLOCK();
            LOCK();
            iVar6 = (int)plVar3[1];
            bVar13 = iVar6 == 0;
            if (bVar13) {
              *(int *)(plVar3 + 1) = 0;
              iVar6 = 0;
            }
            UNLOCK();
            while (!bVar13) {
              LOCK();
              bVar13 = iVar6 == (int)plVar3[1];
              if (bVar13) {
                *(int *)(plVar3 + 1) = iVar6 + 1;
              }
              UNLOCK();
              if (bVar13) goto LAB_140ed44f8;
              LOCK();
              iVar6 = (int)plVar3[1];
              bVar13 = iVar6 == 0;
              if (bVar13) {
                *(int *)(plVar3 + 1) = 0;
                iVar6 = 0;
              }
              UNLOCK();
            }
          }
          if (plVar3 != (longlong *)0x0) {
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
      }
      if (local_68 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140ed45b0 FUN_140ed45b0 body=214 status=ok
// SIG undefined FUN_140ed45b0(void)

void FUN_140ed45b0(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong local_18 [2];
  
  if (*(longlong *)(*param_1 + 0x638) != 0) {
    *(undefined1 *)(*param_1 + 0x640) = 1;
    (**(code **)(*(longlong *)*param_1 + 0x5d8))();
    lVar2 = *(longlong *)(*param_1 + 0x638);
    if ((*(longlong *)(lVar2 + 0x178) != 0) && (*(longlong *)(lVar2 + 0x180) != 0)) {
      piVar1 = (int *)(*(longlong *)(lVar2 + 0x180) + 8);
      LOCK();
      iVar3 = *piVar1;
      if (iVar3 == 0) {
        *piVar1 = 0;
        iVar3 = 0;
      }
      UNLOCK();
      if (0 < iVar3) {
        UMistDebugEntityScreen::InspectEntity(lVar2 + 0x170,param_1 + 1,1,0);
      }
    }
    local_18[0] = 0;
    local_18[1] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Memcpy(local_18[0],L"play",10);
    FUN_142088910(lVar2,local_18);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140ed4690 FUN_140ed4690 body=492 status=ok
// SIG undefined FUN_140ed4690(void)

void FUN_140ed4690(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  if ((*(longlong *)(*param_1 + 0x650) != 0) && (*(longlong *)(*param_1 + 0x668) != 0)) {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    lVar1 = *(longlong *)(DAT_146b33f38 + 0x90);
    if (lVar1 != 0) {
      lVar2 = *param_1;
      plVar4 = (longlong *)FUN_1411e4840(lVar1);
      uVar3 = FUN_142ff7c90(*(undefined8 *)(lVar2 + 0x668),*plVar4);
      plVar5 = *(longlong **)(*(longlong *)(lVar2 + 0x650) + 0x188);
      plVar6 = plVar5 + (longlong)*(int *)(*(longlong *)(lVar2 + 0x650) + 400) * 2;
      for (; plVar5 != plVar6; plVar5 = plVar5 + 2) {
        if ((*plVar4 != 0) && (*plVar4 == *plVar5)) {
          *(undefined4 *)(plVar5 + 1) = uVar3;
          break;
        }
      }
      plVar4 = (longlong *)FUN_1411e2300(lVar1);
      uVar3 = FUN_142ff7c90(*(undefined8 *)(lVar2 + 0x668),*plVar4);
      plVar5 = *(longlong **)(*(longlong *)(lVar2 + 0x650) + 0x188);
      plVar6 = plVar5 + (longlong)*(int *)(*(longlong *)(lVar2 + 0x650) + 400) * 2;
      for (; plVar5 != plVar6; plVar5 = plVar5 + 2) {
        if ((*plVar4 != 0) && (*plVar4 == *plVar5)) {
          *(undefined4 *)(plVar5 + 1) = uVar3;
          break;
        }
      }
      plVar4 = (longlong *)FUN_1411e23e0(lVar1);
      uVar3 = FUN_142ff7c90(*(undefined8 *)(lVar2 + 0x668),*plVar4);
      plVar5 = *(longlong **)(*(longlong *)(lVar2 + 0x650) + 0x188);
      plVar6 = plVar5 + (longlong)*(int *)(*(longlong *)(lVar2 + 0x650) + 400) * 2;
      for (; plVar5 != plVar6; plVar5 = plVar5 + 2) {
        if ((*plVar4 != 0) && (*plVar4 == *plVar5)) {
          *(undefined4 *)(plVar5 + 1) = uVar3;
          break;
        }
      }
      plVar4 = (longlong *)FUN_1411e7440(lVar1);
      uVar3 = FUN_142ff7c90(*(undefined8 *)(lVar2 + 0x668),*plVar4);
      plVar5 = *(longlong **)(*(longlong *)(lVar2 + 0x650) + 0x188);
      plVar6 = plVar5 + (longlong)*(int *)(*(longlong *)(lVar2 + 0x650) + 400) * 2;
      if (plVar5 != plVar6) {
        while ((*plVar4 == 0 || (*plVar4 != *plVar5))) {
          plVar5 = plVar5 + 2;
          if (plVar5 == plVar6) {
            return;
          }
        }
        *(undefined4 *)(plVar5 + 1) = uVar3;
      }
    }
  }
  return;
}



// FUNCTION 140ed4880 FUN_140ed4880 body=724 status=ok
// SIG undefined FUN_140ed4880(void)

void FUN_140ed4880(longlong *param_1)

{
  float fVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint uVar8;
  longlong *plVar9;
  int iVar10;
  undefined4 uVar11;
  float fVar12;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  longlong *local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48 [6];
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar2 == '\0') {
    return;
  }
  lVar5 = FWeakObjectPtr::Get(&local_res10);
  lVar6 = 0;
  iVar10 = *(int *)(lVar5 + 0xc);
  if (iVar10 < (int)DAT_1469e91c4) {
    uVar8 = iVar10 >> 0x1f & 0xffff;
    uVar3 = iVar10 + uVar8;
    lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
            (longlong)(int)((uVar3 & 0xffff) - uVar8) * 0x18;
  }
  if ((*(uint *)(lVar6 + 8) & 0x30000000) != 0) {
    return;
  }
  lVar6 = *param_1;
  if (*(longlong *)(lVar6 + 0x760) == 0) {
    return;
  }
  if ((*(longlong *)(lVar6 + 0x6c0) == 0) || (1 < *(int *)(lVar6 + 0x790))) goto LAB_140ed4af3;
  local_58 = 0;
  local_50 = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
  FGenericPlatformString::Memcpy(local_58,L"container",0x14);
  local_68 = (longlong *)0x0;
  local_60 = 0;
  lVar6 = FUN_140ecbdf0(*(undefined8 *)(*param_1 + 0x6c0),&local_58,0,6,&local_68);
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
  if (local_58 != 0) {
    FMemory::Free();
  }
  if (lVar6 == 0) goto LAB_140ed4af3;
  uVar7 = FUN_1413dced0(*(undefined8 *)(*param_1 + 0x760),local_48);
  FString::operator=(*param_1 + 0x788,uVar7);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  FUN_142088cf0(lVar6,*param_1 + 0x788);
  lVar6 = *param_1;
  fVar1 = *(float *)(lVar6 + 0x76c);
  if (0.0 <= fVar1) {
    fVar12 = fVar1;
    if (1.0 <= fVar1) {
      fVar12 = 1.0;
    }
  }
  else {
    fVar12 = 0.0;
  }
  if (*(longlong *)(lVar6 + 0x670) != 0) {
    FUN_142f0ead0(*(longlong *)(lVar6 + 0x670),fVar12);
  }
  cVar2 = *(char *)(lVar6 + 0x768);
  if (cVar2 == '\0') {
LAB_140ed4ac8:
    if (fVar1 < 1.0) {
      FUN_140eee1f0(lVar6);
    }
  }
  else {
    if (1.0 <= fVar1) {
      FUN_140efd5a0(lVar6);
      cVar2 = *(char *)(lVar6 + 0x768);
    }
    if (cVar2 == '\0') goto LAB_140ed4ac8;
  }
  *(bool *)(lVar6 + 0x768) = fVar1 < 1.0;
LAB_140ed4af3:
  *(undefined4 *)(*param_1 + 0x770) = *(undefined4 *)(*param_1 + 0x76c);
  uVar11 = FUN_1409a7d90(*(undefined8 *)(*param_1 + 0x760));
  *(undefined4 *)(*param_1 + 0x76c) = uVar11;
  iVar10 = *(int *)(*param_1 + 0x738) + 1;
  iVar4 = FUN_1409a7dd0(*(undefined8 *)(*param_1 + 0x760));
  if (iVar4 + 1 <= iVar10) {
    iVar10 = iVar4 + 1;
  }
  *(int *)(*param_1 + 0x778) = iVar10;
  return;
}



// FUNCTION 140ed4b60 FUN_140ed4b60 body=636 status=ok
// SIG undefined FUN_140ed4b60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ed4b60(longlong *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [4];
  undefined4 local_a4;
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
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_a4 = (undefined4)param_1[1];
  local_a0 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_a8);
  FUN_14172a400(local_a8);
  cVar2 = FWeakObjectPtr::IsValid(&local_a4);
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(&local_a4);
    lVar6 = 0;
    iVar1 = *(int *)(lVar4 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar7 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar7;
      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar7) * 0x18;
    }
    if ((((*(uint *)(lVar6 + 8) & 0x30000000) == 0) &&
        (plVar5 = (longlong *)FUN_140eccc40(*param_1), plVar5 != (longlong *)0x0)) &&
       (lVar6 = (**(code **)(*plVar5 + 0x148))(plVar5), lVar6 != 0)) {
      if (*(longlong *)(lVar6 + 400) == 0) {
        uVar8 = *(undefined8 *)(lVar6 + 0x3f8);
      }
      else {
        uVar8 = *(undefined8 *)(*(longlong *)(lVar6 + 400) + 0x90);
      }
      lVar6 = *param_1;
      plVar5 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar5 != (longlong *)0x0) {
        *plVar5 = (longlong)&PTR_FUN_143f4d170;
        FWeakObjectPtr::operator=(plVar5 + 1,lVar6);
        plVar5[2] = (longlong)FUN_140eeef30;
        lVar4 = FDelegateHandle::GenerateNewID();
        plVar5[4] = lVar4;
        *plVar5 = (longlong)&PTR_FUN_143f4d1b8;
      }
      local_98 = 0;
      local_90 = 0;
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x30))(plVar5,&local_98);
      }
      FWeakObjectPtr::operator=(local_88,0);
      local_b0 = 0xbf800000;
      local_b8 = 1;
      local_80 = 0;
      local_48 = (longlong *)0x0;
      local_38 = 0;
      local_78 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar8,lVar6 + 0x8c8,&local_98,0x3f800000);
      if (local_38 != 0) {
        plVar9 = local_68;
        if (local_48 != (longlong *)0x0) {
          plVar9 = local_48;
        }
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 0x10))(plVar9,0);
        }
      }
      if (local_48 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_98);
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x28))(plVar5,0);
        lVar6 = FMemory::Realloc(plVar5,0,0);
        if (lVar6 != 0) {
          FMemory::Free(lVar6);
        }
      }
    }
  }
  return;
}



// FUNCTION 140ed4de0 FUN_140ed4de0 body=150 status=ok
// SIG undefined FUN_140ed4de0(void)

void FUN_140ed4de0(longlong param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
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
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar5;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) & 0x30000000) == 0) {
      FUN_140ede6e0(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 140ed4e80 FUN_140ed4e80 body=968 status=ok
// SIG undefined FUN_140ed4e80(void)

void FUN_140ed4e80(longlong *param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  undefined8 local_res8;
  
  lVar4 = *param_1;
  pwVar6 = (wchar_t *)0x0;
  if (*(longlong *)(lVar4 + 0x670) != 0) {
    pwVar2 = _guard_xfg_dispatch_icall_nop(L"&UGFxAmmoBar::UpdateCachedAmmoCounts",L"::");
    pwVar5 = pwVar6;
    while (pwVar3 = pwVar2, pwVar3 != (wchar_t *)0x0) {
      pwVar2 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar5 = pwVar3;
    }
    FName::FName(&local_res8,pwVar5 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove
              (*(longlong *)(*param_1 + 0x670) + 0x4b0,*param_1,local_res8);
    pwVar2 = _guard_xfg_dispatch_icall_nop(L"&UGFxAmmoBar::OnWeaponSwitchedMode",L"::");
    pwVar5 = pwVar6;
    while (pwVar3 = pwVar2, pwVar3 != (wchar_t *)0x0) {
      pwVar2 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar5 = pwVar3;
    }
    FName::FName(&local_res8,pwVar5 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove
              (*(longlong *)(*param_1 + 0x670) + 0x510,*param_1,local_res8);
    pwVar2 = _guard_xfg_dispatch_icall_nop(L"&UGFxAmmoBar::OnWeaponEquipped",L"::");
    pwVar5 = pwVar6;
    while (pwVar3 = pwVar2, pwVar3 != (wchar_t *)0x0) {
      pwVar2 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar5 = pwVar3;
    }
    FName::FName(&local_res8,pwVar5 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove
              (*(longlong *)(*param_1 + 0x670) + 0x4f0,*param_1,local_res8);
    lVar4 = *param_1;
  }
  if (*(longlong *)(lVar4 + 0x748) != 0) {
    pwVar2 = _guard_xfg_dispatch_icall_nop(L"&UGFxAmmoBar::WeaponSecondaryModeAmmoChanged",L"::");
    pwVar5 = pwVar6;
    while (pwVar3 = pwVar2, pwVar3 != (wchar_t *)0x0) {
      pwVar2 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar5 = pwVar3;
    }
    FName::FName(&local_res8,pwVar5 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove
              (*(longlong *)(*param_1 + 0x748) + 400,*param_1,local_res8);
    lVar4 = *param_1;
  }
  if (*(longlong *)(lVar4 + 0x680) != 0) {
    pwVar2 = _guard_xfg_dispatch_icall_nop(L"&UGFxAmmoBar::UpdateCachedAmmoCounts",L"::");
    pwVar5 = pwVar6;
    while (pwVar3 = pwVar2, pwVar3 != (wchar_t *)0x0) {
      pwVar2 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar5 = pwVar3;
    }
    FName::FName(&local_res8,pwVar5 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove
              (*(longlong *)(*param_1 + 0x680) + 400,*param_1,local_res8);
    lVar4 = *param_1;
  }
  if (*(longlong *)(lVar4 + 0x690) != 0) {
    pwVar2 = _guard_xfg_dispatch_icall_nop(L"&UGFxAmmoBar::OnWeaponChanged",L"::");
    pwVar5 = pwVar6;
    while (pwVar3 = pwVar2, pwVar3 != (wchar_t *)0x0) {
      pwVar2 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar5 = pwVar3;
    }
    FName::FName(&local_res8,pwVar5 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove
              (*(longlong *)(*param_1 + 0x690) + 0x1050,*param_1,local_res8);
    lVar4 = *param_1;
    pwVar5 = pwVar6;
    if (*(longlong *)(lVar4 + 0x690) != 0) {
      pwVar5 = *(wchar_t **)(*(longlong *)(lVar4 + 0x690) + 0x10e0);
    }
    if (pwVar5 != (wchar_t *)0x0) {
      pwVar3 = _guard_xfg_dispatch_icall_nop(L"&UGFxAmmoBar::OnResurrected",L"::");
      pwVar2 = pwVar6;
      while (pwVar1 = pwVar3, pwVar1 != (wchar_t *)0x0) {
        pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
        pwVar2 = pwVar1;
      }
      FName::FName(&local_res8,pwVar2 + 2,1);
      TMulticastScriptDelegate<FWeakObjectPtr>::Remove(pwVar5 + 0x8d8,*param_1,local_res8);
      lVar4 = *param_1;
    }
  }
  if (*(longlong *)(lVar4 + 0x668) != 0) {
    pwVar5 = _guard_xfg_dispatch_icall_nop(L"&UGFxAmmoBar::OnInputDeviceChanged",L"::");
    while (pwVar2 = pwVar5, pwVar2 != (wchar_t *)0x0) {
      pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar6 = pwVar2;
    }
    FName::FName(&local_res8,pwVar6 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove
              (*(longlong *)(*param_1 + 0x668) + 0x5f8,*param_1,local_res8);
    FUN_140483870(*(longlong *)(*param_1 + 0x668) + 0x7c8);
  }
  return;
}



// FUNCTION 140ed5250 FUN_140ed5250 body=406 status=ok
// SIG undefined FUN_140ed5250(void)

void FUN_140ed5250(longlong *param_1)

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
                         (L"&UGFxCurrencyWidget::OnDisplayCurrencyWidgetOnHUD",L"::");
      pwVar3 = (wchar_t *)0x0;
      while (pwVar2 = pwVar6, pwVar2 != (wchar_t *)0x0) {
        pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar3 = pwVar2;
      }
      FName::FName(&local_res8,pwVar3 + 2,1);
      TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar4 + 0x7e0,*param_1,local_res8);
    }
  }
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
      pwVar6 = _guard_xfg_dispatch_icall_nop(L"&UGFxCurrencyWidget::OnPauseStateChanged",L"::");
      pwVar3 = (wchar_t *)0x0;
      while (pwVar2 = pwVar6, pwVar2 != (wchar_t *)0x0) {
        pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar3 = pwVar2;
      }
      FName::FName(&local_res8,pwVar3 + 2,1);
      TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar4 + 0x8d0,*param_1,local_res8);
    }
  }
  return;
}



// FUNCTION 140ed53f0 FUN_140ed53f0 body=344 status=ok
// SIG undefined FUN_140ed53f0(void)

void FUN_140ed53f0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int iVar4;
  longlong *local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  longlong local_18 [2];
  
  plVar3 = *(longlong **)(*param_1 + 0x6c0);
  if ((plVar3 != (longlong *)0x0) && (*(longlong *)(*param_1 + 0x760) != 0)) {
    (**(code **)(*plVar3 + 0x280))();
    local_20 = 10;
    local_28 = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    FGenericPlatformString::Memcpy(local_28,L"container",0x14);
    local_38 = (longlong *)0x0;
    local_30 = 0;
    lVar1 = FUN_140ecbdf0(*(undefined8 *)(*param_1 + 0x6c0),&local_28,0,6,&local_38);
    plVar3 = local_38;
    for (iVar4 = (int)local_30; iVar4 != 0; iVar4 = iVar4 + -1) {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 2;
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free(local_38);
    }
    if (local_28 != 0) {
      FMemory::Free();
    }
    if (lVar1 != 0) {
      uVar2 = FUN_1413dced0(*(undefined8 *)(*param_1 + 0x760),local_18);
      FString::operator=(*param_1 + 0x788,uVar2);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
      if (1 < *(int *)(*param_1 + 0x790)) {
        FUN_142088cf0(lVar1,*param_1 + 0x788);
      }
    }
  }
  return;
}



// FUNCTION 140ed5550 FUN_140ed5550 body=1586 status=ok
// SIG undefined FUN_140ed5550(void)

void FUN_140ed5550(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  wchar_t *pwVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  undefined8 *puVar12;
  uint uVar13;
  int *piVar14;
  int *piVar15;
  longlong *plVar16;
  longlong *plVar17;
  wchar_t *pwVar18;
  undefined8 local_res8;
  undefined4 local_res10;
  undefined4 uStackX_14;
  int local_48;
  int local_44;
  longlong local_40;
  
  local_res10 = (undefined4)param_1[1];
  uStackX_14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(&local_res8);
  FUN_14172a400(&local_res8);
  cVar6 = FWeakObjectPtr::IsValid(&local_res10);
  pwVar18 = (wchar_t *)0x0;
  if (cVar6 == '\0') {
LAB_140ed55dc:
    bVar4 = false;
  }
  else {
    lVar8 = FWeakObjectPtr::Get(&local_res10);
    iVar1 = *(int *)(lVar8 + 0xc);
    pwVar10 = pwVar18;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar13 = iVar1 >> 0x1f & 0xffff;
      uVar7 = iVar1 + uVar13;
      pwVar10 = (wchar_t *)
                (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                (longlong)(int)((uVar7 & 0xffff) - uVar13) * 0x18);
    }
    if ((*(uint *)(pwVar10 + 4) & 0x30000000) != 0) goto LAB_140ed55dc;
    bVar4 = true;
  }
  if (!bVar4) {
    return;
  }
  if (*(longlong *)(*param_1 + 0x650) == 0) {
    return;
  }
  lVar8 = *(longlong *)(*(longlong *)(*param_1 + 0x650) + 0x600);
  if (lVar8 == 0) {
    return;
  }
  lVar9 = FUN_1413f82e0();
  if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
      lVar9 + 0x88)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (!bVar4) {
    return;
  }
  pwVar10 = (wchar_t *)(**(code **)(*(longlong *)(lVar8 + 0xd98) + 0x98))();
  if (pwVar10 != (wchar_t *)0x0) {
    lVar9 = AGFreezeCharacterCue::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(pwVar10 + 8) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar10 + 8) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_140ed56ac;
  }
  pwVar10 = pwVar18;
LAB_140ed56ac:
  *(wchar_t **)(*param_1 + 0x658) = pwVar10;
  if (*(longlong *)(*param_1 + 0x658) != 0) {
    pwVar11 = _guard_xfg_dispatch_icall_nop(L"&UGFxBossBar::OnHealthTypeDepeleted",L"::");
    pwVar10 = pwVar18;
    while (pwVar5 = pwVar11, pwVar5 != (wchar_t *)0x0) {
      pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
      pwVar10 = pwVar5;
    }
    FName::FName(&local_res10,pwVar10 + 2,1);
    lVar9 = *param_1;
    lVar3 = CONCAT44(uStackX_14,local_res10);
    lVar2 = *(longlong *)(lVar9 + 0x658);
    plVar17 = (longlong *)(lVar2 + 0x8d8);
    FWeakObjectPtr::operator=(&local_48,0);
    local_40 = 0;
    FWeakObjectPtr::operator=(&local_48,lVar9);
    local_res8 = 0;
    local_40 = lVar3;
    if ((lVar3 != 0) && (lVar9 = FWeakObjectPtr::Get(&local_48), lVar9 != 0)) {
      UObject::FindFunction(lVar9,local_40);
    }
    piVar14 = (int *)*plVar17;
    iVar1 = *(int *)(lVar2 + 0x8e0);
    for (piVar15 = piVar14; piVar15 != piVar14 + (longlong)iVar1 * 4; piVar15 = piVar15 + 4) {
      if (((*piVar15 == local_48) && (piVar15[1] == local_44)) ||
         ((cVar6 = FWeakObjectPtr::IsValid(piVar15), cVar6 == '\0' &&
          (cVar6 = FWeakObjectPtr::IsValid(&local_48), cVar6 == '\0')))) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if ((bVar4) && (*(longlong *)(piVar15 + 2) == local_40)) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if (bVar4) {
        if ((int)((longlong)piVar15 - (longlong)piVar14 >> 4) != -1) goto LAB_140ed5813;
        break;
      }
    }
    iVar1 = *(int *)(lVar2 + 0x8e0);
    *(int *)(lVar2 + 0x8e0) = iVar1 + 1;
    if (*(int *)(lVar2 + 0x8e4) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar17,iVar1);
    }
    piVar14 = (int *)((longlong)iVar1 * 0x10 + *plVar17);
    *piVar14 = local_48;
    piVar14[1] = local_44;
    *(longlong *)(piVar14 + 2) = local_40;
LAB_140ed5813:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar17);
    pwVar11 = _guard_xfg_dispatch_icall_nop(L"&UGFxBossBar::OnHealthTypeAdded",L"::");
    pwVar10 = pwVar18;
    while (pwVar5 = pwVar11, pwVar5 != (wchar_t *)0x0) {
      pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
      pwVar10 = pwVar5;
    }
    FName::FName(&local_res10,pwVar10 + 2,1);
    lVar9 = *param_1;
    lVar3 = CONCAT44(uStackX_14,local_res10);
    lVar2 = *(longlong *)(lVar9 + 0x658);
    plVar17 = (longlong *)(lVar2 + 0x8c8);
    FWeakObjectPtr::operator=(&local_48,0);
    local_40 = 0;
    FWeakObjectPtr::operator=(&local_48,lVar9);
    local_res8 = 0;
    local_40 = lVar3;
    if ((lVar3 != 0) && (lVar9 = FWeakObjectPtr::Get(&local_48), lVar9 != 0)) {
      UObject::FindFunction(lVar9,local_40);
    }
    piVar14 = (int *)*plVar17;
    iVar1 = *(int *)(lVar2 + 0x8d0);
    for (piVar15 = piVar14; piVar15 != piVar14 + (longlong)iVar1 * 4; piVar15 = piVar15 + 4) {
      if (((*piVar15 == local_48) && (piVar15[1] == local_44)) ||
         ((cVar6 = FWeakObjectPtr::IsValid(piVar15), cVar6 == '\0' &&
          (cVar6 = FWeakObjectPtr::IsValid(&local_48), cVar6 == '\0')))) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if ((bVar4) && (*(longlong *)(piVar15 + 2) == local_40)) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if (bVar4) {
        if ((int)((longlong)piVar15 - (longlong)piVar14 >> 4) != -1) goto LAB_140ed596b;
        break;
      }
    }
    iVar1 = *(int *)(lVar2 + 0x8d0);
    *(int *)(lVar2 + 0x8d0) = iVar1 + 1;
    if (*(int *)(lVar2 + 0x8d4) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar17,iVar1);
    }
    piVar14 = (int *)((longlong)iVar1 * 0x10 + *plVar17);
    *piVar14 = local_48;
    piVar14[1] = local_44;
    *(longlong *)(piVar14 + 2) = local_40;
LAB_140ed596b:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar17);
    lVar9 = *param_1;
    lVar2 = *(longlong *)(lVar9 + 0x658);
    plVar16 = (longlong *)(lVar2 + 0x268);
    plVar17 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar17 != (longlong *)0x0) {
      *plVar17 = (longlong)&PTR_FUN_143f4d290;
      FWeakObjectPtr::operator=(plVar17 + 1,lVar9);
      plVar17[2] = (longlong)&LAB_140eee290;
      lVar9 = FDelegateHandle::GenerateNewID();
      plVar17[4] = lVar9;
      *plVar17 = (longlong)&PTR_FUN_143f4d2d8;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar16,1);
      (**(code **)(*plVar17 + 0x20))(plVar17,&local_res8);
      iVar1 = *(int *)(lVar2 + 0x270);
      *(int *)(lVar2 + 0x270) = iVar1 + 1;
      if (*(int *)(lVar2 + 0x274) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar16,iVar1);
      }
      puVar12 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar16);
      *puVar12 = plVar17;
      *(undefined4 *)(puVar12 + 1) = 3;
    }
  }
  pwVar10 = _guard_xfg_dispatch_icall_nop(L"&UGFxBossBar::OnBossDestroy",L"::");
  while (pwVar11 = pwVar10, pwVar11 != (wchar_t *)0x0) {
    pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar11 + 1,L"::");
    pwVar18 = pwVar11;
  }
  FName::FName(&local_res10,pwVar18 + 2,1);
  lVar2 = CONCAT44(uStackX_14,local_res10);
  lVar9 = *param_1;
  plVar17 = (longlong *)(lVar8 + 0x290);
  FWeakObjectPtr::operator=(&local_48,0);
  local_40 = 0;
  FWeakObjectPtr::operator=(&local_48,lVar9);
  local_res8 = 0;
  local_40 = lVar2;
  if ((lVar2 != 0) && (lVar9 = FWeakObjectPtr::Get(&local_48), lVar9 != 0)) {
    UObject::FindFunction(lVar9,local_40);
  }
  piVar14 = (int *)*plVar17;
  iVar1 = *(int *)(lVar8 + 0x298);
  piVar15 = piVar14;
  do {
    if (piVar15 == piVar14 + (longlong)iVar1 * 4) {
LAB_140ed5b1e:
      iVar1 = *(int *)(lVar8 + 0x298);
      *(int *)(lVar8 + 0x298) = iVar1 + 1;
      if (*(int *)(lVar8 + 0x29c) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar17,iVar1);
      }
      piVar14 = (int *)((longlong)iVar1 * 0x10 + *plVar17);
      *piVar14 = local_48;
      piVar14[1] = local_44;
      *(longlong *)(piVar14 + 2) = local_40;
LAB_140ed5b54:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar17);
      return;
    }
    if (((*piVar15 == local_48) && (piVar15[1] == local_44)) ||
       ((cVar6 = FWeakObjectPtr::IsValid(piVar15), cVar6 == '\0' &&
        (cVar6 = FWeakObjectPtr::IsValid(&local_48), cVar6 == '\0')))) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if ((bVar4) && (*(longlong *)(piVar15 + 2) == local_40)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      if ((int)((longlong)piVar15 - (longlong)piVar14 >> 4) != -1) goto LAB_140ed5b54;
      goto LAB_140ed5b1e;
    }
    piVar15 = piVar15 + 4;
  } while( true );
}



// FUNCTION 140ed5b90 FUN_140ed5b90 body=184 status=ok
// SIG undefined FUN_140ed5b90(void)

void FUN_140ed5b90(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  bool bVar6;
  
  if (*(char *)(*param_1 + 0x6b8) == '\x01') {
    *(undefined1 *)(*param_1 + 0x6b8) = 2;
    lVar3 = *param_1;
    plVar4 = *(longlong **)(lVar3 + 0x660);
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
          lVar3 = *(longlong *)(lVar3 + 0x658);
          if (lVar3 != 0) {
            FUN_14203dd70(lVar3,0);
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
  }
  return;
}



// FUNCTION 140ed5c50 FUN_140ed5c50 body=179 status=ok
// SIG undefined FUN_140ed5c50(void)

void FUN_140ed5c50(undefined8 *param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  undefined8 local_res8;
  
  lVar3 = FUN_1416f8720(*(undefined4 *)(param_1 + 1));
  if (lVar3 != 0) {
    lVar3 = FUN_1416f8720(*(undefined4 *)(param_1 + 1));
    FUN_140483870(lVar3 + 0xf28,*param_1);
  }
  lVar3 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0xc));
  if (lVar3 != 0) {
    pwVar4 = _guard_xfg_dispatch_icall_nop(L"&UGFxCurrencyWidget::OnCurrencyQuantityChanged",L"::");
    pwVar2 = (wchar_t *)0x0;
    while (pwVar1 = pwVar4, pwVar1 != (wchar_t *)0x0) {
      pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar2 = pwVar1;
    }
    FName::FName(&local_res8,pwVar2 + 2,1);
    lVar3 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0xc));
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar3 + 0x318,*param_1,local_res8);
  }
  return;
}



// FUNCTION 140ed5d10 FUN_140ed5d10 body=185 status=ok
// SIG undefined FUN_140ed5d10(void)

void FUN_140ed5d10(longlong *param_1)

{
  char cVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 uVar6;
  undefined1 local_res8 [8];
  
  if (*(longlong *)(*param_1 + 0x6f8) != 0) {
    cVar1 = FUN_14307ede0();
    if (cVar1 != '\0') {
      uVar6 = 1;
      goto LAB_140ed5d37;
    }
  }
  uVar6 = 0;
LAB_140ed5d37:
  lVar5 = *param_1;
  puVar2 = (undefined1 *)(lVar5 + 0x64f);
  if (local_res8 != puVar2) {
    *puVar2 = uVar6;
    *(undefined1 *)(lVar5 + 0x650) = 1;
  }
  cVar1 = FWeakObjectPtr::IsValid(*param_1 + 0x5e0);
  if (cVar1 != '\0') {
    plVar3 = (longlong *)FWeakObjectPtr::Get(*param_1 + 0x5e0);
    uVar4 = FUN_1414b0910();
    lVar5 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar4);
    if (lVar5 != 0) {
      cVar1 = FUN_1407c3030(lVar5 + 0x178);
      lVar5 = *param_1;
      puVar2 = (undefined1 *)(lVar5 + 0x655);
      if (local_res8 != puVar2) {
        *puVar2 = cVar1 == '\0';
        *(undefined1 *)(lVar5 + 0x656) = 1;
      }
    }
  }
  return;
}



// FUNCTION 140ed5dd0 FUN_140ed5dd0 body=424 status=ok
// SIG undefined FUN_140ed5dd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ed5dd0(longlong *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
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
  uVar2 = (**(code **)(*(longlong *)*param_1 + 0x148))();
  uVar2 = FUN_142dcdcd0(uVar2);
  FWeakObjectPtr::operator=(*param_1 + 0x720,uVar2);
  plVar3 = (longlong *)FWeakObjectPtr::Get(*param_1 + 0x5d8);
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
      uVar2 = FUN_142e035e0();
      uVar2 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar2);
      FWeakObjectPtr::operator=(*param_1 + 0x728,uVar2);
    }
  }
  lVar4 = *param_1;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[1] = lVar4;
    *puVar5 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = &LAB_140ee0830;
  uVar2 = FUN_1420849a0(lVar4,local_68,local_b8);
  FUN_14208c260(lVar4,uVar2);
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



// FUNCTION 140ed5f80 FUN_140ed5f80 body=410 status=ok
// SIG undefined FUN_140ed5f80(void)

void FUN_140ed5f80(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined1 uVar9;
  longlong *plVar10;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(&local_res10);
    iVar8 = *(int *)(lVar4 + 0xc);
    if (iVar8 < (int)DAT_1469e91c4) {
      uVar5 = iVar8 >> 0x1f & 0xffff;
      uVar3 = iVar8 + uVar5;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) & 0x30000000) == 0) {
      lVar4 = *param_1;
      AcquireSRWLockShared((PSRWLOCK)(lVar4 + 0x1a8));
      LOCK();
      *(int *)(lVar4 + 0x1b4) = *(int *)(lVar4 + 0x1b4) + 1;
      UNLOCK();
      lVar6 = *param_1;
      if (*(longlong *)(lVar6 + 0x228) != 0) {
        FUN_142088ee0(*(longlong *)(lVar6 + 0x228),(int)param_1[2] + 1);
        lVar6 = *param_1;
      }
      iVar8 = 0;
      if (0 < *(int *)(lVar6 + 0x1a0)) {
        lVar7 = 0;
        do {
          if ((lVar7 < 0) || (*(int *)(lVar6 + 0x1a0) <= iVar8)) {
            plVar10 = (longlong *)0x0;
          }
          else {
            plVar10 = *(longlong **)(*(longlong *)(lVar6 + 0x198) + lVar7 * 8);
          }
          if (plVar10 != (longlong *)0x0) {
            lVar1 = param_1[2];
            (**(code **)(*plVar10 + 0x278))
                      (plVar10,CONCAT71((int7)((ulonglong)lVar6 >> 8),iVar8 <= (int)lVar1));
            lVar6 = *param_1;
            if ((-1 < lVar7) && (iVar8 < *(int *)(lVar6 + 0x270))) {
              if ((int)lVar1 < iVar8) {
                uVar9 = 1;
              }
              else {
                uVar9 = *(undefined1 *)((longlong)param_1 + 0x14);
              }
              FUN_141087630(plVar10,*(undefined1 *)(*(longlong *)(lVar6 + 0x268) + 4 + lVar7 * 8),
                            uVar9,*(undefined4 *)(lVar6 + 0x244));
              lVar6 = *param_1;
            }
          }
          iVar8 = iVar8 + 1;
          lVar7 = lVar7 + 1;
        } while (iVar8 < *(int *)(lVar6 + 0x1a0));
      }
      ReleaseSRWLockShared((PSRWLOCK)(lVar4 + 0x1a8));
      LOCK();
      *(int *)(lVar4 + 0x1b4) = *(int *)(lVar4 + 0x1b4) + -1;
      UNLOCK();
    }
  }
  return;
}



// FUNCTION 140ed6120 FUN_140ed6120 body=1063 status=ok
// SIG undefined FUN_140ed6120(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ed6120(longlong *param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  longlong *plVar14;
  wchar_t *pwVar15;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined1 *local_d8 [2];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  undefined1 local_88 [16];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  lVar8 = FUN_1416f8720((int)param_1[1]);
  pwVar15 = (wchar_t *)0x0;
  if (lVar8 != 0) {
    uVar9 = FUN_1416f8720((int)param_1[1]);
    FUN_142227350(uVar9,0,1);
    *(undefined8 *)(*param_1 + 0x718) = 0;
  }
  lVar8 = FWeakObjectPtr::Get(*param_1 + 0x5d8);
  if (lVar8 != 0) {
    lVar10 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (*(longlong *)(lVar8 + 0x910) != 0)) {
      FUN_140483870(*(longlong *)(lVar8 + 0x910) + 0x218,*param_1);
    }
  }
  uVar9 = FWeakObjectPtr::Get(*param_1 + 0x5e0);
  lVar8 = *param_1;
  FUN_142ecb050(lVar8,0,uVar9);
  FWeakObjectPtr::operator=(&local_f8,uVar9);
  FWeakObjectPtr::operator=(&local_e8,0);
  uVar6 = local_e4;
  uVar5 = local_e8;
  uVar4 = uStack_f4;
  uVar3 = local_f8;
  local_a8 = (longlong *)0x0;
  local_98 = 0;
  puVar11 = (undefined8 *)FUN_140438ef0(0x20,local_c8);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &PTR_FUN_144605c80;
    puVar11[1] = lVar8;
    *(undefined4 *)(puVar11 + 2) = uVar5;
    *(undefined4 *)((longlong)puVar11 + 0x14) = uVar6;
    *(undefined4 *)(puVar11 + 3) = uVar3;
    *(undefined4 *)((longlong)puVar11 + 0x1c) = uVar4;
  }
  local_d8[0] = &LAB_140ee0920;
  uVar9 = FUN_1420849a0(lVar8,local_88,local_d8);
  FUN_14208c260(lVar8,uVar9);
  if (local_48 != 0) {
    plVar14 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar14 = local_58;
    }
    if (plVar14 != (longlong *)0x0) {
      (**(code **)(*plVar14 + 0x10))(plVar14,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_98 != 0) {
    plVar14 = local_c8;
    if (local_a8 != (longlong *)0x0) {
      plVar14 = local_a8;
    }
    if (plVar14 != (longlong *)0x0) {
      (**(code **)(*plVar14 + 0x10))(plVar14,0);
    }
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  lVar8 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0xc));
  if (lVar8 != 0) {
    lVar8 = FUN_1416f8720((int)param_1[2]);
    if (lVar8 != 0) {
      pwVar12 = _guard_xfg_dispatch_icall_nop(L"&UGFxCrosshairWidget::OnZoomed",L"::");
      pwVar13 = pwVar15;
      while (pwVar2 = pwVar12, pwVar2 != (wchar_t *)0x0) {
        pwVar12 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar13 = pwVar2;
      }
      FName::FName(&local_f8,pwVar13 + 2,1);
      lVar8 = FUN_1416f8720((int)param_1[2]);
      TMulticastScriptDelegate<FWeakObjectPtr>::Remove
                (lVar8 + 0x250,*param_1,CONCAT44(uStack_f4,local_f8));
      pwVar12 = _guard_xfg_dispatch_icall_nop(L"&UGFxCrosshairWidget::OnNotZoomed",L"::");
      pwVar13 = pwVar15;
      while (pwVar2 = pwVar12, pwVar2 != (wchar_t *)0x0) {
        pwVar12 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar13 = pwVar2;
      }
      FName::FName(&local_f8,pwVar13 + 2,1);
      lVar8 = FUN_1416f8720((int)param_1[2]);
      TMulticastScriptDelegate<FWeakObjectPtr>::Remove
                (lVar8 + 0x280,*param_1,CONCAT44(uStack_f4,local_f8));
      *(undefined8 *)(*param_1 + 0x710) = 0;
    }
    pwVar13 = _guard_xfg_dispatch_icall_nop(L"&UGFxCrosshairWidget::OnTargetLockChange",L"::");
    while (pwVar12 = pwVar13, pwVar12 != (wchar_t *)0x0) {
      pwVar13 = _guard_xfg_dispatch_icall_nop(pwVar12 + 1,L"::");
      pwVar15 = pwVar12;
    }
    FName::FName(&local_f8,pwVar15 + 2,1);
    lVar8 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0xc));
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove
              (lVar8 + 0x560,*param_1,CONCAT44(uStack_f4,local_f8));
  }
  lVar10 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0xc));
  lVar8 = *param_1;
  if (lVar10 == *(longlong *)(lVar8 + 0x6f8)) {
    FWeakObjectPtr::operator=(&local_e8,0);
    local_e0 = 0;
    puVar11 = (undefined8 *)FName::FName(&local_f8,L"OnSwitchedWeaponMode",1);
    FWeakObjectPtr::operator=(&local_e8,lVar8);
    local_e0 = *puVar11;
    if (*(longlong *)(lVar8 + 0x6f8) != 0) {
      local_f8 = local_e8;
      uStack_f4 = local_e4;
      local_f0 = local_e0;
      FUN_1430940a0(*(longlong *)(lVar8 + 0x6f8),&local_f8);
      *(undefined8 *)(lVar8 + 0x6f8) = 0;
    }
    cVar7 = FUN_142045f70();
    if (cVar7 == '\0') {
      *(undefined8 *)(lVar8 + 0x6f8) = 0;
      FUN_140f11890(lVar8);
      FUN_140f10900(lVar8);
      FUN_140f08b10(lVar8);
    }
  }
  return;
}



// FUNCTION 140ed6550 FUN_140ed6550 body=267 status=ok
// SIG undefined FUN_140ed6550(void)

void FUN_140ed6550(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 local_res8 [8];
  
  lVar3 = (**(code **)(*(longlong *)*param_1 + 0x148))();
  if (lVar3 != 0) {
    lVar3 = UWorld::GetGameState<APVPGameState>(lVar3);
    if (lVar3 != 0) {
      lVar5 = *param_1;
      plVar1 = (longlong *)(lVar3 + 0x698);
      plVar4 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar4 != (longlong *)0x0) {
        *plVar4 = (longlong)&PTR_FUN_144605fe0;
        FWeakObjectPtr::operator=(plVar4 + 1,lVar5);
        plVar4[2] = (longlong)FUN_140f05fd0;
        lVar5 = FDelegateHandle::GenerateNewID();
        plVar4[4] = lVar5;
        *plVar4 = (longlong)&PTR_FUN_144606028;
      }
      uVar7 = 0;
      if (plVar4 != (longlong *)0x0) {
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
        puVar6 = (undefined8 *)(**(code **)(*plVar4 + 0x20))(plVar4,local_res8);
        iVar2 = *(int *)(lVar3 + 0x6a0);
        uVar7 = *puVar6;
        *(int *)(lVar3 + 0x6a0) = iVar2 + 1;
        if (*(int *)(lVar3 + 0x6a4) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
        }
        puVar6 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
        *puVar6 = plVar4;
        *(undefined4 *)(puVar6 + 1) = 3;
      }
      *(undefined8 *)(*param_1 + 0x718) = uVar7;
    }
  }
  return;
}



// FUNCTION 140ed6660 FUN_140ed6660 body=354 status=ok
// SIG undefined FUN_140ed6660(void)

void FUN_140ed6660(longlong *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
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
      cVar2 = FWeakObjectPtr::IsValid(*param_1 + 0x5d8);
      if (cVar2 == '\0') {
        uVar6 = (**(code **)(*(longlong *)*param_1 + 0x148))();
      }
      else {
        plVar5 = (longlong *)FWeakObjectPtr::Get((longlong *)*param_1 + 0xbb);
        uVar6 = (**(code **)(*plVar5 + 0x148))(plVar5);
      }
      lVar4 = FUN_140c12480(uVar6);
      if ((lVar4 != 0) && (lVar4 = UNiagaraSystem::GetEffectType(lVar4), lVar4 != 0)) {
        TBaseMulticastDelegate<void>::Remove(lVar4 + 0x68,*(undefined8 *)(*param_1 + 0x6d0));
        TBaseMulticastDelegate<void>::Remove(lVar4 + 0x80,*(undefined8 *)(*param_1 + 0x6d8));
      }
      if (*(longlong *)(*param_1 + 0x710) != 0) {
        FUN_142eb3740();
        FUN_1407665e0(*(longlong *)(*param_1 + 0x710) + 0x38);
        FUN_1407665e0(*(longlong *)(*param_1 + 0x710) + 0x28);
        *(undefined8 *)(*param_1 + 0x710) = 0;
      }
    }
  }
  return;
}



// FUNCTION 140ed67d0 FUN_140ed67d0 body=1549 status=ok
// SIG undefined FUN_140ed67d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ed67d0(longlong *param_1)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  DWORD DVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  wchar_t *pwVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined2 *puVar14;
  undefined4 uVar15;
  undefined1 auStack_1f8 [32];
  undefined4 local_1d8;
  undefined4 local_1d4;
  longlong local_1d0;
  longlong local_1c8 [2];
  longlong local_1b8;
  longlong local_1b0;
  longlong *local_1a8;
  undefined1 local_1a0 [8];
  longlong *local_198;
  code *local_188 [2];
  longlong local_178 [4];
  longlong *local_158;
  int local_148;
  undefined1 local_138 [8];
  longlong *local_130;
  undefined1 *local_118 [2];
  longlong local_108 [4];
  longlong *local_e8;
  int local_d8;
  undefined1 *local_c8 [2];
  longlong local_b8 [4];
  longlong *local_98;
  int local_88;
  undefined1 local_78 [16];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  if (*param_1 == 0) {
    cVar3 = '\0';
  }
  else {
    cVar3 = *(char *)(*param_1 + 0x30);
  }
  cVar2 = *(char *)(param_1[1] + 0x678);
  if (cVar3 != cVar2) {
    if (cVar2 == '\x02') {
      return;
    }
    if (cVar3 == '\x02') {
      return;
    }
  }
  cVar2 = FWeakObjectPtr::IsValid(param_1[1] + 0x5d0);
  if (cVar2 == '\0') {
    return;
  }
  uVar6 = FWeakObjectPtr::Get(param_1[1] + 0x5d0);
  cVar2 = FUN_142ebe1f0(uVar6,param_1[1]);
  if (cVar2 == '\0') {
    return;
  }
  lVar7 = FUN_140eccc40(param_1[1]);
  if (((lVar7 != 0) && (*(char *)(lVar7 + 0xaf0) != '\0')) &&
     (*(char *)(param_1[1] + 0x678) == '\x02')) {
    return;
  }
  (**(code **)(*(longlong *)param_1[1] + 0x4a8))
            ((longlong *)param_1[1],&local_1b0,L"echoCommWidget");
  if (local_1b0 != 0) {
    if (cVar3 == '\0') {
      pwVar11 = L"echoComm";
    }
    else if (cVar3 == '\x01') {
      pwVar11 = L"echoLog";
    }
    else {
      if (cVar3 != '\x03') goto LAB_140ed68d9;
      pwVar11 = L"eridianWritingLog";
    }
    FUN_14203e030(local_1b0,pwVar11);
  }
LAB_140ed68d9:
  if (local_1a8 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_1a8 + 1;
    lVar7 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_1a8)(local_1a8);
      LOCK();
      piVar1 = (int *)((longlong)local_1a8 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_1a8 + 8))(local_1a8,1);
      }
    }
  }
  *(undefined1 *)(param_1[1] + 0x718) = 1;
  *(undefined1 *)(param_1[1] + 0x71a) = 0;
  if (param_1[2] == 0) {
    return;
  }
  cVar3 = *(char *)(param_1[1] + 0x6b8);
  if ((cVar3 != '\0') && (cVar3 != '\x03')) {
    return;
  }
  *(undefined1 *)(param_1[1] + 0x6b8) = 1;
  lVar7 = 0;
  if (*(longlong *)(param_1[2] + 0x40) != 0) {
    plVar10 = (longlong *)param_1[1];
    if ((int)plVar10[0xce] == 0) {
      puVar14 = &DAT_143f3eda8;
    }
    else {
      puVar14 = (undefined2 *)plVar10[0xcd];
    }
    uVar6 = (**(code **)(*plVar10 + 0x4a8))(plVar10,local_1a0,puVar14);
    FUN_142ede260(param_1[1] + 0x6e0,uVar6);
    if (local_198 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_198 + 1;
      lVar12 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_198)(local_198);
        LOCK();
        piVar1 = (int *)((longlong)local_198 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_198 + 8))(local_198,1);
        }
      }
    }
    if ((*(longlong *)(param_1[1] + 0x6e8) != 0) &&
       (lVar12 = *(longlong *)(param_1[1] + 0x6f0), lVar12 != 0)) {
      piVar1 = (int *)(lVar12 + 8);
      LOCK();
      iVar4 = *piVar1;
      if (iVar4 == 0) {
        *piVar1 = 0;
        iVar4 = 0;
      }
      UNLOCK();
      if (0 < iVar4) {
        uVar6 = (**(code **)(*(longlong *)(*(longlong *)(param_1[2] + 0x40) + 0x30) + 0x10))
                          (*(longlong *)(param_1[2] + 0x40) + 0x30,local_138);
        UMistDebugEntityScreen::InspectEntity(param_1[1] + 0x6e0,uVar6,1,0);
        if (local_130 != (longlong *)0x0) {
          LOCK();
          plVar10 = local_130 + 1;
          lVar12 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*local_130)(local_130);
            LOCK();
            piVar1 = (int *)((longlong)local_130 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_130 + 8))(local_130,1);
            }
          }
        }
      }
    }
  }
  (**(code **)(*(longlong *)param_1[1] + 0x578))((longlong *)param_1[1],0);
  lVar12 = param_1[2];
  if (*(longlong *)(lVar12 + 0x48) == 0) goto LAB_140ed6ce5;
  if (*(longlong *)(param_1[1] + 0x6f8) != 0) {
    FUN_142f06500(*(longlong *)(param_1[1] + 0x6f8),0);
    *(undefined8 *)(param_1[1] + 0x6f8) = 0;
    lVar12 = param_1[2];
  }
  local_1d4 = 0xffffffff;
  if (*(longlong *)(lVar12 + 0x48) != 0) {
    FUN_14170c210(&local_1d4);
  }
  lVar12 = param_1[1];
  local_1d8 = 0xffffffff;
  uVar13 = 0xffffffff;
  if (*(longlong *)(lVar12 + 0x640) != 0) {
    FUN_14170c210(&local_1d8);
    lVar12 = param_1[1];
    uVar13 = local_1d8;
  }
  uVar15 = local_1d4;
  local_1d4 = 0xffffffff;
  local_1d8 = 0xffffffff;
  local_e8 = (longlong *)0x0;
  local_d8 = 0;
  puVar8 = (undefined8 *)FUN_140438ef0(0x18,local_108);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &PTR_FUN_144605c38;
    puVar8[1] = lVar12;
    *(undefined4 *)(puVar8 + 2) = uVar13;
    uVar13 = 0xffffffff;
    *(undefined4 *)((longlong)puVar8 + 0x14) = uVar15;
    uVar15 = 0xffffffff;
  }
  local_118[0] = &LAB_140ee0ca0;
  FUN_1420849a0(param_1[1],local_78,local_118);
  if (local_d8 != 0) {
    plVar10 = local_108;
    if (local_e8 != (longlong *)0x0) {
      plVar10 = local_e8;
    }
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x10))(plVar10,0);
    }
  }
  if (local_e8 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_1416f8340(uVar15);
  FUN_1416f8340(uVar13);
  FUN_1416f8340(local_1d8);
  FUN_1416f8340(local_1d4);
  lVar12 = DAT_1468722f0;
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar5 = GetCurrentThreadId();
    lVar9 = 4;
    if (DVar5 == DAT_1468c21c0) goto LAB_140ed6c22;
  }
  else {
LAB_140ed6c22:
    lVar9 = lVar7;
  }
  if (*(int *)(lVar12 + lVar9) == 0) {
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_188,local_78);
    if (local_148 != 0) {
      plVar10 = local_178;
      if (local_158 != (longlong *)0x0) {
        plVar10 = local_158;
      }
      if (plVar10 != (longlong *)0x0) {
        lVar7 = (**(code **)(*plVar10 + 8))();
      }
    }
    (*local_188[0])(lVar7);
    if (local_148 != 0) {
      plVar10 = local_178;
      if (local_158 != (longlong *)0x0) {
        plVar10 = local_158;
      }
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x10))(plVar10,0);
      }
    }
    if (local_158 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  else {
    FUN_14208c940(param_1[1]);
  }
  if (local_38 != 0) {
    plVar10 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar10 = local_48;
    }
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x10))(plVar10,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
LAB_140ed6ce5:
  FString::operator=(param_1[1] + 0x700,param_1 + 3);
  local_1d0 = param_1[2];
  lVar7 = param_1[1];
  FString::FString(local_1c8,param_1 + 5);
  local_98 = (longlong *)0x0;
  local_88 = 0;
  local_1b8 = lVar7;
  puVar8 = (undefined8 *)FUN_140438ef0(0x28,local_b8);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &PTR_FUN_144605e90;
    puVar8[1] = local_1d0;
    FString::FString(puVar8 + 2,local_1c8);
    puVar8[4] = local_1b8;
  }
  local_c8[0] = &LAB_140ee08e0;
  FUN_14208c260(param_1[1],local_c8);
  if (local_88 != 0) {
    plVar10 = local_b8;
    if (local_98 != (longlong *)0x0) {
      plVar10 = local_98;
    }
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x10))(plVar10,0);
    }
  }
  if (local_98 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_1c8[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140ed6de0 FUN_140ed6de0 body=185 status=ok
// SIG undefined FUN_140ed6de0(void)

undefined8 FUN_140ed6de0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if (*(char *)(param_2 + 0xb0) == '\0') {
    plVar5 = *(longlong **)*param_1;
    plVar1 = plVar5 + (int)((longlong *)*param_1)[1];
    for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
      if (*plVar5 != 0) {
        lVar2 = FUN_142dfdfe0();
        lVar6 = *plVar5;
        for (lVar4 = lVar6; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
          if (lVar4 == lVar2) goto LAB_140ed6e40;
        }
      }
      lVar6 = 0;
LAB_140ed6e40:
      if (*(longlong *)(param_2 + 0xa8) != 0) {
        lVar3 = FUN_142dfdfe0();
        lVar4 = *(longlong *)(param_2 + 0xa8);
        for (lVar2 = lVar4; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
          if (lVar2 == lVar3) goto LAB_140ed6e70;
        }
      }
      lVar4 = 0;
LAB_140ed6e70:
      if (lVar6 == lVar4) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 140ed6ea0 FUN_140ed6ea0 body=153 status=ok
// SIG undefined FUN_140ed6ea0(void)

void FUN_140ed6ea0(undefined8 *param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  char cVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  undefined8 local_res8;
  
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 1);
  if (cVar3 != '\0') {
    pwVar4 = _guard_xfg_dispatch_icall_nop(L"&UGFxAmmoBar::UpdateCachedAmmoCounts",L"::");
    pwVar2 = (wchar_t *)0x0;
    while (pwVar1 = pwVar4, pwVar1 != (wchar_t *)0x0) {
      pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar2 = pwVar1;
    }
    FName::FName(&local_res8,pwVar2 + 2,1);
    lVar5 = FWeakObjectPtr::Get(param_1 + 1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar5 + 400,*param_1,local_res8);
  }
  return;
}



// FUNCTION 140ed6f40 FUN_140ed6f40 body=293 status=ok
// SIG undefined FUN_140ed6f40(void)

void FUN_140ed6f40(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong *local_28;
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10;
  
  lVar1 = *param_1;
  FUN_140ee40c0(lVar1);
  if ((1 < *(int *)(lVar1 + 0x250)) && (*(longlong **)(lVar1 + 0x240) != (longlong *)0x0)) {
    (**(code **)(**(longlong **)(lVar1 + 0x240) + 0x280))();
    FUN_142f06340(*(undefined8 *)(lVar1 + 0x240),lVar1 + 0x228);
    local_10 = 0xe;
    local_18 = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    FGenericPlatformString::Memcpy(local_18,L"moodContainer",0x1c);
    local_28 = (longlong *)0x0;
    local_20 = 0;
    lVar2 = FUN_140ecbdf0(*(undefined8 *)(lVar1 + 0x240),&local_18,0,6,&local_28);
    plVar3 = local_28;
    for (iVar4 = (int)local_20; iVar4 != 0; iVar4 = iVar4 + -1) {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 2;
    }
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
    if (local_18 != 0) {
      FMemory::Free();
    }
    if (lVar2 != 0) {
      FUN_142088cf0(lVar2,lVar1 + 0x248);
    }
  }
  return;
}



// FUNCTION 140ed7070 FUN_140ed7070 body=452 status=ok
// SIG undefined FUN_140ed7070(void)

void FUN_140ed7070(longlong *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  AKRESULT AVar4;
  long lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  longlong local_68;
  undefined8 local_60;
  WriteBytesMem local_58 [12];
  undefined1 local_4c [4];
  undefined8 local_48;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar2 != '\0') {
    lVar6 = FWeakObjectPtr::Get(&local_res10);
    lVar7 = 0;
    iVar1 = *(int *)(lVar6 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar9 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar9;
      lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar9) * 0x18;
    }
    if ((*(uint *)(lVar7 + 8) & 0x30000000) == 0) {
      lVar7 = FWeakObjectPtr::Get(param_1 + 1);
      lVar7 = *(longlong *)(lVar7 + 0x668);
      if (lVar7 != 0) {
        if (DAT_146b33f38 == 0) {
          FUN_142d7ebe0();
        }
        if (*(longlong *)(DAT_146b33f38 + 0x90) != 0) {
          puVar8 = (undefined8 *)FUN_1411e4840();
          local_68 = 0;
          local_60 = 0;
          FUN_142ff7ce0(lVar7,*puVar8,&local_68);
          lVar6 = local_68;
          if (0 < (int)local_60) {
            FUN_142fde510(local_58);
            cVar2 = FUN_142ffa4f0(lVar7,lVar6,local_58);
            if (cVar2 != '\0') {
              lVar7 = FWeakObjectPtr::Get(param_1 + 1);
              lVar7 = *(longlong *)(lVar7 + 0x650);
              if (lVar7 != 0) {
                *(undefined4 *)(lVar7 + 0x244) = *(undefined4 *)(*param_1 + 0x644);
                *(undefined4 *)(lVar7 + 0x248) = *(undefined4 *)(*param_1 + 0x648);
              }
              AVar4 = AK::MemoryMgr::SetMonitoring((long)local_58,SUB81(lVar7,0));
              lVar5 = AK::WriteBytesMem::Count(local_58);
              FUN_140eefd00(*param_1,local_4c,local_48,lVar5,AVar4);
            }
          }
          if (local_68 != 0) {
            FMemory::Free();
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140ed7240 FUN_140ed7240 body=134 status=ok
// SIG undefined FUN_140ed7240(void)

void FUN_140ed7240(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  lVar3 = FUN_1416f8720(*(undefined4 *)(param_1 + 1));
  if (lVar3 != 0) {
    lVar3 = FUN_1416f8720(*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(lVar3 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar5;
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
    }
    else {
      lVar3 = 0;
    }
    if ((*(uint *)(lVar3 + 8) & 0x30000000) == 0) {
      uVar4 = FUN_1416f8720(*(undefined4 *)(param_1 + 1));
      FUN_140cda660(uVar4,*param_1);
      FUN_140f0b5d0(*param_1,0);
      return;
    }
  }
  return;
}



// FUNCTION 140ed72d0 FUN_140ed72d0 body=2165 status=ok
// SIG undefined FUN_140ed72d0(void)

void FUN_140ed72d0(longlong *param_1)

{
  int *piVar1;
  void *_Src;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  wchar_t *pwVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  int iVar15;
  void **ppvVar16;
  int *piVar17;
  undefined8 uVar18;
  longlong lVar19;
  longlong *plVar20;
  bool bVar21;
  ulonglong local_res8;
  longlong local_res10;
  undefined8 local_58;
  longlong local_50;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  
  local_res8 = local_res8 & 0xffffffff00000000;
  lVar10 = FWeakObjectPtr::Get(*param_1 + 0x5d8);
  bVar5 = true;
  bVar4 = false;
  bVar3 = true;
  if (lVar10 != 0) {
    lVar11 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (bVar2 = bVar3,
       *(longlong *)
        (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8)
       != lVar11 + 0x88)) {
      bVar2 = false;
    }
    if (bVar2) {
      pwVar12 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnPlayerStateAdded",L"::");
      pwVar7 = (wchar_t *)0x0;
      while (pwVar6 = pwVar12, pwVar6 != (wchar_t *)0x0) {
        pwVar12 = _guard_xfg_dispatch_icall_nop(pwVar6 + 1,L"::");
        pwVar7 = pwVar6;
      }
      FName::FName(&local_res10,pwVar7 + 2,1);
      lVar19 = local_res10;
      lVar11 = *param_1;
      plVar13 = (longlong *)(lVar10 + 0xb68);
      FWeakObjectPtr::operator=(&local_58,0);
      local_50 = 0;
      FWeakObjectPtr::operator=(&local_58,lVar11);
      local_50 = lVar19;
      local_res8 = 0;
      if ((lVar19 != 0) && (lVar11 = FWeakObjectPtr::Get(&local_58), lVar11 != 0)) {
        UObject::FindFunction(lVar11,local_50);
      }
      piVar1 = (int *)*plVar13;
      iVar15 = *(int *)(lVar10 + 0xb70);
      for (piVar17 = piVar1; piVar17 != piVar1 + (longlong)iVar15 * 4; piVar17 = piVar17 + 4) {
        bVar2 = bVar3;
        if (((*piVar17 != (int)local_58) ||
            (local_58._4_4_ = (int)((ulonglong)local_58 >> 0x20),
            bVar21 = piVar17[1] != local_58._4_4_, bVar21)) &&
           ((cVar8 = FWeakObjectPtr::IsValid(piVar17), cVar8 != '\0' ||
            (cVar8 = FWeakObjectPtr::IsValid(&local_58), cVar8 != '\0')))) {
          bVar2 = false;
        }
        if ((!bVar2) || (bVar2 = bVar3, *(longlong *)(piVar17 + 2) != local_50)) {
          bVar2 = false;
        }
        if (bVar2) {
          if ((int)((longlong)piVar17 - (longlong)piVar1 >> 4) != -1) goto LAB_140ed749b;
          break;
        }
      }
      iVar15 = *(int *)(lVar10 + 0xb70);
      lVar11 = (longlong)iVar15;
      *(int *)(lVar10 + 0xb70) = iVar15 + 1;
      if (*(int *)(lVar10 + 0xb74) < iVar15 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar13,iVar15);
      }
      lVar19 = *plVar13;
      *(int *)(lVar19 + lVar11 * 0x10) = (int)local_58;
      *(int *)(lVar19 + 4 + lVar11 * 0x10) = local_58._4_4_;
      *(longlong *)(lVar19 + 8 + lVar11 * 0x10) = local_50;
LAB_140ed749b:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar13);
      pwVar12 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnPlayerStateRemoved",L"::");
      pwVar7 = (wchar_t *)0x0;
      while (pwVar6 = pwVar12, pwVar6 != (wchar_t *)0x0) {
        pwVar12 = _guard_xfg_dispatch_icall_nop(pwVar6 + 1,L"::");
        pwVar7 = pwVar6;
      }
      FName::FName(&local_res10,pwVar7 + 2,1);
      lVar19 = local_res10;
      lVar11 = *param_1;
      plVar13 = (longlong *)(lVar10 + 0xb78);
      FWeakObjectPtr::operator=(&local_58,0);
      local_50 = 0;
      FWeakObjectPtr::operator=(&local_58,lVar11);
      local_50 = lVar19;
      local_res8 = 0;
      if ((lVar19 != 0) && (lVar11 = FWeakObjectPtr::Get(&local_58), lVar11 != 0)) {
        UObject::FindFunction(lVar11,local_50);
      }
      piVar1 = (int *)*plVar13;
      iVar15 = *(int *)(lVar10 + 0xb80);
      for (piVar17 = piVar1; piVar17 != piVar1 + (longlong)iVar15 * 4; piVar17 = piVar17 + 4) {
        bVar2 = bVar3;
        if (((*piVar17 != (int)local_58) ||
            (local_58._4_4_ = (int)((ulonglong)local_58 >> 0x20),
            bVar21 = piVar17[1] != local_58._4_4_, bVar21)) &&
           ((cVar8 = FWeakObjectPtr::IsValid(piVar17), cVar8 != '\0' ||
            (cVar8 = FWeakObjectPtr::IsValid(&local_58), cVar8 != '\0')))) {
          bVar2 = false;
        }
        if ((!bVar2) || (bVar2 = bVar3, *(longlong *)(piVar17 + 2) != local_50)) {
          bVar2 = false;
        }
        if (bVar2) {
          if ((int)((longlong)piVar17 - (longlong)piVar1 >> 4) != -1) goto LAB_140ed75eb;
          break;
        }
      }
      iVar15 = *(int *)(lVar10 + 0xb80);
      lVar11 = (longlong)iVar15;
      *(int *)(lVar10 + 0xb80) = iVar15 + 1;
      if (*(int *)(lVar10 + 0xb84) < iVar15 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar13,iVar15);
      }
      lVar19 = *plVar13;
      *(int *)(lVar19 + lVar11 * 0x10) = (int)local_58;
      *(int *)(lVar19 + 4 + lVar11 * 0x10) = local_58._4_4_;
      *(longlong *)(lVar19 + 8 + lVar11 * 0x10) = local_50;
LAB_140ed75eb:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar13);
      pwVar12 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::NotifyPrimaryCharacterChanged",L"::");
      pwVar7 = (wchar_t *)0x0;
      while (pwVar6 = pwVar12, pwVar6 != (wchar_t *)0x0) {
        pwVar12 = _guard_xfg_dispatch_icall_nop(pwVar6 + 1,L"::");
        pwVar7 = pwVar6;
      }
      FName::FName(&local_res10,pwVar7 + 2);
      lVar11 = *param_1;
      plVar13 = (longlong *)(lVar10 + 0x8c0);
      FWeakObjectPtr::operator=(&local_58,0);
      local_50 = 0;
      FWeakObjectPtr::operator=(&local_58,lVar11);
      local_50 = local_res10;
      local_res8 = 0;
      if ((local_res10 != 0) && (lVar11 = FWeakObjectPtr::Get(&local_58), lVar11 != 0)) {
        UObject::FindFunction(lVar11,local_50);
      }
      piVar1 = (int *)*plVar13;
      iVar15 = *(int *)(lVar10 + 0x8c8);
      for (piVar17 = piVar1; piVar17 != piVar1 + (longlong)iVar15 * 4; piVar17 = piVar17 + 4) {
        bVar2 = bVar3;
        if (((*piVar17 != (int)local_58) ||
            (local_58._4_4_ = (int)((ulonglong)local_58 >> 0x20),
            bVar21 = piVar17[1] != local_58._4_4_, bVar21)) &&
           ((cVar8 = FWeakObjectPtr::IsValid(piVar17), cVar8 != '\0' ||
            (cVar8 = FWeakObjectPtr::IsValid(&local_58), cVar8 != '\0')))) {
          bVar2 = false;
        }
        if ((!bVar2) || (bVar2 = bVar3, *(longlong *)(piVar17 + 2) != local_50)) {
          bVar2 = false;
        }
        if (bVar2) {
          if ((int)((longlong)piVar17 - (longlong)piVar1 >> 4) != -1) goto LAB_140ed773b;
          break;
        }
      }
      iVar15 = *(int *)(lVar10 + 0x8c8);
      lVar11 = (longlong)iVar15;
      *(int *)(lVar10 + 0x8c8) = iVar15 + 1;
      if (*(int *)(lVar10 + 0x8cc) < iVar15 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar13,iVar15);
      }
      lVar19 = *plVar13;
      *(int *)(lVar19 + lVar11 * 0x10) = (int)local_58;
      *(int *)(lVar19 + 4 + lVar11 * 0x10) = local_58._4_4_;
      *(longlong *)(lVar19 + 8 + lVar11 * 0x10) = local_50;
LAB_140ed773b:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar13);
      lVar10 = FUN_1422312c0(lVar10);
      if (lVar10 != 0) {
        lVar11 = FUN_14141f270();
        if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
          bVar3 = false;
        }
        if (bVar3) {
          lVar11 = *param_1;
          plVar20 = (longlong *)(lVar10 + 0xa68);
          plVar13 = (longlong *)FMemory::Realloc(0,0x30);
          if (plVar13 != (longlong *)0x0) {
            *plVar13 = (longlong)&PTR_FUN_143f4d170;
            FWeakObjectPtr::operator=(plVar13 + 1,lVar11);
            plVar13[2] = (longlong)FUN_140efd0d0;
            lVar11 = FDelegateHandle::GenerateNewID();
            plVar13[4] = lVar11;
            *plVar13 = (longlong)&PTR_FUN_143f4d1b8;
          }
          uVar18 = 0;
          if (plVar13 != (longlong *)0x0) {
            FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar20,1);
            puVar14 = (undefined8 *)(**(code **)(*plVar13 + 0x20))(plVar13,&local_res8);
            iVar15 = *(int *)(lVar10 + 0xa70);
            uVar18 = *puVar14;
            *(int *)(lVar10 + 0xa70) = iVar15 + 1;
            if (*(int *)(lVar10 + 0xa74) < iVar15 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar20,iVar15);
            }
            puVar14 = (undefined8 *)((longlong)iVar15 * 0x10 + *plVar20);
            *puVar14 = plVar13;
            *(undefined4 *)(puVar14 + 1) = 3;
          }
          *(undefined8 *)(*param_1 + 0x6d0) = uVar18;
        }
      }
    }
  }
  lVar10 = FUN_140eccd20(*param_1);
  if (lVar10 != 0) {
    plVar13 = (longlong *)(lVar10 + 0x2c50);
    plVar20 = (longlong *)FMemory::Realloc(0);
    if (plVar20 != (longlong *)0x0) {
      *plVar20 = (longlong)&PTR_FUN_143f4d290;
      FWeakObjectPtr::operator=(plVar20 + 1);
      plVar20[2] = (longlong)FUN_140efce20;
      lVar11 = FDelegateHandle::GenerateNewID();
      plVar20[4] = lVar11;
      *plVar20 = (longlong)&PTR_FUN_143f4d2d8;
    }
    uVar18 = 0;
    if (plVar20 != (longlong *)0x0) {
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar13,1);
      puVar14 = (undefined8 *)(**(code **)(*plVar20 + 0x20))(plVar20);
      iVar15 = *(int *)(lVar10 + 0x2c58);
      uVar18 = *puVar14;
      iVar9 = iVar15 + 1;
      *(int *)(lVar10 + 0x2c58) = iVar9;
      if (*(int *)(lVar10 + 0x2c5c) < iVar9) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar13);
      }
      puVar14 = (undefined8 *)((longlong)iVar15 * 0x10 + *plVar13);
      *puVar14 = plVar20;
      *(undefined4 *)(puVar14 + 1) = 3;
    }
    *(undefined8 *)(*param_1 + 0x6d8) = uVar18;
    lVar11 = FUN_1409a7ca0(lVar10);
    if (lVar11 != 0) {
      *(undefined1 *)(*param_1 + 0x6c9) = 1;
      *(undefined1 *)(*param_1 + 0x6e0) = 1;
      lVar11 = *(longlong *)(*param_1 + 0x688);
      if ((lVar11 != 0) &&
         (puVar14 = (undefined8 *)(lVar11 + 0x228), (undefined8 *)*puVar14 != &DAT_144604e88)) {
        iVar15 = 0;
        *(undefined4 *)(lVar11 + 0x230) = 0;
        if (*(int *)(lVar11 + 0x234) != 4) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar14,4);
          iVar15 = *(int *)(lVar11 + 0x230);
        }
        *(int *)(lVar11 + 0x230) = iVar15 + 4;
        if (*(int *)(lVar11 + 0x234) < iVar15 + 4) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar14);
        }
        *(undefined8 *)*puVar14 = 0x7400650050;
      }
    }
    lVar11 = FUN_1409aa9f0(lVar10);
    if (lVar11 != 0) {
      *(undefined1 *)(*param_1 + 0x6e0) = 0;
      *(undefined1 *)(*param_1 + 0x6c9) = 1;
      if (*(longlong *)(*param_1 + 0x688) != 0) {
        FString::operator=(*(longlong *)(*param_1 + 0x688) + 0x228,lVar11 + 0x90);
      }
    }
    lVar11 = FUN_1409a8cf0(lVar10);
    if (lVar11 != 0) {
      *(undefined1 *)(*param_1 + 0x6e0) = 0;
      *(undefined1 *)(*param_1 + 0x6c9) = 1;
      if (*(longlong *)(*param_1 + 0x688) != 0) {
        if (*(int *)(lVar11 + 0x60) < 2) {
          local_58 = (void *)0x0;
          local_50 = 4;
          bVar5 = false;
          bVar4 = true;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
          FGenericPlatformString::Memcpy(local_58,&DAT_144604e88,8);
          ppvVar16 = (void **)&local_58;
        }
        else {
          local_40 = *(int *)(lVar11 + 0x60);
          lVar19 = (longlong)local_40;
          _Src = *(void **)(lVar11 + 0x58);
          local_48 = (void *)0x0;
          if (local_40 == 0) {
            ppvVar16 = &local_48;
            local_3c = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,local_40,0);
            _guard_xfg_dispatch_icall_nop(local_48,_Src,lVar19 * 2);
            ppvVar16 = &local_48;
          }
        }
        FString::operator=(*(longlong *)(*param_1 + 0x688) + 0x228,ppvVar16);
        if ((bVar4) && (local_58 != (void *)0x0)) {
          FMemory::Free();
        }
        if ((bVar5) && (local_48 != (void *)0x0)) {
          FMemory::Free();
        }
      }
    }
    lVar11 = FUN_1414002f0(lVar10);
    lVar10 = *param_1;
    if ((lVar11 == 0) || (*(longlong *)(lVar10 + 0x688) == 0)) {
      if (*(char *)(lVar10 + 0x6e0) == '\0') {
        FUN_140f0a9b0(lVar10,0);
      }
      else {
        *(undefined1 *)(*(longlong *)(lVar10 + 0x688) + 0x216) = 1;
      }
    }
    else {
      FUN_140f0a9b0(lVar10,lVar11);
      *(undefined1 *)(*(longlong *)(lVar10 + 0x688) + 0x216) = 0;
    }
  }
  return;
}



// FUNCTION 140ed7b50 FUN_140ed7b50 body=456 status=ok
// SIG undefined FUN_140ed7b50(void)

void FUN_140ed7b50(longlong *param_1)

{
  float *pfVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  longlong local_18 [2];
  
  lVar5 = FWeakObjectPtr::Get(*param_1 + 0x5c8);
  if (lVar5 != 0) {
    lVar6 = FUN_14142a560();
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
      FUN_140cc8c60(lVar5,*param_1);
    }
  }
  plVar2 = (longlong *)*param_1;
  if (plVar2[0xec] == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140ed7d11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x580))(plVar2,1);
    return;
  }
  uVar9 = FUN_1409a7d90(plVar2[0xec]);
  *(undefined4 *)(*param_1 + 0x76c) = uVar9;
  if (*(longlong *)(*param_1 + 0x640) != 0) {
    cVar4 = FOpenXRHMD::IsStereoEnabled(*(undefined8 *)(*param_1 + 0x760));
    if (cVar4 == '\0') {
      pfVar1 = (float *)(*param_1 + 0x76c);
      if ((1.0 < *pfVar1 || *pfVar1 == 1.0) ||
         (0 < *(int *)(*(longlong *)(*param_1 + 0x760) + 0x200))) {
        local_18[1] = 6;
        local_18[0] = 0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
        uVar8 = 0xc;
        pwVar7 = L"ready";
      }
      else {
        local_18[1] = 0xb;
        local_18[0] = 0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
        uVar8 = 0x16;
        pwVar7 = L"onCooldown";
      }
    }
    else {
      local_18[1] = 0x15;
      local_18[0] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      uVar8 = 0x2a;
      pwVar7 = L"activatedNoAnimation";
    }
    FGenericPlatformString::Memcpy(local_18[0],pwVar7,uVar8);
    FUN_142088cf0(*(undefined8 *)(*param_1 + 0x640),local_18);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  param_1 = (longlong *)*param_1;
  if (*(char *)(param_1[0xec] + 0xa1) == '\x03') {
                    /* WARNING: Could not recover jumptable at 0x000140ed7cea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x578))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140ed7cfb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x580))(param_1,0);
  return;
}



// FUNCTION 140ed7d20 FUN_140ed7d20 body=231 status=ok
// SIG undefined FUN_140ed7d20(void)

void FUN_140ed7d20(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 local_res8;
  undefined4 local_resc;
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18 [8];
  undefined1 local_10 [8];
  
  FWeakObjectPtr::operator=(&local_28,0);
  FWeakObjectPtr::operator=(&local_20,0);
  FWeakObjectPtr::operator=(local_18,0);
  FWeakObjectPtr::operator=(local_10,0);
  FWeakObjectPtr::operator=(&local_res8,0);
  local_28 = local_res8;
  local_24 = local_resc;
  FWeakObjectPtr::operator=(local_18,*(undefined8 *)(*param_1 + 0xf28));
  FWeakObjectPtr::operator=(local_10,*(undefined8 *)(*param_1 + 0xf38));
  FWeakObjectPtr::operator=(&local_res8,0);
  lVar3 = *param_1;
  local_20 = local_res8;
  local_1c = local_resc;
  lVar1 = *(longlong *)(lVar3 + 0xf30);
  local_38 = lVar1;
  if (lVar1 == 0) {
    local_30 = 0;
  }
  else {
    uVar2 = UBlendableInterface::GetPrivateStaticClass();
    local_30 = UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar2);
    lVar3 = *param_1;
  }
  FUN_142ecfd10(lVar3,&local_38,&local_28);
  return;
}



// FUNCTION 140ed7e10 FUN_140ed7e10 body=379 status=ok
// SIG undefined FUN_140ed7e10(void)

void FUN_140ed7e10(longlong *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  undefined8 local_18;
  undefined8 local_10;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
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
      plVar5 = (longlong *)*param_1;
      if (((char)param_1[2] == (char)plVar5[0xcf]) ||
         (((char)plVar5[0xcf] != '\x02' && ((char)param_1[2] != '\x02')))) {
        *(undefined1 *)(plVar5 + 0xe3) = 0;
        plVar5 = (longlong *)*param_1;
      }
      if ((((char)plVar5[0xe3] == '\0') && (*(char *)((longlong)plVar5 + 0x71a) != '\0')) &&
         (plVar5[0xe2] != 0)) {
        FUN_142ecd390(plVar5[0xe2]);
        plVar5 = (longlong *)*param_1;
      }
      if ((((char)plVar5[0xe3] == '\0') && (*(char *)((longlong)plVar5 + 0x719) == '\0')) &&
         ((char)plVar5[0xd7] != '\0')) {
        (**(code **)(*plVar5 + 0x580))(plVar5,0);
        *(undefined1 *)(*param_1 + 0x6b8) = 0;
        plVar5 = (longlong *)*param_1;
        if (plVar5[0xe2] != 0) {
          FUN_142eb1580();
          plVar5 = (longlong *)*param_1;
        }
        local_18 = 0;
        local_10 = 0;
        lVar4 = *plVar5;
        puVar6 = (undefined8 *)FName::FName(local_res8,PTR_s_Echo_Portrait_Down_14629dc20,1);
        (**(code **)(lVar4 + 0x4e8))(*param_1,*puVar6,&local_18);
      }
    }
  }
  return;
}



// FUNCTION 140ed7f90 FUN_140ed7f90 body=643 status=ok
// SIG undefined FUN_140ed7f90(void)

void FUN_140ed7f90(longlong *param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  longlong *plVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  undefined8 uVar8;
  wchar_t *pwVar9;
  undefined8 local_res8;
  
  plVar3 = (longlong *)FWeakObjectPtr::Get(*param_1 + 0x5d8);
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  lVar4 = FUN_14145f370();
  if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return;
  }
  FUN_1407665e0(plVar3 + 0x167,*param_1);
  lVar4 = plVar3[0x132];
  pwVar9 = (wchar_t *)0x0;
  if (lVar4 == 0) goto LAB_140ed8173;
  pwVar5 = (wchar_t *)(**(code **)(*(longlong *)(lVar4 + 0xd98) + 0x98))();
  if (pwVar5 == (wchar_t *)0x0) {
LAB_140ed8065:
    pwVar5 = pwVar9;
  }
  else {
    lVar6 = AGFreezeCharacterCue::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(pwVar5 + 8) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar5 + 8) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140ed8065;
  }
  *(wchar_t **)(*param_1 + 0x658) = pwVar5;
  lVar6 = *param_1;
  if (*(longlong *)(lVar6 + 0x658) != 0) {
    pwVar7 = _guard_xfg_dispatch_icall_nop(L"&UGFxBossBar::OnHealthTypeDepeleted",L"::");
    pwVar5 = pwVar9;
    while (pwVar2 = pwVar7, pwVar2 != (wchar_t *)0x0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar5 = pwVar2;
    }
    FName::FName(&local_res8,pwVar5 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove
              (*(longlong *)(*param_1 + 0x658) + 0x8d8,*param_1,local_res8);
    pwVar7 = _guard_xfg_dispatch_icall_nop(L"&UGFxBossBar::OnHealthTypeAdded",L"::");
    pwVar5 = pwVar9;
    while (pwVar2 = pwVar7, pwVar2 != (wchar_t *)0x0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar5 = pwVar2;
    }
    FName::FName(&local_res8,pwVar5 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove
              (*(longlong *)(*param_1 + 0x658) + 0x8c8,*param_1,local_res8);
    FUN_140483870(*(longlong *)(*param_1 + 0x658) + 0x268);
    lVar6 = *param_1;
  }
  FUN_1407665e0(lVar4 + 0x290,lVar6);
LAB_140ed8173:
  lVar4 = (**(code **)(*plVar3 + 0x148))(plVar3);
  if (lVar4 != 0) {
    uVar8 = UWorld::GetGameState<APVPGameState>(lVar4);
    *(undefined8 *)(*param_1 + 0x650) = uVar8;
    if (*(longlong *)(*param_1 + 0x650) != 0) {
      pwVar5 = _guard_xfg_dispatch_icall_nop(L"&UGFxBossBar::HandleEventOnBossBar",L"::");
      while (pwVar7 = pwVar5, pwVar7 != (wchar_t *)0x0) {
        pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar7 + 1,L"::");
        pwVar9 = pwVar7;
      }
      FName::FName(&local_res8,pwVar9 + 2,1);
      TMulticastScriptDelegate<FWeakObjectPtr>::Remove
                (*(longlong *)(*param_1 + 0x650) + 0x5b8,*param_1,local_res8);
    }
  }
  return;
}



// FUNCTION 140ed8220 FUN_140ed8220 body=288 status=ok
// SIG undefined FUN_140ed8220(void)

void FUN_140ed8220(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong local_28;
  undefined8 local_20;
  
  uVar5 = 0;
  local_28 = 0;
  local_20 = 0;
  FUN_1411f4910(&local_28,*(undefined8 *)*param_1,0);
  lVar8 = (longlong)(int)local_20 * 0x110 + local_28;
  for (lVar7 = local_28; lVar7 != lVar8; lVar7 = lVar7 + 0x110) {
    puVar2 = (undefined8 *)param_1[1];
    uVar4 = uVar5;
    if (*(int *)(puVar2 + 8) != 0) {
      plVar6 = (longlong *)puVar2[6];
      if ((longlong *)puVar2[6] == (longlong *)0x0) {
        plVar6 = puVar2 + 2;
      }
      if (plVar6 != (longlong *)0x0) {
        uVar4 = (**(code **)(*plVar6 + 8))();
      }
    }
    cVar3 = (*(code *)*puVar2)(uVar4,lVar7);
    if (cVar3 != '\0') {
      iVar1 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
        TArray<FTTLMissionBriefingParamRow,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
      }
      FUN_140e9a4f0((longlong)iVar1 * 0x110 + *param_2,lVar7);
    }
  }
  puVar2 = (undefined8 *)param_1[2];
  if (*(int *)(puVar2 + 8) != 0) {
    plVar6 = (longlong *)puVar2[6];
    if ((longlong *)puVar2[6] == (longlong *)0x0) {
      plVar6 = puVar2 + 2;
    }
    if (plVar6 != (longlong *)0x0) {
      uVar5 = (**(code **)(*plVar6 + 8))();
    }
  }
  (*(code *)*puVar2)(uVar5,param_2);
  FUN_140e9bfd0(&local_28);
  return;
}



// FUNCTION 140ed8340 FUN_140ed8340 body=112 status=ok
// SIG undefined FUN_140ed8340(void)

void FUN_140ed8340(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FWeakObjectPtr::Get(*param_1 + 0x5c8);
  if (lVar2 != 0) {
    lVar3 = FUN_14142a560();
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
      FUN_1407665e0(lVar2 + 0x798,*param_1);
    }
  }
  return;
}



// FUNCTION 140ed83b0 FUN_140ed83b0 body=160 status=ok
// SIG undefined FUN_140ed83b0(void)

void FUN_140ed83b0(longlong *param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  undefined8 local_res8;
  
  if (*(longlong *)(*param_1 + 0x748) != 0) {
    pwVar3 = _guard_xfg_dispatch_icall_nop(L"&UGFxAmmoBar::WeaponSecondaryModeAmmoChanged",L"::");
    pwVar2 = (wchar_t *)0x0;
    while (pwVar1 = pwVar3, pwVar1 != (wchar_t *)0x0) {
      pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar2 = pwVar1;
    }
    FName::FName(&local_res8,pwVar2 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove
              (*(longlong *)(*param_1 + 0x748) + 400,*param_1,local_res8);
    *(undefined8 *)(*param_1 + 0x748) = 0;
  }
  return;
}



// FUNCTION 140ed8450 FUN_140ed8450 body=194 status=ok
// SIG undefined FUN_140ed8450(void)

void FUN_140ed8450(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  lVar1 = FUN_1416f8720((int)param_1[1]);
  if (lVar1 != 0) {
    uVar2 = FUN_1416f8720((int)param_1[1]);
    FUN_142f05c70(uVar2,0);
    lVar1 = *param_1;
    local_28 = 0;
    local_18 = 0;
    puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_48);
    if (puVar3 != (undefined8 *)0x0) {
      puVar3[1] = lVar1;
      *puVar3 = &PTR_FUN_143f77b70;
    }
    local_58[0] = &LAB_140ee1010;
    uVar2 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0xc));
    uVar4 = FUN_1416f8720((int)param_1[1]);
    uVar2 = FUN_140ecde40(uVar4,uVar2,local_58,0,0);
    *(undefined8 *)(*param_1 + 0x6f8) = uVar2;
  }
  return;
}



// FUNCTION 140ed8520 FUN_140ed8520 body=267 status=ok
// SIG undefined FUN_140ed8520(void)

void FUN_140ed8520(longlong *param_1)

{
  int iVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong local_res8;
  ulonglong local_res10;
  
  local_res10 = param_1[1];
  FUN_141729b50(&local_res8);
  FUN_14172a400(&local_res8);
  cVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar3 != '\0') {
    lVar6 = FWeakObjectPtr::Get(&local_res10);
    iVar1 = *(int *)(lVar6 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar8 = iVar1 >> 0x1f & 0xffff;
      uVar4 = iVar1 + uVar8;
      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar8) * 0x18;
    }
    else {
      lVar6 = 0;
    }
    if ((*(uint *)(lVar6 + 8) & 0x30000000) == 0) {
      lVar6 = *(longlong *)(*param_1 + 0x38);
      if ((lVar6 != 0) && (uVar2 = *(ulonglong *)(*param_1 + 0x1d0), uVar2 != 0)) {
        lVar9 = lVar6 + 0x340;
        if ((char)param_1[2] != '\0') {
          local_res10 = uVar2;
          uVar7 = FTimerManager::FindTimer(lVar9,&local_res10,&local_res8);
          FUN_142880730(lVar9,uVar7,local_res8 & 0xffffffff);
          return;
        }
        local_res8 = uVar2;
        uVar5 = FTimerManager::FindTimerInList(lVar9,lVar6 + 0x360,&local_res8);
        FUN_142880ca0(lVar9,uVar5);
      }
    }
  }
  return;
}



// FUNCTION 140ed8630 FUN_140ed8630 body=421 status=ok
// SIG undefined FUN_140ed8630(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ed8630(longlong *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
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
  lVar5 = param_1[1];
  uVar1 = *(undefined4 *)(lVar5 + 0x63c);
  uVar2 = *(undefined8 *)(*param_1 + 0x90);
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_FUN_143f4d170;
    FWeakObjectPtr::operator=(plVar3 + 1,lVar5);
    plVar3[2] = (longlong)FUN_140ee5570;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[4] = lVar4;
    *plVar3 = (longlong)&PTR_FUN_143f4d1b8;
  }
  local_98 = 0;
  local_90 = 0;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x30))(plVar3,&local_98);
  }
  FWeakObjectPtr::operator=(local_88,0);
  local_a0 = 0xbf800000;
  local_a8 = 0;
  local_80 = 0;
  local_48 = (longlong *)0x0;
  local_38 = 0;
  local_78 = AK::MemoryMgr::StartProfileThreadUsage;
  FUN_142880850(uVar2,lVar5 + 0x8a0,&local_98,uVar1);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_98);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,0);
    lVar5 = FMemory::Realloc(plVar3,0,0);
    if (lVar5 != 0) {
      FMemory::Free(lVar5);
    }
  }
  return;
}



// FUNCTION 140ed87e0 FUN_140ed87e0 body=616 status=ok
// SIG undefined FUN_140ed87e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ed87e0(longlong *param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined1 auStack_148 [32];
  undefined1 local_128;
  undefined4 local_120;
  undefined1 local_118 [8];
  longlong local_110;
  undefined1 *local_108 [2];
  longlong local_f8 [4];
  longlong *local_d8;
  int local_c8;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined1 local_98 [16];
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  local_110 = param_1[1];
  FUN_141729b50(local_118);
  FUN_14172a400(local_118);
  cVar4 = FWeakObjectPtr::IsValid(&local_110);
  if (cVar4 != '\0') {
    lVar6 = FWeakObjectPtr::Get(&local_110);
    lVar7 = 0;
    iVar1 = *(int *)(lVar6 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar9 = iVar1 >> 0x1f & 0xffff;
      uVar5 = iVar1 + uVar9;
      lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
              (longlong)(int)((uVar5 & 0xffff) - uVar9) * 0x18;
    }
    if (((*(uint *)(lVar7 + 8) & 0x30000000) == 0) &&
       (lVar7 = (**(code **)(*(longlong *)*param_1 + 0x148))(), lVar7 != 0)) {
      lVar6 = *param_1;
      lVar3 = param_1[1];
      uVar2 = *(undefined4 *)((longlong)param_1 + 0xc);
      local_110 = 0;
      local_d8 = (longlong *)0x0;
      local_c8 = 0;
      puVar8 = (undefined8 *)FUN_140438ef0(0x18,local_f8);
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = &PTR_FUN_1444f8920;
        puVar8[1] = lVar6;
        *(int *)(puVar8 + 2) = (int)lVar3;
        *(undefined4 *)((longlong)puVar8 + 0x14) = uVar2;
      }
      local_108[0] = &LAB_140ee0bb0;
      if (*(longlong *)(lVar7 + 400) == 0) {
        uVar10 = *(undefined8 *)(lVar7 + 0x3f8);
      }
      else {
        uVar10 = *(undefined8 *)(*(longlong *)(lVar7 + 400) + 0x90);
      }
      local_b8 = 0;
      local_b0 = 0;
      uVar2 = *(undefined4 *)(*param_1 + 0x640);
      FWeakObjectPtr::operator=(local_a8,0);
      local_a0 = 0;
      TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_98,local_108);
      local_120 = 0xbf800000;
      local_128 = 0;
      FUN_142880850(uVar10,&local_110,&local_b8,uVar2);
      if (local_58 != 0) {
        plVar11 = local_88;
        if (local_68 != (longlong *)0x0) {
          plVar11 = local_68;
        }
        if (plVar11 != (longlong *)0x0) {
          (**(code **)(*plVar11 + 0x10))(plVar11,0);
        }
      }
      if (local_68 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_b8);
      if (local_c8 != 0) {
        plVar11 = local_f8;
        if (local_d8 != (longlong *)0x0) {
          plVar11 = local_d8;
        }
        if (plVar11 != (longlong *)0x0) {
          (**(code **)(*plVar11 + 0x10))(plVar11,0);
        }
      }
      if (local_d8 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140ed8a50 FUN_140ed8a50 body=344 status=ok
// SIG undefined FUN_140ed8a50(void)

void FUN_140ed8a50(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  cVar2 = FUN_142ebd920(*param_1);
  if (cVar2 != '\0') {
    lVar3 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0xc));
    if (lVar3 != 0) {
      lVar4 = FUN_1430228e0();
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
        lVar4 = *(longlong *)(*param_1 + 0x650);
        if (lVar4 == 0) {
          return;
        }
        if (*(longlong *)(*param_1 + 0x668) == 0) {
          return;
        }
        FUN_140f09180(lVar4,0);
        plVar5 = (longlong *)*param_1;
        if (*(int *)(plVar5[0xca] + 0x1cc) == 0) {
          (**(code **)(*plVar5 + 0x578))(plVar5,0);
          plVar5 = (longlong *)*param_1;
        }
        FUN_140f0abd0(plVar5[0xca],lVar3,(int)param_1[1],1);
        *(undefined1 *)(*param_1 + 0x638) = 0;
        return;
      }
    }
    *(undefined1 *)(*param_1 + 0x638) = 1;
    param_1 = (longlong *)*param_1;
    if (param_1[0xca] != 0) {
      *(undefined4 *)(param_1[0xca] + 0x244) = *(undefined4 *)((longlong)param_1 + 0x63c);
      *(undefined4 *)(param_1[0xca] + 0x248) = *(undefined4 *)((longlong)param_1 + 0x634);
      if (((char)param_1[199] != '\0') && (*(int *)(param_1[0xca] + 0x1cc) == 0)) {
        (**(code **)(*param_1 + 0x580))(param_1,0);
        *(undefined4 *)(param_1[0xca] + 0x1cc) = 0;
        FUN_140ee2c70();
      }
    }
  }
  return;
}



// FUNCTION 140ed8bb0 FUN_140ed8bb0 body=1749 status=ok
// SIG undefined FUN_140ed8bb0(void)

void FUN_140ed8bb0(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  wchar_t *pwVar4;
  char cVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  int *piVar10;
  int *piVar11;
  wchar_t *pwVar12;
  undefined8 local_res8;
  longlong local_res10;
  int local_48;
  int local_44;
  longlong local_40;
  
  lVar6 = FUN_140eccd20(*param_1);
  if (lVar6 != 0) {
    pwVar12 = (wchar_t *)0x0;
    pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnDuelInitated",L"::");
    pwVar9 = pwVar12;
    while (pwVar4 = pwVar7, pwVar4 != (wchar_t *)0x0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
      pwVar9 = pwVar4;
    }
    FName::FName(&local_res8,pwVar9 + 2,1);
    FUN_14074ba20(lVar6 + 0x2348,*param_1,&LAB_140edea58,local_res8);
    pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnDuelTimedOut",L"::");
    pwVar9 = pwVar12;
    while (pwVar4 = pwVar7, pwVar4 != (wchar_t *)0x0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
      pwVar9 = pwVar4;
    }
    FName::FName(&local_res8,pwVar9 + 2,1);
    FUN_14074ba20(lVar6 + 0x2358,*param_1,&LAB_140edea64,local_res8);
    pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnAcceptedCompetitorDuel",L"::");
    pwVar9 = pwVar12;
    while (pwVar4 = pwVar7, pwVar4 != (wchar_t *)0x0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
      pwVar9 = pwVar4;
    }
    FName::FName(&local_res8,pwVar9 + 2,1);
    FUN_14074ba20(lVar6 + 0x2378,*param_1,&LAB_140edea70,local_res8);
    pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnUnacceptedCompetitorDuel",L"::");
    pwVar9 = pwVar12;
    while (pwVar4 = pwVar7, pwVar4 != (wchar_t *)0x0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
      pwVar9 = pwVar4;
    }
    FName::FName(&local_res8,pwVar9 + 2,1);
    FUN_14074ba20(lVar6 + 0x2388,*param_1,&LAB_140edea7c,local_res8);
    pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnCompetitorAcceptedDuel",L"::");
    pwVar9 = pwVar12;
    while (pwVar4 = pwVar7, pwVar4 != (wchar_t *)0x0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
      pwVar9 = pwVar4;
    }
    FName::FName(&local_res8,pwVar9 + 2,1);
    FUN_14074ba20(lVar6 + 0x2398,*param_1,&LAB_140edea88,local_res8);
    pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnCompetitorUnacceptedDuel",L"::");
    pwVar9 = pwVar12;
    while (pwVar4 = pwVar7, pwVar4 != (wchar_t *)0x0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
      pwVar9 = pwVar4;
    }
    FName::FName(&local_res8,pwVar9 + 2,1);
    FUN_14074ba20(lVar6 + 0x23a8,*param_1,&LAB_140edea94,local_res8);
    pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnStartedDuelSetup",L"::");
    pwVar9 = pwVar12;
    while (pwVar4 = pwVar7, pwVar4 != (wchar_t *)0x0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
      pwVar9 = pwVar4;
    }
    FName::FName(&local_res8,pwVar9 + 2,1);
    FUN_14074ba20(lVar6 + 0x23b8,*param_1,&LAB_140edeaa0,local_res8);
    pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnStartedDuel",L"::");
    pwVar9 = pwVar12;
    while (pwVar4 = pwVar7, pwVar4 != (wchar_t *)0x0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
      pwVar9 = pwVar4;
    }
    FName::FName(&local_res8,pwVar9 + 2,1);
    FUN_14074ba20(lVar6 + 0x23c8,*param_1,&LAB_140edeaac,local_res8);
    pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnLostDuel",L"::");
    pwVar9 = pwVar12;
    while (pwVar4 = pwVar7, pwVar4 != (wchar_t *)0x0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
      pwVar9 = pwVar4;
    }
    FName::FName(&local_res10,pwVar9 + 2,1);
    lVar8 = local_res10;
    uVar3 = *param_1;
    plVar1 = (longlong *)(lVar6 + 0x23d8);
    FWeakObjectPtr::operator=(&local_48,0);
    local_40 = 0;
    FWeakObjectPtr::operator=(&local_48,uVar3);
    local_40 = lVar8;
    local_res8 = 0;
    if ((lVar8 != 0) && (lVar8 = FWeakObjectPtr::Get(&local_48), lVar8 != 0)) {
      UObject::FindFunction(lVar8,local_40);
    }
    piVar10 = (int *)*plVar1;
    iVar2 = *(int *)(lVar6 + 0x23e0);
    for (piVar11 = piVar10; piVar11 != piVar10 + (longlong)iVar2 * 4; piVar11 = piVar11 + 4) {
      if ((((*piVar11 == local_48) && (piVar11[1] == local_44)) ||
          ((cVar5 = FWeakObjectPtr::IsValid(piVar11), cVar5 == '\0' &&
           (cVar5 = FWeakObjectPtr::IsValid(&local_48), cVar5 == '\0')))) &&
         (*(longlong *)(piVar11 + 2) == local_40)) {
        if ((int)((longlong)piVar11 - (longlong)piVar10 >> 4) != -1) goto LAB_140ed9043;
        break;
      }
    }
    iVar2 = *(int *)(lVar6 + 0x23e0);
    *(int *)(lVar6 + 0x23e0) = iVar2 + 1;
    if (*(int *)(lVar6 + 0x23e4) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    piVar10 = (int *)((longlong)iVar2 * 0x10 + *plVar1);
    *piVar10 = local_48;
    piVar10[1] = local_44;
    *(longlong *)(piVar10 + 2) = local_40;
LAB_140ed9043:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
    pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnWonDuel",L"::");
    pwVar9 = pwVar12;
    while (pwVar4 = pwVar7, pwVar4 != (wchar_t *)0x0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
      pwVar9 = pwVar4;
    }
    FName::FName(&local_res10,pwVar9 + 2,1);
    uVar3 = *param_1;
    plVar1 = (longlong *)(lVar6 + 0x23e8);
    FWeakObjectPtr::operator=(&local_48,0);
    local_40 = 0;
    FWeakObjectPtr::operator=(&local_48,uVar3);
    local_40 = local_res10;
    local_res8 = 0;
    if ((local_res10 != 0) && (lVar8 = FWeakObjectPtr::Get(&local_48), lVar8 != 0)) {
      UObject::FindFunction(lVar8,local_40);
    }
    piVar10 = (int *)*plVar1;
    iVar2 = *(int *)(lVar6 + 0x23f0);
    for (piVar11 = piVar10; piVar11 != piVar10 + (longlong)iVar2 * 4; piVar11 = piVar11 + 4) {
      if ((((*piVar11 == local_48) && (piVar11[1] == local_44)) ||
          ((cVar5 = FWeakObjectPtr::IsValid(piVar11), cVar5 == '\0' &&
           (cVar5 = FWeakObjectPtr::IsValid(&local_48), cVar5 == '\0')))) &&
         (*(longlong *)(piVar11 + 2) == local_40)) {
        if ((int)((longlong)piVar11 - (longlong)piVar10 >> 4) != -1) goto LAB_140ed9181;
        break;
      }
    }
    iVar2 = *(int *)(lVar6 + 0x23f0);
    *(int *)(lVar6 + 0x23f0) = iVar2 + 1;
    if (*(int *)(lVar6 + 0x23f4) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    piVar10 = (int *)((longlong)iVar2 * 0x10 + *plVar1);
    *piVar10 = local_48;
    piVar10[1] = local_44;
    *(longlong *)(piVar10 + 2) = local_40;
LAB_140ed9181:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
    pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnTimerElapsed",L"::");
    pwVar9 = pwVar12;
    while (pwVar4 = pwVar7, pwVar4 != (wchar_t *)0x0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
      pwVar9 = pwVar4;
    }
    FName::FName(&local_res8,pwVar9 + 2,1);
    FUN_14074ba20(lVar6 + 0x23f8,*param_1,&LAB_140edeab8,local_res8);
    pwVar9 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnDuelCanceled",L"::");
    while (pwVar7 = pwVar9, pwVar7 != (wchar_t *)0x0) {
      pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar7 + 1,L"::");
      pwVar12 = pwVar7;
    }
    FName::FName(&local_res8,pwVar12 + 2,1);
    FUN_14074ba20(lVar6 + 0x2408,*param_1,&LAB_140edeac4,local_res8);
  }
  return;
}



// FUNCTION 140ed9290 FUN_140ed9290 body=476 status=ok
// SIG undefined FUN_140ed9290(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ed9290(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
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
  lVar1 = FUN_1416f8720((int)param_1[1]);
  if (lVar1 != 0) {
    uVar2 = FUN_1416f8720((int)param_1[1]);
    *(undefined8 *)(*param_1 + 0x670) = uVar2;
    uVar2 = (**(code **)(*(longlong *)(*(longlong *)(*param_1 + 0x670) + 0xd80) + 0x18))();
    local_d4[0] = 0xffffffff;
    *(undefined8 *)(*param_1 + 0x668) = uVar2;
    lVar1 = *param_1;
    if (*(longlong *)(lVar1 + 0x668) != 0) {
      FUN_14170c210(local_d4);
    }
    local_d8 = 0xffffffff;
    uVar4 = 0xffffffff;
    if (*(longlong *)(lVar1 + 0x670) != 0) {
      FUN_14170c210(&local_d8);
      uVar4 = local_d8;
    }
    uVar5 = local_d4[0];
    local_d8 = 0xffffffff;
    local_d4[0] = 0xffffffff;
    local_98 = (longlong *)0x0;
    local_88 = 0;
    puVar3 = (undefined8 *)FUN_140438ef0(0x18,local_b8);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &PTR_FUN_144605c38;
      puVar3[1] = lVar1;
      *(undefined4 *)(puVar3 + 2) = uVar4;
      uVar4 = 0xffffffff;
      *(undefined4 *)((longlong)puVar3 + 0x14) = uVar5;
      uVar5 = 0xffffffff;
    }
    local_c8[0] = &LAB_140ee0f00;
    uVar2 = FUN_1420849a0(lVar1,local_78,local_c8);
    FUN_14208c260(lVar1,uVar2);
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
    FUN_1416f8340(uVar5);
    FUN_1416f8340(uVar4);
    FUN_1416f8340(local_d8);
    FUN_1416f8340(local_d4[0]);
  }
  return;
}



// FUNCTION 140ed9470 FUN_140ed9470 body=449 status=ok
// SIG undefined FUN_140ed9470(void)

void FUN_140ed9470(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong local_18 [2];
  
  if (*(longlong *)param_1[1] == 0) {
    return;
  }
  plVar6 = (longlong *)*param_2;
  if (plVar6 == (longlong *)0x0) {
    if (*(longlong *)(*param_1 + 0x2b8) != 0) {
      uVar3 = FUN_141335770();
      FString::PrintfImpl(local_18,L"GeneratedTotem%i",*(undefined4 *)(*param_1 + 0x650));
      lVar4 = FUN_140ec9620(*(undefined8 *)(*param_1 + 0x2b8),PTR_s_DuelTimerMovieClip_14629dc28,
                            local_18,uVar3);
      *param_2 = lVar4;
      if (local_18[0] != 0) {
        FMemory::Free();
      }
    }
    plVar6 = (longlong *)*param_2;
    if (plVar6 == (longlong *)0x0) goto LAB_140ed960b;
  }
  (**(code **)(*plVar6 + 0x278))(plVar6,1);
  *(undefined1 *)(param_2 + 2) = 1;
  FWeakObjectPtr::operator=(param_2 + 1,*(undefined8 *)param_1[1]);
  lVar4 = *(longlong *)(*(longlong *)param_1[1] + 0x118);
  if (lVar4 == 0) {
LAB_140ed956e:
    lVar4 = 0;
  }
  else {
    lVar5 = UNukerSkills001Widget::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140ed956e;
  }
  if (*(longlong *)(*param_2 + 0x170) != 0) {
    FUN_140f0b520(*(longlong *)(*param_2 + 0x170),lVar4,*(undefined8 *)(*param_1 + 0x638));
  }
  plVar6 = (longlong *)*param_1;
  iVar2 = (int)plVar6[0xcc];
  if (iVar2 == 0) {
    (**(code **)(*plVar6 + 0x578))(plVar6,1);
    iVar2 = (int)plVar6[0xcc];
  }
  local_18[0] = 0;
  *(int *)(plVar6 + 0xcc) = iVar2 + 1;
  local_18[1] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],&DAT_144603cf8,10);
  FUN_142088910(*param_2,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
LAB_140ed960b:
  FWeakObjectPtr::operator=(*param_1 + 0x658,*(undefined8 *)param_1[1]);
  return;
}



// FUNCTION 140ed9640 FUN_140ed9640 body=636 status=ok
// SIG undefined FUN_140ed9640(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ed9640(longlong *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [4];
  undefined4 local_a4;
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
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_a4 = (undefined4)param_1[1];
  local_a0 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_a8);
  FUN_14172a400(local_a8);
  cVar2 = FWeakObjectPtr::IsValid(&local_a4);
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(&local_a4);
    lVar6 = 0;
    iVar1 = *(int *)(lVar4 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar7 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar7;
      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar7) * 0x18;
    }
    if ((((*(uint *)(lVar6 + 8) & 0x30000000) == 0) &&
        (plVar5 = (longlong *)FUN_140eccc40(*param_1), plVar5 != (longlong *)0x0)) &&
       (lVar6 = (**(code **)(*plVar5 + 0x148))(plVar5), lVar6 != 0)) {
      if (*(longlong *)(lVar6 + 400) == 0) {
        uVar8 = *(undefined8 *)(lVar6 + 0x3f8);
      }
      else {
        uVar8 = *(undefined8 *)(*(longlong *)(lVar6 + 400) + 0x90);
      }
      lVar6 = *param_1;
      plVar5 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar5 != (longlong *)0x0) {
        *plVar5 = (longlong)&PTR_FUN_143f4d170;
        FWeakObjectPtr::operator=(plVar5 + 1,lVar6);
        plVar5[2] = (longlong)FUN_140eef260;
        lVar4 = FDelegateHandle::GenerateNewID();
        plVar5[4] = lVar4;
        *plVar5 = (longlong)&PTR_FUN_143f4d1b8;
      }
      local_98 = 0;
      local_90 = 0;
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x30))(plVar5,&local_98);
      }
      FWeakObjectPtr::operator=(local_88,0);
      local_b0 = 0xbf800000;
      local_b8 = 1;
      local_80 = 0;
      local_48 = (longlong *)0x0;
      local_38 = 0;
      local_78 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar8,lVar6 + 0x8d0,&local_98,0x3f800000);
      if (local_38 != 0) {
        plVar9 = local_68;
        if (local_48 != (longlong *)0x0) {
          plVar9 = local_48;
        }
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 0x10))(plVar9,0);
        }
      }
      if (local_48 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_98);
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x28))(plVar5,0);
        lVar6 = FMemory::Realloc(plVar5,0,0);
        if (lVar6 != 0) {
          FMemory::Free(lVar6);
        }
      }
    }
  }
  return;
}



// FUNCTION 140ed98c0 FUN_140ed98c0 body=124 status=ok
// SIG undefined FUN_140ed98c0(void)

void FUN_140ed98c0(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  lVar3 = FUN_1416f8720(*(undefined4 *)(param_1 + 1));
  if (lVar3 != 0) {
    lVar3 = FUN_1416f8720(*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(lVar3 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar5;
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
    }
    else {
      lVar3 = 0;
    }
    if ((*(uint *)(lVar3 + 8) & 0x30000000) == 0) {
      uVar4 = FUN_1416f8720(*(undefined4 *)(param_1 + 1));
      FUN_140cda660(uVar4,*param_1);
      return;
    }
  }
  return;
}



// FUNCTION 140ed9940 FUN_140ed9940 body=165 status=ok
// SIG undefined FUN_140ed9940(void)

void FUN_140ed9940(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  float fVar3;
  
  iVar1 = *(int *)(*param_1 + 0x678);
  if ((-1 < iVar1) && (iVar1 < (int)param_1[4])) {
    (**(code **)(*param_2 + 0x278))(param_2,1);
    fVar3 = *(float *)(param_1[3] + (longlong)iVar1 * 4) * 100.0;
    FUN_142088ee0(param_2,(int)ROUND(fVar3 + fVar3 + 0.5) >> 1);
    lVar2 = *param_1;
    iVar1 = *(int *)(lVar2 + 0x678);
    *(int *)(lVar2 + 0x678) = iVar1 + 1;
    if (*(int *)(lVar2 + 0x67c) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar2 + 0x670,iVar1);
    }
    *(longlong **)(*(longlong *)(lVar2 + 0x670) + (longlong)iVar1 * 8) = param_2;
  }
  return;
}



// FUNCTION 140ed99f0 FUN_140ed99f0 body=251 status=ok
// SIG undefined FUN_140ed99f0(void)

void FUN_140ed99f0(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  cVar2 = FWeakObjectPtr::IsValid(*param_1 + 0x728);
  if (cVar2 != '\0') {
    lVar3 = FWeakObjectPtr::Get(*param_1 + 0x728);
    FUN_1407665e0(lVar3 + 0x188,*param_1);
    lVar3 = FWeakObjectPtr::Get(*param_1 + 0x728);
    FUN_1407665e0(lVar3 + 0x198,*param_1);
    lVar3 = FWeakObjectPtr::Get(*param_1 + 0x728);
    FUN_1407665e0(lVar3 + 0x1a8,*param_1);
    lVar3 = FWeakObjectPtr::Get(*param_1 + 0x728);
    FUN_1407665e0(lVar3 + 0x1b8,*param_1);
  }
  lVar3 = FWeakObjectPtr::Get(*param_1 + 0x5c8);
  if (lVar3 != 0) {
    lVar4 = FUN_14142a560();
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
      FUN_1407665e0(lVar3 + 0x5f8,*param_1);
    }
  }
  return;
}



// FUNCTION 140ed9af0 FUN_140ed9af0 body=396 status=ok
// SIG undefined FUN_140ed9af0(void)

void FUN_140ed9af0(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 local_res8 [8];
  
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
      iVar5 = 0;
      lVar3 = *(longlong *)(*param_1 + 0x6e8);
      if (0 < *(int *)(lVar2 + 0x9a8)) {
        lVar6 = 0;
        do {
          plVar7 = (longlong *)(*(longlong *)(lVar2 + 0x9a0) + lVar6);
          if ((((int)plVar7[1] != 0) && (plVar4 = (longlong *)*plVar7, plVar4 != (longlong *)0x0))
             && (plVar4 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4,local_res8),
                *plVar4 == lVar3)) {
            if (((int)plVar7[1] != 0) && (plVar4 = (longlong *)*plVar7, plVar4 != (longlong *)0x0))
            {
              (**(code **)(*plVar4 + 0x28))(plVar4,0);
              if (*plVar7 != 0) {
                lVar3 = FMemory::Realloc(*plVar7,0,0);
                *plVar7 = lVar3;
              }
              *(undefined4 *)(plVar7 + 1) = 0;
            }
            break;
          }
          iVar5 = iVar5 + 1;
          lVar6 = lVar6 + 0x10;
        } while (iVar5 < *(int *)(lVar2 + 0x9a8));
      }
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar2 + 0x9a0,0);
      *(undefined8 *)(*param_1 + 0x6e8) = 0;
    }
  }
  lVar2 = FWeakObjectPtr::Get(*param_1 + 0x58c);
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
      FUN_140d04a70(lVar2);
      return;
    }
  }
  return;
}



// FUNCTION 140ed9c80 FUN_140ed9c80 body=401 status=ok
// SIG undefined FUN_140ed9c80(void)

void FUN_140ed9c80(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_res8;
  
  lVar2 = FUN_1416f8720((int)param_1[1]);
  if (lVar2 != 0) {
    lVar2 = FUN_1416f8720((int)param_1[1]);
    *(undefined1 *)(lVar2 + 0x330) = 3;
    lVar2 = FUN_1416f8720((int)param_1[1]);
    FText::operator=(lVar2 + 0x350,*param_1 + 0xf48);
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
    FName::FName(&local_res8,L"OnSlotButtonHovered",1);
    lVar2 = FUN_1416f8720((int)param_1[1]);
    FWeakObjectPtr::operator=(lVar2 + 0x210,*param_1);
    *(undefined8 *)(lVar2 + 0x218) = local_res8;
  }
  return;
}



// FUNCTION 140ed9e20 FUN_140ed9e20 body=175 status=ok
// SIG undefined FUN_140ed9e20(void)

void FUN_140ed9e20(longlong *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = (undefined4)param_1[1];
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
      lVar4 = *param_1;
      if (*(longlong *)(lVar4 + 0x820) != 0) {
        FUN_140eea340(lVar4,*(undefined4 *)(*(longlong *)(lVar4 + 0x820) + 0x160),
                      *(undefined4 *)(lVar4 + 0x85c));
        return;
      }
    }
  }
  return;
}



// FUNCTION 140ed9ed0 FUN_140ed9ed0 body=291 status=ok
// SIG undefined FUN_140ed9ed0(void)

void FUN_140ed9ed0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 local_38 [48];
  
  if ((param_2 != (longlong *)0x0) &&
     (cVar1 = FWeakObjectPtr::IsValid(*param_1 + 0x3c), cVar1 != '\0')) {
    lVar2 = (**(code **)(*param_2 + 0x340))();
    if (*(longlong *)(lVar2 + 0x78) != 0) {
      uVar3 = FWeakObjectPtr::Get(*param_1 + 0x30);
      FUN_1411e23f0(uVar3,local_38,lVar2 + 0x68);
      (**(code **)(*param_2 + 0x358))(param_2,local_38,0);
      FUN_140ddef50(local_38);
      return;
    }
    uVar3 = *(undefined8 *)(lVar2 + 0xa8);
    uVar4 = FWeakObjectPtr::Get(lVar2 + 0xdc);
    uVar5 = FWeakObjectPtr::Get(*param_1 + 0x3c);
    uVar3 = FUN_1411e6870(uVar5,uVar3);
    uVar5 = FWeakObjectPtr::Get(*param_1 + 0x30);
    FUN_1411e2a40(uVar5,local_38,uVar4,uVar3);
    (**(code **)(*param_2 + 0x358))(param_2,local_38,0);
    FUN_140ddef50(local_38);
  }
  return;
}



// FUNCTION 140eda000 FUN_140eda000 body=559 status=ok
// SIG undefined FUN_140eda000(void)

void FUN_140eda000(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  wchar_t *pwVar11;
  longlong *plVar12;
  undefined8 local_res8;
  
  pwVar11 = (wchar_t *)0x0;
  lVar8 = *param_1;
  pwVar7 = pwVar11;
  if (*(longlong *)(lVar8 + 0x690) != 0) {
    pwVar7 = *(wchar_t **)(*(longlong *)(lVar8 + 0x690) + 0x10e0);
  }
  if (pwVar7 != (wchar_t *)0x0) {
    pwVar6 = _guard_xfg_dispatch_icall_nop(L"&UGFxAmmoBar::OnResurrected",L"::");
    pwVar5 = pwVar11;
    while (pwVar4 = pwVar6, pwVar4 != (wchar_t *)0x0) {
      pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
      pwVar5 = pwVar4;
    }
    FName::FName(&local_res8,pwVar5 + 2,1);
    FUN_14074ba20(pwVar7 + 0x8d8,*param_1,&LAB_140efd4d0,local_res8);
    lVar8 = *param_1;
  }
  pwVar7 = (wchar_t *)FWeakObjectPtr::Get(lVar8 + 0x5c8);
  if (pwVar7 != (wchar_t *)0x0) {
    lVar8 = FUN_14142a560();
    if ((*(int *)(*(longlong *)(pwVar7 + 8) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar7 + 8) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
        lVar8 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_140eda0f3;
  }
  pwVar7 = pwVar11;
LAB_140eda0f3:
  *(wchar_t **)(*param_1 + 0x668) = pwVar7;
  if (*(longlong *)(*param_1 + 0x668) != 0) {
    pwVar7 = _guard_xfg_dispatch_icall_nop(L"&UGFxAmmoBar::OnInputDeviceChanged",L"::");
    while (pwVar5 = pwVar7, pwVar5 != (wchar_t *)0x0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
      pwVar11 = pwVar5;
    }
    FName::FName(&local_res8,pwVar11 + 2,1);
    FUN_14074ba20(*(longlong *)(*param_1 + 0x668) + 0x5f8,*param_1,&LAB_140efbc20,local_res8);
    lVar8 = *param_1;
    lVar2 = *(longlong *)(lVar8 + 0x668);
    plVar12 = (longlong *)(lVar2 + 0x7c8);
    plVar9 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar9 != (longlong *)0x0) {
      *plVar9 = (longlong)&PTR_FUN_143f4d170;
      FWeakObjectPtr::operator=(plVar9 + 1,lVar8);
      plVar9[2] = (longlong)&LAB_140efbc20;
      lVar8 = FDelegateHandle::GenerateNewID();
      plVar9[4] = lVar8;
      *plVar9 = (longlong)&PTR_FUN_143f4d1b8;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar12,1);
      (**(code **)(*plVar9 + 0x20))(plVar9,&local_res8);
      iVar1 = *(int *)(lVar2 + 2000);
      *(int *)(lVar2 + 2000) = iVar1 + 1;
      if (*(int *)(lVar2 + 0x7d4) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar12,iVar1);
      }
      puVar10 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar12);
      *puVar10 = plVar9;
      *(undefined4 *)(puVar10 + 1) = 3;
    }
  }
  return;
}



// FUNCTION 140eda230 FUN_140eda230 body=254 status=ok
// SIG undefined FUN_140eda230(void)

void FUN_140eda230(longlong param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
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
    lVar7 = 0;
    iVar1 = *(int *)(lVar4 + 0xc);
    lVar4 = lVar7;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar6 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar6;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar6) * 0x18;
    }
    if ((*(uint *)(lVar4 + 8) & 0x30000000) == 0) {
      param_1 = param_1 + 0x10;
      cVar2 = FWeakObjectPtr::IsValid(param_1);
      if (cVar2 != '\0') {
        lVar4 = FWeakObjectPtr::Get(param_1);
        iVar1 = *(int *)(lVar4 + 0xc);
        if (iVar1 < (int)DAT_1469e91c4) {
          uVar6 = iVar1 >> 0x1f & 0xffff;
          uVar3 = iVar1 + uVar6;
          lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                  (longlong)(int)((uVar3 & 0xffff) - uVar6) * 0x18;
        }
        if ((*(uint *)(lVar7 + 8) & 0x30000000) == 0) {
          uVar5 = FWeakObjectPtr::Get(param_1);
          FUN_140ab8470(uVar5);
        }
      }
    }
  }
  return;
}



// FUNCTION 140eda330 FUN_140eda330 body=193 status=ok
// SIG undefined FUN_140eda330(void)

void FUN_140eda330(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  lVar1 = FUN_1416f8720((int)param_1[1]);
  if (lVar1 != 0) {
    lVar1 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0xc));
    if (lVar1 != 0) {
      lVar1 = *param_1;
      local_28 = 0;
      local_18 = 0;
      puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_48);
      if (puVar2 != (undefined8 *)0x0) {
        puVar2[1] = lVar1;
        *puVar2 = &PTR_FUN_143f77b70;
      }
      local_58[0] = &LAB_140ee0a20;
      uVar3 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0xc));
      uVar4 = FUN_1416f8720((int)param_1[1]);
      uVar3 = FUN_140ecde40(uVar4,uVar3,local_58,0,0);
      *(undefined8 *)(*param_1 + 0x6c0) = uVar3;
    }
  }
  return;
}



// FUNCTION 140eda400 FUN_140eda400 body=127 status=ok
// SIG undefined FUN_140eda400(void)

void FUN_140eda400(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 local_res8;
  undefined4 local_resc;
  
  if (*(longlong *)(*param_1 + 0x638) != 0) {
    FUN_140f0a600(*param_1,1);
    uVar2 = FWeakObjectPtr::Get(*param_1 + 0x640);
    uVar3 = FUN_140eccd20(*param_1);
    FUN_140f03350(*(undefined8 *)(*param_1 + 0x638),uVar2,uVar3);
  }
  FWeakObjectPtr::operator=(&local_res8,0);
  lVar1 = *param_1;
  *(undefined4 *)(lVar1 + 0x640) = local_res8;
  *(undefined4 *)(lVar1 + 0x644) = local_resc;
  return;
}



// FUNCTION 140eda480 FUN_140eda480 body=153 status=ok
// SIG undefined FUN_140eda480(void)

void FUN_140eda480(longlong *param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  undefined8 local_res8;
  
  if ((*(longlong *)(*param_1 + 0x680) != 0) &&
     (*(char *)(*(longlong *)(*param_1 + 0x680) + 0x188) != '\0')) {
    pwVar3 = _guard_xfg_dispatch_icall_nop(L"&UGFxAmmoBar::UpdateCachedAmmoCounts",L"::");
    pwVar2 = (wchar_t *)0x0;
    while (pwVar1 = pwVar3, pwVar1 != (wchar_t *)0x0) {
      pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar2 = pwVar1;
    }
    FName::FName(&local_res8,pwVar2 + 2,1);
    FUN_14074ba20(*(longlong *)(*param_1 + 0x680) + 400,*param_1,FUN_140f0f4b0,local_res8);
  }
  return;
}



// FUNCTION 140eda520 FUN_140eda520 body=283 status=ok
// SIG undefined FUN_140eda520(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140eda520(undefined8 *param_1)

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
  uVar2 = *param_1;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = uVar2;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = &LAB_140ee0910;
  uVar2 = FUN_1420849a0(*param_1,local_68,local_b8);
  FUN_14208c260(*param_1,uVar2);
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



// FUNCTION 140eda640 FUN_140eda640 body=198 status=ok
// SIG undefined FUN_140eda640(void)

void FUN_140eda640(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_38 [16];
  undefined8 local_28;
  undefined8 local_20;
  undefined1 local_10;
  
  lVar2 = (**(code **)(*(longlong *)*param_1 + 0x148))();
  if (lVar2 != 0) {
    FActorSpawnParameters::FActorSpawnParameters(local_38);
    local_10 = 1;
    local_20 = FWeakObjectPtr::Get(*param_1 + 0x5e0);
    local_28 = FWeakObjectPtr::Get(*param_1 + 0x5e0);
    lVar3 = FUN_1416f8720((int)param_1[1]);
    if (*(longlong *)(lVar3 + 0x40) != 0) {
      lVar4 = FUN_1428dfc70();
      lVar3 = *(longlong *)(lVar3 + 0x40);
      for (lVar1 = lVar3; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
        if (lVar1 == lVar4) goto LAB_140eda6d4;
      }
    }
    lVar3 = 0;
LAB_140eda6d4:
    uVar5 = UWorld::SpawnActor(lVar2,lVar3,0,0,local_38);
    *(undefined8 *)(*param_1 + 0x718) = uVar5;
  }
  return;
}



// FUNCTION 140eda710 FUN_140eda710 body=462 status=ok
// SIG undefined FUN_140eda710(void)

void FUN_140eda710(longlong *param_1)

{
  ulonglong uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined8 local_res8;
  undefined4 local_res10;
  undefined4 local_res14;
  longlong local_48;
  undefined8 local_40;
  undefined1 local_38 [24];
  undefined1 local_20;
  undefined8 local_18;
  undefined2 local_10;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(&local_res8);
  FUN_14172a400(&local_res8);
  cVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar2 != '\0') {
    lVar5 = FWeakObjectPtr::Get(&local_res10);
    lVar6 = 0;
    iVar4 = *(int *)(lVar5 + 0xc);
    if (iVar4 < (int)DAT_1469e91c4) {
      uVar8 = iVar4 >> 0x1f & 0xffff;
      uVar3 = iVar4 + uVar8;
      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar8) * 0x18;
    }
    if ((((*(uint *)(lVar6 + 8) & 0x30000000) == 0) && (lVar6 = FUN_140eccbe0(*param_1), lVar6 != 0)
        ) && (lVar5 = FUN_1416f8720((int)param_1[2]), lVar5 != 0)) {
      if ((*(int *)(*param_1 + 0x658) == 1) && (cVar2 = FUN_140cbbac0(lVar6), cVar2 != '\0')) {
        local_48 = 0;
        local_40 = 0;
        uVar7 = FUN_1404b03b0();
        FText::FText(local_38,uVar7);
        local_18 = 0;
        local_10 = 1;
        local_20 = 1;
        FName::FName(&local_res8,L"OakPC_OpenStatusMenu",1);
        uVar1 = local_40;
        lVar6 = (longlong)(int)local_40;
        iVar4 = (int)local_40 + 1;
        local_40 = CONCAT44(local_40._4_4_,iVar4);
        if (local_40._4_4_ < iVar4) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                    (&local_48,uVar1 & 0xffffffff);
        }
        *(undefined8 *)(local_48 + lVar6 * 8) = local_res8;
        lVar6 = FUN_1416f8720((int)param_1[2]);
        (**(code **)(*(longlong *)(lVar6 + 0x308) + 0x20))((longlong *)(lVar6 + 0x308),&local_48,1);
        uVar7 = FUN_1416f8720((int)param_1[2]);
        FUN_142ed2e60(uVar7,0x3f800000);
        uVar7 = FUN_1416f8720((int)param_1[2]);
        FUN_142ed3950(uVar7,1);
        UE4Tuple_Private::
        TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>::
        ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>
                  (&local_48);
      }
      else {
        uVar7 = FUN_1416f8720((int)param_1[2]);
        FUN_142ed3950(uVar7,0);
      }
    }
  }
  return;
}



// FUNCTION 140eda8e0 FUN_140eda8e0 body=467 status=ok
// SIG undefined FUN_140eda8e0(void)

void FUN_140eda8e0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  bool bVar10;
  undefined1 local_res8 [16];
  undefined4 local_res18;
  undefined4 local_res1c;
  
  local_res18 = (undefined4)param_1[1];
  local_res1c = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar4 = FWeakObjectPtr::IsValid(&local_res18);
  if (cVar4 != '\0') {
    lVar7 = FWeakObjectPtr::Get(&local_res18);
    lVar8 = 0;
    iVar6 = *(int *)(lVar7 + 0xc);
    if (iVar6 < (int)DAT_1469e91c4) {
      uVar9 = iVar6 >> 0x1f & 0xffff;
      uVar5 = iVar6 + uVar9;
      lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
              (longlong)(int)((uVar5 & 0xffff) - uVar9) * 0x18;
    }
    if ((*(uint *)(lVar8 + 8) & 0x30000000) == 0) {
      if ((char)param_1[2] != *(char *)(*param_1 + 0x252)) {
        *(char *)(*param_1 + 0x252) = (char)param_1[2];
        lVar8 = *param_1;
        plVar3 = *(longlong **)(lVar8 + 0x208);
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
              if (plVar3 != (longlong *)0x0) {
                lVar8 = *(longlong *)(lVar8 + 0x200);
                if (lVar8 != 0) {
                  FUN_142056670(lVar8,*(undefined1 *)(*param_1 + 0x252));
                }
                LOCK();
                plVar1 = plVar3 + 1;
                lVar8 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar8 == 1) {
                  (**(code **)*plVar3)(plVar3);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar3 + 0xc);
                  iVar6 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar6 == 1) {
                    (**(code **)(*plVar3 + 8))(plVar3,1);
                  }
                }
              }
              break;
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
        lVar8 = *param_1;
        plVar3 = *(longlong **)(lVar8 + 0x1e0);
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
              lVar8 = *(longlong *)(lVar8 + 0x1d8);
              if (lVar8 != 0) {
                FUN_142056670(lVar8,*(undefined1 *)(*param_1 + 0x252));
              }
              LOCK();
              plVar1 = plVar3 + 1;
              lVar8 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar8 != 1) {
                return;
              }
              (**(code **)*plVar3)(plVar3);
              LOCK();
              piVar2 = (int *)((longlong)plVar3 + 0xc);
              iVar6 = *piVar2;
              *piVar2 = *piVar2 + -1;
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
      }
    }
  }
  return;
}



// FUNCTION 140edaac0 FUN_140edaac0 body=421 status=ok
// SIG undefined FUN_140edaac0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140edaac0(longlong *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
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
  lVar5 = param_1[1];
  uVar1 = *(undefined4 *)(lVar5 + 0x638);
  uVar2 = *(undefined8 *)(*param_1 + 0x90);
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_FUN_143f4d170;
    FWeakObjectPtr::operator=(plVar3 + 1,lVar5);
    plVar3[2] = (longlong)FUN_140ee4f20;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[4] = lVar4;
    *plVar3 = (longlong)&PTR_FUN_143f4d1b8;
  }
  local_98 = 0;
  local_90 = 0;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x30))(plVar3,&local_98);
  }
  FWeakObjectPtr::operator=(local_88,0);
  local_a0 = 0xbf800000;
  local_a8 = 0;
  local_80 = 0;
  local_48 = (longlong *)0x0;
  local_38 = 0;
  local_78 = AK::MemoryMgr::StartProfileThreadUsage;
  FUN_142880850(uVar2,lVar5 + 0x888,&local_98,uVar1);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_98);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,0);
    lVar5 = FMemory::Realloc(plVar3,0,0);
    if (lVar5 != 0) {
      FMemory::Free(lVar5);
    }
  }
  return;
}



// FUNCTION 140edac70 FUN_140edac70 body=401 status=ok
// SIG undefined FUN_140edac70(void)

void FUN_140edac70(longlong *param_1)

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
    FText::operator=(lVar2 + 0x350,*param_1 + 0xf60);
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
    FName::FName(&local_res8,L"OnSlotButtonHovered",1);
    lVar2 = FUN_1416f8720((int)param_1[1]);
    FWeakObjectPtr::operator=(lVar2 + 0x210,*param_1);
    *(undefined8 *)(lVar2 + 0x218) = local_res8;
  }
  return;
}



// FUNCTION 140edae10 FUN_140edae10 body=573 status=ok
// SIG undefined FUN_140edae10(void)

void FUN_140edae10(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  wchar_t *pwVar11;
  int *piVar12;
  int *piVar13;
  undefined8 local_res8;
  longlong local_res10;
  int local_28;
  int local_24;
  longlong local_20;
  
  lVar7 = FUN_1416f8720(*(undefined4 *)(param_1 + 1));
  if (lVar7 != 0) {
    lVar7 = FUN_1416f8720(*(undefined4 *)(param_1 + 1));
    uVar3 = *param_1;
    plVar1 = (longlong *)(lVar7 + 0xf28);
    plVar8 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar8 != (longlong *)0x0) {
      *plVar8 = (longlong)&PTR_FUN_1442e7fd8;
      FWeakObjectPtr::operator=(plVar8 + 1,uVar3);
      plVar8[2] = (longlong)FUN_140efc730;
      lVar9 = FDelegateHandle::GenerateNewID();
      plVar8[4] = lVar9;
      *plVar8 = (longlong)&PTR_FUN_1442e8020;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
      (**(code **)(*plVar8 + 0x20))(plVar8,&local_res8);
      iVar2 = *(int *)(lVar7 + 0xf30);
      *(int *)(lVar7 + 0xf30) = iVar2 + 1;
      if (*(int *)(lVar7 + 0xf34) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
      }
      puVar10 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
      *puVar10 = plVar8;
      *(undefined4 *)(puVar10 + 1) = 3;
    }
  }
  lVar7 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0xc));
  if (lVar7 != 0) {
    pwVar11 = _guard_xfg_dispatch_icall_nop(L"&UGFxCurrencyWidget::OnCurrencyQuantityChanged",L"::")
    ;
    pwVar5 = (wchar_t *)0x0;
    while (pwVar4 = pwVar11, pwVar4 != (wchar_t *)0x0) {
      pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
      pwVar5 = pwVar4;
    }
    FName::FName(&local_res10,pwVar5 + 2,1);
    lVar7 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0xc));
    uVar3 = *param_1;
    plVar1 = (longlong *)(lVar7 + 0x318);
    FWeakObjectPtr::operator=(&local_28,0);
    local_20 = 0;
    FWeakObjectPtr::operator=(&local_28,uVar3);
    local_20 = local_res10;
    local_res8 = 0;
    if ((local_res10 != 0) && (lVar9 = FWeakObjectPtr::Get(&local_28), lVar9 != 0)) {
      UObject::FindFunction(lVar9,local_20);
    }
    piVar12 = (int *)*plVar1;
    iVar2 = *(int *)(lVar7 + 800);
    for (piVar13 = piVar12; piVar13 != piVar12 + (longlong)iVar2 * 4; piVar13 = piVar13 + 4) {
      if ((((*piVar13 == local_28) && (piVar13[1] == local_24)) ||
          ((cVar6 = FWeakObjectPtr::IsValid(piVar13), cVar6 == '\0' &&
           (cVar6 = FWeakObjectPtr::IsValid(&local_28), cVar6 == '\0')))) &&
         (*(longlong *)(piVar13 + 2) == local_20)) {
        if ((int)((longlong)piVar13 - (longlong)piVar12 >> 4) != -1) goto LAB_140edb038;
        break;
      }
    }
    iVar2 = *(int *)(lVar7 + 800);
    *(int *)(lVar7 + 800) = iVar2 + 1;
    if (*(int *)(lVar7 + 0x324) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    piVar12 = (int *)((longlong)iVar2 * 0x10 + *plVar1);
    *piVar12 = local_28;
    piVar12[1] = local_24;
    *(longlong *)(piVar12 + 2) = local_20;
LAB_140edb038:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
  }
  return;
}



// FUNCTION 140edb050 FUN_140edb050 body=608 status=ok
// SIG undefined FUN_140edb050(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140edb050(longlong *param_1)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  longlong *plVar11;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [4];
  undefined4 local_b4;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_b4 = (undefined4)param_1[1];
  local_b0 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_b8);
  FUN_14172a400(local_b8);
  cVar3 = FWeakObjectPtr::IsValid(&local_b4);
  if (cVar3 != '\0') {
    lVar5 = FWeakObjectPtr::Get(&local_b4);
    lVar9 = 0;
    iVar2 = *(int *)(lVar5 + 0xc);
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar10 = iVar2 >> 0x1f & 0xffff;
      uVar4 = iVar2 + uVar10;
      lVar9 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar10) * 0x18;
    }
    if (((*(uint *)(lVar9 + 8) & 0x30000000) == 0) && (*(longlong *)(*param_1 + 0x38) != 0)) {
      uVar6 = FWeakObjectPtr::Get(param_1 + 1);
      lVar9 = *param_1;
      uVar1 = *(undefined4 *)(lVar9 + 0x248);
      lVar5 = *(longlong *)(lVar9 + 0x38);
      plVar7 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar7 != (longlong *)0x0) {
        *plVar7 = (longlong)&PTR_FUN_143f4d170;
        FWeakObjectPtr::operator=(plVar7 + 1,uVar6);
        plVar7[2] = (longlong)FUN_140efd2f0;
        lVar8 = FDelegateHandle::GenerateNewID();
        plVar7[4] = lVar8;
        *plVar7 = (longlong)&PTR_FUN_143f4d1b8;
      }
      local_a8 = 0;
      local_a0 = 0;
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x30))(plVar7,&local_a8);
      }
      FWeakObjectPtr::operator=(local_98,0);
      local_c0 = 0xbf800000;
      local_c8 = 0;
      local_90 = 0;
      local_58 = (longlong *)0x0;
      local_48 = 0;
      local_88 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(lVar5 + 0x340,lVar9 + 0x1d0,&local_a8,uVar1);
      if (local_48 != 0) {
        plVar11 = local_78;
        if (local_58 != (longlong *)0x0) {
          plVar11 = local_58;
        }
        if (plVar11 != (longlong *)0x0) {
          (**(code **)(*plVar11 + 0x10))(plVar11,0);
        }
      }
      if (local_58 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x28))(plVar7,0);
        lVar9 = FMemory::Realloc(plVar7,0,0);
        if (lVar9 != 0) {
          FMemory::Free(lVar9);
        }
      }
    }
  }
  return;
}



// FUNCTION 140edb2b0 FUN_140edb2b0 body=910 status=ok
// SIG undefined FUN_140edb2b0(void)

void FUN_140edb2b0(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  char cVar6;
  longlong *plVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  int *piVar11;
  int *piVar12;
  longlong local_res10;
  int local_48;
  int local_44;
  longlong local_40;
  
  plVar7 = (longlong *)FWeakObjectPtr::Get(*param_1 + 0x5d8);
  if (plVar7 != (longlong *)0x0) {
    lVar8 = FUN_14145f370();
    if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
        lVar8 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pwVar9 = _guard_xfg_dispatch_icall_nop(L"&UGFxBossBar::OnPawnChanged",L"::");
      pwVar5 = (wchar_t *)0x0;
      while (pwVar4 = pwVar9, pwVar4 != (wchar_t *)0x0) {
        pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
        pwVar5 = pwVar4;
      }
      FName::FName(&local_res10,pwVar5 + 2,1);
      lVar10 = local_res10;
      lVar8 = *param_1;
      plVar1 = plVar7 + 0x167;
      FWeakObjectPtr::operator=(&local_48,0);
      local_40 = 0;
      FWeakObjectPtr::operator=(&local_48,lVar8);
      local_40 = lVar10;
      if ((lVar10 != 0) && (lVar8 = FWeakObjectPtr::Get(&local_48), lVar8 != 0)) {
        UObject::FindFunction(lVar8,local_40);
      }
      piVar11 = (int *)*plVar1;
      lVar8 = plVar7[0x168];
      for (piVar12 = piVar11; piVar12 != piVar11 + (longlong)(int)lVar8 * 4; piVar12 = piVar12 + 4)
      {
        if (((*piVar12 == local_48) && (piVar12[1] == local_44)) ||
           ((cVar6 = FWeakObjectPtr::IsValid(piVar12), cVar6 == '\0' &&
            (cVar6 = FWeakObjectPtr::IsValid(&local_48), cVar6 == '\0')))) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        if ((bVar3) && (*(longlong *)(piVar12 + 2) == local_40)) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        if (bVar3) {
          if ((int)((longlong)piVar12 - (longlong)piVar11 >> 4) != -1) goto LAB_140edb475;
          break;
        }
      }
      iVar2 = (int)plVar7[0x168];
      *(int *)(plVar7 + 0x168) = iVar2 + 1;
      if (*(int *)((longlong)plVar7 + 0xb44) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
      }
      piVar11 = (int *)((longlong)iVar2 * 0x10 + *plVar1);
      *piVar11 = local_48;
      piVar11[1] = local_44;
      *(longlong *)(piVar11 + 2) = local_40;
LAB_140edb475:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
      FUN_140f0ffd0(*param_1);
      lVar8 = FUN_140eccbe0(*param_1);
      if (lVar8 != 0) {
        ABP_RobotKeeper_C__pf218076579::bpf__StartSelectBuild__pf(lVar8,*param_1);
      }
      lVar8 = (**(code **)(*plVar7 + 0x148))(plVar7);
      if ((lVar8 != 0) && (lVar8 = UWorld::GetGameState<APVPGameState>(lVar8), lVar8 != 0)) {
        pwVar9 = _guard_xfg_dispatch_icall_nop(L"&UGFxBossBar::HandleEventOnBossBar",L"::");
        pwVar5 = (wchar_t *)0x0;
        while (pwVar4 = pwVar9, pwVar4 != (wchar_t *)0x0) {
          pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
          pwVar5 = pwVar4;
        }
        FName::FName(&local_res10,pwVar5 + 2,1);
        lVar10 = *param_1;
        plVar7 = (longlong *)(lVar8 + 0x5b8);
        FWeakObjectPtr::operator=(&local_48,0);
        local_40 = 0;
        FWeakObjectPtr::operator=(&local_48,lVar10);
        local_40 = local_res10;
        if ((local_res10 != 0) && (lVar10 = FWeakObjectPtr::Get(&local_48), lVar10 != 0)) {
          UObject::FindFunction(lVar10,local_40);
        }
        piVar11 = (int *)*plVar7;
        iVar2 = *(int *)(lVar8 + 0x5c0);
        for (piVar12 = piVar11; piVar12 != piVar11 + (longlong)iVar2 * 4; piVar12 = piVar12 + 4) {
          if (((*piVar12 == local_48) && (piVar12[1] == local_44)) ||
             ((cVar6 = FWeakObjectPtr::IsValid(piVar12), cVar6 == '\0' &&
              (cVar6 = FWeakObjectPtr::IsValid(&local_48), cVar6 == '\0')))) {
            bVar3 = true;
          }
          else {
            bVar3 = false;
          }
          if ((bVar3) && (*(longlong *)(piVar12 + 2) == local_40)) {
            bVar3 = true;
          }
          else {
            bVar3 = false;
          }
          if (bVar3) {
            if ((int)((longlong)piVar12 - (longlong)piVar11 >> 4) != -1) goto LAB_140edb615;
            break;
          }
        }
        iVar2 = *(int *)(lVar8 + 0x5c0);
        *(int *)(lVar8 + 0x5c0) = iVar2 + 1;
        if (*(int *)(lVar8 + 0x5c4) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar7,iVar2);
        }
        piVar11 = (int *)((longlong)iVar2 * 0x10 + *plVar7);
        *piVar11 = local_48;
        piVar11[1] = local_44;
        *(longlong *)(piVar11 + 2) = local_40;
LAB_140edb615:
        TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar7);
      }
    }
  }
  return;
}



// FUNCTION 140edb640 FUN_140edb640 body=391 status=ok
// SIG undefined FUN_140edb640(void)

void FUN_140edb640(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  undefined1 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined1 local_res8 [8];
  
  lVar5 = FWeakObjectPtr::Get(*param_1 + 0x5d8);
  if (lVar5 != 0) {
    lVar6 = FUN_14145f370();
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
      lVar6 = *(longlong *)(lVar5 + 0x910);
      if (lVar6 != 0) {
        plVar1 = (longlong *)(lVar6 + 0x218);
        lVar8 = *param_1;
        plVar7 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar7 != (longlong *)0x0) {
          *plVar7 = (longlong)&PTR_FUN_143f4d290;
          FWeakObjectPtr::operator=(plVar7 + 1,lVar8);
          plVar7[2] = (longlong)FUN_140eff530;
          lVar8 = FDelegateHandle::GenerateNewID();
          plVar7[4] = lVar8;
          *plVar7 = (longlong)&PTR_FUN_143f4d2d8;
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
          (**(code **)(*plVar7 + 0x20))(plVar7,local_res8);
          iVar2 = *(int *)(lVar6 + 0x220);
          *(int *)(lVar6 + 0x220) = iVar2 + 1;
          if (*(int *)(lVar6 + 0x224) < iVar2 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
          }
          puVar9 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
          *puVar9 = plVar7;
          *(undefined4 *)(puVar9 + 1) = 3;
        }
        lVar8 = *param_1;
        uVar10 = FUN_142dcd660(lVar6,0);
        *(undefined8 *)(lVar8 + 0x720) = uVar10;
        uVar4 = FUN_140ee50c0(lVar8);
        if (local_res8 != (undefined1 *)(lVar8 + 0x6cc)) {
          *(undefined1 *)(lVar8 + 0x6cc) = uVar4;
          *(undefined1 *)(lVar8 + 0x6cd) = 1;
        }
      }
      if (*(longlong *)(*param_1 + 0x7e0) != 0) {
        FUN_1411e8ca0(*(longlong *)(*param_1 + 0x7e0),lVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140edb7d0 FUN_140edb7d0 body=563 status=ok
// SIG undefined FUN_140edb7d0(void)

void FUN_140edb7d0(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  cVar2 = FUN_142ebd920(*param_1);
  if (cVar2 == '\0') {
    return;
  }
  if (*(longlong *)(*param_1 + 0x650) == 0) {
    return;
  }
  plVar3 = (longlong *)FWeakObjectPtr::Get(param_1 + 1);
  plVar8 = (longlong *)0x0;
  if (plVar3 == (longlong *)0x0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != (int)param_1[2]) && (param_1[3] != 0)) {
      lVar4 = FUN_141796df0();
      FWeakObjectPtr::operator=(param_1 + 1,lVar4);
      if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 2) = DAT_1464b56f4;
      }
      plVar3 = (longlong *)FWeakObjectPtr::Get(param_1 + 1);
      if (plVar3 != (longlong *)0x0) goto LAB_140edb87d;
    }
LAB_140edb8b3:
    plVar3 = plVar8;
  }
  else {
LAB_140edb87d:
    lVar4 = FUN_1430228e0();
    if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140edb8b3;
  }
  lVar4 = *(longlong *)(*param_1 + 0x650);
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  plVar5 = *(longlong **)(lVar4 + 0x188);
  plVar7 = plVar5 + (longlong)*(int *)(lVar4 + 400) * 2;
  for (; (plVar6 = plVar8, plVar5 != plVar7 && (plVar6 = plVar5, (longlong *)*plVar5 != plVar3));
      plVar5 = plVar5 + 2) {
  }
  if (plVar6 == (longlong *)0x0) {
    return;
  }
  FUN_140f09180(lVar4,1);
  plVar3 = (longlong *)*param_1;
  if (*(int *)(plVar3[0xca] + 0x1cc) == 0) {
    (**(code **)(*plVar3 + 0x578))(plVar3,0);
  }
  plVar3 = (longlong *)FWeakObjectPtr::Get(param_1 + 1);
  if (plVar3 == (longlong *)0x0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != (int)param_1[2]) && (param_1[3] != 0)) {
      lVar4 = FUN_141796df0();
      FWeakObjectPtr::operator=(param_1 + 1,lVar4);
      if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 2) = DAT_1464b56f4;
      }
      plVar3 = (longlong *)FWeakObjectPtr::Get(param_1 + 1);
      if (plVar3 != (longlong *)0x0) goto LAB_140edb99c;
    }
  }
  else {
LAB_140edb99c:
    lVar4 = FUN_1430228e0();
    if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140edb9d5;
  }
  plVar3 = plVar8;
LAB_140edb9d5:
  FUN_140f0abd0(*(undefined8 *)(*param_1 + 0x650),plVar3,(int)param_1[6],0);
  return;
}



// FUNCTION 140edba10 FUN_140edba10 body=2449 status=ok
// SIG undefined FUN_140edba10(void)

void FUN_140edba10(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  wchar_t *pwVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  wchar_t *pwVar12;
  int *piVar13;
  int *piVar14;
  longlong *plVar15;
  wchar_t *pwVar16;
  undefined8 local_res8;
  int *local_res10;
  int local_48;
  int local_44;
  int *local_40;
  
  lVar6 = FWeakObjectPtr::Get(*param_1 + 0x5c8);
  pwVar16 = (wchar_t *)0x0;
  if (lVar6 != 0) {
    lVar7 = FUN_14142a560();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pwVar8 = _guard_xfg_dispatch_icall_nop(L"&UGFxExperienceBar::OnInputDeviceChanged",L"::");
      pwVar12 = pwVar16;
      while (pwVar4 = pwVar8, pwVar4 != (wchar_t *)0x0) {
        pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
        pwVar12 = pwVar4;
      }
      FName::FName(&local_res10,pwVar12 + 2,1);
      piVar13 = local_res10;
      lVar7 = *param_1;
      plVar15 = (longlong *)(lVar6 + 0x5f8);
      FWeakObjectPtr::operator=(&local_48,0);
      local_40 = (int *)0x0;
      FWeakObjectPtr::operator=(&local_48,lVar7);
      local_40 = piVar13;
      local_res8 = 0;
      if ((piVar13 != (int *)0x0) && (lVar7 = FWeakObjectPtr::Get(&local_48), lVar7 != 0)) {
        UObject::FindFunction(lVar7,local_40);
      }
      piVar13 = (int *)*plVar15;
      iVar2 = *(int *)(lVar6 + 0x600);
      for (piVar14 = piVar13; piVar14 != piVar13 + (longlong)iVar2 * 4; piVar14 = piVar14 + 4) {
        if (((*piVar14 == local_48) && (piVar14[1] == local_44)) ||
           ((cVar5 = FWeakObjectPtr::IsValid(piVar14), cVar5 == '\0' &&
            (cVar5 = FWeakObjectPtr::IsValid(&local_48), cVar5 == '\0')))) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        if ((bVar3) && (*(int **)(piVar14 + 2) == local_40)) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        if (bVar3) {
          if ((int)((longlong)piVar14 - (longlong)piVar13 >> 4) != -1) goto LAB_140edbbd8;
          break;
        }
      }
      iVar2 = *(int *)(lVar6 + 0x600);
      lVar7 = (longlong)iVar2;
      *(int *)(lVar6 + 0x600) = iVar2 + 1;
      if (*(int *)(lVar6 + 0x604) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar15,iVar2);
      }
      lVar6 = *plVar15;
      *(int *)(lVar6 + lVar7 * 0x10) = local_48;
      *(int *)(lVar6 + (lVar7 * 4 + 1) * 4) = local_44;
      *(int **)(lVar6 + (lVar7 * 4 + 2) * 4) = local_40;
LAB_140edbbd8:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar15);
    }
  }
  plVar15 = (longlong *)FUN_140eccca0(*param_1);
  if (plVar15 != (longlong *)0x0) {
    uVar9 = FUN_1414aa4c0();
    uVar9 = (**(code **)(*plVar15 + 0x628))(plVar15,uVar9);
    FWeakObjectPtr::operator=(*param_1 + 0x828,uVar9);
    cVar5 = FWeakObjectPtr::IsValid(*param_1 + 0x828);
    if (cVar5 != '\0') {
      pwVar8 = _guard_xfg_dispatch_icall_nop(L"&UGFxExperienceBar::HandleExperienceAdded",L"::");
      pwVar12 = pwVar16;
      while (pwVar4 = pwVar8, pwVar4 != (wchar_t *)0x0) {
        pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
        pwVar12 = pwVar4;
      }
      FName::FName(&local_res8,pwVar12 + 2,1);
      lVar6 = FWeakObjectPtr::Get(*param_1 + 0x828);
      FUN_14074ba20(lVar6 + 0x218,*param_1,FUN_140ee86d0,local_res8);
      pwVar8 = _guard_xfg_dispatch_icall_nop(L"&UGFxExperienceBar::HandleLevelChanged",L"::");
      pwVar12 = pwVar16;
      while (pwVar4 = pwVar8, pwVar4 != (wchar_t *)0x0) {
        pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
        pwVar12 = pwVar4;
      }
      FName::FName(&local_res8,pwVar12 + 2,1);
      lVar6 = FWeakObjectPtr::Get(*param_1 + 0x828);
      FUN_14074ba20(lVar6 + 0x208,*param_1,FUN_140eea150,local_res8);
    }
    uVar9 = AGFireballProjectile::GetPrivateStaticClass();
    lVar6 = (**(code **)(*plVar15 + 0x628))(plVar15,uVar9);
    if (lVar6 != 0) {
      *(undefined8 *)(*param_1 + 0x820) = *(undefined8 *)(lVar6 + 0x3b0);
      pwVar8 = _guard_xfg_dispatch_icall_nop(L"&UGFxExperienceBar::HandleSkillPointsChanged",L"::");
      pwVar12 = pwVar16;
      while (pwVar4 = pwVar8, pwVar4 != (wchar_t *)0x0) {
        pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
        pwVar12 = pwVar4;
      }
      FName::FName(&local_res8,pwVar12 + 2,1);
      FUN_14074ba20(*(longlong *)(*param_1 + 0x820) + 0x48,*param_1,FUN_140eea720,local_res8);
    }
  }
  plVar15 = (longlong *)FWeakObjectPtr::Get(*param_1 + 0x5d8);
  if (plVar15 != (longlong *)0x0) {
    lVar6 = FUN_14145f370();
    if ((*(int *)(plVar15[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar15[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      uVar9 = FUN_1414b0d60();
      uVar9 = (**(code **)(*plVar15 + 0x628))(plVar15,uVar9);
      FWeakObjectPtr::operator=(*param_1 + 0x830,uVar9);
      cVar5 = FWeakObjectPtr::IsValid(*param_1 + 0x830);
      if (cVar5 != '\0') {
        pwVar8 = _guard_xfg_dispatch_icall_nop
                           (L"&UGFxExperienceBar::HandleGuardianExperienceAdded",L"::");
        pwVar12 = pwVar16;
        while (pwVar4 = pwVar8, pwVar4 != (wchar_t *)0x0) {
          pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
          pwVar12 = pwVar4;
        }
        FName::FName(&local_res10,pwVar12 + 2,1);
        lVar7 = FWeakObjectPtr::Get(*param_1 + 0x830);
        piVar13 = local_res10;
        lVar6 = *param_1;
        plVar1 = (longlong *)(lVar7 + 0x230);
        FWeakObjectPtr::operator=(&local_48,0);
        local_40 = (int *)0x0;
        FWeakObjectPtr::operator=(&local_48,lVar6);
        local_40 = piVar13;
        local_res8 = 0;
        if ((piVar13 != (int *)0x0) && (lVar6 = FWeakObjectPtr::Get(&local_48), lVar6 != 0)) {
          UObject::FindFunction(lVar6,local_40);
        }
        piVar13 = (int *)*plVar1;
        iVar2 = *(int *)(lVar7 + 0x238);
        for (piVar14 = piVar13; piVar14 != piVar13 + (longlong)iVar2 * 4; piVar14 = piVar14 + 4) {
          if (((*piVar14 == local_48) && (piVar14[1] == local_44)) ||
             ((cVar5 = FWeakObjectPtr::IsValid(piVar14), cVar5 == '\0' &&
              (cVar5 = FWeakObjectPtr::IsValid(&local_48), cVar5 == '\0')))) {
            bVar3 = true;
          }
          else {
            bVar3 = false;
          }
          if ((bVar3) && (*(int **)(piVar14 + 2) == local_40)) {
            bVar3 = true;
          }
          else {
            bVar3 = false;
          }
          if (bVar3) {
            if ((int)((longlong)piVar14 - (longlong)piVar13 >> 4) != -1) goto LAB_140edbf93;
            break;
          }
        }
        iVar2 = *(int *)(lVar7 + 0x238);
        *(int *)(lVar7 + 0x238) = iVar2 + 1;
        if (*(int *)(lVar7 + 0x23c) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
        }
        piVar13 = (int *)((longlong)iVar2 * 0x10 + *plVar1);
        *piVar13 = local_48;
        piVar13[1] = local_44;
        *(int **)(piVar13 + 2) = local_40;
LAB_140edbf93:
        TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
      }
      lVar6 = *param_1;
      plVar1 = plVar15 + 0x362;
      plVar10 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar10 != (longlong *)0x0) {
        *plVar10 = (longlong)&PTR_FUN_1442e8068;
        FWeakObjectPtr::operator=(plVar10 + 1,lVar6);
        plVar10[2] = (longlong)&LAB_140f01da0;
        lVar6 = FDelegateHandle::GenerateNewID();
        plVar10[4] = lVar6;
        *plVar10 = (longlong)&PTR_FUN_1442e80b0;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
        (**(code **)(*plVar10 + 0x20))(plVar10,&local_res8);
        iVar2 = (int)plVar15[0x363];
        *(int *)(plVar15 + 0x363) = iVar2 + 1;
        if (*(int *)((longlong)plVar15 + 0x1b1c) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
        }
        puVar11 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
        *puVar11 = plVar10;
        *(undefined4 *)(puVar11 + 1) = 3;
      }
      pwVar8 = _guard_xfg_dispatch_icall_nop
                         (L"&UGFxExperienceBar::NotifyPrimaryCharacterChanged",L"::");
      pwVar12 = pwVar16;
      while (pwVar4 = pwVar8, pwVar4 != (wchar_t *)0x0) {
        pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
        pwVar12 = pwVar4;
      }
      FName::FName(&local_res10,pwVar12 + 2,1);
      piVar13 = local_res10;
      lVar6 = *param_1;
      plVar1 = plVar15 + 0x118;
      FWeakObjectPtr::operator=(&local_48,0);
      local_40 = (int *)0x0;
      FWeakObjectPtr::operator=(&local_48,lVar6);
      local_40 = piVar13;
      local_res8 = 0;
      if ((piVar13 != (int *)0x0) && (lVar6 = FWeakObjectPtr::Get(&local_48), lVar6 != 0)) {
        UObject::FindFunction(lVar6,local_40);
      }
      piVar13 = (int *)*plVar1;
      lVar6 = plVar15[0x119];
      for (piVar14 = piVar13; piVar14 != piVar13 + (longlong)(int)lVar6 * 4; piVar14 = piVar14 + 4)
      {
        if (((*piVar14 == local_48) && (piVar14[1] == local_44)) ||
           ((cVar5 = FWeakObjectPtr::IsValid(piVar14), cVar5 == '\0' &&
            (cVar5 = FWeakObjectPtr::IsValid(&local_48), cVar5 == '\0')))) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        if ((bVar3) && (*(int **)(piVar14 + 2) == local_40)) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        if (bVar3) {
          if ((int)((longlong)piVar14 - (longlong)piVar13 >> 4) != -1) goto LAB_140edc175;
          break;
        }
      }
      iVar2 = (int)plVar15[0x119];
      *(int *)(plVar15 + 0x119) = iVar2 + 1;
      if (*(int *)((longlong)plVar15 + 0x8cc) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
      }
      piVar13 = (int *)((longlong)iVar2 * 0x10 + *plVar1);
      *piVar13 = local_48;
      piVar13[1] = local_44;
      *(int **)(piVar13 + 2) = local_40;
LAB_140edc175:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
    }
  }
  FUN_140f117e0(*param_1);
  FUN_140f05c90(*param_1,1);
  FUN_140f06e10(*param_1);
  if (*(longlong *)(*param_1 + 0x730) != 0) {
    pwVar8 = _guard_xfg_dispatch_icall_nop
                       (L"&UGFxExperienceBar::HandleProgressAnimationComplete",L"::");
    pwVar12 = pwVar16;
    while (pwVar4 = pwVar8, pwVar4 != (wchar_t *)0x0) {
      pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
      pwVar12 = pwVar4;
    }
    FName::FName(&local_res10,pwVar12 + 2,1);
    piVar13 = local_res10;
    lVar6 = *(longlong *)(*param_1 + 0x730);
    FWeakObjectPtr::operator=(lVar6 + 0x2b8);
    *(int **)(lVar6 + 0x2c0) = piVar13;
    local_res8 = 0;
    if ((piVar13 != (int *)0x0) && (lVar7 = FWeakObjectPtr::Get(lVar6 + 0x2b8), lVar7 != 0)) {
      UObject::FindFunction(lVar7,*(undefined8 *)(lVar6 + 0x2c0));
    }
  }
  if (*(longlong *)(*param_1 + 2000) != 0) {
    pwVar8 = _guard_xfg_dispatch_icall_nop
                       (L"&UGFxExperienceBar::HandleGuardianProgressAnimationComplete",L"::");
    pwVar12 = pwVar16;
    while (pwVar4 = pwVar8, pwVar4 != (wchar_t *)0x0) {
      pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
      pwVar12 = pwVar4;
    }
    FName::FName(&local_res10,pwVar12 + 2,1);
    piVar13 = local_res10;
    lVar6 = *(longlong *)(*param_1 + 2000);
    FWeakObjectPtr::operator=(lVar6 + 0x2b8);
    *(int **)(lVar6 + 0x2c0) = piVar13;
    local_res8 = 0;
    if ((piVar13 != (int *)0x0) && (lVar7 = FWeakObjectPtr::Get(lVar6 + 0x2b8), lVar7 != 0)) {
      UObject::FindFunction(lVar7,*(undefined8 *)(lVar6 + 0x2c0));
    }
  }
  if (*(longlong *)(*param_1 + 0x738) != 0) {
    pwVar12 = _guard_xfg_dispatch_icall_nop
                        (L"&ThisClass::HandleVaultCardProgressAnimationComplete",L"::");
    while (pwVar8 = pwVar12, pwVar8 != (wchar_t *)0x0) {
      pwVar12 = _guard_xfg_dispatch_icall_nop(pwVar8 + 1,L"::");
      pwVar16 = pwVar8;
    }
    FName::FName(&local_res10,pwVar16 + 2,1);
    lVar6 = *(longlong *)(*param_1 + 0x738);
    FWeakObjectPtr::operator=(lVar6 + 0x2b8);
    *(int **)(lVar6 + 0x2c0) = local_res10;
    local_res8 = 0;
    if ((local_res10 != (int *)0x0) && (lVar7 = FWeakObjectPtr::Get(lVar6 + 0x2b8), lVar7 != 0)) {
      UObject::FindFunction(lVar7,*(undefined8 *)(lVar6 + 0x2c0));
    }
  }
  return;
}



// FUNCTION 140edc3b0 FUN_140edc3b0 body=123 status=ok
// SIG undefined FUN_140edc3b0(void)

void FUN_140edc3b0(longlong *param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FWeakObjectPtr::Get(*param_1 + 0x60c);
  if (lVar3 != 0) {
    lVar4 = FUN_142937720();
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
      puVar1 = (undefined8 *)param_1[1];
      FUN_142880530(*(undefined8 *)(lVar3 + 0x90),puVar1);
      *puVar1 = 0;
    }
  }
  return;
}



// FUNCTION 140edc430 FUN_140edc430 body=271 status=ok
// SIG undefined FUN_140edc430(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140edc430(undefined8 *param_1)

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
  local_b8[0] = &LAB_140ee1080;
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



// FUNCTION 140edc540 FUN_140edc540 body=265 status=ok
// SIG undefined FUN_140edc540(void)

void FUN_140edc540(longlong *param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  undefined8 local_res8;
  
  if (*(longlong *)(*param_1 + 0x670) != 0) {
    pwVar3 = _guard_xfg_dispatch_icall_nop(L"&UGFxAmmoBar::UpdateCachedAmmoCounts",L"::");
    pwVar2 = (wchar_t *)0x0;
    while (pwVar1 = pwVar3, pwVar1 != (wchar_t *)0x0) {
      pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar2 = pwVar1;
    }
    FName::FName(&local_res8,pwVar2 + 2,1);
    FUN_14074ba20(*(longlong *)(*param_1 + 0x670) + 0x4b0,*param_1,FUN_140f0f4b0,local_res8);
    pwVar3 = _guard_xfg_dispatch_icall_nop(L"&UGFxAmmoBar::OnWeaponSwitchedMode",L"::");
    pwVar2 = (wchar_t *)0x0;
    while (pwVar1 = pwVar3, pwVar1 != (wchar_t *)0x0) {
      pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar2 = pwVar1;
    }
    FName::FName(&local_res8,pwVar2 + 2,1);
    FUN_14074ba20(*(longlong *)(*param_1 + 0x670) + 0x510,*param_1,FUN_140f02920,local_res8);
  }
  return;
}



// FUNCTION 140edc650 FUN_140edc650 body=318 status=ok
// SIG undefined FUN_140edc650(void)

void FUN_140edc650(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = FUN_1416f8720((int)param_1[1]);
  if (lVar1 != 0) {
    lVar1 = FUN_1416f8720((int)param_1[1]);
    *(undefined1 *)(lVar1 + 0x330) = 2;
    lVar1 = FUN_1416f8720((int)param_1[1]);
    FText::operator=(lVar1 + 0x350,*param_1 + 0xf78);
    lVar1 = FUN_1416f8720((int)param_1[1]);
    FText::operator=(lVar1 + 0x338,*param_1 + 0xc60);
    uVar2 = FUN_1416f8720((int)param_1[1]);
    UItemViewerScrollSelector::SetNumPages(uVar2,0);
    FName::FName(&local_res8,L"OnSlotButtonClicked",1);
    lVar1 = FUN_1416f8720((int)param_1[1]);
    FWeakObjectPtr::operator=(lVar1 + 0x1b0,*param_1);
    *(undefined8 *)(lVar1 + 0x1b8) = local_res8;
    FName::FName(&local_res8,L"OnSlotButtonFocused",1);
    lVar1 = FUN_1416f8720((int)param_1[1]);
    FWeakObjectPtr::operator=(lVar1 + 0x1d0,*param_1);
    *(undefined8 *)(lVar1 + 0x1d8) = local_res8;
    FName::FName(&local_res8,L"OnSlotButtonHovered",1);
    lVar1 = FUN_1416f8720((int)param_1[1]);
    FWeakObjectPtr::operator=(lVar1 + 0x210,*param_1);
    *(undefined8 *)(lVar1 + 0x218) = local_res8;
  }
  return;
}



// FUNCTION 140edc790 FUN_140edc790 body=321 status=ok
// SIG undefined FUN_140edc790(void)

void FUN_140edc790(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = FUN_1416f8720((int)param_1[1]);
  if (lVar1 != 0) {
    lVar1 = FUN_1416f8720((int)param_1[1]);
    *(undefined1 *)(lVar1 + 0x330) = 2;
    lVar1 = FUN_1416f8720((int)param_1[1]);
    FText::operator=(lVar1 + 0x350,*param_1 + 0xf78);
    lVar1 = FUN_1416f8720((int)param_1[1]);
    FText::operator=(lVar1 + 0x338,*param_1 + 0xc60);
    uVar2 = FUN_1416f8720((int)param_1[1]);
    UItemViewerScrollSelector::SetNumPages(uVar2,1);
    FName::FName(&local_res8,L"OnSlotButtonClicked",1);
    lVar1 = FUN_1416f8720((int)param_1[1]);
    FWeakObjectPtr::operator=(lVar1 + 0x1b0,*param_1);
    *(undefined8 *)(lVar1 + 0x1b8) = local_res8;
    FName::FName(&local_res8,L"OnSlotButtonFocused",1);
    lVar1 = FUN_1416f8720((int)param_1[1]);
    FWeakObjectPtr::operator=(lVar1 + 0x1d0,*param_1);
    *(undefined8 *)(lVar1 + 0x1d8) = local_res8;
    FName::FName(&local_res8,L"OnSlotButtonHovered",1);
    lVar1 = FUN_1416f8720((int)param_1[1]);
    FWeakObjectPtr::operator=(lVar1 + 0x210,*param_1);
    *(undefined8 *)(lVar1 + 0x218) = local_res8;
  }
  return;
}



// FUNCTION 140edc8e0 FUN_140edc8e0 body=1342 status=ok
// SIG undefined FUN_140edc8e0(void)

void FUN_140edc8e0(longlong *param_1)

{
  int *piVar1;
  bool bVar2;
  ulonglong uVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  undefined1 uVar7;
  int iVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 uVar12;
  bool bVar13;
  float fVar14;
  undefined4 local_res8;
  undefined4 uStackX_c;
  undefined8 local_res10;
  longlong local_148 [7];
  undefined8 local_110;
  undefined1 local_108 [24];
  undefined1 local_f0;
  undefined8 local_e8;
  undefined2 local_e0;
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 *local_88 [2];
  undefined1 local_78 [32];
  undefined8 local_58;
  undefined4 local_48;
  
  local_res8 = 0;
  if (((*(longlong *)(*param_1 + 0x670) == 0) ||
      (lVar11 = *(longlong *)(*param_1 + 0x690), lVar11 == 0)) ||
     (cVar4 = FUN_140c39ab0(lVar11,0,3), cVar4 == '\0')) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  bVar2 = false;
  *(undefined1 *)(*param_1 + 0x719) = uVar7;
  if (*(char *)(*param_1 + 0x719) != '\0') {
    cVar5 = (**(code **)(**(longlong **)(*param_1 + 0x670) + 0x858))();
    cVar6 = FUN_14307edb0(*(undefined8 *)(*param_1 + 0x670),cVar5 + '\x01');
    cVar4 = '\0';
    if (cVar6 != '\0') {
      cVar4 = cVar5 + '\x01';
    }
    cVar5 = FUN_14307edb0(*(undefined8 *)(*param_1 + 0x670),cVar4);
    if (cVar5 != '\0') {
      plVar9 = (longlong *)FUN_14307cf20(*(undefined8 *)(*param_1 + 0x670),cVar4);
      if ((plVar9 == (longlong *)0x0) ||
         (((*(byte *)((longlong)plVar9 + 0x181) & 1) != 0 &&
          (cVar5 = (**(code **)(*plVar9 + 0x470))(plVar9), cVar5 == '\0')))) {
        bVar2 = false;
        plVar9 = (longlong *)(*(longlong *)(*param_1 + 0x670) + 0x460);
        uVar12 = (**(code **)(*plVar9 + 0x10))(plVar9,cVar4);
        local_58 = 0;
        local_48 = 0;
        *(undefined8 *)(*param_1 + 0x748) = uVar12;
        lVar11 = *param_1;
        puVar10 = (undefined8 *)FUN_140438ef0(0x10,local_78);
        if (puVar10 != (undefined8 *)0x0) {
          puVar10[1] = lVar11;
          *puVar10 = &PTR_FUN_143f77b70;
        }
        local_88[0] = &LAB_140ee08b0;
        FUN_14204c280(local_88);
      }
      else {
        bVar2 = true;
      }
    }
  }
  lVar11 = *param_1;
  if (*(longlong *)(lVar11 + 0x688) == 0) {
    cVar4 = '\0';
  }
  else {
    cVar4 = FUN_142dd3d20();
    lVar11 = *param_1;
  }
  if (*(longlong *)(lVar11 + 0x6e0) == 0) {
    return;
  }
  if (*(longlong *)(lVar11 + 0x6c8) == 0) {
    return;
  }
  if (*(longlong *)(lVar11 + 0x6e8) != 0) {
    plVar9 = *(longlong **)(lVar11 + 0x670);
    if (plVar9 != (longlong *)0x0) {
      local_res10 = APlayArea::GetPrivateStaticClass();
      lVar11 = (**(code **)(*plVar9 + 0x628))(plVar9,local_res10);
      if (lVar11 != 0) {
        uVar7 = (**(code **)(**(longlong **)(*param_1 + 0x670) + 0x858))();
        uVar12 = FUN_14129e7d0(lVar11,uVar7);
        FText::FText(local_d8,uVar12);
        cVar5 = FText::IsEmpty(local_d8);
        bVar13 = cVar5 != '\0';
        if (bVar13) {
          local_148[0] = 0;
          local_148[1] = 0x1b;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_148,0);
          FGenericPlatformString::Memcpy(local_148[0],L"GUN TEAM PLZ FIX MODE NAME",0x36);
          uVar12 = FText::FromString(local_c0,local_148);
        }
        else {
          uVar12 = FText::FText(local_a8,local_d8);
        }
        (**(code **)(**(longlong **)(*param_1 + 0x6e0) + 0x2b0))
                  (*(longlong **)(*param_1 + 0x6e0),uVar12,1,0);
        if ((bVar13) && (local_b8 != (longlong *)0x0)) {
          LOCK();
          plVar9 = local_b8 + 1;
          lVar11 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*local_b8)(local_b8);
            LOCK();
            piVar1 = (int *)((longlong)local_b8 + 0xc);
            iVar8 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*local_b8 + 8))(local_b8,1);
            }
          }
        }
        if ((bVar13) && (local_148[0] != 0)) {
          FMemory::Free();
        }
        if ((!bVar13) && (local_a0 != (longlong *)0x0)) {
          LOCK();
          plVar9 = local_a0 + 1;
          lVar11 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*local_a0)(local_a0);
            LOCK();
            piVar1 = (int *)((longlong)local_a0 + 0xc);
            iVar8 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*local_a0 + 8))(local_a0,1);
            }
          }
        }
        if (local_d0 != (longlong *)0x0) {
          LOCK();
          plVar9 = local_d0 + 1;
          lVar11 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*local_d0)(local_d0);
            LOCK();
            piVar1 = (int *)((longlong)local_d0 + 0xc);
            iVar8 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*local_d0 + 8))(local_d0,1);
            }
          }
        }
      }
    }
    if (((*(char *)(*param_1 + 0x718) == '\0') || (cVar4 == '\0')) && (bVar2)) {
      local_148[4] = 0;
      local_148[5] = 0xc;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_148 + 4,0);
      FGenericPlatformString::Memcpy(local_148[4],L"swapEnabled",0x18);
      FUN_142088cf0(*(undefined8 *)(*param_1 + 0x6c8),local_148 + 4);
      if (local_148[4] != 0) {
        FMemory::Free();
      }
      local_148[6] = 0;
      local_110 = 0;
      uVar12 = FUN_1404b03b0();
      FText::FText(local_108,uVar12);
      local_e8 = 0;
      local_e0 = 1;
      local_f0 = 1;
      FName::FName(&local_res8,L"OakPC_SwitchWeaponMode",1);
      uVar3 = local_110;
      lVar11 = (longlong)(int)local_110;
      iVar8 = (int)local_110 + 1;
      local_110 = CONCAT44(local_110._4_4_,iVar8);
      if (local_110._4_4_ < iVar8) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                  (local_148 + 6,uVar3 & 0xffffffff);
      }
      *(ulonglong *)(local_148[6] + lVar11 * 8) = CONCAT44(uStackX_c,local_res8);
      if ((*(longlong *)(*param_1 + 0x688) == 0) || (cVar4 = FUN_142dd3d20(), cVar4 == '\0')) {
        uVar12 = 0;
      }
      else {
        uVar12 = 1;
      }
      plVar9 = (longlong *)(*(longlong *)(*param_1 + 0x6e8) + 0x308);
      (**(code **)(*plVar9 + 0x20))(plVar9,local_148 + 6,uVar12);
      lVar11 = *param_1;
      if (*(float *)(lVar11 + 0x714) <= 1e-08) {
        fVar14 = 1.0;
      }
      else {
        fVar14 = *(float *)(lVar11 + 0x714) / *(float *)(lVar11 + 0x710);
      }
      FUN_142ed2e60(*(undefined8 *)(lVar11 + 0x6e8),fVar14);
      UE4Tuple_Private::
      TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>::
      ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>
                (local_148 + 6);
      return;
    }
    local_148[2] = 0;
    local_148[3] = 0xd;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_148 + 2,0);
    FGenericPlatformString::Memcpy(local_148[2],L"swapDisabled",0x1a);
    FUN_142088cf0(*(undefined8 *)(*param_1 + 0x6c8),local_148 + 2);
    if (local_148[2] == 0) {
      return;
    }
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 140edce20 FUN_140edce20 body=271 status=ok
// SIG undefined FUN_140edce20(void)

void FUN_140edce20(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined2 *puVar6;
  longlong local_68;
  longlong *local_60;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  lVar3 = *param_1;
  local_28 = 0;
  local_18 = 0;
  puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_48);
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[1] = lVar3;
    *puVar5 = &PTR_FUN_143f77b70;
  }
  local_58[0] = &LAB_140ee0a40;
  FUN_14208c4f0(lVar3,local_58);
  if ((1 < *(int *)(*param_1 + 0x708)) &&
     (plVar4 = *(longlong **)(*param_1 + 0x6f8), plVar4 != (longlong *)0x0)) {
    (**(code **)(*plVar4 + 0x280))();
    FUN_142085870(*(undefined8 *)(*param_1 + 0x6f8),&local_68,L"moodContainer");
    if (local_68 != 0) {
      if (*(int *)(*param_1 + 0x708) == 0) {
        puVar6 = &DAT_143f3eda8;
      }
      else {
        puVar6 = *(undefined2 **)(*param_1 + 0x700);
      }
      FUN_14203e4e0(local_68,puVar6);
    }
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_60 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
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



// FUNCTION 140edcf30 FUN_140edcf30 body=235 status=ok
// SIG undefined FUN_140edcf30(void)

void FUN_140edcf30(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  
  lVar1 = (**(code **)(*(longlong *)*param_1 + 0x148))();
  if ((lVar1 != 0) && (lVar1 = UWorld::GetGameState<APVPGameState>(lVar1), lVar1 != 0)) {
    iVar4 = 0;
    lVar3 = *(longlong *)(*param_1 + 0x718);
    if (0 < *(int *)(lVar1 + 0x6a0)) {
      lVar6 = 0;
      do {
        plVar5 = (longlong *)(*(longlong *)(lVar1 + 0x698) + lVar6);
        if ((((int)plVar5[1] != 0) && (plVar2 = (longlong *)*plVar5, plVar2 != (longlong *)0x0)) &&
           (plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2,local_res8), *plVar2 == lVar3)
           ) {
          if (((int)plVar5[1] != 0) && (plVar2 = (longlong *)*plVar5, plVar2 != (longlong *)0x0)) {
            (**(code **)(*plVar2 + 0x28))(plVar2,0);
            if (*plVar5 != 0) {
              lVar3 = FMemory::Realloc(*plVar5,0,0);
              *plVar5 = lVar3;
            }
            *(undefined4 *)(plVar5 + 1) = 0;
          }
          break;
        }
        iVar4 = iVar4 + 1;
        lVar6 = lVar6 + 0x10;
      } while (iVar4 < *(int *)(lVar1 + 0x6a0));
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(lVar1 + 0x698),0);
  }
  return;
}



// FUNCTION 140edd020 FUN_140edd020 body=209 status=ok
// SIG undefined FUN_140edd020(void)

void FUN_140edd020(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140eccd20(*param_1);
  if (lVar1 != 0) {
    FUN_1407665e0(lVar1 + 0x2348,*param_1);
    FUN_1407665e0(lVar1 + 0x2358,*param_1);
    FUN_1407665e0(lVar1 + 0x2378,*param_1);
    FUN_1407665e0(lVar1 + 0x2388,*param_1);
    FUN_1407665e0(lVar1 + 0x2398,*param_1);
    FUN_1407665e0(lVar1 + 0x23a8,*param_1);
    FUN_1407665e0(lVar1 + 0x23b8,*param_1);
    FUN_1407665e0(lVar1 + 0x23c8,*param_1);
    FUN_1407665e0(lVar1 + 0x23d8,*param_1);
    FUN_1407665e0(lVar1 + 0x23e8,*param_1);
    FUN_1407665e0(lVar1 + 0x2408,*param_1);
  }
  return;
}



// FUNCTION 140edd100 FUN_140edd100 body=184 status=ok
// SIG undefined FUN_140edd100(void)

void FUN_140edd100(longlong param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  lVar4 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x68));
  if (lVar4 != 0) {
    local_res10 = *(undefined4 *)(param_1 + 8);
    local_res14 = *(undefined4 *)(param_1 + 0xc);
    FUN_141729b50(local_res8);
    FUN_14172a400(local_res8);
    cVar2 = FWeakObjectPtr::IsValid(&local_res10);
    if (cVar2 != '\0') {
      lVar4 = FWeakObjectPtr::Get(&local_res10);
      iVar1 = *(int *)(lVar4 + 0xc);
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar6 = iVar1 >> 0x1f & 0xffff;
        uVar3 = iVar1 + uVar6;
        lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                (longlong)(int)((uVar3 & 0xffff) - uVar6) * 0x18;
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x30000000) == 0) {
        uVar5 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x68));
        FUN_142ed4720(uVar5,param_1 + 0x10);
      }
    }
  }
  return;
}



// FUNCTION 140edd1c0 FUN_140edd1c0 body=2411 status=ok
// SIG undefined FUN_140edd1c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140edd1c0(longlong *param_1)

{
  float *pfVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  undefined2 *puVar12;
  int *piVar13;
  int *piVar14;
  longlong *plVar15;
  wchar_t *pwVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_1c8 [32];
  ulonglong local_1a8;
  undefined4 local_1a0 [2];
  int local_198;
  int local_194;
  longlong local_190;
  int local_188;
  int local_184;
  longlong local_180;
  longlong local_178;
  undefined8 local_170;
  longlong local_168;
  undefined8 local_160;
  longlong local_158;
  longlong local_150;
  undefined8 local_148;
  undefined8 local_140;
  longlong local_138;
  longlong *local_130;
  undefined1 local_128 [8];
  longlong local_120 [2];
  longlong *local_110;
  undefined1 local_f8 [80];
  undefined1 *local_a8 [2];
  longlong local_98 [4];
  longlong *local_78;
  int local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  lVar11 = *param_1;
  if (*(longlong *)(lVar11 + 0x760) != 0) {
    FUN_140483870(*(longlong *)(lVar11 + 0x760) + 0x28);
    lVar11 = *param_1;
    lVar8 = *(longlong *)(*(longlong *)(lVar11 + 0x760) + 0x118);
    if (lVar8 != 0) {
      FUN_1407665e0(lVar8 + 0x298);
      FUN_1407665e0(lVar8 + 0x2c8,*param_1);
      FUN_1407665e0(lVar8 + 0x278,*param_1);
      FUN_1407665e0(lVar8 + 0x2b8,*param_1);
      lVar11 = *param_1;
    }
  }
  pwVar16 = (wchar_t *)0x0;
  if ((*(longlong *)(lVar11 + 0x690) != 0) && (*(longlong *)(lVar11 + 0x698) != 0)) {
    piVar13 = (int *)(*(longlong *)(lVar11 + 0x698) + 8);
    LOCK();
    iVar5 = *piVar13;
    if (iVar5 == 0) {
      *piVar13 = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (0 < iVar5) {
      uVar6 = FUN_1404b03b0();
      UMistDebugEntityScreen::InspectEntity(*param_1 + 0x688,uVar6,1,0);
    }
  }
  *(longlong *)(*param_1 + 0x760) = param_1[1];
  plVar15 = (longlong *)*param_1;
  lVar11 = plVar15[0xec];
  if (lVar11 == 0) {
    (**(code **)(*plVar15 + 0x580))(plVar15,0);
  }
  else {
    plVar7 = (longlong *)FMemory::Realloc(0,0x30);
    local_110 = plVar7;
    if (plVar7 != (longlong *)0x0) {
      *plVar7 = (longlong)&PTR_FUN_143f4d290;
      FWeakObjectPtr::operator=(plVar7 + 1,plVar15);
      plVar7[2] = (longlong)FUN_140f01cd0;
      lVar8 = FDelegateHandle::GenerateNewID();
      plVar7[4] = lVar8;
      *plVar7 = (longlong)&PTR_FUN_143f4d2d8;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar11 + 0x28,1);
      (**(code **)(*plVar7 + 0x20))(plVar7,local_128);
      iVar5 = *(int *)(lVar11 + 0x30);
      *(int *)(lVar11 + 0x30) = iVar5 + 1;
      if (*(int *)(lVar11 + 0x34) < iVar5 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar11 + 0x28,iVar5);
      }
      puVar9 = (undefined8 *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar11 + 0x28));
      *puVar9 = plVar7;
      *(undefined4 *)(puVar9 + 1) = 3;
    }
    lVar11 = *param_1;
    if (*(longlong *)(lVar11 + 0x6b0) != 0) {
      if (*(longlong *)(lVar11 + 0x6c0) == 0) {
        local_1a8 = CONCAT44(local_1a8._4_4_,0xffffffff);
        if (*(longlong *)(*(longlong *)(lVar11 + 0x760) + 0x170) != 0) {
          FUN_14170c210(&local_1a8);
          lVar11 = *param_1;
        }
        local_1a0[0] = 0xffffffff;
        uVar17 = 0xffffffff;
        if (*(longlong *)(lVar11 + 0x6b0) != 0) {
          FUN_14170c210(local_1a0);
          lVar11 = *param_1;
          uVar17 = local_1a0[0];
        }
        uVar18 = (undefined4)local_1a8;
        local_1a8 = CONCAT44(local_1a8._4_4_,0xffffffff);
        local_1a0[0] = 0xffffffff;
        local_78 = (longlong *)0x0;
        local_68 = 0;
        puVar9 = (undefined8 *)FUN_140438ef0(0x18,local_98);
        if (puVar9 != (undefined8 *)0x0) {
          *puVar9 = &PTR_FUN_144605c38;
          puVar9[1] = lVar11;
          *(undefined4 *)(puVar9 + 2) = uVar17;
          *(undefined4 *)((longlong)puVar9 + 0x14) = uVar18;
          uVar18 = 0xffffffff;
          uVar17 = 0xffffffff;
        }
        local_a8[0] = &LAB_140ee0e60;
        uVar6 = FUN_1420849a0(*param_1,local_f8,local_a8);
        FUN_14208c4f0(*param_1,uVar6);
        if (local_68 != 0) {
          plVar15 = local_98;
          if (local_78 != (longlong *)0x0) {
            plVar15 = local_78;
          }
          if (plVar15 != (longlong *)0x0) {
            (**(code **)(*plVar15 + 0x10))(plVar15,0);
          }
        }
        if (local_78 != (longlong *)0x0) {
          FMemory::Free();
        }
        FUN_1416f8340(uVar18);
        FUN_1416f8340(uVar17);
        FUN_1416f8340(local_1a0[0]);
        FUN_1416f8340(local_1a8 & 0xffffffff);
      }
      else {
        FUN_142085870(*(longlong *)(lVar11 + 0x6c0),&local_138,L"container");
        if (local_138 != 0) {
          uVar6 = FUN_1413dced0(*(undefined8 *)(*param_1 + 0x760),local_120);
          FString::operator=(*param_1 + 0x788,uVar6);
          if (local_120[0] != 0) {
            FMemory::Free();
          }
          lVar11 = *param_1;
          if (1 < *(int *)(lVar11 + 0x790)) {
            if (*(int *)(lVar11 + 0x790) == 0) {
              puVar12 = &DAT_143f3eda8;
            }
            else {
              puVar12 = *(undefined2 **)(lVar11 + 0x788);
            }
            FUN_14203e4e0(local_138,puVar12);
          }
        }
        if (local_130 != (longlong *)0x0) {
          LOCK();
          plVar15 = local_130 + 1;
          lVar11 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*local_130)(local_130);
            LOCK();
            piVar13 = (int *)((longlong)local_130 + 0xc);
            iVar5 = *piVar13;
            *piVar13 = *piVar13 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*local_130 + 8))(local_130,1);
            }
          }
        }
      }
    }
    lVar11 = *param_1;
    lVar8 = *(longlong *)(*(longlong *)(lVar11 + 0x760) + 0x118);
    if (lVar8 != 0) {
      pwVar10 = _guard_xfg_dispatch_icall_nop
                          (L"&UGFxActionSkillWidget::OnActionAbilityAugmentChanged",L"::");
      pwVar3 = pwVar16;
      while (pwVar2 = pwVar10, pwVar2 != (wchar_t *)0x0) {
        pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar3 = pwVar2;
      }
      FName::FName(&local_158,pwVar3 + 2,1);
      lVar11 = *param_1;
      plVar15 = (longlong *)(lVar8 + 0x298);
      FWeakObjectPtr::operator=(&local_198,0);
      local_190 = 0;
      FWeakObjectPtr::operator=(&local_198,lVar11);
      local_190 = local_158;
      local_1a8 = 0;
      if ((local_158 != 0) && (lVar11 = FWeakObjectPtr::Get(&local_198), lVar11 != 0)) {
        UObject::FindFunction(lVar11,local_190);
      }
      piVar13 = (int *)*plVar15;
      iVar5 = *(int *)(lVar8 + 0x2a0);
      for (piVar14 = piVar13; piVar14 != piVar13 + (longlong)iVar5 * 4; piVar14 = piVar14 + 4) {
        if ((((*piVar14 == local_198) && (piVar14[1] == local_194)) ||
            ((cVar4 = FWeakObjectPtr::IsValid(piVar14), cVar4 == '\0' &&
             (cVar4 = FWeakObjectPtr::IsValid(&local_198), cVar4 == '\0')))) &&
           (*(longlong *)(piVar14 + 2) == local_190)) {
          if ((int)((longlong)piVar14 - (longlong)piVar13 >> 4) != -1) goto LAB_140edd6c8;
          break;
        }
      }
      iVar5 = *(int *)(lVar8 + 0x2a0);
      *(int *)(lVar8 + 0x2a0) = iVar5 + 1;
      if (*(int *)(lVar8 + 0x2a4) < iVar5 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar15,iVar5);
      }
      piVar13 = (int *)((longlong)iVar5 * 0x10 + *plVar15);
      *piVar13 = local_198;
      piVar13[1] = local_194;
      *(longlong *)(piVar13 + 2) = local_190;
LAB_140edd6c8:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar15);
      pwVar10 = _guard_xfg_dispatch_icall_nop
                          (L"&UGFxActionSkillWidget::OnActionSkillFailedActivation",L"::");
      pwVar3 = pwVar16;
      while (pwVar2 = pwVar10, pwVar2 != (wchar_t *)0x0) {
        pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar3 = pwVar2;
      }
      FName::FName(&local_150,pwVar3 + 2,1);
      lVar11 = *param_1;
      plVar15 = (longlong *)(lVar8 + 0x2c8);
      FWeakObjectPtr::operator=(&local_188,0);
      local_180 = 0;
      FWeakObjectPtr::operator=(&local_188,lVar11);
      local_180 = local_150;
      local_1a8 = 0;
      if ((local_150 != 0) && (lVar11 = FWeakObjectPtr::Get(&local_188), lVar11 != 0)) {
        UObject::FindFunction(lVar11,local_180);
      }
      piVar13 = (int *)*plVar15;
      iVar5 = *(int *)(lVar8 + 0x2d0);
      for (piVar14 = piVar13; piVar14 != piVar13 + (longlong)iVar5 * 4; piVar14 = piVar14 + 4) {
        if ((((*piVar14 == local_188) && (piVar14[1] == local_184)) ||
            ((cVar4 = FWeakObjectPtr::IsValid(piVar14), cVar4 == '\0' &&
             (cVar4 = FWeakObjectPtr::IsValid(&local_188), cVar4 == '\0')))) &&
           (*(longlong *)(piVar14 + 2) == local_180)) {
          if ((int)((longlong)piVar14 - (longlong)piVar13 >> 4) != -1) goto LAB_140edd818;
          break;
        }
      }
      iVar5 = *(int *)(lVar8 + 0x2d0);
      *(int *)(lVar8 + 0x2d0) = iVar5 + 1;
      if (*(int *)(lVar8 + 0x2d4) < iVar5 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar15,iVar5);
      }
      piVar13 = (int *)((longlong)iVar5 * 0x10 + *plVar15);
      *piVar13 = local_188;
      piVar13[1] = local_184;
      *(longlong *)(piVar13 + 2) = local_180;
LAB_140edd818:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar15);
      pwVar10 = _guard_xfg_dispatch_icall_nop
                          (L"&UGFxActionSkillWidget::OnActionSkillActivated",L"::");
      pwVar3 = pwVar16;
      while (pwVar2 = pwVar10, pwVar2 != (wchar_t *)0x0) {
        pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar3 = pwVar2;
      }
      FName::FName(&local_148,pwVar3 + 2,1);
      FUN_14074ba20(lVar8 + 0x278,*param_1,FUN_140eecf40,local_148);
      pwVar10 = _guard_xfg_dispatch_icall_nop
                          (L"&UGFxActionSkillWidget::OnActionSkillChargeCountChanged",L"::");
      pwVar3 = pwVar16;
      while (pwVar2 = pwVar10, pwVar2 != (wchar_t *)0x0) {
        pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar3 = pwVar2;
      }
      FName::FName(&local_140,pwVar3 + 2,1);
      FUN_14074ba20(lVar8 + 0x2b8,*param_1,FUN_140eed010,local_140);
      lVar11 = *param_1;
    }
    fVar19 = (float)FUN_1409a7d90(*(undefined8 *)(lVar11 + 0x760));
    lVar11 = *param_1;
    fVar20 = 0.0;
    if ((0.0 <= fVar19) && (fVar20 = fVar19, 1.0 <= fVar19)) {
      fVar20 = 1.0;
    }
    if (*(longlong *)(lVar11 + 0x670) != 0) {
      FUN_142f0ead0(*(longlong *)(lVar11 + 0x670),fVar20);
      lVar11 = *param_1;
    }
    cVar4 = FUN_142ebe180(lVar11);
    if (cVar4 != '\0') {
      cVar4 = FOpenXRHMD::IsStereoEnabled(*(undefined8 *)(*param_1 + 0x760));
      if (cVar4 == '\0') {
        if (fVar19 < 1.0) {
          FUN_140eee1f0();
        }
        else {
          FUN_140efd5a0();
        }
      }
      else if (*(longlong *)(*param_1 + 0x640) != 0) {
        local_178 = 0;
        local_170 = 0x15;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_178,0);
        FGenericPlatformString::Memcpy(local_178,L"activatedNoAnimation",0x2a);
        FUN_142088cf0(*(undefined8 *)(*param_1 + 0x640),&local_178);
        if (local_178 != 0) {
          FMemory::Free();
        }
      }
    }
    if ((((*(longlong *)(*param_1 + 0x640) != 0) &&
         (cVar4 = FOpenXRHMD::IsStereoEnabled(*(undefined8 *)(*param_1 + 0x760)), cVar4 == '\0')) &&
        (pfVar1 = (float *)(*param_1 + 0x76c), *pfVar1 <= 1.0 && *pfVar1 != 1.0)) &&
       (*(int *)(*(longlong *)(*param_1 + 0x760) + 0x200) == 0)) {
      local_168 = 0;
      local_160 = 0xb;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_168,0);
      FGenericPlatformString::Memcpy(local_168,L"onCooldown",0x16);
      FUN_142088cf0(*(undefined8 *)(*param_1 + 0x640),&local_168);
      if (local_168 != 0) {
        FMemory::Free();
      }
    }
    FUN_140ee2450(*param_1);
    lVar11 = *(longlong *)(*param_1 + 0x760);
    if (lVar11 != 0) {
      pwVar16 = (wchar_t *)(ulonglong)*(uint *)(lVar11 + 0x200);
    }
    FUN_140f0ad80(*param_1,pwVar16);
    plVar15 = (longlong *)*param_1;
    if (*(char *)(plVar15[0xec] + 0xa1) == '\x03') {
      (**(code **)(*plVar15 + 0x578))();
    }
    else {
      (**(code **)(*plVar15 + 0x580))(plVar15,0);
    }
  }
  if ((*(char *)(*param_1 + 0x730) == '\x02') && (lVar11 = FUN_140eccbe0(), lVar11 != 0)) {
    FUN_140ccf5c0(lVar11,*(longlong *)(*param_1 + 0x760) != 0);
  }
  return;
}



// FUNCTION 140eddb30 FUN_140eddb30 body=393 status=ok
// SIG undefined FUN_140eddb30(void)

void FUN_140eddb30(undefined8 *param_1)

{
  wchar_t *pwVar1;
  char cVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  undefined8 local_res8;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 1);
  if (cVar2 != '\0') {
    pwVar6 = (wchar_t *)0x0;
    pwVar3 = _guard_xfg_dispatch_icall_nop(L"&UGFxAmmoBar::UpdateCachedAmmoCounts",L"::");
    pwVar5 = pwVar6;
    while (pwVar1 = pwVar3, pwVar1 != (wchar_t *)0x0) {
      pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar5 = pwVar1;
    }
    FName::FName(&local_res8,pwVar5 + 2,1);
    lVar4 = FWeakObjectPtr::Get(param_1 + 1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar4 + 0x4b0,*param_1,local_res8);
    pwVar3 = _guard_xfg_dispatch_icall_nop(L"&UGFxAmmoBar::OnWeaponSwitchedMode",L"::");
    pwVar5 = pwVar6;
    while (pwVar1 = pwVar3, pwVar1 != (wchar_t *)0x0) {
      pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar5 = pwVar1;
    }
    FName::FName(&local_res8,pwVar5 + 2,1);
    lVar4 = FWeakObjectPtr::Get(param_1 + 1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar4 + 0x510,*param_1,local_res8);
    pwVar5 = _guard_xfg_dispatch_icall_nop(L"&UGFxAmmoBar::OnWeaponEquipped",L"::");
    while (pwVar3 = pwVar5, pwVar3 != (wchar_t *)0x0) {
      pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar6 = pwVar3;
    }
    FName::FName(&local_res8,pwVar6 + 2,1);
    lVar4 = FWeakObjectPtr::Get(param_1 + 1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar4 + 0x4f0,*param_1,local_res8);
  }
  return;
}



// FUNCTION 140eddcc0 FUN_140eddcc0 body=1718 status=ok
// SIG undefined FUN_140eddcc0(void)

void FUN_140eddcc0(longlong *param_1)

{
  uint uVar1;
  void *_Src;
  bool bVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  longlong *plVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  int iVar14;
  longlong *plVar15;
  longlong *plVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong *plVar19;
  longlong *local_res8;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  lVar7 = FWeakObjectPtr::Get(*param_1 + 0x5c8);
  if (lVar7 != 0) {
    lVar8 = FUN_14142a560();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      pwVar9 = _guard_xfg_dispatch_icall_nop(L"&UGFxExperienceBar::OnInputDeviceChanged",L"::");
      pwVar4 = (wchar_t *)0x0;
      while (pwVar3 = pwVar9, pwVar3 != (wchar_t *)0x0) {
        pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
        pwVar4 = pwVar3;
      }
      FName::FName(&local_res8,pwVar4 + 2,1);
      TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar7 + 0x5f8,*param_1,local_res8);
    }
  }
  lVar7 = FWeakObjectPtr::Get(*param_1 + 0x5d8);
  if (lVar7 != 0) {
    lVar8 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_1407665e0(lVar7 + 0x1830,*param_1);
      FUN_140483870(lVar7 + 0x1b10,*param_1);
    }
  }
  cVar5 = FWeakObjectPtr::IsValid(*param_1 + 0x828);
  if (cVar5 != '\0') {
    lVar7 = FWeakObjectPtr::Get(*param_1 + 0x828);
    FUN_1407665e0(lVar7 + 0x218,*param_1);
    lVar7 = FWeakObjectPtr::Get(*param_1 + 0x828);
    FUN_1407665e0(lVar7 + 0x208,*param_1);
  }
  lVar7 = *param_1;
  if (*(longlong *)(lVar7 + 0x820) != 0) {
    FUN_1407665e0(*(longlong *)(lVar7 + 0x820) + 0x48,lVar7);
    lVar7 = *param_1;
  }
  lVar8 = *(longlong *)(lVar7 + 0x730);
  if (lVar8 != 0) {
    FWeakObjectPtr::operator=(lVar8 + 0x2b8,0);
    local_res8 = (longlong *)0x0;
    *(undefined8 *)(lVar8 + 0x2c0) = 0;
    lVar7 = *param_1;
  }
  lVar8 = *(longlong *)(lVar7 + 2000);
  if (lVar8 != 0) {
    FWeakObjectPtr::operator=(lVar8 + 0x2b8,0);
    local_res8 = (longlong *)0x0;
    *(undefined8 *)(lVar8 + 0x2c0) = 0;
    lVar7 = *param_1;
  }
  lVar8 = *(longlong *)(lVar7 + 0x738);
  if (lVar8 != 0) {
    FWeakObjectPtr::operator=(lVar8 + 0x2b8,0);
    local_res8 = (longlong *)0x0;
    *(undefined8 *)(lVar8 + 0x2c0) = 0;
    lVar7 = *param_1;
  }
  cVar5 = FWeakObjectPtr::IsValid(lVar7 + 0x830);
  if (cVar5 != '\0') {
    lVar7 = FWeakObjectPtr::Get(*param_1 + 0x830);
    FUN_1407665e0(lVar7 + 0x230,*param_1);
  }
  plVar10 = (longlong *)FUN_140eccca0(*param_1);
  if (plVar10 != (longlong *)0x0) {
    uVar11 = AGFireballProjectile::GetPrivateStaticClass();
    lVar7 = (**(code **)(*plVar10 + 0x628))(plVar10,uVar11);
    if (lVar7 != 0) {
      uStack_80 = (ulonglong)(uint)uStack_80;
      local_88 = (longlong *)0x0;
      iVar14 = 0;
      if (&local_88 != (undefined8 *)(lVar7 + 0x550)) {
        uVar1 = *(uint *)(lVar7 + 0x558);
        _Src = *(void **)(lVar7 + 0x550);
        uStack_80 = (ulonglong)uVar1;
        iVar14 = 0;
        if (uVar1 != 0) {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_88,uVar1,0);
          _guard_xfg_dispatch_icall_nop(local_88,_Src,(longlong)(int)uVar1 << 3);
          iVar14 = (uint)uStack_80;
        }
      }
      plVar10 = local_88 + iVar14;
      plVar19 = local_88;
      local_res8 = plVar10;
      if (local_88 != plVar10) {
        do {
          uVar17 = 0;
          lVar7 = *plVar19;
          if (lVar7 != 0) {
            lVar8 = *param_1;
            if (*(int *)(lVar7 + 0x3c) < 1) {
              iVar14 = *(int *)(lVar7 + 0x30);
              uVar18 = uVar17;
              if (0 < iVar14) {
                do {
                  if ((((*(int *)(uVar17 + 8 + *(longlong *)(lVar7 + 0x28)) == 0) ||
                       (plVar10 = *(longlong **)(uVar17 + *(longlong *)(lVar7 + 0x28)),
                       plVar10 == (longlong *)0x0)) ||
                      (cVar5 = (**(code **)(*plVar10 + 8))(plVar10,lVar8), cVar5 != '\0')) ||
                     (cVar5 = (**(code **)(*plVar10 + 0x10))(plVar10), cVar5 != '\0')) {
                    TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(lVar7 + 0x28,uVar18,1);
                  }
                  else {
                    uVar18 = (ulonglong)((int)uVar18 + 1);
                    uVar17 = uVar17 + 0x10;
                  }
                  iVar14 = *(int *)(lVar7 + 0x30);
                  plVar10 = local_res8;
                } while ((int)uVar18 < iVar14);
              }
              iVar6 = iVar14 * 2;
              if (iVar6 < 3) {
                iVar6 = 2;
              }
              *(int *)(lVar7 + 0x38) = iVar6;
              if (*(int *)(lVar7 + 0x34) != iVar14) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeTo(lVar7 + 0x28);
                plVar10 = local_res8;
              }
            }
            else {
              plVar15 = *(longlong **)(lVar7 + 0x28);
              bVar2 = false;
              plVar16 = plVar15 + (longlong)*(int *)(lVar7 + 0x30) * 2;
              if (plVar15 != plVar16) {
                do {
                  if ((((int)plVar15[1] != 0) &&
                      (plVar10 = (longlong *)*plVar15, plVar10 != (longlong *)0x0)) &&
                     (cVar5 = (**(code **)(*plVar10 + 8))(plVar10,lVar8), cVar5 != '\0')) {
                    if (((int)plVar15[1] != 0) &&
                       (plVar10 = (longlong *)*plVar15, plVar10 != (longlong *)0x0)) {
                      (**(code **)(*plVar10 + 0x28))(plVar10,0);
                      if (*plVar15 != 0) {
                        lVar12 = FMemory::Realloc(*plVar15,0,0);
                        *plVar15 = lVar12;
                      }
                      *(undefined4 *)(plVar15 + 1) = 0;
                    }
                    bVar2 = true;
                  }
                  plVar15 = plVar15 + 2;
                } while (plVar15 != plVar16);
                plVar10 = local_res8;
                if (bVar2) {
                  *(undefined4 *)(lVar7 + 0x38) = 0;
                }
              }
            }
          }
          plVar19 = plVar19 + 1;
        } while (plVar19 != plVar10);
      }
      if (local_88 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
  }
  local_88 = (longlong *)*param_1;
  uStack_80 = (longlong)local_88 + 0x888;
  local_48 = 0;
  local_38 = 0;
  puVar13 = (undefined8 *)FUN_140438ef0(0x18,local_68);
  if (puVar13 != (undefined8 *)0x0) {
    *puVar13 = &PTR_FUN_143f77c18;
    *(undefined4 *)(puVar13 + 1) = (undefined4)local_88;
    *(undefined4 *)((longlong)puVar13 + 0xc) = local_88._4_4_;
    *(uint *)(puVar13 + 2) = (uint)uStack_80;
    *(undefined4 *)((longlong)puVar13 + 0x14) = uStack_80._4_4_;
  }
  local_78[0] = &LAB_140ee0fb0;
  FUN_14204c280(local_78);
  local_88 = (longlong *)*param_1;
  uStack_80 = (longlong)local_88 + 0x8a0;
  local_48 = 0;
  local_38 = 0;
  puVar13 = (undefined8 *)FUN_140438ef0(0x18,local_68);
  if (puVar13 != (undefined8 *)0x0) {
    *puVar13 = &PTR_FUN_143f77c18;
    *(undefined4 *)(puVar13 + 1) = (undefined4)local_88;
    *(undefined4 *)((longlong)puVar13 + 0xc) = local_88._4_4_;
    *(uint *)(puVar13 + 2) = (uint)uStack_80;
    *(undefined4 *)((longlong)puVar13 + 0x14) = uStack_80._4_4_;
  }
  local_78[0] = &LAB_140ee0fb0;
  FUN_14204c280(local_78);
  local_88 = (longlong *)*param_1;
  uStack_80 = (longlong)local_88 + 0x890;
  local_48 = 0;
  local_38 = 0;
  puVar13 = (undefined8 *)FUN_140438ef0(0x18,local_68);
  if (puVar13 != (undefined8 *)0x0) {
    *puVar13 = &PTR_FUN_143f77c18;
    *(undefined4 *)(puVar13 + 1) = (undefined4)local_88;
    *(undefined4 *)((longlong)puVar13 + 0xc) = local_88._4_4_;
    *(uint *)(puVar13 + 2) = (uint)uStack_80;
    *(undefined4 *)((longlong)puVar13 + 0x14) = uStack_80._4_4_;
  }
  local_78[0] = &LAB_140ee0fb0;
  FUN_14204c280(local_78);
  local_88 = (longlong *)*param_1;
  uStack_80 = (longlong)local_88 + 0x8a8;
  local_48 = 0;
  local_38 = 0;
  puVar13 = (undefined8 *)FUN_140438ef0(0x18,local_68);
  if (puVar13 != (undefined8 *)0x0) {
    *puVar13 = &PTR_FUN_143f77c18;
    *(undefined4 *)(puVar13 + 1) = (undefined4)local_88;
    *(undefined4 *)((longlong)puVar13 + 0xc) = local_88._4_4_;
    *(uint *)(puVar13 + 2) = (uint)uStack_80;
    *(undefined4 *)((longlong)puVar13 + 0x14) = uStack_80._4_4_;
  }
  local_78[0] = &LAB_140ee0fb0;
  FUN_14204c280(local_78);
  local_88 = (longlong *)*param_1;
  uStack_80 = (longlong)local_88 + 0x898;
  local_48 = 0;
  local_38 = 0;
  puVar13 = (undefined8 *)FUN_140438ef0(0x18,local_68);
  if (puVar13 != (undefined8 *)0x0) {
    *puVar13 = &PTR_FUN_143f77c18;
    *(undefined4 *)(puVar13 + 1) = (undefined4)local_88;
    *(undefined4 *)((longlong)puVar13 + 0xc) = local_88._4_4_;
    *(uint *)(puVar13 + 2) = (uint)uStack_80;
    *(undefined4 *)((longlong)puVar13 + 0x14) = uStack_80._4_4_;
  }
  local_78[0] = &LAB_140ee0fb0;
  FUN_14204c280(local_78);
  local_88 = (longlong *)*param_1;
  uStack_80 = (longlong)local_88 + 0x8b0;
  local_48 = 0;
  local_38 = 0;
  puVar13 = (undefined8 *)FUN_140438ef0(0x18,local_68);
  if (puVar13 != (undefined8 *)0x0) {
    *puVar13 = &PTR_FUN_143f77c18;
    *(undefined4 *)(puVar13 + 1) = (undefined4)local_88;
    *(undefined4 *)((longlong)puVar13 + 0xc) = local_88._4_4_;
    *(uint *)(puVar13 + 2) = (uint)uStack_80;
    *(undefined4 *)((longlong)puVar13 + 0x14) = uStack_80._4_4_;
  }
  local_78[0] = &LAB_140ee0fb0;
  FUN_14204c280(local_78);
  local_88 = (longlong *)*param_1;
  uStack_80 = (longlong)local_88 + 0x8c8;
  local_48 = 0;
  local_38 = 0;
  puVar13 = (undefined8 *)FUN_140438ef0(0x18,local_68);
  if (puVar13 != (undefined8 *)0x0) {
    *puVar13 = &PTR_FUN_143f77c18;
    *(undefined4 *)(puVar13 + 1) = (undefined4)local_88;
    *(undefined4 *)((longlong)puVar13 + 0xc) = local_88._4_4_;
    *(uint *)(puVar13 + 2) = (uint)uStack_80;
    *(undefined4 *)((longlong)puVar13 + 0x14) = uStack_80._4_4_;
  }
  local_78[0] = &LAB_140ee0fb0;
  FUN_14204c280(local_78);
  local_88 = (longlong *)*param_1;
  uStack_80 = (longlong)local_88 + 0x8d0;
  local_48 = 0;
  local_38 = 0;
  puVar13 = (undefined8 *)FUN_140438ef0(0x18,local_68);
  if (puVar13 != (undefined8 *)0x0) {
    *puVar13 = &PTR_FUN_143f77c18;
    *(undefined4 *)(puVar13 + 1) = (undefined4)local_88;
    *(undefined4 *)((longlong)puVar13 + 0xc) = local_88._4_4_;
    *(uint *)(puVar13 + 2) = (uint)uStack_80;
    *(undefined4 *)((longlong)puVar13 + 0x14) = uStack_80._4_4_;
  }
  local_78[0] = &LAB_140ee0fb0;
  FUN_14204c280(local_78);
  return;
}



// FUNCTION 140ede380 FUN_140ede380 body=378 status=ok
// SIG undefined FUN_140ede380(void)

void FUN_140ede380(longlong *param_1)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar2 != '\0') {
    lVar5 = FWeakObjectPtr::Get(&local_res10);
    iVar1 = *(int *)(lVar5 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar8 = iVar1 >> 0x1f & 0xffff;
      uVar4 = iVar1 + uVar8;
      lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar8) * 0x18;
    }
    else {
      lVar5 = 0;
    }
    if ((*(uint *)(lVar5 + 8) & 0x30000000) == 0) {
      FUN_142ecdac0(*param_1);
      lVar5 = FUN_1416f8720((int)param_1[2]);
      if (lVar5 != 0) {
        uVar6 = FUN_1416f8720((int)param_1[2]);
        uVar3 = FUN_142ebd9c0(*param_1);
        FUN_142f11000(uVar6,uVar3);
        lVar5 = FUN_1416f8720((int)param_1[2]);
        uVar3 = FUN_142ebd9c0(*param_1);
        *(undefined1 *)(lVar5 + 0xa3) = uVar3;
        cVar2 = FWeakObjectPtr::IsValid(*param_1 + 0x680);
        if (((cVar2 != '\0') &&
            (lVar5 = FWeakObjectPtr::Get(*param_1 + 0x680), *(longlong *)(lVar5 + 0x578) == 0)) &&
           (lVar5 = FWeakObjectPtr::Get(*param_1 + 0x680), *(longlong *)(lVar5 + 0x580) == 0)) {
          uVar6 = FUN_1416f8720((int)param_1[2]);
          uVar7 = FUN_1404b03b0();
          FUN_142ee25d0(uVar6,DAT_146871ff8,uVar7,1);
          uVar6 = FUN_1416f8720((int)param_1[2]);
          uVar7 = FUN_1404b03b0();
          FUN_142ee25d0(uVar6,DAT_146871ff0,uVar7,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140ede500 FUN_140ede500 body=467 status=ok
// SIG undefined FUN_140ede500(void)

void FUN_140ede500(longlong *param_1)

{
  int iVar1;
  bool bVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  int *piVar9;
  int *piVar10;
  longlong *plVar11;
  longlong local_res10;
  int local_28;
  int local_24;
  longlong local_20;
  
  lVar6 = FWeakObjectPtr::Get(*param_1 + 0x5c8);
  if (lVar6 != 0) {
    lVar7 = FUN_14142a560();
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
      pwVar8 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::PlayCheckpointAnimation",L"::");
      pwVar4 = (wchar_t *)0x0;
      while (pwVar3 = pwVar8, pwVar3 != (wchar_t *)0x0) {
        pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
        pwVar4 = pwVar3;
      }
      FName::FName(&local_res10,pwVar4 + 2,1);
      lVar7 = *param_1;
      plVar11 = (longlong *)(lVar6 + 0x798);
      FWeakObjectPtr::operator=(&local_28,0);
      local_20 = 0;
      FWeakObjectPtr::operator=(&local_28,lVar7);
      local_20 = local_res10;
      if ((local_res10 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_28), lVar7 != 0)) {
        UObject::FindFunction(lVar7,local_20);
      }
      piVar9 = (int *)*plVar11;
      iVar1 = *(int *)(lVar6 + 0x7a0);
      for (piVar10 = piVar9; piVar10 != piVar9 + (longlong)iVar1 * 4; piVar10 = piVar10 + 4) {
        if (((*piVar10 == local_28) && (piVar10[1] == local_24)) ||
           ((cVar5 = FWeakObjectPtr::IsValid(piVar10), cVar5 == '\0' &&
            (cVar5 = FWeakObjectPtr::IsValid(&local_28), cVar5 == '\0')))) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if ((bVar2) && (*(longlong *)(piVar10 + 2) == local_20)) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if (bVar2) {
          if ((int)((longlong)piVar10 - (longlong)piVar9 >> 4) != -1) goto LAB_140ede6ba;
          break;
        }
      }
      iVar1 = *(int *)(lVar6 + 0x7a0);
      *(int *)(lVar6 + 0x7a0) = iVar1 + 1;
      if (*(int *)(lVar6 + 0x7a4) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar11,iVar1);
      }
      piVar9 = (int *)((longlong)iVar1 * 0x10 + *plVar11);
      *piVar9 = local_28;
      piVar9[1] = local_24;
      *(longlong *)(piVar9 + 2) = local_20;
LAB_140ede6ba:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar11);
    }
  }
  return;
}



// FUNCTION 140ede6e0 FUN_140ede6e0 body=724 status=ok
// SIG undefined FUN_140ede6e0(void)

void FUN_140ede6e0(longlong *param_1)

{
  bool bVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar12;
  ulonglong uVar11;
  
  uVar2 = FWeakObjectPtr::Get(*param_1 + 0x5d8);
  uVar12 = 0;
  uVar9 = uVar12;
  uVar4 = uVar12;
  if (uVar2 != 0) {
    lVar3 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(uVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar4 = FUN_140cff230(uVar2);
      uVar9 = uVar2;
    }
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar3 = *(longlong *)(DAT_146b33f38 + 0xe0);
  if (lVar3 != 0) {
    lVar7 = lVar3 + 0x120;
    lVar5 = FWeakObjectPtr::Get(lVar7);
    if (lVar5 == 0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 != *(int *)(lVar3 + 0x128)) && (*(longlong *)(lVar3 + 0x130) != 0)) {
        lVar5 = FUN_141796df0();
        FWeakObjectPtr::operator=(lVar7,lVar5);
        if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(lVar3 + 0x128) = DAT_1464b56f4;
        }
        lVar5 = FWeakObjectPtr::Get(lVar7);
        if (lVar5 != 0) goto LAB_140ede801;
      }
    }
    else {
LAB_140ede801:
      lVar6 = FUN_1414d02a0();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        uVar2 = FWeakObjectPtr::Get(lVar7);
        if (uVar2 == 0) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          if ((DAT_1464b56f4 != *(int *)(lVar3 + 0x128)) && (*(longlong *)(lVar3 + 0x130) != 0)) {
            lVar5 = FUN_141796df0();
            FWeakObjectPtr::operator=(lVar7,lVar5);
            if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
              LOCK();
              if (DAT_1464b56f4 == 0) {
                DAT_1464b56f4 = 0;
              }
              UNLOCK();
              *(int *)(lVar3 + 0x128) = DAT_1464b56f4;
            }
            uVar2 = FWeakObjectPtr::Get(lVar7);
            if (uVar2 != 0) goto LAB_140ede8ab;
          }
        }
        else {
LAB_140ede8ab:
          lVar7 = FUN_1414d02a0();
          if ((*(int *)(*(longlong *)(uVar2 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(uVar2 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) goto LAB_140ede8e4;
        }
      }
    }
  }
  uVar2 = uVar12;
LAB_140ede8e4:
  if ((((uVar9 != 0) && (lVar3 != 0)) && (uVar2 != 0)) && (uVar4 != 0)) {
    uVar11 = uVar12;
    if (0 < *(int *)(uVar2 + 0x38)) {
      do {
        FUN_1414608a0(uVar9,uVar11);
        uVar10 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar10;
      } while ((int)uVar10 < *(int *)(uVar2 + 0x38));
    }
    if (0 < *(int *)(uVar2 + 0x48)) {
      do {
        FUN_1414608e0(uVar9,uVar12);
        uVar10 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar10;
      } while ((int)uVar10 < *(int *)(uVar2 + 0x48));
    }
    iVar8 = *(int *)(uVar4 + 0x234) + -1;
    if (iVar8 != -1) {
      if ((iVar8 < 0) || (*(int *)(uVar2 + 0x38) <= iVar8)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        FUN_14145fec0(uVar9,iVar8,*(undefined4 *)(uVar4 + 0x238));
      }
    }
    iVar8 = *(int *)(uVar4 + 0x240) + -1;
    if (iVar8 != -1) {
      if ((iVar8 < 0) || (*(int *)(uVar2 + 0x48) <= iVar8)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        FUN_14145ff10(uVar9,iVar8,*(undefined4 *)(uVar4 + 0x244));
      }
    }
  }
  return;
}



// FUNCTION 140ede9c0 FUN_140ede9c0 body=150 status=ok
// SIG undefined FUN_140ede9c0(void)

void FUN_140ede9c0(longlong param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
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
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar5;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) & 0x30000000) == 0) {
      FUN_140eddcc0(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 140edeb00 FUN_140edeb00 body=65 status=ok
// SIG undefined FUN_140edeb00(void)

undefined8 * FUN_140edeb00(undefined8 *param_1,ulonglong param_2)

{
  FUN_1416f8340(*(undefined4 *)((longlong)param_1 + 0x1c));
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 140edeb50 `scalar_deleting_destructor' body=72 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FAutoDeleteAsyncTask<FAsyncSHAVerify>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 140edeba0 FUN_140edeba0 body=65 status=ok
// SIG undefined FUN_140edeba0(void)

undefined8 * FUN_140edeba0(undefined8 *param_1,ulonglong param_2)

{
  FUN_1416f8340(*(undefined4 *)(param_1 + 3));
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 140edebf0 FUN_140edebf0 body=72 status=ok
// SIG undefined FUN_140edebf0(void)

undefined8 * FUN_140edebf0(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 140edec40 `scalar_deleting_destructor' body=134 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
UE4Function_Private::TFunction_CopyableOwnedObject<<lambda_4e20d74a97275c057e8f6c19a689803f>_>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)param_1[3];
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
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 140edecd0 FUN_140edecd0 body=73 status=ok
// SIG undefined FUN_140edecd0(void)

undefined8 * FUN_140edecd0(undefined8 *param_1,ulonglong param_2)

{
  FUN_1416f8340(*(undefined4 *)((longlong)param_1 + 0x14));
  FUN_1416f8340(*(undefined4 *)(param_1 + 2));
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 140eded20 FUN_140eded20 body=81 status=ok
// SIG undefined FUN_140eded20(void)

undefined8 * FUN_140eded20(undefined8 *param_1,ulonglong param_2)

{
  FUN_1416f8340(*(undefined4 *)(param_1 + 3));
  FUN_1416f8340(*(undefined4 *)((longlong)param_1 + 0x14));
  FUN_1416f8340(*(undefined4 *)(param_1 + 2));
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 140eded80 FUN_140eded80 body=86 status=ok
// SIG undefined FUN_140eded80(void)

undefined8 * FUN_140eded80(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 140edede0 FUN_140edede0 body=65 status=ok
// SIG undefined FUN_140edede0(void)

undefined8 * FUN_140edede0(undefined8 *param_1,ulonglong param_2)

{
  FUN_1416f8340(*(undefined4 *)((longlong)param_1 + 0x14));
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 140edee30 FUN_140edee30 body=65 status=ok
// SIG undefined FUN_140edee30(void)

undefined8 * FUN_140edee30(undefined8 *param_1,ulonglong param_2)

{
  FUN_1416f8340(*(undefined4 *)(param_1 + 2));
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 140edee80 FUN_140edee80 body=72 status=ok
// SIG undefined FUN_140edee80(void)

undefined8 * FUN_140edee80(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 140edeed0 FUN_140edeed0 body=72 status=ok
// SIG undefined FUN_140edeed0(void)

undefined8 * FUN_140edeed0(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 140edef20 FUN_140edef20 body=74 status=ok
// SIG undefined FUN_140edef20(void)

undefined8 * FUN_140edef20(undefined8 *param_1,ulonglong param_2)

{
  FUN_1416f8340(*(undefined4 *)(param_1 + 0xe));
  FUN_140ed0490(param_1 + 3);
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 140edef70 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FTextRenderSceneProxy::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1423c53e0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x800);
  }
  return param_1;
}



// FUNCTION 140edefb0 FUN_140edefb0 body=359 status=ok
// SIG undefined FUN_140edefb0(void)

int FUN_140edefb0(longlong *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + param_2;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + param_2) {
    TArray<FTTLMissionBriefingParamRow,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
  }
  lVar3 = (longlong)iVar1 * 0x110 + *param_1;
  if (param_2 != 0) {
    puVar4 = (undefined8 *)(lVar3 + 0x88);
    do {
      uVar2 = FUN_1404b03b0();
      FText::FText(lVar3,uVar2);
      *(undefined4 *)(puVar4 + -0xe) = 0;
      uVar2 = FUN_1404b03b0();
      FText::FText(puVar4 + -0xd,uVar2);
      FText::FText(puVar4 + -10);
      *(undefined4 *)(puVar4 + -7) = 0;
      *(undefined4 *)((longlong)puVar4 + -0x34) = 0x1000000;
      *(undefined2 *)(puVar4 + -6) = 0;
      *(undefined1 *)((longlong)puVar4 + -0x2e) = 0;
      *(undefined4 *)((longlong)puVar4 + -0x2c) = 0xffffffff;
      *(undefined4 *)(puVar4 + -5) = 0;
      puVar4[-1] = 0;
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + -4) = 0xffffffff;
      *(undefined4 *)((longlong)puVar4 + -0x1c) = 0;
      puVar4[-2] = 0;
      *(undefined4 *)puVar4 = 0;
      if (0x7fffffff < *(uint *)((longlong)puVar4 + 4)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar4 + -1,0);
      }
      if ((undefined2 *)puVar4[-1] != (undefined2 *)0x0) {
        *(undefined2 *)puVar4[-1] = 0;
      }
      *(undefined4 *)(puVar4 + -3) = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      FUN_142fde510(puVar4 + 2);
      puVar4[10] = 0xffffffffffffffff;
      lVar3 = lVar3 + 0x110;
      *(undefined4 *)(puVar4 + 0xb) = 0;
      *(undefined4 *)((longlong)puVar4 + 0x5c) = 0xffffffff;
      *(undefined4 *)(puVar4 + 0xc) = 0;
      *(undefined4 *)((longlong)puVar4 + 100) = 0xffffffff;
      *(undefined4 *)(puVar4 + 0xd) = 0;
      *(undefined4 *)((longlong)puVar4 + 0x6c) = 0xffffffff;
      *(undefined4 *)(puVar4 + 0xe) = 0;
      puVar4[0xf] = 0;
      *(undefined4 *)(puVar4 + 0x10) = 0;
      *(undefined1 *)((longlong)puVar4 + 0x84) = 1;
      puVar4 = puVar4 + 0x22;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return iVar1;
}



// FUNCTION 140edf120 FUN_140edf120 body=476 status=ok
// SIG undefined FUN_140edf120(void)

void FUN_140edf120(longlong param_1,undefined8 param_2,longlong param_3,int param_4)

{
  bool bVar1;
  char cVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int local_res20 [2];
  undefined1 local_138 [272];
  ulonglong uVar7;
  
  if ((param_4 < 0) || (*(int *)(param_1 + 0x168) <= param_4)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  uVar3 = 0;
  iVar8 = param_4;
  if ((!bVar1) && (uVar7 = uVar3, 0 < *(int *)(param_1 + 0x168))) {
    do {
      iVar6 = (int)uVar7;
      lVar9 = (longlong)iVar6 * 0x110 + *(longlong *)(param_1 + 0x160);
      cVar2 = FWeakObjectPtr::IsValid(lVar9 + 0xdc);
      if ((cVar2 == '\0') && (cVar2 = FWeakObjectPtr::IsValid(lVar9 + 0x5c), cVar2 == '\0')) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      iVar8 = iVar6;
    } while ((!bVar1) &&
            (uVar7 = (ulonglong)(iVar6 + 1U), iVar8 = param_4,
            (int)(iVar6 + 1U) < *(int *)(param_1 + 0x168)));
  }
  if ((iVar8 < 0) || (*(int *)(param_1 + 0x168) <= iVar8)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    lVar9 = *(longlong *)(param_1 + 0x160);
    lVar10 = (longlong)iVar8 * 0x110;
    local_res20[0] = *(int *)(lVar10 + 0xd8 + lVar9);
    if (param_3 != 0) {
      uVar3 = FUN_142fffe20(param_3,param_2);
      lVar9 = *(longlong *)(param_1 + 0x160);
    }
    uVar4 = FUN_1411e38c0(local_138,uVar3,param_3);
    FUN_140e9ca30(lVar10 + lVar9,uVar4);
    FUN_140e9c360(local_138);
    plVar5 = (longlong *)FUN_142eb6a30(*(undefined8 *)(param_1 + 0x170),iVar8);
    if (plVar5 != (longlong *)0x0) {
      lVar9 = FUN_141324a80();
      if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
          lVar9 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        (**(code **)(*plVar5 + 0x330))(plVar5,*(longlong *)(param_1 + 0x160) + lVar10);
        (**(code **)(*plVar5 + 0x3c0))(plVar5);
      }
    }
    if ((param_4 != -1) && (local_res20[0] != -1)) {
      FUN_140edf120(param_1,local_res20,param_3,0xffffffff);
    }
  }
  return;
}



// FUNCTION 140edf300 FUN_140edf300 body=626 status=ok
// SIG undefined FUN_140edf300(void)

void FUN_140edf300(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *local_48;
  int local_40;
  undefined8 local_38;
  int iStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  local_38 = (longlong *)&LAB_1404c20fc;
  iStack_30 = 0;
  local_48 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30,0);
  local_40 = 3;
  local_48 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_FUN_143fcfec0;
    FWeakObjectPtr::operator=(plVar1 + 1,param_1);
    *(undefined4 *)(plVar1 + 2) = (undefined4)local_38;
    *(undefined4 *)((longlong)plVar1 + 0x14) = local_38._4_4_;
    *(int *)(plVar1 + 3) = iStack_30;
    *(undefined4 *)((longlong)plVar1 + 0x1c) = uStack_2c;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[5] = lVar2;
    *plVar1 = (longlong)&PTR_FUN_143fcff08;
  }
  FUN_142ee1c00(param_1,PTR_s_rollOver_14629d7d8,param_1 + 0x2c8,&local_48);
  if (local_40 == 0) {
LAB_140edf3db:
    if (local_48 != (longlong *)0x0) {
      FMemory::Free(local_48);
    }
  }
  else if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x28))(local_48,0);
    if (local_48 != (longlong *)0x0) {
      local_48 = (longlong *)FMemory::Realloc(local_48,0,0);
    }
    local_40 = 0;
    goto LAB_140edf3db;
  }
  uStack_20 = 0;
  local_38 = (longlong *)0x0;
  local_28 = &LAB_140edeadc;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  iStack_30 = 3;
  local_38 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_FUN_143fcfec0;
    FWeakObjectPtr::operator=(plVar1 + 1,param_1);
    *(undefined4 *)(plVar1 + 2) = (undefined4)local_28;
    *(undefined4 *)((longlong)plVar1 + 0x14) = local_28._4_4_;
    *(undefined4 *)(plVar1 + 3) = uStack_20;
    *(undefined4 *)((longlong)plVar1 + 0x1c) = uStack_1c;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[5] = lVar2;
    *plVar1 = (longlong)&PTR_FUN_143fcff08;
  }
  FUN_142ee1c00(param_1,PTR_s_rollOut_14629d7d0,param_1 + 0x2d0,&local_38);
  if (iStack_30 != 0) {
    if (local_38 == (longlong *)0x0) goto LAB_140edf49e;
    (**(code **)(*local_38 + 0x28))(local_38,0);
    if (local_38 != (longlong *)0x0) {
      local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
    }
    iStack_30 = 0;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
LAB_140edf49e:
  uStack_20 = 0;
  local_48 = (longlong *)0x0;
  local_28 = &LAB_14099be60;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_40 = 3;
  local_48 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_FUN_143fcfec0;
    FWeakObjectPtr::operator=(plVar1 + 1,param_1);
    *(undefined4 *)(plVar1 + 2) = (undefined4)local_28;
    *(undefined4 *)((longlong)plVar1 + 0x14) = local_28._4_4_;
    *(undefined4 *)(plVar1 + 3) = uStack_20;
    *(undefined4 *)((longlong)plVar1 + 0x1c) = uStack_1c;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[5] = lVar2;
    *plVar1 = (longlong)&PTR_FUN_143fcff08;
  }
  FUN_142ee1c00(param_1,PTR_s_click_14629d748,param_1 + 0x2d8,&local_48);
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
  return;
}



// FUNCTION 140edf580 FUN_140edf580 body=127 status=ok
// SIG undefined FUN_140edf580(void)

void FUN_140edf580(longlong param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x635) != '\0') {
    FUN_140f0b100();
    *(undefined1 *)(param_1 + 0x635) = 0;
    return;
  }
  cVar1 = *(char *)(param_1 + 0x634);
  if (cVar1 != '\x02') {
    if (cVar1 == '\x03') {
      *(int *)(param_1 + 0x638) = *(int *)(param_1 + 0x638) + -1;
      if (*(int *)(param_1 + 0x638) < 1) {
        FUN_140f0b100(param_1,4);
        return;
      }
    }
    else if (cVar1 == '\x04') {
      FUN_140f0b100(param_1,1);
      return;
    }
    return;
  }
  FUN_140f0b100(param_1,3);
  return;
}



// FUNCTION 140edf600 FUN_140edf600 body=2951 status=ok
// SIG undefined FUN_140edf600(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140edf600(longlong param_1)

{
  char *pcVar1;
  undefined1 uVar2;
  byte *pbVar3;
  void *_Src;
  bool bVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  byte *pbVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  byte *pbVar13;
  byte *pbVar14;
  undefined4 uVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  byte *pbVar19;
  undefined1 auStack_2b8 [32];
  undefined4 local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined2 local_28c [2];
  undefined4 local_288;
  undefined4 local_284;
  void *local_280;
  int local_278;
  undefined4 local_274;
  undefined8 local_270;
  longlong local_268;
  undefined8 local_260;
  longlong local_258;
  undefined8 local_250;
  longlong local_248;
  undefined8 local_240;
  longlong local_238;
  code *local_228 [2];
  longlong local_218 [4];
  longlong *local_1f8;
  int local_1e8;
  undefined1 *local_1d8 [2];
  longlong local_1c8 [4];
  longlong *local_1a8;
  int local_198;
  code *local_188 [2];
  longlong local_178 [4];
  longlong *local_158;
  int local_148;
  undefined1 local_138 [16];
  longlong local_128 [4];
  longlong *local_108;
  int local_f8;
  undefined1 local_e8 [16];
  longlong local_d8 [4];
  longlong *local_b8;
  int local_a8;
  undefined1 local_98 [16];
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_2b8;
  if (*(char *)(param_1 + 0x65c) != '\0') {
    if (*(char *)(param_1 + 0x65b) != *(char *)(param_1 + 0x65a)) {
      *(char *)(param_1 + 0x65a) = *(char *)(param_1 + 0x65b);
    }
    if (*(char *)(param_1 + 0x65c) != '\0') {
      *(undefined1 *)(param_1 + 0x65c) = 0;
    }
  }
  if ((*(char *)(param_1 + 0x65a) != '\0') && (local_28c != (undefined2 *)(param_1 + 0x649))) {
    *(undefined2 *)(param_1 + 0x649) = 0x100;
  }
  pbVar19 = (byte *)0x0;
  if (*(char *)(param_1 + 0x6d8) != '\0') {
    FUN_140f07e50((undefined4 *)(param_1 + 0x6d0));
    local_288 = 0xffffffff;
    uVar7 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x6d0));
    FUN_14170c210(&local_288,uVar7);
    lVar8 = FUN_1416f8720(local_288);
    FUN_1416f8340(local_288);
    lVar12 = *(longlong *)(param_1 + 0x718);
    if (lVar12 != 0) {
      if (lVar8 != 0) {
        pbVar13 = *(byte **)(lVar12 + 0x10);
        pbVar14 = pbVar19;
        if (*(longlong *)(lVar8 + 0x40) != 0) {
          pbVar9 = (byte *)FUN_1428dfc70();
          for (pbVar3 = *(byte **)(lVar8 + 0x40);
              (pbVar14 = pbVar19, pbVar3 != (byte *)0x0 &&
              (pbVar14 = *(byte **)(lVar8 + 0x40), pbVar3 != pbVar9));
              pbVar3 = *(byte **)(pbVar3 + 0x30)) {
          }
        }
        if (pbVar13 == pbVar14) goto LAB_140edf820;
        lVar12 = *(longlong *)(param_1 + 0x718);
      }
      local_298 = 0xffffffff;
      uVar15 = 0xffffffff;
      if (lVar12 != 0) {
        FUN_14170c210(&local_298);
        uVar15 = local_298;
      }
      local_298 = 0xffffffff;
      local_1f8 = (longlong *)0x0;
      local_1e8 = 0;
      local_284 = uVar15;
      puVar10 = (undefined8 *)FUN_140438ef0(0x10,local_218);
      if (puVar10 != (undefined8 *)0x0) {
        *puVar10 = &PTR_FUN_1444f8758;
        *(undefined4 *)(puVar10 + 1) = uVar15;
        uVar15 = 0xffffffff;
        local_284 = 0xffffffff;
      }
      local_228[0] = FUN_140ee0b90;
      uVar7 = FUN_1420849a0(param_1,local_138,local_228);
      FUN_14208c260(param_1,uVar7);
      if (local_f8 != 0) {
        plVar18 = local_128;
        if (local_108 != (longlong *)0x0) {
          plVar18 = local_108;
        }
        if (plVar18 != (longlong *)0x0) {
          (**(code **)(*plVar18 + 0x10))(plVar18,0);
        }
      }
      if (local_108 != (longlong *)0x0) {
        FMemory::Free();
      }
      if (local_1e8 != 0) {
        plVar18 = local_218;
        if (local_1f8 != (longlong *)0x0) {
          plVar18 = local_1f8;
        }
        if (plVar18 != (longlong *)0x0) {
          (**(code **)(*plVar18 + 0x10))(plVar18,0);
        }
      }
      if (local_1f8 != (longlong *)0x0) {
        FMemory::Free();
      }
      FUN_1416f8340(uVar15);
      FUN_1416f8340(local_298);
      *(undefined8 *)(param_1 + 0x718) = 0;
    }
LAB_140edf820:
    if (lVar8 != 0) {
      if ((*(longlong *)(param_1 + 0x718) == 0) && (*(longlong *)(lVar8 + 0x40) != 0)) {
        lVar11 = FUN_1428dfc70();
        for (lVar12 = *(longlong *)(lVar8 + 0x40); lVar12 != 0;
            lVar12 = *(longlong *)(lVar12 + 0x30)) {
          if (lVar12 == lVar11) {
            if (*(longlong *)(lVar8 + 0x40) != 0) {
              local_294 = 0xffffffff;
              FUN_14170c210(&local_294,lVar8);
              uVar15 = local_294;
              local_294 = 0xffffffff;
              local_1a8 = (longlong *)0x0;
              local_198 = 0;
              puVar10 = (undefined8 *)FUN_140438ef0(0x18,local_1c8);
              if (puVar10 != (undefined8 *)0x0) {
                *puVar10 = &PTR_FUN_144266c70;
                puVar10[1] = param_1;
                *(undefined4 *)(puVar10 + 2) = uVar15;
                uVar15 = 0xffffffff;
              }
              local_1d8[0] = &LAB_140ee0ea0;
              uVar7 = FUN_1420849a0(param_1,local_e8,local_1d8);
              FUN_14208c260(param_1,uVar7);
              if (local_a8 != 0) {
                plVar18 = local_d8;
                if (local_b8 != (longlong *)0x0) {
                  plVar18 = local_b8;
                }
                if (plVar18 != (longlong *)0x0) {
                  (**(code **)(*plVar18 + 0x10))(plVar18,0);
                }
              }
              if (local_b8 != (longlong *)0x0) {
                FMemory::Free();
              }
              if (local_198 != 0) {
                plVar18 = local_1c8;
                if (local_1a8 != (longlong *)0x0) {
                  plVar18 = local_1a8;
                }
                if (plVar18 != (longlong *)0x0) {
                  (**(code **)(*plVar18 + 0x10))(plVar18,0);
                }
              }
              if (local_1a8 != (longlong *)0x0) {
                FMemory::Free();
              }
              FUN_1416f8340(uVar15);
              FUN_1416f8340(local_294);
            }
            break;
          }
        }
      }
      if (*(char *)(param_1 + 0x640) == '\0') {
        *(undefined1 *)(param_1 + 0x6f0) = *(undefined1 *)(lVar8 + 0x48);
        *(undefined1 *)(param_1 + 0x6f1) = *(undefined1 *)(lVar8 + 0x49);
      }
    }
  }
  if ((*(longlong *)(param_1 + 0x718) != 0) && (*(char *)(param_1 + 0x64d) != '\0')) {
    if (*(char *)(param_1 + 0x64c) != *(char *)(param_1 + 0x64b)) {
      *(char *)(param_1 + 0x64b) = *(char *)(param_1 + 0x64c);
    }
    if (*(char *)(param_1 + 0x64d) != '\0') {
      *(undefined1 *)(param_1 + 0x64d) = 0;
    }
    uVar2 = *(undefined1 *)(param_1 + 0x64b);
    local_290 = 0xffffffff;
    uVar15 = 0xffffffff;
    if (*(longlong *)(param_1 + 0x718) != 0) {
      FUN_14170c210(&local_290);
      uVar15 = local_290;
    }
    local_290 = 0xffffffff;
    local_158 = (longlong *)0x0;
    local_148 = 0;
    puVar10 = (undefined8 *)FUN_140438ef0(0x18,local_178);
    if (puVar10 != (undefined8 *)0x0) {
      *puVar10 = &PTR_FUN_144605c98;
      puVar10[1] = param_1;
      *(undefined4 *)(puVar10 + 2) = uVar15;
      uVar15 = 0xffffffff;
      *(undefined1 *)((longlong)puVar10 + 0x14) = uVar2;
    }
    local_188[0] = FUN_140ee07a0;
    uVar7 = FUN_1420849a0(param_1,local_98,local_188);
    FUN_14208c260(param_1,uVar7);
    if (local_58 != 0) {
      plVar18 = local_88;
      if (local_68 != (longlong *)0x0) {
        plVar18 = local_68;
      }
      if (plVar18 != (longlong *)0x0) {
        (**(code **)(*plVar18 + 0x10))(plVar18,0);
      }
    }
    if (local_68 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_148 != 0) {
      plVar18 = local_178;
      if (local_158 != (longlong *)0x0) {
        plVar18 = local_158;
      }
      if (plVar18 != (longlong *)0x0) {
        (**(code **)(*plVar18 + 0x10))(plVar18,0);
      }
    }
    if (local_158 != (longlong *)0x0) {
      FMemory::Free();
    }
    FUN_1416f8340(uVar15);
    FUN_1416f8340(local_290);
  }
  puVar10 = (undefined8 *)(param_1 + 0x660);
  cVar5 = FUN_140eeae50(puVar10);
  if ((cVar5 == '\0') &&
     ((*(char *)(param_1 + 0x6ca) == '\0' ||
      (*(char *)(param_1 + 0x6c9) == *(char *)(param_1 + 0x6c8))))) {
    if (*(char *)(param_1 + 0x6d8) != '\0') {
      lVar12 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x6d4));
      lVar8 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x6d0));
      if (lVar12 != lVar8) goto LAB_140edfb38;
    }
    bVar4 = false;
  }
  else {
LAB_140edfb38:
    bVar4 = true;
  }
  cVar5 = FUN_140eeae50(puVar10);
  FUN_140f07ed0(puVar10);
  if (*(char *)(param_1 + 0x6ca) != '\0') {
    if (*(char *)(param_1 + 0x6c9) != *(char *)(param_1 + 0x6c8)) {
      *(char *)(param_1 + 0x6c8) = *(char *)(param_1 + 0x6c9);
    }
    if (*(char *)(param_1 + 0x6ca) != '\0') {
      *(undefined1 *)(param_1 + 0x6ca) = 0;
    }
  }
  FUN_140f07e50(param_1 + 0x6d0);
  if (*(char *)(param_1 + 0x656) != '\0') {
    if (*(char *)(param_1 + 0x655) != *(char *)(param_1 + 0x654)) {
      *(char *)(param_1 + 0x654) = *(char *)(param_1 + 0x655);
    }
    if (*(char *)(param_1 + 0x656) != '\0') {
      *(undefined1 *)(param_1 + 0x656) = 0;
    }
  }
  if (*(char *)(param_1 + 0x650) != '\0') {
    if (*(char *)(param_1 + 0x64f) != *(char *)(param_1 + 0x64e)) {
      *(char *)(param_1 + 0x64e) = *(char *)(param_1 + 0x64f);
    }
    if (*(char *)(param_1 + 0x650) != '\0') {
      *(undefined1 *)(param_1 + 0x650) = 0;
    }
  }
  if (cVar5 != '\0') {
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x670));
    local_278 = *(int *)(param_1 + 0x668);
    lVar12 = (longlong)local_278;
    _Src = (void *)*puVar10;
    local_280 = (void *)0x0;
    if (local_278 == 0) {
      local_274 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_280,local_278,0);
      _guard_xfg_dispatch_icall_nop(local_280,_Src,lVar12 * 2);
    }
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x670));
    FUN_140ee10d0(param_1,&local_280);
    if (local_280 != (void *)0x0) {
      FMemory::Free();
    }
  }
  if (*(longlong *)(param_1 + 0x828) == 0) {
    return;
  }
  pcVar1 = (char *)(param_1 + 0x648);
  if ((bVar4) || ((*(char *)(param_1 + 0x64a) != '\0' && (*(char *)(param_1 + 0x649) != *pcVar1))))
  {
    if (*(char *)(param_1 + 0x64a) != '\0') {
      if (*(char *)(param_1 + 0x649) != *pcVar1) {
        *pcVar1 = *(char *)(param_1 + 0x649);
      }
      if (*(char *)(param_1 + 0x64a) != '\0') {
        *(undefined1 *)(param_1 + 0x64a) = 0;
      }
    }
    FUN_142056670(*(undefined8 *)(param_1 + 0x828),*pcVar1);
    if (*(longlong *)(param_1 + 0x858) != 0) {
      FUN_142056670(*(longlong *)(param_1 + 0x858),*pcVar1);
    }
    if (*(longlong *)(param_1 + 0x838) != 0) {
      FUN_142056670(*(longlong *)(param_1 + 0x838),*pcVar1);
    }
    if (*(longlong *)(param_1 + 0x848) != 0) {
      FUN_142056670(*(longlong *)(param_1 + 0x848),*pcVar1);
    }
  }
  if (*pcVar1 == '\0') {
LAB_140ee00f7:
    if (bVar4) goto LAB_140ee0114;
  }
  else {
    if ((bVar4) ||
       ((*(char *)(param_1 + 0x653) != '\0' &&
        (*(char *)(param_1 + 0x652) != *(char *)(param_1 + 0x651))))) {
      if (*(char *)(param_1 + 0x653) != '\0') {
        if (*(char *)(param_1 + 0x652) != *(char *)(param_1 + 0x651)) {
          *(char *)(param_1 + 0x651) = *(char *)(param_1 + 0x652);
        }
        if (*(char *)(param_1 + 0x653) != '\0') {
          *(undefined1 *)(param_1 + 0x653) = 0;
        }
      }
      plVar18 = *(longlong **)(param_1 + 0x7f8);
      cVar5 = *(char *)(param_1 + 0x651);
      plVar16 = plVar18 + (longlong)*(int *)(param_1 + 0x800) * 2;
      for (; plVar18 != plVar16; plVar18 = plVar18 + 2) {
        if (*plVar18 != 0) {
          iVar6 = FUN_142039580();
          if (cVar5 == '\0') {
            if (iVar6 != 1) {
              FUN_14203e3e0(*plVar18,1);
            }
          }
          else if (iVar6 == 1) {
            FUN_14203dd70(*plVar18,2);
          }
        }
      }
    }
    if (*(longlong *)(param_1 + 0x828) == 0) {
LAB_140edfeb0:
      if (!bVar4) goto LAB_140edfeb5;
LAB_140edfecf:
      if (*(char *)(param_1 + 0x6a0) != '\0') {
        if (*(float *)(param_1 + 0x69c) != *(float *)(param_1 + 0x698)) {
          *(float *)(param_1 + 0x698) = *(float *)(param_1 + 0x69c);
        }
        if (*(char *)(param_1 + 0x6a0) != '\0') {
          *(undefined1 *)(param_1 + 0x6a0) = 0;
        }
      }
      local_270 = *(undefined8 *)(param_1 + 0x838);
      uVar15 = *(undefined4 *)(param_1 + 0x698);
      local_268 = *(longlong *)(param_1 + 0x840);
      if (local_268 != 0) {
        LOCK();
        *(int *)(local_268 + 8) = *(int *)(local_268 + 8) + 1;
        UNLOCK();
      }
      FUN_140f08380(&local_270,uVar15);
      if (!bVar4) goto LAB_140edff36;
LAB_140edff50:
      if (*(char *)(param_1 + 0x6b8) != '\0') {
        if (*(float *)(param_1 + 0x6b4) != *(float *)(param_1 + 0x6b0)) {
          *(float *)(param_1 + 0x6b0) = *(float *)(param_1 + 0x6b4);
        }
        if (*(char *)(param_1 + 0x6b8) != '\0') {
          *(undefined1 *)(param_1 + 0x6b8) = 0;
        }
      }
      local_260 = *(undefined8 *)(param_1 + 0x848);
      uVar15 = *(undefined4 *)(param_1 + 0x6b0);
      local_258 = *(longlong *)(param_1 + 0x850);
      if (local_258 != 0) {
        LOCK();
        *(int *)(local_258 + 8) = *(int *)(local_258 + 8) + 1;
        UNLOCK();
      }
      FUN_140f08380(&local_260,uVar15);
      if (!bVar4) goto LAB_140edffb7;
LAB_140edffd1:
      if (*(char *)(param_1 + 0x6ac) != '\0') {
        if (*(float *)(param_1 + 0x6a8) != *(float *)(param_1 + 0x6a4)) {
          *(float *)(param_1 + 0x6a4) = *(float *)(param_1 + 0x6a8);
        }
        if (*(char *)(param_1 + 0x6ac) != '\0') {
          *(undefined1 *)(param_1 + 0x6ac) = 0;
        }
      }
      local_250 = *(undefined8 *)(param_1 + 0x858);
      uVar15 = *(undefined4 *)(param_1 + 0x6a4);
      local_248 = *(longlong *)(param_1 + 0x860);
      if (local_248 != 0) {
        LOCK();
        *(int *)(local_248 + 8) = *(int *)(local_248 + 8) + 1;
        UNLOCK();
      }
      FUN_140f08380(&local_250,uVar15);
      if (!bVar4) goto LAB_140ee0038;
LAB_140ee005a:
      if (*(char *)(param_1 + 0x6c4) != '\0') {
        if (*(float *)(param_1 + 0x6c0) != *(float *)(param_1 + 0x6bc)) {
          *(float *)(param_1 + 0x6bc) = *(float *)(param_1 + 0x6c0);
        }
        if (*(char *)(param_1 + 0x6c4) != '\0') {
          *(undefined1 *)(param_1 + 0x6c4) = 0;
        }
      }
      puVar10 = *(undefined8 **)(param_1 + 0x7e8);
      uVar15 = *(undefined4 *)(param_1 + 0x6bc);
      puVar17 = puVar10 + (longlong)*(int *)(param_1 + 0x7f0) * 2;
      for (; puVar10 != puVar17; puVar10 = puVar10 + 2) {
        local_240 = *puVar10;
        local_238 = puVar10[1];
        if (local_238 != 0) {
          LOCK();
          *(int *)(local_238 + 8) = *(int *)(local_238 + 8) + 1;
          UNLOCK();
        }
        FUN_140f08380(&local_240,uVar15);
      }
      goto LAB_140ee00f7;
    }
    if ((bVar4) ||
       ((*(char *)(param_1 + 0x6cd) != '\0' &&
        (*(char *)(param_1 + 0x6cc) != *(char *)(param_1 + 0x6cb))))) {
      if (*(char *)(param_1 + 0x6cd) != '\0') {
        if (*(char *)(param_1 + 0x6cc) != *(char *)(param_1 + 0x6cb)) {
          *(char *)(param_1 + 0x6cb) = *(char *)(param_1 + 0x6cc);
        }
        if (*(char *)(param_1 + 0x6cd) != '\0') {
          *(undefined1 *)(param_1 + 0x6cd) = 0;
        }
      }
      if (*(int *)(param_1 + 0x790) != *(int *)(param_1 + 0x7bc)) {
        lVar12 = *(longlong *)(param_1 + 0x7c8);
        if (*(longlong *)(param_1 + 0x7c8) == 0) {
          lVar12 = param_1 + 0x7c0;
        }
        iVar6 = *(int *)(lVar12 + ((longlong)*(int *)(param_1 + 2000) - 1U &
                                  (ulonglong)*(byte *)(param_1 + 0x6cb)) * 4);
        if (iVar6 != -1) {
          do {
            pbVar13 = (byte *)((longlong)iVar6 * 0x1c + *(longlong *)(param_1 + 0x788));
            if (*pbVar13 == *(byte *)(param_1 + 0x6cb)) {
              if (iVar6 != -1) goto LAB_140edfe91;
              break;
            }
            iVar6 = *(int *)(pbVar13 + 0x14);
          } while (iVar6 != -1);
        }
      }
      pbVar13 = pbVar19;
LAB_140edfe91:
      pbVar14 = pbVar13 + 4;
      if (pbVar13 == (byte *)0x0) {
        pbVar14 = pbVar19;
      }
      if (pbVar14 != (byte *)0x0) {
        FUN_142050af0(*(undefined8 *)(param_1 + 0x828),pbVar14,1);
      }
      goto LAB_140edfeb0;
    }
LAB_140edfeb5:
    if ((*(char *)(param_1 + 0x6a0) != '\0') &&
       (*(float *)(param_1 + 0x698) != *(float *)(param_1 + 0x69c))) goto LAB_140edfecf;
LAB_140edff36:
    if ((*(char *)(param_1 + 0x6b8) != '\0') &&
       (*(float *)(param_1 + 0x6b0) != *(float *)(param_1 + 0x6b4))) goto LAB_140edff50;
LAB_140edffb7:
    if ((*(char *)(param_1 + 0x6ac) != '\0') &&
       (*(float *)(param_1 + 0x6a4) != *(float *)(param_1 + 0x6a8))) goto LAB_140edffd1;
LAB_140ee0038:
    if ((*(char *)(param_1 + 0x6c4) != '\0') &&
       (*(float *)(param_1 + 0x6bc) != *(float *)(param_1 + 0x6c0))) goto LAB_140ee005a;
  }
  if (*(char *)(param_1 + 0x659) == '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x658) == *(char *)(param_1 + 0x657)) {
    return;
  }
LAB_140ee0114:
  if (*(char *)(param_1 + 0x659) != '\0') {
    if (*(char *)(param_1 + 0x658) != *(char *)(param_1 + 0x657)) {
      *(char *)(param_1 + 0x657) = *(char *)(param_1 + 0x658);
    }
    if (*(char *)(param_1 + 0x659) != '\0') {
      *(undefined1 *)(param_1 + 0x659) = 0;
    }
  }
  if (*(longlong *)(param_1 + 0x838) != 0) {
    FUN_142056670(*(longlong *)(param_1 + 0x838),*(char *)(param_1 + 0x657) == '\0');
  }
  return;
}



// FUNCTION 140ee0190 FUN_140ee0190 body=267 status=ok
// SIG undefined FUN_140ee0190(void)

void FUN_140ee0190(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong local_18;
  int local_10;
  
  FUN_142330a70();
  if ((*(longlong *)(param_1 + 0x120) != 0) || (lVar3 = FUN_1423407b0(param_1), lVar3 != 0)) {
    lVar3 = *(longlong *)(param_1 + 0x120);
    if (lVar3 == 0) {
      lVar3 = FUN_1423407b0(param_1);
    }
    UWorld::GetPlayerControllerIterator(lVar3,&local_18);
    while( true ) {
      if ((local_10 < 0) || (*(int *)(local_18 + 8) <= local_10)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) break;
      plVar4 = (longlong *)FWeakObjectPtr::Get();
      if (((plVar4 != (longlong *)0x0) && (cVar2 = (**(code **)(*plVar4 + 0x768))(), cVar2 != '\0'))
         && (lVar3 = UWidgetComponent::GetRenderTarget(), lVar3 != 0)) {
        lVar5 = FUN_14142a560();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((bVar1) && (lVar3 = FUN_140ec9be0(), lVar3 != 0)) {
          FUN_140eec480(lVar3,param_1);
        }
      }
      local_10 = local_10 + 1;
    }
  }
  return;
}



// FUNCTION 140ee02a0 FUN_140ee02a0 body=216 status=ok
// SIG undefined FUN_140ee02a0(void)

void FUN_140ee02a0(longlong *param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,
                  undefined1 param_5)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + 1;
  iVar5 = *(int *)((longlong)param_1 + 0x14);
  bVar2 = false;
  iVar4 = (int)param_1[1] + -1;
  lVar6 = (longlong)iVar4;
  if (-1 < iVar4) {
    lVar7 = lVar6 << 4;
    bVar2 = false;
    do {
      if ((*(int *)(lVar7 + 8 + *param_1) == 0) ||
         (plVar1 = *(longlong **)(lVar7 + *param_1), plVar1 == (longlong *)0x0)) {
LAB_140ee0321:
        bVar2 = true;
      }
      else {
        cVar3 = (**(code **)(*plVar1 + 0x40))(plVar1,param_2,param_3,param_4,param_5);
        if (cVar3 == '\0') goto LAB_140ee0321;
      }
      lVar7 = lVar7 + -0x10;
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
    iVar5 = *(int *)((longlong)param_1 + 0x14);
  }
  *(int *)((longlong)param_1 + 0x14) = iVar5 + -1;
  if (bVar2) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1,0);
    return;
  }
  return;
}



// FUNCTION 140ee0380 FUN_140ee0380 body=102 status=ok
// SIG undefined FUN_140ee0380(void)

void FUN_140ee0380(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 local_128 [272];
  undefined8 local_18;
  
  FUN_140ed0240(local_128);
  FUN_140e9cc60(local_128,param_2);
  local_18 = param_3;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1,local_128);
  FUN_140e9c360(local_128);
  return;
}



// FUNCTION 140ee03f0 FUN_140ee03f0 body=291 status=ok
// SIG undefined FUN_140ee03f0(void)

void FUN_140ee03f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 local_158 [272];
  undefined8 local_48;
  undefined1 local_40 [8];
  undefined4 local_38;
  undefined1 local_34;
  undefined1 local_30 [8];
  undefined8 local_28;
  longlong *plStack_20;
  undefined1 local_18;
  
  FUN_140ed0240(local_158);
  FName::FName(local_40,&DAT_143f3eda8,1);
  local_34 = 0;
  local_38 = 0xffffffff;
  FName::FName(local_30,&DAT_143f3eda8,1);
  local_18 = 0;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  FUN_140e9cc60(local_158,param_2);
  local_48 = param_3;
  FUN_140ed08a0(local_40,param_4);
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1,local_158);
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
  FUN_140e9c360(local_158);
  return;
}



// FUNCTION 140ee0520 FUN_140ee0520 body=517 status=ok
// SIG undefined FUN_140ee0520(void)

void FUN_140ee0520(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float local_res8 [2];
  float local_res10 [2];
  float local_res18 [4];
  
  if ((*(char *)(param_1 + 0x640) == '\x01') && (0 < *(int *)(param_1 + 0x708))) {
    uVar3 = 0;
    fVar9 = 1e+09;
    *(undefined8 *)(param_1 + 0x6e4) = 0;
    *(undefined4 *)(param_1 + 0x6e0) = 0;
    *(undefined4 *)(param_1 + 0x6ec) = 0;
    do {
      local_res8[0] = 0.0;
      local_res10[0] = 0.0;
      local_res18[0] = 0.0;
      if ((*(longlong *)(param_1 + 0x728) != 0) && (*(longlong *)(param_1 + 0x730) != 0)) {
        (**(code **)(**(longlong **)(param_1 + 0x730) + 0x140))
                  (*(longlong **)(param_1 + 0x730),uVar3 & 0xff,local_res8,local_res10,local_res18);
      }
      fVar5 = (float)(**(code **)(*(longlong *)
                                   (*(longlong *)
                                     (*(longlong *)(param_1 + 0x700) + (longlong)(int)uVar3 * 8) +
                                   0x458) + 0x20))();
      fVar6 = (float)FUN_143079090(*(undefined8 *)
                                    (*(longlong *)(param_1 + 0x700) + (longlong)(int)uVar3 * 8));
      if (fVar5 <= *(float *)(param_1 + 0x6e4)) {
        fVar5 = *(float *)(param_1 + 0x6e4);
      }
      fVar8 = *(float *)(param_1 + 0x6e8);
      if (*(float *)(param_1 + 0x6e8) <= fVar6) {
        fVar8 = fVar6;
      }
      *(float *)(param_1 + 0x6e8) = fVar8;
      *(float *)(param_1 + 0x6e4) = fVar5;
      if (local_res8[0] < fVar9) {
        fVar9 = local_res8[0];
      }
      uVar3 = uVar3 + 1;
      if (local_res10[0] <= *(float *)(param_1 + 0x6e0)) {
        local_res10[0] = *(float *)(param_1 + 0x6e0);
      }
      fVar5 = *(float *)(param_1 + 0x6ec);
      if (*(float *)(param_1 + 0x6ec) <= local_res18[0]) {
        fVar5 = local_res18[0];
      }
      *(float *)(param_1 + 0x6e0) = local_res10[0];
      *(float *)(param_1 + 0x6ec) = fVar5;
    } while ((int)uVar3 < *(int *)(param_1 + 0x708));
    *(float *)(param_1 + 0x6dc) = fVar9;
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x6f8);
  if (lVar1 != 0) {
    plVar4 = (longlong *)0x0;
    plVar2 = plVar4;
    if (*(longlong *)(param_1 + 0x728) != 0) {
      plVar2 = *(longlong **)(param_1 + 0x730);
    }
    if (plVar2 != (longlong *)0x0) {
      if (*(longlong *)(param_1 + 0x728) != 0) {
        plVar4 = *(longlong **)(param_1 + 0x730);
      }
      (**(code **)(*plVar4 + 0x140))
                (plVar4,*(undefined1 *)(param_1 + 0x630),param_1 + 0x6dc,param_1 + 0x6e0,
                 param_1 + 0x6ec);
      lVar1 = *(longlong *)(param_1 + 0x6f8);
    }
    uVar7 = (**(code **)(*(longlong *)(lVar1 + 0x458) + 0x20))();
    *(undefined4 *)(param_1 + 0x6e4) = uVar7;
    uVar7 = FUN_143079090(*(undefined8 *)(param_1 + 0x6f8));
    *(undefined4 *)(param_1 + 0x6e8) = uVar7;
  }
  return;
}



// FUNCTION 140ee0770 FUN_140ee0770 body=45 status=ok
// SIG undefined FUN_140ee0770(void)

void FUN_140ee0770(longlong *param_1)

{
  FUN_140f0eb40();
  *(undefined8 *)(*param_1 + 0x670) = 0;
  *(undefined8 *)(*param_1 + 0x668) = 0;
  return;
}



// FUNCTION 140ee07a0 FUN_140ee07a0 body=84 status=ok
// SIG undefined FUN_140ee07a0(void)

void FUN_140ee07a0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = FUN_1416f8720(*(undefined4 *)(param_1 + 8));
  if (lVar1 != 0) {
    lVar1 = FUN_1416f8720(*(undefined4 *)(param_1 + 8));
    if (*(byte *)(param_1 + 0xc) == (*(byte *)(lVar1 + 0x80) & 1)) {
      plVar2 = (longlong *)FUN_1416f8720(*(undefined4 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x000140ee07e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x310))(plVar2,*(char *)(param_1 + 0xc) == '\0');
      return;
    }
  }
  return;
}



// FUNCTION 140ee0820 thunk_FUN_140ed1570 body=5 status=ok
// SIG undefined thunk_FUN_140ed1570(void)

void thunk_FUN_140ed1570(void)

{
  FUN_140ed1570();
  return;
}



// FUNCTION 140ee08d0 thunk_FUN_140ed34a0 body=5 status=ok
// SIG undefined thunk_FUN_140ed34a0(void)

void thunk_FUN_140ed34a0(void)

{
  FUN_140ed34a0();
  return;
}



// FUNCTION 140ee0940 thunk_FUN_140ed45b0 body=5 status=ok
// SIG undefined thunk_FUN_140ed45b0(void)

void thunk_FUN_140ed45b0(void)

{
  FUN_140ed45b0();
  return;
}



// FUNCTION 140ee0990 FUN_140ee0990 body=104 status=ok
// SIG undefined FUN_140ee0990(void)

void FUN_140ee0990(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  lVar1 = *param_1;
  local_28 = 0;
  local_18 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x18,local_48);
  if (puVar2 != (undefined8 *)0x0) {
    local_68 = (undefined4)lVar1;
    uStack_64 = (undefined4)((ulonglong)lVar1 >> 0x20);
    *puVar2 = &PTR_FUN_143f77c18;
    *(undefined4 *)(puVar2 + 1) = local_68;
    *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_64;
    puVar2[2] = lVar1 + 0x898;
  }
  local_58[0] = &LAB_140ee0fb0;
  FUN_14204c280(local_58);
  return;
}



// FUNCTION 140ee0aa0 FUN_140ee0aa0 body=60 status=ok
// SIG undefined FUN_140ee0aa0(void)

void FUN_140ee0aa0(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*(longlong *)*param_1 + 0x148))();
  uVar1 = FUN_140aab5e0(uVar1);
  FWeakObjectPtr::operator=(*param_1 + 0x630,uVar1);
  FUN_140f07370(*param_1);
  return;
}



// FUNCTION 140ee0af0 FUN_140ee0af0 body=91 status=ok
// SIG undefined FUN_140ee0af0(void)

void FUN_140ee0af0(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  lVar1 = *(longlong *)*param_1;
  puVar2 = (undefined8 *)FName::FName(local_res8,L"Duel_Countdown_Init",1);
  (**(code **)(lVar1 + 0x4e8))(*param_1,*puVar2,&local_18);
  FUN_140f08520(*param_1,1);
  return;
}



// FUNCTION 140ee0b90 FUN_140ee0b90 body=28 status=ok
// SIG undefined FUN_140ee0b90(void)

void FUN_140ee0b90(undefined4 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1416f8720(*param_1);
  FUN_142227350(uVar1,0,1);
  return;
}



// FUNCTION 140ee0c20 FUN_140ee0c20 body=55 status=ok
// SIG undefined FUN_140ee0c20(void)

void FUN_140ee0c20(longlong *param_1)

{
  if (*(longlong *)(*param_1 + 0x638) != 0) {
    FUN_140f0a600(*param_1,1);
    FUN_140f02d20(*(undefined8 *)(*param_1 + 0x638));
    return;
  }
  return;
}



// FUNCTION 140ee0d20 FUN_140ee0d20 body=42 status=ok
// SIG undefined FUN_140ee0d20(void)

void FUN_140ee0d20(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_2;
  FUN_142088ee0(plVar1,1);
                    /* WARNING: Could not recover jumptable at 0x000140ee0d43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x278))(plVar1,0);
  return;
}



// FUNCTION 140ee0dc0 FUN_140ee0dc0 body=104 status=ok
// SIG undefined FUN_140ee0dc0(void)

void FUN_140ee0dc0(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  lVar1 = *param_1;
  local_28 = 0;
  local_18 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x18,local_48);
  if (puVar2 != (undefined8 *)0x0) {
    local_68 = (undefined4)lVar1;
    uStack_64 = (undefined4)((ulonglong)lVar1 >> 0x20);
    *puVar2 = &PTR_FUN_143f77c18;
    *(undefined4 *)(puVar2 + 1) = local_68;
    *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_64;
    puVar2[2] = lVar1 + 0x890;
  }
  local_58[0] = &LAB_140ee0fb0;
  FUN_14204c280(local_58);
  return;
}



// FUNCTION 140ee0e70 thunk_FUN_140eda400 body=5 status=ok
// SIG undefined thunk_FUN_140eda400(void)

void thunk_FUN_140eda400(void)

{
  FUN_140eda400();
  return;
}



// FUNCTION 140ee0e90 thunk_FUN_140eda520 body=5 status=ok
// SIG undefined thunk_FUN_140eda520(void)

void thunk_FUN_140eda520(void)

{
  FUN_140eda520();
  return;
}



// FUNCTION 140ee0f50 FUN_140ee0f50 body=65 status=ok
// SIG undefined FUN_140ee0f50(void)

void FUN_140ee0f50(longlong *param_1)

{
  *(undefined1 *)(*param_1 + 0x649) = 0;
  if (*(longlong *)(*param_1 + 0x638) != 0) {
    FUN_140f0a600(*param_1,1);
    FUN_140f02d20(*(undefined8 *)(*param_1 + 0x638));
    return;
  }
  return;
}



// FUNCTION 140ee10a0 FUN_140ee10a0 body=44 status=ok
// SIG undefined FUN_140ee10a0(void)

undefined8 FUN_140ee10a0(longlong param_1)

{
  int iVar1;
  
  if (*(longlong **)(param_1 + 0x170) != (longlong *)0x0) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x170) + 0x2d0))();
    if (iVar1 != -1) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140ee10d0 FUN_140ee10d0 body=1823 status=ok
// SIG undefined FUN_140ee10d0(void)

void FUN_140ee10d0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  bool bVar12;
  undefined4 local_res8 [2];
  longlong local_168;
  longlong *local_160;
  longlong local_158;
  longlong *local_150;
  undefined8 local_148;
  longlong *local_140;
  longlong local_138;
  longlong *local_130;
  longlong local_128 [7];
  longlong *local_f0;
  longlong local_e8;
  longlong *plStack_e0;
  longlong local_d8;
  longlong *plStack_d0;
  undefined8 local_c8;
  longlong *plStack_c0;
  undefined8 *local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  undefined1 local_80 [8];
  longlong *local_78;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_60 [8];
  longlong *local_58;
  undefined1 local_50 [8];
  longlong *local_48;
  
  plVar9 = (longlong *)(param_1 + 0x858);
  local_res8[0] = 0;
  local_160 = (longlong *)0x0;
  if (plVar9 != &local_168) {
    *plVar9 = 0;
    local_168 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x860,&local_160);
    plVar3 = local_160;
    if (local_160 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_160 + 1;
      lVar6 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_160)(local_160);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_160 + 8))(local_160,1);
        }
      }
    }
  }
  plVar3 = (longlong *)(param_1 + 0x848);
  local_150 = (longlong *)0x0;
  if (plVar3 != &local_158) {
    *plVar3 = 0;
    local_158 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x850,&local_150);
    plVar4 = local_150;
    if (local_150 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_150 + 1;
      lVar6 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_150)(local_150);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_150 + 8))(local_150,1);
        }
      }
    }
  }
  local_b8 = (undefined8 *)(param_1 + 0x838);
  local_140 = (longlong *)0x0;
  if (local_b8 != &local_148) {
    *local_b8 = 0;
    local_148 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x840,&local_140);
    plVar4 = local_140;
    if (local_140 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_140 + 1;
      lVar6 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_140)(local_140);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_140 + 8))(local_140,1);
        }
      }
    }
  }
  lVar6 = param_1 + 0x7e8;
  TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty(lVar6,0);
  TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty(param_1 + 0x7f8,0);
  plVar4 = (longlong *)(param_1 + 0x828);
  if (*plVar4 != 0) {
    FUN_142056e90();
  }
  local_130 = (longlong *)0x0;
  if (plVar4 != &local_138) {
    *plVar4 = 0;
    local_138 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x830,&local_130);
    plVar8 = local_130;
    if (local_130 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_130 + 1;
      lVar7 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_130)(local_130);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_130 + 8))(local_130,1);
        }
      }
    }
  }
  if (*(longlong *)(param_1 + 0x818) != 0) {
    FUN_14203e230(*(longlong *)(param_1 + 0x818),param_2);
    FUN_140ad4c90(param_1,local_128 + 6);
    if (local_128[6] != 0) {
      FUN_142036df0();
    }
    plVar8 = local_f0;
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_f0 + 1;
      lVar7 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_f0)(local_f0);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_f0 + 8))(local_f0,1);
        }
      }
    }
    FUN_14204d040(*(undefined8 *)(param_1 + 0x818));
    plVar8 = (longlong *)
             FUN_1420392d0(*(undefined8 *)(param_1 + 0x818),local_80,L"crosshairInstance");
    if (plVar4 != plVar8) {
      *plVar4 = *plVar8;
      *plVar8 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x830,plVar8 + 1);
    }
    if (local_78 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_78 + 1;
      lVar7 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar1 = (int *)((longlong)local_78 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_78 + 8))(local_78,1);
        }
      }
    }
    if ((*plVar4 == 0) && (local_res8 != (undefined4 *)(param_1 + 0x649))) {
      *(undefined2 *)(param_1 + 0x649) = 0x100;
    }
    bVar12 = *plVar4 == 0;
    if (bVar12) {
      plVar8 = &local_e8;
      local_e8 = 0;
      plStack_e0 = (longlong *)0x0;
    }
    else {
      plVar8 = (longlong *)FUN_1420392d0(*plVar4,local_70,L"noTint1");
    }
    if (plVar9 != plVar8) {
      *plVar9 = *plVar8;
      *plVar8 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x860,plVar8 + 1);
    }
    plVar8 = plStack_e0;
    if ((bVar12) && (plStack_e0 != (longlong *)0x0)) {
      LOCK();
      plVar2 = plStack_e0 + 1;
      lVar7 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plStack_e0)(plStack_e0);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plStack_e0 + 8))(plStack_e0,1);
        }
      }
    }
    if ((!bVar12) && (local_68 != (longlong *)0x0)) {
      LOCK();
      plVar8 = local_68 + 1;
      lVar7 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar1 = (int *)((longlong)local_68 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_68 + 8))(local_68,1);
        }
      }
    }
    if (*plVar9 != 0) {
      local_128[0] = 0;
      local_128[1] = 10;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_128,0);
      FGenericPlatformString::Memcpy(local_128[0],L"chargeBar",0x14);
      local_b0 = *plVar9;
      local_a8 = *(longlong *)(param_1 + 0x860);
      if (local_a8 != 0) {
        LOCK();
        *(int *)(local_a8 + 8) = *(int *)(local_a8 + 8) + 1;
        UNLOCK();
      }
      FUN_140ee51c0(lVar6,&local_b0,local_128);
      if (local_128[0] != 0) {
        FMemory::Free();
      }
      local_128[2] = 0;
      local_128[3] = 0xb;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_128 + 2,0);
      FGenericPlatformString::Memcpy(local_128[2],L"targetlock",0x16);
      local_a0 = *plVar9;
      local_98 = *(longlong *)(param_1 + 0x860);
      if (local_98 != 0) {
        LOCK();
        *(int *)(local_98 + 8) = *(int *)(local_98 + 8) + 1;
        UNLOCK();
      }
      FUN_140ee51c0(param_1 + 0x7f8,&local_a0,local_128 + 2);
      if (local_128[2] != 0) {
        FMemory::Free();
      }
    }
    bVar12 = *plVar4 == 0;
    if (bVar12) {
      plVar9 = &local_d8;
      local_d8 = 0;
      plStack_d0 = (longlong *)0x0;
    }
    else {
      plVar9 = (longlong *)FUN_1420392d0(*plVar4,local_60,L"spreadAnim1");
    }
    if (plVar3 != plVar9) {
      *plVar3 = *plVar9;
      *plVar9 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x850,plVar9 + 1);
    }
    plVar9 = plStack_d0;
    if ((bVar12) && (plStack_d0 != (longlong *)0x0)) {
      LOCK();
      plVar4 = plStack_d0 + 1;
      lVar7 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plStack_d0)(plStack_d0);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plStack_d0 + 8))(plStack_d0,1);
        }
      }
    }
    if ((!bVar12) && (local_58 != (longlong *)0x0)) {
      LOCK();
      plVar9 = local_58 + 1;
      lVar7 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar1 = (int *)((longlong)local_58 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_58 + 8))(local_58,1);
        }
      }
    }
    if (*plVar3 != 0) {
      local_128[4] = 0;
      local_128[5] = 10;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_128 + 4,0);
      FGenericPlatformString::Memcpy(local_128[4],L"chargeBar",0x14);
      local_90 = *plVar3;
      local_88 = *(longlong *)(param_1 + 0x850);
      if (local_88 != 0) {
        LOCK();
        *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
        UNLOCK();
      }
      FUN_140ee51c0(lVar6,&local_90,local_128 + 4);
      if (local_128[4] != 0) {
        FMemory::Free();
      }
    }
    bVar12 = *plVar3 == 0;
    if (bVar12) {
      puVar10 = &local_c8;
      local_c8 = 0;
      plStack_c0 = (longlong *)0x0;
    }
    else {
      puVar10 = (undefined8 *)FUN_1420392d0(*plVar3,local_50,L"spread");
    }
    if (local_b8 != puVar10) {
      *local_b8 = *puVar10;
      puVar11 = local_b8 + 1;
      *puVar10 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(puVar11,puVar10 + 1);
    }
    plVar9 = plStack_c0;
    if ((bVar12) && (plStack_c0 != (longlong *)0x0)) {
      LOCK();
      plVar3 = plStack_c0 + 1;
      lVar6 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plStack_c0)(plStack_c0);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plStack_c0 + 8))(plStack_c0,1);
        }
      }
    }
    if ((!bVar12) && (local_48 != (longlong *)0x0)) {
      LOCK();
      plVar9 = local_48 + 1;
      lVar6 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar1 = (int *)((longlong)local_48 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_48 + 8))(local_48,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140ee17f0 FUN_140ee17f0 body=354 status=ok
// SIG undefined FUN_140ee17f0(void)

void FUN_140ee17f0(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 local_res8 [2];
  undefined8 local_18;
  undefined8 local_10;
  
  if (param_2 == 0) {
    param_2 = *(longlong *)(param_1 + 0x638);
  }
  local_res8[0] = 0xffffffff;
  if (param_2 != 0) {
    FUN_14170c210(local_res8,param_2);
  }
  puVar1 = (undefined4 *)(param_1 + 0x6d4);
  if (local_res8 != puVar1) {
    if (*(char *)(param_1 + 0x6d8) != '\0') {
      *(undefined1 *)(param_1 + 0x6d8) = 0;
      FUN_1416f8340(*puVar1);
    }
    *puVar1 = 0xffffffff;
    uVar2 = FUN_1416f8720(local_res8[0]);
    FUN_14170c210(puVar1,uVar2);
    *(undefined1 *)(param_1 + 0x6d8) = 1;
  }
  FUN_1416f8340(local_res8[0]);
  if (*(char *)(param_1 + 0x640) == '\0') {
    if (param_2 != 0) {
      FUN_140f080f0(param_1 + 0x660,param_2 + 0x30);
      return;
    }
  }
  else if (*(char *)(param_1 + 0x640) == '\x01') {
    local_10 = 0x11;
    local_18 = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    uVar2 = local_18;
    FGenericPlatformString::Memcpy(local_18,L"assaultCrosshair",0x22);
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x690));
    if (*(char *)(param_1 + 0x688) != '\0') {
      *(undefined1 *)(param_1 + 0x688) = 0;
      if (*(longlong *)(param_1 + 0x678) != 0) {
        FMemory::Free();
      }
    }
    *(undefined8 *)(param_1 + 0x678) = uVar2;
    *(undefined4 *)(param_1 + 0x680) = (undefined4)local_10;
    *(undefined4 *)(param_1 + 0x684) = local_10._4_4_;
    *(undefined1 *)(param_1 + 0x688) = 1;
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x690));
  }
  return;
}



// FUNCTION 140ee1960 FUN_140ee1960 body=1725 status=ok
// SIG undefined FUN_140ee1960(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140ee1960(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined1 (*pauVar5) [16];
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  byte *pbVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  longlong local_res18;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined1 local_98 [8];
  float fStack_90;
  float fStack_8c;
  undefined1 local_88 [80];
  
  iVar17 = 0;
  if (0 < (int)param_2[1]) {
    local_res18 = 0;
    do {
      if (iVar17 == 0) {
        lVar16 = *(longlong *)(param_1 + 0x1c0);
LAB_140ee19f0:
        if ((lVar16 != 0) && (iVar6 = *(int *)(param_1 + 0x230), 0 < iVar6)) {
          uVar13 = *(uint *)(local_res18 + *param_2);
          if (uVar13 == DAT_1468b5ad4) {
            if (lVar16 == *(longlong *)(param_1 + 0x1c0)) {
              iVar6 = 0;
            }
            else if (lVar16 == *(longlong *)(param_1 + 0x1d0)) {
              iVar6 = 1;
            }
            else {
              iVar6 = -1;
              if (lVar16 == *(longlong *)(param_1 + 0x1e0)) {
                iVar6 = 2;
              }
            }
            if (iVar6 == 0) {
              pbVar9 = *(byte **)(param_1 + 0x238);
            }
            else if (iVar6 == 1) {
              pbVar9 = *(byte **)(param_1 + 0x248);
            }
            else if (iVar6 == 2) {
              pbVar9 = *(byte **)(param_1 + 600);
            }
            else {
              pbVar9 = *(byte **)(param_1 + 0x228);
            }
            bVar2 = pbVar9[1];
            bVar3 = *pbVar9;
            local_b8 = (float)pbVar9[2] * 0.003921569;
            bVar4 = pbVar9[3];
            *(undefined4 *)(lVar16 + 0x2e4) = 0;
            fStack_b4 = (float)bVar2 * 0.003921569;
            fStack_b0 = (float)bVar3 * 0.003921569;
            fStack_ac = (float)bVar4 * 0.003921569;
            if (*(longlong *)(lVar16 + 0x2d0) != 0) {
              FUN_142f0c220(*(longlong *)(lVar16 + 0x2d0),&local_b8,1);
            }
          }
          else {
            pbVar9 = *(byte **)(param_1 + 0x228);
            iVar12 = 1;
            lVar15 = 1;
            iVar10 = 0;
            lVar7 = 0;
            fVar22 = (float)(uVar13 >> 0x10 & 0xff) * 0.003921569;
            fVar23 = (float)(uVar13 >> 8 & 0xff) * 0.003921569;
            fVar24 = (float)(uVar13 & 0xff) * 0.003921569;
            fVar19 = (float)pbVar9[2] * 0.003921569 - fVar22;
            fVar21 = (float)pbVar9[1] * 0.003921569 - fVar23;
            fVar18 = (float)*pbVar9 * 0.003921569 - fVar24;
            fVar18 = fVar21 * fVar21 + fVar19 * fVar19 + fVar18 * fVar18;
            lVar8 = lVar7;
            if (1 < iVar6) {
              if (4 < iVar6) {
                do {
                  lVar8 = lVar7;
                  if (fVar18 == 0.0) goto LAB_140ee1e42;
                  fVar20 = (float)pbVar9[lVar15 * 4 + 1] * 0.003921569 - fVar23;
                  fVar21 = (float)pbVar9[lVar15 * 4 + 2] * 0.003921569 - fVar22;
                  fVar19 = (float)pbVar9[lVar15 * 4] * 0.003921569 - fVar24;
                  fVar19 = fVar20 * fVar20 + fVar21 * fVar21 + fVar19 * fVar19;
                  iVar11 = iVar12;
                  lVar8 = lVar15;
                  if (fVar18 <= fVar19) {
                    iVar11 = iVar10;
                    lVar8 = lVar7;
                    fVar19 = fVar18;
                  }
                  iVar10 = iVar11;
                  if (fVar19 == 0.0) goto LAB_140ee1e42;
                  fVar20 = (float)pbVar9[lVar15 * 4 + 5] * 0.003921569 - fVar23;
                  fVar21 = (float)pbVar9[lVar15 * 4 + 6] * 0.003921569 - fVar22;
                  fVar18 = (float)pbVar9[lVar15 * 4 + 4] * 0.003921569 - fVar24;
                  fVar18 = fVar20 * fVar20 + fVar21 * fVar21 + fVar18 * fVar18;
                  iVar11 = iVar12 + 1;
                  lVar7 = lVar15 + 1;
                  if (fVar19 <= fVar18) {
                    iVar11 = iVar10;
                    lVar7 = lVar8;
                    fVar18 = fVar19;
                  }
                  lVar8 = lVar7;
                  iVar10 = iVar11;
                  if (fVar18 == 0.0) goto LAB_140ee1e42;
                  lVar7 = lVar15 + 2;
                  fVar20 = (float)pbVar9[lVar7 * 4 + 1] * 0.003921569 - fVar23;
                  fVar21 = (float)pbVar9[lVar15 * 4 + 10] * 0.003921569 - fVar22;
                  fVar19 = (float)pbVar9[lVar7 * 4] * 0.003921569 - fVar24;
                  fVar19 = fVar20 * fVar20 + fVar21 * fVar21 + fVar19 * fVar19;
                  iVar11 = iVar12 + 2;
                  if (fVar18 <= fVar19) {
                    iVar11 = iVar10;
                    lVar7 = lVar8;
                    fVar19 = fVar18;
                  }
                  lVar8 = lVar7;
                  iVar10 = iVar11;
                  if (fVar19 == 0.0) goto LAB_140ee1e42;
                  lVar1 = lVar15 * 4;
                  lVar7 = lVar15 + 3;
                  iVar11 = iVar12 + 3;
                  lVar15 = lVar15 + 4;
                  iVar12 = iVar12 + 4;
                  fVar20 = (float)pbVar9[lVar7 * 4 + 1] * 0.003921569 - fVar23;
                  fVar21 = (float)pbVar9[lVar1 + 0xe] * 0.003921569 - fVar22;
                  fVar18 = (float)pbVar9[lVar7 * 4] * 0.003921569 - fVar24;
                  fVar18 = fVar20 * fVar20 + fVar21 * fVar21 + fVar18 * fVar18;
                  if (fVar19 <= fVar18) {
                    lVar7 = lVar8;
                    iVar11 = iVar10;
                    fVar18 = fVar19;
                  }
                  iVar10 = iVar11;
                  lVar8 = lVar7;
                } while (iVar12 < iVar6 + -3);
              }
              while ((iVar12 < iVar6 && (fVar18 != 0.0))) {
                fVar20 = (float)pbVar9[lVar15 * 4 + 1] * 0.003921569 - fVar23;
                fVar21 = (float)pbVar9[lVar15 * 4 + 2] * 0.003921569 - fVar22;
                fVar19 = (float)pbVar9[lVar15 * 4] * 0.003921569 - fVar24;
                fVar19 = fVar20 * fVar20 + fVar21 * fVar21 + fVar19 * fVar19;
                iVar11 = iVar12;
                lVar7 = lVar15;
                if (fVar18 <= fVar19) {
                  iVar11 = iVar10;
                  lVar7 = lVar8;
                  fVar19 = fVar18;
                }
                lVar15 = lVar15 + 1;
                iVar12 = iVar12 + 1;
                lVar8 = lVar7;
                fVar18 = fVar19;
                iVar10 = iVar11;
              }
            }
LAB_140ee1e42:
            if (lVar16 == *(longlong *)(param_1 + 0x1c0)) {
              uVar14 = 0;
            }
            else if (lVar16 == *(longlong *)(param_1 + 0x1d0)) {
              uVar14 = 1;
            }
            else {
              uVar14 = 0xffffffff;
              if (lVar16 == *(longlong *)(param_1 + 0x1e0)) {
                uVar14 = 2;
              }
            }
            if (iVar10 == 0) {
              if ((int)uVar14 == 0) {
                pbVar9 = *(byte **)(param_1 + 0x238);
              }
              else {
                uVar13 = (int)uVar14 - 1;
                uVar14 = (ulonglong)uVar13;
                if (uVar13 == 0) {
                  pbVar9 = *(byte **)(param_1 + 0x248);
                }
                else {
                  if (uVar13 != 1) goto LAB_140ee1f14;
                  pbVar9 = *(byte **)(param_1 + 600);
                }
              }
              local_98._4_4_ = (float)pbVar9[1] * 0.003921569;
              local_98._0_4_ = (float)pbVar9[2] * 0.003921569;
              fStack_90 = (float)*pbVar9 * 0.003921569;
              fStack_8c = (float)pbVar9[3] * 0.003921569;
            }
            else {
              if (iVar10 < 0) {
LAB_140ee1f75:
                pauVar5 = (undefined1 (*) [16])local_88;
                local_88._0_8_ = _DAT_1468b5d78;
                local_88._8_8_ = uRam00000001468b5d80;
              }
              else {
LAB_140ee1f14:
                if (iVar6 <= iVar10) goto LAB_140ee1f75;
                local_a8 = (float)pbVar9[lVar8 * 4 + 2] * 0.003921569;
                fStack_a4 = (float)pbVar9[lVar8 * 4 + 1] * 0.003921569;
                pauVar5 = (undefined1 (*) [16])&local_a8;
                fStack_a0 = (float)pbVar9[lVar8 * 4] * 0.003921569;
                fStack_9c = (float)pbVar9[lVar8 * 4 + 3] * 0.003921569;
              }
              _local_98 = *pauVar5;
            }
            *(int *)(lVar16 + 0x2e4) = iVar10;
            if (*(longlong *)(lVar16 + 0x2d0) != 0) {
              FUN_142f0c220(*(longlong *)(lVar16 + 0x2d0),local_98,CONCAT71((int7)(uVar14 >> 8),1));
            }
          }
        }
      }
      else {
        if (iVar17 == 1) {
          lVar16 = *(longlong *)(param_1 + 0x1d0);
          goto LAB_140ee19f0;
        }
        if (iVar17 == 2) {
          lVar16 = *(longlong *)(param_1 + 0x1e0);
          goto LAB_140ee19f0;
        }
      }
      local_res18 = local_res18 + 4;
      iVar17 = iVar17 + 1;
    } while (iVar17 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 140ee2030 FUN_140ee2030 body=1041 status=ok
// SIG undefined FUN_140ee2030(void)

void FUN_140ee2030(longlong param_1)

{
  undefined4 *puVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined2 local_res18 [4];
  undefined2 local_res20 [4];
  undefined4 local_48;
  undefined1 local_44 [2];
  undefined1 local_42 [2];
  undefined1 local_40 [2];
  undefined1 local_3e [2];
  undefined4 local_3c;
  undefined4 local_38 [2];
  undefined8 local_30;
  
  lVar6 = FWeakObjectPtr::Get(param_1 + 0x5d8);
  if (lVar6 == 0) goto LAB_140ee2433;
  lVar7 = FUN_14145f370();
  if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
      lVar7 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) goto LAB_140ee2433;
  if (*(char *)(param_1 + 0x6f3) == '\0') {
    if ((*(char *)((ulonglong)(*(char *)(param_1 + 0x64a) != '\0') + 0x648 + param_1) != '\0') &&
       ((undefined2 *)local_44 != (undefined2 *)(param_1 + 0x649))) {
      *(undefined2 *)(param_1 + 0x649) = 0x100;
    }
  }
  else if (((*(char *)(param_1 + 0x6f2) == '\0') &&
           (*(longlong **)(param_1 + 0x6f8) != (longlong *)0x0)) &&
          ((*(char *)(param_1 + 0x6c8) != '\0' ||
           (*(char *)((ulonglong)(*(char *)(param_1 + 0x64a) != '\0') + 0x648 + param_1) == '\0'))))
  {
    lVar7 = (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x838))();
    if (lVar7 == 0) {
      lVar7 = *(longlong *)(param_1 + 0x638);
    }
    if (*(char *)(param_1 + 0x640) == '\0') {
      if (lVar7 != 0) {
        lVar9 = lVar7 + 0x30;
LAB_140ee2118:
        FUN_140f080f0(param_1 + 0x660,lVar9);
      }
    }
    else if (*(char *)(param_1 + 0x640) == '\x01') {
      lVar9 = param_1 + 0x778;
      goto LAB_140ee2118;
    }
    local_48 = 0xffffffff;
    if (lVar7 != 0) {
      FUN_14170c210(&local_48,lVar7);
    }
    puVar1 = (undefined4 *)(param_1 + 0x6d4);
    if (&local_48 != puVar1) {
      if (*(char *)(param_1 + 0x6d8) != '\0') {
        *(undefined1 *)(param_1 + 0x6d8) = 0;
        FUN_1416f8340(*puVar1);
      }
      *puVar1 = 0xffffffff;
      uVar8 = FUN_1416f8720(local_48);
      FUN_14170c210(puVar1,uVar8);
      *(undefined1 *)(param_1 + 0x6d8) = 1;
    }
    FUN_1416f8340(local_48);
    if (local_res18 != (undefined2 *)(param_1 + 0x6c9)) {
      *(undefined2 *)(param_1 + 0x6c9) = 0x100;
    }
    if (local_res20 != (undefined2 *)(param_1 + 0x649)) {
      *(undefined2 *)(param_1 + 0x649) = 0x101;
    }
  }
  bVar4 = false;
  bVar3 = false;
  if ((*(char *)(param_1 + 0x6f2) == '\0') ||
     ((*(char *)(param_1 + 0x6f3) == '\0' &&
      (*(char *)((ulonglong)(*(char *)(param_1 + 0x656) != '\0') + 0x654 + param_1) == '\0')))) {
    cVar5 = FUN_1407c3030(lVar6 + 0x1690);
    if (cVar5 != '\0') {
      FUN_140f080f0(param_1 + 0x660,param_1 + 0x758);
      if ((undefined2 *)(local_42 + 1) != (undefined2 *)(param_1 + 0x649)) {
        *(undefined2 *)(param_1 + 0x649) = 0x101;
      }
      if ((undefined2 *)local_40 != (undefined2 *)(param_1 + 0x6c9)) {
        *(undefined2 *)(param_1 + 0x6c9) = 0x101;
      }
      goto LAB_140ee2356;
    }
    if (*(char *)((ulonglong)(*(char *)(param_1 + 0x656) != '\0') + 0x654 + param_1) == '\0')
    goto LAB_140ee2356;
    if (*(char *)(param_1 + 0x6f3) == '\0') {
      if (*(char *)((ulonglong)(*(char *)(param_1 + 0x650) != '\0') + 0x64e + param_1) == '\0') {
        FUN_140f080f0(param_1 + 0x660,param_1 + 0x748);
        if ((undefined2 *)(local_40 + 1) != (undefined2 *)(param_1 + 0x6c9)) {
          *(undefined2 *)(param_1 + 0x6c9) = 0x103;
        }
        if ((undefined2 *)local_3e != (undefined2 *)(param_1 + 0x649)) {
          *(undefined2 *)(param_1 + 0x649) = 0x101;
        }
      }
      else if ((*(char *)(param_1 + 0x648) != '\0') &&
              ((undefined2 *)(local_3e + 1) != (undefined2 *)(param_1 + 0x649))) {
        *(undefined2 *)(param_1 + 0x649) = 0x100;
      }
      goto LAB_140ee2356;
    }
LAB_140ee235f:
    if (bVar3) goto LAB_140ee2368;
    local_res8[0] = 1;
  }
  else {
    FUN_140f080f0(param_1 + 0x660,param_1 + 0x768);
    if ((undefined2 *)(local_44 + 1) != (undefined2 *)(param_1 + 0x649)) {
      *(undefined2 *)(param_1 + 0x649) = 0x101;
    }
    if ((undefined2 *)local_42 != (undefined2 *)(param_1 + 0x6c9)) {
      *(undefined2 *)(param_1 + 0x6c9) = 0x102;
    }
    bVar4 = true;
LAB_140ee2356:
    bVar3 = bVar4;
    if (*(char *)(param_1 + 0x6f3) != '\0') goto LAB_140ee235f;
LAB_140ee2368:
    local_res8[0] = 0;
  }
  if (local_res8 != (undefined1 *)(param_1 + 0x64c)) {
    *(undefined1 *)(param_1 + 0x64c) = local_res8[0];
    *(undefined1 *)(param_1 + 0x64d) = 1;
  }
  if (*(char *)((ulonglong)(*(char *)(param_1 + 0x64a) != '\0') + 0x648 + param_1) != '\0') {
    local_res10[0] = FUN_140ee50c0(param_1);
    if (local_res10 != (undefined1 *)(param_1 + 0x6cc)) {
      *(undefined1 *)(param_1 + 0x6cc) = local_res10[0];
      *(undefined1 *)(param_1 + 0x6cd) = 1;
    }
  }
  plVar2 = *(longlong **)(param_1 + 0x6f8);
  if (plVar2 == (longlong *)0x0) {
LAB_140ee2417:
    if (local_38 == (undefined4 *)(param_1 + 0x6c0)) goto LAB_140ee2433;
    *(undefined4 *)(param_1 + 0x6c0) = 0;
  }
  else {
    local_30 = UUGStartScreenUW::GetPrivateStaticClass();
    lVar6 = (**(code **)(*plVar2 + 0x7f8))(plVar2,local_30,(char)plVar2[0xd2]);
    if (lVar6 == 0) goto LAB_140ee2417;
    uVar10 = FUN_1430774d0(lVar6);
    if (&local_3c == (undefined4 *)(param_1 + 0x6c0)) goto LAB_140ee2433;
    *(undefined4 *)(param_1 + 0x6c0) = uVar10;
  }
  *(undefined1 *)(param_1 + 0x6c4) = 1;
LAB_140ee2433:
  LOCK();
  *(undefined4 *)(param_1 + 0x644) = 0;
  UNLOCK();
  return;
}



// FUNCTION 140ee2450 FUN_140ee2450 body=239 status=ok
// SIG undefined FUN_140ee2450(void)

void FUN_140ee2450(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  char cVar3;
  longlong local_18;
  undefined8 uStack_10;
  
  cVar1 = *(char *)(param_1 + 0x768);
  lVar2 = *(longlong *)(param_1 + 0x760);
  if ((lVar2 == 0) || (ABS(*(float *)(param_1 + 0x76c) - *(float *)(param_1 + 0x770)) <= 1e-08)) {
    cVar3 = '\0';
  }
  else {
    cVar3 = '\x01';
  }
  *(char *)(param_1 + 0x768) = cVar3;
  if ((((cVar1 == '\0') && (cVar3 != '\0')) && (*(longlong *)(param_1 + 0x640) != 0)) &&
     ((lVar2 != 0 && (*(int *)(lVar2 + 0x200) == 0)))) {
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



// FUNCTION 140ee2540 FUN_140ee2540 body=461 status=ok
// SIG undefined FUN_140ee2540(void)

void FUN_140ee2540(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong local_28 [4];
  
  if (((*(char *)(param_1 + 0x6c0) == '\x03') && (0 < *(int *)(param_1 + 0x6b8))) &&
     (-1 < *(int *)(*(longlong *)(param_1 + 0x6b0) + 8))) {
    iVar3 = 1;
    plVar4 = (longlong *)(param_1 + 0x678);
    do {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x6b0) + 8);
      if (((iVar1 < iVar3) && (*plVar4 != 0)) &&
         (lVar5 = *(longlong *)(param_1 + 0x670 + (longlong)iVar1 * 8), lVar5 != 0)) {
        FUN_140f09b90(lVar5,*(undefined8 *)(*plVar4 + 0x1d0));
      }
      iVar3 = iVar3 + 1;
      plVar4 = plVar4 + 1;
    } while (iVar3 < 3);
    FUN_140f09b90(*(undefined8 *)(param_1 + 0x680),0);
    plVar4 = (longlong *)(param_1 + 0x670);
    lVar5 = 3;
    do {
      if (*plVar4 != 0) {
        if (*(longlong *)(*plVar4 + 0x1d0) == 0) {
          local_28[2] = 0;
          local_28[3] = 4;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28 + 2,0);
          FGenericPlatformString::Memcpy(local_28[2],&DAT_144602988,8);
          FUN_142088cf0(*plVar4);
          lVar2 = local_28[2];
        }
        else {
          local_28[0] = 0;
          local_28[1] = 3;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
          FGenericPlatformString::Memcpy(local_28[0],&DAT_144602974,6);
          FUN_142088cf0(*plVar4);
          lVar2 = local_28[0];
        }
        if (lVar2 != 0) {
          FMemory::Free();
        }
      }
      plVar4 = plVar4 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  *(undefined1 *)(param_1 + 0x6c0) = 0;
  if (0 < *(int *)(param_1 + 0x6b8)) {
    iVar3 = *(int *)(param_1 + 0x6b8);
    if (iVar3 + -1 != 0) {
      _guard_xfg_dispatch_icall_nop
                (*(void **)(param_1 + 0x6b0),(void *)((longlong)*(void **)(param_1 + 0x6b0) + 0x10),
                 (longlong)(iVar3 + -1) << 4);
      iVar3 = *(int *)(param_1 + 0x6b8);
    }
    *(int *)(param_1 + 0x6b8) = iVar3 + -1;
    TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(param_1 + 0x6b0);
  }
  FUN_140f03520(param_1);
  return;
}



// FUNCTION 140ee2710 FUN_140ee2710 body=87 status=ok
// SIG undefined FUN_140ee2710(void)

void FUN_140ee2710(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x170);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2b8))(plVar1,0xffffffff,1);
    cVar2 = FUN_140f11ee0();
    if (cVar2 == '\0') {
      FUN_142ecffe0(*(undefined8 *)(param_1 + 0x170));
    }
    else {
      FUN_142ed0540();
    }
  }
  FUN_140ebe6a0(param_1 + 0x160,0);
  return;
}



// FUNCTION 140ee2770 FUN_140ee2770 body=271 status=ok
// SIG undefined FUN_140ee2770(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ee2770(undefined8 param_1)

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
  local_b8[0] = &LAB_140ee0800;
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



// FUNCTION 140ee2880 FUN_140ee2880 body=271 status=ok
// SIG undefined FUN_140ee2880(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ee2880(undefined8 param_1)

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
  local_b8[0] = &LAB_140ee0d80;
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



// FUNCTION 140ee2990 FUN_140ee2990 body=271 status=ok
// SIG undefined FUN_140ee2990(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ee2990(undefined8 param_1)

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
  local_b8[0] = &LAB_140ee0c80;
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



// FUNCTION 140ee2aa0 FUN_140ee2aa0 body=455 status=ok
// SIG undefined FUN_140ee2aa0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ee2aa0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0 [2];
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
  local_d0[0] = 0xffffffff;
  if (*(longlong *)(param_1 + 0x710) != 0) {
    FUN_14170c210(local_d0);
  }
  local_d4 = 0xffffffff;
  if (*(longlong *)(param_1 + 0x6f8) != 0) {
    FUN_14170c210(&local_d4);
  }
  local_d8 = 0xffffffff;
  uVar4 = 0xffffffff;
  if (*(longlong *)(param_1 + 0x718) != 0) {
    FUN_14170c210(&local_d8);
    uVar4 = local_d8;
  }
  uVar6 = local_d0[0];
  uVar3 = local_d4;
  local_d8 = 0xffffffff;
  local_d4 = 0xffffffff;
  local_d0[0] = 0xffffffff;
  local_98 = (longlong *)0x0;
  local_88 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x20,local_b8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144605c68;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = uVar4;
    uVar4 = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x14) = uVar3;
    uVar3 = 0xffffffff;
    *(undefined4 *)(puVar1 + 3) = uVar6;
    uVar6 = 0xffffffff;
  }
  local_c8[0] = &LAB_140ee0a90;
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
  FUN_1416f8340(uVar6);
  FUN_1416f8340(uVar3);
  FUN_1416f8340(uVar4);
  FUN_1416f8340(local_d8);
  FUN_1416f8340(local_d4);
  FUN_1416f8340(local_d0[0]);
  return;
}



// FUNCTION 140ee2c70 FUN_140ee2c70 body=120 status=ok
// SIG undefined FUN_140ee2c70(void)

void FUN_140ee2c70(longlong param_1)

{
  int iVar1;
  
  if (0 < *(int *)(param_1 + 0x238)) {
    if (*(char *)(param_1 + 0x251) != '\0') {
      FUN_142f0ad20(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x230) + 0x20));
    }
    iVar1 = *(int *)(param_1 + 0x238);
    if (iVar1 + -1 != 0) {
      _guard_xfg_dispatch_icall_nop
                (*(void **)(param_1 + 0x230),(void *)((longlong)*(void **)(param_1 + 0x230) + 0x28),
                 (longlong)(iVar1 + -1) * 0x28);
      iVar1 = *(int *)(param_1 + 0x238);
    }
    *(int *)(param_1 + 0x238) = iVar1 + -1;
    TArray<FCapturedPropSegment,FDefaultAllocator>::ResizeShrink(param_1 + 0x230);
    return;
  }
  return;
}



// FUNCTION 140ee2cf0 FUN_140ee2cf0 body=79 status=ok
// SIG undefined FUN_140ee2cf0(void)

void FUN_140ee2cf0(longlong param_1)

{
  FUN_142398ec0(param_1,0,1);
  if (*(longlong *)(param_1 + 0x7d8) != 0) {
    FUN_1407665e0(*(longlong *)(param_1 + 0x7d8) + 0xc0,param_1);
    (**(code **)(**(longlong **)(param_1 + 0x7d8) + 0x280))();
  }
  *(undefined8 *)(param_1 + 0x7e0) = 0;
  return;
}



// FUNCTION 140ee2d40 FUN_140ee2d40 body=118 status=ok
// SIG undefined FUN_140ee2d40(void)

undefined8 * FUN_140ee2d40(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144605c98;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = 0xffffffff;
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x10));
    FUN_14170c210(puVar1 + 2,uVar2);
    *(undefined1 *)((longlong)puVar1 + 0x14) = *(undefined1 *)(param_1 + 0x14);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140ee2dc0 FUN_140ee2dc0 body=130 status=ok
// SIG undefined FUN_140ee2dc0(void)

undefined8 * FUN_140ee2dc0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144606070;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0xffffffff;
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x1c));
    FUN_14170c210((longlong)puVar1 + 0x1c,uVar2);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140ee2e50 FUN_140ee2e50 body=112 status=ok
// SIG undefined FUN_140ee2e50(void)

undefined8 * FUN_140ee2e50(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x48);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144605cb0;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(puVar1 + 3,param_1 + 0x18);
    *(undefined4 *)(puVar1 + 8) = *(undefined4 *)(param_1 + 0x40);
    *(undefined1 *)((longlong)puVar1 + 0x44) = *(undefined1 *)(param_1 + 0x44);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140ee2ec0 FUN_140ee2ec0 body=123 status=ok
// SIG undefined FUN_140ee2ec0(void)

undefined8 * FUN_140ee2ec0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144605c50;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(puVar1 + 3) = 0xffffffff;
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x18));
    FUN_14170c210(puVar1 + 3,uVar2);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140ee2f40 FUN_140ee2f40 body=95 status=ok
// SIG undefined FUN_140ee2f40(void)

undefined8 * FUN_140ee2f40(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144605e90;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    FString::FString(puVar1 + 2,param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140ee2fa0 FUN_140ee2fa0 body=88 status=ok
// SIG undefined FUN_140ee2fa0(void)

undefined8 * FUN_140ee2fa0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144605c80;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140ee3000 FUN_140ee3000 body=82 status=ok
// SIG undefined FUN_140ee3000(void)

undefined8 * FUN_140ee3000(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144605cf8;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140ee3060 FUN_140ee3060 body=87 status=ok
// SIG undefined FUN_140ee3060(void)

undefined8 * FUN_140ee3060(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144605c20;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    FText::FText(puVar1 + 2,param_1 + 0x10);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140ee30c0 FUN_140ee30c0 body=138 status=ok
// SIG undefined FUN_140ee30c0(void)

undefined8 * FUN_140ee30c0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144605c38;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = 0xffffffff;
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x10));
    FUN_14170c210(puVar1 + 2,uVar2);
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0xffffffff;
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x14));
    FUN_14170c210((longlong)puVar1 + 0x14,uVar2);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140ee3150 FUN_140ee3150 body=89 status=ok
// SIG undefined FUN_140ee3150(void)

undefined8 * FUN_140ee3150(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144605ce0;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
    *(undefined1 *)((longlong)puVar1 + 0x1c) = *(undefined1 *)(param_1 + 0x1c);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140ee31b0 FUN_140ee31b0 body=165 status=ok
// SIG undefined FUN_140ee31b0(void)

undefined8 * FUN_140ee31b0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144605c68;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = 0xffffffff;
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x10));
    FUN_14170c210(puVar1 + 2,uVar2);
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0xffffffff;
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x14));
    FUN_14170c210((longlong)puVar1 + 0x14,uVar2);
    *(undefined4 *)(puVar1 + 3) = 0xffffffff;
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x18));
    FUN_14170c210(puVar1 + 3,uVar2);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140ee3260 FUN_140ee3260 body=116 status=ok
// SIG undefined FUN_140ee3260(void)

undefined8 * FUN_140ee3260(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144605ea8;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    FString::FString(puVar1 + 4,param_1 + 0x20);
    FString::FString(puVar1 + 6,param_1 + 0x30);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140ee32e0 FUN_140ee32e0 body=82 status=ok
// SIG undefined FUN_140ee32e0(void)

undefined8 * FUN_140ee32e0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144605cc8;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140ee3340 FUN_140ee3340 body=117 status=ok
// SIG undefined FUN_140ee3340(void)

undefined8 * FUN_140ee3340(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144605d40;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0xffffffff;
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x14));
    FUN_14170c210((longlong)puVar1 + 0x14,uVar2);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140ee33c0 FUN_140ee33c0 body=123 status=ok
// SIG undefined FUN_140ee33c0(void)

undefined8 * FUN_140ee33c0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144605d10;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = 0xffffffff;
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x10));
    FUN_14170c210(puVar1 + 2,uVar2);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140ee3440 FUN_140ee3440 body=87 status=ok
// SIG undefined FUN_140ee3440(void)

undefined8 * FUN_140ee3440(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x88);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144605c08;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    FUN_140ed0160(puVar1 + 2,param_1 + 0x10);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140ee34a0 FUN_140ee34a0 body=93 status=ok
// SIG undefined FUN_140ee34a0(void)

undefined8 * FUN_140ee34a0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144605d28;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(puVar1 + 2,param_1 + 0x10);
    *(undefined4 *)(puVar1 + 7) = *(undefined4 *)(param_1 + 0x38);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140ee3500 FUN_140ee3500 body=192 status=ok
// SIG undefined FUN_140ee3500(void)

undefined8 * FUN_140ee3500(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x78);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144605e78;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    FText::FText(puVar1 + 4,param_1 + 0x20);
    FText::FText(puVar1 + 7,param_1 + 0x38);
    puVar1[10] = *(undefined8 *)(param_1 + 0x50);
    puVar1[0xb] = *(undefined8 *)(param_1 + 0x58);
    puVar1[0xc] = *(undefined8 *)(param_1 + 0x60);
    *(undefined1 *)(puVar1 + 0xd) = *(undefined1 *)(param_1 + 0x68);
    *(undefined4 *)(puVar1 + 0xe) = 0xffffffff;
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x70));
    FUN_14170c210(puVar1 + 0xe,uVar2);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140ee35c0 FUN_140ee35c0 body=66 status=ok
// SIG undefined FUN_140ee35c0(void)

void FUN_140ee35c0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144605f50;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_144605f98;
  }
  return;
}



// FUNCTION 140ee3610 FUN_140ee3610 body=66 status=ok
// SIG undefined FUN_140ee3610(void)

void FUN_140ee3610(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144605ec0;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_144605f08;
  }
  return;
}



// FUNCTION 140ee3660 FUN_140ee3660 body=78 status=ok
// SIG undefined FUN_140ee3660(void)

void FUN_140ee3660(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144605d58;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_FUN_144605da0;
  }
  return;
}



// FUNCTION 140ee36b0 FUN_140ee36b0 body=78 status=ok
// SIG undefined FUN_140ee36b0(void)

void FUN_140ee36b0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144605de8;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_FUN_144605e30;
  }
  return;
}



// FUNCTION 140ee3700 FUN_140ee3700 body=78 status=ok
// SIG undefined FUN_140ee3700(void)

void FUN_140ee3700(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144605fe0;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_FUN_144606028;
  }
  return;
}



// FUNCTION 140ee3750 FUN_140ee3750 body=173 status=ok
// SIG undefined FUN_140ee3750(void)

longlong * FUN_140ee3750(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong local_18 [2];
  
  lVar3 = FName::ToString(&DAT_1468722d0,local_18);
  iVar1 = *(int *)(lVar3 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (iVar1 < 2) {
LAB_140ee37df:
    FUN_142eb2d60(param_1,param_2);
    return param_2;
  }
  if ((DAT_1468722d0 == DAT_1468722d8) &&
     (plVar4 = (longlong *)FUN_140e971d0(param_1), plVar4 != (longlong *)0x0)) {
    uVar5 = (**(code **)(*plVar4 + 0x148))(plVar4);
    cVar2 = FUN_140adac00(uVar5);
    if (cVar2 != '\0') goto LAB_140ee37df;
  }
  *param_2 = DAT_1468722d0;
  return param_2;
}



// FUNCTION 140ee3800 FUN_140ee3800 body=144 status=ok
// SIG undefined FUN_140ee3800(void)

undefined8 * FUN_140ee3800(longlong param_1,undefined8 *param_2,undefined1 param_3)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x2e0) != '\0') {
    cVar1 = UNF_CustomizationStatics::IsWeaponType(param_3);
    if (cVar1 == '\0') {
      *param_2 = 0;
      param_2[1] = 10;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
      FGenericPlatformString::Memcpy(*param_2,L"focusedUp",0x14);
      return param_2;
    }
  }
  FUN_142eb2df0(param_1,param_2,param_3);
  return param_2;
}



// FUNCTION 140ee3890 FUN_140ee3890 body=84 status=ok
// SIG undefined FUN_140ee3890(void)

void FUN_140ee3890(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  lVar2 = (longlong)*(int *)(param_1 + 0x30) * 0x10 + lVar1;
  for (; lVar1 != lVar2; lVar1 = lVar1 + 0x10) {
    if (*(longlong **)(lVar1 + 8) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar1 + 8) + 0x280))();
      *(undefined8 *)(lVar1 + 8) = 0;
    }
  }
  return;
}



// FUNCTION 140ee38f0 FUN_140ee38f0 body=1045 status=ok
// SIG undefined FUN_140ee38f0(void)

void FUN_140ee38f0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 local_res8;
  undefined4 local_resc;
  longlong local_148 [3];
  undefined8 local_130;
  undefined1 local_128 [144];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  longlong local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [24];
  undefined1 local_40;
  undefined8 local_3c;
  undefined8 uStack_34;
  undefined4 local_2c;
  undefined4 local_28;
  
  lVar6 = *(longlong *)(param_1 + 0x178);
  if (lVar6 != 0) {
    cVar3 = FWeakObjectPtr::IsValid(lVar6 + 0x38);
    if (cVar3 != '\0') {
      uVar4 = FWeakObjectPtr::Get(lVar6 + 0x38);
      FUN_1411f8450(uVar4);
      lVar5 = FWeakObjectPtr::Get(lVar6 + 0x38);
      FUN_1407665e0(lVar5 + 0xe8);
      FWeakObjectPtr::operator=(&local_res8);
      *(undefined4 *)(lVar6 + 0x38) = local_res8;
      *(undefined4 *)(lVar6 + 0x3c) = local_resc;
    }
    cVar3 = FWeakObjectPtr::IsValid(lVar6 + 0x30);
    if (cVar3 != '\0') {
      lVar5 = FWeakObjectPtr::Get(lVar6 + 0x30);
      FUN_1407665e0(lVar5 + 0x180,lVar6);
      lVar5 = FWeakObjectPtr::Get(lVar6 + 0x30);
      FUN_1407665e0(lVar5 + 0x1a8,lVar6);
      lVar5 = FWeakObjectPtr::Get(lVar6 + 0x30);
      FUN_1407665e0(lVar5 + 400);
      FWeakObjectPtr::operator=(&local_res8);
      *(undefined4 *)(lVar6 + 0x30) = local_res8;
      *(undefined4 *)(lVar6 + 0x34) = local_resc;
    }
    *(undefined8 *)(lVar6 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x178) = 0;
  }
  plVar1 = *(longlong **)(param_1 + 0x170);
  if (plVar1 != (longlong *)0x0) {
    lVar6 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  *(undefined8 *)(param_1 + 0x170) = 0;
  FUN_140ee4200(param_1 + 0x160);
  FWeakObjectPtr::operator=(&local_res8);
  *(undefined4 *)(param_1 + 0x3c) = local_res8;
  *(undefined4 *)(param_1 + 0x40) = local_resc;
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x30);
  if (cVar3 != '\0') {
    if (*(char *)(param_1 + 0x38) == '\0') {
      uVar4 = FWeakObjectPtr::Get(param_1 + 0x30);
      FUN_1411eff10(uVar4);
      uVar4 = FWeakObjectPtr::Get(param_1 + 0x30);
      FUN_1411f8450(uVar4);
    }
    FWeakObjectPtr::operator=(&local_res8);
    *(undefined4 *)(param_1 + 0x30) = local_res8;
    *(undefined4 *)(param_1 + 0x34) = local_resc;
  }
  *(undefined1 *)(param_1 + 0x38) = 0;
  _guard_xfg_dispatch_icall_nop(local_128,0,0x108);
  local_148[2] = 0;
  local_130 = 0;
  FUN_140e9a2b0(local_128);
  local_98 = 0x1200000014;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = FUN_141324a80();
  local_148[0] = 0;
  local_148[1] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_148,0);
  FGenericPlatformString::Memcpy(local_148[0],L"Equip",0xc);
  FText::FromString(local_58,local_148);
  if (local_148[0] != 0) {
    FMemory::Free();
  }
  plVar1 = (longlong *)(param_1 + 0x48);
  local_40 = 0;
  local_2c = 0xffffffff;
  local_28 = 0;
  local_3c = 0xffffffff;
  uStack_34 = 0xffffffff;
  if (plVar1 != local_148 + 2) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = local_148[2];
    *(undefined4 *)(param_1 + 0x50) = (undefined4)local_130;
    *(undefined4 *)(param_1 + 0x54) = local_130._4_4_;
    local_130 = 0;
    local_148[2] = 0;
  }
  FUN_140ed06c0(param_1 + 0x58,local_128);
  plVar1 = (longlong *)(param_1 + 0x100);
  *(undefined4 *)(param_1 + 0xe8) = (undefined4)local_98;
  *(undefined4 *)(param_1 + 0xec) = local_98._4_4_;
  *(undefined4 *)(param_1 + 0xf0) = (undefined4)uStack_90;
  *(undefined4 *)(param_1 + 0xf4) = uStack_90._4_4_;
  *(undefined4 *)(param_1 + 0xf8) = local_88;
  if (plVar1 != &local_80) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = local_80;
    *(undefined4 *)(param_1 + 0x108) = (undefined4)local_78;
    *(undefined4 *)(param_1 + 0x10c) = local_78._4_4_;
    local_78 = 0;
    local_80 = 0;
  }
  plVar1 = (longlong *)(param_1 + 0x110);
  if (plVar1 != &local_70) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = local_70;
    *(undefined4 *)(param_1 + 0x118) = (undefined4)local_68;
    *(undefined4 *)(param_1 + 0x11c) = local_68._4_4_;
    local_68 = 0;
    local_70 = 0;
  }
  *(undefined8 *)(param_1 + 0x120) = local_60;
  FText::operator=(param_1 + 0x128,local_58);
  *(undefined1 *)(param_1 + 0x140) = local_40;
  *(undefined4 *)(param_1 + 0x144) = (undefined4)local_3c;
  *(undefined4 *)(param_1 + 0x148) = local_3c._4_4_;
  *(undefined4 *)(param_1 + 0x14c) = (undefined4)uStack_34;
  *(undefined4 *)(param_1 + 0x150) = uStack_34._4_4_;
  *(undefined4 *)(param_1 + 0x154) = local_2c;
  *(undefined4 *)(param_1 + 0x158) = local_28;
  FUN_140e9c100(local_148 + 2);
  *(undefined4 *)(param_1 + 0x184) = 0;
  FWeakObjectPtr::operator=(&local_res8,0);
  *(undefined4 *)(param_1 + 0x188) = local_res8;
  *(undefined4 *)(param_1 + 0x18c) = local_resc;
  *(undefined2 *)(param_1 + 400) = 0;
  *(undefined1 *)(param_1 + 0x192) = 0;
  *(undefined1 *)(param_1 + 0x180) = 0;
  return;
}



// FUNCTION 140ee3d10 FUN_140ee3d10 body=266 status=ok
// SIG undefined FUN_140ee3d10(void)

void FUN_140ee3d10(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong *plVar4;
  undefined4 local_res8;
  undefined4 local_resc;
  longlong local_28;
  undefined8 local_20;
  
  plVar4 = (longlong *)param_1[0xc9];
  plVar2 = plVar4 + (longlong)(int)param_1[0xca] * 3;
  for (; plVar4 != plVar2; plVar4 = plVar4 + 3) {
    if (((char)plVar4[2] != '\0') && (cVar3 = FUN_14058c1e0(plVar4 + 1,param_2), cVar3 != '\0')) {
      *(undefined1 *)(plVar4 + 2) = 0;
      FWeakObjectPtr::operator=(&local_res8,0);
      *(undefined4 *)(plVar4 + 1) = local_res8;
      *(undefined4 *)((longlong)plVar4 + 0xc) = local_resc;
      if (*plVar4 != 0) {
        local_28 = 0;
        local_20 = 5;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
        FGenericPlatformString::Memcpy(local_28,L"hide",10);
        FUN_142088910(*plVar4,&local_28);
        if (local_28 != 0) {
          FMemory::Free();
        }
      }
      plVar1 = param_1 + 0xcc;
      *(int *)plVar1 = (int)*plVar1 + -1;
      if ((int)*plVar1 == 0) {
        (**(code **)(*param_1 + 0x580))(param_1,1);
      }
    }
  }
  return;
}



// FUNCTION 140ee3e20 FUN_140ee3e20 body=262 status=ok
// SIG undefined FUN_140ee3e20(void)

void FUN_140ee3e20(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong local_18;
  int local_10;
  
  if ((*(longlong *)(param_1 + 0x120) != 0) || (lVar3 = FUN_1423407b0(), lVar3 != 0)) {
    lVar3 = *(longlong *)(param_1 + 0x120);
    if (lVar3 == 0) {
      lVar3 = FUN_1423407b0(param_1);
    }
    UWorld::GetPlayerControllerIterator(lVar3,&local_18);
    while( true ) {
      if ((local_10 < 0) || (*(int *)(local_18 + 8) <= local_10)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) break;
      plVar4 = (longlong *)FWeakObjectPtr::Get();
      if (((plVar4 != (longlong *)0x0) && (cVar2 = (**(code **)(*plVar4 + 0x768))(), cVar2 != '\0'))
         && (lVar3 = UWidgetComponent::GetRenderTarget(), lVar3 != 0)) {
        lVar5 = FUN_14142a560();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((bVar1) && (lVar3 = FUN_140ec9be0(), lVar3 != 0)) {
          FUN_140ee3d10(lVar3,param_1);
        }
      }
      local_10 = local_10 + 1;
    }
  }
  return;
}



// FUNCTION 140ee3f30 FUN_140ee3f30 body=102 status=ok
// SIG undefined FUN_140ee3f30(void)

void FUN_140ee3f30(longlong param_1,undefined1 param_2)

{
  FUN_142398ec0(param_1,0,1);
  if (*(longlong *)(param_1 + 0x7d8) != 0) {
    FUN_1407665e0(*(longlong *)(param_1 + 0x7d8) + 0xc0,param_1);
    (**(code **)(**(longlong **)(param_1 + 0x7d8) + 0x280))();
  }
  *(undefined8 *)(param_1 + 0x7e0) = 0;
  FUN_142388290(param_1,param_2);
  return;
}



// FUNCTION 140ee3fa0 FUN_140ee3fa0 body=176 status=ok
// SIG undefined FUN_140ee3fa0(void)

ulonglong FUN_140ee3fa0(longlong param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulonglong in_RAX;
  uint uVar4;
  float fVar5;
  float fVar6;
  
  if (*(longlong *)(param_1 + 0x170) != 0) {
    fVar5 = (float)FUN_142eedeb0(*(longlong *)(param_1 + 0x170) + 0x2b8);
    iVar1 = FUN_142eb6ea0(*(undefined8 *)(param_1 + 0x170));
    fVar6 = (float)FUN_142eb79f0(*(undefined8 *)(param_1 + 0x170));
    if (ABS(fVar6) <= 1e-08) {
      fVar6 = 1.0;
    }
    iVar2 = (int)ROUND((fVar5 / fVar6 + fVar5 / fVar6) - 0.5);
    uVar3 = iVar2 >> 1;
    in_RAX = (ulonglong)uVar3;
    uVar4 = uVar3 - 1;
    if ((int)uVar3 < 1) {
      uVar4 = uVar3;
    }
    if (*(int *)(param_1 + 0x184) != uVar4 * iVar1) {
      *(uint *)(param_1 + 0x184) = uVar4 * iVar1;
      return CONCAT71((uint7)(uint3)(iVar2 >> 9),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140ee4060 FUN_140ee4060 body=83 status=ok
// SIG undefined FUN_140ee4060(void)

void FUN_140ee4060(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  local_28 = 0;
  local_18 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_58[0] = &LAB_140ee0a40;
  FUN_14208c4f0(param_1,local_58);
  return;
}



// FUNCTION 140ee40c0 FUN_140ee40c0 body=184 status=ok
// SIG undefined FUN_140ee40c0(void)

void FUN_140ee40c0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  
  if (*(char *)(param_1 + 0x201) == '\x01') {
    *(undefined1 *)(param_1 + 0x201) = 2;
    plVar3 = *(longlong **)(param_1 + 0x1a8);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar6 = iVar5 == 0;
      if (bVar6) {
        *(int *)(plVar3 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
      if (!bVar6) {
        while( true ) {
          LOCK();
          bVar6 = iVar5 == (int)plVar3[1];
          if (bVar6) {
            *(int *)(plVar3 + 1) = iVar5 + 1;
          }
          UNLOCK();
          if (bVar6) break;
          LOCK();
          iVar5 = (int)plVar3[1];
          bVar6 = iVar5 == 0;
          if (bVar6) {
            *(int *)(plVar3 + 1) = 0;
            iVar5 = 0;
          }
          UNLOCK();
          if (bVar6) {
            return;
          }
        }
        if (plVar3 != (longlong *)0x0) {
          if (*(longlong *)(param_1 + 0x1a0) != 0) {
            FUN_14203dd70(*(longlong *)(param_1 + 0x1a0),0);
          }
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
    }
  }
  return;
}



// FUNCTION 140ee4180 FUN_140ee4180 body=115 status=ok
// SIG undefined FUN_140ee4180(void)

void FUN_140ee4180(longlong param_1)

{
  longlong local_18 [2];
  
  if (*(longlong *)(param_1 + 0x730) != 0) {
    local_18[1] = 8;
    local_18[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Memcpy(local_18[0],L"rollOff",0x10);
    FUN_142088910(*(undefined8 *)(param_1 + 0x730),local_18);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  FUN_140efbc30(param_1);
  return;
}



// FUNCTION 140ee4200 FUN_140ee4200 body=312 status=ok
// SIG undefined FUN_140ee4200(void)

void FUN_140ee4200(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  iVar6 = (int)param_1[1];
  if (iVar6 != 0) {
    plVar7 = (longlong *)(*param_1 + 0x40);
    do {
      if (plVar7[8] != 0) {
        FMemory::Free();
      }
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
      plVar4 = (longlong *)plVar7[-3];
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
      plVar4 = (longlong *)plVar7[-7];
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
      plVar7 = plVar7 + 0x22;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<FTTLMissionBriefingParamRow,FDefaultAllocator>::ResizeTo(param_1,param_2);
  }
  return;
}



// FUNCTION 140ee4350 FUN_140ee4350 body=276 status=ok
// SIG undefined FUN_140ee4350(void)

void FUN_140ee4350(longlong param_1,char param_2)

{
  char cVar1;
  undefined1 uVar2;
  longlong local_18;
  undefined8 local_10;
  
  if (param_2 == '\0') {
    FUN_140f09980(param_1,*(undefined4 *)(param_1 + 0x2a0));
  }
  else {
    *(undefined4 *)(param_1 + 0x2a0) = *(undefined4 *)(param_1 + 0x1c8);
    if ((*(int *)(param_1 + 0x2f0) != 0) && (*(longlong **)(param_1 + 0x2e8) != (longlong *)0x0)) {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x2e8) + 0x18))();
      if (cVar1 != '\0') {
        TBaseDelegate<void,enum_EPartyReservationResult::Type>::ExecuteIfBound
                  (param_1 + 0x2e8,*(undefined4 *)(param_1 + 0x1c8));
      }
    }
  }
  local_10 = 3;
  local_18 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,&DAT_144601af8,6);
  FUN_142088910(*(undefined8 *)
                 (*(longlong *)(param_1 + 0x198) + (longlong)*(int *)(param_1 + 0x298) * 8),
                &local_18);
  if (local_18 != 0) {
    FMemory::Free();
  }
  *(undefined1 *)(param_1 + 0x29c) = 0;
  uVar2 = (**(code **)(*(longlong *)(param_1 + 0x280) + 0x10))();
  FUN_140ee6dc0(param_1,&local_18,uVar2);
  if (1 < (int)local_10) {
    FUN_142088910(param_1,&local_18);
  }
  if (local_18 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140ee4470 FUN_140ee4470 body=1165 status=ok
// SIG undefined FUN_140ee4470(void)

void FUN_140ee4470(longlong param_1,char param_2)

{
  int *piVar1;
  uint *puVar2;
  void *_Src;
  longlong *plVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  char cVar7;
  undefined1 uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  int iVar12;
  short *psVar13;
  void **ppvVar14;
  undefined4 uVar15;
  short *psVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  short *psVar20;
  short *_Src_00;
  int iVar21;
  undefined4 local_res8 [2];
  void *local_c8;
  ulonglong local_c0;
  longlong local_b8 [2];
  void *local_a8;
  int local_a0;
  undefined4 local_9c;
  short *local_98;
  int local_90;
  void *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  int local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  
  psVar16 = (short *)0x0;
  local_res8[0] = 0;
  if (*(char *)(param_1 + 0x2a8) != '\0') {
    if (param_2 == '\0') {
      FUN_140f09980(param_1,*(undefined4 *)(param_1 + 0x2a0));
    }
    else if (*(longlong *)(param_1 + 0x2b0) != 0) {
      local_res8[0] = 0;
      FUN_142eb8880(*(longlong *)(param_1 + 0x2b0) + 0x308,local_58);
      cVar7 = FText::IsEmpty(local_58);
      bVar5 = false;
      bVar4 = true;
      lVar19 = -1;
      if (cVar7 != '\0') {
        local_b8[0] = 0;
        local_b8[1] = 2;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_b8,0);
        FGenericPlatformString::Memcpy(local_b8[0],&DAT_1445ef8bc,4);
        uVar10 = FText::FromString(local_40,local_b8);
        FText::operator=(local_58,uVar10);
        if (local_38 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_38 + 1;
          lVar6 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_38)(local_38);
            LOCK();
            piVar1 = (int *)((longlong)local_38 + 0xc);
            iVar17 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar17 == 1) {
              (**(code **)(*local_38 + 8))(local_38,1);
            }
          }
        }
        if (local_b8[0] != 0) {
          FMemory::Free();
        }
      }
      puVar11 = (undefined8 *)FText::ToString(local_58);
      local_98 = (short *)0x0;
      iVar17 = *(int *)(puVar11 + 1);
      _Src = (void *)*puVar11;
      local_90 = iVar17;
      _Src_00 = psVar16;
      if (iVar17 != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_98,iVar17,0);
        _Src_00 = local_98;
        _guard_xfg_dispatch_icall_nop(local_98,_Src,(longlong)iVar17 * 2);
      }
      iVar17 = local_90;
      iVar21 = 0;
      psVar13 = _Src_00;
      psVar20 = psVar16;
      while( true ) {
        iVar9 = local_90 + -1;
        if (local_90 == 0) {
          iVar9 = iVar21;
        }
        iVar12 = (int)psVar20;
        if ((iVar9 <= (int)psVar16) || (*psVar13 != 0x30)) break;
        psVar20 = (short *)(ulonglong)(iVar12 + 1);
        psVar16 = (short *)(ulonglong)((int)psVar16 + 1);
        psVar13 = psVar13 + 1;
      }
      if (iVar12 < 1) {
        local_a8 = (void *)0x0;
        local_a0 = local_90;
        if (local_90 == 0) {
          local_9c = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_a8,local_90,0);
          _guard_xfg_dispatch_icall_nop(local_a8,_Src_00,(longlong)iVar17 * 2);
        }
        ppvVar14 = &local_a8;
      }
      else {
        if (local_90 == 0) {
          psVar16 = &DAT_143f3eda8;
          iVar17 = iVar21;
        }
        else {
          psVar16 = _Src_00;
          iVar17 = local_90 + -1;
        }
        iVar12 = iVar17 - iVar12;
        if ((-1 < iVar12) && (iVar21 = iVar17, iVar12 < iVar17)) {
          iVar21 = iVar12;
        }
        local_c0 = 0;
        psVar16 = psVar16 + ((longlong)iVar17 - (longlong)iVar21);
        local_c8 = (void *)0x0;
        if ((psVar16 != (short *)0x0) && (*psVar16 != 0)) {
          do {
            lVar19 = lVar19 + 1;
          } while (psVar16[lVar19] != 0);
          uVar18 = (int)lVar19 + 1;
          local_c0 = (ulonglong)uVar18;
          if (0 < (int)uVar18) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
          }
          FGenericPlatformString::Memcpy(local_c8,psVar16,(longlong)(int)uVar18 * 2);
        }
        ppvVar14 = &local_c8;
        bVar5 = true;
        bVar4 = false;
      }
      local_88 = *ppvVar14;
      *ppvVar14 = (void *)0x0;
      local_80 = *(undefined4 *)(ppvVar14 + 1);
      local_7c = *(undefined4 *)((longlong)ppvVar14 + 0xc);
      ppvVar14[1] = (void *)0x0;
      if ((bVar4) && (local_a8 != (void *)0x0)) {
        FMemory::Free();
      }
      if ((bVar5) && (local_c8 != (void *)0x0)) {
        FMemory::Free();
      }
      cVar7 = FDefaultValueHelper::ParseInt(&local_88,local_res8);
      if (cVar7 == '\0') {
        uVar15 = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x2a0) = local_res8[0];
        uVar15 = local_res8[0];
        if (((*(int *)(param_1 + 0x2f0) != 0) &&
            (*(longlong **)(param_1 + 0x2e8) != (longlong *)0x0)) &&
           (cVar7 = (**(code **)(**(longlong **)(param_1 + 0x2e8) + 0x18))(), uVar15 = local_res8[0]
           , cVar7 != '\0')) {
          TBaseDelegate<void,enum_EPartyReservationResult::Type>::ExecuteIfBound
                    (param_1 + 0x2e8,local_res8[0]);
          uVar15 = local_res8[0];
        }
      }
      FUN_140f09980(param_1,uVar15);
      if (((*(int *)(*(longlong *)(param_1 + 0x2b0) + 0x3c0) != 0) &&
          (plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x2b0) + 0x3b8),
          plVar3 != (longlong *)0x0)) &&
         ((cVar7 = (**(code **)(*plVar3 + 0x18))(), cVar7 != '\0' &&
          ((lVar19 = *(longlong *)(param_1 + 0x2b0), *(int *)(lVar19 + 0x3c0) != 0 &&
           (plVar3 = *(longlong **)(lVar19 + 0x3b8), plVar3 != (longlong *)0x0)))))) {
        (**(code **)(*plVar3 + 0x28))(plVar3,0);
        if (*(longlong *)(lVar19 + 0x3b8) != 0) {
          uVar10 = FMemory::Realloc(*(longlong *)(lVar19 + 0x3b8),0,0);
          *(undefined8 *)(lVar19 + 0x3b8) = uVar10;
        }
        *(undefined4 *)(lVar19 + 0x3c0) = 0;
      }
      if (local_88 != (void *)0x0) {
        FMemory::Free();
      }
      if (_Src_00 != (short *)0x0) {
        FMemory::Free(_Src_00);
      }
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_50 + 1;
        lVar19 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar19 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar1 = (int *)((longlong)local_50 + 0xc);
          iVar17 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar17 == 1) {
            (**(code **)(*local_50 + 8))(local_50,1);
          }
        }
      }
    }
    *(undefined1 *)(param_1 + 0x2a8) = 0;
    if (*(longlong *)(param_1 + 0x290) != 0) {
      puVar2 = (uint *)(*(longlong *)(param_1 + 0x290) + 0x40);
      *puVar2 = *puVar2 & 0xffffff7f;
      local_70 = 0;
      *(undefined1 *)(*(longlong *)(param_1 + 0x290) + 0x630) = 1;
      local_78 = param_1;
      uVar10 = UBlendableInterface::GetPrivateStaticClass();
      local_70 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar10);
      FUN_142ed36d0(*(undefined8 *)(param_1 + 0x290),&local_78,0);
    }
    lVar19 = FUN_142eee1b0(param_1);
    if (lVar19 != 0) {
      FUN_142f06340(lVar19,param_1 + 0x2e0);
      *(undefined8 *)(param_1 + 0x2e0) = 0;
    }
    uVar8 = (**(code **)(*(longlong *)(param_1 + 0x280) + 0x10))();
    FUN_140ee6dc0(param_1,&local_68,uVar8);
    if (1 < local_60) {
      FUN_142088910(param_1,&local_68);
    }
    if (local_68 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140ee4900 FUN_140ee4900 body=279 status=ok
// SIG undefined FUN_140ee4900(void)

void FUN_140ee4900(longlong param_1,undefined4 param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong local_18;
  int local_10;
  
  if ((*(longlong *)(param_1 + 0x120) != 0) || (lVar3 = FUN_1423407b0(), lVar3 != 0)) {
    lVar3 = *(longlong *)(param_1 + 0x120);
    if (lVar3 == 0) {
      lVar3 = FUN_1423407b0(param_1);
    }
    UWorld::GetPlayerControllerIterator(lVar3,&local_18);
    while( true ) {
      if ((local_10 < 0) || (*(int *)(local_18 + 8) <= local_10)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) break;
      plVar4 = (longlong *)FWeakObjectPtr::Get();
      if (((plVar4 != (longlong *)0x0) && (cVar2 = (**(code **)(*plVar4 + 0x768))(), cVar2 != '\0'))
         && (lVar3 = UWidgetComponent::GetRenderTarget(), lVar3 != 0)) {
        lVar5 = FUN_14142a560();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((bVar1) && (lVar3 = FUN_140ec9be0(), lVar3 != 0)) {
          FUN_140ee3d10(lVar3,param_1);
        }
      }
      local_10 = local_10 + 1;
    }
  }
  FUN_14233a670(param_1,param_2);
  return;
}



// FUNCTION 140ee4a40 FUN_140ee4a40 body=104 status=ok
// SIG undefined FUN_140ee4a40(void)

void FUN_140ee4a40(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000140ee4aa5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140ee4ab0 FUN_140ee4ab0 body=82 status=ok
// SIG undefined FUN_140ee4ab0(void)

void FUN_140ee4ab0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000140ee4aff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140ee4b10 FUN_140ee4b10 body=65 status=ok
// SIG undefined FUN_140ee4b10(void)

void FUN_140ee4b10(longlong param_1,undefined1 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000140ee4b4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))(uVar1,param_2,param_3,*(code **)(param_1 + 0x10));
  return;
}



// FUNCTION 140ee4b60 FUN_140ee4b60 body=22 status=ok
// SIG undefined FUN_140ee4b60(void)

undefined1 FUN_140ee4b60(longlong param_1)

{
  FUN_140ee4470(*(undefined8 *)(param_1 + 8),0);
  return 1;
}



// FUNCTION 140ee4b80 FUN_140ee4b80 body=22 status=ok
// SIG undefined FUN_140ee4b80(void)

undefined1 FUN_140ee4b80(longlong param_1)

{
  FUN_140ee4470(*(undefined8 *)(param_1 + 8),1);
  return 1;
}



// FUNCTION 140ee4ba0 FUN_140ee4ba0 body=140 status=ok
// SIG undefined FUN_140ee4ba0(void)

undefined1
FUN_140ee4ba0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7)

{
  undefined8 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 8);
  uVar2 = (undefined1)lVar3;
  if (lVar3 != 0) {
    uVar1 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))(uVar1,param_2,param_3,param_4,param_5,param_6,param_7);
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 140ee4c30 FUN_140ee4c30 body=111 status=ok
// SIG undefined FUN_140ee4c30(void)

undefined1 FUN_140ee4c30(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 8);
  uVar2 = (undefined1)lVar3;
  if (lVar3 != 0) {
    uVar1 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))(uVar1,param_2,param_3,param_4);
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 140ee4ca0 FUN_140ee4ca0 body=92 status=ok
// SIG undefined FUN_140ee4ca0(void)

undefined1 FUN_140ee4ca0(longlong param_1,undefined1 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 8);
  uVar2 = (undefined1)lVar3;
  if (lVar3 != 0) {
    uVar1 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))(uVar1,param_2,param_3);
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 140ee4d00 FUN_140ee4d00 body=309 status=ok
// SIG undefined FUN_140ee4d00(void)

undefined8 FUN_140ee4d00(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  plVar5 = (longlong *)FWeakObjectPtr::Get(param_1 + -0x20);
  if (plVar5 != (longlong *)0x0) {
    lVar6 = AGShrineUsable::GetPrivateStaticClass();
    if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      bVar4 = true;
      bVar3 = false;
      uVar7 = (**(code **)(*plVar5 + 0x588))(plVar5,local_20);
      goto LAB_140ee4d95;
    }
  }
  bVar4 = false;
  bVar3 = true;
  uVar7 = FUN_1404b03b0();
  uVar7 = FText::FText(local_38,uVar7);
LAB_140ee4d95:
  FText::FText(param_2,uVar7);
  if (bVar3) {
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_30 + 1;
      lVar6 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
  }
  if ((bVar4) && (local_18 != (longlong *)0x0)) {
    LOCK();
    plVar5 = local_18 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar1 = (int *)((longlong)local_18 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_18 + 8))(local_18,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 140ee4e40 FUN_140ee4e40 body=214 status=ok
// SIG undefined FUN_140ee4e40(void)

void FUN_140ee4e40(longlong *param_1)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_18 [2];
  
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
        (**(code **)(*param_1 + 0x578))(param_1,0);
      }
    }
  }
  if (param_1[0xe4] != 0) {
    local_18[1] = 5;
    local_18[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Memcpy(local_18[0],L"full",10);
    FUN_142088910(param_1[0xe4],local_18);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140ee4f20 FUN_140ee4f20 body=320 status=ok
// SIG undefined FUN_140ee4f20(void)

void FUN_140ee4f20(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong local_18 [2];
  
  *(undefined4 *)(param_1 + 0x854) = 0;
  *(undefined4 *)(param_1 + 0x864) = 0;
  *(undefined4 *)(param_1 + 0x878) = 0;
  *(undefined2 *)(param_1 + 0x838) = 0;
  *(undefined1 *)(param_1 + 0x83a) = 0;
  if (*(longlong *)(param_1 + 0x720) != 0) {
    local_18[0] = 0;
    local_18[1] = 4;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Memcpy(local_18[0],&DAT_1446017e0,8);
    FUN_142088910(*(undefined8 *)(param_1 + 0x720),local_18);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  if ((*(longlong *)(param_1 + 0x7b0) != 0) && (*(longlong *)(param_1 + 0x7b8) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x7b8) + 8);
    LOCK();
    iVar2 = *piVar1;
    if (iVar2 == 0) {
      *piVar1 = 0;
      iVar2 = 0;
    }
    UNLOCK();
    if (0 < iVar2) {
      uVar3 = FUN_1404b03b0();
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x7a8,uVar3,1,0);
    }
  }
  if ((*(longlong *)(param_1 + 0x7e0) != 0) && (*(longlong *)(param_1 + 0x7e8) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x7e8) + 8);
    LOCK();
    iVar2 = *piVar1;
    if (iVar2 == 0) {
      *piVar1 = 0;
      iVar2 = 0;
    }
    UNLOCK();
    if (0 < iVar2) {
      uVar3 = FUN_1404b03b0();
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x7d8,uVar3,1,0);
    }
  }
  if ((*(longlong *)(param_1 + 0x748) != 0) && (*(longlong *)(param_1 + 0x750) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x750) + 8);
    LOCK();
    iVar2 = *piVar1;
    if (iVar2 == 0) {
      *piVar1 = 0;
      iVar2 = 0;
    }
    UNLOCK();
    if (0 < iVar2) {
      uVar3 = FUN_1404b03b0();
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x740,uVar3,1,0);
    }
  }
  return;
}



// FUNCTION 140ee5060 FUN_140ee5060 body=86 status=ok
// SIG undefined FUN_140ee5060(void)

longlong FUN_140ee5060(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0xc) != '\0') {
    return *(longlong *)(param_1 + 0x688);
  }
  if (*(char *)(param_2 + 0xd) == '\0') {
    if (*(uint *)(param_2 + 8) < 3) {
      return *(longlong *)(param_1 + 0x670 + (longlong)(int)*(uint *)(param_2 + 8) * 8);
    }
  }
  else {
    iVar2 = 0;
    plVar3 = (longlong *)(param_1 + 0x670);
    do {
      lVar1 = *plVar3;
      if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1d0) == 0)) {
        return lVar1;
      }
      iVar2 = iVar2 + 1;
      plVar3 = plVar3 + 1;
    } while (iVar2 < 3);
  }
  return 0;
}



// FUNCTION 140ee50c0 FUN_140ee50c0 body=243 status=ok
// SIG undefined FUN_140ee50c0(void)

ulonglong FUN_140ee50c0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint7 uVar5;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar6;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 0x5d8);
  uVar4 = 0;
  if (lVar1 != 0) {
    lVar2 = FUN_14145f370();
    uVar5 = (uint7)((ulonglong)(lVar2 + 0x88) >> 8);
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      uVar4 = (ulonglong)uVar5 << 8;
    }
    else {
      uVar4 = CONCAT71(uVar5,1);
    }
    if (((char)uVar4 != '\0') && (uVar3 = FUN_140cff230(lVar1), uVar4 = uVar3, uVar3 != 0)) {
      if (*(char *)(lVar1 + 0x1380) != '\0') {
        return (ulonglong)*(byte *)(uVar3 + 0x2ed);
      }
      iVar6 = 1;
      if (*(char *)(lVar1 + 0x1378) != '\0') {
        lVar1 = FUN_142df3510(*(undefined8 *)(lVar1 + 0x848));
        uVar4 = 0;
        if (lVar1 != 0) {
          uVar4 = FUN_142dec940(lVar1,*(undefined8 *)(param_1 + 0x720));
          iVar6 = (int)uVar4;
        }
      }
      if (iVar6 == 0) {
        return (ulonglong)*(byte *)(uVar3 + 0x2ee);
      }
      if (iVar6 == 1) {
        return (ulonglong)*(byte *)(uVar3 + 0x2ec);
      }
      if (iVar6 == 2) {
        return (ulonglong)*(byte *)(uVar3 + 0x2ed);
      }
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 140ee51c0 FUN_140ee51c0 body=711 status=ok
// SIG undefined FUN_140ee51c0(void)

void FUN_140ee51c0(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  int *piVar1;
  void *_Dst;
  void *pvVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  void *pvVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  void *local_68;
  undefined8 local_60;
  void *local_58;
  undefined8 local_50;
  longlong local_48;
  longlong *local_40;
  
  if (*param_2 == 0) {
    plVar3 = (longlong *)param_2[1];
  }
  else {
    while( true ) {
      local_58 = (void *)0x0;
      local_50 = 0;
      FString::AppendInt(&local_58);
      pvVar8 = local_58;
      iVar6 = *(int *)(param_3 + 1);
      if (iVar6 < 2) {
        local_58 = (void *)0x0;
        local_50 = 0;
      }
      else {
        if ((int)local_50 == 0) {
          iVar9 = 0;
        }
        else {
          iVar9 = (int)local_50 + -1;
        }
        pvVar8 = (void *)0x0;
        if ((iVar6 != 0) || (iVar5 = 1, iVar9 == 0)) {
          iVar5 = 0;
        }
        pvVar2 = (void *)*param_3;
        local_68 = (void *)0x0;
        local_60 = CONCAT44(local_60._4_4_,iVar6);
        if ((iVar6 == 0) && (iVar5 + iVar9 == 0)) {
          local_60 = 0;
          uVar11 = 0;
          iVar6 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_68,iVar6 + iVar5 + iVar9,0);
          pvVar8 = local_68;
          _guard_xfg_dispatch_icall_nop(local_68,pvVar2,(longlong)iVar6 * 2);
          uVar11 = local_60 & 0xffffffff;
          iVar6 = local_60._4_4_;
        }
        pvVar2 = local_58;
        iVar5 = (int)uVar11;
        if (iVar9 != 0) {
          iVar10 = iVar5 + (uint)(iVar5 == 0) + iVar9;
          local_60 = CONCAT44(local_60._4_4_,iVar10);
          if (iVar6 < iVar10) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,uVar11);
            pvVar8 = local_68;
          }
          _Dst = (void *)((longlong)pvVar8 + ((longlong)iVar5 - (ulonglong)(iVar5 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(_Dst,pvVar2,(longlong)iVar9 * 2);
          *(undefined2 *)((longlong)iVar9 * 2 + (longlong)_Dst) = 0;
        }
        local_68 = (void *)0x0;
        local_60 = 0;
        if (local_58 != (void *)0x0) {
          FMemory::Free(local_58);
        }
      }
      FUN_1420392d0(*param_2,&local_48);
      if (local_48 == 0) break;
      iVar6 = (int)param_1[1];
      *(int *)(param_1 + 1) = iVar6 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar6 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar6);
      }
      plVar3 = local_40;
      plVar7 = (longlong *)((longlong)iVar6 * 0x10 + *param_1);
      *plVar7 = local_48;
      plVar7[1] = (longlong)local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_40 + 1) = (int)local_40[1] + 1;
        UNLOCK();
        if (local_40 != (longlong *)0x0) {
          LOCK();
          plVar7 = local_40 + 1;
          lVar4 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_40)(local_40);
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
      }
      if (pvVar8 != (void *)0x0) {
        FMemory::Free(pvVar8);
      }
    }
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_40 + 1;
      lVar4 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)local_40 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
    if (pvVar8 != (void *)0x0) {
      FMemory::Free(pvVar8);
    }
    plVar3 = (longlong *)param_2[1];
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar3 + 1;
    lVar4 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
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
  return;
}



// FUNCTION 140ee5490 FUN_140ee5490 body=214 status=ok
// SIG undefined FUN_140ee5490(void)

void FUN_140ee5490(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  float fVar4;
  longlong local_res8;
  undefined1 local_68 [96];
  
  *(undefined1 *)(param_1 + 0x839) = 1;
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x828);
  if (cVar1 != '\0') {
    plVar3 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x828);
    uVar2 = (**(code **)(*plVar3 + 0x408))(plVar3);
    FUN_140f09220(param_1,uVar2);
    if (*(longlong *)(param_1 + 2000) != 0) {
      FUN_142f0ead0(*(longlong *)(param_1 + 2000),0);
      fVar4 = (float)FUN_140ee6aa0(param_1);
      if (0.0 < fVar4) {
        FUN_142ef4ad0(*(longlong *)(param_1 + 2000),fVar4,*(longlong *)(param_1 + 2000) + 0x2d8);
        return;
      }
      local_res8 = param_1;
      FUN_140ec95c0(local_68,&local_res8);
      FUN_14204c280(local_68);
    }
  }
  return;
}



// FUNCTION 140ee5570 FUN_140ee5570 body=167 status=ok
// SIG undefined FUN_140ee5570(void)

void FUN_140ee5570(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  float fVar4;
  
  *(undefined1 *)(param_1 + 0x838) = 1;
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x828);
  if (cVar1 != '\0') {
    plVar3 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x828);
    uVar2 = (**(code **)(*plVar3 + 0x408))(plVar3);
    FUN_140f09220(param_1,uVar2);
    if (*(longlong *)(param_1 + 0x730) != 0) {
      FUN_142f0ead0(*(longlong *)(param_1 + 0x730),0);
      fVar4 = (float)FUN_140ee6b10(param_1);
      if (0.0 < fVar4) {
        FUN_142ef4ad0(*(longlong *)(param_1 + 0x730),fVar4,*(longlong *)(param_1 + 0x730) + 0x2d8);
        return;
      }
      FUN_140eea600(param_1);
    }
  }
  return;
}



// FUNCTION 140ee5620 FUN_140ee5620 body=214 status=ok
// SIG undefined FUN_140ee5620(void)

void FUN_140ee5620(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  float fVar4;
  longlong local_res8;
  undefined1 local_68 [96];
  
  *(undefined1 *)(param_1 + 0x83a) = 1;
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x828);
  if (cVar1 != '\0') {
    plVar3 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x828);
    uVar2 = (**(code **)(*plVar3 + 0x408))(plVar3);
    FUN_140f09220(param_1,uVar2);
    if (*(longlong *)(param_1 + 0x738) != 0) {
      FUN_142f0ead0(*(longlong *)(param_1 + 0x738),0);
      fVar4 = (float)FUN_140ee6bc0(param_1);
      if (0.0 < fVar4) {
        FUN_142ef4ad0(*(longlong *)(param_1 + 0x738),fVar4,*(longlong *)(param_1 + 0x738) + 0x2d8);
        return;
      }
      local_res8 = param_1;
      FUN_140ec9560(local_68,&local_res8);
      FUN_14204c280(local_68);
    }
  }
  return;
}



// FUNCTION 140ee5700 FUN_140ee5700 body=1050 status=ok
// SIG undefined FUN_140ee5700(void)

void FUN_140ee5700(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong *plVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined2 *puVar17;
  longlong *plVar18;
  undefined1 local_res10 [8];
  longlong *local_c8;
  ulonglong local_c0;
  undefined8 local_b8;
  undefined1 local_b0 [8];
  longlong *local_a8;
  undefined1 local_98 [8];
  longlong *local_90;
  longlong local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  longlong local_58 [2];
  longlong local_48 [2];
  
  lVar5 = *(longlong *)(param_1 + 0x4e8);
  if (lVar5 != 0) {
    lVar8 = FUN_142f227c0();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar7) {
      puVar9 = (undefined8 *)FName::FName(local_res10,L"AssetRegistry",1);
      uVar12 = *puVar9;
      uVar10 = FUN_14168dc80();
      plVar11 = (longlong *)FUN_141690010(uVar10,uVar12);
      local_c8 = (longlong *)0x0;
      local_c0 = 0;
      plVar11 = (longlong *)(**(code **)(*plVar11 + 0x48))(plVar11);
      lVar8 = FUN_141341530();
      (**(code **)(*plVar11 + 0x28))(plVar11,*(undefined8 *)(lVar8 + 0x18),&local_c8,1);
      uVar16 = (ulonglong)(int)local_c0;
      plVar18 = local_c8 + uVar16 * 0xb;
      plVar11 = local_c8;
      if (local_c8 != plVar18) {
        do {
          if (*plVar11 != 0) {
            puVar9 = (undefined8 *)FName::ToString(plVar11,local_58);
            if (*(int *)(puVar9 + 1) == 0) {
              puVar17 = &DAT_143f3eda8;
            }
            else {
              puVar17 = (undefined2 *)*puVar9;
            }
            uVar12 = UObject::GetPrivateStaticClass();
            lVar8 = FUN_141799410(uVar12,0,puVar17,0);
            if (local_58[0] != 0) {
              FMemory::Free();
            }
            if (lVar8 == 0) {
              puVar9 = (undefined8 *)FName::ToString(plVar11,local_48);
              if (*(int *)(puVar9 + 1) == 0) {
                puVar17 = &DAT_143f3eda8;
              }
              else {
                puVar17 = (undefined2 *)*puVar9;
              }
              uVar12 = UObject::GetPrivateStaticClass();
              lVar8 = FUN_141799c90(uVar12,0,puVar17,0,0,0,1);
              if (local_48[0] != 0) {
                FMemory::Free();
              }
              if (lVar8 == 0) goto LAB_140ee5a5f;
            }
            lVar13 = FUN_141341530();
            if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar13 + 0x90) * 8) != lVar13 + 0x88)) {
              bVar7 = false;
            }
            else {
              bVar7 = true;
            }
            if (bVar7) {
              plVar3 = (longlong *)(lVar5 + 0xc0);
              bVar7 = false;
              plVar6 = (longlong *)*plVar3;
              if (plVar6 != plVar6 + (longlong)*(int *)(lVar5 + 200) * 0xb) {
                plVar14 = plVar6 + 7;
                do {
                  if ((*plVar14 != 0) && (*plVar14 == lVar8)) {
                    bVar7 = true;
                    break;
                  }
                  plVar1 = plVar14 + 4;
                  plVar14 = plVar14 + 0xb;
                } while (plVar1 != plVar6 + (longlong)*(int *)(lVar5 + 200) * 0xb);
              }
              if (!bVar7) {
                local_b8 = 0;
                FText::FText(local_b0);
                FText::FText(local_98);
                local_b8 = *(undefined8 *)(lVar8 + 0xe0);
                local_78 = 0;
                uStack_70 = 0;
                local_68 = 1;
                local_80 = lVar8;
                FText::operator=(local_b0,lVar8 + 200);
                local_68 = *(undefined1 *)(lVar8 + 0xc0);
                iVar4 = *(int *)(lVar5 + 200);
                *(int *)(lVar5 + 200) = iVar4 + 1;
                if (*(int *)(lVar5 + 0xcc) < iVar4 + 1) {
                  TArray<FCloudFileHeader,FDefaultAllocator>::ResizeGrow(plVar3,iVar4);
                }
                puVar9 = (undefined8 *)((longlong)iVar4 * 0x58 + *plVar3);
                *puVar9 = local_b8;
                FText::FText(puVar9 + 1,local_b0);
                FText::FText(puVar9 + 4,local_98);
                plVar3 = local_90;
                puVar9[7] = local_80;
                puVar9[8] = local_78;
                puVar9[9] = uStack_70;
                *(undefined1 *)(puVar9 + 10) = local_68;
                if (local_90 != (longlong *)0x0) {
                  LOCK();
                  plVar6 = local_90 + 1;
                  lVar8 = *plVar6;
                  *(int *)plVar6 = (int)*plVar6 + -1;
                  UNLOCK();
                  if ((int)lVar8 == 1) {
                    (**(code **)*local_90)(local_90);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar3 + 0xc);
                    iVar4 = *piVar2;
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (iVar4 == 1) {
                      (**(code **)(*plVar3 + 8))(plVar3,1);
                    }
                  }
                }
                plVar3 = local_a8;
                if (local_a8 != (longlong *)0x0) {
                  LOCK();
                  plVar6 = local_a8 + 1;
                  lVar8 = *plVar6;
                  *(int *)plVar6 = (int)*plVar6 + -1;
                  UNLOCK();
                  if ((int)lVar8 == 1) {
                    (**(code **)*local_a8)(local_a8);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar3 + 0xc);
                    iVar4 = *piVar2;
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (iVar4 == 1) {
                      (**(code **)(*plVar3 + 8))(plVar3,1);
                    }
                  }
                }
              }
            }
          }
LAB_140ee5a5f:
          plVar11 = plVar11 + 0xb;
        } while (plVar11 != plVar18);
        uVar16 = local_c0 & 0xffffffff;
      }
      if ((int)uVar16 != 0) {
        plVar11 = local_c8 + 6;
        do {
          if (plVar11[1] != 0) {
            FMemory::Free();
          }
          plVar18 = (longlong *)*plVar11;
          if (plVar18 != (longlong *)0x0) {
            LOCK();
            plVar3 = plVar18 + 1;
            lVar5 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*plVar18)(plVar18);
              LOCK();
              piVar2 = (int *)((longlong)plVar18 + 0xc);
              iVar4 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*plVar18 + 8))(plVar18,1);
              }
            }
          }
          plVar11 = plVar11 + 0xb;
          uVar15 = (int)uVar16 - 1;
          uVar16 = (ulonglong)uVar15;
        } while (uVar15 != 0);
      }
      if (local_c8 != (longlong *)0x0) {
        FMemory::Free(local_c8);
      }
    }
  }
  return;
}



// FUNCTION 140ee5b20 FUN_140ee5b20 body=246 status=ok
// SIG undefined FUN_140ee5b20(void)

void FUN_140ee5b20(longlong param_1,int param_2)

{
  longlong local_18 [2];
  
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x1a0))) {
    local_18[1] = 3;
    local_18[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Memcpy(local_18[0],&DAT_144601af8,6);
    FUN_142088910(*(undefined8 *)
                   (*(longlong *)(param_1 + 0x198) + (longlong)*(int *)(param_1 + 0x298) * 8),
                  local_18);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    *(int *)(param_1 + 0x298) = param_2;
    local_18[0] = 0;
    local_18[1] = 0xc;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Memcpy(local_18[0],L"focusedOver",0x18);
    FUN_142088910(*(undefined8 *)
                   (*(longlong *)(param_1 + 0x198) + (longlong)*(int *)(param_1 + 0x298) * 8),
                  local_18);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140ee5c20 FUN_140ee5c20 body=256 status=ok
// SIG undefined FUN_140ee5c20(void)

void FUN_140ee5c20(longlong param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int iVar7;
  int local_res8 [2];
  longlong local_res18 [2];
  
  if (*(longlong *)(param_1 + 0x170) != 0) {
    iVar2 = FUN_142eb7440();
    iVar7 = 0;
    if (0 < iVar2) {
      do {
        lVar3 = FUN_142eb6a30(*(undefined8 *)(param_1 + 0x170),iVar7);
        if (lVar3 == 0) {
LAB_140ee5cbc:
          lVar3 = 0;
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
          if (!bVar1) goto LAB_140ee5cbc;
        }
        local_res8[0] = iVar7;
        local_res18[0] = lVar3;
        if (*(int *)(param_2 + 8) == 0) {
LAB_140ee5ce7:
          uVar5 = 0;
        }
        else {
          plVar6 = (longlong *)param_2[6];
          if ((longlong *)param_2[6] == (longlong *)0x0) {
            plVar6 = param_2 + 2;
          }
          if (plVar6 == (longlong *)0x0) goto LAB_140ee5ce7;
          uVar5 = (**(code **)(*plVar6 + 8))();
        }
        (*(code *)*param_2)(uVar5,local_res8,local_res18);
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar2);
    }
  }
  return;
}



// FUNCTION 140ee5d20 thunk_FUN_140f069b0 body=5 status=ok
// SIG undefined thunk_FUN_140f069b0(void)

void thunk_FUN_140f069b0(longlong param_1)

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



// FUNCTION 140ee5d30 FUN_140ee5d30 body=138 status=ok
// SIG undefined FUN_140ee5d30(void)

void FUN_140ee5d30(longlong param_1,float param_2)

{
  char cVar1;
  float fVar2;
  
  fVar2 = 0.0;
  if ((0.0 <= param_2) && (fVar2 = param_2, 1.0 <= param_2)) {
    fVar2 = 1.0;
  }
  if (*(longlong *)(param_1 + 0x670) != 0) {
    FUN_142f0ead0(*(longlong *)(param_1 + 0x670),fVar2);
  }
  cVar1 = *(char *)(param_1 + 0x768);
  if (cVar1 != '\0') {
    if (1.0 <= param_2) {
      FUN_140efd5a0(param_1);
      cVar1 = *(char *)(param_1 + 0x768);
    }
    if (cVar1 != '\0') goto LAB_140ee5da1;
  }
  if (param_2 < 1.0) {
    FUN_140eee1f0(param_1);
  }
LAB_140ee5da1:
  *(bool *)(param_1 + 0x768) = param_2 < 1.0;
  return;
}



// FUNCTION 140ee5dc0 FUN_140ee5dc0 body=88 status=ok
// SIG undefined FUN_140ee5dc0(void)

undefined4 FUN_140ee5dc0(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = FUN_141488bb0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return *(undefined4 *)(param_2 + 0x670);
    }
  }
  return 0;
}



// FUNCTION 140ee5e20 FUN_140ee5e20 body=174 status=ok
// SIG undefined FUN_140ee5e20(void)

longlong FUN_140ee5e20(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((param_1 != 0) && (lVar3 = *(longlong *)(param_1 + 0x848), lVar3 != 0)) {
    lVar2 = FUN_1413f82e0();
    lVar4 = *(longlong *)(lVar3 + 0x10);
    if ((*(int *)(lVar4 + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar4 + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar3 = FUN_140c430a0(lVar3,CONCAT71((int7)((ulonglong)lVar4 >> 8),3));
      if (lVar3 != 0) {
        lVar4 = ANavLinkProxy::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          return lVar3;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140ee5ed0 FUN_140ee5ed0 body=268 status=ok
// SIG undefined FUN_140ee5ed0(void)

void FUN_140ee5ed0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 local_res10;
  undefined4 local_res14;
  longlong local_68;
  undefined8 local_60;
  undefined1 local_58 [32];
  longlong local_38;
  
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_2,0);
  }
  lVar5 = FUN_140ee5e20(param_1);
  if (lVar5 != 0) {
    local_68 = 0;
    local_60 = 0;
    FUN_142ffa060(lVar5,0,&local_68);
    lVar1 = local_68 + (longlong)(int)local_60 * 4;
    for (lVar6 = local_68; lVar6 != lVar1; lVar6 = lVar6 + 4) {
      FUN_142fde510(local_58);
      cVar4 = FUN_142ffa4f0(lVar5,lVar6,local_58);
      if ((cVar4 != '\0') && (local_38 != 0)) {
        FWeakObjectPtr::operator=(&local_res10);
        iVar3 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar3 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
        }
        puVar2 = (undefined4 *)(*param_2 + (longlong)iVar3 * 8);
        *puVar2 = local_res10;
        puVar2[1] = local_res14;
      }
    }
    if (local_68 != 0) {
      FMemory::Free(local_68);
    }
  }
  return;
}



// FUNCTION 140ee5fe0 FUN_140ee5fe0 body=172 status=ok
// SIG undefined FUN_140ee5fe0(void)

longlong FUN_140ee5fe0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((param_1 != 0) && (lVar3 = *(longlong *)(param_1 + 0x848), lVar3 != 0)) {
    lVar2 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar3 = FUN_140c41a30(lVar3);
      if (lVar3 != 0) {
        lVar2 = ANavLinkProxy::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar2 + 0x90) * 8) != lVar2 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          return lVar3;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140ee6090 FUN_140ee6090 body=471 status=ok
// SIG undefined FUN_140ee6090(void)

ulonglong FUN_140ee6090(undefined8 param_1,longlong param_2,longlong *param_3,undefined8 param_4,
                       int param_5)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_50 [8];
  longlong *local_48;
  undefined1 local_38 [8];
  longlong *local_30;
  
  lVar13 = *param_3;
  iVar14 = 0;
  lVar10 = lVar13 + (longlong)(int)param_3[1] * 8;
  for (; lVar13 != lVar10; lVar13 = lVar13 + 8) {
    cVar6 = FWeakObjectPtr::IsValid(lVar13);
    if (cVar6 != '\0') {
      iVar14 = iVar14 + 1;
    }
  }
  bVar5 = true;
  lVar10 = FUN_140ee5fe0(param_1);
  if (lVar10 != 0) {
    iVar7 = ASwitchActor::GetSelectedOption(lVar10);
    iVar8 = FUN_142b47070(lVar10);
    bVar5 = true;
    if (param_5 + iVar8 < iVar7 + iVar14) {
      bVar5 = false;
    }
  }
  bVar3 = true;
  bVar4 = false;
  if (param_2 != 0) {
    lVar10 = FUN_141488bb0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
         (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
      bVar3 = false;
    }
    if ((bVar3) && (bVar4 = false, *(int *)(param_2 + 0x670) < iVar14)) {
      bVar4 = true;
    }
  }
  if (iVar14 < 1) {
    uVar11 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_68,L"You have not selected any items for extraction.",
                        L"OakUIGearUpInterface",L"NoItemsToOfferText");
    uVar12 = FText::operator=(param_4,uVar11);
    local_30 = local_60;
  }
  else if (bVar4) {
    uVar11 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_50,L"You cannot extract any more items from this extractor.",
                        L"OakUIGearUpInterface",L"TooManyItemsOfferedText");
    uVar12 = FText::operator=(param_4,uVar11);
    local_30 = local_48;
  }
  else {
    if (bVar5) {
      return 1;
    }
    uVar11 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_38,L"You do not have enough storage space to make this extraction.",
                        L"OakUIGearUpInterface",L"NotEnoughStorageSpaceToOfferText");
    uVar12 = FText::operator=(param_4,uVar11);
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    uVar9 = (int)lVar10 - 1;
    uVar12 = (ulonglong)uVar9;
    if (uVar9 == 0) {
      uVar12 = (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      iVar14 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        uVar12 = (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  return uVar12 & 0xffffffffffffff00;
}



// FUNCTION 140ee6270 FUN_140ee6270 body=1008 status=ok
// SIG undefined FUN_140ee6270(void)

void FUN_140ee6270(longlong *param_1,longlong param_2,void **param_3)

{
  void *pvVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  void *pvVar13;
  int iVar14;
  undefined8 local_res8;
  longlong local_res10;
  void *local_res20;
  longlong local_58;
  void *local_50;
  ulonglong local_48;
  
  if (param_1 == (longlong *)0x0) {
    return;
  }
  local_res10 = param_2;
  lVar7 = (**(code **)(*param_1 + 0x148))();
  if (lVar7 == 0) {
    return;
  }
  lVar7 = *(longlong *)(lVar7 + 0x148);
  if (lVar7 == 0) {
    return;
  }
  lVar8 = FUN_14131fc50();
  if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
      lVar8 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    return;
  }
  lVar8 = param_1[0x109];
  if (lVar8 == 0) {
LAB_140ee6351:
    lVar8 = 0;
  }
  else {
    lVar9 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_140ee6351;
  }
  lVar9 = FUN_140ee5e20(param_1);
  local_res20 = (void *)FUN_140ee5fe0(param_1);
  if (param_2 != 0) {
    lVar10 = FUN_141488bb0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
         (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_140ee63b5;
  }
  param_2 = 0;
  local_res10 = 0;
LAB_140ee63b5:
  lVar11 = FUN_140ad4bf0();
  lVar10 = *(longlong *)(lVar7 + 0x548);
  local_res8 = (ulonglong)local_res8._4_4_ << 0x20;
  iVar14 = 0;
  if (((lVar9 != 0) && (iVar14 = 0, local_res20 != (void *)0x0)) && (lVar8 != 0)) {
    if (param_2 != 0) {
      local_50 = (void *)0x0;
      local_48 = 0;
      local_58 = param_2;
      if (&local_50 != param_3) {
        uVar2 = *(uint *)(param_3 + 1);
        local_res20 = *param_3;
        local_48 = (ulonglong)uVar2;
        if (uVar2 != 0) {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_50,uVar2,0);
          _guard_xfg_dispatch_icall_nop(local_50,local_res20,(longlong)(int)uVar2 << 3);
        }
      }
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_2 + 0x678,&local_58);
      pvVar1 = local_50;
      if (param_3 != &local_50) {
        local_res20 = (void *)CONCAT44(local_res20._4_4_,(int)local_48);
        *(int *)(param_3 + 1) = (int)local_48;
        if (((int)local_48 == 0) && (*(int *)((longlong)param_3 + 0xc) == 0)) {
          *(undefined4 *)((longlong)param_3 + 0xc) = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                    (param_3,local_48 & 0xffffffff);
          _guard_xfg_dispatch_icall_nop(*param_3,pvVar1,(longlong)(int)local_res20 << 3);
        }
      }
      if (local_50 != (void *)0x0) {
        FMemory::Free(local_50);
      }
    }
    pvVar13 = *param_3;
    pvVar1 = (void *)((longlong)pvVar13 + (longlong)*(int *)(param_3 + 1) * 8);
    iVar14 = 0;
    for (; pvVar13 != pvVar1; pvVar13 = (void *)((longlong)pvVar13 + 8)) {
      cVar4 = FWeakObjectPtr::IsValid(pvVar13);
      if (cVar4 != '\0') {
        uVar12 = FWeakObjectPtr::Get(pvVar13);
        FUN_142ffa6f0(lVar9,&local_res20,uVar12);
        if ((int)local_res20 != -1) {
          iVar14 = iVar14 + 1;
          FUN_140b45600(lVar9,&local_res20,lVar8,1,1);
          if ((lVar11 != 0) && (lVar10 != 0)) {
            FUN_142dd18b0(lVar10,param_1,lVar11,1);
            local_res8 = CONCAT44(local_res8._4_4_,(int)local_res8 + 1);
          }
        }
      }
      param_2 = local_res10;
    }
    Z_Construct_UClass_ACharacterGunfire_Statics::NewProp_bSkipWallChecks_SetBit();
    if ((lVar11 != 0) && (lVar10 != 0)) {
      cVar4 = FUN_140ad4bd0(lVar7);
      bVar5 = FUN_140ad4bb0();
      if ((cVar4 != '\0') && (bVar5 != 0)) {
        iVar6 = FUN_142dcff10(lVar10,param_1,lVar11);
        if ((int)(uint)bVar5 <= iVar6 + (int)local_res8) {
          uVar12 = FUN_142d80d40();
          FUN_142d94090(uVar12,param_1,cVar4);
        }
      }
    }
  }
  if (param_2 != 0) {
    iVar6 = *(int *)(param_2 + 0x670) - iVar14;
    if (iVar6 < 1) {
      iVar6 = 0;
    }
    *(int *)(param_2 + 0x670) = iVar6;
    if (iVar6 < 1) {
      local_res8 = param_2;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_2 + 0x688,&local_res8);
      iVar6 = *(int *)(param_2 + 0x670);
    }
    local_res8 = CONCAT44(iVar14,iVar6);
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_2 + 0x660,&local_res8);
  }
  return;
}



// FUNCTION 140ee6660 FUN_140ee6660 body=114 status=ok
// SIG undefined FUN_140ee6660(void)

float FUN_140ee6660(void)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  DWORD DVar4;
  longlong lVar5;
  float fVar6;
  
  fVar6 = (float)FUN_142eb5990();
  iVar3 = FUN_14203bd00();
  lVar1 = DAT_1468722c0;
  if (1 < iVar3) {
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar2 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar4 = GetCurrentThreadId(), DVar4 != DAT_1468c21c0)) {
      lVar5 = 4;
    }
    else {
      lVar5 = 0;
    }
    return fVar6 * *(float *)(lVar5 + lVar1);
  }
  return fVar6;
}



// FUNCTION 140ee66e0 FUN_140ee66e0 body=641 status=ok
// SIG undefined FUN_140ee66e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ee66e0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  int iVar6;
  longlong lVar7;
  ulonglong *puVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [24];
  undefined1 local_c0 [24];
  undefined1 local_a8 [24];
  undefined1 local_90 [24];
  undefined1 local_78 [24];
  undefined1 local_60 [24];
  undefined1 local_48 [32];
  ulonglong local_28 [2];
  
  local_28[0] = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  iVar6 = (int)param_1[1];
  if (iVar6 != 0) {
    plVar9 = (longlong *)(*param_1 + 8);
    do {
      plVar4 = (longlong *)*plVar9;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
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
      plVar9 = plVar9 + 3;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (local_d8,L"None",L"GFxCrosshairWidget",L"None");
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (local_c0,L"White",L"GFxCrosshairWidget",L"White");
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (local_a8,L"Green",L"GFxCrosshairWidget",L"Green");
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (local_90,&DAT_1445fd5d0,L"GFxCrosshairWidget",&DAT_1445fd570);
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (local_78,L"Teal",L"GFxCrosshairWidget",L"Teal");
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (local_60,L"Orange",L"GFxCrosshairWidget",L"Orange");
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (local_48,L"Purple",L"GFxCrosshairWidget",L"Purple");
  iVar6 = (int)param_1[1];
  if (iVar6 != 0) {
    plVar9 = (longlong *)(*param_1 + 8);
    do {
      plVar4 = (longlong *)*plVar9;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
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
      plVar9 = plVar9 + 3;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  lVar10 = 7;
  *(undefined4 *)(param_1 + 1) = 7;
  TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy
            (param_1,7,*(undefined4 *)((longlong)param_1 + 0xc));
  lVar7 = *param_1;
  puVar5 = local_d8;
  iVar6 = 7;
  do {
    FText::FText(lVar7,puVar5);
    lVar7 = lVar7 + 0x18;
    puVar5 = puVar5 + 0x18;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  puVar8 = local_28;
  do {
    plVar9 = (longlong *)puVar8[-3];
    puVar8 = puVar8 + -3;
    lVar10 = lVar10 + -1;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar9 + 1;
      lVar7 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
  } while (lVar10 != 0);
  return;
}



// FUNCTION 140ee6970 FUN_140ee6970 body=66 status=ok
// SIG undefined FUN_140ee6970(void)

undefined8 FUN_140ee6970(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  if (*(longlong *)(DAT_146b33f38 + 0x90) != 0) {
    uVar1 = FUN_1411e11d0(*(longlong *)(DAT_146b33f38 + 0x90),param_2);
    return uVar1;
  }
  return 0;
}



// FUNCTION 140ee69c0 FUN_140ee69c0 body=194 status=ok
// SIG undefined FUN_140ee69c0(void)

undefined8 FUN_140ee69c0(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 local_228 [272];
  undefined1 local_118 [272];
  
  if (*(longlong *)(param_1 + 0x170) != 0) {
    iVar3 = FUN_142eb7a00();
    if ((-1 < iVar3) && (iVar3 < *(int *)(param_1 + 0x168))) {
      uVar4 = FUN_140e9a4f0(local_118,(longlong)iVar3 * 0x110 + *(longlong *)(param_1 + 0x160));
      bVar1 = false;
      bVar2 = true;
      goto LAB_140ee6a40;
    }
  }
  _guard_xfg_dispatch_icall_nop(local_228,0,0x110);
  uVar4 = FUN_140ed0240(local_228);
  bVar2 = false;
  bVar1 = true;
LAB_140ee6a40:
  FUN_140e9a4f0(param_2,uVar4);
  if (bVar1) {
    FUN_140e9c360(local_228);
  }
  if (bVar2) {
    FUN_140e9c360(local_118);
  }
  return param_2;
}



// FUNCTION 140ee6a90 FUN_140ee6a90 body=7 status=ok
// SIG undefined FUN_140ee6a90(void)

undefined4 FUN_140ee6a90(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x1c8);
}



// FUNCTION 140ee6aa0 FUN_140ee6aa0 body=97 status=ok
// SIG undefined FUN_140ee6aa0(void)

float FUN_140ee6aa0(longlong param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)*(int *)(param_1 + 0x868);
  if (0.0 < fVar1) {
    fVar2 = fVar1 - (float)*(int *)(param_1 + 0x86c);
    if (1e-08 < ABS(fVar2)) {
      return ((float)*(int *)(param_1 + 0x870) - (float)*(int *)(param_1 + 0x86c)) / fVar2;
    }
    if (fVar1 <= (float)*(int *)(param_1 + 0x870)) {
      return 1.0;
    }
  }
  return 0.0;
}



// FUNCTION 140ee6b10 FUN_140ee6b10 body=89 status=ok
// SIG undefined FUN_140ee6b10(void)

float FUN_140ee6b10(longlong param_1)

{
  float fVar1;
  
  fVar1 = (float)*(int *)(param_1 + 0x84c) - (float)*(int *)(param_1 + 0x850);
  if (1e-08 < ABS(fVar1)) {
    return ((float)*(int *)(param_1 + 0x848) - (float)*(int *)(param_1 + 0x850)) / fVar1;
  }
  if ((float)*(int *)(param_1 + 0x84c) <= (float)*(int *)(param_1 + 0x848)) {
    return 1.0;
  }
  return 0.0;
}



// FUNCTION 140ee6b70 FUN_140ee6b70 body=22 status=ok
// SIG undefined FUN_140ee6b70(void)

undefined4 FUN_140ee6b70(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x170) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(longlong *)(param_1 + 0x170) + 0x270);
}



// FUNCTION 140ee6b90 FUN_140ee6b90 body=42 status=ok
// SIG undefined FUN_140ee6b90(void)

float FUN_140ee6b90(longlong param_1)

{
  if (0 < *(int *)(param_1 + 0x6fc)) {
    return (float)*(int *)(param_1 + 0x6f8) / (float)*(int *)(param_1 + 0x6fc);
  }
  return 1.0;
}



// FUNCTION 140ee6bc0 FUN_140ee6bc0 body=89 status=ok
// SIG undefined FUN_140ee6bc0(void)

float FUN_140ee6bc0(longlong param_1)

{
  float fVar1;
  
  fVar1 = (float)*(int *)(param_1 + 0x87c) - (float)*(int *)(param_1 + 0x880);
  if (1e-08 < ABS(fVar1)) {
    return ((float)*(int *)(param_1 + 0x884) - (float)*(int *)(param_1 + 0x880)) / fVar1;
  }
  if ((float)*(int *)(param_1 + 0x87c) <= (float)*(int *)(param_1 + 0x884)) {
    return 1.0;
  }
  return 0.0;
}



// FUNCTION 140ee6c20 FUN_140ee6c20 body=415 status=ok
// SIG undefined FUN_140ee6c20(void)

longlong * FUN_140ee6c20(longlong *param_1,longlong *param_2,longlong *param_3)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  char *pcVar5;
  longlong lVar6;
  
  lVar3 = FWeakObjectPtr::Get((longlong)param_1 + 0x5cc);
  if (lVar3 == 0) {
LAB_140ee6c90:
    cVar2 = '\0';
  }
  else {
    lVar4 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140ee6c90;
    pcVar5 = (char *)FUN_140a5dc70(lVar3);
    cVar2 = *pcVar5;
  }
  lVar3 = param_3[7];
  if (lVar3 == 0) {
LAB_140ee6cd2:
    lVar3 = 0;
  }
  else {
    lVar4 = FUN_141340df0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140ee6cd2;
  }
  lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar4 == 0) {
LAB_140ee6d38:
    lVar4 = 0;
  }
  else {
    lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar4 = *(longlong *)(lVar4 + 400);
    if (lVar4 == 0) goto LAB_140ee6d38;
    lVar6 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140ee6d38;
  }
  if (lVar3 == 0) {
LAB_140ee6d95:
    FUN_142eb6420(param_1,param_2,param_3);
  }
  else {
    if (((((cVar2 == '\x02') || (*(char *)(lVar3 + 0xc1) == '\0')) || (lVar4 == 0)) ||
        (*(char *)(lVar4 + 0xb78) != '\0')) &&
       ((cVar2 == '\x01' || (*(char *)(lVar3 + 0xc2) == '\0')))) {
      cVar2 = FUN_140eec8b0(param_1);
      if ((cVar2 != '\0') || (*(char *)(lVar3 + 0xc3) == '\0')) goto LAB_140ee6d95;
    }
    param_1[0xdc] = *param_3;
    *param_2 = param_1[0xd6];
  }
  return param_2;
}



// FUNCTION 140ee6dc0 FUN_140ee6dc0 body=410 status=ok
// SIG undefined FUN_140ee6dc0(void)

undefined8 * FUN_140ee6dc0(undefined8 param_1,undefined8 *param_2,undefined1 param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  
  cVar1 = FUN_142ebdd00(param_3);
  cVar2 = FUN_142ebdcf0(param_3);
  cVar3 = FUN_142ebdcd0(param_3);
  cVar4 = ULowEntryExtendedStandardLibrary::ByteToBoolean(param_3);
  cVar5 = UNF_CustomizationStatics::IsWeaponType(param_3);
  if (cVar1 == '\0') {
    if (cVar2 == '\0') {
      if (cVar3 == '\0') {
        *param_2 = 0;
        param_2[1] = 0;
        if (cVar4 == '\0') {
          return param_2;
        }
        pwVar8 = L"disabled";
        if (cVar5 != '\0') {
          pwVar8 = L"focusedDisabled";
        }
        if (*pwVar8 == L'\0') {
          return param_2;
        }
        lVar7 = -1;
        do {
          lVar7 = lVar7 + 1;
        } while (pwVar8[lVar7] != L'\0');
      }
      else {
        pwVar8 = L"down";
        if (cVar5 != '\0') {
          pwVar8 = L"focusedDown";
        }
        *param_2 = 0;
        param_2[1] = 0;
        if (*pwVar8 == L'\0') {
          return param_2;
        }
        lVar7 = -1;
        do {
          lVar7 = lVar7 + 1;
        } while (pwVar8[lVar7] != L'\0');
      }
    }
    else {
      pwVar8 = L"over";
      if (cVar5 != '\0') {
        pwVar8 = L"focusedOver";
      }
      *param_2 = 0;
      param_2[1] = 0;
      if (*pwVar8 == L'\0') {
        return param_2;
      }
      lVar7 = -1;
      do {
        lVar7 = lVar7 + 1;
      } while (pwVar8[lVar7] != L'\0');
    }
  }
  else {
    pwVar8 = L"up";
    if (cVar5 != '\0') {
      pwVar8 = L"focusedUp";
    }
    *param_2 = 0;
    param_2[1] = 0;
    if (*pwVar8 == L'\0') {
      return param_2;
    }
    lVar7 = -1;
    do {
      lVar7 = lVar7 + 1;
    } while (pwVar8[lVar7] != L'\0');
  }
  iVar6 = (int)lVar7 + 1;
  *(int *)(param_2 + 1) = iVar6;
  if (0 < iVar6) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  }
  FGenericPlatformString::Memcpy(*param_2,pwVar8,(longlong)iVar6 * 2);
  return param_2;
}



// FUNCTION 140ee6f60 FUN_140ee6f60 body=116 status=ok
// SIG undefined FUN_140ee6f60(void)

longlong FUN_140ee6f60(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x170) == 0) {
    return 0;
  }
  lVar2 = FUN_142eb6a30();
  if (lVar2 != 0) {
    lVar3 = FUN_141324a80();
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



// FUNCTION 140ee6fe0 FUN_140ee6fe0 body=228 status=ok
// SIG undefined FUN_140ee6fe0(void)

longlong FUN_140ee6fe0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  lVar4 = *(longlong *)(param_1 + 0x28);
  lVar5 = (longlong)*(int *)(param_1 + 0x30) * 0x10 + lVar4;
  while( true ) {
    if (lVar4 == lVar5) {
      FWeakObjectPtr::operator=(&local_18,0);
      lVar4 = 0;
      local_10 = 0;
      FWeakObjectPtr::operator=(&local_18,param_2);
      iVar1 = *(int *)(param_1 + 0x30);
      *(int *)(param_1 + 0x30) = iVar1 + 1;
      if (*(int *)(param_1 + 0x34) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x28,iVar1);
      }
      lVar5 = *(longlong *)(param_1 + 0x28);
      lVar3 = (longlong)iVar1 * 0x10;
      *(undefined4 *)(lVar5 + lVar3) = local_18;
      *(undefined4 *)(lVar5 + 4 + lVar3) = local_14;
      *(undefined8 *)(lVar5 + 8 + lVar3) = local_10;
      if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x30))) {
        lVar4 = *(longlong *)(param_1 + 0x28) + lVar3;
      }
      return lVar4;
    }
    cVar2 = FUN_14058c1e0(lVar4,param_2);
    if (cVar2 != '\0') break;
    lVar4 = lVar4 + 0x10;
  }
  return lVar4;
}



// FUNCTION 140ee70f0 FUN_140ee70f0 body=195 status=ok
// SIG undefined FUN_140ee70f0(void)

int FUN_140ee70f0(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x728);
  if (cVar1 != '\0') {
    if (*param_2 != 0) {
      lVar3 = FUN_142dfdfe0();
      lVar5 = *param_2;
      for (lVar6 = lVar5; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30)) {
        if (lVar6 == lVar3) goto LAB_140ee7140;
      }
    }
    lVar5 = 0;
LAB_140ee7140:
    uVar4 = FWeakObjectPtr::Get(param_1 + 0x728);
    lVar5 = FUN_142dcdc10(uVar4,lVar5);
    if (lVar5 != 0) {
      lVar6 = *(longlong *)(lVar5 + 0x30);
      iVar7 = *(int *)(lVar5 + 0x38);
      lVar5 = lVar6 + (longlong)iVar7 * 8;
      for (; lVar6 != lVar5; lVar6 = lVar6 + 8) {
        iVar2 = FUN_140ee70f0(param_1,lVar6);
        iVar7 = iVar7 + iVar2;
      }
      return iVar7;
    }
  }
  return 0;
}



// FUNCTION 140ee71c0 FUN_140ee71c0 body=120 status=ok
// SIG undefined FUN_140ee71c0(void)

longlong FUN_140ee71c0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong **)(param_1 + 0x170) == (longlong *)0x0) {
    return 0;
  }
  lVar2 = (**(code **)(**(longlong **)(param_1 + 0x170) + 0x2b0))();
  if (lVar2 != 0) {
    lVar3 = FUN_141324a80();
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



// FUNCTION 140ee7240 FUN_140ee7240 body=375 status=ok
// SIG undefined FUN_140ee7240(void)

undefined8 FUN_140ee7240(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined4 local_res8 [2];
  
  lVar5 = FWeakObjectPtr::Get(param_1 + 0x5d8);
  if (lVar5 != 0) {
    lVar6 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (lVar6 = *(longlong *)(lVar5 + 0x528), lVar6 != 0)) {
      lVar7 = FUN_142fd5420();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) && (lVar6 = FUN_1409a7fe0(*(undefined8 *)(lVar6 + 0x2ca0)), lVar6 != 0)) {
        plVar8 = *(longlong **)(lVar6 + 0x30);
        plVar1 = plVar8 + *(int *)(lVar6 + 0x38);
        for (; plVar8 != plVar1; plVar8 = plVar8 + 1) {
          plVar2 = (longlong *)*plVar8;
          if (plVar2 != (longlong *)0x0) {
            lVar6 = FUN_142fd44b0();
            if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
                lVar6 + 0x88)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (bVar3) {
              local_res8[0] = 0;
              cVar4 = FUN_142710360(lVar5,local_res8);
              if (cVar4 == '\0') {
                return 0x3f800000;
              }
              uVar9 = (**(code **)(*plVar2 + 0x290))(plVar2,local_res8);
              return uVar9;
            }
          }
        }
      }
    }
  }
  return 0x3f800000;
}



// FUNCTION 140ee73c0 FUN_140ee73c0 body=2391 status=ok
// SIG undefined FUN_140ee73c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140ee73c0(undefined8 param_1,undefined8 param_2,float param_3)

{
  longlong *plVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  char *pcVar11;
  int iVar12;
  undefined1 auStack_398 [32];
  undefined4 *local_378;
  undefined4 *puStack_370;
  longlong local_368 [6];
  undefined4 *local_338;
  ulonglong *puStack_330;
  undefined1 local_328 [8];
  longlong *local_320;
  undefined1 local_310 [8];
  longlong *local_308;
  undefined8 local_2f8;
  longlong *plStack_2f0;
  undefined8 local_2e8;
  longlong local_2e0;
  undefined8 local_2d8;
  longlong *plStack_2d0;
  undefined8 local_2c8;
  longlong local_2c0;
  undefined8 local_2b8;
  longlong local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined1 local_298 [16];
  undefined8 local_288;
  undefined8 uStack_280;
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  undefined1 local_258 [8];
  longlong *local_250;
  undefined1 local_240 [8];
  longlong *local_238;
  undefined1 local_228 [8];
  longlong *local_220;
  undefined1 local_210 [8];
  longlong *local_208;
  undefined1 local_1f8 [8];
  longlong *local_1f0;
  undefined1 local_1e0 [8];
  longlong *local_1d8;
  undefined1 local_1c8 [8];
  longlong *local_1c0;
  undefined1 local_1b0 [8];
  longlong *local_1a8;
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 local_168 [24];
  undefined1 local_150 [24];
  undefined1 local_138 [24];
  undefined1 local_120 [24];
  undefined4 local_108 [4];
  undefined1 local_f8 [8];
  longlong *local_f0;
  char local_e0;
  undefined4 local_d8 [4];
  undefined1 local_c8 [8];
  longlong *local_c0;
  char local_b0;
  undefined4 local_a8 [4];
  undefined1 local_98 [24];
  undefined1 local_80;
  undefined4 local_78;
  undefined1 local_68 [24];
  undefined1 local_50;
  ulonglong local_48 [2];
  
  local_48[0] = DAT_1468387a8 ^ (ulonglong)auStack_398;
  local_2f8 = 0;
  plStack_2f0 = (longlong *)0x0;
  iVar12 = (int)(param_3 * 100.0) % 100;
  FText::AsNumber(local_310,(int)param_3,0,&local_2f8);
  plVar5 = plStack_2f0;
  if (plStack_2f0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_2f0 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_2f0)(plStack_2f0);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  if ((int)param_3 < 10) {
    local_368[0] = 0;
    local_368[1] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_368,0);
    FGenericPlatformString::Memcpy(local_368[0],L"0{0}",10);
    lVar7 = FText::FText(local_168,local_310);
    uVar8 = FText::FromString(local_210,local_368);
    puVar9 = (undefined8 *)FTextFormat::FTextFormat(local_178,uVar8);
    local_108[0] = 4;
    FText::FText(local_f8,lVar7);
    local_378 = local_108;
    local_e0 = '\x01';
    puStack_370 = local_d8;
    local_2e8 = *puVar9;
    local_2e0 = puVar9[1];
    if (local_2e0 != 0) {
      LOCK();
      *(int *)(local_2e0 + 8) = *(int *)(local_2e0 + 8) + 1;
      UNLOCK();
    }
    local_2a8 = local_378;
    uStack_2a0 = puStack_370;
    uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_298,&local_2a8);
    uVar8 = FText::Format(local_228,&local_2e8,uVar8);
    FText::FText(local_258,uVar8);
    if (local_220 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_220 + 1;
      lVar10 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_220)(local_220);
        LOCK();
        piVar2 = (int *)((longlong)local_220 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_220 + 8))(local_220,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_298);
    if (local_e0 != '\0') {
      local_e0 = '\0';
      if (local_f0 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_f0 + 1;
        lVar10 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
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
    plVar5 = (longlong *)puVar9[1];
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      lVar10 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    plVar5 = *(longlong **)(lVar7 + 8);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    FText::operator=(local_310,local_258);
    if (local_250 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_250 + 1;
      lVar7 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_250)(local_250);
        LOCK();
        piVar2 = (int *)((longlong)local_250 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_250 + 8))(local_250,1);
        }
      }
    }
    if (local_208 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_208 + 1;
      lVar7 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_208)(local_208);
        LOCK();
        piVar2 = (int *)((longlong)local_208 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_208 + 8))(local_208,1);
        }
      }
    }
    if (local_368[0] != 0) {
      FMemory::Free();
    }
  }
  local_2d8 = 0;
  plStack_2d0 = (longlong *)0x0;
  FText::AsNumber(local_328,iVar12,0,&local_2d8);
  plVar5 = plStack_2d0;
  if (plStack_2d0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_2d0 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_2d0)(plStack_2d0);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  if (iVar12 < 10) {
    local_368[2] = 0;
    local_368[3] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_368 + 2,0);
    FGenericPlatformString::Memcpy(local_368[2],L"0{0}",10);
    lVar7 = FText::FText(local_150,local_328);
    uVar8 = FText::FromString(local_1e0,local_368 + 2);
    puVar9 = (undefined8 *)FTextFormat::FTextFormat(local_198,uVar8);
    local_d8[0] = 4;
    FText::FText(local_c8,lVar7);
    local_378 = local_d8;
    local_b0 = '\x01';
    puStack_370 = local_a8;
    local_2c8 = *puVar9;
    local_2c0 = puVar9[1];
    if (local_2c0 != 0) {
      LOCK();
      *(int *)(local_2c0 + 8) = *(int *)(local_2c0 + 8) + 1;
      UNLOCK();
    }
    local_288 = local_378;
    uStack_280 = puStack_370;
    uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_278,&local_288);
    uVar8 = FText::Format(local_1f8,&local_2c8,uVar8);
    FText::FText(local_240,uVar8);
    if (local_1f0 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_1f0 + 1;
      lVar10 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_1f0)(local_1f0);
        LOCK();
        piVar2 = (int *)((longlong)local_1f0 + 0xc);
        iVar12 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_1f0 + 8))(local_1f0,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_278);
    if (local_b0 != '\0') {
      local_b0 = '\0';
      if (local_c0 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_c0 + 1;
        lVar10 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_c0)(local_c0);
          LOCK();
          piVar2 = (int *)((longlong)local_c0 + 0xc);
          iVar12 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*local_c0 + 8))(local_c0,1);
          }
        }
      }
    }
    plVar5 = (longlong *)puVar9[1];
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      lVar10 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar12 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    plVar5 = *(longlong **)(lVar7 + 8);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar12 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    FText::operator=(local_328,local_240);
    if (local_238 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_238 + 1;
      lVar7 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_238)(local_238);
        LOCK();
        piVar2 = (int *)((longlong)local_238 + 0xc);
        iVar12 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_238 + 8))(local_238,1);
        }
      }
    }
    if (local_1d8 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_1d8 + 1;
      lVar7 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_1d8)(local_1d8);
        LOCK();
        piVar2 = (int *)((longlong)local_1d8 + 0xc);
        iVar12 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_1d8 + 8))(local_1d8,1);
        }
      }
    }
    if (local_368[2] != 0) {
      FMemory::Free();
    }
  }
  local_368[4] = 0;
  local_368[5] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_368 + 4,0);
  FGenericPlatformString::Memcpy(local_368[4],L"{0}:{1}",0x10);
  lVar7 = FText::FText(local_138,local_328);
  local_378 = (undefined4 *)lVar7;
  lVar10 = FText::FText(local_120,local_310);
  uVar8 = FText::FromString(local_1b0,local_368 + 4);
  puVar9 = (undefined8 *)FTextFormat::FTextFormat(local_188,uVar8);
  local_a8[0] = 4;
  FText::FText(local_98,lVar10);
  local_80 = 1;
  local_78 = 4;
  FText::FText(local_68,lVar7);
  local_338 = local_a8;
  local_50 = 1;
  puStack_330 = local_48;
  local_2b8 = *puVar9;
  local_2b0 = puVar9[1];
  if (local_2b0 != 0) {
    LOCK();
    *(int *)(local_2b0 + 8) = *(int *)(local_2b0 + 8) + 1;
    UNLOCK();
  }
  uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
          TArray<FFormatArgumentValue,FDefaultAllocator>(local_268,&local_338);
  uVar8 = FText::Format(local_1c8,&local_2b8,uVar8);
  FText::FText(param_2,uVar8);
  if (local_1c0 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_1c0 + 1;
    lVar7 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_1c0)(local_1c0);
      LOCK();
      piVar2 = (int *)((longlong)local_1c0 + 0xc);
      iVar12 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*local_1c0 + 8))(local_1c0,1);
      }
    }
  }
  TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
            (local_268);
  lVar7 = 2;
  pcVar11 = &stack0xffffffffffffffe0;
  do {
    lVar7 = lVar7 + -1;
    pcVar3 = pcVar11 + -0x30;
    if (*pcVar3 != '\0') {
      *pcVar3 = '\0';
      plVar5 = *(longlong **)(pcVar11 + -0x40);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar5 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          iVar12 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
    }
    pcVar11 = pcVar3;
  } while (lVar7 != 0);
  plVar5 = (longlong *)puVar9[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar12 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  plVar5 = *(longlong **)(lVar10 + 8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar12 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  plVar5 = *(longlong **)((longlong)local_378 + 8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar12 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  if (local_1a8 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_1a8 + 1;
    lVar7 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_1a8)(local_1a8);
      LOCK();
      piVar2 = (int *)((longlong)local_1a8 + 0xc);
      iVar12 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*local_1a8 + 8))(local_1a8,1);
      }
    }
  }
  if (local_368[4] != 0) {
    FMemory::Free();
  }
  if (local_320 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_320 + 1;
    lVar7 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_320)(local_320);
      LOCK();
      piVar2 = (int *)((longlong)local_320 + 0xc);
      iVar12 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*local_320 + 8))(local_320,1);
      }
    }
  }
  if (local_308 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_308 + 1;
    lVar7 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_308)(local_308);
      LOCK();
      piVar2 = (int *)((longlong)local_308 + 0xc);
      iVar12 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*local_308 + 8))(local_308,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 140ee7d20 FUN_140ee7d20 body=138 status=ok
// SIG undefined FUN_140ee7d20(void)

void FUN_140ee7d20(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  
  if ((param_2 != 0) && (*(char *)(param_2 + 0xa1) != '\x02')) {
    FUN_140483870(param_2 + 0x28,param_1);
    lVar2 = FUN_140eccbe0(param_1);
    if (lVar2 != 0) {
      if (((*(int *)(param_1 + 0x858) < 1) && (*(int *)(param_1 + 0x85c) < 1)) &&
         ((cVar1 = FUN_140eec620(param_1), cVar1 != '\0' ||
          ((*(longlong *)(param_1 + 0x820) == 0 ||
           (*(int *)(param_1 + 0x844) < *(int *)(*(longlong *)(param_1 + 0x820) + 0x178))))))) {
        FUN_140f06ab0(param_1,0);
        return;
      }
      FUN_140f06ab0(param_1,1);
    }
  }
  return;
}


