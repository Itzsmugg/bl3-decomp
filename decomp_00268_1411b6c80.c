// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1411b6c80 FUN_1411b6c80 body=7 status=ok
// SIG undefined FUN_1411b6c80(void)

void FUN_1411b6c80(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x1080) = param_2;
  return;
}



// FUNCTION 1411b6c90 FUN_1411b6c90 body=7 status=ok
// SIG undefined FUN_1411b6c90(void)

void FUN_1411b6c90(undefined4 param_1)

{
  DAT_1462a1558 = param_1;
  return;
}



// FUNCTION 1411b6ca0 FUN_1411b6ca0 body=82 status=ok
// SIG undefined FUN_1411b6ca0(void)

void FUN_1411b6ca0(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  char cVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x6c8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2b0))(plVar1,param_2,1,0);
    cVar2 = FUN_142088620(*(undefined8 *)(param_1 + 0x6c8));
    if (cVar2 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001411b6ce5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(param_1 + 0x6c8) + 0x278))(*(longlong **)(param_1 + 0x6c8),1);
      return;
    }
  }
  return;
}



// FUNCTION 1411b6d00 FUN_1411b6d00 body=566 status=ok
// SIG undefined FUN_1411b6d00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411b6d00(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong lStack_d0;
  undefined4 *local_c8;
  ulonglong *puStack_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_90 [8];
  longlong *local_88;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60 [16];
  undefined4 local_50 [2];
  longlong local_48;
  longlong *local_38;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  if (*(longlong *)(param_1 + 0x308) != 0) {
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_78,L"Level {0}",L"ServerBrowserListItem",L"HostLevelText");
    puVar7 = (undefined8 *)FTextFormat::FTextFormat(local_60,uVar6);
    local_50[0] = 0;
    local_c8 = local_50;
    local_28 = '\0';
    puStack_c0 = &local_20;
    local_d8 = *puVar7;
    lStack_d0 = puVar7[1];
    if (lStack_d0 != 0) {
      LOCK();
      *(int *)(lStack_d0 + 8) = *(int *)(lStack_d0 + 8) + 1;
      UNLOCK();
    }
    local_48 = (longlong)param_2;
    uVar6 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_b8,&local_c8);
    uVar6 = FText::Format(local_90,&local_d8,uVar6);
    FText::FText(local_a8,uVar6);
    if (local_88 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_88 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_88)(local_88);
        LOCK();
        piVar1 = (int *)((longlong)local_88 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_88 + 8))(local_88,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_b8);
    if ((local_28 != '\0') && (local_28 = '\0', local_38 != (longlong *)0x0)) {
      LOCK();
      plVar4 = local_38 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar1 = (int *)((longlong)local_38 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_38 + 8))(local_38,1);
        }
      }
    }
    plVar4 = (longlong *)puVar7[1];
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
    (**(code **)(**(longlong **)(param_1 + 0x308) + 0x2b0))
              (*(longlong **)(param_1 + 0x308),local_a8,1,0);
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_a0 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_70 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar1 = (int *)((longlong)local_70 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_70 + 8))(local_70,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1411b6f40 FUN_1411b6f40 body=625 status=ok
// SIG undefined FUN_1411b6f40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411b6f40(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 auStack_118 [32];
  undefined2 local_f8;
  longlong local_e8 [3];
  longlong lStack_d0;
  undefined4 *local_c8;
  ulonglong *puStack_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_90 [8];
  longlong *local_88;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60 [16];
  undefined4 local_50 [2];
  longlong local_48;
  longlong *local_38;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  if (*(longlong *)(param_1 + 0x330) != 0) {
    local_e8[0] = 0;
    local_e8[1] = 4;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_e8,0);
    local_f8 = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>(local_e8[0],4,&DAT_1446d11a4);
    uVar6 = FText::FromString(local_78,local_e8);
    puVar7 = (undefined8 *)FTextFormat::FTextFormat(local_60,uVar6);
    local_50[0] = 0;
    local_c8 = local_50;
    local_28 = '\0';
    puStack_c0 = &local_20;
    local_e8[2] = *puVar7;
    lStack_d0 = puVar7[1];
    if (lStack_d0 != 0) {
      LOCK();
      *(int *)(lStack_d0 + 8) = *(int *)(lStack_d0 + 8) + 1;
      UNLOCK();
    }
    local_48 = (longlong)param_2;
    uVar6 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_b8,&local_c8);
    uVar6 = FText::Format(local_90,local_e8 + 2,uVar6);
    FText::FText(local_a8,uVar6);
    if (local_88 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_88 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_88)(local_88);
        LOCK();
        piVar1 = (int *)((longlong)local_88 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_88 + 8))(local_88,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_b8);
    if (local_28 != '\0') {
      local_28 = '\0';
      if (local_38 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_38 + 1;
        lVar5 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_38)(local_38);
          LOCK();
          piVar1 = (int *)((longlong)local_38 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_38 + 8))(local_38,1);
          }
        }
      }
    }
    plVar4 = (longlong *)puVar7[1];
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
    (**(code **)(**(longlong **)(param_1 + 0x330) + 0x2b0))
              (*(longlong **)(param_1 + 0x330),local_a8,1,0);
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_a0 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_70 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar1 = (int *)((longlong)local_70 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_70 + 8))(local_70,1);
        }
      }
    }
    if (local_e8[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1411b71c0 FUN_1411b71c0 body=625 status=ok
// SIG undefined FUN_1411b71c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411b71c0(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 auStack_118 [32];
  undefined2 local_f8;
  longlong local_e8 [3];
  longlong lStack_d0;
  undefined4 *local_c8;
  ulonglong *puStack_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_90 [8];
  longlong *local_88;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60 [16];
  undefined4 local_50 [2];
  longlong local_48;
  longlong *local_38;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  if (*(longlong *)(param_1 + 0x328) != 0) {
    local_e8[0] = 0;
    local_e8[1] = 4;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_e8,0);
    local_f8 = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>(local_e8[0],4,&DAT_1446d1194);
    uVar6 = FText::FromString(local_78,local_e8);
    puVar7 = (undefined8 *)FTextFormat::FTextFormat(local_60,uVar6);
    local_50[0] = 0;
    local_c8 = local_50;
    local_28 = '\0';
    puStack_c0 = &local_20;
    local_e8[2] = *puVar7;
    lStack_d0 = puVar7[1];
    if (lStack_d0 != 0) {
      LOCK();
      *(int *)(lStack_d0 + 8) = *(int *)(lStack_d0 + 8) + 1;
      UNLOCK();
    }
    local_48 = (longlong)param_2;
    uVar6 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_b8,&local_c8);
    uVar6 = FText::Format(local_90,local_e8 + 2,uVar6);
    FText::FText(local_a8,uVar6);
    if (local_88 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_88 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_88)(local_88);
        LOCK();
        piVar1 = (int *)((longlong)local_88 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_88 + 8))(local_88,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_b8);
    if (local_28 != '\0') {
      local_28 = '\0';
      if (local_38 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_38 + 1;
        lVar5 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_38)(local_38);
          LOCK();
          piVar1 = (int *)((longlong)local_38 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_38 + 8))(local_38,1);
          }
        }
      }
    }
    plVar4 = (longlong *)puVar7[1];
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
    (**(code **)(**(longlong **)(param_1 + 0x328) + 0x2b0))
              (*(longlong **)(param_1 + 0x328),local_a8,1,0);
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_a0 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_70 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar1 = (int *)((longlong)local_70 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_70 + 8))(local_70,1);
        }
      }
    }
    if (local_e8[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1411b7440 FUN_1411b7440 body=252 status=ok
// SIG undefined FUN_1411b7440(void)

void FUN_1411b7440(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_38 [16];
  
  if (param_2 != 0) {
    puVar8 = &DAT_143f3eda8;
    if (*(int *)(param_1 + 0x528) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = *(undefined2 **)(param_1 + 0x520);
    }
    if (*(int *)(param_1 + 0x518) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = *(undefined2 **)(param_1 + 0x510);
    }
    if (*(int *)(param_1 + 0x508) == 0) {
      puVar7 = &DAT_143f3eda8;
    }
    else {
      puVar7 = *(undefined2 **)(param_1 + 0x500);
    }
    if (*(int *)(param_1 + 0x4f8) != 0) {
      puVar8 = *(undefined2 **)(param_1 + 0x4f0);
    }
    puVar5 = (undefined8 *)FName::FName(local_res10,puVar6,1);
    uVar1 = *puVar5;
    puVar5 = (undefined8 *)FName::FName(local_res18,puVar9,1);
    uVar2 = *puVar5;
    puVar5 = (undefined8 *)FName::FName(local_res20,puVar7,1);
    uVar3 = *puVar5;
    puVar5 = (undefined8 *)FName::FName(local_38,puVar8,1);
    uVar4 = *puVar5;
    *(undefined8 *)(param_2 + 0x50) = uVar3;
    *(undefined8 *)(param_2 + 0x58) = uVar2;
    *(undefined8 *)(param_2 + 0x60) = uVar1;
    *(undefined8 *)(param_2 + 0x48) = uVar4;
  }
  return;
}



// FUNCTION 1411b7540 SetNum body=123 status=ok
// SIG undefined SetNum(void)

void TArray<FText,TSizedDefaultAllocator<32>_>::SetNum
               (longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  iVar1 = (int)param_1[1];
  iVar2 = (int)param_2;
  if (iVar1 < iVar2) {
    iVar4 = iVar2 - iVar1;
    *(int *)(param_1 + 1) = iVar2;
    if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar1);
    }
    lVar3 = *param_1 + (longlong)iVar1 * 0x18;
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      FText::FText(lVar3);
      lVar3 = lVar3 + 0x18;
    }
  }
  else if (iVar2 < iVar1) {
    TArray<FText,FDefaultAllocator>::RemoveAtImpl(param_1,param_2,iVar1 - iVar2,param_3);
    return;
  }
  return;
}



// FUNCTION 1411b75c0 FUN_1411b75c0 body=566 status=ok
// SIG undefined FUN_1411b75c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411b75c0(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong lStack_d0;
  undefined4 *local_c8;
  ulonglong *puStack_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_90 [8];
  longlong *local_88;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60 [16];
  undefined4 local_50 [2];
  longlong local_48;
  longlong *local_38;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  if (*(longlong *)(param_1 + 0x6a8) != 0) {
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_78,L"Games Found: {0}",L"ServerBrowserMenu",L"GamesFoundText");
    puVar7 = (undefined8 *)FTextFormat::FTextFormat(local_60,uVar6);
    local_50[0] = 0;
    local_c8 = local_50;
    local_28 = '\0';
    puStack_c0 = &local_20;
    local_d8 = *puVar7;
    lStack_d0 = puVar7[1];
    if (lStack_d0 != 0) {
      LOCK();
      *(int *)(lStack_d0 + 8) = *(int *)(lStack_d0 + 8) + 1;
      UNLOCK();
    }
    local_48 = (longlong)param_2;
    uVar6 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_b8,&local_c8);
    uVar6 = FText::Format(local_90,&local_d8,uVar6);
    FText::FText(local_a8,uVar6);
    if (local_88 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_88 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_88)(local_88);
        LOCK();
        piVar1 = (int *)((longlong)local_88 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_88 + 8))(local_88,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_b8);
    if ((local_28 != '\0') && (local_28 = '\0', local_38 != (longlong *)0x0)) {
      LOCK();
      plVar4 = local_38 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar1 = (int *)((longlong)local_38 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_38 + 8))(local_38,1);
        }
      }
    }
    plVar4 = (longlong *)puVar7[1];
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
    (**(code **)(**(longlong **)(param_1 + 0x6a8) + 0x2b0))
              (*(longlong **)(param_1 + 0x6a8),local_a8,1,0);
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_a0 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_70 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar1 = (int *)((longlong)local_70 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_70 + 8))(local_70,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1411b7800 FUN_1411b7800 body=625 status=ok
// SIG undefined FUN_1411b7800(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411b7800(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 auStack_118 [32];
  undefined2 local_f8;
  longlong local_e8 [3];
  longlong lStack_d0;
  undefined4 *local_c8;
  ulonglong *puStack_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_90 [8];
  longlong *local_88;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60 [16];
  undefined4 local_50 [2];
  longlong local_48;
  longlong *local_38;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  if (*(longlong *)(param_1 + 800) != 0) {
    local_e8[0] = 0;
    local_e8[1] = 4;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_e8,0);
    local_f8 = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>(local_e8[0],4,&DAT_1446d1184);
    uVar6 = FText::FromString(local_78,local_e8);
    puVar7 = (undefined8 *)FTextFormat::FTextFormat(local_60,uVar6);
    local_50[0] = 0;
    local_c8 = local_50;
    local_28 = '\0';
    puStack_c0 = &local_20;
    local_e8[2] = *puVar7;
    lStack_d0 = puVar7[1];
    if (lStack_d0 != 0) {
      LOCK();
      *(int *)(lStack_d0 + 8) = *(int *)(lStack_d0 + 8) + 1;
      UNLOCK();
    }
    local_48 = (longlong)param_2;
    uVar6 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_b8,&local_c8);
    uVar6 = FText::Format(local_90,local_e8 + 2,uVar6);
    FText::FText(local_a8,uVar6);
    if (local_88 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_88 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_88)(local_88);
        LOCK();
        piVar1 = (int *)((longlong)local_88 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_88 + 8))(local_88,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_b8);
    if (local_28 != '\0') {
      local_28 = '\0';
      if (local_38 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_38 + 1;
        lVar5 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_38)(local_38);
          LOCK();
          piVar1 = (int *)((longlong)local_38 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_38 + 8))(local_38,1);
          }
        }
      }
    }
    plVar4 = (longlong *)puVar7[1];
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
    (**(code **)(**(longlong **)(param_1 + 800) + 0x2b0))
              (*(longlong **)(param_1 + 800),local_a8,1,0);
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_a0 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_70 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar1 = (int *)((longlong)local_70 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_70 + 8))(local_70,1);
        }
      }
    }
    if (local_e8[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1411b7a80 FUN_1411b7a80 body=223 status=ok
// SIG undefined FUN_1411b7a80(void)

void FUN_1411b7a80(longlong param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_1 + 0x38);
  if (lVar5 != 0) {
    lVar4 = AGImpulseWindProjectile::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_1411b7ad5;
  }
  lVar5 = 0;
LAB_1411b7ad5:
  iVar3 = 1;
  if ((*(longlong *)(param_1 + 0x1b0) != 0) &&
     (iVar1 = *(int *)(*(longlong *)(param_1 + 0x1b0) + 0x60), 0 < iVar1)) {
    iVar1 = iVar1 + -1;
    iVar3 = ((int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2) + 1;
  }
  *(int *)(param_1 + 0x1b8) = param_2;
  if (iVar3 <= param_2) {
    param_2 = iVar3 + -1;
    *(int *)(param_1 + 0x1b8) = param_2;
  }
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    FUN_1411b7b60(*(longlong *)(param_1 + 0x1a0),param_2,iVar3);
  }
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FUN_1411b9520(*(longlong *)(param_1 + 0x198),*(undefined8 *)(param_1 + 0x1b0),
                  *(undefined4 *)(param_1 + 0x1b8));
  }
  if (lVar5 != 0) {
    *(undefined1 *)(lVar5 + 0x6d0) = 1;
  }
  return;
}



// FUNCTION 1411b7b60 FUN_1411b7b60 body=635 status=ok
// SIG undefined FUN_1411b7b60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411b7b60(longlong param_1,int param_2,int param_3)

{
  int *piVar1;
  char *pcVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  char *pcVar9;
  longlong lVar10;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  longlong lStack_120;
  undefined4 *local_118;
  ulonglong *puStack_110;
  undefined1 local_108 [16];
  undefined1 local_f8 [8];
  longlong *local_f0;
  undefined1 local_e0 [8];
  longlong *local_d8;
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 local_b0 [24];
  undefined4 local_98 [2];
  longlong local_90;
  undefined1 local_70;
  undefined4 local_68;
  longlong local_60;
  undefined1 local_40;
  ulonglong local_38 [2];
  
  local_38[0] = DAT_1468387a8 ^ (ulonglong)auStack_148;
  if (*(longlong *)(param_1 + 0x170) != 0) {
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_c8,L"Page {0}/{1}",L"GFxStoreMenu",L"PageCountFormat");
    puVar8 = (undefined8 *)FTextFormat::FTextFormat(local_b0,uVar7);
    local_98[0] = 0;
    local_70 = 0;
    local_68 = 0;
    local_40 = 0;
    local_118 = local_98;
    puStack_110 = local_38;
    local_128 = *puVar8;
    lStack_120 = puVar8[1];
    local_90 = (longlong)(param_2 + 1);
    if (lStack_120 != 0) {
      LOCK();
      *(int *)(lStack_120 + 8) = *(int *)(lStack_120 + 8) + 1;
      UNLOCK();
    }
    local_60 = (longlong)param_3;
    uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_108,&local_118);
    uVar7 = FText::Format(local_e0,&local_128,uVar7);
    FText::FText(local_f8,uVar7);
    if (local_d8 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_d8 + 1;
      lVar10 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_d8)(local_d8);
        LOCK();
        piVar1 = (int *)((longlong)local_d8 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_d8 + 8))(local_d8,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_108);
    lVar10 = 2;
    pcVar9 = &stack0xfffffffffffffff0;
    do {
      lVar10 = lVar10 + -1;
      pcVar2 = pcVar9 + -0x30;
      if (*pcVar2 != '\0') {
        *pcVar2 = '\0';
        plVar5 = *(longlong **)(pcVar9 + -0x40);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar5 + 1;
          lVar6 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
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
      }
      pcVar9 = pcVar2;
    } while (lVar10 != 0);
    plVar5 = (longlong *)puVar8[1];
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar5 + 1;
      lVar10 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
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
    (**(code **)(**(longlong **)(param_1 + 0x170) + 0x2b0))
              (*(longlong **)(param_1 + 0x170),local_f8,1,0);
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_f0 + 1;
      lVar10 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_f0)(local_f0);
        LOCK();
        piVar1 = (int *)((longlong)local_f0 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_f0 + 8))(local_f0,1);
        }
      }
    }
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_c0 + 1;
      lVar10 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_c0)(local_c0);
        LOCK();
        piVar1 = (int *)((longlong)local_c0 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_c0 + 8))(local_c0,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1411b7de0 FUN_1411b7de0 body=424 status=ok
// SIG undefined FUN_1411b7de0(void)

void FUN_1411b7de0(longlong param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  longlong lVar8;
  longlong *plVar9;
  int *piVar10;
  undefined1 local_28 [8];
  longlong *local_20;
  
  lVar8 = *(longlong *)(param_1 + 0x38);
  piVar10 = (int *)0x0;
  piVar6 = piVar10;
  if (lVar8 != 0) {
    lVar3 = AGImpulseWindProjectile::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      if (param_2 != 0) {
        piVar5 = *(int **)(lVar8 + 0x6b8);
        piVar7 = piVar5 + (longlong)*(int *)(lVar8 + 0x6c0) * 0x1a;
        for (; (piVar6 = piVar10, piVar5 != piVar7 && (piVar6 = piVar5, *piVar5 != param_2));
            piVar5 = piVar5 + 0x1a) {
        }
      }
      goto LAB_1411b7e6d;
    }
  }
  lVar8 = 0;
LAB_1411b7e6d:
  *(int **)(param_1 + 0x1b0) = piVar6;
  if (lVar8 != 0) {
    LOCK();
    *(undefined4 *)(lVar8 + 0x588) = 1;
    UNLOCK();
  }
  if (*(longlong **)(param_1 + 400) != (longlong *)0x0) {
    piVar6 = piVar10;
    if (*(uint **)(param_1 + 0x1b0) != (uint *)0x0) {
      piVar6 = (int *)(ulonglong)**(uint **)(param_1 + 0x1b0);
    }
    lVar8 = **(longlong **)(param_1 + 400);
    uVar4 = FUN_14119e730(local_28,piVar6);
    (**(code **)(lVar8 + 0x2b0))(*(undefined8 *)(param_1 + 400),uVar4,1,0);
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_20 + 1;
      lVar8 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar6 = (int *)((longlong)local_20 + 0xc);
        iVar1 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar1 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
  }
  lVar8 = *(longlong *)(param_1 + 0x188);
  if (lVar8 != 0) {
    plVar9 = *(longlong **)(lVar8 + 0x170);
    piVar6 = (int *)((longlong)*(int *)(lVar8 + 0x178) & 0x1fffffffffffffff);
    if (plVar9 + *(int *)(lVar8 + 0x178) < plVar9) {
      piVar6 = piVar10;
    }
    if (piVar6 != (int *)0x0) {
      do {
        lVar8 = *plVar9;
        if (lVar8 != 0) {
          FUN_142ed2820(lVar8,param_2 == *(int *)(lVar8 + 0x2d0),1);
        }
        plVar9 = plVar9 + 1;
        piVar10 = (int *)((longlong)piVar10 + 1);
      } while (piVar10 != piVar6);
    }
  }
  FUN_1411b7a80(param_1,0);
  return;
}



// FUNCTION 1411b7f90 FUN_1411b7f90 body=553 status=ok
// SIG undefined FUN_1411b7f90(void)

void FUN_1411b7f90(longlong param_1,int param_2)

{
  wchar_t *pwVar1;
  int iVar2;
  wchar_t *pwVar3;
  uint uVar4;
  longlong lVar5;
  wchar_t *local_28;
  undefined8 local_20;
  
  *(int *)(param_1 + 0x2d0) = param_2;
  local_28 = (wchar_t *)0x0;
  local_20 = 0;
  if (param_2 == 1) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_28,9);
    iVar2 = (int)local_20 + 9;
    local_20 = CONCAT44(local_20._4_4_,iVar2);
    if (local_20._4_4_ < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28);
    }
    builtin_wcsncpy(local_28,L"Featured",9);
  }
  else if (param_2 == 2) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_28,0xb);
    iVar2 = (int)local_20 + 0xb;
    local_20 = CONCAT44(local_20._4_4_,iVar2);
    if (local_20._4_4_ < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28);
    }
    builtin_wcsncpy(local_28,L"Expansions",0xb);
  }
  else if (param_2 == 3) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_28,0xf);
    iVar2 = (int)local_20 + 0xf;
    local_20 = CONCAT44(local_20._4_4_,iVar2);
    if (local_20._4_4_ < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28);
    }
    builtin_wcsncpy(local_28,L"Customizations",0xf);
  }
  else if (param_2 == 4) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_28,10);
    iVar2 = (int)local_20 + 10;
    local_20 = CONCAT44(local_20._4_4_,iVar2);
    if (local_20._4_4_ < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28);
    }
    builtin_wcsncpy(local_28,L"Purchased",10);
  }
  pwVar1 = local_28;
  if (*(longlong *)(param_1 + 0x2c8) != 0) {
    pwVar3 = L"";
    if ((int)local_20 != 0) {
      pwVar3 = local_28;
    }
    local_28 = (wchar_t *)0x0;
    local_20 = 0;
    if ((pwVar3 != (wchar_t *)0x0) && (*pwVar3 != L'\0')) {
      lVar5 = -1;
      do {
        lVar5 = lVar5 + 1;
      } while (pwVar3[lVar5] != L'\0');
      uVar4 = (int)lVar5 + 1;
      local_20 = (ulonglong)uVar4;
      if (0 < (int)uVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
      }
      FGenericPlatformString::Memcpy(local_28,pwVar3,(longlong)(int)uVar4 * 2);
    }
    FUN_142088cf0(*(undefined8 *)(param_1 + 0x2c8),&local_28);
    if (local_28 != (wchar_t *)0x0) {
      FMemory::Free();
    }
  }
  if (pwVar1 != (wchar_t *)0x0) {
    FMemory::Free(pwVar1);
  }
  return;
}



// FUNCTION 1411b81c0 FUN_1411b81c0 body=303 status=ok
// SIG undefined FUN_1411b81c0(void)

void FUN_1411b81c0(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x170);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x2b0))(plVar4,param_2,1,0);
  }
  plVar4 = *(longlong **)(param_1 + 0x178);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x2b0))(plVar4,param_3,1,0);
  }
  plVar4 = *(longlong **)(param_1 + 0x180);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x2b0))(plVar4,param_4,1,0);
  }
  plVar4 = *(longlong **)(param_2 + 8);
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
  plVar4 = *(longlong **)(param_3 + 8);
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
  plVar4 = *(longlong **)(param_4 + 8);
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



// FUNCTION 1411b8310 FUN_1411b8310 body=148 status=ok
// SIG undefined FUN_1411b8310(void)

ulonglong FUN_1411b8310(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  
  *(undefined8 *)(param_1 + 0x758) = param_2;
  uVar3 = 0;
  LOCK();
  uVar1 = *(uint *)(param_1 + 0x638);
  if (uVar1 == 0) {
    *(uint *)(param_1 + 0x638) = 0;
  }
  else {
    uVar3 = (ulonglong)uVar1;
  }
  UNLOCK();
  if (uVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x758);
    uVar3 = FWeakObjectPtr::IsValid(param_1 + 0x59c);
    if ((char)uVar3 != '\0') {
      uVar4 = FWeakObjectPtr::Get(param_1 + 0x59c);
      uVar3 = FUN_140ec9a00(uVar4);
      if ((uVar3 != 0) && (*(longlong *)(uVar3 + 0x6c8) != 0)) {
        uVar3 = FUN_1410a6010(*(longlong *)(uVar3 + 0x6c8),uVar2);
      }
    }
  }
  if (*(longlong *)(param_1 + 0x758) != 0) {
    uVar3 = FUN_140cff230();
    *(ulonglong *)(param_1 + 0x760) = uVar3;
  }
  return uVar3;
}



// FUNCTION 1411b83b0 FUN_1411b83b0 body=367 status=ok
// SIG undefined FUN_1411b83b0(void)

longlong FUN_1411b83b0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  longlong local_18 [2];
  
  if (*(longlong *)(param_1 + 0x80) == 0) {
    return 0;
  }
  local_18[0] = 0;
  local_18[1] = 0x18;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"OptionsMenuTextListItem",0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  uVar3 = UGameInstanceGameParameters::GetPrivateStaticClass();
  lVar4 = FUN_142ebcee0(uVar1,local_18,uVar3,0);
  if (lVar4 != 0) {
    lVar5 = UGameInstanceGameParameters::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_1411b8471;
  }
  lVar4 = 0;
LAB_1411b8471:
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (lVar4 != 0) {
    FUN_142ed3af0(lVar4,param_2,0);
    FWeakObjectPtr::operator=(lVar4 + 0x1b0,param_1);
    *(undefined8 *)(lVar4 + 0x1b8) = *param_3;
    *(undefined8 *)(lVar4 + 0x1a0) = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(lVar4 + 0x1a8) = *(undefined8 *)(param_1 + 0x50);
    *(undefined1 *)(lVar4 + 0x198) = 1;
    if (*(longlong *)(lVar4 + 0x248) != 0) {
      uVar6 = FUN_14119e040();
      FUN_142f0d6e0(*(undefined8 *)(lVar4 + 0x248),uVar6,L"left");
    }
  }
  return lVar4;
}



// FUNCTION 1411b8520 FUN_1411b8520 body=248 status=ok
// SIG undefined FUN_1411b8520(void)

longlong FUN_1411b8520(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if (param_2 != 0) {
    uVar6 = FUN_1410cc2a0(param_2,local_28);
    lVar7 = FUN_1411b83b0(param_1,uVar6,param_3);
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
    if (lVar7 != 0) {
      FUN_142ed2a90(lVar7,param_2);
      if ((*(longlong *)(param_1 + 0x70) == 0) ||
         ((*(char *)(param_2 + 0x119) != '\0' &&
          ((*(longlong *)(param_1 + 0x68) == 0 ||
           (cVar5 = APlayerController::IsPrimaryPlayer(), cVar5 == '\0')))))) {
        uVar6 = 0;
      }
      else {
        uVar6 = 1;
      }
      (**(code **)(*(longlong *)(lVar7 + 0x170) + 0x38))((longlong *)(lVar7 + 0x170),uVar6);
    }
    return lVar7;
  }
  return 0;
}



// FUNCTION 1411b8620 FUN_1411b8620 body=772 status=ok
// SIG undefined FUN_1411b8620(void)

longlong FUN_1411b8620(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                      char param_5,undefined8 param_6)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined4 uVar11;
  undefined1 local_48 [8];
  longlong *local_40;
  
  if ((param_2 == 0) || (*(longlong *)(param_1 + 0x80) == 0)) {
    return 0;
  }
  FUN_1410cc2a0(param_2,local_48);
  lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar6 + 0x38) < DAT_14687635c) &&
     (_Init_thread_header(&DAT_14687635c), DAT_14687635c == -1)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a1a50,0);
    FGenericPlatformString::Memcpy(DAT_1462a1a50,L"OptionsMenuColumnSingleListItem",0x40);
    atexit((_func_5014 *)&LAB_143e62040);
    _Init_thread_footer(&DAT_14687635c);
  }
  puVar10 = &DAT_1462a1a60;
  if ((*(int *)(lVar6 + 0x38) < DAT_146876360) &&
     (_Init_thread_header(&DAT_146876360), DAT_146876360 == -1)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a1a60,0);
    FGenericPlatformString::Memcpy(DAT_1462a1a60,L"OptionsMenuColumnDoubleListItem",0x40);
    atexit((_func_5014 *)&LAB_143e617e0);
    _Init_thread_footer(&DAT_146876360);
  }
  if (*(longlong *)(param_2 + 0xb8) != 0) {
    plVar8 = &DAT_146876198;
    do {
      if (*plVar8 == *(longlong *)(*(longlong *)(param_2 + 0xb8) + 0x18)) {
        param_5 = '\0';
        break;
      }
      plVar8 = plVar8 + 1;
    } while (plVar8 != &DAT_1468761b8);
  }
  uVar9 = *(undefined8 *)(param_1 + 0x80);
  if (param_5 == '\x01') {
    puVar10 = &DAT_1462a1a50;
  }
  uVar5 = FUN_142f1c0a0();
  lVar6 = FUN_142ebcee0(uVar9,puVar10,uVar5,0);
  if (lVar6 != 0) {
    lVar7 = FUN_142f1c0a0();
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
      FUN_142ebc220(lVar6,local_48,param_3,param_4,*(longlong *)(param_2 + 0xd8) != 0,param_6,
                    param_5);
      *(undefined8 *)(lVar6 + 0x1a0) = *(undefined8 *)(param_1 + 0x48);
      FUN_142ed2a90(lVar6,param_2);
      *(undefined1 *)(lVar6 + 0x198) = 1;
      if ((*(longlong *)(param_1 + 0x70) == 0) ||
         ((*(char *)(param_2 + 0x119) != '\0' &&
          ((*(longlong *)(param_1 + 0x68) == 0 ||
           (cVar4 = APlayerController::IsPrimaryPlayer(), cVar4 == '\0')))))) {
        uVar9 = 0;
      }
      else {
        uVar9 = 1;
      }
      (**(code **)(*(longlong *)(lVar6 + 0x170) + 0x38))((longlong *)(lVar6 + 0x170),uVar9);
      uVar11 = FUN_14119e040();
      FUN_142ed36f0(lVar6,uVar11,L"left");
      goto LAB_1411b8804;
    }
  }
  lVar6 = 0;
LAB_1411b8804:
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
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  return lVar6;
}



// FUNCTION 1411b8930 FUN_1411b8930 body=1063 status=ok
// SIG undefined FUN_1411b8930(void)

void FUN_1411b8930(longlong param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  wchar_t *pwVar7;
  uint uVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  byte bVar12;
  byte bVar13;
  char *pcVar14;
  longlong local_c8;
  ulonglong local_c0;
  longlong local_b8;
  ulonglong local_b0;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_90 [8];
  longlong *local_88;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60 [8];
  longlong *local_58;
  undefined1 local_48 [8];
  longlong *local_40;
  
  plVar4 = *(longlong **)(param_1 + 0x180);
  bVar12 = 0;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x2b0))(plVar4,param_2 + 2,1,0);
  }
  if (*(longlong **)(param_1 + 0x188) != (longlong *)0x0) {
    lVar9 = **(longlong **)(param_1 + 0x188);
    uVar5 = FUN_14119e730(local_a8,*param_2);
    (**(code **)(lVar9 + 0x2b0))(*(undefined8 *)(param_1 + 0x188),uVar5,1,0);
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_a0 + 1;
      lVar9 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar1 = (int *)((longlong)local_a0 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_a0 + 8))(local_a0,1);
        }
      }
    }
  }
  plVar4 = *(longlong **)(param_1 + 400);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x2b0))(plVar4,param_2 + 8,1,0);
  }
  if (*(longlong *)(param_1 + 0x198) != 0) {
    pcVar14 = "NotInstalled";
    local_c0 = 0;
    if (*(char *)((longlong)param_2 + 0x49) != '\0') {
      pcVar14 = "Installed";
    }
    local_c8 = 0;
    if (*pcVar14 != '\0') {
      lVar9 = -1;
      do {
        lVar9 = lVar9 + 1;
      } while (pcVar14[lVar9] != '\0');
      uVar8 = (int)lVar9 + 1;
      local_c0 = (ulonglong)uVar8;
      if (0 < (int)uVar8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
      }
      FGenericPlatformString::Convert<char,wchar_t>(local_c8,uVar8,pcVar14,uVar8,0x3f);
    }
    FUN_142088cf0(*(undefined8 *)(param_1 + 0x198),&local_c8);
    if (local_c8 != 0) {
      FMemory::Free();
    }
  }
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    cVar3 = *(char *)((longlong)param_2 + 0x49);
    pwVar11 = L"InstalledText";
    pwVar10 = L"GFxStoreMenu";
    pwVar7 = L"Installed";
    bVar12 = 2 - (cVar3 != '\0');
    puVar6 = local_78;
    if (cVar3 == '\0') {
      pwVar11 = L"NotInstalled";
      pwVar10 = L"GFxStoreMenu";
      pwVar7 = L"Not Installed";
      puVar6 = local_90;
    }
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (puVar6,pwVar7,pwVar10,pwVar11);
    (**(code **)(**(longlong **)(param_1 + 0x1a0) + 0x2b0))
              (*(longlong **)(param_1 + 0x1a0),uVar5,1,0);
    if (((bVar12 & 2) != 0) && (bVar12 = bVar12 & 0xfd, local_88 != (longlong *)0x0)) {
      LOCK();
      plVar4 = local_88 + 1;
      lVar9 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_88)(local_88);
        LOCK();
        piVar1 = (int *)((longlong)local_88 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_88 + 8))(local_88,1);
        }
      }
    }
    if ((cVar3 != '\0') && (bVar12 = bVar12 & 0xfe, local_70 != (longlong *)0x0)) {
      LOCK();
      plVar4 = local_70 + 1;
      lVar9 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
  }
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    pcVar14 = "NotPurchased";
    local_b8 = 0;
    if (*(char *)(param_2 + 0x12) != '\0') {
      pcVar14 = "Purchased";
    }
    local_b0 = 0;
    if (*pcVar14 != '\0') {
      lVar9 = -1;
      do {
        lVar9 = lVar9 + 1;
      } while (pcVar14[lVar9] != '\0');
      uVar8 = (int)lVar9 + 1;
      local_b0 = (ulonglong)uVar8;
      if (0 < (int)uVar8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
      }
      FGenericPlatformString::Convert<char,wchar_t>(local_b8,uVar8,pcVar14,uVar8,0x3f);
    }
    FUN_142088cf0(*(undefined8 *)(param_1 + 0x1a8),&local_b8);
    if (local_b8 != 0) {
      FMemory::Free();
    }
  }
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    puVar6 = local_48;
    pwVar11 = L"PurchasedText";
    pwVar10 = L"GFxStoreMenu";
    pwVar7 = L"Purchased";
    bVar13 = 4;
    if (*(char *)(param_2 + 0x12) == '\0') {
      bVar13 = 8;
    }
    bVar13 = bVar13 | bVar12;
    if (*(char *)(param_2 + 0x12) == '\0') {
      pwVar11 = L"NotPurchased";
      pwVar10 = L"GFxStoreMenu";
      pwVar7 = L"Not Purchased";
      puVar6 = local_60;
    }
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (puVar6,pwVar7,pwVar10,pwVar11);
    (**(code **)(**(longlong **)(param_1 + 0x1b0) + 0x2b0))
              (*(longlong **)(param_1 + 0x1b0),uVar5,1,0);
    if (((bVar13 & 8) != 0) && (bVar13 = bVar13 & 0xf7, local_58 != (longlong *)0x0)) {
      LOCK();
      plVar4 = local_58 + 1;
      lVar9 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar1 = (int *)((longlong)local_58 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_58 + 8))(local_58,1);
        }
      }
    }
    if (((bVar13 & 4) != 0) && (local_40 != (longlong *)0x0)) {
      LOCK();
      plVar4 = local_40 + 1;
      lVar9 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)local_40 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1411b8d60 FUN_1411b8d60 body=889 status=ok
// SIG undefined FUN_1411b8d60(void)

longlong FUN_1411b8d60(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                      undefined8 param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined4 uVar9;
  longlong *local_68;
  int local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  undefined4 local_40;
  
  if (*(longlong *)(param_1 + 0x80) == 0) {
    return 0;
  }
  local_58 = 0;
  local_50 = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
  FGenericPlatformString::Memcpy(local_58,L"ComboBoxListItem",0x22);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  uVar4 = FUN_142f1bc80();
  lVar5 = FUN_142ebcee0(uVar1,&local_58,uVar4,0);
  if (lVar5 != 0) {
    lVar6 = FUN_142f1bc80();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_1411b8e24;
  }
  lVar5 = 0;
LAB_1411b8e24:
  if (local_58 != 0) {
    FMemory::Free();
  }
  if (lVar5 != 0) {
    local_68 = (longlong *)0x0;
    local_60 = 0;
    plVar7 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar7 == (longlong *)0x0) {
      if (((local_60 != 0) && (local_68 != (longlong *)0x0)) &&
         ((**(code **)(*local_68 + 0x28))(local_68,0), local_68 != (longlong *)0x0)) {
        local_68 = (longlong *)FMemory::Realloc(local_68,0,0);
      }
    }
    else {
      FUN_140f168d0(plVar7,param_1,param_5);
      (**(code **)(*plVar7 + 0x30))(plVar7,&local_68);
      (**(code **)(*plVar7 + 0x28))(plVar7,0);
      lVar6 = FMemory::Realloc(plVar7,0,0);
      if (lVar6 != 0) {
        FMemory::Free(lVar6);
      }
    }
    local_48 = 0;
    local_40 = 0;
    if ((local_60 != 0) && (local_68 != (longlong *)0x0)) {
      (**(code **)(*local_68 + 0x30))(local_68,&local_48);
    }
    FUN_142ebc140(lVar5,param_2,param_3,param_4,&local_48);
    *(undefined8 *)(lVar5 + 0x1a0) = *(undefined8 *)(param_1 + 0x48);
    if (*(longlong *)(lVar5 + 0x248) != 0) {
      uVar9 = FUN_14119e040();
      FUN_142f0d6e0(*(undefined8 *)(lVar5 + 0x248),uVar9,L"left");
    }
    lVar6 = *(longlong *)(lVar5 + 0x318);
    if (lVar6 != 0) {
      if (*(longlong *)(lVar6 + 0x170) != 0) {
        uVar9 = FUN_14119e040();
        FUN_142f0d6e0(*(undefined8 *)(lVar6 + 0x170),uVar9,L"center");
      }
      if ((*(longlong *)(lVar6 + 0x180) != 0) &&
         (*(longlong *)(*(longlong *)(lVar6 + 0x180) + 0x248) != 0)) {
        uVar9 = FUN_14119e040();
        FUN_142f0d6e0(*(undefined8 *)(*(longlong *)(lVar6 + 0x180) + 0x248),uVar9,L"left");
      }
      if ((*(longlong *)(lVar6 + 0x188) != 0) &&
         (*(longlong *)(*(longlong *)(lVar6 + 0x188) + 0x248) != 0)) {
        uVar9 = FUN_14119e040();
        FUN_142f0d6e0(*(undefined8 *)(*(longlong *)(lVar6 + 0x188) + 0x248),uVar9,L"left");
      }
      lVar6 = FUN_142eb6350(lVar6);
      if (lVar6 != 0) {
        lVar8 = *(longlong *)(lVar6 + 0x278);
        lVar6 = (longlong)*(int *)(lVar6 + 0x280) * 0x20 + lVar8;
        for (; lVar8 != lVar6; lVar8 = lVar8 + 0x20) {
          FString::FString(&local_48,lVar8);
          lVar2 = *(longlong *)(lVar8 + 0x18);
          if (lVar2 != 0) {
            uVar9 = FUN_14119e040();
            FUN_142f0d6e0(*(undefined8 *)(lVar2 + 0x248),uVar9,L"left");
          }
          if (local_48 != 0) {
            FMemory::Free();
          }
        }
      }
    }
    if (local_60 != 0) {
      if (local_68 == (longlong *)0x0) {
        return lVar5;
      }
      (**(code **)(*local_68 + 0x28))(local_68,0);
      if (local_68 != (longlong *)0x0) {
        local_68 = (longlong *)FMemory::Realloc(local_68,0,0);
      }
      local_60 = 0;
    }
    if (local_68 != (longlong *)0x0) {
      FMemory::Free(local_68);
    }
  }
  return lVar5;
}



// FUNCTION 1411b90e0 FUN_1411b90e0 body=242 status=ok
// SIG undefined FUN_1411b90e0(void)

longlong FUN_1411b90e0(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                      undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if (param_2 == 0) {
    lVar6 = 0;
  }
  else {
    FUN_1410cc2a0(param_2,local_28);
    lVar6 = FUN_1411b8d60(param_1,local_28,param_3,param_4,param_5);
    if (lVar6 != 0) {
      FUN_142ed2a90(lVar6,param_2);
      if ((*(longlong *)(param_1 + 0x70) == 0) ||
         ((*(char *)(param_2 + 0x119) != '\0' &&
          ((*(longlong *)(param_1 + 0x68) == 0 ||
           (cVar5 = APlayerController::IsPrimaryPlayer(), cVar5 == '\0')))))) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
      (**(code **)(*(longlong *)(lVar6 + 0x170) + 0x38))((longlong *)(lVar6 + 0x170),uVar7);
    }
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
  }
  return lVar6;
}



// FUNCTION 1411b91e0 FUN_1411b91e0 body=829 status=ok
// SIG undefined FUN_1411b91e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411b91e0(longlong param_1,undefined4 *param_2,undefined1 param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  longlong lStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
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
  
  local_28[0] = DAT_1468387a8 ^ (ulonglong)auStack_118;
  *(undefined4 *)(param_1 + 0x2f8) = *param_2;
  FText::operator=(param_1 + 0x300,param_2 + 2);
  FText::operator=(param_1 + 0x318,param_2 + 8);
  FString::operator=(param_1 + 0x330,param_2 + 0xe);
  *(undefined1 *)(param_1 + 0x340) = *(undefined1 *)(param_2 + 0x12);
  *(undefined1 *)(param_1 + 0x341) = *(undefined1 *)((longlong)param_2 + 0x49);
  *(undefined4 *)(param_1 + 0x344) = param_2[0x13];
  *(undefined1 *)(param_1 + 0x2f0) = param_3;
  FString::operator=(param_1 + 0x2e0,param_1 + 0x330);
  plVar4 = *(longlong **)(param_1 + 0x2c8);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x278))(plVar4,*(int *)(param_1 + 0x344) != 0);
    iVar3 = *(int *)(param_1 + 0x344);
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_98,L"{0}%",L"GFxStoreMenu",L"DiscoutPercent");
    puVar7 = (undefined8 *)FTextFormat::FTextFormat(local_68,uVar6);
    local_58[0] = 0;
    local_e8 = local_58;
    local_30 = '\0';
    uStack_e0 = local_28;
    local_f8 = *puVar7;
    lStack_f0 = puVar7[1];
    if (lStack_f0 != 0) {
      LOCK();
      *(int *)(lStack_f0 + 8) = *(int *)(lStack_f0 + 8) + 1;
      UNLOCK();
    }
    local_50 = (longlong)iVar3;
    uVar6 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_d8,&local_e8);
    uVar6 = FText::Format(local_b0,&local_f8,uVar6);
    FText::FText(local_c8,uVar6);
    if (local_a8 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_a8 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_d8);
    if (local_30 != '\0') {
      local_30 = '\0';
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_40 + 1;
        lVar5 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar1 = (int *)((longlong)local_40 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_40 + 8))(local_40,1);
          }
        }
      }
    }
    plVar4 = (longlong *)puVar7[1];
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
    (**(code **)(**(longlong **)(param_1 + 0x2c8) + 0x2b0))
              (*(longlong **)(param_1 + 0x2c8),local_c8,1,0);
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_c0 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
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
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_90 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar1 = (int *)((longlong)local_90 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_90 + 8))(local_90,1);
        }
      }
    }
  }
  if (*(longlong **)(param_1 + 0x2d8) != (longlong *)0x0) {
    lVar5 = **(longlong **)(param_1 + 0x2d8);
    uVar6 = FUN_14119e730(local_80,*(undefined4 *)(param_1 + 0x2f8));
    (**(code **)(lVar5 + 0x2b0))(*(undefined8 *)(param_1 + 0x2d8),uVar6,1,0);
    if (local_78 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_78 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
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
  }
  return;
}



// FUNCTION 1411b9520 FUN_1411b9520 body=514 status=ok
// SIG undefined FUN_1411b9520(void)

void FUN_1411b9520(longlong param_1,longlong param_2,int param_3)

{
  ulonglong *puVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  bool bVar11;
  longlong local_res8;
  ulonglong local_48;
  longlong local_40;
  
  local_res8 = *(longlong *)(param_1 + 0x38);
  uVar7 = 0;
  if (local_res8 != 0) {
    lVar5 = AGImpulseWindProjectile::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(local_res8 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(local_res8 + 0x10) + 0x88) +
         (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    if (bVar11) goto LAB_1411b9592;
  }
  local_res8 = 0;
LAB_1411b9592:
  uVar9 = uVar7;
  uVar10 = uVar7;
  if (0 < *(int *)(param_1 + 0x2d0)) {
    do {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x2c8) + uVar7 * 8);
      puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x2c8) + uVar7 * 8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x278))(plVar2,param_2 != 0);
        (**(code **)(*(longlong *)(*puVar1 + 0x170) + 0x38))
                  ((longlong *)(*puVar1 + 0x170),param_2 != 0);
        if (param_2 != 0) {
          if (uVar7 == 0) {
            bVar11 = *(int *)(param_2 + 8) != 0;
            lVar5 = param_2 + 8;
            uVar6 = 1;
LAB_1411b9658:
            FUN_1411b91e0(*puVar1,lVar5,uVar6);
          }
          else {
            iVar4 = param_3 * 4 + -1 + (int)uVar9;
            if ((iVar4 < 0) || (*(int *)(param_2 + 0x60) <= iVar4)) {
              bVar11 = false;
            }
            else {
              bVar11 = true;
            }
            if ((iVar4 < 0) || (*(int *)(param_2 + 0x60) <= iVar4)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (bVar3) {
              lVar5 = (longlong)iVar4 * 0x50 + *(longlong *)(param_2 + 0x58);
              uVar6 = 0;
              goto LAB_1411b9658;
            }
          }
          (**(code **)(*(longlong *)*puVar1 + 0x278))((longlong *)*puVar1,bVar11);
          (**(code **)(*(longlong *)(*puVar1 + 0x170) + 0x38))((longlong *)(*puVar1 + 0x170),bVar11)
          ;
          if ((uVar10 == 0) && (bVar11 != false)) {
            uVar10 = *puVar1;
          }
        }
      }
      uVar8 = (int)uVar9 + 1;
      uVar7 = uVar7 + 1;
      uVar9 = (ulonglong)uVar8;
    } while ((int)uVar8 < *(int *)(param_1 + 0x2d0));
  }
  if (local_res8 != 0) {
    local_40 = 0;
    local_48 = uVar10;
    if (uVar10 != 0) {
      uVar6 = UBlendableInterface::GetPrivateStaticClass();
      local_40 = UObjectBaseUtility::GetInterfaceAddress(uVar10,uVar6);
    }
    FUN_142ed36d0(local_res8,&local_48,0);
    lVar5 = uVar10 + 0x170;
    if (uVar10 == 0) {
      lVar5 = 0;
    }
    FUN_1411b6be0(local_res8,lVar5);
    *(undefined1 *)(local_res8 + 0x6d0) = 1;
  }
  return;
}



// FUNCTION 1411b9730 FUN_1411b9730 body=646 status=ok
// SIG undefined FUN_1411b9730(void)

longlong FUN_1411b9730(longlong param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                      longlong *param_5,undefined8 param_6)

{
  undefined8 uVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  undefined4 uVar9;
  longlong local_48 [3];
  int local_30;
  undefined4 local_2c;
  
  if (*(longlong *)(param_1 + 0x80) == 0) {
    TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>::
    ~TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>(param_5);
    return 0;
  }
  local_48[0] = 0;
  local_48[1] = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
  FGenericPlatformString::Memcpy(local_48[0],L"SpinnerListItem",0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  uVar4 = UMobBaseAnim::GetPrivateStaticClass();
  lVar5 = FUN_142ebcee0(uVar1,local_48,uVar4,0);
  if (lVar5 != 0) {
    lVar6 = UMobBaseAnim::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_1411b97ed;
  }
  lVar5 = 0;
LAB_1411b97ed:
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  if (lVar5 != 0) {
    uVar3 = (*param_3)(*(undefined8 *)(param_1 + 0x70));
    iVar7 = (int)param_5[1];
    lVar6 = *param_5;
    local_48[2] = 0;
    local_30 = iVar7;
    if (iVar7 == 0) {
      local_2c = 0;
    }
    else {
      TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(local_48 + 2,iVar7,0);
      lVar8 = local_48[2];
      do {
        FText::FText(lVar8,lVar6);
        lVar8 = lVar8 + 0x18;
        lVar6 = lVar6 + 0x18;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    FUN_142ebc020(lVar5,param_2,uVar3,param_6,local_48 + 2);
    *(undefined8 *)(lVar5 + 0x318) = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(lVar5 + 0x1a0) = *(undefined8 *)(param_1 + 0x48);
    lVar6 = FUN_140cfc8e0(*(undefined8 *)(param_1 + 0x68));
    if (lVar6 != 0) {
      uVar3 = (*param_3)(lVar6);
      FUN_142ed25e0(lVar5,uVar3);
      iVar7 = *(int *)(param_1 + 0x90);
      *(int *)(param_1 + 0x90) = iVar7 + 1;
      if (*(int *)(param_1 + 0x94) < iVar7 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x88,iVar7);
      }
      *(longlong *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar7 * 8) = lVar5;
    }
    *(undefined1 *)(lVar5 + 0x198) = 1;
    if (*(longlong *)(lVar5 + 0x248) != 0) {
      uVar9 = FUN_14119e040();
      FUN_142f0d6e0(*(undefined8 *)(lVar5 + 0x248),uVar9,L"left");
    }
    lVar6 = *(longlong *)(lVar5 + 800);
    if ((lVar6 != 0) && (*(longlong *)(lVar6 + 0x300) != 0)) {
      uVar9 = FUN_14119e040();
      FUN_142f0d6e0(*(undefined8 *)(lVar6 + 0x300),uVar9,L"center");
    }
  }
  TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>::
  ~TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>(param_5);
  return lVar5;
}



// FUNCTION 1411b99c0 FUN_1411b99c0 body=280 status=ok
// SIG undefined FUN_1411b99c0(void)

undefined8 FUN_1411b99c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *local_18;
  int local_10;
  
  local_18 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_10 = 3;
  local_18 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_FUN_1446e95b0;
    FWeakObjectPtr::operator=(plVar1 + 1,param_1);
    plVar1[2] = (longlong)FUN_1411a3350;
    plVar1[3] = param_4;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
    *plVar1 = (longlong)&PTR_FUN_1446e95f8;
  }
  uVar3 = FUN_1411b9ae0(param_1,param_2,param_3,param_4,&local_18);
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) {
      return uVar3;
    }
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  return uVar3;
}



// FUNCTION 1411b9ae0 FUN_1411b9ae0 body=460 status=ok
// SIG undefined FUN_1411b9ae0(void)

longlong FUN_1411b9ae0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  longlong lVar6;
  char cVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined1 local_78 [16];
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_50 [24];
  undefined1 local_38 [24];
  undefined1 local_20 [8];
  
  if (param_2 == 0) {
    lVar9 = 0;
  }
  else {
    FUN_1410cc2a0(param_2,local_68);
    FText::FText(local_50,param_2 + 0xf8);
    FText::FText(local_38,param_2 + 0xe0);
    local_88 = local_50;
    puStack_80 = local_20;
    uVar8 = TArray<FText,FDefaultAllocator>::TArray<FText,FDefaultAllocator>(local_78,&local_88);
    lVar9 = FUN_1411b9730(param_1,local_68,param_3,param_4,uVar8,param_5);
    lVar10 = 2;
    puVar5 = (undefined1 *)register0x00000020;
    do {
      plVar4 = *(longlong **)(puVar5 + -0x30);
      lVar10 = lVar10 + -1;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
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
      puVar5 = puVar5 + -0x18;
    } while (lVar10 != 0);
    if (lVar9 != 0) {
      FUN_142ed2a90(lVar9,param_2);
      if ((*(longlong *)(param_1 + 0x70) == 0) ||
         ((*(char *)(param_2 + 0x119) != '\0' &&
          ((*(longlong *)(param_1 + 0x68) == 0 ||
           (cVar7 = APlayerController::IsPrimaryPlayer(), cVar7 == '\0')))))) {
        uVar8 = 0;
      }
      else {
        uVar8 = 1;
      }
      (**(code **)(*(longlong *)(lVar9 + 0x170) + 0x38))((longlong *)(lVar9 + 0x170),uVar8);
      FUN_142ed2e40(lVar9,*(undefined1 *)(param_2 + 0xa0));
    }
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_60 + 1;
      lVar10 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar2 = (int *)((longlong)local_60 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_60 + 8))(local_60,1);
        }
      }
    }
  }
  return lVar9;
}



// FUNCTION 1411b9cb0 FUN_1411b9cb0 body=536 status=ok
// SIG undefined FUN_1411b9cb0(void)

longlong FUN_1411b9cb0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                      undefined4 param_5,undefined4 param_6,undefined1 param_7,undefined8 *param_8)

{
  undefined8 uVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  longlong local_48 [2];
  undefined1 local_38 [8];
  undefined8 local_30;
  
  if (*(longlong *)(param_1 + 0x80) == 0) {
    return 0;
  }
  local_48[1] = 0xf;
  local_48[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
  FGenericPlatformString::Memcpy(local_48[0],L"NumberListItem",0x1e);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  uVar3 = AOnlineBeaconClient::GetPrivateStaticClass();
  lVar4 = FUN_142ebcee0(uVar1,local_48,uVar3,0);
  if (lVar4 != 0) {
    lVar5 = AOnlineBeaconClient::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_1411b9d77;
  }
  lVar4 = 0;
LAB_1411b9d77:
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  if (lVar4 != 0) {
    FWeakObjectPtr::operator=(local_38,0);
    local_30 = 0;
    FWeakObjectPtr::operator=(local_38,param_1);
    local_30 = *param_8;
    FUN_142ebca00(lVar4,param_2,param_3,param_4,param_5,param_6,param_7,local_38);
    *(undefined8 *)(lVar4 + 0x338) = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(lVar4 + 0x1a0) = *(undefined8 *)(param_1 + 0x48);
    *(undefined1 *)(lVar4 + 0x198) = 1;
    if (*(longlong *)(lVar4 + 0x248) != 0) {
      uVar6 = FUN_14119e040();
      FUN_142f0d6e0(*(undefined8 *)(lVar4 + 0x248),uVar6,L"left");
    }
    lVar5 = *(longlong *)(lVar4 + 0x340);
    if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x248) != 0)) {
      uVar6 = FUN_14119e040();
      FUN_142f0d6e0(*(undefined8 *)(lVar5 + 0x248),uVar6,L"center");
    }
    lVar5 = *(longlong *)(lVar4 + 0x348);
    if (lVar5 != 0) {
      uVar6 = FUN_14119e040();
      FUN_142f0d6e0(lVar5,uVar6,L"center");
    }
  }
  return lVar4;
}



// FUNCTION 1411b9ed0 FUN_1411b9ed0 body=280 status=ok
// SIG undefined FUN_1411b9ed0(void)

longlong FUN_1411b9ed0(longlong param_1,longlong param_2,undefined4 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 local_38 [8];
  longlong *local_30;
  
  if (param_2 == 0) {
    lVar6 = 0;
  }
  else {
    FUN_1410cc2a0(param_2,local_38);
    lVar6 = FUN_1411b9cb0(param_1,local_38,param_3,*(undefined4 *)(param_2 + 0x80),
                          *(undefined4 *)(param_2 + 0x84),*(undefined4 *)(param_2 + 0x88),
                          *(undefined1 *)(param_2 + 0x8c),param_4);
    if (lVar6 != 0) {
      FUN_142ed2a90(lVar6,param_2);
      if ((*(longlong *)(param_1 + 0x70) == 0) ||
         ((*(char *)(param_2 + 0x119) != '\0' &&
          ((*(longlong *)(param_1 + 0x68) == 0 ||
           (cVar5 = APlayerController::IsPrimaryPlayer(), cVar5 == '\0')))))) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
      (**(code **)(*(longlong *)(lVar6 + 0x170) + 0x38))((longlong *)(lVar6 + 0x170),uVar7);
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
  }
  return lVar6;
}



// FUNCTION 1411b9ff0 FUN_1411b9ff0 body=128 status=ok
// SIG undefined FUN_1411b9ff0(void)

longlong FUN_1411b9ff0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                      undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_1411b9ed0(param_1,param_2,param_3,param_5);
  if (lVar2 != 0) {
    FUN_142ed2b00(lVar2,param_4);
    iVar1 = *(int *)(param_1 + 0xa0);
    *(int *)(param_1 + 0xa0) = iVar1 + 1;
    if (*(int *)(param_1 + 0xa4) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x98,iVar1);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x98) + (longlong)iVar1 * 8) = lVar2;
  }
  return lVar2;
}



// FUNCTION 1411ba070 FUN_1411ba070 body=517 status=ok
// SIG undefined FUN_1411ba070(void)

longlong FUN_1411ba070(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                      undefined8 param_5)

{
  undefined8 uVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  longlong *local_38;
  int local_30;
  longlong local_28 [2];
  
  if (*(longlong *)(param_1 + 0x80) == 0) {
    return 0;
  }
  local_28[1] = 0x10;
  local_28[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"SpinnerListItem",0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  uVar3 = UMobBaseAnim::GetPrivateStaticClass();
  lVar4 = FUN_142ebcee0(uVar1,local_28,uVar3,0);
  if (lVar4 != 0) {
    lVar5 = UMobBaseAnim::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_1411ba133;
  }
  lVar4 = 0;
LAB_1411ba133:
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (lVar4 != 0) {
    local_38 = (longlong *)0x0;
    local_30 = 0;
    FUN_140f13040(&local_38,param_1,param_5);
    FUN_142ebcaa0(lVar4,param_2,param_3,param_4,&local_38);
    *(undefined8 *)(lVar4 + 0x318) = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(lVar4 + 0x1a0) = *(undefined8 *)(param_1 + 0x48);
    *(undefined1 *)(lVar4 + 0x198) = 1;
    if (*(longlong *)(lVar4 + 0x248) != 0) {
      uVar6 = FUN_14119e040();
      FUN_142f0d6e0(*(undefined8 *)(lVar4 + 0x248),uVar6,L"left");
    }
    lVar5 = *(longlong *)(lVar4 + 800);
    if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x300) != 0)) {
      uVar6 = FUN_14119e040();
      FUN_142f0d6e0(*(undefined8 *)(lVar5 + 0x300),uVar6,L"center");
    }
    if (local_30 != 0) {
      if (local_38 == (longlong *)0x0) {
        return lVar4;
      }
      (**(code **)(*local_38 + 0x28))(local_38,0);
      if (local_38 != (longlong *)0x0) {
        local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
      }
      local_30 = 0;
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free(local_38);
    }
  }
  return lVar4;
}



// FUNCTION 1411ba280 FUN_1411ba280 body=257 status=ok
// SIG undefined FUN_1411ba280(void)

longlong FUN_1411ba280(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                      undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if (param_2 == 0) {
    lVar6 = 0;
  }
  else {
    FUN_1410cc2a0(param_2,local_28);
    lVar6 = FUN_1411ba070(param_1,local_28,param_3,param_4,param_5);
    if (lVar6 != 0) {
      FUN_142ed2a90(lVar6,param_2);
      if ((*(longlong *)(param_1 + 0x70) == 0) ||
         ((*(char *)(param_2 + 0x119) != '\0' &&
          ((*(longlong *)(param_1 + 0x68) == 0 ||
           (cVar5 = APlayerController::IsPrimaryPlayer(), cVar5 == '\0')))))) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
      (**(code **)(*(longlong *)(lVar6 + 0x170) + 0x38))((longlong *)(lVar6 + 0x170),uVar7);
      FUN_142ed2e40(lVar6,*(undefined1 *)(param_2 + 0xa0));
    }
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
  }
  return lVar6;
}



// FUNCTION 1411ba390 FUN_1411ba390 body=253 status=ok
// SIG undefined FUN_1411ba390(void)

longlong FUN_1411ba390(longlong param_1,longlong param_2,undefined4 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if (param_2 == 0) {
    lVar6 = 0;
  }
  else {
    FUN_1410cc2a0(param_2,local_28);
    lVar6 = FUN_1411ba070(param_1,local_28,param_2 + 0x90,param_3,param_4);
    if (lVar6 != 0) {
      FUN_142ed2a90(lVar6,param_2);
      if ((*(longlong *)(param_1 + 0x70) == 0) ||
         ((*(char *)(param_2 + 0x119) != '\0' &&
          ((*(longlong *)(param_1 + 0x68) == 0 ||
           (cVar5 = APlayerController::IsPrimaryPlayer(), cVar5 == '\0')))))) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
      (**(code **)(*(longlong *)(lVar6 + 0x170) + 0x38))((longlong *)(lVar6 + 0x170),uVar7);
      FUN_142ed2e40(lVar6,*(undefined1 *)(param_2 + 0xa0));
    }
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
  }
  return lVar6;
}



// FUNCTION 1411ba490 FUN_1411ba490 body=633 status=ok
// SIG undefined FUN_1411ba490(void)

longlong FUN_1411ba490(longlong param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                      longlong *param_5)

{
  undefined8 uVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined4 uVar8;
  longlong *local_58;
  int local_50;
  longlong local_48 [3];
  int local_30;
  undefined4 local_2c;
  
  if (*(longlong *)(param_1 + 0x80) == 0) {
    TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>::
    ~TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>(param_5);
    return 0;
  }
  local_48[0] = 0;
  local_48[1] = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
  FGenericPlatformString::Memcpy(local_48[0],L"SpinnerListItem",0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  uVar3 = UMobBaseAnim::GetPrivateStaticClass();
  lVar4 = FUN_142ebcee0(uVar1,local_48,uVar3,0);
  if (lVar4 == 0) {
LAB_1411ba554:
    lVar4 = 0;
  }
  else {
    lVar5 = UMobBaseAnim::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_1411ba554;
  }
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  if (lVar4 != 0) {
    local_58 = (longlong *)0x0;
    local_50 = 0;
    FUN_140f13040(&local_58,param_1,param_4);
    lVar5 = *param_5;
    local_48[2] = 0;
    iVar6 = (int)param_5[1];
    local_30 = iVar6;
    if (iVar6 == 0) {
      local_2c = 0;
    }
    else {
      TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(local_48 + 2,iVar6,0);
      lVar7 = local_48[2];
      do {
        FText::FText(lVar7,lVar5);
        lVar7 = lVar7 + 0x18;
        lVar5 = lVar5 + 0x18;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    FUN_142ebc020(lVar4,param_2,param_3,&local_58,local_48 + 2);
    *(undefined8 *)(lVar4 + 0x318) = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(lVar4 + 0x1a0) = *(undefined8 *)(param_1 + 0x48);
    *(undefined1 *)(lVar4 + 0x198) = 1;
    if (*(longlong *)(lVar4 + 0x248) != 0) {
      uVar8 = FUN_14119e040();
      FUN_142f0d6e0(*(undefined8 *)(lVar4 + 0x248),uVar8,L"left");
    }
    lVar5 = *(longlong *)(lVar4 + 800);
    if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x300) != 0)) {
      uVar8 = FUN_14119e040();
      FUN_142f0d6e0(*(undefined8 *)(lVar5 + 0x300),uVar8,L"center");
    }
    if (local_50 != 0) {
      if (local_58 == (longlong *)0x0) goto LAB_1411ba6ba;
      (**(code **)(*local_58 + 0x28))(local_58,0);
      if (local_58 != (longlong *)0x0) {
        local_58 = (longlong *)FMemory::Realloc(local_58,0,0);
      }
      local_50 = 0;
    }
    if (local_58 != (longlong *)0x0) {
      FMemory::Free(local_58);
    }
  }
LAB_1411ba6ba:
  TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>::
  ~TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>(param_5);
  return lVar4;
}



// FUNCTION 1411ba710 FUN_1411ba710 body=460 status=ok
// SIG undefined FUN_1411ba710(void)

longlong FUN_1411ba710(longlong param_1,longlong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  longlong lVar6;
  char cVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined1 local_78 [16];
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_50 [24];
  undefined1 local_38 [24];
  undefined1 local_20 [8];
  
  if (param_2 == 0) {
    lVar9 = 0;
  }
  else {
    FUN_1410cc2a0(param_2,local_68);
    FText::FText(local_50,param_2 + 0xf8);
    FText::FText(local_38,param_2 + 0xe0);
    local_88 = local_50;
    puStack_80 = local_20;
    uVar8 = TArray<FText,FDefaultAllocator>::TArray<FText,FDefaultAllocator>(local_78,&local_88);
    lVar9 = FUN_1411ba490(param_1,local_68,param_3,param_4,uVar8);
    lVar10 = 2;
    puVar5 = (undefined1 *)register0x00000020;
    do {
      plVar4 = *(longlong **)(puVar5 + -0x30);
      lVar10 = lVar10 + -1;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
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
      puVar5 = puVar5 + -0x18;
    } while (lVar10 != 0);
    if (lVar9 != 0) {
      FUN_142ed2a90(lVar9,param_2);
      if ((*(longlong *)(param_1 + 0x70) == 0) ||
         ((*(char *)(param_2 + 0x119) != '\0' &&
          ((*(longlong *)(param_1 + 0x68) == 0 ||
           (cVar7 = APlayerController::IsPrimaryPlayer(), cVar7 == '\0')))))) {
        uVar8 = 0;
      }
      else {
        uVar8 = 1;
      }
      (**(code **)(*(longlong *)(lVar9 + 0x170) + 0x38))((longlong *)(lVar9 + 0x170),uVar8);
      FUN_142ed2e40(lVar9,*(undefined1 *)(param_2 + 0xa0));
    }
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_60 + 1;
      lVar10 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar2 = (int *)((longlong)local_60 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_60 + 8))(local_60,1);
        }
      }
    }
  }
  return lVar9;
}



// FUNCTION 1411ba8e0 FUN_1411ba8e0 body=204 status=ok
// SIG undefined FUN_1411ba8e0(void)

longlong FUN_1411ba8e0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 local_res10 [8];
  undefined1 local_28 [8];
  longlong *local_20;
  
  if (param_2 != 0) {
    uVar5 = FUN_1410cc2a0(param_2,local_28);
    uVar6 = FName::FName(local_res10,L"OnUnimplementedOptionClicked",1);
    lVar7 = FUN_1411b83b0(param_1,uVar5,uVar6);
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
    if (lVar7 != 0) {
      FUN_142ed2a90(lVar7,param_2);
    }
    return lVar7;
  }
  return 0;
}



// FUNCTION 1411ba9b0 FUN_1411ba9b0 body=717 status=ok
// SIG undefined FUN_1411ba9b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411ba9b0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined1 auStack_118 [32];
  longlong local_f8 [3];
  longlong lStack_e0;
  undefined8 local_d8;
  undefined4 *local_c8;
  ulonglong *puStack_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_90 [8];
  longlong *local_88;
  undefined1 local_78 [16];
  undefined4 local_68 [2];
  undefined8 local_60;
  longlong *local_50;
  char local_40;
  ulonglong local_38 [2];
  
  local_38[0] = DAT_1468387a8 ^ (ulonglong)auStack_118;
  if (*(longlong *)(param_1 + 0x80) == 0) {
    return;
  }
  local_f8[1] = 0x19;
  local_f8[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_f8,0);
  FGenericPlatformString::Memcpy(local_f8[0],L"OptionsMenuTitleListItem",0x32);
  uVar9 = *(undefined8 *)(param_1 + 0x80);
  local_d8 = URemnantGameInstance::GetPrivateStaticClass();
  lVar6 = FUN_142ebcee0(uVar9,local_f8,local_d8,0);
  if (lVar6 != 0) {
    lVar7 = URemnantGameInstance::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) goto LAB_1411baa7d;
  }
  lVar6 = 0;
LAB_1411baa7d:
  if (local_f8[0] != 0) {
    FMemory::Free();
  }
  if (lVar6 != 0) {
    puVar8 = (undefined8 *)FTextFormat::FTextFormat(local_78,param_2);
    local_68[0] = 0;
    local_c8 = local_68;
    local_40 = '\0';
    puStack_c0 = local_38;
    local_f8[2] = *puVar8;
    lStack_e0 = puVar8[1];
    local_60 = 0;
    if (lStack_e0 != 0) {
      LOCK();
      *(int *)(lStack_e0 + 8) = *(int *)(lStack_e0 + 8) + 1;
      UNLOCK();
    }
    uVar9 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_b8,&local_c8);
    uVar9 = FText::Format(local_90,local_f8 + 2,uVar9);
    FText::FText(local_a8,uVar9);
    if (local_88 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_88 + 1;
      lVar7 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_88)(local_88);
        LOCK();
        piVar1 = (int *)((longlong)local_88 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_88 + 8))(local_88,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_b8);
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
    plVar4 = (longlong *)puVar8[1];
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
    FUN_142ed3af0(lVar6,local_a8,0);
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
    (**(code **)(*(longlong *)(lVar6 + 0x170) + 0x38))((longlong *)(lVar6 + 0x170),0);
    *(undefined1 *)(lVar6 + 0x198) = 1;
    if (*(longlong *)(lVar6 + 0x248) != 0) {
      uVar10 = FUN_14119e040();
      FUN_142f0d6e0(*(undefined8 *)(lVar6 + 0x248),uVar10,L"left");
    }
  }
  return;
}



// FUNCTION 1411bac80 FUN_1411bac80 body=776 status=ok
// SIG undefined FUN_1411bac80(void)

void FUN_1411bac80(longlong param_1)

{
  longlong lVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  undefined8 uVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  longlong *plVar8;
  uint uVar9;
  longlong local_res8;
  longlong local_res10;
  undefined4 local_a8;
  undefined4 local_a4;
  longlong local_a0;
  undefined4 local_98;
  undefined4 local_94;
  longlong local_90;
  undefined1 local_88 [8];
  undefined8 local_80;
  longlong local_78;
  wchar_t *local_70;
  undefined4 local_68;
  undefined4 local_64;
  longlong local_60;
  longlong local_58;
  wchar_t *local_50;
  undefined1 local_48 [32];
  wchar_t *pwVar10;
  
  FWeakObjectPtr::operator=(local_88,0);
  pwVar7 = (wchar_t *)0x0;
  local_80 = 0;
  if (0 < *(int *)(param_1 + 0x300)) {
    local_res8 = 0;
    pwVar10 = pwVar7;
    do {
      FWeakObjectPtr::operator=(&local_a8,0);
      local_a0 = 0;
      pwVar3 = _guard_xfg_dispatch_icall_nop(L"&UTestSubMapsMenu::OnTestMapSelected",L"::");
      pwVar6 = pwVar7;
      while (pwVar2 = pwVar3, pwVar2 != (wchar_t *)0x0) {
        pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar6 = pwVar2;
      }
      FName::FName(&local_res8,pwVar6 + 2,1);
      lVar4 = local_res8;
      FWeakObjectPtr::operator=(&local_a8,param_1);
      local_a0 = lVar4;
      if ((lVar4 != 0) && (lVar4 = FWeakObjectPtr::Get(&local_a8), lVar4 != 0)) {
        UObject::FindFunction(lVar4,local_a0);
      }
      lVar4 = *(longlong *)(param_1 + 0x308);
      lVar1 = *(longlong *)(param_1 + 0x2f8);
      local_70 = (wchar_t *)local_80;
      local_68 = local_a8;
      local_64 = local_a4;
      local_60 = local_a0;
      local_50 = (wchar_t *)0x0;
      pwVar6 = pwVar7;
      local_58 = lVar4;
      if (lVar4 != 0) {
        uVar5 = FUN_142f2b0d0();
        pwVar6 = (wchar_t *)UObjectBaseUtility::GetInterfaceAddress(lVar4,uVar5);
      }
      local_50 = pwVar6;
      uVar5 = FText::FText(local_48,lVar1 + (longlong)(int)pwVar10 * 0x28);
      FUN_142ee7ec0(&local_58,*(undefined8 *)(param_1 + 0x2c8),uVar5,&local_68,&local_78);
      uVar9 = (int)pwVar10 + 1;
      pwVar10 = (wchar_t *)(ulonglong)uVar9;
    } while ((int)uVar9 < *(int *)(param_1 + 0x300));
  }
  FWeakObjectPtr::operator=(&local_98,0);
  local_90 = 0;
  pwVar6 = _guard_xfg_dispatch_icall_nop(L"&UTestSubMapsMenu::OnBackClicked",L"::");
  pwVar10 = pwVar7;
  while (pwVar3 = pwVar6, pwVar3 != (wchar_t *)0x0) {
    pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
    pwVar10 = pwVar3;
  }
  FName::FName(&local_res10,pwVar10 + 2,1);
  FWeakObjectPtr::operator=(&local_98,param_1);
  local_90 = local_res10;
  local_res8 = 0;
  if ((local_res10 != 0) && (lVar4 = FWeakObjectPtr::Get(&local_98), lVar4 != 0)) {
    UObject::FindFunction(lVar4,local_90);
  }
  lVar4 = *(longlong *)(param_1 + 0x308);
  local_50 = (wchar_t *)local_80;
  local_68 = local_98;
  local_64 = local_94;
  local_60 = local_90;
  local_78 = lVar4;
  if (lVar4 != 0) {
    uVar5 = FUN_142f2b0d0();
    pwVar7 = (wchar_t *)UObjectBaseUtility::GetInterfaceAddress(lVar4,uVar5);
  }
  local_70 = pwVar7;
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_48,L"Back",L"TestMapsMenu",L"BackText");
  uVar5 = FUN_142ee7ec0(&local_78,*(undefined8 *)(param_1 + 0x2c8),uVar5,&local_68,&local_58);
  *(undefined8 *)(param_1 + 0x2f0) = uVar5;
  if (*(longlong *)(param_1 + 0x308) != 0) {
    plVar8 = (longlong *)(*(longlong *)(param_1 + 0x308) + 0x860);
    (**(code **)(*plVar8 + 0x18))(plVar8,0,0,0);
  }
  return;
}



// FUNCTION 1411baf90 FUN_1411baf90 body=128 status=ok
// SIG undefined FUN_1411baf90(void)

void FUN_1411baf90(longlong param_1,char param_2)

{
  wchar_t *pwVar1;
  longlong local_18 [2];
  
  if (*(char *)(param_1 + 0x170) != param_2) {
    *(char *)(param_1 + 0x170) = param_2;
    local_18[1] = 5;
    local_18[0] = 0;
    if (param_2 == '\0') {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      pwVar1 = L"hide";
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      pwVar1 = L"show";
    }
    FGenericPlatformString::Memcpy(local_18[0],pwVar1,10);
    FUN_142088910(param_1,local_18);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1411bb010 FUN_1411bb010 body=2210 status=ok
// SIG undefined FUN_1411bb010(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411bb010(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  undefined4 *puVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  wchar_t *pwVar14;
  longlong *plVar15;
  undefined1 auStack_378 [32];
  longlong local_358;
  undefined4 *local_348;
  ulonglong *puStack_340;
  undefined1 local_338 [8];
  longlong *local_330;
  undefined8 local_320;
  undefined8 local_318;
  undefined2 local_310;
  undefined1 local_308 [8];
  longlong *local_300;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined2 local_2e0;
  undefined1 local_2d8 [8];
  longlong *local_2d0;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined2 local_2b0;
  undefined8 local_2a8;
  longlong local_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined1 local_288 [16];
  undefined1 local_278 [8];
  longlong *local_270;
  undefined1 local_258 [24];
  undefined1 local_240 [24];
  longlong local_228;
  int local_220;
  int local_21c;
  undefined1 local_218 [8];
  undefined4 *local_210;
  undefined2 local_1d5;
  undefined1 local_168 [8];
  longlong *local_160;
  undefined1 local_150 [8];
  longlong *local_148;
  undefined1 local_138 [8];
  longlong *local_130;
  undefined1 local_120 [8];
  longlong *local_118;
  undefined1 local_108 [8];
  longlong *local_100;
  undefined1 local_f0 [8];
  longlong *local_e8;
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c0 [16];
  undefined1 local_b0 [24];
  undefined4 local_98 [4];
  undefined1 local_88 [24];
  undefined1 local_70;
  undefined4 local_68;
  longlong local_60;
  undefined1 local_40;
  ulonglong local_38 [2];
  
  local_38[0] = DAT_1468387a8 ^ (ulonglong)auStack_378;
  lVar9 = FWeakObjectPtr::Get(param_1 + 0x58c);
  if (lVar9 != 0) {
    lVar10 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      lVar10 = FUN_140cfbfb0(lVar9);
      FUN_140b99f70(local_258);
      if ((lVar10 == 0) || (lVar11 = FUN_140d3b710(lVar10), lVar11 == 0)) {
        uVar12 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                           (local_138,L"Gunner Lvl 1",L"PauseMenu",L"DefaultCharacterLevel");
        FText::operator=(local_240,uVar12);
        local_298 = (undefined4 *)CONCAT44(local_298._4_4_,(undefined4)local_298);
        uStack_290 = (ulonglong *)CONCAT44(uStack_290._4_4_,(undefined4)uStack_290);
        if (local_130 != (longlong *)0x0) {
          LOCK();
          plVar15 = local_130 + 1;
          lVar10 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          local_298 = (undefined4 *)CONCAT44(local_298._4_4_,(undefined4)local_298);
          uStack_290 = (ulonglong *)CONCAT44(uStack_290._4_4_,(undefined4)uStack_290);
          if ((int)lVar10 == 1) {
            (**(code **)*local_130)(local_130);
            LOCK();
            piVar1 = (int *)((longlong)local_130 + 0xc);
            iVar8 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*local_130 + 8))(local_130,1);
            }
          }
        }
      }
      else {
        iVar8 = FUN_140c10350(*(undefined4 *)(lVar10 + 0xa0));
        lVar10 = FUN_140d3b710(lVar10);
        lVar10 = FText::FText(local_b0,lVar10 + 0x90);
        local_358 = lVar10;
        uVar12 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                           (local_150,L"{0} Lvl {1}",L"PauseMenu",L"CharacterLevel");
        puVar13 = (undefined8 *)FTextFormat::FTextFormat(local_c0,uVar12);
        local_98[0] = 4;
        FText::FText(local_88,lVar10);
        local_348 = local_98;
        local_70 = 1;
        puStack_340 = local_38;
        local_2a8 = *puVar13;
        local_2a0 = puVar13[1];
        local_68 = 0;
        local_40 = 0;
        if (local_2a0 != 0) {
          LOCK();
          *(int *)(local_2a0 + 8) = *(int *)(local_2a0 + 8) + 1;
          UNLOCK();
        }
        local_60 = (longlong)iVar8;
        local_298 = local_348;
        uStack_290 = puStack_340;
        uVar12 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                 TArray<FFormatArgumentValue,FDefaultAllocator>(local_288,&local_298);
        uVar12 = FText::Format(local_168,&local_2a8,uVar12);
        FText::FText(local_278,uVar12);
        if (local_160 != (longlong *)0x0) {
          LOCK();
          plVar15 = local_160 + 1;
          lVar10 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*local_160)(local_160);
            LOCK();
            piVar1 = (int *)((longlong)local_160 + 0xc);
            iVar8 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*local_160 + 8))(local_160,1);
            }
          }
        }
        TArray<FFormatArgumentValue,FDefaultAllocator>::
        ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_288);
        lVar10 = 2;
        plVar15 = (longlong *)&stack0xffffffffffffffe0;
        do {
          lVar10 = lVar10 + -1;
          if ((char)plVar15[-4] != '\0') {
            *(undefined1 *)(plVar15 + -4) = 0;
            plVar3 = (longlong *)plVar15[-6];
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              plVar2 = plVar3 + 1;
              lVar11 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar11 == 1) {
                (**(code **)*plVar3)(plVar3);
                LOCK();
                piVar1 = (int *)((longlong)plVar3 + 0xc);
                iVar8 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar8 == 1) {
                  (**(code **)(*plVar3 + 8))(plVar3,1);
                }
              }
            }
          }
          plVar15 = plVar15 + -6;
        } while (lVar10 != 0);
        plVar15 = (longlong *)puVar13[1];
        if (plVar15 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar15 + 1;
          lVar10 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar1 = (int *)((longlong)plVar15 + 0xc);
            iVar8 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*plVar15 + 8))(plVar15,1);
            }
          }
        }
        plVar15 = *(longlong **)(local_358 + 8);
        if (plVar15 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar15 + 1;
          lVar10 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar1 = (int *)((longlong)plVar15 + 0xc);
            iVar8 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*plVar15 + 8))(plVar15,1);
            }
          }
        }
        FText::operator=(local_240,local_278);
        if (local_270 != (longlong *)0x0) {
          LOCK();
          plVar15 = local_270 + 1;
          lVar10 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*local_270)(local_270);
            LOCK();
            piVar1 = (int *)((longlong)local_270 + 0xc);
            iVar8 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*local_270 + 8))(local_270,1);
            }
          }
        }
        if (local_148 != (longlong *)0x0) {
          LOCK();
          plVar15 = local_148 + 1;
          lVar10 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*local_148)(local_148);
            LOCK();
            piVar1 = (int *)((longlong)local_148 + 0xc);
            iVar8 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*local_148 + 8))(local_148,1);
            }
          }
        }
      }
      uVar12 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_120,L"Confirm Character",L"PauseMenu",
                          L"DialogChoice_ConfirmCharacter");
      FText::operator=(local_258,uVar12);
      if (local_118 != (longlong *)0x0) {
        LOCK();
        plVar15 = local_118 + 1;
        lVar10 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_118)(local_118);
          LOCK();
          piVar1 = (int *)((longlong)local_118 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_118 + 8))(local_118,1);
          }
        }
      }
      pwVar14 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnConfirmCharacterClicked",L"::");
      pwVar6 = (wchar_t *)0x0;
      while (pwVar5 = pwVar14, pwVar5 != (wchar_t *)0x0) {
        pwVar14 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
        pwVar6 = pwVar5;
      }
      FName::FName(&local_348,pwVar6 + 2,1);
      puVar7 = local_348;
      FWeakObjectPtr::operator=(local_218,param_1);
      local_358 = 0;
      local_210 = puVar7;
      if (puVar7 != (undefined4 *)0x0) {
        lVar10 = FWeakObjectPtr::Get(local_218);
        if (lVar10 != 0) {
          UObject::FindFunction(lVar10,local_210);
        }
      }
      local_1d5 = 0x100;
      uVar12 = FUN_1404b03b0();
      FText::FText(local_2d8,uVar12);
      local_2c0 = DAT_146874fd0;
      local_2b8 = 0;
      local_2b0 = 1;
      uVar12 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_108,L"Confirm",L"PauseMenu",L"DialogChoice_Confirm");
      FText::operator=(local_2d8,uVar12);
      if (local_100 != (longlong *)0x0) {
        LOCK();
        plVar15 = local_100 + 1;
        lVar10 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_100)(local_100);
          LOCK();
          piVar1 = (int *)((longlong)local_100 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_100 + 8))(local_100,1);
          }
        }
      }
      iVar8 = local_220;
      lVar10 = (longlong)local_220;
      local_2b0._0_1_ = 1;
      local_220 = local_220 + 1;
      if (local_21c < local_220) {
        TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_228,iVar8);
      }
      lVar10 = lVar10 * 0x30 + local_228;
      FText::FText(lVar10,local_2d8);
      *(undefined8 *)(lVar10 + 0x18) = local_2c0;
      *(undefined8 *)(lVar10 + 0x20) = local_2b8;
      *(undefined1 *)(lVar10 + 0x28) = (undefined1)local_2b0;
      *(undefined1 *)(lVar10 + 0x29) = local_2b0._1_1_;
      uVar12 = FUN_1404b03b0();
      FText::FText(local_308,uVar12);
      local_2f0 = DAT_146874fe0;
      local_2e8 = 0;
      local_2e0 = 1;
      uVar12 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_f0,L"Change Character",L"PauseMenu",L"DialogChoice_ChangeCharacter")
      ;
      FText::operator=(local_308,uVar12);
      if (local_e8 != (longlong *)0x0) {
        LOCK();
        plVar15 = local_e8 + 1;
        lVar10 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_e8)(local_e8);
          LOCK();
          piVar1 = (int *)((longlong)local_e8 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_e8 + 8))(local_e8,1);
          }
        }
      }
      iVar8 = local_220;
      lVar10 = (longlong)local_220;
      local_2e0._0_1_ = 1;
      local_220 = local_220 + 1;
      if (local_21c < local_220) {
        TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_228,iVar8);
      }
      lVar10 = lVar10 * 0x30 + local_228;
      FText::FText(lVar10,local_308);
      *(undefined8 *)(lVar10 + 0x18) = local_2f0;
      *(undefined8 *)(lVar10 + 0x20) = local_2e8;
      *(undefined1 *)(lVar10 + 0x28) = (undefined1)local_2e0;
      *(undefined1 *)(lVar10 + 0x29) = local_2e0._1_1_;
      uVar12 = FUN_1404b03b0();
      FText::FText(local_338,uVar12);
      local_320 = DAT_146874fd8;
      local_318 = 0;
      local_310 = 1;
      uVar12 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_d8,L"Cancel",L"PauseMenu",L"DialogChoice_Cancel");
      FText::operator=(local_338,uVar12);
      if (local_d0 != (longlong *)0x0) {
        LOCK();
        plVar15 = local_d0 + 1;
        lVar10 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
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
      iVar8 = local_220;
      lVar10 = (longlong)local_220;
      local_318 = DAT_146b3e2b8;
      local_310._0_1_ = 1;
      local_220 = local_220 + 1;
      if (local_21c < local_220) {
        TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_228,iVar8);
      }
      lVar10 = lVar10 * 0x30 + local_228;
      FText::FText(lVar10,local_338);
      *(undefined8 *)(lVar10 + 0x18) = local_320;
      *(undefined8 *)(lVar10 + 0x20) = local_318;
      *(undefined1 *)(lVar10 + 0x28) = (undefined1)local_310;
      *(undefined1 *)(lVar10 + 0x29) = local_310._1_1_;
      FUN_1410f3080(lVar9,local_258);
      if (local_330 != (longlong *)0x0) {
        LOCK();
        plVar15 = local_330 + 1;
        lVar9 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_330)(local_330);
          LOCK();
          piVar1 = (int *)((longlong)local_330 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_330 + 8))(local_330,1);
          }
        }
      }
      if (local_300 != (longlong *)0x0) {
        LOCK();
        plVar15 = local_300 + 1;
        lVar9 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_300)(local_300);
          LOCK();
          piVar1 = (int *)((longlong)local_300 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_300 + 8))(local_300,1);
          }
        }
      }
      if (local_2d0 != (longlong *)0x0) {
        LOCK();
        plVar15 = local_2d0 + 1;
        lVar9 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_2d0)(local_2d0);
          LOCK();
          piVar1 = (int *)((longlong)local_2d0 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_2d0 + 8))(local_2d0,1);
          }
        }
      }
      FUN_140b9d1a0(local_258);
    }
  }
  return;
}



// FUNCTION 1411bb8c0 FUN_1411bb8c0 body=727 status=ok
// SIG undefined FUN_1411bb8c0(void)

longlong FUN_1411bb8c0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined1 param_5,undefined1 param_6,longlong **param_7)

{
  longlong *plVar1;
  undefined8 uVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  undefined1 local_118 [24];
  undefined1 local_100 [56];
  longlong *local_c8;
  int local_c0;
  undefined1 local_b8;
  undefined1 local_b7;
  undefined1 local_b6;
  undefined2 local_95;
  undefined8 local_80;
  
  plVar6 = *(longlong **)(param_1 + 0x68);
  if (((*(longlong *)(param_1 + 0x78) != 0) && (cVar4 = FUN_140bca8a0(), cVar4 != '\0')) &&
     (iVar5 = FUN_14046e5c0(*(undefined8 *)(param_1 + 0x78)), 1 < iVar5)) {
    if (*(longlong *)(param_1 + 0x78) == 0) {
      return 0;
    }
    plVar6 = (longlong *)FUN_1424503b0();
    if (plVar6 == (longlong *)0x0) {
      return 0;
    }
    lVar7 = FUN_14145f370();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) {
      return 0;
    }
  }
  if ((plVar6 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x68) != 0)) {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    lVar7 = *(longlong *)(DAT_146b33f38 + 0x90);
    if (((lVar7 != 0) && (*(longlong *)(lVar7 + 0xb70) != 0)) &&
       (lVar8 = (**(code **)(*plVar6 + 0xfa8))(plVar6), lVar8 != 0)) {
      FUN_140b99f70(local_118);
      FText::operator=(local_100,param_3);
      FText::operator=(local_118,param_2);
      local_b6 = 3;
      if (param_7 != &local_c8) {
        if ((*(int *)(param_7 + 1) == 0) || (plVar1 = *param_7, plVar1 == (longlong *)0x0)) {
          if ((local_c0 != 0) && (local_c8 != (longlong *)0x0)) {
            (**(code **)(*local_c8 + 0x28))(local_c8,0);
            if (local_c8 != (longlong *)0x0) {
              local_c8 = (longlong *)FMemory::Realloc(local_c8,0,0);
            }
            local_c0 = 0;
          }
        }
        else {
          (**(code **)(*plVar1 + 0x30))(plVar1,&local_c8);
        }
      }
      uVar2 = *(undefined8 *)(lVar7 + 0xb70);
      local_b8 = param_5;
      local_b7 = param_6;
      local_80 = *(undefined8 *)(param_1 + 0x68);
      local_95 = 0;
      FUN_1417846f0(plVar6,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
      uVar9 = FUN_141319ff0();
      lVar7 = FUN_1417985e0(uVar9,plVar6,0,0,0,uVar2,0,0,0);
      if (lVar7 != 0) {
        FUN_1410b49a0(lVar7 + 0xc0,local_118);
        uVar10 = 1;
        if ((char)local_95 != '\0') {
          uVar10 = 4;
        }
        *(undefined1 *)(lVar7 + 0x32) = uVar10;
        lVar7 = FUN_142f02280(lVar8,lVar7);
        if (lVar7 != 0) {
          lVar8 = UEditableTextBoxWidgetStyle::StaticClass();
          if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            *(undefined8 *)(lVar7 + 0x7f8) = DAT_146875eb8;
            FUN_140b9d1a0(local_118);
            return lVar7;
          }
        }
        FUN_140b9d1a0(local_118);
        return 0;
      }
      FUN_140b9d1a0(local_118);
    }
  }
  return 0;
}



// FUNCTION 1411bbba0 FUN_1411bbba0 body=1162 status=ok
// SIG undefined FUN_1411bbba0(void)

void FUN_1411bbba0(longlong *param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  undefined8 uVar11;
  longlong local_res20;
  longlong local_118;
  undefined8 local_110;
  undefined1 local_108 [8];
  longlong local_100;
  undefined1 local_f8 [8];
  longlong *local_f0;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined2 local_d0;
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined2 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_58 [8];
  longlong *local_50;
  
  lVar8 = (**(code **)(*param_1 + 0x148))();
  lVar8 = *(longlong *)(lVar8 + 400);
  if (lVar8 == 0) {
    return;
  }
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (local_88,L"Login Error",L"GFxOakTitleScreen",L"LoginErrorText");
  pwVar9 = (wchar_t *)FUN_14244f490(lVar8,0);
  if (pwVar9 != (wchar_t *)0x0) {
    lVar8 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(pwVar9 + 8) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar9 + 8) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
        lVar8 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_1411bbc5b;
  }
  pwVar9 = (wchar_t *)0x0;
LAB_1411bbc5b:
  if (param_3 == '\0') {
    FUN_14119ec60(param_1,0);
    FWeakObjectPtr::operator=(local_98,0);
    local_90 = 0;
    FUN_1410f3960(pwVar9,local_88,param_2,local_98,1,0,2);
  }
  else {
    FWeakObjectPtr::operator=(local_108,0);
    local_100 = 0;
    pwVar10 = _guard_xfg_dispatch_icall_nop(L"&UGFxOakTitleScreenMenu::OnQuitChoiceMade",L"::");
    pwVar5 = (wchar_t *)0x0;
    while (pwVar4 = pwVar10, pwVar4 != (wchar_t *)0x0) {
      pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
      pwVar5 = pwVar4;
    }
    FName::FName(&local_res20,pwVar5 + 2,1);
    FWeakObjectPtr::operator=(local_108,param_1);
    local_100 = local_res20;
    if ((local_res20 != 0) && (lVar8 = FWeakObjectPtr::Get(local_108), lVar8 != 0)) {
      UObject::FindFunction(lVar8,local_100);
    }
    local_118 = 0;
    local_110 = 0;
    uVar11 = FUN_1404b03b0();
    FText::FText(local_f8,uVar11);
    local_e0 = 0;
    local_d8 = 0;
    local_d0 = 1;
    uVar11 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_70,L"Okay",L"GFxOakTitleScreen",L"DialogChoice_Okay");
    FText::operator=(local_f8,uVar11);
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_68 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar2 = (int *)((longlong)local_68 + 0xc);
        iVar7 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_68 + 8))(local_68,1);
        }
      }
    }
    uVar6 = local_110;
    lVar8 = (longlong)(int)local_110;
    local_e0 = DAT_146876340;
    local_d8 = DAT_146b3e2b8;
    iVar7 = (int)local_110 + 1;
    local_110 = CONCAT44(local_110._4_4_,iVar7);
    if (local_110._4_4_ < iVar7) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_118,uVar6 & 0xffffffff);
    }
    lVar8 = lVar8 * 0x30 + local_118;
    FText::FText(lVar8,local_f8);
    *(undefined8 *)(lVar8 + 0x18) = local_e0;
    *(undefined8 *)(lVar8 + 0x20) = local_d8;
    *(undefined1 *)(lVar8 + 0x28) = (undefined1)local_d0;
    *(undefined1 *)(lVar8 + 0x29) = local_d0._1_1_;
    uVar11 = FUN_1404b03b0();
    FText::FText(local_c8,uVar11);
    local_b0 = 0;
    local_a8 = 0;
    local_a0 = 1;
    uVar11 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_58,L"Quit Game",L"GFxOakTitleScreen",L"DialogChoice_Desktop");
    FText::operator=(local_c8,uVar11);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)local_50 + 0xc);
        iVar7 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
    uVar6 = local_110;
    lVar8 = (longlong)(int)local_110;
    local_b0 = DAT_146876348;
    iVar7 = (int)local_110 + 1;
    local_110 = CONCAT44(local_110._4_4_,iVar7);
    if (local_110._4_4_ < iVar7) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_118,uVar6 & 0xffffffff);
    }
    lVar8 = lVar8 * 0x30 + local_118;
    FText::FText(lVar8,local_c8);
    *(undefined8 *)(lVar8 + 0x18) = local_b0;
    *(undefined8 *)(lVar8 + 0x20) = local_a8;
    *(undefined1 *)(lVar8 + 0x28) = (undefined1)local_a0;
    *(undefined1 *)(lVar8 + 0x29) = local_a0._1_1_;
    FUN_1410f2f10(pwVar9,local_88,param_2,&local_118,local_108,1,0,2,0,0);
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_c0 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_c0)(local_c0);
        LOCK();
        piVar2 = (int *)((longlong)local_c0 + 0xc);
        iVar7 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_c0 + 8))(local_c0,1);
        }
      }
    }
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_f0 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_f0)(local_f0);
        LOCK();
        piVar2 = (int *)((longlong)local_f0 + 0xc);
        iVar7 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_f0 + 8))(local_f0,1);
        }
      }
    }
    TArray<FKeyBindMenuEntry,FDefaultAllocator>::~TArray<FKeyBindMenuEntry,FDefaultAllocator>
              (&local_118);
  }
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_80 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar2 = (int *)((longlong)local_80 + 0xc);
      iVar7 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_80 + 8))(local_80,1);
      }
    }
  }
  return;
}



// FUNCTION 1411bc030 FUN_1411bc030 body=347 status=ok
// SIG undefined FUN_1411bc030(void)

void FUN_1411bc030(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 local_res8 [32];
  
  lVar2 = *(longlong *)(param_1 + 0x698);
  if ((lVar2 != 0) && (0 < *(int *)(lVar2 + 0x10))) {
    cVar1 = *(char *)(param_1 + 0x6f0);
    if (cVar1 == '\0') {
      local_res8[0] = 0;
      if (*(char *)(param_1 + 0x6f1) != '\0') {
        FUN_141183810();
        return;
      }
      FUN_141186810(*(undefined8 *)(lVar2 + 8),(longlong)*(int *)(lVar2 + 0x10),0,local_res8);
    }
    else {
      if (cVar1 == '\x01') {
        local_res8[0] = 0;
        if (*(char *)(param_1 + 0x6f1) != '\0') {
          FUN_141185e40();
          return;
        }
        FUN_141187180(*(undefined8 *)(lVar2 + 8),(longlong)*(int *)(lVar2 + 0x10),0,local_res8);
        return;
      }
      if (cVar1 == '\x02') {
        local_res8[0] = 0;
        if (*(char *)(param_1 + 0x6f1) != '\0') {
          FUN_141182e30();
          return;
        }
        FUN_141182450(*(undefined8 *)(lVar2 + 8),(longlong)*(int *)(lVar2 + 0x10),0,local_res8);
        return;
      }
      if (cVar1 == '\x03') {
        local_res8[0] = 0;
        if (*(char *)(param_1 + 0x6f1) != '\0') {
          FUN_141185460();
          return;
        }
        FUN_141181a70(*(undefined8 *)(lVar2 + 8),(longlong)*(int *)(lVar2 + 0x10),0,local_res8);
        return;
      }
      if (cVar1 == '\x04') {
        local_res8[0] = 0;
        if (*(char *)(param_1 + 0x6f1) != '\0') {
          FUN_141184af0();
          return;
        }
        FUN_141184180(*(undefined8 *)(lVar2 + 8),(longlong)*(int *)(lVar2 + 0x10),0,local_res8);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1411bc190 FUN_1411bc190 body=1518 status=ok
// SIG undefined FUN_1411bc190(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411bc190(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  float fVar3;
  int iVar4;
  longlong *plVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined1 auStack_2a8 [32];
  undefined4 local_288;
  undefined4 local_284;
  longlong local_280;
  undefined1 local_278 [8];
  longlong *local_270;
  undefined8 local_260;
  undefined8 local_258;
  undefined2 local_250;
  undefined8 local_248;
  longlong local_240;
  undefined4 *local_238;
  ulonglong *puStack_230;
  undefined8 local_228;
  longlong local_220;
  undefined4 *local_218;
  ulonglong *puStack_210;
  undefined1 local_208 [16];
  undefined1 local_1f8 [8];
  longlong *local_1f0;
  undefined1 local_1d8 [24];
  undefined1 local_1c0 [24];
  longlong local_1a8;
  int local_1a0;
  int local_19c;
  undefined4 local_198;
  undefined4 local_194;
  longlong local_190;
  undefined1 local_176;
  undefined2 local_155;
  undefined1 local_e8 [8];
  longlong *local_e0;
  undefined1 local_d0 [8];
  longlong *local_c8;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_70 [16];
  undefined4 local_60 [2];
  longlong local_58;
  longlong *local_48;
  char local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_2a8;
  if ((*(longlong *)(param_1 + 0xc0) != 0) && (*(longlong *)(param_1 + 0x68) != 0)) {
    *(undefined4 *)(param_1 + 0x278) = 0x41700000;
    FWeakObjectPtr::operator=(&local_288,0);
    local_280 = 0;
    pwVar8 = _guard_xfg_dispatch_icall_nop(L"&UGFxGraphicsOptions::OnConfirmNewSettings",L"::");
    pwVar7 = (wchar_t *)0x0;
    while (pwVar6 = pwVar8, pwVar6 != (wchar_t *)0x0) {
      pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar6 + 1,L"::");
      pwVar7 = pwVar6;
    }
    FName::FName(&local_240,pwVar7 + 2,1);
    FWeakObjectPtr::operator=(&local_288,param_1);
    local_280 = local_240;
    local_248 = 0;
    if ((local_240 != 0) && (lVar9 = FWeakObjectPtr::Get(&local_288), lVar9 != 0)) {
      UObject::FindFunction(lVar9,local_280);
    }
    FUN_140b99f70(local_1d8);
    fVar3 = *(float *)(param_1 + 0x278);
    uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_d0,
                        L"Would you like to apply your changes?\n\nThese changes will be reverted in {0}"
                        ,L"GraphicsOptions",L"ConfrimSettingsBody");
    puVar11 = (undefined8 *)FTextFormat::FTextFormat(local_70,uVar10);
    local_58 = (longlong)(int)fVar3;
    local_238 = local_60;
    puStack_230 = &local_30;
    local_228 = *puVar11;
    local_220 = puVar11[1];
    local_60[0] = 0;
    local_38 = '\0';
    if (local_220 != 0) {
      LOCK();
      *(int *)(local_220 + 8) = *(int *)(local_220 + 8) + 1;
      UNLOCK();
    }
    local_218 = local_238;
    puStack_210 = puStack_230;
    uVar10 = TArray<FFormatArgumentValue,FDefaultAllocator>::
             TArray<FFormatArgumentValue,FDefaultAllocator>(local_208,&local_218);
    uVar10 = FText::Format(local_e8,&local_228,uVar10);
    FText::FText(local_1f8,uVar10);
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_e0 + 1;
      lVar9 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_e0)(local_e0);
        LOCK();
        piVar1 = (int *)((longlong)local_e0 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_e0 + 8))(local_e0,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_208);
    if ((local_38 != '\0') && (local_38 = '\0', local_48 != (longlong *)0x0)) {
      LOCK();
      plVar5 = local_48 + 1;
      lVar9 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar1 = (int *)((longlong)local_48 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_48 + 8))(local_48,1);
        }
      }
    }
    plVar5 = (longlong *)puVar11[1];
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar5 + 1;
      lVar9 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
    FText::operator=(local_1c0,local_1f8);
    if (local_1f0 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_1f0 + 1;
      lVar9 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_1f0)(local_1f0);
        LOCK();
        piVar1 = (int *)((longlong)local_1f0 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_1f0 + 8))(local_1f0,1);
        }
      }
    }
    if (local_c8 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_c8 + 1;
      lVar9 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_c8)(local_c8);
        LOCK();
        piVar1 = (int *)((longlong)local_c8 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_c8 + 8))(local_c8,1);
        }
      }
    }
    uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_b8,L"Apply Changes?",L"GraphicsOptions",L"ResolutionHeader");
    FText::operator=(local_1d8,uVar10);
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_b0 + 1;
      lVar9 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
    local_198 = local_288;
    local_194 = local_284;
    local_190 = local_280;
    local_155 = 1;
    local_176 = 0;
    uVar10 = FUN_1404b03b0();
    FText::FText(local_278,uVar10);
    local_260 = 0;
    local_258 = 0;
    local_250 = 1;
    uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_a0,&DAT_1446d8aa8,L"GraphicsOptions",L"DialogChoice_Yes");
    FText::operator=(local_278,uVar10);
    if (local_98 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_98 + 1;
      lVar9 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_98)(local_98);
        LOCK();
        piVar1 = (int *)((longlong)local_98 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_98 + 8))(local_98,1);
        }
      }
    }
    puVar11 = (undefined8 *)FName::FName(&local_248,&DAT_1446d0b44,1);
    iVar4 = local_1a0;
    lVar9 = (longlong)local_1a0;
    local_260 = *puVar11;
    local_258 = DAT_146b3e2a0;
    local_1a0 = local_1a0 + 1;
    if (local_19c < local_1a0) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_1a8,iVar4);
    }
    lVar9 = lVar9 * 0x30 + local_1a8;
    FText::FText(lVar9,local_278);
    *(undefined8 *)(lVar9 + 0x18) = local_260;
    *(undefined8 *)(lVar9 + 0x20) = local_258;
    *(undefined1 *)(lVar9 + 0x28) = (undefined1)local_250;
    *(undefined1 *)(lVar9 + 0x29) = local_250._1_1_;
    uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_88,&DAT_1446d6c14,L"GraphicsOptions",L"DialogChoice_No");
    FText::operator=(local_278,uVar10);
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_80 + 1;
      lVar9 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
    puVar11 = (undefined8 *)FName::FName(&local_238,&DAT_1446d0b9c,1);
    iVar4 = local_1a0;
    lVar9 = (longlong)local_1a0;
    local_260 = *puVar11;
    local_258 = DAT_146b3e2b8;
    local_1a0 = local_1a0 + 1;
    local_250 = local_250 & 0xff00;
    if (local_19c < local_1a0) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_1a8,iVar4);
    }
    lVar9 = lVar9 * 0x30 + local_1a8;
    FText::FText(lVar9,local_278);
    *(undefined8 *)(lVar9 + 0x18) = local_260;
    *(undefined8 *)(lVar9 + 0x20) = local_258;
    *(undefined1 *)(lVar9 + 0x28) = (undefined1)local_250;
    *(undefined1 *)(lVar9 + 0x29) = local_250._1_1_;
    uVar10 = FUN_1410f3080(*(undefined8 *)(param_1 + 0x68),local_1d8);
    *(undefined8 *)(param_1 + 0x270) = uVar10;
    if (local_270 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_270 + 1;
      lVar9 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_270)(local_270);
        LOCK();
        piVar1 = (int *)((longlong)local_270 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_270 + 8))(local_270,1);
        }
      }
    }
    FUN_140b9d1a0(local_1d8);
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1411bc780 FUN_1411bc780 body=66 status=ok
// SIG undefined FUN_1411bc780(void)

void FUN_1411bc780(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x778);
  if ((((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1b0) != 0)) && (*(longlong *)(lVar1 + 0x1b8) != 0))
     && ((*(longlong *)(lVar1 + 0x1e8) != 0 && (*(longlong *)(lVar1 + 0x1f0) != 0)))) {
    FUN_1411911c0(param_1,param_2 == *(longlong *)(lVar1 + 0x1e8));
    return;
  }
  return;
}



// FUNCTION 1411bc7d0 FUN_1411bc7d0 body=242 status=ok
// SIG undefined FUN_1411bc7d0(void)

void FUN_1411bc7d0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined4 local_res10;
  undefined4 local_res14;
  undefined1 *local_a8 [2];
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined4 local_68;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  FWeakObjectPtr::operator=(&local_res10,param_1);
  FWeakObjectPtr::operator=(&local_res8,param_1);
  local_78 = 0;
  local_68 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_98);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444f8920;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_res8;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_resc;
  }
  local_28 = 0;
  local_a8[0] = &LAB_141190db0;
  local_18 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444f8920;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_res10;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_res14;
  }
  local_58[0] = &LAB_141190e80;
  FUN_14208c800(param_1,local_58,local_a8);
  return;
}



// FUNCTION 1411bc8d0 FUN_1411bc8d0 body=102 status=ok
// SIG undefined FUN_1411bc8d0(void)

wchar_t * FUN_1411bc8d0(undefined8 param_1,undefined4 param_2)

{
  wchar_t *pwVar1;
  
  switch(param_2) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 0x10:
    return L"Layout1";
  case 7:
  case 8:
  case 9:
    return L"Layout0";
  case 10:
    pwVar1 = (wchar_t *)FUN_14119d6a0(param_1,PTR_u_Layout3_1462a1518);
    return pwVar1;
  default:
    return L"";
  case 0xc:
    pwVar1 = (wchar_t *)FUN_14119d6a0(param_1,PTR_u_Layout4_1462a1520);
    return pwVar1;
  case 0xe:
    pwVar1 = (wchar_t *)FUN_14119d6a0(param_1,PTR_u_Layout6_1462a1530);
    return pwVar1;
  case 0xf:
    pwVar1 = (wchar_t *)FUN_14119d6a0(param_1,PTR_u_Layout5_1462a1528);
    return pwVar1;
  }
}



// FUNCTION 1411bc980 FUN_1411bc980 body=640 status=ok
// SIG undefined FUN_1411bc980(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411bc980(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  float fVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  longlong lStack_e0;
  undefined4 *local_d8;
  ulonglong *puStack_d0;
  undefined1 local_c8 [16];
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_70 [16];
  undefined4 local_60 [2];
  longlong local_58;
  longlong *local_48;
  char local_38;
  ulonglong local_30 [3];
  
  local_30[0] = DAT_1468387a8 ^ (ulonglong)auStack_108;
  if (*(longlong *)(param_1 + 0x270) != 0) {
    fVar3 = *(float *)(param_1 + 0x278);
    if (1e-08 <= fVar3) {
      uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_88,
                         L"Would you like to apply your changes?\n\nThese changes will be reverted in {0}"
                         ,L"GraphicsOptions",L"ConfrimSettingsBody");
      puVar8 = (undefined8 *)FTextFormat::FTextFormat(local_70,uVar7);
      local_60[0] = 0;
      local_d8 = local_60;
      local_38 = '\0';
      puStack_d0 = local_30;
      lStack_e0 = puVar8[1];
      local_58 = (longlong)(int)fVar3;
      local_e8 = *puVar8;
      if (lStack_e0 != 0) {
        LOCK();
        *(int *)(lStack_e0 + 8) = *(int *)(lStack_e0 + 8) + 1;
        UNLOCK();
      }
      uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
              TArray<FFormatArgumentValue,FDefaultAllocator>(local_c8,&local_d8);
      uVar7 = FText::Format(local_a0,&local_e8,uVar7);
      FText::FText(local_b8,uVar7);
      if (local_98 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_98 + 1;
        lVar6 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_98)(local_98);
          LOCK();
          piVar1 = (int *)((longlong)local_98 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_98 + 8))(local_98,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_c8);
      if ((local_38 != '\0') && (local_38 = '\0', local_48 != (longlong *)0x0)) {
        LOCK();
        plVar5 = local_48 + 1;
        lVar6 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar1 = (int *)((longlong)local_48 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_48 + 8))(local_48,1);
          }
        }
      }
      plVar5 = (longlong *)puVar8[1];
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
      FUN_1410eb920(*(undefined8 *)(param_1 + 0x270),local_b8,0);
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
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_80 + 1;
        lVar6 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
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
      FUN_1411b62b0();
      *(undefined1 *)(param_1 + 0x27c) = 1;
    }
  }
  return;
}



// FUNCTION 1411bcc00 FUN_1411bcc00 body=1792 status=ok
// SIG undefined FUN_1411bcc00(void)

void FUN_1411bcc00(longlong param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  undefined2 *puVar6;
  ulonglong uVar7;
  longlong *plVar8;
  int *piVar9;
  uint uVar10;
  undefined2 *puVar11;
  int *piVar12;
  undefined7 uVar14;
  longlong lVar15;
  ulonglong uVar16;
  int *piVar17;
  int local_res8 [2];
  undefined8 local_res10;
  int local_res18;
  int iStackX_1c;
  longlong local_128;
  undefined8 local_120;
  longlong local_118 [12];
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_58 [8];
  longlong *local_50;
  ulonglong uVar13;
  
  if (*(longlong *)(param_1 + 0x1a0) == 0) {
    return;
  }
  piVar17 = (int *)(param_1 + 0x110);
  uVar16 = 0;
  local_128 = 0;
  local_120 = 0;
  if (0 < *piVar17) {
    local_118[0] = 0;
    local_118[1] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_118,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_118[0],5,&DAT_1446d2fa4,5,0x3f);
    uVar2 = FText::FromString(local_b8,local_118);
    uVar7 = local_120;
    lVar15 = (longlong)(int)local_120;
    iVar5 = (int)local_120 + 1;
    local_120 = CONCAT44(local_120._4_4_,iVar5);
    if (local_120._4_4_ < iVar5) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (&local_128,uVar7 & 0xffffffff);
    }
    FText::FText(local_128 + lVar15 * 0x18,uVar2);
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_b0 + 1;
      lVar15 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar15 == 1) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar9 = (int *)((longlong)local_b0 + 0xc);
        iVar5 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_b0 + 8))(local_b0,1);
        }
      }
    }
    if (local_118[0] != 0) {
      FMemory::Free();
    }
  }
  if (0 < *(int *)(param_1 + 0x120)) {
    local_118[2] = 0;
    local_118[3] = 6;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_118 + 2,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_118[2],6,"16:10",6,0x3f);
    uVar2 = FText::FromString(local_a0,local_118 + 2);
    uVar7 = local_120;
    lVar15 = (longlong)(int)local_120;
    iVar5 = (int)local_120 + 1;
    local_120 = CONCAT44(local_120._4_4_,iVar5);
    if (local_120._4_4_ < iVar5) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (&local_128,uVar7 & 0xffffffff);
    }
    FText::FText(local_128 + lVar15 * 0x18,uVar2);
    if (local_98 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_98 + 1;
      lVar15 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar15 == 1) {
        (**(code **)*local_98)(local_98);
        LOCK();
        piVar9 = (int *)((longlong)local_98 + 0xc);
        iVar5 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_98 + 8))(local_98,1);
        }
      }
    }
    if (local_118[2] != 0) {
      FMemory::Free();
    }
  }
  if (0 < *(int *)(param_1 + 0x130)) {
    local_118[4] = 0;
    local_118[5] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_118 + 4,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_118[4],5,&DAT_1446d5604,5,0x3f);
    uVar2 = FText::FromString(local_88,local_118 + 4);
    uVar7 = local_120;
    lVar15 = (longlong)(int)local_120;
    iVar5 = (int)local_120 + 1;
    local_120 = CONCAT44(local_120._4_4_,iVar5);
    if (local_120._4_4_ < iVar5) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (&local_128,uVar7 & 0xffffffff);
    }
    FText::FText(local_128 + lVar15 * 0x18,uVar2);
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_80 + 1;
      lVar15 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar15 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar9 = (int *)((longlong)local_80 + 0xc);
        iVar5 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    if (local_118[4] != 0) {
      FMemory::Free();
    }
  }
  if (0 < *(int *)(param_1 + 0x140)) {
    local_118[6] = 0;
    local_118[7] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_118 + 6,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_118[6],5,&DAT_1446d5ae4,5,0x3f);
    uVar2 = FText::FromString(local_70,local_118 + 6);
    uVar7 = local_120;
    lVar15 = (longlong)(int)local_120;
    iVar5 = (int)local_120 + 1;
    local_120 = CONCAT44(local_120._4_4_,iVar5);
    if (local_120._4_4_ < iVar5) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (&local_128,uVar7 & 0xffffffff);
    }
    FText::FText(local_128 + lVar15 * 0x18,uVar2);
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_68 + 1;
      lVar15 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar15 == 1) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar9 = (int *)((longlong)local_68 + 0xc);
        iVar5 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_68 + 8))(local_68,1);
        }
      }
    }
    if (local_118[6] != 0) {
      FMemory::Free();
    }
  }
  if (0 < *(int *)(param_1 + 0x150)) {
    uVar2 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_58,L"Unsupported",L"OakGameUserSettings",L"AspectRatio_Unsupported");
    uVar7 = local_120;
    lVar15 = (longlong)(int)local_120;
    iVar5 = (int)local_120 + 1;
    local_120 = CONCAT44(local_120._4_4_,iVar5);
    if (local_120._4_4_ < iVar5) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (&local_128,uVar7 & 0xffffffff);
    }
    FText::FText(local_128 + lVar15 * 0x18,uVar2);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_50 + 1;
      lVar15 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar15 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar9 = (int *)((longlong)local_50 + 0xc);
        iVar5 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
  }
  FUN_142ed3be0(*(undefined8 *)(param_1 + 0x1a0),&local_128);
  FUN_14119d950(param_1,&local_res18);
  FUN_142481920(*(undefined8 *)(param_1 + 0xc0),&local_res10);
  local_118[8] = 0;
  plVar8 = local_118 + 8;
  if (*(char *)(param_1 + 0x298) != '\0') {
    plVar8 = (longlong *)(param_1 + 0x288);
  }
  local_118[9] = 0;
  puVar3 = (undefined8 *)
           UMWAITargetSelectionComponent::GetTargetUnitName
                     (*(undefined8 *)(param_1 + 0xc0),local_118 + 10);
  puVar6 = &DAT_143f3eda8;
  if ((int)plVar8[1] == 0) {
    puVar11 = &DAT_143f3eda8;
  }
  else {
    puVar11 = (undefined2 *)*plVar8;
  }
  if (*(int *)(puVar3 + 1) != 0) {
    puVar6 = (undefined2 *)*puVar3;
  }
  iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar6,puVar11);
  uVar2 = local_res10;
  if (iVar5 == 0) {
LAB_1411bd11b:
    bVar1 = false;
  }
  else {
    iVar5 = UGameUserSettings::GetFullscreenMode(*(undefined8 *)(param_1 + 0xc0));
    uVar2 = local_res10;
    if (iVar5 == 2) {
      iVar5 = FUN_14119d560(param_1,local_res10);
      piVar12 = *(int **)(param_1 + 0x108 + (longlong)iVar5 * 0x10);
      piVar9 = piVar12 + (longlong)*(int *)(param_1 + 0x110 + (longlong)iVar5 * 0x10) * 2;
      if (piVar12 != piVar9) {
        do {
          if ((*piVar12 == (int)uVar2) && (piVar12[1] == local_res10._4_4_)) {
            if ((local_res18 < (int)uVar2) || (iStackX_1c < local_res10._4_4_)) goto LAB_1411bd112;
            goto LAB_1411bd11b;
          }
          piVar12 = piVar12 + 2;
        } while (piVar12 != piVar9);
        bVar1 = true;
        goto LAB_1411bd11e;
      }
    }
LAB_1411bd112:
    bVar1 = true;
  }
LAB_1411bd11e:
  if (local_118[10] != 0) {
    FMemory::Free();
    uVar2 = local_res10;
  }
  if (bVar1) {
    uVar2 = CONCAT44(iStackX_1c,local_res18);
  }
  local_res10._4_4_ = (int)((ulonglong)uVar2 >> 0x20);
  uVar7 = uVar16;
  do {
    iVar5 = (int)uVar7;
    uVar13 = uVar16;
    if (0 < *(int *)(param_1 + ((longlong)iVar5 + 0x11) * 0x10)) {
      lVar15 = (longlong)iVar5;
      uVar7 = uVar16;
      do {
        lVar4 = *(longlong *)(param_1 + 0x108 + lVar15 * 0x10);
        if ((*(int *)(lVar4 + uVar7) == local_res18) && (*(int *)(lVar4 + 4 + uVar7) == iStackX_1c))
        {
          *(int *)(param_1 + 0x2c8) = iVar5;
          lVar4 = *(longlong *)(param_1 + 0x108 + lVar15 * 0x10);
        }
        if (((*(int *)(lVar4 + uVar7) == (int)uVar2) &&
            (*(int *)(lVar4 + 4 + uVar7) == local_res10._4_4_)) &&
           (local_res8 != (int *)(param_1 + 700))) {
          *(int *)(param_1 + 700) = iVar5;
          *(undefined1 *)(param_1 + 0x2c0) = 1;
        }
        uVar10 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar10;
        uVar7 = uVar7 + 8;
      } while ((int)uVar10 < *(int *)(param_1 + (lVar15 + 0x11) * 0x10));
    }
    uVar7 = (ulonglong)(iVar5 + 1U);
  } while ((int)(iVar5 + 1U) < 5);
  uVar14 = (undefined7)(uVar13 >> 8);
  if (*(char *)(param_1 + 0x2b4) == '\0') {
    uVar2 = CONCAT71(uVar14,1);
  }
  else {
    uVar2 = CONCAT71(uVar14,*(int *)(param_1 + 0x2b0) != 1);
  }
  plVar8 = (longlong *)(*(longlong *)(param_1 + 0x1a0) + 0x170);
  (**(code **)(*plVar8 + 0x38))(plVar8,uVar2);
  if ((*(char *)(param_1 + 0x2b4) == '\0') || (*(int *)(param_1 + 0x2b0) != 1)) {
    uVar7 = (ulonglong)*(int *)(param_1 + 700);
    piVar9 = piVar17;
    uVar16 = uVar7;
    if (0 < *(int *)(param_1 + 700)) {
      do {
        uVar10 = (uint)uVar7 - 1;
        if (*piVar9 != 0) {
          uVar10 = (uint)uVar7;
        }
        uVar7 = (ulonglong)uVar10;
        uVar16 = uVar16 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar16 != 0);
    }
  }
  else {
    uVar7 = (ulonglong)*(int *)(param_1 + 0x2c8);
    piVar9 = piVar17;
    uVar16 = uVar7;
    if (0 < *(int *)(param_1 + 0x2c8)) {
      do {
        uVar10 = (uint)uVar7 - 1;
        if (*piVar9 != 0) {
          uVar10 = (uint)uVar7;
        }
        uVar7 = (ulonglong)uVar10;
        uVar16 = uVar16 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar16 != 0);
    }
  }
  FUN_142ed44c0(*(undefined8 *)(param_1 + 0x1a0),uVar7);
  uVar7 = (ulonglong)*(int *)(param_1 + 0x2c8);
  uVar16 = uVar7;
  if (0 < *(int *)(param_1 + 0x2c8)) {
    do {
      iVar5 = *piVar17;
      piVar17 = piVar17 + 4;
      uVar10 = (uint)uVar16 - 1;
      if (iVar5 != 0) {
        uVar10 = (uint)uVar16;
      }
      uVar16 = (ulonglong)uVar10;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  FUN_142ed2aa0(*(undefined8 *)(param_1 + 0x1a0),uVar16);
  TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>::
  ~TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>(&local_128);
  return;
}



// FUNCTION 1411bd300 FUN_1411bd300 body=1230 status=ok
// SIG undefined FUN_1411bd300(void)

void FUN_1411bd300(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 uVar3;
  
  if ((*(longlong *)(param_1 + 0x200) != 0) && (*(longlong *)(param_1 + 0x200) != param_2)) {
    uVar1 = ACoreContact::DoAllVisibilityExpressionsNeedToBeTrue(*(undefined8 *)(param_1 + 0xc0));
    FUN_142ed50a0(*(undefined8 *)(param_1 + 0x200),uVar1);
  }
  if ((*(longlong *)(param_1 + 0x1e0) != 0) && (*(longlong *)(param_1 + 0x1e0) != param_2)) {
    uVar3 = FPluginManager::GetLastCompletedLoadingPhase(*(undefined8 *)(param_1 + 0xc0));
    FUN_142ed50a0(*(undefined8 *)(param_1 + 0x1e0),uVar3);
    uVar3 = FUN_140cb6400(*(undefined8 *)(param_1 + 0xc0));
    FUN_142ed2be0(*(undefined8 *)(param_1 + 0x1e0),uVar3);
  }
  if ((*(longlong *)(param_1 + 0x1e8) != 0) && (*(longlong *)(param_1 + 0x1e8) != param_2)) {
    uVar1 = ACoreContact::IsVisibleIfConditionMet(*(undefined8 *)(param_1 + 0xc0));
    FUN_142ed50a0(*(undefined8 *)(param_1 + 0x1e8),uVar1);
    cVar2 = FUN_140cb6430(*(undefined8 *)(param_1 + 0xc0));
    FUN_142ed2be0(*(undefined8 *)(param_1 + 0x1e8),cVar2 != '\0');
  }
  if ((*(longlong *)(param_1 + 0x1f0) != 0) && (*(longlong *)(param_1 + 0x1f0) != param_2)) {
    uVar1 = FSlateApplication::IsActive(*(undefined8 *)(param_1 + 0xc0));
    FUN_142ed50a0(*(undefined8 *)(param_1 + 0x1f0),uVar1);
    cVar2 = FUN_140cb6440(*(undefined8 *)(param_1 + 0xc0));
    FUN_142ed2be0(*(undefined8 *)(param_1 + 0x1f0),cVar2 != '\0');
  }
  if ((*(longlong *)(param_1 + 0x1f8) != 0) && (*(longlong *)(param_1 + 0x1f8) != param_2)) {
    uVar1 = UAnimSequence::HasRootMotion(*(undefined8 *)(param_1 + 0xc0));
    FUN_142ed50a0(*(undefined8 *)(param_1 + 0x1f8),uVar1);
    cVar2 = FUN_140cb6440(*(undefined8 *)(param_1 + 0xc0));
    FUN_142ed2be0(*(undefined8 *)(param_1 + 0x1f8),cVar2 != '\0');
  }
  if ((*(longlong *)(param_1 + 0x208) != 0) && (*(longlong *)(param_1 + 0x208) != param_2)) {
    uVar1 = UHMWeakSpotLogicComponent::IsWeakSpotActive(*(undefined8 *)(param_1 + 0xc0));
    FUN_142ed50a0(*(undefined8 *)(param_1 + 0x208),uVar1);
    uVar1 = FUN_140cb64e0(*(undefined8 *)(param_1 + 0xc0));
    FUN_142ed2be0(*(undefined8 *)(param_1 + 0x208),uVar1);
  }
  if ((*(longlong *)(param_1 + 0x210) != 0) && (*(longlong *)(param_1 + 0x210) != param_2)) {
    uVar1 = UHMWeakSpotLogicComponent::IsWeakSpotDestroyed(*(undefined8 *)(param_1 + 0xc0));
    FUN_142ed50a0(*(undefined8 *)(param_1 + 0x210),uVar1);
    uVar1 = FUN_140cb64e0(*(undefined8 *)(param_1 + 0xc0));
    FUN_142ed2be0(*(undefined8 *)(param_1 + 0x210),uVar1);
  }
  if ((*(longlong *)(param_1 + 0x218) != 0) && (*(longlong *)(param_1 + 0x218) != param_2)) {
    uVar1 = UMWGameUserSettings::IsFrameRateSmoothingEnabled(*(undefined8 *)(param_1 + 0xc0));
    FUN_142ed50a0(*(undefined8 *)(param_1 + 0x218),uVar1);
    uVar1 = FUN_140cb63b0(*(undefined8 *)(param_1 + 0xc0));
    FUN_142ed2be0(*(undefined8 *)(param_1 + 0x218),uVar1);
  }
  if ((*(longlong *)(param_1 + 0x220) != 0) && (*(longlong *)(param_1 + 0x220) != param_2)) {
    uVar1 = SComboBox<TSharedPtr<FString,1>_>::IsInteractable(*(undefined8 *)(param_1 + 0xc0));
    FUN_142ed50a0(*(undefined8 *)(param_1 + 0x220),uVar1);
    uVar1 = FUN_140cb6580(*(undefined8 *)(param_1 + 0xc0));
    FUN_142ed2be0(*(undefined8 *)(param_1 + 0x220),uVar1);
  }
  if ((*(longlong *)(param_1 + 0x228) != 0) && (*(longlong *)(param_1 + 0x228) != param_2)) {
    uVar1 = FUN_140cb6840(*(undefined8 *)(param_1 + 0xc0));
    FUN_142ed50a0(*(undefined8 *)(param_1 + 0x228),uVar1);
    uVar1 = FUN_140cb6450(*(undefined8 *)(param_1 + 0xc0));
    FUN_142ed2be0(*(undefined8 *)(param_1 + 0x228),uVar1);
  }
  if ((*(longlong *)(param_1 + 0x230) != 0) && (*(longlong *)(param_1 + 0x230) != param_2)) {
    uVar1 = uhx::glues::UXItemComponent_Glue_obj::get_bDropOnUnequip
                      (*(undefined8 *)(param_1 + 0xc0));
    FUN_142ed50a0(*(undefined8 *)(param_1 + 0x230),uVar1);
    uVar1 = FUN_140cb6450(*(undefined8 *)(param_1 + 0xc0));
    FUN_142ed2be0(*(undefined8 *)(param_1 + 0x230),uVar1);
  }
  if ((*(longlong *)(param_1 + 0x238) != 0) && (*(longlong *)(param_1 + 0x238) != param_2)) {
    uVar1 = FUN_140cb99e0(*(undefined8 *)(param_1 + 0xc0));
    FUN_142ed50a0(*(undefined8 *)(param_1 + 0x238),uVar1);
    uVar1 = FUN_140cb6580(*(undefined8 *)(param_1 + 0xc0));
    FUN_142ed2be0(*(undefined8 *)(param_1 + 0x238),uVar1);
  }
  if ((*(longlong *)(param_1 + 0x240) != 0) && (*(longlong *)(param_1 + 0x240) != param_2)) {
    uVar1 = FLiveLinkSubject::IsRebroadcasted(*(undefined8 *)(param_1 + 0xc0));
    FUN_142ed50a0(*(undefined8 *)(param_1 + 0x240),uVar1);
    uVar1 = FUN_140cb6450(*(undefined8 *)(param_1 + 0xc0));
    FUN_142ed2be0(*(undefined8 *)(param_1 + 0x240),uVar1);
  }
  if ((*(longlong *)(param_1 + 0x250) != 0) && (*(longlong *)(param_1 + 0x250) != param_2)) {
    uVar1 = USaveGameSubsystem::AreAllAvailableSaveGamesPreloaded(*(undefined8 *)(param_1 + 0xc0));
    FUN_142ed50a0(*(undefined8 *)(param_1 + 0x250),uVar1);
    uVar1 = FUN_140cb6450(*(undefined8 *)(param_1 + 0xc0));
    FUN_142ed2be0(*(undefined8 *)(param_1 + 0x250),uVar1);
  }
  if ((*(longlong *)(param_1 + 600) != 0) && (*(longlong *)(param_1 + 600) != param_2)) {
    uVar1 = FUN_140cb6080(*(undefined8 *)(param_1 + 0xc0));
    FUN_142ed50a0(*(undefined8 *)(param_1 + 600),uVar1);
    uVar1 = FUN_140cb63b0(*(undefined8 *)(param_1 + 0xc0));
    FUN_142ed2be0(*(undefined8 *)(param_1 + 600),uVar1);
  }
  if ((*(longlong *)(param_1 + 0x260) != 0) && (*(longlong *)(param_1 + 0x260) != param_2)) {
    uVar1 = FLiveLinkSubject::HasStaticDataBeenRebroadcasted(*(undefined8 *)(param_1 + 0xc0));
    FUN_142ed50a0(*(undefined8 *)(param_1 + 0x260),uVar1);
    uVar1 = FUN_140cb6530(*(undefined8 *)(param_1 + 0xc0));
    FUN_142ed2be0(*(undefined8 *)(param_1 + 0x260),uVar1);
  }
  if ((*(longlong *)(param_1 + 0x268) != 0) && (*(longlong *)(param_1 + 0x268) != param_2)) {
    uVar1 = USaveGameSubsystem::IsPerformingAsyncOperation(*(undefined8 *)(param_1 + 0xc0));
    FUN_142ed50a0(*(undefined8 *)(param_1 + 0x268),uVar1);
    uVar1 = FUN_140cb6530(*(undefined8 *)(param_1 + 0xc0));
    FUN_142ed2be0(*(undefined8 *)(param_1 + 0x268),uVar1);
  }
  return;
}



// FUNCTION 1411bd7d0 FUN_1411bd7d0 body=2629 status=ok
// SIG undefined FUN_1411bd7d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001411bd92a) */
/* WARNING: Removing unreachable block (ram,0x0001411bd93a) */
/* WARNING: Removing unreachable block (ram,0x0001411bd957) */

void FUN_1411bd7d0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  uint uVar11;
  longlong lVar12;
  short *psVar13;
  undefined1 auStack_328 [32];
  short **local_308;
  longlong local_2f8;
  longlong *plStack_2f0;
  longlong local_2e8;
  ulonglong local_2e0;
  short *local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  longlong local_2b8;
  longlong *plStack_2b0;
  undefined4 *local_2a8;
  longlong *plStack_2a0;
  undefined4 *local_298;
  undefined4 *puStack_290;
  undefined1 local_288 [8];
  longlong *local_280;
  longlong local_268;
  longlong *plStack_260;
  undefined8 local_258;
  longlong local_250;
  undefined1 local_248 [8];
  longlong *local_240;
  undefined1 local_238 [16];
  undefined4 *local_228;
  longlong *plStack_220;
  undefined1 local_218 [16];
  undefined1 local_208 [8];
  longlong *local_200;
  undefined1 local_1f0 [8];
  longlong *local_1e8;
  undefined1 local_1d8 [8];
  longlong *local_1d0;
  undefined1 local_1c0 [8];
  longlong *local_1b8;
  undefined1 local_1a8 [8];
  longlong *local_1a0;
  undefined1 local_190 [8];
  longlong *local_188;
  undefined1 local_178 [8];
  longlong *local_170;
  undefined1 local_160 [8];
  longlong *local_158;
  undefined1 local_148 [8];
  longlong *local_140;
  undefined1 local_130 [16];
  undefined1 local_120 [16];
  undefined1 local_110 [40];
  undefined1 local_e8 [24];
  undefined1 local_d0 [24];
  undefined4 local_b8 [4];
  undefined1 local_a8 [8];
  longlong *local_a0;
  char local_90;
  undefined4 local_88 [4];
  undefined1 local_78 [8];
  longlong *local_70;
  char local_60;
  longlong local_58;
  longlong *plStack_50;
  longlong local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_328;
  iVar3 = *(int *)(param_1 + 0x680);
  if (iVar3 < 0) {
    return;
  }
  if (iVar3 < 2) {
    FText::FText(local_288);
    cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x59c);
    if ((cVar5 == '\0') ||
       (lVar12 = FWeakObjectPtr::Get(param_1 + 0x59c), *(char *)(lVar12 + 0xb8) != '\x01')) {
      uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_148,L"Press any key",L"GFxOakTitleScreen",L"PressToContinuePrompt_PC"
                        );
      FText::operator=(local_288,uVar9);
      plVar7 = local_140;
    }
    else {
      uVar9 = FWeakObjectPtr::Get(param_1 + 0x58c);
      local_308 = (short **)0x0;
      FUN_142ef39a0(local_1d8,DAT_146b3e2a0,uVar9,0);
      lVar12 = FText::FText(local_d0,local_1d8);
      uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_160,L"Press {0} to continue",L"GFxOakTitleScreen",
                         L"PressToContinuePrompt");
      puVar10 = (undefined8 *)FTextFormat::FTextFormat(local_120,uVar9);
      local_88[0] = 4;
      FText::FText(local_78,lVar12);
      local_258 = *puVar10;
      local_2a8 = local_88;
      plStack_2a0 = &local_58;
      local_250 = puVar10[1];
      local_60 = '\x01';
      if (local_250 != 0) {
        LOCK();
        *(int *)(local_250 + 8) = *(int *)(local_250 + 8) + 1;
        UNLOCK();
      }
      local_228 = local_2a8;
      plStack_220 = plStack_2a0;
      uVar9 = TArray<FFormatArgumentValue,FDefaultAllocator>::
              TArray<FFormatArgumentValue,FDefaultAllocator>(local_218,&local_228);
      uVar9 = FText::Format(local_178,&local_258,uVar9);
      FText::FText(local_1f0,uVar9);
      if (local_170 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_170 + 1;
        lVar6 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_170)(local_170);
          LOCK();
          piVar1 = (int *)((longlong)local_170 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_170 + 8))(local_170,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_218);
      if ((local_60 != '\0') && (local_60 = '\0', local_70 != (longlong *)0x0)) {
        LOCK();
        plVar7 = local_70 + 1;
        lVar6 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar1 = (int *)((longlong)local_70 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_70 + 8))(local_70,1);
          }
        }
      }
      plVar7 = (longlong *)puVar10[1];
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar7 + 1;
        lVar6 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar7)(plVar7);
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
      plVar7 = *(longlong **)(lVar12 + 8);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar7 + 1;
        lVar12 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*plVar7)(plVar7);
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
      FText::operator=(local_288,local_1f0);
      if (local_1e8 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_1e8 + 1;
        lVar12 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*local_1e8)(local_1e8);
          LOCK();
          piVar1 = (int *)((longlong)local_1e8 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_1e8 + 8))(local_1e8,1);
          }
        }
      }
      plVar7 = local_1d0;
      if (local_158 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_158 + 1;
        lVar12 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*local_158)(local_158);
          LOCK();
          piVar1 = (int *)((longlong)local_158 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar7 = local_1d0;
          if (iVar3 == 1) {
            (**(code **)(*local_158 + 8))(local_158,1);
            plVar7 = local_1d0;
          }
        }
      }
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar7 + 1;
      lVar12 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plVar7)(plVar7);
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
    plVar7 = *(longlong **)(param_1 + 0x6c8);
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x2b0))(plVar7,local_288,1,0);
      cVar5 = FUN_142088620(*(undefined8 *)(param_1 + 0x6c8));
      if (cVar5 == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x6c8) + 0x278))(*(longlong **)(param_1 + 0x6c8),1);
      }
    }
    if (local_280 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar7 = local_280 + 1;
    lVar12 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar12 != 1) {
      return;
    }
    (**(code **)*local_280)(local_280);
    LOCK();
    piVar1 = (int *)((longlong)local_280 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 != 1) {
      return;
    }
    (**(code **)(*local_280 + 8))(local_280,1);
    return;
  }
  if (4 < iVar3) {
    return;
  }
  local_2d8 = (short *)0x0;
  local_2d0 = 0;
  lVar6 = FUN_140f9aee0();
  lVar12 = -1;
  if (lVar6 != 0) {
    local_2f8 = 0;
    plStack_2f0 = (longlong *)0x0;
    if (*(int *)(param_1 + 0x680) == 4) {
      plVar7 = (longlong *)FUN_140bb7a50(lVar6,local_248);
      if (&local_2f8 != plVar7) {
        local_2f8 = *plVar7;
        *plVar7 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_2f0,plVar7 + 1);
      }
      if (local_240 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_240 + 1;
        lVar8 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_240)(local_240);
          LOCK();
          piVar1 = (int *)((longlong)local_240 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_240 + 8))(local_240,1);
          }
        }
      }
    }
    else {
      lVar8 = *(longlong *)(param_1 + 0x6a8);
      if (lVar8 == 0) {
        lVar8 = UGameInstance::GetFirstGamePlayer(lVar6);
        if (lVar8 == 0) goto LAB_1411bdad8;
        lVar8 = FUN_142547b50(lVar8,local_110);
        plVar7 = plStack_2f0;
        local_48 = *(longlong *)(lVar8 + 8);
        plStack_40 = *(longlong **)(lVar8 + 0x10);
        if (plStack_40 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
          UNLOCK();
        }
        local_2b8 = local_2f8;
        plStack_2b0 = plStack_2f0;
        local_2f8 = local_48;
        plVar4 = plStack_40;
        if (plStack_2f0 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_2f0 + 1;
          lVar8 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            puVar10 = (undefined8 *)*plStack_2f0;
            plStack_2f0 = plStack_40;
            (*(code *)*puVar10)(plVar7);
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            plVar4 = plStack_2f0;
            if (iVar3 == 1) {
              (**(code **)(*plStack_2b0 + 8))(plStack_2b0,1);
              plVar4 = plStack_2f0;
            }
          }
        }
        plStack_2f0 = plVar4;
        FUN_1404bf980(local_110);
      }
      else {
        plStack_2f0 = *(longlong **)(param_1 + 0x6b0);
        if (plStack_2f0 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_2f0 + 1) = (int)plStack_2f0[1] + 1;
          UNLOCK();
        }
        local_2c8 = 0;
        uStack_2c0 = 0;
        local_2f8 = lVar8;
        local_58 = lVar8;
        plStack_50 = plStack_2f0;
      }
    }
    plVar7 = plStack_2f0;
    if (local_2f8 != 0) {
      local_268 = local_2f8;
      plStack_260 = plStack_2f0;
      if (plStack_2f0 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_2f0 + 1) = (int)plStack_2f0[1] + 1;
        UNLOCK();
      }
      local_308 = &local_2d8;
      FUN_140d79f00(*(undefined8 *)(lVar6 + 0x478),&local_268,1);
      plVar4 = plStack_260;
      if (plStack_260 != (longlong *)0x0) {
        LOCK();
        plVar7 = plStack_260 + 1;
        lVar6 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        plVar7 = plStack_2f0;
        if ((int)lVar6 == 1) {
          (**(code **)*plStack_260)(plStack_260);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar7 = plStack_2f0;
          if (iVar3 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
            plVar7 = plStack_2f0;
          }
        }
      }
    }
    plVar4 = plStack_2f0;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar7 + 1;
      lVar6 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plStack_2f0)(plStack_2f0);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_2f0 + 8))(plStack_2f0,1);
        }
      }
    }
  }
LAB_1411bdad8:
  if ((int)local_2d0 < 2) {
    uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_190,L"Signing in",L"GFxOakTitleScreen",L"LogInTextPromptNoNickname");
    FUN_1411b6ca0(param_1,uVar9);
    if (local_188 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_188 + 1;
      lVar12 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_188)(local_188);
        LOCK();
        piVar1 = (int *)((longlong)local_188 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_188 + 8))(local_188,1);
        }
      }
    }
  }
  else {
    local_2e8 = 0;
    local_2e0 = 0;
    psVar13 = &DAT_143f3eda8;
    if ((int)local_2d0 != 0) {
      psVar13 = local_2d8;
    }
    if ((psVar13 != (short *)0x0) && (*psVar13 != 0)) {
      do {
        lVar12 = lVar12 + 1;
      } while (psVar13[lVar12] != 0);
      uVar11 = (int)lVar12 + 1;
      local_2e0 = (ulonglong)uVar11;
      if (0 < (int)uVar11) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2e8,0);
      }
      FGenericPlatformString::Memcpy(local_2e8,psVar13,(longlong)(int)uVar11 * 2);
    }
    lVar12 = FText::FromString(local_e8,&local_2e8);
    uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_1a8,L"Signing in {0}",L"GFxOakTitleScreen",L"LogInTextPrompt");
    plVar7 = (longlong *)FTextFormat::FTextFormat(local_130,uVar9);
    local_b8[0] = 4;
    FText::FText(local_a8,lVar12);
    local_2a8 = (undefined4 *)*plVar7;
    local_298 = local_b8;
    puStack_290 = local_88;
    plStack_2a0 = (longlong *)plVar7[1];
    local_90 = '\x01';
    if (plStack_2a0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_2a0 + 1) = (int)plStack_2a0[1] + 1;
      UNLOCK();
    }
    uVar9 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_238,&local_298);
    uVar9 = FText::Format(local_1c0,&local_2a8,uVar9);
    FText::FText(local_208,uVar9);
    if (local_1b8 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_1b8 + 1;
      lVar6 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_1b8)(local_1b8);
        LOCK();
        piVar1 = (int *)((longlong)local_1b8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_1b8 + 8))(local_1b8,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_238);
    if ((local_90 != '\0') && (local_90 = '\0', local_a0 != (longlong *)0x0)) {
      LOCK();
      plVar4 = local_a0 + 1;
      lVar6 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
    plVar7 = (longlong *)plVar7[1];
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar7 + 1;
      lVar6 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar7)(plVar7);
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
    plVar7 = *(longlong **)(lVar12 + 8);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar7 + 1;
      lVar12 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plVar7)(plVar7);
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
    plVar7 = *(longlong **)(param_1 + 0x6c8);
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x2b0))(plVar7,local_208,1,0);
      cVar5 = FUN_142088620(*(undefined8 *)(param_1 + 0x6c8));
      if (cVar5 == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x6c8) + 0x278))(*(longlong **)(param_1 + 0x6c8),1);
      }
    }
    if (local_200 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_200 + 1;
      lVar12 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_200)(local_200);
        LOCK();
        piVar1 = (int *)((longlong)local_200 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_200 + 8))(local_200,1);
        }
      }
    }
    if (local_1a0 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_1a0 + 1;
      lVar12 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_1a0)(local_1a0);
        LOCK();
        piVar1 = (int *)((longlong)local_1a0 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_1a0 + 8))(local_1a0,1);
        }
      }
    }
    if (local_2e8 != 0) {
      FMemory::Free();
    }
  }
  if (local_2d8 != (short *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1411be220 FUN_1411be220 body=645 status=ok
// SIG undefined FUN_1411be220(void)

void FUN_1411be220(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  longlong local_68 [2];
  undefined1 local_58 [8];
  longlong *local_50;
  undefined8 local_40;
  undefined8 local_38;
  longlong *local_30;
  
  lVar11 = *(longlong *)(param_2 + 0x18);
  lVar13 = (longlong)*(int *)(param_2 + 0x20) * 0x30 + lVar11;
  if (lVar11 == lVar13) {
    return;
  }
  puVar10 = (undefined8 *)(lVar11 + 0x20);
LAB_1411be270:
  FText::FText(local_58,lVar11);
  local_38 = *puVar10;
  local_40 = puVar10[-1];
  local_30 = (longlong *)puVar10[1];
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
  }
  iVar12 = (int)((ulonglong)local_40 >> 0x20) + (int)local_40;
  if (*(int *)(param_1 + 0x198) != *(int *)(param_1 + 0x1c4)) {
    lVar5 = *(longlong *)(param_1 + 0x1d0);
    if (*(longlong *)(param_1 + 0x1d0) == 0) {
      lVar5 = param_1 + 0x1c8;
    }
    iVar3 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x1d8) - 1U & (longlong)iVar12) * 4);
    if (iVar3 != -1) {
      lVar5 = *(longlong *)(param_1 + 400);
      iVar6 = iVar3;
      do {
        lVar9 = (longlong)iVar6;
        if (*(int *)(lVar5 + lVar9 * 0x18) == iVar12) {
          if (iVar6 != -1) goto joined_r0x0001411be328;
          break;
        }
        iVar6 = *(int *)(lVar5 + 0x10 + lVar9 * 0x18);
      } while (iVar6 != -1);
    }
  }
  goto LAB_1411be3f2;
joined_r0x0001411be328:
  if (iVar3 == -1) goto LAB_1411be350;
  lVar7 = (longlong)iVar3;
  lVar9 = lVar7 * 3;
  lVar8 = lVar5 + lVar7 * 0x18;
  if (*(int *)(lVar5 + lVar7 * 0x18) == iVar12) {
    if (iVar3 != -1) goto LAB_1411be353;
    goto LAB_1411be350;
  }
  iVar3 = *(int *)(lVar8 + 0x10);
  goto joined_r0x0001411be328;
LAB_1411be350:
  lVar8 = 0;
LAB_1411be353:
  lVar5 = *(longlong *)(lVar8 + 8);
  if (lVar5 != 0) {
    FUN_1411b6b40(lVar5,CONCAT71((int7)((ulonglong)lVar9 >> 8),1));
    plVar4 = *(longlong **)(lVar5 + 0x170);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x2b0))(plVar4,local_58,1,0);
      if (*(longlong *)(lVar5 + 0x170) != 0) {
        FUN_142f0d6e0(*(longlong *)(lVar5 + 0x170),0x41880000,L"left");
      }
    }
    local_68[0] = 0;
    local_68[1] = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68,0);
    FGenericPlatformString::Memcpy(local_68[0],L"Default",0x10);
    FUN_142088cf0(lVar5,local_68);
    if (local_68[0] != 0) {
      FMemory::Free();
    }
  }
LAB_1411be3f2:
  plVar4 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar12 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  plVar4 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar12 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  lVar11 = lVar11 + 0x30;
  puVar10 = puVar10 + 6;
  if (lVar11 == lVar13) {
    return;
  }
  goto LAB_1411be270;
}



// FUNCTION 1411be4b0 FUN_1411be4b0 body=408 status=ok
// SIG undefined FUN_1411be4b0(void)

void FUN_1411be4b0(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  int *piVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined1 uVar10;
  undefined2 *puVar11;
  char local_38;
  undefined4 local_30;
  uint uStack_2c;
  longlong local_28 [2];
  
  bVar3 = false;
  bVar2 = false;
  local_30 = 0;
  if (*(longlong *)(param_1 + 0xc0) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x298) == '\0') {
    puVar11 = (undefined2 *)((ulonglong)uStack_2c << 0x20);
LAB_1411be55a:
    if (((*(char *)(param_1 + 0x2d0) == '\0') ||
        (cVar4 = UInspectableComponent::IsOccupied(*(undefined8 *)(param_1 + 0xc0)),
        cVar4 == *(char *)(param_1 + 0x2cc))) &&
       ((*(char *)(param_1 + 0x2b4) == '\0' ||
        ((iVar5 = UGameUserSettings::GetFullscreenMode(*(undefined8 *)(param_1 + 0xc0)),
         *(char *)(param_1 + 0x2b4) == '\x01' && (iVar5 == *(int *)(param_1 + 0x2b0))))))) {
      if ((*(char *)(param_1 + 0x284) != '\0') && (*(char *)(param_1 + 0x2c0) != '\0')) {
        piVar1 = (int *)(*(longlong *)(param_1 + 0x108 + (longlong)*(int *)(param_1 + 700) * 0x10) +
                        (longlong)*(int *)(param_1 + 0x280) * 8);
        piVar7 = (int *)FUN_142481920(*(undefined8 *)(param_1 + 0xc0),&local_30);
        if ((*piVar7 != *piVar1) || (piVar7[1] != piVar1[1])) goto LAB_1411be5f0;
      }
      uVar10 = 0;
      goto LAB_1411be5f6;
    }
  }
  else {
    puVar6 = (undefined8 *)
             UMWAITargetSelectionComponent::GetTargetUnitName
                       (*(longlong *)(param_1 + 0xc0),local_28);
    local_38 = '\x01';
    puVar11 = (undefined2 *)*puVar6;
    *puVar6 = 0;
    iVar5 = *(int *)(puVar6 + 1);
    puVar6[1] = 0;
    uVar10 = 1;
    if (*(char *)(param_1 + 0x298) != '\x01') {
      bVar3 = true;
      bVar2 = true;
      goto LAB_1411be5f6;
    }
    if (*(int *)(param_1 + 0x290) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = *(undefined2 **)(param_1 + 0x288);
    }
    bVar3 = true;
    bVar2 = true;
    puVar8 = &DAT_143f3eda8;
    if (iVar5 != 0) {
      puVar8 = puVar11;
    }
    iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8,puVar9);
    if (iVar5 == 0) goto LAB_1411be55a;
  }
LAB_1411be5f0:
  uVar10 = 1;
LAB_1411be5f6:
  *(undefined1 *)(param_1 + 0x28) = uVar10;
  if (((bVar2) && (local_38 != '\0')) && (puVar11 != (undefined2 *)0x0)) {
    FMemory::Free(puVar11);
  }
  if ((bVar3) && (local_28[0] != 0)) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1411be650 FUN_1411be650 body=4341 status=ok
// SIG undefined FUN_1411be650(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411be650(longlong param_1)

{
  char *pcVar1;
  longlong *plVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined2 *puVar13;
  ulonglong uVar14;
  longlong *plVar15;
  uint uVar16;
  undefined2 *puVar17;
  int *piVar18;
  ulonglong uVar19;
  undefined4 uVar20;
  char *pcVar21;
  ulonglong uVar22;
  bool bVar23;
  undefined1 auStack_4e8 [32];
  undefined2 local_4c8;
  uint local_4b8 [2];
  undefined8 local_4b0;
  longlong local_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  int *local_490;
  undefined8 local_488;
  longlong local_480;
  undefined8 local_478;
  undefined4 *local_468;
  undefined4 *puStack_460;
  longlong local_458;
  longlong local_450 [4];
  int local_430;
  int iStack_42c;
  longlong local_428 [8];
  longlong local_3e8 [2];
  undefined4 local_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined8 local_3c0;
  longlong local_3b8;
  undefined4 *local_3a8;
  undefined4 *puStack_3a0;
  undefined8 local_398;
  longlong local_390;
  undefined4 *local_388;
  ulonglong *puStack_380;
  undefined8 local_378;
  longlong local_370;
  longlong local_368 [2];
  undefined8 local_358;
  undefined8 uStack_350;
  undefined1 local_348 [16];
  undefined8 local_338;
  undefined8 uStack_330;
  undefined1 local_328 [16];
  undefined8 local_318;
  undefined8 uStack_310;
  undefined1 local_308 [16];
  undefined1 local_2f8 [8];
  longlong *local_2f0;
  undefined1 local_2e0 [8];
  longlong *local_2d8;
  undefined1 local_2c8 [8];
  longlong *local_2c0;
  undefined1 local_2b0 [8];
  longlong *local_2a8;
  undefined1 local_298 [8];
  longlong *local_290;
  undefined1 local_280 [8];
  longlong *local_278;
  undefined1 local_268 [8];
  longlong *local_260;
  undefined1 local_250 [8];
  longlong *local_248;
  undefined1 local_238 [8];
  longlong *local_230;
  undefined1 local_220 [16];
  undefined1 local_210 [16];
  undefined1 local_200 [16];
  undefined1 local_1f0 [24];
  undefined1 local_1d8 [24];
  undefined1 local_1c0 [24];
  undefined1 local_1a8 [24];
  undefined1 local_190 [24];
  undefined1 local_178 [32];
  undefined4 local_158 [4];
  undefined1 local_148 [24];
  undefined1 local_130;
  undefined4 local_128;
  undefined1 local_118 [24];
  undefined1 local_100;
  undefined4 local_f8 [4];
  undefined1 local_e8 [24];
  char local_d0 [8];
  undefined4 local_c8;
  undefined1 local_b8 [24];
  undefined1 local_a0;
  undefined4 local_98 [4];
  undefined1 local_88 [24];
  char local_70 [8];
  undefined4 local_68;
  undefined1 local_58 [24];
  undefined1 local_40;
  ulonglong local_38 [2];
  
  local_38[0] = DAT_1468387a8 ^ (ulonglong)auStack_4e8;
  if (*(longlong *)(param_1 + 0x198) == 0) {
    return;
  }
  FUN_14119d950(param_1,&local_430);
  FUN_142481920(*(undefined8 *)(param_1 + 0xc0),&local_4b0);
  uVar14 = 0;
  local_3d0 = 0;
  puVar11 = &local_3d0;
  if (*(char *)(param_1 + 0x298) != '\0') {
    puVar11 = (undefined8 *)(param_1 + 0x288);
  }
  local_3c8 = 0;
  puVar7 = (undefined8 *)
           UMWAITargetSelectionComponent::GetTargetUnitName
                     (*(undefined8 *)(param_1 + 0xc0),local_368);
  puVar13 = &DAT_143f3eda8;
  if (*(int *)(puVar11 + 1) == 0) {
    puVar17 = &DAT_143f3eda8;
  }
  else {
    puVar17 = (undefined2 *)*puVar11;
  }
  if (*(int *)(puVar7 + 1) != 0) {
    puVar13 = (undefined2 *)*puVar7;
  }
  iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar13,puVar17);
  uVar10 = CONCAT44(iStack_42c,local_430);
  if (iVar5 == 0) {
LAB_1411be784:
    bVar23 = false;
  }
  else {
    iVar5 = UGameUserSettings::GetFullscreenMode(*(undefined8 *)(param_1 + 0xc0));
    if (iVar5 == 2) {
      iVar5 = FUN_14119d560(param_1,local_4b0);
      piVar18 = *(int **)(param_1 + 0x108 + (longlong)iVar5 * 0x10);
      piVar3 = piVar18 + (longlong)*(int *)(param_1 + 0x110 + (longlong)iVar5 * 0x10) * 2;
      if (piVar18 != piVar3) {
        do {
          if ((*piVar18 == (int)local_4b0) && (piVar18[1] == local_4b0._4_4_)) {
            if ((local_430 < (int)local_4b0) || (iStack_42c < local_4b0._4_4_)) goto LAB_1411be77f;
            goto LAB_1411be784;
          }
          piVar18 = piVar18 + 2;
        } while (piVar18 != piVar3);
        bVar23 = true;
        goto LAB_1411be787;
      }
    }
LAB_1411be77f:
    bVar23 = true;
  }
LAB_1411be787:
  if (local_368[0] != 0) {
    FMemory::Free();
  }
  piVar3 = (int *)(param_1 + 700);
  if (bVar23) {
    local_4b0 = uVar10;
  }
  uVar22 = uVar14;
  if (*(char *)(param_1 + 0x2c0) != '\0') {
    iVar5 = *piVar3;
    local_490 = piVar3;
    iVar6 = FUN_14119d560(param_1);
    if ((iVar6 == iVar5) ||
       (iVar6 = FUN_14119d560(param_1,uVar10), local_4b0 = uVar10, local_490 = piVar3,
       iVar6 == iVar5)) {
      iVar5 = (int)local_4b0;
      iVar6 = local_4b0._4_4_;
      goto LAB_1411be830;
    }
  }
  local_3d8 = 0;
  iVar5 = 0;
  if (*(char *)(param_1 + 0x2c0) != '\0') {
    iVar5 = *piVar3;
  }
  piVar18 = *(int **)(param_1 + 0x108 + (longlong)iVar5 * 0x10);
  iVar5 = *piVar18;
  iVar6 = piVar18[1];
  local_4b0 = *(undefined8 *)piVar18;
  local_490 = piVar3;
LAB_1411be830:
  do {
    uVar19 = uVar14;
    if (0 < *(int *)(param_1 + (uVar22 + 0x11) * 0x10)) {
      do {
        uVar16 = (uint)uVar19;
        lVar8 = (longlong)(int)uVar16 * 8;
        lVar9 = *(longlong *)(param_1 + 0x108 + uVar22 * 0x10);
        if ((*(int *)(lVar9 + lVar8) == local_430) && (*(int *)(lVar9 + 4 + lVar8) == iStack_42c)) {
          *(uint *)(param_1 + 0x160) = uVar16;
          lVar9 = *(longlong *)(param_1 + 0x108 + uVar22 * 0x10);
        }
        if (((*(int *)(lVar9 + lVar8) == iVar5) && (*(int *)(lVar9 + 4 + lVar8) == iVar6)) &&
           (local_4b8 != (uint *)(param_1 + 0x280))) {
          *(uint *)(param_1 + 0x280) = uVar16;
          *(undefined1 *)(param_1 + 0x284) = 1;
        }
        uVar19 = (ulonglong)(uVar16 + 1);
      } while ((int)(uVar16 + 1) < *(int *)(param_1 + (uVar22 + 0x11) * 0x10));
    }
    uVar19 = uVar14;
    if (0 < *(int *)(param_1 + (uVar22 + 0x12) * 0x10)) {
      do {
        uVar16 = (uint)uVar19;
        lVar8 = (longlong)(int)uVar16 * 8;
        lVar9 = *(longlong *)(param_1 + 0x118 + uVar22 * 0x10);
        if ((*(int *)(lVar9 + lVar8) == local_430) && (*(int *)(lVar9 + 4 + lVar8) == iStack_42c)) {
          *(uint *)(param_1 + 0x160) = uVar16;
          lVar9 = *(longlong *)(param_1 + 0x118 + uVar22 * 0x10);
        }
        if (((*(int *)(lVar9 + lVar8) == iVar5) && (*(int *)(lVar9 + 4 + lVar8) == iVar6)) &&
           (local_4b8 != (uint *)(param_1 + 0x280))) {
          *(uint *)(param_1 + 0x280) = uVar16;
          *(undefined1 *)(param_1 + 0x284) = 1;
        }
        uVar19 = (ulonglong)(uVar16 + 1);
      } while ((int)(uVar16 + 1) < *(int *)(param_1 + (uVar22 + 0x12) * 0x10));
    }
    uVar19 = uVar14;
    if (0 < *(int *)(param_1 + (uVar22 + 0x13) * 0x10)) {
      do {
        uVar16 = (uint)uVar19;
        lVar8 = (longlong)(int)uVar16 * 8;
        lVar9 = *(longlong *)(param_1 + 0x128 + uVar22 * 0x10);
        if ((*(int *)(lVar9 + lVar8) == local_430) && (*(int *)(lVar9 + 4 + lVar8) == iStack_42c)) {
          *(uint *)(param_1 + 0x160) = uVar16;
          lVar9 = *(longlong *)(param_1 + 0x128 + uVar22 * 0x10);
        }
        if (((*(int *)(lVar9 + lVar8) == iVar5) && (*(int *)(lVar9 + 4 + lVar8) == iVar6)) &&
           (local_4b8 != (uint *)(param_1 + 0x280))) {
          *(uint *)(param_1 + 0x280) = uVar16;
          *(undefined1 *)(param_1 + 0x284) = 1;
        }
        uVar19 = (ulonglong)(uVar16 + 1);
      } while ((int)(uVar16 + 1) < *(int *)(param_1 + (uVar22 + 0x13) * 0x10));
    }
    uVar19 = uVar14;
    if (0 < *(int *)(param_1 + (uVar22 + 0x14) * 0x10)) {
      do {
        uVar16 = (uint)uVar19;
        lVar8 = (longlong)(int)uVar16 * 8;
        lVar9 = *(longlong *)(param_1 + 0x138 + uVar22 * 0x10);
        if ((*(int *)(lVar9 + lVar8) == local_430) && (*(int *)(lVar9 + 4 + lVar8) == iStack_42c)) {
          *(uint *)(param_1 + 0x160) = uVar16;
          lVar9 = *(longlong *)(param_1 + 0x138 + uVar22 * 0x10);
        }
        if (((*(int *)(lVar8 + lVar9) == iVar5) && (*(int *)(lVar8 + 4 + lVar9) == iVar6)) &&
           (local_4b8 != (uint *)(param_1 + 0x280))) {
          *(uint *)(param_1 + 0x280) = uVar16;
          *(undefined1 *)(param_1 + 0x284) = 1;
        }
        uVar19 = (ulonglong)(uVar16 + 1);
      } while ((int)(uVar16 + 1) < *(int *)(param_1 + (uVar22 + 0x14) * 0x10));
    }
    local_4b8[0] = 0;
    uVar19 = uVar14;
    if (0 < *(int *)(param_1 + (uVar22 + 0x15) * 0x10)) {
      do {
        local_4b8[0] = (uint)uVar19;
        lVar8 = (longlong)(int)local_4b8[0] * 8;
        lVar9 = *(longlong *)(param_1 + 0x148 + uVar22 * 0x10);
        if ((*(int *)(lVar9 + lVar8) == local_430) && (*(int *)(lVar9 + 4 + lVar8) == iStack_42c)) {
          *(uint *)(param_1 + 0x160) = local_4b8[0];
          lVar9 = *(longlong *)(param_1 + 0x148 + uVar22 * 0x10);
        }
        if (((*(int *)(lVar8 + lVar9) == iVar5) && (*(int *)(lVar8 + 4 + lVar9) == iVar6)) &&
           (local_4b8 != (uint *)(param_1 + 0x280))) {
          *(uint *)(param_1 + 0x280) = local_4b8[0];
          *(undefined1 *)(param_1 + 0x284) = 1;
        }
        local_4b8[0] = local_4b8[0] + 1;
        uVar19 = (ulonglong)local_4b8[0];
      } while ((int)local_4b8[0] < *(int *)(param_1 + (uVar22 + 0x15) * 0x10));
    }
    uVar22 = uVar22 + 5;
  } while ((longlong)uVar22 < 5);
  if ((*(char *)(param_1 + 0x2b4) == '\0') || (*(int *)(param_1 + 0x2b0) != 1)) {
    uVar14 = (ulonglong)*piVar3;
    local_4a8 = 0;
    local_4a0 = 0;
    if (0 < *(int *)(param_1 + (uVar14 + 0x11) * 0x10)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                (&local_4a8);
      uVar14 = (ulonglong)*(uint *)(param_1 + 700);
    }
    local_498 = (ulonglong)local_498._4_4_ << 0x20;
    if (0 < *(int *)(param_1 + ((longlong)(int)uVar14 + 0x11) * 0x10)) {
      local_488 = 0;
      do {
        lVar8 = 2;
        puVar4 = (undefined4 *)
                 (*(longlong *)(param_1 + 0x108 + (longlong)(int)uVar14 * 0x10) + local_488 * 8);
        if ((*(char *)(param_1 + 0x158) == '\0') || (local_488 != 0)) {
          local_450[2] = 0;
          local_450[3] = 8;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_450 + 2,0);
          local_4c8 = 0x3f;
          FGenericPlatformString::Convert<char,wchar_t>(local_450[2],8,"{0}x{1}");
          local_468 = (undefined4 *)0x0;
          puStack_460 = (undefined4 *)0x0;
          FString::AppendInt(&local_468,puVar4[1]);
          local_3e8[0] = 0;
          local_3e8[1] = 0;
          FString::AppendInt(local_3e8,*puVar4);
          lVar9 = FText::FromString(local_190,&local_468);
          local_458 = lVar9;
          lVar12 = FText::FromString(local_178,local_3e8);
          uVar10 = FText::FromString(local_238,local_450 + 2);
          puVar11 = (undefined8 *)FTextFormat::FTextFormat(local_200,uVar10);
          local_98[0] = 4;
          FText::FText(local_88,lVar12);
          local_70[0] = '\x01';
          local_68 = 4;
          FText::FText(local_58,lVar9);
          local_388 = local_98;
          local_40 = 1;
          puStack_380 = local_38;
          local_378 = *puVar11;
          local_370 = puVar11[1];
          if (local_370 != 0) {
            LOCK();
            *(int *)(local_370 + 8) = *(int *)(local_370 + 8) + 1;
            UNLOCK();
          }
          local_318 = local_388;
          uStack_310 = puStack_380;
          uVar10 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                   TArray<FFormatArgumentValue,FDefaultAllocator>(local_308,&local_318);
          uVar10 = FText::Format(local_250,&local_378,uVar10);
          FText::FText(local_2c8,uVar10);
          plVar15 = local_248;
          if (local_248 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_248 + 1;
            lVar9 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*local_248)(local_248);
              LOCK();
              piVar3 = (int *)((longlong)plVar15 + 0xc);
              iVar5 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*plVar15 + 8))(plVar15,1);
              }
            }
          }
          TArray<FFormatArgumentValue,FDefaultAllocator>::
          ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_308);
          pcVar21 = &stack0xfffffffffffffff0;
          do {
            lVar8 = lVar8 + -1;
            pcVar1 = pcVar21 + -0x30;
            if (*pcVar1 != '\0') {
              *pcVar1 = '\0';
              plVar15 = *(longlong **)(pcVar21 + -0x40);
              if (plVar15 != (longlong *)0x0) {
                LOCK();
                plVar2 = plVar15 + 1;
                lVar9 = *plVar2;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)lVar9 == 1) {
                  (**(code **)*plVar15)(plVar15);
                  LOCK();
                  piVar3 = (int *)((longlong)plVar15 + 0xc);
                  iVar5 = *piVar3;
                  *piVar3 = *piVar3 + -1;
                  UNLOCK();
                  if (iVar5 == 1) {
                    (**(code **)(*plVar15 + 8))(plVar15,1);
                  }
                }
              }
            }
            pcVar21 = pcVar1;
          } while (lVar8 != 0);
          plVar15 = (longlong *)puVar11[1];
          if (plVar15 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar15 + 1;
            lVar8 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*plVar15)(plVar15);
              LOCK();
              piVar3 = (int *)((longlong)plVar15 + 0xc);
              iVar5 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*plVar15 + 8))(plVar15,1);
              }
            }
          }
          plVar15 = *(longlong **)(lVar12 + 8);
          if (plVar15 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar15 + 1;
            lVar8 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*plVar15)(plVar15);
              LOCK();
              piVar3 = (int *)((longlong)plVar15 + 0xc);
              iVar5 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*plVar15 + 8))(plVar15,1);
              }
            }
          }
          plVar15 = *(longlong **)(local_458 + 8);
          if (plVar15 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar15 + 1;
            lVar8 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*plVar15)(plVar15);
              LOCK();
              piVar3 = (int *)((longlong)plVar15 + 0xc);
              iVar5 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*plVar15 + 8))(plVar15,1);
              }
            }
          }
          uVar14 = local_4a0;
          lVar8 = (longlong)(int)local_4a0;
          iVar5 = (int)local_4a0 + 1;
          local_4a0 = CONCAT44(local_4a0._4_4_,iVar5);
          if (local_4a0._4_4_ < iVar5) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
            ResizeGrow(&local_4a8,uVar14 & 0xffffffff);
          }
          FText::FText(local_4a8 + lVar8 * 0x18,local_2c8);
          plVar15 = local_2c0;
          if (local_2c0 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_2c0 + 1;
            lVar8 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*local_2c0)(local_2c0);
              LOCK();
              piVar3 = (int *)((longlong)plVar15 + 0xc);
              iVar5 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*plVar15 + 8))(plVar15,1);
              }
            }
          }
          plVar15 = local_230;
          if (local_230 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_230 + 1;
            lVar8 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*local_230)(local_230);
              LOCK();
              piVar3 = (int *)((longlong)plVar15 + 0xc);
              iVar5 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*plVar15 + 8))(plVar15,1);
              }
            }
          }
          if (local_3e8[0] != 0) {
            FMemory::Free();
          }
          lVar8 = local_450[2];
          if (local_468 != (undefined4 *)0x0) {
            FMemory::Free();
            lVar8 = local_450[2];
          }
        }
        else {
          local_428[6] = 0;
          local_428[7] = local_488;
          FString::AppendInt(local_428 + 6,puVar4[1]);
          local_428[4] = 0;
          local_428[5] = 0;
          FString::AppendInt(local_428 + 4,*puVar4);
          lVar9 = FText::FromString(local_1c0,local_428 + 6);
          local_458 = lVar9;
          lVar12 = FText::FromString(local_1a8,local_428 + 4);
          uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                             (local_268,L"{0}x{1} (Custom)",L"GraphicsOptions",L"CustomResolution");
          puVar11 = (undefined8 *)FTextFormat::FTextFormat(local_210,uVar10);
          local_f8[0] = 4;
          FText::FText(local_e8,lVar12);
          local_d0[0] = '\x01';
          local_c8 = 4;
          FText::FText(local_b8,lVar9);
          local_3a8 = local_f8;
          local_a0 = 1;
          puStack_3a0 = local_98;
          local_398 = *puVar11;
          local_390 = puVar11[1];
          if (local_390 != 0) {
            LOCK();
            *(int *)(local_390 + 8) = *(int *)(local_390 + 8) + 1;
            UNLOCK();
          }
          local_338 = local_3a8;
          uStack_330 = puStack_3a0;
          uVar10 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                   TArray<FFormatArgumentValue,FDefaultAllocator>(local_328,&local_338);
          uVar10 = FText::Format(local_280,&local_398,uVar10);
          FText::FText(local_2e0,uVar10);
          plVar15 = local_278;
          if (local_278 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_278 + 1;
            lVar9 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*local_278)(local_278);
              LOCK();
              piVar3 = (int *)((longlong)plVar15 + 0xc);
              iVar5 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*plVar15 + 8))(plVar15,1);
              }
            }
          }
          TArray<FFormatArgumentValue,FDefaultAllocator>::
          ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_328);
          pcVar21 = local_70;
          do {
            lVar8 = lVar8 + -1;
            pcVar1 = pcVar21 + -0x30;
            if (*pcVar1 != '\0') {
              *pcVar1 = '\0';
              plVar15 = *(longlong **)(pcVar21 + -0x40);
              if (plVar15 != (longlong *)0x0) {
                LOCK();
                plVar2 = plVar15 + 1;
                lVar9 = *plVar2;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)lVar9 == 1) {
                  (**(code **)*plVar15)(plVar15);
                  LOCK();
                  piVar3 = (int *)((longlong)plVar15 + 0xc);
                  iVar5 = *piVar3;
                  *piVar3 = *piVar3 + -1;
                  UNLOCK();
                  if (iVar5 == 1) {
                    (**(code **)(*plVar15 + 8))(plVar15,1);
                  }
                }
              }
            }
            pcVar21 = pcVar1;
          } while (lVar8 != 0);
          plVar15 = (longlong *)puVar11[1];
          if (plVar15 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar15 + 1;
            lVar8 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*plVar15)(plVar15);
              LOCK();
              piVar3 = (int *)((longlong)plVar15 + 0xc);
              iVar5 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*plVar15 + 8))(plVar15,1);
              }
            }
          }
          plVar15 = *(longlong **)(lVar12 + 8);
          if (plVar15 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar15 + 1;
            lVar8 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*plVar15)(plVar15);
              LOCK();
              piVar3 = (int *)((longlong)plVar15 + 0xc);
              iVar5 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*plVar15 + 8))(plVar15,1);
              }
            }
          }
          plVar15 = *(longlong **)(local_458 + 8);
          if (plVar15 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar15 + 1;
            lVar8 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*plVar15)(plVar15);
              LOCK();
              piVar3 = (int *)((longlong)plVar15 + 0xc);
              iVar5 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*plVar15 + 8))(plVar15,1);
              }
            }
          }
          uVar14 = local_4a0;
          lVar8 = (longlong)(int)local_4a0;
          iVar5 = (int)local_4a0 + 1;
          local_4a0 = CONCAT44(local_4a0._4_4_,iVar5);
          if (local_4a0._4_4_ < iVar5) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
            ResizeGrow(&local_4a8,uVar14 & 0xffffffff);
          }
          FText::FText(local_4a8 + lVar8 * 0x18,local_2e0);
          plVar15 = local_2d8;
          if (local_2d8 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_2d8 + 1;
            lVar8 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*local_2d8)(local_2d8);
              LOCK();
              piVar3 = (int *)((longlong)plVar15 + 0xc);
              iVar5 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*plVar15 + 8))(plVar15,1);
              }
            }
          }
          plVar15 = local_260;
          if (local_260 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_260 + 1;
            lVar8 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*local_260)(local_260);
              LOCK();
              piVar3 = (int *)((longlong)plVar15 + 0xc);
              iVar5 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*plVar15 + 8))(plVar15,1);
              }
            }
          }
          lVar8 = local_428[6];
          if (local_428[4] != 0) {
            FMemory::Free();
            lVar8 = local_428[6];
          }
        }
        if (lVar8 != 0) {
          FMemory::Free();
        }
        iVar5 = (int)local_498 + 1;
        local_488 = local_488 + 1;
        local_498 = CONCAT44(local_498._4_4_,iVar5);
        uVar14 = (ulonglong)*local_490;
      } while (iVar5 < *(int *)(param_1 + (uVar14 + 0x11) * 0x10));
    }
    FUN_142ed3be0(*(undefined8 *)(param_1 + 0x198),&local_4a8);
    plVar15 = &local_4a8;
  }
  else {
    iVar5 = *(int *)(param_1 + 0x160);
    if (*(int *)(param_1 + 0x160) == -1) {
      *(undefined4 *)(param_1 + 0x160) = 0;
      iVar5 = 0;
    }
    local_480 = 0;
    local_478 = 0;
    local_450[0] = 0;
    local_450[1] = 8;
    uVar14 = *(ulonglong *)
              (*(longlong *)(param_1 + 0x108 + (longlong)*(int *)(param_1 + 0x2c8) * 0x10) +
              (longlong)iVar5 * 8);
    local_488 = uVar14;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_450,0);
    local_4c8 = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>(local_450[0],8,"{0}x{1}");
    local_428[2] = 0;
    local_428[3] = 0;
    FString::AppendInt(local_428 + 2,local_488._4_4_);
    local_428[0] = 0;
    local_428[1] = 0;
    FString::AppendInt(local_428,uVar14 & 0xffffffff);
    lVar8 = FText::FromString(local_1f0,local_428 + 2);
    lVar9 = FText::FromString(local_1d8,local_428);
    uVar10 = FText::FromString(local_298,local_450);
    puVar11 = (undefined8 *)FTextFormat::FTextFormat(local_220,uVar10);
    local_158[0] = 4;
    FText::FText(local_148,lVar9);
    local_130 = 1;
    local_128 = 4;
    FText::FText(local_118,lVar8);
    local_468 = local_158;
    local_100 = 1;
    puStack_460 = local_f8;
    local_3c0 = *puVar11;
    local_3b8 = puVar11[1];
    if (local_3b8 != 0) {
      LOCK();
      *(int *)(local_3b8 + 8) = *(int *)(local_3b8 + 8) + 1;
      UNLOCK();
    }
    local_358 = local_468;
    uStack_350 = puStack_460;
    uVar10 = TArray<FFormatArgumentValue,FDefaultAllocator>::
             TArray<FFormatArgumentValue,FDefaultAllocator>(local_348,&local_358);
    uVar10 = FText::Format(local_2b0,&local_3c0,uVar10);
    FText::FText(local_2f8,uVar10);
    if (local_2a8 != (longlong *)0x0) {
      LOCK();
      plVar15 = local_2a8 + 1;
      lVar12 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_2a8)(local_2a8);
        LOCK();
        piVar3 = (int *)((longlong)local_2a8 + 0xc);
        iVar5 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_2a8 + 8))(local_2a8,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_348);
    local_498 = 2;
    pcVar21 = local_d0;
    do {
      local_498 = local_498 + -1;
      pcVar1 = pcVar21 + -0x30;
      if (*pcVar1 != '\0') {
        *pcVar1 = '\0';
        plVar15 = *(longlong **)(pcVar21 + -0x40);
        if (plVar15 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar15 + 1;
          lVar12 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar3 = (int *)((longlong)plVar15 + 0xc);
            iVar5 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar15 + 8))(plVar15,1);
            }
          }
        }
      }
      pcVar21 = pcVar1;
    } while (local_498 != 0);
    plVar15 = (longlong *)puVar11[1];
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar15 + 1;
      lVar12 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plVar15)(plVar15);
        LOCK();
        piVar3 = (int *)((longlong)plVar15 + 0xc);
        iVar5 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar15 + 8))(plVar15,1);
        }
      }
    }
    plVar15 = *(longlong **)(lVar9 + 8);
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar15 + 1;
      lVar9 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar15)(plVar15);
        LOCK();
        piVar3 = (int *)((longlong)plVar15 + 0xc);
        iVar5 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar15 + 8))(plVar15,1);
        }
      }
    }
    plVar15 = *(longlong **)(lVar8 + 8);
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar15 + 1;
      lVar8 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar15)(plVar15);
        LOCK();
        piVar3 = (int *)((longlong)plVar15 + 0xc);
        iVar5 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar15 + 8))(plVar15,1);
        }
      }
    }
    uVar14 = local_478;
    lVar8 = (longlong)(int)local_478;
    iVar5 = (int)local_478 + 1;
    local_478 = CONCAT44(local_478._4_4_,iVar5);
    if (local_478._4_4_ < iVar5) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (&local_480,uVar14 & 0xffffffff);
    }
    FText::FText(local_480 + lVar8 * 0x18,local_2f8);
    if (local_2f0 != (longlong *)0x0) {
      LOCK();
      plVar15 = local_2f0 + 1;
      lVar8 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_2f0)(local_2f0);
        LOCK();
        piVar3 = (int *)((longlong)local_2f0 + 0xc);
        iVar5 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_2f0 + 8))(local_2f0,1);
        }
      }
    }
    if (local_290 != (longlong *)0x0) {
      LOCK();
      plVar15 = local_290 + 1;
      lVar8 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_290)(local_290);
        LOCK();
        piVar3 = (int *)((longlong)local_290 + 0xc);
        iVar5 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_290 + 8))(local_290,1);
        }
      }
    }
    if (local_428[0] != 0) {
      FMemory::Free();
    }
    if (local_428[2] != 0) {
      FMemory::Free();
    }
    if (local_450[0] != 0) {
      FMemory::Free();
    }
    FUN_142ed3be0(*(undefined8 *)(param_1 + 0x198),&local_480);
    plVar15 = &local_480;
  }
  uVar20 = 0xffffffff;
  TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>::
  ~TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>(plVar15);
  if (*(char *)(param_1 + 0x2b4) == '\0') {
    bVar23 = true;
  }
  else {
    bVar23 = *(int *)(param_1 + 0x2b0) != 1;
  }
  plVar15 = (longlong *)(*(longlong *)(param_1 + 0x198) + 0x170);
  (**(code **)(*plVar15 + 0x38))(plVar15,bVar23);
  if ((*(char *)(param_1 + 0x2b4) == '\0') || (*(int *)(param_1 + 0x2b0) != 1)) {
    lVar8 = 0x280;
    if (*(char *)(param_1 + 0x284) == '\0') {
      lVar8 = 0x160;
    }
    FUN_142ed44c0(*(undefined8 *)(param_1 + 0x198),*(undefined4 *)(lVar8 + param_1));
    if (*local_490 == *(int *)(param_1 + 0x2c8)) {
      uVar20 = *(undefined4 *)(param_1 + 0x160);
    }
  }
  else {
    FUN_142ed44c0(*(undefined8 *)(param_1 + 0x198),0);
    uVar20 = 0;
  }
  FUN_142ed2aa0(*(undefined8 *)(param_1 + 0x198),uVar20);
  return;
}



// FUNCTION 1411bf750 FUN_1411bf750 body=80 status=ok
// SIG undefined FUN_1411bf750(void)

void FUN_1411bf750(undefined8 param_1)

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
  local_58[0] = &LAB_141190cf0;
  FUN_14204c280(local_58);
  return;
}



// FUNCTION 1411bf7a0 FUN_1411bf7a0 body=953 status=ok
// SIG undefined FUN_1411bf7a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411bf7a0(longlong param_1)

{
  int *piVar1;
  char *pcVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  char *pcVar11;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  undefined4 *local_188;
  ulonglong *puStack_180;
  longlong local_178;
  undefined8 local_170;
  longlong local_168;
  undefined1 local_160 [16];
  undefined1 local_150 [8];
  longlong *local_148;
  undefined1 local_138 [8];
  longlong *local_130;
  undefined1 local_120 [8];
  longlong *local_118;
  undefined1 local_108 [8];
  longlong *local_100;
  undefined1 local_f0 [16];
  undefined1 local_e0 [24];
  undefined1 local_c8 [32];
  undefined4 local_a8 [4];
  undefined1 local_98 [24];
  undefined1 local_80;
  undefined4 local_78;
  undefined1 local_68 [24];
  undefined1 local_50;
  ulonglong local_48 [4];
  
  local_48[0] = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  if (*(longlong *)(param_1 + 0x6d0) != 0) {
    uVar7 = FWeakObjectPtr::Get(param_1 + 0x58c);
    local_198 = 0;
    FUN_142ef39a0(local_138,DAT_146875d20,uVar7,0);
    lVar8 = FUN_14119da90(param_1,local_e0);
    local_178 = lVar8;
    lVar9 = FText::FText(local_c8,local_138);
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_108,L"{0} Sort ({1})",L"ServerBrowserMenu",L"SortCriteria");
    puVar10 = (undefined8 *)FTextFormat::FTextFormat(local_f0,uVar7);
    local_a8[0] = 4;
    FText::FText(local_98,lVar9);
    local_80 = 1;
    local_78 = 4;
    FText::FText(local_68,lVar8);
    local_188 = local_a8;
    puStack_180 = local_48;
    local_170 = *puVar10;
    local_168 = puVar10[1];
    local_50 = 1;
    if (local_168 != 0) {
      LOCK();
      *(int *)(local_168 + 8) = *(int *)(local_168 + 8) + 1;
      UNLOCK();
    }
    uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_160,&local_188);
    uVar7 = FText::Format(local_120,&local_170,uVar7);
    FText::FText(local_150,uVar7);
    if (local_118 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_118 + 1;
      lVar8 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_118)(local_118);
        LOCK();
        piVar1 = (int *)((longlong)local_118 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_118 + 8))(local_118,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_160);
    lVar8 = 2;
    pcVar11 = &stack0xffffffffffffffe0;
    do {
      lVar8 = lVar8 + -1;
      pcVar2 = pcVar11 + -0x30;
      if (*pcVar2 != '\0') {
        *pcVar2 = '\0';
        plVar5 = *(longlong **)(pcVar11 + -0x40);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar5 + 1;
          lVar6 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
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
      }
      pcVar11 = pcVar2;
    } while (lVar8 != 0);
    plVar5 = (longlong *)puVar10[1];
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar5 + 1;
      lVar8 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
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
    plVar5 = *(longlong **)(lVar9 + 8);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar5 + 1;
      lVar8 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
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
    plVar5 = *(longlong **)(local_178 + 8);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar5 + 1;
      lVar8 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
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
    (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x2b0))
              (*(longlong **)(param_1 + 0x6d0),local_150,1,0);
    if (local_148 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_148 + 1;
      lVar8 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_148)(local_148);
        LOCK();
        piVar1 = (int *)((longlong)local_148 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_148 + 8))(local_148,1);
        }
      }
    }
    if (local_100 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_100 + 1;
      lVar8 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_100)(local_100);
        LOCK();
        piVar1 = (int *)((longlong)local_100 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_100 + 8))(local_100,1);
        }
      }
    }
    if (local_130 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_130 + 1;
      lVar8 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
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
  return;
}



// FUNCTION 1411bfb60 FUN_1411bfb60 body=203 status=ok
// SIG undefined FUN_1411bfb60(void)

void FUN_1411bfb60(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong local_38 [2];
  undefined1 local_28 [8];
  longlong *local_20;
  
  if (*(longlong *)(param_1 + 0x6c8) != 0) {
    local_38[1] = 0xd;
    local_38[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_38[0],0xd,"sortCriteria",0xd,0x3f);
    uVar5 = FUN_14119da90(param_1,local_28);
    FUN_142ed5290(param_1,local_38,uVar5);
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
  return;
}



// FUNCTION 1411bfc30 FUN_1411bfc30 body=1267 status=ok
// SIG undefined FUN_1411bfc30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411bfc30(longlong param_1)

{
  int *piVar1;
  char *pcVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  wchar_t *pwVar13;
  char *pcVar14;
  wchar_t *pwVar15;
  wchar_t *pwVar16;
  undefined1 auStack_208 [32];
  undefined8 local_1e8;
  ulonglong local_1d8;
  undefined4 *local_1c8;
  ulonglong *puStack_1c0;
  undefined8 local_1b8;
  longlong local_1b0;
  undefined1 local_1a8 [16];
  undefined1 local_198 [8];
  longlong *local_190;
  undefined1 local_180 [8];
  longlong *local_178;
  undefined1 local_168 [8];
  longlong *local_160;
  undefined1 local_150 [8];
  longlong *local_148;
  undefined1 local_138 [8];
  longlong *local_130;
  undefined1 local_120 [8];
  longlong *local_118;
  undefined1 local_108 [8];
  longlong *local_100;
  undefined1 local_f0 [16];
  undefined1 local_e0 [24];
  undefined1 local_c8 [32];
  undefined4 local_a8 [4];
  undefined1 local_98 [24];
  undefined1 local_80;
  undefined4 local_78;
  undefined1 local_68 [24];
  undefined1 local_50;
  ulonglong local_48 [4];
  
  local_48[0] = DAT_1468387a8 ^ (ulonglong)auStack_208;
  local_1d8 = local_1d8 & 0xffffffff00000000;
  if (*(longlong *)(param_1 + 0x6d8) != 0) {
    cVar5 = *(char *)(param_1 + 0x6f1);
    pwVar16 = L"Ascending";
    pwVar15 = L"ServerBrowserMenu";
    pwVar13 = L"Ascending";
    puVar12 = local_138;
    if (cVar5 == '\0') {
      pwVar16 = L"Descending";
      pwVar15 = L"ServerBrowserMenu";
      pwVar13 = L"Descending";
      puVar12 = local_150;
    }
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (puVar12,pwVar13,pwVar15,pwVar16);
    FText::FText(local_168,uVar8);
    if (((2U - (cVar5 != '\0') & 2) != 0) && (local_148 != (longlong *)0x0)) {
      LOCK();
      plVar6 = local_148 + 1;
      lVar9 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_148)(local_148);
        LOCK();
        piVar1 = (int *)((longlong)local_148 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_148 + 8))(local_148,1);
        }
      }
    }
    if ((cVar5 != '\0') && (local_130 != (longlong *)0x0)) {
      LOCK();
      plVar6 = local_130 + 1;
      lVar9 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
    uVar8 = FWeakObjectPtr::Get(param_1 + 0x58c);
    local_1e8 = 0;
    FUN_142ef39a0(local_180,DAT_146875d18,uVar8,0);
    lVar9 = FText::FText(local_e0,local_168);
    local_1d8 = lVar9;
    lVar10 = FText::FText(local_c8,local_180);
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_108,L"{0} {1}",L"ServerBrowserMenu",L"SortingOrder");
    puVar11 = (undefined8 *)FTextFormat::FTextFormat(local_f0,uVar8);
    local_a8[0] = 4;
    FText::FText(local_98,lVar10);
    local_80 = 1;
    local_78 = 4;
    FText::FText(local_68,lVar9);
    local_1c8 = local_a8;
    puStack_1c0 = local_48;
    local_1b8 = *puVar11;
    local_1b0 = puVar11[1];
    local_50 = 1;
    if (local_1b0 != 0) {
      LOCK();
      *(int *)(local_1b0 + 8) = *(int *)(local_1b0 + 8) + 1;
      UNLOCK();
    }
    uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_1a8,&local_1c8);
    uVar8 = FText::Format(local_120,&local_1b8,uVar8);
    FText::FText(local_198,uVar8);
    if (local_118 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_118 + 1;
      lVar9 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_118)(local_118);
        LOCK();
        piVar1 = (int *)((longlong)local_118 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_118 + 8))(local_118,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_1a8);
    lVar9 = 2;
    pcVar14 = &stack0xffffffffffffffe0;
    do {
      lVar9 = lVar9 + -1;
      pcVar2 = pcVar14 + -0x30;
      if (*pcVar2 != '\0') {
        *pcVar2 = '\0';
        plVar6 = *(longlong **)(pcVar14 + -0x40);
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar6 + 1;
          lVar7 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
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
      }
      pcVar14 = pcVar2;
    } while (lVar9 != 0);
    plVar6 = (longlong *)puVar11[1];
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar6 + 1;
      lVar9 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
    plVar6 = *(longlong **)(lVar10 + 8);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar6 + 1;
      lVar9 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
    plVar6 = *(longlong **)(local_1d8 + 8);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar6 + 1;
      lVar9 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
    (**(code **)(**(longlong **)(param_1 + 0x6d8) + 0x2b0))
              (*(longlong **)(param_1 + 0x6d8),local_198,1,0);
    if (local_190 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_190 + 1;
      lVar9 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_190)(local_190);
        LOCK();
        piVar1 = (int *)((longlong)local_190 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_190 + 8))(local_190,1);
        }
      }
    }
    if (local_100 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_100 + 1;
      lVar9 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_100)(local_100);
        LOCK();
        piVar1 = (int *)((longlong)local_100 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_100 + 8))(local_100,1);
        }
      }
    }
    if (local_178 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_178 + 1;
      lVar9 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_178)(local_178);
        LOCK();
        piVar1 = (int *)((longlong)local_178 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_178 + 8))(local_178,1);
        }
      }
    }
    if (local_160 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_160 + 1;
      lVar9 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_160)(local_160);
        LOCK();
        piVar1 = (int *)((longlong)local_160 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_160 + 8))(local_160,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1411c0130 FUN_1411c0130 body=333 status=ok
// SIG undefined FUN_1411c0130(void)

void FUN_1411c0130(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_30 [8];
  longlong *local_28;
  
  lVar4 = *(longlong *)(param_1 + 0x778);
  if (((lVar4 != 0) && (*(longlong *)(lVar4 + 0x1b8) != 0)) && (*(longlong *)(lVar4 + 0x1e8) != 0))
  {
    FUN_142ef30e0(local_30,DAT_146875d20,*(undefined8 *)(param_1 + 0x758),0,0xbf800000,0);
    FUN_142ed3af0(*(undefined8 *)(*(longlong *)(param_1 + 0x778) + 0x1b8),local_30,0);
    FUN_142ef30e0(local_48,DAT_146875d18,*(undefined8 *)(param_1 + 0x758),0,0xbf800000,0);
    FUN_142ed3af0(*(undefined8 *)(*(longlong *)(param_1 + 0x778) + 0x1e8),local_48,0);
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)local_40 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)local_28 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_28 + 8))(local_28,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1411c0280 FUN_1411c0280 body=126 status=ok
// SIG undefined FUN_1411c0280(void)

void FUN_1411c0280(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  bVar2 = FUN_142eb62f0();
  lVar1 = *(longlong *)(param_1 + 800);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x300) != 0)) {
    if (bVar2 < 2) {
      local_18 = 0x3f800000;
      uStack_14 = 0x3f800000;
      uStack_10 = 0x3f800000;
      uStack_c = 0x3f800000;
    }
    else if (bVar2 == 2) {
      local_18 = 0x3eb33333;
      uStack_14 = 0x3f800000;
      uStack_10 = 0x3ee66666;
      uStack_c = 0x3f800000;
    }
    else if (bVar2 == 3) {
      local_18 = 0x3eb33333;
      uStack_14 = 0x3eb33333;
      uStack_10 = 0x3f800000;
      uStack_c = 0x3f800000;
    }
    else {
      local_18 = DAT_1464aa6c0;
      uStack_14 = DAT_1464aa6c4;
      uStack_10 = DAT_1464aa6c8;
      uStack_c = DAT_1464aa6cc;
      if (bVar2 == 4) {
        local_18 = 0x3f333333;
        uStack_14 = 0x3e4ccccd;
        uStack_10 = 0x3f59999a;
        uStack_c = 0x3f800000;
      }
    }
    FUN_142f0c220(*(undefined8 *)(lVar1 + 0x300),&local_18,1);
  }
  return;
}



// FUNCTION 1411c0300 FUN_1411c0300 body=162 status=ok
// SIG undefined FUN_1411c0300(void)

void FUN_1411c0300(longlong *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  longlong lVar1;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(param_1,param_3 + param_5,param_4);
  lVar1 = *param_1;
  if (param_3 != 0) {
    param_2 = param_2 + 0x20;
    do {
      FString::FString(lVar1,param_2 + -0x20);
      FString::FString(lVar1 + 0x10,param_2 + -0x10);
      FString::FString(lVar1 + 0x20,param_2);
      lVar1 = lVar1 + 0x30;
      param_2 = param_2 + 0x30;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1411c03b0 FUN_1411c03b0 body=917 status=ok
// SIG undefined FUN_1411c03b0(void)

longlong FUN_1411c03b0(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
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
LAB_1411c045f:
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
      if (iVar9 < 1) goto LAB_1411c045f;
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
            goto LAB_1411c0474;
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
LAB_1411c0474:
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
      if (lVar12 == lVar11) goto LAB_1411c05fd;
      lVar12 = *(longlong *)(lVar12 + 0x30);
    } while (lVar12 != 0);
  }
  param_3 = AGameModeBase::GetPrivateStaticClass();
LAB_1411c05fd:
  plVar5 = *(longlong **)(uVar10 + 0x80);
  local_40 = *(undefined8 *)(uVar10 + 0x78);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  lVar12 = FUN_14203b1b0(local_40,param_3,param_2,param_1,param_4,param_5);
  if (lVar12 != 0) {
    lVar11 = AGameModeBase::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_1411c067a;
  }
  lVar12 = 0;
LAB_1411c067a:
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



// FUNCTION 1411c0750 FUN_1411c0750 body=666 status=ok
// SIG undefined FUN_1411c0750(void)

longlong FUN_1411c0750(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
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
      if (lVar9 == lVar6) goto LAB_1411c08b6;
      lVar9 = *(longlong *)(lVar9 + 0x30);
    } while (lVar9 != 0);
  }
  param_3 = FUN_142f1b8a0();
LAB_1411c08b6:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar7 = FUN_14203b1b0(lVar8,param_3,param_2,lVar7,param_4,param_5);
  if (lVar7 != 0) {
    lVar8 = FUN_142f1b8a0();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) goto LAB_1411c0929;
  }
  lVar7 = 0;
LAB_1411c0929:
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



// FUNCTION 1411c09f0 FUN_1411c09f0 body=666 status=ok
// SIG undefined FUN_1411c09f0(void)

longlong FUN_1411c09f0(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
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
      if (lVar9 == lVar6) goto LAB_1411c0b56;
      lVar9 = *(longlong *)(lVar9 + 0x30);
    } while (lVar9 != 0);
  }
  param_3 = UGameInstanceGameParameters::GetPrivateStaticClass();
LAB_1411c0b56:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar7 = FUN_14203b1b0(lVar8,param_3,param_2,lVar7,param_4,param_5);
  if (lVar7 != 0) {
    lVar8 = UGameInstanceGameParameters::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) goto LAB_1411c0bc9;
  }
  lVar7 = 0;
LAB_1411c0bc9:
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



// FUNCTION 1411c0c90 FUN_1411c0c90 body=1139 status=ok
// SIG undefined FUN_1411c0c90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411c0c90(longlong param_1,longlong param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 *_Src;
  ulonglong uVar8;
  uint uVar9;
  uint *puVar10;
  longlong *plVar11;
  uint uVar12;
  int iVar13;
  longlong *plVar14;
  ulonglong uVar15;
  undefined1 auStack_1b8 [32];
  char local_198;
  longlong *local_190;
  int local_188;
  uint uStack_184;
  uint *puStack_180;
  undefined4 local_178;
  uint uStack_174;
  int iStack_170;
  undefined4 uStack_16c;
  longlong *local_168;
  int local_160;
  int local_15c;
  longlong *local_158;
  int iStack_150;
  uint uStack_14c;
  uint *local_148;
  uint uStack_140;
  uint uStack_13c;
  undefined8 local_138;
  longlong *local_130;
  undefined8 uStack_128;
  uint *puStack_120;
  uint uStack_118;
  uint uStack_114;
  undefined8 uStack_110;
  undefined1 local_108 [192];
  undefined1 *local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  *(undefined4 *)(param_2 + 200) = 0;
  local_198 = param_3;
  if (0x7fffffff < *(uint *)(param_2 + 0xcc)) {
    FUN_140615c30(param_2,0);
  }
  plVar11 = (longlong *)0x0;
  uStack_184 = 1;
  local_190 = (longlong *)(param_1 + 0x2b0);
  local_168 = (longlong *)0x0;
  uVar1 = *(uint *)(param_1 + 0x2d8);
  puStack_180 = (uint *)(param_1 + 0x2c0);
  local_15c = 0;
  iVar13 = 0;
  local_188 = 0;
  uStack_174 = 0;
  iStack_170 = 0;
  if (uVar1 != 0) {
    puVar10 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar10 = puStack_180;
    }
    uVar12 = *puVar10;
    iStack_170 = 0;
    local_188 = 0;
    while (uVar12 == 0) {
      lVar7 = (longlong)local_188;
      iStack_170 = iStack_170 + 0x20;
      iVar5 = local_188 + 1;
      bVar3 = (int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_188;
      local_188 = iVar5;
      if (bVar3) goto LAB_1411c0dbf;
      uVar12 = puVar10[lVar7 + 1];
    }
    uStack_184 = uVar12 - 1 & uVar12 ^ uVar12;
    iVar5 = 0x1f;
    if (uStack_184 != 0) {
      for (; uStack_184 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_184 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uStack_174 = (iStack_170 - iVar5) + 0x1f;
    if ((int)uVar1 < (int)uStack_174) {
LAB_1411c0dbf:
      uStack_174 = uVar1;
    }
  }
  local_178 = 0xffffffff;
  uVar12 = *(uint *)(param_1 + 0x2d8);
  uStack_128 = CONCAT44(uStack_184,local_188);
  uStack_140 = 0xffffffff;
  uStack_13c = uStack_174;
  local_138 = CONCAT44(uStack_16c,iStack_170);
  uVar9 = uVar12 & 0xffffffe0;
  iStack_150 = local_188;
  uStack_14c = uStack_184;
  if (uVar12 != uVar1) {
    puVar10 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar10 = puStack_180;
    }
    uVar6 = puVar10[(int)uVar12 >> 5] & -1 << ((byte)uVar12 & 0x1f);
    iVar5 = (int)uVar12 >> 5;
    while (uVar6 == 0) {
      uVar9 = uVar9 + 0x20;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_1411c0e7f;
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
LAB_1411c0e7f:
      uVar12 = uVar1;
    }
  }
  iVar5 = 0;
  local_148 = puStack_180;
  local_130 = local_190;
  puStack_120 = puStack_180;
  uStack_110 = local_138;
  local_158 = local_190;
  uStack_118 = uStack_140;
  uStack_114 = uStack_13c;
  while( true ) {
    if ((uStack_13c == uVar12) && (local_148 == puStack_180)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((bVar3) && (local_158 == local_190)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) break;
    lVar7 = *(longlong *)(*local_158 + (longlong)(int)uStack_13c * 0x10);
    if (lVar7 != 0) {
      lVar4 = UAkAudioInputComponent::GetPrivateStaticClass();
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
        iVar2 = *(int *)(param_2 + 200);
        *(int *)(param_2 + 200) = iVar2 + 1;
        if (*(int *)(param_2 + 0xcc) < iVar2 + 1) {
          TArray<UHierarchicalInstancedStaticMeshComponent_*,TInlineAllocator<24,FDefaultAllocator>_>
          ::ResizeGrow(param_2,iVar2);
        }
        lVar4 = *(longlong *)(param_2 + 0xc0);
        if (*(longlong *)(param_2 + 0xc0) == 0) {
          lVar4 = param_2;
        }
        *(longlong *)(lVar4 + (longlong)iVar2 * 8) = lVar7;
      }
    }
    if ((local_198 != '\0') && (lVar7 != 0)) {
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
        local_160 = iVar13 + 1;
        if (iVar5 < local_160) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_168,iVar13);
          plVar11 = local_168;
          iVar5 = local_15c;
        }
        plVar11[iVar13] = lVar7;
        iVar13 = local_160;
      }
    }
    uStack_140 = uStack_140 & ~uStack_14c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_150);
  }
  if (local_198 != '\0') {
    uVar8 = 0;
    local_48 = (undefined1 *)0x0;
    local_40 = 0;
    uVar15 = (ulonglong)((longlong)(plVar11 + iVar13) + (7 - (longlong)plVar11)) >> 3;
    if (plVar11 + iVar13 < plVar11) {
      uVar15 = uVar8;
    }
    plVar14 = plVar11;
    if (uVar15 != 0) {
      do {
        if (*(longlong *)(*plVar14 + 0x2d8) != 0) {
          FUN_1411c0c90(*(longlong *)(*plVar14 + 0x2d8),local_108,1);
          iVar13 = (int)local_40;
          lVar7 = (longlong)(int)local_40;
          if ((int)local_40 != 0) {
            iVar5 = *(int *)(param_2 + 200);
            if (*(int *)(param_2 + 0xcc) < (int)local_40 + iVar5) {
              FUN_140615c30(param_2);
              iVar5 = *(int *)(param_2 + 200);
            }
            _Src = local_108;
            if (local_48 != (undefined1 *)0x0) {
              _Src = local_48;
            }
            lVar4 = *(longlong *)(param_2 + 0xc0);
            if (*(longlong *)(param_2 + 0xc0) == 0) {
              lVar4 = param_2;
            }
            _guard_xfg_dispatch_icall_nop((void *)(lVar4 + (longlong)iVar5 * 8),_Src,lVar7 << 3);
            *(int *)(param_2 + 200) = *(int *)(param_2 + 200) + iVar13;
            local_40 = local_40 & 0xffffffff00000000;
          }
        }
        uVar8 = uVar8 + 1;
        plVar14 = plVar14 + 1;
      } while (uVar8 != uVar15);
      if (local_48 != (undefined1 *)0x0) {
        FMemory::Free();
      }
    }
  }
  if (plVar11 != (longlong *)0x0) {
    FMemory::Free(plVar11);
  }
  return;
}



// FUNCTION 1411c1110 HeapSortInternal<`FSparseVoxelOctree::Raycast'::`2'::FTileIntersection,FIdentityFunctor,TDereferenceWrapper<`FSparseVoxelOctree::Raycast'::`2'::FTileIntersection,<lambda_059fd0e59990f30459835bdbca671ace>_>_> body=516 status=ok
// SIG undefined HeapSortInternal<`FSparseVoxelOctree::Raycast'::`2'::FTileIntersection,FIdentityFunctor,TDereferenceWrapper<`FSparseVoxelOctree::Raycast'::`2'::FTileIntersection,<lambda_059fd0e59990f30459835bdbca671ace>_>_>(void)

void AlgoImpl::
     HeapSortInternal<_FSparseVoxelOctree::Raycast_::_2_::FTileIntersection,FIdentityFunctor,TDereferenceWrapper<_FSparseVoxelOctree::Raycast_::_2_::FTileIntersection,<lambda_059fd0e59990f30459835bdbca671ace>_>_>
               (undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  undefined8 *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  
  iVar8 = (param_2 + -2) / 2;
  if (-1 < iVar8) {
    iVar11 = iVar8 * 2 + 1;
    iVar15 = iVar11;
    iVar16 = iVar8;
joined_r0x0001411c113a:
    do {
      if (iVar11 < param_2) {
        iVar13 = iVar8 * 2 + 1;
        iVar11 = iVar8 * 2 + 2;
        iVar14 = iVar13;
        if ((iVar11 < param_2) &&
           (iVar14 = iVar11,
           *(float *)(param_1 + (longlong)iVar11 * 6) <= *(float *)(param_1 + (longlong)iVar13 * 6)
           && *(float *)(param_1 + (longlong)iVar13 * 6) !=
              *(float *)(param_1 + (longlong)iVar11 * 6))) {
          iVar14 = iVar13;
        }
        pfVar10 = (float *)(param_1 + (longlong)iVar8 * 6);
        pfVar9 = (float *)(param_1 + (longlong)iVar14 * 6);
        if (*pfVar10 <= *pfVar9 && *pfVar9 != *pfVar10) {
          if (pfVar10 != pfVar9) {
            uVar1 = *(undefined8 *)(pfVar9 + 2);
            uVar2 = *(undefined8 *)pfVar10;
            uVar3 = *(undefined8 *)(pfVar10 + 2);
            uVar4 = *(undefined8 *)(pfVar10 + 4);
            uVar5 = *(undefined8 *)(pfVar10 + 6);
            uVar6 = *(undefined8 *)(pfVar10 + 8);
            uVar7 = *(undefined8 *)(pfVar10 + 10);
            *(undefined8 *)pfVar10 = *(undefined8 *)pfVar9;
            *(undefined8 *)(pfVar10 + 2) = uVar1;
            uVar1 = *(undefined8 *)(pfVar9 + 6);
            *(undefined8 *)(pfVar10 + 4) = *(undefined8 *)(pfVar9 + 4);
            *(undefined8 *)(pfVar10 + 6) = uVar1;
            uVar1 = *(undefined8 *)(pfVar9 + 10);
            *(undefined8 *)(pfVar10 + 8) = *(undefined8 *)(pfVar9 + 8);
            *(undefined8 *)(pfVar10 + 10) = uVar1;
            *(undefined8 *)pfVar9 = uVar2;
            *(undefined8 *)(pfVar9 + 2) = uVar3;
            *(undefined8 *)(pfVar9 + 4) = uVar4;
            *(undefined8 *)(pfVar9 + 6) = uVar5;
            *(undefined8 *)(pfVar9 + 8) = uVar6;
            *(undefined8 *)(pfVar9 + 10) = uVar7;
          }
          iVar11 = iVar14 * 2 + 1;
          iVar8 = iVar14;
          goto joined_r0x0001411c113a;
        }
      }
      iVar11 = iVar15 + -2;
      iVar8 = iVar16 + -1;
      iVar15 = iVar11;
      iVar16 = iVar8;
    } while (-1 < iVar8);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar12 = param_1 + (longlong)param_2 * 6;
    do {
      if (param_1 != puVar12) {
        uVar1 = puVar12[1];
        uVar2 = *param_1;
        uVar3 = param_1[1];
        uVar4 = param_1[2];
        uVar5 = param_1[3];
        uVar6 = param_1[4];
        uVar7 = param_1[5];
        *param_1 = *puVar12;
        param_1[1] = uVar1;
        uVar1 = puVar12[3];
        param_1[2] = puVar12[2];
        param_1[3] = uVar1;
        uVar1 = puVar12[5];
        param_1[4] = puVar12[4];
        param_1[5] = uVar1;
        *puVar12 = uVar2;
        puVar12[1] = uVar3;
        puVar12[2] = uVar4;
        puVar12[3] = uVar5;
        puVar12[4] = uVar6;
        puVar12[5] = uVar7;
      }
      iVar8 = 0;
      if (1 < param_2) {
        do {
          iVar11 = iVar8 * 2 + 1;
          iVar16 = iVar8 * 2 + 2;
          iVar15 = iVar11;
          if ((iVar16 < param_2) &&
             (iVar15 = iVar16,
             *(float *)(param_1 + (longlong)iVar16 * 6) <=
             *(float *)(param_1 + (longlong)iVar11 * 6) &&
             *(float *)(param_1 + (longlong)iVar11 * 6) !=
             *(float *)(param_1 + (longlong)iVar16 * 6))) {
            iVar15 = iVar11;
          }
          pfVar10 = (float *)(param_1 + (longlong)iVar8 * 6);
          pfVar9 = (float *)(param_1 + (longlong)iVar15 * 6);
          if (*pfVar9 < *pfVar10 || *pfVar9 == *pfVar10) break;
          if (pfVar10 != pfVar9) {
            uVar1 = *(undefined8 *)(pfVar9 + 2);
            uVar2 = *(undefined8 *)pfVar10;
            uVar3 = *(undefined8 *)(pfVar10 + 2);
            uVar4 = *(undefined8 *)(pfVar10 + 4);
            uVar5 = *(undefined8 *)(pfVar10 + 6);
            uVar6 = *(undefined8 *)(pfVar10 + 8);
            uVar7 = *(undefined8 *)(pfVar10 + 10);
            *(undefined8 *)pfVar10 = *(undefined8 *)pfVar9;
            *(undefined8 *)(pfVar10 + 2) = uVar1;
            uVar1 = *(undefined8 *)(pfVar9 + 6);
            *(undefined8 *)(pfVar10 + 4) = *(undefined8 *)(pfVar9 + 4);
            *(undefined8 *)(pfVar10 + 6) = uVar1;
            uVar1 = *(undefined8 *)(pfVar9 + 10);
            *(undefined8 *)(pfVar10 + 8) = *(undefined8 *)(pfVar9 + 8);
            *(undefined8 *)(pfVar10 + 10) = uVar1;
            *(undefined8 *)pfVar9 = uVar2;
            *(undefined8 *)(pfVar9 + 2) = uVar3;
            *(undefined8 *)(pfVar9 + 4) = uVar4;
            *(undefined8 *)(pfVar9 + 6) = uVar5;
            *(undefined8 *)(pfVar9 + 8) = uVar6;
            *(undefined8 *)(pfVar9 + 10) = uVar7;
          }
          iVar8 = iVar15;
        } while (iVar15 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar12 = puVar12 + -6;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 1411c1320 FUN_1411c1320 body=1675 status=ok
// SIG undefined FUN_1411c1320(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411c1320(undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined1 auStack_1f8 [32];
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  iVar6 = (param_2 + -2) / 2;
  if (-1 < iVar6) {
    iVar8 = iVar6 * 2 + 1;
    iVar1 = iVar8;
    iVar11 = iVar6;
joined_r0x0001411c1376:
    do {
      if (iVar8 < param_2) {
        iVar8 = iVar6 * 2;
        iVar7 = iVar8 + 1;
        if (iVar8 + 2 < param_2) {
          cVar5 = FUN_1411d10c0(param_4,param_1 + (longlong)(iVar8 + 2) * 0x18,
                                param_1 + (longlong)iVar7 * 0x18);
          if (cVar5 != '\0') {
            iVar7 = iVar8;
          }
          iVar7 = iVar7 + 1;
        }
        puVar9 = param_1 + (longlong)iVar7 * 0x18;
        puVar12 = param_1 + (longlong)iVar6 * 0x18;
        cVar5 = FUN_1411d10c0(param_4,puVar12,puVar9);
        if (cVar5 != '\0') {
          if (puVar12 != puVar9) {
            local_1d8 = *puVar12;
            uStack_1d0 = puVar12[1];
            local_1c8 = puVar12[2];
            uStack_1c0 = puVar12[3];
            local_1b8 = puVar12[4];
            uStack_1b0 = puVar12[5];
            local_1a8 = puVar12[6];
            uStack_1a0 = puVar12[7];
            local_198 = puVar12[8];
            uStack_190 = puVar12[9];
            local_188 = puVar12[10];
            uStack_180 = puVar12[0xb];
            local_178 = puVar12[0xc];
            uStack_170 = puVar12[0xd];
            local_168 = puVar12[0xe];
            uStack_160 = puVar12[0xf];
            local_158 = puVar12[0x10];
            uStack_150 = puVar12[0x11];
            local_148 = puVar12[0x12];
            uStack_140 = puVar12[0x13];
            uVar2 = puVar12[0x14];
            uVar3 = puVar12[0x15];
            local_128 = puVar12[0x16];
            uStack_120 = puVar12[0x17];
            uVar4 = puVar9[1];
            *puVar12 = *puVar9;
            puVar12[1] = uVar4;
            uVar4 = puVar9[3];
            puVar12[2] = puVar9[2];
            puVar12[3] = uVar4;
            uVar4 = puVar9[5];
            puVar12[4] = puVar9[4];
            puVar12[5] = uVar4;
            uVar4 = puVar9[7];
            puVar12[6] = puVar9[6];
            puVar12[7] = uVar4;
            uVar4 = puVar9[9];
            puVar12[8] = puVar9[8];
            puVar12[9] = uVar4;
            uVar4 = puVar9[0xb];
            puVar12[10] = puVar9[10];
            puVar12[0xb] = uVar4;
            uVar4 = puVar9[0xd];
            puVar12[0xc] = puVar9[0xc];
            puVar12[0xd] = uVar4;
            uVar4 = puVar9[0xf];
            puVar12[0xe] = puVar9[0xe];
            puVar12[0xf] = uVar4;
            uVar4 = puVar9[0x11];
            puVar12[0x10] = puVar9[0x10];
            puVar12[0x11] = uVar4;
            uVar4 = puVar9[0x13];
            puVar12[0x12] = puVar9[0x12];
            puVar12[0x13] = uVar4;
            uVar4 = puVar9[0x15];
            puVar12[0x14] = puVar9[0x14];
            puVar12[0x15] = uVar4;
            uVar4 = puVar9[0x17];
            puVar12[0x16] = puVar9[0x16];
            puVar12[0x17] = uVar4;
            *puVar9 = local_1d8;
            puVar9[1] = uStack_1d0;
            puVar9[2] = local_1c8;
            puVar9[3] = uStack_1c0;
            puVar9[4] = local_1b8;
            puVar9[5] = uStack_1b0;
            puVar9[6] = local_1a8;
            puVar9[7] = uStack_1a0;
            puVar9[8] = local_198;
            puVar9[9] = uStack_190;
            puVar9[10] = local_188;
            puVar9[0xb] = uStack_180;
            puVar9[0xc] = local_178;
            puVar9[0xd] = uStack_170;
            puVar9[0xe] = local_168;
            puVar9[0xf] = uStack_160;
            puVar9[0x10] = local_158;
            puVar9[0x11] = uStack_150;
            local_138._0_4_ = (undefined4)uVar2;
            local_138._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
            uStack_130._0_4_ = (undefined4)uVar3;
            uStack_130._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
            puVar9[0x12] = local_148;
            puVar9[0x13] = uStack_140;
            *(undefined4 *)(puVar9 + 0x14) = (undefined4)local_138;
            *(undefined4 *)((longlong)puVar9 + 0xa4) = local_138._4_4_;
            *(undefined4 *)(puVar9 + 0x15) = (undefined4)uStack_130;
            *(undefined4 *)((longlong)puVar9 + 0xac) = uStack_130._4_4_;
            puVar9[0x16] = local_128;
            puVar9[0x17] = uStack_120;
            local_138 = uVar2;
            uStack_130 = uVar3;
          }
          iVar8 = iVar7 * 2 + 1;
          iVar6 = iVar7;
          goto joined_r0x0001411c1376;
        }
      }
      iVar8 = iVar1 + -2;
      iVar6 = iVar11 + -1;
      iVar1 = iVar8;
      iVar11 = iVar6;
    } while (-1 < iVar6);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar12 = param_1 + (longlong)param_2 * 0x18;
    do {
      if (param_1 != puVar12) {
        local_1d8 = *param_1;
        uStack_1d0 = param_1[1];
        local_1c8 = param_1[2];
        uStack_1c0 = param_1[3];
        local_1b8 = param_1[4];
        uStack_1b0 = param_1[5];
        local_1a8 = param_1[6];
        uStack_1a0 = param_1[7];
        local_198 = param_1[8];
        uStack_190 = param_1[9];
        local_188 = param_1[10];
        uStack_180 = param_1[0xb];
        local_178 = param_1[0xc];
        uStack_170 = param_1[0xd];
        local_168 = param_1[0xe];
        uStack_160 = param_1[0xf];
        local_158 = param_1[0x10];
        uStack_150 = param_1[0x11];
        local_148 = param_1[0x12];
        uStack_140 = param_1[0x13];
        uVar2 = param_1[0x14];
        uVar3 = param_1[0x15];
        local_128 = param_1[0x16];
        uStack_120 = param_1[0x17];
        uVar4 = puVar12[1];
        *param_1 = *puVar12;
        param_1[1] = uVar4;
        uVar4 = puVar12[3];
        param_1[2] = puVar12[2];
        param_1[3] = uVar4;
        uVar4 = puVar12[5];
        param_1[4] = puVar12[4];
        param_1[5] = uVar4;
        uVar4 = puVar12[7];
        param_1[6] = puVar12[6];
        param_1[7] = uVar4;
        uVar4 = puVar12[9];
        param_1[8] = puVar12[8];
        param_1[9] = uVar4;
        uVar4 = puVar12[0xb];
        param_1[10] = puVar12[10];
        param_1[0xb] = uVar4;
        uVar4 = puVar12[0xd];
        param_1[0xc] = puVar12[0xc];
        param_1[0xd] = uVar4;
        uVar4 = puVar12[0xf];
        param_1[0xe] = puVar12[0xe];
        param_1[0xf] = uVar4;
        uVar4 = puVar12[0x11];
        param_1[0x10] = puVar12[0x10];
        param_1[0x11] = uVar4;
        uVar4 = puVar12[0x13];
        param_1[0x12] = puVar12[0x12];
        param_1[0x13] = uVar4;
        uVar4 = puVar12[0x15];
        param_1[0x14] = puVar12[0x14];
        param_1[0x15] = uVar4;
        uVar4 = puVar12[0x17];
        param_1[0x16] = puVar12[0x16];
        param_1[0x17] = uVar4;
        *puVar12 = local_1d8;
        puVar12[1] = uStack_1d0;
        puVar12[2] = local_1c8;
        puVar12[3] = uStack_1c0;
        puVar12[4] = local_1b8;
        puVar12[5] = uStack_1b0;
        puVar12[6] = local_1a8;
        puVar12[7] = uStack_1a0;
        puVar12[8] = local_198;
        puVar12[9] = uStack_190;
        puVar12[10] = local_188;
        puVar12[0xb] = uStack_180;
        puVar12[0xc] = local_178;
        puVar12[0xd] = uStack_170;
        puVar12[0xe] = local_168;
        puVar12[0xf] = uStack_160;
        puVar12[0x10] = local_158;
        puVar12[0x11] = uStack_150;
        local_138._0_4_ = (undefined4)uVar2;
        local_138._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
        uStack_130._0_4_ = (undefined4)uVar3;
        uStack_130._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
        puVar12[0x12] = local_148;
        puVar12[0x13] = uStack_140;
        *(undefined4 *)(puVar12 + 0x14) = (undefined4)local_138;
        *(undefined4 *)((longlong)puVar12 + 0xa4) = local_138._4_4_;
        *(undefined4 *)(puVar12 + 0x15) = (undefined4)uStack_130;
        *(undefined4 *)((longlong)puVar12 + 0xac) = uStack_130._4_4_;
        puVar12[0x16] = local_128;
        puVar12[0x17] = uStack_120;
        local_138 = uVar2;
        uStack_130 = uVar3;
      }
      iVar6 = 0;
      if (1 < param_2) {
        do {
          iVar1 = iVar6 * 2;
          iVar8 = iVar1 + 1;
          if (iVar1 + 2 < param_2) {
            cVar5 = FUN_1411d10c0(param_4,param_1 + (longlong)(iVar1 + 2) * 0x18,
                                  param_1 + (longlong)iVar8 * 0x18);
            if (cVar5 != '\0') {
              iVar8 = iVar1;
            }
            iVar8 = iVar8 + 1;
          }
          puVar10 = param_1 + (longlong)iVar8 * 0x18;
          puVar9 = param_1 + (longlong)iVar6 * 0x18;
          cVar5 = FUN_1411d10c0(param_4,puVar9,puVar10);
          if (cVar5 == '\0') break;
          if (puVar9 != puVar10) {
            local_118 = *puVar9;
            uStack_110 = puVar9[1];
            local_108 = puVar9[2];
            uStack_100 = puVar9[3];
            local_f8 = puVar9[4];
            uStack_f0 = puVar9[5];
            local_e8 = puVar9[6];
            uStack_e0 = puVar9[7];
            local_d8 = puVar9[8];
            uStack_d0 = puVar9[9];
            local_c8 = puVar9[10];
            uStack_c0 = puVar9[0xb];
            local_b8 = puVar9[0xc];
            uStack_b0 = puVar9[0xd];
            local_a8 = puVar9[0xe];
            uStack_a0 = puVar9[0xf];
            local_98 = puVar9[0x10];
            uStack_90 = puVar9[0x11];
            local_88 = puVar9[0x12];
            uStack_80 = puVar9[0x13];
            uVar2 = puVar9[0x14];
            uVar3 = puVar9[0x15];
            local_68 = puVar9[0x16];
            uStack_60 = puVar9[0x17];
            uVar4 = puVar10[1];
            *puVar9 = *puVar10;
            puVar9[1] = uVar4;
            uVar4 = puVar10[3];
            puVar9[2] = puVar10[2];
            puVar9[3] = uVar4;
            uVar4 = puVar10[5];
            puVar9[4] = puVar10[4];
            puVar9[5] = uVar4;
            uVar4 = puVar10[7];
            puVar9[6] = puVar10[6];
            puVar9[7] = uVar4;
            uVar4 = puVar10[9];
            puVar9[8] = puVar10[8];
            puVar9[9] = uVar4;
            uVar4 = puVar10[0xb];
            puVar9[10] = puVar10[10];
            puVar9[0xb] = uVar4;
            uVar4 = puVar10[0xd];
            puVar9[0xc] = puVar10[0xc];
            puVar9[0xd] = uVar4;
            uVar4 = puVar10[0xf];
            puVar9[0xe] = puVar10[0xe];
            puVar9[0xf] = uVar4;
            uVar4 = puVar10[0x11];
            puVar9[0x10] = puVar10[0x10];
            puVar9[0x11] = uVar4;
            uVar4 = puVar10[0x13];
            puVar9[0x12] = puVar10[0x12];
            puVar9[0x13] = uVar4;
            uVar4 = puVar10[0x15];
            puVar9[0x14] = puVar10[0x14];
            puVar9[0x15] = uVar4;
            uVar4 = puVar10[0x17];
            puVar9[0x16] = puVar10[0x16];
            puVar9[0x17] = uVar4;
            *puVar10 = local_118;
            puVar10[1] = uStack_110;
            puVar10[2] = local_108;
            puVar10[3] = uStack_100;
            puVar10[4] = local_f8;
            puVar10[5] = uStack_f0;
            puVar10[6] = local_e8;
            puVar10[7] = uStack_e0;
            puVar10[8] = local_d8;
            puVar10[9] = uStack_d0;
            puVar10[10] = local_c8;
            puVar10[0xb] = uStack_c0;
            puVar10[0xc] = local_b8;
            puVar10[0xd] = uStack_b0;
            puVar10[0xe] = local_a8;
            puVar10[0xf] = uStack_a0;
            puVar10[0x10] = local_98;
            puVar10[0x11] = uStack_90;
            local_78._0_4_ = (undefined4)uVar2;
            local_78._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
            uStack_70._0_4_ = (undefined4)uVar3;
            uStack_70._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
            puVar10[0x12] = local_88;
            puVar10[0x13] = uStack_80;
            *(undefined4 *)(puVar10 + 0x14) = (undefined4)local_78;
            *(undefined4 *)((longlong)puVar10 + 0xa4) = local_78._4_4_;
            *(undefined4 *)(puVar10 + 0x15) = (undefined4)uStack_70;
            *(undefined4 *)((longlong)puVar10 + 0xac) = uStack_70._4_4_;
            puVar10[0x16] = local_68;
            puVar10[0x17] = uStack_60;
            local_78 = uVar2;
            uStack_70 = uVar3;
          }
          iVar6 = iVar8;
        } while (iVar8 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar12 = puVar12 + -0x18;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 1411c19b0 FUN_1411c19b0 body=1451 status=ok
// SIG undefined FUN_1411c19b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411c19b0(undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  longlong lVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  int iVar20;
  undefined8 *puVar21;
  undefined1 auStack_288 [32];
  undefined8 local_268 [34];
  undefined8 local_158 [34];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_288;
  iVar10 = (param_2 + -2) / 2;
  if (-1 < iVar10) {
    iVar11 = iVar10 * 2 + 1;
    iVar1 = iVar11;
    iVar20 = iVar10;
joined_r0x0001411c1a06:
    do {
      if (iVar11 < param_2) {
        iVar11 = iVar10 * 2;
        iVar17 = iVar11 + 1;
        if (iVar11 + 2 < param_2) {
          cVar9 = FUN_1411cc780(param_4,param_1 + (longlong)(iVar11 + 2) * 0x22,
                                param_1 + (longlong)iVar17 * 0x22);
          if (cVar9 != '\0') {
            iVar17 = iVar11;
          }
          iVar17 = iVar17 + 1;
        }
        puVar21 = param_1 + (longlong)iVar17 * 0x22;
        puVar18 = param_1 + (longlong)iVar10 * 0x22;
        cVar9 = FUN_1411cc780(param_4,puVar18,puVar21);
        if (cVar9 != '\0') {
          if (puVar18 != puVar21) {
            lVar16 = 2;
            puVar19 = local_268;
            puVar14 = puVar18;
            do {
              puVar12 = puVar14;
              puVar13 = puVar19;
              uVar5 = puVar12[1];
              uVar6 = puVar12[2];
              uVar7 = puVar12[3];
              *puVar13 = *puVar12;
              puVar13[1] = uVar5;
              uVar5 = puVar12[4];
              uVar8 = puVar12[5];
              puVar13[2] = uVar6;
              puVar13[3] = uVar7;
              uVar6 = puVar12[6];
              uVar7 = puVar12[7];
              puVar13[4] = uVar5;
              puVar13[5] = uVar8;
              uVar5 = puVar12[8];
              uVar8 = puVar12[9];
              puVar13[6] = uVar6;
              puVar13[7] = uVar7;
              uVar6 = puVar12[10];
              uVar7 = puVar12[0xb];
              puVar13[8] = uVar5;
              puVar13[9] = uVar8;
              uVar5 = puVar12[0xc];
              uVar8 = puVar12[0xd];
              puVar13[10] = uVar6;
              puVar13[0xb] = uVar7;
              uVar6 = puVar12[0xe];
              uVar7 = puVar12[0xf];
              puVar13[0xc] = uVar5;
              puVar13[0xd] = uVar8;
              puVar13[0xe] = uVar6;
              puVar13[0xf] = uVar7;
              lVar16 = lVar16 + -1;
              puVar19 = puVar13 + 0x10;
              puVar14 = puVar12 + 0x10;
            } while (lVar16 != 0);
            uVar5 = puVar12[0x11];
            lVar16 = 2;
            puVar13[0x10] = puVar12[0x10];
            puVar13[0x11] = uVar5;
            puVar19 = puVar21;
            do {
              puVar13 = puVar18;
              puVar14 = puVar19;
              uVar5 = puVar14[1];
              *puVar13 = *puVar14;
              puVar13[1] = uVar5;
              uVar5 = puVar14[3];
              puVar13[2] = puVar14[2];
              puVar13[3] = uVar5;
              uVar5 = puVar14[5];
              puVar13[4] = puVar14[4];
              puVar13[5] = uVar5;
              uVar5 = puVar14[7];
              puVar13[6] = puVar14[6];
              puVar13[7] = uVar5;
              uVar5 = puVar14[9];
              puVar13[8] = puVar14[8];
              puVar13[9] = uVar5;
              uVar5 = puVar14[0xb];
              puVar13[10] = puVar14[10];
              puVar13[0xb] = uVar5;
              uVar5 = puVar14[0xd];
              puVar13[0xc] = puVar14[0xc];
              puVar13[0xd] = uVar5;
              uVar5 = puVar14[0xf];
              puVar13[0xe] = puVar14[0xe];
              puVar13[0xf] = uVar5;
              lVar16 = lVar16 + -1;
              puVar19 = puVar14 + 0x10;
              puVar18 = puVar13 + 0x10;
            } while (lVar16 != 0);
            uVar5 = puVar14[0x11];
            lVar16 = 2;
            puVar13[0x10] = puVar14[0x10];
            puVar13[0x11] = uVar5;
            puVar18 = local_268;
            do {
              puVar14 = puVar21;
              puVar19 = puVar18;
              uVar5 = puVar19[1];
              uVar6 = puVar19[2];
              uVar7 = puVar19[3];
              *puVar14 = *puVar19;
              puVar14[1] = uVar5;
              uVar5 = puVar19[4];
              uVar8 = puVar19[5];
              puVar14[2] = uVar6;
              puVar14[3] = uVar7;
              uVar6 = puVar19[6];
              uVar7 = puVar19[7];
              puVar14[4] = uVar5;
              puVar14[5] = uVar8;
              uVar5 = puVar19[8];
              uVar8 = puVar19[9];
              puVar14[6] = uVar6;
              puVar14[7] = uVar7;
              uVar6 = puVar19[10];
              uVar7 = puVar19[0xb];
              puVar14[8] = uVar5;
              puVar14[9] = uVar8;
              uVar5 = puVar19[0xc];
              uVar8 = puVar19[0xd];
              puVar14[10] = uVar6;
              puVar14[0xb] = uVar7;
              uVar6 = puVar19[0xe];
              uVar7 = puVar19[0xf];
              puVar14[0xc] = uVar5;
              puVar14[0xd] = uVar8;
              puVar14[0xe] = uVar6;
              puVar14[0xf] = uVar7;
              lVar16 = lVar16 + -1;
              puVar18 = puVar19 + 0x10;
              puVar21 = puVar14 + 0x10;
            } while (lVar16 != 0);
            uVar2 = *(undefined4 *)((longlong)puVar19 + 0x84);
            uVar3 = *(undefined4 *)(puVar19 + 0x11);
            uVar4 = *(undefined4 *)((longlong)puVar19 + 0x8c);
            *(undefined4 *)(puVar14 + 0x10) = *(undefined4 *)(puVar19 + 0x10);
            *(undefined4 *)((longlong)puVar14 + 0x84) = uVar2;
            *(undefined4 *)(puVar14 + 0x11) = uVar3;
            *(undefined4 *)((longlong)puVar14 + 0x8c) = uVar4;
          }
          iVar11 = iVar17 * 2 + 1;
          iVar10 = iVar17;
          goto joined_r0x0001411c1a06;
        }
      }
      iVar11 = iVar1 + -2;
      iVar10 = iVar20 + -1;
      iVar1 = iVar11;
      iVar20 = iVar10;
    } while (-1 < iVar10);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar21 = param_1 + (longlong)param_2 * 0x22;
    do {
      if (param_1 != puVar21) {
        lVar16 = 2;
        puVar18 = local_268;
        puVar19 = param_1;
        do {
          puVar13 = puVar19;
          puVar14 = puVar18;
          uVar5 = puVar13[1];
          uVar6 = puVar13[2];
          uVar7 = puVar13[3];
          *puVar14 = *puVar13;
          puVar14[1] = uVar5;
          uVar5 = puVar13[4];
          uVar8 = puVar13[5];
          puVar14[2] = uVar6;
          puVar14[3] = uVar7;
          uVar6 = puVar13[6];
          uVar7 = puVar13[7];
          puVar14[4] = uVar5;
          puVar14[5] = uVar8;
          uVar5 = puVar13[8];
          uVar8 = puVar13[9];
          puVar14[6] = uVar6;
          puVar14[7] = uVar7;
          uVar6 = puVar13[10];
          uVar7 = puVar13[0xb];
          puVar14[8] = uVar5;
          puVar14[9] = uVar8;
          uVar5 = puVar13[0xc];
          uVar8 = puVar13[0xd];
          puVar14[10] = uVar6;
          puVar14[0xb] = uVar7;
          uVar6 = puVar13[0xe];
          uVar7 = puVar13[0xf];
          puVar14[0xc] = uVar5;
          puVar14[0xd] = uVar8;
          puVar14[0xe] = uVar6;
          puVar14[0xf] = uVar7;
          lVar16 = lVar16 + -1;
          puVar18 = puVar14 + 0x10;
          puVar19 = puVar13 + 0x10;
        } while (lVar16 != 0);
        uVar5 = puVar13[0x11];
        lVar16 = 2;
        puVar14[0x10] = puVar13[0x10];
        puVar14[0x11] = uVar5;
        puVar18 = param_1;
        puVar19 = puVar21;
        do {
          puVar13 = puVar19;
          puVar14 = puVar18;
          uVar5 = puVar13[1];
          *puVar14 = *puVar13;
          puVar14[1] = uVar5;
          uVar5 = puVar13[3];
          puVar14[2] = puVar13[2];
          puVar14[3] = uVar5;
          uVar5 = puVar13[5];
          puVar14[4] = puVar13[4];
          puVar14[5] = uVar5;
          uVar5 = puVar13[7];
          puVar14[6] = puVar13[6];
          puVar14[7] = uVar5;
          uVar5 = puVar13[9];
          puVar14[8] = puVar13[8];
          puVar14[9] = uVar5;
          uVar5 = puVar13[0xb];
          puVar14[10] = puVar13[10];
          puVar14[0xb] = uVar5;
          uVar5 = puVar13[0xd];
          puVar14[0xc] = puVar13[0xc];
          puVar14[0xd] = uVar5;
          uVar5 = puVar13[0xf];
          puVar14[0xe] = puVar13[0xe];
          puVar14[0xf] = uVar5;
          lVar16 = lVar16 + -1;
          puVar18 = puVar14 + 0x10;
          puVar19 = puVar13 + 0x10;
        } while (lVar16 != 0);
        uVar5 = puVar13[0x11];
        lVar16 = 2;
        puVar14[0x10] = puVar13[0x10];
        puVar14[0x11] = uVar5;
        puVar18 = puVar21;
        puVar19 = local_268;
        do {
          puVar13 = puVar19;
          puVar14 = puVar18;
          uVar5 = puVar13[1];
          uVar6 = puVar13[2];
          uVar7 = puVar13[3];
          *puVar14 = *puVar13;
          puVar14[1] = uVar5;
          uVar5 = puVar13[4];
          uVar8 = puVar13[5];
          puVar14[2] = uVar6;
          puVar14[3] = uVar7;
          uVar6 = puVar13[6];
          uVar7 = puVar13[7];
          puVar14[4] = uVar5;
          puVar14[5] = uVar8;
          uVar5 = puVar13[8];
          uVar8 = puVar13[9];
          puVar14[6] = uVar6;
          puVar14[7] = uVar7;
          uVar6 = puVar13[10];
          uVar7 = puVar13[0xb];
          puVar14[8] = uVar5;
          puVar14[9] = uVar8;
          uVar5 = puVar13[0xc];
          uVar8 = puVar13[0xd];
          puVar14[10] = uVar6;
          puVar14[0xb] = uVar7;
          uVar6 = puVar13[0xe];
          uVar7 = puVar13[0xf];
          puVar14[0xc] = uVar5;
          puVar14[0xd] = uVar8;
          puVar14[0xe] = uVar6;
          puVar14[0xf] = uVar7;
          lVar16 = lVar16 + -1;
          puVar18 = puVar14 + 0x10;
          puVar19 = puVar13 + 0x10;
        } while (lVar16 != 0);
        uVar2 = *(undefined4 *)((longlong)puVar13 + 0x84);
        uVar3 = *(undefined4 *)(puVar13 + 0x11);
        uVar4 = *(undefined4 *)((longlong)puVar13 + 0x8c);
        *(undefined4 *)(puVar14 + 0x10) = *(undefined4 *)(puVar13 + 0x10);
        *(undefined4 *)((longlong)puVar14 + 0x84) = uVar2;
        *(undefined4 *)(puVar14 + 0x11) = uVar3;
        *(undefined4 *)((longlong)puVar14 + 0x8c) = uVar4;
      }
      iVar10 = 0;
      if (1 < param_2) {
        do {
          iVar1 = iVar10 * 2;
          iVar11 = iVar1 + 1;
          if (iVar1 + 2 < param_2) {
            cVar9 = FUN_1411cc780(param_4,param_1 + (longlong)(iVar1 + 2) * 0x22,
                                  param_1 + (longlong)iVar11 * 0x22);
            if (cVar9 != '\0') {
              iVar11 = iVar1;
            }
            iVar11 = iVar11 + 1;
          }
          puVar18 = param_1 + (longlong)iVar11 * 0x22;
          puVar19 = param_1 + (longlong)iVar10 * 0x22;
          cVar9 = FUN_1411cc780(param_4,puVar19,puVar18);
          if (cVar9 == '\0') break;
          if (puVar19 != puVar18) {
            lVar16 = 2;
            puVar14 = local_158;
            puVar13 = puVar19;
            do {
              puVar15 = puVar13;
              puVar12 = puVar14;
              uVar5 = puVar15[1];
              uVar6 = puVar15[2];
              uVar7 = puVar15[3];
              *puVar12 = *puVar15;
              puVar12[1] = uVar5;
              uVar5 = puVar15[4];
              uVar8 = puVar15[5];
              puVar12[2] = uVar6;
              puVar12[3] = uVar7;
              uVar6 = puVar15[6];
              uVar7 = puVar15[7];
              puVar12[4] = uVar5;
              puVar12[5] = uVar8;
              uVar5 = puVar15[8];
              uVar8 = puVar15[9];
              puVar12[6] = uVar6;
              puVar12[7] = uVar7;
              uVar6 = puVar15[10];
              uVar7 = puVar15[0xb];
              puVar12[8] = uVar5;
              puVar12[9] = uVar8;
              uVar5 = puVar15[0xc];
              uVar8 = puVar15[0xd];
              puVar12[10] = uVar6;
              puVar12[0xb] = uVar7;
              uVar6 = puVar15[0xe];
              uVar7 = puVar15[0xf];
              puVar12[0xc] = uVar5;
              puVar12[0xd] = uVar8;
              puVar12[0xe] = uVar6;
              puVar12[0xf] = uVar7;
              lVar16 = lVar16 + -1;
              puVar14 = puVar12 + 0x10;
              puVar13 = puVar15 + 0x10;
            } while (lVar16 != 0);
            uVar5 = puVar15[0x11];
            lVar16 = 2;
            puVar12[0x10] = puVar15[0x10];
            puVar12[0x11] = uVar5;
            puVar14 = puVar18;
            do {
              puVar12 = puVar19;
              puVar13 = puVar14;
              uVar5 = puVar13[1];
              *puVar12 = *puVar13;
              puVar12[1] = uVar5;
              uVar5 = puVar13[3];
              puVar12[2] = puVar13[2];
              puVar12[3] = uVar5;
              uVar5 = puVar13[5];
              puVar12[4] = puVar13[4];
              puVar12[5] = uVar5;
              uVar5 = puVar13[7];
              puVar12[6] = puVar13[6];
              puVar12[7] = uVar5;
              uVar5 = puVar13[9];
              puVar12[8] = puVar13[8];
              puVar12[9] = uVar5;
              uVar5 = puVar13[0xb];
              puVar12[10] = puVar13[10];
              puVar12[0xb] = uVar5;
              uVar5 = puVar13[0xd];
              puVar12[0xc] = puVar13[0xc];
              puVar12[0xd] = uVar5;
              uVar5 = puVar13[0xf];
              puVar12[0xe] = puVar13[0xe];
              puVar12[0xf] = uVar5;
              lVar16 = lVar16 + -1;
              puVar14 = puVar13 + 0x10;
              puVar19 = puVar12 + 0x10;
            } while (lVar16 != 0);
            uVar5 = puVar13[0x11];
            lVar16 = 2;
            puVar12[0x10] = puVar13[0x10];
            puVar12[0x11] = uVar5;
            puVar19 = local_158;
            do {
              puVar13 = puVar18;
              puVar14 = puVar19;
              uVar5 = puVar14[1];
              uVar6 = puVar14[2];
              uVar7 = puVar14[3];
              *puVar13 = *puVar14;
              puVar13[1] = uVar5;
              uVar5 = puVar14[4];
              uVar8 = puVar14[5];
              puVar13[2] = uVar6;
              puVar13[3] = uVar7;
              uVar6 = puVar14[6];
              uVar7 = puVar14[7];
              puVar13[4] = uVar5;
              puVar13[5] = uVar8;
              uVar5 = puVar14[8];
              uVar8 = puVar14[9];
              puVar13[6] = uVar6;
              puVar13[7] = uVar7;
              uVar6 = puVar14[10];
              uVar7 = puVar14[0xb];
              puVar13[8] = uVar5;
              puVar13[9] = uVar8;
              uVar5 = puVar14[0xc];
              uVar8 = puVar14[0xd];
              puVar13[10] = uVar6;
              puVar13[0xb] = uVar7;
              uVar6 = puVar14[0xe];
              uVar7 = puVar14[0xf];
              puVar13[0xc] = uVar5;
              puVar13[0xd] = uVar8;
              puVar13[0xe] = uVar6;
              puVar13[0xf] = uVar7;
              lVar16 = lVar16 + -1;
              puVar19 = puVar14 + 0x10;
              puVar18 = puVar13 + 0x10;
            } while (lVar16 != 0);
            uVar2 = *(undefined4 *)((longlong)puVar14 + 0x84);
            uVar3 = *(undefined4 *)(puVar14 + 0x11);
            uVar4 = *(undefined4 *)((longlong)puVar14 + 0x8c);
            *(undefined4 *)(puVar13 + 0x10) = *(undefined4 *)(puVar14 + 0x10);
            *(undefined4 *)((longlong)puVar13 + 0x84) = uVar2;
            *(undefined4 *)(puVar13 + 0x11) = uVar3;
            *(undefined4 *)((longlong)puVar13 + 0x8c) = uVar4;
          }
          iVar10 = iVar11;
        } while (iVar11 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar21 = puVar21 + -0x22;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 1411c1f60 FUN_1411c1f60 body=1659 status=ok
// SIG undefined FUN_1411c1f60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411c1f60(undefined8 *param_1,int param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  longlong lVar18;
  undefined8 *puVar19;
  int iVar20;
  undefined8 *puVar21;
  bool bVar22;
  undefined1 auStack_288 [32];
  undefined8 local_268 [34];
  undefined8 local_158 [34];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_288;
  iVar9 = (param_2 + -2) / 2;
  if (-1 < iVar9) {
    iVar11 = iVar9 * 2 + 1;
    iVar1 = iVar11;
    iVar12 = iVar9;
joined_r0x0001411c1fb6:
    do {
      if (iVar11 < param_2) {
        iVar11 = iVar9 * 2;
        iVar20 = iVar11 + 1;
        if (iVar11 + 2 < param_2) {
          puVar21 = param_1 + ((longlong)iVar11 + 2) * 0x22;
          puVar17 = param_1 + (longlong)iVar20 * 0x22;
          if ((**(char **)(param_4 + 8) == '\0') ||
             (*(char *)(puVar21 + 0xb) == *(char *)(puVar17 + 0xb))) {
            if (*(int *)(puVar21 + 0x12) == *(int *)(puVar17 + 0x12)) {
              iVar10 = FText::CompareTo(puVar21,puVar17,0);
              bVar22 = iVar10 < 0;
            }
            else {
              bVar22 = *(int *)(puVar17 + 0x12) <= *(int *)(puVar21 + 0x12);
            }
          }
          else {
            bVar22 = *(char *)(puVar21 + 0xb) == '\0';
          }
          if (bVar22) {
            iVar20 = iVar11;
          }
          iVar20 = iVar20 + 1;
        }
        puVar17 = param_1 + (longlong)iVar9 * 0x22;
        puVar21 = param_1 + (longlong)iVar20 * 0x22;
        if ((**(char **)(param_4 + 8) == '\0') ||
           (*(char *)(puVar17 + 0xb) == *(char *)(puVar21 + 0xb))) {
          if (*(int *)(puVar17 + 0x12) == *(int *)(puVar21 + 0x12)) {
            iVar9 = FText::CompareTo(puVar17,puVar21,0);
            bVar22 = iVar9 < 0;
          }
          else {
            bVar22 = *(int *)(puVar21 + 0x12) <= *(int *)(puVar17 + 0x12);
          }
        }
        else {
          bVar22 = *(char *)(puVar17 + 0xb) == '\0';
        }
        if (bVar22) {
          if (puVar17 != puVar21) {
            lVar18 = 2;
            puVar19 = local_268;
            puVar15 = puVar17;
            do {
              puVar13 = puVar15;
              puVar14 = puVar19;
              uVar5 = puVar13[1];
              uVar6 = puVar13[2];
              uVar7 = puVar13[3];
              *puVar14 = *puVar13;
              puVar14[1] = uVar5;
              uVar5 = puVar13[4];
              uVar8 = puVar13[5];
              puVar14[2] = uVar6;
              puVar14[3] = uVar7;
              uVar6 = puVar13[6];
              uVar7 = puVar13[7];
              puVar14[4] = uVar5;
              puVar14[5] = uVar8;
              uVar5 = puVar13[8];
              uVar8 = puVar13[9];
              puVar14[6] = uVar6;
              puVar14[7] = uVar7;
              uVar6 = puVar13[10];
              uVar7 = puVar13[0xb];
              puVar14[8] = uVar5;
              puVar14[9] = uVar8;
              uVar5 = puVar13[0xc];
              uVar8 = puVar13[0xd];
              puVar14[10] = uVar6;
              puVar14[0xb] = uVar7;
              uVar6 = puVar13[0xe];
              uVar7 = puVar13[0xf];
              puVar14[0xc] = uVar5;
              puVar14[0xd] = uVar8;
              puVar14[0xe] = uVar6;
              puVar14[0xf] = uVar7;
              lVar18 = lVar18 + -1;
              puVar19 = puVar14 + 0x10;
              puVar15 = puVar13 + 0x10;
            } while (lVar18 != 0);
            uVar5 = puVar13[0x11];
            lVar18 = 2;
            puVar14[0x10] = puVar13[0x10];
            puVar14[0x11] = uVar5;
            puVar19 = puVar21;
            do {
              puVar14 = puVar17;
              puVar15 = puVar19;
              uVar5 = puVar15[1];
              *puVar14 = *puVar15;
              puVar14[1] = uVar5;
              uVar5 = puVar15[3];
              puVar14[2] = puVar15[2];
              puVar14[3] = uVar5;
              uVar5 = puVar15[5];
              puVar14[4] = puVar15[4];
              puVar14[5] = uVar5;
              uVar5 = puVar15[7];
              puVar14[6] = puVar15[6];
              puVar14[7] = uVar5;
              uVar5 = puVar15[9];
              puVar14[8] = puVar15[8];
              puVar14[9] = uVar5;
              uVar5 = puVar15[0xb];
              puVar14[10] = puVar15[10];
              puVar14[0xb] = uVar5;
              uVar5 = puVar15[0xd];
              puVar14[0xc] = puVar15[0xc];
              puVar14[0xd] = uVar5;
              uVar5 = puVar15[0xf];
              puVar14[0xe] = puVar15[0xe];
              puVar14[0xf] = uVar5;
              lVar18 = lVar18 + -1;
              puVar19 = puVar15 + 0x10;
              puVar17 = puVar14 + 0x10;
            } while (lVar18 != 0);
            uVar5 = puVar15[0x11];
            lVar18 = 2;
            puVar14[0x10] = puVar15[0x10];
            puVar14[0x11] = uVar5;
            puVar17 = local_268;
            do {
              puVar15 = puVar21;
              puVar19 = puVar17;
              uVar5 = puVar19[1];
              uVar6 = puVar19[2];
              uVar7 = puVar19[3];
              *puVar15 = *puVar19;
              puVar15[1] = uVar5;
              uVar5 = puVar19[4];
              uVar8 = puVar19[5];
              puVar15[2] = uVar6;
              puVar15[3] = uVar7;
              uVar6 = puVar19[6];
              uVar7 = puVar19[7];
              puVar15[4] = uVar5;
              puVar15[5] = uVar8;
              uVar5 = puVar19[8];
              uVar8 = puVar19[9];
              puVar15[6] = uVar6;
              puVar15[7] = uVar7;
              uVar6 = puVar19[10];
              uVar7 = puVar19[0xb];
              puVar15[8] = uVar5;
              puVar15[9] = uVar8;
              uVar5 = puVar19[0xc];
              uVar8 = puVar19[0xd];
              puVar15[10] = uVar6;
              puVar15[0xb] = uVar7;
              uVar6 = puVar19[0xe];
              uVar7 = puVar19[0xf];
              puVar15[0xc] = uVar5;
              puVar15[0xd] = uVar8;
              puVar15[0xe] = uVar6;
              puVar15[0xf] = uVar7;
              lVar18 = lVar18 + -1;
              puVar17 = puVar19 + 0x10;
              puVar21 = puVar15 + 0x10;
            } while (lVar18 != 0);
            uVar2 = *(undefined4 *)((longlong)puVar19 + 0x84);
            uVar3 = *(undefined4 *)(puVar19 + 0x11);
            uVar4 = *(undefined4 *)((longlong)puVar19 + 0x8c);
            *(undefined4 *)(puVar15 + 0x10) = *(undefined4 *)(puVar19 + 0x10);
            *(undefined4 *)((longlong)puVar15 + 0x84) = uVar2;
            *(undefined4 *)(puVar15 + 0x11) = uVar3;
            *(undefined4 *)((longlong)puVar15 + 0x8c) = uVar4;
          }
          iVar11 = iVar20 * 2 + 1;
          iVar9 = iVar20;
          goto joined_r0x0001411c1fb6;
        }
      }
      iVar11 = iVar1 + -2;
      iVar9 = iVar12 + -1;
      iVar1 = iVar11;
      iVar12 = iVar9;
    } while (-1 < iVar9);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar21 = param_1 + (longlong)param_2 * 0x22;
    do {
      if (param_1 != puVar21) {
        lVar18 = 2;
        puVar17 = local_268;
        puVar19 = param_1;
        do {
          puVar14 = puVar19;
          puVar15 = puVar17;
          uVar5 = puVar14[1];
          uVar6 = puVar14[2];
          uVar7 = puVar14[3];
          *puVar15 = *puVar14;
          puVar15[1] = uVar5;
          uVar5 = puVar14[4];
          uVar8 = puVar14[5];
          puVar15[2] = uVar6;
          puVar15[3] = uVar7;
          uVar6 = puVar14[6];
          uVar7 = puVar14[7];
          puVar15[4] = uVar5;
          puVar15[5] = uVar8;
          uVar5 = puVar14[8];
          uVar8 = puVar14[9];
          puVar15[6] = uVar6;
          puVar15[7] = uVar7;
          uVar6 = puVar14[10];
          uVar7 = puVar14[0xb];
          puVar15[8] = uVar5;
          puVar15[9] = uVar8;
          uVar5 = puVar14[0xc];
          uVar8 = puVar14[0xd];
          puVar15[10] = uVar6;
          puVar15[0xb] = uVar7;
          uVar6 = puVar14[0xe];
          uVar7 = puVar14[0xf];
          puVar15[0xc] = uVar5;
          puVar15[0xd] = uVar8;
          puVar15[0xe] = uVar6;
          puVar15[0xf] = uVar7;
          lVar18 = lVar18 + -1;
          puVar17 = puVar15 + 0x10;
          puVar19 = puVar14 + 0x10;
        } while (lVar18 != 0);
        uVar5 = puVar14[0x11];
        lVar18 = 2;
        puVar15[0x10] = puVar14[0x10];
        puVar15[0x11] = uVar5;
        puVar17 = param_1;
        puVar19 = puVar21;
        do {
          puVar14 = puVar19;
          puVar15 = puVar17;
          uVar5 = puVar14[1];
          *puVar15 = *puVar14;
          puVar15[1] = uVar5;
          uVar5 = puVar14[3];
          puVar15[2] = puVar14[2];
          puVar15[3] = uVar5;
          uVar5 = puVar14[5];
          puVar15[4] = puVar14[4];
          puVar15[5] = uVar5;
          uVar5 = puVar14[7];
          puVar15[6] = puVar14[6];
          puVar15[7] = uVar5;
          uVar5 = puVar14[9];
          puVar15[8] = puVar14[8];
          puVar15[9] = uVar5;
          uVar5 = puVar14[0xb];
          puVar15[10] = puVar14[10];
          puVar15[0xb] = uVar5;
          uVar5 = puVar14[0xd];
          puVar15[0xc] = puVar14[0xc];
          puVar15[0xd] = uVar5;
          uVar5 = puVar14[0xf];
          puVar15[0xe] = puVar14[0xe];
          puVar15[0xf] = uVar5;
          lVar18 = lVar18 + -1;
          puVar17 = puVar15 + 0x10;
          puVar19 = puVar14 + 0x10;
        } while (lVar18 != 0);
        uVar5 = puVar14[0x11];
        lVar18 = 2;
        puVar15[0x10] = puVar14[0x10];
        puVar15[0x11] = uVar5;
        puVar17 = puVar21;
        puVar19 = local_268;
        do {
          puVar14 = puVar19;
          puVar15 = puVar17;
          uVar5 = puVar14[1];
          uVar6 = puVar14[2];
          uVar7 = puVar14[3];
          *puVar15 = *puVar14;
          puVar15[1] = uVar5;
          uVar5 = puVar14[4];
          uVar8 = puVar14[5];
          puVar15[2] = uVar6;
          puVar15[3] = uVar7;
          uVar6 = puVar14[6];
          uVar7 = puVar14[7];
          puVar15[4] = uVar5;
          puVar15[5] = uVar8;
          uVar5 = puVar14[8];
          uVar8 = puVar14[9];
          puVar15[6] = uVar6;
          puVar15[7] = uVar7;
          uVar6 = puVar14[10];
          uVar7 = puVar14[0xb];
          puVar15[8] = uVar5;
          puVar15[9] = uVar8;
          uVar5 = puVar14[0xc];
          uVar8 = puVar14[0xd];
          puVar15[10] = uVar6;
          puVar15[0xb] = uVar7;
          uVar6 = puVar14[0xe];
          uVar7 = puVar14[0xf];
          puVar15[0xc] = uVar5;
          puVar15[0xd] = uVar8;
          puVar15[0xe] = uVar6;
          puVar15[0xf] = uVar7;
          lVar18 = lVar18 + -1;
          puVar17 = puVar15 + 0x10;
          puVar19 = puVar14 + 0x10;
        } while (lVar18 != 0);
        uVar2 = *(undefined4 *)((longlong)puVar14 + 0x84);
        uVar3 = *(undefined4 *)(puVar14 + 0x11);
        uVar4 = *(undefined4 *)((longlong)puVar14 + 0x8c);
        *(undefined4 *)(puVar15 + 0x10) = *(undefined4 *)(puVar14 + 0x10);
        *(undefined4 *)((longlong)puVar15 + 0x84) = uVar2;
        *(undefined4 *)(puVar15 + 0x11) = uVar3;
        *(undefined4 *)((longlong)puVar15 + 0x8c) = uVar4;
      }
      iVar9 = 0;
      if (1 < param_2) {
        do {
          iVar1 = iVar9 * 2;
          iVar11 = iVar1 + 1;
          if (iVar1 + 2 < param_2) {
            puVar17 = param_1 + ((longlong)iVar1 + 2) * 0x22;
            puVar19 = param_1 + (longlong)iVar11 * 0x22;
            if ((**(char **)(param_4 + 8) == '\0') ||
               (*(char *)(puVar17 + 0xb) == *(char *)(puVar19 + 0xb))) {
              if (*(int *)(puVar17 + 0x12) == *(int *)(puVar19 + 0x12)) {
                iVar12 = FText::CompareTo(puVar17,puVar19,0);
                bVar22 = iVar12 < 0;
              }
              else {
                bVar22 = *(int *)(puVar19 + 0x12) <= *(int *)(puVar17 + 0x12);
              }
            }
            else {
              bVar22 = *(char *)(puVar17 + 0xb) == '\0';
            }
            if (bVar22) {
              iVar11 = iVar1;
            }
            iVar11 = iVar11 + 1;
          }
          puVar19 = param_1 + (longlong)iVar9 * 0x22;
          puVar17 = param_1 + (longlong)iVar11 * 0x22;
          if ((**(char **)(param_4 + 8) == '\0') ||
             (*(char *)(puVar19 + 0xb) == *(char *)(puVar17 + 0xb))) {
            if (*(int *)(puVar19 + 0x12) == *(int *)(puVar17 + 0x12)) {
              iVar9 = FText::CompareTo(puVar19,puVar17,0);
              bVar22 = iVar9 < 0;
            }
            else {
              bVar22 = *(int *)(puVar17 + 0x12) <= *(int *)(puVar19 + 0x12);
            }
          }
          else {
            bVar22 = *(char *)(puVar19 + 0xb) == '\0';
          }
          if (!bVar22) break;
          if (puVar19 != puVar17) {
            lVar18 = 2;
            puVar15 = local_158;
            puVar14 = puVar19;
            do {
              puVar16 = puVar14;
              puVar13 = puVar15;
              uVar5 = puVar16[1];
              uVar6 = puVar16[2];
              uVar7 = puVar16[3];
              *puVar13 = *puVar16;
              puVar13[1] = uVar5;
              uVar5 = puVar16[4];
              uVar8 = puVar16[5];
              puVar13[2] = uVar6;
              puVar13[3] = uVar7;
              uVar6 = puVar16[6];
              uVar7 = puVar16[7];
              puVar13[4] = uVar5;
              puVar13[5] = uVar8;
              uVar5 = puVar16[8];
              uVar8 = puVar16[9];
              puVar13[6] = uVar6;
              puVar13[7] = uVar7;
              uVar6 = puVar16[10];
              uVar7 = puVar16[0xb];
              puVar13[8] = uVar5;
              puVar13[9] = uVar8;
              uVar5 = puVar16[0xc];
              uVar8 = puVar16[0xd];
              puVar13[10] = uVar6;
              puVar13[0xb] = uVar7;
              uVar6 = puVar16[0xe];
              uVar7 = puVar16[0xf];
              puVar13[0xc] = uVar5;
              puVar13[0xd] = uVar8;
              puVar13[0xe] = uVar6;
              puVar13[0xf] = uVar7;
              lVar18 = lVar18 + -1;
              puVar15 = puVar13 + 0x10;
              puVar14 = puVar16 + 0x10;
            } while (lVar18 != 0);
            uVar5 = puVar16[0x11];
            lVar18 = 2;
            puVar13[0x10] = puVar16[0x10];
            puVar13[0x11] = uVar5;
            puVar15 = puVar17;
            do {
              puVar13 = puVar19;
              puVar14 = puVar15;
              uVar5 = puVar14[1];
              *puVar13 = *puVar14;
              puVar13[1] = uVar5;
              uVar5 = puVar14[3];
              puVar13[2] = puVar14[2];
              puVar13[3] = uVar5;
              uVar5 = puVar14[5];
              puVar13[4] = puVar14[4];
              puVar13[5] = uVar5;
              uVar5 = puVar14[7];
              puVar13[6] = puVar14[6];
              puVar13[7] = uVar5;
              uVar5 = puVar14[9];
              puVar13[8] = puVar14[8];
              puVar13[9] = uVar5;
              uVar5 = puVar14[0xb];
              puVar13[10] = puVar14[10];
              puVar13[0xb] = uVar5;
              uVar5 = puVar14[0xd];
              puVar13[0xc] = puVar14[0xc];
              puVar13[0xd] = uVar5;
              uVar5 = puVar14[0xf];
              puVar13[0xe] = puVar14[0xe];
              puVar13[0xf] = uVar5;
              lVar18 = lVar18 + -1;
              puVar15 = puVar14 + 0x10;
              puVar19 = puVar13 + 0x10;
            } while (lVar18 != 0);
            uVar5 = puVar14[0x11];
            lVar18 = 2;
            puVar13[0x10] = puVar14[0x10];
            puVar13[0x11] = uVar5;
            puVar19 = local_158;
            do {
              puVar14 = puVar17;
              puVar15 = puVar19;
              uVar5 = puVar15[1];
              uVar6 = puVar15[2];
              uVar7 = puVar15[3];
              *puVar14 = *puVar15;
              puVar14[1] = uVar5;
              uVar5 = puVar15[4];
              uVar8 = puVar15[5];
              puVar14[2] = uVar6;
              puVar14[3] = uVar7;
              uVar6 = puVar15[6];
              uVar7 = puVar15[7];
              puVar14[4] = uVar5;
              puVar14[5] = uVar8;
              uVar5 = puVar15[8];
              uVar8 = puVar15[9];
              puVar14[6] = uVar6;
              puVar14[7] = uVar7;
              uVar6 = puVar15[10];
              uVar7 = puVar15[0xb];
              puVar14[8] = uVar5;
              puVar14[9] = uVar8;
              uVar5 = puVar15[0xc];
              uVar8 = puVar15[0xd];
              puVar14[10] = uVar6;
              puVar14[0xb] = uVar7;
              uVar6 = puVar15[0xe];
              uVar7 = puVar15[0xf];
              puVar14[0xc] = uVar5;
              puVar14[0xd] = uVar8;
              puVar14[0xe] = uVar6;
              puVar14[0xf] = uVar7;
              lVar18 = lVar18 + -1;
              puVar19 = puVar15 + 0x10;
              puVar17 = puVar14 + 0x10;
            } while (lVar18 != 0);
            uVar2 = *(undefined4 *)((longlong)puVar15 + 0x84);
            uVar3 = *(undefined4 *)(puVar15 + 0x11);
            uVar4 = *(undefined4 *)((longlong)puVar15 + 0x8c);
            *(undefined4 *)(puVar14 + 0x10) = *(undefined4 *)(puVar15 + 0x10);
            *(undefined4 *)((longlong)puVar14 + 0x84) = uVar2;
            *(undefined4 *)(puVar14 + 0x11) = uVar3;
            *(undefined4 *)((longlong)puVar14 + 0x8c) = uVar4;
          }
          iVar9 = iVar11;
        } while (iVar11 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar21 = puVar21 + -0x22;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 1411c25e0 FUN_1411c25e0 body=1451 status=ok
// SIG undefined FUN_1411c25e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411c25e0(undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  longlong lVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  int iVar20;
  undefined8 *puVar21;
  undefined1 auStack_288 [32];
  undefined8 local_268 [34];
  undefined8 local_158 [34];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_288;
  iVar10 = (param_2 + -2) / 2;
  if (-1 < iVar10) {
    iVar11 = iVar10 * 2 + 1;
    iVar1 = iVar11;
    iVar20 = iVar10;
joined_r0x0001411c2636:
    do {
      if (iVar11 < param_2) {
        iVar11 = iVar10 * 2;
        iVar17 = iVar11 + 1;
        if (iVar11 + 2 < param_2) {
          cVar9 = FUN_1411d06f0(param_4,param_1 + (longlong)(iVar11 + 2) * 0x22,
                                param_1 + (longlong)iVar17 * 0x22);
          if (cVar9 != '\0') {
            iVar17 = iVar11;
          }
          iVar17 = iVar17 + 1;
        }
        puVar21 = param_1 + (longlong)iVar17 * 0x22;
        puVar18 = param_1 + (longlong)iVar10 * 0x22;
        cVar9 = FUN_1411d06f0(param_4,puVar18,puVar21);
        if (cVar9 != '\0') {
          if (puVar18 != puVar21) {
            lVar16 = 2;
            puVar19 = local_268;
            puVar14 = puVar18;
            do {
              puVar12 = puVar14;
              puVar13 = puVar19;
              uVar5 = puVar12[1];
              uVar6 = puVar12[2];
              uVar7 = puVar12[3];
              *puVar13 = *puVar12;
              puVar13[1] = uVar5;
              uVar5 = puVar12[4];
              uVar8 = puVar12[5];
              puVar13[2] = uVar6;
              puVar13[3] = uVar7;
              uVar6 = puVar12[6];
              uVar7 = puVar12[7];
              puVar13[4] = uVar5;
              puVar13[5] = uVar8;
              uVar5 = puVar12[8];
              uVar8 = puVar12[9];
              puVar13[6] = uVar6;
              puVar13[7] = uVar7;
              uVar6 = puVar12[10];
              uVar7 = puVar12[0xb];
              puVar13[8] = uVar5;
              puVar13[9] = uVar8;
              uVar5 = puVar12[0xc];
              uVar8 = puVar12[0xd];
              puVar13[10] = uVar6;
              puVar13[0xb] = uVar7;
              uVar6 = puVar12[0xe];
              uVar7 = puVar12[0xf];
              puVar13[0xc] = uVar5;
              puVar13[0xd] = uVar8;
              puVar13[0xe] = uVar6;
              puVar13[0xf] = uVar7;
              lVar16 = lVar16 + -1;
              puVar19 = puVar13 + 0x10;
              puVar14 = puVar12 + 0x10;
            } while (lVar16 != 0);
            uVar5 = puVar12[0x11];
            lVar16 = 2;
            puVar13[0x10] = puVar12[0x10];
            puVar13[0x11] = uVar5;
            puVar19 = puVar21;
            do {
              puVar13 = puVar18;
              puVar14 = puVar19;
              uVar5 = puVar14[1];
              *puVar13 = *puVar14;
              puVar13[1] = uVar5;
              uVar5 = puVar14[3];
              puVar13[2] = puVar14[2];
              puVar13[3] = uVar5;
              uVar5 = puVar14[5];
              puVar13[4] = puVar14[4];
              puVar13[5] = uVar5;
              uVar5 = puVar14[7];
              puVar13[6] = puVar14[6];
              puVar13[7] = uVar5;
              uVar5 = puVar14[9];
              puVar13[8] = puVar14[8];
              puVar13[9] = uVar5;
              uVar5 = puVar14[0xb];
              puVar13[10] = puVar14[10];
              puVar13[0xb] = uVar5;
              uVar5 = puVar14[0xd];
              puVar13[0xc] = puVar14[0xc];
              puVar13[0xd] = uVar5;
              uVar5 = puVar14[0xf];
              puVar13[0xe] = puVar14[0xe];
              puVar13[0xf] = uVar5;
              lVar16 = lVar16 + -1;
              puVar19 = puVar14 + 0x10;
              puVar18 = puVar13 + 0x10;
            } while (lVar16 != 0);
            uVar5 = puVar14[0x11];
            lVar16 = 2;
            puVar13[0x10] = puVar14[0x10];
            puVar13[0x11] = uVar5;
            puVar18 = local_268;
            do {
              puVar14 = puVar21;
              puVar19 = puVar18;
              uVar5 = puVar19[1];
              uVar6 = puVar19[2];
              uVar7 = puVar19[3];
              *puVar14 = *puVar19;
              puVar14[1] = uVar5;
              uVar5 = puVar19[4];
              uVar8 = puVar19[5];
              puVar14[2] = uVar6;
              puVar14[3] = uVar7;
              uVar6 = puVar19[6];
              uVar7 = puVar19[7];
              puVar14[4] = uVar5;
              puVar14[5] = uVar8;
              uVar5 = puVar19[8];
              uVar8 = puVar19[9];
              puVar14[6] = uVar6;
              puVar14[7] = uVar7;
              uVar6 = puVar19[10];
              uVar7 = puVar19[0xb];
              puVar14[8] = uVar5;
              puVar14[9] = uVar8;
              uVar5 = puVar19[0xc];
              uVar8 = puVar19[0xd];
              puVar14[10] = uVar6;
              puVar14[0xb] = uVar7;
              uVar6 = puVar19[0xe];
              uVar7 = puVar19[0xf];
              puVar14[0xc] = uVar5;
              puVar14[0xd] = uVar8;
              puVar14[0xe] = uVar6;
              puVar14[0xf] = uVar7;
              lVar16 = lVar16 + -1;
              puVar18 = puVar19 + 0x10;
              puVar21 = puVar14 + 0x10;
            } while (lVar16 != 0);
            uVar2 = *(undefined4 *)((longlong)puVar19 + 0x84);
            uVar3 = *(undefined4 *)(puVar19 + 0x11);
            uVar4 = *(undefined4 *)((longlong)puVar19 + 0x8c);
            *(undefined4 *)(puVar14 + 0x10) = *(undefined4 *)(puVar19 + 0x10);
            *(undefined4 *)((longlong)puVar14 + 0x84) = uVar2;
            *(undefined4 *)(puVar14 + 0x11) = uVar3;
            *(undefined4 *)((longlong)puVar14 + 0x8c) = uVar4;
          }
          iVar11 = iVar17 * 2 + 1;
          iVar10 = iVar17;
          goto joined_r0x0001411c2636;
        }
      }
      iVar11 = iVar1 + -2;
      iVar10 = iVar20 + -1;
      iVar1 = iVar11;
      iVar20 = iVar10;
    } while (-1 < iVar10);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar21 = param_1 + (longlong)param_2 * 0x22;
    do {
      if (param_1 != puVar21) {
        lVar16 = 2;
        puVar18 = local_268;
        puVar19 = param_1;
        do {
          puVar13 = puVar19;
          puVar14 = puVar18;
          uVar5 = puVar13[1];
          uVar6 = puVar13[2];
          uVar7 = puVar13[3];
          *puVar14 = *puVar13;
          puVar14[1] = uVar5;
          uVar5 = puVar13[4];
          uVar8 = puVar13[5];
          puVar14[2] = uVar6;
          puVar14[3] = uVar7;
          uVar6 = puVar13[6];
          uVar7 = puVar13[7];
          puVar14[4] = uVar5;
          puVar14[5] = uVar8;
          uVar5 = puVar13[8];
          uVar8 = puVar13[9];
          puVar14[6] = uVar6;
          puVar14[7] = uVar7;
          uVar6 = puVar13[10];
          uVar7 = puVar13[0xb];
          puVar14[8] = uVar5;
          puVar14[9] = uVar8;
          uVar5 = puVar13[0xc];
          uVar8 = puVar13[0xd];
          puVar14[10] = uVar6;
          puVar14[0xb] = uVar7;
          uVar6 = puVar13[0xe];
          uVar7 = puVar13[0xf];
          puVar14[0xc] = uVar5;
          puVar14[0xd] = uVar8;
          puVar14[0xe] = uVar6;
          puVar14[0xf] = uVar7;
          lVar16 = lVar16 + -1;
          puVar18 = puVar14 + 0x10;
          puVar19 = puVar13 + 0x10;
        } while (lVar16 != 0);
        uVar5 = puVar13[0x11];
        lVar16 = 2;
        puVar14[0x10] = puVar13[0x10];
        puVar14[0x11] = uVar5;
        puVar18 = param_1;
        puVar19 = puVar21;
        do {
          puVar13 = puVar19;
          puVar14 = puVar18;
          uVar5 = puVar13[1];
          *puVar14 = *puVar13;
          puVar14[1] = uVar5;
          uVar5 = puVar13[3];
          puVar14[2] = puVar13[2];
          puVar14[3] = uVar5;
          uVar5 = puVar13[5];
          puVar14[4] = puVar13[4];
          puVar14[5] = uVar5;
          uVar5 = puVar13[7];
          puVar14[6] = puVar13[6];
          puVar14[7] = uVar5;
          uVar5 = puVar13[9];
          puVar14[8] = puVar13[8];
          puVar14[9] = uVar5;
          uVar5 = puVar13[0xb];
          puVar14[10] = puVar13[10];
          puVar14[0xb] = uVar5;
          uVar5 = puVar13[0xd];
          puVar14[0xc] = puVar13[0xc];
          puVar14[0xd] = uVar5;
          uVar5 = puVar13[0xf];
          puVar14[0xe] = puVar13[0xe];
          puVar14[0xf] = uVar5;
          lVar16 = lVar16 + -1;
          puVar18 = puVar14 + 0x10;
          puVar19 = puVar13 + 0x10;
        } while (lVar16 != 0);
        uVar5 = puVar13[0x11];
        lVar16 = 2;
        puVar14[0x10] = puVar13[0x10];
        puVar14[0x11] = uVar5;
        puVar18 = puVar21;
        puVar19 = local_268;
        do {
          puVar13 = puVar19;
          puVar14 = puVar18;
          uVar5 = puVar13[1];
          uVar6 = puVar13[2];
          uVar7 = puVar13[3];
          *puVar14 = *puVar13;
          puVar14[1] = uVar5;
          uVar5 = puVar13[4];
          uVar8 = puVar13[5];
          puVar14[2] = uVar6;
          puVar14[3] = uVar7;
          uVar6 = puVar13[6];
          uVar7 = puVar13[7];
          puVar14[4] = uVar5;
          puVar14[5] = uVar8;
          uVar5 = puVar13[8];
          uVar8 = puVar13[9];
          puVar14[6] = uVar6;
          puVar14[7] = uVar7;
          uVar6 = puVar13[10];
          uVar7 = puVar13[0xb];
          puVar14[8] = uVar5;
          puVar14[9] = uVar8;
          uVar5 = puVar13[0xc];
          uVar8 = puVar13[0xd];
          puVar14[10] = uVar6;
          puVar14[0xb] = uVar7;
          uVar6 = puVar13[0xe];
          uVar7 = puVar13[0xf];
          puVar14[0xc] = uVar5;
          puVar14[0xd] = uVar8;
          puVar14[0xe] = uVar6;
          puVar14[0xf] = uVar7;
          lVar16 = lVar16 + -1;
          puVar18 = puVar14 + 0x10;
          puVar19 = puVar13 + 0x10;
        } while (lVar16 != 0);
        uVar2 = *(undefined4 *)((longlong)puVar13 + 0x84);
        uVar3 = *(undefined4 *)(puVar13 + 0x11);
        uVar4 = *(undefined4 *)((longlong)puVar13 + 0x8c);
        *(undefined4 *)(puVar14 + 0x10) = *(undefined4 *)(puVar13 + 0x10);
        *(undefined4 *)((longlong)puVar14 + 0x84) = uVar2;
        *(undefined4 *)(puVar14 + 0x11) = uVar3;
        *(undefined4 *)((longlong)puVar14 + 0x8c) = uVar4;
      }
      iVar10 = 0;
      if (1 < param_2) {
        do {
          iVar1 = iVar10 * 2;
          iVar11 = iVar1 + 1;
          if (iVar1 + 2 < param_2) {
            cVar9 = FUN_1411d06f0(param_4,param_1 + (longlong)(iVar1 + 2) * 0x22,
                                  param_1 + (longlong)iVar11 * 0x22);
            if (cVar9 != '\0') {
              iVar11 = iVar1;
            }
            iVar11 = iVar11 + 1;
          }
          puVar18 = param_1 + (longlong)iVar11 * 0x22;
          puVar19 = param_1 + (longlong)iVar10 * 0x22;
          cVar9 = FUN_1411d06f0(param_4,puVar19,puVar18);
          if (cVar9 == '\0') break;
          if (puVar19 != puVar18) {
            lVar16 = 2;
            puVar14 = local_158;
            puVar13 = puVar19;
            do {
              puVar15 = puVar13;
              puVar12 = puVar14;
              uVar5 = puVar15[1];
              uVar6 = puVar15[2];
              uVar7 = puVar15[3];
              *puVar12 = *puVar15;
              puVar12[1] = uVar5;
              uVar5 = puVar15[4];
              uVar8 = puVar15[5];
              puVar12[2] = uVar6;
              puVar12[3] = uVar7;
              uVar6 = puVar15[6];
              uVar7 = puVar15[7];
              puVar12[4] = uVar5;
              puVar12[5] = uVar8;
              uVar5 = puVar15[8];
              uVar8 = puVar15[9];
              puVar12[6] = uVar6;
              puVar12[7] = uVar7;
              uVar6 = puVar15[10];
              uVar7 = puVar15[0xb];
              puVar12[8] = uVar5;
              puVar12[9] = uVar8;
              uVar5 = puVar15[0xc];
              uVar8 = puVar15[0xd];
              puVar12[10] = uVar6;
              puVar12[0xb] = uVar7;
              uVar6 = puVar15[0xe];
              uVar7 = puVar15[0xf];
              puVar12[0xc] = uVar5;
              puVar12[0xd] = uVar8;
              puVar12[0xe] = uVar6;
              puVar12[0xf] = uVar7;
              lVar16 = lVar16 + -1;
              puVar14 = puVar12 + 0x10;
              puVar13 = puVar15 + 0x10;
            } while (lVar16 != 0);
            uVar5 = puVar15[0x11];
            lVar16 = 2;
            puVar12[0x10] = puVar15[0x10];
            puVar12[0x11] = uVar5;
            puVar14 = puVar18;
            do {
              puVar12 = puVar19;
              puVar13 = puVar14;
              uVar5 = puVar13[1];
              *puVar12 = *puVar13;
              puVar12[1] = uVar5;
              uVar5 = puVar13[3];
              puVar12[2] = puVar13[2];
              puVar12[3] = uVar5;
              uVar5 = puVar13[5];
              puVar12[4] = puVar13[4];
              puVar12[5] = uVar5;
              uVar5 = puVar13[7];
              puVar12[6] = puVar13[6];
              puVar12[7] = uVar5;
              uVar5 = puVar13[9];
              puVar12[8] = puVar13[8];
              puVar12[9] = uVar5;
              uVar5 = puVar13[0xb];
              puVar12[10] = puVar13[10];
              puVar12[0xb] = uVar5;
              uVar5 = puVar13[0xd];
              puVar12[0xc] = puVar13[0xc];
              puVar12[0xd] = uVar5;
              uVar5 = puVar13[0xf];
              puVar12[0xe] = puVar13[0xe];
              puVar12[0xf] = uVar5;
              lVar16 = lVar16 + -1;
              puVar14 = puVar13 + 0x10;
              puVar19 = puVar12 + 0x10;
            } while (lVar16 != 0);
            uVar5 = puVar13[0x11];
            lVar16 = 2;
            puVar12[0x10] = puVar13[0x10];
            puVar12[0x11] = uVar5;
            puVar19 = local_158;
            do {
              puVar13 = puVar18;
              puVar14 = puVar19;
              uVar5 = puVar14[1];
              uVar6 = puVar14[2];
              uVar7 = puVar14[3];
              *puVar13 = *puVar14;
              puVar13[1] = uVar5;
              uVar5 = puVar14[4];
              uVar8 = puVar14[5];
              puVar13[2] = uVar6;
              puVar13[3] = uVar7;
              uVar6 = puVar14[6];
              uVar7 = puVar14[7];
              puVar13[4] = uVar5;
              puVar13[5] = uVar8;
              uVar5 = puVar14[8];
              uVar8 = puVar14[9];
              puVar13[6] = uVar6;
              puVar13[7] = uVar7;
              uVar6 = puVar14[10];
              uVar7 = puVar14[0xb];
              puVar13[8] = uVar5;
              puVar13[9] = uVar8;
              uVar5 = puVar14[0xc];
              uVar8 = puVar14[0xd];
              puVar13[10] = uVar6;
              puVar13[0xb] = uVar7;
              uVar6 = puVar14[0xe];
              uVar7 = puVar14[0xf];
              puVar13[0xc] = uVar5;
              puVar13[0xd] = uVar8;
              puVar13[0xe] = uVar6;
              puVar13[0xf] = uVar7;
              lVar16 = lVar16 + -1;
              puVar19 = puVar14 + 0x10;
              puVar18 = puVar13 + 0x10;
            } while (lVar16 != 0);
            uVar2 = *(undefined4 *)((longlong)puVar14 + 0x84);
            uVar3 = *(undefined4 *)(puVar14 + 0x11);
            uVar4 = *(undefined4 *)((longlong)puVar14 + 0x8c);
            *(undefined4 *)(puVar13 + 0x10) = *(undefined4 *)(puVar14 + 0x10);
            *(undefined4 *)((longlong)puVar13 + 0x84) = uVar2;
            *(undefined4 *)(puVar13 + 0x11) = uVar3;
            *(undefined4 *)((longlong)puVar13 + 0x8c) = uVar4;
          }
          iVar10 = iVar11;
        } while (iVar11 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar21 = puVar21 + -0x22;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 1411c2b90 FUN_1411c2b90 body=1451 status=ok
// SIG undefined FUN_1411c2b90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411c2b90(undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  longlong lVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  int iVar20;
  undefined8 *puVar21;
  undefined1 auStack_288 [32];
  undefined8 local_268 [34];
  undefined8 local_158 [34];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_288;
  iVar10 = (param_2 + -2) / 2;
  if (-1 < iVar10) {
    iVar11 = iVar10 * 2 + 1;
    iVar1 = iVar11;
    iVar20 = iVar10;
joined_r0x0001411c2be6:
    do {
      if (iVar11 < param_2) {
        iVar11 = iVar10 * 2;
        iVar17 = iVar11 + 1;
        if (iVar11 + 2 < param_2) {
          cVar9 = FUN_1411d0f50(param_4,param_1 + (longlong)(iVar11 + 2) * 0x22,
                                param_1 + (longlong)iVar17 * 0x22);
          if (cVar9 != '\0') {
            iVar17 = iVar11;
          }
          iVar17 = iVar17 + 1;
        }
        puVar21 = param_1 + (longlong)iVar17 * 0x22;
        puVar18 = param_1 + (longlong)iVar10 * 0x22;
        cVar9 = FUN_1411d0f50(param_4,puVar18,puVar21);
        if (cVar9 != '\0') {
          if (puVar18 != puVar21) {
            lVar16 = 2;
            puVar19 = local_268;
            puVar14 = puVar18;
            do {
              puVar12 = puVar14;
              puVar13 = puVar19;
              uVar5 = puVar12[1];
              uVar6 = puVar12[2];
              uVar7 = puVar12[3];
              *puVar13 = *puVar12;
              puVar13[1] = uVar5;
              uVar5 = puVar12[4];
              uVar8 = puVar12[5];
              puVar13[2] = uVar6;
              puVar13[3] = uVar7;
              uVar6 = puVar12[6];
              uVar7 = puVar12[7];
              puVar13[4] = uVar5;
              puVar13[5] = uVar8;
              uVar5 = puVar12[8];
              uVar8 = puVar12[9];
              puVar13[6] = uVar6;
              puVar13[7] = uVar7;
              uVar6 = puVar12[10];
              uVar7 = puVar12[0xb];
              puVar13[8] = uVar5;
              puVar13[9] = uVar8;
              uVar5 = puVar12[0xc];
              uVar8 = puVar12[0xd];
              puVar13[10] = uVar6;
              puVar13[0xb] = uVar7;
              uVar6 = puVar12[0xe];
              uVar7 = puVar12[0xf];
              puVar13[0xc] = uVar5;
              puVar13[0xd] = uVar8;
              puVar13[0xe] = uVar6;
              puVar13[0xf] = uVar7;
              lVar16 = lVar16 + -1;
              puVar19 = puVar13 + 0x10;
              puVar14 = puVar12 + 0x10;
            } while (lVar16 != 0);
            uVar5 = puVar12[0x11];
            lVar16 = 2;
            puVar13[0x10] = puVar12[0x10];
            puVar13[0x11] = uVar5;
            puVar19 = puVar21;
            do {
              puVar13 = puVar18;
              puVar14 = puVar19;
              uVar5 = puVar14[1];
              *puVar13 = *puVar14;
              puVar13[1] = uVar5;
              uVar5 = puVar14[3];
              puVar13[2] = puVar14[2];
              puVar13[3] = uVar5;
              uVar5 = puVar14[5];
              puVar13[4] = puVar14[4];
              puVar13[5] = uVar5;
              uVar5 = puVar14[7];
              puVar13[6] = puVar14[6];
              puVar13[7] = uVar5;
              uVar5 = puVar14[9];
              puVar13[8] = puVar14[8];
              puVar13[9] = uVar5;
              uVar5 = puVar14[0xb];
              puVar13[10] = puVar14[10];
              puVar13[0xb] = uVar5;
              uVar5 = puVar14[0xd];
              puVar13[0xc] = puVar14[0xc];
              puVar13[0xd] = uVar5;
              uVar5 = puVar14[0xf];
              puVar13[0xe] = puVar14[0xe];
              puVar13[0xf] = uVar5;
              lVar16 = lVar16 + -1;
              puVar19 = puVar14 + 0x10;
              puVar18 = puVar13 + 0x10;
            } while (lVar16 != 0);
            uVar5 = puVar14[0x11];
            lVar16 = 2;
            puVar13[0x10] = puVar14[0x10];
            puVar13[0x11] = uVar5;
            puVar18 = local_268;
            do {
              puVar14 = puVar21;
              puVar19 = puVar18;
              uVar5 = puVar19[1];
              uVar6 = puVar19[2];
              uVar7 = puVar19[3];
              *puVar14 = *puVar19;
              puVar14[1] = uVar5;
              uVar5 = puVar19[4];
              uVar8 = puVar19[5];
              puVar14[2] = uVar6;
              puVar14[3] = uVar7;
              uVar6 = puVar19[6];
              uVar7 = puVar19[7];
              puVar14[4] = uVar5;
              puVar14[5] = uVar8;
              uVar5 = puVar19[8];
              uVar8 = puVar19[9];
              puVar14[6] = uVar6;
              puVar14[7] = uVar7;
              uVar6 = puVar19[10];
              uVar7 = puVar19[0xb];
              puVar14[8] = uVar5;
              puVar14[9] = uVar8;
              uVar5 = puVar19[0xc];
              uVar8 = puVar19[0xd];
              puVar14[10] = uVar6;
              puVar14[0xb] = uVar7;
              uVar6 = puVar19[0xe];
              uVar7 = puVar19[0xf];
              puVar14[0xc] = uVar5;
              puVar14[0xd] = uVar8;
              puVar14[0xe] = uVar6;
              puVar14[0xf] = uVar7;
              lVar16 = lVar16 + -1;
              puVar18 = puVar19 + 0x10;
              puVar21 = puVar14 + 0x10;
            } while (lVar16 != 0);
            uVar2 = *(undefined4 *)((longlong)puVar19 + 0x84);
            uVar3 = *(undefined4 *)(puVar19 + 0x11);
            uVar4 = *(undefined4 *)((longlong)puVar19 + 0x8c);
            *(undefined4 *)(puVar14 + 0x10) = *(undefined4 *)(puVar19 + 0x10);
            *(undefined4 *)((longlong)puVar14 + 0x84) = uVar2;
            *(undefined4 *)(puVar14 + 0x11) = uVar3;
            *(undefined4 *)((longlong)puVar14 + 0x8c) = uVar4;
          }
          iVar11 = iVar17 * 2 + 1;
          iVar10 = iVar17;
          goto joined_r0x0001411c2be6;
        }
      }
      iVar11 = iVar1 + -2;
      iVar10 = iVar20 + -1;
      iVar1 = iVar11;
      iVar20 = iVar10;
    } while (-1 < iVar10);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar21 = param_1 + (longlong)param_2 * 0x22;
    do {
      if (param_1 != puVar21) {
        lVar16 = 2;
        puVar18 = local_268;
        puVar19 = param_1;
        do {
          puVar13 = puVar19;
          puVar14 = puVar18;
          uVar5 = puVar13[1];
          uVar6 = puVar13[2];
          uVar7 = puVar13[3];
          *puVar14 = *puVar13;
          puVar14[1] = uVar5;
          uVar5 = puVar13[4];
          uVar8 = puVar13[5];
          puVar14[2] = uVar6;
          puVar14[3] = uVar7;
          uVar6 = puVar13[6];
          uVar7 = puVar13[7];
          puVar14[4] = uVar5;
          puVar14[5] = uVar8;
          uVar5 = puVar13[8];
          uVar8 = puVar13[9];
          puVar14[6] = uVar6;
          puVar14[7] = uVar7;
          uVar6 = puVar13[10];
          uVar7 = puVar13[0xb];
          puVar14[8] = uVar5;
          puVar14[9] = uVar8;
          uVar5 = puVar13[0xc];
          uVar8 = puVar13[0xd];
          puVar14[10] = uVar6;
          puVar14[0xb] = uVar7;
          uVar6 = puVar13[0xe];
          uVar7 = puVar13[0xf];
          puVar14[0xc] = uVar5;
          puVar14[0xd] = uVar8;
          puVar14[0xe] = uVar6;
          puVar14[0xf] = uVar7;
          lVar16 = lVar16 + -1;
          puVar18 = puVar14 + 0x10;
          puVar19 = puVar13 + 0x10;
        } while (lVar16 != 0);
        uVar5 = puVar13[0x11];
        lVar16 = 2;
        puVar14[0x10] = puVar13[0x10];
        puVar14[0x11] = uVar5;
        puVar18 = param_1;
        puVar19 = puVar21;
        do {
          puVar13 = puVar19;
          puVar14 = puVar18;
          uVar5 = puVar13[1];
          *puVar14 = *puVar13;
          puVar14[1] = uVar5;
          uVar5 = puVar13[3];
          puVar14[2] = puVar13[2];
          puVar14[3] = uVar5;
          uVar5 = puVar13[5];
          puVar14[4] = puVar13[4];
          puVar14[5] = uVar5;
          uVar5 = puVar13[7];
          puVar14[6] = puVar13[6];
          puVar14[7] = uVar5;
          uVar5 = puVar13[9];
          puVar14[8] = puVar13[8];
          puVar14[9] = uVar5;
          uVar5 = puVar13[0xb];
          puVar14[10] = puVar13[10];
          puVar14[0xb] = uVar5;
          uVar5 = puVar13[0xd];
          puVar14[0xc] = puVar13[0xc];
          puVar14[0xd] = uVar5;
          uVar5 = puVar13[0xf];
          puVar14[0xe] = puVar13[0xe];
          puVar14[0xf] = uVar5;
          lVar16 = lVar16 + -1;
          puVar18 = puVar14 + 0x10;
          puVar19 = puVar13 + 0x10;
        } while (lVar16 != 0);
        uVar5 = puVar13[0x11];
        lVar16 = 2;
        puVar14[0x10] = puVar13[0x10];
        puVar14[0x11] = uVar5;
        puVar18 = puVar21;
        puVar19 = local_268;
        do {
          puVar13 = puVar19;
          puVar14 = puVar18;
          uVar5 = puVar13[1];
          uVar6 = puVar13[2];
          uVar7 = puVar13[3];
          *puVar14 = *puVar13;
          puVar14[1] = uVar5;
          uVar5 = puVar13[4];
          uVar8 = puVar13[5];
          puVar14[2] = uVar6;
          puVar14[3] = uVar7;
          uVar6 = puVar13[6];
          uVar7 = puVar13[7];
          puVar14[4] = uVar5;
          puVar14[5] = uVar8;
          uVar5 = puVar13[8];
          uVar8 = puVar13[9];
          puVar14[6] = uVar6;
          puVar14[7] = uVar7;
          uVar6 = puVar13[10];
          uVar7 = puVar13[0xb];
          puVar14[8] = uVar5;
          puVar14[9] = uVar8;
          uVar5 = puVar13[0xc];
          uVar8 = puVar13[0xd];
          puVar14[10] = uVar6;
          puVar14[0xb] = uVar7;
          uVar6 = puVar13[0xe];
          uVar7 = puVar13[0xf];
          puVar14[0xc] = uVar5;
          puVar14[0xd] = uVar8;
          puVar14[0xe] = uVar6;
          puVar14[0xf] = uVar7;
          lVar16 = lVar16 + -1;
          puVar18 = puVar14 + 0x10;
          puVar19 = puVar13 + 0x10;
        } while (lVar16 != 0);
        uVar2 = *(undefined4 *)((longlong)puVar13 + 0x84);
        uVar3 = *(undefined4 *)(puVar13 + 0x11);
        uVar4 = *(undefined4 *)((longlong)puVar13 + 0x8c);
        *(undefined4 *)(puVar14 + 0x10) = *(undefined4 *)(puVar13 + 0x10);
        *(undefined4 *)((longlong)puVar14 + 0x84) = uVar2;
        *(undefined4 *)(puVar14 + 0x11) = uVar3;
        *(undefined4 *)((longlong)puVar14 + 0x8c) = uVar4;
      }
      iVar10 = 0;
      if (1 < param_2) {
        do {
          iVar1 = iVar10 * 2;
          iVar11 = iVar1 + 1;
          if (iVar1 + 2 < param_2) {
            cVar9 = FUN_1411d0f50(param_4,param_1 + (longlong)(iVar1 + 2) * 0x22,
                                  param_1 + (longlong)iVar11 * 0x22);
            if (cVar9 != '\0') {
              iVar11 = iVar1;
            }
            iVar11 = iVar11 + 1;
          }
          puVar18 = param_1 + (longlong)iVar11 * 0x22;
          puVar19 = param_1 + (longlong)iVar10 * 0x22;
          cVar9 = FUN_1411d0f50(param_4,puVar19,puVar18);
          if (cVar9 == '\0') break;
          if (puVar19 != puVar18) {
            lVar16 = 2;
            puVar14 = local_158;
            puVar13 = puVar19;
            do {
              puVar15 = puVar13;
              puVar12 = puVar14;
              uVar5 = puVar15[1];
              uVar6 = puVar15[2];
              uVar7 = puVar15[3];
              *puVar12 = *puVar15;
              puVar12[1] = uVar5;
              uVar5 = puVar15[4];
              uVar8 = puVar15[5];
              puVar12[2] = uVar6;
              puVar12[3] = uVar7;
              uVar6 = puVar15[6];
              uVar7 = puVar15[7];
              puVar12[4] = uVar5;
              puVar12[5] = uVar8;
              uVar5 = puVar15[8];
              uVar8 = puVar15[9];
              puVar12[6] = uVar6;
              puVar12[7] = uVar7;
              uVar6 = puVar15[10];
              uVar7 = puVar15[0xb];
              puVar12[8] = uVar5;
              puVar12[9] = uVar8;
              uVar5 = puVar15[0xc];
              uVar8 = puVar15[0xd];
              puVar12[10] = uVar6;
              puVar12[0xb] = uVar7;
              uVar6 = puVar15[0xe];
              uVar7 = puVar15[0xf];
              puVar12[0xc] = uVar5;
              puVar12[0xd] = uVar8;
              puVar12[0xe] = uVar6;
              puVar12[0xf] = uVar7;
              lVar16 = lVar16 + -1;
              puVar14 = puVar12 + 0x10;
              puVar13 = puVar15 + 0x10;
            } while (lVar16 != 0);
            uVar5 = puVar15[0x11];
            lVar16 = 2;
            puVar12[0x10] = puVar15[0x10];
            puVar12[0x11] = uVar5;
            puVar14 = puVar18;
            do {
              puVar12 = puVar19;
              puVar13 = puVar14;
              uVar5 = puVar13[1];
              *puVar12 = *puVar13;
              puVar12[1] = uVar5;
              uVar5 = puVar13[3];
              puVar12[2] = puVar13[2];
              puVar12[3] = uVar5;
              uVar5 = puVar13[5];
              puVar12[4] = puVar13[4];
              puVar12[5] = uVar5;
              uVar5 = puVar13[7];
              puVar12[6] = puVar13[6];
              puVar12[7] = uVar5;
              uVar5 = puVar13[9];
              puVar12[8] = puVar13[8];
              puVar12[9] = uVar5;
              uVar5 = puVar13[0xb];
              puVar12[10] = puVar13[10];
              puVar12[0xb] = uVar5;
              uVar5 = puVar13[0xd];
              puVar12[0xc] = puVar13[0xc];
              puVar12[0xd] = uVar5;
              uVar5 = puVar13[0xf];
              puVar12[0xe] = puVar13[0xe];
              puVar12[0xf] = uVar5;
              lVar16 = lVar16 + -1;
              puVar14 = puVar13 + 0x10;
              puVar19 = puVar12 + 0x10;
            } while (lVar16 != 0);
            uVar5 = puVar13[0x11];
            lVar16 = 2;
            puVar12[0x10] = puVar13[0x10];
            puVar12[0x11] = uVar5;
            puVar19 = local_158;
            do {
              puVar13 = puVar18;
              puVar14 = puVar19;
              uVar5 = puVar14[1];
              uVar6 = puVar14[2];
              uVar7 = puVar14[3];
              *puVar13 = *puVar14;
              puVar13[1] = uVar5;
              uVar5 = puVar14[4];
              uVar8 = puVar14[5];
              puVar13[2] = uVar6;
              puVar13[3] = uVar7;
              uVar6 = puVar14[6];
              uVar7 = puVar14[7];
              puVar13[4] = uVar5;
              puVar13[5] = uVar8;
              uVar5 = puVar14[8];
              uVar8 = puVar14[9];
              puVar13[6] = uVar6;
              puVar13[7] = uVar7;
              uVar6 = puVar14[10];
              uVar7 = puVar14[0xb];
              puVar13[8] = uVar5;
              puVar13[9] = uVar8;
              uVar5 = puVar14[0xc];
              uVar8 = puVar14[0xd];
              puVar13[10] = uVar6;
              puVar13[0xb] = uVar7;
              uVar6 = puVar14[0xe];
              uVar7 = puVar14[0xf];
              puVar13[0xc] = uVar5;
              puVar13[0xd] = uVar8;
              puVar13[0xe] = uVar6;
              puVar13[0xf] = uVar7;
              lVar16 = lVar16 + -1;
              puVar19 = puVar14 + 0x10;
              puVar18 = puVar13 + 0x10;
            } while (lVar16 != 0);
            uVar2 = *(undefined4 *)((longlong)puVar14 + 0x84);
            uVar3 = *(undefined4 *)(puVar14 + 0x11);
            uVar4 = *(undefined4 *)((longlong)puVar14 + 0x8c);
            *(undefined4 *)(puVar13 + 0x10) = *(undefined4 *)(puVar14 + 0x10);
            *(undefined4 *)((longlong)puVar13 + 0x84) = uVar2;
            *(undefined4 *)(puVar13 + 0x11) = uVar3;
            *(undefined4 *)((longlong)puVar13 + 0x8c) = uVar4;
          }
          iVar10 = iVar11;
        } while (iVar11 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar21 = puVar21 + -0x22;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 1411c3140 FUN_1411c3140 body=1451 status=ok
// SIG undefined FUN_1411c3140(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411c3140(undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  longlong lVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  int iVar20;
  undefined8 *puVar21;
  undefined1 auStack_288 [32];
  undefined8 local_268 [34];
  undefined8 local_158 [34];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_288;
  iVar10 = (param_2 + -2) / 2;
  if (-1 < iVar10) {
    iVar11 = iVar10 * 2 + 1;
    iVar1 = iVar11;
    iVar20 = iVar10;
joined_r0x0001411c3196:
    do {
      if (iVar11 < param_2) {
        iVar11 = iVar10 * 2;
        iVar17 = iVar11 + 1;
        if (iVar11 + 2 < param_2) {
          cVar9 = FUN_1411d20b0(param_4,param_1 + (longlong)(iVar11 + 2) * 0x22,
                                param_1 + (longlong)iVar17 * 0x22);
          if (cVar9 != '\0') {
            iVar17 = iVar11;
          }
          iVar17 = iVar17 + 1;
        }
        puVar21 = param_1 + (longlong)iVar17 * 0x22;
        puVar18 = param_1 + (longlong)iVar10 * 0x22;
        cVar9 = FUN_1411d20b0(param_4,puVar18,puVar21);
        if (cVar9 != '\0') {
          if (puVar18 != puVar21) {
            lVar16 = 2;
            puVar19 = local_268;
            puVar14 = puVar18;
            do {
              puVar12 = puVar14;
              puVar13 = puVar19;
              uVar5 = puVar12[1];
              uVar6 = puVar12[2];
              uVar7 = puVar12[3];
              *puVar13 = *puVar12;
              puVar13[1] = uVar5;
              uVar5 = puVar12[4];
              uVar8 = puVar12[5];
              puVar13[2] = uVar6;
              puVar13[3] = uVar7;
              uVar6 = puVar12[6];
              uVar7 = puVar12[7];
              puVar13[4] = uVar5;
              puVar13[5] = uVar8;
              uVar5 = puVar12[8];
              uVar8 = puVar12[9];
              puVar13[6] = uVar6;
              puVar13[7] = uVar7;
              uVar6 = puVar12[10];
              uVar7 = puVar12[0xb];
              puVar13[8] = uVar5;
              puVar13[9] = uVar8;
              uVar5 = puVar12[0xc];
              uVar8 = puVar12[0xd];
              puVar13[10] = uVar6;
              puVar13[0xb] = uVar7;
              uVar6 = puVar12[0xe];
              uVar7 = puVar12[0xf];
              puVar13[0xc] = uVar5;
              puVar13[0xd] = uVar8;
              puVar13[0xe] = uVar6;
              puVar13[0xf] = uVar7;
              lVar16 = lVar16 + -1;
              puVar19 = puVar13 + 0x10;
              puVar14 = puVar12 + 0x10;
            } while (lVar16 != 0);
            uVar5 = puVar12[0x11];
            lVar16 = 2;
            puVar13[0x10] = puVar12[0x10];
            puVar13[0x11] = uVar5;
            puVar19 = puVar21;
            do {
              puVar13 = puVar18;
              puVar14 = puVar19;
              uVar5 = puVar14[1];
              *puVar13 = *puVar14;
              puVar13[1] = uVar5;
              uVar5 = puVar14[3];
              puVar13[2] = puVar14[2];
              puVar13[3] = uVar5;
              uVar5 = puVar14[5];
              puVar13[4] = puVar14[4];
              puVar13[5] = uVar5;
              uVar5 = puVar14[7];
              puVar13[6] = puVar14[6];
              puVar13[7] = uVar5;
              uVar5 = puVar14[9];
              puVar13[8] = puVar14[8];
              puVar13[9] = uVar5;
              uVar5 = puVar14[0xb];
              puVar13[10] = puVar14[10];
              puVar13[0xb] = uVar5;
              uVar5 = puVar14[0xd];
              puVar13[0xc] = puVar14[0xc];
              puVar13[0xd] = uVar5;
              uVar5 = puVar14[0xf];
              puVar13[0xe] = puVar14[0xe];
              puVar13[0xf] = uVar5;
              lVar16 = lVar16 + -1;
              puVar19 = puVar14 + 0x10;
              puVar18 = puVar13 + 0x10;
            } while (lVar16 != 0);
            uVar5 = puVar14[0x11];
            lVar16 = 2;
            puVar13[0x10] = puVar14[0x10];
            puVar13[0x11] = uVar5;
            puVar18 = local_268;
            do {
              puVar14 = puVar21;
              puVar19 = puVar18;
              uVar5 = puVar19[1];
              uVar6 = puVar19[2];
              uVar7 = puVar19[3];
              *puVar14 = *puVar19;
              puVar14[1] = uVar5;
              uVar5 = puVar19[4];
              uVar8 = puVar19[5];
              puVar14[2] = uVar6;
              puVar14[3] = uVar7;
              uVar6 = puVar19[6];
              uVar7 = puVar19[7];
              puVar14[4] = uVar5;
              puVar14[5] = uVar8;
              uVar5 = puVar19[8];
              uVar8 = puVar19[9];
              puVar14[6] = uVar6;
              puVar14[7] = uVar7;
              uVar6 = puVar19[10];
              uVar7 = puVar19[0xb];
              puVar14[8] = uVar5;
              puVar14[9] = uVar8;
              uVar5 = puVar19[0xc];
              uVar8 = puVar19[0xd];
              puVar14[10] = uVar6;
              puVar14[0xb] = uVar7;
              uVar6 = puVar19[0xe];
              uVar7 = puVar19[0xf];
              puVar14[0xc] = uVar5;
              puVar14[0xd] = uVar8;
              puVar14[0xe] = uVar6;
              puVar14[0xf] = uVar7;
              lVar16 = lVar16 + -1;
              puVar18 = puVar19 + 0x10;
              puVar21 = puVar14 + 0x10;
            } while (lVar16 != 0);
            uVar2 = *(undefined4 *)((longlong)puVar19 + 0x84);
            uVar3 = *(undefined4 *)(puVar19 + 0x11);
            uVar4 = *(undefined4 *)((longlong)puVar19 + 0x8c);
            *(undefined4 *)(puVar14 + 0x10) = *(undefined4 *)(puVar19 + 0x10);
            *(undefined4 *)((longlong)puVar14 + 0x84) = uVar2;
            *(undefined4 *)(puVar14 + 0x11) = uVar3;
            *(undefined4 *)((longlong)puVar14 + 0x8c) = uVar4;
          }
          iVar11 = iVar17 * 2 + 1;
          iVar10 = iVar17;
          goto joined_r0x0001411c3196;
        }
      }
      iVar11 = iVar1 + -2;
      iVar10 = iVar20 + -1;
      iVar1 = iVar11;
      iVar20 = iVar10;
    } while (-1 < iVar10);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar21 = param_1 + (longlong)param_2 * 0x22;
    do {
      if (param_1 != puVar21) {
        lVar16 = 2;
        puVar18 = local_268;
        puVar19 = param_1;
        do {
          puVar13 = puVar19;
          puVar14 = puVar18;
          uVar5 = puVar13[1];
          uVar6 = puVar13[2];
          uVar7 = puVar13[3];
          *puVar14 = *puVar13;
          puVar14[1] = uVar5;
          uVar5 = puVar13[4];
          uVar8 = puVar13[5];
          puVar14[2] = uVar6;
          puVar14[3] = uVar7;
          uVar6 = puVar13[6];
          uVar7 = puVar13[7];
          puVar14[4] = uVar5;
          puVar14[5] = uVar8;
          uVar5 = puVar13[8];
          uVar8 = puVar13[9];
          puVar14[6] = uVar6;
          puVar14[7] = uVar7;
          uVar6 = puVar13[10];
          uVar7 = puVar13[0xb];
          puVar14[8] = uVar5;
          puVar14[9] = uVar8;
          uVar5 = puVar13[0xc];
          uVar8 = puVar13[0xd];
          puVar14[10] = uVar6;
          puVar14[0xb] = uVar7;
          uVar6 = puVar13[0xe];
          uVar7 = puVar13[0xf];
          puVar14[0xc] = uVar5;
          puVar14[0xd] = uVar8;
          puVar14[0xe] = uVar6;
          puVar14[0xf] = uVar7;
          lVar16 = lVar16 + -1;
          puVar18 = puVar14 + 0x10;
          puVar19 = puVar13 + 0x10;
        } while (lVar16 != 0);
        uVar5 = puVar13[0x11];
        lVar16 = 2;
        puVar14[0x10] = puVar13[0x10];
        puVar14[0x11] = uVar5;
        puVar18 = param_1;
        puVar19 = puVar21;
        do {
          puVar13 = puVar19;
          puVar14 = puVar18;
          uVar5 = puVar13[1];
          *puVar14 = *puVar13;
          puVar14[1] = uVar5;
          uVar5 = puVar13[3];
          puVar14[2] = puVar13[2];
          puVar14[3] = uVar5;
          uVar5 = puVar13[5];
          puVar14[4] = puVar13[4];
          puVar14[5] = uVar5;
          uVar5 = puVar13[7];
          puVar14[6] = puVar13[6];
          puVar14[7] = uVar5;
          uVar5 = puVar13[9];
          puVar14[8] = puVar13[8];
          puVar14[9] = uVar5;
          uVar5 = puVar13[0xb];
          puVar14[10] = puVar13[10];
          puVar14[0xb] = uVar5;
          uVar5 = puVar13[0xd];
          puVar14[0xc] = puVar13[0xc];
          puVar14[0xd] = uVar5;
          uVar5 = puVar13[0xf];
          puVar14[0xe] = puVar13[0xe];
          puVar14[0xf] = uVar5;
          lVar16 = lVar16 + -1;
          puVar18 = puVar14 + 0x10;
          puVar19 = puVar13 + 0x10;
        } while (lVar16 != 0);
        uVar5 = puVar13[0x11];
        lVar16 = 2;
        puVar14[0x10] = puVar13[0x10];
        puVar14[0x11] = uVar5;
        puVar18 = puVar21;
        puVar19 = local_268;
        do {
          puVar13 = puVar19;
          puVar14 = puVar18;
          uVar5 = puVar13[1];
          uVar6 = puVar13[2];
          uVar7 = puVar13[3];
          *puVar14 = *puVar13;
          puVar14[1] = uVar5;
          uVar5 = puVar13[4];
          uVar8 = puVar13[5];
          puVar14[2] = uVar6;
          puVar14[3] = uVar7;
          uVar6 = puVar13[6];
          uVar7 = puVar13[7];
          puVar14[4] = uVar5;
          puVar14[5] = uVar8;
          uVar5 = puVar13[8];
          uVar8 = puVar13[9];
          puVar14[6] = uVar6;
          puVar14[7] = uVar7;
          uVar6 = puVar13[10];
          uVar7 = puVar13[0xb];
          puVar14[8] = uVar5;
          puVar14[9] = uVar8;
          uVar5 = puVar13[0xc];
          uVar8 = puVar13[0xd];
          puVar14[10] = uVar6;
          puVar14[0xb] = uVar7;
          uVar6 = puVar13[0xe];
          uVar7 = puVar13[0xf];
          puVar14[0xc] = uVar5;
          puVar14[0xd] = uVar8;
          puVar14[0xe] = uVar6;
          puVar14[0xf] = uVar7;
          lVar16 = lVar16 + -1;
          puVar18 = puVar14 + 0x10;
          puVar19 = puVar13 + 0x10;
        } while (lVar16 != 0);
        uVar2 = *(undefined4 *)((longlong)puVar13 + 0x84);
        uVar3 = *(undefined4 *)(puVar13 + 0x11);
        uVar4 = *(undefined4 *)((longlong)puVar13 + 0x8c);
        *(undefined4 *)(puVar14 + 0x10) = *(undefined4 *)(puVar13 + 0x10);
        *(undefined4 *)((longlong)puVar14 + 0x84) = uVar2;
        *(undefined4 *)(puVar14 + 0x11) = uVar3;
        *(undefined4 *)((longlong)puVar14 + 0x8c) = uVar4;
      }
      iVar10 = 0;
      if (1 < param_2) {
        do {
          iVar1 = iVar10 * 2;
          iVar11 = iVar1 + 1;
          if (iVar1 + 2 < param_2) {
            cVar9 = FUN_1411d20b0(param_4,param_1 + (longlong)(iVar1 + 2) * 0x22,
                                  param_1 + (longlong)iVar11 * 0x22);
            if (cVar9 != '\0') {
              iVar11 = iVar1;
            }
            iVar11 = iVar11 + 1;
          }
          puVar18 = param_1 + (longlong)iVar11 * 0x22;
          puVar19 = param_1 + (longlong)iVar10 * 0x22;
          cVar9 = FUN_1411d20b0(param_4,puVar19,puVar18);
          if (cVar9 == '\0') break;
          if (puVar19 != puVar18) {
            lVar16 = 2;
            puVar14 = local_158;
            puVar13 = puVar19;
            do {
              puVar15 = puVar13;
              puVar12 = puVar14;
              uVar5 = puVar15[1];
              uVar6 = puVar15[2];
              uVar7 = puVar15[3];
              *puVar12 = *puVar15;
              puVar12[1] = uVar5;
              uVar5 = puVar15[4];
              uVar8 = puVar15[5];
              puVar12[2] = uVar6;
              puVar12[3] = uVar7;
              uVar6 = puVar15[6];
              uVar7 = puVar15[7];
              puVar12[4] = uVar5;
              puVar12[5] = uVar8;
              uVar5 = puVar15[8];
              uVar8 = puVar15[9];
              puVar12[6] = uVar6;
              puVar12[7] = uVar7;
              uVar6 = puVar15[10];
              uVar7 = puVar15[0xb];
              puVar12[8] = uVar5;
              puVar12[9] = uVar8;
              uVar5 = puVar15[0xc];
              uVar8 = puVar15[0xd];
              puVar12[10] = uVar6;
              puVar12[0xb] = uVar7;
              uVar6 = puVar15[0xe];
              uVar7 = puVar15[0xf];
              puVar12[0xc] = uVar5;
              puVar12[0xd] = uVar8;
              puVar12[0xe] = uVar6;
              puVar12[0xf] = uVar7;
              lVar16 = lVar16 + -1;
              puVar14 = puVar12 + 0x10;
              puVar13 = puVar15 + 0x10;
            } while (lVar16 != 0);
            uVar5 = puVar15[0x11];
            lVar16 = 2;
            puVar12[0x10] = puVar15[0x10];
            puVar12[0x11] = uVar5;
            puVar14 = puVar18;
            do {
              puVar12 = puVar19;
              puVar13 = puVar14;
              uVar5 = puVar13[1];
              *puVar12 = *puVar13;
              puVar12[1] = uVar5;
              uVar5 = puVar13[3];
              puVar12[2] = puVar13[2];
              puVar12[3] = uVar5;
              uVar5 = puVar13[5];
              puVar12[4] = puVar13[4];
              puVar12[5] = uVar5;
              uVar5 = puVar13[7];
              puVar12[6] = puVar13[6];
              puVar12[7] = uVar5;
              uVar5 = puVar13[9];
              puVar12[8] = puVar13[8];
              puVar12[9] = uVar5;
              uVar5 = puVar13[0xb];
              puVar12[10] = puVar13[10];
              puVar12[0xb] = uVar5;
              uVar5 = puVar13[0xd];
              puVar12[0xc] = puVar13[0xc];
              puVar12[0xd] = uVar5;
              uVar5 = puVar13[0xf];
              puVar12[0xe] = puVar13[0xe];
              puVar12[0xf] = uVar5;
              lVar16 = lVar16 + -1;
              puVar14 = puVar13 + 0x10;
              puVar19 = puVar12 + 0x10;
            } while (lVar16 != 0);
            uVar5 = puVar13[0x11];
            lVar16 = 2;
            puVar12[0x10] = puVar13[0x10];
            puVar12[0x11] = uVar5;
            puVar19 = local_158;
            do {
              puVar13 = puVar18;
              puVar14 = puVar19;
              uVar5 = puVar14[1];
              uVar6 = puVar14[2];
              uVar7 = puVar14[3];
              *puVar13 = *puVar14;
              puVar13[1] = uVar5;
              uVar5 = puVar14[4];
              uVar8 = puVar14[5];
              puVar13[2] = uVar6;
              puVar13[3] = uVar7;
              uVar6 = puVar14[6];
              uVar7 = puVar14[7];
              puVar13[4] = uVar5;
              puVar13[5] = uVar8;
              uVar5 = puVar14[8];
              uVar8 = puVar14[9];
              puVar13[6] = uVar6;
              puVar13[7] = uVar7;
              uVar6 = puVar14[10];
              uVar7 = puVar14[0xb];
              puVar13[8] = uVar5;
              puVar13[9] = uVar8;
              uVar5 = puVar14[0xc];
              uVar8 = puVar14[0xd];
              puVar13[10] = uVar6;
              puVar13[0xb] = uVar7;
              uVar6 = puVar14[0xe];
              uVar7 = puVar14[0xf];
              puVar13[0xc] = uVar5;
              puVar13[0xd] = uVar8;
              puVar13[0xe] = uVar6;
              puVar13[0xf] = uVar7;
              lVar16 = lVar16 + -1;
              puVar19 = puVar14 + 0x10;
              puVar18 = puVar13 + 0x10;
            } while (lVar16 != 0);
            uVar2 = *(undefined4 *)((longlong)puVar14 + 0x84);
            uVar3 = *(undefined4 *)(puVar14 + 0x11);
            uVar4 = *(undefined4 *)((longlong)puVar14 + 0x8c);
            *(undefined4 *)(puVar13 + 0x10) = *(undefined4 *)(puVar14 + 0x10);
            *(undefined4 *)((longlong)puVar13 + 0x84) = uVar2;
            *(undefined4 *)(puVar13 + 0x11) = uVar3;
            *(undefined4 *)((longlong)puVar13 + 0x8c) = uVar4;
          }
          iVar10 = iVar11;
        } while (iVar11 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar21 = puVar21 + -0x22;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 1411c36f0 FUN_1411c36f0 body=450 status=ok
// SIG undefined FUN_1411c36f0(void)

void FUN_1411c36f0(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  iVar7 = (param_2 + -2) / 2;
  if (-1 < iVar7) {
    iVar8 = iVar7 * 2 + 1;
    iVar12 = iVar8;
    iVar13 = iVar7;
joined_r0x0001411c371a:
    do {
      if (iVar8 < param_2) {
        iVar10 = iVar7 * 2 + 1;
        iVar8 = iVar7 * 2 + 2;
        iVar11 = iVar10;
        if ((iVar8 < param_2) &&
           (iVar11 = iVar8,
           *(float *)(param_1 + (longlong)iVar10 * 3 + 2) <=
           *(float *)(param_1 + (longlong)iVar8 * 3 + 2) &&
           *(float *)(param_1 + (longlong)iVar8 * 3 + 2) !=
           *(float *)(param_1 + (longlong)iVar10 * 3 + 2))) {
          iVar11 = iVar10;
        }
        puVar9 = param_1 + (longlong)iVar7 * 3;
        puVar1 = param_1 + (longlong)iVar11 * 3;
        if (*(float *)(param_1 + (longlong)iVar11 * 3 + 2) < *(float *)(puVar9 + 2)) {
          if (puVar9 != puVar1) {
            uVar4 = puVar1[1];
            uVar5 = *puVar9;
            uVar6 = puVar9[1];
            uVar3 = puVar9[2];
            *puVar9 = *puVar1;
            puVar9[1] = uVar4;
            puVar9[2] = puVar1[2];
            *puVar1 = uVar5;
            puVar1[1] = uVar6;
            puVar1[2] = uVar3;
          }
          iVar8 = iVar11 * 2 + 1;
          iVar7 = iVar11;
          goto joined_r0x0001411c371a;
        }
      }
      iVar8 = iVar12 + -2;
      iVar7 = iVar13 + -1;
      iVar12 = iVar8;
      iVar13 = iVar7;
    } while (-1 < iVar7);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar9 = param_1 + (longlong)param_2 * 3;
    do {
      if (param_1 != puVar9) {
        uVar4 = puVar9[1];
        uVar5 = *param_1;
        uVar6 = param_1[1];
        uVar3 = param_1[2];
        *param_1 = *puVar9;
        param_1[1] = uVar4;
        param_1[2] = puVar9[2];
        *puVar9 = uVar5;
        puVar9[1] = uVar6;
        puVar9[2] = uVar3;
      }
      iVar7 = 0;
      if (1 < param_2) {
        do {
          iVar8 = iVar7 * 2 + 1;
          iVar13 = iVar7 * 2 + 2;
          iVar12 = iVar8;
          if ((iVar13 < param_2) &&
             (iVar12 = iVar13,
             *(float *)(param_1 + (longlong)iVar8 * 3 + 2) <=
             *(float *)(param_1 + (longlong)iVar13 * 3 + 2) &&
             *(float *)(param_1 + (longlong)iVar13 * 3 + 2) !=
             *(float *)(param_1 + (longlong)iVar8 * 3 + 2))) {
            iVar12 = iVar8;
          }
          puVar1 = param_1 + (longlong)iVar7 * 3;
          puVar2 = param_1 + (longlong)iVar12 * 3;
          if (*(float *)(puVar1 + 2) <= *(float *)(param_1 + (longlong)iVar12 * 3 + 2)) break;
          if (puVar1 != puVar2) {
            uVar4 = puVar2[1];
            uVar5 = *puVar1;
            uVar6 = puVar1[1];
            uVar3 = puVar1[2];
            *puVar1 = *puVar2;
            puVar1[1] = uVar4;
            puVar1[2] = puVar2[2];
            *puVar2 = uVar5;
            puVar2[1] = uVar6;
            puVar2[2] = uVar3;
          }
          iVar7 = iVar12;
        } while (iVar12 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar9 = puVar9 + -3;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 1411c38c0 IntroSortInternal<`FSparseVoxelOctree::Raycast'::`2'::FTileIntersection,FIdentityFunctor,TDereferenceWrapper<`FSparseVoxelOctree::Raycast'::`2'::FTileIntersection,<lambda_059fd0e59990f30459835bdbca671ace>_>_> body=883 status=ok
// SIG undefined IntroSortInternal<`FSparseVoxelOctree::Raycast'::`2'::FTileIntersection,FIdentityFunctor,TDereferenceWrapper<`FSparseVoxelOctree::Raycast'::`2'::FTileIntersection,<lambda_059fd0e59990f30459835bdbca671ace>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<_FSparseVoxelOctree::Raycast_::_2_::FTileIntersection,FIdentityFunctor,TDereferenceWrapper<_FSparseVoxelOctree::Raycast_::_2_::FTileIntersection,<lambda_059fd0e59990f30459835bdbca671ace>_>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  longlong lVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  longlong *plVar22;
  float fVar23;
  undefined1 auStack_378 [48];
  longlong local_348;
  longlong local_338;
  longlong lStack_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (1 < param_2) {
    local_38 = DAT_1468387a8 ^ (ulonglong)auStack_378;
    lStack_330 = param_2 * 0x30 + -0x30 + param_1;
    fVar23 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar23 = fVar23 + 1.8446744e+19;
    }
    local_338 = param_1;
    fVar23 = ::_guard_xfg_dispatch_icall_nop(fVar23);
    local_328 = (undefined4)(longlong)(fVar23 + fVar23);
    ::_guard_xfg_dispatch_icall_nop(local_320,0,0x2e8);
    plVar22 = &local_338;
    do {
      pfVar21 = (float *)*plVar22;
      pfVar16 = (float *)plVar22[1];
      lVar1 = plVar22[2];
      local_348._0_4_ = (int)lVar1;
      lVar15 = ((longlong)pfVar16 - (longlong)pfVar21) / 0x30 + 1;
      pfVar20 = pfVar21;
      if ((int)local_348 != 0) {
LAB_1411c39b0:
        if (8 < lVar15) {
          if (lVar15 < 0) {
            lVar15 = lVar15 + 1;
          }
          pfVar21 = pfVar20 + (lVar15 >> 1) * 0xc;
          if (pfVar21 != pfVar20) {
            uVar8 = *(undefined8 *)(pfVar20 + 2);
            fVar23 = *pfVar21;
            fVar2 = pfVar21[1];
            fVar3 = pfVar21[2];
            fVar4 = pfVar21[3];
            uVar9 = *(undefined8 *)(pfVar21 + 4);
            uVar10 = *(undefined8 *)(pfVar21 + 6);
            uVar11 = *(undefined8 *)(pfVar21 + 8);
            uVar12 = *(undefined8 *)(pfVar21 + 10);
            *(undefined8 *)pfVar21 = *(undefined8 *)pfVar20;
            *(undefined8 *)(pfVar21 + 2) = uVar8;
            uVar8 = *(undefined8 *)(pfVar20 + 6);
            *(undefined8 *)(pfVar21 + 4) = *(undefined8 *)(pfVar20 + 4);
            *(undefined8 *)(pfVar21 + 6) = uVar8;
            fVar5 = pfVar20[9];
            fVar6 = pfVar20[10];
            fVar7 = pfVar20[0xb];
            pfVar21[8] = pfVar20[8];
            pfVar21[9] = fVar5;
            pfVar21[10] = fVar6;
            pfVar21[0xb] = fVar7;
            *pfVar20 = fVar23;
            pfVar20[1] = fVar2;
            pfVar20[2] = fVar3;
            pfVar20[3] = fVar4;
            *(undefined8 *)(pfVar20 + 4) = uVar9;
            *(undefined8 *)(pfVar20 + 6) = uVar10;
            *(undefined8 *)(pfVar20 + 8) = uVar11;
            *(undefined8 *)(pfVar20 + 10) = uVar12;
          }
          pfVar18 = pfVar16 + 0xc;
          pfVar21 = pfVar20;
LAB_1411c3a10:
          pfVar17 = pfVar21;
          pfVar21 = pfVar17 + 0xc;
          if (pfVar21 <= pfVar16) goto code_r0x0001411c3a19;
          goto LAB_1411c3a24;
        }
        for (; pfVar18 = pfVar20, pfVar21 = pfVar20, pfVar20 < pfVar16; pfVar16 = pfVar16 + -0xc) {
          while (pfVar21 = pfVar21 + 0xc, pfVar21 <= pfVar16) {
            if (*pfVar18 < *pfVar21) {
              pfVar18 = pfVar21;
            }
          }
          if (pfVar18 != pfVar16) {
            uVar8 = *(undefined8 *)(pfVar16 + 2);
            uVar9 = *(undefined8 *)pfVar18;
            uVar10 = *(undefined8 *)(pfVar18 + 2);
            uVar11 = *(undefined8 *)(pfVar18 + 4);
            uVar12 = *(undefined8 *)(pfVar18 + 6);
            uVar13 = *(undefined8 *)(pfVar18 + 8);
            uVar14 = *(undefined8 *)(pfVar18 + 10);
            *(undefined8 *)pfVar18 = *(undefined8 *)pfVar16;
            *(undefined8 *)(pfVar18 + 2) = uVar8;
            uVar8 = *(undefined8 *)(pfVar16 + 6);
            *(undefined8 *)(pfVar18 + 4) = *(undefined8 *)(pfVar16 + 4);
            *(undefined8 *)(pfVar18 + 6) = uVar8;
            uVar8 = *(undefined8 *)(pfVar16 + 10);
            *(undefined8 *)(pfVar18 + 8) = *(undefined8 *)(pfVar16 + 8);
            *(undefined8 *)(pfVar18 + 10) = uVar8;
            *(undefined8 *)pfVar16 = uVar9;
            *(undefined8 *)(pfVar16 + 2) = uVar10;
            *(undefined8 *)(pfVar16 + 4) = uVar11;
            *(undefined8 *)(pfVar16 + 6) = uVar12;
            *(undefined8 *)(pfVar16 + 8) = uVar13;
            *(undefined8 *)(pfVar16 + 10) = uVar14;
          }
        }
        goto LAB_1411c3b73;
      }
LAB_1411c3b64:
      local_348 = lVar1;
      HeapSortInternal<_FSparseVoxelOctree::Raycast_::_2_::FTileIntersection,FIdentityFunctor,TDereferenceWrapper<_FSparseVoxelOctree::Raycast_::_2_::FTileIntersection,<lambda_059fd0e59990f30459835bdbca671ace>_>_>
                (pfVar21,lVar15,param_3,param_4);
LAB_1411c3b73:
      plVar22 = plVar22 + -3;
    } while (&local_338 <= plVar22);
  }
  return;
code_r0x0001411c3a19:
  if (*pfVar21 < *pfVar20 || *pfVar21 == *pfVar20) goto LAB_1411c3a10;
LAB_1411c3a24:
  do {
    pfVar19 = pfVar18;
    pfVar18 = pfVar19 + -0xc;
    if (pfVar18 <= pfVar20) break;
  } while (*pfVar20 < *pfVar18 || *pfVar20 == *pfVar18);
  if (pfVar21 <= pfVar18) {
    if (pfVar21 != pfVar18) {
      uVar8 = *(undefined8 *)(pfVar19 + -10);
      fVar23 = *pfVar21;
      fVar2 = pfVar17[0xd];
      fVar3 = pfVar17[0xe];
      fVar4 = pfVar17[0xf];
      uVar9 = *(undefined8 *)(pfVar17 + 0x10);
      uVar10 = *(undefined8 *)(pfVar17 + 0x12);
      uVar11 = *(undefined8 *)(pfVar17 + 0x14);
      uVar12 = *(undefined8 *)(pfVar17 + 0x16);
      *(undefined8 *)pfVar21 = *(undefined8 *)pfVar18;
      *(undefined8 *)(pfVar17 + 0xe) = uVar8;
      uVar8 = *(undefined8 *)(pfVar19 + -6);
      *(undefined8 *)(pfVar17 + 0x10) = *(undefined8 *)(pfVar19 + -8);
      *(undefined8 *)(pfVar17 + 0x12) = uVar8;
      fVar5 = pfVar19[-3];
      fVar6 = pfVar19[-2];
      fVar7 = pfVar19[-1];
      pfVar17[0x14] = pfVar19[-4];
      pfVar17[0x15] = fVar5;
      pfVar17[0x16] = fVar6;
      pfVar17[0x17] = fVar7;
      *pfVar18 = fVar23;
      pfVar19[-0xb] = fVar2;
      pfVar19[-10] = fVar3;
      pfVar19[-9] = fVar4;
      *(undefined8 *)(pfVar19 + -8) = uVar9;
      *(undefined8 *)(pfVar19 + -6) = uVar10;
      *(undefined8 *)(pfVar19 + -4) = uVar11;
      *(undefined8 *)(pfVar19 + -2) = uVar12;
    }
    goto LAB_1411c3a10;
  }
  if (pfVar20 != pfVar18) {
    uVar8 = *(undefined8 *)(pfVar19 + -10);
    fVar23 = *pfVar20;
    fVar2 = pfVar20[1];
    fVar3 = pfVar20[2];
    fVar4 = pfVar20[3];
    uVar9 = *(undefined8 *)(pfVar20 + 4);
    uVar10 = *(undefined8 *)(pfVar20 + 6);
    uVar11 = *(undefined8 *)(pfVar20 + 8);
    uVar12 = *(undefined8 *)(pfVar20 + 10);
    *(undefined8 *)pfVar20 = *(undefined8 *)pfVar18;
    *(undefined8 *)(pfVar20 + 2) = uVar8;
    uVar8 = *(undefined8 *)(pfVar19 + -6);
    *(undefined8 *)(pfVar20 + 4) = *(undefined8 *)(pfVar19 + -8);
    *(undefined8 *)(pfVar20 + 6) = uVar8;
    fVar5 = pfVar19[-3];
    fVar6 = pfVar19[-2];
    fVar7 = pfVar19[-1];
    pfVar20[8] = pfVar19[-4];
    pfVar20[9] = fVar5;
    pfVar20[10] = fVar6;
    pfVar20[0xb] = fVar7;
    *pfVar18 = fVar23;
    pfVar19[-0xb] = fVar2;
    pfVar19[-10] = fVar3;
    pfVar19[-9] = fVar4;
    *(undefined8 *)(pfVar19 + -8) = uVar9;
    *(undefined8 *)(pfVar19 + -6) = uVar10;
    *(undefined8 *)(pfVar19 + -4) = uVar11;
    *(undefined8 *)(pfVar19 + -2) = uVar12;
  }
  local_348._0_4_ = (int)local_348 + -1;
  lVar15 = (longlong)pfVar18 + (-0x30 - (longlong)pfVar20);
  lVar15 = lVar15 / 6 + (lVar15 >> 0x3f);
  if ((lVar15 >> 3) - (lVar15 >> 0x3f) < ((longlong)pfVar16 - (longlong)pfVar21) / 0x30) {
    if (pfVar21 < pfVar16) {
      *plVar22 = (longlong)pfVar21;
      plVar22[1] = (longlong)pfVar16;
      *(int *)(plVar22 + 2) = (int)local_348;
      plVar22 = plVar22 + 3;
    }
    if (pfVar18 <= pfVar20 + 0xc) goto LAB_1411c3b73;
    pfVar16 = pfVar19 + -0x18;
    pfVar21 = pfVar20;
  }
  else {
    if (pfVar20 + 0xc < pfVar18) {
      *plVar22 = (longlong)pfVar20;
      plVar22[1] = (longlong)(pfVar19 + -0x18);
      *(int *)(plVar22 + 2) = (int)local_348;
      plVar22 = plVar22 + 3;
    }
    if (pfVar16 <= pfVar21) goto LAB_1411c3b73;
  }
  lVar15 = ((longlong)pfVar16 - (longlong)pfVar21) / 0x30 + 1;
  pfVar20 = pfVar21;
  if ((int)local_348 == 0) goto LAB_1411c3b64;
  goto LAB_1411c39b0;
}



// FUNCTION 1411c3c40 FUN_1411c3c40 body=2408 status=ok
// SIG undefined FUN_1411c3c40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411c3c40(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  float fVar14;
  undefined1 auStack_688 [48];
  longlong local_658;
  undefined8 local_650;
  undefined8 uStack_648;
  undefined8 local_640;
  undefined8 uStack_638;
  undefined8 local_630;
  undefined8 uStack_628;
  undefined8 local_620;
  undefined8 uStack_618;
  undefined8 local_610;
  undefined8 uStack_608;
  undefined8 local_600;
  undefined8 uStack_5f8;
  undefined8 local_5f0;
  undefined8 uStack_5e8;
  undefined8 local_5e0;
  undefined8 uStack_5d8;
  undefined8 local_5d0;
  undefined8 uStack_5c8;
  undefined8 local_5c0;
  undefined8 uStack_5b8;
  undefined8 local_5b0;
  undefined8 uStack_5a8;
  undefined8 local_5a0;
  undefined8 uStack_598;
  undefined8 local_590;
  undefined8 uStack_588;
  undefined8 local_580;
  undefined8 uStack_578;
  undefined8 local_570;
  undefined8 uStack_568;
  undefined8 local_560;
  undefined8 uStack_558;
  undefined8 local_550;
  undefined8 uStack_548;
  undefined8 local_540;
  undefined8 uStack_538;
  undefined8 local_530;
  undefined8 uStack_528;
  undefined8 local_520;
  undefined8 uStack_518;
  undefined8 local_510;
  undefined8 uStack_508;
  undefined8 local_500;
  undefined8 uStack_4f8;
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  undefined8 local_4e0;
  undefined8 uStack_4d8;
  undefined8 local_4d0;
  undefined8 uStack_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  longlong local_348;
  longlong lStack_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_688;
    lStack_340 = param_2 * 0xc0 + -0xc0 + param_1;
    fVar14 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar14 = fVar14 + 1.8446744e+19;
    }
    local_348 = param_1;
    fVar14 = _guard_xfg_dispatch_icall_nop(fVar14);
    local_338 = (undefined4)(longlong)(fVar14 + fVar14);
    _guard_xfg_dispatch_icall_nop(local_330,0,0x2e8);
    plVar9 = &local_348;
    do {
      puVar12 = (undefined8 *)*plVar9;
      puVar13 = (undefined8 *)plVar9[1];
      local_658 = plVar9[2];
      lVar5 = ((longlong)puVar13 - (longlong)puVar12) / 0xc0 + 1;
      puVar11 = puVar12;
      iVar10 = (int)local_658;
      if ((int)local_658 != 0) {
LAB_1411c3d50:
        if (8 < lVar5) {
          if (lVar5 < 0) {
            lVar5 = lVar5 + 1;
          }
          puVar12 = puVar11 + (lVar5 >> 1) * 0x18;
          if (puVar12 != puVar11) {
            local_650 = *puVar12;
            uStack_648 = puVar12[1];
            local_640 = puVar12[2];
            uStack_638 = puVar12[3];
            local_630 = puVar12[4];
            uStack_628 = puVar12[5];
            local_620 = puVar12[6];
            uStack_618 = puVar12[7];
            local_610 = puVar12[8];
            uStack_608 = puVar12[9];
            local_600 = puVar12[10];
            uStack_5f8 = puVar12[0xb];
            local_5f0 = puVar12[0xc];
            uStack_5e8 = puVar12[0xd];
            local_5e0 = puVar12[0xe];
            uStack_5d8 = puVar12[0xf];
            local_5d0 = puVar12[0x10];
            uStack_5c8 = puVar12[0x11];
            local_5c0 = puVar12[0x12];
            uStack_5b8 = puVar12[0x13];
            uVar1 = puVar12[0x14];
            uVar2 = puVar12[0x15];
            local_5a0 = puVar12[0x16];
            uStack_598 = puVar12[0x17];
            uVar3 = puVar11[1];
            *puVar12 = *puVar11;
            puVar12[1] = uVar3;
            uVar3 = puVar11[3];
            puVar12[2] = puVar11[2];
            puVar12[3] = uVar3;
            uVar3 = puVar11[5];
            puVar12[4] = puVar11[4];
            puVar12[5] = uVar3;
            uVar3 = puVar11[7];
            puVar12[6] = puVar11[6];
            puVar12[7] = uVar3;
            uVar3 = puVar11[9];
            puVar12[8] = puVar11[8];
            puVar12[9] = uVar3;
            uVar3 = puVar11[0xb];
            puVar12[10] = puVar11[10];
            puVar12[0xb] = uVar3;
            uVar3 = puVar11[0xd];
            puVar12[0xc] = puVar11[0xc];
            puVar12[0xd] = uVar3;
            uVar3 = puVar11[0xf];
            puVar12[0xe] = puVar11[0xe];
            puVar12[0xf] = uVar3;
            uVar3 = puVar11[0x11];
            puVar12[0x10] = puVar11[0x10];
            puVar12[0x11] = uVar3;
            uVar3 = puVar11[0x13];
            puVar12[0x12] = puVar11[0x12];
            puVar12[0x13] = uVar3;
            uVar3 = puVar11[0x15];
            puVar12[0x14] = puVar11[0x14];
            puVar12[0x15] = uVar3;
            uVar3 = puVar11[0x17];
            puVar12[0x16] = puVar11[0x16];
            puVar12[0x17] = uVar3;
            *puVar11 = local_650;
            puVar11[1] = uStack_648;
            puVar11[2] = local_640;
            puVar11[3] = uStack_638;
            puVar11[4] = local_630;
            puVar11[5] = uStack_628;
            puVar11[6] = local_620;
            puVar11[7] = uStack_618;
            puVar11[8] = local_610;
            puVar11[9] = uStack_608;
            puVar11[10] = local_600;
            puVar11[0xb] = uStack_5f8;
            puVar11[0xc] = local_5f0;
            puVar11[0xd] = uStack_5e8;
            puVar11[0xe] = local_5e0;
            puVar11[0xf] = uStack_5d8;
            puVar11[0x10] = local_5d0;
            puVar11[0x11] = uStack_5c8;
            local_5b0._0_4_ = (undefined4)uVar1;
            local_5b0._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
            uStack_5a8._0_4_ = (undefined4)uVar2;
            uStack_5a8._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
            puVar11[0x12] = local_5c0;
            puVar11[0x13] = uStack_5b8;
            *(undefined4 *)(puVar11 + 0x14) = (undefined4)local_5b0;
            *(undefined4 *)((longlong)puVar11 + 0xa4) = local_5b0._4_4_;
            *(undefined4 *)(puVar11 + 0x15) = (undefined4)uStack_5a8;
            *(undefined4 *)((longlong)puVar11 + 0xac) = uStack_5a8._4_4_;
            puVar11[0x16] = local_5a0;
            puVar11[0x17] = uStack_598;
            local_5b0 = uVar1;
            uStack_5a8 = uVar2;
          }
          puVar6 = puVar13 + 0x18;
          puVar12 = puVar11;
LAB_1411c3f20:
          puVar8 = puVar12;
          puVar12 = puVar8 + 0x18;
          if (puVar12 <= puVar13) goto code_r0x0001411c3f2c;
          goto LAB_1411c3f40;
        }
        for (; puVar6 = puVar11, puVar12 = puVar11, puVar11 < puVar13; puVar13 = puVar13 + -0x18) {
          while (puVar12 = puVar12 + 0x18, puVar12 <= puVar13) {
            cVar4 = FUN_1411d10c0(param_4,puVar6,puVar12);
            if (cVar4 != '\0') {
              puVar6 = puVar12;
            }
          }
          if (puVar6 != puVar13) {
            local_410 = *puVar6;
            uStack_408 = puVar6[1];
            local_400 = puVar6[2];
            uStack_3f8 = puVar6[3];
            local_3f0 = puVar6[4];
            uStack_3e8 = puVar6[5];
            local_3e0 = puVar6[6];
            uStack_3d8 = puVar6[7];
            local_3d0 = puVar6[8];
            uStack_3c8 = puVar6[9];
            local_3c0 = puVar6[10];
            uStack_3b8 = puVar6[0xb];
            local_3b0 = puVar6[0xc];
            uStack_3a8 = puVar6[0xd];
            local_3a0 = puVar6[0xe];
            uStack_398 = puVar6[0xf];
            local_390 = puVar6[0x10];
            uStack_388 = puVar6[0x11];
            local_380 = puVar6[0x12];
            uStack_378 = puVar6[0x13];
            uVar1 = puVar6[0x14];
            uVar2 = puVar6[0x15];
            local_360 = puVar6[0x16];
            uStack_358 = puVar6[0x17];
            uVar3 = puVar13[1];
            *puVar6 = *puVar13;
            puVar6[1] = uVar3;
            uVar3 = puVar13[3];
            puVar6[2] = puVar13[2];
            puVar6[3] = uVar3;
            uVar3 = puVar13[5];
            puVar6[4] = puVar13[4];
            puVar6[5] = uVar3;
            uVar3 = puVar13[7];
            puVar6[6] = puVar13[6];
            puVar6[7] = uVar3;
            uVar3 = puVar13[9];
            puVar6[8] = puVar13[8];
            puVar6[9] = uVar3;
            uVar3 = puVar13[0xb];
            puVar6[10] = puVar13[10];
            puVar6[0xb] = uVar3;
            uVar3 = puVar13[0xd];
            puVar6[0xc] = puVar13[0xc];
            puVar6[0xd] = uVar3;
            uVar3 = puVar13[0xf];
            puVar6[0xe] = puVar13[0xe];
            puVar6[0xf] = uVar3;
            uVar3 = puVar13[0x11];
            puVar6[0x10] = puVar13[0x10];
            puVar6[0x11] = uVar3;
            uVar3 = puVar13[0x13];
            puVar6[0x12] = puVar13[0x12];
            puVar6[0x13] = uVar3;
            uVar3 = puVar13[0x15];
            puVar6[0x14] = puVar13[0x14];
            puVar6[0x15] = uVar3;
            uVar3 = puVar13[0x17];
            puVar6[0x16] = puVar13[0x16];
            puVar6[0x17] = uVar3;
            *puVar13 = local_410;
            puVar13[1] = uStack_408;
            puVar13[2] = local_400;
            puVar13[3] = uStack_3f8;
            puVar13[4] = local_3f0;
            puVar13[5] = uStack_3e8;
            puVar13[6] = local_3e0;
            puVar13[7] = uStack_3d8;
            puVar13[8] = local_3d0;
            puVar13[9] = uStack_3c8;
            puVar13[10] = local_3c0;
            puVar13[0xb] = uStack_3b8;
            puVar13[0xc] = local_3b0;
            puVar13[0xd] = uStack_3a8;
            puVar13[0xe] = local_3a0;
            puVar13[0xf] = uStack_398;
            puVar13[0x10] = local_390;
            puVar13[0x11] = uStack_388;
            local_370._0_4_ = (undefined4)uVar1;
            local_370._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
            uStack_368._0_4_ = (undefined4)uVar2;
            uStack_368._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
            puVar13[0x12] = local_380;
            puVar13[0x13] = uStack_378;
            *(undefined4 *)(puVar13 + 0x14) = (undefined4)local_370;
            *(undefined4 *)((longlong)puVar13 + 0xa4) = local_370._4_4_;
            *(undefined4 *)(puVar13 + 0x15) = (undefined4)uStack_368;
            *(undefined4 *)((longlong)puVar13 + 0xac) = uStack_368._4_4_;
            puVar13[0x16] = local_360;
            puVar13[0x17] = uStack_358;
            local_370 = uVar1;
            uStack_368 = uVar2;
          }
        }
        goto LAB_1411c435f;
      }
LAB_1411c4346:
      FUN_1411c1320(puVar12,lVar5,param_3,param_4);
LAB_1411c435f:
      plVar9 = plVar9 + -3;
    } while (&local_348 <= plVar9);
  }
  return;
code_r0x0001411c3f2c:
  cVar4 = FUN_1411d10c0(param_4,puVar11,puVar12);
  if (cVar4 == '\0') goto LAB_1411c3f20;
LAB_1411c3f40:
  do {
    puVar7 = puVar6;
    puVar6 = puVar7 + -0x18;
    if (puVar6 <= puVar11) break;
    cVar4 = FUN_1411d10c0(param_4,puVar6,puVar11);
  } while (cVar4 == '\0');
  if (puVar12 <= puVar6) {
    if (puVar12 != puVar6) {
      local_590 = *puVar12;
      uStack_588 = puVar8[0x19];
      local_580 = puVar8[0x1a];
      uStack_578 = puVar8[0x1b];
      local_570 = puVar8[0x1c];
      uStack_568 = puVar8[0x1d];
      local_560 = puVar8[0x1e];
      uStack_558 = puVar8[0x1f];
      local_550 = puVar8[0x20];
      uStack_548 = puVar8[0x21];
      local_540 = puVar8[0x22];
      uStack_538 = puVar8[0x23];
      local_530 = puVar8[0x24];
      uStack_528 = puVar8[0x25];
      local_520 = puVar8[0x26];
      uStack_518 = puVar8[0x27];
      local_510 = puVar8[0x28];
      uStack_508 = puVar8[0x29];
      local_500 = puVar8[0x2a];
      uStack_4f8 = puVar8[0x2b];
      uVar1 = puVar8[0x2c];
      uVar2 = puVar8[0x2d];
      local_4e0 = puVar8[0x2e];
      uStack_4d8 = puVar8[0x2f];
      uVar3 = puVar7[-0x17];
      *puVar12 = *puVar6;
      puVar8[0x19] = uVar3;
      uVar3 = puVar7[-0x15];
      puVar8[0x1a] = puVar7[-0x16];
      puVar8[0x1b] = uVar3;
      uVar3 = puVar7[-0x13];
      puVar8[0x1c] = puVar7[-0x14];
      puVar8[0x1d] = uVar3;
      uVar3 = puVar7[-0x11];
      puVar8[0x1e] = puVar7[-0x12];
      puVar8[0x1f] = uVar3;
      uVar3 = puVar7[-0xf];
      puVar8[0x20] = puVar7[-0x10];
      puVar8[0x21] = uVar3;
      uVar3 = puVar7[-0xd];
      puVar8[0x22] = puVar7[-0xe];
      puVar8[0x23] = uVar3;
      uVar3 = puVar7[-0xb];
      puVar8[0x24] = puVar7[-0xc];
      puVar8[0x25] = uVar3;
      uVar3 = puVar7[-9];
      puVar8[0x26] = puVar7[-10];
      puVar8[0x27] = uVar3;
      uVar3 = puVar7[-7];
      puVar8[0x28] = puVar7[-8];
      puVar8[0x29] = uVar3;
      uVar3 = puVar7[-5];
      puVar8[0x2a] = puVar7[-6];
      puVar8[0x2b] = uVar3;
      uVar3 = puVar7[-3];
      puVar8[0x2c] = puVar7[-4];
      puVar8[0x2d] = uVar3;
      uVar3 = puVar7[-1];
      puVar8[0x2e] = puVar7[-2];
      puVar8[0x2f] = uVar3;
      *puVar6 = local_590;
      puVar7[-0x17] = uStack_588;
      puVar7[-0x16] = local_580;
      puVar7[-0x15] = uStack_578;
      puVar7[-0x14] = local_570;
      puVar7[-0x13] = uStack_568;
      puVar7[-0x12] = local_560;
      puVar7[-0x11] = uStack_558;
      puVar7[-0x10] = local_550;
      puVar7[-0xf] = uStack_548;
      puVar7[-0xe] = local_540;
      puVar7[-0xd] = uStack_538;
      puVar7[-0xc] = local_530;
      puVar7[-0xb] = uStack_528;
      puVar7[-10] = local_520;
      puVar7[-9] = uStack_518;
      puVar7[-8] = local_510;
      puVar7[-7] = uStack_508;
      local_4f0._0_4_ = (undefined4)uVar1;
      local_4f0._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
      uStack_4e8._0_4_ = (undefined4)uVar2;
      uStack_4e8._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
      puVar7[-6] = local_500;
      puVar7[-5] = uStack_4f8;
      *(undefined4 *)(puVar7 + -4) = (undefined4)local_4f0;
      *(undefined4 *)((longlong)puVar7 + -0x1c) = local_4f0._4_4_;
      *(undefined4 *)(puVar7 + -3) = (undefined4)uStack_4e8;
      *(undefined4 *)((longlong)puVar7 + -0x14) = uStack_4e8._4_4_;
      puVar7[-2] = local_4e0;
      puVar7[-1] = uStack_4d8;
      local_4f0 = uVar1;
      uStack_4e8 = uVar2;
    }
    goto LAB_1411c3f20;
  }
  if (puVar11 != puVar6) {
    local_4d0 = *puVar11;
    uStack_4c8 = puVar11[1];
    local_4c0 = puVar11[2];
    uStack_4b8 = puVar11[3];
    local_4b0 = puVar11[4];
    uStack_4a8 = puVar11[5];
    local_4a0 = puVar11[6];
    uStack_498 = puVar11[7];
    local_490 = puVar11[8];
    uStack_488 = puVar11[9];
    local_480 = puVar11[10];
    uStack_478 = puVar11[0xb];
    local_470 = puVar11[0xc];
    uStack_468 = puVar11[0xd];
    local_460 = puVar11[0xe];
    uStack_458 = puVar11[0xf];
    local_450 = puVar11[0x10];
    uStack_448 = puVar11[0x11];
    local_440 = puVar11[0x12];
    uStack_438 = puVar11[0x13];
    uVar1 = puVar11[0x14];
    uVar2 = puVar11[0x15];
    local_420 = puVar11[0x16];
    uStack_418 = puVar11[0x17];
    uVar3 = puVar7[-0x17];
    *puVar11 = *puVar6;
    puVar11[1] = uVar3;
    uVar3 = puVar7[-0x15];
    puVar11[2] = puVar7[-0x16];
    puVar11[3] = uVar3;
    uVar3 = puVar7[-0x13];
    puVar11[4] = puVar7[-0x14];
    puVar11[5] = uVar3;
    uVar3 = puVar7[-0x11];
    puVar11[6] = puVar7[-0x12];
    puVar11[7] = uVar3;
    uVar3 = puVar7[-0xf];
    puVar11[8] = puVar7[-0x10];
    puVar11[9] = uVar3;
    uVar3 = puVar7[-0xd];
    puVar11[10] = puVar7[-0xe];
    puVar11[0xb] = uVar3;
    uVar3 = puVar7[-0xb];
    puVar11[0xc] = puVar7[-0xc];
    puVar11[0xd] = uVar3;
    uVar3 = puVar7[-9];
    puVar11[0xe] = puVar7[-10];
    puVar11[0xf] = uVar3;
    uVar3 = puVar7[-7];
    puVar11[0x10] = puVar7[-8];
    puVar11[0x11] = uVar3;
    uVar3 = puVar7[-5];
    puVar11[0x12] = puVar7[-6];
    puVar11[0x13] = uVar3;
    uVar3 = puVar7[-3];
    puVar11[0x14] = puVar7[-4];
    puVar11[0x15] = uVar3;
    uVar3 = puVar7[-1];
    puVar11[0x16] = puVar7[-2];
    puVar11[0x17] = uVar3;
    *puVar6 = local_4d0;
    puVar7[-0x17] = uStack_4c8;
    puVar7[-0x16] = local_4c0;
    puVar7[-0x15] = uStack_4b8;
    puVar7[-0x14] = local_4b0;
    puVar7[-0x13] = uStack_4a8;
    puVar7[-0x12] = local_4a0;
    puVar7[-0x11] = uStack_498;
    puVar7[-0x10] = local_490;
    puVar7[-0xf] = uStack_488;
    puVar7[-0xe] = local_480;
    puVar7[-0xd] = uStack_478;
    puVar7[-0xc] = local_470;
    puVar7[-0xb] = uStack_468;
    puVar7[-10] = local_460;
    puVar7[-9] = uStack_458;
    puVar7[-8] = local_450;
    puVar7[-7] = uStack_448;
    local_430._0_4_ = (undefined4)uVar1;
    local_430._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
    uStack_428._0_4_ = (undefined4)uVar2;
    uStack_428._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
    puVar7[-6] = local_440;
    puVar7[-5] = uStack_438;
    *(undefined4 *)(puVar7 + -4) = (undefined4)local_430;
    *(undefined4 *)((longlong)puVar7 + -0x1c) = local_430._4_4_;
    *(undefined4 *)(puVar7 + -3) = (undefined4)uStack_428;
    *(undefined4 *)((longlong)puVar7 + -0x14) = uStack_428._4_4_;
    puVar7[-2] = local_420;
    puVar7[-1] = uStack_418;
    local_430 = uVar1;
    uStack_428 = uVar2;
  }
  lVar5 = (longlong)puVar6 + (-0xc0 - (longlong)puVar11);
  iVar10 = iVar10 + -1;
  lVar5 = lVar5 / 6 + (lVar5 >> 0x3f);
  if ((lVar5 >> 5) - (lVar5 >> 0x3f) < ((longlong)puVar13 - (longlong)puVar12) / 0xc0) {
    if (puVar12 < puVar13) {
      *plVar9 = (longlong)puVar12;
      plVar9[1] = (longlong)puVar13;
      *(int *)(plVar9 + 2) = iVar10;
      plVar9 = plVar9 + 3;
    }
    if (puVar6 <= puVar11 + 0x18) goto LAB_1411c435f;
    puVar13 = puVar7 + -0x30;
    puVar12 = puVar11;
  }
  else {
    if (puVar11 + 0x18 < puVar6) {
      *plVar9 = (longlong)puVar11;
      plVar9[1] = (longlong)(puVar7 + -0x30);
      *(int *)(plVar9 + 2) = iVar10;
      plVar9 = plVar9 + 3;
    }
    if (puVar13 <= puVar12) goto LAB_1411c435f;
  }
  lVar5 = ((longlong)puVar13 - (longlong)puVar12) / 0xc0 + 1;
  puVar11 = puVar12;
  if (iVar10 == 0) goto LAB_1411c4346;
  goto LAB_1411c3d50;
}



// FUNCTION 1411c45b0 FUN_1411c45b0 body=2110 status=ok
// SIG undefined FUN_1411c45b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411c45b0(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  int iVar18;
  longlong *plVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  float fVar22;
  undefined1 auStack_7c8 [48];
  longlong local_798;
  undefined8 local_790 [34];
  undefined8 local_680 [34];
  undefined8 local_570 [34];
  undefined8 local_460 [35];
  longlong local_348;
  longlong lStack_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_7c8;
    fVar22 = (float)(longlong)param_2;
    lStack_340 = param_1 + -0x110 + param_2 * 0x110;
    if ((longlong)param_2 < 0) {
      fVar22 = fVar22 + 1.8446744e+19;
    }
    local_348 = param_1;
    fVar22 = _guard_xfg_dispatch_icall_nop(fVar22);
    local_338 = (undefined4)(longlong)(fVar22 + fVar22);
    _guard_xfg_dispatch_icall_nop(local_330,0,0x2e8);
    plVar19 = &local_348;
    do {
      puVar17 = (undefined8 *)*plVar19;
      puVar21 = (undefined8 *)plVar19[1];
      local_798 = plVar19[2];
      lVar15 = ((longlong)puVar21 - (longlong)puVar17) / 0x110 + 1;
      puVar20 = puVar17;
      iVar18 = (int)local_798;
      if ((int)local_798 != 0) {
LAB_1411c46c0:
        if (8 < lVar15) {
          puVar17 = puVar20 + (lVar15 / 2) * 0x22;
          if (puVar17 != puVar20) {
            lVar15 = 2;
            puVar16 = local_790;
            puVar13 = puVar17;
            do {
              puVar10 = puVar13;
              puVar12 = puVar16;
              uVar1 = puVar10[1];
              uVar2 = puVar10[2];
              uVar6 = puVar10[3];
              *puVar12 = *puVar10;
              puVar12[1] = uVar1;
              uVar1 = puVar10[4];
              uVar7 = puVar10[5];
              puVar12[2] = uVar2;
              puVar12[3] = uVar6;
              uVar2 = puVar10[6];
              uVar6 = puVar10[7];
              puVar12[4] = uVar1;
              puVar12[5] = uVar7;
              uVar1 = puVar10[8];
              uVar7 = puVar10[9];
              puVar12[6] = uVar2;
              puVar12[7] = uVar6;
              uVar2 = puVar10[10];
              uVar6 = puVar10[0xb];
              puVar12[8] = uVar1;
              puVar12[9] = uVar7;
              uVar1 = puVar10[0xc];
              uVar7 = puVar10[0xd];
              puVar12[10] = uVar2;
              puVar12[0xb] = uVar6;
              uVar2 = puVar10[0xe];
              uVar6 = puVar10[0xf];
              puVar12[0xc] = uVar1;
              puVar12[0xd] = uVar7;
              puVar12[0xe] = uVar2;
              puVar12[0xf] = uVar6;
              lVar15 = lVar15 + -1;
              puVar16 = puVar12 + 0x10;
              puVar13 = puVar10 + 0x10;
            } while (lVar15 != 0);
            uVar1 = puVar10[0x11];
            lVar15 = 2;
            puVar12[0x10] = puVar10[0x10];
            puVar12[0x11] = uVar1;
            puVar16 = puVar20;
            do {
              puVar12 = puVar17;
              puVar13 = puVar16;
              uVar1 = puVar13[1];
              *puVar12 = *puVar13;
              puVar12[1] = uVar1;
              uVar1 = puVar13[3];
              puVar12[2] = puVar13[2];
              puVar12[3] = uVar1;
              uVar1 = puVar13[5];
              puVar12[4] = puVar13[4];
              puVar12[5] = uVar1;
              uVar1 = puVar13[7];
              puVar12[6] = puVar13[6];
              puVar12[7] = uVar1;
              uVar1 = puVar13[9];
              puVar12[8] = puVar13[8];
              puVar12[9] = uVar1;
              uVar1 = puVar13[0xb];
              puVar12[10] = puVar13[10];
              puVar12[0xb] = uVar1;
              uVar1 = puVar13[0xd];
              puVar12[0xc] = puVar13[0xc];
              puVar12[0xd] = uVar1;
              uVar1 = puVar13[0xf];
              puVar12[0xe] = puVar13[0xe];
              puVar12[0xf] = uVar1;
              lVar15 = lVar15 + -1;
              puVar16 = puVar13 + 0x10;
              puVar17 = puVar12 + 0x10;
            } while (lVar15 != 0);
            uVar1 = puVar13[0x11];
            lVar15 = 2;
            puVar12[0x10] = puVar13[0x10];
            puVar12[0x11] = uVar1;
            puVar17 = puVar20;
            puVar16 = local_790;
            do {
              puVar12 = puVar16;
              puVar13 = puVar17;
              uVar1 = puVar12[1];
              uVar2 = puVar12[2];
              uVar6 = puVar12[3];
              *puVar13 = *puVar12;
              puVar13[1] = uVar1;
              uVar1 = puVar12[4];
              uVar7 = puVar12[5];
              puVar13[2] = uVar2;
              puVar13[3] = uVar6;
              uVar2 = puVar12[6];
              uVar6 = puVar12[7];
              puVar13[4] = uVar1;
              puVar13[5] = uVar7;
              uVar1 = puVar12[8];
              uVar7 = puVar12[9];
              puVar13[6] = uVar2;
              puVar13[7] = uVar6;
              uVar2 = puVar12[10];
              uVar6 = puVar12[0xb];
              puVar13[8] = uVar1;
              puVar13[9] = uVar7;
              uVar7 = puVar12[0xc];
              uVar8 = puVar12[0xd];
              puVar13[10] = uVar2;
              puVar13[0xb] = uVar6;
              uVar1 = puVar12[0xe];
              uVar2 = puVar12[0xf];
              puVar13[0xc] = uVar7;
              puVar13[0xd] = uVar8;
              puVar13[0xe] = uVar1;
              puVar13[0xf] = uVar2;
              lVar15 = lVar15 + -1;
              puVar17 = puVar13 + 0x10;
              puVar16 = puVar12 + 0x10;
            } while (lVar15 != 0);
            uVar3 = *(undefined4 *)((longlong)puVar12 + 0x84);
            uVar4 = *(undefined4 *)(puVar12 + 0x11);
            uVar5 = *(undefined4 *)((longlong)puVar12 + 0x8c);
            *(undefined4 *)(puVar13 + 0x10) = *(undefined4 *)(puVar12 + 0x10);
            *(undefined4 *)((longlong)puVar13 + 0x84) = uVar3;
            *(undefined4 *)(puVar13 + 0x11) = uVar4;
            *(undefined4 *)((longlong)puVar13 + 0x8c) = uVar5;
          }
          puVar16 = puVar21 + 0x22;
          puVar17 = puVar20;
LAB_1411c4833:
          puVar17 = puVar17 + 0x22;
          if (puVar17 <= puVar21) goto code_r0x0001411c483f;
          goto LAB_1411c4851;
        }
        for (; puVar16 = puVar20, puVar17 = puVar20, puVar20 < puVar21; puVar21 = puVar21 + -0x22) {
          while (puVar17 = puVar17 + 0x22, puVar17 <= puVar21) {
            cVar9 = FUN_1411cc780(param_4,puVar16,puVar17);
            if (cVar9 != '\0') {
              puVar16 = puVar17;
            }
          }
          if (puVar16 != puVar21) {
            lVar15 = 2;
            puVar17 = local_460;
            puVar13 = puVar16;
            do {
              puVar10 = puVar13;
              puVar12 = puVar17;
              uVar1 = puVar10[1];
              uVar2 = puVar10[2];
              uVar6 = puVar10[3];
              *puVar12 = *puVar10;
              puVar12[1] = uVar1;
              uVar1 = puVar10[4];
              uVar7 = puVar10[5];
              puVar12[2] = uVar2;
              puVar12[3] = uVar6;
              uVar2 = puVar10[6];
              uVar6 = puVar10[7];
              puVar12[4] = uVar1;
              puVar12[5] = uVar7;
              uVar1 = puVar10[8];
              uVar7 = puVar10[9];
              puVar12[6] = uVar2;
              puVar12[7] = uVar6;
              uVar2 = puVar10[10];
              uVar6 = puVar10[0xb];
              puVar12[8] = uVar1;
              puVar12[9] = uVar7;
              uVar1 = puVar10[0xc];
              uVar7 = puVar10[0xd];
              puVar12[10] = uVar2;
              puVar12[0xb] = uVar6;
              uVar2 = puVar10[0xe];
              uVar6 = puVar10[0xf];
              puVar12[0xc] = uVar1;
              puVar12[0xd] = uVar7;
              puVar12[0xe] = uVar2;
              puVar12[0xf] = uVar6;
              lVar15 = lVar15 + -1;
              puVar17 = puVar12 + 0x10;
              puVar13 = puVar10 + 0x10;
            } while (lVar15 != 0);
            uVar1 = puVar10[0x11];
            lVar15 = 2;
            puVar12[0x10] = puVar10[0x10];
            puVar12[0x11] = uVar1;
            puVar17 = puVar21;
            do {
              puVar12 = puVar16;
              puVar13 = puVar17;
              uVar1 = puVar13[1];
              *puVar12 = *puVar13;
              puVar12[1] = uVar1;
              uVar1 = puVar13[3];
              puVar12[2] = puVar13[2];
              puVar12[3] = uVar1;
              uVar1 = puVar13[5];
              puVar12[4] = puVar13[4];
              puVar12[5] = uVar1;
              uVar1 = puVar13[7];
              puVar12[6] = puVar13[6];
              puVar12[7] = uVar1;
              uVar1 = puVar13[9];
              puVar12[8] = puVar13[8];
              puVar12[9] = uVar1;
              uVar1 = puVar13[0xb];
              puVar12[10] = puVar13[10];
              puVar12[0xb] = uVar1;
              uVar1 = puVar13[0xd];
              puVar12[0xc] = puVar13[0xc];
              puVar12[0xd] = uVar1;
              uVar1 = puVar13[0xf];
              puVar12[0xe] = puVar13[0xe];
              puVar12[0xf] = uVar1;
              lVar15 = lVar15 + -1;
              puVar17 = puVar13 + 0x10;
              puVar16 = puVar12 + 0x10;
            } while (lVar15 != 0);
            uVar1 = puVar13[0x11];
            lVar15 = 2;
            puVar12[0x10] = puVar13[0x10];
            puVar12[0x11] = uVar1;
            puVar17 = puVar21;
            puVar16 = local_460;
            do {
              puVar12 = puVar16;
              puVar13 = puVar17;
              uVar1 = puVar12[1];
              uVar2 = puVar12[2];
              uVar6 = puVar12[3];
              *puVar13 = *puVar12;
              puVar13[1] = uVar1;
              uVar1 = puVar12[4];
              uVar7 = puVar12[5];
              puVar13[2] = uVar2;
              puVar13[3] = uVar6;
              uVar2 = puVar12[6];
              uVar6 = puVar12[7];
              puVar13[4] = uVar1;
              puVar13[5] = uVar7;
              uVar1 = puVar12[8];
              uVar7 = puVar12[9];
              puVar13[6] = uVar2;
              puVar13[7] = uVar6;
              uVar2 = puVar12[10];
              uVar6 = puVar12[0xb];
              puVar13[8] = uVar1;
              puVar13[9] = uVar7;
              uVar7 = puVar12[0xc];
              uVar8 = puVar12[0xd];
              puVar13[10] = uVar2;
              puVar13[0xb] = uVar6;
              uVar1 = puVar12[0xe];
              uVar2 = puVar12[0xf];
              puVar13[0xc] = uVar7;
              puVar13[0xd] = uVar8;
              puVar13[0xe] = uVar1;
              puVar13[0xf] = uVar2;
              lVar15 = lVar15 + -1;
              puVar17 = puVar13 + 0x10;
              puVar16 = puVar12 + 0x10;
            } while (lVar15 != 0);
            uVar3 = *(undefined4 *)((longlong)puVar12 + 0x84);
            uVar4 = *(undefined4 *)(puVar12 + 0x11);
            uVar5 = *(undefined4 *)((longlong)puVar12 + 0x8c);
            *(undefined4 *)(puVar13 + 0x10) = *(undefined4 *)(puVar12 + 0x10);
            *(undefined4 *)((longlong)puVar13 + 0x84) = uVar3;
            *(undefined4 *)(puVar13 + 0x11) = uVar4;
            *(undefined4 *)((longlong)puVar13 + 0x8c) = uVar5;
          }
        }
        goto LAB_1411c4bed;
      }
LAB_1411c4bd4:
      FUN_1411c19b0(puVar17,lVar15,param_3,param_4);
LAB_1411c4bed:
      plVar19 = plVar19 + -3;
    } while (&local_348 <= plVar19);
  }
  return;
code_r0x0001411c483f:
  cVar9 = FUN_1411cc780(param_4,puVar20,puVar17);
  if (cVar9 == '\0') goto LAB_1411c4833;
LAB_1411c4851:
  do {
    puVar13 = puVar16;
    puVar16 = puVar13 + -0x22;
    if (puVar16 <= puVar20) break;
    cVar9 = FUN_1411cc780(param_4,puVar16,puVar20);
  } while (cVar9 == '\0');
  if (puVar17 <= puVar16) {
    if (puVar17 != puVar16) {
      lVar15 = 2;
      puVar13 = local_680;
      puVar12 = puVar17;
      do {
        puVar11 = puVar12;
        puVar10 = puVar13;
        uVar1 = puVar11[1];
        uVar2 = puVar11[2];
        uVar6 = puVar11[3];
        *puVar10 = *puVar11;
        puVar10[1] = uVar1;
        uVar1 = puVar11[4];
        uVar7 = puVar11[5];
        puVar10[2] = uVar2;
        puVar10[3] = uVar6;
        uVar2 = puVar11[6];
        uVar6 = puVar11[7];
        puVar10[4] = uVar1;
        puVar10[5] = uVar7;
        uVar1 = puVar11[8];
        uVar7 = puVar11[9];
        puVar10[6] = uVar2;
        puVar10[7] = uVar6;
        uVar2 = puVar11[10];
        uVar6 = puVar11[0xb];
        puVar10[8] = uVar1;
        puVar10[9] = uVar7;
        uVar1 = puVar11[0xc];
        uVar7 = puVar11[0xd];
        puVar10[10] = uVar2;
        puVar10[0xb] = uVar6;
        uVar2 = puVar11[0xe];
        uVar6 = puVar11[0xf];
        puVar10[0xc] = uVar1;
        puVar10[0xd] = uVar7;
        puVar10[0xe] = uVar2;
        puVar10[0xf] = uVar6;
        lVar15 = lVar15 + -1;
        puVar13 = puVar10 + 0x10;
        puVar12 = puVar11 + 0x10;
      } while (lVar15 != 0);
      uVar1 = puVar11[0x11];
      lVar15 = 2;
      puVar10[0x10] = puVar11[0x10];
      puVar10[0x11] = uVar1;
      puVar13 = puVar17;
      puVar12 = puVar16;
      do {
        puVar11 = puVar12;
        puVar10 = puVar13;
        uVar1 = puVar11[1];
        *puVar10 = *puVar11;
        puVar10[1] = uVar1;
        uVar1 = puVar11[3];
        puVar10[2] = puVar11[2];
        puVar10[3] = uVar1;
        uVar1 = puVar11[5];
        puVar10[4] = puVar11[4];
        puVar10[5] = uVar1;
        uVar1 = puVar11[7];
        puVar10[6] = puVar11[6];
        puVar10[7] = uVar1;
        uVar1 = puVar11[9];
        puVar10[8] = puVar11[8];
        puVar10[9] = uVar1;
        uVar1 = puVar11[0xb];
        puVar10[10] = puVar11[10];
        puVar10[0xb] = uVar1;
        uVar1 = puVar11[0xd];
        puVar10[0xc] = puVar11[0xc];
        puVar10[0xd] = uVar1;
        uVar1 = puVar11[0xf];
        puVar10[0xe] = puVar11[0xe];
        puVar10[0xf] = uVar1;
        lVar15 = lVar15 + -1;
        puVar13 = puVar10 + 0x10;
        puVar12 = puVar11 + 0x10;
      } while (lVar15 != 0);
      uVar1 = puVar11[0x11];
      lVar15 = 2;
      puVar10[0x10] = puVar11[0x10];
      puVar10[0x11] = uVar1;
      puVar13 = puVar16;
      puVar12 = local_680;
      do {
        puVar11 = puVar12;
        puVar10 = puVar13;
        uVar1 = puVar11[1];
        uVar2 = puVar11[2];
        uVar6 = puVar11[3];
        *puVar10 = *puVar11;
        puVar10[1] = uVar1;
        uVar1 = puVar11[4];
        uVar7 = puVar11[5];
        puVar10[2] = uVar2;
        puVar10[3] = uVar6;
        uVar2 = puVar11[6];
        uVar6 = puVar11[7];
        puVar10[4] = uVar1;
        puVar10[5] = uVar7;
        uVar1 = puVar11[8];
        uVar7 = puVar11[9];
        puVar10[6] = uVar2;
        puVar10[7] = uVar6;
        uVar2 = puVar11[10];
        uVar6 = puVar11[0xb];
        puVar10[8] = uVar1;
        puVar10[9] = uVar7;
        uVar7 = puVar11[0xc];
        uVar8 = puVar11[0xd];
        puVar10[10] = uVar2;
        puVar10[0xb] = uVar6;
        uVar1 = puVar11[0xe];
        uVar2 = puVar11[0xf];
        puVar10[0xc] = uVar7;
        puVar10[0xd] = uVar8;
        puVar10[0xe] = uVar1;
        puVar10[0xf] = uVar2;
        lVar15 = lVar15 + -1;
        puVar13 = puVar10 + 0x10;
        puVar12 = puVar11 + 0x10;
      } while (lVar15 != 0);
      uVar3 = *(undefined4 *)((longlong)puVar11 + 0x84);
      uVar4 = *(undefined4 *)(puVar11 + 0x11);
      uVar5 = *(undefined4 *)((longlong)puVar11 + 0x8c);
      *(undefined4 *)(puVar10 + 0x10) = *(undefined4 *)(puVar11 + 0x10);
      *(undefined4 *)((longlong)puVar10 + 0x84) = uVar3;
      *(undefined4 *)(puVar10 + 0x11) = uVar4;
      *(undefined4 *)((longlong)puVar10 + 0x8c) = uVar5;
    }
    goto LAB_1411c4833;
  }
  if (puVar20 != puVar16) {
    lVar15 = 2;
    puVar12 = local_570;
    puVar10 = puVar20;
    do {
      puVar14 = puVar10;
      puVar11 = puVar12;
      uVar1 = puVar14[1];
      uVar2 = puVar14[2];
      uVar6 = puVar14[3];
      *puVar11 = *puVar14;
      puVar11[1] = uVar1;
      uVar1 = puVar14[4];
      uVar7 = puVar14[5];
      puVar11[2] = uVar2;
      puVar11[3] = uVar6;
      uVar2 = puVar14[6];
      uVar6 = puVar14[7];
      puVar11[4] = uVar1;
      puVar11[5] = uVar7;
      uVar1 = puVar14[8];
      uVar7 = puVar14[9];
      puVar11[6] = uVar2;
      puVar11[7] = uVar6;
      uVar2 = puVar14[10];
      uVar6 = puVar14[0xb];
      puVar11[8] = uVar1;
      puVar11[9] = uVar7;
      uVar1 = puVar14[0xc];
      uVar7 = puVar14[0xd];
      puVar11[10] = uVar2;
      puVar11[0xb] = uVar6;
      uVar2 = puVar14[0xe];
      uVar6 = puVar14[0xf];
      puVar11[0xc] = uVar1;
      puVar11[0xd] = uVar7;
      puVar11[0xe] = uVar2;
      puVar11[0xf] = uVar6;
      lVar15 = lVar15 + -1;
      puVar12 = puVar11 + 0x10;
      puVar10 = puVar14 + 0x10;
    } while (lVar15 != 0);
    uVar1 = puVar14[0x11];
    lVar15 = 2;
    puVar11[0x10] = puVar14[0x10];
    puVar11[0x11] = uVar1;
    puVar12 = puVar20;
    puVar10 = puVar16;
    do {
      puVar14 = puVar10;
      puVar11 = puVar12;
      uVar1 = puVar14[1];
      *puVar11 = *puVar14;
      puVar11[1] = uVar1;
      uVar1 = puVar14[3];
      puVar11[2] = puVar14[2];
      puVar11[3] = uVar1;
      uVar1 = puVar14[5];
      puVar11[4] = puVar14[4];
      puVar11[5] = uVar1;
      uVar1 = puVar14[7];
      puVar11[6] = puVar14[6];
      puVar11[7] = uVar1;
      uVar1 = puVar14[9];
      puVar11[8] = puVar14[8];
      puVar11[9] = uVar1;
      uVar1 = puVar14[0xb];
      puVar11[10] = puVar14[10];
      puVar11[0xb] = uVar1;
      uVar1 = puVar14[0xd];
      puVar11[0xc] = puVar14[0xc];
      puVar11[0xd] = uVar1;
      uVar1 = puVar14[0xf];
      puVar11[0xe] = puVar14[0xe];
      puVar11[0xf] = uVar1;
      lVar15 = lVar15 + -1;
      puVar12 = puVar11 + 0x10;
      puVar10 = puVar14 + 0x10;
    } while (lVar15 != 0);
    uVar1 = puVar14[0x11];
    lVar15 = 2;
    puVar11[0x10] = puVar14[0x10];
    puVar11[0x11] = uVar1;
    puVar12 = puVar16;
    puVar10 = local_570;
    do {
      puVar14 = puVar10;
      puVar11 = puVar12;
      uVar1 = puVar14[1];
      uVar2 = puVar14[2];
      uVar6 = puVar14[3];
      *puVar11 = *puVar14;
      puVar11[1] = uVar1;
      uVar1 = puVar14[4];
      uVar7 = puVar14[5];
      puVar11[2] = uVar2;
      puVar11[3] = uVar6;
      uVar2 = puVar14[6];
      uVar6 = puVar14[7];
      puVar11[4] = uVar1;
      puVar11[5] = uVar7;
      uVar1 = puVar14[8];
      uVar7 = puVar14[9];
      puVar11[6] = uVar2;
      puVar11[7] = uVar6;
      uVar2 = puVar14[10];
      uVar6 = puVar14[0xb];
      puVar11[8] = uVar1;
      puVar11[9] = uVar7;
      uVar7 = puVar14[0xc];
      uVar8 = puVar14[0xd];
      puVar11[10] = uVar2;
      puVar11[0xb] = uVar6;
      uVar1 = puVar14[0xe];
      uVar2 = puVar14[0xf];
      puVar11[0xc] = uVar7;
      puVar11[0xd] = uVar8;
      puVar11[0xe] = uVar1;
      puVar11[0xf] = uVar2;
      lVar15 = lVar15 + -1;
      puVar12 = puVar11 + 0x10;
      puVar10 = puVar14 + 0x10;
    } while (lVar15 != 0);
    uVar3 = *(undefined4 *)((longlong)puVar14 + 0x84);
    uVar4 = *(undefined4 *)(puVar14 + 0x11);
    uVar5 = *(undefined4 *)((longlong)puVar14 + 0x8c);
    *(undefined4 *)(puVar11 + 0x10) = *(undefined4 *)(puVar14 + 0x10);
    *(undefined4 *)((longlong)puVar11 + 0x84) = uVar3;
    *(undefined4 *)(puVar11 + 0x11) = uVar4;
    *(undefined4 *)((longlong)puVar11 + 0x8c) = uVar5;
  }
  iVar18 = iVar18 + -1;
  if (((longlong)puVar16 + (-0x110 - (longlong)puVar20)) / 0x110 <
      ((longlong)puVar21 - (longlong)puVar17) / 0x110) {
    if (puVar17 < puVar21) {
      *plVar19 = (longlong)puVar17;
      plVar19[1] = (longlong)puVar21;
      *(int *)(plVar19 + 2) = iVar18;
      plVar19 = plVar19 + 3;
    }
    if (puVar16 <= puVar20 + 0x22) goto LAB_1411c4bed;
    puVar21 = puVar13 + -0x44;
    puVar17 = puVar20;
  }
  else {
    if (puVar20 + 0x22 < puVar16) {
      *plVar19 = (longlong)puVar20;
      plVar19[1] = (longlong)(puVar13 + -0x44);
      *(int *)(plVar19 + 2) = iVar18;
      plVar19 = plVar19 + 3;
    }
    if (puVar21 <= puVar17) goto LAB_1411c4bed;
  }
  lVar15 = ((longlong)puVar21 - (longlong)puVar17) / 0x110 + 1;
  puVar20 = puVar17;
  if (iVar18 == 0) goto LAB_1411c4bd4;
  goto LAB_1411c46c0;
}



// FUNCTION 1411c4df0 FUN_1411c4df0 body=2267 status=ok
// SIG undefined FUN_1411c4df0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411c4df0(longlong param_1,ulonglong param_2,undefined1 param_3,longlong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  int iVar21;
  bool bVar22;
  float fVar23;
  undefined1 auStack_7c8 [48];
  longlong local_798;
  undefined8 local_790 [34];
  undefined8 local_680 [34];
  undefined8 local_570 [34];
  undefined8 local_460 [35];
  longlong local_348;
  longlong lStack_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_7c8;
    fVar23 = (float)(longlong)param_2;
    lStack_340 = param_1 + -0x110 + param_2 * 0x110;
    if ((longlong)param_2 < 0) {
      fVar23 = fVar23 + 1.8446744e+19;
    }
    local_348 = param_1;
    fVar23 = _guard_xfg_dispatch_icall_nop(fVar23);
    local_338 = (undefined4)(longlong)(fVar23 + fVar23);
    _guard_xfg_dispatch_icall_nop(local_330,0,0x2e8);
    plVar17 = &local_348;
    do {
      puVar20 = (undefined8 *)*plVar17;
      puVar18 = (undefined8 *)plVar17[1];
      local_798 = plVar17[2];
      lVar14 = ((longlong)puVar18 - (longlong)puVar20) / 0x110 + 1;
      puVar19 = puVar20;
      iVar21 = (int)local_798;
      if ((int)local_798 != 0) {
LAB_1411c4f00:
        if (8 < lVar14) {
          puVar20 = puVar19 + (lVar14 / 2) * 0x22;
          if (puVar20 != puVar19) {
            lVar14 = 2;
            puVar16 = local_790;
            puVar15 = puVar20;
            do {
              puVar10 = puVar15;
              puVar12 = puVar16;
              uVar1 = puVar10[1];
              uVar2 = puVar10[2];
              uVar6 = puVar10[3];
              *puVar12 = *puVar10;
              puVar12[1] = uVar1;
              uVar1 = puVar10[4];
              uVar7 = puVar10[5];
              puVar12[2] = uVar2;
              puVar12[3] = uVar6;
              uVar2 = puVar10[6];
              uVar6 = puVar10[7];
              puVar12[4] = uVar1;
              puVar12[5] = uVar7;
              uVar1 = puVar10[8];
              uVar7 = puVar10[9];
              puVar12[6] = uVar2;
              puVar12[7] = uVar6;
              uVar2 = puVar10[10];
              uVar6 = puVar10[0xb];
              puVar12[8] = uVar1;
              puVar12[9] = uVar7;
              uVar1 = puVar10[0xc];
              uVar7 = puVar10[0xd];
              puVar12[10] = uVar2;
              puVar12[0xb] = uVar6;
              uVar2 = puVar10[0xe];
              uVar6 = puVar10[0xf];
              puVar12[0xc] = uVar1;
              puVar12[0xd] = uVar7;
              puVar12[0xe] = uVar2;
              puVar12[0xf] = uVar6;
              lVar14 = lVar14 + -1;
              puVar16 = puVar12 + 0x10;
              puVar15 = puVar10 + 0x10;
            } while (lVar14 != 0);
            uVar1 = puVar10[0x11];
            lVar14 = 2;
            puVar12[0x10] = puVar10[0x10];
            puVar12[0x11] = uVar1;
            puVar16 = puVar19;
            do {
              puVar12 = puVar20;
              puVar15 = puVar16;
              uVar1 = puVar15[1];
              *puVar12 = *puVar15;
              puVar12[1] = uVar1;
              uVar1 = puVar15[3];
              puVar12[2] = puVar15[2];
              puVar12[3] = uVar1;
              uVar1 = puVar15[5];
              puVar12[4] = puVar15[4];
              puVar12[5] = uVar1;
              uVar1 = puVar15[7];
              puVar12[6] = puVar15[6];
              puVar12[7] = uVar1;
              uVar1 = puVar15[9];
              puVar12[8] = puVar15[8];
              puVar12[9] = uVar1;
              uVar1 = puVar15[0xb];
              puVar12[10] = puVar15[10];
              puVar12[0xb] = uVar1;
              uVar1 = puVar15[0xd];
              puVar12[0xc] = puVar15[0xc];
              puVar12[0xd] = uVar1;
              uVar1 = puVar15[0xf];
              puVar12[0xe] = puVar15[0xe];
              puVar12[0xf] = uVar1;
              lVar14 = lVar14 + -1;
              puVar16 = puVar15 + 0x10;
              puVar20 = puVar12 + 0x10;
            } while (lVar14 != 0);
            uVar1 = puVar15[0x11];
            lVar14 = 2;
            puVar12[0x10] = puVar15[0x10];
            puVar12[0x11] = uVar1;
            puVar20 = puVar19;
            puVar16 = local_790;
            do {
              puVar12 = puVar16;
              puVar15 = puVar20;
              uVar1 = puVar12[1];
              uVar2 = puVar12[2];
              uVar6 = puVar12[3];
              *puVar15 = *puVar12;
              puVar15[1] = uVar1;
              uVar1 = puVar12[4];
              uVar7 = puVar12[5];
              puVar15[2] = uVar2;
              puVar15[3] = uVar6;
              uVar2 = puVar12[6];
              uVar6 = puVar12[7];
              puVar15[4] = uVar1;
              puVar15[5] = uVar7;
              uVar1 = puVar12[8];
              uVar7 = puVar12[9];
              puVar15[6] = uVar2;
              puVar15[7] = uVar6;
              uVar2 = puVar12[10];
              uVar6 = puVar12[0xb];
              puVar15[8] = uVar1;
              puVar15[9] = uVar7;
              uVar7 = puVar12[0xc];
              uVar8 = puVar12[0xd];
              puVar15[10] = uVar2;
              puVar15[0xb] = uVar6;
              uVar1 = puVar12[0xe];
              uVar2 = puVar12[0xf];
              puVar15[0xc] = uVar7;
              puVar15[0xd] = uVar8;
              puVar15[0xe] = uVar1;
              puVar15[0xf] = uVar2;
              lVar14 = lVar14 + -1;
              puVar20 = puVar15 + 0x10;
              puVar16 = puVar12 + 0x10;
            } while (lVar14 != 0);
            uVar3 = *(undefined4 *)((longlong)puVar12 + 0x84);
            uVar4 = *(undefined4 *)(puVar12 + 0x11);
            uVar5 = *(undefined4 *)((longlong)puVar12 + 0x8c);
            *(undefined4 *)(puVar15 + 0x10) = *(undefined4 *)(puVar12 + 0x10);
            *(undefined4 *)((longlong)puVar15 + 0x84) = uVar3;
            *(undefined4 *)(puVar15 + 0x11) = uVar4;
            *(undefined4 *)((longlong)puVar15 + 0x8c) = uVar5;
          }
          puVar16 = puVar18 + 0x22;
          puVar15 = puVar19;
LAB_1411c5073:
          puVar20 = puVar15 + 0x22;
          if (puVar20 <= puVar18) goto code_r0x0001411c507f;
          goto LAB_1411c50c4;
        }
        for (; puVar16 = puVar19, puVar20 = puVar19, puVar19 < puVar18; puVar18 = puVar18 + -0x22) {
          while (puVar15 = puVar16, puVar20 = puVar20 + 0x22, puVar20 <= puVar18) {
            if ((**(char **)(param_4 + 8) == '\0') ||
               (*(char *)(puVar15 + 0xb) == *(char *)(puVar20 + 0xb))) {
              if (*(int *)(puVar15 + 0x12) == *(int *)(puVar20 + 0x12)) {
                iVar21 = FText::CompareTo(puVar15,puVar20,0);
                bVar22 = iVar21 < 0;
              }
              else {
                bVar22 = *(int *)(puVar20 + 0x12) <= *(int *)(puVar15 + 0x12);
              }
            }
            else {
              bVar22 = *(char *)(puVar15 + 0xb) == '\0';
            }
            puVar16 = puVar20;
            if (!bVar22) {
              puVar16 = puVar15;
            }
          }
          if (puVar15 != puVar18) {
            lVar14 = 2;
            puVar20 = local_460;
            puVar16 = puVar15;
            do {
              puVar10 = puVar16;
              puVar12 = puVar20;
              uVar1 = puVar10[1];
              uVar2 = puVar10[2];
              uVar6 = puVar10[3];
              *puVar12 = *puVar10;
              puVar12[1] = uVar1;
              uVar1 = puVar10[4];
              uVar7 = puVar10[5];
              puVar12[2] = uVar2;
              puVar12[3] = uVar6;
              uVar2 = puVar10[6];
              uVar6 = puVar10[7];
              puVar12[4] = uVar1;
              puVar12[5] = uVar7;
              uVar1 = puVar10[8];
              uVar7 = puVar10[9];
              puVar12[6] = uVar2;
              puVar12[7] = uVar6;
              uVar2 = puVar10[10];
              uVar6 = puVar10[0xb];
              puVar12[8] = uVar1;
              puVar12[9] = uVar7;
              uVar1 = puVar10[0xc];
              uVar7 = puVar10[0xd];
              puVar12[10] = uVar2;
              puVar12[0xb] = uVar6;
              uVar2 = puVar10[0xe];
              uVar6 = puVar10[0xf];
              puVar12[0xc] = uVar1;
              puVar12[0xd] = uVar7;
              puVar12[0xe] = uVar2;
              puVar12[0xf] = uVar6;
              lVar14 = lVar14 + -1;
              puVar20 = puVar12 + 0x10;
              puVar16 = puVar10 + 0x10;
            } while (lVar14 != 0);
            uVar1 = puVar10[0x11];
            lVar14 = 2;
            puVar12[0x10] = puVar10[0x10];
            puVar12[0x11] = uVar1;
            puVar20 = puVar18;
            do {
              puVar12 = puVar15;
              puVar16 = puVar20;
              uVar1 = puVar16[1];
              *puVar12 = *puVar16;
              puVar12[1] = uVar1;
              uVar1 = puVar16[3];
              puVar12[2] = puVar16[2];
              puVar12[3] = uVar1;
              uVar1 = puVar16[5];
              puVar12[4] = puVar16[4];
              puVar12[5] = uVar1;
              uVar1 = puVar16[7];
              puVar12[6] = puVar16[6];
              puVar12[7] = uVar1;
              uVar1 = puVar16[9];
              puVar12[8] = puVar16[8];
              puVar12[9] = uVar1;
              uVar1 = puVar16[0xb];
              puVar12[10] = puVar16[10];
              puVar12[0xb] = uVar1;
              uVar1 = puVar16[0xd];
              puVar12[0xc] = puVar16[0xc];
              puVar12[0xd] = uVar1;
              uVar1 = puVar16[0xf];
              puVar12[0xe] = puVar16[0xe];
              puVar12[0xf] = uVar1;
              lVar14 = lVar14 + -1;
              puVar20 = puVar16 + 0x10;
              puVar15 = puVar12 + 0x10;
            } while (lVar14 != 0);
            uVar1 = puVar16[0x11];
            lVar14 = 2;
            puVar12[0x10] = puVar16[0x10];
            puVar12[0x11] = uVar1;
            puVar20 = puVar18;
            puVar16 = local_460;
            do {
              puVar12 = puVar16;
              puVar15 = puVar20;
              uVar1 = puVar12[1];
              uVar2 = puVar12[2];
              uVar6 = puVar12[3];
              *puVar15 = *puVar12;
              puVar15[1] = uVar1;
              uVar1 = puVar12[4];
              uVar7 = puVar12[5];
              puVar15[2] = uVar2;
              puVar15[3] = uVar6;
              uVar2 = puVar12[6];
              uVar6 = puVar12[7];
              puVar15[4] = uVar1;
              puVar15[5] = uVar7;
              uVar1 = puVar12[8];
              uVar7 = puVar12[9];
              puVar15[6] = uVar2;
              puVar15[7] = uVar6;
              uVar2 = puVar12[10];
              uVar6 = puVar12[0xb];
              puVar15[8] = uVar1;
              puVar15[9] = uVar7;
              uVar7 = puVar12[0xc];
              uVar8 = puVar12[0xd];
              puVar15[10] = uVar2;
              puVar15[0xb] = uVar6;
              uVar1 = puVar12[0xe];
              uVar2 = puVar12[0xf];
              puVar15[0xc] = uVar7;
              puVar15[0xd] = uVar8;
              puVar15[0xe] = uVar1;
              puVar15[0xf] = uVar2;
              lVar14 = lVar14 + -1;
              puVar20 = puVar15 + 0x10;
              puVar16 = puVar12 + 0x10;
            } while (lVar14 != 0);
            uVar3 = *(undefined4 *)((longlong)puVar12 + 0x84);
            uVar4 = *(undefined4 *)(puVar12 + 0x11);
            uVar5 = *(undefined4 *)((longlong)puVar12 + 0x8c);
            *(undefined4 *)(puVar15 + 0x10) = *(undefined4 *)(puVar12 + 0x10);
            *(undefined4 *)((longlong)puVar15 + 0x84) = uVar3;
            *(undefined4 *)(puVar15 + 0x11) = uVar4;
            *(undefined4 *)((longlong)puVar15 + 0x8c) = uVar5;
          }
        }
        goto LAB_1411c54a1;
      }
LAB_1411c5488:
      FUN_1411c1f60(puVar20,lVar14,param_3,param_4);
LAB_1411c54a1:
      plVar17 = plVar17 + -3;
    } while (&local_348 <= plVar17);
  }
  return;
code_r0x0001411c507f:
  if ((**(char **)(param_4 + 8) == '\0') || (*(char *)(puVar19 + 0xb) == *(char *)(puVar15 + 0x2d)))
  {
    if (*(int *)(puVar19 + 0x12) == *(int *)(puVar15 + 0x34)) {
      iVar9 = FText::CompareTo(puVar19,puVar20,0);
      bVar22 = iVar9 < 0;
    }
    else {
      bVar22 = *(int *)(puVar15 + 0x34) <= *(int *)(puVar19 + 0x12);
    }
  }
  else {
    bVar22 = *(char *)(puVar19 + 0xb) == '\0';
  }
  puVar15 = puVar20;
  if (!bVar22) goto LAB_1411c5073;
LAB_1411c50c4:
  do {
    puVar15 = puVar16;
    puVar16 = puVar15 + -0x22;
    if (puVar16 <= puVar19) break;
    if ((**(char **)(param_4 + 8) == '\0') ||
       (*(char *)(puVar15 + -0x17) == *(char *)(puVar19 + 0xb))) {
      if (*(int *)(puVar15 + -0x10) == *(int *)(puVar19 + 0x12)) {
        iVar9 = FText::CompareTo(puVar16,puVar19,0);
        bVar22 = iVar9 < 0;
      }
      else {
        bVar22 = *(int *)(puVar19 + 0x12) <= *(int *)(puVar15 + -0x10);
      }
    }
    else {
      bVar22 = *(char *)(puVar15 + -0x17) == '\0';
    }
  } while (!bVar22);
  if (puVar20 <= puVar16) {
    puVar15 = puVar20;
    if (puVar20 != puVar16) {
      lVar14 = 2;
      puVar15 = local_680;
      puVar12 = puVar20;
      do {
        puVar11 = puVar12;
        puVar10 = puVar15;
        uVar1 = puVar11[1];
        uVar2 = puVar11[2];
        uVar6 = puVar11[3];
        *puVar10 = *puVar11;
        puVar10[1] = uVar1;
        uVar1 = puVar11[4];
        uVar7 = puVar11[5];
        puVar10[2] = uVar2;
        puVar10[3] = uVar6;
        uVar2 = puVar11[6];
        uVar6 = puVar11[7];
        puVar10[4] = uVar1;
        puVar10[5] = uVar7;
        uVar1 = puVar11[8];
        uVar7 = puVar11[9];
        puVar10[6] = uVar2;
        puVar10[7] = uVar6;
        uVar2 = puVar11[10];
        uVar6 = puVar11[0xb];
        puVar10[8] = uVar1;
        puVar10[9] = uVar7;
        uVar1 = puVar11[0xc];
        uVar7 = puVar11[0xd];
        puVar10[10] = uVar2;
        puVar10[0xb] = uVar6;
        uVar2 = puVar11[0xe];
        uVar6 = puVar11[0xf];
        puVar10[0xc] = uVar1;
        puVar10[0xd] = uVar7;
        puVar10[0xe] = uVar2;
        puVar10[0xf] = uVar6;
        lVar14 = lVar14 + -1;
        puVar15 = puVar10 + 0x10;
        puVar12 = puVar11 + 0x10;
      } while (lVar14 != 0);
      uVar1 = puVar11[0x11];
      lVar14 = 2;
      puVar10[0x10] = puVar11[0x10];
      puVar10[0x11] = uVar1;
      puVar15 = puVar20;
      puVar12 = puVar16;
      do {
        puVar11 = puVar12;
        puVar10 = puVar15;
        uVar1 = puVar11[1];
        *puVar10 = *puVar11;
        puVar10[1] = uVar1;
        uVar1 = puVar11[3];
        puVar10[2] = puVar11[2];
        puVar10[3] = uVar1;
        uVar1 = puVar11[5];
        puVar10[4] = puVar11[4];
        puVar10[5] = uVar1;
        uVar1 = puVar11[7];
        puVar10[6] = puVar11[6];
        puVar10[7] = uVar1;
        uVar1 = puVar11[9];
        puVar10[8] = puVar11[8];
        puVar10[9] = uVar1;
        uVar1 = puVar11[0xb];
        puVar10[10] = puVar11[10];
        puVar10[0xb] = uVar1;
        uVar1 = puVar11[0xd];
        puVar10[0xc] = puVar11[0xc];
        puVar10[0xd] = uVar1;
        uVar1 = puVar11[0xf];
        puVar10[0xe] = puVar11[0xe];
        puVar10[0xf] = uVar1;
        lVar14 = lVar14 + -1;
        puVar15 = puVar10 + 0x10;
        puVar12 = puVar11 + 0x10;
      } while (lVar14 != 0);
      uVar1 = puVar11[0x11];
      lVar14 = 2;
      puVar10[0x10] = puVar11[0x10];
      puVar10[0x11] = uVar1;
      puVar15 = puVar16;
      puVar12 = local_680;
      do {
        puVar11 = puVar12;
        puVar10 = puVar15;
        uVar1 = puVar11[1];
        uVar2 = puVar11[2];
        uVar6 = puVar11[3];
        *puVar10 = *puVar11;
        puVar10[1] = uVar1;
        uVar1 = puVar11[4];
        uVar7 = puVar11[5];
        puVar10[2] = uVar2;
        puVar10[3] = uVar6;
        uVar2 = puVar11[6];
        uVar6 = puVar11[7];
        puVar10[4] = uVar1;
        puVar10[5] = uVar7;
        uVar1 = puVar11[8];
        uVar7 = puVar11[9];
        puVar10[6] = uVar2;
        puVar10[7] = uVar6;
        uVar2 = puVar11[10];
        uVar6 = puVar11[0xb];
        puVar10[8] = uVar1;
        puVar10[9] = uVar7;
        uVar7 = puVar11[0xc];
        uVar8 = puVar11[0xd];
        puVar10[10] = uVar2;
        puVar10[0xb] = uVar6;
        uVar1 = puVar11[0xe];
        uVar2 = puVar11[0xf];
        puVar10[0xc] = uVar7;
        puVar10[0xd] = uVar8;
        puVar10[0xe] = uVar1;
        puVar10[0xf] = uVar2;
        lVar14 = lVar14 + -1;
        puVar15 = puVar10 + 0x10;
        puVar12 = puVar11 + 0x10;
      } while (lVar14 != 0);
      uVar3 = *(undefined4 *)((longlong)puVar11 + 0x84);
      uVar4 = *(undefined4 *)(puVar11 + 0x11);
      uVar5 = *(undefined4 *)((longlong)puVar11 + 0x8c);
      *(undefined4 *)(puVar10 + 0x10) = *(undefined4 *)(puVar11 + 0x10);
      *(undefined4 *)((longlong)puVar10 + 0x84) = uVar3;
      *(undefined4 *)(puVar10 + 0x11) = uVar4;
      *(undefined4 *)((longlong)puVar10 + 0x8c) = uVar5;
      puVar15 = puVar20;
    }
    goto LAB_1411c5073;
  }
  if (puVar19 != puVar16) {
    lVar14 = 2;
    puVar12 = local_570;
    puVar10 = puVar19;
    do {
      puVar13 = puVar10;
      puVar11 = puVar12;
      uVar1 = puVar13[1];
      uVar2 = puVar13[2];
      uVar6 = puVar13[3];
      *puVar11 = *puVar13;
      puVar11[1] = uVar1;
      uVar1 = puVar13[4];
      uVar7 = puVar13[5];
      puVar11[2] = uVar2;
      puVar11[3] = uVar6;
      uVar2 = puVar13[6];
      uVar6 = puVar13[7];
      puVar11[4] = uVar1;
      puVar11[5] = uVar7;
      uVar1 = puVar13[8];
      uVar7 = puVar13[9];
      puVar11[6] = uVar2;
      puVar11[7] = uVar6;
      uVar2 = puVar13[10];
      uVar6 = puVar13[0xb];
      puVar11[8] = uVar1;
      puVar11[9] = uVar7;
      uVar1 = puVar13[0xc];
      uVar7 = puVar13[0xd];
      puVar11[10] = uVar2;
      puVar11[0xb] = uVar6;
      uVar2 = puVar13[0xe];
      uVar6 = puVar13[0xf];
      puVar11[0xc] = uVar1;
      puVar11[0xd] = uVar7;
      puVar11[0xe] = uVar2;
      puVar11[0xf] = uVar6;
      lVar14 = lVar14 + -1;
      puVar12 = puVar11 + 0x10;
      puVar10 = puVar13 + 0x10;
    } while (lVar14 != 0);
    uVar1 = puVar13[0x11];
    lVar14 = 2;
    puVar11[0x10] = puVar13[0x10];
    puVar11[0x11] = uVar1;
    puVar12 = puVar19;
    puVar10 = puVar16;
    do {
      puVar13 = puVar10;
      puVar11 = puVar12;
      uVar1 = puVar13[1];
      *puVar11 = *puVar13;
      puVar11[1] = uVar1;
      uVar1 = puVar13[3];
      puVar11[2] = puVar13[2];
      puVar11[3] = uVar1;
      uVar1 = puVar13[5];
      puVar11[4] = puVar13[4];
      puVar11[5] = uVar1;
      uVar1 = puVar13[7];
      puVar11[6] = puVar13[6];
      puVar11[7] = uVar1;
      uVar1 = puVar13[9];
      puVar11[8] = puVar13[8];
      puVar11[9] = uVar1;
      uVar1 = puVar13[0xb];
      puVar11[10] = puVar13[10];
      puVar11[0xb] = uVar1;
      uVar1 = puVar13[0xd];
      puVar11[0xc] = puVar13[0xc];
      puVar11[0xd] = uVar1;
      uVar1 = puVar13[0xf];
      puVar11[0xe] = puVar13[0xe];
      puVar11[0xf] = uVar1;
      lVar14 = lVar14 + -1;
      puVar12 = puVar11 + 0x10;
      puVar10 = puVar13 + 0x10;
    } while (lVar14 != 0);
    uVar1 = puVar13[0x11];
    lVar14 = 2;
    puVar11[0x10] = puVar13[0x10];
    puVar11[0x11] = uVar1;
    puVar12 = puVar16;
    puVar10 = local_570;
    do {
      puVar13 = puVar10;
      puVar11 = puVar12;
      uVar1 = puVar13[1];
      uVar2 = puVar13[2];
      uVar6 = puVar13[3];
      *puVar11 = *puVar13;
      puVar11[1] = uVar1;
      uVar1 = puVar13[4];
      uVar7 = puVar13[5];
      puVar11[2] = uVar2;
      puVar11[3] = uVar6;
      uVar2 = puVar13[6];
      uVar6 = puVar13[7];
      puVar11[4] = uVar1;
      puVar11[5] = uVar7;
      uVar1 = puVar13[8];
      uVar7 = puVar13[9];
      puVar11[6] = uVar2;
      puVar11[7] = uVar6;
      uVar2 = puVar13[10];
      uVar6 = puVar13[0xb];
      puVar11[8] = uVar1;
      puVar11[9] = uVar7;
      uVar7 = puVar13[0xc];
      uVar8 = puVar13[0xd];
      puVar11[10] = uVar2;
      puVar11[0xb] = uVar6;
      uVar1 = puVar13[0xe];
      uVar2 = puVar13[0xf];
      puVar11[0xc] = uVar7;
      puVar11[0xd] = uVar8;
      puVar11[0xe] = uVar1;
      puVar11[0xf] = uVar2;
      lVar14 = lVar14 + -1;
      puVar12 = puVar11 + 0x10;
      puVar10 = puVar13 + 0x10;
    } while (lVar14 != 0);
    uVar3 = *(undefined4 *)((longlong)puVar13 + 0x84);
    uVar4 = *(undefined4 *)(puVar13 + 0x11);
    uVar5 = *(undefined4 *)((longlong)puVar13 + 0x8c);
    *(undefined4 *)(puVar11 + 0x10) = *(undefined4 *)(puVar13 + 0x10);
    *(undefined4 *)((longlong)puVar11 + 0x84) = uVar3;
    *(undefined4 *)(puVar11 + 0x11) = uVar4;
    *(undefined4 *)((longlong)puVar11 + 0x8c) = uVar5;
  }
  iVar21 = iVar21 + -1;
  if (((longlong)puVar16 + (-0x110 - (longlong)puVar19)) / 0x110 <
      ((longlong)puVar18 - (longlong)puVar20) / 0x110) {
    if (puVar20 < puVar18) {
      *plVar17 = (longlong)puVar20;
      plVar17[1] = (longlong)puVar18;
      *(int *)(plVar17 + 2) = iVar21;
      plVar17 = plVar17 + 3;
    }
    if (puVar16 <= puVar19 + 0x22) goto LAB_1411c54a1;
    puVar18 = puVar15 + -0x44;
    puVar20 = puVar19;
  }
  else {
    if (puVar19 + 0x22 < puVar16) {
      *plVar17 = (longlong)puVar19;
      plVar17[1] = (longlong)(puVar15 + -0x44);
      *(int *)(plVar17 + 2) = iVar21;
      plVar17 = plVar17 + 3;
    }
    if (puVar18 <= puVar20) goto LAB_1411c54a1;
  }
  lVar14 = ((longlong)puVar18 - (longlong)puVar20) / 0x110 + 1;
  puVar19 = puVar20;
  if (iVar21 == 0) goto LAB_1411c5488;
  goto LAB_1411c4f00;
}



// FUNCTION 1411c56d0 FUN_1411c56d0 body=2110 status=ok
// SIG undefined FUN_1411c56d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411c56d0(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  int iVar18;
  longlong *plVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  float fVar22;
  undefined1 auStack_7c8 [48];
  longlong local_798;
  undefined8 local_790 [34];
  undefined8 local_680 [34];
  undefined8 local_570 [34];
  undefined8 local_460 [35];
  longlong local_348;
  longlong lStack_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_7c8;
    fVar22 = (float)(longlong)param_2;
    lStack_340 = param_1 + -0x110 + param_2 * 0x110;
    if ((longlong)param_2 < 0) {
      fVar22 = fVar22 + 1.8446744e+19;
    }
    local_348 = param_1;
    fVar22 = _guard_xfg_dispatch_icall_nop(fVar22);
    local_338 = (undefined4)(longlong)(fVar22 + fVar22);
    _guard_xfg_dispatch_icall_nop(local_330,0,0x2e8);
    plVar19 = &local_348;
    do {
      puVar17 = (undefined8 *)*plVar19;
      puVar21 = (undefined8 *)plVar19[1];
      local_798 = plVar19[2];
      lVar15 = ((longlong)puVar21 - (longlong)puVar17) / 0x110 + 1;
      puVar20 = puVar17;
      iVar18 = (int)local_798;
      if ((int)local_798 != 0) {
LAB_1411c57e0:
        if (8 < lVar15) {
          puVar17 = puVar20 + (lVar15 / 2) * 0x22;
          if (puVar17 != puVar20) {
            lVar15 = 2;
            puVar16 = local_790;
            puVar13 = puVar17;
            do {
              puVar10 = puVar13;
              puVar12 = puVar16;
              uVar1 = puVar10[1];
              uVar2 = puVar10[2];
              uVar6 = puVar10[3];
              *puVar12 = *puVar10;
              puVar12[1] = uVar1;
              uVar1 = puVar10[4];
              uVar7 = puVar10[5];
              puVar12[2] = uVar2;
              puVar12[3] = uVar6;
              uVar2 = puVar10[6];
              uVar6 = puVar10[7];
              puVar12[4] = uVar1;
              puVar12[5] = uVar7;
              uVar1 = puVar10[8];
              uVar7 = puVar10[9];
              puVar12[6] = uVar2;
              puVar12[7] = uVar6;
              uVar2 = puVar10[10];
              uVar6 = puVar10[0xb];
              puVar12[8] = uVar1;
              puVar12[9] = uVar7;
              uVar1 = puVar10[0xc];
              uVar7 = puVar10[0xd];
              puVar12[10] = uVar2;
              puVar12[0xb] = uVar6;
              uVar2 = puVar10[0xe];
              uVar6 = puVar10[0xf];
              puVar12[0xc] = uVar1;
              puVar12[0xd] = uVar7;
              puVar12[0xe] = uVar2;
              puVar12[0xf] = uVar6;
              lVar15 = lVar15 + -1;
              puVar16 = puVar12 + 0x10;
              puVar13 = puVar10 + 0x10;
            } while (lVar15 != 0);
            uVar1 = puVar10[0x11];
            lVar15 = 2;
            puVar12[0x10] = puVar10[0x10];
            puVar12[0x11] = uVar1;
            puVar16 = puVar20;
            do {
              puVar12 = puVar17;
              puVar13 = puVar16;
              uVar1 = puVar13[1];
              *puVar12 = *puVar13;
              puVar12[1] = uVar1;
              uVar1 = puVar13[3];
              puVar12[2] = puVar13[2];
              puVar12[3] = uVar1;
              uVar1 = puVar13[5];
              puVar12[4] = puVar13[4];
              puVar12[5] = uVar1;
              uVar1 = puVar13[7];
              puVar12[6] = puVar13[6];
              puVar12[7] = uVar1;
              uVar1 = puVar13[9];
              puVar12[8] = puVar13[8];
              puVar12[9] = uVar1;
              uVar1 = puVar13[0xb];
              puVar12[10] = puVar13[10];
              puVar12[0xb] = uVar1;
              uVar1 = puVar13[0xd];
              puVar12[0xc] = puVar13[0xc];
              puVar12[0xd] = uVar1;
              uVar1 = puVar13[0xf];
              puVar12[0xe] = puVar13[0xe];
              puVar12[0xf] = uVar1;
              lVar15 = lVar15 + -1;
              puVar16 = puVar13 + 0x10;
              puVar17 = puVar12 + 0x10;
            } while (lVar15 != 0);
            uVar1 = puVar13[0x11];
            lVar15 = 2;
            puVar12[0x10] = puVar13[0x10];
            puVar12[0x11] = uVar1;
            puVar17 = puVar20;
            puVar16 = local_790;
            do {
              puVar12 = puVar16;
              puVar13 = puVar17;
              uVar1 = puVar12[1];
              uVar2 = puVar12[2];
              uVar6 = puVar12[3];
              *puVar13 = *puVar12;
              puVar13[1] = uVar1;
              uVar1 = puVar12[4];
              uVar7 = puVar12[5];
              puVar13[2] = uVar2;
              puVar13[3] = uVar6;
              uVar2 = puVar12[6];
              uVar6 = puVar12[7];
              puVar13[4] = uVar1;
              puVar13[5] = uVar7;
              uVar1 = puVar12[8];
              uVar7 = puVar12[9];
              puVar13[6] = uVar2;
              puVar13[7] = uVar6;
              uVar2 = puVar12[10];
              uVar6 = puVar12[0xb];
              puVar13[8] = uVar1;
              puVar13[9] = uVar7;
              uVar7 = puVar12[0xc];
              uVar8 = puVar12[0xd];
              puVar13[10] = uVar2;
              puVar13[0xb] = uVar6;
              uVar1 = puVar12[0xe];
              uVar2 = puVar12[0xf];
              puVar13[0xc] = uVar7;
              puVar13[0xd] = uVar8;
              puVar13[0xe] = uVar1;
              puVar13[0xf] = uVar2;
              lVar15 = lVar15 + -1;
              puVar17 = puVar13 + 0x10;
              puVar16 = puVar12 + 0x10;
            } while (lVar15 != 0);
            uVar3 = *(undefined4 *)((longlong)puVar12 + 0x84);
            uVar4 = *(undefined4 *)(puVar12 + 0x11);
            uVar5 = *(undefined4 *)((longlong)puVar12 + 0x8c);
            *(undefined4 *)(puVar13 + 0x10) = *(undefined4 *)(puVar12 + 0x10);
            *(undefined4 *)((longlong)puVar13 + 0x84) = uVar3;
            *(undefined4 *)(puVar13 + 0x11) = uVar4;
            *(undefined4 *)((longlong)puVar13 + 0x8c) = uVar5;
          }
          puVar16 = puVar21 + 0x22;
          puVar17 = puVar20;
LAB_1411c5953:
          puVar17 = puVar17 + 0x22;
          if (puVar17 <= puVar21) goto code_r0x0001411c595f;
          goto LAB_1411c5971;
        }
        for (; puVar16 = puVar20, puVar17 = puVar20, puVar20 < puVar21; puVar21 = puVar21 + -0x22) {
          while (puVar17 = puVar17 + 0x22, puVar17 <= puVar21) {
            cVar9 = FUN_1411d06f0(param_4,puVar16,puVar17);
            if (cVar9 != '\0') {
              puVar16 = puVar17;
            }
          }
          if (puVar16 != puVar21) {
            lVar15 = 2;
            puVar17 = local_460;
            puVar13 = puVar16;
            do {
              puVar10 = puVar13;
              puVar12 = puVar17;
              uVar1 = puVar10[1];
              uVar2 = puVar10[2];
              uVar6 = puVar10[3];
              *puVar12 = *puVar10;
              puVar12[1] = uVar1;
              uVar1 = puVar10[4];
              uVar7 = puVar10[5];
              puVar12[2] = uVar2;
              puVar12[3] = uVar6;
              uVar2 = puVar10[6];
              uVar6 = puVar10[7];
              puVar12[4] = uVar1;
              puVar12[5] = uVar7;
              uVar1 = puVar10[8];
              uVar7 = puVar10[9];
              puVar12[6] = uVar2;
              puVar12[7] = uVar6;
              uVar2 = puVar10[10];
              uVar6 = puVar10[0xb];
              puVar12[8] = uVar1;
              puVar12[9] = uVar7;
              uVar1 = puVar10[0xc];
              uVar7 = puVar10[0xd];
              puVar12[10] = uVar2;
              puVar12[0xb] = uVar6;
              uVar2 = puVar10[0xe];
              uVar6 = puVar10[0xf];
              puVar12[0xc] = uVar1;
              puVar12[0xd] = uVar7;
              puVar12[0xe] = uVar2;
              puVar12[0xf] = uVar6;
              lVar15 = lVar15 + -1;
              puVar17 = puVar12 + 0x10;
              puVar13 = puVar10 + 0x10;
            } while (lVar15 != 0);
            uVar1 = puVar10[0x11];
            lVar15 = 2;
            puVar12[0x10] = puVar10[0x10];
            puVar12[0x11] = uVar1;
            puVar17 = puVar21;
            do {
              puVar12 = puVar16;
              puVar13 = puVar17;
              uVar1 = puVar13[1];
              *puVar12 = *puVar13;
              puVar12[1] = uVar1;
              uVar1 = puVar13[3];
              puVar12[2] = puVar13[2];
              puVar12[3] = uVar1;
              uVar1 = puVar13[5];
              puVar12[4] = puVar13[4];
              puVar12[5] = uVar1;
              uVar1 = puVar13[7];
              puVar12[6] = puVar13[6];
              puVar12[7] = uVar1;
              uVar1 = puVar13[9];
              puVar12[8] = puVar13[8];
              puVar12[9] = uVar1;
              uVar1 = puVar13[0xb];
              puVar12[10] = puVar13[10];
              puVar12[0xb] = uVar1;
              uVar1 = puVar13[0xd];
              puVar12[0xc] = puVar13[0xc];
              puVar12[0xd] = uVar1;
              uVar1 = puVar13[0xf];
              puVar12[0xe] = puVar13[0xe];
              puVar12[0xf] = uVar1;
              lVar15 = lVar15 + -1;
              puVar17 = puVar13 + 0x10;
              puVar16 = puVar12 + 0x10;
            } while (lVar15 != 0);
            uVar1 = puVar13[0x11];
            lVar15 = 2;
            puVar12[0x10] = puVar13[0x10];
            puVar12[0x11] = uVar1;
            puVar17 = puVar21;
            puVar16 = local_460;
            do {
              puVar12 = puVar16;
              puVar13 = puVar17;
              uVar1 = puVar12[1];
              uVar2 = puVar12[2];
              uVar6 = puVar12[3];
              *puVar13 = *puVar12;
              puVar13[1] = uVar1;
              uVar1 = puVar12[4];
              uVar7 = puVar12[5];
              puVar13[2] = uVar2;
              puVar13[3] = uVar6;
              uVar2 = puVar12[6];
              uVar6 = puVar12[7];
              puVar13[4] = uVar1;
              puVar13[5] = uVar7;
              uVar1 = puVar12[8];
              uVar7 = puVar12[9];
              puVar13[6] = uVar2;
              puVar13[7] = uVar6;
              uVar2 = puVar12[10];
              uVar6 = puVar12[0xb];
              puVar13[8] = uVar1;
              puVar13[9] = uVar7;
              uVar7 = puVar12[0xc];
              uVar8 = puVar12[0xd];
              puVar13[10] = uVar2;
              puVar13[0xb] = uVar6;
              uVar1 = puVar12[0xe];
              uVar2 = puVar12[0xf];
              puVar13[0xc] = uVar7;
              puVar13[0xd] = uVar8;
              puVar13[0xe] = uVar1;
              puVar13[0xf] = uVar2;
              lVar15 = lVar15 + -1;
              puVar17 = puVar13 + 0x10;
              puVar16 = puVar12 + 0x10;
            } while (lVar15 != 0);
            uVar3 = *(undefined4 *)((longlong)puVar12 + 0x84);
            uVar4 = *(undefined4 *)(puVar12 + 0x11);
            uVar5 = *(undefined4 *)((longlong)puVar12 + 0x8c);
            *(undefined4 *)(puVar13 + 0x10) = *(undefined4 *)(puVar12 + 0x10);
            *(undefined4 *)((longlong)puVar13 + 0x84) = uVar3;
            *(undefined4 *)(puVar13 + 0x11) = uVar4;
            *(undefined4 *)((longlong)puVar13 + 0x8c) = uVar5;
          }
        }
        goto LAB_1411c5d0d;
      }
LAB_1411c5cf4:
      FUN_1411c25e0(puVar17,lVar15,param_3,param_4);
LAB_1411c5d0d:
      plVar19 = plVar19 + -3;
    } while (&local_348 <= plVar19);
  }
  return;
code_r0x0001411c595f:
  cVar9 = FUN_1411d06f0(param_4,puVar20,puVar17);
  if (cVar9 == '\0') goto LAB_1411c5953;
LAB_1411c5971:
  do {
    puVar13 = puVar16;
    puVar16 = puVar13 + -0x22;
    if (puVar16 <= puVar20) break;
    cVar9 = FUN_1411d06f0(param_4,puVar16,puVar20);
  } while (cVar9 == '\0');
  if (puVar17 <= puVar16) {
    if (puVar17 != puVar16) {
      lVar15 = 2;
      puVar13 = local_680;
      puVar12 = puVar17;
      do {
        puVar11 = puVar12;
        puVar10 = puVar13;
        uVar1 = puVar11[1];
        uVar2 = puVar11[2];
        uVar6 = puVar11[3];
        *puVar10 = *puVar11;
        puVar10[1] = uVar1;
        uVar1 = puVar11[4];
        uVar7 = puVar11[5];
        puVar10[2] = uVar2;
        puVar10[3] = uVar6;
        uVar2 = puVar11[6];
        uVar6 = puVar11[7];
        puVar10[4] = uVar1;
        puVar10[5] = uVar7;
        uVar1 = puVar11[8];
        uVar7 = puVar11[9];
        puVar10[6] = uVar2;
        puVar10[7] = uVar6;
        uVar2 = puVar11[10];
        uVar6 = puVar11[0xb];
        puVar10[8] = uVar1;
        puVar10[9] = uVar7;
        uVar1 = puVar11[0xc];
        uVar7 = puVar11[0xd];
        puVar10[10] = uVar2;
        puVar10[0xb] = uVar6;
        uVar2 = puVar11[0xe];
        uVar6 = puVar11[0xf];
        puVar10[0xc] = uVar1;
        puVar10[0xd] = uVar7;
        puVar10[0xe] = uVar2;
        puVar10[0xf] = uVar6;
        lVar15 = lVar15 + -1;
        puVar13 = puVar10 + 0x10;
        puVar12 = puVar11 + 0x10;
      } while (lVar15 != 0);
      uVar1 = puVar11[0x11];
      lVar15 = 2;
      puVar10[0x10] = puVar11[0x10];
      puVar10[0x11] = uVar1;
      puVar13 = puVar17;
      puVar12 = puVar16;
      do {
        puVar11 = puVar12;
        puVar10 = puVar13;
        uVar1 = puVar11[1];
        *puVar10 = *puVar11;
        puVar10[1] = uVar1;
        uVar1 = puVar11[3];
        puVar10[2] = puVar11[2];
        puVar10[3] = uVar1;
        uVar1 = puVar11[5];
        puVar10[4] = puVar11[4];
        puVar10[5] = uVar1;
        uVar1 = puVar11[7];
        puVar10[6] = puVar11[6];
        puVar10[7] = uVar1;
        uVar1 = puVar11[9];
        puVar10[8] = puVar11[8];
        puVar10[9] = uVar1;
        uVar1 = puVar11[0xb];
        puVar10[10] = puVar11[10];
        puVar10[0xb] = uVar1;
        uVar1 = puVar11[0xd];
        puVar10[0xc] = puVar11[0xc];
        puVar10[0xd] = uVar1;
        uVar1 = puVar11[0xf];
        puVar10[0xe] = puVar11[0xe];
        puVar10[0xf] = uVar1;
        lVar15 = lVar15 + -1;
        puVar13 = puVar10 + 0x10;
        puVar12 = puVar11 + 0x10;
      } while (lVar15 != 0);
      uVar1 = puVar11[0x11];
      lVar15 = 2;
      puVar10[0x10] = puVar11[0x10];
      puVar10[0x11] = uVar1;
      puVar13 = puVar16;
      puVar12 = local_680;
      do {
        puVar11 = puVar12;
        puVar10 = puVar13;
        uVar1 = puVar11[1];
        uVar2 = puVar11[2];
        uVar6 = puVar11[3];
        *puVar10 = *puVar11;
        puVar10[1] = uVar1;
        uVar1 = puVar11[4];
        uVar7 = puVar11[5];
        puVar10[2] = uVar2;
        puVar10[3] = uVar6;
        uVar2 = puVar11[6];
        uVar6 = puVar11[7];
        puVar10[4] = uVar1;
        puVar10[5] = uVar7;
        uVar1 = puVar11[8];
        uVar7 = puVar11[9];
        puVar10[6] = uVar2;
        puVar10[7] = uVar6;
        uVar2 = puVar11[10];
        uVar6 = puVar11[0xb];
        puVar10[8] = uVar1;
        puVar10[9] = uVar7;
        uVar7 = puVar11[0xc];
        uVar8 = puVar11[0xd];
        puVar10[10] = uVar2;
        puVar10[0xb] = uVar6;
        uVar1 = puVar11[0xe];
        uVar2 = puVar11[0xf];
        puVar10[0xc] = uVar7;
        puVar10[0xd] = uVar8;
        puVar10[0xe] = uVar1;
        puVar10[0xf] = uVar2;
        lVar15 = lVar15 + -1;
        puVar13 = puVar10 + 0x10;
        puVar12 = puVar11 + 0x10;
      } while (lVar15 != 0);
      uVar3 = *(undefined4 *)((longlong)puVar11 + 0x84);
      uVar4 = *(undefined4 *)(puVar11 + 0x11);
      uVar5 = *(undefined4 *)((longlong)puVar11 + 0x8c);
      *(undefined4 *)(puVar10 + 0x10) = *(undefined4 *)(puVar11 + 0x10);
      *(undefined4 *)((longlong)puVar10 + 0x84) = uVar3;
      *(undefined4 *)(puVar10 + 0x11) = uVar4;
      *(undefined4 *)((longlong)puVar10 + 0x8c) = uVar5;
    }
    goto LAB_1411c5953;
  }
  if (puVar20 != puVar16) {
    lVar15 = 2;
    puVar12 = local_570;
    puVar10 = puVar20;
    do {
      puVar14 = puVar10;
      puVar11 = puVar12;
      uVar1 = puVar14[1];
      uVar2 = puVar14[2];
      uVar6 = puVar14[3];
      *puVar11 = *puVar14;
      puVar11[1] = uVar1;
      uVar1 = puVar14[4];
      uVar7 = puVar14[5];
      puVar11[2] = uVar2;
      puVar11[3] = uVar6;
      uVar2 = puVar14[6];
      uVar6 = puVar14[7];
      puVar11[4] = uVar1;
      puVar11[5] = uVar7;
      uVar1 = puVar14[8];
      uVar7 = puVar14[9];
      puVar11[6] = uVar2;
      puVar11[7] = uVar6;
      uVar2 = puVar14[10];
      uVar6 = puVar14[0xb];
      puVar11[8] = uVar1;
      puVar11[9] = uVar7;
      uVar1 = puVar14[0xc];
      uVar7 = puVar14[0xd];
      puVar11[10] = uVar2;
      puVar11[0xb] = uVar6;
      uVar2 = puVar14[0xe];
      uVar6 = puVar14[0xf];
      puVar11[0xc] = uVar1;
      puVar11[0xd] = uVar7;
      puVar11[0xe] = uVar2;
      puVar11[0xf] = uVar6;
      lVar15 = lVar15 + -1;
      puVar12 = puVar11 + 0x10;
      puVar10 = puVar14 + 0x10;
    } while (lVar15 != 0);
    uVar1 = puVar14[0x11];
    lVar15 = 2;
    puVar11[0x10] = puVar14[0x10];
    puVar11[0x11] = uVar1;
    puVar12 = puVar20;
    puVar10 = puVar16;
    do {
      puVar14 = puVar10;
      puVar11 = puVar12;
      uVar1 = puVar14[1];
      *puVar11 = *puVar14;
      puVar11[1] = uVar1;
      uVar1 = puVar14[3];
      puVar11[2] = puVar14[2];
      puVar11[3] = uVar1;
      uVar1 = puVar14[5];
      puVar11[4] = puVar14[4];
      puVar11[5] = uVar1;
      uVar1 = puVar14[7];
      puVar11[6] = puVar14[6];
      puVar11[7] = uVar1;
      uVar1 = puVar14[9];
      puVar11[8] = puVar14[8];
      puVar11[9] = uVar1;
      uVar1 = puVar14[0xb];
      puVar11[10] = puVar14[10];
      puVar11[0xb] = uVar1;
      uVar1 = puVar14[0xd];
      puVar11[0xc] = puVar14[0xc];
      puVar11[0xd] = uVar1;
      uVar1 = puVar14[0xf];
      puVar11[0xe] = puVar14[0xe];
      puVar11[0xf] = uVar1;
      lVar15 = lVar15 + -1;
      puVar12 = puVar11 + 0x10;
      puVar10 = puVar14 + 0x10;
    } while (lVar15 != 0);
    uVar1 = puVar14[0x11];
    lVar15 = 2;
    puVar11[0x10] = puVar14[0x10];
    puVar11[0x11] = uVar1;
    puVar12 = puVar16;
    puVar10 = local_570;
    do {
      puVar14 = puVar10;
      puVar11 = puVar12;
      uVar1 = puVar14[1];
      uVar2 = puVar14[2];
      uVar6 = puVar14[3];
      *puVar11 = *puVar14;
      puVar11[1] = uVar1;
      uVar1 = puVar14[4];
      uVar7 = puVar14[5];
      puVar11[2] = uVar2;
      puVar11[3] = uVar6;
      uVar2 = puVar14[6];
      uVar6 = puVar14[7];
      puVar11[4] = uVar1;
      puVar11[5] = uVar7;
      uVar1 = puVar14[8];
      uVar7 = puVar14[9];
      puVar11[6] = uVar2;
      puVar11[7] = uVar6;
      uVar2 = puVar14[10];
      uVar6 = puVar14[0xb];
      puVar11[8] = uVar1;
      puVar11[9] = uVar7;
      uVar7 = puVar14[0xc];
      uVar8 = puVar14[0xd];
      puVar11[10] = uVar2;
      puVar11[0xb] = uVar6;
      uVar1 = puVar14[0xe];
      uVar2 = puVar14[0xf];
      puVar11[0xc] = uVar7;
      puVar11[0xd] = uVar8;
      puVar11[0xe] = uVar1;
      puVar11[0xf] = uVar2;
      lVar15 = lVar15 + -1;
      puVar12 = puVar11 + 0x10;
      puVar10 = puVar14 + 0x10;
    } while (lVar15 != 0);
    uVar3 = *(undefined4 *)((longlong)puVar14 + 0x84);
    uVar4 = *(undefined4 *)(puVar14 + 0x11);
    uVar5 = *(undefined4 *)((longlong)puVar14 + 0x8c);
    *(undefined4 *)(puVar11 + 0x10) = *(undefined4 *)(puVar14 + 0x10);
    *(undefined4 *)((longlong)puVar11 + 0x84) = uVar3;
    *(undefined4 *)(puVar11 + 0x11) = uVar4;
    *(undefined4 *)((longlong)puVar11 + 0x8c) = uVar5;
  }
  iVar18 = iVar18 + -1;
  if (((longlong)puVar16 + (-0x110 - (longlong)puVar20)) / 0x110 <
      ((longlong)puVar21 - (longlong)puVar17) / 0x110) {
    if (puVar17 < puVar21) {
      *plVar19 = (longlong)puVar17;
      plVar19[1] = (longlong)puVar21;
      *(int *)(plVar19 + 2) = iVar18;
      plVar19 = plVar19 + 3;
    }
    if (puVar16 <= puVar20 + 0x22) goto LAB_1411c5d0d;
    puVar21 = puVar13 + -0x44;
    puVar17 = puVar20;
  }
  else {
    if (puVar20 + 0x22 < puVar16) {
      *plVar19 = (longlong)puVar20;
      plVar19[1] = (longlong)(puVar13 + -0x44);
      *(int *)(plVar19 + 2) = iVar18;
      plVar19 = plVar19 + 3;
    }
    if (puVar21 <= puVar17) goto LAB_1411c5d0d;
  }
  lVar15 = ((longlong)puVar21 - (longlong)puVar17) / 0x110 + 1;
  puVar20 = puVar17;
  if (iVar18 == 0) goto LAB_1411c5cf4;
  goto LAB_1411c57e0;
}



// FUNCTION 1411c5f10 FUN_1411c5f10 body=2110 status=ok
// SIG undefined FUN_1411c5f10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411c5f10(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  int iVar18;
  longlong *plVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  float fVar22;
  undefined1 auStack_7c8 [48];
  longlong local_798;
  undefined8 local_790 [34];
  undefined8 local_680 [34];
  undefined8 local_570 [34];
  undefined8 local_460 [35];
  longlong local_348;
  longlong lStack_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_7c8;
    fVar22 = (float)(longlong)param_2;
    lStack_340 = param_1 + -0x110 + param_2 * 0x110;
    if ((longlong)param_2 < 0) {
      fVar22 = fVar22 + 1.8446744e+19;
    }
    local_348 = param_1;
    fVar22 = _guard_xfg_dispatch_icall_nop(fVar22);
    local_338 = (undefined4)(longlong)(fVar22 + fVar22);
    _guard_xfg_dispatch_icall_nop(local_330,0,0x2e8);
    plVar19 = &local_348;
    do {
      puVar17 = (undefined8 *)*plVar19;
      puVar21 = (undefined8 *)plVar19[1];
      local_798 = plVar19[2];
      lVar15 = ((longlong)puVar21 - (longlong)puVar17) / 0x110 + 1;
      puVar20 = puVar17;
      iVar18 = (int)local_798;
      if ((int)local_798 != 0) {
LAB_1411c6020:
        if (8 < lVar15) {
          puVar17 = puVar20 + (lVar15 / 2) * 0x22;
          if (puVar17 != puVar20) {
            lVar15 = 2;
            puVar16 = local_790;
            puVar13 = puVar17;
            do {
              puVar10 = puVar13;
              puVar12 = puVar16;
              uVar1 = puVar10[1];
              uVar2 = puVar10[2];
              uVar6 = puVar10[3];
              *puVar12 = *puVar10;
              puVar12[1] = uVar1;
              uVar1 = puVar10[4];
              uVar7 = puVar10[5];
              puVar12[2] = uVar2;
              puVar12[3] = uVar6;
              uVar2 = puVar10[6];
              uVar6 = puVar10[7];
              puVar12[4] = uVar1;
              puVar12[5] = uVar7;
              uVar1 = puVar10[8];
              uVar7 = puVar10[9];
              puVar12[6] = uVar2;
              puVar12[7] = uVar6;
              uVar2 = puVar10[10];
              uVar6 = puVar10[0xb];
              puVar12[8] = uVar1;
              puVar12[9] = uVar7;
              uVar1 = puVar10[0xc];
              uVar7 = puVar10[0xd];
              puVar12[10] = uVar2;
              puVar12[0xb] = uVar6;
              uVar2 = puVar10[0xe];
              uVar6 = puVar10[0xf];
              puVar12[0xc] = uVar1;
              puVar12[0xd] = uVar7;
              puVar12[0xe] = uVar2;
              puVar12[0xf] = uVar6;
              lVar15 = lVar15 + -1;
              puVar16 = puVar12 + 0x10;
              puVar13 = puVar10 + 0x10;
            } while (lVar15 != 0);
            uVar1 = puVar10[0x11];
            lVar15 = 2;
            puVar12[0x10] = puVar10[0x10];
            puVar12[0x11] = uVar1;
            puVar16 = puVar20;
            do {
              puVar12 = puVar17;
              puVar13 = puVar16;
              uVar1 = puVar13[1];
              *puVar12 = *puVar13;
              puVar12[1] = uVar1;
              uVar1 = puVar13[3];
              puVar12[2] = puVar13[2];
              puVar12[3] = uVar1;
              uVar1 = puVar13[5];
              puVar12[4] = puVar13[4];
              puVar12[5] = uVar1;
              uVar1 = puVar13[7];
              puVar12[6] = puVar13[6];
              puVar12[7] = uVar1;
              uVar1 = puVar13[9];
              puVar12[8] = puVar13[8];
              puVar12[9] = uVar1;
              uVar1 = puVar13[0xb];
              puVar12[10] = puVar13[10];
              puVar12[0xb] = uVar1;
              uVar1 = puVar13[0xd];
              puVar12[0xc] = puVar13[0xc];
              puVar12[0xd] = uVar1;
              uVar1 = puVar13[0xf];
              puVar12[0xe] = puVar13[0xe];
              puVar12[0xf] = uVar1;
              lVar15 = lVar15 + -1;
              puVar16 = puVar13 + 0x10;
              puVar17 = puVar12 + 0x10;
            } while (lVar15 != 0);
            uVar1 = puVar13[0x11];
            lVar15 = 2;
            puVar12[0x10] = puVar13[0x10];
            puVar12[0x11] = uVar1;
            puVar17 = puVar20;
            puVar16 = local_790;
            do {
              puVar12 = puVar16;
              puVar13 = puVar17;
              uVar1 = puVar12[1];
              uVar2 = puVar12[2];
              uVar6 = puVar12[3];
              *puVar13 = *puVar12;
              puVar13[1] = uVar1;
              uVar1 = puVar12[4];
              uVar7 = puVar12[5];
              puVar13[2] = uVar2;
              puVar13[3] = uVar6;
              uVar2 = puVar12[6];
              uVar6 = puVar12[7];
              puVar13[4] = uVar1;
              puVar13[5] = uVar7;
              uVar1 = puVar12[8];
              uVar7 = puVar12[9];
              puVar13[6] = uVar2;
              puVar13[7] = uVar6;
              uVar2 = puVar12[10];
              uVar6 = puVar12[0xb];
              puVar13[8] = uVar1;
              puVar13[9] = uVar7;
              uVar7 = puVar12[0xc];
              uVar8 = puVar12[0xd];
              puVar13[10] = uVar2;
              puVar13[0xb] = uVar6;
              uVar1 = puVar12[0xe];
              uVar2 = puVar12[0xf];
              puVar13[0xc] = uVar7;
              puVar13[0xd] = uVar8;
              puVar13[0xe] = uVar1;
              puVar13[0xf] = uVar2;
              lVar15 = lVar15 + -1;
              puVar17 = puVar13 + 0x10;
              puVar16 = puVar12 + 0x10;
            } while (lVar15 != 0);
            uVar3 = *(undefined4 *)((longlong)puVar12 + 0x84);
            uVar4 = *(undefined4 *)(puVar12 + 0x11);
            uVar5 = *(undefined4 *)((longlong)puVar12 + 0x8c);
            *(undefined4 *)(puVar13 + 0x10) = *(undefined4 *)(puVar12 + 0x10);
            *(undefined4 *)((longlong)puVar13 + 0x84) = uVar3;
            *(undefined4 *)(puVar13 + 0x11) = uVar4;
            *(undefined4 *)((longlong)puVar13 + 0x8c) = uVar5;
          }
          puVar16 = puVar21 + 0x22;
          puVar17 = puVar20;
LAB_1411c6193:
          puVar17 = puVar17 + 0x22;
          if (puVar17 <= puVar21) goto code_r0x0001411c619f;
          goto LAB_1411c61b1;
        }
        for (; puVar16 = puVar20, puVar17 = puVar20, puVar20 < puVar21; puVar21 = puVar21 + -0x22) {
          while (puVar17 = puVar17 + 0x22, puVar17 <= puVar21) {
            cVar9 = FUN_1411d0f50(param_4,puVar16,puVar17);
            if (cVar9 != '\0') {
              puVar16 = puVar17;
            }
          }
          if (puVar16 != puVar21) {
            lVar15 = 2;
            puVar17 = local_460;
            puVar13 = puVar16;
            do {
              puVar10 = puVar13;
              puVar12 = puVar17;
              uVar1 = puVar10[1];
              uVar2 = puVar10[2];
              uVar6 = puVar10[3];
              *puVar12 = *puVar10;
              puVar12[1] = uVar1;
              uVar1 = puVar10[4];
              uVar7 = puVar10[5];
              puVar12[2] = uVar2;
              puVar12[3] = uVar6;
              uVar2 = puVar10[6];
              uVar6 = puVar10[7];
              puVar12[4] = uVar1;
              puVar12[5] = uVar7;
              uVar1 = puVar10[8];
              uVar7 = puVar10[9];
              puVar12[6] = uVar2;
              puVar12[7] = uVar6;
              uVar2 = puVar10[10];
              uVar6 = puVar10[0xb];
              puVar12[8] = uVar1;
              puVar12[9] = uVar7;
              uVar1 = puVar10[0xc];
              uVar7 = puVar10[0xd];
              puVar12[10] = uVar2;
              puVar12[0xb] = uVar6;
              uVar2 = puVar10[0xe];
              uVar6 = puVar10[0xf];
              puVar12[0xc] = uVar1;
              puVar12[0xd] = uVar7;
              puVar12[0xe] = uVar2;
              puVar12[0xf] = uVar6;
              lVar15 = lVar15 + -1;
              puVar17 = puVar12 + 0x10;
              puVar13 = puVar10 + 0x10;
            } while (lVar15 != 0);
            uVar1 = puVar10[0x11];
            lVar15 = 2;
            puVar12[0x10] = puVar10[0x10];
            puVar12[0x11] = uVar1;
            puVar17 = puVar21;
            do {
              puVar12 = puVar16;
              puVar13 = puVar17;
              uVar1 = puVar13[1];
              *puVar12 = *puVar13;
              puVar12[1] = uVar1;
              uVar1 = puVar13[3];
              puVar12[2] = puVar13[2];
              puVar12[3] = uVar1;
              uVar1 = puVar13[5];
              puVar12[4] = puVar13[4];
              puVar12[5] = uVar1;
              uVar1 = puVar13[7];
              puVar12[6] = puVar13[6];
              puVar12[7] = uVar1;
              uVar1 = puVar13[9];
              puVar12[8] = puVar13[8];
              puVar12[9] = uVar1;
              uVar1 = puVar13[0xb];
              puVar12[10] = puVar13[10];
              puVar12[0xb] = uVar1;
              uVar1 = puVar13[0xd];
              puVar12[0xc] = puVar13[0xc];
              puVar12[0xd] = uVar1;
              uVar1 = puVar13[0xf];
              puVar12[0xe] = puVar13[0xe];
              puVar12[0xf] = uVar1;
              lVar15 = lVar15 + -1;
              puVar17 = puVar13 + 0x10;
              puVar16 = puVar12 + 0x10;
            } while (lVar15 != 0);
            uVar1 = puVar13[0x11];
            lVar15 = 2;
            puVar12[0x10] = puVar13[0x10];
            puVar12[0x11] = uVar1;
            puVar17 = puVar21;
            puVar16 = local_460;
            do {
              puVar12 = puVar16;
              puVar13 = puVar17;
              uVar1 = puVar12[1];
              uVar2 = puVar12[2];
              uVar6 = puVar12[3];
              *puVar13 = *puVar12;
              puVar13[1] = uVar1;
              uVar1 = puVar12[4];
              uVar7 = puVar12[5];
              puVar13[2] = uVar2;
              puVar13[3] = uVar6;
              uVar2 = puVar12[6];
              uVar6 = puVar12[7];
              puVar13[4] = uVar1;
              puVar13[5] = uVar7;
              uVar1 = puVar12[8];
              uVar7 = puVar12[9];
              puVar13[6] = uVar2;
              puVar13[7] = uVar6;
              uVar2 = puVar12[10];
              uVar6 = puVar12[0xb];
              puVar13[8] = uVar1;
              puVar13[9] = uVar7;
              uVar7 = puVar12[0xc];
              uVar8 = puVar12[0xd];
              puVar13[10] = uVar2;
              puVar13[0xb] = uVar6;
              uVar1 = puVar12[0xe];
              uVar2 = puVar12[0xf];
              puVar13[0xc] = uVar7;
              puVar13[0xd] = uVar8;
              puVar13[0xe] = uVar1;
              puVar13[0xf] = uVar2;
              lVar15 = lVar15 + -1;
              puVar17 = puVar13 + 0x10;
              puVar16 = puVar12 + 0x10;
            } while (lVar15 != 0);
            uVar3 = *(undefined4 *)((longlong)puVar12 + 0x84);
            uVar4 = *(undefined4 *)(puVar12 + 0x11);
            uVar5 = *(undefined4 *)((longlong)puVar12 + 0x8c);
            *(undefined4 *)(puVar13 + 0x10) = *(undefined4 *)(puVar12 + 0x10);
            *(undefined4 *)((longlong)puVar13 + 0x84) = uVar3;
            *(undefined4 *)(puVar13 + 0x11) = uVar4;
            *(undefined4 *)((longlong)puVar13 + 0x8c) = uVar5;
          }
        }
        goto LAB_1411c654d;
      }
LAB_1411c6534:
      FUN_1411c2b90(puVar17,lVar15,param_3,param_4);
LAB_1411c654d:
      plVar19 = plVar19 + -3;
    } while (&local_348 <= plVar19);
  }
  return;
code_r0x0001411c619f:
  cVar9 = FUN_1411d0f50(param_4,puVar20,puVar17);
  if (cVar9 == '\0') goto LAB_1411c6193;
LAB_1411c61b1:
  do {
    puVar13 = puVar16;
    puVar16 = puVar13 + -0x22;
    if (puVar16 <= puVar20) break;
    cVar9 = FUN_1411d0f50(param_4,puVar16,puVar20);
  } while (cVar9 == '\0');
  if (puVar17 <= puVar16) {
    if (puVar17 != puVar16) {
      lVar15 = 2;
      puVar13 = local_680;
      puVar12 = puVar17;
      do {
        puVar11 = puVar12;
        puVar10 = puVar13;
        uVar1 = puVar11[1];
        uVar2 = puVar11[2];
        uVar6 = puVar11[3];
        *puVar10 = *puVar11;
        puVar10[1] = uVar1;
        uVar1 = puVar11[4];
        uVar7 = puVar11[5];
        puVar10[2] = uVar2;
        puVar10[3] = uVar6;
        uVar2 = puVar11[6];
        uVar6 = puVar11[7];
        puVar10[4] = uVar1;
        puVar10[5] = uVar7;
        uVar1 = puVar11[8];
        uVar7 = puVar11[9];
        puVar10[6] = uVar2;
        puVar10[7] = uVar6;
        uVar2 = puVar11[10];
        uVar6 = puVar11[0xb];
        puVar10[8] = uVar1;
        puVar10[9] = uVar7;
        uVar1 = puVar11[0xc];
        uVar7 = puVar11[0xd];
        puVar10[10] = uVar2;
        puVar10[0xb] = uVar6;
        uVar2 = puVar11[0xe];
        uVar6 = puVar11[0xf];
        puVar10[0xc] = uVar1;
        puVar10[0xd] = uVar7;
        puVar10[0xe] = uVar2;
        puVar10[0xf] = uVar6;
        lVar15 = lVar15 + -1;
        puVar13 = puVar10 + 0x10;
        puVar12 = puVar11 + 0x10;
      } while (lVar15 != 0);
      uVar1 = puVar11[0x11];
      lVar15 = 2;
      puVar10[0x10] = puVar11[0x10];
      puVar10[0x11] = uVar1;
      puVar13 = puVar17;
      puVar12 = puVar16;
      do {
        puVar11 = puVar12;
        puVar10 = puVar13;
        uVar1 = puVar11[1];
        *puVar10 = *puVar11;
        puVar10[1] = uVar1;
        uVar1 = puVar11[3];
        puVar10[2] = puVar11[2];
        puVar10[3] = uVar1;
        uVar1 = puVar11[5];
        puVar10[4] = puVar11[4];
        puVar10[5] = uVar1;
        uVar1 = puVar11[7];
        puVar10[6] = puVar11[6];
        puVar10[7] = uVar1;
        uVar1 = puVar11[9];
        puVar10[8] = puVar11[8];
        puVar10[9] = uVar1;
        uVar1 = puVar11[0xb];
        puVar10[10] = puVar11[10];
        puVar10[0xb] = uVar1;
        uVar1 = puVar11[0xd];
        puVar10[0xc] = puVar11[0xc];
        puVar10[0xd] = uVar1;
        uVar1 = puVar11[0xf];
        puVar10[0xe] = puVar11[0xe];
        puVar10[0xf] = uVar1;
        lVar15 = lVar15 + -1;
        puVar13 = puVar10 + 0x10;
        puVar12 = puVar11 + 0x10;
      } while (lVar15 != 0);
      uVar1 = puVar11[0x11];
      lVar15 = 2;
      puVar10[0x10] = puVar11[0x10];
      puVar10[0x11] = uVar1;
      puVar13 = puVar16;
      puVar12 = local_680;
      do {
        puVar11 = puVar12;
        puVar10 = puVar13;
        uVar1 = puVar11[1];
        uVar2 = puVar11[2];
        uVar6 = puVar11[3];
        *puVar10 = *puVar11;
        puVar10[1] = uVar1;
        uVar1 = puVar11[4];
        uVar7 = puVar11[5];
        puVar10[2] = uVar2;
        puVar10[3] = uVar6;
        uVar2 = puVar11[6];
        uVar6 = puVar11[7];
        puVar10[4] = uVar1;
        puVar10[5] = uVar7;
        uVar1 = puVar11[8];
        uVar7 = puVar11[9];
        puVar10[6] = uVar2;
        puVar10[7] = uVar6;
        uVar2 = puVar11[10];
        uVar6 = puVar11[0xb];
        puVar10[8] = uVar1;
        puVar10[9] = uVar7;
        uVar7 = puVar11[0xc];
        uVar8 = puVar11[0xd];
        puVar10[10] = uVar2;
        puVar10[0xb] = uVar6;
        uVar1 = puVar11[0xe];
        uVar2 = puVar11[0xf];
        puVar10[0xc] = uVar7;
        puVar10[0xd] = uVar8;
        puVar10[0xe] = uVar1;
        puVar10[0xf] = uVar2;
        lVar15 = lVar15 + -1;
        puVar13 = puVar10 + 0x10;
        puVar12 = puVar11 + 0x10;
      } while (lVar15 != 0);
      uVar3 = *(undefined4 *)((longlong)puVar11 + 0x84);
      uVar4 = *(undefined4 *)(puVar11 + 0x11);
      uVar5 = *(undefined4 *)((longlong)puVar11 + 0x8c);
      *(undefined4 *)(puVar10 + 0x10) = *(undefined4 *)(puVar11 + 0x10);
      *(undefined4 *)((longlong)puVar10 + 0x84) = uVar3;
      *(undefined4 *)(puVar10 + 0x11) = uVar4;
      *(undefined4 *)((longlong)puVar10 + 0x8c) = uVar5;
    }
    goto LAB_1411c6193;
  }
  if (puVar20 != puVar16) {
    lVar15 = 2;
    puVar12 = local_570;
    puVar10 = puVar20;
    do {
      puVar14 = puVar10;
      puVar11 = puVar12;
      uVar1 = puVar14[1];
      uVar2 = puVar14[2];
      uVar6 = puVar14[3];
      *puVar11 = *puVar14;
      puVar11[1] = uVar1;
      uVar1 = puVar14[4];
      uVar7 = puVar14[5];
      puVar11[2] = uVar2;
      puVar11[3] = uVar6;
      uVar2 = puVar14[6];
      uVar6 = puVar14[7];
      puVar11[4] = uVar1;
      puVar11[5] = uVar7;
      uVar1 = puVar14[8];
      uVar7 = puVar14[9];
      puVar11[6] = uVar2;
      puVar11[7] = uVar6;
      uVar2 = puVar14[10];
      uVar6 = puVar14[0xb];
      puVar11[8] = uVar1;
      puVar11[9] = uVar7;
      uVar1 = puVar14[0xc];
      uVar7 = puVar14[0xd];
      puVar11[10] = uVar2;
      puVar11[0xb] = uVar6;
      uVar2 = puVar14[0xe];
      uVar6 = puVar14[0xf];
      puVar11[0xc] = uVar1;
      puVar11[0xd] = uVar7;
      puVar11[0xe] = uVar2;
      puVar11[0xf] = uVar6;
      lVar15 = lVar15 + -1;
      puVar12 = puVar11 + 0x10;
      puVar10 = puVar14 + 0x10;
    } while (lVar15 != 0);
    uVar1 = puVar14[0x11];
    lVar15 = 2;
    puVar11[0x10] = puVar14[0x10];
    puVar11[0x11] = uVar1;
    puVar12 = puVar20;
    puVar10 = puVar16;
    do {
      puVar14 = puVar10;
      puVar11 = puVar12;
      uVar1 = puVar14[1];
      *puVar11 = *puVar14;
      puVar11[1] = uVar1;
      uVar1 = puVar14[3];
      puVar11[2] = puVar14[2];
      puVar11[3] = uVar1;
      uVar1 = puVar14[5];
      puVar11[4] = puVar14[4];
      puVar11[5] = uVar1;
      uVar1 = puVar14[7];
      puVar11[6] = puVar14[6];
      puVar11[7] = uVar1;
      uVar1 = puVar14[9];
      puVar11[8] = puVar14[8];
      puVar11[9] = uVar1;
      uVar1 = puVar14[0xb];
      puVar11[10] = puVar14[10];
      puVar11[0xb] = uVar1;
      uVar1 = puVar14[0xd];
      puVar11[0xc] = puVar14[0xc];
      puVar11[0xd] = uVar1;
      uVar1 = puVar14[0xf];
      puVar11[0xe] = puVar14[0xe];
      puVar11[0xf] = uVar1;
      lVar15 = lVar15 + -1;
      puVar12 = puVar11 + 0x10;
      puVar10 = puVar14 + 0x10;
    } while (lVar15 != 0);
    uVar1 = puVar14[0x11];
    lVar15 = 2;
    puVar11[0x10] = puVar14[0x10];
    puVar11[0x11] = uVar1;
    puVar12 = puVar16;
    puVar10 = local_570;
    do {
      puVar14 = puVar10;
      puVar11 = puVar12;
      uVar1 = puVar14[1];
      uVar2 = puVar14[2];
      uVar6 = puVar14[3];
      *puVar11 = *puVar14;
      puVar11[1] = uVar1;
      uVar1 = puVar14[4];
      uVar7 = puVar14[5];
      puVar11[2] = uVar2;
      puVar11[3] = uVar6;
      uVar2 = puVar14[6];
      uVar6 = puVar14[7];
      puVar11[4] = uVar1;
      puVar11[5] = uVar7;
      uVar1 = puVar14[8];
      uVar7 = puVar14[9];
      puVar11[6] = uVar2;
      puVar11[7] = uVar6;
      uVar2 = puVar14[10];
      uVar6 = puVar14[0xb];
      puVar11[8] = uVar1;
      puVar11[9] = uVar7;
      uVar7 = puVar14[0xc];
      uVar8 = puVar14[0xd];
      puVar11[10] = uVar2;
      puVar11[0xb] = uVar6;
      uVar1 = puVar14[0xe];
      uVar2 = puVar14[0xf];
      puVar11[0xc] = uVar7;
      puVar11[0xd] = uVar8;
      puVar11[0xe] = uVar1;
      puVar11[0xf] = uVar2;
      lVar15 = lVar15 + -1;
      puVar12 = puVar11 + 0x10;
      puVar10 = puVar14 + 0x10;
    } while (lVar15 != 0);
    uVar3 = *(undefined4 *)((longlong)puVar14 + 0x84);
    uVar4 = *(undefined4 *)(puVar14 + 0x11);
    uVar5 = *(undefined4 *)((longlong)puVar14 + 0x8c);
    *(undefined4 *)(puVar11 + 0x10) = *(undefined4 *)(puVar14 + 0x10);
    *(undefined4 *)((longlong)puVar11 + 0x84) = uVar3;
    *(undefined4 *)(puVar11 + 0x11) = uVar4;
    *(undefined4 *)((longlong)puVar11 + 0x8c) = uVar5;
  }
  iVar18 = iVar18 + -1;
  if (((longlong)puVar16 + (-0x110 - (longlong)puVar20)) / 0x110 <
      ((longlong)puVar21 - (longlong)puVar17) / 0x110) {
    if (puVar17 < puVar21) {
      *plVar19 = (longlong)puVar17;
      plVar19[1] = (longlong)puVar21;
      *(int *)(plVar19 + 2) = iVar18;
      plVar19 = plVar19 + 3;
    }
    if (puVar16 <= puVar20 + 0x22) goto LAB_1411c654d;
    puVar21 = puVar13 + -0x44;
    puVar17 = puVar20;
  }
  else {
    if (puVar20 + 0x22 < puVar16) {
      *plVar19 = (longlong)puVar20;
      plVar19[1] = (longlong)(puVar13 + -0x44);
      *(int *)(plVar19 + 2) = iVar18;
      plVar19 = plVar19 + 3;
    }
    if (puVar21 <= puVar17) goto LAB_1411c654d;
  }
  lVar15 = ((longlong)puVar21 - (longlong)puVar17) / 0x110 + 1;
  puVar20 = puVar17;
  if (iVar18 == 0) goto LAB_1411c6534;
  goto LAB_1411c6020;
}



// FUNCTION 1411c6750 FUN_1411c6750 body=2110 status=ok
// SIG undefined FUN_1411c6750(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411c6750(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  int iVar18;
  longlong *plVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  float fVar22;
  undefined1 auStack_7c8 [48];
  longlong local_798;
  undefined8 local_790 [34];
  undefined8 local_680 [34];
  undefined8 local_570 [34];
  undefined8 local_460 [35];
  longlong local_348;
  longlong lStack_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_7c8;
    fVar22 = (float)(longlong)param_2;
    lStack_340 = param_1 + -0x110 + param_2 * 0x110;
    if ((longlong)param_2 < 0) {
      fVar22 = fVar22 + 1.8446744e+19;
    }
    local_348 = param_1;
    fVar22 = _guard_xfg_dispatch_icall_nop(fVar22);
    local_338 = (undefined4)(longlong)(fVar22 + fVar22);
    _guard_xfg_dispatch_icall_nop(local_330,0,0x2e8);
    plVar19 = &local_348;
    do {
      puVar17 = (undefined8 *)*plVar19;
      puVar21 = (undefined8 *)plVar19[1];
      local_798 = plVar19[2];
      lVar15 = ((longlong)puVar21 - (longlong)puVar17) / 0x110 + 1;
      puVar20 = puVar17;
      iVar18 = (int)local_798;
      if ((int)local_798 != 0) {
LAB_1411c6860:
        if (8 < lVar15) {
          puVar17 = puVar20 + (lVar15 / 2) * 0x22;
          if (puVar17 != puVar20) {
            lVar15 = 2;
            puVar16 = local_790;
            puVar13 = puVar17;
            do {
              puVar10 = puVar13;
              puVar12 = puVar16;
              uVar1 = puVar10[1];
              uVar2 = puVar10[2];
              uVar6 = puVar10[3];
              *puVar12 = *puVar10;
              puVar12[1] = uVar1;
              uVar1 = puVar10[4];
              uVar7 = puVar10[5];
              puVar12[2] = uVar2;
              puVar12[3] = uVar6;
              uVar2 = puVar10[6];
              uVar6 = puVar10[7];
              puVar12[4] = uVar1;
              puVar12[5] = uVar7;
              uVar1 = puVar10[8];
              uVar7 = puVar10[9];
              puVar12[6] = uVar2;
              puVar12[7] = uVar6;
              uVar2 = puVar10[10];
              uVar6 = puVar10[0xb];
              puVar12[8] = uVar1;
              puVar12[9] = uVar7;
              uVar1 = puVar10[0xc];
              uVar7 = puVar10[0xd];
              puVar12[10] = uVar2;
              puVar12[0xb] = uVar6;
              uVar2 = puVar10[0xe];
              uVar6 = puVar10[0xf];
              puVar12[0xc] = uVar1;
              puVar12[0xd] = uVar7;
              puVar12[0xe] = uVar2;
              puVar12[0xf] = uVar6;
              lVar15 = lVar15 + -1;
              puVar16 = puVar12 + 0x10;
              puVar13 = puVar10 + 0x10;
            } while (lVar15 != 0);
            uVar1 = puVar10[0x11];
            lVar15 = 2;
            puVar12[0x10] = puVar10[0x10];
            puVar12[0x11] = uVar1;
            puVar16 = puVar20;
            do {
              puVar12 = puVar17;
              puVar13 = puVar16;
              uVar1 = puVar13[1];
              *puVar12 = *puVar13;
              puVar12[1] = uVar1;
              uVar1 = puVar13[3];
              puVar12[2] = puVar13[2];
              puVar12[3] = uVar1;
              uVar1 = puVar13[5];
              puVar12[4] = puVar13[4];
              puVar12[5] = uVar1;
              uVar1 = puVar13[7];
              puVar12[6] = puVar13[6];
              puVar12[7] = uVar1;
              uVar1 = puVar13[9];
              puVar12[8] = puVar13[8];
              puVar12[9] = uVar1;
              uVar1 = puVar13[0xb];
              puVar12[10] = puVar13[10];
              puVar12[0xb] = uVar1;
              uVar1 = puVar13[0xd];
              puVar12[0xc] = puVar13[0xc];
              puVar12[0xd] = uVar1;
              uVar1 = puVar13[0xf];
              puVar12[0xe] = puVar13[0xe];
              puVar12[0xf] = uVar1;
              lVar15 = lVar15 + -1;
              puVar16 = puVar13 + 0x10;
              puVar17 = puVar12 + 0x10;
            } while (lVar15 != 0);
            uVar1 = puVar13[0x11];
            lVar15 = 2;
            puVar12[0x10] = puVar13[0x10];
            puVar12[0x11] = uVar1;
            puVar17 = puVar20;
            puVar16 = local_790;
            do {
              puVar12 = puVar16;
              puVar13 = puVar17;
              uVar1 = puVar12[1];
              uVar2 = puVar12[2];
              uVar6 = puVar12[3];
              *puVar13 = *puVar12;
              puVar13[1] = uVar1;
              uVar1 = puVar12[4];
              uVar7 = puVar12[5];
              puVar13[2] = uVar2;
              puVar13[3] = uVar6;
              uVar2 = puVar12[6];
              uVar6 = puVar12[7];
              puVar13[4] = uVar1;
              puVar13[5] = uVar7;
              uVar1 = puVar12[8];
              uVar7 = puVar12[9];
              puVar13[6] = uVar2;
              puVar13[7] = uVar6;
              uVar2 = puVar12[10];
              uVar6 = puVar12[0xb];
              puVar13[8] = uVar1;
              puVar13[9] = uVar7;
              uVar7 = puVar12[0xc];
              uVar8 = puVar12[0xd];
              puVar13[10] = uVar2;
              puVar13[0xb] = uVar6;
              uVar1 = puVar12[0xe];
              uVar2 = puVar12[0xf];
              puVar13[0xc] = uVar7;
              puVar13[0xd] = uVar8;
              puVar13[0xe] = uVar1;
              puVar13[0xf] = uVar2;
              lVar15 = lVar15 + -1;
              puVar17 = puVar13 + 0x10;
              puVar16 = puVar12 + 0x10;
            } while (lVar15 != 0);
            uVar3 = *(undefined4 *)((longlong)puVar12 + 0x84);
            uVar4 = *(undefined4 *)(puVar12 + 0x11);
            uVar5 = *(undefined4 *)((longlong)puVar12 + 0x8c);
            *(undefined4 *)(puVar13 + 0x10) = *(undefined4 *)(puVar12 + 0x10);
            *(undefined4 *)((longlong)puVar13 + 0x84) = uVar3;
            *(undefined4 *)(puVar13 + 0x11) = uVar4;
            *(undefined4 *)((longlong)puVar13 + 0x8c) = uVar5;
          }
          puVar16 = puVar21 + 0x22;
          puVar17 = puVar20;
LAB_1411c69d3:
          puVar17 = puVar17 + 0x22;
          if (puVar17 <= puVar21) goto code_r0x0001411c69df;
          goto LAB_1411c69f1;
        }
        for (; puVar16 = puVar20, puVar17 = puVar20, puVar20 < puVar21; puVar21 = puVar21 + -0x22) {
          while (puVar17 = puVar17 + 0x22, puVar17 <= puVar21) {
            cVar9 = FUN_1411d20b0(param_4,puVar16,puVar17);
            if (cVar9 != '\0') {
              puVar16 = puVar17;
            }
          }
          if (puVar16 != puVar21) {
            lVar15 = 2;
            puVar17 = local_460;
            puVar13 = puVar16;
            do {
              puVar10 = puVar13;
              puVar12 = puVar17;
              uVar1 = puVar10[1];
              uVar2 = puVar10[2];
              uVar6 = puVar10[3];
              *puVar12 = *puVar10;
              puVar12[1] = uVar1;
              uVar1 = puVar10[4];
              uVar7 = puVar10[5];
              puVar12[2] = uVar2;
              puVar12[3] = uVar6;
              uVar2 = puVar10[6];
              uVar6 = puVar10[7];
              puVar12[4] = uVar1;
              puVar12[5] = uVar7;
              uVar1 = puVar10[8];
              uVar7 = puVar10[9];
              puVar12[6] = uVar2;
              puVar12[7] = uVar6;
              uVar2 = puVar10[10];
              uVar6 = puVar10[0xb];
              puVar12[8] = uVar1;
              puVar12[9] = uVar7;
              uVar1 = puVar10[0xc];
              uVar7 = puVar10[0xd];
              puVar12[10] = uVar2;
              puVar12[0xb] = uVar6;
              uVar2 = puVar10[0xe];
              uVar6 = puVar10[0xf];
              puVar12[0xc] = uVar1;
              puVar12[0xd] = uVar7;
              puVar12[0xe] = uVar2;
              puVar12[0xf] = uVar6;
              lVar15 = lVar15 + -1;
              puVar17 = puVar12 + 0x10;
              puVar13 = puVar10 + 0x10;
            } while (lVar15 != 0);
            uVar1 = puVar10[0x11];
            lVar15 = 2;
            puVar12[0x10] = puVar10[0x10];
            puVar12[0x11] = uVar1;
            puVar17 = puVar21;
            do {
              puVar12 = puVar16;
              puVar13 = puVar17;
              uVar1 = puVar13[1];
              *puVar12 = *puVar13;
              puVar12[1] = uVar1;
              uVar1 = puVar13[3];
              puVar12[2] = puVar13[2];
              puVar12[3] = uVar1;
              uVar1 = puVar13[5];
              puVar12[4] = puVar13[4];
              puVar12[5] = uVar1;
              uVar1 = puVar13[7];
              puVar12[6] = puVar13[6];
              puVar12[7] = uVar1;
              uVar1 = puVar13[9];
              puVar12[8] = puVar13[8];
              puVar12[9] = uVar1;
              uVar1 = puVar13[0xb];
              puVar12[10] = puVar13[10];
              puVar12[0xb] = uVar1;
              uVar1 = puVar13[0xd];
              puVar12[0xc] = puVar13[0xc];
              puVar12[0xd] = uVar1;
              uVar1 = puVar13[0xf];
              puVar12[0xe] = puVar13[0xe];
              puVar12[0xf] = uVar1;
              lVar15 = lVar15 + -1;
              puVar17 = puVar13 + 0x10;
              puVar16 = puVar12 + 0x10;
            } while (lVar15 != 0);
            uVar1 = puVar13[0x11];
            lVar15 = 2;
            puVar12[0x10] = puVar13[0x10];
            puVar12[0x11] = uVar1;
            puVar17 = puVar21;
            puVar16 = local_460;
            do {
              puVar12 = puVar16;
              puVar13 = puVar17;
              uVar1 = puVar12[1];
              uVar2 = puVar12[2];
              uVar6 = puVar12[3];
              *puVar13 = *puVar12;
              puVar13[1] = uVar1;
              uVar1 = puVar12[4];
              uVar7 = puVar12[5];
              puVar13[2] = uVar2;
              puVar13[3] = uVar6;
              uVar2 = puVar12[6];
              uVar6 = puVar12[7];
              puVar13[4] = uVar1;
              puVar13[5] = uVar7;
              uVar1 = puVar12[8];
              uVar7 = puVar12[9];
              puVar13[6] = uVar2;
              puVar13[7] = uVar6;
              uVar2 = puVar12[10];
              uVar6 = puVar12[0xb];
              puVar13[8] = uVar1;
              puVar13[9] = uVar7;
              uVar7 = puVar12[0xc];
              uVar8 = puVar12[0xd];
              puVar13[10] = uVar2;
              puVar13[0xb] = uVar6;
              uVar1 = puVar12[0xe];
              uVar2 = puVar12[0xf];
              puVar13[0xc] = uVar7;
              puVar13[0xd] = uVar8;
              puVar13[0xe] = uVar1;
              puVar13[0xf] = uVar2;
              lVar15 = lVar15 + -1;
              puVar17 = puVar13 + 0x10;
              puVar16 = puVar12 + 0x10;
            } while (lVar15 != 0);
            uVar3 = *(undefined4 *)((longlong)puVar12 + 0x84);
            uVar4 = *(undefined4 *)(puVar12 + 0x11);
            uVar5 = *(undefined4 *)((longlong)puVar12 + 0x8c);
            *(undefined4 *)(puVar13 + 0x10) = *(undefined4 *)(puVar12 + 0x10);
            *(undefined4 *)((longlong)puVar13 + 0x84) = uVar3;
            *(undefined4 *)(puVar13 + 0x11) = uVar4;
            *(undefined4 *)((longlong)puVar13 + 0x8c) = uVar5;
          }
        }
        goto LAB_1411c6d8d;
      }
LAB_1411c6d74:
      FUN_1411c3140(puVar17,lVar15,param_3,param_4);
LAB_1411c6d8d:
      plVar19 = plVar19 + -3;
    } while (&local_348 <= plVar19);
  }
  return;
code_r0x0001411c69df:
  cVar9 = FUN_1411d20b0(param_4,puVar20,puVar17);
  if (cVar9 == '\0') goto LAB_1411c69d3;
LAB_1411c69f1:
  do {
    puVar13 = puVar16;
    puVar16 = puVar13 + -0x22;
    if (puVar16 <= puVar20) break;
    cVar9 = FUN_1411d20b0(param_4,puVar16,puVar20);
  } while (cVar9 == '\0');
  if (puVar17 <= puVar16) {
    if (puVar17 != puVar16) {
      lVar15 = 2;
      puVar13 = local_680;
      puVar12 = puVar17;
      do {
        puVar11 = puVar12;
        puVar10 = puVar13;
        uVar1 = puVar11[1];
        uVar2 = puVar11[2];
        uVar6 = puVar11[3];
        *puVar10 = *puVar11;
        puVar10[1] = uVar1;
        uVar1 = puVar11[4];
        uVar7 = puVar11[5];
        puVar10[2] = uVar2;
        puVar10[3] = uVar6;
        uVar2 = puVar11[6];
        uVar6 = puVar11[7];
        puVar10[4] = uVar1;
        puVar10[5] = uVar7;
        uVar1 = puVar11[8];
        uVar7 = puVar11[9];
        puVar10[6] = uVar2;
        puVar10[7] = uVar6;
        uVar2 = puVar11[10];
        uVar6 = puVar11[0xb];
        puVar10[8] = uVar1;
        puVar10[9] = uVar7;
        uVar1 = puVar11[0xc];
        uVar7 = puVar11[0xd];
        puVar10[10] = uVar2;
        puVar10[0xb] = uVar6;
        uVar2 = puVar11[0xe];
        uVar6 = puVar11[0xf];
        puVar10[0xc] = uVar1;
        puVar10[0xd] = uVar7;
        puVar10[0xe] = uVar2;
        puVar10[0xf] = uVar6;
        lVar15 = lVar15 + -1;
        puVar13 = puVar10 + 0x10;
        puVar12 = puVar11 + 0x10;
      } while (lVar15 != 0);
      uVar1 = puVar11[0x11];
      lVar15 = 2;
      puVar10[0x10] = puVar11[0x10];
      puVar10[0x11] = uVar1;
      puVar13 = puVar17;
      puVar12 = puVar16;
      do {
        puVar11 = puVar12;
        puVar10 = puVar13;
        uVar1 = puVar11[1];
        *puVar10 = *puVar11;
        puVar10[1] = uVar1;
        uVar1 = puVar11[3];
        puVar10[2] = puVar11[2];
        puVar10[3] = uVar1;
        uVar1 = puVar11[5];
        puVar10[4] = puVar11[4];
        puVar10[5] = uVar1;
        uVar1 = puVar11[7];
        puVar10[6] = puVar11[6];
        puVar10[7] = uVar1;
        uVar1 = puVar11[9];
        puVar10[8] = puVar11[8];
        puVar10[9] = uVar1;
        uVar1 = puVar11[0xb];
        puVar10[10] = puVar11[10];
        puVar10[0xb] = uVar1;
        uVar1 = puVar11[0xd];
        puVar10[0xc] = puVar11[0xc];
        puVar10[0xd] = uVar1;
        uVar1 = puVar11[0xf];
        puVar10[0xe] = puVar11[0xe];
        puVar10[0xf] = uVar1;
        lVar15 = lVar15 + -1;
        puVar13 = puVar10 + 0x10;
        puVar12 = puVar11 + 0x10;
      } while (lVar15 != 0);
      uVar1 = puVar11[0x11];
      lVar15 = 2;
      puVar10[0x10] = puVar11[0x10];
      puVar10[0x11] = uVar1;
      puVar13 = puVar16;
      puVar12 = local_680;
      do {
        puVar11 = puVar12;
        puVar10 = puVar13;
        uVar1 = puVar11[1];
        uVar2 = puVar11[2];
        uVar6 = puVar11[3];
        *puVar10 = *puVar11;
        puVar10[1] = uVar1;
        uVar1 = puVar11[4];
        uVar7 = puVar11[5];
        puVar10[2] = uVar2;
        puVar10[3] = uVar6;
        uVar2 = puVar11[6];
        uVar6 = puVar11[7];
        puVar10[4] = uVar1;
        puVar10[5] = uVar7;
        uVar1 = puVar11[8];
        uVar7 = puVar11[9];
        puVar10[6] = uVar2;
        puVar10[7] = uVar6;
        uVar2 = puVar11[10];
        uVar6 = puVar11[0xb];
        puVar10[8] = uVar1;
        puVar10[9] = uVar7;
        uVar7 = puVar11[0xc];
        uVar8 = puVar11[0xd];
        puVar10[10] = uVar2;
        puVar10[0xb] = uVar6;
        uVar1 = puVar11[0xe];
        uVar2 = puVar11[0xf];
        puVar10[0xc] = uVar7;
        puVar10[0xd] = uVar8;
        puVar10[0xe] = uVar1;
        puVar10[0xf] = uVar2;
        lVar15 = lVar15 + -1;
        puVar13 = puVar10 + 0x10;
        puVar12 = puVar11 + 0x10;
      } while (lVar15 != 0);
      uVar3 = *(undefined4 *)((longlong)puVar11 + 0x84);
      uVar4 = *(undefined4 *)(puVar11 + 0x11);
      uVar5 = *(undefined4 *)((longlong)puVar11 + 0x8c);
      *(undefined4 *)(puVar10 + 0x10) = *(undefined4 *)(puVar11 + 0x10);
      *(undefined4 *)((longlong)puVar10 + 0x84) = uVar3;
      *(undefined4 *)(puVar10 + 0x11) = uVar4;
      *(undefined4 *)((longlong)puVar10 + 0x8c) = uVar5;
    }
    goto LAB_1411c69d3;
  }
  if (puVar20 != puVar16) {
    lVar15 = 2;
    puVar12 = local_570;
    puVar10 = puVar20;
    do {
      puVar14 = puVar10;
      puVar11 = puVar12;
      uVar1 = puVar14[1];
      uVar2 = puVar14[2];
      uVar6 = puVar14[3];
      *puVar11 = *puVar14;
      puVar11[1] = uVar1;
      uVar1 = puVar14[4];
      uVar7 = puVar14[5];
      puVar11[2] = uVar2;
      puVar11[3] = uVar6;
      uVar2 = puVar14[6];
      uVar6 = puVar14[7];
      puVar11[4] = uVar1;
      puVar11[5] = uVar7;
      uVar1 = puVar14[8];
      uVar7 = puVar14[9];
      puVar11[6] = uVar2;
      puVar11[7] = uVar6;
      uVar2 = puVar14[10];
      uVar6 = puVar14[0xb];
      puVar11[8] = uVar1;
      puVar11[9] = uVar7;
      uVar1 = puVar14[0xc];
      uVar7 = puVar14[0xd];
      puVar11[10] = uVar2;
      puVar11[0xb] = uVar6;
      uVar2 = puVar14[0xe];
      uVar6 = puVar14[0xf];
      puVar11[0xc] = uVar1;
      puVar11[0xd] = uVar7;
      puVar11[0xe] = uVar2;
      puVar11[0xf] = uVar6;
      lVar15 = lVar15 + -1;
      puVar12 = puVar11 + 0x10;
      puVar10 = puVar14 + 0x10;
    } while (lVar15 != 0);
    uVar1 = puVar14[0x11];
    lVar15 = 2;
    puVar11[0x10] = puVar14[0x10];
    puVar11[0x11] = uVar1;
    puVar12 = puVar20;
    puVar10 = puVar16;
    do {
      puVar14 = puVar10;
      puVar11 = puVar12;
      uVar1 = puVar14[1];
      *puVar11 = *puVar14;
      puVar11[1] = uVar1;
      uVar1 = puVar14[3];
      puVar11[2] = puVar14[2];
      puVar11[3] = uVar1;
      uVar1 = puVar14[5];
      puVar11[4] = puVar14[4];
      puVar11[5] = uVar1;
      uVar1 = puVar14[7];
      puVar11[6] = puVar14[6];
      puVar11[7] = uVar1;
      uVar1 = puVar14[9];
      puVar11[8] = puVar14[8];
      puVar11[9] = uVar1;
      uVar1 = puVar14[0xb];
      puVar11[10] = puVar14[10];
      puVar11[0xb] = uVar1;
      uVar1 = puVar14[0xd];
      puVar11[0xc] = puVar14[0xc];
      puVar11[0xd] = uVar1;
      uVar1 = puVar14[0xf];
      puVar11[0xe] = puVar14[0xe];
      puVar11[0xf] = uVar1;
      lVar15 = lVar15 + -1;
      puVar12 = puVar11 + 0x10;
      puVar10 = puVar14 + 0x10;
    } while (lVar15 != 0);
    uVar1 = puVar14[0x11];
    lVar15 = 2;
    puVar11[0x10] = puVar14[0x10];
    puVar11[0x11] = uVar1;
    puVar12 = puVar16;
    puVar10 = local_570;
    do {
      puVar14 = puVar10;
      puVar11 = puVar12;
      uVar1 = puVar14[1];
      uVar2 = puVar14[2];
      uVar6 = puVar14[3];
      *puVar11 = *puVar14;
      puVar11[1] = uVar1;
      uVar1 = puVar14[4];
      uVar7 = puVar14[5];
      puVar11[2] = uVar2;
      puVar11[3] = uVar6;
      uVar2 = puVar14[6];
      uVar6 = puVar14[7];
      puVar11[4] = uVar1;
      puVar11[5] = uVar7;
      uVar1 = puVar14[8];
      uVar7 = puVar14[9];
      puVar11[6] = uVar2;
      puVar11[7] = uVar6;
      uVar2 = puVar14[10];
      uVar6 = puVar14[0xb];
      puVar11[8] = uVar1;
      puVar11[9] = uVar7;
      uVar7 = puVar14[0xc];
      uVar8 = puVar14[0xd];
      puVar11[10] = uVar2;
      puVar11[0xb] = uVar6;
      uVar1 = puVar14[0xe];
      uVar2 = puVar14[0xf];
      puVar11[0xc] = uVar7;
      puVar11[0xd] = uVar8;
      puVar11[0xe] = uVar1;
      puVar11[0xf] = uVar2;
      lVar15 = lVar15 + -1;
      puVar12 = puVar11 + 0x10;
      puVar10 = puVar14 + 0x10;
    } while (lVar15 != 0);
    uVar3 = *(undefined4 *)((longlong)puVar14 + 0x84);
    uVar4 = *(undefined4 *)(puVar14 + 0x11);
    uVar5 = *(undefined4 *)((longlong)puVar14 + 0x8c);
    *(undefined4 *)(puVar11 + 0x10) = *(undefined4 *)(puVar14 + 0x10);
    *(undefined4 *)((longlong)puVar11 + 0x84) = uVar3;
    *(undefined4 *)(puVar11 + 0x11) = uVar4;
    *(undefined4 *)((longlong)puVar11 + 0x8c) = uVar5;
  }
  iVar18 = iVar18 + -1;
  if (((longlong)puVar16 + (-0x110 - (longlong)puVar20)) / 0x110 <
      ((longlong)puVar21 - (longlong)puVar17) / 0x110) {
    if (puVar17 < puVar21) {
      *plVar19 = (longlong)puVar17;
      plVar19[1] = (longlong)puVar21;
      *(int *)(plVar19 + 2) = iVar18;
      plVar19 = plVar19 + 3;
    }
    if (puVar16 <= puVar20 + 0x22) goto LAB_1411c6d8d;
    puVar21 = puVar13 + -0x44;
    puVar17 = puVar20;
  }
  else {
    if (puVar20 + 0x22 < puVar16) {
      *plVar19 = (longlong)puVar20;
      plVar19[1] = (longlong)(puVar13 + -0x44);
      *(int *)(plVar19 + 2) = iVar18;
      plVar19 = plVar19 + 3;
    }
    if (puVar21 <= puVar17) goto LAB_1411c6d8d;
  }
  lVar15 = ((longlong)puVar21 - (longlong)puVar17) / 0x110 + 1;
  puVar20 = puVar17;
  if (iVar18 == 0) goto LAB_1411c6d74;
  goto LAB_1411c6860;
}



// FUNCTION 1411c6f90 FUN_1411c6f90 body=825 status=ok
// SIG undefined FUN_1411c6f90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411c6f90(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  float fVar17;
  undefined1 auStack_378 [48];
  longlong local_348;
  longlong local_338;
  longlong lStack_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (1 < param_2) {
    local_38 = DAT_1468387a8 ^ (ulonglong)auStack_378;
    lStack_330 = param_1 + param_2 * 0x18 + -0x18;
    fVar17 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar17 = fVar17 + 1.8446744e+19;
    }
    local_338 = param_1;
    fVar17 = _guard_xfg_dispatch_icall_nop(fVar17);
    local_328 = (undefined4)(longlong)(fVar17 + fVar17);
    _guard_xfg_dispatch_icall_nop(local_320,0,0x2e8);
    plVar16 = &local_338;
    do {
      puVar15 = (undefined8 *)*plVar16;
      puVar10 = (undefined8 *)plVar16[1];
      lVar1 = plVar16[2];
      local_348._0_4_ = (int)lVar1;
      lVar9 = ((longlong)puVar10 - (longlong)puVar15) / 0x18 + 1;
      puVar14 = puVar15;
      if ((int)local_348 != 0) {
LAB_1411c7080:
        if (8 < lVar9) {
          if (lVar9 < 0) {
            lVar9 = lVar9 + 1;
          }
          puVar15 = puVar14 + (lVar9 >> 1) * 3;
          if (puVar15 != puVar14) {
            uVar3 = *(undefined4 *)((longlong)puVar14 + 4);
            uVar4 = *(undefined4 *)(puVar14 + 1);
            uVar5 = *(undefined4 *)((longlong)puVar14 + 0xc);
            uVar6 = *puVar15;
            uVar7 = puVar15[1];
            uVar2 = puVar15[2];
            *(undefined4 *)puVar15 = *(undefined4 *)puVar14;
            *(undefined4 *)((longlong)puVar15 + 4) = uVar3;
            *(undefined4 *)(puVar15 + 1) = uVar4;
            *(undefined4 *)((longlong)puVar15 + 0xc) = uVar5;
            puVar15[2] = puVar14[2];
            *puVar14 = uVar6;
            puVar14[1] = uVar7;
            puVar14[2] = uVar2;
          }
          puVar12 = puVar10 + 3;
          puVar15 = puVar14;
LAB_1411c70d0:
          puVar11 = puVar15;
          puVar15 = puVar11 + 3;
          if (puVar15 <= puVar10) goto code_r0x0001411c70d9;
          goto LAB_1411c70e6;
        }
        for (; puVar12 = puVar14, puVar15 = puVar14, puVar14 < puVar10; puVar10 = puVar10 + -3) {
          while (puVar15 = puVar15 + 3, puVar15 <= puVar10) {
            if (*(float *)(puVar15 + 2) < *(float *)(puVar12 + 2)) {
              puVar12 = puVar15;
            }
          }
          if (puVar12 != puVar10) {
            uVar6 = puVar10[1];
            uVar7 = *puVar12;
            uVar8 = puVar12[1];
            uVar2 = puVar12[2];
            *puVar12 = *puVar10;
            puVar12[1] = uVar6;
            puVar12[2] = puVar10[2];
            *puVar10 = uVar7;
            puVar10[1] = uVar8;
            puVar10[2] = uVar2;
          }
        }
        goto LAB_1411c7217;
      }
LAB_1411c7208:
      local_348 = lVar1;
      FUN_1411c36f0(puVar15,lVar9,param_3,param_4);
LAB_1411c7217:
      plVar16 = plVar16 + -3;
    } while (&local_338 <= plVar16);
  }
  return;
code_r0x0001411c70d9:
  if (*(float *)(puVar14 + 2) <= *(float *)(puVar11 + 5)) goto LAB_1411c70d0;
LAB_1411c70e6:
  do {
    puVar13 = puVar12;
    puVar12 = puVar13 + -3;
    if (puVar12 <= puVar14) break;
  } while (*(float *)(puVar13 + -1) <= *(float *)(puVar14 + 2));
  if (puVar15 <= puVar12) {
    if (puVar15 != puVar12) {
      uVar3 = *(undefined4 *)((longlong)puVar13 + -0x14);
      uVar4 = *(undefined4 *)(puVar13 + -2);
      uVar5 = *(undefined4 *)((longlong)puVar13 + -0xc);
      uVar6 = *puVar15;
      uVar7 = puVar11[4];
      uVar2 = puVar11[5];
      *(undefined4 *)puVar15 = *(undefined4 *)puVar12;
      *(undefined4 *)((longlong)puVar11 + 0x1c) = uVar3;
      *(undefined4 *)(puVar11 + 4) = uVar4;
      *(undefined4 *)((longlong)puVar11 + 0x24) = uVar5;
      puVar11[5] = puVar13[-1];
      *puVar12 = uVar6;
      puVar13[-2] = uVar7;
      puVar13[-1] = uVar2;
    }
    goto LAB_1411c70d0;
  }
  if (puVar14 != puVar12) {
    uVar3 = *(undefined4 *)((longlong)puVar13 + -0x14);
    uVar4 = *(undefined4 *)(puVar13 + -2);
    uVar5 = *(undefined4 *)((longlong)puVar13 + -0xc);
    uVar6 = *puVar14;
    uVar7 = puVar14[1];
    uVar2 = puVar14[2];
    *(undefined4 *)puVar14 = *(undefined4 *)puVar12;
    *(undefined4 *)((longlong)puVar14 + 4) = uVar3;
    *(undefined4 *)(puVar14 + 1) = uVar4;
    *(undefined4 *)((longlong)puVar14 + 0xc) = uVar5;
    puVar14[2] = puVar13[-1];
    *puVar12 = uVar6;
    puVar13[-2] = uVar7;
    puVar13[-1] = uVar2;
  }
  local_348._0_4_ = (int)local_348 + -1;
  lVar9 = (longlong)puVar12 + (-0x18 - (longlong)puVar14);
  lVar9 = lVar9 / 6 + (lVar9 >> 0x3f);
  if ((lVar9 >> 2) - (lVar9 >> 0x3f) < ((longlong)puVar10 - (longlong)puVar15) / 0x18) {
    if (puVar15 < puVar10) {
      *plVar16 = (longlong)puVar15;
      plVar16[1] = (longlong)puVar10;
      *(int *)(plVar16 + 2) = (int)local_348;
      plVar16 = plVar16 + 3;
    }
    if (puVar12 <= puVar14 + 3) goto LAB_1411c7217;
    puVar10 = puVar13 + -6;
    puVar15 = puVar14;
  }
  else {
    if (puVar14 + 3 < puVar12) {
      *plVar16 = (longlong)puVar14;
      plVar16[1] = (longlong)(puVar13 + -6);
      *(int *)(plVar16 + 2) = (int)local_348;
      plVar16 = plVar16 + 3;
    }
    if (puVar10 <= puVar15) goto LAB_1411c7217;
  }
  lVar9 = ((longlong)puVar10 - (longlong)puVar15) / 0x18 + 1;
  puVar14 = puVar15;
  if ((int)local_348 == 0) goto LAB_1411c7208;
  goto LAB_1411c7080;
}



// FUNCTION 1411c72d0 FUN_1411c72d0 body=146 status=ok
// SIG undefined FUN_1411c72d0(void)

void FUN_1411c72d0(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    FUN_1417846f0(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  uVar1 = UAIAsyncTaskBlueprintProxy::GetPrivateStaticClass();
  FUN_1417985e0(uVar1,param_1,param_2,param_3,0,param_4,param_5,param_6,0);
  return;
}



// FUNCTION 1411c7370 FUN_1411c7370 body=879 status=ok
// SIG undefined FUN_1411c7370(void)

bool FUN_1411c7370(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
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
LAB_1411c742f:
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
      if (iVar8 < 1) goto LAB_1411c742f;
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
            goto LAB_1411c7444;
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
LAB_1411c7444:
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
  if (local_68 == 0) goto LAB_1411c767f;
  if (param_4 != 0) {
    lVar10 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar10) goto LAB_1411c75cd;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = FUN_14137fee0();
LAB_1411c75cd:
  plVar4 = *(longlong **)(local_68 + 0x80);
  local_38 = *(undefined8 *)(local_68 + 0x78);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar11 = FUN_14203b1b0(local_38,param_4,param_3,param_1,param_5,param_6);
  if (lVar11 == 0) {
LAB_1411c7646:
    lVar11 = 0;
  }
  else {
    lVar10 = FUN_14137fee0();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8
         ) != lVar10 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (!bVar7) goto LAB_1411c7646;
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
LAB_1411c767f:
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



// FUNCTION 1411c76e0 FUN_1411c76e0 body=879 status=ok
// SIG undefined FUN_1411c76e0(void)

bool FUN_1411c76e0(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
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
LAB_1411c779f:
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
      if (iVar8 < 1) goto LAB_1411c779f;
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
            goto LAB_1411c77b4;
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
LAB_1411c77b4:
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
  if (local_68 == 0) goto LAB_1411c79ef;
  if (param_4 != 0) {
    lVar10 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar10) goto LAB_1411c793d;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = FUN_14137f560();
LAB_1411c793d:
  plVar4 = *(longlong **)(local_68 + 0x80);
  local_38 = *(undefined8 *)(local_68 + 0x78);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar11 = FUN_14203b1b0(local_38,param_4,param_3,param_1,param_5,param_6);
  if (lVar11 == 0) {
LAB_1411c79b6:
    lVar11 = 0;
  }
  else {
    lVar10 = FUN_14137f560();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8
         ) != lVar10 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (!bVar7) goto LAB_1411c79b6;
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
LAB_1411c79ef:
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



// FUNCTION 1411c7a50 FUN_1411c7a50 body=879 status=ok
// SIG undefined FUN_1411c7a50(void)

bool FUN_1411c7a50(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
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
LAB_1411c7b0f:
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
      if (iVar8 < 1) goto LAB_1411c7b0f;
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
            goto LAB_1411c7b24;
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
LAB_1411c7b24:
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
  if (local_68 == 0) goto LAB_1411c7d5f;
  if (param_4 != 0) {
    lVar10 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar10) goto LAB_1411c7cad;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass();
LAB_1411c7cad:
  plVar4 = *(longlong **)(local_68 + 0x80);
  local_38 = *(undefined8 *)(local_68 + 0x78);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar11 = FUN_14203b1b0(local_38,param_4,param_3,param_1,param_5,param_6);
  if (lVar11 == 0) {
LAB_1411c7d26:
    lVar11 = 0;
  }
  else {
    lVar10 = UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8
         ) != lVar10 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (!bVar7) goto LAB_1411c7d26;
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
LAB_1411c7d5f:
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



// FUNCTION 1411c7dc0 FUN_1411c7dc0 body=520 status=ok
// SIG undefined FUN_1411c7dc0(void)

int FUN_1411c7dc0(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  byte bVar6;
  char *pcVar7;
  int iVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  byte bVar16;
  float fVar17;
  
  iVar3 = (int)param_1[1];
  if (iVar3 == 0) {
    return 0;
  }
  lVar11 = *param_1;
  uVar9 = 0;
  if (0.0 < *(float *)(lVar11 + 0x30)) {
    if (*(char *)(lVar11 + 0x5e) == '\0') {
      fVar17 = *(float *)*param_2;
    }
    else {
      fVar17 = 0.0;
    }
    if (*(float *)(lVar11 + 0x30) <= fVar17 + *(float *)(lVar11 + 0x2c)) {
      bVar16 = 0;
      goto LAB_1411c7e58;
    }
  }
  bVar16 = 1;
LAB_1411c7e58:
  lVar11 = (longlong)iVar3;
  uVar13 = uVar9;
  uVar15 = uVar9;
  do {
    iVar14 = (int)uVar15;
    uVar9 = uVar9 + 1;
    uVar15 = (ulonglong)(iVar14 + 1);
    if ((longlong)uVar9 < lVar11) {
      pcVar7 = (char *)(*param_1 + 0x5e + uVar9 * 0x60);
      do {
        if (*(float *)(pcVar7 + -0x2e) <= 0.0) {
LAB_1411c7ea9:
          bVar6 = 1;
        }
        else {
          if (*pcVar7 == '\0') {
            fVar17 = *(float *)*param_2;
          }
          else {
            fVar17 = 0.0;
          }
          if (fVar17 + *(float *)(pcVar7 + -0x32) < *(float *)(pcVar7 + -0x2e)) goto LAB_1411c7ea9;
          bVar6 = 0;
        }
        if (bVar16 != bVar6) break;
        uVar15 = (ulonglong)((int)uVar15 + 1);
        uVar9 = uVar9 + 1;
        pcVar7 = pcVar7 + 0x60;
      } while ((longlong)uVar9 < lVar11);
    }
    iVar8 = (int)uVar15 - iVar14;
    if (bVar16 == 0) {
      if (iVar8 != 0) {
        plVar10 = (longlong *)((longlong)iVar14 * 0x60 + 0x18 + *param_1);
        do {
          FUN_140591060(plVar10 + 5);
          plVar4 = (longlong *)*plVar10;
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
              iVar14 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar14 == 1) {
                (**(code **)(*plVar4 + 8))(plVar4,1);
              }
            }
          }
          plVar10 = plVar10 + 0xc;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
    }
    else {
      iVar12 = (int)uVar13;
      if (iVar12 != iVar14) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar12 * 0x60 + *param_1),
                   (void *)((longlong)iVar14 * 0x60 + *param_1),(longlong)iVar8 * 0x60);
      }
      uVar13 = (ulonglong)(uint)(iVar12 + iVar8);
    }
    bVar16 = bVar16 ^ 1;
    if (lVar11 <= (longlong)uVar9) {
      *(int *)(param_1 + 1) = (int)uVar13;
      return iVar3 - (int)uVar13;
    }
  } while( true );
}



// FUNCTION 1411c7fd0 FUN_1411c7fd0 body=95 status=ok
// SIG undefined FUN_1411c7fd0(void)

longlong FUN_1411c7fd0(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  lVar3 = (longlong)(int)param_1[1] * 0x168 + lVar1;
  if (lVar1 != lVar3) {
    lVar2 = lVar1;
    do {
      if (*(longlong *)(lVar2 + 0x140) == *(longlong *)*param_2) {
        if (lVar2 == lVar3) {
          return 0xffffffff;
        }
        return (lVar2 - lVar1) / 0x168;
      }
      lVar2 = lVar2 + 0x168;
    } while (lVar2 != lVar3);
  }
  return 0xffffffff;
}



// FUNCTION 1411c8030 TFunction<void___cdecl(void)> body=185 status=ok
// SIG undefined TFunction<void___cdecl(void)>(void)

undefined8 *
TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>
          (undefined8 *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  longlong *plVar2;
  
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2[6] == 0) {
    ::_guard_xfg_dispatch_icall_nop(param_1 + 2,param_2 + 2,0x20);
  }
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  param_1[6] = param_2[6];
  param_2[6] = 0;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_1 + 8) != 0) {
    plVar2 = (longlong *)param_1[6];
    if ((longlong *)param_1[6] == (longlong *)0x0) {
      plVar2 = param_1 + 2;
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))(plVar2);
      puVar1 = (undefined1 *)*param_2;
      goto LAB_1411c80c5;
    }
  }
  puVar1 = &LAB_1411d4f50;
LAB_1411c80c5:
  *param_1 = puVar1;
  *param_2 = &LAB_1411d4f50;
  return param_1;
}



// FUNCTION 1411c80f0 FUN_1411c80f0 body=212 status=ok
// SIG undefined FUN_1411c80f0(void)

undefined8 * FUN_1411c80f0(undefined8 *param_1,longlong *param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  *param_1 = 0;
  FString::FString(param_1 + 1);
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x60,param_1 + 6);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_CopyToEmptyStorage_1446fefb8;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar1 + 2,param_3);
  }
  param_1[4] = FUN_1411d5280;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0xe] = FUN_1407c3030;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  if (*param_2 != 0) {
    FMemory::Free();
  }
  if (*(int *)(param_3 + 0x40) != 0) {
    plVar2 = *(longlong **)(param_3 + 0x30);
    if (*(longlong **)(param_3 + 0x30) == (longlong *)0x0) {
      plVar2 = (longlong *)(param_3 + 0x10);
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
  }
  if (*(longlong *)(param_3 + 0x30) != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1411c81d0 TFunction<void___cdecl(void)> body=112 status=ok
// SIG undefined TFunction<void___cdecl(void)>(void)

undefined8 *
TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>
          (undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_2 + 8) != 0) {
    puVar2 = (undefined8 *)param_2[6];
    if ((undefined8 *)param_2[6] == (undefined8 *)0x0) {
      puVar2 = param_2 + 2;
    }
    if (puVar2 != (undefined8 *)0x0) {
      plVar1 = (longlong *)(**(code **)*puVar2)(puVar2,param_1 + 2);
      (**(code **)(*plVar1 + 8))(plVar1);
      *param_1 = *param_2;
      return param_1;
    }
  }
  *param_1 = &LAB_1411d4f50;
  return param_1;
}



// FUNCTION 1411c8240 FUN_1411c8240 body=505 status=ok
// SIG undefined FUN_1411c8240(void)

undefined8 * FUN_1411c8240(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 local_res8;
  
  FUN_14221fbd0();
  *(undefined4 *)(param_1 + 0x8e) = 0x3f800000;
  *param_1 = &PTR_FUN_1446fdf60;
  *(undefined4 *)((longlong)param_1 + 0x474) = 0x1010101;
  *(undefined2 *)(param_1 + 0x8f) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x47a) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x484) = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  *(undefined4 *)(param_1 + 0x91) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x48c) = 0;
  param_1[0x93] = 0;
  local_res8 = 0;
  *(undefined4 *)(param_1 + 0x95) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x4ac)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x94,0);
  }
  if ((undefined2 *)param_1[0x94] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x94] = 0;
  }
  *(undefined4 *)(param_1 + 0x92) = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  *(undefined4 *)(param_1 + 0x98) = 0xbf800000;
  FWeakObjectPtr::operator=(param_1 + 0x99,0);
  param_1[0x9a] = 0;
  puVar2 = (undefined8 *)FName::FName(&local_res8,L"SceneComponent",1);
  uVar1 = *puVar2;
  uVar3 = FUN_1429ff160();
  lVar4 = FUN_141752410(param_1,uVar1,uVar3,uVar3,1,0,0);
  param_1[0x8b] = lVar4;
  if (lVar4 != 0) {
    FUN_14223f010(param_1,lVar4);
    (**(code **)(*(longlong *)param_1[0x8b] + 0x500))((longlong *)param_1[0x8b],2);
  }
  puVar2 = (undefined8 *)FName::FName(&local_res8,L"PreviewActorSocket",1);
  uVar1 = *puVar2;
  uVar3 = USoundSourceBus::GetPrivateStaticClass();
  lVar4 = FUN_141752410(param_1,uVar1,uVar3,uVar3,1,0,0);
  param_1[0x8c] = lVar4;
  if (lVar4 != 0) {
    local_res8 = 0;
    FUN_142382f60(lVar4,param_1[0x8b],&DAT_146af29ec,0);
    (**(code **)(*(longlong *)param_1[0x8c] + 0x500))((longlong *)param_1[0x8c],2);
  }
  FUN_14223c460(param_1,0);
  *(undefined4 *)((longlong)param_1 + 0x47c) = 0;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) & 0xfb | 2;
  return param_1;
}



// FUNCTION 1411c8440 FUN_1411c8440 body=135 status=ok
// SIG undefined FUN_1411c8440(void)

undefined8 * FUN_1411c8440(undefined8 *param_1)

{
  *param_1 = 0;
  FName::FName(param_1 + 1,L"Currency_Increment_Start",1);
  FName::FName(param_1 + 2,L"Currency_Increment_Stop",1);
  FName::FName(param_1 + 3,L"Currency_Decrement_Start",1);
  FName::FName(param_1 + 4,L"Currency_Decrement_Stop",1);
  FName::FName(param_1 + 5,L"cash",1);
  return param_1;
}



// FUNCTION 1411c84d0 FUN_1411c84d0 body=731 status=ok
// SIG undefined FUN_1411c84d0(void)

undefined2 * FUN_1411c84d0(undefined2 *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 local_res8 [8];
  
  uVar6 = 0;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x52) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x62) = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 100));
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x6c) = 0;
  FWeakObjectPtr::operator=(param_1 + 0x70,0);
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined1 *)(param_1 + 0x76) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x7c) = 0;
  param_1[0x80] = 0;
  *(undefined1 *)(param_1 + 0x81) = 0;
  *(undefined1 *)(param_1 + 0x82) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x8c) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x94) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x9c) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa4) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xac) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xbc) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xc4) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xcc) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 2;
  *(undefined8 *)(param_1 + 0xd4) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xdc) = 2;
  plVar2 = (longlong *)GetMoviePlayer();
  plVar2 = (longlong *)(**(code **)(*plVar2 + 0x98))(plVar2);
  plVar3 = (longlong *)FMemory::Realloc(0,0x30,0);
  if (plVar3 != (longlong *)0x0) {
    plVar3[1] = (longlong)param_1;
    *plVar3 = (longlong)&DAT_143f3ed00;
    plVar3[2] = (longlong)&LAB_1411efb90;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[4] = lVar4;
    *plVar3 = (longlong)&PTR_GetPoolName_143f3ed48;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar2,1);
    puVar5 = (undefined8 *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res8);
    iVar1 = (int)plVar2[1];
    uVar6 = *puVar5;
    *(int *)(plVar2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)plVar2 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar2,iVar1);
    }
    puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar2);
    *puVar5 = plVar3;
    *(undefined4 *)(puVar5 + 1) = 3;
  }
  *(undefined8 *)(param_1 + 0x14) = uVar6;
  *(undefined8 *)(param_1 + 0x34) = 0;
  plVar2 = (longlong *)GetMoviePlayer();
  uVar6 = (**(code **)(*plVar2 + 0x88))(plVar2);
  puVar5 = (undefined8 *)FUN_1406ac210(uVar6,local_res8,param_1,FUN_1411eaf50);
  *(undefined8 *)(param_1 + 0x78) = *puVar5;
  plVar2 = (longlong *)GetMoviePlayer();
  uVar6 = (**(code **)(*plVar2 + 0x90))(plVar2);
  puVar5 = (undefined8 *)FUN_1406ac210(uVar6,local_res8,param_1,FUN_1411fe100);
  *(undefined8 *)(param_1 + 0x7c) = *puVar5;
  return param_1;
}



// FUNCTION 1411c87b0 FUN_1411c87b0 body=32 status=ok
// SIG undefined FUN_1411c87b0(void)

undefined8 * FUN_1411c87b0(undefined8 *param_1)

{
  *param_1 = 0xffffffffffffffff;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  param_1[4] = 0;
  return param_1;
}



// FUNCTION 1411c87d0 FUN_1411c87d0 body=283 status=ok
// SIG undefined FUN_1411c87d0(void)

longlong FUN_1411c87d0(longlong param_1)

{
  FWeakObjectPtr::operator=(param_1,0);
  InitializeSRWLock((PSRWLOCK)(param_1 + 8));
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x34)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x28,0);
  }
  if (*(undefined2 **)(param_1 + 0x28) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 0x28) = 0;
  }
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  if ((*(int *)(param_1 + 0x34) < 0) && (*(int *)(param_1 + 0x34) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x28,0);
  }
  if (*(undefined2 **)(param_1 + 0x28) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 0x28) = 0;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x38));
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x50));
  *(undefined8 *)(param_1 + 0x58) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x78) = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x80));
  FUN_1411c88f0(param_1 + 0x90);
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x700));
  *(undefined4 *)(param_1 + 0x708) = 0;
  *(undefined4 *)(param_1 + 0x70c) = 0;
  return param_1;
}



// FUNCTION 1411c88f0 FUN_1411c88f0 body=110 status=ok
// SIG undefined FUN_1411c88f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1411c88f0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = uRam00000001468b5b78;
  *param_1 = _DAT_1468b5b70;
  param_1[1] = uVar1;
  uVar4 = uRam00000001468b5b8c;
  uVar3 = uRam00000001468b5b88;
  uVar2 = uRam00000001468b5b84;
  *(undefined4 *)(param_1 + 2) = _DAT_1468b5b80;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 3) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
  uVar4 = uRam00000001468b5b9c;
  uVar3 = uRam00000001468b5b98;
  uVar2 = uRam00000001468b5b94;
  *(undefined4 *)(param_1 + 4) = _DAT_1468b5b90;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar2;
  *(undefined4 *)(param_1 + 5) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar4;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0x42b40000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x40490fdb;
  *(undefined4 *)(param_1 + 8) = DAT_1464aa730;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0x42b40000;
  FUN_142741540(param_1 + 0xe);
  return param_1;
}



// FUNCTION 1411c8960 FUN_1411c8960 body=173 status=ok
// SIG undefined FUN_1411c8960(void)

undefined8 * FUN_1411c8960(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  FUN_142dc1310(param_1 + 2,param_2 + 2);
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
  *(undefined4 *)((longlong)param_1 + 0x94) = *(undefined4 *)((longlong)param_2 + 0x94);
  *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x13);
  *(undefined4 *)((longlong)param_1 + 0x9c) = *(undefined4 *)((longlong)param_2 + 0x9c);
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0x14);
  param_1[0x15] = param_2[0x15];
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0x16);
  *(undefined4 *)((longlong)param_1 + 0xb4) = *(undefined4 *)((longlong)param_2 + 0xb4);
  *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)(param_2 + 0x17);
  return param_1;
}



// FUNCTION 1411c8a10 FUN_1411c8a10 body=465 status=ok
// SIG undefined FUN_1411c8a10(void)

longlong FUN_1411c8a10(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  FString::FString();
  FString::FString(param_1 + 0x10,param_2 + 0x10);
  FString::FString(param_1 + 0x20,param_2 + 0x20);
  FString::FString(param_1 + 0x30,param_2 + 0x30);
  FString::FString(param_1 + 0x40,param_2 + 0x40);
  FString::FString(param_1 + 0x50,param_2 + 0x50);
  FString::FString(param_1 + 0x60,param_2 + 0x60);
  FString::FString(param_1 + 0x70,param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x80) = 0;
  iVar4 = *(int *)(param_2 + 0x88);
  puVar5 = *(undefined8 **)(param_2 + 0x80);
  *(int *)(param_1 + 0x88) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 0x8c) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 0x80,iVar4,0);
    puVar2 = *(undefined8 **)(param_1 + 0x80);
    do {
      *puVar2 = 0;
      iVar1 = *(int *)(puVar5 + 1);
      _Src = (void *)*puVar5;
      *(int *)(puVar2 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar2,iVar1,0);
        _guard_xfg_dispatch_icall_nop((void *)*puVar2,_Src,(longlong)iVar1 * 2);
      }
      puVar2 = puVar2 + 2;
      puVar5 = puVar5 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FString::FString(param_1 + 0x90,param_2 + 0x90);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  iVar4 = *(int *)(param_2 + 0xa8);
  lVar6 = *(longlong *)(param_2 + 0xa0);
  *(int *)(param_1 + 0xa8) = iVar4;
  if (iVar4 != 0) {
    TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(param_1 + 0xa0,iVar4,0);
    lVar3 = *(longlong *)(param_1 + 0xa0);
    lVar6 = lVar6 + 0x20;
    do {
      FString::FString(lVar3,lVar6 + -0x20);
      FString::FString(lVar3 + 0x10,lVar6 + -0x10);
      FString::FString(lVar3 + 0x20,lVar6);
      lVar3 = lVar3 + 0x30;
      lVar6 = lVar6 + 0x30;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    return param_1;
  }
  *(undefined4 *)(param_1 + 0xac) = 0;
  return param_1;
}



// FUNCTION 1411c8bf0 FUN_1411c8bf0 body=703 status=ok
// SIG undefined FUN_1411c8bf0(void)

undefined2 * FUN_1411c8bf0(undefined2 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x16)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x10,0);
  }
  if (*(undefined2 **)(param_1 + 0x10) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 0x10) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x3f333333;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined1 *)(param_1 + 0x7a) = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0xc4) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined1 *)(param_1 + 0xcc) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x114) = 0;
  *(undefined1 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x11c) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined1 *)(param_1 + 0x13e) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x144) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x14c) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined1 *)(param_1 + 0x154) = 0;
  FTickFunction::FTickFunction(param_1 + 0x158);
  *(undefined ***)(param_1 + 0x158) = &PTR__scalar_deleting_destructor__1446fe648;
  *(undefined8 *)(param_1 + 0x184) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 0x18c) = 2;
  param_1[400] = 0;
  *(undefined8 *)(param_1 + 0x192) = DAT_1468b5da0;
  *(undefined4 *)(param_1 + 0x196) = DAT_1468b5da8;
  *(undefined8 *)(param_1 + 0x198) = DAT_1468b5da0;
  *(undefined4 *)(param_1 + 0x19c) = DAT_1468b5da8;
  *(undefined8 *)(param_1 + 0x19e) = DAT_1468b5da0;
  *(undefined4 *)(param_1 + 0x1a2) = DAT_1468b5da8;
  *(undefined4 *)(param_1 + 0x1a4) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0x1a6) = DAT_1468b5d88._4_4_;
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  *(undefined4 *)(param_1 + 0x1b0) = DAT_1464aa810;
  *(undefined4 *)(param_1 + 0x1b2) = DAT_1464aa814;
  *(undefined4 *)(param_1 + 0x1b4) = DAT_1464aa818;
  *(undefined4 *)(param_1 + 0x1b6) = DAT_1464aa81c;
  *(undefined4 *)(param_1 + 0x1b8) = 0x3e4ccccd;
  param_1[0x1be] = 0;
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  *(undefined4 *)(param_1 + 0x1c2) = (undefined4)DAT_1468b5d88;
  uVar1 = DAT_1468b5d88._4_4_;
  *(undefined4 *)(param_1 + 0x1c6) = 0;
  *(undefined4 *)(param_1 + 0x1c4) = uVar1;
  param_1[0x15c] = 0x505;
  *(byte *)(param_1 + 0x15e) = *(byte *)(param_1 + 0x15e) | 3;
  *(undefined2 **)(param_1 + 0x180) = param_1;
  return param_1;
}



// FUNCTION 1411c8eb0 FUN_1411c8eb0 body=401 status=ok
// SIG undefined FUN_1411c8eb0(void)

longlong FUN_1411c8eb0(longlong param_1,longlong param_2)

{
  FText::FText();
  FText::FText(param_1 + 0x18,param_2 + 0x18);
  FText::FText(param_1 + 0x30,param_2 + 0x30);
  FText::FText(param_1 + 0x48,param_2 + 0x48);
  FText::FText(param_1 + 0x60,param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_2 + 0x84);
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  *(undefined1 *)(param_1 + 0x98) = *(undefined1 *)(param_2 + 0x98);
  *(undefined1 *)(param_1 + 0x99) = *(undefined1 *)(param_2 + 0x99);
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_2 + 0x9c);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined1 *)(param_1 + 0xa4) = *(undefined1 *)(param_2 + 0xa4);
  *(undefined1 *)(param_1 + 0xa5) = *(undefined1 *)(param_2 + 0xa5);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
  FUN_14080bc50(param_1 + 0xb0,param_2 + 0xb0);
  *(undefined1 *)(param_1 + 0x138) = *(undefined1 *)(param_2 + 0x138);
  *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_2 + 0x140);
  *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_2 + 0x148);
  *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_2 + 0x150);
  *(undefined8 *)(param_2 + 0x150) = 0;
  *(undefined8 *)(param_2 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_2 + 0x158);
  *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(param_2 + 0x160);
  return param_1;
}



// FUNCTION 1411c9050 FUN_1411c9050 body=347 status=ok
// SIG undefined FUN_1411c9050(void)

longlong FUN_1411c9050(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FText::FText();
  FText::FText(param_1 + 0x18,param_2 + 0x18);
  FText::FText(param_1 + 0x30,param_2 + 0x30);
  FText::FText(param_1 + 0x48,param_2 + 0x48);
  FText::FText(param_1 + 0x60,param_2 + 0x60);
  FString::FString(param_1 + 0x78,param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  *(undefined1 *)(param_1 + 0x98) = *(undefined1 *)(param_2 + 0x98);
  *(undefined1 *)(param_1 + 0x99) = *(undefined1 *)(param_2 + 0x99);
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_2 + 0x9c);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined1 *)(param_1 + 0xa4) = *(undefined1 *)(param_2 + 0xa4);
  *(undefined1 *)(param_1 + 0xa5) = *(undefined1 *)(param_2 + 0xa5);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
  FUN_14080bc50(param_1 + 0xb0,param_2 + 0xb0);
  *(undefined1 *)(param_1 + 0x138) = *(undefined1 *)(param_2 + 0x138);
  *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_2 + 0x140);
  *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_2 + 0x148);
  lVar1 = *(longlong *)(param_2 + 0x150);
  *(longlong *)(param_1 + 0x150) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_2 + 0x158);
  *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(param_2 + 0x160);
  return param_1;
}



// FUNCTION 1411c91b0 FUN_1411c91b0 body=596 status=ok
// SIG undefined FUN_1411c91b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1411c91b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined4 *param_5,undefined4 *param_6)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined4 uVar8;
  undefined4 uStackX_c;
  undefined8 local_38;
  longlong *local_30;
  
  FText::FText();
  FText::FText(param_1 + 0x18);
  FText::FText(param_1 + 0x30);
  FText::FText(param_1 + 0x48);
  FText::FText();
  *(undefined8 *)(param_1 + 0x78) = 0;
  puVar3 = (undefined8 *)(param_1 + 0x148);
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined2 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x9c) = 0;
  *(undefined2 *)(param_1 + 0xa4) = 1;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined ***)(param_1 + 0xb0) = &PTR__scalar_deleting_destructor__143f489a8;
  *(undefined4 *)(param_1 + 0xb8) = 0x42000000;
  *(undefined8 *)(param_1 + 0xbc) = 0x42000000;
  *(undefined8 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  uVar6 = _DAT_1464aa6c8;
  *(undefined8 *)(param_1 + 0xd0) = _DAT_1464aa6c0;
  *(undefined8 *)(param_1 + 0xd8) = uVar6;
  *(undefined1 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  uVar6 = DAT_1468b5d88;
  *(undefined1 *)(param_1 + 0x118) = 0;
  uVar8 = (undefined4)uVar6;
  *(undefined4 *)(param_1 + 0x110) = uVar8;
  *(undefined4 *)(param_1 + 0x108) = uVar8;
  uStackX_c = (undefined4)((ulonglong)uVar6 >> 0x20);
  *(undefined4 *)(param_1 + 0x114) = uStackX_c;
  *(undefined4 *)(param_1 + 0x10c) = uStackX_c;
  *(undefined4 *)(param_1 + 0x11c) = 3;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(byte *)(param_1 + 0x130) = *(byte *)(param_1 + 0x130) & 0xfc;
  *(undefined1 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *puVar3 = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x160) = 4;
  FText::operator=(param_1,param_2);
  FText::operator=(param_1 + 0x18,param_3);
  FText::operator=(param_1 + 0x30,param_4);
  local_30 = (longlong *)0x0;
  *(undefined4 *)(param_1 + 0x160) = *param_5;
  *(undefined4 *)(param_1 + 0x9c) = *param_6;
  *(undefined8 *)(param_1 + 0x140) = 0;
  if (puVar3 != &local_38) {
    *puVar3 = 0;
    local_38 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x150,&local_30);
    plVar7 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
  }
  return param_1;
}



// FUNCTION 1411c9410 FUN_1411c9410 body=345 status=ok
// SIG undefined FUN_1411c9410(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1411c9410(longlong param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uStackX_c;
  
  FText::FText();
  FText::FText(param_1 + 0x18);
  FText::FText(param_1 + 0x30);
  FText::FText(param_1 + 0x48);
  FText::FText();
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined2 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x9c) = 0;
  *(undefined2 *)(param_1 + 0xa4) = 1;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined ***)(param_1 + 0xb0) = &PTR__scalar_deleting_destructor__143f489a8;
  *(undefined4 *)(param_1 + 0xb8) = 0x42000000;
  *(undefined8 *)(param_1 + 0xbc) = 0x42000000;
  *(undefined8 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  uVar1 = _DAT_1464aa6c8;
  *(undefined8 *)(param_1 + 0xd0) = _DAT_1464aa6c0;
  *(undefined8 *)(param_1 + 0xd8) = uVar1;
  *(undefined1 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  uVar1 = DAT_1468b5d88;
  uVar2 = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0x110) = uVar2;
  *(undefined4 *)(param_1 + 0x108) = uVar2;
  *(undefined1 *)(param_1 + 0x118) = 0;
  uStackX_c = (undefined4)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)(param_1 + 0x114) = uStackX_c;
  *(undefined4 *)(param_1 + 0x10c) = uStackX_c;
  *(undefined4 *)(param_1 + 0x11c) = 3;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(byte *)(param_1 + 0x130) = *(byte *)(param_1 + 0x130) & 0xfc;
  *(undefined1 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x160) = 4;
  return param_1;
}



// FUNCTION 1411c9570 FUN_1411c9570 body=474 status=ok
// SIG undefined FUN_1411c9570(void)

undefined8 * FUN_1411c9570(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *(undefined4 *)(param_1 + 8) = 0x41a00000;
  *param_1 = &PTR_FUN_1446fd3a0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0x4004000000000000;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0x41a00000;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0x41a00000;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0xffffffd3;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x21c) = 0;
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x26c) = 0;
  param_1[0x4f] = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  return param_1;
}



// FUNCTION 1411c9750 FUN_1411c9750 body=356 status=ok
// SIG undefined FUN_1411c9750(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1411c9750(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_142326e40();
  *param_1 = &PTR_FUN_1446fdb38;
  param_1[5] = &PTR_LAB_1446fdf30;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  uVar1 = uRam000000014687670c;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  *(uint *)((longlong)param_1 + 0x1ac) = uVar1;
  uVar1 = uRam0000000146876704 & uRam0000000146876714;
  uVar2 = uRam0000000146876708 & uRam0000000146876718;
  uVar3 = uRam000000014687670c & uRam000000014687671c;
  *(uint *)(param_1 + 0x38) = _DAT_146876700 & _DAT_146876710;
  *(uint *)((longlong)param_1 + 0x1c4) = uVar1;
  *(uint *)(param_1 + 0x39) = uVar2;
  *(uint *)((longlong)param_1 + 0x1cc) = uVar3;
  param_1[0x3a] = 0xffffffffffffffff;
  param_1[0x3b] = 0;
  *(undefined2 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 0;
  *(undefined1 *)(param_1 + 0x3d) = 1;
  *(undefined1 *)(param_1 + 0x3f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = 0;
  FWeakObjectPtr::operator=(param_1 + 0x40,0);
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  FWeakObjectPtr::operator=(param_1 + 0x43,0);
  param_1[0x44] = 0;
  *(undefined2 *)(param_1 + 0x45) = 1;
  *(undefined8 *)((longlong)param_1 + 0x22c) = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  *(undefined1 *)(param_1 + 0x4a) = 1;
  *(undefined4 *)(param_1 + 0x4b) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x25c) = 0;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  param_1[0x4d] = 0;
  *(undefined2 *)(param_1 + 0x4e) = 0;
  *(undefined1 *)((longlong)param_1 + 0x272) = 0;
  *(undefined4 *)((longlong)param_1 + 0x274) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) | 8;
  return param_1;
}



// FUNCTION 1411c98c0 FUN_1411c98c0 body=503 status=ok
// SIG undefined FUN_1411c98c0(void)

undefined8 * FUN_1411c98c0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  longlong *local_18;
  int local_10;
  
  FUN_1417818c0();
  *param_1 = &PTR_FUN_1446fd630;
  param_1[5] = 0;
  param_1[6] = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 7));
  *(undefined4 *)(param_1 + 8) = 0x3cf5c28f;
  *(undefined4 *)((longlong)param_1 + 0x44) = 10;
  *(undefined4 *)(param_1 + 9) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0xd));
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x10));
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x13));
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  param_1[0x15] = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x16));
  param_1[0x17] = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x18));
  param_1[0x19] = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x1a));
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined1 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  plVar1 = (longlong *)FUN_1411e35f0();
  if (plVar1 != (longlong *)0x0) {
    local_18 = (longlong *)0x0;
    plVar2 = (longlong *)FMemory::Realloc(0,0x30,0);
    local_10 = 3;
    local_18 = plVar2;
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = (longlong)&PTR_FUN_1446fe990;
      FWeakObjectPtr::operator=(plVar2 + 1,param_1);
      plVar2[2] = (longlong)FUN_1411f1210;
      lVar3 = FDelegateHandle::GenerateNewID();
      plVar2[4] = lVar3;
      *plVar2 = (longlong)&PTR_FUN_1446fe9d8;
    }
    puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0x48))(plVar1,local_res8,&local_18);
    param_1[0x1c] = *puVar4;
    if (local_10 != 0) {
      if (local_18 == (longlong *)0x0) {
        return param_1;
      }
      (**(code **)(*local_18 + 0x28))(local_18,0);
      if (local_18 != (longlong *)0x0) {
        local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
      }
      local_10 = 0;
    }
    if (local_18 != (longlong *)0x0) {
      FMemory::Free(local_18);
    }
  }
  return param_1;
}



// FUNCTION 1411c9ac0 FUN_1411c9ac0 body=1951 status=ok
// SIG undefined FUN_1411c9ac0(void)

undefined8 * FUN_1411c9ac0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong local_48 [2];
  undefined1 local_38 [8];
  longlong *local_30;
  
  FUN_1411c9570();
  *param_1 = &PTR__scalar_deleting_destructor__1446fd8a8;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  *(undefined4 *)(param_1 + 0x51) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x28c) = 0;
  param_1[0x53] = 0;
  *(undefined4 *)(param_1 + 0x55) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x2ac)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x54,0);
  }
  if ((undefined2 *)param_1[0x54] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x54] = 0;
  }
  *(undefined8 *)((longlong)param_1 + 0x28c) = 0;
  *(undefined4 *)(param_1 + 0x51) = 0xffffffff;
  param_1[0x53] = 0;
  *(undefined4 *)(param_1 + 0x55) = 0;
  if ((*(int *)((longlong)param_1 + 0x2ac) < 0) && (*(int *)((longlong)param_1 + 0x2ac) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x54,0);
  }
  if ((undefined2 *)param_1[0x54] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x54] = 0;
  }
  *(undefined4 *)(param_1 + 0x52) = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  *(undefined4 *)(param_1 + 0x56) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2b4) = 0;
  param_1[0x58] = 0;
  *(undefined4 *)(param_1 + 0x5a) = 0;
  if ((*(int *)((longlong)param_1 + 0x2d4) < 0) && (*(int *)((longlong)param_1 + 0x2d4) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x59,0);
  }
  if ((undefined2 *)param_1[0x59] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x59] = 0;
  }
  *(undefined8 *)((longlong)param_1 + 0x2b4) = 0;
  *(undefined4 *)(param_1 + 0x56) = 0xffffffff;
  param_1[0x58] = 0;
  *(undefined4 *)(param_1 + 0x5a) = 0;
  if ((*(int *)((longlong)param_1 + 0x2d4) < 0) && (*(int *)((longlong)param_1 + 0x2d4) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x59,0);
  }
  if ((undefined2 *)param_1[0x59] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x59] = 0;
  }
  *(undefined4 *)(param_1 + 0x57) = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x5b) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2dc) = 0;
  param_1[0x5d] = 0;
  *(undefined4 *)(param_1 + 0x5f) = 0;
  if ((*(int *)((longlong)param_1 + 0x2fc) < 0) && (*(int *)((longlong)param_1 + 0x2fc) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x5e,0);
  }
  if ((undefined2 *)param_1[0x5e] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x5e] = 0;
  }
  *(undefined8 *)((longlong)param_1 + 0x2dc) = 0;
  *(undefined4 *)(param_1 + 0x5b) = 0xffffffff;
  param_1[0x5d] = 0;
  *(undefined4 *)(param_1 + 0x5f) = 0;
  if ((*(int *)((longlong)param_1 + 0x2fc) < 0) && (*(int *)((longlong)param_1 + 0x2fc) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x5e,0);
  }
  if ((undefined2 *)param_1[0x5e] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x5e] = 0;
  }
  *(undefined4 *)(param_1 + 0x5c) = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x304) = 0;
  param_1[0x62] = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  if ((*(int *)((longlong)param_1 + 0x324) < 0) && (*(int *)((longlong)param_1 + 0x324) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 99,0);
  }
  if ((undefined2 *)param_1[99] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[99] = 0;
  }
  *(undefined8 *)((longlong)param_1 + 0x304) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  param_1[0x62] = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  if ((*(int *)((longlong)param_1 + 0x324) < 0) && (*(int *)((longlong)param_1 + 0x324) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 99,0);
  }
  if ((undefined2 *)param_1[99] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[99] = 0;
  }
  *(undefined4 *)(param_1 + 0x61) = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  *(undefined4 *)(param_1 + 0x73) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x39c) = 0;
  param_1[0x75] = 0;
  *(undefined4 *)(param_1 + 0x76) = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  *(undefined4 *)(param_1 + 0x8c) = 6;
  *(undefined1 *)((longlong)param_1 + 0x464) = 1;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4e4) = 0;
  param_1[0x9e] = 0;
  *(undefined4 *)(param_1 + 0x9f) = 0;
  FUN_1411c88f0(param_1 + 0xa0);
  param_1[0x16e] = 0;
  *(undefined4 *)(param_1 + 0x16f) = 0x3cf5c28f;
  *(undefined4 *)((longlong)param_1 + 0xb7c) = 10;
  *(undefined4 *)(param_1 + 0x170) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xb84) = 0x80;
  param_1[0x171] = 0;
  FText::FText(param_1 + 0x172);
  FText::FText(param_1 + 0x175);
  FText::FText(param_1 + 0x178);
  FText::FText(param_1 + 0x17b);
  FText::FText(param_1 + 0x17e);
  FUN_1411c8440(param_1 + 0x181);
  FUN_1411c8440(param_1 + 0x187);
  FUN_1411c8440(param_1 + 0x18d);
  FUN_1411c8440(param_1 + 0x193);
  FUN_1411c8440(param_1 + 0x199);
  FUN_1411c8440(param_1 + 0x19f);
  FUN_1411c8440(param_1 + 0x1a5);
  FUN_1411c8440(param_1 + 0x1ab);
  *(undefined1 *)(param_1 + 0x1b1) = 0;
  param_1[0x1b2] = 0;
  param_1[0x1b3] = 0;
  param_1[0x1b6] = 0;
  param_1[0x1b7] = 0;
  *(undefined4 *)(param_1 + 0x1b8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xdc4) = 0;
  param_1[0x1ba] = 0;
  *(undefined4 *)(param_1 + 0x1bb) = 0;
  param_1[0x1bc] = 0;
  param_1[0x1bd] = 0;
  param_1[0x1c0] = 0;
  param_1[0x1c1] = 0;
  *(undefined4 *)(param_1 + 0x1c2) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xe14) = 0;
  param_1[0x1c4] = 0;
  *(undefined4 *)(param_1 + 0x1c5) = 0;
  *(undefined4 *)(param_1 + 0x1c6) = 0x44bb8000;
  *(undefined4 *)((longlong)param_1 + 0xe34) = 0x461c4000;
  *(undefined4 *)(param_1 + 0x1d7) = 0x3fc00000;
  *(undefined4 *)((longlong)param_1 + 0xebc) = 0x43fa0000;
  *(undefined4 *)(param_1 + 0x1d8) = 0x3f000000;
  *(undefined2 *)((longlong)param_1 + 0xec4) = 0x101;
  param_1[0x1d9] = 0;
  param_1[0x1da] = 0;
  param_1[0x1dd] = 0;
  param_1[0x1de] = 0;
  *(undefined4 *)(param_1 + 0x1df) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xefc) = 0;
  param_1[0x1e1] = 0;
  *(undefined4 *)(param_1 + 0x1e2) = 0;
  param_1[0x1e3] = 0;
  param_1[0x1e4] = 0;
  param_1[0x1e5] = 0;
  FText::FText(param_1 + 0x1eb);
  FText::FText(param_1 + 0x1ee);
  FText::FText(param_1 + 0x1f1);
  FText::FText(param_1 + 500);
  param_1[0x1f8] = 0;
  param_1[0x1f9] = 0;
  param_1[0x1fc] = 0;
  param_1[0x1fd] = 0;
  *(undefined4 *)(param_1 + 0x1fe) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xff4) = 0;
  param_1[0x200] = 0;
  *(undefined4 *)(param_1 + 0x201) = 0;
  param_1[0x202] = 0;
  param_1[0x203] = 0;
  TBitArray<FDefaultBitArrayAllocator>::TBitArray<FDefaultBitArrayAllocator>(param_1 + 0x204,0,0);
  *(undefined4 *)(param_1 + 0x208) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1044) = 0;
  param_1[0x20a] = 0;
  *(undefined4 *)(param_1 + 0x20b) = 0;
  param_1[0x20c] = 0;
  param_1[0x20d] = 0;
  *(undefined4 *)(param_1 + 0x20e) = 0xc1a00000;
  *(undefined4 *)((longlong)param_1 + 0x1074) = 0xc1c00000;
  *(undefined4 *)(param_1 + 0x20f) = 0x3e800000;
  *(undefined4 *)((longlong)param_1 + 0x107c) = 0x3f000000;
  FText::FText(param_1 + 0x210);
  *(undefined1 *)(param_1 + 0x216) = 1;
  param_1[0x219] = 0;
  param_1[0x21a] = 0;
  param_1[0x21b] = 0;
  *(undefined4 *)(param_1 + 0x217) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x10bc) = 0;
  FSoftObjectPath::Reset();
  *(undefined4 *)(param_1 + 0x218) = 0;
  param_1[0x21e] = 0;
  param_1[0x21f] = 0;
  param_1[0x220] = 0;
  *(undefined4 *)(param_1 + 0x21c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x10e4) = 0;
  FSoftObjectPath::Reset();
  *(undefined4 *)(param_1 + 0x21d) = 0;
  param_1[0x221] = 0;
  local_48[0] = 0;
  local_48[1] = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
  FGenericPlatformString::Memcpy(local_48[0],L"[{Speaker}] {Text}",0x26);
  uVar5 = FText::FromString(local_38,local_48);
  FText::operator=(param_1 + 0x210,uVar5);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1411ca260 FUN_1411ca260 body=173 status=ok
// SIG undefined FUN_1411ca260(void)

void FUN_1411ca260(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  lVar5 = *param_1;
  iVar6 = (int)param_1[1];
  if (iVar6 != 0) {
    plVar7 = (longlong *)(lVar5 + 8);
    do {
      if (plVar7[5] != 0) {
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
      plVar7 = plVar7 + 8;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar5 = *param_1;
  }
  if (lVar5 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1411ca310 FUN_1411ca310 body=397 status=ok
// SIG undefined FUN_1411ca310(void)

void FUN_1411ca310(longlong *param_1)

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
      if (bVar4) goto LAB_1411ca3d1;
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
LAB_1411ca3d1:
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
      if (*(longlong *)((longlong)iStack_1c * 0x38 + *param_1 + 0x18) != 0) {
        FMemory::Free();
      }
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
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



// FUNCTION 1411ca4a0 FUN_1411ca4a0 body=111 status=ok
// SIG undefined FUN_1411ca4a0(void)

void FUN_1411ca4a0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x40);
  iVar3 = *(int *)(param_1 + 0x48);
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x20);
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 7;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar1 = *(longlong *)(param_1 + 0x40);
  }
  if (lVar1 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1411ca510 FUN_1411ca510 body=333 status=ok
// SIG undefined FUN_1411ca510(void)

void FUN_1411ca510(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  plVar1 = (longlong *)GetMoviePlayer();
  uVar2 = (**(code **)(*plVar1 + 0x98))(plVar1);
  TBaseMulticastDelegate<void>::Remove(uVar2,*(undefined8 *)(param_1 + 0x28));
  plVar1 = (longlong *)GetMoviePlayer();
  uVar2 = (**(code **)(*plVar1 + 0xe8))(plVar1);
  FUN_140483870(uVar2,param_1);
  plVar1 = (longlong *)GetMoviePlayer();
  uVar2 = (**(code **)(*plVar1 + 0x88))(plVar1);
  TBaseMulticastDelegate<void>::Remove(uVar2,*(undefined8 *)(param_1 + 0xf0));
  plVar1 = (longlong *)GetMoviePlayer();
  uVar2 = (**(code **)(*plVar1 + 0x90))(plVar1);
  TBaseMulticastDelegate<void>::Remove(uVar2,*(undefined8 *)(param_1 + 0xf8));
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x1a8);
  lVar4 = param_1 + 400;
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(lVar4);
  lVar5 = 4;
  lVar3 = 4;
  do {
    plVar1 = (longlong *)(lVar4 + -0x10);
    lVar4 = lVar4 + -0x10;
    lVar3 = lVar3 + -1;
    if (*plVar1 != 0) {
      FMemory::Free();
    }
  } while (lVar3 != 0);
  lVar4 = param_1 + 0x150;
  do {
    plVar1 = (longlong *)(lVar4 + -0x10);
    lVar4 = lVar4 + -0x10;
    lVar5 = lVar5 + -1;
    if (*plVar1 != 0) {
      FMemory::Free();
    }
  } while (lVar5 != 0);
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x70);
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1411ca660 FUN_1411ca660 body=233 status=ok
// SIG undefined FUN_1411ca660(void)

void FUN_1411ca660(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  TArray<FInAppPurchaseRestoreInfo,FDefaultAllocator>::
  ~TArray<FInAppPurchaseRestoreInfo,FDefaultAllocator>(param_1 + 0x14);
  if (param_1[0x12] != 0) {
    FMemory::Free();
  }
  iVar2 = (int)param_1[0x11];
  plVar1 = (longlong *)param_1[0x10];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_1[0x10];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  if (param_1[0xe] != 0) {
    FMemory::Free();
  }
  if (param_1[0xc] != 0) {
    FMemory::Free();
  }
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1411ca750 FUN_1411ca750 body=391 status=ok
// SIG undefined FUN_1411ca750(void)

void FUN_1411ca750(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x150);
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
  FSlateBrush::~FSlateBrush(param_1 + 0xb0);
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
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
  plVar4 = *(longlong **)(param_1 + 0x20);
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
  plVar4 = *(longlong **)(param_1 + 8);
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



// FUNCTION 1411ca8e0 FUN_1411ca8e0 body=509 status=ok
// SIG undefined FUN_1411ca8e0(void)

void FUN_1411ca8e0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x280) = 0;
  if (*(longlong *)(param_1 + 0x278) != 0) {
    FMemory::Free();
  }
  FUN_1411dd920(param_1 + 0x238,0);
  if (*(longlong *)(param_1 + 600) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x238) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x230) = 0;
  if (*(longlong *)(param_1 + 0x228) != 0) {
    FMemory::Free();
  }
  FUN_1411ddb20(param_1 + 0x1e8,0);
  if (*(longlong *)(param_1 + 0x208) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1e8) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  if (*(longlong *)(param_1 + 0x1d8) != 0) {
    FMemory::Free();
  }
  FUN_1411ddd20(param_1 + 0x198,0);
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FMemory::Free();
  }
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(param_1 + 0x180);
  if (*(longlong *)(param_1 + 0x170) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x168) = 0;
  if (*(longlong *)(param_1 + 0x160) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FText>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x120,0);
  if (*(longlong *)(param_1 + 0x140) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x120) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0xf0) = 0;
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FResourceTableEntry>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0xa8,0);
  if (*(longlong *)(param_1 + 200) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  return;
}



// FUNCTION 1411caae0 FUN_1411caae0 body=1219 status=ok
// SIG undefined FUN_1411caae0(void)

void FUN_1411caae0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x10f8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x10d0) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x1088);
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
  if (*(longlong *)(param_1 + 0x1060) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x1058) = 0;
  if (*(longlong *)(param_1 + 0x1050) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x1010);
  *(undefined4 *)(param_1 + 0x1008) = 0;
  if (*(longlong *)(param_1 + 0x1000) != 0) {
    FMemory::Free();
  }
  FUN_1411de100(param_1 + 0xfc0,0);
  if (*(longlong *)(param_1 + 0xfe0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xfc0) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0xfa8);
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
  plVar4 = *(longlong **)(param_1 + 0xf90);
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
  plVar4 = *(longlong **)(param_1 + 0xf78);
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
  plVar4 = *(longlong **)(param_1 + 0xf60);
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
  *(undefined4 *)(param_1 + 0xf10) = 0;
  if (*(longlong *)(param_1 + 0xf08) != 0) {
    FMemory::Free();
  }
  FUN_1411de100(param_1 + 0xec8,0);
  if (*(longlong *)(param_1 + 0xee8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xec8) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0xe28) = 0;
  if (*(longlong *)(param_1 + 0xe20) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xde0);
  *(undefined4 *)(param_1 + 0xdd8) = 0;
  if (*(longlong *)(param_1 + 0xdd0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xd90);
  plVar4 = *(longlong **)(param_1 + 0xbf8);
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
  plVar4 = *(longlong **)(param_1 + 0xbe0);
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
  plVar4 = *(longlong **)(param_1 + 0xbc8);
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
  plVar4 = *(longlong **)(param_1 + 0xbb0);
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
  plVar4 = *(longlong **)(param_1 + 0xb98);
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
  if (*(longlong *)(param_1 + 0xb58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x548) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x4f8) = 0;
  if (*(longlong *)(param_1 + 0x4f0) != 0) {
    FMemory::Free();
  }
  FUN_1411dd740(param_1 + 0x4b0,0);
  if (*(longlong *)(param_1 + 0x4d0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4b0) != 0) {
    FMemory::Free();
  }
  TArray<FAnimNode_SaveCachedPose::FCachedUpdateContext,TSizedDefaultAllocator<32>_>::
  ~TArray<FAnimNode_SaveCachedPose::FCachedUpdateContext,TSizedDefaultAllocator<32>_>
            (param_1 + 0x468);
  FUN_1411ca260(param_1 + 0x438);
  FUN_1411ca260(param_1 + 0x428);
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(param_1 + 0x418);
  if (*(longlong *)(param_1 + 0x400) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x3b0) = 0;
  if (*(longlong *)(param_1 + 0x3a8) != 0) {
    FMemory::Free();
  }
  FUN_1411ca310(param_1 + 0x368);
  if (*(longlong *)(param_1 + 0x318) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2f0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2c8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2a0) != 0) {
    FMemory::Free();
  }
  FUN_1411ca8e0(param_1);
  return;
}



// FUNCTION 1411cafb0 FUN_1411cafb0 body=510 status=ok
// SIG undefined FUN_1411cafb0(void)

undefined8 * FUN_1411cafb0(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined8 local_58;
  undefined1 local_50 [24];
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  local_58 = param_2[3];
  FString::FString(local_50,param_2 + 4);
  FSoftObjectPath::operator=(param_1 + 3,&local_58);
  plVar1 = param_1 + 7;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
  if (plVar1 != param_2 + 7) {
    iVar4 = *(int *)(param_1 + 8);
    if (iVar4 != 0) {
      plVar3 = (longlong *)(*plVar1 + 0x20);
      do {
        if (*plVar3 != 0) {
          FMemory::Free();
        }
        plVar3 = plVar3 + 7;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    iVar4 = *(int *)(param_2 + 8);
    lVar2 = param_2[7];
    *(int *)(param_1 + 8) = iVar4;
    if ((iVar4 == 0) && (*(int *)((longlong)param_1 + 0x44) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x44) = 0;
    }
    else {
      TArray<FFullyLoadedPackagesInfo,FDefaultAllocator>::ResizeForCopy(plVar1,iVar4);
      puVar6 = (undefined8 *)*plVar1;
      if (iVar4 != 0) {
        puVar5 = puVar6 + 5;
        puVar7 = (undefined4 *)(lVar2 + 0xc);
        do {
          *puVar6 = *(undefined8 *)(puVar7 + -3);
          puVar5[-1] = 0;
          *puVar5 = 0;
          *(undefined4 *)(puVar5 + -4) = 0xffffffff;
          *(undefined4 *)((longlong)puVar5 + -0x1c) = 0;
          puVar5[-2] = 0;
          *(undefined4 *)puVar5 = 0;
          if (0x7fffffff < *(uint *)((longlong)puVar5 + 4)) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar5 + -1,0);
          }
          if ((undefined2 *)puVar5[-1] != (undefined2 *)0x0) {
            *(undefined2 *)puVar5[-1] = 0;
          }
          *(undefined4 *)(puVar5 + -3) = 0;
          *(undefined4 *)(puVar5 + -4) = puVar7[-1];
          *(undefined4 *)((longlong)puVar5 + -0x1c) = *puVar7;
          *(undefined4 *)(puVar5 + -3) = puVar7[1];
          local_58 = *(undefined8 *)(puVar7 + 3);
          FString::FString(local_50,puVar7 + 5);
          FSoftObjectPath::operator=(puVar5 + -2);
          puVar6 = puVar6 + 7;
          *(undefined4 *)(puVar5 + 1) = puVar7[9];
          puVar7 = puVar7 + 0xe;
          puVar5 = puVar5 + 7;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
  }
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  *(undefined1 *)((longlong)param_1 + 0x49) = *(undefined1 *)((longlong)param_2 + 0x49);
  *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x4c);
  param_1[10] = param_2[10];
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  return param_1;
}



// FUNCTION 1411cb1b0 FUN_1411cb1b0 body=285 status=ok
// SIG undefined FUN_1411cb1b0(void)

undefined1 * FUN_1411cb1b0(undefined1 *param_1,undefined1 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)(param_1 + 0x10);
  if ((longlong *)(param_2 + 0x10) != plVar1) {
    if ((*(int *)(param_2 + 0x18) == 0) ||
       (plVar2 = *(longlong **)(param_2 + 0x10), plVar2 == (longlong *)0x0)) {
      if ((*(int *)(param_1 + 0x18) != 0) &&
         (plVar2 = (longlong *)*plVar1, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x28))(plVar2,0);
        if (*plVar1 != 0) {
          lVar3 = FMemory::Realloc(*plVar1,0,0);
          *plVar1 = lVar3;
        }
        *(undefined4 *)(param_1 + 0x18) = 0;
      }
    }
    else {
      (**(code **)(*plVar2 + 0x30))(plVar2,plVar1);
    }
  }
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x20,param_2 + 0x20);
  plVar1 = (longlong *)(param_1 + 0x30);
  if ((longlong *)(param_2 + 0x30) != plVar1) {
    if ((*(int *)(param_2 + 0x38) == 0) ||
       (plVar2 = *(longlong **)(param_2 + 0x30), plVar2 == (longlong *)0x0)) {
      if ((*(int *)(param_1 + 0x38) != 0) &&
         (plVar2 = (longlong *)*plVar1, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x28))(plVar2,0);
        if (*plVar1 != 0) {
          lVar3 = FMemory::Realloc(*plVar1,0,0);
          *plVar1 = lVar3;
        }
        *(undefined4 *)(param_1 + 0x38) = 0;
      }
    }
    else {
      (**(code **)(*plVar2 + 0x30))(plVar2,plVar1);
    }
  }
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  param_1[0x48] = param_2[0x48];
  param_1[0x49] = param_2[0x49];
  param_1[0x4a] = param_2[0x4a];
  param_1[0x4b] = param_2[0x4b];
  param_1[0x4c] = param_2[0x4c];
  return param_1;
}



// FUNCTION 1411cb2d0 FUN_1411cb2d0 body=360 status=ok
// SIG undefined FUN_1411cb2d0(void)

undefined1 * FUN_1411cb2d0(undefined1 *param_1,undefined1 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)(param_1 + 0x10);
  if ((longlong *)(param_2 + 0x10) != plVar1) {
    if ((*(int *)(param_2 + 0x18) == 0) ||
       (plVar2 = *(longlong **)(param_2 + 0x10), plVar2 == (longlong *)0x0)) {
      if ((*(int *)(param_1 + 0x18) != 0) &&
         (plVar2 = (longlong *)*plVar1, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x28))(plVar2,0);
        if (*plVar1 != 0) {
          lVar3 = FMemory::Realloc(*plVar1,0,0);
          *plVar1 = lVar3;
        }
        *(undefined4 *)(param_1 + 0x18) = 0;
      }
    }
    else {
      (**(code **)(*plVar2 + 0x30))(plVar2,plVar1);
    }
  }
  plVar1 = (longlong *)(param_1 + 0x20);
  if ((longlong *)(param_2 + 0x20) != plVar1) {
    if ((*(int *)(param_2 + 0x28) == 0) ||
       (plVar2 = *(longlong **)(param_2 + 0x20), plVar2 == (longlong *)0x0)) {
      if ((*(int *)(param_1 + 0x28) != 0) &&
         (plVar2 = (longlong *)*plVar1, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x28))(plVar2,0);
        if (*plVar1 != 0) {
          lVar3 = FMemory::Realloc(*plVar1,0,0);
          *plVar1 = lVar3;
        }
        *(undefined4 *)(param_1 + 0x28) = 0;
      }
    }
    else {
      (**(code **)(*plVar2 + 0x30))(plVar2,plVar1);
    }
  }
  plVar1 = (longlong *)(param_1 + 0x30);
  if ((longlong *)(param_2 + 0x30) != plVar1) {
    if ((*(int *)(param_2 + 0x38) == 0) ||
       (plVar2 = *(longlong **)(param_2 + 0x30), plVar2 == (longlong *)0x0)) {
      if ((*(int *)(param_1 + 0x38) != 0) &&
         (plVar2 = (longlong *)*plVar1, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x28))(plVar2,0);
        if (*plVar1 != 0) {
          lVar3 = FMemory::Realloc(*plVar1,0,0);
          *plVar1 = lVar3;
        }
        *(undefined4 *)(param_1 + 0x38) = 0;
      }
    }
    else {
      (**(code **)(*plVar2 + 0x30))(plVar2,plVar1);
    }
  }
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  param_1[0x48] = param_2[0x48];
  param_1[0x49] = param_2[0x49];
  param_1[0x4a] = param_2[0x4a];
  param_1[0x4b] = param_2[0x4b];
  param_1[0x4c] = param_2[0x4c];
  return param_1;
}



// FUNCTION 1411cb440 FUN_1411cb440 body=181 status=ok
// SIG undefined FUN_1411cb440(void)

undefined8 * FUN_1411cb440(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  
  if (param_2 != param_1) {
    *param_1 = 0xffffffffffffffff;
    *(undefined4 *)(param_1 + 1) = 0xffffffff;
  }
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_1[2] = param_2[2];
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  *(byte *)((longlong)param_1 + 0x29) =
       *(byte *)((longlong)param_1 + 0x29) ^
       (*(byte *)((longlong)param_1 + 0x29) ^ *(byte *)((longlong)param_2 + 0x29)) & 1;
  bVar1 = (*(byte *)((longlong)param_2 + 0x29) ^ *(byte *)((longlong)param_1 + 0x29)) & 2 ^
          *(byte *)((longlong)param_1 + 0x29);
  *(byte *)((longlong)param_1 + 0x29) = bVar1;
  bVar1 = (*(byte *)((longlong)param_2 + 0x29) ^ bVar1) & 4 ^ bVar1;
  *(byte *)((longlong)param_1 + 0x29) = bVar1;
  *(byte *)((longlong)param_1 + 0x29) = (*(byte *)((longlong)param_2 + 0x29) ^ bVar1) & 8 ^ bVar1;
  *(undefined8 *)((longlong)param_1 + 0x2c) = *(undefined8 *)((longlong)param_2 + 0x2c);
  *(undefined1 *)((longlong)param_1 + 0x34) = *(undefined1 *)((longlong)param_2 + 0x34);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(byte *)((longlong)param_1 + 0x3c) =
       *(byte *)((longlong)param_1 + 0x3c) ^
       (*(byte *)((longlong)param_1 + 0x3c) ^ *(byte *)((longlong)param_2 + 0x3c)) & 1;
  *(byte *)((longlong)param_1 + 0x3c) =
       *(byte *)((longlong)param_1 + 0x3c) ^
       (*(byte *)((longlong)param_1 + 0x3c) ^ *(byte *)((longlong)param_2 + 0x3c)) & 2;
  return param_1;
}



// FUNCTION 1411cb500 FUN_1411cb500 body=297 status=ok
// SIG undefined FUN_1411cb500(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1411cb500(longlong param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  undefined8 local_30;
  longlong *plStack_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  uVar8 = FUN_1416f8720(*param_2);
  FUN_14170c210(param_1,uVar8);
  uVar8 = FUN_1416f8720(param_2[1]);
  FUN_14170c210(param_1 + 4,uVar8);
  plVar5 = *(longlong **)(param_2 + 4);
  puVar1 = (undefined8 *)(param_1 + 8);
  uVar8 = *(undefined8 *)(param_2 + 2);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_48 = uVar8;
  plStack_40 = plVar5;
  if (&local_48 != puVar1) {
    local_48 = *puVar1;
    plStack_40 = *(longlong **)(param_1 + 0x10);
    *puVar1 = uVar8;
    *(longlong **)(param_1 + 0x10) = plVar5;
    local_30 = uVar8;
    plStack_28 = plVar5;
  }
  plVar5 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_40 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x18) = param_2[6];
  lVar7 = *(longlong *)(param_2 + 8);
  lVar6 = *(longlong *)(param_1 + 0x20);
  *(longlong *)(param_1 + 0x20) = lVar7;
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 0x48) = *(int *)(lVar7 + 0x48) + 1;
    UNLOCK();
  }
  if (lVar6 != 0) {
    LOCK();
    piVar3 = (int *)(lVar6 + 0x48);
    iVar4 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      FGraphEvent::Recycle();
    }
  }
  return param_1;
}



// FUNCTION 1411cb630 FUN_1411cb630 body=755 status=ok
// SIG undefined FUN_1411cb630(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1411cb630(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined1 auStack_758 [32];
  undefined8 local_738;
  undefined4 local_730;
  undefined4 local_72c;
  undefined4 local_728;
  undefined8 local_720;
  longlong local_718 [2];
  undefined4 local_708;
  undefined4 local_704;
  undefined8 local_700;
  longlong *local_6f8;
  int local_6f0;
  longlong local_6e8;
  undefined8 local_6e0;
  undefined1 local_6d8 [16];
  undefined8 local_6c8;
  undefined1 local_6c0 [24];
  undefined1 local_6a8 [72];
  longlong local_660;
  longlong local_60;
  longlong local_50;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_758;
  AcquireSRWLockShared((PSRWLOCK)(param_2 + 8));
  uVar6 = FWeakObjectPtr::Get(param_2);
  ReleaseSRWLockShared((PSRWLOCK)(param_2 + 8));
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 8));
  FWeakObjectPtr::operator=(param_1,uVar6);
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 8));
  AcquireSRWLockShared((PSRWLOCK)(param_2 + 0x38));
  local_718[0] = 0;
  local_720 = 0;
  local_730 = *(undefined4 *)(param_2 + 0x10);
  local_72c = *(undefined4 *)(param_2 + 0x14);
  local_728 = *(undefined4 *)(param_2 + 0x18);
  local_6e0 = *(undefined8 *)(param_2 + 0x20);
  local_718[1] = 0;
  local_738 = 0;
  FString::FString(local_6d8,param_2 + 0x28);
  FSoftObjectPath::operator=(&local_720,&local_6e0);
  ReleaseSRWLockShared((PSRWLOCK)(param_2 + 0x38));
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x38));
  *(undefined4 *)(param_1 + 0x10) = local_730;
  *(undefined4 *)(param_1 + 0x14) = local_72c;
  *(undefined4 *)(param_1 + 0x18) = local_728;
  local_6c8 = local_720;
  FString::FString(local_6c0,local_718);
  FSoftObjectPath::operator=(param_1 + 0x20,&local_6c8);
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x38));
  if (local_718[0] != 0) {
    FMemory::Free();
  }
  AcquireSRWLockShared((PSRWLOCK)(param_2 + 0x80));
  local_708 = 0xffffffff;
  uVar6 = FUN_1416f8720(*(undefined4 *)(param_2 + 0x58));
  FUN_14170c210(&local_708,uVar6);
  local_704 = 0xffffffff;
  uVar6 = FUN_1416f8720(*(undefined4 *)(param_2 + 0x5c));
  FUN_14170c210(&local_704,uVar6);
  local_700 = *(undefined8 *)(param_2 + 0x60);
  local_6f8 = *(longlong **)(param_2 + 0x68);
  if (local_6f8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_6f8 + 1) = (int)local_6f8[1] + 1;
    UNLOCK();
  }
  local_6f0 = *(int *)(param_2 + 0x70);
  local_6e8 = *(longlong *)(param_2 + 0x78);
  if (local_6e8 != 0) {
    LOCK();
    *(int *)(local_6e8 + 0x48) = *(int *)(local_6e8 + 0x48) + 1;
    UNLOCK();
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_2 + 0x80));
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x80));
  FUN_1411cb500(param_1 + 0x58,&local_708);
  LOCK();
  *(uint *)(param_1 + 0x708) = (uint)(local_6f0 != -1);
  UNLOCK();
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x80));
  if (local_6e8 != 0) {
    LOCK();
    piVar1 = (int *)(local_6e8 + 0x48);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      FGraphEvent::Recycle();
    }
  }
  plVar5 = local_6f8;
  if (local_6f8 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_6f8 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_6f8)(local_6f8);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  FUN_1416f8340(local_704);
  FUN_1416f8340(local_708);
  uVar6 = FUN_1411e6780(param_2,local_6a8);
  FUN_1411fa9f0(param_1,uVar6);
  if (local_50 != 0) {
    FMemory::Free();
  }
  if (local_60 != 0) {
    FMemory::Free();
  }
  if (local_660 != 0) {
    FMemory::Free();
  }
  LOCK();
  bVar7 = *(int *)(param_2 + 0x70c) == 0;
  if (bVar7) {
    *(int *)(param_2 + 0x70c) = 0;
  }
  UNLOCK();
  LOCK();
  *(uint *)(param_1 + 0x70c) = (uint)!bVar7;
  UNLOCK();
  LOCK();
  bVar7 = *(int *)(param_2 + 0x708) == 0;
  if (bVar7) {
    *(int *)(param_2 + 0x708) = 0;
  }
  UNLOCK();
  LOCK();
  *(uint *)(param_1 + 0x708) = (uint)!bVar7;
  UNLOCK();
  return param_1;
}



// FUNCTION 1411cb930 FUN_1411cb930 body=586 status=ok
// SIG undefined FUN_1411cb930(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1411cb930(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  longlong *plStack_90;
  undefined8 local_88;
  longlong *plStack_80;
  undefined8 local_78;
  longlong *plStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  longlong *plStack_50;
  undefined8 local_48;
  longlong *plStack_40;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  local_a8 = *param_2;
  uStack_a0 = (longlong *)param_2[1];
  if (uStack_a0 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_a0 + 1) = (int)uStack_a0[1] + 1;
    UNLOCK();
  }
  if (&local_a8 != param_1) {
    local_a8._4_4_ = (undefined4)((ulonglong)local_a8 >> 0x20);
    uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
    uVar6 = *param_1;
    plVar5 = (longlong *)param_1[1];
    local_68 = (undefined4)local_a8;
    uStack_64 = local_a8._4_4_;
    uStack_60 = (undefined4)uStack_a0;
    uStack_5c = uStack_a0._4_4_;
    *(undefined4 *)param_1 = (undefined4)local_a8;
    *(undefined4 *)((longlong)param_1 + 4) = local_a8._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_a0;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_a0._4_4_;
    local_a8 = uVar6;
    uStack_a0 = plVar5;
  }
  plVar5 = uStack_a0;
  if (uStack_a0 != (longlong *)0x0) {
    LOCK();
    plVar1 = uStack_a0 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*uStack_a0)(uStack_a0);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*uStack_a0 + 8))(uStack_a0,1);
      }
    }
  }
  plVar5 = (longlong *)param_2[3];
  puVar3 = param_1 + 2;
  uVar6 = param_2[2];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_98 = uVar6;
  plStack_90 = plVar5;
  if (&local_98 != puVar3) {
    local_98 = *puVar3;
    plStack_90 = (longlong *)param_1[3];
    *puVar3 = uVar6;
    param_1[3] = plVar5;
    local_58 = uVar6;
    plStack_50 = plVar5;
  }
  plVar5 = plStack_90;
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_90 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_90)(plStack_90);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_90 + 8))(plStack_90,1);
      }
    }
  }
  plVar5 = (longlong *)param_2[5];
  puVar3 = param_1 + 4;
  uVar6 = param_2[4];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_88 = uVar6;
  plStack_80 = plVar5;
  if (&local_88 != puVar3) {
    local_88 = *puVar3;
    plStack_80 = (longlong *)param_1[5];
    *puVar3 = uVar6;
    param_1[5] = plVar5;
    local_48 = uVar6;
    plStack_40 = plVar5;
  }
  plVar5 = plStack_80;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_80 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_80)(plStack_80);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_80 + 8))(plStack_80,1);
      }
    }
  }
  plVar5 = (longlong *)param_2[7];
  puVar3 = param_1 + 6;
  uVar6 = param_2[6];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_78 = uVar6;
  plStack_70 = plVar5;
  if (&local_78 != puVar3) {
    local_78 = *puVar3;
    plStack_70 = (longlong *)param_1[7];
    *puVar3 = uVar6;
    param_1[7] = plVar5;
    local_38 = uVar6;
    plStack_30 = plVar5;
  }
  plVar5 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_70 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_70 + 8))(plStack_70,1);
      }
    }
  }
  FString::operator=(param_1 + 8,param_2 + 8);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  return param_1;
}



// FUNCTION 1411cbb80 FUN_1411cbb80 body=768 status=ok
// SIG undefined FUN_1411cbb80(void)

longlong * FUN_1411cbb80(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FMemory::Free();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  plVar1 = param_2 + 2;
  plVar2 = param_1 + 2;
  if (plVar2 != plVar1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_1 + 3) = (int)param_2[3];
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
    param_2[3] = 0;
  }
  plVar1 = param_2 + 4;
  plVar2 = param_1 + 4;
  if (plVar2 != plVar1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
  }
  plVar1 = param_2 + 6;
  plVar2 = param_1 + 6;
  if (plVar2 != plVar1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_1 + 7) = (int)param_2[7];
    *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
    param_2[7] = 0;
  }
  plVar1 = param_2 + 8;
  plVar2 = param_1 + 8;
  if (plVar2 != plVar1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_1 + 9) = (int)param_2[9];
    *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x4c);
    param_2[9] = 0;
  }
  plVar1 = param_2 + 10;
  plVar2 = param_1 + 10;
  if (plVar2 != plVar1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_1 + 0xb) = (int)param_2[0xb];
    *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)((longlong)param_2 + 0x5c);
    param_2[0xb] = 0;
  }
  plVar1 = param_2 + 0xc;
  plVar2 = param_1 + 0xc;
  if (plVar2 != plVar1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_1 + 0xd) = (int)param_2[0xd];
    *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)((longlong)param_2 + 0x6c);
    param_2[0xd] = 0;
  }
  plVar1 = param_2 + 0xe;
  plVar2 = param_1 + 0xe;
  if (plVar2 != plVar1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_1 + 0xf) = (int)param_2[0xf];
    *(undefined4 *)((longlong)param_1 + 0x7c) = *(undefined4 *)((longlong)param_2 + 0x7c);
    param_2[0xf] = 0;
  }
  plVar1 = param_2 + 0x10;
  plVar2 = param_1 + 0x10;
  if (plVar2 != plVar1) {
    plVar3 = (longlong *)*plVar2;
    iVar4 = (int)param_1[0x11];
    if (iVar4 != 0) {
      do {
        if (*plVar3 != 0) {
          FMemory::Free();
        }
        plVar3 = plVar3 + 2;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      plVar3 = (longlong *)*plVar2;
    }
    if (plVar3 != (longlong *)0x0) {
      FMemory::Free(plVar3);
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_1 + 0x11) = (int)param_2[0x11];
    *(undefined4 *)((longlong)param_1 + 0x8c) = *(undefined4 *)((longlong)param_2 + 0x8c);
    param_2[0x11] = 0;
  }
  plVar1 = param_2 + 0x12;
  plVar2 = param_1 + 0x12;
  if (plVar2 != plVar1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_1 + 0x13) = (int)param_2[0x13];
    *(undefined4 *)((longlong)param_1 + 0x9c) = *(undefined4 *)((longlong)param_2 + 0x9c);
    param_2[0x13] = 0;
  }
  plVar1 = param_2 + 0x14;
  plVar2 = param_1 + 0x14;
  if (plVar2 != plVar1) {
    iVar4 = (int)param_1[0x15];
    plVar3 = (longlong *)*plVar2;
    if (iVar4 != 0) {
      do {
        if (plVar3[4] != 0) {
          FMemory::Free();
        }
        if (plVar3[2] != 0) {
          FMemory::Free();
        }
        if (*plVar3 != 0) {
          FMemory::Free();
        }
        plVar3 = plVar3 + 6;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      plVar3 = (longlong *)*plVar2;
    }
    if (plVar3 != (longlong *)0x0) {
      FMemory::Free(plVar3);
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_1 + 0x15) = (int)param_2[0x15];
    *(undefined4 *)((longlong)param_1 + 0xac) = *(undefined4 *)((longlong)param_2 + 0xac);
    param_2[0x15] = 0;
  }
  return param_1;
}



// FUNCTION 1411cbe80 FUN_1411cbe80 body=302 status=ok
// SIG undefined FUN_1411cbe80(void)

longlong FUN_1411cbe80(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  
  FString::operator=();
  FString::operator=(param_1 + 0x10,param_2 + 0x10);
  FString::operator=(param_1 + 0x20,param_2 + 0x20);
  FString::operator=(param_1 + 0x30,param_2 + 0x30);
  FString::operator=(param_1 + 0x40,param_2 + 0x40);
  FString::operator=(param_1 + 0x50,param_2 + 0x50);
  FString::operator=(param_1 + 0x60,param_2 + 0x60);
  FString::operator=(param_1 + 0x70,param_2 + 0x70);
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=(param_1 + 0x80,param_2 + 0x80);
  FString::operator=(param_1 + 0x90,param_2 + 0x90);
  puVar1 = (undefined8 *)(param_1 + 0xa0);
  if (puVar1 != (undefined8 *)(param_2 + 0xa0)) {
    plVar2 = (longlong *)*puVar1;
    for (iVar3 = *(int *)(param_1 + 0xa8); iVar3 != 0; iVar3 = iVar3 + -1) {
      if (plVar2[4] != 0) {
        FMemory::Free();
      }
      if (plVar2[2] != 0) {
        FMemory::Free();
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 6;
    }
    FUN_1411c0300(puVar1,*(undefined8 *)(param_2 + 0xa0),*(undefined4 *)(param_2 + 0xa8),
                  *(undefined4 *)(param_1 + 0xac),0);
  }
  return param_1;
}



// FUNCTION 1411cbfb0 FUN_1411cbfb0 body=404 status=ok
// SIG undefined FUN_1411cbfb0(void)

longlong FUN_1411cbfb0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  FText::operator=();
  FText::operator=(param_1 + 0x18,param_2 + 0x18);
  FText::operator=(param_1 + 0x30,param_2 + 0x30);
  FText::operator=(param_1 + 0x48,param_2 + 0x48);
  FText::operator=(param_1 + 0x60,param_2 + 0x60);
  plVar1 = (longlong *)(param_2 + 0x78);
  plVar2 = (longlong *)(param_1 + 0x78);
  if (plVar2 != plVar1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_2 + 0x84);
    *(undefined8 *)(param_2 + 0x80) = 0;
  }
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  *(undefined1 *)(param_1 + 0x98) = *(undefined1 *)(param_2 + 0x98);
  *(undefined1 *)(param_1 + 0x99) = *(undefined1 *)(param_2 + 0x99);
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_2 + 0x9c);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined1 *)(param_1 + 0xa4) = *(undefined1 *)(param_2 + 0xa4);
  *(undefined1 *)(param_1 + 0xa5) = *(undefined1 *)(param_2 + 0xa5);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
  FUN_1406922e0(param_1 + 0xb0,param_2 + 0xb0);
  puVar3 = (undefined8 *)(param_2 + 0x148);
  *(undefined1 *)(param_1 + 0x138) = *(undefined1 *)(param_2 + 0x138);
  *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_2 + 0x140);
  if ((undefined8 *)(param_1 + 0x148) != puVar3) {
    *(undefined8 *)(param_1 + 0x148) = *puVar3;
    *puVar3 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x150,param_2 + 0x150);
  }
  *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_2 + 0x158);
  *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(param_2 + 0x160);
  return param_1;
}



// FUNCTION 1411cc150 FUN_1411cc150 body=445 status=ok
// SIG undefined FUN_1411cc150(void)

void FUN_1411cc150(longlong *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  longlong *local_38;
  int local_30;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(&local_res10);
    iVar1 = *(int *)(lVar4 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar8 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar8;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar8) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((((*(uint *)(lVar4 + 8) & 0x30000000) == 0) && (lVar4 = FUN_140eccb70(*param_1), lVar4 != 0)
        ) && (plVar5 = (longlong *)FUN_140bba5e0(lVar4), plVar5 != (longlong *)0x0)) {
      lVar4 = *param_1;
      local_28 = FUN_1411f03d0;
      uStack_20 = 0;
      local_38 = (longlong *)0x0;
      plVar6 = (longlong *)FMemory::Realloc(0,0x30);
      local_30 = 3;
      local_38 = plVar6;
      if (plVar6 != (longlong *)0x0) {
        *plVar6 = (longlong)&PTR_FUN_1442cc120;
        FWeakObjectPtr::operator=(plVar6 + 1,lVar4);
        *(undefined4 *)(plVar6 + 2) = (undefined4)local_28;
        *(undefined4 *)((longlong)plVar6 + 0x14) = local_28._4_4_;
        *(undefined4 *)(plVar6 + 3) = uStack_20;
        *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_1c;
        lVar4 = FDelegateHandle::GenerateNewID();
        plVar6[5] = lVar4;
        *plVar6 = (longlong)&PTR_FUN_1442cc168;
      }
      puVar7 = (undefined8 *)(**(code **)(*plVar5 + 0xa0))(plVar5,local_res8,&local_38);
      *(undefined8 *)(*param_1 + 0x388) = *puVar7;
      if (local_30 != 0) {
        if (local_38 == (longlong *)0x0) {
          return;
        }
        (**(code **)(*local_38 + 0x28))(local_38,0);
        if (local_38 != (longlong *)0x0) {
          local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
        }
        local_30 = 0;
      }
      if (local_38 != (longlong *)0x0) {
        FMemory::Free(local_38);
      }
    }
  }
  return;
}



// FUNCTION 1411cc310 FUN_1411cc310 body=701 status=ok
// SIG undefined FUN_1411cc310(void)

void FUN_1411cc310(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  undefined1 uVar7;
  uint uVar8;
  undefined4 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  uint uVar14;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  longlong local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined **local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar6 = FWeakObjectPtr::IsValid(&local_res10);
  lVar12 = 0;
  if (cVar6 != '\0') {
    lVar10 = FWeakObjectPtr::Get(&local_res10);
    iVar4 = *(int *)(lVar10 + 0xc);
    if (iVar4 < (int)DAT_1469e91c4) {
      uVar14 = iVar4 >> 0x1f & 0xffff;
      uVar8 = iVar4 + uVar14;
      lVar12 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
               (longlong)(int)((uVar8 & 0xffff) - uVar14) * 0x18;
    }
    if ((*(uint *)(lVar12 + 8) & 0x30000000) == 0) {
      bVar5 = true;
      goto LAB_1411cc39e;
    }
  }
  bVar5 = false;
LAB_1411cc39e:
  if (!bVar5) {
    return;
  }
  if (*(longlong *)(*param_1 + 0x148) == 0) {
    return;
  }
  cVar6 = FWeakObjectPtr::IsValid(*param_1 + 0x140);
  if (cVar6 == '\0') {
    return;
  }
  lVar12 = *param_1;
  local_68 = *(undefined8 *)(lVar12 + 0x148);
  local_60 = *(longlong *)(lVar12 + 0x150);
  if (local_60 != 0) {
    LOCK();
    *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
    UNLOCK();
    lVar12 = *param_1;
  }
  uVar11 = FWeakObjectPtr::Get(lVar12 + 0x140);
  lVar12 = FUN_14244c070(uVar11,&local_68);
  if (lVar12 == 0) {
    lVar12 = FUN_1411e2320(*param_1);
    if (lVar12 == 0) {
      return;
    }
    local_40 = *(undefined8 *)(*param_1 + 0x148);
    local_38 = *(longlong *)(*param_1 + 0x150);
    if (local_38 != 0) {
      LOCK();
      *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
      UNLOCK();
    }
    local_30 = 0;
    local_48 = &PTR_FUN_143f740c8;
    local_28 = 0;
    puVar13 = (undefined8 *)FUN_140d80730(lVar12,local_58,&local_48);
    local_70 = (longlong *)puVar13[1];
    local_78 = *puVar13;
    if (local_70 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_70 + 1) = (int)local_70[1] + 1;
      UNLOCK();
    }
    lVar12 = *param_1;
    puVar13 = (undefined8 *)(lVar12 + 0x178);
    if (puVar13 != &local_78) {
      *puVar13 = local_78;
      local_78 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(lVar12 + 0x180,&local_70);
    }
    plVar3 = local_70;
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_70 + 1;
      lVar12 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_70 + 8))(local_70,1);
        }
      }
    }
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_50 + 1;
      lVar12 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)local_50 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
    FUN_1404bf980(&local_48);
    lVar12 = *param_1;
    lVar10 = *(longlong *)(lVar12 + 0x178);
    if (lVar10 == 0) {
      uVar7 = 0;
      uVar9 = 0;
    }
    else {
      uVar7 = *(undefined1 *)(lVar10 + 0x81);
      uVar9 = *(undefined4 *)(lVar10 + 0x84);
    }
  }
  else {
    lVar12 = *(longlong *)(lVar12 + 0x30);
    if (lVar12 == 0) {
      return;
    }
    lVar10 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8
         ) != lVar10 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) {
      return;
    }
    uVar9 = FUN_140cfd6b0(lVar12);
    uVar7 = SVirtualWindow::SupportsKeyboardFocus(lVar12);
    lVar12 = *param_1;
  }
  FUN_1411f7d30(lVar12,uVar9,uVar7);
  return;
}



// FUNCTION 1411cc5d0 FUN_1411cc5d0 body=418 status=ok
// SIG undefined FUN_1411cc5d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411cc5d0(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  PSRWLOCK SRWLock;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_6e8 [40];
  undefined4 local_6c0;
  undefined4 local_6bc;
  longlong *local_6b0;
  longlong local_6a0;
  undefined1 local_698 [72];
  longlong local_650;
  longlong local_50;
  longlong local_40;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_6e8;
  lVar7 = param_1[1];
  AcquireSRWLockShared((PSRWLOCK)(lVar7 + 8));
  uVar5 = FWeakObjectPtr::Get(lVar7);
  ReleaseSRWLockShared((PSRWLOCK)(lVar7 + 8));
  lVar4 = param_1[1];
  uVar6 = FUN_1411e6780(lVar7,local_698);
  lVar7 = FUN_1411d7ff0(*param_1,&local_6c0,uVar5,uVar6);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar4 + 0x80));
  FUN_1411cb500(lVar4 + 0x58,lVar7);
  LOCK();
  *(uint *)(lVar4 + 0x708) = (uint)(*(int *)(lVar7 + 0x18) != -1);
  UNLOCK();
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar4 + 0x80));
  if (local_6a0 != 0) {
    LOCK();
    piVar1 = (int *)(local_6a0 + 0x48);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      FGraphEvent::Recycle();
    }
  }
  if (local_6b0 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_6b0 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_6b0)(local_6b0);
      LOCK();
      piVar1 = (int *)((longlong)local_6b0 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_6b0 + 8))(local_6b0,1);
      }
    }
  }
  FUN_1416f8340(local_6bc);
  FUN_1416f8340(local_6c0);
  if (local_40 != 0) {
    FMemory::Free();
  }
  if (local_50 != 0) {
    FMemory::Free();
  }
  if (local_650 != 0) {
    FMemory::Free();
  }
  lVar7 = param_1[1];
  SRWLock = (PSRWLOCK)(lVar7 + 0x80);
  AcquireSRWLockShared(SRWLock);
  iVar3 = *(int *)(lVar7 + 0x70);
  ReleaseSRWLockShared(SRWLock);
  if (iVar3 != -1) {
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(*param_1 + 0xe8,0);
  }
  return;
}



// FUNCTION 1411cc780 FUN_1411cc780 body=363 status=ok
// SIG undefined FUN_1411cc780(void)

ulonglong FUN_1411cc780(undefined8 *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  bool bVar8;
  ulonglong local_res8;
  
  if ((*(char *)param_1[4] != '\0') && (*(char *)(param_2 + 0x58) != *(char *)(param_3 + 0x58))) {
    return (ulonglong)(*(char *)(param_2 + 0x58) == '\0');
  }
  lVar1 = param_1[5];
  if (*(int *)(lVar1 + 0x40) != 0) {
    lVar6 = 0;
    if (*(longlong *)(lVar1 + 0x30) == 0) {
      lVar6 = lVar1 + 0x10;
    }
    if ((lVar6 != 0 || *(longlong *)(lVar1 + 0x30) != 0) &&
       (uVar3 = FUN_1411d25d0(lVar1,param_2,param_3), uVar3 != 0)) {
      return (ulonglong)(uVar3 >> 0x1f);
    }
  }
  bVar7 = false;
  if (*(char *)(param_1[1] + 0x18) != '\0') {
    if ((*(char *)((longlong *)param_1[3])[1] == '\0') ||
       (*(char *)(param_2 + 0x58) == *(char *)(param_3 + 0x58))) {
      local_res8 = 0;
      lVar1 = *(longlong *)(*(longlong *)param_1[3] + 0x20);
      if (lVar1 != 0) {
        bVar7 = *(longlong *)(param_2 + 0x100) == lVar1;
        bVar8 = *(longlong *)(param_3 + 0x100) == lVar1;
        if (bVar7 != bVar8) {
          bVar7 = !bVar8 && bVar7;
          goto LAB_1411cc878;
        }
      }
    }
    else if (*(char *)(param_2 + 0x58) == '\0') {
LAB_1411cc878:
      return (ulonglong)bVar7;
    }
  }
  iVar4 = FText::CompareTo(param_2 + 0x38,param_3 + 0x38,0);
  if (iVar4 == 0) {
    if (*(int *)(param_2 + 0x50) != *(int *)(param_3 + 0x50)) {
      return (ulonglong)(*(int *)(param_3 + 0x50) <= *(int *)(param_2 + 0x50));
    }
    local_res8 = local_res8 & 0xffffffffffffff00;
    cVar2 = FUN_1411cec00(*param_1,param_2,param_3,&local_res8);
    if (cVar2 != '\0') {
      return local_res8 & 0xff;
    }
    iVar4 = FUN_1411cdd60(param_1[2],param_2);
    iVar5 = FUN_1411cdd60(param_1[2],param_3);
    if (iVar4 != iVar5) {
      return (ulonglong)(iVar4 < iVar5);
    }
    iVar4 = FText::CompareTo(param_2,param_3,0);
  }
  return (ulonglong)(iVar4 < 0);
}



// FUNCTION 1411cc8f0 FUN_1411cc8f0 body=543 status=ok
// SIG undefined FUN_1411cc8f0(void)

void FUN_1411cc8f0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  longlong local_38;
  longlong *local_30;
  undefined8 local_28;
  longlong *local_20;
  longlong local_18;
  longlong *local_10;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar5 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar5 != '\0') {
    lVar7 = FWeakObjectPtr::Get(&local_res10);
    iVar4 = *(int *)(lVar7 + 0xc);
    if (iVar4 < (int)DAT_1469e91c4) {
      uVar8 = iVar4 >> 0x1f & 0xffff;
      uVar6 = iVar4 + uVar8;
      lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
              (longlong)(int)((uVar6 & 0xffff) - uVar8) * 0x18;
    }
    else {
      lVar7 = 0;
    }
    if (((*(uint *)(lVar7 + 8) & 0x30000000) == 0) &&
       (cVar5 = FWeakObjectPtr::IsValid(*param_1 + 0x140), cVar5 != '\0')) {
      lVar7 = *param_1;
      local_38 = *(longlong *)(lVar7 + 0x148);
      if (local_38 != 0) {
        local_30 = *(longlong **)(lVar7 + 0x150);
        if (local_30 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_30 + 1) = (int)local_30[1] + 1;
          UNLOCK();
          lVar7 = *param_1;
        }
        lVar7 = FWeakObjectPtr::Get(lVar7 + 0x140);
        FUN_140d84620(*(longlong *)(lVar7 + 0x478) + 0x1f8,&local_18,&local_38);
        plVar3 = local_30;
        if (local_30 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_30 + 1;
          lVar7 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_30)(local_30);
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
        FUN_1411fa680(*param_1,&local_18);
        if (local_18 == 0) {
          lVar7 = *param_1;
          local_28 = *(undefined8 *)(lVar7 + 0x148);
          local_20 = *(longlong **)(lVar7 + 0x150);
          if (local_20 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_20 + 1) = (int)local_20[1] + 1;
            UNLOCK();
            lVar7 = *param_1;
          }
          lVar7 = FWeakObjectPtr::Get(lVar7 + 0x140);
          FUN_140d94190(*(longlong *)(lVar7 + 0x478) + 0x1f8,&local_28);
          plVar3 = local_20;
          if (local_20 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_20 + 1;
            lVar7 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*local_20)(local_20);
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
        if (local_10 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_10 + 1;
          lVar7 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_10)(local_10);
            LOCK();
            piVar2 = (int *)((longlong)local_10 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_10 + 8))(local_10,1);
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1411ccb10 FUN_1411ccb10 body=439 status=ok
// SIG undefined FUN_1411ccb10(void)

void FUN_1411ccb10(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  undefined8 uVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong *local_450;
  undefined1 local_448 [328];
  undefined8 local_300;
  undefined1 local_2f8 [32];
  undefined1 local_2d8 [360];
  undefined1 local_170 [360];
  
  if (param_2 != 0) {
    plVar3 = (longlong *)*param_1;
    cVar7 = FUN_1411d74a0(param_2,plVar3);
    if (cVar7 != '\0') {
      lVar4 = *(longlong *)(param_2 + 0x30);
      lVar11 = (longlong)*(int *)(param_2 + 0x38) * 0x168 + lVar4;
      if (lVar4 != lVar11) {
        lVar9 = lVar4;
        do {
          if (*plVar3 == *(longlong *)(lVar9 + 0x140)) {
            if (((lVar9 != lVar11) && (iVar10 = (int)((lVar9 - lVar4) / 0x168), -1 < iVar10)) &&
               (iVar10 < *(int *)(param_2 + 0x38))) {
              uVar8 = FUN_1411c9050(local_170,(longlong)iVar10 * 0x168 + lVar4);
              bVar6 = true;
              bVar5 = false;
              goto LAB_1411ccb9d;
            }
            break;
          }
          lVar9 = lVar9 + 0x168;
        } while (lVar9 != lVar11);
      }
      uVar8 = FUN_1411c9410(local_2d8);
      bVar6 = false;
      bVar5 = true;
LAB_1411ccb9d:
      FUN_1411c8eb0(local_448,uVar8);
      if (bVar5) {
        FUN_1411ca750(local_2d8);
      }
      if (bVar6) {
        FUN_1411ca750(local_170);
      }
      local_450 = (longlong *)0x0;
      local_300 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(local_2f8,&local_450);
      plVar3 = local_450;
      if (local_450 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_450 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_450)(local_450);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar10 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*local_450 + 8))(local_450,1);
          }
        }
      }
      FUN_1411ff0a0(param_2,local_448);
      FUN_1411ca750(local_448);
    }
  }
  return;
}



// FUNCTION 1411cccd0 FUN_1411cccd0 body=265 status=ok
// SIG undefined FUN_1411cccd0(void)

void FUN_1411cccd0(longlong *param_1,longlong param_2)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong local_18;
  undefined8 local_10;
  
  lVar5 = *param_1;
  lVar4 = *(longlong *)(lVar5 + 0x2f0);
  local_18 = lVar4;
  if (lVar4 == 0) {
    local_10 = 0;
  }
  else {
    uVar3 = FUN_142f2b0d0();
    local_10 = UObjectBaseUtility::GetInterfaceAddress(lVar4,uVar3);
    lVar5 = *param_1;
  }
  lVar4 = FUN_142ee6de0(&local_18,*(undefined8 *)(lVar5 + 0x2c8));
  if (lVar4 != 0) {
    lVar5 = FUN_1414427b0();
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
      FUN_141444a30(lVar4,param_2);
      lVar4 = *param_1;
      iVar1 = *(int *)(lVar4 + 0x300);
      *(int *)(lVar4 + 0x300) = iVar1 + 1;
      if (*(int *)(lVar4 + 0x304) < iVar1 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
        ResizeGrow(lVar4 + 0x2f8,iVar1);
      }
      lVar4 = (longlong)iVar1 * 0x38 + *(longlong *)(lVar4 + 0x2f8);
      FText::FText(lVar4,param_2);
      FText::FText(lVar4 + 0x18,param_2 + 0x18);
      *(undefined1 *)(lVar4 + 0x30) = *(undefined1 *)(param_2 + 0x30);
      *(undefined1 *)(lVar4 + 0x31) = *(undefined1 *)(param_2 + 0x31);
    }
  }
  return;
}



// FUNCTION 1411ccde0 FUN_1411ccde0 body=543 status=ok
// SIG undefined FUN_1411ccde0(void)

undefined8 FUN_1411ccde0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  longlong local_20;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar5 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar5 != '\0') {
    lVar8 = FWeakObjectPtr::Get(&local_res10);
    iVar3 = *(int *)(lVar8 + 0xc);
    if (iVar3 < (int)DAT_1469e91c4) {
      uVar11 = iVar3 >> 0x1f & 0xffff;
      uVar6 = iVar3 + uVar11;
      lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
              (longlong)(int)((uVar6 & 0xffff) - uVar11) * 0x18;
    }
    else {
      lVar8 = 0;
    }
    if ((*(uint *)(lVar8 + 8) & 0x30000000) == 0) {
      lVar8 = *param_1;
      local_28 = *(undefined8 *)(lVar8 + 0x148);
      local_20 = *(longlong *)(lVar8 + 0x150);
      if (local_20 != 0) {
        LOCK();
        *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
        UNLOCK();
        lVar8 = *param_1;
      }
      uVar9 = FWeakObjectPtr::Get(lVar8 + 0x140);
      lVar8 = FUN_14244c070(uVar9,&local_28);
      if (lVar8 != 0) {
        lVar8 = *param_1;
        local_48 = *(undefined8 *)(lVar8 + 0x148);
        local_40 = *(longlong **)(lVar8 + 0x150);
        if (local_40 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_40 + 1) = (int)local_40[1] + 1;
          UNLOCK();
          lVar8 = *param_1;
        }
        uVar9 = FWeakObjectPtr::Get(lVar8 + 0x140);
        cVar5 = FUN_140bc2a80(uVar9,&local_48);
        plVar4 = local_40;
        if (local_40 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_40 + 1;
          lVar8 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_40)(local_40);
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
        if (cVar5 != '\0') {
          lVar8 = *param_1;
          local_38 = *(undefined8 *)(lVar8 + 0x148);
          local_30 = *(longlong **)(lVar8 + 0x150);
          if (local_30 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_30 + 1) = (int)local_30[1] + 1;
            UNLOCK();
            lVar8 = *param_1;
          }
          uVar9 = FWeakObjectPtr::Get(lVar8 + 0x140);
          uVar10 = FWeakObjectPtr::Get(*param_1 + 0x140);
          uVar7 = FUN_140bb6bd0(uVar9,&local_38);
          uVar9 = FUN_140bbaee0(uVar10,uVar7);
          plVar4 = local_30;
          if (local_30 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_30 + 1;
            lVar8 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*local_30)(local_30);
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
          return uVar9;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1411cd000 FUN_1411cd000 body=1236 status=ok
// SIG undefined FUN_1411cd000(void)

void FUN_1411cd000(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  uint uVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  bool bVar14;
  undefined1 local_res8 [16];
  undefined4 local_res18;
  undefined4 local_res1c;
  ulonglong in_stack_ffffffffffffff08;
  longlong local_d8 [3];
  longlong *local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  longlong local_68 [2];
  undefined1 local_58 [8];
  longlong *local_50;
  
  local_res18 = (undefined4)param_1[1];
  local_res1c = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar4 = FWeakObjectPtr::IsValid(&local_res18);
  lVar10 = 0;
  if (cVar4 == '\0') {
LAB_1411cd091:
    bVar14 = false;
  }
  else {
    lVar8 = FWeakObjectPtr::Get(&local_res18);
    iVar7 = *(int *)(lVar8 + 0xc);
    if (iVar7 < (int)DAT_1469e91c4) {
      uVar11 = iVar7 >> 0x1f & 0xffff;
      uVar6 = iVar7 + uVar11;
      lVar10 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
               (longlong)(int)((uVar6 & 0xffff) - uVar11) * 0x18;
    }
    if ((*(uint *)(lVar10 + 8) & 0x30000000) != 0) goto LAB_1411cd091;
    bVar14 = true;
  }
  if (!bVar14) {
    return;
  }
  cVar4 = FWeakObjectPtr::IsValid(*param_1 + 0x140);
  if (cVar4 == '\0') {
    return;
  }
  lVar10 = *param_1;
  if (*(longlong *)(lVar10 + 0x148) == 0) {
    return;
  }
  lVar8 = 0x158;
  if (*(longlong *)(lVar10 + 0x158) == 0) {
    lVar8 = 0x148;
  }
  puVar13 = (undefined8 *)(lVar8 + lVar10);
  local_d8[0] = 0;
  local_d8[1] = 0;
  if (*(char *)(lVar10 + 0x1a2) == '\0') {
    local_98 = *puVar13;
    local_90 = (longlong *)puVar13[1];
    if (local_90 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_90 + 1) = (int)local_90[1] + 1;
      UNLOCK();
      lVar10 = *param_1;
    }
    lVar10 = FWeakObjectPtr::Get(lVar10 + 0x140);
    cVar4 = FUN_140d79f00(*(undefined8 *)(lVar10 + 0x478),&local_98,1,1,local_d8);
    plVar12 = local_90;
LAB_1411cd28a:
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar12 + 1;
      lVar10 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar12)(plVar12);
LAB_1411cd2a7:
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        iVar7 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar12 + 8))(plVar12,1);
        }
      }
    }
  }
  else {
    uVar9 = FWeakObjectPtr::Get(lVar10 + 0x140);
    lVar10 = FUN_14244f490(uVar9,0);
    if (lVar10 == 0) {
LAB_1411cd1f2:
      local_a8 = *puVar13;
      local_a0 = (longlong *)puVar13[1];
      if (local_a0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
        UNLOCK();
      }
      lVar10 = FWeakObjectPtr::Get(*param_1 + 0x140);
      cVar4 = FUN_140d79f00(*(undefined8 *)(lVar10 + 0x478),&local_a8,1,1,local_d8);
      plVar12 = local_a0;
      goto LAB_1411cd28a;
    }
    lVar8 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar14 = false;
    }
    else {
      bVar14 = true;
    }
    if (!bVar14) goto LAB_1411cd1f2;
    local_b8 = *puVar13;
    local_b0 = (longlong *)puVar13[1];
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_b0 + 1) = (int)local_b0[1] + 1;
      UNLOCK();
    }
    lVar8 = FWeakObjectPtr::Get(*param_1 + 0x140);
    cVar4 = FUN_140d7a1d0(*(undefined8 *)(lVar8 + 0x478),&local_b8,lVar10,1,
                          in_stack_ffffffffffffff08 & 0xffffffffffffff00,local_d8,0xbf800000);
    plVar12 = local_b0;
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_b0 + 1;
      lVar10 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar10 != 1) goto LAB_1411cd2c1;
      (**(code **)*local_b0)(local_b0);
      goto LAB_1411cd2a7;
    }
  }
LAB_1411cd2c1:
  if (cVar4 == '\0') {
    local_88 = *puVar13;
    local_80 = (longlong *)puVar13[1];
    if (local_80 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_80 + 1) = (int)local_80[1] + 1;
      UNLOCK();
    }
    lVar10 = FWeakObjectPtr::Get(*param_1 + 0x140);
    FUN_140d938f0(*(undefined8 *)(lVar10 + 0x478),&local_88);
    plVar12 = local_80;
  }
  else {
    if ((*(longlong *)(*param_1 + 0x78) == 0) ||
       (lVar10 = *(longlong *)(*param_1 + 0x80), lVar10 == 0)) goto LAB_1411cd385;
    piVar2 = (int *)(lVar10 + 8);
    LOCK();
    iVar7 = *piVar2;
    if (iVar7 == 0) {
      *piVar2 = 0;
      iVar7 = 0;
    }
    UNLOCK();
    if (iVar7 < 1) goto LAB_1411cd385;
    uVar9 = FText::FromString(local_58,local_d8);
    UMistDebugEntityScreen::InspectEntity(*param_1 + 0x70,uVar9,1,0);
    plVar12 = local_50;
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar12 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      iVar7 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
LAB_1411cd385:
  lVar10 = *param_1;
  plVar12 = *(longlong **)(lVar10 + 0x138);
  local_c0 = plVar12;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    iVar7 = (int)plVar12[1];
    bVar14 = iVar7 == 0;
    if (bVar14) {
      *(int *)(plVar12 + 1) = 0;
      iVar7 = 0;
    }
    UNLOCK();
    while (!bVar14) {
      LOCK();
      bVar14 = iVar7 == (int)plVar12[1];
      if (bVar14) {
        *(int *)(plVar12 + 1) = iVar7 + 1;
      }
      UNLOCK();
      if (bVar14) {
        local_d8[2] = *(longlong *)(lVar10 + 0x130);
        if (local_d8[2] != 0) {
          local_78 = *puVar13;
          local_70 = (longlong *)puVar13[1];
          if (local_70 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_70 + 1) = (int)local_70[1] + 1;
            UNLOCK();
          }
          uVar9 = FWeakObjectPtr::Get(*param_1 + 0x140);
          uVar5 = FUN_140bbd2a0(uVar9,&local_78);
          plVar1 = local_70;
          if (local_70 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_70 + 1;
            lVar10 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*local_70)(local_70);
              LOCK();
              piVar2 = (int *)((longlong)plVar1 + 0xc);
              iVar7 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar7 == 1) {
                (**(code **)(*plVar1 + 8))(plVar1,1);
              }
            }
          }
          FUN_1411f1490(local_68,uVar5);
          FUN_14203e230(local_d8[2],local_68);
          if (local_68[0] != 0) {
            FMemory::Free();
          }
        }
        plVar1 = local_c0;
        LOCK();
        plVar12 = plVar12 + 1;
        lVar10 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_c0)(local_c0);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          iVar7 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*local_c0 + 8))(local_c0,1);
          }
        }
        break;
      }
      LOCK();
      iVar7 = (int)plVar12[1];
      bVar14 = iVar7 == 0;
      if (bVar14) {
        *(int *)(plVar12 + 1) = 0;
        iVar7 = 0;
      }
      UNLOCK();
    }
  }
  if (local_d8[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1411cd4e0 FUN_1411cd4e0 body=588 status=ok
// SIG undefined FUN_1411cd4e0(void)

void FUN_1411cd4e0(longlong *param_1)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar1 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar1 != '\0') {
    lVar3 = FWeakObjectPtr::Get(&local_res10);
    iVar8 = *(int *)(lVar3 + 0xc);
    if (iVar8 < (int)DAT_1469e91c4) {
      uVar7 = iVar8 >> 0x1f & 0xffff;
      uVar2 = iVar8 + uVar7;
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar7) * 0x18;
    }
    else {
      lVar3 = 0;
    }
    if (((*(uint *)(lVar3 + 8) & 0x30000000) == 0) &&
       (cVar1 = FWeakObjectPtr::IsValid(*param_1 + 0x140), cVar1 != '\0')) {
      lVar3 = FWeakObjectPtr::Get(*param_1 + 0x140);
      TBaseMulticastDelegate<void>::Remove(lVar3 + 0x9c0,*(undefined8 *)(*param_1 + 0x50));
      lVar3 = *param_1;
      if (*(longlong *)(lVar3 + 0x48) != 0) {
        lVar3 = FWeakObjectPtr::Get(lVar3 + 0x140);
        TBaseMulticastDelegate<void>::Remove(lVar3 + 0xa38,*(undefined8 *)(*param_1 + 0x48));
        lVar3 = *param_1;
      }
      if (*(longlong *)(lVar3 + 0x30) != 0) {
        cVar1 = FWeakObjectPtr::IsValid(lVar3 + 0x140);
        if (cVar1 != '\0') {
          uVar4 = FWeakObjectPtr::Get(lVar3 + 0x140);
          lVar3 = FUN_140bb7440(uVar4);
          if (lVar3 != 0) {
            iVar8 = 0;
            lVar6 = *(longlong *)(*param_1 + 0x30);
            if (0 < *(int *)(lVar3 + 0xe0)) {
              lVar10 = 0;
              do {
                plVar9 = (longlong *)(*(longlong *)(lVar3 + 0xd8) + lVar10);
                if ((((int)plVar9[1] != 0) &&
                    (plVar5 = (longlong *)*plVar9, plVar5 != (longlong *)0x0)) &&
                   (plVar5 = (longlong *)(**(code **)(*plVar5 + 0x20))(plVar5,local_res8),
                   *plVar5 == lVar6)) {
                  if (((int)plVar9[1] != 0) &&
                     (plVar5 = (longlong *)*plVar9, plVar5 != (longlong *)0x0)) {
                    (**(code **)(*plVar5 + 0x28))(plVar5,0);
                    if (*plVar9 != 0) {
                      lVar6 = FMemory::Realloc(*plVar9,0,0);
                      *plVar9 = lVar6;
                    }
                    *(undefined4 *)(plVar9 + 1) = 0;
                  }
                  break;
                }
                iVar8 = iVar8 + 1;
                lVar10 = lVar10 + 0x10;
              } while (iVar8 < *(int *)(lVar3 + 0xe0));
            }
            FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList
                      ((longlong *)(lVar3 + 0xd8),0);
          }
        }
      }
      lVar3 = FWeakObjectPtr::Get(*param_1 + 0x140);
      TBaseMulticastDelegate<void>::Remove
                (*(longlong *)(lVar3 + 0x478) + 0x208,*(undefined8 *)(*param_1 + 0x40));
      lVar3 = FWeakObjectPtr::Get(*param_1 + 0x140);
      TBaseMulticastDelegate<void>::Remove
                (*(longlong *)(lVar3 + 0x478) + 0x1e0,*(undefined8 *)(*param_1 + 0x38));
      return;
    }
  }
  return;
}



// FUNCTION 1411cd730 FUN_1411cd730 body=217 status=ok
// SIG undefined FUN_1411cd730(void)

void FUN_1411cd730(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined4 local_38;
  undefined4 local_34;
  longlong *local_28;
  longlong local_18;
  
  plVar6 = (longlong *)*param_1;
  FUN_1411d24c0(param_1 + 2,&local_38);
  puVar3 = (undefined8 *)*plVar6;
  FUN_1411cb500(puVar3 + 0xc);
  *(undefined1 *)(puVar3 + 0xb) = 1;
  (**(code **)(*(longlong *)puVar3[10] + 0x10))();
  if (*(int *)(puVar3 + 8) != 0) {
    uVar5 = 0;
    plVar6 = (longlong *)puVar3[6];
    if ((longlong *)puVar3[6] == (longlong *)0x0) {
      plVar6 = puVar3 + 2;
    }
    if (plVar6 != (longlong *)0x0) {
      if (plVar6 != (longlong *)0x0) {
        uVar5 = (**(code **)(*plVar6 + 8))();
      }
      (*(code *)*puVar3)(uVar5);
    }
  }
  if (local_18 != 0) {
    LOCK();
    piVar1 = (int *)(local_18 + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_28 + 1;
    lVar4 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_28 + 8))(local_28,1);
      }
    }
  }
  FUN_1416f8340(local_34);
  FUN_1416f8340(local_38);
  return;
}



// FUNCTION 1411cd810 FUN_1411cd810 body=383 status=ok
// SIG undefined FUN_1411cd810(void)

ulonglong FUN_1411cd810(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 uVar11;
  uint uVar12;
  bool bVar13;
  undefined1 local_res8 [16];
  undefined4 local_res18;
  undefined4 local_res1c;
  
  local_res18 = (undefined4)param_1[1];
  local_res1c = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  uVar9 = FWeakObjectPtr::IsValid(&local_res18);
  if ((char)uVar9 != '\0') {
    lVar10 = FWeakObjectPtr::Get(&local_res18);
    uVar9 = 0;
    iVar7 = *(int *)(lVar10 + 0xc);
    if (iVar7 < (int)DAT_1469e91c4) {
      uVar12 = iVar7 >> 0x1f & 0xffff;
      uVar6 = iVar7 + uVar12;
      uVar9 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
              (longlong)(int)((uVar6 & 0xffff) - uVar12) * 0x18;
    }
    if ((*(uint *)(uVar9 + 8) & 0x30000000) == 0) {
      lVar10 = *param_1;
      plVar4 = *(longlong **)(lVar10 + 0x118);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        iVar7 = (int)plVar4[1];
        bVar13 = iVar7 == 0;
        uVar8 = 0;
        if (bVar13) {
          *(int *)(plVar4 + 1) = 0;
          iVar7 = 0;
        }
        UNLOCK();
        while (!bVar13) {
          LOCK();
          bVar13 = iVar7 == (int)plVar4[1];
          if (bVar13) {
            *(int *)(plVar4 + 1) = iVar7 + 1;
          }
          UNLOCK();
          if (bVar13) {
            if (plVar4 != (longlong *)0x0) {
              if (*(longlong *)(lVar10 + 0x110) != 0) {
                cVar5 = FWeakObjectPtr::IsValid(*param_1 + 0x140);
                if (cVar5 != '\0') {
                  uVar11 = FWeakObjectPtr::Get(*param_1 + 0x140);
                  uVar8 = FUN_140bbba30(uVar11,*param_1 + 0x148);
                }
                FUN_1411f7a30(*param_1,uVar8);
              }
              LOCK();
              plVar1 = plVar4 + 1;
              lVar10 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar10 == 1) {
                (**(code **)*plVar4)(plVar4);
                LOCK();
                piVar2 = (int *)((longlong)plVar4 + 0xc);
                iVar7 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar7 == 1) {
                  (**(code **)(*plVar4 + 8))(plVar4,1);
                }
              }
            }
            break;
          }
          LOCK();
          iVar7 = (int)plVar4[1];
          bVar13 = iVar7 == 0;
          if (bVar13) {
            *(int *)(plVar4 + 1) = 0;
            iVar7 = 0;
          }
          UNLOCK();
        }
      }
      uVar9 = 1;
      LOCK();
      bVar3 = *(byte *)(*param_1 + 0x28);
      if (bVar3 == 1) {
        *(byte *)(*param_1 + 0x28) = 0;
      }
      else {
        uVar9 = (ulonglong)bVar3;
      }
      UNLOCK();
    }
  }
  return uVar9;
}



// FUNCTION 1411cd990 FUN_1411cd990 body=208 status=ok
// SIG undefined FUN_1411cd990(void)

void FUN_1411cd990(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146876af8) {
    _Init_thread_header(&DAT_146876af8);
    if (DAT_146876af8 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146876ae0,L"Character Pending",L"GFxPlayerIdentityWidget",L"UnknownClass");
      atexit(FUN_143e62550);
      _Init_thread_footer(&DAT_146876af8);
    }
  }
  UMistDebugEntityScreen::InspectEntity(*param_1 + 0x88,&DAT_146876ae0,1,0);
  uVar1 = FUN_1404b03b0();
  UMistDebugEntityScreen::InspectEntity(*param_1 + 0xa0,uVar1,1,0);
  *(undefined1 *)(*param_1 + 0x1a1) = 1;
  FUN_1411f76d0(*param_1);
  return;
}



// FUNCTION 1411cda60 FUN_1411cda60 body=286 status=ok
// SIG undefined FUN_1411cda60(void)

void FUN_1411cda60(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 local_28;
  longlong *local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  lVar7 = *param_1;
  cVar5 = FWeakObjectPtr::IsValid(lVar7 + 0x140);
  if (cVar5 != '\0') {
    uVar6 = FWeakObjectPtr::Get(lVar7 + 0x140);
    lVar7 = FUN_140bb7440(uVar6);
    if (lVar7 != 0) {
      puVar8 = (undefined8 *)FUN_140d80730(lVar7,local_18,param_1[1]);
      local_20 = (longlong *)puVar8[1];
      local_28 = *puVar8;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_20 + 1) = (int)local_20[1] + 1;
        UNLOCK();
      }
      lVar7 = *param_1;
      puVar8 = (undefined8 *)(lVar7 + 0x178);
      if (puVar8 != &local_28) {
        *puVar8 = local_28;
        local_28 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(lVar7 + 0x180,&local_20);
      }
      plVar3 = local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_20 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_20)(local_20);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_20 + 8))(local_20,1);
          }
        }
      }
      if (local_10 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_10 + 1;
        lVar7 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_10)(local_10);
          LOCK();
          piVar2 = (int *)((longlong)local_10 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_10 + 8))(local_10,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1411cdb80 FUN_1411cdb80 body=476 status=ok
// SIG undefined FUN_1411cdb80(void)

void FUN_1411cdb80(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  uint uVar13;
  bool bVar14;
  undefined1 local_res8 [16];
  undefined4 local_res18;
  undefined4 local_res1c;
  
  local_res18 = (undefined4)param_1[1];
  local_res1c = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar6 = FWeakObjectPtr::IsValid(&local_res18);
  if (cVar6 != '\0') {
    lVar9 = FWeakObjectPtr::Get(&local_res18);
    lVar10 = 0;
    iVar8 = *(int *)(lVar9 + 0xc);
    if (iVar8 < (int)DAT_1469e91c4) {
      uVar13 = iVar8 >> 0x1f & 0xffff;
      uVar7 = iVar8 + uVar13;
      lVar10 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
               (longlong)(int)((uVar7 & 0xffff) - uVar13) * 0x18;
    }
    if (((((*(uint *)(lVar10 + 8) & 0x30000000) == 0) &&
         (cVar6 = FWeakObjectPtr::IsValid(*param_1 + 0x140), cVar6 != '\0')) &&
        (lVar10 = *param_1, *(longlong *)(lVar10 + 0x148) != 0)) &&
       (plVar3 = *(longlong **)(lVar10 + 0xd0), plVar3 != (longlong *)0x0)) {
      LOCK();
      iVar8 = (int)plVar3[1];
      bVar14 = iVar8 == 0;
      if (bVar14) {
        *(int *)(plVar3 + 1) = 0;
        iVar8 = 0;
      }
      UNLOCK();
      if (!bVar14) {
        while( true ) {
          LOCK();
          bVar14 = iVar8 == (int)plVar3[1];
          if (bVar14) {
            *(int *)(plVar3 + 1) = iVar8 + 1;
          }
          UNLOCK();
          if (bVar14) break;
          LOCK();
          iVar8 = (int)plVar3[1];
          bVar14 = iVar8 == 0;
          if (bVar14) {
            *(int *)(plVar3 + 1) = 0;
            iVar8 = 0;
          }
          UNLOCK();
          if (bVar14) {
            return;
          }
        }
        if (plVar3 != (longlong *)0x0) {
          lVar10 = *(longlong *)(lVar10 + 200);
          if (lVar10 != 0) {
            uVar11 = FWeakObjectPtr::Get(*param_1 + 0x140);
            plVar12 = (longlong *)UAssetRegistryImpl::OnAssetAdded(uVar11);
            lVar9 = *param_1;
            plVar4 = (longlong *)*plVar12;
            lVar5 = plVar12[1];
            if (plVar4 != plVar4 + (longlong)(int)lVar5 * 5) {
              plVar12 = plVar4 + 1;
              do {
                if (((longlong *)*plVar12 != (longlong *)0x0) &&
                   (cVar6 = (**(code **)(*(longlong *)*plVar12 + 0x20))(), cVar6 != '\0')) {
                  cVar6 = (*(code *)**(undefined8 **)*plVar12)
                                    ((undefined8 *)*plVar12,*(undefined8 *)(lVar9 + 0x148));
                  if (cVar6 != '\0') {
                    uVar11 = 1;
                    goto LAB_1411cdd08;
                  }
                }
                plVar1 = plVar12 + 4;
                plVar12 = plVar12 + 5;
              } while (plVar1 != plVar4 + (longlong)(int)lVar5 * 5);
            }
            uVar11 = 0;
LAB_1411cdd08:
            FUN_142056670(lVar10,uVar11);
          }
          LOCK();
          plVar4 = plVar3 + 1;
          lVar10 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*plVar3)(plVar3);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            iVar8 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*plVar3 + 8))(plVar3,1);
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1411cdd60 FUN_1411cdd60 body=210 status=ok
// SIG undefined FUN_1411cdd60(void)

undefined4 FUN_1411cdd60(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  
  plVar4 = *(longlong **)(*param_1 + 8);
  plVar1 = plVar4 + (longlong)*(int *)(*param_1 + 0x10) * 3;
  do {
    if (plVar4 == plVar1) {
      return 0x7fffffff;
    }
    if (plVar4[1] == 0) {
      if ((*plVar4 != 0) && (*(longlong *)(param_2 + 0xa8) != 0)) {
        bVar5 = *(longlong *)(param_2 + 0xa8) == *plVar4;
LAB_1411cde08:
        if (bVar5) {
          return (int)plVar4[2];
        }
      }
    }
    else {
      lVar2 = FWeakObjectPtr::Get(param_2 + 0xdc);
      if (lVar2 != 0) {
        lVar3 = FUN_1430b3b80();
        if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          bVar5 = *(longlong *)(lVar2 + 0x478) == plVar4[1];
          goto LAB_1411cde08;
        }
      }
    }
    plVar4 = plVar4 + 3;
  } while( true );
}



// FUNCTION 1411cde40 FUN_1411cde40 body=254 status=ok
// SIG undefined FUN_1411cde40(void)

void FUN_1411cde40(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong local_38;
  undefined8 local_30;
  undefined1 local_28 [32];
  
  lVar7 = *param_1;
  lVar6 = *(longlong *)(lVar7 + 0x2f0);
  local_38 = lVar6;
  if (lVar6 == 0) {
    local_30 = 0;
  }
  else {
    uVar5 = FUN_142f2b0d0();
    local_30 = UObjectBaseUtility::GetInterfaceAddress(lVar6,uVar5);
    lVar7 = *param_1;
  }
  lVar6 = FUN_142ee6de0(&local_38,*(undefined8 *)(lVar7 + 0x2c8));
  if (lVar6 != 0) {
    uVar5 = FText::FText(local_28,param_3);
    FUN_142f0e010(lVar6,uVar5);
    lVar6 = *param_1;
    iVar3 = *(int *)(lVar6 + 0x308);
    *(int *)(lVar6 + 0x308) = iVar3 + 1;
    if (*(int *)(lVar6 + 0x30c) < iVar3 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar6 + 0x300,iVar3);
    }
    *(undefined8 *)(*(longlong *)(lVar6 + 0x300) + (longlong)iVar3 * 8) = param_2;
  }
  plVar4 = *(longlong **)(param_3 + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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



// FUNCTION 1411cdf40 FUN_1411cdf40 body=475 status=ok
// SIG undefined FUN_1411cdf40(void)

void FUN_1411cdf40(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  longlong local_48 [4];
  undefined2 *local_28;
  undefined8 local_20;
  
  uVar3 = FUN_140cb5ff0();
  FUN_140ccd780(uVar3,param_1[1]);
  lVar4 = FUN_140cb5ff0();
  puVar7 = &DAT_143f3eda8;
  if (*(int *)(lVar4 + 0xd0) == 0) {
    puVar8 = &DAT_143f3eda8;
  }
  else {
    puVar8 = *(undefined2 **)(lVar4 + 200);
  }
  if (*(int *)(*param_1 + 0x48) == 0) {
    puVar6 = &DAT_143f3eda8;
  }
  else {
    puVar6 = *(undefined2 **)(*param_1 + 0x40);
  }
  iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar6,puVar8);
  if (iVar2 != 0) {
    plVar5 = (longlong *)UGameMapsSettings::GetPrivateStaticClass();
    lVar4 = plVar5[0x1f];
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x368))(plVar5);
      lVar4 = plVar5[0x1f];
    }
    local_48[1] = 2;
    local_28 = (undefined2 *)0x0;
    local_20 = 0;
    local_48[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
    lVar1 = local_48[0];
    FGenericPlatformString::Memcpy(local_48[0],&DAT_143f73c90,4);
    if (*(longlong *)(lVar4 + 0x50) == 0) {
      local_48[2] = 0;
      local_48[3] = 0;
    }
    else {
      FName::ToString((longlong *)(lVar4 + 0x50),local_48 + 2);
    }
    FUN_1404e14f0(local_48 + 2,local_48,0,local_48 + 4,0,0);
    if (local_48[2] != 0) {
      FMemory::Free();
    }
    if (lVar1 != 0) {
      FMemory::Free(lVar1);
    }
    lVar4 = FUN_140cb5ff0();
    puVar8 = local_28;
    puVar6 = &DAT_143f3eda8;
    if ((int)local_20 != 0) {
      puVar6 = local_28;
    }
    if (*(int *)(lVar4 + 0xd0) != 0) {
      puVar7 = *(undefined2 **)(lVar4 + 200);
    }
    iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar7,puVar6);
    if (iVar2 != 0) {
      lVar4 = FUN_140cb5ff0();
      FString::operator=(*param_1 + 0x40,lVar4 + 200);
      *(undefined1 *)(*param_1 + 0x38) = 1;
      FUN_1411e7a30(*param_1,0,0);
      *(undefined1 *)(*param_1 + 0x38) = 0;
      FUN_1411fbf80(*param_1);
    }
    if (puVar8 != (undefined2 *)0x0) {
      FMemory::Free(puVar8);
    }
  }
  return;
}



// FUNCTION 1411ce120 FUN_1411ce120 body=777 status=ok
// SIG undefined FUN_1411ce120(void)

void FUN_1411ce120(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  longlong *plVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 local_458 [8];
  longlong *local_450;
  longlong *local_438;
  longlong *local_420;
  longlong *local_408;
  longlong *local_3f0;
  longlong local_3e0;
  undefined1 local_3a8 [144];
  longlong local_318;
  longlong *local_308;
  undefined1 local_2e8 [360];
  undefined1 local_180 [360];
  
  bVar4 = false;
  bVar3 = false;
  if (param_2 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(param_2 + 0x38);
  }
  uVar11 = iVar6 - 1;
  if (-1 < (int)uVar11) {
    lVar12 = (longlong)(int)uVar11 * 0x168;
    do {
      if (((int)uVar11 < 0) || (*(int *)(param_2 + 0x38) <= (int)uVar11)) {
        bVar3 = true;
        uVar7 = FUN_1411c9410(local_2e8);
      }
      else {
        bVar4 = true;
        uVar7 = FUN_1411c9050(local_180,*(longlong *)(param_2 + 0x30) + lVar12);
      }
      FUN_1411c8eb0(local_458,uVar7);
      if (bVar3) {
        bVar3 = false;
        FUN_1411ca750(local_2e8);
      }
      if (bVar4) {
        bVar4 = false;
        FUN_1411ca750(local_180);
      }
      lVar10 = *(longlong *)(param_2 + 0x30);
      lVar9 = (longlong)*(int *)(param_2 + 0x38) * 0x168 + lVar10;
      for (lVar8 = lVar10; lVar8 != lVar9; lVar8 = lVar8 + 0x168) {
        if (*(longlong *)(lVar8 + 0x140) == local_318) {
          if (lVar8 != lVar9) {
            lVar10 = (lVar8 - lVar10) / 0x168;
            goto LAB_1411ce22e;
          }
          break;
        }
      }
      lVar10 = 0xffffffff;
LAB_1411ce22e:
      FUN_1411e81a0(param_2,lVar10);
      plVar5 = local_308;
      if (local_308 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_308 + 1;
        lVar10 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_308)(local_308);
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
      FSlateBrush::~FSlateBrush(local_3a8);
      if (local_3e0 != 0) {
        FMemory::Free();
      }
      plVar5 = local_3f0;
      if (local_3f0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_3f0 + 1;
        lVar10 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_3f0)(local_3f0);
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
      plVar5 = local_408;
      if (local_408 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_408 + 1;
        lVar10 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_408)(local_408);
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
      plVar5 = local_420;
      if (local_420 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_420 + 1;
        lVar10 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_420)(local_420);
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
      plVar5 = local_438;
      if (local_438 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_438 + 1;
        lVar10 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_438)(local_438);
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
      plVar5 = local_450;
      if (local_450 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_450 + 1;
        lVar10 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_450)(local_450);
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
      uVar11 = uVar11 - 1;
      lVar12 = lVar12 + -0x168;
    } while (uVar11 < 0x80000000);
  }
  return;
}



// FUNCTION 1411ce430 FUN_1411ce430 body=178 status=ok
// SIG undefined FUN_1411ce430(void)

void FUN_1411ce430(undefined8 *param_1)

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
      lVar4 = FUN_1416f8720(*(undefined4 *)(param_1 + 2));
      if (lVar4 != 0) {
        lVar4 = FUN_1416f8720(*(undefined4 *)(param_1 + 2));
        FUN_1407665e0(lVar4 + 0x1418,*param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1411ce4f0 FUN_1411ce4f0 body=180 status=ok
// SIG undefined FUN_1411ce4f0(void)

ulonglong FUN_1411ce4f0(longlong *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  uVar4 = FWeakObjectPtr::IsValid(&local_res10);
  if ((char)uVar4 != '\0') {
    lVar5 = FWeakObjectPtr::Get(&local_res10);
    uVar4 = 0;
    iVar2 = *(int *)(lVar5 + 0xc);
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar6 = iVar2 >> 0x1f & 0xffff;
      uVar3 = iVar2 + uVar6;
      uVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar6) * 0x18;
    }
    if ((*(uint *)(uVar4 + 8) & 0x30000000) == 0) {
      FUN_1411e4b90(*param_1);
      FUN_1411d5be0(*param_1);
      uVar4 = 1;
      LOCK();
      bVar1 = *(byte *)(*param_1 + 0x361);
      if (bVar1 == 1) {
        *(byte *)(*param_1 + 0x361) = 0;
      }
      else {
        uVar4 = (ulonglong)bVar1;
      }
      UNLOCK();
    }
  }
  return uVar4;
}



// FUNCTION 1411ce5b0 FUN_1411ce5b0 body=490 status=ok
// SIG undefined FUN_1411ce5b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411ce5b0(longlong *param_1)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  uint uVar8;
  longlong *plVar9;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [8];
  longlong local_90 [3];
  undefined1 *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  local_90[0] = param_1[1];
  FUN_141729b50(local_98);
  FUN_14172a400(local_98);
  cVar3 = FWeakObjectPtr::IsValid(local_90);
  if (cVar3 != '\0') {
    lVar5 = FWeakObjectPtr::Get(local_90);
    lVar6 = 0;
    iVar1 = *(int *)(lVar5 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar8 = iVar1 >> 0x1f & 0xffff;
      uVar4 = iVar1 + uVar8;
      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar8) * 0x18;
    }
    if ((*(uint *)(lVar6 + 8) & 0x30000000) == 0) {
      lVar6 = *(longlong *)(*param_1 + 0x2e0);
      if (lVar6 != 0) {
        local_90[0] = 0;
        local_90[1] = 4;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_90,0);
        FGenericPlatformString::Memcpy(local_90[0],&DAT_1446ed4e0,8);
        FUN_142088cf0(lVar6,local_90);
        if (local_90[0] != 0) {
          FMemory::Free();
        }
      }
      lVar6 = *param_1;
      lVar5 = param_1[1];
      uVar2 = *(undefined4 *)((longlong)param_1 + 0xc);
      local_48 = (longlong *)0x0;
      local_38 = 0;
      puVar7 = (undefined8 *)FUN_140438ef0(0x18,local_68);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = &PTR_FUN_1444f8920;
        puVar7[1] = lVar6;
        *(int *)(puVar7 + 2) = (int)lVar5;
        *(undefined4 *)((longlong)puVar7 + 0x14) = uVar2;
      }
      local_78[0] = &LAB_1411d50d0;
      FUN_14208c300(*param_1,local_78);
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
    }
  }
  return;
}



// FUNCTION 1411ce7a0 FUN_1411ce7a0 body=444 status=ok
// SIG undefined FUN_1411ce7a0(void)

void FUN_1411ce7a0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong local_98 [3];
  undefined4 local_80;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined8 local_68;
  undefined1 local_60 [16];
  undefined4 local_50;
  undefined8 local_4c;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  
  lVar4 = *param_1;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar4 + 0x80));
  local_98[0] = 0;
  local_98[1] = 0x20;
  *(int *)(*param_1 + 0x70) = (int)param_1[1];
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_98,0);
  FGenericPlatformString::Memcpy(local_98[0],L"RequestAsyncLoad SingleDelegate",0x40);
  local_98[2] = 0;
  local_80 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(local_98 + 2,param_1 + 2);
  lVar5 = *param_1;
  AcquireSRWLockShared((PSRWLOCK)(lVar5 + 0x38));
  local_38 = 0;
  local_30 = 0;
  local_40 = 0;
  local_50 = *(undefined4 *)(lVar5 + 0x10);
  local_4c = *(undefined8 *)(lVar5 + 0x14);
  local_68 = *(undefined8 *)(lVar5 + 0x20);
  FString::FString(local_60,lVar5 + 0x28);
  FSoftObjectPath::operator=(&local_40,&local_68);
  ReleaseSRWLockShared((PSRWLOCK)(lVar5 + 0x38));
  lVar5 = FUN_1422ca050();
  puVar6 = (undefined8 *)
           FStreamableManager::RequestAsyncLoad
                     (lVar5 + 0x178,local_78,&local_40,local_98 + 2,0,0,0,local_98);
  lVar5 = *param_1;
  puVar7 = (undefined8 *)(lVar5 + 0x60);
  if (puVar7 != puVar6) {
    *puVar7 = *puVar6;
    *puVar6 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(lVar5 + 0x68,puVar6 + 1);
  }
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_70 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar2 = (int *)((longlong)local_70 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  if (local_38 != 0) {
    FMemory::Free();
  }
  if (local_98[0] != 0) {
    FMemory::Free();
  }
                    /* WARNING: Could not recover jumptable at 0x0001411ce955. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar4 + 0x80));
  return;
}



// FUNCTION 1411ce960 FUN_1411ce960 body=672 status=ok
// SIG undefined FUN_1411ce960(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411ce960(longlong *param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  longlong *plVar10;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [8];
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
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_b0 = (code *)param_1[1];
  FUN_141729b50(local_b8);
  FUN_14172a400(local_b8);
  cVar3 = FWeakObjectPtr::IsValid(&local_b0);
  lVar8 = 0;
  if (cVar3 != '\0') {
    lVar5 = FWeakObjectPtr::Get(&local_b0);
    iVar1 = *(int *)(lVar5 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar9 = iVar1 >> 0x1f & 0xffff;
      uVar4 = iVar1 + uVar9;
      lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar9) * 0x18;
    }
    if ((*(uint *)(lVar8 + 8) & 0x30000000) == 0) {
      bVar2 = true;
      goto LAB_1411cea00;
    }
  }
  bVar2 = false;
LAB_1411cea00:
  if ((bVar2) && (lVar8 = *(longlong *)(*param_1 + 0x38), lVar8 != 0)) {
    lVar5 = UMovieScene3DTransformSection::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      local_b0 = *(code **)(*param_1 + 0x368);
      lVar5 = FTimerManager::FindTimer(lVar8 + 0x340,&local_b0,0);
      if ((lVar5 == 0) || (*(char *)(lVar5 + 1) == '\x02')) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) {
        lVar5 = *param_1;
        local_b0 = FUN_1411fd9a0;
        uStack_a8 = 0;
        plVar6 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar6 != (longlong *)0x0) {
          *plVar6 = (longlong)&PTR_FUN_143f77b88;
          FWeakObjectPtr::operator=(plVar6 + 1,lVar5);
          *(undefined4 *)(plVar6 + 2) = (undefined4)local_b0;
          *(undefined4 *)((longlong)plVar6 + 0x14) = local_b0._4_4_;
          *(undefined4 *)(plVar6 + 3) = uStack_a8;
          *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_a4;
          lVar7 = FDelegateHandle::GenerateNewID();
          plVar6[5] = lVar7;
          *plVar6 = (longlong)&PTR_FUN_143f77bd0;
        }
        local_98 = 0;
        local_90 = 0;
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x30))(plVar6,&local_98);
        }
        FWeakObjectPtr::operator=(local_88,0);
        local_c0 = 0xbf800000;
        local_c8 = 0;
        local_80 = 0;
        local_48 = (longlong *)0x0;
        local_38 = 0;
        local_78 = AK::MemoryMgr::StartProfileThreadUsage;
        FUN_142880850(lVar8 + 0x340,lVar5 + 0x368,&local_98,0x40800000);
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
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_98);
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x28))(plVar6,0);
          lVar8 = FMemory::Realloc(plVar6,0,0);
          if (lVar8 != 0) {
            FMemory::Free(lVar8);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1411cec00 FUN_1411cec00 body=208 status=ok
// SIG undefined FUN_1411cec00(void)

undefined1 FUN_1411cec00(undefined8 param_1,longlong param_2,longlong param_3,undefined1 *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined1 uVar5;
  
  param_2 = param_2 + 0xe4;
  param_3 = param_3 + 0xe4;
  cVar4 = FWeakObjectPtr::IsValid(param_2);
  if (cVar4 == '\0') {
    cVar4 = FWeakObjectPtr::IsValid(param_3);
    if (cVar4 != '\0') goto LAB_1411cec3e;
LAB_1411cec92:
    uVar5 = 0;
  }
  else {
LAB_1411cec3e:
    cVar4 = FWeakObjectPtr::IsValid(param_2);
    if (cVar4 == '\x01') {
      cVar4 = FWeakObjectPtr::IsValid(param_3);
      if (cVar4 != '\0') goto LAB_1411cec5c;
      *param_4 = 1;
    }
    else {
LAB_1411cec5c:
      cVar4 = FWeakObjectPtr::IsValid(param_2);
      if (cVar4 == '\0') {
        cVar4 = FWeakObjectPtr::IsValid(param_3);
        if (cVar4 == '\x01') {
          *param_4 = 0;
          goto LAB_1411cecb8;
        }
      }
      lVar2 = FWeakObjectPtr::Get(param_2);
      lVar3 = FWeakObjectPtr::Get(param_3);
      if (lVar2 == lVar3) goto LAB_1411cec92;
      lVar2 = FWeakObjectPtr::Get(param_2);
      iVar1 = *(int *)(lVar2 + 0x88);
      lVar2 = FWeakObjectPtr::Get(param_3);
      *param_4 = *(int *)(lVar2 + 0x88) < iVar1;
    }
LAB_1411cecb8:
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 1411cecd0 FUN_1411cecd0 body=145 status=ok
// SIG undefined FUN_1411cecd0(void)

void FUN_1411cecd0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  
  lVar1 = *(longlong *)(*param_1 + 0x50);
  if (lVar1 != 0) {
    uVar3 = GetTransientPackage();
    uVar3 = UMaterialInstanceDynamic::Create(lVar1,uVar3);
    FUN_1411faea0(*param_1,uVar3);
    lVar1 = *(longlong *)(*param_1 + 0xb8);
    if ((((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x10), lVar1 != 0)) &&
        (lVar2 = *(longlong *)(*param_1 + 0xa8), lVar2 != 0)) &&
       (lVar2 = *(longlong *)(lVar2 + 0x10), lVar2 != 0)) {
      puVar4 = (undefined8 *)FName::FName(local_res8,L"Texture",1);
      FUN_1425a28b0(lVar1,*puVar4,lVar2);
    }
  }
  return;
}



// FUNCTION 1411ced70 FUN_1411ced70 body=898 status=ok
// SIG undefined FUN_1411ced70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411ced70(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  char *pcVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  char *pcVar12;
  undefined1 auStack_1d8 [32];
  undefined4 *local_1b8;
  ulonglong *puStack_1b0;
  longlong local_1a8;
  undefined8 *local_1a0;
  undefined8 local_198;
  longlong local_190;
  undefined1 local_188 [16];
  undefined1 local_178 [8];
  longlong *local_170;
  undefined1 local_160 [8];
  longlong *local_158;
  undefined1 local_148 [8];
  longlong *local_140;
  undefined1 local_130 [16];
  undefined1 local_120 [24];
  undefined1 local_108 [24];
  undefined1 local_f0 [24];
  undefined4 local_d8 [4];
  undefined1 local_c8 [24];
  undefined1 local_b0;
  undefined4 local_a8;
  undefined1 local_98 [24];
  undefined1 local_80;
  undefined4 local_78;
  undefined1 local_68 [24];
  undefined1 local_50;
  ulonglong local_48 [2];
  
  local_48[0] = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  local_1a0 = param_1;
  lVar7 = FText::FText(local_120,param_3);
  local_1a8 = lVar7;
  lVar8 = FUN_142ef3b90(local_108,*param_2,*(undefined8 *)(param_1[1] + 0x2c8),0);
  lVar9 = FText::FText(local_f0,*param_1);
  uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                     (local_148,L"{0}{1} {2} ",L"OakOnlinePlayerDetailsMenu",L"HintFormatting");
  puVar11 = (undefined8 *)FTextFormat::FTextFormat(local_130,uVar10);
  local_d8[0] = 4;
  FText::FText(local_c8,lVar9);
  local_b0 = 1;
  local_a8 = 4;
  FText::FText(local_98,lVar8);
  local_80 = 1;
  local_78 = 4;
  FText::FText(local_68,lVar7);
  local_50 = 1;
  puStack_1b0 = local_48;
  local_198 = *puVar11;
  local_190 = puVar11[1];
  if (local_190 != 0) {
    LOCK();
    *(int *)(local_190 + 8) = *(int *)(local_190 + 8) + 1;
    UNLOCK();
  }
  local_1b8 = local_d8;
  uVar10 = TArray<FFormatArgumentValue,FDefaultAllocator>::
           TArray<FFormatArgumentValue,FDefaultAllocator>(local_188,&local_1b8);
  uVar10 = FText::Format(local_160,&local_198,uVar10);
  FText::FText(local_178,uVar10);
  if (local_158 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_158 + 1;
    lVar7 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_158)(local_158);
      LOCK();
      piVar1 = (int *)((longlong)local_158 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_158 + 8))(local_158,1);
      }
    }
  }
  TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
            (local_188);
  lVar7 = 3;
  pcVar12 = &stack0xffffffffffffffe0;
  do {
    lVar7 = lVar7 + -1;
    pcVar2 = pcVar12 + -0x30;
    if (*pcVar2 != '\0') {
      *pcVar2 = '\0';
      plVar5 = *(longlong **)(pcVar12 + -0x40);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar5 + 1;
        lVar6 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
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
    }
    pcVar12 = pcVar2;
  } while (lVar7 != 0);
  plVar5 = (longlong *)puVar11[1];
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
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  plVar5 = *(longlong **)(lVar9 + 8);
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
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  plVar5 = *(longlong **)(lVar8 + 8);
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
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  plVar5 = *(longlong **)(local_1a8 + 8);
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
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  FText::operator=(*local_1a0,local_178);
  if (local_170 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_170 + 1;
    lVar7 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_170)(local_170);
      LOCK();
      piVar1 = (int *)((longlong)local_170 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_170 + 8))(local_170,1);
      }
    }
  }
  if (local_140 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_140 + 1;
    lVar7 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_140)(local_140);
      LOCK();
      piVar1 = (int *)((longlong)local_140 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_140 + 8))(local_140,1);
      }
    }
  }
  return;
}



// FUNCTION 1411cf100 FUN_1411cf100 body=1097 status=ok
// SIG undefined FUN_1411cf100(void)

void FUN_1411cf100(longlong *param_1,longlong param_2)

{
  char cVar1;
  bool bVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 local_res18 [8];
  undefined8 in_stack_ffffffffffffff98;
  uint uVar10;
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  
  uVar10 = (uint)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  lVar8 = *param_1;
  cVar1 = *(char *)(lVar8 + 0x230);
  if (cVar1 != '\x03') {
    if (cVar1 != '\x04') {
      if (cVar1 != '\x05') {
        if (cVar1 != '\x06') {
          return;
        }
        if (*(longlong *)(param_2 + 0x168) != 0) {
          return;
        }
        plVar5 = (longlong *)FName::FName(local_res18,L"Root");
        lVar8 = *plVar5;
        if (lVar8 == 0) {
          FUN_1417846f0(param_2,
                        L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                       );
        }
        uVar6 = FUN_1429ff160();
        uVar6 = FUN_1417985e0(uVar6,param_2,lVar8,0,(ulonglong)uVar10 << 0x20,0,0,0,0);
        FUN_14223f010(param_2,uVar6);
        FUN_14234b150(*(undefined8 *)(param_2 + 0x168));
        return;
      }
      lVar8 = *(longlong *)(lVar8 + 0x270);
      if (lVar8 == 0) {
        return;
      }
      lVar7 = FUN_1412fb190();
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) {
        return;
      }
      plVar5 = (longlong *)FUN_140a63a90(lVar8);
      if (plVar5 == (longlong *)0x0) {
        return;
      }
      uVar6 = (**(code **)(*plVar5 + 0x298))(plVar5,param_2);
      if (*(longlong *)(param_2 + 0x168) != 0) {
        return;
      }
      FUN_14223f010(param_2,uVar6);
      return;
    }
    lVar8 = *(longlong *)(lVar8 + 0x270);
    if (lVar8 == 0) {
      return;
    }
    lVar7 = FUN_1414ecd30();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      return;
    }
    if (param_2 != 0) {
      lVar7 = AAfrPlayerState::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) goto LAB_1411cf2fb;
    }
    param_2 = 0;
LAB_1411cf2fb:
    FUN_140b53c10(lVar8,param_2);
    return;
  }
  lVar8 = FUN_1411e5ff0();
  if ((lVar8 == 0) ||
     (plVar5 = (longlong *)
               (**(code **)(*(longlong *)(lVar8 + 0xd88) + 0xf0))((longlong *)(lVar8 + 0xd88),0),
     plVar5 == (longlong *)0x0)) {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    lVar8 = *(longlong *)(DAT_146b33f38 + 0xd0);
    if (lVar8 == 0) {
      return;
    }
    lVar9 = lVar8 + 0x240;
    lVar7 = FWeakObjectPtr::Get(lVar9);
    if (lVar7 == 0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 != *(int *)(lVar8 + 0x248)) && (*(longlong *)(lVar8 + 0x250) != 0)) {
        lVar7 = FUN_141796df0();
        FWeakObjectPtr::operator=(lVar9,lVar7);
        if ((lVar7 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(lVar8 + 0x248) = DAT_1464b56f4;
        }
        lVar7 = FWeakObjectPtr::Get(lVar9);
        if (lVar7 != 0) goto LAB_1411cf3ea;
      }
LAB_1411cf420:
      lVar7 = 0;
    }
    else {
LAB_1411cf3ea:
      lVar8 = FUN_14301f840();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_1411cf420;
    }
    FUN_1411fcec0(*param_1,lVar7);
    plVar5 = *(longlong **)(*param_1 + 0x80);
    if (plVar5 == (longlong *)0x0) {
      return;
    }
  }
  uVar6 = FUN_14301f8f0();
  uVar6 = (**(code **)(*plVar5 + 0x628))(plVar5,uVar6);
  *(undefined8 *)(*param_1 + 0x88) = uVar6;
  if (*(longlong *)(*param_1 + 0x88) == 0) {
    return;
  }
  local_38 = 0;
  local_24 = 0;
  local_30 = 0;
  local_28 = 0x1000100;
  lVar8 = *(longlong *)(*param_1 + 0x270);
  if (lVar8 != 0) {
    lVar7 = FUN_1414eba50();
    uVar3 = local_30;
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar7 = (longlong)(int)local_30;
      iVar4 = (int)local_30 + 1;
      local_30 = CONCAT44(local_30._4_4_,iVar4);
      if (local_30._4_4_ < iVar4) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                  (&local_38,uVar3 & 0xffffffff);
      }
      *(longlong *)(local_38 + lVar7 * 8) = lVar8;
      goto LAB_1411cf4fb;
    }
  }
  local_28 = CONCAT31(local_28._1_3_,1);
LAB_1411cf4fb:
  (**(code **)(**(longlong **)(*param_1 + 0x88) + 0x4e8))
            (*(longlong **)(*param_1 + 0x88),param_2,0,0,&local_38);
  if (local_38 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1411cf550 FUN_1411cf550 body=216 status=ok
// SIG undefined FUN_1411cf550(void)

undefined8 FUN_1411cf550(longlong *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar1 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar1 != '\0') {
    lVar4 = FWeakObjectPtr::Get(&local_res10);
    iVar3 = *(int *)(lVar4 + 0xc);
    if (iVar3 < (int)DAT_1469e91c4) {
      uVar6 = iVar3 >> 0x1f & 0xffff;
      uVar2 = iVar3 + uVar6;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar6) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) & 0x30000000) == 0) {
      uVar5 = FWeakObjectPtr::Get(*param_1 + 0x140);
      cVar1 = FUN_140bca910(uVar5,*param_1 + 0x148);
      if (cVar1 != '\0') {
        uVar5 = FWeakObjectPtr::Get(*param_1 + 0x140);
        iVar3 = FUN_140bba270(uVar5);
        if (1 < iVar3) {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1411cf630 FUN_1411cf630 body=3819 status=ok
// SIG undefined FUN_1411cf630(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1411cf630(longlong *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  longlong *plVar2;
  float *pfVar3;
  longlong *plVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  DWORD DVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined4 *puVar16;
  longlong lVar17;
  undefined8 uVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  longlong *plVar21;
  ulonglong uVar22;
  int *piVar23;
  undefined8 *puVar24;
  ulonglong uVar25;
  int iVar26;
  uint uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar36 [16];
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
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  undefined1 auStack_2a8 [32];
  ulonglong local_288;
  ulonglong local_280;
  undefined1 local_278;
  undefined8 local_270;
  undefined1 local_268;
  undefined1 local_258 [16];
  longlong local_248;
  undefined4 local_240;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined8 *local_230;
  uint local_228;
  int local_224;
  longlong local_218;
  undefined4 local_210;
  longlong *local_208;
  longlong local_200;
  undefined8 local_1f8;
  undefined8 *local_1f0;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  undefined8 *local_1d8;
  int *local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined4 local_1b0;
  undefined1 *local_1a8 [2];
  undefined1 local_198 [32];
  undefined8 local_178;
  undefined4 local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined1 local_108 [8];
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  ulonglong local_e8;
  
  fVar60 = fRam00000001468b5b9c;
  fVar59 = fRam00000001468b5b98;
  fVar58 = fRam00000001468b5b94;
  fVar57 = _DAT_1468b5b90;
  fVar31 = fRam00000001468b5b8c;
  fVar66 = fRam00000001468b5b88;
  fVar65 = fRam00000001468b5b84;
  fVar64 = _DAT_1468b5b80;
  fVar34 = fRam00000001468b5b7c;
  fVar52 = fRam00000001468b5b78;
  fVar46 = fRam00000001468b5b74;
  fVar33 = _DAT_1468b5b70;
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_2a8;
  plVar14 = (longlong *)param_1[2];
  plVar2 = (longlong *)*plVar14;
  local_208 = param_1;
  local_1f0 = param_2;
  if (plVar2 != (longlong *)0x0) {
    uVar12 = FUN_14301f8f0();
    lVar13 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar12);
    plVar14 = (longlong *)0x0;
    if ((lVar13 != 0) && (plVar14 = *(longlong **)(lVar13 + 0x208), plVar14 != (longlong *)0x0)) {
      fVar33 = *(float *)(plVar14 + 0x48);
      fVar46 = *(float *)((longlong)plVar14 + 0x244);
      fVar52 = *(float *)(plVar14 + 0x49);
      fVar34 = *(float *)((longlong)plVar14 + 0x24c);
      fVar64 = *(float *)(plVar14 + 0x4a);
      fVar65 = *(float *)((longlong)plVar14 + 0x254);
      fVar66 = *(float *)(plVar14 + 0x4b);
      fVar31 = *(float *)((longlong)plVar14 + 0x25c);
      fVar57 = *(float *)(plVar14 + 0x4c);
      fVar58 = *(float *)((longlong)plVar14 + 0x264);
      fVar59 = *(float *)(plVar14 + 0x4d);
      fVar60 = *(float *)((longlong)plVar14 + 0x26c);
    }
  }
  fVar39 = fRam0000000146876708;
  fVar37 = fRam0000000146876704;
  fVar35 = _DAT_146876700;
  pfVar3 = (float *)*param_1;
  auVar1 = *(undefined1 (*) [16])(pfVar3 + 8);
  fVar5 = auVar1._0_4_;
  fVar6 = auVar1._4_4_;
  fVar7 = auVar1._8_4_;
  auVar28._4_4_ = fVar58;
  auVar28._0_4_ = fVar57;
  auVar28._8_4_ = fVar59;
  auVar28._12_4_ = fVar60;
  auVar28 = minps(auVar1,auVar28);
  auVar29._4_4_ = -(uint)(auVar28._4_4_ < fRam0000000146876764);
  auVar29._0_4_ = -(uint)(auVar28._0_4_ < _DAT_146876760);
  auVar29._8_4_ = -(uint)(auVar28._8_4_ < fRam0000000146876768);
  auVar29._12_4_ = -(uint)(auVar28._12_4_ < fRam000000014687676c);
  iVar10 = movmskps((int)plVar14,auVar29);
  if (iVar10 == 0) {
    fVar35 = *pfVar3;
    fVar37 = pfVar3[1];
    fVar39 = pfVar3[2];
    fVar38 = pfVar3[3];
    fVar44 = fVar57 * pfVar3[4];
    fVar32 = fVar58 * pfVar3[5];
    fVar41 = fVar59 * pfVar3[6];
    fVar40 = fVar60 * pfVar3[7];
    local_118 = fVar52 * fVar37 * _DAT_146876720 +
                fVar34 * fVar35 + fVar33 * fVar38 * _DAT_146876740 +
                fVar46 * fVar39 * _DAT_146876730;
    fStack_114 = fVar52 * fVar35 * fRam0000000146876724 +
                 fVar34 * fVar37 + fVar33 * fVar39 * fRam0000000146876744 +
                 fVar46 * fVar38 * fRam0000000146876734;
    fStack_110 = fVar52 * fVar38 * fRam0000000146876728 +
                 fVar34 * fVar39 + fVar33 * fVar37 * fRam0000000146876748 +
                 fVar46 * fVar35 * fRam0000000146876738;
    fStack_10c = fVar52 * fVar39 * fRam000000014687672c +
                 fVar34 * fVar38 + fVar33 * fVar35 * fRam000000014687674c +
                 fVar46 * fVar37 * fRam000000014687673c;
    fVar35 = fVar41 * fVar46 - fVar32 * fVar52;
    fVar37 = fVar44 * fVar52 - fVar41 * fVar33;
    fVar39 = fVar32 * fVar33 - fVar44 * fVar46;
    fVar38 = fVar40 * fVar34 - fVar40 * fVar34;
    fVar35 = fVar35 + fVar35;
    fVar37 = fVar37 + fVar37;
    fVar39 = fVar39 + fVar39;
    fVar38 = fVar38 + fVar38;
    local_108._4_4_ = fVar65 + (fVar35 * fVar52 - fVar39 * fVar33) + fVar32 + fVar37 * fVar34;
    local_108._0_4_ = fVar64 + (fVar39 * fVar46 - fVar37 * fVar52) + fVar44 + fVar35 * fVar34;
    fStack_100 = fVar66 + (fVar37 * fVar33 - fVar35 * fVar46) + fVar41 + fVar39 * fVar34;
    fStack_fc = fVar31 + (fVar38 * fVar34 - fVar38 * fVar34) + fVar40 + fVar38 * fVar34;
  }
  else {
    fVar40 = fVar46 + fVar46;
    fVar42 = fVar52 + fVar52;
    fVar31 = (fVar33 + fVar33) * fVar33;
    fVar41 = (fVar33 + fVar33) * fVar34;
    fVar43 = (float)((uint)((_DAT_146876700 - (fVar42 * fVar52 + fVar40 * fVar46)) * fVar57) &
                    _DAT_146876710);
    fVar45 = (float)((uint)((fRam0000000146876704 - (fVar42 * fVar52 + fVar31)) * fVar58) &
                    uRam0000000146876714);
    fVar47 = (float)((uint)((fRam0000000146876708 - (fVar40 * fVar46 + fVar31)) * fVar59) &
                    uRam0000000146876718);
    fVar48 = (float)((uint)((fRam000000014687670c - (fVar31 + fVar31)) * fVar60) &
                    uRam000000014687671c);
    fVar52 = *pfVar3;
    fVar31 = pfVar3[1];
    fVar38 = pfVar3[2];
    fVar44 = pfVar3[3];
    fVar61 = (fVar42 * fVar34 + fVar40 * fVar33) * fVar57;
    fVar62 = (fVar41 + fVar42 * fVar46) * fVar58;
    fVar63 = (fVar40 * fVar34 + fVar42 * fVar33) * fVar59;
    fVar32 = (fVar40 * fVar33 - fVar42 * fVar34) * fVar58;
    fVar41 = (fVar42 * fVar46 - fVar41) * fVar59;
    fVar40 = (fVar42 * fVar33 - fVar40 * fVar34) * fVar57;
    fVar46 = fVar31 + fVar31;
    fVar42 = fVar38 + fVar38;
    fVar33 = (fVar52 + fVar52) * fVar52;
    fVar49 = (float)((uint)(fVar5 * (_DAT_146876700 - (fVar42 * fVar38 + fVar46 * fVar31))) &
                    _DAT_146876710);
    fVar50 = (float)((uint)(fVar6 * (fRam0000000146876704 - (fVar42 * fVar38 + fVar33))) &
                    uRam0000000146876714);
    fVar51 = (float)((uint)(fVar7 * (fRam0000000146876708 - (fVar46 * fVar31 + fVar33))) &
                    uRam0000000146876718);
    fVar53 = (float)((uint)(auVar1._12_4_ * (fRam000000014687670c - (fVar33 + fVar33))) &
                    uRam000000014687671c);
    fVar33 = (fVar52 + fVar52) * fVar44;
    fVar54 = fVar5 * (fVar42 * fVar44 + fVar46 * fVar52);
    fVar55 = fVar6 * (fVar33 + fVar42 * fVar31);
    fVar56 = fVar7 * (fVar46 * fVar44 + fVar42 * fVar52);
    fVar34 = (fVar46 * fVar52 - fVar42 * fVar44) * fVar6;
    fVar31 = (fVar42 * fVar31 - fVar33) * fVar7;
    fVar38 = (fVar42 * fVar52 - fVar46 * fVar44) * fVar5;
    fVar33 = pfVar3[4];
    fVar46 = pfVar3[5];
    fVar52 = pfVar3[6];
    local_158._0_4_ = fVar49 * fVar43 + fVar54 * fVar32 + fVar38 * fVar63 + fVar53 * fVar64;
    local_158._4_4_ = fVar49 * fVar61 + fVar54 * fVar45 + fVar38 * fVar41 + fVar53 * fVar65;
    uStack_150._0_4_ = fVar49 * fVar40 + fVar54 * fVar62 + fVar38 * fVar47 + fVar53 * fVar66;
    uStack_150._4_4_ =
         fVar49 * fVar48 + fVar54 * fVar48 + fVar38 * fVar48 + fVar53 * fRam000000014687670c;
    local_148._0_4_ = fVar34 * fVar43 + fVar50 * fVar32 + fVar55 * fVar63 + fVar53 * fVar64;
    local_148._4_4_ = fVar34 * fVar61 + fVar50 * fVar45 + fVar55 * fVar41 + fVar53 * fVar65;
    uStack_140._0_4_ = fVar34 * fVar40 + fVar50 * fVar62 + fVar55 * fVar47 + fVar53 * fVar66;
    uStack_140._4_4_ =
         fVar34 * fVar48 + fVar50 * fVar48 + fVar55 * fVar48 + fVar53 * fRam000000014687670c;
    local_138._0_4_ = fVar56 * fVar43 + fVar31 * fVar32 + fVar51 * fVar63 + fVar53 * fVar64;
    local_138._4_4_ = fVar56 * fVar61 + fVar31 * fVar45 + fVar51 * fVar41 + fVar53 * fVar65;
    uStack_130._0_4_ = fVar56 * fVar40 + fVar31 * fVar62 + fVar51 * fVar47 + fVar53 * fVar66;
    uStack_130._4_4_ =
         fVar56 * fVar48 + fVar31 * fVar48 + fVar51 * fVar48 + fVar53 * fRam000000014687670c;
    local_128 = fRam000000014687670c * fVar64 + fVar33 * fVar43 + fVar46 * fVar32 + fVar52 * fVar63;
    fStack_124 = fRam000000014687670c * fVar65 + fVar33 * fVar61 + fVar46 * fVar45 + fVar52 * fVar41
    ;
    fStack_120 = fRam000000014687670c * fVar66 + fVar33 * fVar40 + fVar46 * fVar62 + fVar52 * fVar47
    ;
    fStack_11c = fRam000000014687670c * fRam000000014687670c +
                 fVar33 * fVar48 + fVar46 * fVar48 + fVar52 * fVar48;
    FMatrix::RemoveScaling(&local_158);
    fVar33 = (float)((_DAT_146876750 ^ (uint)fVar35) & -(uint)(_DAT_146876760 <= fVar5 * fVar57) ^
                    _DAT_146876750);
    fVar46 = (float)((uRam0000000146876754 ^ (uint)fVar37) &
                     -(uint)(fRam0000000146876764 <= fVar6 * fVar58) ^ uRam0000000146876754);
    fVar52 = (float)((uRam0000000146876758 ^ (uint)fVar39) &
                     -(uint)(fRam0000000146876768 <= fVar7 * fVar59) ^ uRam0000000146876758);
    uStack_150 = CONCAT44(uStack_150._4_4_,(float)uStack_150 * fVar33);
    local_158 = CONCAT44(local_158._4_4_ * fVar33,(float)local_158 * fVar33);
    local_148 = CONCAT44(local_148._4_4_ * fVar46,(float)local_148 * fVar46);
    local_138 = CONCAT44(local_138._4_4_ * fVar52,(float)local_138 * fVar52);
    uStack_140 = CONCAT44(uStack_140._4_4_,(float)uStack_140 * fVar46);
    uStack_130 = CONCAT44(uStack_130._4_4_,(float)uStack_130 * fVar52);
    FQuat::FQuat(&local_1e8,&local_158);
    local_248 = CONCAT44(local_248._4_4_,0x322bcc77);
    auVar36._0_4_ = local_1e8 * local_1e8 + fStack_1e0 * fStack_1e0;
    auVar36._4_4_ = fStack_1e4 * fStack_1e4 + fStack_1dc * fStack_1dc;
    auVar36._8_4_ = fStack_1e0 * fStack_1e0 + local_1e8 * local_1e8;
    auVar36._12_4_ = fStack_1dc * fStack_1dc + fStack_1e4 * fStack_1e4;
    auVar30._0_4_ = auVar36._4_4_ + auVar36._0_4_;
    auVar30._4_4_ = auVar36._8_4_ + auVar36._4_4_;
    auVar30._8_4_ = auVar36._12_4_ + auVar36._8_4_;
    auVar30._12_4_ = auVar36._0_4_ + auVar36._12_4_;
    auVar28 = rsqrtps(auVar36,auVar30);
    fVar33 = auVar28._0_4_;
    fVar46 = auVar28._4_4_;
    fVar52 = auVar28._8_4_;
    fVar34 = auVar28._12_4_;
    fVar33 = (_DAT_1468766f0 - fVar33 * fVar33 * auVar30._0_4_ * _DAT_1468766f0) * fVar33 + fVar33;
    fVar46 = (fRam00000001468766f4 - fVar46 * fVar46 * auVar30._4_4_ * fRam00000001468766f4) *
             fVar46 + fVar46;
    fVar52 = (fRam00000001468766f8 - fVar52 * fVar52 * auVar30._8_4_ * fRam00000001468766f8) *
             fVar52 + fVar52;
    fVar34 = (fRam00000001468766fc - fVar34 * fVar34 * auVar30._12_4_ * fRam00000001468766fc) *
             fVar34 + fVar34;
    local_108._4_4_ = fStack_124;
    local_108._0_4_ = local_128;
    fStack_100 = fStack_120;
    fStack_fc = 0.0;
    local_118 = (float)(((uint)((fVar33 + (_DAT_1468766f0 -
                                          fVar33 * fVar33 * auVar30._0_4_ * _DAT_1468766f0) * fVar33
                                ) * local_1e8) ^ _DAT_1468766e0) & -(uint)(1e-08 <= auVar30._0_4_) ^
                       _DAT_1468766e0);
    fStack_114 = (float)(((uint)((fVar46 + (fRam00000001468766f4 -
                                           fVar46 * fVar46 * auVar30._4_4_ * fRam00000001468766f4) *
                                           fVar46) * fStack_1e4) ^ uRam00000001468766e4) &
                         -(uint)(1e-08 <= auVar30._4_4_) ^ uRam00000001468766e4);
    fStack_110 = (float)(((uint)((fVar52 + (fRam00000001468766f8 -
                                           fVar52 * fVar52 * auVar30._8_4_ * fRam00000001468766f8) *
                                           fVar52) * fStack_1e0) ^ uRam00000001468766e8) &
                         -(uint)(1e-08 <= auVar30._8_4_) ^ uRam00000001468766e8);
    fStack_10c = (float)(((uint)((fVar34 + (fRam00000001468766fc -
                                           fVar34 * fVar34 * auVar30._12_4_ * fRam00000001468766fc)
                                           * fVar34) * fStack_1dc) ^ uRam00000001468766ec) &
                         -(uint)(1e-08 <= auVar30._12_4_) ^ uRam00000001468766ec);
  }
  fStack_ec = auVar1._12_4_ * fVar60;
  fStack_f0 = fVar7 * fVar59;
  fStack_f4 = fVar6 * fVar58;
  local_f8 = fVar5 * fVar57;
  *param_2 = 0xffffffffffffffff;
  local_1d8 = param_2 + 4;
  puVar20 = (undefined8 *)0x0;
  param_2[1] = 0;
  piVar23 = (int *)(param_2 + 3);
  param_2[2] = 0;
  *piVar23 = -1;
  *local_1d8 = 0;
  local_1d0 = piVar23;
  iVar10 = FUN_1411e7140(param_1[1]);
  if (iVar10 == -1) {
    return param_2;
  }
  plVar14 = (longlong *)FUN_1411e0920(param_1[1]);
  if (plVar14 == (longlong *)0x0) {
    return param_2;
  }
  FUN_142749aa0(plVar14);
  FUN_142748630(plVar14);
  *piVar23 = iVar10;
  local_230 = (undefined8 *)0x0;
  local_224 = 0;
  plVar2 = *(longlong **)param_1[2];
  puVar24 = puVar20;
  if (plVar2 == (longlong *)0x0) goto LAB_1411d04a6;
  if ((*(longlong *)(param_1[1] + 0xb8) == 0) ||
     (*(longlong *)(*(longlong *)(param_1[1] + 0xb8) + 0x10) == 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  puVar24 = (undefined8 *)0x0;
  if (!bVar8) goto LAB_1411d04a6;
  local_238 = 0xffffffff;
  uStack_234 = 0;
  uVar12 = FUN_14301f8f0();
  lVar13 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar12);
  if (lVar13 == 0) {
LAB_1411cff5f:
    local_288 = local_288 & 0xffffffffffffff00;
    puVar16 = (undefined4 *)
              FUN_14275e9d0(plVar14,&local_218,*(undefined8 *)(*(longlong *)param_1[2] + 0x10),
                            &local_118);
    local_238 = *puVar16;
    uStack_234 = puVar16[1];
  }
  else {
    plVar2 = *(longlong **)param_1[2];
    uVar12 = FUN_1429bed90();
    lVar15 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar12);
    if (lVar15 == 0) goto LAB_1411cff5f;
    uVar12 = FUN_1428dfc70();
    local_288 = local_288 & 0xffffffffffffff00;
    puVar16 = (undefined4 *)FUN_14275e9d0(plVar14,&local_218,uVar12,&local_118);
    local_238 = *puVar16;
    uStack_234 = puVar16[1];
    uVar12 = FWeakObjectPtr::Get(&local_238);
    FUN_142fea810(lVar13,uVar12,0,0);
    if (*(longlong *)(lVar13 + 0x290) != 0) {
      lVar15 = FWeakObjectPtr::Get(&local_238);
      lVar15 = *(longlong *)(lVar15 + 0x168);
      if (lVar15 != 0) {
        lVar17 = FUN_142a07000();
        if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) < *(int *)(lVar17 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar17 + 0x90) * 8) != lVar17 + 0x88)) {
          bVar8 = false;
        }
        else {
          bVar8 = true;
        }
        if (bVar8) {
          local_200 = 0;
          local_1f8 = 0;
          FUN_142ff8bf0(lVar13,&local_200);
          FUN_1424a2eb0(*(undefined8 *)(lVar13 + 0x290),&local_200,lVar15 + 0x940);
          if (local_200 != 0) {
            FMemory::Free();
          }
        }
      }
    }
    uVar12 = FUN_1429bed90();
    uVar18 = FWeakObjectPtr::Get(&local_238);
    AActor::GetComponentsByClass(uVar18,&local_1e8,uVar12);
    plVar21 = (longlong *)CONCAT44(fStack_1e4,local_1e8);
    plVar2 = plVar21 + (int)fStack_1e0;
    if (plVar21 != plVar2) {
      do {
        plVar4 = (longlong *)*plVar21;
        if (plVar4 != (longlong *)0x0) {
          lVar13 = FUN_1429bed90();
          if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar13 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar13 + 0x90) * 8)
              != lVar13 + 0x88)) {
            bVar8 = false;
          }
          else {
            bVar8 = true;
          }
          if (bVar8) {
            FUN_142397000(plVar4,0,0,0);
            local_1b0 = 0x3f800000;
            local_210 = 0x3f800000;
            local_218 = 0x3f8000003f800000;
            (**(code **)(*plVar4 + 0x3f8))(plVar4,&local_218);
            local_280 = local_280 & 0xffffffffffffff00;
            local_1f8 = CONCAT44(local_1f8._4_4_,fStack_100);
            local_248 = local_108;
            local_1c8 = CONCAT44(fStack_114,local_118);
            uStack_1c0 = CONCAT44(fStack_10c,fStack_110);
            local_240 = fStack_100;
            local_288 = 0;
            FUN_142397be0(plVar4,&local_248,&local_1c8);
            (**(code **)(*plVar4 + 0x4b8))(plVar4);
            FUN_14234b090(plVar4);
          }
        }
        plVar21 = plVar21 + 1;
      } while (plVar21 != plVar2);
      plVar21 = (longlong *)CONCAT44(fStack_1e4,local_1e8);
    }
    if (plVar21 != (longlong *)0x0) {
      FMemory::Free(plVar21);
    }
    uVar12 = FWeakObjectPtr::Get(&local_238);
    local_288 = local_288 & 0xffffffffffffff00;
    FUN_14223d270(uVar12,&local_118,0,0);
  }
  lVar13 = *param_1;
  lVar15 = FUN_1411e0920(param_1[1]);
  if (lVar15 != 0) {
    local_248 = DAT_1468768a0;
    cVar9 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar9 == '\0') && (DAT_1468c21ae != '\0')) {
      GetCurrentThreadId();
    }
    FPreviewScene::SetLightDirection(lVar15,lVar13 + 0x30);
    FUN_142717a50(lVar15);
    FUN_142717a60(lVar15,lVar13 + 0x40);
    FUN_14275bd20(lVar15,lVar13 + 0x58);
  }
  lVar13 = *(longlong *)(*param_1 + 0x48);
  local_218 = lVar13 + (longlong)*(int *)(*param_1 + 0x50) * 0x14;
  puVar24 = puVar20;
  if (lVar13 != local_218) {
    local_248 = 0;
    iVar10 = local_224;
    do {
      FUN_14172a070(local_258);
      uVar12 = GetTransientPackage();
      FUN_1417846f0(uVar12,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
      uVar18 = UAtmosphericFogComponent::GetPrivateStaticClass();
      local_268 = 0;
      local_270 = 0;
      local_278 = 0;
      local_280 = 0;
      local_288 = local_288 & 0xffffffff00000000;
      lVar15 = FUN_1417985e0(uVar18,uVar12,0,0);
      FUN_14172a400(local_258);
      if (lVar15 != 0) {
        local_248 = DAT_1468768a0;
        cVar9 = FUN_1415ad720(&DAT_1468e2448);
        if (((cVar9 == '\0') && (DAT_1468c21ae != '\0')) &&
           (DVar11 = GetCurrentThreadId(), DVar11 != DAT_1468c21c0)) {
          lVar17 = 1;
        }
        else {
          lVar17 = 0;
        }
        *(float *)(lVar15 + 0x2e4) = *(float *)(local_248 + lVar17 * 4) * *(float *)(lVar13 + 0xc);
        *(undefined4 *)(lVar15 + 0x2e8) = *(undefined4 *)(lVar13 + 0x10);
      }
      if (lVar15 != 0) {
        FRotator::Quaternion(lVar13,&local_1c8);
        local_138 = CONCAT44((uint)fRam0000000146876704 & uRam0000000146876714,
                             (uint)_DAT_146876700 & _DAT_146876710);
        uStack_130 = CONCAT44((uint)fRam000000014687670c & uRam000000014687671c,
                              (uint)fRam0000000146876708 & uRam0000000146876718);
        local_158 = local_1c8;
        uStack_150 = uStack_1c0;
        local_148 = 0;
        uStack_140 = 0;
        (**(code **)(*plVar14 + 0x18))(plVar14,lVar15,&local_158);
        iVar26 = (int)puVar24;
        local_228 = iVar26 + 1;
        local_248 = CONCAT44(local_248._4_4_,iVar26);
        if (iVar10 < (int)local_228) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_230,puVar24);
          puVar20 = local_230;
          iVar10 = local_224;
          iVar26 = (int)local_248;
        }
        puVar24 = (undefined8 *)(ulonglong)local_228;
        puVar20[iVar26] = lVar15;
      }
      lVar13 = lVar13 + 0x14;
      param_1 = local_208;
    } while (lVar13 != local_218);
  }
  uVar27 = (uint)puVar24;
  FUN_14172a070(local_258);
  uVar12 = GetTransientPackage();
  FUN_1417846f0(uVar12,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  local_248 = 0;
  uVar18 = ACineCameraActor::GetPrivateStaticClass();
  local_268 = 0;
  local_270 = 0;
  local_278 = 0;
  local_280 = 0;
  local_288 = local_288 & 0xffffffff00000000;
  lVar13 = FUN_1417985e0(uVar18,uVar12,0,0);
  FUN_14172a400(local_258);
  if (lVar13 != 0) {
    *(uint *)(lVar13 + 0x8ec) = *(uint *)(lVar13 + 0x8ec) | 2;
    FUN_140a296b0(lVar13 + 0x2e0,*param_1 + 0x70);
    (**(code **)(*plVar14 + 0x18))(plVar14,lVar13,&DAT_1468b5b70,0);
    local_228 = uVar27 + 1;
    if (local_224 < (int)local_228) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_230,puVar24);
      puVar20 = local_230;
    }
    puVar20[(int)uVar27] = lVar13;
    uVar27 = local_228;
  }
  uVar25 = 0;
  lVar13 = FTcpDeserializedMessage::GetMessage(plVar14);
  *(undefined1 *)(lVar13 + 0x35c) = 1;
  FUN_14275f290(plVar14);
  lVar13 = DAT_1468768b8;
  cVar9 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar9 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar11 = GetCurrentThreadId(), uVar22 = 1, DVar11 == DAT_1468c21c0)) {
    uVar22 = uVar25;
  }
  uVar19 = uVar25;
  if (*(longlong *)(param_1[1] + 0xa8) != 0) {
    uVar19 = *(ulonglong *)(*(longlong *)(param_1[1] + 0xa8) + 0x10);
  }
  *(undefined4 *)(uVar19 + 0xb8) = *(undefined4 *)(lVar13 + uVar22 * 4);
  lVar13 = param_1[1];
  local_280 = uVar25;
  if (*(longlong *)(lVar13 + 0xa8) != 0) {
    local_280 = *(ulonglong *)(*(longlong *)(lVar13 + 0xa8) + 0x10);
  }
  local_288 = CONCAT44(local_288._4_4_,*(undefined4 *)(lVar13 + 0x4c));
  FUN_14274a5f0(plVar14,0,0,*(undefined4 *)(lVar13 + 0x48));
  local_208 = (longlong *)CONCAT44(uStack_234,local_238);
  FUN_1427499d0(plVar14,&local_208);
  uVar22 = (ulonglong)((longlong)(puVar20 + (int)uVar27) + (7 - (longlong)puVar20)) >> 3;
  if (puVar20 + (int)uVar27 < puVar20) {
    uVar22 = 0;
  }
  puVar24 = puVar20;
  if (uVar22 != 0) {
    do {
      plVar2 = (longlong *)*puVar24;
      (**(code **)(*plVar14 + 0x20))(plVar14,plVar2);
      (**(code **)(*plVar2 + 0x3b0))(plVar2,0);
      uVar25 = uVar25 + 1;
      puVar24 = puVar24 + 1;
    } while (uVar25 != uVar22);
  }
  lVar13 = FUN_1411e71d0(param_1[1]);
  piVar23 = local_1d0;
  puVar24 = puVar20;
  param_2 = local_1f0;
  if (lVar13 != 0) {
    FUN_141edede0(local_1d8,0);
    param_2 = local_1f0;
    FUN_14170c210(local_1f0,lVar13);
    lVar13 = param_1[1];
    puVar20 = (undefined8 *)param_1[2];
    FUN_140f16ab0(&local_158,param_2);
    uStack_130 = *puVar20;
    local_128 = (float)lVar13;
    fStack_124 = (float)((ulonglong)lVar13 >> 0x20);
    local_178 = 0;
    local_168 = 0;
    puVar20 = (undefined8 *)FUN_140438ef0(0x40,local_198);
    if (puVar20 != (undefined8 *)0x0) {
      *puVar20 = &PTR_FUN_1446feb20;
      *(float *)(puVar20 + 1) = (float)local_158;
      *(float *)((longlong)puVar20 + 0xc) = local_158._4_4_;
      local_158 = 0xffffffffffffffff;
      puVar20[2] = uStack_150;
      puVar20[3] = local_148;
      local_148 = 0;
      uStack_150 = 0;
      *(float *)(puVar20 + 4) = (float)uStack_140;
      puVar20[5] = local_138;
      local_138 = 0;
      puVar20[6] = uStack_130;
      puVar20[7] = CONCAT44(fStack_124,local_128);
    }
    local_1a8[0] = &LAB_1411d5260;
    FUN_14204c280(local_1a8);
    FUN_140ddef50(&local_158);
    piVar23 = (int *)(param_2 + 3);
  }
LAB_1411d04a6:
  lVar13 = FUN_1416f8720(*(undefined4 *)param_2);
  if (lVar13 == 0) {
    FUN_1411e0210(param_1[1],piVar23);
  }
  if (puVar24 != (undefined8 *)0x0) {
    FMemory::Free(puVar24);
  }
  return param_2;
}



// FUNCTION 1411d0520 FUN_1411d0520 body=460 status=ok
// SIG undefined FUN_1411d0520(void)

void FUN_1411d0520(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  undefined8 uVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong *local_450;
  undefined1 local_448 [328];
  undefined8 local_300;
  undefined1 local_2f8 [32];
  undefined1 local_2d8 [360];
  undefined1 local_170 [360];
  
  if (param_2 != 0) {
    plVar3 = (longlong *)*param_1;
    cVar7 = FUN_1411d74a0(param_2,plVar3);
    if (cVar7 != '\0') {
      lVar4 = *(longlong *)(param_2 + 0x30);
      lVar11 = (longlong)*(int *)(param_2 + 0x38) * 0x168 + lVar4;
      if (lVar4 != lVar11) {
        lVar9 = lVar4;
        do {
          if (*plVar3 == *(longlong *)(lVar9 + 0x140)) {
            if (((lVar9 != lVar11) && (iVar10 = (int)((lVar9 - lVar4) / 0x168), -1 < iVar10)) &&
               (iVar10 < *(int *)(param_2 + 0x38))) {
              uVar8 = FUN_1411c9050(local_170,(longlong)iVar10 * 0x168 + lVar4);
              bVar5 = false;
              bVar6 = true;
              goto LAB_1411d05ab;
            }
            break;
          }
          lVar9 = lVar9 + 0x168;
        } while (lVar9 != lVar11);
      }
      uVar8 = FUN_1411c9410(local_2d8);
      bVar6 = false;
      bVar5 = true;
LAB_1411d05ab:
      FUN_1411c8eb0(local_448,uVar8);
      if (bVar5) {
        FUN_1411ca750(local_2d8);
      }
      if (bVar6) {
        FUN_1411ca750(local_170);
      }
      local_450 = (longlong *)((undefined8 *)param_1[1])[1];
      local_300 = *(undefined8 *)param_1[1];
      if (local_450 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_450 + 1) = (int)local_450[1] + 1;
        UNLOCK();
      }
      SharedPointerInternals::FSharedReferencer<1>::operator=(local_2f8,&local_450);
      plVar3 = local_450;
      if (local_450 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_450 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_450)(local_450);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar10 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*local_450 + 8))(local_450,1);
          }
        }
      }
      FUN_1411ff0a0(param_2,local_448);
      FUN_1411ca750(local_448);
    }
  }
  return;
}



// FUNCTION 1411d06f0 FUN_1411d06f0 body=359 status=ok
// SIG undefined FUN_1411d06f0(void)

ulonglong FUN_1411d06f0(undefined8 *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  bool bVar8;
  ulonglong local_res8;
  
  if ((*(char *)param_1[4] != '\0') && (*(char *)(param_2 + 0x58) != *(char *)(param_3 + 0x58))) {
    return (ulonglong)(*(char *)(param_2 + 0x58) == '\0');
  }
  lVar1 = param_1[5];
  if (*(int *)(lVar1 + 0x40) != 0) {
    lVar6 = 0;
    if (*(longlong *)(lVar1 + 0x30) == 0) {
      lVar6 = lVar1 + 0x10;
    }
    if ((lVar6 != 0 || *(longlong *)(lVar1 + 0x30) != 0) &&
       (uVar3 = FUN_1411d25d0(lVar1,param_2,param_3), uVar3 != 0)) {
      return (ulonglong)(uVar3 >> 0x1f);
    }
  }
  bVar7 = false;
  if (*(char *)(param_1[1] + 0x18) != '\0') {
    if ((*(char *)((longlong *)param_1[3])[1] == '\0') ||
       (*(char *)(param_2 + 0x58) == *(char *)(param_3 + 0x58))) {
      local_res8 = 0;
      lVar1 = *(longlong *)(*(longlong *)param_1[3] + 0x20);
      if (lVar1 != 0) {
        bVar7 = *(longlong *)(param_2 + 0x100) == lVar1;
        bVar8 = *(longlong *)(param_3 + 0x100) == lVar1;
        if (bVar7 != bVar8) {
          bVar7 = !bVar8 && bVar7;
          goto LAB_1411d07e6;
        }
      }
    }
    else if (*(char *)(param_2 + 0x58) == '\0') {
LAB_1411d07e6:
      return (ulonglong)bVar7;
    }
  }
  iVar4 = FUN_1411cdd60(param_1[2],param_2);
  iVar5 = FUN_1411cdd60(param_1[2],param_3);
  if (iVar4 == iVar5) {
    if (*(int *)(param_2 + 0x50) == *(int *)(param_3 + 0x50)) {
      local_res8 = local_res8 & 0xffffffffffffff00;
      cVar2 = FUN_1411cec00(*param_1,param_2,param_3,&local_res8);
      if (cVar2 == '\0') {
        iVar4 = FText::CompareTo(param_2 + 0x38,param_3 + 0x38,0);
        if (iVar4 == 0) {
          iVar4 = FText::CompareTo(param_2,param_3,0);
        }
        local_res8 = (ulonglong)(iVar4 < 0);
      }
      else {
        local_res8 = local_res8 & 0xff;
      }
    }
    else {
      local_res8 = (ulonglong)(*(int *)(param_3 + 0x50) <= *(int *)(param_2 + 0x50));
    }
  }
  else {
    local_res8 = (ulonglong)(iVar4 < iVar5);
  }
  return local_res8;
}



// FUNCTION 1411d0860 FUN_1411d0860 body=718 status=ok
// SIG undefined FUN_1411d0860(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411d0860(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined1 auStack_178 [32];
  undefined1 local_158 [8];
  longlong local_150 [8];
  longlong *local_110;
  undefined8 local_108;
  longlong local_100 [24];
  longlong *local_40;
  undefined8 local_38;
  ulonglong local_30;
  longlong *plVar11;
  
  if (param_2 != 0) {
    local_30 = DAT_1468387a8 ^ (ulonglong)auStack_178;
    plVar11 = (longlong *)(param_2 + 0x3b0);
    plVar5 = (longlong *)FMemory::Realloc(0,0x20);
    plVar14 = (longlong *)0x0;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = (longlong)&PTR_GetPoolName_143f4c9a8;
      plVar5[1] = (longlong)FUN_1411d85e0;
      lVar6 = FDelegateHandle::GenerateNewID();
      plVar5[3] = lVar6;
      *plVar5 = (longlong)&PTR_GetPoolName_143f4c9f0;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar11,1);
      (**(code **)(*plVar5 + 0x20))(plVar5,local_158);
      iVar4 = *(int *)(param_2 + 0x3b8);
      *(int *)(param_2 + 0x3b8) = iVar4 + 1;
      if (*(int *)(param_2 + 0x3bc) < iVar4 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar11,iVar4);
      }
      lVar6 = *plVar11;
      *(longlong **)(lVar6 + (longlong)iVar4 * 0x10) = plVar5;
      *(undefined4 *)(lVar6 + 8 + (longlong)iVar4 * 0x10) = 2;
    }
    local_40 = (longlong *)0x0;
    local_38 = 0;
    FUN_140749cd0(param_2,local_100,0);
    local_108 = 0;
    plVar11 = local_100;
    if (local_40 != (longlong *)0x0) {
      plVar11 = local_40;
    }
    local_110 = (longlong *)0x0;
    plVar5 = plVar11 + (int)local_38;
    plVar9 = plVar14;
    for (; plVar11 != plVar5; plVar11 = plVar11 + 1) {
      plVar12 = *(longlong **)(*plVar11 + 0x1a0);
      plVar1 = plVar12 + *(int *)(*plVar11 + 0x1a8);
      for (; plVar12 != plVar1; plVar12 = plVar12 + 1) {
        lVar6 = *plVar12;
        if (lVar6 != 0) {
          lVar7 = AGFreezeCharacterCue::GetPrivateStaticClass();
          uVar3 = local_108;
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          plVar9 = local_110;
          if (bVar2) {
            plVar13 = local_150;
            if (local_110 != (longlong *)0x0) {
              plVar13 = local_110;
            }
            for (plVar8 = plVar13; plVar8 != plVar13 + (int)local_108; plVar8 = plVar8 + 1) {
              if (*plVar8 == lVar6) {
                if ((int)((longlong)plVar8 - (longlong)plVar13 >> 3) != -1) goto LAB_1411d0a5e;
                break;
              }
            }
            lVar7 = (longlong)(int)local_108;
            iVar4 = (int)local_108 + 1;
            local_108 = CONCAT44(local_108._4_4_,iVar4);
            if (local_108._4_4_ < iVar4) {
              TArray<UActionBase_*,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow
                        (local_150,uVar3 & 0xffffffff);
            }
            plVar9 = local_150;
            if (local_110 != (longlong *)0x0) {
              plVar9 = local_110;
            }
            plVar9[lVar7] = lVar6;
            plVar9 = local_110;
          }
        }
LAB_1411d0a5e:
      }
    }
    plVar11 = local_150;
    if (plVar9 != (longlong *)0x0) {
      plVar11 = plVar14;
    }
    puVar10 = (undefined8 *)((ulonglong)plVar11 | (ulonglong)plVar9);
    plVar11 = (longlong *)((longlong)(int)local_108 & 0x1fffffffffffffff);
    if (puVar10 + (int)local_108 < puVar10) {
      plVar11 = plVar14;
    }
    if (plVar11 != (longlong *)0x0) {
      do {
        (**(code **)(*(longlong *)*puVar10 + 0x288))();
        plVar14 = (longlong *)((longlong)plVar14 + 1);
        puVar10 = puVar10 + 1;
        plVar9 = local_110;
      } while (plVar14 != plVar11);
    }
    if (plVar9 != (longlong *)0x0) {
      FMemory::Free(plVar9);
    }
    if (local_40 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1411d0b30 FUN_1411d0b30 body=557 status=ok
// SIG undefined FUN_1411d0b30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_1411d0b30(undefined8 param_1,float *param_2,float *param_3,float *param_4,
                     undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 local_res18 [16];
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  local_28 = -*param_3;
  fStack_1c = param_3[3];
  fStack_20 = -param_3[2];
  fStack_24 = -param_3[1];
  fVar19 = *param_4 * local_28 * fRam000000014687674c + param_4[3] * fStack_1c +
           param_4[1] * -param_3[1] * fRam000000014687673c +
           param_4[2] * fStack_20 * fRam000000014687672c;
  fVar18 = -1.0;
  if ((-1.0 <= fVar19) && (fVar18 = fVar19, 1.0 <= fVar19)) {
    fVar18 = 1.0;
  }
  fVar18 = _guard_xfg_dispatch_icall_nop(fVar18);
  fVar18 = fVar18 + fVar18;
  if (1e-08 < ABS(fVar18)) {
    fVar19 = (float)FUN_140a2aed0(local_res18);
    pfVar5 = (float *)FQuat::Slerp_NotNormalized
                                (&local_28,param_3,param_4,(fVar18 - fVar19) / fVar18,param_6,
                                 param_7,param_8);
    fVar4 = fRam00000001468766fc;
    fVar3 = fRam00000001468766f8;
    fVar2 = fRam00000001468766f4;
    fVar1 = _DAT_1468766f0;
    *param_2 = *pfVar5;
    param_2[1] = pfVar5[1];
    param_2[2] = pfVar5[2];
    param_2[3] = pfVar5[3];
    fVar18 = *param_2;
    fVar19 = param_2[1];
    fVar16 = param_2[2];
    fVar17 = param_2[3];
    auVar6._0_4_ = fVar18 * fVar18 + fVar16 * fVar16;
    auVar6._4_4_ = fVar19 * fVar19 + fVar17 * fVar17;
    auVar6._8_4_ = fVar16 * fVar16 + fVar18 * fVar18;
    auVar6._12_4_ = fVar17 * fVar17 + fVar19 * fVar19;
    fVar12 = auVar6._4_4_ + auVar6._0_4_;
    fVar13 = auVar6._8_4_ + auVar6._4_4_;
    fVar14 = auVar6._12_4_ + auVar6._8_4_;
    fVar15 = auVar6._0_4_ + auVar6._12_4_;
    auVar7._4_4_ = fVar13;
    auVar7._0_4_ = fVar12;
    auVar7._8_4_ = fVar14;
    auVar7._12_4_ = fVar15;
    auVar7 = rsqrtps(auVar6,auVar7);
    fVar8 = auVar7._0_4_;
    fVar9 = auVar7._4_4_;
    fVar10 = auVar7._8_4_;
    fVar11 = auVar7._12_4_;
    fVar8 = (fVar1 - fVar8 * fVar8 * fVar12 * fVar1) * fVar8 + fVar8;
    fVar9 = (fVar2 - fVar9 * fVar9 * fVar13 * fVar2) * fVar9 + fVar9;
    fVar10 = (fVar3 - fVar10 * fVar10 * fVar14 * fVar3) * fVar10 + fVar10;
    fVar11 = (fVar4 - fVar11 * fVar11 * fVar15 * fVar4) * fVar11 + fVar11;
    fVar19 = (float)(((uint)(((fVar2 - fVar9 * fVar9 * fVar13 * fVar2) * fVar9 + fVar9) * fVar19) ^
                     uRam00000001468766e4) & -(uint)(1e-08 <= fVar13) ^ uRam00000001468766e4);
    fVar16 = (float)(((uint)(((fVar3 - fVar10 * fVar10 * fVar14 * fVar3) * fVar10 + fVar10) * fVar16
                            ) ^ uRam00000001468766e8) & -(uint)(1e-08 <= fVar14) ^
                    uRam00000001468766e8);
    fVar17 = (float)(((uint)(((fVar4 - fVar11 * fVar11 * fVar15 * fVar4) * fVar11 + fVar11) * fVar17
                            ) ^ uRam00000001468766ec) & -(uint)(1e-08 <= fVar15) ^
                    uRam00000001468766ec);
    *param_2 = (float)(((uint)(((fVar1 - fVar8 * fVar8 * fVar12 * fVar1) * fVar8 + fVar8) * fVar18)
                       ^ _DAT_1468766e0) & -(uint)(1e-08 <= fVar12) ^ _DAT_1468766e0);
    param_2[1] = fVar19;
    param_2[2] = fVar16;
    param_2[3] = fVar17;
  }
  else {
    *param_2 = *param_4;
    param_2[1] = param_4[1];
    param_2[2] = param_4[2];
    param_2[3] = param_4[3];
  }
  return param_2;
}



// FUNCTION 1411d0d60 FUN_1411d0d60 body=482 status=ok
// SIG undefined FUN_1411d0d60(void)

void FUN_1411d0d60(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong local_res8;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  lVar6 = *param_1;
  AcquireSRWLockShared((PSRWLOCK)(lVar6 + 0x68));
  plVar13 = *(longlong **)(lVar6 + 0x58);
  plVar11 = (longlong *)0x0;
  plVar10 = plVar13 + (longlong)*(int *)(lVar6 + 0x60) * 2;
  for (; plVar13 != plVar10; plVar13 = plVar13 + 2) {
    plVar7 = (longlong *)plVar13[1];
    lVar8 = *plVar13;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    LOCK();
    *(uint *)(lVar8 + 0x70c) = (uint)(*(char *)(lVar6 + 0xdc) != '\0');
    UNLOCK();
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
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)(lVar6 + 0x68));
  if ((int)param_1[10] != 0) {
    plVar13 = (longlong *)param_1[8];
    plVar10 = plVar11;
    if (plVar13 == (longlong *)0x0) {
      plVar10 = param_1 + 4;
    }
    if (plVar10 != (longlong *)0x0 || plVar13 != (longlong *)0x0) {
      local_res8 = *param_1;
      if ((int)param_1[10] != 0) {
        if (plVar13 == (longlong *)0x0) {
          plVar13 = param_1 + 4;
        }
        if (plVar13 != (longlong *)0x0) {
          plVar11 = (longlong *)(**(code **)(*plVar13 + 8))();
        }
      }
      (*(code *)param_1[2])(plVar11,&local_res8);
    }
  }
  FUN_1411dba20(*param_1);
  lVar6 = *param_1;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar6 + 0x80));
  uVar9 = *(undefined8 *)(lVar6 + 0x70);
  *(undefined8 *)(lVar6 + 0x70) = 0;
  uVar4 = *(undefined4 *)(lVar6 + 0x78);
  uVar5 = *(undefined4 *)(lVar6 + 0x7c);
  local_90 = *(undefined8 *)(lVar6 + 0x78);
  *(undefined8 *)(lVar6 + 0x78) = 0;
  local_88 = 0;
  local_80 = 0;
  local_48 = 0;
  local_38 = 0;
  local_98 = uVar9;
  puVar12 = (undefined8 *)FUN_140438ef0(0x18,local_68);
  if (puVar12 != (undefined8 *)0x0) {
    local_98 = 0;
    *puVar12 = &PTR_FUN_1446feb08;
    puVar12[1] = uVar9;
    *(undefined4 *)(puVar12 + 2) = uVar4;
    *(undefined4 *)((longlong)puVar12 + 0x14) = uVar5;
    local_90 = 0;
  }
  local_78[0] = &LAB_1411d5250;
  FUN_14204c280(local_78);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_98);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_88);
                    /* WARNING: Could not recover jumptable at 0x0001411d0f3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar6 + 0x80));
  return;
}



// FUNCTION 1411d0f50 FUN_1411d0f50 body=359 status=ok
// SIG undefined FUN_1411d0f50(void)

ulonglong FUN_1411d0f50(undefined8 *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  bool bVar9;
  ulonglong local_res8;
  
  if ((*(char *)param_1[4] != '\0') && (*(char *)(param_2 + 0x58) != *(char *)(param_3 + 0x58))) {
    return (ulonglong)(*(char *)(param_2 + 0x58) == '\0');
  }
  lVar1 = param_1[5];
  if (*(int *)(lVar1 + 0x40) != 0) {
    lVar6 = 0;
    if (*(longlong *)(lVar1 + 0x30) == 0) {
      lVar6 = lVar1 + 0x10;
    }
    if ((lVar6 != 0 || *(longlong *)(lVar1 + 0x30) != 0) &&
       (uVar3 = FUN_1411d25d0(lVar1,param_2,param_3), uVar3 != 0)) {
      return (ulonglong)(uVar3 >> 0x1f);
    }
  }
  bVar8 = false;
  if (*(char *)(param_1[1] + 0x18) != '\0') {
    if ((*(char *)((longlong *)param_1[3])[1] == '\0') ||
       (*(char *)(param_2 + 0x58) == *(char *)(param_3 + 0x58))) {
      local_res8 = 0;
      lVar1 = *(longlong *)(*(longlong *)param_1[3] + 0x20);
      if (lVar1 != 0) {
        bVar8 = *(longlong *)(param_2 + 0x100) == lVar1;
        bVar9 = *(longlong *)(param_3 + 0x100) == lVar1;
        if (bVar8 != bVar9) {
          bVar8 = !bVar9 && bVar8;
          goto LAB_1411d1030;
        }
      }
    }
    else if (*(char *)(param_2 + 0x58) == '\0') {
LAB_1411d1030:
      return (ulonglong)bVar8;
    }
  }
  if (*(int *)(param_2 + 0x50) == *(int *)(param_3 + 0x50)) {
    local_res8 = local_res8 & 0xffffffffffffff00;
    cVar2 = FUN_1411cec00(*param_1,param_2,param_3,&local_res8);
    if (cVar2 == '\0') {
      iVar4 = FUN_1411cdd60(param_1[2],param_2);
      iVar5 = FUN_1411cdd60(param_1[2],param_3);
      if (iVar4 == iVar5) {
        iVar4 = FText::CompareTo(param_2 + 0x38,param_3 + 0x38,0);
        if (iVar4 == 0) {
          iVar4 = FText::CompareTo(param_2,param_3,0);
        }
        uVar7 = (ulonglong)(iVar4 < 0);
      }
      else {
        uVar7 = (ulonglong)(iVar4 < iVar5);
      }
    }
    else {
      uVar7 = local_res8 & 0xff;
    }
  }
  else {
    uVar7 = (ulonglong)(*(int *)(param_3 + 0x50) <= *(int *)(param_2 + 0x50));
  }
  return uVar7;
}



// FUNCTION 1411d10c0 FUN_1411d10c0 body=457 status=ok
// SIG undefined FUN_1411d10c0(void)

bool FUN_1411d10c0(longlong *param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  
  if (*(longlong *)(param_2 + 0x18) == 0) {
    lVar3 = 0;
LAB_1411d10f7:
    cVar1 = FWeakObjectPtr::IsValid(*param_1 + 0x70);
    if (cVar1 != '\0') {
      if (*(longlong *)(param_2 + 0xa8) != 0) {
        lVar4 = FUN_142dfdfe0();
        lVar3 = *(longlong *)(param_2 + 0xa8);
        for (lVar6 = lVar3; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30)) {
          if (lVar6 == lVar4) goto LAB_1411d1135;
        }
      }
      lVar3 = 0;
LAB_1411d1135:
      uVar5 = FWeakObjectPtr::Get(*param_1 + 0x70);
      lVar3 = FUN_142dcdc10(uVar5,lVar3);
    }
  }
  else {
    lVar3 = FUN_142dcdb70(param_2 + 0x10);
    if (lVar3 == 0) goto LAB_1411d10f7;
  }
  if (*(longlong *)(param_3 + 0x18) == 0) {
    lVar6 = 0;
LAB_1411d116b:
    cVar1 = FWeakObjectPtr::IsValid(*param_1 + 0x70);
    if (cVar1 != '\0') {
      if (*(longlong *)(param_3 + 0xa8) != 0) {
        lVar7 = FUN_142dfdfe0();
        lVar6 = *(longlong *)(param_3 + 0xa8);
        for (lVar4 = lVar6; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
          if (lVar4 == lVar7) goto LAB_1411d11b0;
        }
      }
      lVar6 = 0;
LAB_1411d11b0:
      uVar5 = FWeakObjectPtr::Get(*param_1 + 0x70);
      lVar6 = FUN_142dcdc10(uVar5,lVar6);
    }
  }
  else {
    lVar6 = FUN_142dcdb70(param_3 + 0x10);
    if (lVar6 == 0) goto LAB_1411d116b;
  }
  lVar4 = FUN_1411e6c30(param_2);
  lVar7 = FUN_1411e6c30(param_3);
  if ((lVar3 == 0) || (lVar6 == 0)) {
LAB_1411d1250:
    bVar8 = false;
  }
  else {
    if (lVar4 == 0) {
      lVar4 = *(longlong *)(lVar3 + 0xd8);
    }
    if (lVar7 == 0) {
      lVar7 = *(longlong *)(lVar6 + 0xd8);
    }
    if ((lVar4 != 0) && (lVar7 != 0)) {
      iVar2 = FText::CompareTo(lVar4 + 0x30,lVar7 + 0x30,0);
      if (iVar2 != 0) {
        iVar2 = FText::CompareTo(lVar4 + 0x30,lVar7 + 0x30,0);
        return iVar2 < 0;
      }
    }
    if (*(char *)(param_2 + 0xa0) == '\0') {
      if (*(char *)(param_3 + 0xa0) != '\0') {
        return true;
      }
    }
    else if (*(char *)(param_3 + 0xa0) == '\0') goto LAB_1411d1250;
    iVar2 = FText::CompareTo(lVar3 + 0x40,lVar6 + 0x40,0);
    bVar8 = iVar2 < 0;
  }
  return bVar8;
}



// FUNCTION 1411d1290 FUN_1411d1290 body=1114 status=ok
// SIG undefined FUN_1411d1290(void)

void FUN_1411d1290(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  uint uVar15;
  bool bVar16;
  undefined1 local_res8 [16];
  undefined4 local_res18;
  undefined4 local_res1c;
  undefined1 local_res20 [8];
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  longlong *local_58;
  longlong *local_48;
  
  local_res18 = (undefined4)param_1[1];
  local_res1c = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar3 = FWeakObjectPtr::IsValid(&local_res18);
  if (cVar3 != '\0') {
    lVar6 = FWeakObjectPtr::Get(&local_res18);
    lVar14 = 0;
    iVar5 = *(int *)(lVar6 + 0xc);
    lVar6 = lVar14;
    if (iVar5 < (int)DAT_1469e91c4) {
      uVar15 = iVar5 >> 0x1f & 0xffff;
      uVar4 = iVar5 + uVar15;
      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar15) * 0x18;
    }
    if (((*(uint *)(lVar6 + 8) & 0x30000000) == 0) &&
       (cVar3 = FWeakObjectPtr::IsValid(*param_1 + 0x140), cVar3 != '\0')) {
      lVar6 = FWeakObjectPtr::Get(*param_1 + 0x140);
      puVar7 = (undefined8 *)
               FUN_14044b020(*(longlong *)(lVar6 + 0x478) + 0x1e0,local_res20,*param_1,FUN_1411ecc10
                            );
      *(undefined8 *)(*param_1 + 0x38) = *puVar7;
      lVar6 = FWeakObjectPtr::Get(*param_1 + 0x140);
      puVar7 = (undefined8 *)
               FUN_14044b020(*(longlong *)(lVar6 + 0x478) + 0x208,local_78,*param_1,FUN_1411f0390);
      *(undefined8 *)(*param_1 + 0x40) = *puVar7;
      lVar6 = *param_1;
      cVar3 = FWeakObjectPtr::IsValid(lVar6 + 0x140);
      if (cVar3 != '\0') {
        uVar8 = FWeakObjectPtr::Get(lVar6 + 0x140);
        lVar6 = FUN_140bb7440(uVar8);
        if (lVar6 != 0) {
          lVar10 = *param_1;
          plVar2 = (longlong *)(lVar6 + 0xd8);
          plVar9 = (longlong *)FMemory::Realloc(0,0x30);
          lVar12 = lVar14;
          local_58 = plVar9;
          if (plVar9 != (longlong *)0x0) {
            *plVar9 = (longlong)&PTR_FUN_143f4d200;
            FWeakObjectPtr::operator=(plVar9 + 1,lVar10);
            plVar9[2] = (longlong)FUN_1411f07d0;
            lVar10 = FDelegateHandle::GenerateNewID();
            plVar9[4] = lVar10;
            *plVar9 = (longlong)&PTR_FUN_143f4d248;
            FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar2,1);
            plVar11 = (longlong *)(**(code **)(*plVar9 + 0x20))(plVar9,local_70);
            iVar5 = *(int *)(lVar6 + 0xe0);
            lVar12 = *plVar11;
            *(int *)(lVar6 + 0xe0) = iVar5 + 1;
            if (*(int *)(lVar6 + 0xe4) < iVar5 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar2,iVar5);
            }
            puVar7 = (undefined8 *)((longlong)iVar5 * 0x10 + *plVar2);
            *puVar7 = plVar9;
            *(undefined4 *)(puVar7 + 1) = 3;
          }
          *(longlong *)(*param_1 + 0x30) = lVar12;
        }
      }
      lVar6 = *param_1;
      plVar2 = *(longlong **)(lVar6 + 0x118);
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        iVar5 = (int)plVar2[1];
        bVar16 = iVar5 == 0;
        if (bVar16) {
          *(int *)(plVar2 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
        while (!bVar16) {
          LOCK();
          bVar16 = iVar5 == (int)plVar2[1];
          if (bVar16) {
            *(int *)(plVar2 + 1) = iVar5 + 1;
          }
          UNLOCK();
          if (bVar16) {
            if (plVar2 != (longlong *)0x0) {
              if (*(longlong *)(lVar6 + 0x110) != 0) {
                lVar12 = FWeakObjectPtr::Get(*param_1 + 0x140);
                lVar6 = *param_1;
                plVar9 = (longlong *)(lVar12 + 0xa38);
                plVar11 = (longlong *)FMemory::Realloc(0,0x30);
                lVar10 = lVar14;
                local_48 = plVar11;
                if (plVar11 != (longlong *)0x0) {
                  *plVar11 = (longlong)&PTR_FUN_143f4d200;
                  FWeakObjectPtr::operator=(plVar11 + 1,lVar6);
                  plVar11[2] = (longlong)FUN_1411f0350;
                  lVar6 = FDelegateHandle::GenerateNewID();
                  plVar11[4] = lVar6;
                  *plVar11 = (longlong)&PTR_FUN_143f4d248;
                  FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar9,1);
                  plVar13 = (longlong *)(**(code **)(*plVar11 + 0x20))(plVar11,local_68);
                  iVar5 = *(int *)(lVar12 + 0xa40);
                  lVar10 = *plVar13;
                  *(int *)(lVar12 + 0xa40) = iVar5 + 1;
                  if (*(int *)(lVar12 + 0xa44) < iVar5 + 1) {
                    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar9,iVar5);
                  }
                  puVar7 = (undefined8 *)((longlong)iVar5 * 0x10 + *plVar9);
                  *puVar7 = plVar11;
                  *(undefined4 *)(puVar7 + 1) = 3;
                }
                *(longlong *)(*param_1 + 0x48) = lVar10;
              }
              LOCK();
              plVar9 = plVar2 + 1;
              lVar6 = *plVar9;
              *(int *)plVar9 = (int)*plVar9 + -1;
              UNLOCK();
              if ((int)lVar6 == 1) {
                (**(code **)*plVar2)(plVar2);
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
            break;
          }
          LOCK();
          iVar5 = (int)plVar2[1];
          bVar16 = iVar5 == 0;
          if (bVar16) {
            *(int *)(plVar2 + 1) = 0;
            iVar5 = 0;
          }
          UNLOCK();
        }
      }
      lVar10 = FWeakObjectPtr::Get(*param_1 + 0x140);
      lVar6 = *param_1;
      plVar2 = (longlong *)(lVar10 + 0x9c0);
      plVar9 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar9 != (longlong *)0x0) {
        *plVar9 = (longlong)&PTR_FUN_143f4d170;
        FWeakObjectPtr::operator=(plVar9 + 1,lVar6);
        plVar9[2] = (longlong)FUN_1411f02c0;
        lVar14 = FDelegateHandle::GenerateNewID();
        plVar9[4] = lVar14;
        *plVar9 = (longlong)&PTR_FUN_143f4d1b8;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar2,1);
        plVar11 = (longlong *)(**(code **)(*plVar9 + 0x20))(plVar9,local_60);
        iVar5 = *(int *)(lVar10 + 0x9c8);
        lVar14 = *plVar11;
        *(int *)(lVar10 + 0x9c8) = iVar5 + 1;
        if (*(int *)(lVar10 + 0x9cc) < iVar5 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar2,iVar5);
        }
        puVar7 = (undefined8 *)((longlong)iVar5 * 0x10 + *plVar2);
        *puVar7 = plVar9;
        *(undefined4 *)(puVar7 + 1) = 3;
      }
      *(longlong *)(*param_1 + 0x50) = lVar14;
    }
  }
  return;
}



// FUNCTION 1411d16f0 FUN_1411d16f0 body=390 status=ok
// SIG undefined FUN_1411d16f0(void)

void FUN_1411d16f0(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  char cVar3;
  undefined1 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 1);
  if (((cVar3 != '\0') && (lVar7 = *param_1, *(char *)(lVar7 + 0xf8) != '\0')) &&
     ((int)param_1[2] == *(int *)(lVar7 + 0x2a0))) {
    plVar6 = (longlong *)(lVar7 + 0x280);
    *(undefined4 *)(lVar7 + 0x288) = 0;
    if (0x7fffffff < *(uint *)(lVar7 + 0x28c)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(plVar6,0);
    }
    lVar8 = *(longlong *)(lVar7 + 0x290);
    lVar1 = lVar8 + (longlong)*(int *)(lVar7 + 0x298) * 0x18;
    for (; lVar8 != lVar1; lVar8 = lVar8 + 0x18) {
      lVar5 = FUN_141796df0(lVar8);
      if (lVar5 != 0) {
        iVar2 = *(int *)(lVar7 + 0x288);
        *(int *)(lVar7 + 0x288) = iVar2 + 1;
        if (*(int *)(lVar7 + 0x28c) < iVar2 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar6,iVar2);
        }
        *(longlong *)(*plVar6 + (longlong)iVar2 * 8) = lVar5;
      }
    }
    FUN_1407d7790((longlong *)(lVar7 + 0x290),0);
    plVar6 = (longlong *)FUN_1411e1c90(*param_1);
    if (*plVar6 != 0) {
      lVar8 = FUN_1428dfc70();
      lVar7 = *plVar6;
      for (lVar1 = lVar7; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
        if (lVar1 == lVar8) goto LAB_1411d1815;
      }
    }
    lVar7 = 0;
LAB_1411d1815:
    *(undefined1 *)(*param_1 + 800) = 0;
    if ((*(longlong *)(*param_1 + 0x68) == 0) || (lVar7 == 0)) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
    *(undefined1 *)(*param_1 + 0x99) = uVar4;
    lVar7 = *param_1;
    if (*(byte *)(lVar7 + 0x98) < 2) {
      FUN_1411d6750(lVar7,*(undefined1 *)(lVar7 + 0x99));
      lVar7 = *param_1;
      if (*(char *)(lVar7 + 0x98) != '\x02') {
        FUN_1411d6330(lVar7,*(undefined1 *)(lVar7 + 0x99));
      }
    }
  }
  return;
}



// FUNCTION 1411d1880 FUN_1411d1880 body=1111 status=ok
// SIG undefined FUN_1411d1880(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411d1880(longlong *param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  bool bVar13;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined4 *local_148;
  ulonglong *puStack_140;
  undefined8 local_138;
  longlong local_130;
  undefined8 local_128;
  longlong *plStack_120;
  undefined1 local_118 [16];
  undefined1 local_108 [8];
  longlong *local_100;
  undefined1 local_f0 [8];
  longlong *local_e8;
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined1 local_a8 [16];
  undefined1 local_98 [24];
  undefined4 local_80 [4];
  undefined1 local_70 [8];
  longlong *local_68;
  char local_58;
  ulonglong local_50 [2];
  
  local_50[0] = DAT_1468387a8 ^ (ulonglong)auStack_178;
  local_158 = 0;
  if ((*(longlong *)(*param_1 + 0x90) != 0) && (lVar9 = *(longlong *)(*param_1 + 0x98), lVar9 != 0))
  {
    piVar1 = (int *)(lVar9 + 8);
    LOCK();
    iVar8 = *piVar1;
    if (iVar8 == 0) {
      *piVar1 = 0;
      iVar8 = 0;
    }
    UNLOCK();
    if (0 < iVar8) {
      UMistDebugEntityScreen::InspectEntity(*param_1 + 0x88,param_2,1,0);
    }
  }
  if ((*(longlong *)(*param_1 + 0xa8) != 0) && (lVar9 = *(longlong *)(*param_1 + 0xb0), lVar9 != 0))
  {
    piVar1 = (int *)(lVar9 + 8);
    LOCK();
    iVar8 = *piVar1;
    if (iVar8 == 0) {
      *piVar1 = 0;
      iVar8 = 0;
    }
    UNLOCK();
    if (0 < iVar8) {
      if (param_3 < 1) {
        uVar10 = FUN_1404b03b0();
        puVar12 = (undefined1 *)FText::FText(local_d8,uVar10);
        bVar6 = false;
        bVar5 = false;
        bVar4 = false;
        bVar13 = true;
      }
      else {
        local_128 = 0;
        plStack_120 = (longlong *)0x0;
        lVar9 = FText::AsNumber(local_98,param_3,0,&local_128);
        uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                           (local_c0,L"Lvl {0}",L"GFxPlayerIdentityWidget",L"LevelTextFormat");
        puVar11 = (undefined8 *)FTextFormat::FTextFormat(local_a8,uVar10);
        local_80[0] = 4;
        FText::FText(local_70,lVar9);
        local_138 = *puVar11;
        local_148 = local_80;
        puStack_140 = local_50;
        local_130 = puVar11[1];
        local_58 = '\x01';
        if (local_130 != 0) {
          LOCK();
          *(int *)(local_130 + 8) = *(int *)(local_130 + 8) + 1;
          UNLOCK();
        }
        uVar10 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                 TArray<FFormatArgumentValue,FDefaultAllocator>(local_118,&local_148);
        uVar10 = FText::Format(local_f0,&local_138,uVar10);
        FText::FText(local_108,uVar10);
        if (local_e8 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_e8 + 1;
          lVar7 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_e8)(local_e8);
            LOCK();
            piVar1 = (int *)((longlong)local_e8 + 0xc);
            iVar8 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*local_e8 + 8))(local_e8,1);
            }
          }
        }
        TArray<FFormatArgumentValue,FDefaultAllocator>::
        ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_118);
        if ((local_58 != '\0') && (local_58 = '\0', local_68 != (longlong *)0x0)) {
          LOCK();
          plVar3 = local_68 + 1;
          lVar7 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_68)(local_68);
            LOCK();
            piVar1 = (int *)((longlong)local_68 + 0xc);
            iVar8 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*local_68 + 8))(local_68,1);
            }
          }
        }
        plVar3 = (longlong *)puVar11[1];
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar3 + 1;
          lVar7 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plVar3)(plVar3);
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            iVar8 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*plVar3 + 8))(plVar3,1);
            }
          }
        }
        plVar3 = *(longlong **)(lVar9 + 8);
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar3 + 1;
          lVar9 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*plVar3)(plVar3);
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            iVar8 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*plVar3 + 8))(plVar3,1);
            }
          }
        }
        puVar12 = local_108;
        bVar6 = true;
        bVar5 = true;
        bVar4 = true;
        bVar13 = false;
      }
      UMistDebugEntityScreen::InspectEntity(*param_1 + 0xa0,puVar12,1,0);
      if ((bVar13) && (local_d0 != (longlong *)0x0)) {
        LOCK();
        plVar3 = local_d0 + 1;
        lVar9 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
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
      if ((bVar4) && (local_100 != (longlong *)0x0)) {
        LOCK();
        plVar3 = local_100 + 1;
        lVar9 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_100)(local_100);
          LOCK();
          piVar1 = (int *)((longlong)local_100 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_100 + 8))(local_100,1);
          }
        }
      }
      if ((bVar5) && (local_b8 != (longlong *)0x0)) {
        LOCK();
        plVar3 = local_b8 + 1;
        lVar9 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
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
      plVar3 = plStack_120;
      if ((bVar6) && (plStack_120 != (longlong *)0x0)) {
        LOCK();
        plVar2 = plStack_120 + 1;
        lVar9 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plStack_120)(plStack_120);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
    }
  }
  lVar9 = *param_1;
  plVar3 = *(longlong **)(lVar9 + 0xc0);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    iVar8 = (int)plVar3[1];
    bVar13 = iVar8 == 0;
    if (bVar13) {
      *(int *)(plVar3 + 1) = 0;
      iVar8 = 0;
    }
    UNLOCK();
    while (!bVar13) {
      LOCK();
      bVar13 = iVar8 == (int)plVar3[1];
      if (bVar13) {
        *(int *)(plVar3 + 1) = iVar8 + 1;
      }
      UNLOCK();
      if (bVar13) {
        if (plVar3 != (longlong *)0x0) {
          lVar9 = *(longlong *)(lVar9 + 0xb8);
          if (lVar9 != 0) {
            FUN_14203dbf0(lVar9,param_4);
          }
          LOCK();
          plVar2 = plVar3 + 1;
          lVar9 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*plVar3)(plVar3);
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            iVar8 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*plVar3 + 8))(plVar3,1);
            }
          }
        }
        break;
      }
      LOCK();
      iVar8 = (int)plVar3[1];
      bVar13 = iVar8 == 0;
      if (bVar13) {
        *(int *)(plVar3 + 1) = 0;
        iVar8 = 0;
      }
      UNLOCK();
    }
  }
  *(undefined1 *)(*param_1 + 0x1a1) = 0;
  FUN_1411f76d0(*param_1);
  return;
}



// FUNCTION 1411d1ce0 FUN_1411d1ce0 body=333 status=ok
// SIG undefined FUN_1411d1ce0(void)

void FUN_1411d1ce0(longlong *param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar3 != '\0') {
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
      bVar2 = true;
      goto LAB_1411d1d69;
    }
  }
  bVar2 = false;
LAB_1411d1d69:
  if (bVar2) {
    lVar5 = FUN_140eccb70(*param_1);
    if ((lVar5 != 0) && (plVar6 = (longlong *)FUN_140bba5e0(lVar5), plVar6 != (longlong *)0x0)) {
      (**(code **)(*plVar6 + 0xa8))(plVar6,*param_1 + 0x388);
    }
    lVar5 = *(longlong *)(*param_1 + 0x38);
    if (lVar5 != 0) {
      lVar7 = UMovieScene3DTransformSection::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        lVar7 = *param_1;
        FUN_142880530(lVar5 + 0x340,lVar7 + 0x368);
        *(undefined8 *)(lVar7 + 0x368) = 0;
        *(undefined8 *)(*param_1 + 0x368) = 0;
      }
    }
  }
  return;
}



// FUNCTION 1411d1e30 FUN_1411d1e30 body=270 status=ok
// SIG undefined FUN_1411d1e30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1411d1e30(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [80];
  undefined1 *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  FUN_1411d24c0(*param_1 + 0x20);
  lVar1 = *param_1;
  local_78[0] = &LAB_1411d4f50;
  local_48 = (longlong *)0x0;
  local_38 = 0;
  lVar2 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_c8,local_78);
  FGenericPlatformMemory::MemswapGreaterThan8(lVar2,lVar1 + 0x20,0x50);
  if (*(int *)(lVar2 + 0x40) != 0) {
    plVar3 = *(longlong **)(lVar2 + 0x30);
    if (*(longlong **)(lVar2 + 0x30) == (longlong *)0x0) {
      plVar3 = (longlong *)(lVar2 + 0x10);
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (*(longlong *)(lVar2 + 0x30) != 0) {
    FMemory::Free();
  }
  if (local_38 != 0) {
    plVar3 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar3 = local_48;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1411d1f40 FUN_1411d1f40 body=172 status=ok
// SIG undefined FUN_1411d1f40(void)

void FUN_1411d1f40(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  puVar8 = (undefined8 *)*param_1;
  puVar7 = puVar8 + (longlong)(int)param_1[1] * 2;
  for (; puVar8 != puVar7; puVar8 = puVar8 + 2) {
    plVar4 = (longlong *)puVar8[1];
    uVar5 = *puVar8;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    FUN_142833de0(uVar5);
    FUN_14283ef20(uVar5);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
  }
  return;
}



// FUNCTION 1411d1ff0 FUN_1411d1ff0 body=187 status=ok
// SIG undefined FUN_1411d1ff0(void)

void FUN_1411d1ff0(undefined4 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  FRenderCommandFence::Wait(param_1 + 8,0);
  if (((*(longlong *)(param_1 + 10) != 0) &&
      (*(longlong *)(*(longlong *)(param_1 + 0xc) + 0xb8) != 0)) &&
     (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xc) + 0xb8) + 0x10) != 0)) {
    lVar1 = FUN_1416f8720(*param_1);
    if (lVar1 != 0) {
      uVar2 = FUN_1416f8720(*param_1);
      lVar1 = FHdrImageWrapper::GetHeight(uVar2);
      if (lVar1 != 0) {
        local_18 = 0;
        uStack_14 = 0;
        uStack_10 = 0;
        uStack_c = 0x3f800000;
        uVar2 = FUN_1416f8720(*param_1);
        FUN_14251b240(*(undefined8 *)(param_1 + 10),uVar2,&local_18);
        uVar2 = 0;
        if (*(longlong *)(*(longlong *)(param_1 + 0xc) + 0xb8) != 0) {
          uVar2 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xc) + 0xb8) + 0x10);
        }
        uVar3 = FUN_1416f8720(*param_1);
        FUN_14251fb90(*(undefined8 *)(param_1 + 10),uVar3,uVar2,1);
      }
    }
  }
  return;
}



// FUNCTION 1411d20b0 FUN_1411d20b0 body=359 status=ok
// SIG undefined FUN_1411d20b0(void)

ulonglong FUN_1411d20b0(undefined8 *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  bool bVar9;
  ulonglong local_res8;
  
  if ((*(char *)param_1[4] != '\0') && (*(char *)(param_2 + 0x58) != *(char *)(param_3 + 0x58))) {
    return (ulonglong)(*(char *)(param_2 + 0x58) == '\0');
  }
  lVar1 = param_1[5];
  if (*(int *)(lVar1 + 0x40) != 0) {
    lVar6 = 0;
    if (*(longlong *)(lVar1 + 0x30) == 0) {
      lVar6 = lVar1 + 0x10;
    }
    if ((lVar6 != 0 || *(longlong *)(lVar1 + 0x30) != 0) &&
       (uVar3 = FUN_1411d25d0(lVar1,param_2,param_3), uVar3 != 0)) {
      return (ulonglong)(uVar3 >> 0x1f);
    }
  }
  bVar8 = false;
  if (*(char *)(param_1[1] + 0x18) != '\0') {
    if ((*(char *)((longlong *)param_1[3])[1] == '\0') ||
       (*(char *)(param_2 + 0x58) == *(char *)(param_3 + 0x58))) {
      local_res8 = 0;
      lVar1 = *(longlong *)(*(longlong *)param_1[3] + 0x20);
      if (lVar1 != 0) {
        bVar8 = *(longlong *)(param_2 + 0x100) == lVar1;
        bVar9 = *(longlong *)(param_3 + 0x100) == lVar1;
        if (bVar8 != bVar9) {
          bVar8 = !bVar9 && bVar8;
          goto LAB_1411d21a6;
        }
      }
    }
    else if (*(char *)(param_2 + 0x58) == '\0') {
LAB_1411d21a6:
      return (ulonglong)bVar8;
    }
  }
  local_res8 = local_res8 & 0xffffffffffffff00;
  cVar2 = FUN_1411cec00(*param_1,param_2,param_3,&local_res8);
  if (cVar2 == '\0') {
    if (*(int *)(param_2 + 0x50) == *(int *)(param_3 + 0x50)) {
      iVar4 = FText::CompareTo(param_2 + 0x38,param_3 + 0x38,0);
      if (iVar4 == 0) {
        iVar4 = FUN_1411cdd60(param_1[2],param_2);
        iVar5 = FUN_1411cdd60(param_1[2],param_3);
        if (iVar4 != iVar5) {
          return (ulonglong)(iVar4 < iVar5);
        }
        iVar4 = FText::CompareTo(param_2,param_3,0);
      }
      uVar7 = (ulonglong)(iVar4 < 0);
    }
    else {
      uVar7 = (ulonglong)(*(int *)(param_3 + 0x50) <= *(int *)(param_2 + 0x50));
    }
  }
  else {
    uVar7 = local_res8 & 0xff;
  }
  return uVar7;
}



// FUNCTION 1411d2220 FUN_1411d2220 body=369 status=ok
// SIG undefined FUN_1411d2220(void)

void FUN_1411d2220(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  undefined1 local_448 [48];
  undefined1 local_418 [320];
  undefined1 local_2d8 [360];
  undefined1 local_170 [360];
  
  if (param_2 != 0) {
    plVar1 = (longlong *)*param_1;
    cVar5 = FUN_1411d74a0(param_2,plVar1);
    if (cVar5 != '\0') {
      lVar2 = *(longlong *)(param_2 + 0x30);
      lVar9 = (longlong)*(int *)(param_2 + 0x38) * 0x168 + lVar2;
      if (lVar2 != lVar9) {
        lVar7 = lVar2;
        do {
          if (*plVar1 == *(longlong *)(lVar7 + 0x140)) {
            if (((lVar7 != lVar9) && (iVar8 = (int)((lVar7 - lVar2) / 0x168), -1 < iVar8)) &&
               (iVar8 < *(int *)(param_2 + 0x38))) {
              uVar6 = FUN_1411c9050(local_170,(longlong)iVar8 * 0x168 + lVar2);
              bVar3 = false;
              bVar4 = true;
              goto LAB_1411d22af;
            }
            break;
          }
          lVar7 = lVar7 + 0x168;
        } while (lVar7 != lVar9);
      }
      uVar6 = FUN_1411c9410(local_2d8);
      bVar4 = false;
      bVar3 = true;
LAB_1411d22af:
      FUN_1411c8eb0(local_448,uVar6);
      if (bVar3) {
        FUN_1411ca750(local_2d8);
      }
      if (bVar4) {
        FUN_1411ca750(local_170);
      }
      FText::operator=(local_448,param_1[1]);
      FText::operator=(local_418,param_1[2]);
      FUN_1411ff0a0(param_2,local_448);
      FUN_1411ca750(local_448);
    }
  }
  return;
}



// FUNCTION 1411d23a0 FUN_1411d23a0 body=284 status=ok
// SIG undefined FUN_1411d23a0(void)

void FUN_1411d23a0(longlong *param_1)

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
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar3 != '\0') {
    lVar5 = FWeakObjectPtr::Get(&local_res10);
    iVar1 = *(int *)(lVar5 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar7 = iVar1 >> 0x1f & 0xffff;
      uVar4 = iVar1 + uVar7;
      lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar7) * 0x18;
    }
    else {
      lVar5 = 0;
    }
    if ((*(uint *)(lVar5 + 8) & 0x30000000) == 0) {
      bVar2 = true;
      goto LAB_1411d2429;
    }
  }
  bVar2 = false;
LAB_1411d2429:
  if ((bVar2) && (lVar5 = *(longlong *)(*param_1 + 0x38), lVar5 != 0)) {
    lVar6 = UMovieScene3DTransformSection::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar6 = *param_1;
      FUN_142880530(lVar5 + 0x340,lVar6 + 0x368);
      *(undefined8 *)(lVar6 + 0x368) = 0;
      *(undefined8 *)(*param_1 + 0x368) = 0;
    }
  }
  return;
}



// FUNCTION 1411d24c0 FUN_1411d24c0 body=261 status=ok
// SIG undefined FUN_1411d24c0(void)

undefined4 * FUN_1411d24c0(undefined8 *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  undefined4 local_38;
  undefined4 local_34;
  longlong *local_28;
  longlong local_18;
  
  if (*(int *)(param_1 + 8) != 0) {
    plVar6 = (longlong *)param_1[6];
    if ((longlong *)param_1[6] == (longlong *)0x0) {
      plVar6 = param_1 + 2;
    }
    if (plVar6 != (longlong *)0x0) {
      uVar4 = (**(code **)(*plVar6 + 8))();
      goto LAB_1411d24fb;
    }
  }
  uVar4 = 0;
LAB_1411d24fb:
  puVar5 = (undefined4 *)(*(code *)*param_1)(&local_38,uVar4);
  *param_2 = *puVar5;
  *puVar5 = 0xffffffff;
  param_2[1] = puVar5[1];
  puVar5[1] = 0xffffffff;
  *(undefined8 *)(param_2 + 2) = *(undefined8 *)(puVar5 + 2);
  *(undefined8 *)(param_2 + 4) = *(undefined8 *)(puVar5 + 4);
  *(undefined8 *)(puVar5 + 4) = 0;
  *(undefined8 *)(puVar5 + 2) = 0;
  param_2[6] = puVar5[6];
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(puVar5 + 8);
  *(undefined8 *)(puVar5 + 8) = 0;
  if (local_18 != 0) {
    LOCK();
    piVar1 = (int *)(local_18 + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_28 + 1;
    lVar3 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_28 + 8))(local_28,1);
      }
    }
  }
  FUN_1416f8340(local_34);
  FUN_1416f8340(local_38);
  return param_2;
}



// FUNCTION 1411d25d0 FUN_1411d25d0 body=95 status=ok
// SIG undefined FUN_1411d25d0(void)

void FUN_1411d25d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    plVar2 = (longlong *)param_1[6];
    if ((longlong *)param_1[6] == (longlong *)0x0) {
      plVar2 = param_1 + 2;
    }
    if (plVar2 != (longlong *)0x0) {
      uVar1 = (**(code **)(*plVar2 + 8))();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001411d262c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_1)(uVar1,param_2,param_3);
  return;
}



// FUNCTION 1411d2640 FUN_1411d2640 body=66 status=ok
// SIG undefined FUN_1411d2640(void)

undefined8 * FUN_1411d2640(undefined8 *param_1,ulonglong param_2)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 3);
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1411d2690 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FLocMetadataValueArray::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 1);
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1411d26e0 FUN_1411d26e0 body=66 status=ok
// SIG undefined FUN_1411d26e0(void)

undefined8 * FUN_1411d26e0(undefined8 *param_1,ulonglong param_2)

{
  FUN_140ddef50(param_1 + 1);
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1411d2730 FUN_1411d2730 body=97 status=ok
// SIG undefined FUN_1411d2730(void)

undefined8 * FUN_1411d2730(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1446fe980;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1411d27a0 FUN_1411d27a0 body=97 status=ok
// SIG undefined FUN_1411d27a0(void)

undefined8 * FUN_1411d27a0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1446fe970;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1411d2810 FUN_1411d2810 body=152 status=ok
// SIG undefined FUN_1411d2810(void)

longlong FUN_1411d2810(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x4b8);
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
  if (*(longlong *)(param_1 + 0x4a0) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4d8);
  }
  return param_1;
}



// FUNCTION 1411d28b0 FUN_1411d28b0 body=52 status=ok
// SIG undefined FUN_1411d28b0(void)

undefined8 FUN_1411d28b0(undefined8 param_1,ulonglong param_2)

{
  FUN_1411ca8e0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x288);
  }
  return param_1;
}



// FUNCTION 1411d28f0 FUN_1411d28f0 body=90 status=ok
// SIG undefined FUN_1411d28f0(void)

longlong FUN_1411d28f0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x240) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2a0);
  }
  return param_1;
}



// FUNCTION 1411d2950 FUN_1411d2950 body=271 status=ok
// SIG undefined FUN_1411d2950(void)

undefined8 * FUN_1411d2950(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_1446fd630;
  plVar2 = (longlong *)FUN_1411e35f0();
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x50))(plVar2,param_1 + 0x1c);
    param_1[0x1c] = 0;
  }
  FUN_1411de490(param_1,plVar2);
  if (param_1[0x1d] != 0) {
    FMemory::Free();
  }
  puVar1 = (undefined8 *)param_1[0x19];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[0x17];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[0x15];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_1[0x11] != 0) {
    FMemory::Free();
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0xe);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0xb);
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf8);
  }
  return param_1;
}



// FUNCTION 1411d2a60 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UDemoNetDriver::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1411caae0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1120);
  }
  return param_1;
}



// FUNCTION 1411d2aa0 FUN_1411d2aa0 body=277 status=ok
// SIG undefined FUN_1411d2aa0(void)

undefined8 FUN_1411d2aa0(longlong param_1,undefined8 *param_2)

{
  PSRWLOCK SRWLock;
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  SRWLock = (PSRWLOCK)(param_1 + 0x68);
  AcquireSRWLockShared(SRWLock);
  iVar3 = *(int *)(param_1 + 0x60);
  ReleaseSRWLockShared(SRWLock);
  if (iVar3 < *(int *)(param_1 + 0x44)) {
    AcquireSRWLockExclusive(SRWLock);
    iVar3 = *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x60) = iVar3 + 1;
    if (*(int *)(param_1 + 100) < iVar3 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow((longlong *)(param_1 + 0x58),iVar3);
    }
    puVar7 = (undefined8 *)((longlong)iVar3 * 0x10 + *(longlong *)(param_1 + 0x58));
    *puVar7 = *param_2;
    lVar4 = param_2[1];
    puVar7[1] = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    ReleaseSRWLockExclusive(SRWLock);
    plVar5 = (longlong *)param_2[1];
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar5)(plVar5);
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
    uVar6 = 1;
  }
  else {
    plVar5 = (longlong *)param_2[1];
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar5)(plVar5);
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
    uVar6 = 0;
  }
  return uVar6;
}



// FUNCTION 1411d2bc0 FUN_1411d2bc0 body=279 status=ok
// SIG undefined FUN_1411d2bc0(void)

void FUN_1411d2bc0(longlong param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 local_res10 [2];
  longlong local_res20;
  longlong *local_28;
  longlong *local_20;
  
  lVar3 = *param_2;
  local_res10[0] = 0;
  if ((lVar3 != 0) && (param_3 != 0)) {
    if (*(int *)(param_1 + 0xd98) != *(int *)(param_1 + 0xdc4)) {
      lVar2 = *(longlong *)(param_1 + 0xdd0);
      if (*(longlong *)(param_1 + 0xdd0) == 0) {
        lVar2 = param_1 + 0xdc8;
      }
      iVar1 = *(int *)(lVar2 + ((longlong)((int)((ulonglong)lVar3 >> 0x20) + (int)lVar3) &
                               (longlong)*(int *)(param_1 + 0xdd8) - 1U) * 4);
      if (iVar1 != -1) {
        lVar2 = *(longlong *)(param_1 + 0xd90);
        do {
          lVar5 = lVar2 + (longlong)iVar1 * 0x18;
          if (*(longlong *)(lVar2 + (longlong)iVar1 * 0x18) == lVar3) {
            if (iVar1 != -1) goto LAB_1411d2c63;
            break;
          }
          iVar1 = *(int *)(lVar5 + 0x10);
        } while (iVar1 != -1);
      }
    }
    lVar5 = 0;
LAB_1411d2c63:
    lVar3 = lVar5 + 8;
    if (lVar5 == 0) {
      lVar3 = 0;
    }
    if (lVar3 == 0) {
      uVar4 = FUN_140681000();
      local_res20 = FUN_141799c90(uVar4,0,param_3,0,0,0,1);
      if (local_res20 != 0) {
        local_20 = &local_res20;
        local_28 = param_2;
        TSet<TTuple<FName,FFlareTechnologyDescription_*>,TDefaultMapHashableKeyFuncs<FName,FFlareTechnologyDescription_*,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FName_const_&,FFlareTechnologyDescription_*_const_&>_>
                  ((longlong *)(param_1 + 0xd90),local_res10,&local_28,0);
      }
    }
  }
  return;
}



// FUNCTION 1411d2ce0 FUN_1411d2ce0 body=306 status=ok
// SIG undefined FUN_1411d2ce0(void)

undefined8 * FUN_1411d2ce0(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  
  lVar4 = DAT_1462a1a80 + 1;
  if (lVar4 == 0) {
    lVar4 = 1;
  }
  *(longlong *)(param_3 + 0x140) = DAT_1462a1a80;
  DAT_1462a1a80 = lVar4;
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x50);
  if ((cVar3 == '\0') ||
     (lVar4 = FWeakObjectPtr::Get(param_1 + 0x50), *(char *)(lVar4 + 0x90) == '\0')) {
    iVar1 = *(int *)(param_1 + 0x38);
    iVar2 = *(int *)(param_3 + 0x160);
    if (((*(char *)(param_1 + 0x28) == '\0') ||
        ((*(longlong *)(param_1 + 0x40) != 0 && (cVar3 = FUN_14103f2a0(), cVar3 != '\0')))) &&
       ((iVar1 == 0 || (iVar2 == 0)))) {
      FUN_1411d9610(param_1,param_3);
      iVar1 = *(int *)(param_1 + 0x38);
      *(int *)(param_1 + 0x38) = iVar1 + 1;
      if (*(int *)(param_1 + 0x3c) < iVar1 + 1) {
        FUN_14055f770(param_1 + 0x30,iVar1);
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)*(void **)(param_1 + 0x30) + 0x168),*(void **)(param_1 + 0x30),
                 (longlong)iVar1 * 0x168);
      lVar4 = *(longlong *)(param_1 + 0x30);
      goto LAB_1411d2d83;
    }
  }
  iVar1 = *(int *)(param_1 + 0x38);
  *(int *)(param_1 + 0x38) = iVar1 + 1;
  if (*(int *)(param_1 + 0x3c) < iVar1 + 1) {
    FUN_14055f770(param_1 + 0x30,iVar1);
  }
  lVar4 = (longlong)iVar1 * 0x168 + *(longlong *)(param_1 + 0x30);
LAB_1411d2d83:
  FUN_1411c9050(lVar4,param_3);
  *param_2 = *(undefined8 *)(param_3 + 0x140);
  return param_2;
}



// FUNCTION 1411d2e20 FUN_1411d2e20 body=403 status=ok
// SIG undefined FUN_1411d2e20(void)

void FUN_1411d2e20(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  if ((((param_1 != (longlong *)0x0) && (param_3 != 0)) &&
      (lVar3 = (**(code **)(*param_1 + 0x148))(), lVar3 != 0)) &&
     (lVar3 = *(longlong *)(lVar3 + 0x148), lVar3 != 0)) {
    lVar4 = FUN_141424d10();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (((bVar2) && (*(char *)(lVar3 + 0x128) == '\x03')) &&
       (iVar7 = 0, 0 < *(int *)(lVar3 + 0x478))) {
      lVar4 = 0;
      do {
        plVar1 = *(longlong **)(lVar4 + *(longlong *)(lVar3 + 0x470));
        if (plVar1 == (longlong *)0x0) {
LAB_1411d2f64:
          lVar5 = 0;
        }
        else {
          lVar5 = UInputKeySelector::GetPrivateStaticClass();
          if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
              != lVar5 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if ((!bVar2) || (lVar5 = (**(code **)(*plVar1 + 0x670))(plVar1), lVar5 == 0))
          goto LAB_1411d2f64;
          lVar6 = FUN_14145f370();
          if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) goto LAB_1411d2f64;
        }
        if ((param_2 == 0) || (param_2 == lVar5)) {
          if (lVar5 != 0) {
            FUN_14145d620(lVar5,param_3);
          }
          if (param_2 != 0) {
            return;
          }
        }
        iVar7 = iVar7 + 1;
        lVar4 = lVar4 + 8;
      } while (iVar7 < *(int *)(lVar3 + 0x478));
    }
  }
  return;
}



// FUNCTION 1411d2fc0 SetUpStateObject body=10 status=ok
// SIG undefined SetUpStateObject(void)

void Scaleform::GFx::AS3::AvmButton::SetUpStateObject(undefined8 param_1,undefined8 param_2)

{
  FUN_1411d2e20(param_1,0,param_2);
  return;
}



// FUNCTION 1411d2fd0 RestoreSnapshot body=10 status=ok
// SIG undefined RestoreSnapshot(void)

void SubCharacterCatapult::RestoreSnapshot(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  if (param_2 == 0) {
    return;
  }
  if ((((param_1 != (longlong *)0x0) && (param_3 != 0)) &&
      (lVar3 = (**(code **)(*param_1 + 0x148))(), lVar3 != 0)) &&
     (lVar3 = *(longlong *)(lVar3 + 0x148), lVar3 != 0)) {
    lVar4 = FUN_141424d10();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (((bVar2) && (*(char *)(lVar3 + 0x128) == '\x03')) &&
       (iVar7 = 0, 0 < *(int *)(lVar3 + 0x478))) {
      lVar4 = 0;
      do {
        plVar1 = *(longlong **)(lVar4 + *(longlong *)(lVar3 + 0x470));
        if (plVar1 == (longlong *)0x0) {
LAB_1411d2f64:
          lVar5 = 0;
        }
        else {
          lVar5 = UInputKeySelector::GetPrivateStaticClass();
          if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
              != lVar5 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if ((!bVar2) || (lVar5 = (**(code **)(*plVar1 + 0x670))(plVar1), lVar5 == 0))
          goto LAB_1411d2f64;
          lVar6 = FUN_14145f370();
          if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) goto LAB_1411d2f64;
        }
        if ((param_2 == 0) || (param_2 == lVar5)) {
          if (lVar5 != 0) {
            FUN_14145d620(lVar5,param_3);
          }
          if (param_2 != 0) {
            return;
          }
        }
        iVar7 = iVar7 + 1;
        lVar4 = lVar4 + 8;
      } while (iVar7 < *(int *)(lVar3 + 0x478));
    }
  }
  return;
}



// FUNCTION 1411d2fe0 FUN_1411d2fe0 body=429 status=ok
// SIG undefined FUN_1411d2fe0(void)

void FUN_1411d2fe0(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  if ((((param_1 != (longlong *)0x0) && (param_3 != 0)) &&
      (lVar3 = (**(code **)(*param_1 + 0x148))(), lVar3 != 0)) &&
     (lVar3 = *(longlong *)(lVar3 + 0x148), lVar3 != 0)) {
    lVar4 = FUN_141424d10();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (*(char *)(lVar3 + 0x128) == '\x03')) {
      iVar7 = 0;
      if (0 < *(int *)(lVar3 + 0x478)) {
        lVar4 = 0;
        do {
          plVar1 = *(longlong **)(lVar4 + *(longlong *)(lVar3 + 0x470));
          if (plVar1 == (longlong *)0x0) {
LAB_1411d3124:
            lVar5 = 0;
          }
          else {
            lVar5 = UInputKeySelector::GetPrivateStaticClass();
            if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
                lVar5 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if ((!bVar2) || (lVar5 = (**(code **)(*plVar1 + 0x670))(plVar1), lVar5 == 0))
            goto LAB_1411d3124;
            lVar6 = FUN_14145f370();
            if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (!bVar2) goto LAB_1411d3124;
          }
          if ((param_2 == 0) || (param_2 == lVar5)) {
            if (lVar5 != 0) {
              FUN_14145d6b0(lVar5,param_3);
            }
            if (param_2 != 0) {
              return;
            }
          }
          iVar7 = iVar7 + 1;
          lVar4 = lVar4 + 8;
        } while (iVar7 < *(int *)(lVar3 + 0x478));
      }
      if ((param_2 == 0) && (*(float *)(param_3 + 0x60) <= 0.0 && *(float *)(param_3 + 0x60) != 0.0)
         ) {
        FUN_140c691e0(lVar3,param_3);
      }
    }
  }
  return;
}



// FUNCTION 1411d3190 SetUpStateObject body=10 status=ok
// SIG undefined SetUpStateObject(void)

void Scaleform::GFx::AS3::AvmButton::SetUpStateObject(undefined8 param_1,undefined8 param_2)

{
  FUN_1411d2fe0(param_1,0,param_2);
  return;
}



// FUNCTION 1411d31a0 FUN_1411d31a0 body=10 status=ok
// SIG undefined FUN_1411d31a0(void)

void FUN_1411d31a0(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  if (param_2 == 0) {
    return;
  }
  if ((((param_1 != (longlong *)0x0) && (param_3 != 0)) &&
      (lVar3 = (**(code **)(*param_1 + 0x148))(), lVar3 != 0)) &&
     (lVar3 = *(longlong *)(lVar3 + 0x148), lVar3 != 0)) {
    lVar4 = FUN_141424d10();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (*(char *)(lVar3 + 0x128) == '\x03')) {
      iVar7 = 0;
      if (0 < *(int *)(lVar3 + 0x478)) {
        lVar4 = 0;
        do {
          plVar1 = *(longlong **)(lVar4 + *(longlong *)(lVar3 + 0x470));
          if (plVar1 == (longlong *)0x0) {
LAB_1411d3124:
            lVar5 = 0;
          }
          else {
            lVar5 = UInputKeySelector::GetPrivateStaticClass();
            if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
                lVar5 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if ((!bVar2) || (lVar5 = (**(code **)(*plVar1 + 0x670))(plVar1), lVar5 == 0))
            goto LAB_1411d3124;
            lVar6 = FUN_14145f370();
            if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (!bVar2) goto LAB_1411d3124;
          }
          if ((param_2 == 0) || (param_2 == lVar5)) {
            if (lVar5 != 0) {
              FUN_14145d6b0(lVar5,param_3);
            }
            if (param_2 != 0) {
              return;
            }
          }
          iVar7 = iVar7 + 1;
          lVar4 = lVar4 + 8;
        } while (iVar7 < *(int *)(lVar3 + 0x478));
      }
      if ((param_2 == 0) && (*(float *)(param_3 + 0x60) <= 0.0 && *(float *)(param_3 + 0x60) != 0.0)
         ) {
        FUN_140c691e0(lVar3,param_3);
      }
    }
  }
  return;
}



// FUNCTION 1411d31b0 FUN_1411d31b0 body=1454 status=ok
// SIG undefined FUN_1411d31b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411d31b0(longlong param_1,longlong param_2,byte param_3)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  byte bVar13;
  ulonglong uVar14;
  longlong *plVar15;
  uint uVar16;
  uint *puVar17;
  longlong *plVar18;
  ulonglong uVar19;
  undefined1 auStack_298 [32];
  byte local_278;
  undefined8 local_270;
  uint *puStack_268;
  uint local_260;
  uint uStack_25c;
  uint uStack_258;
  undefined4 uStack_254;
  longlong local_250;
  undefined8 local_248;
  undefined4 uStack_240;
  uint uStack_23c;
  uint *local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  longlong *local_220;
  undefined8 uStack_218;
  uint *puStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  longlong local_1f8 [24];
  longlong *local_138;
  undefined8 local_130;
  longlong local_128 [24];
  longlong *local_68;
  undefined8 local_60;
  ulonglong local_58;
  
  if (param_2 != 0) {
    local_58 = DAT_1468387a8 ^ (ulonglong)auStack_298;
    local_278 = param_3;
    local_250 = param_2;
    lVar9 = FUN_140cb9640();
    if ((lVar9 == 0) || (*(char *)(lVar9 + 0x644) == '\0')) {
      bVar13 = local_278 & 0xfa | 2;
    }
    else {
      bVar13 = local_278 & 0xfc | 4;
    }
    uVar19 = 0;
    local_68 = (longlong *)0x0;
    local_60 = 0;
    FUN_140725150(param_2,local_128,0);
    plVar18 = local_128;
    if (local_68 != (longlong *)0x0) {
      plVar18 = local_68;
    }
    plVar15 = plVar18 + (int)local_60;
    local_270 = plVar15;
    if (plVar18 != plVar15) {
      do {
        lVar4 = *plVar18;
        if (lVar4 != 0) {
          bVar2 = *(byte *)(param_1 + 0x475);
          *(byte *)(lVar4 + 0x2ee) = *(byte *)(lVar4 + 0x2ee) | 1;
          *(uint *)(lVar4 + 0x398) =
               *(uint *)(lVar4 + 0x398) ^ ((uint)bVar2 ^ *(uint *)(lVar4 + 0x398)) & 1;
          *(byte *)(lVar4 + 0x304) = bVar13;
          *(undefined4 *)(lVar4 + 0x2f4) = 0;
          if ((*(char *)(param_1 + 0x476) != '\0') && (lVar9 != 0)) {
            uVar3 = *(uint *)(lVar4 + 0x6b8);
            uVar7 = FUN_140d000a0(lVar9);
            FUN_142398e60(lVar4,uVar7 | uVar3,0);
            plVar15 = local_270;
          }
          FUN_1423424e0(lVar4);
          if (((local_250 == param_1) && (0.0 < *(float *)(param_1 + 0x47c))) &&
             (*(float *)(param_1 + 0x47c) != *(float *)(lVar4 + 0x364))) {
            FUN_142397040(lVar4);
          }
          lVar10 = FUN_142a232e0();
          if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (bVar5) {
            if (*(char *)(param_1 + 0x478) != '\0') {
              FUN_1423df820(lVar4,1);
            }
          }
          else {
            lVar10 = FUN_142a0cc80();
            if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if (bVar5) {
              if (*(char *)(param_1 + 0x478) != '\0') {
                FUN_1423ba690(lVar4,1);
              }
              if (*(char *)(param_1 + 0x479) != '\0') {
                *(byte *)(lVar4 + 0x880) = *(byte *)(lVar4 + 0x880) & 0xdf;
              }
            }
          }
        }
        plVar18 = plVar18 + 1;
      } while (plVar18 != plVar15);
    }
    lVar9 = local_250;
    local_138 = (longlong *)0x0;
    local_130 = 0;
    FUN_1411c0c90(local_250,local_1f8,0);
    plVar18 = local_1f8;
    if (local_138 != (longlong *)0x0) {
      plVar18 = local_138;
    }
    uVar11 = (longlong)(int)local_130 & 0x1fffffffffffffff;
    if (plVar18 + (int)local_130 < plVar18) {
      uVar11 = uVar19;
    }
    uVar14 = uVar19;
    if (uVar11 != 0) {
      do {
        if (*plVar18 != 0) {
          *(byte *)(*plVar18 + 0x350) = bVar13;
          FUN_1423424e0();
        }
        plVar18 = plVar18 + 1;
        uVar14 = uVar14 + 1;
      } while (uVar14 != uVar11);
    }
    if (*(char *)(param_1 + 0x477) != '\0') {
      plVar18 = (longlong *)(lVar9 + 0x2b0);
      uVar3 = *(uint *)(lVar9 + 0x2d8);
      puVar1 = (uint *)(lVar9 + 0x2c0);
      local_270 = (longlong *)0x100000000;
      uStack_25c = 0;
      uStack_258 = 0;
      if (uVar3 != 0) {
        puVar17 = *(uint **)(lVar9 + 0x2d0);
        if (*(uint **)(lVar9 + 0x2d0) == (uint *)0x0) {
          puVar17 = puVar1;
        }
        uVar7 = *puVar17;
        uVar11 = uVar19;
        uVar14 = uVar19;
        while (uVar7 == 0) {
          iVar8 = (int)uVar11;
          uStack_258 = (int)uVar14 + 0x20;
          uVar14 = (ulonglong)uStack_258;
          uVar11 = (ulonglong)(iVar8 + 1U);
          uVar6 = (ulonglong)local_270 >> 0x20;
          local_270 = (longlong *)CONCAT44((int)uVar6,iVar8 + 1U);
          if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8)
          goto LAB_1411d3521;
          uVar7 = puVar17[(longlong)iVar8 + 1];
        }
        uVar7 = -uVar7 & uVar7;
        iVar8 = 0x1f;
        if (uVar7 != 0) {
          for (; uVar7 >> iVar8 == 0; iVar8 = iVar8 + -1) {
          }
        }
        local_270 = (longlong *)CONCAT44(uVar7,SUB84(local_270,0));
        if (uVar7 == 0) {
          iVar8 = 0x20;
        }
        else {
          iVar8 = 0x1f - iVar8;
        }
        uStack_25c = (uStack_258 - iVar8) + 0x1f;
        if ((int)uVar3 < (int)uStack_25c) {
LAB_1411d3521:
          uStack_25c = uVar3;
        }
      }
      uVar7 = *(uint *)(lVar9 + 0x2d8);
      uStack_230 = CONCAT44(uStack_25c,0xffffffff);
      local_228 = CONCAT44(uStack_254,uStack_258);
      uStack_218 = local_270;
      plVar15 = uStack_218;
      local_260 = -1 << ((byte)uVar7 & 0x1f);
      uStack_218._0_4_ = SUB84(local_270,0);
      uStack_218._4_4_ = (uint)((ulonglong)local_270 >> 0x20);
      uVar16 = uVar7 & 0xffffffe0;
      uStack_240 = (undefined4)uStack_218;
      uStack_23c = uStack_218._4_4_;
      puStack_268 = puVar1;
      uStack_25c = uVar7;
      local_238 = puVar1;
      local_220 = plVar18;
      uStack_218 = plVar15;
      puStack_210 = puVar1;
      uStack_208 = uStack_230;
      uStack_200 = local_228;
      local_248 = plVar18;
      if (uVar7 != uVar3) {
        puVar17 = *(uint **)(lVar9 + 0x2d0);
        if (*(uint **)(lVar9 + 0x2d0) == (uint *)0x0) {
          puVar17 = puVar1;
        }
        uVar12 = puVar17[(int)uVar7 >> 5] & local_260;
        iVar8 = (int)uVar7 >> 5;
        while (uVar12 == 0) {
          uVar16 = uVar16 + 0x20;
          if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8)
          goto LAB_1411d3606;
          uVar12 = puVar17[(longlong)iVar8 + 1];
          local_260 = 0xffffffff;
          iVar8 = iVar8 + 1;
        }
        uVar12 = -uVar12 & uVar12;
        iVar8 = 0x1f;
        if (uVar12 != 0) {
          for (; uVar12 >> iVar8 == 0; iVar8 = iVar8 + -1) {
          }
        }
        if (uVar12 == 0) {
          iVar8 = 0x20;
        }
        else {
          iVar8 = 0x1f - iVar8;
        }
        uStack_25c = (uVar16 - iVar8) + 0x1f;
        uVar7 = uStack_25c;
        if ((int)uVar3 < (int)uStack_25c) {
LAB_1411d3606:
          uStack_25c = uVar3;
          uVar7 = uVar3;
        }
      }
      while( true ) {
        lVar9 = local_250;
        if ((uStack_230._4_4_ == uVar7) && (local_238 == puVar1)) {
          bVar5 = true;
        }
        else {
          bVar5 = false;
        }
        if ((bVar5) && (local_248 == plVar18)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (!bVar5) break;
        lVar9 = *(longlong *)(*local_248 + (longlong)(int)uStack_230._4_4_ * 0x10);
        if (lVar9 != 0) {
          UActorComponent::SetTickableWhenPaused(lVar9,1);
        }
        uStack_230 = CONCAT44(uStack_230._4_4_,(uint)uStack_230 & ~uStack_23c);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_240);
      }
      AActor::SetTickableWhenPaused(local_250,1);
    }
    if (local_278 != 0) {
      local_270 = (longlong *)0x0;
      puStack_268 = (uint *)0x0;
      FUN_14222dd40(lVar9,&local_270,1);
      uVar11 = (ulonglong)((longlong)(local_270 + (int)puStack_268) + (7 - (longlong)local_270)) >>
               3;
      if (local_270 + (int)puStack_268 < local_270) {
        uVar11 = uVar19;
      }
      plVar18 = local_270;
      if (uVar11 != 0) {
        do {
          FUN_1411d31b0(param_1,*plVar18,0);
          uVar19 = uVar19 + 1;
          plVar18 = plVar18 + 1;
        } while (uVar19 != uVar11);
      }
      if (local_270 != (longlong *)0x0) {
        FMemory::Free(local_270);
      }
    }
    if (local_138 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_68 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1411d3760 FUN_1411d3760 body=266 status=ok
// SIG undefined FUN_1411d3760(void)

void FUN_1411d3760(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  
  if (*(longlong *)(param_1 + 0x68) != 0) {
    cVar4 = FUN_1407c3030(param_1 + 0x100);
    if ((cVar4 == '\0') &&
       ((*(longlong **)(param_1 + 0x40) == (longlong *)0x0 ||
        (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0xfb0))(), cVar4 == '\0')))) {
      cVar4 = '\0';
    }
    else {
      cVar4 = '\x01';
    }
    cVar5 = FUN_1407c3030(param_1 + 0x198);
    if ((cVar5 == '\0') && (cVar4 == '\0')) {
      uVar7 = 0;
    }
    else {
      uVar7 = 1;
    }
    (**(code **)(**(longlong **)(param_1 + 0x68) + 0x310))(*(longlong **)(param_1 + 0x68),uVar7);
    plVar8 = *(longlong **)(param_1 + 0x70);
    plVar1 = plVar8 + *(int *)(param_1 + 0x78);
    for (; plVar8 != plVar1; plVar8 = plVar8 + 1) {
      plVar2 = (longlong *)*plVar8;
      if (plVar2 != (longlong *)0x0) {
        lVar6 = FUN_1414ca080();
        if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
            lVar6 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          FUN_140e91300(plVar2,cVar4,DAT_1468769d0);
        }
        else {
          (**(code **)(*plVar2 + 0x310))(plVar2,cVar4);
        }
      }
    }
  }
  return;
}



// FUNCTION 1411d3870 FUN_1411d3870 body=510 status=ok
// SIG undefined FUN_1411d3870(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1411d3870(longlong param_1,longlong param_2)

{
  float *pfVar1;
  longlong *plVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  bool bVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined1 auVar10 [16];
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_18 [16];
  
  if (param_2 != 0) {
    plVar2 = *(longlong **)(param_2 + 0x168);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x418))(plVar2,&DAT_146532190);
      FUN_142382f60(*(undefined8 *)(param_2 + 0x168),*(undefined8 *)(param_1 + 0x60),&DAT_146532188,
                    0);
    }
    lVar8 = FUN_141404840();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
         ) != lVar8 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if ((bVar7) && (lVar8 = *(longlong *)(param_2 + 0x4d0), lVar8 != 0)) {
      local_20 = *(undefined4 *)(lVar8 + 0x710);
      pfVar1 = (float *)(lVar8 + 0x280);
      local_28 = 0;
      if ((*(float *)(lVar8 + 0x1f8) == *pfVar1) &&
         ((*(float *)(lVar8 + 0x1fc) == *(float *)(lVar8 + 0x284) &&
          (*(float *)(lVar8 + 0x200) == *(float *)(lVar8 + 0x288))))) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (bVar7) {
        local_38 = *(undefined8 *)*(undefined1 (*) [12])(lVar8 + 0x1f8);
        auVar10._12_4_ = 0;
        auVar10._0_12_ = *(undefined1 (*) [12])(lVar8 + 0x1f8);
        fVar3 = (float)DAT_1468766d0;
        fVar4 = DAT_1468766d0._4_4_;
        fVar5 = DAT_1468766d0._8_4_;
        auVar10 = divps(auVar10,_DAT_1468766d0);
        fVar12 = (float)local_38 - (float)(int)auVar10._0_4_ * fVar3;
        fVar13 = (float)((ulonglong)local_38 >> 0x20) - (float)(int)auVar10._4_4_ * fVar4;
        fVar14 = *(float *)(lVar8 + 0x200) - (float)(int)auVar10._8_4_ * fVar5;
        fVar12 = (float)(((uint)(fVar12 + fVar3) ^ (uint)fVar12) & -(uint)(0.0 <= fVar12) ^
                        (uint)(fVar12 + fVar3));
        fVar13 = (float)(((uint)(fVar13 + fVar4) ^ (uint)fVar13) & -(uint)(0.0 <= fVar13) ^
                        (uint)(fVar13 + fVar4));
        fVar14 = (float)(((uint)(fVar14 + fVar5) ^ (uint)fVar14) & -(uint)(0.0 <= fVar14) ^
                        (uint)(fVar14 + fVar5));
        uVar11 = ((uint)(fVar14 - fVar5) ^ (uint)fVar14) & -(uint)(fRam00000001468766c8 < fVar14) ^
                 (uint)fVar14;
        uStack_30 = CONCAT44(uStack_30._4_4_,uVar11);
        *(ulonglong *)pfVar1 =
             CONCAT44(((uint)(fVar13 - fVar4) ^ (uint)fVar13) &
                      -(uint)(fRam00000001468766c4 < fVar13) ^ (uint)fVar13,
                      ((uint)(fVar12 - fVar3) ^ (uint)fVar12) & -(uint)(_DAT_1468766c0 < fVar12) ^
                      (uint)fVar12);
        *(uint *)(lVar8 + 0x288) = uVar11;
        puVar9 = (undefined8 *)FRotator::Quaternion(pfVar1,local_18);
        uVar6 = puVar9[1];
        *(undefined8 *)(lVar8 + 0x270) = *puVar9;
        *(undefined8 *)(lVar8 + 0x278) = uVar6;
      }
      local_38 = *(undefined8 *)(lVar8 + 0x270);
      uStack_30 = *(undefined8 *)(lVar8 + 0x278);
      FUN_142397be0(lVar8,&local_28,&local_38,0,0,0);
    }
  }
  return;
}



// FUNCTION 1411d3a70 FUN_1411d3a70 body=2796 status=ok
// SIG undefined FUN_1411d3a70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411d3a70(longlong param_1,longlong param_2,int param_3,char param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  undefined1 *puVar14;
  undefined1 auStack_a18 [32];
  undefined4 *local_9f8;
  undefined4 *local_9f0;
  undefined4 *local_9e8;
  undefined4 *puStack_9e0;
  undefined4 local_9d8;
  undefined4 local_9d4 [3];
  undefined4 *local_9c8;
  ulonglong *puStack_9c0;
  longlong local_9b8;
  longlong local_9b0;
  undefined1 local_9a8 [8];
  longlong *local_9a0;
  undefined8 local_990;
  longlong local_988;
  undefined8 local_980;
  longlong *plStack_978;
  undefined8 local_970;
  longlong local_968;
  undefined1 local_960 [8];
  longlong *local_958;
  undefined1 local_948 [8];
  longlong *local_940;
  undefined1 local_930 [8];
  undefined1 local_928 [8];
  undefined1 local_920 [8];
  undefined1 local_918 [16];
  undefined4 *local_908;
  undefined4 *puStack_900;
  undefined1 local_8f8 [16];
  undefined4 *local_8e8;
  undefined4 *puStack_8e0;
  undefined1 local_8d8 [16];
  undefined4 *local_8c8;
  ulonglong *puStack_8c0;
  undefined1 local_8b8 [16];
  undefined4 local_8a8 [2];
  longlong *local_8a0;
  undefined1 local_890 [8];
  longlong *local_888;
  undefined1 local_878 [8];
  longlong *local_870;
  undefined1 local_860 [8];
  longlong *local_858;
  undefined1 local_848 [16];
  undefined1 local_838 [16];
  undefined1 local_828 [16];
  undefined1 local_818 [24];
  undefined1 local_800 [24];
  undefined1 local_7e8 [153];
  undefined1 local_74f;
  float local_748;
  undefined8 local_6a8;
  undefined1 local_678 [24];
  undefined1 local_660 [24];
  undefined1 local_648 [320];
  undefined1 local_508 [360];
  undefined1 local_3a0 [360];
  undefined1 local_238 [360];
  undefined4 local_d0 [4];
  undefined1 local_c0 [8];
  longlong *local_b8;
  char local_a8;
  undefined4 local_a0 [4];
  undefined1 local_90 [8];
  longlong *local_88;
  char local_78;
  undefined4 local_70 [2];
  undefined8 local_68;
  longlong *local_58;
  char local_48;
  ulonglong local_40;
  
  puVar14 = local_918;
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_a18;
  if (((param_2 == 0) || (param_3 < 1)) || (param_4 != '\x01')) {
    lVar6 = *(longlong *)(param_1 + 0x48);
    if (lVar6 != 0) {
      local_9b0 = lVar6;
      if (*(longlong *)(param_1 + 0x68) != 0) {
        FUN_1411e8130(*(longlong *)(param_1 + 0x68),&local_9b0);
      }
      *(undefined8 *)(param_1 + 0x48) = 0;
    }
    if (param_4 == '\x02') {
      uVar9 = FUN_1404b03b0();
      local_9f8 = (undefined4 *)&DAT_146876a50;
LAB_1411d44d6:
      local_9f0 = (undefined4 *)CONCAT44(local_9f0._4_4_,0x40400000);
      FUN_1411db820(param_1,puVar14,&DAT_146876a20,uVar9);
      return;
    }
    if (param_4 == '\x03') {
      uVar9 = FUN_1404b03b0();
      puVar14 = local_920;
      local_9f8 = (undefined4 *)&DAT_146876a38;
      goto LAB_1411d44d6;
    }
    if (param_4 != '\x05') {
      return;
    }
    puVar8 = (undefined8 *)FTextFormat::FTextFormat(local_838,&DAT_146876a68);
    local_70[0] = 0;
    local_9c8 = local_70;
    local_48 = '\0';
    puStack_9c0 = &local_40;
    local_970 = *puVar8;
    local_968 = puVar8[1];
    local_68 = 0;
    if (local_968 != 0) {
      LOCK();
      *(int *)(local_968 + 8) = *(int *)(local_968 + 8) + 1;
      UNLOCK();
    }
    local_8c8 = local_9c8;
    puStack_8c0 = puStack_9c0;
    uVar9 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_8b8,&local_8c8);
    uVar9 = FText::Format(local_860,&local_970,uVar9);
    FText::FText(local_8a8,uVar9);
    if (local_858 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_858 + 1;
      lVar6 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_858)(local_858);
        LOCK();
        piVar1 = (int *)((longlong)local_858 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_858 + 8))(local_858,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_8b8);
    if ((local_48 != '\0') && (local_48 = '\0', local_58 != (longlong *)0x0)) {
      LOCK();
      plVar10 = local_58 + 1;
      lVar6 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar1 = (int *)((longlong)local_58 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_58 + 8))(local_58,1);
        }
      }
    }
    plVar10 = (longlong *)puVar8[1];
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar10 + 1;
      lVar6 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
    }
    uVar9 = FUN_1404b03b0();
    local_9f0 = (undefined4 *)CONCAT44(local_9f0._4_4_,0x40400000);
    local_9f8 = local_8a8;
    FUN_1411db820(param_1,local_928,&DAT_146876a20,uVar9);
    plVar10 = local_8a0;
    goto LAB_1411d447e;
  }
  if ((*(longlong *)(param_1 + 0x58) != 0) && (lVar6 = FUN_1422312c0(), lVar6 != 0)) {
    lVar7 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38) < DAT_146876b08) &&
         (_Init_thread_header(&DAT_146876b08), DAT_146876b08 == -1)) {
        FName::FName(&DAT_146876b00,L"Countdown_Tone",1);
        _Init_thread_footer(&DAT_146876b08);
      }
      FUN_140be2cb0(lVar6,&DAT_146876b00);
    }
  }
  FText::FText(local_9a8,param_2 + 0x98);
  cVar5 = FText::IsEmptyOrWhitespace(local_9a8);
  if (cVar5 == '\0') {
    lVar6 = UTextureRenderTargetCube::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
         ) != lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_1411d3ba5;
  }
  else {
LAB_1411d3ba5:
    lVar7 = param_2 + 0x70;
    lVar6 = FWeakObjectPtr::Get(lVar7);
    if (lVar6 == 0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 != *(int *)(param_2 + 0x78)) &&
         (local_9e8 = (undefined4 *)0x0, *(longlong *)(param_2 + 0x80) != 0)) {
        lVar6 = FUN_141796df0();
        FWeakObjectPtr::operator=(lVar7,lVar6);
        if ((lVar6 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(param_2 + 0x78) = DAT_1464b56f4;
        }
        lVar6 = FWeakObjectPtr::Get(lVar7);
        if (lVar6 != 0) goto LAB_1411d3c1b;
      }
LAB_1411d3c51:
      lVar6 = 0;
    }
    else {
LAB_1411d3c1b:
      lVar7 = FUN_142e67be0();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) goto LAB_1411d3c51;
    }
    FText::operator=(local_9a8,lVar6 + 0x30);
  }
  local_980 = 0;
  plStack_978 = (longlong *)0x0;
  lVar6 = FText::AsNumber(local_818,param_3,0,&local_980);
  puVar8 = (undefined8 *)FTextFormat::FTextFormat(local_828,&DAT_1468769d8);
  local_d0[0] = 4;
  FText::FText(local_c0,lVar6);
  local_990 = *puVar8;
  local_9e8 = local_d0;
  puStack_9e0 = local_a0;
  local_988 = puVar8[1];
  local_a8 = '\x01';
  if (local_988 != 0) {
    LOCK();
    *(int *)(local_988 + 8) = *(int *)(local_988 + 8) + 1;
    UNLOCK();
  }
  local_908 = local_9e8;
  puStack_900 = puStack_9e0;
  uVar9 = TArray<FFormatArgumentValue,FDefaultAllocator>::
          TArray<FFormatArgumentValue,FDefaultAllocator>(local_8f8,&local_908);
  uVar9 = FText::Format(local_890,&local_990,uVar9);
  FText::FText(local_948,uVar9);
  if (local_888 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_888 + 1;
    lVar7 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_888)(local_888);
      LOCK();
      piVar1 = (int *)((longlong)local_888 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*local_888 + 8))(local_888,1);
      }
    }
  }
  TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
            (local_8f8);
  if ((local_a8 != '\0') && (local_a8 = '\0', local_b8 != (longlong *)0x0)) {
    LOCK();
    plVar10 = local_b8 + 1;
    lVar7 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_b8)(local_b8);
      LOCK();
      piVar1 = (int *)((longlong)local_b8 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*local_b8 + 8))(local_b8,1);
      }
    }
  }
  plVar10 = (longlong *)puVar8[1];
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar10 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  plVar10 = *(longlong **)(lVar6 + 8);
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar10 + 1;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  plVar10 = plStack_978;
  if (plStack_978 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_978 + 1;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_978)(plStack_978);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  lVar6 = FText::FText(local_800,local_9a8);
  plVar10 = (longlong *)FTextFormat::FTextFormat(local_848,&DAT_1468769f0);
  local_a0[0] = 4;
  FText::FText(local_90,lVar6);
  local_9c8 = (undefined4 *)*plVar10;
  local_9e8 = local_a0;
  puStack_9e0 = local_70;
  puStack_9c0 = (ulonglong *)plVar10[1];
  local_78 = '\x01';
  if (puStack_9c0 != (ulonglong *)0x0) {
    LOCK();
    *(int *)(puStack_9c0 + 1) = (int)puStack_9c0[1] + 1;
    UNLOCK();
  }
  local_8e8 = local_9e8;
  puStack_8e0 = puStack_9e0;
  uVar9 = TArray<FFormatArgumentValue,FDefaultAllocator>::
          TArray<FFormatArgumentValue,FDefaultAllocator>(local_8d8,&local_8e8);
  uVar9 = FText::Format(local_878,&local_9c8,uVar9);
  FText::FText(local_960,uVar9);
  if (local_870 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_870 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_870)(local_870);
      LOCK();
      piVar1 = (int *)((longlong)local_870 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*local_870 + 8))(local_870,1);
      }
    }
  }
  TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
            (local_8d8);
  if ((local_78 != '\0') && (local_78 = '\0', local_88 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_88 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_88)(local_88);
      LOCK();
      piVar1 = (int *)((longlong)local_88 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*local_88 + 8))(local_88,1);
      }
    }
  }
  plVar10 = (longlong *)plVar10[1];
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar10 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  plVar10 = *(longlong **)(lVar6 + 8);
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar10 + 1;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  lVar6 = *(longlong *)(param_1 + 0x48);
  if (lVar6 == 0) {
    FUN_1411c9410(local_7e8);
    if (*(longlong *)(param_1 + 0x68) != 0) {
      if ((*(longlong **)(param_1 + 0x58) == (longlong *)0x0) ||
         (lVar6 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x148))(), lVar6 == 0)) {
        local_9d8 = 0;
      }
      else {
        local_9d8 = *(undefined4 *)(lVar6 + 0x790);
      }
      local_9f0 = &local_9d8;
      local_9f8 = local_9d4;
      local_9d4[0] = 2;
      uVar9 = FUN_1411c91b0(local_508,local_948,local_960,&DAT_146876a08);
      FUN_1411cbfb0(local_7e8,uVar9);
      FUN_1411ca750(local_508);
      local_748 = (float)param_3;
      local_74f = 1;
      FUN_1411d2ce0(*(undefined8 *)(param_1 + 0x68),local_930,local_7e8);
    }
    FUN_1411ca750(local_7e8);
    *(undefined8 *)(param_1 + 0x48) = local_6a8;
  }
  else {
    lVar7 = *(longlong *)(param_1 + 0x68);
    local_9b8 = lVar6;
    if ((lVar7 != 0) && (cVar5 = FUN_1411d74a0(lVar7,&local_9b8), cVar5 != '\0')) {
      lVar3 = *(longlong *)(lVar7 + 0x30);
      lVar13 = (longlong)*(int *)(lVar7 + 0x38) * 0x168 + lVar3;
      for (lVar11 = lVar3; lVar11 != lVar13; lVar11 = lVar11 + 0x168) {
        if (lVar6 == *(longlong *)(lVar11 + 0x140)) {
          if (lVar11 != lVar13) {
            iVar12 = (int)((lVar11 - lVar3) / 0x168);
            if ((iVar12 < 0) || (*(int *)(lVar7 + 0x38) <= iVar12)) goto LAB_1411d4149;
            bVar4 = true;
            goto LAB_1411d414b;
          }
          break;
        }
      }
      iVar12 = -1;
LAB_1411d4149:
      bVar4 = false;
LAB_1411d414b:
      if (!bVar4) {
        uVar9 = FUN_1411c9410(local_3a0);
      }
      else {
        uVar9 = FUN_1411c9050(local_238,(longlong)iVar12 * 0x168 + lVar3);
      }
      FUN_1411c8eb0(local_678,uVar9);
      if (!bVar4) {
        FUN_1411ca750(local_3a0);
      }
      else {
        FUN_1411ca750(local_238);
      }
      FText::operator=(local_678,local_948);
      FText::operator=(local_660,local_960);
      FText::operator=(local_648,&DAT_146876a08);
      FUN_1411ff0a0(lVar7,local_678);
      FUN_1411ca750(local_678);
    }
  }
  if (local_958 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_958 + 1;
    lVar6 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_958)(local_958);
      LOCK();
      piVar1 = (int *)((longlong)local_958 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*local_958 + 8))(local_958,1);
      }
    }
  }
  plVar10 = local_9a0;
  if (local_940 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_940 + 1;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_940)(local_940);
      LOCK();
      piVar1 = (int *)((longlong)local_940 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar10 = local_9a0;
      if (iVar12 == 1) {
        (**(code **)(*local_940 + 8))(local_940,1);
        plVar10 = local_9a0;
      }
    }
  }
LAB_1411d447e:
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar10 + 1;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  return;
}



// FUNCTION 1411d4560 FUN_1411d4560 body=27 status=ok
// SIG undefined FUN_1411d4560(void)

void FUN_1411d4560(undefined8 param_1)

{
  FUN_1411d8c20();
  FUN_1417502d0(param_1);
  return;
}



// FUNCTION 1411d4580 FUN_1411d4580 body=168 status=ok
// SIG undefined FUN_1411d4580(void)

void FUN_1411d4580(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 local_res8;
  
  FUN_142223710();
  FUN_1411d31b0(param_1,param_1,1);
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (lVar1 != 0) {
    lVar3 = FUN_14145f370();
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
      if (*(char *)(param_1 + 0x474) != '\0') {
        local_res8 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x18);
        FUN_142dafbc0(lVar1 + 0xd58,&local_res8);
      }
      if (*(longlong *)(lVar1 + 0x1430) != 0) {
        FUN_140e59eb0(*(longlong *)(lVar1 + 0x1430),param_1);
      }
    }
  }
  return;
}



// FUNCTION 1411d4630 FUN_1411d4630 body=663 status=ok
// SIG undefined FUN_1411d4630(void)

void FUN_1411d4630(longlong *param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  longlong local_res10;
  undefined1 local_28 [8];
  longlong local_20;
  
  FUN_142330a70();
  FWeakObjectPtr::operator=(param_1 + 0x40,param_1[0x23]);
  FWeakObjectPtr::operator=(param_1 + 0x43,param_1);
  pwVar10 = (wchar_t *)param_1[0x23];
  *(undefined1 *)((longlong)param_1 + 0x229) = 2;
  if (pwVar10 != (wchar_t *)0x0) {
    lVar6 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(pwVar10 + 8) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar10 + 8) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1411d46bb;
  }
  pwVar10 = (wchar_t *)0x0;
LAB_1411d46bb:
  FWeakObjectPtr::operator=((longlong)param_1 + 0x274,pwVar10);
  iVar5 = FUN_14233f450(param_1);
  if ((iVar5 == 3) || (iVar5 == 0)) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  *(undefined1 *)((longlong)param_1 + 0x272) = uVar3;
  cVar4 = FWeakObjectPtr::IsValid();
  if ((cVar4 == '\0') || (lVar6 = FWeakObjectPtr::Get(), (*(byte *)(lVar6 + 0x92) & 0x40) == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (*(char *)((longlong)param_1 + 0x272) == '\0') {
    if (bVar1) {
      FUN_1411f0560(param_1);
      return;
    }
    *(undefined1 *)((longlong)param_1 + 0x272) = 1;
  }
  if (((char)param_1[0x4a] != '\0') && ((char)param_1[0x2f] != '\x01')) {
    *(undefined1 *)(param_1 + 0x4e) = 1;
    iVar5 = FUN_14233f450(param_1);
    if (iVar5 == 3) {
      (**(code **)(*param_1 + 0x260))(param_1);
    }
    FUN_1411f0560(param_1);
  }
  if (((byte)((char)param_1[0x2f] - 1U) < 2) &&
     (cVar4 = FWeakObjectPtr::IsValid((longlong)param_1 + 0x274), cVar4 != '\0')) {
    if ((char)param_1[0x2f] == '\x01') {
      FUN_1411fb3d0(param_1);
    }
    plVar7 = (longlong *)FWeakObjectPtr::Get((longlong)param_1 + 0x274);
    cVar4 = (**(code **)(*plVar7 + 0x950))(plVar7);
    if ((cVar4 != '\0') && (*(char *)((longlong)param_1 + 0x272) != '\0')) {
      *(undefined1 *)(param_1 + 0x4e) = 0;
      iVar5 = FUN_14233f450(param_1);
      if (iVar5 == 3) {
        (**(code **)(*param_1 + 0x260))(param_1);
      }
      FUN_1411f0560(param_1);
    }
    pwVar8 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnCharacterDied",L"::");
    pwVar10 = (wchar_t *)0x0;
    while (pwVar2 = pwVar8, pwVar2 != (wchar_t *)0x0) {
      pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar10 = pwVar2;
    }
    FName::FName(&local_res10,pwVar10 + 2,1);
    lVar6 = FWeakObjectPtr::Get((longlong)param_1 + 0x274);
    FWeakObjectPtr::operator=(local_28,0);
    local_20 = 0;
    FWeakObjectPtr::operator=(local_28,param_1);
    local_20 = local_res10;
    if ((local_res10 != 0) && (lVar9 = FWeakObjectPtr::Get(local_28), lVar9 != 0)) {
      UObject::FindFunction(lVar9,local_20);
    }
    FUN_1406a5aa0(lVar6 + 0xf18,local_28);
  }
  return;
}



// FUNCTION 1411d48d0 FUN_1411d48d0 body=373 status=ok
// SIG undefined FUN_1411d48d0(void)

void FUN_1411d48d0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  bool bVar7;
  undefined8 local_res10;
  longlong local_38;
  undefined8 local_30;
  longlong local_28 [2];
  
  if (param_2 != 0) {
    local_res10 = local_res10 & 0xffffffff00000000;
    lVar6 = *(longlong *)(param_1 + 0x58);
    lVar1 = lVar6 + (longlong)*(int *)(param_1 + 0x60) * 8;
    for (; lVar6 != lVar1; lVar6 = lVar6 + 8) {
      cVar4 = FUN_14058c1e0(lVar6,param_2);
      if (cVar4 != '\0') {
        bVar7 = *(longlong *)(param_2 + 0x118) == 0;
        if (bVar7) {
          local_38 = 0;
          local_30 = 0x10;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
          FGenericPlatformString::Memcpy(local_38,L"-Unknown Actor-",0x20);
          plVar5 = &local_38;
        }
        else {
          local_res10 = *(ulonglong *)(*(longlong *)(param_2 + 0x118) + 0x18);
          FName::ToString(&local_res10,local_28);
          plVar5 = local_28;
        }
        lVar1 = *plVar5;
        *plVar5 = 0;
        plVar5[1] = 0;
        if ((bVar7) && (local_38 != 0)) {
          FMemory::Free();
        }
        if ((!bVar7) && (local_28[0] != 0)) {
          FMemory::Free();
        }
        if (lVar1 == 0) {
          return;
        }
        FMemory::Free(lVar1);
        return;
      }
    }
    FWeakObjectPtr::operator=(&local_res10,param_2);
    iVar3 = *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x60) = iVar3 + 1;
    if (*(int *)(param_1 + 100) < iVar3 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x58,iVar3);
    }
    puVar2 = (undefined4 *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar3 * 8);
    *puVar2 = (undefined4)local_res10;
    puVar2[1] = local_res10._4_4_;
    local_res10 = param_2;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x28,&local_res10);
  }
  return;
}



// FUNCTION 1411d4a50 FUN_1411d4a50 body=569 status=ok
// SIG undefined FUN_1411d4a50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411d4a50(longlong *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
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
  lVar2 = (**(code **)(*param_1 + 0x148))();
  if (lVar2 != 0) {
    lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    if (*(longlong *)(lVar2 + 400) == 0) {
      uVar4 = *(undefined8 *)(lVar2 + 0x3f8);
    }
    else {
      uVar4 = *(undefined8 *)(*(longlong *)(lVar2 + 400) + 0x90);
    }
    FUN_142880530(uVar4,param_1 + 0x5a);
    param_1[0x5a] = 0;
  }
  lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar2 != 0) {
    local_a8 = FUN_1411f1170;
    uStack_a0 = 0;
    lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    if (*(longlong *)(lVar2 + 400) == 0) {
      uVar4 = *(undefined8 *)(lVar2 + 0x3f8);
    }
    else {
      uVar4 = *(undefined8 *)(*(longlong *)(lVar2 + 400) + 0x90);
    }
    uVar1 = *(undefined4 *)((longlong)param_1 + 0x2cc);
    plVar3 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar3 + 1,param_1);
      *(undefined4 *)(plVar3 + 2) = (undefined4)local_a8;
      *(undefined4 *)((longlong)plVar3 + 0x14) = local_a8._4_4_;
      *(undefined4 *)(plVar3 + 3) = uStack_a0;
      *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_9c;
      lVar2 = FDelegateHandle::GenerateNewID();
      plVar3[5] = lVar2;
      *plVar3 = (longlong)&PTR_FUN_143f77bd0;
    }
    local_98 = 0;
    local_90 = 0;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_98);
    }
    FWeakObjectPtr::operator=(local_88,0);
    local_b0 = 0xbf800000;
    local_b8 = 0;
    local_80 = 0;
    local_48 = (longlong *)0x0;
    local_38 = 0;
    local_78 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar4,param_1 + 0x5a,&local_98,uVar1);
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



// FUNCTION 1411d4c90 FUN_1411d4c90 body=694 status=ok
// SIG undefined FUN_1411d4c90(void)

longlong FUN_1411d4c90(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,char param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined2 *puVar11;
  undefined8 local_res8;
  undefined1 *puVar12;
  undefined8 local_88;
  longlong *local_80;
  longlong local_78 [4];
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  
  lVar7 = 0;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    lVar7 = FUN_1422312c0();
    if (lVar7 != 0) {
      lVar8 = FUN_14141f270();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) goto LAB_1411d4d15;
    }
    lVar7 = 0;
  }
LAB_1411d4d15:
  puVar10 = (undefined8 *)CONCAT44(param_5._4_4_,(undefined4)param_5);
  local_78[0] = 0;
  local_78[1] = 0;
  if (lVar7 != 0) {
    FUN_140d79f00(*(undefined8 *)(lVar7 + 0x478),puVar10,0,0,local_78);
  }
  if (*(longlong **)(param_1 + 0x58) != (longlong *)0x0) {
    lVar8 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x148))();
    if (lVar8 != 0) {
      param_5._0_4_ = *(undefined4 *)(lVar8 + 0x790);
      goto LAB_1411d4d68;
    }
  }
  param_5._0_4_ = 0;
LAB_1411d4d68:
  uVar9 = FText::FromString(local_58,local_78);
  puVar12 = &stack0x00000038;
  FUN_1411c91b0(param_2,param_3,uVar9,param_4,puVar12,&param_5);
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)local_50 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  local_80 = (longlong *)puVar10[1];
  local_88 = *puVar10;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_80 + 1) = (int)local_80[1] + 1;
    UNLOCK();
  }
  if ((undefined8 *)(param_2 + 0x148) != &local_88) {
    *(undefined8 *)(param_2 + 0x148) = local_88;
    local_88 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 0x150,&local_80);
  }
  plVar1 = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_80 + 1;
    lVar8 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_80 + 8))(local_80,1);
      }
    }
  }
  *(undefined1 *)(param_2 + 0x138) = 1;
  if ((lVar7 != 0) && (param_6 != '\0')) {
    uVar6 = FUN_140bbd2a0(lVar7,puVar10);
    puVar10 = (undefined8 *)FUN_1411f1490(local_78 + 2,uVar6);
    if (*(int *)(puVar10 + 1) == 0) {
      puVar11 = &DAT_143f3eda8;
    }
    else {
      puVar11 = (undefined2 *)*puVar10;
    }
    FName::FName(&local_res8,puVar11,1);
    if (local_78[2] != 0) {
      FMemory::Free();
    }
    uVar9 = FUN_142eff210(local_40,local_res8,*(undefined8 *)(param_1 + 0x58),0x42000000,
                          (ulonglong)puVar12 & 0xffffffff00000000);
    FText::operator=(param_2 + 0x48,uVar9);
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
  }
  if (local_78[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1411d5060 FUN_1411d5060 body=83 status=ok
// SIG undefined FUN_1411d5060(void)

void FUN_1411d5060(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = operator_new(0x78);
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_142741eb0(lVar2);
  }
  puVar1 = *(undefined8 **)(*param_1 + 200);
  *(undefined8 *)(*param_1 + 200) = uVar3;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001411d50aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1411d5140 FUN_1411d5140 body=101 status=ok
// SIG undefined FUN_1411d5140(void)

void FUN_1411d5140(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *param_3;
  if (lVar1 != 0) {
    lVar3 = FUN_141488730();
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
      FWeakObjectPtr::operator=(lVar1 + 0x6c8,*param_1);
    }
  }
  return;
}



// FUNCTION 1411d51b0 FUN_1411d51b0 body=32 status=ok
// SIG undefined FUN_1411d51b0(void)

undefined8 FUN_1411d51b0(undefined8 param_1,undefined8 param_2)

{
  FUN_1411cf630(param_2,param_1);
  return param_1;
}



// FUNCTION 1411d51d0 FUN_1411d51d0 body=36 status=ok
// SIG undefined FUN_1411d51d0(void)

void FUN_1411d51d0(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FWeakObjectPtr::Get();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001411d51e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x288))(plVar1);
    return;
  }
  return;
}



// FUNCTION 1411d5230 FUN_1411d5230 body=32 status=ok
// SIG undefined FUN_1411d5230(void)

undefined8 FUN_1411d5230(undefined8 param_1,undefined8 param_2)

{
  FUN_1411d1e30(param_2,param_1);
  return param_1;
}



// FUNCTION 1411d5280 FUN_1411d5280 body=32 status=ok
// SIG undefined FUN_1411d5280(void)

undefined8 FUN_1411d5280(undefined8 param_1,undefined8 param_2)

{
  FUN_1411d24c0(param_2,param_1);
  return param_1;
}



// FUNCTION 1411d52a0 FUN_1411d52a0 body=64 status=ok
// SIG undefined FUN_1411d52a0(void)

undefined1 FUN_1411d52a0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 0x102) != '\0') {
    cVar2 = FPreLoadScreenManager::ArePreLoadScreensEnabled();
    if (cVar2 != '\0') {
      lVar1 = GetMoviePlayer();
      if (lVar1 != 0) {
        plVar3 = (longlong *)GetMoviePlayer();
        cVar2 = (**(code **)(*plVar3 + 0x60))(plVar3);
        if (cVar2 != '\0') {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1411d52e0 FUN_1411d52e0 body=157 status=ok
// SIG undefined FUN_1411d52e0(void)

undefined8 FUN_1411d52e0(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong *plVar5;
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar2 = *(longlong *)(DAT_146b33f38 + 0x58);
  if (lVar2 != 0) {
    plVar5 = *(longlong **)(lVar2 + 0x1098);
    plVar1 = plVar5 + *(int *)(lVar2 + 0x10a0);
    for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
      plVar3 = (longlong *)*plVar5;
      if ((plVar3 != (longlong *)0x0) && ((char)plVar3[0x6a] != '\0')) {
        cVar4 = (**(code **)(*plVar3 + 0x280))(plVar3,param_1);
        if (cVar4 == '\0') {
          return 0;
        }
        cVar4 = (**(code **)(*plVar3 + 0x288))(plVar3);
        if (cVar4 == '\0') {
          return 0;
        }
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1411d5380 FUN_1411d5380 body=455 status=ok
// SIG undefined FUN_1411d5380(void)

undefined8 FUN_1411d5380(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 local_78 [24];
  undefined4 local_60;
  undefined8 local_5c;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  
  if (param_2 == 0) {
    return 0;
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar2 = *(longlong *)(DAT_146b33f38 + 0x58);
  if (lVar2 != 0) {
    plVar7 = *(longlong **)(lVar2 + 0x1098);
    plVar1 = plVar7 + *(int *)(lVar2 + 0x10a0);
    for (; plVar7 != plVar1; plVar7 = plVar7 + 1) {
      plVar3 = (longlong *)*plVar7;
      if (plVar3 != (longlong *)0x0) {
        lVar6 = plVar3[0x68];
        lVar2 = lVar6 + (longlong)(int)plVar3[0x69] * 0x28;
        for (; lVar6 != lVar2; lVar6 = lVar6 + 0x28) {
          local_48 = 0;
          local_40 = 0;
          local_60 = 0xffffffff;
          local_5c = 0;
          local_50 = 0;
          uVar5 = FSoftObjectPath::FSoftObjectPath(local_78,param_2);
          FSoftObjectPath::operator=(&local_50,uVar5);
          FWeakObjectPtr::operator=(&local_60,param_2);
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          local_5c = CONCAT44(DAT_1464b56f4,(undefined4)local_5c);
          cVar4 = FSoftObjectPath::operator==(lVar6 + 0x10,&local_50);
          if (local_48 != 0) {
            FMemory::Free();
          }
          if (cVar4 != '\0') {
            uVar5 = (**(code **)(*plVar3 + 0x280))(plVar3,param_1);
            return uVar5;
          }
        }
      }
    }
  }
  return 1;
}



// FUNCTION 1411d5550 FUN_1411d5550 body=157 status=ok
// SIG undefined FUN_1411d5550(void)

undefined8 FUN_1411d5550(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong *plVar5;
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar2 = *(longlong *)(DAT_146b33f38 + 0x58);
  if (lVar2 != 0) {
    plVar5 = *(longlong **)(lVar2 + 0x1098);
    plVar1 = plVar5 + *(int *)(lVar2 + 0x10a0);
    for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
      plVar3 = (longlong *)*plVar5;
      if ((plVar3 != (longlong *)0x0) && (0 < (int)plVar3[99])) {
        cVar4 = (**(code **)(*plVar3 + 0x280))(plVar3,param_1);
        if (cVar4 == '\0') {
          return 0;
        }
        cVar4 = (**(code **)(*plVar3 + 0x288))(plVar3);
        if (cVar4 == '\0') {
          return 0;
        }
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1411d55f0 FUN_1411d55f0 body=111 status=ok
// SIG undefined FUN_1411d55f0(void)

undefined8 FUN_1411d55f0(longlong param_1,longlong *param_2)

{
  char cVar1;
  int local_res10 [6];
  undefined1 local_48 [64];
  
  if ((param_2 != (longlong *)0x0) && (param_1 != 0)) {
    FUN_142ffa6f0(param_2,local_res10,param_1);
    if (local_res10[0] != -1) {
      FUN_142fde510(local_48);
      cVar1 = FUN_142ffa4f0(param_2,local_res10,local_48);
      if (cVar1 != '\0') {
        cVar1 = (**(code **)(*param_2 + 0x480))(param_2,local_48);
        if (cVar1 != '\0') {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1411d5660 FUN_1411d5660 body=60 status=ok
// SIG undefined FUN_1411d5660(void)

bool FUN_1411d5660(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass();
    lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
    if (lVar2 != 0) {
      return false;
    }
  }
  return param_1 != (longlong *)0x0;
}



// FUNCTION 1411d56a0 FUN_1411d56a0 body=756 status=ok
// SIG undefined FUN_1411d56a0(void)

undefined8 FUN_1411d56a0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined2 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  longlong *local_20;
  
  iVar5 = *(int *)(param_1 + 0x380);
  if (((-1 < iVar5) && (iVar5 < *(int *)(param_1 + 0x378))) && (*(char *)(param_1 + 0x360) != '\0'))
  {
    lVar9 = *(longlong *)(param_1 + 0x370);
    lVar6 = (longlong)iVar5 * 0xd8;
    if (*(int *)(lVar6 + 0x70 + lVar9) < 2) {
      lVar8 = *(longlong *)(lVar6 + 0xa8 + lVar9);
      lVar9 = (longlong)*(int *)(lVar6 + 0xb0 + lVar9) * 0x30 + lVar8;
      if (lVar8 != lVar9) {
        lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        do {
          if ((*(int *)(lVar6 + 0x38) < DAT_146876aac) &&
             (_Init_thread_header(&DAT_146876aac), DAT_146876aac == -1)) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a1f90,0);
            FGenericPlatformString::Convert<char,wchar_t>
                      (DAT_1462a1f90,0xf,"marketplace_id",0xf,0x3f);
            atexit((_func_5014 *)&LAB_143e62a70);
            _Init_thread_footer(&DAT_146876aac);
          }
          if (*(int *)(lVar8 + 0x18) == 0) {
            puVar7 = &DAT_143f3eda8;
          }
          else {
            puVar7 = *(undefined2 **)(lVar8 + 0x10);
          }
          iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar7);
          if (iVar5 == 0) {
            FUN_1404cf2e0(&local_28,0);
            if ((local_28 != (longlong *)0x0) &&
               (cVar4 = (**(code **)(*local_28 + 0x10))(local_28,1), plVar3 = local_20,
               cVar4 != '\0')) {
              if (local_20 == (longlong *)0x0) {
                return 1;
              }
              LOCK();
              plVar1 = local_20 + 1;
              lVar9 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar9 != 1) {
                return 1;
              }
              (**(code **)*local_20)(local_20);
              LOCK();
              piVar2 = (int *)((longlong)plVar3 + 0xc);
              iVar5 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar5 != 1) {
                return 1;
              }
              (**(code **)(*local_20 + 8))(local_20,1);
              return 1;
            }
            plVar3 = local_20;
            if (local_20 == (longlong *)0x0) {
              return 0;
            }
            LOCK();
            plVar1 = local_20 + 1;
            lVar9 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar9 != 1) {
              return 0;
            }
            (**(code **)*local_20)(local_20);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            iVar5 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            goto joined_r0x0001411d590b;
          }
          lVar8 = lVar8 + 0x30;
        } while (lVar8 != lVar9);
      }
    }
    else {
      FUN_1404cf2e0(&local_38,0);
      if ((local_38 != (longlong *)0x0) &&
         (cVar4 = (**(code **)(*local_38 + 0x10))(local_38,0xf), plVar3 = local_30, cVar4 != '\0'))
      {
        if (local_30 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_30 + 1;
          lVar9 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*local_30)(local_30);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            iVar5 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*local_30 + 8))(local_30,1);
              return 1;
            }
          }
        }
        return 1;
      }
      plVar3 = local_30;
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_30 + 1;
        lVar9 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          local_20 = local_30;
joined_r0x0001411d590b:
          if (iVar5 == 1) {
            (**(code **)(*local_20 + 8))(local_20,1);
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1411d59a0 FUN_1411d59a0 body=104 status=ok
// SIG undefined FUN_1411d59a0(void)

void FUN_1411d59a0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_res8;
  undefined4 local_resc;
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x480);
  if (cVar1 != '\0') {
    uVar2 = FWeakObjectPtr::Get(param_1 + 0x480);
    FUN_142227350(uVar2,0,1);
    FWeakObjectPtr::operator=(&local_res8,0);
    *(undefined4 *)(param_1 + 0x480) = local_res8;
    *(undefined4 *)(param_1 + 0x484) = local_resc;
  }
  FUN_1411d6b60(param_1);
  return;
}



// FUNCTION 1411d5a10 FUN_1411d5a10 body=451 status=ok
// SIG undefined FUN_1411d5a10(void)

void FUN_1411d5a10(longlong param_1)

{
  PSRWLOCK SRWLock;
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_58;
  undefined1 local_50 [16];
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  longlong local_30;
  longlong local_28;
  undefined8 local_20;
  
  SRWLock = (PSRWLOCK)(param_1 + 0x80);
  AcquireSRWLockShared(SRWLock);
  lVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x5c));
  if (lVar2 != 0) goto LAB_1411d5bc1;
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x38));
  local_28 = 0;
  local_30 = 0;
  local_40 = *(undefined4 *)(param_1 + 0x10);
  local_3c = *(undefined4 *)(param_1 + 0x14);
  local_38 = *(int *)(param_1 + 0x18);
  local_58 = *(undefined8 *)(param_1 + 0x20);
  local_20 = 0;
  FString::FString(local_50,param_1 + 0x28);
  FSoftObjectPath::operator=(&local_30,&local_58);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x38));
  lVar2 = FWeakObjectPtr::Get(&local_40);
  if (lVar2 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != local_38) && (local_30 != 0)) {
      lVar2 = FUN_141796df0(&local_30);
      FWeakObjectPtr::operator=(&local_40,lVar2);
      if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        local_38 = DAT_1464b56f4;
      }
      lVar2 = FWeakObjectPtr::Get(&local_40);
      if (lVar2 != 0) goto LAB_1411d5b34;
    }
LAB_1411d5b6a:
    lVar2 = 0;
  }
  else {
LAB_1411d5b34:
    lVar3 = UTexture::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_1411d5b6a;
  }
  if (local_28 != 0) {
    FMemory::Free();
  }
  if (lVar2 != 0) {
    ReleaseSRWLockShared(SRWLock);
    AcquireSRWLockExclusive(SRWLock);
    FUN_14170c210(param_1 + 0x5c,lVar2);
    ReleaseSRWLockExclusive(SRWLock);
    AcquireSRWLockShared(SRWLock);
  }
LAB_1411d5bc1:
                    /* WARNING: Could not recover jumptable at 0x0001411d5bcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared(SRWLock);
  return;
}



// FUNCTION 1411d5be0 FUN_1411d5be0 body=1859 status=ok
// SIG undefined FUN_1411d5be0(void)

void FUN_1411d5be0(longlong param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  longlong *plVar14;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  longlong local_88 [4];
  longlong local_68 [2];
  longlong local_58 [3];
  
  lVar6 = FWeakObjectPtr::Get(param_1 + 0x348);
  if ((lVar6 != 0) && (lVar6 = FWeakObjectPtr::Get(param_1 + 0x350), lVar6 != 0)) {
    lVar6 = FUN_1411e35f0();
    if (lVar6 != 0) {
      iVar13 = *(int *)(param_1 + 0x378) + -1;
      bVar1 = false;
      if (-1 < iVar13) {
        local_88[0] = (longlong)iVar13 * 0xd8;
        do {
          plVar14 = (longlong *)(param_1 + 0x370);
          lVar12 = *plVar14 + local_88[0];
          plVar11 = (longlong *)(lVar12 + 0xc0);
          if ((wchar_t *)*plVar11 != L"default") {
            iVar4 = 0;
            *(undefined4 *)(lVar12 + 200) = 0;
            if (*(int *)(lVar12 + 0xcc) != 8) {
              TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar11,8);
              iVar4 = *(int *)(lVar12 + 200);
            }
            *(int *)(lVar12 + 200) = iVar4 + 8;
            if (*(int *)(lVar12 + 0xcc) < iVar4 + 8) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar11);
            }
            builtin_wcsncpy((wchar_t *)*plVar11,L"default",8);
          }
          if (1 < *(int *)(lVar12 + 0x40)) {
            lVar7 = FUN_1404cd290(lVar6,lVar12 + 0x38);
            local_res10[0] = 0xffffffff;
            if (lVar7 != 0) {
              FUN_14170c210(local_res10,lVar7);
            }
            FUN_1416ff870(lVar12 + 0xd0,local_res10);
            FUN_1416f8340(local_res10[0]);
            lVar7 = FUN_1416f8720(*(undefined4 *)(lVar12 + 0xd0));
            if (lVar7 == 0) {
              iVar4 = FUN_141592950(lVar12 + 0x38,L"oakasset.frame.",1,0,0xffffffff);
              if (iVar4 == -1) {
                iVar4 = FUN_141592950(lVar12 + 0x38,L"oakasset.",1,0,0xffffffff);
                if (iVar4 == -1) {
                  if ((iVar13 < 0) || (*(int *)(param_1 + 0x378) <= iVar13)) {
                    bVar2 = false;
                  }
                  else {
                    bVar2 = true;
                  }
                  if (bVar2) {
                    FUN_1411f8480(plVar14,iVar13,1);
                  }
                }
                else if (*(undefined **)(lVar12 + 0x38) != &DAT_1446e978c) {
                  iVar4 = 0;
                  *(undefined4 *)(lVar12 + 0x40) = 0;
                  iVar5 = 0;
                  if (*(int *)(lVar12 + 0x44) != 0) {
                    TArray<wchar_t,FDefaultAllocator>::ResizeTo(lVar12 + 0x38);
                    iVar4 = *(int *)(lVar12 + 0x40);
                    iVar5 = *(int *)(lVar12 + 0x44);
                  }
                  if (iVar5 < iVar4) {
                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(lVar12 + 0x38);
                  }
                }
              }
              else {
                uVar8 = FString::Replace(lVar12 + 0x38,local_88 + 2,L"oakasset.frame.",
                                         &DAT_1446e974c,1);
                FString::operator=(lVar12 + 0x38,uVar8);
                if (local_88[2] != 0) {
                  FMemory::Free();
                }
              }
            }
            if (1 < *(int *)(lVar12 + 0x50)) {
              lVar7 = FUN_1404cd290(lVar6,lVar12 + 0x48);
              local_res18[0] = 0xffffffff;
              if (lVar7 != 0) {
                FUN_14170c210(local_res18,lVar7);
              }
              FUN_1416ff870(lVar12 + 0xd0,local_res18);
              FUN_1416f8340(local_res18[0]);
              lVar7 = FUN_1416f8720(*(undefined4 *)(lVar12 + 0xd0));
              if (lVar7 == 0) {
                iVar4 = FUN_141592950(lVar12 + 0x48,L"oakasset.frame.",1,0,0xffffffff);
                if (iVar4 == -1) {
                  iVar4 = FUN_141592950(lVar12 + 0x48,L"oakasset.",1,0,0xffffffff);
                  if (iVar4 == -1) {
                    if ((iVar13 < 0) || (*(int *)(param_1 + 0x378) <= iVar13)) {
                      bVar2 = false;
                    }
                    else {
                      bVar2 = true;
                    }
                    if (bVar2) {
                      FUN_1411f8480(plVar14,iVar13,1);
                    }
                  }
                  else if (*(undefined **)(lVar12 + 0x48) != &DAT_1446e99bc) {
                    iVar4 = 0;
                    *(undefined4 *)(lVar12 + 0x50) = 0;
                    iVar5 = 0;
                    if (*(int *)(lVar12 + 0x54) != 0) {
                      TArray<wchar_t,FDefaultAllocator>::ResizeTo(lVar12 + 0x48);
                      iVar4 = *(int *)(lVar12 + 0x50);
                      iVar5 = *(int *)(lVar12 + 0x54);
                    }
                    if (iVar5 < iVar4) {
                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(lVar12 + 0x48);
                    }
                  }
                }
                else {
                  uVar8 = FString::Replace(lVar12 + 0x48,local_68,L"oakasset.frame.",&DAT_1446e99b8,
                                           1);
                  FString::operator=(lVar12 + 0x48,uVar8);
                  if (local_68[0] != 0) {
                    FMemory::Free();
                  }
                }
              }
            }
            lVar7 = *(longlong *)(param_1 + 0x38);
            if (lVar7 != 0) {
              lVar9 = UMovieScene3DTransformSection::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if ((bVar2) && (lVar7 = FWeakObjectPtr::Get(lVar7 + 0x59c), lVar7 != 0)) {
                lVar9 = FUN_140cdde20(lVar7);
                lVar10 = FUN_140cde000(lVar7);
                lVar7 = FUN_1410f7490(lVar7);
                if ((lVar7 != 0) &&
                   ((((lVar9 == 0 && (lVar10 == 0)) &&
                     (cVar3 = FUN_141110000(lVar7,lVar12 + 8), cVar3 == '\0')) && (!bVar1)))) {
                  FUN_1411284b0(lVar7,lVar12 + 8);
                  bVar1 = true;
                }
              }
            }
          }
          if (1 < *(int *)(lVar12 + 0x60)) {
            lVar7 = FUN_1404cd290(lVar6,lVar12 + 0x58);
            local_res20[0] = 0xffffffff;
            if (lVar7 != 0) {
              FUN_14170c210(local_res20,lVar7);
            }
            FUN_1416ff870(lVar12 + 0xd0);
            FUN_1416f8340(local_res20[0]);
            lVar7 = FUN_1416f8720(*(undefined4 *)(lVar12 + 0xd0));
            if (lVar7 == 0) {
              iVar4 = FUN_141592950(lVar12 + 0x58,L"oakasset.frame.",1,0,0xffffffff);
              if (iVar4 == -1) {
                if ((iVar13 < 0) || (*(int *)(param_1 + 0x378) <= iVar13)) {
                  bVar2 = false;
                }
                else {
                  bVar2 = true;
                }
                if (bVar2) {
                  FUN_1411f8480(param_1 + 0x370,iVar13,1);
                }
              }
              else {
                uVar8 = FString::Replace(lVar12 + 0x58,local_58,L"oakasset.frame.",&DAT_1446e99f4,1)
                ;
                FString::operator=(plVar11,uVar8);
                if (local_58[0] != 0) {
                  FMemory::Free();
                }
              }
            }
            else if ((undefined *)*plVar11 != &DAT_1446e9ac0) {
              iVar4 = 0;
              *(undefined4 *)(lVar12 + 200) = 0;
              iVar5 = 0;
              if (*(int *)(lVar12 + 0xcc) != 0) {
                TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar11);
                iVar4 = *(int *)(lVar12 + 200);
                iVar5 = *(int *)(lVar12 + 0xcc);
              }
              if (iVar5 < iVar4) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar11);
              }
            }
          }
          local_88[0] = local_88[0] + -0xd8;
          iVar13 = iVar13 + -1;
        } while (-1 < iVar13);
      }
    }
    iVar13 = *(int *)(param_1 + 0x378);
    if (0 < iVar13) {
      if (*(longlong *)(param_1 + 0x2e0) != 0) {
        FUN_1411fa3f0(*(longlong *)(param_1 + 0x2e0),iVar13);
        iVar13 = *(int *)(param_1 + 0x378);
      }
      if ((*(longlong *)(param_1 + 0x2e8) != 0) && (0 < iVar13)) {
        *(undefined4 *)(param_1 + 0x380) = 0;
        FUN_1411f4e50(*(undefined8 *)(param_1 + 0x318),*(undefined8 *)(param_1 + 0x370),0);
        local_88[0] = 0;
        local_88[1] = 6;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_88,0);
        FGenericPlatformString::Memcpy(local_88[0],L"first",0xc);
        FUN_142088910(*(undefined8 *)(param_1 + 0x2e8),local_88);
        if (local_88[0] != 0) {
          FMemory::Free();
        }
        FUN_1411ff180(param_1);
        FUN_1411e7890(param_1);
        iVar13 = *(int *)(param_1 + 0x378);
      }
      bVar1 = 1 < iVar13;
      plVar11 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x348);
      (**(code **)(*plVar11 + 0x278))(plVar11,bVar1);
      lVar6 = FWeakObjectPtr::Get(param_1 + 0x348);
      (**(code **)(*(longlong *)(lVar6 + 0x170) + 0x38))((longlong *)(lVar6 + 0x170),bVar1);
      plVar11 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x350);
      (**(code **)(*plVar11 + 0x278))(plVar11,bVar1);
      lVar6 = FWeakObjectPtr::Get(param_1 + 0x350);
      (**(code **)(*(longlong *)(lVar6 + 0x170) + 0x38))((longlong *)(lVar6 + 0x170),bVar1);
      FUN_1411d6c00(param_1);
      FUN_1411fac10(param_1);
    }
  }
  return;
}



// FUNCTION 1411d6330 FUN_1411d6330 body=1043 status=ok
// SIG undefined FUN_1411d6330(void)

void FUN_1411d6330(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  longlong *plVar5;
  char cVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  undefined4 local_res20;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  longlong *local_e8;
  longlong *local_e0;
  longlong local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined1 local_b8 [8];
  undefined1 local_b0 [8];
  undefined1 local_a8 [8];
  longlong *local_a0;
  longlong *local_98;
  undefined1 *local_88 [2];
  undefined1 local_78 [32];
  undefined8 local_58;
  undefined4 local_48;
  
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_142227350(*(longlong *)(param_1 + 0x68),0,1);
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined1 *)(param_1 + 0x98) = 0;
  plVar7 = (longlong *)FUN_1411e1c90(param_1,local_b8);
  if (*plVar7 != 0) {
    lVar8 = FUN_1428dfc70();
    for (lVar9 = *plVar7; lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 0x30)) {
      if (lVar9 == lVar8) {
        if (*plVar7 != 0) {
          lVar9 = FUN_1411e5ff0(param_1);
          if ((lVar9 == 0) || (cVar6 = FUN_140e53930(lVar9 + 0x26f0), cVar6 != '\0')) {
            FUN_1411e1c90(param_1,&local_d8);
            if (local_d8 == 0) goto LAB_1411d6476;
            lVar8 = FUN_1428dfc70();
            lVar9 = local_d8;
            goto LAB_1411d6410;
          }
          *(undefined1 *)(param_1 + 0xfa) = 1;
        }
        break;
      }
    }
  }
  goto LAB_1411d6711;
  while (lVar9 = *(longlong *)(lVar9 + 0x30), lVar9 != 0) {
LAB_1411d6410:
    if (lVar9 == lVar8) {
      if (*(longlong *)(param_1 + 0x48) != 0) {
        local_58 = 0;
        local_48 = 0;
        puVar12 = (undefined8 *)FUN_140438ef0(0x10,local_78);
        if (puVar12 != (undefined8 *)0x0) {
          puVar12[1] = param_1;
          *puVar12 = &PTR_FUN_143f77b70;
        }
        local_88[0] = &LAB_1411d5120;
        uVar10 = FUN_1411fcbe0(*(undefined8 *)(param_1 + 0x48),local_d8,local_88);
        *(undefined8 *)(param_1 + 0x68) = uVar10;
        FUN_1411eb930(param_1);
      }
      break;
    }
  }
LAB_1411d6476:
  if (*(longlong *)(param_1 + 0x68) != 0) {
    local_res8[0] = FUN_142dcfc60(*(undefined8 *)(param_1 + 0x40));
    if (((*(char *)(param_1 + 0x98) == '\x02') || (*(char *)(param_1 + 800) != '\0')) ||
       (lVar9 = 0x230, *(char *)(param_1 + 0x2a8) != '\0')) {
      lVar9 = 0xa8;
    }
    FUN_1411f1980(&local_e8,*(undefined8 *)(param_1 + 0x68),param_2,local_res8,lVar9 + param_1);
    plVar11 = *(longlong **)(param_1 + 0x70);
    plVar7 = plVar11 + *(int *)(param_1 + 0x78);
    plVar5 = local_e8;
    for (; plVar11 != plVar7; plVar11 = plVar11 + 1) {
      lVar9 = *plVar11;
      local_e8 = plVar5;
      if (lVar9 == 0) {
LAB_1411d6549:
        local_res18[0] = FUN_142dcfc60(*(undefined8 *)(param_1 + 0x40));
        FUN_1411f1980(local_a8,lVar9,param_2,local_res18,0);
        plVar5 = local_a0;
        if (local_a0 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_a0 + 1;
          lVar9 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*local_a0)(local_a0);
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
      else {
        lVar8 = FUN_1414ca080();
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if ((!bVar4) || (*(char *)(lVar9 + 0x550) != '\0')) goto LAB_1411d6549;
      }
      plVar5 = local_e8;
    }
    if ((plVar5 != (longlong *)0x0) &&
       (cVar6 = (**(code **)(*plVar5 + 0x38))(plVar5), cVar6 == '\0')) {
      FWeakObjectPtr::operator=(&local_f0,*(undefined8 *)(param_1 + 0x68));
      FWeakObjectPtr::operator=(&local_f8,*(undefined8 *)(param_1 + 0x38));
      plVar7 = plVar5 + 0xb;
      local_d0 = local_f8;
      local_cc = local_f4;
      local_c0 = local_f0;
      local_res20 = local_ec;
      local_bc = local_ec;
      plVar11 = (longlong *)FMemory::Realloc(0,0x30);
      local_98 = plVar11;
      if (plVar11 != (longlong *)0x0) {
        *plVar11 = (longlong)&PTR_GetPoolName_1446fec58;
        *(undefined4 *)(plVar11 + 1) = local_f8;
        *(undefined4 *)((longlong)plVar11 + 0xc) = local_f4;
        plVar11[2] = param_1;
        *(undefined4 *)(plVar11 + 3) = local_f0;
        *(undefined4 *)((longlong)plVar11 + 0x1c) = local_res20;
        lVar9 = FDelegateHandle::GenerateNewID();
        plVar11[5] = lVar9;
        *plVar11 = (longlong)&PTR_GetPoolName_1446feca0;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar7,1);
        (**(code **)(*plVar11 + 0x20))(plVar11,local_b0);
        iVar3 = (int)plVar5[0xc];
        *(int *)(plVar5 + 0xc) = iVar3 + 1;
        if (*(int *)((longlong)plVar5 + 100) < iVar3 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar7,iVar3);
        }
        puVar12 = (undefined8 *)((longlong)iVar3 * 0x10 + *plVar7);
        *puVar12 = plVar11;
        *(undefined4 *)(puVar12 + 1) = 3;
      }
      *(undefined1 *)(param_1 + 0x98) = 1;
    }
    plVar7 = local_e0;
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_e0 + 1;
      lVar9 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_e0)(local_e0);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_e0 + 8))(local_e0,1);
        }
      }
    }
  }
LAB_1411d6711:
  if (*(char *)(param_1 + 0x98) != '\x01') {
    *(undefined1 *)(param_1 + 0x98) = 0;
  }
  return;
}



// FUNCTION 1411d6750 FUN_1411d6750 body=808 status=ok
// SIG undefined FUN_1411d6750(void)

void FUN_1411d6750(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 local_res8 [8];
  undefined1 local_res10;
  undefined1 local_res18 [8];
  undefined4 local_res20;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  longlong *local_68;
  longlong *local_60;
  
  if (*(longlong *)(param_1 + 0x68) == 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x98) = 2;
  local_res10 = param_2;
  FUN_1411eaaa0();
  if (*(longlong *)(param_1 + 0x68) == 0) {
    local_98 = (longlong *)0x0;
    local_a8 = (longlong *)0x0;
  }
  else {
    local_res8[0] = FUN_142dcfc60(*(undefined8 *)(param_1 + 0x40));
    if (((*(char *)(param_1 + 0x98) == '\x02') || (*(char *)(param_1 + 800) != '\0')) ||
       (lVar7 = 0x230, *(char *)(param_1 + 0x2a8) != '\0')) {
      lVar7 = 0xa8;
    }
    FUN_1411f1fd0(&local_a0,*(undefined8 *)(param_1 + 0x68),param_2,local_res8,lVar7 + param_1);
    uVar12 = 0;
    puVar10 = *(undefined8 **)(param_1 + 0x70);
    uVar11 = (longlong)*(int *)(param_1 + 0x78) & 0x1fffffffffffffff;
    if (puVar10 + *(int *)(param_1 + 0x78) < puVar10) {
      uVar11 = uVar12;
    }
    if (uVar11 != 0) {
      do {
        uVar4 = *puVar10;
        local_res18[0] = FUN_142dcfc60(*(undefined8 *)(param_1 + 0x40));
        FUN_1411f1fd0(local_70,uVar4,local_res10,local_res18,0);
        plVar9 = local_68;
        if (local_68 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_68 + 1;
          lVar7 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_68)(local_68);
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
        puVar10 = puVar10 + 1;
        uVar12 = uVar12 + 1;
      } while (uVar12 != uVar11);
    }
    local_a8 = local_98;
    if ((local_a0 != (longlong *)0x0) &&
       (cVar6 = (**(code **)(*local_a0 + 0x38))(local_a0), cVar6 == '\0')) {
      if (*(longlong *)(param_1 + 0x48) != 0) {
        FUN_1411f1450();
      }
      lVar7 = *(longlong *)(param_1 + 0x68);
      if (lVar7 != 0) {
        lVar8 = FUN_141404840();
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
          FUN_140e56290(lVar7);
        }
      }
      FWeakObjectPtr::operator=(&local_b8,*(undefined8 *)(param_1 + 0x68));
      FWeakObjectPtr::operator=(&local_c0,*(undefined8 *)(param_1 + 0x38));
      local_res20 = local_b8;
      local_80 = local_b8;
      local_90 = local_c0;
      local_8c = local_bc;
      local_7c = local_b4;
      plVar9 = (longlong *)FMemory::Realloc(0,0x30);
      local_60 = plVar9;
      if (plVar9 != (longlong *)0x0) {
        *plVar9 = (longlong)&PTR_GetPoolName_1446febc8;
        *(undefined4 *)(plVar9 + 1) = local_c0;
        *(undefined4 *)((longlong)plVar9 + 0xc) = local_bc;
        plVar9[2] = param_1;
        *(undefined4 *)(plVar9 + 3) = local_res20;
        *(undefined4 *)((longlong)plVar9 + 0x1c) = local_b4;
        lVar7 = FDelegateHandle::GenerateNewID();
        plVar9[5] = lVar7;
        *plVar9 = (longlong)&PTR_GetPoolName_1446fec10;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(local_a0 + 0xb,1);
        (**(code **)(*plVar9 + 0x20))(plVar9,local_78);
        iVar3 = (int)local_a0[0xc];
        *(int *)(local_a0 + 0xc) = iVar3 + 1;
        if (*(int *)((longlong)local_a0 + 100) < iVar3 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(local_a0 + 0xb,iVar3);
        }
        puVar10 = (undefined8 *)((longlong)iVar3 * 0x10 + local_a0[0xb]);
        *puVar10 = plVar9;
        *(undefined4 *)(puVar10 + 1) = 3;
      }
      goto LAB_1411d6a12;
    }
  }
  *(undefined1 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_142227350(*(longlong *)(param_1 + 0x68),0,1);
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  *(undefined8 *)(param_1 + 0x88) = 0;
LAB_1411d6a12:
  plVar9 = local_a8;
  if (local_98 != (longlong *)0x0) {
    LOCK();
    local_98 = local_98 + 1;
    lVar7 = *local_98;
    *(int *)local_98 = (int)*local_98 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_a8)(local_a8);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_a8 + 8))(local_a8,1);
      }
    }
  }
  return;
}



// FUNCTION 1411d6a80 FUN_1411d6a80 body=71 status=ok
// SIG undefined FUN_1411d6a80(void)

void FUN_1411d6a80(longlong param_1,undefined8 param_2)

{
  undefined8 *local_res8;
  undefined8 local_res10 [3];
  
  local_res8 = local_res10;
  local_res10[0] = param_2;
  FUN_1411ccb10(&local_res8,*(undefined8 *)(param_1 + 0x68));
  FUN_1411ccb10(&local_res8,*(undefined8 *)(param_1 + 0x70));
  FUN_1411ccb10(&local_res8,*(undefined8 *)(param_1 + 0x78));
  return;
}



// FUNCTION 1411d6ad0 FUN_1411d6ad0 body=137 status=ok
// SIG undefined FUN_1411d6ad0(void)

void FUN_1411d6ad0(undefined8 param_1)

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
  puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444f8920;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_res8;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_resc;
  }
  local_58[0] = &LAB_1411d5020;
  FUN_14204c280(local_58);
  return;
}



// FUNCTION 1411d6b60 FUN_1411d6b60 body=152 status=ok
// SIG undefined FUN_1411d6b60(void)

void FUN_1411d6b60(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong local_18;
  longlong *local_10;
  
  plVar3 = (longlong *)(param_1 + 0x4b0);
  if (*plVar3 != 0) {
    FUN_142833de0();
    FUN_14283ef20();
    local_10 = (longlong *)0x0;
    if (plVar3 != &local_18) {
      *plVar3 = 0;
      local_18 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x4b8,&local_10);
      plVar3 = local_10;
      if (local_10 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_10 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_10)(local_10);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_10 + 8))(local_10,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1411d6c00 FUN_1411d6c00 body=234 status=ok
// SIG undefined FUN_1411d6c00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411d6c00(undefined8 param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_74;
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  FWeakObjectPtr::operator=(&local_78,param_1);
  local_38 = (longlong *)0x0;
  local_28 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_58);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444f8920;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_78;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_74;
  }
  local_68[0] = &LAB_1411d5270;
  FUN_14208c300(param_1,local_68);
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



// FUNCTION 1411d6cf0 FUN_1411d6cf0 body=355 status=ok
// SIG undefined FUN_1411d6cf0(void)

void FUN_1411d6cf0(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  if (((param_1 != (longlong *)0x0) && (lVar3 = (**(code **)(*param_1 + 0x148))(), lVar3 != 0)) &&
     (lVar3 = *(longlong *)(lVar3 + 0x148), lVar3 != 0)) {
    lVar4 = ARemnantQuest::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (((bVar2) && (*(char *)(lVar3 + 0x128) == '\x03')) &&
       (iVar7 = 0, 0 < *(int *)(lVar3 + 0x478))) {
      lVar4 = 0;
      do {
        plVar1 = *(longlong **)(lVar4 + *(longlong *)(lVar3 + 0x470));
        if (plVar1 != (longlong *)0x0) {
          lVar5 = UInputKeySelector::GetPrivateStaticClass();
          if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
              != lVar5 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if ((bVar2) && (lVar5 = (**(code **)(*plVar1 + 0x670))(plVar1), lVar5 != 0)) {
            lVar6 = FUN_14145f370();
            if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              FUN_14145d870(lVar5);
            }
          }
        }
        iVar7 = iVar7 + 1;
        lVar4 = lVar4 + 8;
      } while (iVar7 < *(int *)(lVar3 + 0x478));
    }
  }
  return;
}



// FUNCTION 1411d6e60 FUN_1411d6e60 body=359 status=ok
// SIG undefined FUN_1411d6e60(void)

void FUN_1411d6e60(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  if (((param_1 != (longlong *)0x0) && (lVar3 = (**(code **)(*param_1 + 0x148))(), lVar3 != 0)) &&
     (lVar3 = *(longlong *)(lVar3 + 0x148), lVar3 != 0)) {
    lVar4 = ARemnantQuest::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (((bVar2) && (*(char *)(lVar3 + 0x128) == '\x03')) &&
       (iVar7 = 0, 0 < *(int *)(lVar3 + 0x478))) {
      lVar4 = 0;
      do {
        plVar1 = *(longlong **)(lVar4 + *(longlong *)(lVar3 + 0x470));
        if (plVar1 != (longlong *)0x0) {
          lVar5 = UInputKeySelector::GetPrivateStaticClass();
          if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
              != lVar5 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if ((bVar2) && (lVar5 = (**(code **)(*plVar1 + 0x670))(plVar1), lVar5 != 0)) {
            lVar6 = FUN_14145f370();
            if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              FUN_14145d8b0(lVar5,param_2);
            }
          }
        }
        iVar7 = iVar7 + 1;
        lVar4 = lVar4 + 8;
      } while (iVar7 < *(int *)(lVar3 + 0x478));
    }
  }
  return;
}



// FUNCTION 1411d6fd0 FUN_1411d6fd0 body=700 status=ok
// SIG undefined FUN_1411d6fd0(void)

float * FUN_1411d6fd0(float *param_1,float *param_2)

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
  float fVar12;
  float fVar13;
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
  
  fVar37 = -param_1[1];
  fVar29 = param_1[4];
  fVar30 = param_1[5];
  fVar31 = param_1[6];
  fVar32 = param_1[7];
  fVar38 = -param_1[2];
  fVar1 = param_1[8];
  fVar2 = param_1[9];
  fVar3 = param_1[10];
  fVar4 = param_1[0xb];
  fVar5 = param_1[0xc];
  fVar6 = param_1[0xd];
  fVar7 = param_1[0xe];
  fVar8 = param_1[0xf];
  fVar9 = param_1[0x10];
  fVar10 = param_1[0x11];
  fVar11 = param_1[0x12];
  fVar12 = param_1[0x13];
  fVar43 = -*param_1;
  fVar44 = fVar29 * 1.0 + fVar1 * 0.0 + fVar5 * 0.0 + fVar9 * 0.0;
  fVar45 = fVar30 * 1.0 + fVar2 * 0.0 + fVar6 * 0.0 + fVar10 * 0.0;
  fVar46 = fVar31 * 1.0 + fVar3 * 0.0 + fVar7 * 0.0 + fVar11 * 0.0;
  fVar47 = fVar32 * 1.0 + fVar4 * 0.0 + fVar8 * 0.0 + fVar12 * 0.0;
  fVar39 = fVar29 * 0.0 + fVar1 * 1.0 + fVar5 * 0.0 + fVar9 * 0.0;
  fVar40 = fVar30 * 0.0 + fVar2 * 1.0 + fVar6 * 0.0 + fVar10 * 0.0;
  fVar41 = fVar31 * 0.0 + fVar3 * 1.0 + fVar7 * 0.0 + fVar11 * 0.0;
  fVar42 = fVar32 * 0.0 + fVar4 * 1.0 + fVar8 * 0.0 + fVar12 * 0.0;
  fVar33 = fVar29 * 0.0 + fVar1 * 0.0 + fVar5 * 1.0 + fVar9 * 0.0;
  fVar34 = fVar30 * 0.0 + fVar2 * 0.0 + fVar6 * 1.0 + fVar10 * 0.0;
  fVar35 = fVar31 * 0.0 + fVar3 * 0.0 + fVar7 * 1.0 + fVar11 * 0.0;
  fVar36 = fVar32 * 0.0 + fVar4 * 0.0 + fVar8 * 1.0 + fVar12 * 0.0;
  fVar13 = param_1[0x28];
  fVar14 = param_1[0x29];
  fVar15 = param_1[0x2a];
  fVar16 = param_1[0x2b];
  fVar17 = param_1[0x2c];
  fVar18 = param_1[0x2d];
  fVar19 = param_1[0x2e];
  fVar20 = param_1[0x2f];
  fVar21 = param_1[0x30];
  fVar22 = param_1[0x31];
  fVar23 = param_1[0x32];
  fVar24 = param_1[0x33];
  fVar25 = param_1[0x24];
  fVar26 = param_1[0x25];
  fVar27 = param_1[0x26];
  fVar28 = param_1[0x27];
  fVar29 = fVar43 * fVar29 + fVar37 * fVar1 + fVar38 * fVar5 + fVar9 * 1.0;
  fVar30 = fVar43 * fVar30 + fVar37 * fVar2 + fVar38 * fVar6 + fVar10 * 1.0;
  fVar31 = fVar43 * fVar31 + fVar37 * fVar3 + fVar38 * fVar7 + fVar11 * 1.0;
  fVar32 = fVar43 * fVar32 + fVar37 * fVar4 + fVar38 * fVar8 + fVar12 * 1.0;
  param_2[4] = fVar39 * fVar25 + fVar40 * fVar13 + fVar41 * fVar17 + fVar42 * fVar21;
  param_2[5] = fVar39 * fVar26 + fVar40 * fVar14 + fVar41 * fVar18 + fVar42 * fVar22;
  param_2[6] = fVar39 * fVar27 + fVar40 * fVar15 + fVar41 * fVar19 + fVar42 * fVar23;
  param_2[7] = fVar39 * fVar28 + fVar40 * fVar16 + fVar41 * fVar20 + fVar42 * fVar24;
  param_2[8] = fVar33 * fVar25 + fVar34 * fVar13 + fVar35 * fVar17 + fVar36 * fVar21;
  param_2[9] = fVar33 * fVar26 + fVar34 * fVar14 + fVar35 * fVar18 + fVar36 * fVar22;
  param_2[10] = fVar33 * fVar27 + fVar34 * fVar15 + fVar35 * fVar19 + fVar36 * fVar23;
  param_2[0xb] = fVar33 * fVar28 + fVar34 * fVar16 + fVar35 * fVar20 + fVar36 * fVar24;
  param_2[0xc] = fVar29 * fVar25 + fVar30 * fVar13 + fVar31 * fVar17 + fVar32 * fVar21;
  param_2[0xd] = fVar29 * fVar26 + fVar30 * fVar14 + fVar31 * fVar18 + fVar32 * fVar22;
  param_2[0xe] = fVar29 * fVar27 + fVar30 * fVar15 + fVar31 * fVar19 + fVar32 * fVar23;
  param_2[0xf] = fVar29 * fVar28 + fVar30 * fVar16 + fVar31 * fVar20 + fVar32 * fVar24;
  *param_2 = fVar44 * fVar25 + fVar45 * fVar13 + fVar46 * fVar17 + fVar47 * fVar21;
  param_2[1] = fVar44 * fVar26 + fVar45 * fVar14 + fVar46 * fVar18 + fVar47 * fVar22;
  param_2[2] = fVar44 * fVar27 + fVar45 * fVar15 + fVar46 * fVar19 + fVar47 * fVar23;
  param_2[3] = fVar44 * fVar28 + fVar45 * fVar16 + fVar46 * fVar20 + fVar47 * fVar24;
  return param_2;
}



// FUNCTION 1411d7290 FUN_1411d7290 body=516 status=ok
// SIG undefined FUN_1411d7290(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1411d7290(longlong param_1,undefined1 (*param_2) [12])

{
  bool bVar1;
  bool bVar2;
  float fVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 local_38 [4];
  float local_34;
  
  if (((*(char *)(param_1 + 0x98) == '\x02') || (*(char *)(param_1 + 800) != '\0')) ||
     (lVar4 = 0x230, *(char *)(param_1 + 0x2a8) != '\0')) {
    lVar4 = 0xa8;
  }
  if (*(char *)(lVar4 + param_1) == '\x05') {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    lVar4 = *(longlong *)(DAT_146b33f38 + 0xd0);
    if (lVar4 != 0) {
      fVar7 = (float)DAT_1468766d0;
      fVar10 = DAT_1468766d0._4_4_;
      fVar3 = DAT_1468766d0._8_4_;
      auVar5._12_4_ = 0;
      auVar5._0_12_ = *param_2;
      auVar5 = divps(auVar5,_DAT_1468766d0);
      fVar6 = *(float *)*param_2 - (float)(int)auVar5._0_4_ * fVar7;
      fVar8 = *(float *)(*param_2 + 4) - (float)(int)auVar5._4_4_ * fVar10;
      fVar9 = *(float *)(*param_2 + 8) - (float)(int)auVar5._8_4_ * fVar3;
      fVar6 = (float)(((uint)(fVar7 + fVar6) ^ (uint)fVar6) & -(uint)(0.0 <= fVar6) ^
                     (uint)(fVar7 + fVar6));
      fVar8 = (float)(((uint)(fVar10 + fVar8) ^ (uint)fVar8) & -(uint)(0.0 <= fVar8) ^
                     (uint)(fVar10 + fVar8));
      fVar9 = (float)(((uint)(fVar3 + fVar9) ^ (uint)fVar9) & -(uint)(0.0 <= fVar9) ^
                     (uint)(fVar3 + fVar9));
      bVar1 = fRam00000001468766c4 < fVar8;
      bVar2 = fRam00000001468766c8 < fVar9;
      *(uint *)*param_2 =
           ((uint)(fVar6 - fVar7) ^ (uint)fVar6) & -(uint)(_DAT_1468766c0 < fVar6) ^ (uint)fVar6;
      *(uint *)(*param_2 + 8) = ((uint)(fVar9 - fVar3) ^ (uint)fVar9) & -(uint)bVar2 ^ (uint)fVar9;
      *(uint *)(*param_2 + 4) = ((uint)(fVar8 - fVar10) ^ (uint)fVar8) & -(uint)bVar1 ^ (uint)fVar8;
      FUN_1411e1990(param_1,local_38);
      fVar7 = (*(float *)(lVar4 + 0x428) - *(float *)(lVar4 + 0x42c)) + local_34;
      fVar10 = (float)(int)(fVar7 * 0.0027777778) * 360.0;
      if (ABS(fVar7) < ABS(fVar10)) {
        fVar10 = fVar7;
      }
      fVar7 = fVar7 - fVar10;
      if (fVar7 < 0.0) {
        fVar7 = fVar7 + 360.0;
      }
      if (180.0 < fVar7) {
        fVar7 = fVar7 - 360.0;
      }
      local_34 = *(float *)(lVar4 + 0x428) + *(float *)(lVar4 + 0x42c) + local_34;
      fVar10 = (float)(int)(local_34 * 0.0027777778) * 360.0;
      if (ABS(local_34) < ABS(fVar10)) {
        fVar10 = local_34;
      }
      local_34 = local_34 - fVar10;
      if (local_34 < 0.0) {
        local_34 = local_34 + 360.0;
      }
      if (180.0 < local_34) {
        local_34 = local_34 - 360.0;
      }
      fVar10 = *(float *)(*param_2 + 4);
      if ((fVar7 <= fVar10) && (fVar7 = fVar10, local_34 <= fVar10)) {
        fVar7 = local_34;
      }
      *(float *)(*param_2 + 4) = fVar7;
    }
  }
  return;
}



// FUNCTION 1411d74a0 FUN_1411d74a0 body=106 status=ok
// SIG undefined FUN_1411d74a0(void)

ulonglong FUN_1411d74a0(longlong param_1,ulonglong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x30);
  uVar2 = (ulonglong)*(int *)(param_1 + 0x38);
  lVar4 = uVar2 * 0x168 + lVar1;
  if (lVar1 != lVar4) {
    uVar2 = *param_2;
    lVar3 = lVar1;
    do {
      if (uVar2 == *(ulonglong *)(lVar3 + 0x140)) {
        if (lVar3 != lVar4) {
          return (ulonglong)((int)((lVar3 - lVar1) / 0x168) != -1);
        }
        break;
      }
      lVar3 = lVar3 + 0x168;
    } while (lVar3 != lVar4);
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 1411d7510 FUN_1411d7510 body=102 status=ok
// SIG undefined FUN_1411d7510(void)

void FUN_1411d7510(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_10;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    auVar1 = *(undefined1 (*) [16])(param_2 + 0x220);
    local_20 = auVar1._8_4_;
    local_28 = auVar1._0_8_;
    local_10 = local_20;
    USceneComponent::K2_AttachTo(local_28,&local_28,auVar1._0_4_,1,0);
    return;
  }
  *param_3 = DAT_1468b5d88;
  return;
}



// FUNCTION 1411d7580 FUN_1411d7580 body=235 status=ok
// SIG undefined FUN_1411d7580(void)

void FUN_1411d7580(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (((*(char *)(param_1 + 0x98) == '\x02') || (*(char *)(param_1 + 800) != '\0')) ||
     (lVar3 = 0x230, *(char *)(param_1 + 0x2a8) != '\0')) {
    lVar3 = 0xa8;
  }
  if ((byte)(*(char *)(param_1 + lVar3) - 1U) < 2) {
    lVar3 = 0;
    lVar5 = lVar3;
    if ((*(char *)(param_1 + 0x98) != '\x02') && (lVar1 = *(longlong *)(param_1 + 0x68), lVar1 != 0)
       ) {
      lVar4 = FUN_141404840();
      if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        lVar3 = *(longlong *)(lVar1 + 0x2298);
        lVar5 = lVar1;
      }
    }
    if (((lVar5 != 0) && (lVar3 != 0)) &&
       ((lVar5 = FUN_1411e5ff0(param_1), lVar5 != 0 && (*(longlong *)(lVar5 + 0x2a60) != 0)))) {
      FUN_142d14820(lVar3,*(longlong *)(lVar5 + 0x2a60));
    }
  }
  return;
}



// FUNCTION 1411d7670 CopyToEmptyStorage body=104 status=ok
// SIG undefined CopyToEmptyStorage(void)

undefined8 *
UE4Function_Private::TFunction_OwnedObject<<lambda_86b5239219762420415e95617a23a7af>_>::
CopyToEmptyStorage(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x70);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_CopyToEmptyStorage_1446feff0;
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    lVar1 = *(longlong *)(param_1 + 0x18);
    puVar2[3] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    ::TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar2 + 4,param_1 + 0x20);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1411d76e0 FUN_1411d76e0 body=107 status=ok
// SIG undefined FUN_1411d76e0(void)

undefined8 * FUN_1411d76e0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1446fea60;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    puVar1[3] = 0;
    *(undefined4 *)(puVar1 + 4) = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=(puVar1 + 3,param_1 + 0x18);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1411d7750 FUN_1411d7750 body=201 status=ok
// SIG undefined FUN_1411d7750(void)

undefined8 * FUN_1411d7750(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x18);
  if (puVar2 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *puVar2 = &PTR_FUN_1446feb08;
  puVar2[1] = 0;
  iVar5 = *(int *)(param_1 + 0x10);
  puVar4 = *(undefined8 **)(param_1 + 8);
  *(int *)(puVar2 + 2) = iVar5;
  if (iVar5 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x14) = 0;
    return puVar2;
  }
  TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar2 + 1,iVar5,0);
  puVar3 = (undefined8 *)puVar2[1];
  do {
    *puVar3 = *puVar4;
    lVar1 = puVar4[1];
    puVar3[1] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar3 = puVar3 + 2;
    puVar4 = puVar4 + 2;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return puVar2;
}



// FUNCTION 1411d7820 FUN_1411d7820 body=105 status=ok
// SIG undefined FUN_1411d7820(void)

undefined8 * FUN_1411d7820(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1446feb20;
    FUN_140f16ab0(puVar1 + 1,param_1 + 8);
    puVar1[6] = *(undefined8 *)(param_1 + 0x30);
    puVar1[7] = *(undefined8 *)(param_1 + 0x38);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1411d7890 CopyToEmptyStorage body=79 status=ok
// SIG undefined CopyToEmptyStorage(void)

undefined8 *
UE4Function_Private::TFunction_OwnedObject<<lambda_7a02e06ca5db01d82e81cc92e1965566>_>::
CopyToEmptyStorage(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x60);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_CopyToEmptyStorage_1446fefb8;
    ::TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar1 + 2,param_1 + 0x10);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1411d78e0 FUN_1411d78e0 body=83 status=ok
// SIG undefined FUN_1411d78e0(void)

void FUN_1411d78e0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1446fece8;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_GetPoolName_1446fed30;
  }
  return;
}



// FUNCTION 1411d7940 FUN_1411d7940 body=83 status=ok
// SIG undefined FUN_1411d7940(void)

void FUN_1411d7940(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1446fed78;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_GetPoolName_1446fedc0;
  }
  return;
}



// FUNCTION 1411d79a0 FUN_1411d79a0 body=83 status=ok
// SIG undefined FUN_1411d79a0(void)

void FUN_1411d79a0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1446fee98;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_GetPoolName_1446feee0;
  }
  return;
}



// FUNCTION 1411d7a00 FUN_1411d7a00 body=83 status=ok
// SIG undefined FUN_1411d7a00(void)

void FUN_1411d7a00(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1446fee08;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_GetPoolName_1446fee50;
  }
  return;
}



// FUNCTION 1411d7a60 FUN_1411d7a60 body=97 status=ok
// SIG undefined FUN_1411d7a60(void)

void FUN_1411d7a60(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1446fec58;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    puVar1[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar1 = &PTR_GetPoolName_1446feca0;
  }
  return;
}



// FUNCTION 1411d7ad0 FUN_1411d7ad0 body=97 status=ok
// SIG undefined FUN_1411d7ad0(void)

void FUN_1411d7ad0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1446febc8;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    puVar1[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar1 = &PTR_GetPoolName_1446fec10;
  }
  return;
}



// FUNCTION 1411d7b40 FUN_1411d7b40 body=107 status=ok
// SIG undefined FUN_1411d7b40(void)

void FUN_1411d7b40(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1446fef28;
    *(undefined4 *)(puVar1 + 1) = 0xffffffff;
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 8));
    FUN_14170c210(puVar1 + 1,uVar2);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *puVar1 = &PTR_GetPoolName_1446fef70;
  }
  return;
}



// FUNCTION 1411d7bb0 FUN_1411d7bb0 body=68 status=ok
// SIG undefined FUN_1411d7bb0(void)

void FUN_1411d7bb0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1446fea20;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  }
  return;
}



// FUNCTION 1411d7c00 CreateCopy body=74 status=ok
// SIG undefined CreateCopy(void)

void TBaseRawMethodDelegateInstance<0,FActorIteratorState,TTypeWrapper<void>___cdecl(AActor_*)>::
     CreateCopy(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1446fea78;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_GetPoolName_1446feac0;
  }
  return;
}



// FUNCTION 1411d7c50 FUN_1411d7c50 body=82 status=ok
// SIG undefined FUN_1411d7c50(void)

void FUN_1411d7c50(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1446fe8e0;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_GetPoolName_1446fe928;
  }
  return;
}



// FUNCTION 1411d7cb0 FUN_1411d7cb0 body=78 status=ok
// SIG undefined FUN_1411d7cb0(void)

void FUN_1411d7cb0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1446fe990;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_FUN_1446fe9d8;
  }
  return;
}



// FUNCTION 1411d7d00 FUN_1411d7d00 body=78 status=ok
// SIG undefined FUN_1411d7d00(void)

void FUN_1411d7d00(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1446feb38;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_FUN_1446feb80;
  }
  return;
}



// FUNCTION 1411d7d50 FUN_1411d7d50 body=332 status=ok
// SIG undefined FUN_1411d7d50(void)

undefined8 * FUN_1411d7d50(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  DWORD *pDVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = (longlong *)0x0;
  iVar8 = 0;
  if (param_2 != 0) {
    iVar8 = *(int *)(param_2 + 0x28);
  }
  pDVar2 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar3 = TlsGetValue(*pDVar2);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      *(undefined4 *)(plVar3 + 2) = 0;
      plVar6 = plVar3;
    }
    TlsSetValue(*pDVar2,plVar6);
    plVar3 = plVar6;
  }
  plVar6 = (longlong *)plVar3[1];
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)*plVar3;
    if (plVar6 == (longlong *)0x0) {
      lVar4 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar2 + 2);
      plVar3[1] = lVar4;
      if (lVar4 == 0) {
        puVar5 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar3[1] = (longlong)puVar5;
        lVar4 = 0x1f;
        do {
          puVar1 = puVar5 + 0x20;
          *puVar5 = puVar1;
          lVar4 = lVar4 + -1;
          puVar5 = puVar1;
        } while (lVar4 != 0);
        *puVar1 = 0;
      }
      plVar6 = (longlong *)plVar3[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar3 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar3[1] = (longlong)plVar6;
      *(undefined4 *)(plVar3 + 2) = 0x20;
      *plVar3 = 0;
    }
  }
  else {
    iVar7 = (int)plVar3[2];
  }
  plVar3[1] = *plVar6;
  *(int *)(plVar3 + 2) = iVar7 + -1;
  *plVar6 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar6 + 1) = 0xff;
  *(int *)((longlong)plVar6 + 0xc) = iVar8 + 1;
  *plVar6 = (longlong)&PTR_FUN_1446fe980;
  *(undefined1 *)(plVar6 + 4) = 0;
  plVar6[5] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}


