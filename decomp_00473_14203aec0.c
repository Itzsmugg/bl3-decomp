// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14203aec0 FUN_14203aec0 body=90 status=ok
// SIG undefined FUN_14203aec0(void)

undefined4 FUN_14203aec0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  uint local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_38 = 0xffffffffffffffff;
  uStack_30 = 0xffffffffffffffff;
  local_28 = (longlong *)0x0;
  local_20 = 0;
  cVar1 = FUN_14203acd0(0xffffffffffffffff,param_2,&local_38);
  uVar2 = 0;
  if (cVar1 != '\0') {
    uVar2 = local_18;
  }
  if ((local_20 >> 6 & 1) != 0) {
    (**(code **)(*local_28 + 0x10))(local_28,&local_38,CONCAT44(uStack_14,local_18));
  }
  return uVar2;
}



// FUNCTION 14203af20 FUN_14203af20 body=104 status=ok
// SIG undefined FUN_14203af20(void)

void FUN_14203af20(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_48;
  undefined8 uStack_40;
  longlong *local_38;
  uint local_30;
  undefined8 local_28;
  
  local_48 = 0xffffffffffffffff;
  uStack_40 = 0xffffffffffffffff;
  local_38 = (longlong *)0x0;
  local_30 = 0;
  FUN_14203acd0(0xffffffffffffffff,param_2,&local_48);
  if ((local_30 >> 6 & 1) != 0) {
    (**(code **)(*local_38 + 0x10))(local_38,&local_48,local_28);
  }
  return;
}



// FUNCTION 14203af90 FUN_14203af90 body=434 status=ok
// SIG undefined FUN_14203af90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_14203af90(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  short *psVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  undefined8 uStack_170;
  longlong *local_168;
  uint local_160;
  short *local_158;
  undefined1 local_148 [256];
  longlong local_48;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  local_178 = 0xffffffffffffffff;
  uStack_170 = 0xffffffffffffffff;
  local_168 = (longlong *)0x0;
  local_160 = 0;
  cVar1 = FUN_14203acd0(0xffffffffffffffff,param_3,&local_178);
  psVar2 = local_158;
  if (cVar1 != '\0') {
    if ((local_160 & 0x8f) == 7) {
      *param_2 = 0;
      param_2[1] = 0;
      if ((local_158 != (short *)0x0) && (*local_158 != 0)) {
        lVar4 = -1;
        do {
          lVar4 = lVar4 + 1;
        } while (local_158[lVar4] != 0);
        iVar3 = (int)lVar4 + 1;
        *(int *)(param_2 + 1) = iVar3;
        if (0 < iVar3) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
        }
        FGenericPlatformString::Memcpy(*param_2,psVar2,(longlong)iVar3 * 2);
      }
      if ((local_160 >> 6 & 1) == 0) {
        return param_2;
      }
      (**(code **)(*local_168 + 0x10))(local_168,&local_178,local_158);
      return param_2;
    }
    if ((local_160 & 0x8f) == 6) {
      if ((local_160 >> 6 & 1) != 0) {
        psVar2 = *(short **)local_158;
      }
      lVar4 = TStringConversion<FUTF8ToTCHAR_Convert,128>::
              TStringConversion<FUTF8ToTCHAR_Convert,128>(local_148,psVar2);
      psVar2 = *(short **)(lVar4 + 0x108);
      *param_2 = 0;
      param_2[1] = 0;
      if ((psVar2 != (short *)0x0) && (*psVar2 != 0)) {
        lVar4 = -1;
        do {
          lVar4 = lVar4 + 1;
        } while (psVar2[lVar4] != 0);
        iVar3 = (int)lVar4 + 1;
        *(int *)(param_2 + 1) = iVar3;
        if (0 < iVar3) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
        }
        FGenericPlatformString::Memcpy(*param_2,psVar2,(longlong)iVar3 * 2);
      }
      if (local_48 != 0) {
        FMemory::Free();
      }
      goto LAB_14203b10d;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_14203b10d:
  if ((local_160 >> 6 & 1) != 0) {
    (**(code **)(*local_168 + 0x10))(local_168,&local_178,local_158);
  }
  return param_2;
}



// FUNCTION 14203b180 FUN_14203b180 body=8 status=ok
// SIG undefined FUN_14203b180(void)

undefined8 FUN_14203b180(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x240);
}



// FUNCTION 14203b1b0 FUN_14203b1b0 body=1434 status=ok
// SIG undefined FUN_14203b1b0(void)

longlong FUN_14203b1b0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                      undefined1 param_5,undefined8 param_6)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  longlong *local_d8;
  longlong local_c8;
  longlong *plStack_c0;
  longlong local_b8;
  longlong *local_b0;
  longlong local_a8;
  longlong *local_a0;
  longlong local_98;
  longlong *local_90;
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  longlong *plStack_70;
  longlong local_68;
  longlong *plStack_60;
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  longlong *plStack_40;
  
  lVar11 = 0;
  bVar12 = false;
  if (param_4 == 0) {
    local_d8 = (longlong *)0x0;
  }
  else {
    if ((*(longlong *)(param_4 + 0x28) == 0) || (*(longlong *)(param_4 + 0x30) == 0)) {
LAB_14203b272:
      plVar9 = &local_78;
      local_78 = 0;
      plStack_70 = (longlong *)0x0;
      bVar4 = false;
      bVar12 = true;
      lVar10 = lVar11;
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_4 + 0x30) + 8);
      LOCK();
      iVar8 = *piVar1;
      if (iVar8 == 0) {
        *piVar1 = 0;
        iVar8 = 0;
      }
      UNLOCK();
      if (iVar8 < 1) goto LAB_14203b272;
      local_b0 = *(longlong **)(param_4 + 0x30);
      local_b8 = 0;
      if (local_b0 != (longlong *)0x0) {
        LOCK();
        iVar8 = (int)local_b0[1];
        bVar12 = iVar8 == 0;
        if (bVar12) {
          *(int *)(local_b0 + 1) = 0;
          iVar8 = 0;
        }
        UNLOCK();
        while (!bVar12) {
          LOCK();
          bVar12 = iVar8 == (int)local_b0[1];
          if (bVar12) {
            *(int *)(local_b0 + 1) = iVar8 + 1;
          }
          UNLOCK();
          if (bVar12) {
            local_b8 = *(longlong *)(param_4 + 0x28);
            plVar9 = &local_b8;
            bVar4 = true;
            bVar12 = false;
            lVar10 = local_b8;
            goto LAB_14203b287;
          }
          LOCK();
          iVar8 = (int)local_b0[1];
          bVar12 = iVar8 == 0;
          if (bVar12) {
            *(int *)(local_b0 + 1) = 0;
            iVar8 = 0;
          }
          UNLOCK();
        }
        local_b0 = (longlong *)0x0;
      }
      plVar9 = &local_b8;
      bVar4 = true;
      bVar12 = false;
      lVar10 = 0;
    }
LAB_14203b287:
    local_d8 = (longlong *)plVar9[1];
    plVar9[1] = 0;
    plVar3 = plStack_70;
    *plVar9 = 0;
    if ((bVar12) && (plStack_70 != (longlong *)0x0)) {
      LOCK();
      plVar9 = plStack_70 + 1;
      lVar6 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plStack_70)(plStack_70);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plStack_70 + 8))(plStack_70,1);
        }
      }
    }
    plVar9 = local_b0;
    if ((bVar4) && (local_b0 != (longlong *)0x0)) {
      LOCK();
      plVar3 = local_b0 + 1;
      lVar6 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_b0 + 8))(local_b0,1);
        }
      }
    }
    bVar12 = true;
    if (lVar10 != 0) {
      if ((*(longlong *)(param_4 + 0x28) == 0) || (*(longlong *)(param_4 + 0x30) == 0)) {
LAB_14203b3aa:
        plVar9 = &local_68;
        local_68 = 0;
        plStack_60 = (longlong *)0x0;
        bVar4 = false;
        bVar12 = true;
        lVar10 = lVar11;
      }
      else {
        piVar1 = (int *)(*(longlong *)(param_4 + 0x30) + 8);
        LOCK();
        iVar8 = *piVar1;
        if (iVar8 == 0) {
          *piVar1 = 0;
          iVar8 = 0;
        }
        UNLOCK();
        if (iVar8 < 1) goto LAB_14203b3aa;
        local_a8 = 0;
        local_a0 = *(longlong **)(param_4 + 0x30);
        if (local_a0 != (longlong *)0x0) {
          LOCK();
          iVar8 = (int)local_a0[1];
          bVar12 = iVar8 == 0;
          if (bVar12) {
            *(int *)(local_a0 + 1) = 0;
            iVar8 = 0;
          }
          UNLOCK();
          while (!bVar12) {
            LOCK();
            bVar12 = iVar8 == (int)local_a0[1];
            if (bVar12) {
              *(int *)(local_a0 + 1) = iVar8 + 1;
            }
            UNLOCK();
            if (bVar12) {
              plVar9 = &local_a8;
              local_a8 = *(longlong *)(param_4 + 0x28);
              bVar4 = true;
              bVar12 = false;
              lVar10 = *(longlong *)(param_4 + 0x28);
              goto LAB_14203b3be;
            }
            LOCK();
            iVar8 = (int)local_a0[1];
            bVar12 = iVar8 == 0;
            if (bVar12) {
              *(int *)(local_a0 + 1) = 0;
              iVar8 = 0;
            }
            UNLOCK();
          }
          local_a0 = (longlong *)0x0;
        }
        plVar9 = &local_a8;
        bVar4 = true;
        bVar12 = false;
        lVar10 = 0;
      }
LAB_14203b3be:
      local_88 = lVar10;
      plVar3 = (longlong *)plVar9[1];
      plVar9[1] = 0;
      plVar2 = plStack_60;
      local_80 = plVar3;
      *plVar9 = 0;
      if ((bVar12) && (plStack_60 != (longlong *)0x0)) {
        LOCK();
        plVar9 = plStack_60 + 1;
        lVar6 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plStack_60)(plStack_60);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plStack_60 + 8))(plStack_60,1);
          }
        }
      }
      plVar9 = local_a0;
      if ((bVar4) && (local_a0 != (longlong *)0x0)) {
        LOCK();
        plVar3 = local_a0 + 1;
        lVar6 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_a0)(local_a0);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_a0 + 8))(local_a0,1);
          }
        }
      }
      bVar5 = true;
      bVar12 = true;
      bVar4 = false;
      plVar9 = &local_88;
      goto LAB_14203b4a0;
    }
  }
  bVar5 = false;
  lVar10 = *(longlong *)(param_1 + 0xd0);
  bVar4 = true;
  local_90 = *(longlong **)(param_1 + 0xd8);
  local_98 = lVar10;
  if (local_90 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_90 + 1) = (int)local_90[1] + 1;
    UNLOCK();
  }
  plVar9 = &local_98;
LAB_14203b4a0:
  plVar3 = (longlong *)plVar9[1];
  plVar9[1] = 0;
  *plVar9 = 0;
  plVar9 = local_90;
  if ((bVar4) && (local_90 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_90 + 1;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_90 + 8))(local_90,1);
      }
    }
  }
  plVar9 = local_80;
  if ((bVar5) && (local_80 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_80 + 1;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_80 + 8))(local_80,1);
      }
    }
  }
  if ((bVar12) && (local_d8 != (longlong *)0x0)) {
    LOCK();
    plVar9 = local_d8 + 1;
    lVar6 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_d8)(local_d8);
      LOCK();
      piVar1 = (int *)((longlong)local_d8 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_d8 + 8))(local_d8,1);
      }
    }
  }
  if (lVar10 != 0) {
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    local_58 = lVar10;
    local_50 = plVar3;
    FUN_142026ab0(param_1,&local_c8,param_3,&local_58,param_5);
    plVar9 = plStack_c0;
    lVar10 = local_c8;
    if (local_c8 != 0) {
      TArray<FString,TSizedDefaultAllocator<32>_>::operator=(local_c8 + 0xf0,param_6);
      cVar7 = FWeakObjectPtr::IsValid(lVar10 + 0xb8);
      if ((cVar7 == '\0') ||
         (lVar10 = FWeakObjectPtr::Get(lVar10 + 0xb8), plVar9 = plStack_c0, lVar10 == 0)) {
        plVar9 = plStack_c0;
        local_48 = local_c8;
        plStack_40 = plStack_c0;
        if (plStack_c0 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_c0 + 1) = (int)plStack_c0[1] + 1;
          UNLOCK();
        }
        cVar7 = FWeakObjectPtr::IsValid(param_1 + 0x70,0,1);
        if (cVar7 != '\0') {
          lVar11 = FWeakObjectPtr::Get(param_1 + 0x70);
        }
        lVar10 = FUN_142030610(lVar11,param_2,&local_48);
      }
      plVar2 = plStack_c0;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar9 + 1;
        lVar11 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*plStack_c0)(plStack_c0);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plStack_c0 + 8))(plStack_c0,1);
          }
        }
      }
      if (plVar3 == (longlong *)0x0) {
        return lVar10;
      }
      LOCK();
      plVar9 = plVar3 + 1;
      lVar11 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar11 != 1) {
        return lVar10;
      }
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 != 1) {
        return lVar10;
      }
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return lVar10;
    }
    if (plStack_c0 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_c0 + 1;
      lVar11 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plStack_c0)(plStack_c0);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plStack_c0 + 8))(plStack_c0,1);
        }
      }
    }
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar3 + 1;
    lVar11 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
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
  return 0;
}



// FUNCTION 14203b750 FUN_14203b750 body=745 status=ok
// SIG undefined FUN_14203b750(void)

longlong FUN_14203b750(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                      undefined1 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong local_58;
  longlong *plStack_50;
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *plStack_30;
  
  lVar7 = *param_4;
  plVar9 = param_4;
  if (lVar7 == 0) {
    lVar7 = *(longlong *)(param_1 + 0xd0);
    plVar9 = (longlong *)(param_1 + 0xd0);
  }
  plVar9 = (longlong *)plVar9[1];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  if (lVar7 != 0) {
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    local_48 = lVar7;
    local_40 = plVar9;
    FUN_142026ab0(param_1,&local_58,param_3,&local_48,param_5);
    plVar3 = plStack_50;
    lVar7 = local_58;
    if (local_58 != 0) {
      TArray<FString,TSizedDefaultAllocator<32>_>::operator=(local_58 + 0xf0,param_6);
      cVar6 = FWeakObjectPtr::IsValid(lVar7 + 0xb8);
      if ((cVar6 != '\0') &&
         (lVar7 = FWeakObjectPtr::Get(lVar7 + 0xb8), plVar3 = plStack_50, lVar7 != 0)) {
        if (plStack_50 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_50 + 1;
          lVar5 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*plStack_50)(plStack_50);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plStack_50 + 8))(plStack_50,1);
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
            piVar2 = (int *)((longlong)plVar9 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar9 + 8))(plVar9,1);
            }
          }
        }
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_4);
        return lVar7;
      }
      plVar3 = plStack_50;
      local_38 = local_58;
      plStack_30 = plStack_50;
      if (plStack_50 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
        UNLOCK();
      }
      cVar6 = FWeakObjectPtr::IsValid(param_1 + 0x70,0,1);
      if (cVar6 == '\0') {
        uVar8 = 0;
      }
      else {
        uVar8 = FWeakObjectPtr::Get(param_1 + 0x70);
      }
      lVar7 = FUN_142030610(uVar8,param_2,&local_38);
      plVar1 = plStack_50;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar3 + 1;
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
            (**(code **)(*plStack_50 + 8))(plStack_50,1);
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
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_4);
      return lVar7;
    }
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_50 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
    }
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar9 + 1;
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  plVar9 = (longlong *)param_4[1];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar9 + 1;
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  return 0;
}



// FUNCTION 14203ba40 FUN_14203ba40 body=526 status=ok
// SIG undefined FUN_14203ba40(void)

undefined8
FUN_14203ba40(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  undefined1 local_28 [16];
  
  lVar4 = FMemory::Malloc(0x108,0);
  plVar8 = (longlong *)0x0;
  plVar6 = plVar8;
  if (lVar4 != 0) {
    uVar5 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_28);
    plVar6 = (longlong *)FUN_142019900(lVar4,uVar5,param_3,param_4);
  }
  plVar7 = (longlong *)operator_new(0x18);
  plVar10 = plVar8;
  if (plVar7 != (longlong *)0x0) {
    *(undefined4 *)(plVar7 + 1) = 1;
    *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
    *plVar7 = (longlong)&PTR_FUN_143f3f2d0;
    plVar7[2] = (longlong)plVar6;
    plVar10 = plVar7;
  }
  plVar7 = plVar6 + 1;
  if (plVar6 == (longlong *)0x0) {
    plVar7 = plVar8;
  }
  if (plVar7 != (longlong *)0x0) {
    if ((*plVar7 != 0) && (plVar7[1] != 0)) {
      piVar1 = (int *)(plVar7[1] + 8);
      LOCK();
      iVar3 = *piVar1;
      if (iVar3 == 0) {
        *piVar1 = 0;
        iVar3 = 0;
      }
      UNLOCK();
      if (0 < iVar3) goto LAB_14203bb82;
    }
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    *plVar7 = (longlong)plVar6;
    plVar9 = (longlong *)plVar7[1];
    if (plVar10 != plVar9) {
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
        UNLOCK();
        plVar9 = (longlong *)plVar7[1];
      }
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
      plVar7[1] = (longlong)plVar10;
    }
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar10 + 1;
      lVar4 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
    }
  }
LAB_14203bb82:
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=(plVar6 + 0x1e,param_5);
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  local_48 = plVar6;
  local_40 = plVar10;
  FUN_14202bd00(param_1,&local_48);
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  local_38 = plVar6;
  local_30 = plVar10;
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x70,0,1);
  if (cVar2 != '\0') {
    plVar8 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x70);
  }
  uVar5 = FUN_142030610(plVar8,param_2,&local_38);
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar10 + 1;
    lVar4 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  return uVar5;
}



// FUNCTION 14203bc50 FUN_14203bc50 body=115 status=ok
// SIG undefined FUN_14203bc50(void)

undefined8 * FUN_14203bc50(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 local_res8;
  
  if (*(longlong **)(param_1 + 0x80) == (longlong *)0x0) {
    local_res8 = DAT_1468b5d88;
  }
  else {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x38))();
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))();
    local_res8 = CONCAT44(uVar1,uVar2);
  }
  *param_2 = local_res8;
  return param_2;
}



// FUNCTION 14203bcd0 FUN_14203bcd0 body=48 status=ok
// SIG undefined FUN_14203bcd0(void)

undefined8 FUN_14203bcd0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x70,0,1);
  if (cVar1 != '\0') {
    uVar2 = FWeakObjectPtr::Get(param_1 + 0x70);
    return uVar2;
  }
  return 0;
}



// FUNCTION 14203bd00 FUN_14203bd00 body=13 status=ok
// SIG undefined FUN_14203bd00(void)

int FUN_14203bd00(void)

{
  int iVar1;
  
  iVar1 = 0;
  LOCK();
  if (DAT_146accf20 != 0) {
    iVar1 = DAT_146accf20;
  }
  UNLOCK();
  DAT_146accf20 = iVar1;
  return iVar1;
}



// FUNCTION 14203bd10 FUN_14203bd10 body=13 status=ok
// SIG undefined FUN_14203bd10(void)

int FUN_14203bd10(void)

{
  int iVar1;
  
  iVar1 = 0;
  LOCK();
  if (DAT_146accf24 != 0) {
    iVar1 = DAT_146accf24;
  }
  UNLOCK();
  DAT_146accf24 = iVar1;
  return iVar1;
}



// FUNCTION 14203bd20 FUN_14203bd20 body=8 status=ok
// SIG undefined FUN_14203bd20(void)

undefined * FUN_14203bd20(void)

{
  return &DAT_1464f0688;
}



// FUNCTION 14203bd30 FUN_14203bd30 body=8 status=ok
// SIG undefined FUN_14203bd30(void)

undefined * FUN_14203bd30(void)

{
  return &DAT_1464f0740;
}



// FUNCTION 14203bd40 FUN_14203bd40 body=8 status=ok
// SIG undefined FUN_14203bd40(void)

undefined * FUN_14203bd40(void)

{
  return &DAT_1464f0758;
}



// FUNCTION 14203bd50 FUN_14203bd50 body=844 status=ok
// SIG undefined FUN_14203bd50(void)

undefined8 FUN_14203bd50(char *param_1,longlong *param_2)

{
  void *_Dst;
  void *_Src;
  bool bVar1;
  bool bVar2;
  wint_t wVar3;
  wint_t wVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  wint_t *pwVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  int iVar14;
  longlong local_48;
  int local_40;
  int local_3c;
  longlong local_38 [2];
  
  lVar10 = 0;
  iVar5 = strncmp(param_1,"/ package/",10);
  if ((iVar5 != 0) || (param_1 = param_1 + 10, param_1 == (char *)0x0)) {
    return 0;
  }
  iVar6 = 0;
  local_48 = 0;
  local_3c = 0;
  iVar5 = iVar6;
  iVar14 = iVar6;
  if (*param_1 != '\0') {
    lVar10 = -1;
    do {
      lVar10 = lVar10 + 1;
    } while (param_1[lVar10] != '\0');
    iVar9 = (int)lVar10 + 1;
    local_40 = iVar9;
    if (0 < iVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    }
    iVar14 = local_3c;
    iVar5 = local_40;
    lVar10 = local_48;
    FGenericPlatformString::Convert<char,wchar_t>(local_48,iVar9,param_1,iVar9,0x3f);
  }
  if (param_2 == &local_48) {
    if (lVar10 != 0) {
      FMemory::Free(lVar10);
    }
  }
  else {
    if (*param_2 != 0) {
      FMemory::Free();
    }
    *param_2 = lVar10;
    *(int *)(param_2 + 1) = iVar5;
    *(int *)((longlong)param_2 + 0xc) = iVar14;
  }
  puVar7 = (undefined8 *)FUN_141672300(local_38,param_2,0);
  puVar13 = &DAT_143f3eda8;
  if (*(int *)(puVar7 + 1) == 0) {
    puVar12 = &DAT_143f3eda8;
  }
  else {
    puVar12 = (undefined2 *)*puVar7;
  }
  pwVar11 = &DAT_144f6c078;
  do {
    wVar3 = *(wint_t *)((longlong)pwVar11 + (longlong)(puVar12 + -0xa27b603c));
    if ((wVar3 == 0) && (iVar5 = iVar6, *pwVar11 == 0)) goto LAB_14203beb8;
    if (wVar3 != *pwVar11) {
      wVar3 = towlower(wVar3);
      wVar4 = towlower(*pwVar11);
      if (wVar3 != wVar4) goto LAB_14203beaf;
    }
    pwVar11 = pwVar11 + 1;
  } while( true );
LAB_14203bf1a:
  iVar5 = (uint)wVar3 - (uint)wVar4;
LAB_14203bf22:
  bVar1 = true;
  if (iVar5 != 0) {
    bVar2 = false;
    goto LAB_14203bf31;
  }
  goto LAB_14203bf2f;
LAB_14203beaf:
  iVar5 = (uint)wVar3 - (uint)wVar4;
LAB_14203beb8:
  bVar1 = false;
  if (iVar5 != 0) {
    puVar7 = (undefined8 *)FUN_141672300(&local_48,param_2,0);
    if (*(int *)(puVar7 + 1) != 0) {
      puVar13 = (undefined2 *)*puVar7;
    }
    pwVar11 = &DAT_144f6c080;
    do {
      wVar3 = *(wint_t *)((longlong)(puVar13 + -0xa27b6040) + (longlong)pwVar11);
      if ((wVar3 == 0) && (iVar5 = iVar6, *pwVar11 == 0)) goto LAB_14203bf22;
      if (wVar3 != *pwVar11) {
        wVar3 = towlower(wVar3);
        wVar4 = towlower(*pwVar11);
        if (wVar3 != wVar4) goto LAB_14203bf1a;
      }
      pwVar11 = pwVar11 + 1;
    } while( true );
  }
LAB_14203bf2f:
  bVar2 = true;
LAB_14203bf31:
  if ((bVar1) && (local_48 != 0)) {
    FMemory::Free();
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (bVar2) {
    plVar8 = (longlong *)FUN_141671940(local_38,param_2,0);
    if (param_2 != plVar8) {
      if (*param_2 != 0) {
        FMemory::Free();
      }
      *param_2 = *plVar8;
      *plVar8 = 0;
      *(int *)(param_2 + 1) = (int)plVar8[1];
      *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)plVar8 + 0xc);
      plVar8[1] = 0;
    }
    if (local_38[0] != 0) {
      FMemory::Free();
    }
    iVar5 = (int)param_2[1];
    iVar14 = iVar5 + -1;
    if (iVar5 < 1) {
      iVar14 = 0;
    }
    iVar5 = (iVar5 < 1) + 1 + iVar5;
    *(int *)(param_2 + 1) = iVar5;
    if (*(int *)((longlong)param_2 + 0xc) < iVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
    }
    *(undefined2 *)(*param_2 + (longlong)iVar14 * 2) = 0x2e;
    *(undefined2 *)(*param_2 + 2 + (longlong)iVar14 * 2) = 0;
    puVar7 = (undefined8 *)FUN_141671940(local_38,param_2,1);
    _Src = (void *)*puVar7;
    iVar5 = *(int *)(puVar7 + 1) + -1;
    if (*(int *)(puVar7 + 1) == 0) {
      iVar5 = iVar6;
    }
    if (iVar5 != 0) {
      iVar14 = (int)param_2[1];
      iVar6 = (uint)(iVar14 == 0) + iVar14 + iVar5;
      *(int *)(param_2 + 1) = iVar6;
      if (*(int *)((longlong)param_2 + 0xc) < iVar6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar14);
      }
      _Dst = (void *)(*param_2 + ((longlong)iVar14 - (ulonglong)(iVar14 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar5 * 2);
      *(undefined2 *)((longlong)iVar5 * 2 + (longlong)_Dst) = 0;
    }
    if (local_38[0] != 0) {
      FMemory::Free();
    }
  }
  FPaths::CollapseRelativeDirectories(param_2);
  return 1;
}



// FUNCTION 14203c0a0 FUN_14203c0a0 body=212 status=ok
// SIG undefined FUN_14203c0a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_14203c0a0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  *(undefined8 *)((longlong)param_2 + 0xc) = 0x3f800000;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  *(undefined8 *)((longlong)param_2 + 0x14) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0x3f800000;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0x3f800000;
  *(undefined8 *)((longlong)param_2 + 0x34) = 0;
  *(undefined4 *)((longlong)param_2 + 0x3c) = 0x3f800000;
  plVar1 = *(longlong **)(param_1 + 0x78);
  if (plVar1 != (longlong *)0x0) {
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    local_58 = 0x3f800000;
    uStack_44 = 0x3f800000;
    uStack_30 = 0x3f800000;
    uStack_1c = 0x3f800000;
    (**(code **)(*plVar1 + 0x1f0))(plVar1,&local_58);
    *param_2 = CONCAT44(uStack_54,local_58);
    param_2[1] = CONCAT44(uStack_4c,uStack_50);
    param_2[2] = CONCAT44(uStack_44,uStack_48);
    param_2[3] = uStack_40;
    param_2[4] = local_38;
    param_2[5] = CONCAT44(uStack_2c,uStack_30);
    param_2[6] = CONCAT44(uStack_24,uStack_28);
    param_2[7] = CONCAT44(uStack_1c,uStack_20);
  }
  return param_2;
}



// FUNCTION 14203c180 GetPlaneCount body=43 status=ok
// SIG undefined GetPlaneCount(void)

int Scaleform::Render::Texture::GetPlaneCount(longlong *param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 1;
  if ((*(byte *)((longlong)param_1 + 0x46) & 2) == 0) {
    uVar3 = (uint)*(byte *)((longlong)param_1 + 0x44);
  }
  uVar1 = (**(code **)(*param_1 + 0x20))();
  iVar2 = FUN_1432c86a0(uVar1);
  return iVar2 * uVar3;
}



// FUNCTION 14203c1b0 FUN_14203c1b0 body=719 status=ok
// SIG undefined FUN_14203c1b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_14203c1b0(longlong param_1,undefined8 *param_2)

{
  char *pcVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auStack_248 [32];
  undefined2 local_228;
  undefined8 local_218;
  undefined8 local_210;
  undefined1 local_204 [12];
  undefined1 local_1f8 [80];
  undefined1 local_1a8 [80];
  code *local_158 [2];
  longlong local_148 [4];
  longlong *local_128;
  int local_118;
  undefined1 local_108 [208];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_248;
  plVar7 = (longlong *)0x0;
  pcVar1 = (char *)(*(longlong *)(param_1 + 0x78) + 0x30);
  LOCK();
  cVar4 = *pcVar1;
  if (cVar4 == '\0') {
    *pcVar1 = '\0';
    cVar4 = '\0';
  }
  UNLOCK();
  if (cVar4 < '\x06') {
    plVar9 = *(longlong **)(param_1 + 0x10);
    plVar10 = plVar9;
    plVar11 = plVar7;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      iVar5 = (int)plVar9[1];
      bVar12 = iVar5 == 0;
      if (bVar12) {
        *(int *)(plVar9 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
      while (plVar10 = plVar7, plVar11 = (longlong *)0x0, !bVar12) {
        LOCK();
        bVar12 = iVar5 == (int)plVar9[1];
        if (bVar12) {
          *(int *)(plVar9 + 1) = iVar5 + 1;
        }
        UNLOCK();
        if (bVar12) {
          plVar10 = plVar9;
          if (plVar9 != (longlong *)0x0) {
            plVar11 = *(longlong **)(param_1 + 8);
            LOCK();
            *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
            UNLOCK();
            LOCK();
            plVar10 = plVar9 + 1;
            lVar3 = *plVar10;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)lVar3 == 1) {
              (**(code **)*plVar9)(plVar9);
              LOCK();
              piVar2 = (int *)((longlong)plVar9 + 0xc);
              iVar5 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*plVar9 + 8))(plVar9,1);
              }
            }
            LOCK();
            *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
            UNLOCK();
            plVar10 = plVar9;
          }
          break;
        }
        LOCK();
        iVar5 = (int)plVar9[1];
        bVar12 = iVar5 == 0;
        if (bVar12) {
          *(int *)(plVar9 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
      }
    }
    local_128 = (longlong *)0x0;
    local_118 = 0;
    puVar6 = (undefined8 *)FUN_140438ef0(0x18,local_148);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &PTR_FUN_14461b758;
      puVar6[1] = plVar11;
      puVar6[2] = plVar10;
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
      }
    }
    local_158[0] = FUN_14202c950;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar10 + 1;
      lVar3 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
      LOCK();
      plVar9 = plVar10 + 1;
      lVar3 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
    }
    cVar4 = FUN_142045c10(*(undefined8 *)(param_1 + 0x78));
    if (cVar4 == '\0') {
      TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_1f8,local_158);
      local_218 = 0;
      local_210 = 0x1a;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_218,0);
      local_228 = 0x3f;
      FGenericPlatformString::Convert<char,wchar_t>(local_218,0x1a,"FGFxObject::GetPosition()");
      FUN_142018510(local_108,&local_218,local_1f8);
      uVar8 = FUN_142037d70(local_108,local_1a8);
      FUN_1420326d0(param_1,uVar8);
      FUN_1420385a0(local_108,param_2);
      FUN_140ce1dc0(local_108);
    }
    else {
      if (local_118 != 0) {
        plVar9 = local_148;
        if (local_128 != (longlong *)0x0) {
          plVar9 = local_128;
        }
        if (plVar9 != (longlong *)0x0) {
          plVar7 = (longlong *)(**(code **)(*plVar9 + 8))();
        }
      }
      puVar6 = (undefined8 *)(*local_158[0])(local_204,plVar7);
      *param_2 = *puVar6;
    }
    if (local_118 != 0) {
      plVar7 = local_148;
      if (local_128 != (longlong *)0x0) {
        plVar7 = local_128;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_128 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  else {
    *(undefined4 *)param_2 = (undefined4)DAT_1468b5d88;
    *(undefined4 *)((longlong)param_2 + 4) = DAT_1468b5d88._4_4_;
  }
  return param_2;
}



// FUNCTION 14203c480 FUN_14203c480 body=8 status=ok
// SIG undefined FUN_14203c480(void)

undefined8 * FUN_14203c480(void)

{
  return &DAT_1464f0788;
}



// FUNCTION 14203c490 FUN_14203c490 body=8 status=ok
// SIG undefined FUN_14203c490(void)

longlong FUN_14203c490(longlong param_1)

{
  return param_1 + 0x218;
}



// FUNCTION 14203c4a0 FUN_14203c4a0 body=8 status=ok
// SIG undefined FUN_14203c4a0(void)

longlong FUN_14203c4a0(longlong param_1)

{
  return param_1 + 0x288;
}



// FUNCTION 14203c4b0 FUN_14203c4b0 body=133 status=ok
// SIG undefined FUN_14203c4b0(void)

void FUN_14203c4b0(byte *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = 0.0;
  if (param_1[2] == 0) {
    fVar2 = 0.0;
  }
  else {
    fVar2 = (float)param_1[2] * 0.003921569;
  }
  *param_2 = fVar2;
  if (param_1[1] == 0) {
    fVar2 = 0.0;
  }
  else {
    fVar2 = (float)param_1[1] * 0.003921569;
  }
  param_2[1] = fVar2;
  if (*param_1 == 0) {
    fVar2 = 0.0;
  }
  else {
    fVar2 = (float)*param_1 * 0.003921569;
  }
  param_2[2] = fVar2;
  if (param_1[3] != 0) {
    fVar1 = (float)param_1[3] * 0.003921569;
  }
  param_2[3] = fVar1;
  return;
}



// FUNCTION 14203c560 FUN_14203c560 body=45 status=ok
// SIG undefined FUN_14203c560(void)

undefined8 * FUN_14203c560(longlong *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 local_res8 [32];
  
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x28))(param_1,local_res8);
  *param_2 = 0;
  uVar1 = *puVar2;
  *(undefined4 *)((longlong)param_2 + 0xc) = puVar2[1];
  *(undefined4 *)(param_2 + 1) = uVar1;
  return param_2;
}



// FUNCTION 14203c590 FUN_14203c590 body=66 status=ok
// SIG undefined FUN_14203c590(void)

void FUN_14203c590(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (param_2 != (undefined8 *)0x0) {
    param_2[1] = 0;
    *param_2 = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    plVar1 = *(longlong **)(param_1 + 8);
    param_2[1] = plVar1;
    if (plVar1 != (longlong *)0x0) {
      uVar2 = (**(code **)(*plVar1 + 0x128))();
      *param_2 = uVar2;
      *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_2[1] + 0x50);
    }
  }
  return;
}



// FUNCTION 14203c600 FUN_14203c600 body=54 status=ok
// SIG undefined FUN_14203c600(void)

undefined8 FUN_14203c600(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0xb8);
  if (cVar1 != '\0') {
    uVar2 = FWeakObjectPtr::Get(param_1 + 0xb8);
    uVar2 = UTextureRenderTarget::GetRenderTargetResource(uVar2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 14203c640 FUN_14203c640 body=157 status=ok
// SIG undefined FUN_14203c640(void)

void FUN_14203c640(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_18;
  longlong local_10;
  
  lVar2 = *(longlong *)(param_1 + 0xd0);
  cVar1 = FWeakObjectPtr::IsValid(lVar2 + 0xb8);
  if ((cVar1 != '\0') && (lVar2 = FWeakObjectPtr::Get(lVar2 + 0xb8), lVar2 != 0)) {
    return;
  }
  local_18 = *(undefined8 *)(param_1 + 0xd0);
  local_10 = *(longlong *)(param_1 + 0xd8);
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x70,0,1);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    uVar3 = FWeakObjectPtr::Get(param_1 + 0x70);
  }
  FUN_142030610(uVar3,param_2,&local_18);
  return;
}



// FUNCTION 14203c6e0 FUN_14203c6e0 body=802 status=ok
// SIG undefined FUN_14203c6e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14203c6e0(longlong param_1)

{
  char *pcVar1;
  char cVar2;
  DWORD DVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  longlong lVar7;
  undefined1 auStack_2c8 [32];
  undefined2 local_2a8;
  undefined8 local_298;
  undefined8 local_290;
  undefined1 *local_288 [2];
  undefined1 local_278 [32];
  undefined8 local_258;
  undefined4 local_248;
  undefined1 local_238 [80];
  undefined1 local_1e8 [16];
  undefined8 local_1d8;
  undefined8 local_188;
  undefined8 local_180;
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
  undefined8 local_120;
  undefined2 local_114;
  undefined1 local_108 [192];
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_2c8;
  pcVar1 = (char *)(*(longlong *)(param_1 + 0x78) + 0x30);
  LOCK();
  cVar2 = *pcVar1;
  if (cVar2 == '\0') {
    *pcVar1 = '\0';
    cVar2 = '\0';
  }
  UNLOCK();
  if (cVar2 < '\x06') {
    cVar2 = FUN_142045c10(*(undefined8 *)(param_1 + 0x78));
    if (cVar2 == '\0') {
      local_258 = 0;
      local_248 = 0;
      puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_278);
      if (puVar4 != (undefined8 *)0x0) {
        puVar4[1] = param_1;
        *puVar4 = &PTR_FUN_143f77b70;
      }
      local_298 = 0;
      local_288[0] = &LAB_14202c670;
      local_290 = 0x1a;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_298,0);
      local_2a8 = 0x3f;
      FGenericPlatformString::Convert<char,wchar_t>(local_298,0x1a,"FGFxObject::GetRotation()");
      FUN_142018350(local_108,&local_298,local_288);
      uVar5 = FUN_142037690(local_108,local_238);
      FUN_1420326d0(param_1,uVar5);
      lVar7 = local_48;
      if (local_48 != 0) {
        while (lVar7 = local_48, local_48 != 0) {
          if (*(char *)(local_48 + 0x58) != '\0') goto LAB_14203c9b5;
          cVar2 = FUN_1415ad720(&DAT_1468e2448);
          if (((cVar2 == '\0') && (DAT_1468c21ae != '\0')) &&
             (DVar3 = GetCurrentThreadId(), DVar3 != DAT_1468c21c0)) {
            ppuVar6 = (undefined **)FUN_14203ca70();
            if (ppuVar6 != (undefined **)0x0) goto LAB_14203c92c;
          }
          else {
            ppuVar6 = &PTR_PTR_1464f05c0;
LAB_14203c92c:
            FUN_1420714f0(ppuVar6);
          }
          lVar7 = local_48;
          if (local_48 == 0) break;
          if (*(char *)(local_48 + 0x58) == '\0') {
            (**(code **)(**(longlong **)(local_48 + 0x50) + 0x20))
                      (*(longlong **)(local_48 + 0x50),5);
          }
        }
      }
      cVar2 = *(char *)(lVar7 + 0x58);
      while (cVar2 == '\0') {
        (**(code **)(**(longlong **)(lVar7 + 0x50) + 0x20))
                  (*(longlong **)(lVar7 + 0x50),0x5d638865,0);
        cVar2 = *(char *)(lVar7 + 0x58);
      }
LAB_14203c9b5:
      uVar5 = *(undefined8 *)(lVar7 + 0x60);
      FUN_140ce1dc0(local_108);
      return uVar5;
    }
    local_114 = 0;
    local_180 = 0;
    local_170 = 0;
    local_168 = 0;
    local_150 = 0;
    local_140 = 0;
    local_138 = 0;
    local_128 = 0;
    local_188 = 0x3f800000;
    local_178 = 0x3f80000000000000;
    local_160 = 0x3f800000;
    local_158 = 0x3f800000;
    local_148 = 0x3f80000000000000;
    local_130 = 0x3f800000;
    local_120 = 0x3f80000000000000;
    if ((((byte)*(undefined4 *)(param_1 + 0xa0) & 0x8f) == 10) &&
       (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0xd8))
                          (*(longlong **)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa8),local_1e8)
       , cVar2 != '\0')) {
      return local_1d8;
    }
  }
  return 0;
}



// FUNCTION 14203ca10 FUN_14203ca10 body=9 status=ok
// SIG undefined FUN_14203ca10(void)

undefined4 FUN_14203ca10(longlong param_1)

{
  return *(undefined4 *)(param_1 + 600);
}



// FUNCTION 14203ca50 FUN_14203ca50 body=8 status=ok
// SIG undefined FUN_14203ca50(void)

undefined * FUN_14203ca50(void)

{
  return &DAT_1464f0770;
}



// FUNCTION 14203ca70 FUN_14203ca70 body=259 status=ok
// SIG undefined FUN_14203ca70(void)

undefined ** FUN_14203ca70(void)

{
  longlong lVar1;
  int iVar2;
  DWORD DVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  bool bVar8;
  
  ppuVar7 = (undefined **)0x0;
  if (DAT_146acd048 == '\0') {
    LOCK();
    DAT_146accf28 = (uint)(*DAT_146accf68 != 0);
    UNLOCK();
    DAT_146acd048 = '\x01';
  }
  LOCK();
  bVar8 = DAT_146accf28 == 0;
  if (bVar8) {
    DAT_146accf28 = 0;
  }
  UNLOCK();
  if (bVar8) {
    return &PTR_PTR_1464f05c0;
  }
  AcquireSRWLockShared((PSRWLOCK)&DAT_146accf30);
  DVar3 = GetCurrentThreadId();
  if (DAT_1464f0578 != DAT_1464f05a4) {
    puVar5 = DAT_1464f05b0;
    if (DAT_1464f05b0 == (undefined *)0x0) {
      puVar5 = &DAT_1464f05a8;
    }
    iVar2 = *(int *)(puVar5 + ((longlong)DAT_1464f05b8 - 1U & (longlong)(int)DVar3) * 4);
    while (iVar2 != -1) {
      lVar1 = (longlong)iVar2 * 0x18;
      if (*(DWORD *)(lVar1 + DAT_1464f0570) == DVar3) {
        ppuVar6 = (undefined **)(lVar1 + DAT_1464f0570);
        if (iVar2 != -1) goto LAB_14203cb3d;
        break;
      }
      iVar2 = *(int *)(lVar1 + 0x10 + DAT_1464f0570);
    }
  }
  ppuVar6 = ppuVar7;
LAB_14203cb3d:
  ppuVar4 = ppuVar6 + 1;
  if (ppuVar6 == (undefined **)0x0) {
    ppuVar4 = ppuVar7;
  }
  if (ppuVar4 != (undefined **)0x0) {
    ppuVar7 = (undefined **)*ppuVar4;
  }
  ReleaseSRWLockShared((PSRWLOCK)&DAT_146accf30);
  return ppuVar7;
}



// FUNCTION 14203cb80 FUN_14203cb80 body=628 status=ok
// SIG undefined FUN_14203cb80(void)

undefined ** FUN_14203cb80(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  undefined **ppuVar3;
  char cVar4;
  BOOL BVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *local_48;
  longlong *local_40;
  longlong local_38 [2];
  undefined1 local_28 [16];
  
  cVar4 = FUN_142056970();
  if ((cVar4 == '\0') && (cVar4 = (**(code **)(*param_1 + 0x3f8))(param_1), cVar4 == '\0')) {
    BVar5 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146accb40);
    if (BVar5 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146accb40);
    }
    if ((&DAT_146accb68)[(longlong)DAT_146acd00c * 2] == 0) {
      puVar6 = (undefined8 *)operator_new(200);
      if (puVar6 == (undefined8 *)0x0) {
        puVar6 = (undefined8 *)0x0;
      }
      else {
        FString::PrintfImpl(local_38,L"GFxPooledMovieTaskManager%d",DAT_146acd00c);
        uVar7 = FString::FString(local_28,local_38);
        FUN_142062130(puVar6,uVar7,0,0);
        *puVar6 = &PTR_FUN_144f70d58;
        puVar6[0xd] = &PTR_LAB_144f70db0;
        puVar6[0xe] = &PTR_LAB_144f70de0;
        InitializeSRWLock((PSRWLOCK)(puVar6 + 0x15));
        puVar6[0x16] = 0;
        puVar6[0x17] = 0;
        *(undefined4 *)(puVar6 + 0x18) = 0;
        LOCK();
        *(undefined4 *)(puVar6 + 0x18) = 1;
        UNLOCK();
        if (local_38[0] != 0) {
          FMemory::Free();
        }
      }
      plVar9 = (longlong *)0x0;
      plVar8 = (longlong *)operator_new(0x18);
      if (plVar8 != (longlong *)0x0) {
        *(undefined4 *)(plVar8 + 1) = 1;
        *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
        *plVar8 = (longlong)&PTR_FUN_143f3f2e0;
        plVar8[2] = (longlong)puVar6;
        plVar9 = plVar8;
      }
      lVar10 = (longlong)DAT_146acd00c;
      local_48 = puVar6;
      local_40 = plVar9;
      SharedPointerInternals::EnableSharedFromThis(&local_48,puVar6,puVar6);
      if ((undefined8 **)(&DAT_146accb68 + lVar10 * 2) != &local_48) {
        (&DAT_146accb68)[lVar10 * 2] = puVar6;
        local_48 = (undefined8 *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&DAT_146accb70 + lVar10 * 2,&local_40);
        plVar9 = local_40;
      }
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar8 = plVar9 + 1;
        lVar10 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
    }
    plVar9 = (longlong *)(&DAT_146accb70)[(longlong)DAT_146acd00c * 2];
    ppuVar3 = (undefined **)(&DAT_146accb68)[(longlong)DAT_146acd00c * 2];
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146accb40);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar9 + 1;
      lVar10 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    return ppuVar3;
  }
  return &PTR_PTR_1464f05c0;
}



// FUNCTION 14203ce00 FUN_14203ce00 body=30 status=ok
// SIG undefined FUN_14203ce00(void)

undefined8 FUN_14203ce00(longlong param_1,undefined8 param_2)

{
  FText::FromString(param_2,param_1 + 0x48);
  return param_2;
}



// FUNCTION 14203ce50 FUN_14203ce50 body=61 status=ok
// SIG undefined FUN_14203ce50(void)

undefined1 FUN_14203ce50(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x70,0,1);
  if (cVar1 != '\0') {
    lVar2 = FWeakObjectPtr::Get(param_1 + 0x70);
    if (lVar2 != 0) {
      return *(undefined1 *)(lVar2 + 0x154);
    }
  }
  return 0;
}



// FUNCTION 14203ce90 FUN_14203ce90 body=613 status=ok
// SIG undefined FUN_14203ce90(void)

undefined8 * FUN_14203ce90(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint *puVar11;
  int iVar12;
  uint local_b8;
  uint uStack_b4;
  int iStack_a4;
  uint uStack_a0;
  undefined4 uStack_9c;
  longlong *local_90;
  longlong *local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined *local_68;
  uint uStack_60;
  int iStack_5c;
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 uStack_48;
  int iStack_40;
  int iStack_3c;
  uint uStack_38;
  int iStack_34;
  undefined8 uStack_30;
  
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return param_1;
  }
  local_88 = (longlong *)0x0;
  uStack_80 = 0;
  AcquireSRWLockShared((PSRWLOCK)&DAT_146accc70);
  uVar9 = 0;
  uStack_b4 = 1;
  local_b8 = 0;
  iStack_a4 = 0;
  uStack_a0 = 0;
  iVar12 = (int)DAT_1464f0718;
  if (iVar12 != 0) {
    puVar11 = DAT_1464f0710;
    if (DAT_1464f0710 == (uint *)0x0) {
      puVar11 = (uint *)&DAT_1464f0700;
    }
    uVar3 = *puVar11;
    uVar8 = uVar9;
    uVar10 = uVar9;
    while (uVar3 == 0) {
      iVar6 = (int)uVar8;
      uStack_a0 = (int)uVar10 + 0x20;
      uVar10 = (ulonglong)uStack_a0;
      local_b8 = iVar6 + 1;
      uVar8 = (ulonglong)local_b8;
      if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_14203cfaf;
      uVar3 = puVar11[(longlong)iVar6 + 1];
    }
    uStack_b4 = -uVar3 & uVar3;
    iVar6 = 0x1f;
    if (uStack_b4 != 0) {
      for (; uStack_b4 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_b4 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    iStack_a4 = (uStack_a0 - iVar6) + 0x1f;
    if (iVar12 < iStack_a4) {
LAB_14203cfaf:
      iStack_a4 = iVar12;
    }
  }
  uStack_48 = CONCAT44(uStack_b4,local_b8);
  uStack_60 = 0xffffffff;
  iStack_5c = iStack_a4;
  local_58 = CONCAT44(uStack_9c,uStack_a0);
  local_50 = &DAT_1464f06f0;
  _iStack_40 = CONCAT44(iVar12,-1 << ((byte)DAT_1464f0718 & 0x1f));
  local_78 = 0x464f06f0;
  uStack_74 = 1;
  uStack_70 = local_b8;
  uStack_6c = uStack_b4;
  local_68 = &DAT_1464f0700;
  uStack_30 = local_58;
  uStack_38 = uStack_60;
  iStack_34 = iStack_5c;
  while( true ) {
    if (((iStack_5c == iVar12) && (local_68 == &DAT_1464f0700)) &&
       ((longlong *)CONCAT44(uStack_74,local_78) == &DAT_1464f06f0)) goto LAB_14203d0b1;
    lVar7 = (longlong)iStack_5c * 0x20 + *(longlong *)CONCAT44(uStack_74,local_78);
    plVar4 = *(longlong **)(lVar7 + 8);
    lVar5 = *plVar4;
    uVar8 = uVar9;
    if (lVar5 != 0) {
      uVar8 = *(ulonglong *)(lVar5 + 0x10);
    }
    if (param_2 == uVar8) break;
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
  }
  local_90 = *(longlong **)(lVar7 + 0x10);
  if (local_90 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_90 + 1) = (int)local_90[1] + 1;
    UNLOCK();
  }
  local_88 = plVar4;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&uStack_80,&local_90);
  plVar4 = local_90;
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_90 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar12 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*local_90 + 8))(local_90,1);
      }
    }
  }
LAB_14203d0b1:
  ReleaseSRWLockShared((PSRWLOCK)&DAT_146accc70);
  *param_1 = local_88;
  param_1[1] = uStack_80;
  return param_1;
}



// FUNCTION 14203d100 FUN_14203d100 body=485 status=ok
// SIG undefined FUN_14203d100(void)

undefined8 * FUN_14203d100(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined2 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined8 local_28;
  longlong *local_20;
  undefined8 local_18;
  longlong *plStack_10;
  
  puVar12 = (undefined8 *)0x0;
  iVar14 = 0;
  AcquireSRWLockShared((PSRWLOCK)&DAT_146accc70);
  if (*(int *)(param_2 + 1) == 0) {
    puVar10 = &DAT_143f3eda8;
  }
  else {
    puVar10 = (undefined2 *)*param_2;
    iVar14 = *(int *)(param_2 + 1) + -1;
  }
  lVar7 = FFnv::MemFnv64(puVar10,iVar14 * 2,1);
  if (DAT_1464f06f8 != DAT_1464f0724) {
    puVar8 = DAT_1464f0730;
    if (DAT_1464f0730 == (undefined *)0x0) {
      puVar8 = &DAT_1464f0728;
    }
    iVar14 = *(int *)(puVar8 + ((longlong)((int)((ulonglong)lVar7 >> 0x20) * 0x17 + (int)lVar7) &
                               (longlong)DAT_1464f0738 - 1U) * 4);
    while (iVar14 != -1) {
      lVar11 = (longlong)iVar14 * 0x20;
      if (*(longlong *)(lVar11 + DAT_1464f06f0) == lVar7) {
        puVar9 = (undefined8 *)(lVar11 + DAT_1464f06f0);
        if (iVar14 != -1) goto LAB_14203d1d7;
        break;
      }
      iVar14 = *(int *)(lVar11 + DAT_1464f06f0 + 0x18);
    }
  }
  puVar9 = puVar12;
LAB_14203d1d7:
  puVar13 = puVar9 + 1;
  if (puVar9 == (undefined8 *)0x0) {
    puVar13 = puVar12;
  }
  ReleaseSRWLockShared((PSRWLOCK)&DAT_146accc70);
  if (puVar13 == (undefined8 *)0x0) {
    puVar9 = &local_18;
    local_18 = 0;
    plStack_10 = (longlong *)0x0;
    bVar5 = false;
    bVar4 = true;
  }
  else {
    local_20 = (longlong *)puVar13[1];
    puVar12 = (undefined8 *)*puVar13;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_20 + 1) = (int)local_20[1] + 1;
      UNLOCK();
    }
    puVar9 = &local_28;
    bVar5 = true;
    bVar4 = false;
    local_28 = puVar12;
  }
  uVar3 = puVar9[1];
  puVar9[1] = 0;
  *puVar9 = 0;
  plVar6 = plStack_10;
  *param_1 = puVar12;
  param_1[1] = uVar3;
  if ((bVar4) && (plStack_10 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_10 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_10)(plStack_10);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar14 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (**(code **)(*plStack_10 + 8))(plStack_10,1);
      }
    }
  }
  plVar6 = local_20;
  if ((bVar5) && (local_20 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar14 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 14203d2f0 GetWidgetType body=30 status=ok
// SIG undefined GetWidgetType(void)

undefined8 FSnapshotWidgetReflectorNode::GetWidgetType(longlong param_1,undefined8 param_2)

{
  FText::FromString(param_2,param_1 + 0x58);
  return param_2;
}



// FUNCTION 14203d310 FUN_14203d310 body=46 status=ok
// SIG undefined FUN_14203d310(void)

undefined8 FUN_14203d310(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0xb8);
  if (cVar1 != '\0') {
    uVar2 = FWeakObjectPtr::Get(param_1 + 0xb8);
    return uVar2;
  }
  return 0;
}



// FUNCTION 14203d350 FUN_14203d350 body=175 status=ok
// SIG undefined FUN_14203d350(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_14203d350(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 local_44;
  undefined8 local_3c;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  uVar2 = uRam0000000146acc72c;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = uVar2;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  uVar2 = uRam0000000146acc724 & uRam0000000146acc734;
  uVar3 = uRam0000000146acc728 & uRam0000000146acc738;
  uVar4 = uRam0000000146acc72c & uRam0000000146acc73c;
  param_2[8] = _DAT_146acc720 & _DAT_146acc730;
  param_2[9] = uVar2;
  param_2[10] = uVar3;
  param_2[0xb] = uVar4;
  plVar1 = *(longlong **)(param_1 + 0x78);
  if (plVar1 != (longlong *)0x0) {
    local_20 = 0x3f800000;
    local_44 = 0;
    local_3c = 0;
    local_30 = 0;
    local_28 = 0;
    local_48 = 0x3f800000;
    local_34 = 0x3f800000;
    (**(code **)(*plVar1 + 0x1e0))(plVar1,&local_48);
    FUN_142082fd0(param_2,&local_48);
  }
  return param_2;
}



// FUNCTION 14203d400 FUN_14203d400 body=182 status=ok
// SIG undefined FUN_14203d400(void)

undefined4 * FUN_14203d400(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  bool bVar2;
  
  LOCK();
  bVar2 = *(int *)(param_1 + 0x180) == 0;
  if (bVar2) {
    *(int *)(param_1 + 0x180) = 0;
  }
  UNLOCK();
  if ((bVar2) && (plVar1 = *(longlong **)(param_1 + 0x78), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,param_1 + 0x184);
  }
  *param_2 = *(undefined4 *)(param_1 + 0x184);
  param_2[1] = *(undefined4 *)(param_1 + 0x188);
  param_2[2] = *(undefined4 *)(param_1 + 0x18c);
  param_2[3] = *(undefined4 *)(param_1 + 400);
  param_2[4] = *(undefined4 *)(param_1 + 0x194);
  param_2[5] = *(undefined4 *)(param_1 + 0x198);
  param_2[10] = *(undefined4 *)(param_1 + 0x1ac);
  param_2[6] = *(undefined4 *)(param_1 + 0x19c);
  param_2[7] = *(undefined4 *)(param_1 + 0x1a0);
  param_2[8] = *(undefined4 *)(param_1 + 0x1a4);
  param_2[9] = *(undefined4 *)(param_1 + 0x1a8);
  param_2[0xb] = *(undefined4 *)(param_1 + 0x1b0);
  param_2[0xc] = *(undefined4 *)(param_1 + 0x1b4);
  return param_2;
}



// FUNCTION 14203d4c0 FUN_14203d4c0 body=55 status=ok
// SIG undefined FUN_14203d4c0(void)

float * FUN_14203d4c0(undefined8 param_1,float *param_2)

{
  int local_38;
  int local_34;
  
  FUN_14203d400();
  *param_2 = (float)local_38;
  param_2[1] = (float)local_34;
  return param_2;
}



// FUNCTION 14203d500 FUN_14203d500 body=196 status=ok
// SIG undefined FUN_14203d500(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_14203d500(undefined8 param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [96];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined2 local_24;
  undefined1 local_22;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  local_98 = 0x3f800000;
  local_88 = 0x3f80000000000000;
  local_70 = 0x3f800000;
  local_68 = 0x3f800000;
  local_58 = 0x3f80000000000000;
  local_40 = 0x3f800000;
  local_30 = 0x3f80000000000000;
  local_90 = 0;
  local_80 = 0;
  local_78 = 0;
  local_60 = 0;
  local_50 = 0;
  local_48 = 0;
  local_38 = 0;
  local_24 = 0;
  cVar1 = FUN_142039630(param_1,local_f8);
  uVar2 = 0;
  if (cVar1 != '\0') {
    uVar2 = local_22;
  }
  return uVar2;
}



// FUNCTION 14203d5d0 FUN_14203d5d0 body=330 status=ok
// SIG undefined FUN_14203d5d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_14203d5d0(longlong param_1,undefined8 *param_2)

{
  char *pcVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  code *local_188 [2];
  undefined1 local_178 [32];
  undefined8 local_158;
  undefined4 local_148;
  undefined1 local_138 [80];
  undefined1 local_e8 [208];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  *param_2 = 0x3f800000;
  param_2[1] = 0;
  lVar2 = *(longlong *)(param_1 + 0x78);
  *(undefined4 *)(param_2 + 2) = 0;
  *(undefined4 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x14) = 0x3f800000;
  pcVar1 = (char *)(lVar2 + 0x30);
  LOCK();
  cVar3 = *pcVar1;
  if (cVar3 == '\0') {
    *pcVar1 = '\0';
    cVar3 = '\0';
  }
  UNLOCK();
  if (cVar3 < '\x06') {
    local_158 = 0;
    local_148 = 0;
    local_198 = param_1;
    uStack_190 = param_2;
    puVar4 = (undefined8 *)FUN_140438ef0(0x18,local_178);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &PTR_FUN_143f77c18;
      *(undefined4 *)(puVar4 + 1) = (undefined4)local_198;
      *(undefined4 *)((longlong)puVar4 + 0xc) = local_198._4_4_;
      *(undefined4 *)(puVar4 + 2) = (undefined4)uStack_190;
      *(undefined4 *)((longlong)puVar4 + 0x14) = uStack_190._4_4_;
    }
    local_1a8 = 0;
    local_188[0] = FUN_14202c100;
    local_1a0 = 0x1d;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1a8,0);
    FGenericPlatformString::Memcpy(local_1a8,L"FGFxObject::GetWorldMatrix()",0x3a);
    FUN_1410b2c00(local_e8,&local_1a8,local_188);
    uVar5 = FUN_1410ca7e0(local_e8,local_138);
    FUN_1420326d0(param_1,uVar5);
    FUN_140d1b3a0(local_e8);
    FUN_140ce1dc0(local_e8);
  }
  return param_2;
}



// FUNCTION 14203d720 FUN_14203d720 body=406 status=ok
// SIG undefined FUN_14203d720(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_14203d720(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  char *pcVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_1e8 [32];
  undefined2 local_1c8;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  code *local_198 [2];
  undefined1 local_188 [32];
  undefined8 local_168;
  undefined4 local_158;
  undefined1 local_148 [80];
  undefined1 local_f8 [208];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  pcVar1 = (char *)(*(longlong *)(param_1 + 0x78) + 0x30);
  LOCK();
  cVar2 = *pcVar1;
  if (cVar2 == '\0') {
    *pcVar1 = '\0';
    cVar2 = '\0';
  }
  UNLOCK();
  if (cVar2 < '\x06') {
    cVar2 = FUN_142045c10(*(undefined8 *)(param_1 + 0x78));
    if (cVar2 == '\0') {
      local_168 = 0;
      local_158 = 0;
      local_1a8 = param_1;
      uStack_1a0 = param_3;
      puVar3 = (undefined8 *)FUN_140438ef0(0x18,local_188);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &PTR_FUN_143f77c18;
        *(undefined4 *)(puVar3 + 1) = (undefined4)local_1a8;
        *(undefined4 *)((longlong)puVar3 + 0xc) = local_1a8._4_4_;
        *(undefined4 *)(puVar3 + 2) = (undefined4)uStack_1a0;
        *(undefined4 *)((longlong)puVar3 + 0x14) = uStack_1a0._4_4_;
      }
      local_1b8 = 0;
      local_198[0] = FUN_14202c680;
      local_1b0 = 0x1a;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b8,0);
      local_1c8 = 0x3f;
      FGenericPlatformString::Convert<char,wchar_t>(local_1b8,0x1a,"FGFxObject::GlobalToLocal");
      FUN_142018510(local_f8,&local_1b8,local_198);
      uVar4 = FUN_142037d70(local_f8,local_148);
      FUN_1420326d0(param_1,uVar4);
      FUN_1420385a0(local_f8,param_2);
      FUN_140ce1dc0(local_f8);
    }
    else {
      FUN_14203d8c0(param_1,param_2,param_3);
    }
  }
  else {
    *param_2 = (undefined4)DAT_1468b5d88;
    param_2[1] = DAT_1468b5d88._4_4_;
  }
  return param_2;
}



// FUNCTION 14203d8c0 FUN_14203d8c0 body=803 status=ok
// SIG undefined FUN_14203d8c0(void)

float * FUN_14203d8c0(longlong param_1,float *param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  undefined1 *puVar3;
  longlong lVar4;
  double dVar5;
  undefined8 in_stack_fffffffffffffe98;
  undefined4 uVar6;
  undefined8 local_148;
  undefined8 uStack_140;
  longlong *local_138;
  uint local_130;
  undefined8 local_128;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  longlong *local_100;
  uint local_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  longlong *local_d0;
  uint local_c8;
  double local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  longlong *local_a0;
  uint local_98;
  double local_90;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  
  uVar6 = (undefined4)((ulonglong)in_stack_fffffffffffffe98 >> 0x20);
  if (((byte)*(undefined4 *)(param_1 + 0xa0) & 0x8f) == 10) {
    local_118._0_4_ = (float)param_3;
    dVar5 = (double)(float)local_118;
    local_100 = (longlong *)0x0;
    local_f8 = 0;
    local_68 = 0;
    local_60 = 0;
    local_38 = 0;
    local_110 = 0xffffffffffffffff;
    uStack_108 = 0xffffffffffffffff;
    local_30 = 0;
    local_78 = 0xffffffffffffffff;
    uStack_70 = 0xffffffffffffffff;
    local_48 = 0xffffffffffffffff;
    uStack_40 = 0xffffffffffffffff;
    local_118 = param_3;
    FUN_142052be0(&local_78,dVar5);
    FUN_142052be0(&local_48,(double)local_118._4_4_);
    lVar4 = 2;
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x78);
    if (lVar1 != 0) {
      Scaleform::GFx::Movie::CreateObject
                (lVar1,&local_110,PTR_s_flash_geom_Point_1464f0670,&local_78,CONCAT44(uVar6,2));
    }
    local_148 = 0xffffffffffffffff;
    uStack_140 = 0xffffffffffffffff;
    local_138 = (longlong *)0x0;
    local_130 = 0;
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x30))
                      (*(longlong **)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa8),&local_148,
                       "globalToLocal",&local_110,1,
                       ((byte)*(undefined4 *)(param_1 + 0xa0) & 0x8f) == 10);
    if (cVar2 != '\0') {
      local_b0 = 0xffffffffffffffff;
      uStack_a8 = 0xffffffffffffffff;
      local_a0 = (longlong *)0x0;
      local_98 = 0;
      local_e0 = 0xffffffffffffffff;
      uStack_d8 = 0xffffffffffffffff;
      local_d0 = (longlong *)0x0;
      local_c8 = 0;
      (**(code **)(*local_138 + 0x20))
                (local_138,local_128,&DAT_144f67f24,&local_b0,((byte)local_130 & 0x8f) == 10);
      (**(code **)(*local_138 + 0x20))
                (local_138,local_128,&DAT_144f67fd4,&local_e0,((byte)local_130 & 0x8f) == 10);
      *param_2 = (float)local_90;
      param_2[1] = (float)local_c0;
      if ((local_c8 >> 6 & 1) != 0) {
        (**(code **)(*local_d0 + 0x10))(local_d0,&local_e0,local_c0);
        local_d0 = (longlong *)0x0;
      }
      local_c8 = 0;
      if ((local_98 >> 6 & 1) != 0) {
        (**(code **)(*local_a0 + 0x10))(local_a0,&local_b0,local_90);
        local_a0 = (longlong *)0x0;
      }
      local_98 = 0;
      if ((local_130 >> 6 & 1) != 0) {
        (**(code **)(*local_138 + 0x10))(local_138,&local_148,local_128);
        local_138 = (longlong *)0x0;
      }
      local_130 = 0;
      puVar3 = &stack0xffffffffffffffe8;
      do {
        lVar4 = lVar4 + -1;
        if ((*(uint *)(puVar3 + -0x18) >> 6 & 1) != 0) {
          (**(code **)(**(longlong **)(puVar3 + -0x20) + 0x10))
                    (*(longlong **)(puVar3 + -0x20),puVar3 + -0x30,*(undefined8 *)(puVar3 + -0x10));
          *(undefined8 *)(puVar3 + -0x20) = 0;
        }
        *(undefined4 *)(puVar3 + -0x18) = 0;
        puVar3 = puVar3 + -0x30;
      } while (lVar4 != 0);
      if ((local_f8 >> 6 & 1) == 0) {
        return param_2;
      }
      (**(code **)(*local_100 + 0x10))(local_100,&local_110,local_f0);
      return param_2;
    }
    if ((local_130 >> 6 & 1) != 0) {
      (**(code **)(*local_138 + 0x10))(local_138,&local_148,local_128);
      local_138 = (longlong *)0x0;
    }
    local_130 = 0;
    puVar3 = &stack0xffffffffffffffe8;
    do {
      lVar4 = lVar4 + -1;
      if ((*(uint *)(puVar3 + -0x18) >> 6 & 1) != 0) {
        (**(code **)(**(longlong **)(puVar3 + -0x20) + 0x10))
                  (*(longlong **)(puVar3 + -0x20),puVar3 + -0x30,*(undefined8 *)(puVar3 + -0x10));
        *(undefined8 *)(puVar3 + -0x20) = 0;
      }
      *(undefined4 *)(puVar3 + -0x18) = 0;
      puVar3 = puVar3 + -0x30;
    } while (lVar4 != 0);
    if ((local_f8 >> 6 & 1) != 0) {
      (**(code **)(*local_100 + 0x10))(local_100,&local_110,local_f0);
    }
  }
  *(undefined8 *)param_2 = DAT_1468b5d88;
  return param_2;
}



// FUNCTION 14203dbf0 FUN_14203dbf0 body=380 status=ok
// SIG undefined FUN_14203dbf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14203dbf0(longlong param_1,undefined8 *param_2)

{
  char *pcVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  undefined1 auStack_148 [32];
  longlong local_128;
  longlong local_120 [3];
  undefined1 *local_108 [2];
  undefined1 local_f8 [32];
  undefined8 local_d8;
  undefined4 local_c8;
  undefined1 local_b8 [128];
  longlong local_38;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  pcVar1 = (char *)(*(longlong *)(param_1 + 0x78) + 0x30);
  LOCK();
  cVar2 = *pcVar1;
  if (cVar2 == '\0') {
    *pcVar1 = '\0';
    cVar2 = '\0';
  }
  UNLOCK();
  if (cVar2 < '\x06') {
    cVar2 = FUN_142045c10(*(undefined8 *)(param_1 + 0x78));
    if (cVar2 == '\0') {
      local_128 = param_1;
      FString::FString(local_120,param_2);
      local_d8 = 0;
      local_c8 = 0;
      puVar4 = (undefined8 *)FUN_140438ef0(0x20,local_f8);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = &PTR_CopyToEmptyStorage_144553d08;
        puVar4[1] = local_128;
        FString::FString(puVar4 + 2,local_120);
      }
      local_108[0] = &LAB_14202c740;
      FUN_1420326d0(param_1,local_108);
      if (local_120[0] != 0) {
        FMemory::Free();
      }
    }
    else if (((byte)*(undefined4 *)(param_1 + 0xa0) & 0x8f) == 10) {
      if (*(int *)(param_2 + 1) == 0) {
        puVar5 = &DAT_143f3eda8;
      }
      else {
        puVar5 = (undefined2 *)*param_2;
      }
      lVar3 = TStringConversion<FTCHARToUTF8_Convert,128>::
              TStringConversion<FTCHARToUTF8_Convert,128>(local_b8,puVar5);
      (**(code **)(**(longlong **)(param_1 + 0x98) + 0x150))
                (*(longlong **)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa8),
                 *(undefined8 *)(lVar3 + 0x88),0);
      if (local_38 != 0) {
        FMemory::Free();
      }
      *(undefined4 *)(param_1 + 0x70) = 0;
      if (0x7fffffff < *(uint *)(param_1 + 0x74)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x68,0);
      }
      if (*(undefined2 **)(param_1 + 0x68) != (undefined2 *)0x0) {
        **(undefined2 **)(param_1 + 0x68) = 0;
      }
    }
  }
  return;
}



// FUNCTION 14203dd70 FUN_14203dd70 body=243 status=ok
// SIG undefined FUN_14203dd70(void)

void FUN_14203dd70(longlong param_1,undefined4 param_2)

{
  char *pcVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_5c;
  code *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  pcVar1 = (char *)(*(longlong *)(param_1 + 0x78) + 0x30);
  LOCK();
  cVar2 = *pcVar1;
  if (cVar2 == '\0') {
    *pcVar1 = '\0';
    cVar2 = '\0';
  }
  UNLOCK();
  if (cVar2 < '\x06') {
    cVar2 = FUN_142045c10(*(undefined8 *)(param_1 + 0x78));
    if (cVar2 == '\0') {
      local_28 = 0;
      local_18 = 0;
      puVar3 = (undefined8 *)FUN_140438ef0(0x18,local_48);
      if (puVar3 != (undefined8 *)0x0) {
        local_68 = (undefined4)param_1;
        uStack_64 = (undefined4)((ulonglong)param_1 >> 0x20);
        *puVar3 = &PTR_FUN_143f77c18;
        *(undefined4 *)(puVar3 + 1) = local_68;
        *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_64;
        *(undefined4 *)(puVar3 + 2) = param_2;
        *(undefined4 *)((longlong)puVar3 + 0x14) = uStack_5c;
      }
      local_58[0] = FUN_14202cc60;
      FUN_1420326d0(param_1,local_58);
    }
    else if (((byte)*(undefined4 *)(param_1 + 0xa0) & 0x8f) == 10) {
      (**(code **)(**(longlong **)(param_1 + 0x98) + 0x148))
                (*(longlong **)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa8),param_2,0);
      *(undefined4 *)(param_1 + 0x70) = 0;
      if (0x7fffffff < *(uint *)(param_1 + 0x74)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x68,0);
      }
      if (*(undefined2 **)(param_1 + 0x68) != (undefined2 *)0x0) {
        **(undefined2 **)(param_1 + 0x68) = 0;
      }
    }
  }
  return;
}



// FUNCTION 14203de70 FUN_14203de70 body=443 status=ok
// SIG undefined FUN_14203de70(void)

void FUN_14203de70(longlong param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong local_78;
  int local_70;
  int local_6c;
  undefined1 *local_68 [2];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  
  lVar6 = 0;
  pcVar1 = (char *)(*(longlong *)(param_1 + 0x78) + 0x30);
  LOCK();
  cVar2 = *pcVar1;
  if (cVar2 == '\0') {
    *pcVar1 = '\0';
    cVar2 = '\0';
  }
  UNLOCK();
  if (cVar2 < '\x06') {
    cVar2 = FUN_142045c10(*(undefined8 *)(param_1 + 0x78));
    iVar7 = 0;
    if (cVar2 == '\0') {
      local_78 = 0;
      local_6c = 0;
      lVar5 = lVar6;
      iVar8 = iVar7;
      if ((param_2 != (char *)0x0) && (iVar8 = 0, *param_2 != '\0')) {
        lVar5 = -1;
        do {
          lVar5 = lVar5 + 1;
        } while (param_2[lVar5] != '\0');
        iVar4 = (int)lVar5 + 1;
        local_70 = iVar4;
        if (0 < iVar4) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
        }
        iVar8 = local_6c;
        iVar7 = local_70;
        lVar5 = local_78;
        FGenericPlatformString::Convert<char,wchar_t>(local_78,iVar4,param_2,iVar4,0x3f);
      }
      local_38 = 0;
      local_28 = 0;
      puVar3 = (undefined8 *)FUN_140438ef0(0x20,local_58);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &PTR_CopyToEmptyStorage_144553d08;
        puVar3[1] = param_1;
        puVar3[2] = lVar5;
        *(int *)(puVar3 + 3) = iVar7;
        *(int *)((longlong)puVar3 + 0x1c) = iVar8;
        lVar5 = lVar6;
      }
      local_68[0] = &LAB_14202c740;
      FUN_1420326d0(param_1,local_68);
      if (lVar5 != 0) {
        FMemory::Free(lVar5);
      }
    }
    else if (((byte)*(undefined4 *)(param_1 + 0xa0) & 0x8f) == 10) {
      (**(code **)(**(longlong **)(param_1 + 0x98) + 0x150))
                (*(longlong **)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa8),param_2,0);
      *(undefined4 *)(param_1 + 0x70) = 0;
      if (0x7fffffff < *(uint *)(param_1 + 0x74)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x68,0);
      }
      if (*(undefined2 **)(param_1 + 0x68) != (undefined2 *)0x0) {
        **(undefined2 **)(param_1 + 0x68) = 0;
        return;
      }
    }
  }
  return;
}



// FUNCTION 14203e030 FUN_14203e030 body=497 status=ok
// SIG undefined FUN_14203e030(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14203e030(longlong param_1,short *param_2)

{
  char *pcVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_158 [32];
  longlong local_138;
  int local_130;
  int local_12c;
  undefined1 *local_128 [2];
  undefined1 local_118 [32];
  undefined8 local_f8;
  undefined4 local_e8;
  undefined1 local_d8 [128];
  longlong local_58;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  lVar3 = 0;
  pcVar1 = (char *)(*(longlong *)(param_1 + 0x78) + 0x30);
  LOCK();
  cVar2 = *pcVar1;
  if (cVar2 == '\0') {
    *pcVar1 = '\0';
    cVar2 = '\0';
  }
  UNLOCK();
  if (cVar2 < '\x06') {
    cVar2 = FUN_142045c10(*(undefined8 *)(param_1 + 0x78));
    iVar7 = 0;
    if (cVar2 == '\0') {
      local_138 = 0;
      local_12c = 0;
      lVar6 = lVar3;
      iVar8 = iVar7;
      if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
        lVar6 = -1;
        do {
          lVar6 = lVar6 + 1;
        } while (param_2[lVar6] != 0);
        iVar5 = (int)lVar6 + 1;
        local_130 = iVar5;
        if (0 < iVar5) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
        }
        iVar8 = local_12c;
        iVar7 = local_130;
        lVar6 = local_138;
        FGenericPlatformString::Memcpy(local_138,param_2,(longlong)iVar5 * 2);
      }
      local_f8 = 0;
      local_e8 = 0;
      puVar4 = (undefined8 *)FUN_140438ef0(0x20,local_118);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = &PTR_CopyToEmptyStorage_144553d08;
        puVar4[1] = param_1;
        puVar4[2] = lVar6;
        *(int *)(puVar4 + 3) = iVar7;
        *(int *)((longlong)puVar4 + 0x1c) = iVar8;
        lVar6 = lVar3;
      }
      local_128[0] = &LAB_14202c740;
      FUN_1420326d0(param_1,local_128);
      if (lVar6 != 0) {
        FMemory::Free(lVar6);
      }
    }
    else if (((byte)*(undefined4 *)(param_1 + 0xa0) & 0x8f) == 10) {
      lVar3 = TStringConversion<FTCHARToUTF8_Convert,128>::
              TStringConversion<FTCHARToUTF8_Convert,128>(local_d8,param_2);
      (**(code **)(**(longlong **)(param_1 + 0x98) + 0x150))
                (*(longlong **)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa8),
                 *(undefined8 *)(lVar3 + 0x88),0);
      if (local_58 != 0) {
        FMemory::Free();
      }
      *(undefined4 *)(param_1 + 0x70) = 0;
      if (0x7fffffff < *(uint *)(param_1 + 0x74)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x68,0);
      }
      if (*(undefined2 **)(param_1 + 0x68) != (undefined2 *)0x0) {
        **(undefined2 **)(param_1 + 0x68) = 0;
      }
    }
  }
  return;
}



// FUNCTION 14203e230 FUN_14203e230 body=422 status=ok
// SIG undefined FUN_14203e230(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14203e230(longlong param_1,undefined8 *param_2)

{
  char *pcVar1;
  short sVar2;
  short sVar3;
  char cVar4;
  short *psVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  longlong lVar8;
  undefined2 *puVar9;
  undefined1 auStack_148 [32];
  longlong local_128;
  longlong local_120 [3];
  undefined1 *local_108 [2];
  undefined1 local_f8 [32];
  undefined8 local_d8;
  undefined4 local_c8;
  undefined1 local_b8 [128];
  longlong local_38;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  pcVar1 = (char *)(*(longlong *)(param_1 + 0x78) + 0x30);
  LOCK();
  cVar4 = *pcVar1;
  if (cVar4 == '\0') {
    *pcVar1 = '\0';
    cVar4 = '\0';
  }
  UNLOCK();
  if (cVar4 < '\x06') {
    cVar4 = FUN_142045c10(*(undefined8 *)(param_1 + 0x78));
    if (cVar4 == '\0') {
      local_128 = param_1;
      FString::FString(local_120,param_2);
      local_d8 = 0;
      local_c8 = 0;
      puVar6 = (undefined8 *)FUN_140438ef0(0x20,local_f8);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = &PTR_CopyToEmptyStorage_144553d08;
        puVar6[1] = local_128;
        FString::FString(puVar6 + 2,local_120);
      }
      local_108[0] = &LAB_14202cbc0;
      FUN_1420326d0(param_1,local_108);
      if (local_120[0] != 0) {
        FMemory::Free();
      }
    }
    else if (((byte)*(undefined4 *)(param_1 + 0xa0) & 0x8f) == 10) {
      puVar9 = &DAT_143f3eda8;
      if (*(int *)(param_2 + 1) == 0) {
        puVar7 = &DAT_143f3eda8;
      }
      else {
        puVar7 = (undefined2 *)*param_2;
      }
      if (*(int *)(param_1 + 0x70) == 0) {
        psVar5 = &DAT_143f3eda8;
      }
      else {
        psVar5 = *(short **)(param_1 + 0x68);
      }
      lVar8 = (longlong)puVar7 - (longlong)psVar5;
      do {
        sVar2 = *psVar5;
        sVar3 = *(short *)((longlong)psVar5 + lVar8);
        if (sVar2 != sVar3) break;
        psVar5 = psVar5 + 1;
      } while (sVar3 != 0);
      if (sVar2 != sVar3) {
        if (*(int *)(param_2 + 1) != 0) {
          puVar9 = (undefined2 *)*param_2;
        }
        lVar8 = TStringConversion<FTCHARToUTF8_Convert,128>::
                TStringConversion<FTCHARToUTF8_Convert,128>(local_b8,puVar9);
        (**(code **)(**(longlong **)(param_1 + 0x98) + 0x150))
                  (*(longlong **)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa8),
                   *(undefined8 *)(lVar8 + 0x88),1);
        if (local_38 != 0) {
          FMemory::Free();
        }
        FString::operator=(param_1 + 0x68,param_2);
      }
    }
  }
  return;
}



// FUNCTION 14203e3e0 FUN_14203e3e0 body=243 status=ok
// SIG undefined FUN_14203e3e0(void)

void FUN_14203e3e0(longlong param_1,undefined4 param_2)

{
  char *pcVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_5c;
  code *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  pcVar1 = (char *)(*(longlong *)(param_1 + 0x78) + 0x30);
  LOCK();
  cVar2 = *pcVar1;
  if (cVar2 == '\0') {
    *pcVar1 = '\0';
    cVar2 = '\0';
  }
  UNLOCK();
  if (cVar2 < '\x06') {
    cVar2 = FUN_142045c10(*(undefined8 *)(param_1 + 0x78));
    if (cVar2 == '\0') {
      local_28 = 0;
      local_18 = 0;
      puVar3 = (undefined8 *)FUN_140438ef0(0x18,local_48);
      if (puVar3 != (undefined8 *)0x0) {
        local_68 = (undefined4)param_1;
        uStack_64 = (undefined4)((ulonglong)param_1 >> 0x20);
        *puVar3 = &PTR_FUN_143f77c18;
        *(undefined4 *)(puVar3 + 1) = local_68;
        *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_64;
        *(undefined4 *)(puVar3 + 2) = param_2;
        *(undefined4 *)((longlong)puVar3 + 0x14) = uStack_5c;
      }
      local_58[0] = FUN_14202cd10;
      FUN_1420326d0(param_1,local_58);
    }
    else if (((byte)*(undefined4 *)(param_1 + 0xa0) & 0x8f) == 10) {
      (**(code **)(**(longlong **)(param_1 + 0x98) + 0x148))
                (*(longlong **)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa8),param_2,1);
      *(undefined4 *)(param_1 + 0x70) = 0;
      if (0x7fffffff < *(uint *)(param_1 + 0x74)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x68,0);
      }
      if (*(undefined2 **)(param_1 + 0x68) != (undefined2 *)0x0) {
        **(undefined2 **)(param_1 + 0x68) = 0;
      }
    }
  }
  return;
}



// FUNCTION 14203e4e0 FUN_14203e4e0 body=630 status=ok
// SIG undefined FUN_14203e4e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14203e4e0(longlong param_1,short *param_2)

{
  char *pcVar1;
  short sVar2;
  short sVar3;
  char cVar4;
  short *psVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  undefined2 *puVar12;
  undefined1 auStack_168 [32];
  undefined2 *local_148;
  ulonglong local_140;
  undefined2 *local_138;
  uint local_130;
  uint local_12c;
  undefined1 *local_128 [2];
  undefined1 local_118 [32];
  undefined8 local_f8;
  undefined4 local_e8;
  undefined1 local_d8 [128];
  longlong local_58;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  puVar12 = (undefined2 *)0x0;
  pcVar1 = (char *)(*(longlong *)(param_1 + 0x78) + 0x30);
  LOCK();
  cVar4 = *pcVar1;
  if (cVar4 == '\0') {
    *pcVar1 = '\0';
    cVar4 = '\0';
  }
  UNLOCK();
  if (cVar4 < '\x06') {
    cVar4 = FUN_142045c10(*(undefined8 *)(param_1 + 0x78));
    uVar11 = 0;
    if (cVar4 == '\0') {
      local_138 = (undefined2 *)0x0;
      local_12c = 0;
      puVar7 = puVar12;
      uVar8 = uVar11;
      if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
        lVar10 = -1;
        do {
          lVar10 = lVar10 + 1;
        } while (param_2[lVar10] != 0);
        uVar9 = (int)lVar10 + 1;
        local_130 = uVar9;
        if (0 < (int)uVar9) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
        }
        uVar8 = local_12c;
        uVar11 = local_130;
        puVar7 = local_138;
        FGenericPlatformString::Memcpy(local_138,param_2,(longlong)(int)uVar9 * 2);
      }
      local_f8 = 0;
      local_e8 = 0;
      puVar6 = (undefined8 *)FUN_140438ef0(0x20,local_118);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = &PTR_CopyToEmptyStorage_144553d08;
        puVar6[1] = param_1;
        puVar6[2] = puVar7;
        *(uint *)(puVar6 + 3) = uVar11;
        *(uint *)((longlong)puVar6 + 0x1c) = uVar8;
        puVar7 = puVar12;
      }
      local_128[0] = &LAB_14202cbc0;
      FUN_1420326d0(param_1,local_128);
    }
    else {
      if (((byte)*(undefined4 *)(param_1 + 0xa0) & 0x8f) != 10) {
        return;
      }
      local_148 = (undefined2 *)0x0;
      local_140 = 0;
      if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
        lVar10 = -1;
        do {
          lVar10 = lVar10 + 1;
        } while (param_2[lVar10] != 0);
        uVar8 = (int)lVar10 + 1;
        local_140 = (ulonglong)uVar8;
        uVar11 = uVar8;
        if (0 < (int)uVar8) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,0);
          uVar11 = (uint)local_140;
        }
        puVar12 = local_148;
        FGenericPlatformString::Memcpy(local_148,param_2,(longlong)(int)uVar8 * 2);
      }
      psVar5 = &DAT_143f3eda8;
      puVar7 = &DAT_143f3eda8;
      if (uVar11 != 0) {
        puVar7 = puVar12;
      }
      if (*(int *)(param_1 + 0x70) != 0) {
        psVar5 = *(short **)(param_1 + 0x68);
      }
      lVar10 = (longlong)puVar7 - (longlong)psVar5;
      do {
        sVar2 = *psVar5;
        sVar3 = *(short *)((longlong)psVar5 + lVar10);
        if (sVar2 != sVar3) break;
        psVar5 = psVar5 + 1;
      } while (sVar3 != 0);
      puVar7 = puVar12;
      if (sVar2 != sVar3) {
        lVar10 = TStringConversion<FTCHARToUTF8_Convert,128>::
                 TStringConversion<FTCHARToUTF8_Convert,128>(local_d8,param_2);
        (**(code **)(**(longlong **)(param_1 + 0x98) + 0x150))
                  (*(longlong **)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa8),
                   *(undefined8 *)(lVar10 + 0x88),1);
        if (local_58 != 0) {
          FMemory::Free();
        }
        FString::operator=(param_1 + 0x68,&local_148);
        puVar7 = local_148;
      }
    }
    if (puVar7 != (undefined2 *)0x0) {
      FMemory::Free(puVar7);
    }
  }
  return;
}



// FUNCTION 14203e760 FUN_14203e760 body=179 status=ok
// SIG undefined FUN_14203e760(void)

undefined4 FUN_14203e760(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  bool bVar5;
  
  LOCK();
  bVar5 = *(int *)(param_1 + 0x9c) == 0;
  if (bVar5) {
    *(int *)(param_1 + 0x9c) = 0;
  }
  UNLOCK();
  if (!bVar5) {
    LOCK();
    bVar5 = *(int *)(param_1 + 0xa4) == 0;
    if (bVar5) {
      *(int *)(param_1 + 0xa4) = 0;
    }
    UNLOCK();
    if (!bVar5) {
      LOCK();
      bVar5 = *(int *)(param_1 + 0x98) == 0;
      if (bVar5) {
        *(int *)(param_1 + 0x98) = 0;
      }
      UNLOCK();
      if (((!bVar5) && (*(longlong *)(param_1 + 0x80) != 0)) && (*(longlong *)(param_1 + 0x78) != 0)
         ) {
        LOCK();
        cVar2 = *(char *)(param_1 + 0x30);
        if (cVar2 == '\0') {
          *(char *)(param_1 + 0x30) = '\0';
          cVar2 = '\0';
        }
        UNLOCK();
        if ((('\x04' < cVar2) &&
            (cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x70,0,1), cVar2 != '\0')) &&
           ((lVar4 = FWeakObjectPtr::Get(param_1 + 0x70), lVar4 != 0 &&
            ((*(byte *)(lVar4 + 0x40) & 0x80) != 0)))) {
          plVar1 = *(longlong **)(param_1 + 0x78);
          if (plVar1 == (longlong *)0x0) {
            return 0;
          }
          uVar3 = (**(code **)(*plVar1 + 0x118))(plVar1,param_2);
          return uVar3;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14203e820 FUN_14203e820 body=237 status=ok
// SIG undefined FUN_14203e820(void)

undefined4 FUN_14203e820(longlong param_1,int *param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined4 local_28;
  undefined1 local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined8 local_14;
  
  uVar3 = 0;
  LOCK();
  bVar4 = *(int *)(param_1 + 0x9c) == 0;
  if (bVar4) {
    *(int *)(param_1 + 0x9c) = 0;
  }
  UNLOCK();
  if (!bVar4) {
    LOCK();
    bVar4 = *(int *)(param_1 + 0xa4) == 0;
    if (bVar4) {
      *(int *)(param_1 + 0xa4) = 0;
    }
    UNLOCK();
    if (!bVar4) {
      LOCK();
      bVar4 = *(int *)(param_1 + 0x98) == 0;
      if (bVar4) {
        *(int *)(param_1 + 0x98) = 0;
      }
      UNLOCK();
      if (((!bVar4) && (*(longlong *)(param_1 + 0x80) != 0)) && (*(longlong *)(param_1 + 0x78) != 0)
         ) {
        LOCK();
        cVar2 = *(char *)(param_1 + 0x30);
        if (cVar2 == '\0') {
          *(char *)(param_1 + 0x30) = '\0';
          cVar2 = '\0';
        }
        UNLOCK();
        if ('\x04' < cVar2) {
          if (*param_2 != 1) {
            if (*(longlong **)(param_1 + 0x78) != (longlong *)0x0) {
              uVar3 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x118))();
            }
            return uVar3;
          }
          local_20 = param_2[2];
          *(int *)(param_1 + 0x16c) = local_20;
          local_1c = param_2[3];
          *(int *)(param_1 + 0x170) = local_1c;
          plVar1 = *(longlong **)(param_1 + 0x78);
          local_18 = 0;
          local_24 = 0;
          local_28 = 1;
          local_14 = 0;
          if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 0x118))(plVar1,&local_28);
          }
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14203e910 FUN_14203e910 body=217 status=ok
// SIG undefined FUN_14203e910(void)

undefined8
FUN_14203e910(undefined8 param_1,undefined4 param_2,undefined8 *param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  
  bVar8 = DAT_146accd68 != 0;
  cVar6 = IsGarbageCollecting();
  if ((bVar8) && (cVar6 != '\0')) {
    local_38 = *param_3;
    local_30 = param_3[1];
    local_28 = param_3[2];
    if (local_28 != 0) {
      LOCK();
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      UNLOCK();
    }
    uVar7 = FUN_142039c70();
    cVar6 = FUN_142043d20(uVar7,param_2,&local_38,param_4,0,1);
    if (cVar6 != '\0') {
      uVar7 = 1;
      goto LAB_14203e998;
    }
  }
  uVar7 = 0;
LAB_14203e998:
  plVar4 = (longlong *)param_3[2];
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
  return uVar7;
}



// FUNCTION 14203e9f0 FUN_14203e9f0 body=146 status=ok
// SIG undefined FUN_14203e9f0(void)

undefined8 FUN_14203e9f0(undefined8 param_1,undefined2 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  
  bVar4 = DAT_146accd68 != 0;
  cVar1 = IsGarbageCollecting();
  if ((*(longlong *)(DAT_146b17150 + 0x7b0) == 0) ||
     (lVar3 = *(longlong *)(*(longlong *)(DAT_146b17150 + 0x7b0) + 0x50), lVar3 == 0)) {
    bVar5 = false;
    lVar3 = DAT_146b17150;
  }
  else {
    bVar5 = *(longlong *)(lVar3 + 0xd8) != 0;
    lVar3 = 0;
  }
  if (((bVar4) && (cVar1 != '\0')) && (!bVar5)) {
    uVar2 = FUN_142039c70(lVar3);
    cVar1 = FUN_142044270(uVar2,0,param_2);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14203ea90 FUN_14203ea90 body=880 status=ok
// SIG undefined FUN_14203ea90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14203ea90(undefined8 param_1,undefined4 param_2,longlong *param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  bool bVar13;
  longlong local_88;
  longlong local_80;
  longlong *local_78;
  longlong local_70;
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  
  plVar5 = (longlong *)param_3[2];
  lVar10 = *param_3;
  lVar6 = param_3[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  bVar13 = false;
  DAT_1464f079c = DAT_1464f079c + 1;
  lVar9 = (longlong)(DAT_1464f0790 + -1);
  if (-1 < DAT_1464f0790 + -1) {
    lVar12 = lVar9 << 4;
    bVar13 = false;
    do {
      if (*(int *)(lVar12 + 8 + DAT_1464f0788) == 0) {
        plVar8 = (longlong *)0x0;
      }
      else {
        plVar8 = *(longlong **)(lVar12 + DAT_1464f0788);
      }
      if (plVar8 == (longlong *)0x0) {
LAB_14203eb48:
        bVar13 = true;
      }
      else {
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        local_70 = lVar10;
        local_68 = lVar6;
        local_60 = plVar5;
        cVar4 = (**(code **)(*plVar8 + 0x40))(plVar8,param_2,&local_70,param_4);
        if (cVar4 == '\0') goto LAB_14203eb48;
      }
      lVar12 = lVar12 + -0x10;
      lVar9 = lVar9 + -1;
    } while (-1 < lVar9);
  }
  iVar2 = DAT_1464f0790;
  DAT_1464f079c = DAT_1464f079c + -1;
  if ((bVar13) && (DAT_1464f079c < 1)) {
    iVar11 = 0;
    if (0 < DAT_1464f0790) {
      lVar10 = 0;
      do {
        if (((*(int *)(lVar10 + 8 + DAT_1464f0788) == 0) ||
            (*(longlong **)(lVar10 + DAT_1464f0788) == (longlong *)0x0)) ||
           (cVar4 = (**(code **)(**(longlong **)(lVar10 + DAT_1464f0788) + 0x10))(), cVar4 != '\0'))
        {
          TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_1464f0788,iVar11,1,1);
        }
        else {
          iVar11 = iVar11 + 1;
          lVar10 = lVar10 + 0x10;
        }
      } while (iVar11 < DAT_1464f0790);
    }
    _DAT_1464f0798 = DAT_1464f0790 * 2;
    if (_DAT_1464f0798 < 3) {
      _DAT_1464f0798 = 2;
    }
    if ((_DAT_1464f0798 < iVar2) && (DAT_1464f0794 != DAT_1464f0790)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_1464f0788);
    }
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar5 + 1;
    lVar10 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  bVar13 = DAT_146accd68 != 0;
  cVar4 = IsGarbageCollecting();
  plVar5 = (longlong *)param_3[2];
  local_80 = param_3[1];
  lVar10 = *param_3;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_88 = lVar10;
  local_78 = plVar5;
  if (((*(longlong *)(DAT_146b17150 + 0x7b0) == 0) ||
      (lVar6 = *(longlong *)(*(longlong *)(DAT_146b17150 + 0x7b0) + 0x50), lVar6 == 0)) ||
     (*(longlong *)(lVar6 + 0xd8) == 0)) {
    plVar5 = (longlong *)UInputSettings::GetPrivateStaticClass();
    lVar6 = plVar5[0x1f];
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 0x368))(plVar5);
      lVar6 = plVar5[0x1f];
    }
    plVar8 = *(longlong **)(lVar6 + 0xd0);
    plVar5 = plVar8 + (longlong)*(int *)(lVar6 + 0xd8) * 3;
    for (; plVar8 != plVar5; plVar8 = plVar8 + 3) {
      if (*plVar8 == lVar10) {
        bVar3 = true;
        goto LAB_14203ed40;
      }
    }
    bVar3 = false;
LAB_14203ed40:
    FKey::~FKey(&local_88);
  }
  else {
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar5 + 1;
      lVar10 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
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
    bVar3 = true;
  }
  if (((bVar13) && (cVar4 != '\0')) && (!bVar3)) {
    local_58 = *param_3;
    local_50 = param_3[1];
    local_48 = param_3[2];
    if (local_48 != 0) {
      LOCK();
      *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
      UNLOCK();
    }
    uVar7 = FUN_142039c70();
    cVar4 = FUN_142044cc0(uVar7,param_2,&local_58,param_4);
    if (cVar4 != '\0') {
      uVar7 = 1;
      goto LAB_14203edaf;
    }
  }
  uVar7 = 0;
LAB_14203edaf:
  plVar5 = (longlong *)param_3[2];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar5 + 1;
    lVar10 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  return uVar7;
}



// FUNCTION 14203ee00 FUN_14203ee00 body=180 status=ok
// SIG undefined FUN_14203ee00(void)

undefined8 FUN_14203ee00(void)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 local_res10 [3];
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  
  if (DAT_146accd68 != 0) {
    cVar2 = IsGarbageCollecting();
    if (cVar2 != '\0') {
      lVar3 = FUN_142039c70();
      if ((lVar3 != 0) && (plVar1 = *(longlong **)(lVar3 + 0x198), plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0xd0))(plVar1,local_res10,1);
        FUN_14207ac30(local_res10[0]);
        local_28 = DAT_1469eae28;
        local_20 = DAT_1469eae30;
        local_18 = DAT_1469eae38;
        if (DAT_1469eae38 != 0) {
          LOCK();
          *(int *)(DAT_1469eae38 + 8) = *(int *)(DAT_1469eae38 + 8) + 1;
          UNLOCK();
        }
        cVar2 = FUN_142043d20(lVar3,0,&local_28,0,0,0);
        if (cVar2 != '\0') {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14203eec0 FUN_14203eec0 body=173 status=ok
// SIG undefined FUN_14203eec0(void)

undefined8
FUN_14203eec0(undefined8 param_1,undefined4 param_2,longlong param_3,undefined4 param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  bool bVar8;
  
  FUN_14207ac30(param_5);
  bVar8 = DAT_146accd68 != 0;
  cVar6 = IsGarbageCollecting();
  if ((bVar8) && (cVar6 != '\0')) {
    uVar7 = FUN_142039c70();
    cVar6 = FUN_142045420(uVar7,param_2,param_4);
    if (cVar6 != '\0') {
      uVar7 = 1;
      goto LAB_14203ef1c;
    }
  }
  uVar7 = 0;
LAB_14203ef1c:
  plVar4 = *(longlong **)(param_3 + 0x10);
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
  return uVar7;
}



// FUNCTION 14203ef70 FUN_14203ef70 body=902 status=ok
// SIG undefined FUN_14203ef70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14203ef70(longlong param_1)

{
  int *piVar1;
  PSRWLOCK SRWLock;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined8 *puVar11;
  bool bVar12;
  undefined1 auStack_128 [32];
  undefined1 local_108 [8];
  longlong local_100;
  longlong *local_f8;
  undefined8 *local_f0;
  undefined8 local_e8;
  undefined1 *local_d8 [2];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  undefined1 *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  cVar5 = FUN_142055370(param_1,7);
  if (cVar5 != '\0') {
    plVar8 = (longlong *)0x0;
    LOCK();
    bVar12 = *(int *)(param_1 + 0x90) == 0;
    if (bVar12) {
      *(int *)(param_1 + 0x90) = 0;
    }
    UNLOCK();
    if (!bVar12) {
      FUN_142057920(param_1);
    }
    cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x1bc);
    if (cVar5 != '\0') {
      FUN_14172a070(local_108,0x3dcccccd);
      cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x70,0,1);
      plVar7 = plVar8;
      if (cVar5 != '\0') {
        plVar7 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x70);
      }
      FUN_14172a400(local_108);
      if (plVar7 != (longlong *)0x0) {
        iVar2 = *(int *)((longlong)plVar7 + 0xc);
        if (iVar2 < (int)DAT_1469e91c4) {
          uVar10 = iVar2 >> 0x1f & 0xffff;
          uVar6 = iVar2 + uVar10;
          plVar8 = (longlong *)
                   (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
                   (longlong)(int)((uVar6 & 0xffff) - uVar10) * 0x18);
        }
        if ((*(uint *)(plVar8 + 1) & 0x30000000) == 0) {
          (**(code **)(*plVar7 + 0x288))(plVar7);
        }
      }
    }
    plVar8 = (longlong *)(param_1 + 0xd0);
    if ((undefined8 *)*plVar8 != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)*plVar8)();
    }
    local_f8 = (longlong *)0x0;
    if (plVar8 != &local_100) {
      *plVar8 = 0;
      local_100 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xd8,&local_f8);
      plVar8 = local_f8;
      if (local_f8 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_f8 + 1;
        lVar4 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_f8)(local_f8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_f8 + 8))(local_f8,1);
          }
        }
      }
    }
    SRWLock = (PSRWLOCK)(param_1 + 200);
    AcquireSRWLockShared(SRWLock);
    if (0 < *(int *)(param_1 + 0xe8) - *(int *)(param_1 + 0x114)) {
      local_f0 = (undefined8 *)0x0;
      local_e8 = 0;
      TMapBase<unsigned_int,TSharedPtr<OculusHMD::FLayer,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<OculusHMD::FLayer,1>,0>_>
      ::GenerateValueArray<FDefaultAllocator>(param_1 + 0xe0,&local_f0);
      ReleaseSRWLockShared(SRWLock);
      puVar11 = local_f0 + (longlong)(int)local_e8 * 2;
      for (puVar9 = local_f0; puVar9 != puVar11; puVar9 = puVar9 + 2) {
        (*(code *)**(undefined8 **)*puVar9)();
      }
      AcquireSRWLockExclusive(SRWLock);
      TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
      ::Empty(param_1 + 0xe0,0);
      ReleaseSRWLockExclusive(SRWLock);
      AcquireSRWLockShared(SRWLock);
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_f0);
    }
    ReleaseSRWLockShared(SRWLock);
    plVar8 = *(longlong **)(param_1 + 0x78);
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x140))(plVar8,0);
    }
    cVar5 = FUN_1420568f0();
    if (cVar5 != '\0') {
      uVar3 = *(undefined8 *)(param_1 + 0x78);
      local_a8 = (longlong *)0x0;
      local_98 = 0;
      puVar9 = (undefined8 *)FUN_140438ef0(0x10,local_c8);
      if (puVar9 != (undefined8 *)0x0) {
        puVar9[1] = uVar3;
        *puVar9 = &PTR_FUN_143f77b70;
      }
      local_d8[0] = &LAB_14202c6d0;
      FUN_1420321f0(param_1,local_d8);
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
    }
    local_58 = (longlong *)0x0;
    local_48 = 0;
    puVar9 = (undefined8 *)FUN_140438ef0(0x10,local_78);
    if (puVar9 != (undefined8 *)0x0) {
      puVar9[1] = param_1;
      *puVar9 = &PTR_FUN_143f77b70;
    }
    local_88[0] = &LAB_14202c710;
    FUN_1420321f0(param_1,local_88);
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
  }
  return;
}



// FUNCTION 14203f300 FUN_14203f300 body=473 status=ok
// SIG undefined FUN_14203f300(void)

void FUN_14203f300(longlong param_1)

{
  char cVar1;
  DWORD DVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined1 local_res8 [8];
  undefined4 local_res10 [2];
  undefined4 local_res18;
  undefined4 local_res20;
  undefined4 local_res24;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  code *local_68 [2];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  
  cVar1 = FUN_142055370(param_1,8);
  if (cVar1 != '\0') {
    FUN_142057da0(param_1);
  }
  lVar4 = DAT_146acc9a8;
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar2 = GetCurrentThreadId();
    if (DVar2 != DAT_1468c21c0) {
      lVar3 = 4;
      goto LAB_14203f35b;
    }
  }
  lVar3 = 0;
LAB_14203f35b:
  if (*(int *)(lVar3 + lVar4) != 0) {
    FUN_14172a070(local_res8,0);
    cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x70,0,1);
    if (cVar1 == '\0') {
      lVar4 = 0;
    }
    else {
      lVar4 = FWeakObjectPtr::Get(param_1 + 0x70);
    }
    local_res10[0] = 0xffffffff;
    uVar7 = 0xffffffff;
    if (lVar4 != 0) {
      FUN_14170c210(local_res10,lVar4);
      uVar7 = local_res10[0];
    }
    local_res10[0] = 0xffffffff;
    local_38 = 0;
    local_28 = 0;
    local_res18 = uVar7;
    puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_58);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &PTR_FUN_1444f8758;
      *(undefined4 *)(puVar5 + 1) = uVar7;
      uVar7 = 0xffffffff;
      local_res18 = 0xffffffff;
    }
    local_68[0] = FUN_14202c3c0;
    FUN_142032330(local_68);
    FUN_1416f8340(uVar7);
    FUN_1416f8340(local_res10[0]);
    FUN_14172a400(local_res8);
  }
  cVar1 = FUN_142056a00();
  if (cVar1 == '\0') {
    FWeakObjectPtr::operator=(&local_res20,0);
    *(undefined4 *)(param_1 + 0x70) = local_res20;
    *(undefined4 *)(param_1 + 0x74) = local_res24;
  }
  if (*(longlong **)(param_1 + 0x88) != (longlong *)0x0) {
    lVar4 = **(longlong **)(param_1 + 0x88);
    uVar6 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_88);
    (**(code **)(lVar4 + 0x40))(*(undefined8 *)(param_1 + 0x88),uVar6);
  }
  *(undefined8 *)(param_1 + 0x88) = 0;
  cVar1 = FUN_142055370(param_1,9);
  if (cVar1 != '\0') {
    uVar6 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_78);
    FUN_14204ea20(uVar6);
  }
  LOCK();
  DAT_146accd4c = DAT_146accd4c + -1;
  UNLOCK();
  return;
}



// FUNCTION 14203f4f0 FUN_14203f4f0 body=1331 status=ok
// SIG undefined FUN_14203f4f0(void)

void FUN_14203f4f0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  RefCountImpl *pRVar6;
  RefCountImpl *pRVar7;
  longlong lVar8;
  RefCountImpl *this;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20;
  
  local_30 = 0x16;
  this = (RefCountImpl *)0x0;
  local_38 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy(local_38,L"GameThreadTaskManager",0x2c);
  FUN_14207ac60(&PTR_PTR_1464f05c0,&local_38);
  local_28 = *param_1;
  local_20 = param_1[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  FUN_142043650(&local_28);
  plVar3 = (longlong *)param_1[1];
  plVar4 = (longlong *)*param_1;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  cVar5 = FUN_142057ba0();
  if (cVar5 != '\0') {
    pRVar6 = (RefCountImpl *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x18);
    pRVar7 = this;
    if (pRVar6 != (RefCountImpl *)0x0) {
      *(undefined8 *)(pRVar6 + 0x10) = 0;
      *(undefined8 *)(pRVar6 + 8) = 0;
      *(undefined ***)pRVar6 = &PTR_FUN_144f70a50;
      *(undefined4 *)(pRVar6 + 8) = 1;
      *(undefined4 *)(pRVar6 + 0x10) = 0xc;
      *(undefined ***)pRVar6 = &PTR_FUN_144f71120;
      pRVar7 = pRVar6;
    }
    (**(code **)(*plVar4 + 0x10))(plVar4,0xc,pRVar7);
    if (pRVar7 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(pRVar7);
    }
    pRVar6 = (RefCountImpl *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x18);
    pRVar7 = this;
    if (pRVar6 != (RefCountImpl *)0x0) {
      *(undefined8 *)(pRVar6 + 0x10) = 0;
      *(undefined8 *)(pRVar6 + 8) = 0;
      *(undefined ***)pRVar6 = &PTR_FUN_144f70a50;
      *(undefined4 *)(pRVar6 + 8) = 1;
      *(undefined4 *)(pRVar6 + 0x10) = 0xd;
      *(undefined ***)pRVar6 = &PTR_FUN_144f71140;
      pRVar7 = pRVar6;
    }
    (**(code **)(*plVar4 + 0x10))(plVar4,0xd,pRVar7);
    if (pRVar7 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(pRVar7);
    }
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar3 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
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
  if (DAT_1464f06f8 - DAT_1464f0724 < 2000) {
    FUN_14089d3b0(&DAT_1464f06f0,2000);
  }
  plVar3 = (longlong *)param_1[1];
  plVar4 = (longlong *)*param_1;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  pRVar7 = (RefCountImpl *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x10);
  if (pRVar7 != (RefCountImpl *)0x0) {
    *(undefined8 *)(pRVar7 + 8) = 0;
    *(undefined ***)pRVar7 = &PTR_FUN_144f70a50;
    *(undefined4 *)(pRVar7 + 8) = 1;
    *(undefined ***)pRVar7 = &PTR_FUN_144f712a0;
    Scaleform::RefCountImpl::AddRef(pRVar7);
    if (DAT_146accc80 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(DAT_146accc80);
    }
    DAT_146accc80 = pRVar7;
    FUN_1432e06c0(plVar4,pRVar7);
    FUN_1432c1b10(pRVar7);
    Scaleform::RefCountImpl::Release(pRVar7);
  }
  pRVar7 = (RefCountImpl *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x28);
  if (pRVar7 != (RefCountImpl *)0x0) {
    *(undefined8 *)(pRVar7 + 8) = 0;
    *(undefined ***)pRVar7 = &PTR_FUN_144f70a50;
    *(undefined4 *)(pRVar7 + 8) = 1;
    *(undefined4 *)(pRVar7 + 0x10) = 3;
    *(undefined ***)pRVar7 = &PTR_FUN_144f70c88;
    *(undefined4 *)(pRVar7 + 0x18) = 0;
    FUN_1432c2f70(pRVar7 + 0x20);
    (**(code **)(*plVar4 + 0x10))(plVar4,3,pRVar7);
    Scaleform::RefCountImpl::Release(pRVar7);
  }
  pRVar7 = (RefCountImpl *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x20);
  if (pRVar7 != (RefCountImpl *)0x0) {
    *(undefined8 *)(pRVar7 + 8) = 0;
    *(undefined ***)pRVar7 = &PTR_FUN_144f70a50;
    *(undefined4 *)(pRVar7 + 8) = 1;
    *(undefined4 *)(pRVar7 + 0x10) = 0x10;
    *(undefined ***)pRVar7 = &PTR_FUN_144f70cb0;
    *(undefined4 *)(pRVar7 + 0x18) = 0;
    (**(code **)(*plVar4 + 0x10))(plVar4,0x10,pRVar7);
    Scaleform::RefCountImpl::Release(pRVar7);
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar3 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
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
  pRVar6 = (RefCountImpl *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x18);
  pRVar7 = this;
  if (pRVar6 != (RefCountImpl *)0x0) {
    *(undefined8 *)(pRVar6 + 8) = 0;
    *(undefined ***)pRVar6 = &PTR_FUN_144f70a50;
    *(undefined4 *)(pRVar6 + 8) = 1;
    *(undefined4 *)(pRVar6 + 0x10) = 0x28;
    *(undefined ***)pRVar6 = &PTR_FUN_144f71078;
    pRVar7 = pRVar6;
  }
  (**(code **)(*(longlong *)*param_1 + 0x10))((longlong *)*param_1,0x28,pRVar7);
  if (pRVar7 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(pRVar7);
  }
  lVar8 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x18);
  pRVar7 = this;
  if (lVar8 != 0) {
    pRVar7 = (RefCountImpl *)FUN_14358e480(lVar8);
  }
  (**(code **)(*(longlong *)*param_1 + 0x10))((longlong *)*param_1,0x29,pRVar7);
  if (pRVar7 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(pRVar7);
  }
  pRVar6 = (RefCountImpl *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x18);
  pRVar7 = this;
  if (pRVar6 != (RefCountImpl *)0x0) {
    *(undefined8 *)(pRVar6 + 0x10) = 0;
    *(undefined8 *)(pRVar6 + 8) = 0;
    *(undefined ***)pRVar6 = &PTR_FUN_144f70a50;
    *(undefined4 *)(pRVar6 + 8) = 1;
    *(undefined4 *)(pRVar6 + 0x10) = 5;
    *(undefined ***)pRVar6 = &PTR_FUN_144f71280;
    pRVar7 = pRVar6;
  }
  (**(code **)(*(longlong *)*param_1 + 0x10))((longlong *)*param_1,5,pRVar7);
  if (pRVar7 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(pRVar7);
  }
  pRVar6 = (RefCountImpl *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x18);
  pRVar7 = this;
  if (pRVar6 != (RefCountImpl *)0x0) {
    *(undefined8 *)(pRVar6 + 0x10) = 0;
    *(undefined8 *)(pRVar6 + 8) = 0;
    *(undefined ***)pRVar6 = &PTR_FUN_144f70a50;
    *(undefined4 *)(pRVar6 + 8) = 1;
    *(undefined4 *)(pRVar6 + 0x10) = 6;
    *(undefined ***)pRVar6 = &PTR_FUN_144f71290;
    pRVar7 = pRVar6;
  }
  (**(code **)(*(longlong *)*param_1 + 0x10))((longlong *)*param_1,6,pRVar7);
  if (pRVar7 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(pRVar7);
  }
  lVar8 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x38);
  if (lVar8 != 0) {
    this = (RefCountImpl *)FUN_1432e1490(lVar8,1);
  }
  (**(code **)(*(longlong *)*param_1 + 0x10))((longlong *)*param_1,0xf,this);
  if (this != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(this);
  }
  plVar3 = (longlong *)param_1[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar3 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
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



// FUNCTION 14203fa30 FUN_14203fa30 body=12589 status=ok
// SIG undefined FUN_14203fa30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14203fa30(longlong param_1)

{
  undefined *puVar1;
  longlong lVar2;
  undefined1 local_res10 [8];
  undefined *local_res18;
  undefined *local_18;
  undefined **local_10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146ace898) {
    _Init_thread_header(&DAT_146ace898);
    if (DAT_146ace898 == -1) {
      _DAT_146acd060 = DAT_1469e97f0;
      _DAT_146acd068 = DAT_1469e97f8;
      _DAT_146acd070 = DAT_1469e9800;
      if (DAT_1469e9800 != 0) {
        LOCK();
        *(int *)(DAT_1469e9800 + 8) = *(int *)(DAT_1469e9800 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acd088 = DAT_1469e9808;
      _DAT_146acd090 = DAT_1469e9810;
      _DAT_146acd078 = 0;
      _DAT_146acd07c = 0xffffffff;
      _DAT_146acd080 = 4;
      _DAT_146acd098 = DAT_1469e9818;
      if (DAT_1469e9818 != 0) {
        LOCK();
        *(int *)(DAT_1469e9818 + 8) = *(int *)(DAT_1469e9818 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acd0b0 = DAT_1469e9820;
      _DAT_146acd0b8 = DAT_1469e9828;
      _DAT_146acd0a0 = 0;
      _DAT_146acd0a4 = 0xffffffff;
      _DAT_146acd0a8 = 4;
      _DAT_146acd0c0 = DAT_1469e9830;
      if (DAT_1469e9830 != 0) {
        LOCK();
        *(int *)(DAT_1469e9830 + 8) = *(int *)(DAT_1469e9830 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acd0d8 = DAT_1469e9838;
      _DAT_146acd0e0 = DAT_1469e9840;
      _DAT_146acd0c8 = 0;
      _DAT_146acd0cc = 4;
      _DAT_146acd0d0 = 4;
      _DAT_146acd0e8 = DAT_1469e9848;
      if (DAT_1469e9848 != 0) {
        LOCK();
        *(int *)(DAT_1469e9848 + 8) = *(int *)(DAT_1469e9848 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acd100 = DAT_1469e9868;
      _DAT_146acd108 = DAT_1469e9870;
      _DAT_146acd0f0 = 0;
      _DAT_146acd0f4 = 3;
      _DAT_146acd0f8 = 4;
      _DAT_146acd110 = DAT_1469e9878;
      if (DAT_1469e9878 != 0) {
        LOCK();
        *(int *)(DAT_1469e9878 + 8) = *(int *)(DAT_1469e9878 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acd128 = DAT_1469e9880;
      _DAT_146acd130 = DAT_1469e9888;
      _DAT_146acd118 = 0;
      _DAT_146acd120 = 4;
      _DAT_146acd138 = DAT_1469e9890;
      if (DAT_1469e9890 != 0) {
        LOCK();
        *(int *)(DAT_1469e9890 + 8) = *(int *)(DAT_1469e9890 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acd150 = DAT_1469e9898;
      _DAT_146acd158 = DAT_1469e98a0;
      _DAT_146acd140 = 0;
      _DAT_146acd144 = 1;
      _DAT_146acd148 = 4;
      _DAT_146acd160 = DAT_1469e98a8;
      if (DAT_1469e98a8 != 0) {
        LOCK();
        *(int *)(DAT_1469e98a8 + 8) = *(int *)(DAT_1469e98a8 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acd178 = DAT_1469e98e0;
      _DAT_146acd180 = DAT_1469e98e8;
      _DAT_146acd168 = 0;
      _DAT_146acd16c = 2;
      _DAT_146acd170 = 4;
      _DAT_146acd188 = DAT_1469e98f0;
      if (DAT_1469e98f0 != 0) {
        LOCK();
        *(int *)(DAT_1469e98f0 + 8) = *(int *)(DAT_1469e98f0 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acd1a0 = DAT_1469e98f8;
      _DAT_146acd1a8 = DAT_1469e9900;
      _DAT_146acd190 = 8;
      _DAT_146acd194 = 0xffffffff;
      _DAT_146acd198 = 2;
      _DAT_146acd1b0 = DAT_1469e9908;
      if (DAT_1469e9908 != 0) {
        LOCK();
        *(int *)(DAT_1469e9908 + 8) = *(int *)(DAT_1469e9908 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acd1c8 = DAT_1469e9910;
      _DAT_146acd1d0 = DAT_1469e9918;
      _DAT_146acd1b8 = 9;
      _DAT_146acd1bc = 0xffffffff;
      _DAT_146acd1c0 = 2;
      _DAT_146acd1d8 = DAT_1469e9920;
      if (DAT_1469e9920 != 0) {
        LOCK();
        *(int *)(DAT_1469e9920 + 8) = *(int *)(DAT_1469e9920 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acd1f0 = DAT_1469e9928;
      _DAT_146acd1f8 = DAT_1469e9930;
      _DAT_146acd1e0 = 0xd;
      _DAT_146acd1e4 = 0xffffffff;
      _DAT_146acd1e8 = 2;
      _DAT_146acd200 = DAT_1469e9938;
      if (DAT_1469e9938 != 0) {
        LOCK();
        *(int *)(DAT_1469e9938 + 8) = *(int *)(DAT_1469e9938 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acd218 = DAT_1469e9940;
      _DAT_146acd220 = DAT_1469e9948;
      _DAT_146acd208 = 0x13;
      _DAT_146acd20c = 0xffffffff;
      _DAT_146acd210 = 2;
      _DAT_146acd228 = DAT_1469e9950;
      if (DAT_1469e9950 != 0) {
        LOCK();
        *(int *)(DAT_1469e9950 + 8) = *(int *)(DAT_1469e9950 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acd240 = DAT_1469e9958;
      _DAT_146acd248 = DAT_1469e9960;
      _DAT_146acd230 = 0x14;
      _DAT_146acd234 = 0xffffffff;
      _DAT_146acd238 = 2;
      _DAT_146acd250 = DAT_1469e9968;
      if (DAT_1469e9968 != 0) {
        LOCK();
        *(int *)(DAT_1469e9968 + 8) = *(int *)(DAT_1469e9968 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acd268 = DAT_1469e9970;
      _DAT_146acd270 = DAT_1469e9978;
      _DAT_146acd258 = 0x1b;
      _DAT_146acd25c = 0xffffffff;
      _DAT_146acd260 = 2;
      _DAT_146acd278 = DAT_1469e9980;
      if (DAT_1469e9980 != 0) {
        LOCK();
        *(int *)(DAT_1469e9980 + 8) = *(int *)(DAT_1469e9980 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acd290 = DAT_1469e9988;
      _DAT_146acd298 = DAT_1469e9990;
      _DAT_146acd280 = 0x20;
      _DAT_146acd284 = 0xffffffff;
      _DAT_146acd288 = 2;
      _DAT_146acd2a0 = DAT_1469e9998;
      if (DAT_1469e9998 != 0) {
        LOCK();
        *(int *)(DAT_1469e9998 + 8) = *(int *)(DAT_1469e9998 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acd2b8 = DAT_1469e99a0;
      _DAT_146acd2c0 = DAT_1469e99a8;
      _DAT_146acd2a8 = 0x21;
      _DAT_146acd2ac = 0xffffffff;
      _DAT_146acd2b0 = 2;
      _DAT_146acd2c8 = DAT_1469e99b0;
      if (DAT_1469e99b0 != 0) {
        LOCK();
        *(int *)(DAT_1469e99b0 + 8) = *(int *)(DAT_1469e99b0 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acd2e0 = DAT_1469e99b8;
      _DAT_146acd2e8 = DAT_1469e99c0;
      _DAT_146acd2d0 = 0x22;
      _DAT_146acd2d4 = 0xffffffff;
      _DAT_146acd2d8 = 2;
      _DAT_146acd2f0 = DAT_1469e99c8;
      if (DAT_1469e99c8 != 0) {
        LOCK();
        *(int *)(DAT_1469e99c8 + 8) = *(int *)(DAT_1469e99c8 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acd308 = DAT_1469e99d0;
      _DAT_146acd310 = DAT_1469e99d8;
      _DAT_146acd2f8 = 0x23;
      _DAT_146acd2fc = 0xffffffff;
      _DAT_146acd300 = 2;
      _DAT_146acd318 = DAT_1469e99e0;
      if (DAT_1469e99e0 != 0) {
        LOCK();
        *(int *)(DAT_1469e99e0 + 8) = *(int *)(DAT_1469e99e0 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acd330 = DAT_1469e99e8;
      _DAT_146acd338 = DAT_1469e99f0;
      _DAT_146acd320 = 0x24;
      _DAT_146acd324 = 0xffffffff;
      _DAT_146acd328 = 2;
      _DAT_146acd340 = DAT_1469e99f8;
      if (DAT_1469e99f8 != 0) {
        LOCK();
        *(int *)(DAT_1469e99f8 + 8) = *(int *)(DAT_1469e99f8 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acd358 = DAT_1469e9a00;
      _DAT_146acd360 = DAT_1469e9a08;
      _DAT_146acd348 = 0x25;
      _DAT_146acd34c = 0xffffffff;
      _DAT_146acd350 = 2;
      _DAT_146acd368 = DAT_1469e9a10;
      if (DAT_1469e9a10 != 0) {
        LOCK();
        *(int *)(DAT_1469e9a10 + 8) = *(int *)(DAT_1469e9a10 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acd380 = DAT_1469e9a18;
      _DAT_146acd388 = DAT_1469e9a20;
      _DAT_146acd370 = 0x26;
      _DAT_146acd374 = 0xffffffff;
      _DAT_146acd378 = 2;
      _DAT_146acd390 = DAT_1469e9a28;
      if (DAT_1469e9a28 != 0) {
        LOCK();
        *(int *)(DAT_1469e9a28 + 8) = *(int *)(DAT_1469e9a28 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acd3a8 = DAT_1469e9a30;
      _DAT_146acd3b0 = DAT_1469e9a38;
      _DAT_146acd398 = 0x27;
      _DAT_146acd39c = 0xffffffff;
      _DAT_146acd3a0 = 2;
      _DAT_146acd3b8 = DAT_1469e9a40;
      if (DAT_1469e9a40 != 0) {
        LOCK();
        *(int *)(DAT_1469e9a40 + 8) = *(int *)(DAT_1469e9a40 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acd3d0 = DAT_1469e9a48;
      _DAT_146acd3d8 = DAT_1469e9a50;
      _DAT_146acd3c0 = 0x28;
      _DAT_146acd3c4 = 0xffffffff;
      _DAT_146acd3c8 = 2;
      _DAT_146acd3e0 = DAT_1469e9a58;
      if (DAT_1469e9a58 != 0) {
        LOCK();
        *(int *)(DAT_1469e9a58 + 8) = *(int *)(DAT_1469e9a58 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acd3f8 = DAT_1469e9a60;
      _DAT_146acd400 = DAT_1469e9a68;
      _DAT_146acd3e8 = 0x2d;
      _DAT_146acd3ec = 0xffffffff;
      _DAT_146acd3f0 = 2;
      _DAT_146acd408 = DAT_1469e9a70;
      if (DAT_1469e9a70 != 0) {
        LOCK();
        *(int *)(DAT_1469e9a70 + 8) = *(int *)(DAT_1469e9a70 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acd420 = DAT_1469e9a78;
      _DAT_146acd428 = DAT_1469e9a80;
      _DAT_146acd410 = 0x2e;
      _DAT_146acd414 = 0xffffffff;
      _DAT_146acd418 = 2;
      _DAT_146acd430 = DAT_1469e9a88;
      if (DAT_1469e9a88 != 0) {
        LOCK();
        *(int *)(DAT_1469e9a88 + 8) = *(int *)(DAT_1469e9a88 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acd448 = DAT_1469e9a90;
      _DAT_146acd450 = DAT_1469e9a98;
      _DAT_146acd438 = 0x30;
      _DAT_146acd43c = 0xffffffff;
      _DAT_146acd440 = 2;
      _DAT_146acd458 = DAT_1469e9aa0;
      if (DAT_1469e9aa0 != 0) {
        LOCK();
        *(int *)(DAT_1469e9aa0 + 8) = *(int *)(DAT_1469e9aa0 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acd470 = DAT_1469e9aa8;
      _DAT_146acd478 = DAT_1469e9ab0;
      _DAT_146acd460 = 0x31;
      _DAT_146acd464 = 0xffffffff;
      _DAT_146acd468 = 2;
      _DAT_146acd480 = DAT_1469e9ab8;
      if (DAT_1469e9ab8 != 0) {
        LOCK();
        *(int *)(DAT_1469e9ab8 + 8) = *(int *)(DAT_1469e9ab8 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acd498 = DAT_1469e9ac0;
      _DAT_146acd4a0 = DAT_1469e9ac8;
      _DAT_146acd488 = 0x32;
      _DAT_146acd48c = 0xffffffff;
      _DAT_146acd490 = 2;
      _DAT_146acd4a8 = DAT_1469e9ad0;
      if (DAT_1469e9ad0 != 0) {
        LOCK();
        *(int *)(DAT_1469e9ad0 + 8) = *(int *)(DAT_1469e9ad0 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acd4c0 = DAT_1469e9ad8;
      _DAT_146acd4c8 = DAT_1469e9ae0;
      _DAT_146acd4b0 = 0x33;
      _DAT_146acd4b4 = 0xffffffff;
      _DAT_146acd4b8 = 2;
      _DAT_146acd4d0 = DAT_1469e9ae8;
      if (DAT_1469e9ae8 != 0) {
        LOCK();
        *(int *)(DAT_1469e9ae8 + 8) = *(int *)(DAT_1469e9ae8 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acd4e8 = DAT_1469e9af0;
      _DAT_146acd4f0 = DAT_1469e9af8;
      _DAT_146acd4d8 = 0x34;
      _DAT_146acd4dc = 0xffffffff;
      _DAT_146acd4e0 = 2;
      _DAT_146acd4f8 = DAT_1469e9b00;
      if (DAT_1469e9b00 != 0) {
        LOCK();
        *(int *)(DAT_1469e9b00 + 8) = *(int *)(DAT_1469e9b00 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acd510 = DAT_1469e9b08;
      _DAT_146acd518 = DAT_1469e9b10;
      _DAT_146acd500 = 0x35;
      _DAT_146acd504 = 0xffffffff;
      _DAT_146acd508 = 2;
      _DAT_146acd520 = DAT_1469e9b18;
      if (DAT_1469e9b18 != 0) {
        LOCK();
        *(int *)(DAT_1469e9b18 + 8) = *(int *)(DAT_1469e9b18 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acd538 = DAT_1469e9b20;
      _DAT_146acd540 = DAT_1469e9b28;
      _DAT_146acd528 = 0x36;
      _DAT_146acd52c = 0xffffffff;
      _DAT_146acd530 = 2;
      _DAT_146acd548 = DAT_1469e9b30;
      if (DAT_1469e9b30 != 0) {
        LOCK();
        *(int *)(DAT_1469e9b30 + 8) = *(int *)(DAT_1469e9b30 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acd560 = DAT_1469e9b38;
      _DAT_146acd568 = DAT_1469e9b40;
      _DAT_146acd550 = 0x37;
      _DAT_146acd554 = 0xffffffff;
      _DAT_146acd558 = 2;
      _DAT_146acd570 = DAT_1469e9b48;
      if (DAT_1469e9b48 != 0) {
        LOCK();
        *(int *)(DAT_1469e9b48 + 8) = *(int *)(DAT_1469e9b48 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acd588 = DAT_1469e9b50;
      _DAT_146acd590 = DAT_1469e9b58;
      _DAT_146acd578 = 0x38;
      _DAT_146acd57c = 0xffffffff;
      _DAT_146acd580 = 2;
      _DAT_146acd598 = DAT_1469e9b60;
      if (DAT_1469e9b60 != 0) {
        LOCK();
        *(int *)(DAT_1469e9b60 + 8) = *(int *)(DAT_1469e9b60 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acd5b0 = DAT_1469e9b68;
      _DAT_146acd5b8 = DAT_1469e9b70;
      _DAT_146acd5a0 = 0x39;
      _DAT_146acd5a4 = 0xffffffff;
      _DAT_146acd5a8 = 2;
      _DAT_146acd5c0 = DAT_1469e9b78;
      if (DAT_1469e9b78 != 0) {
        LOCK();
        *(int *)(DAT_1469e9b78 + 8) = *(int *)(DAT_1469e9b78 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acd5d8 = DAT_1469e9b80;
      _DAT_146acd5e0 = DAT_1469e9b88;
      _DAT_146acd5c8 = 0x41;
      _DAT_146acd5cc = 0xffffffff;
      _DAT_146acd5d0 = 2;
      _DAT_146acd5e8 = DAT_1469e9b90;
      if (DAT_1469e9b90 != 0) {
        LOCK();
        *(int *)(DAT_1469e9b90 + 8) = *(int *)(DAT_1469e9b90 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acd600 = DAT_1469e9b98;
      _DAT_146acd608 = DAT_1469e9ba0;
      _DAT_146acd5f0 = 0x42;
      _DAT_146acd5f4 = 0xffffffff;
      _DAT_146acd5f8 = 2;
      _DAT_146acd610 = DAT_1469e9ba8;
      if (DAT_1469e9ba8 != 0) {
        LOCK();
        *(int *)(DAT_1469e9ba8 + 8) = *(int *)(DAT_1469e9ba8 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acd628 = DAT_1469e9bb0;
      _DAT_146acd630 = DAT_1469e9bb8;
      _DAT_146acd618 = 0x43;
      _DAT_146acd61c = 0xffffffff;
      _DAT_146acd620 = 2;
      _DAT_146acd638 = DAT_1469e9bc0;
      if (DAT_1469e9bc0 != 0) {
        LOCK();
        *(int *)(DAT_1469e9bc0 + 8) = *(int *)(DAT_1469e9bc0 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acd650 = DAT_1469e9bc8;
      _DAT_146acd658 = DAT_1469e9bd0;
      _DAT_146acd640 = 0x44;
      _DAT_146acd644 = 0xffffffff;
      _DAT_146acd648 = 2;
      _DAT_146acd660 = DAT_1469e9bd8;
      if (DAT_1469e9bd8 != 0) {
        LOCK();
        *(int *)(DAT_1469e9bd8 + 8) = *(int *)(DAT_1469e9bd8 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acd678 = DAT_1469e9be0;
      _DAT_146acd680 = DAT_1469e9be8;
      _DAT_146acd668 = 0x45;
      _DAT_146acd66c = 0xffffffff;
      _DAT_146acd670 = 2;
      _DAT_146acd688 = DAT_1469e9bf0;
      if (DAT_1469e9bf0 != 0) {
        LOCK();
        *(int *)(DAT_1469e9bf0 + 8) = *(int *)(DAT_1469e9bf0 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acd6a0 = DAT_1469e9bf8;
      _DAT_146acd6a8 = DAT_1469e9c00;
      _DAT_146acd690 = 0x46;
      _DAT_146acd694 = 0xffffffff;
      _DAT_146acd698 = 2;
      _DAT_146acd6b0 = DAT_1469e9c08;
      if (DAT_1469e9c08 != 0) {
        LOCK();
        *(int *)(DAT_1469e9c08 + 8) = *(int *)(DAT_1469e9c08 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acd6c8 = DAT_1469e9c10;
      _DAT_146acd6d0 = DAT_1469e9c18;
      _DAT_146acd6b8 = 0x47;
      _DAT_146acd6bc = 0xffffffff;
      _DAT_146acd6c0 = 2;
      _DAT_146acd6d8 = DAT_1469e9c20;
      if (DAT_1469e9c20 != 0) {
        LOCK();
        *(int *)(DAT_1469e9c20 + 8) = *(int *)(DAT_1469e9c20 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acd6f0 = DAT_1469e9c28;
      _DAT_146acd6f8 = DAT_1469e9c30;
      _DAT_146acd6e0 = 0x48;
      _DAT_146acd6e4 = 0xffffffff;
      _DAT_146acd6e8 = 2;
      _DAT_146acd700 = DAT_1469e9c38;
      if (DAT_1469e9c38 != 0) {
        LOCK();
        *(int *)(DAT_1469e9c38 + 8) = *(int *)(DAT_1469e9c38 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acd718 = DAT_1469e9c40;
      _DAT_146acd720 = DAT_1469e9c48;
      _DAT_146acd708 = 0x49;
      _DAT_146acd70c = 0xffffffff;
      _DAT_146acd710 = 2;
      _DAT_146acd728 = DAT_1469e9c50;
      if (DAT_1469e9c50 != 0) {
        LOCK();
        *(int *)(DAT_1469e9c50 + 8) = *(int *)(DAT_1469e9c50 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acd740 = DAT_1469e9c58;
      _DAT_146acd748 = DAT_1469e9c60;
      _DAT_146acd730 = 0x4a;
      _DAT_146acd734 = 0xffffffff;
      _DAT_146acd738 = 2;
      _DAT_146acd750 = DAT_1469e9c68;
      if (DAT_1469e9c68 != 0) {
        LOCK();
        *(int *)(DAT_1469e9c68 + 8) = *(int *)(DAT_1469e9c68 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acd768 = DAT_1469e9c70;
      _DAT_146acd770 = DAT_1469e9c78;
      _DAT_146acd758 = 0x4b;
      _DAT_146acd75c = 0xffffffff;
      _DAT_146acd760 = 2;
      _DAT_146acd778 = DAT_1469e9c80;
      if (DAT_1469e9c80 != 0) {
        LOCK();
        *(int *)(DAT_1469e9c80 + 8) = *(int *)(DAT_1469e9c80 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acd790 = DAT_1469e9c88;
      _DAT_146acd798 = DAT_1469e9c90;
      _DAT_146acd780 = 0x4c;
      _DAT_146acd784 = 0xffffffff;
      _DAT_146acd788 = 2;
      _DAT_146acd7a0 = DAT_1469e9c98;
      if (DAT_1469e9c98 != 0) {
        LOCK();
        *(int *)(DAT_1469e9c98 + 8) = *(int *)(DAT_1469e9c98 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acd7b8 = DAT_1469e9ca0;
      _DAT_146acd7c0 = DAT_1469e9ca8;
      _DAT_146acd7a8 = 0x4d;
      _DAT_146acd7ac = 0xffffffff;
      _DAT_146acd7b0 = 2;
      _DAT_146acd7c8 = DAT_1469e9cb0;
      if (DAT_1469e9cb0 != 0) {
        LOCK();
        *(int *)(DAT_1469e9cb0 + 8) = *(int *)(DAT_1469e9cb0 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acd7e0 = DAT_1469e9cb8;
      _DAT_146acd7e8 = DAT_1469e9cc0;
      _DAT_146acd7d0 = 0x4e;
      _DAT_146acd7d4 = 0xffffffff;
      _DAT_146acd7d8 = 2;
      _DAT_146acd7f0 = DAT_1469e9cc8;
      if (DAT_1469e9cc8 != 0) {
        LOCK();
        *(int *)(DAT_1469e9cc8 + 8) = *(int *)(DAT_1469e9cc8 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acd808 = DAT_1469e9cd0;
      _DAT_146acd810 = DAT_1469e9cd8;
      _DAT_146acd7f8 = 0x4f;
      _DAT_146acd7fc = 0xffffffff;
      _DAT_146acd800 = 2;
      _DAT_146acd818 = DAT_1469e9ce0;
      if (DAT_1469e9ce0 != 0) {
        LOCK();
        *(int *)(DAT_1469e9ce0 + 8) = *(int *)(DAT_1469e9ce0 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acd830 = DAT_1469e9ce8;
      _DAT_146acd838 = DAT_1469e9cf0;
      _DAT_146acd820 = 0x50;
      _DAT_146acd824 = 0xffffffff;
      _DAT_146acd828 = 2;
      _DAT_146acd840 = DAT_1469e9cf8;
      if (DAT_1469e9cf8 != 0) {
        LOCK();
        *(int *)(DAT_1469e9cf8 + 8) = *(int *)(DAT_1469e9cf8 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acd858 = DAT_1469e9d00;
      _DAT_146acd860 = DAT_1469e9d08;
      _DAT_146acd848 = 0x51;
      _DAT_146acd84c = 0xffffffff;
      _DAT_146acd850 = 2;
      _DAT_146acd868 = DAT_1469e9d10;
      if (DAT_1469e9d10 != 0) {
        LOCK();
        *(int *)(DAT_1469e9d10 + 8) = *(int *)(DAT_1469e9d10 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acd880 = DAT_1469e9d18;
      _DAT_146acd888 = DAT_1469e9d20;
      _DAT_146acd870 = 0x52;
      _DAT_146acd874 = 0xffffffff;
      _DAT_146acd878 = 2;
      _DAT_146acd890 = DAT_1469e9d28;
      if (DAT_1469e9d28 != 0) {
        LOCK();
        *(int *)(DAT_1469e9d28 + 8) = *(int *)(DAT_1469e9d28 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acd8a8 = DAT_1469e9d30;
      _DAT_146acd8b0 = DAT_1469e9d38;
      _DAT_146acd898 = 0x53;
      _DAT_146acd89c = 0xffffffff;
      _DAT_146acd8a0 = 2;
      _DAT_146acd8b8 = DAT_1469e9d40;
      if (DAT_1469e9d40 != 0) {
        LOCK();
        *(int *)(DAT_1469e9d40 + 8) = *(int *)(DAT_1469e9d40 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acd8d0 = DAT_1469e9d48;
      _DAT_146acd8d8 = DAT_1469e9d50;
      _DAT_146acd8c0 = 0x54;
      _DAT_146acd8c4 = 0xffffffff;
      _DAT_146acd8c8 = 2;
      _DAT_146acd8e0 = DAT_1469e9d58;
      if (DAT_1469e9d58 != 0) {
        LOCK();
        *(int *)(DAT_1469e9d58 + 8) = *(int *)(DAT_1469e9d58 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acd8f8 = DAT_1469e9d60;
      _DAT_146acd900 = DAT_1469e9d68;
      _DAT_146acd8e8 = 0x55;
      _DAT_146acd8ec = 0xffffffff;
      _DAT_146acd8f0 = 2;
      _DAT_146acd908 = DAT_1469e9d70;
      if (DAT_1469e9d70 != 0) {
        LOCK();
        *(int *)(DAT_1469e9d70 + 8) = *(int *)(DAT_1469e9d70 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acd920 = DAT_1469e9d78;
      _DAT_146acd928 = DAT_1469e9d80;
      _DAT_146acd910 = 0x56;
      _DAT_146acd914 = 0xffffffff;
      _DAT_146acd918 = 2;
      _DAT_146acd930 = DAT_1469e9d88;
      if (DAT_1469e9d88 != 0) {
        LOCK();
        *(int *)(DAT_1469e9d88 + 8) = *(int *)(DAT_1469e9d88 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acd948 = DAT_1469e9d90;
      _DAT_146acd950 = DAT_1469e9d98;
      _DAT_146acd938 = 0x57;
      _DAT_146acd93c = 0xffffffff;
      _DAT_146acd940 = 2;
      _DAT_146acd958 = DAT_1469e9da0;
      if (DAT_1469e9da0 != 0) {
        LOCK();
        *(int *)(DAT_1469e9da0 + 8) = *(int *)(DAT_1469e9da0 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acd970 = DAT_1469e9da8;
      _DAT_146acd978 = DAT_1469e9db0;
      _DAT_146acd960 = 0x58;
      _DAT_146acd964 = 0xffffffff;
      _DAT_146acd968 = 2;
      _DAT_146acd980 = DAT_1469e9db8;
      if (DAT_1469e9db8 != 0) {
        LOCK();
        *(int *)(DAT_1469e9db8 + 8) = *(int *)(DAT_1469e9db8 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acd998 = DAT_1469e9dc0;
      _DAT_146acd9a0 = DAT_1469e9dc8;
      _DAT_146acd988 = 0x59;
      _DAT_146acd98c = 0xffffffff;
      _DAT_146acd990 = 2;
      _DAT_146acd9a8 = DAT_1469e9dd0;
      if (DAT_1469e9dd0 != 0) {
        LOCK();
        *(int *)(DAT_1469e9dd0 + 8) = *(int *)(DAT_1469e9dd0 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acd9c0 = DAT_1469e9dd8;
      _DAT_146acd9c8 = DAT_1469e9de0;
      _DAT_146acd9b0 = 0x5a;
      _DAT_146acd9b4 = 0xffffffff;
      _DAT_146acd9b8 = 2;
      _DAT_146acd9d0 = DAT_1469e9de8;
      if (DAT_1469e9de8 != 0) {
        LOCK();
        *(int *)(DAT_1469e9de8 + 8) = *(int *)(DAT_1469e9de8 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acd9e8 = DAT_1469e9df0;
      _DAT_146acd9f0 = DAT_1469e9df8;
      _DAT_146acd9d8 = 0x60;
      _DAT_146acd9dc = 0xffffffff;
      _DAT_146acd9e0 = 2;
      _DAT_146acd9f8 = DAT_1469e9e00;
      if (DAT_1469e9e00 != 0) {
        LOCK();
        *(int *)(DAT_1469e9e00 + 8) = *(int *)(DAT_1469e9e00 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acda10 = DAT_1469e9e08;
      _DAT_146acda18 = DAT_1469e9e10;
      _DAT_146acda00 = 0x61;
      _DAT_146acda04 = 0xffffffff;
      _DAT_146acda08 = 2;
      _DAT_146acda20 = DAT_1469e9e18;
      if (DAT_1469e9e18 != 0) {
        LOCK();
        *(int *)(DAT_1469e9e18 + 8) = *(int *)(DAT_1469e9e18 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acda38 = DAT_1469e9e20;
      _DAT_146acda40 = DAT_1469e9e28;
      _DAT_146acda28 = 0x62;
      _DAT_146acda2c = 0xffffffff;
      _DAT_146acda30 = 2;
      _DAT_146acda48 = DAT_1469e9e30;
      if (DAT_1469e9e30 != 0) {
        LOCK();
        *(int *)(DAT_1469e9e30 + 8) = *(int *)(DAT_1469e9e30 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acda60 = DAT_1469e9e38;
      _DAT_146acda68 = DAT_1469e9e40;
      _DAT_146acda50 = 99;
      _DAT_146acda54 = 0xffffffff;
      _DAT_146acda58 = 2;
      _DAT_146acda70 = DAT_1469e9e48;
      if (DAT_1469e9e48 != 0) {
        LOCK();
        *(int *)(DAT_1469e9e48 + 8) = *(int *)(DAT_1469e9e48 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acda88 = DAT_1469e9e50;
      _DAT_146acda90 = DAT_1469e9e58;
      _DAT_146acda78 = 100;
      _DAT_146acda7c = 0xffffffff;
      _DAT_146acda80 = 2;
      _DAT_146acda98 = DAT_1469e9e60;
      if (DAT_1469e9e60 != 0) {
        LOCK();
        *(int *)(DAT_1469e9e60 + 8) = *(int *)(DAT_1469e9e60 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acdab0 = DAT_1469e9e68;
      _DAT_146acdab8 = DAT_1469e9e70;
      _DAT_146acdaa0 = 0x65;
      _DAT_146acdaa4 = 0xffffffff;
      _DAT_146acdaa8 = 2;
      _DAT_146acdac0 = DAT_1469e9e78;
      if (DAT_1469e9e78 != 0) {
        LOCK();
        *(int *)(DAT_1469e9e78 + 8) = *(int *)(DAT_1469e9e78 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acdad8 = DAT_1469e9e80;
      _DAT_146acdae0 = DAT_1469e9e88;
      _DAT_146acdac8 = 0x66;
      _DAT_146acdacc = 0xffffffff;
      _DAT_146acdad0 = 2;
      _DAT_146acdae8 = DAT_1469e9e90;
      if (DAT_1469e9e90 != 0) {
        LOCK();
        *(int *)(DAT_1469e9e90 + 8) = *(int *)(DAT_1469e9e90 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acdb00 = DAT_1469e9e98;
      _DAT_146acdb08 = DAT_1469e9ea0;
      _DAT_146acdaf0 = 0x67;
      _DAT_146acdaf4 = 0xffffffff;
      _DAT_146acdaf8 = 2;
      _DAT_146acdb10 = DAT_1469e9ea8;
      if (DAT_1469e9ea8 != 0) {
        LOCK();
        *(int *)(DAT_1469e9ea8 + 8) = *(int *)(DAT_1469e9ea8 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acdb28 = DAT_1469e9eb0;
      _DAT_146acdb30 = DAT_1469e9eb8;
      _DAT_146acdb18 = 0x68;
      _DAT_146acdb1c = 0xffffffff;
      _DAT_146acdb20 = 2;
      _DAT_146acdb38 = DAT_1469e9ec0;
      if (DAT_1469e9ec0 != 0) {
        LOCK();
        *(int *)(DAT_1469e9ec0 + 8) = *(int *)(DAT_1469e9ec0 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acdb50 = DAT_1469e9ec8;
      _DAT_146acdb58 = DAT_1469e9ed0;
      _DAT_146acdb40 = 0x69;
      _DAT_146acdb44 = 0xffffffff;
      _DAT_146acdb48 = 2;
      _DAT_146acdb60 = DAT_1469e9ed8;
      if (DAT_1469e9ed8 != 0) {
        LOCK();
        *(int *)(DAT_1469e9ed8 + 8) = *(int *)(DAT_1469e9ed8 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acdb78 = DAT_1469e9ee0;
      _DAT_146acdb80 = DAT_1469e9ee8;
      _DAT_146acdb68 = 0x6a;
      _DAT_146acdb6c = 0xffffffff;
      _DAT_146acdb70 = 2;
      _DAT_146acdb88 = DAT_1469e9ef0;
      if (DAT_1469e9ef0 != 0) {
        LOCK();
        *(int *)(DAT_1469e9ef0 + 8) = *(int *)(DAT_1469e9ef0 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acdba0 = DAT_1469e9ef8;
      _DAT_146acdba8 = DAT_1469e9f00;
      _DAT_146acdb90 = 0x6b;
      _DAT_146acdb94 = 0xffffffff;
      _DAT_146acdb98 = 2;
      _DAT_146acdbb0 = DAT_1469e9f08;
      if (DAT_1469e9f08 != 0) {
        LOCK();
        *(int *)(DAT_1469e9f08 + 8) = *(int *)(DAT_1469e9f08 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acdbc8 = DAT_1469e9f10;
      _DAT_146acdbd0 = DAT_1469e9f18;
      _DAT_146acdbb8 = 0x6d;
      _DAT_146acdbbc = 0xffffffff;
      _DAT_146acdbc0 = 2;
      _DAT_146acdbd8 = DAT_1469e9f20;
      if (DAT_1469e9f20 != 0) {
        LOCK();
        *(int *)(DAT_1469e9f20 + 8) = *(int *)(DAT_1469e9f20 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acdbf0 = DAT_1469e9f28;
      _DAT_146acdbf8 = DAT_1469e9f30;
      _DAT_146acdbe0 = 0x6e;
      _DAT_146acdbe4 = 0xffffffff;
      _DAT_146acdbe8 = 2;
      _DAT_146acdc00 = DAT_1469e9f38;
      if (DAT_1469e9f38 != 0) {
        LOCK();
        *(int *)(DAT_1469e9f38 + 8) = *(int *)(DAT_1469e9f38 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acdc18 = DAT_1469e9f40;
      _DAT_146acdc20 = DAT_1469e9f48;
      _DAT_146acdc08 = 0x6f;
      _DAT_146acdc0c = 0xffffffff;
      _DAT_146acdc10 = 2;
      _DAT_146acdc28 = DAT_1469e9f50;
      if (DAT_1469e9f50 != 0) {
        LOCK();
        *(int *)(DAT_1469e9f50 + 8) = *(int *)(DAT_1469e9f50 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acdc40 = DAT_1469e9f58;
      _DAT_146acdc48 = DAT_1469e9f60;
      _DAT_146acdc30 = 0x70;
      _DAT_146acdc34 = 0xffffffff;
      _DAT_146acdc38 = 2;
      _DAT_146acdc50 = DAT_1469e9f68;
      if (DAT_1469e9f68 != 0) {
        LOCK();
        *(int *)(DAT_1469e9f68 + 8) = *(int *)(DAT_1469e9f68 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acdc68 = DAT_1469e9f70;
      _DAT_146acdc70 = DAT_1469e9f78;
      _DAT_146acdc58 = 0x71;
      _DAT_146acdc5c = 0xffffffff;
      _DAT_146acdc60 = 2;
      _DAT_146acdc78 = DAT_1469e9f80;
      if (DAT_1469e9f80 != 0) {
        LOCK();
        *(int *)(DAT_1469e9f80 + 8) = *(int *)(DAT_1469e9f80 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acdc90 = DAT_1469e9f88;
      _DAT_146acdc98 = DAT_1469e9f90;
      _DAT_146acdc80 = 0x72;
      _DAT_146acdc84 = 0xffffffff;
      _DAT_146acdc88 = 2;
      _DAT_146acdca0 = DAT_1469e9f98;
      if (DAT_1469e9f98 != 0) {
        LOCK();
        *(int *)(DAT_1469e9f98 + 8) = *(int *)(DAT_1469e9f98 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acdcb8 = DAT_1469e9fa0;
      _DAT_146acdcc0 = DAT_1469e9fa8;
      _DAT_146acdca8 = 0x73;
      _DAT_146acdcac = 0xffffffff;
      _DAT_146acdcb0 = 2;
      _DAT_146acdcc8 = DAT_1469e9fb0;
      if (DAT_1469e9fb0 != 0) {
        LOCK();
        *(int *)(DAT_1469e9fb0 + 8) = *(int *)(DAT_1469e9fb0 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acdce0 = DAT_1469e9fb8;
      _DAT_146acdce8 = DAT_1469e9fc0;
      _DAT_146acdcd0 = 0x74;
      _DAT_146acdcd4 = 0xffffffff;
      _DAT_146acdcd8 = 2;
      _DAT_146acdcf0 = DAT_1469e9fc8;
      if (DAT_1469e9fc8 != 0) {
        LOCK();
        *(int *)(DAT_1469e9fc8 + 8) = *(int *)(DAT_1469e9fc8 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acdd08 = DAT_1469e9fd0;
      _DAT_146acdd10 = DAT_1469e9fd8;
      _DAT_146acdcf8 = 0x75;
      _DAT_146acdcfc = 0xffffffff;
      _DAT_146acdd00 = 2;
      _DAT_146acdd18 = DAT_1469e9fe0;
      if (DAT_1469e9fe0 != 0) {
        LOCK();
        *(int *)(DAT_1469e9fe0 + 8) = *(int *)(DAT_1469e9fe0 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acdd30 = DAT_1469e9fe8;
      _DAT_146acdd38 = DAT_1469e9ff0;
      _DAT_146acdd20 = 0x76;
      _DAT_146acdd24 = 0xffffffff;
      _DAT_146acdd28 = 2;
      _DAT_146acdd40 = DAT_1469e9ff8;
      if (DAT_1469e9ff8 != 0) {
        LOCK();
        *(int *)(DAT_1469e9ff8 + 8) = *(int *)(DAT_1469e9ff8 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acdd58 = DAT_1469ea000;
      _DAT_146acdd60 = DAT_1469ea008;
      _DAT_146acdd48 = 0x77;
      _DAT_146acdd4c = 0xffffffff;
      _DAT_146acdd50 = 2;
      _DAT_146acdd68 = DAT_1469ea010;
      if (DAT_1469ea010 != 0) {
        LOCK();
        *(int *)(DAT_1469ea010 + 8) = *(int *)(DAT_1469ea010 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acdd80 = DAT_1469ea018;
      _DAT_146acdd88 = DAT_1469ea020;
      _DAT_146acdd70 = 0x78;
      _DAT_146acdd74 = 0xffffffff;
      _DAT_146acdd78 = 2;
      _DAT_146acdd90 = DAT_1469ea028;
      if (DAT_1469ea028 != 0) {
        LOCK();
        *(int *)(DAT_1469ea028 + 8) = *(int *)(DAT_1469ea028 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acdda8 = DAT_1469ea030;
      _DAT_146acddb0 = DAT_1469ea038;
      _DAT_146acdd98 = 0x79;
      _DAT_146acdd9c = 0xffffffff;
      _DAT_146acdda0 = 2;
      _DAT_146acddb8 = DAT_1469ea040;
      if (DAT_1469ea040 != 0) {
        LOCK();
        *(int *)(DAT_1469ea040 + 8) = *(int *)(DAT_1469ea040 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acddd0 = DAT_1469ea048;
      _DAT_146acddd8 = DAT_1469ea050;
      _DAT_146acddc0 = 0x7a;
      _DAT_146acddc4 = 0xffffffff;
      _DAT_146acddc8 = 2;
      _DAT_146acdde0 = DAT_1469ea058;
      if (DAT_1469ea058 != 0) {
        LOCK();
        *(int *)(DAT_1469ea058 + 8) = *(int *)(DAT_1469ea058 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acddf8 = DAT_1469ea060;
      _DAT_146acde00 = DAT_1469ea068;
      _DAT_146acdde8 = 0x7b;
      _DAT_146acddec = 0xffffffff;
      _DAT_146acddf0 = 2;
      _DAT_146acde08 = DAT_1469ea070;
      if (DAT_1469ea070 != 0) {
        LOCK();
        *(int *)(DAT_1469ea070 + 8) = *(int *)(DAT_1469ea070 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acde20 = DAT_1469ea078;
      _DAT_146acde28 = DAT_1469ea080;
      _DAT_146acde10 = 0x90;
      _DAT_146acde14 = 0xffffffff;
      _DAT_146acde18 = 2;
      _DAT_146acde30 = DAT_1469ea088;
      if (DAT_1469ea088 != 0) {
        LOCK();
        *(int *)(DAT_1469ea088 + 8) = *(int *)(DAT_1469ea088 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acde48 = DAT_1469ea090;
      _DAT_146acde50 = DAT_1469ea098;
      _DAT_146acde38 = 0x91;
      _DAT_146acde3c = 0xffffffff;
      _DAT_146acde40 = 2;
      _DAT_146acde58 = DAT_1469ea0a0;
      if (DAT_1469ea0a0 != 0) {
        LOCK();
        *(int *)(DAT_1469ea0a0 + 8) = *(int *)(DAT_1469ea0a0 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acde70 = DAT_1469ea0a8;
      _DAT_146acde78 = DAT_1469ea0b0;
      _DAT_146acde60 = 0xa0;
      _DAT_146acde64 = 0xffffffff;
      _DAT_146acde68 = 3;
      _DAT_146acde80 = DAT_1469ea0b8;
      if (DAT_1469ea0b8 != 0) {
        LOCK();
        *(int *)(DAT_1469ea0b8 + 8) = *(int *)(DAT_1469ea0b8 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acde98 = DAT_1469ea0c0;
      _DAT_146acdea0 = DAT_1469ea0c8;
      _DAT_146acde88 = 0xa1;
      _DAT_146acde8c = 0xffffffff;
      _DAT_146acde90 = 3;
      _DAT_146acdea8 = DAT_1469ea0d0;
      if (DAT_1469ea0d0 != 0) {
        LOCK();
        *(int *)(DAT_1469ea0d0 + 8) = *(int *)(DAT_1469ea0d0 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acdec0 = DAT_1469ea0d8;
      _DAT_146acdec8 = DAT_1469ea0e0;
      _DAT_146acdeb0 = 0xa2;
      _DAT_146acdeb4 = 0xffffffff;
      _DAT_146acdeb8 = 3;
      _DAT_146acded0 = DAT_1469ea0e8;
      if (DAT_1469ea0e8 != 0) {
        LOCK();
        *(int *)(DAT_1469ea0e8 + 8) = *(int *)(DAT_1469ea0e8 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acdee8 = DAT_1469ea0f0;
      _DAT_146acdef0 = DAT_1469ea0f8;
      _DAT_146acded8 = 0xa3;
      _DAT_146acdedc = 0xffffffff;
      _DAT_146acdee0 = 3;
      _DAT_146acdef8 = DAT_1469ea100;
      if (DAT_1469ea100 != 0) {
        LOCK();
        *(int *)(DAT_1469ea100 + 8) = *(int *)(DAT_1469ea100 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acdf10 = DAT_1469ea108;
      _DAT_146acdf18 = DAT_1469ea110;
      _DAT_146acdf00 = 0xa4;
      _DAT_146acdf04 = 0xffffffff;
      _DAT_146acdf08 = 3;
      _DAT_146acdf20 = DAT_1469ea118;
      if (DAT_1469ea118 != 0) {
        LOCK();
        *(int *)(DAT_1469ea118 + 8) = *(int *)(DAT_1469ea118 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acdf38 = DAT_1469ea120;
      _DAT_146acdf40 = DAT_1469ea128;
      _DAT_146acdf28 = 0xa5;
      _DAT_146acdf2c = 0xffffffff;
      _DAT_146acdf30 = 3;
      _DAT_146acdf48 = DAT_1469ea130;
      if (DAT_1469ea130 != 0) {
        LOCK();
        *(int *)(DAT_1469ea130 + 8) = *(int *)(DAT_1469ea130 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acdf60 = DAT_1469ea138;
      _DAT_146acdf68 = DAT_1469ea140;
      _DAT_146acdf50 = 0;
      _DAT_146acdf54 = 0xffffffff;
      _DAT_146acdf58 = 3;
      _DAT_146acdf70 = DAT_1469ea148;
      if (DAT_1469ea148 != 0) {
        LOCK();
        *(int *)(DAT_1469ea148 + 8) = *(int *)(DAT_1469ea148 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acdf88 = DAT_1469ea150;
      _DAT_146acdf90 = DAT_1469ea158;
      _DAT_146acdf78 = 0;
      _DAT_146acdf7c = 0xffffffff;
      _DAT_146acdf80 = 3;
      _DAT_146acdf98 = DAT_1469ea160;
      if (DAT_1469ea160 != 0) {
        LOCK();
        *(int *)(DAT_1469ea160 + 8) = *(int *)(DAT_1469ea160 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acdfb0 = DAT_1469ea168;
      _DAT_146acdfb8 = DAT_1469ea170;
      _DAT_146acdfa0 = 0xba;
      _DAT_146acdfa4 = 0xffffffff;
      _DAT_146acdfa8 = 2;
      _DAT_146acdfc0 = DAT_1469ea178;
      if (DAT_1469ea178 != 0) {
        LOCK();
        *(int *)(DAT_1469ea178 + 8) = *(int *)(DAT_1469ea178 + 8) + 1;
        UNLOCK();
      }
      _DAT_146acdfd8 = DAT_1469ea180;
      _DAT_146acdfe0 = DAT_1469ea188;
      _DAT_146acdfc8 = 0xbb;
      _DAT_146acdfcc = 0xffffffff;
      _DAT_146acdfd0 = 2;
      _DAT_146acdfe8 = DAT_1469ea190;
      if (DAT_1469ea190 != 0) {
        LOCK();
        *(int *)(DAT_1469ea190 + 8) = *(int *)(DAT_1469ea190 + 8) + 1;
        UNLOCK();
      }
      _DAT_146ace000 = DAT_1469ea198;
      _DAT_146ace008 = DAT_1469ea1a0;
      _DAT_146acdff0 = 0xbc;
      _DAT_146acdff4 = 0xffffffff;
      _DAT_146acdff8 = 2;
      _DAT_146ace010 = DAT_1469ea1a8;
      if (DAT_1469ea1a8 != 0) {
        LOCK();
        *(int *)(DAT_1469ea1a8 + 8) = *(int *)(DAT_1469ea1a8 + 8) + 1;
        UNLOCK();
      }
      _DAT_146ace028 = DAT_1469ea1c8;
      _DAT_146ace030 = DAT_1469ea1d0;
      _DAT_146ace018 = 0;
      _DAT_146ace01c = 0xffffffff;
      _DAT_146ace020 = 3;
      _DAT_146ace038 = DAT_1469ea1d8;
      if (DAT_1469ea1d8 != 0) {
        LOCK();
        *(int *)(DAT_1469ea1d8 + 8) = *(int *)(DAT_1469ea1d8 + 8) + 1;
        UNLOCK();
      }
      _DAT_146ace050 = DAT_1469ea1e0;
      _DAT_146ace058 = DAT_1469ea1e8;
      _DAT_146ace040 = 0xbe;
      _DAT_146ace044 = 0xffffffff;
      _DAT_146ace048 = 2;
      _DAT_146ace060 = DAT_1469ea1f0;
      if (DAT_1469ea1f0 != 0) {
        LOCK();
        *(int *)(DAT_1469ea1f0 + 8) = *(int *)(DAT_1469ea1f0 + 8) + 1;
        UNLOCK();
      }
      _DAT_146ace078 = DAT_1469ea1f8;
      _DAT_146ace080 = DAT_1469ea200;
      _DAT_146ace068 = 0xbf;
      _DAT_146ace06c = 0xffffffff;
      _DAT_146ace070 = 2;
      _DAT_146ace088 = DAT_1469ea208;
      if (DAT_1469ea208 != 0) {
        LOCK();
        *(int *)(DAT_1469ea208 + 8) = *(int *)(DAT_1469ea208 + 8) + 1;
        UNLOCK();
      }
      _DAT_146ace0a0 = DAT_1469ea210;
      _DAT_146ace0a8 = DAT_1469ea218;
      _DAT_146ace090 = 0;
      _DAT_146ace094 = 0xffffffff;
      _DAT_146ace098 = 3;
      _DAT_146ace0b0 = DAT_1469ea220;
      if (DAT_1469ea220 != 0) {
        LOCK();
        *(int *)(DAT_1469ea220 + 8) = *(int *)(DAT_1469ea220 + 8) + 1;
        UNLOCK();
      }
      _DAT_146ace0c8 = DAT_1469ea240;
      _DAT_146ace0d0 = DAT_1469ea248;
      _DAT_146ace0b8 = 0xdb;
      _DAT_146ace0bc = 0xffffffff;
      _DAT_146ace0c0 = 2;
      _DAT_146ace0d8 = DAT_1469ea250;
      if (DAT_1469ea250 != 0) {
        LOCK();
        *(int *)(DAT_1469ea250 + 8) = *(int *)(DAT_1469ea250 + 8) + 1;
        UNLOCK();
      }
      _DAT_146ace0f0 = DAT_1469ea258;
      _DAT_146ace0f8 = DAT_1469ea260;
      _DAT_146ace0e0 = 0xdc;
      _DAT_146ace0e4 = 0xffffffff;
      _DAT_146ace0e8 = 2;
      _DAT_146ace100 = DAT_1469ea268;
      if (DAT_1469ea268 != 0) {
        LOCK();
        *(int *)(DAT_1469ea268 + 8) = *(int *)(DAT_1469ea268 + 8) + 1;
        UNLOCK();
      }
      _DAT_146ace118 = DAT_1469ea2a0;
      _DAT_146ace120 = DAT_1469ea2a8;
      _DAT_146ace108 = 0xdd;
      _DAT_146ace10c = 0xffffffff;
      _DAT_146ace110 = 2;
      _DAT_146ace128 = DAT_1469ea2b0;
      if (DAT_1469ea2b0 != 0) {
        LOCK();
        *(int *)(DAT_1469ea2b0 + 8) = *(int *)(DAT_1469ea2b0 + 8) + 1;
        UNLOCK();
      }
      _DAT_146ace140 = DAT_1469ea3d8;
      _DAT_146ace148 = DAT_1469ea3e0;
      _DAT_146ace130 = 0xffffffff000000de;
      uRam0000000146ace138 = 0;
      _DAT_146ace150 = DAT_1469ea3e8;
      if (DAT_1469ea3e8 != 0) {
        LOCK();
        *(int *)(DAT_1469ea3e8 + 8) = *(int *)(DAT_1469ea3e8 + 8) + 1;
        UNLOCK();
      }
      _DAT_146ace168 = DAT_1469ea3f0;
      _DAT_146ace170 = DAT_1469ea3f8;
      _DAT_146ace158 = 0;
      _DAT_146ace15c = 0xffffffff;
      _DAT_146ace160 = 9;
      _DAT_146ace178 = DAT_1469ea400;
      if (DAT_1469ea400 != 0) {
        LOCK();
        *(int *)(DAT_1469ea400 + 8) = *(int *)(DAT_1469ea400 + 8) + 1;
        UNLOCK();
      }
      _DAT_146ace190 = DAT_1469ea408;
      _DAT_146ace198 = DAT_1469ea410;
      _DAT_146ace180 = 0;
      _DAT_146ace184 = 0xffffffff;
      _DAT_146ace188 = 9;
      _DAT_146ace1a0 = DAT_1469ea418;
      if (DAT_1469ea418 != 0) {
        LOCK();
        *(int *)(DAT_1469ea418 + 8) = *(int *)(DAT_1469ea418 + 8) + 1;
        UNLOCK();
      }
      _DAT_146ace1b8 = DAT_1469ea420;
      _DAT_146ace1c0 = DAT_1469ea428;
      _DAT_146ace1a8 = 0;
      _DAT_146ace1ac = 0xffffffff;
      _DAT_146ace1b0 = 9;
      _DAT_146ace1c8 = DAT_1469ea430;
      if (DAT_1469ea430 != 0) {
        LOCK();
        *(int *)(DAT_1469ea430 + 8) = *(int *)(DAT_1469ea430 + 8) + 1;
        UNLOCK();
      }
      _DAT_146ace1e0 = DAT_1469ea438;
      _DAT_146ace1e8 = DAT_1469ea440;
      _DAT_146ace1d0 = 0;
      _DAT_146ace1d4 = 0xffffffff;
      _DAT_146ace1d8 = 9;
      _DAT_146ace1f0 = DAT_1469ea448;
      if (DAT_1469ea448 != 0) {
        LOCK();
        *(int *)(DAT_1469ea448 + 8) = *(int *)(DAT_1469ea448 + 8) + 1;
        UNLOCK();
      }
      _DAT_146ace208 = DAT_1469ea450;
      _DAT_146ace210 = DAT_1469ea458;
      _DAT_146ace1f8 = 0;
      _DAT_146ace1fc = 0xffffffff;
      _DAT_146ace200 = 8;
      _DAT_146ace218 = DAT_1469ea460;
      if (DAT_1469ea460 != 0) {
        LOCK();
        *(int *)(DAT_1469ea460 + 8) = *(int *)(DAT_1469ea460 + 8) + 1;
        UNLOCK();
      }
      _DAT_146ace230 = DAT_1469ea468;
      _DAT_146ace238 = DAT_1469ea470;
      _DAT_146ace220 = 0;
      _DAT_146ace224 = 0xffffffff;
      _DAT_146ace228 = 8;
      _DAT_146ace240 = DAT_1469ea478;
      if (DAT_1469ea478 != 0) {
        LOCK();
        *(int *)(DAT_1469ea478 + 8) = *(int *)(DAT_1469ea478 + 8) + 1;
        UNLOCK();
      }
      _DAT_146ace258 = DAT_1469ea480;
      _DAT_146ace260 = DAT_1469ea488;
      _DAT_146ace248 = 0x2d;
      _DAT_146ace24c = 0xffffffff;
      _DAT_146ace250 = 8;
      _DAT_146ace268 = DAT_1469ea490;
      if (DAT_1469ea490 != 0) {
        LOCK();
        *(int *)(DAT_1469ea490 + 8) = *(int *)(DAT_1469ea490 + 8) + 1;
        UNLOCK();
      }
      _DAT_146ace280 = DAT_1469ea498;
      _DAT_146ace288 = DAT_1469ea4a0;
      _DAT_146ace270 = 0x2e;
      _DAT_146ace274 = 0xffffffff;
      _DAT_146ace278 = 8;
      _DAT_146ace290 = DAT_1469ea4a8;
      if (DAT_1469ea4a8 != 0) {
        LOCK();
        *(int *)(DAT_1469ea4a8 + 8) = *(int *)(DAT_1469ea4a8 + 8) + 1;
        UNLOCK();
      }
      _DAT_146ace2a8 = DAT_1469ea4e0;
      _DAT_146ace2b0 = DAT_1469ea4e8;
      _DAT_146ace298 = 0;
      _DAT_146ace29c = 0xffffffff;
      _DAT_146ace2a0 = 9;
      _DAT_146ace2b8 = DAT_1469ea4f0;
      if (DAT_1469ea4f0 != 0) {
        LOCK();
        *(int *)(DAT_1469ea4f0 + 8) = *(int *)(DAT_1469ea4f0 + 8) + 1;
        UNLOCK();
      }
      _DAT_146ace2d0 = DAT_1469ea4f8;
      _DAT_146ace2d8 = DAT_1469ea500;
      _DAT_146ace2c0 = 0xde;
      _DAT_146ace2c4 = 0xffffffff;
      _DAT_146ace2c8 = 8;
      _DAT_146ace2e0 = DAT_1469ea508;
      if (DAT_1469ea508 != 0) {
        LOCK();
        *(int *)(DAT_1469ea508 + 8) = *(int *)(DAT_1469ea508 + 8) + 1;
        UNLOCK();
      }
      _DAT_146ace2f8 = DAT_1469ea510;
      _DAT_146ace300 = DAT_1469ea518;
      _DAT_146ace2e8 = 0xd;
      _DAT_146ace2ec = 0xffffffff;
      _DAT_146ace2f0 = 8;
      _DAT_146ace308 = DAT_1469ea520;
      if (DAT_1469ea520 != 0) {
        LOCK();
        *(int *)(DAT_1469ea520 + 8) = *(int *)(DAT_1469ea520 + 8) + 1;
        UNLOCK();
      }
      _DAT_146ace320 = DAT_1469ea528;
      _DAT_146ace328 = DAT_1469ea530;
      _DAT_146ace310 = 0x1b;
      _DAT_146ace314 = 0xffffffff;
      _DAT_146ace318 = 8;
      _DAT_146ace330 = DAT_1469ea538;
      if (DAT_1469ea538 != 0) {
        LOCK();
        *(int *)(DAT_1469ea538 + 8) = *(int *)(DAT_1469ea538 + 8) + 1;
        UNLOCK();
      }
      _DAT_146ace348 = DAT_1469ea540;
      _DAT_146ace350 = DAT_1469ea548;
      _DAT_146ace338 = 0xbd;
      _DAT_146ace33c = 0xffffffff;
      _DAT_146ace340 = 8;
      _DAT_146ace358 = DAT_1469ea550;
      if (DAT_1469ea550 != 0) {
        LOCK();
        *(int *)(DAT_1469ea550 + 8) = *(int *)(DAT_1469ea550 + 8) + 1;
        UNLOCK();
      }
      _DAT_146ace370 = DAT_1469ea558;
      _DAT_146ace378 = DAT_1469ea560;
      _DAT_146ace360 = 0xbb;
      _DAT_146ace364 = 0xffffffff;
      _DAT_146ace368 = 8;
      _DAT_146ace380 = DAT_1469ea568;
      if (DAT_1469ea568 != 0) {
        LOCK();
        *(int *)(DAT_1469ea568 + 8) = *(int *)(DAT_1469ea568 + 8) + 1;
        UNLOCK();
      }
      _DAT_146ace398 = DAT_1469ea570;
      _DAT_146ace3a0 = DAT_1469ea578;
      _DAT_146ace388 = 0x21;
      _DAT_146ace38c = 0xffffffff;
      _DAT_146ace390 = 8;
      _DAT_146ace3a8 = DAT_1469ea580;
      if (DAT_1469ea580 != 0) {
        LOCK();
        *(int *)(DAT_1469ea580 + 8) = *(int *)(DAT_1469ea580 + 8) + 1;
        UNLOCK();
      }
      _DAT_146ace3c0 = DAT_1469ea588;
      _DAT_146ace3c8 = DAT_1469ea590;
      _DAT_146ace3b0 = 0x22;
      _DAT_146ace3b4 = 0xffffffff;
      _DAT_146ace3b8 = 8;
      _DAT_146ace3d0 = DAT_1469ea598;
      if (DAT_1469ea598 != 0) {
        LOCK();
        *(int *)(DAT_1469ea598 + 8) = *(int *)(DAT_1469ea598 + 8) + 1;
        UNLOCK();
      }
      _DAT_146ace3e8 = DAT_1469ea5a0;
      _DAT_146ace3f0 = DAT_1469ea5a8;
      _DAT_146ace3d8 = 0x24;
      _DAT_146ace3dc = 0xffffffff;
      _DAT_146ace3e0 = 8;
      _DAT_146ace3f8 = DAT_1469ea5b0;
      if (DAT_1469ea5b0 != 0) {
        LOCK();
        *(int *)(DAT_1469ea5b0 + 8) = *(int *)(DAT_1469ea5b0 + 8) + 1;
        UNLOCK();
      }
      _DAT_146ace410 = DAT_1469ea5b8;
      _DAT_146ace418 = DAT_1469ea5c0;
      _DAT_146ace400 = 0x23;
      _DAT_146ace404 = 0xffffffff;
      _DAT_146ace408 = 8;
      _DAT_146ace420 = DAT_1469ea5c8;
      if (DAT_1469ea5c8 != 0) {
        LOCK();
        *(int *)(DAT_1469ea5c8 + 8) = *(int *)(DAT_1469ea5c8 + 8) + 1;
        UNLOCK();
      }
      _DAT_146ace438 = DAT_1469ea5d0;
      _DAT_146ace440 = DAT_1469ea5d8;
      _DAT_146ace428 = 0x26;
      _DAT_146ace42c = 0xffffffff;
      _DAT_146ace430 = 8;
      _DAT_146ace448 = DAT_1469ea5e0;
      if (DAT_1469ea5e0 != 0) {
        LOCK();
        *(int *)(DAT_1469ea5e0 + 8) = *(int *)(DAT_1469ea5e0 + 8) + 1;
        UNLOCK();
      }
      _DAT_146ace460 = DAT_1469ea5e8;
      _DAT_146ace468 = DAT_1469ea5f0;
      _DAT_146ace450 = 0x28;
      _DAT_146ace454 = 0xffffffff;
      _DAT_146ace458 = 8;
      _DAT_146ace470 = DAT_1469ea5f8;
      if (DAT_1469ea5f8 != 0) {
        LOCK();
        *(int *)(DAT_1469ea5f8 + 8) = *(int *)(DAT_1469ea5f8 + 8) + 1;
        UNLOCK();
      }
      _DAT_146ace488 = DAT_1469ea600;
      _DAT_146ace490 = DAT_1469ea608;
      _DAT_146ace478 = 0x27;
      _DAT_146ace47c = 0xffffffff;
      _DAT_146ace480 = 8;
      _DAT_146ace498 = DAT_1469ea610;
      if (DAT_1469ea610 != 0) {
        LOCK();
        *(int *)(DAT_1469ea610 + 8) = *(int *)(DAT_1469ea610 + 8) + 1;
        UNLOCK();
      }
      _DAT_146ace4b0 = DAT_1469ea618;
      _DAT_146ace4b8 = DAT_1469ea620;
      _DAT_146ace4a0 = 0x25;
      _DAT_146ace4a4 = 0xffffffff;
      _DAT_146ace4a8 = 8;
      _DAT_146ace4c0 = DAT_1469ea628;
      if (DAT_1469ea628 != 0) {
        LOCK();
        *(int *)(DAT_1469ea628 + 8) = *(int *)(DAT_1469ea628 + 8) + 1;
        UNLOCK();
      }
      _DAT_146ace4d8 = DAT_1469ea630;
      _DAT_146ace4e0 = DAT_1469ea638;
      _DAT_146ace4c8 = 0x26;
      _DAT_146ace4cc = 0xffffffff;
      _DAT_146ace4d0 = 8;
      _DAT_146ace4e8 = DAT_1469ea640;
      if (DAT_1469ea640 != 0) {
        LOCK();
        *(int *)(DAT_1469ea640 + 8) = *(int *)(DAT_1469ea640 + 8) + 1;
        UNLOCK();
      }
      _DAT_146ace500 = DAT_1469ea648;
      _DAT_146ace508 = DAT_1469ea650;
      _DAT_146ace4f0 = 0x28;
      _DAT_146ace4f4 = 0xffffffff;
      _DAT_146ace4f8 = 8;
      _DAT_146ace510 = DAT_1469ea658;
      if (DAT_1469ea658 != 0) {
        LOCK();
        *(int *)(DAT_1469ea658 + 8) = *(int *)(DAT_1469ea658 + 8) + 1;
        UNLOCK();
      }
      _DAT_146ace528 = DAT_1469ea660;
      _DAT_146ace530 = DAT_1469ea668;
      _DAT_146ace518 = 0x27;
      _DAT_146ace51c = 0xffffffff;
      _DAT_146ace520 = 8;
      _DAT_146ace538 = DAT_1469ea670;
      if (DAT_1469ea670 != 0) {
        LOCK();
        *(int *)(DAT_1469ea670 + 8) = *(int *)(DAT_1469ea670 + 8) + 1;
        UNLOCK();
      }
      _DAT_146ace550 = DAT_1469ea678;
      _DAT_146ace558 = DAT_1469ea680;
      _DAT_146ace540 = 0x25;
      _DAT_146ace544 = 0xffffffff;
      _DAT_146ace548 = 8;
      _DAT_146ace560 = DAT_1469ea688;
      if (DAT_1469ea688 != 0) {
        LOCK();
        *(int *)(DAT_1469ea688 + 8) = *(int *)(DAT_1469ea688 + 8) + 1;
        UNLOCK();
      }
      _DAT_146ace578 = DAT_1469ea690;
      _DAT_146ace580 = DAT_1469ea698;
      _DAT_146ace568 = 0x26;
      _DAT_146ace56c = 0xffffffff;
      _DAT_146ace570 = 8;
      _DAT_146ace588 = DAT_1469ea6a0;
      if (DAT_1469ea6a0 != 0) {
        LOCK();
        *(int *)(DAT_1469ea6a0 + 8) = *(int *)(DAT_1469ea6a0 + 8) + 1;
        UNLOCK();
      }
      _DAT_146ace5a0 = DAT_1469ea6a8;
      _DAT_146ace5a8 = DAT_1469ea6b0;
      _DAT_146ace590 = 0x28;
      _DAT_146ace594 = 0xffffffff;
      _DAT_146ace598 = 8;
      _DAT_146ace5b0 = DAT_1469ea6b8;
      if (DAT_1469ea6b8 != 0) {
        LOCK();
        *(int *)(DAT_1469ea6b8 + 8) = *(int *)(DAT_1469ea6b8 + 8) + 1;
        UNLOCK();
      }
      _DAT_146ace5c8 = DAT_1469ea6c0;
      _DAT_146ace5d0 = DAT_1469ea6c8;
      _DAT_146ace5b8 = 0x27;
      _DAT_146ace5bc = 0xffffffff;
      _DAT_146ace5c0 = 8;
      _DAT_146ace5d8 = DAT_1469ea6d0;
      if (DAT_1469ea6d0 != 0) {
        LOCK();
        *(int *)(DAT_1469ea6d0 + 8) = *(int *)(DAT_1469ea6d0 + 8) + 1;
        UNLOCK();
      }
      _DAT_146ace5f0 = DAT_1469ea6d8;
      _DAT_146ace5f8 = DAT_1469ea6e0;
      _DAT_146ace5e0 = 0x25;
      _DAT_146ace5e4 = 0xffffffff;
      _DAT_146ace5e8 = 8;
      _DAT_146ace600 = DAT_1469ea6e8;
      if (DAT_1469ea6e8 != 0) {
        LOCK();
        *(int *)(DAT_1469ea6e8 + 8) = *(int *)(DAT_1469ea6e8 + 8) + 1;
        UNLOCK();
      }
      _DAT_146ace618 = DAT_1469ea6f0;
      _DAT_146ace620 = DAT_1469ea6f8;
      _DAT_146ace608 = 0;
      _DAT_146ace60c = 0xffffffff;
      _DAT_146ace610 = 0x21;
      _DAT_146ace628 = DAT_1469ea700;
      if (DAT_1469ea700 != 0) {
        LOCK();
        *(int *)(DAT_1469ea700 + 8) = *(int *)(DAT_1469ea700 + 8) + 1;
        UNLOCK();
      }
      _DAT_146ace640 = DAT_1469ea708;
      _DAT_146ace648 = DAT_1469ea710;
      _DAT_146ace630 = 0;
      _DAT_146ace634 = 0xffffffff;
      _DAT_146ace638 = 0x21;
      _DAT_146ace650 = DAT_1469ea718;
      if (DAT_1469ea718 != 0) {
        LOCK();
        *(int *)(DAT_1469ea718 + 8) = *(int *)(DAT_1469ea718 + 8) + 1;
        UNLOCK();
      }
      _DAT_146ace668 = DAT_1469ea720;
      _DAT_146ace670 = DAT_1469ea728;
      _DAT_146ace658 = 0;
      _DAT_146ace65c = 0xffffffff;
      _DAT_146ace660 = 0x21;
      _DAT_146ace678 = DAT_1469ea730;
      if (DAT_1469ea730 != 0) {
        LOCK();
        *(int *)(DAT_1469ea730 + 8) = *(int *)(DAT_1469ea730 + 8) + 1;
        UNLOCK();
      }
      _DAT_146ace690 = DAT_1469ea750;
      _DAT_146ace698 = DAT_1469ea758;
      _DAT_146ace680 = 0;
      _DAT_146ace684 = 0xffffffff;
      _DAT_146ace688 = 0x21;
      _DAT_146ace6a0 = DAT_1469ea760;
      if (DAT_1469ea760 != 0) {
        LOCK();
        *(int *)(DAT_1469ea760 + 8) = *(int *)(DAT_1469ea760 + 8) + 1;
        UNLOCK();
      }
      _DAT_146ace6b8 = DAT_1469ea768;
      _DAT_146ace6c0 = DAT_1469ea770;
      _DAT_146ace6a8 = 0;
      _DAT_146ace6b0 = 0x10;
      _DAT_146ace6c8 = DAT_1469ea778;
      if (DAT_1469ea778 != 0) {
        LOCK();
        *(int *)(DAT_1469ea778 + 8) = *(int *)(DAT_1469ea778 + 8) + 1;
        UNLOCK();
      }
      _DAT_146ace6e0 = DAT_1469ea780;
      _DAT_146ace6e8 = DAT_1469ea788;
      _DAT_146ace6d0 = 0;
      _DAT_146ace6d4 = 0xffffffff;
      _DAT_146ace6d8 = 0x11;
      _DAT_146ace6f0 = DAT_1469ea790;
      if (DAT_1469ea790 != 0) {
        LOCK();
        *(int *)(DAT_1469ea790 + 8) = *(int *)(DAT_1469ea790 + 8) + 1;
        UNLOCK();
      }
      _DAT_146ace708 = DAT_1469ea798;
      _DAT_146ace710 = DAT_1469ea7a0;
      _DAT_146ace6f8 = 0;
      _DAT_146ace6fc = 0xffffffff;
      _DAT_146ace700 = 0x11;
      _DAT_146ace718 = DAT_1469ea7a8;
      if (DAT_1469ea7a8 != 0) {
        LOCK();
        *(int *)(DAT_1469ea7a8 + 8) = *(int *)(DAT_1469ea7a8 + 8) + 1;
        UNLOCK();
      }
      _DAT_146ace730 = DAT_1469ea7b0;
      _DAT_146ace738 = DAT_1469ea7b8;
      _DAT_146ace720 = 0;
      _DAT_146ace724 = 0xffffffff;
      _DAT_146ace728 = 0x11;
      _DAT_146ace740 = DAT_1469ea7c0;
      if (DAT_1469ea7c0 != 0) {
        LOCK();
        *(int *)(DAT_1469ea7c0 + 8) = *(int *)(DAT_1469ea7c0 + 8) + 1;
        UNLOCK();
      }
      _DAT_146ace758 = DAT_1469ea7c8;
      _DAT_146ace760 = DAT_1469ea7d0;
      _DAT_146ace748 = 0;
      _DAT_146ace74c = 0xffffffff;
      _DAT_146ace750 = 0x11;
      _DAT_146ace768 = DAT_1469ea7d8;
      if (DAT_1469ea7d8 != 0) {
        LOCK();
        *(int *)(DAT_1469ea7d8 + 8) = *(int *)(DAT_1469ea7d8 + 8) + 1;
        UNLOCK();
      }
      _DAT_146ace780 = DAT_1469ea7e0;
      _DAT_146ace788 = DAT_1469ea7e8;
      _DAT_146ace770 = 0;
      _DAT_146ace774 = 0xffffffff;
      _DAT_146ace778 = 0x11;
      _DAT_146ace790 = DAT_1469ea7f0;
      if (DAT_1469ea7f0 != 0) {
        LOCK();
        *(int *)(DAT_1469ea7f0 + 8) = *(int *)(DAT_1469ea7f0 + 8) + 1;
        UNLOCK();
      }
      _DAT_146ace7a8 = DAT_1469ea7f8;
      _DAT_146ace7b0 = DAT_1469ea800;
      _DAT_146ace798 = 0;
      _DAT_146ace79c = 0xffffffff;
      _DAT_146ace7a0 = 0x11;
      _DAT_146ace7b8 = DAT_1469ea808;
      if (DAT_1469ea808 != 0) {
        LOCK();
        *(int *)(DAT_1469ea808 + 8) = *(int *)(DAT_1469ea808 + 8) + 1;
        UNLOCK();
      }
      _DAT_146ace7d0 = DAT_1469ea810;
      _DAT_146ace7d8 = DAT_1469ea818;
      _DAT_146ace7c0 = 0;
      _DAT_146ace7c4 = 0xffffffff;
      _DAT_146ace7c8 = 0x11;
      _DAT_146ace7e0 = DAT_1469ea820;
      if (DAT_1469ea820 != 0) {
        LOCK();
        *(int *)(DAT_1469ea820 + 8) = *(int *)(DAT_1469ea820 + 8) + 1;
        UNLOCK();
      }
      _DAT_146ace7f8 = DAT_1469ea828;
      _DAT_146ace800 = DAT_1469ea830;
      _DAT_146ace7e8 = 0;
      _DAT_146ace7ec = 0xffffffff;
      _DAT_146ace7f0 = 0x11;
      _DAT_146ace808 = DAT_1469ea838;
      if (DAT_1469ea838 != 0) {
        LOCK();
        *(int *)(DAT_1469ea838 + 8) = *(int *)(DAT_1469ea838 + 8) + 1;
        UNLOCK();
      }
      _DAT_146ace820 = DAT_1469ea738;
      _DAT_146ace828 = DAT_1469ea740;
      _DAT_146ace810 = 0;
      _DAT_146ace814 = 0xffffffff;
      _DAT_146ace818 = 0x11;
      _DAT_146ace830 = DAT_1469ea748;
      if (DAT_1469ea748 != 0) {
        LOCK();
        *(int *)(DAT_1469ea748 + 8) = *(int *)(DAT_1469ea748 + 8) + 1;
        UNLOCK();
      }
      _DAT_146ace848 = DAT_1469ea858;
      _DAT_146ace850 = DAT_1469ea860;
      _DAT_146ace838 = 0;
      _DAT_146ace83c = 0xffffffff;
      _DAT_146ace840 = 0x11;
      DAT_146ace858 = DAT_1469ea868;
      if (DAT_1469ea868 != 0) {
        LOCK();
        *(int *)(DAT_1469ea868 + 8) = *(int *)(DAT_1469ea868 + 8) + 1;
        UNLOCK();
      }
      _DAT_146ace870 = DAT_1469eaca8;
      _DAT_146ace878 = DAT_1469eacb0;
      DAT_146ace880 = DAT_1469eacb8;
      _DAT_146ace860 = 0;
      _DAT_146ace864 = 0xffffffff;
      _DAT_146ace868 = 0x11;
      if (DAT_1469eacb8 != 0) {
        LOCK();
        *(int *)(DAT_1469eacb8 + 8) = *(int *)(DAT_1469eacb8 + 8) + 1;
        UNLOCK();
      }
      _DAT_146ace888 = 0;
      _DAT_146ace88c = 0xffffffff;
      _DAT_146ace890 = 9;
      atexit(FUN_143ea48a0);
      _Init_thread_footer(&DAT_146ace898);
    }
  }
  local_10 = &local_res18;
  lVar2 = 0x9b;
  puVar1 = &DAT_146acd060;
  do {
    local_res18 = puVar1;
    local_18 = puVar1;
    FUN_142017380(param_1 + 0x1b8,local_res10,&local_18,0);
    puVar1 = puVar1 + 0x28;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}



// FUNCTION 142042b60 FUN_142042b60 body=2787 status=ok
// SIG undefined FUN_142042b60(void)

void FUN_142042b60(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  DWORD DVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  uint uVar10;
  longlong lVar11;
  int local_res10 [2];
  int local_res18 [4];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  int local_60;
  undefined8 local_58;
  uint local_50;
  DWORD local_4c;
  RefCountImpl *local_48;
  RefCountImpl *pRStack_40;
  int local_38;
  
  cVar3 = IsInRenderingThread();
  if (cVar3 == '\0') {
    return;
  }
  if (DAT_146ab62f7 == '\0') {
    puVar5 = (undefined8 *)FUN_1432d8640(*(undefined8 *)(param_1 + 0x30));
    local_a8 = *puVar5;
    uStack_a0 = puVar5[1];
    local_98 = puVar5[2];
    uStack_90 = puVar5[3];
    local_88 = puVar5[4];
    uStack_80 = puVar5[5];
    local_78 = puVar5[6];
    uStack_70 = *(undefined4 *)(puVar5 + 7);
    uStack_6c = *(undefined4 *)((longlong)puVar5 + 0x3c);
    local_68 = puVar5[8];
    local_60 = *(int *)(puVar5 + 9);
    FConfigCacheIni::GetFloat
              (DAT_1468b6148,L"Scaleform",L"ToleranceParams_Epsilon",&local_a8,&DAT_1468e2360);
    FConfigCacheIni::GetFloat
              (DAT_1468b6148,L"Scaleform",L"ToleranceParams_CurveTolerance",(longlong)&local_a8 + 4,
               &DAT_1468e2360);
    FConfigCacheIni::GetFloat
              (DAT_1468b6148,L"Scaleform",L"ToleranceParams_CollinearityTolerance",&uStack_a0,
               &DAT_1468e2360);
    FConfigCacheIni::GetFloat
              (DAT_1468b6148,L"Scaleform",L"ToleranceParams_IntersectionEpsilon",
               (longlong)&uStack_a0 + 4,&DAT_1468e2360);
    FConfigCacheIni::GetFloat
              (DAT_1468b6148,L"Scaleform",L"ToleranceParams_FillLowerScale",&local_98,&DAT_1468e2360
              );
    FConfigCacheIni::GetFloat
              (DAT_1468b6148,L"Scaleform",L"ToleranceParams_FillUpperScale",(longlong)&local_98 + 4,
               &DAT_1468e2360);
    FConfigCacheIni::GetFloat
              (DAT_1468b6148,L"Scaleform",L"ToleranceParams_FillAliasedLowerScale",&uStack_90,
               &DAT_1468e2360);
    FConfigCacheIni::GetFloat
              (DAT_1468b6148,L"Scaleform",L"ToleranceParams_FillAliasedUpperScale",
               (longlong)&uStack_90 + 4,&DAT_1468e2360);
    FConfigCacheIni::GetFloat
              (DAT_1468b6148,L"Scaleform",L"ToleranceParams_StrokeLowerScale",&local_88,
               &DAT_1468e2360);
    FConfigCacheIni::GetFloat
              (DAT_1468b6148,L"Scaleform",L"ToleranceParams_StrokeUpperScale",
               (longlong)&local_88 + 4,&DAT_1468e2360);
    FConfigCacheIni::GetFloat
              (DAT_1468b6148,L"Scaleform",L"ToleranceParams_HintedStrokeLowerScale",&uStack_80,
               &DAT_1468e2360);
    FConfigCacheIni::GetFloat
              (DAT_1468b6148,L"Scaleform",L"ToleranceParams_HintedStrokeUpperScale",
               (longlong)&uStack_80 + 4,&DAT_1468e2360);
    FConfigCacheIni::GetFloat
              (DAT_1468b6148,L"Scaleform",L"ToleranceParams_Scale9LowerScale",&local_78,
               &DAT_1468e2360);
    FConfigCacheIni::GetFloat
              (DAT_1468b6148,L"Scaleform",L"ToleranceParams_Scale9UpperScale",
               (longlong)&local_78 + 4,&DAT_1468e2360);
    FConfigCacheIni::GetFloat
              (DAT_1468b6148,L"Scaleform",L"ToleranceParams_EdgeAAScale",&uStack_70,&DAT_1468e2360);
    FConfigCacheIni::GetFloat
              (DAT_1468b6148,L"Scaleform",L"ToleranceParams_MorphTolerance",&uStack_6c,
               &DAT_1468e2360);
    FConfigCacheIni::GetFloat
              (DAT_1468b6148,L"Scaleform",L"ToleranceParams_MinDet3D",&local_68,&DAT_1468e2360);
    FConfigCacheIni::GetFloat
              (DAT_1468b6148,L"Scaleform",L"ToleranceParams_MinScale3D",(longlong)&local_68 + 4,
               &DAT_1468e2360);
    lVar11 = 0;
    local_res18[0] = 0;
    cVar3 = FConfigCacheIni::GetInt
                      (DAT_1468b6148,L"Scaleform",L"ToleranceParams_CurveRecursionLimit",local_res18
                       ,&DAT_1468e2360);
    if (cVar3 != '\0') {
      local_60 = local_res18[0];
    }
    Scaleform::Render::HAL::SetToleranceParams(*(undefined8 *)(param_1 + 0x30),&local_a8);
    lVar6 = FUN_1432d86a0(*(undefined8 *)(param_1 + 0x30));
    lVar8 = DAT_146acce10;
    local_68 = CONCAT44(local_68._4_4_,*(undefined4 *)(lVar6 + 0x40));
    cVar3 = FUN_1415ad720(&DAT_1468e2448);
    lVar6 = 4;
    if (((cVar3 != '\0') || (DAT_1468c21ae == '\0')) ||
       (DVar4 = GetCurrentThreadId(), lVar7 = lVar6, DVar4 == DAT_1468c21c0)) {
      lVar7 = 0;
    }
    lVar2 = DAT_146acce28;
    local_a8 = (longlong)*(int *)(lVar8 + lVar7);
    cVar3 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar3 != '\0') || (DAT_1468c21ae == '\0')) ||
       (DVar4 = GetCurrentThreadId(), lVar8 = lVar6, DVar4 == DAT_1468c21c0)) {
      lVar8 = lVar11;
    }
    lVar7 = DAT_146acce40;
    uStack_a0 = (longlong)*(int *)(lVar2 + lVar8);
    cVar3 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar3 != '\0') || (DAT_1468c21ae == '\0')) ||
       (DVar4 = GetCurrentThreadId(), lVar8 = lVar6, DVar4 == DAT_1468c21c0)) {
      lVar8 = lVar11;
    }
    lVar2 = DAT_146acce58;
    local_98 = (longlong)*(int *)(lVar7 + lVar8);
    cVar3 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar3 != '\0') || (DAT_1468c21ae == '\0')) ||
       (DVar4 = GetCurrentThreadId(), lVar8 = lVar6, DVar4 == DAT_1468c21c0)) {
      lVar8 = lVar11;
    }
    lVar7 = DAT_146acce70;
    local_88 = (longlong)*(int *)(lVar2 + lVar8);
    cVar3 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar3 != '\0') || (DAT_1468c21ae == '\0')) ||
       (DVar4 = GetCurrentThreadId(), lVar8 = lVar6, DVar4 == DAT_1468c21c0)) {
      lVar8 = lVar11;
    }
    lVar2 = DAT_146acce88;
    uStack_90 = (longlong)*(int *)(lVar7 + lVar8);
    cVar3 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar3 != '\0') || (DAT_1468c21ae == '\0')) ||
       (DVar4 = GetCurrentThreadId(), lVar8 = lVar6, DVar4 == DAT_1468c21c0)) {
      lVar8 = lVar11;
    }
    lVar7 = DAT_146accea0;
    uStack_80 = (longlong)*(int *)(lVar2 + lVar8);
    cVar3 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar3 != '\0') || (DAT_1468c21ae == '\0')) ||
       (DVar4 = GetCurrentThreadId(), lVar8 = lVar6, DVar4 == DAT_1468c21c0)) {
      lVar8 = lVar11;
    }
    lVar2 = DAT_146acceb8;
    local_78 = CONCAT44(local_78._4_4_,*(undefined4 *)(lVar7 + lVar8));
    cVar3 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar3 != '\0') || (DAT_1468c21ae == '\0')) ||
       (DVar4 = GetCurrentThreadId(), lVar8 = lVar6, DVar4 == DAT_1468c21c0)) {
      lVar8 = lVar11;
    }
    lVar7 = DAT_146acced0;
    local_78 = CONCAT44(*(undefined4 *)(lVar2 + lVar8),(undefined4)local_78);
    cVar3 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar3 != '\0') || (DAT_1468c21ae == '\0')) ||
       (DVar4 = GetCurrentThreadId(), lVar8 = lVar6, DVar4 == DAT_1468c21c0)) {
      lVar8 = lVar11;
    }
    lVar2 = DAT_146accee8;
    uStack_70 = *(undefined4 *)(lVar7 + lVar8);
    cVar3 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar3 != '\0') || (DAT_1468c21ae == '\0')) ||
       (DVar4 = GetCurrentThreadId(), lVar8 = lVar6, DVar4 == DAT_1468c21c0)) {
      lVar8 = lVar11;
    }
    lVar7 = DAT_146accf00;
    uStack_6c = *(undefined4 *)(lVar2 + lVar8);
    cVar3 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar3 != '\0') || (DAT_1468c21ae == '\0')) ||
       (DVar4 = GetCurrentThreadId(), lVar8 = lVar6, DVar4 == DAT_1468c21c0)) {
      lVar8 = lVar11;
    }
    local_68 = CONCAT44(local_68._4_4_,*(undefined4 *)(lVar7 + lVar8));
    FUN_1432d86d0(*(undefined8 *)(param_1 + 0x30),&local_a8);
    puVar5 = (undefined8 *)FUN_1432d8700(*(undefined8 *)(param_1 + 0x30));
    local_res18[0] = 0;
    local_a8 = *puVar5;
    uStack_a0 = puVar5[1];
    local_98 = puVar5[2];
    uStack_90 = puVar5[3];
    local_88 = puVar5[4];
    uStack_80 = puVar5[5];
    local_78 = puVar5[6];
    cVar3 = FConfigCacheIni::GetInt
                      (DAT_1468b6148,L"Scaleform",L"GlyphCache_TextureWidth",local_res18,
                       &DAT_1468e2360);
    iVar1 = (int)local_a8;
    if (cVar3 != '\0') {
      iVar1 = local_res18[0];
    }
    uVar10 = 0;
    local_res18[0] = 0;
    local_a8._0_4_ = iVar1;
    cVar3 = FConfigCacheIni::GetInt
                      (DAT_1468b6148,L"Scaleform",L"GlyphCache_TextureHeight",local_res18,
                       &DAT_1468e2360);
    if (cVar3 != '\0') {
      local_a8._4_4_ = local_res18[0];
    }
    local_res18[0] = 0;
    cVar3 = FConfigCacheIni::GetInt
                      (DAT_1468b6148,L"Scaleform",L"GlyphCache_NumTextures",local_res18,
                       &DAT_1468e2360);
    iVar1 = (int)uStack_a0;
    if (cVar3 != '\0') {
      iVar1 = local_res18[0];
    }
    local_res18[0] = 0;
    uStack_a0._0_4_ = iVar1;
    cVar3 = FConfigCacheIni::GetInt
                      (DAT_1468b6148,L"Scaleform",L"GlyphCache_MaxSlotHeight",local_res18,
                       &DAT_1468e2360);
    if (cVar3 != '\0') {
      uStack_a0._4_4_ = local_res18[0];
    }
    local_res18[0] = 0;
    cVar3 = FConfigCacheIni::GetInt
                      (DAT_1468b6148,L"Scaleform",L"GlyphCache_SlotPadding",local_res18,
                       &DAT_1468e2360);
    iVar1 = (int)local_98;
    if (cVar3 != '\0') {
      iVar1 = local_res18[0];
    }
    local_res18[0] = 0;
    local_98._0_4_ = iVar1;
    cVar3 = FConfigCacheIni::GetInt
                      (DAT_1468b6148,L"Scaleform",L"GlyphCache_TexUpdWidth",local_res18,
                       &DAT_1468e2360);
    if (cVar3 != '\0') {
      local_98._4_4_ = local_res18[0];
    }
    local_res18[0] = 0;
    cVar3 = FConfigCacheIni::GetInt
                      (DAT_1468b6148,L"Scaleform",L"GlyphCache_TexUpdHeight",local_res18,
                       &DAT_1468e2360);
    iVar1 = (int)uStack_90;
    if (cVar3 != '\0') {
      iVar1 = local_res18[0];
    }
    uStack_90._0_4_ = iVar1;
    FConfigCacheIni::GetFloat
              (DAT_1468b6148,L"Scaleform",L"GlyphCache_MaxRasterScale",(longlong)&uStack_90 + 4,
               &DAT_1468e2360);
    local_res18[0] = 0;
    cVar3 = FConfigCacheIni::GetInt
                      (DAT_1468b6148,L"Scaleform",L"GlyphCache_MaxVectorCacheSize",local_res18,
                       &DAT_1468e2360);
    if (cVar3 != '\0') {
      uStack_90._0_4_ = local_res18[0];
    }
    FConfigCacheIni::GetFloat
              (DAT_1468b6148,L"Scaleform",L"GlyphCache_FauxItalicAngle",(longlong)&local_88 + 4,
               &DAT_1468e2360);
    FConfigCacheIni::GetFloat
              (DAT_1468b6148,L"Scaleform",L"GlyphCache_FauxBoldRatio",&uStack_80,&DAT_1468e2360);
    FConfigCacheIni::GetFloat
              (DAT_1468b6148,L"Scaleform",L"GlyphCache_OutlineRatio",(longlong)&uStack_80 + 4,
               &DAT_1468e2360);
    FConfigCacheIni::GetFloat
              (DAT_1468b6148,L"Scaleform",L"GlyphCache_ShadowQuality",&local_78,&DAT_1468e2360);
    local_res18[0] = 0;
    cVar3 = FConfigCacheIni::GetInt
                      (DAT_1468b6148,L"Scaleform",L"GlyphCache_UseAutoFit",local_res18,
                       &DAT_1468e2360);
    if (cVar3 != '\0') {
      local_78._0_5_ = CONCAT14(local_res18[0] != 0,(undefined4)local_78);
    }
    FUN_1432d8750(*(undefined8 *)(param_1 + 0x30),&local_a8);
    if ((DAT_146ab62cc - 8U < 3) || (DAT_146ab62cc == 0x18)) {
      uVar10 = 0x1000000;
    }
    local_4c = GetCurrentThreadId();
    local_58 = 0;
    local_48 = (RefCountImpl *)0x0;
    pRStack_40 = (RefCountImpl *)0x0;
    local_38 = 0x100;
    local_res10[0] = 0x32;
    local_50 = uVar10;
    FConfigCacheIni::GetInt
              (DAT_1468b6148,L"Scaleform",L"FilterCacheMaxSizeMB",local_res10,&DAT_1468e2360);
    FConfigCacheIni::GetInt
              (DAT_1468b6148,L"Scaleform",L"Init_FilterCacheMaxSizeMB",local_res10,&DAT_1468e2360);
    local_res18[0] = 0;
    cVar3 = FConfigCacheIni::GetInt
                      (DAT_1468b6148,L"Scaleform",L"Init_RenderQueueSize",local_res18,&DAT_1468e2360
                      );
    if (cVar3 != '\0') {
      local_38 = local_res18[0];
    }
    local_res18[0] = 0;
    cVar3 = FConfigCacheIni::GetInt
                      (DAT_1468b6148,L"Scaleform",L"Init_DisableGPUEvents",local_res18,
                       &DAT_1468e2360);
    if (cVar3 != '\0') {
      local_50 = local_50 | 0x40000000;
    }
    local_res18[0] = 0;
    cVar3 = FConfigCacheIni::GetInt
                      (DAT_1468b6148,L"Scaleform",L"Init_DisableFilterScaling",local_res18,
                       &DAT_1468e2360);
    if (cVar3 != '\0') {
      local_50 = local_50 | 0x10000000;
    }
    local_res18[0] = 0;
    cVar3 = FConfigCacheIni::GetInt
                      (DAT_1468b6148,L"Scaleform",L"Init_DisableAdvancedBlends",local_res18,
                       &DAT_1468e2360);
    lVar8 = DAT_146accdf8;
    if (cVar3 != '\0') {
      local_50 = local_50 | 0x400000;
    }
    cVar3 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar3 != '\0') || (DAT_1468c21ae == '\0')) ||
       (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)) {
      lVar6 = lVar11;
    }
    if (*(int *)(lVar8 + lVar6) == 0) {
      local_50 = local_50 | 0x800000;
    }
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x38))(*(longlong **)(param_1 + 0x30),&local_58);
    plVar9 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x30) + 0xa8))();
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x40))(plVar9,(longlong)(local_res10[0] << 0x14),0);
    }
    if (pRStack_40 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(pRStack_40);
    }
    if (local_48 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(local_48);
    }
    return;
  }
  return;
}



// FUNCTION 142043650 FUN_142043650 body=520 status=ok
// SIG undefined FUN_142043650(void)

ulonglong FUN_142043650(undefined8 *param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  char cVar7;
  DWORD DVar8;
  RefCountImpl *pRVar9;
  ulonglong uVar10;
  RefCountImpl *this;
  bool bVar11;
  undefined4 uVar12;
  double local_res8;
  
  lVar6 = DAT_146accdc8;
  cVar7 = FUN_1415ad720(&DAT_1468e2448);
  this = (RefCountImpl *)0x0;
  if ((cVar7 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar8 = GetCurrentThreadId();
    pRVar9 = (RefCountImpl *)&DAT_00000004;
    if (DVar8 != DAT_1468c21c0) goto LAB_1420436a7;
  }
  pRVar9 = this;
LAB_1420436a7:
  if (*(int *)(pRVar9 + lVar6) != 0) {
    pRVar9 = (RefCountImpl *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x40);
    if (pRVar9 != (RefCountImpl *)0x0) {
      *(undefined8 *)(pRVar9 + 8) = 0;
      *(undefined4 *)(pRVar9 + 0x10) = 0x18;
      *(undefined ***)pRVar9 = &PTR_FUN_144f70a50;
      *(undefined ***)pRVar9 = &PTR_FUN_144f70d38;
      *(undefined4 *)(pRVar9 + 8) = 1;
      InitializeSRWLock((PSRWLOCK)(pRVar9 + 0x18));
      *(undefined4 *)(pRVar9 + 0x20) = 0;
      *(undefined4 *)(pRVar9 + 0x24) = 0;
      *(undefined8 *)(pRVar9 + 0x28) = 0;
      *(undefined8 *)(pRVar9 + 0x30) = 0;
      *(undefined4 *)(pRVar9 + 0x38) = 1;
      this = pRVar9;
    }
    (**(code **)(*(longlong *)*param_1 + 0x10))((longlong *)*param_1,0x18,this);
    if (this != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(this);
    }
  }
  local_res8 = 0.0;
  FConfigCacheIni::GetDouble
            (DAT_1468b6148,L"Scaleform",L"TimeBudgetInMilliseconds",&local_res8,&DAT_1468e2360);
  uVar12 = SUB84(local_res8,0);
  if (local_res8 <= 0.0) {
    uVar12 = 0;
  }
  FUN_14207ba70(&PTR_PTR_1464f05c0,uVar12);
  if (DAT_146acd048 == '\0') {
    LOCK();
    DAT_146accf28 = (uint)(*DAT_146accf68 != 0);
    UNLOCK();
    DAT_146acd048 = '\x01';
  }
  LOCK();
  bVar11 = DAT_146accf28 == 0;
  if (bVar11) {
    DAT_146accf28 = 0;
  }
  UNLOCK();
  if ((!bVar11) && (cVar7 = FUN_142059d40(), cVar7 != '\0')) {
    FUN_14207ba70(DAT_146accf38,uVar12);
  }
  if (DAT_146acd048 == '\0') {
    LOCK();
    DAT_146accf28 = (uint)(*DAT_146accf68 != 0);
    UNLOCK();
    DAT_146acd048 = '\x01';
  }
  uVar10 = 0;
  LOCK();
  bVar11 = DAT_146accf28 == 0;
  if (bVar11) {
    DAT_146accf28 = 0;
  }
  else {
    uVar10 = (ulonglong)DAT_146accf28;
  }
  UNLOCK();
  if ((!bVar11) && (uVar10 = FUN_142059d40(), (char)uVar10 != '\0')) {
    uVar10 = FUN_142059ce0();
  }
  plVar5 = (longlong *)param_1[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    puVar1 = (uint *)(plVar5 + 1);
    uVar3 = *puVar1;
    uVar10 = (ulonglong)uVar3;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if (uVar3 == 1) {
      uVar10 = (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        uVar10 = (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return uVar10;
}



// FUNCTION 142043860 FUN_142043860 body=1208 status=ok
// SIG undefined FUN_142043860(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_142043860(undefined8 param_1,int param_2,longlong *param_3,undefined8 *param_4,
                       undefined4 param_5,undefined8 param_6,char param_7)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  byte bVar14;
  int iVar15;
  ulonglong uVar16;
  bool bVar17;
  undefined1 auStack_2a8 [32];
  undefined2 local_288;
  undefined1 local_278 [8];
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  longlong local_258;
  undefined8 local_250;
  undefined8 local_248;
  longlong local_240;
  undefined4 local_238;
  longlong local_230;
  longlong local_228;
  int local_220;
  undefined1 *local_218 [6];
  undefined8 local_1e8;
  undefined4 local_1d8;
  undefined1 local_1c8 [80];
  undefined1 local_178 [80];
  undefined1 local_128 [192];
  longlong local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_2a8;
  lVar8 = *param_3;
  uVar9 = 0;
  puVar7 = (undefined8 *)0x0;
  LOCK();
  uVar6 = *(uint *)(lVar8 + 0x9c);
  if (uVar6 == 0) {
    *(uint *)(lVar8 + 0x9c) = 0;
  }
  else {
    puVar7 = (undefined8 *)(ulonglong)uVar6;
  }
  UNLOCK();
  if (uVar6 != 0) {
    puVar7 = (undefined8 *)0x0;
    LOCK();
    uVar6 = *(uint *)(lVar8 + 0xa4);
    if (uVar6 == 0) {
      *(uint *)(lVar8 + 0xa4) = 0;
    }
    else {
      puVar7 = (undefined8 *)(ulonglong)uVar6;
    }
    UNLOCK();
    if (uVar6 != 0) {
      puVar7 = (undefined8 *)0x0;
      LOCK();
      uVar6 = *(uint *)(lVar8 + 0x98);
      if (uVar6 == 0) {
        *(uint *)(lVar8 + 0x98) = 0;
      }
      else {
        puVar7 = (undefined8 *)(ulonglong)uVar6;
      }
      UNLOCK();
      if (((uVar6 != 0) && (*(longlong *)(lVar8 + 0x80) != 0)) && (*(longlong *)(lVar8 + 0x78) != 0)
         ) {
        puVar7 = (undefined8 *)0x0;
        LOCK();
        bVar14 = *(byte *)(lVar8 + 0x30);
        if (bVar14 == 0) {
          *(byte *)(lVar8 + 0x30) = 0;
        }
        else {
          puVar7 = (undefined8 *)(ulonglong)bVar14;
        }
        UNLOCK();
        if ('\x04' < (char)puVar7) {
          lVar8 = *param_3;
          puVar7 = (undefined8 *)FWeakObjectPtr::IsValid(lVar8 + 0x70,0,1);
          if ((char)puVar7 != '\0') {
            lVar8 = FWeakObjectPtr::Get(lVar8 + 0x70);
            puVar7 = (undefined8 *)0x0;
            if (lVar8 != 0) {
              puVar7 = (undefined8 *)
                       FUN_142874a50(DAT_146b17150,*(undefined8 *)(DAT_146b17150 + 0x7b0));
              piVar2 = (int *)(puVar7 + 1);
              iVar15 = 0;
              if (0 < *piVar2) {
                puVar12 = (undefined8 *)*puVar7;
                uVar13 = uVar9;
                uVar16 = uVar9;
                do {
                  puVar7 = (undefined8 *)*puVar12;
                  iVar15 = (int)uVar16;
                  if (*(int *)(puVar7 + 0x21) == param_2) break;
                  uVar16 = (ulonglong)((int)uVar16 + 1);
                  uVar13 = uVar13 + 1;
                  puVar12 = puVar12 + 1;
                  iVar15 = 0;
                } while ((longlong)uVar13 < (longlong)*piVar2);
              }
              if (iVar15 == *(int *)(lVar8 + 0x150)) {
                lVar8 = *param_3;
                LOCK();
                bVar17 = *(int *)(lVar8 + 0x9c) == 0;
                if (bVar17) {
                  *(int *)(lVar8 + 0x9c) = 0;
                }
                UNLOCK();
                if (!bVar17) {
                  LOCK();
                  bVar17 = *(int *)(lVar8 + 0xa4) == 0;
                  if (bVar17) {
                    *(int *)(lVar8 + 0xa4) = 0;
                  }
                  UNLOCK();
                  if (!bVar17) {
                    LOCK();
                    bVar17 = *(int *)(lVar8 + 0x98) == 0;
                    if (bVar17) {
                      *(int *)(lVar8 + 0x98) = 0;
                    }
                    UNLOCK();
                    if (((!bVar17) && (*(longlong *)(lVar8 + 0x80) != 0)) &&
                       (*(longlong *)(lVar8 + 0x78) != 0)) {
                      LOCK();
                      cVar5 = *(char *)(lVar8 + 0x30);
                      if (cVar5 == '\0') {
                        *(char *)(lVar8 + 0x30) = '\0';
                        cVar5 = '\0';
                      }
                      UNLOCK();
                      if ('\x04' < cVar5) {
                        FUN_14172a070(local_278,0);
                        cVar5 = FWeakObjectPtr::IsValid(lVar8 + 0x70,0,1);
                        if (cVar5 != '\0') {
                          uVar9 = FWeakObjectPtr::Get(lVar8 + 0x70);
                        }
                        FUN_14172a400(local_278);
                        if ((uVar9 != 0) && (cVar5 = FUN_142082ac0(uVar9), cVar5 != '\0')) {
                          if (param_7 == '\0') {
                            lVar3 = *param_3;
                            lVar8 = lVar3 + 0x70;
                            cVar5 = FWeakObjectPtr::IsValid(lVar8);
                            if (((cVar5 != '\0') &&
                                (lVar11 = FWeakObjectPtr::Get(lVar8),
                                (*(uint *)(lVar11 + 0x40) & 0x100) != 0)) &&
                               (lVar8 = FWeakObjectPtr::Get(lVar8),
                               (*(uint *)(lVar8 + 0x40) & 0x100000) != 0)) {
                              piVar2 = (int *)(lVar3 + 0x130);
                              LOCK();
                              bVar17 = *piVar2 == 0;
                              if (bVar17) {
                                *piVar2 = 0;
                              }
                              UNLOCK();
                              if (!bVar17) {
                                bVar14 = 1;
                                goto LAB_142043c15;
                              }
                            }
                            bVar14 = 0;
                          }
                          else {
                            lVar8 = param_4[2];
                            local_260 = param_4[1];
                            uVar10 = *param_4;
                            if (lVar8 != 0) {
                              LOCK();
                              *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
                              UNLOCK();
                            }
                            lVar3 = param_3[1];
                            local_258 = *param_3;
                            local_238 = param_5;
                            if (lVar3 != 0) {
                              LOCK();
                              *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
                              UNLOCK();
                            }
                            local_1e8 = 0;
                            local_1d8 = 0;
                            local_250 = uVar10;
                            local_248 = local_260;
                            local_240 = lVar8;
                            local_230 = local_258;
                            local_228 = lVar3;
                            local_220 = param_2;
                            puVar7 = (undefined8 *)FUN_140438ef0(0x40);
                            if (puVar7 != (undefined8 *)0x0) {
                              local_240 = 0;
                              *puVar7 = &PTR_FUN_144f71d28;
                              puVar7[1] = uVar10;
                              puVar7[2] = local_260;
                              puVar7[3] = lVar8;
                              *(undefined4 *)(puVar7 + 4) = param_5;
                              puVar7[5] = local_258;
                              puVar7[6] = lVar3;
                              local_248 = 0;
                              if (lVar3 != 0) {
                                LOCK();
                                *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
                                UNLOCK();
                              }
                              *(int *)(puVar7 + 7) = param_2;
                            }
                            local_270 = 0;
                            local_218[0] = &LAB_14202bfe0;
                            local_268 = 0x16;
                            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_270,0);
                            local_288 = 0x3f;
                            FGenericPlatformString::Convert<char,wchar_t>
                                      (local_270,0x16,"FGFxEngine::InputAxis");
                            FUN_1410b2c00(local_128,&local_270,local_218);
                            FUN_14201b5e0(&local_250);
                            cVar5 = FUN_14207bbe0();
                            lVar8 = *param_3;
                            if (cVar5 == '\0') {
                              uVar10 = FUN_1410ca7e0(local_128,local_178);
                              FUN_14204c370(lVar8,uVar10);
                            }
                            else {
                              uVar10 = FUN_1410ca7e0(local_128,local_1c8);
                              FUN_142032420(lVar8,uVar10);
                            }
                            FUN_140d1b3a0(local_128);
                            cVar5 = *(char *)(local_68 + 0x58);
                            while (cVar5 == '\0') {
                              (**(code **)(**(longlong **)(local_68 + 0x50) + 0x20))
                                        (*(longlong **)(local_68 + 0x50),0x5d638865,0);
                              cVar5 = *(char *)(local_68 + 0x58);
                            }
                            bVar14 = *(byte *)(local_68 + 0x60);
                            FUN_140ce1dc0(local_128);
                          }
LAB_142043c15:
                          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>
                                    (param_3);
                          FKey::~FKey(param_4);
                          return (ulonglong)bVar14;
                        }
                      }
                    }
                  }
                }
                TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_3);
                puVar7 = (undefined8 *)FKey::~FKey(param_4);
                goto LAB_142043cf5;
              }
            }
          }
        }
      }
    }
  }
  plVar4 = (longlong *)param_3[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    uVar6 = (int)lVar8 - 1;
    puVar7 = (undefined8 *)(ulonglong)uVar6;
    if (uVar6 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar15 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      puVar7 = (undefined8 *)(ulonglong)(iVar15 - 1U);
      if (iVar15 - 1U == 0) {
        puVar7 = (undefined8 *)(**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  plVar4 = (longlong *)param_4[2];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    uVar6 = (int)lVar8 - 1;
    puVar7 = (undefined8 *)(ulonglong)uVar6;
    if (uVar6 == 0) {
      puVar7 = (undefined8 *)(**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar15 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar15 == 1) {
        puVar7 = (undefined8 *)(**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
LAB_142043cf5:
  return (ulonglong)puVar7 & 0xffffffffffffff00;
}



// FUNCTION 142043d20 FUN_142043d20 body=1347 status=ok
// SIG undefined FUN_142043d20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_142043d20(longlong param_1,undefined4 param_2,undefined8 *param_3,undefined4 param_4,
             undefined4 param_5,undefined1 param_6)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_958 [32];
  undefined4 local_938;
  undefined4 local_930;
  undefined1 local_928;
  longlong local_918;
  longlong *plStack_910;
  undefined4 local_908;
  undefined8 local_900;
  longlong *local_8f8;
  undefined8 local_8f0;
  longlong *local_8e8;
  undefined8 local_8e0;
  undefined8 local_8d8;
  longlong local_8d0;
  undefined8 local_8c8;
  undefined8 local_8c0;
  longlong local_8b8;
  undefined8 local_8b0;
  undefined8 local_8a8;
  longlong local_8a0;
  longlong local_898;
  longlong *plStack_890;
  undefined8 local_888 [128];
  undefined8 *local_488;
  undefined8 local_480;
  undefined8 local_478 [128];
  undefined8 *local_78;
  undefined8 local_70;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_958;
  local_908 = param_2;
  FUN_14203a450(param_1,&local_918,param_2);
  plVar4 = plStack_910;
  if (local_918 != 0) {
    local_8e0 = *param_3;
    local_8d8 = param_3[1];
    local_8d0 = param_3[2];
    if (local_8d0 != 0) {
      LOCK();
      *(int *)(local_8d0 + 8) = *(int *)(local_8d0 + 8) + 1;
      UNLOCK();
    }
    local_898 = local_918;
    plStack_890 = plStack_910;
    if (plStack_910 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_910 + 1) = (int)plStack_910[1] + 1;
      UNLOCK();
    }
    local_928 = param_6;
    local_930 = param_5;
    local_938 = param_4;
    cVar6 = FUN_142043860(param_1,param_2,&local_898,&local_8e0);
    plVar2 = plStack_910;
    if (cVar6 != '\0') {
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar4 + 1;
        lVar5 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plStack_910)(plStack_910);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plStack_910 + 8))(plStack_910,1);
          }
        }
      }
      FKey::~FKey(param_3);
      return 1;
    }
  }
  local_488 = (undefined8 *)0x0;
  local_480 = 0;
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xf0));
  FUN_142016c40(local_888,param_1 + 0xe0);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xf0));
  puVar8 = local_888;
  if (local_488 != (undefined8 *)0x0) {
    puVar8 = local_488;
  }
  puVar7 = puVar8 + (longlong)(int)local_480 * 2;
  do {
    if (puVar8 == puVar7) {
      local_78 = (undefined8 *)0x0;
      local_70 = 0;
      AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x108));
      FUN_142016c40(local_478,param_1 + 0xf8);
      ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x108));
      puVar8 = local_478;
      if (local_78 != (undefined8 *)0x0) {
        puVar8 = local_78;
      }
      puVar7 = puVar8 + (longlong)(int)local_70 * 2;
      while( true ) {
        if (puVar8 == puVar7) {
          FUN_14201bde0(local_478);
          FUN_14201bde0(local_888);
          plVar2 = plStack_910;
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            plVar4 = plVar4 + 1;
            lVar5 = *plVar4;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*plStack_910)(plStack_910);
              LOCK();
              piVar1 = (int *)((longlong)plVar2 + 0xc);
              iVar3 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*plStack_910 + 8))(plStack_910,1);
              }
            }
          }
          plVar4 = (longlong *)param_3[2];
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
          return 0;
        }
        plVar4 = (longlong *)puVar8[1];
        local_8f0 = *puVar8;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
        }
        local_8b0 = *param_3;
        local_8a8 = param_3[1];
        local_8a0 = param_3[2];
        if (local_8a0 != 0) {
          LOCK();
          *(int *)(local_8a0 + 8) = *(int *)(local_8a0 + 8) + 1;
          UNLOCK();
        }
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
        }
        local_928 = param_6;
        local_930 = param_5;
        local_938 = param_4;
        local_8e8 = plVar4;
        cVar6 = FUN_142043860(param_1,local_908,&local_8f0,&local_8b0);
        if (cVar6 != '\0') break;
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
        puVar8 = puVar8 + 2;
        plVar4 = plStack_910;
      }
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
      FUN_14201bde0(local_478);
LAB_1420441e2:
      FUN_14201bde0(local_888);
      plVar4 = plStack_910;
      if (plStack_910 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_910 + 1;
        lVar5 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plStack_910)(plStack_910);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plStack_910 + 8))(plStack_910,1);
          }
        }
      }
      plVar4 = (longlong *)param_3[2];
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
      return 1;
    }
    plVar4 = (longlong *)puVar8[1];
    local_900 = *puVar8;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_8c8 = *param_3;
    local_8c0 = param_3[1];
    local_8b8 = param_3[2];
    if (local_8b8 != 0) {
      LOCK();
      *(int *)(local_8b8 + 8) = *(int *)(local_8b8 + 8) + 1;
      UNLOCK();
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_928 = param_6;
    local_930 = param_5;
    local_938 = param_4;
    local_8f8 = plVar4;
    cVar6 = FUN_142043860(param_1,local_908,&local_900,&local_8c8);
    if (cVar6 != '\0') {
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
      goto LAB_1420441e2;
    }
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
    puVar8 = puVar8 + 2;
    plVar4 = plStack_910;
  } while( true );
}



// FUNCTION 142044270 FUN_142044270 body=823 status=ok
// SIG undefined FUN_142044270(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142044270(longlong param_1,undefined4 param_2,ushort param_3)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_898 [32];
  undefined4 local_878;
  undefined1 local_874;
  uint local_870;
  undefined1 local_86c;
  longlong local_868;
  longlong *local_860;
  longlong local_858 [128];
  longlong *local_458;
  undefined8 local_450;
  longlong local_448 [128];
  longlong *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_898;
  local_874 = 0;
  local_878 = 0x1d;
  local_870 = (uint)param_3;
  local_86c = 0;
  FUN_14203a450(param_1,&local_868,param_2);
  if ((local_868 == 0) || (iVar4 = FUN_14203e760(local_868,&local_878), iVar4 == 0)) {
    local_48 = (longlong *)0x0;
    local_40 = 0;
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xf0));
    FUN_142016c40(local_448,param_1 + 0xe0);
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xf0));
    plVar7 = local_448;
    if (local_48 != (longlong *)0x0) {
      plVar7 = local_48;
    }
    plVar8 = plVar7 + (longlong)(int)local_40 * 2;
    for (; plVar7 != plVar8; plVar7 = plVar7 + 2) {
      lVar2 = *plVar7;
      LOCK();
      bVar9 = *(int *)(lVar2 + 0x9c) == 0;
      if (bVar9) {
        *(int *)(lVar2 + 0x9c) = 0;
      }
      UNLOCK();
      if (!bVar9) {
        LOCK();
        bVar9 = *(int *)(lVar2 + 0xa4) == 0;
        if (bVar9) {
          *(int *)(lVar2 + 0xa4) = 0;
        }
        UNLOCK();
        if (!bVar9) {
          LOCK();
          bVar9 = *(int *)(lVar2 + 0x98) == 0;
          if (bVar9) {
            *(int *)(lVar2 + 0x98) = 0;
          }
          UNLOCK();
          if (((!bVar9) && (*(longlong *)(lVar2 + 0x80) != 0)) && (*(longlong *)(lVar2 + 0x78) != 0)
             ) {
            LOCK();
            cVar3 = *(char *)(lVar2 + 0x30);
            if (cVar3 == '\0') {
              *(char *)(lVar2 + 0x30) = '\0';
              cVar3 = '\0';
            }
            UNLOCK();
            if (((('\x04' < cVar3) &&
                 (cVar3 = FWeakObjectPtr::IsValid(lVar2 + 0x70,0,1), cVar3 != '\0')) &&
                ((lVar5 = FWeakObjectPtr::Get(lVar2 + 0x70), lVar5 != 0 &&
                 (((*(byte *)(lVar5 + 0x40) & 0x80) != 0 &&
                  (*(longlong **)(lVar2 + 0x78) != (longlong *)0x0)))))) &&
               (iVar4 = (**(code **)(**(longlong **)(lVar2 + 0x78) + 0x118))(), iVar4 != 0)) {
              uVar6 = 1;
              goto LAB_142044514;
            }
          }
        }
      }
    }
    local_458 = (longlong *)0x0;
    local_450 = 0;
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x108));
    FUN_142016c40(local_858,param_1 + 0xf8);
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x108));
    plVar7 = local_858;
    if (local_458 != (longlong *)0x0) {
      plVar7 = local_458;
    }
    plVar8 = plVar7 + (longlong)(int)local_450 * 2;
    for (; plVar7 != plVar8; plVar7 = plVar7 + 2) {
      lVar2 = *plVar7;
      LOCK();
      bVar9 = *(int *)(lVar2 + 0x9c) == 0;
      if (bVar9) {
        *(int *)(lVar2 + 0x9c) = 0;
      }
      UNLOCK();
      if (!bVar9) {
        LOCK();
        bVar9 = *(int *)(lVar2 + 0xa4) == 0;
        if (bVar9) {
          *(int *)(lVar2 + 0xa4) = 0;
        }
        UNLOCK();
        if (!bVar9) {
          LOCK();
          bVar9 = *(int *)(lVar2 + 0x98) == 0;
          if (bVar9) {
            *(int *)(lVar2 + 0x98) = 0;
          }
          UNLOCK();
          if (((!bVar9) && (*(longlong *)(lVar2 + 0x80) != 0)) && (*(longlong *)(lVar2 + 0x78) != 0)
             ) {
            LOCK();
            cVar3 = *(char *)(lVar2 + 0x30);
            if (cVar3 == '\0') {
              *(char *)(lVar2 + 0x30) = '\0';
              cVar3 = '\0';
            }
            UNLOCK();
            if ((('\x04' < cVar3) &&
                (cVar3 = FWeakObjectPtr::IsValid(lVar2 + 0x70,0,1), cVar3 != '\0')) &&
               (((lVar5 = FWeakObjectPtr::Get(lVar2 + 0x70), lVar5 != 0 &&
                 (((*(byte *)(lVar5 + 0x40) & 0x80) != 0 &&
                  (*(longlong **)(lVar2 + 0x78) != (longlong *)0x0)))) &&
                (iVar4 = (**(code **)(**(longlong **)(lVar2 + 0x78) + 0x118))(), iVar4 != 0)))) {
              uVar6 = 1;
              goto LAB_14204450a;
            }
          }
        }
      }
    }
    uVar6 = 0;
LAB_14204450a:
    FUN_14201bde0(local_858);
LAB_142044514:
    FUN_14201bde0(local_448);
  }
  else {
    uVar6 = 1;
  }
  plVar7 = local_860;
  if (local_860 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_860 + 1;
    lVar2 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*local_860)(local_860);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_860 + 8))(local_860,1);
      }
    }
  }
  return uVar6;
}



// FUNCTION 1420445b0 FUN_1420445b0 body=1797 status=ok
// SIG undefined FUN_1420445b0(void)

undefined8
FUN_1420445b0(longlong param_1,ulonglong param_2,longlong *param_3,longlong *param_4,uint param_5)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  int iVar15;
  bool bVar16;
  undefined1 local_res20;
  undefined1 local_188 [8];
  int local_180;
  int local_17c;
  int local_178;
  int local_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  int iStack_168;
  uint uStack_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined1 local_154;
  float local_150;
  float local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined1 local_138;
  float local_134;
  float local_130;
  float local_12c;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  longlong *local_110;
  uint local_108;
  undefined1 local_100;
  undefined7 uStack_ff;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  undefined1 *local_88 [2];
  undefined1 local_78 [32];
  undefined8 local_58;
  undefined4 local_48;
  
  local_f0 = *param_4;
  local_e8 = param_4[1];
  local_e0 = param_4[2];
  if (local_e0 != 0) {
    LOCK();
    *(int *)(local_e0 + 8) = *(int *)(local_e0 + 8) + 1;
    UNLOCK();
  }
  cVar3 = FUN_142057c20(param_1,param_2,&local_f0,param_5);
  if (cVar3 != '\0') {
    plVar6 = (longlong *)param_3[1];
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar6 + 1;
      lVar11 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
    plVar6 = (longlong *)param_4[2];
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar6 + 1;
      lVar11 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
    return 1;
  }
  lVar11 = *param_3;
  LOCK();
  bVar16 = *(int *)(lVar11 + 0x9c) == 0;
  if (bVar16) {
    *(int *)(lVar11 + 0x9c) = 0;
  }
  UNLOCK();
  if (!bVar16) {
    LOCK();
    bVar16 = *(int *)(lVar11 + 0xa4) == 0;
    if (bVar16) {
      *(int *)(lVar11 + 0xa4) = 0;
    }
    UNLOCK();
    if (!bVar16) {
      LOCK();
      bVar16 = *(int *)(lVar11 + 0x98) == 0;
      if (bVar16) {
        *(int *)(lVar11 + 0x98) = 0;
      }
      UNLOCK();
      if (((!bVar16) && (*(longlong *)(lVar11 + 0x80) != 0)) && (*(longlong *)(lVar11 + 0x78) != 0))
      {
        LOCK();
        cVar3 = *(char *)(lVar11 + 0x30);
        if (cVar3 == '\0') {
          *(char *)(lVar11 + 0x30) = '\0';
          cVar3 = '\0';
        }
        UNLOCK();
        if ('\x04' < cVar3) {
          lVar11 = *param_3;
          cVar3 = FWeakObjectPtr::IsValid(lVar11 + 0x70,0,1);
          if ((cVar3 != '\0') &&
             (plVar6 = (longlong *)FWeakObjectPtr::Get(lVar11 + 0x70), plVar6 != (longlong *)0x0)) {
            iVar5 = *(int *)((longlong)plVar6 + 0xc);
            if (iVar5 < (int)DAT_1469e91c4) {
              uVar10 = iVar5 >> 0x1f & 0xffff;
              uVar4 = iVar5 + uVar10;
              lVar11 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                       (longlong)(int)((uVar4 & 0xffff) - uVar10) * 0x18;
            }
            else {
              lVar11 = 0;
            }
            lVar9 = 0;
            if ((*(uint *)(lVar11 + 8) >> 0x1d & 1) == 0) {
              if (iVar5 < (int)DAT_1469e91c4) {
                uVar10 = iVar5 >> 0x1f & 0xffff;
                uVar4 = iVar5 + uVar10;
                lVar9 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                        (longlong)(int)((uVar4 & 0xffff) - uVar10) * 0x18;
              }
              if (((*(uint *)(lVar9 + 8) >> 0x1c & 1) == 0) &&
                 (((*(byte *)(plVar6 + 8) & 0x40) == 0 ||
                  (iVar5 = FUN_14203ab70(param_1,param_2 & 0xffffffff), iVar5 == (int)plVar6[0x2a]))
                 )) {
                local_d8 = *param_4;
                local_d0 = param_4[1];
                local_c8 = param_4[2];
                if (local_c8 != 0) {
                  LOCK();
                  *(int *)(local_c8 + 8) = *(int *)(local_c8 + 8) + 1;
                  UNLOCK();
                }
                cVar3 = (**(code **)(*plVar6 + 0x458))
                                  (plVar6,param_2 & 0xffffffff,&local_d8,param_5);
                if (cVar3 == '\0') {
                  if (*(int *)(param_1 + 0x1c0) != *(int *)(param_1 + 0x1ec)) {
                    lVar11 = *param_4;
                    lVar9 = *(longlong *)(param_1 + 0x1f8);
                    if (*(longlong *)(param_1 + 0x1f8) == 0) {
                      lVar9 = param_1 + 0x1f0;
                    }
                    iVar5 = *(int *)(lVar9 + ((longlong)
                                              ((int)((ulonglong)lVar11 >> 0x20) + (int)lVar11) &
                                             (longlong)*(int *)(param_1 + 0x200) - 1U) * 4);
                    if (iVar5 != -1) {
                      lVar9 = *(longlong *)(param_1 + 0x1b8);
                      do {
                        lVar12 = (longlong)iVar5;
                        if (*(longlong *)(lVar9 + lVar12 * 0x28) == lVar11) {
                          if (((iVar5 == -1) || (lVar9 = lVar9 + lVar12 * 0x28, lVar9 == 0)) ||
                             (lVar9 = *(longlong *)(lVar9 + 0x18), lVar9 == 0)) break;
                          uVar4 = *(uint *)(lVar9 + 0x20);
                          if ((uVar4 & 10) == 0) {
                            if ((((uVar4 & 0x14) == 0) ||
                                (((*(uint *)(plVar6 + 8) >> 8 & 1) == 0 && ((uVar4 & 4) != 0)))) ||
                               (((*(uint *)(plVar6 + 8) >> 10 & 1) == 0 && ((uVar4 & 0x10) != 0))))
                            break;
                            if (param_5 == 0) {
LAB_142044b37:
                              uVar14 = 2;
                            }
                            else {
                              if (param_5 != 1) {
                                if (param_5 == 3) goto LAB_142044b37;
                                break;
                              }
                              uVar14 = 3;
                            }
                            local_a0 = param_4[1];
                            local_98 = param_4[2];
                            if (local_98 != 0) {
                              LOCK();
                              *(int *)(local_98 + 8) = *(int *)(local_98 + 8) + 1;
                              UNLOCK();
                            }
                            local_a8 = lVar11;
                            cVar3 = FUN_142036ce0(param_1,plVar6,&local_a8);
                            if (cVar3 == '\0') {
                              if ((*(byte *)(lVar9 + 0x20) & 1) == 0) {
                                if (*(uint *)(lVar9 + 0x1c) < 3) {
                                  FUN_142071690(&local_180);
                                  local_144 = *(undefined4 *)(lVar9 + 0x1c);
                                  local_150 = (float)local_180;
                                  local_154 = 0;
                                  local_140 = 0;
                                  local_14c = (float)local_17c;
                                  local_148 = 0;
                                  local_158 = uVar14;
                                  FUN_14203e820(*param_3,&local_158);
                                }
                                else if ((param_5 & 0xfffffffd) == 0) {
                                  FUN_142071690(&local_178);
                                  local_134 = (float)local_178;
                                  local_138 = 0;
                                  local_13c = 4;
                                  local_128 = 0;
                                  local_130 = (float)local_174;
                                  local_12c = (float)(*(int *)(lVar9 + 0x1c) * 6 + -0x15);
                                  FUN_14203e820(*param_3,&local_13c);
                                }
                              }
                              lVar11 = *param_3;
                              cVar3 = FWeakObjectPtr::IsValid(lVar11 + 0x70);
                              if (((cVar3 != '\0') &&
                                  (lVar9 = FWeakObjectPtr::Get(lVar11 + 0x70),
                                  (*(uint *)(lVar9 + 0x40) & 0x100) != 0)) &&
                                 (lVar9 = FWeakObjectPtr::Get(lVar11 + 0x70),
                                 (*(uint *)(lVar9 + 0x40) & 0x100000) != 0)) {
                                LOCK();
                                bVar16 = *(int *)(lVar11 + 0x130) == 0;
                                if (bVar16) {
                                  *(int *)(lVar11 + 0x130) = 0;
                                }
                                UNLOCK();
                                if (!bVar16) {
                                  uVar13 = 1;
                                  goto LAB_142044c9d;
                                }
                              }
                              uVar13 = 0;
LAB_142044c9d:
                              TSharedPtr<FTcpSerializedMessage,1>::
                              ~TSharedPtr<FTcpSerializedMessage,1>(param_3);
                              FKey::~FKey(param_4);
                              return uVar13;
                            }
                          }
                          else {
                            if ((((*(uint *)(plVar6 + 8) >> 9 & 1) == 0) && ((uVar4 & 8) != 0)) ||
                               ((-1 < (char)*(uint *)(plVar6 + 8) && ((uVar4 & 2) != 0)))) break;
                            local_res20 = 0;
                            if (param_5 == 0) {
LAB_14204490c:
                              uVar14 = 5;
                            }
                            else {
                              if (param_5 != 1) {
                                if (param_5 == 2) {
                                  local_res20 = 1;
                                  goto LAB_14204490c;
                                }
                                break;
                              }
                              uVar14 = 6;
                            }
                            local_b8 = param_4[1];
                            local_b0 = param_4[2];
                            if (local_b0 != 0) {
                              LOCK();
                              *(int *)(local_b0 + 8) = *(int *)(local_b0 + 8) + 1;
                              UNLOCK();
                            }
                            local_c0 = lVar11;
                            cVar3 = FUN_142036ce0(param_1,plVar6,&local_c0);
                            if (cVar3 == '\0') {
                              iVar5 = *(int *)(lVar9 + 0x18);
                              uVar4 = *(uint *)(lVar9 + 0x20);
                              iVar15 = iVar5;
                              if (iVar5 - 0xa0U < 2) {
                                iVar15 = 0x10;
                                uVar4 = 0;
                              }
                              if (iVar5 - 0xa2U < 2) {
                                iVar15 = 0x11;
                                uVar4 = 0;
                              }
                              if (iVar5 - 0xa4U < 2) {
                                iVar15 = 0x12;
                                uVar4 = 0;
                              }
                              if ((uVar4 & 1) == 0) {
                                local_100 = local_res20;
                                local_120 = 0xffffffffffffffff;
                                uStack_118 = 0xffffffffffffffff;
                                local_110 = (longlong *)0x0;
                                local_108 = 2;
                                if (*(longlong *)(*param_3 + 0x78) != 0) {
                                  FUN_1432e1e00(*(longlong *)(*param_3 + 0x78),"_global.bIsKeyHold",
                                                &local_120,1);
                                }
                                if ((local_108 >> 6 & 1) != 0) {
                                  (**(code **)(*local_110 + 0x10))
                                            (local_110,&local_120,CONCAT71(uStack_ff,local_100));
                                }
                                local_170 = uVar14;
                                puVar7 = (undefined1 *)FUN_14203a810(param_1,local_188,plVar6);
                                plVar6 = (longlong *)param_3[1];
                                lVar11 = *param_3;
                                uStack_16c = CONCAT31(uStack_16c._1_3_,*puVar7);
                                uStack_15c = CONCAT31(uStack_15c._1_3_,(char)param_2);
                                uStack_164 = uStack_164 & 0xffffff00;
                                local_160 = 0;
                                if (plVar6 != (longlong *)0x0) {
                                  LOCK();
                                  *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
                                  UNLOCK();
                                }
                                local_58 = 0;
                                local_48 = 0;
                                iStack_168 = iVar15;
                                puVar8 = (undefined8 *)FUN_140438ef0(0x30,local_78);
                                if (puVar8 != (undefined8 *)0x0) {
                                  *puVar8 = &PTR_FUN_144f71d10;
                                  puVar8[1] = lVar11;
                                  puVar8[2] = plVar6;
                                  if (plVar6 != (longlong *)0x0) {
                                    LOCK();
                                    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
                                    UNLOCK();
                                  }
                                  puVar8[3] = CONCAT44(uStack_16c,local_170);
                                  puVar8[4] = CONCAT44(uStack_164,iStack_168);
                                  puVar8[5] = CONCAT44(uStack_15c,local_160);
                                }
                                local_88[0] = &LAB_14202c970;
                                FUN_14204c370(*param_3,local_88);
                                if (plVar6 != (longlong *)0x0) {
                                  LOCK();
                                  plVar1 = plVar6 + 1;
                                  lVar11 = *plVar1;
                                  *(int *)plVar1 = (int)*plVar1 + -1;
                                  UNLOCK();
                                  if ((int)lVar11 == 1) {
                                    (**(code **)*plVar6)(plVar6);
                                    LOCK();
                                    piVar2 = (int *)((longlong)plVar6 + 0xc);
                                    iVar5 = *piVar2;
                                    *piVar2 = *piVar2 + -1;
                                    UNLOCK();
                                    if (iVar5 == 1) {
                                      (**(code **)(*plVar6 + 8))(plVar6,1);
                                    }
                                  }
                                }
                              }
                              goto LAB_142044ad5;
                            }
                          }
                          break;
                        }
                        iVar5 = *(int *)(lVar9 + 0x20 + lVar12 * 0x28);
                      } while (iVar5 != -1);
                    }
                  }
                  goto LAB_142044877;
                }
              }
            }
LAB_142044ad5:
            TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_3);
            FKey::~FKey(param_4);
            return 1;
          }
        }
      }
    }
  }
LAB_142044877:
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_3);
  FKey::~FKey(param_4);
  return 0;
}



// FUNCTION 142044cc0 FUN_142044cc0 body=1268 status=ok
// SIG undefined FUN_142044cc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142044cc0(longlong param_1,undefined4 param_2,undefined8 *param_3,undefined4 param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  undefined4 uVar5;
  longlong lVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_928 [32];
  undefined4 local_908;
  longlong local_8f8;
  longlong *plStack_8f0;
  undefined4 local_8e8;
  undefined4 local_8e4;
  undefined8 local_8e0;
  longlong *local_8d8;
  undefined8 local_8d0;
  longlong *local_8c8;
  undefined8 local_8c0;
  undefined8 local_8b8;
  longlong local_8b0;
  undefined8 local_8a8;
  undefined8 local_8a0;
  longlong local_898;
  undefined8 local_890;
  undefined8 local_888;
  longlong local_880;
  longlong local_878;
  longlong *plStack_870;
  undefined8 local_868 [128];
  undefined8 *local_468;
  undefined8 local_460;
  undefined8 local_458 [128];
  undefined8 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_928;
  local_8e8 = param_4;
  local_8e4 = param_2;
  FUN_14203a450(param_1,&local_8f8,param_2);
  plVar4 = plStack_8f0;
  if (local_8f8 != 0) {
    local_8c0 = *param_3;
    local_8b8 = param_3[1];
    local_8b0 = param_3[2];
    if (local_8b0 != 0) {
      LOCK();
      *(int *)(local_8b0 + 8) = *(int *)(local_8b0 + 8) + 1;
      UNLOCK();
    }
    local_878 = local_8f8;
    plStack_870 = plStack_8f0;
    if (plStack_8f0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_8f0 + 1) = (int)plStack_8f0[1] + 1;
      UNLOCK();
    }
    local_908 = param_4;
    cVar7 = FUN_1420445b0(param_1,param_2,&local_878,&local_8c0);
    plVar2 = plStack_8f0;
    if (cVar7 != '\0') {
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar4 + 1;
        lVar6 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plStack_8f0)(plStack_8f0);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plStack_8f0 + 8))(plStack_8f0,1);
          }
        }
      }
      FKey::~FKey(param_3);
      return 1;
    }
  }
  local_468 = (undefined8 *)0x0;
  local_460 = 0;
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xf0));
  FUN_142016c40(local_868,param_1 + 0xe0);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xf0));
  puVar9 = local_868;
  if (local_468 != (undefined8 *)0x0) {
    puVar9 = local_468;
  }
  puVar8 = puVar9 + (longlong)(int)local_460 * 2;
  uVar5 = local_908;
  local_908 = local_8e8;
  do {
    local_8e8 = local_908;
    if (puVar9 == puVar8) {
      local_58 = (undefined8 *)0x0;
      local_50 = 0;
      local_908 = uVar5;
      AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x108));
      FUN_142016c40(local_458,param_1 + 0xf8);
      ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x108));
      puVar9 = local_458;
      if (local_58 != (undefined8 *)0x0) {
        puVar9 = local_58;
      }
      puVar8 = puVar9 + (longlong)(int)local_50 * 2;
      uVar5 = local_908;
      local_908 = local_8e8;
      while( true ) {
        local_8e8 = local_908;
        if (puVar9 == puVar8) {
          local_908 = uVar5;
          FUN_14201bde0(local_458);
          FUN_14201bde0(local_868);
          plVar2 = plStack_8f0;
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            plVar4 = plVar4 + 1;
            lVar6 = *plVar4;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*plStack_8f0)(plStack_8f0);
              LOCK();
              piVar1 = (int *)((longlong)plVar2 + 0xc);
              iVar3 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*plStack_8f0 + 8))(plStack_8f0,1);
              }
            }
          }
          plVar4 = (longlong *)param_3[2];
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar4 + 1;
            lVar6 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
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
          return 0;
        }
        plVar4 = (longlong *)puVar9[1];
        local_8d0 = *puVar9;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
        }
        local_890 = *param_3;
        local_888 = param_3[1];
        local_880 = param_3[2];
        if (local_880 != 0) {
          LOCK();
          *(int *)(local_880 + 8) = *(int *)(local_880 + 8) + 1;
          UNLOCK();
        }
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
        }
        local_8c8 = plVar4;
        cVar7 = FUN_1420445b0(param_1,local_8e4,&local_8d0,&local_890);
        if (cVar7 != '\0') break;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar4 + 1;
          lVar6 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
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
        puVar9 = puVar9 + 2;
        uVar5 = local_908;
        local_908 = local_8e8;
        plVar4 = plStack_8f0;
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        lVar6 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
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
      FUN_14201bde0(local_458);
LAB_142045133:
      FUN_14201bde0(local_868);
      plVar4 = plStack_8f0;
      if (plStack_8f0 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_8f0 + 1;
        lVar6 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plStack_8f0)(plStack_8f0);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plStack_8f0 + 8))(plStack_8f0,1);
          }
        }
      }
      plVar4 = (longlong *)param_3[2];
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        lVar6 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
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
      return 1;
    }
    plVar4 = (longlong *)puVar9[1];
    local_8e0 = *puVar9;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_8a8 = *param_3;
    local_8a0 = param_3[1];
    local_898 = param_3[2];
    if (local_898 != 0) {
      LOCK();
      *(int *)(local_898 + 8) = *(int *)(local_898 + 8) + 1;
      UNLOCK();
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_8d8 = plVar4;
    cVar7 = FUN_1420445b0(param_1,local_8e4,&local_8e0,&local_8a8);
    if (cVar7 != '\0') {
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        lVar6 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
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
      goto LAB_142045133;
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar4 + 1;
      lVar6 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
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
    puVar9 = puVar9 + 2;
    uVar5 = local_908;
    plVar4 = plStack_8f0;
    local_908 = local_8e8;
  } while( true );
}



// FUNCTION 1420451c0 FUN_1420451c0 body=605 status=ok
// SIG undefined FUN_1420451c0(void)

ulonglong FUN_1420451c0(undefined8 param_1,undefined4 param_2,longlong *param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  byte bVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  longlong local_88;
  code *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  ulonglong uVar11;
  
  plVar3 = (longlong *)param_3[1];
  lVar4 = *param_3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  uVar11 = 0;
  uVar10 = 0;
  uVar8 = 0;
  LOCK();
  uVar7 = *(uint *)(lVar4 + 0x9c);
  if (uVar7 == 0) {
    *(uint *)(lVar4 + 0x9c) = 0;
  }
  else {
    uVar8 = (ulonglong)uVar7;
  }
  UNLOCK();
  if (uVar7 != 0) {
    uVar8 = 0;
    LOCK();
    uVar7 = *(uint *)(lVar4 + 0xa4);
    if (uVar7 == 0) {
      *(uint *)(lVar4 + 0xa4) = 0;
    }
    else {
      uVar8 = (ulonglong)uVar7;
    }
    UNLOCK();
    if (uVar7 != 0) {
      uVar8 = 0;
      LOCK();
      uVar7 = *(uint *)(lVar4 + 0x98);
      if (uVar7 == 0) {
        *(uint *)(lVar4 + 0x98) = 0;
      }
      else {
        uVar8 = (ulonglong)uVar7;
      }
      UNLOCK();
      if (((uVar7 != 0) && (uVar11 = uVar10, *(longlong *)(lVar4 + 0x80) != 0)) &&
         (*(longlong *)(lVar4 + 0x78) != 0)) {
        uVar8 = 0;
        LOCK();
        bVar6 = *(byte *)(lVar4 + 0x30);
        if (bVar6 == 0) {
          *(byte *)(lVar4 + 0x30) = 0;
        }
        else {
          uVar8 = (ulonglong)bVar6;
        }
        UNLOCK();
        if ('\x04' < (char)uVar8) {
          uVar8 = FWeakObjectPtr::IsValid(lVar4 + 0x70,0,1);
          if ((char)uVar8 != '\0') {
            uVar8 = FWeakObjectPtr::Get(lVar4 + 0x70);
            uVar11 = uVar8;
          }
        }
      }
    }
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar3 + 1;
    lVar4 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    uVar7 = (int)lVar4 - 1;
    uVar8 = (ulonglong)uVar7;
    if (uVar7 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      uVar8 = (ulonglong)(iVar2 - 1U);
      if (iVar2 - 1U == 0) {
        uVar8 = (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  if ((uVar11 == 0) || ((*(uint *)(uVar11 + 0x40) & 0x400) == 0)) {
    plVar3 = (longlong *)param_3[1];
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar3 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      uVar7 = (int)lVar4 - 1;
      uVar8 = (ulonglong)uVar7;
      if (uVar7 == 0) {
        uVar8 = (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          uVar8 = (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
    uVar8 = uVar8 & 0xffffffffffffff00;
  }
  else {
    plVar5 = (longlong *)param_3[1];
    lVar4 = *param_3;
    plVar3 = plVar5 + 1;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)plVar3 = (int)*plVar3 + 1;
      UNLOCK();
    }
    local_48 = 0;
    local_38 = 0;
    puVar9 = (undefined8 *)FUN_140438ef0(0x18,local_68);
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = &PTR_FUN_14461b758;
      puVar9[1] = lVar4;
      puVar9[2] = plVar5;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)plVar3 = (int)*plVar3 + 1;
        UNLOCK();
      }
    }
    local_78[0] = FUN_14202c080;
    FUN_14204c370(*param_3,local_78);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      lVar4 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
    local_98 = DAT_1469e9868;
    local_90 = DAT_1469e9870;
    local_88 = DAT_1469e9878;
    if (DAT_1469e9878 != 0) {
      LOCK();
      *(int *)(DAT_1469e9878 + 8) = *(int *)(DAT_1469e9878 + 8) + 1;
      UNLOCK();
    }
    local_a8 = *param_3;
    local_a0 = param_3[1];
    if (local_a0 != 0) {
      LOCK();
      *(int *)(local_a0 + 8) = *(int *)(local_a0 + 8) + 1;
      UNLOCK();
    }
    bVar6 = FUN_1420445b0(param_1,param_2,&local_a8,&local_98,param_4);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_3);
    uVar8 = (ulonglong)bVar6;
  }
  return uVar8;
}



// FUNCTION 142045420 FUN_142045420 body=562 status=ok
// SIG undefined FUN_142045420(void)

undefined8 FUN_142045420(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 *local_68;
  undefined8 local_60;
  longlong local_58;
  longlong *plStack_50;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  longlong local_30;
  longlong local_28;
  longlong *plStack_20;
  
  FUN_14203a450(param_1,&local_58,param_2);
  if (local_58 != 0) {
    local_28 = local_58;
    plStack_20 = plStack_50;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
      UNLOCK();
    }
    cVar6 = FUN_1420451c0(param_1,param_2,&local_28,param_3);
    if (cVar6 != '\0') {
      uVar9 = 1;
      goto LAB_1420455cf;
    }
  }
  local_78 = (undefined8 *)0x0;
  local_70 = 0;
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xf0));
  TArray<TSharedPtr<OculusHMD::FLayer,1>,FDefaultAllocator>::operator=(&local_78,param_1 + 0xe0);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xf0));
  puVar8 = local_78 + (longlong)(int)local_70 * 2;
  for (puVar7 = local_78; puVar7 != puVar8; puVar7 = puVar7 + 2) {
    local_48 = *puVar7;
    local_40 = puVar7[1];
    if (local_40 != 0) {
      LOCK();
      *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
      UNLOCK();
    }
    cVar6 = FUN_1420451c0(param_1,param_2,&local_48,param_3);
    if (cVar6 != '\0') {
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_78);
      uVar9 = 1;
      goto LAB_1420455cf;
    }
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_78);
  local_68 = (undefined8 *)0x0;
  local_60 = 0;
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x108));
  TArray<TSharedPtr<OculusHMD::FLayer,1>,FDefaultAllocator>::operator=(&local_68,param_1 + 0xf8);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x108));
  puVar8 = local_68 + (longlong)(int)local_60 * 2;
  for (puVar7 = local_68; puVar7 != puVar8; puVar7 = puVar7 + 2) {
    local_38 = *puVar7;
    local_30 = puVar7[1];
    if (local_30 != 0) {
      LOCK();
      *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
      UNLOCK();
    }
    cVar6 = FUN_1420451c0(param_1,param_2,&local_38,param_3);
    if (cVar6 != '\0') {
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_68);
      uVar9 = 1;
      goto LAB_1420455cf;
    }
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_68);
  uVar9 = 0;
LAB_1420455cf:
  plVar5 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_50 + 8))(plStack_50,1);
      }
    }
  }
  return uVar9;
}



// FUNCTION 142045660 FUN_142045660 body=621 status=ok
// SIG undefined FUN_142045660(void)

void FUN_142045660(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  longlong *plVar6;
  longlong lVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  int iVar14;
  
  TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>::Remove(param_3);
  plVar13 = (longlong *)param_2[1];
  lVar12 = *param_2;
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)*param_3;
  lVar7 = param_3[1];
  plVar6 = plVar4;
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
  }
  for (; plVar6 != plVar4 + (longlong)(int)lVar7 * 2; plVar6 = plVar6 + 2) {
    lVar10 = *plVar6;
    cVar8 = FWeakObjectPtr::IsValid(lVar10 + 0x70,0,1);
    if ((cVar8 != '\0') && (lVar10 = FWeakObjectPtr::Get(lVar10 + 0x70), lVar10 != 0)) {
      lVar10 = lVar12 + 0x70;
      cVar8 = FWeakObjectPtr::IsValid(lVar10,0,1);
      if ((cVar8 != '\0') && (lVar11 = FWeakObjectPtr::Get(lVar10), lVar11 != 0)) {
        lVar11 = *plVar6;
        cVar8 = FWeakObjectPtr::IsValid(lVar11 + 0x70,0,1);
        if (cVar8 == '\0') {
          lVar11 = 0;
        }
        else {
          lVar11 = FWeakObjectPtr::Get(lVar11 + 0x70);
        }
        cVar8 = FWeakObjectPtr::IsValid(lVar10,0,1);
        if (cVar8 == '\0') {
          lVar10 = 0;
        }
        else {
          lVar10 = FWeakObjectPtr::Get(lVar10);
        }
        if (*(byte *)(lVar10 + 0x89) < *(byte *)(lVar11 + 0x89)) break;
      }
    }
  }
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar13 + 1;
    lVar12 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar2 = (int *)((longlong)plVar13 + 0xc);
      iVar14 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13);
      }
    }
  }
  if (plVar6 == plVar4 + (longlong)(int)lVar7 * 2) {
    iVar14 = -1;
  }
  else {
    iVar14 = (int)((longlong)plVar6 - (longlong)plVar4 >> 4);
  }
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar13 + 1;
    lVar12 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar2 = (int *)((longlong)plVar13 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13);
      }
    }
  }
  iVar3 = (int)param_3[1];
  if ((iVar14 < 0) || (iVar3 <= iVar14)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  iVar9 = iVar3 + 1;
  *(int *)(param_3 + 1) = iVar9;
  if (bVar5) {
    if (*(int *)((longlong)param_3 + 0xc) < iVar9) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar3);
    }
    lVar10 = (longlong)iVar14 * 0x10;
    _guard_xfg_dispatch_icall_nop
              ((void *)(*param_3 + lVar10 + 0x10),(void *)(*param_3 + lVar10),
               (longlong)(iVar3 - iVar14) << 4);
    lVar7 = *param_3;
    *(longlong *)(lVar7 + lVar10) = *param_2;
    lVar12 = param_2[1];
    *(longlong *)(lVar7 + 8 + lVar10) = lVar12;
  }
  else {
    if (*(int *)((longlong)param_3 + 0xc) < iVar9) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar3);
    }
    plVar13 = (longlong *)((longlong)iVar3 * 0x10 + *param_3);
    *plVar13 = *param_2;
    lVar12 = param_2[1];
    plVar13[1] = lVar12;
  }
  if (lVar12 != 0) {
    LOCK();
    *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
    UNLOCK();
  }
  plVar13 = (longlong *)param_2[1];
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar13 + 1;
    lVar12 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar2 = (int *)((longlong)plVar13 + 0xc);
      iVar14 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  return;
}



// FUNCTION 1420458d0 FUN_1420458d0 body=770 status=ok
// SIG undefined FUN_1420458d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
FUN_1420458d0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  undefined1 uVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  uint uVar8;
  longlong lVar9;
  short *psVar10;
  longlong *plVar11;
  undefined1 auStack_358 [32];
  undefined8 local_338;
  undefined8 local_330;
  undefined1 local_328;
  undefined8 local_318;
  ulonglong local_310;
  short *local_308;
  int local_300;
  undefined1 local_2f8 [8];
  longlong *local_2f0;
  undefined1 *local_2e8 [2];
  undefined1 local_2d8 [32];
  undefined8 local_2b8;
  undefined4 local_2a8;
  undefined1 local_298 [80];
  undefined1 local_248 [192];
  longlong local_188;
  undefined1 local_178 [256];
  longlong local_78;
  undefined8 local_70;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_358;
  pcVar1 = (char *)(*(longlong *)(param_1 + 0x78) + 0x30);
  LOCK();
  cVar5 = *pcVar1;
  if (cVar5 == '\0') {
    *pcVar1 = '\0';
    cVar5 = '\0';
  }
  UNLOCK();
  if (cVar5 < '\x06') {
    cVar5 = FUN_142045c10(*(undefined8 *)(param_1 + 0x78));
    if (cVar5 == '\0') {
      puVar6 = (undefined8 *)
               TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_2f8);
      plVar11 = (longlong *)puVar6[1];
      uVar7 = *puVar6;
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
        UNLOCK();
      }
      local_2b8 = 0;
      local_2a8 = 0;
      puVar6 = (undefined8 *)FUN_140438ef0(0x40,local_2d8);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = &PTR_FUN_144f71c00;
        puVar6[5] = param_5;
        puVar6[1] = param_1;
        puVar6[2] = param_2;
        puVar6[3] = param_3;
        puVar6[4] = param_4;
        puVar6[6] = uVar7;
        puVar6[7] = plVar11;
        plVar11 = (longlong *)0x0;
      }
      local_2e8[0] = &LAB_14202c7a0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::
      TStringConversion<TStringConvert<char,wchar_t>,128>(local_178,param_2);
      FString::PrintfImpl(&local_308,L"FGFxObject::Invoke(%s)",local_70);
      local_318 = 0;
      psVar10 = &DAT_143f3eda8;
      if (local_300 != 0) {
        psVar10 = local_308;
      }
      local_310 = 0;
      if ((psVar10 != (short *)0x0) && (*psVar10 != 0)) {
        lVar9 = -1;
        do {
          lVar9 = lVar9 + 1;
        } while (psVar10[lVar9] != 0);
        uVar8 = (int)lVar9 + 1;
        local_310 = (ulonglong)uVar8;
        if (0 < (int)uVar8) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_318,0);
        }
        FGenericPlatformString::Memcpy(local_318,psVar10,(longlong)(int)uVar8 * 2);
      }
      FUN_1410b2c00(local_248,&local_318,local_2e8);
      if (local_308 != (short *)0x0) {
        FMemory::Free();
      }
      if (local_78 != 0) {
        FMemory::Free();
      }
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
        }
      }
      if (local_2f0 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_2f0 + 1;
        lVar9 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_2f0)(local_2f0);
          LOCK();
          piVar2 = (int *)((longlong)local_2f0 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_2f0 + 8))(local_2f0,1);
          }
        }
      }
      uVar7 = FUN_1410ca7e0(local_248,local_298);
      FUN_1420326d0(param_1,uVar7);
      FUN_140d1b3a0(local_248);
      cVar5 = *(char *)(local_188 + 0x58);
      while (cVar5 == '\0') {
        (**(code **)(**(longlong **)(local_188 + 0x50) + 0x20))
                  (*(longlong **)(local_188 + 0x50),0x5d638865,0);
        cVar5 = *(char *)(local_188 + 0x58);
      }
      uVar4 = *(undefined1 *)(local_188 + 0x60);
      FUN_140ce1dc0(local_248);
      return uVar4;
    }
    uVar8 = *(uint *)(param_1 + 0xa0) & 0x8f;
    if (uVar8 - 8 < 4) {
      local_328 = uVar8 == 10;
      local_330 = param_5;
      local_338 = param_4;
      cVar5 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x30))
                        (*(longlong **)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa8),param_3,
                         param_2);
      if (cVar5 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 142045be0 FUN_142045be0 body=17 status=ok
// SIG undefined FUN_142045be0(void)

bool FUN_142045be0(longlong param_1)

{
  return ((byte)*(undefined4 *)(param_1 + 0xa0) & 0x8f) == 10;
}



// FUNCTION 142045c00 FUN_142045c00 body=12 status=ok
// SIG undefined FUN_142045c00(void)

bool FUN_142045c00(void)

{
  return DAT_146accd68 != 0;
}



// FUNCTION 142045c10 FUN_142045c10 body=94 status=ok
// SIG undefined FUN_142045c10(void)

undefined1 FUN_142045c10(longlong param_1)

{
  char cVar1;
  DWORD DVar2;
  
  cVar1 = FUN_142056970();
  if (cVar1 == '\0') {
    if (*(longlong *)(param_1 + 0x88) == 0) {
      return 1;
    }
    cVar1 = FUN_1420794b0();
  }
  else {
    cVar1 = FUN_1415ad720(&DAT_1468e2448);
    if (cVar1 != '\0') {
      return 1;
    }
    if (DAT_1468c21ae == '\0') {
      return 1;
    }
    DVar2 = GetCurrentThreadId();
    cVar1 = DVar2 == DAT_1468c21c0;
  }
  if (cVar1 != '\0') {
    return 1;
  }
  return 0;
}



// FUNCTION 142045c80 FUN_142045c80 body=36 status=ok
// SIG undefined FUN_142045c80(void)

ulonglong FUN_142045c80(longlong param_1)

{
  byte bVar1;
  ulonglong in_RAX;
  
  if ((*(longlong *)(param_1 + 0x80) != 0) && (*(longlong *)(param_1 + 0x78) != 0)) {
    in_RAX = 0;
    LOCK();
    bVar1 = *(byte *)(param_1 + 0x30);
    if (bVar1 == 0) {
      *(byte *)(param_1 + 0x30) = 0;
    }
    else {
      in_RAX = (ulonglong)bVar1;
    }
    UNLOCK();
    if ('\x04' < (char)in_RAX) {
      return 1;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142045cb0 FUN_142045cb0 body=21 status=ok
// SIG undefined FUN_142045cb0(void)

undefined4 FUN_142045cb0(longlong param_1)

{
  uint uVar1;
  
  uVar1 = (*(uint *)(param_1 + 0xa0) & 0x8f) - 8;
  return CONCAT31((int3)(uVar1 >> 8),uVar1 < 4);
}



// FUNCTION 142045cd0 FUN_142045cd0 body=625 status=ok
// SIG undefined FUN_142045cd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_142045cd0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  DWORD DVar4;
  int iVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  bool bVar11;
  bool bVar12;
  undefined1 auStack_1d8 [32];
  undefined2 local_1b8;
  undefined1 local_1a8 [8];
  undefined8 local_1a0;
  undefined8 local_198;
  undefined1 *local_188 [2];
  undefined1 local_178 [32];
  undefined8 local_158;
  undefined4 local_148;
  undefined1 local_138 [80];
  undefined1 local_e8 [192];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  cVar3 = FUN_1420568f0();
  if (((cVar3 == '\0') || (*(longlong **)(param_1 + 0x78) == (longlong *)0x0)) ||
     (uVar6 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0xe8))(), (char)uVar6 != '\0')) {
    lVar2 = DAT_146acc9a8;
    cVar3 = FUN_1415ad720(&DAT_1468e2448);
    plVar8 = (longlong *)0x0;
    if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar4 = GetCurrentThreadId();
      plVar7 = (longlong *)&DAT_00000004;
      if (DVar4 == DAT_1468c21c0) goto LAB_142045d52;
    }
    else {
LAB_142045d52:
      plVar7 = plVar8;
    }
    if (*(int *)((longlong)plVar7 + lVar2) != 0) {
      FUN_14172a070(local_1a8,0);
      cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x70,0,1);
      if (cVar3 != '\0') {
        plVar8 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x70);
      }
      FUN_14172a400(local_1a8);
      if ((plVar8 != (longlong *)0x0) &&
         (uVar6 = (**(code **)(*plVar8 + 0x4b0))(plVar8), (char)uVar6 == '\0')) goto LAB_142045df7;
    }
    if (DAT_146acd048 == '\0') {
      LOCK();
      DAT_146accf28 = (uint)(*DAT_146accf68 != 0);
      UNLOCK();
      DAT_146acd048 = '\x01';
    }
    LOCK();
    bVar11 = DAT_146accf28 == 0;
    if (bVar11) {
      DAT_146accf28 = 0;
    }
    UNLOCK();
    if (!bVar11) {
      LOCK();
      iVar5 = *(int *)(param_1 + 0x1d8);
      if (iVar5 == 0) {
        *(int *)(param_1 + 0x1d8) = 0;
        iVar5 = 0;
      }
      UNLOCK();
      uVar6 = FUN_14204b990();
      bVar11 = (char)uVar6 == '\0';
      if (bVar11) {
        bVar12 = iVar5 == 0;
        iVar1 = iVar5;
      }
      else {
        bVar12 = iVar5 == 1;
        iVar1 = iVar5 + -1;
      }
      if (!bVar12 && (!bVar11 && SBORROW4(iVar5,1)) == iVar1 < 0) goto LAB_142045df7;
    }
    local_158 = 0;
    local_148 = 0;
    puVar9 = (undefined8 *)FUN_140438ef0(0x10,local_178);
    if (puVar9 != (undefined8 *)0x0) {
      puVar9[1] = param_1;
      *puVar9 = &PTR_FUN_143f77b70;
    }
    local_1a0 = 0;
    local_188[0] = &LAB_14202c700;
    local_198 = 0x19;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1a0,0);
    local_1b8 = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>(local_1a0,0x19,"IsReadyToProcessShutdown");
    FUN_1410b2c00(local_e8,&local_1a0,local_188);
    uVar10 = FUN_1410ca7e0(local_e8,local_138);
    FUN_142032330(uVar10);
    FUN_140d1b3a0(local_e8);
    cVar3 = *(char *)(local_28 + 0x58);
    while (cVar3 == '\0') {
      (**(code **)(**(longlong **)(local_28 + 0x50) + 0x20))
                (*(longlong **)(local_28 + 0x50),0x5d638865,0);
      cVar3 = *(char *)(local_28 + 0x58);
    }
    cVar3 = *(char *)(local_28 + 0x60);
    FUN_140ce1dc0(local_e8);
    uVar6 = (ulonglong)(cVar3 != '\0');
  }
  else {
LAB_142045df7:
    uVar6 = uVar6 & 0xffffffffffffff00;
  }
  return uVar6;
}



// FUNCTION 142045f50 FUN_142045f50 body=31 status=ok
// SIG undefined FUN_142045f50(void)

undefined8 FUN_142045f50(longlong param_1)

{
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  LOCK();
  uVar2 = *(uint *)(param_1 + 0x1e0);
  if (uVar2 == 0) {
    *(uint *)(param_1 + 0x1e0) = 0;
  }
  else {
    uVar3 = (ulonglong)uVar2;
  }
  UNLOCK();
  if (uVar2 == 0) {
    uVar3 = 0;
    LOCK();
    bVar1 = *(byte *)(param_1 + 0x30);
    if (bVar1 == 0) {
      *(byte *)(param_1 + 0x30) = 0;
    }
    else {
      uVar3 = (ulonglong)bVar1;
    }
    UNLOCK();
    if ((char)uVar3 < '\x06') {
      return 0;
    }
  }
  return CONCAT71((int7)(uVar3 >> 8),1);
}



// FUNCTION 142045f70 FUN_142045f70 body=28 status=ok
// SIG undefined FUN_142045f70(void)

longlong FUN_142045f70(void)

{
  ulonglong uVar1;
  uint7 uVar2;
  bool bVar3;
  
  uVar1 = 0;
  LOCK();
  bVar3 = DAT_146accd48 == 0;
  if (bVar3) {
    DAT_146accd48 = 0;
  }
  else {
    uVar1 = (ulonglong)DAT_146accd48;
  }
  UNLOCK();
  uVar2 = (uint7)(uVar1 >> 8);
  if ((bVar3) && (DAT_1468c217e == '\0')) {
    return (ulonglong)uVar2 << 8;
  }
  return CONCAT71(uVar2,1);
}



// FUNCTION 142045f90 FUN_142045f90 body=133 status=ok
// SIG undefined FUN_142045f90(void)

bool FUN_142045f90(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_18;
  longlong *local_10;
  
  FUN_14203d100(&local_18,param_1);
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
    return local_18 != 0;
  }
  return local_18 != 0;
}



// FUNCTION 142046020 FUN_142046020 body=16 status=ok
// SIG undefined FUN_142046020(void)

undefined8 FUN_142046020(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  LOCK();
  uVar1 = *(uint *)(param_1 + 0xa4);
  if (uVar1 == 0) {
    *(uint *)(param_1 + 0xa4) = 0;
  }
  else {
    uVar2 = (ulonglong)uVar1;
  }
  UNLOCK();
  return CONCAT71((int7)(uVar2 >> 8),uVar1 != 0);
}



// FUNCTION 142046030 FUN_142046030 body=2816 status=ok
// SIG undefined FUN_142046030(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142046030(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined4 uVar11;
  bool bVar12;
  undefined1 auStack_3d8 [32];
  longlong local_3b8;
  longlong *plStack_3b0;
  undefined4 local_3a8;
  undefined4 local_3a4;
  undefined4 local_3a0 [2];
  longlong *local_398;
  longlong *local_390;
  undefined8 local_388;
  longlong *local_380;
  longlong local_378;
  undefined4 local_370;
  undefined4 local_36c;
  longlong local_368;
  longlong local_360;
  longlong *local_358;
  longlong *local_350;
  longlong local_348;
  longlong *local_340;
  longlong local_338;
  longlong *plStack_330;
  longlong local_328 [2];
  longlong local_318;
  longlong *plStack_310;
  code *local_308 [2];
  longlong local_2f8 [4];
  longlong *local_2d8;
  int local_2c8;
  code *local_2b8 [2];
  undefined1 local_2a8 [32];
  undefined8 local_288;
  undefined4 local_278;
  code *local_268 [2];
  longlong local_258 [4];
  longlong *local_238;
  int local_228;
  code *local_218 [2];
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
  undefined1 *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_3d8;
  if (*(longlong *)(param_1 + 0x88) != 0) {
    return;
  }
  uVar4 = (**(code **)(*param_2 + 0x148))(param_2);
  FWeakObjectPtr::operator=(param_1 + 0x1bc,uVar4);
  TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,&local_3b8);
  if (plStack_3b0 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plStack_3b0 + 0xc) = *(int *)((longlong)plStack_3b0 + 0xc) + 1;
    UNLOCK();
  }
  local_338 = local_3b8;
  plStack_330 = plStack_3b0;
  if (plStack_3b0 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_3b0 + 1) = (int)plStack_3b0[1] + 1;
    UNLOCK();
  }
  FUN_142029a60(&local_338);
  cVar3 = FUN_142055370(param_1,1);
  if (cVar3 == '\0') goto LAB_142046aa6;
  cVar3 = FUN_142059c80();
  plVar9 = (longlong *)0x0;
  if (cVar3 == '\0') {
    local_1e8 = (longlong *)0x0;
    local_1d8 = 0;
    puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_208);
    if (puVar5 != (undefined8 *)0x0) {
      puVar5[1] = param_2;
      *puVar5 = &PTR_FUN_143f77b70;
    }
    local_218[0] = FUN_14202c310;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_308,local_218);
    plVar6 = plVar9;
    if (local_2c8 != 0) {
      plVar7 = local_2f8;
      if (local_2d8 != (longlong *)0x0) {
        plVar7 = local_2d8;
      }
      if (plVar7 != (longlong *)0x0) {
        plVar6 = (longlong *)(**(code **)(*plVar7 + 8))();
      }
    }
    (*local_308[0])(plVar6);
    if (local_2c8 != 0) {
      plVar6 = local_2f8;
      if (local_2d8 != (longlong *)0x0) {
        plVar6 = local_2d8;
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6,0);
      }
    }
    if (local_2d8 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_1d8 != 0) {
      plVar6 = local_208;
      if (local_1e8 != (longlong *)0x0) {
        plVar6 = local_1e8;
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6,0);
      }
    }
    if (local_1e8 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  local_368 = param_2[3];
  FName::ToString(&local_368,&local_378);
  plVar6 = (longlong *)(param_1 + 0x20);
  if (plVar6 == &local_378) {
    if (local_378 != 0) {
      FMemory::Free();
    }
  }
  else {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    *plVar6 = local_378;
    *(undefined4 *)(param_1 + 0x28) = local_370;
    *(undefined4 *)(param_1 + 0x2c) = local_36c;
  }
  plVar7 = (longlong *)FUN_142039e70(local_328,param_2);
  plVar6 = (longlong *)(param_1 + 0x10);
  if (plVar6 != plVar7) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    *plVar6 = *plVar7;
    *plVar7 = 0;
    *(int *)(param_1 + 0x18) = (int)plVar7[1];
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)((longlong)plVar7 + 0xc);
    plVar7[1] = 0;
  }
  if (local_328[0] != 0) {
    FMemory::Free();
  }
  if (plStack_3b0 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_3b0 + 1) = (int)plStack_3b0[1] + 1;
    UNLOCK();
  }
  param_2[0x2b] = local_3b8;
  plVar6 = (longlong *)param_2[0x2c];
  if (plStack_3b0 != plVar6) {
    if (plStack_3b0 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plStack_3b0 + 0xc) = *(int *)((longlong)plStack_3b0 + 0xc) + 1;
      UNLOCK();
      plVar6 = (longlong *)param_2[0x2c];
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar6 + 8))(local_3b8,1);
      }
    }
    param_2[0x2c] = (longlong)plStack_3b0;
  }
  plVar6 = plStack_3b0;
  if (plStack_3b0 != (longlong *)0x0) {
    LOCK();
    plVar7 = plStack_3b0 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_3b0)(plStack_3b0);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_3b0 + 8))(plStack_3b0,1);
      }
    }
  }
  FWeakObjectPtr::operator=(param_1 + 0x70,param_2);
  uVar4 = FUN_14203cb80(param_2);
  local_318 = local_3b8;
  plStack_310 = plStack_3b0;
  *(undefined8 *)(param_1 + 0x88) = uVar4;
  if (plStack_3b0 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_3b0 + 1) = (int)plStack_3b0[1] + 1;
    UNLOCK();
  }
  (**(code **)(**(longlong **)(param_1 + 0x88) + 0x38))(*(longlong **)(param_1 + 0x88),&local_318);
  local_390 = (longlong *)FUN_142017860();
  local_398 = local_390 + 2;
  SharedPointerInternals::EnableSharedFromThis(&local_398,local_398,local_398);
  local_3a8 = 0xffffffff;
  FUN_14170c210(&local_3a8,param_2);
  uVar11 = local_3a8;
  plVar6 = plStack_3b0;
  local_3a8 = 0xffffffff;
  if (plStack_3b0 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plStack_3b0 + 0xc) = *(int *)((longlong)plStack_3b0 + 0xc) + 1;
    UNLOCK();
  }
  local_198 = (longlong *)0x0;
  local_188 = 0;
  puVar5 = (undefined8 *)FUN_140438ef0(0x28,local_1b8);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_FUN_144f71b58;
    puVar5[1] = param_1;
    *(undefined4 *)(puVar5 + 2) = uVar11;
    uVar11 = 0xffffffff;
    puVar5[3] = local_3b8;
    puVar5[4] = plStack_3b0;
    plVar6 = plVar9;
  }
  local_1c8[0] = &LAB_14202c920;
  FUN_14207a010(local_398,local_1c8);
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
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6,1);
    }
  }
  FUN_1416f8340(uVar11);
  FUN_1416f8340(local_3a8);
  local_3a4 = 0xffffffff;
  FUN_14170c210(&local_3a4,param_2);
  uVar11 = local_3a4;
  plVar6 = plStack_3b0;
  local_3a4 = 0xffffffff;
  if (plStack_3b0 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plStack_3b0 + 0xc) = *(int *)((longlong)plStack_3b0 + 0xc) + 1;
    UNLOCK();
  }
  local_148 = (longlong *)0x0;
  local_138 = 0;
  puVar5 = (undefined8 *)FUN_140438ef0(0x28,local_168);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_FUN_144f71b58;
    puVar5[1] = param_1;
    *(undefined4 *)(puVar5 + 2) = uVar11;
    uVar11 = 0xffffffff;
    puVar5[3] = local_3b8;
    puVar5[4] = plStack_3b0;
    plVar6 = plVar9;
  }
  local_178[0] = &LAB_14202c9a0;
  FUN_14207a010(local_398,local_178);
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
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6,1);
    }
  }
  FUN_1416f8340(uVar11);
  FUN_1416f8340(local_3a4);
  TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,&local_388);
  plVar6 = local_380;
  if (local_380 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)local_380 + 0xc) = *(int *)((longlong)local_380 + 0xc) + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)local_380 + 0xc) = *(int *)((longlong)local_380 + 0xc) + 1;
    UNLOCK();
  }
  local_f8 = (longlong *)0x0;
  local_e8 = 0;
  puVar5 = (undefined8 *)FUN_140438ef0(0x20,local_118);
  plVar7 = plVar6;
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_FUN_144f71ab0;
    puVar5[1] = param_1;
    puVar5[2] = local_388;
    puVar5[3] = plVar6;
    plVar7 = plVar9;
  }
  local_128[0] = &LAB_14202c8b0;
  plVar10 = plVar6;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    plVar10 = local_380;
    if (iVar2 == 1) {
      (**(code **)(*plVar7 + 8))(plVar7,1);
      plVar10 = local_380;
    }
  }
  plVar7 = local_380;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar10 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*local_380 + 8))(local_380,1);
    }
    LOCK();
    plVar7 = plVar7 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_380)();
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_380 + 8))(local_380,1);
      }
    }
  }
  FUN_14207a010(local_398,local_128);
  if (local_e8 != 0) {
    plVar6 = local_118;
    if (local_f8 != (longlong *)0x0) {
      plVar6 = local_f8;
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0);
    }
  }
  if (local_f8 != (longlong *)0x0) {
    FMemory::Free();
  }
  plVar6 = plStack_3b0;
  if (plStack_3b0 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plStack_3b0 + 0xc) = *(int *)((longlong)plStack_3b0 + 0xc) + 1;
    UNLOCK();
  }
  local_a8 = (longlong *)0x0;
  local_98 = 0;
  puVar5 = (undefined8 *)FUN_140438ef0(0x18,local_c8);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_FUN_144575d30;
    puVar5[1] = local_3b8;
    puVar5[2] = plStack_3b0;
    plVar6 = plVar9;
  }
  local_d8[0] = &LAB_14202c8c0;
  FUN_14207a010(local_398,local_d8);
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
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6,1);
    }
  }
  local_3a0[0] = 0xffffffff;
  FUN_14170c210(local_3a0,param_2);
  uVar11 = local_3a0[0];
  plVar6 = plStack_3b0;
  local_3a0[0] = 0xffffffff;
  if (plStack_3b0 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plStack_3b0 + 0xc) = *(int *)((longlong)plStack_3b0 + 0xc) + 1;
    UNLOCK();
  }
  local_58 = (longlong *)0x0;
  local_48 = 0;
  puVar5 = (undefined8 *)FUN_140438ef0(0x28,local_78);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_FUN_144f71b58;
    puVar5[1] = param_1;
    *(undefined4 *)(puVar5 + 2) = uVar11;
    puVar5[3] = local_3b8;
    puVar5[4] = plStack_3b0;
    plVar6 = plVar9;
    uVar11 = 0xffffffff;
  }
  local_88[0] = &LAB_14202be30;
  FUN_14207a010(local_398,local_88);
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
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6,1);
    }
  }
  FUN_1416f8340(uVar11);
  FUN_1416f8340(local_3a0[0]);
  cVar3 = FUN_142059c80();
  plVar6 = local_390;
  if (cVar3 == '\0') {
    FUN_142035d70(*(undefined8 *)(param_1 + 0x88),&local_398);
  }
  else {
    local_358 = local_398;
    local_350 = local_390;
    if (local_390 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_390 + 1) = (int)local_390[1] + 1;
      UNLOCK();
    }
    local_348 = local_3b8;
    local_340 = plStack_3b0;
    if (plStack_3b0 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plStack_3b0 + 0xc) = *(int *)((longlong)plStack_3b0 + 0xc) + 1;
      UNLOCK();
    }
    local_238 = (longlong *)0x0;
    local_228 = 0;
    local_360 = param_1;
    puVar5 = (undefined8 *)FUN_140438ef0(0x30,local_258);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &PTR_FUN_144f71b70;
      puVar5[1] = param_1;
      puVar5[2] = local_358;
      puVar5[3] = plVar6;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      puVar5[4] = local_3b8;
      puVar5[5] = plStack_3b0;
      local_340 = (longlong *)0x0;
      local_348 = 0;
    }
    local_268[0] = thunk_FUN_1420231a0;
    lVar8 = (**(code **)(*param_2 + 0x468))(param_2);
    if (lVar8 == 0) {
LAB_1420469d6:
      if (local_228 != 0) {
        plVar6 = local_258;
        if (local_238 != (longlong *)0x0) {
          plVar6 = local_238;
        }
        if (plVar6 != (longlong *)0x0) {
          plVar9 = (longlong *)(**(code **)(*plVar6 + 8))();
        }
      }
      (*local_268[0])(plVar9);
    }
    else {
      LOCK();
      bVar12 = *(int *)(lVar8 + 0xf0) == 0;
      if (bVar12) {
        *(int *)(lVar8 + 0xf0) = 0;
      }
      UNLOCK();
      if (!bVar12) goto LAB_1420469d6;
      local_288 = 0;
      local_278 = 0;
      puVar5 = (undefined8 *)FUN_140438ef0(0x60,local_2a8);
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &PTR_CopyToEmptyStorage_1444f81f0;
        TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar5 + 2,local_268);
      }
      local_2b8[0] = UE4Function_Private::
                     TFunctionRefCaller<<lambda_50573a4081bc06268289253819177437>,void___cdecl(void)>
                     ::Call;
      FUN_142081b30(lVar8,local_2b8);
    }
    if (local_228 != 0) {
      plVar9 = local_258;
      if (local_238 != (longlong *)0x0) {
        plVar9 = local_238;
      }
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x10))(plVar9,0);
      }
    }
    if (local_238 != (longlong *)0x0) {
      FMemory::Free();
    }
    FUN_14201b670(&local_360);
  }
  plVar9 = local_390;
  if (local_390 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_390 + 1;
    lVar8 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_390)(local_390);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
LAB_142046aa6:
  plVar9 = plStack_3b0;
  if (plStack_3b0 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_3b0 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plStack_3b0 + 8))(plStack_3b0,1);
    }
    LOCK();
    plVar6 = plVar9 + 1;
    lVar8 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_3b0)();
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_3b0 + 8))(plStack_3b0,1);
      }
    }
  }
  return;
}



// FUNCTION 142046b30 FUN_142046b30 body=274 status=ok
// SIG undefined FUN_142046b30(void)

undefined8 FUN_142046b30(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_78 [80];
  
  cVar4 = FUN_142045f90(param_1 + 0x18);
  if (cVar4 == '\0') {
    uVar5 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_88);
    FUN_142058970(uVar5);
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
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
  }
  uVar5 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_78,param_3);
  FUN_142046c50(param_2,param_1 + 0x38,param_1 + 0x18,uVar5);
  if (*(int *)(param_3 + 0x40) != 0) {
    plVar6 = *(longlong **)(param_3 + 0x30);
    if (*(longlong **)(param_3 + 0x30) == (longlong *)0x0) {
      plVar6 = (longlong *)(param_3 + 0x10);
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0);
    }
  }
  if (*(longlong *)(param_3 + 0x30) != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142046c50 FUN_142046c50 body=1317 status=ok
// SIG undefined FUN_142046c50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_142046c50(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  char cVar4;
  int iVar5;
  DWORD DVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  int iVar12;
  void *pvVar13;
  longlong lVar14;
  void *_Dst;
  undefined1 auStack_318 [32];
  void *local_2f8;
  int local_2f0;
  int local_2ec;
  void *local_2e8;
  undefined8 local_2e0;
  void *local_2d8;
  int local_2d0;
  int local_2cc;
  longlong local_2c8;
  undefined8 *local_2c0;
  code *local_2b8 [2];
  undefined1 local_2a8 [32];
  undefined8 local_288;
  undefined4 local_278;
  undefined1 local_268 [80];
  code *local_218;
  longlong local_208 [4];
  longlong *local_1e8;
  int local_1d8;
  undefined8 local_1c8;
  longlong local_1c0 [2];
  longlong local_1b0 [3];
  undefined1 local_198 [16];
  longlong local_188 [4];
  longlong *local_168;
  int local_158;
  undefined1 local_148 [192];
  longlong local_88;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_318;
  local_1c8 = *param_2;
  local_2c8 = param_4;
  local_2c0 = param_1;
  FString::FString(local_1c0,param_2 + 1);
  FString::FString(local_1b0,param_3);
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_198,param_4);
  pvVar13 = (void *)0x0;
  local_1e8 = (longlong *)0x0;
  local_1d8 = 0;
  puVar7 = (undefined8 *)FUN_140438ef0(0x90,local_208);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &PTR_FUN_144f71ac8;
    puVar7[2] = local_1c8;
    FString::FString(puVar7 + 3,local_1c0);
    FString::FString(puVar7 + 5,local_1b0);
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar7 + 8,local_198);
  }
  local_218 = FUN_14202c7c0;
  if (local_158 != 0) {
    plVar8 = local_188;
    if (local_168 != (longlong *)0x0) {
      plVar8 = local_168;
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8,0);
    }
  }
  if (local_168 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_1b0[0] != 0) {
    FMemory::Free();
  }
  if (local_1c0[0] != 0) {
    FMemory::Free();
  }
  local_288 = 0;
  local_278 = 0;
  puVar7 = (undefined8 *)FUN_140438ef0(0x60,local_2a8);
  if (puVar7 == (undefined8 *)0x0) goto LAB_142046dff;
  *puVar7 = &PTR_CopyToEmptyStorage_14468ebf0;
  puVar7[8] = 0;
  *(undefined4 *)(puVar7 + 10) = 0;
  if (local_1d8 == 0) {
LAB_142046df4:
    pcVar9 = FUN_14107d2e0;
  }
  else {
    plVar8 = local_208;
    if (local_1e8 != (longlong *)0x0) {
      plVar8 = local_1e8;
    }
    if (plVar8 == (longlong *)0x0) goto LAB_142046df4;
    plVar8 = (longlong *)(**(code **)*plVar8)(plVar8,puVar7 + 4);
    (**(code **)(*plVar8 + 8))(plVar8);
    pcVar9 = local_218;
  }
  puVar7[2] = pcVar9;
LAB_142046dff:
  local_2e8 = (void *)0x0;
  local_2b8[0] = FUN_14107db70;
  local_2e0 = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2e8,0);
  pvVar3 = local_2e8;
  FGenericPlatformString::Memcpy(local_2e8,L"Load:",0xc);
  if ((int)local_2e0 < 2) {
    FString::FString(&local_2d8,param_3);
    pvVar13 = pvVar3;
    pvVar3 = local_2d8;
  }
  else {
    iVar12 = *(int *)(param_3 + 1) + -1;
    if (*(int *)(param_3 + 1) == 0) {
      iVar12 = 0;
    }
    if (((int)local_2e0 != 0) || (iVar5 = 1, iVar12 == 0)) {
      iVar5 = 0;
    }
    local_2f8 = pvVar3;
    local_2e8 = (void *)0x0;
    local_2f0 = (int)local_2e0;
    local_2ec = local_2e0._4_4_;
    if (local_2e0._4_4_ < iVar12 + iVar5 + (int)local_2e0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_2f8);
    }
    iVar5 = local_2f0;
    local_2d8 = (void *)*param_3;
    param_1 = local_2c0;
    param_4 = local_2c8;
    pvVar3 = local_2f8;
    local_2d0 = local_2f0;
    local_2cc = local_2ec;
    if (iVar12 != 0) {
      lVar14 = (longlong)local_2f0;
      local_2f0 = iVar12 + (uint)(local_2f0 == 0) + local_2f0;
      if (local_2ec < local_2f0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2f8,iVar5);
      }
      iVar2 = local_2ec;
      iVar1 = local_2f0;
      pvVar3 = local_2f8;
      _Dst = (void *)((lVar14 - (ulonglong)(iVar5 != 0)) * 2 + (longlong)local_2f8);
      _guard_xfg_dispatch_icall_nop(_Dst,local_2d8,(longlong)iVar12 * 2);
      *(undefined2 *)((longlong)_Dst + (longlong)iVar12 * 2) = 0;
      param_1 = local_2c0;
      param_4 = local_2c8;
      local_2d0 = iVar1;
      local_2cc = iVar2;
    }
  }
  local_2d8 = pvVar3;
  FUN_14106d6c0(local_148,&local_2d8,local_2b8);
  if (pvVar13 != (void *)0x0) {
    FMemory::Free(pvVar13);
  }
  uVar10 = FUN_1410817c0(local_148,local_268);
  FUN_14204c280(uVar10);
  lVar14 = local_88;
  if (local_88 != 0) {
    while ((lVar14 = local_88, local_88 != 0 && (*(char *)(local_88 + 0x58) == '\0'))) {
      cVar4 = FUN_1415ad720(&DAT_1468e2448);
      if ((cVar4 == '\0') &&
         ((DAT_1468c21ae != '\0' && (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)))) {
        ppuVar11 = (undefined **)FUN_14203ca70();
        if (ppuVar11 != (undefined **)0x0) goto LAB_142047015;
      }
      else {
        ppuVar11 = &PTR_PTR_1464f05c0;
LAB_142047015:
        FUN_1420714f0(ppuVar11);
      }
      lVar14 = local_88;
      if (local_88 == 0) break;
      if (*(char *)(local_88 + 0x58) == '\0') {
        (**(code **)(**(longlong **)(local_88 + 0x50) + 0x20))();
      }
    }
  }
  cVar4 = *(char *)(lVar14 + 0x58);
  while (cVar4 == '\0') {
    (**(code **)(**(longlong **)(lVar14 + 0x50) + 0x20))(*(longlong **)(lVar14 + 0x50),0x5d638865,0)
    ;
    cVar4 = *(char *)(lVar14 + 0x58);
  }
  *param_1 = *(undefined8 *)(lVar14 + 0x60);
  lVar14 = *(longlong *)(lVar14 + 0x68);
  param_1[1] = lVar14;
  if (lVar14 != 0) {
    LOCK();
    *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
    UNLOCK();
  }
  FUN_140ce1dc0(local_148);
  if (local_1d8 != 0) {
    plVar8 = local_208;
    if (local_1e8 != (longlong *)0x0) {
      plVar8 = local_1e8;
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8,0);
    }
  }
  if (local_1e8 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (*(int *)(param_4 + 0x40) != 0) {
    plVar8 = *(longlong **)(param_4 + 0x30);
    if (*(longlong **)(param_4 + 0x30) == (longlong *)0x0) {
      plVar8 = (longlong *)(param_4 + 0x10);
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8,0);
    }
  }
  if (*(longlong *)(param_4 + 0x30) != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 142047180 FUN_142047180 body=832 status=ok
// SIG undefined FUN_142047180(void)

undefined8 FUN_142047180(undefined8 param_1,undefined8 param_2,ulonglong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  void *pvVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  uint uVar10;
  ulonglong uVar11;
  char *pcVar12;
  char *pcVar13;
  void *local_d8;
  ulonglong local_d0;
  char *local_c8;
  int local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  longlong local_b0 [3];
  longlong *local_98;
  char *local_90;
  int local_88;
  undefined4 local_84;
  longlong *local_80;
  longlong *local_78;
  undefined **local_70;
  undefined8 local_68;
  longlong *plStack_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined8 local_44;
  undefined8 local_38;
  longlong local_30 [3];
  
  lVar6 = FUN_142039c70();
  if (lVar6 != 0) {
    uVar11 = *param_3;
    iVar5 = strncmp((char *)((uVar11 & 0xfffffffffffffffc) + 0xc),"/ package/",10);
    pcVar13 = (char *)0x0;
    pcVar12 = pcVar13;
    if (iVar5 == 0) {
      pcVar12 = (char *)((uVar11 & 0xfffffffffffffffc) + 0x16);
    }
    local_d0 = 0;
    local_d8 = (void *)0x0;
    if ((pcVar12 != (char *)0x0) && (*pcVar12 != '\0')) {
      lVar6 = -1;
      do {
        lVar6 = lVar6 + 1;
      } while (pcVar12[lVar6] != '\0');
      uVar10 = (int)lVar6 + 1;
      local_d0 = (ulonglong)uVar10;
      if (0 < (int)uVar10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
      }
      FGenericPlatformString::Convert<char,wchar_t>(local_d8,uVar10,pcVar12,uVar10,0x3f);
    }
    FPaths::CollapseRelativeDirectories(&local_d8);
    FUN_14203d100(local_b0 + 2,&local_d8);
    plVar7 = local_98;
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
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_98 + 8))(local_98,1);
        }
      }
    }
    pvVar4 = local_d8;
    if (local_b0[2] == 0) {
      lVar6 = (longlong)(int)local_d0;
      local_70 = &PTR_FUN_144f70cf8;
      local_58 = (void *)0x0;
      local_50 = (int)local_d0;
      local_68 = 0;
      plStack_60 = (longlong *)0x0;
      if ((int)local_d0 == 0) {
        local_4c = 0;
        uVar11 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,local_d0 & 0xffffffff,0);
        _guard_xfg_dispatch_icall_nop(local_58,pvVar4,lVar6 * 2);
        uVar11 = local_d0 & 0xffffffff;
      }
      pvVar4 = local_d8;
      local_c8 = (char *)0x0;
      iVar5 = (int)uVar11;
      local_c0 = iVar5;
      if (iVar5 == 0) {
        local_bc = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_c8,uVar11,0);
        pcVar13 = local_c8;
        _guard_xfg_dispatch_icall_nop(local_c8,pvVar4,(longlong)iVar5 * 2);
      }
      local_b8 = 0;
      local_b0[0] = 0;
      local_b0[1] = 0;
      local_90 = pcVar13;
      local_88 = local_c0;
      local_84 = local_bc;
      FUN_1417978e0(&local_b8,&local_90);
      local_38 = local_b8;
      local_48 = 0xffffffff;
      local_44 = 0;
      FString::FString(local_30,local_b0);
      if (local_b0[0] != 0) {
        FMemory::Free();
      }
      plVar7 = (longlong *)FUN_142017940(&local_70);
      local_80 = plVar7 + 2;
      local_78 = plVar7;
      FUN_14044f790(&local_80);
      FUN_142058970(&local_80);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar7 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar7)(plVar7);
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
      if (local_30[0] != 0) {
        FMemory::Free();
      }
      if (local_58 != (void *)0x0) {
        FMemory::Free();
      }
      if (plStack_60 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plStack_60 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plStack_60 + 8))(plStack_60,1);
        }
      }
    }
    lVar6 = FUN_142038850(&local_d8);
    if (lVar6 != 0) {
      lVar8 = UTexture::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        uVar9 = FUN_142031c30(lVar6);
        if (local_d8 != (void *)0x0) {
          FMemory::Free();
        }
        return uVar9;
      }
    }
    if (local_d8 != (void *)0x0) {
      FMemory::Free();
    }
  }
  return 0;
}



// FUNCTION 1420474c0 FUN_1420474c0 body=554 status=ok
// SIG undefined FUN_1420474c0(void)

longlong * FUN_1420474c0(undefined8 param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  lVar4 = FMemory::Malloc(0x218,0);
  plVar7 = (longlong *)0x0;
  plVar5 = plVar7;
  if (lVar4 != 0) {
    plVar5 = (longlong *)FUN_142019230(lVar4);
  }
  *param_2 = (longlong)plVar5;
  plVar6 = (longlong *)operator_new(0x18);
  if (plVar6 != (longlong *)0x0) {
    *(undefined4 *)(plVar6 + 1) = 1;
    *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
    *plVar6 = (longlong)&PTR_FUN_144f71a88;
    plVar6[2] = (longlong)plVar5;
    plVar7 = plVar6;
  }
  param_2[1] = (longlong)plVar7;
  if (plVar5 != (longlong *)0x0) {
    if (*plVar5 != 0) {
      if (plVar5[1] != 0) {
        piVar1 = (int *)(plVar5[1] + 8);
        LOCK();
        iVar3 = *piVar1;
        if (iVar3 == 0) {
          *piVar1 = 0;
          iVar3 = 0;
        }
        UNLOCK();
        if (0 < iVar3) goto LAB_1420475e4;
      }
      plVar7 = (longlong *)param_2[1];
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    *plVar5 = (longlong)plVar5;
    plVar6 = (longlong *)plVar5[1];
    if (plVar7 != plVar6) {
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
        UNLOCK();
        plVar6 = (longlong *)plVar5[1];
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
      plVar5[1] = (longlong)plVar7;
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar7 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
  }
LAB_1420475e4:
  if ((param_3 != (longlong *)0x0) && (*param_2 != 0)) {
    FUN_142046030(*param_2,param_3);
    plVar7 = (longlong *)param_2[1];
    lVar4 = *param_2;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    lVar2 = *param_4;
    FUN_142056520(lVar4,*(undefined1 *)(lVar2 + 1));
    FUN_142052c50(lVar4,*(char *)(lVar2 + 2) == '\0');
    LOCK();
    *(uint *)(lVar4 + 0x98) = (uint)(*(char *)(lVar2 + 3) != '\0');
    UNLOCK();
    LOCK();
    *(uint *)(lVar4 + 0x9c) = (uint)(*(char *)(lVar2 + 4) != '\0');
    UNLOCK();
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar7 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
    (**(code **)(*param_3 + 0x2d0))(param_3);
  }
  plVar7 = (longlong *)param_4[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar7 + 1;
    lVar4 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  return param_2;
}



// FUNCTION 1420476f0 FUN_1420476f0 body=912 status=ok
// SIG undefined FUN_1420476f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined2 * FUN_1420476f0(LARGE_INTEGER param_1,undefined8 *param_2,undefined8 param_3)

{
  void *_Src;
  LARGE_INTEGER LVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  LARGE_INTEGER LVar6;
  undefined2 *puVar7;
  int iVar8;
  undefined2 *puVar9;
  int iVar10;
  undefined2 *puVar11;
  longlong lVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  int iVar15;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined8 local_140;
  undefined1 local_138;
  undefined2 *local_128;
  undefined8 local_120;
  undefined2 *local_118;
  int local_110;
  int local_10c;
  LARGE_INTEGER local_108;
  LARGE_INTEGER local_100;
  undefined8 local_f8;
  undefined1 local_e8 [128];
  longlong local_68;
  undefined8 local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  local_100 = param_1;
  local_f8 = param_3;
  QueryPerformanceCounter(&local_108);
  iVar10 = *(int *)(param_2 + 1);
  puVar7 = (undefined2 *)0x0;
  iVar8 = 0;
  iVar15 = 0;
  iVar3 = iVar10 + -1;
  if (iVar10 == 0) {
    iVar3 = iVar15;
  }
  if (iVar3 == 0) {
    return (undefined2 *)0x0;
  }
  local_128 = (undefined2 *)0x0;
  local_120 = (ulonglong)(uint)local_120;
  if (iVar10 == 0) {
    puVar11 = &DAT_143f3eda8;
  }
  else {
    puVar11 = (undefined2 *)*param_2;
  }
  uVar5 = UMaterialParameterCollectionInstance::GetPrivateStaticClass();
  local_138 = 1;
  local_140 = 0;
  local_148 = 0;
  LVar6.QuadPart = FUN_141799c90(uVar5,0,puVar11,0);
  puVar11 = puVar7;
  local_108.QuadPart = LVar6.QuadPart;
  if ((longlong *)LVar6.QuadPart == (longlong *)0x0) goto LAB_1420479dc;
  (**(code **)(*(longlong *)LVar6 + 0x78))(LVar6.QuadPart);
  if ((*(byte *)(LVar6.QuadPart + 0x28) & 1) == 0) {
    if (&local_128 != (undefined2 **)(LVar6.QuadPart + 0x50)) {
      iVar10 = *(int *)(LVar6.QuadPart + 0x58);
      puVar14 = *(undefined2 **)(LVar6.QuadPart + 0x50);
      local_120 = CONCAT44(local_120._4_4_,iVar10);
      iVar8 = 0;
      if (iVar10 != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_128,iVar10,0);
        puVar9 = local_128;
        _guard_xfg_dispatch_icall_nop(local_128,puVar14,(longlong)iVar10 * 2);
        iVar8 = (uint)local_120;
        goto LAB_14204793e;
      }
    }
LAB_142047945:
    puVar9 = &DAT_143f3eda8;
  }
  else {
    iVar10 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    local_128 = (undefined2 *)0x0;
    local_120 = CONCAT44(local_120._4_4_,iVar10);
    iVar8 = 0;
    if (iVar10 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_128,iVar10,0);
      puVar11 = local_128;
      _guard_xfg_dispatch_icall_nop(local_128,_Src,(longlong)iVar10 * 2);
      iVar8 = (uint)local_120;
    }
    local_128 = (undefined2 *)0x0;
    local_120 = 0xb;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,0);
    puVar14 = local_128;
    local_148 = CONCAT22(local_148._2_2_,0x3f);
    FGenericPlatformString::Convert<char,wchar_t>(local_128,0xb,"/ package/");
    puVar13 = puVar7;
    puVar9 = puVar11;
    if (1 < (int)(uint)local_120) {
      iVar10 = iVar8 + -1;
      if (iVar8 == 0) {
        iVar10 = iVar15;
      }
      if (((uint)local_120 != 0) || (iVar8 = 1, iVar10 == 0)) {
        iVar8 = iVar15;
      }
      local_118 = puVar14;
      local_110 = (uint)local_120;
      local_10c = local_120._4_4_;
      if (local_120._4_4_ < (int)(iVar8 + (uint)local_120 + iVar10)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_118);
      }
      iVar3 = local_110;
      puVar13 = puVar11;
      puVar14 = puVar7;
      puVar9 = local_118;
      iVar8 = local_110;
      if (iVar10 != 0) {
        lVar12 = (longlong)local_110;
        local_110 = local_110 + (uint)(local_110 == 0) + iVar10;
        if (local_10c < local_110) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,iVar3);
        }
        iVar8 = local_110;
        puVar9 = local_118;
        puVar14 = local_118 + (lVar12 - (ulonglong)(iVar3 != 0));
        _guard_xfg_dispatch_icall_nop(puVar14,puVar11,(longlong)iVar10 * 2);
        puVar14[iVar10] = 0;
        puVar14 = (undefined2 *)0x0;
      }
    }
    if (puVar14 != (undefined2 *)0x0) {
      FMemory::Free(puVar14);
    }
    LVar6 = local_108;
    if (puVar13 != (undefined2 *)0x0) {
      FMemory::Free(puVar13);
      LVar6 = local_108;
    }
LAB_14204793e:
    puVar11 = puVar9;
    if (iVar8 == 0) goto LAB_142047945;
  }
  TStringConversion<TStringConvert<wchar_t,char>,128>::
  TStringConversion<TStringConvert<wchar_t,char>,128>(local_e8,puVar9);
  LVar1 = local_100;
  local_148 = 0;
  cVar2 = Scaleform::GFx::Loader::GetMovieInfo
                    (*(undefined8 *)(local_100.QuadPart + 0x180),local_60,local_f8,0);
  if (local_68 != 0) {
    FMemory::Free();
  }
  if (cVar2 != '\0') {
    QueryPerformanceCounter(&local_100);
    puVar7 = &DAT_143f3eda8;
    if (iVar8 != 0) {
      puVar7 = puVar11;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_e8,puVar7);
    uVar5 = *(undefined8 *)(LVar1.QuadPart + 0x180);
    uVar4 = FUN_142087000(LVar6.QuadPart);
    puVar7 = (undefined2 *)Scaleform::GFx::Loader::CreateMovie(uVar5,local_60,uVar4,0);
    if (local_68 != 0) {
      FMemory::Free();
    }
  }
LAB_1420479dc:
  if (puVar11 != (undefined2 *)0x0) {
    FMemory::Free(puVar11);
  }
  return puVar7;
}



// FUNCTION 142047a80 FUN_142047a80 body=1010 status=ok
// SIG undefined FUN_142047a80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142047a80(longlong *param_1,undefined8 param_2,ulonglong *param_3)

{
  short *psVar1;
  uint uVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined2 *puVar13;
  char *pcVar14;
  undefined2 *puVar15;
  undefined2 *puVar16;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined2 *local_148;
  undefined8 local_140;
  undefined2 *local_138;
  uint local_130;
  int local_12c;
  undefined2 *local_128;
  uint local_120;
  int local_11c;
  undefined2 *local_118;
  undefined2 *local_110;
  undefined8 local_108;
  longlong *local_100;
  undefined8 local_f8;
  undefined1 local_e8 [128];
  longlong local_68;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  puVar13 = (undefined2 *)0x0;
  local_148 = (undefined2 *)0x0;
  local_140 = 0;
  pcVar14 = (char *)((*param_3 & 0xfffffffffffffffc) + 0xc);
  local_100 = param_1;
  local_f8 = param_2;
  if ((pcVar14 != (char *)0x0) && (*pcVar14 != '\0')) {
    lVar11 = -1;
    do {
      lVar11 = lVar11 + 1;
    } while (pcVar14[lVar11] != '\0');
    uVar10 = (int)lVar11 + 1;
    local_140 = (ulonglong)uVar10;
    if (0 < (int)uVar10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,0);
    }
    local_158 = CONCAT22(local_158._2_2_,0x3f);
    FGenericPlatformString::Convert<char,wchar_t>(local_148,uVar10,pcVar14,uVar10);
  }
  FString::ToLower(&local_148,&local_138);
  if (local_148 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  cVar4 = FString::StartsWith(&local_138,L"img://",1);
  if (((cVar4 == '\0') && (cVar4 = FString::StartsWith(&local_138,L"imgps://",1), cVar4 == '\0')) &&
     (cVar4 = FString::StartsWith(&local_138,L"simg://",1), cVar4 == '\0')) {
    FString::StartsWith(&local_138,L"simgps://",1);
  }
  local_110 = (undefined2 *)0x0;
  local_108 = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_110,0);
  puVar15 = local_110;
  local_158 = CONCAT22(local_158._2_2_,0x3f);
  local_118 = local_110;
  FGenericPlatformString::Convert<char,wchar_t>(local_110,0xb,"/ package/");
  local_158 = 0xffffffff;
  iVar5 = FUN_141592950(&local_138,&DAT_144f6c2d8,1,0);
  if (local_130 == 0) {
    puVar16 = &DAT_143f3eda8;
    iVar8 = 0;
  }
  else {
    iVar8 = local_130 + -1;
    puVar16 = local_138;
  }
  iVar5 = iVar8 - (iVar5 + 2);
  if (iVar5 < 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = iVar8;
    if (iVar5 < iVar8) {
      iVar9 = iVar5;
    }
  }
  local_130 = 0;
  local_12c = 0;
  local_140 = local_140 & 0xffffffff;
  psVar1 = puVar16 + ((longlong)iVar8 - (longlong)iVar9);
  local_148 = (undefined2 *)0x0;
  if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
    lVar11 = -1;
    do {
      lVar11 = lVar11 + 1;
    } while (psVar1[lVar11] != 0);
    uVar10 = (int)lVar11 + 1;
    local_140 = (ulonglong)uVar10;
    local_130 = uVar10;
    if (0 < (int)uVar10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,0);
      local_130 = (uint)local_140;
      local_12c = local_140._4_4_;
    }
    FGenericPlatformString::Memcpy(local_148,psVar1,(longlong)(int)uVar10 * 2);
  }
  puVar16 = local_148;
  if (1 < (int)(uint)local_108) {
    iVar5 = local_130 - 1;
    if (local_130 == 0) {
      iVar5 = 0;
    }
    if (((uint)local_108 != 0) || (iVar8 = 1, iVar5 == 0)) {
      iVar8 = 0;
    }
    local_128 = puVar15;
    local_118 = (undefined2 *)0x0;
    local_120 = (uint)local_108;
    local_11c = local_108._4_4_;
    if (local_108._4_4_ < (int)(iVar8 + (uint)local_108 + iVar5)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_128);
    }
    uVar10 = local_120;
    puVar13 = local_148;
    puVar16 = local_128;
    local_130 = local_120;
    local_12c = local_11c;
    if (iVar5 != 0) {
      lVar11 = (longlong)(int)local_120;
      local_120 = local_120 + (local_120 == 0) + iVar5;
      if (local_11c < (int)local_120) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,uVar10);
      }
      iVar8 = local_11c;
      uVar2 = local_120;
      puVar16 = local_128;
      puVar13 = local_148;
      puVar15 = local_128 + (lVar11 - (ulonglong)(uVar10 != 0));
      _guard_xfg_dispatch_icall_nop(puVar15,local_148,(longlong)iVar5 * 2);
      puVar15[iVar5] = 0;
      local_130 = uVar2;
      local_12c = iVar8;
    }
  }
  if (local_138 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  local_138 = puVar16;
  if (puVar13 != (undefined2 *)0x0) {
    FMemory::Free(puVar13);
  }
  if (local_118 != (undefined2 *)0x0) {
    FMemory::Free(local_118);
  }
  puVar13 = &DAT_143f3eda8;
  if (local_130 != 0) {
    puVar13 = local_138;
  }
  lVar6 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                    (local_e8,puVar13);
  plVar3 = local_100;
  lVar11 = *local_100;
  uVar7 = FUN_1432c2fb0(&local_118,*(undefined8 *)(lVar6 + 0x88));
  uVar7 = (**(code **)(lVar11 + 0x10))(plVar3,local_f8,uVar7);
  uVar12 = (ulonglong)local_118 & 0xfffffffffffffffc;
  iVar5 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar12 + 8,0xffffffff);
  if (iVar5 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar12);
  }
  if (local_68 != 0) {
    FMemory::Free();
  }
  if (local_138 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return uVar7;
}



// FUNCTION 142047e80 FUN_142047e80 body=1048 status=ok
// SIG undefined FUN_142047e80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_142047e80(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 *param_4,
             longlong param_5,undefined4 param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  DWORD DVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_2b8 [32];
  undefined2 local_298;
  undefined4 local_288;
  undefined4 local_284;
  undefined8 local_280;
  undefined8 local_278;
  code *local_268 [2];
  undefined1 local_258 [32];
  undefined8 local_238;
  undefined4 local_228;
  undefined1 local_218 [80];
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b0;
  longlong *local_1a8;
  undefined1 local_198 [16];
  longlong local_188 [4];
  longlong *local_168;
  int local_158;
  undefined4 local_148;
  undefined1 local_138 [192];
  longlong local_78;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_2b8;
  local_288 = 0xffffffff;
  local_1b8 = 0xffffffff;
  if (param_3 != 0) {
    FUN_14170c210(&local_288,param_3);
    local_1b8 = local_288;
  }
  local_1b0 = *param_4;
  local_1a8 = (longlong *)param_4[1];
  local_288 = 0xffffffff;
  if (local_1a8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1a8 + 1) = (int)local_1a8[1] + 1;
    UNLOCK();
  }
  local_1c8 = param_1;
  local_1c0 = param_2;
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_198,param_5);
  local_148 = param_6;
  local_238 = 0;
  local_228 = 0;
  puVar6 = (undefined8 *)FUN_140438ef0(0xa0,local_258);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &PTR_FUN_144f71af8;
    puVar6[2] = local_1c8;
    puVar6[3] = local_1c0;
    *(undefined4 *)(puVar6 + 4) = local_1b8;
    local_1b8 = 0xffffffff;
    puVar6[5] = local_1b0;
    puVar6[6] = local_1a8;
    if (local_1a8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_1a8 + 1) = (int)local_1a8[1] + 1;
      UNLOCK();
    }
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar6 + 8,local_198);
    *(undefined4 *)(puVar6 + 0x12) = local_148;
  }
  local_280 = 0;
  local_268[0] = FUN_14202c8f0;
  local_278 = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_280,0);
  local_298 = 0x3f;
  FGenericPlatformString::Convert<char,wchar_t>(local_280,0x13,"LoadSWFInMovieClip");
  FUN_1420185f0(local_138,&local_280,local_268);
  if (local_158 != 0) {
    plVar10 = local_188;
    if (local_168 != (longlong *)0x0) {
      plVar10 = local_168;
    }
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x10))(plVar10,0);
    }
  }
  if (local_168 != (longlong *)0x0) {
    FMemory::Free();
  }
  plVar10 = local_1a8;
  if (local_1a8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1a8 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_1a8)(local_1a8);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  FUN_1416f8340(local_1b8);
  FUN_1416f8340(local_288);
  uVar7 = FUN_1420380e0(local_138,local_218);
  FUN_142032420(param_1,uVar7);
  lVar9 = local_78;
  if (local_78 != 0) {
    while ((lVar9 = local_78, local_78 != 0 && (*(char *)(local_78 + 0x58) == '\0'))) {
      cVar4 = FUN_1415ad720(&DAT_1468e2448);
      if ((cVar4 == '\0') &&
         ((DAT_1468c21ae != '\0' && (DVar5 = GetCurrentThreadId(), DVar5 != DAT_1468c21c0)))) {
        ppuVar8 = (undefined **)FUN_14203ca70();
        if (ppuVar8 != (undefined **)0x0) goto LAB_14204811a;
      }
      else {
        ppuVar8 = &PTR_PTR_1464f05c0;
LAB_14204811a:
        FUN_1420714f0(ppuVar8);
      }
      lVar9 = local_78;
      if (local_78 == 0) break;
      if (*(char *)(local_78 + 0x58) == '\0') {
        (**(code **)(**(longlong **)(local_78 + 0x50) + 0x20))(*(longlong **)(local_78 + 0x50),5);
      }
    }
  }
  cVar4 = *(char *)(lVar9 + 0x58);
  while (cVar4 == '\0') {
    (**(code **)(**(longlong **)(lVar9 + 0x50) + 0x20))(*(longlong **)(lVar9 + 0x50),0x5d638865,0);
    cVar4 = *(char *)(lVar9 + 0x58);
  }
  local_284 = 0xffffffff;
  uVar7 = FUN_1416f8720(*(undefined4 *)(lVar9 + 0x60));
  FUN_14170c210(&local_284,uVar7);
  uVar7 = FUN_1416f8720(local_284);
  FUN_1416f8340(local_284);
  FUN_140ce1dc0(local_138);
  plVar10 = (longlong *)param_4[1];
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar10 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  if (*(int *)(param_5 + 0x40) != 0) {
    plVar10 = *(longlong **)(param_5 + 0x30);
    if (*(longlong **)(param_5 + 0x30) == (longlong *)0x0) {
      plVar10 = (longlong *)(param_5 + 0x10);
    }
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x10))(plVar10,0);
    }
  }
  if (*(longlong *)(param_5 + 0x30) != 0) {
    FMemory::Free();
  }
  return uVar7;
}



// FUNCTION 1420482a0 FUN_1420482a0 body=406 status=ok
// SIG undefined FUN_1420482a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_1420482a0(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  char *pcVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_1e8 [32];
  undefined2 local_1c8;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  code *local_198 [2];
  undefined1 local_188 [32];
  undefined8 local_168;
  undefined4 local_158;
  undefined1 local_148 [80];
  undefined1 local_f8 [208];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  pcVar1 = (char *)(*(longlong *)(param_1 + 0x78) + 0x30);
  LOCK();
  cVar2 = *pcVar1;
  if (cVar2 == '\0') {
    *pcVar1 = '\0';
    cVar2 = '\0';
  }
  UNLOCK();
  if (cVar2 < '\x06') {
    cVar2 = FUN_142045c10(*(undefined8 *)(param_1 + 0x78));
    if (cVar2 == '\0') {
      local_168 = 0;
      local_158 = 0;
      local_1a8 = param_1;
      uStack_1a0 = param_3;
      puVar3 = (undefined8 *)FUN_140438ef0(0x18,local_188);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &PTR_FUN_143f77c18;
        *(undefined4 *)(puVar3 + 1) = (undefined4)local_1a8;
        *(undefined4 *)((longlong)puVar3 + 0xc) = local_1a8._4_4_;
        *(undefined4 *)(puVar3 + 2) = (undefined4)uStack_1a0;
        *(undefined4 *)((longlong)puVar3 + 0x14) = uStack_1a0._4_4_;
      }
      local_1b8 = 0;
      local_198[0] = FUN_14202caf0;
      local_1b0 = 0x1a;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b8,0);
      local_1c8 = 0x3f;
      FGenericPlatformString::Convert<char,wchar_t>(local_1b8,0x1a,"FGFxObject::LocalToGlobal");
      FUN_142018510(local_f8,&local_1b8,local_198);
      uVar4 = FUN_142037d70(local_f8,local_148);
      FUN_1420326d0(param_1,uVar4);
      FUN_1420385a0(local_f8,param_2);
      FUN_140ce1dc0(local_f8);
    }
    else {
      FUN_142048440(param_1,param_2,param_3);
    }
  }
  else {
    *param_2 = (undefined4)DAT_1468b5d88;
    param_2[1] = DAT_1468b5d88._4_4_;
  }
  return param_2;
}



// FUNCTION 142048440 FUN_142048440 body=681 status=ok
// SIG undefined FUN_142048440(void)

float * FUN_142048440(longlong param_1,float *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  float fVar2;
  char cVar3;
  undefined1 *puVar4;
  longlong lVar5;
  undefined8 in_stack_fffffffffffffe98;
  undefined4 uVar6;
  float local_148;
  float fStack_144;
  undefined8 local_140;
  undefined8 uStack_138;
  longlong *local_130;
  uint local_128;
  undefined8 local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  longlong *local_100;
  uint local_f8;
  double local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  longlong *local_d0;
  uint local_c8;
  double local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  longlong *local_a0;
  uint local_98;
  undefined8 local_90;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  
  fVar2 = DAT_1468b5d88._4_4_;
  uVar6 = (undefined4)((ulonglong)in_stack_fffffffffffffe98 >> 0x20);
  uVar1 = *(undefined4 *)(param_1 + 0xa0);
  *param_2 = (float)DAT_1468b5d88;
  param_2[1] = fVar2;
  if (((byte)uVar1 & 0x8f) == 10) {
    local_148 = (float)param_3;
    local_a0 = (longlong *)0x0;
    local_98 = 0;
    local_68 = 0;
    local_60 = 0;
    local_38 = 0;
    local_b0 = 0xffffffffffffffff;
    uStack_a8 = 0xffffffffffffffff;
    local_30 = 0;
    local_78 = 0xffffffffffffffff;
    uStack_70 = 0xffffffffffffffff;
    local_48 = 0xffffffffffffffff;
    uStack_40 = 0xffffffffffffffff;
    FUN_142052be0(&local_78,(double)local_148);
    fStack_144 = (float)((ulonglong)param_3 >> 0x20);
    FUN_142052be0(&local_48,(double)fStack_144);
    lVar5 = 2;
    FUN_142031710(*(undefined8 *)(param_1 + 0x78),&local_b0,PTR_s_flash_geom_Point_1464f0670,
                  &local_78,CONCAT44(uVar6,2));
    local_140 = 0xffffffffffffffff;
    uStack_138 = 0xffffffffffffffff;
    local_130 = (longlong *)0x0;
    local_128 = 0;
    cVar3 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x30))
                      (*(longlong **)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa8),&local_140,
                       "localToGlobal",&local_b0,1,
                       ((byte)*(undefined4 *)(param_1 + 0xa0) & 0x8f) == 10);
    if (cVar3 != '\0') {
      local_d0 = (longlong *)0x0;
      local_e0 = 0xffffffffffffffff;
      uStack_d8 = 0xffffffffffffffff;
      local_c8 = 0;
      local_110 = 0xffffffffffffffff;
      uStack_108 = 0xffffffffffffffff;
      local_100 = (longlong *)0x0;
      local_f8 = 0;
      (**(code **)(*local_130 + 0x20))
                (local_130,local_120,&DAT_144f66424,&local_e0,((byte)local_128 & 0x8f) == 10);
      (**(code **)(*local_130 + 0x20))
                (local_130,local_120,&DAT_144f6643c,&local_110,((byte)local_128 & 0x8f) == 10);
      *param_2 = (float)local_c0;
      param_2[1] = (float)local_f0;
      if ((local_f8 >> 6 & 1) != 0) {
        (**(code **)(*local_100 + 0x10))(local_100,&local_110,local_f0);
        local_100 = (longlong *)0x0;
      }
      local_f8 = 0;
      if ((local_c8 >> 6 & 1) != 0) {
        (**(code **)(*local_d0 + 0x10))(local_d0,&local_e0,local_c0);
      }
    }
    if ((local_128 >> 6 & 1) != 0) {
      (**(code **)(*local_130 + 0x10))(local_130,&local_140,local_120);
      local_130 = (longlong *)0x0;
    }
    local_128 = 0;
    puVar4 = &stack0xffffffffffffffe8;
    do {
      lVar5 = lVar5 + -1;
      if ((*(uint *)(puVar4 + -0x18) >> 6 & 1) != 0) {
        (**(code **)(**(longlong **)(puVar4 + -0x20) + 0x10))
                  (*(longlong **)(puVar4 + -0x20),puVar4 + -0x30,*(undefined8 *)(puVar4 + -0x10));
        *(undefined8 *)(puVar4 + -0x20) = 0;
      }
      *(undefined4 *)(puVar4 + -0x18) = 0;
      puVar4 = puVar4 + -0x30;
    } while (lVar5 != 0);
    if ((local_98 >> 6 & 1) != 0) {
      (**(code **)(*local_a0 + 0x10))(local_a0,&local_b0,local_90);
    }
  }
  return param_2;
}



// FUNCTION 1420486f0 FUN_1420486f0 body=149 status=ok
// SIG undefined FUN_1420486f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1420486f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 auStack_1058 [32];
  undefined8 local_1038;
  undefined8 local_1030;
  undefined8 local_1028;
  undefined1 local_1018 [4096];
  ulonglong local_18;
  undefined8 local_10;
  
  local_10 = 0x142048705;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1058;
  puVar1 = (undefined8 *)__local_stdio_printf_options();
  local_1018[0] = 0;
  local_1030 = 0;
  local_1038 = param_3;
  local_1028 = param_4;
  __stdio_common_vsnprintf_s(*puVar1,local_1018,0x1000,0xffffffffffffffff);
  return;
}



// FUNCTION 142048790 FUN_142048790 body=88 status=ok
// SIG undefined FUN_142048790(void)

bool FUN_142048790(void)

{
  int *piVar1;
  char cVar2;
  DWORD DVar3;
  
  piVar1 = DAT_146acc9a8;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    if (DVar3 != DAT_1468c21c0) {
      return piVar1[1] != 0;
    }
  }
  return *piVar1 != 0;
}



// FUNCTION 142048800 FUN_142048800 body=239 status=ok
// SIG undefined FUN_142048800(void)

void FUN_142048800(void)

{
  char cVar1;
  DWORD DVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  FUN_141ee24f0(0);
  lVar4 = DAT_146accd98;
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  lVar5 = 4;
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar2 = GetCurrentThreadId();
    if (DVar2 == DAT_1468c21c0) goto LAB_14204884c;
    lVar3 = 4;
  }
  else {
LAB_14204884c:
    lVar3 = 0;
  }
  if (*(int *)(lVar3 + lVar4) == 0) {
    FUN_14202d990(DAT_146accd68);
    FUN_14204e110(DAT_146accd68);
  }
  LOCK();
  DAT_146accd48 = 1;
  UNLOCK();
  lVar4 = FUN_142039c70();
  if (lVar4 != 0) {
    FUN_14202de10(lVar4);
  }
  if (DAT_146accd68 != 0) {
    FUN_1420329c0();
  }
  lVar4 = DAT_146accd10;
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar2 = GetCurrentThreadId();
    if (DVar2 != DAT_1468c21c0) goto LAB_1420488ce;
  }
  lVar5 = 0;
LAB_1420488ce:
  if (*(int *)(lVar5 + lVar4) != 0) {
    FUN_142037010();
  }
  FUN_141ee24f0(0);
  FUN_14204b1f0();
  return;
}



// FUNCTION 1420488f0 FUN_1420488f0 body=246 status=ok
// SIG undefined FUN_1420488f0(void)

void FUN_1420488f0(void)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  LOCK();
  DAT_146accd48 = 1;
  UNLOCK();
  TBaseMulticastDelegate<void>::Broadcast(&DAT_1464f0688);
  lVar4 = FUN_142039c70();
  lVar1 = DAT_146acccb0;
  if (lVar4 == 0) goto LAB_1420489d2;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    lVar5 = 4;
    if (DVar3 == DAT_1468c21c0) goto LAB_142048961;
  }
  else {
LAB_142048961:
    lVar5 = 0;
  }
  if (*(int *)(lVar5 + lVar1) != 0) {
    FUN_142036e50();
  }
  FUN_141ee24f0(0);
  FUN_14202de10(lVar4);
  local_28 = 0;
  local_18 = 0;
  puVar6 = (undefined8 *)FUN_140438ef0(0x10,local_48);
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[1] = lVar4;
    *puVar6 = &PTR_FUN_143f77b70;
  }
  local_58[0] = &LAB_14202c200;
  FUN_14204c280(local_58);
  FUN_1420329c0(lVar4);
LAB_1420489d2:
  LOCK();
  DAT_146accd48 = 0;
  UNLOCK();
  return;
}



// FUNCTION 1420489f0 FUN_1420489f0 body=934 status=ok
// SIG undefined FUN_1420489f0(void)

ulonglong FUN_1420489f0(void)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  char cVar4;
  DWORD DVar5;
  BOOL BVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  DWORD *pDVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  longlong *plVar14;
  longlong lVar15;
  bool bVar16;
  LARGE_INTEGER local_res18;
  LARGE_INTEGER local_res20;
  longlong local_48;
  undefined8 local_40;
  
  plVar9 = (longlong *)0x0;
  uVar13 = 0;
  LOCK();
  bVar16 = DAT_146accd48 == 0;
  if (bVar16) {
    DAT_146accd48 = 0;
  }
  else {
    uVar13 = (ulonglong)DAT_146accd48;
  }
  UNLOCK();
  if ((bVar16) && (DAT_1468c217e == '\0')) {
    lVar8 = FUN_142039c70();
    uVar13 = 0;
    if (lVar8 != 0) {
      if ((DAT_146ac3ac5 == '\0') &&
         (((cVar4 = FUN_1415ad720(&DAT_1468e2448), cVar4 != '\0' || (DAT_1468c21ae == '\0')) ||
          (DVar5 = GetCurrentThreadId(), DVar5 == DAT_1468c21c0)))) {
        FBaseGraphTask::GetSmallTaskAllocator();
        QueryPerformanceCounter(&local_res20);
        if (*(longlong **)(lVar8 + 0x40) != (longlong *)0x0) {
          plVar9 = (longlong *)(**(code **)(**(longlong **)(lVar8 + 0x40) + 0x128))();
          while (BVar6 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar8 + 0x158)), BVar6 == 0) {
            (**(code **)(*plVar9 + 0x48))(plVar9);
            FUN_1416b1810(0);
          }
          (**(code **)(**(longlong **)(lVar8 + 0x40) + 0x58))();
          LeaveCriticalSection((LPCRITICAL_SECTION)(lVar8 + 0x158));
        }
        QueryPerformanceCounter(&local_res18);
        DAT_146ac3af4 = DAT_146ac3af4 + (local_res18.s.LowPart - local_res20._0_4_);
      }
      else {
        pDVar10 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
        plVar11 = TlsGetValue(*pDVar10);
        if (plVar11 == (longlong *)0x0) {
          plVar11 = (longlong *)operator_new(0x18);
          if (plVar11 != (longlong *)0x0) {
            *plVar11 = 0;
            plVar11[1] = 0;
            *(undefined4 *)(plVar11 + 2) = 0;
            plVar9 = plVar11;
          }
          TlsSetValue(*pDVar10,plVar9);
          plVar11 = plVar9;
        }
        plVar9 = (longlong *)plVar11[1];
        if (plVar9 == (longlong *)0x0) {
          plVar9 = (longlong *)*plVar11;
          if (plVar9 == (longlong *)0x0) {
            lVar15 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar10 + 2);
            plVar11[1] = lVar15;
            if (lVar15 == 0) {
              puVar12 = (undefined8 *)FMemory::Malloc(0x2000,0);
              plVar11[1] = (longlong)puVar12;
              lVar15 = 0x1f;
              do {
                puVar3 = puVar12 + 0x20;
                *puVar12 = puVar3;
                lVar15 = lVar15 + -1;
                puVar12 = puVar3;
              } while (lVar15 != 0);
              *puVar3 = 0;
            }
            plVar9 = (longlong *)plVar11[1];
            iVar7 = 0x20;
            *(undefined4 *)(plVar11 + 2) = 0x20;
          }
          else {
            iVar7 = 0x20;
            plVar11[1] = (longlong)plVar9;
            *(undefined4 *)(plVar11 + 2) = 0x20;
            *plVar11 = 0;
          }
        }
        else {
          iVar7 = (int)plVar11[2];
        }
        plVar11[1] = *plVar9;
        *(int *)(plVar11 + 2) = iVar7 + -1;
        *plVar9 = (longlong)&PTR_FUN_143f3edd8;
        *(undefined4 *)(plVar9 + 1) = 0xff;
        *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
        *plVar9 = (longlong)&PTR_FUN_144f712b0;
        *(undefined1 *)(plVar9 + 3) = 0;
        plVar9[4] = 0;
        plVar9[2] = lVar8;
        lVar15 = plVar9[4];
        piVar2 = (int *)(lVar15 + 0x48);
        if (lVar15 != 0) {
          LOCK();
          *piVar2 = *piVar2 + 1;
          UNLOCK();
        }
        FUN_140445100(plVar9,0,0xff,1,0,0);
        if (lVar15 != 0) {
          LOCK();
          iVar7 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            FGraphEvent::Recycle(lVar15);
          }
        }
      }
      uVar13 = DAT_146b17150;
      if (*(longlong *)(DAT_146b17150 + 0x7b0) != 0) {
        uVar13 = 0;
        LOCK();
        bVar16 = DAT_146accd48 == 0;
        if (bVar16) {
          DAT_146accd48 = 0;
        }
        else {
          uVar13 = (ulonglong)DAT_146accd48;
        }
        UNLOCK();
        if (((bVar16) && (DAT_1468c217e == '\0')) && (*(longlong *)(lVar8 + 0x40) != 0)) {
          plVar9 = *(longlong **)(lVar8 + 0xf8);
          plVar11 = plVar9 + (longlong)*(int *)(lVar8 + 0x100) * 2;
          local_48 = 0;
          local_40 = 0;
          for (; plVar9 != plVar11; plVar9 = plVar9 + 2) {
            plVar14 = (longlong *)plVar9[1];
            lVar15 = *plVar9;
            if (plVar14 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
              UNLOCK();
            }
            cVar4 = FWeakObjectPtr::IsValid(lVar15 + 0xb8);
            if (plVar14 != (longlong *)0x0) {
              LOCK();
              plVar1 = plVar14 + 1;
              lVar15 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar15 == 1) {
                (**(code **)*plVar14)(plVar14);
                LOCK();
                piVar2 = (int *)((longlong)plVar14 + 0xc);
                iVar7 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar7 == 1) {
                  (**(code **)(*plVar14 + 8))(plVar14);
                }
              }
            }
            uVar13 = local_40;
            if (cVar4 != '\0') {
              lVar15 = (longlong)(int)local_40;
              iVar7 = (int)local_40 + 1;
              local_40 = CONCAT44(local_40._4_4_,iVar7);
              if (local_40._4_4_ < iVar7) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_48,uVar13 & 0xffffffff);
              }
              plVar14 = (longlong *)(lVar15 * 0x10 + local_48);
              *plVar14 = *plVar9;
              lVar15 = plVar9[1];
              plVar14[1] = lVar15;
              if (lVar15 != 0) {
                LOCK();
                *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
                UNLOCK();
              }
            }
          }
          uVar13 = FUN_14204b9f0(lVar8,&local_48,0);
        }
      }
    }
  }
  return uVar13;
}



// FUNCTION 142048da0 FUN_142048da0 body=368 status=ok
// SIG undefined FUN_142048da0(void)

ulonglong FUN_142048da0(void)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined8 *local_38;
  undefined8 local_30;
  undefined8 *local_28;
  int local_20;
  undefined4 local_1c;
  
  uVar3 = DAT_146b17150;
  if (*(longlong *)(DAT_146b17150 + 0x7b0) != 0) {
    lVar2 = FUN_142039c70();
    uVar3 = 0;
    if (lVar2 != 0) {
      uVar3 = 0;
      LOCK();
      bVar8 = DAT_146accd48 == 0;
      uVar7 = 0;
      if (bVar8) {
        DAT_146accd48 = 0;
      }
      else {
        uVar3 = (ulonglong)DAT_146accd48;
      }
      UNLOCK();
      if ((((bVar8) && (DAT_1468c217e == '\0')) && (*(longlong *)(lVar2 + 0x40) != 0)) &&
         ((*(longlong *)(lVar2 + 0x198) != 0 &&
          (uVar3 = *(ulonglong *)(lVar2 + 0x1a8), 0 < *(int *)(uVar3 + 0x18))))) {
        AcquireSRWLockShared((PSRWLOCK)(lVar2 + 0xf0));
        local_38 = (undefined8 *)0x0;
        iVar5 = *(int *)(*(longlong *)(lVar2 + 0x1a8) + 0x18);
        lVar6 = *(longlong *)(*(longlong *)(lVar2 + 0x1a8) + 0x10);
        local_30._0_4_ = iVar5;
        if (iVar5 != 0) {
          TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_38,iVar5,0);
          lVar6 = lVar6 - (longlong)local_38;
          puVar4 = local_38;
          do {
            *puVar4 = *(undefined8 *)(lVar6 + (longlong)puVar4);
            lVar1 = *(longlong *)(lVar6 + 8 + (longlong)puVar4);
            puVar4[1] = lVar1;
            if (lVar1 != 0) {
              LOCK();
              *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
              UNLOCK();
            }
            puVar4 = puVar4 + 2;
            iVar5 = iVar5 + -1;
            uVar7 = local_30._4_4_;
          } while (iVar5 != 0);
        }
        iVar5 = (int)local_30;
        puVar4 = local_38;
        ReleaseSRWLockShared((PSRWLOCK)(lVar2 + 0xf0));
        local_38 = (undefined8 *)0x0;
        local_30 = 0;
        local_28 = puVar4;
        local_20 = iVar5;
        local_1c = uVar7;
        FUN_14204b9f0(lVar2,&local_28,1);
        uVar3 = TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
                ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>
                          (&local_38);
      }
    }
  }
  return uVar3;
}



// FUNCTION 142048f10 FUN_142048f10 body=606 status=ok
// SIG undefined FUN_142048f10(void)

ulonglong FUN_142048f10(void)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  char cVar4;
  DWORD DVar5;
  BOOL BVar6;
  longlong lVar7;
  longlong *plVar8;
  DWORD *pDVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  int iVar14;
  bool bVar15;
  LARGE_INTEGER local_res8;
  longlong local_res10;
  LARGE_INTEGER local_res18;
  undefined8 local_res20;
  
  plVar8 = (longlong *)0x0;
  uVar13 = 0;
  LOCK();
  bVar15 = DAT_146accd48 == 0;
  if (bVar15) {
    DAT_146accd48 = 0;
  }
  else {
    uVar13 = (ulonglong)DAT_146accd48;
  }
  UNLOCK();
  if ((bVar15) && (DAT_1468c217e == '\0')) {
    lVar7 = FUN_142039c70();
    uVar13 = 0;
    if (lVar7 != 0) {
      if ((DAT_146ac3ac5 == '\0') &&
         (((cVar4 = FUN_1415ad720(&DAT_1468e2448), cVar4 != '\0' || (DAT_1468c21ae == '\0')) ||
          (DVar5 = GetCurrentThreadId(), DVar5 == DAT_1468c21c0)))) {
        FBaseGraphTask::GetSmallTaskAllocator();
        QueryPerformanceCounter(&local_res18);
        if (*(longlong **)(lVar7 + 0x40) != (longlong *)0x0) {
          plVar8 = (longlong *)(**(code **)(**(longlong **)(lVar7 + 0x40) + 0x128))();
          while (BVar6 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar7 + 0x158)), BVar6 == 0) {
            (**(code **)(*plVar8 + 0x48))(plVar8);
            FUN_1416b1810(0);
          }
          (**(code **)(**(longlong **)(lVar7 + 0x40) + 0x60))();
          LeaveCriticalSection((LPCRITICAL_SECTION)(lVar7 + 0x158));
        }
        QueryPerformanceCounter(&local_res8);
        uVar13 = (ulonglong)(local_res8.s.LowPart - local_res18._0_4_);
        DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res18._0_4_);
      }
      else {
        pDVar9 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
        plVar10 = TlsGetValue(*pDVar9);
        if (plVar10 == (longlong *)0x0) {
          plVar10 = (longlong *)operator_new(0x18);
          if (plVar10 != (longlong *)0x0) {
            *plVar10 = 0;
            plVar10[1] = 0;
            *(undefined4 *)(plVar10 + 2) = 0;
            plVar8 = plVar10;
          }
          TlsSetValue(*pDVar9,plVar8);
          plVar10 = plVar8;
        }
        plVar8 = (longlong *)plVar10[1];
        if (plVar8 == (longlong *)0x0) {
          plVar8 = (longlong *)*plVar10;
          if (plVar8 == (longlong *)0x0) {
            lVar11 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar9 + 2);
            plVar10[1] = lVar11;
            if (lVar11 == 0) {
              puVar12 = (undefined8 *)FMemory::Malloc(0x2000,0);
              plVar10[1] = (longlong)puVar12;
              lVar11 = 0x1f;
              do {
                puVar2 = puVar12 + 0x20;
                *puVar12 = puVar2;
                lVar11 = lVar11 + -1;
                puVar12 = puVar2;
              } while (lVar11 != 0);
              *puVar2 = 0;
            }
            plVar8 = (longlong *)plVar10[1];
            iVar14 = 0x20;
            *(undefined4 *)(plVar10 + 2) = 0x20;
          }
          else {
            iVar14 = 0x20;
            plVar10[1] = (longlong)plVar8;
            *(undefined4 *)(plVar10 + 2) = 0x20;
            *plVar10 = 0;
          }
        }
        else {
          iVar14 = (int)plVar10[2];
        }
        plVar10[1] = *plVar8;
        *(int *)(plVar10 + 2) = iVar14 + -1;
        *plVar8 = (longlong)&PTR_FUN_143f3edd8;
        *(undefined4 *)(plVar8 + 1) = 0xff;
        local_res20 = 0;
        *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
        *plVar8 = (longlong)&PTR_FUN_144f712c0;
        *(undefined1 *)(plVar8 + 3) = 0;
        plVar8[4] = 0;
        plVar8[2] = lVar7;
        lVar11 = plVar8[4];
        puVar1 = (uint *)(lVar11 + 0x48);
        if (lVar11 != 0) {
          LOCK();
          *puVar1 = *puVar1 + 1;
          UNLOCK();
        }
        local_res10 = lVar11;
        uVar13 = FUN_140445100(plVar8,0,0xff,1,0);
        if (lVar11 != 0) {
          LOCK();
          uVar3 = *puVar1;
          uVar13 = (ulonglong)uVar3;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if (uVar3 == 1) {
            uVar13 = FGraphEvent::Recycle(local_res10);
          }
        }
      }
      *(int *)(lVar7 + 0xd8) = *(int *)(lVar7 + 0xd8) + 1;
    }
  }
  return uVar13;
}



// FUNCTION 142049170 FUN_142049170 body=323 status=ok
// SIG undefined FUN_142049170(void)

void FUN_142049170(void)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  lVar2 = FUN_142039c70();
  if (lVar2 != 0) {
    iVar1 = *(int *)(lVar2 + 0x148);
    *(int *)(lVar2 + 0x148) = iVar1 + 1;
    if (*(int *)(lVar2 + 0x14c) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar2 + 0x140,iVar1);
    }
    puVar3 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar2 + 0x140));
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)0x0;
    }
    else {
      *puVar3 = 0;
      puVar3[1] = 0;
    }
    plVar4 = (longlong *)0x0;
    local_68 = 0;
    uStack_60 = 0;
    Chaos::FParticleNonFrequentData::SetGeometry(puVar3,&local_68);
    local_28 = 0;
    local_18 = 0;
    puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_48);
    if (puVar3 != (undefined8 *)0x0) {
      puVar3[1] = lVar2;
      *puVar3 = &PTR_FUN_143f77b70;
    }
    local_58[0] = &LAB_14202c930;
    FUN_14204c280(local_58);
    FUN_14204d1e0(lVar2);
    plVar5 = plVar4;
    if (*(longlong *)(lVar2 + 0x198) != 0) {
      plVar5 = *(longlong **)(*(longlong *)(lVar2 + 0x198) + 0x50);
    }
    if ((plVar5 != (longlong *)0x0) && (lVar2 = (**(code **)(*plVar5 + 0x30))(plVar5), lVar2 != 0))
    {
      lVar2 = (**(code **)(*plVar5 + 0x30))(plVar5);
      plVar4 = *(longlong **)(lVar2 + 400);
    }
    if (plVar4 != (longlong *)0x0) {
      iVar1 = FUN_14046e5c0(plVar4);
      LOCK();
      UNLOCK();
      bVar6 = DAT_146accf20 != iVar1;
      DAT_146accf20 = iVar1;
      if (bVar6) {
        TBaseMulticastDelegate<void,enum_EWmfMediaSamplerClockEvent>::Broadcast
                  (&DAT_1464f0770,iVar1);
      }
    }
  }
  return;
}



// FUNCTION 1420492c0 FUN_1420492c0 body=71 status=ok
// SIG undefined FUN_1420492c0(void)

void FUN_1420492c0(undefined4 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_142039c70();
  if (lVar1 != 0) {
    FUN_14204f3a0(lVar1,param_1);
    if (*(int *)(lVar1 + 0x148) == 0) {
      FUN_14202de10(lVar1);
      FUN_14202e010(lVar1);
    }
  }
  return;
}



// FUNCTION 142049310 FUN_142049310 body=71 status=ok
// SIG undefined FUN_142049310(void)

ulonglong FUN_142049310(undefined4 param_1)

{
  ulonglong uVar1;
  bool bVar2;
  
  uVar1 = 0;
  LOCK();
  bVar2 = DAT_146accd48 == 0;
  if (bVar2) {
    DAT_146accd48 = 0;
  }
  else {
    uVar1 = (ulonglong)DAT_146accd48;
  }
  UNLOCK();
  if ((bVar2) && (DAT_1468c217e == '\0')) {
    uVar1 = FUN_142039c70();
    if ((uVar1 != 0) && (*(int *)(uVar1 + 0x60) != 0)) {
      uVar1 = FUN_1420580f0(uVar1,param_1);
    }
  }
  return uVar1;
}



// FUNCTION 142049360 FUN_142049360 body=1993 status=ok
// SIG undefined FUN_142049360(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142049360(undefined8 param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined2 *puVar3;
  void *pvVar4;
  int iVar5;
  char cVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  void **ppvVar13;
  char *pcVar14;
  longlong lVar15;
  void *pvVar16;
  int iVar17;
  void *pvVar18;
  undefined1 auStack_308 [32];
  undefined8 *local_2e8;
  undefined8 local_2e0;
  undefined1 local_2d8;
  void *local_2c8;
  int local_2c0;
  int local_2bc;
  void *local_2b8;
  int local_2b0;
  int local_2ac;
  longlong local_2a8;
  int local_2a0;
  int local_29c;
  undefined8 local_298;
  undefined8 uStack_290;
  longlong *local_288;
  uint local_280;
  undefined8 local_278;
  void *local_268;
  int local_260;
  int local_25c;
  undefined8 local_258;
  undefined8 uStack_250;
  longlong *local_248;
  uint local_240;
  undefined8 local_238;
  undefined8 local_228;
  undefined8 uStack_220;
  longlong *local_218;
  uint local_210;
  undefined8 *local_208;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  longlong *local_1e8;
  uint local_1e0;
  char *local_1d8;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  longlong *local_1b8;
  uint local_1b0;
  undefined8 local_1a8;
  undefined8 local_198;
  undefined8 uStack_190;
  longlong *local_188;
  uint local_180;
  undefined8 local_178;
  undefined1 local_168 [256];
  longlong local_68;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_308;
  lVar10 = 0;
  local_1b8 = (longlong *)0x0;
  local_1b0 = 0;
  local_1c8 = 0xffffffffffffffff;
  uStack_1c0 = 0xffffffffffffffff;
  local_2e8 = (undefined8 *)
              CONCAT71(local_2e8._1_7_,((byte)*(undefined4 *)(param_3 + 0x18) & 0x8f) == 10);
  cVar6 = (**(code **)(**(longlong **)(param_3 + 0x10) + 0x20))
                    (*(longlong **)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x20),"currentTarget",
                     &local_1c8);
  iVar8 = 0;
  if (cVar6 != '\0') {
    local_258 = 0xffffffffffffffff;
    uStack_250 = 0xffffffffffffffff;
    local_248 = (longlong *)0x0;
    local_240 = 0;
    local_1f8 = 0xffffffffffffffff;
    uStack_1f0 = 0xffffffffffffffff;
    local_1e8 = (longlong *)0x0;
    local_1e0 = 0;
    local_2e8 = (undefined8 *)CONCAT71(local_2e8._1_7_,((byte)local_1b0 & 0x8f) == 10);
    cVar6 = (**(code **)(*local_1b8 + 0x20))(local_1b8,local_1a8,"content",&local_258);
    if (cVar6 != '\0') {
      local_2e8 = (undefined8 *)CONCAT71(local_2e8._1_7_,((byte)local_240 & 0x8f) == 10);
      cVar6 = (**(code **)(*local_248 + 0x20))(local_248,local_238,&DAT_144f6b9b4,&local_1f8);
      if (cVar6 != '\0') {
        local_198 = 0xffffffffffffffff;
        uStack_190 = 0xffffffffffffffff;
        local_188 = (longlong *)0x0;
        local_180 = 0;
        local_228 = 0xffffffffffffffff;
        uStack_220 = 0xffffffffffffffff;
        local_218 = (longlong *)0x0;
        local_210 = 0;
        cVar6 = (**(code **)(*local_248 + 0xd0))(local_248,local_238,&local_198);
        if (cVar6 != '\0') {
          local_2e8 = (undefined8 *)CONCAT71(local_2e8._1_7_,((byte)local_180 & 0x8f) == 10);
          cVar6 = (**(code **)(*local_188 + 0x20))(local_188,local_178,&DAT_144f6ccc4,&local_228);
          if (cVar6 != '\0') {
            puVar7 = local_208;
            if ((local_210 >> 6 & 1) != 0) {
              puVar7 = (undefined8 *)*local_208;
            }
            TStringConversion<TStringConvert<char,wchar_t>,128>::
            TStringConversion<TStringConvert<char,wchar_t>,128>(local_168,puVar7);
            if (local_68 != 0) {
              FMemory::Free();
            }
          }
        }
        local_298 = 0xffffffffffffffff;
        uStack_290 = 0xffffffffffffffff;
        local_288 = (longlong *)0x0;
        local_280 = 0;
        plVar11 = *(longlong **)(*param_2 + 0x98);
        cVar6 = (**(code **)(*plVar11 + 0xd0))(plVar11,*(undefined8 *)(*param_2 + 0xa8),&local_298);
        if ((cVar6 != '\0') && ((local_280 & 0x8f) - 8 < 4)) {
          local_2d8 = (local_280 & 0x8f) == 10;
          local_2e8 = (undefined8 *)(*param_2 + 0x88);
          local_2e0 = 1;
          cVar6 = (**(code **)(*local_288 + 0x30))(local_288,local_278,0,"removeChild");
          if (cVar6 != '\0') {
            local_2d8 = ((byte)local_280 & 0x8f) == 10;
            local_2e8 = &local_258;
            local_2e0 = 1;
            cVar6 = (**(code **)(*local_288 + 0x30))(local_288,local_278,0,"addChild");
            if (cVar6 != '\0') {
              FUN_1410b5e10(*param_2 + 0x88,&local_258);
              pcVar14 = local_1d8;
              if ((local_1e0 >> 6 & 1) != 0) {
                pcVar14 = *(char **)local_1d8;
              }
              local_2a8 = 0;
              local_29c = 0;
              iVar17 = iVar8;
              if ((pcVar14 != (char *)0x0) && (*pcVar14 != '\0')) {
                lVar10 = -1;
                do {
                  lVar10 = lVar10 + 1;
                } while (pcVar14[lVar10] != '\0');
                iVar9 = (int)lVar10 + 1;
                local_2a0 = iVar9;
                if (0 < iVar9) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2a8,0);
                }
                iVar17 = local_29c;
                iVar8 = local_2a0;
                lVar10 = local_2a8;
                local_2e8 = (undefined8 *)CONCAT62(local_2e8._2_6_,0x3f);
                FGenericPlatformString::Convert<char,wchar_t>(local_2a8,iVar9,pcVar14,iVar9);
              }
              lVar12 = *param_2;
              plVar11 = (longlong *)(lVar12 + 0x18);
              if (plVar11 == &local_2a8) {
                if (lVar10 != 0) {
                  FMemory::Free(lVar10);
                }
              }
              else {
                if (*plVar11 != 0) {
                  FMemory::Free();
                }
                *plVar11 = lVar10;
                *(int *)(lVar12 + 0x20) = iVar8;
                *(int *)(lVar12 + 0x24) = iVar17;
              }
              lVar10 = *param_2;
              lVar12 = *(longlong *)(lVar10 + 0xd0);
              if (lVar12 == 0) {
                FString::operator=(lVar10 + 0x28,lVar10 + 0x18);
              }
              else {
                local_2c0 = *(int *)(lVar12 + 0x30);
                lVar15 = (longlong)local_2c0;
                pvVar18 = *(void **)(lVar12 + 0x28);
                local_2c8 = (void *)0x0;
                TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                          (&local_2c8,(2 - (uint)(local_2c0 != 0)) + local_2c0,0);
                pvVar16 = local_2c8;
                _guard_xfg_dispatch_icall_nop(local_2c8,pvVar18,lVar15 * 2);
                iVar8 = local_2c0;
                lVar12 = (longlong)local_2c0;
                local_2c0 = (2 - (uint)(local_2c0 != 0)) + local_2c0;
                if (local_2bc < local_2c0) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2c8,iVar8);
                  pvVar16 = local_2c8;
                }
                pvVar18 = (void *)0x0;
                iVar17 = 0;
                puVar3 = (undefined2 *)((longlong)pvVar16 + (lVar12 - (ulonglong)(iVar8 != 0)) * 2);
                *puVar3 = 0x2e;
                puVar3[1] = 0;
                iVar8 = *(int *)(lVar10 + 0x20);
                if (local_2c0 < 2) {
                  pvVar4 = *(void **)(lVar10 + 0x18);
                  local_268 = (void *)0x0;
                  local_260 = iVar8;
                  if (iVar8 != 0) {
                    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_268,iVar8);
                    pvVar18 = local_268;
                    _guard_xfg_dispatch_icall_nop(local_268,pvVar4,(longlong)iVar8 * 2);
                    iVar17 = local_25c;
                    iVar8 = local_260;
                  }
                }
                else {
                  iVar9 = iVar8 + -1;
                  if (iVar8 == 0) {
                    iVar9 = iVar17;
                  }
                  if ((local_2c0 == 0) && (iVar9 != 0)) {
                    iVar17 = 1;
                  }
                  local_2c8 = (void *)0x0;
                  local_2b8 = pvVar16;
                  local_2b0 = local_2c0;
                  local_2ac = local_2bc;
                  if (local_2bc < local_2c0 + iVar17 + iVar9) {
                    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_2b8);
                  }
                  iVar5 = local_2b0;
                  pvVar4 = *(void **)(lVar10 + 0x18);
                  pvVar16 = pvVar18;
                  pvVar18 = local_2b8;
                  iVar17 = local_2ac;
                  iVar8 = local_2b0;
                  if (iVar9 != 0) {
                    lVar10 = (longlong)local_2b0;
                    local_2b0 = iVar9 + (uint)(local_2b0 == 0) + local_2b0;
                    if (local_2ac < local_2b0) {
                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2b8,iVar5,0);
                    }
                    iVar8 = local_2b0;
                    pvVar18 = local_2b8;
                    pvVar16 = (void *)((longlong)local_2b8 + (lVar10 - (ulonglong)(iVar5 != 0)) * 2)
                    ;
                    _guard_xfg_dispatch_icall_nop(pvVar16,pvVar4,(longlong)iVar9 * 2);
                    *(undefined2 *)((longlong)iVar9 * 2 + (longlong)pvVar16) = 0;
                    pvVar16 = local_2c8;
                    iVar17 = local_2ac;
                  }
                }
                lVar10 = *param_2;
                ppvVar13 = (void **)(lVar10 + 0x28);
                if (ppvVar13 == &local_268) {
                  if (pvVar18 != (void *)0x0) {
                    FMemory::Free(pvVar18);
                  }
                }
                else {
                  if (*ppvVar13 != (void *)0x0) {
                    FMemory::Free();
                  }
                  *ppvVar13 = pvVar18;
                  *(int *)(lVar10 + 0x30) = iVar8;
                  *(int *)(lVar10 + 0x34) = iVar17;
                }
                if (pvVar16 != (void *)0x0) {
                  FMemory::Free(pvVar16);
                }
              }
              if ((local_280 >> 6 & 1) != 0) {
                (**(code **)(*local_288 + 0x10))(local_288,&local_298,local_278);
                local_288 = (longlong *)0x0;
              }
              local_280 = 0;
              if ((local_210 >> 6 & 1) != 0) {
                (**(code **)(*local_218 + 0x10))(local_218,&local_228,local_208);
                local_218 = (longlong *)0x0;
              }
              local_210 = 0;
              if ((local_180 >> 6 & 1) != 0) {
                (**(code **)(*local_188 + 0x10))(local_188,&local_198,local_178);
                local_188 = (longlong *)0x0;
              }
              local_180 = 0;
              if ((local_1e0 >> 6 & 1) != 0) {
                (**(code **)(*local_1e8 + 0x10))(local_1e8,&local_1f8,local_1d8);
                local_1e8 = (longlong *)0x0;
              }
              local_1e0 = 0;
              if ((local_240 >> 6 & 1) != 0) {
                (**(code **)(*local_248 + 0x10))(local_248,&local_258,local_238);
                local_248 = (longlong *)0x0;
              }
              local_240 = 0;
              if ((local_1b0 >> 6 & 1) != 0) {
                (**(code **)(*local_1b8 + 0x10))(local_1b8,&local_1c8,local_1a8);
                local_1b8 = (longlong *)0x0;
              }
              local_1b0 = 0;
              TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_2);
              return 1;
            }
          }
        }
        if ((local_280 >> 6 & 1) != 0) {
          (**(code **)(*local_288 + 0x10))(local_288,&local_298,local_278);
          local_288 = (longlong *)0x0;
        }
        local_280 = 0;
        if ((local_210 >> 6 & 1) != 0) {
          (**(code **)(*local_218 + 0x10))(local_218,&local_228,local_208);
          local_218 = (longlong *)0x0;
        }
        local_210 = 0;
        if ((local_180 >> 6 & 1) != 0) {
          (**(code **)(*local_188 + 0x10))(local_188,&local_198,local_178);
        }
      }
    }
    if ((local_1e0 >> 6 & 1) != 0) {
      (**(code **)(*local_1e8 + 0x10))(local_1e8,&local_1f8,local_1d8);
      local_1e8 = (longlong *)0x0;
    }
    local_1e0 = 0;
    if ((local_240 >> 6 & 1) != 0) {
      (**(code **)(*local_248 + 0x10))(local_248,&local_258,local_238);
    }
  }
  if ((local_1b0 >> 6 & 1) != 0) {
    (**(code **)(*local_1b8 + 0x10))(local_1b8,&local_1c8,local_1a8);
    local_1b8 = (longlong *)0x0;
  }
  plVar11 = (longlong *)param_2[1];
  local_1b0 = 0;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar11 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  return 0;
}



// FUNCTION 142049b30 FUN_142049b30 body=1407 status=ok
// SIG undefined FUN_142049b30(void)

longlong * FUN_142049b30(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48 [2];
  longlong local_38 [2];
  longlong local_28 [2];
  longlong local_18 [2];
  
  plVar6 = (longlong *)0x0;
  LOCK();
  bVar9 = DAT_146accd48 == 0;
  if (bVar9) {
    DAT_146accd48 = 0;
  }
  else {
    plVar6 = (longlong *)(ulonglong)DAT_146accd48;
  }
  UNLOCK();
  if ((((bVar9) && (DAT_1468c217e == '\0')) &&
      (DAT_146acd050 = param_1, plVar3 = (longlong *)FUN_142039c70(), plVar6 = plVar3,
      plVar3 != (longlong *)0x0)) && (DAT_146acd050 == param_1)) {
    FUN_142054490(plVar3,param_1);
    uVar1 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x38);
    plVar6 = (longlong *)(ulonglong)uVar1;
    if (((int)uVar1 < DAT_146acd05c) &&
       (plVar6 = (longlong *)_Init_thread_header(&DAT_146acd05c), DAT_146acd05c == -1)) {
      uVar8 = FCommandLine::Get();
      DAT_146acd058 = FParse::Param(uVar8,L"GbxBenchmarkMap");
      plVar6 = (longlong *)_Init_thread_footer(&DAT_146acd05c);
    }
    if ((param_1 != 0) && (DAT_146acd058 == '\0')) {
      plVar6 = (longlong *)(param_1 + 0xe8);
      if ((*(int *)(param_1 + 0xf0) == 0) ||
         (((longlong *)*plVar6 == (longlong *)0x0 ||
          (cVar2 = (**(code **)(*(longlong *)*plVar6 + 0x18))(), cVar2 == '\0')))) {
        uStack_50 = 0;
        local_58 = FUN_14203ee00;
        plVar4 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar4 != (longlong *)0x0) {
          plVar4[1] = (longlong)plVar3;
          *plVar4 = (longlong)&PTR_GetPoolName_1440f9090;
          *(undefined4 *)(plVar4 + 2) = (undefined4)local_58;
          *(undefined4 *)((longlong)plVar4 + 0x14) = local_58._4_4_;
          *(undefined4 *)(plVar4 + 3) = uStack_50;
          *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_4c;
          lVar5 = FDelegateHandle::GenerateNewID();
          plVar4[5] = lVar5;
        }
        if (&local_58 != plVar6) {
          if (plVar4 == (longlong *)0x0) {
            if ((*(int *)(param_1 + 0xf0) != 0) &&
               (plVar7 = (longlong *)*plVar6, plVar7 != (longlong *)0x0)) {
              (**(code **)(*plVar7 + 0x28))(plVar7,0);
              if (*plVar6 != 0) {
                lVar5 = FMemory::Realloc(*plVar6,0,0);
                *plVar6 = lVar5;
              }
              *(undefined4 *)(param_1 + 0xf0) = 0;
            }
          }
          else {
            (**(code **)(*plVar4 + 0x30))(plVar4,plVar6);
          }
        }
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x28))(plVar4,0);
          lVar5 = FMemory::Realloc(plVar4,0,0);
          if (lVar5 != 0) {
            FMemory::Free(lVar5);
          }
        }
      }
      plVar6 = (longlong *)(param_1 + 0xf8);
      if (((*(int *)(param_1 + 0x100) == 0) || ((longlong *)*plVar6 == (longlong *)0x0)) ||
         (cVar2 = (**(code **)(*(longlong *)*plVar6 + 0x18))(), cVar2 == '\0')) {
        uStack_50 = 0;
        local_58 = FUN_14203ea90;
        plVar4 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar4 != (longlong *)0x0) {
          plVar4[1] = (longlong)plVar3;
          *plVar4 = (longlong)&PTR_GetPoolName_144f71c78;
          *(undefined4 *)(plVar4 + 2) = (undefined4)local_58;
          *(undefined4 *)((longlong)plVar4 + 0x14) = local_58._4_4_;
          *(undefined4 *)(plVar4 + 3) = uStack_50;
          *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_4c;
          lVar5 = FDelegateHandle::GenerateNewID();
          plVar4[5] = lVar5;
        }
        if (local_48 != plVar6) {
          if (plVar4 == (longlong *)0x0) {
            if ((*(int *)(param_1 + 0x100) != 0) &&
               (plVar7 = (longlong *)*plVar6, plVar7 != (longlong *)0x0)) {
              (**(code **)(*plVar7 + 0x28))(plVar7,0);
              if (*plVar6 != 0) {
                lVar5 = FMemory::Realloc(*plVar6,0,0);
                *plVar6 = lVar5;
              }
              *(undefined4 *)(param_1 + 0x100) = 0;
            }
          }
          else {
            (**(code **)(*plVar4 + 0x30))(plVar4,plVar6);
          }
        }
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x28))(plVar4,0);
          lVar5 = FMemory::Realloc(plVar4,0,0);
          if (lVar5 != 0) {
            FMemory::Free(lVar5);
          }
        }
      }
      plVar6 = (longlong *)(param_1 + 0x108);
      if (((*(int *)(param_1 + 0x110) == 0) || ((longlong *)*plVar6 == (longlong *)0x0)) ||
         (cVar2 = (**(code **)(*(longlong *)*plVar6 + 0x18))(), cVar2 == '\0')) {
        uStack_50 = 0;
        local_58 = FUN_14203e9f0;
        plVar4 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar4 != (longlong *)0x0) {
          plVar4[1] = (longlong)plVar3;
          *plVar4 = (longlong)&PTR_GetPoolName_14415b6a8;
          *(undefined4 *)(plVar4 + 2) = (undefined4)local_58;
          *(undefined4 *)((longlong)plVar4 + 0x14) = local_58._4_4_;
          *(undefined4 *)(plVar4 + 3) = uStack_50;
          *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_4c;
          lVar5 = FDelegateHandle::GenerateNewID();
          plVar4[5] = lVar5;
        }
        if (local_38 != plVar6) {
          if (plVar4 == (longlong *)0x0) {
            if ((*(int *)(param_1 + 0x110) != 0) &&
               (plVar7 = (longlong *)*plVar6, plVar7 != (longlong *)0x0)) {
              (**(code **)(*plVar7 + 0x28))(plVar7,0);
              if (*plVar6 != 0) {
                lVar5 = FMemory::Realloc(*plVar6,0,0);
                *plVar6 = lVar5;
              }
              *(undefined4 *)(param_1 + 0x110) = 0;
            }
          }
          else {
            (**(code **)(*plVar4 + 0x30))(plVar4,plVar6);
          }
        }
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x28))(plVar4,0);
          lVar5 = FMemory::Realloc(plVar4,0,0);
          if (lVar5 != 0) {
            FMemory::Free(lVar5);
          }
        }
      }
      plVar6 = (longlong *)(param_1 + 0x118);
      if (((*(int *)(param_1 + 0x120) == 0) || ((longlong *)*plVar6 == (longlong *)0x0)) ||
         (cVar2 = (**(code **)(*(longlong *)*plVar6 + 0x18))(), cVar2 == '\0')) {
        uStack_50 = 0;
        local_58 = FUN_14203e910;
        plVar4 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar4 != (longlong *)0x0) {
          plVar4[1] = (longlong)plVar3;
          *plVar4 = (longlong)&PTR_GetPoolName_144f71c78;
          *(undefined4 *)(plVar4 + 2) = (undefined4)local_58;
          *(undefined4 *)((longlong)plVar4 + 0x14) = local_58._4_4_;
          *(undefined4 *)(plVar4 + 3) = uStack_50;
          *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_4c;
          lVar5 = FDelegateHandle::GenerateNewID();
          plVar4[5] = lVar5;
        }
        if (local_28 != plVar6) {
          if (plVar4 == (longlong *)0x0) {
            if ((*(int *)(param_1 + 0x120) != 0) &&
               (plVar7 = (longlong *)*plVar6, plVar7 != (longlong *)0x0)) {
              (**(code **)(*plVar7 + 0x28))(plVar7,0);
              if (*plVar6 != 0) {
                lVar5 = FMemory::Realloc(*plVar6,0,0);
                *plVar6 = lVar5;
              }
              *(undefined4 *)(param_1 + 0x120) = 0;
            }
          }
          else {
            (**(code **)(*plVar4 + 0x30))(plVar4,plVar6);
          }
        }
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x28))(plVar4,0);
          lVar5 = FMemory::Realloc(plVar4,0,0);
          if (lVar5 != 0) {
            FMemory::Free(lVar5);
          }
        }
      }
      plVar4 = (longlong *)(param_1 + 0x128);
      if (((*(int *)(param_1 + 0x130) == 0) || ((longlong *)*plVar4 == (longlong *)0x0)) ||
         (plVar6 = (longlong *)(**(code **)(*(longlong *)*plVar4 + 0x18))(), (char)plVar6 == '\0'))
      {
        uStack_50 = 0;
        local_58 = FUN_14203eec0;
        plVar7 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar7 != (longlong *)0x0) {
          plVar7[1] = (longlong)plVar3;
          *plVar7 = (longlong)&PTR_GetPoolName_144f71cb8;
          *(undefined4 *)(plVar7 + 2) = (undefined4)local_58;
          *(undefined4 *)((longlong)plVar7 + 0x14) = local_58._4_4_;
          *(undefined4 *)(plVar7 + 3) = uStack_50;
          *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_4c;
          lVar5 = FDelegateHandle::GenerateNewID();
          plVar7[5] = lVar5;
        }
        plVar6 = local_18;
        if (plVar6 != plVar4) {
          if (plVar7 == (longlong *)0x0) {
            if ((*(int *)(param_1 + 0x130) != 0) &&
               (plVar3 = (longlong *)*plVar4, plVar3 != (longlong *)0x0)) {
              plVar6 = (longlong *)(**(code **)(*plVar3 + 0x28))(plVar3,0);
              if (*plVar4 != 0) {
                plVar6 = (longlong *)FMemory::Realloc(*plVar4,0,0);
                *plVar4 = (longlong)plVar6;
              }
              *(undefined4 *)(param_1 + 0x130) = 0;
            }
          }
          else {
            plVar6 = (longlong *)(**(code **)(*plVar7 + 0x30))(plVar7,plVar4);
          }
        }
        if (plVar7 != (longlong *)0x0) {
          (**(code **)(*plVar7 + 0x28))(plVar7,0);
          lVar5 = FMemory::Realloc(plVar7,0,0);
          plVar6 = (longlong *)0x0;
          if (lVar5 != 0) {
            plVar6 = (longlong *)FMemory::Free(lVar5);
          }
        }
      }
    }
  }
  return plVar6;
}



// FUNCTION 14204a0b0 FUN_14204a0b0 body=206 status=ok
// SIG undefined FUN_14204a0b0(void)

void FUN_14204a0b0(void)

{
  char *pcVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  
  if ((DAT_1468c2176 != '\0') && (DAT_1468b616c == '\0')) {
    LOCK();
    bVar7 = DAT_146accd48 == 0;
    if (bVar7) {
      DAT_146accd48 = 0;
    }
    UNLOCK();
    if (((bVar7) && (DAT_1468c217e == '\0')) && (lVar4 = FUN_142039c70(), lVar4 != 0)) {
      plVar5 = *(longlong **)(lVar4 + 0x110);
      plVar6 = plVar5 + (longlong)*(int *)(lVar4 + 0x118) * 2;
      for (; plVar5 != plVar6; plVar5 = plVar5 + 2) {
        lVar4 = *plVar5;
        piVar2 = (int *)(lVar4 + 0x1e0);
        LOCK();
        bVar7 = *piVar2 == 0;
        if (bVar7) {
          *piVar2 = 0;
        }
        UNLOCK();
        if (bVar7) {
          pcVar1 = (char *)(lVar4 + 0x30);
          LOCK();
          cVar3 = *pcVar1;
          if (cVar3 == '\0') {
            *pcVar1 = '\0';
            cVar3 = '\0';
          }
          UNLOCK();
          if (cVar3 < '\x06') {
            LOCK();
            cVar3 = *(char *)(*plVar5 + 0x30);
            if (cVar3 == '\0') {
              *(char *)(*plVar5 + 0x30) = '\0';
              cVar3 = '\0';
            }
            UNLOCK();
            if ((cVar3 == '\x05') && (lVar4 = FUN_14203bcd0(*plVar5), lVar4 != 0)) {
              FUN_14208d720(lVar4,0);
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 14204a180 FUN_14204a180 body=55 status=ok
// SIG undefined FUN_14204a180(void)

ulonglong FUN_14204a180(void)

{
  longlong lVar1;
  ulonglong uVar2;
  bool bVar3;
  
  uVar2 = 0;
  LOCK();
  bVar3 = DAT_146accd48 == 0;
  if (bVar3) {
    DAT_146accd48 = 0;
  }
  else {
    uVar2 = (ulonglong)DAT_146accd48;
  }
  UNLOCK();
  if ((bVar3) && (DAT_1468c217e == '\0')) {
    lVar1 = FUN_142039c70();
    uVar2 = 0;
    if (lVar1 != 0) {
      uVar2 = FUN_142054490(lVar1,0);
      return uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 14204a1c0 FUN_14204a1c0 body=123 status=ok
// SIG undefined FUN_14204a1c0(void)

ulonglong FUN_14204a1c0(void)

{
  longlong lVar1;
  ulonglong uVar2;
  bool bVar3;
  
  uVar2 = 0;
  LOCK();
  bVar3 = DAT_146accd48 == 0;
  if (bVar3) {
    DAT_146accd48 = 0;
  }
  else {
    uVar2 = (ulonglong)DAT_146accd48;
  }
  UNLOCK();
  if ((bVar3) && (DAT_1468c217e == '\0')) {
    lVar1 = FUN_142039c70();
    uVar2 = 0;
    if ((lVar1 != 0) &&
       (((uVar2 = DAT_146b17150, DAT_146b17150 != 0 && (*(longlong *)(DAT_146b17150 + 0x7b0) != 0))
        && (*(longlong *)(*(longlong *)(DAT_146b17150 + 0x7b0) + 0xb0) != 0)))) {
      FUN_142054490(lVar1);
      uVar2 = FUN_142054cb0(lVar1,*(undefined4 *)(lVar1 + 600));
      return uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 14204a240 FUN_14204a240 body=457 status=ok
// SIG undefined FUN_14204a240(void)

File * FUN_14204a240(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  BufferedFile *this;
  SysFile *this_00;
  File *pFVar3;
  File *pFVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  RefCountImpl *this_01;
  ulonglong uVar8;
  undefined2 *puVar9;
  undefined1 local_28 [8];
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined2 *local_18;
  undefined8 local_10;
  
  pFVar3 = (File *)0x0;
  local_20 = 0;
  local_18 = (undefined2 *)0x0;
  local_10 = 0;
  cVar1 = FUN_14203bd50(param_2,&local_18);
  if (cVar1 == '\0') {
    this = (BufferedFile *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x38,0);
    if (this == (BufferedFile *)0x0) {
      this_01 = (RefCountImpl *)CONCAT44(uStack_1c,local_20);
      pFVar4 = pFVar3;
    }
    else {
      this_00 = (SysFile *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x18,0);
      if (this_00 != (SysFile *)0x0) {
        FUN_1432c2fb0(&local_20,param_2);
        pFVar3 = (File *)Scaleform::SysFile::SysFile(this_00,(String *)&local_20,0x21,0x1b6);
      }
      pFVar4 = (File *)Scaleform::BufferedFile::BufferedFile(this,pFVar3);
      this_01 = (RefCountImpl *)pFVar3;
      pFVar3 = pFVar4;
      pFVar4 = (File *)(ulonglong)(this_00 != (SysFile *)0x0 | 2);
    }
    if ((((ulonglong)pFVar4 & 2) != 0) &&
       (pFVar4 = (File *)(ulonglong)((uint)pFVar4 & 0xfffffffd), this_01 != (RefCountImpl *)0x0)) {
      Scaleform::RefCountImpl::Release(this_01);
    }
    if (((ulonglong)pFVar4 & 1) != 0) {
      uVar8 = CONCAT44(uStack_1c,local_20) & 0xfffffffffffffffc;
      iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar8 + 8,0xffffffff);
      if (iVar2 == 1) {
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar8);
      }
    }
  }
  else {
    FUN_14172a070(local_28,0);
    puVar9 = &DAT_143f3eda8;
    if ((int)local_10 != 0) {
      puVar9 = local_18;
    }
    uVar5 = UMaterialParameterCollectionInstance::GetPrivateStaticClass();
    lVar6 = FUN_141799c90(uVar5,0,puVar9,0,0,0,1);
    if ((lVar6 != 0) &&
       (lVar7 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x68), lVar7 != 0)) {
      pFVar3 = (File *)FUN_14207f190(lVar7,param_2,*(undefined8 *)(lVar6 + 0x90),
                                     *(undefined4 *)(lVar6 + 0x98));
    }
    FUN_14172a400(local_28);
  }
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return pFVar3;
}



// FUNCTION 14204a410 FUN_14204a410 body=910 status=ok
// SIG undefined FUN_14204a410(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_14204a410(longlong param_1,longlong *param_2)

{
  byte *pbVar1;
  longlong *plVar2;
  int *piVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  char cVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  uint uVar11;
  longlong *plVar12;
  undefined1 auStack_258 [32];
  undefined8 *local_238;
  undefined8 local_230;
  undefined1 local_228;
  undefined8 local_218;
  undefined8 uStack_210;
  longlong *local_208;
  uint local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  longlong *local_1c8;
  uint local_1c0;
  byte local_1b8;
  undefined7 uStack_1b7;
  undefined1 *local_1a8 [2];
  undefined1 local_198 [32];
  undefined8 local_178;
  undefined4 local_168;
  undefined1 local_158 [80];
  undefined1 local_108 [192];
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_258;
  uVar8 = 0;
  pbVar1 = (byte *)(*(longlong *)(param_1 + 0x78) + 0x30);
  LOCK();
  bVar4 = *pbVar1;
  if (bVar4 == 0) {
    *pbVar1 = 0;
  }
  else {
    uVar8 = (ulonglong)bVar4;
  }
  UNLOCK();
  if ((char)uVar8 < '\x06') {
    cVar7 = FUN_142045c10(*(undefined8 *)(param_1 + 0x78));
    if (cVar7 == '\0') {
      plVar12 = (longlong *)param_2[1];
      lVar6 = *param_2;
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        UNLOCK();
      }
      local_178 = 0;
      local_168 = 0;
      puVar9 = (undefined8 *)FUN_140438ef0(0x20,local_198);
      if (puVar9 != (undefined8 *)0x0) {
        *puVar9 = &PTR_FUN_14467a5d8;
        puVar9[1] = param_1;
        puVar9[2] = lVar6;
        puVar9[3] = plVar12;
        plVar12 = (longlong *)0x0;
      }
      local_1e8 = 0;
      local_1a8[0] = &LAB_14202cd00;
      local_1e0 = 0x15;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1e8,0);
      local_238 = (undefined8 *)CONCAT62(local_238._2_6_,0x3f);
      FGenericPlatformString::Convert<char,wchar_t>(local_1e8,0x15,"FGFxObject::Overlaps");
      FUN_1410b2c00(local_108,&local_1e8,local_1a8);
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar12 + 1;
        lVar6 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar3 = (int *)((longlong)plVar12 + 0xc);
          iVar5 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
          }
        }
      }
      uVar10 = FUN_1410ca7e0(local_108,local_158);
      FUN_1420326d0(param_1,uVar10);
      FUN_140d1b3a0(local_108);
      cVar7 = *(char *)(local_48 + 0x58);
      while (cVar7 == '\0') {
        (**(code **)(**(longlong **)(local_48 + 0x50) + 0x20))
                  (*(longlong **)(local_48 + 0x50),0x5d638865,0);
        cVar7 = *(char *)(local_48 + 0x58);
      }
      bVar4 = *(byte *)(local_48 + 0x60);
      FUN_140ce1dc0(local_108);
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_2);
      return (ulonglong)bVar4;
    }
    lVar6 = *param_2;
    if (lVar6 != 0) {
      local_1d8 = 0xffffffffffffffff;
      uStack_1d0 = 0xffffffffffffffff;
      local_1c8 = (longlong *)0x0;
      local_218 = 0xffffffffffffffff;
      uStack_210 = 0xffffffffffffffff;
      local_1c0 = 0;
      local_208 = (longlong *)0x0;
      local_200 = *(uint *)(lVar6 + 0xa0);
      local_1f8 = *(undefined8 *)(lVar6 + 0xa8);
      local_1f0 = *(undefined8 *)(lVar6 + 0xb0);
      if ((*(uint *)(lVar6 + 0xa0) >> 6 & 1) != 0) {
        local_208 = *(longlong **)(lVar6 + 0x98);
        (**(code **)(*local_208 + 8))(local_208,&local_218);
      }
      uVar11 = *(uint *)(param_1 + 0xa0) & 0x8f;
      if (uVar11 - 8 < 4) {
        local_228 = uVar11 == 10;
        local_238 = &local_218;
        local_230 = 1;
        cVar7 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x30))
                          (*(longlong **)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa8),&local_1d8
                           ,"hitTestObject");
        bVar4 = local_1b8;
        if (cVar7 != '\0') {
          if ((local_200 >> 6 & 1) != 0) {
            (**(code **)(*local_208 + 0x10))(local_208,&local_218,local_1f8);
            local_208 = (longlong *)0x0;
          }
          local_200 = 0;
          if ((local_1c0 >> 6 & 1) != 0) {
            (**(code **)(*local_1c8 + 0x10))(local_1c8,&local_1d8,CONCAT71(uStack_1b7,local_1b8));
            local_1c8 = (longlong *)0x0;
          }
          local_1c0 = 0;
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_2);
          return (ulonglong)bVar4;
        }
      }
      if ((local_200 >> 6 & 1) != 0) {
        (**(code **)(*local_208 + 0x10))(local_208,&local_218,local_1f8);
        local_208 = (longlong *)0x0;
      }
      local_200 = 0;
      if ((local_1c0 >> 6 & 1) != 0) {
        (**(code **)(*local_1c8 + 0x10))(local_1c8,&local_1d8,CONCAT71(uStack_1b7,local_1b8));
      }
    }
    uVar8 = TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_2);
  }
  else {
    plVar12 = (longlong *)param_2[1];
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar12 + 1;
      lVar6 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      uVar11 = (int)lVar6 - 1;
      uVar8 = (ulonglong)uVar11;
      if (uVar11 == 0) {
        uVar8 = (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar3 = (int *)((longlong)plVar12 + 0xc);
        iVar5 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          uVar8 = (**(code **)(*plVar12 + 8))(plVar12,1);
        }
      }
    }
  }
  return uVar8 & 0xffffffffffffff00;
}



// FUNCTION 14204a7a0 FUN_14204a7a0 body=2141 status=ok
// SIG undefined FUN_14204a7a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14204a7a0(longlong *param_1)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  byte bVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  RefCountImpl *this;
  uint uVar17;
  undefined1 auStack_118 [32];
  undefined4 *local_f8;
  char local_e8;
  char local_e7;
  int local_e4;
  undefined4 local_e0;
  uint local_dc;
  RefCountImpl *local_d8;
  undefined4 local_d0 [2];
  undefined4 *local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  float local_88 [4];
  undefined4 local_78;
  float local_74;
  undefined4 local_70;
  float local_6c;
  undefined8 local_68;
  float local_60;
  float local_5c;
  undefined1 local_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  cVar4 = Scaleform::Render::HAL::checkState
                    (param_1,8,
                     "Scaleform::Render::ShaderHAL<class Scaleform::Render::RHI::ShaderManager,class Scaleform::Render::RHI::ShaderInterface>::PopBlendMode"
                    );
  if (cVar4 == '\0') {
    return;
  }
  local_a8 = (longlong *)(**(code **)(*param_1 + 0x118))(param_1);
  plVar13 = param_1 + 0x2c;
  lVar7 = *plVar13;
  lVar12 = param_1[0x2d] * 0x20;
  local_d8 = *(RefCountImpl **)(lVar12 + -0x20 + lVar7);
  this = (RefCountImpl *)0x0;
  if (local_d8 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(local_d8);
    this = *(RefCountImpl **)(lVar12 + -0x20 + lVar7);
  }
  local_b8 = *(longlong **)(lVar12 + -0x18 + lVar7);
  plVar14 = (longlong *)0x0;
  local_d8 = this;
  if (local_b8 != (longlong *)0x0) {
    (**(code **)(*local_b8 + 8))(local_b8);
    plVar14 = *(longlong **)(lVar12 + -0x18 + lVar7);
  }
  plVar9 = *(longlong **)(lVar12 + -0x10 + lVar7);
  plVar16 = (longlong *)0x0;
  local_b8 = plVar14;
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 8))(plVar9);
    plVar16 = *(longlong **)(lVar12 + -0x10 + lVar7);
  }
  local_e8 = *(char *)(lVar12 + -8 + lVar7);
  local_e7 = *(char *)(lVar12 + -7 + lVar7);
  uVar2 = param_1[0x2d];
  FUN_14204fb20(plVar13,plVar13,uVar2 - 1);
  if (uVar2 < uVar2 - 1) {
    lVar7 = -1;
    puVar15 = (undefined8 *)(uVar2 * 0x20 + *plVar13);
    do {
      *puVar15 = 0;
      puVar15[1] = 0;
      puVar15[2] = 0;
      puVar15 = puVar15 + 4;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  if (((*(uint *)(param_1 + 0xb) >> 8 & 1) != 0) ||
     (((*(uint *)(param_1 + 0xb) & 0x300) != 0 && ((int)param_1[0x22a] < (int)param_1[0x2d]))))
  goto LAB_14204af44;
  uVar6 = FUN_1432dc470(param_1);
  local_dc = *(uint *)(param_1 + 0xb) & 0x300;
  *(undefined4 *)(param_1 + 0x22a) = 0xffffffff;
  iVar1 = *(int *)(this + 0x48);
  local_e4 = iVar1;
  local_e0 = uVar6;
  cVar4 = (**(code **)(*param_1 + 0x248))(param_1,this);
  cVar5 = FUN_1432d0100(iVar1,*(undefined4 *)((longlong)param_1 + 0x54));
  if (cVar5 == '\0') {
    if ((iVar1 - 0xbU < 2) && (cVar4 != '\0')) {
      if (local_e7 == '\0') {
        (**(code **)(*param_1 + 0x28))(param_1,0);
      }
      else {
        uVar6 = 1;
      }
    }
  }
  else {
    plVar13 = (longlong *)0x0;
    (**(code **)(*param_1 + 0x2a0))(param_1,1);
    if (local_dc == 0) {
      lVar7 = param_1[0x36];
      lVar12 = param_1[0x35];
      plVar9 = *(longlong **)(lVar7 * 0x340 + -0x340 + lVar12);
      plVar13 = (longlong *)0x0;
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 8))(plVar9);
        plVar13 = *(longlong **)(lVar7 * 0x340 + -0x340 + lVar12);
      }
      if (plVar16 != (longlong *)0x0) {
        (**(code **)(*plVar16 + 8))(plVar16);
      }
      if (plVar13 != (longlong *)0x0) {
        (**(code **)(*plVar13 + 8))(plVar13);
      }
      if (plVar14 == (longlong *)0x0) {
LAB_14204ad5e:
        FUN_1432dafc0(param_1,local_e0,0,*(uint *)(param_1 + 0xb) >> 4 & 0xffffff01);
        plVar14 = plVar13;
LAB_14204aabc:
        if (plVar16 != (longlong *)0x0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
        }
        if (plVar14 != (longlong *)0x0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
        if (plVar13 != (longlong *)0x0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
        goto LAB_14204af44;
      }
      if (local_e4 != 2) goto LAB_14204aa17;
      if (plVar16 == (longlong *)0x0) goto LAB_14204ad5e;
      if (local_e8 == '\0') {
        uVar8 = FUN_1420395f0(*(undefined8 *)(this + 0x30));
        cVar4 = Scaleform::Render::Cxform::operator==(uVar8,&DAT_1467ccfd0);
        if (cVar4 == '\0') goto LAB_14204aa17;
        uVar17 = 1;
      }
      else {
LAB_14204aa17:
        uVar17 = 0;
      }
      (**(code **)(*param_1 + 0x28))(param_1,(uVar17 ^ 1) << 2);
      plVar14 = plVar16;
      plVar9 = plVar13;
      if ((char)uVar17 == '\0') {
        lVar7 = param_1[0x36];
        lVar12 = param_1[0x35];
        plVar9 = *(longlong **)(lVar7 * 0x340 + -0x340 + lVar12);
        plVar10 = (longlong *)0x0;
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
          plVar10 = *(longlong **)(lVar7 * 0x340 + -0x340 + lVar12);
        }
        plVar9 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,plVar13 + 5,0);
        if (plVar13 != (longlong *)0x0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
        if (plVar9 == (longlong *)0x0) {
          FUN_1432dafc0(param_1,local_e0,0,*(uint *)(param_1 + 0xb) >> 4 & 0xffffff01);
          if (plVar10 != (longlong *)0x0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
          plVar14 = (longlong *)0x0;
          this = local_d8;
          goto LAB_14204aabc;
        }
        local_f8 = local_d0;
        local_68 = 0;
        local_d0[0] = 0;
        local_60 = (float)((int)plVar9[7] - (int)plVar9[6]);
        local_5c = (float)(*(int *)((longlong)plVar9 + 0x3c) - *(int *)((longlong)plVar9 + 0x34));
        (**(code **)(*param_1 + 0x20))(param_1,plVar9,8,&local_68);
        iVar1 = local_e4;
        if (DAT_146ace89e == '\0') {
          if ((local_e4 == 2) ||
             ((plVar10 != (longlong *)0x0 &&
              (lVar7 = (**(code **)(*plVar10 + 0x18))(plVar10), lVar7 != 0)))) {
            DAT_146ace89e = '\0';
          }
          else {
            DAT_146ace89e = '\x01';
          }
        }
        if (((plVar10 != (longlong *)0x0) &&
            (lVar7 = (**(code **)(*plVar10 + 0x18))(plVar10), lVar7 != 0)) ||
           ((plVar16 != (longlong *)0x0 &&
            (lVar7 = (**(code **)(*plVar16 + 0x18))(plVar16), lVar7 != 0)))) {
          FUN_1432dafc0(param_1,0x10,0,1);
          if ((plVar16 == (longlong *)0x0) || (local_e8 == '\0')) {
            local_c8 = (undefined4 *)0x0;
          }
          else {
            local_c8 = (undefined4 *)(**(code **)(*plVar16 + 0x18))(plVar16);
          }
          if (iVar1 == 2) {
            local_c0 = 0;
          }
          else {
            local_c0 = (**(code **)(*plVar10 + 0x18))(plVar10);
          }
          lVar7 = *param_1;
          uVar8 = (**(code **)(*plVar13 + 0x18))(plVar13);
          local_f8 = local_c8;
          (**(code **)(lVar7 + 0x370))(param_1,local_d8,uVar8,local_c0);
        }
        (**(code **)(*param_1 + 0x28))(param_1,0);
        this = local_d8;
        if (plVar10 != (longlong *)0x0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
          this = local_d8;
        }
      }
    }
    else {
      Scaleform::Render::CacheablePrimitive::GetCacheResults(this,&local_a0,2);
      if (local_a0 != (longlong *)0x0) {
        (**(code **)(*local_a0 + 8))(local_a0);
      }
      plVar14 = local_98;
      plVar9 = local_a0;
      if (local_98 != (longlong *)0x0) {
        (**(code **)(*local_98 + 8))(local_98);
      }
    }
    FUN_14201c970(local_58,param_1[0x4b] + 0x1e0,
                  ((ulonglong)
                   (byte)(&DAT_1467ccff4)
                         [(ulonglong)
                          (*(byte *)(*(longlong *)**(undefined8 **)(this + 0x30) + 0xf) & 0xf) * 5]
                  + 1) * 0x10 + *(longlong *)**(undefined8 **)(this + 0x30));
    lVar12 = param_1[0x36] * 0x340;
    lVar7 = param_1[0x35];
    local_74 = (float)(*(int *)((longlong)plVar9 + 0x3c) - *(int *)((longlong)plVar9 + 0x34)) /
               (float)*(uint *)((longlong)plVar9 + 0x2c);
    local_88[1] = 0.0;
    local_88[2] = 0.0;
    local_78 = 0;
    local_70 = 0;
    local_6c = local_74 * (float)*(int *)((longlong)plVar9 + 0x34);
    local_88[0] = (float)((int)plVar9[7] - (int)plVar9[6]) / (float)*(uint *)(plVar9 + 5);
    local_88[3] = local_88[0] * (float)(int)plVar9[6];
    if (*(int *)(lVar12 + -0x2c + lVar7) != 0) {
      iVar1 = *(int *)(lVar12 + -0x2c + lVar7);
      bVar11 = (byte)(*(uint *)(param_1 + 0xb) >> 6) & 1;
      iVar3 = iVar1 + -1;
      if ((*(uint *)(param_1 + 0xb) >> 6 & 1) == 0) {
        iVar3 = iVar1;
      }
      if (*(char *)(lVar12 + -0xf + lVar7) == '\0') {
        if (*(char *)(lVar12 + -0xd + lVar7) == '\0') goto LAB_14204add9;
        cVar4 = (bVar11 ^ 1) + 7;
      }
      else {
        cVar4 = (bVar11 ^ 1) + 4;
      }
      (**(code **)(*param_1 + 0x2c0))(param_1,cVar4,iVar3);
    }
LAB_14204add9:
    uVar6 = 0x10;
    if (local_e4 == 2) {
      uVar6 = 2;
    }
    FUN_1432dafc0(param_1,uVar6,1,*(uint *)(param_1 + 0xb) >> 4 & 0xffffff01);
    lVar7 = *param_1;
    uVar8 = (**(code **)(*plVar9 + 0x18))(plVar9);
    local_f8 = (undefined4 *)((ulonglong)local_f8 & 0xffffffff00000000);
    (**(code **)(lVar7 + 0x228))(param_1,uVar8,local_58,local_88);
    if ((local_dc == 0) && (local_e7 == '\0')) {
      plVar10 = (longlong *)(**(code **)(*param_1 + 0xb8))(param_1);
      cVar4 = (**(code **)(*plVar10 + 0x20))(plVar10);
      if (cVar4 == '\0') goto LAB_14204ae7a;
      lVar7 = plVar9[4];
      local_b0 = plVar9;
      FUN_1432d4040(this,2,&local_b0);
      *(RefCountImpl **)(lVar7 + 0x10) = this;
    }
    else {
LAB_14204ae7a:
      plVar10 = (longlong *)(**(code **)(*param_1 + 0xb8))(param_1);
      cVar4 = (**(code **)(*plVar10 + 0x20))(plVar10);
      if (cVar4 == '\0') {
        FUN_1432d4040(this,0,0,0);
      }
    }
    if (plVar13 != (longlong *)0x0) {
      (**(code **)(*plVar13 + 0x28))(plVar13,0);
    }
    if (plVar14 != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar14[4] + 8))();
      (**(code **)(*plVar14 + 0x28))(plVar14,0);
    }
    (**(code **)(*plVar9 + 0x28))(plVar9,2);
    if (plVar14 != (longlong *)0x0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
    }
    (**(code **)(*plVar9 + 0x10))(plVar9);
    uVar6 = local_e0;
    if (plVar13 != (longlong *)0x0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      uVar6 = local_e0;
    }
  }
  if (local_dc != 0) {
    lVar7 = (**(code **)(*param_1 + 200))(param_1);
    *(undefined4 *)(lVar7 + 0x30) = 0;
    *(uint *)(param_1 + 0xb) = *(uint *)(param_1 + 0xb) & 0xfffffcff;
  }
  FUN_1432dafc0(param_1,uVar6,0,*(uint *)(param_1 + 0xb) >> 4 & 0xffffff01);
LAB_14204af44:
  if (plVar16 != (longlong *)0x0) {
    (**(code **)(*plVar16 + 0x10))(plVar16);
  }
  if (local_b8 != (longlong *)0x0) {
    (**(code **)(*local_b8 + 0x10))();
  }
  if (this != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(this);
  }
  (**(code **)(*local_a8 + 0x10))(local_a8,0xf);
  return;
}



// FUNCTION 14204b000 FUN_14204b000 body=484 status=ok
// SIG undefined FUN_14204b000(void)

void FUN_14204b000(longlong param_1)

{
  int *piVar1;
  longlong **pplVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *local_38;
  longlong *local_30;
  undefined1 local_28 [16];
  
  if (*(longlong *)(param_1 + 0x78) == 0) {
    return;
  }
  pplVar2 = (longlong **)(param_1 + 0xd0);
  if (*pplVar2 != (longlong *)0x0) {
    return;
  }
  lVar4 = FMemory::Malloc(0x108,0);
  plVar8 = (longlong *)0x0;
  plVar6 = plVar8;
  if (lVar4 != 0) {
    uVar5 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_28);
    plVar6 = (longlong *)FUN_142019ae0(lVar4,uVar5,*(undefined8 *)(param_1 + 0x78));
  }
  plVar7 = (longlong *)operator_new(0x18);
  plVar9 = plVar8;
  if (plVar7 != (longlong *)0x0) {
    *(undefined4 *)(plVar7 + 1) = 1;
    *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
    *plVar7 = (longlong)&PTR_FUN_143f3f2d0;
    plVar7[2] = (longlong)plVar6;
    plVar9 = plVar7;
  }
  plVar7 = plVar6 + 1;
  if (plVar6 == (longlong *)0x0) {
    plVar7 = plVar8;
  }
  local_38 = plVar6;
  local_30 = plVar9;
  if (plVar7 != (longlong *)0x0) {
    if ((*plVar7 != 0) && (plVar7[1] != 0)) {
      piVar1 = (int *)(plVar7[1] + 8);
      LOCK();
      iVar3 = *piVar1;
      if (iVar3 == 0) {
        *piVar1 = 0;
        iVar3 = 0;
      }
      UNLOCK();
      if (0 < iVar3) goto LAB_14204b15e;
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    *plVar7 = (longlong)plVar6;
    plVar8 = (longlong *)plVar7[1];
    if (plVar9 != plVar8) {
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
        UNLOCK();
        plVar8 = (longlong *)plVar7[1];
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
      plVar7[1] = (longlong)plVar9;
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar9 + 1;
      lVar4 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
  }
LAB_14204b15e:
  if (pplVar2 != &local_38) {
    *pplVar2 = plVar6;
    local_38 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xd8,&local_30);
  }
  plVar6 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_30 + 1;
    lVar4 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  if (*pplVar2 != (longlong *)0x0) {
    FUN_14204d040();
  }
  return;
}



// FUNCTION 14204b1f0 FUN_14204b1f0 body=703 status=ok
// SIG undefined FUN_14204b1f0(void)

void FUN_14204b1f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  DWORD DVar5;
  BOOL BVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  uint uVar10;
  ulonglong uVar11;
  bool bVar12;
  longlong *local_10;
  
  lVar3 = DAT_146accdc8;
  cVar4 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar4 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar5 = GetCurrentThreadId(), lVar7 = 4, DVar5 == DAT_1468c21c0)) {
    lVar7 = 0;
  }
  if ((*(int *)(lVar7 + lVar3) != 0) && (DAT_146accc78 != (RefCountImpl *)0x0)) {
    FUN_14208d7f0();
    if (DAT_146accc78 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(DAT_146accc78);
    }
    DAT_146accc78 = (RefCountImpl *)0x0;
  }
  lVar3 = DAT_146accd40;
  if (DAT_146accd68 != 0) {
    cVar4 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar4 != '\0') || (DAT_1468c21ae == '\0')) ||
       (DVar5 = GetCurrentThreadId(), lVar7 = 4, DVar5 == DAT_1468c21c0)) {
      lVar7 = 0;
    }
    if (*(int *)(lVar7 + lVar3) != 0) {
      FUN_142032ce0();
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_146accb20);
  LOCK();
  DAT_146accb28 = 1;
  UNLOCK();
  uVar11 = (ulonglong)(int)DAT_146accb38;
  plVar9 = DAT_146accb30 + uVar11 * 4;
  plVar8 = DAT_146accb30;
  if (DAT_146accb30 != plVar9) {
    do {
      if (plVar8[2] != 0) {
        IStreamingManager::GetNumWantingResources();
        (**(code **)(*(longlong *)plVar8[2] + 0x68))((longlong *)plVar8[2],1);
        FUN_1432de450(plVar8[2]);
        plVar8[2] = 0;
      }
      plVar8 = plVar8 + 4;
    } while (plVar8 != plVar9);
    uVar11 = (ulonglong)DAT_146accb38;
  }
  uVar10 = (uint)uVar11;
  plVar8 = DAT_146accb30;
  while (uVar10 != 0) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 4;
    uVar10 = (int)uVar11 - 1;
    uVar11 = (ulonglong)uVar10;
  }
  DAT_146accb38 = 0;
  if (DAT_146accb3c != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (&DAT_146accb30,0);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_146accb20);
  LOCK();
  DAT_146accb28 = 0;
  UNLOCK();
  DAT_146accf98 = 0;
  cVar4 = FUN_142056970();
  if (cVar4 == '\0') {
    BVar6 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146accb40);
    if (BVar6 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146accb40);
    }
    if (DAT_146accb68 != (longlong *)0x0) {
      (**(code **)(*DAT_146accb68 + 0x18))();
      local_10 = (longlong *)0x0;
      DAT_146accb68 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&DAT_146accb70,&local_10,param_3,param_4,0);
      plVar8 = local_10;
      if (local_10 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_10 + 1;
        lVar3 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_10)(local_10);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_10 + 8))(local_10,1);
          }
        }
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146accb40);
  }
  if (DAT_146acd048 == '\0') {
    LOCK();
    DAT_146accf28 = (uint)(*DAT_146accf68 != 0);
    UNLOCK();
    DAT_146acd048 = '\x01';
  }
  LOCK();
  bVar12 = DAT_146accf28 == 0;
  if (bVar12) {
    DAT_146accf28 = 0;
  }
  UNLOCK();
  if ((!bVar12) && (DAT_146accf38 != (longlong *)0x0)) {
    (**(code **)(*DAT_146accf38 + 0x18))();
    plVar8 = DAT_146accf38;
    DAT_146accf38 = (longlong *)0x0;
    if (plVar8 != (longlong *)0x0) {
      (**(code **)*plVar8)(plVar8,1);
    }
  }
  FUN_14207bf80(&PTR_PTR_1464f05c0);
  return;
}



// FUNCTION 14204b4b0 FUN_14204b4b0 body=1054 status=ok
// SIG undefined FUN_14204b4b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14204b4b0(longlong *param_1,RefCountImpl *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  undefined4 uVar9;
  float *pfVar10;
  byte bVar11;
  undefined1 auStack_b8 [32];
  undefined4 *local_98;
  undefined1 local_88;
  char local_87;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  cVar1 = Scaleform::Render::HAL::checkState
                    (param_1,8,
                     "Scaleform::Render::ShaderHAL<class Scaleform::Render::RHI::ShaderManager,class Scaleform::Render::RHI::ShaderInterface>::PushBlendMode"
                    );
  if (cVar1 == '\0') {
    return;
  }
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x118))(param_1);
  (**(code **)(*plVar2 + 8))(plVar2,0xf,"HAL::PushBlendMode");
  uVar9 = *(undefined4 *)(param_2 + 0x48);
  Scaleform::RefCountImpl::AddRef(param_2);
  plVar2 = param_1 + 0x2c;
  FUN_14204fb20(plVar2,plVar2,param_1[0x2d] + 1);
  lVar4 = *plVar2;
  lVar8 = param_1[0x2d] * 0x20;
  if (param_2 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_2);
  }
  *(RefCountImpl **)(lVar8 + -0x20 + lVar4) = param_2;
  *(undefined8 *)(lVar8 + -0x18 + lVar4) = 0;
  *(undefined8 *)(lVar8 + -0x10 + lVar4) = 0;
  *(undefined2 *)(lVar8 + -8 + lVar4) = 0;
  if ((*(uint *)(param_1 + 0xb) & 0x300) == 0) {
    lVar4 = *plVar2;
    lVar8 = param_1[0x2d] * 0x20;
    local_88 = 0;
    local_87 = (**(code **)(*param_1 + 0x248))(param_1,param_2);
    iVar7 = (int)param_1[0x2d] + -1;
    if (-1 < iVar7) {
      lVar6 = (longlong)iVar7;
      plVar5 = (longlong *)(lVar6 * 0x20 + *plVar2);
      do {
        if (*(int *)(*plVar5 + 0x48) == 2) break;
        iVar7 = iVar7 + -1;
        plVar5 = plVar5 + -4;
        lVar6 = lVar6 + -1;
      } while (-1 < lVar6);
    }
    bVar11 = (byte)((uint)iVar7 >> 0x1f);
    *(byte *)(lVar8 + -7 + lVar4) = bVar11;
    cVar1 = FUN_1432d0100(*(undefined4 *)(param_2 + 0x48),*(undefined4 *)((longlong)param_1 + 0x54))
    ;
    if (cVar1 == '\0') {
      if ((*(int *)(param_2 + 0x48) - 0xbU < 2) && (local_87 != '\0')) {
        if (DAT_146ace89d == 0) {
          DAT_146ace89d = bVar11;
        }
        if (iVar7 < 0) {
          uVar9 = 0x13;
        }
        else {
          plVar2 = (longlong *)((longlong)iVar7 * 0x20 + *plVar2);
          local_80 = 0xff000000;
          pfVar10 = (float *)(((ulonglong)
                               (byte)(&DAT_1467ccff4)
                                     [(ulonglong)
                                      (*(byte *)(*(longlong *)**(undefined8 **)(*plVar2 + 0x30) +
                                                0xf) & 0xf) * 5] + 1) * 0x10 +
                             *(longlong *)**(undefined8 **)(*plVar2 + 0x30));
          local_98 = &local_80;
          local_54 = pfVar10[7];
          local_58 = pfVar10[3];
          local_4c = local_54 + pfVar10[5];
          local_50 = local_58 + *pfVar10;
          (**(code **)(*param_1 + 0x20))
                    (param_1,plVar2[2],((char)plVar2[3] != '\0') + '\b',&local_58);
          *(undefined1 *)(plVar2 + 3) = 1;
        }
      }
      else {
        cVar1 = FUN_1432d0100(*(int *)(param_2 + 0x48),*(undefined4 *)((longlong)param_1 + 0x54));
        if (cVar1 != '\0') {
          FUN_1432d4040(*(undefined8 *)(lVar8 + -0x20 + lVar4),0,0,0);
        }
      }
    }
    else {
      if (*(int *)(param_2 + 0x18) != 0) {
        *(uint *)(param_1 + 0xb) = *(uint *)(param_1 + 0xb) | 0x200;
        *(int *)(param_1 + 0x22a) = (int)param_1[0x2d] + -1;
        lVar4 = (**(code **)(*param_1 + 200))(param_1);
        *(undefined4 *)(lVar4 + 0x30) = 1;
        goto LAB_14204b88f;
      }
      lVar6 = *(longlong *)**(undefined8 **)(*(longlong *)(lVar8 + -0x20 + lVar4) + 0x30);
      pfVar10 = (float *)(((ulonglong)
                           (byte)(&DAT_1467ccff4)[(ulonglong)(*(byte *)(lVar6 + 0xf) & 0xf) * 5] + 1
                          ) * 0x10 + lVar6);
      local_7c = (undefined4)(longlong)*pfVar10;
      local_78 = (undefined4)(longlong)pfVar10[5];
      uVar3 = (**(code **)(*param_1 + 0x10))(param_1,&local_7c,0);
      FUN_14201c940(lVar8 + lVar4 + -0x18,uVar3);
      lVar6 = *(longlong *)(lVar8 + lVar4 + -0x18);
      if (lVar6 != 0) {
        local_68 = pfVar10[3];
        local_64 = pfVar10[7];
        local_84 = 0;
        local_98 = &local_84;
        local_60 = local_68 + *pfVar10;
        local_5c = local_64 + pfVar10[5];
        (**(code **)(*param_1 + 0x20))(param_1,lVar6,8,&local_68);
      }
      if (*(int *)(param_2 + 0x48) == 2) {
        local_74 = (undefined4)(longlong)*pfVar10;
        local_70 = (undefined4)(longlong)pfVar10[5];
        uVar3 = (**(code **)(*param_1 + 0x10))(param_1,&local_74,0);
        FUN_14201c940(lVar4 + -0x10 + lVar8,uVar3);
      }
      uVar9 = 1;
      (**(code **)(*param_1 + 0x2c0))(param_1,1,0);
      local_88 = *(int *)(param_2 + 0x48) != 2;
    }
    FUN_1432dafc0(param_1,uVar9,local_88,*(uint *)(param_1 + 0xb) >> 4 & 0xffffff01);
  }
LAB_14204b88f:
  Scaleform::RefCountImpl::Release(param_2);
  return;
}



// FUNCTION 14204b8d0 FUN_14204b8d0 body=184 status=ok
// SIG undefined FUN_14204b8d0(void)

void FUN_14204b8d0(longlong param_1,RefCountImpl *param_2)

{
  undefined8 *puVar1;
  code *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    if (param_2 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(param_2);
      Scaleform::RefCountImpl::AddRef(param_2);
    }
    local_28 = 0;
    local_18 = 0;
    puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_48);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &PTR_FUN_144f71cf8;
      puVar1[1] = param_1;
      if (param_2 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::AddRef(param_2);
      }
      puVar1[2] = param_2;
    }
    local_58[0] = FUN_14202cc10;
    FUN_142032330(local_58);
    if (param_2 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(param_2);
      Scaleform::RefCountImpl::Release(param_2);
    }
  }
  return;
}



// FUNCTION 14204b990 FUN_14204b990 body=88 status=ok
// SIG undefined FUN_14204b990(void)

bool FUN_14204b990(void)

{
  int *piVar1;
  char cVar2;
  DWORD DVar3;
  
  piVar1 = DAT_146acc978;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    if (DVar3 != DAT_1468c21c0) {
      return piVar1[1] != 0;
    }
  }
  return *piVar1 != 0;
}



// FUNCTION 14204b9f0 FUN_14204b9f0 body=1059 status=ok
// SIG undefined FUN_14204b9f0(void)

void FUN_14204b9f0(undefined8 param_1,longlong *param_2,undefined1 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong *plVar5;
  char cVar6;
  DWORD DVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  DWORD *pDVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  int iVar14;
  longlong *plVar15;
  LARGE_INTEGER local_78;
  LARGE_INTEGER local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong *local_58;
  longlong *plStack_50;
  longlong *local_48;
  longlong *plStack_40;
  
  if ((int)param_2[1] != 0) {
    plVar8 = (longlong *)operator_new(0x40);
    plVar13 = (longlong *)0x0;
    plStack_50 = plVar13;
    if (plVar8 != (longlong *)0x0) {
      *(undefined4 *)(plVar8 + 1) = 1;
      *plVar8 = (longlong)&PTR_FUN_144f71a78;
      *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
      plVar8[4] = 0;
      plVar8[2] = 0;
      plVar8[3] = 0;
      *(undefined2 *)(plVar8 + 4) = 0x101;
      plVar8[5] = 0;
      plVar8[6] = 0;
      plVar8[7] = 0;
      plStack_50 = plVar8;
    }
    local_58 = plStack_50 + 2;
    SharedPointerInternals::EnableSharedFromThis(&local_58,local_58,local_58);
    plVar8 = local_58;
    if (local_58 != param_2) {
      iVar14 = (int)local_58[1];
      if (iVar14 != 0) {
        plVar15 = (longlong *)(*local_58 + 8);
        do {
          plVar5 = (longlong *)*plVar15;
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
          plVar15 = plVar15 + 2;
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
      }
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      *plVar8 = *param_2;
      *param_2 = 0;
      *(int *)(plVar8 + 1) = (int)param_2[1];
      *(undefined4 *)((longlong)plVar8 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
      param_2[1] = 0;
    }
    *(undefined1 *)(local_58 + 2) = param_3;
    local_48 = local_58;
    plStack_40 = plStack_50;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
      UNLOCK();
    }
    FUN_14204be20(param_1,&local_48);
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar6 = FUN_1415ad720(&DAT_1468e2448), cVar6 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar7 = GetCurrentThreadId(), DVar7 == DAT_1468c21c0)))) {
      plVar8 = plStack_50;
      plVar13 = local_58;
      if (plStack_50 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
        UNLOCK();
      }
      uVar9 = FBaseGraphTask::GetSmallTaskAllocator();
      QueryPerformanceCounter(&local_70);
      lVar10 = FUN_142039c70();
      if (lVar10 != 0) {
        FUN_1420337d0(lVar10,uVar9,plVar13);
      }
      QueryPerformanceCounter(&local_78);
      DAT_146ac3af4 = DAT_146ac3af4 + (local_78.s.LowPart - local_70._0_4_);
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar13 = plVar8 + 1;
        lVar10 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          iVar14 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
      }
    }
    else {
      pDVar11 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
      plVar8 = TlsGetValue(*pDVar11);
      if (plVar8 == (longlong *)0x0) {
        plVar8 = (longlong *)operator_new(0x18);
        if (plVar8 != (longlong *)0x0) {
          *plVar8 = 0;
          plVar8[1] = 0;
          *(undefined4 *)(plVar8 + 2) = 0;
          plVar13 = plVar8;
        }
        TlsSetValue(*pDVar11,plVar13);
        plVar8 = plVar13;
      }
      plVar13 = (longlong *)plVar8[1];
      if (plVar13 == (longlong *)0x0) {
        plVar13 = (longlong *)*plVar8;
        if (plVar13 == (longlong *)0x0) {
          lVar10 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar11 + 2);
          plVar8[1] = lVar10;
          if (lVar10 == 0) {
            puVar12 = (undefined8 *)FMemory::Malloc(0x2000,0);
            plVar8[1] = (longlong)puVar12;
            lVar10 = 0x1f;
            do {
              puVar3 = puVar12 + 0x20;
              *puVar12 = puVar3;
              lVar10 = lVar10 + -1;
              puVar12 = puVar3;
            } while (lVar10 != 0);
            *puVar3 = 0;
          }
          plVar13 = (longlong *)plVar8[1];
          iVar14 = 0x20;
          *(undefined4 *)(plVar8 + 2) = 0x20;
        }
        else {
          iVar14 = 0x20;
          plVar8[1] = (longlong)plVar13;
          *(undefined4 *)(plVar8 + 2) = 0x20;
          *plVar8 = 0;
        }
      }
      else {
        iVar14 = (int)plVar8[2];
      }
      plVar8[1] = *plVar13;
      *(int *)(plVar8 + 2) = iVar14 + -1;
      *plVar13 = (longlong)&PTR_FUN_143f3edd8;
      *(undefined4 *)(plVar13 + 1) = 0xff;
      local_68 = 0;
      local_60 = 0;
      *(undefined4 *)((longlong)plVar13 + 0xc) = 1;
      *plVar13 = (longlong)&PTR_FUN_144f71700;
      *(undefined1 *)(plVar13 + 4) = 0;
      plVar13[5] = 0;
      plVar13[2] = (longlong)local_58;
      plVar13[3] = (longlong)plStack_50;
      if (plStack_50 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
        UNLOCK();
      }
      lVar10 = plVar13[5];
      piVar2 = (int *)(lVar10 + 0x48);
      if (lVar10 != 0) {
        LOCK();
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      FUN_1409421c0(plVar13,0,0xff,1);
      if (lVar10 != 0) {
        LOCK();
        iVar14 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          FGraphEvent::Recycle(lVar10);
        }
      }
    }
    plVar13 = plStack_50;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar8 = plStack_50 + 1;
      lVar10 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar13 + 0xc);
        iVar14 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
        }
      }
    }
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_2);
  return;
}



// FUNCTION 14204be20 FUN_14204be20 body=773 status=ok
// SIG undefined FUN_14204be20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14204be20(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar8;
  DWORD DVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined1 auStack_108 [40];
  longlong local_e0;
  code *local_d8 [2];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  undefined1 local_88 [24];
  longlong local_70 [4];
  longlong *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  lVar5 = DAT_146accf18;
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  cVar8 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar8 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar9 = GetCurrentThreadId();
    lVar10 = 4;
    if (DVar9 == DAT_1468c21c0) goto LAB_14204be8b;
  }
  else {
LAB_14204be8b:
    lVar10 = 0;
  }
  if (*(int *)(lVar10 + lVar5) == 0) goto LAB_14204c0c4;
  lVar5 = *param_2;
  uVar11 = FUN_1415ab270(0);
  *(undefined8 *)(lVar5 + 0x28) = uVar11;
  plVar2 = (longlong *)(param_1 + 0x150);
  local_50 = (longlong *)0x0;
  local_48 = 0;
  if (*plVar2 != 0) {
    local_48 = 1;
    TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(local_70,0)
    ;
    lVar5 = *(longlong *)(param_1 + 0x150);
    plVar14 = local_70;
    if (local_50 != (longlong *)0x0) {
      plVar14 = local_50;
    }
    *plVar14 = lVar5;
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 0x48) = *(int *)(lVar5 + 0x48) + 1;
      UNLOCK();
    }
  }
  plVar14 = (longlong *)param_2[1];
  lVar5 = *param_2;
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
  }
  local_a8 = (longlong *)0x0;
  local_98 = 0;
  puVar12 = (undefined8 *)FUN_140438ef0(0x20,local_c8);
  if (puVar12 != (undefined8 *)0x0) {
    *puVar12 = &PTR_FUN_14467a5d8;
    puVar12[1] = param_1;
    puVar12[2] = lVar5;
    puVar12[3] = plVar14;
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
      UNLOCK();
    }
  }
  local_d8[0] = FUN_14202c370;
  plVar13 = (longlong *)FUN_140596960(local_88,local_70,0xff);
  lVar5 = *plVar13;
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(lVar5 + 0x10,local_d8);
  *(undefined4 *)(lVar5 + 0x60) = 0x2ff;
  lVar5 = *plVar13;
  lVar7 = plVar13[2];
  lVar10 = plVar13[1];
  lVar6 = *(longlong *)(lVar5 + 0x78);
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 0x48) = *(int *)(lVar6 + 0x48) + 1;
    UNLOCK();
  }
  local_e0 = lVar6;
  FUN_1405ab110(lVar5,lVar10,(int)lVar7,1);
  if (local_98 != 0) {
    plVar13 = local_c8;
    if (local_a8 != (longlong *)0x0) {
      plVar13 = local_a8;
    }
    if (plVar13 != (longlong *)0x0) {
      (**(code **)(*plVar13 + 0x10))(plVar13,0);
    }
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (plVar2 == &local_e0) {
    if (lVar6 != 0) {
      LOCK();
      piVar1 = (int *)(lVar6 + 0x48);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      lVar5 = local_e0;
      goto joined_r0x00014204c025;
    }
  }
  else {
    lVar5 = *plVar2;
    *plVar2 = lVar6;
    if (lVar5 != 0) {
      LOCK();
      piVar1 = (int *)(lVar5 + 0x48);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
joined_r0x00014204c025:
      if (iVar3 == 1) {
        FGraphEvent::Recycle(lVar5);
      }
    }
  }
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar14 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar2 = local_70;
  iVar3 = (int)local_48;
  if (local_50 != (longlong *)0x0) {
    plVar2 = local_50;
  }
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar2 != 0) {
      LOCK();
      piVar1 = (int *)(*plVar2 + 0x48);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        FGraphEvent::Recycle();
      }
    }
    plVar2 = plVar2 + 1;
  }
  if (local_50 != (longlong *)0x0) {
    FMemory::Free();
  }
LAB_14204c0c4:
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar2 + 1;
    lVar5 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  return;
}



// FUNCTION 14204c130 FUN_14204c130 body=320 status=ok
// SIG undefined FUN_14204c130(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14204c130(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_138 [32];
  undefined1 local_118 [80];
  code *local_c8 [2];
  longlong local_b8 [4];
  longlong *local_98;
  int local_88;
  longlong local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  LOCK();
  *(int *)(param_1 + 0x1d8) = *(int *)(param_1 + 0x1d8) + 1;
  UNLOCK();
  local_78 = param_1;
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_68);
  local_98 = (longlong *)0x0;
  local_88 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x70,local_b8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_CopyToEmptyStorage_144f71a98;
    puVar1[2] = local_78;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar1 + 4,local_68);
  }
  local_c8[0] = FUN_14202bf70;
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
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_118,local_c8);
  FUN_14204c280(local_118);
  if (local_88 != 0) {
    plVar2 = local_b8;
    if (local_98 != (longlong *)0x0) {
      plVar2 = local_98;
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
  }
  if (local_98 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14204c270 FUN_14204c270 body=9 status=ok
// SIG undefined FUN_14204c270(void)

void FUN_14204c270(longlong param_1)

{
  FUN_14204c130(*(undefined8 *)(param_1 + 0x78));
  return;
}



// FUNCTION 14204c280 FUN_14204c280 body=228 status=ok
// SIG undefined FUN_14204c280(void)

void FUN_14204c280(longlong param_1)

{
  char cVar1;
  DWORD DVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  code *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar2 = GetCurrentThreadId();
    if (DVar2 != DAT_1468c21c0) goto LAB_14204c2d4;
  }
  iVar3 = FUN_140953d20(&PTR_PTR_1464f05c0);
  if (iVar3 == 0) {
    FUN_14207abf0(&PTR_PTR_1464f05c0);
  }
LAB_14204c2d4:
  local_28 = 0;
  local_18 = 0;
  puVar4 = (undefined8 *)FUN_140438ef0(0x60,local_48);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_CopyToEmptyStorage_1444f81f0;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar4 + 2,param_1);
  }
  local_58[0] = UE4Function_Private::
                TFunctionRefCaller<<lambda_50573a4081bc06268289253819177437>,void___cdecl(void)>::
                Call;
  FUN_14207a390(&PTR_PTR_1464f05c0,local_58);
  if (*(int *)(param_1 + 0x40) != 0) {
    plVar5 = *(longlong **)(param_1 + 0x30);
    if (*(longlong **)(param_1 + 0x30) == (longlong *)0x0) {
      plVar5 = (longlong *)(param_1 + 0x10);
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14204c370 FUN_14204c370 body=847 status=ok
// SIG undefined FUN_14204c370(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14204c370(longlong param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_1f8 [32];
  undefined1 local_1d8 [80];
  code *local_188 [2];
  longlong local_178 [4];
  longlong *local_158;
  int local_148;
  code *local_138 [2];
  longlong local_128 [4];
  longlong *local_108;
  int local_f8;
  code *local_e8 [2];
  longlong local_d8 [4];
  longlong *local_b8;
  int local_a8;
  longlong local_98;
  undefined1 local_88 [16];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  LOCK();
  cVar2 = *(char *)(param_1 + 0x30);
  if (cVar2 == '\0') {
    *(char *)(param_1 + 0x30) = '\0';
    cVar2 = '\0';
  }
  UNLOCK();
  if ('\b' < cVar2) goto LAB_14204c65c;
  LOCK();
  *(int *)(param_1 + 0x1d8) = *(int *)(param_1 + 0x1d8) + 1;
  UNLOCK();
  local_98 = param_1;
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_88);
  local_158 = (longlong *)0x0;
  local_148 = 0;
  puVar3 = (undefined8 *)FUN_140438ef0(0x70,local_178);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_CopyToEmptyStorage_144f71a98;
    puVar3[2] = local_98;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar3 + 4,local_88);
  }
  local_188[0] = FUN_14202bf70;
  if (local_48 != 0) {
    plVar6 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar6 = local_58;
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  if ((*(longlong *)(param_1 + 0x88) == 0) ||
     ((cVar2 = FUN_142045c10(param_1), cVar2 == '\0' && (cVar2 = FUN_14204cfe0(), cVar2 == '\0'))))
  {
    plVar6 = local_158;
    local_108 = (longlong *)0x0;
    local_f8 = 0;
    if ((local_158 == (longlong *)0x0) &&
       (_guard_xfg_dispatch_icall_nop(local_128,local_178,0x20), local_108 != (longlong *)0x0)) {
      FMemory::Free();
      plVar6 = local_158;
    }
    iVar1 = local_148;
    local_108 = plVar6;
    local_158 = (longlong *)0x0;
    local_f8 = local_148;
    local_148 = 0;
    if (iVar1 == 0) {
LAB_14204c518:
      local_138[0] = AK::MemoryMgr::StartProfileThreadUsage;
    }
    else {
      plVar4 = local_128;
      if (plVar6 != (longlong *)0x0) {
        plVar4 = plVar6;
      }
      if (plVar4 == (longlong *)0x0) goto LAB_14204c518;
      (**(code **)(*plVar4 + 8))();
      local_138[0] = local_188[0];
    }
    local_188[0] = AK::MemoryMgr::StartProfileThreadUsage;
    local_b8 = (longlong *)0x0;
    local_a8 = 0;
    puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_d8);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &PTR_FUN_143f3f130;
    }
    local_e8[0] = BuildSettings::IsPromotedBuild;
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x38));
    LOCK();
    *(undefined4 *)(param_1 + 0x40) = 1;
    UNLOCK();
    iVar1 = *(int *)(param_1 + 0x50);
    *(int *)(param_1 + 0x50) = iVar1 + 1;
    if (*(int *)(param_1 + 0x54) < iVar1 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<160,8>_>,FDefaultAllocator>::ResizeGrow
                ((longlong *)(param_1 + 0x48),iVar1);
    }
    lVar5 = (longlong)iVar1 * 0xa0 + *(longlong *)(param_1 + 0x48);
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(lVar5,local_138);
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(lVar5 + 0x50,local_e8);
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x38));
    LOCK();
    *(undefined4 *)(param_1 + 0x40) = 0;
    UNLOCK();
    if (local_a8 != 0) {
      plVar6 = local_d8;
      if (local_b8 != (longlong *)0x0) {
        plVar6 = local_b8;
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6,0);
      }
    }
    if (local_b8 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_f8 != 0) {
      plVar6 = local_128;
      if (local_108 != (longlong *)0x0) {
        plVar6 = local_108;
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6,0);
      }
    }
    if (local_108 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  else {
    FUN_14204fd00(param_1);
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_1d8,local_188);
    (**(code **)(**(longlong **)(param_1 + 0x88) + 0x48))(*(longlong **)(param_1 + 0x88),local_1d8);
  }
  if (local_148 != 0) {
    plVar6 = local_178;
    if (local_158 != (longlong *)0x0) {
      plVar6 = local_158;
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0);
    }
  }
  if (local_158 != (longlong *)0x0) {
    FMemory::Free();
  }
LAB_14204c65c:
  if (*(int *)(param_2 + 0x40) != 0) {
    plVar6 = *(longlong **)(param_2 + 0x30);
    if (*(longlong **)(param_2 + 0x30) == (longlong *)0x0) {
      plVar6 = (longlong *)(param_2 + 0x10);
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0);
    }
  }
  if (*(longlong *)(param_2 + 0x30) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14204c6c0 FUN_14204c6c0 body=104 status=ok
// SIG undefined FUN_14204c6c0(void)

void FUN_14204c6c0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 local_58 [80];
  
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_58);
  FUN_14204c370(*(undefined8 *)(param_1 + 0x78),local_58);
  if (*(int *)(param_2 + 0x40) != 0) {
    plVar1 = *(longlong **)(param_2 + 0x30);
    if (*(longlong **)(param_2 + 0x30) == (longlong *)0x0) {
      plVar1 = (longlong *)(param_2 + 0x10);
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,0);
    }
  }
  if (*(longlong *)(param_2 + 0x30) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14204c730 FUN_14204c730 body=939 status=ok
// SIG undefined FUN_14204c730(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14204c730(longlong param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_208 [32];
  undefined1 local_1e8 [80];
  code *local_198 [2];
  longlong local_188 [4];
  longlong *local_168;
  int local_158;
  code *local_148 [2];
  longlong local_138 [4];
  longlong *local_118;
  int local_108;
  undefined1 local_f8 [16];
  longlong local_e8 [4];
  longlong *local_c8;
  int local_b8;
  longlong local_a8;
  undefined1 local_98 [16];
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  uVar4 = 0;
  LOCK();
  cVar2 = *(char *)(param_1 + 0x30);
  if (cVar2 == '\0') {
    *(char *)(param_1 + 0x30) = '\0';
    cVar2 = '\0';
  }
  UNLOCK();
  if ('\b' < cVar2) goto LAB_14204ca3e;
  LOCK();
  *(int *)(param_1 + 0x1d8) = *(int *)(param_1 + 0x1d8) + 1;
  UNLOCK();
  local_a8 = param_1;
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_98);
  local_168 = (longlong *)0x0;
  local_158 = 0;
  puVar3 = (undefined8 *)FUN_140438ef0(0x70,local_188);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_CopyToEmptyStorage_144f71a98;
    puVar3[2] = local_a8;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar3 + 4,local_98);
  }
  local_198[0] = FUN_14202bf70;
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
  if (*(longlong *)(param_1 + 0x88) == 0) {
LAB_14204c89b:
    plVar5 = local_168;
    local_118 = (longlong *)0x0;
    local_108 = 0;
    if ((local_168 == (longlong *)0x0) &&
       (_guard_xfg_dispatch_icall_nop(local_138,local_188,0x20), local_118 != (longlong *)0x0)) {
      FMemory::Free();
      plVar5 = local_168;
    }
    iVar1 = local_158;
    local_118 = plVar5;
    local_168 = (longlong *)0x0;
    local_108 = local_158;
    local_158 = 0;
    if (iVar1 == 0) {
LAB_14204c91b:
      local_148[0] = AK::MemoryMgr::StartProfileThreadUsage;
    }
    else {
      plVar6 = local_138;
      if (plVar5 != (longlong *)0x0) {
        plVar6 = plVar5;
      }
      if (plVar6 == (longlong *)0x0) goto LAB_14204c91b;
      (**(code **)(*plVar6 + 8))();
      local_148[0] = local_198[0];
    }
    local_198[0] = AK::MemoryMgr::StartProfileThreadUsage;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_f8,param_3);
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x38));
    LOCK();
    *(undefined4 *)(param_1 + 0x40) = 1;
    UNLOCK();
    iVar1 = *(int *)(param_1 + 0x50);
    *(int *)(param_1 + 0x50) = iVar1 + 1;
    if (*(int *)(param_1 + 0x54) < iVar1 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<160,8>_>,FDefaultAllocator>::ResizeGrow
                ((longlong *)(param_1 + 0x48),iVar1);
    }
    lVar7 = (longlong)iVar1 * 0xa0 + *(longlong *)(param_1 + 0x48);
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(lVar7,local_148);
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(lVar7 + 0x50,local_f8);
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x38));
    LOCK();
    *(undefined4 *)(param_1 + 0x40) = 0;
    UNLOCK();
    if (local_b8 != 0) {
      plVar5 = local_e8;
      if (local_c8 != (longlong *)0x0) {
        plVar5 = local_c8;
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))(plVar5,0);
      }
    }
    if (local_c8 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_108 != 0) {
      plVar5 = local_138;
      if (local_118 != (longlong *)0x0) {
        plVar5 = local_118;
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))(plVar5,0);
      }
    }
    if (local_118 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  else {
    if (*(int *)(param_3 + 8) != 0) {
      plVar5 = (longlong *)param_3[6];
      if ((longlong *)param_3[6] == (longlong *)0x0) {
        plVar5 = param_3 + 2;
      }
      if (plVar5 != (longlong *)0x0) {
        uVar4 = (**(code **)(*plVar5 + 8))();
      }
    }
    cVar2 = (*(code *)*param_3)(uVar4);
    if (cVar2 == '\0') {
      LOCK();
      cVar2 = *(char *)(param_1 + 0x30);
      if (cVar2 == '\0') {
        *(char *)(param_1 + 0x30) = '\0';
        cVar2 = '\0';
      }
      UNLOCK();
      if (cVar2 < '\a') goto LAB_14204c89b;
    }
    cVar2 = FUN_142045c10(param_1);
    if ((cVar2 == '\0') && (cVar2 = FUN_14204cfe0(), cVar2 == '\0')) goto LAB_14204c89b;
    FUN_14204fd00(param_1);
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_1e8,local_198);
    (**(code **)(**(longlong **)(param_1 + 0x88) + 0x48))(*(longlong **)(param_1 + 0x88),local_1e8);
  }
  if (local_158 != 0) {
    plVar5 = local_188;
    if (local_168 != (longlong *)0x0) {
      plVar5 = local_168;
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (local_168 != (longlong *)0x0) {
    FMemory::Free();
  }
LAB_14204ca3e:
  if (*(int *)(param_2 + 0x40) != 0) {
    plVar5 = *(longlong **)(param_2 + 0x30);
    if (*(longlong **)(param_2 + 0x30) == (longlong *)0x0) {
      plVar5 = (longlong *)(param_2 + 0x10);
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (*(longlong *)(param_2 + 0x30) != 0) {
    FMemory::Free();
  }
  if (*(int *)(param_3 + 8) != 0) {
    plVar5 = (longlong *)param_3[6];
    if ((longlong *)param_3[6] == (longlong *)0x0) {
      plVar5 = param_3 + 2;
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (param_3[6] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14204cae0 FUN_14204cae0 body=322 status=ok
// SIG undefined FUN_14204cae0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14204cae0(longlong param_1)

{
  char cVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  code *local_c8 [2];
  longlong local_b8 [4];
  longlong *local_98;
  int local_88;
  longlong local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  LOCK();
  cVar1 = *(char *)(param_1 + 0x30);
  if (cVar1 == '\0') {
    *(char *)(param_1 + 0x30) = '\0';
    cVar1 = '\0';
  }
  UNLOCK();
  if (cVar1 < '\t') {
    LOCK();
    *(int *)(param_1 + 0x1d8) = *(int *)(param_1 + 0x1d8) + 1;
    UNLOCK();
    local_78 = param_1;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_68);
    local_98 = (longlong *)0x0;
    local_88 = 0;
    puVar2 = (undefined8 *)FUN_140438ef0(0x70,local_b8);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &PTR_CopyToEmptyStorage_144f71a98;
      puVar2[2] = local_78;
      TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar2 + 4,local_68);
    }
    local_c8[0] = FUN_14202bf70;
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
    FUN_14207a590(*(undefined8 *)(param_1 + 0x88),local_c8);
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
  }
  return;
}



// FUNCTION 14204cc30 FUN_14204cc30 body=9 status=ok
// SIG undefined FUN_14204cc30(void)

void FUN_14204cc30(longlong param_1)

{
  FUN_14204cae0(*(undefined8 *)(param_1 + 0x78));
  return;
}



// FUNCTION 14204cc40 FUN_14204cc40 body=297 status=ok
// SIG undefined FUN_14204cc40(void)

void FUN_14204cc40(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  bool bVar6;
  code *local_a8 [2];
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined4 local_68;
  undefined1 local_58 [80];
  
  if (DAT_146acd048 == '\0') {
    LOCK();
    param_2 = (ulonglong)DAT_146accf28;
    UNLOCK();
    DAT_146acd048 = '\x01';
    DAT_146accf28 = (uint)(*DAT_146accf68 != 0);
  }
  LOCK();
  bVar6 = DAT_146accf28 == 0;
  if (bVar6) {
    DAT_146accf28 = 0;
  }
  UNLOCK();
  if (bVar6) {
    local_78 = 0;
    local_68 = 0;
    puVar4 = (undefined8 *)FUN_140438ef0(0x60,local_98);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &PTR_CopyToEmptyStorage_1444f81f0;
      TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar4 + 2,param_1);
    }
    local_a8[0] = UE4Function_Private::
                  TFunctionRefCaller<<lambda_50573a4081bc06268289253819177437>,void___cdecl(void)>::
                  Call;
    FUN_14204c280(local_a8);
  }
  else {
    cVar2 = FUN_142059d40(param_1,param_2);
    plVar5 = DAT_146accf38;
    if (cVar2 != '\0') {
      lVar1 = *DAT_146accf38;
      uVar3 = FUN_142016a40(local_58,param_1);
      (**(code **)(lVar1 + 0x48))(plVar5,uVar3);
    }
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    plVar5 = *(longlong **)(param_1 + 0x30);
    if (*(longlong **)(param_1 + 0x30) == (longlong *)0x0) {
      plVar5 = (longlong *)(param_1 + 0x10);
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14204cd70 FUN_14204cd70 body=618 status=ok
// SIG undefined FUN_14204cd70(void)

void FUN_14204cd70(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  DWORD DVar4;
  undefined8 uVar5;
  longlong lVar6;
  DWORD *pDVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  int iVar10;
  RefCountImpl *this;
  longlong *plVar11;
  LARGE_INTEGER local_res10;
  longlong local_res18;
  LARGE_INTEGER local_res20;
  undefined8 uVar12;
  
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)))) {
    this = (RefCountImpl *)0x0;
    if ((RefCountImpl *)*param_2 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef((RefCountImpl *)*param_2);
      this = (RefCountImpl *)*param_2;
    }
    uVar5 = FBaseGraphTask::GetSmallTaskAllocator();
    QueryPerformanceCounter(&local_res20);
    lVar6 = FUN_142039c70();
    if ((lVar6 != 0) && (lVar6 = *(longlong *)(lVar6 + 0x40), lVar6 != 0)) {
      FUN_14207ab60(lVar6,uVar5);
      (**(code **)(*(longlong *)this + 8))(this);
      FUN_14207ab60(lVar6,0);
    }
    QueryPerformanceCounter(&local_res10);
    DAT_146ac3af4 = DAT_146ac3af4 + (local_res10.s.LowPart - local_res20._0_4_);
    if (this != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(this);
    }
  }
  else {
    pDVar7 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
    plVar8 = TlsGetValue(*pDVar7);
    plVar11 = (longlong *)0x0;
    if (plVar8 == (longlong *)0x0) {
      plVar8 = (longlong *)operator_new(0x18);
      if (plVar8 != (longlong *)0x0) {
        *plVar8 = 0;
        plVar8[1] = 0;
        *(undefined4 *)(plVar8 + 2) = 0;
        plVar11 = plVar8;
      }
      TlsSetValue(*pDVar7,plVar11);
      plVar8 = plVar11;
    }
    plVar11 = (longlong *)plVar8[1];
    if (plVar11 == (longlong *)0x0) {
      plVar11 = (longlong *)*plVar8;
      if (plVar11 == (longlong *)0x0) {
        lVar6 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar7 + 2);
        plVar8[1] = lVar6;
        if (lVar6 == 0) {
          puVar9 = (undefined8 *)FMemory::Malloc(0x2000,0);
          plVar8[1] = (longlong)puVar9;
          lVar6 = 0x1f;
          do {
            puVar2 = puVar9 + 0x20;
            *puVar9 = puVar2;
            lVar6 = lVar6 + -1;
            puVar9 = puVar2;
          } while (lVar6 != 0);
          *puVar2 = 0;
        }
        plVar11 = (longlong *)plVar8[1];
        iVar10 = 0x20;
        *(undefined4 *)(plVar8 + 2) = 0x20;
      }
      else {
        iVar10 = 0x20;
        plVar8[1] = (longlong)plVar11;
        *(undefined4 *)(plVar8 + 2) = 0x20;
        *plVar8 = 0;
      }
    }
    else {
      iVar10 = (int)plVar8[2];
    }
    plVar8[1] = *plVar11;
    *(int *)(plVar8 + 2) = iVar10 + -1;
    *plVar11 = (longlong)&PTR_FUN_143f3edd8;
    *(undefined4 *)(plVar11 + 1) = 0xff;
    uVar5 = 0;
    uVar12 = 0;
    *(undefined4 *)((longlong)plVar11 + 0xc) = 1;
    *(undefined1 *)(plVar11 + 3) = 0;
    *plVar11 = (longlong)&PTR_FUN_144f712e8;
    plVar11[4] = 0;
    lVar6 = 0;
    if ((RefCountImpl *)*param_2 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef((RefCountImpl *)*param_2);
      lVar6 = *param_2;
    }
    plVar11[2] = lVar6;
    lVar6 = plVar11[4];
    piVar1 = (int *)(lVar6 + 0x48);
    if (lVar6 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    local_res18 = lVar6;
    FUN_14048a3d0(plVar11,0,0xff,1,uVar5,uVar12);
    if (lVar6 != 0) {
      LOCK();
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        FGraphEvent::Recycle(local_res18);
      }
    }
  }
  if ((RefCountImpl *)*param_2 == (RefCountImpl *)0x0) {
    return;
  }
  Scaleform::RefCountImpl::Release((RefCountImpl *)*param_2);
  return;
}



// FUNCTION 14204cfe0 FUN_14204cfe0 body=88 status=ok
// SIG undefined FUN_14204cfe0(void)

bool FUN_14204cfe0(void)

{
  int *piVar1;
  char cVar2;
  DWORD DVar3;
  
  piVar1 = DAT_146acc990;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    if (DVar3 != DAT_1468c21c0) {
      return piVar1[1] != 0;
    }
  }
  return *piVar1 != 0;
}



// FUNCTION 14204d040 FUN_14204d040 body=322 status=ok
// SIG undefined FUN_14204d040(void)

void FUN_14204d040(longlong param_1)

{
  char *pcVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  char cVar8;
  undefined8 *puVar9;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 *local_68 [2];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  
  pcVar1 = (char *)(*(longlong *)(param_1 + 0x78) + 0x30);
  LOCK();
  cVar8 = *pcVar1;
  if (cVar8 == '\0') {
    *pcVar1 = '\0';
    cVar8 = '\0';
  }
  UNLOCK();
  if (cVar8 < '\x06') {
    puVar9 = (undefined8 *)
             TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_78);
    plVar5 = (longlong *)puVar9[1];
    uVar6 = *puVar9;
    plVar2 = plVar5 + 1;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)plVar2 = (int)*plVar2 + 1;
      UNLOCK();
    }
    local_38 = 0;
    local_28 = 0;
    puVar9 = (undefined8 *)FUN_140438ef0(0x20,local_58);
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = &PTR_FUN_14467a5d8;
      puVar9[1] = param_1;
      puVar9[2] = uVar6;
      puVar9[3] = plVar5;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)plVar2 = (int)*plVar2 + 1;
        UNLOCK();
      }
    }
    local_68[0] = &LAB_14202c8e0;
    FUN_1420326d0(param_1,local_68);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      lVar7 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar3 = (int *)((longlong)plVar5 + 0xc);
        iVar4 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_70 + 1;
      lVar7 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar3 = (int *)((longlong)local_70 + 0xc);
        iVar4 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_70 + 8))(local_70,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 14204d190 FUN_14204d190 body=80 status=ok
// SIG undefined FUN_14204d190(void)

void FUN_14204d190(undefined8 param_1)

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
  local_58[0] = &LAB_14202c930;
  FUN_14204c280(local_58);
  return;
}



// FUNCTION 14204d1e0 FUN_14204d1e0 body=409 status=ok
// SIG undefined FUN_14204d1e0(void)

void FUN_14204d1e0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 *local_68;
  undefined8 local_60;
  undefined1 local_58 [64];
  
  local_68 = (undefined8 *)0x0;
  local_60 = 0;
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xf0));
  TArray<TSharedPtr<OculusHMD::FLayer,1>,FDefaultAllocator>::operator=(&local_68,param_1 + 0xe0);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xf0));
  puVar9 = local_68 + (longlong)(int)local_60 * 2;
  for (puVar10 = local_68; puVar10 != puVar9; puVar10 = puVar10 + 2) {
    uVar3 = *puVar10;
    uVar7 = FUN_14203d400(uVar3,local_58);
    FUN_142056420(uVar3,uVar7);
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_68);
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x120));
  plVar11 = *(longlong **)(param_1 + 0x110);
  plVar12 = plVar11 + (longlong)*(int *)(param_1 + 0x118) * 2;
  for (; plVar11 != plVar12; plVar11 = plVar11 + 2) {
    plVar4 = (longlong *)plVar11[1];
    lVar5 = *plVar11;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    cVar6 = FWeakObjectPtr::IsValid(lVar5 + 0x70,0,1);
    if ((((cVar6 != '\0') &&
         (plVar8 = (longlong *)FWeakObjectPtr::Get(lVar5 + 0x70), plVar8 != (longlong *)0x0)) &&
        (*(longlong *)(lVar5 + 0x80) != 0)) && (*(longlong *)(lVar5 + 0x78) != 0)) {
      LOCK();
      cVar6 = *(char *)(lVar5 + 0x30);
      if (cVar6 == '\0') {
        *(char *)(lVar5 + 0x30) = '\0';
        cVar6 = '\0';
      }
      UNLOCK();
      if ('\x04' < cVar6) {
        (**(code **)(*plVar8 + 0x2d0))();
      }
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar4 + 1;
      lVar5 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4);
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014204d372. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x120));
  return;
}



// FUNCTION 14204d380 FUN_14204d380 body=145 status=ok
// SIG undefined FUN_14204d380(void)

bool FUN_14204d380(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 local_18 [8];
  longlong *local_10;
  
  if (*param_2 == 0) {
    plVar4 = (longlong *)FUN_1420392d0(param_1,local_18);
    if (param_2 != plVar4) {
      *param_2 = *plVar4;
      *plVar4 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,plVar4 + 1);
    }
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_10 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
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
  return *param_2 != 0;
}



// FUNCTION 14204d420 FUN_14204d420 body=262 status=ok
// SIG undefined FUN_14204d420(void)

ulonglong FUN_14204d420(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 local_18 [8];
  longlong *local_10;
  
  plVar1 = param_2 + 1;
  if ((*param_2 != 0) && (*plVar1 != 0)) {
    plVar8 = (longlong *)0x0;
    puVar2 = (uint *)(*plVar1 + 8);
    LOCK();
    uVar7 = *puVar2;
    if (uVar7 == 0) {
      *puVar2 = 0;
    }
    else {
      plVar8 = (longlong *)(ulonglong)uVar7;
    }
    UNLOCK();
    if (0 < (int)plVar8) goto LAB_14204d4f9;
  }
  plVar8 = (longlong *)FUN_1420392d0(param_1,local_18);
  *param_2 = *plVar8;
  plVar5 = (longlong *)plVar8[1];
  plVar9 = (longlong *)*plVar1;
  if (plVar5 != plVar9) {
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
      UNLOCK();
      plVar9 = (longlong *)*plVar1;
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      piVar3 = (int *)((longlong)plVar9 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      plVar8 = (longlong *)(ulonglong)(iVar4 - 1U);
      if (iVar4 - 1U == 0) {
        plVar8 = (longlong *)(**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
    *plVar1 = (longlong)plVar5;
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_10 + 1;
    lVar6 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    uVar7 = (int)lVar6 - 1;
    plVar8 = (longlong *)(ulonglong)uVar7;
    if (uVar7 == 0) {
      plVar8 = (longlong *)(**(code **)*local_10)(local_10);
      LOCK();
      piVar3 = (int *)((longlong)local_10 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        plVar8 = (longlong *)(**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
LAB_14204d4f9:
  if ((*param_2 != 0) && (*plVar1 != 0)) {
    plVar8 = (longlong *)0x0;
    puVar2 = (uint *)(*plVar1 + 8);
    LOCK();
    uVar7 = *puVar2;
    if (uVar7 == 0) {
      *puVar2 = 0;
    }
    else {
      plVar8 = (longlong *)(ulonglong)uVar7;
    }
    UNLOCK();
    if (0 < (int)plVar8) {
      return CONCAT71((int7)((ulonglong)plVar8 >> 8),1);
    }
  }
  return (ulonglong)plVar8 & 0xffffffffffffff00;
}



// FUNCTION 14204d530 FUN_14204d530 body=133 status=ok
// SIG undefined FUN_14204d530(void)

void FUN_14204d530(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xa8));
  TArray<TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>,TSizedDefaultAllocator<32>_>
  ::AddUniqueImpl<TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>_const_&>
            (param_1 + 0xb0,param_2);
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xa8));
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
  return;
}



// FUNCTION 14204d5c0 Rehash body=539 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FName,FDiskCachedAssetData>,TDefaultMapHashableKeyFuncs<FName,FDiskCachedAssetData,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  uint *puVar13;
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
  uVar8 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar8 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar8) {
      uVar10 = 0;
      uVar12 = (ulonglong)uVar8;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar9 * 4) = 0xffffffff;
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
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = puStack_28;
      }
      uVar8 = *puVar13;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar8 == 0) {
        lVar5 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar7 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar7;
        if (bVar4) goto LAB_14204d6ff;
        uVar8 = puVar13[lVar5 + 1];
      }
      uStack_54 = -uVar8 & uVar8;
      iVar7 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      iStack_44 = (iStack_40 - iVar7) + 0x1f;
      if (iVar3 < iStack_44) {
LAB_14204d6ff:
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
        puVar11 = (undefined8 *)((longlong)iStack_1c * 0xf0 + *param_1);
        uVar8 = (int)((ulonglong)*puVar11 >> 0x20) + (int)*puVar11 & (int)*plVar2 - 1U;
        *(uint *)((longlong)puVar11 + 0xec) = uVar8;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(puVar11 + 0x1d) =
             *(undefined4 *)
              ((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar8) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar8) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 14204d7e0 FUN_14204d7e0 body=572 status=ok
// SIG undefined FUN_14204d7e0(void)

void FUN_14204d7e0(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  DWORD DVar4;
  DWORD *pDVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  int iVar9;
  longlong *plVar10;
  LARGE_INTEGER local_res8;
  longlong local_res10;
  LARGE_INTEGER local_res18;
  undefined8 local_res20;
  
  if (*(longlong **)(param_1 + 0xc0) != (longlong *)0x0) {
    plVar10 = (longlong *)0x0;
    if (**(longlong **)(param_1 + 0xc0) != 0) {
      if ((DAT_146ac3ac5 == '\0') &&
         (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
          (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)))) {
        plVar10 = (longlong *)**(undefined8 **)(param_1 + 0xc0);
        FBaseGraphTask::GetSmallTaskAllocator();
        QueryPerformanceCounter(&local_res18);
        (**(code **)(*plVar10 + 0x10))(plVar10);
        QueryPerformanceCounter(&local_res8);
        DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res18._0_4_);
      }
      else {
        pDVar5 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
        plVar6 = TlsGetValue(*pDVar5);
        if (plVar6 == (longlong *)0x0) {
          plVar6 = (longlong *)operator_new(0x18);
          if (plVar6 != (longlong *)0x0) {
            *plVar6 = 0;
            plVar6[1] = 0;
            *(undefined4 *)(plVar6 + 2) = 0;
            plVar10 = plVar6;
          }
          TlsSetValue(*pDVar5,plVar10);
          plVar6 = plVar10;
        }
        plVar10 = (longlong *)plVar6[1];
        if (plVar10 == (longlong *)0x0) {
          plVar10 = (longlong *)*plVar6;
          if (plVar10 == (longlong *)0x0) {
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
            plVar10 = (longlong *)plVar6[1];
            iVar9 = 0x20;
            *(undefined4 *)(plVar6 + 2) = 0x20;
          }
          else {
            iVar9 = 0x20;
            plVar6[1] = (longlong)plVar10;
            *(undefined4 *)(plVar6 + 2) = 0x20;
            *plVar6 = 0;
          }
        }
        else {
          iVar9 = (int)plVar6[2];
        }
        plVar6[1] = *plVar10;
        *(int *)(plVar6 + 2) = iVar9 + -1;
        *plVar10 = (longlong)&PTR_FUN_143f3edd8;
        *(undefined4 *)(plVar10 + 1) = 0xff;
        local_res20 = 0;
        *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
        *plVar10 = (longlong)&PTR_FUN_144f70f38;
        *(undefined1 *)(plVar10 + 3) = 0;
        plVar10[4] = 0;
        plVar10[2] = **(longlong **)(param_1 + 0xc0);
        lVar7 = plVar10[4];
        piVar1 = (int *)(lVar7 + 0x48);
        if (lVar7 != 0) {
          LOCK();
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        local_res10 = lVar7;
        FUN_140445100(plVar10,0,0xff,1,0);
        if (lVar7 != 0) {
          LOCK();
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            FGraphEvent::Recycle(local_res10);
          }
        }
      }
    }
    FMemory::operator_delete(*(undefined8 *)(param_1 + 0xc0),8);
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  FUN_141edede0(param_1 + 0xb0,0);
  return;
}



// FUNCTION 14204da20 ReleaseResource body=76 status=ok
// SIG undefined ReleaseResource(void)

void FScaleformRenderer::ReleaseResource(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  
  cVar2 = IsInRenderingThread();
  if ((cVar2 != '\0') && (plVar1 = *(longlong **)(param_1 + 0x30), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x18))(plVar1,0,0);
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x40))();
    if (*(RefCountImpl **)(param_1 + 0x30) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x30));
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  return;
}



// FUNCTION 14204da70 FUN_14204da70 body=656 status=ok
// SIG undefined FUN_14204da70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_14204da70(longlong param_1,char param_2)

{
  char *pcVar1;
  undefined1 uVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  short *psVar9;
  undefined2 *puVar10;
  char local_res10 [8];
  undefined1 auStack_208 [32];
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined1 local_1d8;
  undefined8 local_1c8;
  ulonglong local_1c0;
  short *local_1b8;
  int local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined1 *local_198 [2];
  undefined1 local_188 [32];
  undefined8 local_168;
  undefined4 local_158;
  undefined1 local_148 [80];
  undefined1 local_f8 [192];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  pcVar1 = (char *)(*(longlong *)(param_1 + 0x78) + 0x30);
  LOCK();
  cVar3 = *pcVar1;
  if (cVar3 == '\0') {
    *pcVar1 = '\0';
    cVar3 = '\0';
  }
  UNLOCK();
  if (cVar3 < '\x06') {
    local_res10[0] = param_2;
    cVar3 = FUN_142045c10(*(undefined8 *)(param_1 + 0x78));
    if (cVar3 == '\0') {
      uStack_1a0 = local_res10;
      local_168 = 0;
      local_158 = 0;
      local_1a8 = param_1;
      puVar4 = (undefined8 *)FUN_140438ef0(0x18,local_188);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = &PTR_FUN_143f77c18;
        *(undefined4 *)(puVar4 + 1) = (undefined4)local_1a8;
        *(undefined4 *)((longlong)puVar4 + 0xc) = local_1a8._4_4_;
        *(undefined4 *)(puVar4 + 2) = (undefined4)uStack_1a0;
        *(undefined4 *)((longlong)puVar4 + 0x14) = uStack_1a0._4_4_;
      }
      local_198[0] = &LAB_14202bf00;
      if (*(int *)(param_1 + 0x20) == 0) {
        puVar10 = &DAT_143f3eda8;
      }
      else {
        puVar10 = *(undefined2 **)(param_1 + 0x18);
      }
      FString::PrintfImpl(&local_1b8,L"FGFxObject::RemoveAllChildren(%s)",puVar10);
      local_1c8 = 0;
      psVar9 = &DAT_143f3eda8;
      if (local_1b0 != 0) {
        psVar9 = local_1b8;
      }
      local_1c0 = 0;
      if ((psVar9 != (short *)0x0) && (*psVar9 != 0)) {
        lVar7 = -1;
        do {
          lVar7 = lVar7 + 1;
        } while (psVar9[lVar7] != 0);
        uVar6 = (int)lVar7 + 1;
        local_1c0 = (ulonglong)uVar6;
        if (0 < (int)uVar6) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1c8,0);
        }
        FGenericPlatformString::Memcpy(local_1c8,psVar9,(longlong)(int)uVar6 * 2);
      }
      FUN_1410b2c00(local_f8,&local_1c8,local_198);
      if (local_1b8 != (short *)0x0) {
        FMemory::Free();
      }
      uVar5 = FUN_1410ca7e0(local_f8,local_148);
      FUN_1420326d0(param_1,uVar5);
      FUN_140d1b3a0(local_f8);
      cVar3 = *(char *)(local_38 + 0x58);
      while (cVar3 == '\0') {
        (**(code **)(**(longlong **)(local_38 + 0x50) + 0x20))
                  (*(longlong **)(local_38 + 0x50),0x5d638865,0);
        cVar3 = *(char *)(local_38 + 0x58);
      }
      uVar2 = *(undefined1 *)(local_38 + 0x60);
      FUN_140ce1dc0(local_f8);
      return uVar2;
    }
    uVar6 = *(uint *)(param_1 + 0xa0) & 0x8f;
    if (uVar6 - 8 < 4) {
      local_1d8 = uVar6 == 10;
      local_1e0 = 0;
      local_1e8 = 0;
      cVar3 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x30))
                        (*(longlong **)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa8),0,
                         "removeChildren");
      if (cVar3 != '\0') {
        if (local_res10[0] != '\0') {
          puVar4 = *(undefined8 **)(param_1 + 0xe0);
          puVar8 = puVar4 + (longlong)*(int *)(param_1 + 0xe8) * 2;
          for (; puVar4 != puVar8; puVar4 = puVar4 + 2) {
            (*(code *)**(undefined8 **)*puVar4)();
          }
        }
        TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty
                  (param_1 + 0xe0,0);
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 14204dd00 FUN_14204dd00 body=294 status=ok
// SIG undefined FUN_14204dd00(void)

void FUN_14204dd00(longlong param_1,int param_2,int param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  
  if (param_3 != 0) {
    lVar6 = *(longlong *)(param_1 + 0x400);
    if (*(longlong *)(param_1 + 0x400) == 0) {
      lVar6 = param_1;
    }
    plVar7 = (longlong *)(lVar6 + 8 + (longlong)param_2 * 0x10);
    iVar5 = param_3;
    do {
      plVar3 = (longlong *)*plVar7;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar3)(plVar3);
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
      plVar7 = plVar7 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    iVar5 = *(int *)(param_1 + 0x408);
    iVar4 = (iVar5 - param_2) - param_3;
    if (iVar4 != 0) {
      lVar6 = *(longlong *)(param_1 + 0x400);
      if (*(longlong *)(param_1 + 0x400) == 0) {
        lVar6 = param_1;
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(lVar6 + (longlong)param_2 * 0x10),
                 (void *)((longlong)(param_2 + param_3) * 0x10 + lVar6),(longlong)iVar4 << 4);
      iVar5 = *(int *)(param_1 + 0x408);
    }
    *(int *)(param_1 + 0x408) = iVar5 - param_3;
    if (param_4 != '\0') {
      FUN_14204fbe0(param_1);
    }
  }
  return;
}



// FUNCTION 14204de30 FUN_14204de30 body=726 status=ok
// SIG undefined FUN_14204de30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_14204de30(longlong param_1,longlong *param_2,char param_3)

{
  char *pcVar1;
  undefined1 uVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  short *psVar11;
  uint uVar12;
  undefined2 *puVar13;
  char local_res18 [16];
  undefined1 auStack_228 [32];
  longlong local_208;
  undefined8 local_200;
  undefined1 local_1f8;
  undefined8 local_1e8;
  ulonglong local_1e0;
  short *local_1d8;
  int local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  char *local_1b8;
  undefined1 *local_1a8 [2];
  undefined1 local_198 [32];
  undefined8 local_178;
  undefined4 local_168;
  undefined1 local_158 [80];
  undefined1 local_108 [192];
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_228;
  pcVar1 = (char *)(*(longlong *)(param_1 + 0x78) + 0x30);
  LOCK();
  cVar4 = *pcVar1;
  if (cVar4 == '\0') {
    *pcVar1 = '\0';
    cVar4 = '\0';
  }
  UNLOCK();
  if (cVar4 < '\x06') {
    local_res18[0] = param_3;
    cVar4 = FUN_142045c10(*(undefined8 *)(param_1 + 0x78));
    if (cVar4 == '\0') {
      local_1b8 = local_res18;
      local_178 = 0;
      local_168 = 0;
      local_1c8 = param_1;
      uStack_1c0 = param_2;
      puVar5 = (undefined8 *)FUN_140438ef0(0x20,local_198);
      if (puVar5 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar5 + 1) = (undefined4)local_1c8;
        *(undefined4 *)((longlong)puVar5 + 0xc) = local_1c8._4_4_;
        *(undefined4 *)(puVar5 + 2) = (undefined4)uStack_1c0;
        *(undefined4 *)((longlong)puVar5 + 0x14) = uStack_1c0._4_4_;
        *puVar5 = &PTR_FUN_143f4d0b0;
        puVar5[3] = local_1b8;
      }
      local_1a8[0] = &LAB_14202bfc0;
      if (*(int *)(*param_2 + 0x20) == 0) {
        puVar13 = &DAT_143f3eda8;
      }
      else {
        puVar13 = *(undefined2 **)(*param_2 + 0x18);
      }
      FString::PrintfImpl(&local_1d8,L"FGFxObject::RemoveChild(%s)",puVar13);
      local_1e8 = 0;
      psVar11 = &DAT_143f3eda8;
      if (local_1d0 != 0) {
        psVar11 = local_1d8;
      }
      local_1e0 = 0;
      if ((psVar11 != (short *)0x0) && (*psVar11 != 0)) {
        lVar10 = -1;
        do {
          lVar10 = lVar10 + 1;
        } while (psVar11[lVar10] != 0);
        uVar12 = (int)lVar10 + 1;
        local_1e0 = (ulonglong)uVar12;
        if (0 < (int)uVar12) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1e8,0);
        }
        FGenericPlatformString::Memcpy(local_1e8,psVar11,(longlong)(int)uVar12 * 2);
      }
      FUN_1410b2c00(local_108,&local_1e8,local_1a8);
      if (local_1d8 != (short *)0x0) {
        FMemory::Free();
      }
      uVar6 = FUN_1410ca7e0(local_108,local_158);
      FUN_1420326d0(param_1,uVar6);
      FUN_140d1b3a0(local_108);
      cVar4 = *(char *)(local_48 + 0x58);
      while (cVar4 == '\0') {
        (**(code **)(**(longlong **)(local_48 + 0x50) + 0x20))
                  (*(longlong **)(local_48 + 0x50),0x5d638865,0);
        cVar4 = *(char *)(local_48 + 0x58);
      }
      uVar2 = *(undefined1 *)(local_48 + 0x60);
      FUN_140ce1dc0(local_108);
      return uVar2;
    }
    uVar12 = *(uint *)(param_1 + 0xa0) & 0x8f;
    if (uVar12 - 8 < 4) {
      local_1f8 = uVar12 == 10;
      local_208 = *param_2 + 0x88;
      local_200 = 1;
      cVar4 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x30))
                        (*(longlong **)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa8),0,
                         "removeChild");
      if (cVar4 != '\0') {
        plVar3 = *(longlong **)(param_1 + 0xe0);
        if (plVar3 != plVar3 + (longlong)*(int *)(param_1 + 0xe8) * 2) {
          plVar8 = plVar3;
          while (*plVar8 != *param_2) {
            plVar8 = plVar8 + 2;
            if (plVar8 == plVar3 + (longlong)*(int *)(param_1 + 0xe8) * 2) {
              return 1;
            }
          }
          uVar9 = (longlong)plVar8 - (longlong)plVar3 >> 4;
          iVar7 = (int)uVar9;
          if (iVar7 != -1) {
            if (local_res18[0] != '\0') {
              (*(code *)**(undefined8 **)plVar3[(longlong)iVar7 * 2])();
            }
            TArray<TSharedPtr<Chaos::FImplicitObject,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                      (param_1 + 0xe0,uVar9 & 0xffffffff,1,1);
          }
        }
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 14204e110 FUN_14204e110 body=507 status=ok
// SIG undefined FUN_14204e110(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14204e110(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  undefined1 local_res8 [8];
  
  lVar2 = FUN_141607f00();
  TBaseMulticastDelegate<void>::Remove(lVar2 + 0xd8,*(undefined8 *)(param_1 + 0x298));
  uVar3 = FUN_14244d3d0();
  TBaseMulticastDelegate<void>::Remove(uVar3,*(undefined8 *)(param_1 + 0x2a0));
  lVar2 = FUN_14244d3d0();
  TBaseMulticastDelegate<void>::Remove(lVar2 + 0x18,*(undefined8 *)(param_1 + 0x2a8));
  TBaseMulticastDelegate<void>::Remove(&DAT_1464af070,*(undefined8 *)(param_1 + 0x260));
  TBaseMulticastDelegate<void>::Remove(&DAT_1464af088,*(undefined8 *)(param_1 + 0x268));
  TBaseMulticastDelegate<void>::Remove(&DAT_1464af0a0,*(undefined8 *)(param_1 + 0x270));
  TBaseMulticastDelegate<void>::Remove(&DAT_1464af0b8,*(undefined8 *)(param_1 + 0x278));
  uVar7 = 0;
  lVar2 = *(longlong *)(param_1 + 0x280);
  uVar9 = uVar7;
  uVar11 = uVar7;
  iVar5 = DAT_1464af120;
  if (0 < DAT_1464af120) {
    do {
      plVar10 = (longlong *)(DAT_1464af118 + uVar11);
      if ((((int)plVar10[1] != 0) && (plVar4 = (longlong *)*plVar10, plVar4 != (longlong *)0x0)) &&
         (plVar4 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4,local_res8),
         iVar5 = DAT_1464af120, *plVar4 == lVar2)) {
        if (((int)plVar10[1] != 0) && (plVar4 = (longlong *)*plVar10, plVar4 != (longlong *)0x0)) {
          (**(code **)(*plVar4 + 0x28))(plVar4,0);
          if (*plVar10 != 0) {
            lVar2 = FMemory::Realloc(*plVar10,0,0);
            *plVar10 = lVar2;
          }
          *(undefined4 *)(plVar10 + 1) = 0;
          iVar5 = DAT_1464af120;
        }
        break;
      }
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
      uVar11 = uVar11 + 0x10;
    } while ((int)uVar8 < iVar5);
  }
  if (DAT_1464af12c < 1) {
    uVar9 = uVar7;
    iVar6 = iVar5;
    if (0 < iVar5) {
      do {
        if (((*(int *)(uVar7 + 8 + DAT_1464af118) == 0) ||
            (*(longlong **)(uVar7 + DAT_1464af118) == (longlong *)0x0)) ||
           (cVar1 = (**(code **)(**(longlong **)(uVar7 + DAT_1464af118) + 0x10))(), cVar1 != '\0'))
        {
          TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_1464af118,uVar9,1,1);
        }
        else {
          uVar9 = (ulonglong)((int)uVar9 + 1);
          uVar7 = uVar7 + 0x10;
        }
        iVar6 = DAT_1464af120;
      } while ((int)uVar9 < DAT_1464af120);
    }
    _DAT_1464af128 = iVar6 * 2;
    if (_DAT_1464af128 < 3) {
      _DAT_1464af128 = 2;
    }
    if ((_DAT_1464af128 < iVar5) && (DAT_1464af124 != iVar6)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_1464af118);
    }
  }
  TBaseMulticastDelegate<void>::Remove(&DAT_1464af148,*(undefined8 *)(param_1 + 0x288));
  TBaseMulticastDelegate<void>::Remove(&DAT_1464af160,*(undefined8 *)(param_1 + 0x290));
  return;
}



// FUNCTION 14204e310 FUN_14204e310 body=988 status=ok
// SIG undefined FUN_14204e310(void)

void FUN_14204e310(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  longlong *plVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  bool bVar18;
  uint local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong *local_b8;
  uint local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong *local_88;
  uint local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  
  uVar9 = 0;
  local_b8 = (longlong *)0x0;
  lVar12 = *param_3;
  local_c8 = 0xffffffffffffffff;
  uStack_c0 = 0xffffffffffffffff;
  local_b0 = 0;
  uVar13 = *(uint *)(lVar12 + 0x50) & 0x8f;
  if ((uVar13 - 8 < 4) &&
     (cVar5 = (**(code **)(**(longlong **)(lVar12 + 0x48) + 0x20))
                        (*(longlong **)(lVar12 + 0x48),*(undefined8 *)(lVar12 + 0x58),"eventName",
                         &local_c8,uVar13 == 10), cVar5 != '\0')) {
    local_80 = local_b0;
    local_98 = 0xffffffffffffffff;
    uStack_90 = 0xffffffffffffffff;
    local_88 = (longlong *)0x0;
    local_68 = 0xffffffffffffffff;
    uStack_60 = 0xffffffffffffffff;
    local_58 = 0;
    local_50 = 0;
    local_78 = local_a8;
    local_70 = local_a0;
    if ((local_b0 >> 6 & 1) != 0) {
      local_88 = local_b8;
      (**(code **)(*local_b8 + 8))(local_b8,&local_98);
    }
    FUN_1410b5e10(&local_68,*param_3 + 0x38);
    FUN_1420458d0(*param_2,"removeEventListener",0,&local_98,2);
    plVar14 = (longlong *)*param_3;
    if ((*(uint *)(plVar14 + 10) & 0x8f) - 8 < 4) {
      if ((*(uint *)(plVar14 + 10) >> 6 & 1) != 0) {
        (**(code **)(*(longlong *)plVar14[9] + 0x10))
                  ((longlong *)plVar14[9],plVar14 + 7,plVar14[0xb]);
        plVar14[9] = 0;
      }
      *(undefined4 *)(plVar14 + 10) = 1;
    }
    if ((*(uint *)(plVar14 + 4) & 0x8f) - 8 < 4) {
      if ((*(uint *)(plVar14 + 4) >> 6 & 1) != 0) {
        (**(code **)(*(longlong *)plVar14[3] + 0x10))((longlong *)plVar14[3],plVar14 + 1,plVar14[5])
        ;
        plVar14[3] = 0;
      }
      *(undefined4 *)(plVar14 + 4) = 1;
    }
    if (*plVar14 != 0) {
      *plVar14 = 0;
    }
    lVar12 = *param_2;
    plVar14 = (longlong *)(lVar12 + 0xc0);
    lVar7 = (longlong)*(int *)(lVar12 + 200);
    if (*(int *)(lVar12 + 200) != 0) {
      local_d8 = 0;
      bVar18 = *(longlong *)*plVar14 != *param_3;
      uVar11 = uVar9;
      uVar17 = uVar9;
      do {
        iVar16 = (int)uVar17;
        uVar11 = uVar11 + 1;
        uVar17 = (ulonglong)(iVar16 + 1);
        if ((longlong)uVar11 < lVar7) {
          plVar6 = (longlong *)(uVar11 * 0x10 + *plVar14);
          do {
            if (bVar18 != (*plVar6 != *param_3)) break;
            uVar17 = (ulonglong)((int)uVar17 + 1);
            uVar11 = uVar11 + 1;
            plVar6 = plVar6 + 2;
          } while ((longlong)uVar11 < lVar7);
        }
        iVar15 = (int)uVar17 - iVar16;
        if (bVar18 == false) {
          if (iVar15 != 0) {
            plVar6 = (longlong *)((longlong)iVar16 * 0x10 + 8 + *plVar14);
            do {
              plVar3 = (longlong *)*plVar6;
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
                  iVar16 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar16 == 1) {
                    (**(code **)(*plVar3 + 8))(plVar3,1);
                  }
                }
              }
              plVar6 = plVar6 + 2;
              iVar15 = iVar15 + -1;
            } while (iVar15 != 0);
            uVar9 = (ulonglong)local_d8;
          }
        }
        else {
          iVar8 = (int)uVar9;
          if (iVar8 != iVar16) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)iVar8 * 0x10 + *plVar14),
                       (void *)((longlong)iVar16 * 0x10 + *plVar14),(longlong)iVar15 << 4);
          }
          local_d8 = iVar8 + iVar15;
          uVar9 = (ulonglong)local_d8;
        }
        bVar18 = (bool)(bVar18 ^ 1);
      } while ((longlong)uVar11 < lVar7);
      *(int *)(lVar12 + 200) = (int)uVar9;
    }
    lVar12 = 2;
    puVar10 = &stack0xffffffffffffffc8;
    do {
      lVar12 = lVar12 + -1;
      if ((*(uint *)(puVar10 + -0x18) >> 6 & 1) != 0) {
        (**(code **)(**(longlong **)(puVar10 + -0x20) + 0x10))
                  (*(longlong **)(puVar10 + -0x20),puVar10 + -0x30,*(undefined8 *)(puVar10 + -0x10))
        ;
        *(undefined8 *)(puVar10 + -0x20) = 0;
      }
      *(undefined4 *)(puVar10 + -0x18) = 0;
      puVar10 = puVar10 + -0x30;
    } while (lVar12 != 0);
  }
  if ((local_b0 >> 6 & 1) != 0) {
    (**(code **)(*local_b8 + 0x10))(local_b8,&local_c8,local_a8);
    local_b8 = (longlong *)0x0;
  }
  plVar14 = (longlong *)param_2[1];
  local_b0 = 0;
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar14 + 1;
    lVar12 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar2 = (int *)((longlong)plVar14 + 0xc);
      iVar16 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
  }
  plVar14 = (longlong *)param_3[1];
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar14 + 1;
    lVar12 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar2 = (int *)((longlong)plVar14 + 0xc);
      iVar16 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
  }
  return;
}



// FUNCTION 14204e6f0 FUN_14204e6f0 body=813 status=ok
// SIG undefined FUN_14204e6f0(void)

void FUN_14204e6f0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar8;
  DWORD DVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  int iVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 local_c8;
  longlong local_c0;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a8 [40];
  longlong local_80;
  undefined1 *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  lVar13 = *(longlong *)(param_1 + 0x78);
  cVar8 = FUN_142056970();
  if (cVar8 == '\0') {
    if (*(longlong *)(lVar13 + 0x88) == 0) goto LAB_14204e870;
    cVar8 = FUN_1420794b0();
  }
  else {
    cVar8 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar8 != '\0') || (DAT_1468c21ae == '\0')) goto LAB_14204e870;
    DVar9 = GetCurrentThreadId();
    cVar8 = DVar9 == DAT_1468c21c0;
  }
  if (cVar8 == '\0') {
    puVar10 = (undefined8 *)
              TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_b8);
    plVar3 = (longlong *)puVar10[1];
    uVar4 = *puVar10;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    lVar13 = *param_2;
    local_48 = 0;
    local_38 = 0;
    local_80 = lVar13;
    puVar10 = (undefined8 *)FUN_140438ef0(0x28,local_68);
    if (puVar10 != (undefined8 *)0x0) {
      *puVar10 = &PTR_FUN_1446ba1c8;
      puVar10[1] = param_1;
      puVar10[2] = uVar4;
      puVar10[3] = plVar3;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        lVar13 = local_80;
      }
      puVar10[4] = lVar13;
    }
    local_78[0] = &LAB_14202c170;
    FUN_1420326d0(param_1,local_78);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar3 + 1;
      lVar13 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
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
    if (local_b0 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar3 = local_b0 + 1;
    lVar13 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar13 != 1) {
      return;
    }
    (**(code **)*local_b0)(local_b0);
    LOCK();
    piVar1 = (int *)((longlong)local_b0 + 0xc);
    iVar12 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar12 != 1) {
      return;
    }
    (**(code **)(*local_b0 + 8))(local_b0,1);
    return;
  }
LAB_14204e870:
  if ((*(uint *)(param_1 + 0xa0) & 0x8f) - 8 < 4) {
    lVar13 = *param_2;
    puVar10 = *(undefined8 **)(param_1 + 0xc0);
    iVar12 = *(int *)(param_1 + 200);
    for (puVar14 = puVar10; puVar14 != puVar10 + (longlong)iVar12 * 2; puVar14 = puVar14 + 2) {
      plVar3 = (longlong *)puVar14[1];
      plVar5 = (longlong *)*puVar14;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      lVar6 = *plVar5;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar3 + 1;
        lVar7 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
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
      if (lVar13 == lVar6) {
        iVar12 = (int)((longlong)puVar14 - (longlong)puVar10 >> 4);
        goto LAB_14204e91e;
      }
    }
  }
  iVar12 = -1;
LAB_14204e91e:
  if ((iVar12 < 0) || (*(int *)(param_1 + 200) <= iVar12)) {
    puVar10 = *(undefined8 **)(param_1 + 0xe0);
    puVar14 = puVar10 + (longlong)*(int *)(param_1 + 0xe8) * 2;
    for (; puVar10 != puVar14; puVar10 = puVar10 + 2) {
      plVar3 = (longlong *)puVar10[1];
      uVar4 = *puVar10;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      FUN_14204e6f0(uVar4,param_2);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar3 + 1;
        lVar13 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
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
    }
  }
  else {
    puVar10 = (undefined8 *)((longlong)iVar12 * 0x10 + *(longlong *)(param_1 + 0xc0));
    local_c8 = *puVar10;
    local_c0 = puVar10[1];
    if (local_c0 != 0) {
      LOCK();
      *(int *)(local_c0 + 8) = *(int *)(local_c0 + 8) + 1;
      UNLOCK();
    }
    uVar4 = *(undefined8 *)(param_1 + 0x78);
    uVar11 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_a8);
    FUN_14204e310(uVar4,uVar11,&local_c8);
  }
  return;
}



// FUNCTION 14204ea20 FUN_14204ea20 body=268 status=ok
// SIG undefined FUN_14204ea20(void)

void FUN_14204ea20(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  lVar6 = FUN_142039c70();
  if (lVar6 != 0) {
    AcquireSRWLockExclusive((PSRWLOCK)(lVar6 + 0x120));
    AcquireSRWLockExclusive((PSRWLOCK)(lVar6 + 0x138));
    TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>::Remove
              (lVar6 + 0x110,param_1);
    iVar3 = *(int *)(lVar6 + 0x130);
    *(int *)(lVar6 + 0x130) = iVar3 + 1;
    if (*(int *)(lVar6 + 0x134) < iVar3 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar6 + 0x128,iVar3);
    }
    puVar7 = (undefined8 *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar6 + 0x128));
    *puVar7 = *param_1;
    lVar4 = param_1[1];
    puVar7[1] = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar6 + 0x138));
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar6 + 0x120));
  }
  plVar5 = (longlong *)param_1[1];
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
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return;
}



// FUNCTION 14204eb30 FUN_14204eb30 body=641 status=ok
// SIG undefined FUN_14204eb30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_14204eb30(longlong param_1,undefined1 param_2)

{
  char *pcVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 uVar10;
  bool bVar11;
  short *psVar12;
  undefined2 *puVar13;
  undefined1 local_res10 [8];
  undefined1 auStack_1f8 [32];
  undefined8 local_1d8;
  ulonglong local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined4 local_1b8;
  short *local_1b0;
  int local_1a8;
  undefined1 *local_198 [2];
  undefined1 local_188 [32];
  undefined8 local_168;
  undefined4 local_158;
  undefined1 local_148 [80];
  undefined1 local_f8 [192];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  bVar11 = false;
  local_1b8 = 0;
  pcVar1 = (char *)(*(longlong *)(param_1 + 0x78) + 0x30);
  LOCK();
  cVar5 = *pcVar1;
  if (cVar5 == '\0') {
    *pcVar1 = '\0';
    cVar5 = '\0';
  }
  UNLOCK();
  if ('\x05' < cVar5) {
    return 0;
  }
  local_res10[0] = param_2;
  cVar5 = FUN_142045c10(*(undefined8 *)(param_1 + 0x78));
  if (cVar5 == '\0') {
    uStack_1c0 = (longlong *)local_res10;
    local_168 = 0;
    local_158 = 0;
    local_1c8 = param_1;
    puVar7 = (undefined8 *)FUN_140438ef0(0x18,local_188);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &PTR_FUN_143f77c18;
      *(undefined4 *)(puVar7 + 1) = (undefined4)local_1c8;
      *(undefined4 *)((longlong)puVar7 + 0xc) = local_1c8._4_4_;
      *(undefined4 *)(puVar7 + 2) = (undefined4)uStack_1c0;
      *(undefined4 *)((longlong)puVar7 + 0x14) = uStack_1c0._4_4_;
    }
    local_198[0] = &LAB_14202be20;
    if (*(int *)(param_1 + 0x20) == 0) {
      puVar13 = &DAT_143f3eda8;
    }
    else {
      puVar13 = *(undefined2 **)(param_1 + 0x18);
    }
    FString::PrintfImpl(&local_1b0,L"FGFxObject::RemoveFromParent(%s)",puVar13);
    local_1d8 = 0;
    psVar12 = &DAT_143f3eda8;
    if (local_1a8 != 0) {
      psVar12 = local_1b0;
    }
    local_1d0 = 0;
    if ((psVar12 != (short *)0x0) && (*psVar12 != 0)) {
      lVar9 = -1;
      do {
        lVar9 = lVar9 + 1;
      } while (psVar12[lVar9] != 0);
      uVar8 = (int)lVar9 + 1;
      local_1d0 = (ulonglong)uVar8;
      if (0 < (int)uVar8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1d8,0);
      }
      FGenericPlatformString::Memcpy(local_1d8,psVar12,(longlong)(int)uVar8 * 2);
    }
    FUN_1410b2c00(local_f8,&local_1d8,local_198);
    if (local_1b0 != (short *)0x0) {
      FMemory::Free();
    }
    uVar6 = FUN_1410ca7e0(local_f8,local_148);
    FUN_1420326d0(param_1,uVar6);
    FUN_140d1b3a0(local_f8);
    cVar5 = *(char *)(local_38 + 0x58);
    while (cVar5 == '\0') {
      (**(code **)(**(longlong **)(local_38 + 0x50) + 0x20))
                (*(longlong **)(local_38 + 0x50),0x5d638865,0);
      cVar5 = *(char *)(local_38 + 0x58);
    }
    uVar10 = *(undefined1 *)(local_38 + 0x60);
    FUN_140ce1dc0(local_f8);
    return uVar10;
  }
  lVar9 = *(longlong *)(param_1 + 0xd0);
  if (lVar9 != 0) {
    bVar11 = true;
    uVar6 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,&local_1c8);
    cVar5 = FUN_14204de30(lVar9,uVar6,local_res10[0]);
    if (cVar5 != '\0') {
      uVar10 = 1;
      goto LAB_14204ebcf;
    }
  }
  uVar10 = 0;
LAB_14204ebcf:
  if ((bVar11) && (uStack_1c0 != (longlong *)0x0)) {
    LOCK();
    plVar2 = uStack_1c0 + 1;
    lVar9 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*uStack_1c0)(uStack_1c0);
      LOCK();
      piVar3 = (int *)((longlong)uStack_1c0 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*uStack_1c0 + 8))(uStack_1c0,1);
      }
    }
  }
  return uVar10;
}



// FUNCTION 14204edc0 FUN_14204edc0 body=247 status=ok
// SIG undefined FUN_14204edc0(void)

undefined8 FUN_14204edc0(undefined8 param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *local_18;
  longlong *local_10;
  
  FUN_14203ce90(&local_18,param_1);
  plVar4 = local_18;
  if (local_18 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_18 + 0x34);
    iVar6 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar6 < 2) {
      LOCK();
      iVar6 = (int)local_18[6];
      if (iVar6 == 0) {
        *(int *)(local_18 + 6) = 0;
        iVar6 = 0;
      }
      UNLOCK();
      if (iVar6 < 1) {
        cVar5 = FUN_1420593d0();
        if (cVar5 == '\0') {
          cVar5 = FUN_142029fc0();
          if ((cVar5 != '\0') && (*local_18 != 0)) {
            *(undefined8 *)(*local_18 + 0x10) = 0;
          }
          LOCK();
          *(undefined4 *)((longlong)plVar4 + 0x34) = 0;
          UNLOCK();
          LOCK();
          *(undefined4 *)(plVar4 + 6) = 0;
          UNLOCK();
          uVar7 = 1;
        }
        else {
          FUN_142059330(param_1);
          LOCK();
          *(undefined4 *)((longlong)plVar4 + 0x34) = 0;
          UNLOCK();
          LOCK();
          *(undefined4 *)(plVar4 + 6) = 0;
          UNLOCK();
          uVar7 = 1;
        }
        goto LAB_14204ee5e;
      }
    }
  }
  uVar7 = 0;
LAB_14204ee5e:
  plVar4 = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_10 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return uVar7;
}



// FUNCTION 14204eec0 FUN_14204eec0 body=211 status=ok
// SIG undefined FUN_14204eec0(void)

undefined8 FUN_14204eec0(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *local_18;
  longlong *local_10;
  
  FUN_14203ce90(&local_18,param_1);
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 6;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 < 2) {
      LOCK();
      iVar6 = *(int *)((longlong)local_18 + 0x34);
      if (iVar6 == 0) {
        *(int *)((longlong)local_18 + 0x34) = 0;
        iVar6 = 0;
      }
      UNLOCK();
      if (iVar6 < 1) {
        cVar5 = FUN_1420593d0();
        if (cVar5 == '\0') {
          cVar5 = FUN_14202a020();
          if ((cVar5 != '\0') && (*local_18 != 0)) {
            *(undefined8 *)(*local_18 + 0x10) = 0;
          }
          uVar7 = 1;
        }
        else {
          FUN_142059330(param_1);
          uVar7 = 1;
        }
        goto LAB_14204ef44;
      }
    }
  }
  uVar7 = 0;
LAB_14204ef44:
  plVar1 = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_10 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      iVar6 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return uVar7;
}



// FUNCTION 14204efa0 FUN_14204efa0 body=356 status=ok
// SIG undefined FUN_14204efa0(void)

undefined8 FUN_14204efa0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong *local_18;
  longlong *local_10;
  
  FUN_14203d100(&local_18,*param_1 + 0x18);
  plVar3 = local_10;
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 6;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 < 2) {
      LOCK();
      iVar6 = *(int *)((longlong)local_18 + 0x34);
      if (iVar6 == 0) {
        *(int *)((longlong)local_18 + 0x34) = 0;
        iVar6 = 0;
      }
      UNLOCK();
      if (iVar6 < 1) {
        cVar5 = FUN_1420593d0();
        if (cVar5 == '\0') {
          cVar5 = FUN_14202a020();
          if ((cVar5 != '\0') && (*local_18 != 0)) {
            *(undefined8 *)(*local_18 + 0x10) = 0;
          }
        }
        else {
          FUN_1420592b0(*param_1 + 0x18);
        }
        plVar3 = local_10;
        if (local_10 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_10 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_10)(local_10);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            iVar6 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*local_10 + 8))(local_10,1);
            }
          }
        }
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_1);
        return 1;
      }
    }
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
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
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
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return 0;
}



// FUNCTION 14204f110 FUN_14204f110 body=655 status=ok
// SIG undefined FUN_14204f110(void)

void FUN_14204f110(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
  int iVar14;
  bool bVar15;
  int local_res18;
  
  lVar6 = FUN_142039c70();
  if (lVar6 != 0) {
    AcquireSRWLockExclusive((PSRWLOCK)(lVar6 + 0xf0));
    iVar5 = TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>::Remove
                      (lVar6 + 0xe0,param_1);
    if (iVar5 == 0) {
      AcquireSRWLockExclusive((PSRWLOCK)(lVar6 + 0x108));
      TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>::Remove
                (lVar6 + 0xf8,param_1);
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar6 + 0x108));
    }
    else {
      plVar13 = *(longlong **)(lVar6 + 0x1a8);
      plVar7 = plVar13 + (longlong)*(int *)(lVar6 + 0x1b0) * 2;
      for (; plVar13 != plVar7; plVar13 = plVar13 + 2) {
        lVar9 = (longlong)(int)plVar13[1];
        if ((int)plVar13[1] != 0) {
          iVar10 = 0;
          lVar12 = 0;
          local_res18 = 0;
          bVar15 = *(longlong *)*plVar13 != *param_1;
          iVar5 = 0;
          do {
            lVar12 = lVar12 + 1;
            iVar14 = iVar5 + 1;
            if (lVar12 < lVar9) {
              plVar8 = (longlong *)(lVar12 * 0x10 + *plVar13);
              do {
                if (bVar15 != (*plVar8 != *param_1)) break;
                iVar14 = iVar14 + 1;
                lVar12 = lVar12 + 1;
                plVar8 = plVar8 + 2;
              } while (lVar12 < lVar9);
            }
            iVar11 = iVar14 - iVar5;
            if (bVar15 == false) {
              if (iVar11 != 0) {
                plVar8 = (longlong *)((longlong)iVar5 * 0x10 + 8 + *plVar13);
                do {
                  plVar3 = (longlong *)*plVar8;
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
                  plVar8 = plVar8 + 2;
                  iVar11 = iVar11 + -1;
                  iVar10 = local_res18;
                } while (iVar11 != 0);
              }
            }
            else {
              if (iVar10 != iVar5) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)((longlong)iVar10 * 0x10 + *plVar13),
                           (void *)((longlong)iVar5 * 0x10 + *plVar13),(longlong)iVar11 << 4);
              }
              local_res18 = iVar10 + iVar11;
              iVar10 = local_res18;
            }
            bVar15 = (bool)(bVar15 ^ 1);
            iVar5 = iVar14;
          } while (lVar12 < lVar9);
          *(int *)(plVar13 + 1) = iVar10;
        }
      }
    }
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar6 + 0xf0));
  }
  plVar13 = (longlong *)param_1[1];
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar13 + 1;
    lVar6 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar2 = (int *)((longlong)plVar13 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  return;
}



// FUNCTION 14204f3a0 FUN_14204f3a0 body=391 status=ok
// SIG undefined FUN_14204f3a0(void)

void FUN_14204f3a0(longlong param_1,int param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  longlong *local_28;
  undefined8 local_20;
  
  TBaseMulticastDelegate<void,enum_EWmfMediaSamplerClockEvent>::Broadcast(&DAT_1464f0758);
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x148))) {
    TArray<TSharedPtr<Chaos::FImplicitObject,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
              (param_1 + 0x140,param_2,1,1);
  }
  plVar7 = (longlong *)0x0;
  local_28 = (longlong *)0x0;
  local_20 = 0;
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xf0));
  TArray<TSharedPtr<OculusHMD::FLayer,1>,FDefaultAllocator>::operator=(&local_28,param_1 + 0xe0);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xf0));
  plVar6 = local_28 + (longlong)(int)local_20 * 2;
  for (plVar5 = local_28; plVar5 != plVar6; plVar5 = plVar5 + 2) {
    lVar4 = *plVar5;
    cVar1 = FWeakObjectPtr::IsValid(lVar4 + 0x70,0,1);
    if ((cVar1 != '\0') &&
       (plVar3 = (longlong *)FWeakObjectPtr::Get(lVar4 + 0x70), plVar3 != (longlong *)0x0)) {
      iVar2 = (int)plVar3[0x2a];
      if (iVar2 == param_2) {
        (**(code **)(*plVar3 + 0x280))();
      }
      else if (param_2 < iVar2) {
        *(int *)(plVar3 + 0x2a) = iVar2 + -1;
      }
    }
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_28);
  FUN_14204d1e0(param_1);
  plVar5 = plVar7;
  if (*(longlong *)(param_1 + 0x198) != 0) {
    plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x198) + 0x50);
  }
  if ((plVar5 != (longlong *)0x0) && (lVar4 = (**(code **)(*plVar5 + 0x30))(plVar5), lVar4 != 0)) {
    lVar4 = (**(code **)(*plVar5 + 0x30))(plVar5);
    plVar7 = *(longlong **)(lVar4 + 400);
  }
  if (plVar7 != (longlong *)0x0) {
    iVar2 = FUN_14046e5c0(plVar7);
    LOCK();
    UNLOCK();
    bVar8 = DAT_146accf20 != iVar2;
    DAT_146accf20 = iVar2;
    if (bVar8) {
      TBaseMulticastDelegate<void,enum_EWmfMediaSamplerClockEvent>::Broadcast(&DAT_1464f0770,iVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14204f530 FUN_14204f530 body=88 status=ok
// SIG undefined FUN_14204f530(void)

bool FUN_14204f530(void)

{
  int *piVar1;
  char cVar2;
  DWORD DVar3;
  
  piVar1 = DAT_146accc08;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    if (DVar3 != DAT_1468c21c0) {
      return piVar1[1] != 0;
    }
  }
  return *piVar1 != 0;
}



// FUNCTION 14204f590 FUN_14204f590 body=181 status=ok
// SIG undefined FUN_14204f590(void)

ulonglong FUN_14204f590(longlong param_1)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  uint7 uVar4;
  int iVar5;
  longlong *plVar6;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  pcVar3 = (char *)(longlong)(int)uVar1;
  if (uVar1 < 0xc) {
    pcVar3 = IMAGE_DOS_HEADER_140000000.e_magic +
             (&switchD_14204f5b4::switchdataD_14204f648)[(longlong)pcVar3];
    uVar4 = (uint7)((ulonglong)pcVar3 >> 8);
    switch(uVar1) {
    case 0:
    case 1:
      return (ulonglong)uVar4 << 8;
    case 2:
      return CONCAT71(uVar4,*(char *)(param_1 + 0x17) != -1);
    case 5:
    case 9:
    case 0xb:
      iVar5 = 0;
      plVar6 = (longlong *)(param_1 + 0x20);
      do {
        if ((longlong *)*plVar6 != (longlong *)0x0) {
          iVar2 = (**(code **)(*(longlong *)*plVar6 + 0x20))();
          pcVar3 = (char *)0x0;
          switch(iVar2 + -3) {
          case 0:
          case 1:
          case 0x33:
          case 0x35:
          case 0x3c:
          case 0xc5:
            break;
          default:
            return 1;
          }
        }
        iVar5 = iVar5 + 1;
        plVar6 = plVar6 + 1;
      } while (iVar5 < 2);
      return (ulonglong)pcVar3 & 0xffffffffffffff00;
    }
  }
  return CONCAT71((int7)((ulonglong)pcVar3 >> 8),1);
}



// FUNCTION 14204f750 FUN_14204f750 body=170 status=ok
// SIG undefined FUN_14204f750(void)

void FUN_14204f750(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 local_res8 [2];
  
  if ((param_3 != param_1[2]) && ((ulonglong)param_1[2] <= param_3)) {
    if (param_3 == 0) {
      uVar2 = 0;
      if (*param_1 != 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
        *param_1 = 0;
        param_1[2] = 0;
        return;
      }
    }
    else {
      uVar2 = param_3 + 7 & 0xfffffffffffffff8;
      if (*param_1 != 0) {
        lVar1 = (**(code **)(*DAT_146b62f28 + 0x58))();
        *param_1 = lVar1;
        param_1[2] = uVar2;
        return;
      }
      local_res8[0] = 2;
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_2,uVar2 << 5,local_res8);
      *param_1 = lVar1;
    }
    param_1[2] = uVar2;
  }
  return;
}



// FUNCTION 14204f800 FUN_14204f800 body=307 status=ok
// SIG undefined FUN_14204f800(void)

void FUN_14204f800(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  
  iVar4 = *(int *)(param_1 + 0x40c);
  lVar6 = *(longlong *)(param_1 + 0x400);
  iVar7 = *(int *)(param_1 + 0x408);
  if (iVar4 < param_2) {
    if (lVar6 == 0) {
      lVar6 = param_1;
    }
    if (iVar7 != 0) {
      plVar5 = (longlong *)(lVar6 + 8);
      do {
        plVar3 = (longlong *)*plVar5;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar3 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plVar3)(plVar3);
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
        plVar5 = plVar5 + 2;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      iVar4 = *(int *)(param_1 + 0x40c);
    }
    *(undefined4 *)(param_1 + 0x408) = 0;
    if (iVar4 != param_2) {
      TArray<FLinearColor,TInlineAllocator<64,TSizedDefaultAllocator<32>_>_>::ResizeTo
                (param_1,param_2);
    }
  }
  else {
    if (lVar6 == 0) {
      lVar6 = param_1;
    }
    if (iVar7 != 0) {
      plVar5 = (longlong *)(lVar6 + 8);
      do {
        plVar3 = (longlong *)*plVar5;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar3 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plVar3)(plVar3);
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
        plVar5 = plVar5 + 2;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    *(undefined4 *)(param_1 + 0x408) = 0;
  }
  return;
}



// FUNCTION 14204f940 ResizeAllocation body=161 status=ok
// SIG undefined ResizeAllocation(void)

void TInlineAllocator<64,TSizedDefaultAllocator<32>_>::ForElementType<FLinearColor>::
     ResizeAllocation(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x400);
  if (param_3 < 0x41) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 << 4);
    pvVar1 = *(void **)((longlong)param_1 + 0x400);
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
        *(void **)((longlong)param_1 + 0x400) = pvVar1;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 << 4);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x400) = uVar2;
  return;
}



// FUNCTION 14204f9f0 FUN_14204f9f0 body=148 status=ok
// SIG undefined FUN_14204f9f0(void)

void FUN_14204f9f0(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  uVar2 = 0;
  if (param_2 != 0) {
    if (param_2 < 0x41) {
      uVar2 = 0x40;
    }
    else {
      uVar3 = FMemory::QuantizeSize((longlong)(int)param_2 << 4,0);
      uVar2 = (uint)(uVar3 >> 4);
      if ((int)uVar2 < (int)param_2) {
        uVar2 = 0x7fffffff;
      }
    }
  }
  if (uVar2 != param_3) {
    lVar1 = *(longlong *)(param_1 + 0x400);
    if (uVar2 < 0x41) {
      if (lVar1 == 0) goto LAB_14204fa6e;
      lVar5 = 0;
    }
    else {
      if ((lVar1 == 0) && (uVar2 == 0)) goto LAB_14204fa6e;
      lVar5 = (longlong)(int)uVar2 << 4;
    }
    uVar4 = FMemory::Realloc(lVar1,lVar5,0);
    *(undefined8 *)(param_1 + 0x400) = uVar4;
  }
LAB_14204fa6e:
  *(uint *)(param_1 + 0x40c) = uVar2;
  return;
}



// FUNCTION 14204fa90 ResizeGrow body=137 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FLinearColor,TInlineAllocator<64,TSizedDefaultAllocator<32>_>_>::ResizeGrow
               (longlong param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x408);
  if (uVar1 < 0x41) {
    iVar2 = 0x40;
  }
  else {
    lVar4 = 4;
    if ((*(int *)(param_1 + 0x40c) != 0) || (4 < uVar1)) {
      lVar4 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar4 << 4,0);
    iVar2 = (int)(uVar3 >> 4);
    if (iVar2 < (int)uVar1) {
      iVar2 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x40c) = iVar2;
  TInlineAllocator<64,TSizedDefaultAllocator<32>_>::ForElementType<FLinearColor>::ResizeAllocation
            (param_1,param_2,iVar2,0x10);
  return;
}



// FUNCTION 14204fb20 FUN_14204fb20 body=191 status=ok
// SIG undefined FUN_14204fb20(void)

void FUN_14204fb20(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar3 = param_1[1];
  if (param_3 < uVar3) {
    puVar1 = (undefined8 *)(*param_1 + -0x20 + uVar3 * 0x20);
    for (lVar2 = uVar3 - param_3; lVar2 != 0; lVar2 = lVar2 + -1) {
      if ((longlong *)puVar1[2] != (longlong *)0x0) {
        (**(code **)(*(longlong *)puVar1[2] + 0x10))();
      }
      if ((longlong *)puVar1[1] != (longlong *)0x0) {
        (**(code **)(*(longlong *)puVar1[1] + 0x10))();
      }
      if ((RefCountImpl *)*puVar1 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release((RefCountImpl *)*puVar1);
      }
      puVar1 = puVar1 + -4;
    }
    uVar3 = param_3;
    if ((ulonglong)param_1[2] >> 1 <= param_3) goto LAB_14204fbca;
  }
  else {
    if (param_3 <= (ulonglong)param_1[2]) goto LAB_14204fbca;
    uVar3 = (param_3 >> 2) + param_3;
  }
  FUN_14204f750(param_1,param_2,uVar3);
LAB_14204fbca:
  param_1[1] = param_3;
  return;
}



// FUNCTION 14204fbe0 FUN_14204fbe0 body=159 status=ok
// SIG undefined FUN_14204fbe0(void)

void FUN_14204fbe0(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x408);
  uVar3 = *(uint *)(param_1 + 0x40c);
  if (uVar2 < 0x41) {
    uVar2 = 0x40;
    goto LAB_14204fc52;
  }
  if ((0x3fff < (ulonglong)((longlong)(int)(uVar3 - uVar2) << 4)) ||
     ((int)(uVar2 * 3) < (int)(uVar3 * 2))) {
    if (0x40 < uVar3 - uVar2) {
      if (0 < (int)uVar2) {
        uVar1 = FMemory::QuantizeSize((longlong)(int)uVar2 << 4,0);
        uVar3 = *(uint *)(param_1 + 0x40c);
        uVar2 = (uint)(uVar1 >> 4);
      }
      goto LAB_14204fc52;
    }
    if (uVar2 == 0) goto LAB_14204fc52;
  }
  uVar2 = uVar3;
LAB_14204fc52:
  if (uVar2 != uVar3) {
    *(uint *)(param_1 + 0x40c) = uVar2;
    TInlineAllocator<64,TSizedDefaultAllocator<32>_>::ForElementType<FLinearColor>::ResizeAllocation
              (param_1,*(undefined4 *)(param_1 + 0x408),uVar2,0x10);
    return;
  }
  return;
}



// FUNCTION 14204fc80 ResizeTo body=110 status=ok
// SIG undefined ResizeTo(void)

void TArray<FLinearColor,TInlineAllocator<64,TSizedDefaultAllocator<32>_>_>::ResizeTo
               (longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = 0;
  if (param_2 != 0) {
    if (param_2 < 0x41) {
      iVar1 = 0x40;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 << 4,0);
      iVar1 = (int)(uVar2 >> 4);
      if (iVar1 < (int)param_2) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *(int *)(param_1 + 0x40c)) {
    *(int *)(param_1 + 0x40c) = iVar1;
    TInlineAllocator<64,TSizedDefaultAllocator<32>_>::ForElementType<FLinearColor>::ResizeAllocation
              (param_1,*(undefined4 *)(param_1 + 0x408),iVar1,0x10);
  }
  return;
}



// FUNCTION 14204fd00 FUN_14204fd00 body=505 status=ok
// SIG undefined FUN_14204fd00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14204fd00(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_178 [32];
  longlong local_158;
  undefined8 local_150;
  longlong local_148;
  longlong *local_140;
  code *local_138 [2];
  undefined1 local_128 [32];
  undefined8 local_108;
  undefined4 local_f8;
  undefined1 local_e8 [80];
  undefined1 local_98 [16];
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  if (*(longlong *)(param_1 + 0x88) != 0) {
    cVar1 = FUN_142078ba0(param_1 + 0x58);
    while (cVar1 != '\0') {
      lVar2 = FUN_142079f60(param_1 + 0x58,local_98);
      local_108 = 0;
      local_f8 = 0;
      puVar3 = (undefined8 *)FUN_140438ef0(0x70,local_128);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &PTR_FUN_144f71ae0;
        TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar3 + 2,lVar2);
        *(undefined4 *)(puVar3 + 0xc) = *(undefined4 *)(lVar2 + 0x50);
      }
      local_138[0] = UE4Function_Private::
                     TFunctionRefCaller<<lambda_50573a4081bc06268289253819177437>,void___cdecl(void)>
                     ::Call;
      FUN_14207a090(*(undefined8 *)(param_1 + 0x88),local_138);
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
      cVar1 = FUN_142078ba0(param_1 + 0x58);
    }
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x38));
    LOCK();
    *(undefined4 *)(param_1 + 0x40) = 1;
    UNLOCK();
    local_140 = &local_158;
    local_158 = 0;
    local_150 = 0;
    local_148 = param_1;
    FUN_142017a50(param_1 + 0x48,&local_148);
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x38));
    LOCK();
    *(undefined4 *)(param_1 + 0x40) = 0;
    UNLOCK();
    lVar4 = (longlong)(int)local_150 * 0xa0 + local_158;
    for (lVar2 = local_158; lVar2 != lVar4; lVar2 = lVar2 + 0xa0) {
      TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_e8,lVar2);
      (**(code **)(**(longlong **)(param_1 + 0x88) + 0x48))(*(longlong **)(param_1 + 0x88),local_e8)
      ;
    }
    FUN_14201bc80(&local_158);
  }
  return;
}



// FUNCTION 14204ff00 FUN_14204ff00 body=20 status=ok
// SIG undefined FUN_14204ff00(void)

void FUN_14204ff00(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x78) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014204ff0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x78) + 0x80))();
    return;
  }
  return;
}



// FUNCTION 14204ff20 FUN_14204ff20 body=430 status=ok
// SIG undefined FUN_14204ff20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14204ff20(longlong param_1,float param_2)

{
  char *pcVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  float fStack_160;
  undefined4 uStack_15c;
  undefined1 *local_158 [2];
  undefined1 local_148 [32];
  undefined8 local_128;
  undefined4 local_118;
  undefined1 local_108 [40];
  double local_e0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ushort local_34;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  pcVar1 = (char *)(*(longlong *)(param_1 + 0x78) + 0x30);
  LOCK();
  cVar2 = *pcVar1;
  if (cVar2 == '\0') {
    *pcVar1 = '\0';
    cVar2 = '\0';
  }
  UNLOCK();
  if (cVar2 < '\x06') {
    cVar2 = FUN_142045c10(*(undefined8 *)(param_1 + 0x78));
    if (cVar2 == '\0') {
      local_128 = 0;
      local_118 = 0;
      local_168 = param_1;
      fStack_160 = param_2;
      puVar3 = (undefined8 *)FUN_140438ef0(0x18,local_148);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &PTR_FUN_143f77c18;
        *(undefined4 *)(puVar3 + 1) = (undefined4)local_168;
        *(undefined4 *)((longlong)puVar3 + 0xc) = local_168._4_4_;
        *(float *)(puVar3 + 2) = fStack_160;
        *(undefined4 *)((longlong)puVar3 + 0x14) = uStack_15c;
      }
      local_158[0] = &LAB_14202cbb0;
      FUN_1420326d0(param_1,local_158);
    }
    else {
      local_34 = 0;
      local_a0 = 0;
      local_90 = 0;
      local_88 = 0;
      local_70 = 0;
      local_60 = 0;
      local_58 = 0;
      local_48 = 0;
      local_a8 = 0x3f800000;
      local_98 = 0x3f80000000000000;
      local_80 = 0x3f800000;
      local_78 = 0x3f800000;
      local_68 = 0x3f80000000000000;
      local_50 = 0x3f800000;
      local_40 = 0x3f80000000000000;
      if (((((byte)*(undefined4 *)(param_1 + 0xa0) & 0x8f) == 10) &&
          (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0xd8))
                             (*(longlong **)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa8),
                              local_108), cVar2 != '\0')) && ((double)param_2 != local_e0)) {
        local_34 = local_34 | 0x20;
        local_e0 = (double)param_2;
        (**(code **)(**(longlong **)(param_1 + 0x98) + 0xe0))
                  (*(longlong **)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa8),local_108);
      }
    }
  }
  return;
}



// FUNCTION 1420500d0 FUN_1420500d0 body=894 status=ok
// SIG undefined FUN_1420500d0(void)

void FUN_1420500d0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,longlong param_6,undefined8 param_7,longlong *param_8)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined2 uVar4;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  
  uVar3 = 0x15;
  uVar2 = 0x80000;
  switch(param_2) {
  case 2:
    if (param_5[2] == 0) {
      if (DAT_146ace8a3 == '\0') {
        DAT_146ace8a3 = param_5[1] != 0;
      }
      uVar2 = 0x103;
      uVar3 = 0x17;
    }
    else {
      uVar2 = 0x600001;
    }
    break;
  default:
    if (DAT_146ace8a2 == '\0') {
      DAT_146ace8a2 = '\x01';
    }
    break;
  case 5:
    uVar2 = 0x600000;
    break;
  case 6:
    uVar2 = 0x600010;
    break;
  case 7:
    uVar2 = 0x600002;
    break;
  case 0xd:
    uVar2 = 0x600008;
    break;
  case 0xe:
    uVar2 = 0x600004;
  }
  (**(code **)(*param_8 + 0x18))(param_8,uVar2,param_7);
  if ((char)param_8[0xb] == '\0') {
    *(undefined1 *)(param_8 + 0xb) = 1;
    *(undefined4 *)((longlong)param_8 + 0x5c) = 1;
    param_8[3] = 0;
    param_8[4] = 0;
    param_8[5] = 0;
    *(undefined4 *)(param_8 + 6) = 0;
    param_8[7] = 0;
    param_8[8] = 0;
    param_8[9] = 0;
    param_8[10] = 0;
  }
  plVar1 = param_8 + 0x201;
  FUN_142055c30(param_8,plVar1,0x10,param_3,8,0,0);
  uVar4 = 0;
  FUN_142055c30(param_8,plVar1,0x18,param_6,8,0,0);
  local_e8 = *plVar1;
  local_e0 = param_8[0x202];
  local_d8 = param_8[0x203];
  if (local_d8 != 0) {
    LOCK();
    *(int *)(local_d8 + 8) = *(int *)(local_d8 + 8) + 1;
    UNLOCK();
  }
  local_d0 = param_8[0x204];
  local_c8 = param_8[0x205];
  local_c0 = param_8[0x206];
  local_b8 = param_8[0x207];
  local_b0 = param_8[0x208];
  if (local_b0 != 0) {
    LOCK();
    *(int *)(local_b0 + 8) = *(int *)(local_b0 + 8) + 1;
    UNLOCK();
  }
  FUN_14207b5e0(param_8,&local_e8,uVar3,*param_5,CONCAT22(uVar4,1),0);
  if (param_5[1] != 0) {
    uVar4 = 0;
    FUN_142055c30(param_8,plVar1,0x18,param_6 + 0x20,8,2,0);
    local_a8 = *plVar1;
    local_a0 = param_8[0x202];
    local_98 = param_8[0x203];
    if (local_98 != 0) {
      LOCK();
      *(int *)(local_98 + 8) = *(int *)(local_98 + 8) + 1;
      UNLOCK();
    }
    local_90 = param_8[0x204];
    local_88 = param_8[0x205];
    local_80 = param_8[0x206];
    local_78 = param_8[0x207];
    local_70 = param_8[0x208];
    if (local_70 != 0) {
      LOCK();
      *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
      UNLOCK();
    }
    FUN_14207b5e0(param_8,&local_a8,9,param_5[1],CONCAT22(uVar4,1),0);
  }
  if (param_5[2] != 0) {
    uVar4 = 0;
    FUN_142055c30(param_8,plVar1,0x18,param_6 + 0x40,8,2,0);
    local_68 = *plVar1;
    local_60 = param_8[0x202];
    local_58 = param_8[0x203];
    if (local_58 != 0) {
      LOCK();
      *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
      UNLOCK();
    }
    local_50 = param_8[0x204];
    local_48 = param_8[0x205];
    local_40 = param_8[0x206];
    local_38 = param_8[0x207];
    local_30 = param_8[0x208];
    if (local_30 != 0) {
      LOCK();
      *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
      UNLOCK();
    }
    FUN_14207b5e0(param_8,&local_68,0,param_5[2],CONCAT22(uVar4,1),0);
  }
  FUN_142050f40(param_8,plVar1,param_4,0,0);
  FUN_1420709e0(param_8,1);
  return;
}



// FUNCTION 142050490 FUN_142050490 body=95 status=ok
// SIG undefined FUN_142050490(void)

void FUN_142050490(longlong param_1,undefined1 param_2)

{
  if ((*(uint *)(param_1 + 0x18) >> 6 & 1) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))
              (*(longlong **)(param_1 + 0x10),param_1,*(undefined8 *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x18) = 2;
    *(undefined1 *)(param_1 + 0x20) = param_2;
    return;
  }
  *(undefined4 *)(param_1 + 0x18) = 2;
  *(undefined1 *)(param_1 + 0x20) = param_2;
  return;
}



// FUNCTION 1420504f0 FUN_1420504f0 body=1348 status=ok
// SIG undefined FUN_1420504f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_1420504f0(longlong param_1,longlong param_2,undefined4 param_3)

{
  char *pcVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  longlong **pplVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  uint uVar12;
  longlong *plVar13;
  undefined1 **ppuVar14;
  undefined1 uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  bool bVar18;
  undefined4 local_res18 [2];
  undefined1 auStack_2c8 [32];
  undefined8 *local_2a8;
  undefined8 local_2a0;
  undefined1 local_298;
  longlong *local_288;
  longlong *local_280;
  undefined4 local_278;
  longlong *local_270;
  longlong *plStack_268;
  longlong local_260;
  longlong local_258;
  longlong *local_250;
  longlong *local_248;
  undefined8 local_240;
  undefined8 local_238;
  longlong *local_230;
  longlong *plStack_228;
  undefined8 local_218;
  undefined8 uStack_210;
  longlong *local_208;
  undefined4 local_200;
  longlong local_1f8;
  longlong local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1c8;
  undefined1 *local_1b8 [2];
  undefined1 local_1a8 [32];
  undefined8 local_188;
  undefined4 local_178;
  undefined1 local_168 [80];
  undefined1 local_118 [192];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_2c8;
  plVar13 = (longlong *)0x0;
  local_278 = 0;
  pcVar1 = (char *)(*(longlong *)(param_1 + 0x78) + 0x30);
  LOCK();
  cVar7 = *pcVar1;
  if (cVar7 == '\0') {
    *pcVar1 = '\0';
    cVar7 = '\0';
  }
  UNLOCK();
  if ('\x05' < cVar7) {
    return 0;
  }
  local_res18[0] = param_3;
  local_258 = param_2;
  cVar7 = FUN_142045c10(*(undefined8 *)(param_1 + 0x78));
  if (cVar7 == '\0') {
    local_270 = &local_258;
    plStack_268 = (longlong *)local_res18;
    local_188 = 0;
    local_178 = 0;
    local_260 = param_1;
    puVar10 = (undefined8 *)FUN_140438ef0(0x20,local_1a8);
    if (puVar10 != (undefined8 *)0x0) {
      puVar10[1] = local_270;
      puVar10[2] = plStack_268;
      *puVar10 = &PTR_FUN_143f4d0b0;
      puVar10[3] = local_260;
    }
    local_240 = 0;
    local_1b8[0] = &LAB_14202c360;
    local_238 = 0x1c;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_240,0);
    FGenericPlatformString::Memcpy(local_240,L"FGFxObject::SetChildIndex()",0x38);
    FUN_1410b2c00(local_118,&local_240,local_1b8);
    uVar11 = FUN_1410ca7e0(local_118,local_168);
    FUN_1420326d0(param_1,uVar11);
    FUN_140d1b3a0(local_118);
    cVar7 = *(char *)(local_58 + 0x58);
    while (cVar7 == '\0') {
      (**(code **)(**(longlong **)(local_58 + 0x50) + 0x20))
                (*(longlong **)(local_58 + 0x50),0x5d638865,0);
      cVar7 = *(char *)(local_58 + 0x58);
    }
    uVar15 = *(undefined1 *)(local_58 + 0x60);
    FUN_140ce1dc0(local_118);
    return uVar15;
  }
  uVar17 = 2;
  if (local_258 == 0) {
    pplVar9 = &local_270;
    local_270 = (longlong *)0x0;
    plStack_268 = (longlong *)0x0;
    uVar16 = uVar17;
  }
  else {
    if ((*(longlong *)(local_258 + 0x28) == 0) || (*(longlong *)(local_258 + 0x30) == 0)) {
LAB_1420505ff:
      pplVar9 = &local_230;
      local_230 = (longlong *)0x0;
      plStack_228 = (longlong *)0x0;
      uVar16 = 9;
    }
    else {
      piVar2 = (int *)(*(longlong *)(local_258 + 0x30) + 8);
      LOCK();
      iVar8 = *piVar2;
      if (iVar8 == 0) {
        *piVar2 = 0;
        iVar8 = 0;
      }
      UNLOCK();
      if (iVar8 < 1) goto LAB_1420505ff;
      local_280 = *(longlong **)(local_258 + 0x30);
      local_288 = (longlong *)0x0;
      if (local_280 != (longlong *)0x0) {
        LOCK();
        iVar8 = (int)local_280[1];
        bVar18 = iVar8 == 0;
        if (bVar18) {
          *(int *)(local_280 + 1) = 0;
          iVar8 = 0;
        }
        UNLOCK();
        while (!bVar18) {
          LOCK();
          bVar18 = iVar8 == (int)local_280[1];
          if (bVar18) {
            *(int *)(local_280 + 1) = iVar8 + 1;
          }
          UNLOCK();
          if (bVar18) {
            plVar13 = *(longlong **)(local_258 + 0x28);
            pplVar9 = &local_288;
            uVar16 = 5;
            local_288 = plVar13;
            goto LAB_142050613;
          }
          LOCK();
          iVar8 = (int)local_280[1];
          bVar18 = iVar8 == 0;
          if (bVar18) {
            *(int *)(local_280 + 1) = 0;
            iVar8 = 0;
          }
          UNLOCK();
        }
        local_280 = (longlong *)0x0;
      }
      plVar13 = (longlong *)0x0;
      pplVar9 = &local_288;
      uVar16 = 5;
    }
LAB_142050613:
    plVar5 = pplVar9[1];
    pplVar9[1] = (longlong *)0x0;
    plVar3 = plStack_228;
    local_248 = plVar5;
    *pplVar9 = (longlong *)0x0;
    local_250 = plVar13;
    if (((uVar16 & 8) != 0) &&
       (uVar16 = (ulonglong)((uint)uVar16 & 0xfffffff7), plStack_228 != (longlong *)0x0)) {
      LOCK();
      plVar5 = plStack_228 + 1;
      lVar6 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plStack_228)(plStack_228);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar8 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plStack_228 + 8))(plStack_228,1);
        }
      }
    }
    plVar5 = local_280;
    if (((uVar16 & 4) != 0) &&
       (uVar16 = (ulonglong)((uint)uVar16 & 0xfffffffb), local_280 != (longlong *)0x0)) {
      LOCK();
      plVar3 = local_280 + 1;
      lVar6 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_280)(local_280);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar8 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_280 + 8))(local_280,1);
        }
      }
    }
    pplVar9 = &local_250;
  }
  plVar5 = pplVar9[1];
  pplVar9[1] = (longlong *)0x0;
  *pplVar9 = (longlong *)0x0;
  plVar3 = plStack_268;
  if (((uVar16 & 2) != 0) &&
     (uVar16 = (ulonglong)((uint)uVar16 & 0xfffffffd), plStack_268 != (longlong *)0x0)) {
    LOCK();
    plVar4 = plStack_268 + 1;
    lVar6 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_268)(plStack_268);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plStack_268 + 8))(plStack_268,1);
      }
    }
  }
  plVar3 = local_248;
  if (((uVar16 & 1) != 0) && (local_248 != (longlong *)0x0)) {
    LOCK();
    plVar4 = local_248 + 1;
    lVar6 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_248)(local_248);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_248 + 8))(local_248,1);
      }
    }
  }
  if (plVar13 == (longlong *)0x0) {
    uVar15 = 0;
    goto LAB_142050883;
  }
  local_218 = 0xffffffffffffffff;
  uStack_210 = 0xffffffffffffffff;
  local_208 = (longlong *)0x0;
  local_200 = (undefined4)plVar13[0x14];
  local_1f8 = plVar13[0x15];
  local_1f0 = plVar13[0x16];
  if ((*(uint *)(plVar13 + 0x14) >> 6 & 1) != 0) {
    local_208 = (longlong *)plVar13[0x13];
    (**(code **)(*local_208 + 8))(local_208,&local_218);
  }
  uVar12 = *(uint *)(param_1 + 0xa0) & 0x8f;
  local_1c8 = local_res18[0];
  local_1e8 = 0xffffffffffffffff;
  uStack_1e0 = 0xffffffffffffffff;
  local_1d8 = 0;
  local_1d0 = 3;
  if (uVar12 - 8 < 4) {
    local_298 = uVar12 == 10;
    local_2a8 = &local_218;
    local_2a0 = 2;
    cVar7 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x30))
                      (*(longlong **)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa8),0,
                       "setChildIndex");
    if (cVar7 == '\0') goto LAB_142050844;
    uVar15 = 1;
  }
  else {
LAB_142050844:
    uVar15 = 0;
  }
  ppuVar14 = local_1b8;
  do {
    uVar17 = uVar17 - 1;
    if ((*(uint *)(ppuVar14 + -3) >> 6 & 1) != 0) {
      (**(code **)(*(longlong *)ppuVar14[-4] + 0x10))(ppuVar14[-4],ppuVar14 + -6,ppuVar14[-2]);
      ppuVar14[-4] = (undefined1 *)0x0;
    }
    *(undefined4 *)(ppuVar14 + -3) = 0;
    ppuVar14 = ppuVar14 + -6;
  } while (uVar17 != 0);
LAB_142050883:
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar5 + 1;
    lVar6 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return uVar15;
}



// FUNCTION 142050a40 FUN_142050a40 body=172 status=ok
// SIG undefined FUN_142050a40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142050a40(void)

{
  byte *in_R9;
  undefined4 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_38;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  local_28 = (float)in_R9[2] * 0.003921569;
  local_24 = (float)in_R9[1] * 0.003921569;
  local_38 = in_stack_00000030;
  local_40 = in_stack_00000028;
  local_48 = 4;
  local_20 = (float)*in_R9 * 0.003921569;
  local_1c = (float)in_R9[3] * 0.003921569;
  FUN_142055c30();
  return;
}



// FUNCTION 142050af0 FUN_142050af0 body=198 status=ok
// SIG undefined FUN_142050af0(void)

void FUN_142050af0(longlong param_1,undefined4 *param_2,undefined1 param_3)

{
  char *pcVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 uStack_60;
  undefined7 uStack_5f;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  pcVar1 = (char *)(*(longlong *)(param_1 + 0x78) + 0x30);
  LOCK();
  cVar2 = *pcVar1;
  if (cVar2 == '\0') {
    *pcVar1 = '\0';
    cVar2 = '\0';
  }
  UNLOCK();
  if (cVar2 < '\x06') {
    uStack_70 = *param_2;
    uStack_6c = param_2[1];
    uStack_68 = param_2[2];
    uStack_64 = param_2[3];
    local_78 = param_1;
    uStack_60 = param_3;
    cVar2 = FUN_142045c10(*(undefined8 *)(param_1 + 0x78));
    if (cVar2 != '\0') {
      FUN_14201d200(&local_78);
      return;
    }
    local_28 = 0;
    local_18 = 0;
    puVar3 = (undefined8 *)FUN_140438ef0(0x28,local_48);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &PTR_FUN_143ff7760;
      *(undefined4 *)(puVar3 + 1) = (undefined4)local_78;
      *(undefined4 *)((longlong)puVar3 + 0xc) = local_78._4_4_;
      *(undefined4 *)(puVar3 + 2) = uStack_70;
      *(undefined4 *)((longlong)puVar3 + 0x14) = uStack_6c;
      puVar3[3] = CONCAT44(uStack_64,uStack_68);
      puVar3[4] = CONCAT71(uStack_5f,uStack_60);
    }
    local_58[0] = &LAB_14202bf20;
    FUN_14204c6c0(param_1,local_58);
  }
  return;
}



// FUNCTION 142050bc0 FUN_142050bc0 body=314 status=ok
// SIG undefined FUN_142050bc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142050bc0(longlong param_1,undefined8 *param_2)

{
  char *pcVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 uStack_c0;
  code *local_b8 [2];
  undefined1 local_a8 [32];
  undefined8 local_88;
  undefined4 local_78;
  longlong local_68;
  undefined8 uStack_60;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  pcVar1 = (char *)(*(longlong *)(param_1 + 0x78) + 0x30);
  LOCK();
  cVar2 = *pcVar1;
  if (cVar2 == '\0') {
    *pcVar1 = '\0';
    cVar2 = '\0';
  }
  UNLOCK();
  if (cVar2 < '\x06') {
    cVar2 = FUN_142045c10(*(undefined8 *)(param_1 + 0x78));
    if (cVar2 == '\0') {
      local_c8 = *param_2;
      uStack_c0 = param_2[1];
      local_38 = *(undefined4 *)(param_2 + 2);
      uStack_34 = *(undefined4 *)((longlong)param_2 + 0x14);
      uStack_30 = *(undefined4 *)(param_2 + 3);
      uStack_2c = *(undefined4 *)((longlong)param_2 + 0x1c);
      local_88 = 0;
      local_78 = 0;
      local_68 = param_1;
      puVar3 = (undefined8 *)FUN_140438ef0(0x40,local_a8);
      if (puVar3 != (undefined8 *)0x0) {
        puVar3[2] = local_68;
        puVar3[3] = uStack_60;
        *puVar3 = &PTR_FUN_144f71be8;
        puVar3[4] = local_c8;
        puVar3[5] = uStack_c0;
        *(undefined4 *)(puVar3 + 6) = local_38;
        *(undefined4 *)((longlong)puVar3 + 0x34) = uStack_34;
        *(undefined4 *)(puVar3 + 7) = uStack_30;
        *(undefined4 *)((longlong)puVar3 + 0x3c) = uStack_2c;
      }
      local_b8[0] = FUN_14202c7e0;
      FUN_14204c6c0(param_1,local_b8);
    }
    else if (((byte)*(undefined4 *)(param_1 + 0xa0) & 0x8f) == 10) {
      local_38 = *(undefined4 *)param_2;
      uStack_34 = *(undefined4 *)((longlong)param_2 + 4);
      uStack_30 = *(undefined4 *)(param_2 + 1);
      uStack_2c = *(undefined4 *)((longlong)param_2 + 0xc);
      local_28 = *(undefined4 *)(param_2 + 2);
      uStack_24 = *(undefined4 *)((longlong)param_2 + 0x14);
      uStack_20 = *(undefined4 *)(param_2 + 3);
      uStack_1c = *(undefined4 *)((longlong)param_2 + 0x1c);
      (**(code **)(**(longlong **)(param_1 + 0x98) + 0x118))
                (*(longlong **)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa8),&local_38);
    }
  }
  return;
}



// FUNCTION 142050d00 FUN_142050d00 body=574 status=ok
// SIG undefined FUN_142050d00(void)

void FUN_142050d00(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  DWORD DVar4;
  DWORD *pDVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  wchar_t *_Str;
  longlong *plVar9;
  int iVar10;
  double dVar11;
  float fVar12;
  undefined1 local_res10 [8];
  longlong local_res18;
  undefined8 local_res20;
  longlong local_40;
  float local_38;
  
  if ((int)param_2[1] < 2) {
    if ((int)param_2[1] == 1) {
      if (*(int *)((undefined8 *)*param_2 + 1) == 0) {
        _Str = L"";
      }
      else {
        _Str = *(wchar_t **)*param_2;
      }
      dVar11 = _wtof(_Str);
      fVar12 = (float)dVar11;
      if (fVar12 <= 0.0) {
        return;
      }
      if (50.0 <= fVar12) {
        return;
      }
    }
    else {
      fVar12 = 1.0;
    }
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)))) {
      local_40 = param_1;
      local_38 = fVar12;
      FUN_1420334d0(&local_40,2,local_res10);
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
    local_res20 = 0;
    *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
    *(undefined1 *)(plVar9 + 4) = 0;
    *plVar9 = (longlong)&PTR_FUN_144f716d0;
    plVar9[5] = 0;
    *(float *)(plVar9 + 3) = fVar12;
    plVar9[2] = param_1;
    lVar7 = plVar9[5];
    piVar1 = (int *)(lVar7 + 0x48);
    if (lVar7 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    local_res18 = lVar7;
    FUN_1409421c0(plVar9,0,0xff,1,0);
    if (lVar7 != 0) {
      LOCK();
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        FGraphEvent::Recycle(local_res18);
      }
    }
  }
  return;
}



// FUNCTION 142050f40 FUN_142050f40 body=133 status=ok
// SIG undefined FUN_142050f40(void)

void FUN_142050f40(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
                  undefined4 param_5)

{
  FUN_142055c30(param_1,param_2,7,param_3,4,param_4,param_5);
  FUN_142055c30(param_1,param_2,6,param_3 + 0x10,4,param_4,param_5);
  return;
}



// FUNCTION 142050fd0 FUN_142050fd0 body=238 status=ok
// SIG undefined FUN_142050fd0(void)

void FUN_142050fd0(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined1 *local_148 [2];
  undefined1 local_138 [32];
  undefined8 local_118;
  undefined4 local_108;
  longlong local_f8;
  undefined1 local_e8 [224];
  
  pcVar1 = (char *)(*(longlong *)(param_1 + 0x78) + 0x30);
  LOCK();
  cVar2 = *pcVar1;
  if (cVar2 == '\0') {
    *pcVar1 = '\0';
    cVar2 = '\0';
  }
  UNLOCK();
  if (cVar2 < '\x06') {
    cVar2 = FUN_142045c10(*(undefined8 *)(param_1 + 0x78));
    if (cVar2 == '\0') {
      local_f8 = param_1;
      FUN_142018820(local_e8,param_2);
      local_118 = 0;
      local_108 = 0;
      puVar3 = (undefined8 *)FUN_140438ef0(0x100,local_138);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &PTR_FUN_144f71bb8;
        puVar3[2] = local_f8;
        FUN_142018820(puVar3 + 4,local_e8);
      }
      local_148[0] = &LAB_14202c270;
      FUN_1420326d0(param_1,local_148);
    }
    else if (((byte)*(undefined4 *)(param_1 + 0xa0) & 0x8f) == 10) {
      (**(code **)(**(longlong **)(param_1 + 0x98) + 0xe0))
                (*(longlong **)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa8),param_2);
    }
  }
  return;
}



// FUNCTION 1420510c0 FUN_1420510c0 body=423 status=ok
// SIG undefined FUN_1420510c0(void)

void FUN_1420510c0(longlong param_1,undefined4 *param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  undefined8 *puVar11;
  undefined1 *local_d8 [2];
  undefined1 local_c8 [32];
  undefined8 local_a8;
  undefined4 local_98;
  
  pcVar1 = (char *)(*(longlong *)(param_1 + 0x78) + 0x30);
  LOCK();
  cVar10 = *pcVar1;
  if (cVar10 == '\0') {
    *pcVar1 = '\0';
    cVar10 = '\0';
  }
  UNLOCK();
  if (cVar10 < '\x06') {
    cVar10 = FUN_142045c10(*(undefined8 *)(param_1 + 0x78));
    if (cVar10 == '\0') {
      uVar2 = *param_2;
      uVar3 = param_2[1];
      uVar4 = param_2[2];
      uVar5 = param_2[3];
      uVar6 = param_2[4];
      uVar7 = param_2[5];
      uVar8 = param_2[6];
      uVar9 = param_2[7];
      local_a8 = 0;
      local_98 = 0;
      puVar11 = (undefined8 *)FUN_140438ef0(0x40,local_c8);
      if (puVar11 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar11 + 4) = uVar2;
        *(undefined4 *)((longlong)puVar11 + 0x24) = uVar3;
        *(undefined4 *)(puVar11 + 5) = uVar4;
        *(undefined4 *)((longlong)puVar11 + 0x2c) = uVar5;
        *(undefined4 *)(puVar11 + 6) = uVar6;
        *(undefined4 *)((longlong)puVar11 + 0x34) = uVar7;
        *(undefined4 *)(puVar11 + 7) = uVar8;
        *puVar11 = &PTR_FUN_144f71bd0;
        *(undefined4 *)((longlong)puVar11 + 0x3c) = uVar9;
        puVar11[2] = param_1;
      }
      local_d8[0] = &LAB_14202cd80;
      FUN_14204c6c0(param_1,local_d8);
    }
    else if (((byte)*(undefined4 *)(param_1 + 0xa0) & 0x8f) == 10) {
      (**(code **)(**(longlong **)(param_1 + 0x98) + 0xf8))
                (*(longlong **)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa8),param_2);
    }
  }
  return;
}



// FUNCTION 142051270 FUN_142051270 body=576 status=ok
// SIG undefined FUN_142051270(void)

ulonglong FUN_142051270(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  DWORD DVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  undefined8 local_108;
  longlong local_100 [2];
  undefined4 local_f0 [2];
  undefined8 local_e8;
  longlong *local_e0;
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c8 [80];
  undefined1 local_78 [80];
  
  lVar6 = FUN_1416f8720(*param_3);
  if (lVar6 == 0) goto LAB_142051498;
  lVar6 = FUN_142039c70();
  if (lVar6 == 0) goto LAB_142051498;
  puVar7 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_d8);
  plVar3 = (longlong *)puVar7[1];
  uVar10 = *puVar7;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_d0 + 1;
    lVar6 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  plVar12 = plVar3 + 1;
  local_108 = param_1;
  FString::FString(local_100,param_2);
  local_f0[0] = 0xffffffff;
  uVar8 = FUN_1416f8720(*param_3);
  FUN_14170c210(local_f0,uVar8);
  local_e8 = uVar10;
  local_e0 = plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)plVar12 = (int)*plVar12 + 1;
    UNLOCK();
    LOCK();
    lVar6 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
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
  lVar6 = DAT_146acc8d0;
  cVar4 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar4 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar5 = GetCurrentThreadId();
    if (DVar5 == DAT_1468c21c0) goto LAB_142051404;
    lVar9 = 4;
  }
  else {
LAB_142051404:
    lVar9 = 0;
  }
  if (*(int *)(lVar9 + lVar6) == 0) {
    uVar10 = FUN_142016b50(local_78,&local_108);
    FUN_14204c370(param_1,uVar10);
  }
  else {
    uVar10 = FUN_142016b50(local_c8,&local_108);
    FUN_14204c280(uVar10);
  }
  plVar3 = local_e0;
  if (local_e0 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_e0 + 1;
    lVar6 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_e0)(local_e0);
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
  FUN_1416f8340(local_f0[0]);
  if (local_100[0] != 0) {
    FMemory::Free();
  }
LAB_142051498:
  uVar11 = FUN_1416f8340(*param_3);
  return uVar11 & 0xffffffffffffff00;
}



// FUNCTION 1420514b0 FUN_1420514b0 body=2366 status=ok
// SIG undefined FUN_1420514b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
FUN_1420514b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,float *param_4,
             longlong param_5,longlong *param_6,longlong param_7,uint param_8,undefined4 param_9,
             undefined8 param_10,longlong *param_11)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  undefined2 uVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  int *piVar10;
  uint *puVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_2a8 [32];
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined4 local_270;
  undefined2 local_268;
  char local_264;
  float local_260;
  float local_25c;
  float *local_250;
  float local_248;
  float local_244;
  float local_240;
  float local_23c;
  undefined8 local_238;
  undefined8 local_230;
  longlong *local_228;
  longlong local_220;
  longlong local_218;
  longlong local_210;
  longlong local_208;
  longlong local_200;
  longlong local_1f8;
  longlong local_1f0;
  longlong local_1e8;
  undefined1 local_1e0 [8];
  undefined1 local_1d8 [8];
  undefined1 local_1d0 [8];
  undefined1 local_1c8 [64];
  undefined1 local_188 [64];
  undefined1 local_148 [64];
  ulonglong local_108;
  longlong lStack_100;
  longlong local_f8;
  longlong lStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_2a8;
  uVar14 = (ulonglong)param_8;
  local_228 = param_6;
  local_250 = param_4;
  local_238 = param_3;
  local_230 = param_1;
  cVar5 = (**(code **)(*param_11 + 0x18))(param_11,*(undefined4 *)(param_7 + uVar14 * 4),param_10);
  if (cVar5 == '\0') {
    return 0;
  }
  plVar1 = param_11 + 0x201;
  if ((char)param_11[0xb] == '\0') {
    *(undefined1 *)(param_11 + 0xb) = 1;
    *(undefined4 *)((longlong)param_11 + 0x5c) = 1;
    param_11[3] = 0;
    param_11[4] = 0;
    param_11[5] = 0;
    *(undefined4 *)(param_11 + 6) = 0;
    param_11[7] = 0;
    param_11[8] = 0;
    param_11[9] = 0;
    param_11[10] = 0;
  }
  local_278._0_4_ = 0;
  local_280._0_4_ = 0;
  local_288 = (undefined1 *)CONCAT44(local_288._4_4_,8);
  FUN_142055c30(param_11,plVar1,0x10,param_2);
  local_264 = *(int *)(param_7 + uVar14 * 4) - 0x300000U < 0x53002;
  lVar7 = (**(code **)(*(longlong *)*param_6 + 0x18))();
  local_220 = *plVar1;
  local_218 = param_11[0x202];
  local_210 = param_11[0x203];
  local_268 = 0x101;
  if (local_210 != 0) {
    LOCK();
    *(int *)(local_210 + 8) = *(int *)(local_210 + 8) + 1;
    UNLOCK();
  }
  local_208 = param_11[0x204];
  local_200 = param_11[0x205];
  local_1f8 = param_11[0x206];
  local_1f0 = param_11[0x207];
  local_1e8 = param_11[0x208];
  if (local_1e8 != 0) {
    LOCK();
    *(int *)(local_1e8 + 8) = *(int *)(local_1e8 + 8) + 1;
    UNLOCK();
  }
  local_280._0_4_ = 0;
  local_288 = (undefined1 *)CONCAT62(local_288._2_6_,0x101);
  FUN_14207b5e0(param_11,&local_220,0x17,lVar7);
  lVar8 = *param_6;
  local_278 = (float *)((ulonglong)local_278._4_4_ << 0x20);
  local_280 = (float *)((ulonglong)local_280._4_4_ << 0x20);
  local_288 = (undefined1 *)CONCAT44(local_288._4_4_,8);
  fVar16 = (float)(*(int *)(lVar8 + 0x3c) - *(int *)(lVar8 + 0x34)) / (float)*(uint *)(lVar7 + 0x3c)
  ;
  local_f8 = (ulonglong)(uint)fVar16 << 0x20;
  fVar15 = (float)(*(int *)(lVar8 + 0x38) - *(int *)(lVar8 + 0x30)) / (float)*(uint *)(lVar7 + 0x38)
  ;
  local_108 = (ulonglong)(uint)fVar15;
  lStack_f0 = (ulonglong)(uint)(fVar16 * (float)*(int *)(lVar8 + 0x34)) << 0x20;
  lStack_100 = (ulonglong)(uint)((float)*(int *)(lVar8 + 0x30) * fVar15) << 0x20;
  FUN_142055c30(param_11,plVar1,0x18,&local_108);
  iVar6 = *(int *)(param_5 + 0x10);
  if (iVar6 < 6) {
    local_288 = (undefined1 *)((ulonglong)local_288._4_4_ << 0x20);
    FUN_142050f40(param_11,plVar1,local_238,0);
    local_260 = 1.0 / (float)*(uint *)(lVar7 + 0x38);
    local_270 = param_9;
    local_278 = &local_260;
    local_288 = local_a8;
    local_280 = local_250;
    local_25c = 1.0 / (float)*(uint *)(lVar7 + 0x3c);
    FUN_1420373b0(local_230,param_5 + 0x18,*(undefined4 *)(param_7 + uVar14 * 4),uVar14);
    uVar12 = 0;
    local_278 = (float *)((ulonglong)local_278 & 0xffffffff00000000);
    local_280 = (float *)((ulonglong)local_280 & 0xffffffff00000000);
    local_288._0_4_ = 4;
    FUN_142055c30(param_11,plVar1,10,local_a8);
    local_278 = (float *)((ulonglong)local_278 & 0xffffffff00000000);
    local_280 = (float *)((ulonglong)local_280 & 0xffffffff00000000);
    local_288 = (undefined1 *)CONCAT44(local_288._4_4_,2);
    FUN_142055c30(param_11,plVar1,0x19,&local_260);
    if (local_264 == '\0') goto LAB_142051dad;
    FUN_14203c4b0(param_5 + 0x34,local_88);
    FUN_14203c4b0(param_5 + 0x38,local_78);
    local_240 = *(float *)(param_5 + 0x28) * -0.05 * *local_250;
    local_23c = *(float *)(param_5 + 0x2c) * -0.05 * local_250[5];
    if ((longlong *)local_228[2] != (longlong *)0x0) {
      lVar8 = (**(code **)(*(longlong *)local_228[2] + 0x18))();
      local_278 = (float *)((ulonglong)local_278 & 0xffffffff00000000);
      local_280 = (float *)((ulonglong)local_280 & 0xffffffff00000000);
      local_288 = (undefined1 *)CONCAT44(local_288._4_4_,2);
      local_248 = 1.0 / ((float)*(uint *)(lVar8 + 0x38) * local_260);
      local_244 = 1.0 / ((float)*(uint *)(lVar8 + 0x3c) * local_25c);
      FUN_142055c30(param_11,plVar1,0x16,&local_248);
      local_268 = 0x101;
      uVar9 = Scaleform::Render::RHI::ShaderPair::ShaderPair(local_1c8,plVar1);
      local_280 = (float *)((ulonglong)local_280 & 0xffffffff00000000);
      local_288 = (undefined1 *)CONCAT62(local_288._2_6_,local_268);
      FUN_14207b5e0(param_11,uVar9,0x15,lVar8);
    }
    local_278 = (float *)((ulonglong)local_278 & 0xffffffff00000000);
    local_280 = (float *)((ulonglong)local_280 & 0xffffffff00000000);
    local_288 = (undefined1 *)CONCAT44(local_288._4_4_,2);
    FUN_142055c30(param_11,plVar1,0x11,&local_240);
    iVar6 = *(int *)(param_5 + 0x10);
    if (iVar6 == 3) {
      local_278 = (float *)((ulonglong)local_278 & 0xffffffff00000000);
      local_280 = (float *)((ulonglong)local_280 & 0xffffffff00000000);
      local_288 = (undefined1 *)CONCAT44(local_288._4_4_,4);
      FUN_142055c30(param_11,plVar1,0x14,local_78);
      iVar6 = *(int *)(param_5 + 0x10);
    }
    if (iVar6 - 4U < 2) {
      if (*(longlong *)(lVar7 + 0x28) != 0) {
        uVar12 = *(undefined8 *)(*(longlong *)(lVar7 + 0x28) + 0x10);
      }
      uVar12 = (**(code **)(**(longlong **)(param_5 + 0x50) + 0xa8))
                         (*(longlong **)(param_5 + 0x50),uVar12);
      local_268 = 0x101;
      uVar9 = Scaleform::Render::RHI::ShaderPair::ShaderPair(local_188,plVar1);
      local_280 = (float *)((ulonglong)local_280 & 0xffffffff00000000);
      local_288 = (undefined1 *)CONCAT62(local_288._2_6_,local_268);
      FUN_14207b5e0(param_11,uVar9,0xb,uVar12);
      goto LAB_142051dad;
    }
    puVar13 = local_88;
    uVar12 = 0x13;
LAB_142051d9a:
    local_288 = (undefined1 *)CONCAT44(local_288._4_4_,4);
  }
  else {
    if (iVar6 != 8) {
      if (iVar6 != 10) goto LAB_142051dad;
      local_268 = 0x101;
      if (*(int *)(param_5 + 0x30) == 0) {
        local_268 = 0x100;
      }
      uVar4 = local_268;
      if (*(longlong *)(lVar7 + 0x28) == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(undefined8 *)(*(longlong *)(lVar7 + 0x28) + 0x10);
      }
      lVar8 = (**(code **)(**(longlong **)(param_5 + 0x18) + 0xa8))
                        (*(longlong **)(param_5 + 0x18),uVar12);
      uVar12 = Scaleform::Render::RHI::ShaderPair::ShaderPair(local_148,plVar1);
      local_280 = (float *)((ulonglong)local_280 & 0xffffffff00000000);
      local_288 = (undefined1 *)CONCAT62(local_288._2_6_,uVar4);
      FUN_14207b5e0(param_11,uVar12,0xe,lVar8);
      iVar6 = *(int *)(param_5 + 0x28);
      local_e8 = 0;
      local_e0 = 0;
      local_d8 = 0;
      local_d0 = 0;
      if (iVar6 == 1) {
LAB_142051b10:
        local_e8 = 0x3f800000;
      }
      else if (iVar6 == 2) {
        local_e8 = 0x3f80000000000000;
      }
      else if (iVar6 == 4) {
        local_e0 = 0x3f800000;
      }
      else {
        if (iVar6 != 8) goto LAB_142051b10;
        local_e0 = 0x3f80000000000000;
      }
      iVar6 = *(int *)(param_5 + 0x2c);
      if (iVar6 == 1) {
LAB_142051b5e:
        local_d8 = 0x3f800000;
      }
      else if (iVar6 == 2) {
        local_d8 = 0x3f80000000000000;
      }
      else if (iVar6 == 4) {
        local_d0 = 0x3f800000;
      }
      else {
        if (iVar6 != 8) goto LAB_142051b5e;
        local_d0 = 0x3f80000000000000;
      }
      local_b8 = (float)*(uint *)(lVar7 + 0x38) / ((float)*(uint *)(lVar8 + 0x38) * *local_250);
      local_c8 = (*(float *)(param_5 + 0x34) / (float)*(uint *)(lVar7 + 0x38)) * *local_250;
      local_b4 = (float)*(uint *)(lVar7 + 0x3c) / ((float)*(uint *)(lVar8 + 0x3c) * local_250[5]);
      local_b0 = *(float *)(param_5 + 0x20) / (float)*(uint *)(lVar8 + 0x38);
      local_ac = *(float *)(param_5 + 0x24) / (float)*(uint *)(lVar8 + 0x3c);
      local_c4 = (*(float *)(param_5 + 0x38) / (float)*(uint *)(lVar7 + 0x3c)) * local_250[5];
      iVar6 = *(int *)(lVar8 + 0x38);
      iVar2 = *(int *)(lVar8 + 0x3c);
      piVar10 = (int *)(**(code **)(**(longlong **)(param_5 + 0x18) + 0x28))
                                 (*(longlong **)(param_5 + 0x18),local_1e0);
      if ((*piVar10 == iVar6) && (piVar10[1] == iVar2)) {
        local_c0 = 1.0;
        local_bc = 1.0;
      }
      else {
        uVar3 = *(uint *)(lVar8 + 0x38);
        puVar11 = (uint *)(**(code **)(**(longlong **)(param_5 + 0x18) + 0x28))
                                    (*(longlong **)(param_5 + 0x18),local_1d8);
        local_c0 = ((float)*puVar11 - 1.0) / (float)uVar3;
        uVar3 = *(uint *)(lVar8 + 0x3c);
        lVar7 = (**(code **)(**(longlong **)(param_5 + 0x18) + 0x28))
                          (*(longlong **)(param_5 + 0x18),local_1d0);
        local_bc = ((float)*(uint *)(lVar7 + 4) - 1.0) / (float)uVar3;
      }
      local_278 = (float *)((ulonglong)local_278 & 0xffffffff00000000);
      local_280 = (float *)((ulonglong)local_280 & 0xffffffff00000000);
      local_288._0_4_ = 4;
      FUN_142055c30(param_11,plVar1,4,&local_e8);
      local_278 = (float *)((ulonglong)local_278 & 0xffffffff00000000);
      local_280 = (float *)((ulonglong)local_280 & 0xffffffff00000000);
      local_288._0_4_ = 4;
      FUN_142055c30(param_11,plVar1,5,&local_d8);
      local_278 = (float *)((ulonglong)local_278 & 0xffffffff00000000);
      local_280 = (float *)((ulonglong)local_280 & 0xffffffff00000000);
      local_288._0_4_ = 4;
      FUN_142055c30(param_11,plVar1,0xd,&local_b8);
      local_278 = (float *)((ulonglong)local_278 & 0xffffffff00000000);
      local_280 = (float *)((ulonglong)local_280 & 0xffffffff00000000);
      local_288 = (undefined1 *)CONCAT44(local_288._4_4_,4);
      FUN_142055c30(param_11,plVar1,0x12,&local_c8);
      if (*(int *)(param_5 + 0x30) != 3) goto LAB_142051dad;
      FUN_14203c4b0(param_5 + 0x3c,local_98);
      puVar13 = local_98;
      uVar12 = 1;
      goto LAB_142051d9a;
    }
    local_288 = (undefined1 *)((ulonglong)local_288._4_4_ << 0x20);
    FUN_142050f40(param_11,plVar1,local_238,0);
    local_278 = (float *)((ulonglong)local_278 & 0xffffffff00000000);
    local_280 = (float *)((ulonglong)local_280 & 0xffffffff00000000);
    local_288._0_4_ = 4;
    FUN_142055c30(param_11,plVar1,2,param_5 + 0x58);
    puVar13 = (undefined1 *)(param_5 + 0x18);
    uVar12 = 3;
    local_288 = (undefined1 *)CONCAT44(local_288._4_4_,0x10);
  }
  local_278 = (float *)((ulonglong)local_278 & 0xffffffff00000000);
  local_280 = (float *)((ulonglong)local_280 & 0xffffffff00000000);
  FUN_142055c30(param_11,plVar1,uVar12,puVar13);
LAB_142051dad:
  FUN_1420709e0(param_11,1);
  return 1;
}



// FUNCTION 142051df0 SetGeometry body=184 status=ok
// SIG undefined SetGeometry(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void Chaos::FParticleNonFrequentData::SetGeometry(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  uStack_30 = (longlong *)param_2[1];
  local_38 = *param_2;
  if (uStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_30 + 1) = (int)uStack_30[1] + 1;
    UNLOCK();
  }
  if (&local_38 != param_1) {
    local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
    uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
    uVar4 = *param_1;
    plVar5 = (longlong *)param_1[1];
    local_28 = (undefined4)local_38;
    uStack_24 = local_38._4_4_;
    uStack_20 = (undefined4)uStack_30;
    uStack_1c = uStack_30._4_4_;
    *(undefined4 *)param_1 = (undefined4)local_38;
    *(undefined4 *)((longlong)param_1 + 4) = local_38._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_30;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_30._4_4_;
    local_38 = uVar4;
    uStack_30 = plVar5;
  }
  plVar5 = uStack_30;
  if (uStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = uStack_30 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*uStack_30)(uStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*uStack_30 + 8))(uStack_30,1);
      }
    }
  }
  return;
}



// FUNCTION 142051eb0 FUN_142051eb0 body=160 status=ok
// SIG undefined FUN_142051eb0(void)

void FUN_142051eb0(undefined8 param_1,longlong *param_2)

{
  void *_Src;
  int iVar1;
  wchar_t *_Str;
  wchar_t *pwVar2;
  longlong lVar3;
  wchar_t *local_18;
  int local_10;
  
  if ((int)param_2[1] == 1) {
    pwVar2 = (wchar_t *)0x0;
    local_10 = *(int *)((undefined8 *)*param_2 + 1);
    lVar3 = (longlong)local_10;
    _Src = *(void **)*param_2;
    local_18 = (wchar_t *)0x0;
    if (local_10 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_18,local_10,0);
      pwVar2 = local_18;
      _guard_xfg_dispatch_icall_nop(local_18,_Src,lVar3 * 2);
    }
    _Str = L"";
    if (local_10 != 0) {
      _Str = pwVar2;
    }
    iVar1 = _wtoi(_Str);
    DAT_146acc718 = -(iVar1 != 0) & 8;
    if (pwVar2 != (wchar_t *)0x0) {
      FMemory::Free(pwVar2);
    }
  }
  return;
}



// FUNCTION 142051f50 FUN_142051f50 body=69 status=ok
// SIG undefined FUN_142051f50(void)

void FUN_142051f50(longlong param_1,longlong *param_2)

{
  wchar_t *_Str;
  
  if ((int)param_2[1] < 2) {
    if ((int)param_2[1] == 1) {
      if (*(int *)((undefined8 *)*param_2 + 1) == 0) {
        _Str = L"";
      }
      else {
        _Str = *(wchar_t **)*param_2;
      }
      _wtoi(_Str);
    }
                    /* WARNING: Could not recover jumptable at 0x000142051f88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0xb8))();
    return;
  }
  return;
}



// FUNCTION 142051fa0 FUN_142051fa0 body=299 status=ok
// SIG undefined FUN_142051fa0(void)

void FUN_142051fa0(longlong param_1,undefined1 param_2)

{
  char *pcVar1;
  char cVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong *local_58;
  uint local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_18;
  
  pcVar1 = (char *)(*(longlong *)(param_1 + 0x78) + 0x30);
  LOCK();
  cVar2 = *pcVar1;
  if (cVar2 == '\0') {
    *pcVar1 = '\0';
    cVar2 = '\0';
  }
  UNLOCK();
  if (cVar2 < '\x06') {
    local_50 = *(uint *)(param_1 + 0xa0);
    local_48 = *(undefined8 *)(param_1 + 0xa8);
    local_40 = *(undefined8 *)(param_1 + 0xb0);
    local_68 = 0xffffffffffffffff;
    uStack_60 = 0xffffffffffffffff;
    local_58 = (longlong *)0x0;
    if ((local_50 >> 6 & 1) != 0) {
      local_58 = *(longlong **)(param_1 + 0x98);
      (**(code **)(*local_58 + 8))(local_58,&local_68);
    }
    lVar4 = 2;
    local_38 = 0xffffffffffffffff;
    uStack_30 = 0xffffffffffffffff;
    local_28 = 0;
    local_20 = 2;
    local_18 = param_2;
    FUN_14202cf40(*(undefined8 *)(param_1 + 0x78),PTR_s_scaleform_gfx_InteractiveObjectE_1464f0638,
                  PTR_s_setHitTestDisable_1464f0668,0,&local_68,2);
    puVar3 = &stack0xfffffffffffffff8;
    do {
      lVar4 = lVar4 + -1;
      if ((*(uint *)(puVar3 + -0x18) >> 6 & 1) != 0) {
        (**(code **)(**(longlong **)(puVar3 + -0x20) + 0x10))
                  (*(longlong **)(puVar3 + -0x20),puVar3 + -0x30,*(undefined8 *)(puVar3 + -0x10));
        *(undefined8 *)(puVar3 + -0x20) = 0;
      }
      *(undefined4 *)(puVar3 + -0x18) = 0;
      puVar3 = puVar3 + -0x30;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 1420520d0 FUN_1420520d0 body=324 status=ok
// SIG undefined FUN_1420520d0(void)

void FUN_1420520d0(longlong param_1,longlong param_2)

{
  char *pcVar1;
  char cVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong *local_58;
  uint local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  uint local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  pcVar1 = (char *)(*(longlong *)(param_1 + 0x78) + 0x30);
  LOCK();
  cVar2 = *pcVar1;
  if (cVar2 == '\0') {
    *pcVar1 = '\0';
    cVar2 = '\0';
  }
  UNLOCK();
  if (cVar2 < '\x06') {
    local_50 = *(uint *)(param_1 + 0xa0);
    local_48 = *(undefined8 *)(param_1 + 0xa8);
    local_40 = *(undefined8 *)(param_1 + 0xb0);
    local_68 = 0xffffffffffffffff;
    uStack_60 = 0xffffffffffffffff;
    local_58 = (longlong *)0x0;
    if ((local_50 >> 6 & 1) != 0) {
      local_58 = *(longlong **)(param_1 + 0x98);
      (**(code **)(*local_58 + 8))(local_58,&local_68);
    }
    local_20 = *(uint *)(param_2 + 0x18);
    local_18 = *(undefined8 *)(param_2 + 0x20);
    local_10 = *(undefined8 *)(param_2 + 0x28);
    local_38 = 0xffffffffffffffff;
    uStack_30 = 0xffffffffffffffff;
    local_28 = (longlong *)0x0;
    if ((local_20 >> 6 & 1) != 0) {
      local_28 = *(longlong **)(param_2 + 0x10);
      (**(code **)(*local_28 + 8))(local_28,&local_38);
    }
    lVar4 = 2;
    FUN_14202cf40(*(undefined8 *)(param_1 + 0x78),PTR_s_scaleform_gfx_TextFieldEx_1464f0630,
                  PTR_s_setTextAutoSize_1464f0650,0,&local_68,2);
    puVar3 = &stack0xfffffffffffffff8;
    do {
      lVar4 = lVar4 + -1;
      if ((*(uint *)(puVar3 + -0x18) >> 6 & 1) != 0) {
        (**(code **)(**(longlong **)(puVar3 + -0x20) + 0x10))
                  (*(longlong **)(puVar3 + -0x20),puVar3 + -0x30,*(undefined8 *)(puVar3 + -0x10));
        *(undefined8 *)(puVar3 + -0x20) = 0;
      }
      *(undefined4 *)(puVar3 + -0x18) = 0;
      puVar3 = puVar3 + -0x30;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 142052220 FUN_142052220 body=92 status=ok
// SIG undefined FUN_142052220(void)

void FUN_142052220(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  if ((plVar1 != (longlong *)0x0) && (plVar1 != (longlong *)(param_1 + 0x20))) {
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 8))(param_2);
  }
  if (*(longlong **)(param_1 + 0x48) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x48) + 0x10))();
  }
  *(longlong **)(param_1 + 0x48) = param_2;
  *(longlong *)(param_1 + 0x18) = param_1 + 0x20;
  return;
}



// FUNCTION 142052280 FUN_142052280 body=92 status=ok
// SIG undefined FUN_142052280(void)

void FUN_142052280(longlong param_1,undefined4 param_2)

{
  if ((*(uint *)(param_1 + 0x18) >> 6 & 1) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))
              (*(longlong **)(param_1 + 0x10),param_1,*(undefined8 *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x18) = 3;
    *(undefined4 *)(param_1 + 0x20) = param_2;
    return;
  }
  *(undefined4 *)(param_1 + 0x18) = 3;
  *(undefined4 *)(param_1 + 0x20) = param_2;
  return;
}



// FUNCTION 1420522e0 FUN_1420522e0 body=254 status=ok
// SIG undefined FUN_1420522e0(void)

void FUN_1420522e0(longlong param_1,undefined8 *param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char cVar10;
  undefined8 *puVar11;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  pcVar1 = (char *)(*(longlong *)(param_1 + 0x78) + 0x30);
  LOCK();
  cVar10 = *pcVar1;
  if (cVar10 == '\0') {
    *pcVar1 = '\0';
    cVar10 = '\0';
  }
  UNLOCK();
  if (cVar10 < '\x06') {
    cVar10 = FUN_142045c10(*(undefined8 *)(param_1 + 0x78));
    if (cVar10 == '\0') {
      uVar6 = *param_2;
      uVar7 = param_2[1];
      local_28 = 0;
      local_18 = 0;
      uVar8 = param_2[2];
      uVar9 = param_2[3];
      uVar2 = *(undefined4 *)(param_2 + 4);
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x24);
      uVar4 = *(undefined4 *)(param_2 + 5);
      uVar5 = *(undefined4 *)((longlong)param_2 + 0x2c);
      puVar11 = (undefined8 *)FUN_140438ef0(0x50,local_48);
      if (puVar11 != (undefined8 *)0x0) {
        *puVar11 = &PTR_FUN_144f71c18;
        puVar11[2] = param_1;
        puVar11[4] = uVar6;
        puVar11[5] = uVar7;
        puVar11[6] = uVar8;
        puVar11[7] = uVar9;
        *(undefined4 *)(puVar11 + 8) = uVar2;
        *(undefined4 *)((longlong)puVar11 + 0x44) = uVar3;
        *(undefined4 *)(puVar11 + 9) = uVar4;
        *(undefined4 *)((longlong)puVar11 + 0x4c) = uVar5;
      }
      local_58[0] = &LAB_14202bf30;
      FUN_1420326d0(param_1,local_58);
    }
    else if (((byte)*(undefined4 *)(param_1 + 0xa0) & 0x8f) == 10) {
      (**(code **)(**(longlong **)(param_1 + 0x98) + 0x108))
                (*(longlong **)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa8),param_2);
    }
  }
  return;
}



// FUNCTION 1420523e0 FUN_1420523e0 body=582 status=ok
// SIG undefined FUN_1420523e0(void)

void FUN_1420523e0(longlong param_1,undefined8 param_2,longlong param_3)

{
  char *pcVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  char cVar7;
  undefined8 *puVar8;
  uint uVar9;
  longlong *local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong *local_88;
  uint local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  pcVar1 = (char *)(*(longlong *)(param_1 + 0x78) + 0x30);
  LOCK();
  cVar7 = *pcVar1;
  if (cVar7 == '\0') {
    *pcVar1 = '\0';
    cVar7 = '\0';
  }
  UNLOCK();
  if (cVar7 < '\x06') {
    cVar7 = FUN_142045c10(*(undefined8 *)(param_1 + 0x78));
    if (cVar7 == '\0') {
      puVar8 = (undefined8 *)
               TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_68);
      local_a8 = (longlong *)puVar8[1];
      uVar5 = *puVar8;
      if (local_a8 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_a8 + 0xc) = *(int *)((longlong)local_a8 + 0xc) + 1;
        UNLOCK();
      }
      local_78 = *(undefined8 *)(param_3 + 0x20);
      local_70 = *(undefined8 *)(param_3 + 0x28);
      local_80 = *(uint *)(param_3 + 0x18);
      local_88 = (longlong *)0x0;
      local_98 = 0xffffffffffffffff;
      uStack_90 = 0xffffffffffffffff;
      if ((local_80 >> 6 & 1) != 0) {
        local_88 = *(longlong **)(param_3 + 0x10);
        (**(code **)(*local_88 + 8))(local_88,&local_98);
      }
      local_28 = 0;
      local_18 = 0;
      puVar8 = (undefined8 *)FUN_140438ef0(0x58,local_48);
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = &PTR_FUN_144f71ba0;
        puVar8[1] = param_1;
        puVar8[2] = uVar5;
        puVar8[3] = local_a8;
        local_a8 = (longlong *)0x0;
        puVar8[4] = param_2;
        puVar8[5] = 0xffffffffffffffff;
        puVar8[6] = 0xffffffffffffffff;
        puVar8[7] = 0;
        *(uint *)(puVar8 + 8) = local_80;
        puVar8[9] = local_78;
        puVar8[10] = local_70;
        if ((local_80 >> 6 & 1) != 0) {
          puVar8[7] = local_88;
          (**(code **)(*local_88 + 8))(local_88);
        }
      }
      local_58[0] = &LAB_14202cba0;
      FUN_1420326d0(param_1,local_58);
      if ((local_80 >> 6 & 1) != 0) {
        (**(code **)(*local_88 + 0x10))(local_88,&local_98,local_78);
        local_88 = (longlong *)0x0;
      }
      local_80 = 0;
      if (local_a8 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)local_a8 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if ((iVar4 == 1) && (local_a8 != (longlong *)0x0)) {
          (**(code **)(*local_a8 + 8))(local_a8,1);
        }
      }
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_60 + 1;
        lVar6 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar2 = (int *)((longlong)local_60 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_60 + 8))(local_60,1);
          }
        }
      }
    }
    else {
      uVar9 = *(uint *)(param_1 + 0xa0) & 0x8f;
      if (uVar9 - 8 < 4) {
        (**(code **)(**(longlong **)(param_1 + 0x98) + 0x28))
                  (*(longlong **)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa8),param_2,param_3,
                   uVar9 == 10);
      }
    }
  }
  return;
}



// FUNCTION 142052630 FUN_142052630 body=606 status=ok
// SIG undefined FUN_142052630(void)

void FUN_142052630(longlong param_1,undefined8 param_2,longlong *param_3)

{
  char *pcVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  char cVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong *plVar11;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 *local_88 [2];
  undefined1 local_78 [32];
  undefined8 local_58;
  undefined4 local_48;
  
  pcVar1 = (char *)(*(longlong *)(param_1 + 0x78) + 0x30);
  LOCK();
  cVar8 = *pcVar1;
  if (cVar8 == '\0') {
    *pcVar1 = '\0';
    cVar8 = '\0';
  }
  UNLOCK();
  if (cVar8 < '\x06') {
    cVar8 = FUN_142045c10(*(undefined8 *)(param_1 + 0x78));
    if (cVar8 == '\0') {
      puVar9 = (undefined8 *)
               TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_98);
      plVar11 = (longlong *)puVar9[1];
      uVar5 = *puVar9;
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
        UNLOCK();
      }
      plVar6 = (longlong *)param_3[1];
      lVar7 = *param_3;
      plVar2 = plVar6 + 1;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)plVar2 = (int)*plVar2 + 1;
        UNLOCK();
      }
      local_58 = 0;
      local_48 = 0;
      puVar9 = (undefined8 *)FUN_140438ef0(0x38,local_78);
      if (puVar9 != (undefined8 *)0x0) {
        *puVar9 = &PTR_FUN_144f71b88;
        puVar9[1] = param_1;
        puVar9[2] = uVar5;
        puVar9[3] = plVar11;
        plVar11 = (longlong *)0x0;
        puVar9[4] = param_2;
        puVar9[5] = lVar7;
        puVar9[6] = plVar6;
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *(int *)plVar2 = (int)*plVar2 + 1;
          UNLOCK();
        }
      }
      local_88[0] = &LAB_14202cb20;
      FUN_1420326d0(param_1,local_88);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        lVar7 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar3 = (int *)((longlong)plVar6 + 0xc);
          iVar4 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
          }
        }
      }
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        piVar3 = (int *)((longlong)plVar11 + 0xc);
        iVar4 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
        }
      }
      if (local_90 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_90 + 1;
        lVar7 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_90)(local_90);
          LOCK();
          piVar3 = (int *)((longlong)local_90 + 0xc);
          iVar4 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_90 + 8))(local_90,1);
          }
        }
      }
    }
    else {
      uVar10 = *(uint *)(param_1 + 0xa0) & 0x8f;
      if (uVar10 - 8 < 4) {
        (**(code **)(**(longlong **)(param_1 + 0x98) + 0x28))
                  (*(longlong **)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa8),param_2,
                   *param_3 + 0x88,uVar10 == 10);
      }
    }
  }
  plVar11 = (longlong *)param_3[1];
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar11 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar3 = (int *)((longlong)plVar11 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  return;
}



// FUNCTION 142052890 FUN_142052890 body=763 status=ok
// SIG undefined FUN_142052890(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142052890(longlong param_1,longlong param_2,undefined8 *param_3,longlong *param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint uVar4;
  longlong *plVar5;
  bool bVar6;
  int iVar7;
  ulonglong *puVar8;
  longlong lVar9;
  undefined2 *puVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  bool bVar15;
  undefined1 auStack_1a8 [32];
  ulonglong local_188;
  longlong *local_180;
  undefined4 local_178;
  ulonglong local_170;
  longlong *plStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  longlong *local_150;
  uint local_148;
  undefined8 local_140;
  undefined8 local_130;
  undefined8 uStack_128;
  longlong *local_120;
  uint local_118;
  undefined8 local_110;
  undefined1 local_f8 [128];
  longlong local_78;
  ulonglong local_58;
  
  if (param_2 == 0) {
    return;
  }
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  uVar14 = 0;
  local_178 = 0;
  local_150 = (longlong *)0x0;
  local_148 = 0;
  local_160 = 0xffffffffffffffff;
  uStack_158 = 0xffffffffffffffff;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FNetworkPlatformFile::CreateDirectoryTree(*(longlong *)(param_1 + 0x78),&local_160);
    uVar4 = *(uint *)(param_4 + 1);
    (**(code **)(*local_150 + 0x58))(local_150,local_140,uVar4);
    uVar12 = uVar14;
    uVar13 = uVar14;
    if (uVar4 != 0) {
      do {
        local_130 = 0xffffffffffffffff;
        uStack_128 = 0xffffffffffffffff;
        local_120 = (longlong *)0x0;
        local_118 = 0;
        FUN_142091bd0(*param_4 + uVar13,&local_130);
        (**(code **)(*local_150 + 0x68))(local_150,local_140,uVar12,&local_130);
        if ((local_118 >> 6 & 1) != 0) {
          (**(code **)(*local_120 + 0x10))(local_120,&local_130,local_110);
        }
        uVar11 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar11;
        uVar13 = uVar13 + 0x38;
      } while (uVar11 != uVar4);
    }
  }
  if ((*(longlong *)(param_2 + 0x28) != 0) && (*(longlong *)(param_2 + 0x30) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_2 + 0x30) + 8);
    LOCK();
    iVar7 = *piVar1;
    if (iVar7 == 0) {
      *piVar1 = 0;
      iVar7 = 0;
    }
    UNLOCK();
    if (0 < iVar7) {
      local_180 = *(longlong **)(param_2 + 0x30);
      local_188 = 0;
      if (local_180 != (longlong *)0x0) {
        LOCK();
        iVar7 = (int)local_180[1];
        bVar15 = iVar7 == 0;
        if (bVar15) {
          *(int *)(local_180 + 1) = 0;
          iVar7 = 0;
        }
        UNLOCK();
        while (!bVar15) {
          LOCK();
          bVar15 = iVar7 == (int)local_180[1];
          if (bVar15) {
            *(int *)(local_180 + 1) = iVar7 + 1;
          }
          UNLOCK();
          if (bVar15) {
            uVar14 = *(ulonglong *)(param_2 + 0x28);
            puVar8 = &local_188;
            bVar6 = true;
            bVar15 = false;
            local_188 = uVar14;
            goto LAB_142052a28;
          }
          LOCK();
          iVar7 = (int)local_180[1];
          bVar15 = iVar7 == 0;
          if (bVar15) {
            *(int *)(local_180 + 1) = 0;
            iVar7 = 0;
          }
          UNLOCK();
        }
        local_180 = (longlong *)0x0;
      }
      uVar14 = 0;
      puVar8 = &local_188;
      bVar6 = true;
      bVar15 = false;
      goto LAB_142052a28;
    }
  }
  puVar8 = &local_170;
  local_170 = 0;
  plStack_168 = (longlong *)0x0;
  bVar6 = false;
  bVar15 = true;
LAB_142052a28:
  plVar5 = (longlong *)puVar8[1];
  puVar8[1] = 0;
  plVar3 = plStack_168;
  *puVar8 = 0;
  if ((bVar15) && (plStack_168 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_168 + 1;
    lVar9 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_168)(plStack_168);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plStack_168 + 8))(plStack_168,1);
      }
    }
  }
  plVar3 = local_180;
  if ((bVar6) && (local_180 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_180 + 1;
    lVar9 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_180)(local_180);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_180 + 8))(local_180,1);
      }
    }
  }
  if (uVar14 != 0) {
    if (*(int *)(param_3 + 1) == 0) {
      puVar10 = &DAT_143f3eda8;
    }
    else {
      puVar10 = (undefined2 *)*param_3;
    }
    lVar9 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                      (local_f8,puVar10);
    FUN_1420523e0(uVar14,*(undefined8 *)(lVar9 + 0x88),&local_160);
    if (local_78 != 0) {
      FMemory::Free();
    }
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    lVar9 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  if ((local_148 >> 6 & 1) != 0) {
    (**(code **)(*local_150 + 0x10))(local_150,&local_160,local_140);
  }
  return;
}



// FUNCTION 142052b90 FUN_142052b90 body=70 status=ok
// SIG undefined FUN_142052b90(void)

void FUN_142052b90(longlong param_1)

{
  if ((*(uint *)(param_1 + 0x18) >> 6 & 1) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))
              (*(longlong **)(param_1 + 0x10),param_1,*(undefined8 *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x18) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0x18) = 1;
  return;
}



// FUNCTION 142052be0 FUN_142052be0 body=98 status=ok
// SIG undefined FUN_142052be0(void)

void FUN_142052be0(longlong param_1,undefined8 param_2)

{
  if ((*(uint *)(param_1 + 0x18) >> 6 & 1) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))
              (*(longlong **)(param_1 + 0x10),param_1,*(undefined8 *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = param_2;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x18) = 5;
    return;
  }
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x18) = 5;
  return;
}



// FUNCTION 142052c50 FUN_142052c50 body=113 status=ok
// SIG undefined FUN_142052c50(void)

ulonglong FUN_142052c50(longlong param_1,byte param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  uVar3 = 0;
  LOCK();
  uVar1 = *(uint *)(param_1 + 0xa0);
  if (uVar1 == 0) {
    *(uint *)(param_1 + 0xa0) = 0;
  }
  else {
    uVar3 = (ulonglong)uVar1;
  }
  UNLOCK();
  if ((uVar1 != 0) != (bool)param_2) {
    LOCK();
    *(uint *)(param_1 + 0xa0) = (uint)param_2;
    UNLOCK();
    local_28 = 0;
    local_18 = 0;
    puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_48);
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[1] = param_1;
      *puVar2 = &PTR_FUN_143f77b70;
    }
    local_58[0] = &LAB_14202c480;
    uVar3 = FUN_14204c370(param_1,local_58);
  }
  return uVar3;
}



// FUNCTION 142052cd0 FUN_142052cd0 body=518 status=ok
// SIG undefined FUN_142052cd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142052cd0(longlong param_1)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [4];
  undefined4 local_94;
  undefined4 local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  code *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  LOCK();
  iVar1 = *(int *)(param_1 + 0x1e0);
  *(int *)(param_1 + 0x1e0) = 1;
  UNLOCK();
  if (iVar1 == 0) {
    LOCK();
    DAT_146accd4c = DAT_146accd4c + 1;
    UNLOCK();
    LOCK();
    cVar2 = *(char *)(param_1 + 0x30);
    if (cVar2 == '\0') {
      *(char *)(param_1 + 0x30) = '\0';
      cVar2 = '\0';
    }
    UNLOCK();
    if (cVar2 < '\x02') {
      cVar2 = FUN_142055370(param_1,6);
      if (cVar2 != '\0') {
        cVar2 = FUN_142055370(param_1,7);
        if (cVar2 != '\0') {
          cVar2 = FUN_142055370(param_1,8);
          if (cVar2 != '\0') {
            cVar2 = FUN_142048790();
            if (cVar2 != '\0') {
              FUN_14172a070(local_98,0);
              lVar3 = FUN_14203bcd0(param_1);
              local_94 = 0xffffffff;
              uVar6 = 0xffffffff;
              if (lVar3 != 0) {
                FUN_14170c210(&local_94,lVar3);
                uVar6 = local_94;
              }
              local_94 = 0xffffffff;
              local_38 = (longlong *)0x0;
              local_28 = 0;
              local_90 = uVar6;
              puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_58);
              if (puVar4 != (undefined8 *)0x0) {
                *puVar4 = &PTR_FUN_1444f8758;
                *(undefined4 *)(puVar4 + 1) = uVar6;
                uVar6 = 0xffffffff;
                local_90 = 0xffffffff;
              }
              local_68[0] = FUN_14202c3c0;
              FUN_1420321f0(param_1,local_68);
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
              FUN_1416f8340(uVar6);
              FUN_1416f8340(local_94);
              FUN_14172a400(local_98);
            }
            if (*(longlong **)(param_1 + 0x88) != (longlong *)0x0) {
              lVar3 = **(longlong **)(param_1 + 0x88);
              uVar5 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_88);
              (**(code **)(lVar3 + 0x40))(*(undefined8 *)(param_1 + 0x88),uVar5);
            }
            *(undefined8 *)(param_1 + 0x88) = 0;
            cVar2 = FUN_142055370(param_1,9);
            if (cVar2 != '\0') {
              uVar5 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_78);
              FUN_14204ea20(uVar5);
            }
            LOCK();
            DAT_146accd4c = DAT_146accd4c + -1;
            UNLOCK();
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142052ee0 FUN_142052ee0 body=95 status=ok
// SIG undefined FUN_142052ee0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142052ee0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  plVar1 = *(longlong **)(param_1 + 0x78);
  if (plVar1 != (longlong *)0x0) {
    local_58 = *param_2;
    uStack_50 = param_2[1];
    local_48 = param_2[2];
    uStack_40 = param_2[3];
    local_38 = *(undefined4 *)(param_2 + 4);
    uStack_34 = *(undefined4 *)((longlong)param_2 + 0x24);
    uStack_30 = *(undefined4 *)(param_2 + 5);
    uStack_2c = *(undefined4 *)((longlong)param_2 + 0x2c);
    local_28 = *(undefined4 *)(param_2 + 6);
    uStack_24 = *(undefined4 *)((longlong)param_2 + 0x34);
    uStack_20 = *(undefined4 *)(param_2 + 7);
    uStack_1c = *(undefined4 *)((longlong)param_2 + 0x3c);
    (**(code **)(*plVar1 + 0x1f8))(plVar1,&local_58);
  }
  return;
}



// FUNCTION 142052f40 FUN_142052f40 body=518 status=ok
// SIG undefined FUN_142052f40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142052f40(longlong param_1,float *param_2)

{
  char *pcVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  undefined8 uStack_160;
  float local_158;
  undefined4 uStack_154;
  undefined1 *local_148 [2];
  undefined1 local_138 [32];
  undefined8 local_118;
  undefined4 local_108;
  double local_f8;
  double local_f0;
  double local_c8;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ushort local_24;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  pcVar1 = (char *)(*(longlong *)(param_1 + 0x78) + 0x30);
  LOCK();
  cVar2 = *pcVar1;
  if (cVar2 == '\0') {
    *pcVar1 = '\0';
    cVar2 = '\0';
  }
  UNLOCK();
  if (cVar2 < '\x06') {
    cVar2 = FUN_142045c10(*(undefined8 *)(param_1 + 0x78));
    if (cVar2 == '\0') {
      uStack_160 = *(undefined8 *)param_2;
      local_158 = param_2[2];
      local_118 = 0;
      local_108 = 0;
      local_168 = param_1;
      puVar3 = (undefined8 *)FUN_140438ef0(0x20,local_138);
      if (puVar3 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar3 + 1) = (undefined4)local_168;
        *(undefined4 *)((longlong)puVar3 + 0xc) = local_168._4_4_;
        *(undefined4 *)(puVar3 + 2) = (undefined4)uStack_160;
        *(undefined4 *)((longlong)puVar3 + 0x14) = uStack_160._4_4_;
        *puVar3 = &PTR_FUN_143f4d0b0;
        puVar3[3] = CONCAT44(uStack_154,local_158);
      }
      local_148[0] = &LAB_14202c7b0;
      FUN_1420326d0(param_1,local_148);
    }
    else {
      local_24 = 0;
      local_90 = 0;
      local_80 = 0;
      local_78 = 0;
      local_60 = 0;
      local_50 = 0;
      local_48 = 0;
      local_38 = 0;
      local_98 = 0x3f800000;
      local_88 = 0x3f80000000000000;
      local_70 = 0x3f800000;
      local_68 = 0x3f800000;
      local_58 = 0x3f80000000000000;
      local_40 = 0x3f800000;
      local_30 = 0x3f80000000000000;
      if ((((byte)*(undefined4 *)(param_1 + 0xa0) & 0x8f) == 10) &&
         (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0xd8))
                            (*(longlong **)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa8),
                             &local_f8), cVar2 != '\0')) {
        if ((*param_2 != (float)local_f8) ||
           (((float)local_f0 != param_2[1] || ((float)local_c8 != param_2[2])))) {
          local_24 = local_24 | 0x83;
          local_f8 = (double)*param_2;
          local_c8 = (double)param_2[2];
          local_f0 = (double)param_2[1];
          (**(code **)(**(longlong **)(param_1 + 0x98) + 0xe0))
                    (*(longlong **)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa8),&local_f8);
        }
      }
    }
  }
  return;
}



// FUNCTION 142053150 FUN_142053150 body=477 status=ok
// SIG undefined FUN_142053150(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142053150(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined1 *local_158 [2];
  undefined1 local_148 [32];
  undefined8 local_128;
  undefined4 local_118;
  double local_108;
  double local_100;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ushort local_34;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  pcVar1 = (char *)(*(longlong *)(param_1 + 0x78) + 0x30);
  LOCK();
  cVar2 = *pcVar1;
  if (cVar2 == '\0') {
    *pcVar1 = '\0';
    cVar2 = '\0';
  }
  UNLOCK();
  if (cVar2 < '\x06') {
    local_178 = param_2;
    cVar2 = FUN_142045c10(*(undefined8 *)(param_1 + 0x78));
    if (cVar2 == '\0') {
      local_128 = 0;
      local_118 = 0;
      local_170 = param_1;
      uStack_168 = param_2;
      puVar3 = (undefined8 *)FUN_140438ef0(0x18,local_148);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &PTR_FUN_143f77c18;
        *(undefined4 *)(puVar3 + 1) = (undefined4)local_170;
        *(undefined4 *)((longlong)puVar3 + 0xc) = local_170._4_4_;
        *(undefined4 *)(puVar3 + 2) = (undefined4)uStack_168;
        *(undefined4 *)((longlong)puVar3 + 0x14) = uStack_168._4_4_;
      }
      local_158[0] = &LAB_14202c780;
      FUN_1420326d0(param_1,local_158);
    }
    else {
      local_34 = 0;
      local_a0 = 0;
      local_90 = 0;
      local_88 = 0;
      local_70 = 0;
      local_60 = 0;
      local_58 = 0;
      local_48 = 0;
      local_a8 = 0x3f800000;
      local_98 = 0x3f80000000000000;
      local_80 = 0x3f800000;
      local_78 = 0x3f800000;
      local_68 = 0x3f80000000000000;
      local_50 = 0x3f800000;
      local_40 = 0x3f80000000000000;
      if ((((byte)*(undefined4 *)(param_1 + 0xa0) & 0x8f) == 10) &&
         (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0xd8))
                            (*(longlong **)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa8),
                             &local_108), cVar2 != '\0')) {
        if (((float)local_178 != (float)local_108) || (local_178._4_4_ != (float)local_100)) {
          local_34 = local_34 | 3;
          local_108 = (double)(float)local_178;
          local_100 = (double)local_178._4_4_;
          (**(code **)(**(longlong **)(param_1 + 0x98) + 0xe0))
                    (*(longlong **)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa8),&local_108);
        }
      }
    }
  }
  return;
}



// FUNCTION 142053330 FUN_142053330 body=1814 status=ok
// SIG undefined FUN_142053330(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_142053330(longlong param_1,longlong param_2,uint *param_3,undefined4 param_4,undefined8 param_5,
             uint param_6,longlong param_7,undefined8 *param_8,longlong *param_9)

{
  longlong *plVar1;
  byte bVar2;
  undefined2 uVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  Matrix3x4<float> *pMVar9;
  Matrix4x4<float> *pMVar10;
  byte *pbVar11;
  longlong lVar12;
  Matrix2x4<float> *pMVar13;
  short sVar14;
  uint uVar15;
  uint uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  undefined *puVar20;
  float *pfVar21;
  undefined1 auStack_268 [32];
  undefined4 local_248;
  uint local_240;
  int local_238;
  undefined1 local_228;
  undefined2 local_227;
  undefined1 local_225;
  longlong local_220;
  undefined8 *local_218;
  undefined4 local_210;
  int local_20c;
  uint *local_208;
  undefined8 local_200;
  longlong local_1f8;
  undefined1 local_1f0 [8];
  longlong local_1e8;
  longlong local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  longlong local_198;
  longlong local_190;
  longlong local_188;
  longlong local_180;
  longlong local_178;
  longlong local_170;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined1 local_148 [12];
  float local_13c;
  Matrix4x4<float> local_128 [32];
  Matrix3x4<float> local_108 [48];
  undefined1 local_d8 [32];
  Matrix4x4<float> local_b8 [64];
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_268;
  local_200 = param_5;
  local_1f8 = param_7;
  local_218 = param_8;
  local_220 = param_1;
  local_208 = param_3;
  iVar6 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x48))
                    (*(longlong **)(param_1 + 0x38),*(undefined4 *)(param_2 + 0x10));
  local_20c = iVar6;
  if (((*param_3 & 0x20) == 0) && (cVar5 = FUN_14204f590(param_2), cVar5 != '\0')) {
    *param_3 = *param_3 | 0x20;
  }
  if ((((byte)*param_3 & 0x28) != 0x28) && (uVar15 = 0, puVar17 = local_218, param_6 != 0)) {
    do {
      bVar2 = *(byte *)(*(longlong *)*puVar17 + 0xf);
      if ((bVar2 & 1) == 0) {
        puVar20 = &DAT_1467ccfd0;
      }
      else {
        puVar20 = (undefined *)
                  (((ulonglong)(byte)(&DAT_1467ccff0)[(ulonglong)(bVar2 & 0xf) * 5] + 1) * 0x10 +
                  *(longlong *)*puVar17);
      }
      (**(code **)(**(longlong **)(local_220 + 0x38) + 0x60))
                (*(longlong **)(local_220 + 0x38),local_148,puVar20);
      cVar5 = Scaleform::Render::Cxform::operator!=(local_148,&DAT_1467ccfd0);
      param_3 = local_208;
      if (cVar5 != '\0') {
        uVar15 = *local_208;
        *local_208 = uVar15 | 8;
        if (local_13c < 1.0) {
          *local_208 = uVar15 | 0x28;
        }
        break;
      }
      uVar15 = uVar15 + 1;
      puVar17 = puVar17 + 2;
    } while (uVar15 < param_6);
  }
  lVar12 = local_220;
  uVar7 = FUN_1420575f0(local_220,param_2,param_3,param_4);
  (**(code **)(**(longlong **)(lVar12 + 0x38) + 0x68))(*(longlong **)(lVar12 + 0x38),*param_3);
  (**(code **)(*param_9 + 0x18))(param_9,uVar7);
  plVar1 = param_9 + 0x201;
  cVar5 = FUN_1432d20f0(iVar6);
  if (cVar5 == '\0') {
    if (4 < iVar6) {
      local_1e8 = *plVar1;
      lVar12 = *(longlong *)(param_2 + 0x20);
      uVar3 = *(undefined2 *)(param_2 + 0x18);
      local_1e0 = param_9[0x202];
      local_1d8 = param_9[0x203];
      if (local_1d8 != 0) {
        LOCK();
        *(int *)(local_1d8 + 8) = *(int *)(local_1d8 + 8) + 1;
        UNLOCK();
      }
      local_1d0 = param_9[0x204];
      local_1c8 = param_9[0x205];
      local_1c0 = param_9[0x206];
      local_1b8 = param_9[0x207];
      local_1b0 = param_9[0x208];
      if (local_1b0 != 0) {
        LOCK();
        *(int *)(local_1b0 + 8) = *(int *)(local_1b0 + 8) + 1;
        UNLOCK();
      }
      local_240 = 0;
      local_248 = CONCAT22(local_248._2_2_,uVar3);
      FUN_14207b5e0(param_9,&local_1e8,0x17,lVar12);
      if (iVar6 - 9U < 2) {
        local_1a8 = *plVar1;
        uVar8 = *(undefined8 *)(param_2 + 0x28);
        uVar3 = *(undefined2 *)(param_2 + 0x1a);
        bVar2 = *(byte *)(lVar12 + 0x45);
        local_1a0 = param_9[0x202];
        local_198 = param_9[0x203];
        if (local_198 != 0) {
          LOCK();
          *(int *)(local_198 + 8) = *(int *)(local_198 + 8) + 1;
          UNLOCK();
        }
        local_190 = param_9[0x204];
        local_188 = param_9[0x205];
        local_180 = param_9[0x206];
        local_178 = param_9[0x207];
        local_170 = param_9[0x208];
        if (local_170 != 0) {
          LOCK();
          *(int *)(local_170 + 8) = *(int *)(local_170 + 8) + 1;
          UNLOCK();
        }
        local_240 = (uint)bVar2;
        local_248 = CONCAT22(local_248._2_2_,uVar3);
        FUN_14207b5e0(param_9,&local_1a8,0x17,uVar8);
      }
    }
  }
  else {
    local_210 = *(undefined4 *)(param_2 + 0x14);
    uVar8 = (**(code **)(**(longlong **)(local_220 + 0x38) + 0x50))
                      (*(longlong **)(local_220 + 0x38),local_1f0,&local_210);
    local_240 = 0;
    local_248 = 0;
    FUN_142050a40(param_9,plVar1,7,uVar8);
  }
  puVar17 = local_218;
  if ((iVar6 == 0xd) && (uVar15 = 0, puVar18 = local_218, param_6 != 0)) {
    do {
      FUN_142055e40(param_9,plVar1,puVar18,uVar15);
      uVar15 = uVar15 + 1;
      puVar18 = puVar18 + 2;
    } while (uVar15 < param_6);
  }
  lVar12 = *(longlong *)(param_9[0x202] + 0x18);
  if ((-1 < *(char *)(lVar12 + 0x49)) && (bVar2 = *(byte *)(lVar12 + 0x4a), bVar2 != 0)) {
    uVar15 = (uint)bVar2;
    goto LAB_142053708;
  }
  lVar12 = *(longlong *)(param_9[0x202] + 0x10);
  if ((*(short *)(lVar12 + 0xf0) < 0) || (sVar14 = *(short *)(lVar12 + 0xf6), sVar14 < 1)) {
    lVar4 = *(longlong *)(param_9[0x205] + 0x18);
    if ((-1 < *(char *)(lVar4 + 0x49)) && (bVar2 = *(byte *)(lVar4 + 0x4a), bVar2 != 0)) {
      uVar15 = (uint)bVar2;
      goto LAB_142053708;
    }
    lVar4 = *(longlong *)(param_9[0x205] + 0x10);
    if ((*(short *)(lVar4 + 0xf0) < 0) || (sVar14 = *(short *)(lVar4 + 0xf6), sVar14 < 1)) {
      uVar15 = 0;
      goto LAB_142053708;
    }
  }
  uVar15 = (int)sVar14 / (int)(uint)*(byte *)(lVar12 + 0xf4);
LAB_142053708:
  uVar19 = 0;
  uVar15 = uVar15 >> 1 & 0x7fff;
  if (param_6 != 0) {
    do {
      lVar12 = puVar17[1];
      bVar2 = *(byte *)(*(longlong *)*puVar17 + 0xf);
      iVar6 = (int)uVar19;
      if ((bVar2 & 0x10) == 0) {
        FUN_1432be720(local_128,lVar12 + 0xb0,
                      ((ulonglong)(byte)(&DAT_1467ccff4)[(ulonglong)(bVar2 & 0xf) * 5] + 1) * 0x10 +
                      *(longlong *)*puVar17,local_1f8 + 0x1e0);
        pMVar10 = local_128;
        local_248 = 8;
      }
      else {
        pMVar9 = (Matrix3x4<float> *)FUN_1432c08b0(puVar17);
        Scaleform::Render::Matrix3x4<float>::MultiplyMatrix
                  (local_108,pMVar9,(Matrix2x4<float> *)(lVar12 + 0xb0));
        pMVar10 = (Matrix4x4<float> *)FUN_1432d6ca0(local_1f8);
        Scaleform::Render::Matrix4x4<float>::MultiplyMatrix(local_b8,pMVar10,local_108);
        pMVar10 = local_b8;
        local_248 = 0x10;
      }
      local_240 = 0;
      local_238 = iVar6;
      FUN_142055c30(param_9,plVar1,0x10,pMVar10);
      if (local_20c == 1) {
        local_227 = 0x8000;
        local_228 = 0;
        local_225 = 0x80;
        pbVar11 = (byte *)(**(code **)(**(longlong **)(local_220 + 0x38) + 0x50))
                                    (*(longlong **)(local_220 + 0x38),&local_200,&local_228);
        local_238 = 0;
        pfVar21 = &local_78;
        uVar8 = 7;
        local_78 = (float)pbVar11[2] * 0.003921569;
        local_74 = (float)pbVar11[1] * 0.003921569;
        local_6c = (float)pbVar11[3] * 0.003921569;
        local_70 = (float)*pbVar11 * 0.003921569;
LAB_14205392f:
        local_240 = 0;
        local_248 = 4;
        FUN_142055c30(param_9,plVar1,uVar8,pfVar21);
      }
      else if ((*local_208 & 8) != 0) {
        bVar2 = *(byte *)(*(longlong *)*puVar17 + 0xf);
        if ((bVar2 & 1) == 0) {
          puVar20 = &DAT_1467ccfd0;
        }
        else {
          puVar20 = (undefined *)
                    (((ulonglong)(byte)(&DAT_1467ccff0)[(ulonglong)(bVar2 & 0xf) * 5] + 1) * 0x10 +
                    *(longlong *)*puVar17);
        }
        lVar12 = (**(code **)(**(longlong **)(local_220 + 0x38) + 0x60))
                           (*(longlong **)(local_220 + 0x38),local_d8,puVar20);
        local_240 = 0;
        local_248 = 4;
        local_238 = iVar6;
        FUN_142055c30(param_9,plVar1,7,lVar12);
        pfVar21 = (float *)(lVar12 + 0x10);
        uVar8 = 6;
        local_238 = iVar6;
        goto LAB_14205392f;
      }
      uVar16 = 0;
      if (uVar15 != 0) {
        puVar18 = local_218 + uVar19 * 2;
        do {
          lVar12 = puVar17[1];
          local_168 = *(undefined4 *)(lVar12 + 0xb0);
          local_164 = *(undefined4 *)(lVar12 + 0xb4);
          local_160 = *(undefined4 *)(lVar12 + 0xb8);
          local_15c = *(undefined4 *)(lVar12 + 0xbc);
          local_158 = *(undefined4 *)(lVar12 + 0xc0);
          local_154 = *(undefined4 *)(lVar12 + 0xc4);
          local_150 = *(undefined4 *)(lVar12 + 200);
          local_14c = *(undefined4 *)(lVar12 + 0xcc);
          pMVar13 = (Matrix2x4<float> *)FUN_1432c08f0(puVar18,uVar16);
          Scaleform::Render::Matrix2x4<float>::Append((Matrix2x4<float> *)&local_168,pMVar13);
          local_240 = uVar16 * 2;
          local_248 = 8;
          local_238 = iVar6;
          FUN_142055c30(param_9,plVar1,0x18,(Matrix2x4<float> *)&local_168);
          uVar16 = uVar16 + 1;
        } while (uVar16 < uVar15);
      }
      uVar19 = (ulonglong)(iVar6 + 1U);
      puVar17 = puVar17 + 2;
    } while (iVar6 + 1U < param_6);
  }
  return plVar1;
}



// FUNCTION 142053a50 FUN_142053a50 body=841 status=ok
// SIG undefined FUN_142053a50(void)

void FUN_142053a50(longlong param_1,longlong *param_2)

{
  wchar_t wVar1;
  int iVar2;
  void *_Src;
  bool bVar3;
  bool bVar4;
  wint_t wVar5;
  wint_t wVar6;
  undefined2 *puVar7;
  wint_t *pwVar8;
  wchar_t *pwVar9;
  undefined2 *puVar10;
  longlong lVar11;
  undefined2 *puVar12;
  undefined2 *local_48;
  ulonglong local_40;
  undefined2 *local_38;
  int local_30;
  
  puVar12 = (undefined2 *)0x0;
  if (2 < (int)param_2[1]) {
    return;
  }
  if ((int)param_2[1] < 1) {
    local_48 = (undefined2 *)0x0;
    local_40 = 4;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    puVar10 = local_48;
    FGenericPlatformString::Memcpy(local_48,&DAT_144f67550,8);
    bVar4 = false;
    bVar3 = true;
    puVar7 = local_48;
  }
  else {
    local_48 = (undefined2 *)0x0;
    iVar2 = *(int *)((undefined8 *)*param_2 + 1);
    _Src = *(void **)*param_2;
    local_40 = CONCAT44(local_40._4_4_,iVar2);
    if (iVar2 == 0) {
      local_40 = 0;
      bVar4 = true;
      bVar3 = false;
      puVar7 = puVar12;
      puVar10 = (undefined2 *)0x0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,iVar2,0);
      puVar7 = local_48;
      _guard_xfg_dispatch_icall_nop(local_48,_Src,(longlong)iVar2 * 2);
      bVar4 = true;
      bVar3 = false;
      puVar10 = local_48;
    }
  }
  local_38 = (undefined2 *)0x0;
  lVar11 = (longlong)(int)local_40;
  local_30 = (int)local_40;
  if ((int)local_40 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,local_40 & 0xffffffff,0);
    puVar12 = local_38;
    _guard_xfg_dispatch_icall_nop(local_38,local_48,lVar11 * 2);
  }
  iVar2 = local_30;
  if ((bVar3) && (puVar10 != (undefined2 *)0x0)) {
    FMemory::Free(puVar10);
  }
  if ((bVar4) && (puVar7 != (undefined2 *)0x0)) {
    FMemory::Free(puVar7);
  }
  if ((int)param_2[1] == 2) {
    if (*(int *)(*param_2 + 0x18) == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = *(wchar_t **)(*param_2 + 0x10);
    }
    _wtoi(pwVar9);
  }
  pwVar8 = &DAT_144f67558;
  puVar7 = &DAT_143f3eda8;
  if (iVar2 != 0) {
    puVar7 = puVar12;
  }
  do {
    wVar5 = *(wint_t *)((longlong)pwVar8 + (longlong)(puVar7 + -0xa27b3aac));
    if ((wVar5 == 0) && (*pwVar8 == 0)) goto LAB_142053d5b;
    if (wVar5 != *pwVar8) {
      wVar5 = towlower(wVar5);
      wVar6 = towlower(*pwVar8);
      if (wVar5 != wVar6) break;
    }
    pwVar8 = pwVar8 + 1;
  } while( true );
  if (wVar5 != wVar6) {
    pwVar9 = L"NoFilterCaching";
    puVar7 = &DAT_143f3eda8;
    if (iVar2 != 0) {
      puVar7 = puVar12;
    }
    do {
      wVar1 = *(wchar_t *)((longlong)pwVar9 + (longlong)(puVar7 + -0xa27b3ab0));
      if ((wVar1 == L'\0') && (*pwVar9 == L'\0')) break;
      if (wVar1 != *pwVar9) {
        wVar5 = towlower(wVar1);
        wVar6 = towlower(*pwVar9);
        if (wVar5 != wVar6) goto LAB_142053c5a;
      }
      pwVar9 = pwVar9 + 1;
    } while( true );
  }
  goto LAB_142053d5b;
LAB_142053c5a:
  if (wVar5 != wVar6) {
    pwVar9 = L"NoBlendCaching";
    puVar7 = &DAT_143f3eda8;
    if (iVar2 != 0) {
      puVar7 = puVar12;
    }
    do {
      wVar1 = *(wchar_t *)((longlong)pwVar9 + (longlong)(puVar7 + -0xa27b3ac0));
      if ((wVar1 == L'\0') && (*pwVar9 == L'\0')) break;
      if (wVar1 != *pwVar9) {
        wVar5 = towlower(wVar1);
        wVar6 = towlower(*pwVar9);
        if (wVar5 != wVar6) goto LAB_142053cb4;
      }
      pwVar9 = pwVar9 + 1;
    } while( true );
  }
  goto LAB_142053d5b;
LAB_142053cb4:
  if (wVar5 != wVar6) {
    pwVar9 = L"NoBatching";
    puVar7 = &DAT_143f3eda8;
    if (iVar2 != 0) {
      puVar7 = puVar12;
    }
    do {
      wVar1 = *(wchar_t *)((longlong)pwVar9 + (longlong)(puVar7 + -0xa27b3ad0));
      if ((wVar1 == L'\0') && (*pwVar9 == L'\0')) break;
      if (wVar1 != *pwVar9) {
        wVar5 = towlower(wVar1);
        wVar6 = towlower(*pwVar9);
        if (wVar5 != wVar6) goto LAB_142053d06;
      }
      pwVar9 = pwVar9 + 1;
    } while( true );
  }
  goto LAB_142053d5b;
LAB_142053d51:
  if (wVar5 != wVar6) goto LAB_142053d68;
  goto LAB_142053d5b;
LAB_142053d06:
  if (wVar5 != wVar6) {
    pwVar9 = L"NoInstancing";
    puVar7 = &DAT_143f3eda8;
    if (iVar2 != 0) {
      puVar7 = puVar12;
    }
    do {
      wVar1 = *(wchar_t *)((longlong)pwVar9 + (longlong)(puVar7 + -0xa27b3adc));
      if ((wVar1 == L'\0') && (*pwVar9 == L'\0')) break;
      if (wVar1 != *pwVar9) {
        wVar5 = towlower(wVar1);
        wVar6 = towlower(*pwVar9);
        if (wVar5 != wVar6) goto LAB_142053d51;
      }
      pwVar9 = pwVar9 + 1;
    } while( true );
  }
LAB_142053d5b:
  (**(code **)(**(longlong **)(param_1 + 0x40) + 0xb8))();
LAB_142053d68:
  if (puVar12 != (undefined2 *)0x0) {
    FMemory::Free(puVar12);
  }
  return;
}



// FUNCTION 142053da0 FUN_142053da0 body=813 status=ok
// SIG undefined FUN_142053da0(void)

void FUN_142053da0(longlong param_1,longlong *param_2)

{
  wchar_t wVar1;
  int iVar2;
  void *_Src;
  bool bVar3;
  bool bVar4;
  wint_t wVar5;
  wint_t wVar6;
  undefined2 *puVar7;
  wchar_t *pwVar8;
  wint_t *pwVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  longlong lVar12;
  undefined2 *local_48;
  ulonglong local_40;
  undefined2 *local_38;
  int local_30;
  
  puVar11 = (undefined2 *)0x0;
  if (1 < (int)param_2[1]) {
    return;
  }
  if ((int)param_2[1] == 1) {
    local_48 = (undefined2 *)0x0;
    iVar2 = *(int *)((undefined8 *)*param_2 + 1);
    _Src = *(void **)*param_2;
    local_40 = CONCAT44(local_40._4_4_,iVar2);
    if (iVar2 == 0) {
      local_40 = 0;
      bVar4 = true;
      bVar3 = false;
      puVar7 = puVar11;
      puVar10 = (undefined2 *)0x0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,iVar2,0);
      puVar7 = local_48;
      _guard_xfg_dispatch_icall_nop(local_48,_Src,(longlong)iVar2 * 2);
      bVar4 = true;
      bVar3 = false;
      puVar10 = local_48;
    }
  }
  else {
    local_48 = (undefined2 *)0x0;
    local_40 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    puVar10 = local_48;
    FGenericPlatformString::Memcpy(local_48,L"None",10);
    bVar4 = false;
    bVar3 = true;
    puVar7 = local_48;
  }
  local_38 = (undefined2 *)0x0;
  lVar12 = (longlong)(int)local_40;
  local_30 = (int)local_40;
  if ((int)local_40 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,local_40 & 0xffffffff,0);
    puVar11 = local_38;
    _guard_xfg_dispatch_icall_nop(local_38,local_48,lVar12 * 2);
  }
  iVar2 = local_30;
  if ((bVar3) && (puVar10 != (undefined2 *)0x0)) {
    FMemory::Free(puVar10);
  }
  if ((bVar4) && (puVar7 != (undefined2 *)0x0)) {
    FMemory::Free(puVar7);
  }
  pwVar8 = L"Overdraw";
  puVar7 = &DAT_143f3eda8;
  if (iVar2 != 0) {
    puVar7 = puVar11;
  }
  do {
    wVar1 = *(wchar_t *)((longlong)pwVar8 + (longlong)(puVar7 + -0xa27b38ac));
    if ((wVar1 == L'\0') && (*pwVar8 == L'\0')) goto LAB_14205408c;
    if (wVar1 != *pwVar8) {
      wVar5 = towlower(wVar1);
      wVar6 = towlower(*pwVar8);
      if (wVar5 != wVar6) break;
    }
    pwVar8 = pwVar8 + 1;
  } while( true );
  if (wVar5 != wVar6) {
    pwVar8 = L"Batch";
    puVar7 = &DAT_143f3eda8;
    if (iVar2 != 0) {
      puVar7 = puVar11;
    }
    do {
      wVar1 = *(wchar_t *)((longlong)pwVar8 + (longlong)(puVar7 + -0xa27b38b8));
      if ((wVar1 == L'\0') && (*pwVar8 == L'\0')) break;
      if (wVar1 != *pwVar8) {
        wVar5 = towlower(wVar1);
        wVar6 = towlower(*pwVar8);
        if (wVar5 != wVar6) goto LAB_142053f8a;
      }
      pwVar8 = pwVar8 + 1;
    } while( true );
  }
  goto LAB_14205408c;
LAB_142053f8a:
  if (wVar5 != wVar6) {
    pwVar8 = L"Blending";
    puVar7 = &DAT_143f3eda8;
    if (iVar2 != 0) {
      puVar7 = puVar11;
    }
    do {
      wVar1 = *(wchar_t *)((longlong)pwVar8 + (longlong)(puVar7 + -0xa27b38c0));
      if ((wVar1 == L'\0') && (*pwVar8 == L'\0')) break;
      if (wVar1 != *pwVar8) {
        wVar5 = towlower(wVar1);
        wVar6 = towlower(*pwVar8);
        if (wVar5 != wVar6) goto LAB_142053fe4;
      }
      pwVar8 = pwVar8 + 1;
    } while( true );
  }
  goto LAB_14205408c;
LAB_142053fe4:
  if (wVar5 != wVar6) {
    pwVar8 = L"TextureDensity";
    puVar7 = &DAT_143f3eda8;
    if (iVar2 != 0) {
      puVar7 = puVar11;
    }
    do {
      wVar1 = *(wchar_t *)((longlong)pwVar8 + (longlong)(puVar7 + -0xa27b38cc));
      if ((wVar1 == L'\0') && (*pwVar8 == L'\0')) break;
      if (wVar1 != *pwVar8) {
        wVar5 = towlower(wVar1);
        wVar6 = towlower(*pwVar8);
        if (wVar5 != wVar6) goto LAB_142054036;
      }
      pwVar8 = pwVar8 + 1;
    } while( true );
  }
  goto LAB_14205408c;
LAB_142054082:
  if (wVar5 != wVar6) goto LAB_142054099;
  goto LAB_14205408c;
LAB_142054036:
  if (wVar5 != wVar6) {
    pwVar9 = &DAT_144f671b8;
    puVar7 = &DAT_143f3eda8;
    if (iVar2 != 0) {
      puVar7 = puVar11;
    }
    do {
      wVar5 = *(wint_t *)((longlong)pwVar9 + (longlong)(puVar7 + -0xa27b38dc));
      if ((wVar5 == 0) && (*pwVar9 == 0)) break;
      if (wVar5 != *pwVar9) {
        wVar5 = towlower(wVar5);
        wVar6 = towlower(*pwVar9);
        if (wVar5 != wVar6) goto LAB_142054082;
      }
      pwVar9 = pwVar9 + 1;
    } while( true );
  }
LAB_14205408c:
  (**(code **)(**(longlong **)(param_1 + 0x40) + 0xb8))();
LAB_142054099:
  if (puVar11 != (undefined2 *)0x0) {
    FMemory::Free(puVar11);
  }
  return;
}



// FUNCTION 1420540d0 FUN_1420540d0 body=363 status=ok
// SIG undefined FUN_1420540d0(void)

void FUN_1420540d0(longlong param_1,longlong *param_2)

{
  wchar_t wVar1;
  void *_Src;
  int iVar2;
  wint_t wVar3;
  wint_t wVar4;
  wchar_t *pwVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  longlong lVar8;
  undefined2 *local_38;
  int local_30;
  
  if ((int)param_2[1] != 1) {
    return;
  }
  _Src = *(void **)*param_2;
  puVar7 = (undefined2 *)0x0;
  local_30 = *(int *)((undefined8 *)*param_2 + 1);
  lVar8 = (longlong)local_30;
  local_38 = (undefined2 *)0x0;
  if (local_30 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,local_30,0);
    puVar7 = local_38;
    _guard_xfg_dispatch_icall_nop(local_38,_Src,lVar8 * 2);
  }
  iVar2 = local_30;
  pwVar5 = L"solid";
  puVar6 = &DAT_143f3eda8;
  if (local_30 != 0) {
    puVar6 = puVar7;
  }
  do {
    wVar1 = *(wchar_t *)((longlong)(puVar6 + -0xa27b3760) + (longlong)pwVar5);
    if ((wVar1 == L'\0') && (*pwVar5 == L'\0')) goto LAB_1420541a0;
    if (wVar1 != *pwVar5) {
      wVar3 = towlower(wVar1);
      wVar4 = towlower(*pwVar5);
      if (wVar3 != wVar4) goto LAB_142054196;
    }
    pwVar5 = pwVar5 + 1;
  } while( true );
LAB_1420541f1:
  if (wVar3 == wVar4) {
LAB_1420541fb:
    *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x200) = 1;
  }
  goto LAB_142054209;
LAB_142054196:
  if (wVar3 != wVar4) {
    pwVar5 = L"wireframe";
    puVar6 = &DAT_143f3eda8;
    if (iVar2 != 0) {
      puVar6 = puVar7;
    }
    do {
      wVar1 = *(wchar_t *)((longlong)(puVar6 + -0xa27b3768) + (longlong)pwVar5);
      if ((wVar1 == L'\0') && (*pwVar5 == L'\0')) goto LAB_1420541fb;
      if (wVar1 != *pwVar5) {
        wVar3 = towlower(wVar1);
        wVar4 = towlower(*pwVar5);
        if (wVar3 != wVar4) goto LAB_1420541f1;
      }
      pwVar5 = pwVar5 + 1;
    } while( true );
  }
LAB_1420541a0:
  *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x200) = 0;
LAB_142054209:
  if (puVar7 != (undefined2 *)0x0) {
    FMemory::Free(puVar7);
  }
  return;
}



// FUNCTION 142054240 FUN_142054240 body=513 status=ok
// SIG undefined FUN_142054240(void)

void FUN_142054240(longlong param_1,longlong *param_2)

{
  wchar_t wVar1;
  wint_t wVar2;
  wint_t wVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  wchar_t *pwVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  
  if ((int)param_2[1] != 2) {
    return;
  }
  puVar8 = &DAT_143f3eda8;
  if (*(int *)(*param_2 + 0x18) == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = *(wchar_t **)(*param_2 + 0x10);
  }
  iVar4 = _wtoi(pwVar7);
  if (*(int *)((undefined8 *)*param_2 + 1) == 0) {
    puVar9 = &DAT_143f3eda8;
  }
  else {
    puVar9 = *(undefined2 **)*param_2;
  }
  pwVar7 = L"DisableFilterScaling";
  do {
    wVar1 = *(wchar_t *)((longlong)(puVar9 + -0xa27b3ccc) + (longlong)pwVar7);
    if ((wVar1 == L'\0') && (*pwVar7 == L'\0')) goto LAB_1420542ea;
    if (wVar1 != *pwVar7) {
      wVar2 = towlower(wVar1);
      wVar3 = towlower(*pwVar7);
      if (wVar2 != wVar3) break;
    }
    pwVar7 = pwVar7 + 1;
  } while( true );
  if (wVar2 == wVar3) {
LAB_1420542ea:
    uVar5 = 0x10000000;
  }
  else {
    if (*(int *)((undefined8 *)*param_2 + 1) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = *(undefined2 **)*param_2;
    }
    pwVar7 = L"tFlipRendering";
    do {
      do {
        pwVar7 = pwVar7 + 1;
        wVar1 = *(wchar_t *)((longlong)(puVar9 + -0xa27b3ce8) + (longlong)pwVar7);
        if ((wVar1 == L'\0') && (*pwVar7 == L'\0')) goto LAB_14205434a;
      } while (wVar1 == *pwVar7);
      wVar2 = towlower(wVar1);
      wVar3 = towlower(*pwVar7);
    } while (wVar2 == wVar3);
    if (wVar2 != wVar3) {
      if (*(int *)((undefined8 *)*param_2 + 1) == 0) {
        puVar9 = &DAT_143f3eda8;
      }
      else {
        puVar9 = *(undefined2 **)*param_2;
      }
      pwVar7 = L"DisableFilters";
      do {
        wVar1 = *(wchar_t *)((longlong)(puVar9 + -0xa27b3cf8) + (longlong)pwVar7);
        if ((wVar1 == L'\0') && (*pwVar7 == L'\0')) goto LAB_1420543aa;
        if (wVar1 != *pwVar7) {
          wVar2 = towlower(wVar1);
          wVar3 = towlower(*pwVar7);
          if (wVar2 != wVar3) goto LAB_1420543a0;
        }
        pwVar7 = pwVar7 + 1;
      } while( true );
    }
LAB_14205434a:
    uVar5 = 0x1000000;
  }
  goto LAB_142054406;
LAB_1420543f7:
  if (wVar2 != wVar3) {
    return;
  }
LAB_142054401:
  uVar5 = 0x400000;
  goto LAB_142054406;
LAB_1420543a0:
  if (wVar2 != wVar3) {
    if (*(int *)((undefined8 *)*param_2 + 1) != 0) {
      puVar8 = *(undefined2 **)*param_2;
    }
    pwVar7 = L"DisableAdvancedBlends";
    do {
      wVar1 = *(wchar_t *)((longlong)(puVar8 + -0xa27b3d08) + (longlong)pwVar7);
      if ((wVar1 == L'\0') && (*pwVar7 == L'\0')) goto LAB_142054401;
      if (wVar1 != *pwVar7) {
        wVar2 = towlower(wVar1);
        wVar3 = towlower(*pwVar7);
        if (wVar2 != wVar3) goto LAB_1420543f7;
      }
      pwVar7 = pwVar7 + 1;
    } while( true );
  }
LAB_1420543aa:
  uVar5 = 0x800000;
LAB_142054406:
  uVar6 = *(uint *)(*(longlong *)(param_1 + 0x40) + 0x54);
  if (iVar4 == 0) {
    uVar6 = uVar6 & ~uVar5;
  }
  else {
    uVar6 = uVar6 | uVar5;
  }
  FUN_1432da4b0(*(longlong *)(param_1 + 0x40),uVar6);
  return;
}



// FUNCTION 142054450 FUN_142054450 body=61 status=ok
// SIG undefined FUN_142054450(void)

void FUN_142054450(longlong *param_1)

{
  longlong lVar1;
  undefined4 local_res10 [6];
  
  lVar1 = FUN_1432d8940();
  if (lVar1 != 0) {
    local_res10[0] = 0;
    (**(code **)(*param_1 + 0x290))(param_1,*(undefined8 *)(lVar1 + 0x20),1,local_res10);
  }
  return;
}



// FUNCTION 142054490 FUN_142054490 body=1568 status=ok
// SIG undefined FUN_142054490(void)

ulonglong FUN_142054490(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  char cVar5;
  DWORD DVar6;
  longlong lVar7;
  int *piVar8;
  undefined8 *puVar9;
  DWORD *pDVar10;
  longlong *plVar11;
  longlong *plVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  bool bVar17;
  int local_res18;
  int iStackX_1c;
  int local_150;
  int local_14c;
  undefined4 local_148;
  undefined4 local_144;
  int local_140;
  int local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  int local_118;
  int local_114;
  undefined4 local_110;
  undefined4 local_10c;
  int local_108;
  int local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  LARGE_INTEGER local_e0;
  LARGE_INTEGER local_d8;
  undefined8 local_d0;
  LARGE_INTEGER local_c8;
  LARGE_INTEGER local_c0;
  longlong local_b8;
  undefined1 local_b0 [8];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 *local_88 [2];
  undefined1 local_78 [32];
  undefined8 local_58;
  undefined4 local_48;
  
  uVar13 = 0;
  LOCK();
  bVar17 = DAT_146accd48 == 0;
  if (bVar17) {
    DAT_146accd48 = 0;
  }
  else {
    uVar13 = (ulonglong)DAT_146accd48;
  }
  UNLOCK();
  if ((bVar17) && (DAT_1468c217e == '\0')) {
    *(undefined8 *)(param_1 + 0x198) = param_2;
    local_res18 = 0;
    iStackX_1c = 0;
    lVar7 = FUN_142039c70();
    iVar14 = 0;
    iVar15 = 0;
    if (lVar7 != 0) {
      cVar5 = FUN_1415ad720(&DAT_1468e2448);
      if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
         (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
        LOCK();
        local_b8 = *(longlong *)(lVar7 + 0x1a0);
        if (local_b8 == 0) {
          *(longlong *)(lVar7 + 0x1a0) = 0;
          local_b8 = 0;
        }
        UNLOCK();
        iVar14 = (int)local_b8;
        iVar15 = (int)((ulonglong)local_b8 >> 0x20);
      }
      else {
        plVar11 = *(longlong **)(lVar7 + 0x198);
        if (plVar11 != (longlong *)0x0) {
          piVar8 = (int *)(**(code **)(*plVar11 + 0x20))(plVar11,local_b0);
          local_res18 = *piVar8;
          iStackX_1c = piVar8[1];
        }
        LOCK();
        *(ulonglong *)(lVar7 + 0x1a0) = CONCAT44(iStackX_1c,local_res18);
        UNLOCK();
        iVar14 = local_res18;
        iVar15 = iStackX_1c;
      }
    }
    iVar16 = 0x20;
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar5 = FUN_1415ad720(&DAT_1468e2448), cVar5 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)))) {
      FBaseGraphTask::GetSmallTaskAllocator();
      QueryPerformanceCounter(&local_d8);
      cVar5 = IsInRenderingThread();
      if (cVar5 != '\0') {
        *(undefined8 *)(param_1 + 0x58) = 0;
        (**(code **)(**(longlong **)(param_1 + 0x40) + 0x18))(*(longlong **)(param_1 + 0x40),0,0);
      }
      QueryPerformanceCounter(&local_e0);
      uVar13 = (ulonglong)(local_e0.s.LowPart - local_d8._0_4_);
      DAT_146ac3af4 = DAT_146ac3af4 + (local_e0.s.LowPart - local_d8._0_4_);
    }
    else {
      pDVar10 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
      plVar11 = TlsGetValue(*pDVar10);
      if (plVar11 == (longlong *)0x0) {
        plVar11 = (longlong *)operator_new(0x18);
        if (plVar11 == (longlong *)0x0) {
          plVar11 = (longlong *)0x0;
        }
        else {
          *plVar11 = 0;
          plVar11[1] = 0;
          *(undefined4 *)(plVar11 + 2) = 0;
        }
        TlsSetValue(*pDVar10,plVar11);
      }
      plVar12 = (longlong *)plVar11[1];
      if (plVar12 == (longlong *)0x0) {
        plVar12 = (longlong *)*plVar11;
        if (plVar12 == (longlong *)0x0) {
          plVar12 = (longlong *)TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar10 + 2);
          plVar11[1] = (longlong)plVar12;
          if (plVar12 == (longlong *)0x0) {
            puVar9 = (undefined8 *)FMemory::Malloc(0x2000,0);
            plVar11[1] = (longlong)puVar9;
            lVar7 = 0x1f;
            do {
              puVar2 = puVar9 + 0x20;
              *puVar9 = puVar2;
              lVar7 = lVar7 + -1;
              puVar9 = puVar2;
            } while (lVar7 != 0);
            *puVar2 = 0;
            plVar12 = (longlong *)plVar11[1];
          }
          *(undefined4 *)(plVar11 + 2) = 0x20;
        }
        else {
          plVar11[1] = (longlong)plVar12;
          *plVar11 = 0;
          *(undefined4 *)(plVar11 + 2) = 0x20;
        }
      }
      else {
        iVar16 = (int)plVar11[2];
      }
      plVar11[1] = *plVar12;
      *(int *)(plVar11 + 2) = iVar16 + -1;
      *(undefined4 *)(plVar12 + 1) = 0xff;
      *plVar12 = (longlong)&PTR_FUN_143f3edd8;
      local_a8 = 0;
      *(undefined4 *)((longlong)plVar12 + 0xc) = 1;
      *plVar12 = (longlong)&PTR_FUN_144f716e0;
      *(undefined1 *)(plVar12 + 3) = 0;
      plVar12[4] = 0;
      plVar12[2] = param_1;
      lVar7 = plVar12[4];
      local_d0 = 0;
      puVar1 = (uint *)(lVar7 + 0x48);
      if (lVar7 != 0) {
        LOCK();
        *puVar1 = *puVar1 + 1;
        UNLOCK();
      }
      uVar13 = FUN_140445100(plVar12,0,0xff,1);
      if (lVar7 != 0) {
        LOCK();
        uVar3 = *puVar1;
        uVar13 = (ulonglong)uVar3;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if (uVar3 == 1) {
          uVar13 = FGraphEvent::Recycle(lVar7);
        }
      }
    }
    if ((0 < iVar14) && (0 < iVar15)) {
      plVar11 = *(longlong **)(param_1 + 0xe0);
      plVar12 = plVar11 + (longlong)*(int *)(param_1 + 0xe8) * 2;
      for (; plVar11 != plVar12; plVar11 = plVar11 + 2) {
        FUN_14203d400(*plVar11,&local_150);
        local_150 = iVar14;
        local_14c = iVar15;
        local_140 = iVar14;
        local_13c = iVar15;
        cVar5 = FWeakObjectPtr::IsValid(*plVar11 + 0x70,0,1);
        if (((cVar5 == '\0') || (lVar7 = FWeakObjectPtr::Get(), lVar7 == 0)) ||
           ((*(byte *)(lVar7 + 0x40) & 2) != 0)) {
          local_128 = 0;
        }
        else {
          local_128 = 0x400;
        }
        local_110 = local_148;
        local_10c = local_144;
        local_100 = local_138;
        local_fc = local_134;
        local_f8 = local_130;
        local_f4 = local_12c;
        local_ec = local_124;
        local_e8 = local_120;
        local_118 = iVar14;
        local_114 = iVar15;
        local_108 = iVar14;
        local_104 = iVar15;
        local_f0 = local_128;
        FUN_142056420(*plVar11,&local_118);
        lVar7 = *plVar11;
        local_58 = 0;
        local_48 = 0;
        puVar9 = (undefined8 *)FUN_140438ef0(0x10,local_78);
        if (puVar9 != (undefined8 *)0x0) {
          *puVar9 = &PTR_FUN_143f77b70;
          puVar9[1] = lVar7;
        }
        local_88[0] = &LAB_14202c430;
        FUN_14204c370(lVar7,local_88);
      }
      lVar7 = 0x1f;
      if ((DAT_146ac3ac5 == '\0') &&
         (((cVar5 = FUN_1415ad720(&DAT_1468e2448), cVar5 != '\0' || (DAT_1468c21ae == '\0')) ||
          (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)))) {
        uVar4 = *(undefined8 *)(param_1 + 0x198);
        FBaseGraphTask::GetSmallTaskAllocator();
        QueryPerformanceCounter(&local_c0);
        cVar5 = IsInRenderingThread();
        if (cVar5 != '\0') {
          *(undefined8 *)(param_1 + 0x58) = uVar4;
          (**(code **)(**(longlong **)(param_1 + 0x40) + 0x18))(*(longlong **)(param_1 + 0x40),0,0);
        }
        QueryPerformanceCounter(&local_c8);
        uVar13 = (ulonglong)(local_c8.s.LowPart - local_c0._0_4_);
        DAT_146ac3af4 = DAT_146ac3af4 + (local_c8.s.LowPart - local_c0._0_4_);
      }
      else {
        pDVar10 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
        plVar11 = TlsGetValue(*pDVar10);
        if (plVar11 == (longlong *)0x0) {
          plVar11 = (longlong *)operator_new(0x18);
          if (plVar11 == (longlong *)0x0) {
            plVar11 = (longlong *)0x0;
          }
          else {
            *plVar11 = 0;
            plVar11[1] = 0;
            *(undefined4 *)(plVar11 + 2) = 0;
          }
          TlsSetValue(*pDVar10,plVar11);
        }
        plVar12 = (longlong *)plVar11[1];
        if (plVar12 == (longlong *)0x0) {
          plVar12 = (longlong *)*plVar11;
          if (plVar12 == (longlong *)0x0) {
            plVar12 = (longlong *)TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar10 + 2);
            plVar11[1] = (longlong)plVar12;
            if (plVar12 == (longlong *)0x0) {
              puVar9 = (undefined8 *)FMemory::Malloc(0x2000,0);
              plVar11[1] = (longlong)puVar9;
              do {
                puVar2 = puVar9 + 0x20;
                *puVar9 = puVar2;
                lVar7 = lVar7 + -1;
                puVar9 = puVar2;
              } while (lVar7 != 0);
              *puVar2 = 0;
              plVar12 = (longlong *)plVar11[1];
            }
            iVar14 = 0x20;
            *(undefined4 *)(plVar11 + 2) = 0x20;
          }
          else {
            iVar14 = 0x20;
            plVar11[1] = (longlong)plVar12;
            *(undefined4 *)(plVar11 + 2) = 0x20;
            *plVar11 = 0;
          }
        }
        else {
          iVar14 = (int)plVar11[2];
        }
        plVar11[1] = *plVar12;
        *(int *)(plVar11 + 2) = iVar14 + -1;
        *(undefined4 *)(plVar12 + 1) = 0xff;
        *plVar12 = (longlong)&PTR_FUN_143f3edd8;
        local_a0 = 0;
        local_98 = 0;
        *(undefined4 *)((longlong)plVar12 + 0xc) = 1;
        *plVar12 = (longlong)&PTR_FUN_144f716f0;
        *(undefined1 *)(plVar12 + 4) = 0;
        plVar12[5] = 0;
        plVar12[3] = *(longlong *)(param_1 + 0x198);
        plVar12[2] = param_1;
        lVar7 = plVar12[5];
        puVar1 = (uint *)(lVar7 + 0x48);
        if (lVar7 != 0) {
          LOCK();
          *puVar1 = *puVar1 + 1;
          UNLOCK();
        }
        uVar13 = FUN_1409421c0(plVar12,0,0xff,1);
        if (lVar7 != 0) {
          LOCK();
          uVar3 = *puVar1;
          uVar13 = (ulonglong)uVar3;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if (uVar3 == 1) {
            uVar13 = FGraphEvent::Recycle(lVar7);
          }
        }
      }
    }
  }
  return uVar13;
}



// FUNCTION 142054ab0 FUN_142054ab0 body=80 status=ok
// SIG undefined FUN_142054ab0(void)

void FUN_142054ab0(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  if ((int)param_2[1] < 2) {
    if ((int)param_2[1] == 1) {
      if (*(int *)((undefined8 *)*param_2 + 1) != 0) {
        iVar1 = _wtoi(*(wchar_t **)*param_2);
        *(int *)(param_1 + 0x60) = iVar1;
        return;
      }
      iVar1 = _wtoi(L"");
      *(int *)(param_1 + 0x60) = iVar1;
      return;
    }
    *(undefined4 *)(param_1 + 0x60) = 1;
  }
  return;
}



// FUNCTION 142054b00 FUN_142054b00 body=423 status=ok
// SIG undefined FUN_142054b00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142054b00(longlong param_1,double param_2)

{
  char *pcVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined1 *local_158 [2];
  undefined1 local_148 [32];
  undefined8 local_128;
  undefined4 local_118;
  undefined1 local_108 [16];
  double local_f8;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ushort local_34;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  pcVar1 = (char *)(*(longlong *)(param_1 + 0x78) + 0x30);
  LOCK();
  cVar2 = *pcVar1;
  if (cVar2 == '\0') {
    *pcVar1 = '\0';
    cVar2 = '\0';
  }
  UNLOCK();
  if (cVar2 < '\x06') {
    cVar2 = FUN_142045c10(*(undefined8 *)(param_1 + 0x78));
    if (cVar2 == '\0') {
      local_128 = 0;
      local_118 = 0;
      local_168 = param_1;
      uStack_160 = SUB84(param_2,0);
      uStack_15c = (int)((ulonglong)param_2 >> 0x20);
      puVar3 = (undefined8 *)FUN_140438ef0(0x18,local_148);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &PTR_FUN_143f77c18;
        *(undefined4 *)(puVar3 + 1) = (undefined4)local_168;
        *(undefined4 *)((longlong)puVar3 + 0xc) = local_168._4_4_;
        *(undefined4 *)(puVar3 + 2) = uStack_160;
        *(undefined4 *)((longlong)puVar3 + 0x14) = uStack_15c;
      }
      local_158[0] = &LAB_14202c4f0;
      FUN_1420326d0(param_1,local_158);
    }
    else {
      local_34 = 0;
      local_a0 = 0;
      local_90 = 0;
      local_88 = 0;
      local_70 = 0;
      local_60 = 0;
      local_58 = 0;
      local_48 = 0;
      local_a8 = 0x3f800000;
      local_98 = 0x3f80000000000000;
      local_80 = 0x3f800000;
      local_78 = 0x3f800000;
      local_68 = 0x3f80000000000000;
      local_50 = 0x3f800000;
      local_40 = 0x3f80000000000000;
      if (((((byte)*(undefined4 *)(param_1 + 0xa0) & 0x8f) == 10) &&
          (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0xd8))
                             (*(longlong **)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa8),
                              local_108), cVar2 != '\0')) && (param_2 != local_f8)) {
        local_34 = local_34 | 4;
        local_f8 = param_2;
        (**(code **)(**(longlong **)(param_1 + 0x98) + 0xe0))
                  (*(longlong **)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa8),local_108);
      }
    }
  }
  return;
}



// FUNCTION 142054cb0 FUN_142054cb0 body=403 status=ok
// SIG undefined FUN_142054cb0(void)

void FUN_142054cb0(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *local_28;
  undefined8 local_20;
  
  *(undefined4 *)(param_1 + 600) = param_2;
  lVar6 = 0;
  local_28 = (longlong *)0x0;
  local_20 = 0;
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x120));
  TArray<TSharedPtr<OculusHMD::FLayer,1>,FDefaultAllocator>::operator=(&local_28,param_1 + 0x110);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x120));
  plVar9 = local_28;
  lVar8 = (longlong)(int)local_20;
  if ((int)local_20 != 0) {
    lVar3 = *local_28;
    cVar5 = FWeakObjectPtr::IsValid(lVar3 + 0x70,0,1);
    if (cVar5 != '\0') {
      lVar6 = FWeakObjectPtr::Get(lVar3 + 0x70);
    }
  }
  if ((((DAT_146b17150 != 0) && (*(longlong *)(DAT_146b17150 + 0x7b0) != 0)) &&
      (*(longlong *)(*(longlong *)(DAT_146b17150 + 0x7b0) + 0xb0) != 0)) && (lVar6 != 0)) {
    plVar10 = plVar9 + lVar8 * 2;
    for (; plVar9 != plVar10; plVar9 = plVar9 + 2) {
      plVar4 = (longlong *)plVar9[1];
      lVar6 = *plVar9;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      cVar5 = FWeakObjectPtr::IsValid(lVar6 + 0x70,0,1);
      if (((cVar5 != '\0') &&
          (plVar7 = (longlong *)FWeakObjectPtr::Get(lVar6 + 0x70), plVar7 != (longlong *)0x0)) &&
         ((*(longlong *)(lVar6 + 0x80) != 0 && (*(longlong *)(lVar6 + 0x78) != 0)))) {
        LOCK();
        cVar5 = *(char *)(lVar6 + 0x30);
        if (cVar5 == '\0') {
          *(char *)(lVar6 + 0x30) = '\0';
          cVar5 = '\0';
        }
        UNLOCK();
        if ('\x04' < cVar5) {
          (**(code **)(*plVar7 + 0x2d0))();
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
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4);
          }
        }
      }
    }
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_28);
  return;
}



// FUNCTION 142054e50 FUN_142054e50 body=518 status=ok
// SIG undefined FUN_142054e50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142054e50(longlong param_1,float *param_2)

{
  char *pcVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  undefined8 uStack_160;
  float local_158;
  undefined4 uStack_154;
  undefined1 *local_148 [2];
  undefined1 local_138 [32];
  undefined8 local_118;
  undefined4 local_108;
  undefined1 local_f8 [24];
  double local_e0;
  double local_d8;
  double local_b0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ushort local_24;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  pcVar1 = (char *)(*(longlong *)(param_1 + 0x78) + 0x30);
  LOCK();
  cVar2 = *pcVar1;
  if (cVar2 == '\0') {
    *pcVar1 = '\0';
    cVar2 = '\0';
  }
  UNLOCK();
  if (cVar2 < '\x06') {
    cVar2 = FUN_142045c10(*(undefined8 *)(param_1 + 0x78));
    if (cVar2 == '\0') {
      uStack_160 = *(undefined8 *)param_2;
      local_158 = param_2[2];
      local_118 = 0;
      local_108 = 0;
      local_168 = param_1;
      puVar3 = (undefined8 *)FUN_140438ef0(0x20,local_138);
      if (puVar3 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar3 + 1) = (undefined4)local_168;
        *(undefined4 *)((longlong)puVar3 + 0xc) = local_168._4_4_;
        *(undefined4 *)(puVar3 + 2) = (undefined4)uStack_160;
        *(undefined4 *)((longlong)puVar3 + 0x14) = uStack_160._4_4_;
        *puVar3 = &PTR_FUN_143f4d0b0;
        puVar3[3] = CONCAT44(uStack_154,local_158);
      }
      local_148[0] = &LAB_14202c190;
      FUN_1420326d0(param_1,local_148);
    }
    else {
      local_24 = 0;
      local_90 = 0;
      local_80 = 0;
      local_78 = 0;
      local_60 = 0;
      local_50 = 0;
      local_48 = 0;
      local_38 = 0;
      local_98 = 0x3f800000;
      local_88 = 0x3f80000000000000;
      local_70 = 0x3f800000;
      local_68 = 0x3f800000;
      local_58 = 0x3f80000000000000;
      local_40 = 0x3f800000;
      local_30 = 0x3f80000000000000;
      if ((((byte)*(undefined4 *)(param_1 + 0xa0) & 0x8f) == 10) &&
         (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0xd8))
                            (*(longlong **)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa8),local_f8
                            ), cVar2 != '\0')) {
        if ((*param_2 != (float)local_e0) ||
           (((float)local_d8 != param_2[1] || ((float)local_b0 != param_2[2])))) {
          local_24 = local_24 | 0x418;
          local_e0 = (double)*param_2;
          local_b0 = (double)param_2[2];
          local_d8 = (double)param_2[1];
          (**(code **)(**(longlong **)(param_1 + 0x98) + 0xe0))
                    (*(longlong **)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa8),local_f8);
        }
      }
    }
  }
  return;
}



// FUNCTION 142055060 FUN_142055060 body=477 status=ok
// SIG undefined FUN_142055060(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142055060(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined1 *local_158 [2];
  undefined1 local_148 [32];
  undefined8 local_128;
  undefined4 local_118;
  undefined1 local_108 [24];
  double local_f0;
  double local_e8;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ushort local_34;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  pcVar1 = (char *)(*(longlong *)(param_1 + 0x78) + 0x30);
  LOCK();
  cVar2 = *pcVar1;
  if (cVar2 == '\0') {
    *pcVar1 = '\0';
    cVar2 = '\0';
  }
  UNLOCK();
  if (cVar2 < '\x06') {
    local_178 = param_2;
    cVar2 = FUN_142045c10(*(undefined8 *)(param_1 + 0x78));
    if (cVar2 == '\0') {
      local_128 = 0;
      local_118 = 0;
      local_170 = param_1;
      uStack_168 = param_2;
      puVar3 = (undefined8 *)FUN_140438ef0(0x18,local_148);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &PTR_FUN_143f77c18;
        *(undefined4 *)(puVar3 + 1) = (undefined4)local_170;
        *(undefined4 *)((longlong)puVar3 + 0xc) = local_170._4_4_;
        *(undefined4 *)(puVar3 + 2) = (undefined4)uStack_168;
        *(undefined4 *)((longlong)puVar3 + 0x14) = uStack_168._4_4_;
      }
      local_158[0] = &LAB_14202bfd0;
      FUN_1420326d0(param_1,local_158);
    }
    else {
      local_34 = 0;
      local_a0 = 0;
      local_90 = 0;
      local_88 = 0;
      local_70 = 0;
      local_60 = 0;
      local_58 = 0;
      local_48 = 0;
      local_a8 = 0x3f800000;
      local_98 = 0x3f80000000000000;
      local_80 = 0x3f800000;
      local_78 = 0x3f800000;
      local_68 = 0x3f80000000000000;
      local_50 = 0x3f800000;
      local_40 = 0x3f80000000000000;
      if ((((byte)*(undefined4 *)(param_1 + 0xa0) & 0x8f) == 10) &&
         (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0xd8))
                            (*(longlong **)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa8),
                             local_108), cVar2 != '\0')) {
        if (((float)local_178 != (float)local_f0) || (local_178._4_4_ != (float)local_e8)) {
          local_34 = local_34 | 0x18;
          local_f0 = (double)(float)local_178;
          local_e8 = (double)local_178._4_4_;
          (**(code **)(**(longlong **)(param_1 + 0x98) + 0xe0))
                    (*(longlong **)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa8),local_108);
        }
      }
    }
  }
  return;
}



// FUNCTION 142055240 FUN_142055240 body=299 status=ok
// SIG undefined FUN_142055240(void)

void FUN_142055240(longlong param_1,byte param_2)

{
  char *pcVar1;
  char cVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong *local_58;
  uint local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 local_20;
  byte local_18;
  
  pcVar1 = (char *)(*(longlong *)(param_1 + 0x78) + 0x30);
  LOCK();
  cVar2 = *pcVar1;
  if (cVar2 == '\0') {
    *pcVar1 = '\0';
    cVar2 = '\0';
  }
  UNLOCK();
  if (cVar2 < '\x06') {
    local_50 = *(uint *)(param_1 + 0xa0);
    local_48 = *(undefined8 *)(param_1 + 0xa8);
    local_40 = *(undefined8 *)(param_1 + 0xb0);
    local_68 = 0xffffffffffffffff;
    uStack_60 = 0xffffffffffffffff;
    local_58 = (longlong *)0x0;
    if ((local_50 >> 6 & 1) != 0) {
      local_58 = *(longlong **)(param_1 + 0x98);
      (**(code **)(*local_58 + 8))(local_58,&local_68);
    }
    lVar4 = 2;
    local_18 = param_2 ^ 1;
    local_38 = 0xffffffffffffffff;
    uStack_30 = 0xffffffffffffffff;
    local_28 = 0;
    local_20 = 2;
    FUN_14202cf40(*(undefined8 *)(param_1 + 0x78),PTR_s_scaleform_gfx_TextFieldEx_1464f0630,
                  PTR_s_setNoTranslate_1464f0640,0,&local_68,2);
    puVar3 = &stack0xfffffffffffffff8;
    do {
      lVar4 = lVar4 + -1;
      if ((*(uint *)(puVar3 + -0x18) >> 6 & 1) != 0) {
        (**(code **)(**(longlong **)(puVar3 + -0x20) + 0x10))
                  (*(longlong **)(puVar3 + -0x20),puVar3 + -0x30,*(undefined8 *)(puVar3 + -0x10));
        *(undefined8 *)(puVar3 + -0x20) = 0;
      }
      *(undefined4 *)(puVar3 + -0x18) = 0;
      puVar3 = puVar3 + -0x30;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 142055370 FUN_142055370 body=161 status=ok
// SIG undefined FUN_142055370(void)

ulonglong FUN_142055370(longlong param_1,char param_2)

{
  byte bVar1;
  int3 iVar2;
  char cVar3;
  uint uVar4;
  int7 iVar6;
  ulonglong uVar5;
  bool bVar7;
  
  uVar4 = (int)param_2 - 1;
  uVar5 = (ulonglong)uVar4;
  if (uVar4 < 9) {
    iVar2 = (int3)(uVar4 >> 8);
    iVar6 = (int7)iVar2;
    switch(uVar4) {
    case 0:
      LOCK();
      bVar7 = *(char *)(param_1 + 0x30) == '\0';
      if (bVar7) {
        *(char *)(param_1 + 0x30) = param_2;
      }
      UNLOCK();
      return (ulonglong)bVar7;
    case 1:
      LOCK();
      bVar7 = *(char *)(param_1 + 0x30) == '\x01';
      if (bVar7) {
        *(char *)(param_1 + 0x30) = param_2;
      }
      UNLOCK();
      return CONCAT71((int7)iVar2,bVar7);
    case 2:
      LOCK();
      bVar7 = *(char *)(param_1 + 0x30) == '\x02';
      if (bVar7) {
        *(char *)(param_1 + 0x30) = param_2;
      }
      UNLOCK();
      return CONCAT71((int7)iVar2,bVar7);
    case 3:
      LOCK();
      bVar7 = *(char *)(param_1 + 0x30) == '\x03';
      if (bVar7) {
        *(char *)(param_1 + 0x30) = param_2;
      }
      UNLOCK();
      return CONCAT71((int7)iVar2,bVar7);
    case 4:
      LOCK();
      bVar7 = *(char *)(param_1 + 0x30) == '\x04';
      if (bVar7) {
        *(char *)(param_1 + 0x30) = param_2;
      }
      UNLOCK();
      return CONCAT71(iVar6,bVar7);
    case 5:
      uVar5 = 0;
      LOCK();
      bVar1 = *(byte *)(param_1 + 0x30);
      if (bVar1 == 0) {
        *(byte *)(param_1 + 0x30) = 0;
      }
      else {
        uVar5 = (ulonglong)bVar1;
      }
      UNLOCK();
      cVar3 = (char)uVar5;
      break;
    case 6:
      LOCK();
      bVar7 = *(char *)(param_1 + 0x30) == '\x06';
      if (bVar7) {
        *(char *)(param_1 + 0x30) = param_2;
      }
      UNLOCK();
      return CONCAT71(iVar6,bVar7);
    case 7:
      LOCK();
      bVar7 = *(char *)(param_1 + 0x30) == '\a';
      if (bVar7) {
        *(char *)(param_1 + 0x30) = param_2;
      }
      UNLOCK();
      return CONCAT71(iVar6,bVar7);
    case 8:
      LOCK();
      bVar7 = *(char *)(param_1 + 0x30) == '\b';
      if (bVar7) {
        *(char *)(param_1 + 0x30) = param_2;
      }
      UNLOCK();
      return CONCAT71(iVar6,bVar7);
    }
    while (cVar3 < '\x06') {
      LOCK();
      bVar7 = (char)uVar5 == *(char *)(param_1 + 0x30);
      if (bVar7) {
        *(char *)(param_1 + 0x30) = param_2;
      }
      UNLOCK();
      if (bVar7) {
        return 1;
      }
      uVar5 = 0;
      LOCK();
      bVar1 = *(byte *)(param_1 + 0x30);
      if (bVar1 == 0) {
        *(byte *)(param_1 + 0x30) = 0;
      }
      else {
        uVar5 = (ulonglong)bVar1;
      }
      UNLOCK();
      cVar3 = (char)uVar5;
    }
  }
  return uVar5 & 0xffffffffffffff00;
}



// FUNCTION 142055440 FUN_142055440 body=759 status=ok
// SIG undefined FUN_142055440(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142055440(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_1e8 [32];
  longlong local_1c8;
  longlong *plStack_1c0;
  longlong local_1b8;
  ulonglong local_1b0;
  undefined8 local_1a8;
  longlong *local_1a0;
  longlong local_198;
  longlong *plStack_190;
  undefined1 local_188 [16];
  undefined1 local_178 [256];
  longlong local_78;
  short *local_70;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  TStringConversion<TStringConvert<char,wchar_t>,128>::
  TStringConversion<TStringConvert<char,wchar_t>,128>(local_178);
  lVar4 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  lVar8 = -1;
  if ((local_70 != (short *)0x0) && (*local_70 != 0)) {
    do {
      lVar8 = lVar8 + 1;
    } while (local_70[lVar8] != 0);
    uVar7 = (int)lVar8 + 1;
    local_1b0 = (ulonglong)uVar7;
    if (0 < (int)uVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b8,0);
    }
    FGenericPlatformString::Memcpy(local_1b8,local_70,(longlong)(int)uVar7 * 2);
  }
  if (local_78 != 0) {
    FMemory::Free();
  }
  FUN_1420390f0(param_1,&local_1c8,&local_1b8);
  plVar9 = plStack_1c0;
  if (local_1c8 == 0) {
    lVar8 = FMemory::Malloc(0x108);
    if (lVar8 != 0) {
      uVar3 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_188);
      lVar4 = FUN_142019690(lVar8,uVar3,&local_1b8);
    }
    plVar5 = (longlong *)operator_new(0x18);
    plVar9 = (longlong *)0x0;
    if (plVar5 != (longlong *)0x0) {
      *(undefined4 *)(plVar5 + 1) = 1;
      *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
      *plVar5 = (longlong)&PTR_FUN_143f3f2d0;
      plVar5[2] = lVar4;
      plVar9 = plVar5;
    }
    plVar5 = (longlong *)(lVar4 + 8);
    if (lVar4 == 0) {
      plVar5 = (longlong *)0x0;
    }
    local_1a0 = plVar9;
    if (plVar5 != (longlong *)0x0) {
      if ((*plVar5 != 0) && (plVar5[1] != 0)) {
        piVar1 = (int *)(plVar5[1] + 8);
        LOCK();
        iVar2 = *piVar1;
        if (iVar2 == 0) {
          *piVar1 = 0;
          iVar2 = 0;
        }
        UNLOCK();
        if (0 < iVar2) goto LAB_142055615;
      }
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
      }
      *plVar5 = lVar4;
      plVar6 = (longlong *)plVar5[1];
      if (plVar9 != plVar6) {
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
          UNLOCK();
          plVar6 = (longlong *)plVar5[1];
        }
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
          }
        }
        plVar5[1] = (longlong)plVar9;
      }
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar9 + 1;
        lVar8 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
    }
LAB_142055615:
    local_1a8 = 0;
    local_1c8 = lVar4;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_1c0,&local_1a0);
    plVar9 = local_1a0;
    if (local_1a0 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_1a0 + 1;
      lVar8 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_1a0)(local_1a0);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_1a0 + 8))(local_1a0,1);
        }
      }
    }
    plVar9 = plStack_1c0;
    local_198 = local_1c8;
    plStack_190 = plStack_1c0;
    if (plStack_1c0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_1c0 + 1) = (int)plStack_1c0[1] + 1;
      UNLOCK();
    }
    FUN_14202bd00(param_1,&local_198);
    if (local_1c8 == 0) goto LAB_1420556d0;
  }
  if ((*(uint *)(local_1c8 + 0xa0) & 0x8f) - 8 < 4) {
    FUN_1420523e0(local_1c8,param_3,param_4);
  }
LAB_1420556d0:
  plVar5 = plStack_1c0;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar9 + 1;
    lVar8 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_1c0)(plStack_1c0);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_1c0 + 8))(plStack_1c0,1);
      }
    }
  }
  if (local_1b8 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142055740 FUN_142055740 body=29 status=ok
// SIG undefined FUN_142055740(void)

void FUN_142055740(longlong param_1)

{
  char *pcVar1;
  char cVar2;
  
  pcVar1 = (char *)(*(longlong *)(param_1 + 0x78) + 0x30);
  LOCK();
  cVar2 = *pcVar1;
  if (cVar2 == '\0') {
    *pcVar1 = '\0';
    cVar2 = '\0';
  }
  UNLOCK();
  if ('\x05' < cVar2) {
    return;
  }
  FUN_142055440(*(undefined8 *)(param_1 + 0x78));
  return;
}



// FUNCTION 142055760 FUN_142055760 body=464 status=ok
// SIG undefined FUN_142055760(void)

undefined4 FUN_142055760(longlong param_1,undefined8 *param_2,char param_3)

{
  char *pcVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  longlong *plVar11;
  undefined1 local_68 [8];
  longlong *local_60;
  code *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  puVar10 = &DAT_143f3eda8;
  if (param_3 == '\0') {
    if (*(int *)(param_2 + 1) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (undefined2 *)*param_2;
    }
    if (*(int *)(param_1 + 0x40) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = *(undefined2 **)(param_1 + 0x38);
    }
    iVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8,puVar9);
    if (iVar6 == 0) {
      return 0;
    }
  }
  FString::operator=(param_1 + 0x58,param_2);
  FString::operator=(param_1 + 0x48,param_2);
  pcVar1 = (char *)(*(longlong *)(param_1 + 0x78) + 0x30);
  LOCK();
  cVar5 = *pcVar1;
  if (cVar5 == '\0') {
    *pcVar1 = '\0';
    cVar5 = '\0';
  }
  UNLOCK();
  if (cVar5 < '\x06') {
    cVar5 = FUN_142045c10(*(undefined8 *)(param_1 + 0x78));
    if (cVar5 == '\0') {
      puVar7 = (undefined8 *)
               TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_68);
      plVar11 = (longlong *)puVar7[1];
      uVar3 = *puVar7;
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
        UNLOCK();
      }
      local_28 = 0;
      local_18 = 0;
      puVar7 = (undefined8 *)FUN_140438ef0(0x20,local_48);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = &PTR_FUN_144f71ab0;
        puVar7[1] = param_1;
        puVar7[2] = uVar3;
        puVar7[3] = plVar11;
        plVar11 = (longlong *)0x0;
      }
      local_58[0] = FUN_14202c9c0;
      FUN_14204c6c0(param_1,local_58);
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
        }
      }
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_60 + 1;
        lVar4 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar2 = (int *)((longlong)local_60 + 0xc);
          iVar6 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*local_60 + 8))(local_60,1);
          }
        }
      }
    }
    else if (((byte)*(undefined4 *)(param_1 + 0xa0) & 0x8f) == 10) {
      FString::operator=(param_1 + 0x38,param_1 + 0x48);
      if (*(int *)(param_1 + 0x40) != 0) {
        puVar10 = *(undefined2 **)(param_1 + 0x38);
      }
      (**(code **)(**(longlong **)(param_1 + 0x98) + 0x128))
                (*(longlong **)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa8),puVar10,0);
    }
  }
  return 1;
}



// FUNCTION 142055930 FUN_142055930 body=461 status=ok
// SIG undefined FUN_142055930(void)

undefined4 FUN_142055930(longlong param_1,undefined8 param_2,undefined8 *param_3,char param_4)

{
  char *pcVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  longlong *plVar11;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  puVar10 = &DAT_143f3eda8;
  if (param_4 == '\0') {
    if (*(int *)(param_3 + 1) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (undefined2 *)*param_3;
    }
    if (*(int *)(param_1 + 0x40) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = *(undefined2 **)(param_1 + 0x38);
    }
    iVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8,puVar9);
    if (iVar6 == 0) {
      return 0;
    }
  }
  FString::operator=(param_1 + 0x58,param_2);
  FString::operator=(param_1 + 0x48,param_3);
  pcVar1 = (char *)(*(longlong *)(param_1 + 0x78) + 0x30);
  LOCK();
  cVar5 = *pcVar1;
  if (cVar5 == '\0') {
    *pcVar1 = '\0';
    cVar5 = '\0';
  }
  UNLOCK();
  if (cVar5 < '\x06') {
    cVar5 = FUN_142045c10(*(undefined8 *)(param_1 + 0x78));
    if (cVar5 == '\0') {
      puVar7 = (undefined8 *)
               TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_68);
      plVar11 = (longlong *)puVar7[1];
      uVar3 = *puVar7;
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
        UNLOCK();
      }
      local_28 = 0;
      local_18 = 0;
      puVar7 = (undefined8 *)FUN_140438ef0(0x20,local_48);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = &PTR_FUN_144f71ab0;
        puVar7[1] = param_1;
        puVar7[2] = uVar3;
        puVar7[3] = plVar11;
        plVar11 = (longlong *)0x0;
      }
      local_58[0] = &LAB_14202c9b0;
      FUN_14204c6c0(param_1,local_58);
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
        }
      }
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_60 + 1;
        lVar4 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar2 = (int *)((longlong)local_60 + 0xc);
          iVar6 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*local_60 + 8))(local_60,1);
          }
        }
      }
    }
    else if (((byte)*(undefined4 *)(param_1 + 0xa0) & 0x8f) == 10) {
      FString::operator=(param_1 + 0x38,param_1 + 0x48);
      if (*(int *)(param_1 + 0x40) != 0) {
        puVar10 = *(undefined2 **)(param_1 + 0x38);
      }
      (**(code **)(**(longlong **)(param_1 + 0x98) + 0x128))
                (*(longlong **)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa8),puVar10,1);
    }
  }
  return 1;
}



// FUNCTION 142055b00 FUN_142055b00 body=156 status=ok
// SIG undefined FUN_142055b00(void)

void FUN_142055b00(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  wchar_t *_Str;
  bool bVar2;
  double dVar3;
  undefined4 uVar4;
  
  if ((int)param_2[1] == 1) {
    if (*(int *)((undefined8 *)*param_2 + 1) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)*param_2;
    }
    dVar3 = wcstod(_Str,(wchar_t **)0x0);
    uVar4 = SUB84(dVar3,0);
    if (dVar3 <= 0.0) {
      uVar4 = 0;
    }
    FUN_14207ba70(&PTR_PTR_1464f05c0,uVar4);
    if (DAT_146acd048 == '\0') {
      LOCK();
      DAT_146accf28 = (uint)(*DAT_146accf68 != 0);
      UNLOCK();
      DAT_146acd048 = '\x01';
    }
    LOCK();
    bVar2 = DAT_146accf28 == 0;
    if (bVar2) {
      DAT_146accf28 = 0;
    }
    UNLOCK();
    if ((!bVar2) && (cVar1 = FUN_142059d40(), cVar1 != '\0')) {
      FUN_14207ba70(DAT_146accf38,uVar4);
    }
  }
  return;
}



// FUNCTION 142055ba0 FUN_142055ba0 body=72 status=ok
// SIG undefined FUN_142055ba0(void)

void FUN_142055ba0(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x70,0,1);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x70);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x2c0))(plVar2,param_2);
    }
  }
  return;
}



// FUNCTION 142055bf0 FUN_142055bf0 body=62 status=ok
// SIG undefined FUN_142055bf0(void)

void FUN_142055bf0(longlong param_1)

{
  if ((*(uint *)(param_1 + 0x18) >> 6 & 1) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))
              (*(longlong **)(param_1 + 0x10),param_1,*(undefined8 *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}



// FUNCTION 142055c30 FUN_142055c30 body=231 status=ok
// SIG undefined FUN_142055c30(void)

void FUN_142055c30(longlong *param_1,longlong param_2,ulonglong param_3,undefined8 param_4,
                  undefined4 param_5,int param_6,int param_7)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = (param_3 & 0xffffffff) * 3;
  lVar2 = *(longlong *)(*(longlong *)(param_2 + 8) + 0x18);
  cVar1 = *(char *)(lVar2 + 1 + lVar3);
  if (cVar1 < '\0') {
    lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x20) + 0x18);
    cVar1 = *(char *)(lVar2 + 1 + lVar3);
    if (-1 < cVar1) {
      param_3 = (ulonglong)(uint)(int)*(char *)(lVar2 + lVar3);
      param_6 = (int)cVar1 +
                param_6 + (uint)*(byte *)(*(longlong *)(*(longlong *)(param_2 + 0x20) + 0x10) + 9 +
                                         param_3 * 10) * param_7;
      param_7 = 0;
    }
  }
  else {
    param_3 = (ulonglong)(uint)(int)*(char *)(lVar2 + lVar3);
    param_6 = (int)cVar1 +
              (uint)*(byte *)(*(longlong *)(*(longlong *)(param_2 + 8) + 0x10) + 9 + param_3 * 10) *
              param_7 + param_6;
    param_7 = 0;
  }
  (**(code **)(*param_1 + 0x10))(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



// FUNCTION 142055d20 FUN_142055d20 body=61 status=ok
// SIG undefined FUN_142055d20(void)

void FUN_142055d20(undefined8 param_1,longlong *param_2)

{
  if ((int)param_2[1] == 1) {
    if (*(int *)((undefined8 *)*param_2 + 1) != 0) {
      DAT_146acc719 = FToBoolHelper::FromCStringWide(*(undefined8 *)*param_2);
      return;
    }
    DAT_146acc719 = FToBoolHelper::FromCStringWide(&DAT_143f3eda8);
  }
  return;
}



// FUNCTION 142055d60 FUN_142055d60 body=209 status=ok
// SIG undefined FUN_142055d60(void)

void FUN_142055d60(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  pcVar1 = (char *)(*(longlong *)(param_1 + 0x78) + 0x30);
  LOCK();
  cVar2 = *pcVar1;
  if (cVar2 == '\0') {
    *pcVar1 = '\0';
    cVar2 = '\0';
  }
  UNLOCK();
  if (cVar2 < '\x06') {
    cVar2 = FUN_142045c10(*(undefined8 *)(param_1 + 0x78));
    if (cVar2 == '\0') {
      local_28 = 0;
      local_18 = 0;
      puVar3 = (undefined8 *)FUN_140438ef0(0x18,local_48);
      if (puVar3 != (undefined8 *)0x0) {
        local_68 = (undefined4)param_1;
        uStack_64 = (undefined4)((ulonglong)param_1 >> 0x20);
        uStack_60 = (undefined4)param_2;
        uStack_5c = (undefined4)((ulonglong)param_2 >> 0x20);
        *puVar3 = &PTR_FUN_143f77c18;
        *(undefined4 *)(puVar3 + 1) = local_68;
        *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_64;
        *(undefined4 *)(puVar3 + 2) = uStack_60;
        *(undefined4 *)((longlong)puVar3 + 0x14) = uStack_5c;
      }
      local_58[0] = &LAB_14202c3f0;
      FUN_1420326d0(param_1,local_58);
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0x98) + 0x160))
                (*(longlong **)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa8),param_2,
                 ((byte)*(undefined4 *)(param_1 + 0xa0) & 0x8f) == 10);
    }
  }
  return;
}



// FUNCTION 142055e40 FUN_142055e40 body=663 status=ok
// SIG undefined FUN_142055e40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142055e40(longlong *param_1,longlong param_2,undefined8 *param_3,int param_4)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  float *pfVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  undefined1 auStack_b8 [32];
  uint local_98;
  int local_90;
  int local_88;
  int local_78;
  byte *local_70;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  bVar1 = *(byte *)(*(longlong *)*param_3 + 0xf);
  if ((bVar1 & 8) == 0) {
    pfVar10 = (float *)0x0;
  }
  else {
    pfVar10 = (float *)(((ulonglong)(byte)(&DAT_1467ccff3)[(ulonglong)(bVar1 & 0xf) * 5] + 1) * 0x10
                       + *(longlong *)*param_3);
  }
  uVar12 = 0;
  lVar11 = 0;
  lVar9 = 0;
  local_70 = &DAT_144f731a8;
  local_78 = param_4;
  do {
    iVar13 = (int)uVar12;
    if ((*local_70 & 1) == 0) {
      lVar4 = *(longlong *)(*(longlong *)(param_2 + 8) + 0x18);
      lVar5 = *(longlong *)(*(longlong *)(param_2 + 8) + 0x10);
      cVar2 = *(char *)(lVar4 + lVar11);
      if (cVar2 < '\x1c') {
        local_98 = (uint)*(byte *)(lVar5 + 4 + (longlong)cVar2 * 10) *
                   (uint)*(byte *)(lVar4 + 2 + lVar11);
      }
      else if (*(short *)(lVar5 + lVar9) < 0) {
        lVar7 = *(longlong *)(*(longlong *)(param_2 + 0x20) + 0x18);
        lVar6 = *(longlong *)(*(longlong *)(param_2 + 0x20) + 0x10);
        cVar3 = *(char *)(lVar7 + lVar11);
        if (cVar3 < '\x1c') {
          local_98 = (uint)*(byte *)(lVar6 + 4 + (longlong)cVar3 * 10) *
                     (uint)*(byte *)(lVar7 + 2 + lVar11);
        }
        else {
          if (*(short *)(lVar6 + lVar9) < 0) goto LAB_14205608a;
          local_98 = (uint)*(short *)(lVar6 + 6 + lVar9);
        }
      }
      else {
        local_98 = (uint)*(short *)(lVar5 + 6 + lVar9);
      }
      uVar8 = (ulonglong)local_98;
      if (local_98 != 0) {
        if ((((*local_70 & 2) == 0) || (4 < local_98)) || (lVar7 = param_1[7], lVar7 == 0)) {
          cVar3 = *(char *)(lVar4 + 1 + lVar11);
          if (cVar3 < '\0') {
            lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x20) + 0x18);
            cVar2 = *(char *)(lVar4 + 1 + lVar11);
            if (cVar2 < '\0') {
              local_88 = local_78;
              local_90 = 0;
            }
            else {
              uVar12 = (ulonglong)(uint)(int)*(char *)(lVar4 + lVar11);
              local_88 = 0;
              local_90 = (uint)*(byte *)(*(longlong *)(*(longlong *)(param_2 + 0x20) + 0x10) + 9 +
                                        uVar12 * 10) * local_78 + (int)cVar2;
            }
          }
          else {
            uVar12 = (ulonglong)(uint)(int)cVar2;
            local_88 = 0;
            local_90 = (uint)*(byte *)(lVar5 + 9 + uVar12 * 10) * local_78 + (int)cVar3;
          }
          (**(code **)(*param_1 + 0x10))(param_1,param_2,uVar12,pfVar10);
        }
        else {
          local_90 = 0;
          local_68 = *pfVar10 / (float)*(uint *)(lVar7 + 0x38);
          local_64 = pfVar10[1] / (float)*(uint *)(lVar7 + 0x3c);
          local_60 = pfVar10[2];
          local_5c = pfVar10[3];
          local_88 = local_78;
          FUN_142055c30(param_1,param_2,uVar12,&local_68);
        }
        pfVar10 = pfVar10 + uVar8;
      }
    }
LAB_14205608a:
    local_70 = local_70 + 1;
    uVar14 = iVar13 + 1;
    uVar12 = (ulonglong)uVar14;
    lVar9 = lVar9 + 10;
    lVar11 = lVar11 + 3;
    if (0x1b < (int)uVar14) {
      return;
    }
  } while( true );
}



// FUNCTION 1420560e0 FUN_1420560e0 body=324 status=ok
// SIG undefined FUN_1420560e0(void)

void FUN_1420560e0(longlong param_1,longlong param_2)

{
  char *pcVar1;
  char cVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong *local_58;
  uint local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  uint local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  pcVar1 = (char *)(*(longlong *)(param_1 + 0x78) + 0x30);
  LOCK();
  cVar2 = *pcVar1;
  if (cVar2 == '\0') {
    *pcVar1 = '\0';
    cVar2 = '\0';
  }
  UNLOCK();
  if (cVar2 < '\x06') {
    local_50 = *(uint *)(param_1 + 0xa0);
    local_48 = *(undefined8 *)(param_1 + 0xa8);
    local_40 = *(undefined8 *)(param_1 + 0xb0);
    local_68 = 0xffffffffffffffff;
    uStack_60 = 0xffffffffffffffff;
    local_58 = (longlong *)0x0;
    if ((local_50 >> 6 & 1) != 0) {
      local_58 = *(longlong **)(param_1 + 0x98);
      (**(code **)(*local_58 + 8))(local_58,&local_68);
    }
    local_20 = *(uint *)(param_2 + 0x18);
    local_18 = *(undefined8 *)(param_2 + 0x20);
    local_10 = *(undefined8 *)(param_2 + 0x28);
    local_38 = 0xffffffffffffffff;
    uStack_30 = 0xffffffffffffffff;
    local_28 = (longlong *)0x0;
    if ((local_20 >> 6 & 1) != 0) {
      local_28 = *(longlong **)(param_2 + 0x10);
      (**(code **)(*local_28 + 8))(local_28,&local_38);
    }
    lVar4 = 2;
    FUN_14202cf40(*(undefined8 *)(param_1 + 0x78),PTR_s_scaleform_gfx_TextFieldEx_1464f0630,
                  PTR_s_setVerticalAlign_1464f0648,0,&local_68,2);
    puVar3 = &stack0xfffffffffffffff8;
    do {
      lVar4 = lVar4 + -1;
      if ((*(uint *)(puVar3 + -0x18) >> 6 & 1) != 0) {
        (**(code **)(**(longlong **)(puVar3 + -0x20) + 0x10))
                  (*(longlong **)(puVar3 + -0x20),puVar3 + -0x30,*(undefined8 *)(puVar3 + -0x10));
        *(undefined8 *)(puVar3 + -0x20) = 0;
      }
      *(undefined4 *)(puVar3 + -0x18) = 0;
      puVar3 = puVar3 + -0x30;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 142056230 FUN_142056230 body=324 status=ok
// SIG undefined FUN_142056230(void)

void FUN_142056230(longlong param_1,longlong param_2)

{
  char *pcVar1;
  char cVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong *local_58;
  uint local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  uint local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  pcVar1 = (char *)(*(longlong *)(param_1 + 0x78) + 0x30);
  LOCK();
  cVar2 = *pcVar1;
  if (cVar2 == '\0') {
    *pcVar1 = '\0';
    cVar2 = '\0';
  }
  UNLOCK();
  if (cVar2 < '\x06') {
    local_50 = *(uint *)(param_1 + 0xa0);
    local_48 = *(undefined8 *)(param_1 + 0xa8);
    local_40 = *(undefined8 *)(param_1 + 0xb0);
    local_68 = 0xffffffffffffffff;
    uStack_60 = 0xffffffffffffffff;
    local_58 = (longlong *)0x0;
    if ((local_50 >> 6 & 1) != 0) {
      local_58 = *(longlong **)(param_1 + 0x98);
      (**(code **)(*local_58 + 8))(local_58,&local_68);
    }
    local_20 = *(uint *)(param_2 + 0x18);
    local_18 = *(undefined8 *)(param_2 + 0x20);
    local_10 = *(undefined8 *)(param_2 + 0x28);
    local_38 = 0xffffffffffffffff;
    uStack_30 = 0xffffffffffffffff;
    local_28 = (longlong *)0x0;
    if ((local_20 >> 6 & 1) != 0) {
      local_28 = *(longlong **)(param_2 + 0x10);
      (**(code **)(*local_28 + 8))(local_28,&local_38);
    }
    lVar4 = 2;
    FUN_14202cf40(*(undefined8 *)(param_1 + 0x78),PTR_s_scaleform_gfx_TextFieldEx_1464f0630,
                  PTR_s_setVerticalAutoSize_1464f0658,0,&local_68,2);
    puVar3 = &stack0xfffffffffffffff8;
    do {
      lVar4 = lVar4 + -1;
      if ((*(uint *)(puVar3 + -0x18) >> 6 & 1) != 0) {
        (**(code **)(**(longlong **)(puVar3 + -0x20) + 0x10))
                  (*(longlong **)(puVar3 + -0x20),puVar3 + -0x30,*(undefined8 *)(puVar3 + -0x10));
        *(undefined8 *)(puVar3 + -0x20) = 0;
      }
      *(undefined4 *)(puVar3 + -0x18) = 0;
      puVar3 = puVar3 + -0x30;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 142056380 FUN_142056380 body=125 status=ok
// SIG undefined FUN_142056380(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142056380(longlong param_1)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 local_44;
  undefined8 local_3c;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    local_20 = 0x3f800000;
    local_44 = 0;
    local_3c = 0;
    local_30 = 0;
    local_28 = 0;
    local_48 = 0x3f800000;
    local_34 = 0x3f800000;
    FUN_1420830b0(&local_48);
    (**(code **)(**(longlong **)(param_1 + 0x78) + 0x1e8))(*(longlong **)(param_1 + 0x78),&local_48)
    ;
  }
  return;
}



// FUNCTION 142056400 FUN_142056400 body=17 status=ok
// SIG undefined FUN_142056400(void)

void FUN_142056400(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x78) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014205640c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x78) + 0x70))();
    return;
  }
  return;
}



// FUNCTION 142056420 FUN_142056420 body=255 status=ok
// SIG undefined FUN_142056420(void)

undefined4 FUN_142056420(longlong param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  if ((((((*(int *)(param_1 + 0x184) != *param_2) || (*(int *)(param_1 + 0x188) != param_2[1])) ||
        (*(int *)(param_1 + 0x18c) != param_2[2])) ||
       ((*(int *)(param_1 + 400) != param_2[3] || (*(int *)(param_1 + 0x194) != param_2[4])))) ||
      ((*(int *)(param_1 + 0x198) != param_2[5] ||
       ((*(int *)(param_1 + 0x19c) != param_2[6] || (*(int *)(param_1 + 0x1a0) != param_2[7]))))))
     || ((*(int *)(param_1 + 0x1a4) != param_2[8] ||
         ((*(int *)(param_1 + 0x1a8) != param_2[9] || (*(int *)(param_1 + 0x1ac) != param_2[10])))))
     ) {
    uVar5 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 0x184) = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 0x18c) = uVar5;
    iVar2 = param_2[5];
    iVar3 = param_2[6];
    iVar4 = param_2[7];
    *(int *)(param_1 + 0x194) = param_2[4];
    *(int *)(param_1 + 0x198) = iVar2;
    *(int *)(param_1 + 0x19c) = iVar3;
    *(int *)(param_1 + 0x1a0) = iVar4;
    iVar2 = param_2[9];
    iVar3 = param_2[10];
    iVar4 = param_2[0xb];
    *(int *)(param_1 + 0x1a4) = param_2[8];
    *(int *)(param_1 + 0x1a8) = iVar2;
    *(int *)(param_1 + 0x1ac) = iVar3;
    *(int *)(param_1 + 0x1b0) = iVar4;
    *(int *)(param_1 + 0x1b4) = param_2[0xc];
    local_28 = 0;
    local_18 = 0;
    puVar6 = (undefined8 *)FUN_140438ef0(0x10,local_48);
    if (puVar6 != (undefined8 *)0x0) {
      puVar6[1] = param_1;
      *puVar6 = &PTR_FUN_143f77b70;
    }
    local_58[0] = &LAB_14202c6b0;
    FUN_14204c370(param_1,local_58);
  }
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + 0x180);
  *(undefined4 *)(param_1 + 0x180) = 1;
  UNLOCK();
  return uVar1;
}



// FUNCTION 142056520 FUN_142056520 body=331 status=ok
// SIG undefined FUN_142056520(void)

ulonglong FUN_142056520(longlong param_1,byte param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined1 local_78 [8];
  longlong *local_70;
  code *local_68 [2];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  
  uVar9 = 0;
  LOCK();
  uVar3 = *(uint *)(param_1 + 0xa4);
  if (uVar3 == 0) {
    *(uint *)(param_1 + 0xa4) = 0;
  }
  else {
    uVar9 = (ulonglong)uVar3;
  }
  UNLOCK();
  if ((uVar3 != 0) != (bool)param_2) {
    LOCK();
    *(uint *)(param_1 + 0xa4) = (uint)param_2;
    UNLOCK();
    puVar8 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_78);
    plVar5 = (longlong *)puVar8[1];
    uVar6 = *puVar8;
    plVar1 = plVar5 + 1;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)plVar1 = (int)*plVar1 + 1;
      UNLOCK();
    }
    local_38 = 0;
    local_28 = 0;
    puVar8 = (undefined8 *)FUN_140438ef0(0x20,local_58);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &PTR_FUN_14467a5d8;
      puVar8[1] = param_1;
      puVar8[2] = uVar6;
      puVar8[3] = plVar5;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)plVar1 = (int)*plVar1 + 1;
        UNLOCK();
      }
    }
    local_68[0] = FUN_14202c570;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
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
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_70 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar2 = (int *)((longlong)local_70 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_70 + 8))(local_70,1);
        }
      }
    }
    uVar9 = FUN_14204c370(param_1,local_68);
  }
  return uVar9;
}



// FUNCTION 142056670 FUN_142056670 body=412 status=ok
// SIG undefined FUN_142056670(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142056670(longlong param_1,char param_2)

{
  char *pcVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined1 *local_148 [2];
  undefined1 local_138 [32];
  undefined8 local_118;
  undefined4 local_108;
  undefined1 local_f8 [96];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ushort local_24;
  char local_22;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  pcVar1 = (char *)(*(longlong *)(param_1 + 0x78) + 0x30);
  LOCK();
  cVar2 = *pcVar1;
  if (cVar2 == '\0') {
    *pcVar1 = '\0';
    cVar2 = '\0';
  }
  UNLOCK();
  if (cVar2 < '\x06') {
    cVar2 = FUN_142045c10(*(undefined8 *)(param_1 + 0x78));
    if (cVar2 == '\0') {
      uStack_150 = CONCAT31(uStack_150._1_3_,param_2);
      local_118 = 0;
      local_108 = 0;
      local_158 = param_1;
      puVar3 = (undefined8 *)FUN_140438ef0(0x18,local_138);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &PTR_FUN_143f77c18;
        *(undefined4 *)(puVar3 + 1) = (undefined4)local_158;
        *(undefined4 *)((longlong)puVar3 + 0xc) = local_158._4_4_;
        *(undefined4 *)(puVar3 + 2) = uStack_150;
        *(undefined4 *)((longlong)puVar3 + 0x14) = uStack_14c;
      }
      local_148[0] = &LAB_14202c070;
      FUN_1420326d0(param_1,local_148);
    }
    else {
      local_24 = 0;
      local_90 = 0;
      local_80 = 0;
      local_78 = 0;
      local_60 = 0;
      local_50 = 0;
      local_48 = 0;
      local_38 = 0;
      local_98 = 0x3f800000;
      local_88 = 0x3f80000000000000;
      local_70 = 0x3f800000;
      local_68 = 0x3f800000;
      local_58 = 0x3f80000000000000;
      local_40 = 0x3f800000;
      local_30 = 0x3f80000000000000;
      if (((((byte)*(undefined4 *)(param_1 + 0xa0) & 0x8f) == 10) &&
          (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0xd8))
                             (*(longlong **)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa8),
                              local_f8), cVar2 != '\0')) && (param_2 != local_22)) {
        local_24 = local_24 | 0x40;
        local_22 = param_2;
        (**(code **)(**(longlong **)(param_1 + 0x98) + 0xe0))
                  (*(longlong **)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa8),local_f8);
      }
    }
  }
  return;
}



// FUNCTION 142056810 FUN_142056810 body=88 status=ok
// SIG undefined FUN_142056810(void)

bool FUN_142056810(void)

{
  int *piVar1;
  char cVar2;
  DWORD DVar3;
  
  piVar1 = DAT_146acc888;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    if (DVar3 != DAT_1468c21c0) {
      return piVar1[1] != 0;
    }
  }
  return *piVar1 != 0;
}



// FUNCTION 142056870 FUN_142056870 body=115 status=ok
// SIG undefined FUN_142056870(void)

undefined1 FUN_142056870(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *local_18;
  int local_10;
  
  uVar2 = UBidstackCustomMeshAdUnitComponent::getMaterialInfo(param_1,&local_18);
  uVar1 = TArray<FString,FDefaultAllocator>::Contains<FString>(uVar2,param_2);
  plVar3 = local_18;
  for (; local_10 != 0; local_10 = local_10 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  return uVar1;
}



// FUNCTION 1420568f0 FUN_1420568f0 body=114 status=ok
// SIG undefined FUN_1420568f0(void)

ulonglong FUN_1420568f0(void)

{
  longlong lVar1;
  char extraout_AL;
  DWORD DVar2;
  ulonglong uVar3;
  undefined7 extraout_var;
  undefined4 extraout_var_00;
  undefined7 uVar4;
  longlong lVar5;
  bool bVar6;
  
  lVar1 = DAT_146acca38;
  lVar5 = 0;
  uVar3 = 0;
  LOCK();
  bVar6 = DAT_146accd48 == 0;
  if (bVar6) {
    DAT_146accd48 = 0;
  }
  else {
    uVar3 = (ulonglong)DAT_146accd48;
  }
  UNLOCK();
  if ((bVar6) && (DAT_1468c217e == '\0')) {
    FUN_1415ad720(&DAT_1468e2448);
    uVar4 = extraout_var;
    if ((extraout_AL == '\0') && (DAT_1468c21ae != '\0')) {
      DVar2 = GetCurrentThreadId();
      uVar4 = (undefined7)(CONCAT44(extraout_var_00,DVar2) >> 8);
      if (DVar2 != DAT_1468c21c0) {
        lVar5 = 4;
      }
    }
    return CONCAT71(uVar4,*(int *)(lVar5 + lVar1) != 0);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 142056970 FUN_142056970 body=141 status=ok
// SIG undefined FUN_142056970(void)

undefined8 FUN_142056970(void)

{
  longlong lVar1;
  char extraout_AL;
  DWORD DVar2;
  ulonglong uVar3;
  undefined7 extraout_var;
  undefined4 extraout_var_00;
  undefined7 uVar4;
  longlong lVar5;
  bool bVar6;
  
  lVar1 = DAT_146accac8;
  lVar5 = 0;
  if (DAT_146acd048 == '\0') {
    LOCK();
    DAT_146accf28 = (uint)(*DAT_146accf68 != 0);
    UNLOCK();
    DAT_146acd048 = '\x01';
  }
  uVar3 = 0;
  LOCK();
  bVar6 = DAT_146accf28 == 0;
  if (bVar6) {
    DAT_146accf28 = 0;
  }
  else {
    uVar3 = (ulonglong)DAT_146accf28;
  }
  UNLOCK();
  if (!bVar6) {
    FUN_1415ad720(&DAT_1468e2448);
    uVar4 = extraout_var;
    if ((extraout_AL == '\0') && (DAT_1468c21ae != '\0')) {
      DVar2 = GetCurrentThreadId();
      uVar4 = (undefined7)(CONCAT44(extraout_var_00,DVar2) >> 8);
      if (DVar2 != DAT_1468c21c0) {
        lVar5 = 4;
      }
    }
    return CONCAT71(uVar4,*(int *)(lVar5 + lVar1) != 0);
  }
  return CONCAT71((int7)(uVar3 >> 8),1);
}



// FUNCTION 142056a00 FUN_142056a00 body=102 status=ok
// SIG undefined FUN_142056a00(void)

ulonglong FUN_142056a00(void)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  ulonglong in_RAX;
  
  lVar1 = DAT_146acca98;
  if (DAT_1468c217e != '\0') goto LAB_142056a5f;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    if (DVar3 == DAT_1468c21c0) goto LAB_142056a4b;
    in_RAX = 4;
  }
  else {
LAB_142056a4b:
    in_RAX = 0;
  }
  if (*(int *)(in_RAX + lVar1) != 0) {
    return 1;
  }
LAB_142056a5f:
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142056a70 FUN_142056a70 body=1048 status=ok
// SIG undefined FUN_142056a70(void)

ulonglong FUN_142056a70(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined2 *puVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
  int iVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  bool bVar17;
  undefined8 *local_68;
  int local_60;
  int local_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  
  uVar8 = 0;
  LOCK();
  uVar2 = *(uint *)(param_1 + 0x100);
  if (uVar2 == 0) {
    *(uint *)(param_1 + 0x100) = 0;
  }
  else {
    uVar8 = (ulonglong)uVar2;
  }
  UNLOCK();
  if (uVar2 == 0) {
    LOCK();
    *(undefined4 *)(param_1 + 0x100) = 1;
    UNLOCK();
    cVar5 = FWeakObjectPtr::IsValid(param_1 + 0xb8);
    if (cVar5 != '\0') {
      plVar6 = (longlong *)FWeakObjectPtr::Get(param_1 + 0xb8);
      (**(code **)(*plVar6 + 0x288))(plVar6);
    }
    iVar14 = *(int *)(param_1 + 200);
    lVar12 = *(longlong *)(param_1 + 0xc0);
    local_68 = (undefined8 *)0x0;
    local_60 = iVar14;
    if (iVar14 == 0) {
      local_5c = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_68,iVar14);
      lVar12 = lVar12 - (longlong)local_68;
      puVar9 = local_68;
      do {
        *puVar9 = *(undefined8 *)(lVar12 + (longlong)puVar9);
        lVar3 = *(longlong *)(lVar12 + 8 + (longlong)puVar9);
        puVar9[1] = lVar3;
        if (lVar3 != 0) {
          LOCK();
          *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
          UNLOCK();
        }
        puVar9 = puVar9 + 2;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
    }
    puVar15 = local_68 + (longlong)local_60 * 2;
    puVar16 = local_68;
    iVar14 = local_60;
    for (puVar9 = local_68; local_68 = puVar16, local_60 = iVar14, puVar9 != puVar15;
        puVar9 = puVar9 + 2) {
      local_38 = (longlong *)0x0;
      plVar6 = (longlong *)puVar9[1];
      local_48 = *puVar9;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      plVar4 = *(longlong **)(param_1 + 0x10);
      plVar13 = plVar4;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        iVar14 = (int)plVar4[1];
        bVar17 = iVar14 == 0;
        if (bVar17) {
          *(int *)(plVar4 + 1) = 0;
          iVar14 = 0;
        }
        UNLOCK();
        while (plVar13 = local_38, !bVar17) {
          LOCK();
          bVar17 = iVar14 == (int)plVar4[1];
          if (bVar17) {
            *(int *)(plVar4 + 1) = iVar14 + 1;
          }
          UNLOCK();
          if (bVar17) {
            local_38 = (longlong *)0x0;
            plVar13 = plVar4;
            if (plVar4 != (longlong *)0x0) {
              local_38 = *(longlong **)(param_1 + 8);
            }
            break;
          }
          LOCK();
          iVar14 = (int)plVar4[1];
          bVar17 = iVar14 == 0;
          if (bVar17) {
            *(int *)(plVar4 + 1) = 0;
            iVar14 = 0;
          }
          UNLOCK();
        }
      }
      local_40 = plVar6;
      local_30 = plVar13;
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
        UNLOCK();
        LOCK();
        plVar4 = plVar13 + 1;
        lVar12 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar1 = (int *)((longlong)plVar13 + 0xc);
          iVar14 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            (**(code **)(*plVar13 + 8))(plVar13,1);
          }
        }
      }
      FUN_14204e310(*(undefined8 *)(param_1 + 0x78),&local_38,&local_48);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar6 + 1;
        lVar12 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          iVar14 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
          }
        }
      }
      puVar16 = local_68;
      iVar14 = local_60;
    }
    TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty(param_1 + 0xc0,0);
    if (iVar14 != 0) {
      plVar6 = puVar16 + 1;
      do {
        plVar4 = (longlong *)*plVar6;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar13 = plVar4 + 1;
          lVar12 = *plVar13;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*plVar4)();
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
            }
          }
        }
        plVar6 = plVar6 + 2;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
    }
    local_60 = 0;
    if (local_5c != 0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_68,0);
    }
    puVar9 = *(undefined8 **)(param_1 + 0xe0);
    puVar16 = puVar9 + (longlong)*(int *)(param_1 + 0xe8) * 2;
    for (; puVar9 != puVar16; puVar9 = puVar9 + 2) {
      plVar6 = (longlong *)puVar9[1];
      puVar15 = (undefined8 *)*puVar9;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      (**(code **)*puVar15)();
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar6 + 1;
        lVar12 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          iVar14 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
          }
        }
      }
    }
    TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty(param_1 + 0xe0,0);
    if ((*(uint *)(param_1 + 0xa0) >> 6 & 1) != 0) {
      (**(code **)(**(longlong **)(param_1 + 0x98) + 0x10))
                (*(longlong **)(param_1 + 0x98),param_1 + 0x88,*(undefined8 *)(param_1 + 0xa8));
      *(undefined8 *)(param_1 + 0x98) = 0;
    }
    *(undefined4 *)(param_1 + 0xa0) = 1;
    lVar12 = *(longlong *)(param_1 + 0x78);
    AcquireSRWLockExclusive((PSRWLOCK)(lVar12 + 200));
    iVar14 = *(int *)(param_1 + 0x30);
    if (iVar14 == 0) {
      puVar10 = &DAT_143f3eda8;
    }
    else {
      puVar10 = *(undefined2 **)(param_1 + 0x28);
    }
    iVar11 = iVar14 * 2 + -2;
    if (iVar14 == 0) {
      iVar11 = 0;
    }
    uVar7 = FFnv::MemFnv64(puVar10,iVar11,1);
    FUN_1407f9040(lVar12 + 0xe0,uVar7);
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar12 + 200));
    local_50 = (longlong *)0x0;
    if ((undefined8 *)(param_1 + 0xd0) != &local_58) {
      *(undefined8 *)(param_1 + 0xd0) = 0;
      local_58 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xd8,&local_50);
      plVar6 = local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_50 + 1;
        lVar12 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          iVar14 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            (**(code **)(*local_50 + 8))(local_50,1);
          }
        }
      }
    }
    uVar8 = TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
            ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_68);
  }
  return uVar8;
}



// FUNCTION 142056e90 FUN_142056e90 body=1205 status=ok
// SIG undefined FUN_142056e90(void)

ulonglong FUN_142056e90(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined2 *puVar15;
  int iVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  bool bVar19;
  undefined8 *local_68;
  int local_60;
  int local_5c;
  longlong local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  
  uVar9 = 0;
  LOCK();
  uVar2 = *(uint *)(param_1 + 0x100);
  if (uVar2 == 0) {
    *(uint *)(param_1 + 0x100) = 0;
  }
  else {
    uVar9 = (ulonglong)uVar2;
  }
  UNLOCK();
  if (uVar2 == 0) {
    LOCK();
    *(undefined4 *)(param_1 + 0x100) = 1;
    UNLOCK();
    cVar5 = FWeakObjectPtr::IsValid(param_1 + 0xb8);
    if (cVar5 != '\0') {
      plVar7 = (longlong *)FWeakObjectPtr::Get(param_1 + 0xb8);
      (**(code **)(*plVar7 + 0x288))(plVar7);
    }
    iVar16 = *(int *)(param_1 + 200);
    lVar13 = *(longlong *)(param_1 + 0xc0);
    local_68 = (undefined8 *)0x0;
    local_60 = iVar16;
    if (iVar16 == 0) {
      local_5c = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_68,iVar16);
      lVar13 = lVar13 - (longlong)local_68;
      puVar10 = local_68;
      do {
        *puVar10 = *(undefined8 *)(lVar13 + (longlong)puVar10);
        lVar3 = *(longlong *)(lVar13 + 8 + (longlong)puVar10);
        puVar10[1] = lVar3;
        if (lVar3 != 0) {
          LOCK();
          *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
          UNLOCK();
        }
        puVar10 = puVar10 + 2;
        iVar16 = iVar16 + -1;
      } while (iVar16 != 0);
    }
    puVar17 = local_68 + (longlong)local_60 * 2;
    puVar18 = local_68;
    iVar16 = local_60;
    for (puVar10 = local_68; local_68 = puVar18, local_60 = iVar16, puVar10 != puVar17;
        puVar10 = puVar10 + 2) {
      local_38 = (longlong *)0x0;
      plVar7 = (longlong *)puVar10[1];
      local_48 = *puVar10;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      plVar4 = *(longlong **)(param_1 + 0x10);
      plVar14 = plVar4;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        iVar16 = (int)plVar4[1];
        bVar19 = iVar16 == 0;
        if (bVar19) {
          *(int *)(plVar4 + 1) = 0;
          iVar16 = 0;
        }
        UNLOCK();
        while (plVar14 = local_38, !bVar19) {
          LOCK();
          bVar19 = iVar16 == (int)plVar4[1];
          if (bVar19) {
            *(int *)(plVar4 + 1) = iVar16 + 1;
          }
          UNLOCK();
          if (bVar19) {
            local_38 = (longlong *)0x0;
            plVar14 = plVar4;
            if (plVar4 != (longlong *)0x0) {
              local_38 = *(longlong **)(param_1 + 8);
            }
            break;
          }
          LOCK();
          iVar16 = (int)plVar4[1];
          bVar19 = iVar16 == 0;
          if (bVar19) {
            *(int *)(plVar4 + 1) = 0;
            iVar16 = 0;
          }
          UNLOCK();
        }
      }
      local_40 = plVar7;
      local_30 = plVar14;
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
        UNLOCK();
        LOCK();
        plVar4 = plVar14 + 1;
        lVar13 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*plVar14)(plVar14);
          LOCK();
          piVar1 = (int *)((longlong)plVar14 + 0xc);
          iVar16 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar16 == 1) {
            (**(code **)(*plVar14 + 8))(plVar14,1);
          }
        }
      }
      FUN_14204e310(*(undefined8 *)(param_1 + 0x78),&local_38,&local_48);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar7 + 1;
        lVar13 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar16 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar16 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
      puVar18 = local_68;
      iVar16 = local_60;
    }
    TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty(param_1 + 0xc0,0);
    if (iVar16 != 0) {
      plVar7 = puVar18 + 1;
      do {
        plVar4 = (longlong *)*plVar7;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar14 = plVar4 + 1;
          lVar13 = *plVar14;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*plVar4)(plVar4);
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
        plVar7 = plVar7 + 2;
        iVar16 = iVar16 + -1;
      } while (iVar16 != 0);
    }
    local_60 = 0;
    if (local_5c != 0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_68,0);
    }
    puVar10 = *(undefined8 **)(param_1 + 0xe0);
    puVar18 = puVar10 + (longlong)*(int *)(param_1 + 0xe8) * 2;
    for (; puVar10 != puVar18; puVar10 = puVar10 + 2) {
      plVar7 = (longlong *)puVar10[1];
      puVar17 = (undefined8 *)*puVar10;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      (**(code **)*puVar17)();
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar7 + 1;
        lVar13 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar16 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar16 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
    }
    TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty(param_1 + 0xe0,0);
    if ((*(uint *)(param_1 + 0xa0) >> 6 & 1) != 0) {
      (**(code **)(**(longlong **)(param_1 + 0x98) + 0x10))
                (*(longlong **)(param_1 + 0x98),param_1 + 0x88,*(undefined8 *)(param_1 + 0xa8));
      *(undefined8 *)(param_1 + 0x98) = 0;
    }
    plVar7 = (longlong *)(param_1 + 0xd0);
    *(undefined4 *)(param_1 + 0xa0) = 1;
    lVar13 = *plVar7;
    puVar15 = &DAT_143f3eda8;
    if (lVar13 != 0) {
      plVar4 = *(longlong **)(lVar13 + 0xe0);
      iVar16 = *(int *)(lVar13 + 0xe8);
      for (plVar14 = plVar4; plVar14 != plVar4 + (longlong)iVar16 * 2; plVar14 = plVar14 + 2) {
        if (*(int *)(param_1 + 0x20) == 0) {
          puVar12 = &DAT_143f3eda8;
        }
        else {
          puVar12 = *(undefined2 **)(param_1 + 0x18);
        }
        if (*(int *)(*plVar14 + 0x20) == 0) {
          puVar11 = &DAT_143f3eda8;
        }
        else {
          puVar11 = *(undefined2 **)(*plVar14 + 0x18);
        }
        iVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar11,puVar12);
        if (iVar6 == 0) {
          if (plVar14 != plVar4 + (longlong)iVar16 * 2) {
            uVar9 = (longlong)plVar14 - (longlong)plVar4 >> 4;
            iVar16 = (int)uVar9;
            if ((-1 < iVar16) && (iVar16 < *(int *)(*plVar7 + 0xe8))) {
              TArray<TSharedPtr<Chaos::FImplicitObject,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                        (*plVar7 + 0xe0,uVar9 & 0xffffffff,1,1);
            }
          }
          break;
        }
      }
    }
    lVar13 = *(longlong *)(param_1 + 0x78);
    AcquireSRWLockExclusive((PSRWLOCK)(lVar13 + 200));
    iVar16 = *(int *)(param_1 + 0x30);
    if (iVar16 != 0) {
      puVar15 = *(undefined2 **)(param_1 + 0x28);
    }
    iVar6 = iVar16 * 2 + -2;
    if (iVar16 == 0) {
      iVar6 = 0;
    }
    uVar8 = FFnv::MemFnv64(puVar15,iVar6,1);
    FUN_1407f9040(lVar13 + 0xe0,uVar8);
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar13 + 200));
    local_50 = (longlong *)0x0;
    if (plVar7 != &local_58) {
      *plVar7 = 0;
      local_58 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xd8,&local_50);
      plVar7 = local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_50 + 1;
        lVar13 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar16 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar16 == 1) {
            (**(code **)(*local_50 + 8))(local_50,1);
          }
        }
      }
    }
    uVar9 = TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
            ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_68);
  }
  return uVar9;
}



// FUNCTION 142057350 FUN_142057350 body=88 status=ok
// SIG undefined FUN_142057350(void)

bool FUN_142057350(void)

{
  int *piVar1;
  char cVar2;
  DWORD DVar3;
  
  piVar1 = DAT_146accd60;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    if (DVar3 != DAT_1468c21c0) {
      return piVar1[1] != 0;
    }
  }
  return *piVar1 != 0;
}



// FUNCTION 1420573b0 FUN_1420573b0 body=571 status=ok
// SIG undefined FUN_1420573b0(void)

void FUN_1420573b0(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined1 local_res8 [8];
  undefined4 local_res18 [2];
  undefined4 local_res20;
  undefined4 local_res24;
  undefined1 local_e8 [8];
  longlong *local_e0;
  undefined1 *local_d8 [2];
  undefined1 local_c8 [32];
  undefined8 local_a8;
  undefined4 local_98;
  undefined1 *local_88 [2];
  undefined1 local_78 [32];
  undefined8 local_58;
  undefined4 local_48;
  
  LOCK();
  iVar3 = *(int *)(param_1 + 500);
  *(int *)(param_1 + 500) = 0;
  UNLOCK();
  if (iVar3 == 0) {
    LOCK();
    iVar3 = *(int *)(param_1 + 0x90);
    *(int *)(param_1 + 0x90) = 1;
    UNLOCK();
    if (iVar3 == 0) {
      local_res20 = *(undefined4 *)(param_1 + 0x70);
      local_res24 = *(undefined4 *)(param_1 + 0x74);
      local_res18[0] = 0xffffffff;
      FUN_141729b50(local_res8);
      cVar6 = FWeakObjectPtr::IsValid(&local_res20,0,1);
      if (cVar6 != '\0') {
        uVar7 = FWeakObjectPtr::Get(&local_res20);
        FUN_14170c210(local_res18,uVar7);
      }
      FUN_14172a400(local_res8);
      uVar9 = local_res18[0];
      local_res18[0] = 0xffffffff;
      FUN_1416f8340(0xffffffff);
      puVar8 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_e8);
      plVar4 = (longlong *)puVar8[1];
      uVar7 = *puVar8;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      if (local_e0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_e0 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_e0)(local_e0);
          LOCK();
          piVar2 = (int *)((longlong)local_e0 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_e0 + 8))(local_e0,1);
          }
        }
      }
      local_a8 = 0;
      local_98 = 0;
      puVar8 = (undefined8 *)FUN_140438ef0(0x18,local_c8);
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = &PTR_FUN_14461b758;
        puVar8[1] = uVar7;
        puVar8[2] = plVar4;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
        }
      }
      local_58 = 0;
      local_d8[0] = &LAB_14202cbf0;
      local_48 = 0;
      puVar8 = (undefined8 *)FUN_140438ef0(0x18,local_78);
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = &PTR_FUN_144f71b10;
        puVar8[1] = param_1;
        *(undefined1 *)(puVar8 + 2) = param_2;
        *(undefined4 *)((longlong)puVar8 + 0x14) = uVar9;
        uVar9 = 0xffffffff;
      }
      local_88[0] = &LAB_14202cae0;
      FUN_14204c730(param_1,local_88,local_d8);
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
      FUN_1416f8340(uVar9);
    }
  }
  return;
}



// FUNCTION 1420575f0 FUN_1420575f0 body=531 status=ok
// SIG undefined FUN_1420575f0(void)

ulonglong FUN_1420575f0(longlong param_1,longlong param_2,uint *param_3,int param_4)

{
  uint uVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  
  if ((*param_3 & 0x40) != 0) {
    return 0x100000;
  }
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x48))
                    (*(longlong **)(param_1 + 0x38),*(undefined4 *)(param_2 + 0x10));
  if (*(int *)(param_2 + 0x10) < 5) {
LAB_1420577df:
    uVar6 = FUN_142057810(param_1,iVar3,param_3,param_4);
    return uVar6;
  }
  plVar2 = *(longlong **)(param_2 + 0x20);
  uVar8 = 1;
  if ((*(byte *)((longlong)plVar2 + 0x46) & 2) == 0) {
    uVar8 = (uint)*(byte *)((longlong)plVar2 + 0x44);
  }
  uVar4 = (**(code **)(*plVar2 + 0x20))();
  iVar5 = FUN_1432c86a0(uVar4);
  if ((iVar5 * uVar8 < 2) ||
     (((iVar5 = (**(code **)(**(longlong **)(param_2 + 0x20) + 0x20))(), iVar5 < 200 ||
       (iVar5 = (**(code **)(**(longlong **)(param_2 + 0x20) + 0x20))(), 0xca < iVar5)) &&
      (iVar5 = (**(code **)(**(longlong **)(param_2 + 0x20) + 0x20))(), iVar5 != 0x42))))
  goto LAB_1420577df;
  iVar5 = (**(code **)(**(longlong **)(param_2 + 0x20) + 0x20))();
  if (iVar5 == 0x42) {
    if (DAT_146ace8a7 == '\0') {
      iVar5 = Scaleform::Render::Texture::GetPlaneCount(*(undefined8 *)(param_2 + 0x20));
      DAT_146ace8a7 = iVar5 != 2;
    }
    if (iVar3 < 7) {
LAB_14205778c:
      uVar8 = 0x201;
    }
    else if (iVar3 < 9) {
      uVar8 = 0x4001;
    }
    else {
      if (10 < iVar3) {
        if (iVar3 == 0xb) {
          uVar8 = 0xc0000;
          goto LAB_142057799;
        }
        goto LAB_14205778c;
      }
      uVar8 = 0x1001;
    }
  }
  else if (iVar5 == 200) {
    if (DAT_146ace8a4 == '\0') {
      iVar5 = Scaleform::Render::Texture::GetPlaneCount(*(undefined8 *)(param_2 + 0x20));
      DAT_146ace8a4 = iVar5 != 3;
    }
    uVar8 = 0x180000;
  }
  else if (iVar5 == 0xc9) {
    if (DAT_146ace8a5 == '\0') {
      iVar5 = Scaleform::Render::Texture::GetPlaneCount(*(undefined8 *)(param_2 + 0x20));
      DAT_146ace8a5 = iVar5 != 4;
    }
    uVar8 = 0x1a0000;
  }
  else if (iVar5 == 0xca) {
    if (DAT_146ace8a6 == '\0') {
      iVar5 = Scaleform::Render::Texture::GetPlaneCount(*(undefined8 *)(param_2 + 0x20));
      DAT_146ace8a6 = iVar5 != 1;
    }
    uVar8 = 0x1c0000;
  }
  else {
    uVar8 = 0x180000;
  }
  if (iVar3 == 6) {
    uVar8 = uVar8 + 0x20;
  }
LAB_142057799:
  uVar1 = *param_3;
  if (((byte)uVar1 & 0xc) == 0xc) {
    uVar8 = uVar8 + 0x100;
  }
  else if ((uVar1 & 8) != 0) {
    uVar8 = uVar8 + 0x10;
  }
  if (param_4 == 1) {
    uVar8 = uVar8 + 2;
  }
  else if (param_4 == 2) {
    uVar8 = uVar8 + 4;
  }
  uVar7 = uVar8 + 1;
  if ((uVar1 & 1) == 0) {
    uVar7 = uVar8;
  }
  uVar8 = uVar7 + 8;
  if ((uVar1 & 0x10) == 0) {
    uVar8 = uVar7;
  }
  return (ulonglong)uVar8;
}



// FUNCTION 142057810 FUN_142057810 body=211 status=ok
// SIG undefined FUN_142057810(void)

int FUN_142057810(undefined8 param_1,undefined4 param_2,uint *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *param_3;
  if ((uVar3 & 0x40) != 0) {
    return 0x100000;
  }
  switch(param_2) {
  case 3:
    iVar2 = 0x401;
    break;
  case 4:
    iVar2 = 0x421;
    break;
  case 5:
    iVar2 = 1;
    break;
  case 6:
    iVar2 = 0x21;
    break;
  case 7:
    iVar2 = 0x2001;
    break;
  case 8:
    iVar2 = 0x2021;
    break;
  case 9:
    iVar2 = 0x801;
    break;
  case 10:
    iVar2 = 0x821;
    break;
  case 0xb:
    iVar2 = 0x90000;
    break;
  case 0xc:
    uVar3 = uVar3 | 8;
    iVar2 = 0x88000;
    *param_3 = uVar3;
    goto LAB_1420578b0;
  default:
    uVar3 = uVar3 & 0xfffffff7;
    iVar2 = 0x80000;
    *param_3 = uVar3;
  }
  if (((byte)uVar3 & 0xc) == 0xc) {
    iVar2 = iVar2 + 0x100;
  }
  else if ((uVar3 & 8) != 0) {
    iVar2 = iVar2 + 0x10;
  }
LAB_1420578b0:
  if (param_4 == 1) {
    iVar2 = iVar2 + 2;
  }
  else if (param_4 == 2) {
    iVar2 = iVar2 + 4;
  }
  iVar1 = iVar2 + 1;
  if ((uVar3 & 1) == 0) {
    iVar1 = iVar2;
  }
  iVar2 = iVar1 + 0x40;
  if ((uVar3 & 2) == 0) {
    iVar2 = iVar1;
  }
  iVar1 = iVar2 + 8;
  if ((uVar3 & 0x10) == 0) {
    iVar1 = iVar2;
  }
  return iVar1;
}



// FUNCTION 142057920 FUN_142057920 body=627 status=ok
// SIG undefined FUN_142057920(void)

ulonglong FUN_142057920(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  bool bVar13;
  undefined1 local_e8 [8];
  longlong *local_e0;
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 *local_c8 [2];
  undefined1 local_b8 [32];
  undefined8 local_98;
  undefined4 local_88;
  undefined1 *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  LOCK();
  iVar4 = *(int *)(param_1 + 0x90);
  *(int *)(param_1 + 0x90) = 0;
  UNLOCK();
  if (iVar4 == 0) {
    LOCK();
    uVar5 = *(uint *)(param_1 + 0x94);
    bVar13 = uVar5 == 0;
    if (bVar13) {
      *(uint *)(param_1 + 0x94) = 0;
      uVar5 = 0;
    }
    uVar12 = (ulonglong)uVar5;
    UNLOCK();
    if (bVar13) {
      LOCK();
      *(undefined4 *)(param_1 + 500) = 1;
      UNLOCK();
      return uVar12;
    }
  }
  else {
    puVar11 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_e8);
    plVar6 = (longlong *)puVar11[1];
    uVar7 = *puVar11;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_e0 + 1;
      lVar10 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
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
    puVar11 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_d8);
    plVar8 = (longlong *)puVar11[1];
    uVar9 = *puVar11;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_d0 + 1;
      lVar10 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_d0)(local_d0);
        LOCK();
        piVar1 = (int *)((longlong)local_d0 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_d0 + 8))(local_d0,1);
        }
      }
    }
    local_98 = 0;
    local_88 = 0;
    puVar11 = (undefined8 *)FUN_140438ef0(0x18,local_b8);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &PTR_FUN_14461b758;
      puVar11[1] = uVar9;
      puVar11[2] = plVar8;
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
      }
    }
    local_48 = 0;
    local_c8[0] = &LAB_140f26c30;
    local_38 = 0;
    puVar11 = (undefined8 *)FUN_140438ef0(0x20,local_68);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &PTR_FUN_14467a5d8;
      puVar11[1] = param_1;
      puVar11[2] = uVar7;
      puVar11[3] = plVar6;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
    }
    local_78[0] = &LAB_14202c8d0;
    uVar12 = FUN_14204c730(param_1,local_78,local_c8);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      puVar3 = (uint *)(plVar8 + 1);
      uVar5 = *puVar3;
      uVar12 = (ulonglong)uVar5;
      *puVar3 = *puVar3 - 1;
      UNLOCK();
      if (uVar5 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        puVar3 = (uint *)((longlong)plVar8 + 0xc);
        uVar5 = *puVar3;
        uVar12 = (ulonglong)uVar5;
        *puVar3 = *puVar3 - 1;
        UNLOCK();
        if (uVar5 == 1) {
          uVar12 = (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      puVar3 = (uint *)(plVar6 + 1);
      uVar5 = *puVar3;
      uVar12 = (ulonglong)uVar5;
      *puVar3 = *puVar3 - 1;
      UNLOCK();
      if (uVar5 == 1) {
        uVar12 = (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          uVar12 = (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
  }
  return uVar12;
}



// FUNCTION 142057ba0 FUN_142057ba0 body=124 status=ok
// SIG undefined FUN_142057ba0(void)

bool FUN_142057ba0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  bool bVar5;
  
  puVar4 = (undefined8 *)0x0;
  LOCK();
  bVar5 = DAT_146accd48 == 0;
  if (bVar5) {
    DAT_146accd48 = 0;
  }
  UNLOCK();
  if ((bVar5) && (DAT_1468c217e == '\0')) {
    bVar5 = false;
    if (DAT_146accf98 == (undefined8 *)0x0) {
      lVar3 = operator_new(0xd8);
      if (lVar3 != 0) {
        puVar4 = (undefined8 *)FUN_14282a800(lVar3);
      }
      puVar2 = DAT_146accf98;
      if (DAT_146accf98 != (undefined8 *)0x0) {
        puVar1 = (undefined8 *)*DAT_146accf98;
        DAT_146accf98 = puVar4;
        (*(code *)*puVar1)(puVar2,1);
        puVar4 = DAT_146accf98;
      }
      DAT_146accf98 = puVar4;
      bVar5 = DAT_146accf98 == (undefined8 *)0x0;
    }
    return !bVar5;
  }
  return false;
}



// FUNCTION 142057c20 FUN_142057c20 body=372 status=ok
// SIG undefined FUN_142057c20(void)

bool FUN_142057c20(longlong param_1,int param_2,longlong *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  
  if ((*(int *)(param_1 + 0x210) - *(int *)(param_1 + 0x23c) < 1) || (1 < param_4 - 1U)) {
    plVar6 = (longlong *)0x0;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x248);
    if (*(longlong *)(param_1 + 0x248) == 0) {
      lVar3 = param_1 + 0x240;
    }
    iVar2 = *(int *)(lVar3 + ((longlong)*(int *)(param_1 + 0x250) - 1U & (longlong)param_2) * 4);
    if (iVar2 == -1) {
LAB_142057cbd:
      plVar4 = (longlong *)0x0;
LAB_142057cc0:
      plVar6 = plVar4 + 1;
      if (plVar4 == (longlong *)0x0) {
        plVar6 = (longlong *)0x0;
      }
    }
    else {
      do {
        plVar4 = (longlong *)((longlong)iVar2 * 0x20 + *(longlong *)(param_1 + 0x208));
        if ((int)*plVar4 == param_2) {
          if (iVar2 == -1) goto LAB_142057cbd;
          goto LAB_142057cc0;
        }
        iVar2 = (int)plVar4[3];
      } while (iVar2 != -1);
      plVar6 = (longlong *)0x0;
    }
  }
  if (plVar6 != (longlong *)0x0) {
    plVar4 = (longlong *)*plVar6;
    if (plVar4 != plVar4 + (longlong)(int)plVar6[1] * 3) {
      plVar5 = plVar4;
      do {
        if (*plVar5 == *param_3) {
          lVar3 = ((longlong)plVar5 - (longlong)plVar4) / 0x18;
          goto LAB_142057d07;
        }
        plVar5 = plVar5 + 3;
      } while (plVar5 != plVar4 + (longlong)(int)plVar6[1] * 3);
    }
  }
  lVar3 = 0xffffffff;
LAB_142057d07:
  bVar7 = (int)lVar3 != -1;
  if ((bVar7) && (param_4 == 1)) {
    TArray<FOnlineLeaderboardsInterfaceEOS::FDeferredQueryLeaderboardRanksRequest,TSizedDefaultAllocator<32>_>
    ::RemoveAtImpl(plVar6,lVar3,1,1);
  }
  plVar6 = (longlong *)param_3[2];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar6 + 1;
    lVar3 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  return bVar7;
}



// FUNCTION 142057da0 FUN_142057da0 body=808 status=ok
// SIG undefined FUN_142057da0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142057da0(longlong param_1)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  char cVar4;
  char cVar5;
  DWORD DVar6;
  BOOL BVar7;
  int iVar8;
  LPCRITICAL_SECTION p_Var9;
  longlong lVar10;
  LPCRITICAL_SECTION p_Var11;
  LPCRITICAL_SECTION lpCriticalSection;
  void *local_48;
  int local_40;
  LPCRITICAL_SECTION local_38;
  int local_30;
  LPCRITICAL_SECTION local_28;
  int local_20;
  
  lVar10 = DAT_146acc888;
  cVar4 = FUN_1415ad720(&DAT_1468e2448);
  p_Var11 = (LPCRITICAL_SECTION)0x0;
  if (((cVar4 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), p_Var9 = (LPCRITICAL_SECTION)&DAT_00000004,
     DVar6 == DAT_1468c21c0)) {
    p_Var9 = (LPCRITICAL_SECTION)0x0;
  }
  if (((*(int *)((longlong)&p_Var9->DebugInfo + lVar10) == 0) &&
      (cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x70), cVar4 != '\0')) &&
     (lVar10 = FWeakObjectPtr::Get(param_1 + 0x70), (*(uint *)(lVar10 + 0x40) & 0x200000) != 0)) {
    cVar4 = '\x01';
  }
  else {
    cVar4 = '\0';
  }
  lVar10 = DAT_146acc930;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), p_Var9 = (LPCRITICAL_SECTION)&DAT_00000004,
     DVar6 == DAT_1468c21c0)) {
    p_Var9 = p_Var11;
  }
  lpCriticalSection = p_Var11;
  if (0 < *(int *)((longlong)&p_Var9->DebugInfo + lVar10)) {
    lVar10 = FUN_142039c70();
    lpCriticalSection = (LPCRITICAL_SECTION)(lVar10 + 0x158);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146acd020) && (_Init_thread_header(&DAT_146acd020), DAT_146acd020 == -1))
  {
    InitializeSRWLock((PSRWLOCK)&DAT_146acd010);
    DAT_146acd018 = 0;
    _DAT_146acd01c = 0;
    atexit((_func_5014 *)&DAT_143ea4890);
    _Init_thread_footer(&DAT_146acd020);
  }
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_146acd010);
    LOCK();
    DAT_146acd018 = 1;
    UNLOCK();
  }
  else {
    BVar7 = TryEnterCriticalSection(lpCriticalSection);
    if (BVar7 == 0) {
      EnterCriticalSection(lpCriticalSection);
    }
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    local_40 = *(int *)(param_1 + 0x28);
    lVar10 = (longlong)local_40;
    pvVar2 = *(void **)(param_1 + 0x20);
    local_48 = (void *)0x0;
    if (local_40 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,local_40,0);
      pvVar3 = local_48;
      _guard_xfg_dispatch_icall_nop(local_48,pvVar2,lVar10 * 2);
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
    }
    FUN_1432e1f50(*(undefined8 *)(param_1 + 0x78));
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x80) == 0) goto LAB_14205802c;
  iVar8 = IStreamingManager::GetNumWantingResources();
  iVar1 = *(int *)(param_1 + 0x28);
  pvVar2 = *(void **)(param_1 + 0x20);
  cVar5 = '\0';
  if (iVar8 == 1) {
    cVar5 = cVar4;
  }
  if (cVar5 == '\0') {
    local_28 = (LPCRITICAL_SECTION)0x0;
    local_20 = iVar1;
    if (iVar1 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_28,iVar1,0);
      p_Var11 = local_28;
      _guard_xfg_dispatch_icall_nop(local_28,pvVar2,(longlong)iVar1 * 2);
    }
    IStreamingManager::GetNumWantingResources(*(undefined8 *)(param_1 + 0x80));
LAB_142057fd9:
    if (p_Var11 != (LPCRITICAL_SECTION)0x0) {
      FMemory::Free(p_Var11);
    }
  }
  else {
    local_38 = (LPCRITICAL_SECTION)0x0;
    local_30 = iVar1;
    if (iVar1 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,iVar1,0);
      p_Var11 = local_38;
      _guard_xfg_dispatch_icall_nop(local_38,pvVar2,(longlong)iVar1 * 2);
      goto LAB_142057fd9;
    }
  }
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  (**(code **)(**(longlong **)(param_1 + 0x80) + 0x68))(*(longlong **)(param_1 + 0x80),cVar5);
  if ((lpCriticalSection != (LPCRITICAL_SECTION)0x0) &&
     (BVar7 = TryEnterCriticalSection(lpCriticalSection), BVar7 == 0)) {
    EnterCriticalSection(lpCriticalSection);
  }
  FUN_1432de450(*(undefined8 *)(param_1 + 0x80));
LAB_14205802c:
  *(undefined8 *)(param_1 + 0x80) = 0;
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_146acd010);
    LOCK();
    DAT_146acd018 = 0;
    UNLOCK();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000142058058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 1420580f0 FUN_1420580f0 body=1383 status=ok
// SIG undefined FUN_1420580f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1420580f0(longlong param_1)

{
  char cVar1;
  char cVar2;
  DWORD DVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  bool bVar12;
  float fVar13;
  undefined1 auStack_988 [32];
  undefined1 local_968 [16];
  code *local_958 [2];
  longlong local_948 [4];
  longlong *local_928;
  int local_918;
  undefined8 local_908;
  undefined8 local_900;
  code *local_8f8 [2];
  undefined1 local_8e8 [32];
  undefined8 local_8c8;
  undefined4 local_8b8;
  code *local_8a8 [2];
  undefined1 local_898 [32];
  undefined8 local_878;
  undefined4 local_868;
  longlong local_858 [128];
  longlong *local_458;
  undefined8 local_450;
  undefined8 local_448 [128];
  undefined8 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_988;
  lVar5 = FUN_142039c70();
  if (lVar5 != 0) {
    cVar1 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar1 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar3 = GetCurrentThreadId(), DVar3 != DAT_1468c21c0)) {
      bVar12 = *(int *)(lVar5 + 0x60) == 0;
    }
    else {
      if (*(longlong *)(lVar5 + 0x198) == 0) goto LAB_14205847e;
      bVar12 = DAT_14653517c == '\0';
    }
    if (!bVar12) {
      iVar4 = FUN_140953d20(&PTR_PTR_1464f05c0);
      if (iVar4 == 0) {
        FUN_14207abf0(&PTR_PTR_1464f05c0);
      }
      FUN_14207c060(&PTR_PTR_1464f05c0);
      local_458 = (longlong *)0x0;
      local_450 = 0;
      AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xf0));
      FUN_142016c40(local_858,param_1 + 0xe0);
      ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xf0));
      cVar1 = '\0';
      if (((DAT_146b17150 != 0) && (*(longlong *)(DAT_146b17150 + 0x7b0) != 0)) &&
         (plVar9 = *(longlong **)(*(longlong *)(DAT_146b17150 + 0x7b0) + 0xb0),
         plVar9 != (longlong *)0x0)) {
        plVar8 = local_858;
        if (local_458 != (longlong *)0x0) {
          plVar8 = local_458;
        }
        plVar10 = plVar8 + (longlong)(int)local_450 * 2;
        for (; plVar8 != plVar10; plVar8 = plVar8 + 2) {
          lVar5 = *plVar8;
          cVar2 = FWeakObjectPtr::IsValid(lVar5 + 0x70,0,1);
          if (((cVar2 != '\0') && (lVar5 = FWeakObjectPtr::Get(lVar5 + 0x70), lVar5 != 0)) &&
             ((*(uint *)(lVar5 + 0x40) & 0x1100) == 0x1100)) {
            cVar1 = '\x01';
            break;
          }
        }
        if (*(char *)(param_1 + 400) != cVar1) {
          if (cVar1 == '\0') {
            (**(code **)(*plVar9 + 0x80))(plVar9,0);
            local_908 = 0xc2c80000c2c80000;
            (**(code **)(*plVar9 + 0x98))(plVar9,0xc2c80000c2c80000);
          }
          else {
            (**(code **)(*plVar9 + 0x90))(plVar9,1);
            (**(code **)(*plVar9 + 0x80))(plVar9,1);
          }
          *(char *)(param_1 + 400) = cVar1;
        }
        if (cVar1 != '\0') {
          fVar13 = (float)(int)((ulonglong)_DAT_146ace8b8 >> 0x20);
          local_900 = CONCAT44(fVar13,(float)(int)_DAT_146ace8b8);
          (**(code **)(*plVar9 + 0x98))(plVar9,CONCAT44(fVar13,(float)(int)_DAT_146ace8b8));
        }
      }
      if (DAT_146acd048 == '\0') {
        LOCK();
        DAT_146accf28 = (uint)(*DAT_146accf68 != 0);
        UNLOCK();
        DAT_146acd048 = '\x01';
      }
      LOCK();
      bVar12 = DAT_146accf28 == 0;
      if (bVar12) {
        DAT_146accf28 = 0;
      }
      UNLOCK();
      if (!bVar12) {
        plVar9 = local_858;
        if (local_458 != (longlong *)0x0) {
          plVar9 = local_458;
        }
        plVar8 = plVar9 + (longlong)(int)local_450 * 2;
        for (; plVar9 != plVar8; plVar9 = plVar9 + 2) {
          if (((*(longlong *)(*plVar9 + 0x88) != 0) && (cVar1 = FUN_142078bd0(), cVar1 != '\0')) &&
             (*(longlong **)(*plVar9 + 0x88) != (longlong *)0x0)) {
            (**(code **)(**(longlong **)(*plVar9 + 0x88) + 8))();
          }
        }
      }
      local_48 = (undefined8 *)0x0;
      local_40 = 0;
      AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x120));
      FUN_142016c40(local_448,param_1 + 0x110);
      ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x120));
      puVar7 = local_448;
      if (local_48 != (undefined8 *)0x0) {
        puVar7 = local_48;
      }
      puVar11 = puVar7 + (longlong)(int)local_40 * 2;
      for (; puVar7 != puVar11; puVar7 = puVar7 + 2) {
        FUN_1420371e0(*puVar7);
      }
      FUN_14201bde0(local_448);
      FUN_14201bde0(local_858);
    }
  }
LAB_14205847e:
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x138));
  FUN_142017d20(param_1 + 0x128,local_968);
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x138));
  lVar5 = DAT_146accc98;
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    lVar6 = 4;
    if (DVar3 != DAT_1468c21c0) goto LAB_1420584ec;
  }
  lVar6 = 0;
LAB_1420584ec:
  if (*(int *)(lVar6 + lVar5) != 0) {
    local_928 = (longlong *)0x0;
    local_918 = 0;
    puVar7 = (undefined8 *)FUN_140438ef0(0x10,local_948);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &PTR_FUN_143f3f130;
    }
    local_958[0] = AK::MemoryMgr::StartProfileThreadUsage;
    if (DAT_146acd048 == '\0') {
      LOCK();
      DAT_146accf28 = (uint)(*DAT_146accf68 != 0);
      UNLOCK();
      DAT_146acd048 = '\x01';
    }
    LOCK();
    bVar12 = DAT_146accf28 == 0;
    if (bVar12) {
      DAT_146accf28 = 0;
    }
    UNLOCK();
    if (bVar12) {
      local_878 = 0;
      local_868 = 0;
      puVar7 = (undefined8 *)FUN_140438ef0(0x60,local_898);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = &PTR_CopyToEmptyStorage_1444f81f0;
        TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar7 + 2,local_958);
      }
      local_8a8[0] = UE4Function_Private::
                     TFunctionRefCaller<<lambda_50573a4081bc06268289253819177437>,void___cdecl(void)>
                     ::Call;
      FUN_14204c280(local_8a8);
    }
    else {
      cVar1 = FUN_142059d40();
      plVar9 = DAT_146accf38;
      if (cVar1 != '\0') {
        local_8c8 = 0;
        local_8b8 = 0;
        puVar7 = (undefined8 *)FUN_140438ef0(0x60,local_8e8);
        if (puVar7 != (undefined8 *)0x0) {
          *puVar7 = &PTR_CopyToEmptyStorage_1444f81f0;
          TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar7 + 2,local_958);
        }
        local_8f8[0] = UE4Function_Private::
                       TFunctionRefCaller<<lambda_50573a4081bc06268289253819177437>,void___cdecl(void)>
                       ::Call;
        (**(code **)(*plVar9 + 0x48))(plVar9,local_8f8);
      }
    }
    if (local_918 != 0) {
      plVar9 = local_948;
      if (local_928 != (longlong *)0x0) {
        plVar9 = local_928;
      }
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x10))(plVar9,0);
      }
    }
    if (local_928 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142058660 FUN_142058660 body=408 status=ok
// SIG undefined FUN_142058660(void)

void FUN_142058660(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  FUN_14204fd00();
  plVar4 = (longlong *)0x0;
  LOCK();
  cVar1 = *(char *)(param_1 + 0x30);
  if (cVar1 == '\0') {
    *(char *)(param_1 + 0x30) = '\0';
    cVar1 = '\0';
  }
  UNLOCK();
  if (cVar1 == '\x05') {
    FUN_14172a070(local_res8,0);
    cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x70,0,1);
    plVar3 = plVar4;
    if (cVar1 != '\0') {
      plVar3 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x70);
    }
    FUN_14172a400(local_res8);
    if (plVar3 == (longlong *)0x0) {
      FUN_142052cd0(param_1);
    }
    else {
      LOCK();
      bVar5 = *(int *)(param_1 + 0x90) == 0;
      if (bVar5) {
        *(int *)(param_1 + 0x90) = 0;
      }
      UNLOCK();
      if (!bVar5) {
        FUN_142029af0(param_1,plVar3);
      }
    }
    LOCK();
    bVar5 = *(int *)(param_1 + 0x1e0) == 0;
    if (bVar5) {
      *(int *)(param_1 + 0x1e0) = 0;
    }
    UNLOCK();
    if (!bVar5) {
      FUN_142055370(param_1,6);
    }
  }
  LOCK();
  cVar1 = *(char *)(param_1 + 0x30);
  if (cVar1 == '\0') {
    *(char *)(param_1 + 0x30) = '\0';
    cVar1 = '\0';
  }
  UNLOCK();
  if (cVar1 == '\x06') {
    LOCK();
    cVar1 = *(char *)(param_1 + 0x30);
    if (cVar1 == '\0') {
      *(char *)(param_1 + 0x30) = '\0';
      cVar1 = '\0';
    }
    UNLOCK();
    if (cVar1 == '\x06') {
      if (DAT_146acd048 == '\0') {
        LOCK();
        DAT_146accf28 = (uint)(*DAT_146accf68 != 0);
        UNLOCK();
        DAT_146acd048 = '\x01';
      }
      LOCK();
      bVar5 = DAT_146accf28 == 0;
      if (bVar5) {
        DAT_146accf28 = 0;
      }
      UNLOCK();
      if (!bVar5) {
        LOCK();
        iVar2 = *(int *)(param_1 + 0x1d8);
        if (iVar2 == 0) {
          *(int *)(param_1 + 0x1d8) = 0;
          iVar2 = 0;
        }
        UNLOCK();
        cVar1 = FUN_14204b990();
        if (cVar1 == '\0') {
          if (0 < iVar2) goto LAB_1420587c3;
        }
        else if (1 < iVar2) goto LAB_1420587c3;
      }
      FUN_14172a070(local_res10,0);
      cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x70,0,1);
      if (cVar1 != '\0') {
        plVar4 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x70);
      }
      FUN_14172a400(local_res10);
      if ((plVar4 == (longlong *)0x0) ||
         (cVar1 = (**(code **)(*plVar4 + 0x290))(plVar4), cVar1 != '\0')) {
        FUN_14203ef70(param_1);
      }
    }
  }
LAB_1420587c3:
  LOCK();
  cVar1 = *(char *)(param_1 + 0x30);
  if (cVar1 == '\0') {
    *(char *)(param_1 + 0x30) = '\0';
    cVar1 = '\0';
  }
  UNLOCK();
  if ((cVar1 == '\a') && (cVar1 = FUN_142045cd0(param_1), cVar1 != '\0')) {
    FUN_14203f300(param_1);
    return;
  }
  return;
}



// FUNCTION 142058800 FUN_142058800 body=349 status=ok
// SIG undefined FUN_142058800(void)

ulonglong FUN_142058800(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  DWORD DVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  longlong *local_18;
  int local_10;
  undefined4 local_c;
  
  FUN_14207c060();
  lVar7 = DAT_146acc978;
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar4 = GetCurrentThreadId();
    uVar5 = 4;
    if (DVar4 != DAT_1468c21c0) goto LAB_142058855;
  }
  uVar5 = 0;
LAB_142058855:
  if (*(int *)(uVar5 + lVar7) == 0) {
    uVar5 = 0;
    LOCK();
    uVar1 = *(uint *)(param_1 + 0xc0);
    if (uVar1 == 0) {
      *(uint *)(param_1 + 0xc0) = 0;
    }
    else {
      uVar5 = (ulonglong)uVar1;
    }
    UNLOCK();
    if (uVar1 != 0) {
      AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xa8));
      iVar8 = *(int *)(param_1 + 0xb8);
      lVar7 = *(longlong *)(param_1 + 0xb0);
      local_18 = (longlong *)0x0;
      local_10 = iVar8;
      if (iVar8 == 0) {
        local_c = 0;
      }
      else {
        TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_18,iVar8,0);
        lVar7 = lVar7 - (longlong)local_18;
        plVar6 = local_18;
        do {
          *plVar6 = *(longlong *)(lVar7 + (longlong)plVar6);
          lVar2 = *(longlong *)(lVar7 + 8 + (longlong)plVar6);
          plVar6[1] = lVar2;
          if (lVar2 != 0) {
            LOCK();
            *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
            UNLOCK();
          }
          plVar6 = plVar6 + 2;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      iVar8 = local_10;
      plVar6 = local_18;
      ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xa8));
      plVar9 = plVar6 + (longlong)iVar8 * 2;
      for (; plVar6 != plVar9; plVar6 = plVar6 + 2) {
        LOCK();
        cVar3 = *(char *)(*plVar6 + 0x30);
        if (cVar3 == '\0') {
          *(char *)(*plVar6 + 0x30) = '\0';
          cVar3 = '\0';
        }
        UNLOCK();
        if (cVar3 != '\t') {
          FUN_142058660();
        }
      }
      uVar5 = TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
              ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_18);
    }
  }
  return uVar5;
}



// FUNCTION 142058970 FUN_142058970 body=731 status=ok
// SIG undefined FUN_142058970(void)

void FUN_142058970(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined2 *puVar10;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined8 local_res18;
  longlong local_res20;
  longlong local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  undefined8 *local_70;
  longlong **local_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined1 local_40 [24];
  
  FUN_14172a070(local_res8,0);
  FUN_14203d100(&local_80,*param_1 + 0x18);
  if (local_80 != (longlong *)0x0) {
    local_60 = *(undefined8 *)(*param_1 + 0x38);
    FString::FString(local_58,*param_1 + 0x40);
    FSoftObjectPath::operator=(local_80 + 1,&local_60);
    lVar6 = FUN_141796df0(*param_1 + 0x38);
    if (*local_80 == 0) {
      if (lVar6 != 0) {
        lVar7 = operator_new(0x18);
        if (lVar7 == 0) {
          puVar8 = (undefined8 *)0x0;
        }
        else {
          puVar8 = (undefined8 *)
                   TStrongObjectPtr<UMaterialInterface>::FInternalReferenceCollector::
                   FInternalReferenceCollector(lVar7,lVar6);
        }
        if (local_80 == &local_res20) {
          if (puVar8 != (undefined8 *)0x0) {
            (**(code **)*puVar8)(puVar8,1);
          }
        }
        else {
          puVar9 = (undefined8 *)*local_80;
          *local_80 = (longlong)puVar8;
          if (puVar9 != (undefined8 *)0x0) {
            (**(code **)*puVar9)(puVar9,1);
          }
        }
      }
    }
    else {
      *(longlong *)(*local_80 + 0x10) = lVar6;
    }
    goto LAB_142058bf8;
  }
  local_88 = (longlong *)FUN_1420178d0();
  local_90 = local_88 + 2;
  SharedPointerInternals::EnableSharedFromThis(&local_90,local_90,local_90);
  local_48 = *(undefined8 *)(*param_1 + 0x38);
  FString::FString(local_40,*param_1 + 0x40);
  FSoftObjectPath::operator=(local_90 + 1,&local_48);
  FString::operator=(local_90 + 4,*param_1 + 0x18);
  plVar5 = local_90;
  lVar6 = FUN_141796df0(*param_1 + 0x38);
  if (*plVar5 == 0) {
    if (lVar6 != 0) {
      lVar7 = operator_new(0x18);
      puVar8 = (undefined8 *)0x0;
      if (lVar7 != 0) {
        puVar8 = (undefined8 *)
                 TStrongObjectPtr<UMaterialInterface>::FInternalReferenceCollector::
                 FInternalReferenceCollector(lVar7,lVar6);
      }
      if (plVar5 == &local_98) {
        if (puVar8 != (undefined8 *)0x0) {
          puVar9 = (undefined8 *)*puVar8;
          goto LAB_142058b3a;
        }
      }
      else {
        puVar4 = (undefined8 *)*plVar5;
        *plVar5 = (longlong)puVar8;
        if (puVar4 != (undefined8 *)0x0) {
          puVar9 = (undefined8 *)*puVar4;
          puVar8 = puVar4;
LAB_142058b3a:
          (*(code *)*puVar9)(puVar8,1);
        }
      }
    }
  }
  else {
    *(longlong *)(*plVar5 + 0x10) = lVar6;
  }
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_146accc70);
  iVar3 = (int)local_90[5];
  if (iVar3 == 0) {
    puVar10 = &DAT_143f3eda8;
  }
  else {
    puVar10 = (undefined2 *)local_90[4];
  }
  puVar8 = (undefined8 *)(ulonglong)(iVar3 * 2 - 2);
  if (iVar3 == 0) {
    puVar8 = (undefined8 *)0x0;
  }
  local_res18 = FFnv::MemFnv64(puVar10,puVar8,1);
  local_70 = &local_res18;
  local_68 = &local_90;
  FUN_142016e10(&DAT_1464f06f0,local_res10,&local_70,0);
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_146accc70);
  plVar5 = local_88;
  if (local_88 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_88 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_88)(local_88);
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
LAB_142058bf8:
  plVar5 = local_78;
  if (local_78 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_78 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_78 + 8))(local_78,1);
      }
    }
  }
  FUN_14172a400(local_res8);
  return;
}



// FUNCTION 142058c50 FUN_142058c50 body=210 status=ok
// SIG undefined FUN_142058c50(void)

void FUN_142058c50(int param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  int local_res8 [2];
  undefined8 local_res10;
  undefined1 local_res18 [16];
  int *local_18;
  undefined8 *local_10;
  
  local_res8[0] = param_1;
  local_res10 = param_2;
  AcquireSRWLockShared((PSRWLOCK)&DAT_146accf30);
  if (DAT_1464f0578 != DAT_1464f05a4) {
    puVar2 = DAT_1464f05b0;
    if (DAT_1464f05b0 == (undefined *)0x0) {
      puVar2 = &DAT_1464f05a8;
    }
    iVar1 = *(int *)(puVar2 + ((longlong)DAT_1464f05b8 - 1U & (longlong)local_res8[0]) * 4);
    while ((iVar1 != -1 && (*(int *)(DAT_1464f0570 + (longlong)iVar1 * 0x18) != local_res8[0]))) {
      iVar1 = *(int *)(DAT_1464f0570 + 0x10 + (longlong)iVar1 * 0x18);
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)&DAT_146accf30);
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_146accf30);
  local_18 = local_res8;
  local_10 = &local_res10;
  FUN_14058d980(&DAT_1464f0570,local_res18,&local_18,0);
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_146accf30);
  return;
}



// FUNCTION 142058d30 FUN_142058d30 body=698 status=ok
// SIG undefined FUN_142058d30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_142058d30(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  DWORD DVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  longlong lVar10;
  undefined1 auStack_1c8 [32];
  undefined2 local_1a8;
  code *local_198 [2];
  undefined1 local_188 [32];
  undefined8 local_168;
  undefined4 local_158;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118 [192];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  cVar5 = FUN_142056970();
  if (cVar5 == '\0') {
    if (*(longlong *)(param_1 + 0x88) == 0) goto LAB_142058f96;
    cVar5 = FUN_1420794b0();
  }
  else {
    cVar5 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar5 != '\0') || (DAT_1468c21ae == '\0')) goto LAB_142058f96;
    DVar6 = GetCurrentThreadId();
    cVar5 = DVar6 == DAT_1468c21c0;
  }
  if (cVar5 == '\0') {
    uStack_130 = *(undefined4 *)param_3;
    uStack_12c = *(undefined4 *)((longlong)param_3 + 4);
    uStack_128 = *(undefined4 *)(param_3 + 1);
    uStack_124 = *(undefined4 *)((longlong)param_3 + 0xc);
    uStack_120 = *(undefined4 *)(param_3 + 2);
    local_168 = 0;
    local_158 = 0;
    local_138 = param_1;
    puVar7 = (undefined8 *)FUN_140438ef0(0x28,local_188);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &PTR_FUN_143ff7760;
      *(undefined4 *)(puVar7 + 1) = (undefined4)local_138;
      *(undefined4 *)((longlong)puVar7 + 0xc) = local_138._4_4_;
      *(undefined4 *)(puVar7 + 2) = uStack_130;
      *(undefined4 *)((longlong)puVar7 + 0x14) = uStack_12c;
      puVar7[3] = CONCAT44(uStack_124,uStack_128);
      puVar7[4] = CONCAT44(uStack_11c,uStack_120);
    }
    local_148 = 0;
    local_198[0] = FUN_14202cb30;
    uStack_140 = 0x21;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,0);
    local_1a8 = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>(local_148,0x21,"FGFxMovie::TranslateRectToScreen")
    ;
    FUN_142018430(local_118,&local_148,local_198);
    uVar8 = FUN_142037a00(local_118,local_198);
    FUN_142032420(param_1,uVar8);
    lVar10 = local_58;
    if (local_58 != 0) {
      while ((lVar10 = local_58, local_58 != 0 && (*(char *)(local_58 + 0x58) == '\0'))) {
        cVar5 = FUN_1415ad720(&DAT_1468e2448);
        if ((cVar5 == '\0') &&
           ((DAT_1468c21ae != '\0' && (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)))) {
          ppuVar9 = (undefined **)FUN_14203ca70();
          if (ppuVar9 != (undefined **)0x0) goto LAB_142058ef4;
        }
        else {
          ppuVar9 = &PTR_PTR_1464f05c0;
LAB_142058ef4:
          FUN_1420714f0(ppuVar9);
        }
        lVar10 = local_58;
        if (local_58 == 0) break;
        if (*(char *)(local_58 + 0x58) == '\0') {
          (**(code **)(**(longlong **)(local_58 + 0x50) + 0x20))(*(longlong **)(local_58 + 0x50),5);
        }
      }
    }
    cVar5 = *(char *)(lVar10 + 0x58);
    while (cVar5 == '\0') {
      (**(code **)(**(longlong **)(lVar10 + 0x50) + 0x20))
                (*(longlong **)(lVar10 + 0x50),0x5d638865,0);
      cVar5 = *(char *)(lVar10 + 0x58);
    }
    uVar2 = *(undefined4 *)(lVar10 + 100);
    uVar3 = *(undefined4 *)(lVar10 + 0x68);
    uVar4 = *(undefined4 *)(lVar10 + 0x6c);
    *(undefined4 *)param_2 = *(undefined4 *)(lVar10 + 0x60);
    *(undefined4 *)((longlong)param_2 + 4) = uVar2;
    *(undefined4 *)(param_2 + 1) = uVar3;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar4;
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)(lVar10 + 0x70);
    FUN_140ce1dc0(local_118);
    return param_2;
  }
LAB_142058f96:
  plVar1 = *(longlong **)(param_1 + 0x78);
  if (plVar1 != (longlong *)0x0) {
    local_148 = *param_3;
    uStack_140 = param_3[1];
    (**(code **)(*plVar1 + 0x1a8))(plVar1,&local_138,&local_148,0);
    *param_2 = local_138;
    param_2[1] = CONCAT44(uStack_12c,uStack_130);
    *(undefined1 *)(param_2 + 2) = 1;
  }
  return param_2;
}



// FUNCTION 142058ff0 FUN_142058ff0 body=491 status=ok
// SIG undefined FUN_142058ff0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_142058ff0(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  DWORD DVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_1a8 [32];
  undefined2 local_188;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  code *local_158 [2];
  undefined1 local_148 [32];
  undefined8 local_128;
  undefined4 local_118;
  undefined1 local_108 [208];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  local_168 = param_3;
  cVar2 = FUN_142056970();
  if (cVar2 == '\0') {
    if (*(longlong *)(param_1 + 0x88) == 0) goto LAB_142059157;
    cVar2 = FUN_1420794b0();
  }
  else {
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar2 != '\0') || (DAT_1468c21ae == '\0')) goto LAB_142059157;
    DVar3 = GetCurrentThreadId();
    cVar2 = DVar3 == DAT_1468c21c0;
  }
  if (cVar2 == '\0') {
    local_128 = 0;
    local_118 = 0;
    local_178 = param_1;
    uStack_170 = param_3;
    puVar4 = (undefined8 *)FUN_140438ef0(0x18,local_148);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &PTR_FUN_143f77c18;
      *(undefined4 *)(puVar4 + 1) = (undefined4)local_178;
      *(undefined4 *)((longlong)puVar4 + 0xc) = local_178._4_4_;
      *(undefined4 *)(puVar4 + 2) = (undefined4)uStack_170;
      *(undefined4 *)((longlong)puVar4 + 0x14) = uStack_170._4_4_;
    }
    local_178 = 0;
    local_158[0] = FUN_14202c5d0;
    uStack_170 = 0x1d;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_178,0);
    local_188 = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>(local_178,0x1d,"FGFxMovie::TranslateToScreen");
    FUN_142018510(local_108,&local_178,local_158);
    uVar5 = FUN_142037d70(local_108,local_158);
    FUN_142032420(param_1,uVar5);
    FUN_1420385a0(local_108,param_2);
    FUN_140ce1dc0(local_108);
    return param_2;
  }
LAB_142059157:
  plVar1 = *(longlong **)(param_1 + 0x78);
  if (plVar1 == (longlong *)0x0) {
    *param_2 = (undefined4)DAT_1468b5d88;
    local_178._4_4_ = DAT_1468b5d88._4_4_;
  }
  else {
    local_160 = (undefined4)local_168;
    local_15c = local_168._4_4_;
    (**(code **)(*plVar1 + 0x1b0))(plVar1,&local_178,&local_160,0);
    *param_2 = (undefined4)local_178;
  }
  param_2[1] = local_178._4_4_;
  return param_2;
}



// FUNCTION 1420591e0 FUN_1420591e0 body=208 status=ok
// SIG undefined FUN_1420591e0(void)

void FUN_1420591e0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xa8));
  plVar2 = *(longlong **)(param_1 + 0xb0);
  if (plVar2 != plVar2 + (longlong)*(int *)(param_1 + 0xb8) * 2) {
    plVar5 = plVar2;
    do {
      if (*plVar5 == *param_2) {
        uVar6 = (longlong)plVar5 - (longlong)plVar2 >> 4;
        iVar4 = (int)uVar6;
        if ((-1 < iVar4) && (iVar4 < *(int *)(param_1 + 0xb8))) {
          TArray<TSharedPtr<FUdpReassembledMessage,1>,FDefaultAllocator>::RemoveAtSwapImpl
                    (param_1 + 0xb0,uVar6 & 0xffffffff,1,CONCAT71((int7)((ulonglong)plVar2 >> 8),1))
          ;
        }
        break;
      }
      plVar5 = plVar5 + 2;
    } while (plVar5 != plVar2 + (longlong)*(int *)(param_1 + 0xb8) * 2);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xa8));
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar2 + 1;
    lVar3 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar2)(plVar2);
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
  return;
}



// FUNCTION 1420592b0 FUN_1420592b0 body=118 status=ok
// SIG undefined FUN_1420592b0(void)

void FUN_1420592b0(undefined8 param_1)

{
  undefined8 *puVar1;
  longlong local_68 [2];
  code *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  FString::FString(local_68,param_1);
  local_28 = 0;
  local_18 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_CopyToEmptyStorage_144f71988;
    FString::FString(puVar1 + 1,local_68);
  }
  local_58[0] = FUN_14202c500;
  FUN_14204c280(local_58);
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  return;
}


