// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14308c120 FUN_14308c120 body=112 status=ok
// SIG undefined FUN_14308c120(void)

void FUN_14308c120(longlong *param_1,char param_2)

{
  char cVar1;
  
  if ((int)(uint)*(byte *)(param_1 + 0xd2) < (int)param_1[0xd4]) {
    *(char *)(param_1[0xd3] + 5 + (ulonglong)*(byte *)(param_1 + 0xd2) * 0x48) = param_2;
    if (param_2 != '\0') {
      if ((char)param_1[0x25] == '\x03') {
LAB_14308c16e:
                    /* WARNING: Could not recover jumptable at 0x00014308c183. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x8a0))(param_1,(char)param_1[0xd2],1);
        return;
      }
      if ((longlong *)param_1[0x2a] != (longlong *)0x0) {
        cVar1 = (**(code **)(*(longlong *)param_1[0x2a] + 0x778))();
        if (cVar1 != '\0') goto LAB_14308c16e;
      }
    }
  }
  return;
}



// FUNCTION 14308c190 FUN_14308c190 body=552 status=ok
// SIG undefined FUN_14308c190(void)

void FUN_14308c190(longlong *param_1,char param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  undefined4 *puVar5;
  int iVar6;
  bool bVar7;
  undefined8 local_res8;
  undefined1 local_res10;
  undefined2 local_res11;
  undefined1 local_res13;
  longlong local_78;
  int local_70;
  int local_6c;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  int local_50;
  int local_4c;
  longlong local_48 [2];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28 [16];
  
  bVar2 = *(byte *)(param_1 + 0x12);
  *(byte *)(param_1 + 0x12) = bVar2 & 0xef | param_2 << 4;
  if (((param_2 << 4 & 0x10U) != 0) && ((bVar2 & 1) != 0)) {
    local_res11 = 0xffff;
    local_res10 = 0;
    local_res13 = 0xff;
    puVar5 = (undefined4 *)FLinearColor::FLinearColor(local_28,&local_res10);
    local_38 = *puVar5;
    uStack_34 = puVar5[1];
    uStack_30 = puVar5[2];
    uStack_2c = puVar5[3];
    local_res8 = *(undefined8 *)(param_1[2] + 0x18);
    FName::ToString(&local_res8,local_48);
    FString::PrintfImpl(&local_68,L"WARNING (%s): ");
    iVar6 = (int)local_60;
    iVar3 = local_60._4_4_;
    bVar7 = (int)local_60 != 0;
    local_78 = local_68;
    local_70 = (int)local_60;
    local_68 = 0;
    local_6c = local_60._4_4_;
    local_60 = 0;
    if (iVar3 < (int)((0x61 - (uint)bVar7) + iVar6)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_78);
      iVar6 = local_70;
    }
    local_70 = (0x61 - (uint)(iVar6 != 0)) + iVar6;
    if (local_6c < local_70) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,iVar6);
    }
    puVar1 = (undefined8 *)(local_78 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)) * 2);
    *puVar1 = 0x52007400650053;
    puVar1[1] = 0x69006c00700065;
    puVar1[2] = 0x65007400610063;
    puVar1[3] = 0x650076006f004d;
    puVar1[4] = 0x74006e0065006d;
    puVar1[5] = 0x20007300690020;
    puVar1[6] = 0x6e006900650062;
    puVar1[7] = 0x61006300200067;
    puVar1[8] = 0x640065006c006c;
    puVar1[9] = 0x20006e006f0020;
    puVar1[10] = 0x72007000200061;
    puVar1[0xb] = 0x630065006a006f;
    puVar1[0xc] = 0x65006c00690074;
    puVar1[0xd] = 0x54002000200021;
    puVar1[0xe] = 0x20007300690068;
    puVar1[0xf] = 0x7400730075006d;
    puVar1[0x10] = 0x20006500620020;
    puVar1[0x11] = 0x20007400650073;
    puVar1[0x12] = 0x740020006e006f;
    puVar1[0x13] = 0x70002000650068;
    *(undefined4 *)(puVar1 + 0x14) = 0x6f0072;
    *(undefined4 *)((longlong)puVar1 + 0xa4) = 0x65006a;
    *(undefined4 *)(puVar1 + 0x15) = 0x740063;
    *(undefined4 *)((longlong)puVar1 + 0xac) = 0x6c0069;
    *(undefined4 *)(puVar1 + 0x16) = 0x200065;
    *(undefined4 *)((longlong)puVar1 + 0xb4) = 0x6c0063;
    *(undefined4 *)(puVar1 + 0x17) = 0x730061;
    *(undefined4 *)((longlong)puVar1 + 0xbc) = 0x2e0073;
    *(undefined2 *)(puVar1 + 0x18) = 0;
    local_50 = local_70;
    local_58 = local_78;
    local_4c = local_6c;
    lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
    AK::MemoryMgr::StartProfileThreadUsage(lVar4);
    if (local_58 != 0) {
      FMemory::Free();
    }
    if (local_68 != 0) {
      FMemory::Free();
    }
    if (local_48[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 14308c3c0 FUN_14308c3c0 body=175 status=ok
// SIG undefined FUN_14308c3c0(void)

void FUN_14308c3c0(longlong param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x710);
  uVar2 = (longlong)*(int *)(param_1 + 0x718) & 0x1fffffffffffffff;
  if (puVar1 + *(int *)(param_1 + 0x718) < puVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      (**(code **)(*(longlong *)*puVar1 + 0x2b8))((longlong *)*puVar1,param_2);
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar3 != uVar2);
  }
  if ((*(longlong *)(param_1 + 0x4a0) != 0) && (*(longlong *)(param_1 + 0x4a8) != 0)) {
    (**(code **)(**(longlong **)(param_1 + 0x4a8) + 0xe0))(*(longlong **)(param_1 + 0x4a8),param_2);
  }
  return;
}



// FUNCTION 14308c470 FUN_14308c470 body=242 status=ok
// SIG undefined FUN_14308c470(void)

void FUN_14308c470(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  uint7 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) & 0xffffffef;
  *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) | ((uint)param_2 & 0xff) << 4;
  FUN_143087690();
  if ((((byte)*(undefined4 *)(param_1 + 0x58) & 0x28) == 0x28) &&
     ((((*(uint *)(param_1 + 8) >> 4 & 1) != 0 || (*(longlong *)(param_1 + 0x20) == 0)) ||
      ((*(byte *)(*(longlong *)(param_1 + 0x20) + 0x7e8) & 0x40) == 0)))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  lVar4 = *(longlong *)(param_1 + 0x60);
  lVar5 = (longlong)*(int *)(param_1 + 0x68) * 0x60 + lVar4;
  for (; lVar4 != lVar5; lVar4 = lVar4 + 0x60) {
    lVar1 = *(longlong *)(lVar4 + 0x58);
    if (lVar1 != 0) {
      if ((*(uint *)(lVar4 + 8) >> 3 & 1) == 0) {
        lVar6 = *(longlong *)(lVar4 + 0x20);
        if ((lVar6 != 0) && (param_2 = *(longlong *)(lVar1 + 400), param_2 != 0)) {
          if ((*(byte *)(param_1 + 0x58) & 0x10) == 0) {
            lVar6 = *(longlong *)(lVar4 + 0x18);
          }
          FUN_142382f60(lVar1,param_2,&DAT_146af29ec,lVar6);
        }
      }
      else {
        uVar3 = (uint7)((ulonglong)param_2 >> 8);
        if (((*(byte *)(param_1 + 0x58) & 0x10) != 0) || (bVar2)) {
          param_2 = CONCAT71(uVar3,1);
          FUN_142397540(lVar1,param_2,1);
        }
        else {
          param_2 = (ulonglong)uVar3 << 8;
          FUN_142397540(lVar1,param_2,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 14308c570 SetGender body=7 status=ok
// SIG undefined SetGender(void)

void UPlayerInfoComponent::SetGender(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x198) = param_2;
  return;
}



// FUNCTION 14308c580 FUN_14308c580 body=69 status=ok
// SIG undefined FUN_14308c580(void)

void FUN_14308c580(longlong *param_1,char param_2)

{
  if (param_2 != *(char *)((longlong)param_1 + 0x4d4)) {
    *(char *)((longlong)param_1 + 0x4d4) = param_2;
    (**(code **)(*param_1 + 0x260))();
    if ((*(byte *)((longlong)param_1 + 0x94) & 0x18) == 0x10) {
                    /* WARNING: Could not recover jumptable at 0x00014308c5b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x708))(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 14308c5d0 FUN_14308c5d0 body=49 status=ok
// SIG undefined FUN_14308c5d0(void)

void FUN_14308c5d0(longlong param_1,char param_2)

{
  longlong local_18;
  char local_10;
  
  if (param_2 != *(char *)(param_1 + 0x6d8)) {
    *(char *)(param_1 + 0x6d8) = param_2;
    local_18 = param_1;
    local_10 = param_2;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x560,&local_18);
  }
  return;
}



// FUNCTION 14308c610 FUN_14308c610 body=129 status=ok
// SIG undefined FUN_14308c610(void)

void FUN_14308c610(longlong param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x700);
  uVar2 = (longlong)*(int *)(param_1 + 0x708) & 0x1fffffffffffffff;
  if (puVar1 + *(int *)(param_1 + 0x708) < puVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      (**(code **)(*(longlong *)*puVar1 + 0x2a8))((longlong *)*puVar1,param_2);
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar3 != uVar2);
  }
  return;
}



// FUNCTION 14308c6f0 FUN_14308c6f0 body=113 status=ok
// SIG undefined FUN_14308c6f0(void)

void FUN_14308c6f0(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  lVar2 = *(longlong *)(param_1 + 0x698);
  lVar1 = lVar2 + (longlong)*(int *)(param_1 + 0x6a0) * 0x48;
  for (; lVar2 != lVar1; lVar2 = lVar2 + 0x48) {
    local_18 = *param_2;
    local_14 = param_2[1];
    local_10 = *(undefined8 *)(param_2 + 2);
    (**(code **)(**(longlong **)(lVar2 + 8) + 0x4c0))(*(longlong **)(lVar2 + 8),&local_18);
  }
  return;
}



// FUNCTION 14308c830 FUN_14308c830 body=843 status=ok
// SIG undefined FUN_14308c830(void)

void FUN_14308c830(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  ulonglong uVar13;
  int iVar14;
  longlong *plVar15;
  longlong *plVar16;
  bool bVar17;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if (param_3 == 0) {
    return;
  }
  FUN_1423979a0(param_2,*(byte *)(param_3 + 0x2f0) >> 5 & 1);
  FUN_142397970(param_2,*(byte *)(param_3 + 0x2f0) >> 6 & 1);
  FUN_142398e60(param_2,*(undefined4 *)(param_3 + 0x6b8),0);
  FUN_1423970c0(param_2,*(byte *)(param_3 + 0x2f1) >> 4 & 1);
  FUN_1423974c0(param_2,*(byte *)(param_3 + 0x398) & 1);
  lVar3 = FUN_142a07000();
  if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar17 = false;
  }
  else {
    bVar17 = true;
  }
  plVar4 = (longlong *)0x0;
  plVar16 = param_2;
  if (!bVar17) {
    plVar16 = plVar4;
  }
  if ((*(char *)(param_1 + 0x28) != '\0') && (plVar16 != (longlong *)0x0)) {
    plVar6 = plVar16 + 0x134;
    lVar3 = *(longlong *)(param_1 + 0x18);
    if (0 < (int)plVar16[0x13f]) {
      plVar1 = plVar16 + 0x136;
      lVar8 = (longlong)(int)plVar16[0x13f];
      iVar11 = 0;
      if ((int)plVar16[0x13f] != 0) {
        plVar12 = (longlong *)plVar16[0x13e];
        if ((longlong *)plVar16[0x13e] == (longlong *)0x0) {
          plVar12 = plVar1;
        }
        bVar17 = plVar12[1] != lVar3;
        plVar12 = plVar4;
        plVar15 = plVar4;
        do {
          iVar11 = (int)plVar4;
          plVar12 = (longlong *)((longlong)plVar12 + 1);
          plVar4 = (longlong *)(ulonglong)(iVar11 + 1);
          if ((longlong)plVar12 < lVar8) {
            plVar9 = (longlong *)plVar16[0x13e];
            if ((longlong *)plVar16[0x13e] == (longlong *)0x0) {
              plVar9 = plVar1;
            }
            lVar7 = (longlong)plVar12 * 0x10;
            do {
              if (bVar17 != (*(longlong *)(lVar7 + 8 + (longlong)plVar9) != lVar3)) break;
              plVar4 = (longlong *)(ulonglong)((int)plVar4 + 1);
              plVar12 = (longlong *)((longlong)plVar12 + 1);
              lVar7 = lVar7 + 0x10;
            } while ((longlong)plVar12 < lVar8);
          }
          iVar10 = (int)plVar4 - iVar11;
          if (bVar17 != false) {
            iVar14 = (int)plVar15;
            if (iVar14 != iVar11) {
              uVar13 = (ulonglong)(plVar16[0x13e] != 0) - 1 & (ulonglong)plVar1 | plVar16[0x13e];
              _guard_xfg_dispatch_icall_nop
                        ((void *)((longlong)iVar14 * 0x10 + uVar13),
                         (void *)((longlong)iVar11 * 0x10 + uVar13),(longlong)iVar10 << 4);
            }
            plVar15 = (longlong *)(ulonglong)(uint)(iVar14 + iVar10);
          }
          bVar17 = (bool)(bVar17 ^ 1);
          iVar11 = (int)plVar15;
        } while ((longlong)plVar12 < lVar8);
        *(int *)(plVar16 + 0x13f) = iVar11;
      }
      if ((undefined1 *)plVar16[0x135] != (undefined1 *)0x0) {
        if ((int)plVar16[0x13f] != 0) {
          plVar6 = (longlong *)plVar16[0x13e];
          if ((longlong *)plVar16[0x13e] == (longlong *)0x0) {
            plVar6 = plVar1;
          }
          plVar6 = plVar6 + (longlong)iVar11 * 2 + -2;
        }
        *(undefined1 *)plVar16[0x135] = (char)*plVar6;
      }
    }
  }
  if (((longlong *)param_2[0x23] != (longlong *)0x0) &&
     (plVar4 = (longlong *)(**(code **)(*(longlong *)param_2[0x23] + 0x688))(),
     plVar4 != (longlong *)0x0)) {
    uVar5 = FUN_1430a8880();
    plVar6 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(plVar4,uVar5);
    cVar2 = (**(code **)(*plVar4 + 0x780))(plVar4);
    if ((cVar2 == '\0') &&
       ((plVar6 == (longlong *)0x0 || (cVar2 = (**(code **)(*plVar6 + 0xd0))(plVar6), cVar2 == '\0')
        ))) {
      uVar5 = 0;
      goto LAB_14308cafe;
    }
  }
  uVar5 = 1;
LAB_14308cafe:
  (**(code **)(*param_2 + 0x358))(param_2,uVar5);
  lVar3 = FUN_142a07000();
  if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
      != lVar3 + 0x88)) {
    bVar17 = false;
  }
  else {
    bVar17 = true;
  }
  if (!bVar17) {
    param_3 = 0;
  }
  if ((plVar16 != (longlong *)0x0) && (param_3 != 0)) {
    *(byte *)((longlong)plVar16 + 0xb1c) =
         *(byte *)((longlong)plVar16 + 0xb1c) ^
         (*(byte *)(param_3 + 0xb1c) ^ *(byte *)((longlong)plVar16 + 0xb1c)) & 4;
  }
  return;
}



// FUNCTION 14308cb80 FUN_14308cb80 body=399 status=ok
// SIG undefined FUN_14308cb80(void)

void FUN_14308cb80(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  
  if ((param_2 != (longlong *)0x0) &&
     ((**(code **)(*param_2 + 0x358))(param_2,0), *(char *)(param_1 + 0x28) != '\0')) {
    lVar4 = FUN_142a07000();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      lVar4 = *(longlong *)(param_1 + 0x18);
      plVar1 = param_2 + 0x136;
      plVar5 = (longlong *)param_2[0x13e];
      if ((longlong *)param_2[0x13e] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      plVar9 = param_2 + 0x134;
      plVar7 = plVar5 + (longlong)(int)param_2[0x13f] * 2;
      for (; (plVar6 = (longlong *)0x0, plVar5 != plVar7 && (plVar6 = plVar5, plVar5[1] != lVar4));
          plVar5 = plVar5 + 2) {
      }
      if (((int)param_2[0x13f] == 0) && ((undefined1 *)param_2[0x135] != (undefined1 *)0x0)) {
        *(undefined1 *)plVar9 = *(undefined1 *)param_2[0x135];
      }
      if (plVar6 == (longlong *)0x0) {
        iVar2 = (int)param_2[0x13f];
        lVar8 = (longlong)iVar2;
        *(int *)(param_2 + 0x13f) = iVar2 + 1;
        if (*(int *)((longlong)param_2 + 0x9fc) < iVar2 + 1) {
          TArray<FGuid,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(plVar1,iVar2);
        }
        plVar5 = (longlong *)param_2[0x13e];
        if ((longlong *)param_2[0x13e] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        plVar5[lVar8 * 2] = 0;
        plVar5[lVar8 * 2 + 1] = 0;
        plVar6 = (longlong *)param_2[0x13e];
        if ((longlong *)param_2[0x13e] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        plVar6 = plVar6 + lVar8 * 2;
        plVar6[1] = lVar4;
      }
      *(undefined1 *)plVar6 = 0xfe;
      if ((undefined1 *)param_2[0x135] != (undefined1 *)0x0) {
        if ((int)param_2[0x13f] != 0) {
          plVar9 = (longlong *)param_2[0x13e];
          if ((longlong *)param_2[0x13e] == (longlong *)0x0) {
            plVar9 = plVar1;
          }
          plVar9 = plVar9 + (longlong)(int)param_2[0x13f] * 2 + -2;
        }
        *(undefined1 *)param_2[0x135] = (char)*plVar9;
      }
    }
  }
  return;
}



// FUNCTION 14308cd10 FUN_14308cd10 body=614 status=ok
// SIG undefined FUN_14308cd10(void)

void FUN_14308cd10(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined4 local_res18;
  byte local_res20;
  int local_a8 [2];
  ulonglong local_a0;
  longlong local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 *local_68;
  longlong local_60;
  int *local_58;
  
  iVar11 = 0;
  *(undefined1 *)(param_1 + 0x158) = 1;
  *(undefined4 *)(param_1 + 8) = 2;
  iVar4 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if ((param_2 != 0) && (iVar4 = 0, 0 < *(int *)(param_2 + 0x28))) {
    uStack_80 = local_res8;
    local_88 = &LAB_14043a650;
    local_98 = 0;
    iVar12 = iVar11;
    do {
      local_68 = &local_78;
      local_58 = local_a8;
      lVar5 = *(longlong *)(local_res10 + 0x20);
      if (*(longlong *)(local_res10 + 0x20) == 0) {
        lVar5 = local_res10;
      }
      local_res8[0] = 0;
      local_78 = (undefined4)local_88;
      uStack_74 = local_88._4_4_;
      uStack_70 = (undefined4)uStack_80;
      uStack_6c = uStack_80._4_4_;
      local_a8[0] = 0;
      lVar5 = *(longlong *)(lVar5 + local_98);
      LOCK();
      uVar6 = *(ulonglong *)(lVar5 + 8);
      if (uVar6 == 0) {
        *(ulonglong *)(lVar5 + 8) = 0;
        uVar6 = 0;
      }
      UNLOCK();
      uVar9 = uVar6 >> 0x1a;
      local_a0 = (ulonglong)((uint)uVar9 & 1);
      local_60 = param_1;
      uVar3 = FUN_14043a6c0(&local_68);
      while (uVar3 != 0) {
        uVar8 = (ulonglong)uVar3;
        uVar10 = (uVar6 & 0xfffffffffc000000) + 0x8000000;
        if (uVar10 >> 0x1a < uVar9) {
          LockFreeTagCounterHasOverflowed();
        }
        if (uVar3 == 0) {
          uVar9 = 0;
          uVar8 = uVar9;
        }
        else {
          uVar9 = (&DAT_1468a81f8)[uVar3 >> 0xe] + (ulonglong)(uVar3 & 0x3fff) * 0x18;
        }
        *(uint *)(uVar9 + 0x10) = (uint)uVar6 & 0x3ffffff;
        LOCK();
        bVar13 = uVar6 == *(ulonglong *)(lVar5 + 8);
        if (bVar13) {
          *(ulonglong *)(lVar5 + 8) = uVar10 | uVar8;
        }
        UNLOCK();
        if (bVar13) {
          bVar13 = true;
          goto LAB_14308cec7;
        }
        LOCK();
        uVar6 = *(ulonglong *)(lVar5 + 8);
        if (uVar6 == 0) {
          *(ulonglong *)(lVar5 + 8) = 0;
          uVar6 = 0;
        }
        UNLOCK();
        uVar9 = uVar6 >> 0x1a;
        local_a0 = (ulonglong)((uint)uVar9 & 1);
        uVar3 = FUN_14043a6c0(&local_68);
      }
      if (local_a8[0] != 0) {
        FLockFreeLinkPolicy::FreeLockFreeLink();
      }
      bVar13 = false;
LAB_14308cec7:
      iVar4 = iVar12 + 1;
      if (bVar13) {
        iVar4 = iVar12;
      }
      local_98 = local_98 + 8;
      iVar11 = iVar11 + 1;
      iVar12 = iVar4;
    } while (iVar11 < *(int *)(local_res10 + 0x28));
  }
  uVar2 = local_res18;
  LOCK();
  piVar1 = (int *)(param_1 + 0xc);
  iVar11 = *piVar1;
  *piVar1 = *piVar1 - ((uint)local_res20 + iVar4);
  UNLOCK();
  if (iVar11 == (uint)local_res20 + iVar4) {
    puVar7 = (undefined8 *)FTaskGraphInterface::Get();
    (**(code **)*puVar7)(puVar7,param_1,*(undefined4 *)(param_1 + 8),uVar2);
  }
  return;
}



// FUNCTION 14308cf80 FUN_14308cf80 body=707 status=ok
// SIG undefined FUN_14308cf80(void)

void FUN_14308cf80(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined4 local_res18;
  byte local_res20;
  int local_a8 [2];
  ulonglong local_a0;
  longlong local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 *local_68;
  longlong local_60;
  int *local_58;
  
  *(undefined1 *)(param_1 + 0xd8) = 1;
  iVar4 = DAT_1464a820c;
  if (((DAT_146b47a88 != 0x800) && (iVar4 = DAT_1464a8208, DAT_146b47a88 != 0x1000)) ||
     (uVar3 = DAT_146b47a90, iVar4 != 0)) {
    uVar3 = DAT_146b47a8c | DAT_146b47a88;
  }
  iVar11 = 0;
  *(uint *)(param_1 + 8) = uVar3 | 0xff;
  iVar4 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if ((param_2 != 0) && (iVar4 = 0, 0 < *(int *)(param_2 + 0x28))) {
    uStack_80 = local_res8;
    local_88 = &LAB_14043a650;
    local_98 = 0;
    iVar12 = iVar11;
    do {
      local_68 = &local_78;
      local_58 = local_a8;
      lVar5 = *(longlong *)(local_res10 + 0x20);
      if (*(longlong *)(local_res10 + 0x20) == 0) {
        lVar5 = local_res10;
      }
      local_res8[0] = 0;
      local_78 = (undefined4)local_88;
      uStack_74 = local_88._4_4_;
      uStack_70 = (undefined4)uStack_80;
      uStack_6c = uStack_80._4_4_;
      local_a8[0] = 0;
      lVar5 = *(longlong *)(lVar5 + local_98);
      LOCK();
      uVar6 = *(ulonglong *)(lVar5 + 8);
      if (uVar6 == 0) {
        *(ulonglong *)(lVar5 + 8) = 0;
        uVar6 = 0;
      }
      UNLOCK();
      uVar9 = uVar6 >> 0x1a;
      local_a0 = (ulonglong)((uint)uVar9 & 1);
      local_60 = param_1;
      uVar3 = FUN_14043a6c0(&local_68);
      while (uVar3 != 0) {
        uVar8 = (ulonglong)uVar3;
        uVar10 = (uVar6 & 0xfffffffffc000000) + 0x8000000;
        if (uVar10 >> 0x1a < uVar9) {
          LockFreeTagCounterHasOverflowed();
        }
        if (uVar3 == 0) {
          uVar9 = 0;
          uVar8 = uVar9;
        }
        else {
          uVar9 = (&DAT_1468a81f8)[uVar3 >> 0xe] + (ulonglong)(uVar3 & 0x3fff) * 0x18;
        }
        *(uint *)(uVar9 + 0x10) = (uint)uVar6 & 0x3ffffff;
        LOCK();
        bVar13 = uVar6 == *(ulonglong *)(lVar5 + 8);
        if (bVar13) {
          *(ulonglong *)(lVar5 + 8) = uVar10 | uVar8;
        }
        UNLOCK();
        if (bVar13) {
          bVar13 = true;
          goto LAB_14308d197;
        }
        LOCK();
        uVar6 = *(ulonglong *)(lVar5 + 8);
        if (uVar6 == 0) {
          *(ulonglong *)(lVar5 + 8) = 0;
          uVar6 = 0;
        }
        UNLOCK();
        uVar9 = uVar6 >> 0x1a;
        local_a0 = (ulonglong)((uint)uVar9 & 1);
        uVar3 = FUN_14043a6c0(&local_68);
      }
      if (local_a8[0] != 0) {
        FLockFreeLinkPolicy::FreeLockFreeLink();
      }
      bVar13 = false;
LAB_14308d197:
      iVar4 = iVar12 + 1;
      if (bVar13) {
        iVar4 = iVar12;
      }
      local_98 = local_98 + 8;
      iVar11 = iVar11 + 1;
      iVar12 = iVar4;
    } while (iVar11 < *(int *)(local_res10 + 0x28));
  }
  uVar2 = local_res18;
  LOCK();
  piVar1 = (int *)(param_1 + 0xc);
  iVar11 = *piVar1;
  *piVar1 = *piVar1 - ((uint)local_res20 + iVar4);
  UNLOCK();
  if (iVar11 == (uint)local_res20 + iVar4) {
    puVar7 = (undefined8 *)FTaskGraphInterface::Get();
    (**(code **)*puVar7)(puVar7,param_1,*(undefined4 *)(param_1 + 8),uVar2);
  }
  return;
}



// FUNCTION 14308d250 FUN_14308d250 body=614 status=ok
// SIG undefined FUN_14308d250(void)

void FUN_14308d250(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined4 local_res18;
  byte local_res20;
  int local_a8 [2];
  ulonglong local_a0;
  longlong local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 *local_68;
  longlong local_60;
  int *local_58;
  
  iVar11 = 0;
  *(undefined1 *)(param_1 + 0x250) = 1;
  *(undefined4 *)(param_1 + 8) = 2;
  iVar4 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if ((param_2 != 0) && (iVar4 = 0, 0 < *(int *)(param_2 + 0x28))) {
    uStack_80 = local_res8;
    local_88 = &LAB_14043a650;
    local_98 = 0;
    iVar12 = iVar11;
    do {
      local_68 = &local_78;
      local_58 = local_a8;
      lVar5 = *(longlong *)(local_res10 + 0x20);
      if (*(longlong *)(local_res10 + 0x20) == 0) {
        lVar5 = local_res10;
      }
      local_res8[0] = 0;
      local_78 = (undefined4)local_88;
      uStack_74 = local_88._4_4_;
      uStack_70 = (undefined4)uStack_80;
      uStack_6c = uStack_80._4_4_;
      local_a8[0] = 0;
      lVar5 = *(longlong *)(lVar5 + local_98);
      LOCK();
      uVar6 = *(ulonglong *)(lVar5 + 8);
      if (uVar6 == 0) {
        *(ulonglong *)(lVar5 + 8) = 0;
        uVar6 = 0;
      }
      UNLOCK();
      uVar9 = uVar6 >> 0x1a;
      local_a0 = (ulonglong)((uint)uVar9 & 1);
      local_60 = param_1;
      uVar3 = FUN_14043a6c0(&local_68);
      while (uVar3 != 0) {
        uVar8 = (ulonglong)uVar3;
        uVar10 = (uVar6 & 0xfffffffffc000000) + 0x8000000;
        if (uVar10 >> 0x1a < uVar9) {
          LockFreeTagCounterHasOverflowed();
        }
        if (uVar3 == 0) {
          uVar9 = 0;
          uVar8 = uVar9;
        }
        else {
          uVar9 = (&DAT_1468a81f8)[uVar3 >> 0xe] + (ulonglong)(uVar3 & 0x3fff) * 0x18;
        }
        *(uint *)(uVar9 + 0x10) = (uint)uVar6 & 0x3ffffff;
        LOCK();
        bVar13 = uVar6 == *(ulonglong *)(lVar5 + 8);
        if (bVar13) {
          *(ulonglong *)(lVar5 + 8) = uVar10 | uVar8;
        }
        UNLOCK();
        if (bVar13) {
          bVar13 = true;
          goto LAB_14308d407;
        }
        LOCK();
        uVar6 = *(ulonglong *)(lVar5 + 8);
        if (uVar6 == 0) {
          *(ulonglong *)(lVar5 + 8) = 0;
          uVar6 = 0;
        }
        UNLOCK();
        uVar9 = uVar6 >> 0x1a;
        local_a0 = (ulonglong)((uint)uVar9 & 1);
        uVar3 = FUN_14043a6c0(&local_68);
      }
      if (local_a8[0] != 0) {
        FLockFreeLinkPolicy::FreeLockFreeLink();
      }
      bVar13 = false;
LAB_14308d407:
      iVar4 = iVar12 + 1;
      if (bVar13) {
        iVar4 = iVar12;
      }
      local_98 = local_98 + 8;
      iVar11 = iVar11 + 1;
      iVar12 = iVar4;
    } while (iVar11 < *(int *)(local_res10 + 0x28));
  }
  uVar2 = local_res18;
  LOCK();
  piVar1 = (int *)(param_1 + 0xc);
  iVar11 = *piVar1;
  *piVar1 = *piVar1 - ((uint)local_res20 + iVar4);
  UNLOCK();
  if (iVar11 == (uint)local_res20 + iVar4) {
    puVar7 = (undefined8 *)FTaskGraphInterface::Get();
    (**(code **)*puVar7)(puVar7,param_1,*(undefined4 *)(param_1 + 8),uVar2);
  }
  return;
}



// FUNCTION 14308d4c0 FUN_14308d4c0 body=144 status=ok
// SIG undefined FUN_14308d4c0(void)

undefined8 FUN_14308d4c0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  
  if ((*(byte *)(param_1 + 0x679) & 2) != 0) {
    return 1;
  }
  if (((((int)(uint)*(byte *)(param_1 + 0x690) < *(int *)(param_1 + 0x6a0)) &&
       (plVar1 = *(longlong **)
                  (*(longlong *)(param_1 + 0x698) + 8 + (ulonglong)*(byte *)(param_1 + 0x690) * 0x48
                  ), plVar1 != (longlong *)0x0)) && ((*(byte *)((longlong)plVar1 + 0x181) & 1) != 0)
      ) && (cVar2 = (**(code **)(*plVar1 + 0x470))(), cVar2 == '\0')) {
    if (*(int *)(param_1 + 0x6a0) < 1) {
      return 1;
    }
    if (*(longlong *)
         (*(longlong *)(param_1 + 0x698) + 8 + (ulonglong)*(byte *)(param_1 + 0x690) * 0x48) == 0) {
      return 1;
    }
    if (*(longlong *)
         (*(longlong *)(param_1 + 0x698) + 0x18 + (ulonglong)*(byte *)(param_1 + 0x690) * 0x48) == 0
       ) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14308d570 FUN_14308d570 body=60 status=ok
// SIG undefined FUN_14308d570(void)

bool FUN_14308d570(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*param_2 != 0) {
    lVar2 = FUN_1428dfc70();
    lVar3 = *param_2;
    for (lVar1 = lVar3; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar2) goto LAB_14308d5a0;
    }
  }
  lVar3 = 0;
LAB_14308d5a0:
  return lVar3 != 0;
}



// FUNCTION 14308d5b0 FUN_14308d5b0 body=214 status=ok
// SIG undefined FUN_14308d5b0(void)

bool FUN_14308d5b0(longlong param_1)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  
  if (((*(char *)(param_1 + 0x7b8) == '\0') || (*(longlong *)(param_1 + 0x7f8) == DAT_146b479a8)) ||
     (*(longlong *)(param_1 + 0x7f8) == DAT_146b479b0)) {
    bVar3 = false;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x690);
    bVar3 = true;
    if ((((((int)(uint)bVar1 < *(int *)(param_1 + 0x6a0)) &&
          (*(longlong *)(*(longlong *)(param_1 + 0x698) + 8 + (ulonglong)bVar1 * 0x48) != 0)) &&
         ((*(longlong *)(*(longlong *)(param_1 + 0x698) + 0x20 + (ulonglong)bVar1 * 0x48) != 0 &&
          ((cVar2 = FUN_14309f7c0(), cVar2 != '\0' &&
           (bVar1 = *(byte *)(param_1 + 0x690), (int)(uint)bVar1 < *(int *)(param_1 + 0x6a0)))))))
        && (*(longlong *)(*(longlong *)(param_1 + 0x698) + 8 + (ulonglong)bVar1 * 0x48) != 0)) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x698) + 0x20 + (ulonglong)bVar1 * 0x48) != 0)) {
      cVar2 = FUN_140e92120();
      return cVar2 != '\0';
    }
  }
  return bVar3;
}



// FUNCTION 14308d690 FUN_14308d690 body=621 status=ok
// SIG undefined FUN_14308d690(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14308d690(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 uVar6;
  longlong *plVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_e8 [32];
  float local_c8;
  uint local_c0;
  undefined1 local_b8;
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
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  if (*(char *)((longlong)param_1 + 0x639) == '\x01') {
    (**(code **)(*param_1 + 0x9c8))();
  }
  else {
    uVar6 = 4;
    if (*(char *)((longlong)param_1 + 0x639) != '\0') {
      uVar6 = 0;
    }
    fVar9 = *(float *)(param_1 + 0xcd);
    if ((param_1[0x94] != 0) && (param_1[0x95] != 0)) {
      fVar8 = (float)(**(code **)(*(longlong *)param_1[0x95] + 0x188))();
      fVar9 = fVar9 * fVar8;
    }
    local_b8 = 0;
    local_c0 = local_c0 & 0xffffff00;
    local_c8 = fVar9;
    (**(code **)(*param_1 + 0x990))(param_1,&local_a8,uVar6,0x3f800000);
    plVar4 = (longlong *)CONCAT44(uStack_9c,uStack_a0);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar4 + 1;
      lVar5 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
    uStack_a0 = 0;
    local_a8 = &LAB_140e15310;
    uVar3 = AActor::GetWorldTimerManager(param_1);
    plVar4 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar4 + 1,param_1);
      *(undefined4 *)(plVar4 + 2) = (undefined4)local_a8;
      *(undefined4 *)((longlong)plVar4 + 0x14) = local_a8._4_4_;
      *(undefined4 *)(plVar4 + 3) = uStack_a0;
      *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_9c;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar4[5] = lVar5;
      *plVar4 = (longlong)&PTR_FUN_143f77bd0;
    }
    local_98 = 0;
    local_90 = 0;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x30))(plVar4,&local_98);
    }
    FWeakObjectPtr::operator=(local_88,0);
    local_c0 = 0xbf800000;
    local_c8 = (float)((uint)local_c8 & 0xffffff00);
    local_80 = 0;
    local_48 = (longlong *)0x0;
    local_38 = 0;
    local_78 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar3,param_1 + 0xce,&local_98,fVar9);
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
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_98);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x28))(plVar4,0);
      lVar5 = FMemory::Realloc(plVar4,0,0);
      if (lVar5 != 0) {
        FMemory::Free(lVar5);
      }
    }
  }
  return;
}



// FUNCTION 14308d900 FUN_14308d900 body=412 status=ok
// SIG undefined FUN_14308d900(void)

void FUN_14308d900(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  char cVar2;
  
  if (*(char *)((longlong)param_1 + 0x661) != '\0') {
    FUN_14308e890();
    goto LAB_14308da44;
  }
  cVar2 = (**(code **)(*param_1 + 0x890))();
  if (cVar2 == '\0') {
    FUN_143095df0(param_1);
    goto LAB_14308da44;
  }
  if (*(char *)((longlong)param_1 + 0x6f2) == '\0') {
    if ((char)param_1[0xdc] == '\0') {
      cVar2 = (**(code **)(*param_1 + 0x888))(param_1);
      if (cVar2 != '\0') goto LAB_14308d963;
    }
    else {
LAB_14308d963:
      cVar2 = (**(code **)(*param_1 + 0x870))(param_1);
      if ((cVar2 != '\0') && (*param_2 != DAT_146b479c0)) {
        (**(code **)(*param_1 + 0x8a0))(param_1,(char)param_1[0xd2],(char)param_1[0xdc] != '\x01');
        goto LAB_14308da44;
      }
    }
    if (*(char *)((longlong)param_1 + 0x6f2) == '\0') {
      cVar2 = (**(code **)(*param_1 + 0x8f8))(param_1);
      if ((cVar2 != '\0') && (*param_2 != DAT_146b479c8)) {
        if ((((int)(uint)*(byte *)(param_1 + 0xd2) < (int)param_1[0xd4]) &&
            (*(longlong *)(param_1[0xd3] + 8 + (ulonglong)*(byte *)(param_1 + 0xd2) * 0x48) != 0))
           && ((longlong *)param_1[0x2a] != (longlong *)0x0)) {
          cVar2 = (**(code **)(*(longlong *)param_1[0x2a] + 0x778))();
          if (cVar2 != '\0') {
            (**(code **)(*param_1 + 0x8f0))
                      (param_1,*(undefined1 *)
                                (param_1[0xd3] + 4 + (ulonglong)*(byte *)(param_1 + 0xd2) * 0x48));
          }
        }
        goto LAB_14308da44;
      }
    }
  }
  FUN_143093ca0(param_1,*param_2 == DAT_146b479b8);
LAB_14308da44:
  if (*(char *)((longlong)param_1 + 0x6f1) != '\0') {
    cVar2 = (**(code **)(*param_1 + 0x8b0))(param_1);
    if (((cVar2 != '\0') &&
        (bVar1 = *(byte *)(param_1 + 0xd2), (int)(uint)bVar1 < (int)param_1[0xd4])) &&
       ((*(longlong *)(param_1[0xd3] + 8 + (ulonglong)bVar1 * 0x48) != 0 &&
        (*(longlong *)(param_1[0xd3] + 0x20 + (ulonglong)bVar1 * 0x48) != 0)))) {
      FUN_1430a5a20();
    }
  }
  return;
}



// FUNCTION 14308daa0 FUN_14308daa0 body=694 status=ok
// SIG undefined FUN_14308daa0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14308daa0(longlong *param_1)

{
  float fVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
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
  lVar2 = param_1[0x24];
  *(undefined1 *)((longlong)param_1 + 0x2e1) = 0;
  if (lVar2 == 0) {
    lVar2 = FUN_1423407b0();
  }
  fVar1 = *(float *)(lVar2 + 0x790);
  fVar6 = (float)(**(code **)(*param_1 + 0x438))(param_1);
  if ((char)param_1[0x57] == '\x01') {
    fVar7 = (float)FUN_1430774d0(param_1);
    *(float *)((longlong)param_1 + 0x2dc) = fVar1 - fVar7 * fVar6;
    (**(code **)(*param_1 + 0x4b0))(param_1,0);
  }
  else {
    *(float *)((longlong)param_1 + 0x2dc) = fVar1;
  }
  *(undefined1 *)(param_1 + 0x57) = 2;
  (**(code **)(*param_1 + 0x260))(param_1);
  *(float *)(param_1 + 0x5b) = fVar1;
  fVar6 = fVar6 - (fVar1 - *(float *)((longlong)param_1 + 0x2dc));
  if (fVar6 <= 0.0) {
    (**(code **)(*param_1 + 0x458))(param_1);
  }
  else {
    local_b8 = &LAB_143068c04;
    lVar2 = param_1[0x24];
    uStack_b0 = 0;
    if (lVar2 == 0) {
      lVar2 = FUN_1423407b0(param_1);
    }
    if (*(longlong *)(lVar2 + 400) == 0) {
      uVar4 = *(undefined8 *)(lVar2 + 0x3f8);
    }
    else {
      uVar4 = *(undefined8 *)(*(longlong *)(lVar2 + 400) + 0x90);
    }
    plVar3 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar3 + 1,param_1);
      *(undefined4 *)(plVar3 + 2) = (undefined4)local_b8;
      *(undefined4 *)((longlong)plVar3 + 0x14) = local_b8._4_4_;
      *(undefined4 *)(plVar3 + 3) = uStack_b0;
      *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_ac;
      lVar2 = FDelegateHandle::GenerateNewID();
      plVar3[5] = lVar2;
      *plVar3 = (longlong)&PTR_FUN_143f77bd0;
    }
    local_a8 = 0;
    local_a0 = 0;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_a8);
    }
    FWeakObjectPtr::operator=(local_98,0);
    local_c0 = 0xbf800000;
    local_c8 = 0;
    local_90 = 0;
    local_58 = (longlong *)0x0;
    local_48 = 0;
    local_88 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar4,param_1 + 0x5e,&local_a8,fVar6);
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
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3,0);
      lVar2 = FMemory::Realloc(plVar3,0,0);
      if (lVar2 != 0) {
        FMemory::Free(lVar2);
      }
    }
    FUN_143094a90(param_1);
    (**(code **)(*param_1 + 0x480))(param_1);
  }
  return;
}



// FUNCTION 14308dd60 FUN_14308dd60 body=1274 status=ok
// SIG undefined FUN_14308dd60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014308de97) */

void FUN_14308dd60(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  float fVar10;
  undefined1 auStack_1e8 [32];
  float local_1c8;
  uint local_1c0;
  undefined1 local_1b8;
  longlong *local_1a8;
  longlong *local_1a0;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined1 *local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  longlong *local_158;
  longlong *local_148;
  undefined8 local_138;
  undefined4 local_130;
  undefined1 local_128 [8];
  undefined8 local_120;
  code *local_118;
  longlong local_108 [4];
  longlong *local_e8;
  int local_d8;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [8];
  undefined8 local_b0;
  code *local_a8;
  longlong local_98 [4];
  longlong *local_78;
  int local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  FUN_14308a790(param_1,1);
  (**(code **)(*param_1 + 0x918))(param_1,1);
  (**(code **)(*param_1 + 0xa28))(param_1,1);
  if ((char)param_1[199] == '\x01') {
    (**(code **)(*param_1 + 0x9c0))(param_1);
  }
  else {
    fVar10 = (float)(**(code **)(*param_1 + 0x7e8))();
    lVar8 = *param_1;
    uVar4 = (**(code **)(lVar8 + 0x7f0))(param_1);
    local_1b8 = 0;
    local_1c0 = local_1c0 & 0xffffff00;
    local_1c8 = fVar10;
    (**(code **)(lVar8 + 0x990))(param_1,&local_1a8,uVar4,0x3f800000);
    if (fVar10 <= 0.0) {
      if (local_1a8 != (longlong *)0x0) {
        fVar10 = (float)(**(code **)(*local_1a8 + 0x58))(local_1a8);
      }
      if (fVar10 <= 0.01) {
        fVar10 = 0.01;
      }
    }
    plVar7 = local_1a8;
    if (local_1a8 == (longlong *)0x0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      lVar8 = local_1a8[1];
      lVar5 = FUN_142e219b0();
      for (; lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x30)) {
        if (lVar8 == lVar5) goto LAB_14308deb1;
      }
      plVar7 = (longlong *)0x0;
    }
LAB_14308deb1:
    if (plVar7 != (longlong *)0x0) {
      local_178 = FUN_1430a8390();
      cVar3 = FUN_142c72bf0(plVar7,2,local_178);
      if (cVar3 != '\0') {
        *(byte *)(param_1 + 0xcc) = *(byte *)(param_1 + 0xcc) | 1;
        local_188 = &LAB_143081000;
        uStack_180 = 0;
        local_168 = 0x43081000;
        uStack_164 = 1;
        uStack_160 = 0;
        uStack_15c = uStack_17c;
        TBaseMulticastDelegate<void>::AddUObject<UHelloNeighborGameInstance>
                  (local_1a8 + 0xb,&local_188,param_1,&local_168);
      }
    }
    if ((((0 < (int)param_1[0xe3]) && ((longlong *)param_1[0x2a] != (longlong *)0x0)) &&
        (cVar3 = (**(code **)(*(longlong *)param_1[0x2a] + 0x778))(), cVar3 != '\0')) &&
       (FUN_14308b8d0(param_1,0), param_1[0xcb] == 0)) {
      uStack_190 = 0;
      local_198 = &LAB_143080fe0;
      uVar6 = AActor::GetWorldTimerManager(param_1);
      plVar7 = (longlong *)FMemory::Realloc(0,0x30);
      local_158 = plVar7;
      if (plVar7 != (longlong *)0x0) {
        *plVar7 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar7 + 1,param_1);
        *(undefined4 *)(plVar7 + 2) = (undefined4)local_198;
        *(undefined4 *)((longlong)plVar7 + 0x14) = local_198._4_4_;
        *(undefined4 *)(plVar7 + 3) = uStack_190;
        *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_18c;
        lVar8 = FDelegateHandle::GenerateNewID();
        plVar7[5] = lVar8;
        *plVar7 = (longlong)&PTR_FUN_143f77bd0;
      }
      local_138 = 0;
      local_130 = 0;
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x30))(plVar7,&local_138);
      }
      FWeakObjectPtr::operator=(local_128,0);
      local_1c0 = 0xbf800000;
      local_118 = AK::MemoryMgr::StartProfileThreadUsage;
      local_120 = 0;
      local_e8 = (longlong *)0x0;
      local_d8 = 0;
      local_1c8 = (float)((uint)local_1c8 & 0xffffff00);
      FUN_142880850(uVar6,param_1 + 0xcb,&local_138,0x3a83126f);
      if (local_d8 != 0) {
        plVar9 = local_108;
        if (local_e8 != (longlong *)0x0) {
          plVar9 = local_e8;
        }
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 0x10))(plVar9,0);
        }
      }
      if (local_e8 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_138);
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x28))(plVar7,0);
        local_158 = (longlong *)FMemory::Realloc(plVar7,0,0);
        if (local_158 != (longlong *)0x0) {
          FMemory::Free(local_158);
        }
      }
    }
    uStack_190 = 0;
    local_198 = &LAB_140e15304;
    uVar6 = AActor::GetWorldTimerManager(param_1);
    plVar7 = (longlong *)FMemory::Realloc(0,0x30);
    local_148 = plVar7;
    if (plVar7 != (longlong *)0x0) {
      *plVar7 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar7 + 1,param_1);
      *(undefined4 *)(plVar7 + 2) = (undefined4)local_198;
      *(undefined4 *)((longlong)plVar7 + 0x14) = local_198._4_4_;
      *(undefined4 *)(plVar7 + 3) = uStack_190;
      *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_18c;
      lVar8 = FDelegateHandle::GenerateNewID();
      plVar7[5] = lVar8;
      *plVar7 = (longlong)&PTR_FUN_143f77bd0;
    }
    local_c8 = 0;
    local_c0 = 0;
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x30))(plVar7,&local_c8);
    }
    FWeakObjectPtr::operator=(local_b8,0);
    local_1c0 = 0xbf800000;
    local_b0 = 0;
    local_78 = (longlong *)0x0;
    local_68 = 0;
    local_a8 = AK::MemoryMgr::StartProfileThreadUsage;
    local_1c8 = (float)((uint)local_1c8 & 0xffffff00);
    FUN_142880850(uVar6,param_1 + 0xca,&local_c8,fVar10);
    if (local_68 != 0) {
      plVar9 = local_98;
      if (local_78 != (longlong *)0x0) {
        plVar9 = local_78;
      }
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x10))(plVar9,0);
      }
    }
    if (local_78 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_c8);
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x28))(plVar7,0);
      local_148 = (longlong *)FMemory::Realloc(plVar7,0,0);
      if (local_148 != (longlong *)0x0) {
        FMemory::Free(local_148);
      }
    }
    if (local_1a0 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_1a0 + 1;
      lVar8 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_1a0)(local_1a0);
        LOCK();
        piVar1 = (int *)((longlong)local_1a0 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_1a0 + 8))(local_1a0,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 14308e260 FUN_14308e260 body=162 status=ok
// SIG undefined FUN_14308e260(void)

void FUN_14308e260(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  longlong *plVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x630);
  if (lVar1 != 0) {
    uVar2 = FUN_1430a8880();
    plVar4 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar2);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x1c8))(plVar4,param_1);
    }
  }
  *(byte *)(param_1 + 0x679) = *(byte *)(param_1 + 0x679) & 0xfd;
  *(undefined1 *)(param_1 + 0x692) = 0;
  *(undefined8 *)(param_1 + 0x630) = 0;
  *(undefined1 *)(param_1 + 0x6e0) = 0;
  FUN_14223eb20(param_1,0x3f800000,0x3f800000);
  if (*(char *)(param_1 + 0x128) == '\x03') {
    cVar3 = FUN_1407c3030(param_1 + 0x800);
    if (cVar3 == '\0') {
      FUN_14223e980(param_1,2);
    }
  }
  return;
}



// FUNCTION 14308e310 FUN_14308e310 body=77 status=ok
// SIG undefined FUN_14308e310(void)

void FUN_14308e310(longlong *param_1,longlong *param_2)

{
  (**(code **)(*param_1 + 0x8a8))();
  (**(code **)(*param_1 + 0x8c0))(param_1,0,0);
  if (*param_2 == DAT_146b479a8) {
    (**(code **)(*param_1 + 0x9c0))(param_1);
  }
  return;
}



// FUNCTION 14308e360 FUN_14308e360 body=1322 status=ok
// SIG undefined FUN_14308e360(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14308e360(longlong *param_1)

{
  float fVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  bool bVar12;
  float fVar13;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined1 local_d8 [8];
  undefined8 local_d0;
  code *local_c8;
  longlong local_b8 [4];
  longlong *local_98;
  int local_88;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  bVar2 = *(byte *)(param_1 + 0xd2);
  lVar9 = 0;
  if ((int)(uint)bVar2 < (int)param_1[0xd4]) {
    if (((*(longlong *)(param_1[0xd3] + 8 + (ulonglong)bVar2 * 0x48) != 0) &&
        (lVar10 = *(longlong *)(param_1[0xd3] + 0x20 + (ulonglong)bVar2 * 0x48), lVar10 != 0)) &&
       (cVar4 = FUN_14309f7d0(lVar10,1), cVar4 != '\0')) {
      bVar3 = *(byte *)(param_1 + 0xd2);
      lVar10 = lVar9;
      if (((int)(uint)bVar3 < (int)param_1[0xd4]) &&
         (*(longlong *)(param_1[0xd3] + 8 + (ulonglong)bVar3 * 0x48) != 0)) {
        lVar10 = *(longlong *)(param_1[0xd3] + 0x20 + (ulonglong)bVar3 * 0x48);
      }
      bVar3 = *(byte *)((longlong)param_1 + 0x67a);
      lVar6 = lVar9;
      if (((int)(uint)bVar3 < (int)param_1[0xd4]) &&
         (*(longlong *)(param_1[0xd3] + 8 + (ulonglong)bVar3 * 0x48) != 0)) {
        lVar6 = *(longlong *)(param_1[0xd3] + 0x20 + (ulonglong)bVar3 * 0x48);
      }
      if (((((char)param_1[0xde] != '\0') || (lVar6 == 0)) || (*(char *)(lVar6 + 0x1ac) != '\0')) ||
         ((lVar10 != 0 && (*(char *)(lVar10 + 0x1ac) != '\0')))) {
        (**(code **)(*param_1 + 0x8c0))(param_1,0,0);
      }
    }
  }
  bVar3 = *(byte *)((longlong)param_1 + 0x67a);
  if ((int)(uint)bVar3 < (int)param_1[0xd4]) {
    lVar10 = param_1[0xd3];
    plVar8 = *(longlong **)(lVar10 + 8 + (ulonglong)bVar3 * 0x48);
    if (plVar8 != (longlong *)0x0) {
      if (((int)param_1[0xd4] <= (int)(uint)*(byte *)(param_1 + 0xd2)) ||
         (lVar6 = *(longlong *)(lVar10 + 8 + (ulonglong)*(byte *)(param_1 + 0xd2) * 0x48),
         lVar6 == 0)) {
        lVar6 = lVar9;
      }
      if (((*(byte *)((longlong)plVar8 + 0x181) & 2) != 0) ||
         ((lVar6 != 0 && ((*(byte *)(lVar6 + 0x181) & 2) != 0)))) {
        uVar5 = *(uint *)(lVar10 + (ulonglong)bVar3 * 0x48);
        *(undefined1 *)((longlong)param_1 + 0x6c4) = 0;
        *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) & ~uVar5;
        cVar4 = '\0';
        uVar5 = *(uint *)(param_1 + 0xd8);
        if (*(uint *)(param_1 + 0xd8) != 0) {
          do {
            if ((uVar5 & 1) != 0) {
              *(char *)((longlong)param_1 + 0x6c4) = cVar4;
              break;
            }
            cVar4 = cVar4 + '\x01';
            bVar12 = 1 < uVar5;
            uVar5 = uVar5 >> 1;
          } while (bVar12);
        }
      }
      fVar13 = (float)(**(code **)(*plVar8 + 0x490))
                                (plVar8,bVar2,
                                 *(float *)((longlong)param_1 + 0x48c) *
                                 *(float *)((longlong)param_1 + 0x494));
      if (0.0 < fVar13) {
        fVar1 = *(float *)(param_1 + 0x93);
        if (0.0 < fVar1) {
          uStack_f0 = 0;
          local_f8 = FUN_1430910d0;
          uVar7 = AActor::GetWorldTimerManager(param_1);
          plVar8 = (longlong *)FMemory::Realloc(0,0x30);
          if (plVar8 != (longlong *)0x0) {
            *plVar8 = (longlong)&PTR_FUN_143f77b88;
            FWeakObjectPtr::operator=(plVar8 + 1,param_1);
            *(undefined4 *)(plVar8 + 2) = (undefined4)local_f8;
            *(undefined4 *)((longlong)plVar8 + 0x14) = local_f8._4_4_;
            *(undefined4 *)(plVar8 + 3) = uStack_f0;
            *(undefined4 *)((longlong)plVar8 + 0x1c) = uStack_ec;
            lVar9 = FDelegateHandle::GenerateNewID();
            plVar8[5] = lVar9;
            *plVar8 = (longlong)&PTR_FUN_143f77bd0;
          }
          local_e8 = 0;
          local_e0 = 0;
          if (plVar8 != (longlong *)0x0) {
            (**(code **)(*plVar8 + 0x30))(plVar8,&local_e8);
          }
          FWeakObjectPtr::operator=(local_d8,0);
          local_100 = 0xbf800000;
          local_d0 = 0;
          local_98 = (longlong *)0x0;
          local_88 = 0;
          local_c8 = AK::MemoryMgr::StartProfileThreadUsage;
          local_108 = 0;
          FUN_142880850(uVar7,param_1 + 0xd1,&local_e8,fVar1 * fVar13);
          if (local_88 != 0) {
            plVar11 = local_b8;
            if (local_98 != (longlong *)0x0) {
              plVar11 = local_98;
            }
            if (plVar11 != (longlong *)0x0) {
              (**(code **)(*plVar11 + 0x10))(plVar11,0);
            }
          }
          if (local_98 != (longlong *)0x0) {
            FMemory::Free();
          }
          TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_e8);
          if (plVar8 != (longlong *)0x0) {
            (**(code **)(*plVar8 + 0x28))(plVar8,0);
            lVar9 = FMemory::Realloc(plVar8,0,0);
            if (lVar9 != 0) {
              FMemory::Free(lVar9);
            }
          }
        }
        uStack_f0 = 0;
        local_f8 = (code *)&LAB_1424e1b5c;
        uVar7 = AActor::GetWorldTimerManager(param_1);
        plVar8 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar8 != (longlong *)0x0) {
          *plVar8 = (longlong)&PTR_FUN_143f77b88;
          FWeakObjectPtr::operator=(plVar8 + 1,param_1);
          *(undefined4 *)(plVar8 + 2) = (undefined4)local_f8;
          *(undefined4 *)((longlong)plVar8 + 0x14) = local_f8._4_4_;
          *(undefined4 *)(plVar8 + 3) = uStack_f0;
          *(undefined4 *)((longlong)plVar8 + 0x1c) = uStack_ec;
          lVar9 = FDelegateHandle::GenerateNewID();
          plVar8[5] = lVar9;
          *plVar8 = (longlong)&PTR_FUN_143f77bd0;
        }
        local_e8 = 0;
        local_e0 = 0;
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 0x30))(plVar8,&local_e8);
        }
        FWeakObjectPtr::operator=(local_d8,0);
        local_100 = 0xbf800000;
        local_d0 = 0;
        local_98 = (longlong *)0x0;
        local_88 = 0;
        local_c8 = AK::MemoryMgr::StartProfileThreadUsage;
        local_108 = 0;
        FUN_142880850(uVar7,param_1 + 0xd0,&local_e8,fVar13);
        if (local_88 != 0) {
          plVar11 = local_b8;
          if (local_98 != (longlong *)0x0) {
            plVar11 = local_98;
          }
          if (plVar11 != (longlong *)0x0) {
            (**(code **)(*plVar11 + 0x10))(plVar11,0);
          }
        }
        if (local_98 != (longlong *)0x0) {
          FMemory::Free();
        }
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_e8);
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 0x28))(plVar8,0);
          lVar9 = FMemory::Realloc(plVar8,0,0);
          if (lVar9 != 0) {
            FMemory::Free(lVar9);
          }
        }
      }
    }
  }
  lVar9 = param_1[0xd0];
  if ((lVar9 == 0) || (*(float *)(param_1 + 0x93) == 0.0)) {
    FUN_1430910d0(param_1);
    lVar9 = param_1[0xd0];
  }
  if (lVar9 == 0) {
    (**(code **)(*param_1 + 0x9d0))(param_1);
  }
  return;
}



// FUNCTION 14308e890 FUN_14308e890 body=118 status=ok
// SIG undefined FUN_14308e890(void)

void FUN_14308e890(longlong *param_1)

{
  longlong lVar1;
  longlong local_res8;
  
  lVar1 = param_1[0xff];
  if (DAT_146b479b0 != lVar1) {
    *(byte *)(param_1 + 0xfd) = *(byte *)(param_1 + 0xfd) | 1;
    (**(code **)(*param_1 + 0xac8))(param_1,&DAT_146b479b0);
    local_res8 = param_1[0xff];
    *(byte *)(param_1 + 0xfd) = *(byte *)(param_1 + 0xfd) & 0xfe;
    if (local_res8 == lVar1) {
      param_1[0xff] = DAT_146b479b0;
      (**(code **)(*param_1 + 0xac0))(param_1,&local_res8);
    }
  }
  return;
}



// FUNCTION 14308e930 FUN_14308e930 body=69 status=ok
// SIG undefined FUN_14308e930(void)

void FUN_14308e930(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong **)(param_1 + 0x118) != (longlong *)0x0) {
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0x148))();
    if (lVar1 != 0) {
      if (*(char *)(param_1 + 0x1d0) == '\0') {
        *(undefined4 *)(param_1 + 0x1cc) = *(undefined4 *)(lVar1 + 0x790);
      }
      *(undefined1 *)(param_1 + 0x1d0) = 1;
    }
  }
  return;
}



// FUNCTION 14308e980 FUN_14308e980 body=21 status=ok
// SIG undefined FUN_14308e980(void)

void FUN_14308e980(longlong *param_1,undefined1 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014308e98e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x8a0))(param_1,(char)param_1[0xd2],param_2);
  return;
}



// FUNCTION 14308e9a0 FUN_14308e9a0 body=451 status=ok
// SIG undefined FUN_14308e9a0(void)

void FUN_14308e9a0(longlong *param_1,byte param_2,char param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  
  cVar4 = (**(code **)(*param_1 + 0x7c8))();
  if ((cVar4 != '\0') &&
     ((param_3 != '\0' || (cVar4 = (**(code **)(*param_1 + 0x878))(param_1,param_2), cVar4 != '\0'))
     )) {
    if (((longlong *)param_1[0x2a] == (longlong *)0x0) ||
       (cVar4 = (**(code **)(*(longlong *)param_1[0x2a] + 0x778))(), cVar4 != '\0')) {
      if (param_1[0xff] == DAT_146b479a8) {
        if ((*(byte *)(param_1 + 0xcc) & 2) == 0) {
          cVar4 = (**(code **)(*param_1 + 0x868))(param_1,param_2);
          if (cVar4 == '\0') {
            return;
          }
          *(char *)(param_1 + 0xdc) = param_3 + '\x01';
          return;
        }
        (**(code **)(*param_1 + 0x9c0))(param_1);
      }
      if ((int)(uint)param_2 < (int)param_1[0xd4]) {
        lVar1 = (ulonglong)param_2 * 0x48;
        plVar2 = *(longlong **)(lVar1 + 8 + param_1[0xd3]);
        if ((((plVar2 != (longlong *)0x0) && ((*(byte *)((longlong)plVar2 + 0x181) & 1) != 0)) &&
            (cVar4 = (**(code **)(*plVar2 + 0x470))(), cVar4 == '\0')) &&
           (((lVar3 = param_1[0xd3], (int)param_1[0xd4] <= (int)(uint)param_2 ||
             (*(longlong *)(lVar1 + 8 + lVar3) == 0)) || (*(longlong *)(lVar1 + 0x18 + lVar3) == 0))
           )) {
          (**(code **)(*param_1 + 0x8f0))(param_1,*(undefined1 *)(lVar1 + 4 + lVar3));
          return;
        }
      }
      cVar4 = (**(code **)(*param_1 + 0xa00))(param_1,param_2,param_3);
      if ((cVar4 != '\0') && (FUN_1430765f0(param_1), *(byte *)(param_1 + 0x25) < 3)) {
        FUN_1430b4790(param_1,*(undefined1 *)((longlong)param_1 + 0x693));
        FUN_1430b4820(param_1,param_2,param_3);
      }
    }
    else if ((char)param_1[0xdc] != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014308ea29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xa00))(param_1,param_2,param_3);
      return;
    }
  }
  return;
}



// FUNCTION 14308eb70 FUN_14308eb70 body=928 status=ok
// SIG undefined FUN_14308eb70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14308eb70(longlong *param_1,undefined1 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  undefined4 local_100;
  undefined1 local_f8 [8];
  undefined8 local_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_c8 [8];
  undefined8 local_c0;
  code *local_b8;
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  *(undefined1 *)(param_1 + 0x40) = 1;
  iVar1 = FUN_14233f450();
  if (iVar1 == 3) {
    *(byte *)((longlong)param_1 + 0x201) =
         *(char *)((longlong)param_1 + 0x201) + 1U & 0xf | (char)param_1[0x40] << 4;
    (**(code **)(*param_1 + 0x260))(param_1);
  }
  local_f8[0] = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x32,local_f8);
  FUN_1430854d0(param_1);
  fVar8 = *(float *)(param_1 + 0x3b);
  local_f0 = FUN_14306aa50;
  uStack_e8 = 0;
  if ((0 < *(int *)((longlong)param_1 + 0x1ec)) &&
     ((int)(uint)*(byte *)((longlong)param_1 + 0x202) < *(int *)((longlong)param_1 + 0x1ec))) {
    fVar8 = *(float *)(param_1 + 0x3d);
  }
  fVar6 = (float)(**(code **)(*param_1 + 0x428))(param_1);
  lVar2 = param_1[0x24];
  fVar6 = fVar6 * fVar8;
  if (fVar6 <= 0.01) {
    fVar6 = 0.01;
  }
  if (lVar2 == 0) {
    lVar2 = FUN_1423407b0(param_1);
  }
  if (*(longlong *)(lVar2 + 400) == 0) {
    uVar4 = *(undefined8 *)(lVar2 + 0x3f8);
  }
  else {
    uVar4 = *(undefined8 *)(*(longlong *)(lVar2 + 400) + 0x90);
  }
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_FUN_143f77b88;
    FWeakObjectPtr::operator=(plVar3 + 1,param_1);
    *(undefined4 *)(plVar3 + 2) = (undefined4)local_f0;
    *(undefined4 *)((longlong)plVar3 + 0x14) = local_f0._4_4_;
    *(undefined4 *)(plVar3 + 3) = uStack_e8;
    *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_e4;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar3[5] = lVar2;
    *plVar3 = (longlong)&PTR_FUN_143f77bd0;
  }
  local_d8 = 0;
  local_d0 = 0;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x30))(plVar3,&local_d8);
  }
  FWeakObjectPtr::operator=(local_c8,0);
  local_100 = 0xbf800000;
  local_108 = 0;
  local_c0 = 0;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  local_b8 = AK::MemoryMgr::StartProfileThreadUsage;
  FUN_142880850(uVar4,param_1 + 0x3f,&local_d8,fVar6);
  if (local_78 != 0) {
    plVar5 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar5 = local_88;
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_d8);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,0);
    lVar2 = FMemory::Realloc(plVar3,0,0);
    if (lVar2 != 0) {
      FMemory::Free(lVar2);
    }
  }
  uStack_e8 = 0;
  local_f0 = FUN_143088c60;
  lVar2 = param_1[0x24];
  if (lVar2 == 0) {
    lVar2 = FUN_1423407b0(param_1);
  }
  if (*(longlong *)(lVar2 + 400) == 0) {
    uVar4 = *(undefined8 *)(lVar2 + 0x3f8);
  }
  else {
    uVar4 = *(undefined8 *)(*(longlong *)(lVar2 + 400) + 0x90);
  }
  uVar7 = (**(code **)(*param_1 + 0x428))(param_1);
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_FUN_143f77b88;
    FWeakObjectPtr::operator=(plVar3 + 1,param_1);
    *(undefined4 *)(plVar3 + 2) = (undefined4)local_f0;
    *(undefined4 *)((longlong)plVar3 + 0x14) = local_f0._4_4_;
    *(undefined4 *)(plVar3 + 3) = uStack_e8;
    *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_e4;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar3[5] = lVar2;
    *plVar3 = (longlong)&PTR_FUN_143f77bd0;
  }
  local_d8 = 0;
  local_d0 = 0;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x30))(plVar3,&local_d8);
  }
  FWeakObjectPtr::operator=(local_c8,0);
  local_100 = 0xbf800000;
  local_c0 = 0;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  local_b8 = AK::MemoryMgr::StartProfileThreadUsage;
  local_108 = 0;
  FUN_142880850(uVar4,param_1 + 0x3e,&local_d8,uVar7);
  if (local_78 != 0) {
    plVar5 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar5 = local_88;
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_d8);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,0);
    lVar2 = FMemory::Realloc(plVar3,0,0);
    if (lVar2 != 0) {
      FMemory::Free(lVar2);
    }
  }
  return;
}



// FUNCTION 14308ef10 FUN_14308ef10 body=334 status=ok
// SIG undefined FUN_14308ef10(void)

void FUN_14308ef10(longlong *param_1)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong local_res8;
  longlong *local_18;
  byte local_10;
  
  *(undefined1 *)(param_1 + 0xdc) = 0;
  if (param_1[0xdd] != 0) {
    lVar3 = (**(code **)(*param_1 + 0x148))();
    if (*(longlong *)(lVar3 + 400) == 0) {
      uVar4 = *(undefined8 *)(lVar3 + 0x3f8);
    }
    else {
      uVar4 = *(undefined8 *)(*(longlong *)(lVar3 + 400) + 0x90);
    }
    FUN_142880530(uVar4,param_1 + 0xdd);
    param_1[0xdd] = 0;
  }
  bVar1 = *(byte *)(param_1 + 0xd2);
  if ((((int)(uint)bVar1 < (int)param_1[0xd4]) &&
      (*(longlong *)(param_1[0xd3] + 8 + (ulonglong)bVar1 * 0x48) != 0)) &&
     (plVar2 = *(longlong **)(param_1[0xd3] + 0x18 + (ulonglong)bVar1 * 0x48),
     plVar2 != (longlong *)0x0)) {
    (**(code **)(*param_1 + 0x8c0))(param_1,0,0);
    local_10 = *(byte *)(param_1 + 0xfd) >> 1 & 1;
    local_18 = param_1;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0xa8,&local_18);
                    /* WARNING: Could not recover jumptable at 0x00014308efeb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x408))(plVar2,*(byte *)(param_1 + 0xfd) >> 1 & 1);
    return;
  }
  lVar3 = param_1[0xff];
  if (DAT_146b479a0 != lVar3) {
    *(byte *)(param_1 + 0xfd) = *(byte *)(param_1 + 0xfd) | 1;
    (**(code **)(*param_1 + 0xac8))(param_1,&DAT_146b479a0);
    local_res8 = param_1[0xff];
    *(byte *)(param_1 + 0xfd) = *(byte *)(param_1 + 0xfd) & 0xfe;
    if (local_res8 == lVar3) {
      param_1[0xff] = DAT_146b479a0;
      (**(code **)(*param_1 + 0xac0))(param_1,&local_res8);
    }
  }
  return;
}



// FUNCTION 14308f060 FUN_14308f060 body=241 status=ok
// SIG undefined FUN_14308f060(void)

void FUN_14308f060(longlong *param_1,byte param_2)

{
  char cVar1;
  byte bVar2;
  longlong *plVar3;
  
  if ((int)(uint)param_2 < (int)param_1[0xd7]) {
    cVar1 = (**(code **)(*param_1 + 0x7c8))();
    if (cVar1 != '\0') {
      if (param_1[0xff] != DAT_146b479b8) {
        if ((int)(uint)param_2 < (int)param_1[0xd7]) {
          plVar3 = (longlong *)param_1[0xd6];
          if ((longlong *)param_1[0xd6] == (longlong *)0x0) {
            plVar3 = param_1 + 0xd5;
          }
          bVar2 = *(byte *)((longlong)plVar3 + (ulonglong)param_2);
        }
        else {
          bVar2 = 0xff;
        }
        if (((int)(uint)bVar2 < (int)param_1[0xd4]) &&
           (*(longlong *)(param_1[0xd3] + 8 + (ulonglong)bVar2 * 0x48) != 0)) {
          FUN_1430765f0(param_1);
        }
      }
      if ((*(byte *)(param_1 + 0x25) < 3) && ((longlong *)param_1[0x2a] != (longlong *)0x0)) {
        cVar1 = (**(code **)(*(longlong *)param_1[0x2a] + 0x778))();
        if (cVar1 != '\0') {
          FUN_1430b4870(param_1,param_2,*(undefined1 *)((longlong)param_1 + 0x693));
        }
      }
      (**(code **)(*param_1 + 0x9d8))(param_1,param_2,0);
    }
  }
  return;
}



// FUNCTION 14308f160 FUN_14308f160 body=73 status=ok
// SIG undefined FUN_14308f160(void)

undefined8 FUN_14308f160(longlong *param_1)

{
  undefined1 uVar1;
  char cVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14309ec50();
  if (plVar3 != (longlong *)0x0) {
    uVar1 = (**(code **)(*plVar3 + 0x858))(plVar3);
    *(undefined1 *)((longlong)param_1 + 0x2e3) = uVar1;
  }
  cVar2 = (**(code **)(*param_1 + 0x400))(param_1);
  if (cVar2 == '\0') {
    (**(code **)(*param_1 + 0x448))(param_1);
  }
  return 1;
}



// FUNCTION 14308f1b0 FUN_14308f1b0 body=305 status=ok
// SIG undefined FUN_14308f1b0(void)

void FUN_14308f1b0(longlong *param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  
  cVar1 = (**(code **)(*param_1 + 0x408))();
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*param_1 + 0x538))(param_1), cVar1 == '\0')) {
    return;
  }
  *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) & 0xffffffef;
  if (((param_1[0x41] != 0) || (cVar1 = (**(code **)(*param_1 + 0x408))(param_1), cVar1 != '\0')) ||
     (*(char *)((longlong)param_1 + 0x4fc) == '\x01')) {
    *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) | 8;
    return;
  }
  *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) & 0xfffffff7;
  cVar1 = (**(code **)(*param_1 + 0x478))(param_1);
  if (cVar1 != '\0') {
    plVar3 = (longlong *)FUN_14309ed70();
                    /* WARNING: Could not recover jumptable at 0x00014308f244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x8a0))(plVar3,(char)param_1[0x30],0);
    return;
  }
  cVar1 = (**(code **)(*param_1 + 0x5a0))(param_1);
  if (cVar1 != '\0') {
    *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) | 8;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x38,0);
    FUN_1430892d0(param_1);
    return;
  }
  cVar1 = (**(code **)(*param_1 + 0x540))(param_1);
  if (cVar1 == '\0') {
    return;
  }
  if (((char)param_1[0x4b] != '\0') && (iVar2 = FUN_14233f450(param_1), iVar2 != 3)) {
    *(char *)((longlong)param_1 + 0x4ed) = (char)param_1[0xa7];
  }
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x38,0);
  cVar1 = FUN_1430a5800(param_1);
  if (cVar1 != '\0') {
    return;
  }
  FUN_143086460(param_1);
  return;
}



// FUNCTION 14308f2f0 FUN_14308f2f0 body=36 status=ok
// SIG undefined FUN_14308f2f0(void)

void FUN_14308f2f0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  *(undefined4 *)(param_1 + 0xd9) = *(undefined4 *)(lVar1 + 0x790);
  return;
}



// FUNCTION 14308f360 FUN_14308f360 body=128 status=ok
// SIG undefined FUN_14308f360(void)

void FUN_14308f360(longlong *param_1)

{
  byte bVar1;
  longlong lVar2;
  char cVar3;
  
  if (((longlong *)param_1[0x2a] != (longlong *)0x0) &&
     (cVar3 = (**(code **)(*(longlong *)param_1[0x2a] + 0x778))(), cVar3 != '\0')) {
    bVar1 = *(byte *)(param_1 + 0xd2);
    *(undefined1 *)((longlong)param_1 + 0x6f1) = 1;
    if (((int)(uint)bVar1 < (int)param_1[0xd4]) &&
       (((*(longlong *)(param_1[0xd3] + 8 + (ulonglong)bVar1 * 0x48) != 0 &&
         (lVar2 = *(longlong *)(param_1[0xd3] + 0x20 + (ulonglong)bVar1 * 0x48), lVar2 != 0)) &&
        (cVar3 = (**(code **)(*param_1 + 0x8b0))(param_1), cVar3 != '\0')))) {
      FUN_1430a5a20(lVar2);
    }
  }
  return;
}



// FUNCTION 14308f3e0 FUN_14308f3e0 body=311 status=ok
// SIG undefined FUN_14308f3e0(void)

void FUN_14308f3e0(longlong param_1,longlong param_2,char param_3)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  byte bVar6;
  ulonglong uVar7;
  int iVar8;
  
  if (param_2 != 0) {
    if (param_3 == '\0') {
      iVar8 = *(int *)(param_1 + 0x708);
    }
    else {
      iVar8 = *(int *)(param_1 + 0x718);
    }
    uVar7 = 0;
    if (0 < iVar8) {
      uVar3 = 0;
      do {
        if (param_3 == '\0') {
          if ((int)uVar3 < *(int *)(param_1 + 0x708)) {
            lVar5 = *(longlong *)(param_1 + 0x700);
            goto LAB_14308f467;
          }
        }
        else if ((int)uVar3 < *(int *)(param_1 + 0x718)) {
          lVar5 = *(longlong *)(param_1 + 0x710);
LAB_14308f467:
          lVar5 = *(longlong *)(lVar5 + uVar7 * 8);
          if (((lVar5 != 0) && (lVar5 = *(longlong *)(lVar5 + 0x38), lVar5 != 0)) &&
             (lVar5 = *(longlong *)(lVar5 + 400), lVar5 != 0)) {
            lVar4 = FUN_142a07000();
            if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if (((bVar1) && (*(longlong *)(lVar5 + 0xa48) != 0)) &&
               (cVar2 = FUN_142278320(*(longlong *)(lVar5 + 0xa48),param_2,0), cVar2 != '\0')) {
              FUN_142279320(*(undefined8 *)(lVar5 + 0xa48),*(undefined4 *)(param_2 + 0x108),0);
            }
          }
        }
        bVar6 = (char)uVar7 + 1;
        uVar7 = (ulonglong)bVar6;
        uVar3 = (uint)bVar6;
      } while ((int)uVar3 < iVar8);
    }
  }
  return;
}



// FUNCTION 14308f520 FUN_14308f520 body=226 status=ok
// SIG undefined FUN_14308f520(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14308f520(longlong param_1)

{
  longlong *plVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [192];
  ulonglong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  puVar2 = (undefined1 *)0x0;
  local_28 = 0;
  local_20 = 0;
  local_20._0_4_ = 0;
  if (param_1 != 0) {
    FUN_140725150(param_1,local_e8,0);
  }
  puVar3 = local_e8;
  if (local_28 != 0) {
    puVar3 = puVar2;
  }
  plVar4 = (longlong *)((ulonglong)puVar3 | local_28);
  puVar3 = (undefined1 *)((longlong)(int)local_20 & 0x1fffffffffffffff);
  if (plVar4 + (int)local_20 < plVar4) {
    puVar3 = puVar2;
  }
  if (puVar3 != (undefined1 *)0x0) {
    do {
      plVar1 = (longlong *)*plVar4;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x830))(plVar1,2);
      }
      plVar4 = plVar4 + 1;
      puVar2 = puVar2 + 1;
    } while (puVar2 != puVar3);
  }
  if (local_28 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14308f610 FUN_14308f610 body=769 status=ok
// SIG undefined FUN_14308f610(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14308f610(longlong *param_1)

{
  float fVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
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
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x49,0);
  FUN_1430bd490(param_1);
  *(undefined1 *)(param_1 + 0x5c) = 0;
  lVar3 = FUN_14309ec50(param_1);
  if ((*(char *)(lVar3 + 0x128) == '\x03') ||
     ((*(longlong **)(lVar3 + 0x150) != (longlong *)0x0 &&
      (cVar2 = (**(code **)(**(longlong **)(lVar3 + 0x150) + 0x778))(), cVar2 != '\0')))) {
    fVar8 = (float)(**(code **)(*param_1 + 0x440))(param_1);
    fVar9 = (float)FUN_1430774d0(param_1);
    if (((char)param_1[0x57] == '\x01') || ((fVar9 <= 0.0 || (fVar8 <= 0.0)))) {
      (**(code **)(*param_1 + 0x468))(param_1);
    }
    else {
      *(undefined1 *)(param_1 + 0x57) = 1;
      (**(code **)(*param_1 + 0x260))(param_1);
      lVar3 = param_1[0x24];
      lVar4 = lVar3;
      if (lVar3 == 0) {
        lVar4 = FUN_1423407b0(param_1);
        lVar3 = param_1[0x24];
      }
      fVar1 = *(float *)(lVar4 + 0x790);
      uStack_b0 = 0;
      local_b8 = &LAB_142ee09f0;
      fVar9 = fVar1 - (1.0 - fVar9) * fVar8;
      *(float *)((longlong)param_1 + 0x2dc) = fVar9;
      if (lVar3 == 0) {
        lVar3 = FUN_1423407b0(param_1);
      }
      if (*(longlong *)(lVar3 + 400) == 0) {
        uVar6 = *(undefined8 *)(lVar3 + 0x3f8);
      }
      else {
        uVar6 = *(undefined8 *)(*(longlong *)(lVar3 + 400) + 0x90);
      }
      plVar5 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar5 != (longlong *)0x0) {
        *plVar5 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar5 + 1,param_1);
        *(undefined4 *)(plVar5 + 2) = (undefined4)local_b8;
        *(undefined4 *)((longlong)plVar5 + 0x14) = local_b8._4_4_;
        *(undefined4 *)(plVar5 + 3) = uStack_b0;
        *(undefined4 *)((longlong)plVar5 + 0x1c) = uStack_ac;
        lVar3 = FDelegateHandle::GenerateNewID();
        plVar5[5] = lVar3;
        *plVar5 = (longlong)&PTR_FUN_143f77bd0;
      }
      local_a8 = 0;
      local_a0 = 0;
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x30))(plVar5,&local_a8);
      }
      FWeakObjectPtr::operator=(local_98,0);
      local_c0 = 0xbf800000;
      local_c8 = 0;
      local_90 = 0;
      local_58 = (longlong *)0x0;
      local_48 = 0;
      local_88 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar6,param_1 + 0x5e,&local_a8,fVar8 - (fVar1 - fVar9));
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
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x28))(plVar5,0);
        lVar3 = FMemory::Realloc(plVar5,0,0);
        if (lVar3 != 0) {
          FMemory::Free(lVar3);
        }
      }
      FUN_143094a90(param_1);
      (**(code **)(*param_1 + 0x4a8))(param_1);
    }
  }
  return;
}



// FUNCTION 14308f920 FUN_14308f920 body=82 status=ok
// SIG undefined FUN_14308f920(void)

void FUN_14308f920(longlong param_1)

{
  longlong lVar1;
  
  *(undefined1 *)(param_1 + 0x934) = 0;
  if (*(longlong *)(param_1 + 0x120) == 0) {
    FUN_1423407b0();
  }
  lVar1 = FUN_14304c8c0();
  if (lVar1 != 0) {
    FUN_1430599c0(lVar1,*(undefined8 *)(param_1 + 0x118),0);
    return;
  }
  return;
}



// FUNCTION 14308f980 FUN_14308f980 body=381 status=ok
// SIG undefined FUN_14308f980(void)

void FUN_14308f980(longlong param_1,int param_2)

{
  longlong *plVar1;
  byte *pbVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong *plVar13;
  
  plVar13 = *(longlong **)(param_1 + 0x700);
  plVar8 = plVar13 + *(int *)(param_1 + 0x708);
  for (; plVar13 != plVar8; plVar13 = plVar13 + 1) {
    lVar4 = *plVar13;
    if ((lVar4 != 0) && (iVar7 = *(int *)(lVar4 + 0x88) + -1, -1 < iVar7)) {
      plVar1 = (longlong *)(lVar4 + 0x80);
      lVar9 = (longlong)iVar7 * 0x68;
      lVar12 = lVar9;
      do {
        lVar5 = *plVar1;
        if ((*(int *)(lVar9 + 4 + lVar5) == param_2) && ((*(byte *)(lVar9 + 9 + lVar5) & 2) == 0)) {
          *(uint *)(lVar4 + 0x58) = *(uint *)(lVar4 + 0x58) | 0x40;
          pbVar2 = (byte *)((longlong)*(int *)(lVar9 + lVar5) * 0x20 + 8 +
                           *(longlong *)(lVar4 + 0x70));
          *pbVar2 = *pbVar2 | 1;
          iVar3 = *(int *)(lVar4 + 0x88);
          iVar6 = (iVar3 - iVar7) + -1;
          if (0 < iVar6) {
            iVar6 = 1;
          }
          if (iVar6 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*plVar1 + lVar12),
                       (void *)((longlong)(iVar3 - iVar6) * 0x68 + *plVar1),(longlong)iVar6 * 0x68);
            iVar3 = *(int *)(lVar4 + 0x88);
          }
          *(int *)(lVar4 + 0x88) = iVar3 + -1;
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,FDefaultAllocator>::
          ResizeShrink(plVar1);
        }
        lVar12 = lVar12 + -0x68;
        lVar9 = lVar9 + -0x68;
        iVar7 = iVar7 + -1;
      } while (-1 < iVar7);
    }
  }
  uVar11 = 0;
  plVar8 = *(longlong **)(param_1 + 0x710);
  uVar10 = (longlong)*(int *)(param_1 + 0x718) & 0x1fffffffffffffff;
  if (plVar8 + *(int *)(param_1 + 0x718) < plVar8) {
    uVar10 = uVar11;
  }
  if (uVar10 != 0) {
    do {
      if (*plVar8 != 0) {
        FUN_1430901a0(*plVar8,param_2);
      }
      plVar8 = plVar8 + 1;
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar10);
  }
  return;
}



// FUNCTION 14308fb00 FUN_14308fb00 body=528 status=ok
// SIG undefined FUN_14308fb00(void)

void FUN_14308fb00(longlong param_1,uint param_2,byte param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  byte *pbVar3;
  longlong *plVar4;
  uint uVar5;
  longlong *plVar6;
  byte *pbVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  plVar6 = *(longlong **)(param_1 + 0x700);
  plVar4 = plVar6 + *(int *)(param_1 + 0x708);
  for (; plVar6 != plVar4; plVar6 = plVar6 + 1) {
    lVar1 = *plVar6;
    if (lVar1 != 0) {
      pbVar3 = *(byte **)(lVar1 + 0x60);
      pbVar7 = pbVar3 + (longlong)*(int *)(lVar1 + 0x68) * 0x60;
      for (; pbVar3 != pbVar7; pbVar3 = pbVar3 + 0x60) {
        if (((*pbVar3 == param_2) && ((*(uint *)(pbVar3 + 4) >> (param_3 & 0x1f) & 1) != 0)) &&
           (*(longlong *)(pbVar3 + 0x58) != 0)) {
          FUN_142600fa0();
        }
      }
    }
  }
  plVar6 = *(longlong **)(param_1 + 0x710);
  plVar4 = plVar6 + *(int *)(param_1 + 0x718);
  for (; plVar6 != plVar4; plVar6 = plVar6 + 1) {
    lVar1 = *plVar6;
    if (lVar1 != 0) {
      pbVar3 = *(byte **)(lVar1 + 0x60);
      pbVar7 = pbVar3 + (longlong)*(int *)(lVar1 + 0x68) * 0x60;
      for (; pbVar3 != pbVar7; pbVar3 = pbVar3 + 0x60) {
        if (((*pbVar3 == param_2) && ((*(uint *)(pbVar3 + 4) >> (param_3 & 0x1f) & 1) != 0)) &&
           (*(longlong *)(pbVar3 + 0x58) != 0)) {
          FUN_142600fa0();
        }
      }
    }
  }
  uVar2 = 0;
  uVar10 = uVar2;
  if (0 < *(int *)(param_1 + 0x730)) {
    do {
      uVar8 = 0;
      if ((*(byte *)(*(longlong *)(param_1 + 0x728) + uVar10) == param_2) &&
         ((*(uint *)(*(longlong *)(param_1 + 0x728) + 0x18 + uVar10) >> (param_3 & 0x1f) & 1) != 0))
      {
        plVar4 = *(longlong **)(param_1 + 0x700);
        uVar9 = (longlong)*(int *)(param_1 + 0x708) & 0x1fffffffffffffff;
        if (plVar4 + *(int *)(param_1 + 0x708) < plVar4) {
          uVar9 = uVar8;
        }
        if (uVar9 != 0) {
          do {
            if (*plVar4 != 0) {
              FUN_1430901a0();
            }
            plVar4 = plVar4 + 1;
            uVar8 = uVar8 + 1;
          } while (uVar8 != uVar9);
        }
        uVar9 = 0;
        plVar4 = *(longlong **)(param_1 + 0x710);
        uVar8 = (longlong)*(int *)(param_1 + 0x718) & 0x1fffffffffffffff;
        if (plVar4 + *(int *)(param_1 + 0x718) < plVar4) {
          uVar8 = uVar9;
        }
        if (uVar8 != 0) {
          do {
            if (*plVar4 != 0) {
              FUN_1430901a0();
            }
            plVar4 = plVar4 + 1;
            uVar9 = uVar9 + 1;
          } while (uVar9 != uVar8);
        }
      }
      uVar5 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar5;
      uVar10 = uVar10 + 0xa8;
    } while ((int)uVar5 < *(int *)(param_1 + 0x730));
  }
  return;
}



// FUNCTION 14308fd10 FUN_14308fd10 body=210 status=ok
// SIG undefined FUN_14308fd10(void)

void FUN_14308fd10(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = FUN_14309ec50();
  if (lVar2 != 0) {
    FUN_14308fb00(lVar2,2,*(undefined1 *)(param_1 + 0x2e3));
    FUN_14308fb00(lVar2,4,*(undefined1 *)(param_1 + 0x2e3));
    FUN_14308fb00(lVar2,5,*(undefined1 *)(param_1 + 0x2e3));
    FUN_14308fb00(lVar2,6,*(undefined1 *)(param_1 + 0x2e3));
  }
  plVar3 = (longlong *)FUN_1412996f0(param_1);
  if (plVar3 != (longlong *)0x0) {
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x670))(plVar3);
    if (plVar3 != (longlong *)0x0) {
      cVar1 = (**(code **)(*plVar3 + 0x768))(plVar3);
      if (cVar1 != '\0') {
        if (*(longlong *)(param_1 + 0x1f8) != 0) {
          FUN_142d49f50(*(longlong *)(param_1 + 0x1f8),plVar3);
        }
        if (*(longlong *)(param_1 + 0x200) != 0) {
          FUN_142d49f50(*(longlong *)(param_1 + 0x200),plVar3);
        }
      }
    }
  }
  return;
}



// FUNCTION 14308fdf0 FUN_14308fdf0 body=887 status=ok
// SIG undefined FUN_14308fdf0(void)

void FUN_14308fdf0(longlong *param_1)

{
  int *piVar1;
  ulonglong *puVar2;
  undefined4 uVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  bool bVar14;
  longlong *local_60;
  longlong *local_50;
  ulonglong local_48;
  longlong local_40;
  ulonglong local_38 [2];
  
  uVar10 = 0;
  lVar8 = FUN_14309ed70();
  *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) & 0xfffffffd;
  iVar6 = FUN_142340f30(param_1);
  if (((iVar6 == 3) && (*(char *)(lVar8 + 0x128) != '\x03')) &&
     ((*(longlong **)(lVar8 + 0x150) == (longlong *)0x0 ||
      (cVar5 = (**(code **)(**(longlong **)(lVar8 + 0x150) + 0x778))(), cVar5 == '\0')))) {
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x3a,0);
  }
  puVar2 = (ulonglong *)(param_1 + 0xa1);
  uVar13 = uVar10;
  if ((*puVar2 != 0) && (param_1[0xa2] != 0)) {
    piVar1 = (int *)(param_1[0xa2] + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      local_60 = (longlong *)param_1[0xa2];
      uVar13 = 1;
      uVar9 = uVar10;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        uVar7 = *(uint *)(local_60 + 1);
        bVar14 = uVar7 == 0;
        if (bVar14) {
          *(uint *)(local_60 + 1) = 0;
        }
        else {
          uVar9 = (ulonglong)uVar7;
        }
        UNLOCK();
        while (!bVar14) {
          iVar6 = (int)uVar9;
          LOCK();
          bVar14 = iVar6 == (int)local_60[1];
          if (bVar14) {
            *(int *)(local_60 + 1) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar14) {
            uVar9 = *puVar2;
            goto LAB_14308fec7;
          }
          uVar9 = 0;
          LOCK();
          uVar7 = *(uint *)(local_60 + 1);
          bVar14 = uVar7 == 0;
          if (bVar14) {
            *(uint *)(local_60 + 1) = 0;
          }
          else {
            uVar9 = (ulonglong)uVar7;
          }
          UNLOCK();
        }
        uVar9 = 0;
        local_60 = (longlong *)0x0;
      }
LAB_14308fec7:
      if (*(longlong *)(uVar9 + 0x10) != 0) {
        bVar14 = true;
        goto LAB_14308fee9;
      }
    }
  }
  bVar14 = false;
LAB_14308fee9:
  if ((uVar13 != 0) && (local_60 != (longlong *)0x0)) {
    LOCK();
    plVar4 = local_60 + 1;
    lVar11 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)local_60 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  if (bVar14) {
    local_50 = (longlong *)param_1[0xa2];
    uVar13 = uVar10;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      uVar7 = *(uint *)(local_50 + 1);
      bVar14 = uVar7 == 0;
      if (bVar14) {
        *(uint *)(local_50 + 1) = 0;
      }
      else {
        uVar13 = (ulonglong)uVar7;
      }
      UNLOCK();
      while (!bVar14) {
        iVar6 = (int)uVar13;
        LOCK();
        bVar14 = iVar6 == (int)local_50[1];
        if (bVar14) {
          *(int *)(local_50 + 1) = iVar6 + 1;
        }
        UNLOCK();
        if (bVar14) {
          uVar13 = *puVar2;
          goto LAB_14308ff82;
        }
        uVar13 = 0;
        LOCK();
        uVar7 = *(uint *)(local_50 + 1);
        bVar14 = uVar7 == 0;
        if (bVar14) {
          *(uint *)(local_50 + 1) = 0;
        }
        else {
          uVar13 = (ulonglong)uVar7;
        }
        UNLOCK();
      }
      uVar13 = 0;
      local_50 = (longlong *)0x0;
    }
LAB_14308ff82:
    iVar6 = *(int *)(*(longlong *)(uVar13 + 0x10) + 0xc);
    if (iVar6 < (int)DAT_1469e91c4) {
      uVar12 = iVar6 >> 0x1f & 0xffff;
      uVar7 = iVar6 + uVar12;
      uVar10 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
               (longlong)(int)((uVar7 & 0xffff) - uVar12) * 0x18;
    }
    uVar3 = *(undefined4 *)(uVar10 + 8);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_50 + 1;
      lVar11 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)local_50 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
    if ((~(byte)((uint)uVar3 >> 0x1d) & 1) != 0) {
      local_40 = param_1[0xa2];
      local_48 = 0;
      if (local_40 != 0) {
        LOCK();
        iVar6 = *(int *)(local_40 + 8);
        bVar14 = iVar6 == 0;
        if (bVar14) {
          *(int *)(local_40 + 8) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        while (!bVar14) {
          LOCK();
          bVar14 = iVar6 == *(int *)(local_40 + 8);
          if (bVar14) {
            *(int *)(local_40 + 8) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar14) {
            local_48 = *puVar2;
            goto LAB_14309005d;
          }
          LOCK();
          iVar6 = *(int *)(local_40 + 8);
          bVar14 = iVar6 == 0;
          if (bVar14) {
            *(int *)(local_40 + 8) = 0;
            iVar6 = 0;
          }
          UNLOCK();
        }
        local_40 = 0;
      }
LAB_14309005d:
      FUN_143090ac0(lVar8,&local_48);
    }
    if (puVar2 != local_38) {
      *puVar2 = 0;
      plVar4 = (longlong *)param_1[0xa2];
      param_1[0xa2] = 0;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
  }
  if ((((param_1[0x83] != 0) && (*(char *)(param_1[0x83] + 0x268) != '\0')) &&
      (lVar11 = FUN_1412996f0(param_1), lVar11 != 0)) &&
     (plVar4 = *(longlong **)(lVar11 + 0x490), plVar4 != (longlong *)0x0)) {
    lVar11 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
    if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8) !=
        lVar11 + 0x88)) {
      bVar14 = false;
    }
    else {
      bVar14 = true;
    }
    if ((bVar14) && (cVar5 = (**(code **)(*plVar4 + 0x768))(plVar4), cVar5 != '\0')) {
      FUN_142d49f50(param_1[0x83],plVar4);
    }
  }
  FUN_14308fb00(lVar8,1,(char)param_1[0x30]);
                    /* WARNING: Could not recover jumptable at 0x000143090160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x5f8))(param_1);
  return;
}



// FUNCTION 143090170 FUN_143090170 body=36 status=ok
// SIG undefined FUN_143090170(void)

void FUN_143090170(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_14309ed70();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143090188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x968))(plVar1);
    return;
  }
  return;
}



// FUNCTION 1430901a0 FUN_1430901a0 body=232 status=ok
// SIG undefined FUN_1430901a0(void)

void FUN_1430901a0(longlong param_1,int param_2)

{
  longlong *plVar1;
  byte *pbVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  iVar6 = *(int *)(param_1 + 0x88) + -1;
  if (-1 < iVar6) {
    plVar1 = (longlong *)(param_1 + 0x80);
    lVar7 = (longlong)iVar6 * 0x68;
    lVar8 = lVar7;
    do {
      lVar4 = *plVar1;
      if ((*(int *)(lVar7 + 4 + lVar4) == param_2) && ((*(byte *)(lVar7 + 9 + lVar4) & 2) == 0)) {
        *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) | 0x40;
        pbVar2 = (byte *)((longlong)*(int *)(lVar7 + lVar4) * 0x20 + 8 +
                         *(longlong *)(param_1 + 0x70));
        *pbVar2 = *pbVar2 | 1;
        iVar3 = *(int *)(param_1 + 0x88);
        iVar5 = (iVar3 - iVar6) + -1;
        if (0 < iVar5) {
          iVar5 = 1;
        }
        if (iVar5 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar1 + lVar8),(void *)((longlong)(iVar3 - iVar5) * 0x68 + *plVar1),
                     (longlong)iVar5 * 0x68);
          iVar3 = *(int *)(param_1 + 0x88);
        }
        *(int *)(param_1 + 0x88) = iVar3 + -1;
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,FDefaultAllocator>::
        ResizeShrink(plVar1);
      }
      lVar8 = lVar8 + -0x68;
      lVar7 = lVar7 + -0x68;
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
  }
  return;
}



// FUNCTION 143090290 FUN_143090290 body=221 status=ok
// SIG undefined FUN_143090290(void)

void FUN_143090290(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong local_res8;
  
  if (((param_1[0xff] == DAT_146b479c8) && ((longlong *)param_1[0x2a] != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(*(longlong *)param_1[0x2a] + 0x778))(), cVar4 != '\0')) {
    lVar3 = param_1[0xcf];
    lVar1 = param_1[0xff];
    if (DAT_146b479a0 != lVar1) {
      *(byte *)(param_1 + 0xfd) = *(byte *)(param_1 + 0xfd) | 1;
      (**(code **)(*param_1 + 0xac8))(param_1,&DAT_146b479a0);
      lVar2 = param_1[0xff];
      *(byte *)(param_1 + 0xfd) = *(byte *)(param_1 + 0xfd) & 0xfe;
      if (lVar2 == lVar1) {
        param_1[0xff] = DAT_146b479a0;
        local_res8 = lVar2;
        (**(code **)(*param_1 + 0xac0))(param_1,&local_res8);
      }
    }
    if (*(byte *)(param_1 + 0x25) < 3) {
      FUN_1430b48c0(param_1,(char)lVar3,(char)param_1[0xd2]);
    }
  }
  return;
}



// FUNCTION 1430903c0 FUN_1430903c0 body=294 status=ok
// SIG undefined FUN_1430903c0(void)

void FUN_1430903c0(longlong *param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 local_res8 [8];
  
  cVar1 = (**(code **)(*param_1 + 0x3f8))();
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0x40) = 2;
    iVar2 = FUN_14233f450(param_1);
    if (iVar2 == 3) {
      *(byte *)((longlong)param_1 + 0x201) =
           *(char *)((longlong)param_1 + 0x201) + 1U & 0xf | (char)param_1[0x40] << 4;
      (**(code **)(*param_1 + 0x260))(param_1);
    }
    lVar3 = param_1[0x24];
    if (lVar3 == 0) {
      lVar3 = FUN_1423407b0(param_1);
    }
    if (*(longlong *)(lVar3 + 400) == 0) {
      uVar5 = *(undefined8 *)(lVar3 + 0x3f8);
    }
    else {
      uVar5 = *(undefined8 *)(*(longlong *)(lVar3 + 400) + 0x90);
    }
    FUN_142880530(uVar5,param_1 + 0x3f);
    param_1[0x3f] = 0;
    lVar3 = param_1[0x24];
    if (lVar3 == 0) {
      lVar3 = FUN_1423407b0(param_1);
    }
    if (*(longlong *)(lVar3 + 400) == 0) {
      uVar5 = *(undefined8 *)(lVar3 + 0x3f8);
    }
    else {
      uVar5 = *(undefined8 *)(*(longlong *)(lVar3 + 400) + 0x90);
    }
    FUN_142880530(uVar5,param_1 + 0x3e);
    param_1[0x3e] = 0;
    plVar4 = (longlong *)FUN_14309ec70(param_1);
    (**(code **)(*plVar4 + 0x9a0))(plVar4,2);
    local_res8[0] = 0;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x34,local_res8);
  }
  return;
}



// FUNCTION 1430904f0 FUN_1430904f0 body=237 status=ok
// SIG undefined FUN_1430904f0(void)

void FUN_1430904f0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = param_1[0x24];
  if (lVar2 == 0) {
    lVar2 = FUN_1423407b0();
  }
  if (*(longlong *)(lVar2 + 400) == 0) {
    uVar3 = *(undefined8 *)(lVar2 + 0x3f8);
  }
  else {
    uVar3 = *(undefined8 *)(*(longlong *)(lVar2 + 400) + 0x90);
  }
  FUN_142880530(uVar3,param_1 + 0xa5);
  param_1[0xa5] = 0;
  lVar2 = param_1[0x24];
  if (lVar2 == 0) {
    lVar2 = FUN_1423407b0(param_1);
  }
  if (*(longlong *)(lVar2 + 400) == 0) {
    uVar3 = *(undefined8 *)(lVar2 + 0x3f8);
  }
  else {
    uVar3 = *(undefined8 *)(*(longlong *)(lVar2 + 400) + 0x90);
  }
  FUN_142880530(uVar3,param_1 + 0xa6);
  param_1[0xa6] = 0;
  *(undefined1 *)((longlong)param_1 + 0x4fc) = 2;
  iVar1 = FUN_14233f450(param_1);
  if (iVar1 == 3) {
    *(byte *)((longlong)param_1 + 0x4fd) =
         *(char *)((longlong)param_1 + 0x4fd) + 1U & 0xf | *(char *)((longlong)param_1 + 0x4fc) << 4
    ;
    (**(code **)(*param_1 + 0x260))(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001430905d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x5b0))(param_1);
  return;
}



// FUNCTION 1430905e0 FUN_1430905e0 body=31 status=ok
// SIG undefined FUN_1430905e0(void)

void FUN_1430905e0(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_14309ed70();
                    /* WARNING: Could not recover jumptable at 0x0001430905f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x9a0))(plVar1,9);
  return;
}



// FUNCTION 143090600 FUN_143090600 body=122 status=ok
// SIG undefined FUN_143090600(void)

void FUN_143090600(longlong *param_1,byte param_2,undefined1 param_3)

{
  char cVar1;
  
  if ((int)(uint)param_2 < (int)param_1[0xd7]) {
    if ((*(byte *)(param_1 + 0x25) < 3) && ((longlong *)param_1[0x2a] != (longlong *)0x0)) {
      cVar1 = (**(code **)(*(longlong *)param_1[0x2a] + 0x778))();
      if (cVar1 != '\0') {
        FUN_1430b4910(param_1,param_2,param_3);
      }
    }
    (**(code **)(*param_1 + 0x9e0))(param_1,param_2,1,param_3);
  }
  return;
}



// FUNCTION 143090680 FUN_143090680 body=709 status=ok
// SIG undefined FUN_143090680(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143090680(longlong *param_1,char param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  float fVar6;
  float extraout_XMM0_Da;
  float fVar7;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [8];
  undefined8 local_a0;
  code *local_98;
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  cVar1 = (char)param_1[0x57];
  if (cVar1 != '\0') {
    if (*(char *)((longlong)param_1 + 0x2e1) == '\0') {
      if (param_2 == '\0') {
        if (cVar1 == '\x02') {
          fVar6 = (float)FUN_1430774d0();
          (**(code **)(*param_1 + 0x438))(param_1);
          if (fVar6 < *(float *)(param_1 + 0x38)) {
            (**(code **)(*param_1 + 0x450))(param_1);
            return 1;
          }
          fVar7 = *(float *)((longlong)param_1 + 0x1bc);
          *(undefined1 *)(param_1 + 0x5c) = 1;
          if (fVar6 < fVar7) {
            if (fVar7 < 1.0) {
              local_c8 = &LAB_143070140;
              lVar2 = param_1[0x24];
              uStack_c0 = 0;
              if (lVar2 == 0) {
                lVar2 = FUN_1423407b0(param_1);
                fVar7 = *(float *)((longlong)param_1 + 0x1bc);
              }
              if (*(longlong *)(lVar2 + 400) == 0) {
                uVar4 = *(undefined8 *)(lVar2 + 0x3f8);
              }
              else {
                uVar4 = *(undefined8 *)(*(longlong *)(lVar2 + 400) + 0x90);
              }
              plVar3 = (longlong *)FMemory::Realloc(0,0x30);
              if (plVar3 != (longlong *)0x0) {
                *plVar3 = (longlong)&PTR_FUN_143f77b88;
                FWeakObjectPtr::operator=(plVar3 + 1,param_1);
                *(undefined4 *)(plVar3 + 2) = (undefined4)local_c8;
                *(undefined4 *)((longlong)plVar3 + 0x14) = local_c8._4_4_;
                *(undefined4 *)(plVar3 + 3) = uStack_c0;
                *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_bc;
                lVar2 = FDelegateHandle::GenerateNewID();
                plVar3[5] = lVar2;
                *plVar3 = (longlong)&PTR_FUN_143f77bd0;
              }
              local_b8 = 0;
              local_b0 = 0;
              if (plVar3 != (longlong *)0x0) {
                (**(code **)(*plVar3 + 0x30))(plVar3,&local_b8);
              }
              FWeakObjectPtr::operator=(local_a8,0);
              local_d0 = 0xbf800000;
              local_d8 = 0;
              local_a0 = 0;
              local_68 = (longlong *)0x0;
              local_58 = 0;
              local_98 = AK::MemoryMgr::StartProfileThreadUsage;
              FUN_142880850(uVar4,param_1 + 0x5f,&local_b8,(fVar7 - fVar6) * extraout_XMM0_Da);
              if (local_58 != 0) {
                plVar5 = local_88;
                if (local_68 != (longlong *)0x0) {
                  plVar5 = local_68;
                }
                if (plVar5 != (longlong *)0x0) {
                  (**(code **)(*plVar5 + 0x10))(plVar5,0);
                }
              }
              if (local_68 != (longlong *)0x0) {
                FMemory::Free();
              }
              TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_b8);
              if (plVar3 != (longlong *)0x0) {
                (**(code **)(*plVar3 + 0x28))(plVar3,0);
                lVar2 = FMemory::Realloc(plVar3,0,0);
                if (lVar2 != 0) {
                  FMemory::Free(lVar2);
                }
              }
            }
            return 0;
          }
          lVar2 = *param_1;
        }
        else {
          if (cVar1 == '\x01') {
            return 1;
          }
          lVar2 = *param_1;
        }
        (**(code **)(lVar2 + 0x470))(param_1,1);
      }
      else {
        (**(code **)(*param_1 + 0x450))();
      }
    }
    else if (cVar1 != '\x01') {
      (**(code **)(*param_1 + 0x4a0))();
    }
  }
  return 1;
}



// FUNCTION 143090950 FUN_143090950 body=129 status=ok
// SIG undefined FUN_143090950(void)

undefined8 FUN_143090950(longlong *param_1,byte param_2)

{
  char cVar1;
  
  *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) & 0xffffffe7;
  *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) | (param_2 ^ 1) << 4;
  cVar1 = FUN_1430a5ae0(param_1,param_2);
  if (cVar1 == '\0') {
    return 0;
  }
  cVar1 = (**(code **)(*param_1 + 0x408))(param_1);
  if (cVar1 != '\0') {
    if (param_2 != 0) {
      (**(code **)(*param_1 + 0x570))(param_1,1);
      return 1;
    }
    FUN_1430913d0(param_1);
  }
  return 1;
}



// FUNCTION 1430909e0 FUN_1430909e0 body=127 status=ok
// SIG undefined FUN_1430909e0(void)

undefined1 FUN_1430909e0(longlong *param_1,byte param_2)

{
  char cVar1;
  
  *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) & 0xffffffe7;
  *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) | (param_2 ^ 1) << 4;
  cVar1 = FUN_1430a5ae0(param_1,param_2);
  if (cVar1 == '\0') {
    return 0;
  }
  cVar1 = (**(code **)(*param_1 + 0x408))(param_1);
  if (cVar1 != '\0') {
    if (param_2 != 0) {
      (**(code **)(*param_1 + 0x570))(param_1,1);
      return 1;
    }
    FUN_1430913d0(param_1);
  }
  return 1;
}



// FUNCTION 143090a60 FUN_143090a60 body=90 status=ok
// SIG undefined FUN_143090a60(void)

void FUN_143090a60(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x608);
  if (lVar1 == 0) {
    if ((*(longlong *)(param_1 + 0x4a0) != 0) && (*(longlong *)(param_1 + 0x4a8) != 0)) {
      lVar1 = (**(code **)(**(longlong **)(param_1 + 0x4a8) + 0x170))();
    }
    if (lVar1 == 0) {
      return;
    }
  }
  FUN_14305d850(lVar1,param_2,param_1);
  return;
}



// FUNCTION 143090ac0 FUN_143090ac0 body=173 status=ok
// SIG undefined FUN_143090ac0(void)

void FUN_143090ac0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 local_18;
  longlong local_10;
  
  lVar5 = *(longlong *)(param_1 + 0x608);
  if (lVar5 == 0) {
    if ((*(longlong *)(param_1 + 0x4a0) != 0) && (*(longlong *)(param_1 + 0x4a8) != 0)) {
      lVar5 = (**(code **)(**(longlong **)(param_1 + 0x4a8) + 0x170))();
    }
    if (lVar5 == 0) goto LAB_143090b26;
  }
  local_18 = *param_2;
  local_10 = param_2[1];
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  FUN_14305d4d0(lVar5,&local_18);
LAB_143090b26:
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



// FUNCTION 143090bb0 FUN_143090bb0 body=168 status=ok
// SIG undefined FUN_143090bb0(void)

void FUN_143090bb0(longlong param_1,undefined1 param_2,char param_3)

{
  byte bVar1;
  longlong lVar2;
  char cVar3;
  
  if (*(longlong **)(param_1 + 0x150) != (longlong *)0x0) {
    cVar3 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0x778))();
    if (((cVar3 != '\0') || (*(char *)(param_1 + 0x6f1) != '\0')) ||
       ((*(char *)(param_1 + 0x128) == '\x03' &&
        (*(longlong *)(*(longlong *)(param_1 + 0x150) + 0x490) == 0)))) {
      if (param_3 != '\0') {
        *(undefined1 *)(param_1 + 0x6f1) = 0;
      }
      bVar1 = *(byte *)(param_1 + 0x690);
      if ((((int)(uint)bVar1 < *(int *)(param_1 + 0x6a0)) &&
          (*(longlong *)(*(longlong *)(param_1 + 0x698) + 8 + (ulonglong)bVar1 * 0x48) != 0)) &&
         (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x698) + 0x20 + (ulonglong)bVar1 * 0x48),
         lVar2 != 0)) {
        FUN_1430a5d00(lVar2,param_2);
      }
    }
  }
  return;
}



// FUNCTION 143090c60 FUN_143090c60 body=479 status=ok
// SIG undefined FUN_143090c60(void)

void FUN_143090c60(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 200);
  if (lVar2 != 0) {
    iVar4 = *(int *)(param_1 + 0x18c);
    iVar3 = *(int *)(param_1 + 0x10) + -1;
    if (iVar4 < iVar3) {
      iVar3 = iVar3 - iVar4;
      if (0x1f < iVar3) {
        iVar3 = 0x20;
      }
      iVar6 = 0;
      *(int *)(param_1 + 0x188) = iVar3;
      *(int *)(param_1 + 0x18c) = iVar4 + iVar3;
      if (iVar3 < 1) {
        return;
      }
      do {
        cVar1 = *(char *)(param_1 + 0xd0);
        iVar4 = iVar6 + 1;
        lVar5 = (longlong)iVar6 * 0x1c + *(longlong *)(param_1 + 8);
        lVar7 = (longlong)iVar4 * 0x1c + *(longlong *)(param_1 + 8);
        if (cVar1 == '\0') {
          FUN_1423305c0(lVar2,local_res18,1,lVar5,lVar7,*(undefined4 *)(param_1 + 0xd4),
                        param_1 + 0x168,param_1 + 0xd8,&DAT_146aefe68,param_1 + 0x158,iVar6);
        }
        else if (cVar1 == '\x01') {
          FUN_1423306f0(lVar2,local_res10,CONCAT71((int7)((ulonglong)(param_1 + 0x150) >> 8),1),
                        lVar5,lVar7,param_1 + 0x150,param_1 + 0x168,param_1 + 0xd8,param_1 + 0x158,
                        iVar6);
        }
        else if (cVar1 == '\x02') {
          FUN_1423306f0(lVar2,local_res8,CONCAT71((int7)((ulonglong)(param_1 + 0x150) >> 8),1),lVar5
                        ,lVar7,param_1 + 0x150,param_1 + 0x168,param_1 + 0xd8,param_1 + 0x158,iVar6)
          ;
        }
        iVar6 = iVar4;
      } while (iVar4 < *(int *)(param_1 + 0x188));
      return;
    }
  }
  *(undefined1 *)(param_1 + 400) = 1;
  FUN_143072310(param_1 + 0x178,param_1 + 8);
  return;
}



// FUNCTION 143090e40 FUN_143090e40 body=648 status=ok
// SIG undefined FUN_143090e40(void)

void FUN_143090e40(longlong *param_1,byte param_2,byte param_3,byte param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  uint uVar6;
  longlong local_18 [2];
  
  uVar6 = (uint)param_2;
  if ((((((int)uVar6 < (int)param_1[0xd7]) && ((int)(uint)param_3 < (int)param_1[0xd4])) &&
       (lVar2 = *(longlong *)(param_1[0xd3] + 8 + (ulonglong)param_3 * 0x48), lVar2 != 0)) &&
      ((param_1[0xff] == DAT_146b479c8 || (*(byte *)(param_1 + 0xd2) != param_3)))) &&
     ((param_1[0xff] != DAT_146b479c8 || (*(byte *)((longlong)param_1 + 0x67a) != param_3)))) {
    if ((lVar2 != 0) && (cVar4 = FUN_1430c1cb0(lVar2), cVar4 == '\0')) {
      bVar1 = *(byte *)(param_1 + 0xd2);
      if ((int)param_1[0xd4] <= (int)(uint)bVar1) {
        return;
      }
      if (*(longlong *)(param_1[0xd3] + 8 + (ulonglong)bVar1 * 0x48) == 0) {
        return;
      }
      plVar5 = *(longlong **)(param_1[0xd3] + 0x28 + (ulonglong)bVar1 * 0x48);
      if (plVar5 == (longlong *)0x0) {
        return;
      }
      (**(code **)(*plVar5 + 0x418))();
      return;
    }
    if ((*(byte *)(param_1 + 0x25) < 3) && (cVar4 = FUN_14307eb30(param_1), cVar4 != '\0')) {
      FUN_1430b4960(param_1,param_2,param_3,param_4);
    }
    if ((int)uVar6 < (int)param_1[0xd7]) {
      plVar5 = (longlong *)param_1[0xd6];
      if ((longlong *)param_1[0xd6] == (longlong *)0x0) {
        plVar5 = param_1 + 0xd5;
      }
      cVar4 = *(char *)((longlong)plVar5 + (ulonglong)param_2);
    }
    else {
      cVar4 = -1;
    }
    if (cVar4 == (char)param_1[0xd2]) {
      lVar2 = param_1[0xff];
      if ((lVar2 == DAT_146b479c8) && (DAT_146b479a0 != lVar2)) {
        *(byte *)(param_1 + 0xfd) = *(byte *)(param_1 + 0xfd) | 1;
        (**(code **)(*param_1 + 0xac8))(param_1,&DAT_146b479a0);
        lVar3 = param_1[0xff];
        *(byte *)(param_1 + 0xfd) = *(byte *)(param_1 + 0xfd) & 0xfe;
        if (lVar3 == lVar2) {
          param_1[0xff] = DAT_146b479a0;
          local_18[0] = lVar3;
          (**(code **)(*param_1 + 0xac0))(param_1,local_18);
        }
      }
      if (*(byte *)(param_1 + 0xd2) != param_3) {
        *(byte *)((longlong)param_1 + 0x679) = *(byte *)((longlong)param_1 + 0x679) & 0xfe;
        *(byte *)((longlong)param_1 + 0x679) = *(byte *)((longlong)param_1 + 0x679) | param_4;
        *(byte *)((longlong)param_1 + 0x67a) = param_3;
        lVar2 = param_1[0xff];
        *(byte *)(param_1 + 0xcf) = param_2;
        if (DAT_146b479c8 != lVar2) {
          *(byte *)(param_1 + 0xfd) = *(byte *)(param_1 + 0xfd) | 1;
          (**(code **)(*param_1 + 0xac8))(param_1,&DAT_146b479c8);
          local_18[0] = param_1[0xff];
          *(byte *)(param_1 + 0xfd) = *(byte *)(param_1 + 0xfd) & 0xfe;
          if (local_18[0] == lVar2) {
            param_1[0xff] = DAT_146b479c8;
            (**(code **)(*param_1 + 0xac0))(param_1,local_18);
          }
        }
      }
    }
    else if ((int)uVar6 < (int)param_1[0xd7]) {
      plVar5 = (longlong *)param_1[0xd6];
      if ((longlong *)param_1[0xd6] == (longlong *)0x0) {
        plVar5 = param_1 + 0xd5;
      }
      *(byte *)((longlong)plVar5 + (ulonglong)param_2) = param_3;
    }
  }
  return;
}



// FUNCTION 1430910d0 FUN_1430910d0 body=653 status=ok
// SIG undefined FUN_1430910d0(void)

void FUN_1430910d0(longlong *param_1)

{
  undefined1 uVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined4 uVar13;
  longlong local_res8;
  
  *(byte *)((longlong)param_1 + 0x679) = *(byte *)((longlong)param_1 + 0x679) & 0xfe;
  plVar12 = (longlong *)0x0;
  uVar8 = (ulonglong)*(byte *)(param_1 + 0xd2);
  param_1[0xd1] = 0;
  if ((((int)(uint)*(byte *)(param_1 + 0xd2) < (int)param_1[0xd4]) &&
      (*(longlong *)(param_1[0xd3] + 8 + uVar8 * 0x48) != 0)) &&
     (lVar7 = *(longlong *)(param_1[0xd3] + 0x20 + uVar8 * 0x48), lVar7 != 0)) {
    cVar3 = FUN_14309f7d0(lVar7,1);
    uVar8 = (ulonglong)*(byte *)(param_1 + 0xd2);
  }
  else {
    cVar3 = '\0';
  }
  if (((char)param_1[0x25] == '\x03') ||
     (((longlong *)param_1[0x2a] != (longlong *)0x0 &&
      (cVar4 = (**(code **)(*(longlong *)param_1[0x2a] + 0x778))(), cVar4 != '\0')))) {
    uVar1 = *(undefined1 *)((longlong)param_1 + 0x67a);
    if ((int)(uint)*(byte *)(param_1 + 0xcf) < (int)param_1[0xd7]) {
      plVar9 = (longlong *)param_1[0xd6];
      if ((longlong *)param_1[0xd6] == (longlong *)0x0) {
        plVar9 = param_1 + 0xd5;
      }
      *(undefined1 *)((longlong)plVar9 + (ulonglong)*(byte *)(param_1 + 0xcf)) = uVar1;
      uVar1 = *(undefined1 *)((longlong)param_1 + 0x67a);
    }
    FUN_14308b050(param_1,uVar1);
  }
  if ((cVar3 != '\0') && ((char)param_1[0xde] == '\0')) {
    bVar2 = *(byte *)(param_1 + 0xd2);
    plVar9 = plVar12;
    if (((int)(uint)bVar2 < (int)param_1[0xd4]) &&
       (*(longlong *)(param_1[0xd3] + 8 + (ulonglong)bVar2 * 0x48) != 0)) {
      plVar9 = *(longlong **)(param_1[0xd3] + 0x20 + (ulonglong)bVar2 * 0x48);
    }
    plVar10 = plVar12;
    if (((int)uVar8 < (int)param_1[0xd4]) && (*(longlong *)(param_1[0xd3] + 8 + uVar8 * 0x48) != 0))
    {
      plVar10 = *(longlong **)(param_1[0xd3] + 0x20 + uVar8 * 0x48);
    }
    if (plVar9 != plVar10) {
      if (plVar9 != (longlong *)0x0) {
        if (plVar10 == (longlong *)0x0) goto LAB_143091288;
        uVar13 = 0;
        if (((*(char *)((longlong)plVar9 + 0x1ac) == '\0') &&
            (*(char *)((longlong)plVar10 + 0x1ac) == '\0')) && (param_1[0xd0] != 0)) {
          local_res8 = param_1[0xd0];
          uVar5 = AActor::GetWorldTimerManager(param_1);
          uVar6 = FTimerManager::FindTimer(uVar5,&local_res8,0);
          uVar13 = FTimerManager::InternalGetTimerRemaining(uVar5,uVar6);
        }
        (**(code **)(*plVar9 + 0x408))(plVar9,plVar10,uVar13);
      }
      if (plVar10 != (longlong *)0x0) {
        FUN_1430a4a10(plVar10);
      }
    }
  }
LAB_143091288:
  plVar9 = (longlong *)param_1[0xe0];
  plVar10 = (longlong *)((longlong)(int)param_1[0xe1] & 0x1fffffffffffffff);
  if (plVar9 + (int)param_1[0xe1] < plVar9) {
    plVar10 = plVar12;
  }
  plVar11 = plVar12;
  if (plVar10 != (longlong *)0x0) {
    do {
      if (*plVar9 != 0) {
        FUN_14307fec0(*plVar9,(char)param_1[0xd2]);
      }
      plVar9 = plVar9 + 1;
      plVar11 = (longlong *)((longlong)plVar11 + 1);
    } while (plVar11 != plVar10);
  }
  plVar9 = (longlong *)param_1[0xe2];
  plVar10 = (longlong *)((longlong)(int)param_1[0xe3] & 0x1fffffffffffffff);
  if (plVar9 + (int)param_1[0xe3] < plVar9) {
    plVar10 = plVar12;
  }
  if (plVar10 != (longlong *)0x0) {
    do {
      if (*plVar9 != 0) {
        FUN_14307fec0(*plVar9,(char)param_1[0xd2]);
      }
      plVar9 = plVar9 + 1;
      plVar12 = (longlong *)((longlong)plVar12 + 1);
    } while (plVar12 != plVar10);
  }
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0xa2,0);
  lVar7 = (**(code **)(*param_1 + 0x670))(param_1);
  if (lVar7 != 0) {
    FUN_1430a1a60(lVar7,param_1);
  }
  return;
}



// FUNCTION 143091370 FUN_143091370 body=84 status=ok
// SIG undefined FUN_143091370(void)

void FUN_143091370(longlong *param_1)

{
  int iVar1;
  
  if ((*(byte *)((longlong)param_1 + 0x254) & 4) != 0) {
    iVar1 = (**(code **)(*param_1 + 0x420))();
    if (iVar1 != (int)param_1[0x47]) {
      iVar1 = FUN_14233f450(param_1);
      if (iVar1 == 3) {
        *(int *)(param_1 + 0x47) = (int)param_1[0x38];
                    /* WARNING: Could not recover jumptable at 0x0001430913b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x260))(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1430913d0 FUN_1430913d0 body=60 status=ok
// SIG undefined FUN_1430913d0(void)

void FUN_1430913d0(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  
  iVar1 = FUN_14233f450();
  if (iVar1 == 3) {
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x460))(param_1);
    if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001430913ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x410))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 143091410 FUN_143091410 body=1097 status=ok
// SIG undefined FUN_143091410(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143091410(longlong *param_1,float *param_2,undefined8 *param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 *param_7,undefined8 *param_8)

{
  float fVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  float *pfVar11;
  longlong *plVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 local_res8;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  float local_a4;
  undefined8 local_98;
  float local_90;
  undefined8 local_88;
  float local_80;
  undefined8 local_78;
  float local_70;
  undefined8 local_68;
  float fStack_60;
  float fStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  
  if (param_1 != (longlong *)0x0) {
    lVar6 = (**(code **)(*param_1 + 0x148))();
    uVar7 = FUN_1429f6c00();
    lVar8 = (**(code **)(*param_1 + 0x628))(param_1,uVar7);
    if ((lVar6 != 0) && (lVar8 != 0)) {
      if ((param_1[0x2d] != 0) && (*(longlong *)(param_1[0x2d] + 400) != 0)) {
        FUN_1422279d0(param_1,&DAT_146532190);
      }
      if (((((*param_2 <= -DAT_14678c800) || (DAT_14678c800 <= *param_2)) ||
           (param_2[1] <= -DAT_14678c804)) ||
          ((DAT_14678c804 <= param_2[1] || (param_2[2] <= -DAT_14678c808)))) ||
         (DAT_14678c808 <= param_2[2])) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      local_88 = _DAT_1468b5d90;
      local_80 = DAT_1468b5d98;
      if (!bVar3) {
        plVar9 = (longlong *)FUN_140a63ba0(param_1);
        plVar12 = param_1;
        if (plVar9 != (longlong *)0x0) {
          plVar12 = plVar9;
        }
        lVar6 = plVar12[0x2d];
        if (lVar6 == 0) {
          uVar13 = (undefined4)DAT_1468b5da0;
          uVar14 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
          local_b0 = DAT_1468b5da8;
        }
        else {
          fVar1 = *(float *)(lVar6 + 0x210);
          local_68 = *(undefined8 *)(lVar6 + 0x210);
          fStack_60 = *(float *)(lVar6 + 0x218);
          fStack_5c = *(float *)(lVar6 + 0x21c);
          auVar2._4_4_ = -(uint)(*(float *)(lVar6 + 0x214) != *(float *)(lVar6 + 0x254));
          auVar2._0_4_ = -(uint)(fVar1 != *(float *)(lVar6 + 0x250));
          auVar2._8_4_ = -(uint)(fStack_60 != *(float *)(lVar6 + 600));
          auVar2._12_4_ = -(uint)(fStack_5c != *(float *)(lVar6 + 0x25c));
          iVar5 = movmskps((int)plVar9,auVar2);
          if (iVar5 != 0) {
            *(float *)(lVar6 + 0x250) = fVar1;
            *(float *)(lVar6 + 0x254) = *(float *)(lVar6 + 0x214);
            *(float *)(lVar6 + 600) = fStack_60;
            *(float *)(lVar6 + 0x25c) = fStack_5c;
            puVar10 = (undefined8 *)FQuat::Rotator(&local_68,&local_98);
            *(undefined8 *)(lVar6 + 0x260) = *puVar10;
            *(undefined4 *)(lVar6 + 0x268) = *(undefined4 *)(puVar10 + 1);
          }
          uVar13 = (undefined4)*(undefined8 *)(lVar6 + 0x260);
          uVar14 = (undefined4)((ulonglong)*(undefined8 *)(lVar6 + 0x260) >> 0x20);
          local_b0 = *(undefined4 *)(lVar6 + 0x268);
        }
        local_b8 = CONCAT44(uVar14,uVar13);
        local_ac = local_b8;
        local_a4 = (float)local_b0;
        pfVar11 = (float *)FRotator::Vector(&local_ac,&local_78);
        local_80 = DAT_1468b5d98;
        local_88 = _DAT_1468b5d90;
        fVar1 = pfVar11[2];
        lVar6 = plVar12[0x2d];
        if (lVar6 == 0) {
          local_ac = _DAT_1468b5d90;
          puVar10 = &local_ac;
          local_a4 = DAT_1468b5d98;
        }
        else {
          puVar10 = &local_b8;
          local_b0 = *(undefined4 *)(lVar6 + 0x228);
          local_b8 = *(undefined8 *)(lVar6 + 0x220);
        }
        local_ac = *puVar10;
        local_a4 = *(float *)(puVar10 + 1);
        *(ulonglong *)param_2 =
             CONCAT44((float)((ulonglong)local_ac >> 0x20) + pfVar11[1] * 1000.0,
                      (float)local_ac + *pfVar11 * 1000.0);
        param_2[2] = local_a4 + fVar1 * 1000.0;
      }
      lVar6 = param_1[0x2d];
      local_res8 = CONCAT44(local_res8._4_4_,0x3f800000);
      if (lVar6 == 0) {
        local_a4 = local_80;
        puVar10 = &local_ac;
        local_ac = local_88;
      }
      else {
        puVar10 = &local_b8;
        local_b0 = *(undefined4 *)(lVar6 + 0x228);
        local_b8 = *(undefined8 *)(lVar6 + 0x220);
      }
      local_58 = *param_8;
      local_50 = *(undefined4 *)(param_8 + 1);
      local_48 = *param_7;
      local_40 = *(undefined4 *)(param_7 + 1);
      fStack_60 = *(float *)(param_3 + 1);
      local_70 = param_2[2];
      local_90 = *(float *)(puVar10 + 1);
      local_68 = *param_3;
      local_78 = *(undefined8 *)param_2;
      local_98 = *puVar10;
      FUN_14306d000(param_1,&local_88,&local_res8,&local_98,&local_78,&local_68,param_4,param_5,
                    param_6,&local_48,&local_58);
      plVar12 = *(longlong **)(lVar8 + 0x180);
      *(undefined8 *)(lVar8 + 0x18c) = local_88;
      *(undefined4 *)(lVar8 + 0x1dc) = (undefined4)local_res8;
      *(float *)(lVar8 + 0x194) = local_80;
      if (plVar12 != (longlong *)0x0) {
        local_res8 = 0;
        cVar4 = (**(code **)(*plVar12 + 0x400))(plVar12,0);
        if (cVar4 != '\0') {
          local_98 = local_88;
          local_90 = local_80;
          local_res8 = 0;
          FUN_142717fd0(*(undefined8 *)(lVar8 + 0x180),&local_98,0,0);
        }
      }
      lVar6 = FUN_1430a9310();
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        *(undefined4 *)(lVar8 + 0x2c0) = *(undefined4 *)(lVar8 + 0x1dc);
      }
    }
  }
  return;
}



// FUNCTION 143091860 FUN_143091860 body=1487 status=ok
// SIG undefined FUN_143091860(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_143091860(undefined8 param_1,longlong *param_2)

{
  longlong *_Src;
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  undefined1 auStack_518 [32];
  undefined4 local_4f8;
  undefined4 local_4f4;
  undefined1 local_4e8 [560];
  longlong local_2b8 [2];
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  uint uStack_29c;
  undefined8 local_298;
  undefined8 uStack_290;
  uint local_288;
  uint uStack_284;
  uint uStack_280;
  uint uStack_27c;
  longlong local_278;
  undefined8 uStack_270;
  longlong local_268;
  longlong local_260;
  undefined8 local_258;
  undefined2 local_250;
  undefined8 local_248;
  longlong lStack_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined2 local_220;
  undefined4 local_21c;
  undefined2 local_218;
  undefined1 local_216;
  undefined8 local_210;
  undefined1 local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  longlong local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  longlong local_1e8;
  longlong *local_1e0;
  int local_1d8;
  longlong local_1d0 [32];
  longlong *local_d0;
  longlong local_c8;
  undefined1 local_c0 [32];
  undefined1 *local_a0;
  undefined8 local_98;
  ulonglong local_88;
  
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_518;
  if ((param_2[1] != 0) && (*param_2 != 0)) {
    lVar8 = UInputKeySelector::GetPrivateStaticClass();
    for (lVar9 = *param_2; lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 0x30)) {
      if (lVar9 == lVar8) {
        if (*param_2 == 0) break;
        if (param_2[3] == 0) {
          lVar9 = FUN_142ddddc0(param_2[1]);
          if (lVar9 != 0) {
            lVar9 = FUN_142dcd660(lVar9,0);
            param_2[3] = lVar9;
          }
          if (param_2[3] == 0) break;
        }
        FWeakObjectPtr::operator=(&local_4f8);
        lVar2 = param_2[4];
        lVar9 = param_2[5];
        local_288 = _DAT_146b47840 & _DAT_146b47850;
        uStack_284 = uRam0000000146b47844 & uRam0000000146b47854;
        uStack_280 = uRam0000000146b47848 & uRam0000000146b47858;
        uStack_27c = uRam0000000146b4784c & uRam0000000146b4785c;
        lVar3 = param_2[6];
        lVar8 = param_2[8];
        lVar4 = param_2[9];
        uVar7 = *(undefined4 *)((longlong)param_2 + 0x34);
        lVar5 = param_2[7];
        uVar1 = *(undefined4 *)((longlong)param_2 + 0x3c);
        local_2a8 = 0;
        uStack_2a4 = 0;
        uStack_2a0 = 0;
        uStack_29c = uRam0000000146b4784c;
        local_278 = 0;
        uStack_270 = 0;
        local_248 = 0;
        lStack_240 = 0;
        local_2b8[0] = 0;
        local_298 = 0;
        uStack_290 = 0;
        local_268 = 0;
        local_260 = 0;
        local_258 = 0;
        local_250 = 0;
        local_238 = 0;
        local_230 = 0;
        local_228 = 1;
        local_220 = 0;
        local_21c = 0;
        local_218 = 0;
        local_216 = 1;
        local_210 = 0;
        local_208 = 0;
        FWeakObjectPtr::operator=(&local_200,0);
        local_1f8 = 0;
        FWeakObjectPtr::operator=(&local_1f0,0);
        local_1e8 = 0;
        local_1e0 = (longlong *)0x0;
        local_1d8 = 0;
        local_d0 = (longlong *)0x0;
        local_c8 = 0;
        local_a0 = (undefined1 *)0x0;
        local_98 = 0;
        lVar14 = 0;
        if (*param_2 != 0) {
          lVar10 = UInputKeySelector::GetPrivateStaticClass();
          for (lVar15 = *param_2; (lVar14 = 0, lVar15 != 0 && (lVar14 = *param_2, lVar15 != lVar10))
              ; lVar15 = *(longlong *)(lVar15 + 0x30)) {
          }
        }
        local_268 = param_2[2];
        _Src = param_2 + 0xb;
        local_278 = param_2[1];
        local_230 = CONCAT44(0x3dcccccd,(undefined4)local_230);
        local_228 = *(undefined8 *)((longlong)param_2 + 0x4c);
        local_250 = CONCAT11(1,(undefined1)local_250);
        local_220 = CONCAT11(1,(undefined1)local_220);
        local_2b8[0] = lVar14;
        lStack_240 = local_278;
        if (local_1d0 != _Src) {
          plVar11 = local_1d0;
          if (local_d0 != (longlong *)0x0) {
            plVar11 = local_d0;
          }
          if ((int)local_c8 != 0) {
            plVar11 = plVar11 + 2;
            iVar16 = (int)local_c8;
            do {
              if (*plVar11 != 0) {
                FMemory::Free();
              }
              plVar11 = plVar11 + 4;
              iVar16 = iVar16 + -1;
            } while (iVar16 != 0);
          }
          plVar11 = (longlong *)param_2[0x2b];
          if (plVar11 == (longlong *)0x0) {
            _guard_xfg_dispatch_icall_nop(local_1d0,_Src,0x100);
          }
          if (local_d0 != (longlong *)0x0) {
            FMemory::Free();
            plVar11 = (longlong *)param_2[0x2b];
          }
          param_2[0x2b] = 0;
          local_c8 = param_2[0x2c];
          param_2[0x2c] = 0;
          local_d0 = plVar11;
        }
        uVar6 = local_98;
        lVar15 = (longlong)(int)local_98;
        lVar14 = param_2[3];
        iVar16 = (int)local_98 + 1;
        local_98 = CONCAT44(local_98._4_4_,iVar16);
        if (local_98._4_4_ < iVar16) {
          TArray<FAnimNode_3DBlend::FActiveSample,TInlineAllocator<4,FDefaultAllocator>_>::
          ResizeGrow(local_c0,uVar6 & 0xffffffff);
        }
        puVar13 = local_c0;
        if (local_a0 != (undefined1 *)0x0) {
          puVar13 = local_a0;
        }
        *(longlong *)(puVar13 + lVar15 * 8) = lVar14;
        local_200 = (undefined4)param_2[0x2d];
        local_1fc = *(undefined4 *)((longlong)param_2 + 0x16c);
        local_1f8 = param_2[0x2e];
        local_1f0 = (undefined4)param_2[0x2f];
        local_1ec = *(undefined4 *)((longlong)param_2 + 0x17c);
        local_1e8 = param_2[0x30];
        plVar11 = (longlong *)FMemory::Realloc(0,0x50);
        if (plVar11 == (longlong *)0x0) {
          if ((local_1d8 != 0) && (local_1e0 != (longlong *)0x0)) {
            (**(code **)(*local_1e0 + 0x28))(local_1e0,0);
            if (local_1e0 != (longlong *)0x0) {
              local_1e0 = (longlong *)FMemory::Realloc(local_1e0,0,0);
            }
            local_1d8 = 0;
          }
        }
        else {
          *plVar11 = (longlong)&PTR_GetPoolName_145a681f0;
          *(undefined4 *)(plVar11 + 1) = local_4f8;
          *(undefined4 *)((longlong)plVar11 + 0xc) = local_4f4;
          plVar11[3] = lVar9;
          *(longlong *)((longlong)plVar11 + 0x24) = lVar8;
          *(int *)(plVar11 + 4) = (int)lVar3;
          *(int *)((longlong)plVar11 + 0x2c) = (int)lVar4;
          *(undefined4 *)(plVar11 + 6) = uVar7;
          *(int *)((longlong)plVar11 + 0x34) = (int)lVar5;
          *(undefined4 *)(plVar11 + 7) = uVar1;
          plVar11[2] = lVar2;
          lVar9 = FDelegateHandle::GenerateNewID();
          plVar11[9] = lVar9;
          *plVar11 = (longlong)&PTR_GetPoolName_145a68238;
          FUN_14306f000(plVar11,&local_1e0);
        }
        if (plVar11 != (longlong *)0x0) {
          (**(code **)(*plVar11 + 0x28))(plVar11,0);
          lVar9 = FMemory::Realloc(plVar11,0,0);
          if (lVar9 != 0) {
            FMemory::Free(lVar9);
          }
        }
        uVar12 = FUN_1409f3990(local_4e8,local_2b8);
        uVar7 = FUN_1424ad6e0(param_2[1],uVar12);
        if (local_a0 != (undefined1 *)0x0) {
          FMemory::Free();
        }
        FUN_1409f5970(local_1d0);
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1e0);
        if (local_260 != 0) {
          FMemory::Free();
        }
        FUN_1409f5970(_Src);
        return uVar7;
      }
    }
  }
  FUN_14249d340(param_2 + 0x2f,0,0);
  FUN_1409f5970(param_2 + 0xb);
  return 0xffffffff;
}



// FUNCTION 143091e30 FUN_143091e30 body=322 status=ok
// SIG undefined FUN_143091e30(void)

void FUN_143091e30(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  byte bVar2;
  char cVar3;
  longlong *plVar4;
  byte bVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  FUN_1422406d0();
  if ((char)param_1[0xe4] != '\0') {
    plVar4 = (longlong *)param_1[0xe0];
    bVar5 = 0;
    uVar8 = 0;
    uVar7 = (longlong)(int)param_1[0xe1] & 0x1fffffffffffffff;
    if (plVar4 + (int)param_1[0xe1] < plVar4) {
      uVar7 = uVar8;
    }
    uVar6 = uVar8;
    if (uVar7 != 0) {
      do {
        plVar1 = (longlong *)*plVar4;
        if (plVar1 != (longlong *)0x0) {
          bVar2 = (**(code **)(*plVar1 + 0x290))(plVar1,param_2);
          bVar5 = bVar5 | bVar2;
        }
        plVar4 = plVar4 + 1;
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar7);
    }
    if (((longlong *)param_1[0x2a] != (longlong *)0x0) &&
       (cVar3 = (**(code **)(*(longlong *)param_1[0x2a] + 0x778))(), cVar3 != '\0')) {
      plVar4 = (longlong *)param_1[0xe2];
      uVar7 = (longlong)(int)param_1[0xe3] & 0x1fffffffffffffff;
      if (plVar4 + (int)param_1[0xe3] < plVar4) {
        uVar7 = uVar8;
      }
      if (uVar7 != 0) {
        do {
          plVar1 = (longlong *)*plVar4;
          if (plVar1 != (longlong *)0x0) {
            bVar2 = (**(code **)(*plVar1 + 0x290))(plVar1,param_2);
            bVar5 = bVar5 | bVar2;
          }
          plVar4 = plVar4 + 1;
          uVar8 = uVar8 + 1;
        } while (uVar8 != uVar7);
      }
    }
    if ((bVar5 == 0) && (cVar3 = (**(code **)(*param_1 + 0xad0))(param_1), cVar3 == '\0')) {
      AActor::SetActorTickEnabled(param_1,0);
    }
  }
  return;
}



// FUNCTION 143091f80 FUN_143091f80 body=388 status=ok
// SIG undefined FUN_143091f80(void)

void FUN_143091f80(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  byte bVar2;
  float *pfVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 local_res8 [8];
  
  fVar9 = *(float *)(param_3 + 0x38);
  if (*(char *)(param_1 + 0x7c) != '\0') {
    bVar2 = UHMWeakSpotLogicComponent::IsWeakSpotActive(param_2);
    fVar9 = fVar9 + (float)bVar2 * 0.003937008;
  }
  lVar4 = *(longlong *)(param_1 + 0x30);
  fVar6 = 0.0;
  fVar7 = 0.0;
  lVar1 = lVar4 + (longlong)*(int *)(param_1 + 0x38) * 0x18;
  for (; lVar4 != lVar1; lVar4 = lVar4 + 0x18) {
    pfVar3 = (float *)FUN_142dac000(lVar4,local_res8,fVar9);
    fVar6 = fVar6 + *pfVar3;
    fVar7 = fVar7 + pfVar3[1];
  }
  fVar9 = *(float *)(param_1 + 0x68);
  fVar8 = *(float *)(param_1 + 0x40);
  if (0.0 < fVar9) {
    if (*(char *)(param_1 + 0x6c) != '\0') {
      fVar5 = (float)FUN_14304ba60(param_2);
      fVar9 = fVar9 * fVar5;
    }
    if (*(float *)(param_3 + 0x38) < fVar9) {
      local_res8[0] = *(undefined1 *)(param_1 + 0x70);
      fVar9 = (float)UKismetMathLibrary::Ease();
      fVar8 = fVar8 * fVar9;
    }
  }
  *(float *)(param_3 + 0x2c) = fVar6 * fVar8 + *(float *)(param_3 + 0x2c);
  *(float *)(param_3 + 0x30) = fVar7 * fVar8 + *(float *)(param_3 + 0x30);
  return;
}



// FUNCTION 143092110 FUN_143092110 body=992 status=ok
// SIG undefined FUN_143092110(void)

void FUN_143092110(longlong *param_1,float param_2)

{
  float fVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 *puVar12;
  int iVar13;
  longlong lVar14;
  undefined8 *puVar15;
  int iVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  plVar10 = (longlong *)0x0;
  if ((0 < (int)param_1[0x11]) || (uVar9 = *(uint *)(param_1 + 0xb), (uVar9 & 0x40) != 0)) {
    if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
      plVar10 = (longlong *)param_1[4];
    }
    lVar8 = (**(code **)(*plVar10 + 0x148))();
    fVar1 = *(float *)(lVar8 + 0x790);
    lVar8 = param_1[0xe];
    lVar11 = (longlong)(int)param_1[0xf] * 0x20 + lVar8;
    for (; lVar8 != lVar11; lVar8 = lVar8 + 0x20) {
      *(undefined4 *)(lVar8 + 0x10) = 0;
      *(undefined4 *)(lVar8 + 0x14) = 0x3f800000;
    }
    *(uint *)(param_1 + 0xb) = *(uint *)(param_1 + 0xb) | 0x40;
    iVar13 = (int)param_1[0x11] + -1;
    uVar9 = *(uint *)(param_1 + 0xb);
    if (-1 < iVar13) {
      plVar10 = param_1 + 0x10;
      lVar11 = (longlong)iVar13 * 0x68;
      lVar8 = lVar11;
      do {
        lVar4 = *plVar10;
        lVar14 = (longlong)*(int *)(lVar11 + lVar4) * 0x20 + param_1[0xe];
        *(byte *)(lVar14 + 8) = *(byte *)(lVar14 + 8) | 1;
        fVar18 = *(float *)(lVar11 + 0x50 + lVar4);
        fVar20 = *(float *)(lVar11 + 0x54 + lVar4);
        fVar19 = fVar1 - fVar18;
        if (fVar19 < fVar20) {
LAB_143092245:
          lVar5 = *(longlong *)(lVar11 + 0x48 + lVar4);
          if (lVar5 != 0) {
            uVar17 = UCurveFloat::GetFloatValue(lVar5,fVar19 * *(float *)(lVar11 + 0x58 + lVar4));
            *(undefined4 *)(lVar11 + 100 + lVar4) = uVar17;
          }
          if ((*(byte *)(lVar11 + 9 + lVar4) & 4) != 0) {
            fVar18 = (float)FUN_142c98860(lVar4 + 0x10 + lVar11,param_1[4]);
            bVar2 = *(byte *)(lVar11 + 9 + lVar4);
            if ((bVar2 & 8) != 0) {
              fVar18 = fVar18 * *(float *)(lVar11 + 100 + lVar4);
            }
            *(float *)(lVar11 + 100 + lVar4) = fVar18;
            if ((bVar2 & 0x10) != 0) {
              *(float *)(lVar11 + 100 + lVar4) = fVar18 * param_2;
            }
          }
          fVar18 = *(float *)(lVar11 + 0x60 + lVar4);
          if ((0.0 < fVar18) && (fVar18 < *(float *)(lVar11 + 100 + lVar4))) {
            *(float *)(lVar11 + 100 + lVar4) = fVar18;
          }
LAB_1430922b2:
          cVar3 = *(char *)(lVar11 + 8 + lVar4);
          if (cVar3 == '\0') {
            *(float *)(lVar14 + 0x14) = *(float *)(lVar11 + 100 + lVar4) * *(float *)(lVar14 + 0x14)
            ;
          }
          else if (cVar3 == '\x01') {
            *(float *)(lVar14 + 0x10) = *(float *)(lVar11 + 100 + lVar4) + *(float *)(lVar14 + 0x10)
            ;
          }
          else if (cVar3 == '\x02') {
            *(undefined4 *)(lVar14 + 0x18) = *(undefined4 *)(lVar11 + 100 + lVar4);
          }
          else if (cVar3 == '\x03') {
            *(float *)(lVar14 + 0x18) = *(float *)(lVar11 + 100 + lVar4) + *(float *)(lVar14 + 0x18)
            ;
          }
        }
        else {
          if ((*(byte *)(lVar11 + 9 + lVar4) & 1) != 0) {
            fVar19 = fVar19 - fVar20;
            *(float *)(lVar11 + 0x50 + lVar4) = fVar20 + fVar18;
            goto LAB_143092245;
          }
          fVar18 = *(float *)(lVar11 + 0x5c + lVar4);
          if (0.0 < fVar18) {
            fVar20 = *(float *)(lVar11 + 100 + lVar4);
            if (*(char *)(lVar11 + 8 + lVar4) != '\0') {
              fVar20 = fVar20 - fVar18 * param_2;
              *(float *)(lVar11 + 100 + lVar4) = fVar20;
              if (0.0 < fVar20) goto LAB_1430922b2;
              goto LAB_143092325;
            }
            fVar18 = (float)FMath::FInterpConstantTo(fVar20,0x3f800000,param_2,fVar18);
            *(float *)(lVar11 + 100 + lVar4) = fVar18;
            if (1.0 <= fVar18) goto LAB_143092325;
            goto LAB_1430922b2;
          }
LAB_143092325:
          iVar7 = (int)param_1[0x11];
          iVar16 = (iVar7 - iVar13) + -1;
          if (0 < iVar16) {
            iVar16 = 1;
          }
          if (iVar16 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*plVar10 + lVar8),
                       (void *)((longlong)(iVar7 - iVar16) * 0x68 + *plVar10),
                       (longlong)iVar16 * 0x68);
            iVar7 = (int)param_1[0x11];
          }
          *(int *)(param_1 + 0x11) = iVar7 + -1;
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,FDefaultAllocator>::
          ResizeShrink(plVar10);
        }
        lVar8 = lVar8 + -0x68;
        lVar11 = lVar11 + -0x68;
        iVar13 = iVar13 + -1;
      } while (-1 < iVar13);
      uVar9 = *(uint *)(param_1 + 0xb);
    }
  }
  if ((uVar9 & 0x40) != 0) {
    plVar10 = (longlong *)param_1[7];
    if ((plVar10 != (longlong *)0x0) && ((uVar9 & 1) == 0)) {
      lVar8 = plVar10[0xdf];
      iVar7 = (**(code **)(*plVar10 + 0x6c8))(plVar10);
      iVar13 = 0;
      if (iVar7 < (int)lVar8) {
        lVar8 = ((longlong *)param_1[7])[0xdf];
        iVar7 = (**(code **)(*(longlong *)param_1[7] + 0x6c8))();
        iVar7 = (int)lVar8 - iVar7;
        if (-1 < iVar7) {
          iVar13 = iVar7;
        }
      }
      lVar8 = (**(code **)(*(longlong *)param_1[7] + 0x598))((longlong *)param_1[7],iVar13);
      if (lVar8 != 0) {
        lVar11 = FUN_1429ba110();
        if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (bVar6) {
          puVar12 = (undefined8 *)param_1[0xe];
          puVar15 = puVar12 + (longlong)(int)param_1[0xf] * 4;
          for (; puVar12 != puVar15; puVar12 = puVar12 + 4) {
            if ((*(byte *)(puVar12 + 1) & 1) != 0) {
              FUN_1425a2750(lVar8,*puVar12,
                            (*(float *)(puVar12 + 3) + *(float *)(puVar12 + 2)) *
                            *(float *)((longlong)puVar12 + 0x14));
              *(byte *)(puVar12 + 1) = *(byte *)(puVar12 + 1) & 0xfe;
            }
          }
        }
      }
    }
    *(uint *)(param_1 + 0xb) = *(uint *)(param_1 + 0xb) & 0xffffffbf;
  }
                    /* WARNING: Could not recover jumptable at 0x0001430924e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x298))(param_1);
  return;
}



// FUNCTION 1430924f0 FUN_1430924f0 body=999 status=ok
// SIG undefined FUN_1430924f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1430924f0(longlong *param_1,float param_2)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  longlong lVar4;
  undefined8 *puVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 local_68 [8];
  float local_60;
  
  FUN_142357eb0();
  if (((longlong *)param_1[0x23] != (longlong *)0x0) &&
     (lVar4 = (**(code **)(*(longlong *)param_1[0x23] + 0x148))(), lVar4 != 0)) {
    pfVar1 = (float *)((longlong)param_1 + 0x19c);
    pfVar2 = (float *)(param_1 + 0x35);
    fVar8 = *(float *)(lVar4 + 0x790);
    puVar5 = (undefined8 *)FMath::RInterpTo(local_68,pfVar1,pfVar2,param_2,(int)param_1[0x38]);
    *(undefined8 *)pfVar1 = *puVar5;
    *(undefined4 *)((longlong)param_1 + 0x1a4) = *(undefined4 *)(puVar5 + 1);
    if ((char)param_1[0x3a] != '\0') {
      fVar6 = *(float *)((longlong)param_1 + 0x1cc) + *(float *)(param_1 + 0x39);
      fVar11 = fVar6 + *(float *)((longlong)param_1 + 0x1c4);
      if (fVar8 < fVar11) {
        if (fVar6 <= fVar8) {
          fVar6 = DAT_1468b5da0._4_4_ - *(float *)((longlong)param_1 + 0x1ac);
          param_2 = param_2 / (fVar11 - fVar8);
          if (1.0 <= param_2) {
            param_2 = 1.0;
          }
          auVar7._4_4_ = fVar6;
          auVar7._0_4_ = (float)DAT_1468b5da0 - *pfVar2;
          fVar8 = (float)DAT_146b47810;
          fVar11 = DAT_146b47810._4_4_;
          fVar3 = DAT_146b47810._8_4_;
          auVar7._8_4_ = DAT_1468b5da8 - *(float *)(param_1 + 0x36);
          auVar7._12_4_ = 0;
          auVar7 = divps(auVar7,_DAT_146b47810);
          fVar9 = ((float)DAT_1468b5da0 - *pfVar2) - (float)(int)auVar7._0_4_ * fVar8;
          fVar6 = fVar6 - (float)(int)auVar7._4_4_ * fVar11;
          fVar10 = (DAT_1468b5da8 - *(float *)(param_1 + 0x36)) - (float)(int)auVar7._8_4_ * fVar3;
          fVar9 = (float)(((uint)(fVar9 + fVar8) ^ (uint)fVar9) & -(uint)(0.0 <= fVar9) ^
                         (uint)(fVar9 + fVar8));
          fVar6 = (float)(((uint)(fVar6 + fVar11) ^ (uint)fVar6) & -(uint)(0.0 <= fVar6) ^
                         (uint)(fVar6 + fVar11));
          fVar10 = (float)(((uint)(fVar10 + fVar3) ^ (uint)fVar10) & -(uint)(0.0 <= fVar10) ^
                          (uint)(fVar10 + fVar3));
          local_60 = (float)(((uint)(fVar10 - fVar3) ^ (uint)fVar10) &
                             -(uint)(fRam0000000146b47808 < fVar10) ^ (uint)fVar10) * param_2 +
                     *(float *)(param_1 + 0x36);
          *(ulonglong *)pfVar2 =
               CONCAT44((float)(((uint)(fVar6 - fVar11) ^ (uint)fVar6) &
                                -(uint)(fRam0000000146b47804 < fVar6) ^ (uint)fVar6) * param_2 +
                        *(float *)((longlong)param_1 + 0x1ac),
                        (float)(((uint)(fVar9 - fVar8) ^ (uint)fVar9) &
                                -(uint)(_DAT_146b47800 < fVar9) ^ (uint)fVar9) * param_2 + *pfVar2);
          *(float *)(param_1 + 0x36) = local_60;
        }
      }
      else {
        *(ulonglong *)pfVar2 = CONCAT44(DAT_1468b5da0._4_4_,(float)DAT_1468b5da0);
        *(float *)(param_1 + 0x36) = DAT_1468b5da8;
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1 + 0x2f,0);
      }
    }
    fVar8 = *pfVar1;
    fVar6 = (float)(int)(fVar8 * 0.0027777778) * 360.0;
    if (ABS(fVar8) < ABS(fVar6)) {
      fVar6 = fVar8;
    }
    fVar8 = fVar8 - fVar6;
    if (fVar8 < 0.0) {
      fVar8 = fVar8 + 360.0;
    }
    if (fVar8 == 0.0) {
      fVar8 = *(float *)(param_1 + 0x34);
      fVar6 = (float)(int)(fVar8 * 0.0027777778) * 360.0;
      if (ABS(fVar8) < ABS(fVar6)) {
        fVar6 = fVar8;
      }
      fVar8 = fVar8 - fVar6;
      if (fVar8 < 0.0) {
        fVar8 = fVar8 + 360.0;
      }
      if (fVar8 == 0.0) {
        fVar8 = *(float *)((longlong)param_1 + 0x1a4);
        fVar6 = (float)(int)(fVar8 * 0.0027777778) * 360.0;
        if (ABS(fVar8) < ABS(fVar6)) {
          fVar6 = fVar8;
        }
        fVar8 = fVar8 - fVar6;
        if (fVar8 < 0.0) {
          fVar8 = fVar8 + 360.0;
        }
        if (fVar8 == 0.0) {
          fVar8 = *pfVar2;
          fVar6 = (float)(int)(fVar8 * 0.0027777778) * 360.0;
          if (ABS(fVar8) < ABS(fVar6)) {
            fVar6 = fVar8;
          }
          fVar8 = fVar8 - fVar6;
          if (fVar8 < 0.0) {
            fVar8 = fVar8 + 360.0;
          }
          if (fVar8 == 0.0) {
            fVar8 = *(float *)((longlong)param_1 + 0x1ac);
            fVar6 = (float)(int)(fVar8 * 0.0027777778) * 360.0;
            if (ABS(fVar8) < ABS(fVar6)) {
              fVar6 = fVar8;
            }
            fVar8 = fVar8 - fVar6;
            if (fVar8 < 0.0) {
              fVar8 = fVar8 + 360.0;
            }
            if (fVar8 == 0.0) {
              fVar8 = *(float *)(param_1 + 0x36);
              fVar6 = (float)(int)(fVar8 * 0.0027777778) * 360.0;
              if (ABS(fVar8) < ABS(fVar6)) {
                fVar6 = fVar8;
              }
              fVar8 = fVar8 - fVar6;
              if (fVar8 < 0.0) {
                fVar8 = fVar8 + 360.0;
              }
              if (fVar8 == 0.0) {
                (**(code **)(*param_1 + 0x358))(param_1,0);
              }
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1430928e0 FUN_1430928e0 body=63 status=ok
// SIG undefined FUN_1430928e0(void)

void FUN_1430928e0(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  
  FUN_142357eb0();
  cVar1 = (**(code **)(*param_1 + 0x510))(param_1);
  if (cVar1 != '\0') {
    FUN_143087d90(param_1,param_2,1);
  }
  return;
}



// FUNCTION 143092920 FUN_143092920 body=771 status=ok
// SIG undefined FUN_143092920(void)

void FUN_143092920(longlong *param_1)

{
  int *piVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  undefined1 uVar11;
  float fVar12;
  undefined1 local_48 [4];
  undefined4 local_44;
  undefined1 local_40;
  int local_3c;
  
  FUN_142357eb0();
  lVar5 = FUN_14309ec50(param_1);
  if (lVar5 == 0) {
    return;
  }
  if ((*(char *)((longlong)param_1 + 0x2e2) != '\0') && (cVar3 = (char)param_1[0x57], cVar3 != '\0')
     ) {
    if (cVar3 == '\x01') {
      uVar7 = 10;
    }
    else if (cVar3 == '\x02') {
      uVar7 = 6;
    }
    else if (cVar3 == '\x03') {
      uVar7 = 7;
    }
    else {
      if (cVar3 != '\x04') goto LAB_14309299c;
      uVar7 = 8;
    }
    FUN_143083770(param_1,uVar7,lVar5);
  }
LAB_14309299c:
  if ((byte)((char)param_1[0x57] - 1U) < 2) {
    fVar12 = (float)FUN_1430774d0(param_1);
    if (1e-08 < ABS(fVar12 - *(float *)((longlong)param_1 + 0x2e4))) {
      uVar11 = 6;
      if ((char)param_1[0x57] == '\x02') {
        uVar11 = 2;
      }
      FUN_14308b1c0(param_1,fVar12,uVar11,lVar5);
      lVar6 = 0x218;
      if ((char)param_1[0x57] != '\x02') {
        lVar6 = 0x228;
      }
      pfVar9 = *(float **)(lVar6 + (longlong)param_1);
      pfVar8 = pfVar9 + (longlong)*(int *)(lVar6 + 8 + (longlong)param_1) * 4;
      if (pfVar9 != pfVar8) {
        pfVar10 = pfVar9 + 2;
        do {
          cVar3 = *(char *)(pfVar10 + -1);
          fVar2 = *(float *)((longlong)param_1 + 0x2e4);
          if (cVar3 == '\0') {
            if ((fVar12 < *pfVar9) && (*pfVar9 <= fVar2)) goto LAB_143092b32;
          }
          else if (cVar3 == '\x01') {
            if ((fVar12 <= *pfVar9) && (*pfVar9 < fVar2)) goto LAB_143092b32;
          }
          else if (cVar3 == '\x02') {
            if ((*pfVar9 < fVar12) && (fVar2 <= *pfVar9)) goto LAB_143092b32;
          }
          else if ((cVar3 == '\x03') && ((*pfVar9 <= fVar12 && (fVar2 < *pfVar9)))) {
LAB_143092b32:
            cVar3 = *(char *)((longlong)pfVar10 + -3);
            if (cVar3 == '\0') {
              lVar6 = UObject::FindFunction(param_1,*(undefined8 *)pfVar10);
              if ((lVar6 != 0) && (*(char *)(lVar6 + 0x8c) == '\0')) {
                (**(code **)(*param_1 + 0x208))(param_1,lVar6,0);
              }
            }
            else if ((byte)(cVar3 - 1U) < 2) {
              local_3c = 1 << (*(byte *)((longlong)param_1 + 0x2e3) & 0x1f);
              local_44 = 0;
              local_40 = 0;
              local_48[0] = uVar11;
              uVar7 = FUN_14309ec50(param_1);
              FUN_14308b3c0(uVar7,*(undefined8 *)pfVar10,cVar3 == '\x01',local_48);
            }
          }
          pfVar9 = pfVar9 + 4;
          pfVar10 = pfVar10 + 4;
        } while (pfVar9 != pfVar8);
      }
      FUN_1430948a0(param_1,lVar5);
      *(float *)((longlong)param_1 + 0x2e4) = fVar12;
    }
  }
  else if ((((*(byte *)(param_1 + 0x3a) & 0x10) != 0) && (param_1[0x58] != 0)) &&
          (param_1[0x59] != 0)) {
    piVar1 = (int *)(param_1[0x59] + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if ((0 < iVar4) && ((char)param_1[0x57] != '\0')) {
      FUN_1430948a0(param_1,lVar5);
    }
  }
  cVar3 = (**(code **)(*param_1 + 0x478))(param_1);
  if (cVar3 == '\0') {
    (**(code **)(*param_1 + 0x358))(param_1,0);
  }
  return;
}



// FUNCTION 143092c30 FUN_143092c30 body=1198 status=ok
// SIG undefined FUN_143092c30(void)

void FUN_143092c30(longlong *param_1,float param_2)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  
  FUN_142357eb0();
  if ((((*(byte *)(param_1 + 0x9c) & 1) != 0) && (0.0 < *(float *)(param_1 + 0xa3))) &&
     (fVar10 = *(float *)(param_1 + 0xa3) - param_2, *(float *)(param_1 + 0xa3) = fVar10,
     fVar10 <= 0.0)) {
    (**(code **)(*param_1 + 0x578))(param_1);
  }
  fVar10 = *(float *)(param_1 + 0xa4);
  if ((0.0 < *(float *)((longlong)param_1 + 0x264)) || (0.0 < *(float *)(param_1 + 0x4e))) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    uVar1 = *(uint *)(param_1 + 0x9c);
    plVar6 = (longlong *)FUN_1412996f0(param_1);
    iVar5 = FUN_142340f30(param_1);
    if ((iVar5 != 3) ||
       ((plVar6 != (longlong *)0x0 &&
        (cVar3 = (**(code **)(*plVar6 + 0x778))(plVar6), cVar3 != '\0')))) {
      bVar4 = (**(code **)(*param_1 + 0x408))(param_1);
      *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) & 0xfffffdff;
      *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) | (bVar4 & 1) << 9;
      if (((*(uint *)(param_1 + 0x9c) ^ uVar1) >> 9 & 1) != 0) {
        (**(code **)(*param_1 + 0x260))(param_1);
      }
    }
    fVar11 = 0.0;
    if ((*(uint *)(param_1 + 0x9c) >> 9 & 1) == 0) {
      if (*(float *)(param_1 + 0x4e) <= 0.0) {
        *(undefined4 *)(param_1 + 0xa4) = 0;
      }
      else {
        fVar11 = -1.0 / *(float *)(param_1 + 0x4e);
      }
    }
    else if (*(float *)((longlong)param_1 + 0x264) <= 0.0) {
      *(undefined4 *)(param_1 + 0xa4) = 0x3f800000;
    }
    else {
      fVar11 = 1.0 / *(float *)((longlong)param_1 + 0x264);
    }
    fVar11 = fVar11 * param_2 + *(float *)(param_1 + 0xa4);
    if (0.0 <= fVar11) {
      if (1.0 <= fVar11) {
        fVar11 = 1.0;
      }
    }
    else {
      fVar11 = 0.0;
    }
    *(float *)(param_1 + 0xa4) = fVar11;
    if ((*(uint *)(param_1 + 0x9c) >> 9 & 1) == 0) {
      if (*(int *)((longlong)param_1 + 0x4e4) == 1) {
        *(undefined4 *)((longlong)param_1 + 0x4e4) = 0;
        FUN_1430bf930(param_1);
        fVar11 = *(float *)(param_1 + 0xa4);
      }
      if ((fVar11 == 0.0) && (*(int *)((longlong)param_1 + 0x4e4) == 2)) {
        *(undefined4 *)((longlong)param_1 + 0x4e4) = 0;
        FUN_1430bf970(param_1);
      }
      else if ((0.0 < fVar11) && (*(int *)((longlong)param_1 + 0x4e4) != 2)) {
        *(undefined4 *)((longlong)param_1 + 0x4e4) = 2;
        FUN_1430bf8b0(param_1);
      }
    }
    else {
      if (*(int *)((longlong)param_1 + 0x4e4) == 2) {
        *(undefined4 *)((longlong)param_1 + 0x4e4) = 0;
        FUN_1430bf970(param_1);
        fVar11 = *(float *)(param_1 + 0xa4);
      }
      if ((fVar11 == 1.0) && (*(int *)((longlong)param_1 + 0x4e4) == 1)) {
        *(undefined4 *)((longlong)param_1 + 0x4e4) = 0;
        FUN_1430bf930(param_1);
      }
      else if ((fVar11 < 1.0) && (*(int *)((longlong)param_1 + 0x4e4) != 1)) {
        *(undefined4 *)((longlong)param_1 + 0x4e4) = 1;
        FUN_1430bf870(param_1);
      }
    }
    if ((((((longlong *)param_1[0x23] != (longlong *)0x0) &&
          (plVar6 = (longlong *)(**(code **)(*(longlong *)param_1[0x23] + 0x670))(),
          (*(byte *)(param_1 + 0x84) & 2) != 0)) && (param_1[0x85] != 0)) &&
        ((plVar6 != (longlong *)0x0 && ((longlong *)plVar6[0x91] != (longlong *)0x0)))) &&
       (cVar3 = (**(code **)(*(longlong *)plVar6[0x91] + 0x778))(), cVar3 != '\0')) {
      if (*(float *)(param_1 + 0xa4) <= 0.0001) {
        if ((0.0001 <= fVar10) && (0.0 < *(float *)(param_1 + 0x11d))) {
          FUN_142d49f50(param_1[0x85],plVar6);
          local_68 = 0;
          local_60 = 0;
          local_58 = 0;
          FUN_142d303e0(param_1 + 0x11b,&local_68);
          lVar8 = local_68;
          if ((int)local_60 != 0) {
            lVar9 = local_68 + 8;
            iVar5 = (int)local_60;
            do {
              FRichCurve::~FRichCurve(lVar9);
              lVar9 = lVar9 + 0x80;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
          if (lVar8 != 0) {
            FMemory::Free(lVar8);
          }
        }
      }
      else {
        if (fVar10 < 0.0001) {
          uVar7 = FUN_142d3aaa0(param_1[0x85],&local_68,0x3f800000);
          FUN_142d303e0(param_1 + 0x11b,uVar7);
          if ((int)local_60 != 0) {
            lVar8 = local_68 + 8;
            iVar5 = (int)local_60;
            do {
              FRichCurve::~FRichCurve(lVar8);
              lVar8 = lVar8 + 0x80;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
          if (local_68 != 0) {
            FMemory::Free();
          }
          uVar12 = FRichCurve::Eval(param_1 + 0x86,0x38d1b717,0);
          FUN_142d408e0(param_1[0x85],plVar6,uVar12,1,0);
        }
        lVar8 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
        if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
            lVar8 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          lVar8 = *plVar6;
          uVar12 = FRichCurve::Eval(param_1 + 0x86,(int)param_1[0xa4],0);
          (**(code **)(lVar8 + 0xfd0))(plVar6,param_1 + 0x11b,param_1[0x85],uVar12);
        }
      }
    }
  }
  cVar3 = (**(code **)(*param_1 + 0x528))(param_1);
  if (cVar3 == '\0') {
    (**(code **)(*param_1 + 0x358))(param_1,0);
  }
  return;
}



// FUNCTION 1430930e0 FUN_1430930e0 body=921 status=ok
// SIG undefined FUN_1430930e0(void)

void FUN_1430930e0(longlong param_1,float param_2)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  uint uVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  undefined8 local_res8;
  undefined1 *local_158;
  ulonglong uStack_150;
  undefined1 local_148;
  undefined2 local_147;
  undefined1 local_145;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined8 local_134;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_11c;
  undefined4 local_114;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_104;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [4];
  undefined4 local_b4;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  FUN_14239b370();
  if ((((*(char *)(param_1 + 0x2d0) == '\0') && (*(char *)(param_1 + 0x2f0) != '\0')) &&
      ((*(byte *)(param_1 + 0x1c8) & 0x40) == 0)) && (0.0 < *(float *)(param_1 + 0x194))) {
    *(undefined4 *)(param_1 + 0x194) = 0;
  }
  if ((*(char *)(param_1 + 0x30c) != '\0') && (*(longlong *)(param_1 + 0x278) != 0)) {
    uStack_150 = uStack_150 & 0xffffffff00000000;
    local_158 = &LAB_143068bf8;
    pwVar4 = _guard_xfg_dispatch_icall_nop(L"&UWalkingProjectileMovementComponent::OnHit",L"::");
    pwVar2 = (wchar_t *)0x0;
    while (pwVar1 = pwVar4, pwVar1 != (wchar_t *)0x0) {
      pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar2 = pwVar1;
    }
    FName::FName(&local_res8,pwVar2 + 2,1);
    TBaseDynamicMulticastDelegate<FWeakObjectPtr,void>::__Internal_AddDynamic<AHomeCharacter>
              (*(longlong *)(param_1 + 0x278) + 0x280,param_1,&local_158,local_res8);
    *(undefined1 *)(param_1 + 0x30c) = 0;
  }
  if (*(char *)(param_1 + 0x2c8) == '\0') {
    if ((*(byte *)(param_1 + 0x1c8) & 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x1dc) = *(undefined4 *)(param_1 + 0x310);
    }
    else {
      if (*(char *)(param_1 + 0x2f0) == '\0') {
        *(undefined4 *)(param_1 + 0x310) = *(undefined4 *)(param_1 + 0x1dc);
      }
      *(undefined4 *)(param_1 + 0x1dc) = 0;
    }
  }
  uVar3 = *(uint *)(param_1 + 0x1c8) & 0x40;
  if ((uVar3 == 0) || (*(char *)(param_1 + 0x2f0) != '\0')) {
    if ((uVar3 != 0) || (*(char *)(param_1 + 0x2f0) == '\0')) goto LAB_143093263;
    lVar5 = param_1 + 0x338;
  }
  else {
    lVar5 = param_1 + 0x348;
  }
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(lVar5);
LAB_143093263:
  *(byte *)(param_1 + 0x2f0) = (byte)(*(uint *)(param_1 + 0x1c8) >> 6) & 1;
  lVar5 = *(longlong *)(param_1 + 0x178);
  if ((lVar5 != 0) &&
     (((*(float *)(param_1 + 0x318) != DAT_1468b5d90 ||
       (DAT_1468b5d94 != *(float *)(param_1 + 0x31c))) ||
      (DAT_1468b5d98 != *(float *)(param_1 + 800))))) {
    if (((ABS(*(float *)(param_1 + 0x318) - *(float *)(lVar5 + 0x220)) <= 0.0001) &&
        (ABS(*(float *)(param_1 + 0x31c) - *(float *)(lVar5 + 0x224)) <= 0.0001)) &&
       (ABS(*(float *)(param_1 + 800) - *(float *)(lVar5 + 0x228)) <= 0.0001)) {
      param_2 = param_2 + *(float *)(param_1 + 0x2f4);
      *(float *)(param_1 + 0x2f4) = param_2;
      if (*(float *)(param_1 + 0x2d8) <= 0.0) {
        return;
      }
      if (param_2 < *(float *)(param_1 + 0x2d8)) {
        return;
      }
      _guard_xfg_dispatch_icall_nop(local_b8,0,0x90);
      local_147 = 0;
      local_145 = 0;
      local_cc = 0;
      local_148 = 0;
      local_144 = local_b4;
      local_12c = local_9c;
      local_120 = local_90;
      local_114 = local_84;
      local_108 = local_78;
      local_fc = local_6c;
      local_f0 = local_60;
      local_e8 = local_58;
      local_13c = 0x3f800000;
      local_e4 = local_54;
      local_134 = local_a4;
      local_e0 = local_50;
      local_128 = local_98;
      local_dc = local_4c;
      local_11c = local_8c;
      local_d8 = local_48;
      local_110 = local_80;
      local_d4 = local_44;
      local_d0 = local_40;
      local_104 = local_74;
      local_c8 = local_38;
      local_f8 = local_68;
      local_140 = 0;
      local_c0 = local_30;
      local_138 = local_a8;
      local_ec = local_5c;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1 + 0x200,&local_148);
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x2f4) = 0;
  return;
}



// FUNCTION 143093480 FUN_143093480 body=206 status=ok
// SIG undefined FUN_143093480(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143093480(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 local_18;
  undefined4 local_10;
  
  *(undefined8 *)(param_1 + 0x2fc) = *(undefined8 *)(param_1 + 0x18c);
  *(undefined4 *)(param_1 + 0x304) = *(undefined4 *)(param_1 + 0x194);
  lVar1 = *(longlong *)(param_1 + 0x178);
  *(float *)(param_1 + 0x308) =
       SQRT(*(float *)(param_1 + 0x18c) * *(float *)(param_1 + 0x18c) +
            *(float *)(param_1 + 400) * *(float *)(param_1 + 400) +
            *(float *)(param_1 + 0x194) * *(float *)(param_1 + 0x194));
  if (lVar1 == 0) {
    local_18 = _DAT_1468b5d90;
    local_10 = DAT_1468b5d98;
  }
  else {
    local_18 = *(undefined8 *)(lVar1 + 0x220);
    local_10 = *(undefined4 *)(lVar1 + 0x228);
  }
  *(undefined8 *)(param_1 + 0x318) = local_18;
  *(undefined4 *)(param_1 + 800) = local_10;
  BuildSettings::IsPromotedBuild(local_18,param_2);
  return;
}



// FUNCTION 143093550 FUN_143093550 body=413 status=ok
// SIG undefined FUN_143093550(void)

void FUN_143093550(longlong *param_1,byte param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  
  if ((((int)(uint)param_2 < (int)param_1[0xd7]) && (param_1[0xff] != DAT_146b479c8)) &&
     (cVar1 = (**(code **)(*param_1 + 0x7c8))(), cVar1 != '\0')) {
    if (param_1[0xff] == DAT_146b479a8) {
      if ((*(byte *)(param_1 + 0xcc) & 2) == 0) {
        *(byte *)((longlong)param_1 + 0x679) = *(byte *)((longlong)param_1 + 0x679) | 2;
        return;
      }
      (**(code **)(*param_1 + 0x9c0))(param_1);
    }
    *(byte *)((longlong)param_1 + 0x679) = *(byte *)((longlong)param_1 + 0x679) & 0xfd;
    uVar5 = 0;
    if ((int)(uint)param_2 < (int)param_1[0xd7]) {
      plVar4 = (longlong *)param_1[0xd6];
      if ((longlong *)param_1[0xd6] == (longlong *)0x0) {
        plVar4 = param_1 + 0xd5;
      }
      bVar2 = *(byte *)((longlong)plVar4 + (ulonglong)param_2);
    }
    else {
      bVar2 = 0xff;
    }
    if ((((int)param_1[0xd4] <= (int)(uint)bVar2) ||
        (*(longlong *)(param_1[0xd3] + 8 + (ulonglong)bVar2 * 0x48) == 0)) ||
       (cVar1 = FUN_1430c27c0(), cVar1 == '\0')) {
      uVar3 = bVar2 + 1;
      if ((int)uVar3 < (int)param_1[0xd4]) {
        do {
          if ((*(uint *)(param_1[0xd3] + (longlong)(int)uVar3 * 0x48) & 1 << (param_2 & 0x1f)) != 0)
          goto LAB_1430936bf;
          uVar3 = uVar3 + 1;
        } while ((int)uVar3 < (int)param_1[0xd4]);
      }
      if (bVar2 != 0) {
        do {
          uVar3 = uVar5;
          if ((*(uint *)(param_1[0xd3] + (longlong)(int)uVar5 * 0x48) & 1 << (param_2 & 0x1f)) != 0)
          {
LAB_1430936bf:
            (**(code **)(*param_1 + 0x8e0))(param_1,param_2,uVar3 & 0xff,0);
            return;
          }
          uVar5 = uVar5 + 1;
        } while ((int)uVar5 < (int)(uint)bVar2);
      }
    }
  }
  return;
}



// FUNCTION 1430936f0 FUN_1430936f0 body=69 status=ok
// SIG undefined FUN_1430936f0(void)

undefined8 FUN_1430936f0(longlong param_1,longlong param_2)

{
  char cVar1;
  
  if (((*(byte *)(param_1 + 0x1cc) & 8) != 0) &&
     (((param_2 != 0 || (param_2 = *(longlong *)(param_1 + 0x118), param_2 != 0)) &&
      (*(longlong **)(param_2 + 0x150) != (longlong *)0x0)))) {
    cVar1 = (**(code **)(**(longlong **)(param_2 + 0x150) + 0x780))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143093740 FUN_143093740 body=169 status=ok
// SIG undefined FUN_143093740(void)

void FUN_143093740(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  cVar1 = (**(code **)(*param_1 + 0x888))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*param_1 + 0x890))(param_1);
    if (cVar1 != '\0') {
      lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
      if (*(longlong *)(lVar2 + 400) == 0) {
        uVar3 = *(undefined8 *)(lVar2 + 0x3f8);
      }
      else {
        uVar3 = *(undefined8 *)(*(longlong *)(lVar2 + 400) + 0x90);
      }
      FUN_142880530(uVar3,param_1 + 0xdd);
      param_1[0xdd] = 0;
    }
  }
  cVar1 = (**(code **)(*param_1 + 0x870))(param_1);
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001430937dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x8a0))(param_1,(char)param_1[0xd2],(char)param_1[0xdc] != '\x01');
    return;
  }
  return;
}



// FUNCTION 1430937f0 FUN_1430937f0 body=666 status=ok
// SIG undefined FUN_1430937f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
FUN_1430937f0(longlong *param_1,float *param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5)

{
  float fVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 auStack_408 [32];
  byte *local_3e8;
  undefined1 local_3e0;
  float local_3d8;
  float local_3d4;
  float local_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  byte local_3b8 [12];
  float local_3ac;
  byte local_328 [12];
  float local_31c;
  byte local_298 [12];
  float local_28c;
  undefined1 local_208 [448];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_408;
  uVar3 = 0;
  if (*(float *)((longlong)param_1 + 0x2d4) <= 0.0) {
    return 0;
  }
  FUN_14237e6d0(local_208,param_1[0x2f],1,1);
  _guard_xfg_dispatch_icall_nop(local_3b8,0,0x90);
  local_3ac = 1.0;
  _guard_xfg_dispatch_icall_nop(local_298,0,0x90);
  local_28c = 1.0;
  _guard_xfg_dispatch_icall_nop(local_328,0,0x90);
  fVar1 = *(float *)((longlong)param_1 + 0x2d4);
  local_31c = 1.0;
  local_3c8 = *(undefined8 *)(param_1[0x2f] + 0x210);
  uStack_3c0 = *(undefined8 *)(param_1[0x2f] + 0x218);
  local_3d8 = -(fVar1 * *param_2);
  local_3d4 = -(fVar1 * param_2[1]);
  local_3d0 = -(fVar1 * param_2[2]);
  uVar2 = FUN_14247f500();
  FUN_14247ea90(uVar2);
  local_3e8 = local_3b8;
  local_3e0 = 0;
  (**(code **)(*param_1 + 0x488))(param_1,&local_3d8,&local_3c8,1);
  if (((local_3b8[0] & 1) == 0) || (0.0 < local_3ac)) {
    local_3c8 = *(undefined8 *)(param_1[0x2f] + 0x210);
    uStack_3c0 = *(undefined8 *)(param_1[0x2f] + 0x218);
    uVar2 = FUN_14247f500();
    FUN_14247ea90(uVar2);
    local_3e8 = local_298;
    local_3e0 = 0;
    (**(code **)(*param_1 + 0x488))(param_1,param_3,&local_3c8,1);
    if (((local_298[0] & 1) == 0) || (0.0 < local_28c)) {
      local_3d0 = *(float *)((longlong)param_1 + 0x2d4);
      local_3d8 = local_3d0 * *param_2;
      local_3c8 = *(undefined8 *)(param_1[0x2f] + 0x210);
      uStack_3c0 = *(undefined8 *)(param_1[0x2f] + 0x218);
      local_3d4 = local_3d0 * param_2[1];
      local_3d0 = local_3d0 * param_2[2];
      uVar2 = FUN_14247f500();
      FUN_14247ea90(uVar2);
      local_3e8 = local_328;
      local_3e0 = 0;
      (**(code **)(*param_1 + 0x488))(param_1,&local_3d8,&local_3c8,1);
      if (((local_328[0] & 1) != 0) && (local_31c < local_3ac)) {
        uVar3 = 1;
        if (param_5 != 0) {
          FUN_140729f20(param_5,local_328);
        }
        goto LAB_143093a4c;
      }
    }
  }
  FUN_142396200(local_208);
LAB_143093a4c:
  FUN_14237f990(local_208);
  return uVar3;
}



// FUNCTION 143093a90 FUN_143093a90 body=130 status=ok
// SIG undefined FUN_143093a90(void)

void FUN_143093a90(longlong *param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  
  cVar1 = (**(code **)(*param_1 + 0x7c8))();
  if ((cVar1 != '\0') && (uVar3 = 0, 0 < (int)param_1[0xd7])) {
    while( true ) {
      cVar1 = FUN_14306c040(param_1,uVar3);
      if (cVar1 != '\0') break;
      bVar2 = (char)uVar3 + 1;
      uVar3 = (uint)bVar2;
      if ((int)param_1[0xd7] <= (int)(uint)bVar2) {
        return;
      }
    }
    (**(code **)(*param_1 + 0x9d8))
              (param_1,uVar3,(*(uint *)(param_1 + 0xd8) >> (uVar3 & 0x1f) & 1) == 0);
  }
  return;
}



// FUNCTION 143093b20 FUN_143093b20 body=191 status=ok
// SIG undefined FUN_143093b20(void)

undefined8 FUN_143093b20(longlong *param_1,char param_2)

{
  if ((param_1[0xc6] == 0) && (param_1[0xff] == DAT_146b47938)) {
    return 0;
  }
  if ((char)param_1[0x25] == '\x03') {
    (**(code **)(*param_1 + 0x600))();
    *(undefined1 *)((longlong)param_1 + 0x614) = 0xff;
    *(char *)((longlong)param_1 + 0x621) = param_2;
  }
  *(char *)((longlong)param_1 + 0x639) = param_2;
  if ((param_1[0xff] == DAT_146b479b0) && (param_2 == '\x01')) {
    (**(code **)(*param_1 + 0x9c8))(param_1);
    return 1;
  }
  if (param_1[0xff] == DAT_146b47938) {
    FUN_14308d690();
    return 1;
  }
  FUN_14308e890(param_1);
  return 1;
}



// FUNCTION 143093be0 FUN_143093be0 body=179 status=ok
// SIG undefined FUN_143093be0(void)

undefined8 FUN_143093be0(longlong *param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  longlong local_res8;
  
  cVar2 = (**(code **)(*param_1 + 0x868))();
  if (cVar2 != '\0') {
    bVar3 = *(byte *)(param_1 + 0xfd) & 0xfd | param_3 * '\x02';
    lVar1 = param_1[0xff];
    *(byte *)(param_1 + 0xfd) = bVar3;
    if (DAT_146b479c0 != lVar1) {
      *(byte *)(param_1 + 0xfd) = bVar3 | 1;
      (**(code **)(*param_1 + 0xac8))(param_1,&DAT_146b479c0);
      local_res8 = param_1[0xff];
      *(byte *)(param_1 + 0xfd) = *(byte *)(param_1 + 0xfd) & 0xfe;
      if (local_res8 == lVar1) {
        param_1[0xff] = DAT_146b479c0;
        (**(code **)(*param_1 + 0xac0))(param_1,&local_res8);
      }
    }
    return 1;
  }
  return 0;
}



// FUNCTION 143093ca0 FUN_143093ca0 body=140 status=ok
// SIG undefined FUN_143093ca0(void)

void FUN_143093ca0(longlong *param_1,char param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  
  bVar2 = 0;
  if (0 < (int)param_1[0xd7]) {
    do {
      uVar3 = 1 << (bVar2 & 0x1f) & *(uint *)(param_1 + 0xd8);
      if ((uVar3 != 0) ||
         ((param_2 == '\0' && (cVar1 = FUN_14306c040(param_1,bVar2), cVar1 != '\0')))) {
        (**(code **)(*param_1 + 0x9d8))(param_1,bVar2,uVar3 == 0);
        return;
      }
      bVar2 = bVar2 + 1;
    } while ((int)(uint)bVar2 < (int)param_1[0xd7]);
  }
  return;
}



// FUNCTION 143093d30 FUN_143093d30 body=361 status=ok
// SIG undefined FUN_143093d30(void)

void FUN_143093d30(longlong *param_1,byte param_2,char param_3)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  
  if ((param_1[0xff] != DAT_146b47938) && ((int)(uint)param_2 < (int)param_1[0xd7])) {
    if (param_3 == '\0') {
      *(byte *)((longlong)param_1 + 0x6c4) = param_2;
      *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 1 << (param_2 & 0x1f);
    }
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0xa6);
    if ((int)(uint)param_2 < (int)param_1[0xd7]) {
      plVar2 = (longlong *)param_1[0xd6];
      if ((longlong *)param_1[0xd6] == (longlong *)0x0) {
        plVar2 = param_1 + 0xd5;
      }
      uVar3 = (ulonglong)*(byte *)((longlong)plVar2 + (ulonglong)param_2);
    }
    else {
      uVar3 = 0xff;
    }
    if (((*(char *)((longlong)param_1 + 0x6cc) == '\0') && ((int)uVar3 < (int)param_1[0xd4])) &&
       (lVar1 = uVar3 * 0x48, *(longlong *)(param_1[0xd3] + 8 + lVar1) != 0)) {
      if (((*(byte *)(param_1 + 0xcc) & 2) == 0) || (param_1[0xff] != DAT_146b479a8)) {
        if ((param_1[0xff] == DAT_146b479a0) || (param_1[0xff] == DAT_146b479b8)) {
          FUN_14308b050(param_1);
          (**(code **)(**(longlong **)(param_1[0xd3] + 8 + lVar1) + 0x418))();
          if (param_3 != '\0') {
            plVar2 = *(longlong **)(param_1[0xd3] + 8 + lVar1);
            (**(code **)(*plVar2 + 0x420))(plVar2,0);
          }
        }
      }
      else {
        (**(code **)(*param_1 + 0x9c0))(param_1);
      }
    }
  }
  return;
}



// FUNCTION 143093ea0 FUN_143093ea0 body=109 status=ok
// SIG undefined FUN_143093ea0(void)

void FUN_143093ea0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 local_res10 [3];
  
  if (*(char *)(param_1 + 0x128) == '\x03') {
    local_res10[0] = param_2;
    FUN_142dbb5d0(param_1 + 0x800,local_res10);
    cVar1 = FUN_1407c3030(param_1 + 0x800);
    if (((cVar1 == '\0') && (*(longlong *)(param_1 + 0x7f8) == DAT_146b47938)) &&
       (*(char *)(param_1 + 0x129) == '\x01')) {
      FUN_14223e980(param_1,2);
    }
  }
  return;
}



// FUNCTION 143093f10 FUN_143093f10 body=90 status=ok
// SIG undefined FUN_143093f10(void)

void FUN_143093f10(longlong *param_1,char param_2)

{
  if (param_1[0xff] != DAT_146b479d0) {
    return;
  }
  if (param_2 != '\0') {
    if (*(byte *)(param_1 + 0x25) < 3) {
      FUN_1430b49b0();
                    /* WARNING: Could not recover jumptable at 0x000143093f46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xa18))(param_1);
      return;
    }
    FUN_1430b3400();
  }
                    /* WARNING: Could not recover jumptable at 0x000143093f5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa18))(param_1);
  return;
}



// FUNCTION 143093f70 FUN_143093f70 body=135 status=ok
// SIG undefined FUN_143093f70(void)

void FUN_143093f70(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (0 < *(int *)(param_1 + 0x6a0)) {
    do {
      lVar1 = (**(code **)(*(longlong *)(param_1 + 0x460) + 0x10))(param_1 + 0x460,uVar2 & 0xff);
      if (lVar1 != 0) {
        TMulticastScriptDelegate<FWeakObjectPtr>::RemoveInternal(lVar1 + 400,param_2);
        TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(lVar1 + 400);
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < *(int *)(param_1 + 0x6a0));
  }
  return;
}



// FUNCTION 143094000 FUN_143094000 body=34 status=ok
// SIG undefined FUN_143094000(void)

void FUN_143094000(longlong param_1)

{
  TMulticastScriptDelegate<FWeakObjectPtr>::RemoveInternal(param_1 + 0x4f0);
  TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(param_1 + 0x4f0);
  return;
}



// FUNCTION 143094030 FUN_143094030 body=34 status=ok
// SIG undefined FUN_143094030(void)

void FUN_143094030(longlong param_1)

{
  TMulticastScriptDelegate<FWeakObjectPtr>::RemoveInternal(param_1 + 0x500);
  TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(param_1 + 0x500);
  return;
}



// FUNCTION 143094060 FUN_143094060 body=64 status=ok
// SIG undefined FUN_143094060(void)

void FUN_143094060(longlong param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\0') {
    param_1 = param_1 + 0x540;
  }
  else {
    if (param_3 != '\x01') {
      return;
    }
    param_1 = param_1 + 0x550;
  }
  TMulticastScriptDelegate<FWeakObjectPtr>::RemoveInternal(param_1);
  TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(param_1);
  return;
}



// FUNCTION 1430940a0 FUN_1430940a0 body=34 status=ok
// SIG undefined FUN_1430940a0(void)

void FUN_1430940a0(longlong param_1)

{
  TMulticastScriptDelegate<FWeakObjectPtr>::RemoveInternal(param_1 + 0x510);
  TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(param_1 + 0x510);
  return;
}



// FUNCTION 1430940d0 FUN_1430940d0 body=704 status=ok
// SIG undefined FUN_1430940d0(void)

void FUN_1430940d0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  int iVar17;
  bool bVar18;
  ulonglong local_78;
  
  uVar16 = 0;
  plVar7 = *(longlong **)(param_1 + 0x700);
  local_78 = 0;
  uVar12 = (longlong)*(int *)(param_1 + 0x708) & 0x1fffffffffffffff;
  if (plVar7 + *(int *)(param_1 + 0x708) < plVar7) {
    uVar12 = uVar16;
  }
  if (uVar12 != 0) {
    do {
      lVar2 = *plVar7;
      if (((lVar2 != 0) && (param_2 != 0)) && (iVar17 = *(int *)(lVar2 + 0xa8) + -1, -1 < iVar17)) {
        plVar1 = (longlong *)(lVar2 + 0xa0);
        lVar3 = (longlong)iVar17;
        lVar13 = *plVar1;
        plVar5 = (longlong *)(lVar13 + 8 + lVar3 * 0x40);
LAB_143094191:
        if (*plVar5 != param_2) goto code_r0x000143094196;
        lVar4 = (longlong)*(int *)(lVar2 + 0xb8);
        lVar10 = (longlong)iVar17 * 0x40;
        lVar3 = *(longlong *)(lVar10 + lVar13);
        if (*(int *)(lVar2 + 0xb8) != 0) {
          bVar18 = **(longlong **)(lVar2 + 0xb0) != lVar3;
          uVar6 = uVar16;
          uVar11 = uVar16;
          uVar15 = uVar16;
          do {
            iVar9 = (int)uVar11;
            uVar6 = uVar6 + 1;
            uVar11 = (ulonglong)(iVar9 + 1);
            if ((longlong)uVar6 < lVar4) {
              plVar5 = (longlong *)(*(longlong *)(lVar2 + 0xb0) + uVar6 * 8);
              do {
                if (bVar18 != (*plVar5 != lVar3)) break;
                uVar11 = (ulonglong)((int)uVar11 + 1);
                uVar6 = uVar6 + 1;
                plVar5 = plVar5 + 1;
              } while ((longlong)uVar6 < lVar4);
            }
            iVar8 = (int)uVar11 - iVar9;
            if (bVar18 != false) {
              iVar14 = (int)uVar15;
              if (iVar14 != iVar9) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)(*(longlong *)(lVar2 + 0xb0) + (longlong)iVar14 * 8),
                           (void *)(*(longlong *)(lVar2 + 0xb0) + (longlong)iVar9 * 8),
                           (longlong)iVar8 << 3);
              }
              uVar15 = (ulonglong)(uint)(iVar14 + iVar8);
            }
            bVar18 = (bool)(bVar18 ^ 1);
          } while ((longlong)uVar6 < lVar4);
          *(int *)(lVar2 + 0xb8) = (int)uVar15;
          lVar13 = *(longlong *)(lVar2 + 0xa0);
        }
        (**(code **)(**(longlong **)(lVar10 + lVar13) + 0x3b0))(*(longlong **)(lVar10 + lVar13),0);
        iVar9 = *(int *)(lVar2 + 0xa8);
        iVar8 = (iVar9 - iVar17) + -1;
        if (iVar8 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar10 + *plVar1),(void *)((longlong)(iVar17 + 1) * 0x40 + *plVar1),
                     (longlong)iVar8 << 6);
          iVar9 = *(int *)(lVar2 + 0xa8);
        }
        *(int *)(lVar2 + 0xa8) = iVar9 + -1;
        TArray<FPartyReservation,FDefaultAllocator>::ResizeShrink(plVar1);
      }
LAB_1430942f1:
      plVar7 = plVar7 + 1;
      local_78 = local_78 + 1;
    } while (local_78 != uVar12);
  }
  plVar7 = *(longlong **)(param_1 + 0x710);
  uVar12 = (longlong)*(int *)(param_1 + 0x718) & 0x1fffffffffffffff;
  if (plVar7 + *(int *)(param_1 + 0x718) < plVar7) {
    uVar12 = uVar16;
  }
  if (uVar12 != 0) {
    do {
      if (*plVar7 != 0) {
        FUN_143094390(*plVar7,param_2);
      }
      plVar7 = plVar7 + 1;
      uVar16 = uVar16 + 1;
    } while (uVar16 != uVar12);
  }
  return;
code_r0x000143094196:
  iVar17 = iVar17 + -1;
  plVar5 = plVar5 + -8;
  lVar3 = lVar3 + -1;
  if (lVar3 < 0) goto LAB_1430942f1;
  goto LAB_143094191;
}



// FUNCTION 143094390 FUN_143094390 body=473 status=ok
// SIG undefined FUN_143094390(void)

void FUN_143094390(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  
  if ((param_2 != 0) && (iVar9 = *(int *)(param_1 + 0xa8) + -1, -1 < iVar9)) {
    lVar3 = *(longlong *)(param_1 + 0xa0);
    lVar7 = (longlong)iVar9;
    plVar1 = (longlong *)(lVar3 + 8 + lVar7 * 0x40);
    while (*plVar1 != param_2) {
      iVar9 = iVar9 + -1;
      plVar1 = plVar1 + -8;
      lVar7 = lVar7 + -1;
      if (lVar7 < 0) {
        return;
      }
    }
    lVar2 = (longlong)*(int *)(param_1 + 0xb8);
    lVar6 = (longlong)iVar9 * 0x40;
    lVar7 = *(longlong *)(lVar6 + lVar3);
    if (*(int *)(param_1 + 0xb8) != 0) {
      iVar8 = 0;
      bVar10 = **(longlong **)(param_1 + 0xb0) != lVar7;
      lVar3 = 0;
      iVar4 = 0;
      do {
        lVar3 = lVar3 + 1;
        iVar5 = iVar4 + 1;
        if (lVar3 < lVar2) {
          plVar1 = (longlong *)(*(longlong *)(param_1 + 0xb0) + lVar3 * 8);
          do {
            if (bVar10 != (*plVar1 != lVar7)) break;
            iVar5 = iVar5 + 1;
            lVar3 = lVar3 + 1;
            plVar1 = plVar1 + 1;
          } while (lVar3 < lVar2);
        }
        if (bVar10 != false) {
          if (iVar8 != iVar4) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar8 * 8),
                       (void *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar4 * 8),
                       (longlong)(iVar5 - iVar4) << 3);
          }
          iVar8 = iVar8 + (iVar5 - iVar4);
        }
        bVar10 = (bool)(bVar10 ^ 1);
        iVar4 = iVar5;
      } while (lVar3 < lVar2);
      *(int *)(param_1 + 0xb8) = iVar8;
      lVar3 = *(longlong *)(param_1 + 0xa0);
    }
    (**(code **)(**(longlong **)(lVar6 + lVar3) + 0x3b0))(*(longlong **)(lVar6 + lVar3),0);
    iVar4 = *(int *)(param_1 + 0xa8);
    iVar8 = (iVar4 - iVar9) + -1;
    if (iVar8 != 0) {
      lVar3 = *(longlong *)(param_1 + 0xa0);
      _guard_xfg_dispatch_icall_nop
                ((void *)(lVar6 + lVar3),(void *)((longlong)(iVar9 + 1) * 0x40 + lVar3),
                 (longlong)iVar8 << 6);
      iVar4 = *(int *)(param_1 + 0xa8);
    }
    *(int *)(param_1 + 0xa8) = iVar4 + -1;
    TArray<FPartyReservation,FDefaultAllocator>::ResizeShrink((longlong *)(param_1 + 0xa0));
  }
  return;
}



// FUNCTION 143094570 FUN_143094570 body=219 status=ok
// SIG undefined FUN_143094570(void)

void FUN_143094570(longlong param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  iVar1 = *(int *)(param_1 + 0x6a0);
  uVar4 = 0;
  if (0 < iVar1) {
    do {
      if (((int)(uVar4 & 0xff) < iVar1) &&
         (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x698) + 8 + (uVar4 & 0xff) * 0x48),
         lVar2 != 0)) {
        if (param_3 == '\0') {
          TMulticastScriptDelegate<FWeakObjectPtr>::RemoveInternal(lVar2 + 0x1c0,param_2);
          lVar2 = lVar2 + 0x1c0;
        }
        else if (param_3 == '\x01') {
          TMulticastScriptDelegate<FWeakObjectPtr>::RemoveInternal(lVar2 + 0x1e0,param_2);
          lVar2 = lVar2 + 0x1e0;
        }
        else {
          if (param_3 != '\x02') goto LAB_143094620;
          TMulticastScriptDelegate<FWeakObjectPtr>::RemoveInternal(lVar2 + 0x1d0,param_2);
          lVar2 = lVar2 + 0x1d0;
        }
        TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(lVar2);
      }
LAB_143094620:
      iVar1 = *(int *)(param_1 + 0x6a0);
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while ((int)uVar3 < iVar1);
  }
  return;
}



// FUNCTION 143094650 FUN_143094650 body=34 status=ok
// SIG undefined FUN_143094650(void)

void FUN_143094650(longlong param_1)

{
  TMulticastScriptDelegate<FWeakObjectPtr>::RemoveInternal(param_1 + 0x530);
  TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(param_1 + 0x530);
  return;
}



// FUNCTION 143094680 FUN_143094680 body=276 status=ok
// SIG undefined FUN_143094680(void)

void FUN_143094680(longlong param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  iVar1 = *(int *)(param_1 + 0x6a0);
  uVar4 = 0;
  if (0 < iVar1) {
    do {
      uVar5 = uVar4 & 0xff;
      if ((((int)uVar5 < iVar1) &&
          (*(longlong *)(*(longlong *)(param_1 + 0x698) + 8 + uVar5 * 0x48) != 0)) &&
         (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x698) + 0x20 + uVar5 * 0x48), lVar2 != 0))
      {
        if (param_3 == '\0') {
          TMulticastScriptDelegate<FWeakObjectPtr>::RemoveInternal(lVar2 + 0x280,param_2);
          lVar2 = lVar2 + 0x280;
        }
        else if (param_3 == '\x01') {
          TMulticastScriptDelegate<FWeakObjectPtr>::RemoveInternal(lVar2 + 0x250,param_2);
          lVar2 = lVar2 + 0x250;
        }
        else if (param_3 == '\x02') {
          TMulticastScriptDelegate<FWeakObjectPtr>::RemoveInternal(lVar2 + 0x260,param_2);
          lVar2 = lVar2 + 0x260;
        }
        else {
          if (param_3 != '\x03') goto LAB_143094769;
          TMulticastScriptDelegate<FWeakObjectPtr>::RemoveInternal(lVar2 + 0x270,param_2);
          lVar2 = lVar2 + 0x270;
        }
        TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(lVar2);
      }
LAB_143094769:
      iVar1 = *(int *)(param_1 + 0x6a0);
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while ((int)uVar3 < iVar1);
  }
  return;
}



// FUNCTION 1430947a0 FUN_1430947a0 body=249 status=ok
// SIG undefined FUN_1430947a0(void)

void FUN_1430947a0(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  uint *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x448);
  if ((lVar2 != 0) && ((*(uint *)(lVar2 + 0x58) >> 8 & 1) != 0)) {
    *(uint *)(lVar2 + 0x58) = *(uint *)(lVar2 + 0x58) & 0xfffffeff;
    plVar6 = *(longlong **)(lVar2 + 0x90);
    plVar5 = plVar6 + (longlong)*(int *)(lVar2 + 0x98) * 7;
    if (plVar6 != plVar5) {
      puVar4 = (uint *)(plVar6 + 2);
      do {
        plVar3 = (longlong *)*plVar6;
        if ((plVar3 != (longlong *)0x0) && (*(longlong *)(puVar4 + 2) != 0)) {
          if ((*puVar4 & 8) != 0) {
            (**(code **)(*plVar3 + 0x290))(plVar3,lVar2,puVar4);
            uVar1 = *(uint *)(lVar2 + 0x58);
            *(uint *)(lVar2 + 0x58) = ((*puVar4 << 5 | uVar1) ^ uVar1) & 0x100 ^ uVar1;
          }
          if ((*puVar4 & 0x10) != 0) {
            (**(code **)(*(longlong *)*plVar6 + 0x298))((longlong *)*plVar6,param_2,lVar2,puVar4);
            uVar1 = *(uint *)(lVar2 + 0x58);
            *(uint *)(lVar2 + 0x58) = ((*puVar4 << 4 | uVar1) ^ uVar1) & 0x100 ^ uVar1;
          }
        }
        plVar6 = plVar6 + 7;
        puVar4 = puVar4 + 0xe;
      } while (plVar6 != plVar5);
    }
  }
  return;
}



// FUNCTION 1430948a0 FUN_1430948a0 body=492 status=ok
// SIG undefined FUN_1430948a0(void)

void FUN_1430948a0(longlong param_1,longlong param_2)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_40;
  undefined8 local_38;
  longlong local_30;
  
  if ((((*(byte *)(param_1 + 0x1d0) & 0x10) != 0) && (*(longlong *)(param_1 + 0x2c0) != 0)) &&
     (*(longlong *)(param_1 + 0x2c8) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x2c8) + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (0 < iVar4) {
      fVar6 = (float)FUN_1430774d0(param_1);
      bVar2 = *(byte *)(param_2 + 0x690);
      fVar8 = 0.0;
      fVar7 = fVar8;
      if ((((int)(uint)bVar2 < *(int *)(param_2 + 0x6a0)) &&
          (*(longlong *)(*(longlong *)(param_2 + 0x698) + 8 + (ulonglong)bVar2 * 0x48) != 0)) &&
         ((*(longlong *)(*(longlong *)(param_2 + 0x698) + 0x20 + (ulonglong)bVar2 * 0x48) != 0 &&
          (cVar3 = FUN_14309f7c0(), cVar3 != '\0')))) {
        bVar2 = *(byte *)(param_2 + 0x690);
        if ((((int)(uint)bVar2 < *(int *)(param_2 + 0x6a0)) &&
            (*(longlong *)(*(longlong *)(param_2 + 0x698) + 8 + (ulonglong)bVar2 * 0x48) != 0)) &&
           (*(longlong *)(*(longlong *)(param_2 + 0x698) + 0x20 + (ulonglong)bVar2 * 0x48) != 0)) {
          fVar7 = (float)FUN_14309ee20();
        }
        else {
          fVar7 = 0.0;
        }
        if ((*(byte *)(param_1 + 0x1d0) & 0x20) == 0) {
          fVar6 = fVar6 * ((*(float *)(param_1 + 0x1e0) - 1.0) * fVar7 + 1.0);
          fVar7 = fVar8;
        }
      }
      if ((0.0001 < ABS(fVar6 - *(float *)(param_1 + 0x2e8))) ||
         (0.0001 < ABS(fVar7 - *(float *)(param_1 + 0x2ec)))) {
        *(float *)(param_1 + 0x2e8) = fVar6;
        *(float *)(param_1 + 0x2ec) = fVar7;
        local_30 = *(longlong *)(param_1 + 0x2c8);
        local_58 = CONCAT44(fVar7,fVar6);
        local_40 = 0;
        local_50 = 0;
        local_38 = 0;
        if (local_30 != 0) {
          LOCK();
          iVar4 = *(int *)(local_30 + 8);
          bVar5 = iVar4 == 0;
          if (bVar5) {
            *(int *)(local_30 + 8) = 0;
            iVar4 = 0;
          }
          UNLOCK();
          while (!bVar5) {
            LOCK();
            bVar5 = iVar4 == *(int *)(local_30 + 8);
            if (bVar5) {
              *(int *)(local_30 + 8) = iVar4 + 1;
            }
            UNLOCK();
            if (bVar5) {
              if (local_30 != 0) {
                local_38 = *(undefined8 *)(param_1 + 0x2c0);
              }
              goto LAB_143094a48;
            }
            LOCK();
            iVar4 = *(int *)(local_30 + 8);
            bVar5 = iVar4 == 0;
            if (bVar5) {
              *(int *)(local_30 + 8) = 0;
              iVar4 = 0;
            }
            UNLOCK();
          }
          local_30 = 0;
        }
LAB_143094a48:
        FUN_142c879f0(&local_38,&local_58);
      }
    }
  }
  return;
}



// FUNCTION 143094a90 FUN_143094a90 body=562 status=ok
// SIG undefined FUN_143094a90(void)

void FUN_143094a90(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  uint *puVar8;
  longlong *plVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [8];
  longlong *local_40;
  
  iVar6 = FUN_14233f450();
  if ((iVar6 == 3) && (0 < *(int *)(param_1 + 0x1f0))) {
    uVar7 = FUN_1412996f0(param_1);
    puVar10 = *(uint **)(param_1 + 0x1e8);
    uVar3 = *(undefined8 *)(param_1 + 0x118);
    puVar12 = puVar10 + (longlong)*(int *)(param_1 + 0x1f0) * 0x18;
    if (puVar10 != puVar12) {
      puVar11 = puVar10 + 0x14;
      do {
        if ((*(byte *)(param_1 + 0x2b8) == 0) ||
           ((*puVar10 >> (*(byte *)(param_1 + 0x2b8) & 0x1f) & 1) == 0)) {
          cVar5 = FWindowsSystemWideCriticalSection::IsValid(puVar11);
          if (cVar5 != '\0') {
            FUN_142ca96a0(puVar11);
          }
        }
        else {
          cVar5 = FWindowsSystemWideCriticalSection::IsValid(puVar11);
          if (cVar5 == '\0') {
            uStack_90 = (undefined4)uVar3;
            uStack_8c = (undefined4)((ulonglong)uVar3 >> 0x20);
            if ((char)puVar11[-0x13] == '\0') {
              local_58 = uStack_90;
              uStack_54 = uStack_8c;
              uStack_50 = 0;
              uStack_4c = 0;
              puVar8 = (uint *)FUN_142c901e0(puVar11 + -0x12,local_48,uVar3,&local_58,0,local_res18)
              ;
              plVar9 = local_40;
              if (puVar11 != puVar8) {
                *(undefined8 *)puVar11 = *(undefined8 *)puVar8;
                puVar8[0] = 0;
                puVar8[1] = 0;
                SharedPointerInternals::FSharedReferencer<1>::operator=(puVar11 + 2,puVar8 + 2);
                plVar9 = local_40;
              }
            }
            else {
              local_98 = (undefined4)uVar7;
              uStack_94 = (undefined4)((ulonglong)uVar7 >> 0x20);
              local_78 = local_98;
              uStack_74 = uStack_94;
              uStack_70 = uStack_90;
              uStack_6c = uStack_8c;
              puVar8 = (uint *)FUN_142c901e0(puVar11 + -0x12,local_68,uVar7,&local_78,0,local_res10)
              ;
              plVar9 = local_60;
              if (puVar11 != puVar8) {
                *(undefined8 *)puVar11 = *(undefined8 *)puVar8;
                puVar8[0] = 0;
                puVar8[1] = 0;
                SharedPointerInternals::FSharedReferencer<1>::operator=(puVar11 + 2,puVar8 + 2);
                plVar9 = local_60;
              }
            }
            if (plVar9 != (longlong *)0x0) {
              LOCK();
              plVar1 = plVar9 + 1;
              lVar4 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar4 == 1) {
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
          }
        }
        puVar10 = puVar10 + 0x18;
        puVar11 = puVar11 + 0x18;
      } while (puVar10 != puVar12);
    }
  }
  return;
}



// FUNCTION 143094cd0 FUN_143094cd0 body=48 status=ok
// SIG undefined FUN_143094cd0(void)

void FUN_143094cd0(longlong param_1,longlong param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_2 + 0xd) & 0xfe;
  *(byte *)(param_2 + 0xd) = bVar1;
  if ((((*(uint *)(param_1 + 0x58) & 2) != 0) && ((*(uint *)(param_2 + 8) >> 5 & 1) != 0)) &&
     ((*(uint *)(param_1 + 0x58) & 4) == 0)) {
    *(byte *)(param_2 + 0xd) = bVar1 | 1;
  }
  return;
}



// FUNCTION 143094d00 FUN_143094d00 body=685 status=ok
// SIG undefined FUN_143094d00(void)

void FUN_143094d00(longlong *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  longlong lVar6;
  int iVar7;
  undefined2 *puVar8;
  bool bVar9;
  undefined1 local_res8;
  undefined2 local_res9;
  undefined1 local_resb;
  undefined8 local_res10;
  longlong local_88;
  int local_80;
  int local_7c;
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  int local_60;
  int local_5c;
  undefined2 *local_58;
  int local_50;
  longlong *local_48;
  int local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28 [16];
  
  if (param_1[0x9f] != 0) {
    return;
  }
  uVar3 = FUN_142e14530();
  AActor::GetComponentsByClass(param_1,&local_48,uVar3);
  if (local_40 < 1) goto LAB_143094f95;
  lVar6 = *local_48;
  if (lVar6 == 0) {
LAB_143094d92:
    lVar6 = 0;
  }
  else {
    lVar4 = FUN_142e14530();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if (!bVar9) goto LAB_143094d92;
  }
  param_1[0x9f] = lVar6;
  if (lVar6 == 0) {
    local_res9 = 0xffff;
    local_res8 = 0;
    local_resb = 0xff;
    puVar5 = (undefined4 *)FLinearColor::FLinearColor(local_28,&local_res8);
    local_38 = *puVar5;
    uStack_34 = puVar5[1];
    uStack_30 = puVar5[2];
    uStack_2c = puVar5[3];
    local_res10 = *(undefined8 *)(param_1[2] + 0x18);
    FName::ToString(&local_res10,&local_58);
    puVar8 = &DAT_143f3eda8;
    if (local_50 != 0) {
      puVar8 = local_58;
    }
    FString::PrintfImpl(&local_78,L"WARNING (%s): ",puVar8);
    iVar7 = (int)local_70;
    iVar1 = local_70._4_4_;
    bVar9 = (int)local_70 != 0;
    local_88 = local_78;
    local_78 = 0;
    local_80 = (int)local_70;
    local_7c = local_70._4_4_;
    local_70 = 0;
    if (iVar1 < (int)((0x4e - (uint)bVar9) + iVar7)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_88);
      iVar7 = local_80;
    }
    local_80 = (0x4e - (uint)(iVar7 != 0)) + iVar7;
    if (local_7c < local_80) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,iVar7);
    }
    lVar6 = (longlong)iVar7 - (ulonglong)(iVar7 != 0);
    builtin_wcsncpy((wchar_t *)(local_88 + lVar6 * 2),L"Projecti",8);
    builtin_wcsncpy((wchar_t *)(local_88 + 0x10 + lVar6 * 2),L"le has a",8);
    builtin_wcsncpy((wchar_t *)(local_88 + 0x20 + lVar6 * 2),L"n explos",8);
    builtin_wcsncpy((wchar_t *)(local_88 + 0x30 + lVar6 * 2),L"ion comp",8);
    builtin_wcsncpy((wchar_t *)(local_88 + 0x40 + lVar6 * 2),L"onent bu",8);
    builtin_wcsncpy((wchar_t *)(local_88 + 0x50 + lVar6 * 2),L"t it is ",8);
    builtin_wcsncpy((wchar_t *)(local_88 + 0x60 + lVar6 * 2),L"invalid.",8);
    builtin_wcsncpy((wchar_t *)(local_88 + 0x70 + lVar6 * 2),L"  See co",8);
    builtin_wcsncpy((wchar_t *)(local_88 + 0x80 + lVar6 * 2),L"der for ",8);
    *(undefined8 *)(local_88 + 0x90 + lVar6 * 2) = 0x70006c00650068;
    *(undefined2 *)(local_88 + 0x98 + lVar6 * 2) = 0x2e;
    *(undefined2 *)(local_88 + 0x9a + lVar6 * 2) = 0;
    local_68 = local_88;
    local_60 = local_80;
    local_5c = local_7c;
    lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    AK::MemoryMgr::StartProfileThreadUsage(lVar2);
    if (local_68 != 0) {
      FMemory::Free();
    }
    if (local_78 != 0) {
      FMemory::Free();
    }
    if (local_58 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
LAB_143094f95:
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 143094fb0 FUN_143094fb0 body=193 status=ok
// SIG undefined FUN_143094fb0(void)

void FUN_143094fb0(longlong param_1,char param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)(param_1 + 0x250);
  if (0 < iVar3) {
    if (*(char *)(param_1 + 600) == '\0') {
      iVar1 = *(int *)(param_1 + 0x2c8);
      if (iVar1 < 2) {
        uVar4 = *(int *)(param_1 + 0x4e8) - 1;
      }
      else {
        if (iVar1 <= iVar3) {
          iVar3 = iVar1;
        }
        uVar4 = (uint)*(byte *)(param_1 + 0x4ec);
      }
      uVar4 = (int)uVar4 % iVar3;
    }
    else if (param_2 == '\0') {
      uVar4 = (uint)*(byte *)(param_1 + 0x538);
    }
    else {
      lVar2 = (longlong)(ulonglong)(*(byte *)(param_1 + 0x4ed) + 1) % (longlong)iVar3;
      uVar4 = (uint)lVar2;
      iVar3 = FUN_14233f450(param_1);
      if (iVar3 == 3) {
        *(char *)(param_1 + 0x538) = (char)lVar2;
      }
    }
    if ((-1 < (int)uVar4) && ((int)uVar4 < *(int *)(param_1 + 0x250))) {
      *(char *)(param_1 + 0x4ed) = (char)uVar4;
      *(undefined8 *)(param_1 + 0x240) =
           *(undefined8 *)(*(longlong *)(param_1 + 0x248) + (longlong)(int)uVar4 * 8);
      return;
    }
    *(undefined1 *)(param_1 + 0x4ed) = 0;
  }
  return;
}



// FUNCTION 143095080 FUN_143095080 body=383 status=ok
// SIG undefined FUN_143095080(void)

void FUN_143095080(longlong param_1,ulonglong param_2,uint *param_3)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  
  lVar1 = *(longlong *)(param_3 + 2);
  if (lVar1 != 0) {
    plVar6 = (longlong *)0x0;
    plVar5 = plVar6;
    if ((*(uint *)(param_2 + 8) >> 4 & 1) == 0) {
      plVar5 = *(longlong **)(param_2 + 0x20);
    }
    uVar3 = *(uint *)(param_1 + 0x78);
    param_2 = param_2 & 0xffffffffffffff00;
    if (uVar3 == 0) {
      bVar2 = (**(code **)(*plVar5 + 0x858))(plVar5,param_2);
      param_2 = (ulonglong)bVar2;
    }
    else if ((char)uVar3 != '\0') {
      do {
        bVar2 = (byte)uVar3;
        if ((uVar3 & 1) != 0) break;
        uVar3 = (uint)(bVar2 >> 1);
        param_2 = CONCAT71((int7)(param_2 >> 8),(char)param_2 + '\x01');
      } while (1 < bVar2);
    }
    plVar5 = (longlong *)(**(code **)(plVar5[0x8c] + 0x10))(plVar5 + 0x8c,param_2);
    if (plVar5 != (longlong *)0x0) {
      iVar4 = (**(code **)(*plVar5 + 0x428))(plVar5);
      lVar8 = (longlong)*(int *)(lVar1 + 0x148);
      lVar9 = (longlong)iVar4;
      if (3 < lVar8) {
        lVar7 = 2;
        plVar5 = plVar6;
        do {
          if ((longlong)plVar6 < lVar9) {
            uVar10 = 0;
          }
          else {
            uVar10 = 0x3f800000;
          }
          *(undefined4 *)((longlong)plVar5 + *(longlong *)(lVar1 + 0x140) + 0x18) = uVar10;
          if (lVar7 + -1 < lVar9) {
            uVar10 = 0;
          }
          else {
            uVar10 = 0x3f800000;
          }
          *(undefined4 *)((longlong)plVar5 + *(longlong *)(lVar1 + 0x140) + 0x38) = uVar10;
          if (lVar7 < lVar9) {
            uVar10 = 0;
          }
          else {
            uVar10 = 0x3f800000;
          }
          *(undefined4 *)((longlong)plVar5 + *(longlong *)(lVar1 + 0x140) + 0x58) = uVar10;
          if (lVar7 + 1 < lVar9) {
            uVar10 = 0;
          }
          else {
            uVar10 = 0x3f800000;
          }
          plVar6 = (longlong *)((longlong)plVar6 + 4);
          lVar7 = lVar7 + 4;
          *(undefined4 *)((longlong)plVar5 + *(longlong *)(lVar1 + 0x140) + 0x78) = uVar10;
          plVar5 = plVar5 + 0x10;
        } while ((longlong)plVar6 < lVar8 + -3);
      }
      if ((longlong)plVar6 < lVar8) {
        lVar7 = (longlong)plVar6 << 5;
        do {
          if ((longlong)plVar6 < lVar9) {
            uVar10 = 0;
          }
          else {
            uVar10 = 0x3f800000;
          }
          plVar6 = (longlong *)((longlong)plVar6 + 1);
          *(undefined4 *)(lVar7 + 0x18 + *(longlong *)(lVar1 + 0x140)) = uVar10;
          lVar7 = lVar7 + 0x20;
        } while ((longlong)plVar6 < lVar8);
      }
    }
    *param_3 = *param_3 & 0xfffffff7;
  }
  return;
}



// FUNCTION 143095220 FUN_143095220 body=2217 status=ok
// SIG undefined FUN_143095220(void)

void FUN_143095220(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  wchar_t *pwVar5;
  undefined8 *puVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  longlong lVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  undefined8 *puVar14;
  undefined4 *puVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  wchar_t *pwVar19;
  longlong lVar20;
  undefined2 *puVar21;
  longlong *plVar22;
  longlong *plVar23;
  bool bVar24;
  undefined8 local_res8;
  longlong local_res10;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  longlong local_98;
  int local_90;
  int local_8c;
  undefined2 *local_88;
  int local_80;
  longlong *local_78;
  int local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [32];
  
  if (param_1[0x9e] != 0) {
    return;
  }
  uVar10 = UEnvQueryTest::GetPrivateStaticClass();
  AActor::GetComponentsByClass(param_1,&local_78,uVar10);
  if (local_70 < 1) {
    local_res8 = CONCAT44((int)((ulonglong)local_res8 >> 0x20),0xffffff00);
    puVar15 = (undefined4 *)FLinearColor::FLinearColor(local_58,&local_res8);
    local_68 = *puVar15;
    uStack_64 = puVar15[1];
    uStack_60 = puVar15[2];
    uStack_5c = puVar15[3];
    local_res10 = *(longlong *)(param_1[2] + 0x18);
    FName::ToString(&local_res10,&local_88);
    puVar21 = &DAT_143f3eda8;
    if (local_80 != 0) {
      puVar21 = local_88;
    }
    FString::PrintfImpl(&local_a8,L"WARNING (%s): ",puVar21);
    iVar18 = (int)local_a0;
    iVar17 = local_a0._4_4_;
    bVar24 = (int)local_a0 != 0;
    local_b8 = local_a8;
    local_b0._0_4_ = (int)local_a0;
    local_a8 = 0;
    local_b0._4_4_ = local_a0._4_4_;
    local_a0 = 0;
    if (iVar17 < (int)((0x60 - (uint)bVar24) + iVar18)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_b8);
      iVar18 = (int)local_b0;
    }
    local_90 = (0x60 - (uint)(iVar18 != 0)) + iVar18;
    local_b0 = CONCAT44(local_b0._4_4_,local_90);
    local_8c = local_b0._4_4_;
    if (local_b0._4_4_ < local_90) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,iVar18);
      local_8c = local_b0._4_4_;
      local_90 = (int)local_b0;
    }
    lVar20 = (longlong)iVar18 - (ulonglong)(iVar18 != 0);
    builtin_wcsncpy((wchar_t *)(local_b8 + lVar20 * 2),L"Projecti",8);
    lVar20 = local_b8 + lVar20 * 2;
    builtin_wcsncpy((wchar_t *)(lVar20 + 0x10),L"le h",4);
    builtin_wcsncpy((wchar_t *)(lVar20 + 0x18),L"as n",4);
    builtin_wcsncpy((wchar_t *)(lVar20 + 0x20),L"o mo",4);
    builtin_wcsncpy((wchar_t *)(lVar20 + 0x28),L"veme",4);
    builtin_wcsncpy((wchar_t *)(lVar20 + 0x30),L"nt c",4);
    builtin_wcsncpy((wchar_t *)(lVar20 + 0x38),L"ompo",4);
    builtin_wcsncpy((wchar_t *)(lVar20 + 0x40),L"nent",4);
    builtin_wcsncpy((wchar_t *)(lVar20 + 0x48),L"!  P",4);
    builtin_wcsncpy((wchar_t *)(lVar20 + 0x50),L"roje",4);
    builtin_wcsncpy((wchar_t *)(lVar20 + 0x58),L"ctil",4);
    builtin_wcsncpy((wchar_t *)(lVar20 + 0x60),L"es s",4);
    builtin_wcsncpy((wchar_t *)(lVar20 + 0x68),L"houl",4);
    builtin_wcsncpy((wchar_t *)(lVar20 + 0x70),L"d ha",4);
    builtin_wcsncpy((wchar_t *)(lVar20 + 0x78),L"ve a",4);
    builtin_wcsncpy((wchar_t *)(lVar20 + 0x80),L" Gbx",4);
    builtin_wcsncpy((wchar_t *)(lVar20 + 0x88),L"Proj",4);
    ((wchar_t *)(lVar20 + 0x90))[0] = L'e';
    ((wchar_t *)(lVar20 + 0x90))[1] = L'c';
    ((wchar_t *)(lVar20 + 0x94))[0] = L't';
    ((wchar_t *)(lVar20 + 0x94))[1] = L'i';
    ((wchar_t *)(lVar20 + 0x98))[0] = L'l';
    ((wchar_t *)(lVar20 + 0x98))[1] = L'e';
    ((wchar_t *)(lVar20 + 0x9c))[0] = L'M';
    ((wchar_t *)(lVar20 + 0x9c))[1] = L'o';
    ((wchar_t *)(lVar20 + 0xa0))[0] = L'v';
    ((wchar_t *)(lVar20 + 0xa0))[1] = L'e';
    ((wchar_t *)(lVar20 + 0xa4))[0] = L'm';
    ((wchar_t *)(lVar20 + 0xa4))[1] = L'e';
    ((wchar_t *)(lVar20 + 0xa8))[0] = L'n';
    ((wchar_t *)(lVar20 + 0xa8))[1] = L't';
    ((wchar_t *)(lVar20 + 0xac))[0] = L'C';
    ((wchar_t *)(lVar20 + 0xac))[1] = L'o';
    builtin_wcsncpy((wchar_t *)(lVar20 + 0xb0),L"mpon",4);
    ((wchar_t *)(lVar20 + 0xb8))[0] = L'e';
    ((wchar_t *)(lVar20 + 0xb8))[1] = L'n';
    *(wchar_t *)(lVar20 + 0xbc) = L't';
    *(undefined2 *)(lVar20 + 0xbe) = 0;
    local_98 = local_b8;
    lVar9 = (**(code **)(*param_1 + 0x148))(param_1);
  }
  else {
    pwVar19 = (wchar_t *)0x0;
    plVar23 = local_78 + local_70;
    for (plVar22 = local_78; plVar22 != plVar23; plVar22 = plVar22 + 1) {
      lVar20 = *plVar22;
      if (lVar20 != 0) {
        lVar11 = FUN_1430a9310();
        if ((*(int *)(*(longlong *)(lVar20 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar20 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
          bVar24 = false;
        }
        else {
          bVar24 = true;
        }
        if (bVar24) {
          if (param_1[0x9e] == 0) {
            param_1[0x9e] = lVar20;
          }
          else {
            local_res8 = CONCAT44((int)((ulonglong)local_res8 >> 0x20),0xffffff00);
            puVar15 = (undefined4 *)FLinearColor::FLinearColor(local_58,&local_res8);
            local_68 = *puVar15;
            uStack_64 = puVar15[1];
            uStack_60 = puVar15[2];
            uStack_5c = puVar15[3];
            local_res10 = *(longlong *)(param_1[2] + 0x18);
            FName::ToString(&local_res10,&local_88);
            FString::PrintfImpl(&local_a8,L"WARNING (%s): ");
            iVar18 = (int)local_a0;
            iVar17 = local_a0._4_4_;
            bVar24 = (int)local_a0 != 0;
            local_b8 = local_a8;
            local_a8 = 0;
            local_b0._0_4_ = (int)local_a0;
            local_b0._4_4_ = local_a0._4_4_;
            local_a0 = 0;
            if (iVar17 < (int)((0x79 - (uint)bVar24) + iVar18)) {
              TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_b8);
              iVar18 = (int)local_b0;
            }
            local_b0._0_4_ = (0x79 - (uint)(iVar18 != 0)) + iVar18;
            lVar20 = local_b8;
            iVar17 = local_b0._4_4_;
            if (local_b0._4_4_ < (int)local_b0) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,iVar18);
              lVar20 = local_b8;
              iVar17 = local_b0._4_4_;
              local_b0._0_4_ = (int)local_b0;
            }
            local_90 = (int)local_b0;
            local_8c = iVar17;
            local_b8 = 0;
            local_b0 = 0;
            lVar11 = (longlong)iVar18 - (ulonglong)(iVar18 != 0);
            builtin_wcsncpy((wchar_t *)(lVar20 + lVar11 * 2),L"Projecti",8);
            lVar11 = lVar20 + lVar11 * 2;
            builtin_wcsncpy((wchar_t *)(lVar11 + 0x10),L"le h",4);
            builtin_wcsncpy((wchar_t *)(lVar11 + 0x18),L"as m",4);
            builtin_wcsncpy((wchar_t *)(lVar11 + 0x20),L"ulti",4);
            builtin_wcsncpy((wchar_t *)(lVar11 + 0x28),L"ple ",4);
            builtin_wcsncpy((wchar_t *)(lVar11 + 0x30),L"comp",4);
            builtin_wcsncpy((wchar_t *)(lVar11 + 0x38),L"onen",4);
            builtin_wcsncpy((wchar_t *)(lVar11 + 0x40),L"ts t",4);
            builtin_wcsncpy((wchar_t *)(lVar11 + 0x48),L"hat ",4);
            builtin_wcsncpy((wchar_t *)(lVar11 + 0x50),L"deri",4);
            builtin_wcsncpy((wchar_t *)(lVar11 + 0x58),L"ve f",4);
            builtin_wcsncpy((wchar_t *)(lVar11 + 0x60),L"rom ",4);
            builtin_wcsncpy((wchar_t *)(lVar11 + 0x68),L"GbxP",4);
            builtin_wcsncpy((wchar_t *)(lVar11 + 0x70),L"roje",4);
            builtin_wcsncpy((wchar_t *)(lVar11 + 0x78),L"ctil",4);
            builtin_wcsncpy((wchar_t *)(lVar11 + 0x80),L"eMov",4);
            builtin_wcsncpy((wchar_t *)(lVar11 + 0x88),L"emen",4);
            builtin_wcsncpy((wchar_t *)(lVar11 + 0x90),L"tCom",4);
            builtin_wcsncpy((wchar_t *)(lVar11 + 0x98),L"pone",4);
            builtin_wcsncpy((wchar_t *)(lVar11 + 0xa0),L"nt. ",4);
            builtin_wcsncpy((wchar_t *)(lVar11 + 0xa8),L" Thi",4);
            builtin_wcsncpy((wchar_t *)(lVar11 + 0xb0),L"s ca",4);
            builtin_wcsncpy((wchar_t *)(lVar11 + 0xb8),L"n ca",4);
            builtin_wcsncpy((wchar_t *)(lVar11 + 0xc0),L"use ",4);
            builtin_wcsncpy((wchar_t *)(lVar11 + 200),L"unex",4);
            ((wchar_t *)(lVar11 + 0xd0))[0] = L'p';
            ((wchar_t *)(lVar11 + 0xd0))[1] = L'e';
            ((wchar_t *)(lVar11 + 0xd4))[0] = L'c';
            ((wchar_t *)(lVar11 + 0xd4))[1] = L't';
            ((wchar_t *)(lVar11 + 0xd8))[0] = L'e';
            ((wchar_t *)(lVar11 + 0xd8))[1] = L'd';
            ((wchar_t *)(lVar11 + 0xdc))[0] = L' ';
            ((wchar_t *)(lVar11 + 0xdc))[1] = L'b';
            ((wchar_t *)(lVar11 + 0xe0))[0] = L'e';
            ((wchar_t *)(lVar11 + 0xe0))[1] = L'h';
            ((wchar_t *)(lVar11 + 0xe4))[0] = L'a';
            ((wchar_t *)(lVar11 + 0xe4))[1] = L'v';
            ((wchar_t *)(lVar11 + 0xe8))[0] = L'i';
            ((wchar_t *)(lVar11 + 0xe8))[1] = L'o';
            ((wchar_t *)(lVar11 + 0xec))[0] = L'r';
            ((wchar_t *)(lVar11 + 0xec))[1] = L'.';
            *(undefined2 *)(lVar11 + 0xf0) = 0;
            local_98 = lVar20;
            lVar9 = (**(code **)(*param_1 + 0x148))(param_1);
            AK::MemoryMgr::StartProfileThreadUsage(lVar9);
            if (local_98 != 0) {
              FMemory::Free();
            }
            if (local_a8 != 0) {
              FMemory::Free();
            }
            if (local_88 != (undefined2 *)0x0) {
              FMemory::Free();
            }
          }
        }
      }
    }
    if (param_1[0x9e] != 0) {
      FUN_1430633c0();
      iVar18 = *(int *)((longlong)param_1 + 0xc);
      pwVar13 = pwVar19;
      if (iVar18 < (int)DAT_1469e91c4) {
        uVar16 = iVar18 >> 0x1f & 0xffff;
        uVar8 = iVar18 + uVar16;
        pwVar13 = (wchar_t *)
                  (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
                  (longlong)(int)((uVar8 & 0xffff) - uVar16) * 0x18);
      }
      if ((*(uint *)(pwVar13 + 4) >> 0x1d & 1) == 0) {
        pwVar12 = _guard_xfg_dispatch_icall_nop(L"&AProjectile::BounceDelegate",L"::");
        pwVar13 = pwVar19;
        while (pwVar5 = pwVar12, pwVar5 != (wchar_t *)0x0) {
          pwVar12 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
          pwVar13 = pwVar5;
        }
        FName::FName(&local_res10,pwVar13 + 2,1);
        lVar11 = local_res10;
        lVar20 = param_1[0x9e];
        plVar23 = (longlong *)(lVar20 + 0x1f0);
        FWeakObjectPtr::operator=(&local_b8,0);
        local_b0 = 0;
        FWeakObjectPtr::operator=(&local_b8,param_1);
        local_b0 = lVar11;
        local_res8 = 0;
        if ((lVar11 != 0) && (lVar11 = FWeakObjectPtr::Get(&local_b8), lVar11 != 0)) {
          UObject::FindFunction(lVar11,local_b0);
        }
        TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar23);
        iVar18 = *(int *)(lVar20 + 0x1f8);
        *(int *)(lVar20 + 0x1f8) = iVar18 + 1;
        if (*(int *)(lVar20 + 0x1fc) < iVar18 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar23,iVar18);
        }
        puVar15 = (undefined4 *)((longlong)iVar18 * 0x10 + *plVar23);
        *puVar15 = (undefined4)local_b8;
        puVar15[1] = local_b8._4_4_;
        *(longlong *)(puVar15 + 2) = local_b0;
        pwVar13 = _guard_xfg_dispatch_icall_nop(L"&AProjectile::OnLastBounce",L"::");
        while (pwVar12 = pwVar13, pwVar12 != (wchar_t *)0x0) {
          pwVar13 = _guard_xfg_dispatch_icall_nop(pwVar12 + 1,L"::");
          pwVar19 = pwVar12;
        }
        FName::FName(&local_res10,pwVar19 + 2,1);
        lVar11 = local_res10;
        lVar20 = param_1[0x9e];
        plVar23 = (longlong *)(lVar20 + 600);
        FWeakObjectPtr::operator=(&local_b8,0);
        local_b0 = 0;
        FWeakObjectPtr::operator=(&local_b8,param_1);
        local_b0 = lVar11;
        local_res8 = 0;
        if ((lVar11 != 0) && (lVar11 = FWeakObjectPtr::Get(&local_b8), lVar11 != 0)) {
          UObject::FindFunction(lVar11,local_b0);
        }
        TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar23);
        iVar18 = *(int *)(lVar20 + 0x260);
        *(int *)(lVar20 + 0x260) = iVar18 + 1;
        if (*(int *)(lVar20 + 0x264) < iVar18 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar23,iVar18);
        }
        puVar15 = (undefined4 *)((longlong)iVar18 * 0x10 + *plVar23);
        *puVar15 = (undefined4)local_b8;
        puVar15[1] = local_b8._4_4_;
        *(longlong *)(puVar15 + 2) = local_b0;
      }
      goto LAB_143095a81;
    }
    local_res8 = CONCAT44((int)((ulonglong)local_res8 >> 0x20),0xffffff00);
    puVar15 = (undefined4 *)FLinearColor::FLinearColor(local_58,&local_res8);
    local_68 = *puVar15;
    uStack_64 = puVar15[1];
    uStack_60 = puVar15[2];
    uStack_5c = puVar15[3];
    local_res10 = *(longlong *)(param_1[2] + 0x18);
    FName::ToString(&local_res10,&local_88);
    puVar21 = &DAT_143f3eda8;
    if (local_80 != 0) {
      puVar21 = local_88;
    }
    FString::PrintfImpl(&local_a8,L"WARNING (%s): ",puVar21);
    iVar18 = (int)local_a0;
    iVar17 = local_a0._4_4_;
    bVar24 = (int)local_a0 != 0;
    local_b8 = local_a8;
    local_a8 = 0;
    local_b0._0_4_ = (int)local_a0;
    local_b0._4_4_ = local_a0._4_4_;
    local_a0 = 0;
    if (iVar17 < (int)((0x91 - (uint)bVar24) + iVar18)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_b8);
      iVar18 = (int)local_b0;
    }
    iVar17 = (0x91 - (uint)(iVar18 != 0)) + iVar18;
    local_b0 = CONCAT44(local_b0._4_4_,iVar17);
    iVar7 = local_b0._4_4_;
    if (local_b0._4_4_ < iVar17) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,iVar18);
      iVar17 = (int)local_b0;
      iVar7 = local_b0._4_4_;
    }
    local_8c = iVar7;
    lVar20 = 2;
    puVar1 = (undefined8 *)(local_b8 + ((longlong)iVar18 - (ulonglong)(iVar18 != 0)) * 2);
    puVar6 = puVar1;
    pwVar19 = 
    L"Projectile has no movement component that derives from GbxProjectileMovementComponent.  Projectiles should have a GbxProjectileMovementComponent"
    ;
    do {
      pwVar13 = pwVar19;
      puVar14 = puVar6;
      uVar10 = *(undefined8 *)(pwVar13 + 4);
      *puVar14 = *(undefined8 *)pwVar13;
      puVar14[1] = uVar10;
      uVar10 = *(undefined8 *)(pwVar13 + 0xc);
      puVar14[2] = *(undefined8 *)(pwVar13 + 8);
      puVar14[3] = uVar10;
      uVar10 = *(undefined8 *)(pwVar13 + 0x14);
      puVar14[4] = *(undefined8 *)(pwVar13 + 0x10);
      puVar14[5] = uVar10;
      uVar10 = *(undefined8 *)(pwVar13 + 0x1c);
      puVar14[6] = *(undefined8 *)(pwVar13 + 0x18);
      puVar14[7] = uVar10;
      uVar10 = *(undefined8 *)(pwVar13 + 0x24);
      puVar14[8] = *(undefined8 *)(pwVar13 + 0x20);
      puVar14[9] = uVar10;
      uVar10 = *(undefined8 *)(pwVar13 + 0x2c);
      puVar14[10] = *(undefined8 *)(pwVar13 + 0x28);
      puVar14[0xb] = uVar10;
      uVar10 = *(undefined8 *)(pwVar13 + 0x34);
      puVar14[0xc] = *(undefined8 *)(pwVar13 + 0x30);
      puVar14[0xd] = uVar10;
      uVar10 = *(undefined8 *)(pwVar13 + 0x3c);
      puVar14[0xe] = *(undefined8 *)(pwVar13 + 0x38);
      puVar14[0xf] = uVar10;
      lVar20 = lVar20 + -1;
      puVar6 = puVar14 + 0x10;
      pwVar19 = pwVar13 + 0x40;
    } while (lVar20 != 0);
    uVar2 = *(undefined4 *)(pwVar13 + 0x42);
    uVar3 = *(undefined4 *)(pwVar13 + 0x44);
    uVar4 = *(undefined4 *)(pwVar13 + 0x46);
    *(undefined4 *)(puVar14 + 0x10) = *(undefined4 *)(pwVar13 + 0x40);
    *(undefined4 *)((longlong)puVar14 + 0x84) = uVar2;
    *(undefined4 *)(puVar14 + 0x11) = uVar3;
    *(undefined4 *)((longlong)puVar14 + 0x8c) = uVar4;
    uVar2 = *(undefined4 *)(pwVar13 + 0x4a);
    uVar3 = *(undefined4 *)(pwVar13 + 0x4c);
    uVar4 = *(undefined4 *)(pwVar13 + 0x4e);
    *(undefined4 *)(puVar14 + 0x12) = *(undefined4 *)(pwVar13 + 0x48);
    *(undefined4 *)((longlong)puVar14 + 0x94) = uVar2;
    *(undefined4 *)(puVar14 + 0x13) = uVar3;
    *(undefined4 *)((longlong)puVar14 + 0x9c) = uVar4;
    *(undefined2 *)(puVar1 + 0x24) = 0;
    local_98 = local_b8;
    local_90 = iVar17;
    lVar9 = (**(code **)(*param_1 + 0x148))(param_1);
  }
  AK::MemoryMgr::StartProfileThreadUsage(lVar9);
  if (local_98 != 0) {
    FMemory::Free();
  }
  if (local_a8 != 0) {
    FMemory::Free();
  }
  if (local_88 != (undefined2 *)0x0) {
    FMemory::Free();
  }
LAB_143095a81:
  if (local_78 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 143095ad0 FUN_143095ad0 body=71 status=ok
// SIG undefined FUN_143095ad0(void)

void FUN_143095ad0(longlong *param_1)

{
  longlong lVar1;
  
  FUN_1430a7590();
  if ((*(byte *)(param_1 + 0x9c) & 8) != 0) {
    lVar1 = FUN_14309ed70(param_1);
    if (*(longlong *)(lVar1 + 0x7f8) == DAT_146b479a0) {
                    /* WARNING: Could not recover jumptable at 0x000143095b0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x418))(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 143095b20 FUN_143095b20 body=630 status=ok
// SIG undefined FUN_143095b20(void)

void FUN_143095b20(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float local_58;
  
  if (((*(byte *)(param_1 + 0x1c8) & 0x40) == 0) || (*(char *)(param_1 + 0x2c8) == '\0')) {
    fVar6 = *(float *)(param_1 + 0x300);
    fVar8 = *(float *)(param_1 + 0x2fc);
    fVar1 = fVar8 * fVar8 + fVar6 * fVar6 +
            *(float *)(param_1 + 0x304) * *(float *)(param_1 + 0x304);
    if (fVar1 == 1.0) {
      local_58 = (float)*(undefined8 *)(param_1 + 0x2fc);
      fVar3 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x2fc) >> 0x20);
    }
    else {
      local_58 = DAT_1468b5d90;
      fVar3 = DAT_1468b5d94;
      if (1e-08 <= fVar1) {
        auVar5 = rsqrtss(ZEXT416((uint)fVar1),ZEXT416((uint)fVar1));
        fVar3 = auVar5._0_4_;
        fVar3 = fVar3 + fVar3 * (0.5 - fVar1 * 0.5 * fVar3 * fVar3);
        fVar3 = fVar3 + fVar3 * (0.5 - fVar1 * 0.5 * fVar3 * fVar3);
        local_58 = fVar8 * fVar3;
        fVar3 = fVar6 * fVar3;
      }
    }
    if (0.0001 <= ABS(param_2[2])) {
      fVar6 = (-(local_58 * *param_2) - fVar3 * param_2[1]) / param_2[2];
    }
    else {
      fVar6 = 0.0;
    }
    if (*(char *)(param_1 + 0x2e8) == '\0') {
      fVar8 = *(float *)(param_1 + 0x308);
    }
    else {
      fVar8 = *(float *)(param_1 + 0x2ec);
    }
    fVar2 = fVar3 * fVar3 + local_58 * local_58 + fVar6 * fVar6;
    fVar1 = fVar6;
    fVar7 = local_58;
    fVar4 = fVar3;
    if ((fVar2 != 1.0) &&
       (fVar1 = DAT_1468b5d98, fVar7 = DAT_1468b5d90, fVar4 = DAT_1468b5d94, 1e-08 <= fVar2)) {
      auVar5 = rsqrtss(ZEXT416((uint)fVar2),ZEXT416((uint)fVar2));
      fVar4 = auVar5._0_4_;
      fVar4 = fVar4 + fVar4 * (0.5 - fVar2 * 0.5 * fVar4 * fVar4);
      fVar4 = fVar4 + fVar4 * (0.5 - fVar2 * 0.5 * fVar4 * fVar4);
      fVar1 = fVar4 * fVar6;
      fVar7 = fVar4 * local_58;
      fVar4 = fVar4 * fVar3;
    }
    *(ulonglong *)(param_1 + 0x18c) = CONCAT44(fVar4 * fVar8,fVar7 * fVar8);
    *(float *)(param_1 + 0x194) = fVar1 * fVar8;
  }
  return;
}



// FUNCTION 143095da0 FUN_143095da0 body=74 status=ok
// SIG undefined FUN_143095da0(void)

undefined1 FUN_143095da0(longlong param_1)

{
  if (((ABS(*(float *)(param_1 + 0x19c)) < *(float *)(param_1 + 0x1b4) ||
        ABS(*(float *)(param_1 + 0x19c)) == *(float *)(param_1 + 0x1b4)) &&
      (ABS(*(float *)(param_1 + 0x1a0)) < *(float *)(param_1 + 0x1b8) ||
       ABS(*(float *)(param_1 + 0x1a0)) == *(float *)(param_1 + 0x1b8))) &&
     (ABS(*(float *)(param_1 + 0x1a4)) < *(float *)(param_1 + 0x1bc) ||
      ABS(*(float *)(param_1 + 0x1a4)) == *(float *)(param_1 + 0x1bc))) {
    return 0;
  }
  return 1;
}



// FUNCTION 143095df0 FUN_143095df0 body=488 status=ok
// SIG undefined FUN_143095df0(void)

void FUN_143095df0(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined1 local_res8 [8];
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  
  if ((((((longlong *)param_1[0x2a] != (longlong *)0x0) &&
        (cVar2 = (**(code **)(*(longlong *)param_1[0x2a] + 0x778))(), cVar2 != '\0')) &&
       ((int)(uint)*(byte *)(param_1 + 0xd2) < (int)param_1[0xd4])) &&
      ((plVar1 = *(longlong **)(param_1[0xd3] + 8 + (ulonglong)*(byte *)(param_1 + 0xd2) * 0x48),
       plVar1 != (longlong *)0x0 && ((*(byte *)((longlong)plVar1 + 0x181) & 1) != 0)))) &&
     (cVar2 = (**(code **)(*plVar1 + 0x470))(), cVar2 == '\0')) {
    uVar7 = (ulonglong)*(byte *)(param_1 + 0xd2);
    lVar4 = param_1[0xd3];
    if ((((int)param_1[0xd4] <= (int)(uint)*(byte *)(param_1 + 0xd2)) ||
        (*(longlong *)(lVar4 + 8 + uVar7 * 0x48) == 0)) ||
       (*(longlong *)(lVar4 + 0x18 + uVar7 * 0x48) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000143095e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x8f0))(param_1,*(undefined1 *)(lVar4 + 4 + uVar7 * 0x48));
      return;
    }
  }
  lVar4 = (**(code **)(param_1[0x8c] + 0x10))(param_1 + 0x8c,(char)param_1[0xd2]);
  if (lVar4 != 0) {
    FWeakObjectPtr::operator=(&local_38,0);
    uVar8 = 0;
    local_30 = 0;
    puVar5 = (undefined8 *)FName::FName(local_res8,L"OnAmmoGivenToEmptyWeapon",1);
    FWeakObjectPtr::operator=(&local_38,param_1);
    local_30 = *puVar5;
    local_28 = local_38;
    local_24 = local_34;
    local_20 = local_30;
    if (0 < (int)param_1[0xd4]) {
      do {
        lVar4 = (**(code **)(param_1[0x8c] + 0x10))(param_1 + 0x8c,uVar8 & 0xff);
        if (lVar4 != 0) {
          plVar1 = (longlong *)(lVar4 + 400);
          iVar3 = TArray<TScriptDelegate<FWeakObjectPtr>,FDefaultAllocator>::Find(plVar1,&local_28);
          if (iVar3 == -1) {
            iVar3 = *(int *)(lVar4 + 0x198);
            *(int *)(lVar4 + 0x198) = iVar3 + 1;
            if (*(int *)(lVar4 + 0x19c) < iVar3 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar3);
            }
            puVar6 = (undefined4 *)((longlong)iVar3 * 0x10 + *plVar1);
            *puVar6 = local_28;
            puVar6[1] = local_24;
            *(undefined8 *)(puVar6 + 2) = local_20;
          }
          TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
        }
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < (int)param_1[0xd4]);
    }
  }
  return;
}



// FUNCTION 143095fe0 FUN_143095fe0 body=1459 status=ok
// SIG undefined FUN_143095fe0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_143095fe0(undefined8 *param_1,longlong *param_2,longlong *param_3,longlong param_4,
             undefined8 param_5,undefined4 param_6)

{
  undefined1 auVar1 [16];
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_298 [32];
  undefined4 local_278;
  undefined8 *local_270;
  undefined1 *local_268;
  undefined8 local_258;
  float local_250;
  float local_248;
  float local_244;
  float local_240;
  float local_238;
  float local_234;
  float local_230;
  undefined8 local_228;
  float fStack_220;
  undefined4 uStack_21c;
  float local_218;
  float local_214;
  float local_210;
  float local_208;
  float local_204;
  float local_200;
  undefined8 local_1f8 [2];
  undefined1 local_1e8 [32];
  undefined1 local_1c8 [12];
  undefined4 local_1bc;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  undefined8 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined2 local_124;
  undefined1 local_122;
  undefined4 local_120;
  undefined1 local_11c;
  undefined4 local_118;
  undefined2 local_114;
  longlong local_f0;
  undefined8 local_e8;
  longlong local_d0;
  undefined8 local_c8;
  ulonglong local_b8;
  
  local_b8 = DAT_1468387a8 ^ (ulonglong)auStack_298;
  if (((param_2 == (longlong *)0x0) ||
      (plVar3 = (longlong *)(**(code **)(*param_2 + 0x678))(param_2), plVar3 == (longlong *)0x0)) ||
     (lVar4 = (**(code **)(*plVar3 + 0x148))(plVar3), lVar4 == 0)) {
    uVar6 = uRam00000001468b5b78;
    *param_1 = _DAT_1468b5b70;
    param_1[1] = uVar6;
    uVar6 = uRam00000001468b5b88;
    param_1[2] = _DAT_1468b5b80;
    param_1[3] = uVar6;
    uVar6 = uRam00000001468b5b98;
    param_1[4] = _DAT_1468b5b90;
    param_1[5] = uVar6;
  }
  else {
    lVar4 = plVar3[0x2d];
    if (lVar4 == 0) {
      local_258 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      local_250 = DAT_1468b5d98;
    }
    else {
      local_258 = *(undefined8 *)(lVar4 + 0x220);
      local_250 = *(float *)(lVar4 + 0x228);
    }
    local_228 = local_258;
    fStack_220 = local_250;
    if ((param_3 != (longlong *)0x0) ||
       ((local_1f8[0] = 0, param_4 != 0 &&
        (param_3 = (longlong *)FUN_14222b250(plVar3,param_4,0), param_3 != (longlong *)0x0)))) {
      puVar5 = (undefined8 *)(**(code **)(*param_3 + 0x428))(param_3,local_1f8,param_4);
      local_228 = *puVar5;
      fStack_220 = *(float *)(puVar5 + 1);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146b47b08) &&
       (_Init_thread_header(&DAT_146b47b08), DAT_146b47b08 == -1)) {
      FName::FName(&DAT_146b47b00,L"GetSafeProjectileThrowTransform",1);
      _Init_thread_footer(&DAT_146b47b08);
    }
    (**(code **)(*plVar3 + 0x648))(plVar3,&local_248,&local_258);
    FRotator::Vector(&local_258,&local_208);
    local_130 = 0;
    local_f0 = 0;
    local_218 = local_208 * 5000.0 + local_248;
    local_e8 = 0;
    local_210 = local_200 * 5000.0 + local_240;
    local_d0 = 0;
    local_c8 = 0;
    local_128 = 0x10000;
    local_120 = 0;
    local_214 = local_204 * 5000.0 + local_244;
    local_124 = 0;
    local_114 = 0x101;
    local_11c = 0;
    local_122 = 0;
    local_118 = 0;
    local_138 = DAT_146b47b00;
    FCollisionQueryParams::AddIgnoredActor(&local_138,plVar3);
    FCollisionQueryParams::AddIgnoredActors(&local_138,param_5);
    if (0 < (int)plVar3[0x2c]) {
      FCollisionQueryParams::AddIgnoredActors(&local_138,plVar3 + 0x2b);
    }
    FUN_1426d3dd0(local_1e8);
    FUN_1426ea8d0(local_1e8,2);
    FUN_142ddb300(local_1e8);
    _guard_xfg_dispatch_icall_nop(local_1c8,0,0x90);
    local_1bc = 0x3f800000;
    uVar6 = (**(code **)(*plVar3 + 0x148))(plVar3);
    local_268 = local_1e8;
    local_270 = &local_138;
    local_278 = param_6;
    cVar2 = UWorld::LineTraceSingleByChannel(uVar6,local_1c8,&local_248,&local_218);
    if (cVar2 == '\0') {
      local_1b4 = local_218;
      local_1b0 = local_214;
      local_1ac = local_210;
    }
    fVar10 = local_1b4 - (float)local_228;
    fVar11 = local_1b0 - local_228._4_4_;
    fVar12 = local_1ac - fStack_220;
    fVar7 = fVar11 * fVar11 + fVar10 * fVar10 + fVar12 * fVar12;
    local_238 = fVar10;
    local_234 = fVar11;
    local_230 = fVar12;
    if ((fVar7 != 1.0) &&
       (local_238 = DAT_1468b5d90, local_234 = DAT_1468b5d94, local_230 = DAT_1468b5d98,
       1e-08 <= fVar7)) {
      auVar9 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
      fVar8 = auVar9._0_4_;
      fVar8 = fVar8 + fVar8 * (0.5 - fVar7 * 0.5 * fVar8 * fVar8);
      fVar8 = fVar8 + fVar8 * (0.5 - fVar7 * 0.5 * fVar8 * fVar8);
      local_238 = fVar10 * fVar8;
      local_234 = fVar11 * fVar8;
      local_230 = fVar12 * fVar8;
    }
    if (0.0 < local_238 * local_208 + local_234 * local_204 + local_230 * local_200) {
      local_248 = (float)local_228;
      local_244 = local_228._4_4_;
      local_240 = fStack_220;
      puVar5 = (undefined8 *)FVector::Rotation(&local_238,&local_228);
      local_258 = *puVar5;
      local_250 = *(float *)(puVar5 + 1);
    }
    FRotator::Quaternion(&local_258,&local_228);
    *param_1 = local_228;
    param_1[1] = CONCAT44(uStack_21c,fStack_220);
    auVar9._4_4_ = local_244;
    auVar9._0_4_ = local_248;
    auVar9._8_4_ = local_240;
    auVar9._12_4_ = 0;
    *(undefined1 (*) [16])(param_1 + 2) = auVar9;
    auVar1._4_4_ = DAT_1464aa788._4_4_;
    auVar1._0_4_ = (undefined4)DAT_1464aa788;
    auVar1._8_4_ = DAT_1464aa790;
    auVar1._12_4_ = 0;
    *(undefined1 (*) [16])(param_1 + 4) = auVar1;
    if (local_d0 != 0) {
      FMemory::Free();
    }
    if (local_f0 != 0) {
      FMemory::Free();
    }
  }
  return param_1;
}



// FUNCTION 1430965a0 FUN_1430965a0 body=66 status=ok
// SIG undefined FUN_1430965a0(void)

void FUN_1430965a0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_145a69d40;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_145a69d88;
  }
  return;
}



// FUNCTION 143096600 FUN_143096600 body=26 status=ok
// SIG undefined FUN_143096600(void)

undefined1 FUN_143096600(longlong param_1)

{
  if (*(char *)(*(longlong *)(param_1 + 8) + 8) == '\0') {
    FUN_14309f510();
  }
  return 1;
}



// FUNCTION 143096620 FUN_143096620 body=66 status=ok
// SIG undefined FUN_143096620(void)

void FUN_143096620(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_145a69dd0;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_145a69e18;
  }
  return;
}



// FUNCTION 143096670 FUN_143096670 body=46 status=ok
// SIG undefined FUN_143096670(void)

void FUN_143096670(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (*(char *)(lVar1 + 200) == '\0') {
    uVar2 = FUN_14309b120();
    FUN_1430990d0(lVar1,uVar2);
    return;
  }
  return;
}



// FUNCTION 1430966a0 FUN_1430966a0 body=43 status=ok
// SIG undefined FUN_1430966a0(void)

undefined1 FUN_1430966a0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (*(char *)(lVar1 + 200) == '\0') {
    uVar2 = FUN_14309b120();
    FUN_1430990d0(lVar1,uVar2);
  }
  return 1;
}



// FUNCTION 1430966d0 FUN_1430966d0 body=405 status=ok
// SIG undefined FUN_1430966d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1430966d0(longlong param_1,undefined8 param_2,ulonglong *param_3,undefined8 *param_4,
                      undefined1 *param_5)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ulonglong *puVar4;
  longlong lVar5;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  ulonglong local_a8 [4];
  undefined8 local_88 [4];
  undefined1 local_68 [32];
  ulonglong local_48 [3];
  
  local_48[0] = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  icu_53::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::operator=();
  *(undefined8 *)(param_1 + 0x88) = 0;
  lVar1 = param_1 + 8;
  *(undefined8 *)(param_1 + 0x90) = 0;
  FUN_140c0ebb0(lVar1,0);
  FUN_14217e740(local_a8);
  local_b8 = 0;
  FUN_142194380(local_a8,0x28,0,0);
  local_a8[0] = *param_3;
  FUN_14217e740(local_88);
  local_b8 = 0;
  FUN_142194380(local_88,0x28,0,0);
  local_88[0] = *param_4;
  FUN_14217e740(local_68);
  local_b8 = 0;
  FUN_142194380(local_68,0x1d,0,1);
  local_68[0] = *param_5;
  lVar5 = 3;
  if (*(int *)(param_1 + 0x94) < 3) {
    FUN_140a70170(lVar1,3);
  }
  puVar4 = local_a8;
  do {
    iVar2 = *(int *)(param_1 + 0x90);
    *(int *)(param_1 + 0x90) = iVar2 + 1;
    if (*(int *)(param_1 + 0x94) < iVar2 + 1) {
      TArray<FBlendedCurve,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(lVar1,iVar2);
    }
    lVar3 = *(longlong *)(param_1 + 0x88);
    if (*(longlong *)(param_1 + 0x88) == 0) {
      lVar3 = lVar1;
    }
    FUN_14217e5b0(lVar3 + (longlong)iVar2 * 0x20,puVar4);
    puVar4 = puVar4 + 4;
  } while (puVar4 != local_48);
  puVar4 = local_48;
  do {
    puVar4 = puVar4 + -4;
    FUN_14217f430(puVar4);
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return param_1;
}



// FUNCTION 143096870 FUN_143096870 body=405 status=ok
// SIG undefined FUN_143096870(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_143096870(longlong param_1,undefined8 param_2,ulonglong *param_3,undefined8 *param_4,
                      undefined4 *param_5)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ulonglong *puVar4;
  longlong lVar5;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  ulonglong local_a8 [4];
  undefined8 local_88 [4];
  undefined4 local_68 [8];
  ulonglong local_48 [3];
  
  local_48[0] = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  icu_53::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::operator=();
  *(undefined8 *)(param_1 + 0x88) = 0;
  lVar1 = param_1 + 8;
  *(undefined8 *)(param_1 + 0x90) = 0;
  FUN_140c0ebb0(lVar1,0);
  FUN_14217e740(local_a8);
  local_b8 = 0;
  FUN_142194380(local_a8,0x28,0,0);
  local_a8[0] = *param_3;
  FUN_14217e740(local_88);
  local_b8 = 0;
  FUN_142194380(local_88,0x28,0,0);
  local_88[0] = *param_4;
  FUN_14217e740(local_68);
  local_b8 = 0;
  FUN_142194380(local_68,0xe,0,1);
  local_68[0] = *param_5;
  lVar5 = 3;
  if (*(int *)(param_1 + 0x94) < 3) {
    FUN_140a70170(lVar1,3);
  }
  puVar4 = local_a8;
  do {
    iVar2 = *(int *)(param_1 + 0x90);
    *(int *)(param_1 + 0x90) = iVar2 + 1;
    if (*(int *)(param_1 + 0x94) < iVar2 + 1) {
      TArray<FBlendedCurve,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(lVar1,iVar2);
    }
    lVar3 = *(longlong *)(param_1 + 0x88);
    if (*(longlong *)(param_1 + 0x88) == 0) {
      lVar3 = lVar1;
    }
    FUN_14217e5b0(lVar3 + (longlong)iVar2 * 0x20,puVar4);
    puVar4 = puVar4 + 4;
  } while (puVar4 != local_48);
  puVar4 = local_48;
  do {
    puVar4 = puVar4 + -4;
    FUN_14217f430(puVar4);
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return param_1;
}



// FUNCTION 143096a10 FUN_143096a10 body=1190 status=ok
// SIG undefined FUN_143096a10(void)

int FUN_143096a10(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 param_5,undefined8 param_6,float param_7)

{
  void *pvVar1;
  void *pvVar2;
  undefined2 *puVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  int iVar7;
  undefined2 *puVar8;
  int iVar9;
  int iVar10;
  void *pvVar11;
  undefined2 *puVar12;
  int iVar13;
  void *local_res8;
  void *local_88;
  int local_80;
  int local_7c;
  void *local_78;
  undefined8 local_70;
  void *local_68;
  undefined8 local_60;
  undefined2 *local_58;
  int local_50;
  undefined2 *local_48;
  int local_40;
  longlong local_38 [2];
  
  FString::PrintfImpl(&local_58,&DAT_144050d74,(double)param_7);
  puVar8 = &DAT_143f3eda8;
  puVar5 = &DAT_143f3eda8;
  if (local_50 != 0) {
    puVar5 = local_58;
  }
  if ((int)param_1[6] == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)param_1[5];
  }
  if ((int)param_1[4] == 0) {
    puVar12 = &DAT_143f3eda8;
  }
  else {
    puVar12 = (undefined2 *)param_1[3];
  }
  FString::PrintfImpl(&local_68,L"%s%s %s%s",puVar12,param_6,puVar3,puVar5);
  if (local_58 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FString::PrintfImpl(&local_48,&DAT_144732490,param_5);
  puVar5 = &DAT_143f3eda8;
  if (local_40 != 0) {
    puVar5 = local_48;
  }
  if ((int)param_1[6] == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)param_1[5];
  }
  if ((int)param_1[4] != 0) {
    puVar8 = (undefined2 *)param_1[3];
  }
  FString::PrintfImpl(&local_78,L"%s%s %s%s",puVar8,param_4,puVar3,puVar5);
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  puVar4 = (undefined8 *)FUN_1412887b0(param_1,local_38,param_2,param_3);
  local_88 = (void *)*puVar4;
  iVar10 = *(int *)(puVar4 + 1);
  *puVar4 = 0;
  local_80 = *(int *)(puVar4 + 1);
  local_7c = *(int *)((longlong)puVar4 + 0xc);
  puVar4[1] = 0;
  iVar7 = local_80;
  if (local_7c < (int)((2 - (uint)(iVar10 != 0)) + local_80)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_88);
    iVar7 = local_80;
  }
  local_80 = (2 - (uint)(iVar7 != 0)) + iVar7;
  local_res8 = local_88;
  if (local_7c < local_80) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88);
    local_res8 = local_88;
  }
  pvVar11 = local_78;
  local_88 = local_res8;
  lVar6 = (longlong)iVar7 - (ulonglong)(iVar7 != 0);
  *(undefined2 *)((longlong)local_res8 + lVar6 * 2) = 0x20;
  *(undefined2 *)((longlong)local_res8 + lVar6 * 2 + 2) = 0;
  iVar10 = (int)local_70;
  if (local_80 < 2) {
    iVar13 = local_70._4_4_;
    local_78 = (void *)0x0;
    local_70 = 0;
  }
  else {
    iVar7 = 0;
    if ((int)local_70 != 0) {
      iVar7 = (int)local_70 + -1;
    }
    if ((local_80 != 0) || (iVar10 = 1, iVar7 == 0)) {
      iVar10 = 0;
    }
    local_res8 = (void *)0x0;
    iVar9 = local_80;
    if (local_7c < iVar10 + local_80 + iVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo();
      iVar9 = local_80;
    }
    pvVar2 = local_78;
    pvVar11 = local_88;
    iVar13 = local_7c;
    iVar10 = iVar9;
    if (iVar7 != 0) {
      local_80 = iVar9 + (uint)(iVar9 == 0) + iVar7;
      if (local_7c < local_80) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,iVar9);
      }
      iVar13 = local_7c;
      iVar10 = local_80;
      pvVar11 = local_88;
      pvVar1 = (void *)((longlong)local_88 + ((longlong)iVar9 - (ulonglong)(iVar9 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar7 * 2);
      *(undefined2 *)((longlong)iVar7 * 2 + (longlong)pvVar1) = 0;
    }
  }
  local_88 = pvVar11;
  local_7c = iVar13;
  if (iVar13 < (int)((2 - (uint)(iVar10 != 0)) + iVar10)) {
    local_80 = iVar10;
    TArray<wchar_t,FDefaultAllocator>::ResizeTo();
    iVar10 = local_80;
  }
  local_80 = (2 - (uint)(iVar10 != 0)) + iVar10;
  if (local_7c < local_80) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,iVar10);
  }
  pvVar11 = local_68;
  lVar6 = (longlong)iVar10 - (ulonglong)(iVar10 != 0);
  *(undefined2 *)((longlong)local_88 + lVar6 * 2) = 0x20;
  *(undefined2 *)((longlong)local_88 + lVar6 * 2 + 2) = 0;
  iVar10 = (int)local_60;
  if (local_80 < 2) {
    local_68 = (void *)0x0;
    local_60 = 0;
    if (local_88 != (void *)0x0) {
      FMemory::Free(local_88);
    }
  }
  else {
    iVar7 = 0;
    if ((int)local_60 != 0) {
      iVar7 = (int)local_60 + -1;
    }
    if ((local_80 != 0) || (iVar10 = 1, iVar7 == 0)) {
      iVar10 = 0;
    }
    if (local_7c < iVar10 + local_80 + iVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_88);
    }
    pvVar2 = local_68;
    iVar9 = local_80;
    pvVar11 = local_88;
    iVar10 = local_80;
    if (iVar7 != 0) {
      lVar6 = (longlong)local_80;
      local_80 = local_80 + (uint)(local_80 == 0) + iVar7;
      if (local_7c < local_80) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,iVar9);
      }
      iVar10 = local_80;
      pvVar11 = local_88;
      pvVar1 = (void *)((longlong)local_88 + (lVar6 - (ulonglong)(iVar9 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar7 * 2);
      *(undefined2 *)((longlong)iVar7 * 2 + (longlong)pvVar1) = 0;
    }
  }
  if (local_res8 != (void *)0x0) {
    FMemory::Free(local_res8);
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free();
  }
  iVar7 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar7 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar7);
  }
  puVar4 = (undefined8 *)((longlong)iVar7 * 0x10 + *param_1);
  *puVar4 = 0;
  *(int *)(puVar4 + 1) = iVar10;
  if (iVar10 == 0) {
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar4,iVar10,0);
    _guard_xfg_dispatch_icall_nop((void *)*puVar4,pvVar11,(longlong)iVar10 * 2);
  }
  if (pvVar11 != (void *)0x0) {
    FMemory::Free(pvVar11);
  }
  return iVar7;
}



// FUNCTION 143096ec0 FUN_143096ec0 body=710 status=ok
// SIG undefined FUN_143096ec0(void)

int FUN_143096ec0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 float param_5)

{
  void *_Dst;
  int iVar1;
  void *_Src;
  undefined2 *puVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined2 *puVar8;
  void *_Src_00;
  void *local_68;
  int local_60;
  int local_5c;
  void *local_58;
  undefined8 local_50;
  undefined2 *local_48;
  int local_40;
  longlong local_38 [2];
  
  FString::PrintfImpl(&local_48,&DAT_144050d74,(double)param_5);
  puVar8 = &DAT_143f3eda8;
  puVar4 = &DAT_143f3eda8;
  if (local_40 != 0) {
    puVar4 = local_48;
  }
  if ((int)param_1[6] == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)param_1[5];
  }
  if ((int)param_1[4] != 0) {
    puVar8 = (undefined2 *)param_1[3];
  }
  FString::PrintfImpl(&local_58,L"%s%s %s%s",puVar8,param_4,puVar2,puVar4);
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  puVar3 = (undefined8 *)FUN_1412887b0(param_1,local_38,param_2,param_3);
  iVar7 = *(int *)(puVar3 + 1);
  local_68 = (void *)*puVar3;
  *puVar3 = 0;
  local_60 = *(int *)(puVar3 + 1);
  local_5c = *(int *)((longlong)puVar3 + 0xc);
  puVar3[1] = 0;
  iVar6 = local_60;
  if (local_5c < (int)((2 - (uint)(iVar7 != 0)) + local_60)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_68);
    iVar6 = local_60;
  }
  local_60 = (2 - (uint)(iVar6 != 0)) + iVar6;
  if (local_5c < local_60) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,iVar6);
  }
  _Src_00 = local_58;
  lVar5 = (longlong)iVar6 - (ulonglong)(iVar6 != 0);
  *(undefined2 *)((longlong)local_68 + lVar5 * 2) = 0x20;
  *(undefined2 *)((longlong)local_68 + lVar5 * 2 + 2) = 0;
  iVar7 = (int)local_50;
  if (local_60 < 2) {
    local_58 = (void *)0x0;
    local_50 = 0;
    if (local_68 != (void *)0x0) {
      FMemory::Free(local_68);
    }
  }
  else {
    iVar6 = 0;
    if ((int)local_50 != 0) {
      iVar6 = (int)local_50 + -1;
    }
    if ((local_60 != 0) || (iVar7 = 1, iVar6 == 0)) {
      iVar7 = 0;
    }
    if (local_5c < iVar7 + local_60 + iVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_68);
    }
    _Src = local_58;
    iVar1 = local_60;
    _Src_00 = local_68;
    iVar7 = local_60;
    if (iVar6 != 0) {
      lVar5 = (longlong)local_60;
      local_60 = local_60 + (uint)(local_60 == 0) + iVar6;
      if (local_5c < local_60) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,iVar1);
      }
      iVar7 = local_60;
      _Src_00 = local_68;
      _Dst = (void *)((longlong)local_68 + (lVar5 - (ulonglong)(iVar1 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar6 * 2);
      *(undefined2 *)((longlong)_Dst + (longlong)iVar6 * 2) = 0;
    }
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free();
  }
  iVar6 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar6 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar6 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar6);
  }
  puVar3 = (undefined8 *)((longlong)iVar6 * 0x10 + *param_1);
  *puVar3 = 0;
  *(int *)(puVar3 + 1) = iVar7;
  if (iVar7 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar3,iVar7,0);
    _guard_xfg_dispatch_icall_nop((void *)*puVar3,_Src_00,(longlong)iVar7 * 2);
  }
  if (_Src_00 != (void *)0x0) {
    FMemory::Free(_Src_00);
  }
  return iVar6;
}



// FUNCTION 143097190 FUN_143097190 body=1198 status=ok
// SIG undefined FUN_143097190(void)

int FUN_143097190(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 float param_5,undefined8 param_6,float param_7)

{
  void *pvVar1;
  void *pvVar2;
  undefined2 *puVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  int iVar7;
  undefined2 *puVar8;
  int iVar9;
  int iVar10;
  void *pvVar11;
  undefined2 *puVar12;
  int iVar13;
  void *local_res8;
  void *local_88;
  int local_80;
  int local_7c;
  void *local_78;
  undefined8 local_70;
  void *local_68;
  undefined8 local_60;
  undefined2 *local_58;
  int local_50;
  undefined2 *local_48;
  int local_40;
  longlong local_38 [2];
  
  FString::PrintfImpl(&local_58,&DAT_144050d74,(double)param_7);
  puVar8 = &DAT_143f3eda8;
  puVar5 = &DAT_143f3eda8;
  if (local_50 != 0) {
    puVar5 = local_58;
  }
  if ((int)param_1[6] == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)param_1[5];
  }
  if ((int)param_1[4] == 0) {
    puVar12 = &DAT_143f3eda8;
  }
  else {
    puVar12 = (undefined2 *)param_1[3];
  }
  FString::PrintfImpl(&local_68,L"%s%s %s%s",puVar12,param_6,puVar3,puVar5);
  if (local_58 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FString::PrintfImpl(&local_48,&DAT_144050d74,(double)param_5);
  puVar5 = &DAT_143f3eda8;
  if (local_40 != 0) {
    puVar5 = local_48;
  }
  if ((int)param_1[6] == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)param_1[5];
  }
  if ((int)param_1[4] != 0) {
    puVar8 = (undefined2 *)param_1[3];
  }
  FString::PrintfImpl(&local_78,L"%s%s %s%s",puVar8,param_4,puVar3,puVar5);
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  puVar4 = (undefined8 *)FUN_1412887b0(param_1,local_38,param_2,param_3);
  local_88 = (void *)*puVar4;
  iVar10 = *(int *)(puVar4 + 1);
  *puVar4 = 0;
  local_80 = *(int *)(puVar4 + 1);
  local_7c = *(int *)((longlong)puVar4 + 0xc);
  puVar4[1] = 0;
  iVar7 = local_80;
  if (local_7c < (int)((2 - (uint)(iVar10 != 0)) + local_80)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_88);
    iVar7 = local_80;
  }
  local_80 = (2 - (uint)(iVar7 != 0)) + iVar7;
  local_res8 = local_88;
  if (local_7c < local_80) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88);
    local_res8 = local_88;
  }
  pvVar11 = local_78;
  local_88 = local_res8;
  lVar6 = (longlong)iVar7 - (ulonglong)(iVar7 != 0);
  *(undefined2 *)((longlong)local_res8 + lVar6 * 2) = 0x20;
  *(undefined2 *)((longlong)local_res8 + lVar6 * 2 + 2) = 0;
  iVar10 = (int)local_70;
  if (local_80 < 2) {
    iVar13 = local_70._4_4_;
    local_78 = (void *)0x0;
    local_70 = 0;
  }
  else {
    iVar7 = 0;
    if ((int)local_70 != 0) {
      iVar7 = (int)local_70 + -1;
    }
    if ((local_80 != 0) || (iVar10 = 1, iVar7 == 0)) {
      iVar10 = 0;
    }
    local_res8 = (void *)0x0;
    iVar9 = local_80;
    if (local_7c < iVar10 + local_80 + iVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo();
      iVar9 = local_80;
    }
    pvVar2 = local_78;
    pvVar11 = local_88;
    iVar13 = local_7c;
    iVar10 = iVar9;
    if (iVar7 != 0) {
      local_80 = iVar9 + (uint)(iVar9 == 0) + iVar7;
      if (local_7c < local_80) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,iVar9);
      }
      iVar13 = local_7c;
      iVar10 = local_80;
      pvVar11 = local_88;
      pvVar1 = (void *)((longlong)local_88 + ((longlong)iVar9 - (ulonglong)(iVar9 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar7 * 2);
      *(undefined2 *)((longlong)iVar7 * 2 + (longlong)pvVar1) = 0;
    }
  }
  local_88 = pvVar11;
  local_7c = iVar13;
  if (iVar13 < (int)((2 - (uint)(iVar10 != 0)) + iVar10)) {
    local_80 = iVar10;
    TArray<wchar_t,FDefaultAllocator>::ResizeTo();
    iVar10 = local_80;
  }
  local_80 = (2 - (uint)(iVar10 != 0)) + iVar10;
  if (local_7c < local_80) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,iVar10);
  }
  pvVar11 = local_68;
  lVar6 = (longlong)iVar10 - (ulonglong)(iVar10 != 0);
  *(undefined2 *)((longlong)local_88 + lVar6 * 2) = 0x20;
  *(undefined2 *)((longlong)local_88 + lVar6 * 2 + 2) = 0;
  iVar10 = (int)local_60;
  if (local_80 < 2) {
    local_68 = (void *)0x0;
    local_60 = 0;
    if (local_88 != (void *)0x0) {
      FMemory::Free(local_88);
    }
  }
  else {
    iVar7 = 0;
    if ((int)local_60 != 0) {
      iVar7 = (int)local_60 + -1;
    }
    if ((local_80 != 0) || (iVar10 = 1, iVar7 == 0)) {
      iVar10 = 0;
    }
    if (local_7c < iVar10 + local_80 + iVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_88);
    }
    pvVar2 = local_68;
    iVar9 = local_80;
    pvVar11 = local_88;
    iVar10 = local_80;
    if (iVar7 != 0) {
      lVar6 = (longlong)local_80;
      local_80 = local_80 + (uint)(local_80 == 0) + iVar7;
      if (local_7c < local_80) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,iVar9);
      }
      iVar10 = local_80;
      pvVar11 = local_88;
      pvVar1 = (void *)((longlong)local_88 + (lVar6 - (ulonglong)(iVar9 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar7 * 2);
      *(undefined2 *)((longlong)iVar7 * 2 + (longlong)pvVar1) = 0;
    }
  }
  if (local_res8 != (void *)0x0) {
    FMemory::Free(local_res8);
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free();
  }
  iVar7 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar7 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar7);
  }
  puVar4 = (undefined8 *)((longlong)iVar7 * 0x10 + *param_1);
  *puVar4 = 0;
  *(int *)(puVar4 + 1) = iVar10;
  if (iVar10 == 0) {
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar4,iVar10,0);
    _guard_xfg_dispatch_icall_nop((void *)*puVar4,pvVar11,(longlong)iVar10 * 2);
  }
  if (pvVar11 != (void *)0x0) {
    FMemory::Free(pvVar11);
  }
  return iVar7;
}



// FUNCTION 143097640 FUN_143097640 body=1110 status=ok
// SIG undefined FUN_143097640(void)

int FUN_143097640(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  void *_Dst;
  undefined2 *puVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  longlong lVar8;
  undefined2 *puVar9;
  void *pvVar10;
  int iVar11;
  void *local_res8;
  void *local_88;
  int local_80;
  int local_7c;
  void *local_78;
  int local_70;
  int local_6c;
  void *local_68;
  undefined8 local_60;
  undefined2 *local_58;
  int local_50;
  longlong local_48 [2];
  longlong local_38 [2];
  
  FString::PrintfImpl(&local_58,&DAT_1440da628,param_7);
  puVar9 = &DAT_143f3eda8;
  puVar3 = &DAT_143f3eda8;
  if (local_50 != 0) {
    puVar3 = local_58;
  }
  if ((int)param_1[6] == 0) {
    puVar1 = &DAT_143f3eda8;
  }
  else {
    puVar1 = (undefined2 *)param_1[5];
  }
  if ((int)param_1[4] != 0) {
    puVar9 = (undefined2 *)param_1[3];
  }
  FString::PrintfImpl(&local_68,L"%s%s %s%s",puVar9,param_6,puVar1,puVar3);
  if (local_58 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  puVar2 = (undefined8 *)FUN_1412887b0(param_1,local_48,param_2,param_3);
  local_88 = (void *)*puVar2;
  iVar5 = *(int *)(puVar2 + 1);
  *puVar2 = 0;
  local_80 = *(int *)(puVar2 + 1);
  local_7c = *(int *)((longlong)puVar2 + 0xc);
  puVar2[1] = 0;
  iVar4 = local_80;
  if (local_7c < (int)((2 - (uint)(iVar5 != 0)) + local_80)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_88);
    iVar4 = local_80;
  }
  local_80 = (2 - (uint)(iVar4 != 0)) + iVar4;
  if (local_7c < local_80) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,iVar4);
  }
  iVar6 = local_7c;
  iVar5 = local_80;
  pvVar7 = local_88;
  puVar9 = (undefined2 *)((longlong)local_88 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
  *puVar9 = 0x20;
  puVar9[1] = 0;
  puVar2 = (undefined8 *)FUN_1412887b0(param_1,local_38,param_4,param_5);
  if (iVar5 < 2) {
    pvVar10 = (void *)*puVar2;
    *puVar2 = 0;
    iVar6 = *(int *)(puVar2 + 1);
    puVar2[1] = 0;
    iVar11 = *(int *)((longlong)puVar2 + 0xc);
    local_res8 = pvVar7;
  }
  else {
    iVar4 = *(int *)(puVar2 + 1) + -1;
    if (*(int *)(puVar2 + 1) == 0) {
      iVar4 = 0;
    }
    if ((iVar5 != 0) || (iVar11 = 1, iVar4 == 0)) {
      iVar11 = 0;
    }
    local_res8 = (void *)0x0;
    local_78 = pvVar7;
    local_6c = iVar6;
    if (iVar6 < iVar5 + iVar4 + iVar11) {
      local_70 = iVar5;
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_78);
      iVar5 = local_70;
    }
    local_88 = (void *)*puVar2;
    pvVar10 = local_78;
    iVar11 = local_6c;
    iVar6 = iVar5;
    if (iVar4 != 0) {
      local_70 = iVar5 + (uint)(iVar5 == 0) + iVar4;
      if (local_6c < local_70) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,iVar5);
      }
      iVar11 = local_6c;
      iVar6 = local_70;
      pvVar10 = local_78;
      pvVar7 = (void *)((longlong)local_78 + ((longlong)iVar5 - (ulonglong)(iVar5 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar7,local_88,(longlong)iVar4 * 2);
      *(undefined2 *)((longlong)iVar4 * 2 + (longlong)pvVar7) = 0;
    }
  }
  local_78 = pvVar10;
  local_6c = iVar11;
  if (iVar11 < (int)((2 - (uint)(iVar6 != 0)) + iVar6)) {
    local_70 = iVar6;
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_78);
    iVar6 = local_70;
  }
  local_70 = (2 - (uint)(iVar6 != 0)) + iVar6;
  if (local_6c < local_70) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,iVar6);
  }
  pvVar7 = local_68;
  puVar9 = (undefined2 *)((longlong)local_78 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)) * 2);
  *puVar9 = 0x20;
  puVar9[1] = 0;
  iVar5 = (int)local_60;
  if (local_70 < 2) {
    local_68 = (void *)0x0;
    local_60 = 0;
    if (local_78 != (void *)0x0) {
      FMemory::Free(local_78);
    }
  }
  else {
    iVar4 = 0;
    if ((int)local_60 != 0) {
      iVar4 = (int)local_60 + -1;
    }
    if ((local_70 != 0) || (iVar5 = 1, iVar4 == 0)) {
      iVar5 = 0;
    }
    if (local_6c < iVar5 + local_70 + iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_78);
    }
    pvVar10 = local_68;
    iVar6 = local_70;
    pvVar7 = local_78;
    iVar5 = local_70;
    if (iVar4 != 0) {
      lVar8 = (longlong)local_70;
      local_70 = local_70 + (uint)(local_70 == 0) + iVar4;
      if (local_6c < local_70) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,iVar6);
      }
      iVar5 = local_70;
      pvVar7 = local_78;
      _Dst = (void *)((longlong)local_78 + (lVar8 - (ulonglong)(iVar6 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(_Dst,pvVar10,(longlong)iVar4 * 2);
      *(undefined2 *)((longlong)iVar4 * 2 + (longlong)_Dst) = 0;
    }
  }
  if (local_res8 != (void *)0x0) {
    FMemory::Free(local_res8);
  }
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free();
  }
  iVar4 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar4 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar4 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar4);
  }
  puVar2 = (undefined8 *)((longlong)iVar4 * 0x10 + *param_1);
  *puVar2 = 0;
  *(int *)(puVar2 + 1) = iVar5;
  if (iVar5 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar2,iVar5,0);
    _guard_xfg_dispatch_icall_nop((void *)*puVar2,pvVar7,(longlong)iVar5 * 2);
  }
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  return iVar4;
}



// FUNCTION 143097aa0 FUN_143097aa0 body=320 status=ok
// SIG undefined FUN_143097aa0(void)

uint FUN_143097aa0(undefined8 *param_1,undefined8 *param_2,byte *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = FUN_14218de50(*param_1);
  uVar2 = FUN_14218de50(*param_2);
  uVar4 = *param_3 - uVar2 ^ uVar2 >> 0xd;
  uVar3 = (-0x61c88647 - uVar4) - uVar2 ^ uVar4 << 8;
  uVar5 = (uVar2 - uVar3) - uVar4 ^ uVar3 >> 0xd;
  uVar4 = (uVar4 - uVar3) - uVar5 ^ uVar5 >> 0xc;
  uVar2 = (uVar3 - uVar4) - uVar5 ^ uVar4 << 0x10;
  uVar5 = (uVar5 - uVar2) - uVar4 ^ uVar2 >> 5;
  uVar3 = (uVar4 - uVar2) - uVar5 ^ uVar5 >> 3;
  uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar3 << 10;
  uVar3 = ((uVar5 - uVar2) - uVar3 ^ uVar2 >> 0xf) - uVar1 ^ uVar1 >> 0xd;
  uVar2 = (-0x61c88647 - uVar3) - uVar1 ^ uVar3 << 8;
  uVar1 = (uVar1 - uVar2) - uVar3 ^ uVar2 >> 0xd;
  uVar3 = (uVar3 - uVar2) - uVar1 ^ uVar1 >> 0xc;
  uVar2 = (uVar2 - uVar3) - uVar1 ^ uVar3 << 0x10;
  uVar1 = (uVar1 - uVar2) - uVar3 ^ uVar2 >> 5;
  uVar3 = (uVar3 - uVar2) - uVar1 ^ uVar1 >> 3;
  uVar2 = (uVar2 - uVar3) - uVar1 ^ uVar3 << 10;
  return (uVar1 - uVar2) - uVar3 ^ uVar2 >> 0xf;
}



// FUNCTION 143097be0 FUN_143097be0 body=319 status=ok
// SIG undefined FUN_143097be0(void)

uint FUN_143097be0(undefined8 *param_1,undefined8 *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = FUN_14218de50(*param_1);
  uVar2 = FUN_14218de50(*param_2);
  uVar4 = *param_3 - uVar2 ^ uVar2 >> 0xd;
  uVar3 = (-0x61c88647 - uVar4) - uVar2 ^ uVar4 << 8;
  uVar5 = (uVar2 - uVar3) - uVar4 ^ uVar3 >> 0xd;
  uVar4 = (uVar4 - uVar3) - uVar5 ^ uVar5 >> 0xc;
  uVar2 = (uVar3 - uVar4) - uVar5 ^ uVar4 << 0x10;
  uVar5 = (uVar5 - uVar2) - uVar4 ^ uVar2 >> 5;
  uVar3 = (uVar4 - uVar2) - uVar5 ^ uVar5 >> 3;
  uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar3 << 10;
  uVar3 = ((uVar5 - uVar2) - uVar3 ^ uVar2 >> 0xf) - uVar1 ^ uVar1 >> 0xd;
  uVar2 = (-0x61c88647 - uVar3) - uVar1 ^ uVar3 << 8;
  uVar1 = (uVar1 - uVar2) - uVar3 ^ uVar2 >> 0xd;
  uVar3 = (uVar3 - uVar2) - uVar1 ^ uVar1 >> 0xc;
  uVar2 = (uVar2 - uVar3) - uVar1 ^ uVar3 << 0x10;
  uVar1 = (uVar1 - uVar2) - uVar3 ^ uVar2 >> 5;
  uVar3 = (uVar3 - uVar2) - uVar1 ^ uVar1 >> 3;
  uVar2 = (uVar2 - uVar3) - uVar1 ^ uVar3 << 10;
  return (uVar1 - uVar2) - uVar3 ^ uVar2 >> 0xf;
}



// FUNCTION 143097d20 FUN_143097d20 body=1658 status=ok
// SIG undefined FUN_143097d20(void)

undefined8 * FUN_143097d20(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *local_res8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  longlong local_68 [2];
  longlong local_58;
  longlong local_48;
  
  local_res8 = param_1;
  puVar1 = (undefined8 *)FName::FName(local_res10,L"WeaponTelemetry",1);
  uVar2 = FUN_14217c7e0(local_68,L"gbxtelemetry",L"Weapons",&DAT_145a6875c);
  puVar4 = local_res8;
  FUN_14217c110(local_res8,*puVar1,uVar2);
  if (local_48 != 0) {
    FMemory::Free();
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  FUN_14217bd20(puVar4 + 1);
  FUN_14217bd20(puVar4 + 2);
  FUN_14217bd20(puVar4 + 3);
  FUN_14217bd20(puVar4 + 4);
  FUN_14217bd20(puVar4 + 5);
  FUN_14217bd20(puVar4 + 6);
  FUN_14217bd20(puVar4 + 7);
  FUN_14217bd20(puVar4 + 8);
  FUN_14217bd20(puVar4 + 9);
  FUN_14217bd20(puVar4 + 10);
  FUN_14217bd20(puVar4 + 0xb);
  FUN_14217bd20(puVar4 + 0xc);
  FUN_14217bd20(puVar4 + 0xd);
  FUN_14217bd20(puVar4 + 0xe);
  FUN_14217bd20(puVar4 + 0xf);
  FUN_14217bd20(puVar4 + 0x10);
  FUN_14217bd20(puVar4 + 0x11);
  FUN_14217bd20(puVar4 + 0x12);
  FUN_14217bd20(puVar4 + 0x13);
  FUN_14217bd20(puVar4 + 0x14);
  FUN_14217bd20(puVar4 + 0x15);
  FUN_14217bd20(puVar4 + 0x16);
  FUN_14217bd20(puVar4 + 0x17);
  FUN_14217bd20(puVar4 + 0x18);
  uVar2 = *puVar4;
  puVar1 = (undefined8 *)FName::FName(local_res10,L"unit_id",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar2,local_res18,*puVar1,0);
  puVar1 = local_res8;
  puVar4[1] = *puVar3;
  uVar2 = *local_res8;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"unit_class",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar3,0);
  uVar2 = *puVar1;
  puVar4[2] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"player_id",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar3,0);
  uVar2 = *puVar1;
  puVar4[3] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"player_character_guid",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar3,0);
  uVar2 = *puVar1;
  puVar4[4] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"item_serial_number",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar3,0);
  uVar2 = *puVar1;
  puVar4[5] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"item_manufacturer",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar3,0);
  uVar2 = *puVar1;
  puVar4[6] = *puVar3;
  puVar4 = (undefined8 *)FName::FName(&local_res8,L"item_rarity",1);
  puVar4 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar4,0);
  uVar2 = *puVar1;
  puVar1[7] = *puVar4;
  puVar4 = (undefined8 *)FName::FName(&local_res8,L"weapon_type",1);
  puVar4 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar4,0);
  uVar2 = *puVar1;
  puVar1[8] = *puVar4;
  puVar4 = (undefined8 *)FName::FName(&local_res8,L"weapon_mode",1);
  puVar4 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar4,0);
  uVar2 = *puVar1;
  puVar1[9] = *puVar4;
  puVar4 = (undefined8 *)FName::FName(&local_res8,L"weapon_elemental_effect",1);
  puVar4 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar4,0);
  uVar2 = *puVar1;
  puVar1[10] = *puVar4;
  puVar4 = (undefined8 *)FName::FName(&local_res8,L"val_trigger_pulls",1);
  puVar4 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar4,0);
  uVar2 = *puVar1;
  puVar1[0xb] = *puVar4;
  puVar4 = (undefined8 *)FName::FName(&local_res8,L"val_trigger_pulls_ads",1);
  puVar4 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar4,0);
  uVar2 = *puVar1;
  puVar1[0xc] = *puVar4;
  puVar4 = (undefined8 *)FName::FName(&local_res8,L"val_bullets_fired",1);
  puVar4 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar4,0);
  uVar2 = *puVar1;
  puVar1[0xd] = *puVar4;
  puVar4 = (undefined8 *)FName::FName(&local_res8,L"val_bullets_fired_ads",1);
  puVar4 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar4,0);
  uVar2 = *puVar1;
  puVar1[0xe] = *puVar4;
  puVar4 = (undefined8 *)FName::FName(&local_res8,L"val_bullets_hit",1);
  puVar4 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar4,0);
  uVar2 = *puVar1;
  puVar1[0xf] = *puVar4;
  puVar4 = (undefined8 *)FName::FName(&local_res8,L"val_bullets_hit_ads",1);
  puVar4 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar4,0);
  uVar2 = *puVar1;
  puVar1[0x10] = *puVar4;
  puVar4 = (undefined8 *)FName::FName(&local_res8,L"val_bullets_crit",1);
  puVar4 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar4,0);
  uVar2 = *puVar1;
  puVar1[0x11] = *puVar4;
  puVar4 = (undefined8 *)FName::FName(&local_res8,L"val_bullets_crit_ads",1);
  puVar4 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar4,0);
  uVar2 = *puVar1;
  puVar1[0x12] = *puVar4;
  puVar4 = (undefined8 *)FName::FName(&local_res8,L"val_damage_done",1);
  puVar4 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar4,0);
  uVar2 = *puVar1;
  puVar1[0x13] = *puVar4;
  puVar4 = (undefined8 *)FName::FName(&local_res8,L"val_damage_done_aoe",1);
  puVar4 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar4,0);
  uVar2 = *puVar1;
  puVar1[0x14] = *puVar4;
  puVar4 = (undefined8 *)FName::FName(&local_res8,L"val_damage_done_crit",1);
  puVar4 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar4,0);
  uVar2 = *puVar1;
  puVar1[0x15] = *puVar4;
  puVar4 = (undefined8 *)FName::FName(&local_res8,L"val_mode_switch",1);
  puVar4 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar4,0);
  uVar2 = *puVar1;
  puVar1[0x16] = *puVar4;
  puVar4 = (undefined8 *)FName::FName(&local_res8,L"val_reload_auto",1);
  puVar4 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar4,0);
  uVar2 = *puVar1;
  puVar1[0x17] = *puVar4;
  puVar4 = (undefined8 *)FName::FName(&local_res8,L"val_reload_manual",1);
  puVar4 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar4,0);
  puVar1[0x18] = *puVar4;
  return puVar1;
}



// FUNCTION 1430983a0 FInstancedPropertyPath body=106 status=ok
// SIG undefined FInstancedPropertyPath(void)

undefined8 * FInstancedPropertyPath::FInstancedPropertyPath(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return param_1;
  }
  TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1,iVar1,0);
  ::_guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar1 << 4);
  return param_1;
}



// FUNCTION 143098410 FUN_143098410 body=350 status=ok
// SIG undefined FUN_143098410(void)

undefined8 * FUN_143098410(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_142326e40(param_1,uVar1);
  *param_1 = &PTR_FUN_145a69e60;
  param_1[5] = &PTR_LAB_145a6a2a8;
  param_1[0x2f] = &PTR_LAB_145a6a2d8;
  param_1[0x30] = &PTR_LAB_145a6a2f0;
  FDifficultyFloat::FDifficultyFloat(param_1 + 0x31);
  FDifficultyFloat::FDifficultyFloat((longlong)param_1 + 0x194);
  FDifficultyFloat::FDifficultyFloat(param_1 + 0x34);
  FDifficultyFloat::FDifficultyFloat((longlong)param_1 + 0x1ac);
  FDifficultyFloat::FDifficultyFloat((longlong)param_1 + 0x1bc);
  FDifficultyFloat::FDifficultyFloat(param_1 + 0x39);
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) | 8;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) & 0xfb | 2;
  FUN_14246fd50(param_1 + 0x31,0x3f000000);
  FUN_14246fd50((longlong)param_1 + 0x194,0x3f800000);
  FUN_14246fd50((longlong)param_1 + 0x1bc,0x40800000);
  FUN_14246fd50(param_1 + 0x39,0x40800000);
  *(byte *)((longlong)param_1 + 0x1b9) = *(byte *)((longlong)param_1 + 0x1b9) | 5;
  *(undefined1 *)(param_1 + 0x37) = 1;
  return param_1;
}



// FUNCTION 143098570 FUN_143098570 body=78 status=ok
// SIG undefined FUN_143098570(void)

undefined8 * FUN_143098570(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_142326e40(param_1,uVar1);
  *param_1 = &PTR_FUN_145a6ab98;
  param_1[5] = &PTR_LAB_14410c040;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined1 *)(param_1 + 0x31) = 1;
  return param_1;
}



// FUNCTION 1430985c0 FUN_1430985c0 body=73 status=ok
// SIG undefined FUN_1430985c0(void)

undefined8 * FUN_1430985c0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_142326e40(param_1,uVar1);
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) & 0xf9;
  *param_1 = &PTR_FUN_145a6b168;
  param_1[5] = &PTR_LAB_145a6b578;
  param_1[0x2f] = &PTR_LAB_145a6b5a8;
  return param_1;
}



// FUNCTION 143098610 FUN_143098610 body=284 status=ok
// SIG undefined FUN_143098610(void)

undefined8 * FUN_143098610(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_142326e40(param_1,uVar1);
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) & 0xf9;
  *param_1 = &PTR_FUN_145a6b5e0;
  param_1[5] = &PTR_LAB_145a6b9f8;
  param_1[0x2f] = &PTR_LAB_145a6ba28;
  param_1[0x33] = &PTR_LAB_145a6ba40;
  FDifficultyFloat::FDifficultyFloat(param_1 + 0x35);
  FDifficultyFloat::FDifficultyFloat((longlong)param_1 + 0x1b4);
  FDifficultyFloat::FDifficultyFloat(param_1 + 0x38);
  FUN_1430a48b0(param_1 + 0x3c);
  *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) | 8;
  *(undefined4 *)(param_1 + 0x3a) = 0x40800000;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x3b) = 0x3e4ccccd;
  FUN_14246fd50(param_1 + 0x35,0x3f800000);
  FUN_14246fd50((longlong)param_1 + 0x1b4,0x3f800000);
  FUN_14246fd50(param_1 + 0x38,0x3f800000);
  *(undefined1 *)((longlong)param_1 + 0x1cc) = 1;
  *(undefined1 *)((longlong)param_1 + 0x1dc) = 1;
  return param_1;
}



// FUNCTION 143098730 FUN_143098730 body=146 status=ok
// SIG undefined FUN_143098730(void)

undefined8 * FUN_143098730(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_142326e40(param_1,uVar1);
  *param_1 = &PTR_FUN_145a6ba60;
  param_1[5] = &PTR_LAB_145a6be98;
  param_1[0x2f] = &PTR_LAB_145a6bec8;
  param_1[0x30] = &PTR_LAB_145a6bee0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  FDifficultyFloat::FDifficultyFloat(param_1 + 0x38);
  *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) | 8;
  return param_1;
}



// FUNCTION 1430987d0 FUN_1430987d0 body=108 status=ok
// SIG undefined FUN_1430987d0(void)

undefined8 * FUN_1430987d0(undefined8 *param_1)

{
  undefined8 local_res8 [4];
  
  UDeveloperSettings::UDeveloperSettings();
  *param_1 = &PTR_FUN_145a6c050;
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
  FName::FName(local_res8,L"Weapon",1);
  param_1[6] = local_res8[0];
  return param_1;
}



// FUNCTION 143098840 FUN_143098840 body=299 status=ok
// SIG undefined FUN_143098840(void)

undefined8 * FUN_143098840(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  UFontFaceInterface::UFontFaceInterface(param_1,uVar1);
  *param_1 = &PTR__scalar_deleting_destructor__145a6c2e8;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0x3f800000;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0x3f800000;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x21) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x28) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x30) = 1;
  return param_1;
}



// FUNCTION 143098970 FUN_143098970 body=49 status=ok
// SIG undefined FUN_143098970(void)

undefined8 * FUN_143098970(undefined8 *param_1)

{
  FUN_143098aa0();
  *param_1 = &PTR_FUN_145a6c828;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  return param_1;
}



// FUNCTION 1430989b0 FUN_1430989b0 body=237 status=ok
// SIG undefined FUN_1430989b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1430989b0(undefined8 *param_1)

{
  FUN_143098aa0();
  *param_1 = &PTR_FUN_145a6cf20;
  param_1[0x1e] = 0;
  *(undefined2 *)(param_1 + 0x1f) = 0x300;
  *(undefined8 *)((longlong)param_1 + 0xfc) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x104) = DAT_1468b5d98;
  param_1[0x21] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x22) = DAT_1468b5d98;
  *(undefined2 *)(param_1 + 0x2f) = 0x300;
  *(undefined8 *)((longlong)param_1 + 0x17c) = DAT_1468b5da0;
  *(undefined4 *)((longlong)param_1 + 0x184) = DAT_1468b5da8;
  param_1[0x31] = DAT_1468b5da0;
  *(undefined4 *)(param_1 + 0x32) = DAT_1468b5da8;
  *(undefined2 *)(param_1 + 0x3f) = 0x300;
  *(undefined8 *)((longlong)param_1 + 0x1fc) = DAT_1464aa788;
  *(undefined4 *)((longlong)param_1 + 0x204) = DAT_1464aa790;
  param_1[0x41] = DAT_1464aa788;
  *(undefined4 *)(param_1 + 0x42) = DAT_1464aa790;
  return param_1;
}



// FUNCTION 143098aa0 FUN_143098aa0 body=160 status=ok
// SIG undefined FUN_143098aa0(void)

undefined8 * FUN_143098aa0(undefined8 *param_1)

{
  FUN_1417818c0();
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0x3f800000;
  *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) | 2;
  *param_1 = &PTR_FUN_145a6c570;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x91) = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0x3f800000;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) & 0xfd | 1;
  return param_1;
}



// FUNCTION 143098b40 FUN_143098b40 body=289 status=ok
// SIG undefined FUN_143098b40(void)

undefined8 * FUN_143098b40(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_142326e40(param_1,uVar1);
  *param_1 = &PTR_FUN_145a6ba60;
  param_1[5] = &PTR_LAB_145a6be98;
  param_1[0x2f] = &PTR_LAB_145a6bec8;
  param_1[0x30] = &PTR_LAB_145a6bee0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  FDifficultyFloat::FDifficultyFloat(param_1 + 0x38);
  *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) | 8;
  *param_1 = &PTR_FUN_145a6d1f8;
  param_1[5] = &PTR_LAB_145a6d630;
  param_1[0x2f] = &PTR_LAB_145a6d660;
  param_1[0x30] = &PTR_LAB_145a6d678;
  *(undefined1 *)(param_1 + 0x3b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 1;
  param_1[0x3d] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *(undefined2 *)(param_1 + 0x41) = 0;
  FUN_14246fd50(param_1 + 0x38,0x40066666);
  *(undefined4 *)(param_1 + 0x3c) = 0x3f4ccccd;
  return param_1;
}



// FUNCTION 143098c70 FUN_143098c70 body=76 status=ok
// SIG undefined FUN_143098c70(void)

undefined8 * FUN_143098c70(undefined8 *param_1)

{
  FUN_1417818c0();
  *param_1 = &PTR_FUN_145a6a310;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0x3f800000;
  *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) | 2;
  return param_1;
}



// FUNCTION 143098cc0 FUN_143098cc0 body=169 status=ok
// SIG undefined FUN_143098cc0(void)

undefined8 * FUN_143098cc0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_142326e40(param_1,uVar1);
  *param_1 = &PTR_FUN_145a6d698;
  param_1[5] = &PTR_LAB_145a6db98;
  param_1[0x2f] = &PTR_LAB_145a6dbc8;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x41] = 0;
  *(byte *)((longlong)param_1 + 0x181) = *(byte *)((longlong)param_1 + 0x181) | 8;
  return param_1;
}



// FUNCTION 143098d70 FUN_143098d70 body=237 status=ok
// SIG undefined FUN_143098d70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_143098d70(undefined8 *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = FUN_14178c940();
  FUN_142326e40(param_1,uVar1);
  *param_1 = &PTR_FUN_145a6cae0;
  param_1[5] = &PTR_LAB_145a6ced8;
  param_1[0x2f] = &PTR_LAB_145a6cf08;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  uVar2 = uRam0000000146b47e1c;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  *(uint *)((longlong)param_1 + 0x1bc) = uVar2;
  uVar2 = uRam0000000146b47e14 & uRam0000000146b47e24;
  uVar3 = uRam0000000146b47e18 & uRam0000000146b47e28;
  uVar4 = uRam0000000146b47e1c & uRam0000000146b47e2c;
  *(uint *)(param_1 + 0x3a) = _DAT_146b47e10 & _DAT_146b47e20;
  *(uint *)((longlong)param_1 + 0x1d4) = uVar2;
  *(uint *)(param_1 + 0x3b) = uVar3;
  *(uint *)((longlong)param_1 + 0x1dc) = uVar4;
  uVar2 = uRam0000000146b47e1c;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  *(undefined4 *)((longlong)param_1 + 500) = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  *(uint *)((longlong)param_1 + 0x1fc) = uVar2;
  uVar2 = uRam0000000146b47e14 & uRam0000000146b47e24;
  uVar3 = uRam0000000146b47e18 & uRam0000000146b47e28;
  uVar4 = uRam0000000146b47e1c & uRam0000000146b47e2c;
  *(uint *)(param_1 + 0x42) = _DAT_146b47e10 & _DAT_146b47e20;
  *(uint *)((longlong)param_1 + 0x214) = uVar2;
  *(uint *)(param_1 + 0x43) = uVar3;
  *(uint *)((longlong)param_1 + 0x21c) = uVar4;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  *(undefined2 *)(param_1 + 0x32) = 1;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x46) = 0;
  *(undefined4 *)((longlong)param_1 + 0x234) = 0xffffffff;
  return param_1;
}



// FUNCTION 143098e60 FUN_143098e60 body=619 status=ok
// SIG undefined FUN_143098e60(void)

undefined8 * FUN_143098e60(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  
  uVar3 = FUN_14178c940();
  FUN_142326e40(param_1,uVar3);
  *param_1 = &PTR_FUN_145a6a6d0;
  plVar1 = param_1 + 0x31;
  param_1[5] = &PTR_LAB_145a6ab30;
  param_1[0x2f] = &PTR_LAB_145a6ab60;
  param_1[0x30] = &PTR_LAB_145a6ab78;
  *plVar1 = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x34) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x35) = 0x3e4ccccd;
  *(undefined1 *)((longlong)param_1 + 0x1ac) = 1;
  *(undefined4 *)(param_1 + 0x36) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = 0x3e4ccccd;
  FName::FName(param_1 + 0x37,"EyeSocket",1);
  FName::FName(param_1 + 0x39,"FrontScope",1);
  FName::FName(param_1 + 0x3a,"FrontSight",1);
  FName::FName(param_1 + 0x3b,"RearSight",1);
  *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 0x3f800000;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  *(undefined4 *)((longlong)param_1 + 0x21c) = 0x42480000;
  *(undefined4 *)(param_1 + 0x44) = 0x43480000;
  *(undefined4 *)((longlong)param_1 + 0x224) = 0x40a00000;
  param_1[0x45] = 0x3ecccccd;
  *(undefined4 *)(param_1 + 0x46) = 0x40a00000;
  *(undefined4 *)((longlong)param_1 + 0x234) = 0x3c23d70a;
  *(undefined4 *)(param_1 + 0x47) = 0x3d4ccccd;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x49) = 0x3f800000;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(undefined4 *)(param_1 + 0x52) = 0;
  *(undefined1 *)((longlong)param_1 + 0x294) = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  *(undefined4 *)(param_1 + 0x5b) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2dc) = 0;
  *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) | 8;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) & 0xfb | 2;
  iVar2 = *(int *)(param_1 + 0x32);
  *(int *)(param_1 + 0x32) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0x194) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
  }
  puVar4 = (undefined4 *)((longlong)iVar2 * 0x10 + *plVar1);
  *puVar4 = 0x3e4ccccd;
  puVar4[1] = 0x3f333333;
  puVar4[2] = 0x3eb33333;
  puVar4[3] = 0x3f800000;
  return param_1;
}



// FUNCTION 1430990d0 FUN_1430990d0 body=164 status=ok
// SIG undefined FUN_1430990d0(void)

undefined8 * FUN_1430990d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (param_2 != param_1) {
    if (*(char *)(param_1 + 0x19) != '\0') {
      *(undefined1 *)(param_1 + 0x19) = 0;
    }
    uVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar1;
    uVar1 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = uVar1;
    uVar1 = param_2[5];
    param_1[4] = param_2[4];
    param_1[5] = uVar1;
    uVar1 = param_2[7];
    param_1[6] = param_2[6];
    param_1[7] = uVar1;
    uVar1 = param_2[9];
    param_1[8] = param_2[8];
    param_1[9] = uVar1;
    uVar1 = param_2[0xb];
    param_1[10] = param_2[10];
    param_1[0xb] = uVar1;
    uVar1 = param_2[0xd];
    param_1[0xc] = param_2[0xc];
    param_1[0xd] = uVar1;
    uVar1 = param_2[0xf];
    param_1[0xe] = param_2[0xe];
    param_1[0xf] = uVar1;
    uVar1 = param_2[0x11];
    param_1[0x10] = param_2[0x10];
    param_1[0x11] = uVar1;
    uVar1 = param_2[0x13];
    param_1[0x12] = param_2[0x12];
    param_1[0x13] = uVar1;
    uVar1 = param_2[0x15];
    param_1[0x14] = param_2[0x14];
    param_1[0x15] = uVar1;
    uVar1 = param_2[0x17];
    param_1[0x16] = param_2[0x16];
    param_1[0x17] = uVar1;
    param_1[0x18] = param_2[0x18];
    *(undefined1 *)(param_1 + 0x19) = 1;
  }
  return param_1;
}



// FUNCTION 143099280 FUN_143099280 body=190 status=ok
// SIG undefined FUN_143099280(void)

longlong FUN_143099280(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x208) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1d8) != 0) {
    FMemory::Free();
  }
  thunk_FUN_142478640(param_1 + 0x1c8);
  thunk_FUN_142478640(param_1 + 0x1bc);
  thunk_FUN_142478640(param_1 + 0x1ac);
  thunk_FUN_142478640(param_1 + 0x1a0);
  thunk_FUN_142478640(param_1 + 0x194);
  thunk_FUN_142478640(param_1 + 0x188);
  *(undefined ***)(param_1 + 0x180) = &PTR_FUN_143fce298;
  *(undefined ***)(param_1 + 0x178) = &PTR_FUN_143fe0658;
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x238);
  }
  return param_1;
}



// FUNCTION 143099340 FUN_143099340 body=66 status=ok
// SIG undefined FUN_143099340(void)

longlong FUN_143099340(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x178) = &PTR_FUN_143fe0658;
  FUN_140458c20();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x198);
  }
  return param_1;
}



// FUNCTION 143099390 FUN_143099390 body=119 status=ok
// SIG undefined FUN_143099390(void)

longlong FUN_143099390(longlong param_1,ulonglong param_2)

{
  thunk_FUN_142478640(param_1 + 0x1c0);
  thunk_FUN_142478640(param_1 + 0x1b4);
  thunk_FUN_142478640(param_1 + 0x1a8);
  *(undefined ***)(param_1 + 0x198) = &PTR_FUN_143fce298;
  *(undefined ***)(param_1 + 0x178) = &PTR_FUN_143fe0658;
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x200);
  }
  return param_1;
}



// FUNCTION 143099410 FUN_143099410 body=52 status=ok
// SIG undefined FUN_143099410(void)

undefined8 FUN_143099410(undefined8 param_1,ulonglong param_2)

{
  FUN_14128b820();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1d8);
  }
  return param_1;
}



// FUNCTION 143099450 FUN_143099450 body=100 status=ok
// SIG undefined FUN_143099450(void)

longlong FUN_143099450(longlong param_1,ulonglong param_2)

{
  FUN_140590de0(param_1 + 0x78);
  FUN_140590de0(param_1 + 0x68);
  FUN_140590de0(param_1 + 0x58);
  FUN_140590de0(param_1 + 0x48);
  FUN_140590de0(param_1 + 0x38);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 1430994c0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FRCPassDiaphragmDOFPostfilter::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x188);
  }
  return param_1;
}



// FUNCTION 143099500 FUN_143099500 body=73 status=ok
// SIG undefined FUN_143099500(void)

longlong FUN_143099500(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x158);
  }
  return param_1;
}



// FUNCTION 143099550 FUN_143099550 body=52 status=ok
// SIG undefined FUN_143099550(void)

undefined8 FUN_143099550(undefined8 param_1,ulonglong param_2)

{
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x278);
  }
  return param_1;
}



// FUNCTION 143099590 FUN_143099590 body=99 status=ok
// SIG undefined FUN_143099590(void)

longlong FUN_143099590(longlong param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x200);
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
  FUN_14128b820(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x210);
  }
  return param_1;
}



// FUNCTION 143099600 FUN_143099600 body=167 status=ok
// SIG undefined FUN_143099600(void)

longlong FUN_143099600(longlong param_1,ulonglong param_2)

{
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x1f0);
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1d0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x178) = &PTR_FUN_143fe0658;
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x218);
  }
  return param_1;
}



// FUNCTION 1430996b0 FUN_1430996b0 body=104 status=ok
// SIG undefined FUN_1430996b0(void)

longlong FUN_1430996b0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x238) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x178) = &PTR_FUN_143fe0658;
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x250);
  }
  return param_1;
}



// FUNCTION 143099720 FUN_143099720 body=227 status=ok
// SIG undefined FUN_143099720(void)

longlong FUN_143099720(longlong param_1,ulonglong param_2)

{
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x2b0);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x2a0);
  if (*(longlong *)(param_1 + 0x280) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x270) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x260) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x250) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x200) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1f0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x180) = &PTR_FUN_143fce298;
  *(undefined ***)(param_1 + 0x178) = &PTR_FUN_143fe0658;
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2e8);
  }
  return param_1;
}



// FUNCTION 143099810 FUN_143099810 body=908 status=ok
// SIG undefined FUN_143099810(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143099810(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
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
  plVar4 = *(longlong **)(param_1 + 0x1d0);
  if (plVar4 == (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x118);
    *(longlong **)(param_1 + 0x1d0) = plVar4;
    if (plVar4 == (longlong *)0x0) {
      return;
    }
  }
  lVar5 = *(longlong *)(param_1 + 0x1e8);
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  uVar6 = 0xffffffff;
  if (*(char *)(param_1 + 0x1e5) == '\0') {
    uVar6 = *(undefined4 *)(param_1 + 0x1dc);
  }
  (**(code **)(*plVar4 + 0x808))(plVar4,uVar6,0,0);
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x1b0,0);
  lVar3 = *(longlong *)(param_1 + 0x1d0);
  if (lVar3 == 0) {
    lVar3 = *(longlong *)(param_1 + 0x118);
    *(longlong *)(param_1 + 0x1d0) = lVar3;
  }
  if ((((lVar3 == 0) ||
       (plVar2 = (longlong *)
                 (**(code **)(*(longlong *)(lVar3 + 0x460) + 0x10))
                           ((longlong *)(lVar3 + 0x460),*(undefined1 *)(lVar3 + 0x690)),
       plVar2 == (longlong *)0x0)) ||
      ((*(char *)(param_1 + 0x1e4) != '\0' &&
       (cVar1 = (**(code **)(*plVar2 + 0x488))(plVar2,1), cVar1 != '\0')))) ||
     ((cVar1 = (**(code **)(*plVar2 + 0x480))(plVar2), cVar1 != '\0' ||
      (cVar1 = (**(code **)(*plVar2 + 0x490))(plVar2), cVar1 == '\0')))) {
    FUN_1430a4fb0(param_1,2);
    FUN_1430a2a50(param_1);
    return;
  }
  if ((*(char *)(param_1 + 0x1e4) == '\0') &&
     ((((*(char *)(param_1 + 0x1d8) == '\0' &&
        (cVar1 = (**(code **)(*plVar2 + 0x488))(plVar2,1), cVar1 != '\0')) &&
       (cVar1 = FUN_14307eb80(plVar4), cVar1 != '\0')) &&
      (lVar3 = (**(code **)(*plVar4 + 0x950))(plVar4), lVar3 != 0)))) {
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x950))(plVar4);
    cVar1 = (**(code **)(*plVar4 + 0x778))(plVar4);
    if (cVar1 != '\0') {
      *(undefined1 *)(param_1 + 0x1e4) = 1;
      FUN_14309f590(param_1);
      return;
    }
  }
  if (lVar5 == 0) {
    return;
  }
  local_b8 = FUN_143099810;
  lVar5 = *(longlong *)(param_1 + 0x120);
  uStack_b0 = 0;
  if (lVar5 == 0) {
    lVar5 = FUN_1423407b0(param_1);
  }
  if (*(longlong *)(lVar5 + 400) == 0) {
    uVar7 = *(undefined8 *)(lVar5 + 0x3f8);
  }
  else {
    uVar7 = *(undefined8 *)(*(longlong *)(lVar5 + 400) + 0x90);
  }
  uVar6 = *(undefined4 *)(param_1 + 0x1f0);
  plVar4 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_FUN_143f77b88;
    FWeakObjectPtr::operator=(plVar4 + 1,param_1);
    *(undefined4 *)(plVar4 + 2) = (undefined4)local_b8;
    *(undefined4 *)((longlong)plVar4 + 0x14) = local_b8._4_4_;
    *(undefined4 *)(plVar4 + 3) = uStack_b0;
    *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_ac;
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
  local_c0 = 0xbf800000;
  local_c8 = 0;
  local_90 = 0;
  local_58 = (longlong *)0x0;
  local_48 = 0;
  local_88 = AK::MemoryMgr::StartProfileThreadUsage;
  FUN_142880850(uVar7,param_1 + 0x1e8,&local_a8,uVar6);
  if (local_48 != 0) {
    plVar2 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar2 = local_58;
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
  if (plVar4 == (longlong *)0x0) {
    return;
  }
  (**(code **)(*plVar4 + 0x28))(plVar4,0);
  lVar5 = FMemory::Realloc(plVar4,0,0);
  if (lVar5 == 0) {
    return;
  }
  FMemory::Free(lVar5);
  return;
}



// FUNCTION 143099ba0 FUN_143099ba0 body=118 status=ok
// SIG undefined FUN_143099ba0(void)

void FUN_143099ba0(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar4 = *(longlong **)(param_1 + 0x1d0);
  if (plVar4 == (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x118);
    *(longlong **)(param_1 + 0x1d0) = plVar4;
    if (plVar4 == (longlong *)0x0) {
      return;
    }
  }
  iVar2 = FUN_14233f450();
  if (iVar2 != 3) {
    lVar3 = (**(code **)(*plVar4 + 0x950))(plVar4);
    if (lVar3 == 0) {
      return;
    }
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x950))(plVar4);
    cVar1 = (**(code **)(*plVar4 + 0x778))(plVar4);
    if (cVar1 == '\0') {
      return;
    }
  }
  FUN_143099810(param_1);
  return;
}



// FUNCTION 143099c20 FUN_143099c20 body=239 status=ok
// SIG undefined FUN_143099c20(void)

void FUN_143099c20(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 local_res10 [24];
  undefined8 local_18;
  longlong lStack_10;
  
  iVar1 = FUN_14233f450();
  if (iVar1 == 3) {
    uVar2 = 0;
    if ((0 < *(int *)(param_1 + 0x1f8)) && (*(int *)(param_1 + 0x2a8) == 0)) {
      local_18 = *(undefined8 *)(param_1 + 0x118);
      lStack_10 = 0;
      FUN_142c90ad0(param_1 + 0x1f0,param_1 + 0x2a0,local_18,&local_18,0,local_res10);
    }
    if ((0 < *(int *)(param_1 + 0x208)) && (*(int *)(param_1 + 0x2b8) == 0)) {
      lStack_10 = *(longlong *)(param_1 + 0x118);
      local_18 = uVar2;
      if (lStack_10 != 0) {
        uVar2 = *(undefined8 *)(lStack_10 + 0x150);
        local_18 = *(undefined8 *)(lStack_10 + 0x150);
      }
      FUN_142c90ad0(param_1 + 0x200,param_1 + 0x2b0,uVar2,&local_18,0,local_res10);
    }
  }
  return;
}



// FUNCTION 143099d40 FUN_143099d40 body=334 status=ok
// SIG undefined FUN_143099d40(void)

void FUN_143099d40(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  
  FUN_142330a70();
  if ((*(longlong *)(param_1 + 0x120) != 0) || (lVar2 = FUN_1423407b0(param_1), lVar2 != 0)) {
    lVar2 = *(longlong *)(param_1 + 0x120);
    if (lVar2 == 0) {
      lVar2 = FUN_1423407b0(param_1);
    }
    cVar1 = UWorld::IsGameWorld(lVar2);
    if (cVar1 != '\0') {
      lVar2 = *(longlong *)(param_1 + 0x230);
      if (lVar2 == 0) {
        lVar2 = *(longlong *)(param_1 + 0x118);
        *(longlong *)(param_1 + 0x230) = lVar2;
        if (lVar2 == 0) {
          return;
        }
      }
      FWeakObjectPtr::operator=(&local_48,0);
      local_40 = 0;
      puVar3 = (undefined8 *)FName::FName(local_res8,L"OnAttached",1);
      FWeakObjectPtr::operator=(&local_48,param_1);
      local_40 = *puVar3;
      local_28 = local_48;
      local_24 = local_44;
      local_20 = local_40;
      FUN_143088040(lVar2,&local_28);
      FWeakObjectPtr::operator=(&local_38,0);
      local_30 = 0;
      puVar3 = (undefined8 *)FName::FName(local_res8,L"OnDetached",1);
      FWeakObjectPtr::operator=(&local_38,param_1);
      local_30 = *puVar3;
      local_28 = local_38;
      local_24 = local_34;
      local_20 = local_30;
      FUN_143088210(lVar2,&local_28);
    }
  }
  return;
}



// FUNCTION 143099e90 FUN_143099e90 body=359 status=ok
// SIG undefined FUN_143099e90(void)

void FUN_143099e90(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  
  FUN_142330a70();
  if ((*(longlong *)(param_1 + 0x120) != 0) || (lVar2 = FUN_1423407b0(param_1), lVar2 != 0)) {
    lVar2 = *(longlong *)(param_1 + 0x120);
    if (lVar2 == 0) {
      lVar2 = FUN_1423407b0(param_1);
    }
    cVar1 = UWorld::IsGameWorld(lVar2);
    if (cVar1 != '\0') {
      lVar2 = *(longlong *)(param_1 + 0x210);
      if (lVar2 == 0) {
        lVar2 = *(longlong *)(param_1 + 0x118);
        *(longlong *)(param_1 + 0x210) = lVar2;
        if (lVar2 == 0) {
          return;
        }
      }
      if ((*(byte *)(param_1 + 0x181) & 4) != 0) {
        FWeakObjectPtr::operator=(&local_48,0);
        local_40 = 0;
        puVar3 = (undefined8 *)FName::FName(local_res8,L"SwitchToZoomedMode",1);
        FWeakObjectPtr::operator=(&local_48,param_1);
        local_40 = *puVar3;
        local_28 = local_48;
        local_24 = local_44;
        local_20 = local_40;
        FUN_143088b50(lVar2,&local_28,2,param_1);
        FWeakObjectPtr::operator=(&local_38,0);
        local_30 = 0;
        puVar3 = (undefined8 *)FName::FName(local_res8,L"SwitchFromZoomedMode",1);
        FWeakObjectPtr::operator=(&local_38,param_1);
        local_30 = *puVar3;
        local_28 = local_38;
        local_24 = local_34;
        local_20 = local_30;
        FUN_143088b50(lVar2,&local_28,3,param_1);
      }
    }
  }
  return;
}



// FUNCTION 14309a000 FUN_14309a000 body=170 status=ok
// SIG undefined FUN_14309a000(void)

void FUN_14309a000(longlong param_1)

{
  bool bVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  FUN_142330a70();
  plVar3 = *(longlong **)(param_1 + 0x248);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x118);
    *(longlong **)(param_1 + 0x248) = plVar3;
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  uVar2 = FUN_1430bc880();
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x800))(plVar3,uVar2,param_1);
  if (plVar3 != (longlong *)0x0) {
    lVar4 = FUN_1430bc880();
    if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_14309a085;
  }
  plVar3 = (longlong *)0x0;
LAB_14309a085:
  *(longlong **)(param_1 + 0x228) = plVar3;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x4d8))(plVar3,1);
  }
  return;
}



// FUNCTION 14309a0b0 FUN_14309a0b0 body=425 status=ok
// SIG undefined FUN_14309a0b0(void)

void FUN_14309a0b0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  
  FUN_142330a70();
  if ((*(longlong *)(param_1 + 0x120) != 0) || (lVar2 = FUN_1423407b0(param_1), lVar2 != 0)) {
    lVar2 = *(longlong *)(param_1 + 0x120);
    if (lVar2 == 0) {
      lVar2 = FUN_1423407b0(param_1);
    }
    cVar1 = UWorld::IsGameWorld(lVar2);
    if (cVar1 != '\0') {
      lVar2 = *(longlong *)(param_1 + 0x2e0);
      if (lVar2 == 0) {
        lVar2 = *(longlong *)(param_1 + 0x118);
        *(longlong *)(param_1 + 0x2e0) = lVar2;
        if (lVar2 == 0) {
          return;
        }
      }
      FWeakObjectPtr::operator=(&local_58,0);
      local_50 = 0;
      puVar3 = (undefined8 *)FName::FName(local_res8,L"OnAttached",1);
      FWeakObjectPtr::operator=(&local_58,param_1);
      local_50 = *puVar3;
      local_28 = local_58;
      local_24 = local_54;
      local_20 = local_50;
      FUN_143088040(lVar2,&local_28);
      FWeakObjectPtr::operator=(&local_48,0);
      local_40 = 0;
      puVar3 = (undefined8 *)FName::FName(local_res8,L"OnDetached",1);
      FWeakObjectPtr::operator=(&local_48,param_1);
      local_40 = *puVar3;
      local_28 = local_48;
      local_24 = local_44;
      local_20 = local_40;
      FUN_143088210(lVar2,&local_28);
      FWeakObjectPtr::operator=(&local_38,0);
      local_30 = 0;
      puVar3 = (undefined8 *)FName::FName(local_res8,L"OnSwitchedWeaponMode",1);
      FWeakObjectPtr::operator=(&local_38,param_1);
      local_30 = *puVar3;
      local_28 = local_38;
      local_24 = local_34;
      local_20 = local_30;
      FUN_143088820(lVar2,&local_28);
    }
  }
  return;
}



// FUNCTION 14309a260 FUN_14309a260 body=38 status=ok
// SIG undefined FUN_14309a260(void)

undefined1 FUN_14309a260(longlong *param_1)

{
  char cVar1;
  
  if ((*(byte *)((longlong)param_1 + 0x181) & 1) != 0) {
    cVar1 = (**(code **)(*param_1 + 0x470))();
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 14309a290 FUN_14309a290 body=48 status=ok
// SIG undefined FUN_14309a290(void)

void FUN_14309a290(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x460))();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014309a2b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x4a8))(plVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 14309a2c0 FUN_14309a2c0 body=1176 status=ok
// SIG undefined FUN_14309a2c0(void)

void FUN_14309a2c0(longlong param_1,undefined8 param_2,uint *param_3,longlong param_4,
                  undefined8 param_5)

{
  bool bVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  uint uVar12;
  longlong *plVar13;
  undefined8 *local_58;
  longlong *local_50;
  uint local_48;
  uint local_44;
  
  local_58 = *(undefined8 **)(param_3 + 8);
  plVar10 = (longlong *)0x0;
  if (local_58 == (undefined8 *)0x0) {
    local_58 = (undefined8 *)operator_new(0x30);
    if (local_58 == (undefined8 *)0x0) {
      local_58 = (undefined8 *)0x0;
    }
    else {
      *local_58 = 0;
      local_58[1] = 0;
      local_58[2] = 0;
      local_58[3] = 0;
      local_58[4] = 0;
      local_58[5] = 0;
      *(byte *)(local_58 + 5) = *(byte *)(local_58 + 5) & 0xf0;
      *(undefined4 *)((longlong)local_58 + 0x24) = 0;
    }
    *local_58 = 0;
    local_58[1] = 0;
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined8 **)(param_3 + 8) = local_58;
  }
  *(undefined4 *)((longlong)local_58 + 0x1c) = 0x3f800000;
  *(undefined4 *)(local_58 + 4) = 0x3f800000;
  *(uint *)((longlong)local_58 + 0x2c) =
       *(uint *)((longlong)local_58 + 0x2c) ^
       ((uint)*(byte *)(param_1 + 0x90) * 2 ^ *(uint *)((longlong)local_58 + 0x2c)) & 2;
  *(uint *)(local_58 + 1) = param_3[6];
  if (((*(byte *)((longlong)local_58 + 0x2c) & 2) == 0) ||
     (uVar2 = 0x10, 1 < (byte)(*(char *)(param_1 + 0x110) - 3U))) {
    uVar2 = 0;
  }
  *param_3 = *param_3 & 0xffffffef;
  *param_3 = *param_3 | uVar2;
  lVar9 = *(longlong *)(param_1 + 0xf8);
  if (lVar9 != 0) {
    lVar3 = UBlendSpaceBase::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      *(uint *)((longlong)local_58 + 0x2c) = *(uint *)((longlong)local_58 + 0x2c) | 1;
      lVar3 = UBlendSpaceBase::GetBlendParameter(lVar9,0);
      *(undefined4 *)((longlong)local_58 + 4) = *(undefined4 *)(lVar3 + 0x14);
      if ((*(byte *)(param_1 + 0xf0) & 1) == 0) {
        lVar3 = operator_new(0x168);
        plVar4 = plVar10;
        if (lVar3 != 0) {
          plVar4 = (longlong *)FUN_141f81fa0(lVar3);
        }
        plVar4[0x10] = lVar9;
        FUN_142256c40(param_4,plVar4,0);
        plVar5 = (longlong *)operator_new(0x120);
        if (plVar5 != (longlong *)0x0) {
          plVar5[1] = 0;
          plVar5[2] = 0;
          plVar5[3] = 0;
          plVar5[4] = 0;
          *(undefined1 *)(plVar5 + 5) = 0;
          *plVar5 = (longlong)&PTR_FUN_144f3bc60;
          *(undefined4 *)(plVar5 + 6) = 0xffffffff;
          plVar5[7] = 0;
          *(undefined1 *)(plVar5 + 8) = 0;
          plVar5[9] = 0;
          plVar5[10] = 0;
          plVar5[0xb] = 0;
          plVar5[0xc] = 0;
          plVar5[0xd] = 0;
          plVar5[0xe] = 0;
          *(undefined4 *)(plVar5 + 0xf) = 0;
          *(undefined4 *)((longlong)plVar5 + 0x7c) = 0xffffffff;
          plVar5[0x10] = 0;
          plVar5[0x11] = 0;
          plVar5[0x12] = 0;
          plVar5[0x13] = 0;
          plVar5[0x14] = 0;
          plVar5[0x15] = 0;
          plVar5[0x16] = 0;
          plVar5[0x17] = 0;
          plVar5[0x18] = 0;
          plVar5[0x19] = 0;
          plVar5[0x1a] = 0;
          plVar5[0x1b] = 0;
          plVar5[0x1c] = 0;
          plVar5[0x1d] = 0;
          plVar5[0x1e] = 0;
          plVar5[0x1f] = 0;
          plVar5[0x20] = 0;
          plVar5[0x21] = 0;
          plVar5[0x22] = 0;
          plVar5[0x23] = 0;
          plVar10 = plVar5;
        }
        *(byte *)(plVar10 + 0xf) = *(byte *)(param_1 + 0xf0) >> 1 & 1;
        *(undefined1 *)((longlong)plVar10 + 0x79) = 0;
        iVar8 = (int)plVar10[0xc];
        *(int *)(plVar10 + 0xc) = iVar8 + 1;
        if (*(int *)((longlong)plVar10 + 100) < iVar8 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10 + 0xb,iVar8);
        }
        FInstancedPropertyPath::FInstancedPropertyPath
                  ((longlong)iVar8 * 0x10 + plVar10[0xb],param_1 + 0x100);
        iVar8 = (int)plVar10[0xe];
        *(int *)(plVar10 + 0xe) = iVar8 + 1;
        if (*(int *)((longlong)plVar10 + 0x74) < iVar8 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar10 + 0xd,iVar8);
        }
        *(undefined4 *)(plVar10[0xd] + (longlong)iVar8 * 4) = 0x3f800000;
        iVar8 = (int)plVar10[10];
        lVar9 = (longlong)iVar8;
        *(int *)(plVar10 + 10) = iVar8 + 1;
        if (*(int *)((longlong)plVar10 + 0x54) < iVar8 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(plVar10 + 9,iVar8);
        }
        lVar3 = plVar10[9];
        *(undefined4 *)(lVar3 + lVar9 * 0x18) = 0xffffffff;
        *(undefined8 *)(lVar3 + 8 + lVar9 * 0x18) = 0;
        *(undefined1 *)(lVar3 + 0x10 + lVar9 * 0x18) = 0;
        FUN_140488ed0(plVar10[9],plVar4);
        FUN_14227bff0(param_4,plVar10,param_5);
        *(longlong **)(param_3 + 2) = plVar4;
      }
      else {
        local_50 = (longlong *)0x0;
        local_44 = 0;
        plVar4 = (longlong *)FUN_142268ae0(*(undefined8 *)(param_4 + 0x10));
        uVar2 = 0;
        if (plVar4 != (longlong *)0x0) {
          plVar6 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4);
          iVar8 = (int)plVar6[1];
          plVar4 = plVar10;
          plVar5 = plVar10;
          plVar13 = plVar10;
          uVar2 = 0;
          if (0 < iVar8) {
            do {
              lVar9 = *(longlong *)(*plVar6 + -8 + (longlong)(iVar8 - (int)plVar13) * 8);
              if (lVar9 != 0) {
                lVar7 = FCachedSubjectFrame::StaticStruct();
                for (lVar3 = *(longlong *)(lVar9 + 0x70); lVar3 != 0;
                    lVar3 = *(longlong *)(lVar3 + 0x30)) {
                  if (lVar3 == lVar7) {
                    iVar8 = *(int *)(lVar9 + 0x44);
                    iVar11 = (int)plVar5;
                    local_48 = iVar11 + 1;
                    if ((int)plVar4 < (int)local_48) {
                      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                                (&local_50,plVar5);
                      plVar4 = (longlong *)(ulonglong)local_44;
                      plVar10 = local_50;
                    }
                    plVar5 = (longlong *)(ulonglong)local_48;
                    plVar10[iVar11] = iVar8 + param_4;
                    break;
                  }
                }
              }
              uVar2 = (uint)plVar5;
              iVar8 = (int)plVar6[1];
              uVar12 = (int)plVar13 + 1;
              plVar13 = (longlong *)(ulonglong)uVar12;
            } while ((int)uVar12 < iVar8);
          }
        }
        if (plVar10 != plVar10 + (int)uVar2) {
          plVar4 = plVar10;
          do {
            if (*(longlong *)(*plVar4 + 0x80) == *(longlong *)(param_1 + 0xf8)) {
              *(longlong *)(param_3 + 2) = *plVar4;
              break;
            }
            plVar4 = plVar4 + 1;
          } while (plVar4 != plVar10 + (int)uVar2);
        }
        if (plVar10 != (longlong *)0x0) {
          FMemory::Free(plVar10);
        }
      }
      goto LAB_14309a731;
    }
  }
  *param_3 = *param_3 & 0xffffffef;
LAB_14309a731:
  FUN_1430a5e50(param_1,param_3,local_58);
  return;
}



// FUNCTION 14309a760 FUN_14309a760 body=905 status=ok
// SIG undefined FUN_14309a760(void)

void FUN_14309a760(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  uint uStack_2c;
  undefined4 uStack_24;
  
  lVar7 = operator_new(0x348);
  lVar8 = 0;
  if (lVar7 != 0) {
    lVar8 = FUN_142c8c480(lVar7);
  }
  *(longlong *)(param_3 + 8) = lVar8;
  uStack_2c = uStack_2c & 0xffffff00;
  *(undefined8 *)(lVar8 + 0x148) = *(undefined8 *)(param_1 + 0xf0);
  *(ulonglong *)(lVar8 + 0x150) = CONCAT44(uStack_2c,0xffffffff);
  *(ulonglong *)(lVar8 + 0x158) = CONCAT44(uStack_24,0xffffffff);
  if ((((param_4 != 0) && (lVar7 = *(longlong *)(param_4 + 0x28), lVar7 != 0)) &&
      (lVar1 = *(longlong *)(param_1 + 0xf0), lVar1 != 0)) &&
     (*(int *)(lVar7 + 0xf0) != *(int *)(lVar7 + 0x11c))) {
    lVar9 = *(longlong *)(lVar7 + 0x128);
    if (*(longlong *)(lVar7 + 0x128) == 0) {
      lVar9 = lVar7 + 0x120;
    }
    iVar6 = *(int *)(lVar9 + ((longlong)((int)((ulonglong)lVar1 >> 0x20) + (int)lVar1) &
                             (longlong)*(int *)(lVar7 + 0x130) - 1U) * 4);
    if (iVar6 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(lVar7 + 0xe8) + (longlong)iVar6 * 0x18) == lVar1) break;
        iVar6 = *(int *)(*(longlong *)(lVar7 + 0xe8) + 0x10 + (longlong)iVar6 * 0x18);
      } while (iVar6 != -1);
    }
  }
  *(byte *)(lVar8 + 0x144) = *(byte *)(param_1 + 0x90) & 1;
  *(byte *)(lVar8 + 0x145) = *(byte *)(param_1 + 0x90) >> 1 & 1;
  *(byte *)(lVar8 + 0x146) = (byte)(*(uint *)(param_1 + 0x30) >> 2) & 1;
  *(undefined4 *)(lVar8 + 0x140) = *(undefined4 *)(param_3 + 0x18);
  *(undefined4 *)(lVar8 + 0x2e8) = *(undefined4 *)(param_1 + 0xdc);
  *(undefined4 *)(lVar8 + 0x2ec) = *(undefined4 *)(param_1 + 0xe0);
  *(undefined4 *)(lVar8 + 0x2f0) = *(undefined4 *)(param_1 + 0xe4);
  *(undefined4 *)(lVar8 + 0x2f4) = *(undefined4 *)(param_1 + 0xe8);
  *(undefined1 *)(lVar8 + 0x16c) = *(undefined1 *)(param_1 + 0xf8);
  *(undefined1 *)(lVar8 + 0x16d) = *(undefined1 *)(param_1 + 0xf9);
  *(undefined8 *)(lVar8 + 0x170) = *(undefined8 *)(param_1 + 0xfc);
  *(undefined4 *)(lVar8 + 0x178) = *(undefined4 *)(param_1 + 0x104);
  *(undefined8 *)(lVar8 + 0x17c) = *(undefined8 *)(param_1 + 0x108);
  *(undefined4 *)(lVar8 + 0x184) = *(undefined4 *)(param_1 + 0x110);
  uVar5 = *(undefined8 *)(param_1 + 0x120);
  *(undefined8 *)(lVar8 + 0x188) = *(undefined8 *)(param_1 + 0x118);
  *(undefined8 *)(lVar8 + 400) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x130);
  *(undefined8 *)(lVar8 + 0x198) = *(undefined8 *)(param_1 + 0x128);
  *(undefined8 *)(lVar8 + 0x1a0) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x140);
  *(undefined8 *)(lVar8 + 0x1a8) = *(undefined8 *)(param_1 + 0x138);
  *(undefined8 *)(lVar8 + 0x1b0) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x150);
  *(undefined8 *)(lVar8 + 0x1b8) = *(undefined8 *)(param_1 + 0x148);
  *(undefined8 *)(lVar8 + 0x1c0) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x160);
  *(undefined8 *)(lVar8 + 0x1c8) = *(undefined8 *)(param_1 + 0x158);
  *(undefined8 *)(lVar8 + 0x1d0) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x170);
  *(undefined8 *)(lVar8 + 0x1d8) = *(undefined8 *)(param_1 + 0x168);
  *(undefined8 *)(lVar8 + 0x1e0) = uVar5;
  *(undefined1 *)(lVar8 + 0x1e8) = *(undefined1 *)(param_1 + 0x178);
  *(undefined1 *)(lVar8 + 0x1e9) = *(undefined1 *)(param_1 + 0x179);
  *(undefined8 *)(lVar8 + 0x1ec) = *(undefined8 *)(param_1 + 0x17c);
  *(undefined4 *)(lVar8 + 500) = *(undefined4 *)(param_1 + 0x184);
  *(undefined8 *)(lVar8 + 0x1f8) = *(undefined8 *)(param_1 + 0x188);
  *(undefined4 *)(lVar8 + 0x200) = *(undefined4 *)(param_1 + 400);
  uVar5 = *(undefined8 *)(param_1 + 0x1a0);
  *(undefined8 *)(lVar8 + 0x208) = *(undefined8 *)(param_1 + 0x198);
  *(undefined8 *)(lVar8 + 0x210) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x1b0);
  *(undefined8 *)(lVar8 + 0x218) = *(undefined8 *)(param_1 + 0x1a8);
  *(undefined8 *)(lVar8 + 0x220) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x1c0);
  *(undefined8 *)(lVar8 + 0x228) = *(undefined8 *)(param_1 + 0x1b8);
  *(undefined8 *)(lVar8 + 0x230) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x1d0);
  *(undefined8 *)(lVar8 + 0x238) = *(undefined8 *)(param_1 + 0x1c8);
  *(undefined8 *)(lVar8 + 0x240) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x1e0);
  *(undefined8 *)(lVar8 + 0x248) = *(undefined8 *)(param_1 + 0x1d8);
  *(undefined8 *)(lVar8 + 0x250) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x1f0);
  *(undefined8 *)(lVar8 + 600) = *(undefined8 *)(param_1 + 0x1e8);
  *(undefined8 *)(lVar8 + 0x260) = uVar5;
  *(undefined1 *)(lVar8 + 0x268) = *(undefined1 *)(param_1 + 0x1f8);
  *(undefined1 *)(lVar8 + 0x269) = *(undefined1 *)(param_1 + 0x1f9);
  *(undefined8 *)(lVar8 + 0x26c) = *(undefined8 *)(param_1 + 0x1fc);
  *(undefined4 *)(lVar8 + 0x274) = *(undefined4 *)(param_1 + 0x204);
  *(undefined8 *)(lVar8 + 0x278) = *(undefined8 *)(param_1 + 0x208);
  *(undefined4 *)(lVar8 + 0x280) = *(undefined4 *)(param_1 + 0x210);
  uVar5 = *(undefined8 *)(param_1 + 0x220);
  *(undefined8 *)(lVar8 + 0x288) = *(undefined8 *)(param_1 + 0x218);
  *(undefined8 *)(lVar8 + 0x290) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x230);
  *(undefined8 *)(lVar8 + 0x298) = *(undefined8 *)(param_1 + 0x228);
  *(undefined8 *)(lVar8 + 0x2a0) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x240);
  *(undefined8 *)(lVar8 + 0x2a8) = *(undefined8 *)(param_1 + 0x238);
  *(undefined8 *)(lVar8 + 0x2b0) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x250);
  *(undefined8 *)(lVar8 + 0x2b8) = *(undefined8 *)(param_1 + 0x248);
  *(undefined8 *)(lVar8 + 0x2c0) = uVar5;
  uVar2 = *(undefined4 *)(param_1 + 0x25c);
  uVar3 = *(undefined4 *)(param_1 + 0x260);
  uVar4 = *(undefined4 *)(param_1 + 0x264);
  *(undefined4 *)(lVar8 + 0x2c8) = *(undefined4 *)(param_1 + 600);
  *(undefined4 *)(lVar8 + 0x2cc) = uVar2;
  *(undefined4 *)(lVar8 + 0x2d0) = uVar3;
  *(undefined4 *)(lVar8 + 0x2d4) = uVar4;
  uVar2 = *(undefined4 *)(param_1 + 0x26c);
  uVar3 = *(undefined4 *)(param_1 + 0x270);
  uVar4 = *(undefined4 *)(param_1 + 0x274);
  *(undefined4 *)(lVar8 + 0x2d8) = *(undefined4 *)(param_1 + 0x268);
  *(undefined4 *)(lVar8 + 0x2dc) = uVar2;
  *(undefined4 *)(lVar8 + 0x2e0) = uVar3;
  *(undefined4 *)(lVar8 + 0x2e4) = uVar4;
  FUN_14227c160(param_4,lVar8,0);
  FUN_142cadb80(lVar8);
  return;
}



// FUNCTION 14309aaf0 PreviewSetAnimPosition body=82 status=ok
// SIG undefined PreviewSetAnimPosition(void)

void IMatineeAnimInterface::PreviewSetAnimPosition(void)

{
  LowLevelFatalErrorHandler
            ("d:\\oak\\main\\engine\\source\\runtime\\gearbox\\gbxweapon\\public\\WeaponSkeletalControlBase.h"
             ,0x33,L"Pure virtual not implemented (%s)",
             L"UWeaponSkeletalControlBase::CreateInstance");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "d:\\oak\\main\\engine\\source\\runtime\\gearbox\\gbxweapon\\public\\WeaponSkeletalControlBase.h"
             ,0x33,L"Pure virtual not implemented (%s)");
  return;
}



// FUNCTION 14309ab50 FUN_14309ab50 body=166 status=ok
// SIG undefined FUN_14309ab50(void)

void FUN_14309ab50(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar2 = GetTransientPackage();
  FUN_1417846f0(uVar2,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar3 = FUN_1430b1980();
  lVar4 = FUN_1417985e0(uVar3,uVar2,0,0,0,0,0,0,0);
  if (lVar4 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 1);
    *(undefined8 *)(lVar4 + 0x30) = *param_1;
    uVar2 = *param_2;
    *(undefined4 *)(lVar4 + 0x38) = uVar1;
    uVar1 = *(undefined4 *)(param_2 + 1);
    *(undefined8 *)(lVar4 + 0x3c) = uVar2;
    *(undefined4 *)(lVar4 + 0x44) = uVar1;
    *(undefined8 *)(lVar4 + 0x48) = param_3;
  }
  return;
}



// FUNCTION 14309ac00 InitializeModule body=59 status=ok
// SIG undefined InitializeModule(void)

undefined8 * FStaticallyLinkedModuleRegistrant<FSlateFileDialogsModule>::InitializeModule(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = &PTR_FUN_1447550f0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14309ac40 FUN_14309ac40 body=55 status=ok
// SIG undefined FUN_14309ac40(void)

void FUN_14309ac40(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = &PTR_FUN_145a6b5c0;
    return;
  }
  return;
}



// FUNCTION 14309ac80 FUN_14309ac80 body=47 status=ok
// SIG undefined FUN_14309ac80(void)

void FUN_14309ac80(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = &PTR_FUN_1447576b0;
    return;
  }
  return;
}



// FUNCTION 14309acb0 FUN_14309acb0 body=55 status=ok
// SIG undefined FUN_14309acb0(void)

void FUN_14309acb0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = &PTR_FUN_145a6d1d8;
    return;
  }
  return;
}



// FUNCTION 14309acf0 FUN_14309acf0 body=67 status=ok
// SIG undefined FUN_14309acf0(void)

void FUN_14309acf0(longlong param_1)

{
  undefined1 uVar1;
  
  if (((*(char *)(param_1 + 0x291) == '\x02') || (*(char *)(param_1 + 0x292) != '\0')) ||
     (*(char *)(param_1 + 0x291) == '\x01')) {
    *(char *)(param_1 + 0x295) = *(char *)(param_1 + 0x295) + '\x01';
    uVar1 = *(undefined1 *)(param_1 + 0x295);
    if (*(int *)(param_1 + 400) <= (int)(uint)*(byte *)(param_1 + 0x295)) {
      uVar1 = 0;
    }
    *(undefined1 *)(param_1 + 0x295) = uVar1;
  }
  return;
}



// FUNCTION 14309ad40 FUN_14309ad40 body=678 status=ok
// SIG undefined FUN_14309ad40(void)

void FUN_14309ad40(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 local_res8 [8];
  
  puVar1 = (undefined8 *)FUN_14218d9c0(*param_1,local_res8,L"unit_id");
  param_1[1] = *puVar1;
  puVar1 = (undefined8 *)FUN_14218d9c0(*param_1,local_res8,L"unit_class");
  param_1[2] = *puVar1;
  puVar1 = (undefined8 *)FUN_14218d9c0(*param_1,local_res8,L"player_id");
  param_1[3] = *puVar1;
  puVar1 = (undefined8 *)FUN_14218d9c0(*param_1,local_res8,L"player_character_guid");
  param_1[4] = *puVar1;
  puVar1 = (undefined8 *)FUN_14218d9c0(*param_1,local_res8,L"item_serial_number");
  param_1[5] = *puVar1;
  puVar1 = (undefined8 *)FUN_14218d9c0(*param_1,local_res8,L"item_manufacturer");
  param_1[6] = *puVar1;
  puVar1 = (undefined8 *)FUN_14218d9c0(*param_1,local_res8,L"item_rarity");
  param_1[7] = *puVar1;
  puVar1 = (undefined8 *)FUN_14218d9c0(*param_1,local_res8,L"weapon_type");
  param_1[8] = *puVar1;
  puVar1 = (undefined8 *)FUN_14218d9c0(*param_1,local_res8,L"weapon_mode");
  param_1[9] = *puVar1;
  puVar1 = (undefined8 *)FUN_14218d9c0(*param_1,local_res8,L"weapon_elemental_effect");
  param_1[10] = *puVar1;
  puVar1 = (undefined8 *)FUN_14218d9c0(*param_1,local_res8,L"val_trigger_pulls");
  param_1[0xb] = *puVar1;
  puVar1 = (undefined8 *)FUN_14218d9c0(*param_1,local_res8,L"val_trigger_pulls_ads");
  param_1[0xc] = *puVar1;
  puVar1 = (undefined8 *)FUN_14218d9c0(*param_1,local_res8,L"val_bullets_fired");
  param_1[0xd] = *puVar1;
  puVar1 = (undefined8 *)FUN_14218d9c0(*param_1,local_res8,L"val_bullets_fired_ads");
  param_1[0xe] = *puVar1;
  puVar1 = (undefined8 *)FUN_14218d9c0(*param_1,local_res8,L"val_bullets_hit");
  param_1[0xf] = *puVar1;
  puVar1 = (undefined8 *)FUN_14218d9c0(*param_1,local_res8,L"val_bullets_hit_ads");
  param_1[0x10] = *puVar1;
  puVar1 = (undefined8 *)FUN_14218d9c0(*param_1,local_res8,L"val_bullets_crit");
  param_1[0x11] = *puVar1;
  puVar1 = (undefined8 *)FUN_14218d9c0(*param_1,local_res8,L"val_bullets_crit_ads");
  param_1[0x12] = *puVar1;
  puVar1 = (undefined8 *)FUN_14218d9c0(*param_1,local_res8,L"val_damage_done");
  param_1[0x13] = *puVar1;
  puVar1 = (undefined8 *)FUN_14218d9c0(*param_1,local_res8,L"val_damage_done_aoe");
  param_1[0x14] = *puVar1;
  puVar1 = (undefined8 *)FUN_14218d9c0(*param_1,local_res8,L"val_damage_done_crit");
  param_1[0x15] = *puVar1;
  puVar1 = (undefined8 *)FUN_14218d9c0(*param_1,local_res8,L"val_mode_switch");
  param_1[0x16] = *puVar1;
  puVar1 = (undefined8 *)FUN_14218d9c0(*param_1,local_res8,L"val_reload_auto");
  param_1[0x17] = *puVar1;
  puVar1 = (undefined8 *)FUN_14218d9c0(*param_1,local_res8,L"val_reload_manual");
  param_1[0x18] = *puVar1;
  return;
}



// FUNCTION 14309aff0 FUN_14309aff0 body=42 status=ok
// SIG undefined FUN_14309aff0(void)

void FUN_14309aff0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (*(longlong *)(param_3 + 0x20) != 0) {
    FMemory::operator_delete(*(longlong *)(param_3 + 0x20),0x30);
    *(undefined8 *)(param_3 + 0x20) = 0;
  }
  return;
}



// FUNCTION 14309b020 FUN_14309b020 body=243 status=ok
// SIG undefined FUN_14309b020(void)

undefined8 FUN_14309b020(longlong param_1,undefined8 param_2,undefined8 param_3,float param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  float fVar5;
  float fVar6;
  longlong *local_28;
  longlong *local_20;
  
  fVar5 = (float)param_3;
  plVar4 = *(longlong **)(param_1 + 0x210);
  if (plVar4 == (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x118);
    *(longlong **)(param_1 + 0x210) = plVar4;
  }
  fVar6 = 1.0;
  if ((((*(byte *)(param_1 + 0x181) & 8) != 0) || (fVar5 <= 0.0)) && (fVar5 = 0.0, 0.0 < param_4)) {
    fVar6 = 1.0 / param_4;
  }
  (**(code **)(*plVar4 + 0x990))(plVar4,&local_28,5,fVar6,fVar5,0,0);
  if (((*(byte *)(param_1 + 0x181) & 8) != 0) && (local_28 != (longlong *)0x0)) {
    param_3 = (**(code **)(*local_28 + 0x58))();
  }
  if (local_20 == (longlong *)0x0) {
    return param_3;
  }
  LOCK();
  plVar4 = local_20 + 1;
  lVar3 = *plVar4;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)lVar3 == 1) {
    (**(code **)*local_20)(local_20);
    LOCK();
    piVar1 = (int *)((longlong)local_20 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*local_20 + 8))(local_20,1);
    }
  }
  return param_3;
}



// FUNCTION 14309b120 FUN_14309b120 body=111 status=ok
// SIG undefined FUN_14309b120(void)

undefined * FUN_14309b120(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b48228) {
    _Init_thread_header(&DAT_146b48228);
    if (DAT_146b48228 == -1) {
      FUN_143097d20(&DAT_146b48160);
      _Init_thread_footer(&DAT_146b48228);
      return &DAT_146b48160;
    }
  }
  return &DAT_146b48160;
}



// FUNCTION 14309b190 FUN_14309b190 body=86 status=ok
// SIG undefined FUN_14309b190(void)

undefined8 FUN_14309b190(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (lVar1 != 0) {
    uVar2 = FUN_1430a7dc0();
    plVar3 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar2);
    if (plVar3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014309b1d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,*(undefined1 *)(param_1 + 0x180));
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 14309b220 FUN_14309b220 body=73 status=ok
// SIG undefined FUN_14309b220(void)

float FUN_14309b220(longlong param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_14309ee20();
  if (0.0 < fVar1) {
    return (*(float *)(param_1 + 0x198) - 1.0) * fVar1 + 1.0;
  }
  return 1.0;
}



// FUNCTION 14309b270 FUN_14309b270 body=464 status=ok
// SIG undefined FUN_14309b270(void)

void FUN_14309b270(longlong param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_14309ee20();
  if (0.0 < fVar1) {
    if (*(byte *)(param_1 + 0x292) != 0) {
      FUN_14309eee0(param_1,*(byte *)(param_1 + 0x292) - 1);
    }
    FUN_14309ef40(param_1);
  }
  if ((*(char *)(param_1 + 0x2c4) != '\0') && (*(longlong *)(param_1 + 0x120) == 0)) {
    FUN_1423407b0(param_1);
  }
  return;
}



// FUNCTION 14309b440 FUN_14309b440 body=380 status=ok
// SIG undefined FUN_14309b440(void)

float FUN_14309b440(longlong param_1)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = 1.0;
  fVar2 = (float)FUN_14309ee20();
  if (fVar2 <= 0.0) goto LAB_14309b573;
  bVar1 = *(byte *)(param_1 + 0x292);
  if (bVar1 != 0) {
    fVar3 = (float)FUN_14309eee0(param_1,bVar1 - 1);
  }
  if ((int)(uint)bVar1 < *(int *)(param_1 + 400)) {
    fVar2 = *(float *)(*(longlong *)(param_1 + 0x188) + 0xc + (ulonglong)bVar1 * 0x10);
  }
  else {
    fVar2 = 1.0;
  }
  fVar4 = (float)FUN_14309ef40(param_1);
  if ((int)(uint)bVar1 < *(int *)(param_1 + 400)) {
    fVar5 = *(float *)(*(longlong *)(param_1 + 0x188) + 8 + (ulonglong)bVar1 * 0x10);
    if (0.0001 <= fVar5) goto LAB_14309b508;
    if (fVar4 != 1.0) goto LAB_14309b573;
  }
  else {
    fVar5 = 1.0;
LAB_14309b508:
    fVar5 = (fVar4 - (1.0 - fVar5)) / fVar5;
    if (fVar5 <= 0.0) goto LAB_14309b573;
    fVar4 = fVar5 + fVar5;
    if (0.5 <= fVar5) {
      fVar4 = 1.0 - (fVar4 - 1.0);
      fVar4 = (1.0 - fVar4 * fVar4) + 1.0;
    }
    else {
      fVar4 = fVar4 * fVar4;
    }
    fVar2 = (fVar2 - fVar3) * fVar4 * 0.5 + fVar3;
  }
  fVar3 = fVar2;
LAB_14309b573:
  if ((*(char *)(param_1 + 0x2c4) != '\0') && (0.0 < *(float *)(param_1 + 0x2d4))) {
    fVar2 = (float)FUN_14309dd70(param_1);
    fVar3 = (fVar3 - *(float *)(param_1 + 0x2d4)) * fVar2 + *(float *)(param_1 + 0x2d4);
  }
  return fVar3;
}



// FUNCTION 14309b5c0 FUN_14309b5c0 body=162 status=ok
// SIG undefined FUN_14309b5c0(void)

longlong FUN_14309b5c0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *local_res8 [4];
  
  if (((param_1 != 0) && (plVar1 = (longlong *)FUN_14307cf20(), plVar1 != (longlong *)0x0)) &&
     ((**(code **)(*plVar1 + 0x4d0))(plVar1,local_res8), local_res8[0] != (longlong *)0x0)) {
    plVar2 = (longlong *)FUN_142e49950();
    for (plVar1 = local_res8[0]; plVar1 != (longlong *)0x0; plVar1 = (longlong *)plVar1[6]) {
      if (plVar1 == plVar2) {
        if (local_res8[0][0x1f] != 0) {
          return local_res8[0][0x1f];
        }
        (**(code **)(*local_res8[0] + 0x368))(local_res8[0]);
        if (local_res8[0][0x1f] != 0) {
          return local_res8[0][0x1f];
        }
        break;
      }
    }
  }
  plVar1 = (longlong *)FUN_142e49950();
  lVar3 = plVar1[0x1f];
  if (lVar3 == 0) {
    (**(code **)(*plVar1 + 0x368))(plVar1);
    lVar3 = plVar1[0x1f];
  }
  return lVar3;
}



// FUNCTION 14309b670 FUN_14309b670 body=196 status=ok
// SIG undefined FUN_14309b670(void)

undefined8 * FUN_14309b670(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  bool bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = FUN_1430b3b80();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (lVar3 = *(longlong *)(param_3 + 0x480), lVar3 != 0)) {
      if (*(char *)(param_1 + 0xd8) == '\0') {
        uVar1 = *(undefined8 *)(lVar3 + 0x38);
        *param_2 = *(undefined8 *)(lVar3 + 0x30);
        param_2[1] = uVar1;
        return param_2;
      }
      if (*(char *)(param_1 + 0xd8) == '\x01') {
        uVar1 = *(undefined8 *)(lVar3 + 0x48);
        *param_2 = *(undefined8 *)(lVar3 + 0x40);
        param_2[1] = uVar1;
        return param_2;
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 14309b740 FUN_14309b740 body=227 status=ok
// SIG undefined FUN_14309b740(void)

void FUN_14309b740(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_143070860(param_2,&DAT_146b47eb0);
  if (cVar1 != '\0') {
    FUN_14128ee30(param_2,L"[Heat]",param_1 + -0x178);
    FUN_1412861f0(param_2,L"Current Heat:",*(undefined4 *)(param_1 + 0xa0),L"Overheated:",
                  *(byte *)(param_1 + 0xb1) & 1);
    cVar1 = FUN_143070930(param_2);
    if (cVar1 != '\0') {
      FUN_141286100(param_2,L"Heat Cool Down Rate:",*(undefined4 *)(param_1 + 0x14));
      FUN_141286100(param_2,L"Heat Cool Down Delay:",*(undefined4 *)(param_1 + 0x20));
      FUN_141286100(param_2,L"Use Heat Impulse:",*(undefined4 *)(param_1 + 0x2c));
      FUN_141286100(param_2,L"Overheat Time:",*(undefined4 *)(param_1 + 0x48));
      FUN_141286100(param_2,L"Overheat Cool Down Delay:",*(undefined4 *)(param_1 + 0x54));
    }
  }
  return;
}



// FUNCTION 14309b850 FUN_14309b850 body=394 status=ok
// SIG undefined FUN_14309b850(void)

void FUN_14309b850(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  char cVar3;
  undefined2 *puVar4;
  float fVar5;
  float fVar6;
  undefined2 *local_48;
  int local_40;
  
  cVar3 = FUN_143070860(param_2,&DAT_146b47eb8);
  if (cVar3 != '\0') {
    FUN_14128ee30(param_2,L"[Recoil]",param_1 + -0x178);
    lVar2 = *(longlong *)(param_1 + 0x28);
    if (lVar2 == 0) {
      fVar5 = 0.0;
      fVar6 = 0.0;
    }
    else {
      fVar5 = *(float *)(param_1 + 0x40) * *(float *)(lVar2 + 0xcc);
      fVar6 = *(float *)(param_1 + 0x34) * *(float *)(lVar2 + 0xd0);
    }
    uVar1 = *(undefined4 *)(param_1 + 0x4c);
    FString::PrintfImpl(&local_48,L"%g x %g",(double)*(float *)(param_1 + 0x34),
                        (double)*(float *)(param_1 + 0x40));
    puVar4 = &DAT_143f3eda8;
    if (local_40 != 0) {
      puVar4 = local_48;
    }
    FUN_143097190(param_2,L"Pattern Scale:",puVar4,L"Zoom:",uVar1,L"Goodness:",fVar6 + fVar5);
    if (local_48 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    FUN_141286870(param_2,L"Recoil Speed:",*(undefined4 *)(param_1 + 0x58),L"Recovery Time:",
                  *(undefined4 *)(param_1 + 0x5c),L"Recovery Delay:",*(undefined4 *)(param_1 + 0x60)
                 );
    cVar3 = FUN_143070930(param_2);
    if (cVar3 != '\0') {
      FUN_141285dd0(param_2,L"Current Pattern Index:",*(undefined4 *)(param_1 + 0x68),
                    L"Pattern Direction:",*(undefined4 *)(param_1 + 0x6c));
    }
  }
  return;
}



// FUNCTION 14309b9e0 FUN_14309b9e0 body=25 status=ok
// SIG undefined FUN_14309b9e0(void)

void FUN_14309b9e0(longlong param_1,undefined8 param_2)

{
  FUN_14128ee30(param_2,L"[Reload]",param_1 + -0x178);
  return;
}



// FUNCTION 14309ba00 FUN_14309ba00 body=106 status=ok
// SIG undefined FUN_14309ba00(void)

void FUN_14309ba00(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_143070860(param_2,&DAT_146b47ec0);
  if (cVar1 != '\0') {
    FUN_14128ee30(param_2,L"[Reload]",param_1 + -0x178);
    uVar2 = (**(code **)(*(longlong *)(param_1 + -0x178) + 0x428))(param_1 + -0x178);
    FUN_141286100(param_2,L"Single Feed Reload Time:",uVar2);
  }
  return;
}



// FUNCTION 14309ba70 FUN_14309ba70 body=70 status=ok
// SIG undefined FUN_14309ba70(void)

void FUN_14309ba70(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  
  cVar2 = FUN_143070860(param_2,&DAT_146b48020);
  if ((cVar2 != '\0') && (plVar1 = *(longlong **)(param_1 + 0x88), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x3f8))(plVar1,param_2);
  }
  return;
}



// FUNCTION 14309bac0 FUN_14309bac0 body=499 status=ok
// SIG undefined FUN_14309bac0(void)

void FUN_14309bac0(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 *local_38;
  int local_30;
  undefined2 *local_28;
  int local_20;
  
  cVar2 = FUN_143070860(param_2,&DAT_146b48028);
  if (cVar2 != '\0') {
    FUN_14128ee30(param_2,L"[VisibleAmmo]",param_1 + -0x178);
    uVar1 = *(undefined1 *)(param_1 + 0x1a);
    uVar3 = UEnum::GetPrivateStaticClass();
    lVar4 = FUN_141799410(uVar3,0,L"/Script/GbxWeapon.EWeaponVisibleAmmoUpdateMethod",0);
    if (lVar4 == 0) {
      LowLevelFatalErrorHandler
                ("Unknown",0x75d,L"Couldn\'t find enum \'%s\'",
                 L"/Script/GbxWeapon.EWeaponVisibleAmmoUpdateMethod");
      FDebug::AssertFailed
                (&DAT_143f3f584,"Unknown",0x75d,L"Couldn\'t find enum \'%s\'",
                 L"/Script/GbxWeapon.EWeaponVisibleAmmoUpdateMethod");
    }
    UEnum::GetNameStringByValue(lVar4,&local_28,uVar1);
    uVar1 = *(undefined1 *)(param_1 + 0xa8);
    puVar5 = &DAT_143f3eda8;
    if (local_20 != 0) {
      puVar5 = local_28;
    }
    uVar3 = UEnum::GetPrivateStaticClass();
    lVar4 = FUN_141799410(uVar3,0,L"/Script/GbxWeapon.EWeaponVisibleAmmoState",0);
    if (lVar4 == 0) {
      LowLevelFatalErrorHandler
                ("Unknown",0x75d,L"Couldn\'t find enum \'%s\'",
                 L"/Script/GbxWeapon.EWeaponVisibleAmmoState");
      FDebug::AssertFailed
                (&DAT_143f3f584,"Unknown",0x75d,L"Couldn\'t find enum \'%s\'",
                 L"/Script/GbxWeapon.EWeaponVisibleAmmoState");
    }
    UEnum::GetNameStringByValue(lVar4,&local_38,uVar1);
    puVar6 = &DAT_143f3eda8;
    if (local_30 != 0) {
      puVar6 = local_38;
    }
    FUN_143097640(param_2,L"State:",puVar6,L"Update Method:",puVar5,L"Last Count:",
                  *(undefined4 *)(param_1 + 0xbc));
    if (local_38 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_28 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 14309bcc0 FUN_14309bcc0 body=685 status=ok
// SIG undefined FUN_14309bcc0(void)

void FUN_14309bcc0(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined4 uVar6;
  float fVar7;
  undefined8 local_res18;
  wchar_t *in_stack_ffffffffffffffb8;
  undefined2 *local_28;
  undefined8 local_20;
  
  cVar2 = FUN_143070860(param_2,&DAT_146b48050);
  if (cVar2 != '\0') {
    FUN_14128ee30(param_2,L"[Zoom]",param_1 + -0x178);
    uVar1 = *(undefined1 *)(param_1 + 0x119);
    uVar3 = UEnum::GetPrivateStaticClass();
    lVar4 = FUN_141799410(uVar3,0,L"/Script/GbxWeapon.EWeaponZoomState",0);
    if (lVar4 == 0) {
      LowLevelFatalErrorHandler
                ("Unknown",0x75d,L"Couldn\'t find enum \'%s\'",L"/Script/GbxWeapon.EWeaponZoomState"
                );
      in_stack_ffffffffffffffb8 = L"/Script/GbxWeapon.EWeaponZoomState";
      FDebug::AssertFailed
                (&DAT_143f3f584,"Unknown",0x75d,L"Couldn\'t find enum \'%s\'",
                 L"/Script/GbxWeapon.EWeaponZoomState");
    }
    UEnum::GetNameStringByValue(lVar4,&local_28,uVar1);
    puVar5 = &DAT_143f3eda8;
    if ((int)local_20 != 0) {
      puVar5 = local_28;
    }
    uVar6 = FUN_14309ee20(param_1 + -0x178);
    uVar3 = CONCAT71((int7)((ulonglong)in_stack_ffffffffffffffb8 >> 8),
                     *(undefined1 *)(param_1 + 0x11a));
    FUN_143096a10(param_2,L"State:",puVar5,L"Level:",uVar3,L"Percent:",uVar6);
    uVar6 = (undefined4)((ulonglong)uVar3 >> 0x20);
    if (local_28 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if ((int)(uint)*(byte *)(param_1 + 0x11a) < *(int *)(param_1 + 0x18)) {
      fVar7 = *(float *)(*(longlong *)(param_1 + 0x10) + 4 +
                        (ulonglong)*(byte *)(param_1 + 0x11a) * 0x10) * *(float *)(param_1 + 0x68);
    }
    else {
      fVar7 = 1.0;
    }
    if ((*(char *)(param_1 + 0x118) != '\0') && (*(byte *)(param_1 + 0x148) != 0)) {
      fVar7 = fVar7 * (float)*(byte *)(param_1 + 0x148) * *(float *)(param_1 + 0x38);
    }
    FUN_141286100(param_2,L"Zoom FOV Scale:",fVar7);
    cVar2 = FUN_143070930(param_2);
    if (cVar2 != '\0') {
      FUN_141286100(param_2,L"Instigator Accuracy Scale:",*(undefined4 *)(param_1 + 0x20));
      fVar7 = 0.2;
      if ((int)(uint)*(byte *)(param_1 + 0x11a) < *(int *)(param_1 + 0x18)) {
        fVar7 = *(float *)(*(longlong *)(param_1 + 0x10) +
                          (ulonglong)*(byte *)(param_1 + 0x11a) * 0x10);
      }
      FUN_141286100(param_2,L"Zoom Duration:",fVar7 * *(float *)(param_1 + 0x6c));
      puVar5 = *(undefined2 **)(param_1 + 200);
      if (puVar5 == (undefined2 *)0x0) {
        local_20 = 5;
        local_28 = puVar5;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
        FGenericPlatformString::Memcpy(local_28,&DAT_143f3edc8,10);
      }
      else {
        local_res18 = *(undefined8 *)(puVar5 + 0xc);
        FName::ToString(&local_res18,&local_28);
      }
      puVar5 = &DAT_143f3eda8;
      if ((int)local_20 != 0) {
        puVar5 = local_28;
      }
      FUN_143096ec0(param_2,L"Feedback:",puVar5,L"Scale",
                    CONCAT44(uVar6,*(undefined4 *)(param_1 + 0xd0)));
      if (local_28 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 14309bf70 FUN_14309bf70 body=197 status=ok
// SIG undefined FUN_14309bf70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14309bf70(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 local_58 [48];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  if (param_2 == (longlong *)0x0) {
    return 0;
  }
  local_68 = 0;
  if ((*(longlong *)(param_1 + 0x210) == 0) ||
     (cVar1 = (**(code **)(*param_2 + 0x440))(param_2,*(undefined8 *)(param_1 + 0x210)),
     cVar1 == '\0')) {
    if (*(char *)(param_1 + 0x1c0) != '\0') {
      return 0;
    }
    cVar1 = (**(code **)(*param_2 + 0x440))(param_2,*(undefined8 *)(param_1 + 0x1d0));
    if (cVar1 == '\0') {
      return 0;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x1d0);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x210);
  }
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x420))(param_2,local_58,uVar3,0);
  uVar3 = puVar2[1];
  *param_3 = *puVar2;
  param_3[1] = uVar3;
  uVar3 = puVar2[3];
  param_3[2] = puVar2[2];
  param_3[3] = uVar3;
  uVar3 = puVar2[5];
  param_3[4] = puVar2[4];
  param_3[5] = uVar3;
  return 1;
}



// FUNCTION 14309c040 FUN_14309c040 body=2932 status=ok
// SIG undefined FUN_14309c040(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_14309c040(longlong param_1,float *param_2,longlong *param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  char cVar3;
  undefined8 *puVar4;
  float *pfVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar14;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
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
  undefined1 auStack_1a8 [32];
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  longlong local_178 [2];
  undefined8 local_168 [2];
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined1 local_118 [16];
  float local_108;
  float fStack_104;
  float fStack_100;
  ulonglong local_e8;
  
  fVar11 = fRam0000000146b47e1c;
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  *param_2 = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  param_2[3] = fVar11;
  param_2[4] = 0.0;
  param_2[5] = 0.0;
  param_2[6] = 0.0;
  param_2[7] = 0.0;
  fVar11 = (float)((uint)fRam0000000146b47e14 & uRam0000000146b47e24);
  fVar12 = (float)((uint)fRam0000000146b47e18 & uRam0000000146b47e28);
  fVar13 = (float)((uint)fRam0000000146b47e1c & uRam0000000146b47e2c);
  param_2[8] = (float)((uint)_DAT_146b47e10 & _DAT_146b47e20);
  param_2[9] = fVar11;
  param_2[10] = fVar12;
  param_2[0xb] = fVar13;
  if ((param_3 != (longlong *)0x0) &&
     (cVar3 = (**(code **)(*param_3 + 0x440))(param_3,0), cVar3 != '\0')) {
    local_178[0] = 0;
    puVar4 = (undefined8 *)FUN_14309e6e0(local_118,param_3,param_1 + 0x1b8,local_178);
    uVar2 = puVar4[1];
    *(undefined8 *)param_2 = *puVar4;
    *(undefined8 *)(param_2 + 2) = uVar2;
    uVar2 = puVar4[3];
    *(undefined8 *)(param_2 + 4) = puVar4[2];
    *(undefined8 *)(param_2 + 6) = uVar2;
    uVar2 = puVar4[5];
    *(undefined8 *)(param_2 + 8) = puVar4[4];
    *(undefined8 *)(param_2 + 10) = uVar2;
    if (*(char *)(param_1 + 0x1c0) == '\0') {
      cVar3 = (**(code **)(*param_3 + 0x440))(param_3,*(undefined8 *)(param_1 + 0x1d0));
      if ((cVar3 != '\0') &&
         (cVar3 = (**(code **)(*param_3 + 0x440))(param_3,*(undefined8 *)(param_1 + 0x1d8)),
         cVar3 != '\0')) {
        FUN_14309e6e0(local_118,param_3,param_1 + 0x1d0,0);
        FUN_14309e6e0(&local_158,param_3,param_1 + 0x1d8,0);
        local_108 = local_108 - local_148;
        fStack_104 = fStack_104 - fStack_144;
        fStack_100 = fStack_100 - fStack_140;
        fVar11 = fStack_104 * fStack_104 + local_108 * local_108 + fStack_100 * fStack_100;
        fStack_180 = fStack_100;
        fStack_184 = fStack_104;
        local_188 = local_108;
        if ((fVar11 != 1.0) &&
           (fStack_180 = DAT_1468b5d98, fStack_184 = DAT_1468b5d94, local_188 = DAT_1468b5d90,
           1e-08 <= fVar11)) {
          auVar17 = rsqrtss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
          fVar12 = auVar17._0_4_;
          fVar12 = fVar12 + fVar12 * (0.5 - fVar11 * 0.5 * fVar12 * fVar12);
          fVar12 = fVar12 + fVar12 * (0.5 - fVar11 * 0.5 * fVar12 * fVar12);
          local_168[0] = CONCAT44(local_168[0]._4_4_,fVar12);
          fStack_180 = fStack_100 * fVar12;
          fStack_184 = fStack_104 * fVar12;
          local_188 = local_108 * fVar12;
        }
        fVar11 = SQRT((param_2[5] - fStack_144) * (param_2[5] - fStack_144) +
                      (param_2[4] - local_148) * (param_2[4] - local_148) +
                      (param_2[6] - fStack_140) * (param_2[6] - fStack_140));
        auVar17._4_4_ = fStack_144 - fStack_184 * fVar11;
        auVar17._0_4_ = local_148 - local_188 * fVar11;
        auVar17._8_4_ = fStack_140 - fStack_180 * fVar11;
        auVar17._12_4_ = 0;
        *(undefined1 (*) [16])(param_2 + 4) = auVar17;
        puVar4 = (undefined8 *)FVector4::ToOrientationQuat(&local_188,local_168);
        uVar2 = puVar4[1];
        *(undefined8 *)param_2 = *puVar4;
        *(undefined8 *)(param_2 + 2) = uVar2;
      }
    }
    else {
      cVar3 = (**(code **)(*param_3 + 0x440))(param_3,*(undefined8 *)(param_1 + 0x1c8));
      if (cVar3 != '\0') {
        FUN_14309e6e0(&local_158,param_3,param_1 + 0x1c8,0);
        local_188 = local_148 - param_2[4];
        fStack_184 = fStack_144 - param_2[5];
        fStack_180 = fStack_140 - param_2[6];
        fVar11 = fStack_184 * fStack_184 + local_188 * local_188 + fStack_180 * fStack_180;
        if (fVar11 != 1.0) {
          if (1e-08 <= fVar11) {
            auVar17 = rsqrtss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
            fVar12 = auVar17._0_4_;
            fVar12 = fVar12 + fVar12 * (0.5 - fVar11 * 0.5 * fVar12 * fVar12);
            fVar12 = fVar12 + fVar12 * (0.5 - fVar11 * 0.5 * fVar12 * fVar12);
            local_168[0] = CONCAT44(local_168[0]._4_4_,fVar12);
            local_188 = local_188 * fVar12;
            fStack_184 = fStack_184 * fVar12;
            fStack_180 = fStack_180 * fVar12;
          }
          else {
            local_188 = DAT_1468b5d90;
            fStack_180 = DAT_1468b5d98;
            fStack_184 = DAT_1468b5d94;
          }
        }
        puVar4 = (undefined8 *)FVector4::ToOrientationQuat(&local_188,local_168);
        uVar2 = puVar4[1];
        *(undefined8 *)param_2 = *puVar4;
        *(undefined8 *)(param_2 + 2) = uVar2;
      }
    }
    local_168[0] = 0;
    if (local_178[0] != 0) {
      plVar8 = param_3;
      pfVar5 = (float *)(**(code **)(*param_3 + 0x420))(param_3,local_118,local_178[0],2);
      fVar33 = fRam0000000146b47e18;
      fVar32 = fRam0000000146b47e14;
      fVar30 = _DAT_146b47e10;
      auVar17 = *(undefined1 (*) [16])(param_2 + 8);
      auVar9 = *(undefined1 (*) [16])(pfVar5 + 8);
      fVar11 = auVar9._0_4_;
      fVar12 = auVar9._4_4_;
      fVar13 = auVar9._8_4_;
      fVar24 = auVar9._12_4_;
      auVar9 = minps(auVar17,auVar9);
      auVar10._4_4_ = -(uint)(auVar9._4_4_ < fRam0000000146b47e74);
      auVar10._0_4_ = -(uint)(auVar9._0_4_ < _DAT_146b47e70);
      auVar10._8_4_ = -(uint)(auVar9._8_4_ < fRam0000000146b47e78);
      auVar10._12_4_ = -(uint)(auVar9._12_4_ < fRam0000000146b47e7c);
      iVar7 = movmskps((int)plVar8,auVar10);
      if (iVar7 == 0) {
        fVar30 = *pfVar5;
        fVar32 = pfVar5[1];
        fVar33 = pfVar5[2];
        fVar22 = pfVar5[3];
        fVar23 = *param_2;
        fVar31 = param_2[1];
        fVar14 = param_2[2];
        fVar34 = param_2[3];
        fVar25 = fVar11 * param_2[4];
        fVar26 = fVar12 * param_2[5];
        fVar18 = fVar13 * param_2[6];
        fVar19 = fVar24 * param_2[7];
        fVar20 = fVar34 * fVar30 * _DAT_146b47e50 + fVar22 * fVar23 +
                 fVar32 * fVar14 * _DAT_146b47e40 + fVar33 * fVar31 * _DAT_146b47e30;
        fVar28 = fVar14 * fVar30 * fRam0000000146b47e54 + fVar22 * fVar31 +
                 fVar32 * fVar34 * fRam0000000146b47e44 + fVar33 * fVar23 * fRam0000000146b47e34;
        fVar21 = fVar31 * fVar30 * fRam0000000146b47e58 + fVar22 * fVar14 +
                 fVar32 * fVar23 * fRam0000000146b47e48 + fVar33 * fVar34 * fRam0000000146b47e38;
        fVar27 = fVar23 * fVar30 * fRam0000000146b47e5c + fVar22 * fVar34 +
                 fVar32 * fVar31 * fRam0000000146b47e4c + fVar33 * fVar14 * fRam0000000146b47e3c;
        fVar31 = fVar18 * fVar32 - fVar26 * fVar33;
        fVar14 = fVar25 * fVar33 - fVar18 * fVar30;
        fVar34 = fVar26 * fVar30 - fVar25 * fVar32;
        fVar35 = fVar19 * fVar22 - fVar19 * fVar22;
        fVar31 = fVar31 + fVar31;
        fVar14 = fVar14 + fVar14;
        fVar34 = fVar34 + fVar34;
        fVar35 = fVar35 + fVar35;
        fVar23 = (fVar34 * fVar32 - fVar14 * fVar33) + fVar22 * fVar31 + fVar25 + pfVar5[4];
        fVar33 = (fVar31 * fVar33 - fVar34 * fVar30) + fVar22 * fVar14 + fVar26 + pfVar5[5];
        fVar30 = (fVar14 * fVar30 - fVar31 * fVar32) + fVar22 * fVar34 + fVar18 + pfVar5[6];
        fVar32 = (fVar35 * fVar22 - fVar35 * fVar22) + fVar22 * fVar35 + fVar19 + pfVar5[7];
      }
      else {
        fVar22 = *pfVar5;
        fVar23 = pfVar5[1];
        fVar31 = pfVar5[2];
        fVar14 = pfVar5[3];
        fVar18 = fVar23 + fVar23;
        fVar19 = fVar31 + fVar31;
        fVar28 = fVar22 * (fVar22 + fVar22);
        fVar26 = fVar14 * (fVar22 + fVar22);
        fVar34 = pfVar5[4];
        fVar35 = pfVar5[5];
        fVar25 = pfVar5[6];
        fVar45 = (fVar14 * fVar19 + fVar22 * fVar18) * fVar11;
        fVar46 = (fVar26 + fVar23 * fVar19) * fVar12;
        fVar47 = (fVar14 * fVar18 + fVar22 * fVar19) * fVar13;
        fVar36 = fVar12 * (fVar22 * fVar18 - fVar14 * fVar19);
        fVar38 = fVar13 * (fVar23 * fVar19 - fVar26);
        fVar40 = fVar11 * (fVar22 * fVar19 - fVar14 * fVar18);
        fVar26 = (float)((uint)((_DAT_146b47e10 - (fVar31 * fVar19 + fVar23 * fVar18)) * fVar11) &
                        _DAT_146b47e20);
        fVar19 = (float)((uint)((fRam0000000146b47e14 - (fVar31 * fVar19 + fVar28)) * fVar12) &
                        uRam0000000146b47e24);
        fVar20 = (float)((uint)((fRam0000000146b47e18 - (fVar23 * fVar18 + fVar28)) * fVar13) &
                        uRam0000000146b47e28);
        fVar21 = (float)((uint)((fRam0000000146b47e1c - (fVar28 + fVar28)) * fVar24) &
                        uRam0000000146b47e2c);
        fVar22 = *param_2;
        fVar23 = param_2[1];
        fVar31 = param_2[2];
        fVar14 = param_2[3];
        fVar28 = fVar23 + fVar23;
        fVar27 = fVar31 + fVar31;
        fVar29 = fVar22 * (fVar22 + fVar22);
        fVar18 = (fVar22 + fVar22) * fVar14;
        fVar42 = (fVar27 * fVar14 + fVar28 * fVar22) * param_2[8];
        fVar43 = (fVar18 + fVar27 * fVar23) * param_2[9];
        fVar44 = (fVar28 * fVar14 + fVar27 * fVar22) * param_2[10];
        fVar37 = param_2[9] * (fVar28 * fVar22 - fVar27 * fVar14);
        fVar39 = param_2[10] * (fVar27 * fVar23 - fVar18);
        fVar41 = param_2[8] * (fVar27 * fVar22 - fVar28 * fVar14);
        fVar14 = (float)((uint)((_DAT_146b47e10 - (fVar31 * fVar27 + fVar23 * fVar28)) * param_2[8])
                        & _DAT_146b47e20);
        fVar18 = (float)((uint)((fRam0000000146b47e14 - (fVar31 * fVar27 + fVar29)) * param_2[9]) &
                        uRam0000000146b47e24);
        fVar28 = (float)((uint)((fRam0000000146b47e18 - (fVar23 * fVar28 + fVar29)) * param_2[10]) &
                        uRam0000000146b47e28);
        fVar27 = (float)((uint)((fRam0000000146b47e1c - (fVar29 + fVar29)) * param_2[0xb]) &
                        uRam0000000146b47e2c);
        fVar22 = param_2[4];
        fVar23 = param_2[5];
        fVar31 = param_2[6];
        local_158 = fVar42 * fVar36 + fVar14 * fVar26 + fVar41 * fVar47 + fVar27 * fVar34;
        fStack_154 = fVar42 * fVar19 + fVar14 * fVar45 + fVar41 * fVar38 + fVar27 * fVar35;
        fStack_150 = fVar42 * fVar46 + fVar14 * fVar40 + fVar41 * fVar20 + fVar27 * fVar25;
        fStack_14c = fVar42 * fVar21 + fVar14 * fVar21 + fVar41 * fVar21 +
                     fVar27 * fRam0000000146b47e1c;
        local_148 = fVar18 * fVar36 + fVar37 * fVar26 + fVar43 * fVar47 + fVar27 * fVar34;
        fStack_144 = fVar18 * fVar19 + fVar37 * fVar45 + fVar43 * fVar38 + fVar27 * fVar35;
        fStack_140 = fVar18 * fVar46 + fVar37 * fVar40 + fVar43 * fVar20 + fVar27 * fVar25;
        fStack_13c = fVar18 * fVar21 + fVar37 * fVar21 + fVar43 * fVar21 +
                     fVar27 * fRam0000000146b47e1c;
        local_138 = fVar39 * fVar36 + fVar44 * fVar26 + fVar28 * fVar47 + fVar27 * fVar34;
        fStack_134 = fVar39 * fVar19 + fVar44 * fVar45 + fVar28 * fVar38 + fVar27 * fVar35;
        fStack_130 = fVar39 * fVar46 + fVar44 * fVar40 + fVar28 * fVar20 + fVar27 * fVar25;
        fStack_12c = fVar39 * fVar21 + fVar44 * fVar21 + fVar28 * fVar21 +
                     fVar27 * fRam0000000146b47e1c;
        local_128 = fVar23 * fVar36 + fVar22 * fVar26 + fVar31 * fVar47 +
                    fRam0000000146b47e1c * fVar34;
        fStack_124 = fVar23 * fVar19 + fVar22 * fVar45 + fVar31 * fVar38 +
                     fRam0000000146b47e1c * fVar35;
        fStack_120 = fVar23 * fVar46 + fVar22 * fVar40 + fVar31 * fVar20 +
                     fRam0000000146b47e1c * fVar25;
        fStack_11c = fVar23 * fVar21 + fVar22 * fVar21 + fVar31 * fVar21 +
                     fRam0000000146b47e1c * fRam0000000146b47e1c;
        FMatrix::RemoveScaling(&local_158);
        fVar30 = (float)(-(uint)(_DAT_146b47e70 <= fVar11 * auVar17._0_4_) &
                         (_DAT_146b47e60 ^ (uint)fVar30) ^ _DAT_146b47e60);
        fVar32 = (float)(-(uint)(fRam0000000146b47e74 <= fVar12 * auVar17._4_4_) &
                         (uRam0000000146b47e64 ^ (uint)fVar32) ^ uRam0000000146b47e64);
        fVar33 = (float)(-(uint)(fRam0000000146b47e78 <= fVar13 * auVar17._8_4_) &
                         (uRam0000000146b47e68 ^ (uint)fVar33) ^ uRam0000000146b47e68);
        local_158 = local_158 * fVar30;
        fStack_154 = fStack_154 * fVar30;
        fStack_150 = fStack_150 * fVar30;
        fStack_144 = fStack_144 * fVar32;
        fStack_140 = fStack_140 * fVar32;
        local_148 = local_148 * fVar32;
        fStack_134 = fStack_134 * fVar33;
        fStack_130 = fStack_130 * fVar33;
        local_138 = local_138 * fVar33;
        FQuat::FQuat(&local_188,&local_158);
        local_168[0] = CONCAT44(local_168[0]._4_4_,0x322bcc77);
        auVar15._0_4_ = local_188 * local_188 + fStack_180 * fStack_180;
        auVar15._4_4_ = fStack_184 * fStack_184 + fStack_17c * fStack_17c;
        auVar15._8_4_ = fStack_180 * fStack_180 + local_188 * local_188;
        auVar15._12_4_ = fStack_17c * fStack_17c + fStack_184 * fStack_184;
        fVar31 = auVar15._4_4_ + auVar15._0_4_;
        fVar14 = auVar15._8_4_ + auVar15._4_4_;
        fVar34 = auVar15._12_4_ + auVar15._8_4_;
        fVar35 = auVar15._0_4_ + auVar15._12_4_;
        auVar9._4_4_ = fVar14;
        auVar9._0_4_ = fVar31;
        auVar9._8_4_ = fVar34;
        auVar9._12_4_ = fVar35;
        auVar9 = rsqrtps(auVar15,auVar9);
        fVar30 = auVar9._0_4_;
        fVar33 = auVar9._4_4_;
        fVar22 = auVar9._8_4_;
        fVar23 = auVar9._12_4_;
        fVar30 = (_DAT_146b47e00 - fVar30 * fVar30 * fVar31 * _DAT_146b47e00) * fVar30 + fVar30;
        fVar33 = (fRam0000000146b47e04 - fVar33 * fVar33 * fVar14 * fRam0000000146b47e04) * fVar33 +
                 fVar33;
        fVar22 = (fRam0000000146b47e08 - fVar22 * fVar22 * fVar34 * fRam0000000146b47e08) * fVar22 +
                 fVar22;
        fVar23 = (fRam0000000146b47e0c - fVar23 * fVar23 * fVar35 * fRam0000000146b47e0c) * fVar23 +
                 fVar23;
        fVar32 = 0.0;
        fVar20 = (float)(((uint)(((_DAT_146b47e00 - fVar30 * fVar30 * fVar31 * _DAT_146b47e00) *
                                  fVar30 + fVar30) * local_188) ^ _DAT_146b47df0) &
                         -(uint)(1e-08 <= fVar31) ^ _DAT_146b47df0);
        fVar28 = (float)(((uint)(((fRam0000000146b47e04 -
                                  fVar33 * fVar33 * fVar14 * fRam0000000146b47e04) * fVar33 + fVar33
                                 ) * fStack_184) ^ uRam0000000146b47df4) & -(uint)(1e-08 <= fVar14)
                        ^ uRam0000000146b47df4);
        fVar21 = (float)(((uint)(((fRam0000000146b47e08 -
                                  fVar22 * fVar22 * fVar34 * fRam0000000146b47e08) * fVar22 + fVar22
                                 ) * fStack_180) ^ uRam0000000146b47df8) & -(uint)(1e-08 <= fVar34)
                        ^ uRam0000000146b47df8);
        fVar27 = (float)(((uint)(((fRam0000000146b47e0c -
                                  fVar23 * fVar23 * fVar35 * fRam0000000146b47e0c) * fVar23 + fVar23
                                 ) * fStack_17c) ^ uRam0000000146b47dfc) & -(uint)(1e-08 <= fVar35)
                        ^ uRam0000000146b47dfc);
        fVar23 = local_128;
        fVar33 = fStack_124;
        fVar30 = fStack_120;
      }
      param_2[8] = fVar11 * auVar17._0_4_;
      param_2[9] = fVar12 * auVar17._4_4_;
      param_2[10] = fVar13 * auVar17._8_4_;
      param_2[0xb] = fVar24 * auVar17._12_4_;
      *param_2 = fVar20;
      param_2[1] = fVar28;
      param_2[2] = fVar21;
      param_2[3] = fVar27;
      param_2[4] = fVar23;
      param_2[5] = fVar33;
      param_2[6] = fVar30;
      param_2[7] = fVar32;
    }
    if (((*(char *)(param_1 + 0x2c4) != '\0') &&
        (lVar6 = FWeakObjectPtr::Get(param_1 + 0x2d8), lVar6 != 0)) &&
       (local_178[0] = 0, *(longlong *)(lVar6 + 0x1b8) != 0)) {
      FUN_14309c040(lVar6,&local_158,param_3);
      fVar11 = (float)FUN_14309dd70(param_1);
      fVar11 = _guard_xfg_dispatch_icall_nop(fVar11,2.0);
      fVar11 = 1.0 - fVar11;
      if (1e-05 < fVar11) {
        if (fVar11 < 0.99999) {
          param_2[4] = (local_148 - param_2[4]) * fVar11 + param_2[4];
          param_2[5] = (fStack_144 - param_2[5]) * fVar11 + param_2[5];
          param_2[6] = (fStack_140 - param_2[6]) * fVar11 + param_2[6];
          param_2[7] = (fStack_13c - param_2[7]) * fVar11 + param_2[7];
          param_2[8] = (local_138 - param_2[8]) * fVar11 + param_2[8];
          param_2[9] = (fStack_134 - param_2[9]) * fVar11 + param_2[9];
          param_2[10] = (fStack_130 - param_2[10]) * fVar11 + param_2[10];
          param_2[0xb] = (fStack_12c - param_2[0xb]) * fVar11 + param_2[0xb];
          fVar12 = *param_2;
          fVar13 = param_2[1];
          fVar24 = param_2[2];
          fVar30 = param_2[3];
          fVar32 = local_158 * fVar12 + fStack_150 * fVar24;
          fVar33 = fStack_154 * fVar13 + fStack_14c * fVar30;
          fVar22 = fStack_150 * fVar24 + local_158 * fVar12;
          fVar23 = fStack_14c * fVar30 + fStack_154 * fVar13;
          fVar31 = (float)(-(uint)(0.0 <= fVar33 + fVar32) & ((uint)(0.0 - fVar12) ^ (uint)fVar12) ^
                          (uint)(0.0 - fVar12)) * (_DAT_146b47e10 - fVar11) + local_158 * fVar11;
          fVar14 = (float)(-(uint)(0.0 <= fVar22 + fVar33) & ((uint)(0.0 - fVar13) ^ (uint)fVar13) ^
                          (uint)(0.0 - fVar13)) * (fRam0000000146b47e14 - fVar11) +
                   fStack_154 * fVar11;
          fVar34 = (float)(-(uint)(0.0 <= fVar23 + fVar22) & ((uint)(0.0 - fVar24) ^ (uint)fVar24) ^
                          (uint)(0.0 - fVar24)) * (fRam0000000146b47e18 - fVar11) +
                   fStack_150 * fVar11;
          fVar23 = (float)(-(uint)(0.0 <= fVar32 + fVar23) & ((uint)(0.0 - fVar30) ^ (uint)fVar30) ^
                          (uint)(0.0 - fVar30)) * (fRam0000000146b47e1c - fVar11) +
                   fStack_14c * fVar11;
          auVar16._0_4_ = fVar31 * fVar31 + fVar34 * fVar34;
          auVar16._4_4_ = fVar14 * fVar14 + fVar23 * fVar23;
          auVar16._8_4_ = fVar34 * fVar34 + fVar31 * fVar31;
          auVar16._12_4_ = fVar23 * fVar23 + fVar14 * fVar14;
          fVar30 = auVar16._4_4_ + auVar16._0_4_;
          fVar32 = auVar16._8_4_ + auVar16._4_4_;
          fVar33 = auVar16._12_4_ + auVar16._8_4_;
          fVar22 = auVar16._0_4_ + auVar16._12_4_;
          auVar1._4_4_ = fVar32;
          auVar1._0_4_ = fVar30;
          auVar1._8_4_ = fVar33;
          auVar1._12_4_ = fVar22;
          auVar17 = rsqrtps(auVar16,auVar1);
          fVar11 = auVar17._0_4_;
          fVar12 = auVar17._4_4_;
          fVar13 = auVar17._8_4_;
          fVar24 = auVar17._12_4_;
          fVar11 = (_DAT_146b47e00 - fVar11 * fVar11 * fVar30 * _DAT_146b47e00) * fVar11 + fVar11;
          fVar12 = (fRam0000000146b47e04 - fVar12 * fVar12 * fVar32 * fRam0000000146b47e04) * fVar12
                   + fVar12;
          fVar13 = (fRam0000000146b47e08 - fVar13 * fVar13 * fVar33 * fRam0000000146b47e08) * fVar13
                   + fVar13;
          fVar24 = (fRam0000000146b47e0c - fVar24 * fVar24 * fVar22 * fRam0000000146b47e0c) * fVar24
                   + fVar24;
          fVar12 = (float)(((uint)(((fRam0000000146b47e04 -
                                    fVar12 * fVar12 * fVar32 * fRam0000000146b47e04) * fVar12 +
                                   fVar12) * fVar14) ^ uRam0000000146b47df4) &
                           -(uint)(fRam0000000146b47ed4 <= fVar32) ^ uRam0000000146b47df4);
          fVar13 = (float)(((uint)(((fRam0000000146b47e08 -
                                    fVar13 * fVar13 * fVar33 * fRam0000000146b47e08) * fVar13 +
                                   fVar13) * fVar34) ^ uRam0000000146b47df8) &
                           -(uint)(fRam0000000146b47ed8 <= fVar33) ^ uRam0000000146b47df8);
          fVar24 = (float)(((uint)(((fRam0000000146b47e0c -
                                    fVar24 * fVar24 * fVar22 * fRam0000000146b47e0c) * fVar24 +
                                   fVar24) * fVar23) ^ uRam0000000146b47dfc) &
                           -(uint)(fRam0000000146b47edc <= fVar22) ^ uRam0000000146b47dfc);
          *param_2 = (float)(((uint)(((_DAT_146b47e00 - fVar11 * fVar11 * fVar30 * _DAT_146b47e00) *
                                      fVar11 + fVar11) * fVar31) ^ _DAT_146b47df0) &
                             -(uint)(_DAT_146b47ed0 <= fVar30) ^ _DAT_146b47df0);
          param_2[1] = fVar12;
          param_2[2] = fVar13;
          param_2[3] = fVar24;
        }
        else {
          *(ulonglong *)param_2 = CONCAT44(fStack_154,local_158);
          *(ulonglong *)(param_2 + 2) = CONCAT44(fStack_14c,fStack_150);
          *(ulonglong *)(param_2 + 8) = CONCAT44(fStack_134,local_138);
          *(ulonglong *)(param_2 + 10) = CONCAT44(fStack_12c,fStack_130);
          param_2[4] = local_148;
          param_2[5] = fStack_144;
          param_2[6] = fStack_140;
          param_2[7] = fStack_13c;
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 14309cbc0 FUN_14309cbc0 body=96 status=ok
// SIG undefined FUN_14309cbc0(void)

undefined8 FUN_14309cbc0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (param_1 != 0) {
    lVar2 = FUN_14307cf20();
    if (lVar2 != 0) {
      lVar3 = FUN_1430bdfe0();
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
        uVar4 = FUN_143077650(lVar2);
        return uVar4;
      }
    }
  }
  return 0;
}



// FUNCTION 14309cc20 FUN_14309cc20 body=118 status=ok
// SIG undefined FUN_14309cc20(void)

undefined8 FUN_14309cc20(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x150) != 0)) {
    lVar3 = FUN_14307cf20();
    if (lVar3 != 0) {
      lVar4 = FUN_1430bdfe0();
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
        cVar2 = FUN_14307eb10(lVar3);
        if (cVar2 != '\0') {
          uVar5 = FUN_143078d50(lVar3);
          return uVar5;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14309cca0 FUN_14309cca0 body=1635 status=ok
// SIG undefined FUN_14309cca0(void)

void FUN_14309cca0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [16];
  short local_28 [2];
  undefined8 local_24;
  
  FUN_14233e8d0();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146b48060) && (_Init_thread_header(&DAT_146b48060), DAT_146b48060 == -1)) {
    uVar1 = FUN_1430bf3b0();
    FUN_1430bf3b0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"HeatCoolDownRate",1);
    DAT_146b48058 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b48060);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b48058 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b48058 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b48058 + 0x30));
  }
  if ((*piVar5 < DAT_146b48070) && (_Init_thread_header(&DAT_146b48070), DAT_146b48070 == -1)) {
    uVar1 = FUN_1430bf3b0();
    FUN_1430bf3b0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"HeatCoolDownDelay",1);
    DAT_146b48068 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b48070);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b48068 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b48068 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b48068 + 0x30));
  }
  if ((*piVar5 < DAT_146b48080) && (_Init_thread_header(&DAT_146b48080), DAT_146b48080 == -1)) {
    uVar1 = FUN_1430bf3b0();
    FUN_1430bf3b0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"UseHeatImpulse",1);
    DAT_146b48078 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b48080);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b48078 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b48078 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b48078 + 0x30));
  }
  if ((*piVar5 < DAT_146b48090) && (_Init_thread_header(&DAT_146b48090), DAT_146b48090 == -1)) {
    uVar1 = FUN_1430bf3b0();
    FUN_1430bf3b0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"OverheatTime",1);
    DAT_146b48088 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b48090);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b48088 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b48088 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b48088 + 0x30));
  }
  if ((*piVar5 < DAT_146b480a0) && (_Init_thread_header(&DAT_146b480a0), DAT_146b480a0 == -1)) {
    uVar1 = FUN_1430bf3b0();
    FUN_1430bf3b0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"OverheatCoolDownDelay",1);
    DAT_146b48098 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b480a0);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b48098 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b48098 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b48098 + 0x30));
  }
  if ((*piVar5 < DAT_146b480b0) && (_Init_thread_header(&DAT_146b480b0), DAT_146b480b0 == -1)) {
    uVar1 = FUN_1430bf3b0();
    FUN_1430bf3b0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bCanUseWhenOverheated",1);
    DAT_146b480a8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b480b0);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b480a8 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b480a8 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b480a8 + 0x30));
  }
  if ((*piVar5 < DAT_146b480c0) && (_Init_thread_header(&DAT_146b480c0), DAT_146b480c0 == -1)) {
    uVar1 = FUN_1430bf3b0();
    FUN_1430bf3b0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bSimulateOnClients",1);
    DAT_146b480b8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b480c0);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b480b8 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b480b8 + 0x40) + (short)iVar3;
      local_24 = 3;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b480b8 + 0x30));
  }
  if ((*piVar5 < DAT_146b480d0) && (_Init_thread_header(&DAT_146b480d0), DAT_146b480d0 == -1)) {
    uVar1 = FUN_1430bf3b0();
    FUN_1430bf3b0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ReplicatedHeat",1);
    DAT_146b480c8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b480d0);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b480c8 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b480c8 + 0x40) + (short)iVar3;
      local_24 = 3;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b480c8 + 0x30));
  }
  if ((*piVar5 < DAT_146b480e0) && (_Init_thread_header(&DAT_146b480e0), DAT_146b480e0 == -1)) {
    uVar1 = FUN_1430bf3b0();
    FUN_1430bf3b0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bOverheated",1);
    DAT_146b480d8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b480e0);
  }
  if (0 < *(int *)(DAT_146b480d8 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b480d8 + 0x40) + (short)iVar4;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146b480d8 + 0x30));
  }
  return;
}



// FUNCTION 14309d310 FUN_14309d310 body=609 status=ok
// SIG undefined FUN_14309d310(void)

void FUN_14309d310(undefined8 param_1,undefined8 param_2)

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
  if ((*piVar5 < DAT_146b48100) && (_Init_thread_header(&DAT_146b48100), DAT_146b48100 == -1)) {
    uVar1 = UMovieSceneActorReferenceSection::GetPrivateStaticClass();
    UMovieSceneActorReferenceSection::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"PatternWidthScale",1);
    DAT_146b480f8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b48100);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b480f8 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b480f8 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b480f8 + 0x30));
  }
  if ((*piVar5 < DAT_146b48110) && (_Init_thread_header(&DAT_146b48110), DAT_146b48110 == -1)) {
    uVar1 = UMovieSceneActorReferenceSection::GetPrivateStaticClass();
    UMovieSceneActorReferenceSection::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"PatternHeightScale",1);
    DAT_146b48108 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b48110);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b48108 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b48108 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b48108 + 0x30));
  }
  if ((*piVar5 < DAT_146b48120) && (_Init_thread_header(&DAT_146b48120), DAT_146b48120 == -1)) {
    uVar1 = UMovieSceneActorReferenceSection::GetPrivateStaticClass();
    UMovieSceneActorReferenceSection::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"PatternZoomScale",1);
    DAT_146b48118 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b48120);
  }
  if (0 < *(int *)(DAT_146b48118 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b48118 + 0x40) + (short)iVar4;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146b48118 + 0x30));
  }
  return;
}



// FUNCTION 14309d580 FUN_14309d580 body=232 status=ok
// SIG undefined FUN_14309d580(void)

void FUN_14309d580(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 local_res18 [16];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_14233e8d0();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b48130) && (_Init_thread_header(&DAT_146b48130), DAT_146b48130 == -1))
  {
    uVar1 = UAnimMontage::GetPrivateStaticClass();
    UAnimMontage::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ReloadTime",1);
    DAT_146b48128 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b48130);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146b48128 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b48128 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b48128 + 0x30));
  }
  return;
}



// FUNCTION 14309d670 FUN_14309d670 body=609 status=ok
// SIG undefined FUN_14309d670(void)

void FUN_14309d670(undefined8 param_1,undefined8 param_2)

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
  if ((*piVar5 < DAT_146b48130) && (_Init_thread_header(&DAT_146b48130), DAT_146b48130 == -1)) {
    uVar1 = UAnimMontage::GetPrivateStaticClass();
    UAnimMontage::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ReloadTime",1);
    DAT_146b48128 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b48130);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b48128 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b48128 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b48128 + 0x30));
  }
  if ((*piVar5 < DAT_146b48140) && (_Init_thread_header(&DAT_146b48140), DAT_146b48140 == -1)) {
    uVar1 = UCurveLinearColor::GetPrivateStaticClass();
    UCurveLinearColor::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"SingleFeedIncrement",1);
    DAT_146b48138 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b48140);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b48138 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b48138 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b48138 + 0x30));
  }
  if ((*piVar5 < DAT_146b48150) && (_Init_thread_header(&DAT_146b48150), DAT_146b48150 == -1)) {
    uVar1 = UCurveLinearColor::GetPrivateStaticClass();
    UCurveLinearColor::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ClientReloadState",1);
    DAT_146b48148 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b48150);
  }
  if (0 < *(int *)(DAT_146b48148 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b48148 + 0x40) + (short)iVar4;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146b48148 + 0x30));
  }
  return;
}



// FUNCTION 14309d8e0 FUN_14309d8e0 body=236 status=ok
// SIG undefined FUN_14309d8e0(void)

void FUN_14309d8e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 local_res18 [16];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_14233e8d0();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b48238) && (_Init_thread_header(&DAT_146b48238), DAT_146b48238 == -1))
  {
    uVar1 = UCurveLinearColor::GetPrivateStaticClass();
    UCurveLinearColor::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ServerAmmoCount",1);
    DAT_146b48230 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b48238);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146b48230 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b48230 + 0x40) + (short)iVar3;
      local_14 = 3;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b48230 + 0x30));
  }
  return;
}



// FUNCTION 14309d9d0 FUN_14309d9d0 body=593 status=ok
// SIG undefined FUN_14309d9d0(void)

void FUN_14309d9d0(undefined8 param_1,undefined8 param_2)

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
  if ((*piVar5 < DAT_146b48248) && (_Init_thread_header(&DAT_146b48248), DAT_146b48248 == -1)) {
    uVar1 = FUN_1430c20f0();
    FUN_1430c20f0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ReplicatedZoomState",1);
    DAT_146b48240 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b48248);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b48240 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b48240 + 0x40) + (short)iVar3;
      local_14 = 3;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b48240 + 0x30));
  }
  if ((*piVar5 < DAT_146b48258) && (_Init_thread_header(&DAT_146b48258), DAT_146b48258 == -1)) {
    uVar1 = FUN_1430c20f0();
    FUN_1430c20f0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"FOVScale",1);
    DAT_146b48250 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b48258);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b48250 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b48250 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b48250 + 0x30));
  }
  if ((*piVar5 < DAT_146b48268) && (_Init_thread_header(&DAT_146b48268), DAT_146b48268 == -1)) {
    uVar1 = FUN_1430c20f0();
    FUN_1430c20f0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"DurationScale",1);
    DAT_146b48260 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b48268);
  }
  if (0 < *(int *)(DAT_146b48260 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b48260 + 0x40) + (short)iVar4;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146b48260 + 0x30));
  }
  return;
}



// FUNCTION 14309dc30 FUN_14309dc30 body=51 status=ok
// SIG undefined FUN_14309dc30(void)

undefined8 FUN_14309dc30(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    plVar1 = (longlong *)(**(code **)(*(longlong *)(param_1 + 0x460) + 0x10))();
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014309dc55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar1 + 0x420))(plVar1);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 14309dc70 FUN_14309dc70 body=44 status=ok
// SIG undefined FUN_14309dc70(void)

undefined8 FUN_14309dc70(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    lVar1 = FUN_14307d8d0();
    if (lVar1 != 0) {
      uVar2 = FUN_14309dca0(lVar1);
      return uVar2;
    }
  }
  return 0x3f800000;
}



// FUNCTION 14309dca0 FUN_14309dca0 body=112 status=ok
// SIG undefined FUN_14309dca0(void)

float FUN_14309dca0(longlong param_1)

{
  int iVar1;
  float fVar2;
  
  iVar1 = *(int *)(param_1 + 400);
  if (iVar1 < 1) {
    fVar2 = 1.0;
  }
  else {
    if ((int)(iVar1 - 1U & 0xff) < iVar1) {
      fVar2 = *(float *)(*(longlong *)(param_1 + 0x188) + 4 + (ulonglong)(iVar1 - 1U & 0xff) * 0x10)
              * *(float *)(param_1 + 0x1e0);
    }
    else {
      fVar2 = 1.0;
    }
    if ((*(char *)(param_1 + 0x290) != '\0') && (*(byte *)(param_1 + 0x2c0) != 0)) {
      return fVar2 * (float)*(byte *)(param_1 + 0x2c0) * *(float *)(param_1 + 0x1b0);
    }
  }
  return fVar2;
}



// FUNCTION 14309dd10 FUN_14309dd10 body=85 status=ok
// SIG undefined FUN_14309dd10(void)

float FUN_14309dd10(longlong param_1,byte param_2)

{
  float fVar1;
  
  if (*(int *)(param_1 + 400) < 1) {
    fVar1 = 1.0;
  }
  else {
    fVar1 = *(float *)(*(longlong *)(param_1 + 0x188) + -0xc +
                      (longlong)*(int *)(param_1 + 400) * 0x10) * *(float *)(param_1 + 0x1e0);
  }
  if ((*(char *)(param_1 + 0x290) != '\0') && (param_2 != 0)) {
    fVar1 = fVar1 * (float)param_2 * *(float *)(param_1 + 0x1b0);
  }
  return fVar1;
}



// FUNCTION 14309dd70 FUN_14309dd70 body=87 status=ok
// SIG undefined FUN_14309dd70(void)

float FUN_14309dd70(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  
  if (*(char *)(param_1 + 0x2c4) != '\0') {
    lVar1 = *(longlong *)(param_1 + 0x120);
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0();
    }
    fVar2 = (*(float *)(lVar1 + 0x790) - *(float *)(param_1 + 0x2cc)) / *(float *)(param_1 + 0x2c8);
    if (1.0 <= fVar2) {
      fVar2 = 1.0;
    }
    return fVar2;
  }
  return 1.0;
}



// FUNCTION 14309ddd0 FUN_14309ddd0 body=176 status=ok
// SIG undefined FUN_14309ddd0(void)

longlong FUN_14309ddd0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x188);
  if (lVar3 == 0) {
    plVar4 = (longlong *)0x0;
    if (*(longlong *)(param_1 + 0x118) != 0) {
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x118) + 0x150);
    }
    if (plVar4 == (longlong *)0x0) {
      lVar3 = 0;
    }
    else {
      plVar1 = (longlong *)(**(code **)(*plVar4 + 0x668))(plVar4);
      if (plVar1 != (longlong *)0x0) {
        uVar2 = UAnimMontage::GetPrivateStaticClass();
        uVar2 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
        *(undefined8 *)(param_1 + 0x188) = uVar2;
      }
      lVar3 = *(longlong *)(param_1 + 0x188);
      if (lVar3 == 0) {
        uVar2 = UAnimMontage::GetPrivateStaticClass();
        lVar3 = (**(code **)(*plVar4 + 0x628))(plVar4,uVar2);
        *(longlong *)(param_1 + 0x188) = lVar3;
        return lVar3;
      }
    }
  }
  return lVar3;
}



// FUNCTION 14309de80 FUN_14309de80 body=60 status=ok
// SIG undefined FUN_14309de80(void)

float FUN_14309de80(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x1a0);
  if (lVar1 != 0) {
    return *(float *)(lVar1 + 0xd0) * *(float *)(param_1 + 0x1ac) +
           *(float *)(lVar1 + 0xcc) * *(float *)(param_1 + 0x1b8);
  }
  return 0.0;
}



// FUNCTION 14309dec0 FUN_14309dec0 body=33 status=ok
// SIG undefined FUN_14309dec0(void)

float FUN_14309dec0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    return *(float *)(*(longlong *)(param_1 + 0x1a0) + 0xcc) * *(float *)(param_1 + 0x1b8);
  }
  return 0.0;
}



// FUNCTION 14309def0 FUN_14309def0 body=33 status=ok
// SIG undefined FUN_14309def0(void)

float FUN_14309def0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    return *(float *)(*(longlong *)(param_1 + 0x1a0) + 0xd0) * *(float *)(param_1 + 0x1ac);
  }
  return 0.0;
}



// FUNCTION 14309df20 FUN_14309df20 body=385 status=ok
// SIG undefined FUN_14309df20(void)

undefined8 FUN_14309df20(longlong param_1)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  
  fVar11 = 1.0;
  fVar9 = 1.0;
  uVar10 = 0;
  if (((*(longlong *)(param_1 + 0x118) == 0) ||
      (lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x118) + 0x150), lVar5 == 0)) ||
     (lVar5 = *(longlong *)(lVar5 + 0x490), lVar5 == 0)) {
LAB_14309dfae:
    lVar5 = 0;
  }
  else {
    lVar4 = FUN_1429e18b0();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_14309dfae;
    lVar5 = *(longlong *)(lVar5 + 0x528);
  }
  if (*(char *)(param_1 + 0x1cc) != '\0') {
    uVar8 = 0x426c0000;
    if (lVar5 != 0) {
      uVar8 = FUN_1426e22c0(lVar5);
    }
    uVar10 = (undefined4)((ulonglong)uVar8 >> 0x20);
    fVar9 = (float)uVar8 * 0.5;
  }
  lVar4 = *(longlong *)(param_1 + 400);
  if (lVar4 == 0) {
    lVar4 = *(longlong *)(param_1 + 0x118);
    *(longlong *)(param_1 + 400) = lVar4;
    if (lVar4 == 0) goto LAB_14309e081;
  }
  fVar6 = (float)FUN_14307dab0(lVar4);
  if (0.0 < fVar6) {
    fVar1 = *(float *)(param_1 + 0x1c4);
    fVar7 = (float)FUN_14307daf0(lVar4);
    if (lVar5 != 0) {
      fVar2 = *(float *)(lVar5 + 0x470);
      fVar11 = _guard_xfg_dispatch_icall_nop(fVar2 * fVar7 * 0.008726646);
      fVar7 = _guard_xfg_dispatch_icall_nop(fVar2 * 0.008726646);
      fVar11 = fVar11 / fVar7;
    }
    fVar9 = fVar9 * ((fVar1 - 1.0) * fVar6 + 1.0) * fVar11;
  }
LAB_14309e081:
  return CONCAT44(uVar10,fVar9);
}



// FUNCTION 14309e0b0 FUN_14309e0b0 body=192 status=ok
// SIG undefined FUN_14309e0b0(void)

undefined8 FUN_14309e0b0(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 extraout_XMM0_Qb;
  
  lVar3 = param_1[0x3a];
  if (lVar3 == 0) {
    lVar3 = param_1[0x23];
    param_1[0x3a] = lVar3;
    uVar4 = 0;
    if (lVar3 == 0) goto LAB_14309e12e;
  }
  plVar2 = (longlong *)
           (**(code **)(*(longlong *)(lVar3 + 0x460) + 0x10))
                     ((longlong *)(lVar3 + 0x460),*(undefined1 *)(lVar3 + 0x690));
  uVar4 = 0;
  if (plVar2 != (longlong *)0x0) {
    iVar1 = (**(code **)(*plVar2 + 0x418))(plVar2);
    fVar5 = (float)(iVar1 / *(int *)((longlong)param_1 + 0x1dc));
    uVar4 = ~((int)ROUND(-0.5 - (fVar5 + fVar5)) >> 1);
  }
LAB_14309e12e:
  fVar5 = (float)(**(code **)(*param_1 + 0x428))(param_1);
  auVar6._0_8_ = (**(code **)(*param_1 + 0x428))(param_1);
  auVar6._8_8_ = extraout_XMM0_Qb;
  auVar7._4_12_ = auVar6._4_12_;
  auVar7._0_4_ = (float)auVar6._0_8_ + fVar5 * (float)(int)uVar4 * 0.2;
  return auVar7._0_8_;
}



// FUNCTION 14309e170 FUN_14309e170 body=103 status=ok
// SIG undefined FUN_14309e170(void)

undefined8 * FUN_14309e170(undefined8 param_1,undefined8 *param_2)

{
  LowLevelFatalErrorHandler
            ("d:\\oak\\main\\engine\\source\\runtime\\gearbox\\gbxweapon\\public\\WeaponSkeletalControlBase.h"
             ,0x38,L"Pure virtual not implemented (%s)",L"UWeaponSkeletalControlBase::GetRootBone");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "d:\\oak\\main\\engine\\source\\runtime\\gearbox\\gbxweapon\\public\\WeaponSkeletalControlBase.h"
             ,0x38,L"Pure virtual not implemented (%s)",L"UWeaponSkeletalControlBase::GetRootBone");
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14309e1e0 FUN_14309e1e0 body=338 status=ok
// SIG undefined FUN_14309e1e0(void)

undefined4 *
FUN_14309e1e0(undefined8 *param_1,undefined4 *param_2,undefined8 param_3,longlong param_4,
             longlong *param_5)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 local_res10 [16];
  longlong local_res20;
  undefined1 local_c8 [4];
  undefined4 local_c4;
  undefined4 local_c0;
  undefined1 local_bc [4];
  undefined1 local_b8 [4];
  undefined1 local_b4 [4];
  undefined1 local_b0 [152];
  
  local_res20 = param_4;
  FUN_14217c560(param_2);
  if ((param_4 != 0) && (param_5 != (longlong *)0x0)) {
    local_res10[0] = (**(code **)(*param_5 + 0x858))();
    uVar5 = *param_1;
    FUN_14217c560(&local_c0);
    cVar1 = FUN_14218fd10(uVar5,param_3);
    if (cVar1 != '\0') {
      cVar1 = FUN_14218fd60(uVar5);
      if (cVar1 == '\0') {
        lVar3 = FUN_142191860();
      }
      else {
        uVar2 = FUN_143097aa0(&local_res20,&param_5,local_res10);
        FUN_14217c550(local_c8,uVar2);
        uVar4 = icu_53::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::operator=(local_bc,local_c8);
        lVar3 = FUN_14218b3a0(uVar5,uVar4);
        if (lVar3 == 0) {
          uVar4 = icu_53::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::operator=
                            (local_b8,local_c8);
          uVar4 = FUN_1430966d0(local_b0,uVar4,&local_res20,&param_5,local_res10);
          lVar3 = FUN_1421912a0(uVar5,uVar4);
        }
      }
      uVar5 = icu_53::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::operator=(local_b4,lVar3);
      icu_53::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::operator=(&local_c4,uVar5);
      local_c0 = local_c4;
    }
    *param_2 = local_c0;
  }
  return param_2;
}



// FUNCTION 14309e340 FUN_14309e340 body=331 status=ok
// SIG undefined FUN_14309e340(void)

undefined4 *
FUN_14309e340(undefined8 *param_1,undefined4 *param_2,undefined8 param_3,longlong param_4,
             longlong param_5)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 local_res10 [16];
  longlong local_res20;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined1 local_bc [4];
  undefined1 local_b8 [4];
  undefined1 local_b4 [4];
  undefined1 local_b0 [152];
  
  local_res20 = param_4;
  FUN_14217c560(param_2);
  if ((param_4 != 0) && (param_5 != 0)) {
    uVar5 = *param_1;
    local_c8 = 0;
    FUN_14217c560(&local_c0);
    cVar1 = FUN_14218fd10(uVar5,param_3);
    if (cVar1 != '\0') {
      cVar1 = FUN_14218fd60(uVar5);
      if (cVar1 == '\0') {
        lVar3 = FUN_142191860();
      }
      else {
        uVar2 = FUN_143097be0(&local_res20,&param_5,&local_c8);
        FUN_14217c550(local_res10,uVar2);
        uVar4 = icu_53::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::operator=
                          (local_bc,local_res10);
        lVar3 = FUN_14218b3a0(uVar5,uVar4);
        if (lVar3 == 0) {
          uVar4 = icu_53::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::operator=
                            (local_b8,local_res10);
          uVar4 = FUN_143096870(local_b0,uVar4,&local_res20,&param_5,&local_c8);
          lVar3 = FUN_1421912a0(uVar5,uVar4);
        }
      }
      uVar5 = icu_53::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::operator=(local_b4,lVar3);
      icu_53::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::operator=(&local_c4,uVar5);
      local_c0 = local_c4;
    }
    *param_2 = local_c0;
  }
  return param_2;
}



// FUNCTION 14309e490 FUN_14309e490 body=344 status=ok
// SIG undefined FUN_14309e490(void)

ulonglong FUN_14309e490(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  bool bVar1;
  ulonglong in_RAX;
  longlong lVar2;
  longlong lVar3;
  uint7 uVar5;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0x88) == 3) {
    lVar2 = FUN_1407ba8d0(param_1,0);
    in_RAX = 0;
    if (lVar2 != 0) {
      lVar3 = FUN_1429e18b0();
      uVar5 = (uint7)((ulonglong)(lVar3 + 0x88) >> 8);
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        in_RAX = (ulonglong)uVar5 << 8;
      }
      else {
        in_RAX = CONCAT71(uVar5,1);
      }
      if (((char)in_RAX != '\0') && (*(char *)(lVar2 + 0x128) == '\x03')) {
        lVar3 = FUN_1407ba8d0(param_1,1);
        if (lVar3 != 0) {
          lVar4 = FUN_1430b3b80();
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
            *param_2 = lVar2;
            *param_4 = lVar3;
            lVar2 = *(longlong *)(lVar3 + 0x10);
            *param_3 = lVar2;
            return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
          }
        }
        lVar3 = FUN_1407ba8d0(param_1,1);
        in_RAX = 0;
        if (lVar3 != 0) {
          lVar4 = FUN_14171bfe0();
          uVar5 = (uint7)((ulonglong)(lVar4 + 0x88) >> 8);
          if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
            in_RAX = (ulonglong)uVar5 << 8;
          }
          else {
            in_RAX = CONCAT71(uVar5,1);
          }
          if ((char)in_RAX != '\0') {
            *param_2 = lVar2;
            *param_4 = 0;
            *param_3 = lVar3;
            return CONCAT71((int7)(in_RAX >> 8),1);
          }
        }
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14309e620 FUN_14309e620 body=24 status=ok
// SIG undefined FUN_14309e620(void)

undefined1 FUN_14309e620(longlong param_1)

{
  if ((*(char *)(param_1 + 0x291) == '\0') && (*(char *)(param_1 + 0x2c4) == '\0')) {
    return 0;
  }
  return 1;
}



// FUNCTION 14309e640 FUN_14309e640 body=159 status=ok
// SIG undefined FUN_14309e640(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14309e640(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 local_38 [48];
  
  uVar4 = uRam0000000146b47e1c;
  uVar10 = uRam0000000146b47e18;
  uVar9 = uRam0000000146b47e14;
  uVar8 = _DAT_146b47e10;
  param_2[2] = 0;
  param_2[3] = 0;
  uVar8 = uVar8 & _DAT_146b47e20;
  uVar9 = uVar9 & uRam0000000146b47e24;
  uVar10 = uVar10 & uRam0000000146b47e28;
  uVar11 = uVar4 & uRam0000000146b47e2c;
  plVar7 = *(longlong **)(param_1 + 0x2e0);
  *(undefined4 *)param_2 = 0;
  *(undefined4 *)((longlong)param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  *(uint *)((longlong)param_2 + 0xc) = uVar4;
  *(uint *)(param_2 + 4) = uVar8;
  *(uint *)((longlong)param_2 + 0x24) = uVar9;
  *(uint *)(param_2 + 5) = uVar10;
  *(uint *)((longlong)param_2 + 0x2c) = uVar11;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = *(longlong **)(param_1 + 0x118);
    *(longlong **)(param_1 + 0x2e0) = plVar7;
    if (plVar7 == (longlong *)0x0) {
      return param_2;
    }
  }
  lVar5 = (**(code **)(*plVar7 + 0x900))(0,1,0);
  if (lVar5 != 0) {
    puVar6 = (undefined8 *)FUN_14309c040(param_1,local_38,lVar5);
    uVar1 = puVar6[1];
    uVar2 = puVar6[2];
    uVar3 = puVar6[3];
    *param_2 = *puVar6;
    param_2[1] = uVar1;
    uVar1 = puVar6[5];
    param_2[4] = puVar6[4];
    param_2[5] = uVar1;
    param_2[2] = uVar2;
    param_2[3] = uVar3;
  }
  return param_2;
}



// FUNCTION 14309e6e0 FUN_14309e6e0 body=407 status=ok
// SIG undefined FUN_14309e6e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_14309e6e0(undefined8 *param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [12];
  undefined8 uVar4;
  bool bVar5;
  longlong lVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  uVar8 = uRam0000000146b47e1c;
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(uint *)((longlong)param_1 + 0xc) = uVar8;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar8 = uRam0000000146b47e14 & uRam0000000146b47e24;
  uVar9 = uRam0000000146b47e18 & uRam0000000146b47e28;
  uVar10 = uRam0000000146b47e1c & uRam0000000146b47e2c;
  *(uint *)(param_1 + 4) = _DAT_146b47e10 & _DAT_146b47e20;
  *(uint *)((longlong)param_1 + 0x24) = uVar8;
  *(uint *)(param_1 + 5) = uVar9;
  *(uint *)((longlong)param_1 + 0x2c) = uVar10;
  if (param_2 != 0) {
    lVar6 = FUN_142a0cc80();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
         ) != lVar6 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      lVar6 = FUN_1423b0a60(param_2,*param_3);
      if (lVar6 != 0) {
        puVar7 = (undefined8 *)USkeletalMeshSocket::GetSocketLocalTransform(lVar6,local_68);
        uVar4 = puVar7[1];
        *param_1 = *puVar7;
        param_1[1] = uVar4;
        uVar4 = puVar7[3];
        param_1[2] = puVar7[2];
        param_1[3] = uVar4;
        uVar4 = puVar7[5];
        param_1[4] = puVar7[4];
        param_1[5] = uVar4;
        if (param_4 != (undefined8 *)0x0) {
          *param_4 = *(undefined8 *)(lVar6 + 0x30);
        }
      }
    }
    else {
      lVar6 = FUN_142a232e0();
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if ((bVar5) && (lVar6 = FUN_1423d4560(param_2,*param_3), lVar6 != 0)) {
        FRotator::Quaternion(lVar6 + 0x3c,&local_78);
        auVar3 = *(undefined1 (*) [12])(lVar6 + 0x30);
        auVar1._12_4_ = 0;
        auVar1._0_12_ = *(undefined1 (*) [12])(lVar6 + 0x48);
        *(undefined1 (*) [16])(param_1 + 4) = auVar1;
        *param_1 = local_78;
        param_1[1] = uStack_70;
        auVar2._12_4_ = 0;
        auVar2._0_12_ = auVar3;
        *(undefined1 (*) [16])(param_1 + 2) = auVar2;
      }
    }
  }
  return param_1;
}



// FUNCTION 14309e880 FUN_14309e880 body=301 status=ok
// SIG undefined FUN_14309e880(void)

undefined4 * FUN_14309e880(undefined8 param_1,undefined4 *param_2,longlong param_3)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = UParticleModuleTypeDataGpu::GetPrivateStaticClass();
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
      *param_2 = *(undefined4 *)(param_3 + 0x1a8);
      *(undefined1 *)(param_2 + 2) = 0;
      return param_2;
    }
    lVar2 = UInputKeySelector::GetPrivateStaticClass();
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
      *(undefined1 *)(param_2 + 2) = 0xff;
      *param_2 = *(undefined4 *)(param_3 + 0x4e8);
      *(undefined1 *)(param_2 + 2) = 0;
      return param_2;
    }
    lVar2 = UScrollBar::GetPrivateStaticClass();
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
      *param_2 = *(undefined4 *)(param_3 + 0x1c0);
      *(undefined1 *)(param_2 + 2) = 0;
      return param_2;
    }
  }
  *param_2 = 0;
  *(undefined1 *)(param_2 + 2) = 0;
  return param_2;
}



// FUNCTION 14309e9b0 FUN_14309e9b0 body=353 status=ok
// SIG undefined FUN_14309e9b0(void)

float * FUN_14309e9b0(longlong param_1,float *param_2,longlong *param_3)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  float fVar5;
  
  if (param_3 != (longlong *)0x0) {
    lVar2 = FUN_1430c20f0();
    if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    plVar4 = param_3;
    if (bVar1) goto LAB_14309ea70;
  }
  plVar4 = (longlong *)0x0;
  if (param_3 != (longlong *)0x0) {
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
      uVar3 = FUN_1430c20f0();
      plVar4 = (longlong *)(**(code **)(*param_3 + 0x7f8))(param_3,uVar3,(char)param_3[0xd2]);
    }
  }
LAB_14309ea70:
  fVar5 = 1.0;
  if (plVar4 != (longlong *)0x0) {
    if ((*(byte *)(param_1 + 0x28) & 2) == 0) {
      fVar5 = (float)FUN_14309dca0(plVar4);
    }
    else {
      if ((int)plVar4[0x32] < 1) {
        fVar5 = 1.0;
      }
      else {
        fVar5 = *(float *)(plVar4[0x31] + -0xc + (longlong)(int)plVar4[0x32] * 0x10) *
                *(float *)(plVar4 + 0x3c);
      }
      if ((char)plVar4[0x52] != '\0') {
        fVar5 = fVar5 * *(float *)(plVar4 + 0x36);
      }
    }
  }
  if (((*(byte *)(param_1 + 0x28) & 1) != 0) && (1e-08 < ABS(fVar5))) {
    fVar5 = 1.0 / fVar5;
  }
  *param_2 = fVar5;
  *(undefined1 *)(param_2 + 2) = 0;
  return param_2;
}



// FUNCTION 14309eb20 FUN_14309eb20 body=258 status=ok
// SIG undefined FUN_14309eb20(void)

float * FUN_14309eb20(undefined8 param_1,float *param_2,longlong *param_3)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  
  if (param_3 != (longlong *)0x0) {
    lVar2 = UMovieSceneActorReferenceSection::GetPrivateStaticClass();
    if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
LAB_14309ebca:
      lVar2 = param_3[0x34];
      fVar4 = 0.0;
      if (lVar2 == 0) {
        fVar5 = 0.0;
      }
      else {
        fVar5 = *(float *)(lVar2 + 0xcc) * *(float *)(param_3 + 0x37);
        fVar4 = *(float *)(lVar2 + 0xd0) * *(float *)((longlong)param_3 + 0x1ac);
      }
      fVar4 = fVar4 + fVar5;
      goto LAB_14309ec0c;
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
      uVar3 = UMovieSceneActorReferenceSection::GetPrivateStaticClass();
      param_3 = (longlong *)(**(code **)(*param_3 + 0x7f8))(param_3,uVar3,(char)param_3[0xd2]);
      if (param_3 != (longlong *)0x0) goto LAB_14309ebca;
    }
  }
  fVar4 = 0.0;
LAB_14309ec0c:
  *param_2 = fVar4;
  *(undefined1 *)(param_2 + 2) = 0;
  return param_2;
}



// FUNCTION 14309ec30 FUN_14309ec30 body=27 status=ok
// SIG undefined FUN_14309ec30(void)

void FUN_14309ec30(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x230) == 0) {
    *(undefined8 *)(param_1 + 0x230) = *(undefined8 *)(param_1 + 0x118);
  }
  return;
}



// FUNCTION 14309ec50 FUN_14309ec50 body=27 status=ok
// SIG undefined FUN_14309ec50(void)

void FUN_14309ec50(longlong param_1)

{
  if (*(longlong *)(param_1 + 400) == 0) {
    *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_1 + 0x118);
  }
  return;
}



// FUNCTION 14309ec70 FUN_14309ec70 body=27 status=ok
// SIG undefined FUN_14309ec70(void)

void FUN_14309ec70(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x1d0) == 0) {
    *(undefined8 *)(param_1 + 0x1d0) = *(undefined8 *)(param_1 + 0x118);
  }
  return;
}



// FUNCTION 14309ec90 FUN_14309ec90 body=220 status=ok
// SIG undefined FUN_14309ec90(void)

longlong FUN_14309ec90(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar2 = FUN_1430b3b80();
  if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
      != lVar2 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    lVar2 = FUN_1428e7a40();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      return 0;
    }
    param_1 = *(longlong *)(param_1 + 0x118);
    if (param_1 == 0) {
      return 0;
    }
    lVar2 = FUN_1430b3b80();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      return 0;
    }
  }
  return param_1;
}



// FUNCTION 14309ed70 FUN_14309ed70 body=27 status=ok
// SIG undefined FUN_14309ed70(void)

void FUN_14309ed70(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x210) == 0) {
    *(undefined8 *)(param_1 + 0x210) = *(undefined8 *)(param_1 + 0x118);
  }
  return;
}



// FUNCTION 14309ed90 FUN_14309ed90 body=27 status=ok
// SIG undefined FUN_14309ed90(void)

void FUN_14309ed90(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x2e0) == 0) {
    *(undefined8 *)(param_1 + 0x2e0) = *(undefined8 *)(param_1 + 0x118);
  }
  return;
}



// FUNCTION 14309edb0 FUN_14309edb0 body=46 status=ok
// SIG undefined FUN_14309edb0(void)

float FUN_14309edb0(longlong param_1,byte param_2)

{
  float fVar1;
  
  fVar1 = 0.2;
  if ((int)(uint)param_2 < *(int *)(param_1 + 400)) {
    fVar1 = *(float *)(*(longlong *)(param_1 + 0x188) + (ulonglong)param_2 * 0x10);
  }
  return fVar1 * *(float *)(param_1 + 0x1e4);
}



// FUNCTION 14309ede0 FUN_14309ede0 body=50 status=ok
// SIG undefined FUN_14309ede0(void)

float FUN_14309ede0(longlong param_1)

{
  float fVar1;
  
  fVar1 = 0.2;
  if ((int)(uint)*(byte *)(param_1 + 0x292) < *(int *)(param_1 + 400)) {
    fVar1 = *(float *)(*(longlong *)(param_1 + 0x188) + (ulonglong)*(byte *)(param_1 + 0x292) * 0x10
                      );
  }
  return fVar1 * *(float *)(param_1 + 0x1e4);
}



// FUNCTION 14309ee20 FUN_14309ee20 body=185 status=ok
// SIG undefined FUN_14309ee20(void)

float FUN_14309ee20(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  
  cVar2 = *(char *)(param_1 + 0x291);
  if (cVar2 == '\0') {
    return 0.0;
  }
  if ((cVar2 == '\x02') || (*(char *)(param_1 + 0x292) != '\0')) {
    fVar3 = 1.0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x120);
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0(param_1);
      cVar2 = *(char *)(param_1 + 0x291);
    }
    fVar3 = 0.2;
    if (0 < *(int *)(param_1 + 400)) {
      fVar3 = **(float **)(param_1 + 0x188);
    }
    fVar4 = (*(float *)(lVar1 + 0x790) - *(float *)(param_1 + 0x29c)) /
            (fVar3 * *(float *)(param_1 + 0x1e4));
    fVar3 = 0.0;
    if ((0.0 <= fVar4) && (fVar3 = fVar4, 1.0 <= fVar4)) {
      fVar3 = 1.0;
    }
    if (cVar2 == '\x03') {
      return 1.0 - fVar3;
    }
  }
  return fVar3;
}



// FUNCTION 14309eee0 FUN_14309eee0 body=91 status=ok
// SIG undefined FUN_14309eee0(void)

float FUN_14309eee0(longlong param_1,byte param_2)

{
  float fVar1;
  
  if ((int)(uint)param_2 < *(int *)(param_1 + 400)) {
    fVar1 = *(float *)(*(longlong *)(param_1 + 0x188) + 4 + (ulonglong)param_2 * 0x10) *
            *(float *)(param_1 + 0x1e0);
  }
  else {
    fVar1 = 1.0;
  }
  if ((*(char *)(param_1 + 0x290) != '\0') && (*(byte *)(param_1 + 0x2c0) != 0)) {
    fVar1 = fVar1 * (float)*(byte *)(param_1 + 0x2c0) * *(float *)(param_1 + 0x1b0);
  }
  return fVar1;
}



// FUNCTION 14309ef40 FUN_14309ef40 body=182 status=ok
// SIG undefined FUN_14309ef40(void)

float FUN_14309ef40(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  
  cVar2 = *(char *)(param_1 + 0x291);
  if (cVar2 == '\0') {
    return 0.0;
  }
  if (cVar2 == '\x02') {
    return 1.0;
  }
  lVar1 = *(longlong *)(param_1 + 0x120);
  if (lVar1 == 0) {
    lVar1 = FUN_1423407b0();
    cVar2 = *(char *)(param_1 + 0x291);
  }
  fVar3 = 0.2;
  if ((int)(uint)*(byte *)(param_1 + 0x292) < *(int *)(param_1 + 400)) {
    fVar3 = *(float *)(*(longlong *)(param_1 + 0x188) + (ulonglong)*(byte *)(param_1 + 0x292) * 0x10
                      );
  }
  fVar4 = (*(float *)(lVar1 + 0x790) - *(float *)(param_1 + 0x29c)) /
          (fVar3 * *(float *)(param_1 + 0x1e4));
  fVar3 = 0.0;
  if ((0.0 <= fVar4) && (fVar3 = fVar4, 1.0 <= fVar4)) {
    fVar3 = 1.0;
  }
  if (cVar2 == '\x03') {
    fVar3 = 1.0 - fVar3;
  }
  return fVar3;
}



// FUNCTION 14309f000 FUN_14309f000 body=40 status=ok
// SIG undefined FUN_14309f000(void)

undefined4 FUN_14309f000(longlong param_1,byte param_2)

{
  if ((int)(uint)param_2 < *(int *)(param_1 + 400)) {
    return *(undefined4 *)(*(longlong *)(param_1 + 0x188) + 0xc + (ulonglong)param_2 * 0x10);
  }
  return 0x3f800000;
}



// FUNCTION 14309f030 FUN_14309f030 body=795 status=ok
// SIG undefined FUN_14309f030(void)

longlong FUN_14309f030(void)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *local_38;
  int local_30;
  longlong *local_28;
  int local_20;
  
  if (DAT_146b48008 == '\0') {
    uVar1 = FUN_14309b120();
    FUN_1430990d0(&DAT_146b47f40,uVar1);
  }
  lVar2 = FUN_14218c3f0(L"WeaponTelemetry",DAT_146b47f40);
  if (*(longlong *)(lVar2 + 0x70) != 0) {
    return lVar2;
  }
  plVar3 = (longlong *)operator_new(200);
  plVar5 = (longlong *)0x0;
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = lVar2;
    *(longlong **)(lVar2 + 0x70) = plVar3;
    FUN_14217bd20(plVar3 + 1);
    FUN_14217bd20(plVar3 + 2);
    FUN_14217bd20(plVar3 + 3);
    FUN_14217bd20(plVar3 + 4);
    FUN_14217bd20(plVar3 + 5);
    FUN_14217bd20(plVar3 + 6);
    FUN_14217bd20(plVar3 + 7);
    FUN_14217bd20(plVar3 + 8);
    FUN_14217bd20(plVar3 + 9);
    FUN_14217bd20(plVar3 + 10);
    FUN_14217bd20(plVar3 + 0xb);
    FUN_14217bd20(plVar3 + 0xc);
    FUN_14217bd20(plVar3 + 0xd);
    FUN_14217bd20(plVar3 + 0xe);
    FUN_14217bd20(plVar3 + 0xf);
    FUN_14217bd20(plVar3 + 0x10);
    FUN_14217bd20(plVar3 + 0x11);
    FUN_14217bd20(plVar3 + 0x12);
    FUN_14217bd20(plVar3 + 0x13);
    FUN_14217bd20(plVar3 + 0x14);
    FUN_14217bd20(plVar3 + 0x15);
    FUN_14217bd20(plVar3 + 0x16);
    FUN_14217bd20(plVar3 + 0x17);
    FUN_14217bd20(plVar3 + 0x18);
    plVar5 = plVar3;
  }
  if (DAT_146b48008 == '\0') {
    uVar1 = FUN_14309b120();
    FUN_1430990d0(&DAT_146b47f40,uVar1);
  }
  uVar1 = DAT_146b47f40;
  local_28 = (longlong *)0x0;
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar3;
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)IDelegateInstance::vftable;
    *plVar3 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar3[2] = (longlong)&LAB_14309f390;
    plVar3[1] = (longlong)plVar5;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[4] = lVar4;
  }
  local_38 = (longlong *)0x0;
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  local_30 = 3;
  local_38 = plVar3;
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)IDelegateInstance::vftable;
    *plVar3 = (longlong)&DAT_143f3ed00;
    plVar3[2] = (longlong)FUN_14309f360;
    plVar3[1] = (longlong)plVar5;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[4] = lVar4;
    *plVar3 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  FUN_1421872f0(L"WeaponTelemetry",uVar1,&local_38,&local_28);
  if (local_30 != 0) {
    if (local_38 == (longlong *)0x0) goto LAB_14309f2ef;
    (**(code **)(*local_38 + 0x28))(local_38,0);
    if (local_38 != (longlong *)0x0) {
      local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
    }
    local_30 = 0;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
LAB_14309f2ef:
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return lVar2;
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
  return lVar2;
}



// FUNCTION 14309f350 FUN_14309f350 body=16 status=ok
// SIG undefined FUN_14309f350(void)

void FUN_14309f350(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014309f358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x810))();
    return;
  }
  return;
}



// FUNCTION 14309f360 FUN_14309f360 body=35 status=ok
// SIG undefined FUN_14309f360(void)

void FUN_14309f360(undefined8 *param_1)

{
  FUN_14309ad40();
  FUN_1430a0c40(param_1);
  FUN_142195000(*param_1);
  return;
}



// FUNCTION 14309f3a0 FUN_14309f3a0 body=44 status=ok
// SIG undefined FUN_14309f3a0(void)

undefined8 FUN_14309f3a0(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x460))();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014309f3be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x498))(plVar1,0);
    return uVar2;
  }
  return 1;
}



// FUNCTION 14309f3d0 FUN_14309f3d0 body=18 status=ok
// SIG undefined FUN_14309f3d0(void)

bool FUN_14309f3d0(longlong param_1)

{
  return *(longlong *)(param_1 + 0x1b8) != 0;
}



// FUNCTION 14309f3f0 FUN_14309f3f0 body=44 status=ok
// SIG undefined FUN_14309f3f0(void)

undefined8 FUN_14309f3f0(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x460))();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014309f40e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x488))(plVar1,0);
    return uVar2;
  }
  return 1;
}



// FUNCTION 14309f420 FUN_14309f420 body=83 status=ok
// SIG undefined FUN_14309f420(void)

void FUN_14309f420(longlong param_1,undefined1 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  if (param_1 != 0) {
    uVar1 = FUN_1430a8880();
    plVar2 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3);
    }
  }
  return;
}



// FUNCTION 14309f480 FUN_14309f480 body=69 status=ok
// SIG undefined FUN_14309f480(void)

void FUN_14309f480(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  if (param_1 != 0) {
    uVar1 = FUN_1430a8880();
    plVar2 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x78))(plVar2,param_2,1);
    }
  }
  return;
}



// FUNCTION 14309f510 FUN_14309f510 body=125 status=ok
// SIG undefined FUN_14309f510(void)

void FUN_14309f510(undefined8 *param_1)

{
  undefined8 local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b48278) {
    _Init_thread_header(&DAT_146b48278);
    if (DAT_146b48278 == -1) {
      DAT_146b48270 = FUN_14309f030();
      _Init_thread_footer(&DAT_146b48278);
    }
  }
  if (local_res8 != param_1) {
    *param_1 = *(undefined8 *)(DAT_146b48270 + 0x70);
    *(undefined1 *)(param_1 + 1) = 1;
  }
  return;
}



// FUNCTION 14309f590 FUN_14309f590 body=261 status=ok
// SIG undefined FUN_14309f590(void)

void FUN_14309f590(longlong *param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong lVar6;
  
  iVar3 = FUN_14233f450();
  if (iVar3 < 3) {
    lVar6 = param_1[0x3a];
    if (lVar6 == 0) {
      lVar6 = param_1[0x23];
      param_1[0x3a] = lVar6;
      if (lVar6 != 0) goto LAB_14309f5c6;
LAB_14309f5ed:
      uVar4 = 0;
    }
    else {
LAB_14309f5c6:
      plVar5 = (longlong *)
               (**(code **)(*(longlong *)(lVar6 + 0x460) + 0x10))
                         ((longlong *)(lVar6 + 0x460),*(undefined1 *)(lVar6 + 0x690));
      if (plVar5 == (longlong *)0x0) goto LAB_14309f5ed;
      uVar4 = (**(code **)(*plVar5 + 0x420))(plVar5);
    }
    lVar6 = param_1[0x3a];
    if (lVar6 == 0) {
      lVar6 = param_1[0x23];
      param_1[0x3a] = lVar6;
    }
    FUN_1430b46d0(lVar6,uVar4);
  }
  plVar5 = (longlong *)param_1[0x3a];
  if (plVar5 == (longlong *)0x0) {
    plVar5 = (longlong *)param_1[0x23];
    param_1[0x3a] = (longlong)plVar5;
    if (plVar5 == (longlong *)0x0) goto LAB_14309f679;
  }
  cVar1 = (**(code **)(*param_1 + 0x3f8))(param_1);
  if ((cVar1 != '\0') || (plVar5[0xff] == DAT_146b479a0)) {
    lVar6 = *plVar5;
    uVar2 = (**(code **)(lVar6 + 0x858))(plVar5);
    (**(code **)(lVar6 + 0x860))(plVar5,uVar2,0x3a83126f);
  }
LAB_14309f679:
  FUN_1430a4fb0(param_1,3);
  FUN_1430a5b10(param_1);
  return;
}



// FUNCTION 14309f6a0 FUN_14309f6a0 body=85 status=ok
// SIG undefined FUN_14309f6a0(void)

undefined1 FUN_14309f6a0(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxWeapon\\Public\\WeaponReloadComponent.h"
             ,0x22,L"Pure virtual not implemented (%s)",L"UWeaponReloadComponent::IsReloading");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxWeapon\\Public\\WeaponReloadComponent.h"
             ,0x22,L"Pure virtual not implemented (%s)",L"UWeaponReloadComponent::IsReloading");
  return 0;
}



// FUNCTION 14309f710 FUN_14309f710 body=85 status=ok
// SIG undefined FUN_14309f710(void)

undefined1 FUN_14309f710(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxWeapon\\Public\\WeaponPreUseComponent.h"
             ,0x1c,L"Pure virtual not implemented (%s)",L"UWeaponPreUseComponent::IsUsing");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxWeapon\\Public\\WeaponPreUseComponent.h"
             ,0x1c,L"Pure virtual not implemented (%s)",L"UWeaponPreUseComponent::IsUsing");
  return 0;
}



// FUNCTION 14309f770 FUN_14309f770 body=25 status=ok
// SIG undefined FUN_14309f770(void)

ulonglong FUN_14309f770(longlong param_1)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if (*(longlong **)(param_1 + 0x200) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014309f77f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x200) + 0x400))();
    return uVar1;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14309f7c0 FUN_14309f7c0 body=11 status=ok
// SIG undefined FUN_14309f7c0(void)

bool FUN_14309f7c0(longlong param_1)

{
  return *(char *)(param_1 + 0x291) != '\0';
}



// FUNCTION 14309f7d0 FUN_14309f7d0 body=34 status=ok
// SIG undefined FUN_14309f7d0(void)

undefined8 FUN_14309f7d0(longlong param_1,char param_2)

{
  if (((*(char *)(param_1 + 0x291) != '\x02') && (*(char *)(param_1 + 0x292) == '\0')) &&
     ((param_2 == '\0' || (*(char *)(param_1 + 0x291) != '\x01')))) {
    return 0;
  }
  return 1;
}



// FUNCTION 14309f800 FUN_14309f800 body=228 status=ok
// SIG undefined FUN_14309f800(void)

undefined8
FUN_14309f800(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong local_28;
  longlong *plStack_20;
  
  if (param_1 == (longlong *)0x0) {
LAB_14309f885:
    local_28 = 0;
    plStack_20 = (longlong *)0x0;
  }
  else {
    uVar5 = FUN_1430a76d0();
    lVar6 = (**(code **)(*param_1 + 0x628))(param_1,uVar5);
    if (lVar6 == 0) goto LAB_14309f885;
    FUN_143057c50(lVar6,&local_28,param_2,param_3,param_4,param_5,1,0);
    if (local_28 != 0) {
      uVar5 = *(undefined8 *)(local_28 + 0x10);
      goto LAB_14309f890;
    }
  }
  uVar5 = 0;
LAB_14309f890:
  plVar4 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_20)(plStack_20);
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
  return uVar5;
}



// FUNCTION 14309f8f0 FUN_14309f8f0 body=541 status=ok
// SIG undefined FUN_14309f8f0(void)

undefined8 FUN_14309f8f0(longlong *param_1,undefined4 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  void *_Src;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong local_108;
  longlong *plStack_100;
  undefined **local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  void *local_d8;
  int local_d0;
  undefined4 local_cc;
  undefined1 local_c8;
  undefined1 local_c7;
  undefined4 local_c4;
  byte local_c0;
  undefined1 local_b8 [24];
  undefined1 local_a0 [24];
  undefined1 local_88 [24];
  undefined1 local_70 [24];
  undefined1 local_58;
  undefined4 local_54;
  undefined1 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  
  local_d0 = *(int *)(param_4 + 0x28);
  lVar6 = (longlong)local_d0;
  _Src = *(void **)(param_4 + 0x20);
  uVar7 = 0;
  local_f8 = &PTR_FUN_143ff6170;
  local_f0 = *(undefined8 *)(param_4 + 8);
  local_e8 = *(undefined8 *)(param_4 + 0x10);
  local_e0 = *(undefined8 *)(param_4 + 0x18);
  local_d8 = (void *)0x0;
  if (local_d0 == 0) {
    local_cc = 0;
  }
  else {
    TArray<FFullyLoadedPackagesInfo,FDefaultAllocator>::ResizeForCopy(&local_d8,local_d0,0);
    _guard_xfg_dispatch_icall_nop(local_d8,_Src,lVar6 * 0x38);
  }
  local_c8 = *(undefined1 *)(param_4 + 0x30);
  local_c4 = *(undefined4 *)(param_4 + 0x34);
  local_c7 = *(undefined1 *)(param_4 + 0x31);
  local_c0 = local_c0 ^ (*(byte *)(param_4 + 0x38) ^ local_c0) & 7;
  FUN_1405e0d90(local_b8,param_4 + 0x40);
  FUN_1405e0d90(local_a0,param_4 + 0x58);
  FUN_1405e0d90(local_88,param_4 + 0x70);
  FUN_1405e0d90(local_70,param_4 + 0x88);
  local_58 = *(undefined1 *)(param_4 + 0xa0);
  local_4c = *(undefined4 *)(param_4 + 0xac);
  local_54 = *(undefined4 *)(param_4 + 0xa4);
  local_50 = *(undefined1 *)(param_4 + 0xa8);
  local_48 = *(undefined8 *)(param_4 + 0xb0);
  local_40 = *(undefined8 *)(param_4 + 0xb8);
  local_38 = *(longlong *)(param_4 + 0xc0);
  if (local_38 != 0) {
    LOCK();
    *(int *)(local_38 + 0xc) = *(int *)(local_38 + 0xc) + 1;
    UNLOCK();
  }
  if (param_1 != (longlong *)0x0) {
    uVar5 = FUN_1430a76d0();
    lVar6 = (**(code **)(*param_1 + 0x628))(param_1,uVar5);
    if (lVar6 != 0) {
      FUN_143057b10(lVar6,&local_108,param_2,param_3,&local_f8,1,0);
      goto LAB_14309fa90;
    }
  }
  local_108 = 0;
  plStack_100 = (longlong *)0x0;
LAB_14309fa90:
  FUN_142c63c50(&local_f8);
  plVar4 = plStack_100;
  if (local_108 != 0) {
    uVar7 = *(undefined8 *)(local_108 + 0x10);
  }
  if (plStack_100 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_100 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_100)(plStack_100);
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
  FUN_142c63c50(param_4);
  return uVar7;
}



// FUNCTION 14309fb10 FUN_14309fb10 body=587 status=ok
// SIG undefined FUN_14309fb10(void)

byte FUN_14309fb10(longlong param_1,longlong param_2,char *param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  bool bVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  
  if (param_4 != 0) {
    param_2 = param_4;
  }
  bVar6 = *(char *)(param_1 + 0x70) != '\0';
  if (bVar6) {
    *param_3 = *(char *)(param_1 + 0x70);
  }
  if (*(char *)(param_1 + 0x71) != '\0') {
    fVar7 = (float)FUN_142c98860(param_1 + 0x78,param_2);
    if (*(int *)(param_1 + 0xb0) == 0) {
      fVar9 = *(float *)(param_3 + 4);
      if (fVar7 <= 0.0) {
        fVar7 = fVar9 / (1.0 - fVar7);
LAB_14309fbad:
        fVar7 = fVar7 - fVar9;
      }
      else {
        fVar7 = fVar7 * fVar9;
      }
    }
    else if (*(int *)(param_1 + 0xb0) == 2) {
      fVar9 = *(float *)(param_3 + 4);
      fVar7 = fVar9 * fVar7;
      goto LAB_14309fbad;
    }
    if ((*(char *)(param_1 + 0xb4) != '\0') && (1 < *(int *)(param_3 + 0x18))) {
      fVar7 = fVar7 / (float)*(int *)(param_3 + 0x18);
    }
    bVar6 = true;
    *(float *)(param_3 + 4) = fVar7 + *(float *)(param_3 + 4);
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    lVar1 = FUN_142e49950();
    for (lVar4 = *(longlong *)(param_1 + 0xb8); lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
      if (lVar4 == lVar1) {
        if (*(longlong *)(param_1 + 0xb8) != 0) {
          if (*(longlong *)(param_3 + 8) == 0) goto LAB_14309fc43;
          lVar2 = FUN_142e49950();
          lVar4 = *(longlong *)(param_3 + 8);
          lVar1 = lVar4;
          goto joined_r0x00014309fc33;
        }
        break;
      }
    }
  }
LAB_14309fc8b:
  lVar4 = *(longlong *)(param_1 + 0xc0);
  if ((lVar4 != 0) && (*(longlong *)(param_3 + 0x10) != lVar4)) {
    *(longlong *)(param_3 + 0x10) = lVar4;
    bVar6 = true;
  }
  if (*(char *)(param_1 + 200) != '\0') {
    param_3[0x1c] = '\x01';
    param_3[0x20] = *(char *)(param_1 + 200);
  }
  if (*(char *)(param_1 + 0xc9) != '\0') {
    param_3[0x1c] = '\x01';
    param_3[0x21] = '\x01';
  }
  fVar7 = (float)FUN_142c98860(param_1 + 0xd0,param_2);
  if (0.0 < fVar7) {
    param_3[0x1c] = '\x01';
    *(float *)(param_3 + 0x24) = fVar7 + *(float *)(param_3 + 0x24);
  }
  bVar5 = bVar6 | param_3[0x1c];
  uVar8 = FUN_142c98860(param_1 + 0x108,param_2);
  *(undefined4 *)(param_3 + 0x2c) = uVar8;
  fVar7 = (float)FUN_142c98860(param_1 + 0x140,param_2);
  *(float *)(param_3 + 0x30) = fVar7;
  if ((*(float *)(param_3 + 0x2c) != 1.0) || (fVar7 != 1.0)) {
    bVar5 = 1;
  }
  if (*(longlong *)(param_1 + 0x178) != 0) {
    bVar5 = 1;
  }
  return bVar5;
joined_r0x00014309fc33:
  if (lVar1 == 0) goto LAB_14309fc43;
  if (lVar1 == lVar2) goto LAB_14309fc45;
  lVar1 = *(longlong *)(lVar1 + 0x30);
  goto joined_r0x00014309fc33;
LAB_14309fc43:
  lVar4 = 0;
LAB_14309fc45:
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    lVar3 = FUN_142e49950();
    lVar1 = *(longlong *)(param_1 + 0xb8);
    for (lVar2 = lVar1; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
      if (lVar2 == lVar3) goto LAB_14309fc73;
    }
  }
  lVar1 = 0;
LAB_14309fc73:
  if (lVar4 != lVar1) {
    bVar6 = true;
    *(undefined8 *)(param_3 + 8) = *(undefined8 *)(param_1 + 0xb8);
  }
  goto LAB_14309fc8b;
}



// FUNCTION 14309fd90 FUN_14309fd90 body=144 status=ok
// SIG undefined FUN_14309fd90(void)

void FUN_14309fd90(undefined1 *param_1,longlong *param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1,1);
  }
  else {
    *param_1 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  puVar1 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 1,1);
  }
  else {
    param_1[1] = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  *param_4 = 1;
  return;
}



// FUNCTION 14309fe20 FUN_14309fe20 body=51 status=ok
// SIG undefined FUN_14309fe20(void)

void FUN_14309fe20(longlong param_1)

{
  if ((((*(char *)(param_1 + 0x291) == '\x02') || (*(char *)(param_1 + 0x292) != '\0')) ||
      (*(char *)(param_1 + 0x291) == '\x01')) &&
     ((int)(*(byte *)(param_1 + 0x295) + 1) < *(int *)(param_1 + 400))) {
    *(byte *)(param_1 + 0x295) = *(byte *)(param_1 + 0x295) + 1;
  }
  return;
}



// FUNCTION 14309fea0 FUN_14309fea0 body=169 status=ok
// SIG undefined FUN_14309fea0(void)

void FUN_14309fea0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 local_res8 [32];
  undefined8 local_18;
  longlong lStack_10;
  
  if (*(longlong *)(param_1 + 0x200) != 0) {
    FUN_1430bf740();
  }
  iVar1 = FUN_14233f450(param_1);
  if (((iVar1 == 3) && (0 < *(int *)(param_1 + 0x1b8))) && (*(int *)(param_1 + 0x1f8) == 0)) {
    lStack_10 = *(longlong *)(param_1 + 0x118);
    uVar2 = 0;
    local_18 = uVar2;
    if (lStack_10 != 0) {
      uVar2 = *(undefined8 *)(lStack_10 + 0x150);
      local_18 = *(undefined8 *)(lStack_10 + 0x150);
    }
    FUN_142c90ad0(param_1 + 0x1b0,param_1 + 0x1f0,uVar2,&local_18,0,local_res8);
  }
  FUN_1430c2250(param_1);
  return;
}



// FUNCTION 14309ff70 FUN_14309ff70 body=1007 status=ok
// SIG undefined FUN_14309ff70(void)

void FUN_14309ff70(longlong *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  
  lVar5 = param_1[0x46];
  if (lVar5 == 0) {
    lVar5 = param_1[0x23];
    param_1[0x46] = lVar5;
  }
  if ((((*(byte *)((longlong)param_1 + 0x229) & 4) != 0) && ((char)param_1[0x37] == '\0')) &&
     (iVar2 = FUN_142340f30(), iVar2 != 3)) {
    FUN_143093ea0(lVar5,param_1[3]);
  }
  *(byte *)((longlong)param_1 + 0x229) = *(byte *)((longlong)param_1 + 0x229) & 0xfb;
  plVar4 = (longlong *)0x0;
  if (param_1[0x23] != 0) {
    plVar4 = *(longlong **)(param_1[0x23] + 0x150);
  }
  if ((((*(byte *)((longlong)param_1 + 0x1b9) & 1) == 0) &&
      (((*(byte *)((longlong)param_1 + 0x1b9) & 8) == 0 ||
       (*(char *)((longlong)param_1 + 0x1ba) != '\0')))) &&
     ((plVar4 == (longlong *)0x0 || (cVar1 = (**(code **)(*plVar4 + 0x780))(), cVar1 == '\0')))) {
    if ((*(byte *)((longlong)param_1 + 0x229) & 0x10) != 0) {
      *(byte *)((longlong)param_1 + 0x229) = *(byte *)((longlong)param_1 + 0x229) & 0xef;
      FWeakObjectPtr::operator=(&local_68,0);
      local_60 = 0;
      puVar3 = (undefined8 *)FName::FName(local_res8,L"OnUsed",1);
      FWeakObjectPtr::operator=(&local_68,param_1);
      local_60 = *puVar3;
      local_28 = local_68;
      local_24 = local_64;
      local_20 = local_60;
      FUN_143088a40(lVar5,&local_28,1,param_1);
      FWeakObjectPtr::operator=(&local_58,0);
      local_50 = 0;
      puVar3 = (undefined8 *)FName::FName(local_res8,L"OnUseFinished",1);
      FWeakObjectPtr::operator=(&local_58,param_1);
      local_50 = *puVar3;
      local_28 = local_58;
      local_24 = local_54;
      local_20 = local_50;
      FUN_143088a40(lVar5,&local_28,2,param_1);
      FWeakObjectPtr::operator=(&local_48,0);
      local_40 = 0;
      puVar3 = (undefined8 *)FName::FName(local_res8,L"OnEquipped",1);
      FWeakObjectPtr::operator=(&local_48,param_1);
      local_40 = *puVar3;
      local_28 = local_48;
      local_24 = local_44;
      local_20 = local_40;
      FUN_143088610(lVar5,&local_28);
      FWeakObjectPtr::operator=(&local_38,0);
      local_30 = 0;
      puVar3 = (undefined8 *)FName::FName(local_res8,L"OnPutDown",1);
      FWeakObjectPtr::operator=(&local_38,param_1);
      local_30 = *puVar3;
      local_28 = local_38;
      local_24 = local_34;
      local_20 = local_30;
      FUN_1430886d0(lVar5,&local_28);
    }
  }
  else {
    if ((*(byte *)((longlong)param_1 + 0x229) & 0x10) == 0) {
      *(byte *)((longlong)param_1 + 0x229) = *(byte *)((longlong)param_1 + 0x229) | 0x10;
      FWeakObjectPtr::operator=(&local_38,0);
      local_30 = 0;
      puVar3 = (undefined8 *)FName::FName(local_res8,L"OnUsed",1);
      FWeakObjectPtr::operator=(&local_38,param_1);
      local_30 = *puVar3;
      local_28 = local_38;
      local_24 = local_34;
      local_20 = local_30;
      FUN_143088a40(lVar5,&local_28,1,param_1);
      FWeakObjectPtr::operator=(&local_48,0);
      local_40 = 0;
      puVar3 = (undefined8 *)FName::FName(local_res8,L"OnUseFinished",1);
      FWeakObjectPtr::operator=(&local_48,param_1);
      local_40 = *puVar3;
      local_28 = local_48;
      local_24 = local_44;
      local_20 = local_40;
      FUN_143088a40(lVar5,&local_28,2,param_1);
      FWeakObjectPtr::operator=(&local_58,0);
      local_50 = 0;
      puVar3 = (undefined8 *)FName::FName(local_res8,L"OnEquipped",1);
      FWeakObjectPtr::operator=(&local_58,param_1);
      local_50 = *puVar3;
      local_28 = local_58;
      local_24 = local_54;
      local_20 = local_50;
      FUN_143088610(lVar5,&local_28);
      FWeakObjectPtr::operator=(&local_68,0);
      local_60 = 0;
      puVar3 = (undefined8 *)FName::FName(local_res8,L"OnPutDown",1);
      FWeakObjectPtr::operator=(&local_68,param_1);
      local_60 = *puVar3;
      local_28 = local_68;
      local_24 = local_64;
      local_20 = local_60;
      FUN_1430886d0(lVar5,&local_28);
    }
    cVar1 = (**(code **)(*param_1 + 0x440))(param_1);
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x358))(param_1,1);
    }
  }
  return;
}



// FUNCTION 1430a0360 FUN_1430a0360 body=390 status=ok
// SIG undefined FUN_1430a0360(void)

void FUN_1430a0360(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  
  lVar6 = *(longlong *)(param_1 + 400);
  cVar1 = *(char *)(param_1 + 0x180);
  *(undefined1 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  if (lVar6 == 0) {
    lVar6 = *(longlong *)(param_1 + 0x118);
    *(longlong *)(param_1 + 400) = lVar6;
    if (lVar6 == 0) {
      return;
    }
  }
  if ((((*(longlong *)(param_1 + 0x118) == 0) ||
       (plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x118) + 0x150), plVar2 == (longlong *)0x0))
      || (cVar3 = (**(code **)(*plVar2 + 0x780))(plVar2), cVar3 == '\0')) ||
     ((cVar3 = (**(code **)(*plVar2 + 0x778))(plVar2), cVar3 == '\0' &&
      (iVar4 = FUN_142340f30(param_1), iVar4 == 3)))) {
    cVar3 = '\0';
  }
  else {
    cVar3 = '\x01';
  }
  *(char *)(param_1 + 0x180) = cVar3;
  if (cVar3 == '\0') {
    if (cVar1 != '\0') {
      FWeakObjectPtr::operator=(&local_38,0);
      local_30 = 0;
      puVar5 = (undefined8 *)FName::FName(local_res8,L"OnUsed",1);
      FWeakObjectPtr::operator=(&local_38,param_1);
      local_30 = *puVar5;
      local_28 = local_38;
      local_24 = local_34;
      local_20 = local_30;
      FUN_143094570(lVar6,&local_28,1);
    }
  }
  else {
    FWeakObjectPtr::operator=(&local_38,0);
    local_30 = 0;
    puVar5 = (undefined8 *)FName::FName(local_res8,L"OnUsed",1);
    FWeakObjectPtr::operator=(&local_38,param_1);
    local_30 = *puVar5;
    local_28 = local_38;
    local_24 = local_34;
    local_20 = local_30;
    FUN_143088a40(lVar6,&local_28,1,param_1);
  }
  return;
}


