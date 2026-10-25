// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140beac50 FUN_140beac50 body=125 status=ok
// SIG undefined FUN_140beac50(void)

void FUN_140beac50(longlong param_1)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  FUN_140dcfa20(param_1 + 0x5f0);
  puVar2 = (undefined2 *)FUN_140dbc5d0(param_1 + 0x5f0,local_res8);
  uVar1 = *puVar2;
  *(undefined2 *)(param_1 + 0x440) = uVar1;
  if ((char)uVar1 == '\x02') {
    FUN_140bf7280(param_1,param_1 + 0x440);
  }
  uVar3 = FUN_140bb7440(param_1);
  FUN_140d9f600(uVar3,0xe);
  TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 0x9a0,param_1 + 0x440);
  return;
}



// FUNCTION 140beacd0 FUN_140beacd0 body=15 status=ok
// SIG undefined FUN_140beacd0(void)

void FUN_140beacd0(longlong param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x1338)) {
    *(int *)(param_1 + 0x1338) = param_2;
  }
  return;
}



// FUNCTION 140beace0 FUN_140beace0 body=61 status=ok
// SIG undefined FUN_140beace0(void)

void FUN_140beace0(longlong param_1,char param_2)

{
  longlong lVar1;
  
  *(char *)(param_1 + 0x458) = param_2;
  *(bool *)(param_1 + 0x459) = param_2 == '\x01';
  lVar1 = *(longlong *)(param_1 + 0x1080);
  if (lVar1 == 0) {
    return;
  }
  if ((param_2 == '\0') && (*(char *)(param_1 + 0xb18) != '\0')) {
    FUN_140d9fcc0(lVar1);
    return;
  }
  FUN_140d9fcc0(lVar1,1);
  return;
}



// FUNCTION 140bead20 FUN_140bead20 body=113 status=ok
// SIG undefined FUN_140bead20(void)

void FUN_140bead20(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_14244f490(param_1,0);
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
      lVar2 = FUN_140cff230(lVar2);
      if (lVar2 != 0) {
        FUN_140d4c970(lVar2,param_2);
      }
    }
  }
  return;
}



// FUNCTION 140beada0 FUN_140beada0 body=425 status=ok
// SIG undefined FUN_140beada0(void)

void FUN_140beada0(longlong param_1,undefined8 *param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  int *piVar5;
  undefined8 uVar6;
  longlong lVar7;
  char *pcVar8;
  char *pcVar9;
  int local_res10 [2];
  char local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_58 [8];
  undefined8 local_50;
  longlong local_48;
  undefined8 *local_40;
  char *local_38;
  undefined1 local_30 [24];
  
  local_res18[0] = param_3;
  cVar4 = (**(code **)(*(longlong *)*param_2 + 0x20))();
  if (cVar4 == '\0') {
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar1 = plVar3 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 != 1) {
      return;
    }
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar5 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 != 1) {
      return;
    }
    (**(code **)(*plVar3 + 8))(plVar3,1);
    return;
  }
  local_50 = *param_2;
  local_48 = param_2[1];
  if (local_48 != 0) {
    LOCK();
    *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
    UNLOCK();
  }
  cVar4 = FUN_140bca7d0(param_1,&local_50);
  if (cVar4 == '\0') {
    piVar5 = (int *)FUN_1405499a0(param_1 + 0xd00,local_res20,param_2);
    if (*piVar5 == -1) {
      local_38 = local_res18;
      local_40 = param_2;
      FUN_140b95ad0(param_1 + 0xd00,local_58,&local_40,0);
      if (local_res18[0] != '\0') goto LAB_140beaf39;
    }
    else {
      FUN_1405499a0(param_1 + 0xd00,local_res10);
      pcVar8 = (char *)0x0;
      if (local_res10[0] != -1) {
        pcVar8 = (char *)((longlong)local_res10[0] * 0x20 + *(longlong *)(param_1 + 0xd00));
      }
      pcVar9 = pcVar8 + 0x10;
      if (pcVar8 == (char *)0x0) {
        pcVar9 = (char *)0x0;
      }
      if (pcVar9 == (char *)0x0) goto LAB_140beaf39;
      if (local_res18[0] != *pcVar9) {
        *pcVar9 = local_res18[0];
      }
      if (local_res18[0] != '\0') {
        uVar6 = FUN_140bbd520(local_30);
        FUN_140be6cf0(param_1,uVar6,param_2);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_2);
        return;
      }
    }
    lVar7 = FUN_142b45e90();
    uVar6 = *(undefined8 *)(lVar7 + 0x18);
    cVar4 = FUN_140bca8a0(param_1);
    FUN_142b58940(uVar6,param_2,cVar4 == '\0');
  }
LAB_140beaf39:
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_2);
  return;
}



// FUNCTION 140beaf50 FUN_140beaf50 body=266 status=ok
// SIG undefined FUN_140beaf50(void)

void FUN_140beaf50(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  if ((*(char *)(param_1 + 0x318) != '\0') && (*(uint *)(param_1 + 0x300) != param_2)) {
    iVar6 = *(int *)(param_1 + 0x220);
    *(uint *)(param_1 + 0x300) = param_2;
    if ((iVar6 == 0) || (iVar6 == 3)) {
      *(int *)(param_1 + 0xa64) = *(int *)(param_1 + 0xa64) + 1;
      iVar6 = *(int *)(param_1 + 0xa64);
      bVar3 = false;
      iVar5 = *(int *)(param_1 + 0xa58) + -1;
      lVar8 = (longlong)iVar5;
      if (-1 < iVar5) {
        lVar7 = lVar8 << 4;
        bVar3 = false;
        do {
          lVar1 = *(longlong *)(param_1 + 0xa50);
          if (((*(int *)(lVar7 + 8 + lVar1) == 0) ||
              (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) ||
             (cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2), cVar4 == '\0')) {
            bVar3 = true;
          }
          lVar7 = lVar7 + -0x10;
          lVar8 = lVar8 + -1;
        } while (-1 < lVar8);
        iVar6 = *(int *)(param_1 + 0xa64);
      }
      *(int *)(param_1 + 0xa64) = iVar6 + -1;
      if (bVar3) {
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList
                  ((longlong *)(param_1 + 0xa50),0);
      }
    }
    if ((((param_2 & 0xfffffffa) == 0) && (param_2 != 1)) && (*(char *)(param_1 + 0x318) != '\0')) {
      *(undefined1 *)(param_1 + 0x318) = 0;
      FUN_140b9da20((int *)(param_1 + 0x220));
    }
  }
  return;
}



// FUNCTION 140beb060 FUN_140beb060 body=41 status=ok
// SIG undefined FUN_140beb060(void)

void FUN_140beb060(undefined8 param_1,undefined1 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140bb7870();
  if (lVar1 != 0) {
    FUN_140dd0750(lVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 140beb090 FUN_140beb090 body=386 status=ok
// SIG undefined FUN_140beb090(void)

void FUN_140beb090(longlong param_1,undefined8 *param_2,char param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined ***local_res20;
  undefined **local_68;
  undefined8 local_60;
  longlong *local_58;
  longlong local_50;
  undefined8 local_48;
  undefined **local_40;
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  uVar3 = *param_2;
  plVar6 = (longlong *)param_2[1];
  if (param_3 == '\0') {
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    local_res20 = &local_68;
    local_50 = 0;
    local_68 = &PTR_FUN_143f740c8;
    local_48 = 0;
    local_60 = uVar3;
    local_58 = plVar6;
    FUN_1404bb710(param_1 + 0xfd8,&local_res20);
    local_68 = &PTR_FUN_143f740c8;
    if (local_50 != 0) {
      FMemory::Free();
    }
    local_68 = &PTR_FUN_143f73d18;
    plVar6 = local_58;
  }
  else {
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    plVar2 = (longlong *)(param_1 + 0xfd8);
    local_28 = 0;
    local_40 = &PTR_FUN_143f740c8;
    local_20 = 0;
    local_38 = uVar3;
    local_30 = plVar6;
    iVar5 = FUN_1404cc060(plVar2,&local_40);
    if (iVar5 == -1) {
      iVar5 = *(int *)(param_1 + 0xfe0);
      lVar7 = (longlong)iVar5;
      *(int *)(param_1 + 0xfe0) = iVar5 + 1;
      if (*(int *)(param_1 + 0xfe4) < iVar5 + 1) {
        TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar2,iVar5);
      }
      lVar4 = *plVar2;
      *(undefined ***)(lVar4 + lVar7 * 0x28) = &PTR_FUN_143f73d18;
      *(undefined8 *)(lVar4 + 8 + lVar7 * 0x28) = uVar3;
      *(longlong **)(lVar4 + 0x10 + lVar7 * 0x28) = plVar6;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      *(undefined ***)(lVar4 + lVar7 * 0x28) = &PTR_FUN_143f740c8;
      *(undefined8 *)(lVar4 + 0x18 + lVar7 * 0x28) = 0;
      *(undefined8 *)(lVar4 + 0x20 + lVar7 * 0x28) = 0;
    }
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar6 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  return;
}



// FUNCTION 140beb220 FUN_140beb220 body=436 status=ok
// SIG undefined FUN_140beb220(void)

void FUN_140beb220(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  longlong local_68;
  longlong *local_60;
  undefined **local_58 [2];
  longlong *local_48;
  longlong local_40;
  
  uVar8 = 0;
  puVar9 = *(undefined8 **)(param_1 + 0x38);
  uVar10 = (longlong)*(int *)(param_1 + 0x40) & 0x1fffffffffffffff;
  if (puVar9 + *(int *)(param_1 + 0x40) < puVar9) {
    uVar10 = uVar8;
  }
  if (uVar10 != 0) {
    do {
      lVar7 = FUN_142547b50(*puVar9,local_58);
      plVar5 = *(longlong **)(lVar7 + 0x10);
      lVar7 = *(longlong *)(lVar7 + 8);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      local_58[0] = &PTR_FUN_143f740c8;
      if (local_40 != 0) {
        FMemory::Free();
      }
      plVar3 = local_48;
      local_58[0] = &PTR_FUN_143f73d18;
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_48 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_48)(local_48);
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
      if (lVar7 == 0) {
LAB_140beb35e:
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar5 + 1;
          lVar7 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
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
      }
      else {
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        local_68 = lVar7;
        local_60 = plVar5;
        FUN_140beb090(param_1,&local_68,param_2);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar5 + 1;
          lVar7 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
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
          goto LAB_140beb35e;
        }
      }
      puVar9 = puVar9 + 1;
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar10);
  }
  return;
}



// FUNCTION 140beb3e0 FUN_140beb3e0 body=64 status=ok
// SIG undefined FUN_140beb3e0(void)

void FUN_140beb3e0(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1054);
  if (iVar1 != param_2) {
    *(int *)(param_1 + 0x1054) = param_2;
    TBaseMulticastDelegate<void,enum_EWmfMediaSamplerClockEvent>::Broadcast(param_1 + 0xc80);
    if (iVar1 == 0) {
      FUN_140bccff0(param_1);
    }
  }
  return;
}



// FUNCTION 140beb420 FUN_140beb420 body=320 status=ok
// SIG undefined FUN_140beb420(void)

void FUN_140beb420(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **local_48;
  undefined1 local_40 [24];
  undefined1 local_28 [32];
  
  FUN_140c0e000();
  plVar1 = param_1 + 0x44;
  if (param_2 != plVar1) {
    if ((char)param_1[99] != '\0') {
      *(undefined1 *)(param_1 + 99) = 0;
      FUN_140b9da20(plVar1);
    }
    FUN_140b9a9b0(plVar1,param_2);
    *(undefined1 *)(param_1 + 99) = 1;
  }
  FUN_140beaf50(param_1,1);
  FUN_140ba8040(param_1);
  FUN_140bcc940(param_1,2);
  if ((int)*plVar1 != 3) {
    *(undefined1 *)(param_1 + 0x238) = 1;
  }
  lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
  if ((lVar2 != 0) && ((*(uint *)(lVar2 + 0x830) >> 2 & 1) != 0)) {
    FUN_140ba4250(param_1,&DAT_14686a12c,0);
    return;
  }
  FUN_1411fd0c0(param_1 + 0xf4,0,0);
  FUN_140be3520(param_1);
  FUN_140be97d0(param_1);
  uVar3 = FUN_1404b03b0();
  uVar4 = FUN_1404b03b0();
  local_48 = &PTR_FUN_1443170a0;
  FText::FText(local_40,uVar4);
  FText::FText(local_28,uVar3);
  local_48 = &PTR_FUN_1443170a0;
  FUN_140bb5710(param_1,&local_48);
  FUN_140b9cdd0(&local_48);
  return;
}



// FUNCTION 140beb560 FUN_140beb560 body=3124 status=ok
// SIG undefined FUN_140beb560(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140beb560(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  void *_Src;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined2 *puVar12;
  void **ppvVar13;
  undefined2 **ppuVar14;
  undefined8 uVar15;
  undefined2 *puVar16;
  undefined4 *puVar17;
  undefined2 *puVar18;
  longlong *plVar19;
  uint uVar20;
  undefined2 *puVar21;
  int iVar22;
  undefined2 *puVar23;
  byte bVar24;
  undefined1 auStack_378 [32];
  undefined8 local_358;
  int local_350;
  uint local_348;
  int local_344;
  undefined4 local_340;
  undefined2 *local_338;
  undefined8 local_330;
  undefined2 *local_328;
  longlong local_320 [6];
  void *local_2f0;
  uint local_2e8;
  undefined8 *local_2e0;
  undefined8 local_2d8;
  longlong local_2d0;
  longlong *local_2c8;
  longlong *local_2c0;
  longlong *local_2b8;
  longlong *local_2b0;
  undefined2 *local_2a8;
  int local_2a0;
  void *local_298;
  undefined8 local_290;
  undefined **local_288;
  undefined8 local_280;
  longlong *local_278;
  longlong local_270;
  undefined8 local_268;
  undefined1 local_260 [4];
  undefined1 local_25c [4];
  undefined1 local_258 [4];
  undefined1 local_254 [4];
  undefined1 local_250 [8];
  longlong local_248;
  undefined4 local_240 [2];
  undefined8 local_238;
  undefined8 local_230;
  undefined4 local_228 [2];
  undefined8 local_220;
  undefined8 local_218;
  undefined4 local_210 [2];
  undefined8 local_208;
  undefined8 local_200;
  undefined4 local_1f8 [2];
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined4 local_1e0 [2];
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8 [2];
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 *local_1b0;
  undefined4 *local_1a8;
  undefined8 *local_1a0;
  undefined4 *local_198;
  undefined8 *local_190;
  undefined4 *local_188;
  longlong *local_180;
  undefined4 *local_178;
  longlong *local_170;
  undefined4 *local_168;
  longlong *local_160;
  undefined4 *local_158;
  undefined1 local_150 [8];
  longlong local_148 [2];
  longlong local_138 [2];
  longlong local_128 [2];
  undefined1 local_118 [8];
  longlong *local_110;
  undefined1 local_100 [8];
  longlong *local_f8;
  undefined1 local_e8 [8];
  longlong *local_e0;
  undefined1 local_d0 [24];
  longlong local_b8 [2];
  byte local_a8;
  longlong local_a0 [4];
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  longlong local_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_378;
  puVar21 = (undefined2 *)0x0;
  local_344 = 0;
  local_2d8 = 0;
  local_2e0 = param_2;
  Online::GetExternalUIInterface(&local_2b8,0);
  puVar9 = (undefined8 *)FName::FName(local_150,L"SPARK",1);
  Online::GetExternalUIInterface(&local_2c8,*puVar9);
  lVar10 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar10 == 0) {
LAB_140beb644:
    local_328 = (undefined2 *)0x0;
    puVar12 = puVar21;
  }
  else {
    uVar15 = *param_2;
    uVar11 = (**(code **)(*param_1 + 0x148))(param_1);
    puVar12 = (undefined2 *)FUN_142481360(uVar11,uVar15);
    if (puVar12 == (undefined2 *)0x0) goto LAB_140beb644;
    local_328 = puVar12;
    lVar10 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(puVar12 + 8) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(puVar12 + 8) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_140beb644;
  }
  if (((local_2b8 != (longlong *)0x0) || (local_2c8 != (longlong *)0x0)) &&
     (puVar12 != (undefined2 *)0x0)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_14686a6f8) &&
       (_Init_thread_header(&DAT_14686a6f8), DAT_14686a6f8 == -1)) {
      FName::FName(&DAT_14686a6f0,L"Loader",1);
      _Init_thread_footer(&DAT_14686a6f8);
    }
    lVar10 = (**(code **)(*param_1 + 0x148))(param_1);
    if ((lVar10 == 0) || (*(longlong *)(lVar10 + 0x18) != DAT_14686a6f0)) {
      local_b8[0] = 0;
      local_b8[1] = 0;
      local_a8 = 1;
      local_a0[0] = 0;
      local_a0[1] = 0;
      local_80 = 0;
      local_78 = 0;
      local_70 = 0xffffffff;
      local_6c = 0;
      local_60 = 0;
      local_58 = 0;
      local_2f0 = (void *)0x0;
      local_2e8 = 0;
      cVar5 = UEngine::IsInitialized();
      local_a8 = -(cVar5 != '\0') & 2;
      uVar7 = FUN_140bb6bd0(param_1,param_2);
      local_248 = FUN_140bbaee0(param_1,uVar7);
      if (local_248 == 0) {
        uVar20 = 2;
        local_298 = (void *)0x0;
        local_348 = 2;
        ppvVar13 = &local_298;
        local_290 = 0;
LAB_140beb78c:
        local_2f0 = *ppvVar13;
        *ppvVar13 = (void *)0x0;
        local_2e8 = *(uint *)(ppvVar13 + 1);
        puVar12 = (undefined2 *)(ulonglong)local_2e8;
        ppvVar13[1] = (void *)0x0;
      }
      else {
        uVar20 = 1;
        local_348 = 1;
        ppvVar13 = (void **)FName::ToString(local_248 + 0x88,local_148);
        puVar12 = puVar21;
        if (&local_2f0 != ppvVar13) goto LAB_140beb78c;
      }
      iVar22 = (int)puVar12;
      if (((uVar20 & 2) != 0) &&
         (uVar20 = uVar20 & 0xfffffffd, local_348 = uVar20, local_298 != (void *)0x0)) {
        FMemory::Free();
      }
      if (((uVar20 & 1) != 0) && (local_348 = uVar20 & 0xfffffffe, local_148[0] != 0)) {
        FMemory::Free();
      }
      local_2a8 = (undefined2 *)0x0;
      puVar23 = puVar21;
      local_2a0 = iVar22;
      if (iVar22 != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_2a8,puVar12,0);
        puVar23 = local_2a8;
        _guard_xfg_dispatch_icall_nop(local_2a8,local_2f0,(longlong)iVar22 * 2);
      }
      iVar22 = local_2a0;
      puVar12 = &DAT_143f3eda8;
      if (0 < (int)param_1[0xbd]) {
        lVar10 = 0;
        do {
          puVar18 = &DAT_143f3eda8;
          if (iVar22 != 0) {
            puVar18 = puVar23;
          }
          if (*(int *)(lVar10 + 8 + param_1[0xbc]) == 0) {
            puVar16 = &DAT_143f3eda8;
          }
          else {
            puVar16 = *(undefined2 **)(lVar10 + param_1[0xbc]);
          }
          iVar8 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar16,puVar18);
          if (iVar8 == 0) {
            local_340 = *(undefined4 *)(param_1[0xbc] + 0x10 + (longlong)(int)puVar21 * 0x18);
            if (puVar23 != (undefined2 *)0x0) {
              FMemory::Free(puVar23);
            }
            goto LAB_140beb87a;
          }
          uVar20 = (int)puVar21 + 1;
          puVar21 = (undefined2 *)(ulonglong)uVar20;
          lVar10 = lVar10 + 0x18;
        } while ((int)uVar20 < (int)param_1[0xbd]);
      }
      if (puVar23 != (undefined2 *)0x0) {
        FMemory::Free(puVar23);
      }
      local_340 = 0xffffffff;
LAB_140beb87a:
      puVar23 = (undefined2 *)0x0;
      puVar21 = (undefined2 *)0x0;
      local_338 = (undefined2 *)0x0;
      if ((char)param_1[0xb1] == '\0') {
        local_330 = 0;
        lVar10 = (**(code **)(*param_1 + 0x148))(param_1);
        if (lVar10 != 0) {
          ppuVar14 = (undefined2 **)FUN_1428cc8c0(lVar10,local_138);
          puVar18 = puVar23;
          if (&local_338 != ppuVar14) {
            iVar22 = *(int *)(ppuVar14 + 1);
            puVar16 = *ppuVar14;
            local_330 = CONCAT44(local_330._4_4_,iVar22);
            puVar18 = puVar21;
            if (iVar22 != 0) {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_338,iVar22,0);
              puVar18 = local_338;
              _guard_xfg_dispatch_icall_nop(local_338,puVar16,(longlong)iVar22 * 2);
            }
          }
          if (local_138[0] != 0) {
            FMemory::Free();
          }
          goto LAB_140beb971;
        }
      }
      else {
        iVar22 = (int)param_1[0xb3];
        _Src = (void *)param_1[0xb2];
        local_330 = CONCAT44(local_330._4_4_,iVar22);
        puVar21 = puVar23;
        if (iVar22 != 0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_338,iVar22,0);
          puVar18 = local_338;
          _guard_xfg_dispatch_icall_nop(local_338,_Src,(longlong)iVar22 * 2);
LAB_140beb971:
          puVar21 = puVar18;
          if ((int)local_330 != 0) {
            puVar12 = puVar18;
          }
        }
      }
      FName::FName(&local_2d0,puVar12,1);
      if (puVar21 != (undefined2 *)0x0) {
        FMemory::Free(puVar21);
      }
      local_344 = -1;
      iVar22 = local_344;
      if (0 < (int)param_1[0xbb]) {
        plVar19 = (longlong *)param_1[0xba];
        puVar21 = puVar23;
        do {
          iVar22 = (int)puVar21;
          if (*plVar19 == local_2d0) break;
          uVar20 = (int)puVar21 + 1;
          puVar21 = (undefined2 *)(ulonglong)uVar20;
          plVar19 = plVar19 + 2;
          iVar22 = local_344;
        } while ((int)uVar20 < (int)param_1[0xbb]);
      }
      local_344 = iVar22;
      lVar10 = (**(code **)(*param_1 + 0x148))(param_1);
      puVar21 = local_328;
      if (lVar10 == 0) {
        bVar24 = 0;
      }
      else {
        bVar24 = (byte)(*(uint *)(lVar10 + 0x830) >> 2) & 1;
      }
      puVar12 = *(undefined2 **)(local_328 + 0x230);
      if (puVar12 == (undefined2 *)0x0) {
LAB_140beba3a:
        puVar12 = puVar23;
      }
      else {
        lVar10 = UInputKeySelector::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(puVar12 + 8) + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(puVar12 + 8) + 0x88) +
             (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) goto LAB_140beba3a;
      }
      local_280 = *local_2e0;
      local_278 = (longlong *)local_2e0[1];
      if (local_278 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_278 + 1) = (int)local_278[1] + 1;
        UNLOCK();
      }
      local_288 = &PTR_FUN_143f740c8;
      local_270 = 0;
      local_268 = 0;
      uVar15 = (**(code **)(*param_1 + 0x148))(param_1);
      lVar10 = FUN_140c125c0(&local_288,uVar15);
      local_288 = &PTR_FUN_143f740c8;
      if (local_270 != 0) {
        FMemory::Free();
      }
      plVar19 = local_278;
      local_288 = &PTR_FUN_143f73d18;
      if (local_278 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_278 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_278)(local_278);
          LOCK();
          piVar2 = (int *)((longlong)plVar19 + 0xc);
          iVar22 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar22 == 1) {
            (**(code **)(*plVar19 + 8))(plVar19,1);
          }
        }
      }
      if (bVar24 == 0) {
        if ((puVar12 != (undefined2 *)0x0) && (*(char *)(puVar12 + 0x2eb) == '\0'))
        goto LAB_140bebe03;
        cVar5 = UEngine::IsInitialized(puVar21);
        if (cVar5 != '\0') goto LAB_140bebb01;
        local_220 = 0;
        local_228[0] = 0;
        local_218 = 0;
        FVariantData::SetValue(local_228,L"PlayerStatusInMap");
        local_1a0 = &DAT_1462985c0;
        local_198 = local_228;
        TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_const_&,FVariantData_&&>_>
                  (local_a0,local_25c,&local_1a0,0);
        puVar17 = local_228;
      }
      else if ((lVar10 == 0) || (cVar5 = FUN_140d3db00(lVar10), cVar5 == '\0')) {
LAB_140bebe03:
        local_238 = 0;
        local_240[0] = 0;
        local_230 = 0;
        FVariantData::SetValue(local_240,L"PlayerStatusChoosingCharacter");
        local_1b0 = &DAT_1462985c0;
        local_1a8 = local_240;
        TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_const_&,FVariantData_&&>_>
                  (local_a0,local_260,&local_1b0,0);
        puVar17 = local_240;
      }
      else {
LAB_140bebb01:
        local_208 = 0;
        local_210[0] = 0;
        local_200 = 0;
        FVariantData::SetValue(local_210,L"PlayerStatusIdle");
        local_190 = &DAT_1462985c0;
        local_188 = local_210;
        TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_const_&,FVariantData_&&>_>
                  (local_a0,local_250,&local_190,0);
        puVar17 = local_210;
      }
      FVariantData::Empty(puVar17);
      puVar9 = local_2e0;
      uVar7 = FUN_140bb6e30(param_1,local_2e0);
      local_320[0] = 0;
      local_320[1] = 10;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_320,0);
      local_358 = CONCAT62(local_358._2_6_,0x3f);
      FGenericPlatformString::Convert<char,wchar_t>(local_320[0],10,"EXP_LEVEL");
      local_1f8[0] = 0;
      local_1f0 = 0;
      local_1e8 = 0;
      FVariantData::SetValue(local_1f8,uVar7);
      local_180 = local_320;
      local_178 = local_1f8;
      TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_&&,FVariantData_&&>_>(local_a0,local_258,&local_180,0);
      FVariantData::Empty(local_1f8);
      if (local_320[0] != 0) {
        FMemory::Free();
      }
      local_320[2] = 0;
      local_320[3] = 0x12;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_320 + 2,0);
      local_358 = CONCAT62(local_358._2_6_,0x3f);
      FGenericPlatformString::Convert<char,wchar_t>(local_320[2],0x12,"PLAYERCLASS_INDEX");
      local_1e0[0] = 0;
      local_1d8 = 0;
      local_1d0 = 0;
      FVariantData::SetValue(local_1e0,local_340);
      local_170 = local_320 + 2;
      local_168 = local_1e0;
      TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_&&,FVariantData_&&>_>(local_a0,local_254,&local_170,0);
      FVariantData::Empty(local_1e0);
      if (local_320[2] != 0) {
        FMemory::Free();
      }
      local_320[4] = 0;
      local_320[5] = 10;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_320 + 4,0);
      local_358 = CONCAT62(local_358._2_6_,0x3f);
      FGenericPlatformString::Convert<char,wchar_t>(local_320[4],10,"MAP_INDEX");
      iVar22 = local_344;
      local_1c8[0] = 0;
      local_1c0 = 0;
      local_1b8 = 0;
      FVariantData::SetValue(local_1c8,local_344);
      local_160 = local_320 + 4;
      local_158 = local_1c8;
      TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_&&,FVariantData_&&>_>(local_a0,&local_328,&local_160,0);
      FVariantData::Empty(local_1c8);
      if (local_320[4] != 0) {
        FMemory::Free();
      }
      if (local_2b8 != (longlong *)0x0) {
        (**(code **)(*local_2b8 + 0x30))(local_2b8,puVar9,local_b8);
      }
      if (local_2c8 != (longlong *)0x0) {
        (**(code **)(*local_2c8 + 0x30))(local_2c8,puVar9,local_b8);
      }
      if (param_1[0x21a] != 0) {
        if (local_248 == 0) {
          uVar15 = FText::FText(local_100);
          uVar20 = 8;
        }
        else {
          uVar15 = FText::FText(local_e8,local_248 + 0x90);
          uVar20 = 4;
        }
        uVar20 = uVar20 | local_348;
        FText::FText(local_118,uVar15);
        if (((uVar20 & 8) != 0) && (uVar20 = uVar20 & 0xfffffff7, local_f8 != (longlong *)0x0)) {
          LOCK();
          plVar19 = local_f8 + 1;
          lVar10 = *plVar19;
          *(int *)plVar19 = (int)*plVar19 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*local_f8)(local_f8);
            LOCK();
            piVar2 = (int *)((longlong)local_f8 + 0xc);
            iVar8 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*local_f8 + 8))(local_f8,1);
            }
          }
        }
        if (((uVar20 & 4) != 0) && (local_e0 != (longlong *)0x0)) {
          LOCK();
          plVar19 = local_e0 + 1;
          lVar10 = *plVar19;
          *(int *)plVar19 = (int)*plVar19 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*local_e0)(local_e0);
            LOCK();
            piVar2 = (int *)((longlong)local_e0 + 0xc);
            iVar8 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*local_e0 + 8))(local_e0,1);
            }
          }
        }
        uVar15 = (**(code **)(*param_1 + 0x148))(param_1);
        uVar11 = FName::ToString(&local_2d0,local_128);
        uVar15 = FUN_140c13bc0(local_d0,uVar11,uVar15);
        uVar6 = UEngine::IsInitialized(puVar21);
        local_350 = iVar22;
        local_358 = uVar15;
        FUN_140dcfcd0(param_1[0x21a],uVar6,uVar7,local_118);
        if (local_128[0] != 0) {
          FMemory::Free();
        }
        if (local_110 != (longlong *)0x0) {
          LOCK();
          plVar19 = local_110 + 1;
          lVar10 = *plVar19;
          *(int *)plVar19 = (int)*plVar19 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*local_110)(local_110);
            LOCK();
            piVar2 = (int *)((longlong)local_110 + 0xc);
            iVar22 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar22 == 1) {
              (**(code **)(*local_110 + 8))(local_110,1);
            }
          }
        }
      }
      FUN_140bec1a0(param_1);
      if (local_2f0 != (void *)0x0) {
        FMemory::Free();
      }
      local_58 = 0;
      if (local_60 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FString,FVariantData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Empty(local_a0,0);
      if (local_80 != 0) {
        FMemory::Free();
      }
      if (local_a0[0] != 0) {
        FMemory::Free();
      }
      if (local_b8[0] != 0) {
        FMemory::Free();
      }
      goto LAB_140bec0ad;
    }
  }
  FUN_140bec1a0(param_1);
LAB_140bec0ad:
  plVar19 = local_2c0;
  if (local_2c0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_2c0 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_2c0)(local_2c0);
      LOCK();
      piVar2 = (int *)((longlong)plVar19 + 0xc);
      iVar22 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar22 == 1) {
        (**(code **)(*local_2c0 + 8))(local_2c0,1);
      }
    }
  }
  plVar19 = local_2b0;
  if (local_2b0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_2b0 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_2b0)(local_2b0);
      LOCK();
      piVar2 = (int *)((longlong)plVar19 + 0xc);
      iVar22 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar22 == 1) {
        (**(code **)(*local_2b0 + 8))(local_2b0,1);
      }
    }
  }
  return;
}



// FUNCTION 140bec1a0 FUN_140bec1a0 body=285 status=ok
// SIG undefined FUN_140bec1a0(void)

void FUN_140bec1a0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  longlong *local_28;
  int local_20;
  undefined8 local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  *(undefined4 *)(param_1 + 0x11b0) = *(undefined4 *)(param_1 + 0x11a8);
  if (*(longlong *)(param_1 + 0x11b8) == 0) {
    uStack_10 = 0;
    local_18 = FUN_140bf14d0;
    local_28 = (longlong *)0x0;
    plVar1 = (longlong *)FMemory::Realloc(0,0x30);
    local_20 = 3;
    local_28 = plVar1;
    if (plVar1 != (longlong *)0x0) {
      *plVar1 = (longlong)&PTR_FUN_1443187f0;
      FWeakObjectPtr::operator=(plVar1 + 1,param_1);
      *(undefined4 *)(plVar1 + 2) = (undefined4)local_18;
      *(undefined4 *)((longlong)plVar1 + 0x14) = local_18._4_4_;
      *(undefined4 *)(plVar1 + 3) = uStack_10;
      *(undefined4 *)((longlong)plVar1 + 0x1c) = uStack_c;
      lVar2 = FDelegateHandle::GenerateNewID();
      plVar1[5] = lVar2;
    }
    uVar3 = FUN_14164ab60();
    puVar4 = (undefined8 *)
             FUN_14158f860(uVar3,local_res8,&local_28,L"UOakGameInstance_TickPresence",0);
    *(undefined8 *)(param_1 + 0x11b8) = *puVar4;
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
  return;
}



// FUNCTION 140bec2c0 FUN_140bec2c0 body=266 status=ok
// SIG undefined FUN_140bec2c0(void)

void FUN_140bec2c0(longlong param_1,undefined2 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined2 **ppuVar3;
  int iVar4;
  longlong lVar5;
  undefined2 *puVar6;
  longlong *plVar7;
  undefined2 *local_18;
  longlong *local_10;
  
  ppuVar3 = (undefined2 **)(param_1 + 0x448);
  if (*ppuVar3 == (undefined2 *)0x0) {
    puVar6 = (undefined2 *)operator_new(2);
    if (puVar6 == (undefined2 *)0x0) {
      puVar6 = (undefined2 *)0x0;
    }
    else {
      *puVar6 = *param_2;
    }
    plVar7 = (longlong *)operator_new(0x18);
    if (plVar7 == (longlong *)0x0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      *(undefined4 *)(plVar7 + 1) = 1;
      *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
      *plVar7 = (longlong)&PTR_FUN_144319ad0;
      plVar7[2] = (longlong)puVar6;
    }
    local_18 = puVar6;
    local_10 = plVar7;
    SharedPointerInternals::EnableSharedFromThis(&local_18,puVar6,puVar6);
    if (ppuVar3 != &local_18) {
      *ppuVar3 = puVar6;
      local_18 = (undefined2 *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x450,&local_10);
      plVar7 = local_10;
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar7 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar7)(plVar7);
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
    return;
  }
  **ppuVar3 = *param_2;
  return;
}



// FUNCTION 140bec3d0 FUN_140bec3d0 body=7 status=ok
// SIG undefined FUN_140bec3d0(void)

void FUN_140bec3d0(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xbaf) = param_2;
  return;
}



// FUNCTION 140bec3e0 FUN_140bec3e0 body=204 status=ok
// SIG undefined FUN_140bec3e0(void)

void FUN_140bec3e0(undefined8 param_1,byte param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  lVar4 = UGameInstance::GetGameViewportClient();
  if (lVar4 != 0) {
    FUN_14248df20(lVar4,param_2 ^ 1,0);
  }
  plVar5 = (longlong *)UListView::OnItemSelectionChanged(param_1);
  plVar6 = (longlong *)*plVar5;
  plVar5 = plVar6 + (int)plVar5[1];
  for (; plVar6 != plVar5; plVar6 = plVar6 + 1) {
    if ((*plVar6 != 0) && (plVar1 = *(longlong **)(*plVar6 + 0x30), plVar1 != (longlong *)0x0)) {
      lVar4 = FUN_14145f370();
      if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
          lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (((bVar2) && (cVar3 = FUN_140d00c60(plVar1), cVar3 != '\0')) &&
         (lVar4 = (**(code **)(*plVar1 + 0xfa8))(plVar1), lVar4 != 0)) {
        *(byte *)(lVar4 + 0xcc) = *(byte *)(lVar4 + 0xcc) | 2;
      }
    }
  }
  return;
}



// FUNCTION 140bec4b0 FUN_140bec4b0 body=833 status=ok
// SIG undefined FUN_140bec4b0(void)

void FUN_140bec4b0(longlong param_1,longlong *param_2,undefined8 *param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 local_res10 [8];
  longlong local_78;
  longlong *plStack_70;
  longlong *local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_38;
  longlong *plStack_30;
  longlong local_28 [2];
  
  if (param_2 != (longlong *)0x0) {
    local_48 = *param_3;
    local_40 = param_3[1];
    if (local_40 != 0) {
      LOCK();
      *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
      UNLOCK();
    }
    FUN_142550090(param_2,&local_48);
    (**(code **)(*param_2 + 0x2b8))(param_2,param_4);
    FUN_140d938f0(*(undefined8 *)(param_1 + 0x478),param_3);
    if ((param_2[6] != 0) && (*(longlong *)(param_2[6] + 0x460) != 0)) {
      lVar6 = FUN_141432660();
      if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
          lVar6 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        if ((*(longlong *)(param_1 + 0x1f8) == 0) ||
           (lVar6 = UUGMenuManager::GetFadeHUD(), lVar6 == 0)) {
          local_78 = 0;
          plStack_70 = (longlong *)0x0;
        }
        else {
          FUN_140d3b970(lVar6,&local_78,param_3);
          if (local_78 != 0) {
            local_38 = local_78;
            plStack_30 = plStack_70;
            if (plStack_70 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
              UNLOCK();
            }
            FUN_140e5e390(param_2,&local_38);
            plVar5 = plStack_30;
            if (plStack_30 != (longlong *)0x0) {
              LOCK();
              plVar1 = plStack_30 + 1;
              lVar6 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar6 == 1) {
                (**(code **)*plStack_30)(plStack_30);
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
            FUN_140e52940(param_2);
          }
        }
        lVar6 = **(longlong **)(param_2[6] + 0x460);
        uVar7 = (**(code **)(*param_2 + 0x2c0))(param_2,local_28);
        (**(code **)(lVar6 + 0x730))(*(undefined8 *)(param_2[6] + 0x460),uVar7);
        if (local_28[0] != 0) {
          FMemory::Free();
        }
        plVar5 = plStack_70;
        if (plStack_70 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_70 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plStack_70)(plStack_70);
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
      local_58 = *param_3;
      local_50 = (longlong *)param_3[1];
      if (local_50 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_50 + 1) = (int)local_50[1] + 1;
        UNLOCK();
      }
      (**(code **)(**(longlong **)(param_2[6] + 0x460) + 0x758))
                (*(longlong **)(param_2[6] + 0x460),&local_58);
      plVar5 = local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_50 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_50)(local_50);
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
    FUN_140beb560(param_1,param_3);
    puVar8 = (undefined8 *)FName::FName(local_res10,L"SPARK",1);
    FUN_140bbd560(&local_68,*puVar8);
    if (local_68 != (longlong *)0x0) {
      (**(code **)(*local_68 + 0x30))(local_68,param_3);
    }
    if (-1 < param_4) {
      FUN_140db0b70(&DAT_14686a610,param_4,param_2);
    }
    if (*(longlong *)(param_1 + 0x5b0) != 0) {
      FUN_140eea260(*(longlong *)(param_1 + 0x5b0),param_2,&DAT_14686a610);
    }
    FUN_140bef300(param_1);
    plVar5 = local_60;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_60 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_60 + 8))(local_60,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140bec800 FUN_140bec800 body=246 status=ok
// SIG undefined FUN_140bec800(void)

void FUN_140bec800(longlong param_1,longlong param_2,char param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong local_18;
  longlong *local_10;
  
  if (*(longlong *)(param_1 + 0x1f8) != 0) {
    lVar5 = UUGMenuManager::GetFadeHUD();
    if (lVar5 != 0) {
      lVar5 = FUN_140d3a750(lVar5,param_2);
      if (lVar5 != 0) {
        *(undefined1 *)(lVar5 + 0x1f9) = 0;
        *(undefined1 *)(lVar5 + 0x28) = 1;
        if (param_3 != '\0') {
          *(undefined1 *)(lVar5 + 0x1fa) = 0;
        }
      }
    }
  }
  lVar5 = FUN_142b45e90();
  FUN_142b4a990(*(undefined8 *)(lVar5 + 0x18),&local_18,param_2);
  if (local_18 != 0) {
    FSceneViewport::SetRequiresVsync(local_18,0);
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
  plVar4 = *(longlong **)(param_2 + 8);
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
  return;
}



// FUNCTION 140bec900 FUN_140bec900 body=551 status=ok
// SIG undefined FUN_140bec900(void)

ulonglong FUN_140bec900(longlong *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ulonglong in_RAX;
  longlong lVar4;
  undefined8 uVar5;
  undefined2 **ppuVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  ulonglong uVar10;
  undefined2 *puVar11;
  undefined2 *local_38;
  int local_30;
  undefined4 local_2c;
  undefined2 *local_28;
  int local_20;
  longlong local_18 [2];
  
  if (*(char *)((longlong)param_1 + 0xba9) != '\0') {
LAB_140becb1a:
    return in_RAX & 0xffffffffffffff00;
  }
  lVar4 = (**(code **)(*param_1 + 0x148))();
  if (lVar4 != 0) {
    uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
    in_RAX = FUN_1428cf800(uVar5);
    if ((int)in_RAX == 3) goto LAB_140becb1a;
  }
  in_RAX = FUN_140bb6170(param_1);
  if ((((in_RAX != 0) || (*param_2 != '\x02')) || (param_2[1] != '\0')) ||
     (in_RAX = FUN_140bca8a0(param_1), (char)in_RAX != '\0')) goto LAB_140becb1a;
  puVar11 = (undefined2 *)0x0;
  iVar2 = 0;
  local_38 = (undefined2 *)0x0;
  local_2c = 0;
  lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar4 != 0) {
    ppuVar6 = (undefined2 **)FUN_1428cc8c0(lVar4,local_18);
    iVar2 = 0;
    if (&local_38 != ppuVar6) {
      local_30 = *(int *)(ppuVar6 + 1);
      lVar4 = (longlong)local_30;
      puVar9 = *ppuVar6;
      iVar2 = local_30;
      if (local_30 != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,local_30,0);
        puVar11 = local_38;
        _guard_xfg_dispatch_icall_nop(local_38,puVar9,lVar4 * 2);
        iVar2 = local_30;
      }
    }
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  plVar7 = (longlong *)ULevelSequenceBurnInOptions::GetPrivateStaticClass();
  lVar4 = plVar7[0x1f];
  if (lVar4 == 0) {
    (**(code **)(*plVar7 + 0x368))(plVar7);
    lVar4 = plVar7[0x1f];
  }
  uVar5 = FName::ToString(lVar4 + 0x30,local_18);
  FPackageName::GetLongPackageAssetName(&local_28,uVar5);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (iVar2 < 2) {
LAB_140becab1:
    if ((char)param_1[99] == '\0') {
      uVar5 = FUN_140b960f0();
      iVar2 = FUN_142480900(uVar5);
      iVar3 = FUN_140bba270(param_1);
      if ((iVar2 != iVar3) && (cVar1 = FUN_1411ea6c0(param_1 + 0xf4), cVar1 == '\0')) {
        uVar10 = 1;
        goto LAB_140becaeb;
      }
    }
  }
  else {
    puVar9 = &DAT_143f3eda8;
    if (local_20 != 0) {
      puVar9 = local_28;
    }
    puVar8 = &DAT_143f3eda8;
    if (iVar2 != 0) {
      puVar8 = puVar11;
    }
    iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8,puVar9);
    if (((iVar2 != 0) || (lVar4 = (**(code **)(*param_1 + 0x148))(param_1), lVar4 == 0)) ||
       ((lVar4 = UWorld::GetGameState<APVPGameState>(lVar4), lVar4 == 0 ||
        (*(int *)(lVar4 + 0x618) == 0)))) goto LAB_140becab1;
  }
  uVar10 = 0;
LAB_140becaeb:
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (puVar11 != (undefined2 *)0x0) {
    FMemory::Free(puVar11);
  }
  return uVar10;
}



// FUNCTION 140becb30 FUN_140becb30 body=366 status=ok
// SIG undefined FUN_140becb30(void)

undefined8 FUN_140becb30(void)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int *piVar7;
  longlong local_res10;
  undefined1 local_res18 [16];
  
  lVar1 = DAT_14686a5c8;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar2 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar3 = GetCurrentThreadId(), DVar3 != DAT_1468c21c0)) {
    puVar4 = &DAT_00000004;
  }
  else {
    puVar4 = (undefined1 *)0x0;
  }
  if (*(int *)(puVar4 + lVar1) != 0) {
    piVar7 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x38);
    if ((*piVar7 < DAT_14686a8e0) && (_Init_thread_header(&DAT_14686a8e0), DAT_14686a8e0 == -1)) {
      uVar5 = FCommandLine::Get();
      DAT_14686a8dc = FParse::Param(uVar5,L"GbxNoBootPSOCache");
      _Init_thread_footer(&DAT_14686a8e0);
    }
    if (DAT_14686a8dc == '\0') {
      if ((*piVar7 < DAT_14686a8e8) && (_Init_thread_header(&DAT_14686a8e8), DAT_14686a8e8 == -1)) {
        uVar5 = FCommandLine::Get();
        DAT_14686a8e4 = FParse::Param(uVar5,L"GbxBootPSOCache");
        _Init_thread_footer(&DAT_14686a8e8);
      }
      if (DAT_14686a8e4 != '\0') {
        return 1;
      }
      FName::FName(&local_res10,L"D3D12",1);
      if (DAT_146ab6358 != (longlong *)0x0) {
        uVar5 = (**(code **)(*DAT_146ab6358 + 0x20))();
        plVar6 = (longlong *)FName::FName(local_res18,uVar5,1);
        if (*plVar6 == local_res10) {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140becca0 FUN_140becca0 body=24 status=ok
// SIG undefined FUN_140becca0(void)

undefined1 FUN_140becca0(longlong param_1)

{
  if ((*(char *)(param_1 + 0x458) == '\0') && (*(char *)(param_1 + 0xb18) != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 140beccc0 FUN_140beccc0 body=59 status=ok
// SIG undefined FUN_140beccc0(void)

undefined8 FUN_140beccc0(longlong *param_1)

{
  longlong lVar1;
  
  if (param_1 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_1 + 0x148))();
    if (lVar1 != 0) {
      lVar1 = UWorld::GetGameState<APVPGameState>(lVar1);
      if ((lVar1 != 0) && (*(int *)(lVar1 + 0x618) == 1)) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 140becd00 FUN_140becd00 body=228 status=ok
// SIG undefined FUN_140becd00(void)

void FUN_140becd00(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (local_20,L"Use Defaults?",L"OakGameInstance",L"CorruptProfileHeader");
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (local_38,
             L"Save data is corrupt and must be overwritten to proceed. Overwrite with default settings?"
             ,L"OakGameInstance",L"CorruptProfileMessage");
  FUN_140bed7b0(param_1,param_2,local_20,local_38,1);
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
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)local_18 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_18 + 8))(local_18,1);
      }
    }
  }
  return;
}



// FUNCTION 140becdf0 FUN_140becdf0 body=382 status=ok
// SIG undefined FUN_140becdf0(void)

void FUN_140becdf0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_88 [8];
  undefined8 local_80;
  undefined **local_78;
  undefined1 local_70 [24];
  undefined1 local_58 [24];
  undefined1 local_40 [8];
  longlong *local_38;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if (*(char *)(param_1 + 0x459) != '\0') {
    *(undefined1 *)(param_1 + 0x459) = 0;
    FWeakObjectPtr::operator=(local_res8,0);
    FWeakObjectPtr::operator=(local_res10,0);
    FWeakObjectPtr::operator=(local_88,0);
    local_80 = 0;
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_28,L"Players on other platforms can now join your games",
                       L"OakGameInstance",L"CrossplayMessage");
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_40,L"Cross-play is enabled",L"OakGameInstance",L"CrossplayEnabled");
    local_78 = &PTR_FUN_1443170a0;
    FText::FText(local_70,uVar6);
    FText::FText(local_58,uVar5);
    FUN_140c23780(1,&local_78,local_88,local_res10,local_res8,2);
    FUN_140b9cdd0(&local_78);
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar2 = (int *)((longlong)local_38 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_38 + 8))(local_38,1);
        }
      }
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
  return;
}



// FUNCTION 140becf70 FUN_140becf70 body=1394 status=ok
// SIG undefined FUN_140becf70(void)

void FUN_140becf70(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  undefined4 local_1c8;
  undefined4 local_1c4;
  longlong local_1c0;
  undefined1 local_1b8 [8];
  longlong *local_1b0;
  undefined8 local_1a0;
  longlong local_198;
  undefined8 local_190;
  longlong *local_188;
  longlong *local_180;
  longlong local_178;
  undefined1 local_170 [8];
  undefined1 local_168 [8];
  undefined4 local_160;
  undefined4 local_15c;
  longlong local_158;
  undefined **local_150;
  undefined1 local_148 [8];
  longlong *local_140;
  undefined1 local_130 [8];
  longlong *local_128;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  longlong *local_108;
  undefined1 local_f8 [8];
  longlong *local_f0;
  undefined1 local_e0 [8];
  longlong *local_d8;
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 local_b0 [8];
  longlong *local_a8;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_80 [8];
  longlong *local_78;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_50 [8];
  longlong *local_48;
  undefined1 local_38 [8];
  longlong *local_30;
  
  FText::FText(local_1b8);
  switch(param_2) {
  case 4:
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_b0,
                       L"The connection to the host failed, there have been too many recent online requests.  Please wait and try again later."
                       ,L"OakGameInstance",L"InviteFailedRateLimit");
    FText::operator=(local_1b8,uVar6);
    local_48 = local_a8;
    break;
  case 5:
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_110,L"An active player is already in the game session.",
                       L"OakGameInstance",L"InviteFailedInSession");
    FText::operator=(local_1b8,uVar6);
    local_48 = local_108;
    break;
  case 6:
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_f8,
                       L"The connection to the host failed. The game invitation has expired.",
                       L"OakGameInstance",L"InviteFailedExpired");
    FText::operator=(local_1b8,uVar6);
    local_48 = local_f0;
    break;
  case 7:
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_e0,
                       L"The connection to the host failed. The game invitation has already been used."
                       ,L"OakGameInstance",L"InviteFailedAlreadyUsed");
    FText::operator=(local_1b8,uVar6);
    local_48 = local_d8;
    break;
  case 8:
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_c8,
                       L"The connection to the host failed. The game session no longer exists.",
                       L"OakGameInstance",L"InviteFailedSessionNoLongerExists");
    FText::operator=(local_1b8,uVar6);
    local_48 = local_c0;
    break;
  case 9:
    FText::operator=(local_1b8,&DAT_14686f4c8);
    goto LAB_140bed276;
  case 10:
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_98,
                       L"The connection to the host failed. Please check your network cables and configuration and try again."
                       ,L"OakGameInstance",L"InviteFailedNetworkError");
    FText::operator=(local_1b8,uVar6);
    local_48 = local_90;
    break;
  case 0xb:
    FUN_1404cf2e0(&local_188,0);
    if (local_188 != (longlong *)0x0) {
      local_198 = 0;
      local_190 = 0;
      (**(code **)(*local_188 + 0x30))(local_188,param_3,0,&local_198);
      if (local_198 != 0) {
        FMemory::Free();
      }
    }
    plVar8 = local_180;
    if (local_180 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_180 + 1;
      lVar10 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_180)(local_180);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_180 + 8))(local_180,1);
        }
      }
    }
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_80,
                       L"This feature requires all active players to be connected to Xbox Live and have multiplayer privileges."
                       ,L"OakGameInstance",L"InviteFailedNoPrivilege");
    FText::operator=(local_1b8,uVar6);
    local_48 = local_78;
    break;
  case 0xc:
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_68,
                       L"A required game patch is available. Please update to access online features."
                       ,L"OakGameInstance",L"InviteFailedPatchAvailable");
    FText::operator=(local_1b8,uVar6);
    local_48 = local_60;
    break;
  default:
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_50,
                       L"The connection to the host failed. You cannot join the game session.",
                       L"OakGameInstance",L"InviteFailed");
    FText::operator=(local_1b8,uVar6);
  }
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_48 + 1;
    lVar10 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)local_48 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_48 + 8))(local_48,1);
      }
    }
  }
LAB_140bed276:
  FWeakObjectPtr::operator=(&local_1c8,0);
  local_1c0 = 0;
  puVar7 = (undefined8 *)FName::FName(local_118,L"GbxShiftOverlay",1);
  plVar8 = (longlong *)FModuleManager::GetModulePtr_Internal(*puVar7);
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0xb0))(plVar8,DAT_14686a658);
    pwVar9 = _guard_xfg_dispatch_icall_nop(L"&UOakGameInstance::OnModalDialogChoiceMade",L"::");
    pwVar5 = (wchar_t *)0x0;
    while (pwVar4 = pwVar9, pwVar4 != (wchar_t *)0x0) {
      pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
      pwVar5 = pwVar4;
    }
    FName::FName(&local_178,pwVar5 + 2,1);
    FWeakObjectPtr::operator=(&local_1c8,param_1);
    local_1c0 = local_178;
    local_1a0 = 0;
    if ((local_178 != 0) && (lVar10 = FWeakObjectPtr::Get(&local_1c8), lVar10 != 0)) {
      UObject::FindFunction(lVar10,local_1c0);
    }
  }
  uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_38,L"Connection Failed",L"OakGameInstance",L"ConnectionFailed");
  local_150 = &PTR_FUN_1443170a0;
  FText::FText(local_148,uVar6);
  FText::FText(local_130,local_1b8);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_30 + 1;
    lVar10 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
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
  local_150 = &PTR_FUN_1443170a0;
  FWeakObjectPtr::operator=(local_170,0);
  FWeakObjectPtr::operator=(local_168,0);
  local_160 = local_1c8;
  local_15c = local_1c4;
  local_158 = local_1c0;
  FUN_140c23780(2,&local_150,&local_160,local_168,local_170,2);
  local_150 = &PTR_FUN_1443170a0;
  if (local_128 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_128 + 1;
    lVar10 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_128)(local_128);
      LOCK();
      piVar2 = (int *)((longlong)local_128 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_128 + 8))(local_128,1);
      }
    }
  }
  if (local_140 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_140 + 1;
    lVar10 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_140)(local_140);
      LOCK();
      piVar2 = (int *)((longlong)local_140 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_140 + 8))(local_140,1);
      }
    }
  }
  if (local_1b0 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_1b0 + 1;
    lVar10 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_1b0)(local_1b0);
      LOCK();
      piVar2 = (int *)((longlong)local_1b0 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_1b0 + 8))(local_1b0,1);
      }
    }
  }
  return;
}



// FUNCTION 140bed510 FUN_140bed510 body=399 status=ok
// SIG undefined FUN_140bed510(void)

void FUN_140bed510(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 local_res20 [8];
  longlong *local_48;
  int local_40;
  longlong *local_38;
  longlong *local_30;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  FUN_1404cf2e0(&local_38,0);
  if ((local_38 == (longlong *)0x0) ||
     (cVar4 = (**(code **)(*local_38 + 0x10))(local_38,8), cVar4 == '\0')) goto LAB_140bed64a;
  uStack_20 = 0;
  local_28 = FUN_140bdff70;
  local_48 = (longlong *)0x0;
  plVar5 = (longlong *)FMemory::Realloc(0,0x30,0);
  local_40 = 3;
  local_48 = plVar5;
  if (plVar5 != (longlong *)0x0) {
    *plVar5 = (longlong)&PTR_FUN_144318d40;
    FWeakObjectPtr::operator=(plVar5 + 1,param_1);
    *(undefined4 *)(plVar5 + 2) = (undefined4)local_28;
    *(undefined4 *)((longlong)plVar5 + 0x14) = local_28._4_4_;
    *(undefined4 *)(plVar5 + 3) = uStack_20;
    *(undefined4 *)((longlong)plVar5 + 0x1c) = uStack_1c;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar5[5] = lVar6;
    *plVar5 = (longlong)&PTR_FUN_144318d88;
  }
  puVar7 = (undefined8 *)(**(code **)(*local_38 + 0x218))(local_38,local_res20,&local_48);
  *(undefined8 *)(param_1 + 0xf68) = *puVar7;
  if (local_40 == 0) {
LAB_140bed62f:
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
    goto LAB_140bed62f;
  }
  (**(code **)(*local_38 + 0x60))(local_38,param_2,1);
LAB_140bed64a:
  plVar5 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  return;
}



// FUNCTION 140bed6a0 FUN_140bed6a0 body=267 status=ok
// SIG undefined FUN_140bed6a0(void)

void FUN_140bed6a0(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 local_48 [8];
  undefined8 local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  FWeakObjectPtr::operator=(local_48,0);
  local_40 = 0;
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_20,L"This option is not available while matchmaking is active.",
                     L"OakGameInstance",L"NotAllowedWhileMatchmakingMsgText");
  uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_38,L"Not Allowed",L"OakGameInstance",
                     L"NotAllowedWhileMatchmakingHeaderText");
  FUN_1410f3960(param_2,uVar6,uVar5,local_48,0,0,2);
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
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)local_18 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_18 + 8))(local_18,1);
      }
    }
  }
  return;
}



// FUNCTION 140bed7b0 FUN_140bed7b0 body=698 status=ok
// SIG undefined FUN_140bed7b0(void)

void FUN_140bed7b0(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  bool bVar1;
  wchar_t *pwVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  undefined8 uVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  undefined8 local_58;
  longlong local_50;
  longlong local_48;
  undefined1 local_40 [8];
  longlong local_38;
  undefined8 local_30;
  longlong local_28;
  
  pwVar8 = (wchar_t *)0x0;
  lVar3 = UGameInstance::GetGameViewportClient();
  if (lVar3 == 0) {
    return;
  }
  if (*(char *)(lVar3 + 0x80) != '\0') {
    local_30 = *param_2;
    local_28 = param_2[1];
    if (local_28 != 0) {
      LOCK();
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      UNLOCK();
    }
    lVar3 = FUN_14244c070(param_1,&local_30);
    pwVar6 = (wchar_t *)0x0;
    pwVar4 = pwVar8;
    if (lVar3 != 0) {
      uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
      pwVar6 = (wchar_t *)UPlayer::GetPlayerController(lVar3,uVar5);
      if (pwVar6 != (wchar_t *)0x0) {
        lVar3 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(pwVar6 + 8) + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(pwVar6 + 8) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
             ) != lVar3 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        pwVar4 = pwVar6;
        if (bVar1) goto LAB_140bed969;
      }
      pwVar6 = pwVar8;
      pwVar4 = pwVar8;
    }
    goto LAB_140bed969;
  }
  pwVar4 = (wchar_t *)FUN_14244f490(param_1,0);
  if (pwVar4 == (wchar_t *)0x0) {
LAB_140bed849:
    pwVar4 = pwVar8;
  }
  else {
    lVar3 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(pwVar4 + 8) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar4 + 8) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140bed849;
  }
  local_58 = *param_2;
  local_50 = param_2[1];
  if (local_50 != 0) {
    LOCK();
    *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
    UNLOCK();
  }
  lVar3 = FUN_14244c070(param_1,&local_58);
  pwVar6 = pwVar8;
  if (lVar3 != 0) {
    uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
    pwVar6 = (wchar_t *)UPlayer::GetPlayerController(lVar3,uVar5);
    if (pwVar6 != (wchar_t *)0x0) {
      lVar3 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(pwVar6 + 8) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(pwVar6 + 8) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
          != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) goto LAB_140bed969;
    }
    pwVar6 = (wchar_t *)0x0;
  }
LAB_140bed969:
  *(undefined4 *)((longlong)param_1 + 0x10dc) = param_5;
  FWeakObjectPtr::operator=(local_40,0);
  local_38 = 0;
  pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnProfileErrorMessageClicked",L"::");
  while (pwVar2 = pwVar7, pwVar2 != (wchar_t *)0x0) {
    pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
    pwVar8 = pwVar2;
  }
  FName::FName(&local_48,pwVar8 + 2,1);
  FWeakObjectPtr::operator=(local_40,param_1);
  local_38 = local_48;
  local_58 = 0;
  if ((local_48 != 0) && (lVar3 = FWeakObjectPtr::Get(local_40), lVar3 != 0)) {
    UObject::FindFunction(lVar3,local_38);
  }
  FUN_1410f47a0(pwVar4,param_3,param_4,local_40,1,pwVar6,2,0,0);
  if (param_1[0x8c] != 0) {
    FUN_140bc3630(param_1);
  }
  return;
}



// FUNCTION 140beda70 FUN_140beda70 body=228 status=ok
// SIG undefined FUN_140beda70(void)

void FUN_140beda70(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (local_20,L"Try Again?",L"OakGameInstance",L"WriteProfileFailedHeader");
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (local_38,L"Your settings have failed to save. Would you like to try saving again?",
             L"OakGameInstance",L"WriteProfileFailedMessage");
  FUN_140bed7b0(param_1,param_2,local_20,local_38,2);
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
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)local_18 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_18 + 8))(local_18,1);
      }
    }
  }
  return;
}



// FUNCTION 140bedb60 FUN_140bedb60 body=1320 status=ok
// SIG undefined FUN_140bedb60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140bedb60(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined1 auStack_1c8 [32];
  longlong *local_1a8;
  undefined4 local_1a0;
  undefined1 local_198;
  longlong local_188;
  undefined8 local_180;
  undefined4 *local_178;
  ulonglong *puStack_170;
  longlong local_168;
  longlong *local_160;
  undefined8 local_158;
  longlong *local_150;
  undefined1 local_148 [8];
  longlong *local_140;
  undefined8 local_130;
  longlong local_128;
  undefined1 local_120 [8];
  undefined1 local_118 [16];
  undefined1 local_108 [8];
  longlong *local_100;
  undefined1 local_f0 [8];
  longlong *local_e8;
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
  
  local_38[0] = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  if ((*(longlong *)(param_1 + 0xfc8) == 0) && (lVar7 = FUN_14244f490(param_1,0), lVar7 != 0)) {
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
    if ((bVar5) && (*(longlong *)(lVar7 + 0x1428) != 0)) {
      lVar8 = *(longlong *)(param_1 + 0x460);
      local_188 = 0;
      local_180 = 0;
      if (lVar8 != 0) {
        local_160 = *(longlong **)(param_1 + 0x468);
        if (local_160 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_160 + 1) = (int)local_160[1] + 1;
          UNLOCK();
        }
        local_1a8 = &local_188;
        local_168 = lVar8;
        FUN_140d79f00(*(undefined8 *)(param_1 + 0x478),&local_168,1,0);
        plVar4 = local_160;
        if (local_160 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_160 + 1;
          lVar8 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_160)(local_160);
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
      FText::FText(local_148);
      if ((int)local_180 < 2) {
        uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_a8,L"Signing in",L"OakGameInstance",
                           L"SplitscreenJoinTitle_NoNickname");
        FText::operator=(local_148,uVar9);
      }
      else {
        lVar8 = FText::FromString(local_80,&local_188);
        uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_c0,L"Signing in {0}",L"OakGameInstance",L"SplitscreenJoinTitle");
        puVar10 = (undefined8 *)FTextFormat::FTextFormat(local_90,uVar9);
        local_68[0] = 4;
        FText::FText(local_58,lVar8);
        local_130 = *puVar10;
        local_178 = local_68;
        puStack_170 = local_38;
        local_128 = puVar10[1];
        local_40 = '\x01';
        if (local_128 != 0) {
          LOCK();
          *(int *)(local_128 + 8) = *(int *)(local_128 + 8) + 1;
          UNLOCK();
        }
        uVar9 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                TArray<FFormatArgumentValue,FDefaultAllocator>(local_118,&local_178);
        uVar9 = FText::Format(local_d8,&local_130,uVar9);
        FText::FText(local_108,uVar9);
        if (local_d0 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_d0 + 1;
          lVar6 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_d0)(local_d0);
            LOCK();
            piVar2 = (int *)((longlong)local_d0 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_d0 + 8))(local_d0,1);
            }
          }
        }
        TArray<FFormatArgumentValue,FDefaultAllocator>::
        ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_118);
        if ((local_40 != '\0') && (local_40 = '\0', local_50 != (longlong *)0x0)) {
          LOCK();
          plVar4 = local_50 + 1;
          lVar6 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar2 = (int *)((longlong)local_50 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_50 + 8))(local_50,1);
            }
          }
        }
        plVar4 = (longlong *)puVar10[1];
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
        plVar4 = *(longlong **)(lVar8 + 8);
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar4 + 1;
          lVar8 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
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
        FText::operator=(local_148,local_108);
        local_a0 = local_b8;
        if (local_100 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_100 + 1;
          lVar8 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_100)(local_100);
            LOCK();
            piVar2 = (int *)((longlong)local_100 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            local_a0 = local_b8;
            if (iVar3 == 1) {
              (**(code **)(*local_100 + 8))(local_100,1);
              local_a0 = local_b8;
            }
          }
        }
      }
      if (local_a0 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_a0 + 1;
        lVar8 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_a0)(local_a0);
          LOCK();
          piVar2 = (int *)((longlong)local_a0 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_a0 + 8))(local_a0,1);
          }
        }
      }
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (local_f0,L"Please wait...",L"OakGameInstance",L"SplitscreenJoinDescription");
      local_158 = *(undefined8 *)(param_1 + 0x460);
      local_150 = *(longlong **)(param_1 + 0x468);
      if (local_150 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_150 + 1) = (int)local_150[1] + 1;
        UNLOCK();
      }
      local_1a8 = &local_158;
      local_198 = 0;
      local_1a0 = 0;
      puVar10 = (undefined8 *)
                FUN_1411d94f0(*(undefined8 *)(lVar7 + 0x1428),local_120,local_148,local_f0);
      plVar4 = local_150;
      *(undefined8 *)(param_1 + 0xfc8) = *puVar10;
      if (local_150 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_150 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_150)(local_150);
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
      if (local_e8 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_e8 + 1;
        lVar7 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_e8)(local_e8);
          LOCK();
          piVar2 = (int *)((longlong)local_e8 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_e8 + 8))(local_e8,1);
          }
        }
      }
      if (local_140 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_140 + 1;
        lVar7 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_140)(local_140);
          LOCK();
          piVar2 = (int *)((longlong)local_140 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_140 + 8))(local_140,1);
          }
        }
      }
      if (local_188 != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140bee090 FUN_140bee090 body=387 status=ok
// SIG undefined FUN_140bee090(void)

void FUN_140bee090(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_88 [8];
  undefined8 local_80;
  undefined **local_78;
  undefined1 local_70 [24];
  undefined1 local_58 [24];
  undefined1 local_40 [8];
  longlong *local_38;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if (*(char *)(param_1 + 0x1050) == '\0') {
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_28,
                       L"Your voice engine has failed to initialize properly, typically due to corrupted or non-existent drivers. Diagnose the issue on your local system and restart the game to re-enable voice communication."
                       ,L"OakGameInstance",L"VoiceErrorEngineNotInitialized");
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_40,L"Voice Error",L"OakGameInstance",L"VoiceError");
    local_78 = &PTR_FUN_1443170a0;
    FText::FText(local_70,uVar6);
    FText::FText(local_58,uVar5);
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar2 = (int *)((longlong)local_38 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_38 + 8))(local_38,1);
        }
      }
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
    FWeakObjectPtr::operator=(local_res8,0);
    FWeakObjectPtr::operator=(local_res10,0);
    FWeakObjectPtr::operator=(local_88,0);
    local_80 = 0;
    FUN_140c23780(2,&local_78,local_88,local_res10,local_res8,2);
    *(undefined1 *)(param_1 + 0x1050) = 1;
    FUN_140b9cdd0(&local_78);
  }
  return;
}



// FUNCTION 140bee220 FUN_140bee220 body=1901 status=ok
// SIG undefined FUN_140bee220(void)

void FUN_140bee220(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  uint uVar8;
  DWORD DVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong *plVar14;
  longlong *plVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong *plVar18;
  ulonglong uVar19;
  undefined1 local_res20 [8];
  longlong local_98 [2];
  longlong *local_88;
  longlong *local_80;
  longlong local_78 [2];
  undefined1 local_68 [40];
  
  uVar19 = 0;
  if (*(longlong *)(param_1 + 0x998) != 0) {
    uVar10 = FUN_14164ab60();
    FUN_141597530(uVar10,*(undefined8 *)(param_1 + 0x998));
    *(undefined8 *)(param_1 + 0x998) = 0;
  }
  plVar11 = (longlong *)UGameInstance::GetGameViewportClient(param_1);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_14686a6c8) && (_Init_thread_header(&DAT_14686a6c8), DAT_14686a6c8 == -1))
  {
    uVar10 = FCommandLine::Get();
    DAT_14686a6c4 = FParse::Param(uVar10,L"vkLogPSO");
    _Init_thread_footer(&DAT_14686a6c8);
  }
  if ((plVar11 != (longlong *)0x0) && (DAT_14686a6c4 != '\0')) {
    local_98[0] = 0;
    local_98[1] = 0x1b;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_98,0);
    FGenericPlatformString::Memcpy(local_98[0],L"r.Vulkan.SavePipelineCache",0x36);
    (**(code **)(*plVar11 + 0x2e8))(plVar11,local_78,local_98);
    if (local_78[0] != 0) {
      FMemory::Free();
    }
    if (local_98[0] != 0) {
      FMemory::Free();
    }
  }
  if (*(longlong *)(param_1 + 0x13e0) != 0) {
    TBaseMulticastDelegate<void>::Remove(&DAT_146532738,*(undefined8 *)(param_1 + 0x13e0));
    *(undefined8 *)(param_1 + 0x13e0) = 0;
  }
  if (*(longlong **)(param_1 + 0x1f8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x1f8) + 0x280))();
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x1f8) + 0xc);
    uVar13 = uVar19;
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar16 = iVar2 >> 0x1f & 0xffff;
      uVar8 = iVar2 + uVar16;
      uVar13 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
               (longlong)(int)((uVar8 & 0xffff) - uVar16) * 0x18;
    }
    *(uint *)(uVar13 + 8) = *(uint *)(uVar13 + 8) | 0x20000000;
    *(undefined8 *)(param_1 + 0x1f8) = 0;
  }
  if (*(longlong *)(param_1 + 0x11f0) != 0) {
    FUN_140db7f10();
    *(undefined8 *)(param_1 + 0x11f0) = 0;
  }
  FUN_140c233a0();
  FUN_140c27a20(0);
  FUN_140c0e000();
  lVar12 = FUN_140cb5ff0();
  if (lVar12 != 0) {
    uVar10 = FUN_140cb5ff0();
    FUN_140cd4e60(uVar10,0);
  }
  uVar13 = *(ulonglong *)(param_1 + 0x1088);
  if (uVar13 == 0) {
    lVar12 = operator_new(0x1a8);
    uVar13 = uVar19;
    if (lVar12 != 0) {
      uVar13 = FUN_140d64540(lVar12);
    }
    *(ulonglong *)(param_1 + 0x1088) = uVar13;
  }
  FUN_140da0180(uVar13);
  plVar14 = (longlong *)FUN_140bb7440(param_1);
  (**(code **)(*plVar14 + 0x20))(plVar14);
  plVar14 = (longlong *)FUN_140bb7220(param_1);
  (**(code **)(*plVar14 + 0x20))(plVar14);
  uVar10 = FUN_140bb73a0(param_1);
  FUN_140d9ff60(uVar10);
  uVar10 = FUN_140bb7190(param_1);
  FUN_140d9feb0(uVar10);
  lVar12 = *(longlong *)(param_1 + 0x1088);
  if (lVar12 != 0) {
    FUN_140b9cf60(lVar12);
    FMemory::operator_delete(lVar12,0x1a8);
  }
  puVar3 = *(undefined8 **)(param_1 + 0x1090);
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  puVar3 = *(undefined8 **)(param_1 + 0x1098);
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  lVar12 = *(longlong *)(param_1 + 0x10a0);
  if (lVar12 != 0) {
    *(undefined4 *)(lVar12 + 0x58) = 0;
    if (*(longlong *)(lVar12 + 0x50) != 0) {
      FMemory::Free();
    }
    FUN_140bb04a0(lVar12 + 0x10,0);
    if (*(longlong *)(lVar12 + 0x30) != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(lVar12 + 0x10) != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(lVar12,0x80);
  }
  lVar12 = *(longlong *)(param_1 + 0x10a8);
  if (lVar12 != 0) {
    *(undefined4 *)(lVar12 + 0x50) = 0;
    if (*(longlong *)(lVar12 + 0x48) != 0) {
      FMemory::Free();
    }
    FUN_140bb0250(lVar12 + 8,0);
    if (*(longlong *)(lVar12 + 0x28) != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(lVar12 + 8) != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(lVar12,0x78);
  }
  *(undefined8 *)(param_1 + 0x1088) = 0;
  *(undefined8 *)(param_1 + 0x1090) = 0;
  *(undefined8 *)(param_1 + 0x1098) = 0;
  *(undefined8 *)(param_1 + 0x10a0) = 0;
  *(undefined8 *)(param_1 + 0x10a8) = 0;
  plVar14 = *(longlong **)(param_1 + 0x10c0);
  uVar13 = (longlong)*(int *)(param_1 + 0x10c8) & 0x1fffffffffffffff;
  if (plVar14 + *(int *)(param_1 + 0x10c8) < plVar14) {
    uVar13 = uVar19;
  }
  uVar17 = uVar19;
  if (uVar13 != 0) {
    do {
      if (*plVar14 != 0) {
        FUN_140c58fa0();
      }
      plVar14 = plVar14 + 1;
      uVar17 = uVar17 + 1;
    } while (uVar17 != uVar13);
  }
  if (*(longlong *)(param_1 + 0xae8) != 0) {
    FUN_1404c94a0();
    puVar3 = *(undefined8 **)(param_1 + 0xae8);
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
    *(undefined8 *)(param_1 + 0xae8) = 0;
  }
  lVar12 = *(longlong *)(param_1 + 0x1198);
  plVar14 = (longlong *)FUN_140bb74b0(param_1);
  uVar13 = uVar19;
  if (0 < (int)plVar14[1]) {
    do {
      plVar18 = (longlong *)(*plVar14 + uVar13);
      if ((((int)plVar18[1] != 0) && (plVar15 = (longlong *)*plVar18, plVar15 != (longlong *)0x0))
         && (plVar15 = (longlong *)(**(code **)(*plVar15 + 0x20))(plVar15,local_res20),
            *plVar15 == lVar12)) {
        if (((int)plVar18[1] != 0) && (plVar15 = (longlong *)*plVar18, plVar15 != (longlong *)0x0))
        {
          (**(code **)(*plVar15 + 0x28))(plVar15,0);
          if (*plVar18 != 0) {
            lVar12 = FMemory::Realloc(*plVar18,0,0);
            *plVar18 = lVar12;
          }
          *(undefined4 *)(plVar18 + 1) = 0;
        }
        break;
      }
      uVar8 = (int)uVar19 + 1;
      uVar19 = (ulonglong)uVar8;
      uVar13 = uVar13 + 0x10;
    } while ((int)uVar8 < (int)plVar14[1]);
  }
  FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar14,0);
  uVar10 = FUN_140bb74b0(param_1);
  FUN_140da0140(uVar10);
  lVar12 = *(longlong *)(param_1 + 0x1080);
  if (lVar12 != 0) {
    FUN_140d65c40(lVar12);
    FMemory::operator_delete(lVar12,0x1c0);
  }
  *(undefined8 *)(param_1 + 0x1080) = 0;
  FUN_140bbc430(&local_88,0);
  if (local_88 != (longlong *)0x0) {
    (**(code **)(*local_88 + 0x28))(local_88,param_1 + 0x11a0);
  }
  *(undefined8 *)(param_1 + 0x11a0) = 0;
  if (*(longlong *)(param_1 + 0x4e0) != 0) {
    FUN_140dd23e0();
  }
  TArray<Chaos::TAABBTreeLeafArray<int,0>,TSizedDefaultAllocator<32>_>::Reset(&DAT_14686a610);
  if (*(longlong *)(param_1 + 0x5b0) != 0) {
    FUN_140ee3890();
    *(undefined8 *)(param_1 + 0x5b0) = 0;
  }
  lVar12 = *(longlong *)(param_1 + 0x5a8);
  if (lVar12 != 0) {
    FWeakObjectPtr::operator=(lVar12 + 0x28,0);
    *(undefined8 *)(lVar12 + 0x30) = 0;
    lVar12 = *(longlong *)(param_1 + 0x5a8);
    if ((*(int *)(lVar12 + 0x40) != 0) &&
       (plVar14 = *(longlong **)(lVar12 + 0x38), plVar14 != (longlong *)0x0)) {
      (**(code **)(*plVar14 + 0x28))(plVar14,0);
      if (*(longlong *)(lVar12 + 0x38) != 0) {
        uVar10 = FMemory::Realloc(*(longlong *)(lVar12 + 0x38),0,0);
        *(undefined8 *)(lVar12 + 0x38) = uVar10;
      }
      *(undefined4 *)(lVar12 + 0x40) = 0;
    }
    *(undefined8 *)(param_1 + 0x5a8) = 0;
  }
  if (*(longlong *)(param_1 + 0x5b8) != 0) {
    FUN_140ff3230();
    *(undefined8 *)(param_1 + 0x5b8) = 0;
  }
  if (((plVar11 != (longlong *)0x0) && ((int)plVar11[0x5d] != 0)) &&
     (plVar14 = (longlong *)plVar11[0x5c], plVar14 != (longlong *)0x0)) {
    (**(code **)(*plVar14 + 0x28))(plVar14,0);
    if (plVar11[0x5c] != 0) {
      lVar12 = FMemory::Realloc(plVar11[0x5c],0,0);
      plVar11[0x5c] = lVar12;
    }
    *(undefined4 *)(plVar11 + 0x5d) = 0;
  }
  if (*(longlong *)(param_1 + 0x10d0) != 0) {
    FUN_140dd2580();
  }
  FUN_1411fc760(param_1 + 0x7a0);
  lVar12 = FUN_140def780();
  if (lVar12 != 0) {
    FUN_140e06bb0(lVar12);
  }
  lVar12 = FUN_140a08d00();
  if (((lVar12 != 0) && (DAT_1468536c6 == '\0')) &&
     ((DAT_1468536c5 != '\0' && ((DAT_1468536c8 != 0 && (*(longlong *)(lVar12 + 0x1f0) != 0)))))) {
    FUN_1405a1960();
  }
  cVar7 = FUN_140becb30(param_1);
  if (cVar7 != '\0') {
    if (((DAT_146ac3ac6 == '\0') || (cVar7 = IsInRenderingThread(), cVar7 == '\0')) &&
       ((DAT_146ac3ac5 != '\0' ||
        (((cVar7 = FUN_1415ad720(&DAT_1468e2448), cVar7 == '\0' && (DAT_1468c21ae != '\0')) &&
         (DVar9 = GetCurrentThreadId(), DVar9 != DAT_1468c21c0)))))) {
      plVar11 = (longlong *)FUN_140bad970(local_68,0,0xff);
      lVar12 = *plVar11;
      lVar6 = plVar11[2];
      lVar4 = plVar11[1];
      lVar5 = *(longlong *)(lVar12 + 0x18);
      piVar1 = (int *)(lVar5 + 0x48);
      if (lVar5 != 0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      FUN_140445370(lVar12,lVar4,(int)lVar6,1);
      if (lVar5 != 0) {
        LOCK();
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          FGraphEvent::Recycle(lVar5);
        }
      }
    }
    else {
      FBaseGraphTask::GetSmallTaskAllocator();
      FUN_141a10300();
    }
    FUN_141ee24f0(0);
  }
  FUN_142d6fd70(param_1);
  plVar11 = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_80 + 1;
    lVar12 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_80 + 8))(local_80,1);
      }
    }
  }
  return;
}



// FUNCTION 140bee990 FUN_140bee990 body=877 status=ok
// SIG undefined FUN_140bee990(void)

void FUN_140bee990(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong local_a8;
  longlong *plStack_a0;
  undefined **local_98;
  longlong local_90;
  longlong *local_88;
  longlong local_80;
  undefined8 local_78;
  longlong local_68;
  longlong *plStack_60;
  longlong local_58;
  longlong *plStack_50;
  undefined **local_48 [2];
  longlong *local_38;
  longlong local_30;
  
  if (param_2 == 0) {
    return;
  }
  lVar6 = FUN_142547b50(param_2,local_48);
  local_a8 = *(longlong *)(lVar6 + 8);
  plStack_a0 = *(longlong **)(lVar6 + 0x10);
  if (plStack_a0 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_a0 + 1) = (int)plStack_a0[1] + 1;
    UNLOCK();
  }
  local_48[0] = &PTR_FUN_143f740c8;
  if (local_30 != 0) {
    FMemory::Free();
  }
  local_48[0] = &PTR_FUN_143f73d18;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_38 + 1;
    lVar6 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)local_38 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_38 + 8))(local_38,1);
      }
    }
  }
  if (local_a8 != 0) {
    local_68 = local_a8;
    plStack_60 = plStack_a0;
    if (plStack_a0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_a0 + 1) = (int)plStack_a0[1] + 1;
      UNLOCK();
    }
    FUN_140dce760(param_1 + 0x5f0,&local_68);
    plVar9 = plStack_60;
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_60 + 1;
      lVar6 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plStack_60)(plStack_60);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
  }
  FUN_140ba9370(param_1,param_2);
  plVar9 = *(longlong **)(param_2 + 0x30);
  if (plVar9 != (longlong *)0x0) {
    lVar6 = FUN_14145f370();
    if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      uVar7 = (**(code **)(*plVar9 + 0xfa8))(plVar9);
      FUN_142ee8350(uVar7);
      goto LAB_140beeb0b;
    }
  }
  plVar9 = (longlong *)0x0;
LAB_140beeb0b:
  FUN_142d6d4b0(param_1,param_2);
  lVar6 = FUN_140bb7870(param_1);
  if (lVar6 != 0) {
    thunk_FUN_1404d2ae0(lVar6);
    FUN_140bf3dd0(param_1);
  }
  lVar6 = FUN_140bb6170(param_1);
  if ((lVar6 != 0) && (local_a8 != 0)) {
    local_90 = local_a8;
    local_88 = plStack_a0;
    if (plStack_a0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_a0 + 1) = (int)plStack_a0[1] + 1;
      UNLOCK();
    }
    local_98 = &PTR_FUN_143f740c8;
    local_80 = 0;
    local_78 = 0;
    uVar7 = FUN_140bb6170(param_1);
    FUN_1404df4c0(uVar7,&local_98);
    local_98 = &PTR_FUN_143f740c8;
    if (local_80 != 0) {
      FMemory::Free();
    }
    plVar2 = local_88;
    local_98 = &PTR_FUN_143f73d18;
    if (local_88 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_88 + 1;
      lVar6 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_88)(local_88);
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
  lVar6 = *(longlong *)(param_1 + 0x4e0);
  if ((lVar6 != 0) && (local_a8 != 0)) {
    local_58 = local_a8;
    plStack_50 = plStack_a0;
    if (plStack_a0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_a0 + 1) = (int)plStack_a0[1] + 1;
      UNLOCK();
      lVar6 = *(longlong *)(param_1 + 0x4e0);
    }
    FUN_140dc35a0(lVar6,&local_58);
    plVar2 = plStack_50;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_50 + 1;
      lVar6 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plStack_50)(plStack_50);
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
  lVar6 = *(longlong *)(param_1 + 0x1088);
  if (lVar6 == 0) {
    lVar8 = operator_new(0x1a8);
    lVar6 = 0;
    if (lVar8 != 0) {
      lVar6 = FUN_140d64540(lVar8);
    }
    *(longlong *)(param_1 + 0x1088) = lVar6;
  }
  FUN_140d85380(lVar6,&local_a8);
  FUN_140bf35e0(param_1,plVar9);
  plVar9 = plStack_a0;
  if (plStack_a0 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_a0 + 1;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_a0)(plStack_a0);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  return;
}



// FUNCTION 140beed10 FUN_140beed10 body=247 status=ok
// SIG undefined FUN_140beed10(void)

void FUN_140beed10(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  longlong *plVar6;
  undefined2 *puVar7;
  longlong local_18 [2];
  
  lVar3 = FUN_140bbc590(param_1,local_18);
  iVar2 = *(int *)(lVar3 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (iVar2 < 2) {
    FUN_140bb4470(param_1,*(undefined8 *)(param_1 + 0x68),(undefined8 *)(param_1 + 0x78));
    return;
  }
  puVar4 = (undefined8 *)FUN_140bbc590(param_1,local_18);
  puVar5 = &DAT_143f3eda8;
  if (*(int *)(param_1 + 0x80) == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = *(undefined2 **)(param_1 + 0x78);
  }
  if (*(int *)(puVar4 + 1) != 0) {
    puVar5 = (undefined2 *)*puVar4;
  }
  iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar5,puVar7);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (iVar2 != 0) {
    FUN_140bae420(param_1);
    return;
  }
  *(undefined4 *)(param_1 + 0x18) = 1;
  if ((*(int *)(param_1 + 0x10) != 0) && (*(longlong **)(param_1 + 8) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x10) == 0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = *(longlong **)(param_1 + 8);
      }
      (**(code **)(*plVar6 + 0x40))();
    }
  }
  return;
}



// FUNCTION 140beee10 FUN_140beee10 body=67 status=ok
// SIG undefined FUN_140beee10(void)

void FUN_140beee10(longlong param_1)

{
  char local_res8 [32];
  
  FUN_140dbc5d0(*(longlong *)(param_1 + 0x10) + 0x5f0,local_res8);
  if (local_res8[0] == '\x02') {
    FUN_140bae830();
    return;
  }
  FUN_140bad330(*(undefined8 *)(param_1 + 0x10),param_1 + 8);
  return;
}



// FUNCTION 140beee70 FUN_140beee70 body=345 status=ok
// SIG undefined FUN_140beee70(void)

void FUN_140beee70(longlong param_1)

{
  longlong *plVar1;
  undefined1 uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  char local_res8 [8];
  undefined1 local_res10 [8];
  undefined4 uStack_2c;
  
  FUN_140dbc5d0(*(longlong *)(param_1 + 0x10) + 0x5f0,local_res8);
  if (local_res8[0] == '\x01') {
    FUN_140bae830(*(undefined8 *)(param_1 + 0x10));
    return;
  }
  if (local_res8[0] != '\x02') {
    FUN_140bad330(*(undefined8 *)(param_1 + 0x10),param_1 + 8);
    return;
  }
  lVar4 = *(longlong *)(param_1 + 0x10);
  uVar2 = *(undefined1 *)(param_1 + 9);
  uVar8 = 0;
  plVar1 = (longlong *)(lVar4 + 0x638);
  plVar5 = (longlong *)FMemory::Realloc(0,0x30,0);
  if (plVar5 != (longlong *)0x0) {
    *plVar5 = (longlong)&PTR_FUN_1442cc120;
    FWeakObjectPtr::operator=(plVar5 + 1,lVar4);
    *(undefined4 *)(plVar5 + 2) = 0x40bd4390;
    *(undefined4 *)((longlong)plVar5 + 0x14) = 1;
    *(undefined4 *)(plVar5 + 3) = 0;
    *(undefined4 *)((longlong)plVar5 + 0x1c) = uStack_2c;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar5[5] = lVar6;
    *plVar5 = (longlong)&PTR_FUN_1442cc168;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
    puVar7 = (undefined8 *)(**(code **)(*plVar5 + 0x20))(plVar5,local_res10);
    iVar3 = *(int *)(lVar4 + 0x640);
    uVar8 = *puVar7;
    *(int *)(lVar4 + 0x640) = iVar3 + 1;
    if (*(int *)(lVar4 + 0x644) < iVar3 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar3);
    }
    puVar7 = (undefined8 *)((longlong)iVar3 * 0x10 + *plVar1);
    *puVar7 = plVar5;
    *(undefined4 *)(puVar7 + 1) = 3;
  }
  *(undefined8 *)(lVar4 + 0x208) = uVar8;
  FUN_140dd0830(lVar4 + 0x5f0,uVar2);
  return;
}



// FUNCTION 140beefd0 FUN_140beefd0 body=805 status=ok
// SIG undefined FUN_140beefd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140beefd0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined1 uVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  byte bVar9;
  undefined1 auStack_138 [32];
  int local_118 [2];
  longlong *local_110;
  int local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  longlong *local_e0;
  longlong *local_d8;
  longlong *local_d0;
  longlong *local_c8;
  undefined1 local_c0 [8];
  undefined **local_b8 [5];
  longlong local_90 [4];
  longlong local_70;
  longlong local_50;
  undefined4 local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  plVar7 = (longlong *)0x0;
  local_100 = 0;
  FUN_1404d0c50(&local_d0,0);
  if (local_d0 == (longlong *)0x0) goto LAB_140bef284;
  local_f8 = 0x11f;
  lVar6 = (**(code **)(*local_d0 + 0x10))(local_d0,0x11f);
  if (lVar6 == 0) {
    *(undefined4 *)(param_1 + 0x18) = 2;
    if (((*(int *)(param_1 + 0x10) != 0) && (*(longlong **)(param_1 + 8) != (longlong *)0x0)) &&
       (cVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(), cVar5 != '\0')) {
      if (*(int *)(param_1 + 0x10) != 0) {
        plVar7 = *(longlong **)(param_1 + 8);
      }
      (**(code **)(*plVar7 + 0x40))(plVar7);
    }
    goto LAB_140bef284;
  }
  if (*(char *)(lVar6 + 0x3f) == '\0') {
    bVar9 = 1;
  }
  else {
    bVar9 = -(*(char *)(lVar6 + 0x40) != '\0') & 2;
  }
  local_118[0] = 0;
  FUN_1404a9610(lVar6 + 0x28,DAT_14686a578,local_118);
  if ((bVar9 == *(byte *)(param_1 + 0x69)) && (local_118[0] == *(int *)(param_1 + 0x6c))) {
    FUN_140bd1b90(param_1,1);
    goto LAB_140bef284;
  }
  FUN_140da8a40(local_b8,lVar6 + 0x28);
  FUN_140db1ad0(local_b8,param_1 + 0x68);
  FUN_1404ab210(local_b8,DAT_14686a578,param_1 + 0x6c,2);
  uVar4 = *(undefined1 *)(param_1 + 0x70);
  local_f0 = 0;
  FUN_1404d0c50(&local_e0,0);
  if (local_e0 != (longlong *)0x0) {
    local_110 = (longlong *)0x0;
    plVar7 = (longlong *)FMemory::Realloc(0,0x30);
    local_108 = 3;
    local_110 = plVar7;
    if (plVar7 != (longlong *)0x0) {
      plVar7[1] = param_1;
      *plVar7 = (longlong)&DAT_143f3ed00;
      plVar7[2] = (longlong)FUN_140be1a20;
      lVar6 = FDelegateHandle::GenerateNewID();
      plVar7[4] = lVar6;
      *plVar7 = (longlong)&PTR_GetPoolName_143f3ed48;
    }
    puVar8 = (undefined8 *)(**(code **)(*local_e0 + 0x88))(local_e0,local_c0,&local_110);
    *(undefined8 *)(param_1 + 0x30) = *puVar8;
    if (local_108 == 0) {
LAB_140bef1a0:
      if (local_110 != (longlong *)0x0) {
        FMemory::Free(local_110);
      }
    }
    else if (local_110 != (longlong *)0x0) {
      (**(code **)(*local_110 + 0x28))(local_110,0);
      if (local_110 != (longlong *)0x0) {
        local_110 = (longlong *)FMemory::Realloc(local_110,0,0);
      }
      local_108 = 0;
      goto LAB_140bef1a0;
    }
    local_e8 = 0x11f;
    (**(code **)(*local_e0 + 0x80))(local_e0,0x11f,local_b8,uVar4);
  }
  plVar7 = local_d8;
  if (local_d8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_d8 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_d8)(local_d8);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_d8 + 8))(local_d8,1);
      }
    }
  }
  local_b8[0] = &PTR_FUN_143f769a0;
  local_48 = 0;
  if (local_50 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSetting>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(local_90,0);
  if (local_70 != 0) {
    FMemory::Free();
  }
  if (local_90[0] != 0) {
    FMemory::Free();
  }
LAB_140bef284:
  plVar7 = local_c8;
  if (local_c8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_c8 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_c8)(local_c8);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_c8 + 8))(local_c8,1);
      }
    }
  }
  return;
}



// FUNCTION 140bef300 FUN_140bef300 body=700 status=ok
// SIG undefined FUN_140bef300(void)

void FUN_140bef300(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  undefined1 local_res8 [8];
  longlong *local_88;
  int local_80;
  longlong local_78 [2];
  longlong *local_68;
  int local_60;
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  
  if (*(longlong *)(param_1 + 0x998) != 0) {
    return;
  }
  FUN_140bb86f0(param_1,&local_68);
  if (0 < local_60) {
    plVar3 = (longlong *)local_68[1];
    lVar5 = *local_68;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    local_88 = (longlong *)0x0;
    plVar4 = (longlong *)FMemory::Realloc(0,0x30,0);
    local_80 = 3;
    local_88 = plVar4;
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = (longlong)&PTR_GetPoolName_144318ef0;
      plVar4[1] = lVar5;
      plVar4[2] = (longlong)plVar3;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar4[4] = lVar5;
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar3 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
    uVar8 = 0x43960000;
    lVar5 = FUN_142b45e90();
    FUN_142b4a990(*(undefined8 *)(lVar5 + 0x18),&local_48,local_68);
    if (local_48 != 0) {
      FUN_142b4a0e0(local_48,&local_58,&DAT_146b2ace8);
      if (local_58 != 0) {
        local_78[0] = 0;
        local_78[1] = 0x21;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_78,0);
        FGenericPlatformString::Memcpy(local_78[0],L"MinTimeBetweenGetCrossplayStatus",0x42);
        uVar8 = FUN_142afb1f0(local_58,local_78,0x43960000,0,0x461c3c00);
        if (local_78[0] != 0) {
          FMemory::Free();
        }
      }
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_50 + 1;
        lVar5 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
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
    }
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_40 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
    uVar6 = FUN_14164ab60();
    puVar7 = (undefined8 *)
             FUN_14158f860(uVar6,local_res8,&local_88,L"UpdateGlobalCrossplayStatus_Tick",uVar8);
    *(undefined8 *)(param_1 + 0x998) = *puVar7;
    if (local_80 != 0) {
      if (local_88 == (longlong *)0x0) goto LAB_140bef5a8;
      (**(code **)(*local_88 + 0x28))(local_88,0);
      if (local_88 != (longlong *)0x0) {
        local_88 = (longlong *)FMemory::Realloc(local_88,0,0);
      }
      local_80 = 0;
    }
    if (local_88 != (longlong *)0x0) {
      FMemory::Free(local_88);
    }
  }
LAB_140bef5a8:
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_68);
  return;
}



// FUNCTION 140bef5c0 FUN_140bef5c0 body=1383 status=ok
// SIG undefined FUN_140bef5c0(void)

void FUN_140bef5c0(longlong *param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  void *_Src;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  void **ppvVar9;
  undefined8 uVar10;
  undefined2 *puVar11;
  void *pvVar12;
  longlong *plVar13;
  int iVar14;
  undefined1 local_res10 [8];
  void *local_128;
  int local_120;
  undefined4 local_11c;
  longlong local_118;
  undefined8 local_110;
  undefined1 local_108 [8];
  longlong local_100 [2];
  undefined2 *local_f0;
  int local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [8];
  undefined1 local_c0 [8];
  undefined8 local_b8;
  undefined1 local_b0 [8];
  undefined8 local_a8;
  longlong local_a0 [2];
  undefined **local_90;
  undefined1 local_88 [24];
  undefined1 local_70 [24];
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  
  if ((((param_2 != (longlong *)0x0) && (param_4 != 0)) &&
      (cVar3 = (**(code **)(*param_2 + 0x768))(param_2), cVar3 != '\0')) &&
     ((cVar3 = APlayerController::IsPrimaryPlayer(param_2), cVar3 != '\0' &&
      ((char)param_2[0x25] == '\x03')))) {
    uVar4 = FUN_140cb7110(param_2,param_4,param_3);
    FUN_140d12170(param_2,uVar4);
    lVar5 = FUN_140cfbfb0(param_2);
    if ((lVar5 != 0) && (cVar3 = FWebMMovieStreamer::IsLastMovieInPlaylist(lVar5), cVar3 != '\0')) {
      FUN_140d4d1d0(lVar5,param_4);
      lVar7 = param_2[0x8c];
      if (lVar7 != 0) {
        lVar6 = UInputKeySelector::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          FUN_140e5cfe0(lVar7,param_4);
        }
      }
      lVar7 = (**(code **)(*param_1 + 0x148))(param_1);
      pvVar12 = (void *)0x0;
      if (lVar7 != 0) {
        uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
        lVar7 = UWorld::GetGameState<APVPGameState>(uVar4);
        if ((lVar7 != 0) && (*(longlong *)(lVar7 + 0x598) != 0)) {
          iVar14 = *(int *)(lVar5 + 0x140);
          if ((iVar14 < 0) || (*(int *)(lVar5 + 0x158) <= iVar14)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            local_e0 = 0;
            lVar6 = (longlong)iVar14 * 0x38 + *(longlong *)(lVar5 + 0x150);
            local_d8 = 0;
            local_d0 = 0;
            FUN_140c598a0(lVar6,&local_e0);
            puVar8 = (undefined8 *)FUN_140d3bd80(lVar6,local_b0);
            FUN_142f62640(*(undefined8 *)(lVar7 + 0x598),&local_e0,*puVar8);
            TArray<FGameplayCueNotifyData,TSizedDefaultAllocator<32>_>::
            ~TArray<FGameplayCueNotifyData,TSizedDefaultAllocator<32>_>(&local_e0);
          }
          else {
            local_118 = 0;
            local_110 = 0;
            local_a8 = 0;
            FUN_142f62640(*(longlong *)(lVar7 + 0x598),&local_118,0);
            if ((int)local_110 != 0) {
              plVar13 = (longlong *)(local_118 + 0x10);
              iVar14 = (int)local_110;
              do {
                if (*plVar13 != 0) {
                  FMemory::Free();
                }
                plVar13 = plVar13 + 6;
                iVar14 = iVar14 + -1;
              } while (iVar14 != 0);
            }
            if (local_118 != 0) {
              FMemory::Free();
            }
          }
        }
      }
      if (DAT_146af4bf0 != (longlong *)0x0) {
        (**(code **)(*DAT_146af4bf0 + 0x18))(DAT_146af4bf0,lVar5);
      }
      FUN_142d87cb0(lVar5);
      if (((char)param_2[0x25] == '\x03') && (lVar7 = FUN_140b825a0(param_1), lVar7 != 0)) {
        FUN_140ccce90(lVar7,*(int *)(lVar5 + 0x140) + 1);
        *(undefined4 *)(lVar7 + 0x74c) = *(undefined4 *)(lVar5 + 0x144);
      }
      puVar8 = (undefined8 *)FUN_140d3b2a0(lVar5);
      local_128 = (void *)0x0;
      local_120 = *(int *)(puVar8 + 1);
      lVar5 = (longlong)local_120;
      _Src = (void *)*puVar8;
      if (local_120 == 0) {
        local_11c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_128,local_120,0);
        pvVar12 = local_128;
        _guard_xfg_dispatch_icall_nop(local_128,_Src,lVar5 * 2);
      }
      if (local_120 < 2) {
        uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
        lVar5 = FMistWorldUtils::GetDebugEntityDrawSystem(uVar4);
        if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x28) != 0)) {
          ppvVar9 = (void **)UObjectBaseUtility::GetPathName(*(longlong *)(lVar5 + 0x28),local_a0,0)
          ;
          if (&local_128 != ppvVar9) {
            if (pvVar12 != (void *)0x0) {
              FMemory::Free(pvVar12);
            }
            local_128 = *ppvVar9;
            *ppvVar9 = (void *)0x0;
            local_120 = *(int *)(ppvVar9 + 1);
            local_11c = *(undefined4 *)((longlong)ppvVar9 + 0xc);
            ppvVar9[1] = (void *)0x0;
          }
          if (local_a0[0] != 0) {
            FMemory::Free();
          }
        }
      }
      FName::ToString(param_1 + 0x162,local_100 + 2);
      local_100[0] = 0;
      local_100[1] = 0;
      FUN_140bf2f90(param_1,&local_128,local_100 + 2,local_100);
      puVar11 = &DAT_143f3eda8;
      if (local_e8 != 0) {
        puVar11 = local_f0;
      }
      FName::FName(local_108,puVar11,1);
      uVar4 = thunk_FUN_1422ca050();
      cVar3 = FUN_140a0b540(uVar4,local_108);
      if (cVar3 == '\0') {
        uVar4 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_40,
                           L"Unable to launch save game; required content has not finished installing."
                           ,L"OakGameInstance",L"SaveGameContentNotInstalled");
        uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                           (local_58,L"Content Not Available",L"OakGameInstance",
                            L"ContentNotAvailable");
        local_90 = &PTR_FUN_1443170a0;
        FText::FText(local_88,uVar10);
        FText::FText(local_70,uVar4);
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar13 = local_50 + 1;
          lVar5 = *plVar13;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar1 = (int *)((longlong)local_50 + 0xc);
            iVar14 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar14 == 1) {
              (**(code **)(*local_50 + 8))(local_50,1);
            }
          }
        }
        if (local_38 != (longlong *)0x0) {
          LOCK();
          plVar13 = local_38 + 1;
          lVar5 = *plVar13;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_38)(local_38);
            LOCK();
            piVar1 = (int *)((longlong)local_38 + 0xc);
            iVar14 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar14 == 1) {
              (**(code **)(*local_38 + 8))(local_38,1);
            }
          }
        }
        FWeakObjectPtr::operator=(local_res10,0);
        FWeakObjectPtr::operator=(local_c8,0);
        FWeakObjectPtr::operator=(local_c0,0);
        local_b8 = 0;
        FUN_140c23780(2,&local_90,local_c0,local_c8,local_res10,2);
        FUN_140b9cdd0(&local_90);
      }
      else {
        FUN_1411f58b0(param_1 + 0xf4,3);
        lVar5 = (**(code **)(*param_1 + 0x148))(param_1);
        if (((lVar5 != 0) && ((*(uint *)(lVar5 + 0x830) >> 2 & 1) != 0)) &&
           (lVar5 = FUN_140bb7870(param_1), lVar5 != 0)) {
          FUN_140dd0eb0(lVar5,3);
        }
        FUN_140bc8fd0(param_1,local_108,&local_128,1);
      }
      if (local_100[0] != 0) {
        FMemory::Free();
      }
      if (local_f0 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_128 != (void *)0x0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140befb30 FUN_140befb30 body=450 status=ok
// SIG undefined FUN_140befb30(void)

void FUN_140befb30(longlong *param_1,undefined8 param_2,char param_3,int param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (1 < (int)param_1[0x20c]) {
    if (param_3 != '\0') {
      return;
    }
    if ((char)param_1[0x20d] == '\0') {
      return;
    }
  }
  lVar4 = (**(code **)(*param_1 + 0x148))();
  if (lVar4 == 0) {
LAB_140befba1:
    lVar4 = FUN_140bb6170(param_1);
    if ((lVar4 == 0) && ((char)param_1[0x88] == '\x02')) {
      lVar4 = FUN_14244f490(param_1,0);
      if (lVar4 != 0) {
        lVar6 = FUN_14145f370();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (((bVar1) && (lVar4 = FUN_140cfbfb0(lVar4), lVar4 != 0)) &&
           (cVar2 = FWebMMovieStreamer::IsLastMovieInPlaylist(lVar4), cVar2 == '\0')) {
          FString::operator=(param_1 + 0x20b,param_2);
          *(char *)(param_1 + 0x20d) = param_3;
          if (param_4 < 0) {
            param_4 = 0;
          }
          *(int *)(param_1 + 0x20f) = param_4;
          if (param_3 == '\0') {
            FUN_140beb3e0(param_1,1);
            TSet<TTuple<TSharedRef<FString,1>,unsigned_short>,TDefaultMapHashableKeyFuncs<TSharedRef<FString,1>,unsigned_short,0>,FDefaultSetAllocator>
            ::Empty(param_1 + 0x1a0,0);
            if (((param_1[0x9c] != 0) && (*(char *)(param_1[0x9c] + 0x10) != '\0')) &&
               (cVar2 = FUN_140678610(), cVar2 != '\0')) {
              FUN_140db2f20(param_1[0x9c]);
              return;
            }
          }
          if (param_1[0x20e] != 0) {
            return;
          }
          FUN_140be58f0(param_1);
          return;
        }
      }
      goto LAB_140befcc6;
    }
  }
  else {
    uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
    iVar3 = FUN_1428cf800(uVar5);
    if (iVar3 != 3) goto LAB_140befba1;
  }
  if (param_1[0x196] != 0) {
    FUN_1413c8ca0(param_1[0x196],0);
    param_1[0x196] = 0;
  }
LAB_140befcc6:
  TBaseMulticastDelegate<void,enum_EWmfMediaSamplerClockEvent>::Broadcast(param_1 + 0x193,2);
  return;
}



// FUNCTION 140befd00 FUN_140befd00 body=224 status=ok
// SIG undefined FUN_140befd00(void)

void FUN_140befd00(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar1 = FUN_1413c7110();
    lVar2 = param_2;
    while (lVar2 != lVar1) {
      lVar2 = *(longlong *)(lVar2 + 0x30);
      if (lVar2 == 0) {
        return;
      }
    }
    if (*(longlong *)(param_1 + 0xcb0) == 0) {
      lVar1 = FUN_1413c7110();
      lVar2 = param_2;
      do {
        lVar3 = param_2;
        if (lVar2 == lVar1) break;
        lVar2 = *(longlong *)(lVar2 + 0x30);
        lVar3 = 0;
      } while (lVar2 != 0);
      FUN_1417846f0(param_1,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
      lVar2 = FUN_1417985e0(lVar3,param_1,0,0,0,0,0,0,0);
      *(longlong *)(param_1 + 0xcb0) = lVar2;
      if (lVar2 != 0) {
        FUN_140dd3500(lVar2);
      }
    }
  }
  return;
}



// FUNCTION 140befde0 FUN_140befde0 body=75 status=ok
// SIG undefined FUN_140befde0(void)

void FUN_140befde0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0xb70);
  if (plVar2 == (longlong *)0x0) {
    lVar1 = operator_new();
    if (lVar1 == 0) {
      plVar2 = (longlong *)0x0;
    }
    else {
      plVar2 = (longlong *)FUN_140c2f880(lVar1,param_1);
    }
    *(longlong **)(param_1 + 0xb70) = plVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x000140befe27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x10))(plVar2,0);
  return;
}



// FUNCTION 140befe30 FUN_140befe30 body=70 status=ok
// SIG undefined FUN_140befe30(void)

void FUN_140befe30(void)

{
  longlong lVar1;
  
  lVar1 = FUN_140a08d00();
  if ((((lVar1 != 0) && (DAT_1468536c6 == '\0')) && (DAT_1468536c5 != '\0')) &&
     ((DAT_1468536c8 != 0 && (*(longlong *)(lVar1 + 0x1f0) != 0)))) {
    FUN_1405a1960();
    return;
  }
  return;
}



// FUNCTION 140befe80 FUN_140befe80 body=43 status=ok
// SIG undefined FUN_140befe80(void)

void FUN_140befe80(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xcb0) != 0) {
    FUN_140db3610();
    *(undefined8 *)(param_1 + 0xcb0) = 0;
  }
  return;
}



// FUNCTION 140befeb0 FUN_140befeb0 body=868 status=ok
// SIG undefined FUN_140befeb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140befeb0(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_f8 [40];
  longlong *local_d0;
  int local_c8;
  longlong local_c0;
  longlong *plStack_b8;
  longlong *local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [8];
  undefined **local_80 [2];
  longlong *local_70;
  longlong local_68;
  longlong local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  if (param_1[0x1f0] != 0) {
    return;
  }
  lVar6 = (**(code **)(*param_1 + 0x148))();
  if (lVar6 == 0) {
    return;
  }
  if ((*(uint *)(lVar6 + 0x830) >> 2 & 1) == 0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  lVar6 = FUN_142547b50(param_2,local_80);
  plVar3 = *(longlong **)(lVar6 + 0x10);
  lVar6 = *(longlong *)(lVar6 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  local_80[0] = &PTR_FUN_143f740c8;
  if (local_68 != 0) {
    FMemory::Free();
  }
  local_80[0] = &PTR_FUN_143f73d18;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_70 + 1;
    lVar4 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
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
  if ((lVar6 == 0) || ((cVar5 = FUN_14254a1f0(param_2), cVar5 == '\0' && (param_1[0x8c] != 0))))
  goto LAB_140bf01ad;
  local_a0 = 0;
  FUN_1404cf2e0(&local_b0,0);
  plVar8 = local_b0;
  if ((local_b0 != (longlong *)0x0) &&
     (cVar5 = (**(code **)(*local_b0 + 0x10))(local_b0,8), cVar5 != '\0')) {
    plVar7 = param_1 + 0x1ee;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      plVar8 = local_b0;
    }
    local_c0 = lVar6;
    plStack_b8 = plVar3;
    if (&local_c0 != plVar7) {
      local_c0 = *plVar7;
      plStack_b8 = (longlong *)param_1[0x1ef];
      *plVar7 = lVar6;
      param_1[0x1ef] = (longlong)plVar3;
      local_58 = lVar6;
      plStack_50 = plVar3;
    }
    plVar7 = plStack_b8;
    if (plStack_b8 != (longlong *)0x0) {
      LOCK();
      plVar8 = plStack_b8 + 1;
      lVar6 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      plVar8 = local_b0;
      if ((int)lVar6 == 1) {
        (**(code **)*plStack_b8)(plStack_b8);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar8 = local_b0;
        if (iVar2 == 1) {
          (**(code **)(*plStack_b8 + 8))(plStack_b8,1);
          plVar8 = local_b0;
        }
      }
    }
    uStack_90 = 0;
    local_d0 = (longlong *)0x0;
    local_98 = FUN_140be0190;
    plVar7 = (longlong *)FMemory::Realloc(0,0x30);
    local_c8 = 3;
    local_d0 = plVar7;
    if (plVar7 != (longlong *)0x0) {
      *plVar7 = (longlong)&PTR_FUN_144318d40;
      FWeakObjectPtr::operator=(plVar7 + 1,param_1);
      *(undefined4 *)(plVar7 + 2) = (undefined4)local_98;
      *(undefined4 *)((longlong)plVar7 + 0x14) = local_98._4_4_;
      *(undefined4 *)(plVar7 + 3) = uStack_90;
      *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_8c;
      lVar6 = FDelegateHandle::GenerateNewID();
      plVar7[5] = lVar6;
      *plVar7 = (longlong)&PTR_FUN_144318d88;
    }
    plVar7 = (longlong *)(**(code **)(*plVar8 + 0x218))(plVar8,local_88,&local_d0);
    param_1[0x1f0] = *plVar7;
    if (local_c8 == 0) {
LAB_140bf0149:
      if (local_d0 != (longlong *)0x0) {
        FMemory::Free(local_d0);
      }
    }
    else if (local_d0 != (longlong *)0x0) {
      (**(code **)(*local_d0 + 0x28))(local_d0,0);
      if (local_d0 != (longlong *)0x0) {
        local_d0 = (longlong *)FMemory::Realloc(local_d0,0,0);
      }
      local_c8 = 0;
      goto LAB_140bf0149;
    }
    (**(code **)(*plVar8 + 0x60))(plVar8,*(undefined4 *)(param_2 + 0x108),1);
  }
  plVar8 = local_a8;
  if (local_a8 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_a8 + 1;
    lVar6 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_a8)(local_a8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_a8 + 8))(local_a8,1);
      }
    }
  }
LAB_140bf01ad:
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar3 + 1;
    lVar6 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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



// FUNCTION 140bf0220 FUN_140bf0220 body=631 status=ok
// SIG undefined FUN_140bf0220(void)

void FUN_140bf0220(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  void *_Src;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  void *local_b8;
  int local_b0;
  undefined4 local_ac;
  undefined **local_a8;
  undefined8 local_a0;
  longlong *local_98;
  longlong local_90;
  undefined8 local_88;
  undefined **local_80;
  undefined8 local_78;
  longlong *local_70;
  longlong local_68;
  undefined8 local_60;
  undefined **local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar6 = (**(code **)(*param_1 + 0x148))();
  if ((lVar6 == 0) || ((*(uint *)(lVar6 + 0x830) >> 2 & 1) == 0)) {
    plVar7 = (longlong *)FUN_140bbb8d0(param_1,param_2);
    if ((plVar7 != (longlong *)0x0) && (lVar6 = (**(code **)(*plVar7 + 0x670))(plVar7), lVar6 != 0))
    {
      lVar8 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((bVar4) && (cVar5 = APlayerController::IsPrimaryPlayer(lVar6), cVar5 != '\0')) {
        local_50 = *param_3;
        local_48 = param_3[1];
        if (local_48 != 0) {
          LOCK();
          *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
          UNLOCK();
        }
        local_58 = &PTR_FUN_143f740c8;
        local_40 = 0;
        local_38 = 0;
        FUN_14145e110(lVar6,&local_58,param_4);
        FUN_1404bf980(&local_58);
      }
    }
  }
  else {
    lVar6 = FUN_140bb7870(param_1);
    if (lVar6 != 0) {
      local_b0 = *(int *)(param_4 + 1);
      lVar8 = (longlong)local_b0;
      _Src = (void *)*param_4;
      local_b8 = (void *)0x0;
      if (local_b0 == 0) {
        local_ac = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_b8,local_b0,0);
        _guard_xfg_dispatch_icall_nop(local_b8,_Src,lVar8 * 2);
      }
      local_78 = *param_3;
      local_70 = (longlong *)param_3[1];
      if (local_70 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_70 + 1) = (int)local_70[1] + 1;
        UNLOCK();
      }
      local_a0 = *param_2;
      local_98 = (longlong *)param_2[1];
      local_80 = &PTR_FUN_143f740c8;
      local_68 = 0;
      local_60 = 0;
      if (local_98 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_98 + 1) = (int)local_98[1] + 1;
        UNLOCK();
      }
      local_a8 = &PTR_FUN_143f740c8;
      local_90 = 0;
      local_88 = 0;
      FUN_1404e22f0(lVar6,&local_a8,&local_80,&local_b8);
      local_a8 = &PTR_FUN_143f740c8;
      if (local_90 != 0) {
        FMemory::Free();
      }
      plVar7 = local_98;
      local_a8 = &PTR_FUN_143f73d18;
      if (local_98 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_98 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_98)(local_98);
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
      local_80 = &PTR_FUN_143f740c8;
      if (local_68 != 0) {
        FMemory::Free();
      }
      plVar7 = local_70;
      local_80 = &PTR_FUN_143f73d18;
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_70 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_70)(local_70);
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
      if (local_b8 != (void *)0x0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140bf04a0 FUN_140bf04a0 body=418 status=ok
// SIG undefined FUN_140bf04a0(void)

void FUN_140bf04a0(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong local_58 [2];
  longlong local_48 [2];
  undefined **local_38;
  undefined8 local_30;
  longlong *local_28;
  longlong local_20;
  undefined8 local_18;
  
  lVar6 = (**(code **)(*param_1 + 0x148))();
  if ((lVar6 == 0) || ((*(uint *)(lVar6 + 0x830) >> 2 & 1) == 0)) {
    plVar7 = (longlong *)FUN_140bbb8d0(param_1,param_2);
    if (plVar7 == (longlong *)0x0) {
      return;
    }
    lVar6 = (**(code **)(*plVar7 + 0x670))(plVar7);
    if (lVar6 == 0) {
      return;
    }
    lVar8 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) {
      return;
    }
    cVar5 = APlayerController::IsPrimaryPlayer(lVar6);
    if (cVar5 == '\0') {
      return;
    }
    uVar9 = FUN_140dbd0e0(param_1 + 0xbe,local_48);
    FUN_14145d990(lVar6,uVar9);
  }
  else {
    lVar6 = FUN_140bb7870(param_1);
    if (lVar6 == 0) {
      return;
    }
    FUN_140dbd0e0(param_1 + 0xbe,local_58);
    local_30 = *param_2;
    local_28 = (longlong *)param_2[1];
    if (local_28 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_28 + 1) = (int)local_28[1] + 1;
      UNLOCK();
    }
    local_38 = &PTR_FUN_143f740c8;
    local_20 = 0;
    local_18 = 0;
    FUN_140dd4ba0(lVar6,&local_38,local_58);
    local_38 = &PTR_FUN_143f740c8;
    if (local_20 != 0) {
      FMemory::Free();
    }
    plVar7 = local_28;
    local_38 = &PTR_FUN_143f73d18;
    local_48[0] = local_58[0];
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        local_48[0] = local_58[0];
        if (iVar3 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
          local_48[0] = local_58[0];
        }
      }
    }
  }
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140bf0650 FUN_140bf0650 body=481 status=ok
// SIG undefined FUN_140bf0650(void)

void FUN_140bf0650(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  void *_Src;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  undefined **local_48;
  undefined8 local_40;
  longlong *local_38;
  longlong local_30;
  undefined8 local_28;
  
  lVar6 = (**(code **)(*param_1 + 0x148))();
  if ((lVar6 == 0) || ((*(uint *)(lVar6 + 0x830) >> 2 & 1) == 0)) {
    plVar7 = (longlong *)FUN_140bbb8d0(param_1,param_2);
    if ((plVar7 != (longlong *)0x0) && (lVar6 = (**(code **)(*plVar7 + 0x670))(plVar7), lVar6 != 0))
    {
      lVar8 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((bVar4) && (cVar5 = APlayerController::IsPrimaryPlayer(lVar6), cVar5 != '\0')) {
        FUN_14145dca0(lVar6,param_3);
        return;
      }
    }
  }
  else {
    lVar6 = FUN_140bb7870(param_1);
    if (lVar6 != 0) {
      local_50 = *(int *)(param_3 + 1);
      lVar8 = (longlong)local_50;
      _Src = (void *)*param_3;
      local_58 = (void *)0x0;
      if (local_50 == 0) {
        local_4c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,local_50,0);
        _guard_xfg_dispatch_icall_nop(local_58,_Src,lVar8 * 2);
      }
      local_40 = *param_2;
      local_38 = (longlong *)param_2[1];
      if (local_38 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_38 + 1) = (int)local_38[1] + 1;
        UNLOCK();
      }
      local_48 = &PTR_FUN_143f740c8;
      local_30 = 0;
      local_28 = 0;
      FUN_1404e2580(lVar6,&local_48,0x11f,&local_58);
      local_48 = &PTR_FUN_143f740c8;
      if (local_30 != 0) {
        FMemory::Free();
      }
      plVar7 = local_38;
      local_48 = &PTR_FUN_143f73d18;
      if (local_38 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_38 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_38)(local_38);
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
      if (local_58 != (void *)0x0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140bf0840 FUN_140bf0840 body=1383 status=ok
// SIG undefined FUN_140bf0840(void)

undefined1 FUN_140bf0840(longlong param_1,float param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  undefined8 local_res18;
  LARGE_INTEGER local_res20;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined1 local_188 [8];
  undefined1 local_180 [8];
  undefined1 local_178 [8];
  undefined8 local_170;
  undefined1 local_168 [8];
  longlong *local_160;
  undefined1 local_150 [8];
  longlong *local_148;
  undefined **local_138;
  undefined1 local_130 [24];
  undefined1 local_118 [24];
  undefined1 local_100 [24];
  undefined **local_e8;
  longlong local_e0;
  undefined ***local_b0;
  undefined **local_a8;
  longlong local_a0;
  undefined ***local_70;
  
  uVar6 = FTextRenderComponentMIDCache::PurgeUnreferencedMIDsTicker();
  if (*(longlong *)(param_1 + 0x1f8) != 0) {
    FUN_140c29b40(*(longlong *)(param_1 + 0x1f8),param_2);
  }
  if (*(longlong *)(param_1 + 0x5a8) != 0) {
    FUN_142f131a0(*(longlong *)(param_1 + 0x5a8),param_2);
  }
  plVar4 = *(longlong **)(param_1 + 0x1098);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x10))(plVar4,param_2);
  }
  plVar4 = *(longlong **)(param_1 + 0x1090);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x10))(plVar4,param_2);
  }
  if (0.0 < *(float *)(param_1 + 0x10d8)) {
    fVar12 = *(float *)(param_1 + 0x10d8) - param_2;
    *(float *)(param_1 + 0x10d8) = fVar12;
    if (fVar12 <= 0.0) {
      *(undefined4 *)(param_1 + 0x10d8) = 0;
      FUN_140bd05e0(param_1);
    }
  }
  if (0.0 <= DAT_146297e10) {
    DAT_146297e10 = DAT_146297e10 - param_2;
    if (DAT_146297e10 < 0.0) {
      DAT_146297e10 = -1.0;
      local_e8 = &PTR_LAB_144319920;
      local_b0 = &local_e8;
      local_a8 = &PTR_LAB_1443198f0;
      local_70 = &local_a8;
      local_e0 = param_1;
      local_a0 = param_1;
      FUN_140db97f0(&DAT_14686a610,param_1 + 0x38,&local_a8,&local_e8);
    }
  }
  FUN_140bf1540(param_1);
  FUN_140bf1030(param_1,param_2);
  lVar9 = FUN_140a08d00();
  if (lVar9 == 0) {
    *(undefined4 *)(param_1 + 0x1360) = 0;
    if (0x7fffffff < *(uint *)(param_1 + 0x1364)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x1358,0);
    }
  }
  else {
    fVar12 = *(float *)(param_1 + 0x1368) - param_2;
    *(float *)(param_1 + 0x1368) = fVar12;
    if ((fVar12 < 0.0) && (*(int *)(param_1 + 0x1360) != 0)) {
      local_198 = 0xffffffff;
      uStack_190 = 0;
      do {
        lVar10 = *(longlong *)(param_1 + 0x1358);
        lVar11 = (longlong)*(int *)(param_1 + 0x1360);
        uVar2 = *(undefined4 *)(lVar10 + -0x10 + lVar11 * 0x10);
        uVar3 = *(undefined4 *)(lVar10 + -0xc + lVar11 * 0x10);
        uVar5 = *(undefined8 *)(lVar10 + -8 + lVar11 * 0x10);
        *(int *)(param_1 + 0x1360) = *(int *)(param_1 + 0x1360) + -1;
        TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(param_1 + 0x1358);
        local_198 = CONCAT44(uVar3,uVar2);
        uStack_190 = uVar5;
        cVar7 = FWeakObjectPtr::IsValid(&local_198);
        if (cVar7 != '\0') break;
      } while (*(int *)(param_1 + 0x1360) != 0);
      lVar10 = FWeakObjectPtr::Get(&local_198);
      if (lVar10 != 0) {
        FUN_1405a17b0(local_100,uStack_190,lVar10,0,0,0xbf800000);
        FUN_140591060(local_100);
        *(undefined4 *)(param_1 + 0x1368) = *(undefined4 *)(lVar9 + 1000);
      }
    }
  }
  cVar7 = FUN_1411ea6c0(param_1 + 0x7a0);
  if (cVar7 != '\0') {
    FUN_1411fd360(param_1 + 0x7a0,param_2);
  }
  if (*(longlong *)(param_1 + 0x1438) != 0) {
    QueryPerformanceCounter(&local_res20);
    if (5.0 <= ((double)local_res20.QuadPart * DAT_1468b02f8 + 16777216.0) -
               *(double *)(param_1 + 0x1450)) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (local_150,L"You have been invited to be a SHiFT friend.",L"OakGameInstance",
                 L"FriendInviteReceived");
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (local_168,L"Friend Invite Received",L"OakGameInstance",L"FriendInviteReceivedTitle"
                );
      FWeakObjectPtr::operator=(local_188,0);
      FWeakObjectPtr::operator=(local_180,0);
      FWeakObjectPtr::operator=(local_178,0);
      local_170 = 0;
      local_138 = &PTR_FUN_1443170a0;
      FText::FText(local_130,local_168);
      FText::FText(local_118,local_150);
      FUN_140c23780(1,&local_138,local_178,local_180,local_188,2);
      FUN_140b9cdd0(&local_138);
      TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty
                (param_1 + 0x1440,0);
      TBaseMulticastDelegate<void>::Remove
                (*(longlong *)(param_1 + 0x478) + 0x1e0,*(undefined8 *)(param_1 + 0x1438));
      *(undefined8 *)(param_1 + 0x1438) = 0;
      if (local_160 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_160 + 1;
        lVar9 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
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
        plVar4 = local_148 + 1;
        lVar9 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
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
  }
  FUN_1411ea6c0(param_1 + 0x7a0);
  thunk_FUN_140c29d70();
  if ((*(char *)(param_1 + 0x5a0) != '\0') && (*(char *)(param_1 + 0x588) == '\0')) {
    *(undefined1 *)(param_1 + 0x5a0) = 0;
    FUN_140be9bf0(param_1);
  }
  if (*(int *)(param_1 + 0x13b8) < 1) {
    if (*(char *)(param_1 + 0x13a1) != '\0') {
      lVar9 = UGameInstance::GetFirstGamePlayer(param_1);
      if ((lVar9 != 0) && (*(longlong *)(lVar9 + 0x30) != 0)) {
        *(undefined1 *)(*(longlong *)(lVar9 + 0x30) + 0x6cc) = 0;
      }
    }
  }
  else {
    iVar8 = *(int *)(param_1 + 0x13b8) + -1;
    *(int *)(param_1 + 0x13b8) = iVar8;
    if (iVar8 == 0) {
      local_res18 = 0;
      FUN_140bc8be0(param_1,&local_res18);
    }
  }
  FUN_140bf0e40(param_1);
  if (0.0 < *(float *)(param_1 + 0xe9c)) {
    param_2 = *(float *)(param_1 + 0xe9c) - param_2;
    *(float *)(param_1 + 0xe9c) = param_2;
    if (param_2 <= 0.0) {
      *(undefined4 *)(param_1 + 0xe9c) = 0;
      FUN_140be42e0(param_1);
    }
  }
  return uVar6;
}



// FUNCTION 140bf0db0 FUN_140bf0db0 body=141 status=ok
// SIG undefined FUN_140bf0db0(void)

void FUN_140bf0db0(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  float fStackX_c;
  undefined1 local_18 [16];
  
  FUN_1422409a0();
  if (((*(char *)(param_1 + 0x128) == '\x03') && (*(char *)(param_1 + 0x4a4) == '\x02')) &&
     (*(longlong *)(param_1 + 0x490) != 0)) {
    puVar1 = (undefined8 *)FUN_141f520f0(*(longlong *)(param_1 + 0x490),local_18);
    iVar2 = (int)((ulonglong)puVar1[1] >> 0x20);
    fStackX_c = (float)((ulonglong)*puVar1 >> 0x20);
    *(float *)(param_1 + 0x4a0) =
         ((float)((longlong)iVar2 * (longlong)(int)*puVar1) + (float)iVar2 * fStackX_c) /
         (float)(int)puVar1[1];
  }
  return;
}



// FUNCTION 140bf0e40 FUN_140bf0e40 body=316 status=ok
// SIG undefined FUN_140bf0e40(void)

void FUN_140bf0e40(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  DWORD DVar8;
  longlong *plVar9;
  LARGE_INTEGER local_res8;
  longlong local_res10;
  undefined1 local_28 [32];
  
  if (((*(char *)(param_1 + 0x13c1) != '\0') && (iVar7 = FUN_141a00610(), iVar7 == 0)) &&
     (iVar7 = FUN_141a00540(), iVar7 == 0)) {
    *(undefined2 *)(param_1 + 0x13c0) = 1;
    QueryPerformanceCounter(&local_res8);
    *(double *)(param_1 + 0x13d0) = (double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0;
    FUN_1411e7960(param_1 + 0x7a0);
    if (((DAT_146ac3ac6 != '\0') && (cVar6 = IsInRenderingThread(), cVar6 != '\0')) ||
       ((DAT_146ac3ac5 == '\0' &&
        (((cVar6 = FUN_1415ad720(&DAT_1468e2448), cVar6 != '\0' || (DAT_1468c21ae == '\0')) ||
         (DVar8 = GetCurrentThreadId(), DVar8 == DAT_1468c21c0)))))) {
      FBaseGraphTask::GetSmallTaskAllocator();
      FUN_141a0cce0(0);
      return;
    }
    plVar9 = (longlong *)FUN_140bad820(local_28,0,0xff);
    *(longlong *)(*plVar9 + 0x10) = param_1;
    lVar2 = *plVar9;
    lVar5 = plVar9[2];
    lVar3 = plVar9[1];
    lVar4 = *(longlong *)(lVar2 + 0x20);
    piVar1 = (int *)(lVar4 + 0x48);
    if (lVar4 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    local_res10 = lVar4;
    FUN_140445100(lVar2,lVar3,(int)lVar5,1);
    if (lVar4 != 0) {
      LOCK();
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        FGraphEvent::Recycle(local_res10);
      }
    }
  }
  return;
}



// FUNCTION 140bf0f80 FUN_140bf0f80 body=174 status=ok
// SIG undefined FUN_140bf0f80(void)

void FUN_140bf0f80(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = (float)FUN_140bbcb70();
  fVar1 = *(float *)(param_1 + 0x178);
  fVar3 = *(float *)(param_1 + 0x1a0);
  if (fVar3 <= fVar2) {
    if ((fVar3 < fVar1) && (fVar1 < fVar2)) {
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x180,0)
      ;
      fVar3 = *(float *)(param_1 + 0x1a0);
    }
    if ((*(float *)(param_1 + 0x17c) <= fVar3) || (fVar2 <= *(float *)(param_1 + 0x17c)))
    goto LAB_140bf101b;
  }
  else {
    if ((fVar1 < fVar2) || (fVar3 < fVar1)) {
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x180,0)
      ;
    }
    fVar1 = *(float *)(param_1 + 0x17c);
    if ((fVar2 <= fVar1) &&
       (fVar1 < *(float *)(param_1 + 0x1a0) || fVar1 == *(float *)(param_1 + 0x1a0)))
    goto LAB_140bf101b;
  }
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 400,0);
LAB_140bf101b:
  *(float *)(param_1 + 0x1a0) = fVar2;
  return;
}



// FUNCTION 140bf1030 FUN_140bf1030 body=700 status=ok
// SIG undefined FUN_140bf1030(void)

void FUN_140bf1030(longlong *param_1)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  longlong local_28;
  int local_20;
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar5 = DAT_146b33f38;
  lVar7 = DAT_146b33f38 + 0x30;
  lVar4 = FWeakObjectPtr::Get(lVar7);
  if (lVar4 == 0) {
    LOCK();
    iVar2 = 0;
    if (DAT_1464b56f4 != 0) {
      iVar2 = DAT_1464b56f4;
    }
    DAT_1464b56f4 = iVar2;
    UNLOCK();
    if (DAT_1464b56f4 == *(int *)(lVar5 + 0x38)) {
      return;
    }
    if (*(longlong *)(lVar5 + 0x40) == 0) {
      return;
    }
    lVar4 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar7,lVar4);
    if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar5 + 0x38) = DAT_1464b56f4;
    }
    lVar4 = FWeakObjectPtr::Get(lVar7);
    if (lVar4 == 0) {
      return;
    }
  }
  lVar5 = FUN_142e0ceb0();
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    lVar5 = FUN_1414150f0();
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
      fVar9 = 1.0;
      lVar5 = (**(code **)(*param_1 + 0x148))(param_1);
      if (((char)param_1[0xb1] == '\0') &&
         (((lVar7 = (**(code **)(*param_1 + 0x148))(param_1), lVar7 == 0 ||
           ((*(uint *)(lVar7 + 0x830) >> 2 & 1) == 0)) && (lVar5 != 0)))) {
        UWorld::GetPlayerControllerIterator(lVar5,&local_28);
        while( true ) {
          if ((local_20 < 0) || (*(int *)(local_28 + 8) <= local_20)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (!bVar1) break;
          plVar6 = (longlong *)FWeakObjectPtr::Get();
          if ((plVar6 != (longlong *)0x0) &&
             (cVar3 = (**(code **)(*plVar6 + 0x768))(), cVar3 != '\0')) {
            lVar5 = plVar6[0x91];
            if (lVar5 == 0) {
LAB_140bf124a:
              lVar5 = (**(code **)(*plVar6 + 0x690))();
              if (lVar5 != 0) {
                lVar7 = FUN_14148cad0();
                if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                  bVar1 = false;
                }
                else {
                  bVar1 = true;
                }
                if (bVar1) {
                  lVar5 = *(longlong *)(lVar5 + 0x520);
                  goto LAB_140bf1297;
                }
              }
            }
            else {
              lVar7 = AHeoCon::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                bVar1 = false;
              }
              else {
                bVar1 = true;
              }
              if (!bVar1) goto LAB_140bf124a;
              lVar5 = *(longlong *)(lVar5 + 0x910);
LAB_140bf1297:
              if ((lVar5 != 0) && (fVar8 = (float)FUN_142d199e0(), fVar8 < fVar9)) {
                fVar9 = fVar8;
              }
            }
          }
          local_20 = local_20 + 1;
        }
      }
      FUN_1405aa060(*(undefined8 *)(lVar4 + 0x3d0),fVar9,*(undefined4 *)(lVar4 + 0x3d8),4);
    }
  }
  return;
}



// FUNCTION 140bf12f0 FUN_140bf12f0 body=471 status=ok
// SIG undefined FUN_140bf12f0(void)

undefined8 FUN_140bf12f0(longlong *param_1,float param_2)

{
  float fVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  float *pfVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  
  pfVar6 = (float *)((longlong)param_1 + 0xf8c);
  fVar9 = *(float *)((longlong)param_1 + 0xf9c);
  if (*(float *)((longlong)param_1 + 0xf9c) <= param_2) {
    fVar9 = param_2;
  }
  uVar7 = 0;
  do {
    uVar8 = uVar7 & 0xff;
    if ((char)uVar7 == '\0') {
      if (((((char)param_1[0x88] != '\x02') || (lVar4 = FUN_140bb7870(param_1), lVar4 == 0)) ||
          (*(int *)(lVar4 + 0x68) != 0)) || (cVar2 = FUN_1404d2e60(lVar4), cVar2 != '\0'))
      goto LAB_140bf1492;
LAB_140bf1433:
      fVar1 = *pfVar6;
      *pfVar6 = fVar9 + fVar1;
      if (*(float *)(param_1 + 499) <= fVar9 + fVar1) {
        if ((char)uVar7 == '\0') {
          if (param_1[0x15d] != 0) {
            FUN_1404c9880(param_1[0x15d],DAT_14686a160);
          }
          FUN_140be5250(param_1);
        }
        else if (uVar8 == 1) {
          FUN_140bf4350(param_1,0);
        }
        else if (uVar8 == 2) {
          FUN_140d97e90(param_1[0x211]);
        }
        goto LAB_140bf1492;
      }
    }
    else {
      if (uVar8 == 1) {
        if ((char)param_1[0x88] == '\x02') {
          lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
          if (lVar4 != 0) {
            uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
            iVar3 = FUN_1428cf800(uVar5);
            if (iVar3 == 3) goto LAB_140bf1492;
          }
          lVar4 = FUN_140bb6170(param_1);
          if ((((lVar4 == 0) &&
               ((lVar4 = (**(code **)(*param_1 + 0x148))(param_1), lVar4 == 0 ||
                ((*(uint *)(lVar4 + 0x830) >> 2 & 1) == 0)))) &&
              (lVar4 = (**(code **)(*param_1 + 0x148))(param_1), lVar4 != 0)) &&
             (*(longlong *)(lVar4 + 0x38) != 0)) {
            cVar2 = *(int *)(*(longlong *)(lVar4 + 0x38) + 0xa0) == 0;
            goto LAB_140bf1401;
          }
        }
      }
      else if ((uVar8 == 2) && (param_1[0x211] != 0)) {
        cVar2 = FUN_140d899d0();
LAB_140bf1401:
        if (cVar2 != '\0') goto LAB_140bf1433;
      }
LAB_140bf1492:
      *(undefined4 *)((longlong)param_1 + (ulonglong)(uVar7 & 0xff) * 4 + 0xf8c) = 0;
    }
    uVar7 = uVar7 + 1;
    pfVar6 = pfVar6 + 1;
    if (2 < (int)uVar7) {
      return 1;
    }
  } while( true );
}



// FUNCTION 140bf14d0 FUN_140bf14d0 body=102 status=ok
// SIG undefined FUN_140bf14d0(void)

undefined1 FUN_140bf14d0(longlong param_1,float param_2)

{
  if (0.0 < *(float *)(param_1 + 0x11b0)) {
    param_2 = *(float *)(param_1 + 0x11b0) - param_2;
    *(float *)(param_1 + 0x11b0) = param_2;
    if (param_2 <= 0.0) {
      FUN_140bf70c0();
      if (*(float *)(param_1 + 0x11b0) <= 0.0) goto LAB_140bf1511;
    }
    return 1;
  }
LAB_140bf1511:
  *(undefined8 *)(param_1 + 0x11b8) = 0;
  return 0;
}



// FUNCTION 140bf1540 FUN_140bf1540 body=4503 status=ok
// SIG undefined FUN_140bf1540(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140bf1540(longlong param_1)

{
  int *piVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  wchar_t *pwVar11;
  longlong *plVar12;
  char cVar13;
  undefined1 auStack_668 [32];
  undefined1 *local_648;
  undefined1 local_640;
  code *local_638;
  undefined4 uStack_630;
  undefined4 uStack_62c;
  undefined8 local_628;
  undefined4 local_620;
  undefined4 local_61c;
  longlong local_618;
  undefined4 local_610;
  undefined4 local_60c;
  longlong local_608;
  undefined4 local_600;
  undefined4 local_5fc;
  longlong local_5f8;
  undefined4 local_5f0;
  undefined4 local_5ec;
  longlong local_5e8;
  undefined4 local_5e0;
  undefined4 local_5dc;
  longlong local_5d8;
  code *local_5c8;
  undefined8 uStack_5c0;
  code *local_5b8;
  undefined8 uStack_5b0;
  longlong local_5a8;
  undefined1 local_5a0 [8];
  undefined1 local_598 [8];
  longlong local_590;
  undefined1 local_588 [8];
  undefined1 local_580 [8];
  longlong local_578;
  undefined1 local_570 [8];
  undefined1 local_568 [8];
  longlong local_560;
  undefined1 local_558 [8];
  undefined1 local_550 [8];
  longlong local_548;
  undefined1 local_540 [8];
  undefined1 local_538 [8];
  undefined8 local_530;
  longlong *local_528;
  undefined4 local_520;
  undefined4 local_51c;
  longlong local_518;
  undefined4 local_510;
  undefined4 local_50c;
  longlong local_508;
  undefined4 local_500;
  undefined4 local_4fc;
  longlong local_4f8;
  undefined8 local_4f0;
  undefined4 local_4e8;
  undefined4 local_4e4;
  longlong local_4e0;
  undefined4 local_4d8;
  undefined4 local_4d4;
  longlong local_4d0;
  undefined8 local_4c8;
  undefined1 local_4c0 [8];
  longlong *local_4b8;
  code *local_4a8;
  longlong *local_4a0;
  undefined1 local_498 [8];
  undefined1 local_490 [8];
  undefined1 local_488 [8];
  undefined1 local_480 [8];
  undefined1 local_478 [8];
  undefined1 local_470 [8];
  undefined1 local_468 [8];
  undefined1 local_460 [8];
  undefined1 local_458 [8];
  undefined1 local_450 [8];
  undefined1 local_448 [16];
  undefined4 local_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  uint uStack_42c;
  undefined4 local_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined4 local_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  uint uStack_40c;
  undefined1 local_408 [8];
  longlong *local_400;
  undefined **local_3f0 [2];
  longlong *local_3e0;
  longlong *local_3c8;
  undefined **local_3b8;
  undefined1 local_3b0 [24];
  undefined1 local_398 [24];
  undefined **local_380 [2];
  longlong *local_370;
  longlong *local_358;
  undefined **local_348 [2];
  longlong *local_338;
  longlong *local_320;
  undefined1 local_310 [8];
  longlong *local_308;
  undefined1 local_2f8 [8];
  longlong *local_2f0;
  undefined1 local_2e0 [8];
  longlong *local_2d8;
  undefined1 local_2c8 [8];
  longlong *local_2c0;
  undefined1 local_2b0 [24];
  undefined1 local_298 [8];
  longlong *local_290;
  undefined1 local_280 [16];
  undefined1 local_270 [56];
  undefined1 local_238 [8];
  undefined8 local_230;
  longlong *local_228;
  undefined4 local_220;
  undefined1 local_218 [200];
  undefined1 local_150 [24];
  int local_138 [2];
  code *local_130;
  longlong *local_128;
  undefined4 local_120;
  undefined1 local_118 [8];
  longlong *local_110;
  undefined1 local_f0 [18];
  char local_de;
  int local_68;
  int local_64;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_668;
  if (*(char *)(param_1 + 0x418) == '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x318) != '\0') {
    return;
  }
  if (*(char *)(param_1 + 0xbaf) != '\0') {
    return;
  }
  if (*(longlong *)(param_1 + 0x460) != 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x430) != 0) {
    return;
  }
  if (*(char *)(param_1 + 0xd73) != '\0') {
    return;
  }
  if (((*(int *)(param_1 + 0x11e8) != 0) && (*(longlong **)(param_1 + 0x11e0) != (longlong *)0x0))
     && (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x11e0) + 0x18))(), cVar5 != '\0')) {
    return;
  }
  if (((*(longlong *)(param_1 + 0x1f8) != 0) && (lVar7 = UUGMenuManager::GetFadeHUD(), lVar7 != 0))
     && (cVar5 = FSimpleFirstPartyCrossPlatformAccountId::IsValid(lVar7), cVar5 != '\0')) {
    return;
  }
  plVar8 = (longlong *)FDateTime::Now(local_498);
  if (DAT_14686a6d0 != '\0') {
    if (DAT_14686a6e8 == 0) {
      return;
    }
    if (*plVar8 - _DAT_14686a6d8 <= DAT_14686a6e8) {
      return;
    }
  }
  cVar5 = FUN_140bc9df0(param_1);
  if (cVar5 != '\0') {
    return;
  }
  piVar1 = (int *)(param_1 + 800);
  if (*piVar1 == 4) {
    cVar5 = FUN_140bc9f00(param_1);
    if (cVar5 != '\0') {
      return;
    }
    FUN_140b9a9b0(local_238,piVar1);
    if (*(char *)(param_1 + 0x418) != '\0') {
      *(undefined1 *)(param_1 + 0x418) = 0;
      FUN_140b9da20(piVar1);
    }
    uStack_42c = uStack_5c0._4_4_;
    local_5c8 = FUN_140bd3c60;
    local_530 = local_230;
    uStack_5c0 = (longlong *)((ulonglong)uStack_5c0._4_4_ << 0x20);
    local_438 = 0x40bd3c60;
    uStack_434 = 1;
    uStack_430 = 0;
    local_528 = local_228;
    if (local_228 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_228 + 1) = (int)local_228[1] + 1;
      UNLOCK();
    }
    uVar9 = TBaseDelegate<TTypeWrapper<void>_>::
            CreateUObject<AFlarePlayerController,enum_EFlareCombatTactic::Type>
                      (local_280,param_1,&local_438,local_220);
    FUN_140bb45f0(param_1,&local_530,local_218,uVar9);
    plVar8 = local_528;
    if (local_528 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_528 + 1;
      lVar7 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_528)(local_528);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_150);
    FUN_1404bf650(local_218);
    if (local_228 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar8 = local_228 + 1;
    lVar7 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar7 != 1) {
      return;
    }
    (**(code **)*local_228)(local_228);
    LOCK();
    piVar1 = (int *)((longlong)local_228 + 0xc);
    iVar6 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar6 != 1) {
      return;
    }
    (**(code **)(*local_228 + 8))(local_228,1);
    return;
  }
  FUN_140b9a9b0(local_138,piVar1);
  if (*(char *)(param_1 + 0x418) != '\0') {
    *(undefined1 *)(param_1 + 0x418) = 0;
    FUN_140b9da20(piVar1);
  }
  uVar9 = thunk_FUN_1422ca050();
  cVar5 = FUN_140a0b280(uVar9);
  if (cVar5 == '\0') {
    FWeakObjectPtr::operator=(&local_620,0);
    local_618 = 0;
    puVar10 = (undefined8 *)FName::FName(local_490,L"GbxShiftOverlay",1);
    plVar8 = (longlong *)FModuleManager::GetModulePtr_Internal(*puVar10);
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0xb0))(plVar8,DAT_14686a658);
      pwVar11 = _guard_xfg_dispatch_icall_nop(L"&UOakGameInstance::OnModalDialogChoiceMade",L"::");
      pwVar3 = (wchar_t *)0x0;
      while (pwVar2 = pwVar11, pwVar2 != (wchar_t *)0x0) {
        pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar3 = pwVar2;
      }
      FName::FName(&local_5a8,pwVar3 + 2,1);
      FWeakObjectPtr::operator=(&local_620,param_1);
      local_618 = local_5a8;
      local_628 = 0;
      if ((local_5a8 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_620), lVar7 != 0)) {
        UObject::FindFunction(lVar7,local_618);
      }
    }
    uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_310,
                       L"Unable to use online features; required content has not finished installing."
                       ,L"OakGameInstance",L"InviteFailedNotFullyInstalled");
    FUN_140b999a0(local_3f0,uVar9);
    if (local_308 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_308 + 1;
      lVar7 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_308)(local_308);
        LOCK();
        piVar1 = (int *)((longlong)local_308 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_308 + 8))(local_308,1);
        }
      }
    }
    FWeakObjectPtr::operator=(local_5a0,0);
    FWeakObjectPtr::operator=(local_598,0);
    local_520 = local_620;
    local_51c = local_61c;
    local_518 = local_618;
    local_648 = local_5a0;
    local_640 = 2;
    FUN_140c23780(2,local_3f0,&local_520,local_598);
    local_3f0[0] = &PTR_FUN_1443170a0;
    if (local_3c8 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_3c8 + 1;
      lVar7 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_3c8)(local_3c8);
        LOCK();
        piVar1 = (int *)((longlong)local_3c8 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_3c8 + 8))(local_3c8,1);
        }
      }
    }
    if (local_3e0 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_3e0 + 1;
      lVar7 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_3e0)(local_3e0);
        LOCK();
        piVar1 = (int *)((longlong)local_3e0 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_3e0 + 8))(local_3e0,1);
        }
      }
    }
  }
  else {
    local_4a8 = local_130;
    local_4a0 = local_128;
    if (local_128 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_128 + 1) = (int)local_128[1] + 1;
      UNLOCK();
    }
    lVar7 = FUN_14244c070(param_1,&local_4a8);
    if ((lVar7 == 0) && (cVar5 = FUN_140bca080(param_1,local_118), cVar5 != '\0')) {
      cVar5 = FUN_140bafb20(param_1);
      if (cVar5 != '\0') {
        local_5b8 = local_130;
        uStack_5b0 = local_128;
        if (local_128 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_128 + 1) = (int)local_128[1] + 1;
          UNLOCK();
        }
        FUN_140bb7990(param_1,local_120);
        plVar8 = uStack_5b0;
        if (uStack_5b0 != (longlong *)0x0) {
          LOCK();
          plVar12 = uStack_5b0 + 1;
          lVar7 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*uStack_5b0)(uStack_5b0);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar8 + 8))(plVar8,1);
            }
          }
        }
        plVar8 = (longlong *)FTimespan::FromSeconds(local_480,0x4008000000000000);
        plVar12 = (longlong *)FDateTime::Now(&local_4f0);
        cVar5 = DAT_14686a6d0;
        DAT_14686a6d0 = '\x01';
        if (cVar5 == '\0') {
          _DAT_14686a6d1 = 1;
          _DAT_14686a6d8 = *plVar12;
          _DAT_14686a6e0 = local_4f0;
        }
        else {
          _DAT_14686a6d8 = *plVar12;
        }
        DAT_14686a6e8 = *plVar8;
        goto LAB_140bf269a;
      }
      FWeakObjectPtr::operator=(&local_610,0);
      local_608 = 0;
      puVar10 = (undefined8 *)FName::FName(local_488,L"GbxShiftOverlay",1);
      plVar8 = (longlong *)FModuleManager::GetModulePtr_Internal(*puVar10);
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0xb0))(plVar8,DAT_14686a658);
        pwVar11 = _guard_xfg_dispatch_icall_nop(L"&UOakGameInstance::OnModalDialogChoiceMade",L"::")
        ;
        pwVar3 = (wchar_t *)0x0;
        while (pwVar2 = pwVar11, pwVar2 != (wchar_t *)0x0) {
          pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
          pwVar3 = pwVar2;
        }
        FName::FName(&local_590,pwVar3 + 2,1);
        FWeakObjectPtr::operator=(&local_610,param_1);
        local_608 = local_590;
        local_638 = (code *)0x0;
        if ((local_590 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_610), lVar7 != 0)) {
          UObject::FindFunction(lVar7,local_608);
        }
      }
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (local_408,L"Splitscreen Join Requested",L"OakGameInstance",
                 L"SplitscreenJoinUIDisallows_Title");
      FText::FText(local_4c0);
      cVar5 = FUN_140bca8a0(param_1);
      if (cVar5 == '\0') {
        uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_2e0,
                           L"The pause menu must be open and at the top menu level to allow a splitscreen player to join."
                           ,L"OakGameInstance",L"SplitscreenJoinUIDisallows_Message_B");
        FText::operator=(local_4c0,uVar9);
        plVar8 = local_2d8;
      }
      else {
        uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_2f8,
                           L"Back out to the main menu to allow a splitscreen player to join.",
                           L"OakGameInstance",L"SplitscreenJoinUIDisallows_Message_A");
        FText::operator=(local_4c0,uVar9);
        plVar8 = local_2f0;
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar12 = plVar8 + 1;
        lVar7 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
      }
      local_3b8 = &PTR_FUN_1443170a0;
      FText::FText(local_3b0,local_408);
      FText::FText(local_398,local_4c0);
      FWeakObjectPtr::operator=(local_588,0);
      FWeakObjectPtr::operator=(local_580,0);
      local_510 = local_610;
      local_50c = local_60c;
      local_508 = local_608;
      local_648 = local_588;
      local_640 = 2;
      FUN_140c23780(2,&local_3b8,&local_510,local_580);
      FUN_140b9cdd0(&local_3b8);
      local_370 = local_400;
      if (local_4b8 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_4b8 + 1;
        lVar7 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_4b8)(local_4b8);
          LOCK();
          piVar1 = (int *)((longlong)local_4b8 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          local_370 = local_400;
          if (iVar6 == 1) {
            (**(code **)(*local_4b8 + 8))(local_4b8,1);
            local_370 = local_400;
          }
        }
      }
    }
    else {
      if ((local_138[0] == 3) || (iVar6 = FUN_14046e5c0(param_1), iVar6 <= local_64 + local_68)) {
        plVar8 = (longlong *)FTimespan::FromSeconds(local_470,0x4008000000000000);
        plVar12 = (longlong *)FDateTime::Now(&local_4c8);
        cVar5 = DAT_14686a6d0;
        DAT_14686a6d0 = '\x01';
        if (cVar5 == '\0') {
          _DAT_14686a6d1 = 1;
          _DAT_14686a6d8 = *plVar12;
          _DAT_14686a6e0 = local_4c8;
        }
        else {
          _DAT_14686a6d8 = *plVar12;
        }
        DAT_14686a6e8 = *plVar8;
        local_628 = CONCAT44(local_628._4_4_,0xffffffff);
        cVar13 = '\0';
        puVar10 = (undefined8 *)FName::FName(local_448,L"SEARCHCROSSPLAY",1);
        cVar5 = FUN_1404a9610(local_f0,*puVar10,&local_628);
        pcVar4 = local_130;
        if ((cVar5 == '\0') || ((char)local_628 == '\0')) {
          if ((local_130 != (code *)0x0) && (local_110 != (longlong *)0x0)) {
            plVar8 = (longlong *)(**(code **)(*local_110 + 8))(local_110,local_458);
            plVar12 = (longlong *)(**(code **)(*(longlong *)pcVar4 + 8))(pcVar4,local_460);
            if (*plVar12 != *plVar8) {
              FWeakObjectPtr::operator=(&local_600,0);
              local_5f8 = 0;
              puVar10 = (undefined8 *)FName::FName(local_468,L"GbxShiftOverlay",1);
              plVar8 = (longlong *)FModuleManager::GetModulePtr_Internal(*puVar10);
              if ((plVar8 != (longlong *)0x0) &&
                 (cVar5 = (**(code **)(*plVar8 + 0x50))(plVar8,lVar7), cVar5 != '\0')) {
                (**(code **)(*plVar8 + 0x88))(plVar8,lVar7);
                pwVar11 = _guard_xfg_dispatch_icall_nop
                                    (L"&UOakGameInstance::OnModalDialogChoiceMade",L"::");
                pwVar3 = (wchar_t *)0x0;
                while (pwVar2 = pwVar11, pwVar2 != (wchar_t *)0x0) {
                  pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
                  pwVar3 = pwVar2;
                }
                FName::FName(&local_548,pwVar3 + 2,1);
                FWeakObjectPtr::operator=(&local_600,param_1);
                local_5f8 = local_548;
                local_638 = (code *)0x0;
                if ((local_548 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_600), lVar7 != 0)) {
                  UObject::FindFunction(lVar7,local_5f8);
                }
              }
              uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                                (local_298,
                                 L"The game you are trying to join does not allow players from other platforms. The group leader must have cross-play enabled."
                                 ,L"OakGameInstance",L"InviteFailedCrossplayMismatch");
              FUN_140b999a0(local_348,uVar9);
              if (local_290 != (longlong *)0x0) {
                LOCK();
                plVar8 = local_290 + 1;
                lVar7 = *plVar8;
                *(int *)plVar8 = (int)*plVar8 + -1;
                UNLOCK();
                if ((int)lVar7 == 1) {
                  (**(code **)*local_290)(local_290);
                  LOCK();
                  piVar1 = (int *)((longlong)local_290 + 0xc);
                  iVar6 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar6 == 1) {
                    (**(code **)(*local_290 + 8))(local_290,1);
                  }
                }
              }
              FWeakObjectPtr::operator=(local_540,0);
              FWeakObjectPtr::operator=(local_538,0);
              local_4d8 = local_600;
              local_4d4 = local_5fc;
              local_4d0 = local_5f8;
              local_648 = local_540;
              local_640 = 2;
              FUN_140c23780(2,local_348,&local_4d8,local_538);
              local_348[0] = &PTR_FUN_1443170a0;
              if (local_320 != (longlong *)0x0) {
                LOCK();
                plVar8 = local_320 + 1;
                lVar7 = *plVar8;
                *(int *)plVar8 = (int)*plVar8 + -1;
                UNLOCK();
                if ((int)lVar7 == 1) {
                  (**(code **)*local_320)(local_320);
                  LOCK();
                  piVar1 = (int *)((longlong)local_320 + 0xc);
                  iVar6 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar6 == 1) {
                    (**(code **)(*local_320 + 8))(local_320,1);
                  }
                }
              }
              if (local_338 != (longlong *)0x0) {
                LOCK();
                plVar8 = local_338 + 1;
                lVar7 = *plVar8;
                *(int *)plVar8 = (int)*plVar8 + -1;
                UNLOCK();
                if ((int)lVar7 == 1) {
                  (**(code **)*local_338)(local_338);
                  LOCK();
                  piVar1 = (int *)((longlong)local_338 + 0xc);
                  iVar6 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar6 == 1) {
                    (**(code **)(*local_338 + 8))(local_338,1);
                  }
                }
              }
              goto LAB_140bf269a;
            }
          }
        }
        else {
          cVar13 = '\x01';
          if ((*(char *)(param_1 + 0xb1a) != '\0') &&
             (cVar5 = FUN_140bb68b0(param_1), cVar5 == '\0')) {
            FWeakObjectPtr::operator=(&local_5f0,0);
            local_5e8 = 0;
            puVar10 = (undefined8 *)FName::FName(local_450,L"GbxShiftOverlay",1);
            plVar8 = (longlong *)FModuleManager::GetModulePtr_Internal(*puVar10);
            if ((plVar8 != (longlong *)0x0) &&
               (cVar5 = (**(code **)(*plVar8 + 0x50))(plVar8,lVar7), cVar5 != '\0')) {
              (**(code **)(*plVar8 + 0x88))(plVar8,lVar7);
              pwVar11 = _guard_xfg_dispatch_icall_nop
                                  (L"&UOakGameInstance::OnModalDialogChoiceMade",L"::");
              pwVar3 = (wchar_t *)0x0;
              while (pwVar2 = pwVar11, pwVar2 != (wchar_t *)0x0) {
                pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
                pwVar3 = pwVar2;
              }
              FName::FName(&local_560,pwVar3 + 2,1);
              FWeakObjectPtr::operator=(&local_5f0,param_1);
              local_5e8 = local_560;
              local_638 = (code *)0x0;
              if ((local_560 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_5f0), lVar7 != 0)) {
                UObject::FindFunction(lVar7,local_5e8);
              }
            }
            uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                              (local_2b0,
                               L"The game you are trying to join requires cross-play to be enabled."
                               ,L"OakGameInstance",L"InviteFailedCrossplayDisabled");
            FUN_140b999a0(local_270,uVar9);
            TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_2b0);
            FWeakObjectPtr::operator=(local_558,0);
            FWeakObjectPtr::operator=(local_550,0);
            local_4e8 = local_5f0;
            local_4e4 = local_5ec;
            local_4e0 = local_5e8;
            local_648 = local_558;
            local_640 = 2;
            FUN_140c23780(2,local_270,&local_4e8,local_550);
            FUN_140b9cdd0(local_270);
            goto LAB_140bf269a;
          }
        }
        if (local_de == '\0') {
          if (lVar7 == 0) {
            if (local_130 != (code *)0x0) {
              FUN_140b9ea10(param_1 + 0x220,local_138);
              FUN_140beaf50(param_1,2);
              uStack_630 = 0;
              local_638 = FUN_140bd0d30;
              local_428 = 0x40bd0d30;
              uStack_424 = 1;
              uStack_420 = 0;
              uStack_41c = uStack_62c;
              FUN_14058c4b0(param_1 + 0x11e0,param_1,&local_428);
              local_5c8 = local_130;
              uStack_5c0 = local_128;
              if (local_128 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_128 + 1) = (int)local_128[1] + 1;
                UNLOCK();
              }
              local_648 = (undefined1 *)CONCAT71(local_648._1_7_,1);
              FUN_140ba74d0(param_1,&local_5c8,cVar13,1);
              TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_5c8);
              goto LAB_140bf269a;
            }
          }
          else if ((*(char *)(param_1 + 0x440) != '\x02') ||
                  ((cVar13 != '\0' && (*(char *)(param_1 + 0x458) == '\0')))) {
            FUN_140b9ea10(param_1 + 0x220,local_138);
            FUN_140beaf50(param_1,2);
            uStack_40c = uStack_5b0._4_4_;
            uStack_5b0 = (longlong *)((ulonglong)uStack_5b0._4_4_ << 0x20);
            local_5b8 = FUN_140bd0d30;
            local_418 = 0x40bd0d30;
            uStack_414 = 1;
            uStack_410 = 0;
            FUN_14058c4b0(param_1 + 0x11e0,param_1,&local_418);
            FUN_140ba5a60(param_1,cVar13,1);
            goto LAB_140bf269a;
          }
        }
        FUN_140beb420(param_1,local_138);
        goto LAB_140bf269a;
      }
      FWeakObjectPtr::operator=(&local_5e0,0);
      local_5d8 = 0;
      puVar10 = (undefined8 *)FName::FName(local_478,L"GbxShiftOverlay",1);
      plVar8 = (longlong *)FModuleManager::GetModulePtr_Internal(*puVar10);
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0xb0))(plVar8,DAT_14686a658);
        pwVar11 = _guard_xfg_dispatch_icall_nop(L"&UOakGameInstance::OnModalDialogChoiceMade",L"::")
        ;
        pwVar3 = (wchar_t *)0x0;
        while (pwVar2 = pwVar11, pwVar2 != (wchar_t *)0x0) {
          pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
          pwVar3 = pwVar2;
        }
        FName::FName(&local_578,pwVar3 + 2,1);
        FWeakObjectPtr::operator=(&local_5e0,param_1);
        local_5d8 = local_578;
        local_638 = (code *)0x0;
        if ((local_578 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_5e0), lVar7 != 0)) {
          UObject::FindFunction(lVar7,local_5d8);
        }
      }
      uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_2c8,
                         L"The game you are trying to join does not have enough space for all active players."
                         ,L"OakGameInstance",L"InviteFailedNoRoom");
      FUN_140b999a0(local_380,uVar9);
      if (local_2c0 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_2c0 + 1;
        lVar7 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_2c0)(local_2c0);
          LOCK();
          piVar1 = (int *)((longlong)local_2c0 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*local_2c0 + 8))(local_2c0,1);
          }
        }
      }
      FWeakObjectPtr::operator=(local_570,0);
      FWeakObjectPtr::operator=(local_568,0);
      local_500 = local_5e0;
      local_4fc = local_5dc;
      local_4f8 = local_5d8;
      local_648 = local_570;
      local_640 = 2;
      FUN_140c23780(2,local_380,&local_500,local_568);
      local_380[0] = &PTR_FUN_1443170a0;
      if (local_358 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_358 + 1;
        lVar7 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_358)(local_358);
          LOCK();
          piVar1 = (int *)((longlong)local_358 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*local_358 + 8))(local_358,1);
          }
        }
      }
    }
    if (local_370 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_370 + 1;
      lVar7 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_370)(local_370);
        LOCK();
        piVar1 = (int *)((longlong)local_370 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_370 + 8))(local_370,1);
        }
      }
    }
  }
LAB_140bf269a:
  FUN_140b9da20(local_138);
  return;
}



// FUNCTION 140bf26e0 FUN_140bf26e0 body=301 status=ok
// SIG undefined FUN_140bf26e0(void)

void FUN_140bf26e0(longlong param_1,undefined2 *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 local_res8 [8];
  undefined4 uStack_1c;
  
  if (*(longlong *)(param_1 + 0xff8) != 0) {
    *(undefined2 *)(param_1 + 0x1000) = *param_2;
    return;
  }
  if (*(longlong *)(param_1 + 0x430) == 0) {
    FUN_140ba4250();
    return;
  }
  uVar6 = 0;
  *(undefined2 *)(param_1 + 0x1000) = *param_2;
  plVar1 = (longlong *)(param_1 + 0x9a0);
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_FUN_143fcfec0;
    FWeakObjectPtr::operator=(plVar3 + 1,param_1);
    *(undefined4 *)(plVar3 + 2) = 0x40bd77f0;
    *(undefined4 *)((longlong)plVar3 + 0x14) = 1;
    *(undefined4 *)(plVar3 + 3) = 0;
    *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_1c;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[5] = lVar4;
    *plVar3 = (longlong)&PTR_FUN_143fcff08;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
    puVar5 = (undefined8 *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res8);
    iVar2 = *(int *)(param_1 + 0x9a8);
    uVar6 = *puVar5;
    *(int *)(param_1 + 0x9a8) = iVar2 + 1;
    if (*(int *)(param_1 + 0x9ac) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    puVar5 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
    *puVar5 = plVar3;
    *(undefined4 *)(puVar5 + 1) = 3;
  }
  *(undefined8 *)(param_1 + 0xff8) = uVar6;
  return;
}



// FUNCTION 140bf2810 FUN_140bf2810 body=270 status=ok
// SIG undefined FUN_140bf2810(void)

void FUN_140bf2810(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 local_res8 [8];
  undefined4 uStack_1c;
  
  if (*(longlong *)(param_1 + 0xff0) == 0) {
    uVar6 = 0;
    plVar1 = (longlong *)(param_1 + 0x9a0);
    plVar3 = (longlong *)FMemory::Realloc(0,0x30,0);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = (longlong)&PTR_FUN_143fcfec0;
      FWeakObjectPtr::operator=(plVar3 + 1,param_1);
      *(undefined4 *)(plVar3 + 2) = 0x40bd7770;
      *(undefined4 *)((longlong)plVar3 + 0x14) = 1;
      *(undefined4 *)(plVar3 + 3) = 0;
      *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_1c;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[5] = lVar4;
      *plVar3 = (longlong)&PTR_FUN_143fcff08;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
      puVar5 = (undefined8 *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res8);
      iVar2 = *(int *)(param_1 + 0x9a8);
      uVar6 = *puVar5;
      *(int *)(param_1 + 0x9a8) = iVar2 + 1;
      if (*(int *)(param_1 + 0x9ac) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
      }
      puVar5 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
      *puVar5 = plVar3;
      *(undefined4 *)(puVar5 + 1) = 3;
    }
    *(undefined8 *)(param_1 + 0xff0) = uVar6;
    FUN_140ba4250(param_1,&DAT_14686a12c,0);
  }
  return;
}



// FUNCTION 140bf2920 FUN_140bf2920 body=646 status=ok
// SIG undefined FUN_140bf2920(void)

void FUN_140bf2920(longlong param_1,byte param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_98 [2];
  undefined1 local_88 [8];
  longlong *local_80;
  undefined **local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_50 [8];
  longlong *local_48;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  local_98[0] = 0;
  local_98[1] = 0;
  cVar4 = FUN_140dbced0(param_1 + 0x5f0,local_98);
  if (cVar4 != '\0') {
    lVar5 = FUN_14244f490(param_1,0);
    if (lVar5 != 0) {
      FUN_140beb220(param_1,param_2 ^ 1);
      local_a8 = 0;
      uStack_a0 = 0;
      FUN_1426ffc80(lVar5,local_98,0,0,&local_a8);
      goto LAB_140bf2b6f;
    }
  }
  FUN_140bc2fb0(param_1,0);
  FText::FText(local_88);
  cVar4 = FText::IsEmpty(local_88);
  if (cVar4 != '\0') {
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_38,L"Could not connect to host.",L"OakGameInstance",L"JoinFailed");
    FText::operator=(local_88,uVar6);
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
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
  }
  uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_20,L"Connection Failed",L"OakGameInstance",L"ConnectionFailed");
  local_70 = &PTR_FUN_1443170a0;
  FText::FText(local_68,uVar6);
  FText::FText(local_50,local_88);
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
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_18 + 8))(local_18,1);
      }
    }
  }
  local_70 = &PTR_FUN_1443170a0;
  FUN_140bbf3a0(param_1,&local_70);
  local_70 = &PTR_FUN_1443170a0;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)local_48 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_48 + 8))(local_48,1);
      }
    }
  }
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_80 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar2 = (int *)((longlong)local_80 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_80 + 8))(local_80,1);
      }
    }
  }
LAB_140bf2b6f:
  if (local_98[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140bf2bb0 FUN_140bf2bb0 body=188 status=ok
// SIG undefined FUN_140bf2bb0(void)

void FUN_140bf2bb0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(int *)(param_1 + 0x28c) = *(int *)(param_1 + 0x28c) + 1;
  bVar3 = false;
  iVar6 = *(int *)(param_1 + 0x28c);
  iVar5 = *(int *)(param_1 + 0x280) + -1;
  lVar8 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar7 = lVar8 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 0x278);
      if ((*(int *)(lVar7 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_140bf2c23:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3);
        if (cVar4 == '\0') goto LAB_140bf2c23;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)(param_1 + 0x28c);
  }
  *(int *)(param_1 + 0x28c) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x278),0);
    return;
  }
  return;
}



// FUNCTION 140bf2c70 FUN_140bf2c70 body=189 status=ok
// SIG undefined FUN_140bf2c70(void)

void FUN_140bf2c70(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(int *)(param_1 + 0x274) = *(int *)(param_1 + 0x274) + 1;
  bVar3 = false;
  iVar6 = *(int *)(param_1 + 0x274);
  iVar5 = *(int *)(param_1 + 0x268) + -1;
  lVar8 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar7 = lVar8 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 0x260);
      if ((*(int *)(lVar7 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_140bf2ce4:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3);
        if (cVar4 == '\0') goto LAB_140bf2ce4;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)(param_1 + 0x274);
  }
  *(int *)(param_1 + 0x274) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x260),0);
    return;
  }
  return;
}



// FUNCTION 140bf2d30 FUN_140bf2d30 body=188 status=ok
// SIG undefined FUN_140bf2d30(void)

void FUN_140bf2d30(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(int *)(param_1 + 0x304) = *(int *)(param_1 + 0x304) + 1;
  bVar3 = false;
  iVar6 = *(int *)(param_1 + 0x304);
  iVar5 = *(int *)(param_1 + 0x2f8) + -1;
  lVar8 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar7 = lVar8 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 0x2f0);
      if ((*(int *)(lVar7 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_140bf2da3:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3);
        if (cVar4 == '\0') goto LAB_140bf2da3;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)(param_1 + 0x304);
  }
  *(int *)(param_1 + 0x304) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x2f0),0);
    return;
  }
  return;
}



// FUNCTION 140bf2e00 FUN_140bf2e00 body=188 status=ok
// SIG undefined FUN_140bf2e00(void)

void FUN_140bf2e00(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(int *)(param_1 + 0x2ec) = *(int *)(param_1 + 0x2ec) + 1;
  bVar3 = false;
  iVar6 = *(int *)(param_1 + 0x2ec);
  iVar5 = *(int *)(param_1 + 0x2e0) + -1;
  lVar8 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar7 = lVar8 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 0x2d8);
      if ((*(int *)(lVar7 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_140bf2e73:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3);
        if (cVar4 == '\0') goto LAB_140bf2e73;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)(param_1 + 0x2ec);
  }
  *(int *)(param_1 + 0x2ec) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x2d8),0);
    return;
  }
  return;
}



// FUNCTION 140bf2ec0 FUN_140bf2ec0 body=189 status=ok
// SIG undefined FUN_140bf2ec0(void)

void FUN_140bf2ec0(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(int *)(param_1 + 700) = *(int *)(param_1 + 700) + 1;
  bVar3 = false;
  iVar6 = *(int *)(param_1 + 700);
  iVar5 = *(int *)(param_1 + 0x2b0) + -1;
  lVar8 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar7 = lVar8 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 0x2a8);
      if ((*(int *)(lVar7 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_140bf2f34:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3);
        if (cVar4 == '\0') goto LAB_140bf2f34;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)(param_1 + 700);
  }
  *(int *)(param_1 + 700) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x2a8),0);
    return;
  }
  return;
}



// FUNCTION 140bf2f90 FUN_140bf2f90 body=348 status=ok
// SIG undefined FUN_140bf2f90(void)

undefined8 FUN_140bf2f90(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong local_res8;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48 [16];
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  
  lVar2 = (**(code **)(*param_1 + 0x148))();
  if (lVar2 == 0) {
    return 0;
  }
  if (*(int *)(param_2 + 8) < 2) {
    return 0;
  }
  plVar3 = (longlong *)FString::FString(local_48,param_2);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_58 = *plVar3;
  *plVar3 = 0;
  local_50 = (undefined4)plVar3[1];
  local_4c = *(undefined4 *)((longlong)plVar3 + 0xc);
  plVar3[1] = 0;
  FUN_1417978e0(&local_38,&local_58);
  if (*plVar3 != 0) {
    FMemory::Free();
  }
  local_res8 = FSoftObjectPath::TryLoad(&local_38);
  if (local_res8 != 0) {
    lVar4 = FUN_142f47520();
    if ((*(int *)(*(longlong *)(local_res8 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(local_res8 + 0x10) + 0x88) +
         (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140bf3072;
  }
  local_res8 = 0;
LAB_140bf3072:
  FUN_142f44bf0(&local_res8,lVar2);
  if (local_res8 == 0) {
    if (local_30 != 0) {
      FMemory::Free();
    }
    return 0;
  }
  FUN_142f3f630(local_res8,param_3,param_4);
  if (local_30 != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 140bf30f0 FUN_140bf30f0 body=17 status=ok
// SIG undefined FUN_140bf30f0(void)

void FUN_140bf30f0(longlong param_1)

{
  uint *puVar1;
  
  if (*(longlong *)(param_1 + 0x490) == 0) {
    return;
  }
  puVar1 = (uint *)(*(longlong *)(param_1 + 0x490) + 0x3cc);
  *puVar1 = *puVar1 & 0xfffffffe;
  FUN_141f5ac00();
  return;
}



// FUNCTION 140bf3110 FUN_140bf3110 body=369 status=ok
// SIG undefined FUN_140bf3110(void)

void FUN_140bf3110(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined1 local_res20 [8];
  longlong local_38;
  longlong *plStack_30;
  longlong *local_28;
  longlong *local_20;
  longlong local_18;
  longlong *plStack_10;
  
  cVar5 = FUN_140ba7970();
  if (cVar5 != '\0') {
    FUN_140bbc6f0(param_1,&local_38,param_3);
    plVar7 = plStack_30;
    if (local_38 != 0) {
      puVar6 = (undefined8 *)FName::FName(local_res20,L"SPARK",1);
      Online::GetSessionInterface(&local_28,*puVar6);
      plVar7 = plStack_30;
      if (local_28 != (longlong *)0x0) {
        local_18 = local_38;
        plStack_10 = plStack_30;
        if (plStack_30 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
          UNLOCK();
        }
        (**(code **)(*local_28 + 0x170))(plStack_30,param_2,&local_18);
        plVar4 = plStack_10;
        if (plStack_10 != (longlong *)0x0) {
          LOCK();
          plVar7 = plStack_10 + 1;
          lVar3 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          plVar7 = plStack_30;
          if ((int)lVar3 == 1) {
            (**(code **)*plStack_10)(plStack_10);
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            plVar7 = plStack_30;
            if (iVar2 == 1) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
              plVar7 = plStack_30;
            }
          }
        }
      }
      plVar4 = local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_20 + 1;
        lVar3 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        plVar7 = plStack_30;
        if ((int)lVar3 == 1) {
          (**(code **)*local_20)(local_20);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar7 = plStack_30;
          if (iVar2 == 1) {
            (**(code **)(*local_20 + 8))(local_20,1);
            plVar7 = plStack_30;
          }
        }
      }
    }
    plVar4 = plStack_30;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar7 + 1;
      lVar3 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plStack_30)(plStack_30);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plStack_30 + 8))(plStack_30,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140bf3290 FUN_140bf3290 body=470 status=ok
// SIG undefined FUN_140bf3290(void)

void FUN_140bf3290(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 local_res20 [8];
  longlong local_58;
  longlong *plStack_50;
  longlong *local_48;
  longlong *local_40;
  longlong local_38;
  longlong *plStack_30;
  longlong local_28;
  longlong *plStack_20;
  
  cVar4 = FUN_140ba7bb0();
  if (cVar4 != '\0') {
    puVar5 = (undefined8 *)FName::FName(local_res20,L"SPARK",1);
    FUN_140bbd560(&local_48,*puVar5);
    FUN_140bbb2b0(param_1,&local_58,param_3);
    plVar6 = plStack_50;
    plVar7 = plStack_50;
    if ((local_48 != (longlong *)0x0) && (local_58 != 0)) {
      local_38 = local_58;
      plStack_30 = plStack_50;
      if (plStack_50 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
        UNLOCK();
      }
      (**(code **)(*local_48 + 0x98))(plStack_50,param_2,&local_38,0);
      plVar7 = plStack_30;
      if (plStack_30 != (longlong *)0x0) {
        LOCK();
        plVar6 = plStack_30 + 1;
        lVar3 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        plVar6 = plStack_50;
        if ((int)lVar3 == 1) {
          (**(code **)*plStack_30)(plStack_30);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar6 = plStack_50;
          if (iVar2 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
            plVar6 = plStack_50;
          }
        }
      }
      local_28 = local_58;
      plStack_20 = plStack_50;
      plVar7 = (longlong *)0x0;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        plVar7 = plStack_50;
      }
      FUN_140bc0a50(param_1,&local_28,0);
      plVar6 = plStack_20;
      if (plStack_20 != (longlong *)0x0) {
        LOCK();
        plVar7 = plStack_20 + 1;
        lVar3 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        plVar7 = plStack_50;
        if ((int)lVar3 == 1) {
          (**(code **)*plStack_20)(plStack_20);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar7 = plStack_50;
          if (iVar2 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
            plVar7 = plStack_50;
          }
        }
      }
    }
    plVar6 = plStack_50;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar7 + 1;
      lVar3 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
    }
    plVar7 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_40 + 1;
      lVar3 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
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



// FUNCTION 140bf3470 FUN_140bf3470 body=185 status=ok
// SIG undefined FUN_140bf3470(void)

void FUN_140bf3470(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  lVar2 = FUN_14244f490(param_1,0);
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
    if ((bVar1) && (*(char *)(lVar2 + 0x128) == '\x03')) {
      plVar4 = *(longlong **)(param_1 + 0x10c0);
      uVar6 = 0;
      uVar5 = (longlong)*(int *)(param_1 + 0x10c8) & 0x1fffffffffffffff;
      if (plVar4 + *(int *)(param_1 + 0x10c8) < plVar4) {
        uVar5 = uVar6;
      }
      if (uVar5 != 0) {
        do {
          if (*plVar4 != 0) {
            FUN_140c5b630();
          }
          plVar4 = plVar4 + 1;
          uVar6 = uVar6 + 1;
        } while (uVar6 != uVar5);
      }
    }
  }
  return;
}



// FUNCTION 140bf3530 FUN_140bf3530 body=26 status=ok
// SIG undefined FUN_140bf3530(void)

void FUN_140bf3530(longlong param_1,longlong *param_2)

{
  if ((*param_2 != 0) && (param_2[1] != 0)) {
    TArray<TScriptInterface<IHoodEconomySystemUnlockable>,TSizedDefaultAllocator<32>_>::Remove
              (param_1 + 0xb88);
    return;
  }
  return;
}



// FUNCTION 140bf3550 FUN_140bf3550 body=143 status=ok
// SIG undefined FUN_140bf3550(void)

void FUN_140bf3550(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined1 local_res18 [16];
  longlong *local_18;
  longlong *local_10;
  
  puVar6 = (undefined8 *)FName::FName(local_res18,L"SPARK",1);
  FUN_140bbd560(&local_18,*puVar6);
  if (local_18 != (longlong *)0x0) {
    (**(code **)(*local_18 + 0x48))(local_18,param_2);
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
  return;
}



// FUNCTION 140bf35e0 FUN_140bf35e0 body=1605 status=ok
// SIG undefined FUN_140bf35e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140bf35e0(longlong *param_1,longlong param_2)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  longlong *plVar14;
  int iVar15;
  longlong lVar16;
  int iVar17;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong *local_b0;
  uint local_a8 [2];
  longlong local_a0;
  longlong local_98;
  int local_90;
  int local_88;
  char local_84;
  int local_80;
  longlong *local_78;
  longlong local_70;
  int local_68;
  undefined8 local_58;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_c8 = param_2;
  local_b0 = param_1;
  lVar8 = ALandscapeStreamingProxy::StaticClass();
  local_b8 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar8 != 0) {
    lVar9 = ALandscapeStreamingProxy::StaticClass();
    lVar16 = lVar8;
    do {
      if (lVar16 == lVar9) goto LAB_140bf3650;
      lVar16 = *(longlong *)(lVar16 + 0x30);
    } while (lVar16 != 0);
  }
  lVar8 = 0;
LAB_140bf3650:
  local_a8[0] = 5;
  local_50 = '\0';
  local_c0 = lVar8;
  FUN_14044bc80(&local_a0,&local_b8,&local_c0);
  FUN_14045a130(local_a8);
  if (local_84 == '\0') {
LAB_140bf36a3:
    if (local_78 != (longlong *)0x0) {
      FUN_140ad7dc0(local_78,param_2);
    }
    lVar8 = local_a0;
    iVar17 = local_88 + 1;
    if (iVar17 < local_68 + local_90) {
      lVar16 = (longlong)iVar17 * 8;
      iVar15 = local_68;
      iVar12 = local_90;
      do {
        if (iVar17 < iVar12) {
          plVar14 = *(longlong **)(local_98 + lVar16);
        }
        else {
          plVar14 = *(longlong **)(local_70 + (longlong)(iVar17 - iVar12) * 8);
        }
        local_80 = local_80 + 1;
        if ((plVar14 != (longlong *)0x0) &&
           (lVar9 = AActor::GetLevel(plVar14), iVar15 = local_68, iVar12 = local_90, lVar9 != 0)) {
          if ((local_a8[0] & 1) != 0) {
            iVar1 = *(int *)((longlong)plVar14 + 0xc);
            if (iVar1 < (int)DAT_1469e91c4) {
              uVar13 = iVar1 >> 0x1f & 0xffff;
              uVar7 = iVar1 + uVar13;
              lVar11 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                       (longlong)(int)((uVar7 & 0xffff) - uVar13) * 0x18;
            }
            else {
              lVar11 = 0;
            }
            if ((*(uint *)(lVar11 + 8) >> 0x1d & 1) != 0) goto LAB_140bf3855;
          }
          if (((local_a8[0] >> 1 & 1) == 0) ||
             (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(plVar14), iVar15 = local_68,
             iVar12 = local_90, cVar6 != '\0')) {
            if ((local_a8[0] >> 2 & 1) != 0) {
              if (((*(byte *)(lVar9 + 0x204) & 0x10) == 0) &&
                 ((*(byte *)(lVar9 + 0x205) & 0x10) == 0)) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              piVar2 = *(int **)(lVar9 + 600);
              if (((*(longlong *)(lVar9 + 0xc0) == 0) ||
                  (piVar10 = (int *)UWorld::GetActiveLevelCollection(), piVar10 == (int *)0x0)) ||
                 (piVar2 == piVar10)) {
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
              iVar15 = local_68;
              iVar12 = local_90;
              if ((!bVar5) || (!bVar3)) goto LAB_140bf3855;
            }
            lVar9 = ULevel::GetWorld(lVar9);
            iVar15 = local_68;
            iVar12 = local_90;
            if (lVar9 == lVar8) {
              lVar9 = AActor::GetLevel(plVar14);
              if (lVar9 == *(longlong *)(lVar8 + 0x30)) goto LAB_140bf3967;
              lVar9 = UVoipListenerSynthComponent::GetPrivateStaticClass();
              if ((*(int *)(plVar14[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(plVar14[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
                  lVar9 + 0x88)) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              iVar15 = local_68;
              iVar12 = local_90;
              if (!bVar5) goto LAB_140bf3967;
            }
          }
        }
LAB_140bf3855:
        iVar17 = iVar17 + 1;
        lVar16 = lVar16 + 8;
        if (iVar15 + iVar12 <= iVar17) break;
      } while( true );
    }
    local_78 = (longlong *)0x0;
    local_84 = '\x01';
    param_2 = local_c8;
    param_1 = local_b0;
  }
LAB_140bf387d:
  if (local_50 != '\0') {
    local_50 = '\0';
    UWorld::RemoveOnActorSpawnedHandler(local_a0,local_58);
    if (local_70 != 0) {
      FMemory::Free();
    }
    if (local_98 != 0) {
      FMemory::Free();
    }
  }
  lVar8 = AGExplodingRockProjectile::GetPrivateStaticClass();
  lVar16 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar8 != 0) {
    lVar11 = AGExplodingRockProjectile::GetPrivateStaticClass();
    lVar9 = lVar8;
    do {
      if (lVar9 == lVar11) goto LAB_140bf38e4;
      lVar9 = *(longlong *)(lVar9 + 0x30);
    } while (lVar9 != 0);
  }
  lVar8 = 0;
LAB_140bf38e4:
  local_a8[0] = 5;
  local_50 = '\0';
  local_c0 = lVar16;
  local_b8 = lVar8;
  FUN_14044bc80(&local_a0,&local_c0,&local_b8);
  FUN_14045a130(local_a8);
  iVar17 = local_88;
  plVar14 = local_78;
joined_r0x000140bf3915:
  local_88 = iVar17;
  local_78 = plVar14;
  if (local_84 == '\0') {
    if (plVar14 != (longlong *)0x0) {
      if ((*(byte *)((longlong)plVar14 + 0x94) & 2) == 0) {
        iVar17 = *(int *)((longlong)plVar14 + 0xc);
        if (iVar17 < (int)DAT_1469e91c4) {
          uVar13 = iVar17 >> 0x1f & 0xffff;
          uVar7 = iVar17 + uVar13;
          lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                  (longlong)(int)((uVar7 & 0xffff) - uVar13) * 0x18;
        }
        else {
          lVar8 = 0;
        }
        if ((*(uint *)(lVar8 + 8) >> 0x1d & 1) != 0) goto LAB_140bf3992;
        bVar5 = false;
      }
      else {
LAB_140bf3992:
        bVar5 = true;
      }
      if (((!bVar5) && (cVar6 = FUN_140b31bb0(plVar14), cVar6 != '\0')) &&
         (lVar8 = FUN_140b2aac0(plVar14), lVar8 != 0)) {
        if (lVar8 == param_2) {
          (**(code **)(*plVar14 + 0x310))(plVar14,1);
        }
        else {
          FUN_140b46f10(plVar14);
        }
      }
    }
    lVar8 = local_a0;
    iVar17 = local_88 + 1;
    if (iVar17 < local_68 + local_90) {
      lVar16 = (longlong)iVar17 * 8;
      iVar15 = local_68;
      iVar12 = local_90;
      do {
        if (iVar17 < iVar12) {
          plVar14 = *(longlong **)(local_98 + lVar16);
        }
        else {
          plVar14 = *(longlong **)(local_70 + (longlong)(iVar17 - iVar12) * 8);
        }
        local_80 = local_80 + 1;
        if ((plVar14 != (longlong *)0x0) &&
           (lVar9 = AActor::GetLevel(plVar14), iVar15 = local_68, iVar12 = local_90, lVar9 != 0)) {
          if ((local_a8[0] & 1) != 0) {
            iVar1 = *(int *)((longlong)plVar14 + 0xc);
            if (iVar1 < (int)DAT_1469e91c4) {
              uVar13 = iVar1 >> 0x1f & 0xffff;
              uVar7 = iVar1 + uVar13;
              lVar11 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                       (longlong)(int)((uVar7 & 0xffff) - uVar13) * 0x18;
            }
            else {
              lVar11 = 0;
            }
            if ((*(uint *)(lVar11 + 8) >> 0x1d & 1) != 0) goto LAB_140bf3b6a;
          }
          if (((local_a8[0] >> 1 & 1) == 0) ||
             (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(plVar14), iVar15 = local_68,
             iVar12 = local_90, cVar6 != '\0')) {
            if ((local_a8[0] >> 2 & 1) != 0) {
              if (((*(byte *)(lVar9 + 0x204) & 0x10) == 0) &&
                 ((*(byte *)(lVar9 + 0x205) & 0x10) == 0)) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              piVar2 = *(int **)(lVar9 + 600);
              if (((*(longlong *)(lVar9 + 0xc0) == 0) ||
                  (piVar10 = (int *)UWorld::GetActiveLevelCollection(), piVar10 == (int *)0x0)) ||
                 (piVar2 == piVar10)) {
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
              iVar15 = local_68;
              iVar12 = local_90;
              if ((!bVar5) || (!bVar3)) goto LAB_140bf3b6a;
            }
            lVar9 = ULevel::GetWorld(lVar9);
            iVar15 = local_68;
            iVar12 = local_90;
            if (lVar9 == lVar8) {
              lVar9 = AActor::GetLevel(plVar14);
              param_2 = local_c8;
              if (lVar9 == *(longlong *)(lVar8 + 0x30)) goto joined_r0x000140bf3915;
              lVar9 = UVoipListenerSynthComponent::GetPrivateStaticClass();
              if ((*(int *)(plVar14[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(plVar14[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
                  lVar9 + 0x88)) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              iVar15 = local_68;
              param_2 = local_c8;
              iVar12 = local_90;
              if (!bVar5) goto joined_r0x000140bf3915;
            }
          }
        }
LAB_140bf3b6a:
        iVar17 = iVar17 + 1;
        lVar16 = lVar16 + 8;
        if (iVar15 + iVar12 <= iVar17) break;
      } while( true );
    }
    local_78 = (longlong *)0x0;
    local_84 = '\x01';
  }
  if (local_50 != '\0') {
    local_50 = 0;
    UWorld::RemoveOnActorSpawnedHandler(local_a0,local_58);
    if (local_70 != 0) {
      FMemory::Free();
    }
    if (local_98 != 0) {
      FMemory::Free();
    }
  }
  return;
LAB_140bf3967:
  param_2 = local_c8;
  param_1 = local_b0;
  local_88 = iVar17;
  local_78 = plVar14;
  if (local_84 != '\0') goto LAB_140bf387d;
  goto LAB_140bf36a3;
}



// FUNCTION 140bf3c30 FUN_140bf3c30 body=310 status=ok
// SIG undefined FUN_140bf3c30(void)

void FUN_140bf3c30(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 local_res10 [24];
  longlong *local_28;
  int local_20;
  undefined8 local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  lVar1 = FUN_140bb7870();
  if (lVar1 != 0) {
    if (*(longlong *)(param_1 + 0x11d0) != 0) {
      *(undefined1 *)(param_1 + 0x11c8) = 1;
      return;
    }
    if (*(longlong *)(param_1 + 0x11d8) == 0) {
      uStack_10 = 0;
      local_18 = FUN_140bd1fa0;
      local_28 = (longlong *)0x0;
      plVar2 = (longlong *)FMemory::Realloc(0,0x30);
      local_20 = 3;
      local_28 = plVar2;
      if (plVar2 != (longlong *)0x0) {
        *plVar2 = (longlong)&PTR_FUN_1443187f0;
        FWeakObjectPtr::operator=(plVar2 + 1,param_1);
        *(undefined4 *)(plVar2 + 2) = (undefined4)local_18;
        *(undefined4 *)((longlong)plVar2 + 0x14) = local_18._4_4_;
        *(undefined4 *)(plVar2 + 3) = uStack_10;
        *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_c;
        lVar1 = FDelegateHandle::GenerateNewID();
        plVar2[5] = lVar1;
      }
      uVar3 = FUN_14164ab60();
      puVar4 = (undefined8 *)
               FUN_14158f860(uVar3,local_res10,&local_28,
                             L"UOakGameInstance_OnDeferredUpdateAdvertisedSessionSettings",0);
      *(undefined8 *)(param_1 + 0x11d8) = *puVar4;
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
  return;
}



// FUNCTION 140bf3d70 FUN_140bf3d70 body=92 status=ok
// SIG undefined FUN_140bf3d70(void)

void FUN_140bf3d70(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FUN_140dbb7f0(param_1 + 0x5f0);
  lVar1 = *(longlong *)(param_1 + 0x1080);
  *(char *)(param_1 + 0x458) = cVar2;
  *(bool *)(param_1 + 0x459) = cVar2 == '\x01';
  if (lVar1 == 0) {
    return;
  }
  if ((cVar2 == '\0') && (*(char *)(param_1 + 0xb18) != '\0')) {
    FUN_140d9fcc0(lVar1,0);
    return;
  }
  FUN_140d9fcc0(lVar1,1);
  return;
}



// FUNCTION 140bf3dd0 FUN_140bf3dd0 body=388 status=ok
// SIG undefined FUN_140bf3dd0(void)

void FUN_140bf3dd0(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong local_28;
  longlong local_20;
  
  lVar7 = FUN_140bb7870();
  if (lVar7 != 0) {
    plVar8 = (longlong *)FUN_141424bc0();
    lVar9 = plVar8[0x1f];
    if (lVar9 == 0) {
      (**(code **)(*plVar8 + 0x368))(plVar8);
      lVar9 = plVar8[0x1f];
    }
    iVar1 = FUN_142480900(lVar9);
    iVar2 = FUN_14046e5c0(param_1);
    iVar1 = iVar1 - iVar2;
    FUN_1404e0ae0(lVar7,iVar1);
    iVar3 = FUN_1404cfa10(lVar7);
    lVar9 = FUN_140bb7900(param_1);
    lVar10 = FUN_140bb6200(param_1);
    iVar2 = iVar1;
    if (lVar9 != 0) {
      iVar2 = FUN_1404cfa10(lVar9);
    }
    iVar4 = iVar1;
    if (lVar10 != 0) {
      iVar4 = FUN_1404cfb00(lVar10);
      iVar4 = iVar1 - iVar4;
    }
    plVar8 = (longlong *)FUN_141424bc0();
    lVar9 = plVar8[0x1f];
    if (lVar9 == 0) {
      (**(code **)(*plVar8 + 0x368))(plVar8);
      lVar9 = plVar8[0x1f];
    }
    iVar5 = FUN_142480900(lVar9);
    iVar6 = FUN_140bba270(param_1);
    lVar9 = *(longlong *)(param_1 + 0x460);
    if (iVar2 <= iVar4) {
      iVar4 = iVar2;
    }
    if (iVar5 - iVar6 <= iVar4) {
      iVar4 = iVar5 - iVar6;
    }
    iVar2 = 0;
    if (lVar9 != 0) {
      local_20 = *(longlong *)(param_1 + 0x468);
      if (local_20 != 0) {
        LOCK();
        *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
        UNLOCK();
      }
      local_28 = lVar9;
      lVar9 = FUN_14244c070(param_1,&local_28);
      if (lVar9 == 0) {
        iVar2 = 1;
      }
    }
    iVar3 = (iVar2 - iVar4) + iVar3;
    if (0 < iVar3) {
      FUN_1404e0ae0(lVar7,iVar1 - iVar3);
    }
    FUN_140bf3c30(param_1);
  }
  return;
}



// FUNCTION 140bf3f60 FUN_140bf3f60 body=996 status=ok
// SIG undefined FUN_140bf3f60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140bf3f60(undefined8 param_1,char param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  longlong *plVar12;
  undefined1 local_res20 [8];
  undefined1 local_168 [4];
  undefined1 local_164 [4];
  undefined1 local_160 [8];
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  longlong local_148;
  longlong *plStack_140;
  longlong local_138;
  longlong *plStack_130;
  longlong local_128;
  longlong *local_120;
  longlong local_118 [2];
  longlong *local_108;
  undefined1 local_100 [40];
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
  longlong *plStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined1 local_38 [32];
  
  FUN_142450450(param_1,&local_148);
  if (local_148 != 0) {
    local_138 = local_148;
    plStack_130 = plStack_140;
    if (plStack_140 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_140 + 1) = (int)plStack_140[1] + 1;
      UNLOCK();
    }
    lVar7 = FUN_142b45e90();
    FUN_142b4a990(*(undefined8 *)(lVar7 + 0x18),&local_128,&local_138);
    plVar3 = plStack_130;
    if (plStack_130 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_130 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plStack_130)(plStack_130);
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
    if (local_128 != 0) {
      local_res20[0] = FUN_142b54aa0();
      if (param_2 == '\0') {
        if (DAT_146aeb1b0 == '\0') {
          FUN_14218f800(&DAT_146aeb1a8);
        }
        uVar10 = *DAT_146aeb1a8;
        if (DAT_146aeb1a0 == '\0') {
          uVar8 = FUN_14218cdd0();
          FUN_140b9e990(&DAT_146aeb108,uVar8);
        }
        local_d8 = DAT_146aeb108;
        uStack_d0 = uRam0000000146aeb110;
        local_c8 = _DAT_146aeb118;
        uStack_c0 = uRam0000000146aeb120;
        local_b8 = _DAT_146aeb128;
        uStack_b0 = uRam0000000146aeb130;
        local_a8 = _DAT_146aeb138;
        uStack_a0 = uRam0000000146aeb140;
        local_98 = _DAT_146aeb148;
        uStack_90 = uRam0000000146aeb150;
        local_88 = _DAT_146aeb158;
        uStack_80 = uRam0000000146aeb160;
        local_78 = _DAT_146aeb168;
        uStack_70 = uRam0000000146aeb170;
        local_68 = _DAT_146aeb178;
        plStack_60 = plRam0000000146aeb180;
        local_58 = _DAT_146aeb188;
        uStack_50 = uRam0000000146aeb190;
        local_48 = DAT_146aeb198;
        if (DAT_146aeb1b0 == '\0') {
          FUN_14218f800(&DAT_146aeb1a8);
        }
        FUN_14218df50(DAT_146aeb1a8,local_168);
        icu_53::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::operator=(local_164,local_168);
        cVar6 = FUN_14218fd10(uVar10,&local_68);
        if (cVar6 != '\0') {
          uVar8 = icu_53::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::operator=
                            (local_150,local_164);
          lVar7 = FUN_14218b3a0(uVar10,uVar8);
          if (lVar7 != 0) {
            FUN_140b97630(lVar7,&local_68,local_res20);
          }
        }
        icu_53::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::operator=(local_160,local_168);
        uVar8 = FName::ToString(param_3,local_118);
        cVar6 = FUN_14218fd10(uVar10,&plStack_60);
        if (cVar6 != '\0') {
          uVar9 = icu_53::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::operator=
                            (local_14c,local_160);
          lVar7 = FUN_14218b3a0(uVar10,uVar9);
          if (lVar7 != 0) {
            cVar6 = FUN_1407ce070(lVar7);
            if (cVar6 != '\0') {
              plVar3 = (longlong *)(lVar7 + 0xa8);
              local_158 = 0;
              if (*plStack_60 != 0) {
                cVar6 = FUN_1407ce010(plStack_60 + 1);
                if (cVar6 != '\0') {
                  plVar12 = (longlong *)*plVar3;
                  plVar1 = plVar12 + (longlong)*(int *)(lVar7 + 0xb0) * 5;
                  if (plVar12 != plVar1) {
                    do {
                      if ((*(longlong *)*plVar12 == *plStack_60) &&
                         (*(longlong *)(((longlong *)*plVar12)[1] + 0x28) ==
                          *(longlong *)(plStack_60[1] + 0x28))) {
                        uVar10 = FViewMatrices::FViewMatrices(local_38,uVar8);
                        FUN_14217f450(plVar12 + 1,uVar10);
                        puVar11 = local_38;
                        goto LAB_140bf4279;
                      }
                      plVar12 = plVar12 + 5;
                    } while (plVar12 != plVar1);
                  }
                  local_108 = plStack_60;
                  FViewMatrices::FViewMatrices(local_100,uVar8);
                  iVar5 = *(int *)(lVar7 + 0xb0);
                  *(int *)(lVar7 + 0xb0) = iVar5 + 1;
                  if (*(int *)(lVar7 + 0xb4) < iVar5 + 1) {
                    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar3,iVar5);
                  }
                  puVar4 = (undefined8 *)(*plVar3 + (longlong)iVar5 * 0x28);
                  *puVar4 = local_108;
                  FUN_14217e5b0(puVar4 + 1,local_100);
                  puVar11 = local_100;
LAB_140bf4279:
                  FUN_14217f430(puVar11);
                }
              }
              FUN_1421957f0(lVar7);
            }
          }
        }
        if (local_118[0] != 0) {
          FMemory::Free();
        }
      }
    }
    if (local_120 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_120 + 1;
      lVar7 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_120)(local_120);
        LOCK();
        piVar2 = (int *)((longlong)local_120 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_120 + 8))(local_120,1);
        }
      }
    }
  }
  if (plStack_140 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_140 + 1;
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_140)(plStack_140);
      LOCK();
      piVar2 = (int *)((longlong)plStack_140 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plStack_140 + 8))(plStack_140,1);
      }
    }
  }
  return;
}



// FUNCTION 140bf4350 FUN_140bf4350 body=418 status=ok
// SIG undefined FUN_140bf4350(void)

undefined8 FUN_140bf4350(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined2 *puVar6;
  longlong local_28 [2];
  
  lVar5 = (**(code **)(*param_1 + 0x148))();
  if ((lVar5 != 0) && (plVar2 = *(longlong **)(lVar5 + 0x38), plVar2 != (longlong *)0x0)) {
    plVar3 = (longlong *)plVar2[0x12];
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x2c8))(plVar3,0);
      (**(code **)(*(longlong *)plVar2[0x12] + 0x300))();
    }
    iVar1 = (int)plVar2[0x14];
    while (iVar1 != 0) {
      plVar3 = *(longlong **)plVar2[0x13];
      (**(code **)(*plVar3 + 0x2c8))(plVar3,0);
      (**(code **)(*plVar3 + 0x300))(plVar3);
      iVar1 = (int)plVar2[0x14];
    }
    (**(code **)(*plVar2 + 0x2c8))(plVar2);
    puVar6 = &DAT_143f3eda8;
    if (DAT_146b18950 != 0) {
      puVar6 = DAT_146b18948;
    }
    FUN_1428ba050(lVar5 + 0x560,puVar6,0,&DAT_1468e2410);
    if (param_2 == 0) {
      if ((char)param_1[0x88] != '\0') {
        if ((char)param_1[0x88] == '\x02') {
          puVar6 = &DAT_143f3eda8;
          if (DAT_146b18950 != 0) {
            puVar6 = DAT_146b18948;
          }
          FURL::AddOption(lVar5 + 0x560,puVar6);
        }
        (**(code **)(*plVar2 + 0x380))(plVar2,lVar5);
        local_28[0] = 0;
        local_28[1] = 0;
        cVar4 = (**(code **)(*plVar2 + 0x290))(plVar2,lVar5 + 0x28,lVar5 + 0x560,0,local_28);
        if (cVar4 == '\0') {
          (**(code **)(*plVar2 + 0x380))(plVar2,0);
          if (local_28[0] != 0) {
            FMemory::Free();
          }
          return 0;
        }
        if (local_28[0] != 0) {
          FMemory::Free();
        }
      }
    }
  }
  return 1;
}



// FUNCTION 140bf4500 FUN_140bf4500 body=3071 status=ok
// SIG undefined FUN_140bf4500(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000140bf4787) */
/* WARNING: Removing unreachable block (ram,0x000140bf4796) */
/* WARNING: Removing unreachable block (ram,0x000140bf47b2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140bf4500(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  undefined8 uVar5;
  uint uVar6;
  char cVar7;
  undefined4 uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  char *pcVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  longlong *plVar20;
  longlong *plVar21;
  undefined1 auStack_308 [32];
  longlong *local_2e8;
  uint local_2d8;
  undefined1 local_2d4 [4];
  longlong local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  longlong *local_2a0;
  longlong *local_298;
  undefined **local_290;
  undefined8 local_288;
  longlong *local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  longlong *plStack_260;
  undefined **local_258;
  longlong local_250;
  longlong *local_248;
  longlong local_240;
  undefined8 local_238;
  longlong local_230;
  longlong local_228;
  longlong *local_220;
  longlong local_218;
  longlong *local_210;
  longlong local_208;
  longlong *local_200;
  longlong local_1f8;
  longlong *local_1f0;
  longlong local_1e8;
  longlong *local_1e0;
  undefined **local_1d8;
  longlong local_1d0;
  longlong *plStack_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined **local_1b0;
  undefined8 local_1a8;
  longlong *plStack_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined2 local_17c;
  undefined8 local_178;
  longlong local_170;
  undefined8 local_168;
  undefined4 local_160;
  longlong local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined2 local_138;
  undefined1 local_136;
  undefined8 local_134;
  undefined8 uStack_12c;
  undefined8 local_124;
  undefined8 uStack_11c;
  undefined8 local_114;
  undefined8 uStack_10c;
  undefined2 local_104;
  undefined1 local_102;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  longlong local_d0;
  undefined8 local_c8;
  longlong local_b8;
  longlong *local_b0;
  undefined **local_a8;
  longlong local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_80 [8];
  undefined **local_78 [2];
  longlong *local_68;
  longlong local_60;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_308;
  local_2d8 = 0;
  local_230 = FUN_140bb6170();
  local_228 = FUN_140bb7870(param_1);
  plVar21 = (longlong *)param_1[7];
  plVar20 = plVar21 + (int)param_1[8];
  local_220 = plVar20;
  if (plVar21 == plVar20) {
    return;
  }
LAB_140bf4590:
  if (*plVar21 != 0) {
    lVar10 = FUN_142547b50(*plVar21,local_78);
    plVar2 = *(longlong **)(lVar10 + 0x10);
    lVar10 = *(longlong *)(lVar10 + 8);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
    }
    local_78[0] = &PTR_FUN_143f740c8;
    if (local_60 != 0) {
      FMemory::Free();
    }
    plVar19 = local_68;
    local_78[0] = &PTR_FUN_143f73d18;
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar17 = local_68 + 1;
      lVar11 = *plVar17;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar1 = (int *)((longlong)plVar19 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar19 + 8))(plVar19,1);
        }
      }
    }
    uVar5 = _DAT_1464aa6e8;
    uVar13 = _DAT_1464aa6e0;
    if (lVar10 != 0) {
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
        UNLOCK();
      }
      local_2c0._0_4_ = (undefined4)lVar10;
      local_2c0._4_4_ = (undefined4)((ulonglong)lVar10 >> 0x20);
      uStack_2b8._0_4_ = SUB84(plVar2,0);
      uStack_2b8._4_4_ = (undefined4)((ulonglong)plVar2 >> 0x20);
      uStack_44 = uStack_2b8._4_4_;
      uStack_48 = (undefined4)uStack_2b8;
      uStack_4c = local_2c0._4_4_;
      local_50 = (undefined4)local_2c0;
      local_88 = 0;
      local_90 = 0;
      local_a8 = &PTR_FUN_143f740c8;
      local_c8 = 0;
      local_d0 = 0;
      uStack_d8 = uVar5;
      local_e0 = uVar13;
      uStack_e8 = uVar5;
      local_f0 = uVar13;
      uStack_f8 = uVar5;
      local_100 = uVar13;
      local_102 = 0;
      local_104 = 0;
      uStack_10c = uVar5;
      local_114 = uVar13;
      uStack_11c = uVar5;
      local_124 = uVar13;
      uStack_12c = uVar5;
      local_134 = uVar13;
      local_136 = 0;
      local_138 = 0;
      uStack_140 = 0;
      local_148 = 0;
      local_150 = 0;
      local_158 = 0;
      local_160 = 0;
      local_168 = 0;
      local_170 = 0;
      local_178 = 0;
      local_17c = 0;
      local_180 = 0;
      local_188 = 1;
      local_190 = 0;
      local_198 = 0;
      plStack_1a0 = (longlong *)0x0;
      local_1a8 = 0;
      local_1b0 = &PTR_FUN_143f740c8;
      local_1b8 = 0;
      local_1c0 = 0;
      local_1d8 = &PTR_FUN_143f740c8;
      uStack_2b8 = 0;
      local_2c0 = 0;
      local_1d0 = lVar10;
      plStack_1c8 = plVar2;
      local_a0 = lVar10;
      local_98 = plVar2;
      TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=(&local_1c0,&local_90);
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        plVar20 = plVar2 + 1;
        lVar11 = *plVar20;
        *(int *)plVar20 = (int)*plVar20 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*plVar2)(plVar2);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar2 + 8))(plVar2,1);
          }
        }
      }
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
        UNLOCK();
      }
      local_218 = lVar10;
      local_210 = plVar2;
      if ((param_1[0x3f] == 0) || (lVar11 = UUGMenuManager::GetFadeHUD(), lVar11 == 0)) {
        local_268 = 0;
        plStack_260 = (longlong *)0x0;
      }
      else {
        FUN_140d3b970(lVar11,&local_268,&local_218);
      }
      plVar20 = plStack_1a0;
      local_288 = local_268;
      local_280 = plStack_260;
      if (plStack_260 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_260 + 1) = (int)plStack_260[1] + 1;
        UNLOCK();
      }
      local_278 = 0;
      local_290 = &PTR_FUN_143f740c8;
      local_270 = 0;
      if (plStack_260 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_260 + 1) = (int)plStack_260[1] + 1;
        UNLOCK();
      }
      local_2b0._0_4_ = (undefined4)local_268;
      local_40 = (undefined4)local_2b0;
      local_2b0._4_4_ = (undefined4)((ulonglong)local_268 >> 0x20);
      uStack_3c = local_2b0._4_4_;
      uStack_2a8._0_4_ = SUB84(plStack_260,0);
      uStack_38 = (undefined4)uStack_2a8;
      uStack_2a8._4_4_ = (undefined4)((ulonglong)plStack_260 >> 0x20);
      uStack_34 = uStack_2a8._4_4_;
      local_2b0 = local_1a8;
      uStack_2a8 = plStack_1a0;
      local_1a8 = local_268;
      plVar19 = plStack_260;
      if (plStack_1a0 != (longlong *)0x0) {
        LOCK();
        plVar17 = plStack_1a0 + 1;
        lVar11 = *plVar17;
        *(int *)plVar17 = (int)*plVar17 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          puVar18 = (undefined8 *)*plStack_1a0;
          plStack_1a0 = plStack_260;
          (*(code *)*puVar18)(plVar20);
          LOCK();
          piVar1 = (int *)((longlong)plVar20 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar19 = plStack_1a0;
          if (iVar9 == 1) {
            (**(code **)(*uStack_2a8 + 8))(uStack_2a8,1);
            plVar19 = plStack_1a0;
          }
        }
      }
      plStack_1a0 = plVar19;
      plVar20 = local_280;
      TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=(&local_198,&local_278);
      plVar19 = local_280;
      if (plVar20 != (longlong *)0x0) {
        LOCK();
        plVar20 = plVar20 + 1;
        lVar11 = *plVar20;
        *(int *)plVar20 = (int)*plVar20 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*local_280)(local_280);
          LOCK();
          piVar1 = (int *)((longlong)plVar19 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*local_280 + 8))(local_280,1);
          }
        }
      }
      plVar20 = plStack_260;
      if (plStack_260 != (longlong *)0x0) {
        LOCK();
        plVar19 = plStack_260 + 1;
        lVar11 = *plVar19;
        *(int *)plVar19 = (int)*plVar19 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*plStack_260)(plStack_260);
          LOCK();
          piVar1 = (int *)((longlong)plVar20 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar20 + 8))(plVar20,1);
          }
        }
      }
      plVar20 = local_210;
      if (local_210 != (longlong *)0x0) {
        LOCK();
        plVar19 = local_210 + 1;
        lVar11 = *plVar19;
        *(int *)plVar19 = (int)*plVar19 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*local_210)(local_210);
          LOCK();
          piVar1 = (int *)((longlong)plVar20 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar20 + 8))(plVar20,1);
          }
        }
      }
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
        UNLOCK();
      }
      local_b8 = lVar10;
      local_b0 = plVar2;
      uVar8 = FUN_140bb6e30(param_1,&local_b8);
      local_188 = CONCAT44(local_188._4_4_,uVar8);
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        plVar20 = plVar2 + 1;
        lVar11 = *plVar20;
        *(int *)plVar20 = (int)*plVar20 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*plVar2)(plVar2);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar2 + 8))(plVar2,1);
          }
        }
      }
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
        UNLOCK();
      }
      local_208 = lVar10;
      local_200 = plVar2;
      uVar8 = FUN_140bb6bd0(param_1,&local_208);
      plVar20 = local_200;
      local_188 = CONCAT44(uVar8,(undefined4)local_188);
      if (local_200 != (longlong *)0x0) {
        LOCK();
        plVar19 = local_200 + 1;
        lVar11 = *plVar19;
        *(int *)plVar19 = (int)*plVar19 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*local_200)(local_200);
          LOCK();
          piVar1 = (int *)((longlong)plVar20 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar20 + 8))(plVar20,1);
          }
        }
      }
      pcVar12 = (char *)FUN_140dbc5d0(param_1 + 0xbe,local_2d4);
      if (*pcVar12 == '\x01') {
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
          UNLOCK();
        }
        local_2e8 = &local_d0;
        local_1f8 = lVar10;
        local_1f0 = plVar2;
        FUN_140d79f00(param_1[0x8f],&local_1f8,1,0);
        plVar20 = local_1f0;
        if (local_1f0 != (longlong *)0x0) {
          LOCK();
          plVar19 = local_1f0 + 1;
          lVar11 = *plVar19;
          *(int *)plVar19 = (int)*plVar19 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*local_1f0)(local_1f0);
            LOCK();
            piVar1 = (int *)((longlong)plVar20 + 0xc);
            iVar9 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar9 == 1) {
              (**(code **)(*plVar20 + 8))(plVar20,1);
            }
          }
        }
      }
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
        UNLOCK();
      }
      local_258 = &PTR_FUN_143f740c8;
      local_240 = 0;
      local_238 = 0;
      local_250 = lVar10;
      local_248 = plVar2;
      uVar13 = (**(code **)(*param_1 + 0x148))(param_1);
      lVar11 = FUN_140c125c0(&local_258,uVar13);
      local_258 = &PTR_FUN_143f740c8;
      if (local_240 != 0) {
        FMemory::Free();
      }
      plVar20 = local_248;
      local_258 = &PTR_FUN_143f73d18;
      if (local_248 != (longlong *)0x0) {
        LOCK();
        plVar19 = local_248 + 1;
        lVar14 = *plVar19;
        *(int *)plVar19 = (int)*plVar19 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*local_248)(local_248);
          LOCK();
          piVar1 = (int *)((longlong)plVar20 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar20 + 8))(plVar20,1);
          }
        }
      }
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        plVar20 = plVar2 + 1;
        lVar14 = *plVar20;
        *(int *)plVar20 = (int)*plVar20 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*plVar2)(plVar2);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar2 + 8))(plVar2,1);
          }
        }
      }
      if (lVar11 != 0) {
        FUN_140db9540(&local_178,lVar11);
      }
      uVar13 = (**(code **)(*param_1 + 0x148))(param_1);
      lVar14 = FUN_142f6caf0(uVar13);
      if (lVar14 != 0) {
        lVar15 = FUN_142f59790(lVar14);
        if (lVar15 != 0) {
          plVar20 = *(longlong **)(lVar15 + 0x10);
          if (plVar20 != (longlong *)0x0) {
            lVar14 = plVar20[0x1f];
            if (lVar14 == 0) {
              (**(code **)(*plVar20 + 0x368))(plVar20);
              lVar14 = plVar20[0x1f];
              if (lVar14 == 0) goto LAB_140bf4de1;
            }
            lVar15 = FUN_141437870();
            if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x90) < *(int *)(lVar15 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar15 + 0x90) * 8) != lVar15 + 0x88)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (bVar4) {
              local_180 = FUN_1409ac010(lVar14);
            }
          }
          goto LAB_140bf4de1;
        }
        iVar9 = FUN_142f5a870(lVar14);
        if (iVar9 < 0) goto LAB_140bf4de1;
        local_2d0 = 0;
        local_2c8 = 0;
        FUN_142f5dfe0(lVar14,&local_2d0,0);
        lVar14 = local_2d0;
        if ((iVar9 < (int)local_2c8) &&
           (lVar15 = (longlong)iVar9 * 8, *(longlong *)(local_2d0 + lVar15) != 0)) {
          lVar16 = FUN_142f71d80();
          for (lVar3 = *(longlong *)(lVar14 + lVar15); lVar3 != 0;
              lVar3 = *(longlong *)(lVar3 + 0x30)) {
            if (lVar3 == lVar16) {
              if (*(longlong *)(lVar14 + lVar15) != 0) {
                plVar20 = (longlong *)(lVar15 + local_2d0);
                if (*plVar20 == 0) goto LAB_140bf4cf5;
                plVar17 = (longlong *)FUN_142f71d80();
                plVar20 = (longlong *)*plVar20;
                plVar19 = plVar20;
                goto joined_r0x000140bf4ce5;
              }
              break;
            }
          }
        }
        goto LAB_140bf4d5f;
      }
      goto LAB_140bf4de1;
    }
    goto LAB_140bf507b;
  }
  goto LAB_140bf50bb;
joined_r0x000140bf4ce5:
  if (plVar19 == (longlong *)0x0) goto LAB_140bf4cf5;
  if (plVar19 == plVar17) goto LAB_140bf4cf7;
  plVar19 = (longlong *)plVar19[6];
  goto joined_r0x000140bf4ce5;
LAB_140bf4cf5:
  plVar20 = (longlong *)0x0;
LAB_140bf4cf7:
  lVar14 = plVar20[0x1f];
  if (lVar14 == 0) {
    (**(code **)(*plVar20 + 0x368))(plVar20);
    lVar14 = plVar20[0x1f];
    if (lVar14 != 0) goto LAB_140bf4d1b;
  }
  else {
LAB_140bf4d1b:
    lVar15 = FUN_141437870();
    if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x90) < *(int *)(lVar15 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x88) + (longlong)*(int *)(lVar15 + 0x90) * 8
         ) != lVar15 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      local_180 = FUN_1409ac010(lVar14);
    }
  }
LAB_140bf4d5f:
  if (local_2d0 != 0) {
    FMemory::Free();
  }
LAB_140bf4de1:
  if (lVar11 == 0) {
LAB_140bf4df9:
    local_17c = local_17c & 0xff00;
  }
  else {
    cVar7 = FUN_140d3db00(lVar11);
    local_17c = CONCAT11(local_17c._1_1_,1);
    if (cVar7 == '\0') goto LAB_140bf4df9;
  }
  puVar18 = (undefined8 *)FName::FName(local_80,L"SPARK");
  FUN_140bbd560(&local_2a0,*puVar18);
  uVar6 = local_2d8;
  if (local_2a0 == (longlong *)0x0) goto LAB_140bf4ebd;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  local_1e8 = lVar10;
  local_1e0 = plVar2;
  cVar7 = (**(code **)(*local_2a0 + 0x50))(local_2a0,&local_1e8);
  if (cVar7 == '\0') {
LAB_140bf4e72:
    local_17c = local_17c & 0xff;
  }
  else {
    cVar7 = FUN_140bc27a0(param_1);
    local_17c = CONCAT11(1,(undefined1)local_17c);
    if (cVar7 == '\0') goto LAB_140bf4e72;
  }
  plVar20 = local_1e0;
  local_2d8 = uVar6 & 0xfffffffe;
  if (local_1e0 != (longlong *)0x0) {
    LOCK();
    plVar19 = local_1e0 + 1;
    lVar10 = *plVar19;
    *(int *)plVar19 = (int)*plVar19 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_1e0)(local_1e0);
      LOCK();
      piVar1 = (int *)((longlong)plVar20 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar20 + 8))(plVar20,1);
      }
    }
  }
LAB_140bf4ebd:
  lVar10 = local_228;
  if (local_230 == 0) {
    if (((local_228 != 0) && (*(longlong **)(local_228 + 0x48) != (longlong *)0x0)) &&
       (cVar7 = (**(code **)(**(longlong **)(local_228 + 0x48) + 0x390))(), cVar7 != '\0')) {
      plVar19 = *(longlong **)(*(longlong *)(lVar10 + 0x48) + 0x98);
      plVar20 = plVar19 + *(int *)(*(longlong *)(lVar10 + 0x48) + 0xa0);
      for (; plVar19 != plVar20; plVar19 = plVar19 + 1) {
        if ((*plVar19 != 0) && (lVar10 = FUN_1425bd330(*plVar19,6), lVar10 != 0)) {
          lVar11 = FUN_1404e6fc0();
          iVar9 = *(int *)(lVar11 + 0x90);
          if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < iVar9) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)iVar9 * 8) !=
              lVar11 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            FUN_140b971f0(lVar10,CONCAT71((int7)(int3)((uint)iVar9 >> 8),1));
          }
        }
      }
    }
  }
  else if ((*(longlong *)(local_230 + 200) != 0) &&
          (lVar10 = FUN_1425bd330(*(longlong *)(local_230 + 200),6), lVar10 != 0)) {
    lVar11 = FUN_1404e6fc0();
    iVar9 = *(int *)(lVar11 + 0x90);
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < iVar9) ||
       (*(longlong *)(*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)iVar9 * 8) !=
        lVar11 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      FUN_140b971f0(lVar10,CONCAT71((int7)(int3)((uint)iVar9 >> 8),1));
    }
  }
  plVar20 = local_298;
  if (local_298 != (longlong *)0x0) {
    LOCK();
    plVar19 = local_298 + 1;
    lVar10 = *plVar19;
    *(int *)plVar19 = (int)*plVar19 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_298)(local_298);
      LOCK();
      piVar1 = (int *)((longlong)plVar20 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_298 + 8))(local_298,1);
      }
    }
  }
  if (local_d0 != 0) {
    FMemory::Free();
  }
  if (local_158 != 0) {
    FMemory::Free();
  }
  if (local_170 != 0) {
    FMemory::Free();
  }
  FUN_1404bf980(&local_1b0);
  FUN_1404bf980(&local_1d8);
  plVar20 = local_220;
LAB_140bf507b:
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar19 = plVar2 + 1;
    lVar10 = *plVar19;
    *(int *)plVar19 = (int)*plVar19 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
  }
LAB_140bf50bb:
  plVar21 = plVar21 + 1;
  if (plVar21 == plVar20) {
    return;
  }
  goto LAB_140bf4590;
}



// FUNCTION 140bf5100 FUN_140bf5100 body=4437 status=ok
// SIG undefined FUN_140bf5100(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000140bf5885) */
/* WARNING: Removing unreachable block (ram,0x000140bf5894) */
/* WARNING: Removing unreachable block (ram,0x000140bf58af) */
/* WARNING: Removing unreachable block (ram,0x000140bf539b) */
/* WARNING: Removing unreachable block (ram,0x000140bf53ae) */
/* WARNING: Removing unreachable block (ram,0x000140bf53ce) */
/* WARNING: Removing unreachable block (ram,0x000140bf5ce6) */
/* WARNING: Removing unreachable block (ram,0x000140bf5cf5) */
/* WARNING: Removing unreachable block (ram,0x000140bf5d10) */
/* WARNING: Removing unreachable block (ram,0x000140bf5d1f) */
/* WARNING: Removing unreachable block (ram,0x000140bf5d98) */
/* WARNING: Removing unreachable block (ram,0x000140bf5da7) */
/* WARNING: Removing unreachable block (ram,0x000140bf5ddc) */
/* WARNING: Removing unreachable block (ram,0x000140bf5dc2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140bf5100(longlong *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  undefined1 *puVar15;
  undefined8 uVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  undefined8 *puVar20;
  longlong lVar21;
  longlong *plVar22;
  bool bVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  int *piVar26;
  ulonglong uVar27;
  undefined1 auStack_8a8 [32];
  undefined1 local_888;
  undefined4 local_880;
  char local_878;
  longlong *local_870;
  undefined8 *local_868;
  undefined8 *local_860;
  undefined8 local_858;
  undefined8 local_850;
  undefined4 uStack_848;
  undefined4 uStack_844;
  undefined8 local_840;
  undefined8 uStack_838;
  undefined8 local_830;
  undefined8 uStack_828;
  longlong *local_820;
  longlong *local_818;
  undefined8 local_810;
  undefined8 uStack_808;
  undefined8 local_800;
  undefined8 uStack_7f8;
  longlong local_7f0;
  undefined4 local_7e8;
  undefined8 local_7e0;
  undefined8 uStack_7d8;
  longlong *local_7d0;
  undefined1 local_7c8;
  undefined **local_7c0;
  longlong local_7b8;
  longlong *local_7b0;
  longlong local_7a8;
  undefined8 local_7a0;
  undefined8 local_798;
  longlong *local_790;
  longlong *local_788;
  longlong *local_780;
  undefined1 local_778 [8];
  undefined1 local_770 [8];
  undefined1 local_768 [8];
  longlong *local_760;
  longlong *local_758;
  undefined **local_748 [2];
  longlong *local_738;
  longlong local_730;
  longlong local_718;
  longlong lStack_710;
  longlong *local_708;
  undefined8 local_700;
  undefined8 local_6f8;
  undefined8 uStack_6f0;
  undefined8 local_6e8;
  undefined8 uStack_6e0;
  undefined1 local_6c8;
  undefined1 local_6b4;
  undefined1 local_6a0;
  undefined1 local_68c;
  undefined1 local_678;
  undefined1 local_664;
  undefined8 local_660;
  undefined8 local_658;
  undefined8 local_650;
  undefined8 local_648;
  undefined8 local_640;
  longlong local_638;
  longlong *plStack_630;
  longlong *local_628;
  undefined8 local_620;
  undefined8 local_618;
  undefined8 uStack_610;
  undefined8 local_608;
  undefined8 uStack_600;
  undefined1 local_5e8;
  undefined1 local_5d4;
  undefined1 local_5c0;
  undefined1 local_5ac;
  undefined1 local_598;
  undefined1 local_584;
  undefined8 local_580;
  undefined8 local_578;
  undefined8 local_570;
  undefined8 local_568;
  undefined8 local_560;
  undefined8 local_558;
  undefined8 uStack_550;
  longlong *local_548;
  undefined8 local_540;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined1 local_508;
  undefined1 local_4f4;
  undefined1 local_4e0;
  undefined1 local_4cc;
  undefined1 local_4b8;
  undefined1 local_4a4;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined8 local_490;
  undefined8 local_488;
  undefined8 local_480;
  undefined8 local_478;
  undefined4 local_470;
  undefined1 local_468 [8];
  undefined8 local_460;
  code *local_458;
  longlong local_448 [4];
  longlong *local_428;
  int local_418;
  undefined4 local_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined4 local_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined4 local_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 local_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined1 local_3c8 [896];
  undefined1 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_8a8;
  bVar23 = false;
  local_868 = (undefined8 *)((ulonglong)local_868 & 0xffffffff00000000);
  local_870 = param_1;
  lVar9 = (**(code **)(*param_1 + 0x148))();
  if ((lVar9 != 0) && ((*(uint *)(lVar9 + 0x830) >> 2 & 1) != 0)) {
    uVar10 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar9 = UWorld::GetWorldSettings(uVar10,0,1);
    if (lVar9 != 0) {
      uVar10 = (**(code **)(*param_1 + 0x148))(param_1);
      lVar9 = UWorld::GetWorldSettings(uVar10,0,1);
      pcVar2 = *(code **)(lVar9 + 0x658);
      local_850 = pcVar2;
      if (pcVar2 != (code *)0x0) {
        lVar9 = UTextureRenderTargetCube::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(pcVar2 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(pcVar2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          puVar14 = (undefined8 *)param_1[7];
          local_48 = (undefined1 *)0x0;
          local_40 = 0;
          puVar20 = puVar14 + (int)local_870[8];
          local_868 = puVar20;
          if (puVar14 != puVar20) {
            do {
              lVar9 = FUN_142547b50(*puVar14,local_748);
              plVar22 = *(longlong **)(lVar9 + 0x10);
              lVar9 = *(longlong *)(lVar9 + 8);
              if (plVar22 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar22 + 1) = (int)plVar22[1] + 1;
                UNLOCK();
              }
              local_748[0] = &PTR_FUN_143f740c8;
              if (local_730 != 0) {
                FMemory::Free();
              }
              plVar13 = local_738;
              local_748[0] = &PTR_FUN_143f73d18;
              if (local_738 != (longlong *)0x0) {
                LOCK();
                plVar12 = local_738 + 1;
                lVar11 = *plVar12;
                *(int *)plVar12 = (int)*plVar12 + -1;
                UNLOCK();
                if ((int)lVar11 == 1) {
                  (**(code **)*local_738)(local_738);
                  LOCK();
                  piVar26 = (int *)((longlong)plVar13 + 0xc);
                  iVar7 = *piVar26;
                  *piVar26 = *piVar26 + -1;
                  UNLOCK();
                  if (iVar7 == 1) {
                    (**(code **)(*plVar13 + 8))(plVar13,1);
                  }
                }
              }
              if (lVar9 != 0) {
                if (plVar22 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar22 + 1) = (int)plVar22[1] + 1;
                  UNLOCK();
                }
                local_840._0_4_ = (undefined4)lVar9;
                local_840._4_4_ = (undefined4)((ulonglong)lVar9 >> 0x20);
                uStack_838._0_4_ = SUB84(plVar22,0);
                uStack_838._4_4_ = (undefined4)((ulonglong)plVar22 >> 0x20);
                uStack_3fc = uStack_838._4_4_;
                uStack_400 = (undefined4)uStack_838;
                uStack_404 = local_840._4_4_;
                local_408 = (undefined4)local_840;
                local_640 = 0;
                local_648 = 0;
                local_650 = 0;
                local_658 = 0;
                local_660 = 0;
                local_664 = 0;
                local_678 = 0;
                local_68c = 0;
                local_6a0 = 0;
                local_6b4 = 0;
                local_6c8 = 0;
                uStack_6e0 = 0;
                local_6e8 = 0;
                uStack_6f0 = 0;
                local_6f8 = 0;
                local_700 = 0;
                local_718 = 0;
                uStack_838 = 0;
                local_840 = 0;
                plVar13 = plVar22 + 1;
                if (plVar22 != (longlong *)0x0) {
                  LOCK();
                  *(int *)plVar13 = (int)*plVar13 + 1;
                  UNLOCK();
                  LOCK();
                  *(int *)plVar13 = (int)*plVar13 + 1;
                  UNLOCK();
                }
                local_7c0 = &PTR_FUN_143f740c8;
                local_7a8 = 0;
                local_7a0 = 0;
                local_7b8 = lVar9;
                local_7b0 = plVar22;
                lStack_710 = lVar9;
                local_708 = plVar22;
                uVar10 = (**(code **)(*local_870 + 0x148))();
                lVar11 = FUN_140c125c0(&local_7c0,uVar10);
                local_7c0 = &PTR_FUN_143f740c8;
                if (local_7a8 != 0) {
                  FMemory::Free();
                }
                plVar12 = local_7b0;
                local_7c0 = &PTR_FUN_143f73d18;
                if (local_7b0 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = local_7b0 + 1;
                  lVar18 = *plVar1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)lVar18 == 1) {
                    (**(code **)*local_7b0)(local_7b0);
                    LOCK();
                    piVar26 = (int *)((longlong)plVar12 + 0xc);
                    iVar7 = *piVar26;
                    *piVar26 = *piVar26 + -1;
                    UNLOCK();
                    if (iVar7 == 1) {
                      (**(code **)(*plVar12 + 8))(plVar12,1);
                    }
                  }
                }
                if (plVar22 != (longlong *)0x0) {
                  LOCK();
                  lVar18 = *plVar13;
                  *(int *)plVar13 = (int)*plVar13 + -1;
                  UNLOCK();
                  if ((int)lVar18 == 1) {
                    (**(code **)*plVar22)(plVar22);
                    LOCK();
                    piVar26 = (int *)((longlong)plVar22 + 0xc);
                    iVar7 = *piVar26;
                    *piVar26 = *piVar26 + -1;
                    UNLOCK();
                    if (iVar7 == 1) {
                      (**(code **)(*plVar22 + 8))(plVar22,1);
                    }
                  }
                }
                if (lVar11 != 0) {
                  local_718 = FUN_140d3b710(lVar11);
                  FUN_140e4a660(&local_700,lVar11);
                }
                plVar13 = local_870;
                if (local_718 == 0) {
                  bVar23 = true;
                  plVar12 = (longlong *)FUN_142450450(local_870,local_768);
                  if (lVar9 == *plVar12) goto LAB_140bf551f;
                  bVar4 = true;
                }
                else {
LAB_140bf551f:
                  bVar4 = false;
                }
                plVar12 = local_760;
                if ((bVar23) && (bVar23 = false, local_760 != (longlong *)0x0)) {
                  LOCK();
                  plVar1 = local_760 + 1;
                  lVar9 = *plVar1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)lVar9 == 1) {
                    (**(code **)*local_760)(local_760);
                    LOCK();
                    piVar26 = (int *)((longlong)plVar12 + 0xc);
                    iVar7 = *piVar26;
                    *piVar26 = *piVar26 + -1;
                    UNLOCK();
                    if (iVar7 == 1) {
                      (**(code **)(*plVar12 + 8))(plVar12,1);
                    }
                  }
                }
                uVar25 = local_40;
                if (bVar4) {
                  if ((int)plVar13[0x158] < 1) {
                    local_718 = 0;
                  }
                  else {
                    local_718 = *(longlong *)plVar13[0x157];
                  }
                }
                lVar9 = (longlong)(int)local_40;
                iVar7 = (int)local_40 + 1;
                local_40 = CONCAT44(local_40._4_4_,iVar7);
                if (local_40._4_4_ < iVar7) {
                  FUN_140be9040(local_3c8,uVar25 & 0xffffffff);
                }
                puVar15 = local_3c8;
                if (local_48 != (undefined1 *)0x0) {
                  puVar15 = local_48;
                }
                FUN_140b9ab50(puVar15 + lVar9 * 0xe0,&local_718);
                FUN_140b9d2b0(&local_700);
                plVar13 = local_708;
                puVar20 = local_868;
                if (local_708 != (longlong *)0x0) {
                  LOCK();
                  plVar12 = local_708 + 1;
                  lVar9 = *plVar12;
                  *(int *)plVar12 = (int)*plVar12 + -1;
                  UNLOCK();
                  if ((int)lVar9 == 1) {
                    (**(code **)*local_708)(local_708);
                    LOCK();
                    piVar26 = (int *)((longlong)plVar13 + 0xc);
                    iVar7 = *piVar26;
                    *piVar26 = *piVar26 + -1;
                    UNLOCK();
                    puVar20 = local_868;
                    if (iVar7 == 1) {
                      (**(code **)(*plVar13 + 8))(plVar13,1);
                      puVar20 = local_868;
                    }
                  }
                }
              }
              if (plVar22 != (longlong *)0x0) {
                LOCK();
                plVar13 = plVar22 + 1;
                lVar9 = *plVar13;
                *(int *)plVar13 = (int)*plVar13 + -1;
                UNLOCK();
                if ((int)lVar9 == 1) {
                  (**(code **)*plVar22)(plVar22);
                  LOCK();
                  piVar26 = (int *)((longlong)plVar22 + 0xc);
                  iVar7 = *piVar26;
                  *piVar26 = *piVar26 + -1;
                  UNLOCK();
                  if (iVar7 == 1) {
                    (**(code **)(*plVar22 + 8))(plVar22,1);
                  }
                }
              }
              puVar14 = puVar14 + 1;
            } while (puVar14 != puVar20);
          }
          param_1 = local_870;
          lVar9 = FUN_140bb7870(local_870);
          if ((lVar9 != 0) || (lVar9 = FUN_140bb6170(param_1), lVar9 != 0)) {
            lVar11 = *(longlong *)(lVar9 + 0x60);
            lVar9 = (longlong)*(int *)(lVar9 + 0x68) * 0x40 + lVar11;
            local_860 = (undefined8 *)0x0;
            local_858 = 0;
            if (lVar11 != lVar9) {
              piVar26 = (int *)(lVar11 + 0x38);
              do {
                uVar25 = local_858;
                lVar18 = (longlong)(int)local_858;
                iVar7 = (int)local_858 + 1;
                local_858 = CONCAT44(local_858._4_4_,iVar7);
                if (local_858._4_4_ < iVar7) {
                  TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_860,uVar25 & 0xffffffff);
                }
                local_860[lVar18 * 2] = *(undefined8 *)(piVar26 + -10);
                lVar19 = *(longlong *)(piVar26 + -8);
                (local_860 + lVar18 * 2)[1] = lVar19;
                if (lVar19 != 0) {
                  LOCK();
                  *(int *)(lVar19 + 8) = *(int *)(lVar19 + 8) + 1;
                  UNLOCK();
                }
                lVar19 = *(longlong *)(piVar26 + -2);
                lVar18 = lVar19 + (longlong)*piVar26 * 0x28;
                uVar25 = local_858;
                for (; lVar19 != lVar18; lVar19 = lVar19 + 0x28) {
                  local_858._0_4_ = (int)uVar25;
                  lVar21 = (longlong)(int)local_858;
                  local_858._0_4_ = (int)local_858 + 1;
                  local_858._4_4_ = (int)(uVar25 >> 0x20);
                  if (local_858._4_4_ < (int)local_858) {
                    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_860,uVar25 & 0xffffffff)
                    ;
                  }
                  local_860[lVar21 * 2] = *(undefined8 *)(lVar19 + 8);
                  lVar3 = *(longlong *)(lVar19 + 0x10);
                  (local_860 + lVar21 * 2)[1] = lVar3;
                  if (lVar3 != 0) {
                    LOCK();
                    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
                    UNLOCK();
                  }
                  uVar25 = local_858;
                }
                lVar11 = lVar11 + 0x40;
                piVar26 = piVar26 + 0x10;
                local_858 = uVar25;
              } while (lVar11 != lVar9);
            }
            puVar20 = local_860 + (longlong)(int)local_858 * 2;
            for (puVar14 = local_860; puVar14 != puVar20; puVar14 = puVar14 + 2) {
              plVar22 = (longlong *)puVar14[1];
              plVar13 = (longlong *)*puVar14;
              if (plVar22 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar22 + 1) = (int)plVar22[1] + 1;
                UNLOCK();
                LOCK();
                *(int *)(plVar22 + 1) = (int)plVar22[1] + 1;
                UNLOCK();
              }
              local_830._0_4_ = SUB84(plVar13,0);
              local_830._4_4_ = (undefined4)((ulonglong)plVar13 >> 0x20);
              uStack_828._0_4_ = SUB84(plVar22,0);
              uStack_828._4_4_ = (undefined4)((ulonglong)plVar22 >> 0x20);
              uStack_3ec = uStack_828._4_4_;
              uStack_3f0 = (undefined4)uStack_828;
              uStack_3f4 = local_830._4_4_;
              local_3f8 = (undefined4)local_830;
              local_560 = 0;
              local_568 = 0;
              local_570 = 0;
              local_578 = 0;
              local_580 = 0;
              local_584 = 0;
              local_598 = 0;
              local_5ac = 0;
              local_5c0 = 0;
              local_5d4 = 0;
              local_5e8 = 0;
              uStack_600 = 0;
              local_608 = 0;
              uStack_610 = 0;
              local_618 = 0;
              local_620 = 0;
              local_638 = 0;
              uStack_828 = 0;
              local_830 = 0;
              if (plVar22 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar22 + 1) = (int)plVar22[1] + 1;
                UNLOCK();
              }
              local_788 = plVar13;
              local_780 = plVar22;
              plStack_630 = plVar13;
              local_628 = plVar22;
              lVar9 = FUN_140bbb8d0(param_1,&local_788);
              if (lVar9 == 0) {
LAB_140bf5924:
                lVar9 = 0;
              }
              else {
                lVar11 = UInputKeySelector::GetPrivateStaticClass();
                if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
                  bVar23 = false;
                }
                else {
                  bVar23 = true;
                }
                if (!bVar23) goto LAB_140bf5924;
              }
              if (plVar22 != (longlong *)0x0) {
                LOCK();
                plVar12 = plVar22 + 1;
                lVar11 = *plVar12;
                *(int *)plVar12 = (int)*plVar12 + -1;
                UNLOCK();
                if ((int)lVar11 == 1) {
                  (**(code **)*plVar22)(plVar22);
                  LOCK();
                  piVar26 = (int *)((longlong)plVar22 + 0xc);
                  iVar7 = *piVar26;
                  *piVar26 = *piVar26 + -1;
                  UNLOCK();
                  if (iVar7 == 1) {
                    (**(code **)(*plVar22 + 8))(plVar22,1);
                  }
                }
              }
              if (lVar9 != 0) {
                local_638 = *(longlong *)(lVar9 + 0x570);
              }
              if (local_638 == 0) {
                if (plVar22 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar22 + 1) = (int)plVar22[1] + 1;
                  UNLOCK();
                }
                local_820 = plVar13;
                local_818 = plVar22;
                plVar12 = (longlong *)FName::FName(local_778,L"SPARK",1);
                plVar13 = (longlong *)(**(code **)(*plVar13 + 8))(plVar13,local_770);
                if (*plVar13 == *plVar12) {
                  lVar9 = FUN_140b95f90();
                }
                else {
                  lVar9 = FUN_140b95e30(param_1 + 0x9e,&local_820);
                }
                plVar13 = local_818;
                if (local_818 != (longlong *)0x0) {
                  LOCK();
                  plVar12 = local_818 + 1;
                  lVar11 = *plVar12;
                  *(int *)plVar12 = (int)*plVar12 + -1;
                  UNLOCK();
                  if ((int)lVar11 == 1) {
                    (**(code **)*local_818)(local_818);
                    LOCK();
                    piVar26 = (int *)((longlong)plVar13 + 0xc);
                    iVar7 = *piVar26;
                    *piVar26 = *piVar26 + -1;
                    UNLOCK();
                    if (iVar7 == 1) {
                      (**(code **)(*plVar13 + 8))(plVar13,1);
                    }
                  }
                }
                if (lVar9 != 0) {
                  local_638 = FUN_140bbaee0(param_1,*(undefined4 *)(lVar9 + 0x54));
                  FUN_140e4a320(&local_620,lVar9 + 0x60);
                }
              }
              uVar25 = local_40;
              lVar9 = (longlong)(int)local_40;
              iVar7 = (int)local_40 + 1;
              local_40 = CONCAT44(local_40._4_4_,iVar7);
              if (local_40._4_4_ < iVar7) {
                FUN_140be9040(local_3c8,uVar25 & 0xffffffff);
              }
              puVar15 = local_3c8;
              if (local_48 != (undefined1 *)0x0) {
                puVar15 = local_48;
              }
              FUN_140b9ab50(puVar15 + lVar9 * 0xe0,&local_638);
              FUN_140b9d2b0(&local_620);
              plVar13 = local_628;
              if (local_628 != (longlong *)0x0) {
                LOCK();
                plVar12 = local_628 + 1;
                lVar9 = *plVar12;
                *(int *)plVar12 = (int)*plVar12 + -1;
                UNLOCK();
                if ((int)lVar9 == 1) {
                  (**(code **)*local_628)(local_628);
                  LOCK();
                  piVar26 = (int *)((longlong)plVar13 + 0xc);
                  iVar7 = *piVar26;
                  *piVar26 = *piVar26 + -1;
                  UNLOCK();
                  if (iVar7 == 1) {
                    (**(code **)(*plVar13 + 8))(plVar13,1);
                  }
                }
              }
              if (plVar22 != (longlong *)0x0) {
                LOCK();
                plVar13 = plVar22 + 1;
                lVar9 = *plVar13;
                *(int *)plVar13 = (int)*plVar13 + -1;
                UNLOCK();
                if ((int)lVar9 == 1) {
                  (**(code **)*plVar22)(plVar22);
                  LOCK();
                  piVar26 = (int *)((longlong)plVar22 + 0xc);
                  iVar7 = *piVar26;
                  *piVar26 = *piVar26 + -1;
                  UNLOCK();
                  if (iVar7 == 1) {
                    (**(code **)(*plVar22 + 8))(plVar22,1);
                  }
                }
              }
            }
            TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
            ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_860);
          }
          uVar24 = 0;
          local_878 = '\0';
          puVar14 = (undefined8 *)FUN_140bba310(param_1);
          local_868 = (undefined8 *)CONCAT44(local_868._4_4_,(int)puVar14);
          uVar25 = uVar24;
          uVar27 = uVar24;
          cVar5 = '\0';
          if (0 < *(int *)(local_850 + 0xc0)) {
            do {
              lVar9 = *(longlong *)(*(longlong *)(local_850 + 0xb8) + uVar24 * 8);
              iVar7 = (int)uVar27;
              if (lVar9 != 0) {
                local_878 = '\x01';
                if (((longlong)uVar24 < 0) || ((int)local_40 <= iVar7)) {
                  bVar23 = false;
                }
                else {
                  bVar23 = true;
                }
                if (bVar23) {
                  puVar15 = local_3c8;
                  if (local_48 != (undefined1 *)0x0) {
                    puVar15 = local_48;
                  }
                  lVar11 = *(longlong *)(puVar15 + uVar25);
                }
                else {
                  lVar11 = 0;
                }
                local_548 = (longlong *)0x0;
                local_558 = 0;
                uStack_550 = 0;
                local_538 = 0;
                uStack_530 = 0;
                local_528 = 0;
                uStack_520 = 0;
                local_540 = 0;
                local_508 = 0;
                local_4f4 = 0;
                local_4e0 = 0;
                local_4cc = 0;
                local_4b8 = 0;
                local_4a4 = 0;
                local_4a0 = 0;
                local_498 = 0;
                local_490 = 0;
                local_488 = 0;
                local_480 = 0;
                if (((longlong)uVar24 < 0) || ((int)local_40 <= iVar7)) {
                  bVar23 = false;
                }
                else {
                  bVar23 = true;
                }
                if ((bVar23) && (lVar11 != 0)) {
                  puVar15 = local_3c8;
                  if (local_48 != (undefined1 *)0x0) {
                    puVar15 = local_48;
                  }
                  puVar14 = (undefined8 *)(puVar15 + uVar25);
                  local_558 = *puVar14;
                  uStack_550 = puVar14[1];
                  local_548 = (longlong *)puVar14[2];
                  if (local_548 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(local_548 + 1) = (int)local_548[1] + 1;
                    UNLOCK();
                  }
                  local_810._0_4_ = (undefined4)uStack_550;
                  local_810._4_4_ = (undefined4)((ulonglong)uStack_550 >> 0x20);
                  uStack_808._0_4_ = SUB84(local_548,0);
                  uStack_808._4_4_ = (undefined4)((ulonglong)local_548 >> 0x20);
                  uStack_3dc = uStack_808._4_4_;
                  uStack_3e0 = (undefined4)uStack_808;
                  uStack_3e4 = local_810._4_4_;
                  local_3e8 = (undefined4)local_810;
                  local_480 = 0;
                  local_488 = 0;
                  local_490 = 0;
                  local_498 = 0;
                  local_4a0 = 0;
                  local_4a4 = 0;
                  local_4b8 = 0;
                  local_4cc = 0;
                  local_4e0 = 0;
                  local_4f4 = 0;
                  local_508 = 0;
                  uStack_520 = 0;
                  local_528 = 0;
                  uStack_530 = 0;
                  local_538 = 0;
                  local_540 = 0;
                  uStack_808 = 0;
                  local_810 = 0;
                  local_878 = '\x01';
                  FUN_140b9ed10(&local_540,puVar14 + 3);
                }
                if (local_548 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(local_548 + 1) = (int)local_548[1] + 1;
                  UNLOCK();
                }
                local_800._0_4_ = (undefined4)uStack_550;
                local_800._4_4_ = (undefined4)((ulonglong)uStack_550 >> 0x20);
                uStack_7f8._0_4_ = SUB84(local_548,0);
                uStack_7f8._4_4_ = (undefined4)((ulonglong)local_548 >> 0x20);
                uStack_3cc = uStack_7f8._4_4_;
                uStack_3d0 = (undefined4)uStack_7f8;
                uStack_3d4 = local_800._4_4_;
                local_3d8 = (undefined4)local_800;
                local_7c8 = 0;
                local_7d0 = local_548;
                uStack_7d8 = uStack_550;
                local_7e0 = 0;
                local_7e8 = 0;
                uStack_7f8 = 0;
                local_800 = 0;
                local_7f0 = lVar11;
                if (lVar11 == 0) {
                  cVar5 = FUN_140e53e00(lVar9);
                  if (cVar5 == '\0') {
                    FUN_140e46bf0(lVar9);
                  }
                }
                else {
                  local_798 = uStack_550;
                  if (local_548 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(local_548 + 1) = (int)local_548[1] + 1;
                    UNLOCK();
                  }
                  local_790 = local_548;
                  cVar5 = FUN_140bc2a80(local_870,&local_798);
                  plVar22 = local_790;
                  if (local_790 != (longlong *)0x0) {
                    LOCK();
                    plVar13 = local_790 + 1;
                    lVar11 = *plVar13;
                    *(int *)plVar13 = (int)*plVar13 + -1;
                    UNLOCK();
                    if ((int)lVar11 == 1) {
                      (**(code **)*local_790)(local_790);
                      LOCK();
                      piVar26 = (int *)((longlong)plVar22 + 0xc);
                      iVar17 = *piVar26;
                      *piVar26 = *piVar26 + -1;
                      UNLOCK();
                      if (iVar17 == 1) {
                        (**(code **)(*plVar22 + 8))(plVar22,1);
                      }
                    }
                  }
                  uVar6 = local_7e8._3_1_;
                  if (cVar5 == '\0') {
                    uVar6 = 1;
                  }
                  local_7e8 = CONCAT13(uVar6,(undefined3)local_7e8);
                  uVar10 = FUN_140e4e470(lVar9);
                  uVar16 = FUN_140e4fb30(lVar9);
                  cVar5 = FUN_140e5a890(uVar10,&local_7f0);
                  if ((cVar5 == '\0') || (cVar5 = FUN_140e5a6d0(uVar16,&local_540), cVar5 == '\0'))
                  {
                    FUN_140e53360(lVar9,&local_7f0,&local_540);
                  }
                }
                plVar22 = local_7d0;
                if (local_7d0 != (longlong *)0x0) {
                  LOCK();
                  plVar13 = local_7d0 + 1;
                  lVar9 = *plVar13;
                  *(int *)plVar13 = (int)*plVar13 + -1;
                  UNLOCK();
                  if ((int)lVar9 == 1) {
                    (**(code **)*local_7d0)(local_7d0);
                    LOCK();
                    piVar26 = (int *)((longlong)plVar22 + 0xc);
                    iVar17 = *piVar26;
                    *piVar26 = *piVar26 + -1;
                    UNLOCK();
                    if (iVar17 == 1) {
                      (**(code **)(*plVar22 + 8))(plVar22,1);
                    }
                  }
                }
                FUN_140b9d2b0(&local_540);
                plVar22 = local_548;
                if (local_548 != (longlong *)0x0) {
                  LOCK();
                  plVar13 = local_548 + 1;
                  lVar9 = *plVar13;
                  *(int *)plVar13 = (int)*plVar13 + -1;
                  UNLOCK();
                  if ((int)lVar9 == 1) {
                    (**(code **)*local_548)(local_548);
                    LOCK();
                    piVar26 = (int *)((longlong)plVar22 + 0xc);
                    iVar17 = *piVar26;
                    *piVar26 = *piVar26 + -1;
                    UNLOCK();
                    if (iVar17 == 1) {
                      (**(code **)(*plVar22 + 8))(plVar22,1);
                    }
                  }
                }
              }
              uVar24 = uVar24 + 1;
              param_1 = local_870;
              uVar25 = uVar25 + 0xe0;
              uVar27 = (ulonglong)(iVar7 + 1U);
              cVar5 = local_878;
              puVar14 = local_868;
            } while ((int)(iVar7 + 1U) < *(int *)(local_850 + 0xc0));
          }
          uVar8 = FUN_140bba310(param_1);
          if (cVar5 == '\0') {
            lVar9 = param_1[0x12];
            local_850 = FUN_140bf5100;
            uStack_848 = 0;
            plVar22 = (longlong *)FMemory::Realloc(0,0x30);
            local_758 = plVar22;
            if (plVar22 != (longlong *)0x0) {
              *plVar22 = (longlong)&PTR_FUN_143f77b88;
              FWeakObjectPtr::operator=(plVar22 + 1,param_1);
              *(undefined4 *)(plVar22 + 2) = (undefined4)local_850;
              *(undefined4 *)((longlong)plVar22 + 0x14) = local_850._4_4_;
              *(undefined4 *)(plVar22 + 3) = uStack_848;
              *(undefined4 *)((longlong)plVar22 + 0x1c) = uStack_844;
              lVar11 = FDelegateHandle::GenerateNewID();
              plVar22[5] = lVar11;
              *plVar22 = (longlong)&PTR_FUN_143f77bd0;
            }
            local_478 = 0;
            local_470 = 0;
            if (plVar22 != (longlong *)0x0) {
              (**(code **)(*plVar22 + 0x30))(plVar22,&local_478);
            }
            FWeakObjectPtr::operator=(local_468,0);
            local_880 = 0xbf800000;
            local_888 = 0;
            local_460 = 0;
            local_428 = (longlong *)0x0;
            local_418 = 0;
            local_458 = AK::MemoryMgr::StartProfileThreadUsage;
            FUN_142880850(lVar9,param_1 + 0xb0,&local_478,0x800000);
            if (local_418 != 0) {
              plVar13 = local_448;
              if (local_428 != (longlong *)0x0) {
                plVar13 = local_428;
              }
              if (plVar13 != (longlong *)0x0) {
                (**(code **)(*plVar13 + 0x10))(plVar13,0);
              }
            }
            if (local_428 != (longlong *)0x0) {
              FMemory::Free();
            }
            TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_478);
            if (plVar22 != (longlong *)0x0) {
              (**(code **)(*plVar22 + 0x28))(plVar22,0);
              local_758 = (longlong *)FMemory::Realloc(plVar22,0,0);
              if (local_758 != (longlong *)0x0) {
                FMemory::Free(local_758);
              }
            }
          }
          else {
            bVar23 = false;
            *(int *)((longlong)param_1 + 0xce4) = *(int *)((longlong)param_1 + 0xce4) + 1;
            iVar7 = *(int *)((longlong)param_1 + 0xce4);
            iVar17 = (int)param_1[0x19b] + -1;
            lVar9 = (longlong)iVar17;
            if (-1 < iVar17) {
              lVar11 = lVar9 << 4;
              bVar23 = false;
              do {
                lVar18 = param_1[0x19a];
                if (((*(int *)(lVar11 + 8 + lVar18) == 0) ||
                    (plVar22 = *(longlong **)(lVar11 + lVar18), plVar22 == (longlong *)0x0)) ||
                   (cVar5 = (**(code **)(*plVar22 + 0x40))
                                      (plVar22,(ulonglong)puVar14 & 0xffffffff,uVar8), cVar5 == '\0'
                   )) {
                  bVar23 = true;
                }
                lVar11 = lVar11 + -0x10;
                lVar9 = lVar9 + -1;
              } while (-1 < lVar9);
              iVar7 = *(int *)((longlong)param_1 + 0xce4);
            }
            *(int *)((longlong)param_1 + 0xce4) = iVar7 + -1;
            if (bVar23) {
              FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1 + 0x19a,0);
            }
          }
          puVar15 = local_3c8;
          if (local_48 != (undefined1 *)0x0) {
            puVar15 = local_48;
          }
          if ((int)local_40 != 0) {
            plVar22 = (longlong *)(puVar15 + 0x10);
            iVar7 = (int)local_40;
            do {
              FUN_140b9d2b0(plVar22 + 1);
              plVar13 = (longlong *)*plVar22;
              if (plVar13 != (longlong *)0x0) {
                LOCK();
                plVar12 = plVar13 + 1;
                lVar9 = *plVar12;
                *(int *)plVar12 = (int)*plVar12 + -1;
                UNLOCK();
                if ((int)lVar9 == 1) {
                  (**(code **)*plVar13)(plVar13);
                  LOCK();
                  piVar26 = (int *)((longlong)plVar13 + 0xc);
                  iVar17 = *piVar26;
                  *piVar26 = *piVar26 + -1;
                  UNLOCK();
                  if (iVar17 == 1) {
                    (**(code **)(*plVar13 + 8))(plVar13,1);
                  }
                }
              }
              plVar22 = plVar22 + 0x1c;
              iVar7 = iVar7 + -1;
              param_1 = local_870;
            } while (iVar7 != 0);
          }
          if (local_48 != (undefined1 *)0x0) {
            FMemory::Free();
          }
        }
      }
    }
    lVar9 = FUN_140bb89c0(param_1);
    if (lVar9 != 0) {
      FUN_140f2ce70(lVar9);
    }
  }
  return;
}



// FUNCTION 140bf6260 FUN_140bf6260 body=3649 status=ok
// SIG undefined FUN_140bf6260(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140bf6260(longlong param_1)

{
  int *piVar1;
  char *pcVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 *puVar12;
  char *pcVar13;
  undefined1 auStack_3a8 [32];
  uint local_388 [4];
  undefined4 *local_378;
  undefined4 *puStack_370;
  longlong local_368 [2];
  undefined4 *local_358;
  undefined1 *puStack_350;
  undefined8 local_348;
  longlong local_340;
  undefined8 local_338;
  longlong local_330;
  longlong local_328 [2];
  longlong local_318 [2];
  longlong local_308 [2];
  longlong local_2f8 [2];
  longlong local_2e8 [2];
  longlong local_2d8 [2];
  longlong local_2c8 [2];
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined1 local_2a8 [16];
  undefined8 local_298;
  undefined8 uStack_290;
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  undefined1 local_268 [8];
  longlong *local_260;
  undefined1 local_250 [8];
  longlong *local_248;
  undefined1 local_238 [8];
  longlong *local_230;
  undefined1 local_220 [8];
  longlong *local_218;
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
  undefined1 local_110 [16];
  undefined4 local_100 [2];
  longlong local_f8;
  longlong *local_e8;
  char local_d8;
  undefined4 local_d0 [2];
  longlong local_c8;
  longlong *local_b8;
  char local_a8;
  undefined1 local_a0 [8];
  undefined4 local_98 [2];
  longlong local_90;
  undefined1 local_70;
  undefined4 local_68;
  longlong local_60;
  undefined1 local_40;
  ulonglong local_38 [2];
  
  local_38[0] = DAT_1468387a8 ^ (ulonglong)auStack_3a8;
  lVar11 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar11 + 0x38) < DAT_14686a830) &&
     (_Init_thread_header(&DAT_14686a830), DAT_14686a830 == -1)) {
    DAT_14686a820 = 0;
    _DAT_14686a828 = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14686a820,0);
    FGenericPlatformString::Memcpy(DAT_14686a820,L"searching",0x14);
    atexit((_func_5014 *)&LAB_143e4dd10);
    _Init_thread_footer(&DAT_14686a830);
  }
  if ((*(int *)(lVar11 + 0x38) < DAT_14686a848) &&
     (_Init_thread_header(&DAT_14686a848), DAT_14686a848 == -1)) {
    DAT_14686a838 = 0;
    _DAT_14686a840 = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14686a838,0);
    FGenericPlatformString::Memcpy(DAT_14686a838,L"success",0x10);
    atexit((_func_5014 *)&LAB_143e4dd30);
    _Init_thread_footer(&DAT_14686a848);
  }
  if ((*(int *)(lVar11 + 0x38) < DAT_14686a860) &&
     (_Init_thread_header(&DAT_14686a860), DAT_14686a860 == -1)) {
    DAT_14686a850 = 0;
    _DAT_14686a858 = 7;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14686a850,0);
    FGenericPlatformString::Memcpy(DAT_14686a850,L"failed",0xe);
    atexit((_func_5014 *)&LAB_143e4dcf0);
    _Init_thread_footer(&DAT_14686a860);
  }
  if ((*(int *)(lVar11 + 0x38) < DAT_14686a878) &&
     (_Init_thread_header(&DAT_14686a878), DAT_14686a878 == -1)) {
    DAT_14686a868 = 0;
    _DAT_14686a870 = 0;
    atexit((_func_5014 *)&LAB_143e4d1f0);
    _Init_thread_footer(&DAT_14686a878);
  }
  local_368[0] = param_1;
  cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x18);
  if (cVar5 == '\0') {
    return;
  }
  lVar8 = FWeakObjectPtr::Get(param_1 + 0x18);
  switch(*(undefined4 *)(lVar8 + 0x1054)) {
  case 0:
    uVar9 = FUN_1404b03b0();
    FText::operator=(param_1 + 0x20,uVar9);
    uVar9 = FUN_1404b03b0();
    FText::operator=(param_1 + 0x38,uVar9);
    FString::operator=(param_1 + 0x60,&DAT_14686a868);
    puVar12 = &DAT_14686a868;
    break;
  case 1:
    uVar9 = FWeakObjectPtr::Get(param_1 + 0x18);
    uVar9 = FUN_140bb6a20(uVar9,local_318);
    uVar9 = FUN_140dbbdb0(local_328,uVar9);
    FString::operator=(param_1 + 0x60,uVar9);
    if (local_328[0] != 0) {
      FMemory::Free();
    }
    if (local_318[0] != 0) {
      FMemory::Free();
    }
    FString::operator=(param_1 + 0x50,&DAT_14686a820);
    uVar9 = FWeakObjectPtr::Get(param_1 + 0x18);
    uVar9 = FUN_140bb6a20(uVar9,local_308);
    FUN_140ba0f30(local_368,uVar9);
    if (local_308[0] != 0) {
      FMemory::Free();
    }
    uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_208,L"Initializing...",L"MatchmakingWidget",L"Initializing");
    FText::operator=(param_1 + 0x38,uVar9);
    local_188 = local_200;
    goto joined_r0x000140bf6a6e;
  case 2:
    uVar9 = FWeakObjectPtr::Get(param_1 + 0x18);
    uVar9 = FUN_140bb6a20(uVar9,local_2e8);
    uVar9 = FUN_140dbbdb0(local_2f8,uVar9);
    FString::operator=(param_1 + 0x60,uVar9);
    if (local_2f8[0] != 0) {
      FMemory::Free();
    }
    if (local_2e8[0] != 0) {
      FMemory::Free();
    }
    FString::operator=(param_1 + 0x50,&DAT_14686a820);
    uVar9 = FWeakObjectPtr::Get(param_1 + 0x18);
    uVar9 = FUN_140bb6a20(uVar9,local_2d8);
    FUN_140ba0f30(local_368,uVar9);
    if (local_2d8[0] != 0) {
      FMemory::Free();
    }
    cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x18);
    iVar7 = 1;
    if (cVar5 != '\0') {
      uVar9 = FWeakObjectPtr::Get(param_1 + 0x18);
      iVar6 = FUN_14046e5c0(uVar9);
      uVar9 = FWeakObjectPtr::Get(param_1 + 0x18);
      lVar8 = FUN_140bb7900(uVar9);
      if (lVar8 == 0) {
        uVar9 = FWeakObjectPtr::Get(param_1 + 0x18);
        lVar8 = FUN_140bb6200(uVar9);
        if (lVar8 != 0) goto LAB_140bf6776;
      }
      else {
LAB_140bf6776:
        iVar7 = FUN_1404cfb00(lVar8);
        iVar6 = iVar6 + iVar7;
      }
      uVar9 = FWeakObjectPtr::Get(param_1 + 0x18);
      iVar7 = FUN_140bba270(uVar9);
      if (iVar7 <= iVar6) {
        iVar7 = iVar6;
      }
    }
    uVar9 = FWeakObjectPtr::Get(param_1 + 0x18);
    uVar9 = FUN_140bb6a20(uVar9,local_2c8);
    iVar6 = FUN_140dbc530(uVar9);
    if (local_2c8[0] != 0) {
      FMemory::Free();
    }
    if ((*(int *)(param_1 + 0x90) < iVar7) && (1 < iVar7)) {
      if ((*(int *)(lVar11 + 0x38) < DAT_14686a898) &&
         (_Init_thread_header(&DAT_14686a898), DAT_14686a898 == -1)) {
        FName::FName(&DAT_14686a890,L"Matchmaking_Increment",1);
        _Init_thread_footer(&DAT_14686a898);
      }
      uVar9 = FWeakObjectPtr::Get(param_1 + 0x18);
      FUN_140be2cb0(uVar9,&DAT_14686a890);
    }
    *(int *)(param_1 + 0x90) = iVar7;
    if (iVar6 < 1) {
      if (iVar7 == 1) {
        uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_1c0,L"(1 player) Searching...",L"MatchmakingWidget",
                           L"SearchingSingular");
        FText::operator=(param_1 + 0x38,uVar9);
        local_188 = local_1b8;
      }
      else {
        uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_190,L"({0} players) Searching...",L"MatchmakingWidget",
                           L"SearchingPlural");
        puVar12 = (undefined8 *)FTextFormat::FTextFormat(local_130,uVar9);
        local_f8 = (longlong)iVar7;
        local_378 = local_100;
        puStack_370 = local_d0;
        local_348 = *puVar12;
        local_340 = puVar12[1];
        local_100[0] = 0;
        local_d8 = '\0';
        if (local_340 != 0) {
          LOCK();
          *(int *)(local_340 + 8) = *(int *)(local_340 + 8) + 1;
          UNLOCK();
        }
        local_298 = local_378;
        uStack_290 = puStack_370;
        uVar9 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                TArray<FFormatArgumentValue,FDefaultAllocator>(local_288,&local_298);
        uVar9 = FText::Format(local_1a8,&local_348,uVar9);
        FText::FText(local_250,uVar9);
        if (local_1a0 != (longlong *)0x0) {
          LOCK();
          plVar10 = local_1a0 + 1;
          lVar11 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*local_1a0)(local_1a0);
            LOCK();
            piVar1 = (int *)((longlong)local_1a0 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*local_1a0 + 8))(local_1a0,1);
            }
          }
        }
        TArray<FFormatArgumentValue,FDefaultAllocator>::
        ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_288);
        if ((local_d8 != '\0') && (local_d8 = '\0', local_e8 != (longlong *)0x0)) {
          LOCK();
          plVar10 = local_e8 + 1;
          lVar11 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*local_e8)(local_e8);
            LOCK();
            piVar1 = (int *)((longlong)local_e8 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*local_e8 + 8))(local_e8,1);
            }
          }
        }
        plVar10 = (longlong *)puVar12[1];
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          plVar4 = plVar10 + 1;
          lVar11 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plVar10 + 8))(plVar10,1);
            }
          }
        }
        FText::operator=(param_1 + 0x38,local_250);
        if (local_248 != (longlong *)0x0) {
          LOCK();
          plVar10 = local_248 + 1;
          lVar11 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*local_248)(local_248);
            LOCK();
            piVar1 = (int *)((longlong)local_248 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*local_248 + 8))(local_248,1);
            }
          }
        }
      }
    }
    else {
      uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_1d8,L"({0}/{1}) Searching...",L"MatchmakingWidget",L"Searching");
      plVar10 = (longlong *)FTextFormat::FTextFormat(local_110,uVar9);
      local_90 = (longlong)iVar7;
      local_2b8 = local_98;
      local_98[0] = 0;
      uStack_2b0 = local_38;
      local_378 = (undefined4 *)*plVar10;
      puStack_370 = (undefined4 *)plVar10[1];
      local_70 = 0;
      local_68 = 0;
      local_40 = 0;
      if (puStack_370 != (undefined4 *)0x0) {
        LOCK();
        puStack_370[2] = puStack_370[2] + 1;
        UNLOCK();
      }
      local_60 = (longlong)iVar6;
      uVar9 = TArray<FFormatArgumentValue,FDefaultAllocator>::
              TArray<FFormatArgumentValue,FDefaultAllocator>(local_2a8,&local_2b8);
      uVar9 = FText::Format(local_1f0,&local_378,uVar9);
      FText::FText(local_268,uVar9);
      if (local_1e8 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_1e8 + 1;
        lVar11 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*local_1e8)(local_1e8);
          LOCK();
          piVar1 = (int *)((longlong)local_1e8 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*local_1e8 + 8))(local_1e8,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_2a8);
      lVar11 = 2;
      pcVar13 = &stack0xfffffffffffffff0;
      do {
        lVar11 = lVar11 + -1;
        pcVar2 = pcVar13 + -0x30;
        if (*pcVar2 != '\0') {
          *pcVar2 = '\0';
          plVar4 = *(longlong **)(pcVar13 + -0x40);
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            plVar3 = plVar4 + 1;
            lVar8 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*plVar4)(plVar4);
              LOCK();
              piVar1 = (int *)((longlong)plVar4 + 0xc);
              iVar7 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar7 == 1) {
                (**(code **)(*plVar4 + 8))(plVar4,1);
              }
            }
          }
        }
        pcVar13 = pcVar2;
      } while (lVar11 != 0);
      plVar10 = (longlong *)plVar10[1];
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar10 + 1;
        lVar11 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
      FText::operator=(param_1 + 0x38,local_268);
      if (local_260 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_260 + 1;
        lVar11 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*local_260)(local_260);
          LOCK();
          piVar1 = (int *)((longlong)local_260 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*local_260 + 8))(local_260,1);
          }
        }
      }
      local_188 = local_1d0;
    }
joined_r0x000140bf6a6e:
    if (local_188 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_188 + 1;
      lVar11 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_188)(local_188);
        LOCK();
        piVar1 = (int *)((longlong)local_188 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_188 + 8))(local_188,1);
        }
      }
    }
    goto LAB_140bf7062;
  case 3:
    local_388[0] = 0;
    local_388[1] = 0;
    lVar8 = FWeakObjectPtr::Get(param_1 + 0x18);
    plVar10 = *(longlong **)(lVar8 + 0x4e8);
    uVar9 = *(undefined8 *)(lVar8 + 0x4e0);
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    FUN_140dbb7c0(uVar9,local_388,local_388 + 1,local_388 + 1);
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar10 + 1;
      lVar8 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
    }
    lVar8 = (longlong)(int)local_388[0];
    uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_160,L"Confirming Players... {0}",L"MatchmakingWidget",
                       L"ConfirmingPlayers");
    puVar12 = (undefined8 *)FTextFormat::FTextFormat(local_120,uVar9);
    local_d0[0] = 0;
    local_358 = local_d0;
    local_a8 = '\0';
    puStack_350 = local_a0;
    local_338 = *puVar12;
    local_330 = puVar12[1];
    if (local_330 != 0) {
      LOCK();
      *(int *)(local_330 + 8) = *(int *)(local_330 + 8) + 1;
      UNLOCK();
    }
    local_c8 = lVar8;
    uVar9 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_278,&local_358);
    uVar9 = FText::Format(local_178,&local_338,uVar9);
    FText::FText(local_238,uVar9);
    if (local_170 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_170 + 1;
      lVar8 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_170)(local_170);
        LOCK();
        piVar1 = (int *)((longlong)local_170 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_170 + 8))(local_170,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_278);
    if ((local_a8 != '\0') && (local_a8 = '\0', local_b8 != (longlong *)0x0)) {
      LOCK();
      plVar10 = local_b8 + 1;
      lVar8 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_b8)(local_b8);
        LOCK();
        piVar1 = (int *)((longlong)local_b8 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_b8 + 8))(local_b8,1);
        }
      }
    }
    plVar10 = (longlong *)puVar12[1];
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar10 + 1;
      lVar8 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
    }
    FText::operator=(param_1 + 0x38,local_238);
    if (local_230 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_230 + 1;
      lVar8 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_230)(local_230);
        LOCK();
        piVar1 = (int *)((longlong)local_230 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_230 + 8))(local_230,1);
        }
      }
    }
    if (local_158 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_158 + 1;
      lVar8 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_158)(local_158);
        LOCK();
        piVar1 = (int *)((longlong)local_158 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_158 + 8))(local_158,1);
        }
      }
    }
    if (local_388[0] == 10) {
      if ((*(int *)(lVar11 + 0x38) < DAT_14686a8a8) &&
         (_Init_thread_header(&DAT_14686a8a8), DAT_14686a8a8 == -1)) {
        FName::FName(&DAT_14686a8a0,L"Matchmaking_Countdown_Start",1);
        _Init_thread_footer(&DAT_14686a8a8);
      }
      uVar9 = FWeakObjectPtr::Get(param_1 + 0x18);
      FUN_140be2cb0(uVar9,&DAT_14686a8a0);
    }
    if (local_388[0] < 6) {
      if ((*(int *)(lVar11 + 0x38) < DAT_14686a8b8) &&
         (_Init_thread_header(&DAT_14686a8b8), DAT_14686a8b8 == -1)) {
        FName::FName(&DAT_14686a8b0,L"Matchmaking_Countdown_Tone",1);
        _Init_thread_footer(&DAT_14686a8b8);
      }
      uVar9 = FWeakObjectPtr::Get(param_1 + 0x18);
      FUN_140be2cb0(uVar9,&DAT_14686a8b0);
    }
    FString::operator=(param_1 + 0x50,&DAT_14686a820);
    lVar11 = FWeakObjectPtr::Get(param_1 + 0x18);
    *(bool *)(param_1 + 0x94) = *(int *)(lVar11 + 0x1338) == 1;
    return;
  case 4:
    uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_148,L"Starting Activity...",L"MatchmakingWidget",L"StartingGameplay");
    FText::operator=(param_1 + 0x38,uVar9);
    if (local_140 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_140 + 1;
      lVar11 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_140)(local_140);
        LOCK();
        piVar1 = (int *)((longlong)local_140 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_140 + 8))(local_140,1);
        }
      }
    }
    puVar12 = &DAT_14686a838;
    break;
  case 5:
    uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_220,L"Canceling...",L"MatchmakingWidget",L"Canceling");
    FText::operator=(param_1 + 0x38,uVar9);
    if (local_218 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_218 + 1;
      lVar8 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_218)(local_218);
        LOCK();
        piVar1 = (int *)((longlong)local_218 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_218 + 8))(local_218,1);
        }
      }
    }
    FString::operator=(param_1 + 0x50,&DAT_14686a850);
    uVar9 = FWeakObjectPtr::Get(param_1 + 0x18);
    lVar8 = FUN_140bb89c0(uVar9);
    if (lVar8 != 0) {
      if ((*(int *)(lVar11 + 0x38) < DAT_14686a888) &&
         (_Init_thread_header(&DAT_14686a888), DAT_14686a888 == -1)) {
        FName::FName(&DAT_14686a880,L"MatchMaking_Loop_Stop",1);
        _Init_thread_footer(&DAT_14686a888);
      }
      uVar9 = FWeakObjectPtr::Get(param_1 + 0x18);
      FUN_140be2cb0(uVar9,&DAT_14686a880);
    }
    goto LAB_140bf7062;
  default:
    goto switchD_140bf6498_default;
  }
  FString::operator=(param_1 + 0x50,puVar12);
LAB_140bf7062:
  *(undefined1 *)(param_1 + 0x94) = 0;
switchD_140bf6498_default:
  return;
}



// FUNCTION 140bf70c0 FUN_140bf70c0 body=433 status=ok
// SIG undefined FUN_140bf70c0(void)

void FUN_140bf70c0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  longlong local_68;
  longlong *local_60;
  undefined **local_58 [2];
  longlong *local_48;
  longlong local_40;
  
  uVar8 = 0;
  puVar9 = *(undefined8 **)(param_1 + 0x38);
  uVar10 = (longlong)*(int *)(param_1 + 0x40) & 0x1fffffffffffffff;
  if (puVar9 + *(int *)(param_1 + 0x40) < puVar9) {
    uVar10 = uVar8;
  }
  if (uVar10 != 0) {
    do {
      lVar7 = FUN_142547b50(*puVar9,local_58);
      plVar5 = *(longlong **)(lVar7 + 0x10);
      lVar7 = *(longlong *)(lVar7 + 8);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      local_58[0] = &PTR_FUN_143f740c8;
      if (local_40 != 0) {
        FMemory::Free();
      }
      plVar3 = local_48;
      local_58[0] = &PTR_FUN_143f73d18;
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_48 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_48)(local_48);
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
      if (lVar7 != 0) {
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        local_68 = lVar7;
        local_60 = plVar5;
        FUN_140beb560(param_1,&local_68);
        plVar3 = local_60;
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_60 + 1;
          lVar7 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_60)(local_60);
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
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar5 + 1;
        lVar7 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
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
      puVar9 = puVar9 + 1;
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar10);
  }
  return;
}



// FUNCTION 140bf7280 FUN_140bf7280 body=1112 status=ok
// SIG undefined FUN_140bf7280(void)

void FUN_140bf7280(longlong param_1,undefined2 *param_2)

{
  int *piVar1;
  longlong lVar2;
  void *pvVar3;
  undefined2 uVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined2 *puVar14;
  longlong *plVar15;
  undefined2 *puVar16;
  undefined2 uVar17;
  undefined2 *puVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong *plVar21;
  longlong lVar22;
  undefined4 local_res18 [2];
  int local_res20 [2];
  undefined2 *local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  longlong local_98 [2];
  longlong *local_88;
  longlong *local_80;
  undefined2 *local_78;
  int local_70;
  longlong local_68;
  longlong local_60;
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  undefined1 local_48 [16];
  
  pvVar3 = ThreadLocalStoragePointer;
  plVar21 = (longlong *)0x0;
  uVar19 = (ulonglong)_tls_index;
  *(undefined1 *)(param_1 + 0xe98) = 0;
  if ((*(int *)(*(longlong *)((longlong)pvVar3 + uVar19 * 8) + 0x38) < DAT_146852c60) &&
     (_Init_thread_header(&DAT_146852c60), DAT_146852c60 == -1)) {
    FName::FName(&DAT_146852c58,L"OnlineSubsystem",1);
    _Init_thread_footer(&DAT_146852c60);
  }
  uVar5 = DAT_146852c58;
  uVar9 = FUN_14168dc80();
  plVar10 = (longlong *)FModuleManager::GetModule(uVar9,uVar5);
  plVar11 = (longlong *)(**(code **)(*plVar10 + 0x50))(plVar10,0);
  plVar10 = plVar21;
  if (plVar11 != (longlong *)0x0) {
    plVar10 = (longlong *)(**(code **)(*plVar11 + 8))(plVar11,local_58);
    lVar20 = *plVar10;
    if (*(int *)(param_1 + 0xd88) != *(int *)(param_1 + 0xdb4)) {
      lVar22 = *(longlong *)(param_1 + 0xdc0);
      if (*(longlong *)(param_1 + 0xdc0) == 0) {
        lVar22 = param_1 + 0xdb8;
      }
      iVar7 = *(int *)(lVar22 + ((longlong)((int)((ulonglong)lVar20 >> 0x20) + (int)lVar20) &
                                (longlong)*(int *)(param_1 + 0xdc8) - 1U) * 4);
      if (iVar7 != -1) {
        do {
          plVar15 = (longlong *)((longlong)iVar7 * 0x30 + *(longlong *)(param_1 + 0xd80));
          if (*plVar15 == lVar20) {
            if (iVar7 == -1) goto LAB_140bf73a0;
            goto LAB_140bf73a3;
          }
          iVar7 = (int)plVar15[5];
        } while (iVar7 != -1);
        plVar10 = (longlong *)0x0;
        goto LAB_140bf73b3;
      }
    }
LAB_140bf73a0:
    plVar15 = plVar21;
LAB_140bf73a3:
    plVar10 = plVar15 + 1;
    if (plVar15 == (longlong *)0x0) {
      plVar10 = plVar21;
    }
  }
LAB_140bf73b3:
  if (plVar10 != (longlong *)0x0) {
    local_68 = *plVar10;
    local_60 = plVar10[1];
    if (local_60 != 0) {
      LOCK();
      *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
      UNLOCK();
    }
    cVar6 = FUN_140bca7d0(param_1,&local_68);
    if (cVar6 != '\0') {
      FUN_140bbbfc0(param_1,&local_78);
      if (1 < local_70) {
        uVar17 = *param_2;
        if ((char)((ushort)uVar17 >> 8) != '\0') {
          uVar8 = 0;
          puVar12 = (undefined8 *)(**(code **)(*plVar11 + 8))(plVar11,local_50);
          FUN_140bbbda0(param_1,local_98,*puVar12);
          iVar7 = (int)local_98[1];
          lVar20 = (longlong)iVar7 * 0x10 + local_98[0];
          local_a8 = lVar20;
          if (local_98[0] != lVar20) {
            lVar22 = local_98[0];
            do {
              FUN_140549810((longlong *)(param_1 + 0xdd0),local_res20,lVar22);
              if ((local_res20[0] == -1) ||
                 (lVar2 = *(longlong *)(param_1 + 0xdd0) + (longlong)local_res20[0] * 0x28,
                 lVar2 == 0)) {
                puVar18 = (undefined2 *)0x0;
                local_b0._0_4_ = 0;
                local_b8 = (undefined2 *)0x0;
                local_b0 = 0;
              }
              else {
                iVar7 = *(int *)(lVar2 + 0x18);
                puVar18 = (undefined2 *)0x0;
                pvVar3 = *(void **)(lVar2 + 0x10);
                local_b8 = (undefined2 *)0x0;
                local_b0 = CONCAT44(local_b0._4_4_,iVar7);
                if (iVar7 == 0) {
                  local_b0 = 0;
                  local_b0._0_4_ = 0;
                  lVar20 = local_a8;
                }
                else {
                  TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_b8,iVar7,0);
                  puVar18 = local_b8;
                  _guard_xfg_dispatch_icall_nop(local_b8,pvVar3,(longlong)iVar7 * 2);
                  lVar20 = local_a8;
                }
              }
              puVar16 = &DAT_143f3eda8;
              if (local_70 != 0) {
                puVar16 = local_78;
              }
              puVar14 = &DAT_143f3eda8;
              if ((int)local_b0 != 0) {
                puVar14 = puVar18;
              }
              iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar14,puVar16);
              if (puVar18 != (undefined2 *)0x0) {
                FMemory::Free(puVar18);
              }
              uVar8 = (uint)plVar21 + 1;
              if (iVar7 != 0) {
                uVar8 = (uint)plVar21;
              }
              lVar22 = lVar22 + 0x10;
              plVar21 = (longlong *)(ulonglong)uVar8;
            } while (lVar22 != lVar20);
            iVar7 = (int)local_98[1];
          }
          uVar4 = DAT_146297e34;
          if ((int)uVar8 < iVar7) {
            *(undefined1 *)(param_1 + 0xe98) = 1;
            uVar17 = uVar4;
          }
          TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
          ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_98);
        }
        puVar12 = (undefined8 *)0x0;
        local_res18[0] = 0;
        puVar13 = (undefined8 *)FName::FName(local_48,L"SPARK",1);
        FUN_1404d0c50(&local_88,*puVar13);
        if (local_88 != (longlong *)0x0) {
          local_a0 = 0x11f;
          lVar20 = (**(code **)(*local_88 + 0x10))(local_88,0x11f);
          if (lVar20 != 0) {
            FUN_1404a9610(lVar20 + 0x28,DAT_14686a578,local_res18);
          }
        }
        plVar21 = local_80;
        if (local_80 != (longlong *)0x0) {
          LOCK();
          plVar10 = local_80 + 1;
          lVar20 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar20 == 1) {
            (**(code **)*local_80)(local_80);
            LOCK();
            piVar1 = (int *)((longlong)plVar21 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*local_80 + 8))(local_80,1);
            }
          }
        }
        puVar13 = (undefined8 *)operator_new(0x78);
        if (puVar13 != (undefined8 *)0x0) {
          puVar13[1] = 0;
          *(undefined4 *)(puVar13 + 2) = 0;
          *(undefined4 *)(puVar13 + 3) = 0;
          puVar13[4] = 0;
          puVar13[5] = 0;
          puVar13[6] = 0;
          puVar13[7] = 0;
          puVar13[8] = 0;
          puVar13[9] = 0;
          puVar13[10] = 0;
          puVar13[0xb] = 0;
          puVar13[0xc] = 0;
          *puVar13 = &PTR_FUN_144317a90;
          *(undefined2 *)(puVar13 + 0xd) = uVar17;
          *(undefined4 *)((longlong)puVar13 + 0x6c) = local_res18[0];
          *(undefined1 *)(puVar13 + 0xe) = 1;
          puVar12 = puVar13;
        }
        FUN_140be4f80(param_1,puVar12);
      }
      if (local_78 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140bf76e0 FUN_140bf76e0 body=645 status=ok
// SIG undefined FUN_140bf76e0(void)

void FUN_140bf76e0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  undefined8 *puVar7;
  longlong **pplVar8;
  longlong *plVar9;
  undefined1 local_res20 [8];
  undefined1 local_78 [8];
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_48;
  longlong *plStack_40;
  longlong *local_38;
  longlong *plStack_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  cVar6 = FUN_140ba7eb0(param_1,param_3);
  if (cVar6 != '\0') {
    local_58 = (longlong *)param_3[1];
    local_60 = (longlong *)*param_3;
    plVar9 = local_60;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_58 + 1) = (int)local_58[1] + 1;
      UNLOCK();
      plVar9 = (longlong *)*param_3;
    }
    puVar7 = (undefined8 *)(**(code **)(*plVar9 + 8))(plVar9,local_res20);
    FUN_1404cf2e0(&local_70,*puVar7);
    if ((local_70 == (longlong *)0x0) ||
       (cVar6 = (**(code **)(*local_70 + 0x10))(local_70,4), cVar6 == '\0')) {
      FUN_140bb8140(param_1,&local_48,param_3);
      plVar9 = plStack_40;
      if (local_48 != (longlong *)0x0) {
        puVar7 = (undefined8 *)(**(code **)(*local_48 + 8))(local_48,local_78);
        pplVar8 = (longlong **)FUN_1404cf2e0(local_28,*puVar7);
        if (&local_70 != pplVar8) {
          local_70 = *pplVar8;
          *pplVar8 = (longlong *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(&local_68,pplVar8 + 1);
        }
        if (local_20 != (longlong *)0x0) {
          LOCK();
          plVar9 = local_20 + 1;
          lVar5 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_20)(local_20);
            LOCK();
            piVar1 = (int *)((longlong)local_20 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_20 + 8))(local_20,1);
            }
          }
        }
        plVar3 = local_58;
        local_38 = local_60;
        if (plStack_40 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
          UNLOCK();
        }
        local_60 = local_48;
        local_58 = plStack_40;
        plStack_30 = plVar3;
        plVar9 = plStack_40;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar3 + 1;
          lVar5 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*plVar3)(plVar3);
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            plVar9 = plStack_40;
            if (iVar4 == 1) {
              (**(code **)(*plVar3 + 8))(plVar3,1);
              plVar9 = plStack_40;
            }
          }
        }
      }
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar9 + 1;
        lVar5 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
    }
    plVar9 = local_70;
    if ((local_70 != (longlong *)0x0) &&
       (cVar6 = (**(code **)(*local_70 + 0x10))(local_70,4), cVar6 != '\0')) {
      (**(code **)(*plVar9 + 0x40))(plVar9,param_2,&local_60);
    }
    plVar9 = local_68;
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_68 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_68 + 8))(local_68,1);
        }
      }
    }
    plVar9 = local_58;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_58 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140bf7970 FUN_140bf7970 body=237 status=ok
// SIG undefined FUN_140bf7970(void)

void FUN_140bf7970(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  
  TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty(param_1 + 0x978,0);
  lVar2 = *(longlong *)(param_1 + 0xbf8);
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0xa40)) {
    lVar4 = 0;
    do {
      plVar5 = (longlong *)(*(longlong *)(param_1 + 0xa38) + lVar4);
      if ((((int)plVar5[1] != 0) && (plVar1 = (longlong *)*plVar5, plVar1 != (longlong *)0x0)) &&
         (plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8), *plVar1 == lVar2))
      {
        if (((int)plVar5[1] != 0) && (plVar1 = (longlong *)*plVar5, plVar1 != (longlong *)0x0)) {
          (**(code **)(*plVar1 + 0x28))(plVar1,0);
          if (*plVar5 != 0) {
            lVar2 = FMemory::Realloc(*plVar5,0,0);
            *plVar5 = lVar2;
          }
          *(undefined4 *)(plVar5 + 1) = 0;
        }
        break;
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 0x10;
    } while (iVar3 < *(int *)(param_1 + 0xa40));
  }
  FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1 + 0xa38,0);
  *(undefined8 *)(param_1 + 0xbf8) = 0;
  return;
}



// FUNCTION 140bf7a60 FUN_140bf7a60 body=2245 status=ok
// SIG undefined FUN_140bf7a60(void)

undefined8 FUN_140bf7a60(longlong *param_1,longlong param_2,longlong *param_3,undefined1 param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint *puVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong *plVar22;
  undefined8 *puVar23;
  uint uVar24;
  ulonglong uVar25;
  uint local_res20;
  uint local_148;
  longlong local_140;
  longlong *local_138;
  undefined4 uStack_11c;
  ulonglong local_118;
  longlong *plStack_110;
  ulonglong local_108;
  longlong *local_100;
  undefined8 local_f8;
  longlong *local_f0;
  undefined1 local_e8 [8];
  undefined1 local_e0 [8];
  undefined1 local_d8 [8];
  undefined1 local_d0 [8];
  longlong *local_c8;
  longlong local_c0 [2];
  undefined **local_b0 [2];
  longlong *local_a0;
  longlong local_98;
  undefined **local_88 [2];
  longlong *local_78;
  longlong local_70;
  longlong *local_60;
  
  plVar6 = param_1 + 0x12f;
  TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty(plVar6,0);
  *(undefined1 *)(param_1 + 0x131) = param_4;
  puVar15 = (undefined8 *)param_1[7];
  local_138 = (longlong *)0x0;
  uVar17 = (longlong)(int)param_1[8] & 0x1fffffffffffffff;
  if (puVar15 + (int)param_1[8] < puVar15) {
    uVar17 = 0;
  }
  if (uVar17 != 0) {
    do {
      uVar4 = *puVar15;
      lVar10 = FUN_142547b50(uVar4,local_b0);
      lVar10 = *(longlong *)(lVar10 + 8);
      local_b0[0] = &PTR_FUN_143f740c8;
      if (local_98 != 0) {
        FMemory::Free();
      }
      plVar22 = local_a0;
      local_b0[0] = &PTR_FUN_143f73d18;
      if (local_a0 != (longlong *)0x0) {
        LOCK();
        plVar14 = local_a0 + 1;
        lVar20 = *plVar14;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)lVar20 == 1) {
          (**(code **)*local_a0)(local_a0);
          LOCK();
          piVar1 = (int *)((longlong)plVar22 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar22 + 8))(plVar22,1);
          }
        }
      }
      if (lVar10 != 0) {
        lVar10 = FUN_142547b50(uVar4,local_88);
        plVar22 = *(longlong **)(lVar10 + 0x10);
        lVar10 = *(longlong *)(lVar10 + 8);
        if (plVar22 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar22 + 1) = (int)plVar22[1] + 1;
          UNLOCK();
        }
        plVar14 = (longlong *)*plVar6;
        iVar3 = (int)param_1[0x130];
        lVar20 = (longlong)iVar3;
        for (plVar11 = plVar14; plVar11 != plVar14 + lVar20 * 2; plVar11 = plVar11 + 2) {
          if (*plVar11 == lVar10) {
            if ((int)((longlong)plVar11 - (longlong)plVar14 >> 4) != -1) goto LAB_140bf7bee;
            break;
          }
        }
        *(int *)(param_1 + 0x130) = iVar3 + 1;
        if (*(int *)((longlong)param_1 + 0x984) < iVar3 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar6,iVar3);
        }
        lVar5 = *plVar6;
        *(longlong *)(lVar5 + lVar20 * 0x10) = lVar10;
        *(longlong **)(lVar5 + 8 + lVar20 * 0x10) = plVar22;
        if (plVar22 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar22 + 1) = (int)plVar22[1] + 1;
          UNLOCK();
LAB_140bf7bee:
          if (plVar22 != (longlong *)0x0) {
            LOCK();
            plVar14 = plVar22 + 1;
            lVar10 = *plVar14;
            *(int *)plVar14 = (int)*plVar14 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*plVar22)(plVar22);
              LOCK();
              piVar1 = (int *)((longlong)plVar22 + 0xc);
              iVar3 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*plVar22 + 8))(plVar22,1);
              }
            }
          }
        }
        local_88[0] = &PTR_FUN_143f740c8;
        if (local_70 != 0) {
          FMemory::Free();
        }
        plVar22 = local_78;
        local_88[0] = &PTR_FUN_143f73d18;
        if (local_78 != (longlong *)0x0) {
          LOCK();
          plVar14 = local_78 + 1;
          lVar10 = *plVar14;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*local_78)(local_78);
            LOCK();
            piVar1 = (int *)((longlong)plVar22 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar22 + 8))(plVar22,1);
            }
          }
        }
      }
      puVar15 = puVar15 + 1;
      local_138 = (longlong *)((longlong)local_138 + 1);
    } while (local_138 != (longlong *)uVar17);
  }
  uVar17 = 0;
  FUN_140bbc150(param_1,plVar6);
  iVar3 = (int)param_1[0x130];
  if ((iVar3 == (int)param_1[8]) || (iVar3 == 0)) {
    TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty(plVar6,0);
  }
  else {
    bVar7 = false;
    local_148 = 0;
    local_res20 = 0;
    if (0 < iVar3) {
      local_140 = 0;
      uVar18 = uVar17;
      uVar21 = uVar17;
      plVar22 = param_1;
      plVar14 = param_1;
      uVar25 = uVar17;
      local_138 = param_3;
      do {
        if (3 < (int)uVar18) break;
        plVar11 = (longlong *)
                  (**(code **)(**(longlong **)(local_140 + *plVar6) + 8))
                            (*(longlong **)(local_140 + *plVar6),local_e8);
        lVar10 = *plVar11;
        plVar11 = (longlong *)(**(code **)(*param_1 + 0x338))(param_1,local_e0);
        if (lVar10 == *plVar11) {
          puVar12 = &local_118;
          local_118 = 0;
          plStack_110 = (longlong *)0x0;
          uVar24 = (uint)uVar25 | 2;
          uVar18 = uVar17;
        }
        else {
          uVar24 = (uint)uVar25 | 1;
          puVar12 = (ulonglong *)
                    FUN_140bbc6f0(param_1,local_d0,(longlong)(int)uVar21 * 0x10 + *plVar6);
          uVar18 = *puVar12;
        }
        plVar11 = (longlong *)puVar12[1];
        puVar12[1] = 0;
        *puVar12 = 0;
        plVar13 = plStack_110;
        if (((uVar24 & 2) != 0) && (uVar24 = uVar24 & 0xfffffffd, plStack_110 != (longlong *)0x0)) {
          LOCK();
          plVar2 = plStack_110 + 1;
          lVar10 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*plStack_110)(plStack_110);
            LOCK();
            piVar1 = (int *)((longlong)plVar13 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plStack_110 + 8))(plStack_110,1);
            }
          }
        }
        plVar13 = local_c8;
        if (((uVar24 & 1) != 0) && (uVar24 = uVar24 & 0xfffffffe, local_c8 != (longlong *)0x0)) {
          LOCK();
          plVar2 = local_c8 + 1;
          lVar10 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*local_c8)(local_c8);
            LOCK();
            piVar1 = (int *)((longlong)plVar13 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar13 + 8))(plVar13,1);
            }
          }
        }
        if (uVar18 == 0) {
          local_100 = *(longlong **)(local_140 + 8 + param_1[0x12f]);
          uVar18 = *(ulonglong *)(local_140 + param_1[0x12f]);
          if (local_100 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_100 + 1) = (int)local_100[1] + 1;
            UNLOCK();
          }
          uVar16 = 8;
          plVar14 = local_100;
        }
        else {
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
            UNLOCK();
          }
          uVar16 = 4;
          local_100 = plVar11;
          plVar22 = plVar11;
        }
        uVar24 = uVar24 | uVar16;
        uVar25 = (ulonglong)uVar24;
        if (local_100 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_100 + 1) = (int)local_100[1] + 1;
          UNLOCK();
        }
        local_108 = uVar18;
        if (((uVar24 & 8) != 0) &&
           (uVar25 = (ulonglong)(uVar24 & 0xfffffff7), plVar14 != (longlong *)0x0)) {
          LOCK();
          plVar13 = plVar14 + 1;
          lVar10 = *plVar13;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*plVar14)(plVar14);
            LOCK();
            piVar1 = (int *)((longlong)plVar14 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar14 + 8))(plVar14,1);
            }
          }
        }
        if (((uVar25 & 4) != 0) &&
           (uVar25 = (ulonglong)((uint)uVar25 & 0xfffffffb), plVar22 != (longlong *)0x0)) {
          LOCK();
          plVar13 = plVar22 + 1;
          lVar10 = *plVar13;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*plVar22)(plVar22);
            LOCK();
            piVar1 = (int *)((longlong)plVar22 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar22 + 8))(plVar22,1);
            }
          }
        }
        FUN_140d79f00(param_1[0x8f],&local_108,0,0,(longlong)(int)local_res20 * 0x10 + param_2);
        if (*(int *)((param_2 - (longlong)param_3) + 8 + (longlong)local_138) < 2) {
          TArray<TSharedPtr<Chaos::FImplicitObject,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                    (plVar6,local_148);
          local_148 = local_148 - 1;
          local_140 = local_140 + -0x10;
        }
        else {
          uVar8 = FUN_140bbd2a0(param_1,&local_108);
          plVar13 = (longlong *)FUN_1411f1490(local_c0,uVar8);
          if (local_138 != plVar13) {
            if (*local_138 != 0) {
              FMemory::Free();
            }
            *local_138 = *plVar13;
            *plVar13 = 0;
            *(int *)(local_138 + 1) = (int)plVar13[1];
            *(undefined4 *)((longlong)local_138 + 0xc) = *(undefined4 *)((longlong)plVar13 + 0xc);
            plVar13[1] = 0;
          }
          if (local_c0[0] != 0) {
            FMemory::Free();
          }
          if ((int)param_1[8] <= (int)local_148) {
            bVar7 = true;
          }
          local_res20 = local_res20 + 1;
          local_138 = local_138 + 2;
        }
        plVar13 = local_100;
        if (local_100 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_100 + 1;
          lVar10 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*local_100)(local_100);
            LOCK();
            piVar1 = (int *)((longlong)plVar13 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar13 + 8))(plVar13,1);
            }
          }
        }
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          plVar13 = plVar11 + 1;
          lVar10 = *plVar13;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*plVar11)(plVar11);
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar11 + 8))(plVar11,1);
            }
          }
        }
        local_148 = local_148 + 1;
        uVar21 = (ulonglong)local_148;
        local_140 = local_140 + 0x10;
        uVar18 = (ulonglong)local_res20;
      } while ((int)local_148 < (int)param_1[0x130]);
      if (bVar7) {
        plVar22 = param_1 + 0x147;
        plVar14 = (longlong *)FMemory::Realloc(0,0x30);
        local_60 = plVar14;
        if (plVar14 != (longlong *)0x0) {
          *plVar14 = (longlong)&PTR_FUN_14428ae88;
          FWeakObjectPtr::operator=(plVar14 + 1,param_1);
          *(undefined4 *)(plVar14 + 2) = 0x40be2d90;
          *(undefined4 *)((longlong)plVar14 + 0x14) = 1;
          *(undefined4 *)(plVar14 + 3) = 0;
          *(undefined4 *)((longlong)plVar14 + 0x1c) = uStack_11c;
          lVar10 = FDelegateHandle::GenerateNewID();
          plVar14[5] = lVar10;
          *plVar14 = (longlong)&PTR_FUN_14428aed0;
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar22,1);
          puVar12 = (ulonglong *)(**(code **)(*plVar14 + 0x20))(plVar14,local_d8);
          iVar3 = (int)param_1[0x148];
          uVar17 = *puVar12;
          *(int *)(param_1 + 0x148) = iVar3 + 1;
          if (*(int *)((longlong)param_1 + 0xa44) < iVar3 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar22,iVar3);
          }
          puVar15 = (undefined8 *)((longlong)iVar3 * 0x10 + *plVar22);
          *puVar15 = plVar14;
          *(undefined4 *)(puVar15 + 1) = 3;
        }
        param_1[0x17f] = uVar17;
        puVar15 = (undefined8 *)*plVar6;
        puVar23 = puVar15 + (longlong)(int)param_1[0x130] * 2;
        for (; puVar15 != puVar23; puVar15 = puVar15 + 2) {
          plVar6 = (longlong *)puVar15[1];
          local_f8 = *puVar15;
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
            UNLOCK();
          }
          local_f0 = plVar6;
          uVar9 = FUN_140bbba30(param_1,&local_f8);
          FUN_140be2d90(param_1,puVar15,uVar9);
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            plVar22 = plVar6 + 1;
            lVar10 = *plVar22;
            *(int *)plVar22 = (int)*plVar22 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
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
        }
        return 1;
      }
    }
    lVar10 = 4;
    TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty(plVar6,0);
    lVar20 = (longlong)param_3 - param_2;
    puVar19 = (uint *)(param_2 + 8);
    do {
      if (*(undefined **)(puVar19 + -2) != &DAT_1442ea2a4) {
        *puVar19 = 0;
        uVar18 = uVar17;
        if (puVar19[1] != 0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar19 + -2,0);
          uVar18 = (ulonglong)*puVar19;
        }
        *puVar19 = (uint)uVar18;
        if ((int)puVar19[1] < (int)(uint)uVar18) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar19 + -2);
        }
      }
      if (*(undefined **)(lVar20 + -8 + (longlong)puVar19) != &DAT_1442ea2b4) {
        *(undefined4 *)(lVar20 + (longlong)puVar19) = 0;
        uVar18 = uVar17;
        if (*(int *)(lVar20 + 4 + (longlong)puVar19) != 0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo((longlong)puVar19 + lVar20 + -8,0);
          uVar18 = (ulonglong)*(uint *)(lVar20 + (longlong)puVar19);
        }
        *(int *)(lVar20 + (longlong)puVar19) = (int)uVar18;
        if (*(int *)(lVar20 + 4 + (longlong)puVar19) < (int)uVar18) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow((longlong)puVar19 + lVar20 + -8);
        }
      }
      puVar19 = puVar19 + 4;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return 0;
}



// FUNCTION 140bf8330 FUN_140bf8330 body=140 status=ok
// SIG undefined FUN_140bf8330(void)

void FUN_140bf8330(void)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar3 = (longlong *)UListView::OnItemSelectionChanged();
  plVar5 = (longlong *)*plVar3;
  plVar3 = plVar5 + (int)plVar3[1];
  for (; plVar5 != plVar3; plVar5 = plVar5 + 1) {
    if ((*plVar5 != 0) && (lVar1 = *(longlong *)(*plVar5 + 0x30), lVar1 != 0)) {
      lVar4 = FUN_14145f370();
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
        FUN_140d1b4d0(lVar1);
      }
    }
  }
  return;
}



// FUNCTION 140bf8460 FUN_140bf8460 body=36 status=ok
// SIG undefined FUN_140bf8460(void)

void FUN_140bf8460(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  FUN_140bab890(*(undefined8 *)(param_1 + 8),*param_2,*param_3,0,0,1);
  return;
}



// FUNCTION 140bf84e0 FUN_140bf84e0 body=58 status=ok
// SIG undefined FUN_140bf84e0(void)

void FUN_140bf84e0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144332858;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *puVar1 = &PTR_GetPoolName_1443328a0;
  }
  return;
}



// FUNCTION 140bf8530 FUN_140bf8530 body=20 status=ok
// SIG undefined FUN_140bf8530(void)

undefined1 FUN_140bf8530(longlong param_1)

{
  FUN_140c01a40(param_1 + 8);
  return 1;
}



// FUNCTION 140bf8550 FUN_140bf8550 body=58 status=ok
// SIG undefined FUN_140bf8550(void)

void FUN_140bf8550(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1443328e8;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *puVar1 = &PTR_GetPoolName_144332930;
  }
  return;
}



// FUNCTION 140bf85a0 FUN_140bf85a0 body=20 status=ok
// SIG undefined FUN_140bf85a0(void)

undefined1 FUN_140bf85a0(longlong param_1)

{
  FUN_140c00330(param_1 + 8);
  return 1;
}



// FUNCTION 140bf85c0 FUN_140bf85c0 body=58 status=ok
// SIG undefined FUN_140bf85c0(void)

void FUN_140bf85c0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144332978;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *puVar1 = &PTR_GetPoolName_1443329c0;
  }
  return;
}



// FUNCTION 140bf8610 FUN_140bf8610 body=20 status=ok
// SIG undefined FUN_140bf8610(void)

undefined1 FUN_140bf8610(longlong param_1)

{
  FUN_140bfff30(param_1 + 8);
  return 1;
}



// FUNCTION 140bf8630 FUN_140bf8630 body=58 status=ok
// SIG undefined FUN_140bf8630(void)

void FUN_140bf8630(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144332a08;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *puVar1 = &PTR_GetPoolName_144332a50;
  }
  return;
}



// FUNCTION 140bf8680 FUN_140bf8680 body=20 status=ok
// SIG undefined FUN_140bf8680(void)

undefined1 FUN_140bf8680(longlong param_1)

{
  FUN_140c004a0(param_1 + 8);
  return 1;
}



// FUNCTION 140bf86a0 FUN_140bf86a0 body=58 status=ok
// SIG undefined FUN_140bf86a0(void)

void FUN_140bf86a0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144332a98;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *puVar1 = &PTR_GetPoolName_144332ae0;
  }
  return;
}



// FUNCTION 140bf86f0 FUN_140bf86f0 body=20 status=ok
// SIG undefined FUN_140bf86f0(void)

undefined1 FUN_140bf86f0(longlong param_1)

{
  FUN_140c00890(param_1 + 8);
  return 1;
}



// FUNCTION 140bf8710 FUN_140bf8710 body=58 status=ok
// SIG undefined FUN_140bf8710(void)

void FUN_140bf8710(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144332b28;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *puVar1 = &PTR_GetPoolName_144332b70;
  }
  return;
}



// FUNCTION 140bf8760 FUN_140bf8760 body=20 status=ok
// SIG undefined FUN_140bf8760(void)

undefined1 FUN_140bf8760(longlong param_1)

{
  FUN_140c00cf0(param_1 + 8);
  return 1;
}



// FUNCTION 140bf8780 FUN_140bf8780 body=58 status=ok
// SIG undefined FUN_140bf8780(void)

void FUN_140bf8780(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144332bb8;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *puVar1 = &PTR_GetPoolName_144332c00;
  }
  return;
}



// FUNCTION 140bf87d0 FUN_140bf87d0 body=20 status=ok
// SIG undefined FUN_140bf87d0(void)

undefined1 FUN_140bf87d0(longlong param_1)

{
  FUN_140c01200(param_1 + 8);
  return 1;
}



// FUNCTION 140bf87f0 FUN_140bf87f0 body=164 status=ok
// SIG undefined FUN_140bf87f0(void)

void FUN_140bf87f0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong local_68 [2];
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  local_68[1] = 0x14;
  local_68[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68,0);
  FGenericPlatformString::Memcpy(local_68[0],L"player_threat_level",0x28);
  local_28 = 0;
  local_18 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144332d18;
  }
  local_58[0] = &LAB_140c08150;
  (**(code **)*param_2)(param_2,local_68,local_58);
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140bf88b0 FUN_140bf88b0 body=104 status=ok
// SIG undefined FUN_140bf88b0(void)

void FUN_140bf88b0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 local_res8;
  
  plVar1 = (longlong *)FUN_141593110();
  FName::FName(&local_res8,L"GbxPerfAnalyticsProvider",1);
  lVar2 = param_1 + 8;
  if (param_1 == 0) {
    lVar2 = 0;
  }
  (**(code **)(*plVar1 + 0x20))(plVar1,local_res8,lVar2);
                    /* WARNING: Could not recover jumptable at 0x000140bf8914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 8) + 0x40))(param_1 + 8);
  return;
}



// FUNCTION 140bf8920 FUN_140bf8920 body=128 status=ok
// SIG undefined FUN_140bf8920(void)

undefined8 * FUN_140bf8920(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  undefined8 local_res8;
  
  *param_1 = &PTR_FUN_144332cb8;
  plVar1 = (longlong *)FUN_141593110();
  FName::FName(&local_res8,L"GbxPerfAnalyticsProvider",1);
  (**(code **)(*plVar1 + 0x20))(plVar1,local_res8,param_1 + 1);
  *param_1 = &PTR_FUN_143f4c8e0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 140bf89a0 FUN_140bf89a0 body=39 status=ok
// SIG undefined FUN_140bf89a0(void)

void FUN_140bf89a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144332d18;
    return;
  }
  return;
}



// FUNCTION 140bf89d0 FUN_140bf89d0 body=43 status=ok
// SIG undefined FUN_140bf89d0(void)

undefined8 * FUN_140bf89d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 140bf8a00 FUN_140bf8a00 body=66 status=ok
// SIG undefined FUN_140bf8a00(void)

void FUN_140bf8a00(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144332d30;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_144332d78;
  }
  return;
}



// FUNCTION 140bf8a60 FUN_140bf8a60 body=26 status=ok
// SIG undefined FUN_140bf8a60(void)

undefined1 FUN_140bf8a60(longlong param_1)

{
  if (*(char *)(*(longlong *)(param_1 + 8) + 0x10) == '\0') {
    FUN_140c18790();
  }
  return 1;
}



// FUNCTION 140bf8a80 FUN_140bf8a80 body=66 status=ok
// SIG undefined FUN_140bf8a80(void)

void FUN_140bf8a80(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144332dc0;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_144332e08;
  }
  return;
}



// FUNCTION 140bf8ae0 FUN_140bf8ae0 body=26 status=ok
// SIG undefined FUN_140bf8ae0(void)

undefined1 FUN_140bf8ae0(longlong param_1)

{
  if (*(char *)(*(longlong *)(param_1 + 8) + 1) == '\0') {
    FUN_140c185a0();
  }
  return 1;
}



// FUNCTION 140bf8b00 FUN_140bf8b00 body=66 status=ok
// SIG undefined FUN_140bf8b00(void)

void FUN_140bf8b00(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144332e50;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_144332e98;
  }
  return;
}



// FUNCTION 140bf8b60 FUN_140bf8b60 body=26 status=ok
// SIG undefined FUN_140bf8b60(void)

undefined1 FUN_140bf8b60(longlong param_1)

{
  if (*(char *)(*(longlong *)(param_1 + 8) + 1) == '\0') {
    FUN_140c18820();
  }
  return 1;
}



// FUNCTION 140bf8b80 FUN_140bf8b80 body=66 status=ok
// SIG undefined FUN_140bf8b80(void)

void FUN_140bf8b80(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144332ee0;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_144332f28;
  }
  return;
}



// FUNCTION 140bf8bd0 FUN_140bf8bd0 body=46 status=ok
// SIG undefined FUN_140bf8bd0(void)

void FUN_140bf8bd0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (*(char *)(lVar1 + 0xc0) == '\0') {
    uVar2 = FUN_140c12040();
    FUN_140bffb10(lVar1,uVar2);
    return;
  }
  return;
}



// FUNCTION 140bf8c00 FUN_140bf8c00 body=43 status=ok
// SIG undefined FUN_140bf8c00(void)

undefined1 FUN_140bf8c00(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (*(char *)(lVar1 + 0xc0) == '\0') {
    uVar2 = FUN_140c12040();
    FUN_140bffb10(lVar1,uVar2);
  }
  return 1;
}



// FUNCTION 140bf8c30 FUN_140bf8c30 body=66 status=ok
// SIG undefined FUN_140bf8c30(void)

void FUN_140bf8c30(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144332f70;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_144332fb8;
  }
  return;
}



// FUNCTION 140bf8c80 FUN_140bf8c80 body=76 status=ok
// SIG undefined FUN_140bf8c80(void)

void FUN_140bf8c80(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (*(char *)(puVar1 + 8) == '\0') {
    puVar3 = (undefined8 *)FUN_140c11e40();
    if (puVar3 != puVar1) {
      if (*(char *)(puVar1 + 8) != '\0') {
        *(undefined1 *)(puVar1 + 8) = 0;
      }
      uVar2 = puVar3[1];
      *puVar1 = *puVar3;
      puVar1[1] = uVar2;
      uVar2 = puVar3[3];
      puVar1[2] = puVar3[2];
      puVar1[3] = uVar2;
      uVar2 = puVar3[5];
      puVar1[4] = puVar3[4];
      puVar1[5] = uVar2;
      uVar2 = puVar3[7];
      puVar1[6] = puVar3[6];
      puVar1[7] = uVar2;
      *(undefined1 *)(puVar1 + 8) = 1;
    }
  }
  return;
}



// FUNCTION 140bf8cd0 FUN_140bf8cd0 body=78 status=ok
// SIG undefined FUN_140bf8cd0(void)

undefined1 FUN_140bf8cd0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (*(char *)(puVar1 + 8) == '\0') {
    puVar3 = (undefined8 *)FUN_140c11e40();
    if (puVar3 != puVar1) {
      if (*(char *)(puVar1 + 8) != '\0') {
        *(undefined1 *)(puVar1 + 8) = 0;
      }
      uVar2 = puVar3[1];
      *puVar1 = *puVar3;
      puVar1[1] = uVar2;
      uVar2 = puVar3[3];
      puVar1[2] = puVar3[2];
      puVar1[3] = uVar2;
      uVar2 = puVar3[5];
      puVar1[4] = puVar3[4];
      puVar1[5] = uVar2;
      uVar2 = puVar3[7];
      puVar1[6] = puVar3[6];
      puVar1[7] = uVar2;
      *(undefined1 *)(puVar1 + 8) = 1;
    }
  }
  return 1;
}



// FUNCTION 140bf8d20 FUN_140bf8d20 body=66 status=ok
// SIG undefined FUN_140bf8d20(void)

void FUN_140bf8d20(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144333000;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_144333048;
  }
  return;
}



// FUNCTION 140bf8d70 FUN_140bf8d70 body=84 status=ok
// SIG undefined FUN_140bf8d70(void)

void FUN_140bf8d70(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (*(char *)(puVar1 + 10) == '\0') {
    puVar3 = (undefined8 *)FUN_140c123a0();
    if (puVar3 != puVar1) {
      if (*(char *)(puVar1 + 10) != '\0') {
        *(undefined1 *)(puVar1 + 10) = 0;
      }
      uVar2 = puVar3[1];
      *puVar1 = *puVar3;
      puVar1[1] = uVar2;
      uVar2 = puVar3[3];
      puVar1[2] = puVar3[2];
      puVar1[3] = uVar2;
      uVar2 = puVar3[5];
      puVar1[4] = puVar3[4];
      puVar1[5] = uVar2;
      uVar2 = puVar3[7];
      puVar1[6] = puVar3[6];
      puVar1[7] = uVar2;
      uVar2 = puVar3[9];
      puVar1[8] = puVar3[8];
      puVar1[9] = uVar2;
      *(undefined1 *)(puVar1 + 10) = 1;
    }
  }
  return;
}



// FUNCTION 140bf8dd0 FUN_140bf8dd0 body=86 status=ok
// SIG undefined FUN_140bf8dd0(void)

undefined1 FUN_140bf8dd0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (*(char *)(puVar1 + 10) == '\0') {
    puVar3 = (undefined8 *)FUN_140c123a0();
    if (puVar3 != puVar1) {
      if (*(char *)(puVar1 + 10) != '\0') {
        *(undefined1 *)(puVar1 + 10) = 0;
      }
      uVar2 = puVar3[1];
      *puVar1 = *puVar3;
      puVar1[1] = uVar2;
      uVar2 = puVar3[3];
      puVar1[2] = puVar3[2];
      puVar1[3] = uVar2;
      uVar2 = puVar3[5];
      puVar1[4] = puVar3[4];
      puVar1[5] = uVar2;
      uVar2 = puVar3[7];
      puVar1[6] = puVar3[6];
      puVar1[7] = uVar2;
      uVar2 = puVar3[9];
      puVar1[8] = puVar3[8];
      puVar1[9] = uVar2;
      *(undefined1 *)(puVar1 + 10) = 1;
    }
  }
  return 1;
}



// FUNCTION 140bf8e30 FUN_140bf8e30 body=66 status=ok
// SIG undefined FUN_140bf8e30(void)

void FUN_140bf8e30(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144333090;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_1443330d8;
  }
  return;
}



// FUNCTION 140bf8e80 FUN_140bf8e80 body=46 status=ok
// SIG undefined FUN_140bf8e80(void)

void FUN_140bf8e80(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (*(char *)(lVar1 + 0x130) == '\0') {
    uVar2 = FUN_140c12120();
    FUN_140bffbb0(lVar1,uVar2);
    return;
  }
  return;
}



// FUNCTION 140bf8eb0 FUN_140bf8eb0 body=43 status=ok
// SIG undefined FUN_140bf8eb0(void)

undefined1 FUN_140bf8eb0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (*(char *)(lVar1 + 0x130) == '\0') {
    uVar2 = FUN_140c12120();
    FUN_140bffbb0(lVar1,uVar2);
  }
  return 1;
}



// FUNCTION 140bf8ee0 FUN_140bf8ee0 body=66 status=ok
// SIG undefined FUN_140bf8ee0(void)

void FUN_140bf8ee0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144333120;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_144333168;
  }
  return;
}



// FUNCTION 140bf8f30 FUN_140bf8f30 body=92 status=ok
// SIG undefined FUN_140bf8f30(void)

void FUN_140bf8f30(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (*(char *)(puVar1 + 0xc) == '\0') {
    puVar3 = (undefined8 *)FUN_140c120b0();
    if (puVar3 != puVar1) {
      if (*(char *)(puVar1 + 0xc) != '\0') {
        *(undefined1 *)(puVar1 + 0xc) = 0;
      }
      uVar2 = puVar3[1];
      *puVar1 = *puVar3;
      puVar1[1] = uVar2;
      uVar2 = puVar3[3];
      puVar1[2] = puVar3[2];
      puVar1[3] = uVar2;
      uVar2 = puVar3[5];
      puVar1[4] = puVar3[4];
      puVar1[5] = uVar2;
      uVar2 = puVar3[7];
      puVar1[6] = puVar3[6];
      puVar1[7] = uVar2;
      uVar2 = puVar3[9];
      puVar1[8] = puVar3[8];
      puVar1[9] = uVar2;
      uVar2 = puVar3[0xb];
      puVar1[10] = puVar3[10];
      puVar1[0xb] = uVar2;
      *(undefined1 *)(puVar1 + 0xc) = 1;
    }
  }
  return;
}



// FUNCTION 140bf8f90 FUN_140bf8f90 body=94 status=ok
// SIG undefined FUN_140bf8f90(void)

undefined1 FUN_140bf8f90(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (*(char *)(puVar1 + 0xc) == '\0') {
    puVar3 = (undefined8 *)FUN_140c120b0();
    if (puVar3 != puVar1) {
      if (*(char *)(puVar1 + 0xc) != '\0') {
        *(undefined1 *)(puVar1 + 0xc) = 0;
      }
      uVar2 = puVar3[1];
      *puVar1 = *puVar3;
      puVar1[1] = uVar2;
      uVar2 = puVar3[3];
      puVar1[2] = puVar3[2];
      puVar1[3] = uVar2;
      uVar2 = puVar3[5];
      puVar1[4] = puVar3[4];
      puVar1[5] = uVar2;
      uVar2 = puVar3[7];
      puVar1[6] = puVar3[6];
      puVar1[7] = uVar2;
      uVar2 = puVar3[9];
      puVar1[8] = puVar3[8];
      puVar1[9] = uVar2;
      uVar2 = puVar3[0xb];
      puVar1[10] = puVar3[10];
      puVar1[0xb] = uVar2;
      *(undefined1 *)(puVar1 + 0xc) = 1;
    }
  }
  return 1;
}



// FUNCTION 140bf8ff0 FUN_140bf8ff0 body=66 status=ok
// SIG undefined FUN_140bf8ff0(void)

void FUN_140bf8ff0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1443331b0;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_1443331f8;
  }
  return;
}



// FUNCTION 140bf9040 FUN_140bf9040 body=86 status=ok
// SIG undefined FUN_140bf9040(void)

void FUN_140bf9040(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (*(char *)(puVar1 + 9) == '\0') {
    puVar3 = (undefined8 *)FUN_140c12190();
    if (puVar3 != puVar1) {
      if (*(char *)(puVar1 + 9) != '\0') {
        *(undefined1 *)(puVar1 + 9) = 0;
      }
      uVar2 = puVar3[1];
      *puVar1 = *puVar3;
      puVar1[1] = uVar2;
      uVar2 = puVar3[3];
      puVar1[2] = puVar3[2];
      puVar1[3] = uVar2;
      uVar2 = puVar3[5];
      puVar1[4] = puVar3[4];
      puVar1[5] = uVar2;
      uVar2 = puVar3[7];
      puVar1[6] = puVar3[6];
      puVar1[7] = uVar2;
      puVar1[8] = puVar3[8];
      *(undefined1 *)(puVar1 + 9) = 1;
    }
  }
  return;
}



// FUNCTION 140bf90a0 FUN_140bf90a0 body=88 status=ok
// SIG undefined FUN_140bf90a0(void)

undefined1 FUN_140bf90a0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (*(char *)(puVar1 + 9) == '\0') {
    puVar3 = (undefined8 *)FUN_140c12190();
    if (puVar3 != puVar1) {
      if (*(char *)(puVar1 + 9) != '\0') {
        *(undefined1 *)(puVar1 + 9) = 0;
      }
      uVar2 = puVar3[1];
      *puVar1 = *puVar3;
      puVar1[1] = uVar2;
      uVar2 = puVar3[3];
      puVar1[2] = puVar3[2];
      puVar1[3] = uVar2;
      uVar2 = puVar3[5];
      puVar1[4] = puVar3[4];
      puVar1[5] = uVar2;
      uVar2 = puVar3[7];
      puVar1[6] = puVar3[6];
      puVar1[7] = uVar2;
      puVar1[8] = puVar3[8];
      *(undefined1 *)(puVar1 + 9) = 1;
    }
  }
  return 1;
}



// FUNCTION 140bf9100 FUN_140bf9100 body=66 status=ok
// SIG undefined FUN_140bf9100(void)

void FUN_140bf9100(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144333240;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_144333288;
  }
  return;
}



// FUNCTION 140bf9150 FUN_140bf9150 body=70 status=ok
// SIG undefined FUN_140bf9150(void)

void FUN_140bf9150(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (*(char *)(puVar1 + 5) == '\0') {
    puVar3 = (undefined8 *)FUN_140c12200();
    if (puVar3 != puVar1) {
      if (*(char *)(puVar1 + 5) != '\0') {
        *(undefined1 *)(puVar1 + 5) = 0;
      }
      uVar2 = puVar3[1];
      *puVar1 = *puVar3;
      puVar1[1] = uVar2;
      uVar2 = puVar3[3];
      puVar1[2] = puVar3[2];
      puVar1[3] = uVar2;
      puVar1[4] = puVar3[4];
      *(undefined1 *)(puVar1 + 5) = 1;
    }
  }
  return;
}



// FUNCTION 140bf91a0 FUN_140bf91a0 body=72 status=ok
// SIG undefined FUN_140bf91a0(void)

undefined1 FUN_140bf91a0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (*(char *)(puVar1 + 5) == '\0') {
    puVar3 = (undefined8 *)FUN_140c12200();
    if (puVar3 != puVar1) {
      if (*(char *)(puVar1 + 5) != '\0') {
        *(undefined1 *)(puVar1 + 5) = 0;
      }
      uVar2 = puVar3[1];
      *puVar1 = *puVar3;
      puVar1[1] = uVar2;
      uVar2 = puVar3[3];
      puVar1[2] = puVar3[2];
      puVar1[3] = uVar2;
      puVar1[4] = puVar3[4];
      *(undefined1 *)(puVar1 + 5) = 1;
    }
  }
  return 1;
}



// FUNCTION 140bf91f0 FUN_140bf91f0 body=66 status=ok
// SIG undefined FUN_140bf91f0(void)

void FUN_140bf91f0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1443332d0;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_144333318;
  }
  return;
}



// FUNCTION 140bf9250 FUN_140bf9250 body=26 status=ok
// SIG undefined FUN_140bf9250(void)

undefined1 FUN_140bf9250(longlong param_1)

{
  if (*(char *)(*(longlong *)(param_1 + 8) + 0x70) == '\0') {
    FUN_140c186d0();
  }
  return 1;
}



// FUNCTION 140bf9270 FUN_140bf9270 body=66 status=ok
// SIG undefined FUN_140bf9270(void)

void FUN_140bf9270(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144333360;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_1443333a8;
  }
  return;
}



// FUNCTION 140bf92c0 FUN_140bf92c0 body=62 status=ok
// SIG undefined FUN_140bf92c0(void)

void FUN_140bf92c0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (*(char *)(puVar1 + 3) == '\0') {
    puVar3 = (undefined8 *)FUN_140c11eb0();
    if (puVar3 != puVar1) {
      if (*(char *)(puVar1 + 3) != '\0') {
        *(undefined1 *)(puVar1 + 3) = 0;
      }
      uVar2 = puVar3[1];
      *puVar1 = *puVar3;
      puVar1[1] = uVar2;
      puVar1[2] = puVar3[2];
      *(undefined1 *)(puVar1 + 3) = 1;
    }
  }
  return;
}



// FUNCTION 140bf9300 FUN_140bf9300 body=64 status=ok
// SIG undefined FUN_140bf9300(void)

undefined1 FUN_140bf9300(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (*(char *)(puVar1 + 3) == '\0') {
    puVar3 = (undefined8 *)FUN_140c11eb0();
    if (puVar3 != puVar1) {
      if (*(char *)(puVar1 + 3) != '\0') {
        *(undefined1 *)(puVar1 + 3) = 0;
      }
      uVar2 = puVar3[1];
      *puVar1 = *puVar3;
      puVar1[1] = uVar2;
      puVar1[2] = puVar3[2];
      *(undefined1 *)(puVar1 + 3) = 1;
    }
  }
  return 1;
}



// FUNCTION 140bf9340 FUN_140bf9340 body=66 status=ok
// SIG undefined FUN_140bf9340(void)

void FUN_140bf9340(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144333400;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_144333448;
  }
  return;
}



// FUNCTION 140bf93a0 FUN_140bf93a0 body=26 status=ok
// SIG undefined FUN_140bf93a0(void)

undefined1 FUN_140bf93a0(longlong param_1)

{
  if (*(char *)(*(longlong *)(param_1 + 8) + 8) == '\0') {
    FUN_140c184b0();
  }
  return 1;
}



// FUNCTION 140bf93c0 FUN_140bf93c0 body=66 status=ok
// SIG undefined FUN_140bf93c0(void)

void FUN_140bf93c0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144333490;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_1443334d8;
  }
  return;
}



// FUNCTION 140bf9420 FUN_140bf9420 body=26 status=ok
// SIG undefined FUN_140bf9420(void)

undefined1 FUN_140bf9420(longlong param_1)

{
  if (*(char *)(*(longlong *)(param_1 + 8) + 8) == '\0') {
    FUN_140c18430();
  }
  return 1;
}



// FUNCTION 140bf9440 FUN_140bf9440 body=66 status=ok
// SIG undefined FUN_140bf9440(void)

void FUN_140bf9440(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144333520;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_144333568;
  }
  return;
}



// FUNCTION 140bf94a0 FUN_140bf94a0 body=26 status=ok
// SIG undefined FUN_140bf94a0(void)

undefined1 FUN_140bf94a0(longlong param_1)

{
  if (*(char *)(*(longlong *)(param_1 + 8) + 0x68) == '\0') {
    FUN_140c18730();
  }
  return 1;
}



// FUNCTION 140bf94c0 FUN_140bf94c0 body=66 status=ok
// SIG undefined FUN_140bf94c0(void)

void FUN_140bf94c0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1443335b0;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_144333638;
  }
  return;
}



// FUNCTION 140bf9520 FUN_140bf9520 body=20 status=ok
// SIG undefined FUN_140bf9520(void)

undefined1 FUN_140bf9520(longlong param_1)

{
  FUN_140c11de0(*(undefined8 *)(param_1 + 8));
  return 1;
}



// FUNCTION 140bf9540 FUN_140bf9540 body=58 status=ok
// SIG undefined FUN_140bf9540(void)

void FUN_140bf9540(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1443336d8;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *puVar1 = &PTR_GetPoolName_144333720;
  }
  return;
}



// FUNCTION 140bf9590 FUN_140bf9590 body=20 status=ok
// SIG undefined FUN_140bf9590(void)

undefined1 FUN_140bf9590(longlong param_1)

{
  FUN_140c014b0(param_1 + 8);
  return 1;
}



// FUNCTION 140bf95b0 FUN_140bf95b0 body=185 status=ok
// SIG undefined FUN_140bf95b0(void)

undefined8 FUN_140bf95b0(undefined8 param_1,undefined8 param_2)

{
  undefined **local_b8 [18];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  FUN_14217e740();
  FUN_142194380(param_1,100,1,0,0);
  FArchive::FArchive(local_b8);
  local_28 = 0;
  local_b8[0] = &PTR_FUN_143f4a100;
  local_18 = 0;
  local_20 = param_1;
  FArchive::SetIsSaving(local_b8,1);
  FArchive::SetIsPersistent(local_b8,1);
  FUN_1425da060(local_b8,param_2);
  FArchive::~FArchive(local_b8);
  return param_1;
}



// FUNCTION 140bf9670 FUN_140bf9670 body=22 status=ok
// SIG undefined FUN_140bf9670(void)

bool FUN_140bf9670(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FWeakObjectPtr::IsValid(param_2);
  return cVar1 == '\0';
}



// FUNCTION 140bf9690 FUN_140bf9690 body=8 status=ok
// SIG undefined FUN_140bf9690(void)

void FUN_140bf9690(undefined8 param_1,undefined8 param_2)

{
  FWeakObjectPtr::IsValid(param_2);
  return;
}



// FUNCTION 140bf96a0 FUN_140bf96a0 body=401 status=ok
// SIG undefined FUN_140bf96a0(void)

void FUN_140bf96a0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 local_res20 [8];
  undefined1 local_d8 [4];
  undefined1 local_d4 [4];
  undefined8 local_d0 [4];
  undefined1 local_b0 [8];
  undefined1 local_a8 [128];
  undefined1 *local_28;
  undefined8 local_20;
  
  cVar2 = FUN_14218fd10();
  if (cVar2 != '\0') {
    cVar2 = FUN_14218fd60(param_1);
    if (cVar2 == '\0') {
      lVar5 = FUN_142191860();
    }
    else {
      uVar3 = FUN_14218de50(*param_3);
      FUN_14217c550(local_res20,uVar3);
      uVar6 = icu_53::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::operator=(local_d8,local_res20)
      ;
      lVar5 = FUN_14218b3a0(param_1,uVar6);
      if (lVar5 == 0) {
        uVar6 = icu_53::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::operator=
                          (local_d4,local_res20);
        icu_53::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::operator=(local_b0,uVar6);
        local_28 = (undefined1 *)0x0;
        local_20 = 0;
        FUN_140c0ebb0(local_a8,0);
        FUN_14217e740(local_d0);
        FUN_142194380(local_d0,0x28,0,0,0);
        local_d0[0] = *param_3;
        iVar7 = local_20._4_4_;
        if (local_20._4_4_ < 1) {
          FUN_140a70170(local_a8,1);
          iVar7 = local_20._4_4_;
        }
        uVar1 = local_20;
        lVar5 = (longlong)(int)local_20;
        iVar4 = (int)local_20 + 1;
        local_20 = CONCAT44(local_20._4_4_,iVar4);
        if (iVar7 < iVar4) {
          TArray<FBlendedCurve,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                    (local_a8,uVar1 & 0xffffffff);
        }
        puVar8 = local_a8;
        if (local_28 != (undefined1 *)0x0) {
          puVar8 = local_28;
        }
        FUN_14217e5b0(puVar8 + lVar5 * 0x20,local_d0);
        FUN_14217f430(local_d0);
        lVar5 = FUN_1421912a0(param_1,local_b0);
      }
    }
    cVar2 = FUN_1407ce070(lVar5);
    if (cVar2 != '\0') {
      FUN_142182fa0(lVar5,param_2);
    }
  }
  return;
}



// FUNCTION 140bf9840 FUN_140bf9840 body=159 status=ok
// SIG undefined FUN_140bf9840(void)

undefined8 FUN_140bf9840(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  plVar5 = (longlong *)*param_1;
  plVar1 = plVar5 + (int)param_1[1];
  do {
    if (plVar5 == plVar1) {
      return 0;
    }
    if (*plVar5 != 0) {
      lVar2 = FUN_142f71d80();
      lVar6 = *plVar5;
      for (lVar4 = lVar6; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
        if (lVar4 == lVar2) goto LAB_140bf9890;
      }
    }
    lVar6 = 0;
LAB_140bf9890:
    if (*param_2 != 0) {
      lVar3 = FUN_142f71d80();
      lVar4 = *param_2;
      for (lVar2 = lVar4; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
        if (lVar2 == lVar3) goto LAB_140bf98b6;
      }
    }
    lVar4 = 0;
LAB_140bf98b6:
    if (lVar6 == lVar4) {
      return 1;
    }
    plVar5 = plVar5 + 1;
  } while( true );
}



// FUNCTION 140bf98e0 Emplace<FString_const_&,int_const_&> body=347 status=ok
// SIG undefined Emplace<FString_const_&,int_const_&>(void)

longlong TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>::
         Emplace<FString_const_&,int_const_&>
                   (longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  uint uVar2;
  undefined2 *puVar3;
  longlong *plVar4;
  int local_res8 [2];
  int local_28 [2];
  undefined8 *local_20;
  
  TSparseArray<TSetElement<TTuple<FName,FNameArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_28);
  FString::FString(local_20,param_2);
  *(undefined4 *)(local_20 + 2) = *param_3;
  *(undefined4 *)(local_20 + 3) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8);
    if (local_res8[0] != -1) {
      plVar4 = (longlong *)((longlong)local_res8[0] * 0x20 + *param_1);
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      ::_guard_xfg_dispatch_icall_nop(plVar4,local_20,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,local_28[0],1);
      goto LAB_140bf9a16;
    }
  }
  cVar1 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34));
  local_res8[0] = local_28[0];
  if (cVar1 == '\0') {
    if (*(int *)(local_20 + 1) == 0) {
      puVar3 = &DAT_143f3eda8;
    }
    else {
      puVar3 = (undefined2 *)*local_20;
    }
    uVar2 = FUN_140438070(puVar3);
    uVar2 = (int)param_1[9] - 1U & uVar2;
    *(uint *)((longlong)local_20 + 0x1c) = uVar2;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(undefined4 *)(local_20 + 3) =
         *(undefined4 *)
          ((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar2) * 4);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar2) * 4) =
         local_28[0];
  }
LAB_140bf9a16:
  return *param_1 + 0x10 + (longlong)local_res8[0] * 0x20;
}



// FUNCTION 140bf9a40 Emplace<TPairInitializer<FString_&&,int_&&>_> body=388 status=ok
// SIG undefined Emplace<TPairInitializer<FString_&&,int_&&>_>(void)

int * TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<FString_&&,int_&&>_>
                (longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  uint uVar5;
  undefined2 *puVar6;
  longlong *plVar7;
  bool bVar8;
  int local_res8 [2];
  int local_38 [2];
  undefined8 *local_30;
  
  TSparseArray<TSetElement<TTuple<FName,FNameArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  puVar2 = (undefined8 *)*param_3;
  puVar3 = (undefined4 *)param_3[1];
  bVar8 = false;
  *param_2 = local_38[0];
  *local_30 = 0;
  *local_30 = *puVar2;
  *puVar2 = 0;
  *(undefined4 *)(local_30 + 1) = *(undefined4 *)(puVar2 + 1);
  *(undefined4 *)((longlong)local_30 + 0xc) = *(undefined4 *)((longlong)puVar2 + 0xc);
  puVar2[1] = 0;
  *(undefined4 *)(local_30 + 2) = *puVar3;
  *(undefined4 *)(local_30 + 3) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,local_30);
    bVar8 = local_res8[0] != -1;
    if (bVar8) {
      plVar7 = (longlong *)((longlong)local_res8[0] * 0x20 + *param_1);
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      ::_guard_xfg_dispatch_icall_nop(plVar7,local_30,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_140bf9ba1;
    }
  }
  cVar4 = ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar4 == '\0') {
    iVar1 = *param_2;
    if (*(int *)(local_30 + 1) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = (undefined2 *)*local_30;
    }
    uVar5 = FUN_140438070(puVar6);
    uVar5 = (int)param_1[9] - 1U & uVar5;
    *(uint *)((longlong)local_30 + 0x1c) = uVar5;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 3) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) = iVar1
    ;
  }
LAB_140bf9ba1:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar8;
  }
  return param_2;
}



// FUNCTION 140bf9bd0 FUN_140bf9bd0 body=223 status=ok
// SIG undefined FUN_140bf9bd0(void)

longlong FUN_140bf9bd0(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 local_res8 [8];
  undefined2 *local_18;
  int local_10;
  
  lVar7 = *param_1;
  lVar6 = (longlong)(int)param_1[1] * 0x78 + lVar7;
  while( true ) {
    if (lVar7 == lVar6) {
      return 0;
    }
    plVar2 = (longlong *)FUN_140d3b5a0(lVar7,local_res8);
    plVar2 = (longlong *)*plVar2;
    if (plVar2 == (longlong *)0x0) {
      lVar3 = 0;
    }
    else {
      lVar3 = plVar2[0x1f];
      if (lVar3 == 0) {
        (**(code **)(*plVar2 + 0x368))(plVar2);
        lVar3 = plVar2[0x1f];
      }
    }
    FUN_142f59860(lVar3,&local_18);
    if (*(int *)(param_2 + 0x18) == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = *(undefined2 **)(param_2 + 0x10);
    }
    puVar4 = &DAT_143f3eda8;
    if (local_10 != 0) {
      puVar4 = local_18;
    }
    iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,puVar5);
    if (local_18 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (iVar1 == 0) break;
    lVar7 = lVar7 + 0x78;
  }
  return lVar7;
}



// FUNCTION 140bf9cb0 FUN_140bf9cb0 body=543 status=ok
// SIG undefined FUN_140bf9cb0(void)

undefined8 * FUN_140bf9cb0(longlong *param_1,undefined8 param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int *piVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 local_a8;
  longlong local_a0;
  undefined1 local_98;
  void *local_90;
  int local_88;
  undefined4 local_84;
  undefined8 local_80;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  undefined1 local_58;
  undefined1 local_50 [8];
  undefined8 local_48;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined8 local_38;
  longlong local_30;
  
  puVar11 = (undefined8 *)*param_1;
  puVar9 = puVar11 + (longlong)(int)param_1[1] * 0x10;
  if (puVar11 != puVar9) {
    piVar8 = (int *)(puVar11 + 7);
    lVar10 = 0;
    do {
      local_a8 = *puVar11;
      local_88 = piVar8[-6];
      lVar6 = (longlong)local_88;
      pvVar1 = *(void **)(piVar8 + -8);
      local_a0 = *(longlong *)(piVar8 + -0xc);
      local_98 = (undefined1)piVar8[-10];
      local_90 = (void *)0x0;
      if (local_88 == 0) {
        local_84 = 0;
      }
      else {
        TArray<int,FDefaultAllocator>::ResizeForCopy(&local_90,local_88,0);
        _guard_xfg_dispatch_icall_nop(local_90,pvVar1,lVar6 << 2);
      }
      local_70 = *piVar8;
      lVar6 = (longlong)local_70;
      local_80 = *(undefined8 *)(piVar8 + -4);
      pvVar1 = *(void **)(piVar8 + -2);
      local_78 = (void *)0x0;
      if (local_70 == 0) {
        local_6c = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_78,local_70,0);
        _guard_xfg_dispatch_icall_nop(local_78,pvVar1,lVar6 << 3);
      }
      local_60 = piVar8[4];
      lVar6 = (longlong)local_60;
      pvVar1 = *(void **)(piVar8 + 2);
      local_68 = (void *)0x0;
      if (local_60 == 0) {
        local_5c = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_68,local_60,0);
        _guard_xfg_dispatch_icall_nop(local_68,pvVar1,lVar6 << 3);
      }
      local_58 = (undefined1)piVar8[6];
      FWeakObjectPtr::operator=(local_50,0);
      local_48 = 0;
      uVar2 = FWeakObjectPtr::Get(piVar8 + 8);
      FUN_1405f0e70(local_50,uVar2);
      local_40 = (undefined1)piVar8[0xc];
      local_3f = *(undefined1 *)((longlong)piVar8 + 0x31);
      local_3e = *(undefined1 *)((longlong)piVar8 + 0x32);
      local_38 = *(undefined8 *)(piVar8 + 0xe);
      local_30 = *(longlong *)(piVar8 + 0x10);
      if (local_30 != 0) {
        LOCK();
        *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
        UNLOCK();
      }
      lVar6 = lVar10;
      if (local_a0 != 0) {
        lVar3 = FUN_142f71d80();
        for (lVar7 = local_a0; (lVar6 = lVar10, lVar7 != 0 && (lVar6 = local_a0, lVar7 != lVar3));
            lVar7 = *(longlong *)(lVar7 + 0x30)) {
        }
      }
      plVar4 = (longlong *)FUN_142f5af50(param_2);
      lVar7 = lVar10;
      if (*plVar4 != 0) {
        lVar5 = FUN_142f71d80();
        for (lVar3 = *plVar4; (lVar7 = lVar10, lVar3 != 0 && (lVar7 = *plVar4, lVar3 != lVar5));
            lVar3 = *(longlong *)(lVar3 + 0x30)) {
        }
      }
      FUN_140bff3b0(&local_a8);
      if (lVar6 == lVar7) {
        return puVar11;
      }
      puVar11 = puVar11 + 0x10;
      piVar8 = piVar8 + 0x20;
    } while (puVar11 != puVar9);
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140bf9ed0 FUN_140bf9ed0 body=188 status=ok
// SIG undefined FUN_140bf9ed0(void)

undefined8 FUN_140bf9ed0(undefined8 param_1,int param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 *puVar4;
  int *piVar5;
  undefined8 local_18;
  undefined8 local_10;
  
  if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
    plVar2 = (longlong *)param_3[8];
    if ((longlong *)param_3[8] == (longlong *)0x0) {
      plVar2 = param_3 + 7;
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)(int)param_3[9] - 1U & (longlong)param_2) * 4);
    if (iVar1 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar1 * 0x20 + *param_3);
        if (*piVar5 == param_2) {
          if (iVar1 != -1) goto LAB_140bf9f40;
          break;
        }
        iVar1 = piVar5[6];
      } while (iVar1 != -1);
    }
  }
  piVar5 = (int *)0x0;
LAB_140bf9f40:
  piVar3 = piVar5 + 2;
  if (piVar5 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  if (piVar3 == (int *)0x0) {
    local_18 = 0;
    puVar4 = &local_18;
    local_10 = 0;
  }
  else {
    puVar4 = (undefined8 *)FString::FString(&local_18,piVar3);
  }
  FSoftObjectPath::FSoftObjectPath(param_1,puVar4);
  return param_1;
}



// FUNCTION 140bf9f90 FUN_140bf9f90 body=570 status=ok
// SIG undefined FUN_140bf9f90(void)

void FUN_140bf9f90(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined1 local_res20 [8];
  undefined1 local_108 [16];
  undefined8 local_f8 [4];
  undefined8 local_d8 [4];
  undefined8 local_b8;
  undefined1 local_b0 [128];
  undefined1 *local_30;
  undefined8 local_28;
  
  cVar2 = FUN_14218fd60();
  if (cVar2 == '\0') {
    FUN_142191860();
  }
  else {
    uVar3 = FUN_14218de50(*param_2);
    iVar4 = FUN_14218de50(*param_3);
    uVar12 = iVar4 - uVar3 ^ uVar3 >> 0xd;
    uVar8 = (-0x61c88647 - uVar12) - uVar3 ^ uVar12 << 8;
    uVar9 = (uVar3 - uVar8) - uVar12 ^ uVar8 >> 0xd;
    uVar12 = (uVar12 - uVar8) - uVar9 ^ uVar9 >> 0xc;
    uVar3 = (uVar8 - uVar12) - uVar9 ^ uVar12 << 0x10;
    uVar8 = (uVar9 - uVar3) - uVar12 ^ uVar3 >> 5;
    uVar9 = (uVar12 - uVar3) - uVar8 ^ uVar8 >> 3;
    uVar3 = (uVar3 - uVar9) - uVar8 ^ uVar9 << 10;
    FUN_14217c550(local_res20,uVar3 >> 0xf ^ (uVar8 - uVar3) - uVar9);
    uVar5 = icu_53::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::operator=(local_108,local_res20);
    lVar6 = FUN_14218b3a0(param_1,uVar5);
    if (lVar6 == 0) {
      uVar5 = icu_53::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::operator=
                        (local_108,local_res20);
      icu_53::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::operator=(&local_b8,uVar5);
      local_30 = (undefined1 *)0x0;
      local_28 = 0;
      FUN_140c0ebb0(local_b0,0);
      FUN_14217e740(local_f8);
      FUN_142194380(local_f8,0x28,0,0,0);
      local_f8[0] = *param_2;
      FUN_14217e740(local_d8);
      FUN_142194380(local_d8,0x28,0,0,0);
      local_d8[0] = *param_3;
      lVar6 = 2;
      if (local_28._4_4_ < 2) {
        FUN_140a70170(local_b0,2);
      }
      puVar11 = local_f8;
      do {
        uVar1 = local_28;
        lVar10 = (longlong)(int)local_28;
        iVar4 = (int)local_28 + 1;
        local_28 = CONCAT44(local_28._4_4_,iVar4);
        if (local_28._4_4_ < iVar4) {
          TArray<FBlendedCurve,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                    (local_b0,uVar1 & 0xffffffff);
        }
        puVar7 = local_b0;
        if (local_30 != (undefined1 *)0x0) {
          puVar7 = local_30;
        }
        FUN_14217e5b0(puVar7 + lVar10 * 0x20,puVar11);
        puVar11 = puVar11 + 4;
      } while (puVar11 != &local_b8);
      puVar11 = &local_b8;
      do {
        puVar11 = puVar11 + -4;
        FUN_14217f430(puVar11);
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      FUN_1421912a0(param_1,&local_b8);
    }
  }
  return;
}



// FUNCTION 140bfa1d0 FUN_140bfa1d0 body=112 status=ok
// SIG undefined FUN_140bfa1d0(void)

longlong FUN_140bfa1d0(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  if ((short)param_1[3] != 0x28) {
    return 0;
  }
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar3 = FUN_1428dfc70();
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



// FUNCTION 140bfa240 FUN_140bfa240 body=266 status=ok
// SIG undefined FUN_140bfa240(void)

void FUN_140bfa240(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  undefined1 local_30 [40];
  
  cVar5 = FUN_1407ce070();
  if (cVar5 != '\0') {
    plVar1 = (longlong *)(param_1 + 0xa8);
    if (*(longlong *)*param_2 != 0) {
      cVar5 = FUN_1407ce010((longlong *)*param_2 + 1);
      if (cVar5 != '\0') {
        plVar6 = (longlong *)*plVar1;
        plVar2 = plVar6 + (longlong)*(int *)(param_1 + 0xb0) * 5;
        if (plVar6 != plVar2) {
          do {
            if ((*(longlong *)*plVar6 == *(longlong *)*param_2) &&
               (*(longlong *)(((longlong *)*plVar6)[1] + 0x28) ==
                *(longlong *)(((longlong *)*param_2)[1] + 0x28))) goto LAB_140bfa32c;
            plVar6 = plVar6 + 5;
          } while (plVar6 != plVar2);
        }
        lVar4 = *param_2;
        FUN_14217e610(local_30,*param_3);
        iVar3 = *(int *)(param_1 + 0xb0);
        *(int *)(param_1 + 0xb0) = iVar3 + 1;
        if (*(int *)(param_1 + 0xb4) < iVar3 + 1) {
          TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
        }
        plVar1 = (longlong *)(*plVar1 + (longlong)iVar3 * 0x28);
        *plVar1 = lVar4;
        FUN_14217e5b0(plVar1 + 1,local_30);
        FUN_14217f430(local_30);
      }
    }
LAB_140bfa32c:
    FUN_1421957f0(param_1);
  }
  return;
}



// FUNCTION 140bfa350 FUN_140bfa350 body=265 status=ok
// SIG undefined FUN_140bfa350(void)

void FUN_140bfa350(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  undefined1 local_30 [40];
  
  cVar5 = FUN_1407ce070();
  if (cVar5 != '\0') {
    plVar1 = (longlong *)(param_1 + 0xa8);
    if (*(longlong *)*param_2 != 0) {
      cVar5 = FUN_1407ce010((longlong *)*param_2 + 1);
      if (cVar5 != '\0') {
        plVar6 = (longlong *)*plVar1;
        plVar2 = plVar6 + (longlong)*(int *)(param_1 + 0xb0) * 5;
        if (plVar6 != plVar2) {
          do {
            if ((*(longlong *)*plVar6 == *(longlong *)*param_2) &&
               (*(longlong *)(((longlong *)*plVar6)[1] + 0x28) ==
                *(longlong *)(((longlong *)*param_2)[1] + 0x28))) goto LAB_140bfa43c;
            plVar6 = plVar6 + 5;
          } while (plVar6 != plVar2);
        }
        lVar4 = *param_2;
        FUN_14217e5b0(local_30,param_3);
        iVar3 = *(int *)(param_1 + 0xb0);
        *(int *)(param_1 + 0xb0) = iVar3 + 1;
        if (*(int *)(param_1 + 0xb4) < iVar3 + 1) {
          TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
        }
        plVar1 = (longlong *)(*plVar1 + (longlong)iVar3 * 0x28);
        *plVar1 = lVar4;
        FUN_14217e5b0(plVar1 + 1,local_30);
        FUN_14217f430(local_30);
      }
    }
LAB_140bfa43c:
    FUN_1421957f0(param_1);
  }
  return;
}



// FUNCTION 140bfa460 FUN_140bfa460 body=427 status=ok
// SIG undefined FUN_140bfa460(void)

int FUN_140bfa460(longlong *param_1)

{
  float *pfVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  byte bVar14;
  
  iVar2 = (int)param_1[1];
  lVar11 = (longlong)iVar2;
  if (iVar2 == 0) {
    return 0;
  }
  lVar8 = *param_1;
  uVar10 = 0;
  iVar13 = 0;
  uVar12 = uVar10;
  if ((((*(float *)(lVar8 + 4) <= 0.0 && *(float *)(lVar8 + 4) != 0.0) ||
       (*(longlong **)(lVar8 + 0x10) == (longlong *)0x0)) ||
      (cVar5 = (**(code **)(**(longlong **)(lVar8 + 0x10) + 0x20))(), cVar5 == '\0')) ||
     ((cVar5 = FWeakObjectPtr::IsValid(lVar8 + 0x38), cVar5 == '\0' &&
      (*(char *)(lVar8 + 0x34) == '\0')))) {
    bVar14 = 0;
  }
  else {
    bVar14 = 1;
  }
  do {
    iVar9 = (int)uVar10;
    uVar12 = uVar12 + 1;
    uVar10 = (ulonglong)(iVar9 + 1);
    if ((longlong)uVar12 < lVar11) {
      lVar8 = uVar12 * 0x40;
      do {
        lVar3 = *param_1;
        pfVar1 = (float *)(lVar8 + 4 + lVar3);
        if (((*pfVar1 <= 0.0 && *pfVar1 != 0.0) ||
            (plVar4 = *(longlong **)(lVar8 + 0x10 + lVar3), plVar4 == (longlong *)0x0)) ||
           ((cVar5 = (**(code **)(*plVar4 + 0x20))(), cVar5 == '\0' ||
            ((cVar5 = FWeakObjectPtr::IsValid(lVar3 + 0x38 + lVar8), cVar5 == '\0' &&
             (*(char *)(lVar8 + 0x34 + lVar3) == '\0')))))) {
          bVar6 = 0;
        }
        else {
          bVar6 = 1;
        }
        if (bVar14 != bVar6) break;
        uVar10 = (ulonglong)((int)uVar10 + 1);
        uVar12 = uVar12 + 1;
        lVar8 = lVar8 + 0x40;
      } while ((longlong)uVar12 < lVar11);
    }
    iVar7 = (int)uVar10 - iVar9;
    if (bVar14 == 0) {
      if (iVar7 != 0) {
        lVar8 = (longlong)iVar9 * 0x40 + 8 + *param_1;
        do {
          FUN_1404bf980(lVar8);
          lVar8 = lVar8 + 0x40;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
    else {
      if (iVar13 != iVar9) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar13 * 0x40 + *param_1),
                   (void *)((longlong)iVar9 * 0x40 + *param_1),(longlong)iVar7 << 6);
      }
      iVar13 = iVar13 + iVar7;
    }
    bVar14 = bVar14 ^ 1;
    if (lVar11 <= (longlong)uVar12) {
      *(int *)(param_1 + 1) = iVar13;
      return iVar2 - iVar13;
    }
  } while( true );
}



// FUNCTION 140bfa610 FUN_140bfa610 body=491 status=ok
// SIG undefined FUN_140bfa610(void)

int FUN_140bfa610(longlong *param_1,undefined8 param_2)

{
  float *pfVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  byte bVar14;
  
  iVar2 = (int)param_1[1];
  lVar13 = (longlong)iVar2;
  if (iVar2 == 0) {
    return 0;
  }
  lVar11 = *param_1;
  iVar7 = 0;
  cVar5 = FUniqueNetIdWrapper::operator==(lVar11 + 8);
  if (((((cVar5 != '\0') || (*(float *)(lVar11 + 4) <= 0.0 && *(float *)(lVar11 + 4) != 0.0)) ||
       (*(longlong **)(lVar11 + 0x10) == (longlong *)0x0)) ||
      (cVar5 = (**(code **)(**(longlong **)(lVar11 + 0x10) + 0x20))(), cVar5 == '\0')) ||
     ((cVar5 = FWeakObjectPtr::IsValid(lVar11 + 0x38), cVar5 == '\0' &&
      (*(char *)(lVar11 + 0x34) == '\0')))) {
    bVar14 = 0;
  }
  else {
    bVar14 = 1;
  }
  lVar11 = 0;
  iVar9 = 0;
  do {
    iVar10 = iVar9 + 1;
    lVar11 = lVar11 + 1;
    if (lVar11 < lVar13) {
      lVar8 = lVar11 * 0x40;
      do {
        lVar3 = *param_1;
        cVar5 = FUniqueNetIdWrapper::operator==(lVar3 + 8 + lVar8,param_2);
        if ((((cVar5 != '\0') ||
             (pfVar1 = (float *)(lVar8 + 4 + lVar3), *pfVar1 <= 0.0 && *pfVar1 != 0.0)) ||
            ((plVar4 = *(longlong **)(lVar8 + 0x10 + lVar3), plVar4 == (longlong *)0x0 ||
             (cVar5 = (**(code **)(*plVar4 + 0x20))(), cVar5 == '\0')))) ||
           ((cVar5 = FWeakObjectPtr::IsValid(lVar3 + 0x38 + lVar8), cVar5 == '\0' &&
            (*(char *)(lVar8 + 0x34 + lVar3) == '\0')))) {
          bVar6 = 0;
        }
        else {
          bVar6 = 1;
        }
        if (bVar14 != bVar6) break;
        iVar10 = iVar10 + 1;
        lVar11 = lVar11 + 1;
        lVar8 = lVar8 + 0x40;
      } while (lVar11 < lVar13);
    }
    iVar12 = iVar10 - iVar9;
    if (bVar14 == 0) {
      if (iVar12 != 0) {
        lVar8 = (longlong)iVar9 * 0x40 + 8 + *param_1;
        do {
          FUN_1404bf980(lVar8);
          lVar8 = lVar8 + 0x40;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
      }
    }
    else {
      if (iVar7 != iVar9) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar7 * 0x40 + *param_1),
                   (void *)((longlong)iVar9 * 0x40 + *param_1),(longlong)iVar12 << 6);
      }
      iVar7 = iVar7 + iVar12;
    }
    bVar14 = bVar14 ^ 1;
    iVar9 = iVar10;
    if (lVar13 <= lVar11) {
      *(int *)(param_1 + 1) = iVar7;
      return iVar2 - iVar7;
    }
  } while( true );
}



// FUNCTION 140bfa800 FUN_140bfa800 body=462 status=ok
// SIG undefined FUN_140bfa800(void)

int FUN_140bfa800(longlong *param_1,undefined8 *param_2)

{
  float *pfVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  bool bVar14;
  undefined4 local_60;
  undefined4 local_5c;
  
  iVar2 = (int)param_1[1];
  lVar8 = (longlong)iVar2;
  if (iVar2 == 0) {
    return 0;
  }
  uVar11 = 0;
  iVar13 = 0;
  cVar5 = FUN_140c01430(param_2,*param_1);
  bVar14 = cVar5 == '\0';
  uVar12 = uVar11;
  do {
    iVar10 = (int)uVar11;
    uVar11 = (ulonglong)(iVar10 + 1);
    uVar12 = uVar12 + 1;
    if ((longlong)uVar12 < lVar8) {
      lVar9 = uVar12 * 0x40;
      do {
        lVar3 = *param_1;
        local_60 = *(undefined4 *)(lVar9 + 0x38 + lVar3);
        local_5c = *(undefined4 *)(lVar9 + lVar3 + 0x3c);
        cVar5 = FUN_14058c1e0(&local_60,*param_2);
        if ((((cVar5 != '\0') ||
             (pfVar1 = (float *)(lVar9 + 4 + lVar3), *pfVar1 <= 0.0 && *pfVar1 != 0.0)) ||
            (plVar4 = *(longlong **)(lVar9 + 0x10 + lVar3), plVar4 == (longlong *)0x0)) ||
           ((cVar5 = (**(code **)(*plVar4 + 0x20))(), cVar5 == '\0' ||
            ((cVar5 = FWeakObjectPtr::IsValid(lVar9 + lVar3 + 0x38), cVar5 == '\0' &&
             (*(char *)(lVar9 + 0x34 + lVar3) == '\0')))))) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (bVar14 != bVar6) break;
        uVar11 = (ulonglong)((int)uVar11 + 1);
        uVar12 = uVar12 + 1;
        lVar9 = lVar9 + 0x40;
      } while ((longlong)uVar12 < lVar8);
    }
    iVar7 = (int)uVar11 - iVar10;
    if (bVar14 == false) {
      if (iVar7 != 0) {
        lVar9 = (longlong)iVar10 * 0x40 + 8 + *param_1;
        do {
          FUN_1404bf980(lVar9);
          lVar9 = lVar9 + 0x40;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
    else {
      if (iVar13 != iVar10) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar13 * 0x40 + *param_1),
                   (void *)((longlong)iVar10 * 0x40 + *param_1),(longlong)iVar7 << 6);
      }
      iVar13 = iVar13 + iVar7;
    }
    bVar14 = (bool)(bVar14 ^ 1);
    if (lVar8 <= (longlong)uVar12) {
      *(int *)(param_1 + 1) = iVar13;
      return iVar2 - iVar13;
    }
  } while( true );
}



// FUNCTION 140bfa9d0 FUN_140bfa9d0 body=342 status=ok
// SIG undefined FUN_140bfa9d0(void)

void FUN_140bfa9d0(longlong *param_1,longlong *param_2,undefined4 *param_3)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong local_38;
  longlong local_30 [5];
  
  if (*(longlong *)*param_2 != 0) {
    cVar2 = FUN_1407ce010((longlong *)*param_2 + 1);
    if (cVar2 != '\0') {
      plVar4 = (longlong *)*param_1;
      plVar3 = plVar4 + (longlong)(int)param_1[1] * 5;
      if (plVar4 != plVar3) {
        do {
          if ((*(longlong *)*plVar4 == *(longlong *)*param_2) &&
             (*(longlong *)(((longlong *)*plVar4)[1] + 0x28) ==
              *(longlong *)(((longlong *)*param_2)[1] + 0x28))) {
            FUN_14217e740(&local_38);
            FUN_142194380(&local_38,0xe,0,1,0);
            local_38 = CONCAT44(local_38._4_4_,*param_3);
            FUN_14217f450(plVar4 + 1,&local_38);
            plVar3 = &local_38;
            goto LAB_140bfaac9;
          }
          plVar4 = plVar4 + 5;
        } while (plVar4 != plVar3);
      }
      local_38 = *param_2;
      FUN_14217e740(local_30);
      FUN_142194380(local_30,0xe,0,1,0);
      local_30[0]._0_4_ = *param_3;
      iVar1 = (int)param_1[1];
      *(int *)(param_1 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
        TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
      }
      plVar3 = (longlong *)(*param_1 + (longlong)iVar1 * 0x28);
      *plVar3 = local_38;
      FUN_14217e5b0(plVar3 + 1,local_30);
      plVar3 = local_30;
LAB_140bfaac9:
      FUN_14217f430(plVar3);
    }
  }
  return;
}



// FUNCTION 140bfab30 FUN_140bfab30 body=342 status=ok
// SIG undefined FUN_140bfab30(void)

void FUN_140bfab30(longlong *param_1,longlong *param_2,undefined4 *param_3)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong local_38;
  undefined4 local_30 [10];
  
  if (*(longlong *)*param_2 != 0) {
    cVar2 = FUN_1407ce010((longlong *)*param_2 + 1);
    if (cVar2 != '\0') {
      plVar4 = (longlong *)*param_1;
      plVar3 = plVar4 + (longlong)(int)param_1[1] * 5;
      if (plVar4 != plVar3) {
        do {
          if ((*(longlong *)*plVar4 == *(longlong *)*param_2) &&
             (*(longlong *)(((longlong *)*plVar4)[1] + 0x28) ==
              *(longlong *)(((longlong *)*param_2)[1] + 0x28))) {
            FUN_14217e740(&local_38);
            FUN_142194380(&local_38,10,0,0,1);
            local_38 = CONCAT44(local_38._4_4_,*param_3);
            FUN_14217f450(plVar4 + 1,&local_38);
            plVar3 = &local_38;
            goto LAB_140bfac29;
          }
          plVar4 = plVar4 + 5;
        } while (plVar4 != plVar3);
      }
      local_38 = *param_2;
      FUN_14217e740(local_30);
      FUN_142194380(local_30,10,0,0,1);
      local_30[0] = *param_3;
      iVar1 = (int)param_1[1];
      *(int *)(param_1 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
        TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
      }
      plVar3 = (longlong *)(*param_1 + (longlong)iVar1 * 0x28);
      *plVar3 = local_38;
      FUN_14217e5b0(plVar3 + 1,local_30);
      plVar3 = (longlong *)local_30;
LAB_140bfac29:
      FUN_14217f430(plVar3);
    }
  }
  return;
}



// FUNCTION 140bfac90 FUN_140bfac90 body=344 status=ok
// SIG undefined FUN_140bfac90(void)

void FUN_140bfac90(longlong *param_1,longlong *param_2,undefined1 *param_3)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong local_38;
  longlong local_30 [5];
  
  if (*(longlong *)*param_2 != 0) {
    cVar2 = FUN_1407ce010((longlong *)*param_2 + 1);
    if (cVar2 != '\0') {
      plVar4 = (longlong *)*param_1;
      plVar3 = plVar4 + (longlong)(int)param_1[1] * 5;
      if (plVar4 != plVar3) {
        do {
          if ((*(longlong *)*plVar4 == *(longlong *)*param_2) &&
             (*(longlong *)(((longlong *)*plVar4)[1] + 0x28) ==
              *(longlong *)(((longlong *)*param_2)[1] + 0x28))) {
            FUN_14217e740(&local_38);
            FUN_142194380(&local_38,2,0,1,0);
            local_38 = CONCAT71(local_38._1_7_,*param_3);
            FUN_14217f450(plVar4 + 1,&local_38);
            plVar3 = &local_38;
            goto LAB_140bfad8a;
          }
          plVar4 = plVar4 + 5;
        } while (plVar4 != plVar3);
      }
      local_38 = *param_2;
      FUN_14217e740(local_30);
      FUN_142194380(local_30,2,0,1,0);
      local_30[0]._0_1_ = *param_3;
      iVar1 = (int)param_1[1];
      *(int *)(param_1 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
        TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
      }
      plVar3 = (longlong *)(*param_1 + (longlong)iVar1 * 0x28);
      *plVar3 = local_38;
      FUN_14217e5b0(plVar3 + 1,local_30);
      plVar3 = local_30;
LAB_140bfad8a:
      FUN_14217f430(plVar3);
    }
  }
  return;
}



// FUNCTION 140bfadf0 FUN_140bfadf0 body=342 status=ok
// SIG undefined FUN_140bfadf0(void)

void FUN_140bfadf0(longlong *param_1,longlong *param_2,undefined4 *param_3)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong local_38;
  longlong local_30 [5];
  
  if (*(longlong *)*param_2 != 0) {
    cVar2 = FUN_1407ce010((longlong *)*param_2 + 1);
    if (cVar2 != '\0') {
      plVar4 = (longlong *)*param_1;
      plVar3 = plVar4 + (longlong)(int)param_1[1] * 5;
      if (plVar4 != plVar3) {
        do {
          if ((*(longlong *)*plVar4 == *(longlong *)*param_2) &&
             (*(longlong *)(((longlong *)*plVar4)[1] + 0x28) ==
              *(longlong *)(((longlong *)*param_2)[1] + 0x28))) {
            FUN_14217e740(&local_38);
            FUN_142194380(&local_38,0x1f,0,1,0);
            local_38 = CONCAT44(local_38._4_4_,*param_3);
            FUN_14217f450(plVar4 + 1,&local_38);
            plVar3 = &local_38;
            goto LAB_140bfaee9;
          }
          plVar4 = plVar4 + 5;
        } while (plVar4 != plVar3);
      }
      local_38 = *param_2;
      FUN_14217e740(local_30);
      FUN_142194380(local_30,0x1f,0,1,0);
      local_30[0]._0_4_ = *param_3;
      iVar1 = (int)param_1[1];
      *(int *)(param_1 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
        TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
      }
      plVar3 = (longlong *)(*param_1 + (longlong)iVar1 * 0x28);
      *plVar3 = local_38;
      FUN_14217e5b0(plVar3 + 1,local_30);
      plVar3 = local_30;
LAB_140bfaee9:
      FUN_14217f430(plVar3);
    }
  }
  return;
}



// FUNCTION 140bfaf50 FUN_140bfaf50 body=349 status=ok
// SIG undefined FUN_140bfaf50(void)

void FUN_140bfaf50(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong local_38;
  longlong local_30 [5];
  
  if (*(longlong *)*param_2 != 0) {
    cVar2 = FUN_1407ce010((longlong *)*param_2 + 1);
    if (cVar2 != '\0') {
      plVar4 = (longlong *)*param_1;
      plVar3 = plVar4 + (longlong)(int)param_1[1] * 5;
      if (plVar4 != plVar3) {
        do {
          if ((*(longlong *)*plVar4 == *(longlong *)*param_2) &&
             (*(longlong *)(((longlong *)*plVar4)[1] + 0x28) ==
              *(longlong *)(((longlong *)*param_2)[1] + 0x28))) {
            FUN_14217e740(&local_38);
            FUN_142194380(&local_38,8,0,0,1);
            local_38 = *param_3;
            FUN_14217f450(plVar4 + 1,&local_38);
            plVar3 = &local_38;
            goto LAB_140bfb04d;
          }
          plVar4 = plVar4 + 5;
        } while (plVar4 != plVar3);
      }
      local_38 = *param_2;
      FUN_14217e740(local_30);
      FUN_142194380(local_30,8,0,0,1);
      iVar1 = (int)param_1[1];
      local_30[0] = *param_3;
      *(int *)(param_1 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
        TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
      }
      plVar3 = (longlong *)(*param_1 + (longlong)iVar1 * 0x28);
      *plVar3 = local_38;
      FUN_14217e5b0(plVar3 + 1,local_30);
      plVar3 = local_30;
LAB_140bfb04d:
      FUN_14217f430(plVar3);
    }
  }
  return;
}



// FUNCTION 140bfb0b0 FUN_140bfb0b0 body=274 status=ok
// SIG undefined FUN_140bfb0b0(void)

void FUN_140bfb0b0(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong local_38;
  longlong local_30 [5];
  
  if (*(longlong *)*param_2 != 0) {
    cVar2 = FUN_1407ce010((longlong *)*param_2 + 1);
    if (cVar2 != '\0') {
      plVar5 = (longlong *)*param_1;
      plVar4 = plVar5 + (longlong)(int)param_1[1] * 5;
      if (plVar5 != plVar4) {
        do {
          if ((*(longlong *)*plVar5 == *(longlong *)*param_2) &&
             (*(longlong *)(((longlong *)*plVar5)[1] + 0x28) ==
              *(longlong *)(((longlong *)*param_2)[1] + 0x28))) {
            uVar3 = FUN_14217e610(&local_38,*param_3);
            FUN_14217f450(plVar5 + 1,uVar3);
            plVar4 = &local_38;
            goto LAB_140bfb187;
          }
          plVar5 = plVar5 + 5;
        } while (plVar5 != plVar4);
      }
      local_38 = *param_2;
      FUN_14217e610(local_30,*param_3);
      iVar1 = (int)param_1[1];
      *(int *)(param_1 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
        TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
      }
      plVar4 = (longlong *)(*param_1 + (longlong)iVar1 * 0x28);
      *plVar4 = local_38;
      FUN_14217e5b0(plVar4 + 1,local_30);
      plVar4 = local_30;
LAB_140bfb187:
      FUN_14217f430(plVar4);
    }
  }
  return;
}



// FUNCTION 140bfb1d0 FUN_140bfb1d0 body=299 status=ok
// SIG undefined FUN_140bfb1d0(void)

void FUN_140bfb1d0(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong local_38;
  longlong local_30 [5];
  
  if (*(longlong *)*param_2 != 0) {
    cVar2 = FUN_1407ce010((longlong *)*param_2 + 1);
    if (cVar2 != '\0') {
      plVar4 = (longlong *)*param_1;
      plVar3 = plVar4 + (longlong)(int)param_1[1] * 5;
      if (plVar4 != plVar3) {
        do {
          if ((*(longlong *)*plVar4 == *(longlong *)*param_2) &&
             (*(longlong *)(((longlong *)*plVar4)[1] + 0x28) ==
              *(longlong *)(((longlong *)*param_2)[1] + 0x28))) {
            FUN_14217e740(&local_38);
            FUN_140643170(&local_38,param_3);
            FUN_14217f450(plVar4 + 1,&local_38);
            plVar3 = &local_38;
            goto LAB_140bfb2b5;
          }
          plVar4 = plVar4 + 5;
        } while (plVar4 != plVar3);
      }
      local_38 = *param_2;
      FUN_14217e740(local_30);
      FUN_140643170(local_30,param_3);
      iVar1 = (int)param_1[1];
      *(int *)(param_1 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
        TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
      }
      plVar3 = (longlong *)(*param_1 + (longlong)iVar1 * 0x28);
      *plVar3 = local_38;
      FUN_14217e5b0(plVar3 + 1,local_30);
      plVar3 = local_30;
LAB_140bfb2b5:
      FUN_14217f430(plVar3);
    }
  }
  return;
}



// FUNCTION 140bfb300 FUN_140bfb300 body=273 status=ok
// SIG undefined FUN_140bfb300(void)

void FUN_140bfb300(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong local_38;
  longlong local_30 [5];
  
  if (*(longlong *)*param_2 != 0) {
    cVar2 = FUN_1407ce010((longlong *)*param_2 + 1);
    if (cVar2 != '\0') {
      plVar5 = (longlong *)*param_1;
      plVar4 = plVar5 + (longlong)(int)param_1[1] * 5;
      if (plVar5 != plVar4) {
        do {
          if ((*(longlong *)*plVar5 == *(longlong *)*param_2) &&
             (*(longlong *)(((longlong *)*plVar5)[1] + 0x28) ==
              *(longlong *)(((longlong *)*param_2)[1] + 0x28))) {
            uVar3 = FUN_14217e5b0(&local_38,param_3);
            FUN_14217f450(plVar5 + 1,uVar3);
            plVar4 = &local_38;
            goto LAB_140bfb3d7;
          }
          plVar5 = plVar5 + 5;
        } while (plVar5 != plVar4);
      }
      local_38 = *param_2;
      FUN_14217e5b0(local_30,param_3);
      iVar1 = (int)param_1[1];
      *(int *)(param_1 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
        TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
      }
      plVar4 = (longlong *)(*param_1 + (longlong)iVar1 * 0x28);
      *plVar4 = local_38;
      FUN_14217e5b0(plVar4 + 1,local_30);
      plVar4 = local_30;
LAB_140bfb3d7:
      FUN_14217f430(plVar4);
    }
  }
  return;
}



// FUNCTION 140bfb420 FUN_140bfb420 body=266 status=ok
// SIG undefined FUN_140bfb420(void)

undefined8 * FUN_140bfb420(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_142d791e0();
  *param_1 = &PTR_FUN_144333768;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 2;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 2;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 2;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 2;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 2;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 2;
  uVar1 = FUN_1413f82e0();
  param_1[0x92] = uVar1;
  uVar1 = FUN_14145f370();
  param_1[0x8f] = uVar1;
  uVar1 = FUN_14142a560();
  param_1[0x91] = uVar1;
  uVar1 = FUN_141424d10();
  param_1[0x8e] = uVar1;
  uVar1 = UInputKeySelector::GetPrivateStaticClass();
  param_1[0x90] = uVar1;
  *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) | 1;
  *(undefined1 *)(param_1 + 0x9f) = 0;
  *(undefined1 *)(param_1 + 0xbd) = 1;
  return param_1;
}



// FUNCTION 140bfb530 FUN_140bfb530 body=215 status=ok
// SIG undefined FUN_140bfb530(void)

undefined8 * FUN_140bfb530(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_14178c940();
  FUN_14253de50(param_1,uVar1);
  uVar3 = (ulonglong)_tls_index;
  *param_1 = &PTR__scalar_deleting_destructor__1443353c0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar3 * 8) + 0x38) <
      DAT_14686b4b8) {
    _Init_thread_header(&DAT_14686b4b8);
    if (DAT_14686b4b8 == -1) {
      FName::FName(&DAT_14686b4b0,L"MissionObserver",1);
      _Init_thread_footer(&DAT_14686b4b8);
    }
  }
  uVar1 = DAT_14686b4b0;
  uVar2 = UBlindWidget::GetPrivateStaticClass();
  uVar1 = FUN_141752410(param_1,uVar1,uVar2,uVar2,1,0,0);
  param_1[0x8c] = uVar1;
  return param_1;
}



// FUNCTION 140bfb610 FUN_140bfb610 body=94 status=ok
// SIG undefined FUN_140bfb610(void)

undefined8 * FUN_140bfb610(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_14243ca00();
  *param_1 = &PTR_FUN_144335ab8;
  FWeakObjectPtr::operator=(param_1 + 0xa9,0);
  FWeakObjectPtr::operator=(param_1 + 0xaa,0);
  FWeakObjectPtr::operator=(param_1 + 0xab,0);
  uVar1 = UInputKeySelector::GetPrivateStaticClass();
  param_1[0x90] = uVar1;
  *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) | 1;
  return param_1;
}



// FUNCTION 140bfb670 FUN_140bfb670 body=249 status=ok
// SIG undefined FUN_140bfb670(void)

undefined8 * FUN_140bfb670(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_1443391d0;
  param_1[0x8b] = &PTR_LAB_1443398c8;
  FUN_140aecb80(param_1 + 0x8c);
  FText::FText(param_1 + 0x96);
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  uVar1 = FUN_1404b03b0();
  FText::FText(param_1 + 0x9c,uVar1);
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  *(undefined4 *)((longlong)param_1 + 0x52c) = 0;
  *(undefined4 *)(param_1 + 0xa5) = 0xffffffff;
  param_1[0xa7] = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x54a) = 1;
  *(undefined4 *)(param_1 + 0xab) = 1;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xb5] = 0;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) & 0xfb;
  *(byte *)((longlong)param_1 + 0x92) = *(byte *)((longlong)param_1 + 0x92) | 0x40;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) & 0xef;
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) & 0xbf;
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) | 1;
  *(undefined4 *)(param_1 + 0x29) = 0x40400000;
  *(undefined1 *)((longlong)param_1 + 0x129) = 4;
  return param_1;
}



// FUNCTION 140bfb770 FUN_140bfb770 body=615 status=ok
// SIG undefined FUN_140bfb770(void)

undefined8 * FUN_140bfb770(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 local_res8;
  
  uVar1 = FUN_14178c940();
  FUN_140e68da0(param_1,uVar1);
  *param_1 = &PTR__scalar_deleting_destructor__144339928;
  param_1[0x8b] = &PTR_LAB_14433a048;
  param_1[0xbd] = &PTR_LAB_14433a068;
  param_1[0xbe] = &PTR_LAB_14433a090;
  param_1[0xbf] = &PTR_LAB_14433a0d8;
  param_1[0xc6] = &PTR_LAB_14433a148;
  param_1[0xcb] = &PTR_LAB_14433a168;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  param_1[0xd0] = 0;
  *(undefined4 *)(param_1 + 0xd1) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x68c) = 0;
  param_1[0xcd] = &DAT_1441d2800;
  param_1[0xd2] = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  param_1[0xd6] = 0;
  *(undefined4 *)(param_1 + 0xd7) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x6bc) = 0;
  param_1[0xd3] = &DAT_1441d2800;
  param_1[0xd8] = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  *(undefined4 *)(param_1 + 0xdd) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x6ec) = 0;
  param_1[0xd9] = &DAT_1441d2800;
  param_1[0xde] = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x724) = 0;
  param_1[0xe0] = &DAT_1441d2800;
  param_1[0xe5] = 0;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  param_1[0xe9] = 0;
  param_1[0xed] = 0;
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x784) = 0;
  param_1[0xec] = &DAT_1441d2800;
  param_1[0xf1] = 0;
  param_1[0xf3] = 0;
  param_1[0xf4] = 0;
  param_1[0xf6] = 0;
  param_1[0xf7] = 0;
  param_1[0xf8] = 2;
  param_1[0xf9] = 0;
  param_1[0xfa] = 0;
  param_1[0xfb] = 2;
  param_1[0xfc] = 0;
  param_1[0xfd] = 0;
  param_1[0xfe] = 0;
  *(undefined1 *)(param_1 + 0xff) = 0;
  puVar2 = (undefined8 *)FName::FName(&local_res8,L"SpawnerIconComponent",1);
  uVar1 = *puVar2;
  uVar3 = FUN_141477cf0();
  uVar1 = FUN_141752410(param_1,uVar1,uVar3,uVar3,1,0,0);
  param_1[0xea] = uVar1;
  local_res8 = 0;
  FUN_142399e30(uVar1,param_1[0x2d],0);
  return param_1;
}



// FUNCTION 140bfb9e0 FUN_140bfb9e0 body=87 status=ok
// SIG undefined FUN_140bfb9e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140bfb9e0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_1443364b8;
  *(undefined4 *)(param_1 + 0x8b) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x45c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x8c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x464) = 0x3f800000;
  uVar1 = _DAT_1464aa6c8;
  param_1[0x8b] = _DAT_1464aa6c0;
  param_1[0x8c] = uVar1;
  return param_1;
}



// FUNCTION 140bfba40 FUN_140bfba40 body=154 status=ok
// SIG undefined FUN_140bfba40(void)

undefined8 * FUN_140bfba40(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  FUN_142815ed0();
  *(byte *)((longlong)param_1 + 0x92) = *(byte *)((longlong)param_1 + 0x92) | 0x40;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) | 0x10;
  *param_1 = &PTR__scalar_deleting_destructor__144336f78;
  *(undefined1 *)((longlong)param_1 + 0x95) = 1;
  *(undefined1 *)((longlong)param_1 + 0xcb) = 1;
  *(undefined1 *)(param_1[0x2d] + 0x24e) = 2;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"RotatingMovement",1);
  uVar3 = *puVar1;
  uVar2 = UEnvQueryTest_Cover::StaticClass();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8d] = uVar3;
  return param_1;
}



// FUNCTION 140bfbae0 FUN_140bfbae0 body=370 status=ok
// SIG undefined FUN_140bfbae0(void)

undefined8 * FUN_140bfbae0(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  FUN_14221fbd0();
  uVar5 = (ulonglong)_tls_index;
  *param_1 = &PTR__scalar_deleting_destructor__144337668;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar5 * 8) + 0x38) <
      DAT_14686bbe8) {
    _Init_thread_header(&DAT_14686bbe8);
    if (DAT_14686bbe8 == -1) {
      FName::FName(&DAT_14686bbe0,L"SplatDecal",1);
      _Init_thread_footer(&DAT_14686bbe8);
    }
  }
  *(byte *)((longlong)param_1 + 0x92) = *(byte *)((longlong)param_1 + 0x92) | 0x40;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) | 1;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) & 0xfd;
  uVar1 = DAT_14686bbe0;
  uVar3 = FUN_142923000();
  lVar4 = FUN_141752410(param_1,uVar1,uVar3,uVar3,1,0,0);
  param_1[0x8c] = lVar4;
  *(undefined1 *)(lVar4 + 0x24e) = 2;
  *(undefined4 *)(param_1[0x8c] + 0x1f8) = 0xc2b40000;
  iVar2 = rand();
  *(float *)(param_1[0x8c] + 0x200) = (float)iVar2 * 0.010986663;
  lVar4 = param_1[0x8c];
  *(undefined8 *)(lVar4 + 0x70c) = 0x3f8000003f800000;
  *(undefined4 *)(lVar4 + 0x714) = 0x3f800000;
  *(undefined4 *)(param_1[0x8c] + 0x6f8) = 1;
  *(byte *)(param_1[0x8c] + 0x2ee) = *(byte *)(param_1[0x8c] + 0x2ee) | 1;
  param_1[0x2d] = param_1[0x8c];
  return param_1;
}



// FUNCTION 140bfbc60 FUN_140bfbc60 body=292 status=ok
// SIG undefined FUN_140bfbc60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140bfbc60(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  longlong *local_18;
  int local_10;
  
  if ((DAT_14686b198 == '\0') && (puVar2 = (undefined8 *)FUN_140c11e40(), puVar2 != &DAT_14686b158))
  {
    DAT_14686b158 = *puVar2;
    uRam000000014686b160 = puVar2[1];
    _DAT_14686b168 = puVar2[2];
    uRam000000014686b170 = puVar2[3];
    _DAT_14686b178 = *(undefined4 *)(puVar2 + 4);
    uRam000000014686b17c = *(undefined4 *)((longlong)puVar2 + 0x24);
    uRam000000014686b180 = *(undefined4 *)(puVar2 + 5);
    uRam000000014686b184 = *(undefined4 *)((longlong)puVar2 + 0x2c);
    _DAT_14686b188 = puVar2[6];
    uRam000000014686b190 = puVar2[7];
    DAT_14686b198 = '\x01';
  }
  uVar1 = DAT_14686b158;
  local_18 = (longlong *)0x0;
  plVar3 = (longlong *)FMemory::Realloc(0,0x20);
  local_10 = 2;
  local_18 = plVar3;
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_GetPoolName_14433a7f0;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[2] = lVar4;
  }
  FUN_142184b10(uVar1,local_res8,3,&local_18);
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
  return param_1;
}



// FUNCTION 140bfbd90 FUN_140bfbd90 body=659 status=ok
// SIG undefined FUN_140bfbd90(void)

undefined8 * FUN_140bfbd90(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *local_res8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  longlong local_68 [2];
  longlong local_58;
  longlong local_48;
  
  local_res8 = param_1;
  puVar1 = (undefined8 *)FName::FName(local_res10,L"Customization",1);
  uVar2 = FUN_14217c7e0(local_68,L"gbxtelemetry",L"Customizations",&DAT_14431a89c);
  FUN_14217c110(param_1,*puVar1,uVar2);
  if (local_48 != 0) {
    FMemory::Free();
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  FUN_14217bd20(param_1 + 1);
  FUN_14217bd20(param_1 + 2);
  FUN_14217bd20(param_1 + 3);
  FUN_14217bd20(param_1 + 4);
  FUN_14217bd20(param_1 + 5);
  FUN_14217bd20(param_1 + 6);
  FUN_14217bd20(param_1 + 7);
  uVar2 = *local_res8;
  puVar1 = (undefined8 *)FName::FName(local_res10,L"player_id",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar2,local_res18,*puVar1,0);
  puVar1 = local_res8;
  uVar2 = *local_res8;
  param_1[1] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"player_character_guid",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar3,0);
  uVar2 = *puVar1;
  param_1[2] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"player_explevel",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar3,0);
  uVar2 = *puVar1;
  param_1[3] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"player_guardian_rank",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar3,0);
  uVar2 = *puVar1;
  param_1[4] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"player_time_played",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar3,0);
  uVar2 = *puVar1;
  param_1[5] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"customization_slot",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar3,0);
  uVar2 = *puVar1;
  param_1[6] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"customization_name",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar3,0);
  param_1[7] = *puVar3;
  return puVar1;
}



// FUNCTION 140bfc030 FUN_140bfc030 body=1593 status=ok
// SIG undefined FUN_140bfc030(void)

undefined8 * FUN_140bfc030(undefined8 *param_1)

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
  puVar1 = (undefined8 *)FName::FName(local_res10,L"Lootables",1);
  uVar2 = FUN_14217c7e0(local_68,L"gbxtelemetry",L"Lootables",&DAT_14431a9bc);
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
  uVar2 = *puVar4;
  puVar1 = (undefined8 *)FName::FName(local_res10,L"player_id",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar2,local_res18,*puVar1,0);
  puVar1 = local_res8;
  puVar4[1] = *puVar3;
  uVar2 = *local_res8;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"player_character_guid",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar3,0);
  uVar2 = *puVar1;
  puVar4[2] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"player_explevel",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar3,0);
  uVar2 = *puVar1;
  puVar4[3] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"player_guardian_rank",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar3,0);
  uVar2 = *puVar1;
  puVar4[4] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"player_time_played",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar3,0);
  uVar2 = *puVar1;
  puVar4[5] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"lootable_id",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar3,0);
  uVar2 = *puVar1;
  puVar4[6] = *puVar3;
  puVar4 = (undefined8 *)FName::FName(&local_res8,L"lootable_loc",1);
  puVar4 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar4,0);
  uVar2 = *puVar1;
  puVar1[7] = *puVar4;
  puVar4 = (undefined8 *)FName::FName(&local_res8,L"lootable_1_id",1);
  puVar4 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar4,0);
  uVar2 = *puVar1;
  puVar1[8] = *puVar4;
  puVar4 = (undefined8 *)FName::FName(&local_res8,L"lootable_2_id",1);
  puVar4 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar4,0);
  uVar2 = *puVar1;
  puVar1[9] = *puVar4;
  puVar4 = (undefined8 *)FName::FName(&local_res8,L"lootable_3_id",1);
  puVar4 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar4,0);
  uVar2 = *puVar1;
  puVar1[10] = *puVar4;
  puVar4 = (undefined8 *)FName::FName(&local_res8,L"lootable_4_id",1);
  puVar4 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar4,0);
  uVar2 = *puVar1;
  puVar1[0xb] = *puVar4;
  puVar4 = (undefined8 *)FName::FName(&local_res8,L"lootable_5_id",1);
  puVar4 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar4,0);
  uVar2 = *puVar1;
  puVar1[0xc] = *puVar4;
  puVar4 = (undefined8 *)FName::FName(&local_res8,L"lootable_6_id",1);
  puVar4 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar4,0);
  uVar2 = *puVar1;
  puVar1[0xd] = *puVar4;
  puVar4 = (undefined8 *)FName::FName(&local_res8,L"lootable_7_id",1);
  puVar4 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar4,0);
  uVar2 = *puVar1;
  puVar1[0xe] = *puVar4;
  puVar4 = (undefined8 *)FName::FName(&local_res8,L"lootable_8_id",1);
  puVar4 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar4,0);
  uVar2 = *puVar1;
  puVar1[0xf] = *puVar4;
  puVar4 = (undefined8 *)FName::FName(&local_res8,L"lootable_1_desc",1);
  puVar4 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar4,0);
  uVar2 = *puVar1;
  puVar1[0x10] = *puVar4;
  puVar4 = (undefined8 *)FName::FName(&local_res8,L"lootable_2_desc",1);
  puVar4 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar4,0);
  uVar2 = *puVar1;
  puVar1[0x11] = *puVar4;
  puVar4 = (undefined8 *)FName::FName(&local_res8,L"lootable_3_desc",1);
  puVar4 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar4,0);
  uVar2 = *puVar1;
  puVar1[0x12] = *puVar4;
  puVar4 = (undefined8 *)FName::FName(&local_res8,L"lootable_4_desc",1);
  puVar4 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar4,0);
  uVar2 = *puVar1;
  puVar1[0x13] = *puVar4;
  puVar4 = (undefined8 *)FName::FName(&local_res8,L"lootable_5_desc",1);
  puVar4 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar4,0);
  uVar2 = *puVar1;
  puVar1[0x14] = *puVar4;
  puVar4 = (undefined8 *)FName::FName(&local_res8,L"lootable_6_desc",1);
  puVar4 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar4,0);
  uVar2 = *puVar1;
  puVar1[0x15] = *puVar4;
  puVar4 = (undefined8 *)FName::FName(&local_res8,L"lootable_7_desc",1);
  puVar4 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar4,0);
  uVar2 = *puVar1;
  puVar1[0x16] = *puVar4;
  puVar4 = (undefined8 *)FName::FName(&local_res8,L"lootable_8_desc",1);
  puVar4 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar4,0);
  puVar1[0x17] = *puVar4;
  return puVar1;
}



// FUNCTION 140bfc670 FUN_140bfc670 body=750 status=ok
// SIG undefined FUN_140bfc670(void)

undefined8 * FUN_140bfc670(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *local_res8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  
  local_res8 = param_1;
  FUN_14217c920();
  FUN_14217bd20(param_1 + 1);
  FUN_14217bd20(param_1 + 2);
  FUN_14217bd20(param_1 + 3);
  FUN_14217bd20(param_1 + 4);
  FUN_14217bd20(param_1 + 5);
  FUN_14217bd20(param_1 + 6);
  FUN_14217bd20(param_1 + 7);
  FUN_14217bd20(param_1 + 8);
  FUN_14217bd20(param_1 + 9);
  FUN_14217bd20(param_1 + 10);
  FUN_14217bd20(param_1 + 0xb);
  uVar1 = *param_1;
  puVar2 = (undefined8 *)FName::FName(local_res10,L"unit_health",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar1,local_res18,*puVar2,0);
  puVar2 = local_res8;
  param_1[1] = *puVar3;
  uVar1 = *local_res8;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"unit_shield",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar1,local_res10,*puVar3,0);
  uVar1 = *puVar2;
  param_1[2] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"damage_health",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar1,local_res10,*puVar3,0);
  uVar1 = *puVar2;
  param_1[3] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"damage_shield",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar1,local_res10,*puVar3,0);
  uVar1 = *puVar2;
  param_1[4] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"damage_crit",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar1,local_res10,*puVar3,0);
  uVar1 = *puVar2;
  param_1[5] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"damage_aoe",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar1,local_res10,*puVar3,0);
  uVar1 = *puVar2;
  param_1[6] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"damage_eff_level_diff",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar1,local_res10,*puVar3,0);
  uVar1 = *puVar2;
  param_1[7] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"damage_type",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar1,local_res10,*puVar3,0);
  uVar1 = *puVar2;
  puVar2[8] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"damage_source",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar1,local_res10,*puVar3,0);
  uVar1 = *puVar2;
  puVar2[9] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"damage_causer",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar1,local_res10,*puVar3,0);
  uVar1 = *puVar2;
  puVar2[10] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"damage_combatant_disposition",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar1,local_res10,*puVar3,0);
  puVar2[0xb] = *puVar3;
  return puVar2;
}



// FUNCTION 140bfc960 FUN_140bfc960 body=1676 status=ok
// SIG undefined FUN_140bfc960(void)

undefined8 * FUN_140bfc960(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *local_res8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  
  local_res8 = param_1;
  FUN_14217ca10();
  FUN_14217bd20(param_1 + 0xd);
  FUN_14217bd20(param_1 + 0xe);
  FUN_14217bd20(param_1 + 0xf);
  FUN_14217bd20(param_1 + 0x10);
  FUN_14217bd20(param_1 + 0x11);
  FUN_14217bd20(param_1 + 0x12);
  FUN_14217bd20(param_1 + 0x13);
  FUN_14217bd20(param_1 + 0x14);
  FUN_14217bd20(param_1 + 0x15);
  FUN_14217bd20(param_1 + 0x16);
  FUN_14217bd20(param_1 + 0x17);
  FUN_14217bd20(param_1 + 0x18);
  FUN_14217bd20(param_1 + 0x19);
  FUN_14217bd20(param_1 + 0x1a);
  FUN_14217bd20(param_1 + 0x1b);
  FUN_14217bd20(param_1 + 0x1c);
  FUN_14217bd20(param_1 + 0x1d);
  FUN_14217bd20(param_1 + 0x1e);
  FUN_14217bd20(param_1 + 0x1f);
  FUN_14217bd20(param_1 + 0x20);
  FUN_14217bd20(param_1 + 0x21);
  FUN_14217bd20(param_1 + 0x22);
  FUN_14217bd20(param_1 + 0x23);
  FUN_14217bd20(param_1 + 0x24);
  FUN_14217bd20(param_1 + 0x25);
  uVar1 = *param_1;
  puVar2 = (undefined8 *)FName::FName(local_res10,L"game_mission_tracked",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar1,local_res18,*puVar2,0);
  puVar2 = local_res8;
  param_1[0xd] = *puVar3;
  uVar1 = *local_res8;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"game_mission_plot",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar1,local_res10,*puVar3,0);
  uVar1 = *puVar2;
  param_1[0xe] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"game_mayhem_level",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar1,local_res10,*puVar3,0);
  uVar1 = *puVar2;
  param_1[0xf] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"player_pawn",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar1,local_res10,*puVar3,0);
  uVar1 = *puVar2;
  param_1[0x10] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"player_weapon",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar1,local_res10,*puVar3,0);
  uVar1 = *puVar2;
  param_1[0x11] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"player_time_played",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar1,local_res10,*puVar3,0);
  uVar1 = *puVar2;
  param_1[0x12] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"player_current_menu",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar1,local_res10,*puVar3,0);
  uVar1 = *puVar2;
  puVar2[0x13] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"player_character_guid",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar1,local_res10,*puVar3,0);
  uVar1 = *puVar2;
  puVar2[0x14] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"player_explevel",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar1,local_res10,*puVar3,0);
  uVar1 = *puVar2;
  puVar2[0x15] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"player_guardian_rank",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar1,local_res10,*puVar3,0);
  uVar1 = *puVar2;
  puVar2[0x16] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"player_difficulty_setting",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar1,local_res10,*puVar3,0);
  uVar1 = *puVar2;
  puVar2[0x17] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"crossplay_enabled",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar1,local_res10,*puVar3,0);
  uVar1 = *puVar2;
  puVar2[0x18] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"includes_crossplay_member",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar1,local_res10,*puVar3,0);
  uVar1 = *puVar2;
  puVar2[0x19] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"player_platform_friends",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar1,local_res10,*puVar3,0);
  uVar1 = *puVar2;
  puVar2[0x1a] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"player_shift_friends",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar1,local_res10,*puVar3,0);
  uVar1 = *puVar2;
  puVar2[0x1b] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"session_crossplay_players",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar1,local_res10,*puVar3,0);
  uVar1 = *puVar2;
  puVar2[0x1c] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"remote_player_friend_0",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar1,local_res10,*puVar3,0);
  uVar1 = *puVar2;
  puVar2[0x1d] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"remote_player_hardware_0",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar1,local_res10,*puVar3,0);
  uVar1 = *puVar2;
  puVar2[0x1e] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"remote_player_service_0",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar1,local_res10,*puVar3,0);
  uVar1 = *puVar2;
  puVar2[0x1f] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"remote_player_friend_1",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar1,local_res10,*puVar3,0);
  uVar1 = *puVar2;
  puVar2[0x20] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"remote_player_hardware_1",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar1,local_res10,*puVar3,0);
  uVar1 = *puVar2;
  puVar2[0x21] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"remote_player_service_1",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar1,local_res10,*puVar3,0);
  uVar1 = *puVar2;
  puVar2[0x22] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"remote_player_friend_2",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar1,local_res10,*puVar3,0);
  uVar1 = *puVar2;
  puVar2[0x23] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"remote_player_hardware_2",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar1,local_res10,*puVar3,0);
  uVar1 = *puVar2;
  puVar2[0x24] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"remote_player_service_2",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar1,local_res10,*puVar3,0);
  puVar2[0x25] = *puVar3;
  return puVar2;
}



// FUNCTION 140bfcff0 FUN_140bfcff0 body=567 status=ok
// SIG undefined FUN_140bfcff0(void)

undefined8 * FUN_140bfcff0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *local_res8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  
  local_res8 = param_1;
  FUN_14217ce50();
  FUN_14217bd20(param_1 + 1);
  FUN_14217bd20(param_1 + 2);
  FUN_14217bd20(param_1 + 3);
  FUN_14217bd20(param_1 + 4);
  FUN_14217bd20(param_1 + 5);
  FUN_14217bd20(param_1 + 6);
  FUN_14217bd20(param_1 + 7);
  FUN_14217bd20(param_1 + 8);
  uVar1 = *param_1;
  puVar2 = (undefined8 *)FName::FName(local_res10,L"game_host_player_id",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar1,local_res18,*puVar2,0);
  puVar2 = local_res8;
  param_1[1] = *puVar3;
  uVar1 = *local_res8;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"game_lead_player_id",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar1,local_res10,*puVar3,0);
  uVar1 = *puVar2;
  param_1[2] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"game_network_mode",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar1,local_res10,*puVar3,0);
  uVar1 = *puVar2;
  param_1[3] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"game_network_nattype",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar1,local_res10,*puVar3,0);
  uVar1 = *puVar2;
  param_1[4] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"game_balance_playthrough",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar1,local_res10,*puVar3,0);
  uVar1 = *puVar2;
  param_1[5] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"game_balance_expsynclevel",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar1,local_res10,*puVar3,0);
  uVar1 = *puVar2;
  param_1[6] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"game_balance_player_count",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar1,local_res10,*puVar3,0);
  uVar1 = *puVar2;
  param_1[7] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"game_balance_player_setting",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar1,local_res10,*puVar3,0);
  puVar2[8] = *puVar3;
  return puVar2;
}



// FUNCTION 140bfd230 FUN_140bfd230 body=567 status=ok
// SIG undefined FUN_140bfd230(void)

undefined8 * FUN_140bfd230(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *local_res8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  
  local_res8 = param_1;
  FUN_14217daf0();
  FUN_14217bd20(param_1 + 6);
  FUN_14217bd20(param_1 + 7);
  FUN_14217bd20(param_1 + 8);
  FUN_14217bd20(param_1 + 9);
  FUN_14217bd20(param_1 + 10);
  FUN_14217bd20(param_1 + 0xb);
  FUN_14217bd20(param_1 + 0xc);
  FUN_14217bd20(param_1 + 0xd);
  uVar1 = *param_1;
  puVar2 = (undefined8 *)FName::FName(local_res10,L"unit_health",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar1,local_res18,*puVar2,0);
  puVar2 = local_res8;
  param_1[6] = *puVar3;
  uVar1 = *local_res8;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"unit_health_max",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar1,local_res10,*puVar3,0);
  uVar1 = *puVar2;
  param_1[7] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"unit_shield",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar1,local_res10,*puVar3,0);
  uVar1 = *puVar2;
  param_1[8] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"unit_shield_max",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar1,local_res10,*puVar3,0);
  uVar1 = *puVar2;
  param_1[9] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"unit_gamestage",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar1,local_res10,*puVar3,0);
  uVar1 = *puVar2;
  param_1[10] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"unit_explevel",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar1,local_res10,*puVar3,0);
  uVar1 = *puVar2;
  param_1[0xb] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"unit_team_id",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar1,local_res10,*puVar3,0);
  uVar1 = *puVar2;
  param_1[0xc] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"unit_class",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar1,local_res10,*puVar3,0);
  puVar2[0xd] = *puVar3;
  return puVar2;
}



// FUNCTION 140bfd470 FUN_140bfd470 body=778 status=ok
// SIG undefined FUN_140bfd470(void)

undefined8 * FUN_140bfd470(undefined8 *param_1)

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
  puVar1 = (undefined8 *)FName::FName(local_res10,L"PlayerMovement",1);
  uVar2 = FUN_14217c7e0(local_68,L"gbxtelemetry",L"PlayerMovement",&DAT_14431a9f4);
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
  uVar2 = *puVar4;
  puVar1 = (undefined8 *)FName::FName(local_res10,L"player_id",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar2,local_res18,*puVar1,0);
  puVar1 = local_res8;
  puVar4[1] = *puVar3;
  uVar2 = *local_res8;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"player_character_guid",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar3,0);
  uVar2 = *puVar1;
  puVar4[2] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"is_sprinting",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar3,0);
  uVar2 = *puVar1;
  puVar4[3] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"is_ads",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar3,0);
  uVar2 = *puVar1;
  puVar4[4] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"is_in_vehicle",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar3,0);
  uVar2 = *puVar1;
  puVar4[5] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"start_slide",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar3,0);
  uVar2 = *puVar1;
  puVar4[6] = *puVar3;
  puVar4 = (undefined8 *)FName::FName(&local_res8,L"start_jump",1);
  puVar4 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar4,0);
  uVar2 = *puVar1;
  puVar1[7] = *puVar4;
  puVar4 = (undefined8 *)FName::FName(&local_res8,L"start_ground_pound",1);
  puVar4 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar4,0);
  uVar2 = *puVar1;
  puVar1[8] = *puVar4;
  puVar4 = (undefined8 *)FName::FName(&local_res8,L"start_crouch",1);
  puVar4 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar4,0);
  uVar2 = *puVar1;
  puVar1[9] = *puVar4;
  puVar4 = (undefined8 *)FName::FName(&local_res8,L"start_mantle",1);
  puVar4 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar4,0);
  puVar1[10] = *puVar4;
  return puVar1;
}



// FUNCTION 140bfd780 FUN_140bfd780 body=807 status=ok
// SIG undefined FUN_140bfd780(void)

undefined8 * FUN_140bfd780(undefined8 *param_1)

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
  puVar1 = (undefined8 *)FName::FName(local_res10,L"PlayerSkillProgression",1);
  uVar2 = FUN_14217c7e0(local_68,L"gbxtelemetry",L"PlayerSkillProgression",&DAT_14431a5dc);
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
  uVar2 = *puVar4;
  puVar1 = (undefined8 *)FName::FName(local_res10,L"player_id",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar2,local_res18,*puVar1,0);
  puVar1 = local_res8;
  puVar4[1] = *puVar3;
  uVar2 = *local_res8;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"player_character_guid",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar3,0);
  uVar2 = *puVar1;
  puVar4[2] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"player_explevel",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar3,0);
  uVar2 = *puVar1;
  puVar4[3] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"player_guardian_rank",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar3,0);
  uVar2 = *puVar1;
  puVar4[4] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"player_time_played",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar3,0);
  uVar2 = *puVar1;
  puVar4[5] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"skill_name",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar3,0);
  uVar2 = *puVar1;
  puVar4[6] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"skill_points",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar3,0);
  uVar2 = *puVar1;
  puVar4[7] = *puVar3;
  puVar4 = (undefined8 *)FName::FName(&local_res8,L"slot_name",1);
  puVar4 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar4,0);
  uVar2 = *puVar1;
  puVar1[8] = *puVar4;
  puVar4 = (undefined8 *)FName::FName(&local_res8,L"slotted_class",1);
  puVar4 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar4,0);
  puVar1[9] = *puVar4;
  return puVar1;
}



// FUNCTION 140bfdab0 FUN_140bfdab0 body=896 status=ok
// SIG undefined FUN_140bfdab0(void)

undefined8 * FUN_140bfdab0(undefined8 *param_1)

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
  puVar1 = (undefined8 *)FName::FName(local_res10,L"VendingInteraction",1);
  uVar2 = FUN_14217c7e0(local_68,L"gbxtelemetry",L"VendingInteraction",&DAT_14431aa1c);
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
  uVar2 = *puVar4;
  puVar1 = (undefined8 *)FName::FName(local_res10,L"player_id",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar2,local_res18,*puVar1,0);
  puVar1 = local_res8;
  puVar4[1] = *puVar3;
  uVar2 = *local_res8;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"player_character_guid",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar3,0);
  uVar2 = *puVar1;
  puVar4[2] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"vending_machine_id",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar3,0);
  uVar2 = *puVar1;
  puVar4[3] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"location",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar3,0);
  uVar2 = *puVar1;
  puVar4[4] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"interaction",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar3,0);
  uVar2 = *puVar1;
  puVar4[5] = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"sell_interaction",1);
  puVar3 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar3,0);
  uVar2 = *puVar1;
  puVar4[6] = *puVar3;
  puVar4 = (undefined8 *)FName::FName(&local_res8,L"buy_interaction",1);
  puVar4 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar4,0);
  uVar2 = *puVar1;
  puVar1[7] = *puVar4;
  puVar4 = (undefined8 *)FName::FName(&local_res8,L"buyback_interaction",1);
  puVar4 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar4,0);
  uVar2 = *puVar1;
  puVar1[8] = *puVar4;
  puVar4 = (undefined8 *)FName::FName(&local_res8,L"sell_cash",1);
  puVar4 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar4,0);
  uVar2 = *puVar1;
  puVar1[9] = *puVar4;
  puVar4 = (undefined8 *)FName::FName(&local_res8,L"buy_cash",1);
  puVar4 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar4,0);
  uVar2 = *puVar1;
  puVar1[10] = *puVar4;
  puVar4 = (undefined8 *)FName::FName(&local_res8,L"buy_eridium",1);
  puVar4 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar4,0);
  uVar2 = *puVar1;
  puVar1[0xb] = *puVar4;
  puVar4 = (undefined8 *)FName::FName(&local_res8,L"buyback_cash",1);
  puVar4 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar4,0);
  puVar1[0xc] = *puVar4;
  return puVar1;
}



// FUNCTION 140bfde30 FUN_140bfde30 body=131 status=ok
// SIG undefined FUN_140bfde30(void)

longlong FUN_140bfde30(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  if (DAT_14686b260 == '\0') {
    uVar1 = FUN_140c12040();
    FUN_140bffb10(&DAT_14686b1a0,uVar1);
  }
  FUN_14217b920(param_1,L"lootable_classes",DAT_14686b1a0);
  local_res8[0] = 0;
  if (DAT_14686b260 == '\0') {
    uVar1 = FUN_140c12040();
    FUN_140bffb10(&DAT_14686b1a0,uVar1);
  }
  FUN_14217b9a0(param_1 + 8,L"emit_pickups",DAT_14686b1a0,local_res8);
  return param_1;
}



// FUNCTION 140bfdec0 FUN_140bfdec0 body=303 status=ok
// SIG undefined FUN_140bfdec0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140bfdec0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  longlong *local_18;
  int local_10;
  
  if ((DAT_14686b150 == '\0') && (puVar2 = (undefined8 *)FUN_140c123a0(), puVar2 != &DAT_14686b100))
  {
    DAT_14686b100 = *puVar2;
    _DAT_14686b108 = puVar2[1];
    _DAT_14686b110 = puVar2[2];
    _DAT_14686b118 = puVar2[3];
    _DAT_14686b120 = puVar2[4];
    _DAT_14686b128 = puVar2[5];
    _DAT_14686b130 = puVar2[6];
    _DAT_14686b138 = puVar2[7];
    _DAT_14686b140 = *(undefined4 *)(puVar2 + 8);
    uRam000000014686b144 = *(undefined4 *)((longlong)puVar2 + 0x44);
    _DAT_14686b148 = *(undefined4 *)(puVar2 + 9);
    uRam000000014686b14c = *(undefined4 *)((longlong)puVar2 + 0x4c);
    DAT_14686b150 = '\x01';
  }
  uVar1 = DAT_14686b100;
  local_18 = (longlong *)0x0;
  plVar3 = (longlong *)FMemory::Realloc(0,0x20);
  local_10 = 2;
  local_18 = plVar3;
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_GetPoolName_14433a7f0;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[2] = lVar4;
  }
  FUN_142184b10(uVar1,local_res8,3,&local_18);
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
  return param_1;
}



// FUNCTION 140bfdff0 FUN_140bfdff0 body=163 status=ok
// SIG undefined FUN_140bfdff0(void)

undefined4 * FUN_140bfdff0(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)((longlong)param_1 + 5) = *(undefined1 *)((longlong)param_2 + 5);
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  lVar1 = *(longlong *)(param_2 + 4);
  *(longlong *)(param_1 + 4) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  FText::FText(param_1 + 6,param_2 + 6);
  FText::FText(param_1 + 0xc,param_2 + 0xc);
  param_1[0x12] = param_2[0x12];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_2 + 0x16);
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  param_1[0x19] = param_2[0x19];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1b] = param_2[0x1b];
  param_1[0x1c] = param_2[0x1c];
  *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(param_2 + 0x1d);
  return param_1;
}



// FUNCTION 140bfe0a0 FUN_140bfe0a0 body=733 status=ok
// SIG undefined FUN_140bfe0a0(void)

undefined8 * FUN_140bfe0a0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  longlong *local_68;
  int local_60;
  longlong *local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong *local_38;
  
  FUN_141781840();
  uVar9 = 0;
  *param_1 = &PTR_FUN_144336ba0;
  param_1[5] = &PTR_LAB_144336e18;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  cVar3 = UObjectBaseUtility::IsTemplate(param_1,0x30);
  if (cVar3 != '\0') {
    return param_1;
  }
  FUN_140c136e0(&local_58,0);
  if (local_58 != (longlong *)0x0) {
    local_68 = (longlong *)0x0;
    local_48 = FUN_140c1f820;
    local_60 = 0;
    uStack_40 = 0;
    plVar4 = (longlong *)FMemory::Realloc(0,0x30,0);
    local_38 = plVar4;
    if (plVar4 == (longlong *)0x0) {
      if (((local_60 != 0) && (local_68 != (longlong *)0x0)) &&
         ((**(code **)(*local_68 + 0x28))(local_68,0), local_68 != (longlong *)0x0)) {
        local_68 = (longlong *)FMemory::Realloc(local_68,0,0);
      }
    }
    else {
      *plVar4 = (longlong)&PTR_FUN_1443188c0;
      FWeakObjectPtr::operator=(plVar4 + 1,param_1);
      *(undefined4 *)(plVar4 + 2) = (undefined4)local_48;
      *(undefined4 *)((longlong)plVar4 + 0x14) = local_48._4_4_;
      *(undefined4 *)(plVar4 + 3) = uStack_40;
      *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_3c;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar4[5] = lVar5;
      *plVar4 = (longlong)&PTR_FUN_144318908;
      FUN_140bac3d0(plVar4,&local_68);
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x28))(plVar4,0);
      local_38 = (longlong *)FMemory::Realloc(plVar4,0,0);
      if (local_38 != (longlong *)0x0) {
        FMemory::Free(local_38);
      }
    }
    puVar6 = (undefined8 *)(**(code **)(*local_58 + 0x40))(local_58,local_res18,&local_68);
    param_1[6] = *puVar6;
    if (local_60 != 0) {
      if (local_68 == (longlong *)0x0) goto LAB_140bfe24e;
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
LAB_140bfe24e:
  plVar4 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_50 + 1;
    lVar5 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  lVar5 = FUN_140c104a0(param_1);
  if (lVar5 != 0) {
    uStack_40 = 0;
    local_48 = FUN_140c20ea0;
    plVar4 = (longlong *)(lVar5 + 0x9a0);
    plVar7 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar7 != (longlong *)0x0) {
      *plVar7 = (longlong)&PTR_FUN_143fcfec0;
      FWeakObjectPtr::operator=(plVar7 + 1,param_1);
      *(undefined4 *)(plVar7 + 2) = (undefined4)local_48;
      *(undefined4 *)((longlong)plVar7 + 0x14) = local_48._4_4_;
      *(undefined4 *)(plVar7 + 3) = uStack_40;
      *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_3c;
      lVar8 = FDelegateHandle::GenerateNewID();
      plVar7[5] = lVar8;
      *plVar7 = (longlong)&PTR_FUN_143fcff08;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar4,1);
      puVar6 = (undefined8 *)(**(code **)(*plVar7 + 0x20))(plVar7,local_res20);
      iVar2 = *(int *)(lVar5 + 0x9a8);
      uVar9 = *puVar6;
      *(int *)(lVar5 + 0x9a8) = iVar2 + 1;
      if (*(int *)(lVar5 + 0x9ac) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar4,iVar2);
      }
      puVar6 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar4);
      *puVar6 = plVar7;
      *(undefined4 *)(puVar6 + 1) = 3;
    }
    param_1[7] = uVar9;
  }
  return param_1;
}



// FUNCTION 140bfe380 FUN_140bfe380 body=33 status=ok
// SIG undefined FUN_140bfe380(void)

undefined8 * FUN_140bfe380(undefined8 *param_1)

{
  FUN_142f4f160();
  *param_1 = &PTR__scalar_deleting_destructor__144337fd0;
  return param_1;
}



// FUNCTION 140bfe3b0 FUN_140bfe3b0 body=183 status=ok
// SIG undefined FUN_140bfe3b0(void)

undefined8 * FUN_140bfe3b0(undefined8 *param_1)

{
  FUN_142d7a970();
  *param_1 = &PTR_FUN_144334728;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0xc4)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x17,0);
  }
  if ((undefined2 *)param_1[0x17] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x17] = 0;
  }
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  return param_1;
}



// FUNCTION 140bfe470 FUN_140bfe470 body=491 status=ok
// SIG undefined FUN_140bfe470(void)

undefined8 * FUN_140bfe470(undefined8 *param_1)

{
  FUN_142f4f1c0();
  *param_1 = &PTR__scalar_deleting_destructor__1443344a0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  *(undefined4 *)(param_1 + 0x81) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x40c) = 0;
  param_1[0x83] = 0;
  *(undefined4 *)(param_1 + 0x85) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x42c)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x84,0);
  }
  if ((undefined2 *)param_1[0x84] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x84] = 0;
  }
  *(undefined4 *)(param_1 + 0x82) = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  *(undefined4 *)(param_1 + 0x86) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x434) = 0;
  param_1[0x88] = 0;
  *(undefined4 *)(param_1 + 0x8a) = 0;
  if ((*(int *)((longlong)param_1 + 0x454) < 0) && (*(int *)((longlong)param_1 + 0x454) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x89,0);
  }
  if ((undefined2 *)param_1[0x89] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x89] = 0;
  }
  *(undefined4 *)(param_1 + 0x87) = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  *(undefined4 *)(param_1 + 0x8b) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x45c) = 0;
  param_1[0x8d] = 0;
  *(undefined4 *)(param_1 + 0x8f) = 0;
  if ((*(int *)((longlong)param_1 + 0x47c) < 0) && (*(int *)((longlong)param_1 + 0x47c) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x8e,0);
  }
  if ((undefined2 *)param_1[0x8e] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x8e] = 0;
  }
  *(undefined4 *)(param_1 + 0x8c) = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x484) = 0;
  param_1[0x92] = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  if ((*(int *)((longlong)param_1 + 0x4a4) < 0) && (*(int *)((longlong)param_1 + 0x4a4) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x93,0);
  }
  if ((undefined2 *)param_1[0x93] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x93] = 0;
  }
  *(undefined4 *)(param_1 + 0x91) = 0;
  *(undefined1 *)(param_1 + 0x95) = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  *(undefined1 *)(param_1 + 0x98) = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  *(undefined1 *)((longlong)param_1 + 0x4e1) = 1;
  return param_1;
}



// FUNCTION 140bfe660 FUN_140bfe660 body=70 status=ok
// SIG undefined FUN_140bfe660(void)

undefined8 * FUN_140bfe660(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_140bfe470(param_1,uVar1);
  *param_1 = &PTR_FUN_1443384f8;
  FText::FText(param_1 + 0x9f);
  *(undefined1 *)(param_1 + 0x98) = 4;
  *(undefined1 *)(param_1 + 0x2f) = 1;
  return param_1;
}



// FUNCTION 140bfe6b0 FUN_140bfe6b0 body=58 status=ok
// SIG undefined FUN_140bfe6b0(void)

undefined8 * FUN_140bfe6b0(undefined8 *param_1)

{
  FUN_140b16fe0();
  *param_1 = &PTR_FUN_144338c90;
  param_1[5] = &PTR_LAB_1442a6120;
  param_1[0x2f] = &PTR_LAB_1442a6150;
  return param_1;
}



// FUNCTION 140bfe6f0 FUN_140bfe6f0 body=70 status=ok
// SIG undefined FUN_140bfe6f0(void)

undefined8 * FUN_140bfe6f0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_140bfe470(param_1,uVar1);
  *param_1 = &PTR_FUN_144338270;
  FText::FText(param_1 + 0x9f);
  *(undefined1 *)(param_1 + 0x98) = 3;
  *(undefined1 *)(param_1 + 0x2f) = 1;
  return param_1;
}



// FUNCTION 140bfe740 FUN_140bfe740 body=70 status=ok
// SIG undefined FUN_140bfe740(void)

undefined8 * FUN_140bfe740(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_140bfe470(param_1,uVar1);
  *param_1 = &PTR_FUN_144338780;
  FText::FText(param_1 + 0x9f);
  *(undefined1 *)(param_1 + 0x98) = 5;
  *(undefined1 *)(param_1 + 0x2f) = 1;
  return param_1;
}



// FUNCTION 140bfe790 FUN_140bfe790 body=81 status=ok
// SIG undefined FUN_140bfe790(void)

undefined8 * FUN_140bfe790(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_140bfe470(param_1,uVar1);
  param_1[0x9f] = 0;
  *param_1 = &PTR_FUN_144338a08;
  FText::FText(param_1 + 0xa0);
  *(undefined1 *)(param_1 + 0x98) = 6;
  *(undefined1 *)(param_1 + 0x2f) = 1;
  return param_1;
}



// FUNCTION 140bfe7f0 FUN_140bfe7f0 body=62 status=ok
// SIG undefined FUN_140bfe7f0(void)

undefined8 * FUN_140bfe7f0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_14237f6c0(param_1,uVar1);
  *(byte *)((longlong)param_1 + 0x24c) = *(byte *)((longlong)param_1 + 0x24c) & 0xdf;
  *param_1 = &PTR_FUN_14433a1c8;
  param_1[5] = &PTR_LAB_1442116d8;
  return param_1;
}



// FUNCTION 140bfe830 UGVideoSettingsWidget_obj body=127 status=ok
// SIG undefined UGVideoSettingsWidget_obj(void)

undefined8 *
g3::ui::settings::UGVideoSettingsWidget_obj::UGVideoSettingsWidget_obj(undefined8 *param_1)

{
  FUN_142d51dc0();
  *param_1 = &PTR__scalar_deleting_destructor__144334be0;
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
  return param_1;
}



// FUNCTION 140bfe8b0 FUN_140bfe8b0 body=46 status=ok
// SIG undefined FUN_140bfe8b0(void)

undefined8 * FUN_140bfe8b0(undefined8 *param_1)

{
  FUN_141781840();
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_143fcf3b0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  return param_1;
}



// FUNCTION 140bfe8e0 FUN_140bfe8e0 body=1053 status=ok
// SIG undefined FUN_140bfe8e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140bfe8e0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_28 [32];
  
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR_FUN_144335140;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x10c)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x20,0);
  }
  if ((undefined2 *)param_1[0x20] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x20] = 0;
  }
  uVar8 = uRam000000014686a96c;
  uVar6 = uRam000000014686a968;
  uVar4 = uRam000000014686a964;
  uVar9 = _DAT_14686a960;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  uVar3 = uRam000000014686a95c;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(uint *)((longlong)param_1 + 0x11c) = uVar3;
  uVar3 = uRam000000014686a954 & uVar4;
  uVar5 = uRam000000014686a958 & uVar6;
  uVar7 = uRam000000014686a95c & uVar8;
  *(uint *)(param_1 + 0x26) = _DAT_14686a950 & uVar9;
  *(uint *)((longlong)param_1 + 0x134) = uVar3;
  *(uint *)(param_1 + 0x27) = uVar5;
  *(uint *)((longlong)param_1 + 0x13c) = uVar7;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if ((*(int *)((longlong)param_1 + 0x164) < 0) && (*(int *)((longlong)param_1 + 0x164) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x2b,0);
    uVar9 = _DAT_14686a960;
    uVar4 = uRam000000014686a964;
    uVar6 = uRam000000014686a968;
    uVar8 = uRam000000014686a96c;
  }
  if ((undefined2 *)param_1[0x2b] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x2b] = 0;
  }
  *(undefined4 *)(param_1 + 0x29) = 0;
  uVar3 = uRam000000014686a95c;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *(uint *)((longlong)param_1 + 0x17c) = uVar3;
  uVar4 = uRam000000014686a954 & uVar4;
  uVar6 = uRam000000014686a958 & uVar6;
  uVar8 = uRam000000014686a95c & uVar8;
  *(uint *)(param_1 + 0x32) = _DAT_14686a950 & uVar9;
  *(uint *)((longlong)param_1 + 0x194) = uVar4;
  *(uint *)(param_1 + 0x33) = uVar6;
  *(uint *)((longlong)param_1 + 0x19c) = uVar8;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  if ((*(int *)((longlong)param_1 + 0x1c4) < 0) && (*(int *)((longlong)param_1 + 0x1c4) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x37,0);
  }
  if ((undefined2 *)param_1[0x37] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x37] = 0;
  }
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x21c) = 0;
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  if ((*(int *)((longlong)param_1 + 0x23c) < 0) && (*(int *)((longlong)param_1 + 0x23c) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x46,0);
  }
  if ((undefined2 *)param_1[0x46] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x46] = 0;
  }
  *(undefined4 *)(param_1 + 0x44) = 0;
  FText::FText(param_1 + 0x48);
  FText::FText(param_1 + 0x4b);
  FText::FText(param_1 + 0x52);
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x46842e00;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0xc3dc0000;
  *(undefined4 *)(param_1 + 0x25) = 0xc2af0000;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  local_34 = 0x431bf088;
  local_38 = 0;
  local_30 = 0;
  puVar2 = (undefined8 *)FRotator::Quaternion(&local_38,local_28);
  uVar1 = puVar2[1];
  param_1[0x22] = *puVar2;
  param_1[0x23] = uVar1;
  local_34 = 0x431b0000;
  *(undefined4 *)(param_1 + 0x30) = 0x46843000;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0xc3da0000;
  *(undefined4 *)(param_1 + 0x31) = 0xc0400000;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 0;
  local_38 = 0;
  local_30 = 0;
  puVar2 = (undefined8 *)FRotator::Quaternion(&local_38,local_28);
  uVar1 = puVar2[1];
  param_1[0x2e] = *puVar2;
  param_1[0x2f] = uVar1;
  return param_1;
}



// FUNCTION 140bfed00 FUN_140bfed00 body=74 status=ok
// SIG undefined FUN_140bfed00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140bfed00(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  UFontFaceInterface::UFontFaceInterface();
  *(undefined1 *)(param_1 + 6) = 1;
  *param_1 = &PTR_FUN_1443341a0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 8) = 0x41700000;
  *(undefined2 *)((longlong)param_1 + 0x44) = 0x101;
  uVar2 = _DAT_1464aa6c8;
  uVar1 = _DAT_1464aa6c0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((longlong)param_1 + 100) = 1;
  param_1[10] = uVar1;
  param_1[0xb] = uVar2;
  return param_1;
}



// FUNCTION 140bfed50 FUN_140bfed50 body=226 status=ok
// SIG undefined FUN_140bfed50(void)

undefined8 * FUN_140bfed50(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR_FUN_144337d50;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x11] = 0;
  *(uint *)((longlong)param_1 + 0x94) = *(uint *)((longlong)param_1 + 0x94) & 0xfffffffb | 3;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x3f000000;
  *(undefined4 *)(param_1 + 7) = 0x3f800000;
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xf1 | 0x21;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x42c80000;
  *(undefined4 *)(param_1 + 0xf) = 0x40800000;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x10) = 0x43480000;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0x12) = 0x3dcccccd;
  param_1[0x1b] = 0x3f000000;
  *(undefined4 *)(param_1 + 0x1c) = 0x433e0000;
  *(undefined4 *)(param_1 + 0x1e) = 0x40000000;
  return param_1;
}



// FUNCTION 140bfee40 FUN_140bfee40 body=109 status=ok
// SIG undefined FUN_140bfee40(void)

void FUN_140bfee40(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x20);
    do {
      if (plVar2[5] != 0) {
        FMemory::Free();
      }
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



// FUNCTION 140bfeeb0 FUN_140bfeeb0 body=285 status=ok
// SIG undefined FUN_140bfeeb0(void)

void FUN_140bfeeb0(longlong *param_1)

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
    plVar7 = (longlong *)(lVar5 + 0x20);
    do {
      plVar4 = (longlong *)plVar7[3];
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
      plVar4 = (longlong *)plVar7[-2];
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
      plVar7 = plVar7 + 0xf;
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



// FUNCTION 140bfefd0 ~TFunction_OwnedObject<`Audio::FMixerDevice::RegisterSubmixBufferListener'::`2'::<lambda_1>,1> body=134 status=ok
// SIG undefined ~TFunction_OwnedObject<`Audio::FMixerDevice::RegisterSubmixBufferListener'::`2'::<lambda_1>,1>(void)

void UE::Core::Private::Function::
     TFunction_OwnedObject<`Audio::FMixerDevice::RegisterSubmixBufferListener'::`2'::<lambda_1>,1>::
     ~TFunction_OwnedObject<_Audio::FMixerDevice::RegisterSubmixBufferListener_::_2_::<lambda_1>,1>
               (undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (param_1[4] != 0) {
    FMemory::Free();
  }
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
    *param_1 = IDelegateInstance::vftable;
    return;
  }
  *param_1 = IDelegateInstance::vftable;
  return;
}



// FUNCTION 140bff060 ~TSparseArray<TSetElement<TTuple<FString,TSharedSteamVRResource<vr::RenderModel_t>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=397 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<FString,TSharedSteamVRResource<vr::RenderModel_t>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<FString,TSharedSteamVRResource<vr::RenderModel_t>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<FString,TSharedSteamVRResource<vr::RenderModel_t>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

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
      if (bVar4) goto LAB_140bff121;
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
LAB_140bff121:
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
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
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



// FUNCTION 140bff1f0 FUN_140bff1f0 body=205 status=ok
// SIG undefined FUN_140bff1f0(void)

void FUN_140bff1f0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x560) != 0) {
    FMemory::Free();
  }
  FUN_140bff340(param_1 + 0x4e0);
  if (*(longlong *)(param_1 + 0x4c8) != 0) {
    FMemory::Free();
  }
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
  *(undefined ***)(param_1 + 0x460) = &PTR_FUN_144278ac0;
  if (*(longlong *)(param_1 + 0x4a0) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x460) = &PTR_FUN_1441d26b8;
  *(undefined ***)(param_1 + 0x458) = &PTR_FUN_1441b3948;
  FUN_1404571d0(param_1);
  return;
}



// FUNCTION 140bff2c0 FUN_140bff2c0 body=119 status=ok
// SIG undefined FUN_140bff2c0(void)

void FUN_140bff2c0(longlong param_1)

{
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x7c8);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x7b0);
  if (*(longlong *)(param_1 + 0x798) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x760) = &PTR_FUN_1441d26b8;
  *(undefined ***)(param_1 + 0x700) = &PTR_FUN_1441d26b8;
  *(undefined ***)(param_1 + 0x6c8) = &PTR_FUN_1441d26b8;
  *(undefined ***)(param_1 + 0x698) = &PTR_FUN_1441d26b8;
  *(undefined ***)(param_1 + 0x668) = &PTR_FUN_1441d26b8;
  *(undefined ***)(param_1 + 0x658) = &PTR_FUN_1441b3948;
  FUN_140e6b470(param_1);
  return;
}



// FUNCTION 140bff340 FUN_140bff340 body=109 status=ok
// SIG undefined FUN_140bff340(void)

void FUN_140bff340(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,TSharedSteamVRResource<vr::RenderModel_t>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,TSharedSteamVRResource<vr::RenderModel_t>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x18);
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



// FUNCTION 140bff3b0 FUN_140bff3b0 body=157 status=ok
// SIG undefined FUN_140bff3b0(void)

void FUN_140bff3b0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x78);
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
  FUN_1405f0e70(param_1 + 0x58,0,0);
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 140bff450 FUN_140bff450 body=197 status=ok
// SIG undefined FUN_140bff450(void)

void FUN_140bff450(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
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



// FUNCTION 140bff520 FUN_140bff520 body=99 status=ok
// SIG undefined FUN_140bff520(void)

void FUN_140bff520(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_1443349b0;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 3);
  plVar4 = (longlong *)param_1[2];
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



// FUNCTION 140bff590 FUN_140bff590 body=124 status=ok
// SIG undefined FUN_140bff590(void)

void FUN_140bff590(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
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
  return;
}



// FUNCTION 140bff610 FUN_140bff610 body=367 status=ok
// SIG undefined FUN_140bff610(void)

void FUN_140bff610(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  
  if (*(longlong *)(param_1 + 0x3f0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x3e0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x3b8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x378) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x350) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 800) != 0) {
    FMemory::Free();
  }
  FUN_140bff340(param_1 + 0x2a0);
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(param_1 + 0x268);
  if (*(longlong *)(param_1 + 0x230) != 0) {
    FMemory::Free();
  }
  iVar1 = *(int *)(param_1 + 0x228);
  plVar2 = *(longlong **)(param_1 + 0x220);
  if (iVar1 != 0) {
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 2;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    plVar2 = *(longlong **)(param_1 + 0x220);
  }
  if (plVar2 != (longlong *)0x0) {
    FMemory::Free(plVar2);
  }
  if (*(longlong *)(param_1 + 0x210) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x200) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x1a8) = &PTR_FUN_144278ac0;
  if (*(longlong *)(param_1 + 0x1e8) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x1a8) = &PTR_FUN_1441d26b8;
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(param_1 + 0x198);
  FUN_140bff340(param_1 + 0x108);
  FUN_140bff340(param_1 + 0xa0);
  FUN_140bff340(param_1 + 0x38);
  FUN_141782120(param_1);
  return;
}



// FUNCTION 140bff780 FUN_140bff780 body=119 status=ok
// SIG undefined FUN_140bff780(void)

void FUN_140bff780(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x4d0) != 0) {
    FMemory::Free();
  }
  FUN_140bfee40(param_1 + 0x4b0);
  if (*(longlong *)(param_1 + 0x498) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x470) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x448) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x420) != 0) {
    FMemory::Free();
  }
  FUN_140bff610(param_1);
  return;
}



// FUNCTION 140bff800 FUN_140bff800 body=772 status=ok
// SIG undefined FUN_140bff800(void)

void FUN_140bff800(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  
  FUN_1409f57b0(param_1 + 0x368);
  if (*(longlong *)(param_1 + 0x348) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x338) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x328) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x318) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x308) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2f8) != 0) {
    FMemory::Free();
  }
  TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>::
  ~TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>(param_1 + 0x2e8);
  TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>::
  ~TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>(param_1 + 0x2d8);
  if (*(longlong *)(param_1 + 0x2c8) != 0) {
    FMemory::Free();
  }
  TArray<FSaveGameUserSetting,FDefaultAllocator>::~TArray<FSaveGameUserSetting,FDefaultAllocator>
            (param_1 + 0x2b8);
  plVar5 = *(longlong **)(param_1 + 0x298);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  plVar5 = *(longlong **)(param_1 + 0x260);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  plVar5 = *(longlong **)(param_1 + 0x248);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  if (*(longlong *)(param_1 + 0x230) != 0) {
    FMemory::Free();
  }
  iVar4 = *(int *)(param_1 + 0x210);
  plVar5 = *(longlong **)(param_1 + 0x208);
  if (iVar4 != 0) {
    do {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    plVar5 = *(longlong **)(param_1 + 0x208);
  }
  if (plVar5 != (longlong *)0x0) {
    FMemory::Free(plVar5);
  }
  iVar4 = *(int *)(param_1 + 0x200);
  plVar5 = *(longlong **)(param_1 + 0x1f8);
  if (iVar4 != 0) {
    do {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    plVar5 = *(longlong **)(param_1 + 0x1f8);
  }
  if (plVar5 != (longlong *)0x0) {
    FMemory::Free(plVar5);
  }
  iVar4 = *(int *)(param_1 + 0x1f0);
  plVar5 = *(longlong **)(param_1 + 0x1e8);
  if (iVar4 != 0) {
    do {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    plVar5 = *(longlong **)(param_1 + 0x1e8);
  }
  if (plVar5 != (longlong *)0x0) {
    FMemory::Free(plVar5);
  }
  if (*(longlong *)(param_1 + 0x1d8) != 0) {
    FMemory::Free();
  }
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(param_1 + 0x1c8);
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x158) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x58);
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  return;
}



// FUNCTION 140bffb10 FUN_140bffb10 body=154 status=ok
// SIG undefined FUN_140bffb10(void)

undefined8 * FUN_140bffb10(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (param_2 != param_1) {
    if (*(char *)(param_1 + 0x18) != '\0') {
      *(undefined1 *)(param_1 + 0x18) = 0;
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
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  return param_1;
}



// FUNCTION 140bffbb0 FUN_140bffbb0 body=150 status=ok
// SIG undefined FUN_140bffbb0(void)

undefined8 * FUN_140bffbb0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (param_2 != param_1) {
    if (*(char *)(param_1 + 0x26) != '\0') {
      *(undefined1 *)(param_1 + 0x26) = 0;
    }
    lVar5 = 2;
    puVar2 = param_1;
    do {
      puVar4 = param_2;
      puVar3 = puVar2;
      uVar1 = puVar4[1];
      *puVar3 = *puVar4;
      puVar3[1] = uVar1;
      uVar1 = puVar4[3];
      puVar3[2] = puVar4[2];
      puVar3[3] = uVar1;
      uVar1 = puVar4[5];
      puVar3[4] = puVar4[4];
      puVar3[5] = uVar1;
      uVar1 = puVar4[7];
      puVar3[6] = puVar4[6];
      puVar3[7] = uVar1;
      uVar1 = puVar4[9];
      puVar3[8] = puVar4[8];
      puVar3[9] = uVar1;
      uVar1 = puVar4[0xb];
      puVar3[10] = puVar4[10];
      puVar3[0xb] = uVar1;
      uVar1 = puVar4[0xd];
      puVar3[0xc] = puVar4[0xc];
      puVar3[0xd] = uVar1;
      uVar1 = puVar4[0xf];
      puVar3[0xe] = puVar4[0xe];
      puVar3[0xf] = uVar1;
      lVar5 = lVar5 + -1;
      puVar2 = puVar3 + 0x10;
      param_2 = puVar4 + 0x10;
    } while (lVar5 != 0);
    uVar1 = puVar4[0x11];
    puVar3[0x10] = puVar4[0x10];
    puVar3[0x11] = uVar1;
    uVar1 = puVar4[0x13];
    puVar3[0x12] = puVar4[0x12];
    puVar3[0x13] = uVar1;
    uVar1 = puVar4[0x15];
    puVar3[0x14] = puVar4[0x14];
    puVar3[0x15] = uVar1;
    *(undefined1 *)(param_1 + 0x26) = 1;
  }
  return param_1;
}



// FUNCTION 140bffc50 FUN_140bffc50 body=78 status=ok
// SIG undefined FUN_140bffc50(void)

undefined8 * FUN_140bffc50(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (*(char *)(param_1 + 8) == '\0') {
    puVar2 = (undefined8 *)FUN_140c11e40();
    if (puVar2 != param_1) {
      if (*(char *)(param_1 + 8) != '\0') {
        *(undefined1 *)(param_1 + 8) = 0;
      }
      uVar1 = puVar2[1];
      *param_1 = *puVar2;
      param_1[1] = uVar1;
      uVar1 = puVar2[3];
      param_1[2] = puVar2[2];
      param_1[3] = uVar1;
      uVar1 = puVar2[5];
      param_1[4] = puVar2[4];
      param_1[5] = uVar1;
      uVar1 = puVar2[7];
      param_1[6] = puVar2[6];
      param_1[7] = uVar1;
      *(undefined1 *)(param_1 + 8) = 1;
    }
  }
  return param_1;
}



// FUNCTION 140bffca0 FUN_140bffca0 body=94 status=ok
// SIG undefined FUN_140bffca0(void)

undefined8 * FUN_140bffca0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (*(char *)(param_1 + 0xc) == '\0') {
    puVar2 = (undefined8 *)FUN_140c120b0();
    if (puVar2 != param_1) {
      if (*(char *)(param_1 + 0xc) != '\0') {
        *(undefined1 *)(param_1 + 0xc) = 0;
      }
      uVar1 = puVar2[1];
      *param_1 = *puVar2;
      param_1[1] = uVar1;
      uVar1 = puVar2[3];
      param_1[2] = puVar2[2];
      param_1[3] = uVar1;
      uVar1 = puVar2[5];
      param_1[4] = puVar2[4];
      param_1[5] = uVar1;
      uVar1 = puVar2[7];
      param_1[6] = puVar2[6];
      param_1[7] = uVar1;
      uVar1 = puVar2[9];
      param_1[8] = puVar2[8];
      param_1[9] = uVar1;
      uVar1 = puVar2[0xb];
      param_1[10] = puVar2[10];
      param_1[0xb] = uVar1;
      *(undefined1 *)(param_1 + 0xc) = 1;
    }
  }
  return param_1;
}



// FUNCTION 140bffd00 FUN_140bffd00 body=238 status=ok
// SIG undefined FUN_140bffd00(void)

void FUN_140bffd00(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 local_18;
  longlong *local_10;
  
  local_18 = *param_2;
  local_10 = (longlong *)param_2[1];
  if (local_10 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_10 + 1) = (int)local_10[1] + 1;
    UNLOCK();
  }
  lVar6 = FUN_140bbb190(param_1[1],&local_18);
  plVar4 = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_10)(local_10);
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
  if (lVar6 != 0) {
    uVar7 = FUN_140cfbfb0(lVar6);
    FUN_140c1e4c0(*param_1,param_2,uVar7);
  }
  plVar4 = (longlong *)param_2[1];
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



// FUNCTION 140bffdf0 FUN_140bffdf0 body=307 status=ok
// SIG undefined FUN_140bffdf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140bffdf0(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  local_a8 = &local_98;
  local_98 = 0;
  local_90 = 0;
  (**(code **)(**(longlong **)*param_1 + 0x28))(*(longlong **)*param_1,*param_2,param_1[1],0);
  local_a0 = &local_88;
  local_a8 = &local_78;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  (**(code **)(**(longlong **)*param_1 + 0x10))(*(longlong **)*param_1,*param_2,param_1[1],0);
  local_30 = 0;
  if (local_38 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_78);
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



// FUNCTION 140bfff30 FUN_140bfff30 body=138 status=ok
// SIG undefined FUN_140bfff30(void)

void FUN_140bfff30(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong local_18 [2];
  
  if ((*(short *)(param_4 + 0x18) == 0x28) && (lVar2 = FUN_1407ba9a0(param_4), lVar2 != 0)) {
    lVar3 = FUN_1430b3b80();
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
      uVar4 = FUN_140c16200(local_18,lVar2);
      FUN_140643170(param_2,uVar4);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140bfffc0 FUN_140bfffc0 body=235 status=ok
// SIG undefined FUN_140bfffc0(void)

undefined8 FUN_140bfffc0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong local_88 [2];
  undefined1 local_78 [32];
  longlong local_58;
  longlong local_48;
  longlong local_38;
  longlong local_28;
  
  FUN_14217e740(param_2);
  lVar2 = FUN_140c01370(param_1);
  if (lVar2 != 0) {
    _guard_xfg_dispatch_icall_nop(local_78,0,0x68);
    FUN_142ff3000(lVar2,local_78);
    local_88[0] = 0;
    local_88[1] = 0;
    cVar1 = FUN_142ff5c90(local_78,local_88,0);
    if (cVar1 != '\0') {
      FUN_140643170(param_2,local_88);
    }
    if (local_88[0] != 0) {
      FMemory::Free();
    }
    if (local_28 != 0) {
      FMemory::Free();
    }
    if (local_38 != 0) {
      FMemory::Free();
    }
    if (local_48 != 0) {
      FMemory::Free();
    }
    if (local_58 != 0) {
      FMemory::Free();
    }
  }
  return param_2;
}



// FUNCTION 140c000b0 FUN_140c000b0 body=324 status=ok
// SIG undefined FUN_140c000b0(void)

undefined8 FUN_140c000b0(int *param_1,undefined8 param_2,short *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 local_res18 [16];
  undefined2 *local_18;
  undefined8 local_10;
  
  if ((param_3 == (short *)0x0) || (*param_3 == 0)) {
    if (*param_1 == 0) {
      local_18 = (undefined2 *)0x0;
      local_10 = 7;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
      puVar3 = local_18;
      FGenericPlatformString::Memcpy(local_18,L"weapon",0xe);
      uVar1 = DAT_14686ba10;
      puVar4 = &DAT_143f3eda8;
      if ((int)local_10 != 0) {
        puVar4 = puVar3;
      }
      puVar2 = (undefined8 *)FName::FName(local_res18,puVar4,1);
      FUN_14218dc00(uVar1,param_2,*puVar2,0);
      if (puVar3 == (undefined2 *)0x0) {
        return param_2;
      }
      FMemory::Free(puVar3);
      return param_2;
    }
    FString::PrintfImpl(&local_18,L"weapon_%d");
  }
  else if (*param_1 == 0) {
    FString::PrintfImpl(&local_18,L"weapon_%s");
  }
  else {
    FString::PrintfImpl(&local_18,L"weapon_%s_%d");
  }
  uVar1 = DAT_14686ba10;
  puVar3 = &DAT_143f3eda8;
  if ((int)local_10 != 0) {
    puVar3 = local_18;
  }
  puVar2 = (undefined8 *)FName::FName(local_res18,puVar3,1);
  FUN_14218dc00(uVar1,param_2,*puVar2,0);
  if (local_18 == (undefined2 *)0x0) {
    return param_2;
  }
  FMemory::Free();
  return param_2;
}



// FUNCTION 140c00200 FUN_140c00200 body=299 status=ok
// SIG undefined FUN_140c00200(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140c00200(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  local_a8 = &local_98;
  local_98 = 0;
  local_90 = 0;
  (**(code **)(**(longlong **)*param_1 + 0x28))(*(longlong **)*param_1,*param_2,param_1[1],1);
  local_a8 = &local_88;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  (**(code **)(**(longlong **)*param_1 + 8))(*(longlong **)*param_1,*param_2,param_1[1],&local_78);
  local_30 = 0;
  if (local_38 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_78);
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



// FUNCTION 140c00330 FUN_140c00330 body=227 status=ok
// SIG undefined FUN_140c00330(void)

void FUN_140c00330(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong local_18 [2];
  
  if ((*(short *)(param_4 + 0x18) == 0x28) && (lVar2 = FUN_1407ba9a0(param_4), lVar2 != 0)) {
    lVar3 = FUN_142e49950();
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
      uVar4 = FUN_140c12c50(local_18,lVar2);
      FUN_140643170(param_2,uVar4);
      if (local_18[0] != 0) {
        FMemory::Free();
        return;
      }
    }
    else {
      lVar3 = UPlayFabProfilesAPI::GetPrivateStaticClass();
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
        FUN_140643170(param_2,lVar2 + 0x58);
      }
    }
  }
  return;
}



// FUNCTION 140c00420 FUN_140c00420 body=123 status=ok
// SIG undefined FUN_140c00420(void)

void FUN_140c00420(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 local_18;
  undefined4 local_10;
  
  local_18 = 0;
  local_10 = 0;
  (**(code **)(**(longlong **)*param_1 + 0x28))
            (*(longlong **)*param_1,*param_2,param_1[1],0,&local_18);
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



// FUNCTION 140c004a0 FUN_140c004a0 body=240 status=ok
// SIG undefined FUN_140c004a0(void)

void FUN_140c004a0(undefined8 param_1,undefined4 *param_2,undefined8 param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined1 local_38 [16];
  longlong local_28 [3];
  short local_10;
  
  if (*(short *)(param_4 + 0x18) == 0x28) {
    FUN_1421923f0(local_28,DAT_14686adf8,param_4);
    if ((local_10 == 0x28) && (local_28[0] != 0)) {
      lVar6 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(local_28[0] + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(local_28[0] + 0x10) + 0x88) +
           (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        iVar5 = FUN_140d00180(local_28[0]);
        if (iVar5 == 0) {
          FUN_14217f5b0(param_2,L"GUID-PENDING");
        }
        else {
          puVar7 = (undefined4 *)FUN_140cfc220(local_28[0],local_38);
          FUN_142194380(param_2,0xb,0,0,0);
          uVar1 = puVar7[1];
          uVar2 = puVar7[2];
          uVar3 = puVar7[3];
          *param_2 = *puVar7;
          param_2[1] = uVar1;
          param_2[2] = uVar2;
          param_2[3] = uVar3;
        }
      }
    }
    FUN_14217f430(local_28);
  }
  return;
}



// FUNCTION 140c00590 FUN_140c00590 body=379 status=ok
// SIG undefined FUN_140c00590(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140c00590(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_c0 = &local_b8;
  local_c8 = &local_88;
  local_88 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_80 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  (**(code **)(**(longlong **)*param_1 + 0x10))(*(longlong **)*param_1,*param_2,param_1[1],1);
  local_40 = 0;
  if (local_48 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_88);
  local_c8 = &local_a8;
  local_a8 = 0;
  local_a0 = 0;
  (**(code **)(**(longlong **)*param_1 + 0x28))(*(longlong **)*param_1,*param_2,param_1[1],0);
  lVar5 = *(longlong *)param_1[2];
  lVar6 = (longlong)(int)((longlong *)param_1[2])[1] * 0x10 + lVar5;
  for (; lVar5 != lVar6; lVar5 = lVar5 + 0x10) {
    local_c8 = &local_98;
    local_98 = 0;
    local_90 = 0;
    (**(code **)(**(longlong **)*param_1 + 0x28))(*(longlong **)*param_1,*param_2,lVar5,0);
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



// FUNCTION 140c00710 FUN_140c00710 body=379 status=ok
// SIG undefined FUN_140c00710(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140c00710(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_c0 = &local_b8;
  local_c8 = &local_88;
  local_88 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_80 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  (**(code **)(**(longlong **)*param_1 + 0x10))(*(longlong **)*param_1,*param_2,param_1[1],0);
  local_40 = 0;
  if (local_48 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_88);
  local_c8 = &local_a8;
  local_a8 = 0;
  local_a0 = 0;
  (**(code **)(**(longlong **)*param_1 + 0x28))(*(longlong **)*param_1,*param_2,param_1[1],0);
  lVar5 = *(longlong *)param_1[2];
  lVar6 = (longlong)(int)((longlong *)param_1[2])[1] * 0x10 + lVar5;
  for (; lVar5 != lVar6; lVar5 = lVar5 + 0x10) {
    local_c8 = &local_98;
    local_98 = 0;
    local_90 = 0;
    (**(code **)(**(longlong **)*param_1 + 0x28))(*(longlong **)*param_1,*param_2,lVar5,0);
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



// FUNCTION 140c00890 FUN_140c00890 body=112 status=ok
// SIG undefined FUN_140c00890(void)

void FUN_140c00890(undefined8 param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong local_res20;
  
  if (*(short *)(param_4 + 0x18) == 0x28) {
    local_res20 = 0;
    plVar1 = (longlong *)FUN_140bfa1d0(param_4);
    if ((plVar1 != (longlong *)0x0) &&
       (lVar2 = (**(code **)(*plVar1 + 0x668))(plVar1), local_res20 = 0, lVar2 != 0)) {
      local_res20 = lVar2;
    }
    FUN_142194380(param_2,0x28,0,0,0);
    *param_2 = local_res20;
  }
  return;
}



// FUNCTION 140c00900 FUN_140c00900 body=443 status=ok
// SIG undefined FUN_140c00900(void)

void FUN_140c00900(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined4 local_res10 [2];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  
  lVar5 = *(longlong *)(param_2[4] + (longlong)(int)param_2[6] * 8);
  if (lVar5 != 0) {
    lVar5 = *(longlong *)(lVar5 + 0x460);
    if (lVar5 != 0) {
      lVar2 = UInputKeySelector::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
           ) != lVar2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        if (*(int *)((undefined8 *)param_2[2] + 1) == 0) {
          puVar6 = &DAT_143f3eda8;
        }
        else {
          puVar6 = *(undefined2 **)param_2[2];
        }
        puVar3 = *(undefined8 **)(*param_2 + 0xc0);
        if (puVar3 == (undefined8 *)0x0) {
          puVar3 = (undefined8 *)(*param_2 + 0x20);
        }
        uVar4 = *puVar3;
        puVar3 = (undefined8 *)FName::FName(local_res18,puVar6,1);
        FUN_14218dc00(uVar4,local_res10,*puVar3,0);
        lVar2 = *(longlong *)(*param_2 + 0xc0);
        if (lVar2 == 0) {
          lVar2 = *param_2 + 0x20;
        }
        uVar4 = FUN_140c157f0(lVar2,(int)param_2[6]);
        FUN_140bfab30(uVar4,local_res10,lVar5 + 0x5d0);
        return;
      }
    }
    local_res10[0] = 0;
    if (*(int *)((undefined8 *)param_2[2] + 1) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = *(undefined2 **)param_2[2];
    }
    puVar3 = *(undefined8 **)(*param_2 + 0xc0);
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)(*param_2 + 0x20);
    }
    uVar4 = *puVar3;
    puVar3 = (undefined8 *)FName::FName(local_res20,puVar6,1);
    FUN_14218dc00(uVar4,local_res18,*puVar3,0);
    lVar5 = *(longlong *)(*param_2 + 0xc0);
    if (lVar5 == 0) {
      lVar5 = *param_2 + 0x20;
    }
    uVar4 = FUN_140c157f0(lVar5,(int)param_2[6]);
    FUN_140bfab30(uVar4,local_res18,local_res10);
  }
  return;
}



// FUNCTION 140c00ac0 FUN_140c00ac0 body=227 status=ok
// SIG undefined FUN_140c00ac0(void)

void FUN_140c00ac0(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_28 = 0;
  local_20 = 0;
  (**(code **)(**(longlong **)*param_1 + 0x28))
            (*(longlong **)*param_1,*param_2,param_1[1],0,&local_28);
  lVar5 = *(longlong *)param_1[2];
  lVar6 = (longlong)(int)((longlong *)param_1[2])[1] * 0x10 + lVar5;
  for (; lVar5 != lVar6; lVar5 = lVar5 + 0x10) {
    local_18 = 0;
    local_10 = 0;
    (**(code **)(**(longlong **)*param_1 + 0x28))(*(longlong **)*param_1,*param_2,lVar5,0,&local_18)
    ;
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



// FUNCTION 140c00bb0 FUN_140c00bb0 body=310 status=ok
// SIG undefined FUN_140c00bb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140c00bb0(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  local_a8 = &local_98;
  local_98 = 0;
  local_90 = 0;
  (**(code **)(**(longlong **)*param_1 + 0x28))(*(longlong **)*param_1,*param_2,param_1 + 1,1);
  local_a8 = &local_88;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  (**(code **)(**(longlong **)*param_1 + 8))(*(longlong **)*param_1,*param_2,param_1 + 1,&local_78);
  local_30 = 0;
  if (local_38 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_78);
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



// FUNCTION 140c00cf0 FUN_140c00cf0 body=234 status=ok
// SIG undefined FUN_140c00cf0(void)

void FUN_140c00cf0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  bool bVar1;
  longlong lVar2;
  undefined8 local_res20;
  longlong local_30 [3];
  short local_18;
  
  if (*(short *)(param_4 + 0x18) == 0x28) {
    local_res20 = 0;
    lVar2 = FUN_140bfa1d0(param_4);
    if (lVar2 != 0) {
      FUN_1421923f0(local_30,DAT_14686adf8,param_4);
      if (local_18 == 0x28) {
        if (local_30[0] != 0) {
          lVar2 = FUN_14291fb80();
          if ((*(int *)(*(longlong *)(local_30[0] + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(local_30[0] + 0x10) + 0x88) +
               (longlong)*(int *)(lVar2 + 0x90) * 8) != lVar2 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            local_res20 = *(undefined8 *)(local_30[0] + 0x488);
          }
        }
      }
      FUN_14217f430(local_30);
    }
    FUN_142194380(param_2,0x28,0,0,0);
    *param_2 = local_res20;
  }
  return;
}



// FUNCTION 140c00de0 FUN_140c00de0 body=189 status=ok
// SIG undefined FUN_140c00de0(void)

undefined8 FUN_140c00de0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_48 [4];
  undefined1 local_28 [32];
  
  FUN_14217e740(param_2);
  lVar2 = FUN_140c01370(param_1,param_3);
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(lVar2 + 0x210);
    FUN_14217e740(local_48);
    FUN_142194380(local_48,0x28,0,0,0);
    local_48[0] = uVar1;
    FUN_1421923f0(local_28,DAT_14686adb8,local_48);
    FUN_14217f450(param_2,local_28);
    FUN_14217f430(local_28);
    FUN_14217f430(local_48);
  }
  return param_2;
}



// FUNCTION 140c00ea0 FUN_140c00ea0 body=443 status=ok
// SIG undefined FUN_140c00ea0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140c00ea0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
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
  local_a8 = &LAB_140c1efe0;
  uStack_a0 = 0;
  lVar3 = *(longlong *)(*(longlong *)*param_1 + 400);
  if (lVar3 == 0) {
    uVar4 = *(undefined8 *)(*(longlong *)*param_1 + 0x3f8);
  }
  else {
    uVar4 = *(undefined8 *)(lVar3 + 0x90);
  }
  lVar3 = param_1[1];
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_FUN_143f77b88;
    FWeakObjectPtr::operator=(plVar1 + 1,lVar3);
    *(undefined4 *)(plVar1 + 2) = (undefined4)local_a8;
    *(undefined4 *)((longlong)plVar1 + 0x14) = local_a8._4_4_;
    *(undefined4 *)(plVar1 + 3) = uStack_a0;
    *(undefined4 *)((longlong)plVar1 + 0x1c) = uStack_9c;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[5] = lVar2;
    *plVar1 = (longlong)&PTR_FUN_143f77bd0;
  }
  local_98 = 0;
  local_90 = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,&local_98);
  }
  FWeakObjectPtr::operator=(local_88,0);
  local_b0 = 0xbf800000;
  local_b8 = 0;
  local_80 = 0;
  local_48 = (longlong *)0x0;
  local_38 = 0;
  local_78 = AK::MemoryMgr::StartProfileThreadUsage;
  FUN_142880850(uVar4,lVar3 + 0x58,&local_98,0x3f800000);
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
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,0);
    lVar3 = FMemory::Realloc(plVar1,0,0);
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
  return;
}



// FUNCTION 140c01060 FUN_140c01060 body=410 status=ok
// SIG undefined FUN_140c01060(void)

wchar_t * FUN_140c01060(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  wchar_t *pwVar9;
  longlong *plVar10;
  bool bVar11;
  undefined8 local_res18 [2];
  undefined8 local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  plVar10 = (longlong *)0x0;
  iVar6 = 0;
  local_res18[0] = 0;
  plVar7 = (longlong *)FUN_1404b0000(local_res18);
  bVar11 = plVar7 != (longlong *)0x0;
  if (bVar11) {
    puVar8 = (undefined8 *)(**(code **)(*plVar7 + 0x80))(plVar7,local_38);
    plVar10 = (longlong *)*puVar8;
  }
  else {
    puVar8 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
  }
  plVar7 = (longlong *)puVar8[1];
  puVar8[1] = 0;
  *puVar8 = 0;
  if (bVar11) {
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
  }
  plVar1 = plStack_40;
  if ((!bVar11) && (plStack_40 != (longlong *)0x0)) {
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
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  if (plVar10 != (longlong *)0x0) {
    iVar6 = (**(code **)(*plVar10 + 0x38))(plVar10);
  }
  if (iVar6 == 0) {
    pwVar9 = L"Unknown";
  }
  else if (iVar6 == 1) {
    pwVar9 = L"Open";
  }
  else if (iVar6 == 2) {
    pwVar9 = L"Moderate";
  }
  else if (iVar6 == 3) {
    pwVar9 = L"Strict";
  }
  else {
    pwVar9 = L"";
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar7 + 1;
    lVar5 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  return pwVar9;
}



// FUNCTION 140c01200 FUN_140c01200 body=354 status=ok
// SIG undefined FUN_140c01200(void)

void FUN_140c01200(undefined8 param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong local_res20;
  longlong local_30 [3];
  short local_18;
  
  if (*(short *)(param_4 + 0x18) == 0x28) {
    local_res20 = 0;
    lVar2 = FUN_140bfa1d0(param_4);
    lVar3 = local_res20;
    if (lVar2 != 0) {
      lVar3 = FUN_1430b3b80();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      lVar3 = lVar2;
      if (!bVar1) {
        FUN_1421923f0(local_30,DAT_14686adf0,param_4);
        if ((local_18 == 0x28) && (local_30[0] != 0)) {
          lVar3 = UObject::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(local_30[0] + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(local_30[0] + 0x10) + 0x88) +
               (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            uVar4 = FUN_1430a8880();
            plVar5 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(local_30[0],uVar4);
            if ((plVar5 != (longlong *)0x0) &&
               (lVar3 = (**(code **)(*plVar5 + 0xf0))(plVar5,0), local_res20 = 0, lVar3 != 0)) {
              local_res20 = lVar3;
            }
          }
        }
        FUN_14217f430(local_30);
        lVar3 = local_res20;
      }
    }
    local_res20 = lVar3;
    FUN_142194380(param_2,0x28,0,0,0);
    *param_2 = local_res20;
  }
  return;
}



// FUNCTION 140c01370 FUN_140c01370 body=177 status=ok
// SIG undefined FUN_140c01370(void)

undefined8 FUN_140c01370(longlong *param_1,int param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  if ((param_2 < 0) || (*(int *)(*param_1 + 8) <= param_2)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return 0;
  }
  lVar1 = *(longlong *)(*(longlong *)*param_1 + (longlong)param_2 * 8);
  if (lVar1 != 0) {
    lVar4 = AGExplodingRockProjectile::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      cVar3 = FUN_140b31bb0(lVar1);
      if ((cVar3 != '\0') && (lVar4 = FUN_140b2aac0(lVar1), lVar4 != param_1[1])) {
        return 0;
      }
      uVar5 = ATrap::GetActivationShapeComponent(lVar1);
      return uVar5;
    }
  }
  return 0;
}



// FUNCTION 140c01430 FUN_140c01430 body=116 status=ok
// SIG undefined FUN_140c01430(void)

undefined8 FUN_140c01430(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  undefined4 local_res8;
  undefined4 local_resc;
  
  local_res8 = *(undefined4 *)(param_2 + 0x38);
  local_resc = *(undefined4 *)(param_2 + 0x3c);
  cVar1 = FUN_14058c1e0(&local_res8,*param_1);
  if (((cVar1 == '\0') && (0.0 < *(float *)(param_2 + 4) || *(float *)(param_2 + 4) == 0.0)) &&
     (*(longlong **)(param_2 + 0x10) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_2 + 0x10) + 0x20))();
    if (cVar1 != '\0') {
      cVar1 = FWeakObjectPtr::IsValid(param_2 + 0x38);
      if ((cVar1 != '\0') || (*(char *)(param_2 + 0x34) != '\0')) {
        return 0;
      }
    }
  }
  return 1;
}



// FUNCTION 140c014b0 FUN_140c014b0 body=1277 status=ok
// SIG undefined FUN_140c014b0(void)

void FUN_140c014b0(undefined8 param_1,undefined8 *param_2,wchar_t *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  char cVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  longlong lVar18;
  longlong *plVar19;
  longlong lVar20;
  undefined8 *puVar21;
  wchar_t *local_res10;
  wchar_t *local_res18;
  wchar_t *local_1d8 [4];
  undefined1 local_1b8 [32];
  undefined1 local_198 [32];
  wchar_t *local_178;
  undefined1 local_170 [40];
  undefined8 local_148 [16];
  undefined1 local_c8 [8];
  undefined1 auStack_c0 [8];
  undefined1 local_b8 [8];
  undefined1 auStack_b0 [8];
  undefined1 local_a8 [8];
  undefined1 auStack_a0 [8];
  undefined1 local_98 [8];
  undefined1 local_90 [120];
  
  local_res18 = param_3;
  cVar14 = FUN_142190080(*param_2);
  if (cVar14 != '\0') {
    if (DAT_14686b0f8 == '\0') {
      uVar16 = FUN_140c12120();
      FUN_140bffbb0(&DAT_14686afc8,uVar16);
    }
    lVar20 = 2;
    puVar12 = local_148;
    puVar13 = (undefined8 *)&DAT_14686afc8;
    do {
      puVar21 = puVar13;
      puVar17 = puVar12;
      uVar16 = puVar21[1];
      uVar8 = puVar21[2];
      uVar9 = puVar21[3];
      *puVar17 = *puVar21;
      puVar17[1] = uVar16;
      uVar16 = puVar21[4];
      uVar10 = puVar21[5];
      puVar17[2] = uVar8;
      puVar17[3] = uVar9;
      uVar8 = puVar21[6];
      uVar9 = puVar21[7];
      puVar17[4] = uVar16;
      puVar17[5] = uVar10;
      uVar16 = puVar21[8];
      uVar10 = puVar21[9];
      puVar17[6] = uVar8;
      puVar17[7] = uVar9;
      uVar8 = puVar21[10];
      uVar9 = puVar21[0xb];
      puVar17[8] = uVar16;
      puVar17[9] = uVar10;
      uVar16 = puVar21[0xc];
      uVar10 = puVar21[0xd];
      puVar17[10] = uVar8;
      puVar17[0xb] = uVar9;
      uVar8 = puVar21[0xe];
      uVar9 = puVar21[0xf];
      puVar17[0xc] = uVar16;
      puVar17[0xd] = uVar10;
      puVar17[0xe] = uVar8;
      puVar17[0xf] = uVar9;
      lVar20 = lVar20 + -1;
      puVar12 = puVar17 + 0x10;
      puVar13 = puVar21 + 0x10;
    } while (lVar20 != 0);
    uVar16 = puVar21[0x11];
    uVar15 = *(undefined4 *)(puVar21 + 0x12);
    uVar1 = *(undefined4 *)((longlong)puVar21 + 0x94);
    uVar2 = *(undefined4 *)(puVar21 + 0x13);
    uVar3 = *(undefined4 *)((longlong)puVar21 + 0x9c);
    puVar17[0x10] = puVar21[0x10];
    puVar17[0x11] = uVar16;
    uVar4 = *(undefined4 *)(puVar21 + 0x14);
    uVar5 = *(undefined4 *)((longlong)puVar21 + 0xa4);
    uVar6 = *(undefined4 *)(puVar21 + 0x15);
    uVar7 = *(undefined4 *)((longlong)puVar21 + 0xac);
    *(undefined4 *)(puVar17 + 0x12) = uVar15;
    *(undefined4 *)((longlong)puVar17 + 0x94) = uVar1;
    *(undefined4 *)(puVar17 + 0x13) = uVar2;
    *(undefined4 *)((longlong)puVar17 + 0x9c) = uVar3;
    *(undefined4 *)(puVar17 + 0x14) = uVar4;
    *(undefined4 *)((longlong)puVar17 + 0xa4) = uVar5;
    *(undefined4 *)(puVar17 + 0x15) = uVar6;
    *(undefined4 *)((longlong)puVar17 + 0xac) = uVar7;
    FUN_14217e740(local_1d8);
    FUN_142194380(local_1d8,0x28,0,0,0);
    local_1d8[0] = local_res18;
    FUN_1421923f0(local_198,DAT_14686adf0,local_1d8);
    FUN_1421923f0(local_170,DAT_14686adc0,local_198);
    FUN_14217f430(local_198);
    FUN_14217f430(local_1d8);
    cVar14 = FUN_142190070(local_170);
    if (cVar14 == '\0') {
      FUN_1421942f0();
    }
    FUN_14217e740(local_1d8);
    FUN_142194380(local_1d8,0x28,0,0,0);
    local_1d8[0] = local_res18;
    FUN_1421923f0(local_1b8,DAT_14686adf0,local_1d8);
    FUN_1421923f0(local_198,DAT_14686adc0,local_1b8);
    FUN_140bfb300(param_4,local_c8,local_198);
    FUN_14217f430(local_198);
    FUN_14217f430(local_1b8);
    FUN_14217f430(local_1d8);
    FUN_14217e740(local_1d8);
    FUN_142194380(local_1d8,0x28,0,0,0);
    local_1d8[0] = local_res18;
    FUN_1421923f0(local_198,DAT_14686ae00,local_1d8);
    FUN_1421923f0(local_1b8,DAT_14686adc8,local_198);
    FUN_140bfb300(param_4,auStack_c0,local_1b8);
    FUN_14217f430(local_1b8);
    FUN_14217f430(local_198);
    FUN_14217f430(local_1d8);
    if (param_3 != (wchar_t *)0x0) {
      lVar20 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(param_3 + 8) + 0x90) < *(int *)(lVar20 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_3 + 8) + 0x88) + (longlong)*(int *)(lVar20 + 0x90) * 8
           ) != lVar20 + 0x88)) {
        bVar11 = false;
      }
      else {
        bVar11 = true;
      }
      if (bVar11) {
        local_178 = param_3;
        uVar15 = FUN_140d00180(param_3);
        local_res10 = (wchar_t *)CONCAT44(local_res10._4_4_,uVar15);
        FUN_140bfadf0(param_4,local_b8,&local_res10);
        FUN_14217e740(local_1d8);
        FUN_142194380(local_1d8,0x28,0,0,0);
        local_1d8[0] = local_178;
        FUN_1421923f0(local_1b8,DAT_14686ade0,local_1d8);
        FUN_140bfb300(param_4,local_a8,local_1b8);
        FUN_14217f430(local_1b8);
        FUN_14217f430(local_1d8);
        local_res10 = L"Easier";
        if (*(char *)((longlong)param_3 + 0xaa9) == '\0') {
          local_res10 = L"Normal";
        }
        FUN_140bfb0b0(param_4,local_90,&local_res10);
        cVar14 = (**(code **)(*(longlong *)param_3 + 0x768))(param_3);
        if ((cVar14 != '\0') && (lVar20 = *(longlong *)(param_3 + 0x424), lVar20 != 0)) {
          lVar18 = FUN_1413f82e0();
          if ((*(int *)(*(longlong *)(lVar20 + 0x10) + 0x90) < *(int *)(lVar18 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar20 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar18 + 0x90) * 8) != lVar18 + 0x88)) {
            bVar11 = false;
          }
          else {
            bVar11 = true;
          }
          if ((bVar11) && (*(longlong **)(lVar20 + 0x10d8) != (longlong *)0x0)) {
            uVar15 = (**(code **)(**(longlong **)(lVar20 + 0x10d8) + 0x408))();
            local_res10 = (wchar_t *)CONCAT44(local_res10._4_4_,uVar15);
            FUN_140bfa9d0(param_4,auStack_a0,&local_res10);
          }
        }
        uVar16 = FUN_1414b0d60();
        plVar19 = (longlong *)(**(code **)(*(longlong *)param_3 + 0x628))(param_3,uVar16);
        if (plVar19 != (longlong *)0x0) {
          uVar15 = (**(code **)(*plVar19 + 0x468))(plVar19);
          local_res10 = (wchar_t *)CONCAT44(local_res10._4_4_,uVar15);
          FUN_140bfa9d0(param_4,local_98,&local_res10);
        }
        if (*(longlong *)(param_3 + 0x548) != 0) {
          lVar20 = (**(code **)(*(longlong *)param_3 + 0xfa8))(param_3);
          if (lVar20 != 0) {
            if ((*(int *)(lVar20 + 0x48) < 1) ||
               (lVar20 = *(longlong *)
                          (*(longlong *)(lVar20 + 0x40) + -8 + (longlong)*(int *)(lVar20 + 0x48) * 8
                          ), lVar20 == 0)) {
              local_res10 = (wchar_t *)0x0;
            }
            else {
              local_res10 = *(wchar_t **)(lVar20 + 0x38);
            }
            FUN_14217e740(local_1d8);
            FUN_142194380(local_1d8,0x28,0,0,0);
            local_1d8[0] = local_res10;
            FUN_1421923f0(local_1b8,DAT_14686adb8,local_1d8);
            FUN_140bfb300(param_4,auStack_b0,local_1b8);
            FUN_14217f430(local_1b8);
            FUN_14217f430(local_1d8);
          }
        }
      }
    }
    FUN_14217f430(local_170);
  }
  return;
}


