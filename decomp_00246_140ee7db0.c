// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140ee7db0 FUN_140ee7db0 body=93 status=ok
// SIG undefined FUN_140ee7db0(void)

void FUN_140ee7db0(longlong *param_1)

{
  char cVar1;
  
  cVar1 = FUN_142ebd920();
  if ((cVar1 != '\0') &&
     (((char)param_1[0xc9] != '\0' || (*(char *)((longlong)param_1 + 0x649) != '\0')))) {
                    /* WARNING: Could not recover jumptable at 0x000140ee7de1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x578))(param_1,1);
    return;
  }
  if (param_1[199] != 0) {
    FUN_140f02f20();
  }
                    /* WARNING: Could not recover jumptable at 0x000140ee7e06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x580))(param_1,1);
  return;
}



// FUNCTION 140ee7e30 FUN_140ee7e30 body=79 status=ok
// SIG undefined FUN_140ee7e30(void)

void FUN_140ee7e30(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  FUN_140f054a0();
  if (param_4 != 0) {
    FUN_140dc10f0(param_2,param_4);
  }
  FUN_140ee6fe0(param_1,param_4);
  FUN_140f062b0(param_1);
  return;
}



// FUNCTION 140ee7f90 FUN_140ee7f90 body=167 status=ok
// SIG undefined FUN_140ee7f90(void)

void FUN_140ee7f90(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined1 *)(param_2 + 0x30);
  }
  FWeakObjectPtr::operator=(&local_res8,param_1);
  local_28 = 0;
  local_18 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x20,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144605cc8;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_res8;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_resc;
    *(undefined1 *)(puVar1 + 3) = uVar2;
  }
  local_58[0] = &LAB_140ee0c00;
  FUN_14208c4f0(param_1,local_58);
  return;
}



// FUNCTION 140ee8040 FUN_140ee8040 body=262 status=ok
// SIG undefined FUN_140ee8040(void)

void FUN_140ee8040(longlong param_1)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  longlong local_18 [2];
  
  if (*(char *)(param_1 + 0x200) == '\0') {
    if (((*(char *)(param_1 + 0x261) != '\0') && (*(longlong *)(param_1 + 600) != 0)) &&
       (FUN_142ecd390(), *(char *)(param_1 + 0x200) != '\0')) {
      return;
    }
    if ((*(char *)(param_1 + 0x260) == '\0') && (*(char *)(param_1 + 0x201) != '\0')) {
      if (*(char *)(param_1 + 0x262) != '\0') {
        local_18[1] = 5;
        local_18[0] = 0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
        FGenericPlatformString::Convert<char,wchar_t>(local_18[0],5,&DAT_1445ef0c0,5,0x3f);
        FUN_142088910(param_1,local_18);
        if (local_18[0] != 0) {
          FMemory::Free();
        }
        *(undefined1 *)(param_1 + 0x262) = 0;
      }
      *(undefined1 *)(param_1 + 0x201) = 0;
      if (*(longlong *)(param_1 + 600) != 0) {
        FUN_142eb1580();
      }
      puVar1 = (undefined8 *)FName::FName(local_res8,PTR_s_Comm_Deactivated_14629dc08,1);
      FUN_142f0ad20(param_1,*puVar1);
    }
  }
  return;
}



// FUNCTION 140ee8150 FUN_140ee8150 body=483 status=ok
// SIG undefined FUN_140ee8150(void)

undefined1 FUN_140ee8150(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  undefined1 local_res8 [8];
  undefined8 local_28;
  undefined8 local_20;
  
  lVar4 = DAT_146871f70;
  lVar3 = DAT_146871f28;
  if (*(char *)(param_1 + 0x29c) == '\0') {
    if (*(char *)(param_1 + 0x2a8) == '\0') {
      return 0;
    }
    if (*(char *)((longlong)param_2 + 0xc) == '\0') {
      if (DAT_146b3e2b8 == *param_2) {
        FUN_140ee4470(param_1,0);
        return 1;
      }
      return 0;
    }
    return 0;
  }
  cVar1 = *(char *)((longlong)param_2 + 0xc);
  if ((cVar1 == '\0') && (DAT_146b3e2b8 == *param_2)) {
    FUN_140ee4350(param_1,0);
    return 1;
  }
  if ((cVar1 == '\0') && ((lVar2 = *param_2, DAT_146871f78 == lVar2 || (DAT_146871f80 == lVar2)))) {
    iVar7 = -1;
    if (DAT_146871f78 == lVar2) {
      iVar7 = 1;
    }
    FUN_140ee5b20(param_1,iVar7 + *(int *)(param_1 + 0x298));
    return 1;
  }
  if (cVar1 != '\0') {
    return 0;
  }
  lVar2 = *param_2;
  if ((DAT_146871f28 != lVar2) && (DAT_146871f70 != lVar2)) {
    return 0;
  }
  iVar7 = *(int *)(param_1 + 0x1c8);
  fVar8 = _guard_xfg_dispatch_icall_nop(10.0,(float)*(int *)(param_1 + 0x298));
  iVar6 = (int)((float)iVar7 / fVar8) % 10;
  if (iVar6 == 0) {
    if (lVar4 == lVar2) {
      fVar9 = 9.0;
      goto LAB_140ee8291;
    }
LAB_140ee827a:
    if (lVar3 == lVar2) {
      fVar9 = 1.0;
      goto LAB_140ee8291;
    }
  }
  else {
    if (iVar6 != 9) goto LAB_140ee827a;
    if (lVar3 == lVar2) {
      fVar9 = -9.0;
      goto LAB_140ee8291;
    }
  }
  fVar9 = -1.0;
LAB_140ee8291:
  iVar7 = (int)(fVar8 * fVar9) + iVar7;
  iVar6 = *(int *)(param_1 + 0x2a4);
  if (iVar7 <= *(int *)(param_1 + 0x2a4)) {
    iVar6 = iVar7;
  }
  if (*(longlong **)(param_1 + 0x290) != (longlong *)0x0) {
    local_28 = 0;
    local_20 = 0;
    lVar3 = **(longlong **)(param_1 + 0x290);
    puVar5 = (undefined8 *)FName::FName(local_res8,L"Trading_Cash_Roller_Tick",1);
    (**(code **)(lVar3 + 0x4e8))(*(undefined8 *)(param_1 + 0x290),*puVar5,&local_28);
  }
  FUN_140f09980(param_1,iVar6);
  return 1;
}



// FUNCTION 140ee8340 FUN_140ee8340 body=901 status=ok
// SIG undefined FUN_140ee8340(void)

void FUN_140ee8340(longlong *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong local_38;
  longlong local_30;
  
  if (param_1[0xca] == 0) {
    return;
  }
  lVar11 = *(longlong *)(param_2 + 8);
  if (lVar11 == 0) {
LAB_140ee83b4:
    lVar11 = 0;
    bVar4 = false;
    if (*(char *)((longlong)param_1 + 0x699) != '\0') {
      lVar11 = 0;
      bVar4 = true;
    }
  }
  else {
    lVar5 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    bVar4 = false;
    if (!bVar3) goto LAB_140ee83b4;
  }
  lVar5 = param_1[0xd2];
  if (lVar11 == 0) {
    if (lVar5 != 0) {
      uVar8 = 0;
      lVar6 = lVar5;
      goto LAB_140ee83f1;
    }
LAB_140ee83f6:
    if ((lVar5 != lVar11) && (lVar11 != 0)) {
      lVar6 = FWeakObjectPtr::Get(param_1 + 0xbb);
      if (lVar6 == 0) {
LAB_140ee8458:
        lVar6 = 0;
      }
      else {
        lVar7 = FUN_14145f370();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) goto LAB_140ee8458;
      }
      uVar8 = UGameplayTagAssetInterface::GetPrivateStaticClass();
      lVar7 = UObjectBaseUtility::GetInterfaceAddress(lVar11,uVar8);
      lVar9 = (**(code **)(*(longlong *)(lVar11 + 0xd98) + 0x98))();
      if (lVar9 == 0) {
LAB_140ee84b8:
        lVar9 = 0;
      }
      else {
        lVar10 = AGFreezeCharacterCue::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) goto LAB_140ee84b8;
      }
      param_1[0xcb] = lVar9;
      if ((lVar6 != 0) && (lVar7 != 0)) {
        if (param_1[0xc9] != 0) {
          local_38 = lVar11;
          local_30 = lVar7;
          FUN_140ffb870(param_1[0xc9],&local_38,0,2);
        }
        if (DAT_146b33f38 == 0) {
          FUN_142d7ebe0();
        }
      }
      FUN_140f0ffd0(param_1);
    }
  }
  else if (lVar5 != lVar11) {
    uVar8 = 1;
    lVar6 = lVar11;
LAB_140ee83f1:
    FUN_14223d380(lVar6,uVar8);
    goto LAB_140ee83f6;
  }
  bVar1 = *param_2;
  bVar2 = *(byte *)(param_1 + 0xd3);
  param_1[0xd2] = lVar11;
  *(byte *)(param_1 + 0xd3) = *param_2;
  if (param_1[0xc9] == 0) {
    return;
  }
  if ((bVar2 == bVar1) && (lVar5 == lVar11)) {
    return;
  }
  if (((*(char *)((longlong)param_1 + 0x699) == '\0') && (lVar11 != 0)) && (*param_2 < 4)) {
    FUN_140eebf00(param_1);
  }
  bVar1 = *param_2;
  if (bVar1 == 1) {
    FUN_141017a70(param_1[0xc9],1);
  }
  else if (bVar1 == 2) {
    FUN_141017a70(param_1[0xc9],0);
  }
  else {
    if ((bVar4) || ((bVar1 == 4 && (*(char *)((longlong)param_1 + 0x699) != '\0')))) {
      local_38 = 0;
      local_30 = 6;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
      FGenericPlatformString::Convert<char,wchar_t>(local_38,6,"death",6,0x3f);
      FUN_142088910(param_1[0xc9],&local_38);
      if (local_38 != 0) {
        FMemory::Free();
      }
      *(undefined2 *)(param_1 + 0xd3) = 5;
      param_1[0xd2] = 0;
    }
    else {
      if (bVar1 == 3) {
        local_38 = 0;
        local_30 = 6;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
        FGenericPlatformString::Convert<char,wchar_t>(local_38,6,"shake",6,0x3f);
        FUN_142088910(param_1[0xc9],&local_38);
        if (local_38 != 0) {
          FMemory::Free();
        }
        goto LAB_140ee869e;
      }
      if (bVar1 != 5) goto LAB_140ee869e;
    }
    (**(code **)(*param_1 + 0x580))(param_1,1);
  }
LAB_140ee869e:
  FUN_140f0ecc0(param_1);
  return;
}



// FUNCTION 140ee86d0 FUN_140ee86d0 body=138 status=ok
// SIG undefined FUN_140ee86d0(void)

void FUN_140ee86d0(longlong param_1,undefined8 param_2,char param_3,char param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x848);
  iVar1 = *(int *)(param_1 + 0x840);
  FUN_140f05c90(param_1,0);
  if ((param_3 == '\x05') || (iVar2 = *(int *)(param_1 + 0x848) - iVar2, iVar2 < 1)) {
    FUN_140f06e10(param_1);
  }
  else {
    FUN_140f0e050(param_1,iVar2,iVar1 < *(int *)(param_1 + 0x840),param_4 != '\x01');
  }
  return;
}



// FUNCTION 140ee8760 FUN_140ee8760 body=1710 status=ok
// SIG undefined FUN_140ee8760(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ee8760(longlong *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined4 uVar12;
  bool bVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_1f8 [32];
  undefined4 *local_1d8;
  ulonglong *puStack_1d0;
  undefined4 local_1c8;
  float local_1c4;
  undefined1 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  longlong local_170;
  undefined8 local_168;
  longlong *plStack_160;
  undefined1 local_158 [16];
  undefined1 local_148 [8];
  longlong *local_140;
  undefined1 local_130 [8];
  longlong *local_128;
  undefined1 local_118 [8];
  longlong *local_110;
  undefined1 local_100 [24];
  code *local_e8 [2];
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
  FUN_140f05f00();
  uVar12 = 0;
  uVar7 = 0;
  if (param_2 < 1) goto LAB_140ee8d7c;
  FUN_140f05f00(param_1);
  cVar5 = *(char *)((longlong)param_1 + 0x839);
  *(int *)((longlong)param_1 + 0x864) = *(int *)((longlong)param_1 + 0x864) + param_2;
  if (cVar5 == '\x01') {
    local_b8 = 0;
    local_a8 = 0;
    puVar8 = (undefined8 *)FUN_140438ef0(0x10,local_d8);
    if (puVar8 != (undefined8 *)0x0) {
      puVar8[1] = param_1;
      *puVar8 = &PTR_FUN_143f77b70;
    }
    local_e8[0] = FUN_140ee0dc0;
    FUN_14204c280(local_e8);
    cVar5 = *(char *)((longlong)param_1 + 0x839);
  }
  if (cVar5 == '\0') {
    FUN_140ee4e40(param_1);
  }
  if ((param_1[0xfc] != 0) && (param_1[0xfd] != 0)) {
    piVar1 = (int *)(param_1[0xfd] + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      local_168 = 0;
      plStack_160 = (longlong *)0x0;
      lVar9 = FText::AsNumber(local_98,*(undefined4 *)((longlong)param_1 + 0x864),0,&local_168);
      uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_118,L"+{0} XP",L"GFxExperienceBar",L"ExperienceAnnouncementXP");
      puVar8 = (undefined8 *)FTextFormat::FTextFormat(local_100,uVar10);
      local_80[0] = 4;
      FText::FText(local_70,lVar9);
      local_178 = *puVar8;
      local_1d8 = local_80;
      puStack_1d0 = local_50;
      local_170 = puVar8[1];
      local_58 = '\x01';
      if (local_170 != 0) {
        LOCK();
        *(int *)(local_170 + 8) = *(int *)(local_170 + 8) + 1;
        UNLOCK();
      }
      uVar10 = TArray<FFormatArgumentValue,FDefaultAllocator>::
               TArray<FFormatArgumentValue,FDefaultAllocator>(local_158,&local_1d8);
      uVar10 = FText::Format(local_130,&local_178,uVar10);
      FText::FText(local_148,uVar10);
      if (local_128 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_128 + 1;
        lVar4 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_128)(local_128);
          LOCK();
          piVar1 = (int *)((longlong)local_128 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*local_128 + 8))(local_128,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_158);
      if ((local_58 != '\0') && (local_58 = '\0', local_68 != (longlong *)0x0)) {
        LOCK();
        plVar11 = local_68 + 1;
        lVar4 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
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
      plVar11 = (longlong *)puVar8[1];
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar11 + 1;
        lVar4 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar11 + 8))(plVar11,1);
          }
        }
      }
      plVar11 = *(longlong **)(lVar9 + 8);
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar11 + 1;
        lVar9 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar11 + 8))(plVar11,1);
          }
        }
      }
      UMistDebugEntityScreen::InspectEntity(param_1 + 0xfb,local_148,1,0);
      if (local_140 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_140 + 1;
        lVar9 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_140)(local_140);
          LOCK();
          piVar1 = (int *)((longlong)local_140 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*local_140 + 8))(local_140,1);
          }
        }
      }
      if (local_110 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_110 + 1;
        lVar9 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_110)(local_110);
          LOCK();
          piVar1 = (int *)((longlong)local_110 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*local_110 + 8))(local_110,1);
          }
        }
      }
      plVar11 = plStack_160;
      if (plStack_160 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_160 + 1;
        lVar9 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plStack_160)(plStack_160);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar11 + 8))(plVar11,1);
          }
        }
      }
    }
  }
  if (*(char *)((longlong)param_1 + 0x839) == '\x02') {
    return;
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar9 = *(longlong *)(DAT_146b33f38 + 200);
  cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x106);
  if (((cVar5 == '\0') || (lVar9 == 0)) ||
     (iVar6 = FUN_140a33820(lVar9), (int)param_1[0x108] != iVar6)) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x106);
  if (cVar5 == '\0') {
LAB_140ee8b68:
    bVar3 = false;
    if (*(char *)((longlong)param_1 + 0x839) == '\0') {
      *(undefined1 *)((longlong)param_1 + 0x839) = 1;
    }
  }
  else {
    plVar11 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x106);
    iVar6 = (**(code **)(*plVar11 + 0x468))(plVar11);
    if (iVar6 == (int)param_1[0x10c]) goto LAB_140ee8b68;
    bVar3 = true;
    *(undefined1 *)((longlong)param_1 + 0x839) = 2;
  }
  lVar9 = param_1[0xfa];
  if (lVar9 != 0) {
    fVar15 = 1.0;
    if (!bVar3) {
      FUN_140ee6aa0(param_1);
    }
    local_1c8 = *(undefined4 *)(lVar9 + 0x188);
    local_1c4 = *(float *)(lVar9 + 0x18c);
    local_1c0 = *(undefined1 *)(lVar9 + 400);
    local_1bc = *(undefined4 *)(lVar9 + 0x194);
    local_1b8 = *(undefined4 *)(lVar9 + 0x198);
    local_1b4 = *(undefined4 *)(lVar9 + 0x19c);
    local_1b0 = *(undefined4 *)(lVar9 + 0x1a0);
    local_1ac = *(undefined4 *)(lVar9 + 0x1a4);
    local_1a8 = *(undefined4 *)(lVar9 + 0x1a8);
    local_1a4 = *(undefined4 *)(lVar9 + 0x1ac);
    fVar14 = (float)(int)param_1[0x10d] - (float)*(int *)((longlong)param_1 + 0x86c);
    if (1e-08 < ABS(fVar14)) {
      fVar15 = ((float)param_2 - (float)*(int *)((longlong)param_1 + 0x86c)) / fVar14;
    }
    else if ((float)param_2 < (float)(int)param_1[0x10d]) {
      fVar15 = 0.0;
    }
    if (fVar15 < *(float *)(param_1 + 0xc6) || fVar15 == *(float *)(param_1 + 0xc6)) {
      if (bVar13) {
        lVar9 = param_1[200];
        puVar8 = &local_188;
        local_188 = 0;
        local_180 = 0;
        goto LAB_140ee8cde;
      }
    }
    else {
      local_1c4 = local_1c4 * *(float *)((longlong)param_1 + 0x634);
      if (bVar13) {
        lVar9 = param_1[0xc9];
        puVar8 = &local_198;
        local_198 = 0;
        local_190 = 0;
LAB_140ee8cde:
        (**(code **)(*param_1 + 0x4e8))(param_1,lVar9,puVar8);
      }
    }
    FUN_142ef4ad0(param_1[0xfa]);
  }
  plVar11 = (longlong *)param_1[0xff];
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    iVar6 = (int)plVar11[1];
    bVar13 = iVar6 == 0;
    if (bVar13) {
      *(int *)(plVar11 + 1) = 0;
      iVar6 = 0;
    }
    UNLOCK();
    while (!bVar13) {
      LOCK();
      bVar13 = iVar6 == (int)plVar11[1];
      if (bVar13) {
        *(int *)(plVar11 + 1) = iVar6 + 1;
      }
      UNLOCK();
      if (bVar13) {
        if (plVar11 != (longlong *)0x0) {
          if (param_1[0xfe] != 0) {
            FUN_14203e030(param_1[0xfe],&DAT_1445f1210);
          }
          LOCK();
          plVar2 = plVar11 + 1;
          lVar9 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*plVar11)(plVar11);
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar11 + 8))(plVar11,1);
            }
          }
        }
        break;
      }
      LOCK();
      iVar6 = (int)plVar11[1];
      bVar13 = iVar6 == 0;
      if (bVar13) {
        *(int *)(plVar11 + 1) = 0;
        iVar6 = 0;
      }
      UNLOCK();
    }
  }
LAB_140ee8d7c:
  cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x106);
  if (cVar5 != '\0') {
    plVar11 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x106);
    uVar7 = (**(code **)(*plVar11 + 0x468))(plVar11);
  }
  *(undefined4 *)(param_1 + 0x10c) = uVar7;
  cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x106);
  if (cVar5 != '\0') {
    lVar9 = FWeakObjectPtr::Get(param_1 + 0x106);
    uVar12 = *(undefined4 *)(lVar9 + 0x17c);
  }
  FUN_140eea340(param_1,(int)param_1[0x10b],uVar12);
  return;
}



// FUNCTION 140ee8e10 FUN_140ee8e10 body=80 status=ok
// SIG undefined FUN_140ee8e10(void)

void FUN_140ee8e10(undefined8 param_1)

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
  local_58[0] = &LAB_140ee0860;
  FUN_14204c280(local_58);
  return;
}



// FUNCTION 140ee8e60 FUN_140ee8e60 body=3949 status=ok
// SIG undefined FUN_140ee8e60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ee8e60(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  undefined4 uVar9;
  undefined1 auStack_6d8 [32];
  longlong **local_6b8;
  longlong **local_6b0;
  undefined4 local_6a8;
  undefined4 local_6a4;
  undefined4 local_6a0;
  undefined4 local_69c;
  longlong local_698;
  undefined8 local_690;
  longlong local_688;
  undefined8 local_680;
  longlong *local_678;
  undefined8 local_670;
  longlong local_668;
  undefined8 local_660;
  longlong *local_658;
  undefined8 local_650;
  longlong local_648;
  undefined8 local_640;
  longlong *local_638;
  undefined8 local_630;
  longlong *local_628;
  undefined8 local_620;
  longlong local_618;
  undefined8 local_610;
  longlong *local_608;
  undefined8 local_600;
  longlong local_5f8;
  undefined8 local_5f0;
  longlong *local_5e8;
  undefined8 local_5e0;
  longlong *local_5d8;
  undefined8 local_5d0;
  longlong local_5c8;
  undefined8 local_5c0;
  undefined8 local_5b8;
  undefined8 local_5b0;
  undefined8 local_5a8;
  undefined8 local_5a0;
  undefined8 local_598;
  undefined8 local_590;
  undefined8 local_588;
  undefined1 local_580 [8];
  longlong *local_578;
  undefined1 local_568 [8];
  longlong *local_560;
  undefined1 local_550 [8];
  longlong *local_548;
  undefined1 *local_538 [2];
  longlong local_528 [4];
  longlong *local_508;
  int local_4f8;
  undefined1 *local_4e8 [2];
  longlong local_4d8 [4];
  longlong *local_4b8;
  int local_4a8;
  undefined1 *local_498 [2];
  longlong local_488 [4];
  longlong *local_468;
  int local_458;
  undefined1 *local_448 [2];
  longlong local_438 [4];
  longlong *local_418;
  int local_408;
  undefined1 *local_3f8 [2];
  longlong local_3e8 [4];
  longlong *local_3c8;
  int local_3b8;
  undefined1 *local_3a8 [2];
  longlong local_398 [4];
  longlong *local_378;
  int local_368;
  undefined1 *local_358 [2];
  longlong local_348 [4];
  longlong *local_328;
  int local_318;
  undefined1 *local_308 [2];
  longlong local_2f8 [4];
  longlong *local_2d8;
  int local_2c8;
  undefined1 local_2b8 [16];
  longlong local_2a8 [4];
  longlong *local_288;
  int local_278;
  undefined1 local_268 [16];
  longlong local_258 [4];
  longlong *local_238;
  int local_228;
  undefined1 local_218 [16];
  longlong local_208 [4];
  longlong *local_1e8;
  int local_1d8;
  undefined1 local_1c8 [16];
  longlong local_1b8 [4];
  longlong *local_198;
  int local_188;
  undefined1 local_178 [16];
  longlong local_168 [4];
  longlong *local_148;
  int local_138;
  undefined1 local_128 [16];
  longlong local_118 [4];
  longlong *local_f8;
  int local_e8;
  undefined1 local_d8 [16];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  undefined1 local_88 [16];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_6d8;
  local_610 = 8;
  local_618 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_618,0);
  FGenericPlatformString::Memcpy(local_618,L"petSlot",0x10);
  local_6b8 = &local_628;
  local_628 = (longlong *)0x0;
  local_620 = 0;
  local_590 = 0;
  uVar4 = FUN_140ecaa30(param_1,&local_618,0,6);
  *(undefined8 *)(param_1 + 0xf28) = uVar4;
  plVar6 = local_628;
  for (iVar8 = (int)local_620; iVar8 != 0; iVar8 = iVar8 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_628 != (longlong *)0x0) {
    FMemory::Free(local_628);
  }
  if (local_618 != 0) {
    FMemory::Free();
  }
  local_5f8 = 0;
  local_5f0 = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_5f8,0);
  FGenericPlatformString::Memcpy(local_5f8,L"petUltimateMod",0x1e);
  local_6b8 = &local_608;
  local_608 = (longlong *)0x0;
  local_600 = 0;
  local_598 = 0;
  uVar4 = FUN_140ecaa30(param_1,&local_5f8,0,6);
  *(undefined8 *)(param_1 + 0xf30) = uVar4;
  plVar6 = local_608;
  for (iVar8 = (int)local_600; iVar8 != 0; iVar8 = iVar8 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_608 != (longlong *)0x0) {
    FMemory::Free(local_608);
  }
  if (local_5f8 != 0) {
    FMemory::Free();
  }
  local_698 = 0;
  local_690 = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_698,0);
  FGenericPlatformString::Memcpy(local_698,L"petAbilitySlot0",0x20);
  local_6b8 = &local_5e8;
  local_5e8 = (longlong *)0x0;
  local_5e0 = 0;
  local_588 = 0;
  uVar4 = FUN_140ecaa30(param_1,&local_698,0,6);
  *(undefined8 *)(param_1 + 0xf38) = uVar4;
  plVar6 = local_5e8;
  for (iVar8 = (int)local_5e0; iVar8 != 0; iVar8 = iVar8 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_5e8 != (longlong *)0x0) {
    FMemory::Free(local_5e8);
  }
  if (local_698 != 0) {
    FMemory::Free();
  }
  local_668 = 0;
  local_660 = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_668,0);
  FGenericPlatformString::Memcpy(local_668,L"petAbilitySlot1",0x20);
  local_6b8 = &local_678;
  local_678 = (longlong *)0x0;
  local_670 = 0;
  local_5b8 = 0;
  uVar4 = FUN_140ecaa30(param_1,&local_668,0,6);
  *(undefined8 *)(param_1 + 0xf40) = uVar4;
  plVar6 = local_678;
  for (iVar8 = (int)local_670; iVar8 != 0; iVar8 = iVar8 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_678 != (longlong *)0x0) {
    FMemory::Free(local_678);
  }
  if (local_668 != 0) {
    FMemory::Free();
  }
  local_648 = 0;
  local_640 = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_648,0);
  FGenericPlatformString::Memcpy(local_648,L"petLabel",0x12);
  local_6b0 = &local_658;
  local_658 = (longlong *)0x0;
  puVar5 = (undefined8 *)(param_1 + 0xf10);
  local_6b8 = (longlong **)CONCAT71(local_6b8._1_7_,6);
  local_650 = 0;
  local_5b0 = 0;
  cVar3 = FUN_140ecf4e0(param_1,puVar5,&local_648,0);
  plVar6 = local_658;
  for (iVar8 = (int)local_650; iVar8 != 0; iVar8 = iVar8 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_658 != (longlong *)0x0) {
    FMemory::Free(local_658);
  }
  if (local_648 != 0) {
    FMemory::Free();
  }
  if (cVar3 != '\0') {
    lVar2 = *(longlong *)*puVar5;
    uVar4 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_580,&DAT_1445f2de0,L"GFxBeastmasterSkillScreenTree",L"PetLabel");
    (**(code **)(lVar2 + 0x2b0))(*puVar5,uVar4,1,0);
    if (local_578 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_578 + 1;
      lVar2 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*local_578)(local_578);
        LOCK();
        piVar1 = (int *)((longlong)local_578 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_578 + 8))(local_578,1);
        }
      }
    }
  }
  local_688 = 0;
  local_680 = 0x15;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_688,0);
  FGenericPlatformString::Memcpy(local_688,L"petAbilitySlotsLabel",0x2a);
  local_6b0 = &local_638;
  local_638 = (longlong *)0x0;
  local_6b8 = (longlong **)CONCAT71(local_6b8._1_7_,6);
  local_630 = 0;
  local_5a8 = 0;
  cVar3 = FUN_140ecf4e0(param_1,param_1 + 0xf18,&local_688,0);
  plVar6 = local_638;
  for (iVar8 = (int)local_630; iVar8 != 0; iVar8 = iVar8 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_638 != (longlong *)0x0) {
    FMemory::Free(local_638);
  }
  if (local_688 != 0) {
    FMemory::Free();
  }
  if (cVar3 != '\0') {
    lVar2 = **(longlong **)(param_1 + 0xf18);
    uVar4 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_568,L"Pet Abilities",L"GFxBeastmasterSkillScreenTree",
                       L"PetAbilitySlotsLabel");
    (**(code **)(lVar2 + 0x2b0))(*(undefined8 *)(param_1 + 0xf18),uVar4,1,0);
    if (local_560 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_560 + 1;
      lVar2 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*local_560)(local_560);
        LOCK();
        piVar1 = (int *)((longlong)local_560 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_560 + 8))(local_560,1);
        }
      }
    }
  }
  local_5c8 = 0;
  local_5c0 = 0x14;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_5c8,0);
  FGenericPlatformString::Memcpy(local_5c8,L"petUltimateModLabel",0x28);
  local_5d8 = (longlong *)0x0;
  local_6b8 = (longlong **)CONCAT71(local_6b8._1_7_,6);
  local_5d0 = 0;
  local_5a0 = 0;
  local_6b0 = &local_5d8;
  cVar3 = FUN_140ecf4e0(param_1,param_1 + 0xf20,&local_5c8,0);
  plVar6 = local_5d8;
  for (iVar8 = (int)local_5d0; iVar8 != 0; iVar8 = iVar8 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_5d8 != (longlong *)0x0) {
    FMemory::Free(local_5d8);
  }
  if (local_5c8 != 0) {
    FMemory::Free();
  }
  if (cVar3 != '\0') {
    lVar2 = **(longlong **)(param_1 + 0xf20);
    uVar4 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_550,L"Pet Ultimate Mod",L"GFxBeastmasterSkillScreenTree",
                       L"PetUltimateModLabel");
    (**(code **)(lVar2 + 0x2b0))(*(undefined8 *)(param_1 + 0xf20),uVar4,1,0);
    if (local_548 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_548 + 1;
      lVar2 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*local_548)(local_548);
        LOCK();
        piVar1 = (int *)((longlong)local_548 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_548 + 8))(local_548,1);
        }
      }
    }
  }
  plVar6 = (longlong *)(param_1 + 0xc30);
  *(undefined4 *)(param_1 + 0xc38) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xc3c)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar6,0);
  }
  if (*(longlong *)(param_1 + 0xf28) != 0) {
    local_508 = (longlong *)0x0;
    local_4f8 = 0;
    puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_528);
    if (puVar5 != (undefined8 *)0x0) {
      puVar5[1] = param_1;
      *puVar5 = &PTR_FUN_143f77b70;
    }
    local_538[0] = &LAB_140ee0750;
    uVar4 = FUN_1420849a0(param_1,local_2b8,local_538);
    FUN_14208c260(param_1,uVar4);
    if (local_278 != 0) {
      plVar7 = local_2a8;
      if (local_288 != (longlong *)0x0) {
        plVar7 = local_288;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_288 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_4f8 != 0) {
      plVar7 = local_528;
      if (local_508 != (longlong *)0x0) {
        plVar7 = local_508;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_508 != (longlong *)0x0) {
      FMemory::Free();
    }
    local_6a8 = 0xffffffff;
    uVar9 = 0xffffffff;
    if (*(longlong *)(param_1 + 0xf28) != 0) {
      FUN_14170c210(&local_6a8);
      uVar9 = local_6a8;
    }
    local_6a8 = 0xffffffff;
    local_4b8 = (longlong *)0x0;
    local_4a8 = 0;
    puVar5 = (undefined8 *)FUN_140438ef0(0x18,local_4d8);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &PTR_FUN_144266c70;
      puVar5[1] = param_1;
      *(undefined4 *)(puVar5 + 2) = uVar9;
      uVar9 = 0xffffffff;
    }
    local_4e8[0] = &LAB_140ee0da0;
    uVar4 = FUN_1420849a0(param_1,local_268,local_4e8);
    FUN_14208c940(param_1,uVar4);
    if (local_228 != 0) {
      plVar7 = local_258;
      if (local_238 != (longlong *)0x0) {
        plVar7 = local_238;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_238 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_4a8 != 0) {
      plVar7 = local_4d8;
      if (local_4b8 != (longlong *)0x0) {
        plVar7 = local_4b8;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_4b8 != (longlong *)0x0) {
      FMemory::Free();
    }
    FUN_1416f8340(uVar9);
    FUN_1416f8340(local_6a8);
    iVar8 = *(int *)(param_1 + 0xc38);
    *(int *)(param_1 + 0xc38) = iVar8 + 1;
    if (*(int *)(param_1 + 0xc3c) < iVar8 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar6,iVar8);
    }
    *(undefined8 *)(*plVar6 + (longlong)iVar8 * 8) = *(undefined8 *)(param_1 + 0xf28);
  }
  if (*(longlong *)(param_1 + 0xf30) != 0) {
    local_468 = (longlong *)0x0;
    local_458 = 0;
    puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_488);
    if (puVar5 != (undefined8 *)0x0) {
      puVar5[1] = param_1;
      *puVar5 = &PTR_FUN_143f77b70;
    }
    local_498[0] = &LAB_140ee0bf0;
    uVar4 = FUN_1420849a0(param_1,local_218,local_498);
    FUN_14208c260(param_1,uVar4);
    if (local_1d8 != 0) {
      plVar7 = local_208;
      if (local_1e8 != (longlong *)0x0) {
        plVar7 = local_1e8;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_1e8 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_458 != 0) {
      plVar7 = local_488;
      if (local_468 != (longlong *)0x0) {
        plVar7 = local_468;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_468 != (longlong *)0x0) {
      FMemory::Free();
    }
    local_6a4 = 0xffffffff;
    uVar9 = 0xffffffff;
    if (*(longlong *)(param_1 + 0xf30) != 0) {
      FUN_14170c210(&local_6a4);
      uVar9 = local_6a4;
    }
    local_6a4 = 0xffffffff;
    local_418 = (longlong *)0x0;
    local_408 = 0;
    puVar5 = (undefined8 *)FUN_140438ef0(0x18,local_438);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &PTR_FUN_144266c70;
      puVar5[1] = param_1;
      *(undefined4 *)(puVar5 + 2) = uVar9;
      uVar9 = 0xffffffff;
    }
    local_448[0] = &LAB_140ee0ef0;
    uVar4 = FUN_1420849a0(param_1,local_1c8,local_448);
    FUN_14208c940(param_1,uVar4);
    if (local_188 != 0) {
      plVar7 = local_1b8;
      if (local_198 != (longlong *)0x0) {
        plVar7 = local_198;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_198 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_408 != 0) {
      plVar7 = local_438;
      if (local_418 != (longlong *)0x0) {
        plVar7 = local_418;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_418 != (longlong *)0x0) {
      FMemory::Free();
    }
    FUN_1416f8340(uVar9);
    FUN_1416f8340(local_6a4);
    iVar8 = *(int *)(param_1 + 0xc38);
    *(int *)(param_1 + 0xc38) = iVar8 + 1;
    if (*(int *)(param_1 + 0xc3c) < iVar8 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar6,iVar8);
    }
    *(undefined8 *)(*plVar6 + (longlong)iVar8 * 8) = *(undefined8 *)(param_1 + 0xf30);
  }
  if (*(longlong *)(param_1 + 0xf38) != 0) {
    local_3c8 = (longlong *)0x0;
    local_3b8 = 0;
    puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_3e8);
    if (puVar5 != (undefined8 *)0x0) {
      puVar5[1] = param_1;
      *puVar5 = &PTR_FUN_143f77b70;
    }
    local_3f8[0] = &LAB_140ee0740;
    uVar4 = FUN_1420849a0(param_1,local_178,local_3f8);
    FUN_14208c260(param_1,uVar4);
    if (local_138 != 0) {
      plVar7 = local_168;
      if (local_148 != (longlong *)0x0) {
        plVar7 = local_148;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_148 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_3b8 != 0) {
      plVar7 = local_3e8;
      if (local_3c8 != (longlong *)0x0) {
        plVar7 = local_3c8;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_3c8 != (longlong *)0x0) {
      FMemory::Free();
    }
    local_6a0 = 0xffffffff;
    uVar9 = 0xffffffff;
    if (*(longlong *)(param_1 + 0xf38) != 0) {
      FUN_14170c210(&local_6a0);
      uVar9 = local_6a0;
    }
    local_6a0 = 0xffffffff;
    local_378 = (longlong *)0x0;
    local_368 = 0;
    puVar5 = (undefined8 *)FUN_140438ef0(0x18,local_398);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &PTR_FUN_144266c70;
      puVar5[1] = param_1;
      *(undefined4 *)(puVar5 + 2) = uVar9;
      uVar9 = 0xffffffff;
    }
    local_3a8[0] = &LAB_140ee0fe0;
    uVar4 = FUN_1420849a0(param_1,local_128,local_3a8);
    FUN_14208c940(param_1,uVar4);
    if (local_e8 != 0) {
      plVar7 = local_118;
      if (local_f8 != (longlong *)0x0) {
        plVar7 = local_f8;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_f8 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_368 != 0) {
      plVar7 = local_398;
      if (local_378 != (longlong *)0x0) {
        plVar7 = local_378;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_378 != (longlong *)0x0) {
      FMemory::Free();
    }
    FUN_1416f8340(uVar9);
    FUN_1416f8340(local_6a0);
    iVar8 = *(int *)(param_1 + 0xc38);
    *(int *)(param_1 + 0xc38) = iVar8 + 1;
    if (*(int *)(param_1 + 0xc3c) < iVar8 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar6,iVar8);
    }
    *(undefined8 *)(*plVar6 + (longlong)iVar8 * 8) = *(undefined8 *)(param_1 + 0xf38);
  }
  if (*(longlong *)(param_1 + 0xf40) != 0) {
    local_328 = (longlong *)0x0;
    local_318 = 0;
    puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_348);
    if (puVar5 != (undefined8 *)0x0) {
      puVar5[1] = param_1;
      *puVar5 = &PTR_FUN_143f77b70;
    }
    local_358[0] = &LAB_140ee08f0;
    uVar4 = FUN_1420849a0(param_1,local_d8,local_358);
    FUN_14208c260(param_1,uVar4);
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
    if (local_318 != 0) {
      plVar7 = local_348;
      if (local_328 != (longlong *)0x0) {
        plVar7 = local_328;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_328 != (longlong *)0x0) {
      FMemory::Free();
    }
    local_69c = 0xffffffff;
    uVar9 = 0xffffffff;
    if (*(longlong *)(param_1 + 0xf40) != 0) {
      FUN_14170c210(&local_69c);
      uVar9 = local_69c;
    }
    local_69c = 0xffffffff;
    local_2d8 = (longlong *)0x0;
    local_2c8 = 0;
    puVar5 = (undefined8 *)FUN_140438ef0(0x18,local_2f8);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &PTR_FUN_144266c70;
      puVar5[1] = param_1;
      *(undefined4 *)(puVar5 + 2) = uVar9;
      uVar9 = 0xffffffff;
    }
    local_308[0] = &LAB_140ee0ff0;
    uVar4 = FUN_1420849a0(param_1,local_88,local_308);
    FUN_14208c940(param_1,uVar4);
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
    if (local_2c8 != 0) {
      plVar7 = local_2f8;
      if (local_2d8 != (longlong *)0x0) {
        plVar7 = local_2d8;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_2d8 != (longlong *)0x0) {
      FMemory::Free();
    }
    FUN_1416f8340(uVar9);
    FUN_1416f8340(local_69c);
    iVar8 = *(int *)(param_1 + 0xc38);
    *(int *)(param_1 + 0xc38) = iVar8 + 1;
    if (*(int *)(param_1 + 0xc3c) < iVar8 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar6,iVar8);
    }
    *(undefined8 *)(*plVar6 + (longlong)iVar8 * 8) = *(undefined8 *)(param_1 + 0xf40);
  }
  FUN_14103b390(param_1);
  return;
}



// FUNCTION 140ee9dd0 FUN_140ee9dd0 body=555 status=ok
// SIG undefined FUN_140ee9dd0(void)

undefined8 FUN_140ee9dd0(longlong param_1,longlong *param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    return 0;
  }
  if (*(longlong **)(param_1 + 0x40) == (longlong *)0x0) {
    return 0;
  }
  if ((*(char *)((longlong)param_2 + 0xc) == '\0') && (DAT_146871fc8 == *param_2)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x2b0))();
    FUN_140eee420(param_1 + -0x170,uVar4,param_2);
    return 1;
  }
  if (*(char *)(param_1 + 0xb0) == '\x02') {
    return 0;
  }
  bVar1 = false;
  if ((*(char *)((longlong)param_2 + 0xc) == '\0') && (DAT_146872000 == *param_2)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    lVar5 = *(longlong *)(param_1 + 0x80);
    if (lVar5 == *(longlong *)(param_1 + 0x50)) {
      FUN_140efd4f0(param_1 + -0x170,0,param_2);
    }
    else {
      if (lVar5 == *(longlong *)(param_1 + 0x60)) {
        if (*(char *)(param_1 + 0xb0) == '\0') {
          FUN_140eff5a0();
          goto LAB_140ee9ec4;
        }
      }
      else if (lVar5 != *(longlong *)(param_1 + 0x70)) goto LAB_140ee9ec6;
      FUN_140efd420(param_1 + -0x170,0,param_2);
    }
LAB_140ee9ec4:
    bVar1 = true;
  }
LAB_140ee9ec6:
  if ((*(char *)((longlong)param_2 + 0xc) == '\0') && (DAT_146872008 == *param_2)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    lVar5 = *(longlong *)(param_1 + 0x80);
    if (lVar5 == *(longlong *)(param_1 + 0x50)) {
      if (*(char *)(param_1 + 0xb0) == '\0') {
        FUN_140eff5a0();
        goto LAB_140ee9f44;
      }
    }
    else {
      if (lVar5 == *(longlong *)(param_1 + 0x60)) {
        FUN_140efd420(param_1 + -0x170,0,param_2);
        goto LAB_140ee9f44;
      }
      if (lVar5 != *(longlong *)(param_1 + 0x70)) goto LAB_140ee9f3c;
    }
    FUN_140efd4f0(param_1 + -0x170,0,param_2);
  }
  else {
LAB_140ee9f3c:
    if (!bVar1) {
      return 0;
    }
  }
LAB_140ee9f44:
  iVar7 = 0;
  iVar3 = FUN_142eb7440(*(undefined8 *)(param_1 + 0x40));
  if (0 < iVar3) {
    do {
      lVar5 = FUN_142eb6a30(*(undefined8 *)(param_1 + 0x40),iVar7);
      if (lVar5 != 0) {
        lVar6 = FUN_14132e850();
        iVar3 = *(int *)(lVar6 + 0x90);
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < iVar3) ||
           (*(longlong *)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)iVar3 * 8)
            != lVar6 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          if ((iVar7 == *(int *)(*(longlong *)(param_1 + 0x80) + 0x2e4)) ||
             (iVar7 == *(int *)(*(longlong *)(param_1 + 0x80) + 0x2e8))) {
            uVar4 = CONCAT71((int7)(int3)((uint)iVar3 >> 8),1);
          }
          else {
            uVar4 = 0;
          }
          FUN_142ed2820(lVar5,uVar4,1);
        }
      }
      iVar7 = iVar7 + 1;
      iVar3 = FUN_142eb7440(*(undefined8 *)(param_1 + 0x40));
    } while (iVar7 < iVar3);
  }
  return 1;
}



// FUNCTION 140eea000 FUN_140eea000 body=323 status=ok
// SIG undefined FUN_140eea000(void)

undefined8 FUN_140eea000(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong local_18 [2];
  
  if ((*(char *)((longlong)param_2 + 0xc) == '\0') && (DAT_146b3e2a0 == *param_2)) {
    cVar1 = FKey::IsGamepadKey(param_2 + 2);
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x1c) == '\0') {
        local_18[1] = 3;
        local_18[0] = 0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
        FGenericPlatformString::Memcpy(local_18[0],&DAT_1446017c8,6);
        FUN_142088910(param_1 + -0x280,local_18);
        if (local_18[0] != 0) {
          FMemory::Free();
        }
        *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + -0xb8);
        *(undefined1 *)(param_1 + 0x1c) = 1;
        FUN_140ee5b20(param_1 + -0x280,0);
        return 1;
      }
      FUN_140ee4350(param_1 + -0x280,1);
      return 1;
    }
    if (*(char *)(param_1 + 0x1c) == '\0') {
      if (*(char *)(param_1 + 0x28) == '\0') {
        FUN_140f0d520();
        return 1;
      }
      FUN_140ee4470(param_1 + -0x280,1);
      return 1;
    }
  }
  else if ((*(char *)(param_1 + 0x1c) == '\0') && (*(char *)(param_1 + 0x28) == '\0')) {
    return 0;
  }
  uVar2 = FUN_140ee8150(param_1 + -0x280,param_2);
  return uVar2;
}



// FUNCTION 140eea150 FUN_140eea150 body=272 status=ok
// SIG undefined FUN_140eea150(void)

void FUN_140eea150(longlong param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong local_18 [2];
  
  if (*(int *)(param_1 + 0x844) != param_3) {
    *(int *)(param_1 + 0x844) = param_3;
    FUN_140f0e650(param_1,param_3);
    lVar3 = FUN_140eccbe0(param_1);
    cVar1 = FUN_142eb50d0(param_1);
    if ((((cVar1 == '\0') && (*(longlong *)(param_1 + 0x820) != 0)) &&
        (*(longlong *)(param_1 + 0x818) != 0)) &&
       (((lVar3 != 0 && (cVar1 = FUN_140eec620(param_1), cVar1 == '\0')) &&
        (*(int *)(*(longlong *)(param_1 + 0x820) + 0x178) <= *(int *)(param_1 + 0x844))))) {
      uVar2 = FUN_140ccaa90(lVar3,param_1);
      FUN_140f06ab0(param_1,uVar2);
      local_18[1] = 5;
      local_18[0] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      FGenericPlatformString::Convert<char,wchar_t>(local_18[0],5,&DAT_1445f2004,5,0x3f);
      FUN_142088910(*(undefined8 *)(param_1 + 0x818),local_18);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140eea260 FUN_140eea260 body=67 status=ok
// SIG undefined FUN_140eea260(void)

void FUN_140eea260(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  FUN_140f054a0();
  lVar1 = FUN_140ee6fe0(param_1,param_2);
  if ((lVar1 != 0) && (*(longlong *)(param_1 + 0x20) != 0)) {
    FUN_14141f270();
  }
  FUN_140f062b0(param_1);
  return;
}



// FUNCTION 140eea2b0 FUN_140eea2b0 body=142 status=ok
// SIG undefined FUN_140eea2b0(void)

void FUN_140eea2b0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_res8;
  undefined4 local_resc;
  
  puVar2 = *(undefined4 **)(param_1 + 0x28);
  puVar3 = puVar2 + (longlong)*(int *)(param_1 + 0x30) * 4;
  for (; puVar2 != puVar3; puVar2 = puVar2 + 4) {
    lVar1 = FWeakObjectPtr::Get(puVar2);
    if (lVar1 == param_2) {
      if (*(longlong **)(puVar2 + 2) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(puVar2 + 2) + 0x280))();
        *(undefined8 *)(puVar2 + 2) = 0;
      }
      FWeakObjectPtr::operator=(&local_res8,0);
      *puVar2 = local_res8;
      puVar2[1] = local_resc;
    }
  }
  FUN_140f054a0(param_1);
  return;
}



// FUNCTION 140eea340 FUN_140eea340 body=697 status=ok
// SIG undefined FUN_140eea340(void)

void FUN_140eea340(longlong *param_1,int param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  longlong local_res8;
  undefined2 *local_48;
  undefined8 local_40;
  longlong local_38 [2];
  
  lVar5 = FWeakObjectPtr::Get(param_1 + 0xb9);
  if (lVar5 != 0) {
    lVar6 = FUN_14142a560();
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
      cVar3 = FUN_142eb50d0();
      if (((cVar3 == '\0') && (param_1[0x104] != 0)) && (param_1[0x103] != 0)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if ((param_2 == (int)param_1[0x10b]) && (param_3 == *(int *)((longlong)param_1 + 0x85c))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar1) && (bVar2)) {
        if ((param_2 == 0) && ((param_3 == 0 && (cVar3 = FUN_140eec620(param_1), cVar3 != '\0')))) {
          local_40 = 5;
          local_48 = (undefined2 *)0x0;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
          FGenericPlatformString::Convert<char,wchar_t>(local_48,5,&DAT_1445f12a8,5,0x3f);
          FUN_142088910(param_1[0x103],&local_48);
          if (local_48 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          param_1[0x10b] = 0;
          FUN_140cc9500(lVar5,param_1);
        }
        else if ((param_1[0x104] != 0) &&
                (*(int *)(param_1[0x104] + 0x178) <= *(int *)((longlong)param_1 + 0x844))) {
          lVar6 = FUN_140eccc40(param_1);
          if (*(longlong *)(lVar6 + 0xa58) != 0) {
            puVar7 = (undefined8 *)FName::ToString(*(longlong *)(lVar6 + 0xa58) + 0x88,local_38);
            if (*(int *)(puVar7 + 1) == 0) {
              puVar8 = &DAT_143f3eda8;
            }
            else {
              puVar8 = (undefined2 *)*puVar7;
            }
            FString::PrintfImpl(&local_48,L"SkillPointsAvailable_VO_%s",puVar8);
            puVar8 = &DAT_143f3eda8;
            if ((int)local_40 != 0) {
              puVar8 = local_48;
            }
            FName::FName(&local_res8,puVar8,1);
            param_1[0x117] = local_res8;
            if (local_48 != (undefined2 *)0x0) {
              FMemory::Free();
            }
            if (local_38[0] != 0) {
              FMemory::Free();
            }
            local_48 = (undefined2 *)0x0;
            local_40 = 0;
            (**(code **)(*param_1 + 0x4e8))(param_1,param_1[0x117],&local_48);
          }
          *(int *)(param_1 + 0x10b) = param_2;
          *(int *)((longlong)param_1 + 0x85c) = param_3;
          uVar4 = FUN_140ccaa90(lVar5,param_1);
          FUN_140f06ab0(param_1,uVar4);
          local_48 = (undefined2 *)0x0;
          local_40 = 5;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
          FGenericPlatformString::Convert<char,wchar_t>(local_48,5,&DAT_1445f1300,5,0x3f);
          FUN_142088910(param_1[0x103],&local_48);
          if (local_48 != (undefined2 *)0x0) {
            FMemory::Free();
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140eea600 FUN_140eea600 body=273 status=ok
// SIG undefined FUN_140eea600(void)

void FUN_140eea600(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x60c);
  if (lVar2 != 0) {
    lVar3 = FUN_142937720();
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
      local_68 = (undefined4)lVar2;
      uStack_64 = (undefined4)((ulonglong)lVar2 >> 0x20);
      uStack_60 = (undefined4)param_1;
      uStack_5c = (undefined4)((ulonglong)param_1 >> 0x20);
      if (*(char *)(param_1 + 0x838) == '\x01') {
        local_28 = 0;
        local_18 = 0;
        puVar4 = (undefined8 *)FUN_140438ef0(0x18,local_48);
        if (puVar4 != (undefined8 *)0x0) {
          *puVar4 = &PTR_FUN_143f77c18;
          *(undefined4 *)(puVar4 + 1) = local_68;
          *(undefined4 *)((longlong)puVar4 + 0xc) = uStack_64;
          *(undefined4 *)(puVar4 + 2) = uStack_60;
          *(undefined4 *)((longlong)puVar4 + 0x14) = uStack_5c;
        }
        local_58[0] = &LAB_140ee0ee0;
      }
      else {
        if (*(char *)(param_1 + 0x838) != '\x02') {
          return;
        }
        local_28 = 0;
        local_18 = 0;
        puVar4 = (undefined8 *)FUN_140438ef0(0x18,local_48);
        if (puVar4 != (undefined8 *)0x0) {
          *puVar4 = &PTR_FUN_143f77c18;
          *(undefined4 *)(puVar4 + 1) = local_68;
          *(undefined4 *)((longlong)puVar4 + 0xc) = uStack_64;
          *(undefined4 *)(puVar4 + 2) = uStack_60;
          *(undefined4 *)((longlong)puVar4 + 0x14) = uStack_5c;
        }
        local_58[0] = &LAB_140ee0cc0;
      }
      FUN_14204c280(local_58);
    }
  }
  return;
}



// FUNCTION 140eea720 FUN_140eea720 body=12 status=ok
// SIG undefined FUN_140eea720(void)

void FUN_140eea720(longlong param_1,undefined8 param_2)

{
  FUN_140eea340(param_1,param_2,*(undefined4 *)(param_1 + 0x85c));
  return;
}



// FUNCTION 140eea730 FUN_140eea730 body=1737 status=ok
// SIG undefined FUN_140eea730(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140eea730(longlong *param_1,int param_2,char param_3)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong *plVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_218 [32];
  int local_1f8;
  longlong local_1f0;
  longlong *local_1e8;
  undefined4 *local_1d8;
  ulonglong *puStack_1d0;
  undefined4 local_1c8;
  float local_1c4;
  undefined1 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  longlong local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  longlong local_170;
  undefined8 local_168;
  longlong *plStack_160;
  undefined1 local_158 [16];
  undefined1 local_148 [8];
  longlong *local_140;
  undefined1 local_130 [8];
  longlong *local_128;
  undefined1 local_118 [8];
  longlong *local_110;
  undefined1 local_100 [24];
  code *local_e8 [2];
  undefined1 local_d8 [32];
  undefined8 local_b8;
  undefined4 local_a8;
  undefined1 local_98 [24];
  undefined4 local_80 [4];
  undefined1 local_70 [8];
  longlong *local_68;
  char local_58;
  ulonglong local_50 [5];
  
  local_50[0] = DAT_1468387a8 ^ (ulonglong)auStack_218;
  local_1f8 = param_2;
  lVar8 = FWeakObjectPtr::Get(param_1 + 0xbb);
  uVar7 = 0;
  if (lVar8 == 0) {
LAB_140eea7b9:
    lVar8 = 0;
  }
  else {
    lVar9 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (!bVar12) goto LAB_140eea7b9;
  }
  FUN_140f06d10(param_1);
  if (param_3 != '\0') {
    FUN_140f117e0(param_1);
  }
  if (0 < param_2) {
    FUN_140f06d10(param_1);
    cVar3 = *(char *)((longlong)param_1 + 0x83a);
    *(int *)(param_1 + 0x10f) = (int)param_1[0x10f] + param_2;
    if (cVar3 == '\x01') {
      local_b8 = 0;
      local_a8 = 0;
      puVar10 = (undefined8 *)FUN_140438ef0(0x10,local_d8);
      if (puVar10 != (undefined8 *)0x0) {
        puVar10[1] = param_1;
        *puVar10 = &PTR_FUN_143f77b70;
      }
      local_e8[0] = FUN_140ee0990;
      FUN_14204c280(local_e8);
      cVar3 = *(char *)((longlong)param_1 + 0x83a);
    }
    if (cVar3 == '\0') {
      FUN_140ee4e40(param_1);
    }
    if ((param_1[0xe9] != 0) && (param_1[0xea] != 0)) {
      piVar1 = (int *)(param_1[0xea] + 8);
      LOCK();
      iVar5 = *piVar1;
      if (iVar5 == 0) {
        *piVar1 = 0;
        iVar5 = 0;
      }
      UNLOCK();
      if (0 < iVar5) {
        local_168 = 0;
        plStack_160 = (longlong *)0x0;
        lVar9 = FText::AsNumber(local_98,(int)param_1[0x10f],0,&local_168);
        local_1a0 = lVar9;
        uVar11 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                           (local_118,L"+{0} XP",L"GFxExperienceBar",L"ExperienceAnnouncementXP");
        puVar10 = (undefined8 *)FTextFormat::FTextFormat(local_100,uVar11);
        local_80[0] = 4;
        FText::FText(local_70,lVar9);
        local_1d8 = local_80;
        local_58 = '\x01';
        puStack_1d0 = local_50;
        local_178 = *puVar10;
        local_170 = puVar10[1];
        if (local_170 != 0) {
          LOCK();
          *(int *)(local_170 + 8) = *(int *)(local_170 + 8) + 1;
          UNLOCK();
        }
        uVar11 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                 TArray<FFormatArgumentValue,FDefaultAllocator>(local_158,&local_1d8);
        uVar11 = FText::Format(local_130,&local_178,uVar11);
        FText::FText(local_148,uVar11);
        if (local_128 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_128 + 1;
          lVar9 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*local_128)(local_128);
            LOCK();
            piVar1 = (int *)((longlong)local_128 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*local_128 + 8))(local_128,1);
            }
          }
        }
        TArray<FFormatArgumentValue,FDefaultAllocator>::
        ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_158);
        if ((local_58 != '\0') && (local_58 = '\0', local_68 != (longlong *)0x0)) {
          LOCK();
          plVar4 = local_68 + 1;
          lVar9 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
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
        plVar4 = (longlong *)puVar10[1];
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar4 + 1;
          lVar9 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
            }
          }
        }
        plVar4 = *(longlong **)(local_1a0 + 8);
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar4 + 1;
          lVar9 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
            }
          }
        }
        UMistDebugEntityScreen::InspectEntity(param_1 + 0xe8,local_148,1,0);
        if (local_140 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_140 + 1;
          lVar9 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*local_140)(local_140);
            LOCK();
            piVar1 = (int *)((longlong)local_140 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*local_140 + 8))(local_140,1);
            }
          }
        }
        if (local_110 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_110 + 1;
          lVar9 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*local_110)(local_110);
            LOCK();
            piVar1 = (int *)((longlong)local_110 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*local_110 + 8))(local_110,1);
            }
          }
        }
        plVar4 = plStack_160;
        param_2 = local_1f8;
        if (plStack_160 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_160 + 1;
          lVar9 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*plStack_160)(plStack_160);
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            param_2 = local_1f8;
            if (iVar5 == 1) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
              param_2 = local_1f8;
            }
          }
        }
      }
    }
    if (*(char *)((longlong)param_1 + 0x83a) == '\x02') {
      return;
    }
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    if (param_3 == '\0') {
      if (*(char *)((longlong)param_1 + 0x83a) == '\0') {
        *(undefined1 *)((longlong)param_1 + 0x83a) = 1;
      }
    }
    else {
      *(undefined1 *)((longlong)param_1 + 0x83a) = 2;
    }
    lVar9 = param_1[0xe7];
    if (lVar9 != 0) {
      fVar14 = 1.0;
      if (param_3 == '\0') {
        FUN_140ee6bc0(param_1);
      }
      local_1c8 = *(undefined4 *)(lVar9 + 0x188);
      local_1c4 = *(float *)(lVar9 + 0x18c);
      local_1c0 = *(undefined1 *)(lVar9 + 400);
      local_1bc = *(undefined4 *)(lVar9 + 0x194);
      local_1b8 = *(undefined4 *)(lVar9 + 0x198);
      local_1b4 = *(undefined4 *)(lVar9 + 0x19c);
      local_1b0 = *(undefined4 *)(lVar9 + 0x1a0);
      local_1ac = *(undefined4 *)(lVar9 + 0x1a4);
      local_1a8 = *(undefined4 *)(lVar9 + 0x1a8);
      local_1a4 = *(undefined4 *)(lVar9 + 0x1ac);
      fVar13 = (float)*(int *)((longlong)param_1 + 0x87c) - (float)(int)param_1[0x110];
      if (1e-08 < ABS(fVar13)) {
        fVar14 = ((float)param_2 - (float)(int)param_1[0x110]) / fVar13;
      }
      else if ((float)param_2 < (float)*(int *)((longlong)param_1 + 0x87c)) {
        fVar14 = 0.0;
      }
      if (fVar14 < *(float *)(param_1 + 0xc6) || fVar14 == *(float *)(param_1 + 0xc6)) {
        lVar9 = param_1[200];
        puVar10 = &local_188;
        local_188 = 0;
        local_180 = 0;
      }
      else {
        local_1c4 = local_1c4 * *(float *)((longlong)param_1 + 0x634);
        puVar10 = &local_198;
        lVar9 = param_1[0xc9];
        local_198 = 0;
        local_190 = 0;
      }
      (**(code **)(*param_1 + 0x4e8))(param_1,lVar9,puVar10);
      FUN_142ef4ad0(param_1[0xe7]);
    }
    plVar4 = (longlong *)param_1[0xec];
    local_1e8 = plVar4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      iVar5 = (int)plVar4[1];
      bVar12 = iVar5 == 0;
      if (bVar12) {
        *(int *)(plVar4 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
      while (!bVar12) {
        LOCK();
        bVar12 = iVar5 == (int)plVar4[1];
        if (bVar12) {
          *(int *)(plVar4 + 1) = iVar5 + 1;
        }
        UNLOCK();
        if (bVar12) {
          if (plVar4 != (longlong *)0x0) {
            local_1f0 = param_1[0xeb];
            if (local_1f0 != 0) {
              FUN_14203e030(local_1f0,&DAT_1445f1288);
            }
            plVar2 = local_1e8;
            LOCK();
            plVar4 = plVar4 + 1;
            lVar9 = *plVar4;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*local_1e8)(local_1e8);
              LOCK();
              piVar1 = (int *)((longlong)plVar2 + 0xc);
              iVar5 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*local_1e8 + 8))(local_1e8,1);
              }
            }
          }
          break;
        }
        LOCK();
        iVar5 = (int)plVar4[1];
        bVar12 = iVar5 == 0;
        if (bVar12) {
          *(int *)(plVar4 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
      }
    }
    if (lVar8 == 0) goto LAB_140eeadba;
    if (((param_3 != '\0') && (iVar5 = FUN_1404cf9f0(lVar8 + 0x1b10), iVar5 != 0)) &&
       (lVar9 = FUN_140cff1b0(lVar8), lVar9 != 0)) {
      uVar6 = FUN_140e827f0(lVar8 + 0x1b10,0);
      FUN_140c70520(lVar9,uVar6);
    }
  }
  if (lVar8 != 0) {
    uVar7 = FUN_140e827f0(lVar8 + 0x1b10,0);
  }
LAB_140eeadba:
  *(undefined4 *)((longlong)param_1 + 0x874) = uVar7;
  return;
}



// FUNCTION 140eeae00 FUN_140eeae00 body=80 status=ok
// SIG undefined FUN_140eeae00(void)

void FUN_140eeae00(undefined8 param_1)

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
  local_58[0] = &LAB_140ee0760;
  FUN_14204c280(local_58);
  return;
}



// FUNCTION 140eeae50 FUN_140eeae50 body=260 status=ok
// SIG undefined FUN_140eeae50(void)

undefined1 FUN_140eeae50(undefined8 *param_1)

{
  void *_Src;
  int iVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined1 uVar6;
  undefined2 *puVar7;
  undefined2 *local_38;
  int local_30;
  
  puVar7 = (undefined2 *)0x0;
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 6));
  puVar5 = local_38;
  if (*(char *)(param_1 + 5) != '\0') {
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 2));
    local_30 = *(int *)(param_1 + 1);
    lVar4 = (longlong)local_30;
    _Src = (void *)*param_1;
    local_38 = (undefined2 *)0x0;
    puVar5 = puVar7;
    if (local_30 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,local_30,0);
      puVar5 = local_38;
      _guard_xfg_dispatch_icall_nop(local_38,_Src,lVar4 * 2);
    }
    iVar1 = local_30;
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 2));
    puVar2 = &DAT_143f3eda8;
    puVar3 = &DAT_143f3eda8;
    if (iVar1 != 0) {
      puVar3 = puVar5;
    }
    if (*(int *)(param_1 + 4) != 0) {
      puVar2 = (undefined2 *)param_1[3];
    }
    puVar7 = (undefined2 *)0x1;
    iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar2,puVar3);
    if (iVar1 != 0) {
      uVar6 = 1;
      goto LAB_140eeaf27;
    }
  }
  uVar6 = 0;
LAB_140eeaf27:
  if ((puVar7 != (undefined2 *)0x0) && (puVar5 != (undefined2 *)0x0)) {
    FMemory::Free(puVar5);
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 6));
  return uVar6;
}



// FUNCTION 140eeaf60 FUN_140eeaf60 body=924 status=ok
// SIG undefined FUN_140eeaf60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140eeaf60(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 auStack_e8 [32];
  longlong **local_c8;
  longlong *local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  longlong local_98;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  if (*(longlong *)(param_1 + 0x6a0) != 0) {
    local_c8 = &local_b8;
    uVar5 = 0;
    local_b8 = (longlong *)0x0;
    local_b0 = 0;
    local_98 = param_1;
    uVar2 = FUN_140ecc430(*(longlong *)(param_1 + 0x6a0),param_1 + 0x6b8,0,6);
    plVar1 = (longlong *)(param_1 + 0x680);
    iVar6 = *(int *)(param_1 + 0x688);
    *(int *)(param_1 + 0x688) = iVar6 + 1;
    if (*(int *)(param_1 + 0x68c) < iVar6 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar6);
    }
    *(undefined8 *)(*plVar1 + (longlong)iVar6 * 8) = uVar2;
    plVar7 = local_b8;
    for (iVar6 = (int)local_b0; iVar6 != 0; iVar6 = iVar6 + -1) {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 2;
    }
    if (local_b8 != (longlong *)0x0) {
      FMemory::Free(local_b8);
    }
    local_c8 = &local_b8;
    local_b8 = (longlong *)0x0;
    local_b0 = 0;
    uVar2 = FUN_140ecc430(*(undefined8 *)(param_1 + 0x6a0),param_1 + 0x6c8,0,6);
    iVar6 = *(int *)(param_1 + 0x688);
    *(int *)(param_1 + 0x688) = iVar6 + 1;
    if (*(int *)(param_1 + 0x68c) < iVar6 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar6);
    }
    *(undefined8 *)(*plVar1 + (longlong)iVar6 * 8) = uVar2;
    plVar7 = local_b8;
    for (iVar6 = (int)local_b0; iVar6 != 0; iVar6 = iVar6 + -1) {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 2;
    }
    if (local_b8 != (longlong *)0x0) {
      FMemory::Free(local_b8);
    }
    local_c8 = &local_b8;
    local_b8 = (longlong *)0x0;
    local_b0 = 0;
    uVar2 = FUN_140ecc430(*(undefined8 *)(param_1 + 0x6a0),param_1 + 0x6d8,0,6);
    iVar6 = *(int *)(param_1 + 0x688);
    *(int *)(param_1 + 0x688) = iVar6 + 1;
    if (*(int *)(param_1 + 0x68c) < iVar6 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar6);
    }
    *(undefined8 *)(*plVar1 + (longlong)iVar6 * 8) = uVar2;
    plVar7 = local_b8;
    for (iVar6 = (int)local_b0; iVar6 != 0; iVar6 = iVar6 + -1) {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 2;
    }
    if (local_b8 != (longlong *)0x0) {
      FMemory::Free(local_b8);
    }
    iVar6 = *(int *)(param_1 + 0x688);
    uVar9 = uVar5;
    if (0 < iVar6) {
      do {
        if ((-1 < (longlong)uVar9) && ((int)uVar5 < iVar6)) {
          local_a8 = 0;
          local_a0 = 5;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
          local_c8 = (longlong **)CONCAT62(local_c8._2_6_,0x3f);
          FGenericPlatformString::Convert<char,wchar_t>(local_a8,5,&DAT_1445f20d4);
          local_c8 = &local_b8;
          local_b8 = (longlong *)0x0;
          local_b0 = 0;
          lVar3 = FUN_140ecbdf0(*(undefined8 *)(*plVar1 + uVar9 * 8),&local_a8,0,6);
          plVar7 = local_b8;
          for (iVar6 = (int)local_b0; iVar6 != 0; iVar6 = iVar6 + -1) {
            if (*plVar7 != 0) {
              FMemory::Free();
            }
            plVar7 = plVar7 + 2;
          }
          if (local_b8 != (longlong *)0x0) {
            FMemory::Free(local_b8);
          }
          if (local_a8 != 0) {
            FMemory::Free();
          }
          if (lVar3 != 0) {
            local_58 = (longlong *)0x0;
            local_48 = 0;
            puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_78);
            if (puVar4 != (undefined8 *)0x0) {
              *puVar4 = &PTR_FUN_143f3f130;
            }
            local_88 = FUN_140ee0d20;
            FUN_140f02bb0(lVar3);
            if (local_48 != 0) {
              plVar7 = local_78;
              if (local_58 != (longlong *)0x0) {
                plVar7 = local_58;
              }
              if (plVar7 != (longlong *)0x0) {
                (**(code **)(*plVar7 + 0x10))(plVar7);
              }
            }
            if (local_58 != (longlong *)0x0) {
              FMemory::Free();
            }
          }
        }
        uVar8 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar8;
        iVar6 = *(int *)(local_98 + 0x688);
        uVar9 = uVar9 + 1;
      } while ((int)uVar8 < iVar6);
    }
  }
  return;
}



// FUNCTION 140eeb300 FUN_140eeb300 body=25 status=ok
// SIG undefined FUN_140eeb300(void)

void FUN_140eeb300(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x790);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140eeb311. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x278))(plVar1,0);
    return;
  }
  return;
}



// FUNCTION 140eeb320 FUN_140eeb320 body=144 status=ok
// SIG undefined FUN_140eeb320(void)

void FUN_140eeb320(longlong *param_1)

{
  longlong *plVar1;
  longlong local_18 [2];
  
  if (*(char *)((longlong)param_1 + 0x664) != '\0') {
    plVar1 = param_1 + 0xcc;
    *(int *)plVar1 = (int)*plVar1 + -1;
    *(undefined1 *)((longlong)param_1 + 0x664) = 0;
    if ((int)*plVar1 == 0) {
      (**(code **)(*param_1 + 0x580))(param_1,1);
    }
    if (param_1[200] != 0) {
      local_18[1] = 5;
      local_18[0] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      FGenericPlatformString::Memcpy(local_18[0],L"hide",10);
      FUN_142088910(param_1[200],local_18);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140eeb3b0 FUN_140eeb3b0 body=1232 status=ok
// SIG undefined FUN_140eeb3b0(void)

void FUN_140eeb3b0(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  longlong local_d8;
  longlong *local_d0;
  longlong local_c8;
  longlong *plStack_c0;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  lVar8 = 0;
  bVar9 = param_2 == 0;
  if (bVar9) {
    plVar5 = &local_c8;
    local_c8 = 0;
    plStack_c0 = (longlong *)0x0;
  }
  else {
    plVar5 = (longlong *)FUN_142085870(param_2,local_b8,L"rewardWinNotification");
    lVar8 = *plVar5;
  }
  plVar3 = (longlong *)plVar5[1];
  plVar5[1] = 0;
  *plVar5 = 0;
  plVar5 = plStack_c0;
  if (bVar9) {
    if (plStack_c0 != (longlong *)0x0) {
      LOCK();
      plVar7 = plStack_c0 + 1;
      lVar4 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_c0)(plStack_c0);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plStack_c0 + 8))(plStack_c0,1);
        }
      }
    }
  }
  if ((!bVar9) && (local_b0 != (longlong *)0x0)) {
    LOCK();
    plVar5 = local_b0 + 1;
    lVar4 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar1 = (int *)((longlong)local_b0 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_b0 + 8))(local_b0,1);
      }
    }
  }
  if (lVar8 != 0) {
    *param_1 = lVar8;
    plVar5 = (longlong *)param_1[1];
    if (plVar3 != plVar5) {
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
        UNLOCK();
        plVar5 = (longlong *)param_1[1];
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
      param_1[1] = (longlong)plVar3;
    }
    uVar6 = FUN_1420392d0(lVar8,local_a8,L"winText");
    FUN_142ede260(param_1 + 2,uVar6);
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_a0 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
    uVar6 = FUN_1420392d0(lVar8,local_98,L"winTextShadow");
    FUN_142ede260(param_1 + 5,uVar6);
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_90 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar1 = (int *)((longlong)local_90 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_90 + 8))(local_90,1);
        }
      }
    }
    uVar6 = FUN_1420392d0(lVar8,local_88,L"winTextYellow");
    FUN_142ede260(param_1 + 8,uVar6);
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_80 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)local_80 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    uVar6 = FUN_1420392d0(lVar8,local_78,L"playerNameText");
    FUN_142ede260(param_1 + 0xb,uVar6);
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_70 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
    uVar6 = FUN_1420392d0(lVar8,local_68,L"rewardTextShadow");
    FUN_142ede260(param_1 + 0x19,uVar6);
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_60 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
    FUN_1420392d0(lVar8,&local_d8,L"rewardText");
    plVar5 = local_d0;
    if (local_d8 != 0) {
      param_1[0xe] = local_d8;
      plVar7 = (longlong *)param_1[0xf];
      if (local_d0 != plVar7) {
        if (local_d0 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)local_d0 + 0xc) = *(int *)((longlong)local_d0 + 0xc) + 1;
          UNLOCK();
          plVar7 = (longlong *)param_1[0xf];
        }
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
        param_1[0xf] = (longlong)plVar5;
      }
      uVar6 = FUN_1420392d0(local_d8,local_58,L"rewardItemNameRarity");
      FUN_142ede260(param_1 + 0x10,uVar6);
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_50 + 1;
        lVar8 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar1 = (int *)((longlong)local_50 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_50 + 8))(local_50,1);
          }
        }
      }
      uVar6 = FUN_1420392d0(local_d8,local_48,L"rewardItemName");
      FUN_142ede260(param_1 + 0x13,uVar6);
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_40 + 1;
        lVar8 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
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
      uVar6 = FUN_1420392d0(local_d8,local_38,L"rewardDescriptionText");
      FUN_142ede260(param_1 + 0x16,uVar6);
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_30 + 1;
        lVar8 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
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
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_d0 + 1;
      lVar8 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
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
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar3 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return;
}



// FUNCTION 140eeb880 FUN_140eeb880 body=1649 status=ok
// SIG undefined FUN_140eeb880(void)

void FUN_140eeb880(longlong param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  int iVar13;
  undefined1 local_res8 [8];
  undefined8 *in_stack_ffffffffffffff68;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38 [2];
  
  if (*(char *)(param_1 + 0x180) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x180) = 1;
  FString::operator=(param_1 + 0x48);
  *(undefined1 *)(param_1 + 0x58) = *(undefined1 *)(param_2 + 0x10);
  *(undefined1 *)(param_1 + 0x59) = *(undefined1 *)(param_2 + 0x11);
  *(undefined1 *)(param_1 + 0x5a) = *(undefined1 *)(param_2 + 0x12);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined1 *)(param_1 + 0x68) = *(undefined1 *)(param_2 + 0x20);
  FString::operator=(param_1 + 0x70,param_2 + 0x28);
  *(undefined1 *)(param_1 + 0x80) = *(undefined1 *)(param_2 + 0x38);
  *(undefined1 *)(param_1 + 0x81) = *(undefined1 *)(param_2 + 0x39);
  *(undefined1 *)(param_1 + 0x82) = *(undefined1 *)(param_2 + 0x3a);
  *(undefined1 *)(param_1 + 0x83) = *(undefined1 *)(param_2 + 0x3b);
  FString::operator=(param_1 + 0x88,param_2 + 0x40);
  FString::operator=(param_1 + 0x98,param_2 + 0x50);
  FString::operator=(param_1 + 0xa8,param_2 + 0x60);
  *(undefined1 *)(param_1 + 0xb8) = *(undefined1 *)(param_2 + 0x70);
  *(undefined1 *)(param_1 + 0xb9) = *(undefined1 *)(param_2 + 0x71);
  *(undefined1 *)(param_1 + 0xba) = *(undefined1 *)(param_2 + 0x72);
  *(undefined8 *)(param_1 + 0xbc) = *(undefined8 *)(param_2 + 0x74);
  *(undefined1 *)(param_1 + 0xc4) = *(undefined1 *)(param_2 + 0x7c);
  *(undefined1 *)(param_1 + 0xc5) = *(undefined1 *)(param_2 + 0x7d);
  *(undefined1 *)(param_1 + 0xc6) = *(undefined1 *)(param_2 + 0x7e);
  *(undefined1 *)(param_1 + 199) = *(undefined1 *)(param_2 + 0x7f);
  *(undefined1 *)(param_1 + 200) = *(undefined1 *)(param_2 + 0x80);
  *(undefined1 *)(param_1 + 0xc9) = *(undefined1 *)(param_2 + 0x81);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_2 + 0x90);
  *(undefined1 *)(param_1 + 0xe0) = *(undefined1 *)(param_2 + 0x98);
  *(undefined1 *)(param_1 + 0xe1) = *(undefined1 *)(param_2 + 0x99);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_2 + 0xa4);
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0xa8);
  *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_2 + 0xac);
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_2 + 0xb0);
  FString::operator=(param_1 + 0x100,param_2 + 0xb8);
  FString::operator=(param_1 + 0x110,param_2 + 200);
  *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_2 + 0xd8);
  FText::operator=(param_1 + 0x128,param_2 + 0xe0);
  *(undefined1 *)(param_1 + 0x140) = *(undefined1 *)(param_2 + 0xf8);
  *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_2 + 0xfc);
  *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_2 + 0x100);
  *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_2 + 0x104);
  *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_2 + 0x108);
  *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(param_2 + 0x10c);
  *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_2 + 0x110);
  FWeakObjectPtr::operator=(param_1 + 0x30,param_3);
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x144);
  uVar9 = 0;
  if (cVar3 == '\0') {
LAB_140eebb47:
    uVar5 = uVar9;
  }
  else {
    lVar4 = FWeakObjectPtr::Get(param_1 + 0x144);
    uVar5 = (**(code **)(*(longlong *)(lVar4 + 0x980) + 0x10))();
    if (uVar5 == 0) goto LAB_140eebb47;
    lVar4 = FUN_1414d9130();
    if ((*(int *)(*(longlong *)(uVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_140eebb47;
  }
  FWeakObjectPtr::operator=(param_1 + 0x3c,uVar5);
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x30);
  if ((cVar3 != '\0') && (cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x3c), cVar3 != '\0')) {
    lVar4 = FWeakObjectPtr::Get(param_1 + 0x3c);
    uStack_60 = *(undefined8 *)(lVar4 + 0xb80);
    local_58 = *(undefined8 *)(lVar4 + 0xb88);
    local_68 = (longlong *)CONCAT44(*(undefined4 *)(param_1 + 0xec),*(undefined4 *)(lVar4 + 0xb78));
    uVar6 = FWeakObjectPtr::Get(param_1 + 0x30);
    FUN_1411f9620(uVar6,&local_68);
  }
  FUN_140ebe6a0(param_1 + 0x160,0);
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x154);
  if (cVar3 == '\0') {
    cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x14c);
    if (cVar3 != '\0') {
      local_68 = (longlong *)0x0;
      uStack_60 = 0;
      uVar6 = FWeakObjectPtr::Get(param_1 + 0x14c);
      in_stack_ffffffffffffff68 = &local_68;
      uVar6 = FUN_140ecb410(uVar6,param_1 + 0x48,0,6,in_stack_ffffffffffffff68);
      *(undefined8 *)(param_1 + 0x170) = uVar6;
      plVar11 = local_68;
      for (iVar13 = (int)uStack_60; iVar13 != 0; iVar13 = iVar13 + -1) {
        if (*plVar11 != 0) {
          FMemory::Free();
        }
        plVar11 = plVar11 + 2;
      }
      goto LAB_140eebcab;
    }
  }
  else {
    local_68 = (longlong *)0x0;
    uStack_60 = 0;
    uVar6 = FWeakObjectPtr::Get(param_1 + 0x154);
    in_stack_ffffffffffffff68 = &local_68;
    uVar6 = FUN_140ecb6b0(uVar6,param_1 + 0x48,0,6,in_stack_ffffffffffffff68);
    *(undefined8 *)(param_1 + 0x170) = uVar6;
    plVar11 = local_68;
    for (iVar13 = (int)uStack_60; iVar13 != 0; iVar13 = iVar13 + -1) {
      if (*plVar11 != 0) {
        FMemory::Free();
      }
      plVar11 = plVar11 + 2;
    }
LAB_140eebcab:
    if (local_68 != (longlong *)0x0) {
      FMemory::Free(local_68);
    }
  }
  uVar5 = FWeakObjectPtr::Get(param_1 + 0x14c);
  if (uVar5 != 0) {
    lVar4 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(uVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_140eebd05;
  }
  uVar5 = uVar9;
LAB_140eebd05:
  if ((*(longlong *)(param_1 + 0x170) != 0) &&
     (FUN_142ed2840(*(longlong *)(param_1 + 0x170),param_1 + 0x58), uVar5 != 0)) {
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    local_38[0] = 0;
    FWeakObjectPtr::operator=(&local_50,0);
    FWeakObjectPtr::operator=(&local_48,0);
    FWeakObjectPtr::operator=(&local_40,0);
    FWeakObjectPtr::operator=(local_38,0);
    uVar6 = TScriptInterface<IBlendableInterface>::
            TScriptInterface<IBlendableInterface><UMaterialInterface>
                      (&local_68,*(undefined8 *)(param_1 + 0x170));
    FUN_142ecfd10(uVar5,uVar6,&local_50);
  }
  FUN_14172a070(local_res8,0);
  uVar6 = GetTransientPackage();
  FUN_1417846f0(uVar6,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar7 = ULowEntryLatentActionObject::GetPrivateStaticClass();
  uVar6 = FUN_1417985e0(uVar7,uVar6,0,0,(ulonglong)in_stack_ffffffffffffff68 & 0xffffffff00000000,0,
                        0,0,0);
  *(undefined8 *)(param_1 + 0x178) = uVar6;
  FUN_14172a400(local_res8);
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FUN_140eec080(*(longlong *)(param_1 + 0x178),param_1);
  }
  if ((*(int *)(param_1 + 0xf8) != 0) && (*(longlong *)(param_1 + 0x170) != 0)) {
    cVar3 = FUN_140f11ee0();
    if (cVar3 == '\0') {
      uVar5 = uVar9;
      if (0 < *(int *)(param_1 + 0xf8)) {
        do {
          uVar12 = uVar9;
          if (*(longlong *)(param_1 + 0x120) != 0) {
            uVar8 = FUN_141324a80();
            for (uVar1 = *(ulonglong *)(param_1 + 0x120);
                (uVar12 = uVar9, uVar1 != 0 &&
                (uVar12 = *(ulonglong *)(param_1 + 0x120), uVar1 != uVar8));
                uVar1 = *(ulonglong *)(uVar1 + 0x30)) {
            }
          }
          FUN_142ebcee0(*(undefined8 *)(param_1 + 0x170),param_1 + 0x100,uVar12,1);
          uVar10 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar10;
        } while ((int)uVar10 < *(int *)(param_1 + 0xf8));
      }
      FUN_142ecffe0(*(undefined8 *)(param_1 + 0x170));
    }
    else {
      uVar5 = uVar9;
      if (0 < *(int *)(param_1 + 0xf8)) {
        do {
          uVar12 = uVar9;
          if (*(longlong *)(param_1 + 0x120) != 0) {
            uVar8 = FUN_141324a80();
            for (uVar1 = *(ulonglong *)(param_1 + 0x120);
                (uVar12 = uVar9, uVar1 != 0 &&
                (uVar12 = *(ulonglong *)(param_1 + 0x120), uVar1 != uVar8));
                uVar1 = *(ulonglong *)(uVar1 + 0x30)) {
            }
          }
          FUN_142ebd5b0(*(undefined8 *)(param_1 + 0x170),param_1 + 0x100,uVar12);
          uVar10 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar10;
        } while ((int)uVar10 < *(int *)(param_1 + 0xf8));
      }
      FUN_142ed0540(*(undefined8 *)(param_1 + 0x170));
    }
  }
  return;
}



// FUNCTION 140eebf00 FUN_140eebf00 body=380 status=ok
// SIG undefined FUN_140eebf00(void)

void FUN_140eebf00(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  void *_Src;
  undefined4 uVar3;
  void **ppvVar4;
  void *local_18;
  ulonglong local_10;
  
  FUN_1410140d0(param_1[0xc9]);
  uVar3 = FUN_140ff69b0(param_1[0xc9]);
  *(undefined4 *)((longlong)param_1 + 0x69c) = uVar3;
  (**(code **)(*param_1 + 0x578))(param_1,1);
  local_10 = 3;
  local_18 = (void *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18,3,&DAT_1445eee6c,3,0x3f);
  FUN_142088cf0(param_1[0xc9],&local_18);
  if (local_18 != (void *)0x0) {
    FMemory::Free();
  }
  if (param_1[0xd4] == 0) goto LAB_140eec065;
  iVar1 = *(int *)((longlong)param_1 + 0x69c);
  local_18 = (void *)0x0;
  local_10 = 0;
  if (iVar1 == 1) {
    ppvVar4 = (void **)(param_1 + 0xdd);
LAB_140eebfe3:
    if (&local_18 != ppvVar4) {
      uVar2 = *(uint *)(ppvVar4 + 1);
      _Src = *ppvVar4;
      local_10 = (ulonglong)uVar2;
      if (uVar2 != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_18,uVar2,0);
        _guard_xfg_dispatch_icall_nop(local_18,_Src,(longlong)(int)uVar2 * 2);
      }
    }
  }
  else {
    if (iVar1 == 2) {
      ppvVar4 = (void **)(param_1 + 0xdf);
      goto LAB_140eebfe3;
    }
    if (iVar1 == 3) {
      ppvVar4 = (void **)(param_1 + 0xe1);
      goto LAB_140eebfe3;
    }
  }
  FUN_142088910(param_1[0xd4],&local_18);
  uVar3 = FUN_140ff6390(param_1[0xc9]);
  FUN_140ff48d0(param_1[0xc9],uVar3);
  *(undefined1 *)(param_1[0xc9] + 0x324) = 1;
  if (local_18 != (void *)0x0) {
    FMemory::Free();
  }
LAB_140eec065:
  *(undefined1 *)((longlong)param_1 + 0x699) = 1;
  return;
}



// FUNCTION 140eec080 FUN_140eec080 body=1014 status=ok
// SIG undefined FUN_140eec080(void)

void FUN_140eec080(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  wchar_t *pwVar3;
  char cVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  int *piVar9;
  int *piVar10;
  wchar_t *pwVar11;
  undefined8 local_res8;
  longlong local_res10;
  int local_48;
  int local_44;
  longlong local_40;
  
  *(longlong *)(param_1 + 0x28) = param_2;
  if (param_2 != 0) {
    FWeakObjectPtr::operator=(param_1 + 0x30,*(undefined8 *)(param_2 + 0x170));
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x30);
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x34);
  }
  cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x30);
  pwVar11 = (wchar_t *)0x0;
  if (cVar4 != '\0') {
    pwVar5 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnBackpackGridItemSelected",L"::");
    pwVar8 = pwVar11;
    while (pwVar3 = pwVar5, pwVar3 != (wchar_t *)0x0) {
      pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar8 = pwVar3;
    }
    FName::FName(&local_res10,pwVar8 + 2,1);
    lVar6 = FWeakObjectPtr::Get(param_1 + 0x30);
    lVar7 = local_res10;
    plVar1 = (longlong *)(lVar6 + 0x180);
    FWeakObjectPtr::operator=(&local_48,0);
    local_40 = 0;
    FWeakObjectPtr::operator=(&local_48,param_1);
    local_40 = lVar7;
    local_res8 = 0;
    if ((lVar7 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_48), lVar7 != 0)) {
      UObject::FindFunction(lVar7,local_40);
    }
    piVar9 = (int *)*plVar1;
    iVar2 = *(int *)(lVar6 + 0x188);
    for (piVar10 = piVar9; piVar10 != piVar9 + (longlong)iVar2 * 4; piVar10 = piVar10 + 4) {
      if ((((*piVar10 == local_48) && (piVar10[1] == local_44)) ||
          ((cVar4 = FWeakObjectPtr::IsValid(piVar10), cVar4 == '\0' &&
           (cVar4 = FWeakObjectPtr::IsValid(&local_48), cVar4 == '\0')))) &&
         (*(longlong *)(piVar10 + 2) == local_40)) {
        if ((int)((longlong)piVar10 - (longlong)piVar9 >> 4) != -1) goto LAB_140eec21f;
        break;
      }
    }
    iVar2 = *(int *)(lVar6 + 0x188);
    *(int *)(lVar6 + 0x188) = iVar2 + 1;
    if (*(int *)(lVar6 + 0x18c) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    piVar9 = (int *)((longlong)iVar2 * 0x10 + *plVar1);
    *piVar9 = local_48;
    piVar9[1] = local_44;
    *(longlong *)(piVar9 + 2) = local_40;
LAB_140eec21f:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
    pwVar5 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnBackpackGridItemClicked",L"::");
    pwVar8 = pwVar11;
    while (pwVar3 = pwVar5, pwVar3 != (wchar_t *)0x0) {
      pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar8 = pwVar3;
    }
    FName::FName(&local_res8,pwVar8 + 2,1);
    lVar7 = FWeakObjectPtr::Get(param_1 + 0x30);
    FUN_14074ba20(lVar7 + 0x1a8,param_1,FUN_140eee040,local_res8);
    pwVar5 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnBackpackGridItemPressed",L"::");
    pwVar8 = pwVar11;
    while (pwVar3 = pwVar5, pwVar3 != (wchar_t *)0x0) {
      pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar8 = pwVar3;
    }
    FName::FName(&local_res8,pwVar8 + 2,1);
    lVar7 = FWeakObjectPtr::Get(param_1 + 0x30);
    FUN_14074ba20(lVar7 + 400,param_1,FUN_140eee080,local_res8);
  }
  cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x38);
  if (cVar4 != '\0') {
    pwVar8 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnThumbnailLoaded",L"::");
    while (pwVar5 = pwVar8, pwVar5 != (wchar_t *)0x0) {
      pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
      pwVar11 = pwVar5;
    }
    FName::FName(&local_res10,pwVar11 + 2,1);
    lVar7 = FWeakObjectPtr::Get(param_1 + 0x38);
    plVar1 = (longlong *)(lVar7 + 0xe8);
    FWeakObjectPtr::operator=(&local_48,0);
    local_40 = 0;
    FWeakObjectPtr::operator=(&local_48,param_1);
    local_40 = local_res10;
    local_res8 = 0;
    if ((local_res10 != 0) && (lVar6 = FWeakObjectPtr::Get(&local_48), lVar6 != 0)) {
      UObject::FindFunction(lVar6,local_40);
    }
    piVar9 = (int *)*plVar1;
    iVar2 = *(int *)(lVar7 + 0xf0);
    for (piVar10 = piVar9; piVar10 != piVar9 + (longlong)iVar2 * 4; piVar10 = piVar10 + 4) {
      if ((((*piVar10 == local_48) && (piVar10[1] == local_44)) ||
          ((cVar4 = FWeakObjectPtr::IsValid(piVar10), cVar4 == '\0' &&
           (cVar4 = FWeakObjectPtr::IsValid(&local_48), cVar4 == '\0')))) &&
         (*(longlong *)(piVar10 + 2) == local_40)) {
        if ((int)((longlong)piVar10 - (longlong)piVar9 >> 4) != -1) goto LAB_140eec456;
        break;
      }
    }
    iVar2 = *(int *)(lVar7 + 0xf0);
    *(int *)(lVar7 + 0xf0) = iVar2 + 1;
    if (*(int *)(lVar7 + 0xf4) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    piVar9 = (int *)((longlong)iVar2 * 0x10 + *plVar1);
    *piVar9 = local_48;
    piVar9[1] = local_44;
    *(longlong *)(piVar9 + 2) = local_40;
LAB_140eec456:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
  }
  return;
}



// FUNCTION 140eec480 FUN_140eec480 body=416 status=ok
// SIG undefined FUN_140eec480(void)

void FUN_140eec480(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  int local_res8 [2];
  undefined8 local_res10;
  longlong local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_28;
  
  local_40 = &local_res10;
  plVar7 = (longlong *)(param_1 + 0x648);
  lVar8 = *plVar7;
  lVar1 = lVar8 + (longlong)*(int *)(param_1 + 0x650) * 0x18;
  do {
    local_res10 = param_2;
    local_48 = param_1;
    if (lVar8 == lVar1) {
      local_30 = 0xffffffff;
      local_38 = 0;
      local_2c = 0;
      local_28 = 0;
      FUN_140ed9470(&local_48,&local_38);
      iVar4 = *(int *)(param_1 + 0x650);
      *(int *)(param_1 + 0x650) = iVar4 + 1;
      if (*(int *)(param_1 + 0x654) < iVar4 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(plVar7,iVar4);
      }
      puVar2 = (undefined8 *)(*plVar7 + (longlong)iVar4 * 0x18);
      *puVar2 = local_38;
      *(undefined4 *)(puVar2 + 1) = local_30;
      *(undefined4 *)((longlong)puVar2 + 0xc) = local_2c;
      *(undefined1 *)(puVar2 + 2) = local_28;
LAB_140eec53c:
      plVar7 = (longlong *)*plVar7;
      plVar3 = plVar7 + (longlong)*(int *)(param_1 + 0x650) * 3;
      for (; plVar7 != plVar3; plVar7 = plVar7 + 3) {
        if (((((char)plVar7[2] != '\0') && (*plVar7 != 0)) &&
            (cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x5d8), cVar5 != '\0')) &&
           (*(longlong *)(*plVar7 + 0x170) != 0)) {
          local_res8[0] = -1;
          uVar6 = FWeakObjectPtr::Get(param_1 + 0x5d8);
          cVar5 = FUN_142710360(uVar6,local_res8);
          if (cVar5 == '\0') {
            *(undefined1 *)(*(longlong *)(*plVar7 + 0x170) + 0x23e) = 0;
            *(undefined1 *)(*(longlong *)(*plVar7 + 0x170) + 0x23d) = 0;
          }
          else {
            *(undefined1 *)(*(longlong *)(*plVar7 + 0x170) + 0x23e) = 1;
            *(bool *)(*(longlong *)(*plVar7 + 0x170) + 0x23d) = local_res8[0] != 0;
          }
        }
      }
      return;
    }
    if (*(char *)(lVar8 + 0x10) == '\0') {
      FUN_140ed9470(&local_48,lVar8);
      goto LAB_140eec53c;
    }
    lVar8 = lVar8 + 0x18;
  } while( true );
}



// FUNCTION 140eec620 FUN_140eec620 body=512 status=ok
// SIG undefined FUN_140eec620(void)

undefined8 FUN_140eec620(undefined8 param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 uVar11;
  undefined1 local_res10 [8];
  longlong *local_48;
  int local_40;
  undefined4 local_3c;
  
  uVar11 = 0;
  plVar1 = (longlong *)FUN_140eccca0();
  if (plVar1 != (longlong *)0x0) {
    uVar2 = AGFireballProjectile::GetPrivateStaticClass();
    lVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
    if (lVar3 != 0) {
      plVar8 = (longlong *)0x0;
      local_48 = (longlong *)0x0;
      local_3c = 0;
      plVar1 = plVar8;
      iVar7 = 0;
      if (&local_48 != (longlong **)(lVar3 + 0x550)) {
        iVar7 = *(int *)(lVar3 + 0x558);
        plVar9 = *(longlong **)(lVar3 + 0x550);
        plVar1 = (longlong *)0x0;
        local_40 = iVar7;
        if (iVar7 != 0) {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_48,iVar7,0);
          plVar1 = local_48;
          _guard_xfg_dispatch_icall_nop(local_48,plVar9,(longlong)iVar7 << 3);
          iVar7 = local_40;
        }
      }
      plVar9 = (longlong *)((longlong)iVar7 & 0x1fffffffffffffff);
      if (plVar1 + iVar7 < plVar1) {
        plVar9 = plVar8;
      }
      plVar10 = plVar1;
      if (plVar9 != (longlong *)0x0) {
        do {
          lVar3 = *plVar1;
          if (lVar3 != 0) {
            if (*(char *)(lVar3 + 0xa1) == '\x02') {
              plVar10 = (longlong *)(lVar3 + 0x28);
              plVar4 = (longlong *)FMemory::Realloc(0,0x30);
              if (plVar4 != (longlong *)0x0) {
                *plVar4 = (longlong)&PTR_FUN_143f4d290;
                FWeakObjectPtr::operator=(plVar4 + 1,param_1);
                plVar4[2] = (longlong)FUN_140ee7d20;
                lVar5 = FDelegateHandle::GenerateNewID();
                plVar4[4] = lVar5;
                *plVar4 = (longlong)&PTR_FUN_143f4d2d8;
                FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar10,1);
                (**(code **)(*plVar4 + 0x20))(plVar4,local_res10);
                iVar7 = *(int *)(lVar3 + 0x30);
                *(int *)(lVar3 + 0x30) = iVar7 + 1;
                if (*(int *)(lVar3 + 0x34) < iVar7 + 1) {
                  TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar7);
                }
                puVar6 = (undefined8 *)((longlong)iVar7 * 0x10 + *plVar10);
                *puVar6 = plVar4;
                *(undefined4 *)(puVar6 + 1) = 3;
              }
            }
            else {
              uVar11 = 1;
            }
          }
          plVar1 = plVar1 + 1;
          plVar8 = (longlong *)((longlong)plVar8 + 1);
          plVar10 = local_48;
        } while (plVar8 != plVar9);
      }
      if (plVar10 != (longlong *)0x0) {
        FMemory::Free(plVar10);
      }
      return uVar11;
    }
  }
  return 0;
}



// FUNCTION 140eec820 FUN_140eec820 body=24 status=ok
// SIG undefined FUN_140eec820(void)

undefined1 FUN_140eec820(longlong param_1)

{
  if ((*(char *)(param_1 + 0x2a8) == '\0') && (*(char *)(param_1 + 0x29c) == '\0')) {
    return 0;
  }
  return 1;
}



// FUNCTION 140eec840 FUN_140eec840 body=47 status=ok
// SIG undefined FUN_140eec840(void)

undefined8 FUN_140eec840(longlong param_1)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x170) != 0) {
    cVar1 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x170) + 0x170) + 0x40))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140eec870 IsWidgetInViewport body=13 status=ok
// SIG undefined IsWidgetInViewport(void)

undefined1 UTTLUIFunctionLibrary::IsWidgetInViewport(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = FUN_140ad08c0();
  return uVar1;
}



// FUNCTION 140eec880 FUN_140eec880 body=47 status=ok
// SIG undefined FUN_140eec880(void)

undefined8 FUN_140eec880(longlong param_1)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x170) != 0) {
    cVar1 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x170) + 0x170) + 0x48))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140eec8b0 FUN_140eec8b0 body=129 status=ok
// SIG undefined FUN_140eec8b0(void)

undefined8 FUN_140eec8b0(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = (**(code **)(*param_1 + 0x148))();
  if (lVar3 != 0) {
    lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar3 = *(longlong *)(lVar3 + 400);
    if (lVar3 != 0) {
      lVar4 = FUN_14141f270();
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
        cVar2 = FUN_140bca8a0(lVar3);
        if (cVar2 != '\0') {
          return 0;
        }
      }
    }
  }
  return 1;
}



// FUNCTION 140eec940 FUN_140eec940 body=37 status=ok
// SIG undefined FUN_140eec940(void)

ulonglong FUN_140eec940(longlong *param_1)

{
  ulonglong in_RAX;
  undefined8 uVar1;
  ulonglong uVar2;
  
  if (param_1 == (longlong *)0x0) {
    return in_RAX & 0xffffffffffffff00;
  }
  uVar1 = (**(code **)(*param_1 + 0x148))();
  uVar2 = FUN_140adac00(uVar1);
  return uVar2;
}



// FUNCTION 140eec970 FUN_140eec970 body=199 status=ok
// SIG undefined FUN_140eec970(void)

uint FUN_140eec970(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  
  if ((*(longlong *)(param_1 + 0xbc8) != 0) && (cVar1 = FUN_140cb6290(), cVar1 != '\0')) {
    if (param_2 == *(longlong *)(param_1 + 0xf30)) {
      cVar1 = FUN_140fb3d70(*(undefined8 *)(param_1 + 0xbc8),param_1 + 0x9c8);
      if (cVar1 == '\0') goto LAB_140eeca11;
      uVar2 = FUN_1406ab3e0(*(undefined8 *)(param_1 + 0xbc8));
      bVar3 = uVar2 == *(uint *)(param_1 + 0x9b8);
    }
    else {
      if ((param_2 != *(longlong *)(param_1 + 0xf28)) ||
         (cVar1 = FUN_140fb3d70(*(undefined8 *)(param_1 + 0xbc8),param_1 + 0x9c8), cVar1 == '\0'))
      goto LAB_140eeca11;
      uVar2 = FUN_1406ab3e0(*(undefined8 *)(param_1 + 0xbc8));
      bVar3 = uVar2 == *(uint *)(param_1 + 0x9bc);
    }
    if (!bVar3) {
      return uVar2 & 0xffffff00;
    }
  }
LAB_140eeca11:
  uVar2 = FUN_14103ee60(param_1,param_2,param_3,param_4);
  return uVar2;
}



// FUNCTION 140eeca40 FUN_140eeca40 body=124 status=ok
// SIG undefined FUN_140eeca40(void)

ulonglong FUN_140eeca40(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  if ((*param_2 == DAT_1468722d8) &&
     (plVar1 = (longlong *)FUN_140e971d0(), plVar1 != (longlong *)0x0)) {
    uVar2 = (**(code **)(*plVar1 + 0x148))(plVar1);
    uVar3 = FUN_140adac00(uVar2);
    if ((char)uVar3 != '\0') {
      return uVar3 & 0xffffffffffffff00;
    }
  }
  if (param_2[7] != 0) {
    FUN_141340df0();
  }
  return (ulonglong)*(byte *)(param_2 + 10);
}



// FUNCTION 140eecac0 FUN_140eecac0 body=161 status=ok
// SIG undefined FUN_140eecac0(void)

ulonglong FUN_140eecac0(longlong param_1,ulonglong *param_2)

{
  bool bVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar3 = *(ulonglong *)(param_1 + 0x6b0);
  if (*param_2 != uVar3) {
    uVar3 = param_2[7];
    if (uVar3 != 0) {
      lVar2 = FUN_141340df0();
      if ((*(int *)(*(longlong *)(uVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(uVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
           ) != lVar2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) && (*(char *)(uVar3 + 0xc0) == '\0')) {
        uVar3 = FUN_140eec8b0(param_1);
        if ((char)uVar3 == '\0') goto LAB_140eecb4f;
      }
    }
    uVar3 = FUN_140eeca40(param_1,param_2);
    return uVar3;
  }
LAB_140eecb4f:
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 140eecb70 FUN_140eecb70 body=130 status=ok
// SIG undefined FUN_140eecb70(void)

void FUN_140eecb70(longlong param_1)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if ((*(longlong *)(param_1 + 0x558) != 0) &&
     (plVar2 = (longlong *)FUN_1420fc090(), plVar2 != (longlong *)0x0)) {
    lVar3 = FUN_14145f370();
    if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (lVar3 = (**(code **)(*plVar2 + 0xfa8))(plVar2), lVar3 != 0)) {
      FUN_142f02280(lVar3,*(undefined8 *)(param_1 + 0x558));
    }
  }
  return;
}



// FUNCTION 140eecc00 FUN_140eecc00 body=24 status=ok
// SIG undefined FUN_140eecc00(void)

void FUN_140eecc00(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x170) != 0) {
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x170) + 0x304) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 140eecc20 OnTargetUnavailable body=27 status=ok
// SIG undefined OnTargetUnavailable(void)

void ARemnantSpectatorPawn::OnTargetUnavailable(undefined8 param_1)

{
  FUN_140ee2770();
  FUN_140f07480(param_1);
  return;
}



// FUNCTION 140eecc40 FUN_140eecc40 body=289 status=ok
// SIG undefined FUN_140eecc40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140eecc40(undefined8 param_1,undefined8 param_2)

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
  local_b8[0] = &LAB_140ee0810;
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



// FUNCTION 140eecd70 FUN_140eecd70 body=95 status=ok
// SIG undefined FUN_140eecd70(void)

void FUN_140eecd70(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x5c8);
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
      FUN_140cbeca0(lVar2);
      return;
    }
  }
  return;
}



// FUNCTION 140eecdd0 FUN_140eecdd0 body=104 status=ok
// SIG undefined FUN_140eecdd0(void)

void FUN_140eecdd0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  undefined8 local_18;
  undefined8 local_10;
  
  lVar1 = *param_1;
  local_18 = 0;
  local_10 = 0;
  puVar2 = (undefined8 *)FName::FName(local_res8,L"Duel_Accept",1);
  (**(code **)(lVar1 + 0x4e8))(param_1,*puVar2,&local_18);
  FWeakObjectPtr::operator=(param_1 + 200,param_2);
  return;
}



// FUNCTION 140eece40 FUN_140eece40 body=123 status=ok
// SIG undefined FUN_140eece40(void)

void FUN_140eece40(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_28 [8];
  longlong *local_20;
  
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_28,L"Accepted Duel",L"GFxDuelingWidget",L"AcceptedDuel");
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



// FUNCTION 140eecec0 FUN_140eecec0 body=124 status=ok
// SIG undefined FUN_140eecec0(void)

void FUN_140eecec0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((*(longlong *)(param_1 + 0x760) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x760) + 0x10) != 0)) {
    if (param_2 != 0) {
      lVar1 = UUGLoadoutBarUW::GetPrivateStaticClass();
      lVar2 = param_2;
      do {
        if (lVar2 == lVar1) goto LAB_140eecf00;
        lVar2 = *(longlong *)(lVar2 + 0x30);
      } while (lVar2 != 0);
    }
    param_2 = 0;
LAB_140eecf00:
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x760) + 0x10);
    if (lVar2 != 0) {
      while (lVar2 != param_2) {
        lVar2 = *(longlong *)(lVar2 + 0x30);
        if (lVar2 == 0) {
          return;
        }
      }
      FUN_140f0b5d0(param_1);
    }
  }
  return;
}



// FUNCTION 140eecf40 FUN_140eecf40 body=203 status=ok
// SIG undefined FUN_140eecf40(void)

void FUN_140eecf40(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong local_18 [2];
  
  if (*(longlong *)(param_1 + 0x760) == param_2) {
    if ((*(longlong *)(param_1 + 0x690) != 0) && (*(longlong *)(param_1 + 0x698) != 0)) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x698) + 8);
      LOCK();
      iVar2 = *piVar1;
      if (iVar2 == 0) {
        *piVar1 = 0;
        iVar2 = 0;
      }
      UNLOCK();
      if (0 < iVar2) {
        uVar3 = FUN_1404b03b0();
        UMistDebugEntityScreen::InspectEntity(param_1 + 0x688,uVar3,1,0);
      }
    }
    if ((*(longlong *)(param_1 + 0x640) != 0) &&
       (*(int *)(*(longlong *)(param_1 + 0x760) + 0x200) == 0)) {
      local_18[0] = 0;
      local_18[1] = 10;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      FGenericPlatformString::Memcpy(local_18[0],L"activated",0x14);
      FUN_142088910(*(undefined8 *)(param_1 + 0x640),local_18);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140eed010 FUN_140eed010 body=36 status=ok
// SIG undefined FUN_140eed010(void)

void FUN_140eed010(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x760);
  if (lVar1 != param_2) {
    return;
  }
  if (lVar1 != 0) {
    FUN_140f0ad80(param_1,*(undefined4 *)(lVar1 + 0x200));
    return;
  }
  FUN_140f0ad80(param_1,0);
  return;
}



// FUNCTION 140eed040 FUN_140eed040 body=514 status=ok
// SIG undefined FUN_140eed040(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140eed040(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  undefined1 auStack_d8 [32];
  longlong local_b8 [3];
  undefined2 *local_a0;
  int local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong local_70 [2];
  undefined1 local_60 [24];
  undefined1 local_48 [8];
  longlong *local_40;
  char local_30;
  ulonglong local_28;
  
  if ((param_2 != 0) && (local_28 = DAT_1468387a8 ^ (ulonglong)auStack_d8, param_1[0xec] == param_2)
     ) {
    FUN_1409a7a40(param_2,local_48);
    lVar4 = FUN_140eccbe0(param_1);
    if ((lVar4 != 0) && (local_30 != '\0')) {
      uVar5 = FText::FText(local_60,local_48);
      FUN_140c70190(lVar4,uVar5);
    }
    if (param_1[0xcb] != 0) {
      local_b8[0] = 0;
      local_b8[1] = 3;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_b8,0);
      FGenericPlatformString::Memcpy(local_b8[0],&DAT_1445eeddc,6);
      FUN_142088910(param_1[0xcb],local_b8);
      if (local_b8[0] != 0) {
        FMemory::Free();
      }
    }
    lVar4 = FUN_140eccc40(param_1);
    if (*(longlong *)(lVar4 + 0xa58) != 0) {
      puVar6 = (undefined8 *)FName::ToString(*(longlong *)(lVar4 + 0xa58) + 0x88,local_70);
      if (*(int *)(puVar6 + 1) == 0) {
        puVar7 = &DAT_143f3eda8;
      }
      else {
        puVar7 = (undefined2 *)*puVar6;
      }
      FString::PrintfImpl(&local_a0,L"SkillFailed_VO_%s",puVar7);
      puVar7 = &DAT_143f3eda8;
      if (local_98 != 0) {
        puVar7 = local_a0;
      }
      FName::FName(local_b8 + 2,puVar7,1);
      param_1[0xf0] = local_b8[2];
      if (local_a0 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_70[0] != 0) {
        FMemory::Free();
      }
      local_90 = 0;
      local_88 = 0;
      (**(code **)(*param_1 + 0x4e8))(param_1,param_1[0xe9],&local_90);
      local_80 = 0;
      local_78 = 0;
      (**(code **)(*param_1 + 0x4e8))(param_1,param_1[0xf0],&local_80);
    }
    if ((local_30 != '\0') && (local_30 = 0, local_40 != (longlong *)0x0)) {
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
  }
  return;
}



// FUNCTION 140eed250 FUN_140eed250 body=334 status=ok
// SIG undefined FUN_140eed250(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140eed250(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
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
  FUN_142ebee70();
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[1] = param_1;
    *puVar3 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = &LAB_140ee0be0;
  uVar4 = FUN_1420849a0(param_1,local_68,local_b8);
  FUN_14208c260(param_1,uVar4);
  if (local_28 != 0) {
    plVar5 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar5 = local_38;
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
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
  if ((*(longlong *)(param_1 + 0x690) != 0) && (*(longlong *)(param_1 + 0x698) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x698) + 8);
    LOCK();
    iVar2 = *piVar1;
    if (iVar2 == 0) {
      *piVar1 = 0;
      iVar2 = 0;
    }
    UNLOCK();
    if (0 < iVar2) {
      uVar4 = FUN_1404b03b0();
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x688,uVar4,1,0);
    }
  }
  return;
}



// FUNCTION 140eed3a0 FUN_140eed3a0 body=97 status=ok
// SIG undefined FUN_140eed3a0(void)

void FUN_140eed3a0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  FUN_142ebee70();
  lVar2 = 0;
  if (param_1[0xd2] != 0) {
    lVar2 = *(longlong *)(param_1[0xd2] + 0x10e0);
  }
  if ((param_1[0xce] != 0) && (lVar2 != 0)) {
    cVar1 = FUN_140adaa20();
    if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000140eed3e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x580))(param_1,1);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x000140eed3f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x578))(param_1,0);
    return;
  }
  return;
}



// FUNCTION 140eed410 FUN_140eed410 body=161 status=ok
// SIG undefined FUN_140eed410(void)

void FUN_140eed410(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  FUN_142ebee70();
  if (*(longlong **)(param_1 + 0x648) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x648) + 0x2a8))();
    *(undefined1 *)(*(longlong *)(param_1 + 0x648) + 0x2fa) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x650);
  *(undefined8 *)(param_1 + 0x690) = 0;
  *(undefined2 *)(param_1 + 0x698) = 5;
  if (lVar2 != 0) goto LAB_140eed497;
  plVar1 = (longlong *)FUN_140eccc40(param_1);
  if (plVar1 == (longlong *)0x0) {
LAB_140eed489:
    lVar2 = 0;
  }
  else {
    lVar2 = (**(code **)(*plVar1 + 0x148))(plVar1);
    if (lVar2 == 0) goto LAB_140eed489;
    lVar2 = UWorld::GetGameState<APVPGameState>(lVar2);
  }
  *(longlong *)(param_1 + 0x650) = lVar2;
  if (lVar2 == 0) {
    return;
  }
LAB_140eed497:
  FUN_140ee8340(param_1,lVar2 + 0x5f8);
  return;
}



// FUNCTION 140eed4c0 FUN_140eed4c0 body=44 status=ok
// SIG undefined FUN_140eed4c0(void)

void FUN_140eed4c0(longlong *param_1)

{
  FUN_142ebee70();
  FUN_140f05790(param_1,1);
                    /* WARNING: Could not recover jumptable at 0x000140eed4e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x578))(param_1,0);
  return;
}



// FUNCTION 140eed4f0 FUN_140eed4f0 body=82 status=ok
// SIG undefined FUN_140eed4f0(void)

void FUN_140eed4f0(longlong *param_1)

{
  FUN_142ebee70();
  (**(code **)(*param_1 + 0x580))(param_1,1);
  *(undefined4 *)(param_1 + 0xcb) = 0;
  if ((0 < (int)param_1[0xef]) && ((char)param_1[0xf0] == '\0')) {
                    /* WARNING: Could not recover jumptable at 0x000140eed535. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x578))(param_1,0);
    return;
  }
  return;
}



// FUNCTION 140eed550 FUN_140eed550 body=29 status=ok
// SIG undefined FUN_140eed550(void)

void FUN_140eed550(undefined8 param_1)

{
  FUN_142ebee70();
  FUN_140f0b100(param_1,1);
  return;
}



// FUNCTION 140eed570 FUN_140eed570 body=262 status=ok
// SIG undefined FUN_140eed570(void)

void FUN_140eed570(longlong *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  undefined2 local_res8 [4];
  
  FUN_142ebee70();
  lVar3 = FWeakObjectPtr::Get(param_1 + 0xbb);
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
    if ((bVar1) && (*(longlong *)(lVar3 + 0x528) != 0)) {
      uVar2 = FUN_142708650(lVar3);
      uVar5 = (**(code **)(**(longlong **)(lVar3 + 0x528) + 0x778))();
      fVar6 = (float)FUN_14271a5d0(lVar3,uVar5,uVar2);
      fVar6 = _guard_xfg_dispatch_icall_nop(fVar6 * 0.008726646);
      fVar7 = (float)FUN_140ee7240(param_1);
      fVar6 = _guard_xfg_dispatch_icall_nop(fVar6 / fVar7);
      *(float *)(param_1 + 0xfb) = fVar6 * 0.49999997;
    }
  }
  (**(code **)(*param_1 + 0x578))(param_1,1);
  if (local_res8 != (undefined2 *)((longlong)param_1 + 0x649)) {
    *(undefined2 *)((longlong)param_1 + 0x649) = 0x101;
  }
  return;
}



// FUNCTION 140eed680 FUN_140eed680 body=449 status=ok
// SIG undefined FUN_140eed680(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140eed680(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
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
  FUN_142ebee70();
  if ((char)param_1[0xcf] == '\0') {
    local_98 = (longlong *)0x0;
    local_88 = 0;
    puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_b8);
    if (puVar1 != (undefined8 *)0x0) {
      puVar1[1] = param_1;
      *puVar1 = &PTR_FUN_143f77b70;
    }
    local_c8[0] = &LAB_140ee0950;
    uVar2 = FUN_1420849a0(param_1,local_78,local_c8);
    FUN_14208c260(param_1,uVar2);
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
    if (local_88 != 0) {
      plVar3 = local_b8;
      if (local_98 != (longlong *)0x0) {
        plVar3 = local_98;
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3,0);
      }
    }
    if (local_98 != (longlong *)0x0) {
      FMemory::Free();
    }
    (**(code **)(*param_1 + 0x580))(param_1,1);
  }
  else {
    FWeakObjectPtr::operator=(&local_d8,param_1);
    local_98 = (longlong *)0x0;
    local_88 = 0;
    puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_b8);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &PTR_FUN_1444f8920;
      puVar1[1] = param_1;
      *(undefined4 *)(puVar1 + 2) = local_d8;
      *(undefined4 *)((longlong)puVar1 + 0x14) = local_d4;
    }
    local_c8[0] = &LAB_140ee0cd0;
    FUN_14208c260(param_1,local_c8);
    if (local_88 != 0) {
      plVar3 = local_b8;
      if (local_98 != (longlong *)0x0) {
        plVar3 = local_98;
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3,0);
      }
    }
    if (local_98 != (longlong *)0x0) {
      FMemory::Free();
    }
    *(undefined1 *)(param_1 + 0xcf) = 0;
  }
  return;
}



// FUNCTION 140eed850 FUN_140eed850 body=62 status=ok
// SIG undefined FUN_140eed850(void)

void FUN_140eed850(longlong *param_1)

{
  char cVar1;
  
  FUN_142ebee70();
  cVar1 = (**(code **)(*param_1 + 0x5c8))(param_1);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x580))(param_1,1);
  }
                    /* WARNING: Could not recover jumptable at 0x000140eed887. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x5d8))(param_1);
  return;
}



// FUNCTION 140eed890 FUN_140eed890 body=321 status=ok
// SIG undefined FUN_140eed890(void)

void FUN_140eed890(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong local_18 [2];
  
  FUN_142ebee70();
  cVar2 = (**(code **)(*param_1 + 0x5c8))(param_1);
  if (cVar2 != '\0') {
    (**(code **)(*param_1 + 0x580))(param_1,1);
  }
  if (0 < (int)param_1[0xcc]) {
    (**(code **)(*param_1 + 0x578))(param_1,1);
    if ((param_1[200] != 0) && (*(char *)((longlong)param_1 + 0x664) != '\0')) {
      local_18[0] = 0;
      local_18[1] = 3;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      FGenericPlatformString::Memcpy(local_18[0],&DAT_1445f5188,6);
      FUN_142088910(param_1[200],local_18);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
    }
    plVar3 = (longlong *)param_1[0xc9];
    plVar1 = plVar3 + (longlong)(int)param_1[0xca] * 3;
    for (; plVar3 != plVar1; plVar3 = plVar3 + 3) {
      if (((char)plVar3[2] != '\0') && (*plVar3 != 0)) {
        local_18[0] = 0;
        local_18[1] = 3;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
        FGenericPlatformString::Memcpy(local_18[0],&DAT_1445f5200,6);
        FUN_142088910(*plVar3);
        if (local_18[0] != 0) {
          FMemory::Free();
        }
      }
    }
  }
  return;
}



// FUNCTION 140eed9e0 FUN_140eed9e0 body=56 status=ok
// SIG undefined FUN_140eed9e0(void)

void FUN_140eed9e0(longlong *param_1)

{
  char cVar1;
  
  FUN_142ebee70();
  cVar1 = (**(code **)(*param_1 + 0x5c8))(param_1);
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000140eeda0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x580))(param_1,1);
    return;
  }
  return;
}



// FUNCTION 140eeda20 FUN_140eeda20 body=452 status=ok
// SIG undefined FUN_140eeda20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140eeda20(longlong *param_1)

{
  byte bVar1;
  bool bVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  FUN_142ebee70();
  plVar3 = (longlong *)FWeakObjectPtr::Get(param_1 + 0xbb);
  uVar6 = 0;
  if (plVar3 != (longlong *)0x0) {
    lVar4 = FUN_14145f370();
    if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      uVar5 = (**(code **)(*plVar3 + 0x148))(plVar3);
      lVar4 = FUN_140c12480(uVar5);
      if (lVar4 != 0) {
        uVar6 = UNiagaraSystem::GetEffectType(lVar4);
      }
    }
  }
  bVar1 = *(byte *)(param_1 + 0xd7);
  if (bVar1 != 0) {
    if (bVar1 < 3) {
      (**(code **)(*param_1 + 0x578))(param_1,1);
      goto LAB_140eedaf0;
    }
    if (bVar1 != 3) goto LAB_140eedaf0;
  }
  (**(code **)(*param_1 + 0x580))(param_1,1);
LAB_140eedaf0:
  FWeakObjectPtr::operator=(&local_80,uVar6);
  FWeakObjectPtr::operator=(&local_88,param_1);
  local_48 = (longlong *)0x0;
  local_38 = 0;
  puVar7 = (undefined8 *)FUN_140438ef0(0x20,local_68);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &PTR_FUN_144605c80;
    puVar7[1] = param_1;
    *(undefined4 *)(puVar7 + 2) = local_88;
    *(undefined4 *)((longlong)puVar7 + 0x14) = local_84;
    *(undefined4 *)(puVar7 + 3) = local_80;
    *(undefined4 *)((longlong)puVar7 + 0x1c) = local_7c;
  }
  local_78[0] = &LAB_140ee0e50;
  FUN_14208c260(param_1,local_78);
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
  return;
}



// FUNCTION 140eedbf0 FUN_140eedbf0 body=700 status=ok
// SIG undefined FUN_140eedbf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140eedbf0(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  longlong *plVar8;
  undefined1 auStack_108 [32];
  undefined2 local_e8;
  longlong local_d8 [2];
  undefined1 *local_c8 [2];
  longlong local_b8 [4];
  longlong *local_98;
  int local_88;
  undefined1 local_78 [16];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  FUN_142ebee70();
  (**(code **)(*param_1 + 0x578))(param_1,0);
  FUN_140f05c90(param_1,1);
  FUN_140f06e10(param_1);
  FUN_140ee4f20(param_1);
  FUN_140f117e0(param_1);
  lVar3 = FWeakObjectPtr::Get(param_1 + 0xb9);
  if (lVar3 == 0) goto LAB_140eeddb6;
  lVar4 = FUN_14142a560();
  if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) goto LAB_140eeddb6;
  cVar2 = FUN_142eb50d0(param_1);
  if (cVar2 == '\0') {
    if ((((int)param_1[0x10b] < 1) && (*(int *)((longlong)param_1 + 0x85c) < 1)) &&
       ((char)param_1[0xe2] == '\0')) {
      cVar2 = FUN_140eec620(param_1);
      if (((cVar2 != '\0') || (param_1[0x104] == 0)) ||
         (*(int *)((longlong)param_1 + 0x844) < *(int *)(param_1[0x104] + 0x178)))
      goto LAB_140eedd33;
    }
    uVar6 = 1;
    FUN_140ccaa90(lVar3,param_1);
    if (param_1[0x103] != 0) {
      local_d8[0] = 0;
      local_d8[1] = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_d8,0);
      puVar7 = &DAT_1445ff278;
LAB_140eedd68:
      local_e8 = 0x3f;
      FGenericPlatformString::Convert<char,wchar_t>(local_d8[0],5,puVar7);
      FUN_142088910(param_1[0x103],local_d8);
      if (local_d8[0] != 0) {
        FMemory::Free();
      }
    }
  }
  else {
LAB_140eedd33:
    uVar6 = 0;
    FUN_140cc9500(lVar3,param_1);
    if (param_1[0x103] != 0) {
      local_d8[0] = 0;
      local_d8[1] = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_d8,0);
      puVar7 = &DAT_1445ff290;
      goto LAB_140eedd68;
    }
  }
  FUN_140f06ab0(param_1,uVar6);
LAB_140eeddb6:
  FUN_140efbda0(param_1);
  local_98 = (longlong *)0x0;
  local_88 = 0;
  puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_b8);
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[1] = param_1;
    *puVar5 = &PTR_FUN_143f77b70;
  }
  local_c8[0] = &LAB_140ee0ae0;
  uVar6 = FUN_1420849a0(param_1,local_78,local_c8);
  FUN_14208c260(param_1,uVar6);
  if (local_38 != 0) {
    plVar8 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar8 = local_48;
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_88 != 0) {
    plVar8 = local_b8;
    if (local_98 != (longlong *)0x0) {
      plVar8 = local_98;
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8,0);
    }
  }
  if (local_98 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (0 < *(int *)((longlong)param_1 + 0x85c)) {
    FUN_140ee8760(param_1,0);
  }
  return;
}



// FUNCTION 140eedeb0 FUN_140eedeb0 body=387 status=ok
// SIG undefined FUN_140eedeb0(void)

void FUN_140eedeb0(longlong *param_1,char *param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 0xd0);
  if (lVar3 == 0) {
LAB_140eedf53:
    lVar3 = 0;
  }
  else {
    lVar4 = AGShrineUsable::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((!bVar1) || (lVar3 = *(longlong *)(lVar3 + 0x4e8), lVar3 == 0)) goto LAB_140eedf53;
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
    if (!bVar1) goto LAB_140eedf53;
  }
  lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar4 != 0) {
    lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar4 = *(longlong *)(lVar4 + 400);
    if (lVar4 != 0) {
      lVar5 = FUN_14141f270();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) goto LAB_140eedfbb;
    }
  }
  lVar4 = 0;
LAB_140eedfbb:
  if (((lVar3 != 0) && (lVar4 != 0)) && (*(char *)(lVar4 + 0xb78) == '\0')) {
    if (((*param_2 == '\x02') || (*(char *)(lVar3 + 0xc1) == '\0')) &&
       ((*param_2 == '\x01' || (*(char *)(lVar3 + 0xc2) == '\0')))) {
      cVar2 = FUN_140eec8b0(param_1);
      if (cVar2 != '\0') {
        return;
      }
      if (*(char *)(lVar3 + 0xc3) == '\0') {
        return;
      }
    }
    param_1[0xdc] = param_1[0xd1];
    thunk_FUN_142eda790(param_1,param_1 + 0xd6);
  }
  return;
}



// FUNCTION 140eee040 FUN_140eee040 body=63 status=ok
// SIG undefined FUN_140eee040(void)

void FUN_140eee040(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x28);
  if ((lVar2 != 0) && (param_2 != 0)) {
    iVar1 = *(int *)(param_2 + 0x2d8);
    if ((-1 < iVar1) && (iVar1 < *(int *)(lVar2 + 0x168))) {
      FUN_140ee03f0(lVar2 + 0x10,(longlong)iVar1 * 0x110 + *(longlong *)(lVar2 + 0x160),param_2,
                    param_3);
      return;
    }
  }
  return;
}



// FUNCTION 140eee080 FUN_140eee080 body=63 status=ok
// SIG undefined FUN_140eee080(void)

void FUN_140eee080(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x28);
  if ((lVar2 != 0) && (param_2 != 0)) {
    iVar1 = *(int *)(param_2 + 0x2d8);
    if ((-1 < iVar1) && (iVar1 < *(int *)(lVar2 + 0x168))) {
      FUN_140ee03f0(lVar2 + 0x20,(longlong)iVar1 * 0x110 + *(longlong *)(lVar2 + 0x160),param_2,
                    param_3);
      return;
    }
  }
  return;
}



// FUNCTION 140eee0c0 FUN_140eee0c0 body=278 status=ok
// SIG undefined FUN_140eee0c0(void)

void FUN_140eee0c0(longlong param_1,longlong param_2)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  undefined1 local_238 [272];
  undefined8 local_128;
  undefined1 local_118 [272];
  
  if (param_2 != 0) {
    lVar3 = FUN_141324a80();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    lVar3 = param_2;
    if (bVar2) goto LAB_140eee115;
  }
  lVar3 = 0;
LAB_140eee115:
  FWeakObjectPtr::operator=(param_1 + 0x188,lVar3);
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0x2d8);
    if ((iVar1 < 0) || (*(int *)(param_1 + 0x168) <= iVar1)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_140ee0380(param_1,(longlong)iVar1 * 0x110 + *(longlong *)(param_1 + 0x160),param_2);
      return;
    }
  }
  FUN_140ed0240(local_118);
  FUN_140ed0240(local_238);
  FUN_140e9cc60(local_238,local_118);
  local_128 = 0;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1,local_238);
  FUN_140e9c360(local_238);
  FUN_140e9c360(local_118);
  return;
}



// FUNCTION 140eee1e0 FUN_140eee1e0 body=14 status=ok
// SIG undefined FUN_140eee1e0(void)

void FUN_140eee1e0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  undefined1 auStack_238 [272];
  undefined8 uStack_128;
  undefined1 auStack_118 [272];
  
  lVar2 = *(longlong *)(param_1 + 0x28);
  if (lVar2 == 0) {
    return;
  }
  if (param_2 != 0) {
    lVar4 = FUN_141324a80();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    lVar4 = param_2;
    if (bVar3) goto LAB_140eee115;
  }
  lVar4 = 0;
LAB_140eee115:
  FWeakObjectPtr::operator=(lVar2 + 0x188,lVar4);
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0x2d8);
    if ((iVar1 < 0) || (*(int *)(lVar2 + 0x168) <= iVar1)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      FUN_140ee0380(lVar2,(longlong)iVar1 * 0x110 + *(longlong *)(lVar2 + 0x160),param_2);
      return;
    }
  }
  FUN_140ed0240(auStack_118);
  FUN_140ed0240(auStack_238);
  FUN_140e9cc60(auStack_238,auStack_118);
  uStack_128 = 0;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(lVar2,auStack_238);
  FUN_140e9c360(auStack_238);
  FUN_140e9c360(auStack_118);
  return;
}



// FUNCTION 140eee1f0 FUN_140eee1f0 body=158 status=ok
// SIG undefined FUN_140eee1f0(void)

void FUN_140eee1f0(longlong param_1)

{
  longlong local_18;
  undefined8 uStack_10;
  
  if (*(longlong *)(param_1 + 0x670) != 0) {
    local_18 = *(longlong *)(param_1 + 0x720);
    uStack_10 = *(undefined8 *)(param_1 + 0x728);
    FUN_142f0cf50(*(longlong *)(param_1 + 0x670),&local_18);
  }
  if ((*(longlong *)(param_1 + 0x640) != 0) &&
     (*(int *)(*(longlong *)(param_1 + 0x760) + 0x200) == 0)) {
    uStack_10 = 0xe;
    local_18 = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    FGenericPlatformString::Memcpy(local_18,L"beginCooldown",0x1c);
    FUN_142088910(*(undefined8 *)(param_1 + 0x640),&local_18);
    if (local_18 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140eee2a0 FUN_140eee2a0 body=369 status=ok
// SIG undefined FUN_140eee2a0(void)

void FUN_140eee2a0(longlong param_1,longlong param_2)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  undefined8 local_res8;
  
  if (((*(char *)(param_1 + 0x699) != '\0') && (param_2 == *(longlong *)(param_1 + 0x690))) &&
     (*(longlong *)(param_1 + 0x650) != 0)) {
    FUN_140cc25f0(*(longlong *)(param_1 + 0x650),0,4);
    if (*(longlong *)(param_1 + 0x658) != 0) {
      pwVar3 = _guard_xfg_dispatch_icall_nop(L"&UGFxBossBar::OnHealthTypeDepeleted",L"::");
      pwVar2 = (wchar_t *)0x0;
      while (pwVar1 = pwVar3, pwVar1 != (wchar_t *)0x0) {
        pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
        pwVar2 = pwVar1;
      }
      FName::FName(&local_res8,pwVar2 + 2,1);
      TMulticastScriptDelegate<FWeakObjectPtr>::Remove
                (*(longlong *)(param_1 + 0x658) + 0x8d8,param_1,local_res8);
      pwVar3 = _guard_xfg_dispatch_icall_nop(L"&UGFxBossBar::OnHealthTypeAdded",L"::");
      pwVar2 = (wchar_t *)0x0;
      while (pwVar1 = pwVar3, pwVar1 != (wchar_t *)0x0) {
        pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
        pwVar2 = pwVar1;
      }
      FName::FName(&local_res8,pwVar2 + 2,1);
      TMulticastScriptDelegate<FWeakObjectPtr>::Remove
                (*(longlong *)(param_1 + 0x658) + 0x8c8,param_1,local_res8);
      FUN_140483870(*(longlong *)(param_1 + 0x658) + 0x268,param_1);
    }
    if (*(longlong *)(param_1 + 0x690) != 0) {
      FUN_1407665e0(*(longlong *)(param_1 + 0x690) + 0x290,param_1);
    }
    *(undefined8 *)(param_1 + 0x690) = 0;
    *(undefined8 *)(param_1 + 0x658) = 0;
    *(undefined1 *)(param_1 + 0x698) = 5;
  }
  return;
}



// FUNCTION 140eee420 FUN_140eee420 body=900 status=ok
// SIG undefined FUN_140eee420(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140eee420(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  byte *pbVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  undefined8 local_38;
  undefined8 uStack_30;
  
  if (param_2 == 0) {
    return;
  }
  lVar4 = FUN_14132e850();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
      != lVar4 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return;
  }
  lVar4 = *(longlong *)(param_1 + 0x1f0);
  if (lVar4 == 0) {
    return;
  }
  iVar3 = *(int *)(param_2 + 0x2d8);
  lVar9 = (longlong)iVar3;
  iVar10 = 2;
  if (lVar4 == *(longlong *)(param_1 + 0x1c0)) {
    iVar8 = 0;
  }
  else if (lVar4 == *(longlong *)(param_1 + 0x1d0)) {
    iVar8 = 1;
  }
  else {
    iVar8 = -1;
    if (lVar4 == *(longlong *)(param_1 + 0x1e0)) {
      iVar8 = iVar10;
    }
  }
  if (iVar3 == 0) {
    if (iVar8 == 0) {
      pbVar5 = *(byte **)(param_1 + 0x238);
    }
    else if (iVar8 == 1) {
      pbVar5 = *(byte **)(param_1 + 0x248);
    }
    else {
      if (iVar8 != 2) goto LAB_140eee56c;
      pbVar5 = *(byte **)(param_1 + 600);
    }
    local_38 = CONCAT44((float)pbVar5[1] * 0.003921569,(float)pbVar5[2] * 0.003921569);
    uStack_30 = CONCAT44((float)pbVar5[3] * 0.003921569,(float)*pbVar5 * 0.003921569);
    goto LAB_140eee5fd;
  }
  if (iVar3 < 0) {
LAB_140eee579:
    bVar2 = false;
  }
  else {
LAB_140eee56c:
    if (*(int *)(param_1 + 0x230) <= iVar3) goto LAB_140eee579;
    bVar2 = true;
  }
  if (bVar2) {
    lVar1 = *(longlong *)(param_1 + 0x228);
    local_38 = CONCAT44((float)*(byte *)(lVar1 + 1 + lVar9 * 4) * 0.003921569,
                        (float)*(byte *)(lVar1 + 2 + lVar9 * 4) * 0.003921569);
    uStack_30 = CONCAT44((float)*(byte *)(lVar1 + 3 + lVar9 * 4) * 0.003921569,
                         (float)*(byte *)(lVar1 + lVar9 * 4) * 0.003921569);
  }
  else {
    local_38 = _DAT_1468b5d78;
    uStack_30 = uRam00000001468b5d80;
  }
LAB_140eee5fd:
  *(int *)(lVar4 + 0x2e8) = iVar3;
  if (*(longlong *)(lVar4 + 0x2d8) != 0) {
    FUN_142f0c220(*(longlong *)(lVar4 + 0x2d8),&local_38,CONCAT71((int7)((ulonglong)lVar4 >> 8),1));
  }
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    iVar8 = 0;
    iVar3 = FUN_142eb7440();
    if (0 < iVar3) {
      do {
        lVar4 = FUN_142eb6a30(*(undefined8 *)(param_1 + 0x1b0),iVar8);
        if (lVar4 != 0) {
          lVar9 = FUN_14132e850();
          iVar3 = *(int *)(lVar9 + 0x90);
          if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < iVar3) ||
             (*(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)iVar3 * 8)
              != lVar9 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            if ((iVar8 == *(int *)(*(longlong *)(param_1 + 0x1f0) + 0x2e4)) ||
               (iVar8 == *(int *)(*(longlong *)(param_1 + 0x1f0) + 0x2e8))) {
              uVar7 = CONCAT71((int7)(int3)((uint)iVar3 >> 8),1);
            }
            else {
              uVar7 = 0;
            }
            FUN_142ed2820(lVar4,uVar7,1);
          }
        }
        iVar8 = iVar8 + 1;
        iVar3 = FUN_142eb7440(*(undefined8 *)(param_1 + 0x1b0));
      } while (iVar8 < iVar3);
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x1f0);
  uVar6 = *(undefined4 *)(param_2 + 0x308);
  if (lVar4 == *(longlong *)(param_1 + 0x1c0)) {
    if ((*(char *)(param_2 + 0x348) != '\0') && (0 < *(int *)(param_1 + 0x240))) {
      uVar6 = **(undefined4 **)(param_1 + 0x238);
    }
    iVar3 = 0;
  }
  else if (lVar4 == *(longlong *)(param_1 + 0x1d0)) {
    if ((*(char *)(param_2 + 0x348) != '\0') && (0 < *(int *)(param_1 + 0x250))) {
      uVar6 = **(undefined4 **)(param_1 + 0x248);
    }
    iVar3 = 1;
  }
  else {
    iVar3 = -1;
    if (((lVar4 == *(longlong *)(param_1 + 0x1e0)) &&
        (iVar3 = iVar10, *(char *)(param_2 + 0x348) != '\0')) && (0 < *(int *)(param_1 + 0x260))) {
      uVar6 = **(undefined4 **)(param_1 + 600);
    }
  }
  FUN_140ee02a0(param_1 + 0x198,uVar6,1,iVar3,*(undefined1 *)(param_2 + 0x348));
  return;
}



// FUNCTION 140eee7b0 FUN_140eee7b0 body=280 status=ok
// SIG undefined FUN_140eee7b0(void)

void FUN_140eee7b0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 local_c8 [192];
  
  if (param_3 != (longlong *)0x0) {
    plVar2 = (longlong *)FUN_142dfdfe0();
    plVar5 = param_3;
    while (plVar5 != plVar2) {
      plVar5 = (longlong *)plVar5[6];
      if (plVar5 == (longlong *)0x0) {
        return;
      }
    }
    plVar2 = (longlong *)FUN_142dfdfe0();
    plVar5 = param_3;
    do {
      plVar6 = param_3;
      if (plVar5 == plVar2) goto LAB_140eee818;
      plVar5 = (longlong *)plVar5[6];
    } while (plVar5 != (longlong *)0x0);
    plVar6 = (longlong *)0x0;
LAB_140eee818:
    lVar3 = plVar6[0x1f];
    if (lVar3 == 0) {
      (**(code **)(*plVar6 + 0x368))(plVar6);
      lVar3 = plVar6[0x1f];
      if (lVar3 == 0) {
        return;
      }
    }
    if ((*(char *)(lVar3 + 0x8a) == '\0') && (*(char *)(lVar3 + 0x8b) != '\0')) {
      uVar1 = 0;
      lVar3 = FUN_140eccc40(param_1);
      if (lVar3 != 0) {
        uVar1 = FUN_140e857c0(lVar3 + 0x1b10,param_3);
      }
      uVar4 = FWeakObjectPtr::Get(param_1 + 0x728);
      FUN_140ecfe50(local_c8,0,0,0xffffffff,0,uVar4,param_3,uVar1);
      FUN_140d65f50(local_c8);
    }
  }
  return;
}



// FUNCTION 140eee8d0 FUN_140eee8d0 body=682 status=ok
// SIG undefined FUN_140eee8d0(void)

void FUN_140eee8d0(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  int local_res18 [2];
  int local_res20 [2];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [176];
  undefined1 local_28;
  
  if (param_3 != (longlong *)0x0) {
    plVar4 = (longlong *)FUN_142dfdfe0();
    plVar7 = param_3;
    while (plVar7 != plVar4) {
      plVar7 = (longlong *)plVar7[6];
      if (plVar7 == (longlong *)0x0) {
        return;
      }
    }
    plVar4 = (longlong *)FUN_142dfdfe0();
    plVar7 = param_3;
    do {
      plVar9 = param_3;
      if (plVar7 == plVar4) goto LAB_140eee92d;
      plVar7 = (longlong *)plVar7[6];
    } while (plVar7 != (longlong *)0x0);
    plVar9 = (longlong *)0x0;
LAB_140eee92d:
    lVar5 = plVar9[0x1f];
    if (lVar5 == 0) {
      (**(code **)(*plVar9 + 0x368))(plVar9);
      lVar5 = plVar9[0x1f];
      if (lVar5 == 0) {
        return;
      }
    }
    if ((*(char *)(lVar5 + 0x8a) == '\0') && (*(char *)(lVar5 + 0x8d) != '\0')) {
      uVar2 = 0;
      lVar5 = FUN_140eccc40(param_1);
      if (lVar5 != 0) {
        uVar2 = FUN_140e857c0(lVar5 + 0x1b10,param_3);
      }
      uVar6 = FWeakObjectPtr::Get(param_1 + 0xe5);
      FUN_140ecfe50(local_d8,1,0xffffffff,0xffffffff,0,uVar6,param_3,uVar2);
      FUN_140d65f50(local_d8);
      cVar3 = FWeakObjectPtr::IsValid(param_1 + 0xe5);
      if (cVar3 != '\0') {
        plVar4 = (longlong *)FUN_142dfdfe0();
        plVar7 = param_3;
        do {
          plVar9 = param_3;
          if (plVar7 == plVar4) goto LAB_140eeea15;
          plVar7 = (longlong *)plVar7[6];
        } while (plVar7 != (longlong *)0x0);
        plVar9 = (longlong *)0x0;
LAB_140eeea15:
        uVar6 = FWeakObjectPtr::Get(param_1 + 0xe5);
        plVar7 = (longlong *)FUN_142dcdc10(uVar6,plVar9);
        if (plVar7 != (longlong *)0x0) {
          local_res18[0] = 0;
          local_res20[0] = 0;
          (**(code **)(*plVar7 + 0x280))(plVar7,local_res18,local_res20);
          uVar6 = FWeakObjectPtr::Get(param_1 + 0xe5);
          FUN_140ecfe50(local_d8,local_res18[0] == local_res20[0],local_res18[0],local_res20[0],1,
                        uVar6,param_3,uVar2);
          iVar1 = (int)param_1[0xef];
          local_28 = 1;
          *(int *)(param_1 + 0xef) = iVar1 + 1;
          if (*(int *)((longlong)param_1 + 0x77c) < iVar1 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<184,8>_>,FDefaultAllocator>::
            ResizeGrow(param_1 + 0xee,iVar1);
          }
          FUN_140ecfd40((longlong)iVar1 * 0xb8 + param_1[0xee],local_d8);
          FUN_140d65f50(local_d8);
        }
        if (((int)param_1[0xcb] == 0) && ((char)param_1[0xf0] == '\0')) {
          lVar5 = *param_1;
          local_e8 = 0;
          local_e0 = 0;
          puVar8 = (undefined8 *)FName::FName(local_res18,L"Challenge_Complete",1);
          (**(code **)(lVar5 + 0x4e8))(param_1,*puVar8,&local_e8);
          (**(code **)(*param_1 + 0x578))(param_1,0);
        }
      }
    }
  }
  return;
}



// FUNCTION 140eeeb80 FUN_140eeeb80 body=450 status=ok
// SIG undefined FUN_140eeeb80(void)

void FUN_140eeeb80(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  undefined1 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 local_res18 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [192];
  
  if (param_3 != (longlong *)0x0) {
    plVar3 = (longlong *)FUN_142dfdfe0();
    plVar7 = param_3;
    while (plVar7 != plVar3) {
      plVar7 = (longlong *)plVar7[6];
      if (plVar7 == (longlong *)0x0) {
        return;
      }
    }
    plVar3 = (longlong *)FUN_142dfdfe0();
    plVar7 = param_3;
    do {
      plVar8 = param_3;
      if (plVar7 == plVar3) goto LAB_140eeebe8;
      plVar7 = (longlong *)plVar7[6];
    } while (plVar7 != (longlong *)0x0);
    plVar8 = (longlong *)0x0;
LAB_140eeebe8:
    lVar4 = plVar8[0x1f];
    if (lVar4 == 0) {
      (**(code **)(*plVar8 + 0x368))(plVar8);
      lVar4 = plVar8[0x1f];
      if (lVar4 == 0) {
        return;
      }
    }
    if ((*(char *)(lVar4 + 0x8a) == '\0') && (*(char *)(lVar4 + 0x8d) != '\0')) {
      uVar2 = 0;
      lVar4 = FUN_140eccc40(param_1);
      if (lVar4 != 0) {
        uVar2 = FUN_140e857c0(lVar4 + 0x1b10,param_3);
      }
      uVar5 = FWeakObjectPtr::Get(param_1 + 0xe5);
      FUN_140ecfe50(local_c8,1,0xffffffff,0xffffffff,0,uVar5,param_3,uVar2);
      iVar1 = (int)param_1[0xef];
      *(int *)(param_1 + 0xef) = iVar1 + 1;
      if (*(int *)((longlong)param_1 + 0x77c) < iVar1 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<184,8>_>,FDefaultAllocator>::
        ResizeGrow(param_1 + 0xee,iVar1);
      }
      FUN_140ecfd40((longlong)iVar1 * 0xb8 + param_1[0xee],local_c8);
      if (((int)param_1[0xcb] == 0) && ((char)param_1[0xf0] == '\0')) {
        lVar4 = *param_1;
        local_d8 = 0;
        local_d0 = 0;
        puVar6 = (undefined8 *)FName::FName(local_res18,L"Challenge_Complete",1);
        (**(code **)(lVar4 + 0x4e8))(param_1,*puVar6,&local_d8);
        (**(code **)(*param_1 + 0x578))(param_1,0);
      }
      FUN_140d65f50(local_c8);
    }
  }
  return;
}



// FUNCTION 140eeed50 FUN_140eeed50 body=480 status=ok
// SIG undefined FUN_140eeed50(void)

void FUN_140eeed50(longlong *param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
                  char param_5,char param_6)

{
  int iVar1;
  undefined1 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 local_res18 [8];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [192];
  
  if (param_3 != (longlong *)0x0) {
    plVar3 = (longlong *)FUN_142dfdfe0();
    plVar7 = param_3;
    do {
      if (plVar7 == plVar3) {
        plVar3 = (longlong *)FUN_142dfdfe0();
        plVar7 = param_3;
        goto LAB_140eeeef3;
      }
      plVar7 = (longlong *)plVar7[6];
    } while (plVar7 != (longlong *)0x0);
  }
  lVar4 = 0;
  goto LAB_140eeed94;
  while (plVar7 = (longlong *)plVar7[6], plVar7 != (longlong *)0x0) {
LAB_140eeeef3:
    plVar8 = param_3;
    if (plVar7 == plVar3) goto LAB_140eeef08;
  }
  plVar8 = (longlong *)0x0;
LAB_140eeef08:
  lVar4 = plVar8[0x1f];
  if (lVar4 == 0) {
    (**(code **)(*plVar8 + 0x368))(plVar8);
    lVar4 = plVar8[0x1f];
  }
LAB_140eeed94:
  if ((((param_5 != '\0') && (param_6 == '\0')) && (lVar4 != 0)) &&
     ((*(char *)(lVar4 + 0x8a) == '\0' && (*(char *)(lVar4 + 0x8c) != '\0')))) {
    uVar2 = 0;
    lVar4 = FUN_140eccc40(param_1);
    if (lVar4 != 0) {
      uVar2 = FUN_140e857c0(lVar4 + 0x1b10,param_3);
    }
    uVar5 = FWeakObjectPtr::Get(param_1 + 0xe5);
    FUN_140ecfe50(local_c8,0,param_4,0xffffffff,0,uVar5,param_3,uVar2);
    iVar1 = (int)param_1[0xef];
    *(int *)(param_1 + 0xef) = iVar1 + 1;
    if (*(int *)((longlong)param_1 + 0x77c) < iVar1 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<184,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1 + 0xee,iVar1);
    }
    FUN_140ecfd40((longlong)iVar1 * 0xb8 + param_1[0xee],local_c8);
    if (((int)param_1[0xcb] == 0) && ((char)param_1[0xf0] == '\0')) {
      lVar4 = *param_1;
      local_d8 = 0;
      local_d0 = 0;
      puVar6 = (undefined8 *)FName::FName(local_res18,L"Challenge_Update",1);
      (**(code **)(lVar4 + 0x4e8))(param_1,*puVar6,&local_d8);
      (**(code **)(*param_1 + 0x578))(param_1,0);
    }
    FUN_140d65f50(local_c8);
  }
  return;
}



// FUNCTION 140eeef30 FUN_140eeef30 body=812 status=ok
// SIG undefined FUN_140eeef30(void)

void FUN_140eeef30(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_e8;
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined1 local_c0 [24];
  undefined1 local_a8 [24];
  undefined1 local_90 [24];
  undefined4 local_78;
  undefined8 local_70;
  float local_68;
  longlong local_60;
  
  lVar4 = FWeakObjectPtr::Get(param_1 + 0x5d8);
  if (lVar4 == 0) {
LAB_140eeef88:
    lVar4 = 0;
  }
  else {
    lVar5 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_140eeef88;
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar5 = *(longlong *)(DAT_146b33f38 + 0x90);
  if (lVar4 == 0) {
    return;
  }
  if (lVar5 == 0) {
    return;
  }
  if (*(longlong *)(lVar5 + 0x1110) == 0) {
    return;
  }
  plVar1 = *(longlong **)(lVar4 + 0x848);
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  lVar6 = FUN_1413f82e0();
  if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return;
  }
  uVar9 = 0xffffffff;
  fVar11 = 0.0;
  fVar12 = 0.0;
  uVar7 = FUN_141477fa0();
  lVar6 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar7);
  if (lVar6 != 0) {
    cVar3 = *(char *)(lVar6 + 0x480);
    uVar9 = (ulonglong)cVar3;
    if ((cVar3 < '\0') || (*(int *)(*(longlong *)(lVar5 + 0x1110) + 0x38) <= (int)cVar3)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      puVar8 = (undefined8 *)(uVar9 * 0x90 + *(longlong *)(*(longlong *)(lVar5 + 0x1110) + 0x30));
      local_e8 = *puVar8;
      FString::FString(local_e0,puVar8 + 1);
      FString::FString(local_d0,puVar8 + 3);
      FText::FText(local_c0,puVar8 + 5);
      FText::FText(local_a8,puVar8 + 8);
      FText::FText(local_90,puVar8 + 0xb);
      local_78 = *(undefined4 *)(puVar8 + 0xe);
      local_70 = puVar8[0xf];
      local_68 = *(float *)(puVar8 + 0x10);
      fVar10 = 0.0;
      lVar5 = puVar8[0x11];
      if (0.0 < *(float *)(lVar6 + 0x484)) {
        fVar11 = *(float *)(lVar6 + 0x488);
        fVar10 = fVar11 / local_68;
        fVar12 = local_68;
      }
      local_60 = lVar5;
      if (*(longlong *)(param_1 + 0x790) != 0) {
        cVar3 = FUN_142088620();
        if ((cVar3 == '\0') && (0.0 < fVar10)) {
          (**(code **)(**(longlong **)(param_1 + 0x790) + 0x278))(*(longlong **)(param_1 + 0x790),1)
          ;
        }
        if ((lVar5 != 0) &&
           (lVar6 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 0x790) + 0x1b8), lVar5 != lVar6)) {
          FUN_141017dd0(*(undefined8 *)(param_1 + 0x790),lVar5);
        }
        FUN_14101d3b0(*(undefined8 *)(param_1 + 0x790),1,fVar10);
      }
      FUN_140ce28e0(&local_e8);
      goto LAB_140eef1f7;
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x790);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x278))(plVar1,0);
  }
LAB_140eef1f7:
  lVar5 = FUN_140cff230(lVar4);
  if (lVar5 != 0) {
    uVar7 = FUN_140cff230(lVar4);
    FUN_140d57db0(uVar7,uVar9 & 0xffffffff,fVar11,fVar12);
  }
  return;
}



// FUNCTION 140eef260 FUN_140eef260 body=1300 status=ok
// SIG undefined FUN_140eef260(void)

void FUN_140eef260(longlong param_1)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  longlong *plVar6;
  bool bVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90 [8];
  longlong *local_88;
  undefined8 local_78;
  undefined8 local_70;
  
  lVar8 = FWeakObjectPtr::Get(param_1 + 0x5d8);
  if (lVar8 == 0) {
LAB_140eef2bf:
    lVar8 = 0;
  }
  else {
    lVar9 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (!bVar7) goto LAB_140eef2bf;
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar9 = *(longlong *)(DAT_146b33f38 + 0xe0);
  if (lVar9 == 0) {
LAB_140eef46b:
    lVar10 = 0;
  }
  else {
    lVar12 = lVar9 + 0x120;
    lVar10 = FWeakObjectPtr::Get(lVar12);
    if (lVar10 == 0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 != *(int *)(lVar9 + 0x128)) && (*(longlong *)(lVar9 + 0x130) != 0)) {
        lVar10 = FUN_141796df0();
        FWeakObjectPtr::operator=(lVar12,lVar10);
        if ((lVar10 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(lVar9 + 0x128) = DAT_1464b56f4;
        }
        lVar10 = FWeakObjectPtr::Get(lVar12);
        if (lVar10 != 0) goto LAB_140eef386;
      }
      goto LAB_140eef46b;
    }
LAB_140eef386:
    lVar11 = FUN_1414d02a0();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (!bVar7) goto LAB_140eef46b;
    lVar10 = FWeakObjectPtr::Get(lVar12);
    if (lVar10 == 0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 != *(int *)(lVar9 + 0x128)) && (*(longlong *)(lVar9 + 0x130) != 0)) {
        lVar10 = FUN_141796df0();
        FWeakObjectPtr::operator=(lVar12,lVar10);
        if ((lVar10 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(lVar9 + 0x128) = DAT_1464b56f4;
        }
        lVar10 = FWeakObjectPtr::Get(lVar12);
        if (lVar10 != 0) goto LAB_140eef435;
      }
      goto LAB_140eef46b;
    }
LAB_140eef435:
    lVar12 = FUN_1414d02a0();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8
         ) != lVar12 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (!bVar7) goto LAB_140eef46b;
  }
  if (lVar8 == 0) {
    return;
  }
  if (lVar9 == 0) {
    return;
  }
  if (lVar10 == 0) {
    return;
  }
  plVar6 = *(longlong **)(lVar8 + 0x848);
  if (plVar6 == (longlong *)0x0) {
    return;
  }
  lVar9 = FUN_1413f82e0();
  if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
      lVar9 + 0x88)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  if (!bVar7) {
    return;
  }
  uVar16 = 0xffffffff;
  uVar15 = 0xffffffff;
  fVar19 = 0.0;
  fVar18 = 0.0;
  uVar13 = FUN_141477fa0();
  lVar9 = (**(code **)(*plVar6 + 0x628))(plVar6,uVar13);
  if (lVar9 != 0) {
    cVar4 = *(char *)(lVar9 + 0x498);
    uVar16 = (ulonglong)cVar4;
    cVar5 = *(char *)(lVar9 + 0x499);
    uVar15 = (ulonglong)cVar5;
    if ((cVar4 < '\0') || (*(int *)(lVar10 + 0x38) <= (int)cVar4)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar7) {
      if ((cVar5 < '\0') || (*(int *)(lVar10 + 0x48) <= (int)cVar5)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (bVar7) {
        puVar14 = (undefined8 *)(uVar16 * 0x30 + *(longlong *)(lVar10 + 0x30));
        local_98 = *puVar14;
        FText::FText(local_90,puVar14 + 1);
        local_78 = puVar14[4];
        local_70 = puVar14[5];
        lVar12 = uVar15 * 0x30 + *(longlong *)(lVar10 + 0x40);
        FText::FText(local_c0,lVar12 + 8);
        local_a8 = *(undefined8 *)(lVar12 + 0x20);
        fVar17 = 0.0;
        fVar2 = *(float *)(lVar9 + 0x49c);
        local_a0 = *(undefined8 *)(lVar12 + 0x28);
        if (0.0 < fVar2) {
          fVar18 = *(float *)(lVar9 + 0x4a0);
          fVar17 = fVar18 / fVar2;
          fVar19 = fVar2;
        }
        FUN_140f11760(param_1,fVar17,*(undefined8 *)(param_1 + 0x798),local_70);
        FUN_140f11760(param_1,fVar17,*(undefined8 *)(param_1 + 0x7a0),local_a0);
        if (local_b8 != (longlong *)0x0) {
          LOCK();
          plVar6 = local_b8 + 1;
          lVar9 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
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
        if (local_88 != (longlong *)0x0) {
          LOCK();
          plVar6 = local_88 + 1;
          lVar9 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
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
      }
    }
    if (cVar4 != -1) goto LAB_140eef6c7;
  }
  plVar6 = *(longlong **)(param_1 + 0x798);
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x278))(plVar6,0);
  }
LAB_140eef6c7:
  if (((int)uVar15 == -1) && (plVar6 = *(longlong **)(param_1 + 0x7a0), plVar6 != (longlong *)0x0))
  {
    (**(code **)(*plVar6 + 0x278))(plVar6,0);
  }
  lVar9 = FUN_140cff230(lVar8);
  if (lVar9 != 0) {
    FUN_140d58820(lVar9,*(undefined4 *)(lVar8 + 0x19c0),uVar16 & 0xffffffff,fVar18,fVar19,1);
    FUN_140d58820(lVar9,*(undefined4 *)(lVar8 + 0x19c0),uVar15 & 0xffffffff,fVar18,fVar19,0);
  }
  return;
}



// FUNCTION 140eef780 FUN_140eef780 body=56 status=ok
// SIG undefined FUN_140eef780(void)

void FUN_140eef780(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x560) != 0) {
    FUN_1407665e0(*(longlong *)(param_1 + 0x560) + 0x7f0,param_1);
    *(undefined1 *)(*(longlong *)(param_1 + 0x560) + 0x800) = 0;
  }
  return;
}



// FUNCTION 140eef7c0 FUN_140eef7c0 body=104 status=ok
// SIG undefined FUN_140eef7c0(void)

void FUN_140eef7c0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  undefined8 local_18;
  undefined8 local_10;
  
  lVar1 = *param_1;
  local_18 = 0;
  local_10 = 0;
  puVar2 = (undefined8 *)FName::FName(local_res8,L"Duel_Accept",1);
  (**(code **)(lVar1 + 0x4e8))(param_1,*puVar2,&local_18);
  FWeakObjectPtr::operator=(param_1 + 200,param_2);
  return;
}



// FUNCTION 140eef830 FUN_140eef830 body=123 status=ok
// SIG undefined FUN_140eef830(void)

void FUN_140eef830(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_28 [8];
  longlong *local_20;
  
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_28,L"Duel Was Accepted",L"GFxDuelingWidget",L"DuelWasAccepted");
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



// FUNCTION 140eef8b0 FUN_140eef8b0 body=56 status=ok
// SIG undefined FUN_140eef8b0(void)

void FUN_140eef8b0(longlong param_1)

{
  undefined4 local_res8;
  undefined4 local_resc;
  
  FWeakObjectPtr::operator=(&local_res8,0);
  *(undefined4 *)(param_1 + 0x640) = local_res8;
  *(undefined4 *)(param_1 + 0x644) = local_resc;
  FUN_140f08520(param_1,0);
  return;
}



// FUNCTION 140eef8f0 FUN_140eef8f0 body=123 status=ok
// SIG undefined FUN_140eef8f0(void)

void FUN_140eef8f0(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_28 [8];
  longlong *local_20;
  
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_28,L"Duel Was Declined",L"GFxDuelingWidget",L"DuelWasDecline");
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



// FUNCTION 140eef970 FUN_140eef970 body=124 status=ok
// SIG undefined FUN_140eef970(void)

void FUN_140eef970(longlong *param_1)

{
  if (param_1[0xca] != 0) {
    *(undefined4 *)(param_1[0xca] + 0x244) = *(undefined4 *)((longlong)param_1 + 0x63c);
    *(undefined4 *)(param_1[0xca] + 0x248) = *(undefined4 *)((longlong)param_1 + 0x634);
    if (((char)param_1[199] != '\0') && (*(int *)(param_1[0xca] + 0x1cc) == 0)) {
      (**(code **)(*param_1 + 0x580))(param_1,0);
      *(undefined4 *)(param_1[0xca] + 0x1cc) = 0;
      FUN_140ee2c70();
      return;
    }
  }
  return;
}



// FUNCTION 140eef9f0 FUN_140eef9f0 body=775 status=ok
// SIG undefined FUN_140eef9f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_140eef9f0(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  plVar6 = *(longlong **)(param_1 + 0x188);
  plVar5 = plVar6 + (longlong)*(int *)(param_1 + 400) * 2;
  while( true ) {
    if (plVar6 == plVar5) {
      return;
    }
    if ((param_2 != 0) && (lVar8 = *plVar6, param_2 == lVar8)) break;
    plVar6 = plVar6 + 2;
  }
  if ((*(int *)(param_1 + 0x238) < 1) ||
     ((plVar5 = *(longlong **)(param_1 + 0x230), *plVar5 != lVar8 ||
      (*(int *)(param_1 + 0x1cc) != 2)))) {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    if ((*(longlong *)(DAT_146b33f38 + 0x90) != 0) &&
       (puVar4 = (undefined8 *)FUN_1411e11d0(*(longlong *)(DAT_146b33f38 + 0x90),lVar8),
       puVar4 != (undefined8 *)0x0)) {
      iVar3 = 1;
      if (1 < *(int *)(param_1 + 0x238)) {
        plVar5 = *(longlong **)(param_1 + 0x230);
        do {
          plVar5 = plVar5 + 5;
          if (*plVar5 == *plVar6) {
            plVar5 = *(longlong **)(param_1 + 0x230) + (longlong)iVar3 * 5;
            if (plVar5 != (longlong *)0x0) goto LAB_140eefc89;
            break;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(param_1 + 0x238));
      }
      local_98 = (undefined1 *)*puVar4;
      uStack_8c = (undefined4)plVar6[1];
      uStack_90 = 0;
      local_88._0_4_ = 0;
      uStack_80 = 0;
      local_78 = 0;
      plVar5 = (longlong *)(param_1 + 0x230);
      iVar3 = *(int *)(param_1 + 0x238);
      lVar8 = (longlong)iVar3;
      *(int *)(param_1 + 0x238) = iVar3 + 1;
      if (*(int *)(param_1 + 0x23c) < iVar3 + 1) {
        TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar5,iVar3);
      }
      lVar2 = *plVar5;
      puVar1 = (undefined8 *)(lVar2 + lVar8 * 0x28);
      *puVar1 = local_98;
      puVar1[1] = CONCAT44(uStack_8c,uStack_90);
      puVar1 = (undefined8 *)(lVar2 + 0x10 + lVar8 * 0x28);
      *puVar1 = CONCAT44(local_88._4_4_,(undefined4)local_88);
      puVar1[1] = uStack_80;
      *(undefined8 *)(lVar2 + 0x20 + lVar8 * 0x28) = local_78;
      plVar5 = (longlong *)(*plVar5 + (longlong)(*(int *)(param_1 + 0x238) + -1) * 0x28);
      if (plVar5 != (longlong *)0x0) {
LAB_140eefc89:
        *(int *)(plVar5 + 2) = param_3;
        iVar3 = param_3 - *(int *)((longlong)plVar5 + 0xc);
        *(int *)(plVar5 + 1) = iVar3;
        if (iVar3 < 1) {
          if (-1 < iVar3) goto LAB_140eefcba;
          plVar5[3] = puVar4[3];
          lVar8 = puVar4[4];
        }
        else {
          plVar5[3] = puVar4[1];
          lVar8 = puVar4[2];
        }
        plVar5[4] = lVar8;
      }
    }
  }
  else {
    *(int *)((longlong)plVar5 + 0xc) = (int)plVar5[2];
    *(int *)(plVar5 + 1) = param_3 - (int)plVar5[2];
    *(int *)(plVar5 + 2) = param_3;
    FWeakObjectPtr::operator=(&local_a8,param_1);
    local_68 = (longlong *)0x0;
    local_58 = 0;
    puVar4 = (undefined8 *)FUN_140438ef0(0x18,&local_88);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &PTR_FUN_1444f8920;
      puVar4[1] = param_1;
      *(undefined4 *)(puVar4 + 2) = local_a8;
      *(undefined4 *)((longlong)puVar4 + 0x14) = local_a4;
    }
    local_98 = &LAB_140ee0880;
    FUN_14208c300(param_1,&local_98);
    if (local_58 != 0) {
      plVar7 = &local_88;
      if (local_68 != (longlong *)0x0) {
        plVar7 = local_68;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_68 != (longlong *)0x0) {
      FMemory::Free();
    }
    *(undefined4 *)(param_1 + 0x1cc) = 1;
    FUN_140f086b0(param_1,param_3,0);
    FUN_140f031a0(param_1,(int)plVar5[1]);
    if (*(char *)(param_1 + 0x251) != '\0') {
      FUN_142f0ad20(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x230) + 0x18));
    }
  }
LAB_140eefcba:
  *(int *)(plVar6 + 1) = param_3;
  FUN_140f03830(param_1);
  return;
}



// FUNCTION 140eefd00 FUN_140eefd00 body=621 status=ok
// SIG undefined FUN_140eefd00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140eefd00(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_1ac;
  undefined8 local_1a0;
  longlong local_198 [3];
  undefined4 local_180;
  int local_17c;
  int local_178;
  undefined8 local_170;
  longlong local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined8 local_150;
  undefined1 local_148 [16];
  undefined1 local_138 [32];
  undefined1 local_118 [80];
  undefined1 *local_c8 [2];
  longlong local_b8 [4];
  longlong *local_98;
  int local_88;
  undefined1 local_78 [16];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  local_198[0] = 0;
  local_178 = 0;
  local_1a0 = 0;
  local_198[1] = 0;
  local_1b0 = 0xffffffff;
  local_1ac = 0;
  local_1b8 = 0;
  if (param_3 == 0) {
    local_1a0 = 0;
    local_1ac = 0;
    local_17c = local_178;
  }
  else {
    uVar2 = FSoftObjectPath::FSoftObjectPath(local_138,param_3);
    FSoftObjectPath::operator=(&local_1a0,uVar2);
    FWeakObjectPtr::operator=(&local_1b0,param_3);
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    local_1ac = CONCAT44(DAT_1464b56f4,(int)local_1ac);
    local_178 = DAT_1464b56f4;
    local_17c = (int)local_1ac;
  }
  local_170 = 0;
  local_168 = 0;
  local_160 = 0;
  local_1b8 = 0;
  local_198[2] = param_1;
  local_180 = local_1b0;
  local_150 = local_1a0;
  FString::FString(local_148,local_198);
  FSoftObjectPath::operator=(&local_170,&local_150);
  local_98 = (longlong *)0x0;
  local_88 = 0;
  local_158 = param_4;
  puVar3 = (undefined8 *)FUN_140438ef0(0x40,local_b8);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_144605d28;
    puVar3[1] = local_198[2];
    TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(puVar3 + 2,&local_180);
    *(undefined4 *)(puVar3 + 7) = local_158;
  }
  local_c8[0] = &LAB_140ee0f40;
  FUN_1420849a0(param_1,local_78,local_c8);
  if (local_88 != 0) {
    plVar4 = local_b8;
    if (local_98 != (longlong *)0x0) {
      plVar4 = local_98;
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (local_98 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_168 != 0) {
    FMemory::Free();
  }
  if (local_198[0] != 0) {
    FMemory::Free();
  }
  cVar1 = FUN_142ebdc00(param_1);
  if ((cVar1 == '\0') || (cVar1 = FUN_142eba870(param_1), cVar1 != '\0')) {
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_118,local_78);
    FUN_14208c4f0(param_1,local_118);
  }
  else {
    FUN_14208d480(param_1,local_78);
    FUN_142eb05b0(param_1);
  }
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
  return;
}



// FUNCTION 140eeff70 FUN_140eeff70 body=40 status=ok
// SIG undefined FUN_140eeff70(void)

void FUN_140eeff70(longlong param_1,undefined8 param_2,longlong param_3)

{
  if ((*(char *)(param_3 + 4) == '\0') && (*(char *)(param_3 + 5) == '\0')) {
    *(undefined1 *)(param_1 + 0x718) = 0;
    FUN_140f0fb60();
    return;
  }
  *(undefined1 *)(param_1 + 0x718) = 1;
  FUN_140f0fb60();
  return;
}



// FUNCTION 140eeffa0 FUN_140eeffa0 body=442 status=ok
// SIG undefined FUN_140eeffa0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140eeffa0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  undefined1 auStack_e8 [32];
  undefined4 local_c8 [4];
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
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x5c8);
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
    if (bVar1) goto LAB_140ef001b;
  }
  lVar2 = 0;
LAB_140ef001b:
  local_c8[0] = 0xffffffff;
  uVar6 = 0xffffffff;
  if (lVar2 != 0) {
    FUN_14170c210(local_c8,lVar2);
    uVar6 = local_c8[0];
  }
  local_c8[0] = 0xffffffff;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar4 = (undefined8 *)FUN_140438ef0(0x18,local_a8);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_FUN_144266c70;
    puVar4[1] = param_1;
    *(undefined4 *)(puVar4 + 2) = uVar6;
    uVar6 = 0xffffffff;
  }
  local_b8[0] = &LAB_140ee0bc0;
  uVar5 = FUN_1420849a0(param_1,local_68,local_b8);
  FUN_14208c260(param_1,uVar5);
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
  if (local_78 != 0) {
    plVar7 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar7 = local_88;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_1416f8340(uVar6);
  FUN_1416f8340(local_c8[0]);
  FUN_142ebfbd0(param_1);
  return;
}



// FUNCTION 140ef0160 FUN_140ef0160 body=112 status=ok
// SIG undefined FUN_140ef0160(void)

void FUN_140ef0160(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x5c8);
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
      FUN_140cc9500(lVar2,param_1);
    }
  }
  FUN_142ebfbd0(param_1);
  return;
}



// FUNCTION 140ef01d0 FUN_140ef01d0 body=29 status=ok
// SIG undefined FUN_140ef01d0(void)

void FUN_140ef01d0(undefined8 param_1)

{
  FUN_140f0b100(param_1,0);
  FUN_142ebfbd0(param_1);
  return;
}



// FUNCTION 140ef01f0 FUN_140ef01f0 body=33 status=ok
// SIG undefined FUN_140ef01f0(void)

void FUN_140ef01f0(longlong *param_1)

{
  (**(code **)(*param_1 + 0x580))(param_1,1);
  FUN_142ebfbd0(param_1);
  return;
}



// FUNCTION 140ef0220 FUN_140ef0220 body=32 status=ok
// SIG undefined FUN_140ef0220(void)

void FUN_140ef0220(longlong *param_1)

{
  FUN_142ebfbd0();
                    /* WARNING: Could not recover jumptable at 0x000140ef0239. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x5d8))(param_1);
  return;
}



// FUNCTION 140ef0240 FUN_140ef0240 body=301 status=ok
// SIG undefined FUN_140ef0240(void)

void FUN_140ef0240(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong local_18;
  undefined8 local_10;
  
  if (0 < (int)param_1[0xcc]) {
    (**(code **)(*param_1 + 0x578))(param_1,1);
    if ((param_1[200] != 0) && (*(char *)((longlong)param_1 + 0x664) != '\0')) {
      local_18 = 0;
      local_10 = 4;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
      FGenericPlatformString::Memcpy(local_18,&DAT_1445f5208,8);
      FUN_142088910(param_1[200],&local_18);
      if (local_18 != 0) {
        FMemory::Free();
      }
    }
    plVar2 = (longlong *)param_1[0xc9];
    plVar1 = plVar2 + (longlong)(int)param_1[0xca] * 3;
    for (; plVar2 != plVar1; plVar2 = plVar2 + 3) {
      if (((char)plVar2[2] != '\0') && (*plVar2 != 0)) {
        local_18 = 0;
        local_10 = 4;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
        FGenericPlatformString::Memcpy(local_18,&DAT_1445f5210,8);
        FUN_142088910(*plVar2);
        if (local_18 != 0) {
          FMemory::Free();
        }
      }
    }
  }
  FUN_142ebfbd0(param_1);
  return;
}



// FUNCTION 140ef0370 FUN_140ef0370 body=279 status=ok
// SIG undefined FUN_140ef0370(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ef0370(undefined8 param_1)

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
  local_b8[0] = &LAB_140ee1020;
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
  FUN_142ebfbd0(param_1);
  return;
}



// FUNCTION 140ef0490 FUN_140ef0490 body=442 status=ok
// SIG undefined FUN_140ef0490(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ef0490(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  undefined1 auStack_e8 [32];
  undefined4 local_c8 [4];
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
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x5c8);
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
    if (bVar1) goto LAB_140ef050b;
  }
  lVar2 = 0;
LAB_140ef050b:
  local_c8[0] = 0xffffffff;
  uVar6 = 0xffffffff;
  if (lVar2 != 0) {
    FUN_14170c210(local_c8,lVar2);
    uVar6 = local_c8[0];
  }
  local_c8[0] = 0xffffffff;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar4 = (undefined8 *)FUN_140438ef0(0x18,local_a8);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_FUN_144266c70;
    puVar4[1] = param_1;
    *(undefined4 *)(puVar4 + 2) = uVar6;
    uVar6 = 0xffffffff;
  }
  local_b8[0] = &LAB_140ee0d60;
  uVar5 = FUN_1420849a0(param_1,local_68,local_b8);
  FUN_14208c260(param_1,uVar5);
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
  if (local_78 != 0) {
    plVar7 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar7 = local_88;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_1416f8340(uVar6);
  FUN_1416f8340(local_c8[0]);
  FUN_142ec0310(param_1);
  return;
}



// FUNCTION 140ef0650 FUN_140ef0650 body=279 status=ok
// SIG undefined FUN_140ef0650(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ef0650(undefined8 param_1)

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
  local_b8[0] = &LAB_140ee0a00;
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
  FUN_142ec0310(param_1);
  return;
}



// FUNCTION 140ef0770 FUN_140ef0770 body=87 status=ok
// SIG undefined FUN_140ef0770(void)

void FUN_140ef0770(undefined8 param_1)

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
  local_58[0] = &LAB_140ee0c10;
  FUN_14204c280(local_58);
  FUN_142ec0310(param_1);
  return;
}



// FUNCTION 140ef07d0 FUN_140ef07d0 body=53 status=ok
// SIG undefined FUN_140ef07d0(void)

void FUN_140ef07d0(undefined8 param_1)

{
  longlong lVar1;
  
  thunk_FUN_14208af70();
  lVar1 = FUN_140eccb70(param_1);
  if (lVar1 != 0) {
    FUN_140483870(lVar1 + 0xa38,param_1);
    return;
  }
  return;
}



// FUNCTION 140ef0810 OnTargetUnavailable body=27 status=ok
// SIG undefined OnTargetUnavailable(void)

void ARemnantSpectatorPawn::OnTargetUnavailable(undefined8 param_1)

{
  FUN_140ee2770();
  FUN_142ec0310(param_1);
  return;
}



// FUNCTION 140ef0830 FUN_140ef0830 body=279 status=ok
// SIG undefined FUN_140ef0830(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ef0830(undefined8 param_1)

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
  FUN_142ec0310(param_1);
  return;
}



// FUNCTION 140ef0950 FUN_140ef0950 body=279 status=ok
// SIG undefined FUN_140ef0950(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ef0950(undefined8 param_1)

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
  FUN_142ec0310(param_1);
  return;
}



// FUNCTION 140ef0a70 FUN_140ef0a70 body=111 status=ok
// SIG undefined FUN_140ef0a70(void)

void FUN_140ef0a70(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x1b0);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x1b0) = 0;
    if (*(int *)(lVar1 + 0x1b4) != 0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(lVar1 + 0x1a8,0);
    }
    lVar1 = *(longlong *)(param_1 + 0x1b0);
    *(undefined4 *)(lVar1 + 0x1c0) = 0;
    if (*(int *)(lVar1 + 0x1c4) != 0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(lVar1 + 0x1b8,0);
    }
  }
  FMulticastDelegateBase<FWeakObjectPtr>::Clear(param_1 + 0x180);
  FMulticastDelegateBase<FWeakObjectPtr>::Clear(param_1 + 0x198);
  return;
}



// FUNCTION 140ef0ae0 FUN_140ef0ae0 body=1117 status=ok
// SIG undefined FUN_140ef0ae0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ef0ae0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  longlong *plVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140 [2];
  undefined8 local_138;
  longlong *local_130;
  undefined8 local_128;
  longlong *local_120;
  undefined8 local_118;
  longlong *local_110;
  undefined8 local_108;
  longlong *local_100;
  undefined8 local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  longlong *local_e0;
  undefined1 *local_d8 [2];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  undefined1 local_88 [16];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  local_140[0] = 0xffffffff;
  if (*(longlong *)(param_1 + 0x710) != 0) {
    FUN_14170c210(local_140);
  }
  local_144 = 0xffffffff;
  if (*(longlong *)(param_1 + 0x6f8) != 0) {
    FUN_14170c210(&local_144);
  }
  local_148 = 0xffffffff;
  uVar7 = 0xffffffff;
  if (*(longlong *)(param_1 + 0x718) != 0) {
    FUN_14170c210(&local_148);
    uVar7 = local_148;
  }
  uVar10 = local_140[0];
  uVar9 = local_144;
  local_148 = 0xffffffff;
  local_144 = 0xffffffff;
  local_140[0] = 0xffffffff;
  local_a8 = (longlong *)0x0;
  local_98 = 0;
  puVar5 = (undefined8 *)FUN_140438ef0(0x20,local_c8);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_FUN_144605c68;
    puVar5[1] = param_1;
    *(undefined4 *)(puVar5 + 2) = uVar7;
    *(undefined4 *)((longlong)puVar5 + 0x14) = uVar9;
    uVar9 = 0xffffffff;
    *(undefined4 *)(puVar5 + 3) = uVar10;
    uVar10 = 0xffffffff;
    uVar7 = 0xffffffff;
  }
  local_d8[0] = &LAB_140ee0a90;
  uVar6 = FUN_1420849a0(param_1,local_88,local_d8);
  FUN_14208c260(param_1,uVar6);
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
  if (local_98 != 0) {
    plVar8 = local_c8;
    if (local_a8 != (longlong *)0x0) {
      plVar8 = local_a8;
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8,0);
    }
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_1416f8340(uVar10);
  FUN_1416f8340(uVar9);
  FUN_1416f8340(uVar7);
  FUN_1416f8340(local_148);
  FUN_1416f8340(local_144);
  FUN_1416f8340(local_140[0]);
  local_130 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x808) != &local_138) {
    *(undefined8 *)(param_1 + 0x808) = 0;
    local_138 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x810,&local_130);
    plVar8 = local_130;
    if (local_130 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_130 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_130)(local_130);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_130 + 8))(local_130,1);
        }
      }
    }
  }
  local_120 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x858) != &local_128) {
    *(undefined8 *)(param_1 + 0x858) = 0;
    local_128 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x860,&local_120);
    plVar8 = local_120;
    if (local_120 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_120 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_120)(local_120);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_120 + 8))(local_120,1);
        }
      }
    }
  }
  local_110 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x848) != &local_118) {
    *(undefined8 *)(param_1 + 0x848) = 0;
    local_118 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x850,&local_110);
    plVar8 = local_110;
    if (local_110 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_110 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_110)(local_110);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_110 + 8))(local_110,1);
        }
      }
    }
  }
  local_100 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x838) != &local_108) {
    *(undefined8 *)(param_1 + 0x838) = 0;
    local_108 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x840,&local_100);
    plVar8 = local_100;
    if (local_100 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_100 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_100)(local_100);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_100 + 8))(local_100,1);
        }
      }
    }
  }
  TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty(param_1 + 0x7e8,0);
  TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty(param_1 + 0x7f8,0);
  local_f0 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x828) != &local_f8) {
    *(undefined8 *)(param_1 + 0x828) = 0;
    local_f8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x830,&local_f0);
    plVar8 = local_f0;
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_f0 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_f0)(local_f0);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_f0 + 8))(local_f0,1);
        }
      }
    }
  }
  local_e0 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x818) != &local_e8) {
    *(undefined8 *)(param_1 + 0x818) = 0;
    local_e8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x820,&local_e0);
    plVar8 = local_e0;
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_e0 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_e0)(local_e0);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_e0 + 8))(local_e0,1);
        }
      }
    }
  }
  FUN_142ec0310(param_1);
  return;
}



// FUNCTION 140ef0f40 FUN_140ef0f40 body=644 status=ok
// SIG undefined FUN_140ef0f40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ef0f40(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  FWeakObjectPtr::operator=(&local_98,param_1);
  local_88 = local_98;
  local_84 = local_94;
  local_48 = (longlong *)0x0;
  local_38 = 0;
  puVar5 = (undefined8 *)FUN_140438ef0(0x18,local_68);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_FUN_1444f8920;
    puVar5[1] = param_1;
    *(undefined4 *)(puVar5 + 2) = local_98;
    *(undefined4 *)((longlong)puVar5 + 0x14) = local_94;
  }
  local_78[0] = &LAB_140ee0880;
  FUN_14208c300(param_1,local_78);
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
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x1a8));
  LOCK();
  *(undefined4 *)(param_1 + 0x1b0) = 1;
  UNLOCK();
  if (0 < *(int *)(param_1 + 0x1a0)) {
    puVar5 = (undefined8 *)(param_1 + 0x198);
    do {
      plVar7 = *(longlong **)*puVar5;
      if (plVar7 != (longlong *)0x0) {
        lVar6 = UPlatformInterfaceBase::GetPrivateStaticClass();
        if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
            lVar6 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          (**(code **)(*plVar7 + 0x288))(plVar7);
        }
      }
      *(undefined8 *)*puVar5 = 0;
      iVar8 = *(int *)(param_1 + 0x1a0);
      if (iVar8 + -1 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)*puVar5,(void *)((longlong)*puVar5 + 8),(longlong)(iVar8 + -1) << 3);
        iVar8 = *(int *)(param_1 + 0x1a0);
      }
      *(int *)(param_1 + 0x1a0) = iVar8 + -1;
      TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(puVar5);
    } while (0 < *(int *)(param_1 + 0x1a0));
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x1a8));
  LOCK();
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  UNLOCK();
  iVar8 = *(int *)(param_1 + 0x1c0);
  if (iVar8 != 0) {
    plVar7 = (longlong *)(*(longlong *)(param_1 + 0x1b8) + 8);
    do {
      plVar3 = (longlong *)*plVar7;
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
      plVar7 = plVar7 + 2;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  if (*(int *)(param_1 + 0x1c4) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x1b8,0);
  }
  plVar7 = *(longlong **)(param_1 + 0x228);
  if (plVar7 != (longlong *)0x0) {
    lVar6 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      (**(code **)(*plVar7 + 0x288))(plVar7);
    }
  }
  *(undefined8 *)(param_1 + 0x228) = 0;
  thunk_FUN_14208af70(param_1);
  return;
}



// FUNCTION 140ef11d0 FUN_140ef11d0 body=437 status=ok
// SIG undefined FUN_140ef11d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ef11d0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined1 auStack_e8 [32];
  undefined4 local_c8 [4];
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
  lVar6 = *(longlong *)(param_1 + 0x650);
  plVar5 = (longlong *)0x0;
  if (lVar6 != 0) {
    plVar1 = (longlong *)(lVar6 + 0x170);
    if (*(int *)(lVar6 + 0x178) != 0) {
      plVar5 = (longlong *)*plVar1;
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x28))(plVar5,0);
      if (*plVar1 != 0) {
        lVar2 = FMemory::Realloc(*plVar1,0,0);
        *plVar1 = lVar2;
      }
      *(undefined4 *)(lVar6 + 0x178) = 0;
      lVar6 = *(longlong *)(param_1 + 0x650);
    }
  }
  local_c8[0] = 0xffffffff;
  uVar7 = 0xffffffff;
  if (lVar6 != 0) {
    FUN_14170c210(local_c8);
    uVar7 = local_c8[0];
  }
  local_c8[0] = 0xffffffff;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar3 = (undefined8 *)FUN_140438ef0(0x18,local_a8);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_144266c70;
    puVar3[1] = param_1;
    *(undefined4 *)(puVar3 + 2) = uVar7;
    uVar7 = 0xffffffff;
  }
  local_b8[0] = &LAB_140ee0a10;
  uVar4 = FUN_1420849a0(param_1,local_68,local_b8);
  FUN_14208c260(param_1,uVar4);
  if (local_28 != 0) {
    plVar5 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar5 = local_38;
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
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
  FUN_1416f8340(uVar7);
  FUN_1416f8340(local_c8[0]);
  FUN_140f0eb40(param_1);
  FUN_142ec0310(param_1);
  return;
}



// FUNCTION 140ef1390 FUN_140ef1390 body=105 status=ok
// SIG undefined FUN_140ef1390(void)

void FUN_140ef1390(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x658);
  if (cVar2 != '\0') {
    uVar1 = FWeakObjectPtr::Get(param_1 + 0x658);
    FUN_140ee3d10(param_1,uVar1);
  }
  *(undefined4 *)(param_1 + 0x650) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x654)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x648,0);
  }
  FUN_140f0ea30(param_1);
  FUN_142ec0310(param_1);
  return;
}



// FUNCTION 140ef1400 OnTargetUnavailable body=27 status=ok
// SIG undefined OnTargetUnavailable(void)

void ARemnantSpectatorPawn::OnTargetUnavailable(undefined8 param_1)

{
  FUN_140f0ea30();
  FUN_142ec0310(param_1);
  return;
}



// FUNCTION 140ef1420 FUN_140ef1420 body=266 status=ok
// SIG undefined FUN_140ef1420(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ef1420(longlong param_1)

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
  if (*(longlong *)(param_1 + 0x2b8) != 0) {
    FUN_142f06340(*(longlong *)(param_1 + 0x2b8),param_1 + 0x6c0);
  }
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
  local_68[0] = &LAB_140ee0b50;
  FUN_14208c260(param_1,local_68);
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
  FUN_142ec0310(param_1);
  return;
}



// FUNCTION 140ef1530 FUN_140ef1530 body=213 status=ok
// SIG undefined FUN_140ef1530(void)

void FUN_140ef1530(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x148))();
    lVar2 = FUN_140c12480(uVar1);
    if ((lVar2 != 0) && (lVar2 = UNiagaraSystem::GetEffectType(lVar2), lVar2 != 0)) {
      TBaseMulticastDelegate<void>::Remove(lVar2 + 0x68,*(undefined8 *)(param_1 + 0x230));
      TBaseMulticastDelegate<void>::Remove(lVar2 + 0x80,*(undefined8 *)(param_1 + 0x238));
    }
  }
  if ((*(longlong *)(param_1 + 0x38) != 0) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x2b8), lVar2 != 0)) {
    FUN_142f06340(lVar2,param_1 + 0x220);
  }
  if (*(longlong *)(param_1 + 600) != 0) {
    FUN_142eb3740();
    FUN_1407665e0(*(longlong *)(param_1 + 600) + 0x38,param_1);
    FUN_1407665e0(*(longlong *)(param_1 + 600) + 0x28,param_1);
    *(undefined8 *)(param_1 + 600) = 0;
  }
  thunk_FUN_14208af70(param_1);
  return;
}



// FUNCTION 140ef1610 FUN_140ef1610 body=293 status=ok
// SIG undefined FUN_140ef1610(void)

void FUN_140ef1610(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if ((*(int *)(param_1 + 0x2f0) != 0) && (*(longlong **)(param_1 + 0x2e8) != (longlong *)0x0)) {
    cVar3 = (**(code **)(**(longlong **)(param_1 + 0x2e8) + 0x18))();
    if (cVar3 != '\0') {
      bVar2 = true;
      goto LAB_140ef1642;
    }
  }
  bVar2 = false;
LAB_140ef1642:
  if (((bVar2) && (*(int *)(param_1 + 0x2f0) != 0)) &&
     (plVar1 = *(longlong **)(param_1 + 0x2e8), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x28))(plVar1,0);
    if (*(longlong *)(param_1 + 0x2e8) != 0) {
      uVar4 = FMemory::Realloc(*(longlong *)(param_1 + 0x2e8),0,0);
      *(undefined8 *)(param_1 + 0x2e8) = uVar4;
    }
    *(undefined4 *)(param_1 + 0x2f0) = 0;
  }
  if (*(longlong *)(param_1 + 0x290) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x290) + 0x630) = 1;
  }
  FUN_142f06340(param_1,param_1 + 0x2c8);
  FUN_142f06340(param_1,param_1 + 0x2d0);
  FUN_142f06340(param_1,param_1 + 0x2d8);
  plVar1 = *(longlong **)(param_1 + 0x2b0);
  if (plVar1 != (longlong *)0x0) {
    lVar5 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  FUN_140ef0f40(param_1);
  return;
}



// FUNCTION 140ef1740 FUN_140ef1740 body=242 status=ok
// SIG undefined FUN_140ef1740(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ef1740(undefined8 param_1)

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
  local_68[0] = &LAB_140ee1090;
  FUN_14208c260(param_1,local_68);
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
  FUN_142ec0310(param_1);
  return;
}



// FUNCTION 140ef1840 FUN_140ef1840 body=475 status=ok
// SIG undefined FUN_140ef1840(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ef1840(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  longlong *plVar7;
  undefined1 auStack_108 [32];
  undefined4 local_e8 [4];
  undefined1 *local_d8 [2];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  undefined1 local_88 [16];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  uVar3 = 0;
  if (param_2 != 0) {
    lVar4 = FUN_1430228e0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    uVar3 = 0;
    if ((bVar1) && (*(longlong *)(param_1 + 0x668) != 0)) {
      uVar3 = FUN_142ff7c90(*(longlong *)(param_1 + 0x668),param_2);
    }
  }
  local_e8[0] = 0xffffffff;
  uVar6 = 0xffffffff;
  if (param_2 != 0) {
    FUN_14170c210(local_e8,param_2);
    uVar6 = local_e8[0];
  }
  local_e8[0] = 0xffffffff;
  local_a8 = (longlong *)0x0;
  local_98 = 0;
  puVar5 = (undefined8 *)FUN_140438ef0(0x18,local_c8);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_FUN_144605d40;
    puVar5[1] = param_1;
    *(undefined4 *)(puVar5 + 2) = uVar3;
    *(undefined4 *)((longlong)puVar5 + 0x14) = uVar6;
    uVar6 = 0xffffffff;
  }
  local_d8[0] = &LAB_140ee0ce0;
  FUN_1420849a0(param_1,local_88,local_d8);
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
  FUN_1416f8340(uVar6);
  FUN_1416f8340(local_e8[0]);
  cVar2 = FUN_142ebdc00(param_1);
  if (cVar2 != '\0') {
    cVar2 = FUN_142eba870(param_1);
    if (cVar2 == '\0') {
      FUN_14208d480(param_1,local_88);
      FUN_142eb05b0(param_1);
      goto LAB_140ef19c5;
    }
  }
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_d8,local_88);
  FUN_14208c4f0(param_1,local_d8);
LAB_140ef19c5:
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
  return;
}



// FUNCTION 140ef1a20 FUN_140ef1a20 body=436 status=ok
// SIG undefined FUN_140ef1a20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ef1a20(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_74;
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  if (*(int *)(param_1 + 0x1cc) == 1) {
    iVar1 = *(int *)(param_1 + 0x238);
    if (1 < iVar1) {
      plVar3 = *(longlong **)(param_1 + 0x230);
      if (*plVar3 == plVar3[5]) {
        *(undefined4 *)(param_1 + 0x1cc) = 0;
        if (iVar1 + -1 != 0) {
          _guard_xfg_dispatch_icall_nop(plVar3,plVar3 + 5,(longlong)(iVar1 + -1) * 0x28);
          iVar1 = *(int *)(param_1 + 0x238);
        }
        *(int *)(param_1 + 0x238) = iVar1 + -1;
        TArray<FCapturedPropSegment,FDefaultAllocator>::ResizeShrink(param_1 + 0x230);
        FUN_140f03830(param_1);
        return;
      }
    }
    *(undefined4 *)(param_1 + 0x1cc) = 2;
    if ((*(char *)(param_1 + 0x251) != '\0') && (0 < iVar1)) {
      FUN_142f0ad20(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x230) + 0x20));
    }
    if (*(float *)(param_1 + 0x248) <= 1e-08) {
      FUN_140efd2f0(param_1);
    }
    else {
      FWeakObjectPtr::operator=(&local_78,param_1);
      local_38 = (longlong *)0x0;
      local_28 = 0;
      puVar2 = (undefined8 *)FUN_140438ef0(0x18,local_58);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &PTR_FUN_1444f8920;
        puVar2[1] = param_1;
        *(undefined4 *)(puVar2 + 2) = local_78;
        *(undefined4 *)((longlong)puVar2 + 0x14) = local_74;
      }
      local_68[0] = &LAB_140ee0f10;
      FUN_14208c300(param_1,local_68);
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
    }
  }
  return;
}



// FUNCTION 140ef1be0 FUN_140ef1be0 body=19 status=ok
// SIG undefined FUN_140ef1be0(void)

/* WARNING: Removing unreachable block (ram,0x000140f089b0) */
/* WARNING: Removing unreachable block (ram,0x000140f088f1) */
/* WARNING: Removing unreachable block (ram,0x000140f088fc) */
/* WARNING: Removing unreachable block (ram,0x000140f08946) */
/* WARNING: Removing unreachable block (ram,0x000140f0894b) */
/* WARNING: Removing unreachable block (ram,0x000140f08954) */

void FUN_140ef1be0(longlong param_1,char param_2)

{
  longlong alStack_18 [2];
  
  if ((param_2 == '\x02') && (*(char *)(param_1 + 0x1e1) == '\0')) {
    if ((*(char *)(param_1 + 0x215) == '\0') &&
       ((*(char *)(param_1 + 0x1e1) != '\x02' &&
        (*(undefined1 *)(param_1 + 0x1e1) = 2, *(longlong *)(param_1 + 0x170) != 0)))) {
      alStack_18[1] = 0xb;
      alStack_18[0] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(alStack_18,0);
      FGenericPlatformString::Memcpy(alStack_18[0],L"secondWind",0x16);
      FUN_142088910(*(undefined8 *)(param_1 + 0x170),alStack_18);
      if (alStack_18[0] != 0) {
        FMemory::Free();
      }
    }
    return;
  }
  return;
}



// FUNCTION 140ef1c00 FUN_140ef1c00 body=44 status=ok
// SIG undefined FUN_140ef1c00(void)

void FUN_140ef1c00(longlong param_1)

{
  FUN_140f0a600(param_1,0);
  if (*(longlong *)(param_1 + 0x638) != 0) {
    FUN_140f02f20();
    return;
  }
  return;
}



// FUNCTION 140ef1c30 FUN_140ef1c30 body=123 status=ok
// SIG undefined FUN_140ef1c30(void)

void FUN_140ef1c30(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_28 [8];
  longlong *local_20;
  
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_28,L"Duel Started",L"GFxDuelingWidget",L"DuelInitiated");
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



// FUNCTION 140ef1cb0 FUN_140ef1cb0 body=123 status=ok
// SIG undefined FUN_140ef1cb0(void)

void FUN_140ef1cb0(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_28 [8];
  longlong *local_20;
  
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_28,L"Duel Timed Out",L"GFxDuelingWidget",L"DuelTimedOut");
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



// FUNCTION 140ef1d40 FUN_140ef1d40 body=8 status=ok
// SIG undefined FUN_140ef1d40(void)

void FUN_140ef1d40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140ee7f90(param_1,param_3);
  return;
}



// FUNCTION 140ef1d50 FUN_140ef1d50 body=46 status=ok
// SIG undefined FUN_140ef1d50(void)

void FUN_140ef1d50(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  
  if (param_3 == 0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = *(char *)(param_3 + 0x30);
  }
  if ((cVar1 == *(char *)(param_1 + 0x1c0)) ||
     ((*(char *)(param_1 + 0x1c0) != '\x02' && (cVar1 != '\x02')))) {
    *(undefined1 *)(param_1 + 0x200) = 0;
  }
  FUN_140ee8040();
  return;
}



// FUNCTION 140ef1d80 FUN_140ef1d80 body=237 status=ok
// SIG undefined FUN_140ef1d80(void)

void FUN_140ef1d80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  longlong local_80 [2];
  longlong local_70 [3];
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  FString::FString(local_80,param_4);
  FString::FString(local_70,param_5);
  local_28 = 0;
  local_18 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x40,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144605ea8;
    puVar1[1] = param_3;
    puVar1[2] = param_1;
    puVar1[3] = param_2;
    FString::FString(puVar1 + 4,local_80);
    FString::FString(puVar1 + 6,local_70);
  }
  local_58[0] = &LAB_140ee0b60;
  FUN_14208c4f0(param_1,local_58);
  if (local_70[0] != 0) {
    FMemory::Free();
  }
  if (local_80[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140ef1e70 FUN_140ef1e70 body=1323 status=ok
// SIG undefined FUN_140ef1e70(void)

void FUN_140ef1e70(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,int param_7)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  char cVar9;
  longlong *plVar10;
  undefined2 *puVar11;
  undefined4 in_stack_fffffffffffffef8;
  undefined2 uVar12;
  longlong local_f8 [10];
  undefined1 local_a8 [8];
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 local_90 [8];
  longlong *local_88;
  undefined1 *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  uVar12 = (undefined2)((uint)in_stack_fffffffffffffef8 >> 0x10);
  if ((char)param_7 == '\0') {
    return;
  }
  if (param_3 == 0) {
    cVar9 = '\0';
  }
  else {
    cVar9 = *(char *)(param_3 + 0x30);
  }
  if (cVar9 != *(char *)(param_1 + 0x1c0)) {
    if (*(char *)(param_1 + 0x1c0) == '\x02') {
      return;
    }
    if (cVar9 == '\x02') {
      return;
    }
  }
  if (*(longlong *)(param_1 + 0x38) == 0) {
    return;
  }
  lVar4 = FUN_1420fc090();
  if (lVar4 != 0) {
    lVar5 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (((bVar2) && (*(char *)(lVar4 + 0xaf0) != '\0')) && (*(char *)(param_1 + 0x1c0) == '\x02')) {
      return;
    }
  }
  plVar10 = (longlong *)0x0;
  if (*(longlong *)(param_1 + 0x180) != 0) {
    if (cVar9 == '\0') {
      local_f8[6] = 0;
      local_f8[7] = 9;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_f8 + 6,0);
      FGenericPlatformString::Memcpy(local_f8[6],L"echoComm",0x12);
      FUN_142088cf0(*(undefined8 *)(param_1 + 0x180),local_f8 + 6);
      lVar4 = local_f8[6];
    }
    else if (cVar9 == '\x01') {
      local_f8[4] = 0;
      local_f8[5] = 8;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_f8 + 4,0);
      FGenericPlatformString::Memcpy(local_f8[4],L"echoLog",0x10);
      FUN_142088cf0(*(undefined8 *)(param_1 + 0x180),local_f8 + 4);
      lVar4 = local_f8[4];
    }
    else if (cVar9 == '\x02') {
      local_f8[2] = 0;
      local_f8[3] = 4;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_f8 + 2,0);
      FGenericPlatformString::Memcpy(local_f8[2],&DAT_1445f0910,8);
      FUN_142088cf0(*(undefined8 *)(param_1 + 0x180),local_f8 + 2);
      lVar4 = local_f8[2];
    }
    else {
      if (cVar9 != '\x03') goto LAB_140ef2098;
      local_f8[0] = 0;
      local_f8[1] = 0x12;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_f8,0);
      FGenericPlatformString::Memcpy(local_f8[0],L"eridianWritingLog",0x24);
      FUN_142088cf0(*(undefined8 *)(param_1 + 0x180),local_f8);
      lVar4 = local_f8[0];
    }
    if (lVar4 != 0) {
      FMemory::Free();
    }
  }
LAB_140ef2098:
  *(undefined1 *)(param_1 + 0x200) = 1;
  *(undefined1 *)(param_1 + 0x261) = 0;
  if ((param_2 != 0) &&
     ((*(char *)(param_1 + 0x201) == '\0' || (*(char *)(param_1 + 0x201) == '\x03')))) {
    *(undefined1 *)(param_1 + 0x201) = 1;
    if (*(longlong *)(param_2 + 0x40) != 0) {
      if (*(int *)(param_1 + 0x1b8) == 0) {
        puVar11 = &DAT_143f3eda8;
      }
      else {
        puVar11 = *(undefined2 **)(param_1 + 0x1b0);
      }
      uVar6 = FUN_142085870(param_1,local_a0,puVar11);
      FUN_142ede260(param_1 + 0x208,uVar6);
      if (local_98 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_98 + 1;
        lVar4 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
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
      if ((*(longlong *)(param_1 + 0x210) != 0) && (*(longlong *)(param_1 + 0x218) != 0)) {
        piVar1 = (int *)(*(longlong *)(param_1 + 0x218) + 8);
        LOCK();
        iVar3 = *piVar1;
        if (iVar3 == 0) {
          *piVar1 = 0;
          iVar3 = 0;
        }
        UNLOCK();
        if (0 < iVar3) {
          plVar8 = (longlong *)(*(longlong *)(param_2 + 0x40) + 0x30);
          uVar6 = (**(code **)(*plVar8 + 0x10))(plVar8,local_90);
          UMistDebugEntityScreen::InspectEntity(param_1 + 0x208,uVar6,1,0);
          if (local_88 != (longlong *)0x0) {
            LOCK();
            plVar8 = local_88 + 1;
            lVar4 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)lVar4 == 1) {
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
        }
      }
    }
    if (*(char *)(param_1 + 0x262) == '\0') {
      local_f8[8] = 0;
      local_f8[9] = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_f8 + 8,0);
      FGenericPlatformString::Convert<char,wchar_t>
                (local_f8[8],5,&DAT_1445ef074,5,CONCAT22(uVar12,0x3f));
      FUN_142088910(param_1,local_f8 + 8);
      if (local_f8[8] != 0) {
        FMemory::Free();
      }
      *(undefined1 *)(param_1 + 0x262) = 1;
    }
    if (*(longlong *)(param_2 + 0x48) != 0) {
      if (*(longlong *)(param_1 + 0x240) != 0) {
        FUN_142f06500(*(longlong *)(param_1 + 0x240),0);
      }
      if (*(longlong *)(param_1 + 0x188) != 0) {
        local_48 = 0;
        local_38 = 0;
        puVar7 = (undefined8 *)FUN_140438ef0(0x10,local_68);
        if (puVar7 != (undefined8 *)0x0) {
          puVar7[1] = param_1;
          *puVar7 = &PTR_FUN_143f77b70;
        }
        local_78[0] = &LAB_140ee0b80;
        uVar6 = FUN_140ecde40(*(undefined8 *)(param_1 + 0x188),*(undefined8 *)(param_2 + 0x48),
                              local_78,0,0);
        *(undefined8 *)(param_1 + 0x240) = uVar6;
      }
    }
    FString::operator=(param_1 + 0x248,param_4);
    TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
    ::FindId(param_2 + 0x50,&param_7,param_5);
    if ((param_7 != -1) &&
       (lVar4 = (longlong)param_7 * 0x20 + *(longlong *)(param_2 + 0x50), lVar4 != 0)) {
      plVar10 = (longlong *)(lVar4 + 0x10);
    }
    if (((*(longlong *)(param_1 + 600) != 0) && (plVar10 != (longlong *)0x0)) && (*plVar10 != 0)) {
      FUN_140ee40c0(param_1);
      FUN_142ecd360(*(undefined8 *)(param_1 + 600),*plVar10);
      FUN_142ed3c40(*(undefined8 *)(param_1 + 600),*(int *)(param_2 + 0xa0) == 1);
      FUN_142ecd3d0(*(undefined8 *)(param_1 + 600));
      if (*(int *)(param_2 + 0xa0) == 1) {
        *(undefined1 *)(param_1 + 0x261) = 1;
      }
    }
    puVar7 = (undefined8 *)FName::FName(local_a8,PTR_s_Comm_Activated_14629dc00,1);
    FUN_142f0ad20(param_1,*puVar7);
  }
  return;
}



// FUNCTION 140ef23a0 FUN_140ef23a0 body=127 status=ok
// SIG undefined FUN_140ef23a0(void)

void FUN_140ef23a0(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  
  cVar2 = FUN_142ebd9c0(param_1 + -0x6a0);
  if (cVar2 != '\0') {
    plVar3 = (longlong *)FWeakObjectPtr::Get(param_1 + -0x20);
    if (plVar3 != (longlong *)0x0) {
      lVar4 = AGShrineUsable::GetPrivateStaticClass();
      if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
          lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        (**(code **)(*plVar3 + 0x570))(plVar3,0,param_2);
      }
    }
  }
  return;
}



// FUNCTION 140ef2420 FUN_140ef2420 body=211 status=ok
// SIG undefined FUN_140ef2420(void)

ulonglong FUN_140ef2420(longlong param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  uint7 uVar8;
  ulonglong uVar7;
  
  cVar4 = FUN_142ebd9c0(param_1 + -0x6a0);
  if (cVar4 != '\0') {
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
        (**(code **)(*plVar5 + 0x578))(plVar5);
      }
    }
  }
  plVar5 = (longlong *)FWeakObjectPtr::Get(param_1 + -0x20);
  uVar7 = 0;
  if (plVar5 != (longlong *)0x0) {
    lVar6 = AGShrineUsable::GetPrivateStaticClass();
    iVar2 = *(int *)(lVar6 + 0x90);
    uVar8 = (uint7)((ulonglong)(lVar6 + 0x88) >> 8);
    if ((*(int *)(plVar5[2] + 0x90) < iVar2) ||
       (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)iVar2 * 8) != lVar6 + 0x88)) {
      uVar7 = (ulonglong)uVar8 << 8;
    }
    else {
      uVar7 = CONCAT71(uVar8,1);
    }
    if ((char)uVar7 != '\0') {
      (**(code **)(*plVar5 + 0x580))(plVar5,CONCAT71((int7)(int3)((uint)iVar2 >> 8),1));
      LOCK();
      uVar1 = *(uint *)(plVar5 + 0xb1);
      *(uint *)(plVar5 + 0xb1) = 1;
      uVar7 = (ulonglong)uVar1;
      UNLOCK();
    }
  }
  return uVar7;
}



// FUNCTION 140ef2500 FUN_140ef2500 body=104 status=ok
// SIG undefined FUN_140ef2500(void)

ulonglong FUN_140ef2500(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  uint7 uVar5;
  ulonglong uVar4;
  
  plVar2 = (longlong *)FWeakObjectPtr::Get(param_1 + -0x20);
  uVar4 = 0;
  if (plVar2 != (longlong *)0x0) {
    lVar3 = AGShrineUsable::GetPrivateStaticClass();
    uVar5 = (uint7)((ulonglong)(lVar3 + 0x88) >> 8);
    if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      uVar4 = (ulonglong)uVar5 << 8;
    }
    else {
      uVar4 = CONCAT71(uVar5,1);
    }
    if ((char)uVar4 != '\0') {
      (**(code **)(*plVar2 + 0x580))(plVar2,0);
      LOCK();
      uVar1 = *(uint *)(plVar2 + 0xb1);
      *(uint *)(plVar2 + 0xb1) = 1;
      uVar4 = (ulonglong)uVar1;
      UNLOCK();
    }
  }
  return uVar4;
}



// FUNCTION 140ef2570 FUN_140ef2570 body=393 status=ok
// SIG undefined FUN_140ef2570(void)

void FUN_140ef2570(longlong param_1,char param_2,char param_3)

{
  longlong local_18 [2];
  
  FUN_142ec19b0();
  if (((*(longlong *)(param_1 + 0x1a8) != 0) && (*(longlong *)(param_1 + 0x1c0) != 0)) &&
     (param_2 != param_3)) {
    if ((byte)(param_2 - 5U) < 2) {
      local_18[1] = 3;
      local_18[0] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      FGenericPlatformString::Memcpy(local_18[0],&DAT_1445ffd74,6);
      FUN_142088910(*(undefined8 *)(param_1 + 0x1a8),local_18);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
      local_18[0] = 0;
      local_18[1] = 3;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      FGenericPlatformString::Memcpy(local_18[0],&DAT_1446009c4,6);
      FUN_142088910(*(undefined8 *)(param_1 + 0x1c0),local_18);
    }
    else {
      local_18[1] = 4;
      local_18[0] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      FGenericPlatformString::Memcpy(local_18[0],&DAT_144601068,8);
      FUN_142088cf0(*(undefined8 *)(param_1 + 0x1a8),local_18);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
      local_18[0] = 0;
      local_18[1] = 4;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      FGenericPlatformString::Memcpy(local_18[0],&DAT_144601070,8);
      FUN_142088cf0(*(undefined8 *)(param_1 + 0x1c0),local_18);
    }
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140ef2700 FUN_140ef2700 body=108 status=ok
// SIG undefined FUN_140ef2700(void)

void FUN_140ef2700(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong local_18;
  undefined8 local_10;
  
  cVar2 = UNF_CustomizationStatics::IsWeaponType(param_2);
  if ((cVar2 != '\0') && (lVar4 = *(longlong *)(param_1 + 0xa8), lVar4 != 0)) {
    lVar1 = *(longlong *)(param_1 + 0x40);
    local_18 = lVar1;
    if (lVar1 == 0) {
      local_10 = 0;
    }
    else {
      uVar3 = UBlendableInterface::GetPrivateStaticClass();
      local_10 = UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar3);
      lVar4 = *(longlong *)(param_1 + 0xa8);
    }
    FUN_142ed36d0(lVar4,&local_18,0);
  }
  return;
}



// FUNCTION 140ef2770 FUN_140ef2770 body=324 status=ok
// SIG undefined FUN_140ef2770(void)

void FUN_140ef2770(longlong *param_1,undefined1 param_2,undefined1 param_3,char param_4)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *local_18;
  undefined8 local_10;
  
  cVar4 = UNF_CustomizationStatics::IsWeaponType(param_2);
  cVar5 = UNF_CustomizationStatics::IsWeaponType(param_3);
  if ((cVar4 == '\0') || (cVar5 != '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((cVar4 == '\0') && (cVar5 != '\0')) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if ((char)param_1[5] == '\0') {
    uVar6 = (**(code **)(*param_1 + 0x10))(param_1);
    FUN_140ee6dc0(param_1 + -0x50,&local_18,uVar6);
    if (1 < (int)local_10) {
      FUN_142088910(param_1 + -0x50,&local_18);
    }
    if (local_18 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  lVar8 = param_1[2];
  if ((lVar8 != 0) && (bVar2)) {
    plVar1 = param_1 + -0x50;
    local_18 = plVar1;
    if (plVar1 == (longlong *)0x0) {
      local_10 = 0;
    }
    else {
      uVar7 = UBlendableInterface::GetPrivateStaticClass();
      local_10 = UObjectBaseUtility::GetInterfaceAddress(plVar1,uVar7);
      lVar8 = param_1[2];
    }
    FUN_142ed36d0(lVar8,&local_18,param_4);
  }
  if (bVar3) {
    if (*(char *)((longlong)param_1 + 0x1c) != '\0') {
      FUN_140ee4350(param_1 + -0x50,0);
      return;
    }
    if (((char)param_1[5] != '\0') && (param_4 != '\0')) {
      FUN_140ee4470(param_1 + -0x50,0);
    }
  }
  return;
}



// FUNCTION 140ef28c0 FUN_140ef28c0 body=893 status=ok
// SIG undefined FUN_140ef28c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ef28c0(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  undefined1 auStack_158 [32];
  undefined1 local_138;
  longlong **local_130;
  longlong *local_128;
  undefined8 local_120;
  longlong local_118;
  undefined8 local_110;
  longlong local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [8];
  code *local_c8 [2];
  undefined1 local_b8 [32];
  undefined8 local_98;
  undefined4 local_88;
  code *local_78;
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  FUN_142ec1f90();
  local_110 = 0x25;
  local_118 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,0);
  FGenericPlatformString::Memcpy(local_118,L"navWrapper.PNL_EchoNetNavigation_Bar",0x4a);
  local_130 = &local_128;
  local_128 = (longlong *)0x0;
  plVar6 = param_1 + 0xda;
  local_138 = 6;
  local_120 = 0;
  local_d8 = 0;
  FUN_140ecf000(param_1,plVar6,&local_118,0);
  plVar5 = local_128;
  for (iVar7 = (int)local_120; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_128 != (longlong *)0x0) {
    FMemory::Free(local_128);
  }
  if (local_118 != 0) {
    FMemory::Free();
  }
  if (*plVar6 != 0) {
    FUN_14288d420(*plVar6,param_1[0xd6]);
    if ((0.0001 < ABS(*(float *)((longlong)param_1 + 0x6c4))) ||
       (0.0001 < ABS(*(float *)(param_1 + 0xd9)))) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      FUN_142ed3c00(*plVar6);
    }
  }
  lVar1 = param_1[0x9d];
  if (lVar1 == 0) goto LAB_140ef2b73;
  lVar3 = FUN_142f227c0();
  if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((!bVar2) || (*plVar6 == 0)) goto LAB_140ef2b73;
  local_48 = (longlong *)0x0;
  local_38 = 0;
  puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_68);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[1] = param_1;
    *puVar4 = &PTR_FUN_143f77b70;
  }
  local_108 = 0;
  local_78 = (code *)&LAB_140ee0eb0;
  local_100 = 0x16;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,0);
  FGenericPlatformString::Memcpy(local_108,L"BTN_EchoNetNavigation",0x2c);
  local_98 = 0;
  local_88 = 0;
  if (local_38 == 0) {
LAB_140ef2aed:
    local_c8[0] = FUN_1407c3030;
  }
  else {
    plVar5 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar5 = local_48;
    }
    if (plVar5 == (longlong *)0x0) goto LAB_140ef2aed;
    plVar5 = (longlong *)(**(code **)*plVar5)(plVar5,local_b8);
    (**(code **)(*plVar5 + 8))(plVar5);
    local_c8[0] = local_78;
  }
  FUN_142ed6b00(*plVar6,lVar1 + 0xc0,&local_108,local_c8);
  if (local_108 != 0) {
    FMemory::Free();
  }
  plVar5 = param_1 + 0xd1;
  if (*plVar5 == param_1[0xd6]) {
    plVar5 = param_1 + 0xdc;
  }
  FUN_142ed4720(*plVar6,plVar5);
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
LAB_140ef2b73:
  if (param_1[0xc0] != 0) {
    local_f8 = 0;
    local_f0 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
    FGenericPlatformString::Memcpy(local_f8,L"echo",10);
    FUN_142088cf0(param_1[0xc0],&local_f8);
    if (local_f8 != 0) {
      FMemory::Free();
    }
  }
  LOCK();
  *(undefined4 *)(param_1 + 0xb1) = 1;
  UNLOCK();
  FUN_142ecd4d0(param_1);
  local_e8 = 0;
  local_e0 = 0;
  lVar1 = *param_1;
  puVar4 = (undefined8 *)FName::FName(local_d0,"MainMenu_Roster_Open",1);
  (**(code **)(lVar1 + 0x4e8))(param_1,*puVar4,&local_e8);
  return;
}



// FUNCTION 140ef2c40 FUN_140ef2c40 body=120 status=ok
// SIG undefined FUN_140ef2c40(void)

void FUN_140ef2c40(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x6d0);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  *(undefined8 *)(param_1 + 0x6d0) = 0;
  FUN_142ec20c0(param_1);
  return;
}



// FUNCTION 140ef2cc0 FUN_140ef2cc0 body=20 status=ok
// SIG undefined FUN_140ef2cc0(void)

void FUN_140ef2cc0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x648) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x648) + 0x324) = 1;
  }
  return;
}



// FUNCTION 140ef2ce0 FUN_140ef2ce0 body=146 status=ok
// SIG undefined FUN_140ef2ce0(void)

void FUN_140ef2ce0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x660);
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
        if (*(longlong *)(param_1 + 0x658) != 0) {
          FUN_14203e3e0(*(longlong *)(param_1 + 0x658),0);
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
  return;
}



// FUNCTION 140ef2d80 FUN_140ef2d80 body=146 status=ok
// SIG undefined FUN_140ef2d80(void)

void FUN_140ef2d80(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  
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
          FUN_14203e3e0(*(longlong *)(param_1 + 0x1a0),0);
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
  return;
}



// FUNCTION 140ef2e20 FUN_140ef2e20 body=24 status=ok
// SIG undefined FUN_140ef2e20(void)

void FUN_140ef2e20(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x550) != 0) {
    FUN_14100fe00(*(longlong *)(param_1 + 0x550),param_1);
    return;
  }
  return;
}



// FUNCTION 140ef2e40 FUN_140ef2e40 body=1045 status=ok
// SIG undefined FUN_140ef2e40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ef2e40(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_118 [32];
  longlong **local_f8;
  longlong *local_e8;
  int local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  void *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48 [4];
  
  local_48[2] = DAT_1468387a8 ^ (ulonglong)auStack_118;
  FUN_142ec45d0();
  local_f8 = &local_d8;
  local_d8 = (longlong *)0x0;
  local_d0 = 0;
  local_a0 = 0;
  lVar4 = FUN_140e96f30(param_1,param_1 + 0xc6,0,6);
  param_1[200] = lVar4;
  plVar7 = local_d8;
  for (iVar6 = (int)local_d0; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_d8 != (longlong *)0x0) {
    FMemory::Free(local_d8);
  }
  local_f8 = &local_c8;
  local_c8 = (longlong *)0x0;
  local_c0 = 0;
  local_98 = 0;
  lVar4 = FUN_140e96f30(param_1,param_1 + 0xc9,0,6);
  param_1[0xcb] = lVar4;
  plVar7 = local_c8;
  for (iVar6 = (int)local_c0; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_c8 != (longlong *)0x0) {
    FMemory::Free(local_c8);
  }
  local_f8 = &local_b8;
  local_b8 = (longlong *)0x0;
  local_b0 = 0;
  local_90 = 0;
  lVar4 = FUN_140e96f30(param_1,param_1 + 0xd4,0,6);
  param_1[0xd6] = lVar4;
  plVar7 = local_b8;
  for (iVar6 = (int)local_b0; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_b8 != (longlong *)0x0) {
    FMemory::Free(local_b8);
  }
  local_78 = 0;
  local_70 = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
  FGenericPlatformString::Memcpy(local_78,L"delta",0xc);
  local_68 = 0;
  local_60 = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
  FGenericPlatformString::Memcpy(local_68,L"backgroundBar",0x1c);
  local_58 = 0;
  local_50 = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
  FGenericPlatformString::Memcpy(local_58,L"currentValueLabel",0x24);
  local_48[0] = 0;
  local_48[1] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
  FGenericPlatformString::Memcpy(local_48[0],L"maxValueLabel",0x1c);
  lVar4 = 4;
  local_e8 = (longlong *)0x0;
  local_e0 = 4;
  TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_e8,4,0);
  puVar9 = &local_78;
  iVar6 = 4;
  plVar7 = local_e8;
  do {
    *plVar7 = 0;
    iVar3 = *(int *)(puVar9 + 1);
    local_a8 = (void *)*puVar9;
    *(int *)(plVar7 + 1) = iVar3;
    if (iVar3 == 0) {
      *(undefined4 *)((longlong)plVar7 + 0xc) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(plVar7,iVar3,0);
      _guard_xfg_dispatch_icall_nop((void *)*plVar7,local_a8,(longlong)iVar3 * 2);
    }
    plVar7 = plVar7 + 2;
    puVar9 = puVar9 + 2;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  plVar7 = local_48 + 2;
  do {
    plVar1 = plVar7 + -2;
    plVar7 = plVar7 + -2;
    lVar4 = lVar4 + -1;
    if (*plVar1 != 0) {
      FMemory::Free();
    }
  } while (lVar4 != 0);
  local_a8 = (void *)UGameInstanceGameParameters::GetPrivateStaticClass();
  local_f8 = &local_e8;
  lVar4 = FUN_140ecc190(param_1,param_1 + 0xcc,local_a8,6);
  param_1[0xce] = lVar4;
  if (lVar4 != 0) {
    FUN_142f0ead0(lVar4,0);
  }
  if ((int)param_1[0xd0] == 0) {
    puVar8 = &DAT_143f3eda8;
  }
  else {
    puVar8 = (undefined2 *)param_1[0xcf];
  }
  uVar5 = (**(code **)(*param_1 + 0x4a8))(param_1,local_88,puVar8);
  FUN_142ede260(param_1 + 0xd1,uVar5);
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_80 + 1;
    lVar4 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar2 = (int *)((longlong)local_80 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_80 + 8))(local_80,1);
      }
    }
  }
  if ((param_1[0xd2] != 0) && (param_1[0xd3] != 0)) {
    piVar2 = (int *)(param_1[0xd3] + 8);
    LOCK();
    iVar6 = *piVar2;
    if (iVar6 == 0) {
      *piVar2 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      uVar5 = FUN_1404b03b0();
      UMistDebugEntityScreen::InspectEntity(param_1 + 0xd1,uVar5,1,0);
    }
  }
  FUN_140f0ad80(param_1,1);
  plVar7 = local_e8;
  for (iVar6 = local_e0; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_e8 != (longlong *)0x0) {
    FMemory::Free(local_e8);
  }
  return;
}



// FUNCTION 140ef3260 FUN_140ef3260 body=3988 status=ok
// SIG undefined FUN_140ef3260(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ef3260(longlong param_1)

{
  int *piVar1;
  undefined1 **ppuVar2;
  int iVar3;
  bool bVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  undefined1 **ppuVar13;
  undefined1 auStack_3f8 [32];
  longlong **local_3d8;
  void *local_3c8;
  longlong *local_3c0;
  int local_3b8;
  longlong *local_3b0;
  undefined8 local_3a8;
  longlong local_3a0;
  undefined8 local_398;
  longlong local_390;
  undefined8 local_388;
  longlong *local_380;
  undefined8 local_378;
  longlong local_370;
  undefined8 local_368;
  longlong *local_360;
  undefined8 local_358;
  longlong local_350;
  undefined8 local_348;
  longlong *local_340;
  undefined8 local_338;
  longlong local_330;
  undefined8 local_328;
  longlong *local_320;
  undefined8 local_318;
  longlong local_310;
  undefined8 local_308;
  longlong *local_300;
  undefined8 local_2f8;
  longlong local_2f0;
  undefined8 local_2e8;
  longlong *local_2e0;
  undefined8 local_2d8;
  longlong local_2d0;
  undefined8 local_2c8;
  longlong *local_2c0;
  undefined8 local_2b8;
  longlong local_2b0;
  undefined8 local_2a8;
  longlong *local_2a0;
  undefined8 local_298;
  longlong local_290;
  undefined8 local_288;
  longlong *local_280;
  undefined8 local_278;
  longlong local_270;
  undefined8 local_268;
  longlong *local_260;
  undefined8 local_258;
  longlong local_250;
  undefined8 local_248;
  longlong *local_240;
  undefined8 local_238;
  longlong local_230;
  undefined8 local_228;
  longlong *local_220;
  undefined8 local_218;
  longlong local_210;
  undefined8 local_208;
  longlong *local_200;
  undefined8 local_1f8;
  longlong local_1f0;
  undefined8 local_1e8;
  longlong *local_1e0;
  undefined8 local_1d8;
  longlong local_1d0;
  undefined8 local_1c8;
  longlong local_1b8;
  undefined8 local_1b0;
  undefined1 local_1a8 [8];
  longlong *local_1a0;
  undefined1 local_190;
  undefined8 local_188;
  undefined2 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined1 *local_e8 [4];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  undefined1 local_88 [16];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_3f8;
  FUN_142ec45d0();
  lVar8 = 0;
  local_2e8 = 0xf;
  local_2f0 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2f0,0);
  FGenericPlatformString::Memcpy(local_2f0,L"ammoAndModeBar",0x1e);
  local_3d8 = &local_300;
  local_300 = (longlong *)0x0;
  local_2f8 = 0;
  local_178 = 0;
  uVar6 = FUN_140e96f30(param_1,&local_2f0,0,6);
  *(undefined8 *)(param_1 + 0x6c0) = uVar6;
  plVar10 = local_300;
  for (iVar11 = (int)local_2f8; iVar11 != 0; iVar11 = iVar11 + -1) {
    if (*plVar10 != 0) {
      FMemory::Free();
    }
    plVar10 = plVar10 + 2;
  }
  if (local_300 != (longlong *)0x0) {
    FMemory::Free(local_300);
  }
  if (local_2f0 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x6c0) != 0) {
    local_2d0 = 0;
    local_2c8 = 0x16;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2d0,0);
    FGenericPlatformString::Memcpy(local_2d0,L"currentValueContainer",0x2c);
    local_3d8 = &local_2e0;
    local_2e0 = (longlong *)0x0;
    local_2d8 = 0;
    local_170 = 0;
    uVar6 = FUN_140ecbdf0(*(undefined8 *)(param_1 + 0x6c0),&local_2d0,0,6);
    *(undefined8 *)(param_1 + 0x698) = uVar6;
    plVar10 = local_2e0;
    for (iVar11 = (int)local_2d8; iVar11 != 0; iVar11 = iVar11 + -1) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
    }
    if (local_2e0 != (longlong *)0x0) {
      FMemory::Free(local_2e0);
    }
    if (local_2d0 != 0) {
      FMemory::Free();
    }
    local_2b0 = 0;
    local_2a8 = 0x12;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2b0,0);
    FGenericPlatformString::Memcpy(local_2b0,L"currentValueLabel",0x24);
    local_3d8 = &local_2c0;
    local_2c0 = (longlong *)0x0;
    local_2b8 = 0;
    local_168 = 0;
    uVar6 = FUN_140ecc7d0(*(undefined8 *)(param_1 + 0x6c0),&local_2b0,0,6);
    *(undefined8 *)(param_1 + 0x6a0) = uVar6;
    plVar10 = local_2c0;
    for (iVar11 = (int)local_2b8; iVar11 != 0; iVar11 = iVar11 + -1) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
    }
    if (local_2c0 != (longlong *)0x0) {
      FMemory::Free(local_2c0);
    }
    if (local_2b0 != 0) {
      FMemory::Free();
    }
    local_290 = 0;
    local_288 = 0x12;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_290,0);
    FGenericPlatformString::Memcpy(local_290,L"maxValueContainer",0x24);
    local_3d8 = &local_2a0;
    local_2a0 = (longlong *)0x0;
    local_298 = 0;
    local_160 = 0;
    uVar6 = FUN_140ecc7d0(*(undefined8 *)(param_1 + 0x6c0),&local_290,0,6);
    *(undefined8 *)(param_1 + 0x6a8) = uVar6;
    plVar10 = local_2a0;
    for (iVar11 = (int)local_298; iVar11 != 0; iVar11 = iVar11 + -1) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
    }
    if (local_2a0 != (longlong *)0x0) {
      FMemory::Free(local_2a0);
    }
    if (local_290 != 0) {
      FMemory::Free();
    }
    local_270 = 0;
    local_268 = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_270,0);
    FGenericPlatformString::Memcpy(local_270,L"maxValueLabel",0x1c);
    local_3d8 = &local_280;
    local_280 = (longlong *)0x0;
    local_278 = 0;
    local_158 = 0;
    uVar6 = FUN_140ecc7d0(*(undefined8 *)(param_1 + 0x6c0),&local_270,0,6);
    *(undefined8 *)(param_1 + 0x6b0) = uVar6;
    plVar10 = local_280;
    for (iVar11 = (int)local_278; iVar11 != 0; iVar11 = iVar11 + -1) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
    }
    if (local_280 != (longlong *)0x0) {
      FMemory::Free(local_280);
    }
    if (local_270 != 0) {
      FMemory::Free();
    }
    local_250 = 0;
    local_248 = 0x14;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_250,0);
    FGenericPlatformString::Memcpy(local_250,L"weaponIconContainer",0x28);
    local_3d8 = &local_260;
    local_260 = (longlong *)0x0;
    local_258 = 0;
    local_128 = 0;
    uVar6 = FUN_140ecbdf0(*(undefined8 *)(param_1 + 0x6c0),&local_250,0,6);
    *(undefined8 *)(param_1 + 0x6b8) = uVar6;
    plVar10 = local_260;
    for (iVar11 = (int)local_258; iVar11 != 0; iVar11 = iVar11 + -1) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
    }
    if (local_260 != (longlong *)0x0) {
      FMemory::Free(local_260);
    }
    if (local_250 != 0) {
      FMemory::Free();
    }
    local_230 = 0;
    local_228 = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_230,0);
    FGenericPlatformString::Memcpy(local_230,L"elementalIcon",0x1c);
    local_3d8 = &local_240;
    local_240 = (longlong *)0x0;
    local_238 = 0;
    local_150 = 0;
    uVar6 = FUN_140e96f30(param_1,&local_230,0,6);
    *(undefined8 *)(param_1 + 0x6d8) = uVar6;
    plVar10 = local_240;
    for (iVar11 = (int)local_238; iVar11 != 0; iVar11 = iVar11 + -1) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
    }
    if (local_240 != (longlong *)0x0) {
      FMemory::Free(local_240);
    }
    if (local_230 != 0) {
      FMemory::Free();
    }
    local_210 = 0;
    local_208 = 0xb;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_210,0);
    FGenericPlatformString::Memcpy(local_210,L"modeSwitch",0x16);
    local_3d8 = &local_220;
    local_220 = (longlong *)0x0;
    local_218 = 0;
    local_148 = 0;
    uVar6 = FUN_140ecbdf0(*(undefined8 *)(param_1 + 0x6c0),&local_210,0,6);
    *(undefined8 *)(param_1 + 0x6c8) = uVar6;
    plVar10 = local_220;
    for (iVar11 = (int)local_218; iVar11 != 0; iVar11 = iVar11 + -1) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
    }
    if (local_220 != (longlong *)0x0) {
      FMemory::Free(local_220);
    }
    if (local_210 != 0) {
      FMemory::Free();
    }
    local_1f0 = 0;
    local_1e8 = 0x1d;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1f0,0);
    FGenericPlatformString::Memcpy(local_1f0,L"modeSwitch.modeTextContainer",0x3a);
    local_3d8 = &local_200;
    local_200 = (longlong *)0x0;
    local_1f8 = 0;
    local_140 = 0;
    uVar6 = FUN_140ecbdf0(*(undefined8 *)(param_1 + 0x6c0),&local_1f0,0,6);
    *(undefined8 *)(param_1 + 0x6d0) = uVar6;
    plVar10 = local_200;
    for (iVar11 = (int)local_1f8; iVar11 != 0; iVar11 = iVar11 + -1) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
    }
    if (local_200 != (longlong *)0x0) {
      FMemory::Free(local_200);
    }
    if (local_1f0 != 0) {
      FMemory::Free();
    }
    local_1d0 = 0;
    local_1c8 = 0x2c;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1d0,0);
    FGenericPlatformString::Memcpy(local_1d0,L"modeSwitch.modeTextContainer.modeSwitchText",0x58);
    local_3d8 = &local_1e0;
    local_1e0 = (longlong *)0x0;
    local_1d8 = 0;
    local_138 = 0;
    uVar6 = FUN_140ecc7d0(*(undefined8 *)(param_1 + 0x6c0),&local_1d0,0,6);
    *(undefined8 *)(param_1 + 0x6e0) = uVar6;
    plVar10 = local_1e0;
    for (iVar11 = (int)local_1d8; iVar11 != 0; iVar11 = iVar11 + -1) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
    }
    if (local_1e0 != (longlong *)0x0) {
      FMemory::Free(local_1e0);
    }
    if (local_1d0 != 0) {
      FMemory::Free();
    }
    local_3a0 = 0;
    local_398 = 0x18;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3a0,0);
    FGenericPlatformString::Memcpy(local_3a0,L"modeSwitch.modeSwapHint",0x30);
    local_3d8 = &local_3b0;
    local_3b0 = (longlong *)0x0;
    local_3a8 = 0;
    local_130 = 0;
    uVar6 = FUN_140ecba50(*(undefined8 *)(param_1 + 0x6c0),&local_3a0,0,6);
    *(undefined8 *)(param_1 + 0x6e8) = uVar6;
    plVar10 = local_3b0;
    for (iVar11 = (int)local_3a8; iVar11 != 0; iVar11 = iVar11 + -1) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
    }
    if (local_3b0 != (longlong *)0x0) {
      FMemory::Free(local_3b0);
    }
    if (local_3a0 != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(param_1 + 0x6e8) != 0) {
      lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x6e8) + 0x308);
      uVar6 = FUN_140e10600(param_1);
      (**(code **)(lVar12 + 0x10))(*(longlong *)(param_1 + 0x6e8) + 0x308,0,uVar6);
      local_1b8 = 0;
      local_1b0 = 0;
      uVar6 = FUN_1404b03b0();
      FText::FText(local_1a8,uVar6);
      local_188 = 0;
      local_180 = 1;
      local_190 = 1;
      FName::FName(&local_3c8,L"OakPC_SwitchWeaponmode",1);
      uVar5 = local_1b0;
      lVar12 = (longlong)(int)local_1b0;
      iVar11 = (int)local_1b0 + 1;
      local_1b0 = CONCAT44(local_1b0._4_4_,iVar11);
      if (local_1b0._4_4_ < iVar11) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                  (&local_1b8,uVar5 & 0xffffffff);
      }
      *(void **)(local_1b8 + lVar12 * 8) = local_3c8;
      plVar10 = (longlong *)(*(longlong *)(param_1 + 0x6e8) + 0x308);
      (**(code **)(*plVar10 + 0x20))(plVar10,&local_1b8,1);
      if (local_1a0 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_1a0 + 1;
        lVar12 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*local_1a0)(local_1a0);
          LOCK();
          piVar1 = (int *)((longlong)local_1a0 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*local_1a0 + 8))(local_1a0,1);
          }
        }
      }
      if (local_1b8 != 0) {
        FMemory::Free();
      }
    }
    local_118 = 0;
    local_110 = 6;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,0);
    FGenericPlatformString::Memcpy(local_118,L"delta",0xc);
    local_108 = 0;
    local_100 = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,0);
    FGenericPlatformString::Memcpy(local_108,L"backgroundBar",0x1c);
    local_f8 = 0;
    local_f0 = 0x12;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
    FGenericPlatformString::Memcpy(local_f8,L"currentValueLabel",0x24);
    local_e8[0] = (undefined1 *)0x0;
    local_e8[1] = (undefined1 *)0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_e8,0);
    FGenericPlatformString::Memcpy(local_e8[0],L"maxValueLabel",0x1c);
    lVar12 = 4;
    local_3c0 = (longlong *)0x0;
    local_3b8 = 4;
    TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_3c0,4,0);
    puVar9 = &local_118;
    iVar11 = 4;
    plVar10 = local_3c0;
    do {
      *plVar10 = 0;
      iVar3 = *(int *)(puVar9 + 1);
      local_3c8 = (void *)*puVar9;
      *(int *)(plVar10 + 1) = iVar3;
      if (iVar3 == 0) {
        *(undefined4 *)((longlong)plVar10 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(plVar10,iVar3,0);
        _guard_xfg_dispatch_icall_nop((void *)*plVar10,local_3c8,(longlong)iVar3 * 2);
      }
      plVar10 = plVar10 + 2;
      puVar9 = puVar9 + 2;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    ppuVar13 = local_e8 + 2;
    do {
      ppuVar2 = ppuVar13 + -2;
      ppuVar13 = ppuVar13 + -2;
      lVar12 = lVar12 + -1;
      if (*ppuVar2 != (undefined1 *)0x0) {
        FMemory::Free();
      }
    } while (lVar12 != 0);
    local_390 = 0;
    local_388 = 0xd;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_390,0);
    FGenericPlatformString::Memcpy(local_390,L"covAmmoBarMC",0x1a);
    uVar6 = UGameInstanceGameParameters::GetPrivateStaticClass();
    local_3d8 = &local_3c0;
    uVar6 = FUN_140ecc430(*(undefined8 *)(param_1 + 0x6c0),&local_390,uVar6,2);
    *(undefined8 *)(param_1 + 0x6f0) = uVar6;
    if (local_390 != 0) {
      FMemory::Free();
    }
    local_370 = 0;
    local_368 = 0xd;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_370,0);
    FGenericPlatformString::Memcpy(local_370,L"brokenFillMC",0x1a);
    local_3d8 = &local_380;
    local_380 = (longlong *)0x0;
    local_378 = 0;
    uVar6 = FUN_140ecbdf0(*(undefined8 *)(param_1 + 0x6c0),&local_370,0,6);
    *(undefined8 *)(param_1 + 0x6f8) = uVar6;
    plVar10 = local_380;
    for (iVar11 = (int)local_378; iVar11 != 0; iVar11 = iVar11 + -1) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
    }
    if (local_380 != (longlong *)0x0) {
      FMemory::Free(local_380);
    }
    if (local_370 != 0) {
      FMemory::Free();
    }
    local_350 = 0;
    local_348 = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_350,0);
    FGenericPlatformString::Memcpy(local_350,L"redlineMC",0x14);
    local_3d8 = &local_360;
    local_360 = (longlong *)0x0;
    local_358 = 0;
    uVar6 = FUN_140ecbdf0(*(undefined8 *)(param_1 + 0x6c0),&local_350,0,6);
    *(undefined8 *)(param_1 + 0x700) = uVar6;
    plVar10 = local_360;
    for (iVar11 = (int)local_358; iVar11 != 0; iVar11 = iVar11 + -1) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
    }
    if (local_360 != (longlong *)0x0) {
      FMemory::Free(local_360);
    }
    if (local_350 != 0) {
      FMemory::Free();
    }
    local_330 = 0;
    local_328 = 0x12;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_330,0);
    FGenericPlatformString::Memcpy(local_330,L"overheatWarningMC",0x24);
    local_3d8 = &local_340;
    local_340 = (longlong *)0x0;
    local_338 = 0;
    uVar6 = FUN_140ecbdf0(*(undefined8 *)(param_1 + 0x6c0),&local_330,0,6);
    *(undefined8 *)(param_1 + 0x708) = uVar6;
    plVar10 = local_340;
    for (iVar11 = (int)local_338; iVar11 != 0; iVar11 = iVar11 + -1) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
    }
    if (local_340 != (longlong *)0x0) {
      FMemory::Free(local_340);
    }
    if (local_330 != 0) {
      FMemory::Free();
    }
    local_310 = 0;
    local_308 = 0x18;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_310,0);
    FGenericPlatformString::Memcpy(local_310,L"ammoBarInitializationMC",0x30);
    local_3d8 = &local_320;
    local_320 = (longlong *)0x0;
    local_318 = 0;
    uVar6 = FUN_140e96f30(param_1,&local_310,0,6);
    *(undefined8 *)(param_1 + 0x5f0) = uVar6;
    plVar10 = local_320;
    for (iVar11 = (int)local_318; iVar11 != 0; iVar11 = iVar11 + -1) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
    }
    if (local_320 != (longlong *)0x0) {
      FMemory::Free(local_320);
    }
    plVar10 = local_3c0;
    iVar11 = local_3b8;
    if (local_310 != 0) {
      FMemory::Free();
      plVar10 = local_3c0;
      iVar11 = local_3b8;
    }
    for (; iVar11 != 0; iVar11 = iVar11 + -1) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
    }
    if (local_3c0 != (longlong *)0x0) {
      FMemory::Free(local_3c0);
    }
  }
  lVar12 = FWeakObjectPtr::Get(param_1 + 0x5d8);
  if (lVar12 != 0) {
    lVar7 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_140ef40c9;
  }
  lVar12 = lVar8;
LAB_140ef40c9:
  *(longlong *)(param_1 + 0x688) = lVar12;
  if (lVar12 != 0) {
    lVar8 = *(longlong *)(lVar12 + 0x990);
  }
  *(longlong *)(param_1 + 0x690) = lVar8;
  local_a8 = (longlong *)0x0;
  local_98 = 0;
  puVar9 = (undefined8 *)FUN_140438ef0(0x10,local_c8);
  if (puVar9 != (undefined8 *)0x0) {
    puVar9[1] = param_1;
    *puVar9 = &PTR_FUN_143f77b70;
  }
  local_e8[2] = &LAB_140ee0e40;
  uVar6 = FUN_1420849a0(param_1,local_88,local_e8 + 2);
  FUN_14208c260(param_1,uVar6);
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
  if (local_98 != 0) {
    plVar10 = local_c8;
    if (local_a8 != (longlong *)0x0) {
      plVar10 = local_a8;
    }
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x10))(plVar10,0);
    }
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140ef4200 FUN_140ef4200 body=1372 status=ok
// SIG undefined FUN_140ef4200(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ef4200(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 **ppuVar7;
  longlong lVar8;
  undefined1 auStack_e8 [32];
  longlong **local_c8;
  longlong *local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  longlong *local_98;
  int local_90;
  undefined1 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68 [4];
  undefined4 local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  FUN_142ec45d0();
  *(undefined1 *)((longlong)param_1 + 0x5fa) = 1;
  (**(code **)(*param_1 + 0x580))(param_1,1);
  local_80 = 5;
  local_88 = (undefined1 *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
  FGenericPlatformString::Memcpy(local_88,L"fill",10);
  local_78 = 0;
  local_70 = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
  FGenericPlatformString::Memcpy(local_78,L"delta",0xc);
  local_68[0] = 0;
  local_68[1] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68,0);
  FGenericPlatformString::Memcpy(local_68[0],L"backgroundBar",0x1c);
  lVar8 = 3;
  local_98 = (longlong *)0x0;
  local_90 = 3;
  TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_98,3,0);
  ppuVar7 = &local_88;
  iVar6 = 3;
  plVar4 = local_98;
  do {
    *plVar4 = 0;
    iVar1 = *(int *)(ppuVar7 + 1);
    local_b8 = (longlong *)*ppuVar7;
    *(int *)(plVar4 + 1) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)((longlong)plVar4 + 0xc) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(plVar4,iVar1,0);
      _guard_xfg_dispatch_icall_nop((void *)*plVar4,local_b8,(longlong)iVar1 * 2);
    }
    plVar4 = plVar4 + 2;
    ppuVar7 = ppuVar7 + 2;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  plVar4 = local_68 + 2;
  do {
    plVar5 = plVar4 + -2;
    plVar4 = plVar4 + -2;
    lVar8 = lVar8 + -1;
    if (*plVar5 != 0) {
      FMemory::Free();
    }
  } while (lVar8 != 0);
  local_b8 = (longlong *)0x0;
  local_b0 = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
  FGenericPlatformString::Memcpy(local_b8,L"nameplate",0x14);
  uVar2 = UXGameInstance::GetPrivateStaticClass();
  local_c8 = &local_98;
  lVar8 = FUN_140eca3f0(param_1,&local_b8,uVar2,2);
  param_1[0xc9] = lVar8;
  if (local_b8 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (param_1[0xc9] != 0) {
    FUN_141016a70(param_1[0xc9],1);
    FText::operator=(param_1[0xc9] + 0x170,param_1 + 0xe5);
    FUN_141016b20(param_1[0xc9],2);
  }
  local_c8 = &local_b8;
  local_b8 = (longlong *)0x0;
  local_b0 = 0;
  lVar8 = FUN_140e96f30(param_1,param_1 + 0xd5,0,6);
  param_1[0xd4] = lVar8;
  plVar4 = local_b8;
  for (iVar6 = (int)local_b0; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_b8 != (longlong *)0x0) {
    FMemory::Free(local_b8);
  }
  local_68[2] = 0;
  local_48 = 0;
  puVar3 = (undefined8 *)FUN_140438ef0(0x10,&local_78);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[1] = param_1;
    *puVar3 = &PTR_FUN_143f77b70;
  }
  local_88 = &LAB_140ee0f20;
  FUN_14204c280(&local_88);
  local_a8 = (longlong *)0x0;
  local_a0 = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
  local_c8 = (longlong **)CONCAT62(local_c8._2_6_,0x3f);
  FGenericPlatformString::Convert<char,wchar_t>(local_a8,9,"barArmor");
  local_c8 = &local_b8;
  local_b8 = (longlong *)0x0;
  local_b0 = 0;
  uVar2 = FUN_140e96f30(param_1,&local_a8,0,6);
  plVar4 = local_b8;
  for (iVar6 = (int)local_b0; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_b8 != (longlong *)0x0) {
    FMemory::Free(local_b8);
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  plVar4 = param_1 + 0xcc;
  iVar6 = (int)param_1[0xcd];
  *(int *)(param_1 + 0xcd) = iVar6 + 1;
  if (*(int *)((longlong)param_1 + 0x66c) < iVar6 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar4,iVar6);
  }
  local_b8 = (longlong *)0x0;
  local_b0 = 10;
  *(undefined8 *)(*plVar4 + (longlong)iVar6 * 8) = uVar2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
  local_c8 = (longlong **)CONCAT62(local_c8._2_6_,0x3f);
  FGenericPlatformString::Convert<char,wchar_t>(local_b8,10,"barShield");
  local_c8 = &local_a8;
  local_a8 = (longlong *)0x0;
  local_a0 = 0;
  uVar2 = FUN_140e96f30(param_1,&local_b8,0,6);
  plVar5 = local_a8;
  for (iVar6 = (int)local_a0; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free(local_a8);
  }
  if (local_b8 != (longlong *)0x0) {
    FMemory::Free();
  }
  iVar6 = (int)param_1[0xcd];
  *(int *)(param_1 + 0xcd) = iVar6 + 1;
  if (*(int *)((longlong)param_1 + 0x66c) < iVar6 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar4,iVar6);
  }
  local_b8 = (longlong *)0x0;
  local_b0 = 10;
  *(undefined8 *)(*plVar4 + (longlong)iVar6 * 8) = uVar2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
  local_c8 = (longlong **)CONCAT62(local_c8._2_6_,0x3f);
  FGenericPlatformString::Convert<char,wchar_t>(local_b8,10,"barHealth");
  local_c8 = &local_a8;
  local_a8 = (longlong *)0x0;
  local_a0 = 0;
  uVar2 = FUN_140e96f30(param_1,&local_b8,0,6);
  plVar5 = local_a8;
  for (iVar6 = (int)local_a0; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free(local_a8);
  }
  if (local_b8 != (longlong *)0x0) {
    FMemory::Free();
  }
  iVar6 = (int)param_1[0xcd];
  *(int *)(param_1 + 0xcd) = iVar6 + 1;
  if (*(int *)((longlong)param_1 + 0x66c) < iVar6 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar4,iVar6);
  }
  *(undefined8 *)(*plVar4 + (longlong)iVar6 * 8) = uVar2;
  FUN_140eeaf60(param_1);
  plVar4 = local_98;
  for (iVar6 = local_90; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_98 != (longlong *)0x0) {
    FMemory::Free(local_98);
  }
  return;
}



// FUNCTION 140ef4760 FUN_140ef4760 body=1605 status=ok
// SIG undefined FUN_140ef4760(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ef4760(longlong param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 auStack_168 [32];
  longlong **local_148;
  longlong **local_140;
  longlong *local_138;
  int local_130;
  longlong *local_128;
  undefined8 local_120;
  longlong local_118;
  undefined8 local_110;
  longlong local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined8 local_d0;
  void *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [8];
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48 [4];
  
  local_48[2] = DAT_1468387a8 ^ (ulonglong)auStack_168;
  FUN_142ef9e70();
  local_110 = 0x10;
  local_118 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,0);
  FGenericPlatformString::Memcpy(local_118,L"buddyWidgetAnim",0x20);
  local_140 = &local_128;
  local_128 = (longlong *)0x0;
  local_148 = (longlong **)CONCAT71(local_148._1_7_,6);
  local_120 = 0;
  local_c0 = 0;
  cVar3 = FUN_140e98b90(param_1,param_1 + 0x170,&local_118,0);
  plVar10 = local_128;
  for (iVar9 = (int)local_120; iVar9 != 0; iVar9 = iVar9 + -1) {
    if (*plVar10 != 0) {
      FMemory::Free();
    }
    plVar10 = plVar10 + 2;
  }
  if (local_128 != (longlong *)0x0) {
    FMemory::Free(local_128);
  }
  if (local_118 != 0) {
    FMemory::Free();
  }
  if (cVar3 != '\0') {
    FUN_140f0cb60(param_1);
    local_78 = 0;
    local_70 = 6;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
    FGenericPlatformString::Memcpy(local_78,L"delta",0xc);
    local_68 = 0;
    local_60 = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
    FGenericPlatformString::Memcpy(local_68,L"backgroundBar",0x1c);
    local_58 = 0;
    local_50 = 0x12;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
    FGenericPlatformString::Memcpy(local_58,L"currentValueLabel",0x24);
    local_48[0] = 0;
    local_48[1] = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
    FGenericPlatformString::Memcpy(local_48[0],L"maxValueLabel",0x1c);
    lVar11 = 4;
    local_138 = (longlong *)0x0;
    local_130 = 4;
    TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_138,4,0);
    puVar6 = &local_78;
    iVar9 = 4;
    plVar10 = local_138;
    do {
      *plVar10 = 0;
      iVar2 = *(int *)(puVar6 + 1);
      local_c8 = (void *)*puVar6;
      *(int *)(plVar10 + 1) = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)((longlong)plVar10 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(plVar10,iVar2,0);
        _guard_xfg_dispatch_icall_nop((void *)*plVar10,local_c8,(longlong)iVar2 * 2);
      }
      plVar10 = plVar10 + 2;
      puVar6 = puVar6 + 2;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    plVar10 = local_48 + 2;
    do {
      plVar7 = plVar10 + -2;
      plVar10 = plVar10 + -2;
      lVar11 = lVar11 + -1;
      if (*plVar7 != 0) {
        FMemory::Free();
      }
    } while (lVar11 != 0);
    local_108 = 0;
    local_100 = 0x1b;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,0);
    FGenericPlatformString::Memcpy(local_108,L"healthBarWrapper.healthBar",0x36);
    local_c8 = (void *)UGameInstanceGameParameters::GetPrivateStaticClass();
    local_148 = &local_138;
    puVar6 = (undefined8 *)(param_1 + 0x170);
    uVar4 = FUN_140ecc430(*puVar6,&local_108,local_c8,2);
    *(undefined8 *)(param_1 + 0x178) = uVar4;
    if (local_108 != 0) {
      FMemory::Free();
    }
    local_f8 = 0;
    local_f0 = 0x1b;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
    FGenericPlatformString::Memcpy(local_f8,L"shieldBarWrapper.shieldBar",0x36);
    local_b8 = UGameInstanceGameParameters::GetPrivateStaticClass();
    local_148 = &local_138;
    uVar4 = FUN_140ecc430(*puVar6,&local_f8,local_b8,2);
    *(undefined8 *)(param_1 + 0x180) = uVar4;
    if (local_f8 != 0) {
      FMemory::Free();
    }
    local_e8 = 0;
    local_e0 = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
    FGenericPlatformString::Memcpy(local_e8,L"reviveBar",0x14);
    local_b0 = UGameInstanceGameParameters::GetPrivateStaticClass();
    local_148 = &local_138;
    uVar4 = FUN_140ecc430(*puVar6,&local_e8,local_b0,2);
    *(undefined8 *)(param_1 + 0x188) = uVar4;
    if (local_e8 != 0) {
      FMemory::Free();
    }
    local_d8 = 0;
    local_d0 = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
    FGenericPlatformString::Memcpy(local_d8,L"dyingBar",0x12);
    local_a8 = UGameInstanceGameParameters::GetPrivateStaticClass();
    local_148 = &local_138;
    uVar4 = FUN_140ecc430(*puVar6,&local_d8,local_a8,2);
    *(undefined8 *)(param_1 + 400) = uVar4;
    if (local_d8 != 0) {
      FMemory::Free();
    }
    puVar5 = (undefined8 *)FUN_142085870(*puVar6,local_98,L"playerIconsContainer");
    *(undefined8 *)(param_1 + 0x1b0) = *puVar5;
    plVar10 = (longlong *)puVar5[1];
    plVar7 = *(longlong **)(param_1 + 0x1b8);
    if (plVar10 != plVar7) {
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
        UNLOCK();
        plVar7 = *(longlong **)(param_1 + 0x1b8);
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
      *(longlong **)(param_1 + 0x1b8) = plVar10;
    }
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_90 + 1;
      lVar11 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar1 = (int *)((longlong)local_90 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_90 + 8))(local_90,1);
        }
      }
    }
    puVar6 = (undefined8 *)FUN_142085870(*puVar6,local_88,L"speakingIcon");
    *(undefined8 *)(param_1 + 0x1a0) = *puVar6;
    plVar10 = (longlong *)puVar6[1];
    plVar7 = *(longlong **)(param_1 + 0x1a8);
    if (plVar10 != plVar7) {
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
        UNLOCK();
        plVar7 = *(longlong **)(param_1 + 0x1a8);
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
      *(longlong **)(param_1 + 0x1a8) = plVar10;
    }
    plVar10 = local_138;
    iVar9 = local_130;
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_80 + 1;
      lVar11 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)local_80 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar10 = local_138;
        iVar9 = local_130;
        if (iVar2 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
          plVar10 = local_138;
          iVar9 = local_130;
        }
      }
    }
    for (; iVar9 != 0; iVar9 = iVar9 + -1) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
    }
    if (local_138 != (longlong *)0x0) {
      FMemory::Free(local_138);
    }
  }
  lVar11 = FUN_140eccb70(param_1);
  if (lVar11 != 0) {
    plVar10 = (longlong *)(lVar11 + 0xa38);
    plVar7 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar7 != (longlong *)0x0) {
      *plVar7 = (longlong)&PTR_FUN_143f4d200;
      FWeakObjectPtr::operator=(plVar7 + 1,param_1);
      plVar7[2] = (longlong)FUN_140efd130;
      lVar8 = FDelegateHandle::GenerateNewID();
      plVar7[4] = lVar8;
      *plVar7 = (longlong)&PTR_FUN_143f4d248;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar10,1);
      (**(code **)(*plVar7 + 0x20))(plVar7,local_a0);
      iVar9 = *(int *)(lVar11 + 0xa40);
      *(int *)(lVar11 + 0xa40) = iVar9 + 1;
      if (*(int *)(lVar11 + 0xa44) < iVar9 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar9);
      }
      puVar6 = (undefined8 *)((longlong)iVar9 * 0x10 + *plVar10);
      *puVar6 = plVar7;
      *(undefined4 *)(puVar6 + 1) = 3;
    }
  }
  return;
}



// FUNCTION 140ef4db0 FUN_140ef4db0 body=1308 status=ok
// SIG undefined FUN_140ef4db0(void)

void FUN_140ef4db0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int iVar4;
  longlong *local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20;
  
  FUN_142ec45d0();
  local_30 = 0x15;
  local_38 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy(local_38,L"buddyWidgetContainer",0x2a);
  local_48 = (longlong *)0x0;
  local_40 = 0;
  lVar1 = FUN_140e96f30(param_1,&local_38,0,6,&local_48);
  plVar3 = local_48;
  for (iVar4 = (int)local_40; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
  if (local_38 != 0) {
    FMemory::Free();
  }
  if (lVar1 != 0) {
    local_28 = (longlong *)0x0;
    local_20 = 0;
    uVar2 = FUN_140ec9cb0(lVar1,param_1 + 0x630,0,6,&local_28);
    *(undefined8 *)(param_1 + 0x688) = uVar2;
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
    local_28 = (longlong *)0x0;
    local_20 = 0;
    uVar2 = FUN_140ec9cb0(lVar1,param_1 + 0x640,0,6,&local_28);
    *(undefined8 *)(param_1 + 0x670) = uVar2;
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
    local_28 = (longlong *)0x0;
    local_20 = 0;
    uVar2 = FUN_140ec9cb0(lVar1,param_1 + 0x650,0,6,&local_28);
    *(undefined8 *)(param_1 + 0x678) = uVar2;
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
    local_28 = (longlong *)0x0;
    local_20 = 0;
    uVar2 = FUN_140ec9cb0(lVar1,param_1 + 0x660,0,6,&local_28);
    *(undefined8 *)(param_1 + 0x680) = uVar2;
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
  }
  local_38 = 0;
  local_30 = 0x1a;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy(local_38,L"godRayPosition.player2Ray",0x34);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  uVar2 = FUN_140e96f30(param_1,&local_38,0,6,&local_28);
  *(undefined8 *)(param_1 + 0x690) = uVar2;
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
  if (local_38 != 0) {
    FMemory::Free();
  }
  local_38 = 0;
  local_30 = 0x1a;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy(local_38,L"godRayPosition.player3Ray",0x34);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  uVar2 = FUN_140e96f30(param_1,&local_38,0,6,&local_28);
  *(undefined8 *)(param_1 + 0x698) = uVar2;
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
  if (local_38 != 0) {
    FMemory::Free();
  }
  local_38 = 0;
  local_30 = 0x1a;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy(local_38,L"godRayPosition.player4Ray",0x34);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  uVar2 = FUN_140e96f30(param_1,&local_38,0,6,&local_28);
  *(undefined8 *)(param_1 + 0x6a0) = uVar2;
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
  if (local_38 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x688) != 0) {
    FUN_140f09020(*(longlong *)(param_1 + 0x688),1);
    *(undefined8 *)(*(longlong *)(param_1 + 0x688) + 0x198) = *(undefined8 *)(param_1 + 0x6a8);
    FString::operator=(*(longlong *)(param_1 + 0x688) + 0x200,param_1 + 0x630);
  }
  if (*(longlong *)(param_1 + 0x670) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x670) + 0x198) = *(undefined8 *)(param_1 + 0x690);
    FString::operator=(*(longlong *)(param_1 + 0x670) + 0x200,param_1 + 0x640);
  }
  if (*(longlong *)(param_1 + 0x678) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x678) + 0x198) = *(undefined8 *)(param_1 + 0x698);
    FString::operator=(*(longlong *)(param_1 + 0x678) + 0x200,param_1 + 0x650);
  }
  if (*(longlong *)(param_1 + 0x680) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x680) + 0x198) = *(undefined8 *)(param_1 + 0x6a0);
    FString::operator=(*(longlong *)(param_1 + 0x680) + 0x200,param_1 + 0x660);
  }
  FUN_140f07480(param_1);
  return;
}



// FUNCTION 140ef52d0 FUN_140ef52d0 body=2429 status=ok
// SIG undefined FUN_140ef52d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ef52d0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  void *_Src;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined1 auStack_278 [32];
  longlong **local_258;
  longlong **local_250;
  longlong *local_248;
  int local_240;
  longlong *local_238;
  undefined8 local_230;
  longlong local_228;
  undefined8 local_220;
  longlong *local_218;
  undefined8 local_210;
  longlong local_208;
  undefined8 local_200;
  longlong *local_1f8;
  undefined8 local_1f0;
  longlong local_1e8;
  undefined8 local_1e0;
  longlong *local_1d8;
  undefined8 local_1d0;
  longlong local_1c8;
  undefined8 local_1c0;
  longlong local_1b8;
  undefined8 local_1b0;
  longlong *local_1a8;
  undefined8 local_1a0;
  longlong local_198;
  undefined8 local_190;
  longlong *local_188;
  undefined8 local_180;
  longlong local_178;
  undefined8 local_170;
  longlong *local_168;
  undefined8 local_160;
  longlong local_158;
  undefined8 local_150;
  longlong *local_148;
  undefined8 local_140;
  longlong local_138;
  undefined8 local_130;
  longlong local_128;
  undefined8 local_120;
  undefined8 local_118 [2];
  longlong local_108;
  undefined8 local_100;
  undefined1 local_f8 [8];
  longlong *local_f0;
  undefined1 local_e0;
  undefined8 local_d8;
  undefined2 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48 [4];
  
  local_48[2] = DAT_1468387a8 ^ (ulonglong)auStack_278;
  FUN_142ec45d0();
  local_220 = 0xe;
  local_228 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_228,0);
  FGenericPlatformString::Memcpy(local_228,L"widgetWrapper",0x1c);
  local_258 = &local_238;
  local_238 = (longlong *)0x0;
  local_230 = 0;
  local_c8 = 0;
  uVar3 = FUN_140e96f30(param_1,&local_228,0,6);
  *(undefined8 *)(param_1 + 0x730) = uVar3;
  plVar4 = local_238;
  for (iVar6 = (int)local_230; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_238 != (longlong *)0x0) {
    FMemory::Free(local_238);
  }
  if (local_228 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x730) != 0) {
    local_208 = 0;
    local_200 = 7;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_208,0);
    FGenericPlatformString::Memcpy(local_208,L"widget",0xe);
    local_258 = &local_218;
    local_218 = (longlong *)0x0;
    local_210 = 0;
    local_c0 = 0;
    uVar3 = FUN_140ecbdf0(*(undefined8 *)(param_1 + 0x730),&local_208,0,6);
    *(undefined8 *)(param_1 + 0x738) = uVar3;
    plVar4 = local_218;
    for (iVar6 = (int)local_210; iVar6 != 0; iVar6 = iVar6 + -1) {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 2;
    }
    if (local_218 != (longlong *)0x0) {
      FMemory::Free(local_218);
    }
    if (local_208 != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(param_1 + 0x738) != 0) {
      local_1e8 = 0;
      local_1e0 = 6;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1e8,0);
      FGenericPlatformString::Memcpy(local_1e8,L"label",0xc);
      local_258 = &local_1f8;
      local_1f8 = (longlong *)0x0;
      local_1f0 = 0;
      local_b8 = 0;
      uVar3 = FUN_140ecc7d0(*(undefined8 *)(param_1 + 0x738),&local_1e8,0,6);
      *(undefined8 *)(param_1 + 0x740) = uVar3;
      plVar4 = local_1f8;
      for (iVar6 = (int)local_1f0; iVar6 != 0; iVar6 = iVar6 + -1) {
        if (*plVar4 != 0) {
          FMemory::Free();
        }
        plVar4 = plVar4 + 2;
      }
      if (local_1f8 != (longlong *)0x0) {
        FMemory::Free(local_1f8);
      }
      if (local_1e8 != 0) {
        FMemory::Free();
      }
      local_1c8 = 0;
      local_1c0 = 9;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1c8,0);
      FGenericPlatformString::Memcpy(local_1c8,L"bodyText",0x12);
      local_258 = &local_1d8;
      local_1d8 = (longlong *)0x0;
      local_1d0 = 0;
      local_b0 = 0;
      uVar3 = FUN_140ecc7d0(*(undefined8 *)(param_1 + 0x738),&local_1c8,0,6);
      *(undefined8 *)(param_1 + 0x748) = uVar3;
      plVar4 = local_1d8;
      for (iVar6 = (int)local_1d0; iVar6 != 0; iVar6 = iVar6 + -1) {
        if (*plVar4 != 0) {
          FMemory::Free();
        }
        plVar4 = plVar4 + 2;
      }
      if (local_1d8 != (longlong *)0x0) {
        FMemory::Free(local_1d8);
      }
      if (local_1c8 != 0) {
        FMemory::Free();
      }
      local_78 = 0;
      local_70 = 6;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
      FGenericPlatformString::Memcpy(local_78,L"delta",0xc);
      local_68 = 0;
      local_60 = 0xe;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
      FGenericPlatformString::Memcpy(local_68,L"backgroundBar",0x1c);
      local_58 = 0;
      local_50 = 0x12;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
      FGenericPlatformString::Memcpy(local_58,L"currentValueLabel",0x24);
      local_48[0] = 0;
      local_48[1] = 0xe;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
      FGenericPlatformString::Memcpy(local_48[0],L"maxValueLabel",0x1c);
      local_248 = (longlong *)0x0;
      local_240 = 4;
      TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_248,4);
      puVar9 = &local_78;
      plVar4 = local_248;
      iVar6 = 4;
      do {
        iVar8 = iVar6;
        *plVar4 = 0;
        iVar6 = *(int *)(puVar9 + 1);
        _Src = (void *)*puVar9;
        *(int *)(plVar4 + 1) = iVar6;
        if (iVar6 == 0) {
          *(undefined4 *)((longlong)plVar4 + 0xc) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(plVar4,iVar6,0);
          _guard_xfg_dispatch_icall_nop((void *)*plVar4,_Src,(longlong)iVar6 * 2);
        }
        plVar4 = plVar4 + 2;
        puVar9 = puVar9 + 2;
        iVar6 = iVar8 + -1;
      } while (iVar6 != 0);
      uVar7 = (ulonglong)(iVar8 + 3);
      plVar4 = local_48 + 2;
      do {
        plVar1 = plVar4 + -2;
        plVar4 = plVar4 + -2;
        uVar7 = uVar7 - 1;
        if (*plVar1 != 0) {
          FMemory::Free();
        }
      } while (uVar7 != 0);
      local_1b8 = 0;
      local_1b0 = 0xc;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b8,0);
      FGenericPlatformString::Memcpy(local_1b8,L"progressBar",0x18);
      local_a8 = UGameInstanceGameParameters::GetPrivateStaticClass();
      local_258 = &local_248;
      uVar3 = FUN_140ecc430(*(undefined8 *)(param_1 + 0x738),&local_1b8,local_a8,2);
      *(undefined8 *)(param_1 + 0x750) = uVar3;
      if (local_1b8 != 0) {
        FMemory::Free();
      }
      local_198 = 0;
      local_190 = 0xd;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_198,0);
      FGenericPlatformString::Memcpy(local_198,L"progressText",0x1a);
      local_258 = &local_1a8;
      local_1a8 = (longlong *)0x0;
      local_1a0 = 0;
      local_a0 = 0;
      uVar3 = FUN_140ecc7d0(*(undefined8 *)(param_1 + 0x738),&local_198,0,6);
      *(undefined8 *)(param_1 + 0x758) = uVar3;
      plVar4 = local_1a8;
      for (iVar6 = (int)local_1a0; iVar6 != 0; iVar6 = iVar6 + -1) {
        if (*plVar4 != 0) {
          FMemory::Free();
        }
        plVar4 = plVar4 + 2;
      }
      if (local_1a8 != (longlong *)0x0) {
        FMemory::Free(local_1a8);
      }
      if (local_198 != 0) {
        FMemory::Free();
      }
      local_178 = 0;
      local_170 = 0x11;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_178,0);
      FGenericPlatformString::Memcpy(local_178,L"hintWrapper.hint",0x22);
      local_258 = &local_188;
      local_188 = (longlong *)0x0;
      local_180 = 0;
      local_98 = 0;
      uVar3 = FUN_140ecba50(*(undefined8 *)(param_1 + 0x738),&local_178,0,6);
      *(undefined8 *)(param_1 + 0x5b0) = uVar3;
      plVar4 = local_188;
      for (iVar6 = (int)local_180; iVar6 != 0; iVar6 = iVar6 + -1) {
        if (*plVar4 != 0) {
          FMemory::Free();
        }
        plVar4 = plVar4 + 2;
      }
      if (local_188 != (longlong *)0x0) {
        FMemory::Free(local_188);
      }
      if (local_178 != 0) {
        FMemory::Free();
      }
      local_158 = 0;
      local_150 = 9;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_158,0);
      FGenericPlatformString::Memcpy(local_158,L"typeIcon",0x12);
      local_258 = &local_168;
      local_168 = (longlong *)0x0;
      local_160 = 0;
      local_90 = 0;
      uVar3 = FUN_140ecbdf0(*(undefined8 *)(param_1 + 0x738),&local_158,0,6);
      *(undefined8 *)(param_1 + 0x760) = uVar3;
      plVar4 = local_168;
      for (iVar6 = (int)local_160; iVar6 != 0; iVar6 = iVar6 + -1) {
        if (*plVar4 != 0) {
          FMemory::Free();
        }
        plVar4 = plVar4 + 2;
      }
      if (local_168 != (longlong *)0x0) {
        FMemory::Free(local_168);
      }
      if (local_158 != 0) {
        FMemory::Free();
      }
      local_138 = 0;
      local_130 = 10;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
      FGenericPlatformString::Memcpy(local_138,L"scanlines",0x14);
      local_250 = &local_148;
      local_258 = (longlong **)CONCAT71(local_258._1_7_,6);
      local_148 = (longlong *)0x0;
      local_140 = 0;
      local_88 = 0;
      FUN_140e98b90(*(undefined8 *)(param_1 + 0x738),param_1 + 0x768,&local_138,0);
      plVar4 = local_148;
      for (iVar6 = (int)local_140; iVar6 != 0; iVar6 = iVar6 + -1) {
        if (*plVar4 != 0) {
          FMemory::Free();
        }
        plVar4 = plVar4 + 2;
      }
      if (local_148 != (longlong *)0x0) {
        FMemory::Free(local_148);
      }
      plVar4 = local_248;
      iVar6 = local_240;
      if (local_138 != 0) {
        FMemory::Free();
        plVar4 = local_248;
        iVar6 = local_240;
      }
      for (; iVar6 != 0; iVar6 = iVar6 + -1) {
        if (*plVar4 != 0) {
          FMemory::Free();
        }
        plVar4 = plVar4 + 2;
      }
      if (local_248 != (longlong *)0x0) {
        FMemory::Free(local_248);
      }
    }
  }
  if (*(longlong *)(param_1 + 0x730) != 0) {
    local_128 = 0;
    local_120 = 4;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,0);
    FGenericPlatformString::Memcpy(local_128,&DAT_1445f37f0,8);
    FUN_142088910(*(undefined8 *)(param_1 + 0x730),&local_128);
    if (local_128 != 0) {
      FMemory::Free();
    }
  }
  if (*(longlong *)(param_1 + 0x5b0) != 0) {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x5b0) + 0x308);
    uVar3 = FUN_140e10600(param_1);
    (**(code **)(lVar5 + 0x10))(*(longlong *)(param_1 + 0x5b0) + 0x308,0,uVar3);
    local_108 = 0;
    local_100 = 0;
    uVar3 = FUN_1404b03b0();
    FText::FText(local_f8,uVar3);
    local_d8 = 0;
    local_d0 = 1;
    local_e0 = 1;
    FName::FName(local_118,L"OakPC_OpenStatusMenu",1);
    uVar7 = local_100;
    lVar5 = (longlong)(int)local_100;
    iVar6 = (int)local_100 + 1;
    local_100 = CONCAT44(local_100._4_4_,iVar6);
    if (local_100._4_4_ < iVar6) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                (&local_108,uVar7 & 0xffffffff);
    }
    *(undefined8 *)(local_108 + lVar5 * 8) = local_118[0];
    plVar4 = (longlong *)(*(longlong *)(param_1 + 0x5b0) + 0x308);
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_108,1);
    FUN_142ed2e60(*(undefined8 *)(param_1 + 0x5b0),0x3f800000);
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_f0 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_f0)(local_f0);
        LOCK();
        piVar2 = (int *)((longlong)local_f0 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_f0 + 8))(local_f0,1);
        }
      }
    }
    if (local_108 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140ef5c50 FUN_140ef5c50 body=503 status=ok
// SIG undefined FUN_140ef5c50(void)

void FUN_140ef5c50(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  FUN_142ec45d0();
  local_60 = 6;
  local_68 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
  FGenericPlatformString::Memcpy(local_68,L"inner",0xc);
  local_78 = (longlong *)0x0;
  local_70 = 0;
  FUN_140ecf270(param_1,param_1 + 0x640,&local_68,0,6,&local_78);
  plVar5 = local_78;
  for (iVar4 = (int)local_70; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_78 != (longlong *)0x0) {
    FMemory::Free(local_78);
  }
  if (local_68 != 0) {
    FMemory::Free();
  }
  local_48 = 0;
  local_40 = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  FGenericPlatformString::Memcpy(local_48,L"checkpointText",0x1e);
  local_58 = (longlong *)0x0;
  local_50 = 0;
  FUN_140ecf4e0(param_1,param_1 + 0x648,&local_48,0,6,&local_58);
  plVar5 = local_58;
  for (iVar4 = (int)local_50; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free(local_58);
  }
  if (local_48 != 0) {
    FMemory::Free();
  }
  if (*(longlong **)(param_1 + 0x648) != (longlong *)0x0) {
    lVar2 = **(longlong **)(param_1 + 0x648);
    uVar3 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_38,L"Syncing With New-U...",L"GFxCheckpointWidget",L"CheckpointText");
    (**(code **)(lVar2 + 0x2b0))(*(undefined8 *)(param_1 + 0x648),uVar3,1,0);
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_30 + 1;
      lVar2 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
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
  return;
}



// FUNCTION 140ef5e50 FUN_140ef5e50 body=1504 status=ok
// SIG undefined FUN_140ef5e50(void)

void FUN_140ef5e50(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong *local_168;
  undefined8 local_160;
  longlong local_158;
  undefined8 local_150;
  longlong *local_148;
  undefined8 local_140;
  longlong local_138;
  undefined8 local_130;
  longlong *local_128;
  undefined8 local_120;
  longlong local_118;
  undefined8 local_110;
  longlong *local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined8 local_f0;
  longlong *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_58 [8];
  longlong *local_50;
  
  FUN_142ec5080();
  local_150 = 0xd;
  local_158 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_158,0);
  FGenericPlatformString::Memcpy(local_158,L"defaultColor",0x1a);
  local_168 = (longlong *)0x0;
  local_160 = 0;
  FUN_140e98b90(param_1,param_1 + 0x310,&local_158,0,6,&local_168);
  plVar5 = local_168;
  for (iVar4 = (int)local_160; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_168 != (longlong *)0x0) {
    FMemory::Free(local_168);
  }
  if (local_158 != 0) {
    FMemory::Free();
  }
  plVar5 = *(longlong **)(param_1 + 0x310);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x278))(plVar5,0);
  }
  local_138 = 0;
  local_130 = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
  FGenericPlatformString::Memcpy(local_138,L"selectionButton2",0x22);
  local_148 = (longlong *)0x0;
  local_140 = 0;
  FUN_140e98b90(param_1,param_1 + 0x318,&local_138,0,6,&local_148);
  plVar5 = local_148;
  for (iVar4 = (int)local_140; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_148 != (longlong *)0x0) {
    FMemory::Free(local_148);
  }
  if (local_138 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x318) != 0) {
    local_118 = 0;
    local_110 = 0x11;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,0);
    FGenericPlatformString::Memcpy(local_118,L"hintWrapper.hint",0x22);
    local_128 = (longlong *)0x0;
    local_120 = 0;
    uVar3 = FUN_140ecba50(*(undefined8 *)(param_1 + 0x318),&local_118,0,6,&local_128);
    *(undefined8 *)(param_1 + 800) = uVar3;
    plVar5 = local_128;
    for (iVar4 = (int)local_120; iVar4 != 0; iVar4 = iVar4 + -1) {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 2;
    }
    if (local_128 != (longlong *)0x0) {
      FMemory::Free(local_128);
    }
    if (local_118 != 0) {
      FMemory::Free();
    }
    local_f8 = 0;
    local_f0 = 0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
    FGenericPlatformString::Memcpy(local_f8,L"buttonHelpText",0x1e);
    local_108 = (longlong *)0x0;
    local_100 = 0;
    uVar3 = FUN_140ecc7d0(*(undefined8 *)(param_1 + 0x318),&local_f8,0,6,&local_108);
    *(undefined8 *)(param_1 + 0x328) = uVar3;
    plVar5 = local_108;
    for (iVar4 = (int)local_100; iVar4 != 0; iVar4 = iVar4 + -1) {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 2;
    }
    if (local_108 != (longlong *)0x0) {
      FMemory::Free(local_108);
    }
    if (local_f8 != 0) {
      FMemory::Free();
    }
    if (*(longlong **)(param_1 + 0x328) != (longlong *)0x0) {
      lVar2 = **(longlong **)(param_1 + 0x328);
      uVar3 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_70,L"Equip Color 1",L"GFxColorPicker",L"EquipColorOneText");
      (**(code **)(lVar2 + 0x2b0))(*(undefined8 *)(param_1 + 0x328),uVar3,1,0);
      if (local_68 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_68 + 1;
        lVar2 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)*local_68)(local_68);
          LOCK();
          piVar1 = (int *)((longlong)local_68 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_68 + 8))(local_68,1);
          }
        }
      }
    }
  }
  local_d8 = 0;
  local_d0 = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
  FGenericPlatformString::Memcpy(local_d8,L"selectionButton1",0x22);
  local_e8 = (longlong *)0x0;
  local_e0 = 0;
  local_88 = 0;
  FUN_140e98b90(param_1,param_1 + 0x330,&local_d8,0,6,&local_e8);
  plVar5 = local_e8;
  for (iVar4 = (int)local_e0; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_e8 != (longlong *)0x0) {
    FMemory::Free(local_e8);
  }
  if (local_d8 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x330) != 0) {
    local_b8 = 0;
    local_b0 = 0x11;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
    FGenericPlatformString::Memcpy(local_b8,L"hintWrapper.hint",0x22);
    local_c8 = (longlong *)0x0;
    local_c0 = 0;
    local_80 = 0;
    uVar3 = FUN_140ecba50(*(undefined8 *)(param_1 + 0x330),&local_b8,0,6,&local_c8);
    *(undefined8 *)(param_1 + 0x338) = uVar3;
    plVar5 = local_c8;
    for (iVar4 = (int)local_c0; iVar4 != 0; iVar4 = iVar4 + -1) {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 2;
    }
    if (local_c8 != (longlong *)0x0) {
      FMemory::Free(local_c8);
    }
    if (local_b8 != 0) {
      FMemory::Free();
    }
    local_98 = 0;
    local_90 = 0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
    FGenericPlatformString::Memcpy(local_98,L"buttonHelpText",0x1e);
    local_a8 = (longlong *)0x0;
    local_a0 = 0;
    local_78 = 0;
    uVar3 = FUN_140ecc7d0(*(undefined8 *)(param_1 + 0x330),&local_98,0,6,&local_a8);
    *(undefined8 *)(param_1 + 0x340) = uVar3;
    plVar5 = local_a8;
    for (iVar4 = (int)local_a0; iVar4 != 0; iVar4 = iVar4 + -1) {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 2;
    }
    if (local_a8 != (longlong *)0x0) {
      FMemory::Free(local_a8);
    }
    if (local_98 != 0) {
      FMemory::Free();
    }
    if (*(longlong **)(param_1 + 0x340) != (longlong *)0x0) {
      lVar2 = **(longlong **)(param_1 + 0x340);
      uVar3 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_58,L"Equip Color 2",L"GFxColorPicker",L"EquipColorTwoText");
      (**(code **)(lVar2 + 0x2b0))(*(undefined8 *)(param_1 + 0x340),uVar3,1,0);
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_50 + 1;
        lVar2 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar1 = (int *)((longlong)local_50 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_50 + 8))(local_50,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140ef6430 FUN_140ef6430 body=368 status=ok
// SIG undefined FUN_140ef6430(void)

void FUN_140ef6430(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong *local_28;
  undefined8 local_20;
  longlong *local_18;
  undefined8 local_10;
  
  FUN_142ec3600();
  local_10 = 0xe;
  local_18 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"coloredSquare",0x1c);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  FUN_140e98b90(param_1,param_1 + 0x2d0,&local_18,0,6,&local_28);
  plVar2 = local_28;
  for (iVar1 = (int)local_20; iVar1 != 0; iVar1 = iVar1 + -1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_28 = (longlong *)0x0;
  local_20 = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"coloredSquareSplit",0x26);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  FUN_140e98b90(param_1,param_1 + 0x2d8,&local_28,0,6,&local_18);
  plVar2 = local_18;
  for (iVar1 = (int)local_10; iVar1 != 0; iVar1 = iVar1 + -1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140ef65a0 FUN_140ef65a0 body=4003 status=ok
// SIG undefined FUN_140ef65a0(void)

void FUN_140ef65a0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  undefined8 uVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  longlong *plVar9;
  wchar_t *pwVar10;
  int iVar11;
  undefined8 local_res10;
  longlong local_res18;
  undefined8 local_res20;
  longlong *local_308;
  undefined8 local_300;
  longlong local_2f8;
  undefined8 local_2f0;
  longlong *local_2e8;
  undefined8 local_2e0;
  longlong local_2d8;
  undefined8 local_2d0;
  longlong *local_2c8;
  undefined8 local_2c0;
  longlong local_2b8;
  undefined8 local_2b0;
  longlong *local_2a8;
  undefined8 local_2a0;
  longlong *local_298;
  undefined8 local_290;
  longlong local_288;
  undefined8 local_280;
  longlong *local_278;
  undefined8 local_270;
  longlong local_268;
  undefined8 local_260;
  longlong *local_258;
  undefined8 local_250;
  longlong local_248;
  undefined8 local_240;
  longlong *local_238;
  undefined8 local_230;
  longlong local_228;
  undefined8 local_220;
  longlong local_218;
  undefined8 local_210;
  longlong *local_208;
  undefined8 local_200;
  longlong local_1f8;
  undefined8 local_1f0;
  longlong *local_1e8;
  undefined8 local_1e0;
  longlong local_1d8;
  undefined8 local_1d0;
  longlong *local_1c8;
  undefined8 local_1c0;
  longlong local_1b8;
  undefined8 local_1b0;
  longlong *local_1a8;
  undefined8 local_1a0;
  longlong local_198;
  undefined8 local_190;
  longlong *local_188;
  undefined8 local_180;
  longlong local_178;
  undefined8 local_170;
  longlong *local_168;
  undefined8 local_160;
  longlong local_158;
  undefined8 local_150;
  longlong local_148;
  undefined8 local_140;
  longlong local_138;
  undefined1 local_130 [8];
  undefined4 local_128;
  undefined1 local_124;
  undefined1 local_120 [8];
  undefined8 local_118;
  longlong *plStack_110;
  undefined1 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_80 [8];
  longlong *local_78;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_50 [32];
  
  FUN_142ef9e70();
  pwVar10 = (wchar_t *)0x0;
  local_1f0 = 10;
  local_1f8 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1f8,0);
  FGenericPlatformString::Memcpy(local_1f8,L"colorList",0x14);
  local_208 = (longlong *)0x0;
  local_200 = 0;
  local_100 = 0;
  uVar5 = FUN_140ecb6b0(param_1,&local_1f8,0,6,&local_208);
  *(undefined8 *)(param_1 + 0x1b0) = uVar5;
  plVar9 = local_208;
  for (iVar11 = (int)local_200; iVar11 != 0; iVar11 = iVar11 + -1) {
    if (*plVar9 != 0) {
      FMemory::Free();
    }
    plVar9 = plVar9 + 2;
  }
  if (local_208 != (longlong *)0x0) {
    FMemory::Free(local_208);
  }
  if (local_1f8 != 0) {
    FMemory::Free();
  }
  local_1d8 = 0;
  local_1d0 = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1d8,0);
  FGenericPlatformString::Memcpy(local_1d8,L"colorChoiceList",0x20);
  local_1e8 = (longlong *)0x0;
  local_1e0 = 0;
  local_f8 = 0;
  uVar5 = FUN_140ecbdf0(param_1,&local_1d8,0,6,&local_1e8);
  *(undefined8 *)(param_1 + 0x1b8) = uVar5;
  plVar9 = local_1e8;
  for (iVar11 = (int)local_1e0; iVar11 != 0; iVar11 = iVar11 + -1) {
    if (*plVar9 != 0) {
      FMemory::Free();
    }
    plVar9 = plVar9 + 2;
  }
  if (local_1e8 != (longlong *)0x0) {
    FMemory::Free(local_1e8);
  }
  if (local_1d8 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    local_1b8 = 0;
    local_1b0 = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b8,0);
    FGenericPlatformString::Memcpy(local_1b8,L"primarySwatch",0x1c);
    local_1c8 = (longlong *)0x0;
    local_1c0 = 0;
    local_f0 = 0;
    uVar5 = FUN_140eca050(*(undefined8 *)(param_1 + 0x1b8),&local_1b8,0,6,&local_1c8);
    *(undefined8 *)(param_1 + 0x1c0) = uVar5;
    plVar9 = local_1c8;
    for (iVar11 = (int)local_1c0; iVar11 != 0; iVar11 = iVar11 + -1) {
      if (*plVar9 != 0) {
        FMemory::Free();
      }
      plVar9 = plVar9 + 2;
    }
    if (local_1c8 != (longlong *)0x0) {
      FMemory::Free(local_1c8);
    }
    if (local_1b8 != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(param_1 + 0x1c0) != 0) {
      FName::FName(&local_res10,L"OnPrimaryColorSwatchSelected",1);
      lVar3 = *(longlong *)(param_1 + 0x1c0);
      FWeakObjectPtr::operator=(lVar3 + 0x1b0,param_1);
      *(undefined8 *)(lVar3 + 0x1b8) = local_res10;
      pwVar6 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnSwatchFocused",L"::");
      pwVar8 = pwVar10;
      while (pwVar4 = pwVar6, pwVar4 != (wchar_t *)0x0) {
        pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
        pwVar8 = pwVar4;
      }
      FName::FName(&local_res18,pwVar8 + 2,1);
      lVar3 = *(longlong *)(param_1 + 0x1c0);
      FWeakObjectPtr::operator=(lVar3 + 0x1d0,param_1);
      *(longlong *)(lVar3 + 0x1d8) = local_res18;
      if ((local_res18 != 0) && (lVar7 = FWeakObjectPtr::Get(lVar3 + 0x1d0), lVar7 != 0)) {
        UObject::FindFunction(lVar7,*(undefined8 *)(lVar3 + 0x1d8));
      }
    }
    local_198 = 0;
    local_190 = 0x10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_198,0);
    FGenericPlatformString::Memcpy(local_198,L"secondarySwatch",0x20);
    local_1a8 = (longlong *)0x0;
    local_1a0 = 0;
    local_a0 = 0;
    uVar5 = FUN_140eca050(*(undefined8 *)(param_1 + 0x1b8),&local_198,0,6,&local_1a8);
    *(undefined8 *)(param_1 + 0x1d0) = uVar5;
    plVar9 = local_1a8;
    for (iVar11 = (int)local_1a0; iVar11 != 0; iVar11 = iVar11 + -1) {
      if (*plVar9 != 0) {
        FMemory::Free();
      }
      plVar9 = plVar9 + 2;
    }
    if (local_1a8 != (longlong *)0x0) {
      FMemory::Free(local_1a8);
    }
    if (local_198 != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(param_1 + 0x1d0) != 0) {
      FName::FName(&local_res20,L"OnSecondaryColorSwatchSelected",1);
      lVar3 = *(longlong *)(param_1 + 0x1d0);
      FWeakObjectPtr::operator=(lVar3 + 0x1b0,param_1);
      *(undefined8 *)(lVar3 + 0x1b8) = local_res20;
      pwVar6 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnSwatchFocused",L"::");
      pwVar8 = pwVar10;
      while (pwVar4 = pwVar6, pwVar4 != (wchar_t *)0x0) {
        pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
        pwVar8 = pwVar4;
      }
      FName::FName(&local_148,pwVar8 + 2,1);
      lVar3 = *(longlong *)(param_1 + 0x1d0);
      FWeakObjectPtr::operator=(lVar3 + 0x1d0,param_1);
      *(longlong *)(lVar3 + 0x1d8) = local_148;
      if ((local_148 != 0) && (lVar7 = FWeakObjectPtr::Get(lVar3 + 0x1d0), lVar7 != 0)) {
        UObject::FindFunction(lVar7,*(undefined8 *)(lVar3 + 0x1d8));
      }
    }
    local_178 = 0;
    local_170 = 0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_178,0);
    FGenericPlatformString::Memcpy(local_178,L"tertiarySwatch",0x1e);
    local_2a8 = (longlong *)0x0;
    local_2a0 = 0;
    local_e8 = 0;
    uVar5 = FUN_140eca050(*(undefined8 *)(param_1 + 0x1b8),&local_178,0,6,&local_2a8);
    *(undefined8 *)(param_1 + 0x1e0) = uVar5;
    plVar9 = local_2a8;
    for (iVar11 = (int)local_2a0; iVar11 != 0; iVar11 = iVar11 + -1) {
      if (*plVar9 != 0) {
        FMemory::Free();
      }
      plVar9 = plVar9 + 2;
    }
    if (local_2a8 != (longlong *)0x0) {
      FMemory::Free(local_2a8);
    }
    if (local_178 != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(param_1 + 0x1e0) != 0) {
      FName::FName(&local_140,L"OnTertiaryColorSwatchSelected",1);
      lVar3 = *(longlong *)(param_1 + 0x1e0);
      FWeakObjectPtr::operator=(lVar3 + 0x1b0,param_1);
      *(undefined8 *)(lVar3 + 0x1b8) = local_140;
      pwVar8 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnSwatchFocused",L"::");
      while (pwVar6 = pwVar8, pwVar6 != (wchar_t *)0x0) {
        pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar6 + 1,L"::");
        pwVar10 = pwVar6;
      }
      FName::FName(&local_138,pwVar10 + 2,1);
      lVar3 = *(longlong *)(param_1 + 0x1e0);
      FWeakObjectPtr::operator=(lVar3 + 0x1d0,param_1);
      *(longlong *)(lVar3 + 0x1d8) = local_138;
      if ((local_138 != 0) && (lVar7 = FWeakObjectPtr::Get(lVar3 + 0x1d0), lVar7 != 0)) {
        UObject::FindFunction(lVar7,*(undefined8 *)(lVar3 + 0x1d8));
      }
    }
    local_158 = 0;
    local_150 = 0xd;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_158,0);
    FGenericPlatformString::Memcpy(local_158,L"primaryLabel",0x1a);
    local_168 = (longlong *)0x0;
    local_160 = 0;
    uVar5 = FUN_140ecc7d0(*(undefined8 *)(param_1 + 0x1b8),&local_158,0,6,&local_168);
    *(undefined8 *)(param_1 + 0x1c8) = uVar5;
    plVar9 = local_168;
    for (iVar11 = (int)local_160; iVar11 != 0; iVar11 = iVar11 + -1) {
      if (*plVar9 != 0) {
        FMemory::Free();
      }
      plVar9 = plVar9 + 2;
    }
    if (local_168 != (longlong *)0x0) {
      FMemory::Free(local_168);
    }
    if (local_158 != 0) {
      FMemory::Free();
    }
    if (*(longlong **)(param_1 + 0x1c8) != (longlong *)0x0) {
      lVar3 = **(longlong **)(param_1 + 0x1c8);
      uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_98,L"Primary",L"GFxColorPicker",L"PrimaryLabel");
      (**(code **)(lVar3 + 0x2b0))(*(undefined8 *)(param_1 + 0x1c8),uVar5,1,0);
      if (local_90 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_90 + 1;
        lVar3 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_90)(local_90);
          LOCK();
          piVar1 = (int *)((longlong)local_90 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*local_90 + 8))(local_90,1);
          }
        }
      }
    }
    local_2f8 = 0;
    local_2f0 = 0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2f8,0);
    FGenericPlatformString::Memcpy(local_2f8,L"secondaryLabel",0x1e);
    local_308 = (longlong *)0x0;
    local_300 = 0;
    local_e0 = 0;
    uVar5 = FUN_140ecc7d0(*(undefined8 *)(param_1 + 0x1b8),&local_2f8,0,6,&local_308);
    *(undefined8 *)(param_1 + 0x1d8) = uVar5;
    plVar9 = local_308;
    for (iVar11 = (int)local_300; iVar11 != 0; iVar11 = iVar11 + -1) {
      if (*plVar9 != 0) {
        FMemory::Free();
      }
      plVar9 = plVar9 + 2;
    }
    if (local_308 != (longlong *)0x0) {
      FMemory::Free(local_308);
    }
    if (local_2f8 != 0) {
      FMemory::Free();
    }
    if (*(longlong **)(param_1 + 0x1d8) != (longlong *)0x0) {
      lVar3 = **(longlong **)(param_1 + 0x1d8);
      uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_80,L"Secondary",L"GFxColorPicker",L"SecondaryLabel");
      (**(code **)(lVar3 + 0x2b0))(*(undefined8 *)(param_1 + 0x1d8),uVar5,1,0);
      if (local_78 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_78 + 1;
        lVar3 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_78)(local_78);
          LOCK();
          piVar1 = (int *)((longlong)local_78 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*local_78 + 8))(local_78,1);
          }
        }
      }
    }
    local_2d8 = 0;
    local_2d0 = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2d8,0);
    FGenericPlatformString::Memcpy(local_2d8,L"tertiaryLabel",0x1c);
    local_2e8 = (longlong *)0x0;
    local_2e0 = 0;
    local_d8 = 0;
    uVar5 = FUN_140ecc7d0(*(undefined8 *)(param_1 + 0x1b8),&local_2d8,0,6,&local_2e8);
    *(undefined8 *)(param_1 + 0x1e8) = uVar5;
    plVar9 = local_2e8;
    for (iVar11 = (int)local_2e0; iVar11 != 0; iVar11 = iVar11 + -1) {
      if (*plVar9 != 0) {
        FMemory::Free();
      }
      plVar9 = plVar9 + 2;
    }
    if (local_2e8 != (longlong *)0x0) {
      FMemory::Free(local_2e8);
    }
    if (local_2d8 != 0) {
      FMemory::Free();
    }
    if (*(longlong **)(param_1 + 0x1e8) != (longlong *)0x0) {
      lVar3 = **(longlong **)(param_1 + 0x1e8);
      uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_68,L"Tertiary",L"GFxColorPicker",L"TertiaryLabel");
      (**(code **)(lVar3 + 0x2b0))(*(undefined8 *)(param_1 + 0x1e8),uVar5,1,0);
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_60 + 1;
        lVar3 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar1 = (int *)((longlong)local_60 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*local_60 + 8))(local_60,1);
          }
        }
      }
    }
    local_2b8 = 0;
    local_2b0 = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2b8,0);
    FGenericPlatformString::Memcpy(local_2b8,L"leftArrowAnim",0x1c);
    local_2c8 = (longlong *)0x0;
    local_2c0 = 0;
    local_d0 = 0;
    uVar5 = FUN_140ecbdf0(*(undefined8 *)(param_1 + 0x1b8),&local_2b8,0,6,&local_2c8);
    *(undefined8 *)(param_1 + 0x1f8) = uVar5;
    plVar9 = local_2c8;
    for (iVar11 = (int)local_2c0; iVar11 != 0; iVar11 = iVar11 + -1) {
      if (*plVar9 != 0) {
        FMemory::Free();
      }
      plVar9 = plVar9 + 2;
    }
    if (local_2c8 != (longlong *)0x0) {
      FMemory::Free(local_2c8);
    }
    if (local_2b8 != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(param_1 + 0x1f8) != 0) {
      local_288 = 0;
      local_280 = 0xf;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_288,0);
      FGenericPlatformString::Memcpy(local_288,L"leftArrow.hint",0x1e);
      local_298 = (longlong *)0x0;
      local_290 = 0;
      local_c8 = 0;
      uVar5 = FUN_140ecba50(*(undefined8 *)(param_1 + 0x1f8),&local_288,0,6,&local_298);
      *(undefined8 *)(param_1 + 0x200) = uVar5;
      plVar9 = local_298;
      for (iVar11 = (int)local_290; iVar11 != 0; iVar11 = iVar11 + -1) {
        if (*plVar9 != 0) {
          FMemory::Free();
        }
        plVar9 = plVar9 + 2;
      }
      if (local_298 != (longlong *)0x0) {
        FMemory::Free(local_298);
      }
      if (local_288 != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(param_1 + 0x200) == 0) {
        local_268 = 0;
        local_260 = 0x1b;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_268,0);
        FGenericPlatformString::Memcpy(local_268,L"leftArrow.hintWrapper.hint",0x36);
        local_278 = (longlong *)0x0;
        local_270 = 0;
        local_c0 = 0;
        uVar5 = FUN_140ecba50(*(undefined8 *)(param_1 + 0x1f8),&local_268,0,6,&local_278);
        *(undefined8 *)(param_1 + 0x200) = uVar5;
        plVar9 = local_278;
        for (iVar11 = (int)local_270; iVar11 != 0; iVar11 = iVar11 + -1) {
          if (*plVar9 != 0) {
            FMemory::Free();
          }
          plVar9 = plVar9 + 2;
        }
        if (local_278 != (longlong *)0x0) {
          FMemory::Free(local_278);
        }
        if (local_268 != 0) {
          FMemory::Free();
        }
      }
    }
    local_248 = 0;
    local_240 = 0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_248,0);
    FGenericPlatformString::Memcpy(local_248,L"rightArrowAnim",0x1e);
    local_258 = (longlong *)0x0;
    local_250 = 0;
    local_b8 = 0;
    uVar5 = FUN_140ecbdf0(*(undefined8 *)(param_1 + 0x1b8),&local_248,0,6,&local_258);
    *(undefined8 *)(param_1 + 0x208) = uVar5;
    plVar9 = local_258;
    for (iVar11 = (int)local_250; iVar11 != 0; iVar11 = iVar11 + -1) {
      if (*plVar9 != 0) {
        FMemory::Free();
      }
      plVar9 = plVar9 + 2;
    }
    if (local_258 != (longlong *)0x0) {
      FMemory::Free(local_258);
    }
    if (local_248 != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(param_1 + 0x208) != 0) {
      local_228 = 0;
      local_220 = 0x10;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_228,0);
      FGenericPlatformString::Memcpy(local_228,L"rightArrow.hint",0x20);
      local_238 = (longlong *)0x0;
      local_230 = 0;
      local_b0 = 0;
      uVar5 = FUN_140ecba50(*(undefined8 *)(param_1 + 0x208),&local_228,0,6,&local_238);
      *(undefined8 *)(param_1 + 0x210) = uVar5;
      plVar9 = local_238;
      for (iVar11 = (int)local_230; iVar11 != 0; iVar11 = iVar11 + -1) {
        if (*plVar9 != 0) {
          FMemory::Free();
        }
        plVar9 = plVar9 + 2;
      }
      if (local_238 != (longlong *)0x0) {
        FMemory::Free(local_238);
      }
      if (local_228 != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(param_1 + 0x210) == 0) {
        local_218 = 0;
        local_210 = 0x1c;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_218,0);
        FGenericPlatformString::Memcpy(local_218,L"rightArrow.hintWrapper.hint",0x38);
        local_188 = (longlong *)0x0;
        local_180 = 0;
        local_a8 = 0;
        uVar5 = FUN_140ecba50(*(undefined8 *)(param_1 + 0x208),&local_218,0,6,&local_188);
        *(undefined8 *)(param_1 + 0x210) = uVar5;
        plVar9 = local_188;
        for (iVar11 = (int)local_180; iVar11 != 0; iVar11 = iVar11 + -1) {
          if (*plVar9 != 0) {
            FMemory::Free();
          }
          plVar9 = plVar9 + 2;
        }
        if (local_188 != (longlong *)0x0) {
          FMemory::Free(local_188);
        }
        if (local_218 != 0) {
          FMemory::Free();
        }
      }
    }
  }
  FName::FName(local_130,&DAT_143f3eda8,1);
  local_128 = 0xffffffff;
  local_124 = 0;
  FName::FName(local_120,&DAT_143f3eda8,1);
  local_118 = 0;
  plStack_110 = (longlong *)0x0;
  local_108 = 0;
  if ((((*(longlong *)(param_1 + 0x1c0) != 0) &&
       (lVar3 = *(longlong *)(param_1 + 0x1d0), lVar3 != 0)) &&
      (*(longlong *)(param_1 + 0x1e0) != 0)) && (*(longlong *)(param_1 + 0x218) != 0)) {
    *(undefined1 *)(lVar3 + 0x2e0) = 0;
    FUN_142ecf920(lVar3,0);
    lVar3 = *(longlong *)(param_1 + 0x1e0);
    *(undefined1 *)(lVar3 + 0x2e0) = 0;
    FUN_142ecf920(lVar3,0);
    lVar3 = *(longlong *)(param_1 + 0x1c0);
    *(undefined1 *)(lVar3 + 0x2e0) = 1;
    FUN_142ecf920(lVar3,0);
    *(undefined8 *)(param_1 + 0x1f0) = *(undefined8 *)(param_1 + 0x1c0);
    uVar5 = TScriptInterface<IBlendableInterface>::
            TScriptInterface<IBlendableInterface><UMaterialInterface>
                      (local_50,*(undefined8 *)(param_1 + 0x1b0));
    FUN_142ed36d0(*(undefined8 *)(param_1 + 0x218),uVar5,0);
  }
  FUN_140eff120(param_1,*(undefined8 *)(param_1 + 0x1f0),local_130);
  plVar9 = plStack_110;
  if (plStack_110 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_110 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plStack_110)(plStack_110);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  return;
}



// FUNCTION 140ef7550 FUN_140ef7550 body=1020 status=ok
// SIG undefined FUN_140ef7550(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ef7550(longlong *param_1)

{
  int *piVar1;
  undefined1 (*pauVar2) [16];
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined2 *puVar9;
  longlong *plVar10;
  int iVar11;
  undefined1 auStack_198 [32];
  undefined1 local_178;
  longlong **local_170;
  undefined1 local_168 [16];
  longlong *local_158;
  undefined8 local_150;
  longlong local_148;
  undefined8 local_140;
  undefined1 local_138 [16];
  longlong local_128;
  longlong *plStack_120;
  longlong local_118;
  longlong *plStack_110;
  undefined8 local_108;
  undefined1 *local_f8 [2];
  longlong local_e8 [4];
  longlong *local_c8;
  int local_b8;
  undefined1 local_a8 [16];
  longlong local_98 [4];
  longlong *local_78;
  int local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  FUN_142ec45d0();
  if ((int)param_1[0xe8] == 0) {
    puVar9 = &DAT_143f3eda8;
  }
  else {
    puVar9 = (undefined2 *)param_1[0xe7];
  }
  (**(code **)(*param_1 + 0x4a8))(param_1,&local_128,puVar9);
  if (local_128 != 0) {
    local_168._8_8_ = plStack_120;
    local_168._0_8_ = local_128;
    uVar3 = (undefined4)((ulonglong)local_128 >> 0x20);
    uVar4 = (undefined4)((ulonglong)plStack_120 >> 0x20);
    pauVar2 = (undefined1 (*) [16])(param_1 + 0x103);
    if (plStack_120 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_120 + 1) = (int)plStack_120[1] + 1;
      UNLOCK();
    }
    if (&local_168 != pauVar2) {
      local_168 = *pauVar2;
      *(int *)*pauVar2 = (int)local_128;
      *(undefined4 *)((longlong)param_1 + 0x81c) = uVar3;
      *(int *)(param_1 + 0x104) = (int)plStack_120;
      *(undefined4 *)((longlong)param_1 + 0x824) = uVar4;
      local_58 = (int)local_128;
      uStack_54 = uVar3;
      uStack_50 = (int)plStack_120;
      uStack_4c = uVar4;
    }
    uVar8 = local_168._8_8_;
    if ((undefined8 *)local_168._8_8_ != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_168._8_8_ + 8);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (*(code *)**(undefined8 **)local_168._8_8_)(local_168._8_8_);
        LOCK();
        piVar1 = (int *)(uVar8 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*(longlong *)local_168._8_8_ + 8))(local_168._8_8_,1);
        }
      }
    }
    FUN_142056670(*(longlong *)*pauVar2,1);
  }
  if (plStack_120 != (longlong *)0x0) {
    LOCK();
    plVar10 = plStack_120 + 1;
    lVar5 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_120)(plStack_120);
      LOCK();
      piVar1 = (int *)((longlong)plStack_120 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*plStack_120 + 8))(plStack_120,1);
      }
    }
  }
  local_140 = 0x15;
  local_148 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,0);
  FGenericPlatformString::Memcpy(local_148,L"hitFeedbackContainer",0x2a);
  local_170 = &local_158;
  local_158 = (longlong *)0x0;
  local_178 = 6;
  local_150 = 0;
  local_108 = 0;
  cVar6 = FUN_140ecf750(param_1,param_1 + 0xfc,&local_148,0);
  plVar10 = local_158;
  for (iVar11 = (int)local_150; iVar11 != 0; iVar11 = iVar11 + -1) {
    if (*plVar10 != 0) {
      FMemory::Free();
    }
    plVar10 = plVar10 + 2;
  }
  if (local_158 != (longlong *)0x0) {
    FMemory::Free(local_158);
  }
  if (local_148 != 0) {
    FMemory::Free();
  }
  if (cVar6 != '\0') {
    (**(code **)(*(longlong *)param_1[0xfc] + 0x278))((longlong *)param_1[0xfc],1);
  }
  (**(code **)(*param_1 + 0x4a8))(param_1,&local_118,L"hitFeedbackKill");
  if (local_118 != 0) {
    local_138._8_8_ = plStack_110;
    local_138._0_8_ = local_118;
    uVar3 = (undefined4)((ulonglong)local_118 >> 0x20);
    uVar4 = (undefined4)((ulonglong)plStack_110 >> 0x20);
    pauVar2 = (undefined1 (*) [16])(param_1 + 0x101);
    if (plStack_110 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_110 + 1) = (int)plStack_110[1] + 1;
      UNLOCK();
    }
    if (&local_138 != pauVar2) {
      local_138 = *pauVar2;
      *(int *)*pauVar2 = (int)local_118;
      *(undefined4 *)((longlong)param_1 + 0x80c) = uVar3;
      *(int *)(param_1 + 0x102) = (int)plStack_110;
      *(undefined4 *)((longlong)param_1 + 0x814) = uVar4;
      local_48 = (int)local_118;
      uStack_44 = uVar3;
      uStack_40 = (int)plStack_110;
      uStack_3c = uVar4;
    }
    uVar8 = local_138._8_8_;
    if ((undefined8 *)local_138._8_8_ != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_138._8_8_ + 8);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (*(code *)**(undefined8 **)local_138._8_8_)(local_138._8_8_);
        LOCK();
        piVar1 = (int *)(uVar8 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*(longlong *)local_138._8_8_ + 8))(local_138._8_8_,1);
        }
      }
    }
    FUN_142056670(*(longlong *)*pauVar2,1);
  }
  if (plStack_110 != (longlong *)0x0) {
    LOCK();
    plVar10 = plStack_110 + 1;
    lVar5 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_110)(plStack_110);
      LOCK();
      piVar1 = (int *)((longlong)plStack_110 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*plStack_110 + 8))(plStack_110,1);
      }
    }
  }
  FUN_140f080f0(param_1 + 0xcc,param_1 + 0xef);
  FUN_140f07ed0(param_1 + 0xcc);
  FUN_140ee10d0(param_1,param_1 + 0xef);
  FUN_140f08b10(param_1);
  local_c8 = (longlong *)0x0;
  local_b8 = 0;
  puVar7 = (undefined8 *)FUN_140438ef0(0x10,local_e8);
  if (puVar7 != (undefined8 *)0x0) {
    puVar7[1] = param_1;
    *puVar7 = &PTR_FUN_143f77b70;
  }
  local_f8[0] = &LAB_140ee0f30;
  uVar8 = FUN_1420849a0(param_1,local_a8,local_f8);
  FUN_14208c260(param_1,uVar8);
  if (local_68 != 0) {
    plVar10 = local_98;
    if (local_78 != (longlong *)0x0) {
      plVar10 = local_78;
    }
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x10))(plVar10,0);
    }
  }
  if (local_78 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_b8 != 0) {
    plVar10 = local_e8;
    if (local_c8 != (longlong *)0x0) {
      plVar10 = local_c8;
    }
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x10))(plVar10,0);
    }
  }
  if (local_c8 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140ef7950 FUN_140ef7950 body=1789 status=ok
// SIG undefined FUN_140ef7950(void)

void FUN_140ef7950(longlong param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  int iVar12;
  undefined2 *puVar13;
  int local_res8;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong *local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  longlong local_98;
  longlong *local_90;
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  undefined2 *local_68;
  int local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  
  FUN_142ef9e70();
  FUN_142f10940(param_1,1);
  local_b0 = 5;
  *(undefined8 *)(param_1 + 600) = 0;
  local_b8 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_b8,5,&DAT_1445f0d24,5,0x3f);
  local_c8 = (longlong *)0x0;
  local_c0 = 0;
  uVar6 = FUN_140ecbdf0(param_1,&local_b8,0,6,&local_c8);
  *(undefined8 *)(param_1 + 0x228) = uVar6;
  plVar11 = local_c8;
  for (iVar12 = (int)local_c0; iVar12 != 0; iVar12 = iVar12 + -1) {
    if (*plVar11 != 0) {
      FMemory::Free();
    }
    plVar11 = plVar11 + 2;
  }
  if (local_c8 != (longlong *)0x0) {
    FMemory::Free(local_c8);
  }
  if (local_b8 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x228) != 0) {
    iVar12 = 1;
    while( true ) {
      FString::PrintfImpl(&local_68,L"currencyComma%d",iVar12);
      puVar13 = &DAT_143f3eda8;
      if (local_60 != 0) {
        puVar13 = local_68;
      }
      FUN_142085870(*(undefined8 *)(param_1 + 0x228),&local_98,puVar13);
      if (local_68 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      plVar11 = local_90;
      lVar8 = local_98;
      if (local_98 == 0) break;
      if (local_90 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_90 + 0xc) = *(int *)((longlong)local_90 + 0xc) + 1;
        UNLOCK();
      }
      iVar4 = *(int *)(param_1 + 0x1c0);
      *(int *)(param_1 + 0x1c0) = iVar4 + 1;
      if (*(int *)(param_1 + 0x1c4) < iVar4 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x1b8,iVar4);
      }
      plVar10 = local_90;
      iVar12 = iVar12 + 1;
      plVar7 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(param_1 + 0x1b8));
      *plVar7 = lVar8;
      plVar7[1] = (longlong)plVar11;
      if (local_90 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_90 + 1;
        lVar8 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_90)(local_90);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
    }
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_90 + 1;
      lVar8 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar1 = (int *)((longlong)local_90 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_90 + 8))(local_90,1);
        }
      }
    }
    local_res8 = 1;
    while( true ) {
      local_a8 = (longlong *)0x0;
      local_a0 = 0;
      FString::PrintfImpl(&local_d8,L"CurrencySlider%i",local_res8);
      lVar8 = FUN_140ecacd0(*(undefined8 *)(param_1 + 0x228),&local_d8,0,6,&local_a8);
      if (local_d8 != 0) {
        FMemory::Free();
      }
      plVar11 = local_a8;
      for (iVar12 = (int)local_a0; iVar12 != 0; iVar12 = iVar12 + -1) {
        if (*plVar11 != 0) {
          FMemory::Free();
        }
        plVar11 = plVar11 + 2;
      }
      if (local_a8 != (longlong *)0x0) {
        FMemory::Free(local_a8);
      }
      if (lVar8 == 0) break;
      AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x1a8));
      LOCK();
      *(undefined4 *)(param_1 + 0x1b0) = 1;
      UNLOCK();
      iVar12 = *(int *)(param_1 + 0x1a0);
      *(int *)(param_1 + 0x1a0) = iVar12 + 1;
      if (*(int *)(param_1 + 0x1a4) < iVar12 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x198,iVar12);
      }
      local_res8 = local_res8 + 1;
      *(longlong *)(*(longlong *)(param_1 + 0x198) + (longlong)iVar12 * 8) = lVar8;
      ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x1a8));
      LOCK();
      *(undefined4 *)(param_1 + 0x1b0) = 0;
      UNLOCK();
    }
    FUN_142088ee0(*(undefined8 *)(param_1 + 0x228),1);
  }
  FUN_142085870(param_1,&local_88,L"deltaPositive");
  if (local_88 != 0) {
    uVar6 = FUN_1420392d0(local_88,local_58,L"deltaText");
    FUN_142ede260(param_1 + 0x210,uVar6);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_50 + 1;
      lVar8 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
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
    plVar10 = local_80;
    *(longlong *)(param_1 + 0x200) = local_88;
    plVar11 = *(longlong **)(param_1 + 0x208);
    if (local_80 != plVar11) {
      if (local_80 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_80 + 0xc) = *(int *)((longlong)local_80 + 0xc) + 1;
        UNLOCK();
        plVar11 = *(longlong **)(param_1 + 0x208);
      }
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
        }
      }
      *(longlong **)(param_1 + 0x208) = plVar10;
    }
  }
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_80 + 1;
    lVar8 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar1 = (int *)((longlong)local_80 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*local_80 + 8))(local_80,1);
      }
    }
  }
  FUN_142085870(param_1,&local_78,L"deltaNegative");
  if (local_78 != 0) {
    FUN_1420392d0(local_78,local_48,L"deltaText");
    FUN_142ede260(param_1 + 0x1e8);
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_40 + 1;
      lVar8 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)local_40 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_40 + 8))(local_40);
        }
      }
    }
    plVar10 = local_70;
    *(longlong *)(param_1 + 0x1d8) = local_78;
    plVar11 = *(longlong **)(param_1 + 0x1e0);
    if (local_70 != plVar11) {
      if (local_70 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_70 + 0xc) = *(int *)((longlong)local_70 + 0xc) + 1;
        UNLOCK();
        plVar11 = *(longlong **)(param_1 + 0x1e0);
      }
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar11 + 8))();
        }
      }
      *(longlong **)(param_1 + 0x1e0) = plVar10;
    }
  }
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_70 + 1;
    lVar8 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)local_70 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*local_70 + 8))(local_70);
      }
    }
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar8 = *(longlong *)(DAT_146b33f38 + 0x90);
  if (lVar8 != 0) {
    puVar9 = (undefined8 *)FUN_1411e4840(lVar8);
    plVar11 = (longlong *)(param_1 + 0x188);
    uStack_d0 = 0;
    iVar12 = *(int *)(param_1 + 400);
    local_d8 = *puVar9;
    *(int *)(param_1 + 400) = iVar12 + 1;
    if (*(int *)(param_1 + 0x194) < iVar12 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar11,iVar12);
    }
    puVar2 = (undefined4 *)(*plVar11 + (longlong)iVar12 * 0x10);
    *puVar2 = (undefined4)local_d8;
    puVar2[1] = local_d8._4_4_;
    puVar2[2] = uStack_d0;
    puVar2[3] = uStack_cc;
    puVar9 = (undefined8 *)FUN_1411e2300(lVar8);
    iVar12 = *(int *)(param_1 + 400);
    uStack_d0 = 0;
    local_d8 = *puVar9;
    *(int *)(param_1 + 400) = iVar12 + 1;
    if (*(int *)(param_1 + 0x194) < iVar12 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar11,iVar12);
    }
    puVar2 = (undefined4 *)(*plVar11 + (longlong)iVar12 * 0x10);
    *puVar2 = (undefined4)local_d8;
    puVar2[1] = local_d8._4_4_;
    puVar2[2] = uStack_d0;
    puVar2[3] = uStack_cc;
    puVar9 = (undefined8 *)FUN_1411e23e0(lVar8);
    iVar12 = *(int *)(param_1 + 400);
    uStack_d0 = 0;
    local_d8 = *puVar9;
    *(int *)(param_1 + 400) = iVar12 + 1;
    if (*(int *)(param_1 + 0x194) < iVar12 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar11,iVar12);
    }
    puVar2 = (undefined4 *)(*plVar11 + (longlong)iVar12 * 0x10);
    *puVar2 = (undefined4)local_d8;
    puVar2[1] = local_d8._4_4_;
    puVar2[2] = uStack_d0;
    puVar2[3] = uStack_cc;
    plVar10 = (longlong *)FUN_1411e7440(lVar8);
    uStack_d0 = 0;
    iVar12 = *(int *)(param_1 + 400);
    local_d8 = *plVar10;
    iVar4 = iVar12 + 1;
    *(int *)(param_1 + 400) = iVar4;
    if (*(int *)(param_1 + 0x194) < iVar4) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar11);
    }
    puVar2 = (undefined4 *)(*plVar11 + (longlong)iVar12 * 0x10);
    *puVar2 = (undefined4)local_d8;
    puVar2[1] = local_d8._4_4_;
    puVar2[2] = uStack_d0;
    puVar2[3] = uStack_cc;
  }
  iVar12 = *(int *)(param_1 + 0x264);
  iVar4 = *(int *)(param_1 + 0x270);
  iVar5 = iVar12 + iVar4;
  *(int *)(param_1 + 0x270) = iVar5;
  if (*(int *)(param_1 + 0x274) < iVar5) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x268);
  }
  _guard_xfg_dispatch_icall_nop
            ((void *)(*(longlong *)(param_1 + 0x268) + (longlong)iVar4 * 8),0,(longlong)iVar12 << 3)
  ;
  dVar3 = _guard_xfg_dispatch_icall_nop(10.0,(double)*(int *)(param_1 + 0x264));
  *(int *)(param_1 + 0x278) = (int)(dVar3 - 1.0);
  return;
}



// FUNCTION 140ef8050 FUN_140ef8050 body=580 status=ok
// SIG undefined FUN_140ef8050(void)

void FUN_140ef8050(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong *local_48;
  undefined8 local_40;
  longlong local_38 [2];
  
  FUN_142ec45d0();
  uVar6 = 0;
  plVar3 = (longlong *)(param_1 + 0x650);
  local_48 = (longlong *)0x0;
  local_40 = 0;
  cVar2 = FUN_140ece2d0(param_1,plVar3,param_1 + 0x658,0,6,&local_48);
  plVar8 = local_48;
  for (iVar7 = (int)local_40; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
  if (cVar2 != '\0') {
    *(undefined4 *)(*plVar3 + 0x248) = *(undefined4 *)(param_1 + 0x634);
    *(undefined4 *)(*plVar3 + 0x244) = *(undefined4 *)(param_1 + 0x63c);
    *(undefined1 *)(*plVar3 + 0x251) = 1;
    lVar5 = *plVar3;
    *(undefined4 *)(lVar5 + 0x240) = *(undefined4 *)(param_1 + 0x630);
    AcquireSRWLockShared((PSRWLOCK)(lVar5 + 0x1a8));
    LOCK();
    *(int *)(lVar5 + 0x1b4) = *(int *)(lVar5 + 0x1b4) + 1;
    UNLOCK();
    plVar8 = *(longlong **)(lVar5 + 0x198);
    uVar9 = (longlong)*(int *)(lVar5 + 0x1a0) & 0x1fffffffffffffff;
    if (plVar8 + *(int *)(lVar5 + 0x1a0) < plVar8) {
      uVar9 = uVar6;
    }
    if (uVar9 != 0) {
      do {
        if (*plVar8 != 0) {
          FUN_1410a63a0(*plVar8,*(undefined4 *)(lVar5 + 0x240));
        }
        plVar8 = plVar8 + 1;
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar9);
    }
    ReleaseSRWLockShared((PSRWLOCK)(lVar5 + 0x1a8));
    LOCK();
    *(int *)(lVar5 + 0x1b4) = *(int *)(lVar5 + 0x1b4) + -1;
    UNLOCK();
    lVar5 = *plVar3;
    plVar8 = (longlong *)(lVar5 + 0x170);
    plVar3 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = (longlong)&PTR_FUN_143f4d170;
      FWeakObjectPtr::operator=(plVar3 + 1,param_1);
      plVar3[2] = (longlong)FUN_140eef970;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[4] = lVar4;
      *plVar3 = (longlong)&PTR_FUN_143f4d1b8;
    }
    if (local_38 != plVar8) {
      if (plVar3 == (longlong *)0x0) {
        if ((*(int *)(lVar5 + 0x178) != 0) &&
           (plVar1 = (longlong *)*plVar8, plVar1 != (longlong *)0x0)) {
          (**(code **)(*plVar1 + 0x28))(plVar1,0);
          if (*plVar8 != 0) {
            lVar4 = FMemory::Realloc(*plVar8,0,0);
            *plVar8 = lVar4;
          }
          *(undefined4 *)(lVar5 + 0x178) = 0;
        }
      }
      else {
        (**(code **)(*plVar3 + 0x30))(plVar3,plVar8);
      }
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3,0);
      lVar5 = FMemory::Realloc(plVar3,0,0);
      if (lVar5 != 0) {
        FMemory::Free(lVar5);
      }
    }
  }
  return;
}



// FUNCTION 140ef82a0 FUN_140ef82a0 body=14 status=ok
// SIG undefined FUN_140ef82a0(void)

void FUN_140ef82a0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x550) = param_2;
  FUN_142090ed0(param_1,1);
  return;
}



// FUNCTION 140ef82b0 FUN_140ef82b0 body=194 status=ok
// SIG undefined FUN_140ef82b0(void)

void FUN_140ef82b0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *local_28;
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10;
  
  FUN_142ef9e70();
  local_10 = 8;
  local_18 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"content",0x10);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  FUN_140ecec90(param_1,param_1 + 0x170,&local_18,0,6,&local_28);
  plVar1 = local_28;
  for (iVar2 = (int)local_20; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    plVar1 = plVar1 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140ef8380 FUN_140ef8380 body=1439 status=ok
// SIG undefined FUN_140ef8380(void)

void FUN_140ef8380(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong local_c8;
  longlong *local_c0;
  longlong local_b8;
  longlong *local_b0;
  longlong local_a8;
  longlong *local_a0;
  longlong local_98;
  longlong *local_90;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  FUN_142ef9e70();
  FUN_142085870(param_1,&local_b8,L"duelNotification");
  plVar2 = local_b0;
  if (local_b8 != 0) {
    *(longlong *)(param_1 + 0x170) = local_b8;
    plVar6 = *(longlong **)(param_1 + 0x178);
    if (local_b0 != plVar6) {
      if (local_b0 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_b0 + 0xc) = *(int *)((longlong)local_b0 + 0xc) + 1;
        UNLOCK();
        plVar6 = *(longlong **)(param_1 + 0x178);
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      *(longlong **)(param_1 + 0x178) = plVar2;
    }
    uVar5 = FUN_1420392d0(local_b8,local_88,L"duelText");
    FUN_142ede260(param_1 + 0x180,uVar5);
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_80 + 1;
      lVar4 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)local_80 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    uVar5 = FUN_1420392d0(local_b8,local_78,L"duelTextShadow");
    FUN_142ede260(param_1 + 0x198,uVar5);
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_70 + 1;
      lVar4 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_b0 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar1 = (int *)((longlong)local_b0 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_b0 + 8))(local_b0,1);
      }
    }
  }
  FUN_142085870(param_1,&local_98,L"countdown");
  plVar2 = local_90;
  if (local_98 != 0) {
    *(longlong *)(param_1 + 0x1b0) = local_98;
    plVar6 = *(longlong **)(param_1 + 0x1b8);
    if (local_90 != plVar6) {
      if (local_90 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_90 + 0xc) = *(int *)((longlong)local_90 + 0xc) + 1;
        UNLOCK();
        plVar6 = *(longlong **)(param_1 + 0x1b8);
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      *(longlong **)(param_1 + 0x1b8) = plVar2;
    }
    uVar5 = FUN_1420392d0(local_98,local_68,L"countdownText");
    FUN_142ede260(param_1 + 0x1c0,uVar5);
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_60 + 1;
      lVar4 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_90 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  FUN_142085870(param_1,&local_c8,L"winNotification");
  plVar2 = local_c0;
  if (local_c8 != 0) {
    *(longlong *)(param_1 + 0x1d8) = local_c8;
    plVar6 = *(longlong **)(param_1 + 0x1e0);
    if (local_c0 != plVar6) {
      if (local_c0 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_c0 + 0xc) = *(int *)((longlong)local_c0 + 0xc) + 1;
        UNLOCK();
        plVar6 = *(longlong **)(param_1 + 0x1e0);
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      *(longlong **)(param_1 + 0x1e0) = plVar2;
    }
    uVar5 = FUN_1420392d0(local_c8,local_58,L"winText");
    FUN_142ede260(param_1 + 0x1e8,uVar5);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_50 + 1;
      lVar4 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
    uVar5 = FUN_1420392d0(local_c8,local_48,L"winTextYellow");
    FUN_142ede260(param_1 + 0x200,uVar5);
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_40 + 1;
      lVar4 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
    uVar5 = FUN_1420392d0(local_c8,local_38,L"winTextShadow");
    FUN_142ede260(param_1 + 0x218,uVar5);
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_30 + 1;
      lVar4 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
  }
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_c0 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  FUN_142085870(param_1,&local_a8,L"loseNotification");
  plVar2 = local_a0;
  if (local_a8 != 0) {
    *(longlong *)(param_1 + 0x230) = local_a8;
    plVar6 = *(longlong **)(param_1 + 0x238);
    if (local_a0 != plVar6) {
      if (local_a0 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_a0 + 0xc) = *(int *)((longlong)local_a0 + 0xc) + 1;
        UNLOCK();
        plVar6 = *(longlong **)(param_1 + 0x238);
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      *(longlong **)(param_1 + 0x238) = plVar2;
    }
    uVar5 = FUN_1420392d0(local_a8,local_28,L"loseText");
    FUN_142ede260(param_1 + 0x240,uVar5);
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
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
    uVar5 = FUN_1420392d0(local_a8,local_18,L"loseTextShadow");
    FUN_142ede260(param_1 + 600,uVar5);
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_10 + 1;
      lVar4 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
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
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_a0 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  FUN_140eeb3b0(param_1 + 0x270,param_1);
  return;
}



// FUNCTION 140ef8920 FUN_140ef8920 body=194 status=ok
// SIG undefined FUN_140ef8920(void)

void FUN_140ef8920(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *local_28;
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10;
  
  FUN_142ec45d0();
  local_10 = 8;
  local_18 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"content",0x10);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  FUN_140ece540(param_1,param_1 + 0x638,&local_18,0,6,&local_28);
  plVar1 = local_28;
  for (iVar2 = (int)local_20; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    plVar1 = plVar1 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140ef89f0 FUN_140ef89f0 body=121 status=ok
// SIG undefined FUN_140ef89f0(void)

void FUN_140ef89f0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_18 [8];
  longlong *local_10;
  
  FUN_142ef9e70();
  uVar5 = FUN_142085870(param_1,local_18,L"eventText");
  FUN_142ede260(param_1 + 0x170,uVar5);
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
  return;
}



// FUNCTION 140ef8a70 FUN_140ef8a70 body=194 status=ok
// SIG undefined FUN_140ef8a70(void)

void FUN_140ef8a70(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *local_28;
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10;
  
  FUN_142ec45d0();
  local_10 = 8;
  local_18 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"content",0x10);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  FUN_140ece7b0(param_1,param_1 + 0x638,&local_18,0,6,&local_28);
  plVar1 = local_28;
  for (iVar2 = (int)local_20; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    plVar1 = plVar1 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140ef8b40 FUN_140ef8b40 body=971 status=ok
// SIG undefined FUN_140ef8b40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ef8b40(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_58 [48];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  FUN_142ef9e70();
  uVar8 = FUN_142085870(param_1,local_c8,L"timerText");
  FUN_142ede260(param_1 + 0x1a0,uVar8);
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_c0 + 1;
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_c0)(local_c0);
      LOCK();
      piVar1 = (int *)((longlong)local_c0 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_c0 + 8))(local_c0,1);
      }
    }
  }
  uVar8 = FUN_142085870(param_1,local_b8,L"matchTypeText");
  FUN_142ede260(param_1 + 0x1b8,uVar8);
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_b0 + 1;
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar1 = (int *)((longlong)local_b0 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_b0 + 8))(local_b0,1);
      }
    }
  }
  uVar8 = FUN_142085870(param_1,local_a8,L"challengersText");
  FUN_142ede260(param_1 + 0x1d0,uVar8);
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_a0 + 1;
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar1 = (int *)((longlong)local_a0 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_a0 + 8))(local_a0,1);
      }
    }
  }
  puVar9 = (undefined8 *)FUN_142085870(param_1,local_98,L"challengerNumber");
  *(undefined8 *)(param_1 + 0x1e8) = *puVar9;
  plVar2 = (longlong *)puVar9[1];
  plVar11 = *(longlong **)(param_1 + 0x1f0);
  if (plVar2 != plVar11) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar11 = *(longlong **)(param_1 + 0x1f0);
    }
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar7 == 1) && (plVar11 != (longlong *)0x0)) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
    *(longlong **)(param_1 + 0x1f0) = plVar2;
  }
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_90 + 1;
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar1 = (int *)((longlong)local_90 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_90 + 8))(local_90,1);
      }
    }
  }
  if ((*(longlong *)(param_1 + 0x1c0) != 0) && (*(longlong *)(param_1 + 0x1c8) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x1c8) + 8);
    LOCK();
    iVar7 = *piVar1;
    if (iVar7 == 0) {
      *piVar1 = 0;
      iVar7 = 0;
    }
    UNLOCK();
    if (0 < iVar7) {
      uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_88,L"PINK SLIP",L"GFxDuelingWidget",L"PinkSlip");
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x1b8,uVar8,1,0);
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_80 + 1;
        lVar12 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*local_80)(local_80);
          LOCK();
          piVar1 = (int *)((longlong)local_80 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*local_80 + 8))(local_80,1);
          }
        }
      }
    }
  }
  if ((*(longlong *)(param_1 + 0x1d8) != 0) && (*(longlong *)(param_1 + 0x1e0) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x1e0) + 8);
    LOCK();
    iVar7 = *piVar1;
    if (iVar7 == 0) {
      *piVar1 = 0;
      iVar7 = 0;
    }
    UNLOCK();
    if (0 < iVar7) {
      uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_70,L"CHALLENGERS!",L"GFxDuelingWidget",L"Challengers");
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x1d0,uVar8,1,0);
      if (local_68 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_68 + 1;
        lVar12 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*local_68)(local_68);
          LOCK();
          piVar1 = (int *)((longlong)local_68 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*local_68 + 8))(local_68,1);
          }
        }
      }
    }
  }
  if (*(char *)(param_1 + 0x1f8) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x1f8) = 1;
  puVar9 = (undefined8 *)FUN_142086190(param_1,local_58);
  uVar8 = puVar9[1];
  *(undefined8 *)(param_1 + 0x200) = *puVar9;
  *(undefined8 *)(param_1 + 0x208) = uVar8;
  uVar3 = *(undefined4 *)((longlong)puVar9 + 0x14);
  uVar4 = *(undefined4 *)(puVar9 + 3);
  uVar5 = *(undefined4 *)((longlong)puVar9 + 0x1c);
  *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(puVar9 + 2);
  *(undefined4 *)(param_1 + 0x214) = uVar3;
  *(undefined4 *)(param_1 + 0x218) = uVar4;
  *(undefined4 *)(param_1 + 0x21c) = uVar5;
  uVar3 = *(undefined4 *)((longlong)puVar9 + 0x24);
  uVar4 = *(undefined4 *)(puVar9 + 5);
  uVar5 = *(undefined4 *)((longlong)puVar9 + 0x2c);
  *(undefined4 *)(param_1 + 0x220) = *(undefined4 *)(puVar9 + 4);
  *(undefined4 *)(param_1 + 0x224) = uVar3;
  *(undefined4 *)(param_1 + 0x228) = uVar4;
  *(undefined4 *)(param_1 + 0x22c) = uVar5;
  lVar12 = *(longlong *)(param_1 + 0x38);
  if (lVar12 != 0) {
    lVar10 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8
         ) != lVar10 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_140ef8ecf;
  }
  lVar12 = 0;
LAB_140ef8ecf:
  FWeakObjectPtr::operator=(param_1 + 0x188,lVar12);
  return;
}



// FUNCTION 140ef8f10 FUN_140ef8f10 body=194 status=ok
// SIG undefined FUN_140ef8f10(void)

void FUN_140ef8f10(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *local_28;
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10;
  
  FUN_142ec45d0();
  local_10 = 0xf;
  local_18 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"contentWrapper",0x1e);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  FUN_140ecea20(param_1,param_1 + 0x640,&local_18,0,6,&local_28);
  plVar1 = local_28;
  for (iVar2 = (int)local_20; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    plVar1 = plVar1 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140ef8fe0 FUN_140ef8fe0 body=1368 status=ok
// SIG undefined FUN_140ef8fe0(void)

void FUN_140ef8fe0(longlong *param_1)

{
  int *piVar1;
  wchar_t *pwVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  undefined2 *puVar14;
  int iVar15;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  longlong **pplVar16;
  undefined1 local_90 [8];
  undefined1 local_88 [8];
  longlong *local_80;
  int local_78;
  longlong *local_70;
  undefined8 local_68;
  longlong local_60;
  longlong *local_58;
  
  FUN_142ec45d0();
  pwVar12 = (wchar_t *)0x0;
  *(undefined1 *)(param_1 + 0xd7) = 0;
  pplVar16 = &local_70;
  local_70 = (longlong *)0x0;
  local_68 = 0;
  lVar4 = FUN_140e96f30(param_1,param_1 + 0xc6,0,6,pplVar16);
  param_1[200] = lVar4;
  plVar5 = local_70;
  for (iVar15 = (int)local_68; iVar15 != 0; iVar15 = iVar15 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_70 != (longlong *)0x0) {
    FMemory::Free(local_70);
  }
  if ((int)param_1[0xca] == 0) {
    puVar14 = &DAT_143f3eda8;
  }
  else {
    puVar14 = (undefined2 *)param_1[0xc9];
  }
  (**(code **)(*param_1 + 0x4a8))(param_1,&local_60,puVar14);
  if (local_60 != 0) {
    FUN_14203e3e0(local_60,0);
    plVar9 = local_58;
    param_1[0xcb] = local_60;
    plVar5 = (longlong *)param_1[0xcc];
    if (local_58 != plVar5) {
      if (local_58 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_58 + 0xc) = *(int *)((longlong)local_58 + 0xc) + 1;
        UNLOCK();
        plVar5 = (longlong *)param_1[0xcc];
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar15 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar15 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      param_1[0xcc] = (longlong)plVar9;
    }
  }
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_58 + 1;
    lVar4 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar1 = (int *)((longlong)local_58 + 0xc);
      iVar15 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar15 == 1) {
        (**(code **)(*local_58 + 8))(local_58,1);
      }
    }
  }
  if (param_1[0x57] != 0) {
    local_80 = (longlong *)0x0;
    plVar5 = (longlong *)FMemory::Realloc(0,0x30);
    local_78 = 3;
    local_80 = plVar5;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = (longlong)&PTR_FUN_143f4d290;
      FWeakObjectPtr::operator=(plVar5 + 1,param_1);
      plVar5[2] = (longlong)FUN_140ef2ce0;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar5[4] = lVar4;
      *plVar5 = (longlong)&PTR_FUN_143f4d2d8;
    }
    FUN_142ee1c00(param_1[0x57],"ECHOHideAnimationComplete",param_1 + 0xd8,&local_80);
    if (local_78 != 0) {
      if (local_80 == (longlong *)0x0) goto LAB_140ef91f7;
      (**(code **)(*local_80 + 0x28))(local_80,0);
      if (local_80 != (longlong *)0x0) {
        local_80 = (longlong *)FMemory::Realloc(local_80,0,0);
      }
      local_78 = 0;
    }
    if (local_80 != (longlong *)0x0) {
      FMemory::Free(local_80);
    }
  }
LAB_140ef91f7:
  FUN_14172a070(local_res8,0);
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  local_res10 = 0;
  uVar6 = FUN_142f1c650();
  lVar4 = FUN_1417985e0(uVar6,param_1,0,0,(ulonglong)pplVar16 & 0xffffffff00000000,0,0,0,0);
  param_1[0xe2] = lVar4;
  FUN_14172a400(local_res8);
  if (param_1[0xe2] != 0) {
    pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnMediaMovieStarted",L"::");
    pwVar13 = pwVar12;
    while (pwVar2 = pwVar7, pwVar2 != (wchar_t *)0x0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar13 = pwVar2;
    }
    FName::FName(&local_res18,pwVar13 + 2,1);
    FUN_14074ba20(param_1[0xe2] + 0x28,param_1,&LAB_140efc360,local_res18);
    pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnMediaMovieStopped",L"::");
    pwVar13 = pwVar12;
    while (pwVar2 = pwVar7, pwVar2 != (wchar_t *)0x0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar13 = pwVar2;
    }
    FName::FName(&local_res20,pwVar13 + 2,1);
    FUN_14074ba20(param_1[0xe2] + 0x38,param_1,FUN_140efc380,local_res20);
    FUN_142ebb990(param_1[0xe2],param_1,param_1 + 0xd1);
  }
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0xbb);
  if (cVar3 == '\0') {
    uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
  }
  else {
    plVar5 = (longlong *)FWeakObjectPtr::Get(param_1 + 0xbb);
    uVar6 = (**(code **)(*plVar5 + 0x148))(plVar5);
  }
  lVar4 = FUN_140c12480(uVar6);
  if ((lVar4 != 0) && (lVar4 = UNiagaraSystem::GetEffectType(lVar4), lVar4 != 0)) {
    plVar5 = (longlong *)FMemory::Realloc(0,0x30);
    pwVar13 = pwVar12;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = (longlong)&PTR_FUN_144605d58;
      FWeakObjectPtr::operator=(plVar5 + 1,param_1);
      plVar5[2] = (longlong)FUN_140ef1d80;
      lVar8 = FDelegateHandle::GenerateNewID();
      plVar5[4] = lVar8;
      *plVar5 = (longlong)&PTR_FUN_144605da0;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar4 + 0x68,1);
      plVar9 = (longlong *)(**(code **)(*plVar5 + 0x20))(plVar5,local_90);
      iVar15 = *(int *)(lVar4 + 0x70);
      pwVar13 = (wchar_t *)*plVar9;
      *(int *)(lVar4 + 0x70) = iVar15 + 1;
      if (*(int *)(lVar4 + 0x74) < iVar15 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar4 + 0x68,iVar15);
      }
      puVar10 = (undefined8 *)((longlong)iVar15 * 0x10 + *(longlong *)(lVar4 + 0x68));
      *puVar10 = plVar5;
      *(undefined4 *)(puVar10 + 1) = 3;
    }
    param_1[0xda] = (longlong)pwVar13;
    plVar5 = (longlong *)(lVar4 + 0x80);
    plVar9 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar9 != (longlong *)0x0) {
      *plVar9 = (longlong)&PTR_FUN_144605de8;
      FWeakObjectPtr::operator=(plVar9 + 1,param_1);
      plVar9[2] = (longlong)FUN_140ef1d40;
      lVar8 = FDelegateHandle::GenerateNewID();
      plVar9[4] = lVar8;
      *plVar9 = (longlong)&PTR_FUN_144605e30;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar5,1);
      plVar11 = (longlong *)(**(code **)(*plVar9 + 0x20))(plVar9,local_88);
      iVar15 = *(int *)(lVar4 + 0x88);
      pwVar12 = (wchar_t *)*plVar11;
      *(int *)(lVar4 + 0x88) = iVar15 + 1;
      if (*(int *)(lVar4 + 0x8c) < iVar15 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar5,iVar15);
      }
      puVar10 = (undefined8 *)((longlong)iVar15 * 0x10 + *plVar5);
      *puVar10 = plVar9;
      *(undefined4 *)(puVar10 + 1) = 3;
    }
    param_1[0xdb] = (longlong)pwVar12;
  }
  return;
}



// FUNCTION 140ef9540 FUN_140ef9540 body=1609 status=ok
// SIG undefined FUN_140ef9540(void)

void FUN_140ef9540(longlong param_1)

{
  int *piVar1;
  wchar_t *pwVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  undefined2 *puVar13;
  int iVar14;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  longlong *local_c8;
  int local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  longlong *local_98;
  undefined8 local_90;
  longlong local_88 [3];
  longlong *local_70;
  undefined8 local_68;
  undefined1 local_60 [8];
  undefined1 local_58 [24];
  
  FUN_142ef9e70();
  FUN_142f10940(param_1,1);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    return;
  }
  pwVar11 = (wchar_t *)0x0;
  local_a8 = 0;
  *(undefined1 *)(param_1 + 0x201) = 0;
  local_a0 = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
  FGenericPlatformString::Memcpy(local_a8,L"echoCommWidget",0x1e);
  local_b8 = (longlong *)0x0;
  local_b0 = 0;
  local_res20 = 0;
  uVar3 = FUN_140ecbdf0(param_1,&local_a8,0,6,&local_b8);
  *(undefined8 *)(param_1 + 0x180) = uVar3;
  plVar4 = local_b8;
  for (iVar14 = (int)local_b0; iVar14 != 0; iVar14 = iVar14 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_b8 != (longlong *)0x0) {
    FMemory::Free(local_b8);
  }
  if (local_a8 != 0) {
    FMemory::Free();
  }
  local_98 = (longlong *)0x0;
  local_90 = 0;
  local_68 = 0;
  uVar3 = FUN_140ecbdf0(*(undefined8 *)(param_1 + 0x180),param_1 + 0x170,0,6,&local_98);
  *(undefined8 *)(param_1 + 0x188) = uVar3;
  plVar4 = local_98;
  for (iVar14 = (int)local_90; iVar14 != 0; iVar14 = iVar14 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_98 != (longlong *)0x0) {
    FMemory::Free(local_98);
  }
  if (*(int *)(param_1 + 0x198) == 0) {
    puVar13 = &DAT_143f3eda8;
  }
  else {
    puVar13 = *(undefined2 **)(param_1 + 400);
  }
  FUN_142085870(param_1,local_88 + 2,puVar13);
  if (local_88[2] != 0) {
    FUN_14203e3e0(local_88[2],0);
    plVar8 = local_70;
    *(longlong *)(param_1 + 0x1a0) = local_88[2];
    plVar4 = *(longlong **)(param_1 + 0x1a8);
    if (local_70 != plVar4) {
      if (local_70 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_70 + 0xc) = *(int *)((longlong)local_70 + 0xc) + 1;
        UNLOCK();
        plVar4 = *(longlong **)(param_1 + 0x1a8);
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      *(longlong **)(param_1 + 0x1a8) = plVar8;
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
      iVar14 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x2b8) != 0) {
    local_c8 = (longlong *)0x0;
    plVar4 = (longlong *)FMemory::Realloc(0,0x30);
    local_c0 = 3;
    local_c8 = plVar4;
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = (longlong)&PTR_FUN_143f4d290;
      FWeakObjectPtr::operator=(plVar4 + 1,param_1);
      plVar4[2] = (longlong)FUN_140ef2d80;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar4[4] = lVar5;
      *plVar4 = (longlong)&PTR_FUN_143f4d2d8;
    }
    FUN_142ee1c00(*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x2b8),
                  PTR_s_ECHOHideAnimationComplete_14629dc10,param_1 + 0x220,&local_c8);
    if (local_c0 != 0) {
      if (local_c8 == (longlong *)0x0) goto LAB_140ef9829;
      (**(code **)(*local_c8 + 0x28))(local_c8,0);
      if (local_c8 != (longlong *)0x0) {
        local_c8 = (longlong *)FMemory::Realloc(local_c8,0,0);
      }
      local_c0 = 0;
    }
    if (local_c8 != (longlong *)0x0) {
      FMemory::Free(local_c8);
    }
  }
LAB_140ef9829:
  FUN_14172a070(local_res8,0);
  uVar3 = GetTransientPackage();
  uVar3 = NewObject<USoundAtomCue>(uVar3);
  *(undefined8 *)(param_1 + 600) = uVar3;
  FUN_14172a400(local_res8);
  if (*(longlong *)(param_1 + 600) != 0) {
    pwVar6 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnMediaMovieStarted",L"::");
    pwVar12 = pwVar11;
    while (pwVar2 = pwVar6, pwVar2 != (wchar_t *)0x0) {
      pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar12 = pwVar2;
    }
    FName::FName(&local_res10,pwVar12 + 2,1);
    FUN_14074ba20(*(longlong *)(param_1 + 600) + 0x28,param_1,&LAB_140efc370,local_res10);
    pwVar6 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnMediaMovieStopped",L"::");
    pwVar12 = pwVar11;
    while (pwVar2 = pwVar6, pwVar2 != (wchar_t *)0x0) {
      pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar12 = pwVar2;
    }
    FName::FName(&local_res18,pwVar12 + 2,1);
    FUN_14074ba20(*(longlong *)(param_1 + 600) + 0x38,param_1,&LAB_140efc420,local_res18);
    FUN_142ebb990(*(undefined8 *)(param_1 + 600),*(undefined8 *)(param_1 + 0x38),param_1 + 0x1d0);
  }
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x148))();
  lVar5 = FUN_140c12480(uVar3);
  if ((lVar5 != 0) && (lVar5 = UNiagaraSystem::GetEffectType(lVar5), lVar5 != 0)) {
    plVar4 = (longlong *)FMemory::Realloc(0,0x30);
    pwVar12 = pwVar11;
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = (longlong)&PTR_FUN_144605d58;
      FWeakObjectPtr::operator=(plVar4 + 1,param_1);
      plVar4[2] = (longlong)FUN_140ef1e70;
      lVar7 = FDelegateHandle::GenerateNewID();
      plVar4[4] = lVar7;
      *plVar4 = (longlong)&PTR_FUN_144605da0;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar5 + 0x68,1);
      plVar8 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4,local_60);
      iVar14 = *(int *)(lVar5 + 0x70);
      pwVar12 = (wchar_t *)*plVar8;
      *(int *)(lVar5 + 0x70) = iVar14 + 1;
      if (*(int *)(lVar5 + 0x74) < iVar14 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar5 + 0x68,iVar14);
      }
      puVar9 = (undefined8 *)((longlong)iVar14 * 0x10 + *(longlong *)(lVar5 + 0x68));
      *puVar9 = plVar4;
      *(undefined4 *)(puVar9 + 1) = 3;
    }
    *(wchar_t **)(param_1 + 0x230) = pwVar12;
    plVar4 = (longlong *)(lVar5 + 0x80);
    plVar8 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar8 != (longlong *)0x0) {
      *plVar8 = (longlong)&PTR_FUN_144605de8;
      FWeakObjectPtr::operator=(plVar8 + 1,param_1);
      plVar8[2] = (longlong)FUN_140ef1d50;
      lVar7 = FDelegateHandle::GenerateNewID();
      plVar8[4] = lVar7;
      *plVar8 = (longlong)&PTR_FUN_144605e30;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar4,1);
      plVar10 = (longlong *)(**(code **)(*plVar8 + 0x20))(plVar8,local_58);
      iVar14 = *(int *)(lVar5 + 0x88);
      pwVar11 = (wchar_t *)*plVar10;
      *(int *)(lVar5 + 0x88) = iVar14 + 1;
      if (*(int *)(lVar5 + 0x8c) < iVar14 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar4,iVar14);
      }
      puVar9 = (undefined8 *)((longlong)iVar14 * 0x10 + *plVar4);
      *puVar9 = plVar8;
      *(undefined4 *)(puVar9 + 1) = 3;
    }
    *(wchar_t **)(param_1 + 0x238) = pwVar11;
  }
  if (*(char *)(param_1 + 0x262) != '\0') {
    local_88[0] = 0;
    local_88[1] = 4;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_88,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_88[0],4,&DAT_1445eeb7c,4,0x3f);
    FUN_142088cf0(param_1,local_88);
    if (local_88[0] != 0) {
      FMemory::Free();
    }
    *(undefined1 *)(param_1 + 0x262) = 0;
  }
  return;
}



// FUNCTION 140ef9b90 FUN_140ef9b90 body=919 status=ok
// SIG undefined FUN_140ef9b90(void)

void FUN_140ef9b90(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  bool bVar10;
  longlong local_b8;
  longlong *local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  longlong *plStack_60;
  longlong local_58;
  longlong *plStack_50;
  longlong local_48;
  longlong *plStack_40;
  
  lVar8 = 0;
  FUN_140ef7950();
  local_98 = 0;
  local_90 = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
  FGenericPlatformString::Memcpy(local_98,L"currencyTextInput",0x24);
  local_a8 = (longlong *)0x0;
  local_a0 = 0;
  lVar5 = FUN_140ecbdf0(param_1,&local_98,0,6,&local_a8);
  plVar7 = local_a8;
  for (iVar9 = (int)local_a0; iVar9 != 0; iVar9 = iVar9 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free(local_a8);
  }
  if (local_98 != 0) {
    FMemory::Free();
  }
  if (lVar5 != 0) {
    local_78 = 0;
    local_70 = 0x12;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
    FGenericPlatformString::Memcpy(local_78,L"currencyTextField",0x24);
    local_88 = (longlong *)0x0;
    local_80 = 0;
    uVar6 = FUN_140ecb070(lVar5,&local_78,0,6,&local_88);
    *(undefined8 *)(param_1 + 0x2b0) = uVar6;
    plVar7 = local_88;
    for (iVar9 = (int)local_80; iVar9 != 0; iVar9 = iVar9 + -1) {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 2;
    }
    if (local_88 != (longlong *)0x0) {
      FMemory::Free(local_88);
    }
    if (local_78 != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(param_1 + 0x2b0) != 0) {
      ATribePawnBP_C__pf2348183285::bpf__SetVirtualHeadphoneEnabled__pf
                (*(longlong *)(param_1 + 0x2b0),1);
      FUN_142ed2620(*(undefined8 *)(param_1 + 0x2b0),8);
      FUN_142ed5980(*(undefined8 *)(param_1 + 0x2b0),1,0);
      uVar6 = FUN_1404b03b0();
      FUN_142ed51f0(*(undefined8 *)(param_1 + 0x2b0),uVar6,1);
    }
  }
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
    LOCK();
    iVar9 = *piVar1;
    if (iVar9 == 0) {
      *piVar1 = 0;
      iVar9 = 0;
    }
    UNLOCK();
    if (0 < iVar9) {
      local_b0 = *(longlong **)(param_1 + 0x30);
      local_b8 = 0;
      if (local_b0 != (longlong *)0x0) {
        LOCK();
        iVar9 = (int)local_b0[1];
        bVar10 = iVar9 == 0;
        if (bVar10) {
          *(int *)(local_b0 + 1) = 0;
          iVar9 = 0;
        }
        UNLOCK();
        while (!bVar10) {
          LOCK();
          bVar10 = iVar9 == (int)local_b0[1];
          if (bVar10) {
            *(int *)(local_b0 + 1) = iVar9 + 1;
          }
          UNLOCK();
          if (bVar10) {
            lVar8 = *(longlong *)(param_1 + 0x28);
            plVar7 = &local_b8;
            bVar4 = true;
            bVar10 = false;
            local_b8 = lVar8;
            goto LAB_140ef9dc0;
          }
          LOCK();
          iVar9 = (int)local_b0[1];
          bVar10 = iVar9 == 0;
          if (bVar10) {
            *(int *)(local_b0 + 1) = 0;
            iVar9 = 0;
          }
          UNLOCK();
        }
        local_b0 = (longlong *)0x0;
      }
      lVar8 = 0;
      plVar7 = &local_b8;
      bVar4 = true;
      bVar10 = false;
      goto LAB_140ef9dc0;
    }
  }
  plVar7 = &local_68;
  local_68 = 0;
  plStack_60 = (longlong *)0x0;
  bVar4 = false;
  bVar10 = true;
LAB_140ef9dc0:
  plVar3 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  plVar2 = plStack_60;
  *plVar7 = 0;
  if ((bVar10) && (plStack_60 != (longlong *)0x0)) {
    LOCK();
    plVar7 = plStack_60 + 1;
    lVar5 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plStack_60 + 8))(plStack_60,1);
      }
    }
  }
  plVar7 = local_b0;
  if ((bVar4) && (local_b0 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_b0 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_b0 + 8))(local_b0,1);
      }
    }
  }
  if (lVar8 != 0) {
    FUN_142085870(param_1,&local_58,L"buttonHitArea");
    if (local_58 != 0) {
      local_48 = local_58;
      plStack_40 = plStack_50;
      if (plStack_50 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
        UNLOCK();
      }
      FUN_142052630(lVar8,"hitArea",&local_48);
    }
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar7 = plStack_50 + 1;
      lVar8 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar1 = (int *)((longlong)plStack_50 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
    }
    FUN_140edf300(param_1);
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar3 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return;
}



// FUNCTION 140ef9f30 FUN_140ef9f30 body=7096 status=ok
// SIG undefined FUN_140ef9f30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140ef9f30(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong *plVar13;
  ulonglong uVar14;
  undefined1 *puVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  longlong lVar19;
  bool bVar20;
  undefined1 auStack_608 [32];
  longlong **local_5e8;
  longlong **local_5e0;
  uint local_5d8;
  undefined8 local_5d0;
  longlong *local_5c8;
  int local_5c0;
  longlong local_5b8;
  longlong *local_5b0;
  longlong local_5a8;
  longlong *local_5a0;
  undefined8 local_598;
  longlong local_590;
  longlong *local_588;
  longlong local_580;
  undefined8 local_578;
  longlong *local_570;
  undefined8 local_568;
  longlong local_560;
  undefined8 local_558;
  longlong *local_550;
  undefined8 local_548;
  longlong *local_540;
  undefined8 local_538;
  longlong local_530;
  undefined8 local_528;
  longlong local_520;
  undefined8 local_518;
  longlong *local_510;
  undefined8 local_508;
  longlong local_500;
  undefined8 local_4f8;
  longlong *local_4f0;
  undefined8 local_4e8;
  longlong local_4e0;
  undefined8 local_4d8;
  longlong local_4d0;
  undefined8 local_4c8;
  longlong *local_4c0;
  undefined8 local_4b8;
  longlong local_4b0;
  undefined8 local_4a8;
  longlong *local_4a0;
  undefined8 local_498;
  longlong local_490;
  undefined8 local_488;
  longlong local_480;
  undefined8 local_478;
  longlong local_470;
  undefined8 local_468;
  longlong *local_460;
  undefined8 local_458;
  longlong local_450;
  undefined8 local_448;
  longlong *local_440;
  undefined8 local_438;
  longlong local_430;
  undefined8 local_428;
  longlong *local_420;
  undefined8 local_418;
  longlong local_410;
  undefined8 local_408;
  undefined4 local_400;
  undefined4 local_3fc;
  undefined4 local_3f8;
  undefined4 local_3f4;
  undefined4 local_3f0;
  undefined4 local_3ec;
  undefined8 local_3e8;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined8 local_3c0;
  longlong local_3b8;
  longlong *plStack_3b0;
  longlong local_3a8;
  longlong *plStack_3a0;
  longlong local_398;
  longlong *plStack_390;
  undefined8 local_388 [2];
  longlong local_378;
  undefined8 local_370;
  undefined1 local_368 [8];
  longlong *local_360;
  undefined1 local_350;
  undefined8 local_348;
  undefined2 local_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined1 local_2d8 [8];
  longlong *local_2d0;
  undefined1 local_2c8 [8];
  longlong *local_2c0;
  undefined1 local_2b8 [8];
  longlong *local_2b0;
  undefined1 local_2a8 [8];
  longlong *local_2a0;
  undefined1 local_298 [8];
  longlong *local_290;
  undefined1 local_288 [8];
  longlong *local_280;
  undefined1 local_278 [8];
  longlong *local_270;
  undefined1 local_268 [8];
  longlong *local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  longlong local_230 [2];
  undefined1 local_220 [8];
  undefined1 *local_218 [2];
  longlong local_208 [4];
  longlong *local_1e8;
  int local_1d8;
  undefined1 *local_1c8 [2];
  longlong local_1b8 [4];
  longlong *local_198;
  int local_188;
  undefined1 *local_178 [2];
  longlong local_168 [4];
  longlong *local_148;
  int local_138;
  undefined1 *local_128 [2];
  longlong local_118 [4];
  longlong *local_f8;
  int local_e8;
  undefined1 *local_d8 [2];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  undefined1 local_88 [16];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_608;
  uVar14 = 0;
  local_5d8 = 0;
  FUN_142ec45d0();
  local_530 = 0;
  local_528 = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_530,0);
  FGenericPlatformString::Memcpy(local_530,L"dimContainer",0x1a);
  local_5e8 = &local_540;
  local_540 = (longlong *)0x0;
  local_538 = 0;
  local_300 = 0;
  lVar7 = FUN_140e96f30(param_1,&local_530,0,6);
  param_1[0xe4] = lVar7;
  plVar10 = local_540;
  for (iVar18 = (int)local_538; iVar18 != 0; iVar18 = iVar18 + -1) {
    if (*plVar10 != 0) {
      FMemory::Free();
    }
    plVar10 = plVar10 + 2;
  }
  if (local_540 != (longlong *)0x0) {
    FMemory::Free(local_540);
  }
  if (local_530 != 0) {
    FMemory::Free();
  }
  local_250 = 0;
  local_248 = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_250,0);
  FGenericPlatformString::Memcpy(local_250,L"backgroundBar",0x1c);
  local_240 = 0;
  local_238 = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_240,0);
  FGenericPlatformString::Memcpy(local_240,L"currentValueLabel",0x24);
  local_230[0] = 0;
  local_230[1] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_230,0);
  FGenericPlatformString::Memcpy(local_230[0],L"maxValueLabel",0x1c);
  lVar7 = 3;
  local_5c8 = (longlong *)0x0;
  local_5c0 = 3;
  TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_5c8,3,0);
  puVar11 = &local_250;
  iVar18 = 3;
  plVar10 = local_5c8;
  do {
    *plVar10 = 0;
    iVar2 = *(int *)(puVar11 + 1);
    local_598 = (void *)*puVar11;
    *(int *)(plVar10 + 1) = iVar2;
    if (iVar2 == 0) {
      *(undefined4 *)((longlong)plVar10 + 0xc) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(plVar10,iVar2,0);
      _guard_xfg_dispatch_icall_nop((void *)*plVar10,local_598,(longlong)iVar2 * 2);
    }
    plVar10 = plVar10 + 2;
    puVar11 = puVar11 + 2;
    iVar18 = iVar18 + -1;
  } while (iVar18 != 0);
  puVar15 = local_220;
  do {
    plVar10 = (longlong *)(puVar15 + -0x10);
    puVar15 = puVar15 + -0x10;
    lVar7 = lVar7 + -1;
    if (*plVar10 != 0) {
      FMemory::Free();
    }
  } while (lVar7 != 0);
  lVar7 = param_1[0xe4];
  uVar8 = uVar14;
  if (lVar7 != 0) {
    local_520 = 0;
    local_518 = 0x16;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_520,0);
    FGenericPlatformString::Memcpy(local_520,L"barsWrapper.normalBar",0x2c);
    local_308 = UGameInstanceGameParameters::GetPrivateStaticClass();
    local_5e8 = &local_5c8;
    uVar8 = FUN_140ecc430(param_1[0xe4],&local_520,local_308,6);
  }
  param_1[0xe6] = uVar8;
  if ((lVar7 != 0) && (local_520 != 0)) {
    FMemory::Free();
    uVar8 = param_1[0xe6];
  }
  if (uVar8 == 0) {
    local_5d8 = 4;
    plVar10 = &local_3b8;
    local_3b8 = 0;
    plStack_3b0 = (longlong *)0x0;
    lVar7 = 0;
  }
  else {
    local_5a0 = *(longlong **)(uVar8 + 0x238);
    local_5d8 = 2;
    local_5a8 = 0;
    if (local_5a0 == (longlong *)0x0) {
LAB_140efa26a:
      plVar10 = &local_5a8;
      lVar7 = local_5a8;
    }
    else {
      LOCK();
      iVar18 = (int)local_5a0[1];
      bVar20 = iVar18 == 0;
      if (bVar20) {
        *(int *)(local_5a0 + 1) = 0;
        iVar18 = 0;
      }
      UNLOCK();
      while (!bVar20) {
        LOCK();
        bVar20 = iVar18 == (int)local_5a0[1];
        if (bVar20) {
          *(int *)(local_5a0 + 1) = iVar18 + 1;
        }
        UNLOCK();
        if (bVar20) {
          if (local_5a0 != (longlong *)0x0) {
            local_5a8 = *(longlong *)(uVar8 + 0x230);
          }
          goto LAB_140efa26a;
        }
        LOCK();
        iVar18 = (int)local_5a0[1];
        bVar20 = iVar18 == 0;
        if (bVar20) {
          *(int *)(local_5a0 + 1) = 0;
          iVar18 = 0;
        }
        UNLOCK();
      }
      plVar10 = &local_5a8;
      local_5a0 = (longlong *)0x0;
      lVar7 = 0;
    }
  }
  plVar3 = (longlong *)plVar10[1];
  plVar10[1] = 0;
  plVar13 = plStack_3b0;
  *plVar10 = 0;
  uVar17 = local_5d8;
  if (((local_5d8 & 4) != 0) &&
     (uVar17 = local_5d8 & 0xfffffffb, local_5d8 = uVar17, plStack_3b0 != (longlong *)0x0)) {
    LOCK();
    plVar10 = plStack_3b0 + 1;
    lVar12 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plStack_3b0)(plStack_3b0);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar18 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar18 == 1) {
        (**(code **)(*plStack_3b0 + 8))(plStack_3b0,1);
      }
    }
  }
  plVar10 = local_5a0;
  if (((uVar17 & 2) != 0) && (local_5d8 = uVar17 & 0xfffffffd, local_5a0 != (longlong *)0x0)) {
    LOCK();
    plVar13 = local_5a0 + 1;
    lVar12 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_5a0)(local_5a0);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar18 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar18 == 1) {
        (**(code **)(*local_5a0 + 8))(local_5a0,1);
      }
    }
  }
  if (lVar7 != 0) {
    uVar9 = FUN_1420392d0(lVar7,local_2d8,L"xpTracker");
    FUN_142ede260(param_1 + 0xf5,uVar9);
    if (local_2d0 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_2d0 + 1;
      lVar12 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_2d0)(local_2d0);
        LOCK();
        piVar1 = (int *)((longlong)local_2d0 + 0xc);
        iVar18 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar18 == 1) {
          (**(code **)(*local_2d0 + 8))(local_2d0,1);
        }
      }
    }
    plVar10 = (longlong *)FUN_1420392d0(lVar7,local_2c8,L"edgeFlash");
    param_1[0xf8] = *plVar10;
    plVar10 = (longlong *)plVar10[1];
    plVar13 = (longlong *)param_1[0xf9];
    if (plVar10 != plVar13) {
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
        UNLOCK();
        plVar13 = (longlong *)param_1[0xf9];
      }
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar18 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar18 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
        }
      }
      param_1[0xf9] = (longlong)plVar10;
    }
    if (local_2c0 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_2c0 + 1;
      lVar7 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_2c0)(local_2c0);
        LOCK();
        piVar1 = (int *)((longlong)local_2c0 + 0xc);
        iVar18 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar18 == 1) {
          (**(code **)(*local_2c0 + 8))(local_2c0,1);
        }
      }
    }
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar3 + 1;
    lVar7 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar18 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar18 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  local_500 = 0;
  local_4f8 = 0x1c;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_500,0);
  FGenericPlatformString::Memcpy(local_500,L"barsWrapper.mayhemIndicator",0x38);
  local_5e0 = &local_510;
  local_5e8 = (longlong **)CONCAT71(local_5e8._1_7_,6);
  local_510 = (longlong *)0x0;
  local_508 = 0;
  local_2f8 = 0;
  cVar6 = FUN_140e98b90(param_1[0xe4],param_1 + 0xee,&local_500,0);
  plVar10 = local_510;
  for (iVar18 = (int)local_508; iVar18 != 0; iVar18 = iVar18 + -1) {
    if (*plVar10 != 0) {
      FMemory::Free();
    }
    plVar10 = plVar10 + 2;
  }
  if (local_510 != (longlong *)0x0) {
    FMemory::Free(local_510);
  }
  if (local_500 != 0) {
    FMemory::Free();
  }
  if (cVar6 != '\0') {
    local_4e0 = 0;
    local_4d8 = 0xc;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4e0,0);
    FGenericPlatformString::Memcpy(local_4e0,L"mayhemIcons",0x18);
    local_5e0 = &local_4f0;
    local_4f0 = (longlong *)0x0;
    local_4e8 = 0;
    local_2f0 = 0;
    local_5e8 = (longlong **)CONCAT71(local_5e8._1_7_,6);
    cVar6 = FUN_140e98b90(param_1[0xee],param_1 + 0xed,&local_4e0,0);
    plVar10 = local_4f0;
    for (iVar18 = (int)local_4e8; iVar18 != 0; iVar18 = iVar18 + -1) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
    }
    if (local_4f0 != (longlong *)0x0) {
      FMemory::Free(local_4f0);
    }
    if (local_4e0 != 0) {
      FMemory::Free();
    }
    if (cVar6 != '\0') {
      uVar9 = FUN_142085870(param_1[0xed],local_2b8,L"mayhemRankText");
      FUN_142ede260(param_1 + 0xef,uVar9);
      if (local_2b0 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_2b0 + 1;
        lVar7 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_2b0)(local_2b0);
          LOCK();
          piVar1 = (int *)((longlong)local_2b0 + 0xc);
          iVar18 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar18 == 1) {
            (**(code **)(*local_2b0 + 8))(local_2b0,1);
          }
        }
      }
    }
  }
  local_4d0 = 0;
  local_4c8 = 0x1c;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4d0,0);
  FGenericPlatformString::Memcpy(local_4d0,L"passiveSkillWidget.passive0",0x38);
  local_5e8 = &local_4a0;
  local_4a0 = (longlong *)0x0;
  local_498 = 0;
  local_2e8 = 0;
  lVar7 = FUN_140eca690(param_1[0xe4],&local_4d0,0,6);
  param_1[0xf2] = lVar7;
  plVar10 = local_4a0;
  for (iVar18 = (int)local_498; iVar18 != 0; iVar18 = iVar18 + -1) {
    if (*plVar10 != 0) {
      FMemory::Free();
    }
    plVar10 = plVar10 + 2;
  }
  if (local_4a0 != (longlong *)0x0) {
    FMemory::Free(local_4a0);
  }
  if (local_4d0 != 0) {
    FMemory::Free();
  }
  if (param_1[0xf2] != 0) {
    *(undefined4 *)(param_1[0xf2] + 0x170) = 0;
    local_3e8 = 0;
    local_3e0 = 0x18;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3e8,0);
    FGenericPlatformString::Memcpy(local_3e8,L"BoosterTexture%i_nopack",0x30);
    UVictoryTMapComp::String_Actor__Remove(param_1[0xf2],&local_3e8);
  }
  local_4b0 = 0;
  local_4a8 = 0x19;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4b0,0);
  FGenericPlatformString::Memcpy(local_4b0,L"EventBuffWidget.passive0",0x32);
  local_5e8 = &local_4c0;
  local_4c0 = (longlong *)0x0;
  local_4b8 = 0;
  local_2e0 = 0;
  lVar7 = FUN_140eca690(param_1[0xe4],&local_4b0,0,6);
  param_1[0xf3] = lVar7;
  plVar10 = local_4c0;
  for (iVar18 = (int)local_4b8; iVar18 != 0; iVar18 = iVar18 + -1) {
    if (*plVar10 != 0) {
      FMemory::Free();
    }
    plVar10 = plVar10 + 2;
  }
  if (local_4c0 != (longlong *)0x0) {
    FMemory::Free(local_4c0);
  }
  if (local_4b0 != 0) {
    FMemory::Free();
  }
  if (param_1[0xf3] != 0) {
    *(undefined4 *)(param_1[0xf3] + 0x170) = 0;
    local_3d8 = 0;
    local_3d0 = 0x1a;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3d8,0);
    FGenericPlatformString::Memcpy(local_3d8,L"EventBuffTexture%i_nopack",0x34);
    UVictoryTMapComp::String_Actor__Remove(param_1[0xf3],&local_3d8);
  }
  local_490 = 0;
  local_488 = 0x19;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_490,0);
  FGenericPlatformString::Memcpy(local_490,L"EventBuffWidget.passive1",0x32);
  local_5e8 = &local_550;
  local_550 = (longlong *)0x0;
  local_548 = 0;
  local_258 = 0;
  lVar7 = FUN_140eca690(param_1[0xe4],&local_490,0,6);
  param_1[0xf4] = lVar7;
  plVar10 = local_550;
  for (iVar18 = (int)local_548; iVar18 != 0; iVar18 = iVar18 + -1) {
    if (*plVar10 != 0) {
      FMemory::Free();
    }
    plVar10 = plVar10 + 2;
  }
  if (local_550 != (longlong *)0x0) {
    FMemory::Free(local_550);
  }
  if (local_490 != 0) {
    FMemory::Free();
  }
  if (param_1[0xf4] != 0) {
    *(undefined4 *)(param_1[0xf4] + 0x170) = 1;
    local_3c8 = 0;
    local_3c0 = 0x1a;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3c8,0);
    FGenericPlatformString::Memcpy(local_3c8,L"EventBuffTexture%i_nopack",0x34);
    UVictoryTMapComp::String_Actor__Remove(param_1[0xf4],&local_3c8);
  }
  uVar8 = uVar14;
  uVar17 = local_5d8;
  if (param_1[0xe4] != 0) {
    local_480 = 0;
    local_478 = 0x18;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_480,0);
    FGenericPlatformString::Memcpy(local_480,L"barsWrapper.guardianBar",0x30);
    uVar17 = local_5d8 | 8;
    local_338 = UGameInstanceGameParameters::GetPrivateStaticClass();
    local_5e8 = &local_5c8;
    uVar8 = FUN_140ecc430(param_1[0xe4],&local_480,local_338,6);
  }
  param_1[0xfa] = uVar8;
  if (((uVar17 & 8) != 0) && (uVar17 = uVar17 & 0xfffffff7, local_480 != 0)) {
    FMemory::Free();
    uVar8 = param_1[0xfa];
  }
  if (uVar8 == 0) {
    plVar10 = &local_3a8;
    local_3a8 = 0;
    plStack_3a0 = (longlong *)0x0;
    lVar7 = 0;
    uVar16 = 0x20;
  }
  else {
    local_5b0 = *(longlong **)(uVar8 + 0x238);
    local_5b8 = 0;
    if (local_5b0 == (longlong *)0x0) {
LAB_140efaa80:
      plVar10 = &local_5b8;
      uVar16 = 0x10;
      lVar7 = local_5b8;
    }
    else {
      LOCK();
      iVar18 = (int)local_5b0[1];
      bVar20 = iVar18 == 0;
      if (bVar20) {
        *(int *)(local_5b0 + 1) = 0;
        iVar18 = 0;
      }
      UNLOCK();
      while (!bVar20) {
        LOCK();
        bVar20 = iVar18 == (int)local_5b0[1];
        if (bVar20) {
          *(int *)(local_5b0 + 1) = iVar18 + 1;
        }
        UNLOCK();
        if (bVar20) {
          if (local_5b0 != (longlong *)0x0) {
            local_5b8 = *(longlong *)(uVar8 + 0x230);
          }
          goto LAB_140efaa80;
        }
        LOCK();
        iVar18 = (int)local_5b0[1];
        bVar20 = iVar18 == 0;
        if (bVar20) {
          *(int *)(local_5b0 + 1) = 0;
          iVar18 = 0;
        }
        UNLOCK();
      }
      plVar10 = &local_5b8;
      local_5b0 = (longlong *)0x0;
      uVar16 = 0x10;
      lVar7 = 0;
    }
  }
  plVar3 = (longlong *)plVar10[1];
  uVar16 = uVar16 | uVar17;
  plVar10[1] = 0;
  plVar13 = plStack_3a0;
  *plVar10 = 0;
  if (((uVar16 & 0x20) != 0) && (uVar16 = uVar16 & 0xffffffdf, plStack_3a0 != (longlong *)0x0)) {
    LOCK();
    plVar10 = plStack_3a0 + 1;
    lVar12 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plStack_3a0)(plStack_3a0);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar18 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar18 == 1) {
        (**(code **)(*plStack_3a0 + 8))(plStack_3a0,1);
      }
    }
  }
  plVar10 = local_5b0;
  if (((uVar16 & 0x10) != 0) && (uVar16 = uVar16 & 0xffffffef, local_5b0 != (longlong *)0x0)) {
    LOCK();
    plVar13 = local_5b0 + 1;
    lVar12 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_5b0)(local_5b0);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar18 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar18 == 1) {
        (**(code **)(*local_5b0 + 8))(local_5b0,1);
      }
    }
  }
  if (lVar7 != 0) {
    uVar9 = FUN_1420392d0(lVar7,local_2a8,L"xpTracker");
    FUN_142ede260(param_1 + 0xfb,uVar9);
    if (local_2a0 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_2a0 + 1;
      lVar12 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_2a0)(local_2a0);
        LOCK();
        piVar1 = (int *)((longlong)local_2a0 + 0xc);
        iVar18 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar18 == 1) {
          (**(code **)(*local_2a0 + 8))(local_2a0,1);
        }
      }
    }
    plVar10 = (longlong *)FUN_1420392d0(lVar7,local_298,L"edgeFlash");
    param_1[0xfe] = *plVar10;
    plVar10 = (longlong *)plVar10[1];
    plVar13 = (longlong *)param_1[0xff];
    if (plVar10 != plVar13) {
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
        UNLOCK();
        plVar13 = (longlong *)param_1[0xff];
      }
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar18 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar18 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
        }
      }
      param_1[0xff] = (longlong)plVar10;
    }
    if (local_290 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_290 + 1;
      lVar7 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_290)(local_290);
        LOCK();
        piVar1 = (int *)((longlong)local_290 + 0xc);
        iVar18 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar18 == 1) {
          (**(code **)(*local_290 + 8))(local_290,1);
        }
      }
    }
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar3 + 1;
    lVar7 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar18 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar18 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  uVar8 = uVar14;
  if (param_1[0xe4] != 0) {
    local_470 = 0;
    local_468 = 0x16;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_470,0);
    FGenericPlatformString::Memcpy(local_470,L"barsWrapper.vaultCard",0x2c);
    uVar16 = uVar16 | 0x40;
    local_330 = UGameInstanceGameParameters::GetPrivateStaticClass();
    local_5e8 = &local_5c8;
    uVar8 = FUN_140ecc430(param_1[0xe4],&local_470,local_330,6);
  }
  param_1[0xe7] = uVar8;
  if (((uVar16 & 0x40) != 0) && (uVar16 = uVar16 & 0xffffffbf, local_470 != 0)) {
    FMemory::Free();
    uVar8 = param_1[0xe7];
  }
  if (uVar8 == 0) {
    plVar10 = &local_398;
    local_398 = 0;
    plStack_390 = (longlong *)0x0;
    lVar7 = 0;
    uVar17 = 0x100;
  }
  else {
    local_588 = *(longlong **)(uVar8 + 0x238);
    local_590 = 0;
    if (local_588 == (longlong *)0x0) {
LAB_140efad9f:
      plVar10 = &local_590;
      uVar17 = 0x80;
      lVar7 = local_590;
    }
    else {
      LOCK();
      iVar18 = (int)local_588[1];
      bVar20 = iVar18 == 0;
      if (bVar20) {
        *(int *)(local_588 + 1) = 0;
        iVar18 = 0;
      }
      UNLOCK();
      while (!bVar20) {
        LOCK();
        bVar20 = iVar18 == (int)local_588[1];
        if (bVar20) {
          *(int *)(local_588 + 1) = iVar18 + 1;
        }
        UNLOCK();
        if (bVar20) {
          if (local_588 != (longlong *)0x0) {
            local_590 = *(longlong *)(uVar8 + 0x230);
          }
          goto LAB_140efad9f;
        }
        LOCK();
        iVar18 = (int)local_588[1];
        bVar20 = iVar18 == 0;
        if (bVar20) {
          *(int *)(local_588 + 1) = 0;
          iVar18 = 0;
        }
        UNLOCK();
      }
      plVar10 = &local_590;
      local_588 = (longlong *)0x0;
      uVar17 = 0x80;
      lVar7 = 0;
    }
  }
  uVar17 = uVar17 | uVar16;
  plVar3 = (longlong *)plVar10[1];
  plVar10[1] = 0;
  plVar13 = plStack_390;
  *plVar10 = 0;
  if (((uVar17 >> 8 & 1) != 0) && (uVar17 = uVar17 & 0xfffffeff, plStack_390 != (longlong *)0x0)) {
    LOCK();
    plVar10 = plStack_390 + 1;
    lVar12 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plStack_390)(plStack_390);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar18 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar18 == 1) {
        (**(code **)(*plStack_390 + 8))(plStack_390,1);
      }
    }
  }
  plVar10 = local_588;
  if (((char)uVar17 < '\0') && (uVar17 = uVar17 & 0xffffff7f, local_588 != (longlong *)0x0)) {
    LOCK();
    plVar13 = local_588 + 1;
    lVar12 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_588)(local_588);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar18 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar18 == 1) {
        (**(code **)(*local_588 + 8))(local_588,1);
      }
    }
  }
  if (lVar7 != 0) {
    uVar9 = FUN_1420392d0(lVar7,local_288,L"xpTracker");
    FUN_142ede260(param_1 + 0xe8,uVar9);
    if (local_280 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_280 + 1;
      lVar12 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_280)(local_280);
        LOCK();
        piVar1 = (int *)((longlong)local_280 + 0xc);
        iVar18 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar18 == 1) {
          (**(code **)(*local_280 + 8))(local_280,1);
        }
      }
    }
    plVar10 = (longlong *)FUN_1420392d0(lVar7,local_278,L"edgeFlash");
    param_1[0xeb] = *plVar10;
    plVar10 = (longlong *)plVar10[1];
    plVar13 = (longlong *)param_1[0xec];
    if (plVar10 != plVar13) {
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
        UNLOCK();
        plVar13 = (longlong *)param_1[0xec];
      }
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar18 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar18 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
        }
      }
      param_1[0xec] = (longlong)plVar10;
    }
    if (local_270 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_270 + 1;
      lVar7 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_270)(local_270);
        LOCK();
        piVar1 = (int *)((longlong)local_270 + 0xc);
        iVar18 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar18 == 1) {
          (**(code **)(*local_270 + 8))(local_270,1);
        }
      }
    }
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar3 + 1;
    lVar7 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar18 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar18 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  uVar8 = uVar14;
  if (param_1[0xe4] != 0) {
    local_450 = 0;
    local_448 = 0xc;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_450,0);
    FGenericPlatformString::Memcpy(local_450,L"barsWrapper",0x18);
    local_5e8 = &local_460;
    local_460 = (longlong *)0x0;
    local_458 = 0;
    local_328 = 0;
    uVar8 = FUN_140ecbdf0(param_1[0xe4],&local_450,0,6);
    uVar17 = uVar17 | 0x600;
  }
  param_1[0xe5] = uVar8;
  if ((uVar17 >> 10 & 1) != 0) {
    uVar17 = uVar17 & 0xfffffbff;
    plVar10 = local_460;
    for (iVar18 = (int)local_458; iVar18 != 0; iVar18 = iVar18 + -1) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
    }
    if (local_460 != (longlong *)0x0) {
      FMemory::Free(local_460);
    }
  }
  if (((uVar17 >> 9 & 1) != 0) && (uVar17 = uVar17 & 0xfffffdff, local_450 != 0)) {
    FMemory::Free();
  }
  uVar9 = (**(code **)(*param_1 + 0x4a8))(param_1,local_268,L"currentLevelText");
  FUN_142ede260(param_1 + 0x100,uVar9);
  if (local_260 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_260 + 1;
    lVar7 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_260)(local_260);
      LOCK();
      piVar1 = (int *)((longlong)local_260 + 0xc);
      iVar18 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar18 == 1) {
        (**(code **)(*local_260 + 8))(local_260,1);
      }
    }
  }
  local_430 = 0;
  local_428 = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_430,0);
  FGenericPlatformString::Memcpy(local_430,L"xpInitializationMC",0x26);
  local_5e8 = &local_440;
  local_440 = (longlong *)0x0;
  local_438 = 0;
  local_320 = 0;
  lVar7 = FUN_140e96f30(param_1,&local_430,0,6);
  param_1[0xbe] = lVar7;
  plVar10 = local_440;
  for (iVar18 = (int)local_438; iVar18 != 0; iVar18 = iVar18 + -1) {
    if (*plVar10 != 0) {
      FMemory::Free();
    }
    plVar10 = plVar10 + 2;
  }
  if (local_440 != (longlong *)0x0) {
    FMemory::Free(local_440);
  }
  if (local_430 != 0) {
    FMemory::Free();
  }
  uVar8 = uVar14;
  if (param_1[0xe4] != 0) {
    local_410 = 0;
    local_408 = 0x12;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_410,0);
    FGenericPlatformString::Memcpy(local_410,L"skillpointsWidget",0x24);
    local_5e8 = &local_420;
    local_420 = (longlong *)0x0;
    local_418 = 0;
    local_318 = 0;
    uVar8 = FUN_140ecbdf0(param_1[0xe4],&local_410,0,6);
    uVar17 = uVar17 | 0x1800;
  }
  param_1[0x103] = uVar8;
  if ((uVar17 >> 0xc & 1) != 0) {
    uVar17 = uVar17 & 0xffffefff;
    plVar10 = local_420;
    for (iVar18 = (int)local_418; iVar18 != 0; iVar18 = iVar18 + -1) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
    }
    if (local_420 != (longlong *)0x0) {
      FMemory::Free(local_420);
    }
  }
  if (((uVar17 >> 0xb & 1) != 0) && (uVar17 = uVar17 & 0xfffff7ff, local_410 != 0)) {
    FMemory::Free();
  }
  uVar8 = uVar14;
  if (param_1[0x103] != 0) {
    local_580 = 0;
    local_578 = 4;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_580,0);
    local_5e8 = (longlong **)CONCAT62(local_5e8._2_6_,0x3f);
    FGenericPlatformString::Convert<char,wchar_t>(local_580,4,&DAT_1445ef36c);
    FUN_142088cf0(param_1[0x103],&local_580);
    if (local_580 != 0) {
      FMemory::Free();
    }
    if (param_1[0x103] != 0) {
      local_560 = 0;
      local_558 = 0x14;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_560,0);
      local_5e8 = (longlong **)CONCAT62(local_5e8._2_6_,0x3f);
      FGenericPlatformString::Convert<char,wchar_t>(local_560,0x14,"skillText.skillHint");
      local_5e8 = &local_570;
      local_570 = (longlong *)0x0;
      local_568 = 0;
      local_310 = 0;
      uVar8 = FUN_140ecba50(param_1[0x103],&local_560,0,6);
      uVar17 = uVar17 | 0x6000;
    }
  }
  param_1[0xb6] = uVar8;
  if ((uVar17 >> 0xe & 1) != 0) {
    uVar17 = uVar17 & 0xffffbfff;
    plVar10 = local_570;
    for (iVar18 = (int)local_568; iVar18 != 0; iVar18 = iVar18 + -1) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
    }
    if (local_570 != (longlong *)0x0) {
      FMemory::Free(local_570);
    }
  }
  if (((uVar17 >> 0xd & 1) != 0) && (local_560 != 0)) {
    FMemory::Free();
  }
  if (param_1[0xb6] != 0) {
    lVar7 = *(longlong *)(param_1[0xb6] + 0x308);
    uVar9 = FUN_140e10600(param_1);
    (**(code **)(lVar7 + 0x10))(param_1[0xb6] + 0x308,0,uVar9);
    local_378 = 0;
    local_370 = 0;
    uVar9 = FUN_1404b03b0();
    FText::FText(local_368,uVar9);
    local_348 = 0;
    local_340 = 1;
    local_350 = 1;
    FName::FName(local_388,L"OakPC_OpenStatusMenu",1);
    uVar8 = local_370;
    lVar7 = (longlong)(int)local_370;
    iVar18 = (int)local_370 + 1;
    local_370 = CONCAT44(local_370._4_4_,iVar18);
    if (local_370._4_4_ < iVar18) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                (&local_378,uVar8 & 0xffffffff);
    }
    *(undefined8 *)(local_378 + lVar7 * 8) = local_388[0];
    lVar7 = FUN_140eccc40(param_1);
    if ((lVar7 == 0) || (cVar6 = FUN_142dd3d20(lVar7), cVar6 == '\0')) {
      uVar9 = 0;
    }
    else {
      uVar9 = 1;
    }
    (**(code **)(*(longlong *)(param_1[0xb6] + 0x308) + 0x20))
              ((longlong *)(param_1[0xb6] + 0x308),&local_378,uVar9);
    FUN_142ed2e60(param_1[0xb6],0x3f800000);
    if (local_360 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_360 + 1;
      lVar7 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_360)(local_360);
        LOCK();
        piVar1 = (int *)((longlong)local_360 + 0xc);
        iVar18 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar18 == 1) {
          (**(code **)(*local_360 + 8))(local_360,1);
        }
      }
    }
    if (local_378 != 0) {
      FMemory::Free();
    }
  }
  local_1e8 = (longlong *)0x0;
  local_1d8 = 0;
  puVar11 = (undefined8 *)FUN_140438ef0(0x10,local_208);
  if (puVar11 != (undefined8 *)0x0) {
    puVar11[1] = param_1;
    *puVar11 = &PTR_FUN_143f77b70;
  }
  local_218[0] = &LAB_140ee0fa0;
  uVar9 = FUN_1420849a0(param_1,local_88,local_218);
  FUN_14208c260(param_1,uVar9);
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
  if (local_1d8 != 0) {
    plVar10 = local_208;
    if (local_1e8 != (longlong *)0x0) {
      plVar10 = local_1e8;
    }
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x10))(plVar10,0);
    }
  }
  if (local_1e8 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  if ((*(longlong *)(DAT_146b33f38 + 0x90) != 0) &&
     (*(longlong *)(*(longlong *)(DAT_146b33f38 + 0x90) + 0x1110) != 0)) {
    FWeakObjectPtr::operator=(&local_400,param_1);
    local_198 = (longlong *)0x0;
    local_188 = 0;
    puVar11 = (undefined8 *)FUN_140438ef0(0x18,local_1b8);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &PTR_FUN_1444f8920;
      puVar11[1] = param_1;
      *(undefined4 *)(puVar11 + 2) = local_400;
      *(undefined4 *)((longlong)puVar11 + 0x14) = local_3fc;
    }
    local_1c8[0] = &LAB_140ee0970;
    FUN_14208c260(param_1,local_1c8);
    if (local_188 != 0) {
      plVar10 = local_1b8;
      if (local_198 != (longlong *)0x0) {
        plVar10 = local_198;
      }
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x10))(plVar10,0);
      }
    }
    if (local_198 != (longlong *)0x0) {
      FMemory::Free();
    }
    FWeakObjectPtr::operator=(&local_3f8,param_1);
    local_148 = (longlong *)0x0;
    local_138 = 0;
    puVar11 = (undefined8 *)FUN_140438ef0(0x18,local_168);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &PTR_FUN_1444f8920;
      puVar11[1] = param_1;
      *(undefined4 *)(puVar11 + 2) = local_3f8;
      *(undefined4 *)((longlong)puVar11 + 0x14) = local_3f4;
    }
    local_178[0] = &LAB_140ee08a0;
    FUN_14208c260(param_1,local_178);
    if (local_138 != 0) {
      plVar10 = local_168;
      if (local_148 != (longlong *)0x0) {
        plVar10 = local_148;
      }
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x10))(plVar10,0);
      }
    }
    if (local_148 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar7 = *(longlong *)(DAT_146b33f38 + 0xe0);
  uVar8 = DAT_146b33f38;
  plVar10 = local_5c8;
  iVar18 = local_5c0;
  if (lVar7 == 0) goto joined_r0x000140efba8a;
  lVar19 = lVar7 + 0x120;
  lVar12 = FWeakObjectPtr::Get(lVar19);
  if (lVar12 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
      uVar8 = 0;
    }
    else {
      uVar8 = (ulonglong)DAT_1464b56f4;
    }
    UNLOCK();
    plVar10 = local_5c8;
    iVar18 = local_5c0;
    if (((int)uVar8 == *(int *)(lVar7 + 0x128)) ||
       (local_5d0 = 0, uVar8 = uVar14, *(longlong *)(lVar7 + 0x130) == 0))
    goto joined_r0x000140efba8a;
    lVar12 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar19,lVar12);
    if ((lVar12 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(uint *)(lVar7 + 0x128) = DAT_1464b56f4;
    }
    lVar12 = FWeakObjectPtr::Get(lVar19);
    uVar8 = 0;
    plVar10 = local_5c8;
    iVar18 = local_5c0;
    if (lVar12 == 0) goto joined_r0x000140efba8a;
  }
  uVar8 = UObjectBaseUtility::IsA<UUniformGridSlot>(lVar12);
  plVar10 = local_5c8;
  iVar18 = local_5c0;
  if (((char)uVar8 == '\0') || (lVar12 == 0)) goto joined_r0x000140efba8a;
  lVar12 = FWeakObjectPtr::Get(lVar19);
  if (lVar12 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
      uVar8 = 0;
    }
    else {
      uVar8 = (ulonglong)DAT_1464b56f4;
    }
    UNLOCK();
    plVar10 = local_5c8;
    iVar18 = local_5c0;
    if (((int)uVar8 == *(int *)(lVar7 + 0x128)) ||
       (local_5d0 = 0, uVar8 = uVar14, *(longlong *)(lVar7 + 0x130) == 0))
    goto joined_r0x000140efba8a;
    lVar12 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar19,lVar12);
    if ((lVar12 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(uint *)(lVar7 + 0x128) = DAT_1464b56f4;
    }
    lVar12 = FWeakObjectPtr::Get(lVar19);
    uVar8 = 0;
    plVar10 = local_5c8;
    iVar18 = local_5c0;
    if (lVar12 == 0) goto joined_r0x000140efba8a;
  }
  uVar8 = UObjectBaseUtility::IsA<UUniformGridSlot>(lVar12);
  plVar10 = local_5c8;
  iVar18 = local_5c0;
  if (((char)uVar8 != '\0') && (lVar12 != 0)) {
    FWeakObjectPtr::operator=(&local_3f0,param_1);
    local_f8 = (longlong *)0x0;
    local_e8 = 0;
    puVar11 = (undefined8 *)FUN_140438ef0(0x18,local_118);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &PTR_FUN_1444f8920;
      puVar11[1] = param_1;
      *(undefined4 *)(puVar11 + 2) = local_3f0;
      *(undefined4 *)((longlong)puVar11 + 0x14) = local_3ec;
    }
    local_128[0] = &LAB_140ee0d50;
    FUN_14208c260(param_1,local_128);
    if (local_e8 != 0) {
      plVar10 = local_118;
      if (local_f8 != (longlong *)0x0) {
        plVar10 = local_f8;
      }
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x10))(plVar10,0);
      }
    }
    if (local_f8 != (longlong *)0x0) {
      FMemory::Free();
    }
    FWeakObjectPtr::operator=(&local_598,param_1);
    uVar4 = (undefined4)local_598;
    uVar5 = local_598._4_4_;
    local_a8 = (longlong *)0x0;
    local_98 = 0;
    puVar11 = (undefined8 *)FUN_140438ef0(0x18,local_c8);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &PTR_FUN_1444f8920;
      puVar11[1] = param_1;
      *(undefined4 *)(puVar11 + 2) = uVar4;
      *(undefined4 *)((longlong)puVar11 + 0x14) = uVar5;
    }
    local_d8[0] = &LAB_140ee0980;
    uVar8 = FUN_14208c260(param_1,local_d8);
    if (local_98 != 0) {
      plVar10 = local_c8;
      if (local_a8 != (longlong *)0x0) {
        plVar10 = local_a8;
      }
      if (plVar10 != (longlong *)0x0) {
        uVar8 = (**(code **)(*plVar10 + 0x10))(plVar10,0);
      }
    }
    plVar10 = local_5c8;
    iVar18 = local_5c0;
    if (local_a8 != (longlong *)0x0) {
      uVar8 = FMemory::Free();
      plVar10 = local_5c8;
      iVar18 = local_5c0;
    }
  }
joined_r0x000140efba8a:
  for (; iVar18 != 0; iVar18 = iVar18 + -1) {
    if (*plVar10 != 0) {
      uVar8 = FMemory::Free();
    }
    plVar10 = plVar10 + 2;
  }
  if (local_5c8 != (longlong *)0x0) {
    uVar8 = FMemory::Free(local_5c8);
  }
  return uVar8;
}



// FUNCTION 140efbaf0 FUN_140efbaf0 body=291 status=ok
// SIG undefined FUN_140efbaf0(void)

undefined1 FUN_140efbaf0(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (*(char *)((longlong)param_2 + 0xc) == '\0') {
    if (DAT_146871ff0 == *param_2) {
      (**(code **)(*(longlong *)(param_1 + -0x4d8) + 0x570))();
      return 1;
    }
    if (DAT_146871ff8 == *param_2) {
      (**(code **)(*(longlong *)(param_1 + -0x4d8) + 0x578))();
      return 1;
    }
  }
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0xc4);
  if (cVar1 == '\0') {
    lVar4 = 0;
  }
  else {
    uVar3 = FWeakObjectPtr::Get(param_1 + 0xc4);
    lVar4 = FUN_140ec9a00(uVar3);
    if ((lVar4 != 0) &&
       (cVar1 = (**(code **)(*(longlong *)(lVar4 + 0x4d8) + 0xc0))
                          ((longlong *)(lVar4 + 0x4d8),param_2), cVar1 != '\0')) {
      return 1;
    }
  }
  if ((*(char *)((longlong)param_2 + 0xc) == '\0') && (DAT_146b3e2b8 == *param_2)) {
    return 0;
  }
  uVar2 = FUN_142ec6030(param_1,param_2);
  if ((lVar4 != 0) && (cVar1 = FUN_141111680(lVar4), cVar1 != '\0')) {
    return 1;
  }
  return uVar2;
}



// FUNCTION 140efbc30 FUN_140efbc30 body=354 status=ok
// SIG undefined FUN_140efbc30(void)

void FUN_140efbc30(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  undefined4 local_res10 [2];
  undefined4 local_res18;
  undefined4 local_res1c;
  longlong local_78;
  longlong *local_70;
  undefined1 *local_68 [2];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  
  FUN_140ad4c90(param_1,&local_78);
  if (local_78 != 0) {
    cVar6 = FTcpMessageTransportConnection::Init(local_78);
    if (cVar6 != '\0') {
      local_res10[0] = 0xffffffff;
      if (*(longlong *)(param_1 + 0x5b0) != 0) {
        FUN_14170c210(local_res10);
      }
      FWeakObjectPtr::operator=(&local_res18,param_1);
      uVar8 = local_res10[0];
      local_res10[0] = 0xffffffff;
      local_38 = 0;
      local_28 = 0;
      puVar7 = (undefined8 *)FUN_140438ef0(0x20,local_58);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = &PTR_FUN_144605c50;
        puVar7[1] = param_1;
        *(undefined4 *)(puVar7 + 2) = local_res18;
        *(undefined4 *)((longlong)puVar7 + 0x14) = local_res1c;
        *(undefined4 *)(puVar7 + 3) = uVar8;
        uVar8 = 0xffffffff;
      }
      local_68[0] = &LAB_140ee0ec0;
      FUN_14204c370(local_78,local_68);
      FUN_1416f8340(uVar8);
      FUN_1416f8340(local_res10[0]);
    }
  }
  plVar5 = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_70 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  return;
}



// FUNCTION 140efbda0 FUN_140efbda0 body=138 status=ok
// SIG undefined FUN_140efbda0(void)

void FUN_140efbda0(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 0x5c8);
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
      cVar2 = FUN_140cbbac0(lVar3,param_1);
      if (cVar2 != '\0') {
        FUN_140f06ab0(param_1,1);
        return;
      }
    }
  }
  FUN_140f06ab0(param_1,0);
  return;
}



// FUNCTION 140efbe30 FUN_140efbe30 body=179 status=ok
// SIG undefined FUN_140efbe30(void)

void FUN_140efbe30(longlong param_1,longlong param_2)

{
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  uint local_20;
  int local_18;
  undefined4 uStack_14;
  
  if (*(char *)(param_1 + 0x2a8) != '\0') {
    local_28 = (longlong *)0x0;
    local_20 = 0;
    local_38 = 0xffffffffffffffff;
    uStack_30 = 0xffffffffffffffff;
    (**(code **)(**(longlong **)(param_2 + 0x10) + 0x20))
              (*(longlong **)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x20),"keyCode",&local_38,
               ((byte)*(undefined4 *)(param_2 + 0x18) & 0x8f) == 10);
    if (local_18 == 0xd) {
      FUN_140ee4470(param_1,1);
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0x2b0) + 0x340))
                (*(longlong **)(param_1 + 0x2b0),param_2);
    }
    if ((local_20 >> 6 & 1) != 0) {
      (**(code **)(*local_28 + 0x10))(local_28,&local_38,CONCAT44(uStack_14,local_18));
    }
  }
  return;
}



// FUNCTION 140efbef0 FUN_140efbef0 body=784 status=ok
// SIG undefined FUN_140efbef0(void)

void FUN_140efbef0(longlong param_1,int param_2,int param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 local_88;
  longlong *plStack_80;
  undefined8 local_78;
  longlong *plStack_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_30 [8];
  longlong *local_28;
  
  lVar6 = *(longlong *)(param_1 + 0x170);
  if (lVar6 == 0) goto LAB_140efc1e0;
  if (*(longlong *)(param_1 + 0x318) == 0) {
LAB_140efbf52:
    uVar5 = FUN_142085870(lVar6,local_68,L"levelTextTop");
    FUN_142ede260(param_1 + 0x310,uVar5);
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_60 + 1;
      lVar6 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
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
  }
  else {
    if (*(longlong *)(param_1 + 800) == 0) {
LAB_140efbf4b:
      lVar6 = *(longlong *)(param_1 + 0x170);
      goto LAB_140efbf52;
    }
    piVar1 = (int *)(*(longlong *)(param_1 + 800) + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (iVar4 < 1) goto LAB_140efbf4b;
  }
  if ((*(longlong *)(param_1 + 0x318) != 0) && (*(longlong *)(param_1 + 800) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 800) + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (0 < iVar4) {
      local_88 = 0;
      plStack_80 = (longlong *)0x0;
      uVar5 = FText::AsNumber(local_48,param_3,0,&local_88);
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x310,uVar5,1,0);
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_40 + 1;
        lVar6 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
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
      plVar2 = plStack_80;
      if (plStack_80 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_80 + 1;
        lVar6 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plStack_80)(plStack_80);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar2 + 8))(plVar2,1);
          }
        }
      }
    }
  }
  if ((*(longlong *)(param_1 + 0x330) == 0) || (*(longlong *)(param_1 + 0x338) == 0)) {
LAB_140efc09b:
    uVar5 = FUN_142085870(*(undefined8 *)(param_1 + 0x170),local_58,L"levelTextBot");
    FUN_142ede260(param_1 + 0x328,uVar5);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_50 + 1;
      lVar6 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)local_50 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
  }
  else {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x338) + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (iVar4 < 1) goto LAB_140efc09b;
  }
  if ((*(longlong *)(param_1 + 0x330) != 0) && (*(longlong *)(param_1 + 0x338) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x338) + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (0 < iVar4) {
      local_78 = 0;
      plStack_70 = (longlong *)0x0;
      uVar5 = FText::AsNumber(local_30,param_3,0,&local_78);
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x328,uVar5,1,0);
      if (local_28 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_28 + 1;
        lVar6 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_28)(local_28);
          LOCK();
          piVar1 = (int *)((longlong)local_28 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_28 + 8))(local_28,1);
          }
        }
      }
      plVar2 = plStack_70;
      if (plStack_70 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_70 + 1;
        lVar6 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plStack_70)(plStack_70);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar2 + 8))(plVar2,1);
          }
        }
      }
    }
  }
LAB_140efc1e0:
  if ((0 < param_2) && (param_2 < param_3)) {
    FUN_140f08860(param_1,1);
  }
  return;
}



// FUNCTION 140efc200 FUN_140efc200 body=342 status=ok
// SIG undefined FUN_140efc200(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140efc200(undefined8 param_1,undefined1 param_2,undefined1 param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
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
  uVar3 = 0;
  uStack_c0._0_2_ = CONCAT11(param_3,param_2);
  local_88 = (longlong *)0x0;
  local_78 = 0;
  local_c8 = param_1;
  puVar2 = (undefined8 *)FUN_140438ef0(0x18,local_a8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_143f77c18;
    *(undefined4 *)(puVar2 + 1) = (undefined4)local_c8;
    *(undefined4 *)((longlong)puVar2 + 0xc) = local_c8._4_4_;
    *(undefined4 *)(puVar2 + 2) = uStack_c0;
    *(undefined4 *)((longlong)puVar2 + 0x14) = uStack_bc;
  }
  local_b8[0] = thunk_FUN_140eda400;
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



// FUNCTION 140efc380 FUN_140efc380 body=151 status=ok
// SIG undefined FUN_140efc380(void)

void FUN_140efc380(longlong param_1)

{
  undefined8 *puVar1;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  *(undefined1 *)(param_1 + 0x719) = 0;
  FWeakObjectPtr::operator=(&local_res8,param_1);
  local_28 = 0;
  local_18 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x20,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144605cc8;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_res8;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_resc;
    *(undefined1 *)(puVar1 + 3) = 0;
  }
  local_58[0] = &LAB_140ee0c00;
  FUN_14208c4f0(param_1,local_58);
  return;
}



// FUNCTION 140efc430 FUN_140efc430 body=24 status=ok
// SIG undefined FUN_140efc430(void)

void FUN_140efc430(longlong param_1,undefined1 param_2)

{
  undefined1 local_res10 [24];
  
  if (local_res10 != (undefined1 *)(param_1 + 0x655)) {
    *(undefined1 *)(param_1 + 0x655) = param_2;
    *(undefined1 *)(param_1 + 0x656) = 1;
  }
  return;
}



// FUNCTION 140efc470 FUN_140efc470 body=94 status=ok
// SIG undefined FUN_140efc470(void)

void FUN_140efc470(longlong param_1)

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
    *puVar1 = &PTR_FUN_143f77b70;
    puVar1[1] = param_1 + -0x4d8;
  }
  local_58[0] = &LAB_140ee0d90;
  FUN_14204c280(local_58);
  FUN_142ec75f0(param_1);
  return;
}



// FUNCTION 140efc4d0 FUN_140efc4d0 body=92 status=ok
// SIG undefined FUN_140efc4d0(void)

void FUN_140efc4d0(longlong param_1)

{
  undefined8 *puVar1;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  FUN_142ec8650();
  local_28 = 0;
  local_18 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_143f77b70;
    puVar1[1] = param_1 + -0x4d8;
  }
  local_58[0] = &LAB_140ee0730;
  FUN_14204c280(local_58);
  return;
}



// FUNCTION 140efc530 FUN_140efc530 body=58 status=ok
// SIG undefined FUN_140efc530(void)

undefined1 FUN_140efc530(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14104e890();
  if (cVar1 != '\0') {
    if (*(longlong *)(param_1 + 0xa50) != 0) {
      FUN_142d5ac70(*(longlong *)(param_1 + 0xa50) + 0x308);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 140efc570 FUN_140efc570 body=65 status=ok
// SIG undefined FUN_140efc570(void)

void FUN_140efc570(longlong param_1)

{
  if ((*(char *)(param_1 + 0x29c) == '\0') && (*(char *)(param_1 + 0x2a8) == '\0')) {
    FUN_142ed3540(param_1 + 0x280,1);
    FUN_140f0d520(param_1);
    return;
  }
  return;
}



// FUNCTION 140efc5c0 FUN_140efc5c0 body=122 status=ok
// SIG undefined FUN_140efc5c0(void)

void FUN_140efc5c0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_18 [16];
  
  if ((((*(longlong *)(param_1 + 0x290) == 0) ||
       (*(char *)(*(longlong *)(param_1 + 0x290) + 0x630) != '\0')) &&
      (FUN_142ed3610(param_1 + 0x280,1), *(longlong *)(param_1 + 0x290) != 0)) &&
     (cVar1 = (**(code **)(*(longlong *)(param_1 + 0x280) + 0x40))(param_1 + 0x280), cVar1 != '\0'))
  {
    uVar2 = TScriptInterface<IBlendableInterface>::
            TScriptInterface<IBlendableInterface><UMaterialInterface>(local_18,param_1);
    FUN_142ed36d0(*(undefined8 *)(param_1 + 0x290),uVar2,1);
  }
  return;
}



// FUNCTION 140efc640 FUN_140efc640 body=124 status=ok
// SIG undefined FUN_140efc640(void)

void FUN_140efc640(longlong param_1)

{
  char cVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  
  FUN_142ed3610(param_1 + 0x280,0);
  FUN_142ed3540(param_1 + 0x280,0,1);
  if (*(longlong *)(param_1 + 0x290) != 0) {
    cVar1 = (**(code **)(*(longlong *)(param_1 + 0x280) + 0x40))(param_1 + 0x280);
    if ((cVar1 != '\0') && (*(char *)(param_1 + 0x2a8) == '\0')) {
      local_18 = 0;
      uStack_10 = 0;
      FUN_142ed36d0(*(undefined8 *)(param_1 + 0x290),&local_18,1);
    }
  }
  return;
}



// FUNCTION 140efc6c0 FUN_140efc6c0 body=62 status=ok
// SIG undefined FUN_140efc6c0(void)

void FUN_140efc6c0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x7d8) != 0) {
    FUN_1407665e0(*(longlong *)(param_1 + 0x7d8) + 0xc0,param_1);
    FUN_142398ec0(param_1,1);
    return;
  }
  return;
}



// FUNCTION 140efc730 FUN_140efc730 body=8 status=ok
// SIG undefined FUN_140efc730(void)

void FUN_140efc730(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x678) = 1;
  return;
}



// FUNCTION 140efc740 FUN_140efc740 body=282 status=ok
// SIG undefined FUN_140efc740(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140efc740(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_84;
  undefined1 *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  lVar1 = *(longlong *)(param_1 + 0x650);
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x260) = param_2;
    FWeakObjectPtr::operator=(&local_88,lVar1);
    local_48 = (longlong *)0x0;
    local_38 = 0;
    puVar2 = (undefined8 *)FUN_140438ef0(0x20,local_68);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &PTR_FUN_144605cc8;
      puVar2[1] = lVar1;
      *(undefined4 *)(puVar2 + 2) = local_88;
      *(undefined4 *)((longlong)puVar2 + 0x14) = local_84;
      *(undefined1 *)(puVar2 + 3) = param_2;
    }
    local_78[0] = &LAB_140ee0cb0;
    FUN_14208c300(lVar1,local_78);
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
    FUN_140f03830(lVar1);
  }
  return;
}



// FUNCTION 140efc860 FUN_140efc860 body=305 status=ok
// SIG undefined FUN_140efc860(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140efc860(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
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
  FWeakObjectPtr::operator=(&local_d8,param_3);
  local_98 = (longlong *)0x0;
  local_88 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_b8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444f8920;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_d8;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_d4;
  }
  local_c8[0] = &LAB_140ee08c0;
  uVar2 = FUN_1420849a0(param_1,local_78,local_c8);
  FUN_14208c260(param_1,uVar2);
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
  if (local_88 != 0) {
    plVar3 = local_b8;
    if (local_98 != (longlong *)0x0) {
      plVar3 = local_98;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_98 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140efc9b0 FUN_140efc9b0 body=358 status=ok
// SIG undefined FUN_140efc9b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140efc9b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined1 *local_d8 [2];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  undefined1 local_88 [16];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  FUN_142ecb050();
  FWeakObjectPtr::operator=(&local_e0,param_3);
  FWeakObjectPtr::operator=(&local_e8,param_2);
  local_a8 = (longlong *)0x0;
  local_98 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x20,local_c8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144605c80;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_e8;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_e4;
    *(undefined4 *)(puVar1 + 3) = local_e0;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = local_dc;
  }
  local_d8[0] = &LAB_140ee0920;
  uVar2 = FUN_1420849a0(param_1,local_88,local_d8);
  FUN_14208c260(param_1,uVar2);
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
  if (local_98 != 0) {
    plVar3 = local_c8;
    if (local_a8 != (longlong *)0x0) {
      plVar3 = local_a8;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140efcb20 FUN_140efcb20 body=707 status=ok
// SIG undefined FUN_140efcb20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140efcb20(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 uVar6;
  longlong *plVar7;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  code *local_d8 [2];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  undefined1 local_88 [16];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  FUN_142ecb050();
  local_a8 = (longlong *)0x0;
  local_98 = 0;
  puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_c8);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[1] = param_1;
    *puVar3 = &PTR_FUN_143f77b70;
  }
  local_d8[0] = FUN_140ee0770;
  uVar4 = FUN_1420849a0(param_1,local_88,local_d8);
  FUN_14208c260(param_1,uVar4);
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
  if ((param_2 != 0) && (lVar1 = *(longlong *)(param_2 + 0x490), lVar1 != 0)) {
    lVar5 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (lVar1 = *(longlong *)(lVar1 + 0x848), lVar1 != 0)) {
      lVar5 = FUN_1413f82e0();
      if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        FWeakObjectPtr::operator=(&local_e4,param_1);
        local_e8 = 0xffffffff;
        FUN_14170c210(&local_e8,lVar1);
        uVar6 = local_e8;
        local_e8 = 0xffffffff;
        local_a8 = (longlong *)0x0;
        local_98 = 0;
        puVar3 = (undefined8 *)FUN_140438ef0(0x20,local_c8);
        if (puVar3 != (undefined8 *)0x0) {
          *puVar3 = &PTR_FUN_144605d10;
          puVar3[1] = param_1;
          *(undefined4 *)(puVar3 + 2) = uVar6;
          uVar6 = 0xffffffff;
          *(undefined4 *)((longlong)puVar3 + 0x14) = local_e4;
          *(undefined4 *)(puVar3 + 3) = local_e0;
        }
        local_d8[0] = (code *)&LAB_140ee0d00;
        uVar4 = FUN_1420849a0(param_1,local_88,local_d8);
        FUN_14208c260(param_1,uVar4);
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
        FUN_1416f8340(uVar6);
        FUN_1416f8340(local_e8);
      }
    }
  }
  return;
}



// FUNCTION 140efcdf0 BeginDestroy body=35 status=ok
// SIG undefined BeginDestroy(void)

void UPawnAction_Move::BeginDestroy(undefined8 param_1)

{
  FUN_142ecb050();
  FUN_140f0ea30(param_1);
  FUN_140f07370(param_1);
  return;
}



// FUNCTION 140efce20 FUN_140efce20 body=90 status=ok
// SIG undefined FUN_140efce20(void)

void FUN_140efce20(longlong param_1,longlong param_2)

{
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0x688) != 0)) {
    FUN_140f0a9b0();
    *(undefined1 *)(*(longlong *)(param_1 + 0x688) + 0x216) = 0;
    return;
  }
  if (*(char *)(param_1 + 0x6e0) != '\0') {
    *(undefined1 *)(*(longlong *)(param_1 + 0x688) + 0x216) = 1;
    return;
  }
  FUN_140f0a9b0(param_1,0);
  return;
}



// FUNCTION 140efce80 FUN_140efce80 body=576 status=ok
// SIG undefined FUN_140efce80(void)

void FUN_140efce80(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined2 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  longlong *plStack_40;
  longlong local_38 [2];
  
  plVar10 = (longlong *)0x0;
  if ((*(longlong *)(param_1 + 0x1c0) == 0) || (*(longlong *)(param_1 + 0x1c8) == 0)) {
    plVar7 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar4 = false;
    bVar12 = true;
    lVar11 = 0;
  }
  else {
    local_50 = *(longlong **)(param_1 + 0x1b8);
    local_58 = 0;
    if (local_50 == (longlong *)0x0) {
LAB_140efcf15:
      plVar7 = &local_58;
      bVar4 = true;
      bVar12 = false;
      lVar11 = local_58;
    }
    else {
      LOCK();
      iVar6 = (int)local_50[1];
      bVar12 = iVar6 == 0;
      if (bVar12) {
        *(int *)(local_50 + 1) = 0;
        iVar6 = 0;
      }
      UNLOCK();
      while (!bVar12) {
        LOCK();
        bVar12 = iVar6 == (int)local_50[1];
        if (bVar12) {
          *(int *)(local_50 + 1) = iVar6 + 1;
        }
        UNLOCK();
        if (bVar12) {
          if (local_50 != (longlong *)0x0) {
            local_58 = *(longlong *)(param_1 + 0x1b0);
          }
          goto LAB_140efcf15;
        }
        LOCK();
        iVar6 = (int)local_50[1];
        bVar12 = iVar6 == 0;
        if (bVar12) {
          *(int *)(local_50 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
      }
      plVar7 = &local_58;
      local_50 = (longlong *)0x0;
      bVar4 = true;
      bVar12 = false;
      lVar11 = 0;
    }
  }
  plVar3 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7 = plStack_40;
  if ((bVar12) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  plVar7 = local_50;
  if ((bVar4) && (local_50 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_50 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  if (lVar11 != 0) {
    if (*(char *)(param_1 + 0x215) == '\0') {
      if (*(longlong *)(param_1 + 0x1c0) != 0) {
        plVar10 = *(longlong **)(param_1 + 0x1c8);
      }
      puVar8 = (undefined8 *)(**(code **)(*plVar10 + 0x70))(plVar10,local_38);
      if (*(int *)(puVar8 + 1) == 0) {
        puVar9 = &DAT_143f3eda8;
      }
      else {
        puVar9 = (undefined2 *)*puVar8;
      }
      FUN_14203e4e0(lVar11,puVar9);
      if (local_38[0] != 0) {
        FMemory::Free();
      }
    }
    else if (*(int *)(param_1 + 0x230) == 0) {
      FUN_14203e4e0(lVar11,&DAT_143f3eda8);
    }
    else {
      FUN_14203e4e0(lVar11,*(undefined8 *)(param_1 + 0x228));
    }
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar3 + 1;
    lVar11 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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
  return;
}



// FUNCTION 140efd0c0 thunk_FUN_140f05790 body=7 status=ok
// SIG undefined thunk_FUN_140f05790(void)

void thunk_FUN_140f05790(undefined8 param_1)

{
  FUN_140f05790(param_1,1);
  return;
}



// FUNCTION 140efd0d0 FUN_140efd0d0 body=89 status=ok
// SIG undefined FUN_140efd0d0(void)

void FUN_140efd0d0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)(param_1 + 0x670);
  lVar2 = 0;
  if (plVar1 <= (longlong *)(param_1 + 0x688U)) {
    do {
      if (*plVar1 != 0) {
        FUN_140f0fcf0();
      }
      plVar1 = plVar1 + 1;
      lVar2 = lVar2 + 1;
    } while (lVar2 != 3);
  }
  return;
}



// FUNCTION 140efd130 FUN_140efd130 body=444 status=ok
// SIG undefined FUN_140efd130(void)

void FUN_140efd130(longlong param_1,undefined8 *param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  bool bVar11;
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  longlong *plStack_20;
  
  puVar3 = *(undefined8 **)(param_1 + 0x1e8);
  if ((puVar3 == (undefined8 *)0x0) ||
     (cVar7 = (**(code **)*puVar3)(puVar3,*param_2), cVar7 == '\0')) {
    plVar9 = &local_28;
    local_28 = 0;
    plStack_20 = (longlong *)0x0;
    bVar5 = false;
    bVar11 = true;
    lVar10 = 0;
  }
  else {
    local_30 = *(longlong **)(param_1 + 0x1a8);
    local_38 = 0;
    if (local_30 == (longlong *)0x0) {
LAB_140efd1cf:
      plVar9 = &local_38;
      bVar5 = true;
      bVar11 = false;
      lVar10 = local_38;
    }
    else {
      LOCK();
      iVar8 = (int)local_30[1];
      bVar11 = iVar8 == 0;
      if (bVar11) {
        *(int *)(local_30 + 1) = 0;
        iVar8 = 0;
      }
      UNLOCK();
      while (!bVar11) {
        LOCK();
        bVar11 = iVar8 == (int)local_30[1];
        if (bVar11) {
          *(int *)(local_30 + 1) = iVar8 + 1;
        }
        UNLOCK();
        if (bVar11) {
          if (local_30 != (longlong *)0x0) {
            local_38 = *(longlong *)(param_1 + 0x1a0);
          }
          goto LAB_140efd1cf;
        }
        LOCK();
        iVar8 = (int)local_30[1];
        bVar11 = iVar8 == 0;
        if (bVar11) {
          *(int *)(local_30 + 1) = 0;
          iVar8 = 0;
        }
        UNLOCK();
      }
      plVar9 = &local_38;
      local_30 = (longlong *)0x0;
      bVar5 = true;
      bVar11 = false;
      lVar10 = 0;
    }
  }
  plVar4 = (longlong *)plVar9[1];
  plVar9[1] = 0;
  *plVar9 = 0;
  plVar9 = plStack_20;
  if ((bVar11) && (plStack_20 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_20 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plStack_20 + 8))(plStack_20,1);
      }
    }
  }
  plVar9 = local_30;
  if ((bVar5) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  if (lVar10 != 0) {
    FUN_142056670(lVar10,param_3 == 1);
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
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return;
}



// FUNCTION 140efd2f0 FUN_140efd2f0 body=299 status=ok
// SIG undefined FUN_140efd2f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140efd2f0(longlong param_1)

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
  if (*(int *)(param_1 + 0x1cc) == 2) {
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
    local_68[0] = &LAB_140ee0880;
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
    *(undefined4 *)(param_1 + 0x1cc) = 0;
    FUN_140ee2c70(param_1);
    if (*(int *)(param_1 + 0x238) < 1) {
      TBaseDelegate<void>::ExecuteIfBound(param_1 + 0x170);
    }
    else {
      FUN_140f03830(param_1);
    }
  }
  return;
}



// FUNCTION 140efd420 FUN_140efd420 body=166 status=ok
// SIG undefined FUN_140efd420(void)

void FUN_140efd420(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_18 [16];
  
  if ((((*(longlong *)(param_1 + 0x1c0) != 0) &&
       (lVar1 = *(longlong *)(param_1 + 0x1d0), lVar1 != 0)) &&
      (*(longlong *)(param_1 + 0x1e0) != 0)) && (*(longlong *)(param_1 + 0x218) != 0)) {
    *(undefined1 *)(lVar1 + 0x2e0) = 0;
    FUN_142ecf920(lVar1,0);
    lVar1 = *(longlong *)(param_1 + 0x1e0);
    *(undefined1 *)(lVar1 + 0x2e0) = 0;
    FUN_142ecf920(lVar1,0);
    lVar1 = *(longlong *)(param_1 + 0x1c0);
    *(undefined1 *)(lVar1 + 0x2e0) = 1;
    FUN_142ecf920(lVar1,0);
    *(undefined8 *)(param_1 + 0x1f0) = *(undefined8 *)(param_1 + 0x1c0);
    uVar2 = TScriptInterface<IBlendableInterface>::
            TScriptInterface<IBlendableInterface><UMaterialInterface>
                      (local_18,*(undefined8 *)(param_1 + 0x1b0));
    FUN_142ed36d0(*(undefined8 *)(param_1 + 0x218),uVar2,0);
  }
  return;
}



// FUNCTION 140efd4f0 FUN_140efd4f0 body=166 status=ok
// SIG undefined FUN_140efd4f0(void)

void FUN_140efd4f0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_18 [16];
  
  lVar1 = *(longlong *)(param_1 + 0x1c0);
  if ((((lVar1 != 0) && (*(longlong *)(param_1 + 0x1d0) != 0)) &&
      (*(longlong *)(param_1 + 0x1e0) != 0)) && (*(longlong *)(param_1 + 0x218) != 0)) {
    *(undefined1 *)(lVar1 + 0x2e0) = 0;
    FUN_142ecf920(lVar1,0);
    lVar1 = *(longlong *)(param_1 + 0x1e0);
    *(undefined1 *)(lVar1 + 0x2e0) = 0;
    FUN_142ecf920(lVar1,0);
    lVar1 = *(longlong *)(param_1 + 0x1d0);
    *(undefined1 *)(lVar1 + 0x2e0) = 1;
    FUN_142ecf920(lVar1,0);
    *(undefined8 *)(param_1 + 0x1f0) = *(undefined8 *)(param_1 + 0x1d0);
    uVar2 = TScriptInterface<IBlendableInterface>::
            TScriptInterface<IBlendableInterface><UMaterialInterface>
                      (local_18,*(undefined8 *)(param_1 + 0x1b0));
    FUN_142ed36d0(*(undefined8 *)(param_1 + 0x218),uVar2,0);
  }
  return;
}



// FUNCTION 140efd5a0 FUN_140efd5a0 body=454 status=ok
// SIG undefined FUN_140efd5a0(void)

void FUN_140efd5a0(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  longlong local_38 [4];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (param_1[200] != 0) {
    if ((param_1[0xd2] != 0) && (param_1[0xd3] != 0)) {
      piVar3 = (int *)(param_1[0xd3] + 8);
      LOCK();
      iVar1 = *piVar3;
      if (iVar1 == 0) {
        *piVar3 = 0;
        iVar1 = 0;
      }
      UNLOCK();
      if (0 < iVar1) {
        uVar2 = FUN_1404b03b0();
        UMistDebugEntityScreen::InspectEntity(param_1 + 0xd1,uVar2,1,0);
      }
    }
    local_38[0] = 0;
    local_38[1] = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
    FGenericPlatformString::Memcpy(local_38[0],L"readyFlourish",0x1c);
    FUN_142088910(param_1[200],local_38);
    if (local_38[0] != 0) {
      FMemory::Free();
    }
    piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x38);
    if ((*piVar3 < DAT_1468723a0) && (_Init_thread_header(&DAT_1468723a0), DAT_1468723a0 == -1)) {
      FName::FName(&DAT_146872398,L"Skill_Ready",1);
      _Init_thread_footer(&DAT_1468723a0);
    }
    if ((*piVar3 < DAT_1468723b0) && (_Init_thread_header(&DAT_1468723b0), DAT_1468723b0 == -1)) {
      FName::FName(&DAT_1468723a8,L"Skill2_Ready",1);
      _Init_thread_footer(&DAT_1468723b0);
    }
    uVar2 = DAT_1468723a8;
    if ((char)param_1[0xe6] != '\x02') {
      uVar2 = DAT_146872398;
    }
    local_38[2] = 0;
    local_38[3] = 0;
    (**(code **)(*param_1 + 0x4e8))(param_1,uVar2,local_38 + 2);
  }
  if (param_1[0xce] != 0) {
    local_18 = (undefined4)param_1[0xe2];
    uStack_14 = *(undefined4 *)((longlong)param_1 + 0x714);
    uStack_10 = (undefined4)param_1[0xe3];
    uStack_c = *(undefined4 *)((longlong)param_1 + 0x71c);
    FUN_142f0cf50(param_1[0xce],&local_18);
  }
  return;
}



// FUNCTION 140efd790 FUN_140efd790 body=360 status=ok
// SIG undefined FUN_140efd790(void)

void FUN_140efd790(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  longlong *local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  
  FUN_140efe5e0();
  local_20 = 10;
  local_28 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"TitleText",0x14);
  local_38 = (longlong *)0x0;
  local_30 = 0;
  FUN_140ecf4e0(param_1,param_1 + 0x5c8,&local_28,0,6,&local_38);
  plVar4 = local_38;
  for (iVar3 = (int)local_30; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_28 != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x5c8);
  if (plVar4 != (longlong *)0x0) {
    lVar2 = 0x5b0;
    if (*(char *)(param_1 + 0x590) == '\0') {
      lVar2 = 0x598;
    }
    (**(code **)(*plVar4 + 0x2b0))(plVar4,lVar2 + param_1,0x501,0);
  }
  if (((*(char *)(param_1 + 0x590) == '\0') && (*(longlong *)(param_1 + 0x560) != 0)) &&
     (plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x560) + 0x5e8), plVar4 != (longlong *)0x0)) {
    local_28 = 0;
    local_20 = 0;
    lVar2 = *plVar4;
    puVar1 = (undefined8 *)FName::FName(local_res8,L"New_Area_Discovered",1);
    (**(code **)(lVar2 + 0x4e8))
              (*(undefined8 *)(*(longlong *)(param_1 + 0x560) + 0x5e8),*puVar1,&local_28);
  }
  return;
}



// FUNCTION 140efd900 FUN_140efd900 body=2417 status=ok
// SIG undefined FUN_140efd900(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140efd900(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  undefined1 auStack_328 [32];
  undefined1 local_308;
  longlong **local_300;
  undefined4 *local_2f8;
  undefined4 *puStack_2f0;
  longlong *local_2e8;
  undefined8 local_2e0;
  longlong local_2d8;
  undefined8 local_2d0;
  longlong *local_2c8;
  undefined8 local_2c0;
  longlong local_2b8;
  undefined8 local_2b0;
  longlong *local_2a8;
  undefined8 local_2a0;
  longlong local_298;
  undefined8 local_290;
  longlong *local_288;
  undefined8 local_280;
  longlong local_278;
  undefined8 local_270;
  undefined4 *local_268;
  ulonglong *puStack_260;
  undefined8 local_258;
  longlong local_250;
  undefined8 local_248;
  longlong local_240;
  undefined8 local_238;
  longlong local_230;
  undefined1 local_228 [8];
  longlong *local_220;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined1 local_1e8 [16];
  longlong local_1d8 [2];
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_198 [16];
  undefined8 local_188;
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
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined4 local_c0 [2];
  undefined8 local_b8;
  longlong *local_a8;
  char local_98;
  undefined4 local_90 [4];
  undefined1 local_80 [8];
  longlong *local_78;
  char local_68;
  undefined4 local_60 [2];
  undefined8 local_58;
  longlong *local_48;
  char local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_328;
  *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) & 0xffffe873;
  *(undefined1 *)(param_1 + 0x89) = 0xfa;
  *(undefined1 *)(param_1 + 500) = 1;
  FUN_142ecc000();
  local_2d0 = 8;
  local_2d8 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2d8,0);
  FGenericPlatformString::Memcpy(local_2d8,L"content",0x10);
  local_300 = &local_2e8;
  local_2e8 = (longlong *)0x0;
  local_308 = 6;
  local_2e0 = 0;
  local_188 = 0;
  FUN_140ecf270(param_1,param_1 + 0x508,&local_2d8,0);
  plVar9 = local_2e8;
  for (iVar8 = (int)local_2e0; iVar8 != 0; iVar8 = iVar8 + -1) {
    if (*plVar9 != 0) {
      FMemory::Free();
    }
    plVar9 = plVar9 + 2;
  }
  if (local_2e8 != (longlong *)0x0) {
    FMemory::Free(local_2e8);
  }
  if (local_2d8 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x508) != 0) {
    local_2b8 = 0;
    local_2b0 = 0xc;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2b8,0);
    FGenericPlatformString::Memcpy(local_2b8,L"windowFrame",0x18);
    local_300 = &local_2c8;
    local_308 = 6;
    local_2c8 = (longlong *)0x0;
    local_2c0 = 0;
    local_210 = 0;
    FUN_140e98b90(*(undefined8 *)(param_1 + 0x508),param_1 + 0x510,&local_2b8,0);
    plVar9 = local_2c8;
    for (iVar8 = (int)local_2c0; iVar8 != 0; iVar8 = iVar8 + -1) {
      if (*plVar9 != 0) {
        FMemory::Free();
      }
      plVar9 = plVar9 + 2;
    }
    if (local_2c8 != (longlong *)0x0) {
      FMemory::Free(local_2c8);
    }
    if (local_2b8 != 0) {
      FMemory::Free();
    }
  }
  if (*(longlong *)(param_1 + 0x510) != 0) {
    local_298 = 0;
    local_290 = 0x10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_298,0);
    FGenericPlatformString::Memcpy(local_298,L"headerTextField",0x20);
    local_300 = &local_2a8;
    local_308 = 6;
    local_2a8 = (longlong *)0x0;
    local_2a0 = 0;
    local_208 = 0;
    FUN_140e99270(*(undefined8 *)(param_1 + 0x510),param_1 + 0x518,&local_298,0);
    plVar9 = local_2a8;
    for (iVar8 = (int)local_2a0; iVar8 != 0; iVar8 = iVar8 + -1) {
      if (*plVar9 != 0) {
        FMemory::Free();
      }
      plVar9 = plVar9 + 2;
    }
    if (local_2a8 != (longlong *)0x0) {
      FMemory::Free(local_2a8);
    }
    if (local_298 != 0) {
      FMemory::Free();
    }
    local_278 = 0;
    local_270 = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_278,0);
    FGenericPlatformString::Memcpy(local_278,L"bodyTextField",0x1c);
    local_300 = &local_288;
    local_308 = 6;
    local_288 = (longlong *)0x0;
    local_280 = 0;
    local_200 = 0;
    FUN_140e99270(*(undefined8 *)(param_1 + 0x510),param_1 + 0x520,&local_278,0);
    plVar9 = local_288;
    for (iVar8 = (int)local_280; iVar8 != 0; iVar8 = iVar8 + -1) {
      if (*plVar9 != 0) {
        FMemory::Free();
      }
      plVar9 = plVar9 + 2;
    }
    if (local_288 != (longlong *)0x0) {
      FMemory::Free(local_288);
    }
    if (local_278 != 0) {
      FMemory::Free();
    }
  }
  if (*(longlong *)(param_1 + 0x518) != 0) {
    puVar5 = (undefined8 *)FTextFormat::FTextFormat(local_d0,param_1 + 0x4d8);
    local_c0[0] = 0;
    local_2f8 = local_c0;
    local_98 = '\0';
    puStack_2f0 = local_90;
    local_258 = *puVar5;
    local_250 = puVar5[1];
    local_b8 = 0;
    if (local_250 != 0) {
      LOCK();
      *(int *)(local_250 + 8) = *(int *)(local_250 + 8) + 1;
      UNLOCK();
    }
    local_1f8 = local_2f8;
    uStack_1f0 = puStack_2f0;
    uVar6 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_1e8,&local_1f8);
    uVar6 = FText::Format(local_138,&local_258,uVar6);
    FText::FText(local_180,uVar6);
    if (local_130 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_130 + 1;
      lVar4 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_1e8);
    if ((local_98 != '\0') && (local_98 = '\0', local_a8 != (longlong *)0x0)) {
      LOCK();
      plVar9 = local_a8 + 1;
      lVar4 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_a8)(local_a8);
        LOCK();
        piVar1 = (int *)((longlong)local_a8 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_a8 + 8))(local_a8,1);
        }
      }
    }
    plVar9 = (longlong *)puVar5[1];
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar9 + 1;
      lVar4 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0x518) + 0x2b0))
              (*(longlong **)(param_1 + 0x518),local_180,1,0);
    if (local_178 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_178 + 1;
      lVar4 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_178)(local_178);
        LOCK();
        piVar1 = (int *)((longlong)local_178 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_178 + 8))(local_178,1);
        }
      }
    }
  }
  if (*(longlong *)(param_1 + 0x508) != 0) {
    local_2f8 = (undefined4 *)0x0;
    puStack_2f0 = (undefined4 *)0x5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2f8,0);
    FGenericPlatformString::Memcpy(local_2f8,L"show",10);
    FUN_142088910(*(undefined8 *)(param_1 + 0x508),&local_2f8);
    if (local_2f8 != (undefined4 *)0x0) {
      FMemory::Free();
    }
  }
  if (*(longlong *)(param_1 + 0x520) == 0) goto LAB_140efe23d;
  lVar4 = *(longlong *)(param_1 + 0x430);
  if (lVar4 == 0) {
LAB_140efdeab:
    uVar6 = FUN_1404b03b0();
    FText::FText(local_228,uVar6);
  }
  else {
    lVar7 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_140efdeab;
    uVar6 = FUN_140cfcd10(lVar4,local_1d8,1);
    FText::FromString(local_228,uVar6);
    if (local_1d8[0] != 0) {
      FMemory::Free();
    }
  }
  puVar5 = (undefined8 *)FTextFormat::FTextFormat(local_f0,param_1 + 0x4f0);
  local_90[0] = 4;
  FText::FText(local_80,local_228);
  local_248 = *puVar5;
  local_268 = local_90;
  puStack_260 = (ulonglong *)local_60;
  local_240 = puVar5[1];
  local_68 = '\x01';
  if (local_240 != 0) {
    LOCK();
    *(int *)(local_240 + 8) = *(int *)(local_240 + 8) + 1;
    UNLOCK();
  }
  local_1c8 = local_268;
  uStack_1c0 = (undefined4 *)puStack_260;
  uVar6 = TArray<FFormatArgumentValue,FDefaultAllocator>::
          TArray<FFormatArgumentValue,FDefaultAllocator>(local_1b8,&local_1c8);
  uVar6 = FText::Format(local_120,&local_248,uVar6);
  FText::FText(local_150,uVar6);
  if (local_118 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_118 + 1;
    lVar4 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
            (local_1b8);
  if ((local_68 != '\0') && (local_68 = '\0', local_78 != (longlong *)0x0)) {
    LOCK();
    plVar9 = local_78 + 1;
    lVar4 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar1 = (int *)((longlong)local_78 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_78 + 8))(local_78,1);
      }
    }
  }
  plVar9 = (longlong *)puVar5[1];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar9 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  if (local_220 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_220 + 1;
    lVar4 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_220)(local_220);
      LOCK();
      piVar1 = (int *)((longlong)local_220 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_220 + 8))(local_220,1);
      }
    }
  }
  puVar5 = (undefined8 *)FTextFormat::FTextFormat(local_e0,local_150);
  local_60[0] = 0;
  local_268 = local_60;
  local_38 = '\0';
  puStack_260 = &local_30;
  local_238 = *puVar5;
  local_230 = puVar5[1];
  local_58 = 0;
  if (local_230 != 0) {
    LOCK();
    *(int *)(local_230 + 8) = *(int *)(local_230 + 8) + 1;
    UNLOCK();
  }
  local_1a8 = local_268;
  uStack_1a0 = puStack_260;
  uVar6 = TArray<FFormatArgumentValue,FDefaultAllocator>::
          TArray<FFormatArgumentValue,FDefaultAllocator>(local_198,&local_1a8);
  uVar6 = FText::Format(local_108,&local_238,uVar6);
  FText::FText(local_168,uVar6);
  if (local_100 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_100 + 1;
    lVar4 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
            (local_198);
  if ((local_38 != '\0') && (local_38 = '\0', local_48 != (longlong *)0x0)) {
    LOCK();
    plVar9 = local_48 + 1;
    lVar4 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar1 = (int *)((longlong)local_48 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_48 + 8))(local_48,1);
      }
    }
  }
  plVar9 = (longlong *)puVar5[1];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar9 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  (**(code **)(**(longlong **)(param_1 + 0x520) + 0x2b0))
            (*(longlong **)(param_1 + 0x520),local_168,1,0);
  if (local_160 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_160 + 1;
    lVar4 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  if (local_148 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_148 + 1;
    lVar4 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
LAB_140efe23d:
  FUN_140f061b0(param_1,*(undefined4 *)(param_1 + 0x528));
  return;
}



// FUNCTION 140efe280 FUN_140efe280 body=853 status=ok
// SIG undefined FUN_140efe280(void)

void FUN_140efe280(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong *local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_30 [8];
  longlong *local_28;
  
  FUN_140efe5e0();
  local_90 = 0x1b;
  local_98 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
  FGenericPlatformString::Memcpy(local_98,L"crewChallengeCompletedText",0x36);
  local_a8 = (longlong *)0x0;
  local_a0 = 0;
  lVar3 = FUN_140ac4770(param_1,&local_98,0,6,&local_a8);
  param_1[0xb3] = lVar3;
  plVar7 = local_a8;
  for (iVar6 = (int)local_a0; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free(local_a8);
  }
  if (local_98 != 0) {
    FMemory::Free();
  }
  local_78 = 0;
  local_70 = 0x21;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
  FGenericPlatformString::Memcpy(local_78,L"crewChallengeCompletedTextShadow",0x42);
  local_88 = (longlong *)0x0;
  local_80 = 0;
  lVar3 = FUN_140ac4770(param_1,&local_78,0,6,&local_88);
  param_1[0xb4] = lVar3;
  plVar7 = local_88;
  for (iVar6 = (int)local_80; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free(local_88);
  }
  if (local_78 != 0) {
    FMemory::Free();
  }
  if (((longlong *)param_1[0xb3] != (longlong *)0x0) && (param_1[0xb4] != 0)) {
    lVar3 = *(longlong *)param_1[0xb3];
    uVar4 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_48,L"CREW CHALLENGE COMPLETE",
                       L"CrewChallengeCompletedNotificationWidget",L"CrewChallengeComplete");
    (**(code **)(lVar3 + 0x2b0))(param_1[0xb3],uVar4,1,0);
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_40 + 1;
      lVar3 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
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
    lVar3 = *(longlong *)param_1[0xb4];
    uVar4 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_30,L"CREW CHALLENGE COMPLETE",
                       L"CrewChallengeCompletedNotificationWidget",L"CrewChallengeComplete");
    (**(code **)(lVar3 + 0x2b0))(param_1[0xb4],uVar4,1,0);
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_28 + 1;
      lVar3 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar1 = (int *)((longlong)local_28 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_28 + 8))(local_28,1);
        }
      }
    }
  }
  local_58 = 0;
  local_50 = 0x16;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
  FGenericPlatformString::Memcpy(local_58,L"crewChallengeNameText",0x2c);
  local_68 = (longlong *)0x0;
  local_60 = 0;
  lVar3 = FUN_140ac4770(param_1,&local_58,0,6,&local_68);
  param_1[0xb5] = lVar3;
  plVar7 = local_68;
  for (iVar6 = (int)local_60; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free(local_68);
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  if ((char)param_1[0xb6] != '\0') {
    *(undefined1 *)(param_1 + 0xb6) = 0;
    lVar3 = 0;
    if (param_1[0xb2] != 0) {
      lVar5 = FUN_1413f2350();
      for (lVar2 = param_1[0xb2]; (lVar3 = 0, lVar2 != 0 && (lVar3 = param_1[0xb2], lVar2 != lVar5))
          ; lVar2 = *(longlong *)(lVar2 + 0x30)) {
      }
    }
    (**(code **)(*param_1 + 0x530))(param_1,lVar3);
  }
  return;
}



// FUNCTION 140efe5e0 FUN_140efe5e0 body=1667 status=ok
// SIG undefined FUN_140efe5e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140efe5e0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  undefined8 *puVar12;
  int *piVar13;
  int *piVar14;
  longlong *plVar15;
  int iVar16;
  undefined1 auStack_1f8 [32];
  longlong **local_1d8;
  int local_1c8;
  int local_1c4;
  longlong local_1c0;
  longlong local_1b8;
  longlong *local_1b0;
  undefined8 local_1a8;
  undefined4 *local_198;
  ulonglong *puStack_190;
  longlong local_188;
  longlong local_180;
  undefined1 local_178 [8];
  longlong *local_170;
  undefined8 local_160;
  longlong local_158;
  undefined8 local_150;
  undefined1 local_148 [16];
  undefined1 local_138 [8];
  longlong *local_130;
  undefined1 local_120 [8];
  longlong *local_118;
  undefined1 local_108 [8];
  longlong *local_100;
  undefined1 local_f0 [8];
  longlong *local_e8;
  undefined1 local_d8 [16];
  undefined1 local_c8 [24];
  undefined1 local_b0 [24];
  undefined4 local_98 [4];
  undefined1 local_88 [24];
  undefined1 local_70;
  undefined4 local_68;
  undefined1 local_58 [24];
  undefined1 local_40;
  ulonglong local_38 [2];
  
  local_38[0] = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  FUN_142ecc000();
  uVar7 = FUN_1404b03b0();
  cVar6 = FText::EqualTo(param_1 + 0xa7,uVar7,0);
  if (cVar6 == '\0') {
    (**(code **)(*param_1 + 0x510))(param_1,param_1 + 0xa7);
  }
  lVar8 = FUN_1420fc090(param_1);
  if (lVar8 != 0) {
    lVar9 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      lVar9 = FUN_140cff1b0(lVar8);
      param_1[0xac] = lVar9;
      if (lVar9 != 0) {
        pwVar10 = _guard_xfg_dispatch_icall_nop
                            (L"&UGFxDisplayedNotificationWidget::LoadLinkedMenuData",L"::");
        pwVar5 = (wchar_t *)0x0;
        while (pwVar4 = pwVar10, pwVar4 != (wchar_t *)0x0) {
          pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
          pwVar5 = pwVar4;
        }
        FName::FName(&local_188,pwVar5 + 2,1);
        lVar9 = param_1[0xac];
        plVar15 = (longlong *)(lVar9 + 0x7f0);
        FWeakObjectPtr::operator=(&local_1c8,0);
        local_1c0 = 0;
        FWeakObjectPtr::operator=(&local_1c8,param_1);
        local_1c0 = local_188;
        local_1b8 = 0;
        if ((local_188 != 0) && (lVar11 = FWeakObjectPtr::Get(&local_1c8), lVar11 != 0)) {
          UObject::FindFunction(lVar11,local_1c0);
        }
        piVar13 = (int *)*plVar15;
        iVar16 = *(int *)(lVar9 + 0x7f8);
        for (piVar14 = piVar13; piVar14 != piVar13 + (longlong)iVar16 * 4; piVar14 = piVar14 + 4) {
          if (((*piVar14 == local_1c8) && (piVar14[1] == local_1c4)) ||
             ((cVar6 = FWeakObjectPtr::IsValid(piVar14), cVar6 == '\0' &&
              (cVar6 = FWeakObjectPtr::IsValid(&local_1c8), cVar6 == '\0')))) {
            bVar3 = true;
          }
          else {
            bVar3 = false;
          }
          if ((bVar3) && (*(longlong *)(piVar14 + 2) == local_1c0)) {
            bVar3 = true;
          }
          else {
            bVar3 = false;
          }
          if (bVar3) {
            if ((int)((longlong)piVar14 - (longlong)piVar13 >> 4) != -1) goto LAB_140efe81a;
            break;
          }
        }
        iVar16 = *(int *)(lVar9 + 0x7f8);
        *(int *)(lVar9 + 0x7f8) = iVar16 + 1;
        if (*(int *)(lVar9 + 0x7fc) < iVar16 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar15,iVar16);
        }
        piVar13 = (int *)((longlong)iVar16 * 0x10 + *plVar15);
        *piVar13 = local_1c8;
        piVar13[1] = local_1c4;
        *(longlong *)(piVar13 + 2) = local_1c0;
LAB_140efe81a:
        TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar15);
        *(undefined1 *)(param_1[0xac] + 0x800) = 1;
      }
      local_1d8 = &local_1b0;
      local_1b0 = (longlong *)0x0;
      local_1a8 = 0;
      local_150 = 0;
      lVar9 = FUN_140ac4770(param_1,param_1 + 0xb0,0,6);
      param_1[0xad] = lVar9;
      plVar15 = local_1b0;
      for (iVar16 = (int)local_1a8; iVar16 != 0; iVar16 = iVar16 + -1) {
        if (*plVar15 != 0) {
          FMemory::Free();
        }
        plVar15 = plVar15 + 2;
      }
      if (local_1b0 != (longlong *)0x0) {
        FMemory::Free(local_1b0);
      }
      if (param_1[0xad] != 0) {
        FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                  (local_178,L"{0} {1}",L"DisplayedNotificationWidget",L"HintText");
        local_1d8 = (longlong **)0x0;
        FUN_142ef39a0(local_108,DAT_146871fc8,lVar8,0);
        FText::FromString(local_120,param_1 + 0xae);
        lVar9 = FText::FText(local_c8,local_120);
        local_180 = lVar9;
        lVar11 = FText::FText(local_b0,local_108);
        local_1b8 = lVar11;
        puVar12 = (undefined8 *)FTextFormat::FTextFormat(local_d8,local_178);
        local_98[0] = 4;
        FText::FText(local_88,lVar11);
        local_70 = 1;
        local_68 = 4;
        FText::FText(local_58,lVar9);
        local_198 = local_98;
        local_40 = 1;
        puStack_190 = local_38;
        local_160 = *puVar12;
        local_158 = puVar12[1];
        if (local_158 != 0) {
          LOCK();
          *(int *)(local_158 + 8) = *(int *)(local_158 + 8) + 1;
          UNLOCK();
        }
        uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                TArray<FFormatArgumentValue,FDefaultAllocator>(local_148,&local_198);
        uVar7 = FText::Format(local_f0,&local_160,uVar7);
        FText::FText(local_138,uVar7);
        if (local_e8 != (longlong *)0x0) {
          LOCK();
          plVar15 = local_e8 + 1;
          lVar9 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*local_e8)(local_e8);
            LOCK();
            piVar13 = (int *)((longlong)local_e8 + 0xc);
            iVar16 = *piVar13;
            *piVar13 = *piVar13 + -1;
            UNLOCK();
            if (iVar16 == 1) {
              (**(code **)(*local_e8 + 8))(local_e8,1);
            }
          }
        }
        TArray<FFormatArgumentValue,FDefaultAllocator>::
        ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_148);
        lVar9 = 2;
        plVar15 = (longlong *)&stack0xffffffffffffffe0;
        do {
          lVar9 = lVar9 + -1;
          if ((char)plVar15[-4] != '\0') {
            *(undefined1 *)(plVar15 + -4) = 0;
            plVar2 = (longlong *)plVar15[-6];
            if (plVar2 != (longlong *)0x0) {
              LOCK();
              plVar1 = plVar2 + 1;
              lVar11 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar11 == 1) {
                (**(code **)*plVar2)(plVar2);
                LOCK();
                piVar13 = (int *)((longlong)plVar2 + 0xc);
                iVar16 = *piVar13;
                *piVar13 = *piVar13 + -1;
                UNLOCK();
                if (iVar16 == 1) {
                  (**(code **)(*plVar2 + 8))(plVar2,1);
                }
              }
            }
          }
          plVar15 = plVar15 + -6;
        } while (lVar9 != 0);
        plVar15 = (longlong *)puVar12[1];
        if (plVar15 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar15 + 1;
          lVar9 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar13 = (int *)((longlong)plVar15 + 0xc);
            iVar16 = *piVar13;
            *piVar13 = *piVar13 + -1;
            UNLOCK();
            if (iVar16 == 1) {
              (**(code **)(*plVar15 + 8))(plVar15,1);
            }
          }
        }
        plVar15 = *(longlong **)(local_1b8 + 8);
        if (plVar15 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar15 + 1;
          lVar9 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar13 = (int *)((longlong)plVar15 + 0xc);
            iVar16 = *piVar13;
            *piVar13 = *piVar13 + -1;
            UNLOCK();
            if (iVar16 == 1) {
              (**(code **)(*plVar15 + 8))(plVar15,1);
            }
          }
        }
        plVar15 = *(longlong **)(local_180 + 8);
        if (plVar15 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar15 + 1;
          lVar9 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar13 = (int *)((longlong)plVar15 + 0xc);
            iVar16 = *piVar13;
            *piVar13 = *piVar13 + -1;
            UNLOCK();
            if (iVar16 == 1) {
              (**(code **)(*plVar15 + 8))(plVar15,1);
            }
          }
        }
        FText::operator=(local_178,local_138);
        if (local_130 != (longlong *)0x0) {
          LOCK();
          plVar15 = local_130 + 1;
          lVar9 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*local_130)(local_130);
            LOCK();
            piVar13 = (int *)((longlong)local_130 + 0xc);
            iVar16 = *piVar13;
            *piVar13 = *piVar13 + -1;
            UNLOCK();
            if (iVar16 == 1) {
              (**(code **)(*local_130 + 8))(local_130,1);
            }
          }
        }
        (**(code **)(*(longlong *)param_1[0xad] + 0x2b0))((longlong *)param_1[0xad],local_178,1,0);
        if (local_118 != (longlong *)0x0) {
          LOCK();
          plVar15 = local_118 + 1;
          lVar9 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*local_118)(local_118);
            LOCK();
            piVar13 = (int *)((longlong)local_118 + 0xc);
            iVar16 = *piVar13;
            *piVar13 = *piVar13 + -1;
            UNLOCK();
            if (iVar16 == 1) {
              (**(code **)(*local_118 + 8))(local_118,1);
            }
          }
        }
        if (local_100 != (longlong *)0x0) {
          LOCK();
          plVar15 = local_100 + 1;
          lVar9 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*local_100)(local_100);
            LOCK();
            piVar13 = (int *)((longlong)local_100 + 0xc);
            iVar16 = *piVar13;
            *piVar13 = *piVar13 + -1;
            UNLOCK();
            if (iVar16 == 1) {
              (**(code **)(*local_100 + 8))(local_100,1);
            }
          }
        }
        if (local_170 != (longlong *)0x0) {
          LOCK();
          plVar15 = local_170 + 1;
          lVar9 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*local_170)(local_170);
            LOCK();
            piVar13 = (int *)((longlong)local_170 + 0xc);
            iVar16 = *piVar13;
            *piVar13 = *piVar13 + -1;
            UNLOCK();
            if (iVar16 == 1) {
              (**(code **)(*local_170 + 8))(local_170,1);
            }
          }
        }
      }
      FUN_142ed56a0(param_1,lVar8);
    }
  }
  return;
}



// FUNCTION 140efec70 FUN_140efec70 body=351 status=ok
// SIG undefined FUN_140efec70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140efec70(undefined8 param_1)

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
  local_b8[0] = FUN_140ee0f50;
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



// FUNCTION 140efedd0 FUN_140efedd0 body=368 status=ok
// SIG undefined FUN_140efedd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140efedd0(longlong param_1)

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
  if (*(char *)(param_1 + 0x664) == '\0') {
    uVar3 = 0;
    local_88 = (longlong *)0x0;
    local_78 = 0;
    puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[1] = param_1;
      *puVar2 = &PTR_FUN_143f77b70;
    }
    local_b8[0] = thunk_FUN_140eda520;
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
  return;
}



// FUNCTION 140efef40 FUN_140efef40 body=351 status=ok
// SIG undefined FUN_140efef40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140efef40(undefined8 param_1)

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
  local_b8[0] = FUN_140ee0af0;
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



// FUNCTION 140eff0a0 FUN_140eff0a0 body=123 status=ok
// SIG undefined FUN_140eff0a0(void)

void FUN_140eff0a0(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_28 [8];
  longlong *local_20;
  
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_28,L"Duel Initiating",L"GFxDuelingWidget",L"DuelSetup");
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



// FUNCTION 140eff120 FUN_140eff120 body=320 status=ok
// SIG undefined FUN_140eff120(void)

void FUN_140eff120(longlong param_1,longlong param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  
  if (param_2 != 0) {
    lVar3 = UUGGameViewportClient::StaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (*(longlong *)(param_1 + 0x1b8) != 0)) {
      iVar2 = FUN_142eed730();
      FUN_142f0bc30(*(undefined8 *)(param_1 + 0x1b8),param_2,iVar2 + -1);
      if (*(longlong *)(param_1 + 0x1b0) != 0) {
        iVar6 = 0;
        iVar2 = FUN_142eb7440();
        if (0 < iVar2) {
          do {
            lVar3 = FUN_142eb6a30(*(undefined8 *)(param_1 + 0x1b0),iVar6);
            if (lVar3 != 0) {
              lVar4 = FUN_14132e850();
              iVar2 = *(int *)(lVar4 + 0x90);
              if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < iVar2) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)iVar2 * 8) !=
                  lVar4 + 0x88)) {
                bVar1 = false;
              }
              else {
                bVar1 = true;
              }
              if (bVar1) {
                if ((iVar6 == *(int *)(param_2 + 0x2e4)) || (iVar6 == *(int *)(param_2 + 0x2e8))) {
                  uVar5 = CONCAT71((int7)(int3)((uint)iVar2 >> 8),1);
                }
                else {
                  uVar5 = 0;
                }
                FUN_142ed2820(lVar3,uVar5,1);
              }
            }
            iVar6 = iVar6 + 1;
            iVar2 = FUN_142eb7440(*(undefined8 *)(param_1 + 0x1b0));
          } while (iVar6 < iVar2);
        }
      }
    }
  }
  return;
}



// FUNCTION 140eff260 FUN_140eff260 body=683 status=ok
// SIG undefined FUN_140eff260(void)

void FUN_140eff260(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 local_res8 [2];
  undefined4 local_res10;
  undefined4 local_res14;
  undefined8 local_f8;
  undefined8 local_f0;
  longlong *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  longlong local_d8;
  undefined1 local_d0 [24];
  undefined1 local_b8 [24];
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  undefined1 local_88;
  undefined4 local_80;
  undefined1 *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  lVar4 = *param_1;
  local_f8 = 0;
  local_f0 = 0;
  puVar2 = (undefined8 *)FName::FName(local_res8,"Navigate",1);
  (**(code **)(lVar4 + 0x4e8))(param_1,*puVar2,&local_f8);
  local_res8[0] = 0xffffffff;
  if (*param_2 == param_1[0xd6]) {
    if (param_1[0xda] != 0) {
      FUN_14170c210(local_res8);
    }
    FWeakObjectPtr::operator=(&local_res10,param_1);
    uVar5 = local_res8[0];
    local_res8[0] = 0xffffffff;
    local_48 = 0;
    local_38 = 0;
    puVar2 = (undefined8 *)FUN_140438ef0(0x20,local_68);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &PTR_FUN_144605c50;
      puVar2[1] = param_1;
      *(undefined4 *)(puVar2 + 2) = local_res10;
      *(undefined4 *)((longlong)puVar2 + 0x14) = local_res14;
      *(undefined4 *)(puVar2 + 3) = uVar5;
      uVar5 = 0xffffffff;
    }
    local_78[0] = &LAB_140ee0890;
    FUN_14208c4f0(param_1,local_78);
    FUN_1416f8340(uVar5);
    FUN_1416f8340(local_res8[0]);
  }
  else {
    if (param_1[0xda] != 0) {
      FUN_14170c210(local_res8);
    }
    FWeakObjectPtr::operator=(&local_res10,param_1);
    local_e0 = local_res10;
    local_dc = local_res14;
    local_d8 = *param_2;
    local_e8 = param_1;
    FText::FText(local_d0,param_2 + 1);
    FText::FText(local_b8,param_2 + 4);
    local_a0 = param_2[7];
    local_98 = param_2[8];
    local_90 = param_2[9];
    local_88 = (undefined1)param_2[10];
    local_80 = local_res8[0];
    local_res8[0] = 0xffffffff;
    local_48 = 0;
    local_38 = 0;
    puVar2 = (undefined8 *)FUN_140438ef0(0x78,local_68);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &PTR_FUN_144605e78;
      puVar2[1] = local_e8;
      *(undefined4 *)(puVar2 + 2) = local_e0;
      *(undefined4 *)((longlong)puVar2 + 0x14) = local_dc;
      puVar2[3] = local_d8;
      FText::FText(puVar2 + 4,local_d0);
      FText::FText(puVar2 + 7,local_b8);
      puVar2[10] = local_a0;
      puVar2[0xb] = local_98;
      puVar2[0xc] = local_90;
      *(undefined1 *)(puVar2 + 0xd) = local_88;
      *(undefined4 *)(puVar2 + 0xe) = local_80;
      local_80 = 0xffffffff;
    }
    local_78[0] = &LAB_140ee1040;
    FUN_14208c4f0(param_1,local_78);
    FUN_1416f8340(local_80);
    FUN_140ed0490(&local_d8);
    FUN_1416f8340(local_res8[0]);
  }
  cVar1 = FWeakObjectPtr::IsValid((longlong)param_1 + 0x59c);
  if (cVar1 != '\0') {
    uVar3 = FWeakObjectPtr::Get((longlong)param_1 + 0x59c);
    lVar4 = FUN_140ec9a00(uVar3);
    if (lVar4 != 0) {
      FUN_14112e600(lVar4);
    }
  }
  return;
}



// FUNCTION 140eff510 FUN_140eff510 body=27 status=ok
// SIG undefined FUN_140eff510(void)

void FUN_140eff510(undefined8 param_1)

{
  FUN_140f11890();
  FUN_140f10900(param_1);
  return;
}



// FUNCTION 140eff530 FUN_140eff530 body=66 status=ok
// SIG undefined FUN_140eff530(void)

void FUN_140eff530(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined1 local_res8 [32];
  
  uVar2 = FUN_142dcd660(param_2,0);
  *(undefined8 *)(param_1 + 0x720) = uVar2;
  uVar1 = FUN_140ee50c0(param_1);
  if (local_res8 != (undefined1 *)(param_1 + 0x6cc)) {
    *(undefined1 *)(param_1 + 0x6cc) = uVar1;
    *(undefined1 *)(param_1 + 0x6cd) = 1;
  }
  return;
}



// FUNCTION 140eff580 FUN_140eff580 body=25 status=ok
// SIG undefined FUN_140eff580(void)

void FUN_140eff580(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 local_res18 [16];
  
  if (local_res18 != (undefined1 *)(param_1 + 0x652)) {
    *(undefined1 *)(param_1 + 0x652) = param_3;
    *(undefined1 *)(param_1 + 0x653) = 1;
  }
  return;
}



// FUNCTION 140eff5a0 FUN_140eff5a0 body=166 status=ok
// SIG undefined FUN_140eff5a0(void)

void FUN_140eff5a0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_18 [16];
  
  lVar1 = *(longlong *)(param_1 + 0x1c0);
  if ((((lVar1 != 0) && (*(longlong *)(param_1 + 0x1d0) != 0)) &&
      (*(longlong *)(param_1 + 0x1e0) != 0)) && (*(longlong *)(param_1 + 0x218) != 0)) {
    *(undefined1 *)(lVar1 + 0x2e0) = 0;
    FUN_142ecf920(lVar1,0);
    lVar1 = *(longlong *)(param_1 + 0x1d0);
    *(undefined1 *)(lVar1 + 0x2e0) = 0;
    FUN_142ecf920(lVar1,0);
    lVar1 = *(longlong *)(param_1 + 0x1e0);
    *(undefined1 *)(lVar1 + 0x2e0) = 1;
    FUN_142ecf920(lVar1,0);
    *(undefined8 *)(param_1 + 0x1f0) = *(undefined8 *)(param_1 + 0x1e0);
    uVar2 = TScriptInterface<IBlendableInterface>::
            TScriptInterface<IBlendableInterface><UMaterialInterface>
                      (local_18,*(undefined8 *)(param_1 + 0x1b0));
    FUN_142ed36d0(*(undefined8 *)(param_1 + 0x218),uVar2,0);
  }
  return;
}



// FUNCTION 140eff690 FUN_140eff690 body=187 status=ok
// SIG undefined FUN_140eff690(void)

void FUN_140eff690(longlong param_1)

{
  longlong *plVar1;
  float fVar2;
  undefined4 uVar3;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  if (*(char *)(param_1 + 0x1f8) != '\0') {
    FUN_140f10a00(param_1);
    FUN_140f0f9d0(param_1);
    FUN_140f11450(param_1);
    if (((*(longlong *)(param_1 + 0x1c0) != 0) && (*(longlong *)(param_1 + 0x1c8) != 0)) &&
       ((byte)(*(char *)(param_1 + 0x1e0) - 2U) < 2)) {
      plVar1 = *(longlong **)(param_1 + 0x1c8);
      fVar2 = (float)(**(code **)(*plVar1 + 0x60))(plVar1);
      uVar3 = (**(code **)(*plVar1 + 0x58))(plVar1);
      if (*(longlong *)(param_1 + 400) != 0) {
        FUN_142ef4810(*(longlong *)(param_1 + 400),uVar3);
      }
      if (*(longlong *)(param_1 + 0x188) != 0) {
        FUN_142ef4810(*(longlong *)(param_1 + 0x188),1.0 - fVar2);
      }
    }
  }
  return;
}



// FUNCTION 140eff750 FUN_140eff750 body=251 status=ok
// SIG undefined FUN_140eff750(void)

char FUN_140eff750(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  byte bVar7;
  bool bVar8;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  LOCK();
  cVar2 = *(char *)(param_1 + 0x180);
  bVar8 = cVar2 == '\0';
  if (bVar8) {
    *(char *)(param_1 + 0x180) = '\x01';
    cVar2 = '\0';
  }
  UNLOCK();
  if (!bVar8) {
    return cVar2;
  }
  uVar5 = 0;
  if (*(int *)(param_1 + 0x1cc) == 1) {
    plVar4 = *(longlong **)(param_1 + 0x198);
    bVar7 = 1;
    uVar6 = (longlong)*(int *)(param_1 + 0x1a0) & 0x1fffffffffffffff;
    if (plVar4 + *(int *)(param_1 + 0x1a0) < plVar4) {
      uVar6 = uVar5;
    }
    if (uVar6 != 0) {
      do {
        lVar1 = *plVar4;
        if (lVar1 != 0) {
          FUN_1410a8bd0(lVar1,param_2);
          bVar3 = FUN_141087430(lVar1);
          bVar7 = bVar7 & bVar3;
        }
        plVar4 = plVar4 + 1;
        uVar5 = uVar5 + 1;
      } while (uVar5 != uVar6);
      if (bVar7 == 0) goto LAB_140eff830;
    }
    FUN_140ef1a20(param_1);
  }
LAB_140eff830:
  LOCK();
  cVar2 = *(char *)(param_1 + 0x180);
  if (cVar2 == '\x01') {
    *(char *)(param_1 + 0x180) = '\0';
    cVar2 = '\x01';
  }
  UNLOCK();
  return cVar2;
}



// FUNCTION 140eff850 FUN_140eff850 body=57 status=ok
// SIG undefined FUN_140eff850(void)

void FUN_140eff850(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  plVar1 = *(longlong **)(param_1 + 0x170);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2a0))(plVar1,param_2);
  }
  return;
}



// FUNCTION 140eff890 FUN_140eff890 body=2243 status=ok
// SIG undefined FUN_140eff890(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140eff890(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  char *pcVar3;
  int iVar4;
  longlong *plVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  longlong lVar16;
  longlong lVar17;
  wchar_t *pwVar18;
  longlong lVar19;
  char *pcVar20;
  char cVar21;
  bool bVar22;
  undefined4 uVar23;
  float fVar24;
  undefined1 auStack_238 [32];
  longlong local_218;
  longlong local_210 [8];
  undefined1 local_1d0 [8];
  undefined4 local_1c8;
  undefined8 local_1c0;
  undefined4 *local_1b8;
  ulonglong *puStack_1b0;
  undefined8 *local_1a8;
  undefined1 local_1a0 [8];
  longlong *local_198;
  undefined8 local_188;
  longlong *plStack_180;
  undefined8 local_178;
  longlong local_170;
  undefined8 local_168;
  longlong *plStack_160;
  undefined1 local_158 [16];
  undefined1 local_148 [8];
  longlong *local_140;
  undefined1 local_130 [8];
  longlong *local_128;
  undefined1 local_118 [8];
  longlong *local_110;
  undefined1 local_100 [8];
  longlong *local_f8;
  undefined1 local_e8 [16];
  undefined1 local_d8 [32];
  undefined4 local_b8 [2];
  longlong local_b0;
  undefined1 local_90;
  undefined4 local_88;
  undefined1 local_78 [24];
  undefined1 local_60;
  ulonglong local_58 [4];
  
  local_58[0] = DAT_1468387a8 ^ (ulonglong)auStack_238;
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  cVar9 = FWeakObjectPtr::IsValid(param_1 + 0x2e);
  if (cVar9 == '\0') {
    return;
  }
  lVar12 = FWeakObjectPtr::Get(param_1 + 0x2e);
  cVar21 = '\0';
  iVar4 = *(int *)(lVar12 + 0x568);
  lVar12 = FWeakObjectPtr::Get(param_1 + 0x2e);
  fVar24 = 0.0;
  cVar9 = *(char *)(lVar12 + 0x591);
  lVar12 = 2;
  if (cVar9 == '\0') {
LAB_140eff9e0:
    cVar21 = '\x03';
  }
  else if (cVar9 == '\x01') {
    uVar13 = FWeakObjectPtr::Get(param_1 + 0x2e);
    fVar24 = (float)FUN_140aae800(uVar13);
    cVar21 = '\x02';
    if (iVar4 < 2) {
      cVar21 = '\0';
    }
LAB_140eff9d4:
    if (fVar24 <= 1e-08) goto LAB_140eff9e0;
  }
  else if (cVar9 == '\x02') {
    uVar13 = FWeakObjectPtr::Get(param_1 + 0x2e);
    fVar24 = (float)FUN_140aae780(uVar13);
    cVar21 = '\0';
  }
  else if (cVar9 == '\x03') {
    if ((*(char *)((longlong)param_1 + 0x23c) != '\0') &&
       (cVar9 = FWeakObjectPtr::IsValid(param_1 + 0x2f), cVar9 != '\0')) {
      uVar13 = FWeakObjectPtr::Get(param_1 + 0x2f);
      cVar9 = UDirectionalLightComponent::GetAtmosphereSunLightIndex(uVar13);
      if (cVar9 == '\x01') {
        uVar13 = FWeakObjectPtr::Get(param_1 + 0x2f);
        fVar24 = (float)FUN_140aac1a0(uVar13);
        cVar21 = '\0';
        goto LAB_140eff9d4;
      }
    }
    cVar21 = '\x04';
  }
  if ((param_1[0x35] != 0) && (param_1[0x36] != 0)) {
    piVar1 = (int *)(param_1[0x36] + 8);
    LOCK();
    iVar11 = *piVar1;
    if (iVar11 == 0) {
      *piVar1 = 0;
      iVar11 = 0;
    }
    UNLOCK();
    if (0 < iVar11) {
      FText::FText(local_1a0);
      FNumberFormattingOptions::FNumberFormattingOptions(local_1d0);
      local_1c0 = 0x100000001;
      if (60.0 <= fVar24) {
        dVar8 = (double)fVar24 * 10000000.0 + 0.5;
        lVar16 = (longlong)dVar8;
        uVar23 = (undefined4)((ulonglong)dVar8 >> 0x20);
        if (0.0 <= dVar8) {
          if ((lVar16 != -0x8000000000000000) && ((double)lVar16 != dVar8)) {
            auVar7._8_4_ = SUB84(dVar8,0);
            auVar7._0_8_ = dVar8;
            auVar7._12_4_ = uVar23;
            uVar10 = movmskpd(0,auVar7);
            uVar14 = -(ulonglong)(uVar10 & 1);
            goto LAB_140effb5f;
          }
        }
        else if ((lVar16 != -0x8000000000000000) && ((double)lVar16 != dVar8)) {
          auVar6._8_4_ = SUB84(dVar8,0);
          auVar6._0_8_ = dVar8;
          auVar6._12_4_ = uVar23;
          uVar10 = movmskpd(0,auVar6);
          uVar14 = (ulonglong)(uVar10 & 1 ^ 1);
LAB_140effb5f:
          dVar8 = (double)(longlong)(lVar16 + uVar14);
        }
        lVar19 = (longlong)dVar8;
        local_1c8 = 2;
        local_1c0 = 0;
        local_168 = 0;
        plStack_160 = (longlong *)0x0;
        lVar16 = lVar19 + SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(lVar19),8);
        lVar16 = (lVar16 >> 0x17) - (lVar16 >> 0x3f);
        lVar17 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar16),8) + lVar16;
        local_218 = FText::AsNumber(local_d8,(int)lVar16 +
                                             ((int)(lVar17 >> 5) - (int)(lVar17 >> 0x3f)) * -0x3c,
                                    local_1d0,&local_168);
        uVar13 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                           (local_100,L"{0}:{1}",L"GFxDuelingWidget",L"TimeFormat");
        puVar15 = (undefined8 *)FTextFormat::FTextFormat(local_e8,uVar13);
        local_b8[0] = 0;
        local_90 = 0;
        local_88 = 4;
        lVar19 = lVar19 / 600000000;
        lVar16 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar19),8) + lVar19;
        local_b0 = (longlong)((int)lVar19 + ((int)(lVar16 >> 5) - (int)(lVar16 >> 0x3f)) * -0x3c);
        local_1a8 = puVar15;
        FText::FText(local_78,local_218);
        local_1b8 = local_b8;
        local_60 = 1;
        puStack_1b0 = local_58;
        local_178 = *puVar15;
        local_170 = puVar15[1];
        if (local_170 != 0) {
          LOCK();
          *(int *)(local_170 + 8) = *(int *)(local_170 + 8) + 1;
          UNLOCK();
        }
        uVar13 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                 TArray<FFormatArgumentValue,FDefaultAllocator>(local_158,&local_1b8);
        uVar13 = FText::Format(local_118,&local_178,uVar13);
        FText::FText(local_148,uVar13);
        if (local_110 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_110 + 1;
          lVar16 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar16 == 1) {
            (**(code **)*local_110)(local_110);
            LOCK();
            piVar1 = (int *)((longlong)local_110 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*local_110 + 8))(local_110,1);
            }
          }
        }
        TArray<FFormatArgumentValue,FDefaultAllocator>::
        ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_158);
        pcVar20 = &stack0xffffffffffffffd0;
        do {
          lVar12 = lVar12 + -1;
          pcVar3 = pcVar20 + -0x30;
          if (*pcVar3 != '\0') {
            *pcVar3 = '\0';
            plVar5 = *(longlong **)(pcVar20 + -0x40);
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              plVar2 = plVar5 + 1;
              lVar16 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar16 == 1) {
                (**(code **)*plVar5)(plVar5);
                LOCK();
                piVar1 = (int *)((longlong)plVar5 + 0xc);
                iVar11 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar11 == 1) {
                  (**(code **)(*plVar5 + 8))(plVar5,1);
                }
              }
            }
          }
          pcVar20 = pcVar3;
        } while (lVar12 != 0);
        plVar5 = (longlong *)local_1a8[1];
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar5 + 1;
          lVar12 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        plVar5 = *(longlong **)(local_218 + 8);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar5 + 1;
          lVar12 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        FText::operator=(local_1a0,local_148);
        if (local_140 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_140 + 1;
          lVar12 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*local_140)(local_140);
            LOCK();
            piVar1 = (int *)((longlong)local_140 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*local_140 + 8))(local_140,1);
            }
          }
        }
        if (local_f8 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_f8 + 1;
          lVar12 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*local_f8)(local_f8);
            LOCK();
            piVar1 = (int *)((longlong)local_f8 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*local_f8 + 8))(local_f8,1);
            }
          }
        }
        plVar5 = plStack_160;
        if (plStack_160 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_160 + 1;
          lVar12 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*plStack_160)(plStack_160);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
      }
      else {
        local_188 = 0;
        plStack_180 = (longlong *)0x0;
        uVar13 = FText::AsNumber(local_130,fVar24,local_1d0,&local_188);
        FText::operator=(local_1a0,uVar13);
        if (local_128 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_128 + 1;
          lVar12 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*local_128)(local_128);
            LOCK();
            piVar1 = (int *)((longlong)local_128 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*local_128 + 8))(local_128,1);
            }
          }
        }
        plVar5 = plStack_180;
        if (plStack_180 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_180 + 1;
          lVar12 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*plStack_180)(plStack_180);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
      }
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x34,local_1a0,1,0);
      if (local_198 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_198 + 1;
        lVar12 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*local_198)(local_198);
          LOCK();
          piVar1 = (int *)((longlong)local_198 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*local_198 + 8))(local_198,1);
          }
        }
      }
    }
  }
  if ((char)param_1[0x33] != cVar21) {
    *(char *)(param_1 + 0x33) = cVar21;
    (**(code **)(*param_1 + 0x278))(param_1,cVar21 != '\x04');
    cVar9 = (char)param_1[0x33];
    if (cVar9 == '\0') {
      local_210[6] = 0;
      local_210[7] = 10;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_210 + 6,0);
      FGenericPlatformString::Memcpy(local_210[6],L"timerOnly",0x14);
      FUN_142088cf0(param_1,local_210 + 6);
      lVar12 = local_210[6];
    }
    else if (cVar9 == '\x01') {
      local_210[4] = 0;
      local_210[5] = 0xe;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_210 + 4,0);
      FGenericPlatformString::Memcpy(local_210[4],L"timerAndMatch",0x1c);
      FUN_142088cf0(param_1,local_210 + 4);
      lVar12 = local_210[4];
    }
    else if (cVar9 == '\x02') {
      local_210[2] = 0;
      local_210[3] = 0xb;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_210 + 2,0);
      FGenericPlatformString::Memcpy(local_210[2],L"challenger",0x16);
      FUN_142088cf0(param_1,local_210 + 2);
      lVar12 = local_210[2];
    }
    else {
      if (cVar9 != '\x03') goto LAB_140f00075;
      local_210[0] = 0;
      local_210[1] = 8;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_210,0);
      FGenericPlatformString::Memcpy(local_210[0],L"timeOut",0x10);
      FUN_142088cf0(param_1,local_210);
      lVar12 = local_210[0];
    }
    if (lVar12 != 0) {
      FMemory::Free();
    }
  }
LAB_140f00075:
  if (*(int *)((longlong)param_1 + 0x19c) != iVar4) {
    *(int *)((longlong)param_1 + 0x19c) = iVar4;
    plVar5 = (longlong *)param_1[0x3e];
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      iVar11 = (int)plVar5[1];
      bVar22 = iVar11 == 0;
      if (bVar22) {
        *(int *)(plVar5 + 1) = 0;
        iVar11 = 0;
      }
      UNLOCK();
      while (!bVar22) {
        LOCK();
        bVar22 = iVar11 == (int)plVar5[1];
        if (bVar22) {
          *(int *)(plVar5 + 1) = iVar11 + 1;
        }
        UNLOCK();
        if (bVar22) {
          if (plVar5 == (longlong *)0x0) {
            return;
          }
          if (param_1[0x3d] != 0) {
            if (iVar4 == 2) {
              pwVar18 = L"two";
            }
            else {
              if (iVar4 != 3) goto LAB_140f000f7;
              pwVar18 = L"three";
            }
            FUN_14203e4e0(param_1[0x3d],pwVar18);
          }
LAB_140f000f7:
          LOCK();
          plVar2 = plVar5 + 1;
          lVar12 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar12 != 1) {
            return;
          }
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 != 1) {
            return;
          }
          (**(code **)(*plVar5 + 8))(plVar5,1);
          return;
        }
        LOCK();
        iVar11 = (int)plVar5[1];
        bVar22 = iVar11 == 0;
        if (bVar22) {
          *(int *)(plVar5 + 1) = 0;
          iVar11 = 0;
        }
        UNLOCK();
      }
    }
  }
  return;
}



// FUNCTION 140f00180 FUN_140f00180 body=126 status=ok
// SIG undefined FUN_140f00180(void)

void FUN_140f00180(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if ((*(char *)(param_1 + 0x6c9) != '\0') && (*(longlong **)(param_1 + 0x688) != (longlong *)0x0))
  {
    (**(code **)(**(longlong **)(param_1 + 0x688) + 0x2a0))();
  }
  if (*(char *)(param_1 + 0x6c8) != '\0') {
    plVar2 = (longlong *)(param_1 + 0x670);
    lVar3 = 3;
    do {
      plVar1 = (longlong *)*plVar2;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x2a0))(plVar1,param_2);
      }
      plVar2 = plVar2 + 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 140f00200 FUN_140f00200 body=291 status=ok
// SIG undefined FUN_140f00200(void)

void FUN_140f00200(longlong param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  
  if ((*(longlong *)(param_1 + 0x728) == 0) || (*(longlong **)(param_1 + 0x730) == (longlong *)0x0))
  {
LAB_140f00253:
    uVar2 = 0;
  }
  else {
    plVar5 = *(longlong **)(param_1 + 0x730);
    if (*(longlong *)(param_1 + 0x728) == 0) {
      plVar5 = (longlong *)0x0;
    }
    cVar1 = (**(code **)(*plVar5 + 0x160))(plVar5,*(undefined1 *)(param_1 + 0x630));
    if (cVar1 == '\0') goto LAB_140f00253;
    uVar2 = 1;
  }
  *(undefined1 *)(param_1 + 0x6f3) = uVar2;
  lVar3 = FWeakObjectPtr::Get(param_1 + 0x5e0);
  if (lVar3 != 0) {
    lVar4 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (((bVar6) && (*(char *)(lVar3 + 0x1122) == '\0')) &&
       (cVar1 = FUN_140c491e0(lVar3), cVar1 != '\0')) {
      uVar2 = 1;
      goto LAB_140f002bc;
    }
  }
  uVar2 = 0;
LAB_140f002bc:
  *(undefined1 *)(param_1 + 0x6f2) = uVar2;
  if ((*(char *)(param_1 + 0x648) == '\0') && (*(char *)(param_1 + 0x6f3) != '\0')) {
    LOCK();
    *(undefined4 *)(param_1 + 0x644) = 1;
    UNLOCK();
  }
  LOCK();
  bVar6 = *(int *)(param_1 + 0x644) == 0;
  if (bVar6) {
    *(int *)(param_1 + 0x644) = 0;
  }
  UNLOCK();
  if (!bVar6) {
    FUN_140ee2030(param_1);
  }
  if (*(char *)(param_1 + 0x6f3) != '\0') {
    FUN_140ee0520(param_1);
  }
  FUN_142ecd1d0(param_1,param_2);
  return;
}



// FUNCTION 140f00330 FUN_140f00330 body=195 status=ok
// SIG undefined FUN_140f00330(void)

void FUN_140f00330(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  float fVar5;
  
  FUN_142ecd1d0();
  if (*(char *)((longlong)param_1 + 0x649) == '\0') {
    return;
  }
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0xc6);
  if (cVar1 == '\0') {
    uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    uVar2 = FUN_140aab5e0(uVar2);
    FWeakObjectPtr::operator=(param_1 + 0xc6,uVar2);
  }
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0xc6);
  if (cVar1 != '\0') {
    uVar2 = FWeakObjectPtr::Get(param_1 + 0xc6);
    uVar3 = FUN_140eccd20(param_1);
    lVar4 = FUN_140aab8f0(uVar2,uVar3);
    if (lVar4 != 0) {
      fVar5 = (float)FUN_140aae720(lVar4);
      goto LAB_140f003ca;
    }
  }
  fVar5 = 0.0;
LAB_140f003ca:
  *(int *)(param_1 + 0xca) = -((int)ROUND(-0.5 - (fVar5 + fVar5)) >> 1);
  return;
}



// FUNCTION 140f00400 FUN_140f00400 body=131 status=ok
// SIG undefined FUN_140f00400(void)

void FUN_140f00400(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  FUN_142ecd1d0();
  if ((*(longlong *)(param_1 + 0x640) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x640) + 0x23c) == '\0')) {
    FUN_140f10c50();
  }
  plVar3 = *(longlong **)(param_1 + 0x648);
  plVar1 = plVar3 + (longlong)*(int *)(param_1 + 0x650) * 3;
  for (; plVar3 != plVar1; plVar3 = plVar3 + 3) {
    if (((((char)plVar3[2] != '\0') && (*plVar3 != 0)) &&
        (lVar2 = *(longlong *)(*plVar3 + 0x170), lVar2 != 0)) && (*(char *)(lVar2 + 0x23c) == '\0'))
    {
      FUN_140f10c50();
    }
  }
  return;
}



// FUNCTION 140f00490 FUN_140f00490 body=1762 status=ok
// SIG undefined FUN_140f00490(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f00490(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  float fVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  float fVar9;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 local_104;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong *plStack_a8;
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar4 + 0x38) < DAT_146872300) &&
     (_Init_thread_header(&DAT_146872300), DAT_146872300 == -1)) {
    FName::FName(&DAT_1468722f8,L"Skill_PreReady_1SecondRemaining",1);
    _Init_thread_footer(&DAT_146872300);
  }
  if ((*(int *)(lVar4 + 0x38) < DAT_146872310) &&
     (_Init_thread_header(&DAT_146872310), DAT_146872310 == -1)) {
    FName::FName(&DAT_146872308,L"Skill_PreReady_2SecondsRemaining",1);
    _Init_thread_footer(&DAT_146872310);
  }
  if ((*(int *)(lVar4 + 0x38) < DAT_146872320) &&
     (_Init_thread_header(&DAT_146872320), DAT_146872320 == -1)) {
    FName::FName(&DAT_146872318,L"Skill_PreReady_3SecondsRemaining",1);
    _Init_thread_footer(&DAT_146872320);
  }
  if ((*(int *)(lVar4 + 0x38) < DAT_146872330) &&
     (_Init_thread_header(&DAT_146872330), DAT_146872330 == -1)) {
    FName::FName(&DAT_146872328,L"Skill_PreReady_4SecondsRemaining",1);
    _Init_thread_footer(&DAT_146872330);
  }
  if ((*(int *)(lVar4 + 0x38) < DAT_146872340) &&
     (_Init_thread_header(&DAT_146872340), DAT_146872340 == -1)) {
    FName::FName(&DAT_146872338,L"Skill_PreReady_5SecondsRemaining",1);
    _Init_thread_footer(&DAT_146872340);
  }
  if ((*(int *)(lVar4 + 0x38) < DAT_146872350) &&
     (_Init_thread_header(&DAT_146872350), DAT_146872350 == -1)) {
    FName::FName(&DAT_146872348,L"Skill2_PreReady_1SecondsRemaining",1);
    _Init_thread_footer(&DAT_146872350);
  }
  if ((*(int *)(lVar4 + 0x38) < DAT_146872360) &&
     (_Init_thread_header(&DAT_146872360), DAT_146872360 == -1)) {
    FName::FName(&DAT_146872358,L"Skill2_PreReady_2SecondsRemaining",1);
    _Init_thread_footer(&DAT_146872360);
  }
  if ((*(int *)(lVar4 + 0x38) < DAT_146872370) &&
     (_Init_thread_header(&DAT_146872370), DAT_146872370 == -1)) {
    FName::FName(&DAT_146872368,L"Skill2_PreReady_3SecondsRemaining",1);
    _Init_thread_footer(&DAT_146872370);
  }
  if ((*(int *)(lVar4 + 0x38) < DAT_146872380) &&
     (_Init_thread_header(&DAT_146872380), DAT_146872380 == -1)) {
    FName::FName(&DAT_146872378,L"Skill2_PreReady_4SecondsRemaining",1);
    _Init_thread_footer(&DAT_146872380);
  }
  if ((*(int *)(lVar4 + 0x38) < DAT_146872390) &&
     (_Init_thread_header(&DAT_146872390), DAT_146872390 == -1)) {
    FName::FName(&DAT_146872388,L"Skill2_PreReady_5SecondsRemaining",1);
    _Init_thread_footer(&DAT_146872390);
  }
  FWeakObjectPtr::operator=(&local_108,param_1);
  local_58 = (longlong *)0x0;
  local_48 = 0;
  puVar6 = (undefined8 *)FUN_140438ef0(0x18,local_78);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &PTR_FUN_1444f8920;
    puVar6[1] = param_1;
    *(undefined4 *)(puVar6 + 2) = local_108;
    *(undefined4 *)((longlong)puVar6 + 0x14) = local_104;
  }
  local_88[0] = &LAB_140ee0960;
  FUN_14208c260(param_1,local_88);
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
  if (param_1[0xec] == 0) {
    return;
  }
  FUN_140ee2450(param_1);
  if ((char)param_1[0xed] == '\0') {
    return;
  }
  fVar3 = *(float *)((longlong)param_1 + 0x76c);
  fVar9 = 0.0;
  if ((0.0 <= fVar3) && (fVar9 = fVar3, 1.0 <= fVar3)) {
    fVar9 = 1.0;
  }
  if (param_1[0xce] != 0) {
    FUN_142f0ead0(param_1[0xce],fVar9);
  }
  if ((param_1[0xd2] == 0) || (param_1[0xd3] == 0)) goto LAB_140f0083a;
  piVar1 = (int *)(param_1[0xd3] + 8);
  LOCK();
  iVar5 = *piVar1;
  if (iVar5 == 0) {
    *piVar1 = 0;
    iVar5 = 0;
  }
  UNLOCK();
  if (((iVar5 < 1) || (iVar5 = (int)param_1[0xef], *(int *)((longlong)param_1 + 0x774) == iVar5)) ||
     ((int)param_1[0xe7] < iVar5)) goto LAB_140f0083a;
  *(int *)((longlong)param_1 + 0x774) = iVar5;
  if (iVar5 == 1) {
    puVar6 = &local_c0;
    uVar7 = DAT_146872348;
    if ((char)param_1[0xe6] != '\x02') {
      uVar7 = DAT_1468722f8;
    }
    local_c0 = 0;
    local_b8 = 0;
LAB_140f0078d:
    (**(code **)(*param_1 + 0x4e8))(param_1,uVar7,puVar6);
  }
  else {
    if (iVar5 == 2) {
      puVar6 = &local_d0;
      uVar7 = DAT_146872358;
      if ((char)param_1[0xe6] != '\x02') {
        uVar7 = DAT_146872308;
      }
      local_d0 = 0;
      local_c8 = 0;
      goto LAB_140f0078d;
    }
    if (iVar5 == 3) {
      puVar6 = &local_e0;
      uVar7 = DAT_146872368;
      if ((char)param_1[0xe6] != '\x02') {
        uVar7 = DAT_146872318;
      }
      local_e0 = 0;
      local_d8 = 0;
      goto LAB_140f0078d;
    }
    if (iVar5 == 4) {
      puVar6 = &local_f0;
      uVar7 = DAT_146872378;
      if ((char)param_1[0xe6] != '\x02') {
        uVar7 = DAT_146872328;
      }
      local_f0 = 0;
      local_e8 = 0;
      goto LAB_140f0078d;
    }
    if (iVar5 == 5) {
      puVar6 = &local_100;
      uVar7 = DAT_146872388;
      if ((char)param_1[0xe6] != '\x02') {
        uVar7 = DAT_146872338;
      }
      local_100 = 0;
      local_f8 = 0;
      goto LAB_140f0078d;
    }
  }
  local_b0 = 0;
  plStack_a8 = (longlong *)0x0;
  uVar7 = FText::AsNumber(local_a0,(int)param_1[0xef],0,&local_b0);
  UMistDebugEntityScreen::InspectEntity(param_1 + 0xd1,uVar7,1,0);
  if (local_98 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_98 + 1;
    lVar4 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_98)(local_98);
      LOCK();
      piVar1 = (int *)((longlong)local_98 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_98 + 8))(local_98,1);
      }
    }
  }
  plVar8 = plStack_a8;
  if (plStack_a8 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_a8 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_a8)(plStack_a8);
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
LAB_140f0083a:
  if (*(float *)((longlong)param_1 + 0x76c) <= 1.0 && *(float *)((longlong)param_1 + 0x76c) != 1.0)
  {
    if (ABS(1.0 - *(float *)(param_1 + 0xee)) <= 1e-08) {
      FUN_140eee1f0(param_1);
    }
  }
  else {
    FUN_140efd5a0(param_1);
    if ((param_1[0xd2] != 0) && (param_1[0xd3] != 0)) {
      piVar1 = (int *)(param_1[0xd3] + 8);
      LOCK();
      iVar5 = *piVar1;
      if (iVar5 == 0) {
        *piVar1 = 0;
        iVar5 = 0;
      }
      UNLOCK();
      if (0 < iVar5) {
        uVar7 = FUN_1404b03b0();
        UMistDebugEntityScreen::InspectEntity(param_1 + 0xd1,uVar7,1,0);
      }
    }
  }
  return;
}



// FUNCTION 140f00b80 FUN_140f00b80 body=169 status=ok
// SIG undefined FUN_140f00b80(void)

void FUN_140f00b80(longlong param_1,float param_2)

{
  char cVar1;
  char cVar2;
  
  FUN_140f100f0();
  cVar2 = '\0';
  if (1e-08 < *(float *)(param_1 + 0x714)) {
    *(float *)(param_1 + 0x714) = *(float *)(param_1 + 0x714) - param_2;
    FUN_140f0fb60(param_1);
    if (*(float *)(param_1 + 0x714) <= 1e-08 && *(float *)(param_1 + 0x714) != 1e-08) {
      *(undefined4 *)(param_1 + 0x714) = 0;
    }
  }
  if ((*(longlong *)(param_1 + 0x670) != 0) && (*(longlong *)(param_1 + 0x690) != 0)) {
    cVar1 = FUN_140c39ab0(*(longlong *)(param_1 + 0x690),0,3);
    if (cVar1 != '\0') {
      cVar2 = '\x01';
    }
  }
  if (*(char *)(param_1 + 0x719) != cVar2) {
    FUN_140f0fb60(param_1);
  }
  return;
}



// FUNCTION 140f00c30 FUN_140f00c30 body=146 status=ok
// SIG undefined FUN_140f00c30(void)

void FUN_140f00c30(longlong param_1)

{
  int iVar1;
  undefined1 local_18 [8];
  undefined8 local_10;
  
  if (*(longlong **)(param_1 + 0x648) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x648) + 0x2a0))();
    iVar1 = FUN_140ff69b0(*(undefined8 *)(param_1 + 0x648));
    if (iVar1 != *(int *)(param_1 + 0x69c)) {
      *(int *)(param_1 + 0x69c) = iVar1;
    }
    if (*(char *)(*(longlong *)(param_1 + 0x648) + 0x325) != '\0') {
      FUN_140f0ecc0(param_1);
      *(undefined1 *)(*(longlong *)(param_1 + 0x648) + 0x325) = 0;
    }
    if ((*(char *)(param_1 + 0x699) != '\0') && (*(longlong *)(param_1 + 0x690) == 0)) {
      local_10 = 0;
      local_18[0] = 4;
      FUN_140ee8340(param_1,local_18);
    }
  }
  return;
}



// FUNCTION 140f00cd0 FUN_140f00cd0 body=2459 status=ok
// SIG undefined FUN_140f00cd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f00cd0(longlong *param_1,float param_2)

{
  longlong *plVar1;
  char *pcVar2;
  int *piVar3;
  ulonglong uVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  char *pcVar13;
  int iVar14;
  longlong lVar15;
  float fVar16;
  undefined1 auStack_238 [32];
  undefined1 local_218 [8];
  longlong local_210;
  undefined8 local_208;
  undefined4 *local_1f8;
  ulonglong *puStack_1f0;
  longlong local_1e8 [6];
  longlong *local_1b8;
  undefined1 local_1b0 [8];
  longlong *local_1a8;
  undefined8 local_198;
  longlong local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined1 local_178 [16];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined1 local_158 [16];
  undefined1 local_148 [8];
  longlong *local_140;
  undefined1 local_130 [8];
  longlong *local_128;
  undefined1 local_118 [8];
  longlong *local_110;
  undefined1 local_100 [8];
  longlong *local_f8;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined4 local_c8 [2];
  longlong local_c0;
  longlong *local_b0;
  char local_a0;
  undefined4 local_98 [2];
  longlong local_90;
  undefined1 local_70;
  undefined4 local_68;
  longlong local_60;
  undefined1 local_40;
  ulonglong local_38 [2];
  
  local_38[0] = DAT_1468387a8 ^ (ulonglong)auStack_238;
  *(float *)(param_1 + 0xe3) = param_2 + *(float *)(param_1 + 0xe3);
  iVar14 = 0;
  local_188 = (undefined4 *)CONCAT44(local_188._4_4_,(undefined4)local_188);
  uStack_180 = (undefined4 *)CONCAT44(uStack_180._4_4_,(undefined4)uStack_180);
  local_168 = (undefined4 *)CONCAT44(local_168._4_4_,(undefined4)local_168);
  uStack_160 = (ulonglong *)CONCAT44(uStack_160._4_4_,(undefined4)uStack_160);
  if ((int)param_1[0xcb] == 0) {
    if ((char)param_1[0xf0] == '\0') {
      local_188 = (undefined4 *)CONCAT44(local_188._4_4_,(undefined4)local_188);
      uStack_180 = (undefined4 *)CONCAT44(uStack_180._4_4_,(undefined4)uStack_180);
      local_168 = (undefined4 *)CONCAT44(local_168._4_4_,(undefined4)local_168);
      uStack_160 = (ulonglong *)CONCAT44(uStack_160._4_4_,(undefined4)uStack_160);
      if (0 < (int)param_1[0xef]) {
        cVar5 = FUN_142ebd920();
        if (cVar5 != '\0') {
          cVar5 = FWeakObjectPtr::IsValid(param_1 + 0xe5);
          if (cVar5 != '\0') {
            lVar11 = param_1[0xee];
            local_210 = 0;
            lVar15 = (longlong)(int)param_1[0xef] * 0xb8 + lVar11;
            local_208 = 0;
            if (lVar11 != lVar15) {
              puVar10 = (undefined8 *)(lVar11 + 0xa8);
              do {
                uVar6 = FUN_140ee70f0(param_1,puVar10);
                *(undefined4 *)((longlong)puVar10 + 0xc) = uVar6;
                if ((*(char *)(puVar10 + 1) != '\0') &&
                   (iVar7 = TArray<TSubclassOf<AEmitterCameraLensEffectBase>,FDefaultAllocator>::
                            Find(&local_210,puVar10), uVar4 = local_208, iVar7 == -1)) {
                  lVar12 = (longlong)(int)local_208;
                  iVar7 = (int)local_208 + 1;
                  local_208 = CONCAT44(local_208._4_4_,iVar7);
                  if (local_208._4_4_ < iVar7) {
                    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                              (&local_210,uVar4 & 0xffffffff);
                  }
                  *(undefined8 *)(local_210 + lVar12 * 8) = *puVar10;
                }
                lVar11 = lVar11 + 0xb8;
                puVar10 = puVar10 + 0x17;
              } while (lVar11 != lVar15);
            }
            local_1b8 = &local_210;
            FUN_140ecf9c0(param_1 + 0xee,&local_1b8);
            local_218[0] = 0;
            FUN_140ecd4a0(param_1[0xee],(longlong)(int)param_1[0xef],0,local_218);
            if (local_210 != 0) {
              FMemory::Free();
            }
          }
          lVar11 = param_1[0xee];
          FText::operator=(param_1 + 0xcc,lVar11);
          FText::operator=(param_1 + 0xcf,lVar11 + 0x18);
          *(undefined1 *)(param_1 + 0xd2) = *(undefined1 *)(lVar11 + 0x30);
          FText::operator=(param_1 + 0xd3,lVar11 + 0x38);
          FText::operator=(param_1 + 0xd6,lVar11 + 0x50);
          *(undefined1 *)(param_1 + 0xd9) = *(undefined1 *)(lVar11 + 0x68);
          FString::operator=(param_1 + 0xda,lVar11 + 0x70);
          FString::operator=(param_1 + 0xdc,lVar11 + 0x80);
          *(undefined1 *)(param_1 + 0xde) = *(undefined1 *)(lVar11 + 0x90);
          *(undefined1 *)((longlong)param_1 + 0x6f1) = *(undefined1 *)(lVar11 + 0x91);
          *(undefined1 *)((longlong)param_1 + 0x6f2) = *(undefined1 *)(lVar11 + 0x92);
          *(undefined4 *)((longlong)param_1 + 0x6f4) = *(undefined4 *)(lVar11 + 0x94);
          *(undefined4 *)(param_1 + 0xdf) = *(undefined4 *)(lVar11 + 0x98);
          *(undefined4 *)((longlong)param_1 + 0x6fc) = *(undefined4 *)(lVar11 + 0x9c);
          *(undefined1 *)(param_1 + 0xe0) = *(undefined1 *)(lVar11 + 0xa0);
          *(undefined1 *)((longlong)param_1 + 0x701) = *(undefined1 *)(lVar11 + 0xa1);
          param_1[0xe1] = *(longlong *)(lVar11 + 0xa8);
          *(undefined1 *)(param_1 + 0xe2) = *(undefined1 *)(lVar11 + 0xb0);
          *(undefined4 *)((longlong)param_1 + 0x714) = *(undefined4 *)(lVar11 + 0xb4);
          FUN_140f078d0(param_1 + 0xee,0,1,1);
          lVar11 = FUN_140eccbe0(param_1);
          if (lVar11 != 0) {
            FUN_140ccaa90(lVar11,param_1);
          }
          *(undefined4 *)(param_1 + 0xcb) = 1;
          *(undefined4 *)(param_1 + 0xe3) = 0;
          *(undefined1 *)((longlong)param_1 + 0x71c) = 0;
          if (param_1[0xe6] != 0) {
            local_1e8[0] = 0;
            local_1e8[1] = 7;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1e8,0);
            FGenericPlatformString::Memcpy(local_1e8[0],L"rollOn",0xe);
            FUN_142088910(param_1[0xe6],local_1e8);
            if (local_1e8[0] != 0) {
              FMemory::Free();
            }
          }
          if (param_1[0xed] != 0) {
            local_1e8[2] = 0;
            local_1e8[3] = 8;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1e8 + 2,0);
            FGenericPlatformString::Memcpy(local_1e8[2],L"default",0x10);
            FUN_142088910(param_1[0xed],local_1e8 + 2);
            if (local_1e8[2] != 0) {
              FMemory::Free();
            }
          }
          FUN_140efbc30(param_1);
          plVar8 = (longlong *)param_1[0xe8];
          if (plVar8 != (longlong *)0x0) {
            (**(code **)(*plVar8 + 0x2b0))(plVar8,param_1 + 0xcc,1,0);
          }
          if (param_1[0xea] != 0) {
            FUN_142f0ead0(param_1[0xea],*(undefined4 *)((longlong)param_1 + 0x6f4));
            uVar6 = FUN_140ee6b90(param_1);
            FUN_142ef4810(param_1[0xea],uVar6);
          }
          if (((char)param_1[0xe0] != '\0') && (param_1[0xed] != 0)) {
            local_1e8[4] = 0;
            local_1e8[5] = 9;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1e8 + 4,0);
            FGenericPlatformString::Memcpy(local_1e8[4],L"updateBG",0x12);
            FUN_142088910(param_1[0xed],local_1e8 + 4);
            if (local_1e8[4] != 0) {
              FMemory::Free();
            }
          }
          plVar8 = (longlong *)param_1[0xe9];
          if (plVar8 != (longlong *)0x0) {
            (**(code **)(*plVar8 + 0x2b0))(plVar8,param_1 + 0xd3,1,0);
          }
          if (param_1[0xeb] != 0) {
            FText::FText(local_1b0);
            if (*(char *)((longlong)param_1 + 0x6f2) == '\0') {
              if (*(char *)((longlong)param_1 + 0x6f1) == '\0') {
                iVar14 = *(int *)((longlong)param_1 + 0x6fc);
                lVar11 = param_1[0xdf];
                puVar10 = (undefined8 *)FTextFormat::FTextFormat(local_d8,&DAT_146872280);
                local_98[0] = 0;
                local_1f8 = local_98;
                local_70 = 0;
                puStack_1f0 = local_38;
                local_198 = *puVar10;
                local_190 = puVar10[1];
                local_68 = 0;
                local_40 = 0;
                if (local_190 != 0) {
                  LOCK();
                  *(int *)(local_190 + 8) = *(int *)(local_190 + 8) + 1;
                  UNLOCK();
                }
                local_90 = (longlong)(int)lVar11;
                local_60 = (longlong)iVar14;
                local_168 = local_1f8;
                uStack_160 = puStack_1f0;
                uVar9 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                        TArray<FFormatArgumentValue,FDefaultAllocator>(local_158,&local_168);
                uVar9 = FText::Format(local_100,&local_198,uVar9);
                FText::FText(local_130,uVar9);
                if (local_f8 != (longlong *)0x0) {
                  LOCK();
                  plVar8 = local_f8 + 1;
                  lVar11 = *plVar8;
                  *(int *)plVar8 = (int)*plVar8 + -1;
                  UNLOCK();
                  if ((int)lVar11 == 1) {
                    (**(code **)*local_f8)(local_f8);
                    LOCK();
                    piVar3 = (int *)((longlong)local_f8 + 0xc);
                    iVar14 = *piVar3;
                    *piVar3 = *piVar3 + -1;
                    UNLOCK();
                    if (iVar14 == 1) {
                      (**(code **)(*local_f8 + 8))(local_f8,1);
                    }
                  }
                }
                TArray<FFormatArgumentValue,FDefaultAllocator>::
                ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_158);
                lVar11 = 2;
                pcVar13 = &stack0xfffffffffffffff0;
                do {
                  lVar11 = lVar11 + -1;
                  pcVar2 = pcVar13 + -0x30;
                  if (*pcVar2 != '\0') {
                    *pcVar2 = '\0';
                    plVar8 = *(longlong **)(pcVar13 + -0x40);
                    if (plVar8 != (longlong *)0x0) {
                      LOCK();
                      plVar1 = plVar8 + 1;
                      lVar15 = *plVar1;
                      *(int *)plVar1 = (int)*plVar1 + -1;
                      UNLOCK();
                      if ((int)lVar15 == 1) {
                        (**(code **)*plVar8)(plVar8);
                        LOCK();
                        piVar3 = (int *)((longlong)plVar8 + 0xc);
                        iVar14 = *piVar3;
                        *piVar3 = *piVar3 + -1;
                        UNLOCK();
                        if (iVar14 == 1) {
                          (**(code **)(*plVar8 + 8))(plVar8,1);
                        }
                      }
                    }
                  }
                  pcVar13 = pcVar2;
                } while (lVar11 != 0);
                plVar8 = (longlong *)puVar10[1];
                if (plVar8 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = plVar8 + 1;
                  lVar11 = *plVar1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)lVar11 == 1) {
                    (**(code **)*plVar8)(plVar8);
                    LOCK();
                    piVar3 = (int *)((longlong)plVar8 + 0xc);
                    iVar14 = *piVar3;
                    *piVar3 = *piVar3 + -1;
                    UNLOCK();
                    if (iVar14 == 1) {
                      (**(code **)(*plVar8 + 8))(plVar8,1);
                    }
                  }
                }
                FText::operator=(local_1b0,local_130);
              }
              else {
                fVar16 = (float)FUN_140ee6b90(param_1);
                iVar7 = (int)ROUND(fVar16 * 100.0 + fVar16 * 100.0 + 0.5) >> 1;
                if ((-1 < iVar7) && (iVar14 = 100, iVar7 < 100)) {
                  iVar14 = iVar7;
                }
                plVar8 = (longlong *)FTextFormat::FTextFormat(local_e8,&DAT_146872298);
                local_c0 = (longlong)iVar14;
                local_188 = local_c8;
                uStack_180 = local_98;
                local_1f8 = (undefined4 *)*plVar8;
                puStack_1f0 = (ulonglong *)plVar8[1];
                local_c8[0] = 0;
                local_a0 = '\0';
                if (puStack_1f0 != (ulonglong *)0x0) {
                  LOCK();
                  *(int *)(puStack_1f0 + 1) = (int)puStack_1f0[1] + 1;
                  UNLOCK();
                }
                uVar9 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                        TArray<FFormatArgumentValue,FDefaultAllocator>(local_178,&local_188);
                uVar9 = FText::Format(local_118,&local_1f8,uVar9);
                FText::FText(local_148,uVar9);
                if (local_110 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = local_110 + 1;
                  lVar11 = *plVar1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)lVar11 == 1) {
                    (**(code **)*local_110)(local_110);
                    LOCK();
                    piVar3 = (int *)((longlong)local_110 + 0xc);
                    iVar14 = *piVar3;
                    *piVar3 = *piVar3 + -1;
                    UNLOCK();
                    if (iVar14 == 1) {
                      (**(code **)(*local_110 + 8))(local_110,1);
                    }
                  }
                }
                TArray<FFormatArgumentValue,FDefaultAllocator>::
                ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_178);
                if ((local_a0 != '\0') && (local_a0 = '\0', local_b0 != (longlong *)0x0)) {
                  LOCK();
                  plVar1 = local_b0 + 1;
                  lVar11 = *plVar1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)lVar11 == 1) {
                    (**(code **)*local_b0)(local_b0);
                    LOCK();
                    piVar3 = (int *)((longlong)local_b0 + 0xc);
                    iVar14 = *piVar3;
                    *piVar3 = *piVar3 + -1;
                    UNLOCK();
                    if (iVar14 == 1) {
                      (**(code **)(*local_b0 + 8))(local_b0,1);
                    }
                  }
                }
                plVar8 = (longlong *)plVar8[1];
                if (plVar8 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = plVar8 + 1;
                  lVar11 = *plVar1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)lVar11 == 1) {
                    (**(code **)*plVar8)(plVar8);
                    LOCK();
                    piVar3 = (int *)((longlong)plVar8 + 0xc);
                    iVar14 = *piVar3;
                    *piVar3 = *piVar3 + -1;
                    UNLOCK();
                    if (iVar14 == 1) {
                      (**(code **)(*plVar8 + 8))(plVar8,1);
                    }
                  }
                }
                FText::operator=(local_1b0,local_148);
                local_128 = local_140;
              }
              if (local_128 != (longlong *)0x0) {
                LOCK();
                plVar8 = local_128 + 1;
                lVar11 = *plVar8;
                *(int *)plVar8 = (int)*plVar8 + -1;
                UNLOCK();
                if ((int)lVar11 == 1) {
                  (**(code **)*local_128)(local_128);
                  LOCK();
                  piVar3 = (int *)((longlong)local_128 + 0xc);
                  iVar14 = *piVar3;
                  *piVar3 = *piVar3 + -1;
                  UNLOCK();
                  if (iVar14 == 1) {
                    (**(code **)(*local_128 + 8))(local_128,1);
                  }
                }
              }
            }
            else {
              FText::operator=(local_1b0,param_1 + 200);
            }
            (**(code **)(*(longlong *)param_1[0xeb] + 0x2b0))
                      ((longlong *)param_1[0xeb],local_1b0,1,0);
            if (local_1a8 != (longlong *)0x0) {
              LOCK();
              plVar8 = local_1a8 + 1;
              lVar11 = *plVar8;
              *(int *)plVar8 = (int)*plVar8 + -1;
              UNLOCK();
              if ((int)lVar11 == 1) {
                (**(code **)*local_1a8)(local_1a8);
                LOCK();
                piVar3 = (int *)((longlong)local_1a8 + 0xc);
                iVar14 = *piVar3;
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                if (iVar14 == 1) {
                  (**(code **)(*local_1a8 + 8))(local_1a8,1);
                }
              }
            }
          }
          if (param_1[0xec] != 0) {
            FUN_142088910(param_1[0xec],param_1 + 0xda);
          }
        }
      }
    }
    else {
      FUN_140eecd70();
      local_188 = (undefined4 *)CONCAT44(local_188._4_4_,(undefined4)local_188);
      uStack_180 = (undefined4 *)CONCAT44(uStack_180._4_4_,(undefined4)uStack_180);
      local_168 = (undefined4 *)CONCAT44(local_168._4_4_,(undefined4)local_168);
      uStack_160 = (ulonglong *)CONCAT44(uStack_160._4_4_,(undefined4)uStack_160);
    }
  }
  iVar14 = (int)param_1[0xcb];
  if (iVar14 == 0) {
    (**(code **)(*param_1 + 0x580))(param_1,1);
    iVar14 = (int)param_1[0xcb];
  }
  if (iVar14 == 1) {
    if (*(float *)((longlong)param_1 + 0x5fc) <= 1e-08) {
      if (*(float *)(param_1 + 0xc6) < *(float *)(param_1 + 0xe3) ||
          *(float *)(param_1 + 0xc6) == *(float *)(param_1 + 0xe3)) {
        *(undefined4 *)(param_1 + 0xcb) = 2;
        lVar11 = FUN_140eccbe0(param_1);
        if (lVar11 != 0) {
          FUN_140cc9500(lVar11,param_1);
        }
        *(undefined4 *)(param_1 + 0xe3) = 0;
        FUN_140ee4180(param_1);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0xe3) = 0;
    }
    if ((*(char *)((longlong)param_1 + 0x71c) == '\0') &&
       (*(float *)((longlong)param_1 + 0x634) < *(float *)(param_1 + 0xe3) ||
        *(float *)((longlong)param_1 + 0x634) == *(float *)(param_1 + 0xe3))) {
      *(undefined1 *)((longlong)param_1 + 0x71c) = 1;
      FUN_140f036b0(param_1);
    }
  }
  if (((int)param_1[0xcb] == 2) &&
     (*(float *)(param_1 + 199) < *(float *)(param_1 + 0xe3) ||
      *(float *)(param_1 + 199) == *(float *)(param_1 + 0xe3))) {
    FUN_140f123e0(param_1);
  }
  return;
}



// FUNCTION 140f01670 FUN_140f01670 body=327 status=ok
// SIG undefined FUN_140f01670(void)

void FUN_140f01670(longlong param_1,undefined4 param_2)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  char cVar4;
  float fVar5;
  float fVar6;
  char local_res8 [16];
  undefined1 local_res18 [8];
  float local_res20 [2];
  float local_28 [8];
  
  fVar6 = ((*(float *)(param_1 + 0x6e8) * *(float *)(param_1 + 0x6dc) + *(float *)(param_1 + 0x6e4))
          * 0.008726646) / *(float *)(param_1 + 0x7d8);
  if (local_28 != (float *)(param_1 + 0x69c)) {
    *(float *)(param_1 + 0x69c) = fVar6;
    *(undefined1 *)(param_1 + 0x6a0) = 1;
  }
  fVar5 = ((*(float *)(param_1 + 0x6e8) * *(float *)(param_1 + 0x6ec) + *(float *)(param_1 + 0x6e4))
          * 0.008726646) / *(float *)(param_1 + 0x7d8);
  if (local_res20 != (float *)(param_1 + 0x6b4)) {
    *(float *)(param_1 + 0x6b4) = fVar5;
    *(undefined1 *)(param_1 + 0x6b8) = 1;
  }
  if (local_res20 != (float *)(param_1 + 0x6a8)) {
    *(float *)(param_1 + 0x6a8) = fVar5;
    *(undefined1 *)(param_1 + 0x6ac) = 1;
  }
  if ((fVar5 < fVar6) || (ABS(fVar5 - fVar6) <= 0.0001)) {
    cVar1 = '\x01';
    cVar4 = '\x01';
    cVar2 = cVar4;
    if (*(char *)(param_1 + 0x6f0) != '\0') goto LAB_140f01734;
  }
  else {
    cVar1 = '\0';
  }
  cVar4 = '\0';
  cVar2 = cVar1;
LAB_140f01734:
  if (local_res8 != (char *)(param_1 + 0x658)) {
    *(char *)(param_1 + 0x658) = cVar4;
    *(undefined1 *)(param_1 + 0x659) = 1;
  }
  if ((cVar2 == '\0') || (*(char *)(param_1 + 0x6f1) == '\0')) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  if (local_res18 != (undefined1 *)(param_1 + 0x65b)) {
    *(undefined1 *)(param_1 + 0x65b) = uVar3;
    *(undefined1 *)(param_1 + 0x65c) = 1;
  }
  LOCK();
  *(undefined4 *)(param_1 + 0x644) = 1;
  UNLOCK();
  FUN_140edf600(param_1);
  if (*(longlong *)(param_1 + 0x7e0) != 0) {
    FUN_1411f0ce0(*(longlong *)(param_1 + 0x7e0),param_2);
  }
  return;
}



// FUNCTION 140f01820 FUN_140f01820 body=120 status=ok
// SIG undefined FUN_140f01820(void)

void FUN_140f01820(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (*(longlong **)(param_1 + 0x640) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x640) + 0x2a0))();
  }
  plVar3 = *(longlong **)(param_1 + 0x648);
  plVar1 = plVar3 + (longlong)*(int *)(param_1 + 0x650) * 3;
  for (; plVar3 != plVar1; plVar3 = plVar3 + 3) {
    if (((char)plVar3[2] != '\0') && (plVar2 = (longlong *)*plVar3, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x2a0))(plVar2,param_2);
    }
  }
  return;
}



// FUNCTION 140f018c0 FUN_140f018c0 body=123 status=ok
// SIG undefined FUN_140f018c0(void)

void FUN_140f018c0(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_28 [8];
  longlong *local_20;
  
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_28,L"Draw!",L"GFxDuelingWidget",L"DuelDraw");
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



// FUNCTION 140f01940 FUN_140f01940 body=900 status=ok
// SIG undefined FUN_140f01940(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140f01940(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  byte *pbVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  undefined8 local_38;
  undefined8 uStack_30;
  
  if (param_2 == 0) {
    return;
  }
  lVar4 = FUN_14132e850();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
      != lVar4 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return;
  }
  lVar4 = *(longlong *)(param_1 + 0x1f0);
  if (lVar4 == 0) {
    return;
  }
  iVar3 = *(int *)(param_2 + 0x2d8);
  lVar9 = (longlong)iVar3;
  iVar10 = 2;
  if (lVar4 == *(longlong *)(param_1 + 0x1c0)) {
    iVar8 = 0;
  }
  else if (lVar4 == *(longlong *)(param_1 + 0x1d0)) {
    iVar8 = 1;
  }
  else {
    iVar8 = -1;
    if (lVar4 == *(longlong *)(param_1 + 0x1e0)) {
      iVar8 = iVar10;
    }
  }
  if (iVar3 == 0) {
    if (iVar8 == 0) {
      pbVar5 = *(byte **)(param_1 + 0x238);
    }
    else if (iVar8 == 1) {
      pbVar5 = *(byte **)(param_1 + 0x248);
    }
    else {
      if (iVar8 != 2) goto LAB_140f01a8c;
      pbVar5 = *(byte **)(param_1 + 600);
    }
    local_38 = CONCAT44((float)pbVar5[1] * 0.003921569,(float)pbVar5[2] * 0.003921569);
    uStack_30 = CONCAT44((float)pbVar5[3] * 0.003921569,(float)*pbVar5 * 0.003921569);
    goto LAB_140f01b1d;
  }
  if (iVar3 < 0) {
LAB_140f01a99:
    bVar2 = false;
  }
  else {
LAB_140f01a8c:
    if (*(int *)(param_1 + 0x230) <= iVar3) goto LAB_140f01a99;
    bVar2 = true;
  }
  if (bVar2) {
    lVar1 = *(longlong *)(param_1 + 0x228);
    local_38 = CONCAT44((float)*(byte *)(lVar1 + 1 + lVar9 * 4) * 0.003921569,
                        (float)*(byte *)(lVar1 + 2 + lVar9 * 4) * 0.003921569);
    uStack_30 = CONCAT44((float)*(byte *)(lVar1 + 3 + lVar9 * 4) * 0.003921569,
                         (float)*(byte *)(lVar1 + lVar9 * 4) * 0.003921569);
  }
  else {
    local_38 = _DAT_1468b5d78;
    uStack_30 = uRam00000001468b5d80;
  }
LAB_140f01b1d:
  *(int *)(lVar4 + 0x2e4) = iVar3;
  if (*(longlong *)(lVar4 + 0x2d0) != 0) {
    FUN_142f0c220(*(longlong *)(lVar4 + 0x2d0),&local_38,CONCAT71((int7)((ulonglong)lVar4 >> 8),1));
  }
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    iVar8 = 0;
    iVar3 = FUN_142eb7440();
    if (0 < iVar3) {
      do {
        lVar4 = FUN_142eb6a30(*(undefined8 *)(param_1 + 0x1b0),iVar8);
        if (lVar4 != 0) {
          lVar9 = FUN_14132e850();
          iVar3 = *(int *)(lVar9 + 0x90);
          if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < iVar3) ||
             (*(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)iVar3 * 8)
              != lVar9 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            if ((iVar8 == *(int *)(*(longlong *)(param_1 + 0x1f0) + 0x2e4)) ||
               (iVar8 == *(int *)(*(longlong *)(param_1 + 0x1f0) + 0x2e8))) {
              uVar7 = CONCAT71((int7)(int3)((uint)iVar3 >> 8),1);
            }
            else {
              uVar7 = 0;
            }
            FUN_142ed2820(lVar4,uVar7,1);
          }
        }
        iVar8 = iVar8 + 1;
        iVar3 = FUN_142eb7440(*(undefined8 *)(param_1 + 0x1b0));
      } while (iVar8 < iVar3);
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x1f0);
  uVar6 = *(undefined4 *)(param_2 + 0x308);
  if (lVar4 == *(longlong *)(param_1 + 0x1c0)) {
    if ((*(char *)(param_2 + 0x348) != '\0') && (0 < *(int *)(param_1 + 0x240))) {
      uVar6 = **(undefined4 **)(param_1 + 0x238);
    }
    iVar3 = 0;
  }
  else if (lVar4 == *(longlong *)(param_1 + 0x1d0)) {
    if ((*(char *)(param_2 + 0x348) != '\0') && (0 < *(int *)(param_1 + 0x250))) {
      uVar6 = **(undefined4 **)(param_1 + 0x248);
    }
    iVar3 = 1;
  }
  else {
    iVar3 = -1;
    if (((lVar4 == *(longlong *)(param_1 + 0x1e0)) &&
        (iVar3 = iVar10, *(char *)(param_2 + 0x348) != '\0')) && (0 < *(int *)(param_1 + 0x260))) {
      uVar6 = **(undefined4 **)(param_1 + 600);
    }
  }
  FUN_140ee02a0(param_1 + 0x198,uVar6,0,iVar3,*(undefined1 *)(param_2 + 0x348));
  return;
}



// FUNCTION 140f01cd0 FUN_140f01cd0 body=21 status=ok
// SIG undefined FUN_140f01cd0(void)

void FUN_140f01cd0(longlong param_1,longlong param_2)

{
  if (param_2 == *(longlong *)(param_1 + 0x760)) {
    FUN_140f0b5d0(param_1,*(longlong *)(param_1 + 0x760));
    return;
  }
  return;
}



// FUNCTION 140f01cf0 FUN_140f01cf0 body=123 status=ok
// SIG undefined FUN_140f01cf0(void)

void FUN_140f01cf0(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_28 [8];
  longlong *local_20;
  
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_28,L"Declined Duel",L"GFxDuelingWidget",L"DeclinedDuel");
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



// FUNCTION 140f01d70 FUN_140f01d70 body=41 status=ok
// SIG undefined FUN_140f01d70(void)

void FUN_140f01d70(longlong param_1,char param_2)

{
  if (param_2 != '\0') {
    *(undefined4 *)(param_1 + 0x714) = *(undefined4 *)(param_1 + 0x710);
    FUN_140f0fb60();
    return;
  }
  *(undefined4 *)(param_1 + 0x714) = 0;
  FUN_140f0fb60();
  return;
}



// FUNCTION 140f01dc0 FUN_140f01dc0 body=2302 status=ok
// SIG undefined FUN_140f01dc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f01dc0(longlong *param_1,longlong param_2,longlong param_3)

{
  bool bVar1;
  bool bVar2;
  wchar_t *pwVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  uint uVar15;
  longlong lVar16;
  undefined1 auStack_128 [32];
  undefined2 local_108;
  undefined8 local_f8;
  ulonglong local_f0;
  char local_e8;
  undefined1 *local_d8 [2];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  undefined1 local_88 [16];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  FWeakObjectPtr::operator=(&local_f8,param_1[0xce]);
  uVar4 = (undefined4)local_f8;
  uVar5 = local_f8._4_4_;
  pwVar14 = (wchar_t *)0x0;
  local_a8 = (longlong *)0x0;
  local_98 = 0;
  puVar7 = (undefined8 *)FUN_140438ef0(0x18,local_c8);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &PTR_FUN_1444f8920;
    puVar7[1] = param_1;
    *(undefined4 *)(puVar7 + 2) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x14) = uVar5;
  }
  local_d8[0] = &LAB_140ee1060;
  uVar8 = FUN_1420849a0(param_1,local_88,local_d8);
  FUN_14208c260(param_1,uVar8);
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
  if (local_98 != 0) {
    plVar11 = local_c8;
    if (local_a8 != (longlong *)0x0) {
      plVar11 = local_a8;
    }
    if (plVar11 != (longlong *)0x0) {
      (**(code **)(*plVar11 + 0x10))(plVar11,0);
    }
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  bVar2 = false;
  bVar1 = false;
  param_1[0xce] = param_2;
  if (param_2 != 0) {
    uVar8 = UMovieSceneAudioSection::GetPrivateStaticClass();
    pwVar9 = (wchar_t *)AGameStateBase::OnRep_GameModeClass(param_1[0xce],uVar8);
    if (pwVar9 == (wchar_t *)0x0) {
LAB_140f01f2f:
      pwVar9 = pwVar14;
    }
    else {
      lVar10 = UMovieSceneAudioSection::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(pwVar9 + 8) + 0x90) < *(int *)(lVar10 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(pwVar9 + 8) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
          != lVar10 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) goto LAB_140f01f2f;
    }
    param_1[0xcf] = (longlong)pwVar9;
    plVar11 = (longlong *)param_1[0xce];
    bVar1 = bVar2;
    if (plVar11 != (longlong *)0x0) {
      uVar8 = APlayArea::GetPrivateStaticClass();
      plVar11 = (longlong *)(**(code **)(*plVar11 + 0x628))(plVar11,uVar8);
      if (plVar11 != (longlong *)0x0) {
        lVar10 = *plVar11;
        uVar8 = FUN_140eccc40(param_1);
        uVar8 = (**(code **)(lVar10 + 0x530))(plVar11,uVar8);
        FName::FName(&local_f8,L"Secondary",1);
        plVar12 = (longlong *)FUN_142dec810(uVar8,&local_f8);
        plVar11 = (longlong *)*plVar12;
        plVar12 = plVar11 + (longlong)(int)plVar12[1] * 8;
        if (plVar11 != plVar12) {
          do {
            if (*plVar11 == param_1[0xe4]) {
              bVar1 = true;
              break;
            }
            plVar11 = plVar11 + 8;
          } while (plVar11 != plVar12);
        }
      }
    }
    local_a8 = (longlong *)0x0;
    local_98 = 0;
    puVar7 = (undefined8 *)FUN_140438ef0(0x10,local_c8);
    if (puVar7 != (undefined8 *)0x0) {
      puVar7[1] = param_1;
      *puVar7 = &PTR_FUN_143f77b70;
    }
    local_d8[0] = &LAB_140ee0fd0;
    uVar8 = FUN_1420849a0(param_1,local_88,local_d8);
    FUN_14208c260(param_1,uVar8);
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
    if (local_98 != 0) {
      plVar11 = local_c8;
      if (local_a8 != (longlong *)0x0) {
        plVar11 = local_a8;
      }
      if (plVar11 != (longlong *)0x0) {
        (**(code **)(*plVar11 + 0x10))(plVar11,0);
      }
    }
    if (local_a8 != (longlong *)0x0) {
      FMemory::Free();
    }
    if ((((param_1[0xd7] != 0) && (param_1[0xd0] != 0)) &&
        (*(longlong *)(param_1[0xd0] + 0x180) != 0)) && (*(longlong *)(param_1[0xce] + 0x478) != 0))
    {
      FUN_142088cf0(param_1[0xd7],*(longlong *)(param_1[0xce] + 0x478) + 0x48);
    }
  }
  local_e8 = '\0';
  if (param_3 == 0) {
    if (param_2 == 0) goto LAB_140f020ee;
    local_e8 = '\x01';
  }
  if ((param_2 == 0) && (param_3 != 0)) {
    (**(code **)(*param_1 + 0x580))(param_1,0);
  }
LAB_140f020ee:
  FUN_140f0feb0(param_1);
  if (param_1[0xd8] != 0) {
    if (bVar1) {
      *(undefined1 *)((longlong)param_1 + 0x71b) = 4;
      local_f8 = 0;
      local_f0 = 0x12;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
      local_108 = 0x3f;
      FGenericPlatformString::Convert<char,wchar_t>(local_f8,0x12,"eridianFabricator");
      FUN_142088910(param_1[0xd8],&local_f8);
      if (local_f8 != 0) {
        FMemory::Free();
      }
      if ((longlong *)param_1[0xd6] != (longlong *)0x0) {
        lVar10 = *(longlong *)param_1[0xd6];
        uVar8 = FUN_1404b03b0();
        (**(code **)(lVar10 + 0x2b0))(param_1[0xd6],uVar8,1,0);
      }
    }
    else if (param_1[0xcf] == 0) {
      if (((param_1[0xdc] == 0) || (param_1[0xce] == 0)) ||
         (bVar6 = ATTLBaseBossWyvePawn::IsExecRotation(), bVar6 < 2)) {
        *(undefined1 *)((longlong)param_1 + 0x71b) = 1;
        local_f8 = 0;
        local_f0 = 7;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
        local_108 = 0x3f;
        FGenericPlatformString::Convert<char,wchar_t>(local_f8,7,"noMode");
        FUN_142088910(param_1[0xd8],&local_f8);
        if (local_f8 != 0) {
          FMemory::Free();
        }
      }
      else {
        *(undefined1 *)((longlong)param_1 + 0x71b) = 2;
        local_f8 = 0;
        local_f0 = 9;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
        local_108 = 0x3f;
        FGenericPlatformString::Convert<char,wchar_t>(local_f8,9,"hasModes");
        FUN_142088910(param_1[0xd8],&local_f8);
        if (local_f8 != 0) {
          FMemory::Free();
        }
        FUN_140f0fb60(param_1);
      }
    }
    else {
      *(undefined1 *)((longlong)param_1 + 0x71b) = 3;
      local_f8 = 0;
      local_f0 = 0xb;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
      local_108 = 0x3f;
      FGenericPlatformString::Convert<char,wchar_t>(local_f8,0xb,"covAmmoBar");
      FUN_142088910(param_1[0xd8],&local_f8);
      if (local_f8 != 0) {
        FMemory::Free();
      }
      lVar10 = param_1[0xcf];
      *(bool *)((longlong)param_1 + 0x71c) = *(char *)(lVar10 + 0x25c) == '\0';
      if ((*(float *)(lVar10 + 600) <= 1e-08) || ((*(byte *)(lVar10 + 0x229) & 1) == 0)) {
        *(undefined1 *)((longlong)param_1 + 0x71d) = 1;
        FUN_140f100f0(param_1);
      }
      else {
        *(undefined1 *)((longlong)param_1 + 0x71d) = 0;
        FUN_140f100f0(param_1);
      }
    }
  }
  if ((param_1[0xd3] != 0) && (param_1[0xd5] != 0)) {
    pwVar9 = L"default";
    local_f0 = 0;
    if (*(char *)((longlong)param_1 + 0x71b) == '\x04') {
      pwVar9 = L"eridian";
    }
    local_f8 = 0;
    lVar10 = -1;
    if (*pwVar9 != L'\0') {
      lVar16 = -1;
      do {
        lVar16 = lVar16 + 1;
      } while (pwVar9[lVar16] != L'\0');
      uVar15 = (int)lVar16 + 1;
      local_f0 = (ulonglong)uVar15;
      if (0 < (int)uVar15) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
      }
      FGenericPlatformString::Memcpy(local_f8,pwVar9,(longlong)(int)uVar15 * 2);
    }
    FUN_142088910(param_1[0xd3],&local_f8);
    if (local_f8 != 0) {
      FMemory::Free();
    }
    pwVar9 = L"default";
    local_f0 = 0;
    if (*(char *)((longlong)param_1 + 0x71b) == '\x04') {
      pwVar9 = L"eridian";
    }
    local_f8 = 0;
    if (*pwVar9 != L'\0') {
      do {
        lVar10 = lVar10 + 1;
      } while (pwVar9[lVar10] != L'\0');
      uVar15 = (int)lVar10 + 1;
      local_f0 = (ulonglong)uVar15;
      if (0 < (int)uVar15) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
      }
      FGenericPlatformString::Memcpy(local_f8,pwVar9,(longlong)(int)uVar15 * 2);
    }
    FUN_142088910(param_1[0xd5],&local_f8);
    if (local_f8 != 0) {
      FMemory::Free();
    }
  }
  if (((param_1[0xd4] != 0) && (param_1[0xd6] != 0)) && (param_1[0xce] != 0)) {
    if (*(longlong *)(param_1[0xce] + 0x7f8) == DAT_146b479a8) {
      if (param_1[0xd0] != 0) {
        pwVar13 = _guard_xfg_dispatch_icall_nop(L"&UGFxAmmoBar::UpdateCachedAmmoCounts",L"::");
        pwVar9 = pwVar14;
        while (pwVar3 = pwVar13, pwVar3 != (wchar_t *)0x0) {
          pwVar13 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
          pwVar9 = pwVar3;
        }
        FName::FName(&local_f8,pwVar9 + 2,1);
        TMulticastScriptDelegate<FWeakObjectPtr>::Remove(param_1[0xd0] + 400,param_1,local_f8);
      }
      param_1[0xd0] = 0;
      pwVar13 = _guard_xfg_dispatch_icall_nop(L"&UGFxAmmoBar::OnWeaponEquipped",L"::");
      pwVar9 = pwVar14;
      while (pwVar3 = pwVar13, pwVar3 != (wchar_t *)0x0) {
        pwVar13 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
        pwVar9 = pwVar3;
      }
      FName::FName(&local_f8,pwVar9 + 2,1);
      FUN_14074ba20(param_1[0xce] + 0x4f0,param_1,&LAB_140f02910,local_f8);
      *(undefined1 *)((longlong)param_1 + 0x71a) = 1;
      lVar10 = *(longlong *)param_1[0xd4];
      uVar8 = FUN_1404b03b0();
      (**(code **)(lVar10 + 0x2b0))(param_1[0xd4],uVar8,1,0);
      lVar10 = *(longlong *)param_1[0xd6];
      uVar8 = FUN_1404b03b0();
      (**(code **)(lVar10 + 0x2b0))(param_1[0xd6],uVar8,1,0);
    }
    else {
      *(undefined1 *)((longlong)param_1 + 0x71a) = 0;
      FUN_140f0f200(param_1);
    }
  }
  lVar10 = param_1[0xce];
  if (lVar10 != 0) {
    pwVar14 = (wchar_t *)
              (**(code **)(*(longlong *)(lVar10 + 0x460) + 0x10))
                        ((longlong *)(lVar10 + 0x460),*(undefined1 *)(lVar10 + 0x690));
  }
  if (((param_1[0xd7] != 0) && (pwVar14 != (wchar_t *)0x0)) && (*(longlong *)(pwVar14 + 0xc0) != 0))
  {
    FUN_142088cf0(param_1[0xd7],*(longlong *)(pwVar14 + 0xc0) + 0x50);
  }
  if (local_e8 != '\0') {
    if (param_1[0xcd] != 0) {
      FUN_140ccad40(param_1[0xcd],2);
    }
    (**(code **)(*param_1 + 0x578))(param_1,0);
  }
  return;
}



// FUNCTION 140f026c0 FUN_140f026c0 body=585 status=ok
// SIG undefined FUN_140f026c0(void)

void FUN_140f026c0(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  char cVar4;
  longlong *plVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  int *piVar8;
  int *piVar9;
  bool bVar10;
  undefined8 local_res10 [2];
  longlong local_res20;
  int local_48;
  int local_44;
  longlong local_40;
  int local_38;
  int local_34;
  longlong local_30;
  
  if (param_2 == 0) {
    bVar10 = param_3 == *(longlong *)(param_1 + 0x6f8);
  }
  else {
    bVar10 = *(char *)(param_2 + 0x62c) == *(char *)(param_1 + 0x630);
  }
  if (bVar10) {
    FWeakObjectPtr::operator=(&local_38,0);
    local_30 = 0;
    plVar5 = (longlong *)FName::FName(local_res10,L"OnSwitchedWeaponMode",1);
    FWeakObjectPtr::operator=(&local_38,param_1);
    local_30 = *plVar5;
    if (*(longlong *)(param_1 + 0x6f8) != 0) {
      local_48 = local_38;
      local_44 = local_34;
      local_40 = local_30;
      FUN_1430940a0(*(longlong *)(param_1 + 0x6f8),&local_48);
      *(undefined8 *)(param_1 + 0x6f8) = 0;
    }
    cVar4 = FUN_142045f70();
    if (cVar4 == '\0') {
      *(longlong *)(param_1 + 0x6f8) = param_2;
      if (param_2 != 0) {
        local_48 = local_38;
        local_44 = local_34;
        local_40 = local_30;
        FUN_143088820(param_2,&local_48);
        pwVar6 = _guard_xfg_dispatch_icall_nop(L"&UGFxCrosshairWidget::OnTargetLockChange",L"::");
        pwVar3 = (wchar_t *)0x0;
        while (pwVar2 = pwVar6, pwVar2 != (wchar_t *)0x0) {
          pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
          pwVar3 = pwVar2;
        }
        FName::FName(&local_res20,pwVar3 + 2,1);
        plVar5 = (longlong *)(param_2 + 0x560);
        FWeakObjectPtr::operator=(&local_48,0);
        local_40 = 0;
        FWeakObjectPtr::operator=(&local_48,param_1);
        local_40 = local_res20;
        local_res10[0] = 0;
        if ((local_res20 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_48), lVar7 != 0)) {
          UObject::FindFunction(lVar7,local_40);
        }
        piVar8 = (int *)*plVar5;
        iVar1 = *(int *)(param_2 + 0x568);
        for (piVar9 = piVar8; piVar9 != piVar8 + (longlong)iVar1 * 4; piVar9 = piVar9 + 4) {
          if ((((*piVar9 == local_48) && (piVar9[1] == local_44)) ||
              ((cVar4 = FWeakObjectPtr::IsValid(piVar9), cVar4 == '\0' &&
               (cVar4 = FWeakObjectPtr::IsValid(&local_48), cVar4 == '\0')))) &&
             (*(longlong *)(piVar9 + 2) == local_40)) {
            if ((int)((longlong)piVar9 - (longlong)piVar8 >> 4) != -1) goto LAB_140f028d1;
            break;
          }
        }
        iVar1 = *(int *)(param_2 + 0x568);
        *(int *)(param_2 + 0x568) = iVar1 + 1;
        if (*(int *)(param_2 + 0x56c) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar5,iVar1);
        }
        piVar8 = (int *)((longlong)iVar1 * 0x10 + *plVar5);
        *piVar8 = local_48;
        piVar8[1] = local_44;
        *(longlong *)(piVar8 + 2) = local_40;
LAB_140f028d1:
        TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar5);
      }
      FUN_140f11890(param_1);
      FUN_140f10900(param_1);
      FUN_140f08b10(param_1);
    }
  }
  return;
}



// FUNCTION 140f02920 FUN_140f02920 body=129 status=ok
// SIG undefined FUN_140f02920(void)

void FUN_140f02920(longlong param_1)

{
  longlong local_18 [2];
  
  FUN_140f0feb0();
  FUN_140f0f200(param_1);
  FUN_140f0fb60(param_1);
  if (*(longlong *)(param_1 + 0x6d0) != 0) {
    local_18[1] = 0xb;
    local_18[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Memcpy(local_18[0],L"modeSwitch",0x16);
    FUN_142088910(*(undefined8 *)(param_1 + 0x6d0),local_18);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140f029d0 FUN_140f029d0 body=368 status=ok
// SIG undefined FUN_140f029d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f029d0(undefined8 param_1,undefined1 param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
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
  uVar3 = 0;
  uStack_c0 = CONCAT31(uStack_c0._1_3_,param_2);
  local_88 = (longlong *)0x0;
  local_78 = 0;
  local_c8 = param_1;
  puVar2 = (undefined8 *)FUN_140438ef0(0x18,local_a8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_143f77c18;
    *(undefined4 *)(puVar2 + 1) = (undefined4)local_c8;
    *(undefined4 *)((longlong)puVar2 + 0xc) = local_c8._4_4_;
    *(undefined4 *)(puVar2 + 2) = uStack_c0;
    *(undefined4 *)((longlong)puVar2 + 0x14) = uStack_bc;
  }
  local_b8[0] = thunk_FUN_140ed34a0;
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



// FUNCTION 140f02b40 FUN_140f02b40 body=45 status=ok
// SIG undefined FUN_140f02b40(void)

void FUN_140f02b40(longlong param_1)

{
  undefined2 local_res8 [16];
  
  if (local_res8 != (undefined2 *)(param_1 + 0x649)) {
    *(undefined2 *)(param_1 + 0x649) = 0x100;
  }
  if (local_res8 != (undefined2 *)(param_1 + 0x64f)) {
    *(undefined2 *)(param_1 + 0x64f) = 0x101;
  }
  return;
}



// FUNCTION 140f02b70 FUN_140f02b70 body=56 status=ok
// SIG undefined FUN_140f02b70(void)

void FUN_140f02b70(undefined8 param_1,float *param_2,longlong param_3,longlong param_4)

{
  float fVar1;
  
  *param_2 = *(float *)(param_3 + 4) / *(float *)(param_4 + 4);
  fVar1 = (float)FUN_140ee7240();
  *param_2 = (1.0 / fVar1) * *param_2;
  return;
}



// FUNCTION 140f02bb0 FUN_140f02bb0 body=363 status=ok
// SIG undefined FUN_140f02bb0(void)

void FUN_140f02bb0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  longlong local_res8;
  longlong *local_48;
  undefined8 local_40;
  longlong local_38 [2];
  
  if ((param_1 != 0) && (*(int *)(param_2 + 8) != 0)) {
    plVar1 = (longlong *)0x0;
    if (param_2[6] == 0) {
      plVar1 = param_2 + 2;
    }
    if (plVar1 != (longlong *)0x0 || param_2[6] != 0) {
      iVar5 = -1;
      while( true ) {
        iVar5 = iVar5 + 1;
        local_48 = (longlong *)0x0;
        local_40 = 0;
        FString::PrintfImpl(local_38,L"divide%d",iVar5);
        lVar2 = FUN_140ecbdf0(param_1,local_38,0,6,&local_48);
        if (local_38[0] != 0) {
          FMemory::Free();
        }
        plVar1 = local_48;
        for (iVar4 = (int)local_40; iVar4 != 0; iVar4 = iVar4 + -1) {
          if (*plVar1 != 0) {
            FMemory::Free();
          }
          plVar1 = plVar1 + 2;
        }
        if (local_48 != (longlong *)0x0) {
          FMemory::Free(local_48);
        }
        if (lVar2 == 0) break;
        local_res8 = lVar2;
        if (*(int *)(param_2 + 8) == 0) {
LAB_140f02cd6:
          (*(code *)*param_2)(0,&local_res8);
        }
        else {
          plVar1 = (longlong *)param_2[6];
          if ((longlong *)param_2[6] == (longlong *)0x0) {
            plVar1 = param_2 + 2;
          }
          if (plVar1 == (longlong *)0x0) goto LAB_140f02cd6;
          uVar3 = (**(code **)(*plVar1 + 8))();
          (*(code *)*param_2)(uVar3,&local_res8);
        }
      }
    }
  }
  return;
}



// FUNCTION 140f02d20 FUN_140f02d20 body=438 status=ok
// SIG undefined FUN_140f02d20(void)

void FUN_140f02d20(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  longlong local_38 [2];
  undefined1 local_28 [8];
  longlong *local_20;
  
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (local_28,L"FIGHT!",L"GFxDuelingWidget",L"FightText");
  local_38[1] = 5;
  local_38[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
  FGenericPlatformString::Memcpy(local_38[0],L"duel",10);
  FUN_142088910(param_1,local_38);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  plVar3 = *(longlong **)(param_1 + 0x178);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar3[1];
    bVar6 = iVar5 == 0;
    if (bVar6) {
      *(int *)(plVar3 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (!bVar6) {
      LOCK();
      bVar6 = iVar5 == (int)plVar3[1];
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar6) {
        if (plVar3 != (longlong *)0x0) {
          if (*(longlong *)(param_1 + 0x170) != 0) {
            FUN_14203e030(*(longlong *)(param_1 + 0x170),L"play");
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
        break;
      }
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar6 = iVar5 == 0;
      if (bVar6) {
        *(int *)(plVar3 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  if ((*(longlong *)(param_1 + 0x188) != 0) && (*(longlong *)(param_1 + 400) != 0)) {
    piVar2 = (int *)(*(longlong *)(param_1 + 400) + 8);
    LOCK();
    iVar5 = *piVar2;
    if (iVar5 == 0) {
      *piVar2 = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (0 < iVar5) {
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x180,local_28,1,0);
    }
  }
  if ((*(longlong *)(param_1 + 0x1a0) != 0) && (*(longlong *)(param_1 + 0x1a8) != 0)) {
    piVar2 = (int *)(*(longlong *)(param_1 + 0x1a8) + 8);
    LOCK();
    iVar5 = *piVar2;
    if (iVar5 == 0) {
      *piVar2 = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (0 < iVar5) {
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x198,local_28,1,0);
    }
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_20 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  return;
}



// FUNCTION 140f02f20 FUN_140f02f20 body=94 status=ok
// SIG undefined FUN_140f02f20(void)

void FUN_140f02f20(undefined8 param_1)

{
  longlong local_18 [2];
  
  local_18[1] = 4;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],&DAT_1445eef88,8);
  FUN_142088910(param_1,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140f02f80 FUN_140f02f80 body=534 status=ok
// SIG undefined FUN_140f02f80(void)

void FUN_140f02f80(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  wchar_t *pwVar9;
  bool bVar10;
  undefined1 local_res8 [16];
  undefined1 local_res18 [8];
  longlong local_58 [3];
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  if (*(int *)(param_1 + 0x350) != param_2) {
    local_58[0] = 0;
    local_58[1] = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
    FGenericPlatformString::Memcpy(local_58[0],L"countdown",0x14);
    FUN_142088910(param_1,local_58);
    if (local_58[0] != 0) {
      FMemory::Free();
    }
    *(int *)(param_1 + 0x350) = param_2;
    plVar3 = *(longlong **)(param_1 + 0x1b8);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar10 = iVar5 == 0;
      if (bVar10) {
        *(int *)(plVar3 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
      while (!bVar10) {
        LOCK();
        bVar10 = iVar5 == (int)plVar3[1];
        if (bVar10) {
          *(int *)(plVar3 + 1) = iVar5 + 1;
        }
        UNLOCK();
        if (bVar10) {
          if (plVar3 != (longlong *)0x0) {
            if (*(longlong *)(param_1 + 0x1b0) != 0) {
              FUN_14203e030(*(longlong *)(param_1 + 0x1b0),L"play");
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
          break;
        }
        LOCK();
        iVar5 = (int)plVar3[1];
        bVar10 = iVar5 == 0;
        if (bVar10) {
          *(int *)(plVar3 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
      }
    }
    if ((*(longlong *)(param_1 + 0x1c8) != 0) && (*(longlong *)(param_1 + 0x1d0) != 0)) {
      piVar2 = (int *)(*(longlong *)(param_1 + 0x1d0) + 8);
      LOCK();
      iVar5 = *piVar2;
      if (iVar5 == 0) {
        *piVar2 = 0;
        iVar5 = 0;
      }
      UNLOCK();
      if (0 < iVar5) {
        local_58[2] = 0;
        plStack_40 = (longlong *)0x0;
        uVar6 = FText::AsNumber(local_38,*(undefined4 *)(param_1 + 0x350),0,local_58 + 2);
        UMistDebugEntityScreen::InspectEntity(param_1 + 0x1c0,uVar6,1,0);
        if (local_30 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_30 + 1;
          lVar4 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_30)(local_30);
            LOCK();
            piVar2 = (int *)((longlong)local_30 + 0xc);
            iVar5 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*local_30 + 8))(local_30,1);
            }
          }
        }
        plVar3 = plStack_40;
        if (plStack_40 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_40 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*plStack_40)(plStack_40);
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
    if (*(int *)(param_1 + 0x350) == 1) {
      pwVar9 = L"Duel_Begin";
      puVar8 = local_res8;
    }
    else {
      if (*(int *)(param_1 + 0x350) < 1) {
        return;
      }
      pwVar9 = L"Duel_Countdown_Tone";
      puVar8 = local_res18;
    }
    puVar7 = (undefined8 *)FName::FName(puVar8,pwVar9,1);
    FUN_142f0ad20(param_1,*puVar7);
  }
  return;
}



// FUNCTION 140f031a0 FUN_140f031a0 body=150 status=ok
// SIG undefined FUN_140f031a0(void)

void FUN_140f031a0(undefined8 param_1,undefined4 param_2)

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
    *puVar1 = &PTR_FUN_144213c48;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_res8;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_resc;
    *(undefined4 *)(puVar1 + 3) = param_2;
  }
  local_58[0] = &LAB_140ee0850;
  FUN_14208c5d0(param_1,local_58);
  return;
}



// FUNCTION 140f03240 FUN_140f03240 body=264 status=ok
// SIG undefined FUN_140f03240(void)

void FUN_140f03240(longlong *param_1,byte param_2)

{
  byte bVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  byte local_28 [8];
  longlong *local_20;
  
  if ((param_1 != (longlong *)0x0) && (lVar3 = (**(code **)(*param_1 + 0x148))(), lVar3 != 0)) {
    plVar4 = (longlong *)UWorld::GetFirstPlayerController(lVar3);
    plVar8 = (longlong *)0x0;
    plVar9 = plVar8;
    plVar6 = plVar8;
    if (plVar4 != (longlong *)0x0) {
      lVar5 = FUN_14145f370();
      if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
          lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        plVar6 = (longlong *)FUN_140cff1b0(plVar4);
        plVar9 = plVar4;
      }
    }
    uVar7 = UWorld::GetGameState<APVPGameState>(lVar3);
    if (plVar6 != (longlong *)0x0) {
      if ((char)plVar9[0x25] == '\x03') {
        bVar1 = 4;
        if (param_2 != 4) {
          plVar8 = param_1;
          bVar1 = param_2;
        }
        FUN_140cc25f0(uVar7,plVar8,bVar1);
      }
      else if (plVar6[0xe2] != 0) {
        local_28[0] = param_2;
        local_20 = param_1;
        FUN_140ee8340(plVar6[0xe2],local_28);
      }
    }
  }
  return;
}



// FUNCTION 140f03350 FUN_140f03350 body=456 status=ok
// SIG undefined FUN_140f03350(void)

void FUN_140f03350(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  bool bVar7;
  undefined1 local_res20 [8];
  longlong local_48 [2];
  undefined1 local_38 [8];
  longlong *local_30;
  
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (local_38,L"DEFEAT!",L"GFxDuelingWidget",L"LoseText");
  local_48[1] = 5;
  local_48[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
  FGenericPlatformString::Memcpy(local_48[0],L"lose",10);
  FUN_142088910(param_1,local_48);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  plVar3 = *(longlong **)(param_1 + 0x238);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar3[1];
    bVar7 = iVar5 == 0;
    if (bVar7) {
      *(int *)(plVar3 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (!bVar7) {
      LOCK();
      bVar7 = iVar5 == (int)plVar3[1];
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar7) {
        if (plVar3 != (longlong *)0x0) {
          if (*(longlong *)(param_1 + 0x230) != 0) {
            FUN_14203e030(*(longlong *)(param_1 + 0x230),L"play");
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
        break;
      }
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar7 = iVar5 == 0;
      if (bVar7) {
        *(int *)(plVar3 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  if ((*(longlong *)(param_1 + 0x248) != 0) && (*(longlong *)(param_1 + 0x250) != 0)) {
    piVar2 = (int *)(*(longlong *)(param_1 + 0x250) + 8);
    LOCK();
    iVar5 = *piVar2;
    if (iVar5 == 0) {
      *piVar2 = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (0 < iVar5) {
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x240,local_38,1,0);
    }
  }
  if ((*(longlong *)(param_1 + 0x260) != 0) && (*(longlong *)(param_1 + 0x268) != 0)) {
    piVar2 = (int *)(*(longlong *)(param_1 + 0x268) + 8);
    LOCK();
    iVar5 = *piVar2;
    if (iVar5 == 0) {
      *piVar2 = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (0 < iVar5) {
      UMistDebugEntityScreen::InspectEntity(param_1 + 600,local_38,1,0);
    }
  }
  puVar6 = (undefined8 *)FName::FName(local_res20,L"Duel_Loss",1);
  FUN_142f0ad20(param_1,*puVar6);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_30 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  return;
}



// FUNCTION 140f03520 FUN_140f03520 body=387 status=ok
// SIG undefined FUN_140f03520(void)

void FUN_140f03520(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong local_18 [2];
  
  if (*(int *)(param_1 + 0x6b8) < 1) {
    FUN_140f05790(param_1,1);
    return;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x6b0);
  iVar2 = 0;
  if (*(char *)((longlong)puVar1 + 0xc) == '\0') {
    if (*(char *)((longlong)puVar1 + 0xd) != '\0') {
      plVar3 = (longlong *)(param_1 + 0x670);
      do {
        lVar4 = *plVar3;
        if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x1d0) == 0)) goto LAB_140f035ab;
        iVar2 = iVar2 + 1;
        plVar3 = plVar3 + 1;
      } while (iVar2 < 3);
      goto LAB_140f03583;
    }
    if (2 < *(uint *)(puVar1 + 1)) goto LAB_140f03583;
    lVar4 = *(longlong *)(param_1 + 0x670 + (longlong)(int)*(uint *)(puVar1 + 1) * 8);
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x688);
  }
LAB_140f035ab:
  if (lVar4 != 0) {
    if (*(char *)((longlong)puVar1 + 0xd) != '\0') {
      FUN_140f09b90(lVar4,*puVar1);
      local_18[0] = 0;
      local_18[1] = 8;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      FGenericPlatformString::Memcpy(local_18[0],L"slideIn",0x10);
      FUN_142088910(lVar4,local_18);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
      *(undefined1 *)(param_1 + 0x6c0) = 1;
      *(int *)(param_1 + 0x6c4) = *(int *)(param_1 + 0x6c4) + 1;
      return;
    }
    local_18[0] = 0;
    local_18[1] = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Memcpy(local_18[0],L"slideOut",0x12);
    FUN_142088910(lVar4,local_18);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    *(undefined1 *)(param_1 + 0x6c0) = 2;
    *(int *)(param_1 + 0x6c4) = *(int *)(param_1 + 0x6c4) + 1;
    return;
  }
LAB_140f03583:
  FUN_140ee2540(param_1);
  return;
}



// FUNCTION 140f036b0 FUN_140f036b0 body=377 status=ok
// SIG undefined FUN_140f036b0(void)

void FUN_140f036b0(longlong param_1)

{
  char cVar1;
  wchar_t *pwVar2;
  undefined8 uVar3;
  longlong local_18 [2];
  
  if ((*(char *)(param_1 + 0x6f0) == '\0') &&
     (*(undefined1 *)(param_1 + 0x6f0) = 1, 1 < *(int *)(param_1 + 0x6e8))) {
    local_18[1] = 0xb;
    *(undefined4 *)(param_1 + 0x718) = 0;
    local_18[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    uVar3 = 0x16;
    pwVar2 = L"updateIcon";
  }
  else {
    if (*(char *)(param_1 + 0x690) == '\0') {
      *(undefined1 *)(param_1 + 0x690) = 1;
      cVar1 = FText::IsEmpty(param_1 + 0x678);
      if (cVar1 == '\0') {
        local_18[1] = 0xd;
        *(undefined4 *)(param_1 + 0x718) = 0;
        local_18[0] = 0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
        uVar3 = 0x1a;
        pwVar2 = L"updateHeader";
        goto LAB_140f037f7;
      }
    }
    if (*(char *)(param_1 + 0x6c8) == '\0') {
      *(undefined1 *)(param_1 + 0x6c8) = 1;
      cVar1 = FText::IsEmpty(param_1 + 0x6b0);
      if (cVar1 == '\0') {
        local_18[1] = 0xb;
        *(undefined4 *)(param_1 + 0x718) = 0;
        local_18[0] = 0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
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
    local_18[1] = 0xf;
    *(undefined4 *)(param_1 + 0x718) = 0;
    local_18[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    uVar3 = 0x1e;
    pwVar2 = L"updateProgress";
  }
LAB_140f037f7:
  FGenericPlatformString::Memcpy(local_18[0],pwVar2,uVar3);
  FUN_142088910(*(undefined8 *)(param_1 + 0x738),local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140f03830 FUN_140f03830 body=583 status=ok
// SIG undefined FUN_140f03830(void)

void FUN_140f03830(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  if (((*(char *)(param_1 + 0x260) == '\0') && (*(int *)(param_1 + 0x1cc) == 0)) &&
     (0 < *(int *)(param_1 + 0x238))) {
    puVar1 = *(undefined8 **)(param_1 + 0x230);
    lVar2 = FUN_140ee6970(param_1,*puVar1);
    if (lVar2 != 0) {
      FUN_140f031a0(param_1,*(undefined4 *)(puVar1 + 1));
      if (*(char *)(param_1 + 0x251) != '\0') {
        FUN_142f0ad20(param_1,puVar1[3]);
      }
      puVar7 = (undefined8 *)(lVar2 + 0x28);
      if (*(longlong *)(param_1 + 600) != *(longlong *)(lVar2 + 0x28)) {
        AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x1a8));
        LOCK();
        *(int *)(param_1 + 0x1b4) = *(int *)(param_1 + 0x1b4) + 1;
        UNLOCK();
        uVar4 = 0;
        plVar5 = *(longlong **)(param_1 + 0x198);
        uVar6 = (longlong)*(int *)(param_1 + 0x1a0) & 0x1fffffffffffffff;
        if (plVar5 + *(int *)(param_1 + 0x1a0) < plVar5) {
          uVar6 = uVar4;
        }
        if (uVar6 != 0) {
          do {
            if (*plVar5 != 0) {
              FUN_1410a5000(*plVar5,puVar7);
            }
            plVar5 = plVar5 + 1;
            uVar4 = uVar4 + 1;
          } while (uVar4 != uVar6);
        }
        ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x1a8));
        LOCK();
        *(int *)(param_1 + 0x1b4) = *(int *)(param_1 + 0x1b4) + -1;
        UNLOCK();
        FWeakObjectPtr::operator=(&local_res8,param_1);
        local_48 = 0;
        local_38 = 0;
        puVar3 = (undefined8 *)FUN_140438ef0(0x20,local_68);
        if (puVar3 != (undefined8 *)0x0) {
          *puVar3 = &PTR_FUN_144605cf8;
          puVar3[1] = param_1;
          *(undefined4 *)(puVar3 + 2) = local_res8;
          *(undefined4 *)((longlong)puVar3 + 0x14) = local_resc;
          puVar3[3] = puVar7;
        }
        local_78[0] = &LAB_140ee0930;
        FUN_14208c5d0(param_1,local_78);
        *(undefined8 *)(param_1 + 600) = *puVar7;
      }
      if (*(char *)(param_1 + 0x250) != '\0') {
        *(undefined4 *)(param_1 + 0x1cc) = 1;
        FUN_140f086b0(param_1,*(undefined4 *)(puVar1 + 2),1);
        FUN_140ef1a20(param_1);
        return;
      }
      if (*(int *)(param_1 + 0x1c8) != *(int *)((longlong)puVar1 + 0xc)) {
        FUN_140f086b0(param_1,*(int *)((longlong)puVar1 + 0xc),1);
      }
      FUN_140f086b0(param_1,*(undefined4 *)(puVar1 + 2),0);
      *(undefined4 *)(param_1 + 0x1cc) = 1;
    }
  }
  return;
}



// FUNCTION 140f03a80 FUN_140f03a80 body=511 status=ok
// SIG undefined FUN_140f03a80(void)

void FUN_140f03a80(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  bool bVar7;
  undefined1 local_res20 [8];
  longlong local_48 [2];
  undefined1 local_38 [8];
  longlong *local_30;
  
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (local_38,L"VICTORY!",L"GFxDuelingWidget",L"WinText");
  local_48[1] = 4;
  local_48[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
  FGenericPlatformString::Memcpy(local_48[0],&DAT_1445ef370,8);
  FUN_142088910(param_1,local_48);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  plVar3 = *(longlong **)(param_1 + 0x1e0);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar3[1];
    bVar7 = iVar5 == 0;
    if (bVar7) {
      *(int *)(plVar3 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (!bVar7) {
      LOCK();
      bVar7 = iVar5 == (int)plVar3[1];
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar7) {
        if (plVar3 != (longlong *)0x0) {
          if (*(longlong *)(param_1 + 0x1d8) != 0) {
            FUN_14203e030(*(longlong *)(param_1 + 0x1d8),L"play");
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
        break;
      }
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar7 = iVar5 == 0;
      if (bVar7) {
        *(int *)(plVar3 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  if ((*(longlong *)(param_1 + 0x1f0) != 0) && (*(longlong *)(param_1 + 0x1f8) != 0)) {
    piVar2 = (int *)(*(longlong *)(param_1 + 0x1f8) + 8);
    LOCK();
    iVar5 = *piVar2;
    if (iVar5 == 0) {
      *piVar2 = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (0 < iVar5) {
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x1e8,local_38,1,0);
    }
  }
  if ((*(longlong *)(param_1 + 0x208) != 0) && (*(longlong *)(param_1 + 0x210) != 0)) {
    piVar2 = (int *)(*(longlong *)(param_1 + 0x210) + 8);
    LOCK();
    iVar5 = *piVar2;
    if (iVar5 == 0) {
      *piVar2 = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (0 < iVar5) {
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x200,local_38,1,0);
    }
  }
  if ((*(longlong *)(param_1 + 0x220) != 0) && (*(longlong *)(param_1 + 0x228) != 0)) {
    piVar2 = (int *)(*(longlong *)(param_1 + 0x228) + 8);
    LOCK();
    iVar5 = *piVar2;
    if (iVar5 == 0) {
      *piVar2 = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (0 < iVar5) {
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x218,local_38,1,0);
    }
  }
  puVar6 = (undefined8 *)FName::FName(local_res20,L"Duel_Win",1);
  FUN_142f0ad20(param_1,*puVar6);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_30 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  return;
}



// FUNCTION 140f03c80 FUN_140f03c80 body=2252 status=ok
// SIG undefined FUN_140f03c80(void)

void FUN_140f03c80(longlong param_1,undefined8 *param_2,char param_3,int param_4,uint param_5)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  DWORD DVar5;
  longlong *plVar6;
  void *pvVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  void *pvVar12;
  undefined2 *puVar13;
  longlong *plVar14;
  int iVar15;
  undefined2 *puVar16;
  undefined1 uVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  undefined8 *puVar21;
  undefined2 *puVar22;
  undefined8 *puVar23;
  uint uVar24;
  longlong *plVar25;
  bool bVar26;
  undefined4 uVar27;
  void *local_180;
  undefined8 local_178;
  undefined8 local_170;
  int local_168;
  uint local_164;
  undefined8 *local_160;
  undefined1 local_158 [90];
  undefined1 local_fe;
  
  local_160 = param_2;
  FWeakObjectPtr::operator=(&local_170,0);
  plVar9 = (longlong *)(param_1 + 0x160);
  *(undefined4 *)(param_1 + 0x188) = (undefined4)local_170;
  *(undefined4 *)(param_1 + 0x18c) = local_170._4_4_;
  FUN_140ebe6a0(plVar9,0);
  plVar25 = (longlong *)0x0;
  uVar24 = 0;
  plVar6 = plVar25;
  if (*(int *)(param_2 + 8) != 0) {
    plVar14 = (longlong *)param_2[6];
    if ((longlong *)param_2[6] == (longlong *)0x0) {
      plVar14 = param_2 + 2;
    }
    if (plVar14 != (longlong *)0x0) {
      plVar6 = (longlong *)(**(code **)(*plVar14 + 8))();
    }
  }
  (*(code *)*param_2)(plVar6,plVar9);
  iVar15 = *(int *)(param_1 + 0x168);
  if ((param_4 == 0) && (param_4 = *(int *)(param_1 + 0xe8), *(int *)(param_1 + 0xe8) <= iVar15)) {
    param_4 = iVar15;
  }
  plVar6 = (longlong *)(ulonglong)param_5;
  if (((int)param_5 < 0) && (plVar6 = plVar25, -1 < param_4 - iVar15)) {
    plVar6 = (longlong *)(ulonglong)(uint)(param_4 - iVar15);
  }
  uVar3 = (*(int *)(param_1 + 0xf0) - iVar15) - (int)plVar6;
  uVar18 = uVar24;
  if (-1 < (int)uVar3) {
    uVar18 = uVar3;
  }
  if (0 < (int)plVar6) {
    FUN_140edefb0(plVar9);
  }
  if (0 < (int)uVar18) {
    local_180 = (void *)0x0;
    local_178 = 0;
    FUN_140edefb0(&local_180,uVar18);
    pvVar12 = local_180;
    iVar15 = (int)local_178;
    lVar19 = (longlong)(int)local_178;
    for (pvVar7 = local_180; pvVar7 != (void *)((longlong)local_180 + lVar19 * 0x110);
        pvVar7 = (void *)((longlong)pvVar7 + 0x110)) {
      *(undefined1 *)((longlong)pvVar7 + 0x59) = 1;
    }
    if ((int)local_178 != 0) {
      iVar4 = *(int *)(param_1 + 0x168);
      if (*(int *)(param_1 + 0x16c) < (int)local_178 + iVar4) {
        TArray<FTTLMissionBriefingParamRow,FDefaultAllocator>::ResizeTo(plVar9);
        iVar4 = *(int *)(param_1 + 0x168);
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)iVar4 * 0x110 + *plVar9),pvVar12,lVar19 * 0x110);
      *(int *)(param_1 + 0x168) = *(int *)(param_1 + 0x168) + iVar15;
      local_178 = local_178 & 0xffffffff00000000;
    }
    FUN_140e9bfd0(&local_180);
  }
  iVar15 = *(int *)(param_1 + 0x168);
  if (*(longlong *)(param_1 + 0x170) == 0) {
    iVar4 = 1;
    lVar19 = 0;
  }
  else {
    iVar4 = FUN_142eb73e0();
    lVar19 = *(longlong *)(param_1 + 0x170);
  }
  iVar15 = iVar15 % iVar4;
  uVar18 = uVar24;
  if (iVar15 != 0) {
    if (lVar19 == 0) {
      iVar4 = 1;
      lVar19 = 0;
    }
    else {
      iVar4 = FUN_142eb73e0();
      lVar19 = *(longlong *)(param_1 + 0x170);
    }
    uVar18 = 0;
    if (iVar15 != iVar4) {
      if (lVar19 == 0) {
        iVar4 = 1;
      }
      else {
        iVar4 = FUN_142eb73e0();
      }
      uVar18 = iVar4 - iVar15;
    }
  }
  if ((int)(*(int *)(param_1 + 0x168) + uVar18) < *(int *)(param_1 + 0xf4)) {
    uVar18 = *(int *)(param_1 + 0xf4) - *(int *)(param_1 + 0x168);
  }
  if (0 < (int)uVar18) {
    FUN_140ed0240(local_158);
    local_fe = 1;
    local_180 = (void *)0x0;
    local_178 = 0;
    FUN_140ee4200(&local_180,uVar18);
    uVar20 = (ulonglong)uVar18;
    pvVar7 = local_180;
    iVar15 = (int)local_178;
    do {
      lVar19 = (longlong)iVar15;
      iVar4 = iVar15 + 1;
      local_178 = CONCAT44(local_178._4_4_,iVar4);
      if (local_178._4_4_ < iVar4) {
        TArray<FTTLMissionBriefingParamRow,FDefaultAllocator>::ResizeGrow(&local_180,iVar15);
        pvVar7 = local_180;
        iVar4 = (int)local_178;
      }
      iVar15 = iVar4;
      pvVar12 = (void *)(lVar19 * 0x110 + (longlong)pvVar7);
      if (pvVar12 != (void *)0x0) {
        FUN_140e9a4f0(pvVar12,local_158);
      }
      uVar20 = uVar20 - 1;
    } while (uVar20 != 0);
    if (iVar15 != 0) {
      iVar4 = *(int *)(param_1 + 0x168);
      if (*(int *)(param_1 + 0x16c) < iVar4 + iVar15) {
        TArray<FTTLMissionBriefingParamRow,FDefaultAllocator>::ResizeTo(param_1 + 0x160);
        iVar4 = *(int *)(param_1 + 0x168);
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)iVar4 * 0x110 + *(longlong *)(param_1 + 0x160)),pvVar7,
                 (longlong)iVar15 * 0x110);
      local_178 = local_178 & 0xffffffff00000000;
      *(int *)(param_1 + 0x168) = *(int *)(param_1 + 0x168) + iVar15;
    }
    FUN_140e9bfd0(&local_180);
    FUN_140e9c360(local_158);
  }
  if (*(longlong *)(param_1 + 0x170) == 0) goto LAB_140f044d2;
  local_164 = FUN_142eb7a00();
  uVar27 = FUN_142eedeb0(*(longlong *)(param_1 + 0x170) + 0x2b8);
  puVar23 = (undefined8 *)(param_1 + 0x100);
  iVar15 = *(int *)(param_1 + 0x168);
  local_170 = puVar23;
  iVar4 = FUN_142eb7440(*(undefined8 *)(param_1 + 0x170));
  puVar22 = &DAT_143f3eda8;
  if (iVar15 < iVar4) {
    if (*(int *)(param_1 + 0x108) == 0) {
      puVar16 = &DAT_143f3eda8;
    }
    else {
      puVar16 = (undefined2 *)*puVar23;
    }
    if (*(int *)(param_1 + 0x118) == 0) {
      puVar13 = &DAT_143f3eda8;
    }
    else {
      puVar13 = *(undefined2 **)(param_1 + 0x110);
    }
    iVar15 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar13,puVar16);
    if (iVar15 != 0) goto LAB_140f0406e;
    iVar15 = *(int *)(param_1 + 0x168);
    iVar4 = FUN_142eb7440(*(undefined8 *)(param_1 + 0x170));
    uVar18 = iVar4 - iVar15;
    if (0 < (int)uVar18) {
      uVar20 = (ulonglong)uVar18;
      do {
        iVar15 = FUN_142eb7440(*(undefined8 *)(param_1 + 0x170));
        uVar8 = FUN_142eb6a30(*(undefined8 *)(param_1 + 0x170),iVar15 + -1);
        FUN_142ed0bb0(*(undefined8 *)(param_1 + 0x170),uVar8,0);
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
  }
  else {
LAB_140f0406e:
    if (*(int *)(param_1 + 0x108) == 0) {
      puVar16 = &DAT_143f3eda8;
    }
    else {
      puVar16 = (undefined2 *)*puVar23;
    }
    if (*(int *)(param_1 + 0x118) != 0) {
      puVar22 = *(undefined2 **)(param_1 + 0x110);
    }
    local_170 = puVar23;
    iVar15 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar22,puVar16);
    lVar19 = DAT_146872278;
    if (iVar15 != 0) {
      cVar2 = FUN_1415ad720(&DAT_1468e2448);
      if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
        DVar5 = GetCurrentThreadId();
        plVar9 = (longlong *)0x1;
        if (DVar5 == DAT_1468c21c0) goto LAB_140f040d6;
      }
      else {
LAB_140f040d6:
        plVar9 = plVar25;
      }
      if (*(int *)(lVar19 + (longlong)plVar9 * 4) == 0) {
        FUN_142ecffe0(*(undefined8 *)(param_1 + 0x170));
        local_170 = puVar23;
      }
      else {
        FUN_142ed0540();
        local_170 = puVar23;
      }
    }
  }
  lVar19 = DAT_146872278;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar2 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar5 = GetCurrentThreadId(), plVar9 = (longlong *)0x1, DVar5 == DAT_1468c21c0)) {
    plVar9 = plVar25;
  }
  local_168 = *(int *)(lVar19 + (longlong)plVar9 * 4);
  if (0 < *(int *)(param_1 + 0x168)) {
    local_180 = (void *)0x0;
    puVar23 = (undefined8 *)(param_1 + 0x100);
    plVar9 = plVar25;
    do {
      iVar15 = local_168;
      bVar1 = false;
      lVar19 = *(longlong *)(param_1 + 0x160) + (longlong)local_180;
      iVar4 = FUN_142eb7440(*(undefined8 *)(param_1 + 0x170));
      if ((int)plVar9 < iVar4) {
        plVar6 = (longlong *)FUN_142eb6a30(*(undefined8 *)(param_1 + 0x170),plVar9);
        if (plVar6 != (longlong *)0x0) {
          lVar10 = FUN_141324a80();
          if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
              != lVar10 + 0x88)) {
            bVar26 = false;
          }
          else {
            bVar26 = true;
          }
          if (bVar26) goto LAB_140f042ea;
        }
      }
      else {
        cVar2 = FWeakObjectPtr::IsValid(lVar19 + 0xdc);
        if ((cVar2 == '\0') && (cVar2 = FWeakObjectPtr::IsValid(lVar19 + 0x5c), cVar2 == '\0')) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        puVar21 = (undefined8 *)(param_1 + 0x110);
        if (!bVar1) {
          puVar21 = puVar23;
        }
        if (iVar15 == 0) {
          plVar6 = plVar25;
          if (*(longlong *)(param_1 + 0x120) != 0) {
            plVar11 = (longlong *)FUN_141324a80();
            for (plVar14 = *(longlong **)(param_1 + 0x120);
                (plVar6 = plVar25, plVar14 != (longlong *)0x0 &&
                (plVar6 = *(longlong **)(param_1 + 0x120), plVar14 != plVar11));
                plVar14 = (longlong *)plVar14[6]) {
            }
          }
          plVar6 = (longlong *)FUN_142ebcee0(*(undefined8 *)(param_1 + 0x170),puVar21,plVar6,1);
        }
        else {
          plVar6 = plVar25;
          if (*(longlong *)(param_1 + 0x120) != 0) {
            plVar11 = (longlong *)FUN_141324a80();
            for (plVar14 = *(longlong **)(param_1 + 0x120);
                (plVar6 = plVar25, plVar14 != (longlong *)0x0 &&
                (plVar6 = *(longlong **)(param_1 + 0x120), plVar14 != plVar11));
                plVar14 = (longlong *)plVar14[6]) {
            }
          }
          uVar8 = *(undefined8 *)(param_1 + 0x170);
          if (plVar6 != (longlong *)0x0) {
            plVar11 = (longlong *)URemnantGameInstance::GetPrivateStaticClass();
            plVar14 = plVar6;
            do {
              if (plVar14 == plVar11) goto LAB_140f04256;
              plVar14 = (longlong *)plVar14[6];
            } while (plVar14 != (longlong *)0x0);
          }
          plVar6 = (longlong *)FUN_141324a80();
LAB_140f04256:
          plVar6 = (longlong *)FUN_142ebd5b0(uVar8,puVar21,plVar6);
        }
        if (plVar6 == (longlong *)0x0) {
LAB_140f042e4:
          plVar6 = plVar25;
        }
        else {
          lVar10 = FUN_141324a80();
          if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
              != lVar10 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (!bVar1) goto LAB_140f042e4;
        }
        bVar1 = true;
LAB_140f042ea:
        if (plVar6 != (longlong *)0x0) {
          lVar10 = (**(code **)(*plVar6 + 0x340))(plVar6);
          cVar2 = operator!=<UPrimitiveComponent,UPrimitiveComponent,FWeakObjectPtr>
                            (lVar10 + 0x5c,lVar19 + 0x5c);
          if (cVar2 == '\0') {
            cVar2 = operator!=<UPrimitiveComponent,UPrimitiveComponent,FWeakObjectPtr>
                              (lVar10 + 0xdc,lVar19 + 0xdc);
            if (cVar2 == '\0') {
              if (*(char *)(lVar10 + 0x59) == *(char *)(lVar19 + 0x59)) {
                if (*(int *)(lVar10 + 0xd8) == *(int *)(lVar19 + 0xd8)) {
                  bVar26 = *(char *)(lVar10 + 0x5a) == *(char *)(lVar19 + 0x5a);
                }
                else {
                  bVar26 = false;
                }
              }
              else {
                bVar26 = false;
              }
            }
            else {
              bVar26 = false;
            }
          }
          else {
            bVar26 = false;
          }
          if ((bVar1) || (!bVar26)) {
            (**(code **)(*plVar6 + 0x3b0))(plVar6,*(undefined1 *)(param_1 + 0x140));
            (**(code **)(*plVar6 + 0x330))(plVar6,lVar19);
            (**(code **)(*plVar6 + 0x3b8))(plVar6,param_1 + 0x128);
            (**(code **)(plVar6[0x2e] + 0x38))(plVar6 + 0x2e,*(char *)(lVar19 + 0x5a) == '\0');
            if (!bVar1) {
              (**(code **)(*plVar6 + 0x3c0))(plVar6);
            }
          }
          else {
            lVar10 = (**(code **)(*plVar6 + 0x340))(plVar6);
            if ((*(char *)(lVar10 + 0x56) != *(char *)(lVar19 + 0x56)) ||
               (*(char *)(lVar10 + 0x55) != *(char *)(lVar19 + 0x55))) {
              (**(code **)(*plVar6 + 0x380))(plVar6,*(undefined1 *)(lVar19 + 0x55));
            }
          }
        }
      }
      local_180 = (void *)((longlong)local_180 + 0x110);
      uVar18 = (int)plVar9 + 1;
      plVar9 = (longlong *)(ulonglong)uVar18;
      puVar23 = local_170;
    } while ((int)uVar18 < *(int *)(param_1 + 0x168));
  }
  (**(code **)(**(longlong **)(param_1 + 0x170) + 0x300))();
  uVar3 = 0xffffffff;
  uVar17 = 0;
  iVar15 = FUN_142eb7440(*(undefined8 *)(param_1 + 0x170));
  uVar18 = local_164;
  if ((0 < iVar15) && (param_3 != '\0')) {
    uVar3 = uVar18;
    if (local_164 != 0xffffffff) {
      iVar15 = FUN_142eb7440(*(undefined8 *)(param_1 + 0x170));
      uVar3 = uVar24;
      if ((-1 < (int)uVar18) && (uVar3 = iVar15 - 1U, (int)uVar18 < (int)(iVar15 - 1U))) {
        uVar3 = uVar18;
      }
    }
    uVar17 = 1;
    (**(code **)(**(longlong **)(param_1 + 0x170) + 0x2f8))
              (*(longlong **)(param_1 + 0x170),uVar27,0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x170) + 0x2b8))
            (*(longlong **)(param_1 + 0x170),uVar3,uVar17,uVar17);
  uVar8 = (**(code **)(**(longlong **)(param_1 + 0x170) + 0x2b0))();
  FUN_140eee0c0(param_1,uVar8);
LAB_140f044d2:
  puVar23 = local_160;
  if (*(int *)(local_160 + 8) != 0) {
    plVar9 = (longlong *)local_160[6];
    if ((longlong *)local_160[6] == (longlong *)0x0) {
      plVar9 = local_160 + 2;
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x10))(plVar9,0);
    }
  }
  if (puVar23[6] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140f04550 FUN_140f04550 body=210 status=ok
// SIG undefined FUN_140f04550(void)

void FUN_140f04550(longlong param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 local_res8 [2];
  undefined4 local_res10;
  undefined4 local_res14;
  undefined1 *local_68 [2];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  
  local_res8[0] = 0xffffffff;
  if (*(longlong *)(param_1 + 0x5b0) != 0) {
    FUN_14170c210(local_res8);
  }
  FWeakObjectPtr::operator=(&local_res10,param_1);
  uVar2 = local_res8[0];
  local_res8[0] = 0xffffffff;
  local_38 = 0;
  local_28 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x20,local_58);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144605c50;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_res10;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_res14;
    *(undefined4 *)(puVar1 + 3) = uVar2;
    uVar2 = 0xffffffff;
  }
  local_68[0] = &LAB_140ee1070;
  FUN_14208c4f0(param_1,local_68);
  FUN_1416f8340(uVar2);
  FUN_1416f8340(local_res8[0]);
  return;
}



// FUNCTION 140f04630 FUN_140f04630 body=1114 status=ok
// SIG undefined FUN_140f04630(void)

void FUN_140f04630(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  void *_Src;
  longlong *plVar3;
  bool bVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  longlong lVar11;
  uint uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined4 local_res8;
  undefined8 *local_a8;
  uint local_a0;
  undefined4 local_9c;
  undefined8 *local_98;
  int local_90;
  longlong *local_88;
  int local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined1 local_58 [32];
  
  plVar7 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x594);
  if (plVar7 == (longlong *)0x0) {
    return;
  }
  lVar8 = FUN_1413f82e0();
  if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
      lVar8 + 0x88)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (!bVar4) {
    return;
  }
  uVar9 = AGFireballProjectile::GetPrivateStaticClass();
  lVar8 = (**(code **)(*plVar7 + 0x628))(plVar7,uVar9);
  if (lVar8 == 0) {
    return;
  }
  puVar19 = (undefined8 *)0x0;
  local_res8 = 0;
  if (plVar7[0x21b] != 0) {
    *(longlong *)(param_1 + 0xc00) = plVar7[0x21b];
    local_res8 = (**(code **)(*(longlong *)plVar7[0x21b] + 0x408))();
  }
  local_90 = *(int *)(param_2 + 0x40);
  lVar15 = (longlong)local_90;
  _Src = *(void **)(param_2 + 0x38);
  local_98 = (undefined8 *)0x0;
  if (local_90 != 0) {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_98,local_90,0);
    _guard_xfg_dispatch_icall_nop(local_98,_Src,lVar15 << 3);
  }
  iVar6 = local_90;
  if (*(longlong *)(param_1 + 0x6d0) == 0) goto LAB_140f04a5c;
  *(undefined4 *)(param_1 + 0xc18) = 0;
  if (*(int *)(param_1 + 0xc1c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0xc10,0);
  }
  FUN_1409a7860(*(undefined8 *)(param_1 + 0x6d0),&local_88);
  plVar1 = local_88 + local_80;
  for (plVar16 = local_88; plVar16 != plVar1; plVar16 = plVar16 + 1) {
    plVar3 = (longlong *)*plVar16;
    if (plVar3 != (longlong *)0x0) {
      lVar15 = plVar3[0x1f];
      if (lVar15 == 0) {
        (**(code **)(*plVar3 + 0x368))(plVar3);
        lVar15 = plVar3[0x1f];
        if (lVar15 == 0) goto LAB_140f0480d;
      }
      iVar2 = *(int *)(param_1 + 0xc18);
      *(int *)(param_1 + 0xc18) = iVar2 + 1;
      if (*(int *)(param_1 + 0xc1c) < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0xc10,iVar2);
      }
      *(longlong *)(*(longlong *)(param_1 + 0xc10) + (longlong)iVar2 * 8) = lVar15;
    }
LAB_140f0480d:
  }
  puVar17 = (undefined8 *)0x0;
  local_a8 = (undefined8 *)0x0;
  puVar13 = (undefined8 *)0x0;
  local_9c = 0;
  uVar9 = FUN_1412e9ee0();
  lVar15 = (**(code **)(*plVar7 + 0x628))(plVar7,uVar9);
  if (((lVar15 != 0) && (*(longlong *)(lVar15 + 0x2a0) != 0)) &&
     (FUN_141055810(param_1,lVar8,local_res8,*(undefined8 *)(param_1 + 0xf28),
                    *(longlong *)(lVar15 + 0x2a0)), *(longlong *)(param_1 + 0xf28) != 0)) {
    puVar10 = (undefined4 *)FUN_140e24780(lVar15,local_58);
    local_78 = *puVar10;
    uStack_74 = puVar10[1];
    uStack_70 = puVar10[2];
    uStack_6c = puVar10[3];
    local_68 = *(undefined8 *)(puVar10 + 4);
    FUN_14105afb0(*(undefined8 *)(param_1 + 0xf28),&local_78);
  }
  puVar5 = local_98;
  puVar14 = puVar19;
  puVar18 = puVar19;
  if (iVar6 < 1) {
LAB_140f049d8:
    uVar12 = (uint)puVar14;
    bVar4 = false;
  }
  else {
    FUN_141055300(param_1,lVar8,local_res8,*(undefined8 *)(param_1 + 0xf30),*local_98);
    lVar15 = FUN_1409ab3b0(lVar8,*puVar5);
    puVar14 = puVar13;
    if (lVar15 == 0) goto LAB_140f049d8;
    lVar11 = UUGLoadoutBarUW::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    puVar18 = puVar17;
    if (!bVar4) goto LAB_140f049d8;
    lVar11 = FUN_141039070(param_1,lVar15);
    if (lVar11 != 0) {
      if (*(longlong *)(param_1 + 0xf30) != 0) {
        FUN_14105ad40(*(longlong *)(param_1 + 0xf30),lVar11);
      }
      if (*(longlong *)(param_1 + 0xf38) != 0) {
        FUN_14105ad40(*(longlong *)(param_1 + 0xf38),lVar11);
      }
      if (*(longlong *)(param_1 + 0xf40) != 0) {
        FUN_14105ad40(*(longlong *)(param_1 + 0xf40),lVar11);
      }
    }
    if (&local_a8 == (undefined8 **)(lVar15 + 0x140)) goto LAB_140f049d8;
    local_a0 = *(uint *)(lVar15 + 0x148);
    puVar14 = (undefined8 *)(longlong)(int)local_a0;
    puVar13 = *(undefined8 **)(lVar15 + 0x140);
    if (local_a0 == 0) goto LAB_140f049d8;
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_a8,local_a0,0);
    puVar18 = local_a8;
    _guard_xfg_dispatch_icall_nop(local_a8,puVar13,(longlong)puVar14 << 3);
    puVar14 = (undefined8 *)(ulonglong)local_a0;
    if ((int)local_a0 < 1) goto LAB_140f049d8;
    bVar4 = true;
    uVar12 = local_a0;
  }
  puVar13 = puVar19;
  if (bVar4) {
    puVar13 = (undefined8 *)*puVar18;
  }
  FUN_141055530(param_1,lVar8,local_res8,*(undefined8 *)(param_1 + 0xf38),puVar13);
  if (1 < (int)uVar12) {
    puVar19 = (undefined8 *)puVar18[1];
  }
  FUN_141055530(param_1,lVar8,local_res8,*(undefined8 *)(param_1 + 0xf40),puVar19);
  if (puVar18 != (undefined8 *)0x0) {
    FMemory::Free(puVar18);
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
LAB_140f04a5c:
  if (local_98 != (undefined8 *)0x0) {
    FMemory::Free(local_98);
  }
  return;
}



// FUNCTION 140f04a90 FUN_140f04a90 body=740 status=ok
// SIG undefined FUN_140f04a90(void)

void FUN_140f04a90(longlong param_1,undefined1 param_2,undefined8 *param_3,undefined8 *param_4)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong local_150;
  undefined8 *local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  code **local_130;
  code *local_128 [2];
  longlong local_118 [4];
  longlong *local_f8;
  int local_e8;
  code *local_d8 [2];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  undefined1 *local_88 [2];
  undefined1 local_78 [32];
  undefined8 local_58;
  undefined4 local_48;
  
  local_148 = param_3;
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x144);
  uVar10 = 0;
  uVar7 = uVar10;
  if (cVar2 != '\0') {
    lVar5 = FWeakObjectPtr::Get(param_1 + 0x144);
    lVar5 = *(longlong *)(lVar5 + 0x848);
    if (lVar5 != 0) {
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
      if (bVar1) {
        uVar7 = (**(code **)(*(longlong *)(lVar5 + 0xd80) + 0x18))();
      }
    }
  }
  local_a8 = (longlong *)0x0;
  iVar4 = 0;
  local_98 = 0;
  if (*(int *)(param_4 + 8) == 0) {
LAB_140f04b6e:
    local_d8[0] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  else {
    plVar8 = (longlong *)param_4[6];
    if ((longlong *)param_4[6] == (longlong *)0x0) {
      plVar8 = param_4 + 2;
    }
    if (plVar8 == (longlong *)0x0) goto LAB_140f04b6e;
    plVar8 = (longlong *)(**(code **)*plVar8)(plVar8,local_c8);
    (**(code **)(*plVar8 + 8))(plVar8);
    local_d8[0] = (code *)*param_4;
  }
  local_f8 = (longlong *)0x0;
  local_e8 = 0;
  if (*(int *)(param_3 + 8) != 0) {
    plVar8 = (longlong *)param_3[6];
    if ((longlong *)param_3[6] == (longlong *)0x0) {
      plVar8 = param_3 + 2;
    }
    if (plVar8 != (longlong *)0x0) {
      plVar8 = (longlong *)(**(code **)*plVar8)(plVar8,local_118);
      (**(code **)(*plVar8 + 8))(plVar8);
      local_128[0] = (code *)*param_3;
      goto LAB_140f04bbe;
    }
  }
  local_128[0] = FUN_1407c3030;
LAB_140f04bbe:
  local_150 = uVar7;
  if (uVar7 != 0) {
    uVar3 = FUN_142b47070(uVar7);
    uVar10 = (ulonglong)uVar3;
    if (local_150 != 0) {
      iVar4 = ASwitchActor::GetSelectedOption();
    }
  }
  local_58 = 0;
  iVar4 = (int)uVar10 - iVar4;
  local_48 = 0;
  iVar11 = 0;
  if (-1 < iVar4) {
    iVar11 = iVar4;
  }
  local_140 = &local_150;
  uStack_138 = local_128;
  local_130 = local_d8;
  puVar9 = (undefined8 *)FUN_140438ef0(0x20,local_78);
  if (puVar9 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar9 + 1) = (undefined4)local_140;
    *(undefined4 *)((longlong)puVar9 + 0xc) = local_140._4_4_;
    *(undefined4 *)(puVar9 + 2) = (undefined4)uStack_138;
    *(undefined4 *)((longlong)puVar9 + 0x14) = uStack_138._4_4_;
    *puVar9 = &PTR_FUN_143f4d0b0;
    puVar9[3] = local_130;
  }
  local_88[0] = &LAB_140ee0c60;
  FUN_140f03c80(param_1,local_88,param_2,uVar10,iVar11);
  if (*(longlong *)(param_1 + 0x170) != 0) {
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x170) + 0x304) = 1;
    UNLOCK();
  }
  *(undefined1 *)(param_1 + 400) = 1;
  if (local_e8 != 0) {
    plVar8 = local_118;
    if (local_f8 != (longlong *)0x0) {
      plVar8 = local_f8;
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8,0);
    }
  }
  if (local_f8 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_98 != 0) {
    plVar8 = local_c8;
    if (local_a8 != (longlong *)0x0) {
      plVar8 = local_a8;
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8,0);
    }
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (*(int *)(param_3 + 8) != 0) {
    plVar8 = (longlong *)param_3[6];
    if ((longlong *)param_3[6] == (longlong *)0x0) {
      plVar8 = param_3 + 2;
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8,0);
    }
  }
  if (local_148[6] != 0) {
    FMemory::Free();
  }
  if (*(int *)(param_4 + 8) != 0) {
    plVar8 = (longlong *)param_4[6];
    if ((longlong *)param_4[6] == (longlong *)0x0) {
      plVar8 = param_4 + 2;
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8,0);
    }
  }
  if (param_4[6] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140f04d80 FUN_140f04d80 body=368 status=ok
// SIG undefined FUN_140f04d80(void)

void FUN_140f04d80(longlong param_1,longlong param_2,undefined1 param_3,longlong param_4,
                  longlong param_5)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  int iVar5;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  longlong local_90;
  undefined1 *local_88 [2];
  undefined1 local_78 [32];
  undefined8 local_58;
  undefined4 local_48;
  
  iVar1 = 0;
  local_a8 = param_2;
  if (param_2 != 0) {
    iVar1 = FUN_142b47070(param_2);
  }
  iVar2 = 0;
  if (local_a8 != 0) {
    iVar2 = ASwitchActor::GetSelectedOption(local_a8);
  }
  local_90 = param_5;
  local_58 = 0;
  iVar5 = 0;
  if (-1 < iVar1 - iVar2) {
    iVar5 = iVar1 - iVar2;
  }
  local_48 = 0;
  local_a0 = &local_a8;
  uStack_98 = param_4;
  puVar3 = (undefined8 *)FUN_140438ef0(0x20,local_78);
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar3 + 1) = (undefined4)local_a0;
    *(undefined4 *)((longlong)puVar3 + 0xc) = local_a0._4_4_;
    *(undefined4 *)(puVar3 + 2) = (undefined4)uStack_98;
    *(undefined4 *)((longlong)puVar3 + 0x14) = uStack_98._4_4_;
    *puVar3 = &PTR_FUN_143f4d0b0;
    puVar3[3] = local_90;
  }
  local_88[0] = &LAB_140ee0c60;
  FUN_140f03c80(param_1,local_88,param_3,iVar1,iVar5);
  if (*(longlong *)(param_1 + 0x170) != 0) {
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x170) + 0x304) = 1;
    UNLOCK();
  }
  *(undefined1 *)(param_1 + 400) = 1;
  if (*(int *)(param_4 + 0x40) != 0) {
    plVar4 = *(longlong **)(param_4 + 0x30);
    if (*(longlong **)(param_4 + 0x30) == (longlong *)0x0) {
      plVar4 = (longlong *)(param_4 + 0x10);
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (*(longlong *)(param_4 + 0x30) != 0) {
    FMemory::Free();
  }
  if (*(int *)(param_5 + 0x40) != 0) {
    plVar4 = *(longlong **)(param_5 + 0x30);
    if (*(longlong **)(param_5 + 0x30) == (longlong *)0x0) {
      plVar4 = (longlong *)(param_5 + 0x10);
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (*(longlong *)(param_5 + 0x30) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140f04ef0 FUN_140f04ef0 body=177 status=ok
// SIG undefined FUN_140f04ef0(void)

ulonglong FUN_140f04ef0(longlong param_1,undefined8 param_2,undefined1 param_3,undefined4 param_4,
                       undefined4 param_5)

{
  uint *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  local_28 = 0;
  local_18 = 0;
  puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_48);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[1] = param_2;
    *puVar3 = &PTR_FUN_143f77b70;
  }
  local_58[0] = &LAB_140ee0c70;
  uVar4 = FUN_140f03c80(param_1,local_58,param_3,param_4,param_5);
  if (*(longlong *)(param_1 + 0x170) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x170) + 0x304);
    uVar2 = *puVar1;
    *puVar1 = 1;
    uVar4 = (ulonglong)uVar2;
    UNLOCK();
  }
  *(undefined1 *)(param_1 + 400) = 1;
  return uVar4;
}



// FUNCTION 140f04fb0 FUN_140f04fb0 body=12 status=ok
// SIG undefined FUN_140f04fb0(void)

void FUN_140f04fb0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined1 *)(param_1 + 0x38) = 0;
  FUN_140f069b0(param_1,param_3);
  return;
}



// FUNCTION 140f04fc0 FUN_140f04fc0 body=276 status=ok
// SIG undefined FUN_140f04fc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f04fc0(undefined8 param_1)

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
  FUN_142ece720();
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = &LAB_140ee0a70;
  uVar2 = FUN_1420849a0(param_1,local_68,local_b8);
  FUN_142ecfea0(param_1,uVar2);
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



// FUNCTION 140f050e0 FUN_140f050e0 body=276 status=ok
// SIG undefined FUN_140f050e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f050e0(undefined8 param_1)

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
  FUN_142ece720();
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = &LAB_140ee0fc0;
  uVar2 = FUN_1420849a0(param_1,local_68,local_b8);
  FUN_142ecfea0(param_1,uVar2);
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



// FUNCTION 140f05200 FUN_140f05200 body=276 status=ok
// SIG undefined FUN_140f05200(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f05200(undefined8 param_1)

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
  FUN_142ece720();
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = &LAB_140ee0900;
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



// FUNCTION 140f05320 FUN_140f05320 body=276 status=ok
// SIG undefined FUN_140f05320(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140f05320(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
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
  FUN_142ece720();
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = FUN_140ee0aa0;
  uVar2 = FUN_1420849a0(param_1,local_68,local_b8);
  FUN_142ecfea0(param_1,uVar2);
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



// FUNCTION 140f05440 FUN_140f05440 body=96 status=ok
// SIG undefined FUN_140f05440(void)

void FUN_140f05440(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  *(undefined1 *)(param_1 + 0x38) = 1;
  FUN_140f054a0();
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



// FUNCTION 140f054a0 FUN_140f054a0 body=285 status=ok
// SIG undefined FUN_140f054a0(void)

void FUN_140f054a0(longlong param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  lVar4 = *(longlong *)(param_1 + 0x28);
  iVar7 = 0;
  iVar6 = *(int *)(param_1 + 0x30);
  lVar5 = (longlong)iVar6 * 0x10 + lVar4;
  if (lVar4 != lVar5) {
    do {
      cVar2 = FWeakObjectPtr::IsValid(lVar4);
      if ((cVar2 == '\0') && (*(longlong **)(lVar4 + 8) != (longlong *)0x0)) {
        (**(code **)(**(longlong **)(lVar4 + 8) + 0x280))();
        *(undefined8 *)(lVar4 + 8) = 0;
      }
      lVar4 = lVar4 + 0x10;
    } while (lVar4 != lVar5);
    iVar6 = *(int *)(param_1 + 0x30);
  }
  if (iVar6 != 0) {
    cVar2 = FWeakObjectPtr::IsValid(*(undefined8 *)(param_1 + 0x28));
    bVar8 = cVar2 != '\0';
    iVar3 = iVar7;
    do {
      iVar1 = iVar3;
      do {
        iVar1 = iVar1 + 1;
        if (iVar6 <= iVar1) break;
        cVar2 = FWeakObjectPtr::IsValid((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x28));
      } while (bVar8 == (cVar2 != '\0'));
      if (bVar8 != false) {
        if (iVar7 != iVar3) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar7 * 0x10 + *(longlong *)(param_1 + 0x28)),
                     (void *)((longlong)iVar3 * 0x10 + *(longlong *)(param_1 + 0x28)),
                     (longlong)(iVar1 - iVar3) << 4);
        }
        iVar7 = iVar7 + (iVar1 - iVar3);
      }
      bVar8 = (bool)(bVar8 ^ 1);
      iVar3 = iVar1;
    } while (iVar1 < iVar6);
    *(int *)(param_1 + 0x30) = iVar7;
  }
  return;
}


